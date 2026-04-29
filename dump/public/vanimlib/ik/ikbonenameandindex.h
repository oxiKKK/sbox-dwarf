
//
// public/vanimlib/ik/ikbonenameandindex.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 12
//	structs: 6
//

// <03486D95> ../public/vanimlib/ik/ikbonenameandindex.h:9
void IKBoneNameAndIndex_t::~IKBoneNameAndIndex_t()
{
} /* size: 0 */

// <03486D79> ../public/vanimlib/ik/ikbonenameandindex.h:9
inline void IKBoneNameAndIndex_t::~IKBoneNameAndIndex_t()
{
} /* size: 0 */

// <03486D04> ../public/vanimlib/ik/ikbonenameandindex.h:9
inline void IKBoneNameAndIndex_t::operator=(const IKBoneNameAndIndex_t &)
{
} /* size: 0 */

// <00040D5D> ../public/vanimlib/ik/ikbonenameandindex.h:9
// member functions: 14
// member variables: 2
// static member variable: 1
// struct size: 16
struct IKBoneNameAndIndex_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	IKBoneNameAndIndex_t* Schema_MarkHelperFn(void);
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	void Schema_CompileTimeVerificationFunction(IKBoneNameAndIndex_t* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	const char* Schema_StaticClassname(void);
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	const CSchemaClassInfo* Schema_DynamicBinding(const IKBoneNameAndIndex_t* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:14 */
	void KV3TransferSave(const IKBoneNameAndIndex_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:15 */
	void KV3TransferLoad(IKBoneNameAndIndex_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:16 */
	void IKBoneNameAndIndex_t(IKBoneNameAndIndex_t* , const CUtlString& );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:20 */
	void IKBoneNameAndIndex_t(IKBoneNameAndIndex_t* , const IKBoneNameAndIndex_t& );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:25 */
	void IKBoneNameAndIndex_t(IKBoneNameAndIndex_t* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:28 */
	bool Resolve(IKBoneNameAndIndex_t* , const CModel* );
	CUtlString m_Name; /* 0 8 */
	int m_nBoneIndex; /* 8 4 */
};

// <000C1542> ../public/vanimlib/ik/ikbonenameandindex.h:9
// member functions: 16
// member variables: 2
// static member variable: 1
// struct size: 16
struct IKBoneNameAndIndex_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	IKBoneNameAndIndex_t* Schema_MarkHelperFn(void);
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	void Schema_CompileTimeVerificationFunction(IKBoneNameAndIndex_t* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	const char* Schema_StaticClassname(void);
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	const CSchemaClassInfo* Schema_DynamicBinding(const IKBoneNameAndIndex_t* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:14 */
	void KV3TransferSave(const IKBoneNameAndIndex_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:15 */
	void KV3TransferLoad(IKBoneNameAndIndex_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:16 */
	void IKBoneNameAndIndex_t(IKBoneNameAndIndex_t* , const CUtlString& );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:20 */
	void IKBoneNameAndIndex_t(IKBoneNameAndIndex_t* , const IKBoneNameAndIndex_t& );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:25 */
	void IKBoneNameAndIndex_t(IKBoneNameAndIndex_t* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:28 */
	bool Resolve(IKBoneNameAndIndex_t* , const CModel* );
	CUtlString m_Name; /* 0 8 */
	int m_nBoneIndex; /* 8 4 */
	IKBoneNameAndIndex_t& operator=(IKBoneNameAndIndex_t* , const IKBoneNameAndIndex_t& );
	void ~IKBoneNameAndIndex_t(IKBoneNameAndIndex_t* );
};

// <016E4B68> ../public/vanimlib/ik/ikbonenameandindex.h:9
// member functions: 15
// member variables: 2
// static member variable: 1
// struct size: 16
struct IKBoneNameAndIndex_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	IKBoneNameAndIndex_t* Schema_MarkHelperFn(void);
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	void Schema_CompileTimeVerificationFunction(IKBoneNameAndIndex_t* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	const char* Schema_StaticClassname(void);
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	const CSchemaClassInfo* Schema_DynamicBinding(const IKBoneNameAndIndex_t* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:14 */
	void KV3TransferSave(const IKBoneNameAndIndex_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:15 */
	void KV3TransferLoad(IKBoneNameAndIndex_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:16 */
	void IKBoneNameAndIndex_t(IKBoneNameAndIndex_t* , const CUtlString& );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:20 */
	void IKBoneNameAndIndex_t(IKBoneNameAndIndex_t* , const IKBoneNameAndIndex_t& );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:25 */
	void IKBoneNameAndIndex_t(IKBoneNameAndIndex_t* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:28 */
	bool Resolve(IKBoneNameAndIndex_t* , const CModel* );
	CUtlString m_Name; /* 0 8 */
	int m_nBoneIndex; /* 8 4 */
	void ~IKBoneNameAndIndex_t(IKBoneNameAndIndex_t* );
};

// <033129A0> ../public/vanimlib/ik/ikbonenameandindex.h:9
// member functions: 15
// member variables: 2
// static member variable: 1
// struct size: 16
struct IKBoneNameAndIndex_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	IKBoneNameAndIndex_t* Schema_MarkHelperFn(void);
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	void Schema_CompileTimeVerificationFunction(IKBoneNameAndIndex_t* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	const char* Schema_StaticClassname(void);
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	const CSchemaClassInfo* Schema_DynamicBinding(const IKBoneNameAndIndex_t* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:14 */
	void KV3TransferSave(const IKBoneNameAndIndex_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:15 */
	void KV3TransferLoad(IKBoneNameAndIndex_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:16 */
	void IKBoneNameAndIndex_t(IKBoneNameAndIndex_t* , const CUtlString& );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:20 */
	void IKBoneNameAndIndex_t(IKBoneNameAndIndex_t* , const IKBoneNameAndIndex_t& );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:25 */
	void IKBoneNameAndIndex_t(IKBoneNameAndIndex_t* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:28 */
	bool Resolve(IKBoneNameAndIndex_t* , const CModel* );
	CUtlString m_Name; /* 0 8 */
	int m_nBoneIndex; /* 8 4 */
	IKBoneNameAndIndex_t& operator=(IKBoneNameAndIndex_t* , const IKBoneNameAndIndex_t& );
};

// <03340A1F> ../public/vanimlib/ik/ikbonenameandindex.h:9
// member functions: 16
// member variables: 2
// static member variable: 1
// struct size: 16
struct IKBoneNameAndIndex_t {
	/* ../public/vanimlib/ik/ikbonenameandindex.h:11 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	IKBoneNameAndIndex_t* Schema_MarkHelperFn(void);
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	void Schema_CompileTimeVerificationFunction(IKBoneNameAndIndex_t* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	const char* Schema_StaticClassname(void);
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	const CSchemaClassInfo* Schema_DynamicBinding(const IKBoneNameAndIndex_t* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:14 */
	void KV3TransferSave(const IKBoneNameAndIndex_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:15 */
	void KV3TransferLoad(IKBoneNameAndIndex_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:16 */
	void IKBoneNameAndIndex_t(IKBoneNameAndIndex_t* , const CUtlString& );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:20 */
	void IKBoneNameAndIndex_t(IKBoneNameAndIndex_t* , const IKBoneNameAndIndex_t& );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:25 */
	void IKBoneNameAndIndex_t(IKBoneNameAndIndex_t* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:28 */
	bool Resolve(IKBoneNameAndIndex_t* , const CModel* );
	CUtlString m_Name; /* 0 8 */
	int m_nBoneIndex; /* 8 4 */
	IKBoneNameAndIndex_t& operator=(IKBoneNameAndIndex_t* , const IKBoneNameAndIndex_t& );
	void ~IKBoneNameAndIndex_t(IKBoneNameAndIndex_t* );
};

// <0339C4E5> ../public/vanimlib/ik/ikbonenameandindex.h:9
// member functions: 14
// member variables: 2
// static member variable: 1
// struct size: 16
struct IKBoneNameAndIndex_t {
	/* ../public/vanimlib/ik/ikbonenameandindex.h:11 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	IKBoneNameAndIndex_t* Schema_MarkHelperFn(void);
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	void Schema_CompileTimeVerificationFunction(IKBoneNameAndIndex_t* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	const char* Schema_StaticClassname(void);
	/* ../public/vanimlib/ik/ikbonenameandindex.h:12 */
	const CSchemaClassInfo* Schema_DynamicBinding(const IKBoneNameAndIndex_t* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:14 */
	void KV3TransferSave(const IKBoneNameAndIndex_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:15 */
	void KV3TransferLoad(IKBoneNameAndIndex_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:16 */
	void IKBoneNameAndIndex_t(IKBoneNameAndIndex_t* , const CUtlString& );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:20 */
	void IKBoneNameAndIndex_t(IKBoneNameAndIndex_t* , const IKBoneNameAndIndex_t& );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:25 */
	void IKBoneNameAndIndex_t(IKBoneNameAndIndex_t* );
	/* ../public/vanimlib/ik/ikbonenameandindex.h:28 */
	bool Resolve(IKBoneNameAndIndex_t* , const CModel* );
	CUtlString m_Name; /* 0 8 */
	int m_nBoneIndex; /* 8 4 */
};

// <00D20908> ../public/vanimlib/ik/ikbonenameandindex.h:12
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <00D20901> ../public/vanimlib/ik/ikbonenameandindex.h:12
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <00D208E8> ../public/vanimlib/ik/ikbonenameandindex.h:12
inline void IKBoneNameAndIndex_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <0337F06B> ../public/vanimlib/ik/ikbonenameandindex.h:16
void IKBoneNameAndIndex_t::IKBoneNameAndIndex_t(const CUtlString& name)
{
} /* size: 0 */

// <0337F046> ../public/vanimlib/ik/ikbonenameandindex.h:16
inline void IKBoneNameAndIndex_t::IKBoneNameAndIndex_t(const CUtlString& name)
{
} /* size: 0 */

// <0337F02A> ../public/vanimlib/ik/ikbonenameandindex.h:20
void IKBoneNameAndIndex_t::IKBoneNameAndIndex_t(const IKBoneNameAndIndex_t& kRhs)
{
} /* size: 0 */

// <0337F005> ../public/vanimlib/ik/ikbonenameandindex.h:20
inline void IKBoneNameAndIndex_t::IKBoneNameAndIndex_t(const IKBoneNameAndIndex_t& kRhs)
{
} /* size: 0 */

// <0348A3A5> ../public/vanimlib/ik/ikbonenameandindex.h:25
void IKBoneNameAndIndex_t::IKBoneNameAndIndex_t()
{
} /* size: 0 */

// <0348A38C> ../public/vanimlib/ik/ikbonenameandindex.h:25
inline void IKBoneNameAndIndex_t::IKBoneNameAndIndex_t()
{
} /* size: 0 */

