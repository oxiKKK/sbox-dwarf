
//
// public/animationsystem/animgraphids.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 56
//	structs: 20
//

// <01A7CE57> ../public/animationsystem/animgraphids.h:68
void AnimNodeID::AnimNodeID(const AnimNodeID& rhs)
{
} /* size: 0 */

// <01A7CE32> ../public/animationsystem/animgraphids.h:68
inline void AnimNodeID::AnimNodeID(const AnimNodeID& rhs)
{
} /* size: 0 */

// <01A7CE19> ../public/animationsystem/animgraphids.h:68
inline void AnimNodeID::IsValid()
{
} /* size: 0 */

// <01A02328> ../public/animationsystem/animgraphids.h:68
void AnimNodeID::AnimNodeID()
{
} /* size: 0 */

// <01A0230F> ../public/animationsystem/animgraphids.h:68
inline void AnimNodeID::AnimNodeID()
{
} /* size: 0 */

// <01A022A9> ../public/animationsystem/animgraphids.h:68
inline void AnimNodeID::operator=(const AnimNodeID& rhs)
{
} /* size: 0 */

// <015CDDE1> ../public/animationsystem/animgraphids.h:68
// variable: 1
inline void DefaultHashFunctor<AnimNodeID>::operator(AnimNodeID s)
{
	Mix32HashFunctor func; // 68
} /* size: 0, variables: 1 */

// <00F96930> ../public/animationsystem/animgraphids.h:68
inline void AnimNodeID::operator=(uint32 id)
{
} /* size: 0 */

// <00AAA093> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:68
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <00AAA08D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:68
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <00AAA074> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:68
inline void AnimNodeID::Schema_DynamicBinding()
{
} /* size: 0 */

// <00AA9FA1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:68
void GetAsString(IPropertyEditDomain* pDomain, const void* pClassInstance, CUtlString* pOutStrValue)
{
} /* size: 23 */

// <00AA9F30> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:68
void SetAsString(IPropertyEditDomain* pDomain, void* pClassInstance, const char* pStrValue)
{
} /* size: 32 */

