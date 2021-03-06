// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPatch_TheSearchInside_HeaderFile
#define _IntPatch_TheSearchInside_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Boolean.hxx>
#include <IntSurf_SequenceOfInteriorPoint.hxx>
#include <Handle_Adaptor3d_HSurface.hxx>
#include <Handle_Adaptor3d_TopolTool.hxx>
#include <Standard_Real.hxx>
#include <Standard_Integer.hxx>
class StdFail_NotDone;
class Standard_OutOfRange;
class Adaptor3d_HSurface;
class Adaptor3d_HSurfaceTool;
class Adaptor3d_TopolTool;
class IntPatch_HInterTool;
class IntPatch_TheSurfFunction;
class IntSurf_InteriorPoint;



class IntPatch_TheSearchInside 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT IntPatch_TheSearchInside();
  
  Standard_EXPORT IntPatch_TheSearchInside(IntPatch_TheSurfFunction& F, const Handle(Adaptor3d_HSurface)& Surf, const Handle(Adaptor3d_TopolTool)& T, const Standard_Real Epsilon);
  
  Standard_EXPORT   void Perform (IntPatch_TheSurfFunction& F, const Handle(Adaptor3d_HSurface)& Surf, const Handle(Adaptor3d_TopolTool)& T, const Standard_Real Epsilon) ;
  
  Standard_EXPORT   void Perform (IntPatch_TheSurfFunction& F, const Handle(Adaptor3d_HSurface)& Surf, const Standard_Real UStart, const Standard_Real VStart) ;
  
      Standard_Boolean IsDone()  const;
  
      Standard_Integer NbPoints()  const;
  
     const  IntSurf_InteriorPoint& Value (const Standard_Integer Index)  const;




protected:





private:



  Standard_Boolean done;
  IntSurf_SequenceOfInteriorPoint list;


};

#define ThePSurface Handle(Adaptor3d_HSurface)
#define ThePSurface_hxx <Adaptor3d_HSurface.hxx>
#define ThePSurfaceTool Adaptor3d_HSurfaceTool
#define ThePSurfaceTool_hxx <Adaptor3d_HSurfaceTool.hxx>
#define Handle_TheTopolTool Handle_Adaptor3d_TopolTool
#define TheTopolTool Adaptor3d_TopolTool
#define TheTopolTool_hxx <Adaptor3d_TopolTool.hxx>
#define TheSITool IntPatch_HInterTool
#define TheSITool_hxx <IntPatch_HInterTool.hxx>
#define TheFunction IntPatch_TheSurfFunction
#define TheFunction_hxx <IntPatch_TheSurfFunction.hxx>
#define IntStart_SearchInside IntPatch_TheSearchInside
#define IntStart_SearchInside_hxx <IntPatch_TheSearchInside.hxx>

#include <IntStart_SearchInside.lxx>

#undef ThePSurface
#undef ThePSurface_hxx
#undef ThePSurfaceTool
#undef ThePSurfaceTool_hxx
#undef Handle_TheTopolTool
#undef TheTopolTool
#undef TheTopolTool_hxx
#undef TheSITool
#undef TheSITool_hxx
#undef TheFunction
#undef TheFunction_hxx
#undef IntStart_SearchInside
#undef IntStart_SearchInside_hxx




#endif // _IntPatch_TheSearchInside_HeaderFile
