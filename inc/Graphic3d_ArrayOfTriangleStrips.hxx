// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_ArrayOfTriangleStrips_HeaderFile
#define _Graphic3d_ArrayOfTriangleStrips_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Graphic3d_ArrayOfTriangleStrips.hxx>

#include <Graphic3d_ArrayOfPrimitives.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>


//! Contains triangles strip array definition
class Graphic3d_ArrayOfTriangleStrips : public Graphic3d_ArrayOfPrimitives
{

public:

  
  //! Creates an array of triangle strips,
  //! a polygon can be filled as:
  //! 1) creating a single strip defined with his vertexs.
  //! i.e:
  //! myArray = Graphic3d_ArrayOfTriangleStrips(7)
  //! myArray->AddVertex(x1,y1,z1)
  //! ....
  //! myArray->AddVertex(x7,y7,z7)
  //! 2) creating separate strips defined with a predefined
  //! number of strips and the number of vertex per strip.
  //! i.e:
  //! myArray = Graphic3d_ArrayOfTriangleStrips(8,2)
  //! myArray->AddBound(4)
  //! myArray->AddVertex(x1,y1,z1)
  //! ....
  //! myArray->AddVertex(x4,y4,z4)
  //! myArray->AddBound(4)
  //! myArray->AddVertex(x5,y5,z5)
  //! ....
  //! myArray->AddVertex(x8,y8,z8)
  //!
  //! <maxVertexs> defined the maximun allowed vertex number in the array.
  //! <maxStrips> defined the maximun allowed strip number in the array.
  //! The number of triangle really drawn is :
  //! VertexNumber()-2*Min(1,BoundNumber())
  //! Warning:
  //! When <hasVNormals> is TRUE , you must use one of
  //! AddVertex(Point,Normal)
  //! or  AddVertex(Point,Normal,Color)
  //! or  AddVertex(Point,Normal,Texel) methods.
  //! When <hasVColors> is TRUE , you must use one of
  //! AddVertex(Point,Color)
  //! or  AddVertex(Point,Normal,Color) methods.
  //! When <hasTexels> is TRUE , you must use one of
  //! AddVertex(Point,Texel)
  //! or  AddVertex(Point,Normal,Texel) methods.
  //! When <hasBColors> is TRUE , <maxBounds> must be > 0 and
  //! you must use the
  //! AddBound(number,Color) method.
  //! Warning:
  //! the user is responsible about the orientation of the strip
  //! depending of the order of the created vertex and this
  //! orientation must be coherent with the vertex normal optionnaly
  //! given at each vertex (See the Orientate() methods).
  Standard_EXPORT Graphic3d_ArrayOfTriangleStrips(const Standard_Integer maxVertexs, const Standard_Integer maxStrips = 0, const Standard_Boolean hasVNormals = Standard_False, const Standard_Boolean hasVColors = Standard_False, const Standard_Boolean hasSColors = Standard_False, const Standard_Boolean hasTexels = Standard_False);




  DEFINE_STANDARD_RTTI(Graphic3d_ArrayOfTriangleStrips)

protected:




private: 




};







#endif // _Graphic3d_ArrayOfTriangleStrips_HeaderFile