// <001EECF1> ../public/animationsystem/animgraphids.h:68
// member functions: 24
// member variable: 1
// static member variables: 2
// struct size: 4
struct AnimNodeID {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animgraphids.h:68 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animgraphids.h:68 */
	AnimNodeID* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animgraphids.h:68 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animgraphids.h:68 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animgraphids.h:68 */
	void Schema_CompileTimeVerificationFunction(AnimNodeID* );
	/* ../public/animationsystem/animgraphids.h:68 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animgraphids.h:68 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animgraphids.h:68 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AnimNodeID* );
	/* ../public/animationsystem/animgraphids.h:68 */
	AnimNodeID* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animgraphids.h:68 */
	void KV3TransferSave(const AnimNodeID* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animgraphids.h:68 */
	void KV3TransferLoad(AnimNodeID* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animgraphids.h:68 */
	void KV3TransferSave_AnimNodeID(const AnimNodeID* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animgraphids.h:68 */
	void KV3TransferLoad_AnimNodeID(AnimNodeID* , CKV3TransferLoadContext* );
	uint32 m_id; /* 0 4 */
	static const uint32 INVALIDID = 4294967295; /* 0 0 */
	/* ../public/animationsystem/animgraphids.h:68 */
	void AnimNodeID(AnimNodeID* );
	/* ../public/animationsystem/animgraphids.h:68 */
	void AnimNodeID(AnimNodeID* , uint32);
	/* ../public/animationsystem/animgraphids.h:68 */
	void AnimNodeID(AnimNodeID* , const AnimNodeID& );
	/* ../public/animationsystem/animgraphids.h:68 */
	AnimNodeID& operator=(AnimNodeID* , const AnimNodeID& );
	/* ../public/animationsystem/animgraphids.h:68 */
	AnimNodeID& operator=(AnimNodeID* , uint32);
	/* ../public/animationsystem/animgraphids.h:68 */
	bool IsValid(const AnimNodeID* );
	/* ../public/animationsystem/animgraphids.h:68 */
	bool operator==(const AnimNodeID* , const AnimNodeID& );
	/* ../public/animationsystem/animgraphids.h:68 */
	bool operator!=(const AnimNodeID* , const AnimNodeID& );
	/* ../public/animationsystem/animgraphids.h:68 */
	bool operator<(const AnimNodeID* , const AnimNodeID& );
	/* ../public/animationsystem/animgraphids.h:68 */
	void GetAsString(IPropertyEditDomain* , const void* , CUtlString* );
	/* ../public/animationsystem/animgraphids.h:68 */
	void SetAsString(IPropertyEditDomain* , void* , const char* );
};

// <003DF49D> ../public/animationsystem/animgraphids.h:68
// member function: 1
// struct size: 1
struct DefaultHashFunctor<AnimNodeID> {
	/* ../public/animationsystem/animgraphids.h:68 */
	unsigned int operator()(const DefaultHashFunctor<AnimNodeID>* , AnimNodeID);
};

// <0048D4CE> ../public/animationsystem/animgraphids.h:68
// member functions: 24
// member variable: 1
// static member variables: 2
// struct size: 4
struct AnimNodeID {
	/* ../public/animationsystem/animgraphids.h:68 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animgraphids.h:68 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animgraphids.h:68 */
	AnimNodeID* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animgraphids.h:68 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animgraphids.h:68 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animgraphids.h:68 */
	void Schema_CompileTimeVerificationFunction(AnimNodeID* );
	/* ../public/animationsystem/animgraphids.h:68 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animgraphids.h:68 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animgraphids.h:68 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AnimNodeID* );
	/* ../public/animationsystem/animgraphids.h:68 */
	AnimNodeID* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animgraphids.h:68 */
	void KV3TransferSave(const AnimNodeID* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animgraphids.h:68 */
	void KV3TransferLoad(AnimNodeID* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animgraphids.h:68 */
	void KV3TransferSave_AnimNodeID(const AnimNodeID* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animgraphids.h:68 */
	void KV3TransferLoad_AnimNodeID(AnimNodeID* , CKV3TransferLoadContext* );
	uint32 m_id; /* 0 4 */
	static const uint32 INVALIDID = 4294967295; /* 0 0 */
	/* ../public/animationsystem/animgraphids.h:68 */
	void AnimNodeID(AnimNodeID* );
	/* ../public/animationsystem/animgraphids.h:68 */
	void AnimNodeID(AnimNodeID* , uint32);
	/* ../public/animationsystem/animgraphids.h:68 */
	void AnimNodeID(AnimNodeID* , const AnimNodeID& );
	/* ../public/animationsystem/animgraphids.h:68 */
	AnimNodeID& operator=(AnimNodeID* , const AnimNodeID& );
	/* ../public/animationsystem/animgraphids.h:68 */
	AnimNodeID& operator=(AnimNodeID* , uint32);
	/* ../public/animationsystem/animgraphids.h:68 */
	bool IsValid(const AnimNodeID* );
	/* ../public/animationsystem/animgraphids.h:68 */
	bool operator==(const AnimNodeID* , const AnimNodeID& );
	/* ../public/animationsystem/animgraphids.h:68 */
	bool operator!=(const AnimNodeID* , const AnimNodeID& );
	/* ../public/animationsystem/animgraphids.h:68 */
	bool operator<(const AnimNodeID* , const AnimNodeID& );
	/* ../public/animationsystem/animgraphids.h:68 */
	void GetAsString(IPropertyEditDomain* , const void* , CUtlString* );
	/* ../public/animationsystem/animgraphids.h:68 */
	void SetAsString(IPropertyEditDomain* , void* , const char* );
};

// <00A95CF2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:68
// member functions: 24
// member variable: 1
// static member variables: 2
// struct size: 4
struct AnimNodeID {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:68 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:68 */
	AnimNodeID* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:68 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:68 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:68 */
	void Schema_CompileTimeVerificationFunction(AnimNodeID* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:68 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:68 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:68 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AnimNodeID* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:68 */
	AnimNodeID* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:68 */
	void KV3TransferSave(const AnimNodeID* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:68 */
	void KV3TransferLoad(AnimNodeID* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:68 */
	void KV3TransferSave_AnimNodeID(const AnimNodeID* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:68 */
	void KV3TransferLoad_AnimNodeID(AnimNodeID* , CKV3TransferLoadContext* );
	uint32 m_id; /* 0 4 */
	static const uint32 INVALIDID = 4294967295; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:68 */
	void AnimNodeID(AnimNodeID* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:68 */
	void AnimNodeID(AnimNodeID* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:68 */
	void AnimNodeID(AnimNodeID* , const AnimNodeID& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:68 */
	AnimNodeID& operator=(AnimNodeID* , const AnimNodeID& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:68 */
	AnimNodeID& operator=(AnimNodeID* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:68 */
	bool IsValid(const AnimNodeID* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:68 */
	bool operator==(const AnimNodeID* , const AnimNodeID& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:68 */
	bool operator!=(const AnimNodeID* , const AnimNodeID& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:68 */
	bool operator<(const AnimNodeID* , const AnimNodeID& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:68 */
	void GetAsString(IPropertyEditDomain* , const void* , CUtlString* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:68 */
	void SetAsString(IPropertyEditDomain* , void* , const char* );
};

// <01A02279> ../public/animationsystem/animgraphids.h:69
void AnimOutputID::AnimOutputID()
{
} /* size: 0 */

// <01A02260> ../public/animationsystem/animgraphids.h:69
inline void AnimOutputID::AnimOutputID()
{
} /* size: 0 */

// <01A02244> ../public/animationsystem/animgraphids.h:69
void AnimOutputID::AnimOutputID(const AnimOutputID& rhs)
{
} /* size: 0 */

// <01A0221F> ../public/animationsystem/animgraphids.h:69
inline void AnimOutputID::AnimOutputID(const AnimOutputID& rhs)
{
} /* size: 0 */

// <01A021FA> ../public/animationsystem/animgraphids.h:69
inline void AnimOutputID::operator=(const AnimOutputID& rhs)
{
} /* size: 0 */

// <015CDD87> ../public/animationsystem/animgraphids.h:69
inline void AnimOutputID::IsValid()
{
} /* size: 0 */

// <012999C9> ../public/animationsystem/animgraphids.h:69
// variable: 1
inline void DefaultHashFunctor<AnimOutputID>::operator(AnimOutputID s)
{
	Mix32HashFunctor func; // 69
} /* size: 0, variables: 1 */

// <011912F2> ../public/animationsystem/animgraphids.h:69
inline void AnimOutputID::operator=(uint32 id)
{
} /* size: 0 */

// <00AA9F0B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:69
inline void AnimOutputID::Schema_DynamicBinding()
{
} /* size: 0 */

// <001EF034> ../public/animationsystem/animgraphids.h:69
// member functions: 24
// member variable: 1
// static member variables: 2
// struct size: 4
struct AnimOutputID {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animgraphids.h:69 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animgraphids.h:69 */
	AnimOutputID* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animgraphids.h:69 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animgraphids.h:69 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animgraphids.h:69 */
	void Schema_CompileTimeVerificationFunction(AnimOutputID* );
	/* ../public/animationsystem/animgraphids.h:69 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animgraphids.h:69 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animgraphids.h:69 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AnimOutputID* );
	/* ../public/animationsystem/animgraphids.h:69 */
	AnimOutputID* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animgraphids.h:69 */
	void KV3TransferSave(const AnimOutputID* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animgraphids.h:69 */
	void KV3TransferLoad(AnimOutputID* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animgraphids.h:69 */
	void KV3TransferSave_AnimOutputID(const AnimOutputID* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animgraphids.h:69 */
	void KV3TransferLoad_AnimOutputID(AnimOutputID* , CKV3TransferLoadContext* );
	uint32 m_id; /* 0 4 */
	static const uint32 INVALIDID = 4294967295; /* 0 0 */
	/* ../public/animationsystem/animgraphids.h:69 */
	void AnimOutputID(AnimOutputID* );
	/* ../public/animationsystem/animgraphids.h:69 */
	void AnimOutputID(AnimOutputID* , uint32);
	/* ../public/animationsystem/animgraphids.h:69 */
	void AnimOutputID(AnimOutputID* , const AnimOutputID& );
	/* ../public/animationsystem/animgraphids.h:69 */
	AnimOutputID& operator=(AnimOutputID* , const AnimOutputID& );
	/* ../public/animationsystem/animgraphids.h:69 */
	AnimOutputID& operator=(AnimOutputID* , uint32);
	/* ../public/animationsystem/animgraphids.h:69 */
	bool IsValid(const AnimOutputID* );
	/* ../public/animationsystem/animgraphids.h:69 */
	bool operator==(const AnimOutputID* , const AnimOutputID& );
	/* ../public/animationsystem/animgraphids.h:69 */
	bool operator!=(const AnimOutputID* , const AnimOutputID& );
	/* ../public/animationsystem/animgraphids.h:69 */
	bool operator<(const AnimOutputID* , const AnimOutputID& );
	/* ../public/animationsystem/animgraphids.h:69 */
	void GetAsString(IPropertyEditDomain* , const void* , CUtlString* );
	/* ../public/animationsystem/animgraphids.h:69 */
	void SetAsString(IPropertyEditDomain* , void* , const char* );
};

// <0048D82B> ../public/animationsystem/animgraphids.h:69
// member functions: 24
// member variable: 1
// static member variables: 2
// struct size: 4
struct AnimOutputID {
	/* ../public/animationsystem/animgraphids.h:69 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animgraphids.h:69 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animgraphids.h:69 */
	AnimOutputID* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animgraphids.h:69 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animgraphids.h:69 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animgraphids.h:69 */
	void Schema_CompileTimeVerificationFunction(AnimOutputID* );
	/* ../public/animationsystem/animgraphids.h:69 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animgraphids.h:69 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animgraphids.h:69 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AnimOutputID* );
	/* ../public/animationsystem/animgraphids.h:69 */
	AnimOutputID* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animgraphids.h:69 */
	void KV3TransferSave(const AnimOutputID* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animgraphids.h:69 */
	void KV3TransferLoad(AnimOutputID* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animgraphids.h:69 */
	void KV3TransferSave_AnimOutputID(const AnimOutputID* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animgraphids.h:69 */
	void KV3TransferLoad_AnimOutputID(AnimOutputID* , CKV3TransferLoadContext* );
	uint32 m_id; /* 0 4 */
	static const uint32 INVALIDID = 4294967295; /* 0 0 */
	/* ../public/animationsystem/animgraphids.h:69 */
	void AnimOutputID(AnimOutputID* );
	/* ../public/animationsystem/animgraphids.h:69 */
	void AnimOutputID(AnimOutputID* , uint32);
	/* ../public/animationsystem/animgraphids.h:69 */
	void AnimOutputID(AnimOutputID* , const AnimOutputID& );
	/* ../public/animationsystem/animgraphids.h:69 */
	AnimOutputID& operator=(AnimOutputID* , const AnimOutputID& );
	/* ../public/animationsystem/animgraphids.h:69 */
	AnimOutputID& operator=(AnimOutputID* , uint32);
	/* ../public/animationsystem/animgraphids.h:69 */
	bool IsValid(const AnimOutputID* );
	/* ../public/animationsystem/animgraphids.h:69 */
	bool operator==(const AnimOutputID* , const AnimOutputID& );
	/* ../public/animationsystem/animgraphids.h:69 */
	bool operator!=(const AnimOutputID* , const AnimOutputID& );
	/* ../public/animationsystem/animgraphids.h:69 */
	bool operator<(const AnimOutputID* , const AnimOutputID& );
	/* ../public/animationsystem/animgraphids.h:69 */
	void GetAsString(IPropertyEditDomain* , const void* , CUtlString* );
	/* ../public/animationsystem/animgraphids.h:69 */
	void SetAsString(IPropertyEditDomain* , void* , const char* );
};

// <0048DB88> ../public/animationsystem/animgraphids.h:69
// member function: 1
// struct size: 1
struct DefaultHashFunctor<AnimOutputID> {
	/* ../public/animationsystem/animgraphids.h:69 */
	unsigned int operator()(const DefaultHashFunctor<AnimOutputID>* , AnimOutputID);
};

// <00A9603A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:69
// member functions: 24
// member variable: 1
// static member variables: 2
// struct size: 4
struct AnimOutputID {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:69 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:69 */
	AnimOutputID* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:69 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:69 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:69 */
	void Schema_CompileTimeVerificationFunction(AnimOutputID* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:69 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:69 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:69 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AnimOutputID* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:69 */
	AnimOutputID* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:69 */
	void KV3TransferSave(const AnimOutputID* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:69 */
	void KV3TransferLoad(AnimOutputID* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:69 */
	void KV3TransferSave_AnimOutputID(const AnimOutputID* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:69 */
	void KV3TransferLoad_AnimOutputID(AnimOutputID* , CKV3TransferLoadContext* );
	uint32 m_id; /* 0 4 */
	static const uint32 INVALIDID = 4294967295; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:69 */
	void AnimOutputID(AnimOutputID* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:69 */
	void AnimOutputID(AnimOutputID* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:69 */
	void AnimOutputID(AnimOutputID* , const AnimOutputID& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:69 */
	AnimOutputID& operator=(AnimOutputID* , const AnimOutputID& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:69 */
	AnimOutputID& operator=(AnimOutputID* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:69 */
	bool IsValid(const AnimOutputID* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:69 */
	bool operator==(const AnimOutputID* , const AnimOutputID& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:69 */
	bool operator!=(const AnimOutputID* , const AnimOutputID& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:69 */
	bool operator<(const AnimOutputID* , const AnimOutputID& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:69 */
	void GetAsString(IPropertyEditDomain* , const void* , CUtlString* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:69 */
	void SetAsString(IPropertyEditDomain* , void* , const char* );
};

// <01A021E3> ../public/animationsystem/animgraphids.h:70
void AnimStateID::AnimStateID()
{
} /* size: 0 */

// <01A021CA> ../public/animationsystem/animgraphids.h:70
inline void AnimStateID::AnimStateID()
{
} /* size: 0 */

// <01A021AE> ../public/animationsystem/animgraphids.h:70
void AnimStateID::AnimStateID(const AnimStateID& rhs)
{
} /* size: 0 */

// <01A02189> ../public/animationsystem/animgraphids.h:70
inline void AnimStateID::AnimStateID(const AnimStateID& rhs)
{
} /* size: 0 */

// <01A02164> ../public/animationsystem/animgraphids.h:70
inline void AnimStateID::operator=(const AnimStateID& rhs)
{
} /* size: 0 */

// <01A0214B> ../public/animationsystem/animgraphids.h:70
inline void AnimStateID::IsValid()
{
} /* size: 0 */

// <01971696> ../public/animationsystem/animgraphids.h:70
void AnimStateID::AnimStateID(const uint32 id)
{
} /* size: 0 */

// <01971672> ../public/animationsystem/animgraphids.h:70
inline void AnimStateID::AnimStateID(const uint32 id)
{
} /* size: 0 */

// <01299934> ../public/animationsystem/animgraphids.h:70
inline void AnimStateID::operator=(uint32 id)
{
} /* size: 0 */

// <00AA9DA2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:70
inline void AnimStateID::Schema_DynamicBinding()
{
} /* size: 0 */

// <001EF377> ../public/animationsystem/animgraphids.h:70
// member functions: 24
// member variable: 1
// static member variables: 2
// struct size: 4
struct AnimStateID {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animgraphids.h:70 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animgraphids.h:70 */
	AnimStateID* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animgraphids.h:70 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animgraphids.h:70 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animgraphids.h:70 */
	void Schema_CompileTimeVerificationFunction(AnimStateID* );
	/* ../public/animationsystem/animgraphids.h:70 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animgraphids.h:70 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animgraphids.h:70 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AnimStateID* );
	/* ../public/animationsystem/animgraphids.h:70 */
	AnimStateID* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animgraphids.h:70 */
	void KV3TransferSave(const AnimStateID* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animgraphids.h:70 */
	void KV3TransferLoad(AnimStateID* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animgraphids.h:70 */
	void KV3TransferSave_AnimStateID(const AnimStateID* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animgraphids.h:70 */
	void KV3TransferLoad_AnimStateID(AnimStateID* , CKV3TransferLoadContext* );
	uint32 m_id; /* 0 4 */
	static const uint32 INVALIDID = 4294967295; /* 0 0 */
	/* ../public/animationsystem/animgraphids.h:70 */
	void AnimStateID(AnimStateID* );
	/* ../public/animationsystem/animgraphids.h:70 */
	void AnimStateID(AnimStateID* , uint32);
	/* ../public/animationsystem/animgraphids.h:70 */
	void AnimStateID(AnimStateID* , const AnimStateID& );
	/* ../public/animationsystem/animgraphids.h:70 */
	AnimStateID& operator=(AnimStateID* , const AnimStateID& );
	/* ../public/animationsystem/animgraphids.h:70 */
	AnimStateID& operator=(AnimStateID* , uint32);
	/* ../public/animationsystem/animgraphids.h:70 */
	bool IsValid(const AnimStateID* );
	/* ../public/animationsystem/animgraphids.h:70 */
	bool operator==(const AnimStateID* , const AnimStateID& );
	/* ../public/animationsystem/animgraphids.h:70 */
	bool operator!=(const AnimStateID* , const AnimStateID& );
	/* ../public/animationsystem/animgraphids.h:70 */
	bool operator<(const AnimStateID* , const AnimStateID& );
	/* ../public/animationsystem/animgraphids.h:70 */
	void GetAsString(IPropertyEditDomain* , const void* , CUtlString* );
	/* ../public/animationsystem/animgraphids.h:70 */
	void SetAsString(IPropertyEditDomain* , void* , const char* );
};

// <0082CC66> ../public/animationsystem/animgraphids.h:70
// member functions: 24
// member variable: 1
// static member variables: 2
// struct size: 4
struct AnimStateID {
	/* ../public/animationsystem/animgraphids.h:70 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animgraphids.h:70 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animgraphids.h:70 */
	AnimStateID* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animgraphids.h:70 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animgraphids.h:70 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animgraphids.h:70 */
	void Schema_CompileTimeVerificationFunction(AnimStateID* );
	/* ../public/animationsystem/animgraphids.h:70 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animgraphids.h:70 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animgraphids.h:70 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AnimStateID* );
	/* ../public/animationsystem/animgraphids.h:70 */
	AnimStateID* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animgraphids.h:70 */
	void KV3TransferSave(const AnimStateID* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animgraphids.h:70 */
	void KV3TransferLoad(AnimStateID* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animgraphids.h:70 */
	void KV3TransferSave_AnimStateID(const AnimStateID* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animgraphids.h:70 */
	void KV3TransferLoad_AnimStateID(AnimStateID* , CKV3TransferLoadContext* );
	uint32 m_id; /* 0 4 */
	static const uint32 INVALIDID = 4294967295; /* 0 0 */
	/* ../public/animationsystem/animgraphids.h:70 */
	void AnimStateID(AnimStateID* );
	/* ../public/animationsystem/animgraphids.h:70 */
	void AnimStateID(AnimStateID* , uint32);
	/* ../public/animationsystem/animgraphids.h:70 */
	void AnimStateID(AnimStateID* , const AnimStateID& );
	/* ../public/animationsystem/animgraphids.h:70 */
	AnimStateID& operator=(AnimStateID* , const AnimStateID& );
	/* ../public/animationsystem/animgraphids.h:70 */
	AnimStateID& operator=(AnimStateID* , uint32);
	/* ../public/animationsystem/animgraphids.h:70 */
	bool IsValid(const AnimStateID* );
	/* ../public/animationsystem/animgraphids.h:70 */
	bool operator==(const AnimStateID* , const AnimStateID& );
	/* ../public/animationsystem/animgraphids.h:70 */
	bool operator!=(const AnimStateID* , const AnimStateID& );
	/* ../public/animationsystem/animgraphids.h:70 */
	bool operator<(const AnimStateID* , const AnimStateID& );
	/* ../public/animationsystem/animgraphids.h:70 */
	void GetAsString(IPropertyEditDomain* , const void* , CUtlString* );
	/* ../public/animationsystem/animgraphids.h:70 */
	void SetAsString(IPropertyEditDomain* , void* , const char* );
};

// <00A96382> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:70
// member functions: 24
// member variable: 1
// static member variables: 2
// struct size: 4
struct AnimStateID {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:70 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:70 */
	AnimStateID* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:70 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:70 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:70 */
	void Schema_CompileTimeVerificationFunction(AnimStateID* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:70 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:70 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:70 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AnimStateID* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:70 */
	AnimStateID* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:70 */
	void KV3TransferSave(const AnimStateID* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:70 */
	void KV3TransferLoad(AnimStateID* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:70 */
	void KV3TransferSave_AnimStateID(const AnimStateID* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:70 */
	void KV3TransferLoad_AnimStateID(AnimStateID* , CKV3TransferLoadContext* );
	uint32 m_id; /* 0 4 */
	static const uint32 INVALIDID = 4294967295; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:70 */
	void AnimStateID(AnimStateID* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:70 */
	void AnimStateID(AnimStateID* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:70 */
	void AnimStateID(AnimStateID* , const AnimStateID& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:70 */
	AnimStateID& operator=(AnimStateID* , const AnimStateID& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:70 */
	AnimStateID& operator=(AnimStateID* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:70 */
	bool IsValid(const AnimStateID* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:70 */
	bool operator==(const AnimStateID* , const AnimStateID& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:70 */
	bool operator!=(const AnimStateID* , const AnimStateID& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:70 */
	bool operator<(const AnimStateID* , const AnimStateID& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:70 */
	void GetAsString(IPropertyEditDomain* , const void* , CUtlString* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:70 */
	void SetAsString(IPropertyEditDomain* , void* , const char* );
};

// <034C7042> ../public/animationsystem/animgraphids.h:71
inline void AnimParamID::IsValid()
{
} /* size: 0 */

// <03324D5A> ../public/animationsystem/animgraphids.h:71
void AnimParamID::AnimParamID()
{
} /* size: 0 */

// <03324D41> ../public/animationsystem/animgraphids.h:71
inline void AnimParamID::AnimParamID()
{
} /* size: 0 */

// <03324D25> ../public/animationsystem/animgraphids.h:71
void AnimParamID::AnimParamID(const AnimParamID& rhs)
{
} /* size: 0 */

// <03324D00> ../public/animationsystem/animgraphids.h:71
inline void AnimParamID::AnimParamID(const AnimParamID& rhs)
{
} /* size: 0 */

// <03324CDB> ../public/animationsystem/animgraphids.h:71
inline void AnimParamID::operator=(const AnimParamID& rhs)
{
} /* size: 0 */

// <01A7CD5F> ../public/animationsystem/animgraphids.h:71
inline void AnimParamID::operator=(uint32 id)
{
} /* size: 0 */

// <00F96822> ../public/animationsystem/animgraphids.h:71
void AnimParamID::AnimParamID(const uint32 id)
{
} /* size: 0 */

// <00F967FE> ../public/animationsystem/animgraphids.h:71
inline void AnimParamID::AnimParamID(const uint32 id)
{
} /* size: 0 */

// <00F9672C> ../public/animationsystem/animgraphids.h:71
// variable: 1
inline void DefaultHashFunctor<AnimParamID>::operator(AnimParamID s)
{
	Mix32HashFunctor func; // 71
} /* size: 0, variables: 1 */

// <00AA9C39> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:71
inline void AnimParamID::Schema_DynamicBinding()
{
} /* size: 0 */

// <00045E58> ../public/animationsystem/animgraphids.h:71
// member functions: 24
// member variable: 1
// static member variables: 2
// struct size: 4
struct AnimParamID {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animgraphids.h:71 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animgraphids.h:71 */
	AnimParamID* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animgraphids.h:71 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animgraphids.h:71 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animgraphids.h:71 */
	void Schema_CompileTimeVerificationFunction(AnimParamID* );
	/* ../public/animationsystem/animgraphids.h:71 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animgraphids.h:71 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animgraphids.h:71 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AnimParamID* );
	/* ../public/animationsystem/animgraphids.h:71 */
	AnimParamID* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animgraphids.h:71 */
	void KV3TransferSave(const AnimParamID* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animgraphids.h:71 */
	void KV3TransferLoad(AnimParamID* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animgraphids.h:71 */
	void KV3TransferSave_AnimParamID(const AnimParamID* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animgraphids.h:71 */
	void KV3TransferLoad_AnimParamID(AnimParamID* , CKV3TransferLoadContext* );
	uint32 m_id; /* 0 4 */
	static const uint32 INVALIDID = 4294967295; /* 0 0 */
	/* ../public/animationsystem/animgraphids.h:71 */
	void AnimParamID(AnimParamID* );
	/* ../public/animationsystem/animgraphids.h:71 */
	void AnimParamID(AnimParamID* , uint32);
	/* ../public/animationsystem/animgraphids.h:71 */
	void AnimParamID(AnimParamID* , const AnimParamID& );
	/* ../public/animationsystem/animgraphids.h:71 */
	AnimParamID& operator=(AnimParamID* , const AnimParamID& );
	/* ../public/animationsystem/animgraphids.h:71 */
	AnimParamID& operator=(AnimParamID* , uint32);
	/* ../public/animationsystem/animgraphids.h:71 */
	bool IsValid(const AnimParamID* );
	/* ../public/animationsystem/animgraphids.h:71 */
	bool operator==(const AnimParamID* , const AnimParamID& );
	/* ../public/animationsystem/animgraphids.h:71 */
	bool operator!=(const AnimParamID* , const AnimParamID& );
	/* ../public/animationsystem/animgraphids.h:71 */
	bool operator<(const AnimParamID* , const AnimParamID& );
	/* ../public/animationsystem/animgraphids.h:71 */
	void GetAsString(IPropertyEditDomain* , const void* , CUtlString* );
	/* ../public/animationsystem/animgraphids.h:71 */
	void SetAsString(IPropertyEditDomain* , void* , const char* );
};

// <003DF4E3> ../public/animationsystem/animgraphids.h:71
// member functions: 24
// member variable: 1
// static member variables: 2
// struct size: 4
struct AnimParamID {
	/* ../public/animationsystem/animgraphids.h:71 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animgraphids.h:71 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animgraphids.h:71 */
	AnimParamID* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animgraphids.h:71 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animgraphids.h:71 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animgraphids.h:71 */
	void Schema_CompileTimeVerificationFunction(AnimParamID* );
	/* ../public/animationsystem/animgraphids.h:71 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animgraphids.h:71 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animgraphids.h:71 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AnimParamID* );
	/* ../public/animationsystem/animgraphids.h:71 */
	AnimParamID* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animgraphids.h:71 */
	void KV3TransferSave(const AnimParamID* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animgraphids.h:71 */
	void KV3TransferLoad(AnimParamID* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animgraphids.h:71 */
	void KV3TransferSave_AnimParamID(const AnimParamID* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animgraphids.h:71 */
	void KV3TransferLoad_AnimParamID(AnimParamID* , CKV3TransferLoadContext* );
	uint32 m_id; /* 0 4 */
	static const uint32 INVALIDID = 4294967295; /* 0 0 */
	/* ../public/animationsystem/animgraphids.h:71 */
	void AnimParamID(AnimParamID* );
	/* ../public/animationsystem/animgraphids.h:71 */
	void AnimParamID(AnimParamID* , uint32);
	/* ../public/animationsystem/animgraphids.h:71 */
	void AnimParamID(AnimParamID* , const AnimParamID& );
	/* ../public/animationsystem/animgraphids.h:71 */
	AnimParamID& operator=(AnimParamID* , const AnimParamID& );
	/* ../public/animationsystem/animgraphids.h:71 */
	AnimParamID& operator=(AnimParamID* , uint32);
	/* ../public/animationsystem/animgraphids.h:71 */
	bool IsValid(const AnimParamID* );
	/* ../public/animationsystem/animgraphids.h:71 */
	bool operator==(const AnimParamID* , const AnimParamID& );
	/* ../public/animationsystem/animgraphids.h:71 */
	bool operator!=(const AnimParamID* , const AnimParamID& );
	/* ../public/animationsystem/animgraphids.h:71 */
	bool operator<(const AnimParamID* , const AnimParamID& );
	/* ../public/animationsystem/animgraphids.h:71 */
	void GetAsString(IPropertyEditDomain* , const void* , CUtlString* );
	/* ../public/animationsystem/animgraphids.h:71 */
	void SetAsString(IPropertyEditDomain* , void* , const char* );
};

// <00A966CA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:71
// member functions: 24
// member variable: 1
// static member variables: 2
// struct size: 4
struct AnimParamID {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:71 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:71 */
	AnimParamID* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:71 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:71 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:71 */
	void Schema_CompileTimeVerificationFunction(AnimParamID* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:71 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:71 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:71 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AnimParamID* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:71 */
	AnimParamID* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:71 */
	void KV3TransferSave(const AnimParamID* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:71 */
	void KV3TransferLoad(AnimParamID* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:71 */
	void KV3TransferSave_AnimParamID(const AnimParamID* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:71 */
	void KV3TransferLoad_AnimParamID(AnimParamID* , CKV3TransferLoadContext* );
	uint32 m_id; /* 0 4 */
	static const uint32 INVALIDID = 4294967295; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:71 */
	void AnimParamID(AnimParamID* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:71 */
	void AnimParamID(AnimParamID* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:71 */
	void AnimParamID(AnimParamID* , const AnimParamID& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:71 */
	AnimParamID& operator=(AnimParamID* , const AnimParamID& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:71 */
	AnimParamID& operator=(AnimParamID* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:71 */
	bool IsValid(const AnimParamID* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:71 */
	bool operator==(const AnimParamID* , const AnimParamID& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:71 */
	bool operator!=(const AnimParamID* , const AnimParamID& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:71 */
	bool operator<(const AnimParamID* , const AnimParamID& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:71 */
	void GetAsString(IPropertyEditDomain* , const void* , CUtlString* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:71 */
	void SetAsString(IPropertyEditDomain* , void* , const char* );
};

// <00D8D294> ../public/animationsystem/animgraphids.h:71
// member function: 1
// struct size: 1
struct DefaultHashFunctor<AnimParamID> {
	/* ../public/animationsystem/animgraphids.h:71 */
	unsigned int operator()(const DefaultHashFunctor<AnimParamID>* , AnimParamID);
};

// <01A7CD2F> ../public/animationsystem/animgraphids.h:72
void AnimTagID::AnimTagID()
{
} /* size: 0 */

// <01A7CD16> ../public/animationsystem/animgraphids.h:72
inline void AnimTagID::AnimTagID()
{
} /* size: 0 */

// <01A7CCFA> ../public/animationsystem/animgraphids.h:72
void AnimTagID::AnimTagID(const AnimTagID& rhs)
{
} /* size: 0 */

// <01A7CCD5> ../public/animationsystem/animgraphids.h:72
inline void AnimTagID::AnimTagID(const AnimTagID& rhs)
{
} /* size: 0 */

// <01A7CCB0> ../public/animationsystem/animgraphids.h:72
inline void AnimTagID::operator=(const AnimTagID& rhs)
{
} /* size: 0 */

// <01A7CC8C> ../public/animationsystem/animgraphids.h:72
inline void AnimTagID::operator=(uint32 id)
{
} /* size: 0 */

// <0131DC4A> ../public/animationsystem/animgraphids.h:72
inline void AnimTagID::IsValid()
{
} /* size: 0 */

// <00E867B8> ../public/animationsystem/animgraphids.h:72
// variable: 1
inline void DefaultHashFunctor<AnimTagID>::operator(AnimTagID s)
{
	Mix32HashFunctor func; // 72
} /* size: 0, variables: 1 */

// <001EF9F8> ../public/animationsystem/animgraphids.h:72
// member functions: 24
// member variable: 1
// static member variables: 2
// struct size: 4
struct AnimTagID {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animgraphids.h:72 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animgraphids.h:72 */
	AnimTagID* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animgraphids.h:72 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animgraphids.h:72 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animgraphids.h:72 */
	void Schema_CompileTimeVerificationFunction(AnimTagID* );
	/* ../public/animationsystem/animgraphids.h:72 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animgraphids.h:72 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animgraphids.h:72 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AnimTagID* );
	/* ../public/animationsystem/animgraphids.h:72 */
	AnimTagID* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animgraphids.h:72 */
	void KV3TransferSave(const AnimTagID* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animgraphids.h:72 */
	void KV3TransferLoad(AnimTagID* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animgraphids.h:72 */
	void KV3TransferSave_AnimTagID(const AnimTagID* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animgraphids.h:72 */
	void KV3TransferLoad_AnimTagID(AnimTagID* , CKV3TransferLoadContext* );
	uint32 m_id; /* 0 4 */
	static const uint32 INVALIDID = 4294967295; /* 0 0 */
	/* ../public/animationsystem/animgraphids.h:72 */
	void AnimTagID(AnimTagID* );
	/* ../public/animationsystem/animgraphids.h:72 */
	void AnimTagID(AnimTagID* , uint32);
	/* ../public/animationsystem/animgraphids.h:72 */
	void AnimTagID(AnimTagID* , const AnimTagID& );
	/* ../public/animationsystem/animgraphids.h:72 */
	AnimTagID& operator=(AnimTagID* , const AnimTagID& );
	/* ../public/animationsystem/animgraphids.h:72 */
	AnimTagID& operator=(AnimTagID* , uint32);
	/* ../public/animationsystem/animgraphids.h:72 */
	bool IsValid(const AnimTagID* );
	/* ../public/animationsystem/animgraphids.h:72 */
	bool operator==(const AnimTagID* , const AnimTagID& );
	/* ../public/animationsystem/animgraphids.h:72 */
	bool operator!=(const AnimTagID* , const AnimTagID& );
	/* ../public/animationsystem/animgraphids.h:72 */
	bool operator<(const AnimTagID* , const AnimTagID& );
	/* ../public/animationsystem/animgraphids.h:72 */
	void GetAsString(IPropertyEditDomain* , const void* , CUtlString* );
	/* ../public/animationsystem/animgraphids.h:72 */
	void SetAsString(IPropertyEditDomain* , void* , const char* );
};

// <0048DF2B> ../public/animationsystem/animgraphids.h:72
// member functions: 24
// member variable: 1
// static member variables: 2
// struct size: 4
struct AnimTagID {
	/* ../public/animationsystem/animgraphids.h:72 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animgraphids.h:72 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animgraphids.h:72 */
	AnimTagID* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animgraphids.h:72 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animgraphids.h:72 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animgraphids.h:72 */
	void Schema_CompileTimeVerificationFunction(AnimTagID* );
	/* ../public/animationsystem/animgraphids.h:72 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animgraphids.h:72 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animgraphids.h:72 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AnimTagID* );
	/* ../public/animationsystem/animgraphids.h:72 */
	AnimTagID* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animgraphids.h:72 */
	void KV3TransferSave(const AnimTagID* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animgraphids.h:72 */
	void KV3TransferLoad(AnimTagID* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animgraphids.h:72 */
	void KV3TransferSave_AnimTagID(const AnimTagID* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animgraphids.h:72 */
	void KV3TransferLoad_AnimTagID(AnimTagID* , CKV3TransferLoadContext* );
	uint32 m_id; /* 0 4 */
	static const uint32 INVALIDID = 4294967295; /* 0 0 */
	/* ../public/animationsystem/animgraphids.h:72 */
	void AnimTagID(AnimTagID* );
	/* ../public/animationsystem/animgraphids.h:72 */
	void AnimTagID(AnimTagID* , uint32);
	/* ../public/animationsystem/animgraphids.h:72 */
	void AnimTagID(AnimTagID* , const AnimTagID& );
	/* ../public/animationsystem/animgraphids.h:72 */
	AnimTagID& operator=(AnimTagID* , const AnimTagID& );
	/* ../public/animationsystem/animgraphids.h:72 */
	AnimTagID& operator=(AnimTagID* , uint32);
	/* ../public/animationsystem/animgraphids.h:72 */
	bool IsValid(const AnimTagID* );
	/* ../public/animationsystem/animgraphids.h:72 */
	bool operator==(const AnimTagID* , const AnimTagID& );
	/* ../public/animationsystem/animgraphids.h:72 */
	bool operator!=(const AnimTagID* , const AnimTagID& );
	/* ../public/animationsystem/animgraphids.h:72 */
	bool operator<(const AnimTagID* , const AnimTagID& );
	/* ../public/animationsystem/animgraphids.h:72 */
	void GetAsString(IPropertyEditDomain* , const void* , CUtlString* );
	/* ../public/animationsystem/animgraphids.h:72 */
	void SetAsString(IPropertyEditDomain* , void* , const char* );
};

// <00A96A12> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:72
// member functions: 24
// member variable: 1
// static member variables: 2
// struct size: 4
struct AnimTagID {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:72 */
	enum {
		KV3TRANSFER_IS_VIRTUAL = 0,
	};
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:72 */
	enum {
		KV3TRANSFER_IGNORE_VIRTUAL = 0,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:72 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:72 */
	AnimTagID* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:72 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:72 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:72 */
	void Schema_CompileTimeVerificationFunction(AnimTagID* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:72 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:72 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:72 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AnimTagID* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:72 */
	AnimTagID* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:72 */
	void KV3TransferSave(const AnimTagID* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:72 */
	void KV3TransferLoad(AnimTagID* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:72 */
	void KV3TransferSave_AnimTagID(const AnimTagID* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:72 */
	void KV3TransferLoad_AnimTagID(AnimTagID* , CKV3TransferLoadContext* );
	uint32 m_id; /* 0 4 */
	static const uint32 INVALIDID = 4294967295; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:72 */
	void AnimTagID(AnimTagID* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:72 */
	void AnimTagID(AnimTagID* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:72 */
	void AnimTagID(AnimTagID* , const AnimTagID& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:72 */
	AnimTagID& operator=(AnimTagID* , const AnimTagID& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:72 */
	AnimTagID& operator=(AnimTagID* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:72 */
	bool IsValid(const AnimTagID* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:72 */
	bool operator==(const AnimTagID* , const AnimTagID& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:72 */
	bool operator!=(const AnimTagID* , const AnimTagID& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:72 */
	bool operator<(const AnimTagID* , const AnimTagID& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:72 */
	void GetAsString(IPropertyEditDomain* , const void* , CUtlString* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animgraphids.h:72 */
	void SetAsString(IPropertyEditDomain* , void* , const char* );
};

// <00D8D627> ../public/animationsystem/animgraphids.h:72
// member function: 1
// struct size: 1
struct DefaultHashFunctor<AnimTagID> {
	/* ../public/animationsystem/animgraphids.h:72 */
	unsigned int operator()(const DefaultHashFunctor<AnimTagID>* , AnimTagID);
};

// <00F96713> ../public/animationsystem/animgraphids.h:75
inline void TraceRequestID::IsValid()
{
} /* size: 0 */

// <00E8679C> ../public/animationsystem/animgraphids.h:75
void TraceRequestID::TraceRequestID(const uint32 id)
{
} /* size: 0 */

// <00E86778> ../public/animationsystem/animgraphids.h:75
inline void TraceRequestID::TraceRequestID(const uint32 id)
{
} /* size: 0 */

// <00E8675C> ../public/animationsystem/animgraphids.h:75
void TraceRequestID::TraceRequestID(const TraceRequestID& rhs)
{
} /* size: 0 */

// <00E86737> ../public/animationsystem/animgraphids.h:75
inline void TraceRequestID::TraceRequestID(const TraceRequestID& rhs)
{
} /* size: 0 */

// <00D8D672> ../public/animationsystem/animgraphids.h:75
// member functions: 11
// member variable: 1
// static member variable: 1
// struct size: 4
struct TraceRequestID {
	uint32 m_id; /* 0 4 */
	static const uint32 INVALIDID = 4294967295; /* 0 0 */
	/* ../public/animationsystem/animgraphids.h:75 */
	void TraceRequestID(TraceRequestID* );
	/* ../public/animationsystem/animgraphids.h:75 */
	void TraceRequestID(TraceRequestID* , uint32);
	/* ../public/animationsystem/animgraphids.h:75 */
	void TraceRequestID(TraceRequestID* , const TraceRequestID& );
	/* ../public/animationsystem/animgraphids.h:75 */
	TraceRequestID& operator=(TraceRequestID* , const TraceRequestID& );
	/* ../public/animationsystem/animgraphids.h:75 */
	TraceRequestID& operator=(TraceRequestID* , uint32);
	/* ../public/animationsystem/animgraphids.h:75 */
	bool IsValid(const TraceRequestID* );
	/* ../public/animationsystem/animgraphids.h:75 */
	bool operator==(const TraceRequestID* , const TraceRequestID& );
	/* ../public/animationsystem/animgraphids.h:75 */
	bool operator!=(const TraceRequestID* , const TraceRequestID& );
	/* ../public/animationsystem/animgraphids.h:75 */
	bool operator<(const TraceRequestID* , const TraceRequestID& );
	/* ../public/animationsystem/animgraphids.h:75 */
	void GetAsString(IPropertyEditDomain* , const void* , CUtlString* );
	/* ../public/animationsystem/animgraphids.h:75 */
	void SetAsString(IPropertyEditDomain* , void* , const char* );
};

