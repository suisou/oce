// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepData_DescrReadWrite_HeaderFile
#define _StepData_DescrReadWrite_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepData_DescrReadWrite.hxx>

#include <Handle_StepData_Protocol.hxx>
#include <StepData_ReadWriteModule.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_StepData_StepReaderData.hxx>
#include <Handle_Interface_Check.hxx>
#include <Handle_Standard_Transient.hxx>
class StepData_Protocol;
class TCollection_AsciiString;
class TColStd_SequenceOfAsciiString;
class StepData_StepReaderData;
class Interface_Check;
class Standard_Transient;
class StepData_StepWriter;



class StepData_DescrReadWrite : public StepData_ReadWriteModule
{

public:

  
  Standard_EXPORT StepData_DescrReadWrite(const Handle(StepData_Protocol)& proto);
  
  Standard_EXPORT   Standard_Integer CaseStep (const TCollection_AsciiString& atype)  const;
  
  Standard_EXPORT virtual   Standard_Integer CaseStep (const TColStd_SequenceOfAsciiString& types)  const;
  
  Standard_EXPORT virtual   Standard_Boolean IsComplex (const Standard_Integer CN)  const;
  
  Standard_EXPORT  const  TCollection_AsciiString& StepType (const Standard_Integer CN)  const;
  
  Standard_EXPORT virtual   Standard_Boolean ComplexType (const Standard_Integer CN, TColStd_SequenceOfAsciiString& types)  const;
  
  Standard_EXPORT   void ReadStep (const Standard_Integer CN, const Handle(StepData_StepReaderData)& data, const Standard_Integer num, Handle(Interface_Check)& ach, const Handle(Standard_Transient)& ent)  const;
  
  Standard_EXPORT   void WriteStep (const Standard_Integer CN, StepData_StepWriter& SW, const Handle(Standard_Transient)& ent)  const;




  DEFINE_STANDARD_RTTI(StepData_DescrReadWrite)

protected:




private: 


  Handle(StepData_Protocol) theproto;


};







#endif // _StepData_DescrReadWrite_HeaderFile
