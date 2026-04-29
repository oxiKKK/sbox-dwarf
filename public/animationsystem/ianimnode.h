
//
// public/animationsystem/ianimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 16
//	class: 1
//	struct: 1
//

// <015C420C> ../public/animationsystem/ianimnode.h:20
void AnimNodeLocation_t::~AnimNodeLocation_t()
{
} /* size: 0 */

// <015C41F0> ../public/animationsystem/ianimnode.h:20
inline void AnimNodeLocation_t::~AnimNodeLocation_t()
{
} /* size: 0 */

// <0156C4BE> ../public/animationsystem/ianimnode.h:20
inline void AnimNodeLocation_t::operator=(const AnimNodeLocation_t &)
{
} /* size: 0 */

// <0156B4CF> ../public/animationsystem/ianimnode.h:20
void AnimNodeLocation_t::AnimNodeLocation_t()
{
} /* size: 0 */

// <0156B4B3> ../public/animationsystem/ianimnode.h:20
inline void AnimNodeLocation_t::AnimNodeLocation_t()
{
} /* size: 0 */

// <011880F8> ../public/animationsystem/ianimnode.h:20
void AnimNodeLocation_t::AnimNodeLocation_t(AnimNodeLocation_t &)
{
} /* size: 0 */

// <011880D7> ../public/animationsystem/ianimnode.h:20
inline void AnimNodeLocation_t::AnimNodeLocation_t(AnimNodeLocation_t &)
{
} /* size: 0 */

// <00E77DBC> ../public/animationsystem/ianimnode.h:20
void AnimNodeLocation_t::AnimNodeLocation_t(const AnimNodeLocation_t &)
{
} /* size: 0 */

// <00E77D9B> ../public/animationsystem/ianimnode.h:20
inline void AnimNodeLocation_t::AnimNodeLocation_t(const AnimNodeLocation_t &)
{
} /* size: 0 */

// <00E3D2BB> ../public/animationsystem/ianimnode.h:20
inline void AnimNodeLocation_t::operator=(AnimNodeLocation_t &)
{
} /* size: 0 */

// <001F4A8C> ../public/animationsystem/ianimnode.h:20
// member variables: 2
// struct size: 40
struct AnimNodeLocation_t {
	AnimNodeID m_NodeID; /* 0 4 */
	AnimNodePath m_NodePath; /* 8 32 */
};

// <01295E07> ../public/animationsystem/ianimnode.h:30
void IAnimNode::~IAnimNode()
{
} /* size: 0 */

// <01295DD4> ../public/animationsystem/ianimnode.h:30
inline void IAnimNode::~IAnimNode()
{
} /* size: 0 */

// <01089AAC> ../public/animationsystem/ianimnode.h:30
void IAnimNode::IAnimNode()
{
} /* size: 0 */

// <01089A90> ../public/animationsystem/ianimnode.h:30
inline void IAnimNode::IAnimNode()
{
} /* size: 0 */

// <0064439B> ../public/animationsystem/ianimnode.h:30
inline void IAnimNode::operator=(const IAnimNode &)
{
} /* size: 0 */

