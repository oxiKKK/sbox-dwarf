
//
// animationsystem/animgraph/animmotorlist.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 10
//	class: 1
//

// <0075B3AA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:10
void CAnimMotorList::~CAnimMotorList()
{
} /* size: 0 */

// <0075B38E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:10
inline void CAnimMotorList::~CAnimMotorList()
{
} /* size: 0 */

// <00745757> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:10
// member functions: 56
// member variables: 2
// static member variable: 1
// vtable entries: 12
// class size: 40
class CAnimMotorList : public IAnimMotorList {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:13 */
	enum {
		KV3TRANSFER_IS_VIRTUAL = 1,
	};
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:13 */
	enum {
		KV3TRANSFER_IGNORE_VIRTUAL = 0,
	};
public:
	/* class IAnimMotorList <ancestor>; */ /* 0 8 */
	void ~CAnimMotorList(CAnimMotorList* );
	void CAnimMotorList(CAnimMotorList* , const CAnimMotorList& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:12 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:12 */
	CAnimMotorList* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animmotorlist_h_schema.gen_cpp:61 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animmotorlist_h_schema.gen_cpp:90 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animmotorlist_h_schema.gen_cpp:36 */
	void Schema_CompileTimeVerificationFunction(CAnimMotorList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:12 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:12 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:12 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CAnimMotorList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:13 */
	void KV3TransferPolymorphicClassname(const CAnimMotorList* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:13 */
	CAnimMotorList* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animmotorlist_h_schema.gen_cpp:98 */
	virtual void KV3TransferSave(const CAnimMotorList* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animmotorlist_h_schema.gen_cpp:108 */
	virtual void KV3TransferLoad(CAnimMotorList* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animmotorlist_h_schema.gen_cpp:103 */
	void KV3TransferSave_CAnimMotorList(const CAnimMotorList* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animmotorlist_h_schema.gen_cpp:113 */
	void KV3TransferLoad_CAnimMotorList(CAnimMotorList* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:17 */
	void CAnimMotorList(CAnimMotorList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:22 */
	virtual CClassInfoList GetMotorTypes(const CAnimMotorList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:25 */
	virtual int GetMotorCount(const CAnimMotorList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:28 */
	virtual IAnimMotor* GetMotor(CAnimMotorList* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:29 */
	virtual const IAnimMotor* GetMotor(const CAnimMotorList* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:32 */
	virtual IAnimMotor* GetDefaultMotor(CAnimMotorList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:33 */
	virtual const IAnimMotor* GetDefaultMotor(const CAnimMotorList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:34 */
	virtual void SetDefaultMotor(CAnimMotorList* , IAnimMotor* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:37 */
	virtual IAnimMotor* AddMotor(CAnimMotorList* , const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:38 */
	virtual void RemoveMotor(CAnimMotorList* , IAnimMotor* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:41 */
	const CAnimMotorBase* GetMotorInternal(const CAnimMotorList* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:44 */
	CAnimMotorList& operator=(CAnimMotorList* , const CAnimMotorList& );
	CUtlVector<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, int> > m_motors; /* 8 32 */
	virtual void RemoveMotor(class CAnimMotorList *, class IAnimMotor *); /* linkage=_ZN14CAnimMotorList11RemoveMotorEP10IAnimMotor */
	virtual class IAnimMotor * AddMotor(class CAnimMotorList *, const char  *); /* linkage=_ZN14CAnimMotorList8AddMotorEPKc */
	virtual void SetDefaultMotor(class CAnimMotorList *, class IAnimMotor *); /* linkage=_ZN14CAnimMotorList15SetDefaultMotorEP10IAnimMotor */
	virtual const class IAnimMotor  * GetDefaultMotor(const class CAnimMotorList  *); /* linkage=_ZNK14CAnimMotorList15GetDefaultMotorEv */
	virtual class IAnimMotor * GetDefaultMotor(class CAnimMotorList *); /* linkage=_ZN14CAnimMotorList15GetDefaultMotorEv */
	virtual const class IAnimMotor  * GetMotor(const class CAnimMotorList  *, int); /* linkage=_ZNK14CAnimMotorList8GetMotorEi */
	virtual class IAnimMotor * GetMotor(class CAnimMotorList *, int); /* linkage=_ZN14CAnimMotorList8GetMotorEi */
	virtual int GetMotorCount(const class CAnimMotorList  *); /* linkage=_ZNK14CAnimMotorList13GetMotorCountEv */
	virtual CClassInfoList GetMotorTypes(const class CAnimMotorList  *); /* linkage=_ZNK14CAnimMotorList13GetMotorTypesEv */
	virtual void KV3TransferLoad(class CAnimMotorList *, class CKV3TransferLoadContext *); /* linkage=_ZN14CAnimMotorList15KV3TransferLoadEP23CKV3TransferLoadContext */
	/* <75d97f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animmotorlist_h_schema.gen_cpp:90 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN14CAnimMotorList32Schema_VerifyBindingIsRegisteredEv */
	virtual void KV3TransferSave(const class CAnimMotorList  *, class CKV3TransferSaveContext *); /* linkage=_ZNK14CAnimMotorList15KV3TransferSaveEP23CKV3TransferSaveContext */
	void ~CAnimMotorList(class CAnimMotorList *); /* linkage=_ZN14CAnimMotorListD4Ev */
	void KV3TransferPolymorphicClassname(const class CAnimMotorList  *, char &); /* linkage=_ZN14CAnimMotorList31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	/* <75d582> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:12 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CAnimMotorList  *); /* linkage=_ZNK14CAnimMotorList21Schema_DynamicBindingEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN14CAnimMotorList20Schema_StaticBindingEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN14CAnimMotorList17GetPrimaryBindingEv */
	void CAnimMotorList(class CAnimMotorList *, const class CAnimMotorList  &); /* linkage=_ZN14CAnimMotorListC4ERKS_ */
	class CAnimMotorList * Schema_MarkHelperFn(void); /* linkage=_ZN14CAnimMotorList19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN14CAnimMotorList15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	void Schema_CompileTimeVerificationFunction(class CAnimMotorList *); /* linkage=_ZN14CAnimMotorList38Schema_CompileTimeVerificationFunctionEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN14CAnimMotorList22Schema_StaticClassnameEv */
	class CAnimMotorList * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN14CAnimMotorList32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferSave_CAnimMotorList(const class CAnimMotorList  *, class CKV3TransferSaveContext *); /* linkage=_ZNK14CAnimMotorList30KV3TransferSave_CAnimMotorListEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CAnimMotorList(class CAnimMotorList *, class CKV3TransferLoadContext *); /* linkage=_ZN14CAnimMotorList30KV3TransferLoad_CAnimMotorListEP23CKV3TransferLoadContext */
	void CAnimMotorList(class CAnimMotorList *); /* linkage=_ZN14CAnimMotorListC4Ev */
	const class CAnimMotorBase  * GetMotorInternal(const class CAnimMotorList  *, int); /* linkage=_ZNK14CAnimMotorList16GetMotorInternalEi */
	class CAnimMotorList & operator=(class CAnimMotorList *, const class CAnimMotorList  &); /* linkage=_ZN14CAnimMotorListaSERKS_ */
};

// <0075D582> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:12
// function calls: 3
void CAnimMotorList::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 90
	Schema_VerifyBindingIsRegistered(void); // 12
	GetPrimaryBinding(void); // 12
} /* size: 75, inline expansions: 3 (78 bytes) */

// <0075B42D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:12
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0075B427> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:12
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <0075B40E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:12
inline void CAnimMotorList::Schema_DynamicBinding()
{
} /* size: 0 */

// <00680531> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:12
inline void Schema_StaticBinding(void)
{
} /* size: 0 */

// <00680519> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:12
void CAnimMotorList::Schema_DynamicBinding()
{
} /* size: 0 */

// <006804F6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:13
inline void KV3TransferPolymorphicClassname(const CAnimMotorList* pObject, char& pOutPolymorphicClassName)
{
} /* size: 0 */

// <0074A797> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmotorlist.h:17
void CAnimMotorList::CAnimMotorList()
{
} /* size: 0 */

