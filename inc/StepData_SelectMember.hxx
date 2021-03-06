// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepData_SelectMember_HeaderFile
#define _StepData_SelectMember_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepData_SelectMember.hxx>

#include <MMgt_TShared.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_CString.hxx>
#include <Standard_Integer.hxx>
#include <Interface_ParamType.hxx>
#include <StepData_Logical.hxx>
#include <Standard_Real.hxx>


//! The general form for a Select Member. A Select Member can,
//! either define a value of a basic type (such as an integer)
//! with an additional information : a name or list of names
//! which precise the meaning of this value
//! or be an alternate value in a select, which also accepts an
//! entity (in this case, the name is not mandatory)
//!
//! Several sub-types of SelectMember are defined for integer and
//! real value, plus an "universal" one for any, and one more to
//! describe a select with several names
//!
//! It is also possible to define a specific subtype by redefining
//! virtual method, then give a better control
//!
//! Remark : this class itself could be deferred, because at least
//! one of its virtual methods must be redefined to be usable
class StepData_SelectMember : public MMgt_TShared
{

public:

  
  Standard_EXPORT StepData_SelectMember();
  
  //! Tells if a SelectMember has a name. Default is False
  Standard_EXPORT virtual   Standard_Boolean HasName()  const;
  
  //! Returns the name of a SelectMember. Default is empty
  Standard_EXPORT virtual   Standard_CString Name()  const;
  
  //! Sets the name of a SelectMember, returns True if done, False
  //! if no name is allowed
  //! Default does nothing and returns False
  Standard_EXPORT virtual   Standard_Boolean SetName (const Standard_CString name) ;
  
  //! Tells if the name of a SelectMember matches a given one
  //! By default, compares the strings, can be redefined (optimised)
  Standard_EXPORT virtual   Standard_Boolean Matches (const Standard_CString name)  const;
  
  Standard_EXPORT virtual   Standard_Integer Kind()  const;
  
  Standard_EXPORT virtual   void SetKind (const Standard_Integer kind) ;
  
  //! Returns the Kind of the SelectMember, under the form of an
  //! enum ParamType
  Standard_EXPORT   Interface_ParamType ParamType()  const;
  
  //! This internal method gives access to a value implemented by an
  //! Integer (to read it)
  Standard_EXPORT virtual   Standard_Integer Int()  const;
  
  //! This internal method gives access to a value implemented by an
  //! Integer (to set it)
  Standard_EXPORT virtual   void SetInt (const Standard_Integer val) ;
  
  //! Gets the value as an Integer
  Standard_EXPORT   Standard_Integer Integer()  const;
  
  Standard_EXPORT   void SetInteger (const Standard_Integer val) ;
  
  Standard_EXPORT   Standard_Boolean Boolean()  const;
  
  Standard_EXPORT   void SetBoolean (const Standard_Boolean val) ;
  
  Standard_EXPORT   StepData_Logical Logical()  const;
  
  Standard_EXPORT   void SetLogical (const StepData_Logical val) ;
  
  Standard_EXPORT virtual   Standard_Real Real()  const;
  
  Standard_EXPORT virtual   void SetReal (const Standard_Real val) ;
  
  Standard_EXPORT virtual   Standard_CString String()  const;
  
  Standard_EXPORT virtual   void SetString (const Standard_CString val) ;
  
  Standard_EXPORT   Standard_Integer Enum()  const;
  
  Standard_EXPORT virtual   Standard_CString EnumText()  const;
  
  Standard_EXPORT   void SetEnum (const Standard_Integer val, const Standard_CString text = "") ;
  
  Standard_EXPORT virtual   void SetEnumText (const Standard_Integer val, const Standard_CString text) ;




  DEFINE_STANDARD_RTTI(StepData_SelectMember)

protected:




private: 




};







#endif // _StepData_SelectMember_HeaderFile
