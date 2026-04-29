
//
// public/animationsystem/isolveikchainanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//	classes: 3
//

// <005B8C2E> ../public/animationsystem/isolveikchainanimnode.h:21
inline void Get(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <00287D7C> ../public/animationsystem/isolveikchainanimnode.h:21
// member functions: 2
// class size: 1
class CSchemaTypeOf<SolveIKChainAnimNodeSettingSource> {
	/* ../public/animationsystem/isolveikchainanimnode.h:21 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
	/* ../public/animationsystem/isolveikchainanimnode.h:21 */
	const char* GetEnumName(void);
};

// <012944D6> ../public/animationsystem/isolveikchainanimnode.h:27
void ISolveIKChainSettings::ISolveIKChainSettings()
{
} /* size: 0 */

// <012944BA> ../public/animationsystem/isolveikchainanimnode.h:27
inline void ISolveIKChainSettings::ISolveIKChainSettings()
{
} /* size: 0 */

// <005B89E0> ../public/animationsystem/isolveikchainanimnode.h:27
inline void ISolveIKChainSettings::operator=(const ISolveIKChainSettings &)
{
} /* size: 0 */

// <0122C5FC> ../public/animationsystem/isolveikchainanimnode.h:27
// member functions: 24
// member variable: 1
// static member variable: 1
// vtable entries: 13
// class size: 8
class ISolveIKChainSettings {
	void ~ISolveIKChainSettings(ISolveIKChainSettings* );
	void ISolveIKChainSettings(ISolveIKChainSettings* , ISolveIKChainSettings& );
	void ISolveIKChainSettings(ISolveIKChainSettings* , const ISolveIKChainSettings& );
	void ISolveIKChainSettings(ISolveIKChainSettings* );
	int ()(void) * * _vptr.ISolveIKChainSettings; /* 0 8 */
private:
	static class CClassInfoT<ISolveIKChainSettings> m_classInfoISolveIKChainSettings; /* 0 0 */
	/* ../public/animationsystem/isolveikchainanimnode.h:29 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:15 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:15 */
	virtual const CClassInfo& GetTypeInfo(const ISolveIKChainSettings* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:15 */
	virtual void* CastToBase(ISolveIKChainSettings* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:15 */
	virtual const void* CastToBase(const ISolveIKChainSettings* , ClassID);
	/* ../public/animationsystem/isolveikchainanimnode.h:32 */
	virtual const CUtlString& GetChainName(const ISolveIKChainSettings* );
	/* ../public/animationsystem/isolveikchainanimnode.h:33 */
	virtual void SetChainName(ISolveIKChainSettings* , const CUtlString& );
	/* ../public/animationsystem/isolveikchainanimnode.h:36 */
	virtual SolveIKChainAnimNodeSettingSource GetSolverSource(const ISolveIKChainSettings* );
	/* ../public/animationsystem/isolveikchainanimnode.h:37 */
	virtual void SetSolverSource(ISolveIKChainSettings* , SolveIKChainAnimNodeSettingSource);
	/* ../public/animationsystem/isolveikchainanimnode.h:40 */
	virtual IKSolverSettings_t& GetSolverSettings(ISolveIKChainSettings* );
	/* ../public/animationsystem/isolveikchainanimnode.h:41 */
	virtual const IKSolverSettings_t& GetSolverSettings(const ISolveIKChainSettings* );
	/* ../public/animationsystem/isolveikchainanimnode.h:44 */
	virtual SolveIKChainAnimNodeSettingSource GetTargetSource(const ISolveIKChainSettings* );
	/* ../public/animationsystem/isolveikchainanimnode.h:45 */
	virtual void SetTargetSource(ISolveIKChainSettings* , SolveIKChainAnimNodeSettingSource);
	/* ../public/animationsystem/isolveikchainanimnode.h:48 */
	virtual IKTargetSettings_t& GetTargetSettings(ISolveIKChainSettings* );
	/* ../public/animationsystem/isolveikchainanimnode.h:49 */
	virtual const IKTargetSettings_t& GetTargetSettings(const ISolveIKChainSettings* );
	virtual const void  * CastToBase(const class ISolveIKChainSettings  *, class ClassID); /* linkage=_ZNK21ISolveIKChainSettings10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class ISolveIKChainSettings *, class ClassID); /* linkage=_ZN21ISolveIKChainSettings10CastToBaseEN10Reflection7ClassIDE */
	virtual const class CClassInfo  & GetTypeInfo(const class ISolveIKChainSettings  *); /* linkage=_ZNK21ISolveIKChainSettings11GetTypeInfoEv */
	class ISolveIKChainSettings & operator=(class ISolveIKChainSettings *, const class ISolveIKChainSettings  &); /* linkage=_ZN21ISolveIKChainSettingsaSERKS_ */
	void ISolveIKChainSettings(class ISolveIKChainSettings *); /* linkage=_ZN21ISolveIKChainSettingsC4Ev */
};

// <012945C3> ../public/animationsystem/isolveikchainanimnode.h:29
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 29
	const char   __PRETTY_FUNCTION__; // 11141
} /* size: 0, variables: 2 */

// <01290DF0> ../public/animationsystem/isolveikchainanimnode.h:56
void ISolveIKChainAnimNode::ISolveIKChainAnimNode()
{
} /* size: 0 */

// <01290DD4> ../public/animationsystem/isolveikchainanimnode.h:56
inline void ISolveIKChainAnimNode::ISolveIKChainAnimNode()
{
} /* size: 0 */

// <005B46D4> ../public/animationsystem/isolveikchainanimnode.h:56
inline void ISolveIKChainAnimNode::operator=(const ISolveIKChainAnimNode &)
{
} /* size: 0 */

// <0122C8FD> ../public/animationsystem/isolveikchainanimnode.h:56
// member functions: 30
// member variable: 1
// static member variable: 1
// vtable entries: 9
// class size: 8
class ISolveIKChainAnimNode {
	void ISolveIKChainAnimNode(ISolveIKChainAnimNode* , ISolveIKChainAnimNode& );
	void ISolveIKChainAnimNode(ISolveIKChainAnimNode* , const ISolveIKChainAnimNode& );
	void ISolveIKChainAnimNode(ISolveIKChainAnimNode* );
	void ~ISolveIKChainAnimNode(ISolveIKChainAnimNode* );
	int ()(void) * * _vptr.ISolveIKChainAnimNode; /* 0 8 */
private:
	static class CClassInfoT<ISolveIKChainAnimNode> m_classInfoISolveIKChainAnimNode; /* 0 0 */
	/* ../public/animationsystem/isolveikchainanimnode.h:58 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:16 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:16 */
	virtual const CClassInfo& GetTypeInfo(const ISolveIKChainAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:16 */
	virtual void* CastToBase(ISolveIKChainAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:16 */
	virtual const void* CastToBase(const ISolveIKChainAnimNode* , ClassID);
	/* ../public/animationsystem/isolveikchainanimnode.h:62 */
	virtual int GetChainCount(const ISolveIKChainAnimNode* );
	/* ../public/animationsystem/isolveikchainanimnode.h:65 */
	virtual ISolveIKChainSettings* AddChain(ISolveIKChainAnimNode* );
	/* ../public/animationsystem/isolveikchainanimnode.h:66 */
	virtual ISolveIKChainSettings* AddChain(ISolveIKChainAnimNode* , const CUtlString& );
	/* ../public/animationsystem/isolveikchainanimnode.h:67 */
	virtual void RemoveChain(ISolveIKChainAnimNode* , int);
	/* ../public/animationsystem/isolveikchainanimnode.h:70 */
	virtual ISolveIKChainSettings* GetChain(ISolveIKChainAnimNode* , int);
	/* ../public/animationsystem/isolveikchainanimnode.h:71 */
	virtual const ISolveIKChainSettings* GetChain(const ISolveIKChainAnimNode* , int);
	void ISolveIKChainAnimNode(class ISolveIKChainAnimNode *, class ISolveIKChainAnimNode &); /* linkage=_ZN21ISolveIKChainAnimNodeC4EOS_ */
	void ISolveIKChainAnimNode(class ISolveIKChainAnimNode *, const class ISolveIKChainAnimNode  &); /* linkage=_ZN21ISolveIKChainAnimNodeC4ERKS_ */
	void ISolveIKChainAnimNode(class ISolveIKChainAnimNode *); /* linkage=_ZN21ISolveIKChainAnimNodeC4Ev */
	void ~ISolveIKChainAnimNode(class ISolveIKChainAnimNode *); /* linkage=_ZN21ISolveIKChainAnimNodeD4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN21ISolveIKChainAnimNode8MyTypeIDEv */
	/* <129f1a1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:16 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN21ISolveIKChainAnimNode10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class ISolveIKChainAnimNode  *); /* linkage=_ZNK21ISolveIKChainAnimNode11GetTypeInfoEv */
	virtual void * CastToBase(class ISolveIKChainAnimNode *, class ClassID); /* linkage=_ZN21ISolveIKChainAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class ISolveIKChainAnimNode  *, class ClassID); /* linkage=_ZNK21ISolveIKChainAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual int GetChainCount(const class ISolveIKChainAnimNode  *); /* linkage=_ZNK21ISolveIKChainAnimNode13GetChainCountEv */
	virtual class ISolveIKChainSettings * AddChain(class ISolveIKChainAnimNode *); /* linkage=_ZN21ISolveIKChainAnimNode8AddChainEv */
	virtual class ISolveIKChainSettings * AddChain(class ISolveIKChainAnimNode *, const class CUtlString  &); /* linkage=_ZN21ISolveIKChainAnimNode8AddChainERK10CUtlString */
	virtual void RemoveChain(class ISolveIKChainAnimNode *, int); /* linkage=_ZN21ISolveIKChainAnimNode11RemoveChainEi */
	virtual class ISolveIKChainSettings * GetChain(class ISolveIKChainAnimNode *, int); /* linkage=_ZN21ISolveIKChainAnimNode8GetChainEi */
	virtual const class ISolveIKChainSettings  * GetChain(const class ISolveIKChainAnimNode  *, int); /* linkage=_ZNK21ISolveIKChainAnimNode8GetChainEi */
};

// <01294591> ../public/animationsystem/isolveikchainanimnode.h:58
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 58
	const char   __PRETTY_FUNCTION__; // 11141
} /* size: 0, variables: 2 */

