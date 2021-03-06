// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_PlaneTrihedron_HeaderFile
#define _AIS_PlaneTrihedron_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_AIS_PlaneTrihedron.hxx>

#include <Handle_Geom_Plane.hxx>
#include <Handle_AIS_InteractiveObject.hxx>
#include <TCollection_AsciiString.hxx>
#include <AIS_InteractiveObject.hxx>
#include <Handle_AIS_Line.hxx>
#include <Handle_AIS_Point.hxx>
#include <Standard_Real.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
#include <PrsMgr_PresentationManager3d.hxx>
#include <Handle_Prs3d_Presentation.hxx>
#include <Handle_Prs3d_Projector.hxx>
#include <Handle_Geom_Transformation.hxx>
#include <SelectMgr_Selection.hxx>
#include <AIS_KindOfInteractive.hxx>
#include <Quantity_NameOfColor.hxx>
class Geom_Plane;
class AIS_InteractiveObject;
class AIS_Line;
class AIS_Point;
class Prs3d_Presentation;
class Prs3d_Projector;
class Geom_Transformation;
class Quantity_Color;
class TCollection_AsciiString;


//! To construct a selectable 2d axis system in a 3d
//! drawing. This can be placed anywhere in the 3d
//! system, and provides a coordinate system for
//! drawing curves and shapes in a plane.
//! There are 3 selection modes:
//! -   mode 0   selection of the whole plane "trihedron"
//! -   mode 1   selection of the origin of the plane "trihedron"
//! -   mode 2   selection of the axes.
//! Warning
//! For the presentation of planes and trihedra, the
//! millimetre is default unit of length, and 100 the default
//! value for the representation of the axes. If you modify
//! these dimensions, you must temporarily recover the
//! Drawer object. From inside it, take the Aspects in
//! which   the values for length are stocked, for example,
//! PlaneAspect for planes and FirstAxisAspect for
//! trihedra. Change these values and recalculate the presentation.
class AIS_PlaneTrihedron : public AIS_InteractiveObject
{

public:

  
  //! Initializes the plane aPlane. The plane trihedron is
  //! constructed from this and an axis.
  Standard_EXPORT AIS_PlaneTrihedron(const Handle(Geom_Plane)& aPlane);
  
  //! Returns the component specified in SetComponent.
  Standard_EXPORT   Handle(Geom_Plane) Component() ;
  
  //! Creates an instance of the component object aPlane.
  Standard_EXPORT   void SetComponent (const Handle(Geom_Plane)& aPlane) ;
  
  //! Returns the "XAxis".
  Standard_EXPORT   Handle(AIS_Line) XAxis()  const;
  
  //! Returns the "YAxis".
  Standard_EXPORT   Handle(AIS_Line) YAxis()  const;
  
  //! Returns the point of origin of the plane trihedron.
  Standard_EXPORT   Handle(AIS_Point) Position()  const;
  
  //! Sets the length of the X and Y axes.
  Standard_EXPORT   void SetLength (const Standard_Real theLength) ;
  
  //! Returns the length of X and Y axes.
  Standard_EXPORT   Standard_Real GetLength()  const;
  
  //! Returns true if the display mode selected, aMode, is valid.
  Standard_EXPORT   Standard_Boolean AcceptDisplayMode (const Standard_Integer aMode)  const;
  
  //! computes the presentation according to a point of view
  //! given by <aProjector>.
  //! To be Used when the associated degenerated Presentations
  //! have been transformed by <aTrsf> which is not a Pure
  //! Translation. The HLR Prs can't be deducted automatically
  //! WARNING :<aTrsf> must be applied
  //! to the object to display before computation  !!!
  Standard_EXPORT virtual   void Compute (const Handle(Prs3d_Projector)& aProjector, const Handle(Geom_Transformation)& aTrsf, const Handle(Prs3d_Presentation)& aPresentation) ;
  
    virtual   Standard_Integer Signature()  const;
  
  //! Returns datum as the type of Interactive Object.
    virtual   AIS_KindOfInteractive Type()  const;
  
  //! Allows you to provide settings for the color aColor.
  Standard_EXPORT   void SetColor (const Quantity_NameOfColor aColor) ;
  
  Standard_EXPORT   void SetColor (const Quantity_Color& aColor) ;
  
      void SetXLabel (const TCollection_AsciiString& aLabel) ;
  
      void SetYLabel (const TCollection_AsciiString& aLabel) ;




  DEFINE_STANDARD_RTTI(AIS_PlaneTrihedron)

protected:

  
  Standard_EXPORT virtual   void Compute (const Handle(PrsMgr_PresentationManager3d)& aPresentationManager, const Handle(Prs3d_Presentation)& aPresentation, const Standard_Integer aMode = 0) ;



private: 

  
  Standard_EXPORT   void Compute (const Handle(Prs3d_Projector)& aProjector, const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT   void ComputeSelection (const Handle(SelectMgr_Selection)& aSelection, const Standard_Integer aMode) ;

  Handle(Geom_Plane) myPlane;
  Handle(AIS_InteractiveObject) myShapes[3];
  TCollection_AsciiString myXLabel;
  TCollection_AsciiString myYLabel;


};


#include <AIS_PlaneTrihedron.lxx>





#endif // _AIS_PlaneTrihedron_HeaderFile
