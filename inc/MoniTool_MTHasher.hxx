// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MoniTool_MTHasher_HeaderFile
#define _MoniTool_MTHasher_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <Standard_CString.hxx>
#include <Standard_Boolean.hxx>



//! The auxiliary class provides hash code for mapping objects
class MoniTool_MTHasher 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns a HasCode value for the CString <Str>  in the
  //! range 0..Upper.
  //! Default ::HashCode(Str,Upper)
    static   Standard_Integer HashCode (const Standard_CString Str, const Standard_Integer Upper) ;
  
  //! Returns True  when the two CString are the same. Two
  //! same strings must have the same hashcode, the
  //! contrary is not necessary.
  //! Default Str1 == Str2
    static   Standard_Boolean IsEqual (const Standard_CString Str1, const Standard_CString Str2) ;




protected:





private:





};


#include <MoniTool_MTHasher.lxx>





#endif // _MoniTool_MTHasher_HeaderFile
