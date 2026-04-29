
//
// animgraph/solveikchainanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 13
//	classes: 2
//

// <0126B11D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:12
void CSolveIKChainAnimNodeChainData::~CSolveIKChainAnimNodeChainData()
{
} /* size: 0 */

// <0126B101> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:12
inline void CSolveIKChainAnimNodeChainData::~CSolveIKChainAnimNodeChainData()
{
} /* size: 0 */

// <01228BDD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:12
// member functions: 77
// member variables: 9
// static member variables: 2
// vtable entries: 16
// class size: 88
class CSolveIKChainAnimNodeChainData : public ISolveIKChainSettings {
public:
	/* class ISolveIKChainSettings <ancestor>; */ /* 0 8 */
	void ~CSolveIKChainAnimNodeChainData(CSolveIKChainAnimNodeChainData* );
	void CSolveIKChainAnimNodeChainData(CSolveIKChainAnimNodeChainData* , CSolveIKChainAnimNodeChainData& );
	void CSolveIKChainAnimNodeChainData(CSolveIKChainAnimNodeChainData* , const CSolveIKChainAnimNodeChainData& );
private:
	static class CClassInfoT<CSolveIKChainAnimNodeChainData> m_classInfoCSolveIKChainAnimNodeChainData; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:14 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:18 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:18 */
	virtual const CClassInfo& GetTypeInfo(const CSolveIKChainAnimNodeChainData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:18 */
	virtual void* CastToBase(CSolveIKChainAnimNodeChainData* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:18 */
	virtual const void* CastToBase(const CSolveIKChainAnimNodeChainData* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:15 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:15 */
	CSolveIKChainAnimNodeChainData* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:15 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:15 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:15 */
	void Schema_CompileTimeVerificationFunction(CSolveIKChainAnimNodeChainData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:15 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:15 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:15 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CSolveIKChainAnimNodeChainData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:16 */
	void KV3TransferPolymorphicClassname(const CSolveIKChainAnimNodeChainData* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:16 */
	CSolveIKChainAnimNodeChainData* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:16 */
	virtual void KV3TransferSave(const CSolveIKChainAnimNodeChainData* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:16 */
	virtual void KV3TransferLoad(CSolveIKChainAnimNodeChainData* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:16 */
	void KV3TransferSave_CSolveIKChainAnimNodeChainData(const CSolveIKChainAnimNodeChainData* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:16 */
	void KV3TransferLoad_CSolveIKChainAnimNodeChainData(CSolveIKChainAnimNodeChainData* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:35 */
	void GetItemName(void* , CUtlString* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:43 */
	PropertyChangeDirtyResult_t OnTargetSettingSourceChanged(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:24 */
	PropertyAttrState_t VisibleIfTargetSettingSourceOverride(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:48 */
	PropertyChangeDirtyResult_t OnSolverSettingSourceChanged(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:27 */
	PropertyAttrState_t VisibleIfSolverSettingSourceOverride(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:29 */
	void CSolveIKChainAnimNodeChainData(CSolveIKChainAnimNodeChainData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:54 */
	virtual const CUtlString& GetChainName(const CSolveIKChainAnimNodeChainData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:60 */
	virtual void SetChainName(CSolveIKChainAnimNodeChainData* , const CUtlString& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:66 */
	virtual SolveIKChainAnimNodeSettingSource GetSolverSource(const CSolveIKChainAnimNodeChainData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:72 */
	virtual void SetSolverSource(CSolveIKChainAnimNodeChainData* , SolveIKChainAnimNodeSettingSource);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:78 */
	virtual IKSolverSettings_t& GetSolverSettings(CSolveIKChainAnimNodeChainData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:84 */
	virtual const IKSolverSettings_t& GetSolverSettings(const CSolveIKChainAnimNodeChainData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:90 */
	virtual SolveIKChainAnimNodeSettingSource GetTargetSource(const CSolveIKChainAnimNodeChainData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:96 */
	virtual void SetTargetSource(CSolveIKChainAnimNodeChainData* , SolveIKChainAnimNodeSettingSource);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:102 */
	virtual IKTargetSettings_t& GetTargetSettings(CSolveIKChainAnimNodeChainData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:108 */
	virtual const IKTargetSettings_t& GetTargetSettings(const CSolveIKChainAnimNodeChainData* );
	CUtlString m_IkChain; /* 8 8 */
	SolveIKChainAnimNodeSettingSource m_SolverSettingSource; /* 16 4 */
	IKSolverSettings_t m_OverrideSolverSettings; /* 20 8 */
	SolveIKChainAnimNodeSettingSource m_TargetSettingSource; /* 28 4 */
	IKTargetSettings_t m_OverrideTargetSettings; /* 32 32 */
	SolveIKChainAnimNodeDebugSetting m_DebugSetting; /* 64 4 */
	float m_flDebugNormalizedLength; /* 68 4 */
	Vector m_vDebugOffset; /* 72 12 */
	/* <5ecf0c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/solveikchainanimnode_h_schema.gen_cpp:203 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN30CSolveIKChainAnimNodeChainData32Schema_VerifyBindingIsRegisteredEv */
	/* <5ee3f1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/solveikchainanimnode_h_schema.gen_cpp:228 */
	virtual void KV3TransferLoad(class CSolveIKChainAnimNodeChainData *, class CKV3TransferLoadContext *); /* linkage=_ZN30CSolveIKChainAnimNodeChainData15KV3TransferLoadEP23CKV3TransferLoadContext */
	/* <5ee397> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/solveikchainanimnode_h_schema.gen_cpp:211 */
	virtual void KV3TransferSave(const class CSolveIKChainAnimNodeChainData  *, class CKV3TransferSaveContext *); /* linkage=_ZNK30CSolveIKChainAnimNodeChainData15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual const class IKTargetSettings_t  & GetTargetSettings(const class CSolveIKChainAnimNodeChainData  *); /* linkage=_ZNK30CSolveIKChainAnimNodeChainData17GetTargetSettingsEv */
	virtual class IKTargetSettings_t & GetTargetSettings(class CSolveIKChainAnimNodeChainData *); /* linkage=_ZN30CSolveIKChainAnimNodeChainData17GetTargetSettingsEv */
	virtual void SetTargetSource(class CSolveIKChainAnimNodeChainData *, enum SolveIKChainAnimNodeSettingSource); /* linkage=_ZN30CSolveIKChainAnimNodeChainData15SetTargetSourceE33SolveIKChainAnimNodeSettingSource */
	virtual enum SolveIKChainAnimNodeSettingSource GetTargetSource(const class CSolveIKChainAnimNodeChainData  *); /* linkage=_ZNK30CSolveIKChainAnimNodeChainData15GetTargetSourceEv */
	virtual const class IKSolverSettings_t  & GetSolverSettings(const class CSolveIKChainAnimNodeChainData  *); /* linkage=_ZNK30CSolveIKChainAnimNodeChainData17GetSolverSettingsEv */
	virtual class IKSolverSettings_t & GetSolverSettings(class CSolveIKChainAnimNodeChainData *); /* linkage=_ZN30CSolveIKChainAnimNodeChainData17GetSolverSettingsEv */
	virtual void SetSolverSource(class CSolveIKChainAnimNodeChainData *, enum SolveIKChainAnimNodeSettingSource); /* linkage=_ZN30CSolveIKChainAnimNodeChainData15SetSolverSourceE33SolveIKChainAnimNodeSettingSource */
	virtual enum SolveIKChainAnimNodeSettingSource GetSolverSource(const class CSolveIKChainAnimNodeChainData  *); /* linkage=_ZNK30CSolveIKChainAnimNodeChainData15GetSolverSourceEv */
	/* <129d9e9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:60 */
	virtual void SetChainName(class CSolveIKChainAnimNodeChainData *, const class CUtlString  &); /* linkage=_ZN30CSolveIKChainAnimNodeChainData12SetChainNameERK10CUtlString */
	virtual const class CUtlString  & GetChainName(const class CSolveIKChainAnimNodeChainData  *); /* linkage=_ZNK30CSolveIKChainAnimNodeChainData12GetChainNameEv */
	virtual const void  * CastToBase(const class CSolveIKChainAnimNodeChainData  *, class ClassID); /* linkage=_ZNK30CSolveIKChainAnimNodeChainData10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CSolveIKChainAnimNodeChainData *, class ClassID); /* linkage=_ZN30CSolveIKChainAnimNodeChainData10CastToBaseEN10Reflection7ClassIDE */
	/* <129bd32> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:18 */
	virtual const class CClassInfo  & GetTypeInfo(const class CSolveIKChainAnimNodeChainData  *); /* linkage=_ZNK30CSolveIKChainAnimNodeChainData11GetTypeInfoEv */
	class CSolveIKChainAnimNodeChainData & operator=(class CSolveIKChainAnimNodeChainData *, const class CSolveIKChainAnimNodeChainData  &); /* linkage=_ZN30CSolveIKChainAnimNodeChainDataaSERKS_ */
	void ~CSolveIKChainAnimNodeChainData(class CSolveIKChainAnimNodeChainData *); /* linkage=_ZN30CSolveIKChainAnimNodeChainDataD4Ev */
	void CSolveIKChainAnimNodeChainData(class CSolveIKChainAnimNodeChainData *); /* linkage=_ZN30CSolveIKChainAnimNodeChainDataC4Ev */
	/* <5eab64> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/solveikchainanimnode.h:15 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CSolveIKChainAnimNodeChainData  *); /* linkage=_ZNK30CSolveIKChainAnimNodeChainData21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN30CSolveIKChainAnimNodeChainData22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN30CSolveIKChainAnimNodeChainData17GetPrimaryBindingEv */
	enum PropertyChangeDirtyResult_t OnSolverSettingSourceChanged(void *); /* linkage=_ZN30CSolveIKChainAnimNodeChainData28OnSolverSettingSourceChangedEPv */
	enum PropertyChangeDirtyResult_t OnTargetSettingSourceChanged(void *); /* linkage=_ZN30CSolveIKChainAnimNodeChainData28OnTargetSettingSourceChangedEPv */
	void GetItemName(void *, class CUtlString *); /* linkage=_ZN30CSolveIKChainAnimNodeChainData11GetItemNameEPvP10CUtlString */
	void KV3TransferLoad_CSolveIKChainAnimNodeChainData(class CSolveIKChainAnimNodeChainData *, class CKV3TransferLoadContext *); /* linkage=_ZN30CSolveIKChainAnimNodeChainData46KV3TransferLoad_CSolveIKChainAnimNodeChainDataEP23CKV3TransferLoadContext */
	void KV3TransferSave_CSolveIKChainAnimNodeChainData(const class CSolveIKChainAnimNodeChainData  *, class CKV3TransferSaveContext *); /* linkage=_ZNK30CSolveIKChainAnimNodeChainData46KV3TransferSave_CSolveIKChainAnimNodeChainDataEP23CKV3TransferSaveContext */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN30CSolveIKChainAnimNodeChainData15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	void Schema_CompileTimeVerificationFunction(class CSolveIKChainAnimNodeChainData *); /* linkage=_ZN30CSolveIKChainAnimNodeChainData38Schema_CompileTimeVerificationFunctionEv */
	enum PropertyAttrState_t VisibleIfSolverSettingSourceOverride(void *); /* linkage=_ZN30CSolveIKChainAnimNodeChainData36VisibleIfSolverSettingSourceOverrideEPv */
	enum PropertyAttrState_t VisibleIfTargetSettingSourceOverride(void *); /* linkage=_ZN30CSolveIKChainAnimNodeChainData36VisibleIfTargetSettingSourceOverrideEPv */
	void KV3TransferPolymorphicClassname(const class CSolveIKChainAnimNodeChainData  *, char &); /* linkage=_ZN30CSolveIKChainAnimNodeChainData31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN30CSolveIKChainAnimNodeChainData20Schema_StaticBindingEv */
	void CSolveIKChainAnimNodeChainData(class CSolveIKChainAnimNodeChainData *, class CSolveIKChainAnimNodeChainData &); /* linkage=_ZN30CSolveIKChainAnimNodeChainDataC4EOS_ */
	void CSolveIKChainAnimNodeChainData(class CSolveIKChainAnimNodeChainData *, const class CSolveIKChainAnimNodeChainData  &); /* linkage=_ZN30CSolveIKChainAnimNodeChainDataC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN30CSolveIKChainAnimNodeChainData8MyTypeIDEv */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN30CSolveIKChainAnimNodeChainData10MyTypeInfoEv */
	class CSolveIKChainAnimNodeChainData * Schema_MarkHelperFn(void); /* linkage=_ZN30CSolveIKChainAnimNodeChainData19Schema_MarkHelperFnEv */
	class CSolveIKChainAnimNodeChainData * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN30CSolveIKChainAnimNodeChainData32KV3TransferAllocateClassInstanceEPKc */
};

// <0129455F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:14
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 14
	const char   __PRETTY_FUNCTION__; // 11364
} /* size: 0, variables: 2 */

// <01294559> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:15
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <012944ED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:15
// function call: 1
void CSolveIKChainAnimNodeChainData::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 15
} /* size: 0, inline expansions: 1 (0 bytes) */

// <012943D7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:29
void CSolveIKChainAnimNodeChainData::CSolveIKChainAnimNodeChainData()
{
} /* size: 0 */

// <012943BE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:29
inline void CSolveIKChainAnimNodeChainData::CSolveIKChainAnimNodeChainData()
{
} /* size: 0 */

// <012569DC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:80
// variable: 1
// function calls: 28
void CSolveIKChainAnimNode::~CSolveIKChainAnimNode()
{
	{
		int i; // 1721
		CUtlMemory<CSolveIKChainAnimNodeChainData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 9
		IKBoneNameAndIndex_t::~IKBoneNameAndIndex_t(); // 42
		IKTargetSettings_t::~IKTargetSettings_t(); // 12
		CUtlString::~CUtlString(); // 12
		CSolveIKChainAnimNodeChainData::~CSolveIKChainAnimNodeChainData(); // 1526
		Destruct<CSolveIKChainAnimNodeChainData>(CSolveIKChainAnimNodeChainData* pMemory); // 1723
	}
	CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::RemoveAll(); // 1798
	CUtlMemory<CSolveIKChainAnimNodeChainData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSolveIKChainAnimNodeChainData, int>::Purge(); // 903
	CUtlMemory<CSolveIKChainAnimNodeChainData, int>::Purge(); // 1799
	CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::Purge(); // 560
	ValidateAlignment<CSolveIKChainAnimNodeChainData>(void); // 508
	CUtlMemory<CSolveIKChainAnimNodeChainData, int>::Purge(); // 510
	CUtlMemory<CSolveIKChainAnimNodeChainData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::~CUtlVector(); // 80
	CUtlString::~CUtlString(); // 35
	CUtlString::~CUtlString(); // 35
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 35
	CAnimNodeBase::~CAnimNodeBase(); // 80
} /* size: 335, inline expansions: 20 (768 bytes) */

// <01256323> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:80
// variable: 1
// function calls: 33
void CSolveIKChainAnimNode::~CSolveIKChainAnimNode()
{
	{
		int i; // 1721
		CUtlMemory<CSolveIKChainAnimNodeChainData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 9
		IKBoneNameAndIndex_t::~IKBoneNameAndIndex_t(); // 42
		IKTargetSettings_t::~IKTargetSettings_t(); // 12
		CUtlString::~CUtlString(); // 12
		CSolveIKChainAnimNodeChainData::~CSolveIKChainAnimNodeChainData(); // 1526
		Destruct<CSolveIKChainAnimNodeChainData>(CSolveIKChainAnimNodeChainData* pMemory); // 1723
	}
	CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::RemoveAll(); // 1798
	CUtlMemory<CSolveIKChainAnimNodeChainData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSolveIKChainAnimNodeChainData, int>::Purge(); // 903
	CUtlMemory<CSolveIKChainAnimNodeChainData, int>::Purge(); // 1799
	CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::Purge(); // 560
	ValidateAlignment<CSolveIKChainAnimNodeChainData>(void); // 508
	CUtlMemory<CSolveIKChainAnimNodeChainData, int>::Purge(); // 510
	CUtlMemory<CSolveIKChainAnimNodeChainData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::~CUtlVector(); // 80
	CUtlString::~CUtlString(); // 35
	CUtlString::~CUtlString(); // 35
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 35
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 35
	Object::~Object(); // 30
	IAnimNode::~IAnimNode(); // 35
	CAnimNodeBase::~CAnimNodeBase(); // 80
	CSolveIKChainAnimNode::~CSolveIKChainAnimNode(); // 80
} /* size: 327, inline expansions: 25 (1001 bytes) */

// <01256307> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:80
inline void CSolveIKChainAnimNode::~CSolveIKChainAnimNode()
{
} /* size: 0 */

// <01229172> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:80
// member functions: 75
// member variables: 4
// static member variables: 2
// vtable entries: 20
// class size: 112
class CSolveIKChainAnimNode : public CAnimNodeBase, public ISolveIKChainAnimNode {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 0 */
	/* class ISolveIKChainAnimNode <ancestor>; */ /* 64 8 */
	void CSolveIKChainAnimNode(CSolveIKChainAnimNode* , CSolveIKChainAnimNode& );
	void CSolveIKChainAnimNode(CSolveIKChainAnimNode* , const CSolveIKChainAnimNode& );
private:
	static class CClassInfoT<CSolveIKChainAnimNode> m_classInfoCSolveIKChainAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:82 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:21 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:21 */
	virtual const CClassInfo& GetTypeInfo(const CSolveIKChainAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:21 */
	virtual void* CastToBase(CSolveIKChainAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:21 */
	virtual const void* CastToBase(const CSolveIKChainAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:83 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:83 */
	CSolveIKChainAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:83 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:83 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:83 */
	void Schema_CompileTimeVerificationFunction(CSolveIKChainAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:83 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:83 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:83 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CSolveIKChainAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:84 */
	void KV3TransferPolymorphicClassname(const CSolveIKChainAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:84 */
	CSolveIKChainAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:84 */
	virtual void KV3TransferSave(const CSolveIKChainAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:84 */
	virtual void KV3TransferLoad(CSolveIKChainAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:84 */
	void KV3TransferSave_CSolveIKChainAnimNode(const CSolveIKChainAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:84 */
	void KV3TransferLoad_CSolveIKChainAnimNode(CSolveIKChainAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:208 */
	void CSolveIKChainAnimNode(CSolveIKChainAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:214 */
	virtual int GetChildCount(const CSolveIKChainAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:219 */
	virtual IAnimNode* GetChild(const CSolveIKChainAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:224 */
	virtual AnimNodeID GetChildID(const CSolveIKChainAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:229 */
	virtual void SetChildID(CSolveIKChainAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:234 */
	virtual const CUtlString& GetChildName(const CSolveIKChainAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:252 */
	virtual void SetInputConnection(CSolveIKChainAnimNode* , int, CNodeConnection);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:246 */
	virtual AnimOutputID GetChildOutputID(const CSolveIKChainAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:121 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CSolveIKChainAnimNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:240 */
	virtual int GetChainCount(const CSolveIKChainAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:258 */
	virtual ISolveIKChainSettings* AddChain(CSolveIKChainAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:265 */
	virtual ISolveIKChainSettings* AddChain(CSolveIKChainAnimNode* , const CUtlString& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:276 */
	virtual void RemoveChain(CSolveIKChainAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:282 */
	virtual ISolveIKChainSettings* GetChain(CSolveIKChainAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:288 */
	virtual const ISolveIKChainSettings* GetChain(const CSolveIKChainAnimNode* , int);
	CNodeConnection m_inputConnection; /* 72 8 */
	CUtlVector<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> > m_IkChains; /* 80 32 */
	virtual void ~CSolveIKChainAnimNode(CSolveIKChainAnimNode* );
	virtual const class ISolveIKChainSettings  * GetChain(const class CSolveIKChainAnimNode  *, int); /* linkage=_ZNK21CSolveIKChainAnimNode8GetChainEi */
	/* <129bde0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:282 */
	virtual class ISolveIKChainSettings * GetChain(class CSolveIKChainAnimNode *, int); /* linkage=_ZN21CSolveIKChainAnimNode8GetChainEi */
	virtual void RemoveChain(class CSolveIKChainAnimNode *, int); /* linkage=_ZN21CSolveIKChainAnimNode11RemoveChainEi */
	virtual class ISolveIKChainSettings * AddChain(class CSolveIKChainAnimNode *, const class CUtlString  &); /* linkage=_ZN21CSolveIKChainAnimNode8AddChainERK10CUtlString */
	/* <12a02a0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:258 */
	virtual class ISolveIKChainSettings * AddChain(class CSolveIKChainAnimNode *); /* linkage=_ZN21CSolveIKChainAnimNode8AddChainEv */
	/* <129bd86> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:240 */
	virtual int GetChainCount(const class CSolveIKChainAnimNode  *); /* linkage=_ZNK21CSolveIKChainAnimNode13GetChainCountEv */
	virtual void SetInputConnection(class CSolveIKChainAnimNode *, int, class CNodeConnection); /* linkage=_ZN21CSolveIKChainAnimNode18SetInputConnectionEi15CNodeConnection */
	virtual void SetChildID(class CSolveIKChainAnimNode *, int, class AnimNodeID); /* linkage=_ZN21CSolveIKChainAnimNode10SetChildIDEi10AnimNodeID */
	virtual class AnimNodeID GetChildID(const class CSolveIKChainAnimNode  *, int); /* linkage=_ZNK21CSolveIKChainAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CSolveIKChainAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK21CSolveIKChainAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	virtual class AnimOutputID GetChildOutputID(const class CSolveIKChainAnimNode  *, int); /* linkage=_ZNK21CSolveIKChainAnimNode16GetChildOutputIDEi */
	/* <129c8e9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:234 */
	virtual const class CUtlString  & GetChildName(const class CSolveIKChainAnimNode  *, int); /* linkage=_ZNK21CSolveIKChainAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CSolveIKChainAnimNode  *, int); /* linkage=_ZNK21CSolveIKChainAnimNode8GetChildEi */
	virtual int GetChildCount(const class CSolveIKChainAnimNode  *); /* linkage=_ZNK21CSolveIKChainAnimNode13GetChildCountEv */
	virtual const void  * CastToBase(const class CSolveIKChainAnimNode  *, class ClassID); /* linkage=_ZNK21CSolveIKChainAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CSolveIKChainAnimNode *, class ClassID); /* linkage=_ZN21CSolveIKChainAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <129bd5c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:21 */
	virtual const class CClassInfo  & GetTypeInfo(const class CSolveIKChainAnimNode  *); /* linkage=_ZNK21CSolveIKChainAnimNode11GetTypeInfoEv */
	void CSolveIKChainAnimNode(class CSolveIKChainAnimNode *); /* linkage=_ZN21CSolveIKChainAnimNodeC4Ev */
	void KV3TransferLoad_CSolveIKChainAnimNode(class CSolveIKChainAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN21CSolveIKChainAnimNode37KV3TransferLoad_CSolveIKChainAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CSolveIKChainAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN21CSolveIKChainAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CSolveIKChainAnimNode(const class CSolveIKChainAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK21CSolveIKChainAnimNode37KV3TransferSave_CSolveIKChainAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CSolveIKChainAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK21CSolveIKChainAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5ecf5a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/solveikchainanimnode_h_schema.gen_cpp:344 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN21CSolveIKChainAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN21CSolveIKChainAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CSolveIKChainAnimNode(class CSolveIKChainAnimNode *); /* linkage=_ZN21CSolveIKChainAnimNodeD4Ev */
	class CSolveIKChainAnimNode & operator=(class CSolveIKChainAnimNode *, const class CSolveIKChainAnimNode  &); /* linkage=_ZN21CSolveIKChainAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CSolveIKChainAnimNode *); /* linkage=_ZN21CSolveIKChainAnimNode38Schema_CompileTimeVerificationFunctionEv */
	/* <5ea50a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/solveikchainanimnode.h:83 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CSolveIKChainAnimNode  *); /* linkage=_ZNK21CSolveIKChainAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN21CSolveIKChainAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN21CSolveIKChainAnimNode17GetPrimaryBindingEv */
	void CSolveIKChainAnimNode(class CSolveIKChainAnimNode *, class CSolveIKChainAnimNode &); /* linkage=_ZN21CSolveIKChainAnimNodeC4EOS_ */
	void CSolveIKChainAnimNode(class CSolveIKChainAnimNode *, const class CSolveIKChainAnimNode  &); /* linkage=_ZN21CSolveIKChainAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN21CSolveIKChainAnimNode8MyTypeIDEv */
	/* <129f1bf> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:21 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN21CSolveIKChainAnimNode10MyTypeInfoEv */
	class CSolveIKChainAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN21CSolveIKChainAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN21CSolveIKChainAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CSolveIKChainAnimNode  *, char &); /* linkage=_ZN21CSolveIKChainAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CSolveIKChainAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN21CSolveIKChainAnimNode32KV3TransferAllocateClassInstanceEPKc */
};

// <0129438C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:82
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 82
	const char   __PRETTY_FUNCTION__; // 11141
} /* size: 0, variables: 2 */

// <00F91592> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:82
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 82
	const char   __PRETTY_FUNCTION__; // 38949
} /* size: 0, variables: 2 */

// <0129431A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.h:83
// function call: 1
void CSolveIKChainAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 83
} /* size: 0, inline expansions: 1 (0 bytes) */

