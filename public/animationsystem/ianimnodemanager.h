
//
// public/animationsystem/ianimnodemanager.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	class: 1
//

// <00F89ACF> ../public/animationsystem/ianimnodemanager.h:9
void IAnimNodeManager::IAnimNodeManager()
{
} /* size: 0 */

// <00F89AB3> ../public/animationsystem/ianimnodemanager.h:9
inline void IAnimNodeManager::IAnimNodeManager()
{
} /* size: 0 */

// <004298A9> ../public/animationsystem/ianimnodemanager.h:9
inline void IAnimNodeManager::operator=(const IAnimNodeManager &)
{
} /* size: 0 */

// <00F22669> ../public/animationsystem/ianimnodemanager.h:9
// member functions: 52
// member variable: 1
// static member variable: 1
// vtable entries: 20
// class size: 8
class IAnimNodeManager {
	void IAnimNodeManager(IAnimNodeManager* , IAnimNodeManager& );
	void IAnimNodeManager(IAnimNodeManager* , const IAnimNodeManager& );
	void IAnimNodeManager(IAnimNodeManager* );
	void ~IAnimNodeManager(IAnimNodeManager* );
	int ()(void) * * _vptr.IAnimNodeManager; /* 0 8 */
private:
	static class CClassInfoT<IAnimNodeManager> m_classInfoIAnimNodeManager; /* 0 0 */
	/* ../public/animationsystem/ianimnodemanager.h:11 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:12 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:12 */
	virtual const CClassInfo& GetTypeInfo(const IAnimNodeManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:12 */
	virtual void* CastToBase(IAnimNodeManager* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:12 */
	virtual const void* CastToBase(const IAnimNodeManager* , ClassID);
	/* ../public/animationsystem/ianimnodemanager.h:14 */
	virtual int GetNodeCount(const IAnimNodeManager* );
	/* ../public/animationsystem/ianimnodemanager.h:15 */
	virtual IAnimNode* GetNode(IAnimNodeManager* , int);
	/* ../public/animationsystem/ianimnodemanager.h:16 */
	virtual const IAnimNode* GetNode(const IAnimNodeManager* , int);
	/* ../public/animationsystem/ianimnodemanager.h:17 */
	virtual IAnimNode* GetNode(IAnimNodeManager* , AnimNodeID);
	/* ../public/animationsystem/ianimnodemanager.h:18 */
	virtual const IAnimNode* GetNode(const IAnimNodeManager* , AnimNodeID);
	/* ../public/animationsystem/ianimnodemanager.h:19 */
	virtual IAnimNodeManager* GetNodeManager(const IAnimNodeManager* , AnimNodeID);
	/* ../public/animationsystem/ianimnodemanager.h:21 */
	virtual AnimNodeID GetRootNodeID(const IAnimNodeManager* );
	/* ../public/animationsystem/ianimnodemanager.h:22 */
	virtual IAnimNode* GetRootNode(IAnimNodeManager* );
	/* ../public/animationsystem/ianimnodemanager.h:23 */
	virtual const IAnimNode* GetRootNode(const IAnimNodeManager* );
	/* ../public/animationsystem/ianimnodemanager.h:24 */
	virtual bool HasRootNode(const IAnimNodeManager* );
	/* ../public/animationsystem/ianimnodemanager.h:26 */
	virtual IAnimNode* AddAnimNode(IAnimNodeManager* , const char* );
	/* ../public/animationsystem/ianimnodemanager.h:27 */
	virtual void RemoveAnimNode(IAnimNodeManager* , IAnimNode* );
	/* ../public/animationsystem/ianimnodemanager.h:29 */
	virtual void AddConnection(IAnimNodeManager* , IAnimNode* , int, IAnimNode* , int);
	/* ../public/animationsystem/ianimnodemanager.h:30 */
	virtual void RemoveConnection(IAnimNodeManager* , IAnimNode* , int);
	/* ../public/animationsystem/ianimnodemanager.h:32 */
	virtual bool CopyNodesToBuffer(IAnimNodeManager* , const CUtlVector<IAnimNode*, CUtlMemory<IAnimNode*, int> >& , CUtlBuffer& );
	/* ../public/animationsystem/ianimnodemanager.h:33 */
	virtual bool PasteNodesFromBuffer(IAnimNodeManager* , const CUtlBuffer& , CUtlVector<IAnimNode*, CUtlMemory<IAnimNode*, int> >* );
	/* ../public/animationsystem/ianimnodemanager.h:35 */
	virtual CClassInfoList GetNodeTypes(const IAnimNodeManager* , bool);
	void IAnimNodeManager(class IAnimNodeManager *, class IAnimNodeManager &); /* linkage=_ZN16IAnimNodeManagerC4EOS_ */
	void IAnimNodeManager(class IAnimNodeManager *, const class IAnimNodeManager  &); /* linkage=_ZN16IAnimNodeManagerC4ERKS_ */
	void IAnimNodeManager(class IAnimNodeManager *); /* linkage=_ZN16IAnimNodeManagerC4Ev */
	void ~IAnimNodeManager(class IAnimNodeManager *); /* linkage=_ZN16IAnimNodeManagerD4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN16IAnimNodeManager8MyTypeIDEv */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN16IAnimNodeManager10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class IAnimNodeManager  *); /* linkage=_ZNK16IAnimNodeManager11GetTypeInfoEv */
	virtual void * CastToBase(class IAnimNodeManager *, class ClassID); /* linkage=_ZN16IAnimNodeManager10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class IAnimNodeManager  *, class ClassID); /* linkage=_ZNK16IAnimNodeManager10CastToBaseEN10Reflection7ClassIDE */
	virtual int GetNodeCount(const class IAnimNodeManager  *); /* linkage=_ZNK16IAnimNodeManager12GetNodeCountEv */
	virtual class IAnimNode * GetNode(class IAnimNodeManager *, int); /* linkage=_ZN16IAnimNodeManager7GetNodeEi */
	virtual const class IAnimNode  * GetNode(const class IAnimNodeManager  *, int); /* linkage=_ZNK16IAnimNodeManager7GetNodeEi */
	virtual class IAnimNode * GetNode(class IAnimNodeManager *, class AnimNodeID); /* linkage=_ZN16IAnimNodeManager7GetNodeE10AnimNodeID */
	virtual const class IAnimNode  * GetNode(const class IAnimNodeManager  *, class AnimNodeID); /* linkage=_ZNK16IAnimNodeManager7GetNodeE10AnimNodeID */
	virtual class IAnimNodeManager * GetNodeManager(const class IAnimNodeManager  *, class AnimNodeID); /* linkage=_ZNK16IAnimNodeManager14GetNodeManagerE10AnimNodeID */
	virtual class AnimNodeID GetRootNodeID(const class IAnimNodeManager  *); /* linkage=_ZNK16IAnimNodeManager13GetRootNodeIDEv */
	virtual class IAnimNode * GetRootNode(class IAnimNodeManager *); /* linkage=_ZN16IAnimNodeManager11GetRootNodeEv */
	virtual const class IAnimNode  * GetRootNode(const class IAnimNodeManager  *); /* linkage=_ZNK16IAnimNodeManager11GetRootNodeEv */
	virtual bool HasRootNode(const class IAnimNodeManager  *); /* linkage=_ZNK16IAnimNodeManager11HasRootNodeEv */
	virtual class IAnimNode * AddAnimNode(class IAnimNodeManager *, const char  *); /* linkage=_ZN16IAnimNodeManager11AddAnimNodeEPKc */
	virtual void RemoveAnimNode(class IAnimNodeManager *, class IAnimNode *); /* linkage=_ZN16IAnimNodeManager14RemoveAnimNodeEP9IAnimNode */
	virtual void AddConnection(class IAnimNodeManager *, class IAnimNode *, int, class IAnimNode *, int); /* linkage=_ZN16IAnimNodeManager13AddConnectionEP9IAnimNodeiS1_i */
	virtual void RemoveConnection(class IAnimNodeManager *, class IAnimNode *, int); /* linkage=_ZN16IAnimNodeManager16RemoveConnectionEP9IAnimNodei */
	virtual bool CopyNodesToBuffer(class IAnimNodeManager *, const class CUtlVector<IAnimNode*, CUtlMemory<IAnimNode*, int> >  &, class CUtlBuffer &); /* linkage=_ZN16IAnimNodeManager17CopyNodesToBufferERK10CUtlVectorIP9IAnimNode10CUtlMemoryIS2_iEER10CUtlBuffer */
	virtual bool PasteNodesFromBuffer(class IAnimNodeManager *, const class CUtlBuffer  &, class CUtlVector<IAnimNode*, CUtlMemory<IAnimNode*, int> > *); /* linkage=_ZN16IAnimNodeManager20PasteNodesFromBufferERK10CUtlBufferP10CUtlVectorIP9IAnimNode10CUtlMemoryIS5_iEE */
	virtual CClassInfoList GetNodeTypes(const class IAnimNodeManager  *, bool); /* linkage=_ZNK16IAnimNodeManager12GetNodeTypesEb */
};

// <00F96639> ../public/animationsystem/ianimnodemanager.h:11
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 11
	const char   __PRETTY_FUNCTION__; // 38814
} /* size: 0, variables: 2 */

