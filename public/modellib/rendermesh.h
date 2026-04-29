
//
// public/modellib/rendermesh.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 105
//	classes: 35
//	structs: 27
//

// <0008156C> ../public/modellib/rendermesh.h:55
inline RenderMeshDrawPrimitiveFlags_t operator|(RenderMeshDrawPrimitiveFlags_t a, RenderMeshDrawPrimitiveFlags_t b)
{
} /* size: 0 */

// <04CA9A55> ../public/modellib/rendermesh.h:60
RenderMeshDrawPrimitiveFlags_t ConvertV1MeshFlags(const KeyValues3 *)
{
} /* size: 0 */

// <0524A6F5> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:63
void CRenderBufferBinding::CRenderBufferBinding()
{
} /* size: 0 */

// <0524A6D9> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:63
inline void CRenderBufferBinding::CRenderBufferBinding()
{
} /* size: 0 */

// <000BAD21> ../public/modellib/rendermesh.h:63
// member functions: 13
// member variables: 2
// static member variable: 1
// struct size: 16
struct CRenderBufferBinding {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/rendermesh.h:65 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/rendermesh.h:65 */
	CRenderBufferBinding* Schema_MarkHelperFn(void);
	/* ../public/modellib/rendermesh.h:65 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/rendermesh.h:65 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/rendermesh.h:65 */
	void Schema_CompileTimeVerificationFunction(CRenderBufferBinding* );
	/* ../public/modellib/rendermesh.h:65 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/rendermesh.h:65 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/rendermesh.h:65 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CRenderBufferBinding* );
	/* ../public/modellib/rendermesh.h:66 */
	CRenderBufferBinding* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/rendermesh.h:66 */
	void KV3TransferSave(const CRenderBufferBinding* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:66 */
	void KV3TransferLoad(CRenderBufferBinding* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:66 */
	void KV3TransferSave_CRenderBufferBinding(const CRenderBufferBinding* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:66 */
	void KV3TransferLoad_CRenderBufferBinding(CRenderBufferBinding* , CKV3TransferLoadContext* );
	uint64 m_hBuffer; /* 0 8 */
	uint32 m_nBindOffsetBytes; /* 8 4 */
};

// <0106C618> ../public/modellib/rendermesh.h:63
// member functions: 14
// member variables: 2
// static member variable: 1
// struct size: 16
struct CRenderBufferBinding {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/rendermesh.h:65 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/rendermesh.h:65 */
	CRenderBufferBinding* Schema_MarkHelperFn(void);
	/* ../public/modellib/rendermesh.h:65 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/rendermesh.h:65 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/rendermesh.h:65 */
	void Schema_CompileTimeVerificationFunction(CRenderBufferBinding* );
	/* ../public/modellib/rendermesh.h:65 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/rendermesh.h:65 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/rendermesh.h:65 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CRenderBufferBinding* );
	/* ../public/modellib/rendermesh.h:66 */
	CRenderBufferBinding* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/rendermesh.h:66 */
	void KV3TransferSave(const CRenderBufferBinding* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:66 */
	void KV3TransferLoad(CRenderBufferBinding* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:66 */
	void KV3TransferSave_CRenderBufferBinding(const CRenderBufferBinding* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:66 */
	void KV3TransferLoad_CRenderBufferBinding(CRenderBufferBinding* , CKV3TransferLoadContext* );
	uint64 m_hBuffer; /* 0 8 */
	uint32 m_nBindOffsetBytes; /* 8 4 */
	void CRenderBufferBinding(CRenderBufferBinding* );
};

// <041F0BCF> ../public/modellib/rendermesh.h:63
// member functions: 14
// member variables: 2
// static member variable: 1
// struct size: 16
struct CRenderBufferBinding {
	/* ../public/modellib/rendermesh.h:66 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/rendermesh.h:65 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/rendermesh.h:65 */
	CRenderBufferBinding* Schema_MarkHelperFn(void);
	/* ../public/modellib/rendermesh.h:65 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/rendermesh.h:65 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/rendermesh.h:65 */
	void Schema_CompileTimeVerificationFunction(CRenderBufferBinding* );
	/* ../public/modellib/rendermesh.h:65 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/rendermesh.h:65 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/rendermesh.h:65 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CRenderBufferBinding* );
	/* ../public/modellib/rendermesh.h:66 */
	CRenderBufferBinding* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/rendermesh.h:66 */
	void KV3TransferSave(const CRenderBufferBinding* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:66 */
	void KV3TransferLoad(CRenderBufferBinding* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:66 */
	void KV3TransferSave_CRenderBufferBinding(const CRenderBufferBinding* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:66 */
	void KV3TransferLoad_CRenderBufferBinding(CRenderBufferBinding* , CKV3TransferLoadContext* );
	uint64 m_hBuffer; /* 0 8 */
	uint32 m_nBindOffsetBytes; /* 8 4 */
	void CRenderBufferBinding(CRenderBufferBinding* );
};

// <051E96A4> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:63
// member functions: 14
// member variables: 2
// static member variable: 1
// struct size: 16
struct CRenderBufferBinding {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:66 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:65 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:65 */
	CRenderBufferBinding* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:65 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:65 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:65 */
	void Schema_CompileTimeVerificationFunction(CRenderBufferBinding* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:65 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:65 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:65 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CRenderBufferBinding* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:66 */
	CRenderBufferBinding* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:66 */
	void KV3TransferSave(const CRenderBufferBinding* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:66 */
	void KV3TransferLoad(CRenderBufferBinding* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:66 */
	void KV3TransferSave_CRenderBufferBinding(const CRenderBufferBinding* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:66 */
	void KV3TransferLoad_CRenderBufferBinding(CRenderBufferBinding* , CKV3TransferLoadContext* );
	uint64 m_hBuffer; /* 0 8 */
	uint32 m_nBindOffsetBytes; /* 8 4 */
	void CRenderBufferBinding(CRenderBufferBinding* );
};

// <058B92AF> ../../public/modellib/rendermesh.h:63
// member functions: 13
// member variables: 2
// static member variable: 1
// struct size: 16
struct CRenderBufferBinding {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../../public/modellib/rendermesh.h:65 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../../public/modellib/rendermesh.h:65 */
	CRenderBufferBinding* Schema_MarkHelperFn(void);
	/* ../../public/modellib/rendermesh.h:65 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../../public/modellib/rendermesh.h:65 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../../public/modellib/rendermesh.h:65 */
	void Schema_CompileTimeVerificationFunction(CRenderBufferBinding* );
	/* ../../public/modellib/rendermesh.h:65 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../../public/modellib/rendermesh.h:65 */
	const char* Schema_StaticClassname(void);
	/* ../../public/modellib/rendermesh.h:65 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CRenderBufferBinding* );
	/* ../../public/modellib/rendermesh.h:66 */
	CRenderBufferBinding* KV3TransferAllocateClassInstance(const char* );
	/* ../../public/modellib/rendermesh.h:66 */
	void KV3TransferSave(const CRenderBufferBinding* , CKV3TransferSaveContext* );
	/* ../../public/modellib/rendermesh.h:66 */
	void KV3TransferLoad(CRenderBufferBinding* , CKV3TransferLoadContext* );
	/* ../../public/modellib/rendermesh.h:66 */
	void KV3TransferSave_CRenderBufferBinding(const CRenderBufferBinding* , CKV3TransferSaveContext* );
	/* ../../public/modellib/rendermesh.h:66 */
	void KV3TransferLoad_CRenderBufferBinding(CRenderBufferBinding* , CKV3TransferLoadContext* );
	uint64 m_hBuffer; /* 0 8 */
	uint32 m_nBindOffsetBytes; /* 8 4 */
};

// <0524AA70> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:65
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0524AA6A> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:65
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <0524AA51> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:65
inline void CRenderBufferBinding::Schema_DynamicBinding()
{
} /* size: 0 */

// <05248EA0> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:89
inline void SkeletonBoneBounds_t::operator=(const SkeletonBoneBounds_t &)
{
} /* size: 0 */

// <05248E89> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:89
void SkeletonBoneBounds_t::SkeletonBoneBounds_t()
{
} /* size: 0 */

// <05248E6D> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:89
inline void SkeletonBoneBounds_t::SkeletonBoneBounds_t()
{
} /* size: 0 */

// <000BAEE7> ../public/modellib/rendermesh.h:89
// member functions: 13
// member variables: 2
// static member variable: 1
// struct size: 24
struct SkeletonBoneBounds_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/rendermesh.h:91 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/rendermesh.h:91 */
	SkeletonBoneBounds_t* Schema_MarkHelperFn(void);
	/* ../public/modellib/rendermesh.h:91 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/rendermesh.h:91 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/rendermesh.h:91 */
	void Schema_CompileTimeVerificationFunction(SkeletonBoneBounds_t* );
	/* ../public/modellib/rendermesh.h:91 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/rendermesh.h:91 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/rendermesh.h:91 */
	const CSchemaClassInfo* Schema_DynamicBinding(const SkeletonBoneBounds_t* );
	/* ../public/modellib/rendermesh.h:92 */
	SkeletonBoneBounds_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/rendermesh.h:92 */
	void KV3TransferSave(const SkeletonBoneBounds_t* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:92 */
	void KV3TransferLoad(SkeletonBoneBounds_t* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:92 */
	void KV3TransferSave_SkeletonBoneBounds_t(const SkeletonBoneBounds_t* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:92 */
	void KV3TransferLoad_SkeletonBoneBounds_t(SkeletonBoneBounds_t* , CKV3TransferLoadContext* );
	Vector m_vecCenter; /* 0 12 */
	Vector m_vecSize; /* 12 12 */
};

// <017D266A> ../public/modellib/rendermesh.h:89
// member functions: 14
// member variables: 2
// static member variable: 1
// struct size: 24
struct SkeletonBoneBounds_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/rendermesh.h:91 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/rendermesh.h:91 */
	SkeletonBoneBounds_t* Schema_MarkHelperFn(void);
	/* ../public/modellib/rendermesh.h:91 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/rendermesh.h:91 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/rendermesh.h:91 */
	void Schema_CompileTimeVerificationFunction(SkeletonBoneBounds_t* );
	/* ../public/modellib/rendermesh.h:91 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/rendermesh.h:91 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/rendermesh.h:91 */
	const CSchemaClassInfo* Schema_DynamicBinding(const SkeletonBoneBounds_t* );
	/* ../public/modellib/rendermesh.h:92 */
	SkeletonBoneBounds_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/rendermesh.h:92 */
	void KV3TransferSave(const SkeletonBoneBounds_t* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:92 */
	void KV3TransferLoad(SkeletonBoneBounds_t* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:92 */
	void KV3TransferSave_SkeletonBoneBounds_t(const SkeletonBoneBounds_t* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:92 */
	void KV3TransferLoad_SkeletonBoneBounds_t(SkeletonBoneBounds_t* , CKV3TransferLoadContext* );
	Vector m_vecCenter; /* 0 12 */
	Vector m_vecSize; /* 12 12 */
	void SkeletonBoneBounds_t(SkeletonBoneBounds_t* );
};

// <04C6962E> ../public/modellib/rendermesh.h:89
// member functions: 15
// member variables: 2
// static member variable: 1
// struct size: 24
struct SkeletonBoneBounds_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/rendermesh.h:91 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/rendermesh.h:91 */
	SkeletonBoneBounds_t* Schema_MarkHelperFn(void);
	/* ../public/modellib/rendermesh.h:91 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/rendermesh.h:91 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/rendermesh.h:91 */
	void Schema_CompileTimeVerificationFunction(SkeletonBoneBounds_t* );
	/* ../public/modellib/rendermesh.h:91 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/rendermesh.h:91 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/rendermesh.h:91 */
	const CSchemaClassInfo* Schema_DynamicBinding(const SkeletonBoneBounds_t* );
	/* ../public/modellib/rendermesh.h:92 */
	SkeletonBoneBounds_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/rendermesh.h:92 */
	void KV3TransferSave(const SkeletonBoneBounds_t* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:92 */
	void KV3TransferLoad(SkeletonBoneBounds_t* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:92 */
	void KV3TransferSave_SkeletonBoneBounds_t(const SkeletonBoneBounds_t* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:92 */
	void KV3TransferLoad_SkeletonBoneBounds_t(SkeletonBoneBounds_t* , CKV3TransferLoadContext* );
	Vector m_vecCenter; /* 0 12 */
	Vector m_vecSize; /* 12 12 */
	void SkeletonBoneBounds_t(SkeletonBoneBounds_t* );
	SkeletonBoneBounds_t& operator=(SkeletonBoneBounds_t* , const SkeletonBoneBounds_t& );
};

// <051E9887> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:89
// member functions: 15
// member variables: 2
// static member variable: 1
// struct size: 24
struct SkeletonBoneBounds_t {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:92 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:91 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:91 */
	SkeletonBoneBounds_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:91 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:91 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:91 */
	void Schema_CompileTimeVerificationFunction(SkeletonBoneBounds_t* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:91 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:91 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:91 */
	const CSchemaClassInfo* Schema_DynamicBinding(const SkeletonBoneBounds_t* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:92 */
	SkeletonBoneBounds_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:92 */
	void KV3TransferSave(const SkeletonBoneBounds_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:92 */
	void KV3TransferLoad(SkeletonBoneBounds_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:92 */
	void KV3TransferSave_SkeletonBoneBounds_t(const SkeletonBoneBounds_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:92 */
	void KV3TransferLoad_SkeletonBoneBounds_t(SkeletonBoneBounds_t* , CKV3TransferLoadContext* );
	Vector m_vecCenter; /* 0 12 */
	Vector m_vecSize; /* 12 12 */
	void SkeletonBoneBounds_t(SkeletonBoneBounds_t* );
	SkeletonBoneBounds_t& operator=(SkeletonBoneBounds_t* , const SkeletonBoneBounds_t& );
};

// <058B9472> ../../public/modellib/rendermesh.h:89
// member functions: 13
// member variables: 2
// static member variable: 1
// struct size: 24
struct SkeletonBoneBounds_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../../public/modellib/rendermesh.h:91 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../../public/modellib/rendermesh.h:91 */
	SkeletonBoneBounds_t* Schema_MarkHelperFn(void);
	/* ../../public/modellib/rendermesh.h:91 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../../public/modellib/rendermesh.h:91 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../../public/modellib/rendermesh.h:91 */
	void Schema_CompileTimeVerificationFunction(SkeletonBoneBounds_t* );
	/* ../../public/modellib/rendermesh.h:91 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../../public/modellib/rendermesh.h:91 */
	const char* Schema_StaticClassname(void);
	/* ../../public/modellib/rendermesh.h:91 */
	const CSchemaClassInfo* Schema_DynamicBinding(const SkeletonBoneBounds_t* );
	/* ../../public/modellib/rendermesh.h:92 */
	SkeletonBoneBounds_t* KV3TransferAllocateClassInstance(const char* );
	/* ../../public/modellib/rendermesh.h:92 */
	void KV3TransferSave(const SkeletonBoneBounds_t* , CKV3TransferSaveContext* );
	/* ../../public/modellib/rendermesh.h:92 */
	void KV3TransferLoad(SkeletonBoneBounds_t* , CKV3TransferLoadContext* );
	/* ../../public/modellib/rendermesh.h:92 */
	void KV3TransferSave_SkeletonBoneBounds_t(const SkeletonBoneBounds_t* , CKV3TransferSaveContext* );
	/* ../../public/modellib/rendermesh.h:92 */
	void KV3TransferLoad_SkeletonBoneBounds_t(SkeletonBoneBounds_t* , CKV3TransferLoadContext* );
	Vector m_vecCenter; /* 0 12 */
	Vector m_vecSize; /* 12 12 */
};

// <0524AA2C> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:91
inline void SkeletonBoneBounds_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <052483DE> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:98
inline void RenderSkeletonBone_t::operator=(const RenderSkeletonBone_t &)
{
} /* size: 0 */

// <052483C7> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:98
void RenderSkeletonBone_t::RenderSkeletonBone_t()
{
} /* size: 0 */

// <052483AB> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:98
inline void RenderSkeletonBone_t::RenderSkeletonBone_t()
{
} /* size: 0 */

// <05248394> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:98
void RenderSkeletonBone_t::~RenderSkeletonBone_t()
{
} /* size: 0 */

// <05248378> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:98
inline void RenderSkeletonBone_t::~RenderSkeletonBone_t()
{
} /* size: 0 */

// <04CBA4EC> ../public/modellib/rendermesh.h:98
void RenderSkeletonBone_t::RenderSkeletonBone_t(const RenderSkeletonBone_t &)
{
} /* size: 0 */

// <04CBA4CB> ../public/modellib/rendermesh.h:98
inline void RenderSkeletonBone_t::RenderSkeletonBone_t(const RenderSkeletonBone_t &)
{
} /* size: 0 */

// <000BB095> ../public/modellib/rendermesh.h:98
// member functions: 13
// member variables: 5
// static member variable: 1
// struct size: 96
struct RenderSkeletonBone_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/rendermesh.h:100 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/rendermesh.h:100 */
	RenderSkeletonBone_t* Schema_MarkHelperFn(void);
	/* ../public/modellib/rendermesh.h:100 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/rendermesh.h:100 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/rendermesh.h:100 */
	void Schema_CompileTimeVerificationFunction(RenderSkeletonBone_t* );
	/* ../public/modellib/rendermesh.h:100 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/rendermesh.h:100 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/rendermesh.h:100 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RenderSkeletonBone_t* );
	/* ../public/modellib/rendermesh.h:101 */
	RenderSkeletonBone_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/rendermesh.h:101 */
	void KV3TransferSave(const RenderSkeletonBone_t* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:101 */
	void KV3TransferLoad(RenderSkeletonBone_t* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:101 */
	void KV3TransferSave_RenderSkeletonBone_t(const RenderSkeletonBone_t* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:101 */
	void KV3TransferLoad_RenderSkeletonBone_t(RenderSkeletonBone_t* , CKV3TransferLoadContext* );
	CUtlString m_boneName; /* 0 8 */
	CUtlString m_parentName; /* 8 8 */
	matrix3x4_t m_invBindPose; /* 16 48 */
	SkeletonBoneBounds_t m_bbox; /* 64 24 */
	float m_flSphereRadius; /* 88 4 */
};

// <017D2831> ../public/modellib/rendermesh.h:98
// member functions: 15
// member variables: 5
// static member variable: 1
// struct size: 96
struct RenderSkeletonBone_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/rendermesh.h:100 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/rendermesh.h:100 */
	RenderSkeletonBone_t* Schema_MarkHelperFn(void);
	/* ../public/modellib/rendermesh.h:100 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/rendermesh.h:100 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/rendermesh.h:100 */
	void Schema_CompileTimeVerificationFunction(RenderSkeletonBone_t* );
	/* ../public/modellib/rendermesh.h:100 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/rendermesh.h:100 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/rendermesh.h:100 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RenderSkeletonBone_t* );
	/* ../public/modellib/rendermesh.h:101 */
	RenderSkeletonBone_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/rendermesh.h:101 */
	void KV3TransferSave(const RenderSkeletonBone_t* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:101 */
	void KV3TransferLoad(RenderSkeletonBone_t* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:101 */
	void KV3TransferSave_RenderSkeletonBone_t(const RenderSkeletonBone_t* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:101 */
	void KV3TransferLoad_RenderSkeletonBone_t(RenderSkeletonBone_t* , CKV3TransferLoadContext* );
	CUtlString m_boneName; /* 0 8 */
	CUtlString m_parentName; /* 8 8 */
	matrix3x4_t m_invBindPose; /* 16 48 */
	SkeletonBoneBounds_t m_bbox; /* 64 24 */
	float m_flSphereRadius; /* 88 4 */
	void ~RenderSkeletonBone_t(RenderSkeletonBone_t* );
	void RenderSkeletonBone_t(RenderSkeletonBone_t* );
};

// <04C6981A> ../public/modellib/rendermesh.h:98
// member functions: 17
// member variables: 5
// static member variable: 1
// struct size: 96
struct RenderSkeletonBone_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/rendermesh.h:100 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/rendermesh.h:100 */
	RenderSkeletonBone_t* Schema_MarkHelperFn(void);
	/* ../public/modellib/rendermesh.h:100 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/rendermesh.h:100 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/rendermesh.h:100 */
	void Schema_CompileTimeVerificationFunction(RenderSkeletonBone_t* );
	/* ../public/modellib/rendermesh.h:100 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/rendermesh.h:100 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/rendermesh.h:100 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RenderSkeletonBone_t* );
	/* ../public/modellib/rendermesh.h:101 */
	RenderSkeletonBone_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/rendermesh.h:101 */
	void KV3TransferSave(const RenderSkeletonBone_t* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:101 */
	void KV3TransferLoad(RenderSkeletonBone_t* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:101 */
	void KV3TransferSave_RenderSkeletonBone_t(const RenderSkeletonBone_t* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:101 */
	void KV3TransferLoad_RenderSkeletonBone_t(RenderSkeletonBone_t* , CKV3TransferLoadContext* );
	CUtlString m_boneName; /* 0 8 */
	CUtlString m_parentName; /* 8 8 */
	matrix3x4_t m_invBindPose; /* 16 48 */
	SkeletonBoneBounds_t m_bbox; /* 64 24 */
	float m_flSphereRadius; /* 88 4 */
	void RenderSkeletonBone_t(RenderSkeletonBone_t* );
	void ~RenderSkeletonBone_t(RenderSkeletonBone_t* );
	void RenderSkeletonBone_t(RenderSkeletonBone_t* , const RenderSkeletonBone_t& );
	RenderSkeletonBone_t& operator=(RenderSkeletonBone_t* , const RenderSkeletonBone_t& );
};

// <04F17E65> ../public/modellib/rendermesh.h:98
// member functions: 16
// member variables: 5
// static member variable: 1
// struct size: 96
struct RenderSkeletonBone_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/rendermesh.h:100 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/rendermesh.h:100 */
	RenderSkeletonBone_t* Schema_MarkHelperFn(void);
	/* ../public/modellib/rendermesh.h:100 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/rendermesh.h:100 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/rendermesh.h:100 */
	void Schema_CompileTimeVerificationFunction(RenderSkeletonBone_t* );
	/* ../public/modellib/rendermesh.h:100 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/rendermesh.h:100 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/rendermesh.h:100 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RenderSkeletonBone_t* );
	/* ../public/modellib/rendermesh.h:101 */
	RenderSkeletonBone_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/rendermesh.h:101 */
	void KV3TransferSave(const RenderSkeletonBone_t* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:101 */
	void KV3TransferLoad(RenderSkeletonBone_t* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:101 */
	void KV3TransferSave_RenderSkeletonBone_t(const RenderSkeletonBone_t* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:101 */
	void KV3TransferLoad_RenderSkeletonBone_t(RenderSkeletonBone_t* , CKV3TransferLoadContext* );
	CUtlString m_boneName; /* 0 8 */
	CUtlString m_parentName; /* 8 8 */
	matrix3x4_t m_invBindPose; /* 16 48 */
	SkeletonBoneBounds_t m_bbox; /* 64 24 */
	float m_flSphereRadius; /* 88 4 */
	RenderSkeletonBone_t& operator=(RenderSkeletonBone_t* , const RenderSkeletonBone_t& );
	void RenderSkeletonBone_t(RenderSkeletonBone_t* );
	void ~RenderSkeletonBone_t(RenderSkeletonBone_t* );
};

// <051E9A8E> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:98
// member functions: 16
// member variables: 5
// static member variable: 1
// struct size: 96
struct RenderSkeletonBone_t {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:101 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:100 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:100 */
	RenderSkeletonBone_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:100 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:100 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:100 */
	void Schema_CompileTimeVerificationFunction(RenderSkeletonBone_t* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:100 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:100 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:100 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RenderSkeletonBone_t* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:101 */
	RenderSkeletonBone_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:101 */
	void KV3TransferSave(const RenderSkeletonBone_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:101 */
	void KV3TransferLoad(RenderSkeletonBone_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:101 */
	void KV3TransferSave_RenderSkeletonBone_t(const RenderSkeletonBone_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:101 */
	void KV3TransferLoad_RenderSkeletonBone_t(RenderSkeletonBone_t* , CKV3TransferLoadContext* );
	CUtlString m_boneName; /* 0 8 */
	CUtlString m_parentName; /* 8 8 */
	matrix3x4_t m_invBindPose; /* 16 48 */
	SkeletonBoneBounds_t m_bbox; /* 64 24 */
	float m_flSphereRadius; /* 88 4 */
	void ~RenderSkeletonBone_t(RenderSkeletonBone_t* );
	void RenderSkeletonBone_t(RenderSkeletonBone_t* );
	RenderSkeletonBone_t& operator=(RenderSkeletonBone_t* , const RenderSkeletonBone_t& );
};

// <058B961D> ../../public/modellib/rendermesh.h:98
// member functions: 13
// member variables: 5
// static member variable: 1
// struct size: 96
struct RenderSkeletonBone_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../../public/modellib/rendermesh.h:100 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../../public/modellib/rendermesh.h:100 */
	RenderSkeletonBone_t* Schema_MarkHelperFn(void);
	/* ../../public/modellib/rendermesh.h:100 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../../public/modellib/rendermesh.h:100 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../../public/modellib/rendermesh.h:100 */
	void Schema_CompileTimeVerificationFunction(RenderSkeletonBone_t* );
	/* ../../public/modellib/rendermesh.h:100 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../../public/modellib/rendermesh.h:100 */
	const char* Schema_StaticClassname(void);
	/* ../../public/modellib/rendermesh.h:100 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RenderSkeletonBone_t* );
	/* ../../public/modellib/rendermesh.h:101 */
	RenderSkeletonBone_t* KV3TransferAllocateClassInstance(const char* );
	/* ../../public/modellib/rendermesh.h:101 */
	void KV3TransferSave(const RenderSkeletonBone_t* , CKV3TransferSaveContext* );
	/* ../../public/modellib/rendermesh.h:101 */
	void KV3TransferLoad(RenderSkeletonBone_t* , CKV3TransferLoadContext* );
	/* ../../public/modellib/rendermesh.h:101 */
	void KV3TransferSave_RenderSkeletonBone_t(const RenderSkeletonBone_t* , CKV3TransferSaveContext* );
	/* ../../public/modellib/rendermesh.h:101 */
	void KV3TransferLoad_RenderSkeletonBone_t(RenderSkeletonBone_t* , CKV3TransferLoadContext* );
	CUtlString m_boneName; /* 0 8 */
	CUtlString m_parentName; /* 8 8 */
	matrix3x4_t m_invBindPose; /* 16 48 */
	SkeletonBoneBounds_t m_bbox; /* 64 24 */
	float m_flSphereRadius; /* 88 4 */
};

// <0524AA07> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:100
inline void RenderSkeletonBone_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <0524A7B6> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:110
void CRenderSkeleton::~CRenderSkeleton()
{
} /* size: 0 */

// <0524A79A> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:110
inline void CRenderSkeleton::~CRenderSkeleton()
{
} /* size: 0 */

// <05244EB2> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:110
inline void CRenderSkeleton::operator=(const CRenderSkeleton &)
{
} /* size: 0 */

// <000BB270> ../public/modellib/rendermesh.h:110
// member functions: 52
// member variables: 4
// static member variable: 1
// class size: 104
class CRenderSkeleton {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/rendermesh.h:112 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/rendermesh.h:112 */
	CRenderSkeleton* Schema_MarkHelperFn(void);
	/* ../public/modellib/rendermesh.h:112 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/rendermesh.h:112 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/rendermesh.h:112 */
	void Schema_CompileTimeVerificationFunction(CRenderSkeleton* );
	/* ../public/modellib/rendermesh.h:112 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/rendermesh.h:112 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/rendermesh.h:112 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CRenderSkeleton* );
	/* ../public/modellib/rendermesh.h:113 */
	CRenderSkeleton* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/rendermesh.h:113 */
	void KV3TransferSave(const CRenderSkeleton* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:113 */
	void KV3TransferLoad(CRenderSkeleton* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:113 */
	void KV3TransferSave_CRenderSkeleton(const CRenderSkeleton* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:113 */
	void KV3TransferLoad_CRenderSkeleton(CRenderSkeleton* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:117 */
	void CRenderSkeleton(CRenderSkeleton* );
	/* ../public/modellib/rendermesh.h:119 */
	int AddBone(CRenderSkeleton* , RenderSkeletonBone_t& );
	/* ../public/modellib/rendermesh.h:120 */
	int GetBoneCount(const CRenderSkeleton* );
	/* ../public/modellib/rendermesh.h:121 */
	const RenderSkeletonBone_t* GetBone(const CRenderSkeleton* , int);
	/* ../public/modellib/rendermesh.h:122 */
	RenderSkeletonBone_t* GetBone(CRenderSkeleton* , int);
	/* ../public/modellib/rendermesh.h:123 */
	void SetBoneWeightCount(CRenderSkeleton* , int);
	/* ../public/modellib/rendermesh.h:124 */
	int GetBoneWeightCount(const CRenderSkeleton* );
	/* ../public/modellib/rendermesh.h:125 */
	int FindBoneIndex(const CRenderSkeleton* , uint32);
	/* ../public/modellib/rendermesh.h:126 */
	int FindBoneIndex(const CRenderSkeleton* , const char* );
	/* ../public/modellib/rendermesh.h:127 */
	int GetParent(const CRenderSkeleton* , int);
	/* ../public/modellib/rendermesh.h:128 */
	void RemoveBones(CRenderSkeleton* , const CUtlVector<int, CUtlMemory<int, int> >& , const CUtlVector<int, CUtlMemory<int, int> >& );
	/* ../public/modellib/rendermesh.h:131 */
	void TransferPostLoadFn(CRenderSkeleton* , CKV3TransferLoadContext* );
	CUtlVector<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> > m_bones; /* 0 32 */
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > m_boneHashes; /* 32 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_boneParents; /* 64 32 */
	int m_nBoneWeightCount; /* 96 4 */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN15CRenderSkeleton17GetPrimaryBindingEv */
	class CRenderSkeleton * Schema_MarkHelperFn(void); /* linkage=_ZN15CRenderSkeleton19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN15CRenderSkeleton15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <524d2ce> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:396 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN15CRenderSkeleton32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CRenderSkeleton *); /* linkage=_ZN15CRenderSkeleton38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN15CRenderSkeleton20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN15CRenderSkeleton22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CRenderSkeleton  *); /* linkage=_ZNK15CRenderSkeleton21Schema_DynamicBindingEv */
	class CRenderSkeleton * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN15CRenderSkeleton32KV3TransferAllocateClassInstanceEPKc */
	/* <524d8b7> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:404 */
	void KV3TransferSave(const class CRenderSkeleton  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CRenderSkeleton15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <524e25c> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:416 */
	void KV3TransferLoad(class CRenderSkeleton *, class CKV3TransferLoadContext *); /* linkage=_ZN15CRenderSkeleton15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CRenderSkeleton(const class CRenderSkeleton  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CRenderSkeleton31KV3TransferSave_CRenderSkeletonEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CRenderSkeleton(class CRenderSkeleton *, class CKV3TransferLoadContext *); /* linkage=_ZN15CRenderSkeleton31KV3TransferLoad_CRenderSkeletonEP23CKV3TransferLoadContext */
	void CRenderSkeleton(class CRenderSkeleton *); /* linkage=_ZN15CRenderSkeletonC4Ev */
	int AddBone(class CRenderSkeleton *, class RenderSkeletonBone_t &); /* linkage=_ZN15CRenderSkeleton7AddBoneER20RenderSkeletonBone_t */
	/* <4cdb2d8> modellib/rendermesh.cpp:117 */
	int GetBoneCount(const class CRenderSkeleton  *); /* linkage=_ZNK15CRenderSkeleton12GetBoneCountEv */
	/* <4cdb332> modellib/rendermesh.cpp:122 */
	const class RenderSkeletonBone_t  * GetBone(const class CRenderSkeleton  *, int); /* linkage=_ZNK15CRenderSkeleton7GetBoneEi */
	class RenderSkeletonBone_t * GetBone(class CRenderSkeleton *, int); /* linkage=_ZN15CRenderSkeleton7GetBoneEi */
	void SetBoneWeightCount(class CRenderSkeleton *, int); /* linkage=_ZN15CRenderSkeleton18SetBoneWeightCountEi */
	int GetBoneWeightCount(const class CRenderSkeleton  *); /* linkage=_ZNK15CRenderSkeleton18GetBoneWeightCountEv */
	/* <4cdb3de> modellib/rendermesh.cpp:137 */
	int FindBoneIndex(const class CRenderSkeleton  *, uint32); /* linkage=_ZNK15CRenderSkeleton13FindBoneIndexEj */
	/* <4cdb4d6> modellib/rendermesh.cpp:148 */
	int FindBoneIndex(const class CRenderSkeleton  *, const char  *); /* linkage=_ZNK15CRenderSkeleton13FindBoneIndexEPKc */
	int GetParent(const class CRenderSkeleton  *, int); /* linkage=_ZNK15CRenderSkeleton9GetParentEi */
	void RemoveBones(class CRenderSkeleton *, const class CUtlVector<int, CUtlMemory<int, int> >  &, const class CUtlVector<int, CUtlMemory<int, int> >  &); /* linkage=_ZN15CRenderSkeleton11RemoveBonesERK10CUtlVectorIi10CUtlMemoryIiiEES5_ */
	void TransferPostLoadFn(class CRenderSkeleton *, class CKV3TransferLoadContext *); /* linkage=_ZN15CRenderSkeleton18TransferPostLoadFnEP23CKV3TransferLoadContext */
	void ~CRenderSkeleton(class CRenderSkeleton *); /* linkage=_ZN15CRenderSkeletonD4Ev */
	class CRenderSkeleton & operator=(class CRenderSkeleton *, const class CRenderSkeleton  &); /* linkage=_ZN15CRenderSkeletonaSERKS_ */
};

// <04C69A6E> ../public/modellib/rendermesh.h:110
// member functions: 53
// member variables: 4
// static member variable: 1
// class size: 104
class CRenderSkeleton {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/rendermesh.h:112 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/rendermesh.h:112 */
	CRenderSkeleton* Schema_MarkHelperFn(void);
	/* ../public/modellib/rendermesh.h:112 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/rendermesh.h:112 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/rendermesh.h:112 */
	void Schema_CompileTimeVerificationFunction(CRenderSkeleton* );
	/* ../public/modellib/rendermesh.h:112 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/rendermesh.h:112 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/rendermesh.h:112 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CRenderSkeleton* );
	/* ../public/modellib/rendermesh.h:113 */
	CRenderSkeleton* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/rendermesh.h:113 */
	void KV3TransferSave(const CRenderSkeleton* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:113 */
	void KV3TransferLoad(CRenderSkeleton* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:113 */
	void KV3TransferSave_CRenderSkeleton(const CRenderSkeleton* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:113 */
	void KV3TransferLoad_CRenderSkeleton(CRenderSkeleton* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:117 */
	void CRenderSkeleton(CRenderSkeleton* );
	/* ../public/modellib/rendermesh.h:119 */
	int AddBone(CRenderSkeleton* , RenderSkeletonBone_t& );
	/* ../public/modellib/rendermesh.h:120 */
	int GetBoneCount(const CRenderSkeleton* );
	/* ../public/modellib/rendermesh.h:121 */
	const RenderSkeletonBone_t* GetBone(const CRenderSkeleton* , int);
	/* ../public/modellib/rendermesh.h:122 */
	RenderSkeletonBone_t* GetBone(CRenderSkeleton* , int);
	/* ../public/modellib/rendermesh.h:123 */
	void SetBoneWeightCount(CRenderSkeleton* , int);
	/* ../public/modellib/rendermesh.h:124 */
	int GetBoneWeightCount(const CRenderSkeleton* );
	/* ../public/modellib/rendermesh.h:125 */
	int FindBoneIndex(const CRenderSkeleton* , uint32);
	/* ../public/modellib/rendermesh.h:126 */
	int FindBoneIndex(const CRenderSkeleton* , const char* );
	/* ../public/modellib/rendermesh.h:127 */
	int GetParent(const CRenderSkeleton* , int);
	/* ../public/modellib/rendermesh.h:128 */
	void RemoveBones(CRenderSkeleton* , const CUtlVector<int, CUtlMemory<int, int> >& , const CUtlVector<int, CUtlMemory<int, int> >& );
	/* ../public/modellib/rendermesh.h:131 */
	void TransferPostLoadFn(CRenderSkeleton* , CKV3TransferLoadContext* );
	CUtlVector<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> > m_bones; /* 0 32 */
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > m_boneHashes; /* 32 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_boneParents; /* 64 32 */
	int m_nBoneWeightCount; /* 96 4 */
	void ~CRenderSkeleton(CRenderSkeleton* );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN15CRenderSkeleton17GetPrimaryBindingEv */
	class CRenderSkeleton * Schema_MarkHelperFn(void); /* linkage=_ZN15CRenderSkeleton19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN15CRenderSkeleton15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <524d2ce> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:396 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN15CRenderSkeleton32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CRenderSkeleton *); /* linkage=_ZN15CRenderSkeleton38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN15CRenderSkeleton20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN15CRenderSkeleton22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CRenderSkeleton  *); /* linkage=_ZNK15CRenderSkeleton21Schema_DynamicBindingEv */
	class CRenderSkeleton * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN15CRenderSkeleton32KV3TransferAllocateClassInstanceEPKc */
	/* <524d8b7> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:404 */
	void KV3TransferSave(const class CRenderSkeleton  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CRenderSkeleton15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <524e25c> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:416 */
	void KV3TransferLoad(class CRenderSkeleton *, class CKV3TransferLoadContext *); /* linkage=_ZN15CRenderSkeleton15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CRenderSkeleton(const class CRenderSkeleton  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CRenderSkeleton31KV3TransferSave_CRenderSkeletonEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CRenderSkeleton(class CRenderSkeleton *, class CKV3TransferLoadContext *); /* linkage=_ZN15CRenderSkeleton31KV3TransferLoad_CRenderSkeletonEP23CKV3TransferLoadContext */
	void CRenderSkeleton(class CRenderSkeleton *); /* linkage=_ZN15CRenderSkeletonC4Ev */
	int AddBone(class CRenderSkeleton *, class RenderSkeletonBone_t &); /* linkage=_ZN15CRenderSkeleton7AddBoneER20RenderSkeletonBone_t */
	/* <4cdb2d8> modellib/rendermesh.cpp:117 */
	int GetBoneCount(const class CRenderSkeleton  *); /* linkage=_ZNK15CRenderSkeleton12GetBoneCountEv */
	/* <4cdb332> modellib/rendermesh.cpp:122 */
	const class RenderSkeletonBone_t  * GetBone(const class CRenderSkeleton  *, int); /* linkage=_ZNK15CRenderSkeleton7GetBoneEi */
	class RenderSkeletonBone_t * GetBone(class CRenderSkeleton *, int); /* linkage=_ZN15CRenderSkeleton7GetBoneEi */
	void SetBoneWeightCount(class CRenderSkeleton *, int); /* linkage=_ZN15CRenderSkeleton18SetBoneWeightCountEi */
	int GetBoneWeightCount(const class CRenderSkeleton  *); /* linkage=_ZNK15CRenderSkeleton18GetBoneWeightCountEv */
	/* <4cdb3de> modellib/rendermesh.cpp:137 */
	int FindBoneIndex(const class CRenderSkeleton  *, uint32); /* linkage=_ZNK15CRenderSkeleton13FindBoneIndexEj */
	/* <4cdb4d6> modellib/rendermesh.cpp:148 */
	int FindBoneIndex(const class CRenderSkeleton  *, const char  *); /* linkage=_ZNK15CRenderSkeleton13FindBoneIndexEPKc */
	int GetParent(const class CRenderSkeleton  *, int); /* linkage=_ZNK15CRenderSkeleton9GetParentEi */
	void RemoveBones(class CRenderSkeleton *, const class CUtlVector<int, CUtlMemory<int, int> >  &, const class CUtlVector<int, CUtlMemory<int, int> >  &); /* linkage=_ZN15CRenderSkeleton11RemoveBonesERK10CUtlVectorIi10CUtlMemoryIiiEES5_ */
	void TransferPostLoadFn(class CRenderSkeleton *, class CKV3TransferLoadContext *); /* linkage=_ZN15CRenderSkeleton18TransferPostLoadFnEP23CKV3TransferLoadContext */
	void ~CRenderSkeleton(class CRenderSkeleton *); /* linkage=_ZN15CRenderSkeletonD4Ev */
	class CRenderSkeleton & operator=(class CRenderSkeleton *, const class CRenderSkeleton  &); /* linkage=_ZN15CRenderSkeletonaSERKS_ */
};

// <051E9CDD> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:110
// member functions: 54
// member variables: 4
// static member variable: 1
// class size: 104
class CRenderSkeleton {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:113 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:112 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:112 */
	CRenderSkeleton* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:112 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:112 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:112 */
	void Schema_CompileTimeVerificationFunction(CRenderSkeleton* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:112 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:112 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:112 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CRenderSkeleton* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:113 */
	CRenderSkeleton* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:113 */
	void KV3TransferSave(const CRenderSkeleton* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:113 */
	void KV3TransferLoad(CRenderSkeleton* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:113 */
	void KV3TransferSave_CRenderSkeleton(const CRenderSkeleton* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:113 */
	void KV3TransferLoad_CRenderSkeleton(CRenderSkeleton* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:117 */
	void CRenderSkeleton(CRenderSkeleton* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:119 */
	int AddBone(CRenderSkeleton* , RenderSkeletonBone_t& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:120 */
	int GetBoneCount(const CRenderSkeleton* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:121 */
	const RenderSkeletonBone_t* GetBone(const CRenderSkeleton* , int);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:122 */
	RenderSkeletonBone_t* GetBone(CRenderSkeleton* , int);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:123 */
	void SetBoneWeightCount(CRenderSkeleton* , int);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:124 */
	int GetBoneWeightCount(const CRenderSkeleton* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:125 */
	int FindBoneIndex(const CRenderSkeleton* , uint32);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:126 */
	int FindBoneIndex(const CRenderSkeleton* , const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:127 */
	int GetParent(const CRenderSkeleton* , int);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:128 */
	void RemoveBones(CRenderSkeleton* , const CUtlVector<int, CUtlMemory<int, int> >& , const CUtlVector<int, CUtlMemory<int, int> >& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:131 */
	void TransferPostLoadFn(CRenderSkeleton* , CKV3TransferLoadContext* );
	CUtlVector<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> > m_bones; /* 0 32 */
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > m_boneHashes; /* 32 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_boneParents; /* 64 32 */
	int m_nBoneWeightCount; /* 96 4 */
	CRenderSkeleton& operator=(CRenderSkeleton* , const CRenderSkeleton& );
	void ~CRenderSkeleton(CRenderSkeleton* );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN15CRenderSkeleton17GetPrimaryBindingEv */
	class CRenderSkeleton * Schema_MarkHelperFn(void); /* linkage=_ZN15CRenderSkeleton19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN15CRenderSkeleton15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <524d2ce> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:396 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN15CRenderSkeleton32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CRenderSkeleton *); /* linkage=_ZN15CRenderSkeleton38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN15CRenderSkeleton20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN15CRenderSkeleton22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CRenderSkeleton  *); /* linkage=_ZNK15CRenderSkeleton21Schema_DynamicBindingEv */
	class CRenderSkeleton * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN15CRenderSkeleton32KV3TransferAllocateClassInstanceEPKc */
	/* <524d8b7> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:404 */
	void KV3TransferSave(const class CRenderSkeleton  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CRenderSkeleton15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <524e25c> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:416 */
	void KV3TransferLoad(class CRenderSkeleton *, class CKV3TransferLoadContext *); /* linkage=_ZN15CRenderSkeleton15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CRenderSkeleton(const class CRenderSkeleton  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CRenderSkeleton31KV3TransferSave_CRenderSkeletonEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CRenderSkeleton(class CRenderSkeleton *, class CKV3TransferLoadContext *); /* linkage=_ZN15CRenderSkeleton31KV3TransferLoad_CRenderSkeletonEP23CKV3TransferLoadContext */
	void CRenderSkeleton(class CRenderSkeleton *); /* linkage=_ZN15CRenderSkeletonC4Ev */
	int AddBone(class CRenderSkeleton *, class RenderSkeletonBone_t &); /* linkage=_ZN15CRenderSkeleton7AddBoneER20RenderSkeletonBone_t */
	/* <4cdb2d8> modellib/rendermesh.cpp:117 */
	int GetBoneCount(const class CRenderSkeleton  *); /* linkage=_ZNK15CRenderSkeleton12GetBoneCountEv */
	/* <4cdb332> modellib/rendermesh.cpp:122 */
	const class RenderSkeletonBone_t  * GetBone(const class CRenderSkeleton  *, int); /* linkage=_ZNK15CRenderSkeleton7GetBoneEi */
	class RenderSkeletonBone_t * GetBone(class CRenderSkeleton *, int); /* linkage=_ZN15CRenderSkeleton7GetBoneEi */
	void SetBoneWeightCount(class CRenderSkeleton *, int); /* linkage=_ZN15CRenderSkeleton18SetBoneWeightCountEi */
	int GetBoneWeightCount(const class CRenderSkeleton  *); /* linkage=_ZNK15CRenderSkeleton18GetBoneWeightCountEv */
	/* <4cdb3de> modellib/rendermesh.cpp:137 */
	int FindBoneIndex(const class CRenderSkeleton  *, uint32); /* linkage=_ZNK15CRenderSkeleton13FindBoneIndexEj */
	/* <4cdb4d6> modellib/rendermesh.cpp:148 */
	int FindBoneIndex(const class CRenderSkeleton  *, const char  *); /* linkage=_ZNK15CRenderSkeleton13FindBoneIndexEPKc */
	int GetParent(const class CRenderSkeleton  *, int); /* linkage=_ZNK15CRenderSkeleton9GetParentEi */
	void RemoveBones(class CRenderSkeleton *, const class CUtlVector<int, CUtlMemory<int, int> >  &, const class CUtlVector<int, CUtlMemory<int, int> >  &); /* linkage=_ZN15CRenderSkeleton11RemoveBonesERK10CUtlVectorIi10CUtlMemoryIiiEES5_ */
	void TransferPostLoadFn(class CRenderSkeleton *, class CKV3TransferLoadContext *); /* linkage=_ZN15CRenderSkeleton18TransferPostLoadFnEP23CKV3TransferLoadContext */
	void ~CRenderSkeleton(class CRenderSkeleton *); /* linkage=_ZN15CRenderSkeletonD4Ev */
	class CRenderSkeleton & operator=(class CRenderSkeleton *, const class CRenderSkeleton  &); /* linkage=_ZN15CRenderSkeletonaSERKS_ */
};

// <058B97F5> ../../public/modellib/rendermesh.h:110
// member functions: 52
// member variables: 4
// static member variable: 1
// class size: 104
class CRenderSkeleton {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../../public/modellib/rendermesh.h:112 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../../public/modellib/rendermesh.h:112 */
	CRenderSkeleton* Schema_MarkHelperFn(void);
	/* ../../public/modellib/rendermesh.h:112 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../../public/modellib/rendermesh.h:112 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../../public/modellib/rendermesh.h:112 */
	void Schema_CompileTimeVerificationFunction(CRenderSkeleton* );
	/* ../../public/modellib/rendermesh.h:112 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../../public/modellib/rendermesh.h:112 */
	const char* Schema_StaticClassname(void);
	/* ../../public/modellib/rendermesh.h:112 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CRenderSkeleton* );
	/* ../../public/modellib/rendermesh.h:113 */
	CRenderSkeleton* KV3TransferAllocateClassInstance(const char* );
	/* ../../public/modellib/rendermesh.h:113 */
	void KV3TransferSave(const CRenderSkeleton* , CKV3TransferSaveContext* );
	/* ../../public/modellib/rendermesh.h:113 */
	void KV3TransferLoad(CRenderSkeleton* , CKV3TransferLoadContext* );
	/* ../../public/modellib/rendermesh.h:113 */
	void KV3TransferSave_CRenderSkeleton(const CRenderSkeleton* , CKV3TransferSaveContext* );
	/* ../../public/modellib/rendermesh.h:113 */
	void KV3TransferLoad_CRenderSkeleton(CRenderSkeleton* , CKV3TransferLoadContext* );
	/* ../../public/modellib/rendermesh.h:117 */
	void CRenderSkeleton(CRenderSkeleton* );
	/* ../../public/modellib/rendermesh.h:119 */
	int AddBone(CRenderSkeleton* , RenderSkeletonBone_t& );
	/* ../../public/modellib/rendermesh.h:120 */
	int GetBoneCount(const CRenderSkeleton* );
	/* ../../public/modellib/rendermesh.h:121 */
	const RenderSkeletonBone_t* GetBone(const CRenderSkeleton* , int);
	/* ../../public/modellib/rendermesh.h:122 */
	RenderSkeletonBone_t* GetBone(CRenderSkeleton* , int);
	/* ../../public/modellib/rendermesh.h:123 */
	void SetBoneWeightCount(CRenderSkeleton* , int);
	/* ../../public/modellib/rendermesh.h:124 */
	int GetBoneWeightCount(const CRenderSkeleton* );
	/* ../../public/modellib/rendermesh.h:125 */
	int FindBoneIndex(const CRenderSkeleton* , uint32);
	/* ../../public/modellib/rendermesh.h:126 */
	int FindBoneIndex(const CRenderSkeleton* , const char* );
	/* ../../public/modellib/rendermesh.h:127 */
	int GetParent(const CRenderSkeleton* , int);
	/* ../../public/modellib/rendermesh.h:128 */
	void RemoveBones(CRenderSkeleton* , const CUtlVector<int, CUtlMemory<int, int> >& , const CUtlVector<int, CUtlMemory<int, int> >& );
	/* ../../public/modellib/rendermesh.h:131 */
	void TransferPostLoadFn(CRenderSkeleton* , CKV3TransferLoadContext* );
	CUtlVector<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> > m_bones; /* 0 32 */
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > m_boneHashes; /* 32 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_boneParents; /* 64 32 */
	int m_nBoneWeightCount; /* 96 4 */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN15CRenderSkeleton17GetPrimaryBindingEv */
	class CRenderSkeleton * Schema_MarkHelperFn(void); /* linkage=_ZN15CRenderSkeleton19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN15CRenderSkeleton15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <524d2ce> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:396 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN15CRenderSkeleton32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CRenderSkeleton *); /* linkage=_ZN15CRenderSkeleton38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN15CRenderSkeleton20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN15CRenderSkeleton22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CRenderSkeleton  *); /* linkage=_ZNK15CRenderSkeleton21Schema_DynamicBindingEv */
	class CRenderSkeleton * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN15CRenderSkeleton32KV3TransferAllocateClassInstanceEPKc */
	/* <524d8b7> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:404 */
	void KV3TransferSave(const class CRenderSkeleton  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CRenderSkeleton15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <524e25c> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:416 */
	void KV3TransferLoad(class CRenderSkeleton *, class CKV3TransferLoadContext *); /* linkage=_ZN15CRenderSkeleton15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CRenderSkeleton(const class CRenderSkeleton  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CRenderSkeleton31KV3TransferSave_CRenderSkeletonEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CRenderSkeleton(class CRenderSkeleton *, class CKV3TransferLoadContext *); /* linkage=_ZN15CRenderSkeleton31KV3TransferLoad_CRenderSkeletonEP23CKV3TransferLoadContext */
	void CRenderSkeleton(class CRenderSkeleton *); /* linkage=_ZN15CRenderSkeletonC4Ev */
	int AddBone(class CRenderSkeleton *, class RenderSkeletonBone_t &); /* linkage=_ZN15CRenderSkeleton7AddBoneER20RenderSkeletonBone_t */
	/* <4cdb2d8> modellib/rendermesh.cpp:117 */
	int GetBoneCount(const class CRenderSkeleton  *); /* linkage=_ZNK15CRenderSkeleton12GetBoneCountEv */
	/* <4cdb332> modellib/rendermesh.cpp:122 */
	const class RenderSkeletonBone_t  * GetBone(const class CRenderSkeleton  *, int); /* linkage=_ZNK15CRenderSkeleton7GetBoneEi */
	class RenderSkeletonBone_t * GetBone(class CRenderSkeleton *, int); /* linkage=_ZN15CRenderSkeleton7GetBoneEi */
	void SetBoneWeightCount(class CRenderSkeleton *, int); /* linkage=_ZN15CRenderSkeleton18SetBoneWeightCountEi */
	int GetBoneWeightCount(const class CRenderSkeleton  *); /* linkage=_ZNK15CRenderSkeleton18GetBoneWeightCountEv */
	/* <4cdb3de> modellib/rendermesh.cpp:137 */
	int FindBoneIndex(const class CRenderSkeleton  *, uint32); /* linkage=_ZNK15CRenderSkeleton13FindBoneIndexEj */
	/* <4cdb4d6> modellib/rendermesh.cpp:148 */
	int FindBoneIndex(const class CRenderSkeleton  *, const char  *); /* linkage=_ZNK15CRenderSkeleton13FindBoneIndexEPKc */
	int GetParent(const class CRenderSkeleton  *, int); /* linkage=_ZNK15CRenderSkeleton9GetParentEi */
	void RemoveBones(class CRenderSkeleton *, const class CUtlVector<int, CUtlMemory<int, int> >  &, const class CUtlVector<int, CUtlMemory<int, int> >  &); /* linkage=_ZN15CRenderSkeleton11RemoveBonesERK10CUtlVectorIi10CUtlMemoryIiiEES5_ */
	void TransferPostLoadFn(class CRenderSkeleton *, class CKV3TransferLoadContext *); /* linkage=_ZN15CRenderSkeleton18TransferPostLoadFnEP23CKV3TransferLoadContext */
	void ~CRenderSkeleton(class CRenderSkeleton *); /* linkage=_ZN15CRenderSkeletonD4Ev */
	class CRenderSkeleton & operator=(class CRenderSkeleton *, const class CRenderSkeleton  &); /* linkage=_ZN15CRenderSkeletonaSERKS_ */
};

// <0524A9E2> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:112
inline void CRenderSkeleton::Schema_DynamicBinding()
{
} /* size: 0 */

// <0520851D> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:117
void CRenderSkeleton::CRenderSkeleton()
{
} /* size: 0 */

// <04D24CE9> ../public/modellib/rendermesh.h:124
inline void CRenderSkeleton::GetBoneWeightCount()
{
} /* size: 0 */

// <052407A0> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:145
inline void CDrawCullingData::operator=(const CDrawCullingData &)
{
} /* size: 0 */

// <05240789> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:145
void CDrawCullingData::CDrawCullingData()
{
} /* size: 0 */

// <0524076D> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:145
inline void CDrawCullingData::CDrawCullingData()
{
} /* size: 0 */

// <000BE32A> ../public/modellib/rendermesh.h:145
// member functions: 30
// member variables: 3
// static member variable: 1
// class size: 16
class CDrawCullingData {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/rendermesh.h:147 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/rendermesh.h:147 */
	CDrawCullingData* Schema_MarkHelperFn(void);
	/* ../public/modellib/rendermesh.h:147 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/rendermesh.h:147 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/rendermesh.h:147 */
	void Schema_CompileTimeVerificationFunction(CDrawCullingData* );
	/* ../public/modellib/rendermesh.h:147 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/rendermesh.h:147 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/rendermesh.h:147 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CDrawCullingData* );
	/* ../public/modellib/rendermesh.h:148 */
	CDrawCullingData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/rendermesh.h:148 */
	void KV3TransferSave(const CDrawCullingData* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:148 */
	void KV3TransferLoad(CDrawCullingData* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:148 */
	void KV3TransferSave_CDrawCullingData(const CDrawCullingData* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:148 */
	void KV3TransferLoad_CDrawCullingData(CDrawCullingData* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:151 */
	bool IsVisible(const CDrawCullingData* , const CFrustum& , const matrix3x4_t& );
	Vector m_vConeApex; /* 0 12 */
	int8 m_ConeAxis[3]; /* 12 3 */
	int8 m_ConeCutoff; /* 15 1 */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN16CDrawCullingData17GetPrimaryBindingEv */
	class CDrawCullingData * Schema_MarkHelperFn(void); /* linkage=_ZN16CDrawCullingData19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN16CDrawCullingData15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <524d388> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:497 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN16CDrawCullingData32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CDrawCullingData *); /* linkage=_ZN16CDrawCullingData38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN16CDrawCullingData20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN16CDrawCullingData22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CDrawCullingData  *); /* linkage=_ZNK16CDrawCullingData21Schema_DynamicBindingEv */
	class CDrawCullingData * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN16CDrawCullingData32KV3TransferAllocateClassInstanceEPKc */
	/* <524d3d7> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:505 */
	void KV3TransferSave(const class CDrawCullingData  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CDrawCullingData15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <524d430> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:517 */
	void KV3TransferLoad(class CDrawCullingData *, class CKV3TransferLoadContext *); /* linkage=_ZN16CDrawCullingData15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CDrawCullingData(const class CDrawCullingData  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CDrawCullingData32KV3TransferSave_CDrawCullingDataEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CDrawCullingData(class CDrawCullingData *, class CKV3TransferLoadContext *); /* linkage=_ZN16CDrawCullingData32KV3TransferLoad_CDrawCullingDataEP23CKV3TransferLoadContext */
	bool IsVisible(const class CDrawCullingData  *, const class CFrustum  &, const class matrix3x4_t  &); /* linkage=_ZNK16CDrawCullingData9IsVisibleERK8CFrustumRK11matrix3x4_t */
	class CDrawCullingData & operator=(class CDrawCullingData *, const class CDrawCullingData  &); /* linkage=_ZN16CDrawCullingDataaSERKS_ */
	void CDrawCullingData(class CDrawCullingData *); /* linkage=_ZN16CDrawCullingDataC4Ev */
};

// <04F19B06> ../public/modellib/rendermesh.h:145
// member functions: 32
// member variables: 3
// static member variable: 1
// class size: 16
class CDrawCullingData {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/rendermesh.h:147 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/rendermesh.h:147 */
	CDrawCullingData* Schema_MarkHelperFn(void);
	/* ../public/modellib/rendermesh.h:147 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/rendermesh.h:147 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/rendermesh.h:147 */
	void Schema_CompileTimeVerificationFunction(CDrawCullingData* );
	/* ../public/modellib/rendermesh.h:147 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/rendermesh.h:147 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/rendermesh.h:147 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CDrawCullingData* );
	/* ../public/modellib/rendermesh.h:148 */
	CDrawCullingData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/rendermesh.h:148 */
	void KV3TransferSave(const CDrawCullingData* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:148 */
	void KV3TransferLoad(CDrawCullingData* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:148 */
	void KV3TransferSave_CDrawCullingData(const CDrawCullingData* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:148 */
	void KV3TransferLoad_CDrawCullingData(CDrawCullingData* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:151 */
	bool IsVisible(const CDrawCullingData* , const CFrustum& , const matrix3x4_t& );
	Vector m_vConeApex; /* 0 12 */
	int8 m_ConeAxis[3]; /* 12 3 */
	int8 m_ConeCutoff; /* 15 1 */
	CDrawCullingData& operator=(CDrawCullingData* , const CDrawCullingData& );
	void CDrawCullingData(CDrawCullingData* );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN16CDrawCullingData17GetPrimaryBindingEv */
	class CDrawCullingData * Schema_MarkHelperFn(void); /* linkage=_ZN16CDrawCullingData19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN16CDrawCullingData15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <524d388> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:497 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN16CDrawCullingData32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CDrawCullingData *); /* linkage=_ZN16CDrawCullingData38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN16CDrawCullingData20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN16CDrawCullingData22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CDrawCullingData  *); /* linkage=_ZNK16CDrawCullingData21Schema_DynamicBindingEv */
	class CDrawCullingData * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN16CDrawCullingData32KV3TransferAllocateClassInstanceEPKc */
	/* <524d3d7> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:505 */
	void KV3TransferSave(const class CDrawCullingData  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CDrawCullingData15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <524d430> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:517 */
	void KV3TransferLoad(class CDrawCullingData *, class CKV3TransferLoadContext *); /* linkage=_ZN16CDrawCullingData15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CDrawCullingData(const class CDrawCullingData  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CDrawCullingData32KV3TransferSave_CDrawCullingDataEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CDrawCullingData(class CDrawCullingData *, class CKV3TransferLoadContext *); /* linkage=_ZN16CDrawCullingData32KV3TransferLoad_CDrawCullingDataEP23CKV3TransferLoadContext */
	bool IsVisible(const class CDrawCullingData  *, const class CFrustum  &, const class matrix3x4_t  &); /* linkage=_ZNK16CDrawCullingData9IsVisibleERK8CFrustumRK11matrix3x4_t */
	class CDrawCullingData & operator=(class CDrawCullingData *, const class CDrawCullingData  &); /* linkage=_ZN16CDrawCullingDataaSERKS_ */
	void CDrawCullingData(class CDrawCullingData *); /* linkage=_ZN16CDrawCullingDataC4Ev */
};

// <051ECED7> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:145
// member functions: 32
// member variables: 3
// static member variable: 1
// class size: 16
class CDrawCullingData {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:148 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:147 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:147 */
	CDrawCullingData* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:147 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:147 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:147 */
	void Schema_CompileTimeVerificationFunction(CDrawCullingData* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:147 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:147 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:147 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CDrawCullingData* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:148 */
	CDrawCullingData* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:148 */
	void KV3TransferSave(const CDrawCullingData* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:148 */
	void KV3TransferLoad(CDrawCullingData* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:148 */
	void KV3TransferSave_CDrawCullingData(const CDrawCullingData* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:148 */
	void KV3TransferLoad_CDrawCullingData(CDrawCullingData* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:151 */
	bool IsVisible(const CDrawCullingData* , const CFrustum& , const matrix3x4_t& );
	Vector m_vConeApex; /* 0 12 */
	int8 m_ConeAxis[3]; /* 12 3 */
	int8 m_ConeCutoff; /* 15 1 */
	void CDrawCullingData(CDrawCullingData* );
	CDrawCullingData& operator=(CDrawCullingData* , const CDrawCullingData& );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN16CDrawCullingData17GetPrimaryBindingEv */
	class CDrawCullingData * Schema_MarkHelperFn(void); /* linkage=_ZN16CDrawCullingData19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN16CDrawCullingData15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <524d388> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:497 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN16CDrawCullingData32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CDrawCullingData *); /* linkage=_ZN16CDrawCullingData38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN16CDrawCullingData20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN16CDrawCullingData22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CDrawCullingData  *); /* linkage=_ZNK16CDrawCullingData21Schema_DynamicBindingEv */
	class CDrawCullingData * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN16CDrawCullingData32KV3TransferAllocateClassInstanceEPKc */
	/* <524d3d7> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:505 */
	void KV3TransferSave(const class CDrawCullingData  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CDrawCullingData15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <524d430> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:517 */
	void KV3TransferLoad(class CDrawCullingData *, class CKV3TransferLoadContext *); /* linkage=_ZN16CDrawCullingData15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CDrawCullingData(const class CDrawCullingData  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CDrawCullingData32KV3TransferSave_CDrawCullingDataEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CDrawCullingData(class CDrawCullingData *, class CKV3TransferLoadContext *); /* linkage=_ZN16CDrawCullingData32KV3TransferLoad_CDrawCullingDataEP23CKV3TransferLoadContext */
	bool IsVisible(const class CDrawCullingData  *, const class CFrustum  &, const class matrix3x4_t  &); /* linkage=_ZNK16CDrawCullingData9IsVisibleERK8CFrustumRK11matrix3x4_t */
	class CDrawCullingData & operator=(class CDrawCullingData *, const class CDrawCullingData  &); /* linkage=_ZN16CDrawCullingDataaSERKS_ */
	void CDrawCullingData(class CDrawCullingData *); /* linkage=_ZN16CDrawCullingDataC4Ev */
};

// <058BB212> ../../public/modellib/rendermesh.h:145
// member functions: 30
// member variables: 3
// static member variable: 1
// class size: 16
class CDrawCullingData {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../../public/modellib/rendermesh.h:147 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../../public/modellib/rendermesh.h:147 */
	CDrawCullingData* Schema_MarkHelperFn(void);
	/* ../../public/modellib/rendermesh.h:147 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../../public/modellib/rendermesh.h:147 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../../public/modellib/rendermesh.h:147 */
	void Schema_CompileTimeVerificationFunction(CDrawCullingData* );
	/* ../../public/modellib/rendermesh.h:147 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../../public/modellib/rendermesh.h:147 */
	const char* Schema_StaticClassname(void);
	/* ../../public/modellib/rendermesh.h:147 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CDrawCullingData* );
	/* ../../public/modellib/rendermesh.h:148 */
	CDrawCullingData* KV3TransferAllocateClassInstance(const char* );
	/* ../../public/modellib/rendermesh.h:148 */
	void KV3TransferSave(const CDrawCullingData* , CKV3TransferSaveContext* );
	/* ../../public/modellib/rendermesh.h:148 */
	void KV3TransferLoad(CDrawCullingData* , CKV3TransferLoadContext* );
	/* ../../public/modellib/rendermesh.h:148 */
	void KV3TransferSave_CDrawCullingData(const CDrawCullingData* , CKV3TransferSaveContext* );
	/* ../../public/modellib/rendermesh.h:148 */
	void KV3TransferLoad_CDrawCullingData(CDrawCullingData* , CKV3TransferLoadContext* );
	/* ../../public/modellib/rendermesh.h:151 */
	bool IsVisible(const CDrawCullingData* , const CFrustum& , const matrix3x4_t& );
	Vector m_vConeApex; /* 0 12 */
	int8 m_ConeAxis[3]; /* 12 3 */
	int8 m_ConeCutoff; /* 15 1 */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN16CDrawCullingData17GetPrimaryBindingEv */
	class CDrawCullingData * Schema_MarkHelperFn(void); /* linkage=_ZN16CDrawCullingData19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN16CDrawCullingData15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <524d388> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:497 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN16CDrawCullingData32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CDrawCullingData *); /* linkage=_ZN16CDrawCullingData38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN16CDrawCullingData20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN16CDrawCullingData22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CDrawCullingData  *); /* linkage=_ZNK16CDrawCullingData21Schema_DynamicBindingEv */
	class CDrawCullingData * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN16CDrawCullingData32KV3TransferAllocateClassInstanceEPKc */
	/* <524d3d7> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:505 */
	void KV3TransferSave(const class CDrawCullingData  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CDrawCullingData15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <524d430> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:517 */
	void KV3TransferLoad(class CDrawCullingData *, class CKV3TransferLoadContext *); /* linkage=_ZN16CDrawCullingData15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CDrawCullingData(const class CDrawCullingData  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CDrawCullingData32KV3TransferSave_CDrawCullingDataEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CDrawCullingData(class CDrawCullingData *, class CKV3TransferLoadContext *); /* linkage=_ZN16CDrawCullingData32KV3TransferLoad_CDrawCullingDataEP23CKV3TransferLoadContext */
	bool IsVisible(const class CDrawCullingData  *, const class CFrustum  &, const class matrix3x4_t  &); /* linkage=_ZNK16CDrawCullingData9IsVisibleERK8CFrustumRK11matrix3x4_t */
	class CDrawCullingData & operator=(class CDrawCullingData *, const class CDrawCullingData  &); /* linkage=_ZN16CDrawCullingDataaSERKS_ */
	void CDrawCullingData(class CDrawCullingData *); /* linkage=_ZN16CDrawCullingDataC4Ev */
};

// <0524A9BD> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:147
inline void CDrawCullingData::Schema_DynamicBinding()
{
} /* size: 0 */

// <040250D4> ../public/modellib/rendermesh.h:158
// variables: 4
inline void CDrawCullingData::IsVisible(const CFrustum& frustum, const matrix3x4_t& transform)
{
	const Vector  coneApex; // 160
	const Vector  coneAxis; // 161
	const float  coneCutoff; // 162
	Vector viewVector; // 164
} /* size: 0, variables: 4 */

// <000BE522> ../public/modellib/rendermesh.h:175
// member variables: 3
// class size: 24
class CIndexBufferOverride {
	CRenderBufferBinding m_indexBuffer; /* 0 16 */
	int32 m_nStartIndex; /* 16 4 */
	int32 m_nIndexCount; /* 20 4 */
};

// <000BF97F> ../public/modellib/rendermesh.h:183
// member variables: 3
// class size: 88
class CVertexBufferOverride {
	CUtlVectorFixed<CRenderBufferBinding, 4> m_vertexBuffers __attribute__((__aligned__(8))); /* 0 80 */
	int32 m_nBaseVertex; /* 80 4 */
	int32 m_nVertexCount; /* 84 4 */
} __attribute__((__aligned__(8)));

// <000BF9C3> ../public/modellib/rendermesh.h:195
// member functions: 72
// member variables: 20
// static member variable: 1
// class size: 200
class CMaterialDrawDescriptor {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/rendermesh.h:197 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/rendermesh.h:197 */
	CMaterialDrawDescriptor* Schema_MarkHelperFn(void);
	/* ../public/modellib/rendermesh.h:197 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/rendermesh.h:197 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/rendermesh.h:197 */
	void Schema_CompileTimeVerificationFunction(CMaterialDrawDescriptor* );
	/* ../public/modellib/rendermesh.h:197 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/rendermesh.h:197 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/rendermesh.h:197 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CMaterialDrawDescriptor* );
	/* ../public/modellib/rendermesh.h:198 */
	CMaterialDrawDescriptor* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/rendermesh.h:198 */
	void KV3TransferSave(const CMaterialDrawDescriptor* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:198 */
	void KV3TransferLoad(CMaterialDrawDescriptor* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:198 */
	void KV3TransferSave_CMaterialDrawDescriptor(const CMaterialDrawDescriptor* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:198 */
	void KV3TransferLoad_CMaterialDrawDescriptor(CMaterialDrawDescriptor* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:203 */
	void CMaterialDrawDescriptor(CMaterialDrawDescriptor* );
	/* ../public/modellib/rendermesh.h:204 */
	void CMaterialDrawDescriptor(CMaterialDrawDescriptor* , RenderPrimitiveType_t, int32, int32, int32, int32);
	/* ../public/modellib/rendermesh.h:205 */
	void CMaterialDrawDescriptor(CMaterialDrawDescriptor* , RenderPrimitiveType_t, int32, int32, int32, int32, int32, int32, float32);
	/* ../public/modellib/rendermesh.h:206 */
	void CMaterialDrawDescriptor(CMaterialDrawDescriptor* , const CMaterialDrawDescriptor& );
	/* ../public/modellib/rendermesh.h:207 */
	CMaterialDrawDescriptor& operator=(CMaterialDrawDescriptor* , const CMaterialDrawDescriptor& );
	/* ../public/modellib/rendermesh.h:208 */
	void ~CMaterialDrawDescriptor(CMaterialDrawDescriptor* );
	/* ../public/modellib/rendermesh.h:210 */
	void Init(CMaterialDrawDescriptor* , RenderPrimitiveType_t, int32, int32, int32, int32);
	/* ../public/modellib/rendermesh.h:211 */
	void Init(CMaterialDrawDescriptor* , RenderPrimitiveType_t, int32, int32, int32, int32, int32, int32, float32);
	/* ../public/modellib/rendermesh.h:212 */
	void Init(CMaterialDrawDescriptor* , const CMaterialDrawDescriptor& );
	/* ../public/modellib/rendermesh.h:214 */
	void SetFlags(CMaterialDrawDescriptor* , RenderMeshDrawPrimitiveFlags_t);
	/* ../public/modellib/rendermesh.h:215 */
	void SetMaterial(CMaterialDrawDescriptor* , HMaterial);
	/* ../public/modellib/rendermesh.h:216 */
	HMaterial GetMaterial(const CMaterialDrawDescriptor* );
	/* ../public/modellib/rendermesh.h:217 */
	const IMaterial2* GetMaterialPtr(const CMaterialDrawDescriptor* );
	/* ../public/modellib/rendermesh.h:218 */
	void AddVertexBuffer(CMaterialDrawDescriptor* , VertexBufferHandle_t, uint32);
	/* ../public/modellib/rendermesh.h:219 */
	void SetIndexBuffer(CMaterialDrawDescriptor* , IndexBufferHandle_t, uint32);
	/* ../public/modellib/rendermesh.h:221 */
	void AddVertexBuffer(CMaterialDrawDescriptor* , uint64, uint32);
	/* ../public/modellib/rendermesh.h:222 */
	void SetIndexBuffer(CMaterialDrawDescriptor* , uint64, uint32);
	/* ../public/modellib/rendermesh.h:223 */
	void UpdateInputLayouts(CMaterialDrawDescriptor* );
	/* ../public/modellib/rendermesh.h:225 */
	bool IsAlphaBlended(const CMaterialDrawDescriptor* );
	/* ../public/modellib/rendermesh.h:231 */
	void TransferPostSaveFn(const CMaterialDrawDescriptor* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:232 */
	void TransferPostLoadFn(CMaterialDrawDescriptor* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:234 */
	void SetBLAS(CMaterialDrawDescriptor* , RenderBLASHandle_t);
	/* ../public/modellib/rendermesh.h:236 */
	RenderBLASHandle_t GenerateBLAS(const CMaterialDrawDescriptor* );
	RenderPrimitiveType_t m_nPrimitiveType; /* 0 4 */
	int32 m_nBaseVertex; /* 4 4 */
	int32 m_nVertexCount; /* 8 4 */
	int32 m_nStartIndex; /* 12 4 */
	int32 m_nIndexCount; /* 16 4 */
	int32 m_nStartInstance; /* 20 4 */
	int32 m_nInstanceCount; /* 24 4 */
	float32 m_flUvDensity; /* 28 4 */
	RenderMeshDrawPrimitiveFlags_t m_nFlags; /* 32 4 */
	Vector m_vTintColor; /* 36 12 */
	uint8 m_bAlphaBlendedMaterial; /* 48 1 */
	uint8 m_bAllowPerDrawCulling; /* 49 1 */
	int16 m_CullDataIndex; /* 50 2 */
	int32 m_nMeshID; /* 52 4 */
	RenderInputLayout_t m_hInputLayoutHandle[3]; /* 56 24 */
	CUtlVectorFixed<CRenderBufferBinding, 4> m_vertexBuffers __attribute__((__aligned__(8))); /* 80 80 */
	CRenderBufferBinding m_indexBuffer; /* 160 16 */
	const class CMaterialDrawDescriptor * m_pOriginalDrawCallPtr; /* 176 8 */
	RenderBLASHandle_t m_hBLAS; /* 184 8 */
	HMaterialStrong m_material; /* 192 8 */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN23CMaterialDrawDescriptor17GetPrimaryBindingEv */
	class CMaterialDrawDescriptor * Schema_MarkHelperFn(void); /* linkage=_ZN23CMaterialDrawDescriptor19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN23CMaterialDrawDescriptor15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <524d489> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:635 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN23CMaterialDrawDescriptor32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CMaterialDrawDescriptor *); /* linkage=_ZN23CMaterialDrawDescriptor38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN23CMaterialDrawDescriptor20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN23CMaterialDrawDescriptor22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CMaterialDrawDescriptor  *); /* linkage=_ZNK23CMaterialDrawDescriptor21Schema_DynamicBindingEv */
	class CMaterialDrawDescriptor * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN23CMaterialDrawDescriptor32KV3TransferAllocateClassInstanceEPKc */
	/* <524d4d8> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:643 */
	void KV3TransferSave(const class CMaterialDrawDescriptor  *, class CKV3TransferSaveContext *); /* linkage=_ZNK23CMaterialDrawDescriptor15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <524fc1d> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:666 */
	void KV3TransferLoad(class CMaterialDrawDescriptor *, class CKV3TransferLoadContext *); /* linkage=_ZN23CMaterialDrawDescriptor15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CMaterialDrawDescriptor(const class CMaterialDrawDescriptor  *, class CKV3TransferSaveContext *); /* linkage=_ZNK23CMaterialDrawDescriptor39KV3TransferSave_CMaterialDrawDescriptorEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CMaterialDrawDescriptor(class CMaterialDrawDescriptor *, class CKV3TransferLoadContext *); /* linkage=_ZN23CMaterialDrawDescriptor39KV3TransferLoad_CMaterialDrawDescriptorEP23CKV3TransferLoadContext */
	void CMaterialDrawDescriptor(class CMaterialDrawDescriptor *); /* linkage=_ZN23CMaterialDrawDescriptorC4Ev */
	void CMaterialDrawDescriptor(class CMaterialDrawDescriptor *, enum RenderPrimitiveType_t, int32, int32, int32, int32); /* linkage=_ZN23CMaterialDrawDescriptorC4E21RenderPrimitiveType_tiiii */
	void CMaterialDrawDescriptor(class CMaterialDrawDescriptor *, enum RenderPrimitiveType_t, int32, int32, int32, int32, int32, int32, float32); /* linkage=_ZN23CMaterialDrawDescriptorC4E21RenderPrimitiveType_tiiiiiif */
	void CMaterialDrawDescriptor(class CMaterialDrawDescriptor *, const class CMaterialDrawDescriptor  &); /* linkage=_ZN23CMaterialDrawDescriptorC4ERKS_ */
	class CMaterialDrawDescriptor & operator=(class CMaterialDrawDescriptor *, const class CMaterialDrawDescriptor  &); /* linkage=_ZN23CMaterialDrawDescriptoraSERKS_ */
	void ~CMaterialDrawDescriptor(class CMaterialDrawDescriptor *); /* linkage=_ZN23CMaterialDrawDescriptorD4Ev */
	void Init(class CMaterialDrawDescriptor *, enum RenderPrimitiveType_t, int32, int32, int32, int32); /* linkage=_ZN23CMaterialDrawDescriptor4InitE21RenderPrimitiveType_tiiii */
	void Init(class CMaterialDrawDescriptor *, enum RenderPrimitiveType_t, int32, int32, int32, int32, int32, int32, float32); /* linkage=_ZN23CMaterialDrawDescriptor4InitE21RenderPrimitiveType_tiiiiiif */
	void Init(class CMaterialDrawDescriptor *, const class CMaterialDrawDescriptor  &); /* linkage=_ZN23CMaterialDrawDescriptor4InitERKS_ */
	void SetFlags(class CMaterialDrawDescriptor *, enum RenderMeshDrawPrimitiveFlags_t); /* linkage=_ZN23CMaterialDrawDescriptor8SetFlagsE30RenderMeshDrawPrimitiveFlags_t */
	void SetMaterial(class CMaterialDrawDescriptor *, HMaterial); /* linkage=_ZN23CMaterialDrawDescriptor11SetMaterialE11CWeakHandleI29InfoForResourceTypeIMaterial2E */
	HMaterial GetMaterial(const class CMaterialDrawDescriptor  *); /* linkage=_ZNK23CMaterialDrawDescriptor11GetMaterialEv */
	const class IMaterial2  * GetMaterialPtr(const class CMaterialDrawDescriptor  *); /* linkage=_ZNK23CMaterialDrawDescriptor14GetMaterialPtrEv */
	void AddVertexBuffer(class CMaterialDrawDescriptor *, VertexBufferHandle_t, uint32); /* linkage=_ZN23CMaterialDrawDescriptor15AddVertexBufferEP22VertexBufferHandle_t__j */
	void SetIndexBuffer(class CMaterialDrawDescriptor *, IndexBufferHandle_t, uint32); /* linkage=_ZN23CMaterialDrawDescriptor14SetIndexBufferEP21IndexBufferHandle_t__j */
	/* <4cdb76a> modellib/rendermesh.cpp:458 */
	void AddVertexBuffer(class CMaterialDrawDescriptor *, uint64, uint32); /* linkage=_ZN23CMaterialDrawDescriptor15AddVertexBufferEyj */
	/* <4cdb9f0> modellib/rendermesh.cpp:465 */
	void SetIndexBuffer(class CMaterialDrawDescriptor *, uint64, uint32); /* linkage=_ZN23CMaterialDrawDescriptor14SetIndexBufferEyj */
	void UpdateInputLayouts(class CMaterialDrawDescriptor *); /* linkage=_ZN23CMaterialDrawDescriptor18UpdateInputLayoutsEv */
	bool IsAlphaBlended(const class CMaterialDrawDescriptor  *); /* linkage=_ZNK23CMaterialDrawDescriptor14IsAlphaBlendedEv */
	void TransferPostSaveFn(const class CMaterialDrawDescriptor  *, class CKV3TransferSaveContext *); /* linkage=_ZNK23CMaterialDrawDescriptor18TransferPostSaveFnEP23CKV3TransferSaveContext */
	void TransferPostLoadFn(class CMaterialDrawDescriptor *, class CKV3TransferLoadContext *); /* linkage=_ZN23CMaterialDrawDescriptor18TransferPostLoadFnEP23CKV3TransferLoadContext */
	/* <4cdb739> modellib/rendermesh.cpp:311 */
	void SetBLAS(class CMaterialDrawDescriptor *, RenderBLASHandle_t); /* linkage=_ZN23CMaterialDrawDescriptor7SetBLASEP20RenderBLASHandle_t__ */
	RenderBLASHandle_t GenerateBLAS(const class CMaterialDrawDescriptor  *); /* linkage=_ZNK23CMaterialDrawDescriptor12GenerateBLASEv */
} __attribute__((__aligned__(8)));

// <051EE549> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:195
// member functions: 72
// member variables: 20
// static member variable: 1
// class size: 200
class CMaterialDrawDescriptor {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:198 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:197 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:197 */
	CMaterialDrawDescriptor* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:197 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:197 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:197 */
	void Schema_CompileTimeVerificationFunction(CMaterialDrawDescriptor* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:197 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:197 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:197 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CMaterialDrawDescriptor* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:198 */
	CMaterialDrawDescriptor* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:198 */
	void KV3TransferSave(const CMaterialDrawDescriptor* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:198 */
	void KV3TransferLoad(CMaterialDrawDescriptor* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:198 */
	void KV3TransferSave_CMaterialDrawDescriptor(const CMaterialDrawDescriptor* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:198 */
	void KV3TransferLoad_CMaterialDrawDescriptor(CMaterialDrawDescriptor* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:203 */
	void CMaterialDrawDescriptor(CMaterialDrawDescriptor* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:204 */
	void CMaterialDrawDescriptor(CMaterialDrawDescriptor* , RenderPrimitiveType_t, int32, int32, int32, int32);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:205 */
	void CMaterialDrawDescriptor(CMaterialDrawDescriptor* , RenderPrimitiveType_t, int32, int32, int32, int32, int32, int32, float32);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:206 */
	void CMaterialDrawDescriptor(CMaterialDrawDescriptor* , const CMaterialDrawDescriptor& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:207 */
	CMaterialDrawDescriptor& operator=(CMaterialDrawDescriptor* , const CMaterialDrawDescriptor& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:208 */
	void ~CMaterialDrawDescriptor(CMaterialDrawDescriptor* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:210 */
	void Init(CMaterialDrawDescriptor* , RenderPrimitiveType_t, int32, int32, int32, int32);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:211 */
	void Init(CMaterialDrawDescriptor* , RenderPrimitiveType_t, int32, int32, int32, int32, int32, int32, float32);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:212 */
	void Init(CMaterialDrawDescriptor* , const CMaterialDrawDescriptor& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:214 */
	void SetFlags(CMaterialDrawDescriptor* , RenderMeshDrawPrimitiveFlags_t);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:215 */
	void SetMaterial(CMaterialDrawDescriptor* , HMaterial);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:216 */
	HMaterial GetMaterial(const CMaterialDrawDescriptor* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:217 */
	const IMaterial2* GetMaterialPtr(const CMaterialDrawDescriptor* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:218 */
	void AddVertexBuffer(CMaterialDrawDescriptor* , VertexBufferHandle_t, uint32);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:219 */
	void SetIndexBuffer(CMaterialDrawDescriptor* , IndexBufferHandle_t, uint32);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:221 */
	void AddVertexBuffer(CMaterialDrawDescriptor* , uint64, uint32);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:222 */
	void SetIndexBuffer(CMaterialDrawDescriptor* , uint64, uint32);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:223 */
	void UpdateInputLayouts(CMaterialDrawDescriptor* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:225 */
	bool IsAlphaBlended(const CMaterialDrawDescriptor* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:231 */
	void TransferPostSaveFn(const CMaterialDrawDescriptor* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:232 */
	void TransferPostLoadFn(CMaterialDrawDescriptor* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:234 */
	void SetBLAS(CMaterialDrawDescriptor* , RenderBLASHandle_t);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:236 */
	RenderBLASHandle_t GenerateBLAS(const CMaterialDrawDescriptor* );
	RenderPrimitiveType_t m_nPrimitiveType; /* 0 4 */
	int32 m_nBaseVertex; /* 4 4 */
	int32 m_nVertexCount; /* 8 4 */
	int32 m_nStartIndex; /* 12 4 */
	int32 m_nIndexCount; /* 16 4 */
	int32 m_nStartInstance; /* 20 4 */
	int32 m_nInstanceCount; /* 24 4 */
	float32 m_flUvDensity; /* 28 4 */
	RenderMeshDrawPrimitiveFlags_t m_nFlags; /* 32 4 */
	Vector m_vTintColor; /* 36 12 */
	uint8 m_bAlphaBlendedMaterial; /* 48 1 */
	uint8 m_bAllowPerDrawCulling; /* 49 1 */
	int16 m_CullDataIndex; /* 50 2 */
	int32 m_nMeshID; /* 52 4 */
	RenderInputLayout_t m_hInputLayoutHandle[3]; /* 56 24 */
	CUtlVectorFixed<CRenderBufferBinding, 4> m_vertexBuffers __attribute__((__aligned__(8))); /* 80 80 */
	CRenderBufferBinding m_indexBuffer; /* 160 16 */
	const class CMaterialDrawDescriptor * m_pOriginalDrawCallPtr; /* 176 8 */
	RenderBLASHandle_t m_hBLAS; /* 184 8 */
	HMaterialStrong m_material; /* 192 8 */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN23CMaterialDrawDescriptor17GetPrimaryBindingEv */
	class CMaterialDrawDescriptor * Schema_MarkHelperFn(void); /* linkage=_ZN23CMaterialDrawDescriptor19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN23CMaterialDrawDescriptor15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <524d489> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:635 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN23CMaterialDrawDescriptor32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CMaterialDrawDescriptor *); /* linkage=_ZN23CMaterialDrawDescriptor38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN23CMaterialDrawDescriptor20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN23CMaterialDrawDescriptor22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CMaterialDrawDescriptor  *); /* linkage=_ZNK23CMaterialDrawDescriptor21Schema_DynamicBindingEv */
	class CMaterialDrawDescriptor * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN23CMaterialDrawDescriptor32KV3TransferAllocateClassInstanceEPKc */
	/* <524d4d8> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:643 */
	void KV3TransferSave(const class CMaterialDrawDescriptor  *, class CKV3TransferSaveContext *); /* linkage=_ZNK23CMaterialDrawDescriptor15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <524fc1d> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:666 */
	void KV3TransferLoad(class CMaterialDrawDescriptor *, class CKV3TransferLoadContext *); /* linkage=_ZN23CMaterialDrawDescriptor15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CMaterialDrawDescriptor(const class CMaterialDrawDescriptor  *, class CKV3TransferSaveContext *); /* linkage=_ZNK23CMaterialDrawDescriptor39KV3TransferSave_CMaterialDrawDescriptorEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CMaterialDrawDescriptor(class CMaterialDrawDescriptor *, class CKV3TransferLoadContext *); /* linkage=_ZN23CMaterialDrawDescriptor39KV3TransferLoad_CMaterialDrawDescriptorEP23CKV3TransferLoadContext */
	void CMaterialDrawDescriptor(class CMaterialDrawDescriptor *); /* linkage=_ZN23CMaterialDrawDescriptorC4Ev */
	void CMaterialDrawDescriptor(class CMaterialDrawDescriptor *, enum RenderPrimitiveType_t, int32, int32, int32, int32); /* linkage=_ZN23CMaterialDrawDescriptorC4E21RenderPrimitiveType_tiiii */
	void CMaterialDrawDescriptor(class CMaterialDrawDescriptor *, enum RenderPrimitiveType_t, int32, int32, int32, int32, int32, int32, float32); /* linkage=_ZN23CMaterialDrawDescriptorC4E21RenderPrimitiveType_tiiiiiif */
	void CMaterialDrawDescriptor(class CMaterialDrawDescriptor *, const class CMaterialDrawDescriptor  &); /* linkage=_ZN23CMaterialDrawDescriptorC4ERKS_ */
	class CMaterialDrawDescriptor & operator=(class CMaterialDrawDescriptor *, const class CMaterialDrawDescriptor  &); /* linkage=_ZN23CMaterialDrawDescriptoraSERKS_ */
	void ~CMaterialDrawDescriptor(class CMaterialDrawDescriptor *); /* linkage=_ZN23CMaterialDrawDescriptorD4Ev */
	void Init(class CMaterialDrawDescriptor *, enum RenderPrimitiveType_t, int32, int32, int32, int32); /* linkage=_ZN23CMaterialDrawDescriptor4InitE21RenderPrimitiveType_tiiii */
	void Init(class CMaterialDrawDescriptor *, enum RenderPrimitiveType_t, int32, int32, int32, int32, int32, int32, float32); /* linkage=_ZN23CMaterialDrawDescriptor4InitE21RenderPrimitiveType_tiiiiiif */
	void Init(class CMaterialDrawDescriptor *, const class CMaterialDrawDescriptor  &); /* linkage=_ZN23CMaterialDrawDescriptor4InitERKS_ */
	void SetFlags(class CMaterialDrawDescriptor *, enum RenderMeshDrawPrimitiveFlags_t); /* linkage=_ZN23CMaterialDrawDescriptor8SetFlagsE30RenderMeshDrawPrimitiveFlags_t */
	void SetMaterial(class CMaterialDrawDescriptor *, HMaterial); /* linkage=_ZN23CMaterialDrawDescriptor11SetMaterialE11CWeakHandleI29InfoForResourceTypeIMaterial2E */
	HMaterial GetMaterial(const class CMaterialDrawDescriptor  *); /* linkage=_ZNK23CMaterialDrawDescriptor11GetMaterialEv */
	const class IMaterial2  * GetMaterialPtr(const class CMaterialDrawDescriptor  *); /* linkage=_ZNK23CMaterialDrawDescriptor14GetMaterialPtrEv */
	void AddVertexBuffer(class CMaterialDrawDescriptor *, VertexBufferHandle_t, uint32); /* linkage=_ZN23CMaterialDrawDescriptor15AddVertexBufferEP22VertexBufferHandle_t__j */
	void SetIndexBuffer(class CMaterialDrawDescriptor *, IndexBufferHandle_t, uint32); /* linkage=_ZN23CMaterialDrawDescriptor14SetIndexBufferEP21IndexBufferHandle_t__j */
	/* <4cdb76a> modellib/rendermesh.cpp:458 */
	void AddVertexBuffer(class CMaterialDrawDescriptor *, uint64, uint32); /* linkage=_ZN23CMaterialDrawDescriptor15AddVertexBufferEyj */
	/* <4cdb9f0> modellib/rendermesh.cpp:465 */
	void SetIndexBuffer(class CMaterialDrawDescriptor *, uint64, uint32); /* linkage=_ZN23CMaterialDrawDescriptor14SetIndexBufferEyj */
	void UpdateInputLayouts(class CMaterialDrawDescriptor *); /* linkage=_ZN23CMaterialDrawDescriptor18UpdateInputLayoutsEv */
	bool IsAlphaBlended(const class CMaterialDrawDescriptor  *); /* linkage=_ZNK23CMaterialDrawDescriptor14IsAlphaBlendedEv */
	void TransferPostSaveFn(const class CMaterialDrawDescriptor  *, class CKV3TransferSaveContext *); /* linkage=_ZNK23CMaterialDrawDescriptor18TransferPostSaveFnEP23CKV3TransferSaveContext */
	void TransferPostLoadFn(class CMaterialDrawDescriptor *, class CKV3TransferLoadContext *); /* linkage=_ZN23CMaterialDrawDescriptor18TransferPostLoadFnEP23CKV3TransferLoadContext */
	/* <4cdb739> modellib/rendermesh.cpp:311 */
	void SetBLAS(class CMaterialDrawDescriptor *, RenderBLASHandle_t); /* linkage=_ZN23CMaterialDrawDescriptor7SetBLASEP20RenderBLASHandle_t__ */
	RenderBLASHandle_t GenerateBLAS(const class CMaterialDrawDescriptor  *); /* linkage=_ZNK23CMaterialDrawDescriptor12GenerateBLASEv */
} __attribute__((__aligned__(8)));

// <058BC89F> ../../public/modellib/rendermesh.h:195
// member functions: 72
// member variables: 20
// static member variable: 1
// class size: 200
class CMaterialDrawDescriptor {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../../public/modellib/rendermesh.h:197 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../../public/modellib/rendermesh.h:197 */
	CMaterialDrawDescriptor* Schema_MarkHelperFn(void);
	/* ../../public/modellib/rendermesh.h:197 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../../public/modellib/rendermesh.h:197 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../../public/modellib/rendermesh.h:197 */
	void Schema_CompileTimeVerificationFunction(CMaterialDrawDescriptor* );
	/* ../../public/modellib/rendermesh.h:197 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../../public/modellib/rendermesh.h:197 */
	const char* Schema_StaticClassname(void);
	/* ../../public/modellib/rendermesh.h:197 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CMaterialDrawDescriptor* );
	/* ../../public/modellib/rendermesh.h:198 */
	CMaterialDrawDescriptor* KV3TransferAllocateClassInstance(const char* );
	/* ../../public/modellib/rendermesh.h:198 */
	void KV3TransferSave(const CMaterialDrawDescriptor* , CKV3TransferSaveContext* );
	/* ../../public/modellib/rendermesh.h:198 */
	void KV3TransferLoad(CMaterialDrawDescriptor* , CKV3TransferLoadContext* );
	/* ../../public/modellib/rendermesh.h:198 */
	void KV3TransferSave_CMaterialDrawDescriptor(const CMaterialDrawDescriptor* , CKV3TransferSaveContext* );
	/* ../../public/modellib/rendermesh.h:198 */
	void KV3TransferLoad_CMaterialDrawDescriptor(CMaterialDrawDescriptor* , CKV3TransferLoadContext* );
	/* ../../public/modellib/rendermesh.h:203 */
	void CMaterialDrawDescriptor(CMaterialDrawDescriptor* );
	/* ../../public/modellib/rendermesh.h:204 */
	void CMaterialDrawDescriptor(CMaterialDrawDescriptor* , RenderPrimitiveType_t, int32, int32, int32, int32);
	/* ../../public/modellib/rendermesh.h:205 */
	void CMaterialDrawDescriptor(CMaterialDrawDescriptor* , RenderPrimitiveType_t, int32, int32, int32, int32, int32, int32, float32);
	/* ../../public/modellib/rendermesh.h:206 */
	void CMaterialDrawDescriptor(CMaterialDrawDescriptor* , const CMaterialDrawDescriptor& );
	/* ../../public/modellib/rendermesh.h:207 */
	CMaterialDrawDescriptor& operator=(CMaterialDrawDescriptor* , const CMaterialDrawDescriptor& );
	/* ../../public/modellib/rendermesh.h:208 */
	void ~CMaterialDrawDescriptor(CMaterialDrawDescriptor* );
	/* ../../public/modellib/rendermesh.h:210 */
	void Init(CMaterialDrawDescriptor* , RenderPrimitiveType_t, int32, int32, int32, int32);
	/* ../../public/modellib/rendermesh.h:211 */
	void Init(CMaterialDrawDescriptor* , RenderPrimitiveType_t, int32, int32, int32, int32, int32, int32, float32);
	/* ../../public/modellib/rendermesh.h:212 */
	void Init(CMaterialDrawDescriptor* , const CMaterialDrawDescriptor& );
	/* ../../public/modellib/rendermesh.h:214 */
	void SetFlags(CMaterialDrawDescriptor* , RenderMeshDrawPrimitiveFlags_t);
	/* ../../public/modellib/rendermesh.h:215 */
	void SetMaterial(CMaterialDrawDescriptor* , HMaterial);
	/* ../../public/modellib/rendermesh.h:216 */
	HMaterial GetMaterial(const CMaterialDrawDescriptor* );
	/* ../../public/modellib/rendermesh.h:217 */
	const IMaterial2* GetMaterialPtr(const CMaterialDrawDescriptor* );
	/* ../../public/modellib/rendermesh.h:218 */
	void AddVertexBuffer(CMaterialDrawDescriptor* , VertexBufferHandle_t, uint32);
	/* ../../public/modellib/rendermesh.h:219 */
	void SetIndexBuffer(CMaterialDrawDescriptor* , IndexBufferHandle_t, uint32);
	/* ../../public/modellib/rendermesh.h:221 */
	void AddVertexBuffer(CMaterialDrawDescriptor* , uint64, uint32);
	/* ../../public/modellib/rendermesh.h:222 */
	void SetIndexBuffer(CMaterialDrawDescriptor* , uint64, uint32);
	/* ../../public/modellib/rendermesh.h:223 */
	void UpdateInputLayouts(CMaterialDrawDescriptor* );
	/* ../../public/modellib/rendermesh.h:225 */
	bool IsAlphaBlended(const CMaterialDrawDescriptor* );
	/* ../../public/modellib/rendermesh.h:231 */
	void TransferPostSaveFn(const CMaterialDrawDescriptor* , CKV3TransferSaveContext* );
	/* ../../public/modellib/rendermesh.h:232 */
	void TransferPostLoadFn(CMaterialDrawDescriptor* , CKV3TransferLoadContext* );
	/* ../../public/modellib/rendermesh.h:234 */
	void SetBLAS(CMaterialDrawDescriptor* , RenderBLASHandle_t);
	/* ../../public/modellib/rendermesh.h:236 */
	RenderBLASHandle_t GenerateBLAS(const CMaterialDrawDescriptor* );
	RenderPrimitiveType_t m_nPrimitiveType; /* 0 4 */
	int32 m_nBaseVertex; /* 4 4 */
	int32 m_nVertexCount; /* 8 4 */
	int32 m_nStartIndex; /* 12 4 */
	int32 m_nIndexCount; /* 16 4 */
	int32 m_nStartInstance; /* 20 4 */
	int32 m_nInstanceCount; /* 24 4 */
	float32 m_flUvDensity; /* 28 4 */
	RenderMeshDrawPrimitiveFlags_t m_nFlags; /* 32 4 */
	Vector m_vTintColor; /* 36 12 */
	uint8 m_bAlphaBlendedMaterial; /* 48 1 */
	uint8 m_bAllowPerDrawCulling; /* 49 1 */
	int16 m_CullDataIndex; /* 50 2 */
	int32 m_nMeshID; /* 52 4 */
	RenderInputLayout_t m_hInputLayoutHandle[3]; /* 56 24 */
	CUtlVectorFixed<CRenderBufferBinding, 4> m_vertexBuffers __attribute__((__aligned__(8))); /* 80 80 */
	CRenderBufferBinding m_indexBuffer; /* 160 16 */
	const class CMaterialDrawDescriptor * m_pOriginalDrawCallPtr; /* 176 8 */
	RenderBLASHandle_t m_hBLAS; /* 184 8 */
	HMaterialStrong m_material; /* 192 8 */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN23CMaterialDrawDescriptor17GetPrimaryBindingEv */
	class CMaterialDrawDescriptor * Schema_MarkHelperFn(void); /* linkage=_ZN23CMaterialDrawDescriptor19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN23CMaterialDrawDescriptor15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <524d489> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:635 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN23CMaterialDrawDescriptor32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CMaterialDrawDescriptor *); /* linkage=_ZN23CMaterialDrawDescriptor38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN23CMaterialDrawDescriptor20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN23CMaterialDrawDescriptor22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CMaterialDrawDescriptor  *); /* linkage=_ZNK23CMaterialDrawDescriptor21Schema_DynamicBindingEv */
	class CMaterialDrawDescriptor * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN23CMaterialDrawDescriptor32KV3TransferAllocateClassInstanceEPKc */
	/* <524d4d8> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:643 */
	void KV3TransferSave(const class CMaterialDrawDescriptor  *, class CKV3TransferSaveContext *); /* linkage=_ZNK23CMaterialDrawDescriptor15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <524fc1d> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:666 */
	void KV3TransferLoad(class CMaterialDrawDescriptor *, class CKV3TransferLoadContext *); /* linkage=_ZN23CMaterialDrawDescriptor15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CMaterialDrawDescriptor(const class CMaterialDrawDescriptor  *, class CKV3TransferSaveContext *); /* linkage=_ZNK23CMaterialDrawDescriptor39KV3TransferSave_CMaterialDrawDescriptorEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CMaterialDrawDescriptor(class CMaterialDrawDescriptor *, class CKV3TransferLoadContext *); /* linkage=_ZN23CMaterialDrawDescriptor39KV3TransferLoad_CMaterialDrawDescriptorEP23CKV3TransferLoadContext */
	void CMaterialDrawDescriptor(class CMaterialDrawDescriptor *); /* linkage=_ZN23CMaterialDrawDescriptorC4Ev */
	void CMaterialDrawDescriptor(class CMaterialDrawDescriptor *, enum RenderPrimitiveType_t, int32, int32, int32, int32); /* linkage=_ZN23CMaterialDrawDescriptorC4E21RenderPrimitiveType_tiiii */
	void CMaterialDrawDescriptor(class CMaterialDrawDescriptor *, enum RenderPrimitiveType_t, int32, int32, int32, int32, int32, int32, float32); /* linkage=_ZN23CMaterialDrawDescriptorC4E21RenderPrimitiveType_tiiiiiif */
	void CMaterialDrawDescriptor(class CMaterialDrawDescriptor *, const class CMaterialDrawDescriptor  &); /* linkage=_ZN23CMaterialDrawDescriptorC4ERKS_ */
	class CMaterialDrawDescriptor & operator=(class CMaterialDrawDescriptor *, const class CMaterialDrawDescriptor  &); /* linkage=_ZN23CMaterialDrawDescriptoraSERKS_ */
	void ~CMaterialDrawDescriptor(class CMaterialDrawDescriptor *); /* linkage=_ZN23CMaterialDrawDescriptorD4Ev */
	void Init(class CMaterialDrawDescriptor *, enum RenderPrimitiveType_t, int32, int32, int32, int32); /* linkage=_ZN23CMaterialDrawDescriptor4InitE21RenderPrimitiveType_tiiii */
	void Init(class CMaterialDrawDescriptor *, enum RenderPrimitiveType_t, int32, int32, int32, int32, int32, int32, float32); /* linkage=_ZN23CMaterialDrawDescriptor4InitE21RenderPrimitiveType_tiiiiiif */
	void Init(class CMaterialDrawDescriptor *, const class CMaterialDrawDescriptor  &); /* linkage=_ZN23CMaterialDrawDescriptor4InitERKS_ */
	void SetFlags(class CMaterialDrawDescriptor *, enum RenderMeshDrawPrimitiveFlags_t); /* linkage=_ZN23CMaterialDrawDescriptor8SetFlagsE30RenderMeshDrawPrimitiveFlags_t */
	void SetMaterial(class CMaterialDrawDescriptor *, HMaterial); /* linkage=_ZN23CMaterialDrawDescriptor11SetMaterialE11CWeakHandleI29InfoForResourceTypeIMaterial2E */
	HMaterial GetMaterial(const class CMaterialDrawDescriptor  *); /* linkage=_ZNK23CMaterialDrawDescriptor11GetMaterialEv */
	const class IMaterial2  * GetMaterialPtr(const class CMaterialDrawDescriptor  *); /* linkage=_ZNK23CMaterialDrawDescriptor14GetMaterialPtrEv */
	void AddVertexBuffer(class CMaterialDrawDescriptor *, VertexBufferHandle_t, uint32); /* linkage=_ZN23CMaterialDrawDescriptor15AddVertexBufferEP22VertexBufferHandle_t__j */
	void SetIndexBuffer(class CMaterialDrawDescriptor *, IndexBufferHandle_t, uint32); /* linkage=_ZN23CMaterialDrawDescriptor14SetIndexBufferEP21IndexBufferHandle_t__j */
	/* <4cdb76a> modellib/rendermesh.cpp:458 */
	void AddVertexBuffer(class CMaterialDrawDescriptor *, uint64, uint32); /* linkage=_ZN23CMaterialDrawDescriptor15AddVertexBufferEyj */
	/* <4cdb9f0> modellib/rendermesh.cpp:465 */
	void SetIndexBuffer(class CMaterialDrawDescriptor *, uint64, uint32); /* linkage=_ZN23CMaterialDrawDescriptor14SetIndexBufferEyj */
	void UpdateInputLayouts(class CMaterialDrawDescriptor *); /* linkage=_ZN23CMaterialDrawDescriptor18UpdateInputLayoutsEv */
	bool IsAlphaBlended(const class CMaterialDrawDescriptor  *); /* linkage=_ZNK23CMaterialDrawDescriptor14IsAlphaBlendedEv */
	void TransferPostSaveFn(const class CMaterialDrawDescriptor  *, class CKV3TransferSaveContext *); /* linkage=_ZNK23CMaterialDrawDescriptor18TransferPostSaveFnEP23CKV3TransferSaveContext */
	void TransferPostLoadFn(class CMaterialDrawDescriptor *, class CKV3TransferLoadContext *); /* linkage=_ZN23CMaterialDrawDescriptor18TransferPostLoadFnEP23CKV3TransferLoadContext */
	/* <4cdb739> modellib/rendermesh.cpp:311 */
	void SetBLAS(class CMaterialDrawDescriptor *, RenderBLASHandle_t); /* linkage=_ZN23CMaterialDrawDescriptor7SetBLASEP20RenderBLASHandle_t__ */
	RenderBLASHandle_t GenerateBLAS(const class CMaterialDrawDescriptor  *); /* linkage=_ZNK23CMaterialDrawDescriptor12GenerateBLASEv */
} __attribute__((__aligned__(8)));

// <0524A998> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:197
inline void CMaterialDrawDescriptor::Schema_DynamicBinding()
{
} /* size: 0 */

// <0520847C> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:203
void CMaterialDrawDescriptor::CMaterialDrawDescriptor()
{
} /* size: 0 */

// <05208460> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:208
void CMaterialDrawDescriptor::~CMaterialDrawDescriptor()
{
} /* size: 0 */

// <040250BB> ../public/modellib/rendermesh.h:225
inline void CMaterialDrawDescriptor::IsAlphaBlended()
{
} /* size: 0 */

// <0402509F> ../public/modellib/rendermesh.h:269
inline void CMaterialDrawDescriptor::GetMaterialPtr()
{
} /* size: 0 */

// <052353BA> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:277
inline void CSceneObjectData::operator=(const CSceneObjectData &)
{
} /* size: 0 */

// <000C008C> ../public/modellib/rendermesh.h:277
// member functions: 61
// member variables: 6
// static member variable: 1
// class size: 112
class CSceneObjectData {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/rendermesh.h:279 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/rendermesh.h:279 */
	CSceneObjectData* Schema_MarkHelperFn(void);
	/* ../public/modellib/rendermesh.h:279 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/rendermesh.h:279 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/rendermesh.h:279 */
	void Schema_CompileTimeVerificationFunction(CSceneObjectData* );
	/* ../public/modellib/rendermesh.h:279 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/rendermesh.h:279 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/rendermesh.h:279 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CSceneObjectData* );
	/* ../public/modellib/rendermesh.h:280 */
	CSceneObjectData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/rendermesh.h:280 */
	void KV3TransferSave(const CSceneObjectData* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:280 */
	void KV3TransferLoad(CSceneObjectData* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:280 */
	void KV3TransferSave_CSceneObjectData(const CSceneObjectData* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:280 */
	void KV3TransferLoad_CSceneObjectData(CSceneObjectData* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:283 */
	void CSceneObjectData(CSceneObjectData* );
	/* ../public/modellib/rendermesh.h:284 */
	void CSceneObjectData(CSceneObjectData* , const Vector& , const Vector& , RenderMeshTranslucencyType_t);
	/* ../public/modellib/rendermesh.h:285 */
	void CSceneObjectData(CSceneObjectData* , const CSceneObjectData* );
	/* ../public/modellib/rendermesh.h:286 */
	void ~CSceneObjectData(CSceneObjectData* );
	/* ../public/modellib/rendermesh.h:288 */
	void Init(CSceneObjectData* , const Vector& , const Vector& , RenderMeshTranslucencyType_t);
	/* ../public/modellib/rendermesh.h:289 */
	void Init(CSceneObjectData* , const CSceneObjectData& );
	/* ../public/modellib/rendermesh.h:290 */
	void SetBounds(CSceneObjectData* , const Vector& , const Vector& );
	/* ../public/modellib/rendermesh.h:291 */
	void AddBounds(CSceneObjectData* , const Vector& , const Vector& );
	/* ../public/modellib/rendermesh.h:292 */
	void SetTranslucencyType(CSceneObjectData* , RenderMeshTranslucencyType_t);
	/* ../public/modellib/rendermesh.h:293 */
	void AddDrawCall(CSceneObjectData* , CMaterialDrawDescriptor& );
	/* ../public/modellib/rendermesh.h:294 */
	CMaterialDrawDescriptor* AddDrawCall(CSceneObjectData* );
	/* ../public/modellib/rendermesh.h:296 */
	int GetNumDrawCalls(const CSceneObjectData* );
	/* ../public/modellib/rendermesh.h:297 */
	CMaterialDrawDescriptor* GetDrawCall(CSceneObjectData* , int);
	/* ../public/modellib/rendermesh.h:298 */
	const CMaterialDrawDescriptor* GetDrawCall(const CSceneObjectData* , int);
	/* ../public/modellib/rendermesh.h:300 */
	void SetTintColor(CSceneObjectData* , Vector4D& );
	/* ../public/modellib/rendermesh.h:301 */
	void UpdateInputLayouts(CSceneObjectData* );
	Vector m_vMinBounds; /* 0 12 */
	Vector m_vMaxBounds; /* 12 12 */
	RenderMeshTranslucencyType_t m_translucencyType; /* 24 4 */
	CUtlVector<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> > m_drawCalls; /* 32 32 */
	CUtlVector<CDrawCullingData, CUtlMemory<CDrawCullingData, int> > m_drawCullData; /* 64 32 */
	Vector4D m_vTintColor; /* 96 16 */
	/* ../public/modellib/rendermesh.h:313 */
	void CSceneObjectData(CSceneObjectData* , const CSceneObjectData& );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN16CSceneObjectData17GetPrimaryBindingEv */
	class CSceneObjectData * Schema_MarkHelperFn(void); /* linkage=_ZN16CSceneObjectData19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN16CSceneObjectData15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <524d531> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:763 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN16CSceneObjectData32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CSceneObjectData *); /* linkage=_ZN16CSceneObjectData38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN16CSceneObjectData20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN16CSceneObjectData22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CSceneObjectData  *); /* linkage=_ZNK16CSceneObjectData21Schema_DynamicBindingEv */
	class CSceneObjectData * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN16CSceneObjectData32KV3TransferAllocateClassInstanceEPKc */
	/* <524d910> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:771 */
	void KV3TransferSave(const class CSceneObjectData  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CSceneObjectData15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <52504b3> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:785 */
	void KV3TransferLoad(class CSceneObjectData *, class CKV3TransferLoadContext *); /* linkage=_ZN16CSceneObjectData15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CSceneObjectData(const class CSceneObjectData  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CSceneObjectData32KV3TransferSave_CSceneObjectDataEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CSceneObjectData(class CSceneObjectData *, class CKV3TransferLoadContext *); /* linkage=_ZN16CSceneObjectData32KV3TransferLoad_CSceneObjectDataEP23CKV3TransferLoadContext */
	void CSceneObjectData(class CSceneObjectData *); /* linkage=_ZN16CSceneObjectDataC4Ev */
	void CSceneObjectData(class CSceneObjectData *, const class Vector  &, const class Vector  &, enum RenderMeshTranslucencyType_t); /* linkage=_ZN16CSceneObjectDataC4ERK6VectorS2_28RenderMeshTranslucencyType_t */
	void CSceneObjectData(class CSceneObjectData *, const class CSceneObjectData  *); /* linkage=_ZN16CSceneObjectDataC4EPKS_ */
	void ~CSceneObjectData(class CSceneObjectData *); /* linkage=_ZN16CSceneObjectDataD4Ev */
	void Init(class CSceneObjectData *, const class Vector  &, const class Vector  &, enum RenderMeshTranslucencyType_t); /* linkage=_ZN16CSceneObjectData4InitERK6VectorS2_28RenderMeshTranslucencyType_t */
	void Init(class CSceneObjectData *, const class CSceneObjectData  &); /* linkage=_ZN16CSceneObjectData4InitERKS_ */
	/* <4cdba28> modellib/rendermesh.cpp:557 */
	void SetBounds(class CSceneObjectData *, const class Vector  &, const class Vector  &); /* linkage=_ZN16CSceneObjectData9SetBoundsERK6VectorS2_ */
	void AddBounds(class CSceneObjectData *, const class Vector  &, const class Vector  &); /* linkage=_ZN16CSceneObjectData9AddBoundsERK6VectorS2_ */
	/* <4cdbae0> modellib/rendermesh.cpp:570 */
	void SetTranslucencyType(class CSceneObjectData *, enum RenderMeshTranslucencyType_t); /* linkage=_ZN16CSceneObjectData19SetTranslucencyTypeE28RenderMeshTranslucencyType_t */
	void AddDrawCall(class CSceneObjectData *, class CMaterialDrawDescriptor &); /* linkage=_ZN16CSceneObjectData11AddDrawCallER23CMaterialDrawDescriptor */
	class CMaterialDrawDescriptor * AddDrawCall(class CSceneObjectData *); /* linkage=_ZN16CSceneObjectData11AddDrawCallEv */
	int GetNumDrawCalls(const class CSceneObjectData  *); /* linkage=_ZNK16CSceneObjectData15GetNumDrawCallsEv */
	class CMaterialDrawDescriptor * GetDrawCall(class CSceneObjectData *, int); /* linkage=_ZN16CSceneObjectData11GetDrawCallEi */
	const class CMaterialDrawDescriptor  * GetDrawCall(const class CSceneObjectData  *, int); /* linkage=_ZNK16CSceneObjectData11GetDrawCallEi */
	void SetTintColor(class CSceneObjectData *, class Vector4D &); /* linkage=_ZN16CSceneObjectData12SetTintColorER8Vector4D */
	void UpdateInputLayouts(class CSceneObjectData *); /* linkage=_ZN16CSceneObjectData18UpdateInputLayoutsEv */
	void CSceneObjectData(class CSceneObjectData *, const class CSceneObjectData  &); /* linkage=_ZN16CSceneObjectDataC4ERKS_ */
	class CSceneObjectData & operator=(class CSceneObjectData *, const class CSceneObjectData  &); /* linkage=_ZN16CSceneObjectDataaSERKS_ */
};

// <04F1B8A5> ../public/modellib/rendermesh.h:277
// member functions: 62
// member variables: 6
// static member variable: 1
// class size: 112
class CSceneObjectData {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/rendermesh.h:279 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/rendermesh.h:279 */
	CSceneObjectData* Schema_MarkHelperFn(void);
	/* ../public/modellib/rendermesh.h:279 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/rendermesh.h:279 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/rendermesh.h:279 */
	void Schema_CompileTimeVerificationFunction(CSceneObjectData* );
	/* ../public/modellib/rendermesh.h:279 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/rendermesh.h:279 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/rendermesh.h:279 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CSceneObjectData* );
	/* ../public/modellib/rendermesh.h:280 */
	CSceneObjectData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/rendermesh.h:280 */
	void KV3TransferSave(const CSceneObjectData* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:280 */
	void KV3TransferLoad(CSceneObjectData* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:280 */
	void KV3TransferSave_CSceneObjectData(const CSceneObjectData* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:280 */
	void KV3TransferLoad_CSceneObjectData(CSceneObjectData* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:283 */
	void CSceneObjectData(CSceneObjectData* );
	/* ../public/modellib/rendermesh.h:284 */
	void CSceneObjectData(CSceneObjectData* , const Vector& , const Vector& , RenderMeshTranslucencyType_t);
	/* ../public/modellib/rendermesh.h:285 */
	void CSceneObjectData(CSceneObjectData* , const CSceneObjectData* );
	/* ../public/modellib/rendermesh.h:286 */
	void ~CSceneObjectData(CSceneObjectData* );
	/* ../public/modellib/rendermesh.h:288 */
	void Init(CSceneObjectData* , const Vector& , const Vector& , RenderMeshTranslucencyType_t);
	/* ../public/modellib/rendermesh.h:289 */
	void Init(CSceneObjectData* , const CSceneObjectData& );
	/* ../public/modellib/rendermesh.h:290 */
	void SetBounds(CSceneObjectData* , const Vector& , const Vector& );
	/* ../public/modellib/rendermesh.h:291 */
	void AddBounds(CSceneObjectData* , const Vector& , const Vector& );
	/* ../public/modellib/rendermesh.h:292 */
	void SetTranslucencyType(CSceneObjectData* , RenderMeshTranslucencyType_t);
	/* ../public/modellib/rendermesh.h:293 */
	void AddDrawCall(CSceneObjectData* , CMaterialDrawDescriptor& );
	/* ../public/modellib/rendermesh.h:294 */
	CMaterialDrawDescriptor* AddDrawCall(CSceneObjectData* );
	/* ../public/modellib/rendermesh.h:296 */
	int GetNumDrawCalls(const CSceneObjectData* );
	/* ../public/modellib/rendermesh.h:297 */
	CMaterialDrawDescriptor* GetDrawCall(CSceneObjectData* , int);
	/* ../public/modellib/rendermesh.h:298 */
	const CMaterialDrawDescriptor* GetDrawCall(const CSceneObjectData* , int);
	/* ../public/modellib/rendermesh.h:300 */
	void SetTintColor(CSceneObjectData* , Vector4D& );
	/* ../public/modellib/rendermesh.h:301 */
	void UpdateInputLayouts(CSceneObjectData* );
	Vector m_vMinBounds; /* 0 12 */
	Vector m_vMaxBounds; /* 12 12 */
	RenderMeshTranslucencyType_t m_translucencyType; /* 24 4 */
	CUtlVector<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> > m_drawCalls; /* 32 32 */
	CUtlVector<CDrawCullingData, CUtlMemory<CDrawCullingData, int> > m_drawCullData; /* 64 32 */
	Vector4D m_vTintColor; /* 96 16 */
	/* ../public/modellib/rendermesh.h:313 */
	void CSceneObjectData(CSceneObjectData* , const CSceneObjectData& );
	CSceneObjectData& operator=(CSceneObjectData* , const CSceneObjectData& );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN16CSceneObjectData17GetPrimaryBindingEv */
	class CSceneObjectData * Schema_MarkHelperFn(void); /* linkage=_ZN16CSceneObjectData19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN16CSceneObjectData15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <524d531> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:763 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN16CSceneObjectData32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CSceneObjectData *); /* linkage=_ZN16CSceneObjectData38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN16CSceneObjectData20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN16CSceneObjectData22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CSceneObjectData  *); /* linkage=_ZNK16CSceneObjectData21Schema_DynamicBindingEv */
	class CSceneObjectData * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN16CSceneObjectData32KV3TransferAllocateClassInstanceEPKc */
	/* <524d910> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:771 */
	void KV3TransferSave(const class CSceneObjectData  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CSceneObjectData15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <52504b3> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:785 */
	void KV3TransferLoad(class CSceneObjectData *, class CKV3TransferLoadContext *); /* linkage=_ZN16CSceneObjectData15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CSceneObjectData(const class CSceneObjectData  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CSceneObjectData32KV3TransferSave_CSceneObjectDataEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CSceneObjectData(class CSceneObjectData *, class CKV3TransferLoadContext *); /* linkage=_ZN16CSceneObjectData32KV3TransferLoad_CSceneObjectDataEP23CKV3TransferLoadContext */
	void CSceneObjectData(class CSceneObjectData *); /* linkage=_ZN16CSceneObjectDataC4Ev */
	void CSceneObjectData(class CSceneObjectData *, const class Vector  &, const class Vector  &, enum RenderMeshTranslucencyType_t); /* linkage=_ZN16CSceneObjectDataC4ERK6VectorS2_28RenderMeshTranslucencyType_t */
	void CSceneObjectData(class CSceneObjectData *, const class CSceneObjectData  *); /* linkage=_ZN16CSceneObjectDataC4EPKS_ */
	void ~CSceneObjectData(class CSceneObjectData *); /* linkage=_ZN16CSceneObjectDataD4Ev */
	void Init(class CSceneObjectData *, const class Vector  &, const class Vector  &, enum RenderMeshTranslucencyType_t); /* linkage=_ZN16CSceneObjectData4InitERK6VectorS2_28RenderMeshTranslucencyType_t */
	void Init(class CSceneObjectData *, const class CSceneObjectData  &); /* linkage=_ZN16CSceneObjectData4InitERKS_ */
	/* <4cdba28> modellib/rendermesh.cpp:557 */
	void SetBounds(class CSceneObjectData *, const class Vector  &, const class Vector  &); /* linkage=_ZN16CSceneObjectData9SetBoundsERK6VectorS2_ */
	void AddBounds(class CSceneObjectData *, const class Vector  &, const class Vector  &); /* linkage=_ZN16CSceneObjectData9AddBoundsERK6VectorS2_ */
	/* <4cdbae0> modellib/rendermesh.cpp:570 */
	void SetTranslucencyType(class CSceneObjectData *, enum RenderMeshTranslucencyType_t); /* linkage=_ZN16CSceneObjectData19SetTranslucencyTypeE28RenderMeshTranslucencyType_t */
	void AddDrawCall(class CSceneObjectData *, class CMaterialDrawDescriptor &); /* linkage=_ZN16CSceneObjectData11AddDrawCallER23CMaterialDrawDescriptor */
	class CMaterialDrawDescriptor * AddDrawCall(class CSceneObjectData *); /* linkage=_ZN16CSceneObjectData11AddDrawCallEv */
	int GetNumDrawCalls(const class CSceneObjectData  *); /* linkage=_ZNK16CSceneObjectData15GetNumDrawCallsEv */
	class CMaterialDrawDescriptor * GetDrawCall(class CSceneObjectData *, int); /* linkage=_ZN16CSceneObjectData11GetDrawCallEi */
	const class CMaterialDrawDescriptor  * GetDrawCall(const class CSceneObjectData  *, int); /* linkage=_ZNK16CSceneObjectData11GetDrawCallEi */
	void SetTintColor(class CSceneObjectData *, class Vector4D &); /* linkage=_ZN16CSceneObjectData12SetTintColorER8Vector4D */
	void UpdateInputLayouts(class CSceneObjectData *); /* linkage=_ZN16CSceneObjectData18UpdateInputLayoutsEv */
	void CSceneObjectData(class CSceneObjectData *, const class CSceneObjectData  &); /* linkage=_ZN16CSceneObjectDataC4ERKS_ */
	class CSceneObjectData & operator=(class CSceneObjectData *, const class CSceneObjectData  &); /* linkage=_ZN16CSceneObjectDataaSERKS_ */
};

// <051EEC2D> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:277
// member functions: 62
// member variables: 6
// static member variable: 1
// class size: 112
class CSceneObjectData {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:280 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:279 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:279 */
	CSceneObjectData* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:279 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:279 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:279 */
	void Schema_CompileTimeVerificationFunction(CSceneObjectData* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:279 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:279 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:279 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CSceneObjectData* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:280 */
	CSceneObjectData* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:280 */
	void KV3TransferSave(const CSceneObjectData* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:280 */
	void KV3TransferLoad(CSceneObjectData* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:280 */
	void KV3TransferSave_CSceneObjectData(const CSceneObjectData* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:280 */
	void KV3TransferLoad_CSceneObjectData(CSceneObjectData* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:283 */
	void CSceneObjectData(CSceneObjectData* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:284 */
	void CSceneObjectData(CSceneObjectData* , const Vector& , const Vector& , RenderMeshTranslucencyType_t);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:285 */
	void CSceneObjectData(CSceneObjectData* , const CSceneObjectData* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:286 */
	void ~CSceneObjectData(CSceneObjectData* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:288 */
	void Init(CSceneObjectData* , const Vector& , const Vector& , RenderMeshTranslucencyType_t);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:289 */
	void Init(CSceneObjectData* , const CSceneObjectData& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:290 */
	void SetBounds(CSceneObjectData* , const Vector& , const Vector& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:291 */
	void AddBounds(CSceneObjectData* , const Vector& , const Vector& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:292 */
	void SetTranslucencyType(CSceneObjectData* , RenderMeshTranslucencyType_t);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:293 */
	void AddDrawCall(CSceneObjectData* , CMaterialDrawDescriptor& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:294 */
	CMaterialDrawDescriptor* AddDrawCall(CSceneObjectData* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:296 */
	int GetNumDrawCalls(const CSceneObjectData* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:297 */
	CMaterialDrawDescriptor* GetDrawCall(CSceneObjectData* , int);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:298 */
	const CMaterialDrawDescriptor* GetDrawCall(const CSceneObjectData* , int);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:300 */
	void SetTintColor(CSceneObjectData* , Vector4D& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:301 */
	void UpdateInputLayouts(CSceneObjectData* );
	Vector m_vMinBounds; /* 0 12 */
	Vector m_vMaxBounds; /* 12 12 */
	RenderMeshTranslucencyType_t m_translucencyType; /* 24 4 */
	CUtlVector<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> > m_drawCalls; /* 32 32 */
	CUtlVector<CDrawCullingData, CUtlMemory<CDrawCullingData, int> > m_drawCullData; /* 64 32 */
	Vector4D m_vTintColor; /* 96 16 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:313 */
	void CSceneObjectData(CSceneObjectData* , const CSceneObjectData& );
	CSceneObjectData& operator=(CSceneObjectData* , const CSceneObjectData& );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN16CSceneObjectData17GetPrimaryBindingEv */
	class CSceneObjectData * Schema_MarkHelperFn(void); /* linkage=_ZN16CSceneObjectData19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN16CSceneObjectData15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <524d531> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:763 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN16CSceneObjectData32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CSceneObjectData *); /* linkage=_ZN16CSceneObjectData38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN16CSceneObjectData20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN16CSceneObjectData22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CSceneObjectData  *); /* linkage=_ZNK16CSceneObjectData21Schema_DynamicBindingEv */
	class CSceneObjectData * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN16CSceneObjectData32KV3TransferAllocateClassInstanceEPKc */
	/* <524d910> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:771 */
	void KV3TransferSave(const class CSceneObjectData  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CSceneObjectData15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <52504b3> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:785 */
	void KV3TransferLoad(class CSceneObjectData *, class CKV3TransferLoadContext *); /* linkage=_ZN16CSceneObjectData15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CSceneObjectData(const class CSceneObjectData  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CSceneObjectData32KV3TransferSave_CSceneObjectDataEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CSceneObjectData(class CSceneObjectData *, class CKV3TransferLoadContext *); /* linkage=_ZN16CSceneObjectData32KV3TransferLoad_CSceneObjectDataEP23CKV3TransferLoadContext */
	void CSceneObjectData(class CSceneObjectData *); /* linkage=_ZN16CSceneObjectDataC4Ev */
	void CSceneObjectData(class CSceneObjectData *, const class Vector  &, const class Vector  &, enum RenderMeshTranslucencyType_t); /* linkage=_ZN16CSceneObjectDataC4ERK6VectorS2_28RenderMeshTranslucencyType_t */
	void CSceneObjectData(class CSceneObjectData *, const class CSceneObjectData  *); /* linkage=_ZN16CSceneObjectDataC4EPKS_ */
	void ~CSceneObjectData(class CSceneObjectData *); /* linkage=_ZN16CSceneObjectDataD4Ev */
	void Init(class CSceneObjectData *, const class Vector  &, const class Vector  &, enum RenderMeshTranslucencyType_t); /* linkage=_ZN16CSceneObjectData4InitERK6VectorS2_28RenderMeshTranslucencyType_t */
	void Init(class CSceneObjectData *, const class CSceneObjectData  &); /* linkage=_ZN16CSceneObjectData4InitERKS_ */
	/* <4cdba28> modellib/rendermesh.cpp:557 */
	void SetBounds(class CSceneObjectData *, const class Vector  &, const class Vector  &); /* linkage=_ZN16CSceneObjectData9SetBoundsERK6VectorS2_ */
	void AddBounds(class CSceneObjectData *, const class Vector  &, const class Vector  &); /* linkage=_ZN16CSceneObjectData9AddBoundsERK6VectorS2_ */
	/* <4cdbae0> modellib/rendermesh.cpp:570 */
	void SetTranslucencyType(class CSceneObjectData *, enum RenderMeshTranslucencyType_t); /* linkage=_ZN16CSceneObjectData19SetTranslucencyTypeE28RenderMeshTranslucencyType_t */
	void AddDrawCall(class CSceneObjectData *, class CMaterialDrawDescriptor &); /* linkage=_ZN16CSceneObjectData11AddDrawCallER23CMaterialDrawDescriptor */
	class CMaterialDrawDescriptor * AddDrawCall(class CSceneObjectData *); /* linkage=_ZN16CSceneObjectData11AddDrawCallEv */
	int GetNumDrawCalls(const class CSceneObjectData  *); /* linkage=_ZNK16CSceneObjectData15GetNumDrawCallsEv */
	class CMaterialDrawDescriptor * GetDrawCall(class CSceneObjectData *, int); /* linkage=_ZN16CSceneObjectData11GetDrawCallEi */
	const class CMaterialDrawDescriptor  * GetDrawCall(const class CSceneObjectData  *, int); /* linkage=_ZNK16CSceneObjectData11GetDrawCallEi */
	void SetTintColor(class CSceneObjectData *, class Vector4D &); /* linkage=_ZN16CSceneObjectData12SetTintColorER8Vector4D */
	void UpdateInputLayouts(class CSceneObjectData *); /* linkage=_ZN16CSceneObjectData18UpdateInputLayoutsEv */
	void CSceneObjectData(class CSceneObjectData *, const class CSceneObjectData  &); /* linkage=_ZN16CSceneObjectDataC4ERKS_ */
	class CSceneObjectData & operator=(class CSceneObjectData *, const class CSceneObjectData  &); /* linkage=_ZN16CSceneObjectDataaSERKS_ */
};

// <058BCF5E> ../../public/modellib/rendermesh.h:277
// member functions: 61
// member variables: 6
// static member variable: 1
// class size: 112
class CSceneObjectData {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../../public/modellib/rendermesh.h:279 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../../public/modellib/rendermesh.h:279 */
	CSceneObjectData* Schema_MarkHelperFn(void);
	/* ../../public/modellib/rendermesh.h:279 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../../public/modellib/rendermesh.h:279 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../../public/modellib/rendermesh.h:279 */
	void Schema_CompileTimeVerificationFunction(CSceneObjectData* );
	/* ../../public/modellib/rendermesh.h:279 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../../public/modellib/rendermesh.h:279 */
	const char* Schema_StaticClassname(void);
	/* ../../public/modellib/rendermesh.h:279 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CSceneObjectData* );
	/* ../../public/modellib/rendermesh.h:280 */
	CSceneObjectData* KV3TransferAllocateClassInstance(const char* );
	/* ../../public/modellib/rendermesh.h:280 */
	void KV3TransferSave(const CSceneObjectData* , CKV3TransferSaveContext* );
	/* ../../public/modellib/rendermesh.h:280 */
	void KV3TransferLoad(CSceneObjectData* , CKV3TransferLoadContext* );
	/* ../../public/modellib/rendermesh.h:280 */
	void KV3TransferSave_CSceneObjectData(const CSceneObjectData* , CKV3TransferSaveContext* );
	/* ../../public/modellib/rendermesh.h:280 */
	void KV3TransferLoad_CSceneObjectData(CSceneObjectData* , CKV3TransferLoadContext* );
	/* ../../public/modellib/rendermesh.h:283 */
	void CSceneObjectData(CSceneObjectData* );
	/* ../../public/modellib/rendermesh.h:284 */
	void CSceneObjectData(CSceneObjectData* , const Vector& , const Vector& , RenderMeshTranslucencyType_t);
	/* ../../public/modellib/rendermesh.h:285 */
	void CSceneObjectData(CSceneObjectData* , const CSceneObjectData* );
	/* ../../public/modellib/rendermesh.h:286 */
	void ~CSceneObjectData(CSceneObjectData* );
	/* ../../public/modellib/rendermesh.h:288 */
	void Init(CSceneObjectData* , const Vector& , const Vector& , RenderMeshTranslucencyType_t);
	/* ../../public/modellib/rendermesh.h:289 */
	void Init(CSceneObjectData* , const CSceneObjectData& );
	/* ../../public/modellib/rendermesh.h:290 */
	void SetBounds(CSceneObjectData* , const Vector& , const Vector& );
	/* ../../public/modellib/rendermesh.h:291 */
	void AddBounds(CSceneObjectData* , const Vector& , const Vector& );
	/* ../../public/modellib/rendermesh.h:292 */
	void SetTranslucencyType(CSceneObjectData* , RenderMeshTranslucencyType_t);
	/* ../../public/modellib/rendermesh.h:293 */
	void AddDrawCall(CSceneObjectData* , CMaterialDrawDescriptor& );
	/* ../../public/modellib/rendermesh.h:294 */
	CMaterialDrawDescriptor* AddDrawCall(CSceneObjectData* );
	/* ../../public/modellib/rendermesh.h:296 */
	int GetNumDrawCalls(const CSceneObjectData* );
	/* ../../public/modellib/rendermesh.h:297 */
	CMaterialDrawDescriptor* GetDrawCall(CSceneObjectData* , int);
	/* ../../public/modellib/rendermesh.h:298 */
	const CMaterialDrawDescriptor* GetDrawCall(const CSceneObjectData* , int);
	/* ../../public/modellib/rendermesh.h:300 */
	void SetTintColor(CSceneObjectData* , Vector4D& );
	/* ../../public/modellib/rendermesh.h:301 */
	void UpdateInputLayouts(CSceneObjectData* );
	Vector m_vMinBounds; /* 0 12 */
	Vector m_vMaxBounds; /* 12 12 */
	RenderMeshTranslucencyType_t m_translucencyType; /* 24 4 */
	CUtlVector<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> > m_drawCalls; /* 32 32 */
	CUtlVector<CDrawCullingData, CUtlMemory<CDrawCullingData, int> > m_drawCullData; /* 64 32 */
	Vector4D m_vTintColor; /* 96 16 */
	/* ../../public/modellib/rendermesh.h:313 */
	void CSceneObjectData(CSceneObjectData* , const CSceneObjectData& );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN16CSceneObjectData17GetPrimaryBindingEv */
	class CSceneObjectData * Schema_MarkHelperFn(void); /* linkage=_ZN16CSceneObjectData19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN16CSceneObjectData15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <524d531> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:763 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN16CSceneObjectData32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CSceneObjectData *); /* linkage=_ZN16CSceneObjectData38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN16CSceneObjectData20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN16CSceneObjectData22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CSceneObjectData  *); /* linkage=_ZNK16CSceneObjectData21Schema_DynamicBindingEv */
	class CSceneObjectData * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN16CSceneObjectData32KV3TransferAllocateClassInstanceEPKc */
	/* <524d910> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:771 */
	void KV3TransferSave(const class CSceneObjectData  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CSceneObjectData15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <52504b3> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:785 */
	void KV3TransferLoad(class CSceneObjectData *, class CKV3TransferLoadContext *); /* linkage=_ZN16CSceneObjectData15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CSceneObjectData(const class CSceneObjectData  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CSceneObjectData32KV3TransferSave_CSceneObjectDataEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CSceneObjectData(class CSceneObjectData *, class CKV3TransferLoadContext *); /* linkage=_ZN16CSceneObjectData32KV3TransferLoad_CSceneObjectDataEP23CKV3TransferLoadContext */
	void CSceneObjectData(class CSceneObjectData *); /* linkage=_ZN16CSceneObjectDataC4Ev */
	void CSceneObjectData(class CSceneObjectData *, const class Vector  &, const class Vector  &, enum RenderMeshTranslucencyType_t); /* linkage=_ZN16CSceneObjectDataC4ERK6VectorS2_28RenderMeshTranslucencyType_t */
	void CSceneObjectData(class CSceneObjectData *, const class CSceneObjectData  *); /* linkage=_ZN16CSceneObjectDataC4EPKS_ */
	void ~CSceneObjectData(class CSceneObjectData *); /* linkage=_ZN16CSceneObjectDataD4Ev */
	void Init(class CSceneObjectData *, const class Vector  &, const class Vector  &, enum RenderMeshTranslucencyType_t); /* linkage=_ZN16CSceneObjectData4InitERK6VectorS2_28RenderMeshTranslucencyType_t */
	void Init(class CSceneObjectData *, const class CSceneObjectData  &); /* linkage=_ZN16CSceneObjectData4InitERKS_ */
	/* <4cdba28> modellib/rendermesh.cpp:557 */
	void SetBounds(class CSceneObjectData *, const class Vector  &, const class Vector  &); /* linkage=_ZN16CSceneObjectData9SetBoundsERK6VectorS2_ */
	void AddBounds(class CSceneObjectData *, const class Vector  &, const class Vector  &); /* linkage=_ZN16CSceneObjectData9AddBoundsERK6VectorS2_ */
	/* <4cdbae0> modellib/rendermesh.cpp:570 */
	void SetTranslucencyType(class CSceneObjectData *, enum RenderMeshTranslucencyType_t); /* linkage=_ZN16CSceneObjectData19SetTranslucencyTypeE28RenderMeshTranslucencyType_t */
	void AddDrawCall(class CSceneObjectData *, class CMaterialDrawDescriptor &); /* linkage=_ZN16CSceneObjectData11AddDrawCallER23CMaterialDrawDescriptor */
	class CMaterialDrawDescriptor * AddDrawCall(class CSceneObjectData *); /* linkage=_ZN16CSceneObjectData11AddDrawCallEv */
	int GetNumDrawCalls(const class CSceneObjectData  *); /* linkage=_ZNK16CSceneObjectData15GetNumDrawCallsEv */
	class CMaterialDrawDescriptor * GetDrawCall(class CSceneObjectData *, int); /* linkage=_ZN16CSceneObjectData11GetDrawCallEi */
	const class CMaterialDrawDescriptor  * GetDrawCall(const class CSceneObjectData  *, int); /* linkage=_ZNK16CSceneObjectData11GetDrawCallEi */
	void SetTintColor(class CSceneObjectData *, class Vector4D &); /* linkage=_ZN16CSceneObjectData12SetTintColorER8Vector4D */
	void UpdateInputLayouts(class CSceneObjectData *); /* linkage=_ZN16CSceneObjectData18UpdateInputLayoutsEv */
	void CSceneObjectData(class CSceneObjectData *, const class CSceneObjectData  &); /* linkage=_ZN16CSceneObjectDataC4ERKS_ */
	class CSceneObjectData & operator=(class CSceneObjectData *, const class CSceneObjectData  &); /* linkage=_ZN16CSceneObjectDataaSERKS_ */
};

// <0524A973> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:279
inline void CSceneObjectData::Schema_DynamicBinding()
{
} /* size: 0 */

// <05208419> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:283
void CSceneObjectData::CSceneObjectData()
{
} /* size: 0 */

// <00076AAD> ../public/modellib/rendermesh.h:284
void CSceneObjectData::CSceneObjectData(const Vector& vMinBounds, const Vector& vMaxBounds, RenderMeshTranslucencyType_t nTranslucencyType)
{
} /* size: 0 */

// <00076B0C> ../public/modellib/rendermesh.h:285
void CSceneObjectData::CSceneObjectData(const CSceneObjectData* pOther)
{
} /* size: 0 */

// <052083FD> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:286
void CSceneObjectData::~CSceneObjectData()
{
} /* size: 0 */

// <04CD9A3E> ../public/modellib/rendermesh.h:296
inline void CSceneObjectData::GetNumDrawCalls()
{
} /* size: 0 */

// <04CD9A18> ../public/modellib/rendermesh.h:298
inline void CSceneObjectData::GetDrawCall(int nDraw)
{
} /* size: 0 */

// <05231788> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:321
inline void CAttachment::operator=(const CAttachment &)
{
} /* size: 0 */

// <05231771> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:321
void CAttachment::~CAttachment()
{
} /* size: 0 */

// <05231754> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:321
inline void CAttachment::~CAttachment()
{
} /* size: 0 */

// <04CB19B8> ../public/modellib/rendermesh.h:321
void CAttachment::CAttachment(const CAttachment &)
{
} /* size: 0 */

// <04CB1996> ../public/modellib/rendermesh.h:321
inline void CAttachment::CAttachment(const CAttachment &)
{
} /* size: 0 */

// <0117ABA0> ../public/modellib/rendermesh.h:321
// member functions: 37
// member variables: 8
// static member variable: 1
// class size: 136
class CAttachment {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/rendermesh.h:323 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/rendermesh.h:323 */
	CAttachment* Schema_MarkHelperFn(void);
	/* ../public/modellib/rendermesh.h:323 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/rendermesh.h:323 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/rendermesh.h:323 */
	void Schema_CompileTimeVerificationFunction(CAttachment* );
	/* ../public/modellib/rendermesh.h:323 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/rendermesh.h:323 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/rendermesh.h:323 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAttachment* );
	/* ../public/modellib/rendermesh.h:324 */
	CAttachment* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/rendermesh.h:324 */
	void KV3TransferSave(const CAttachment* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:324 */
	void KV3TransferLoad(CAttachment* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:324 */
	void KV3TransferSave_CAttachment(const CAttachment* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:324 */
	void KV3TransferLoad_CAttachment(CAttachment* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:328 */
	void CAttachment(CAttachment* );
	/* ../public/modellib/rendermesh.h:330 */
	void SetName(CAttachment* , const char* );
	/* ../public/modellib/rendermesh.h:331 */
	bool AddInfluence(CAttachment* , const char* , const Vector& , const Quaternion& , float, bool);
	CUtlString m_name; /* 0 8 */
	CUtlString m_influenceNames[3]; /* 8 24 */
	Vector m_vInfluenceOffsets[3]; /* 32 36 */
	Quaternion m_vInfluenceRotations[3]; /* 68 48 */
	float m_influenceWeights[3]; /* 116 12 */
	bool m_bInfluenceRootTransform[3]; /* 128 3 */
	uint8 m_nInfluences; /* 131 1 */
	bool m_bIgnoreRotation; /* 132 1 */
	/* ../public/modellib/rendermesh.h:344 */
	void TransferPostLoadFn(CAttachment* , CKV3TransferLoadContext* );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN11CAttachment17GetPrimaryBindingEv */
	class CAttachment * Schema_MarkHelperFn(void); /* linkage=_ZN11CAttachment19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN11CAttachment15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <524d5eb> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:882 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN11CAttachment32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CAttachment *); /* linkage=_ZN11CAttachment38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN11CAttachment20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN11CAttachment22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CAttachment  *); /* linkage=_ZNK11CAttachment21Schema_DynamicBindingEv */
	class CAttachment * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN11CAttachment32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferSave(const class CAttachment  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CAttachment15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CAttachment *, class CKV3TransferLoadContext *); /* linkage=_ZN11CAttachment15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CAttachment(const class CAttachment  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CAttachment27KV3TransferSave_CAttachmentEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CAttachment(class CAttachment *, class CKV3TransferLoadContext *); /* linkage=_ZN11CAttachment27KV3TransferLoad_CAttachmentEP23CKV3TransferLoadContext */
	void CAttachment(class CAttachment *); /* linkage=_ZN11CAttachmentC4Ev */
	/* <4cdbb11> modellib/rendermesh.cpp:613 */
	void SetName(class CAttachment *, const char  *); /* linkage=_ZN11CAttachment7SetNameEPKc */
	bool AddInfluence(class CAttachment *, const char  *, const class Vector  &, const class Quaternion  &, float, bool); /* linkage=_ZN11CAttachment12AddInfluenceEPKcRK6VectorRK10Quaternionfb */
	void TransferPostLoadFn(class CAttachment *, class CKV3TransferLoadContext *); /* linkage=_ZN11CAttachment18TransferPostLoadFnEP23CKV3TransferLoadContext */
	void CAttachment(class CAttachment *, const class CAttachment  &); /* linkage=_ZN11CAttachmentC4ERKS_ */
	void ~CAttachment(class CAttachment *); /* linkage=_ZN11CAttachmentD4Ev */
	class CAttachment & operator=(class CAttachment *, const class CAttachment  &); /* linkage=_ZN11CAttachmentaSERKS_ */
};

// <04C71C73> ../public/modellib/rendermesh.h:321
// member functions: 39
// member variables: 8
// static member variable: 1
// class size: 136
class CAttachment {
	/* ../public/modellib/rendermesh.h:324 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/rendermesh.h:323 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/rendermesh.h:323 */
	CAttachment* Schema_MarkHelperFn(void);
	/* ../public/modellib/rendermesh.h:323 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/rendermesh.h:323 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/rendermesh.h:323 */
	void Schema_CompileTimeVerificationFunction(CAttachment* );
	/* ../public/modellib/rendermesh.h:323 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/rendermesh.h:323 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/rendermesh.h:323 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAttachment* );
	/* ../public/modellib/rendermesh.h:324 */
	CAttachment* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/rendermesh.h:324 */
	void KV3TransferSave(const CAttachment* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:324 */
	void KV3TransferLoad(CAttachment* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:324 */
	void KV3TransferSave_CAttachment(const CAttachment* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:324 */
	void KV3TransferLoad_CAttachment(CAttachment* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:328 */
	void CAttachment(CAttachment* );
	/* ../public/modellib/rendermesh.h:330 */
	void SetName(CAttachment* , const char* );
	/* ../public/modellib/rendermesh.h:331 */
	bool AddInfluence(CAttachment* , const char* , const Vector& , const Quaternion& , float, bool);
	CUtlString m_name; /* 0 8 */
	CUtlString m_influenceNames[3]; /* 8 24 */
	Vector m_vInfluenceOffsets[3]; /* 32 36 */
	Quaternion m_vInfluenceRotations[3]; /* 68 48 */
	float m_influenceWeights[3]; /* 116 12 */
	bool m_bInfluenceRootTransform[3]; /* 128 3 */
	uint8 m_nInfluences; /* 131 1 */
	bool m_bIgnoreRotation; /* 132 1 */
	/* ../public/modellib/rendermesh.h:344 */
	void TransferPostLoadFn(CAttachment* , CKV3TransferLoadContext* );
	void CAttachment(CAttachment* , const CAttachment& );
	void ~CAttachment(CAttachment* );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN11CAttachment17GetPrimaryBindingEv */
	class CAttachment * Schema_MarkHelperFn(void); /* linkage=_ZN11CAttachment19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN11CAttachment15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <524d5eb> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:882 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN11CAttachment32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CAttachment *); /* linkage=_ZN11CAttachment38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN11CAttachment20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN11CAttachment22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CAttachment  *); /* linkage=_ZNK11CAttachment21Schema_DynamicBindingEv */
	class CAttachment * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN11CAttachment32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferSave(const class CAttachment  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CAttachment15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CAttachment *, class CKV3TransferLoadContext *); /* linkage=_ZN11CAttachment15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CAttachment(const class CAttachment  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CAttachment27KV3TransferSave_CAttachmentEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CAttachment(class CAttachment *, class CKV3TransferLoadContext *); /* linkage=_ZN11CAttachment27KV3TransferLoad_CAttachmentEP23CKV3TransferLoadContext */
	void CAttachment(class CAttachment *); /* linkage=_ZN11CAttachmentC4Ev */
	/* <4cdbb11> modellib/rendermesh.cpp:613 */
	void SetName(class CAttachment *, const char  *); /* linkage=_ZN11CAttachment7SetNameEPKc */
	bool AddInfluence(class CAttachment *, const char  *, const class Vector  &, const class Quaternion  &, float, bool); /* linkage=_ZN11CAttachment12AddInfluenceEPKcRK6VectorRK10Quaternionfb */
	void TransferPostLoadFn(class CAttachment *, class CKV3TransferLoadContext *); /* linkage=_ZN11CAttachment18TransferPostLoadFnEP23CKV3TransferLoadContext */
	void CAttachment(class CAttachment *, const class CAttachment  &); /* linkage=_ZN11CAttachmentC4ERKS_ */
	void ~CAttachment(class CAttachment *); /* linkage=_ZN11CAttachmentD4Ev */
	class CAttachment & operator=(class CAttachment *, const class CAttachment  &); /* linkage=_ZN11CAttachmentaSERKS_ */
};

// <051F1EDE> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:321
// member functions: 39
// member variables: 8
// static member variable: 1
// class size: 136
class CAttachment {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:323 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:323 */
	CAttachment* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:323 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:323 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:323 */
	void Schema_CompileTimeVerificationFunction(CAttachment* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:323 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:323 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:323 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAttachment* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:324 */
	CAttachment* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:324 */
	void KV3TransferSave(const CAttachment* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:324 */
	void KV3TransferLoad(CAttachment* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:324 */
	void KV3TransferSave_CAttachment(const CAttachment* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:324 */
	void KV3TransferLoad_CAttachment(CAttachment* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:328 */
	void CAttachment(CAttachment* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:330 */
	void SetName(CAttachment* , const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:331 */
	bool AddInfluence(CAttachment* , const char* , const Vector& , const Quaternion& , float, bool);
	CUtlString m_name; /* 0 8 */
	CUtlString m_influenceNames[3]; /* 8 24 */
	Vector m_vInfluenceOffsets[3]; /* 32 36 */
	Quaternion m_vInfluenceRotations[3]; /* 68 48 */
	float m_influenceWeights[3]; /* 116 12 */
	bool m_bInfluenceRootTransform[3]; /* 128 3 */
	uint8 m_nInfluences; /* 131 1 */
	bool m_bIgnoreRotation; /* 132 1 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:344 */
	void TransferPostLoadFn(CAttachment* , CKV3TransferLoadContext* );
	void ~CAttachment(CAttachment* );
	CAttachment& operator=(CAttachment* , const CAttachment& );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN11CAttachment17GetPrimaryBindingEv */
	class CAttachment * Schema_MarkHelperFn(void); /* linkage=_ZN11CAttachment19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN11CAttachment15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <524d5eb> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:882 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN11CAttachment32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CAttachment *); /* linkage=_ZN11CAttachment38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN11CAttachment20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN11CAttachment22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CAttachment  *); /* linkage=_ZNK11CAttachment21Schema_DynamicBindingEv */
	class CAttachment * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN11CAttachment32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferSave(const class CAttachment  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CAttachment15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CAttachment *, class CKV3TransferLoadContext *); /* linkage=_ZN11CAttachment15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CAttachment(const class CAttachment  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CAttachment27KV3TransferSave_CAttachmentEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CAttachment(class CAttachment *, class CKV3TransferLoadContext *); /* linkage=_ZN11CAttachment27KV3TransferLoad_CAttachmentEP23CKV3TransferLoadContext */
	void CAttachment(class CAttachment *); /* linkage=_ZN11CAttachmentC4Ev */
	/* <4cdbb11> modellib/rendermesh.cpp:613 */
	void SetName(class CAttachment *, const char  *); /* linkage=_ZN11CAttachment7SetNameEPKc */
	bool AddInfluence(class CAttachment *, const char  *, const class Vector  &, const class Quaternion  &, float, bool); /* linkage=_ZN11CAttachment12AddInfluenceEPKcRK6VectorRK10Quaternionfb */
	void TransferPostLoadFn(class CAttachment *, class CKV3TransferLoadContext *); /* linkage=_ZN11CAttachment18TransferPostLoadFnEP23CKV3TransferLoadContext */
	void CAttachment(class CAttachment *, const class CAttachment  &); /* linkage=_ZN11CAttachmentC4ERKS_ */
	void ~CAttachment(class CAttachment *); /* linkage=_ZN11CAttachmentD4Ev */
	class CAttachment & operator=(class CAttachment *, const class CAttachment  &); /* linkage=_ZN11CAttachmentaSERKS_ */
};

// <0524A94E> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:323
inline void CAttachment::Schema_DynamicBinding()
{
} /* size: 0 */

// <052083E1> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:328
void CAttachment::CAttachment()
{
} /* size: 0 */

// <0522B911> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:362
inline void CHitBox::operator=(const CHitBox &)
{
} /* size: 0 */

// <0522B8FA> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:362
void CHitBox::~CHitBox()
{
} /* size: 0 */

// <0522B8DD> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:362
inline void CHitBox::~CHitBox()
{
} /* size: 0 */

// <04CB9355> ../public/modellib/rendermesh.h:362
void CHitBox::CHitBox(const CHitBox &)
{
} /* size: 0 */

// <04CB9333> ../public/modellib/rendermesh.h:362
inline void CHitBox::CHitBox(const CHitBox &)
{
} /* size: 0 */

// <0117AEAF> ../public/modellib/rendermesh.h:362
// member functions: 53
// member variables: 17
// static member variable: 1
// class size: 208
class CHitBox {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/rendermesh.h:364 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/rendermesh.h:364 */
	CHitBox* Schema_MarkHelperFn(void);
	/* ../public/modellib/rendermesh.h:364 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/rendermesh.h:364 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/rendermesh.h:364 */
	void Schema_CompileTimeVerificationFunction(CHitBox* );
	/* ../public/modellib/rendermesh.h:364 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/rendermesh.h:364 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/rendermesh.h:364 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CHitBox* );
	/* ../public/modellib/rendermesh.h:365 */
	CHitBox* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/rendermesh.h:365 */
	void KV3TransferSave(const CHitBox* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:365 */
	void KV3TransferLoad(CHitBox* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:365 */
	void KV3TransferSave_CHitBox(const CHitBox* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:365 */
	void KV3TransferLoad_CHitBox(CHitBox* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:369 */
	void CHitBox(CHitBox* );
	/* ../public/modellib/rendermesh.h:386 */
	const char* GetName(const CHitBox* );
	/* ../public/modellib/rendermesh.h:391 */
	void SetName(CHitBox* , const char* );
	/* ../public/modellib/rendermesh.h:396 */
	void SetBoneName(CHitBox* , const char* );
	/* ../public/modellib/rendermesh.h:402 */
	void SetForcedTransform(CHitBox* , const matrix3x4_t& );
	/* ../public/modellib/rendermesh.h:407 */
	void SetForcedTransform(CHitBox* , const CTransform& );
	/* ../public/modellib/rendermesh.h:414 */
	bool HasTag(const CHitBox* , CUtlStringToken);
	/* ../public/modellib/rendermesh.h:419 */
	bool HasTag(const CHitBox* , uint32);
	/* ../public/modellib/rendermesh.h:430 */
	bool AddTag(CHitBox* , const char* );
	/* ../public/modellib/rendermesh.h:436 */
	bool AddTag(CHitBox* , uint32);
	/* ../public/modellib/rendermesh.h:453 */
	void SetTagsFromString(CHitBox* , const char* );
	/* ../public/modellib/rendermesh.h:455 */
	const char* GetTag(CHitBox* , int);
	CTransform m_forcedTransform __attribute__((__aligned__(16))); /* 0 32 */
	Vector m_vMinBounds; /* 32 12 */
	Vector m_vMaxBounds; /* 44 12 */
	CUtlString m_name; /* 56 8 */
	CUtlString m_sSurfaceProperty; /* 64 8 */
	CUtlString m_sBoneName; /* 72 8 */
	float m_flShapeRadius; /* 80 4 */
	uint32 m_nBoneNameHash; /* 84 4 */
	Color m_cRenderColor; /* 88 4 */
	uint16 m_nHitBoxIndex; /* 92 2 */
	uint8 m_nShapeType; /* 94 1 */
	bool m_bForcedTransform; /* 95 1 */
	bool m_bTranslationOnly; /* 96 1 */
	bool m_bVisible; /* 97 1 */
	bool m_bSelected; /* 98 1 */
	uint32 m_nHitboxTags[16]; /* 100 64 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_HitboxTags; /* 168 32 */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN7CHitBox17GetPrimaryBindingEv */
	class CHitBox * Schema_MarkHelperFn(void); /* linkage=_ZN7CHitBox19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN7CHitBox15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <524d6a5> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1029 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN7CHitBox32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CHitBox *); /* linkage=_ZN7CHitBox38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN7CHitBox20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN7CHitBox22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CHitBox  *); /* linkage=_ZNK7CHitBox21Schema_DynamicBindingEv */
	class CHitBox * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN7CHitBox32KV3TransferAllocateClassInstanceEPKc */
	/* <524d969> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1037 */
	void KV3TransferSave(const class CHitBox  *, class CKV3TransferSaveContext *); /* linkage=_ZNK7CHitBox15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <524eaf1> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1061 */
	void KV3TransferLoad(class CHitBox *, class CKV3TransferLoadContext *); /* linkage=_ZN7CHitBox15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CHitBox(const class CHitBox  *, class CKV3TransferSaveContext *); /* linkage=_ZNK7CHitBox23KV3TransferSave_CHitBoxEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CHitBox(class CHitBox *, class CKV3TransferLoadContext *); /* linkage=_ZN7CHitBox23KV3TransferLoad_CHitBoxEP23CKV3TransferLoadContext */
	void CHitBox(class CHitBox *); /* linkage=_ZN7CHitBoxC4Ev */
	const char  * GetName(const class CHitBox  *); /* linkage=_ZNK7CHitBox7GetNameEv */
	void SetName(class CHitBox *, const char  *); /* linkage=_ZN7CHitBox7SetNameEPKc */
	void SetBoneName(class CHitBox *, const char  *); /* linkage=_ZN7CHitBox11SetBoneNameEPKc */
	void SetForcedTransform(class CHitBox *, const class matrix3x4_t  &); /* linkage=_ZN7CHitBox18SetForcedTransformERK11matrix3x4_t */
	void SetForcedTransform(class CHitBox *, const class CTransform  &); /* linkage=_ZN7CHitBox18SetForcedTransformERK10CTransform */
	bool HasTag(const class CHitBox  *, class CUtlStringToken); /* linkage=_ZNK7CHitBox6HasTagE15CUtlStringToken */
	bool HasTag(const class CHitBox  *, uint32); /* linkage=_ZNK7CHitBox6HasTagEj */
	bool AddTag(class CHitBox *, const char  *); /* linkage=_ZN7CHitBox6AddTagEPKc */
	bool AddTag(class CHitBox *, uint32); /* linkage=_ZN7CHitBox6AddTagEj */
	void SetTagsFromString(class CHitBox *, const char  *); /* linkage=_ZN7CHitBox17SetTagsFromStringEPKc */
	const char  * GetTag(class CHitBox *, int); /* linkage=_ZN7CHitBox6GetTagEi */
	void ~CHitBox(class CHitBox *); /* linkage=_ZN7CHitBoxD4Ev */
	void CHitBox(class CHitBox *, const class CHitBox  &); /* linkage=_ZN7CHitBoxC4ERKS_ */
	class CHitBox & operator=(class CHitBox *, const class CHitBox  &); /* linkage=_ZN7CHitBoxaSERKS_ */
} __attribute__((__aligned__(16)));

// <04C71FDE> ../public/modellib/rendermesh.h:362
// member functions: 55
// member variables: 17
// static member variable: 1
// class size: 208
class CHitBox {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/rendermesh.h:364 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/rendermesh.h:364 */
	CHitBox* Schema_MarkHelperFn(void);
	/* ../public/modellib/rendermesh.h:364 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/rendermesh.h:364 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/rendermesh.h:364 */
	void Schema_CompileTimeVerificationFunction(CHitBox* );
	/* ../public/modellib/rendermesh.h:364 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/rendermesh.h:364 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/rendermesh.h:364 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CHitBox* );
	/* ../public/modellib/rendermesh.h:365 */
	CHitBox* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/rendermesh.h:365 */
	void KV3TransferSave(const CHitBox* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:365 */
	void KV3TransferLoad(CHitBox* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:365 */
	void KV3TransferSave_CHitBox(const CHitBox* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:365 */
	void KV3TransferLoad_CHitBox(CHitBox* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:369 */
	void CHitBox(CHitBox* );
	/* ../public/modellib/rendermesh.h:386 */
	const char* GetName(const CHitBox* );
	/* ../public/modellib/rendermesh.h:391 */
	void SetName(CHitBox* , const char* );
	/* ../public/modellib/rendermesh.h:396 */
	void SetBoneName(CHitBox* , const char* );
	/* ../public/modellib/rendermesh.h:402 */
	void SetForcedTransform(CHitBox* , const matrix3x4_t& );
	/* ../public/modellib/rendermesh.h:407 */
	void SetForcedTransform(CHitBox* , const CTransform& );
	/* ../public/modellib/rendermesh.h:414 */
	bool HasTag(const CHitBox* , CUtlStringToken);
	/* ../public/modellib/rendermesh.h:419 */
	bool HasTag(const CHitBox* , uint32);
	/* ../public/modellib/rendermesh.h:430 */
	bool AddTag(CHitBox* , const char* );
	/* ../public/modellib/rendermesh.h:436 */
	bool AddTag(CHitBox* , uint32);
	/* ../public/modellib/rendermesh.h:453 */
	void SetTagsFromString(CHitBox* , const char* );
	/* ../public/modellib/rendermesh.h:455 */
	const char* GetTag(CHitBox* , int);
	CTransform m_forcedTransform __attribute__((__aligned__(16))); /* 0 32 */
	Vector m_vMinBounds; /* 32 12 */
	Vector m_vMaxBounds; /* 44 12 */
	CUtlString m_name; /* 56 8 */
	CUtlString m_sSurfaceProperty; /* 64 8 */
	CUtlString m_sBoneName; /* 72 8 */
	float m_flShapeRadius; /* 80 4 */
	uint32 m_nBoneNameHash; /* 84 4 */
	Color m_cRenderColor; /* 88 4 */
	uint16 m_nHitBoxIndex; /* 92 2 */
	uint8 m_nShapeType; /* 94 1 */
	bool m_bForcedTransform; /* 95 1 */
	bool m_bTranslationOnly; /* 96 1 */
	bool m_bVisible; /* 97 1 */
	bool m_bSelected; /* 98 1 */
	uint32 m_nHitboxTags[16]; /* 100 64 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_HitboxTags; /* 168 32 */
	void ~CHitBox(CHitBox* );
	void CHitBox(CHitBox* , const CHitBox& );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN7CHitBox17GetPrimaryBindingEv */
	class CHitBox * Schema_MarkHelperFn(void); /* linkage=_ZN7CHitBox19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN7CHitBox15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <524d6a5> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1029 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN7CHitBox32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CHitBox *); /* linkage=_ZN7CHitBox38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN7CHitBox20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN7CHitBox22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CHitBox  *); /* linkage=_ZNK7CHitBox21Schema_DynamicBindingEv */
	class CHitBox * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN7CHitBox32KV3TransferAllocateClassInstanceEPKc */
	/* <524d969> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1037 */
	void KV3TransferSave(const class CHitBox  *, class CKV3TransferSaveContext *); /* linkage=_ZNK7CHitBox15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <524eaf1> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1061 */
	void KV3TransferLoad(class CHitBox *, class CKV3TransferLoadContext *); /* linkage=_ZN7CHitBox15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CHitBox(const class CHitBox  *, class CKV3TransferSaveContext *); /* linkage=_ZNK7CHitBox23KV3TransferSave_CHitBoxEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CHitBox(class CHitBox *, class CKV3TransferLoadContext *); /* linkage=_ZN7CHitBox23KV3TransferLoad_CHitBoxEP23CKV3TransferLoadContext */
	void CHitBox(class CHitBox *); /* linkage=_ZN7CHitBoxC4Ev */
	const char  * GetName(const class CHitBox  *); /* linkage=_ZNK7CHitBox7GetNameEv */
	void SetName(class CHitBox *, const char  *); /* linkage=_ZN7CHitBox7SetNameEPKc */
	void SetBoneName(class CHitBox *, const char  *); /* linkage=_ZN7CHitBox11SetBoneNameEPKc */
	void SetForcedTransform(class CHitBox *, const class matrix3x4_t  &); /* linkage=_ZN7CHitBox18SetForcedTransformERK11matrix3x4_t */
	void SetForcedTransform(class CHitBox *, const class CTransform  &); /* linkage=_ZN7CHitBox18SetForcedTransformERK10CTransform */
	bool HasTag(const class CHitBox  *, class CUtlStringToken); /* linkage=_ZNK7CHitBox6HasTagE15CUtlStringToken */
	bool HasTag(const class CHitBox  *, uint32); /* linkage=_ZNK7CHitBox6HasTagEj */
	bool AddTag(class CHitBox *, const char  *); /* linkage=_ZN7CHitBox6AddTagEPKc */
	bool AddTag(class CHitBox *, uint32); /* linkage=_ZN7CHitBox6AddTagEj */
	void SetTagsFromString(class CHitBox *, const char  *); /* linkage=_ZN7CHitBox17SetTagsFromStringEPKc */
	const char  * GetTag(class CHitBox *, int); /* linkage=_ZN7CHitBox6GetTagEi */
	void ~CHitBox(class CHitBox *); /* linkage=_ZN7CHitBoxD4Ev */
	void CHitBox(class CHitBox *, const class CHitBox  &); /* linkage=_ZN7CHitBoxC4ERKS_ */
	class CHitBox & operator=(class CHitBox *, const class CHitBox  &); /* linkage=_ZN7CHitBoxaSERKS_ */
} __attribute__((__aligned__(16)));

// <04F1EB78> ../public/modellib/rendermesh.h:362
// member functions: 55
// member variables: 17
// static member variable: 1
// class size: 208
class CHitBox {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/rendermesh.h:364 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/rendermesh.h:364 */
	CHitBox* Schema_MarkHelperFn(void);
	/* ../public/modellib/rendermesh.h:364 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/rendermesh.h:364 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/rendermesh.h:364 */
	void Schema_CompileTimeVerificationFunction(CHitBox* );
	/* ../public/modellib/rendermesh.h:364 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/rendermesh.h:364 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/rendermesh.h:364 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CHitBox* );
	/* ../public/modellib/rendermesh.h:365 */
	CHitBox* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/rendermesh.h:365 */
	void KV3TransferSave(const CHitBox* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:365 */
	void KV3TransferLoad(CHitBox* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:365 */
	void KV3TransferSave_CHitBox(const CHitBox* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:365 */
	void KV3TransferLoad_CHitBox(CHitBox* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:369 */
	void CHitBox(CHitBox* );
	/* ../public/modellib/rendermesh.h:386 */
	const char* GetName(const CHitBox* );
	/* ../public/modellib/rendermesh.h:391 */
	void SetName(CHitBox* , const char* );
	/* ../public/modellib/rendermesh.h:396 */
	void SetBoneName(CHitBox* , const char* );
	/* ../public/modellib/rendermesh.h:402 */
	void SetForcedTransform(CHitBox* , const matrix3x4_t& );
	/* ../public/modellib/rendermesh.h:407 */
	void SetForcedTransform(CHitBox* , const CTransform& );
	/* ../public/modellib/rendermesh.h:414 */
	bool HasTag(const CHitBox* , CUtlStringToken);
	/* ../public/modellib/rendermesh.h:419 */
	bool HasTag(const CHitBox* , uint32);
	/* ../public/modellib/rendermesh.h:430 */
	bool AddTag(CHitBox* , const char* );
	/* ../public/modellib/rendermesh.h:436 */
	bool AddTag(CHitBox* , uint32);
	/* ../public/modellib/rendermesh.h:453 */
	void SetTagsFromString(CHitBox* , const char* );
	/* ../public/modellib/rendermesh.h:455 */
	const char* GetTag(CHitBox* , int);
	CTransform m_forcedTransform __attribute__((__aligned__(16))); /* 0 32 */
	Vector m_vMinBounds; /* 32 12 */
	Vector m_vMaxBounds; /* 44 12 */
	CUtlString m_name; /* 56 8 */
	CUtlString m_sSurfaceProperty; /* 64 8 */
	CUtlString m_sBoneName; /* 72 8 */
	float m_flShapeRadius; /* 80 4 */
	uint32 m_nBoneNameHash; /* 84 4 */
	Color m_cRenderColor; /* 88 4 */
	uint16 m_nHitBoxIndex; /* 92 2 */
	uint8 m_nShapeType; /* 94 1 */
	bool m_bForcedTransform; /* 95 1 */
	bool m_bTranslationOnly; /* 96 1 */
	bool m_bVisible; /* 97 1 */
	bool m_bSelected; /* 98 1 */
	uint32 m_nHitboxTags[16]; /* 100 64 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_HitboxTags; /* 168 32 */
	CHitBox& operator=(CHitBox* , const CHitBox& );
	void ~CHitBox(CHitBox* );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN7CHitBox17GetPrimaryBindingEv */
	class CHitBox * Schema_MarkHelperFn(void); /* linkage=_ZN7CHitBox19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN7CHitBox15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <524d6a5> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1029 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN7CHitBox32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CHitBox *); /* linkage=_ZN7CHitBox38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN7CHitBox20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN7CHitBox22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CHitBox  *); /* linkage=_ZNK7CHitBox21Schema_DynamicBindingEv */
	class CHitBox * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN7CHitBox32KV3TransferAllocateClassInstanceEPKc */
	/* <524d969> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1037 */
	void KV3TransferSave(const class CHitBox  *, class CKV3TransferSaveContext *); /* linkage=_ZNK7CHitBox15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <524eaf1> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1061 */
	void KV3TransferLoad(class CHitBox *, class CKV3TransferLoadContext *); /* linkage=_ZN7CHitBox15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CHitBox(const class CHitBox  *, class CKV3TransferSaveContext *); /* linkage=_ZNK7CHitBox23KV3TransferSave_CHitBoxEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CHitBox(class CHitBox *, class CKV3TransferLoadContext *); /* linkage=_ZN7CHitBox23KV3TransferLoad_CHitBoxEP23CKV3TransferLoadContext */
	void CHitBox(class CHitBox *); /* linkage=_ZN7CHitBoxC4Ev */
	const char  * GetName(const class CHitBox  *); /* linkage=_ZNK7CHitBox7GetNameEv */
	void SetName(class CHitBox *, const char  *); /* linkage=_ZN7CHitBox7SetNameEPKc */
	void SetBoneName(class CHitBox *, const char  *); /* linkage=_ZN7CHitBox11SetBoneNameEPKc */
	void SetForcedTransform(class CHitBox *, const class matrix3x4_t  &); /* linkage=_ZN7CHitBox18SetForcedTransformERK11matrix3x4_t */
	void SetForcedTransform(class CHitBox *, const class CTransform  &); /* linkage=_ZN7CHitBox18SetForcedTransformERK10CTransform */
	bool HasTag(const class CHitBox  *, class CUtlStringToken); /* linkage=_ZNK7CHitBox6HasTagE15CUtlStringToken */
	bool HasTag(const class CHitBox  *, uint32); /* linkage=_ZNK7CHitBox6HasTagEj */
	bool AddTag(class CHitBox *, const char  *); /* linkage=_ZN7CHitBox6AddTagEPKc */
	bool AddTag(class CHitBox *, uint32); /* linkage=_ZN7CHitBox6AddTagEj */
	void SetTagsFromString(class CHitBox *, const char  *); /* linkage=_ZN7CHitBox17SetTagsFromStringEPKc */
	const char  * GetTag(class CHitBox *, int); /* linkage=_ZN7CHitBox6GetTagEi */
	void ~CHitBox(class CHitBox *); /* linkage=_ZN7CHitBoxD4Ev */
	void CHitBox(class CHitBox *, const class CHitBox  &); /* linkage=_ZN7CHitBoxC4ERKS_ */
	class CHitBox & operator=(class CHitBox *, const class CHitBox  &); /* linkage=_ZN7CHitBoxaSERKS_ */
} __attribute__((__aligned__(16)));

// <051F2238> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:362
// member functions: 55
// member variables: 17
// static member variable: 1
// class size: 208
class CHitBox {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:365 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:364 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:364 */
	CHitBox* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:364 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:364 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:364 */
	void Schema_CompileTimeVerificationFunction(CHitBox* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:364 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:364 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:364 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CHitBox* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:365 */
	CHitBox* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:365 */
	void KV3TransferSave(const CHitBox* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:365 */
	void KV3TransferLoad(CHitBox* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:365 */
	void KV3TransferSave_CHitBox(const CHitBox* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:365 */
	void KV3TransferLoad_CHitBox(CHitBox* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:369 */
	void CHitBox(CHitBox* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:386 */
	const char* GetName(const CHitBox* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:391 */
	void SetName(CHitBox* , const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:396 */
	void SetBoneName(CHitBox* , const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:402 */
	void SetForcedTransform(CHitBox* , const matrix3x4_t& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:407 */
	void SetForcedTransform(CHitBox* , const CTransform& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:414 */
	bool HasTag(const CHitBox* , CUtlStringToken);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:419 */
	bool HasTag(const CHitBox* , uint32);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:430 */
	bool AddTag(CHitBox* , const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:436 */
	bool AddTag(CHitBox* , uint32);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:453 */
	void SetTagsFromString(CHitBox* , const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:455 */
	const char* GetTag(CHitBox* , int);
	CTransform m_forcedTransform __attribute__((__aligned__(16))); /* 0 32 */
	Vector m_vMinBounds; /* 32 12 */
	Vector m_vMaxBounds; /* 44 12 */
	CUtlString m_name; /* 56 8 */
	CUtlString m_sSurfaceProperty; /* 64 8 */
	CUtlString m_sBoneName; /* 72 8 */
	float m_flShapeRadius; /* 80 4 */
	uint32 m_nBoneNameHash; /* 84 4 */
	Color m_cRenderColor; /* 88 4 */
	uint16 m_nHitBoxIndex; /* 92 2 */
	uint8 m_nShapeType; /* 94 1 */
	bool m_bForcedTransform; /* 95 1 */
	bool m_bTranslationOnly; /* 96 1 */
	bool m_bVisible; /* 97 1 */
	bool m_bSelected; /* 98 1 */
	uint32 m_nHitboxTags[16]; /* 100 64 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_HitboxTags; /* 168 32 */
	void ~CHitBox(CHitBox* );
	CHitBox& operator=(CHitBox* , const CHitBox& );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN7CHitBox17GetPrimaryBindingEv */
	class CHitBox * Schema_MarkHelperFn(void); /* linkage=_ZN7CHitBox19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN7CHitBox15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <524d6a5> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1029 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN7CHitBox32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CHitBox *); /* linkage=_ZN7CHitBox38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN7CHitBox20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN7CHitBox22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CHitBox  *); /* linkage=_ZNK7CHitBox21Schema_DynamicBindingEv */
	class CHitBox * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN7CHitBox32KV3TransferAllocateClassInstanceEPKc */
	/* <524d969> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1037 */
	void KV3TransferSave(const class CHitBox  *, class CKV3TransferSaveContext *); /* linkage=_ZNK7CHitBox15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <524eaf1> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1061 */
	void KV3TransferLoad(class CHitBox *, class CKV3TransferLoadContext *); /* linkage=_ZN7CHitBox15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CHitBox(const class CHitBox  *, class CKV3TransferSaveContext *); /* linkage=_ZNK7CHitBox23KV3TransferSave_CHitBoxEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CHitBox(class CHitBox *, class CKV3TransferLoadContext *); /* linkage=_ZN7CHitBox23KV3TransferLoad_CHitBoxEP23CKV3TransferLoadContext */
	void CHitBox(class CHitBox *); /* linkage=_ZN7CHitBoxC4Ev */
	const char  * GetName(const class CHitBox  *); /* linkage=_ZNK7CHitBox7GetNameEv */
	void SetName(class CHitBox *, const char  *); /* linkage=_ZN7CHitBox7SetNameEPKc */
	void SetBoneName(class CHitBox *, const char  *); /* linkage=_ZN7CHitBox11SetBoneNameEPKc */
	void SetForcedTransform(class CHitBox *, const class matrix3x4_t  &); /* linkage=_ZN7CHitBox18SetForcedTransformERK11matrix3x4_t */
	void SetForcedTransform(class CHitBox *, const class CTransform  &); /* linkage=_ZN7CHitBox18SetForcedTransformERK10CTransform */
	bool HasTag(const class CHitBox  *, class CUtlStringToken); /* linkage=_ZNK7CHitBox6HasTagE15CUtlStringToken */
	bool HasTag(const class CHitBox  *, uint32); /* linkage=_ZNK7CHitBox6HasTagEj */
	bool AddTag(class CHitBox *, const char  *); /* linkage=_ZN7CHitBox6AddTagEPKc */
	bool AddTag(class CHitBox *, uint32); /* linkage=_ZN7CHitBox6AddTagEj */
	void SetTagsFromString(class CHitBox *, const char  *); /* linkage=_ZN7CHitBox17SetTagsFromStringEPKc */
	const char  * GetTag(class CHitBox *, int); /* linkage=_ZN7CHitBox6GetTagEi */
	void ~CHitBox(class CHitBox *); /* linkage=_ZN7CHitBoxD4Ev */
	void CHitBox(class CHitBox *, const class CHitBox  &); /* linkage=_ZN7CHitBoxC4ERKS_ */
	class CHitBox & operator=(class CHitBox *, const class CHitBox  &); /* linkage=_ZN7CHitBoxaSERKS_ */
} __attribute__((__aligned__(16)));

// <0524A929> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:364
inline void CHitBox::Schema_DynamicBinding()
{
} /* size: 0 */

// <0524A8DE> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:369
void CHitBox::CHitBox()
{
} /* size: 0 */

// <0524A8C5> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:369
inline void CHitBox::CHitBox()
{
} /* size: 0 */

// <04CD998E> ../public/modellib/rendermesh.h:391
inline void CHitBox::SetName(const char* pName)
{
} /* size: 0 */

// <04CD995B> ../public/modellib/rendermesh.h:419
// variable: 1
inline void CHitBox::HasTag(uint32 tagToken)
{
	{
		int i; // 421
	}
} /* size: 0 */

// <04CD9935> ../public/modellib/rendermesh.h:430
inline void CHitBox::AddTag(const char* tagToken)
{
} /* size: 0 */

// <04CD9902> ../public/modellib/rendermesh.h:436
// variable: 1
inline void CHitBox::AddTag(uint32 tagToken)
{
	{
		int i; // 441
	}
} /* size: 0 */

// <01351184> ../public/modellib/rendermesh.h:455
inline void CHitBox::GetTag(int index)
{
} /* size: 0 */

// <0522009D> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:489
inline void CHitBoxSet::operator=(const CHitBoxSet &)
{
} /* size: 0 */

// <0521F94E> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:489
// variables: 2
// function calls: 33
void CHitBoxSet::~CHitBoxSet()
{
	CUtlString::~CUtlString(); // 489
	{
		int i; // 1721
		CUtlMemory<CHitBox, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::Element(
			int i);  // 1723
		{
			int i; // 1721
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1723
			CUtlString::~CUtlString(); // 1526
			Destruct<CUtlString>(CUtlString* pMemory); // 1723
		}
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
		CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlString, int>::Purge(); // 903
		CUtlMemory<CUtlString, int>::Purge(); // 1799
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
		ValidateAlignment<CUtlString>(void); // 508
		CUtlMemory<CUtlString, int>::Purge(); // 510
		CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 362
		CUtlString::~CUtlString(); // 362
		CUtlString::~CUtlString(); // 362
		CUtlString::~CUtlString(); // 362
		CHitBox::~CHitBox(); // 1526
		Destruct<CHitBox>(CHitBox* pMemory); // 1723
	}
	CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::RemoveAll(); // 1798
	CUtlMemory<CHitBox, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHitBox, int>::Purge(); // 903
	CUtlMemory<CHitBox, int>::Purge(); // 1799
	CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::Purge(); // 560
	ValidateAlignment<CHitBox>(void); // 508
	CUtlMemory<CHitBox, int>::Purge(); // 510
	CUtlMemory<CHitBox, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CHitBox, CUtlMemory<CHitBox, int> >::~CUtlVector(); // 489
	CUtlString::~CUtlString(); // 489
} /* size: 355, inline expansions: 12 (1128 bytes) */

// <0521F931> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:489
inline void CHitBoxSet::~CHitBoxSet()
{
} /* size: 0 */

// <04CB8D4E> ../public/modellib/rendermesh.h:489
void CHitBoxSet::~CHitBoxSet()
{
} /* size: 0 */

// <0117B32A> ../public/modellib/rendermesh.h:489
// member functions: 40
// member variables: 4
// static member variable: 1
// class size: 56
class CHitBoxSet {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/rendermesh.h:491 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/rendermesh.h:491 */
	CHitBoxSet* Schema_MarkHelperFn(void);
	/* ../public/modellib/rendermesh.h:491 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/rendermesh.h:491 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/rendermesh.h:491 */
	void Schema_CompileTimeVerificationFunction(CHitBoxSet* );
	/* ../public/modellib/rendermesh.h:491 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/rendermesh.h:491 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/rendermesh.h:491 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CHitBoxSet* );
	/* ../public/modellib/rendermesh.h:492 */
	CHitBoxSet* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/rendermesh.h:492 */
	void KV3TransferSave(const CHitBoxSet* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:492 */
	void KV3TransferLoad(CHitBoxSet* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:492 */
	void KV3TransferSave_CHitBoxSet(const CHitBoxSet* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:492 */
	void KV3TransferLoad_CHitBoxSet(CHitBoxSet* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:496 */
	void CHitBoxSet(CHitBoxSet* );
	/* ../public/modellib/rendermesh.h:497 */
	void CHitBoxSet(CHitBoxSet* , const CHitBoxSet& );
	/* ../public/modellib/rendermesh.h:499 */
	void SetName(CHitBoxSet* , const char* );
	/* ../public/modellib/rendermesh.h:501 */
	CHitBox* AddHitBox(CHitBoxSet* , const char* );
	/* ../public/modellib/rendermesh.h:503 */
	int numhitboxes(const CHitBoxSet* );
	/* ../public/modellib/rendermesh.h:504 */
	const CHitBox* pHitbox(const CHitBoxSet* , int);
	CUtlString m_name; /* 0 8 */
	uint32 m_nNameHash; /* 8 4 */
	CUtlVector<CHitBox, CUtlMemory<CHitBox, int> > m_HitBoxes; /* 16 32 */
	CUtlString m_SourceFilename; /* 48 8 */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN10CHitBoxSet17GetPrimaryBindingEv */
	class CHitBoxSet * Schema_MarkHelperFn(void); /* linkage=_ZN10CHitBoxSet19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN10CHitBoxSet15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <524d6f4> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1156 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN10CHitBoxSet32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CHitBoxSet *); /* linkage=_ZN10CHitBoxSet38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN10CHitBoxSet20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN10CHitBoxSet22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CHitBoxSet  *); /* linkage=_ZNK10CHitBoxSet21Schema_DynamicBindingEv */
	class CHitBoxSet * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN10CHitBoxSet32KV3TransferAllocateClassInstanceEPKc */
	/* <524d9c2> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1164 */
	void KV3TransferSave(const class CHitBoxSet  *, class CKV3TransferSaveContext *); /* linkage=_ZNK10CHitBoxSet15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <524f387> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1177 */
	void KV3TransferLoad(class CHitBoxSet *, class CKV3TransferLoadContext *); /* linkage=_ZN10CHitBoxSet15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CHitBoxSet(const class CHitBoxSet  *, class CKV3TransferSaveContext *); /* linkage=_ZNK10CHitBoxSet26KV3TransferSave_CHitBoxSetEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CHitBoxSet(class CHitBoxSet *, class CKV3TransferLoadContext *); /* linkage=_ZN10CHitBoxSet26KV3TransferLoad_CHitBoxSetEP23CKV3TransferLoadContext */
	void CHitBoxSet(class CHitBoxSet *); /* linkage=_ZN10CHitBoxSetC4Ev */
	void CHitBoxSet(class CHitBoxSet *, const class CHitBoxSet  &); /* linkage=_ZN10CHitBoxSetC4ERKS_ */
	/* <4cdbbaa> modellib/rendermesh.cpp:671 */
	void SetName(class CHitBoxSet *, const char  *); /* linkage=_ZN10CHitBoxSet7SetNameEPKc */
	class CHitBox * AddHitBox(class CHitBoxSet *, const char  *); /* linkage=_ZN10CHitBoxSet9AddHitBoxEPKc */
	int numhitboxes(const class CHitBoxSet  *); /* linkage=_ZNK10CHitBoxSet11numhitboxesEv */
	const class CHitBox  * pHitbox(const class CHitBoxSet  *, int); /* linkage=_ZNK10CHitBoxSet7pHitboxEi */
	void ~CHitBoxSet(class CHitBoxSet *); /* linkage=_ZN10CHitBoxSetD4Ev */
	class CHitBoxSet & operator=(class CHitBoxSet *, const class CHitBoxSet  &); /* linkage=_ZN10CHitBoxSetaSERKS_ */
};

// <04C72496> ../public/modellib/rendermesh.h:489
// member functions: 41
// member variables: 4
// static member variable: 1
// class size: 56
class CHitBoxSet {
	/* ../public/modellib/rendermesh.h:492 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/rendermesh.h:491 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/rendermesh.h:491 */
	CHitBoxSet* Schema_MarkHelperFn(void);
	/* ../public/modellib/rendermesh.h:491 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/rendermesh.h:491 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/rendermesh.h:491 */
	void Schema_CompileTimeVerificationFunction(CHitBoxSet* );
	/* ../public/modellib/rendermesh.h:491 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/rendermesh.h:491 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/rendermesh.h:491 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CHitBoxSet* );
	/* ../public/modellib/rendermesh.h:492 */
	CHitBoxSet* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/rendermesh.h:492 */
	void KV3TransferSave(const CHitBoxSet* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:492 */
	void KV3TransferLoad(CHitBoxSet* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:492 */
	void KV3TransferSave_CHitBoxSet(const CHitBoxSet* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:492 */
	void KV3TransferLoad_CHitBoxSet(CHitBoxSet* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:496 */
	void CHitBoxSet(CHitBoxSet* );
	/* ../public/modellib/rendermesh.h:497 */
	void CHitBoxSet(CHitBoxSet* , const CHitBoxSet& );
	/* ../public/modellib/rendermesh.h:499 */
	void SetName(CHitBoxSet* , const char* );
	/* ../public/modellib/rendermesh.h:501 */
	CHitBox* AddHitBox(CHitBoxSet* , const char* );
	/* ../public/modellib/rendermesh.h:503 */
	int numhitboxes(const CHitBoxSet* );
	/* ../public/modellib/rendermesh.h:504 */
	const CHitBox* pHitbox(const CHitBoxSet* , int);
	CUtlString m_name; /* 0 8 */
	uint32 m_nNameHash; /* 8 4 */
	CUtlVector<CHitBox, CUtlMemory<CHitBox, int> > m_HitBoxes; /* 16 32 */
	CUtlString m_SourceFilename; /* 48 8 */
	void ~CHitBoxSet(CHitBoxSet* );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN10CHitBoxSet17GetPrimaryBindingEv */
	class CHitBoxSet * Schema_MarkHelperFn(void); /* linkage=_ZN10CHitBoxSet19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN10CHitBoxSet15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <524d6f4> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1156 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN10CHitBoxSet32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CHitBoxSet *); /* linkage=_ZN10CHitBoxSet38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN10CHitBoxSet20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN10CHitBoxSet22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CHitBoxSet  *); /* linkage=_ZNK10CHitBoxSet21Schema_DynamicBindingEv */
	class CHitBoxSet * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN10CHitBoxSet32KV3TransferAllocateClassInstanceEPKc */
	/* <524d9c2> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1164 */
	void KV3TransferSave(const class CHitBoxSet  *, class CKV3TransferSaveContext *); /* linkage=_ZNK10CHitBoxSet15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <524f387> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1177 */
	void KV3TransferLoad(class CHitBoxSet *, class CKV3TransferLoadContext *); /* linkage=_ZN10CHitBoxSet15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CHitBoxSet(const class CHitBoxSet  *, class CKV3TransferSaveContext *); /* linkage=_ZNK10CHitBoxSet26KV3TransferSave_CHitBoxSetEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CHitBoxSet(class CHitBoxSet *, class CKV3TransferLoadContext *); /* linkage=_ZN10CHitBoxSet26KV3TransferLoad_CHitBoxSetEP23CKV3TransferLoadContext */
	void CHitBoxSet(class CHitBoxSet *); /* linkage=_ZN10CHitBoxSetC4Ev */
	void CHitBoxSet(class CHitBoxSet *, const class CHitBoxSet  &); /* linkage=_ZN10CHitBoxSetC4ERKS_ */
	/* <4cdbbaa> modellib/rendermesh.cpp:671 */
	void SetName(class CHitBoxSet *, const char  *); /* linkage=_ZN10CHitBoxSet7SetNameEPKc */
	class CHitBox * AddHitBox(class CHitBoxSet *, const char  *); /* linkage=_ZN10CHitBoxSet9AddHitBoxEPKc */
	int numhitboxes(const class CHitBoxSet  *); /* linkage=_ZNK10CHitBoxSet11numhitboxesEv */
	const class CHitBox  * pHitbox(const class CHitBoxSet  *, int); /* linkage=_ZNK10CHitBoxSet7pHitboxEi */
	void ~CHitBoxSet(class CHitBoxSet *); /* linkage=_ZN10CHitBoxSetD4Ev */
	class CHitBoxSet & operator=(class CHitBoxSet *, const class CHitBoxSet  &); /* linkage=_ZN10CHitBoxSetaSERKS_ */
};

// <04F1F01E> ../public/modellib/rendermesh.h:489
// member functions: 42
// member variables: 4
// static member variable: 1
// class size: 56
class CHitBoxSet {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/rendermesh.h:491 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/rendermesh.h:491 */
	CHitBoxSet* Schema_MarkHelperFn(void);
	/* ../public/modellib/rendermesh.h:491 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/rendermesh.h:491 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/rendermesh.h:491 */
	void Schema_CompileTimeVerificationFunction(CHitBoxSet* );
	/* ../public/modellib/rendermesh.h:491 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/rendermesh.h:491 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/rendermesh.h:491 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CHitBoxSet* );
	/* ../public/modellib/rendermesh.h:492 */
	CHitBoxSet* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/rendermesh.h:492 */
	void KV3TransferSave(const CHitBoxSet* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:492 */
	void KV3TransferLoad(CHitBoxSet* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:492 */
	void KV3TransferSave_CHitBoxSet(const CHitBoxSet* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:492 */
	void KV3TransferLoad_CHitBoxSet(CHitBoxSet* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:496 */
	void CHitBoxSet(CHitBoxSet* );
	/* ../public/modellib/rendermesh.h:497 */
	void CHitBoxSet(CHitBoxSet* , const CHitBoxSet& );
	/* ../public/modellib/rendermesh.h:499 */
	void SetName(CHitBoxSet* , const char* );
	/* ../public/modellib/rendermesh.h:501 */
	CHitBox* AddHitBox(CHitBoxSet* , const char* );
	/* ../public/modellib/rendermesh.h:503 */
	int numhitboxes(const CHitBoxSet* );
	/* ../public/modellib/rendermesh.h:504 */
	const CHitBox* pHitbox(const CHitBoxSet* , int);
	CUtlString m_name; /* 0 8 */
	uint32 m_nNameHash; /* 8 4 */
	CUtlVector<CHitBox, CUtlMemory<CHitBox, int> > m_HitBoxes; /* 16 32 */
	CUtlString m_SourceFilename; /* 48 8 */
	CHitBoxSet& operator=(CHitBoxSet* , const CHitBoxSet& );
	void ~CHitBoxSet(CHitBoxSet* );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN10CHitBoxSet17GetPrimaryBindingEv */
	class CHitBoxSet * Schema_MarkHelperFn(void); /* linkage=_ZN10CHitBoxSet19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN10CHitBoxSet15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <524d6f4> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1156 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN10CHitBoxSet32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CHitBoxSet *); /* linkage=_ZN10CHitBoxSet38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN10CHitBoxSet20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN10CHitBoxSet22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CHitBoxSet  *); /* linkage=_ZNK10CHitBoxSet21Schema_DynamicBindingEv */
	class CHitBoxSet * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN10CHitBoxSet32KV3TransferAllocateClassInstanceEPKc */
	/* <524d9c2> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1164 */
	void KV3TransferSave(const class CHitBoxSet  *, class CKV3TransferSaveContext *); /* linkage=_ZNK10CHitBoxSet15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <524f387> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1177 */
	void KV3TransferLoad(class CHitBoxSet *, class CKV3TransferLoadContext *); /* linkage=_ZN10CHitBoxSet15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CHitBoxSet(const class CHitBoxSet  *, class CKV3TransferSaveContext *); /* linkage=_ZNK10CHitBoxSet26KV3TransferSave_CHitBoxSetEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CHitBoxSet(class CHitBoxSet *, class CKV3TransferLoadContext *); /* linkage=_ZN10CHitBoxSet26KV3TransferLoad_CHitBoxSetEP23CKV3TransferLoadContext */
	void CHitBoxSet(class CHitBoxSet *); /* linkage=_ZN10CHitBoxSetC4Ev */
	void CHitBoxSet(class CHitBoxSet *, const class CHitBoxSet  &); /* linkage=_ZN10CHitBoxSetC4ERKS_ */
	/* <4cdbbaa> modellib/rendermesh.cpp:671 */
	void SetName(class CHitBoxSet *, const char  *); /* linkage=_ZN10CHitBoxSet7SetNameEPKc */
	class CHitBox * AddHitBox(class CHitBoxSet *, const char  *); /* linkage=_ZN10CHitBoxSet9AddHitBoxEPKc */
	int numhitboxes(const class CHitBoxSet  *); /* linkage=_ZNK10CHitBoxSet11numhitboxesEv */
	const class CHitBox  * pHitbox(const class CHitBoxSet  *, int); /* linkage=_ZNK10CHitBoxSet7pHitboxEi */
	void ~CHitBoxSet(class CHitBoxSet *); /* linkage=_ZN10CHitBoxSetD4Ev */
	class CHitBoxSet & operator=(class CHitBoxSet *, const class CHitBoxSet  &); /* linkage=_ZN10CHitBoxSetaSERKS_ */
};

// <051F270A> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:489
// member functions: 42
// member variables: 4
// static member variable: 1
// class size: 56
class CHitBoxSet {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:492 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:491 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:491 */
	CHitBoxSet* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:491 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:491 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:491 */
	void Schema_CompileTimeVerificationFunction(CHitBoxSet* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:491 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:491 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:491 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CHitBoxSet* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:492 */
	CHitBoxSet* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:492 */
	void KV3TransferSave(const CHitBoxSet* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:492 */
	void KV3TransferLoad(CHitBoxSet* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:492 */
	void KV3TransferSave_CHitBoxSet(const CHitBoxSet* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:492 */
	void KV3TransferLoad_CHitBoxSet(CHitBoxSet* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:496 */
	void CHitBoxSet(CHitBoxSet* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:497 */
	void CHitBoxSet(CHitBoxSet* , const CHitBoxSet& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:499 */
	void SetName(CHitBoxSet* , const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:501 */
	CHitBox* AddHitBox(CHitBoxSet* , const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:503 */
	int numhitboxes(const CHitBoxSet* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:504 */
	const CHitBox* pHitbox(const CHitBoxSet* , int);
	CUtlString m_name; /* 0 8 */
	uint32 m_nNameHash; /* 8 4 */
	CUtlVector<CHitBox, CUtlMemory<CHitBox, int> > m_HitBoxes; /* 16 32 */
	CUtlString m_SourceFilename; /* 48 8 */
	void ~CHitBoxSet(CHitBoxSet* );
	CHitBoxSet& operator=(CHitBoxSet* , const CHitBoxSet& );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN10CHitBoxSet17GetPrimaryBindingEv */
	class CHitBoxSet * Schema_MarkHelperFn(void); /* linkage=_ZN10CHitBoxSet19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN10CHitBoxSet15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <524d6f4> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1156 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN10CHitBoxSet32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CHitBoxSet *); /* linkage=_ZN10CHitBoxSet38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN10CHitBoxSet20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN10CHitBoxSet22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CHitBoxSet  *); /* linkage=_ZNK10CHitBoxSet21Schema_DynamicBindingEv */
	class CHitBoxSet * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN10CHitBoxSet32KV3TransferAllocateClassInstanceEPKc */
	/* <524d9c2> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1164 */
	void KV3TransferSave(const class CHitBoxSet  *, class CKV3TransferSaveContext *); /* linkage=_ZNK10CHitBoxSet15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <524f387> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1177 */
	void KV3TransferLoad(class CHitBoxSet *, class CKV3TransferLoadContext *); /* linkage=_ZN10CHitBoxSet15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CHitBoxSet(const class CHitBoxSet  *, class CKV3TransferSaveContext *); /* linkage=_ZNK10CHitBoxSet26KV3TransferSave_CHitBoxSetEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CHitBoxSet(class CHitBoxSet *, class CKV3TransferLoadContext *); /* linkage=_ZN10CHitBoxSet26KV3TransferLoad_CHitBoxSetEP23CKV3TransferLoadContext */
	void CHitBoxSet(class CHitBoxSet *); /* linkage=_ZN10CHitBoxSetC4Ev */
	void CHitBoxSet(class CHitBoxSet *, const class CHitBoxSet  &); /* linkage=_ZN10CHitBoxSetC4ERKS_ */
	/* <4cdbbaa> modellib/rendermesh.cpp:671 */
	void SetName(class CHitBoxSet *, const char  *); /* linkage=_ZN10CHitBoxSet7SetNameEPKc */
	class CHitBox * AddHitBox(class CHitBoxSet *, const char  *); /* linkage=_ZN10CHitBoxSet9AddHitBoxEPKc */
	int numhitboxes(const class CHitBoxSet  *); /* linkage=_ZNK10CHitBoxSet11numhitboxesEv */
	const class CHitBox  * pHitbox(const class CHitBoxSet  *, int); /* linkage=_ZNK10CHitBoxSet7pHitboxEi */
	void ~CHitBoxSet(class CHitBoxSet *); /* linkage=_ZN10CHitBoxSetD4Ev */
	class CHitBoxSet & operator=(class CHitBoxSet *, const class CHitBoxSet  &); /* linkage=_ZN10CHitBoxSetaSERKS_ */
};

// <0524A87F> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:491
inline void CHitBoxSet::Schema_DynamicBinding()
{
} /* size: 0 */

// <052083AD> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:496
void CHitBoxSet::CHitBoxSet()
{
} /* size: 0 */

// <0521C299> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:515
inline void CHitBoxSetList::operator=(const CHitBoxSetList &)
{
} /* size: 0 */

// <0521C248> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:515
void CHitBoxSetList::~CHitBoxSetList()
{
} /* size: 0 */

// <0521C22B> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:515
inline void CHitBoxSetList::~CHitBoxSetList()
{
} /* size: 0 */

// <04C73E9F> ../public/modellib/rendermesh.h:515
// member functions: 36
// member variable: 1
// static member variable: 1
// class size: 32
class CHitBoxSetList {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/rendermesh.h:517 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/rendermesh.h:517 */
	CHitBoxSetList* Schema_MarkHelperFn(void);
	/* ../public/modellib/rendermesh.h:517 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/rendermesh.h:517 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/rendermesh.h:517 */
	void Schema_CompileTimeVerificationFunction(CHitBoxSetList* );
	/* ../public/modellib/rendermesh.h:517 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/rendermesh.h:517 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/rendermesh.h:517 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CHitBoxSetList* );
	/* ../public/modellib/rendermesh.h:518 */
	CHitBoxSetList* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/rendermesh.h:518 */
	void KV3TransferSave(const CHitBoxSetList* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:518 */
	void KV3TransferLoad(CHitBoxSetList* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:518 */
	void KV3TransferSave_CHitBoxSetList(const CHitBoxSetList* , CKV3TransferSaveContext* );
	/* ../public/modellib/rendermesh.h:518 */
	void KV3TransferLoad_CHitBoxSetList(CHitBoxSetList* , CKV3TransferLoadContext* );
	/* ../public/modellib/rendermesh.h:522 */
	void CHitBoxSetList(CHitBoxSetList* );
	/* ../public/modellib/rendermesh.h:523 */
	void CHitBoxSetList(CHitBoxSetList* , const CHitBoxSetList& );
	CUtlVector<CHitBoxSet, CUtlMemory<CHitBoxSet, int> > m_HitBoxSets; /* 0 32 */
	/* ../public/modellib/rendermesh.h:527 */
	void MakeSetVisible(CHitBoxSetList* , const char* );
	/* ../public/modellib/rendermesh.h:528 */
	void MakeBoxSelected(CHitBoxSetList* , const char* , const char* );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN14CHitBoxSetList17GetPrimaryBindingEv */
	class CHitBoxSetList * Schema_MarkHelperFn(void); /* linkage=_ZN14CHitBoxSetList19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN14CHitBoxSetList15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <524d7ae> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1252 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN14CHitBoxSetList32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CHitBoxSetList *); /* linkage=_ZN14CHitBoxSetList38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN14CHitBoxSetList20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN14CHitBoxSetList22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CHitBoxSetList  *); /* linkage=_ZNK14CHitBoxSetList21Schema_DynamicBindingEv */
	class CHitBoxSetList * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN14CHitBoxSetList32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferSave(const class CHitBoxSetList  *, class CKV3TransferSaveContext *); /* linkage=_ZNK14CHitBoxSetList15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CHitBoxSetList *, class CKV3TransferLoadContext *); /* linkage=_ZN14CHitBoxSetList15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CHitBoxSetList(const class CHitBoxSetList  *, class CKV3TransferSaveContext *); /* linkage=_ZNK14CHitBoxSetList30KV3TransferSave_CHitBoxSetListEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CHitBoxSetList(class CHitBoxSetList *, class CKV3TransferLoadContext *); /* linkage=_ZN14CHitBoxSetList30KV3TransferLoad_CHitBoxSetListEP23CKV3TransferLoadContext */
	void CHitBoxSetList(class CHitBoxSetList *); /* linkage=_ZN14CHitBoxSetListC4Ev */
	void CHitBoxSetList(class CHitBoxSetList *, const class CHitBoxSetList  &); /* linkage=_ZN14CHitBoxSetListC4ERKS_ */
	void MakeSetVisible(class CHitBoxSetList *, const char  *); /* linkage=_ZN14CHitBoxSetList14MakeSetVisibleEPKc */
	void MakeBoxSelected(class CHitBoxSetList *, const char  *, const char  *); /* linkage=_ZN14CHitBoxSetList15MakeBoxSelectedEPKcS1_ */
	void ~CHitBoxSetList(class CHitBoxSetList *); /* linkage=_ZN14CHitBoxSetListD4Ev */
	class CHitBoxSetList & operator=(class CHitBoxSetList *, const class CHitBoxSetList  &); /* linkage=_ZN14CHitBoxSetListaSERKS_ */
};

// <051F413A> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:515
// member functions: 38
// member variable: 1
// static member variable: 1
// class size: 32
class CHitBoxSetList {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:517 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:517 */
	CHitBoxSetList* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:517 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:517 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:517 */
	void Schema_CompileTimeVerificationFunction(CHitBoxSetList* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:517 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:517 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:517 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CHitBoxSetList* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:518 */
	CHitBoxSetList* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:518 */
	void KV3TransferSave(const CHitBoxSetList* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:518 */
	void KV3TransferLoad(CHitBoxSetList* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:518 */
	void KV3TransferSave_CHitBoxSetList(const CHitBoxSetList* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:518 */
	void KV3TransferLoad_CHitBoxSetList(CHitBoxSetList* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:522 */
	void CHitBoxSetList(CHitBoxSetList* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:523 */
	void CHitBoxSetList(CHitBoxSetList* , const CHitBoxSetList& );
	CUtlVector<CHitBoxSet, CUtlMemory<CHitBoxSet, int> > m_HitBoxSets; /* 0 32 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:527 */
	void MakeSetVisible(CHitBoxSetList* , const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:528 */
	void MakeBoxSelected(CHitBoxSetList* , const char* , const char* );
	void ~CHitBoxSetList(CHitBoxSetList* );
	CHitBoxSetList& operator=(CHitBoxSetList* , const CHitBoxSetList& );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN14CHitBoxSetList17GetPrimaryBindingEv */
	class CHitBoxSetList * Schema_MarkHelperFn(void); /* linkage=_ZN14CHitBoxSetList19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN14CHitBoxSetList15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <524d7ae> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1252 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN14CHitBoxSetList32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CHitBoxSetList *); /* linkage=_ZN14CHitBoxSetList38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN14CHitBoxSetList20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN14CHitBoxSetList22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CHitBoxSetList  *); /* linkage=_ZNK14CHitBoxSetList21Schema_DynamicBindingEv */
	class CHitBoxSetList * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN14CHitBoxSetList32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferSave(const class CHitBoxSetList  *, class CKV3TransferSaveContext *); /* linkage=_ZNK14CHitBoxSetList15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CHitBoxSetList *, class CKV3TransferLoadContext *); /* linkage=_ZN14CHitBoxSetList15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CHitBoxSetList(const class CHitBoxSetList  *, class CKV3TransferSaveContext *); /* linkage=_ZNK14CHitBoxSetList30KV3TransferSave_CHitBoxSetListEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CHitBoxSetList(class CHitBoxSetList *, class CKV3TransferLoadContext *); /* linkage=_ZN14CHitBoxSetList30KV3TransferLoad_CHitBoxSetListEP23CKV3TransferLoadContext */
	void CHitBoxSetList(class CHitBoxSetList *); /* linkage=_ZN14CHitBoxSetListC4Ev */
	void CHitBoxSetList(class CHitBoxSetList *, const class CHitBoxSetList  &); /* linkage=_ZN14CHitBoxSetListC4ERKS_ */
	void MakeSetVisible(class CHitBoxSetList *, const char  *); /* linkage=_ZN14CHitBoxSetList14MakeSetVisibleEPKc */
	void MakeBoxSelected(class CHitBoxSetList *, const char  *, const char  *); /* linkage=_ZN14CHitBoxSetList15MakeBoxSelectedEPKcS1_ */
	void ~CHitBoxSetList(class CHitBoxSetList *); /* linkage=_ZN14CHitBoxSetListD4Ev */
	class CHitBoxSetList & operator=(class CHitBoxSetList *, const class CHitBoxSetList  &); /* linkage=_ZN14CHitBoxSetListaSERKS_ */
};

// <0524A85A> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:517
inline void CHitBoxSetList::Schema_DynamicBinding()
{
} /* size: 0 */

// <05208391> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:522
void CHitBoxSetList::CHitBoxSetList()
{
} /* size: 0 */

// <04D2338C> ../public/modellib/rendermesh.h:536
void TraceVertex_t::TraceVertex_t()
{
} /* size: 0 */

// <04D2336E> ../public/modellib/rendermesh.h:536
inline void TraceVertex_t::TraceVertex_t()
{
} /* size: 0 */

// <04CC3A02> ../public/modellib/rendermesh.h:536
inline void TraceVertex_t::operator=(const TraceVertex_t &)
{
} /* size: 0 */

// <000B53F9> ../public/modellib/rendermesh.h:536
// member function: 1
// member variables: 10
// struct size: 132
struct TraceVertex_t {
	Vector m_vPosition; /* 0 12 */
	Vector m_vNormal; /* 12 12 */
	Vector4D m_vTangent; /* 24 16 */
	Vector2D m_vTexCoord; /* 40 8 */
	Vector4D m_vColor; /* 48 16 */
	Vector2D m_vTexCoord2; /* 64 8 */
	Vector4D m_vVertexPaintBlendParams[2]; /* 72 32 */
	Vector4D m_vVertexPaintTintColor; /* 104 16 */
	short unsigned int m_nBoneIndices[4]; /* 120 8 */
	byte m_cBoneWeights[4]; /* 128 4 */
	/* ../public/modellib/rendermesh.h:552 */
	float GetBoneWeight(const TraceVertex_t* , int);
};

// <04AE36C0> ../public/modellib/rendermesh.h:552
inline void TraceVertex_t::GetBoneWeight(int index)
{
} /* size: 0 */

// <04D24146> ../public/modellib/rendermesh.h:558
void TraceDataForDraw_t::TraceDataForDraw_t()
{
} /* size: 0 */

// <04D24128> ../public/modellib/rendermesh.h:558
inline void TraceDataForDraw_t::TraceDataForDraw_t()
{
} /* size: 0 */

// <04D24111> ../public/modellib/rendermesh.h:558
void TraceDataForDraw_t::~TraceDataForDraw_t()
{
} /* size: 0 */

// <04D240F3> ../public/modellib/rendermesh.h:558
inline void TraceDataForDraw_t::~TraceDataForDraw_t()
{
} /* size: 0 */

// <04D20462> ../public/modellib/rendermesh.h:558
void TraceDataForDraw_t::TraceDataForDraw_t(const TraceDataForDraw_t &)
{
} /* size: 0 */

// <04D2043F> ../public/modellib/rendermesh.h:558
inline void TraceDataForDraw_t::TraceDataForDraw_t(const TraceDataForDraw_t &)
{
} /* size: 0 */

// <049FA453> ../public/modellib/rendermesh.h:558
// member functions: 2
// member variables: 9
// struct size: 56
struct TraceDataForDraw_t {
	/* ../public/modellib/rendermesh.h:560 */
	void Init(TraceDataForDraw_t* );
	/* ../public/modellib/rendermesh.h:572 */
	void GetUnRemappedVerticesAndIndices(const TraceDataForDraw_t* , CUtlVector<TraceVertex_t, CUtlMemory<TraceVertex_t, int> >& , CUtlVector<int, CUtlMemory<int, int> >& );
	int m_nTraceTriangles; /* 0 4 */
	int m_nTraceVertices; /* 4 4 */
	TraceVertex_t * m_pTraceTriangleVertices; /* 8 8 */
	int * m_pTraceTriangleIndices; /* 16 8 */
	int * m_pTraceTriangleIndexRemapping; /* 24 8 */
	int m_nUnRemappedTraceVertexCount; /* 32 4 */
	int m_nSceneObjectIndex; /* 36 4 */
	int m_nDrawCallIndex; /* 40 4 */
	HMaterialStrongCopyable m_hMaterial; /* 48 8 */
};

// <04C7581A> ../public/modellib/rendermesh.h:558
// member functions: 3
// member variables: 9
// struct size: 56
struct TraceDataForDraw_t {
	/* ../public/modellib/rendermesh.h:560 */
	void Init(TraceDataForDraw_t* );
	/* ../public/modellib/rendermesh.h:572 */
	void GetUnRemappedVerticesAndIndices(const TraceDataForDraw_t* , CUtlVector<TraceVertex_t, CUtlMemory<TraceVertex_t, int> >& , CUtlVector<int, CUtlMemory<int, int> >& );
	int m_nTraceTriangles; /* 0 4 */
	int m_nTraceVertices; /* 4 4 */
	TraceVertex_t * m_pTraceTriangleVertices; /* 8 8 */
	int * m_pTraceTriangleIndices; /* 16 8 */
	int * m_pTraceTriangleIndexRemapping; /* 24 8 */
	int m_nUnRemappedTraceVertexCount; /* 32 4 */
	int m_nSceneObjectIndex; /* 36 4 */
	int m_nDrawCallIndex; /* 40 4 */
	HMaterialStrongCopyable m_hMaterial; /* 48 8 */
	void ~TraceDataForDraw_t(TraceDataForDraw_t* );
};

// <04D17F07> ../public/modellib/rendermesh.h:558
// member functions: 5
// member variables: 9
// struct size: 56
struct TraceDataForDraw_t {
	/* ../public/modellib/rendermesh.h:560 */
	void Init(TraceDataForDraw_t* );
	/* ../public/modellib/rendermesh.h:572 */
	void GetUnRemappedVerticesAndIndices(const TraceDataForDraw_t* , CUtlVector<TraceVertex_t, CUtlMemory<TraceVertex_t, int> >& , CUtlVector<int, CUtlMemory<int, int> >& );
	int m_nTraceTriangles; /* 0 4 */
	int m_nTraceVertices; /* 4 4 */
	TraceVertex_t * m_pTraceTriangleVertices; /* 8 8 */
	int * m_pTraceTriangleIndices; /* 16 8 */
	int * m_pTraceTriangleIndexRemapping; /* 24 8 */
	int m_nUnRemappedTraceVertexCount; /* 32 4 */
	int m_nSceneObjectIndex; /* 36 4 */
	int m_nDrawCallIndex; /* 40 4 */
	HMaterialStrongCopyable m_hMaterial; /* 48 8 */
	void TraceDataForDraw_t(TraceDataForDraw_t* , const TraceDataForDraw_t& );
	void ~TraceDataForDraw_t(TraceDataForDraw_t* );
	void TraceDataForDraw_t(TraceDataForDraw_t* );
};

// <051F5B13> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:558
// member functions: 2
// member variables: 9
// struct size: 56
struct TraceDataForDraw_t {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:560 */
	void Init(TraceDataForDraw_t* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:572 */
	void GetUnRemappedVerticesAndIndices(const TraceDataForDraw_t* , CUtlVector<TraceVertex_t, CUtlMemory<TraceVertex_t, int> >& , CUtlVector<int, CUtlMemory<int, int> >& );
	int m_nTraceTriangles; /* 0 4 */
	int m_nTraceVertices; /* 4 4 */
	TraceVertex_t * m_pTraceTriangleVertices; /* 8 8 */
	int * m_pTraceTriangleIndices; /* 16 8 */
	int * m_pTraceTriangleIndexRemapping; /* 24 8 */
	int m_nUnRemappedTraceVertexCount; /* 32 4 */
	int m_nSceneObjectIndex; /* 36 4 */
	int m_nDrawCallIndex; /* 40 4 */
	HMaterialStrongCopyable m_hMaterial; /* 48 8 */
};

// <04D24CD0> ../public/modellib/rendermesh.h:560
inline void TraceDataForDraw_t::Init()
{
} /* size: 0 */

// <017DAD27> ../public/modellib/rendermesh.h:588
// member variables: 7
// struct size: 28
struct VertexBufferLayout_t {
	int nElementSizeInBytes; /* 0 4 */
	int nBoneIdxOffset; /* 4 4 */
	int nBoneIndexBits; /* 8 4 */
	int nBoneWeightOffset; /* 12 4 */
	int nNormalOffset; /* 16 4 */
	int nTangentOffset; /* 20 4 */
	bool bHasPackedNormal; /* 24 1 */
};

// <051D3AB8> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:603
// member functions: 92
// member variables: 20
// static member variable: 1
// vtable entries: 3
// class size: 576
class CRenderMesh : public CRefCounted<CRefCountServiceBase<true, CRefMT> > {
public:
	/* class CRefCounted<CRefCountServiceBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:605 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:605 */
	CRenderMesh* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1322 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1351 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1288 */
	void Schema_CompileTimeVerificationFunction(CRenderMesh* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:605 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:605 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:605 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CRenderMesh* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:606 */
	void KV3TransferPolymorphicClassname(const CRenderMesh* , char& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:606 */
	CRenderMesh* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1359 */
	virtual void KV3TransferSave(const CRenderMesh* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1373 */
	virtual void KV3TransferLoad(CRenderMesh* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1364 */
	void KV3TransferSave_CRenderMesh(const CRenderMesh* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1378 */
	void KV3TransferLoad_CRenderMesh(CRenderMesh* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:611 */
	void CreateBufferResources(CRenderMesh* , const RuntimeBuffersInfo_t& , const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:612 */
	void DestroyBufferResources(CRenderMesh* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:614 */
	void UpdateBounds(CRenderMesh* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:615 */
	void GetBounds(const CRenderMesh* , Vector& , Vector& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:703 */
	const CMorphSet* GetMorphSet(const CRenderMesh* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:617 */
	const CMorphSetData* GetMorphSetData(const CRenderMesh* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:618 */
	int GetNumFlexDescs(const CRenderMesh* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:619 */
	int GetNumFlexControllers(const CRenderMesh* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:620 */
	RenderMeshTranslucencyType_t GetTranslucencyType(const CRenderMesh* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:621 */
	int GetNumBones(const CRenderMesh* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:624 */
	int InstancePartitionIndex(CRenderMesh* , CMeshInstance* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:627 */
	void AddSceneObject(CRenderMesh* , CSceneObjectData& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:628 */
	CSceneObjectData* AddSceneObject(CRenderMesh* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:629 */
	CAttachment* FindOrAddAttachment(CRenderMesh* , const char* , bool* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:630 */
	CHitBoxSet* FindOrAddHitBoxSet(CRenderMesh* , const char* , bool* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:631 */
	void AddBone(CRenderMesh* , RenderSkeletonBone_t& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:633 */
	void SetMorphSet_V0Internal(CRenderMesh* , HMorphSet_Internal);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:634 */
	void ConvertV0MorphSetToRuntime(CRenderMesh* , CConvertOldDiskCtx& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:635 */
	void SetMorphDataFromEmbedededV0Data(CRenderMesh* , CMorphSetData* , const char* , CConvertOldDiskCtx& , IRD_RegisterResourceDataUtils* , ResourceHandle_t, const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:640 */
	void BuildHitboxIndices(CRenderMesh* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:641 */
	void TransferPostSaveFn(const CRenderMesh* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:642 */
	void TransferPostLoadFn(CRenderMesh* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:644 */
	void SetName(CRenderMesh* , const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:645 */
	const char* GetName(const CRenderMesh* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:647 */
	void CalculateNumTriangles(const CRenderMesh* , int* , int* , int* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:650 */
	void CRenderMesh(CRenderMesh* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:651 */
	virtual void ~CRenderMesh(CRenderMesh* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:653 */
	void CRenderMesh(CRenderMesh* , const CRenderMesh& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:654 */
	CRenderMesh& operator=(CRenderMesh* , const CRenderMesh& );
	CUtlVectorFixedGrowable<CSceneObjectData, 1> m_sceneObjects __attribute__((__aligned__(8))); /* 16 144 */
	CUtlVector<CBaseConstraint*, CUtlMemory<CBaseConstraint*, int> > m_constraints; /* 160 32 */
	CRenderSkeleton m_skeleton; /* 192 104 */
	CUtlDict<CAttachment, int> m_attachments; /* 296 48 */
	CUtlDict<CHitBoxSet, int> m_hitboxsets; /* 344 48 */
	HMorphSet_InternalStrong m_hV0MorphSet; /* 392 8 */
	CMorphSet * m_pMorphSet; /* 400 8 */
	Vector m_vMinBounds; /* 408 12 */
	Vector m_vMaxBounds; /* 420 12 */
	int m_nVertexBuffers; /* 432 4 */
	int m_nIndexBuffers; /* 436 4 */
	VertexBufferHandle_t * m_pVBHandles; /* 440 8 */
	IndexBufferHandle_t * m_pIBHandles; /* 448 8 */
	RenderMeshTranslucencyType_t m_translucencyType; /* 456 4 */
	CUtlVector<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> > m_traceDataList; /* 464 32 */
	CUtlString m_renderMeshName; /* 496 8 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:689 */
	void CreateToolsTriangleList(CRenderMesh* , const RuntimeBuffersInfo_t& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:690 */
	void AddToRayTraceEnvironment(const CRenderMesh* , RayTracingEnvironment* );
	int traceDataAllocated; /* 504 4 */
	CUtlVector<int, CUtlMemory<int, int> > m_VBSizeOffsets; /* 512 32 */
	CUtlVector<VertexBufferLayout_t, CUtlMemory<VertexBufferLayout_t, int> > m_VBLayouts; /* 544 32 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:698 */
	void GenerateMeshBLAS(CRenderMesh* );
	int GetNumFlexDescs(const class CRenderMesh  *); /* linkage=_ZNK11CRenderMesh15GetNumFlexDescsEv */
	enum RenderMeshTranslucencyType_t GetTranslucencyType(const class CRenderMesh  *); /* linkage=_ZNK11CRenderMesh19GetTranslucencyTypeEv */
	void GetBounds(const class CRenderMesh  *, class Vector &, class Vector &); /* linkage=_ZNK11CRenderMesh9GetBoundsER6VectorS1_ */
	void SetName(class CRenderMesh *, const char  *); /* linkage=_ZN11CRenderMesh7SetNameEPKc */
	void CRenderMesh(class CRenderMesh *); /* linkage=_ZN11CRenderMeshC4Ev */
	void UpdateBounds(class CRenderMesh *); /* linkage=_ZN11CRenderMesh12UpdateBoundsEv */
	void SetMorphDataFromEmbedededV0Data(class CRenderMesh *, class CMorphSetData *, const char  *, class CConvertOldDiskCtx &, class IRD_RegisterResourceDataUtils *, ResourceHandle_t, const char  *); /* linkage=_ZN11CRenderMesh31SetMorphDataFromEmbedededV0DataEP13CMorphSetDataPKcR18CConvertOldDiskCtxP29IRD_RegisterResourceDataUtilsPK21ResourceBindingBase_tS3_ */
	int GetNumFlexControllers(const class CRenderMesh  *); /* linkage=_ZNK11CRenderMesh21GetNumFlexControllersEv */
	int GetNumBones(const class CRenderMesh  *); /* linkage=_ZNK11CRenderMesh11GetNumBonesEv */
	const class CMorphSet  * GetMorphSet(const class CRenderMesh  *); /* linkage=_ZNK11CRenderMesh11GetMorphSetEv */
	void GenerateMeshBLAS(class CRenderMesh *); /* linkage=_ZN11CRenderMesh16GenerateMeshBLASEv */
	void CreateBufferResources(class CRenderMesh *, const class RuntimeBuffersInfo_t  &, const char  *); /* linkage=_ZN11CRenderMesh21CreateBufferResourcesERK20RuntimeBuffersInfo_tPKc */
	void CreateToolsTriangleList(class CRenderMesh *, const class RuntimeBuffersInfo_t  &); /* linkage=_ZN11CRenderMesh23CreateToolsTriangleListERK20RuntimeBuffersInfo_t */
	const class CMorphSetData  * GetMorphSetData(const class CRenderMesh  *); /* linkage=_ZNK11CRenderMesh15GetMorphSetDataEv */
	const char  * GetName(const class CRenderMesh  *); /* linkage=_ZNK11CRenderMesh7GetNameEv */
	/* <524d868> ../_generated_code/modellib/linuxsteamrt64/release/rendermesh_h_schema.gen_cpp:1351 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN11CRenderMesh32Schema_VerifyBindingIsRegisteredEv */
	virtual void KV3TransferLoad(class CRenderMesh *, class CKV3TransferLoadContext *); /* linkage=_ZN11CRenderMesh15KV3TransferLoadEP23CKV3TransferLoadContext */
	virtual void KV3TransferSave(const class CRenderMesh  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CRenderMesh15KV3TransferSaveEP23CKV3TransferSaveContext */
	void CalculateNumTriangles(const class CRenderMesh  *, int *, int *, int *); /* linkage=_ZNK11CRenderMesh21CalculateNumTrianglesEPiS0_S0_ */
	void TransferPostLoadFn(class CRenderMesh *, class CKV3TransferLoadContext *); /* linkage=_ZN11CRenderMesh18TransferPostLoadFnEP23CKV3TransferLoadContext */
	void TransferPostSaveFn(const class CRenderMesh  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CRenderMesh18TransferPostSaveFnEP23CKV3TransferSaveContext */
	void BuildHitboxIndices(class CRenderMesh *); /* linkage=_ZN11CRenderMesh18BuildHitboxIndicesEv */
	void AddBone(class CRenderMesh *, class RenderSkeletonBone_t &); /* linkage=_ZN11CRenderMesh7AddBoneER20RenderSkeletonBone_t */
	void ConvertV0MorphSetToRuntime(class CRenderMesh *, class CConvertOldDiskCtx &); /* linkage=_ZN11CRenderMesh26ConvertV0MorphSetToRuntimeER18CConvertOldDiskCtx */
	void SetMorphSet_V0Internal(class CRenderMesh *, HMorphSet_Internal); /* linkage=_ZN11CRenderMesh22SetMorphSet_V0InternalE11CWeakHandleI32InfoForResourceTypeCMorphSetDataE */
	class CHitBoxSet * FindOrAddHitBoxSet(class CRenderMesh *, const char  *, bool *); /* linkage=_ZN11CRenderMesh18FindOrAddHitBoxSetEPKcPb */
	class CAttachment * FindOrAddAttachment(class CRenderMesh *, const char  *, bool *); /* linkage=_ZN11CRenderMesh19FindOrAddAttachmentEPKcPb */
	class CSceneObjectData * AddSceneObject(class CRenderMesh *); /* linkage=_ZN11CRenderMesh14AddSceneObjectEv */
	void AddSceneObject(class CRenderMesh *, class CSceneObjectData &); /* linkage=_ZN11CRenderMesh14AddSceneObjectER16CSceneObjectData */
	int InstancePartitionIndex(class CRenderMesh *, class CMeshInstance *); /* linkage=_ZN11CRenderMesh22InstancePartitionIndexEP13CMeshInstance */
	void DestroyBufferResources(class CRenderMesh *); /* linkage=_ZN11CRenderMesh22DestroyBufferResourcesEv */
	virtual void ~CRenderMesh(class CRenderMesh *); /* linkage=_ZN11CRenderMeshD4Ev */
	/* <524bdac> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:605 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CRenderMesh  *); /* linkage=_ZNK11CRenderMesh21Schema_DynamicBindingEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN11CRenderMesh17GetPrimaryBindingEv */
	void AddToRayTraceEnvironment(const class CRenderMesh  *, class RayTracingEnvironment *); /* linkage=_ZNK11CRenderMesh24AddToRayTraceEnvironmentEP21RayTracingEnvironment */
	class CRenderMesh * Schema_MarkHelperFn(void); /* linkage=_ZN11CRenderMesh19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN11CRenderMesh15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	void Schema_CompileTimeVerificationFunction(class CRenderMesh *); /* linkage=_ZN11CRenderMesh38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN11CRenderMesh20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN11CRenderMesh22Schema_StaticClassnameEv */
	void KV3TransferPolymorphicClassname(const class CRenderMesh  *, char &); /* linkage=_ZN11CRenderMesh31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CRenderMesh * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN11CRenderMesh32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferSave_CRenderMesh(const class CRenderMesh  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CRenderMesh27KV3TransferSave_CRenderMeshEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CRenderMesh(class CRenderMesh *, class CKV3TransferLoadContext *); /* linkage=_ZN11CRenderMesh27KV3TransferLoad_CRenderMeshEP23CKV3TransferLoadContext */
	void CRenderMesh(class CRenderMesh *, const class CRenderMesh  &); /* linkage=_ZN11CRenderMeshC4ERKS_ */
	class CRenderMesh & operator=(class CRenderMesh *, const class CRenderMesh  &); /* linkage=_ZN11CRenderMeshaSERKS_ */
} __attribute__((__aligned__(8)));

// <0524BDAC> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:605
// function calls: 3
void CRenderMesh::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 1351
	Schema_VerifyBindingIsRegistered(void); // 605
	GetPrimaryBinding(void); // 605
} /* size: 75, inline expansions: 3 (78 bytes) */

// <0524A835> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:605
inline void CRenderMesh::Schema_DynamicBinding()
{
} /* size: 0 */

// <04CD98FC> ../public/modellib/rendermesh.h:605
void GetPrimaryBinding(void)
{
} /* size: 0 */

// <04CD98E3> ../public/modellib/rendermesh.h:605
void CRenderMesh::Schema_DynamicBinding()
{
} /* size: 0 */

// <01874FD5> ../public/modellib/rendermesh.h:605
inline void Schema_StaticBinding(void)
{
} /* size: 0 */

// <01874FB0> ../public/modellib/rendermesh.h:606
inline void KV3TransferPolymorphicClassname(const CRenderMesh* pObject, char& pOutPolymorphicClassName)
{
} /* size: 0 */

// <0520833D> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:650
void CRenderMesh::CRenderMesh()
{
} /* size: 0 */

// <05208375> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:651
void CRenderMesh::~CRenderMesh()
{
} /* size: 0 */

// <0524A774> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:654
inline void CRenderMesh::operator=(const CRenderMesh& Other)
{
} /* size: 0 */

// <04CD972B> ../public/modellib/rendermesh.h:703
inline void CRenderMesh::GetMorphSet()
{
} /* size: 0 */

// <017DDA9C> ../public/modellib/rendermesh.h:732
// member variables: 7
// struct size: 56
struct RenderMeshInputLayoutField_t {
	uint8 m_pSemanticName[32]; /* 0 32 */
	int32 m_nSemanticIndex; /* 32 4 */
	uint32 m_Format; /* 36 4 */
	int32 m_nOffset; /* 40 4 */
	int32 m_nSlot; /* 44 4 */
	int32 m_nSlotType; /* 48 4 */
	int32 m_nInstanceStepRate; /* 52 4 */
};

// <0185645C> ../public/modellib/rendermesh.h:752
void RenderMeshBufferData_t::RenderMeshBufferData_t()
{
} /* size: 0 */

// <0185643F> ../public/modellib/rendermesh.h:752
inline void RenderMeshBufferData_t::RenderMeshBufferData_t()
{
} /* size: 0 */

// <017DE2DF> ../public/modellib/rendermesh.h:752
// member function: 1
// member variables: 4
// struct size: 24
struct RenderMeshBufferData_t {
	int32 m_nElementCount; /* 0 4 */
	int32 m_nElementSizeInBytes; /* 4 4 */
	CResourceArray<RenderMeshInputLayoutField_t> m_inputLayoutFields; /* 8 8 */
	CResourceArray<unsigned char> m_pData; /* 16 8 */
	void RenderMeshBufferData_t(RenderMeshBufferData_t* );
};

// <01FC5B73> ../public/modellib/rendermesh.h:752
// member variables: 4
// struct size: 24
struct RenderMeshBufferData_t {
	int32 m_nElementCount; /* 0 4 */
	int32 m_nElementSizeInBytes; /* 4 4 */
	CResourceArray<RenderMeshInputLayoutField_t> m_inputLayoutFields; /* 8 8 */
	CResourceArray<unsigned char> m_pData; /* 16 8 */
};

// <01856554> ../public/modellib/rendermesh.h:762
void VBIBBlockHeader_t::VBIBBlockHeader_t()
{
} /* size: 0 */

// <01856537> ../public/modellib/rendermesh.h:762
inline void VBIBBlockHeader_t::VBIBBlockHeader_t()
{
} /* size: 0 */

// <017DE7DF> ../public/modellib/rendermesh.h:762
// member function: 1
// member variables: 2
// struct size: 16
struct VBIBBlockHeader_t {
	CResourceArray<RenderMeshBufferData_t> m_vertexBuffers; /* 0 8 */
	CResourceArray<RenderMeshBufferData_t> m_indexBuffers; /* 8 8 */
	void VBIBBlockHeader_t(VBIBBlockHeader_t* );
};

// <01FC5F19> ../public/modellib/rendermesh.h:762
// member variables: 2
// struct size: 16
struct VBIBBlockHeader_t {
	CResourceArray<RenderMeshBufferData_t> m_vertexBuffers; /* 0 8 */
	CResourceArray<RenderMeshBufferData_t> m_indexBuffers; /* 8 8 */
};

// <041895C5> ../public/modellib/rendermesh.h:771
// member functions: 11
// member variables: 3
// static member variable: 1
// class size: 632
class RuntimeBuffersInfo_t {
	/* ../public/modellib/rendermesh.h:782 */
	struct BufferInfo_t {
		int32 m_nElementCount; /* 0 4 */
		int32 m_nElementSizeInBytes; /* 4 4 */
		CUtlVectorFixedGrowableCompat<RenderInputLayoutField_t, 4> m_inputLayoutFields __attribute__((__aligned__(8))); /* 8 256 */
		const uint8 * m_pData; /* 264 8 */
		size_t m_nDataSize; /* 272 8 */
		/* ../public/modellib/rendermesh.h:790 */
		void InitFromVBIBBlock(BufferInfo_t* , const RenderMeshBufferData_t* );
		/* ../public/modellib/rendermesh.h:791 */
		void UnencodeVertexAndIndexData(BufferInfo_t* , bool, uint8* & );
	} __attribute__((__aligned__(8)));
	/* tag__fprintf: const_type tag not supported! */;
	static const int nVertexIndexDataAlignment = 16; /* 0 0 */
	/* ../public/modellib/rendermesh.h:776 */
	void RuntimeBuffersInfo_t(RuntimeBuffersInfo_t* );
	/* ../public/modellib/rendermesh.h:777 */
	void ~RuntimeBuffersInfo_t(RuntimeBuffersInfo_t* );
	CUtlVectorFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1> m_VertexBuffers __attribute__((__aligned__(8))); /* 0 312 */
	CUtlVectorFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1> m_IndexBuffers __attribute__((__aligned__(8))); /* 312 312 */
	uint8 * m_pDecompressedDataBuffer; /* 624 8 */
	/* ../public/modellib/rendermesh.h:798 */
	void InitFromVBIBBlockHeader(RuntimeBuffersInfo_t* , const VBIBBlockHeader_t* );
	/* ../public/modellib/rendermesh.h:801 */
	void FreeScratchMemory(RuntimeBuffersInfo_t* );
	void RuntimeBuffersInfo_t(class RuntimeBuffersInfo_t *); /* linkage=_ZN20RuntimeBuffersInfo_tC4Ev */
	void ~RuntimeBuffersInfo_t(class RuntimeBuffersInfo_t *); /* linkage=_ZN20RuntimeBuffersInfo_tD4Ev */
	void InitFromVBIBBlockHeader(class RuntimeBuffersInfo_t *, const class VBIBBlockHeader_t  *); /* linkage=_ZN20RuntimeBuffersInfo_t23InitFromVBIBBlockHeaderEPK17VBIBBlockHeader_t */
	void FreeScratchMemory(class RuntimeBuffersInfo_t *); /* linkage=_ZN20RuntimeBuffersInfo_t17FreeScratchMemoryEv */
} __attribute__((__aligned__(8)));

// <04C82983> ../public/modellib/rendermesh.h:771
// member functions: 13
// member variables: 3
// static member variable: 1
// class size: 632
class RuntimeBuffersInfo_t {
	/* ../public/modellib/rendermesh.h:782 */
	struct BufferInfo_t {
		int32 m_nElementCount; /* 0 4 */
		int32 m_nElementSizeInBytes; /* 4 4 */
		CUtlVectorFixedGrowableCompat<RenderInputLayoutField_t, 4> m_inputLayoutFields __attribute__((__aligned__(8))); /* 8 256 */
		const uint8 * m_pData; /* 264 8 */
		size_t m_nDataSize; /* 272 8 */
		/* ../public/modellib/rendermesh.h:790 */
		void InitFromVBIBBlock(BufferInfo_t* , const RenderMeshBufferData_t* );
		/* ../public/modellib/rendermesh.h:791 */
		void UnencodeVertexAndIndexData(BufferInfo_t* , bool, uint8* & );
		void BufferInfo_t(BufferInfo_t* );
		void ~BufferInfo_t(BufferInfo_t* );
	} __attribute__((__aligned__(8)));
	/* tag__fprintf: const_type tag not supported! */;
	static const int nVertexIndexDataAlignment = 16; /* 0 0 */
	/* ../public/modellib/rendermesh.h:776 */
	void RuntimeBuffersInfo_t(RuntimeBuffersInfo_t* );
	/* ../public/modellib/rendermesh.h:777 */
	void ~RuntimeBuffersInfo_t(RuntimeBuffersInfo_t* );
	CUtlVectorFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1> m_VertexBuffers __attribute__((__aligned__(8))); /* 0 312 */
	CUtlVectorFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1> m_IndexBuffers __attribute__((__aligned__(8))); /* 312 312 */
	uint8 * m_pDecompressedDataBuffer; /* 624 8 */
	/* ../public/modellib/rendermesh.h:798 */
	void InitFromVBIBBlockHeader(RuntimeBuffersInfo_t* , const VBIBBlockHeader_t* );
	/* ../public/modellib/rendermesh.h:801 */
	void FreeScratchMemory(RuntimeBuffersInfo_t* );
	void RuntimeBuffersInfo_t(class RuntimeBuffersInfo_t *); /* linkage=_ZN20RuntimeBuffersInfo_tC4Ev */
	void ~RuntimeBuffersInfo_t(class RuntimeBuffersInfo_t *); /* linkage=_ZN20RuntimeBuffersInfo_tD4Ev */
	void InitFromVBIBBlockHeader(class RuntimeBuffersInfo_t *, const class VBIBBlockHeader_t  *); /* linkage=_ZN20RuntimeBuffersInfo_t23InitFromVBIBBlockHeaderEPK17VBIBBlockHeader_t */
	void FreeScratchMemory(class RuntimeBuffersInfo_t *); /* linkage=_ZN20RuntimeBuffersInfo_t17FreeScratchMemoryEv */
} __attribute__((__aligned__(8)));

// <052026AD> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:771
// member functions: 11
// member variables: 3
// static member variable: 1
// class size: 632
class RuntimeBuffersInfo_t {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:782 */
	struct BufferInfo_t {
		int32 m_nElementCount; /* 0 4 */
		int32 m_nElementSizeInBytes; /* 4 4 */
		CUtlVectorFixedGrowableCompat<RenderInputLayoutField_t, 4> m_inputLayoutFields __attribute__((__aligned__(8))); /* 8 256 */
		const uint8 * m_pData; /* 264 8 */
		size_t m_nDataSize; /* 272 8 */
		/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:790 */
		void InitFromVBIBBlock(BufferInfo_t* , const RenderMeshBufferData_t* );
		/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:791 */
		void UnencodeVertexAndIndexData(BufferInfo_t* , bool, uint8* & );
	} __attribute__((__aligned__(8)));
	/* tag__fprintf: const_type tag not supported! */;
	static const int nVertexIndexDataAlignment = 16; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:776 */
	void RuntimeBuffersInfo_t(RuntimeBuffersInfo_t* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:777 */
	void ~RuntimeBuffersInfo_t(RuntimeBuffersInfo_t* );
	CUtlVectorFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1> m_VertexBuffers __attribute__((__aligned__(8))); /* 0 312 */
	CUtlVectorFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1> m_IndexBuffers __attribute__((__aligned__(8))); /* 312 312 */
	uint8 * m_pDecompressedDataBuffer; /* 624 8 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:798 */
	void InitFromVBIBBlockHeader(RuntimeBuffersInfo_t* , const VBIBBlockHeader_t* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/rendermesh.h:801 */
	void FreeScratchMemory(RuntimeBuffersInfo_t* );
	void RuntimeBuffersInfo_t(class RuntimeBuffersInfo_t *); /* linkage=_ZN20RuntimeBuffersInfo_tC4Ev */
	void ~RuntimeBuffersInfo_t(class RuntimeBuffersInfo_t *); /* linkage=_ZN20RuntimeBuffersInfo_tD4Ev */
	void InitFromVBIBBlockHeader(class RuntimeBuffersInfo_t *, const class VBIBBlockHeader_t  *); /* linkage=_ZN20RuntimeBuffersInfo_t23InitFromVBIBBlockHeaderEPK17VBIBBlockHeader_t */
	void FreeScratchMemory(class RuntimeBuffersInfo_t *); /* linkage=_ZN20RuntimeBuffersInfo_t17FreeScratchMemoryEv */
} __attribute__((__aligned__(8)));

// <000E07CA> ../public/modellib/rendermesh.h:771
// member functions: 12
// member variables: 3
// static member variable: 1
// class size: 632
class RuntimeBuffersInfo_t {
	/* ../public/modellib/rendermesh.h:782 */
	struct BufferInfo_t {
		int32 m_nElementCount; /* 0 4 */
		int32 m_nElementSizeInBytes; /* 4 4 */
		CUtlVectorFixedGrowableCompat<RenderInputLayoutField_t, 4> m_inputLayoutFields __attribute__((__aligned__(8))); /* 8 256 */
		const uint8 * m_pData; /* 264 8 */
		size_t m_nDataSize; /* 272 8 */
		/* ../public/modellib/rendermesh.h:790 */
		void InitFromVBIBBlock(BufferInfo_t* , const RenderMeshBufferData_t* );
		/* ../public/modellib/rendermesh.h:791 */
		void UnencodeVertexAndIndexData(BufferInfo_t* , bool, uint8* & );
		void ~BufferInfo_t(BufferInfo_t* );
	} __attribute__((__aligned__(8)));
	/* tag__fprintf: const_type tag not supported! */;
	static const int nVertexIndexDataAlignment = 16; /* 0 0 */
	/* ../public/modellib/rendermesh.h:776 */
	void RuntimeBuffersInfo_t(RuntimeBuffersInfo_t* );
	/* ../public/modellib/rendermesh.h:777 */
	void ~RuntimeBuffersInfo_t(RuntimeBuffersInfo_t* );
	CUtlVectorFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1> m_VertexBuffers __attribute__((__aligned__(8))); /* 0 312 */
	CUtlVectorFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1> m_IndexBuffers __attribute__((__aligned__(8))); /* 312 312 */
	uint8 * m_pDecompressedDataBuffer; /* 624 8 */
	/* ../public/modellib/rendermesh.h:798 */
	void InitFromVBIBBlockHeader(RuntimeBuffersInfo_t* , const VBIBBlockHeader_t* );
	/* ../public/modellib/rendermesh.h:801 */
	void FreeScratchMemory(RuntimeBuffersInfo_t* );
	void RuntimeBuffersInfo_t(class RuntimeBuffersInfo_t *); /* linkage=_ZN20RuntimeBuffersInfo_tC4Ev */
	void ~RuntimeBuffersInfo_t(class RuntimeBuffersInfo_t *); /* linkage=_ZN20RuntimeBuffersInfo_tD4Ev */
	void InitFromVBIBBlockHeader(class RuntimeBuffersInfo_t *, const class VBIBBlockHeader_t  *); /* linkage=_ZN20RuntimeBuffersInfo_t23InitFromVBIBBlockHeaderEPK17VBIBBlockHeader_t */
	void FreeScratchMemory(class RuntimeBuffersInfo_t *); /* linkage=_ZN20RuntimeBuffersInfo_t17FreeScratchMemoryEv */
} __attribute__((__aligned__(8)));

// <00415BD6> ../public/modellib/rendermesh.h:776
void RuntimeBuffersInfo_t::RuntimeBuffersInfo_t()
{
} /* size: 0 */

// <00415B8D> ../public/modellib/rendermesh.h:777
inline void RuntimeBuffersInfo_t::~RuntimeBuffersInfo_t()
{
} /* size: 0 */

// <04CB45E1> ../public/modellib/rendermesh.h:782
void BufferInfo_t::~BufferInfo_t()
{
} /* size: 0 */

// <04CB45C4> ../public/modellib/rendermesh.h:782
inline void BufferInfo_t::~BufferInfo_t()
{
} /* size: 0 */

// <04CB0796> ../public/modellib/rendermesh.h:782
void BufferInfo_t::BufferInfo_t()
{
} /* size: 0 */

// <04CB0779> ../public/modellib/rendermesh.h:782
inline void BufferInfo_t::BufferInfo_t()
{
} /* size: 0 */

