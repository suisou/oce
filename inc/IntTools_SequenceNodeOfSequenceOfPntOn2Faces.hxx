// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_SequenceNodeOfSequenceOfPntOn2Faces_HeaderFile
#define _IntTools_SequenceNodeOfSequenceOfPntOn2Faces_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IntTools_SequenceNodeOfSequenceOfPntOn2Faces.hxx>

#include <IntTools_PntOn2Faces.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_SeqNodePtr.hxx>
class IntTools_PntOn2Faces;
class IntTools_SequenceOfPntOn2Faces;



class IntTools_SequenceNodeOfSequenceOfPntOn2Faces : public TCollection_SeqNode
{

public:

  
    IntTools_SequenceNodeOfSequenceOfPntOn2Faces(const IntTools_PntOn2Faces& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      IntTools_PntOn2Faces& Value()  const;




  DEFINE_STANDARD_RTTI(IntTools_SequenceNodeOfSequenceOfPntOn2Faces)

protected:




private: 


  IntTools_PntOn2Faces myValue;


};

#define SeqItem IntTools_PntOn2Faces
#define SeqItem_hxx <IntTools_PntOn2Faces.hxx>
#define TCollection_SequenceNode IntTools_SequenceNodeOfSequenceOfPntOn2Faces
#define TCollection_SequenceNode_hxx <IntTools_SequenceNodeOfSequenceOfPntOn2Faces.hxx>
#define Handle_TCollection_SequenceNode Handle_IntTools_SequenceNodeOfSequenceOfPntOn2Faces
#define TCollection_SequenceNode_Type_() IntTools_SequenceNodeOfSequenceOfPntOn2Faces_Type_()
#define TCollection_Sequence IntTools_SequenceOfPntOn2Faces
#define TCollection_Sequence_hxx <IntTools_SequenceOfPntOn2Faces.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _IntTools_SequenceNodeOfSequenceOfPntOn2Faces_HeaderFile
