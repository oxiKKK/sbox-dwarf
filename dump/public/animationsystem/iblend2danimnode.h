
//
// public/animationsystem/iblend2danimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 10
//	classes: 2
//

// <010853C3> ../public/animationsystem/iblend2danimnode.h:14
void IBlend2DItem::IBlend2DItem()
{
} /* size: 0 */

// <010853A7> ../public/animationsystem/iblend2danimnode.h:14
inline void IBlend2DItem::IBlend2DItem()
{
} /* size: 0 */

// <01085390> ../public/animationsystem/iblend2danimnode.h:14
void IBlend2DItem::~IBlend2DItem()
{
} /* size: 0 */

// <0108535D> ../public/animationsystem/iblend2danimnode.h:14
inline void IBlend2DItem::~IBlend2DItem()
{
} /* size: 0 */

// <005083C1> ../public/animationsystem/iblend2danimnode.h:14
inline void IBlend2DItem::operator=(const IBlend2DItem &)
{
} /* size: 0 */

// <0100B905> ../public/animationsystem/iblend2danimnode.h:14
// member functions: 27
// member variables: 2
// static member variable: 1
// vtable entries: 7
// class size: 16
class IBlend2DItem : public Object, public IAnimTagSpanContainer {
public:
	/* class Object <ancestor>; */ /* 0 0 */
	/* class IAnimTagSpanContainer <ancestor>; */ /* 8 0 */
	void IBlend2DItem(IBlend2DItem* , IBlend2DItem& );
	void IBlend2DItem(IBlend2DItem* , const IBlend2DItem& );
	void IBlend2DItem(IBlend2DItem* );
private:
	static class CClassInfoT<IBlend2DItem> m_classInfoIBlend2DItem; /* 0 0 */
	/* ../public/animationsystem/iblend2danimnode.h:16 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:12 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:12 */
	virtual const CClassInfo& GetTypeInfo(const IBlend2DItem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:12 */
	virtual void* CastToBase(IBlend2DItem* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:12 */
	virtual const void* CastToBase(const IBlend2DItem* , ClassID);
	/* ../public/animationsystem/iblend2danimnode.h:20 */
	virtual const CUtlString& GetSequenceName(const IBlend2DItem* );
	/* ../public/animationsystem/iblend2danimnode.h:21 */
	virtual void SetSequenceName(IBlend2DItem* , const CUtlString& );
	/* ../public/animationsystem/iblend2danimnode.h:24 */
	virtual const Vector2D& GetBlendValue(const IBlend2DItem* );
	/* ../public/animationsystem/iblend2danimnode.h:25 */
	virtual void SetBlendValue(IBlend2DItem* , const Vector2D& );
	virtual void ~IBlend2DItem(IBlend2DItem* );
	virtual const void  * CastToBase(const class IBlend2DItem  *, class ClassID); /* linkage=_ZNK12IBlend2DItem10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class IBlend2DItem *, class ClassID); /* linkage=_ZN12IBlend2DItem10CastToBaseEN10Reflection7ClassIDE */
	/* <1090173> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:12 */
	virtual const class CClassInfo  & GetTypeInfo(const class IBlend2DItem  *); /* linkage=_ZNK12IBlend2DItem11GetTypeInfoEv */
	class IBlend2DItem & operator=(class IBlend2DItem *, const class IBlend2DItem  &); /* linkage=_ZN12IBlend2DItemaSERKS_ */
	virtual void ~IBlend2DItem(class IBlend2DItem *); /* linkage=_ZN12IBlend2DItemD4Ev */
	void IBlend2DItem(class IBlend2DItem *); /* linkage=_ZN12IBlend2DItemC4Ev */
	void IBlend2DItem(class IBlend2DItem *, class IBlend2DItem &); /* linkage=_ZN12IBlend2DItemC4EOS_ */
	void IBlend2DItem(class IBlend2DItem *, const class IBlend2DItem  &); /* linkage=_ZN12IBlend2DItemC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN12IBlend2DItem8MyTypeIDEv */
	/* <1094a9a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:12 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN12IBlend2DItem10MyTypeInfoEv */
	virtual const class CUtlString  & GetSequenceName(const class IBlend2DItem  *); /* linkage=_ZNK12IBlend2DItem15GetSequenceNameEv */
	virtual void SetSequenceName(class IBlend2DItem *, const class CUtlString  &); /* linkage=_ZN12IBlend2DItem15SetSequenceNameERK10CUtlString */
	virtual const class Vector2D  & GetBlendValue(const class IBlend2DItem  *); /* linkage=_ZNK12IBlend2DItem13GetBlendValueEv */
	virtual void SetBlendValue(class IBlend2DItem *, const class Vector2D  &); /* linkage=_ZN12IBlend2DItem13SetBlendValueERK8Vector2D */
};

// <01085598> ../public/animationsystem/iblend2danimnode.h:16
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 16
	const char   __PRETTY_FUNCTION__; // 20975
} /* size: 0, variables: 2 */

// <01083387> ../public/animationsystem/iblend2danimnode.h:32
void IBlend2DAnimNode::IBlend2DAnimNode()
{
} /* size: 0 */

// <0108336B> ../public/animationsystem/iblend2danimnode.h:32
inline void IBlend2DAnimNode::IBlend2DAnimNode()
{
} /* size: 0 */

// <0050536E> ../public/animationsystem/iblend2danimnode.h:32
inline void IBlend2DAnimNode::operator=(const IBlend2DAnimNode &)
{
} /* size: 0 */

// <0100BB17> ../public/animationsystem/iblend2danimnode.h:32
// member functions: 38
// member variable: 1
// static member variable: 1
// vtable entries: 13
// class size: 8
class IBlend2DAnimNode {
	void IBlend2DAnimNode(IBlend2DAnimNode* , IBlend2DAnimNode& );
	void IBlend2DAnimNode(IBlend2DAnimNode* , const IBlend2DAnimNode& );
	void IBlend2DAnimNode(IBlend2DAnimNode* );
	void ~IBlend2DAnimNode(IBlend2DAnimNode* );
	int ()(void) * * _vptr.IBlend2DAnimNode; /* 0 8 */
private:
	static class CClassInfoT<IBlend2DAnimNode> m_classInfoIBlend2DAnimNode; /* 0 0 */
	/* ../public/animationsystem/iblend2danimnode.h:34 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:13 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:13 */
	virtual const CClassInfo& GetTypeInfo(const IBlend2DAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:13 */
	virtual void* CastToBase(IBlend2DAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:13 */
	virtual const void* CastToBase(const IBlend2DAnimNode* , ClassID);
	/* ../public/animationsystem/iblend2danimnode.h:37 */
	virtual int GetItemCount(const IBlend2DAnimNode* );
	/* ../public/animationsystem/iblend2danimnode.h:40 */
	virtual IBlend2DItem* GetItem(IBlend2DAnimNode* , int);
	/* ../public/animationsystem/iblend2danimnode.h:41 */
	virtual const IBlend2DItem* GetItem(const IBlend2DAnimNode* , int);
	/* ../public/animationsystem/iblend2danimnode.h:44 */
	virtual IBlend2DItem* AddItem(IBlend2DAnimNode* );
	/* ../public/animationsystem/iblend2danimnode.h:47 */
	virtual void RemoveItem(IBlend2DAnimNode* , int);
	/* ../public/animationsystem/iblend2danimnode.h:50 */
	virtual void RemoveItem(IBlend2DAnimNode* , IBlend2DItem* );
	/* ../public/animationsystem/iblend2danimnode.h:53 */
	virtual AABB_t GetBlendSpaceExtents(const IBlend2DAnimNode* , HModel);
	/* ../public/animationsystem/iblend2danimnode.h:57 */
	virtual void GenerateBlendValues(IBlend2DAnimNode* , HModel);
	/* ../public/animationsystem/iblend2danimnode.h:60 */
	virtual CUtlString GetHorizontalName(const IBlend2DAnimNode* );
	/* ../public/animationsystem/iblend2danimnode.h:63 */
	virtual CUtlString GetVerticalName(const IBlend2DAnimNode* );
	void IBlend2DAnimNode(class IBlend2DAnimNode *, class IBlend2DAnimNode &); /* linkage=_ZN16IBlend2DAnimNodeC4EOS_ */
	void IBlend2DAnimNode(class IBlend2DAnimNode *, const class IBlend2DAnimNode  &); /* linkage=_ZN16IBlend2DAnimNodeC4ERKS_ */
	void IBlend2DAnimNode(class IBlend2DAnimNode *); /* linkage=_ZN16IBlend2DAnimNodeC4Ev */
	void ~IBlend2DAnimNode(class IBlend2DAnimNode *); /* linkage=_ZN16IBlend2DAnimNodeD4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN16IBlend2DAnimNode8MyTypeIDEv */
	/* <1094ab8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:13 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN16IBlend2DAnimNode10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class IBlend2DAnimNode  *); /* linkage=_ZNK16IBlend2DAnimNode11GetTypeInfoEv */
	virtual void * CastToBase(class IBlend2DAnimNode *, class ClassID); /* linkage=_ZN16IBlend2DAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class IBlend2DAnimNode  *, class ClassID); /* linkage=_ZNK16IBlend2DAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual int GetItemCount(const class IBlend2DAnimNode  *); /* linkage=_ZNK16IBlend2DAnimNode12GetItemCountEv */
	virtual class IBlend2DItem * GetItem(class IBlend2DAnimNode *, int); /* linkage=_ZN16IBlend2DAnimNode7GetItemEi */
	virtual const class IBlend2DItem  * GetItem(const class IBlend2DAnimNode  *, int); /* linkage=_ZNK16IBlend2DAnimNode7GetItemEi */
	virtual class IBlend2DItem * AddItem(class IBlend2DAnimNode *); /* linkage=_ZN16IBlend2DAnimNode7AddItemEv */
	virtual void RemoveItem(class IBlend2DAnimNode *, int); /* linkage=_ZN16IBlend2DAnimNode10RemoveItemEi */
	virtual void RemoveItem(class IBlend2DAnimNode *, class IBlend2DItem *); /* linkage=_ZN16IBlend2DAnimNode10RemoveItemEP12IBlend2DItem */
	virtual class AABB_t GetBlendSpaceExtents(const class IBlend2DAnimNode  *, HModel); /* linkage=_ZNK16IBlend2DAnimNode20GetBlendSpaceExtentsE11CWeakHandleI25InfoForResourceTypeCModelE */
	virtual void GenerateBlendValues(class IBlend2DAnimNode *, HModel); /* linkage=_ZN16IBlend2DAnimNode19GenerateBlendValuesE11CWeakHandleI25InfoForResourceTypeCModelE */
	virtual class CUtlString GetHorizontalName(const class IBlend2DAnimNode  *); /* linkage=_ZNK16IBlend2DAnimNode17GetHorizontalNameEv */
	virtual class CUtlString GetVerticalName(const class IBlend2DAnimNode  *); /* linkage=_ZNK16IBlend2DAnimNode15GetVerticalNameEv */
};

// <01085567> ../public/animationsystem/iblend2danimnode.h:34
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 34
	const char   __PRETTY_FUNCTION__; // 21083
} /* size: 0, variables: 2 */

