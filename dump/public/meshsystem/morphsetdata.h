
//
// public/meshsystem/morphsetdata.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 55
//	classes: 4
//	structs: 28
//

// <05300D35> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:47
inline void Get(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <04F7AC60> ../public/meshsystem/morphsetdata.h:47
// member functions: 2
// class size: 1
class CSchemaTypeOf<FlexOpCode_t> {
	/* ../public/meshsystem/morphsetdata.h:47 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
	/* ../public/meshsystem/morphsetdata.h:47 */
	const char* GetEnumName(void);
};

// <02D8F307> ../public/meshsystem/morphsetdata.h:49
// member functions: 15
// member variables: 2
// static member variable: 1
// struct size: 8
struct CFlexOp {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/meshsystem/morphsetdata.h:51 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/meshsystem/morphsetdata.h:51 */
	CFlexOp* Schema_MarkHelperFn(void);
	/* ../public/meshsystem/morphsetdata.h:51 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/meshsystem/morphsetdata.h:51 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/meshsystem/morphsetdata.h:51 */
	void Schema_CompileTimeVerificationFunction(CFlexOp* );
	/* ../public/meshsystem/morphsetdata.h:51 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/meshsystem/morphsetdata.h:51 */
	const char* Schema_StaticClassname(void);
	/* ../public/meshsystem/morphsetdata.h:51 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFlexOp* );
	/* ../public/meshsystem/morphsetdata.h:52 */
	CFlexOp* KV3TransferAllocateClassInstance(const char* );
	/* ../public/meshsystem/morphsetdata.h:52 */
	void KV3TransferSave(const CFlexOp* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:52 */
	void KV3TransferLoad(CFlexOp* , CKV3TransferLoadContext* );
	/* ../public/meshsystem/morphsetdata.h:52 */
	void KV3TransferSave_CFlexOp(const CFlexOp* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:52 */
	void KV3TransferLoad_CFlexOp(CFlexOp* , CKV3TransferLoadContext* );
	/* ../public/meshsystem/morphsetdata.h:54 */
	int32 index(const CFlexOp* );
	/* ../public/meshsystem/morphsetdata.h:55 */
	float value(const CFlexOp* );
	FlexOpCode_t m_OpCode; /* 0 4 */
	int32 m_Data; /* 4 4 */
};

// <052C5A9F> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:49
// member functions: 15
// member variables: 2
// static member variable: 1
// struct size: 8
struct CFlexOp {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:52 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:51 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:51 */
	CFlexOp* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:51 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:51 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:51 */
	void Schema_CompileTimeVerificationFunction(CFlexOp* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:51 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:51 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:51 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFlexOp* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:52 */
	CFlexOp* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:52 */
	void KV3TransferSave(const CFlexOp* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:52 */
	void KV3TransferLoad(CFlexOp* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:52 */
	void KV3TransferSave_CFlexOp(const CFlexOp* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:52 */
	void KV3TransferLoad_CFlexOp(CFlexOp* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:54 */
	int32 index(const CFlexOp* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:55 */
	float value(const CFlexOp* );
	FlexOpCode_t m_OpCode; /* 0 4 */
	int32 m_Data; /* 4 4 */
};

// <05300D2F> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:51
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <05300D29> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:51
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <05300D10> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:51
inline void CFlexOp::Schema_DynamicBinding()
{
} /* size: 0 */

// <04E98F55> ../public/meshsystem/morphsetdata.h:54
inline void CFlexOp::index()
{
} /* size: 0 */

// <04E98F3C> ../public/meshsystem/morphsetdata.h:55
inline void CFlexOp::value()
{
} /* size: 0 */

// <052FF17A> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:62
inline void CFlexRule::operator=(const CFlexRule &)
{
} /* size: 0 */

// <052FF12F> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:62
void CFlexRule::CFlexRule()
{
} /* size: 0 */

// <052FF113> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:62
inline void CFlexRule::CFlexRule()
{
} /* size: 0 */

// <052FF0FC> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:62
void CFlexRule::~CFlexRule()
{
} /* size: 0 */

// <052FF0E0> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:62
inline void CFlexRule::~CFlexRule()
{
} /* size: 0 */

// <02D8F510> ../public/meshsystem/morphsetdata.h:62
// member functions: 15
// member variables: 2
// static member variable: 1
// struct size: 40
struct CFlexRule {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/meshsystem/morphsetdata.h:64 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/meshsystem/morphsetdata.h:64 */
	CFlexRule* Schema_MarkHelperFn(void);
	/* ../public/meshsystem/morphsetdata.h:64 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/meshsystem/morphsetdata.h:64 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/meshsystem/morphsetdata.h:64 */
	void Schema_CompileTimeVerificationFunction(CFlexRule* );
	/* ../public/meshsystem/morphsetdata.h:64 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/meshsystem/morphsetdata.h:64 */
	const char* Schema_StaticClassname(void);
	/* ../public/meshsystem/morphsetdata.h:64 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFlexRule* );
	/* ../public/meshsystem/morphsetdata.h:65 */
	CFlexRule* KV3TransferAllocateClassInstance(const char* );
	/* ../public/meshsystem/morphsetdata.h:65 */
	void KV3TransferSave(const CFlexRule* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:65 */
	void KV3TransferLoad(CFlexRule* , CKV3TransferLoadContext* );
	/* ../public/meshsystem/morphsetdata.h:65 */
	void KV3TransferSave_CFlexRule(const CFlexRule* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:65 */
	void KV3TransferLoad_CFlexRule(CFlexRule* , CKV3TransferLoadContext* );
	int32 m_nFlex; /* 0 4 */
	CUtlVector<CFlexOp, CUtlMemory<CFlexOp, int> > m_FlexOps; /* 8 32 */
	/* ../public/meshsystem/morphsetdata.h:69 */
	int32 numops(const CFlexRule* );
	/* ../public/meshsystem/morphsetdata.h:70 */
	const CFlexOp* iFlexOp(const CFlexRule* , int);
};

// <04F7AE90> ../public/meshsystem/morphsetdata.h:62
// member functions: 18
// member variables: 2
// static member variable: 1
// struct size: 40
struct CFlexRule {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/meshsystem/morphsetdata.h:64 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/meshsystem/morphsetdata.h:64 */
	CFlexRule* Schema_MarkHelperFn(void);
	/* ../public/meshsystem/morphsetdata.h:64 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/meshsystem/morphsetdata.h:64 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/meshsystem/morphsetdata.h:64 */
	void Schema_CompileTimeVerificationFunction(CFlexRule* );
	/* ../public/meshsystem/morphsetdata.h:64 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/meshsystem/morphsetdata.h:64 */
	const char* Schema_StaticClassname(void);
	/* ../public/meshsystem/morphsetdata.h:64 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFlexRule* );
	/* ../public/meshsystem/morphsetdata.h:65 */
	CFlexRule* KV3TransferAllocateClassInstance(const char* );
	/* ../public/meshsystem/morphsetdata.h:65 */
	void KV3TransferSave(const CFlexRule* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:65 */
	void KV3TransferLoad(CFlexRule* , CKV3TransferLoadContext* );
	/* ../public/meshsystem/morphsetdata.h:65 */
	void KV3TransferSave_CFlexRule(const CFlexRule* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:65 */
	void KV3TransferLoad_CFlexRule(CFlexRule* , CKV3TransferLoadContext* );
	int32 m_nFlex; /* 0 4 */
	CUtlVector<CFlexOp, CUtlMemory<CFlexOp, int> > m_FlexOps; /* 8 32 */
	/* ../public/meshsystem/morphsetdata.h:69 */
	int32 numops(const CFlexRule* );
	/* ../public/meshsystem/morphsetdata.h:70 */
	const CFlexOp* iFlexOp(const CFlexRule* , int);
	CFlexRule& operator=(CFlexRule* , const CFlexRule& );
	void ~CFlexRule(CFlexRule* );
	void CFlexRule(CFlexRule* );
};

// <052C5CAE> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:62
// member functions: 18
// member variables: 2
// static member variable: 1
// struct size: 40
struct CFlexRule {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:65 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:64 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:64 */
	CFlexRule* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:64 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:64 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:64 */
	void Schema_CompileTimeVerificationFunction(CFlexRule* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:64 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:64 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:64 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFlexRule* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:65 */
	CFlexRule* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:65 */
	void KV3TransferSave(const CFlexRule* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:65 */
	void KV3TransferLoad(CFlexRule* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:65 */
	void KV3TransferSave_CFlexRule(const CFlexRule* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:65 */
	void KV3TransferLoad_CFlexRule(CFlexRule* , CKV3TransferLoadContext* );
	int32 m_nFlex; /* 0 4 */
	CUtlVector<CFlexOp, CUtlMemory<CFlexOp, int> > m_FlexOps; /* 8 32 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:69 */
	int32 numops(const CFlexRule* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:70 */
	const CFlexOp* iFlexOp(const CFlexRule* , int);
	void ~CFlexRule(CFlexRule* );
	void CFlexRule(CFlexRule* );
	CFlexRule& operator=(CFlexRule* , const CFlexRule& );
};

// <00133765> ../public/meshsystem/morphsetdata.h:62
// member functions: 16
// member variables: 2
// static member variable: 1
// struct size: 40
struct CFlexRule {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/meshsystem/morphsetdata.h:64 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/meshsystem/morphsetdata.h:64 */
	CFlexRule* Schema_MarkHelperFn(void);
	/* ../public/meshsystem/morphsetdata.h:64 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/meshsystem/morphsetdata.h:64 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/meshsystem/morphsetdata.h:64 */
	void Schema_CompileTimeVerificationFunction(CFlexRule* );
	/* ../public/meshsystem/morphsetdata.h:64 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/meshsystem/morphsetdata.h:64 */
	const char* Schema_StaticClassname(void);
	/* ../public/meshsystem/morphsetdata.h:64 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFlexRule* );
	/* ../public/meshsystem/morphsetdata.h:65 */
	CFlexRule* KV3TransferAllocateClassInstance(const char* );
	/* ../public/meshsystem/morphsetdata.h:65 */
	void KV3TransferSave(const CFlexRule* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:65 */
	void KV3TransferLoad(CFlexRule* , CKV3TransferLoadContext* );
	/* ../public/meshsystem/morphsetdata.h:65 */
	void KV3TransferSave_CFlexRule(const CFlexRule* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:65 */
	void KV3TransferLoad_CFlexRule(CFlexRule* , CKV3TransferLoadContext* );
	int32 m_nFlex; /* 0 4 */
	CUtlVector<CFlexOp, CUtlMemory<CFlexOp, int> > m_FlexOps; /* 8 32 */
	/* ../public/meshsystem/morphsetdata.h:69 */
	int32 numops(const CFlexRule* );
	/* ../public/meshsystem/morphsetdata.h:70 */
	const CFlexOp* iFlexOp(const CFlexRule* , int);
	void ~CFlexRule(CFlexRule* );
};

// <05300CEB> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:64
inline void CFlexRule::Schema_DynamicBinding()
{
} /* size: 0 */

// <052FCC3F> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:73
inline void CFlexDesc::operator=(const CFlexDesc &)
{
} /* size: 0 */

// <052FCC28> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:73
void CFlexDesc::CFlexDesc()
{
} /* size: 0 */

// <052FCC0C> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:73
inline void CFlexDesc::CFlexDesc()
{
} /* size: 0 */

// <052FCBF5> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:73
void CFlexDesc::~CFlexDesc()
{
} /* size: 0 */

// <052FCBD9> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:73
inline void CFlexDesc::~CFlexDesc()
{
} /* size: 0 */

// <02D90DC1> ../public/meshsystem/morphsetdata.h:73
// member functions: 14
// member variable: 1
// static member variable: 1
// struct size: 8
struct CFlexDesc {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/meshsystem/morphsetdata.h:75 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/meshsystem/morphsetdata.h:75 */
	CFlexDesc* Schema_MarkHelperFn(void);
	/* ../public/meshsystem/morphsetdata.h:75 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/meshsystem/morphsetdata.h:75 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/meshsystem/morphsetdata.h:75 */
	void Schema_CompileTimeVerificationFunction(CFlexDesc* );
	/* ../public/meshsystem/morphsetdata.h:75 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/meshsystem/morphsetdata.h:75 */
	const char* Schema_StaticClassname(void);
	/* ../public/meshsystem/morphsetdata.h:75 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFlexDesc* );
	/* ../public/meshsystem/morphsetdata.h:76 */
	CFlexDesc* KV3TransferAllocateClassInstance(const char* );
	/* ../public/meshsystem/morphsetdata.h:76 */
	void KV3TransferSave(const CFlexDesc* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:76 */
	void KV3TransferLoad(CFlexDesc* , CKV3TransferLoadContext* );
	/* ../public/meshsystem/morphsetdata.h:76 */
	void KV3TransferSave_CFlexDesc(const CFlexDesc* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:76 */
	void KV3TransferLoad_CFlexDesc(CFlexDesc* , CKV3TransferLoadContext* );
	CUtlString m_szFacs; /* 0 8 */
	/* ../public/meshsystem/morphsetdata.h:79 */
	const char* pszFACS(const CFlexDesc* );
};

// <04F7C7F4> ../public/meshsystem/morphsetdata.h:73
// member functions: 17
// member variable: 1
// static member variable: 1
// struct size: 8
struct CFlexDesc {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/meshsystem/morphsetdata.h:75 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/meshsystem/morphsetdata.h:75 */
	CFlexDesc* Schema_MarkHelperFn(void);
	/* ../public/meshsystem/morphsetdata.h:75 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/meshsystem/morphsetdata.h:75 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/meshsystem/morphsetdata.h:75 */
	void Schema_CompileTimeVerificationFunction(CFlexDesc* );
	/* ../public/meshsystem/morphsetdata.h:75 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/meshsystem/morphsetdata.h:75 */
	const char* Schema_StaticClassname(void);
	/* ../public/meshsystem/morphsetdata.h:75 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFlexDesc* );
	/* ../public/meshsystem/morphsetdata.h:76 */
	CFlexDesc* KV3TransferAllocateClassInstance(const char* );
	/* ../public/meshsystem/morphsetdata.h:76 */
	void KV3TransferSave(const CFlexDesc* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:76 */
	void KV3TransferLoad(CFlexDesc* , CKV3TransferLoadContext* );
	/* ../public/meshsystem/morphsetdata.h:76 */
	void KV3TransferSave_CFlexDesc(const CFlexDesc* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:76 */
	void KV3TransferLoad_CFlexDesc(CFlexDesc* , CKV3TransferLoadContext* );
	CUtlString m_szFacs; /* 0 8 */
	/* ../public/meshsystem/morphsetdata.h:79 */
	const char* pszFACS(const CFlexDesc* );
	CFlexDesc& operator=(CFlexDesc* , const CFlexDesc& );
	void ~CFlexDesc(CFlexDesc* );
	void CFlexDesc(CFlexDesc* );
};

// <052C7630> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:73
// member functions: 17
// member variable: 1
// static member variable: 1
// struct size: 8
struct CFlexDesc {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:76 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:75 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:75 */
	CFlexDesc* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:75 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:75 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:75 */
	void Schema_CompileTimeVerificationFunction(CFlexDesc* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:75 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:75 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:75 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFlexDesc* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:76 */
	CFlexDesc* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:76 */
	void KV3TransferSave(const CFlexDesc* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:76 */
	void KV3TransferLoad(CFlexDesc* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:76 */
	void KV3TransferSave_CFlexDesc(const CFlexDesc* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:76 */
	void KV3TransferLoad_CFlexDesc(CFlexDesc* , CKV3TransferLoadContext* );
	CUtlString m_szFacs; /* 0 8 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:79 */
	const char* pszFACS(const CFlexDesc* );
	void ~CFlexDesc(CFlexDesc* );
	void CFlexDesc(CFlexDesc* );
	CFlexDesc& operator=(CFlexDesc* , const CFlexDesc& );
};

// <00135086> ../public/meshsystem/morphsetdata.h:73
// member functions: 15
// member variable: 1
// static member variable: 1
// struct size: 8
struct CFlexDesc {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/meshsystem/morphsetdata.h:75 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/meshsystem/morphsetdata.h:75 */
	CFlexDesc* Schema_MarkHelperFn(void);
	/* ../public/meshsystem/morphsetdata.h:75 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/meshsystem/morphsetdata.h:75 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/meshsystem/morphsetdata.h:75 */
	void Schema_CompileTimeVerificationFunction(CFlexDesc* );
	/* ../public/meshsystem/morphsetdata.h:75 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/meshsystem/morphsetdata.h:75 */
	const char* Schema_StaticClassname(void);
	/* ../public/meshsystem/morphsetdata.h:75 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFlexDesc* );
	/* ../public/meshsystem/morphsetdata.h:76 */
	CFlexDesc* KV3TransferAllocateClassInstance(const char* );
	/* ../public/meshsystem/morphsetdata.h:76 */
	void KV3TransferSave(const CFlexDesc* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:76 */
	void KV3TransferLoad(CFlexDesc* , CKV3TransferLoadContext* );
	/* ../public/meshsystem/morphsetdata.h:76 */
	void KV3TransferSave_CFlexDesc(const CFlexDesc* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:76 */
	void KV3TransferLoad_CFlexDesc(CFlexDesc* , CKV3TransferLoadContext* );
	CUtlString m_szFacs; /* 0 8 */
	/* ../public/meshsystem/morphsetdata.h:79 */
	const char* pszFACS(const CFlexDesc* );
	void ~CFlexDesc(CFlexDesc* );
};

// <05300CC6> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:75
inline void CFlexDesc::Schema_DynamicBinding()
{
} /* size: 0 */

// <052FC6CF> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:82
inline void CFlexController::operator=(const CFlexController &)
{
} /* size: 0 */

// <052FC6B8> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:82
void CFlexController::CFlexController()
{
} /* size: 0 */

// <052FC69C> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:82
inline void CFlexController::CFlexController()
{
} /* size: 0 */

// <052FC685> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:82
void CFlexController::~CFlexController()
{
} /* size: 0 */

// <052FC669> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:82
inline void CFlexController::~CFlexController()
{
} /* size: 0 */

// <01077A18> ../public/meshsystem/morphsetdata.h:82
// member functions: 15
// member variables: 4
// static member variable: 1
// struct size: 24
struct CFlexController {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/meshsystem/morphsetdata.h:84 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/meshsystem/morphsetdata.h:84 */
	CFlexController* Schema_MarkHelperFn(void);
	/* ../public/meshsystem/morphsetdata.h:84 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/meshsystem/morphsetdata.h:84 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/meshsystem/morphsetdata.h:84 */
	void Schema_CompileTimeVerificationFunction(CFlexController* );
	/* ../public/meshsystem/morphsetdata.h:84 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/meshsystem/morphsetdata.h:84 */
	const char* Schema_StaticClassname(void);
	/* ../public/meshsystem/morphsetdata.h:84 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFlexController* );
	/* ../public/meshsystem/morphsetdata.h:85 */
	CFlexController* KV3TransferAllocateClassInstance(const char* );
	/* ../public/meshsystem/morphsetdata.h:85 */
	void KV3TransferSave(const CFlexController* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:85 */
	void KV3TransferLoad(CFlexController* , CKV3TransferLoadContext* );
	/* ../public/meshsystem/morphsetdata.h:85 */
	void KV3TransferSave_CFlexController(const CFlexController* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:85 */
	void KV3TransferLoad_CFlexController(CFlexController* , CKV3TransferLoadContext* );
	CUtlString m_szName; /* 0 8 */
	CUtlString m_szType; /* 8 8 */
	float32 min; /* 16 4 */
	float32 max; /* 20 4 */
	/* ../public/meshsystem/morphsetdata.h:93 */
	const char* pszName(const CFlexController* );
	/* ../public/meshsystem/morphsetdata.h:94 */
	const char* pszType(const CFlexController* );
};

// <04F3B5D0> ../public/meshsystem/morphsetdata.h:82
// member functions: 18
// member variables: 4
// static member variable: 1
// struct size: 24
struct CFlexController {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/meshsystem/morphsetdata.h:84 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/meshsystem/morphsetdata.h:84 */
	CFlexController* Schema_MarkHelperFn(void);
	/* ../public/meshsystem/morphsetdata.h:84 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/meshsystem/morphsetdata.h:84 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/meshsystem/morphsetdata.h:84 */
	void Schema_CompileTimeVerificationFunction(CFlexController* );
	/* ../public/meshsystem/morphsetdata.h:84 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/meshsystem/morphsetdata.h:84 */
	const char* Schema_StaticClassname(void);
	/* ../public/meshsystem/morphsetdata.h:84 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFlexController* );
	/* ../public/meshsystem/morphsetdata.h:85 */
	CFlexController* KV3TransferAllocateClassInstance(const char* );
	/* ../public/meshsystem/morphsetdata.h:85 */
	void KV3TransferSave(const CFlexController* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:85 */
	void KV3TransferLoad(CFlexController* , CKV3TransferLoadContext* );
	/* ../public/meshsystem/morphsetdata.h:85 */
	void KV3TransferSave_CFlexController(const CFlexController* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:85 */
	void KV3TransferLoad_CFlexController(CFlexController* , CKV3TransferLoadContext* );
	CUtlString m_szName; /* 0 8 */
	CUtlString m_szType; /* 8 8 */
	float32 min; /* 16 4 */
	float32 max; /* 20 4 */
	/* ../public/meshsystem/morphsetdata.h:93 */
	const char* pszName(const CFlexController* );
	/* ../public/meshsystem/morphsetdata.h:94 */
	const char* pszType(const CFlexController* );
	CFlexController& operator=(CFlexController* , const CFlexController& );
	void ~CFlexController(CFlexController* );
	void CFlexController(CFlexController* );
};

// <052C7866> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:82
// member functions: 18
// member variables: 4
// static member variable: 1
// struct size: 24
struct CFlexController {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:85 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:84 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:84 */
	CFlexController* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:84 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:84 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:84 */
	void Schema_CompileTimeVerificationFunction(CFlexController* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:84 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:84 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:84 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFlexController* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:85 */
	CFlexController* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:85 */
	void KV3TransferSave(const CFlexController* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:85 */
	void KV3TransferLoad(CFlexController* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:85 */
	void KV3TransferSave_CFlexController(const CFlexController* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:85 */
	void KV3TransferLoad_CFlexController(CFlexController* , CKV3TransferLoadContext* );
	CUtlString m_szName; /* 0 8 */
	CUtlString m_szType; /* 8 8 */
	float32 min; /* 16 4 */
	float32 max; /* 20 4 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:93 */
	const char* pszName(const CFlexController* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:94 */
	const char* pszType(const CFlexController* );
	void ~CFlexController(CFlexController* );
	void CFlexController(CFlexController* );
	CFlexController& operator=(CFlexController* , const CFlexController& );
};

// <0010397E> ../public/meshsystem/morphsetdata.h:82
// member functions: 16
// member variables: 4
// static member variable: 1
// struct size: 24
struct CFlexController {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/meshsystem/morphsetdata.h:84 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/meshsystem/morphsetdata.h:84 */
	CFlexController* Schema_MarkHelperFn(void);
	/* ../public/meshsystem/morphsetdata.h:84 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/meshsystem/morphsetdata.h:84 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/meshsystem/morphsetdata.h:84 */
	void Schema_CompileTimeVerificationFunction(CFlexController* );
	/* ../public/meshsystem/morphsetdata.h:84 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/meshsystem/morphsetdata.h:84 */
	const char* Schema_StaticClassname(void);
	/* ../public/meshsystem/morphsetdata.h:84 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFlexController* );
	/* ../public/meshsystem/morphsetdata.h:85 */
	CFlexController* KV3TransferAllocateClassInstance(const char* );
	/* ../public/meshsystem/morphsetdata.h:85 */
	void KV3TransferSave(const CFlexController* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:85 */
	void KV3TransferLoad(CFlexController* , CKV3TransferLoadContext* );
	/* ../public/meshsystem/morphsetdata.h:85 */
	void KV3TransferSave_CFlexController(const CFlexController* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:85 */
	void KV3TransferLoad_CFlexController(CFlexController* , CKV3TransferLoadContext* );
	CUtlString m_szName; /* 0 8 */
	CUtlString m_szType; /* 8 8 */
	float32 min; /* 16 4 */
	float32 max; /* 20 4 */
	/* ../public/meshsystem/morphsetdata.h:93 */
	const char* pszName(const CFlexController* );
	/* ../public/meshsystem/morphsetdata.h:94 */
	const char* pszType(const CFlexController* );
	void ~CFlexController(CFlexController* );
};

// <05300CA1> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:84
inline void CFlexController::Schema_DynamicBinding()
{
} /* size: 0 */

// <04BDE471> ../public/meshsystem/morphsetdata.h:93
inline void CFlexController::pszName()
{
} /* size: 0 */

// <04AE076D> ../public/meshsystem/morphsetdata.h:94
inline void CFlexController::pszType()
{
} /* size: 0 */

// <04F7CA47> ../public/meshsystem/morphsetdata.h:113
// member functions: 2
// class size: 1
class CSchemaTypeOf<MorphBundleType_t> {
	/* ../public/meshsystem/morphsetdata.h:113 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
	/* ../public/meshsystem/morphsetdata.h:113 */
	const char* GetEnumName(void);
};

// <052F9B98> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:115
inline void CMorphBundleData::operator=(const CMorphBundleData &)
{
} /* size: 0 */

// <052F9B4D> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:115
void CMorphBundleData::CMorphBundleData()
{
} /* size: 0 */

// <052F9B31> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:115
inline void CMorphBundleData::CMorphBundleData()
{
} /* size: 0 */

// <052F9B1A> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:115
void CMorphBundleData::~CMorphBundleData()
{
} /* size: 0 */

// <052F9AFE> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:115
inline void CMorphBundleData::~CMorphBundleData()
{
} /* size: 0 */

// <02D90FCD> ../public/meshsystem/morphsetdata.h:115
// member functions: 13
// member variables: 4
// static member variable: 1
// struct size: 72
struct CMorphBundleData {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/meshsystem/morphsetdata.h:117 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/meshsystem/morphsetdata.h:117 */
	CMorphBundleData* Schema_MarkHelperFn(void);
	/* ../public/meshsystem/morphsetdata.h:117 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/meshsystem/morphsetdata.h:117 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/meshsystem/morphsetdata.h:117 */
	void Schema_CompileTimeVerificationFunction(CMorphBundleData* );
	/* ../public/meshsystem/morphsetdata.h:117 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/meshsystem/morphsetdata.h:117 */
	const char* Schema_StaticClassname(void);
	/* ../public/meshsystem/morphsetdata.h:117 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CMorphBundleData* );
	/* ../public/meshsystem/morphsetdata.h:118 */
	CMorphBundleData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/meshsystem/morphsetdata.h:118 */
	void KV3TransferSave(const CMorphBundleData* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:118 */
	void KV3TransferLoad(CMorphBundleData* , CKV3TransferLoadContext* );
	/* ../public/meshsystem/morphsetdata.h:118 */
	void KV3TransferSave_CMorphBundleData(const CMorphBundleData* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:118 */
	void KV3TransferLoad_CMorphBundleData(CMorphBundleData* , CKV3TransferLoadContext* );
	float m_flULeftSrc; /* 0 4 */
	float m_flVTopSrc; /* 4 4 */
	CUtlVector<float, CUtlMemory<float, int> > m_offsets; /* 8 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_ranges; /* 40 32 */
};

// <04F7CA8A> ../public/meshsystem/morphsetdata.h:115
// member functions: 16
// member variables: 4
// static member variable: 1
// struct size: 72
struct CMorphBundleData {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/meshsystem/morphsetdata.h:117 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/meshsystem/morphsetdata.h:117 */
	CMorphBundleData* Schema_MarkHelperFn(void);
	/* ../public/meshsystem/morphsetdata.h:117 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/meshsystem/morphsetdata.h:117 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/meshsystem/morphsetdata.h:117 */
	void Schema_CompileTimeVerificationFunction(CMorphBundleData* );
	/* ../public/meshsystem/morphsetdata.h:117 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/meshsystem/morphsetdata.h:117 */
	const char* Schema_StaticClassname(void);
	/* ../public/meshsystem/morphsetdata.h:117 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CMorphBundleData* );
	/* ../public/meshsystem/morphsetdata.h:118 */
	CMorphBundleData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/meshsystem/morphsetdata.h:118 */
	void KV3TransferSave(const CMorphBundleData* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:118 */
	void KV3TransferLoad(CMorphBundleData* , CKV3TransferLoadContext* );
	/* ../public/meshsystem/morphsetdata.h:118 */
	void KV3TransferSave_CMorphBundleData(const CMorphBundleData* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:118 */
	void KV3TransferLoad_CMorphBundleData(CMorphBundleData* , CKV3TransferLoadContext* );
	float m_flULeftSrc; /* 0 4 */
	float m_flVTopSrc; /* 4 4 */
	CUtlVector<float, CUtlMemory<float, int> > m_offsets; /* 8 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_ranges; /* 40 32 */
	CMorphBundleData& operator=(CMorphBundleData* , const CMorphBundleData& );
	void ~CMorphBundleData(CMorphBundleData* );
	void CMorphBundleData(CMorphBundleData* );
};

// <052C7B88> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:115
// member functions: 16
// member variables: 4
// static member variable: 1
// struct size: 72
struct CMorphBundleData {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:118 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:117 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:117 */
	CMorphBundleData* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:117 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:117 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:117 */
	void Schema_CompileTimeVerificationFunction(CMorphBundleData* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:117 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:117 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:117 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CMorphBundleData* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:118 */
	CMorphBundleData* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:118 */
	void KV3TransferSave(const CMorphBundleData* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:118 */
	void KV3TransferLoad(CMorphBundleData* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:118 */
	void KV3TransferSave_CMorphBundleData(const CMorphBundleData* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:118 */
	void KV3TransferLoad_CMorphBundleData(CMorphBundleData* , CKV3TransferLoadContext* );
	float m_flULeftSrc; /* 0 4 */
	float m_flVTopSrc; /* 4 4 */
	CUtlVector<float, CUtlMemory<float, int> > m_offsets; /* 8 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_ranges; /* 40 32 */
	void ~CMorphBundleData(CMorphBundleData* );
	void CMorphBundleData(CMorphBundleData* );
	CMorphBundleData& operator=(CMorphBundleData* , const CMorphBundleData& );
};

// <0013529B> ../public/meshsystem/morphsetdata.h:115
// member functions: 14
// member variables: 4
// static member variable: 1
// struct size: 72
struct CMorphBundleData {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/meshsystem/morphsetdata.h:117 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/meshsystem/morphsetdata.h:117 */
	CMorphBundleData* Schema_MarkHelperFn(void);
	/* ../public/meshsystem/morphsetdata.h:117 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/meshsystem/morphsetdata.h:117 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/meshsystem/morphsetdata.h:117 */
	void Schema_CompileTimeVerificationFunction(CMorphBundleData* );
	/* ../public/meshsystem/morphsetdata.h:117 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/meshsystem/morphsetdata.h:117 */
	const char* Schema_StaticClassname(void);
	/* ../public/meshsystem/morphsetdata.h:117 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CMorphBundleData* );
	/* ../public/meshsystem/morphsetdata.h:118 */
	CMorphBundleData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/meshsystem/morphsetdata.h:118 */
	void KV3TransferSave(const CMorphBundleData* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:118 */
	void KV3TransferLoad(CMorphBundleData* , CKV3TransferLoadContext* );
	/* ../public/meshsystem/morphsetdata.h:118 */
	void KV3TransferSave_CMorphBundleData(const CMorphBundleData* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:118 */
	void KV3TransferLoad_CMorphBundleData(CMorphBundleData* , CKV3TransferLoadContext* );
	float m_flULeftSrc; /* 0 4 */
	float m_flVTopSrc; /* 4 4 */
	CUtlVector<float, CUtlMemory<float, int> > m_offsets; /* 8 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_ranges; /* 40 32 */
	void ~CMorphBundleData(CMorphBundleData* );
};

// <05300C65> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:117
inline void CMorphBundleData::Schema_DynamicBinding()
{
} /* size: 0 */

// <052F5648> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:126
inline void CMorphRectData::operator=(const CMorphRectData &)
{
} /* size: 0 */

// <052F55FD> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:126
void CMorphRectData::CMorphRectData()
{
} /* size: 0 */

// <052F55E1> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:126
inline void CMorphRectData::CMorphRectData()
{
} /* size: 0 */

// <052F55CA> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:126
void CMorphRectData::~CMorphRectData()
{
} /* size: 0 */

// <052F55AE> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:126
inline void CMorphRectData::~CMorphRectData()
{
} /* size: 0 */

// <02D911B2> ../public/meshsystem/morphsetdata.h:126
// member functions: 13
// member variables: 5
// static member variable: 1
// struct size: 48
struct CMorphRectData {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/meshsystem/morphsetdata.h:128 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/meshsystem/morphsetdata.h:128 */
	CMorphRectData* Schema_MarkHelperFn(void);
	/* ../public/meshsystem/morphsetdata.h:128 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/meshsystem/morphsetdata.h:128 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/meshsystem/morphsetdata.h:128 */
	void Schema_CompileTimeVerificationFunction(CMorphRectData* );
	/* ../public/meshsystem/morphsetdata.h:128 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/meshsystem/morphsetdata.h:128 */
	const char* Schema_StaticClassname(void);
	/* ../public/meshsystem/morphsetdata.h:128 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CMorphRectData* );
	/* ../public/meshsystem/morphsetdata.h:129 */
	CMorphRectData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/meshsystem/morphsetdata.h:129 */
	void KV3TransferSave(const CMorphRectData* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:129 */
	void KV3TransferLoad(CMorphRectData* , CKV3TransferLoadContext* );
	/* ../public/meshsystem/morphsetdata.h:129 */
	void KV3TransferSave_CMorphRectData(const CMorphRectData* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:129 */
	void KV3TransferLoad_CMorphRectData(CMorphRectData* , CKV3TransferLoadContext* );
	int16 m_nXLeftDst; /* 0 2 */
	int16 m_nYTopDst; /* 2 2 */
	float m_flUWidthSrc; /* 4 4 */
	float m_flVHeightSrc; /* 8 4 */
	CUtlVector<CMorphBundleData, CUtlMemory<CMorphBundleData, int> > m_bundleDatas; /* 16 32 */
};

// <04F7CCAE> ../public/meshsystem/morphsetdata.h:126
// member functions: 16
// member variables: 5
// static member variable: 1
// struct size: 48
struct CMorphRectData {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/meshsystem/morphsetdata.h:128 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/meshsystem/morphsetdata.h:128 */
	CMorphRectData* Schema_MarkHelperFn(void);
	/* ../public/meshsystem/morphsetdata.h:128 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/meshsystem/morphsetdata.h:128 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/meshsystem/morphsetdata.h:128 */
	void Schema_CompileTimeVerificationFunction(CMorphRectData* );
	/* ../public/meshsystem/morphsetdata.h:128 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/meshsystem/morphsetdata.h:128 */
	const char* Schema_StaticClassname(void);
	/* ../public/meshsystem/morphsetdata.h:128 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CMorphRectData* );
	/* ../public/meshsystem/morphsetdata.h:129 */
	CMorphRectData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/meshsystem/morphsetdata.h:129 */
	void KV3TransferSave(const CMorphRectData* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:129 */
	void KV3TransferLoad(CMorphRectData* , CKV3TransferLoadContext* );
	/* ../public/meshsystem/morphsetdata.h:129 */
	void KV3TransferSave_CMorphRectData(const CMorphRectData* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:129 */
	void KV3TransferLoad_CMorphRectData(CMorphRectData* , CKV3TransferLoadContext* );
	int16 m_nXLeftDst; /* 0 2 */
	int16 m_nYTopDst; /* 2 2 */
	float m_flUWidthSrc; /* 4 4 */
	float m_flVHeightSrc; /* 8 4 */
	CUtlVector<CMorphBundleData, CUtlMemory<CMorphBundleData, int> > m_bundleDatas; /* 16 32 */
	CMorphRectData& operator=(CMorphRectData* , const CMorphRectData& );
	void ~CMorphRectData(CMorphRectData* );
	void CMorphRectData(CMorphRectData* );
};

// <052C94DB> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:126
// member functions: 16
// member variables: 5
// static member variable: 1
// struct size: 48
struct CMorphRectData {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:129 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:128 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:128 */
	CMorphRectData* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:128 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:128 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:128 */
	void Schema_CompileTimeVerificationFunction(CMorphRectData* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:128 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:128 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:128 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CMorphRectData* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:129 */
	CMorphRectData* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:129 */
	void KV3TransferSave(const CMorphRectData* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:129 */
	void KV3TransferLoad(CMorphRectData* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:129 */
	void KV3TransferSave_CMorphRectData(const CMorphRectData* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:129 */
	void KV3TransferLoad_CMorphRectData(CMorphRectData* , CKV3TransferLoadContext* );
	int16 m_nXLeftDst; /* 0 2 */
	int16 m_nYTopDst; /* 2 2 */
	float m_flUWidthSrc; /* 4 4 */
	float m_flVHeightSrc; /* 8 4 */
	CUtlVector<CMorphBundleData, CUtlMemory<CMorphBundleData, int> > m_bundleDatas; /* 16 32 */
	void ~CMorphRectData(CMorphRectData* );
	void CMorphRectData(CMorphRectData* );
	CMorphRectData& operator=(CMorphRectData* , const CMorphRectData& );
};

// <00135481> ../public/meshsystem/morphsetdata.h:126
// member functions: 14
// member variables: 5
// static member variable: 1
// struct size: 48
struct CMorphRectData {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/meshsystem/morphsetdata.h:128 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/meshsystem/morphsetdata.h:128 */
	CMorphRectData* Schema_MarkHelperFn(void);
	/* ../public/meshsystem/morphsetdata.h:128 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/meshsystem/morphsetdata.h:128 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/meshsystem/morphsetdata.h:128 */
	void Schema_CompileTimeVerificationFunction(CMorphRectData* );
	/* ../public/meshsystem/morphsetdata.h:128 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/meshsystem/morphsetdata.h:128 */
	const char* Schema_StaticClassname(void);
	/* ../public/meshsystem/morphsetdata.h:128 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CMorphRectData* );
	/* ../public/meshsystem/morphsetdata.h:129 */
	CMorphRectData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/meshsystem/morphsetdata.h:129 */
	void KV3TransferSave(const CMorphRectData* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:129 */
	void KV3TransferLoad(CMorphRectData* , CKV3TransferLoadContext* );
	/* ../public/meshsystem/morphsetdata.h:129 */
	void KV3TransferSave_CMorphRectData(const CMorphRectData* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:129 */
	void KV3TransferLoad_CMorphRectData(CMorphRectData* , CKV3TransferLoadContext* );
	int16 m_nXLeftDst; /* 0 2 */
	int16 m_nYTopDst; /* 2 2 */
	float m_flUWidthSrc; /* 4 4 */
	float m_flVHeightSrc; /* 8 4 */
	CUtlVector<CMorphBundleData, CUtlMemory<CMorphBundleData, int> > m_bundleDatas; /* 16 32 */
	void ~CMorphRectData(CMorphRectData* );
};

// <05300C40> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:128
inline void CMorphRectData::Schema_DynamicBinding()
{
} /* size: 0 */

// <052F0E2A> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:138
inline void CMorphData::operator=(const CMorphData &)
{
} /* size: 0 */

// <052F0DDF> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:138
void CMorphData::CMorphData()
{
} /* size: 0 */

// <052F0DC3> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:138
inline void CMorphData::CMorphData()
{
} /* size: 0 */

// <052F0429> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:138
// variables: 2
// function calls: 49
void CMorphData::~CMorphData()
{
	{
		int i; // 1721
		CUtlMemory<CMorphRectData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CMorphRectData, CUtlMemory<CMorphRectData, int> >::Element(
			int i);  // 1723
		{
			int i; // 1721
			CUtlMemory<CMorphBundleData, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CMorphBundleData, CUtlMemory<CMorphBundleData, int> >::Element(
				int i);  // 1723
			CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
			CUtlMemory<float, int>::IsExternallyAllocated(); // 905
			CUtlMemory<float, int>::Purge(); // 903
			CUtlMemory<float, int>::Purge(); // 1799
			CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
			ValidateAlignment<float>(void); // 508
			CUtlMemory<float, int>::Purge(); // 510
			CUtlMemory<float, int>::~CUtlMemory(); // 562
			CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
			CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 115
			CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
			CUtlMemory<float, int>::IsExternallyAllocated(); // 905
			CUtlMemory<float, int>::Purge(); // 903
			CUtlMemory<float, int>::Purge(); // 1799
			CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
			ValidateAlignment<float>(void); // 508
			CUtlMemory<float, int>::Purge(); // 510
			CUtlMemory<float, int>::~CUtlMemory(); // 562
			CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
			CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 115
			CMorphBundleData::~CMorphBundleData(); // 1526
			Destruct<CMorphBundleData>(CMorphBundleData* pMemory); // 1723
		}
		CUtlVectorBase<CMorphBundleData, CUtlMemory<CMorphBundleData, int> >::RemoveAll(); // 1798
		CUtlMemory<CMorphBundleData, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CMorphBundleData, int>::Purge(); // 903
		CUtlMemory<CMorphBundleData, int>::Purge(); // 1799
		CUtlVectorBase<CMorphBundleData, CUtlMemory<CMorphBundleData, int> >::Purge(); // 560
		ValidateAlignment<CMorphBundleData>(void); // 508
		CUtlMemory<CMorphBundleData, int>::Purge(); // 510
		CUtlMemory<CMorphBundleData, int>::~CUtlMemory(); // 562
		CUtlVectorBase<CMorphBundleData, CUtlMemory<CMorphBundleData, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CMorphBundleData, CUtlMemory<CMorphBundleData, int> >::~CUtlVector(); // 126
		CMorphRectData::~CMorphRectData(); // 1526
		Destruct<CMorphRectData>(CMorphRectData* pMemory); // 1723
	}
	CUtlVectorBase<CMorphRectData, CUtlMemory<CMorphRectData, int> >::RemoveAll(); // 1798
	CUtlMemory<CMorphRectData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CMorphRectData, int>::Purge(); // 903
	CUtlMemory<CMorphRectData, int>::Purge(); // 1799
	CUtlVectorBase<CMorphRectData, CUtlMemory<CMorphRectData, int> >::Purge(); // 560
	ValidateAlignment<CMorphRectData>(void); // 508
	CUtlMemory<CMorphRectData, int>::Purge(); // 510
	CUtlMemory<CMorphRectData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CMorphRectData, CUtlMemory<CMorphRectData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CMorphRectData, CUtlMemory<CMorphRectData, int> >::~CUtlVector(); // 138
	CUtlString::~CUtlString(); // 138
} /* size: 343, inline expansions: 11 (1120 bytes) */

// <052F040D> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:138
inline void CMorphData::~CMorphData()
{
} /* size: 0 */

// <00163D84> ../public/meshsystem/morphsetdata.h:138
void CMorphData::~CMorphData()
{
} /* size: 0 */

// <02D92A57> ../public/meshsystem/morphsetdata.h:138
// member functions: 13
// member variables: 2
// static member variable: 1
// struct size: 40
struct CMorphData {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/meshsystem/morphsetdata.h:140 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/meshsystem/morphsetdata.h:140 */
	CMorphData* Schema_MarkHelperFn(void);
	/* ../public/meshsystem/morphsetdata.h:140 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/meshsystem/morphsetdata.h:140 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/meshsystem/morphsetdata.h:140 */
	void Schema_CompileTimeVerificationFunction(CMorphData* );
	/* ../public/meshsystem/morphsetdata.h:140 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/meshsystem/morphsetdata.h:140 */
	const char* Schema_StaticClassname(void);
	/* ../public/meshsystem/morphsetdata.h:140 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CMorphData* );
	/* ../public/meshsystem/morphsetdata.h:141 */
	CMorphData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/meshsystem/morphsetdata.h:141 */
	void KV3TransferSave(const CMorphData* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:141 */
	void KV3TransferLoad(CMorphData* , CKV3TransferLoadContext* );
	/* ../public/meshsystem/morphsetdata.h:141 */
	void KV3TransferSave_CMorphData(const CMorphData* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:141 */
	void KV3TransferLoad_CMorphData(CMorphData* , CKV3TransferLoadContext* );
	CUtlString m_name; /* 0 8 */
	CUtlVector<CMorphRectData, CUtlMemory<CMorphRectData, int> > m_morphRectDatas; /* 8 32 */
};

// <04F7E5F8> ../public/meshsystem/morphsetdata.h:138
// member functions: 16
// member variables: 2
// static member variable: 1
// struct size: 40
struct CMorphData {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/meshsystem/morphsetdata.h:140 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/meshsystem/morphsetdata.h:140 */
	CMorphData* Schema_MarkHelperFn(void);
	/* ../public/meshsystem/morphsetdata.h:140 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/meshsystem/morphsetdata.h:140 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/meshsystem/morphsetdata.h:140 */
	void Schema_CompileTimeVerificationFunction(CMorphData* );
	/* ../public/meshsystem/morphsetdata.h:140 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/meshsystem/morphsetdata.h:140 */
	const char* Schema_StaticClassname(void);
	/* ../public/meshsystem/morphsetdata.h:140 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CMorphData* );
	/* ../public/meshsystem/morphsetdata.h:141 */
	CMorphData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/meshsystem/morphsetdata.h:141 */
	void KV3TransferSave(const CMorphData* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:141 */
	void KV3TransferLoad(CMorphData* , CKV3TransferLoadContext* );
	/* ../public/meshsystem/morphsetdata.h:141 */
	void KV3TransferSave_CMorphData(const CMorphData* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:141 */
	void KV3TransferLoad_CMorphData(CMorphData* , CKV3TransferLoadContext* );
	CUtlString m_name; /* 0 8 */
	CUtlVector<CMorphRectData, CUtlMemory<CMorphRectData, int> > m_morphRectDatas; /* 8 32 */
	CMorphData& operator=(CMorphData* , const CMorphData& );
	void ~CMorphData(CMorphData* );
	void CMorphData(CMorphData* );
};

// <052CAE43> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:138
// member functions: 16
// member variables: 2
// static member variable: 1
// struct size: 40
struct CMorphData {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:141 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:140 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:140 */
	CMorphData* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:140 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:140 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:140 */
	void Schema_CompileTimeVerificationFunction(CMorphData* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:140 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:140 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:140 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CMorphData* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:141 */
	CMorphData* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:141 */
	void KV3TransferSave(const CMorphData* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:141 */
	void KV3TransferLoad(CMorphData* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:141 */
	void KV3TransferSave_CMorphData(const CMorphData* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:141 */
	void KV3TransferLoad_CMorphData(CMorphData* , CKV3TransferLoadContext* );
	CUtlString m_name; /* 0 8 */
	CUtlVector<CMorphRectData, CUtlMemory<CMorphRectData, int> > m_morphRectDatas; /* 8 32 */
	void ~CMorphData(CMorphData* );
	void CMorphData(CMorphData* );
	CMorphData& operator=(CMorphData* , const CMorphData& );
};

// <00136D88> ../public/meshsystem/morphsetdata.h:138
// member functions: 14
// member variables: 2
// static member variable: 1
// struct size: 40
struct CMorphData {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/meshsystem/morphsetdata.h:140 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/meshsystem/morphsetdata.h:140 */
	CMorphData* Schema_MarkHelperFn(void);
	/* ../public/meshsystem/morphsetdata.h:140 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/meshsystem/morphsetdata.h:140 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/meshsystem/morphsetdata.h:140 */
	void Schema_CompileTimeVerificationFunction(CMorphData* );
	/* ../public/meshsystem/morphsetdata.h:140 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/meshsystem/morphsetdata.h:140 */
	const char* Schema_StaticClassname(void);
	/* ../public/meshsystem/morphsetdata.h:140 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CMorphData* );
	/* ../public/meshsystem/morphsetdata.h:141 */
	CMorphData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/meshsystem/morphsetdata.h:141 */
	void KV3TransferSave(const CMorphData* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:141 */
	void KV3TransferLoad(CMorphData* , CKV3TransferLoadContext* );
	/* ../public/meshsystem/morphsetdata.h:141 */
	void KV3TransferSave_CMorphData(const CMorphData* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:141 */
	void KV3TransferLoad_CMorphData(CMorphData* , CKV3TransferLoadContext* );
	CUtlString m_name; /* 0 8 */
	CUtlVector<CMorphRectData, CUtlMemory<CMorphRectData, int> > m_morphRectDatas; /* 8 32 */
	void ~CMorphData(CMorphData* );
};

// <05300C1B> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:140
inline void CMorphData::Schema_DynamicBinding()
{
} /* size: 0 */

// <04F7FF3A> ../public/meshsystem/morphsetdata.h:154
// member functions: 2
// class size: 1
class CSchemaTypeOf<MorphLookupType_t> {
	/* ../public/meshsystem/morphsetdata.h:154 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
	/* ../public/meshsystem/morphsetdata.h:154 */
	const char* GetEnumName(void);
};

// <04F7FFA2> ../public/meshsystem/morphsetdata.h:163
// member functions: 2
// class size: 1
class CSchemaTypeOf<MorphEncodingType_t> {
	/* ../public/meshsystem/morphsetdata.h:163 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
	/* ../public/meshsystem/morphsetdata.h:163 */
	const char* GetEnumName(void);
};

// <052EE1E4> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:165
void CMorphSetData::CMorphSetData()
{
} /* size: 0 */

// <052EE1C8> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:165
inline void CMorphSetData::CMorphSetData()
{
} /* size: 0 */

// <052ED2C8> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:165
// variables: 4
// function calls: 76
void CMorphSetData::~CMorphSetData()
{
	{
		int i; // 1721
		CUtlMemory<CFlexRule, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CFlexRule, CUtlMemory<CFlexRule, int> >::Element(
			int i);  // 1723
		CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >::RemoveAll(); // 1798
		CUtlMemory<CFlexOp, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CFlexOp, int>::Purge(); // 903
		CUtlMemory<CFlexOp, int>::Purge(); // 1799
		CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >::Purge(); // 560
		ValidateAlignment<CFlexOp>(void); // 508
		CUtlMemory<CFlexOp, int>::Purge(); // 510
		CUtlMemory<CFlexOp, int>::~CUtlMemory(); // 562
		CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CFlexOp, CUtlMemory<CFlexOp, int> >::~CUtlVector(); // 62
		CFlexRule::~CFlexRule(); // 1526
		Destruct<CFlexRule>(CFlexRule* pMemory); // 1723
	}
	CUtlVectorBase<CFlexRule, CUtlMemory<CFlexRule, int> >::RemoveAll(); // 1798
	CUtlMemory<CFlexRule, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CFlexRule, int>::Purge(); // 903
	CUtlMemory<CFlexRule, int>::Purge(); // 1799
	CUtlVectorBase<CFlexRule, CUtlMemory<CFlexRule, int> >::Purge(); // 560
	ValidateAlignment<CFlexRule>(void); // 508
	CUtlMemory<CFlexRule, int>::Purge(); // 510
	CUtlMemory<CFlexRule, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CFlexRule, CUtlMemory<CFlexRule, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CFlexRule, CUtlMemory<CFlexRule, int> >::~CUtlVector(); // 165
	{
		int i; // 1721
		CUtlMemory<CFlexController, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 82
		CUtlString::~CUtlString(); // 82
		CFlexController::~CFlexController(); // 1526
		Destruct<CFlexController>(CFlexController* pMemory); // 1723
	}
	CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::RemoveAll(); // 1798
	CUtlMemory<CFlexController, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CFlexController, int>::Purge(); // 903
	CUtlMemory<CFlexController, int>::Purge(); // 1799
	CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::Purge(); // 560
	ValidateAlignment<CFlexController>(void); // 508
	CUtlMemory<CFlexController, int>::Purge(); // 510
	CUtlMemory<CFlexController, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CFlexController, CUtlMemory<CFlexController, int> >::~CUtlVector(); // 165
	{
		int i; // 1721
		CUtlMemory<CFlexDesc, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 73
		CFlexDesc::~CFlexDesc(); // 1526
		Destruct<CFlexDesc>(CFlexDesc* pMemory); // 1723
	}
	CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::RemoveAll(); // 1798
	CUtlMemory<CFlexDesc, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CFlexDesc, int>::Purge(); // 903
	CUtlMemory<CFlexDesc, int>::Purge(); // 1799
	CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::Purge(); // 560
	ValidateAlignment<CFlexDesc>(void); // 508
	CUtlMemory<CFlexDesc, int>::Purge(); // 510
	CUtlMemory<CFlexDesc, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CFlexDesc, CUtlMemory<CFlexDesc, int> >::~CUtlVector(); // 165
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 165
	{
		int i; // 1721
		CUtlMemory<CMorphData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CMorphData, CUtlMemory<CMorphData, int> >::Element(
			int i);  // 1723
		Destruct<CMorphData>(CMorphData* pMemory); // 1723
	}
	CUtlVectorBase<CMorphData, CUtlMemory<CMorphData, int> >::RemoveAll(); // 1798
	CUtlMemory<CMorphData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CMorphData, int>::Purge(); // 903
	CUtlMemory<CMorphData, int>::Purge(); // 1799
	CUtlVectorBase<CMorphData, CUtlMemory<CMorphData, int> >::Purge(); // 560
	ValidateAlignment<CMorphData>(void); // 508
	CUtlMemory<CMorphData, int>::Purge(); // 510
	CUtlMemory<CMorphData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CMorphData, CUtlMemory<CMorphData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CMorphData, CUtlMemory<CMorphData, int> >::~CUtlVector(); // 165
	CUtlVectorBase<MorphBundleType_t, CUtlMemory<MorphBundleType_t, int> >::RemoveAll(); // 1798
	CUtlMemory<MorphBundleType_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<MorphBundleType_t, int>::Purge(); // 903
	CUtlMemory<MorphBundleType_t, int>::Purge(); // 1799
	CUtlVectorBase<MorphBundleType_t, CUtlMemory<MorphBundleType_t, int> >::Purge(); // 560
	CUtlVectorBase<MorphBundleType_t, CUtlMemory<MorphBundleType_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<MorphBundleType_t, CUtlMemory<MorphBundleType_t, int> >::~CUtlVector(); // 165
} /* size: 553, inline expansions: 48 (2084 bytes) */

// <052ED262> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:165
void CMorphSetData::~CMorphSetData()
{
} /* size: 36 */

// <052ED246> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:165
inline void CMorphSetData::~CMorphSetData()
{
} /* size: 0 */

// <00160291> ../public/meshsystem/morphsetdata.h:165
// variables: 4
// function calls: 87
void CMorphSetData::~CMorphSetData()
{
	{
		int i; // 1721
		CUtlMemory<CFlexRule, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CFlexRule, CUtlMemory<CFlexRule, int> >::Element(
			int i);  // 1723
		CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >::RemoveAll(); // 1798
		CUtlMemory<CFlexOp, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CFlexOp, int>::Purge(); // 903
		CUtlMemory<CFlexOp, int>::Purge(); // 1799
		CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >::Purge(); // 560
		ValidateAlignment<CFlexOp>(void); // 508
		CUtlMemory<CFlexOp, int>::Purge(); // 510
		CUtlMemory<CFlexOp, int>::~CUtlMemory(); // 562
		CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CFlexOp, CUtlMemory<CFlexOp, int> >::~CUtlVector(); // 62
		CFlexRule::~CFlexRule(); // 1526
		Destruct<CFlexRule>(CFlexRule* pMemory); // 1723
	}
	CUtlVectorBase<CFlexRule, CUtlMemory<CFlexRule, int> >::RemoveAll(); // 1798
	CUtlMemory<CFlexRule, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CFlexRule, int>::Purge(); // 903
	CUtlMemory<CFlexRule, int>::Purge(); // 1799
	CUtlVectorBase<CFlexRule, CUtlMemory<CFlexRule, int> >::Purge(); // 560
	ValidateAlignment<CFlexRule>(void); // 508
	CUtlMemory<CFlexRule, int>::Purge(); // 510
	CUtlMemory<CFlexRule, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CFlexRule, CUtlMemory<CFlexRule, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CFlexRule, CUtlMemory<CFlexRule, int> >::~CUtlVector(); // 165
	{
		int i; // 1721
		CUtlMemory<CFlexController, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 82
		CUtlString::~CUtlString(); // 82
		CFlexController::~CFlexController(); // 1526
		Destruct<CFlexController>(CFlexController* pMemory); // 1723
	}
	CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::RemoveAll(); // 1798
	CUtlMemory<CFlexController, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CFlexController, int>::Purge(); // 903
	CUtlMemory<CFlexController, int>::Purge(); // 1799
	CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::Purge(); // 560
	ValidateAlignment<CFlexController>(void); // 508
	CUtlMemory<CFlexController, int>::Purge(); // 510
	CUtlMemory<CFlexController, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CFlexController, CUtlMemory<CFlexController, int> >::~CUtlVector(); // 165
	{
		int i; // 1721
		CUtlMemory<CFlexDesc, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 73
		CFlexDesc::~CFlexDesc(); // 1526
		Destruct<CFlexDesc>(CFlexDesc* pMemory); // 1723
	}
	CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::RemoveAll(); // 1798
	CUtlMemory<CFlexDesc, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CFlexDesc, int>::Purge(); // 903
	CUtlMemory<CFlexDesc, int>::Purge(); // 1799
	CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::Purge(); // 560
	ValidateAlignment<CFlexDesc>(void); // 508
	CUtlMemory<CFlexDesc, int>::Purge(); // 510
	CUtlMemory<CFlexDesc, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CFlexDesc, CUtlMemory<CFlexDesc, int> >::~CUtlVector(); // 165
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 165
	{
		int i; // 1721
		CUtlMemory<CMorphData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CMorphData, CUtlMemory<CMorphData, int> >::Element(
			int i);  // 1723
		CUtlMemory<CMorphRectData, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CMorphRectData, int>::Purge(); // 903
		CUtlMemory<CMorphRectData, int>::Purge(); // 1799
		CUtlVectorBase<CMorphRectData, CUtlMemory<CMorphRectData, int> >::Purge(); // 560
		ValidateAlignment<CMorphRectData>(void); // 508
		CUtlMemory<CMorphRectData, int>::Purge(); // 510
		CUtlMemory<CMorphRectData, int>::~CUtlMemory(); // 562
		CUtlVectorBase<CMorphRectData, CUtlMemory<CMorphRectData, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CMorphRectData, CUtlMemory<CMorphRectData, int> >::~CUtlVector(); // 138
		CUtlString::~CUtlString(); // 138
		CMorphData::~CMorphData(); // 1526
		Destruct<CMorphData>(CMorphData* pMemory); // 1723
	}
	CUtlVectorBase<CMorphData, CUtlMemory<CMorphData, int> >::RemoveAll(); // 1798
	CUtlMemory<CMorphData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CMorphData, int>::Purge(); // 903
	CUtlMemory<CMorphData, int>::Purge(); // 1799
	CUtlVectorBase<CMorphData, CUtlMemory<CMorphData, int> >::Purge(); // 560
	ValidateAlignment<CMorphData>(void); // 508
	CUtlMemory<CMorphData, int>::Purge(); // 510
	CUtlMemory<CMorphData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CMorphData, CUtlMemory<CMorphData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CMorphData, CUtlMemory<CMorphData, int> >::~CUtlVector(); // 165
	CUtlVectorBase<MorphBundleType_t, CUtlMemory<MorphBundleType_t, int> >::RemoveAll(); // 1798
	CUtlMemory<MorphBundleType_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<MorphBundleType_t, int>::Purge(); // 903
	CUtlMemory<MorphBundleType_t, int>::Purge(); // 1799
	CUtlVectorBase<MorphBundleType_t, CUtlMemory<MorphBundleType_t, int> >::Purge(); // 560
	CUtlVectorBase<MorphBundleType_t, CUtlMemory<MorphBundleType_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<MorphBundleType_t, CUtlMemory<MorphBundleType_t, int> >::~CUtlVector(); // 165
} /* size: 601, inline expansions: 48 (2278 bytes) */

// <052B963A> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:165
// member functions: 17
// member variables: 11
// static member variable: 1
// vtable entry: 1
// struct size: 200
struct CMorphSetData : public CRefCounted<CRefCountServiceBase<true, CRefMT> > {
public:
	/* class CRefCounted<CRefCountServiceBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CMorphSetData(CMorphSetData* , CMorphSetData& );
	void CMorphSetData(CMorphSetData* , const CMorphSetData& );
	void CMorphSetData(CMorphSetData* );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:167 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:167 */
	CMorphSetData* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/morphsetdata_h_schema.gen_cpp:876 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/morphsetdata_h_schema.gen_cpp:904 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/morphsetdata_h_schema.gen_cpp:824 */
	void Schema_CompileTimeVerificationFunction(CMorphSetData* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:167 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:167 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:167 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CMorphSetData* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:168 */
	CMorphSetData* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/morphsetdata_h_schema.gen_cpp:912 */
	void KV3TransferSave(const CMorphSetData* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/morphsetdata_h_schema.gen_cpp:931 */
	void KV3TransferLoad(CMorphSetData* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/morphsetdata_h_schema.gen_cpp:917 */
	void KV3TransferSave_CMorphSetData(const CMorphSetData* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/morphsetdata_h_schema.gen_cpp:936 */
	void KV3TransferLoad_CMorphSetData(CMorphSetData* , CKV3TransferLoadContext* );
	int m_nWidth; /* 12 4 */
	int m_nHeight; /* 16 4 */
	MorphLookupType_t m_nLookupType; /* 20 4 */
	MorphEncodingType_t m_nEncodingType; /* 24 4 */
	CUtlVector<MorphBundleType_t, CUtlMemory<MorphBundleType_t, int> > m_bundleTypes; /* 32 32 */
	CUtlVector<CMorphData, CUtlMemory<CMorphData, int> > m_morphDatas; /* 64 32 */
	HRenderTextureStrong m_pTextureAtlas; /* 96 8 */
	CUtlVector<CFlexDesc, CUtlMemory<CFlexDesc, int> > m_FlexDesc; /* 104 32 */
	CUtlVector<CFlexController, CUtlMemory<CFlexController, int> > m_FlexControllers; /* 136 32 */
	CUtlVector<CFlexRule, CUtlMemory<CFlexRule, int> > m_FlexRules; /* 168 32 */
	virtual void ~CMorphSetData(CMorphSetData* );
};

// <000B7BAC> ../public/meshsystem/morphsetdata.h:165
// member functions: 17
// member variables: 11
// static member variable: 1
// vtable entry: 1
// struct size: 200
struct CMorphSetData : public CRefCounted<CRefCountServiceBase<true, CRefMT> > {
public:
	/* class CRefCounted<CRefCountServiceBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CMorphSetData(CMorphSetData* , CMorphSetData& );
	void CMorphSetData(CMorphSetData* , const CMorphSetData& );
	void CMorphSetData(CMorphSetData* );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/meshsystem/morphsetdata.h:167 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/meshsystem/morphsetdata.h:167 */
	CMorphSetData* Schema_MarkHelperFn(void);
	/* ../public/meshsystem/morphsetdata.h:167 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/meshsystem/morphsetdata.h:167 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/meshsystem/morphsetdata.h:167 */
	void Schema_CompileTimeVerificationFunction(CMorphSetData* );
	/* ../public/meshsystem/morphsetdata.h:167 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/meshsystem/morphsetdata.h:167 */
	const char* Schema_StaticClassname(void);
	/* ../public/meshsystem/morphsetdata.h:167 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CMorphSetData* );
	/* ../public/meshsystem/morphsetdata.h:168 */
	CMorphSetData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/meshsystem/morphsetdata.h:168 */
	void KV3TransferSave(const CMorphSetData* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:168 */
	void KV3TransferLoad(CMorphSetData* , CKV3TransferLoadContext* );
	/* ../public/meshsystem/morphsetdata.h:168 */
	void KV3TransferSave_CMorphSetData(const CMorphSetData* , CKV3TransferSaveContext* );
	/* ../public/meshsystem/morphsetdata.h:168 */
	void KV3TransferLoad_CMorphSetData(CMorphSetData* , CKV3TransferLoadContext* );
	int m_nWidth; /* 12 4 */
	int m_nHeight; /* 16 4 */
	MorphLookupType_t m_nLookupType; /* 20 4 */
	MorphEncodingType_t m_nEncodingType; /* 24 4 */
	CUtlVector<MorphBundleType_t, CUtlMemory<MorphBundleType_t, int> > m_bundleTypes; /* 32 32 */
	CUtlVector<CMorphData, CUtlMemory<CMorphData, int> > m_morphDatas; /* 64 32 */
	HRenderTextureStrong m_pTextureAtlas; /* 96 8 */
	CUtlVector<CFlexDesc, CUtlMemory<CFlexDesc, int> > m_FlexDesc; /* 104 32 */
	CUtlVector<CFlexController, CUtlMemory<CFlexController, int> > m_FlexControllers; /* 136 32 */
	CUtlVector<CFlexRule, CUtlMemory<CFlexRule, int> > m_FlexRules; /* 168 32 */
	virtual void ~CMorphSetData(CMorphSetData* );
};

// <05301C21> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:167
// function calls: 3
void CMorphSetData::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 904
	Schema_VerifyBindingIsRegistered(void); // 167
	GetPrimaryBinding(void); // 167
} /* size: 75, inline expansions: 3 (78 bytes) */

// <05300BC8> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/meshsystem/morphsetdata.h:167
inline void CMorphSetData::Schema_DynamicBinding()
{
} /* size: 0 */

// <00187AC8> ../public/meshsystem/morphsetdata.h:167
// function call: 1
void CMorphSetData::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 167
} /* size: 29, inline expansions: 1 (15 bytes) */

// <0043D690> ../public/meshsystem/morphsetdata.h:168
inline void KV3TransferAllocateClassInstance(const char* pDerivedClassName)
{
} /* size: 0 */