// <010062D5> ../public/animationsystem/ianimnode.h:30
// member functions: 71
// member variable: 1
// static member variable: 1
// vtable entries: 29
// class size: 8
class IAnimNode : public Object {
public:
	/* class Object <ancestor>; */ /* 0 0 */
	void IAnimNode(IAnimNode* , IAnimNode& );
	void IAnimNode(IAnimNode* , const IAnimNode& );
	void IAnimNode(IAnimNode* );
private:
	static class CClassInfoT<IAnimNode> m_classInfoIAnimNode; /* 0 0 */
	/* ../public/animationsystem/ianimnode.h:32 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:12 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:12 */
	virtual const CClassInfo& GetTypeInfo(const IAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:12 */
	virtual void* CastToBase(IAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:12 */
	virtual const void* CastToBase(const IAnimNode* , ClassID);
	/* ../public/animationsystem/ianimnode.h:35 */
	virtual const CUtlString& GetName(const IAnimNode* );
	/* ../public/animationsystem/ianimnode.h:38 */
	virtual void SetName(IAnimNode* , const CUtlString& );
	/* ../public/animationsystem/ianimnode.h:41 */
	virtual CUtlString GetUIName(const IAnimNode* );
	/* ../public/animationsystem/ianimnode.h:44 */
	virtual bool IsRootNode(const IAnimNode* );
	/* ../public/animationsystem/ianimnode.h:47 */
	virtual int GetChildCount(const IAnimNode* );
	/* ../public/animationsystem/ianimnode.h:50 */
	virtual IAnimNode* GetChild(const IAnimNode* , int);
	/* ../public/animationsystem/ianimnode.h:53 */
	virtual const CUtlString& GetChildName(const IAnimNode* , int);
	/* ../public/animationsystem/ianimnode.h:56 */
	virtual int GetParentCount(const IAnimNode* );
	/* ../public/animationsystem/ianimnode.h:59 */
	virtual const CUtlString& GetParentName(const IAnimNode* , int);
	/* ../public/animationsystem/ianimnode.h:61 */
	virtual AnimOutputID GetOutputID(const IAnimNode* , int);
	/* ../public/animationsystem/ianimnode.h:62 */
	virtual AnimOutputID GetChildOutputID(const IAnimNode* , int);
	/* ../public/animationsystem/ianimnode.h:63 */
	virtual int GetOutputIndex(const IAnimNode* , AnimOutputID);
	/* ../public/animationsystem/ianimnode.h:64 */
	virtual AnimNodeID GetOutputNodeID(const IAnimNode* , AnimOutputID);
	/* ../public/animationsystem/ianimnode.h:65 */
	virtual AnimNodeLocation_t GetOutputNodeLocation(const IAnimNode* , AnimOutputID, const AnimNodePath& );
	/* ../public/animationsystem/ianimnode.h:66 */
	virtual int GetOutputCount(const IAnimNode* );
	/* ../public/animationsystem/ianimnode.h:67 */
	virtual bool HasOutputs(const IAnimNode* );
	/* ../public/animationsystem/ianimnode.h:70 */
	virtual int GetParamCount(const IAnimNode* );
	/* ../public/animationsystem/ianimnode.h:73 */
	virtual AnimParamID GetParamID(const IAnimNode* , int);
	/* ../public/animationsystem/ianimnode.h:76 */
	virtual int GetTagCount(const IAnimNode* );
	/* ../public/animationsystem/ianimnode.h:79 */
	virtual AnimTagID GetTagID(const IAnimNode* , int);
	/* ../public/animationsystem/ianimnode.h:83 */
	virtual const Vector2D& GetPosition(const IAnimNode* );
	/* ../public/animationsystem/ianimnode.h:86 */
	virtual void SetPosition(IAnimNode* , const Vector2D& );
	/* ../public/animationsystem/ianimnode.h:89 */
	virtual AnimNodeID GetNodeID(const IAnimNode* );
	/* ../public/animationsystem/ianimnode.h:92 */
	virtual const CUtlString& GetNote(const IAnimNode* );
	/* ../public/animationsystem/ianimnode.h:95 */
	virtual void SetNote(IAnimNode* , const CUtlString& );
	/* ../public/animationsystem/ianimnode.h:98 */
	virtual bool ShowVisualizer(IAnimNode* );
	virtual void ~IAnimNode(IAnimNode* );
	virtual const void  * CastToBase(const class IAnimNode  *, class ClassID); /* linkage=_ZNK9IAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class IAnimNode *, class ClassID); /* linkage=_ZN9IAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual const class CClassInfo  & GetTypeInfo(const class IAnimNode  *); /* linkage=_ZNK9IAnimNode11GetTypeInfoEv */
	virtual void ~IAnimNode(class IAnimNode *); /* linkage=_ZN9IAnimNodeD4Ev */
	class IAnimNode & operator=(class IAnimNode *, const class IAnimNode  &); /* linkage=_ZN9IAnimNodeaSERKS_ */
	void IAnimNode(class IAnimNode *, class IAnimNode &); /* linkage=_ZN9IAnimNodeC4EOS_ */
	void IAnimNode(class IAnimNode *, const class IAnimNode  &); /* linkage=_ZN9IAnimNodeC4ERKS_ */
	void IAnimNode(class IAnimNode *); /* linkage=_ZN9IAnimNodeC4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN9IAnimNode8MyTypeIDEv */
	/* <109472e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodebase.cpp:12 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN9IAnimNode10MyTypeInfoEv */
	virtual const class CUtlString  & GetName(const class IAnimNode  *); /* linkage=_ZNK9IAnimNode7GetNameEv */
	virtual void SetName(class IAnimNode *, const class CUtlString  &); /* linkage=_ZN9IAnimNode7SetNameERK10CUtlString */
	virtual class CUtlString GetUIName(const class IAnimNode  *); /* linkage=_ZNK9IAnimNode9GetUINameEv */
	virtual bool IsRootNode(const class IAnimNode  *); /* linkage=_ZNK9IAnimNode10IsRootNodeEv */
	virtual int GetChildCount(const class IAnimNode  *); /* linkage=_ZNK9IAnimNode13GetChildCountEv */
	virtual class IAnimNode * GetChild(const class IAnimNode  *, int); /* linkage=_ZNK9IAnimNode8GetChildEi */
	virtual const class CUtlString  & GetChildName(const class IAnimNode  *, int); /* linkage=_ZNK9IAnimNode12GetChildNameEi */
	virtual int GetParentCount(const class IAnimNode  *); /* linkage=_ZNK9IAnimNode14GetParentCountEv */
	virtual const class CUtlString  & GetParentName(const class IAnimNode  *, int); /* linkage=_ZNK9IAnimNode13GetParentNameEi */
	virtual class AnimOutputID GetOutputID(const class IAnimNode  *, int); /* linkage=_ZNK9IAnimNode11GetOutputIDEi */
	virtual class AnimOutputID GetChildOutputID(const class IAnimNode  *, int); /* linkage=_ZNK9IAnimNode16GetChildOutputIDEi */
	virtual int GetOutputIndex(const class IAnimNode  *, class AnimOutputID); /* linkage=_ZNK9IAnimNode14GetOutputIndexE12AnimOutputID */
	virtual class AnimNodeID GetOutputNodeID(const class IAnimNode  *, class AnimOutputID); /* linkage=_ZNK9IAnimNode15GetOutputNodeIDE12AnimOutputID */
	virtual class AnimNodeLocation_t GetOutputNodeLocation(const class IAnimNode  *, class AnimOutputID, const AnimNodePath  &); /* linkage=_ZNK9IAnimNode21GetOutputNodeLocationE12AnimOutputIDRK10CUtlVectorI10AnimNodeID10CUtlMemoryIS2_iEE */
	virtual int GetOutputCount(const class IAnimNode  *); /* linkage=_ZNK9IAnimNode14GetOutputCountEv */
	virtual bool HasOutputs(const class IAnimNode  *); /* linkage=_ZNK9IAnimNode10HasOutputsEv */
	virtual int GetParamCount(const class IAnimNode  *); /* linkage=_ZNK9IAnimNode13GetParamCountEv */
	virtual class AnimParamID GetParamID(const class IAnimNode  *, int); /* linkage=_ZNK9IAnimNode10GetParamIDEi */
	virtual int GetTagCount(const class IAnimNode  *); /* linkage=_ZNK9IAnimNode11GetTagCountEv */
	virtual class AnimTagID GetTagID(const class IAnimNode  *, int); /* linkage=_ZNK9IAnimNode8GetTagIDEi */
	virtual const class Vector2D  & GetPosition(const class IAnimNode  *); /* linkage=_ZNK9IAnimNode11GetPositionEv */
	virtual void SetPosition(class IAnimNode *, const class Vector2D  &); /* linkage=_ZN9IAnimNode11SetPositionERK8Vector2D */
	virtual class AnimNodeID GetNodeID(const class IAnimNode  *); /* linkage=_ZNK9IAnimNode9GetNodeIDEv */
	virtual const class CUtlString  & GetNote(const class IAnimNode  *); /* linkage=_ZNK9IAnimNode7GetNoteEv */
	virtual void SetNote(class IAnimNode *, const class CUtlString  &); /* linkage=_ZN9IAnimNode7SetNoteERK10CUtlString */
	virtual bool ShowVisualizer(class IAnimNode *); /* linkage=_ZN9IAnimNode14ShowVisualizerEv */
};

// <0108E229> ../public/animationsystem/ianimnode.h:32
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 32
	const char   __PRETTY_FUNCTION__; // 20904
} /* size: 0, variables: 2 */

