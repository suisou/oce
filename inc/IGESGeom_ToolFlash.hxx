// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESGeom_ToolFlash_HeaderFile
#define _IGESGeom_ToolFlash_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_IGESGeom_Flash.hxx>
#include <Handle_IGESData_IGESReaderData.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_Interface_Check.hxx>
#include <Handle_Message_Messenger.hxx>
#include <Standard_Integer.hxx>
class Standard_DomainError;
class IGESGeom_Flash;
class IGESData_IGESReaderData;
class IGESData_ParamReader;
class IGESData_IGESWriter;
class Interface_EntityIterator;
class IGESData_DirChecker;
class Interface_ShareTool;
class Interface_Check;
class Interface_CopyTool;
class IGESData_IGESDumper;
class Message_Messenger;


//! Tool to work on a Flash. Called by various Modules
//! (ReadWriteModule, GeneralModule, SpecificModule)
class IGESGeom_ToolFlash 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns a ToolFlash, ready to work
  Standard_EXPORT IGESGeom_ToolFlash();
  
  //! Reads own parameters from file. <PR> gives access to them,
  //! <IR> detains parameter types and values
  Standard_EXPORT   void ReadOwnParams (const Handle(IGESGeom_Flash)& ent, const Handle(IGESData_IGESReaderData)& IR, IGESData_ParamReader& PR)  const;
  
  //! Writes own parameters to IGESWriter
  Standard_EXPORT   void WriteOwnParams (const Handle(IGESGeom_Flash)& ent, IGESData_IGESWriter& IW)  const;
  
  //! Lists the Entities shared by a Flash <ent>, from
  //! its specific (own) parameters
  Standard_EXPORT   void OwnShared (const Handle(IGESGeom_Flash)& ent, Interface_EntityIterator& iter)  const;
  
  //! Sets automatic unambiguous Correction on a Flash
  //! (LineFont in Directory Entry forced to Rank = 1)
  Standard_EXPORT   Standard_Boolean OwnCorrect (const Handle(IGESGeom_Flash)& ent)  const;
  
  //! Returns specific DirChecker
  Standard_EXPORT   IGESData_DirChecker DirChecker (const Handle(IGESGeom_Flash)& ent)  const;
  
  //! Performs Specific Semantic Check
  Standard_EXPORT   void OwnCheck (const Handle(IGESGeom_Flash)& ent, const Interface_ShareTool& shares, Handle(Interface_Check)& ach)  const;
  
  //! Copies Specific Parameters
  Standard_EXPORT   void OwnCopy (const Handle(IGESGeom_Flash)& entfrom, const Handle(IGESGeom_Flash)& entto, Interface_CopyTool& TC)  const;
  
  //! Dump of Specific Parameters
  Standard_EXPORT   void OwnDump (const Handle(IGESGeom_Flash)& ent, const IGESData_IGESDumper& dumper, const Handle(Message_Messenger)& S, const Standard_Integer own)  const;




protected:





private:





};







#endif // _IGESGeom_ToolFlash_HeaderFile
