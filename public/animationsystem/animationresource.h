
//
// public/animationsystem/animationresource.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 113
//	class: 1
//	structs: 58
//

// <00C252F3> ../public/animationsystem/animationresource.h:51
void CAnimBoneDifference::~CAnimBoneDifference()
{
} /* size: 0 */

// <00C252D7> ../public/animationsystem/animationresource.h:51
inline void CAnimBoneDifference::~CAnimBoneDifference()
{
} /* size: 0 */

// <00A28B5A> ../public/animationsystem/animationresource.h:51
inline void CAnimBoneDifference::operator=(const CAnimBoneDifference &)
{
} /* size: 0 */

// <00A28B43> ../public/animationsystem/animationresource.h:51
void CAnimBoneDifference::CAnimBoneDifference()
{
} /* size: 0 */

// <00A28B27> ../public/animationsystem/animationresource.h:51
inline void CAnimBoneDifference::CAnimBoneDifference()
{
} /* size: 0 */

// <04A38149> ../public/animationsystem/animationresource.h:51
// member functions: 13
// member variables: 5
// static member variable: 1
// struct size: 48
struct CAnimBoneDifference {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:53 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:53 */
	CAnimBoneDifference* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:53 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:53 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:53 */
	void Schema_CompileTimeVerificationFunction(CAnimBoneDifference* );
	/* ../public/animationsystem/animationresource.h:53 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:53 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:53 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimBoneDifference* );
	/* ../public/animationsystem/animationresource.h:54 */
	CAnimBoneDifference* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:54 */
	void KV3TransferSave(const CAnimBoneDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:54 */
	void KV3TransferLoad(CAnimBoneDifference* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:54 */
	void KV3TransferSave_CAnimBoneDifference(const CAnimBoneDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:54 */
	void KV3TransferLoad_CAnimBoneDifference(CAnimBoneDifference* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	AnimString_t m_parent; /* 16 16 */
	Vector m_posError; /* 32 12 */
	bool m_bHasRotation; /* 44 1 */
	bool m_bHasMovement; /* 45 1 */
};

// <001FC5B8> ../public/animationsystem/animationresource.h:51
// member functions: 16
// member variables: 5
// static member variable: 1
// struct size: 48
struct CAnimBoneDifference {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:53 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:53 */
	CAnimBoneDifference* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:53 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:53 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:53 */
	void Schema_CompileTimeVerificationFunction(CAnimBoneDifference* );
	/* ../public/animationsystem/animationresource.h:53 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:53 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:53 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimBoneDifference* );
	/* ../public/animationsystem/animationresource.h:54 */
	CAnimBoneDifference* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:54 */
	void KV3TransferSave(const CAnimBoneDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:54 */
	void KV3TransferLoad(CAnimBoneDifference* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:54 */
	void KV3TransferSave_CAnimBoneDifference(const CAnimBoneDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:54 */
	void KV3TransferLoad_CAnimBoneDifference(CAnimBoneDifference* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	AnimString_t m_parent; /* 16 16 */
	Vector m_posError; /* 32 12 */
	bool m_bHasRotation; /* 44 1 */
	bool m_bHasMovement; /* 45 1 */
	CAnimBoneDifference& operator=(CAnimBoneDifference* , const CAnimBoneDifference& );
	void ~CAnimBoneDifference(CAnimBoneDifference* );
	void CAnimBoneDifference(CAnimBoneDifference* );
};

// <008EE37A> ../public/animationsystem/animationresource.h:51
// member functions: 16
// member variables: 5
// static member variable: 1
// struct size: 48
struct CAnimBoneDifference {
	/* ../public/animationsystem/animationresource.h:54 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:53 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:53 */
	CAnimBoneDifference* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:53 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:53 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:53 */
	void Schema_CompileTimeVerificationFunction(CAnimBoneDifference* );
	/* ../public/animationsystem/animationresource.h:53 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:53 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:53 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimBoneDifference* );
	/* ../public/animationsystem/animationresource.h:54 */
	CAnimBoneDifference* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:54 */
	void KV3TransferSave(const CAnimBoneDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:54 */
	void KV3TransferLoad(CAnimBoneDifference* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:54 */
	void KV3TransferSave_CAnimBoneDifference(const CAnimBoneDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:54 */
	void KV3TransferLoad_CAnimBoneDifference(CAnimBoneDifference* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	AnimString_t m_parent; /* 16 16 */
	Vector m_posError; /* 32 12 */
	bool m_bHasRotation; /* 44 1 */
	bool m_bHasMovement; /* 45 1 */
	void ~CAnimBoneDifference(CAnimBoneDifference* );
	void CAnimBoneDifference(CAnimBoneDifference* );
	CAnimBoneDifference& operator=(CAnimBoneDifference* , const CAnimBoneDifference& );
};

// <00B37B6A> ../public/animationsystem/animationresource.h:51
// member functions: 14
// member variables: 5
// static member variable: 1
// struct size: 48
struct CAnimBoneDifference {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:53 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:53 */
	CAnimBoneDifference* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:53 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:53 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:53 */
	void Schema_CompileTimeVerificationFunction(CAnimBoneDifference* );
	/* ../public/animationsystem/animationresource.h:53 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:53 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:53 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimBoneDifference* );
	/* ../public/animationsystem/animationresource.h:54 */
	CAnimBoneDifference* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:54 */
	void KV3TransferSave(const CAnimBoneDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:54 */
	void KV3TransferLoad(CAnimBoneDifference* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:54 */
	void KV3TransferSave_CAnimBoneDifference(const CAnimBoneDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:54 */
	void KV3TransferLoad_CAnimBoneDifference(CAnimBoneDifference* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	AnimString_t m_parent; /* 16 16 */
	Vector m_posError; /* 32 12 */
	bool m_bHasRotation; /* 44 1 */
	bool m_bHasMovement; /* 45 1 */
	void ~CAnimBoneDifference(CAnimBoneDifference* );
};

// <00A49A02> ../public/animationsystem/animationresource.h:53
inline void CAnimBoneDifference::Schema_DynamicBinding()
{
} /* size: 0 */

// <00C2521D> ../public/animationsystem/animationresource.h:66
void CAnimMorphDifference::~CAnimMorphDifference()
{
} /* size: 0 */

// <00C25201> ../public/animationsystem/animationresource.h:66
inline void CAnimMorphDifference::~CAnimMorphDifference()
{
} /* size: 0 */

// <00A26887> ../public/animationsystem/animationresource.h:66
inline void CAnimMorphDifference::operator=(const CAnimMorphDifference &)
{
} /* size: 0 */

// <00A26870> ../public/animationsystem/animationresource.h:66
void CAnimMorphDifference::CAnimMorphDifference()
{
} /* size: 0 */

// <00A26854> ../public/animationsystem/animationresource.h:66
inline void CAnimMorphDifference::CAnimMorphDifference()
{
} /* size: 0 */

// <04A38321> ../public/animationsystem/animationresource.h:66
// member functions: 13
// member variable: 1
// static member variable: 1
// struct size: 16
struct CAnimMorphDifference {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:68 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:68 */
	CAnimMorphDifference* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:68 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:68 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:68 */
	void Schema_CompileTimeVerificationFunction(CAnimMorphDifference* );
	/* ../public/animationsystem/animationresource.h:68 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:68 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:68 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimMorphDifference* );
	/* ../public/animationsystem/animationresource.h:69 */
	CAnimMorphDifference* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:69 */
	void KV3TransferSave(const CAnimMorphDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:69 */
	void KV3TransferLoad(CAnimMorphDifference* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:69 */
	void KV3TransferSave_CAnimMorphDifference(const CAnimMorphDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:69 */
	void KV3TransferLoad_CAnimMorphDifference(CAnimMorphDifference* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
};

// <001FC7EB> ../public/animationsystem/animationresource.h:66
// member functions: 16
// member variable: 1
// static member variable: 1
// struct size: 16
struct CAnimMorphDifference {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:68 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:68 */
	CAnimMorphDifference* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:68 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:68 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:68 */
	void Schema_CompileTimeVerificationFunction(CAnimMorphDifference* );
	/* ../public/animationsystem/animationresource.h:68 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:68 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:68 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimMorphDifference* );
	/* ../public/animationsystem/animationresource.h:69 */
	CAnimMorphDifference* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:69 */
	void KV3TransferSave(const CAnimMorphDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:69 */
	void KV3TransferLoad(CAnimMorphDifference* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:69 */
	void KV3TransferSave_CAnimMorphDifference(const CAnimMorphDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:69 */
	void KV3TransferLoad_CAnimMorphDifference(CAnimMorphDifference* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	CAnimMorphDifference& operator=(CAnimMorphDifference* , const CAnimMorphDifference& );
	void ~CAnimMorphDifference(CAnimMorphDifference* );
	void CAnimMorphDifference(CAnimMorphDifference* );
};

// <008EE5C8> ../public/animationsystem/animationresource.h:66
// member functions: 16
// member variable: 1
// static member variable: 1
// struct size: 16
struct CAnimMorphDifference {
	/* ../public/animationsystem/animationresource.h:69 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:68 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:68 */
	CAnimMorphDifference* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:68 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:68 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:68 */
	void Schema_CompileTimeVerificationFunction(CAnimMorphDifference* );
	/* ../public/animationsystem/animationresource.h:68 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:68 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:68 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimMorphDifference* );
	/* ../public/animationsystem/animationresource.h:69 */
	CAnimMorphDifference* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:69 */
	void KV3TransferSave(const CAnimMorphDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:69 */
	void KV3TransferLoad(CAnimMorphDifference* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:69 */
	void KV3TransferSave_CAnimMorphDifference(const CAnimMorphDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:69 */
	void KV3TransferLoad_CAnimMorphDifference(CAnimMorphDifference* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	void ~CAnimMorphDifference(CAnimMorphDifference* );
	void CAnimMorphDifference(CAnimMorphDifference* );
	CAnimMorphDifference& operator=(CAnimMorphDifference* , const CAnimMorphDifference& );
};

// <00B37D61> ../public/animationsystem/animationresource.h:66
// member functions: 14
// member variable: 1
// static member variable: 1
// struct size: 16
struct CAnimMorphDifference {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:68 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:68 */
	CAnimMorphDifference* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:68 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:68 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:68 */
	void Schema_CompileTimeVerificationFunction(CAnimMorphDifference* );
	/* ../public/animationsystem/animationresource.h:68 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:68 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:68 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimMorphDifference* );
	/* ../public/animationsystem/animationresource.h:69 */
	CAnimMorphDifference* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:69 */
	void KV3TransferSave(const CAnimMorphDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:69 */
	void KV3TransferLoad(CAnimMorphDifference* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:69 */
	void KV3TransferSave_CAnimMorphDifference(const CAnimMorphDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:69 */
	void KV3TransferLoad_CAnimMorphDifference(CAnimMorphDifference* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	void ~CAnimMorphDifference(CAnimMorphDifference* );
};

// <00A499DD> ../public/animationsystem/animationresource.h:68
inline void CAnimMorphDifference::Schema_DynamicBinding()
{
} /* size: 0 */

// <00C25147> ../public/animationsystem/animationresource.h:77
void CAnimUserDifference::~CAnimUserDifference()
{
} /* size: 0 */

// <00C2512B> ../public/animationsystem/animationresource.h:77
inline void CAnimUserDifference::~CAnimUserDifference()
{
} /* size: 0 */

// <00A2635A> ../public/animationsystem/animationresource.h:77
inline void CAnimUserDifference::operator=(const CAnimUserDifference &)
{
} /* size: 0 */

// <00A26343> ../public/animationsystem/animationresource.h:77
void CAnimUserDifference::CAnimUserDifference()
{
} /* size: 0 */

// <00A26327> ../public/animationsystem/animationresource.h:77
inline void CAnimUserDifference::CAnimUserDifference()
{
} /* size: 0 */

// <04A384BD> ../public/animationsystem/animationresource.h:77
// member functions: 13
// member variables: 2
// static member variable: 1
// struct size: 24
struct CAnimUserDifference {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:79 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:79 */
	CAnimUserDifference* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:79 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:79 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:79 */
	void Schema_CompileTimeVerificationFunction(CAnimUserDifference* );
	/* ../public/animationsystem/animationresource.h:79 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:79 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:79 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimUserDifference* );
	/* ../public/animationsystem/animationresource.h:80 */
	CAnimUserDifference* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:80 */
	void KV3TransferSave(const CAnimUserDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:80 */
	void KV3TransferLoad(CAnimUserDifference* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:80 */
	void KV3TransferSave_CAnimUserDifference(const CAnimUserDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:80 */
	void KV3TransferLoad_CAnimUserDifference(CAnimUserDifference* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	int32 m_nType; /* 16 4 */
};

// <001FC9E2> ../public/animationsystem/animationresource.h:77
// member functions: 16
// member variables: 2
// static member variable: 1
// struct size: 24
struct CAnimUserDifference {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:79 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:79 */
	CAnimUserDifference* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:79 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:79 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:79 */
	void Schema_CompileTimeVerificationFunction(CAnimUserDifference* );
	/* ../public/animationsystem/animationresource.h:79 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:79 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:79 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimUserDifference* );
	/* ../public/animationsystem/animationresource.h:80 */
	CAnimUserDifference* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:80 */
	void KV3TransferSave(const CAnimUserDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:80 */
	void KV3TransferLoad(CAnimUserDifference* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:80 */
	void KV3TransferSave_CAnimUserDifference(const CAnimUserDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:80 */
	void KV3TransferLoad_CAnimUserDifference(CAnimUserDifference* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	int32 m_nType; /* 16 4 */
	CAnimUserDifference& operator=(CAnimUserDifference* , const CAnimUserDifference& );
	void ~CAnimUserDifference(CAnimUserDifference* );
	void CAnimUserDifference(CAnimUserDifference* );
};

// <008EE7DA> ../public/animationsystem/animationresource.h:77
// member functions: 16
// member variables: 2
// static member variable: 1
// struct size: 24
struct CAnimUserDifference {
	/* ../public/animationsystem/animationresource.h:80 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:79 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:79 */
	CAnimUserDifference* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:79 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:79 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:79 */
	void Schema_CompileTimeVerificationFunction(CAnimUserDifference* );
	/* ../public/animationsystem/animationresource.h:79 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:79 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:79 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimUserDifference* );
	/* ../public/animationsystem/animationresource.h:80 */
	CAnimUserDifference* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:80 */
	void KV3TransferSave(const CAnimUserDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:80 */
	void KV3TransferLoad(CAnimUserDifference* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:80 */
	void KV3TransferSave_CAnimUserDifference(const CAnimUserDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:80 */
	void KV3TransferLoad_CAnimUserDifference(CAnimUserDifference* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	int32 m_nType; /* 16 4 */
	void ~CAnimUserDifference(CAnimUserDifference* );
	void CAnimUserDifference(CAnimUserDifference* );
	CAnimUserDifference& operator=(CAnimUserDifference* , const CAnimUserDifference& );
};

// <00B37F1C> ../public/animationsystem/animationresource.h:77
// member functions: 14
// member variables: 2
// static member variable: 1
// struct size: 24
struct CAnimUserDifference {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:79 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:79 */
	CAnimUserDifference* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:79 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:79 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:79 */
	void Schema_CompileTimeVerificationFunction(CAnimUserDifference* );
	/* ../public/animationsystem/animationresource.h:79 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:79 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:79 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimUserDifference* );
	/* ../public/animationsystem/animationresource.h:80 */
	CAnimUserDifference* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:80 */
	void KV3TransferSave(const CAnimUserDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:80 */
	void KV3TransferLoad(CAnimUserDifference* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:80 */
	void KV3TransferSave_CAnimUserDifference(const CAnimUserDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:80 */
	void KV3TransferLoad_CAnimUserDifference(CAnimUserDifference* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	int32 m_nType; /* 16 4 */
	void ~CAnimUserDifference(CAnimUserDifference* );
};

// <00A499B8> ../public/animationsystem/animationresource.h:79
inline void CAnimUserDifference::Schema_DynamicBinding()
{
} /* size: 0 */

// <00C42E66> ../public/animationsystem/animationresource.h:89
// variables: 3
// function calls: 83
void CAnimEncodeDifference::~CAnimEncodeDifference()
{
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 89
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 89
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 89
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 89
	{
		int i; // 1721
		CUtlMemory<CAnimUserDifference, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 77
		CAnimUserDifference::~CAnimUserDifference(); // 1526
		Destruct<CAnimUserDifference>(CAnimUserDifference* pMemory); // 1723
	}
	CUtlVectorBase<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimUserDifference, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimUserDifference, int>::Purge(); // 903
	CUtlMemory<CAnimUserDifference, int>::Purge(); // 1799
	CUtlVectorBase<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >::Purge(); // 560
	ValidateAlignment<CAnimUserDifference>(void); // 508
	CUtlMemory<CAnimUserDifference, int>::Purge(); // 510
	CUtlMemory<CAnimUserDifference, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >::~CUtlVector(); // 89
	{
		int i; // 1721
		CUtlMemory<CAnimMorphDifference, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 66
		CAnimMorphDifference::~CAnimMorphDifference(); // 1526
		Destruct<CAnimMorphDifference>(CAnimMorphDifference* pMemory); // 1723
	}
	CUtlVectorBase<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimMorphDifference, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimMorphDifference, int>::Purge(); // 903
	CUtlMemory<CAnimMorphDifference, int>::Purge(); // 1799
	CUtlVectorBase<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >::Purge(); // 560
	ValidateAlignment<CAnimMorphDifference>(void); // 508
	CUtlMemory<CAnimMorphDifference, int>::Purge(); // 510
	CUtlMemory<CAnimMorphDifference, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >::~CUtlVector(); // 89
	{
		int i; // 1721
		CUtlMemory<CAnimBoneDifference, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 51
		CBufferString::~CBufferString(); // 51
		CAnimBoneDifference::~CAnimBoneDifference(); // 1526
		Destruct<CAnimBoneDifference>(CAnimBoneDifference* pMemory); // 1723
	}
	CUtlVectorBase<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimBoneDifference, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimBoneDifference, int>::Purge(); // 903
	CUtlMemory<CAnimBoneDifference, int>::Purge(); // 1799
	CUtlVectorBase<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >::Purge(); // 560
	CUtlVectorBase<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >::~CUtlVector(); // 89
} /* size: 473, inline expansions: 67 (1868 bytes) */

// <00C42E4A> ../public/animationsystem/animationresource.h:89
inline void CAnimEncodeDifference::~CAnimEncodeDifference()
{
} /* size: 0 */

// <00C3458C> ../public/animationsystem/animationresource.h:89
void CAnimEncodeDifference::CAnimEncodeDifference()
{
} /* size: 0 */

// <00C34570> ../public/animationsystem/animationresource.h:89
inline void CAnimEncodeDifference::CAnimEncodeDifference()
{
} /* size: 0 */

// <00A5BFCE> ../public/animationsystem/animationresource.h:89
// function calls: 131
void CAnimEncodeDifference::operator=(const CAnimEncodeDifference &)
{
	CUtlVectorBase<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >::Count(); // 573
	CUtlMemory<CAnimBoneDifference, int>::Base(); // 112
	CUtlVectorBase<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >::Base(); // 102
	CUtlVectorBase<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >::begin(); // 574
	CUtlMemory<CAnimBoneDifference, int>::Base(); // 113
	CUtlVectorBase<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >::Base(); // 105
	CUtlVectorBase<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >::Count(); // 105
	CUtlVectorBase<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >::end(); // 574
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1108
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1108
	CBufferString::operator=(
			const CBufferString& src);  // 51
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1108
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1108
	CBufferString::operator=(
			const CBufferString& src);  // 51
	Vector::operator=(
			const Vector& vOther);  // 51
	CAnimBoneDifference::operator=(
			const CAnimBoneDifference  &);  // 209
	UtlTraitsCopyRange<CAnimBoneDifference>(const CAnimBoneDifference* pFrom,
						const CAnimBoneDifference* pFromEnd,
						CAnimBoneDifference* pTo);  // 200
	UtlTraitsCopyRange<CAnimBoneDifference>(const CAnimBoneDifference* pFrom,
						const CAnimBoneDifference* pFromEnd,
						CAnimBoneDifference* pTo);  // 574
	CUtlVectorBase<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >::operator=(
			const CUtlVectorBase<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >& other);  // 565
	CUtlVectorBase<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >::operator=(
			const CUtlVectorBase<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >& other);  // 452
	CUtlVector<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >::operator=(
			const CUtlVector<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >& src);  // 89
	CUtlVectorBase<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >::Count(); // 573
	CUtlMemory<CAnimMorphDifference, int>::Base(); // 112
	CUtlVectorBase<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >::Base(); // 102
	CUtlVectorBase<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >::begin(); // 574
	CUtlMemory<CAnimMorphDifference, int>::Base(); // 113
	CUtlVectorBase<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >::Base(); // 105
	CUtlVectorBase<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >::Count(); // 105
	CUtlVectorBase<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >::end(); // 574
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1108
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1108
	CBufferString::operator=(
			const CBufferString& src);  // 66
	CAnimMorphDifference::operator=(
			const CAnimMorphDifference  &);  // 209
	UtlTraitsCopyRange<CAnimMorphDifference>(const CAnimMorphDifference* pFrom,
						const CAnimMorphDifference* pFromEnd,
						CAnimMorphDifference* pTo);  // 200
	UtlTraitsCopyRange<CAnimMorphDifference>(const CAnimMorphDifference* pFrom,
						const CAnimMorphDifference* pFromEnd,
						CAnimMorphDifference* pTo);  // 574
	CUtlVectorBase<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >::operator=(
			const CUtlVectorBase<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >& other);  // 565
	CUtlVectorBase<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >::operator=(
			const CUtlVectorBase<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >& other);  // 452
	CUtlVector<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >::operator=(
			const CUtlVector<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >& src);  // 89
	CUtlVectorBase<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >::Count(); // 573
	CUtlMemory<CAnimUserDifference, int>::Base(); // 112
	CUtlVectorBase<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >::Base(); // 102
	CUtlVectorBase<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >::begin(); // 574
	CUtlMemory<CAnimUserDifference, int>::Base(); // 113
	CUtlVectorBase<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >::Base(); // 105
	CUtlVectorBase<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >::Count(); // 105
	CUtlVectorBase<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >::end(); // 574
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1108
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1108
	CBufferString::operator=(
			const CBufferString& src);  // 67
	CAnimUser::operator=(
			const CAnimUser  &);  // 209
	UtlTraitsCopyRange<CAnimUser>(const CAnimUser* pFrom,
					const CAnimUser* pFromEnd,
					CAnimUser* pTo);  // 200
	UtlTraitsCopyRange<CAnimUserDifference>(const CAnimUserDifference* pFrom,
						const CAnimUserDifference* pFromEnd,
						CAnimUserDifference* pTo);  // 574
	CUtlVectorBase<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >::operator=(
			const CUtlVectorBase<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >& other);  // 565
	CUtlVectorBase<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >::operator=(
			const CUtlVectorBase<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >& other);  // 452
	CUtlVector<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >::operator=(
			const CUtlVector<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >& src);  // 89
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 573
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 102
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::begin(); // 574
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<int>(const int* pFrom,
				const int* pFromEnd,
				int* pTo);  // 173
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 574
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 565
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 452
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& src);  // 89
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 573
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 102
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::begin(); // 574
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<int>(const int* pFrom,
				const int* pFromEnd,
				int* pTo);  // 173
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 574
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 565
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 452
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& src);  // 89
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 573
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 102
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::begin(); // 574
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<int>(const int* pFrom,
				const int* pFromEnd,
				int* pTo);  // 173
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 574
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 565
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 452
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& src);  // 89
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 573
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 102
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::begin(); // 574
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<int>(const int* pFrom,
				const int* pFromEnd,
				int* pTo);  // 173
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 574
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 565
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 452
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& src);  // 89
} /* size: 1046, inline expansions: 131 (5886 bytes) */

// <00A25E1A> ../public/animationsystem/animationresource.h:89
inline void CAnimEncodeDifference::operator=(const CAnimEncodeDifference &)
{
} /* size: 0 */

// <04A38668> ../public/animationsystem/animationresource.h:89
// member functions: 17
// member variables: 7
// static member variable: 1
// struct size: 224
struct CAnimEncodeDifference {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:91 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:91 */
	CAnimEncodeDifference* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:91 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:91 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:91 */
	void Schema_CompileTimeVerificationFunction(CAnimEncodeDifference* );
	/* ../public/animationsystem/animationresource.h:91 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:91 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:91 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimEncodeDifference* );
	/* ../public/animationsystem/animationresource.h:92 */
	CAnimEncodeDifference* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:92 */
	void KV3TransferSave(const CAnimEncodeDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:92 */
	void KV3TransferLoad(CAnimEncodeDifference* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:92 */
	void KV3TransferSave_CAnimEncodeDifference(const CAnimEncodeDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:92 */
	void KV3TransferLoad_CAnimEncodeDifference(CAnimEncodeDifference* , CKV3TransferLoadContext* );
	CUtlVector<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> > m_boneArray; /* 0 32 */
	CUtlVector<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> > m_morphArray; /* 32 32 */
	CUtlVector<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> > m_userArray; /* 64 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_bHasRotationBitArray; /* 96 32 */
	/* ../public/animationsystem/animationresource.h:101 */
	bool bHasRotation(CAnimEncodeDifference* , int);
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_bHasMovementBitArray; /* 128 32 */
	/* ../public/animationsystem/animationresource.h:104 */
	bool bHasMovement(CAnimEncodeDifference* , int);
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_bHasMorphBitArray; /* 160 32 */
	/* ../public/animationsystem/animationresource.h:107 */
	bool bHasMorph(CAnimEncodeDifference* , int);
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_bHasUserBitArray; /* 192 32 */
	/* ../public/animationsystem/animationresource.h:110 */
	bool bHasUser(CAnimEncodeDifference* , int);
};

// <001FCBE8> ../public/animationsystem/animationresource.h:89
// member functions: 20
// member variables: 7
// static member variable: 1
// struct size: 224
struct CAnimEncodeDifference {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:91 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:91 */
	CAnimEncodeDifference* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:91 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:91 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:91 */
	void Schema_CompileTimeVerificationFunction(CAnimEncodeDifference* );
	/* ../public/animationsystem/animationresource.h:91 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:91 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:91 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimEncodeDifference* );
	/* ../public/animationsystem/animationresource.h:92 */
	CAnimEncodeDifference* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:92 */
	void KV3TransferSave(const CAnimEncodeDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:92 */
	void KV3TransferLoad(CAnimEncodeDifference* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:92 */
	void KV3TransferSave_CAnimEncodeDifference(const CAnimEncodeDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:92 */
	void KV3TransferLoad_CAnimEncodeDifference(CAnimEncodeDifference* , CKV3TransferLoadContext* );
	CUtlVector<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> > m_boneArray; /* 0 32 */
	CUtlVector<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> > m_morphArray; /* 32 32 */
	CUtlVector<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> > m_userArray; /* 64 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_bHasRotationBitArray; /* 96 32 */
	/* ../public/animationsystem/animationresource.h:101 */
	bool bHasRotation(CAnimEncodeDifference* , int);
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_bHasMovementBitArray; /* 128 32 */
	/* ../public/animationsystem/animationresource.h:104 */
	bool bHasMovement(CAnimEncodeDifference* , int);
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_bHasMorphBitArray; /* 160 32 */
	/* ../public/animationsystem/animationresource.h:107 */
	bool bHasMorph(CAnimEncodeDifference* , int);
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_bHasUserBitArray; /* 192 32 */
	/* ../public/animationsystem/animationresource.h:110 */
	bool bHasUser(CAnimEncodeDifference* , int);
	CAnimEncodeDifference& operator=(CAnimEncodeDifference* , const CAnimEncodeDifference& );
	void ~CAnimEncodeDifference(CAnimEncodeDifference* );
	void CAnimEncodeDifference(CAnimEncodeDifference* );
};

// <008EE9FB> ../public/animationsystem/animationresource.h:89
// member functions: 20
// member variables: 7
// static member variable: 1
// struct size: 224
struct CAnimEncodeDifference {
	/* ../public/animationsystem/animationresource.h:92 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:91 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:91 */
	CAnimEncodeDifference* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:91 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:91 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:91 */
	void Schema_CompileTimeVerificationFunction(CAnimEncodeDifference* );
	/* ../public/animationsystem/animationresource.h:91 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:91 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:91 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimEncodeDifference* );
	/* ../public/animationsystem/animationresource.h:92 */
	CAnimEncodeDifference* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:92 */
	void KV3TransferSave(const CAnimEncodeDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:92 */
	void KV3TransferLoad(CAnimEncodeDifference* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:92 */
	void KV3TransferSave_CAnimEncodeDifference(const CAnimEncodeDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:92 */
	void KV3TransferLoad_CAnimEncodeDifference(CAnimEncodeDifference* , CKV3TransferLoadContext* );
	CUtlVector<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> > m_boneArray; /* 0 32 */
	CUtlVector<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> > m_morphArray; /* 32 32 */
	CUtlVector<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> > m_userArray; /* 64 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_bHasRotationBitArray; /* 96 32 */
	/* ../public/animationsystem/animationresource.h:101 */
	bool bHasRotation(CAnimEncodeDifference* , int);
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_bHasMovementBitArray; /* 128 32 */
	/* ../public/animationsystem/animationresource.h:104 */
	bool bHasMovement(CAnimEncodeDifference* , int);
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_bHasMorphBitArray; /* 160 32 */
	/* ../public/animationsystem/animationresource.h:107 */
	bool bHasMorph(CAnimEncodeDifference* , int);
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_bHasUserBitArray; /* 192 32 */
	/* ../public/animationsystem/animationresource.h:110 */
	bool bHasUser(CAnimEncodeDifference* , int);
	void ~CAnimEncodeDifference(CAnimEncodeDifference* );
	void CAnimEncodeDifference(CAnimEncodeDifference* );
	CAnimEncodeDifference& operator=(CAnimEncodeDifference* , const CAnimEncodeDifference& );
};

// <00B380E6> ../public/animationsystem/animationresource.h:89
// member functions: 19
// member variables: 7
// static member variable: 1
// struct size: 224
struct CAnimEncodeDifference {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:91 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:91 */
	CAnimEncodeDifference* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:91 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:91 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:91 */
	void Schema_CompileTimeVerificationFunction(CAnimEncodeDifference* );
	/* ../public/animationsystem/animationresource.h:91 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:91 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:91 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimEncodeDifference* );
	/* ../public/animationsystem/animationresource.h:92 */
	CAnimEncodeDifference* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:92 */
	void KV3TransferSave(const CAnimEncodeDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:92 */
	void KV3TransferLoad(CAnimEncodeDifference* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:92 */
	void KV3TransferSave_CAnimEncodeDifference(const CAnimEncodeDifference* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:92 */
	void KV3TransferLoad_CAnimEncodeDifference(CAnimEncodeDifference* , CKV3TransferLoadContext* );
	CUtlVector<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> > m_boneArray; /* 0 32 */
	CUtlVector<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> > m_morphArray; /* 32 32 */
	CUtlVector<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> > m_userArray; /* 64 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_bHasRotationBitArray; /* 96 32 */
	/* ../public/animationsystem/animationresource.h:101 */
	bool bHasRotation(CAnimEncodeDifference* , int);
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_bHasMovementBitArray; /* 128 32 */
	/* ../public/animationsystem/animationresource.h:104 */
	bool bHasMovement(CAnimEncodeDifference* , int);
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_bHasMorphBitArray; /* 160 32 */
	/* ../public/animationsystem/animationresource.h:107 */
	bool bHasMorph(CAnimEncodeDifference* , int);
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_bHasUserBitArray; /* 192 32 */
	/* ../public/animationsystem/animationresource.h:110 */
	bool bHasUser(CAnimEncodeDifference* , int);
	void CAnimEncodeDifference(CAnimEncodeDifference* );
	void ~CAnimEncodeDifference(CAnimEncodeDifference* );
};

// <00A49993> ../public/animationsystem/animationresource.h:91
inline void CAnimEncodeDifference::Schema_DynamicBinding()
{
} /* size: 0 */

// <00C24FCE> ../public/animationsystem/animationresource.h:116
void CAnimAnimEvent::~CAnimAnimEvent()
{
} /* size: 0 */

// <00C24FB2> ../public/animationsystem/animationresource.h:116
inline void CAnimAnimEvent::~CAnimAnimEvent()
{
} /* size: 0 */

// <00A1F712> ../public/animationsystem/animationresource.h:116
inline void CAnimAnimEvent::operator=(const CAnimAnimEvent &)
{
} /* size: 0 */

// <00A1F6FB> ../public/animationsystem/animationresource.h:116
void CAnimAnimEvent::CAnimAnimEvent()
{
} /* size: 0 */

// <00A1F6DF> ../public/animationsystem/animationresource.h:116
inline void CAnimAnimEvent::CAnimAnimEvent()
{
} /* size: 0 */

// <04A3CCE7> ../public/animationsystem/animationresource.h:116
// member functions: 14
// member variables: 5
// static member variable: 1
// struct size: 56
struct CAnimAnimEvent {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:118 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:118 */
	CAnimAnimEvent* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:118 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:118 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:118 */
	void Schema_CompileTimeVerificationFunction(CAnimAnimEvent* );
	/* ../public/animationsystem/animationresource.h:118 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:118 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:118 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimAnimEvent* );
	/* ../public/animationsystem/animationresource.h:119 */
	CAnimAnimEvent* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:119 */
	void KV3TransferSave(const CAnimAnimEvent* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:119 */
	void KV3TransferLoad(CAnimAnimEvent* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:119 */
	void KV3TransferSave_CAnimAnimEvent(const CAnimAnimEvent* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:119 */
	void KV3TransferLoad_CAnimAnimEvent(CAnimAnimEvent* , CKV3TransferLoadContext* );
	int32 m_nFrame; /* 0 4 */
	float32 m_flCycle; /* 4 4 */
	KeyValues3 m_EventData; /* 8 16 */
	AnimString_t m_sLegacyOptions; /* 24 16 */
	AnimString_t m_sEventName; /* 40 16 */
	/* ../public/animationsystem/animationresource.h:128 */
	const char* GetEventName(const CAnimAnimEvent* );
};

// <008F3247> ../public/animationsystem/animationresource.h:116
// member functions: 17
// member variables: 5
// static member variable: 1
// struct size: 56
struct CAnimAnimEvent {
	/* ../public/animationsystem/animationresource.h:119 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:118 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:118 */
	CAnimAnimEvent* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:118 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:118 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:118 */
	void Schema_CompileTimeVerificationFunction(CAnimAnimEvent* );
	/* ../public/animationsystem/animationresource.h:118 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:118 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:118 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimAnimEvent* );
	/* ../public/animationsystem/animationresource.h:119 */
	CAnimAnimEvent* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:119 */
	void KV3TransferSave(const CAnimAnimEvent* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:119 */
	void KV3TransferLoad(CAnimAnimEvent* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:119 */
	void KV3TransferSave_CAnimAnimEvent(const CAnimAnimEvent* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:119 */
	void KV3TransferLoad_CAnimAnimEvent(CAnimAnimEvent* , CKV3TransferLoadContext* );
	int32 m_nFrame; /* 0 4 */
	float32 m_flCycle; /* 4 4 */
	KeyValues3 m_EventData; /* 8 16 */
	AnimString_t m_sLegacyOptions; /* 24 16 */
	AnimString_t m_sEventName; /* 40 16 */
	/* ../public/animationsystem/animationresource.h:128 */
	const char* GetEventName(const CAnimAnimEvent* );
	void ~CAnimAnimEvent(CAnimAnimEvent* );
	void CAnimAnimEvent(CAnimAnimEvent* );
	CAnimAnimEvent& operator=(CAnimAnimEvent* , const CAnimAnimEvent& );
};

// <00B3C8E7> ../public/animationsystem/animationresource.h:116
// member functions: 15
// member variables: 5
// static member variable: 1
// struct size: 56
struct CAnimAnimEvent {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:118 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:118 */
	CAnimAnimEvent* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:118 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:118 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:118 */
	void Schema_CompileTimeVerificationFunction(CAnimAnimEvent* );
	/* ../public/animationsystem/animationresource.h:118 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:118 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:118 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimAnimEvent* );
	/* ../public/animationsystem/animationresource.h:119 */
	CAnimAnimEvent* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:119 */
	void KV3TransferSave(const CAnimAnimEvent* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:119 */
	void KV3TransferLoad(CAnimAnimEvent* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:119 */
	void KV3TransferSave_CAnimAnimEvent(const CAnimAnimEvent* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:119 */
	void KV3TransferLoad_CAnimAnimEvent(CAnimAnimEvent* , CKV3TransferLoadContext* );
	int32 m_nFrame; /* 0 4 */
	float32 m_flCycle; /* 4 4 */
	KeyValues3 m_EventData; /* 8 16 */
	AnimString_t m_sLegacyOptions; /* 24 16 */
	AnimString_t m_sEventName; /* 40 16 */
	/* ../public/animationsystem/animationresource.h:128 */
	const char* GetEventName(const CAnimAnimEvent* );
	void ~CAnimAnimEvent(CAnimAnimEvent* );
};

// <00A4996E> ../public/animationsystem/animationresource.h:118
inline void CAnimAnimEvent::Schema_DynamicBinding()
{
} /* size: 0 */

// <00A1D81B> ../public/animationsystem/animationresource.h:134
inline void CAnimMovement::operator=(const CAnimMovement &)
{
} /* size: 0 */

// <04A3CEDC> ../public/animationsystem/animationresource.h:134
// member functions: 15
// member variables: 7
// static member variable: 1
// struct size: 44
struct CAnimMovement {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:136 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:136 */
	CAnimMovement* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:136 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:136 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:136 */
	void Schema_CompileTimeVerificationFunction(CAnimMovement* );
	/* ../public/animationsystem/animationresource.h:136 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:136 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:136 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimMovement* );
	/* ../public/animationsystem/animationresource.h:137 */
	CAnimMovement* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:137 */
	void KV3TransferSave(const CAnimMovement* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:137 */
	void KV3TransferLoad(CAnimMovement* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:137 */
	void KV3TransferSave_CAnimMovement(const CAnimMovement* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:137 */
	void KV3TransferLoad_CAnimMovement(CAnimMovement* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:139 */
	void CAnimMovement(CAnimMovement* );
	int32 endframe; /* 0 4 */
	int32 motionflags; /* 4 4 */
	float32 v0; /* 8 4 */
	float32 v1; /* 12 4 */
	float32 angle; /* 16 4 */
	Vector vector; /* 20 12 */
	Vector position; /* 32 12 */
	/* ../public/animationsystem/animationresource.h:151 */
	void CAnimMovement(CAnimMovement* , const CAnimMovement& );
};

// <0020166D> ../public/animationsystem/animationresource.h:134
// member functions: 16
// member variables: 7
// static member variable: 1
// struct size: 44
struct CAnimMovement {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:136 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:136 */
	CAnimMovement* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:136 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:136 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:136 */
	void Schema_CompileTimeVerificationFunction(CAnimMovement* );
	/* ../public/animationsystem/animationresource.h:136 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:136 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:136 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimMovement* );
	/* ../public/animationsystem/animationresource.h:137 */
	CAnimMovement* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:137 */
	void KV3TransferSave(const CAnimMovement* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:137 */
	void KV3TransferLoad(CAnimMovement* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:137 */
	void KV3TransferSave_CAnimMovement(const CAnimMovement* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:137 */
	void KV3TransferLoad_CAnimMovement(CAnimMovement* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:139 */
	void CAnimMovement(CAnimMovement* );
	int32 endframe; /* 0 4 */
	int32 motionflags; /* 4 4 */
	float32 v0; /* 8 4 */
	float32 v1; /* 12 4 */
	float32 angle; /* 16 4 */
	Vector vector; /* 20 12 */
	Vector position; /* 32 12 */
	/* ../public/animationsystem/animationresource.h:151 */
	void CAnimMovement(CAnimMovement* , const CAnimMovement& );
	CAnimMovement& operator=(CAnimMovement* , const CAnimMovement& );
};

// <008F34B6> ../public/animationsystem/animationresource.h:134
// member functions: 16
// member variables: 7
// static member variable: 1
// struct size: 44
struct CAnimMovement {
	/* ../public/animationsystem/animationresource.h:137 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:136 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:136 */
	CAnimMovement* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:136 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:136 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:136 */
	void Schema_CompileTimeVerificationFunction(CAnimMovement* );
	/* ../public/animationsystem/animationresource.h:136 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:136 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:136 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimMovement* );
	/* ../public/animationsystem/animationresource.h:137 */
	CAnimMovement* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:137 */
	void KV3TransferSave(const CAnimMovement* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:137 */
	void KV3TransferLoad(CAnimMovement* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:137 */
	void KV3TransferSave_CAnimMovement(const CAnimMovement* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:137 */
	void KV3TransferLoad_CAnimMovement(CAnimMovement* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:139 */
	void CAnimMovement(CAnimMovement* );
	int32 endframe; /* 0 4 */
	int32 motionflags; /* 4 4 */
	float32 v0; /* 8 4 */
	float32 v1; /* 12 4 */
	float32 angle; /* 16 4 */
	Vector vector; /* 20 12 */
	Vector position; /* 32 12 */
	/* ../public/animationsystem/animationresource.h:151 */
	void CAnimMovement(CAnimMovement* , const CAnimMovement& );
	CAnimMovement& operator=(CAnimMovement* , const CAnimMovement& );
};

// <00A49949> ../public/animationsystem/animationresource.h:136
inline void CAnimMovement::Schema_DynamicBinding()
{
} /* size: 0 */

// <00A1D804> ../public/animationsystem/animationresource.h:139
void CAnimMovement::CAnimMovement()
{
} /* size: 0 */

// <00A1D7EB> ../public/animationsystem/animationresource.h:139
inline void CAnimMovement::CAnimMovement()
{
} /* size: 0 */

// <00A1B7EC> ../public/animationsystem/animationresource.h:157
inline void CAnimIKRuleStallFrame::CAnimIKRuleStallFrame()
{
} /* size: 0 */

// <008F3736> ../public/animationsystem/animationresource.h:157
// member functions: 14
// member variables: 6
// static member variable: 1
// struct size: 20
struct CAnimIKRuleStallFrame {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:159 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:159 */
	CAnimIKRuleStallFrame* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:159 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:159 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:159 */
	void Schema_CompileTimeVerificationFunction(CAnimIKRuleStallFrame* );
	/* ../public/animationsystem/animationresource.h:159 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:159 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:159 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimIKRuleStallFrame* );
	/* ../public/animationsystem/animationresource.h:160 */
	CAnimIKRuleStallFrame* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:160 */
	void KV3TransferSave(const CAnimIKRuleStallFrame* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:160 */
	void KV3TransferLoad(CAnimIKRuleStallFrame* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:160 */
	void KV3TransferSave_CAnimIKRuleStallFrame(const CAnimIKRuleStallFrame* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:160 */
	void KV3TransferLoad_CAnimIKRuleStallFrame(CAnimIKRuleStallFrame* , CKV3TransferLoadContext* );
	int16 chain; /* 0 2 */
	int16 slot; /* 2 2 */
	float32 start; /* 4 4 */
	float32 peak; /* 8 4 */
	float32 tail; /* 12 4 */
	float32 end; /* 16 4 */
	void CAnimIKRuleStallFrame(CAnimIKRuleStallFrame* );
};

// <00A49924> ../public/animationsystem/animationresource.h:159
inline void CAnimIKRuleStallFrame::Schema_DynamicBinding()
{
} /* size: 0 */

// <04A3D116> ../public/animationsystem/animationresource.h:217
// member functions: 13
// member variables: 6
// static member variable: 1
// struct size: 48
struct CAnimLocalHierarchy {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:219 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:219 */
	CAnimLocalHierarchy* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:219 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:219 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:219 */
	void Schema_CompileTimeVerificationFunction(CAnimLocalHierarchy* );
	/* ../public/animationsystem/animationresource.h:219 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:219 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:219 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimLocalHierarchy* );
	/* ../public/animationsystem/animationresource.h:220 */
	CAnimLocalHierarchy* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:220 */
	void KV3TransferSave(const CAnimLocalHierarchy* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:220 */
	void KV3TransferLoad(CAnimLocalHierarchy* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:220 */
	void KV3TransferSave_CAnimLocalHierarchy(const CAnimLocalHierarchy* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:220 */
	void KV3TransferLoad_CAnimLocalHierarchy(CAnimLocalHierarchy* , CKV3TransferLoadContext* );
	AnimString_t m_sBone; /* 0 16 */
	AnimString_t m_sNewParent; /* 16 16 */
	int32 m_nStartFrame; /* 32 4 */
	int32 m_nPeakFrame; /* 36 4 */
	int32 m_nTailFrame; /* 40 4 */
	int32 m_nEndFrame; /* 44 4 */
};

// <002018D3> ../public/animationsystem/animationresource.h:217
// member functions: 16
// member variables: 6
// static member variable: 1
// struct size: 48
struct CAnimLocalHierarchy {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:219 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:219 */
	CAnimLocalHierarchy* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:219 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:219 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:219 */
	void Schema_CompileTimeVerificationFunction(CAnimLocalHierarchy* );
	/* ../public/animationsystem/animationresource.h:219 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:219 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:219 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimLocalHierarchy* );
	/* ../public/animationsystem/animationresource.h:220 */
	CAnimLocalHierarchy* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:220 */
	void KV3TransferSave(const CAnimLocalHierarchy* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:220 */
	void KV3TransferLoad(CAnimLocalHierarchy* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:220 */
	void KV3TransferSave_CAnimLocalHierarchy(const CAnimLocalHierarchy* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:220 */
	void KV3TransferLoad_CAnimLocalHierarchy(CAnimLocalHierarchy* , CKV3TransferLoadContext* );
	AnimString_t m_sBone; /* 0 16 */
	AnimString_t m_sNewParent; /* 16 16 */
	int32 m_nStartFrame; /* 32 4 */
	int32 m_nPeakFrame; /* 36 4 */
	int32 m_nTailFrame; /* 40 4 */
	int32 m_nEndFrame; /* 44 4 */
	CAnimLocalHierarchy& operator=(CAnimLocalHierarchy* , const CAnimLocalHierarchy& );
	void ~CAnimLocalHierarchy(CAnimLocalHierarchy* );
	void CAnimLocalHierarchy(CAnimLocalHierarchy* );
};

// <008F3940> ../public/animationsystem/animationresource.h:217
// member functions: 16
// member variables: 6
// static member variable: 1
// struct size: 48
struct CAnimLocalHierarchy {
	/* ../public/animationsystem/animationresource.h:220 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:219 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:219 */
	CAnimLocalHierarchy* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:219 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:219 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:219 */
	void Schema_CompileTimeVerificationFunction(CAnimLocalHierarchy* );
	/* ../public/animationsystem/animationresource.h:219 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:219 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:219 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimLocalHierarchy* );
	/* ../public/animationsystem/animationresource.h:220 */
	CAnimLocalHierarchy* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:220 */
	void KV3TransferSave(const CAnimLocalHierarchy* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:220 */
	void KV3TransferLoad(CAnimLocalHierarchy* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:220 */
	void KV3TransferSave_CAnimLocalHierarchy(const CAnimLocalHierarchy* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:220 */
	void KV3TransferLoad_CAnimLocalHierarchy(CAnimLocalHierarchy* , CKV3TransferLoadContext* );
	AnimString_t m_sBone; /* 0 16 */
	AnimString_t m_sNewParent; /* 16 16 */
	int32 m_nStartFrame; /* 32 4 */
	int32 m_nPeakFrame; /* 36 4 */
	int32 m_nTailFrame; /* 40 4 */
	int32 m_nEndFrame; /* 44 4 */
	void ~CAnimLocalHierarchy(CAnimLocalHierarchy* );
	void CAnimLocalHierarchy(CAnimLocalHierarchy* );
	CAnimLocalHierarchy& operator=(CAnimLocalHierarchy* , const CAnimLocalHierarchy& );
};

// <00B3CD3E> ../public/animationsystem/animationresource.h:217
// member functions: 14
// member variables: 6
// static member variable: 1
// struct size: 48
struct CAnimLocalHierarchy {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:219 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:219 */
	CAnimLocalHierarchy* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:219 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:219 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:219 */
	void Schema_CompileTimeVerificationFunction(CAnimLocalHierarchy* );
	/* ../public/animationsystem/animationresource.h:219 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:219 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:219 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimLocalHierarchy* );
	/* ../public/animationsystem/animationresource.h:220 */
	CAnimLocalHierarchy* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:220 */
	void KV3TransferSave(const CAnimLocalHierarchy* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:220 */
	void KV3TransferLoad(CAnimLocalHierarchy* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:220 */
	void KV3TransferSave_CAnimLocalHierarchy(const CAnimLocalHierarchy* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:220 */
	void KV3TransferLoad_CAnimLocalHierarchy(CAnimLocalHierarchy* , CKV3TransferLoadContext* );
	AnimString_t m_sBone; /* 0 16 */
	AnimString_t m_sNewParent; /* 16 16 */
	int32 m_nStartFrame; /* 32 4 */
	int32 m_nPeakFrame; /* 36 4 */
	int32 m_nTailFrame; /* 40 4 */
	int32 m_nEndFrame; /* 44 4 */
	void ~CAnimLocalHierarchy(CAnimLocalHierarchy* );
};

// <025B3DCD> ../public/animationsystem/animationresource.h:236
void CAnimDecoder::~CAnimDecoder()
{
} /* size: 0 */

// <025B3DB0> ../public/animationsystem/animationresource.h:236
inline void CAnimDecoder::~CAnimDecoder()
{
} /* size: 0 */

// <025B1AAA> ../public/animationsystem/animationresource.h:236
void CAnimDecoder::CAnimDecoder()
{
} /* size: 0 */

// <025B1A8D> ../public/animationsystem/animationresource.h:236
inline void CAnimDecoder::CAnimDecoder()
{
} /* size: 0 */

// <00A17DBB> ../public/animationsystem/animationresource.h:236
inline void CAnimDecoder::operator=(const CAnimDecoder &)
{
} /* size: 0 */

// <00201B15> ../public/animationsystem/animationresource.h:236
// member functions: 16
// member variables: 3
// static member variable: 1
// struct size: 24
struct CAnimDecoder {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:238 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:238 */
	CAnimDecoder* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:238 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:238 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:238 */
	void Schema_CompileTimeVerificationFunction(CAnimDecoder* );
	/* ../public/animationsystem/animationresource.h:238 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:238 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:238 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimDecoder* );
	/* ../public/animationsystem/animationresource.h:239 */
	CAnimDecoder* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:239 */
	void KV3TransferSave(const CAnimDecoder* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:239 */
	void KV3TransferLoad(CAnimDecoder* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:239 */
	void KV3TransferSave_CAnimDecoder(const CAnimDecoder* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:239 */
	void KV3TransferLoad_CAnimDecoder(CAnimDecoder* , CKV3TransferLoadContext* );
	AnimString_t m_szName; /* 0 16 */
	int32 m_nVersion; /* 16 4 */
	int32 m_nType; /* 20 4 */
	CAnimDecoder& operator=(CAnimDecoder* , const CAnimDecoder& );
	void ~CAnimDecoder(CAnimDecoder* );
	void CAnimDecoder(CAnimDecoder* );
};

// <008F3B9D> ../public/animationsystem/animationresource.h:236
// member functions: 16
// member variables: 3
// static member variable: 1
// struct size: 24
struct CAnimDecoder {
	/* ../public/animationsystem/animationresource.h:239 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:238 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:238 */
	CAnimDecoder* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:238 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:238 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:238 */
	void Schema_CompileTimeVerificationFunction(CAnimDecoder* );
	/* ../public/animationsystem/animationresource.h:238 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:238 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:238 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimDecoder* );
	/* ../public/animationsystem/animationresource.h:239 */
	CAnimDecoder* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:239 */
	void KV3TransferSave(const CAnimDecoder* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:239 */
	void KV3TransferLoad(CAnimDecoder* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:239 */
	void KV3TransferSave_CAnimDecoder(const CAnimDecoder* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:239 */
	void KV3TransferLoad_CAnimDecoder(CAnimDecoder* , CKV3TransferLoadContext* );
	AnimString_t m_szName; /* 0 16 */
	int32 m_nVersion; /* 16 4 */
	int32 m_nType; /* 20 4 */
	void ~CAnimDecoder(CAnimDecoder* );
	void CAnimDecoder(CAnimDecoder* );
	CAnimDecoder& operator=(CAnimDecoder* , const CAnimDecoder& );
};

// <00B3CF44> ../public/animationsystem/animationresource.h:236
// member functions: 14
// member variables: 3
// static member variable: 1
// struct size: 24
struct CAnimDecoder {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:238 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:238 */
	CAnimDecoder* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:238 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:238 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:238 */
	void Schema_CompileTimeVerificationFunction(CAnimDecoder* );
	/* ../public/animationsystem/animationresource.h:238 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:238 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:238 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimDecoder* );
	/* ../public/animationsystem/animationresource.h:239 */
	CAnimDecoder* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:239 */
	void KV3TransferSave(const CAnimDecoder* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:239 */
	void KV3TransferLoad(CAnimDecoder* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:239 */
	void KV3TransferSave_CAnimDecoder(const CAnimDecoder* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:239 */
	void KV3TransferLoad_CAnimDecoder(CAnimDecoder* , CKV3TransferLoadContext* );
	AnimString_t m_szName; /* 0 16 */
	int32 m_nVersion; /* 16 4 */
	int32 m_nType; /* 20 4 */
	void ~CAnimDecoder(CAnimDecoder* );
};

// <0254434B> ../public/animationsystem/animationresource.h:236
// member functions: 15
// member variables: 3
// static member variable: 1
// struct size: 24
struct CAnimDecoder {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:238 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:238 */
	CAnimDecoder* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:238 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:238 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:238 */
	void Schema_CompileTimeVerificationFunction(CAnimDecoder* );
	/* ../public/animationsystem/animationresource.h:238 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:238 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:238 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimDecoder* );
	/* ../public/animationsystem/animationresource.h:239 */
	CAnimDecoder* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:239 */
	void KV3TransferSave(const CAnimDecoder* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:239 */
	void KV3TransferLoad(CAnimDecoder* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:239 */
	void KV3TransferSave_CAnimDecoder(const CAnimDecoder* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:239 */
	void KV3TransferLoad_CAnimDecoder(CAnimDecoder* , CKV3TransferLoadContext* );
	AnimString_t m_szName; /* 0 16 */
	int32 m_nVersion; /* 16 4 */
	int32 m_nType; /* 20 4 */
	void CAnimDecoder(CAnimDecoder* );
	void ~CAnimDecoder(CAnimDecoder* );
};

// <00A498DA> ../public/animationsystem/animationresource.h:238
inline void CAnimDecoder::Schema_DynamicBinding()
{
} /* size: 0 */

// <00C412A5> ../public/animationsystem/animationresource.h:251
void CAnimFrameSegment::~CAnimFrameSegment()
{
} /* size: 0 */

// <00C41289> ../public/animationsystem/animationresource.h:251
inline void CAnimFrameSegment::~CAnimFrameSegment()
{
} /* size: 0 */

// <00C3366B> ../public/animationsystem/animationresource.h:251
void CAnimFrameSegment::CAnimFrameSegment()
{
} /* size: 0 */

// <00C3364F> ../public/animationsystem/animationresource.h:251
inline void CAnimFrameSegment::CAnimFrameSegment()
{
} /* size: 0 */

// <00A1686C> ../public/animationsystem/animationresource.h:251
inline void CAnimFrameSegment::operator=(const CAnimFrameSegment &)
{
} /* size: 0 */

// <00201D2A> ../public/animationsystem/animationresource.h:251
// member functions: 17
// member variables: 4
// static member variable: 1
// struct size: 40
struct CAnimFrameSegment {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:253 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:253 */
	CAnimFrameSegment* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:253 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:253 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:253 */
	void Schema_CompileTimeVerificationFunction(CAnimFrameSegment* );
	/* ../public/animationsystem/animationresource.h:253 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:253 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:253 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimFrameSegment* );
	/* ../public/animationsystem/animationresource.h:254 */
	CAnimFrameSegment* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:254 */
	void KV3TransferSave(const CAnimFrameSegment* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:254 */
	void KV3TransferLoad(CAnimFrameSegment* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:254 */
	void KV3TransferSave_CAnimFrameSegment(const CAnimFrameSegment* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:254 */
	void KV3TransferLoad_CAnimFrameSegment(CAnimFrameSegment* , CKV3TransferLoadContext* );
	int32 m_nUniqueFrameIndex; /* 0 4 */
	uint32 m_nLocalElementMasks; /* 4 4 */
	int32 m_nLocalChannel; /* 8 4 */
	CUtlBinaryBlock m_container; /* 16 24 */
	/* ../public/animationsystem/animationresource.h:262 */
	const DecodeContainer_t* pContainer(const CAnimFrameSegment* );
	CAnimFrameSegment& operator=(CAnimFrameSegment* , const CAnimFrameSegment& );
	void ~CAnimFrameSegment(CAnimFrameSegment* );
	void CAnimFrameSegment(CAnimFrameSegment* );
};

// <008F3DCD> ../public/animationsystem/animationresource.h:251
// member functions: 17
// member variables: 4
// static member variable: 1
// struct size: 40
struct CAnimFrameSegment {
	/* ../public/animationsystem/animationresource.h:254 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:253 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:253 */
	CAnimFrameSegment* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:253 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:253 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:253 */
	void Schema_CompileTimeVerificationFunction(CAnimFrameSegment* );
	/* ../public/animationsystem/animationresource.h:253 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:253 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:253 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimFrameSegment* );
	/* ../public/animationsystem/animationresource.h:254 */
	CAnimFrameSegment* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:254 */
	void KV3TransferSave(const CAnimFrameSegment* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:254 */
	void KV3TransferLoad(CAnimFrameSegment* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:254 */
	void KV3TransferSave_CAnimFrameSegment(const CAnimFrameSegment* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:254 */
	void KV3TransferLoad_CAnimFrameSegment(CAnimFrameSegment* , CKV3TransferLoadContext* );
	int32 m_nUniqueFrameIndex; /* 0 4 */
	uint32 m_nLocalElementMasks; /* 4 4 */
	int32 m_nLocalChannel; /* 8 4 */
	CUtlBinaryBlock m_container; /* 16 24 */
	/* ../public/animationsystem/animationresource.h:262 */
	const DecodeContainer_t* pContainer(const CAnimFrameSegment* );
	void ~CAnimFrameSegment(CAnimFrameSegment* );
	void CAnimFrameSegment(CAnimFrameSegment* );
	CAnimFrameSegment& operator=(CAnimFrameSegment* , const CAnimFrameSegment& );
};

// <00B3D11D> ../public/animationsystem/animationresource.h:251
// member functions: 16
// member variables: 4
// static member variable: 1
// struct size: 40
struct CAnimFrameSegment {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:253 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:253 */
	CAnimFrameSegment* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:253 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:253 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:253 */
	void Schema_CompileTimeVerificationFunction(CAnimFrameSegment* );
	/* ../public/animationsystem/animationresource.h:253 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:253 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:253 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimFrameSegment* );
	/* ../public/animationsystem/animationresource.h:254 */
	CAnimFrameSegment* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:254 */
	void KV3TransferSave(const CAnimFrameSegment* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:254 */
	void KV3TransferLoad(CAnimFrameSegment* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:254 */
	void KV3TransferSave_CAnimFrameSegment(const CAnimFrameSegment* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:254 */
	void KV3TransferLoad_CAnimFrameSegment(CAnimFrameSegment* , CKV3TransferLoadContext* );
	int32 m_nUniqueFrameIndex; /* 0 4 */
	uint32 m_nLocalElementMasks; /* 4 4 */
	int32 m_nLocalChannel; /* 8 4 */
	CUtlBinaryBlock m_container; /* 16 24 */
	/* ../public/animationsystem/animationresource.h:262 */
	const DecodeContainer_t* pContainer(const CAnimFrameSegment* );
	void CAnimFrameSegment(CAnimFrameSegment* );
	void ~CAnimFrameSegment(CAnimFrameSegment* );
};

// <0254453D> ../public/animationsystem/animationresource.h:251
// member functions: 14
// member variables: 4
// static member variable: 1
// struct size: 40
struct CAnimFrameSegment {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:253 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:253 */
	CAnimFrameSegment* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:253 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:253 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:253 */
	void Schema_CompileTimeVerificationFunction(CAnimFrameSegment* );
	/* ../public/animationsystem/animationresource.h:253 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:253 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:253 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimFrameSegment* );
	/* ../public/animationsystem/animationresource.h:254 */
	CAnimFrameSegment* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:254 */
	void KV3TransferSave(const CAnimFrameSegment* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:254 */
	void KV3TransferLoad(CAnimFrameSegment* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:254 */
	void KV3TransferSave_CAnimFrameSegment(const CAnimFrameSegment* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:254 */
	void KV3TransferLoad_CAnimFrameSegment(CAnimFrameSegment* , CKV3TransferLoadContext* );
	int32 m_nUniqueFrameIndex; /* 0 4 */
	uint32 m_nLocalElementMasks; /* 4 4 */
	int32 m_nLocalChannel; /* 8 4 */
	CUtlBinaryBlock m_container; /* 16 24 */
	/* ../public/animationsystem/animationresource.h:262 */
	const DecodeContainer_t* pContainer(const CAnimFrameSegment* );
};

// <00A498B5> ../public/animationsystem/animationresource.h:253
inline void CAnimFrameSegment::Schema_DynamicBinding()
{
} /* size: 0 */

// <025DE1AF> ../public/animationsystem/animationresource.h:262
inline void CAnimFrameSegment::pContainer()
{
} /* size: 0 */

// <00C416A2> ../public/animationsystem/animationresource.h:269
void CAnimFrameBlockAnim::~CAnimFrameBlockAnim()
{
} /* size: 0 */

// <00C41685> ../public/animationsystem/animationresource.h:269
inline void CAnimFrameBlockAnim::~CAnimFrameBlockAnim()
{
} /* size: 0 */

// <00C341D3> ../public/animationsystem/animationresource.h:269
void CAnimFrameBlockAnim::CAnimFrameBlockAnim()
{
} /* size: 0 */

// <00C341B6> ../public/animationsystem/animationresource.h:269
inline void CAnimFrameBlockAnim::CAnimFrameBlockAnim()
{
} /* size: 0 */

// <00A141FB> ../public/animationsystem/animationresource.h:269
inline void CAnimFrameBlockAnim::operator=(const CAnimFrameBlockAnim &)
{
} /* size: 0 */

// <04A3D2FD> ../public/animationsystem/animationresource.h:269
// member functions: 13
// member variables: 3
// static member variable: 1
// struct size: 40
struct CAnimFrameBlockAnim {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:271 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:271 */
	CAnimFrameBlockAnim* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:271 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:271 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:271 */
	void Schema_CompileTimeVerificationFunction(CAnimFrameBlockAnim* );
	/* ../public/animationsystem/animationresource.h:271 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:271 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:271 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimFrameBlockAnim* );
	/* ../public/animationsystem/animationresource.h:272 */
	CAnimFrameBlockAnim* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:272 */
	void KV3TransferSave(const CAnimFrameBlockAnim* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:272 */
	void KV3TransferLoad(CAnimFrameBlockAnim* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:272 */
	void KV3TransferSave_CAnimFrameBlockAnim(const CAnimFrameBlockAnim* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:272 */
	void KV3TransferLoad_CAnimFrameBlockAnim(CAnimFrameBlockAnim* , CKV3TransferLoadContext* );
	int32 m_nStartFrame; /* 0 4 */
	int32 m_nEndFrame; /* 4 4 */
	CUtlVector<int, CUtlMemory<int, int> > m_segmentIndexArray; /* 8 32 */
};

// <00202008> ../public/animationsystem/animationresource.h:269
// member functions: 16
// member variables: 3
// static member variable: 1
// struct size: 40
struct CAnimFrameBlockAnim {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:271 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:271 */
	CAnimFrameBlockAnim* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:271 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:271 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:271 */
	void Schema_CompileTimeVerificationFunction(CAnimFrameBlockAnim* );
	/* ../public/animationsystem/animationresource.h:271 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:271 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:271 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimFrameBlockAnim* );
	/* ../public/animationsystem/animationresource.h:272 */
	CAnimFrameBlockAnim* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:272 */
	void KV3TransferSave(const CAnimFrameBlockAnim* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:272 */
	void KV3TransferLoad(CAnimFrameBlockAnim* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:272 */
	void KV3TransferSave_CAnimFrameBlockAnim(const CAnimFrameBlockAnim* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:272 */
	void KV3TransferLoad_CAnimFrameBlockAnim(CAnimFrameBlockAnim* , CKV3TransferLoadContext* );
	int32 m_nStartFrame; /* 0 4 */
	int32 m_nEndFrame; /* 4 4 */
	CUtlVector<int, CUtlMemory<int, int> > m_segmentIndexArray; /* 8 32 */
	CAnimFrameBlockAnim& operator=(CAnimFrameBlockAnim* , const CAnimFrameBlockAnim& );
	void ~CAnimFrameBlockAnim(CAnimFrameBlockAnim* );
	void CAnimFrameBlockAnim(CAnimFrameBlockAnim* );
};

// <008F40C6> ../public/animationsystem/animationresource.h:269
// member functions: 16
// member variables: 3
// static member variable: 1
// struct size: 40
struct CAnimFrameBlockAnim {
	/* ../public/animationsystem/animationresource.h:272 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:271 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:271 */
	CAnimFrameBlockAnim* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:271 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:271 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:271 */
	void Schema_CompileTimeVerificationFunction(CAnimFrameBlockAnim* );
	/* ../public/animationsystem/animationresource.h:271 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:271 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:271 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimFrameBlockAnim* );
	/* ../public/animationsystem/animationresource.h:272 */
	CAnimFrameBlockAnim* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:272 */
	void KV3TransferSave(const CAnimFrameBlockAnim* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:272 */
	void KV3TransferLoad(CAnimFrameBlockAnim* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:272 */
	void KV3TransferSave_CAnimFrameBlockAnim(const CAnimFrameBlockAnim* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:272 */
	void KV3TransferLoad_CAnimFrameBlockAnim(CAnimFrameBlockAnim* , CKV3TransferLoadContext* );
	int32 m_nStartFrame; /* 0 4 */
	int32 m_nEndFrame; /* 4 4 */
	CUtlVector<int, CUtlMemory<int, int> > m_segmentIndexArray; /* 8 32 */
	void ~CAnimFrameBlockAnim(CAnimFrameBlockAnim* );
	void CAnimFrameBlockAnim(CAnimFrameBlockAnim* );
	CAnimFrameBlockAnim& operator=(CAnimFrameBlockAnim* , const CAnimFrameBlockAnim& );
};

// <00B3D3E4> ../public/animationsystem/animationresource.h:269
// member functions: 15
// member variables: 3
// static member variable: 1
// struct size: 40
struct CAnimFrameBlockAnim {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:271 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:271 */
	CAnimFrameBlockAnim* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:271 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:271 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:271 */
	void Schema_CompileTimeVerificationFunction(CAnimFrameBlockAnim* );
	/* ../public/animationsystem/animationresource.h:271 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:271 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:271 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimFrameBlockAnim* );
	/* ../public/animationsystem/animationresource.h:272 */
	CAnimFrameBlockAnim* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:272 */
	void KV3TransferSave(const CAnimFrameBlockAnim* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:272 */
	void KV3TransferLoad(CAnimFrameBlockAnim* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:272 */
	void KV3TransferSave_CAnimFrameBlockAnim(const CAnimFrameBlockAnim* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:272 */
	void KV3TransferLoad_CAnimFrameBlockAnim(CAnimFrameBlockAnim* , CKV3TransferLoadContext* );
	int32 m_nStartFrame; /* 0 4 */
	int32 m_nEndFrame; /* 4 4 */
	CUtlVector<int, CUtlMemory<int, int> > m_segmentIndexArray; /* 8 32 */
	void CAnimFrameBlockAnim(CAnimFrameBlockAnim* );
	void ~CAnimFrameBlockAnim(CAnimFrameBlockAnim* );
};

// <00A49890> ../public/animationsystem/animationresource.h:271
inline void CAnimFrameBlockAnim::Schema_DynamicBinding()
{
} /* size: 0 */

// <00C42E33> ../public/animationsystem/animationresource.h:285
void CAnimEncodedFrames::~CAnimEncodedFrames()
{
} /* size: 0 */

// <00C42E16> ../public/animationsystem/animationresource.h:285
inline void CAnimEncodedFrames::~CAnimEncodedFrames()
{
} /* size: 0 */

// <00A12454> ../public/animationsystem/animationresource.h:285
inline void CAnimEncodedFrames::operator=(const CAnimEncodedFrames &)
{
} /* size: 0 */

// <04A3D4C9> ../public/animationsystem/animationresource.h:285
// member functions: 17
// member variables: 5
// static member variable: 1
// struct size: 280
struct CAnimEncodedFrames {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:287 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:287 */
	CAnimEncodedFrames* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:287 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:287 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:287 */
	void Schema_CompileTimeVerificationFunction(CAnimEncodedFrames* );
	/* ../public/animationsystem/animationresource.h:287 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:287 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:287 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimEncodedFrames* );
	/* ../public/animationsystem/animationresource.h:288 */
	CAnimEncodedFrames* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:288 */
	void KV3TransferSave(const CAnimEncodedFrames* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:288 */
	void KV3TransferLoad(CAnimEncodedFrames* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:288 */
	void KV3TransferSave_CAnimEncodedFrames(const CAnimEncodedFrames* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:288 */
	void KV3TransferLoad_CAnimEncodedFrames(CAnimEncodedFrames* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:290 */
	void CAnimEncodedFrames(CAnimEncodedFrames* );
	AnimString_t m_fileName; /* 0 16 */
	/* ../public/animationsystem/animationresource.h:293 */
	const char* GetFileName(const CAnimEncodedFrames* );
	int32 m_nFrames; /* 16 4 */
	int32 m_nFramesPerBlock; /* 20 4 */
	CUtlVector<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> > m_frameblockArray; /* 24 32 */
	/* ../public/animationsystem/animationresource.h:305 */
	const CAnimFrameBlockAnim* pAnim(const CAnimEncodedFrames* , int* );
	CAnimEncodeDifference m_usageDifferences; /* 56 224 */
	/* ../public/animationsystem/animationresource.h:312 */
	void CAnimEncodedFrames(CAnimEncodedFrames* , const CAnimEncodedFrames& );
};

// <00202233> ../public/animationsystem/animationresource.h:285
// member functions: 19
// member variables: 5
// static member variable: 1
// struct size: 280
struct CAnimEncodedFrames {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:287 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:287 */
	CAnimEncodedFrames* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:287 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:287 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:287 */
	void Schema_CompileTimeVerificationFunction(CAnimEncodedFrames* );
	/* ../public/animationsystem/animationresource.h:287 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:287 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:287 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimEncodedFrames* );
	/* ../public/animationsystem/animationresource.h:288 */
	CAnimEncodedFrames* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:288 */
	void KV3TransferSave(const CAnimEncodedFrames* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:288 */
	void KV3TransferLoad(CAnimEncodedFrames* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:288 */
	void KV3TransferSave_CAnimEncodedFrames(const CAnimEncodedFrames* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:288 */
	void KV3TransferLoad_CAnimEncodedFrames(CAnimEncodedFrames* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:290 */
	void CAnimEncodedFrames(CAnimEncodedFrames* );
	AnimString_t m_fileName; /* 0 16 */
	/* ../public/animationsystem/animationresource.h:293 */
	const char* GetFileName(const CAnimEncodedFrames* );
	int32 m_nFrames; /* 16 4 */
	int32 m_nFramesPerBlock; /* 20 4 */
	CUtlVector<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> > m_frameblockArray; /* 24 32 */
	/* ../public/animationsystem/animationresource.h:305 */
	const CAnimFrameBlockAnim* pAnim(const CAnimEncodedFrames* , int* );
	CAnimEncodeDifference m_usageDifferences; /* 56 224 */
	/* ../public/animationsystem/animationresource.h:312 */
	void CAnimEncodedFrames(CAnimEncodedFrames* , const CAnimEncodedFrames& );
	CAnimEncodedFrames& operator=(CAnimEncodedFrames* , const CAnimEncodedFrames& );
	void ~CAnimEncodedFrames(CAnimEncodedFrames* );
};

// <008F430C> ../public/animationsystem/animationresource.h:285
// member functions: 19
// member variables: 5
// static member variable: 1
// struct size: 280
struct CAnimEncodedFrames {
	/* ../public/animationsystem/animationresource.h:288 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:287 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:287 */
	CAnimEncodedFrames* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:287 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:287 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:287 */
	void Schema_CompileTimeVerificationFunction(CAnimEncodedFrames* );
	/* ../public/animationsystem/animationresource.h:287 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:287 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:287 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimEncodedFrames* );
	/* ../public/animationsystem/animationresource.h:288 */
	CAnimEncodedFrames* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:288 */
	void KV3TransferSave(const CAnimEncodedFrames* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:288 */
	void KV3TransferLoad(CAnimEncodedFrames* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:288 */
	void KV3TransferSave_CAnimEncodedFrames(const CAnimEncodedFrames* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:288 */
	void KV3TransferLoad_CAnimEncodedFrames(CAnimEncodedFrames* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:290 */
	void CAnimEncodedFrames(CAnimEncodedFrames* );
	AnimString_t m_fileName; /* 0 16 */
	/* ../public/animationsystem/animationresource.h:293 */
	const char* GetFileName(const CAnimEncodedFrames* );
	int32 m_nFrames; /* 16 4 */
	int32 m_nFramesPerBlock; /* 20 4 */
	CUtlVector<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> > m_frameblockArray; /* 24 32 */
	/* ../public/animationsystem/animationresource.h:305 */
	const CAnimFrameBlockAnim* pAnim(const CAnimEncodedFrames* , int* );
	CAnimEncodeDifference m_usageDifferences; /* 56 224 */
	/* ../public/animationsystem/animationresource.h:312 */
	void CAnimEncodedFrames(CAnimEncodedFrames* , const CAnimEncodedFrames& );
	void ~CAnimEncodedFrames(CAnimEncodedFrames* );
	CAnimEncodedFrames& operator=(CAnimEncodedFrames* , const CAnimEncodedFrames& );
};

// <00B3D5EA> ../public/animationsystem/animationresource.h:285
// member functions: 18
// member variables: 5
// static member variable: 1
// struct size: 280
struct CAnimEncodedFrames {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:287 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:287 */
	CAnimEncodedFrames* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:287 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:287 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:287 */
	void Schema_CompileTimeVerificationFunction(CAnimEncodedFrames* );
	/* ../public/animationsystem/animationresource.h:287 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:287 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:287 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimEncodedFrames* );
	/* ../public/animationsystem/animationresource.h:288 */
	CAnimEncodedFrames* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:288 */
	void KV3TransferSave(const CAnimEncodedFrames* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:288 */
	void KV3TransferLoad(CAnimEncodedFrames* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:288 */
	void KV3TransferSave_CAnimEncodedFrames(const CAnimEncodedFrames* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:288 */
	void KV3TransferLoad_CAnimEncodedFrames(CAnimEncodedFrames* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:290 */
	void CAnimEncodedFrames(CAnimEncodedFrames* );
	AnimString_t m_fileName; /* 0 16 */
	/* ../public/animationsystem/animationresource.h:293 */
	const char* GetFileName(const CAnimEncodedFrames* );
	int32 m_nFrames; /* 16 4 */
	int32 m_nFramesPerBlock; /* 20 4 */
	CUtlVector<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> > m_frameblockArray; /* 24 32 */
	/* ../public/animationsystem/animationresource.h:305 */
	const CAnimFrameBlockAnim* pAnim(const CAnimEncodedFrames* , int* );
	CAnimEncodeDifference m_usageDifferences; /* 56 224 */
	/* ../public/animationsystem/animationresource.h:312 */
	void CAnimEncodedFrames(CAnimEncodedFrames* , const CAnimEncodedFrames& );
	void ~CAnimEncodedFrames(CAnimEncodedFrames* );
};

// <00A4986B> ../public/animationsystem/animationresource.h:287
inline void CAnimEncodedFrames::Schema_DynamicBinding()
{
} /* size: 0 */

// <00C34559> ../public/animationsystem/animationresource.h:290
void CAnimEncodedFrames::CAnimEncodedFrames()
{
} /* size: 0 */

// <00C34540> ../public/animationsystem/animationresource.h:290
inline void CAnimEncodedFrames::CAnimEncodedFrames()
{
} /* size: 0 */

// <00C345C0> ../public/animationsystem/animationresource.h:317
void CAnimDesc_Flag::CAnimDesc_Flag()
{
} /* size: 0 */

// <00C345A3> ../public/animationsystem/animationresource.h:317
inline void CAnimDesc_Flag::CAnimDesc_Flag()
{
} /* size: 0 */

// <04A3EDED> ../public/animationsystem/animationresource.h:317
// member functions: 13
// member variables: 7
// static member variable: 1
// struct size: 7
struct CAnimDesc_Flag {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:319 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:319 */
	CAnimDesc_Flag* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:319 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:319 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:319 */
	void Schema_CompileTimeVerificationFunction(CAnimDesc_Flag* );
	/* ../public/animationsystem/animationresource.h:319 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:319 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:319 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimDesc_Flag* );
	/* ../public/animationsystem/animationresource.h:320 */
	CAnimDesc_Flag* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:320 */
	void KV3TransferSave(const CAnimDesc_Flag* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:320 */
	void KV3TransferLoad(CAnimDesc_Flag* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:320 */
	void KV3TransferSave_CAnimDesc_Flag(const CAnimDesc_Flag* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:320 */
	void KV3TransferLoad_CAnimDesc_Flag(CAnimDesc_Flag* , CKV3TransferLoadContext* );
	bool m_bLooping; /* 0 1 */
	bool m_bAllZeros; /* 1 1 */
	bool m_bHidden; /* 2 1 */
	bool m_bDelta; /* 3 1 */
	bool m_bLegacyWorldspace; /* 4 1 */
	bool m_bModelDoc; /* 5 1 */
	bool m_bDisableInterpolation; /* 6 1 */
};

// <00203C0E> ../public/animationsystem/animationresource.h:317
// member functions: 14
// member variables: 7
// static member variable: 1
// struct size: 7
struct CAnimDesc_Flag {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:319 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:319 */
	CAnimDesc_Flag* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:319 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:319 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:319 */
	void Schema_CompileTimeVerificationFunction(CAnimDesc_Flag* );
	/* ../public/animationsystem/animationresource.h:319 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:319 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:319 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimDesc_Flag* );
	/* ../public/animationsystem/animationresource.h:320 */
	CAnimDesc_Flag* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:320 */
	void KV3TransferSave(const CAnimDesc_Flag* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:320 */
	void KV3TransferLoad(CAnimDesc_Flag* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:320 */
	void KV3TransferSave_CAnimDesc_Flag(const CAnimDesc_Flag* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:320 */
	void KV3TransferLoad_CAnimDesc_Flag(CAnimDesc_Flag* , CKV3TransferLoadContext* );
	bool m_bLooping; /* 0 1 */
	bool m_bAllZeros; /* 1 1 */
	bool m_bHidden; /* 2 1 */
	bool m_bDelta; /* 3 1 */
	bool m_bLegacyWorldspace; /* 4 1 */
	bool m_bModelDoc; /* 5 1 */
	bool m_bDisableInterpolation; /* 6 1 */
	void CAnimDesc_Flag(CAnimDesc_Flag* );
};

// <008F5D03> ../public/animationsystem/animationresource.h:317
// member functions: 14
// member variables: 7
// static member variable: 1
// struct size: 7
struct CAnimDesc_Flag {
	/* ../public/animationsystem/animationresource.h:320 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:319 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:319 */
	CAnimDesc_Flag* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:319 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:319 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:319 */
	void Schema_CompileTimeVerificationFunction(CAnimDesc_Flag* );
	/* ../public/animationsystem/animationresource.h:319 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:319 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:319 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimDesc_Flag* );
	/* ../public/animationsystem/animationresource.h:320 */
	CAnimDesc_Flag* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:320 */
	void KV3TransferSave(const CAnimDesc_Flag* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:320 */
	void KV3TransferLoad(CAnimDesc_Flag* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:320 */
	void KV3TransferSave_CAnimDesc_Flag(const CAnimDesc_Flag* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:320 */
	void KV3TransferLoad_CAnimDesc_Flag(CAnimDesc_Flag* , CKV3TransferLoadContext* );
	bool m_bLooping; /* 0 1 */
	bool m_bAllZeros; /* 1 1 */
	bool m_bHidden; /* 2 1 */
	bool m_bDelta; /* 3 1 */
	bool m_bLegacyWorldspace; /* 4 1 */
	bool m_bModelDoc; /* 5 1 */
	bool m_bDisableInterpolation; /* 6 1 */
	void CAnimDesc_Flag(CAnimDesc_Flag* );
};

// <00A49846> ../public/animationsystem/animationresource.h:319
inline void CAnimDesc_Flag::Schema_DynamicBinding()
{
} /* size: 0 */

// <04A3EFF9> ../public/animationsystem/animationresource.h:334
// member functions: 15
// member variables: 2
// static member variable: 1
// struct size: 8
struct CAnimSequenceParams {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:336 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:336 */
	CAnimSequenceParams* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:336 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:336 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:336 */
	void Schema_CompileTimeVerificationFunction(CAnimSequenceParams* );
	/* ../public/animationsystem/animationresource.h:336 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:336 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:336 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimSequenceParams* );
	/* ../public/animationsystem/animationresource.h:337 */
	CAnimSequenceParams* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:337 */
	void KV3TransferSave(const CAnimSequenceParams* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:337 */
	void KV3TransferLoad(CAnimSequenceParams* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:337 */
	void KV3TransferSave_CAnimSequenceParams(const CAnimSequenceParams* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:337 */
	void KV3TransferLoad_CAnimSequenceParams(CAnimSequenceParams* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:339 */
	void CAnimSequenceParams(CAnimSequenceParams* );
	float m_flFadeInTime; /* 0 4 */
	float m_flFadeOutTime; /* 4 4 */
	/* ../public/animationsystem/animationresource.h:346 */
	void CAnimSequenceParams(CAnimSequenceParams* , const CAnimSequenceParams& );
};

// <008F5F4B> ../public/animationsystem/animationresource.h:334
// member functions: 15
// member variables: 2
// static member variable: 1
// struct size: 8
struct CAnimSequenceParams {
	/* ../public/animationsystem/animationresource.h:337 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:336 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:336 */
	CAnimSequenceParams* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:336 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:336 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:336 */
	void Schema_CompileTimeVerificationFunction(CAnimSequenceParams* );
	/* ../public/animationsystem/animationresource.h:336 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:336 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:336 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimSequenceParams* );
	/* ../public/animationsystem/animationresource.h:337 */
	CAnimSequenceParams* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:337 */
	void KV3TransferSave(const CAnimSequenceParams* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:337 */
	void KV3TransferLoad(CAnimSequenceParams* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:337 */
	void KV3TransferSave_CAnimSequenceParams(const CAnimSequenceParams* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:337 */
	void KV3TransferLoad_CAnimSequenceParams(CAnimSequenceParams* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:339 */
	void CAnimSequenceParams(CAnimSequenceParams* );
	float m_flFadeInTime; /* 0 4 */
	float m_flFadeOutTime; /* 4 4 */
	/* ../public/animationsystem/animationresource.h:346 */
	void CAnimSequenceParams(CAnimSequenceParams* , const CAnimSequenceParams& );
};

// <00A49821> ../public/animationsystem/animationresource.h:336
inline void CAnimSequenceParams::Schema_DynamicBinding()
{
} /* size: 0 */

// <00C34529> ../public/animationsystem/animationresource.h:339
void CAnimSequenceParams::CAnimSequenceParams()
{
} /* size: 0 */

// <00C34510> ../public/animationsystem/animationresource.h:339
inline void CAnimSequenceParams::CAnimSequenceParams()
{
} /* size: 0 */

// <00C418D2> ../public/animationsystem/animationresource.h:352
// variables: 4
// function calls: 104
void CAnimDesc::~CAnimDesc()
{
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1798
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 352
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1798
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 352
	{
		int i; // 1721
		CUtlMemory<CAnimLocalHierarchy, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 217
		CBufferString::~CBufferString(); // 217
		CAnimLocalHierarchy::~CAnimLocalHierarchy(); // 1526
		Destruct<CAnimLocalHierarchy>(CAnimLocalHierarchy* pMemory); // 1723
	}
	CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimLocalHierarchy, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimLocalHierarchy, int>::Purge(); // 903
	CUtlMemory<CAnimLocalHierarchy, int>::Purge(); // 1799
	CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::Purge(); // 560
	ValidateAlignment<CAnimLocalHierarchy>(void); // 508
	CUtlMemory<CAnimLocalHierarchy, int>::Purge(); // 510
	CUtlMemory<CAnimLocalHierarchy, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::~CUtlVector(); // 352
	{
		int i; // 1721
		CUtlMemory<CAnimActivity, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 402
		CAnimActivity::~CAnimActivity(); // 1526
		Destruct<CAnimActivity>(CAnimActivity* pMemory); // 1723
	}
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimActivity, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimActivity, int>::Purge(); // 903
	CUtlMemory<CAnimActivity, int>::Purge(); // 1799
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::Purge(); // 560
	ValidateAlignment<CAnimActivity>(void); // 508
	CUtlMemory<CAnimActivity, int>::Purge(); // 510
	CUtlMemory<CAnimActivity, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimActivity, CUtlMemory<CAnimActivity, int> >::~CUtlVector(); // 352
	{
		int i; // 1721
		CUtlMemory<CAnimAnimEvent, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 116
		CBufferString::~CBufferString(); // 116
		CAnimAnimEvent::~CAnimAnimEvent(); // 1526
		Destruct<CAnimAnimEvent>(CAnimAnimEvent* pMemory); // 1723
	}
	CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimAnimEvent, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimAnimEvent, int>::Purge(); // 903
	CUtlMemory<CAnimAnimEvent, int>::Purge(); // 1799
	CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::Purge(); // 560
	ValidateAlignment<CAnimAnimEvent>(void); // 508
	CUtlMemory<CAnimAnimEvent, int>::Purge(); // 510
	CUtlMemory<CAnimAnimEvent, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::~CUtlVector(); // 352
	CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimMovement, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimMovement, int>::Purge(); // 903
	CUtlMemory<CAnimMovement, int>::Purge(); // 1799
	CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::Purge(); // 560
	ValidateAlignment<CAnimMovement>(void); // 508
	CUtlMemory<CAnimMovement, int>::Purge(); // 510
	CUtlMemory<CAnimMovement, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimMovement, CUtlMemory<CAnimMovement, int> >::~CUtlVector(); // 352
	{
		int i; // 1721
		CUtlMemory<CAnimFrameBlockAnim, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::Element(
			int i);  // 1723
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
		CUtlMemory<int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 269
		CAnimFrameBlockAnim::~CAnimFrameBlockAnim(); // 1526
		Destruct<CAnimFrameBlockAnim>(CAnimFrameBlockAnim* pMemory); // 1723
	}
	CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimFrameBlockAnim, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimFrameBlockAnim, int>::Purge(); // 903
	CUtlMemory<CAnimFrameBlockAnim, int>::Purge(); // 1799
	CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::Purge(); // 560
	ValidateAlignment<CAnimFrameBlockAnim>(void); // 508
	CUtlMemory<CAnimFrameBlockAnim, int>::Purge(); // 510
	CUtlMemory<CAnimFrameBlockAnim, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::~CUtlVector(); // 285
	CBufferString::~CBufferString(); // 285
	CAnimEncodedFrames::~CAnimEncodedFrames(); // 352
	CBufferString::~CBufferString(); // 352
} /* size: 637, inline expansions: 73 (2603 bytes) */

// <00C418B5> ../public/animationsystem/animationresource.h:352
inline void CAnimDesc::~CAnimDesc()
{
} /* size: 0 */

// <00A602FF> ../public/animationsystem/animationresource.h:352
// function calls: 153
void CAnimDesc::operator=(const CAnimDesc &)
{
	CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::Count(); // 573
	CUtlMemory<CAnimFrameBlockAnim, int>::Base(); // 112
	CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::Base(); // 102
	CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::begin(); // 574
	CUtlMemory<CAnimFrameBlockAnim, int>::Base(); // 113
	CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::Base(); // 105
	CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::Count(); // 105
	CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::end(); // 574
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 573
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 102
	CUtlVectorBase<int, CUtlMemory<int, int> >::begin(); // 574
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 105
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 105
	CUtlVectorBase<int, CUtlMemory<int, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<int>(const int* pFrom,
				const int* pFromEnd,
				int* pTo);  // 173
	UtlTraitsCopyRange<int>(const int* pFrom,
				const int* pFromEnd,
				int* pTo);  // 574
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator=(
			const CUtlVectorBase<int, CUtlMemory<int, int> >& other);  // 565
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator=(
			const CUtlVectorBase<int, CUtlMemory<int, int> >& other);  // 452
	CUtlVector<int, CUtlMemory<int, int> >::operator=(
			const CUtlVector<int, CUtlMemory<int, int> >& src);  // 269
	CAnimFrameBlockAnim::operator=(
			const CAnimFrameBlockAnim  &);  // 209
	UtlTraitsCopyRange<CAnimFrameBlockAnim>(const CAnimFrameBlockAnim* pFrom,
						const CAnimFrameBlockAnim* pFromEnd,
						CAnimFrameBlockAnim* pTo);  // 200
	UtlTraitsCopyRange<CAnimFrameBlockAnim>(const CAnimFrameBlockAnim* pFrom,
						const CAnimFrameBlockAnim* pFromEnd,
						CAnimFrameBlockAnim* pTo);  // 574
	CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::operator=(
			const CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >& other);  // 565
	CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::operator=(
			const CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >& other);  // 452
	CUtlVector<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::operator=(
			const CUtlVector<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >& src);  // 285
	CAnimEncodedFrames::operator=(
			const CAnimEncodedFrames  &);  // 352
	CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::Count(); // 573
	CUtlMemory<CAnimMovement, int>::Base(); // 112
	CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::Base(); // 102
	CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::begin(); // 574
	CUtlMemory<CAnimMovement, int>::Base(); // 113
	CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::Base(); // 105
	CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::Count(); // 105
	CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::end(); // 574
	Vector::operator=(
			const Vector& vOther);  // 134
	Vector::operator=(
			const Vector& vOther);  // 134
	CAnimMovement::operator=(
			const CAnimMovement  &);  // 209
	UtlTraitsCopyRange<CAnimMovement>(const CAnimMovement* pFrom,
						const CAnimMovement* pFromEnd,
						CAnimMovement* pTo);  // 200
	UtlTraitsCopyRange<CAnimMovement>(const CAnimMovement* pFrom,
						const CAnimMovement* pFromEnd,
						CAnimMovement* pTo);  // 574
	CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::operator=(
			const CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >& other);  // 565
	CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::operator=(
			const CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >& other);  // 452
	CUtlVector<CAnimMovement, CUtlMemory<CAnimMovement, int> >::operator=(
			const CUtlVector<CAnimMovement, CUtlMemory<CAnimMovement, int> >& src);  // 352
	CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::Count(); // 573
	CUtlMemory<CAnimAnimEvent, int>::Base(); // 112
	CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::Base(); // 102
	CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::begin(); // 574
	CUtlMemory<CAnimAnimEvent, int>::Base(); // 113
	CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::Base(); // 105
	CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::Count(); // 105
	CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::end(); // 574
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1108
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1108
	CBufferString::operator=(
			const CBufferString& src);  // 116
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1108
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1108
	CBufferString::operator=(
			const CBufferString& src);  // 116
	CAnimAnimEvent::operator=(
			const CAnimAnimEvent  &);  // 209
	UtlTraitsCopyRange<CAnimAnimEvent>(const CAnimAnimEvent* pFrom,
						const CAnimAnimEvent* pFromEnd,
						CAnimAnimEvent* pTo);  // 200
	UtlTraitsCopyRange<CAnimAnimEvent>(const CAnimAnimEvent* pFrom,
						const CAnimAnimEvent* pFromEnd,
						CAnimAnimEvent* pTo);  // 574
	CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::operator=(
			const CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >& other);  // 565
	CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::operator=(
			const CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >& other);  // 452
	CUtlVector<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::operator=(
			const CUtlVector<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >& src);  // 352
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::Count(); // 573
	CUtlMemory<CAnimActivity, int>::Base(); // 112
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::Base(); // 102
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::begin(); // 574
	CUtlMemory<CAnimActivity, int>::Base(); // 113
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::Base(); // 105
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::Count(); // 105
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::end(); // 574
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1108
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1108
	CBufferString::operator=(
			const CBufferString& src);  // 402
	CAnimActivity::operator=(
			const CAnimActivity  &);  // 209
	UtlTraitsCopyRange<CAnimActivity>(const CAnimActivity* pFrom,
						const CAnimActivity* pFromEnd,
						CAnimActivity* pTo);  // 200
	UtlTraitsCopyRange<CAnimActivity>(const CAnimActivity* pFrom,
						const CAnimActivity* pFromEnd,
						CAnimActivity* pTo);  // 574
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::operator=(
			const CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >& other);  // 565
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::operator=(
			const CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >& other);  // 452
	CUtlVector<CAnimActivity, CUtlMemory<CAnimActivity, int> >::operator=(
			const CUtlVector<CAnimActivity, CUtlMemory<CAnimActivity, int> >& src);  // 352
	CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::Count(); // 573
	CUtlMemory<CAnimLocalHierarchy, int>::Base(); // 112
	CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::Base(); // 102
	CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::begin(); // 574
	CUtlMemory<CAnimLocalHierarchy, int>::Base(); // 113
	CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::Base(); // 105
	CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::Count(); // 105
	CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::end(); // 574
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1108
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1108
	CBufferString::operator=(
			const CBufferString& src);  // 217
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1108
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1108
	CBufferString::operator=(
			const CBufferString& src);  // 217
	CAnimLocalHierarchy::operator=(
			const CAnimLocalHierarchy  &);  // 209
	UtlTraitsCopyRange<CAnimLocalHierarchy>(const CAnimLocalHierarchy* pFrom,
						const CAnimLocalHierarchy* pFromEnd,
						CAnimLocalHierarchy* pTo);  // 200
	UtlTraitsCopyRange<CAnimLocalHierarchy>(const CAnimLocalHierarchy* pFrom,
						const CAnimLocalHierarchy* pFromEnd,
						CAnimLocalHierarchy* pTo);  // 574
	CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::operator=(
			const CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >& other);  // 565
	CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::operator=(
			const CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >& other);  // 452
	CUtlVector<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::operator=(
			const CUtlVector<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >& src);  // 352
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 573
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 102
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::begin(); // 574
	CUtlMemory<Vector, int>::Base(); // 113
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 105
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 105
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::end(); // 574
	Vector::operator=(
			const Vector& vOther);  // 209
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 200
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 574
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 565
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 452
	CUtlVector<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVector<Vector, CUtlMemory<Vector, int> >& src);  // 352
	Vector::operator=(
			const Vector& vOther);  // 352
	Vector::operator=(
			const Vector& vOther);  // 352
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 573
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 102
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::begin(); // 574
	CUtlMemory<Vector, int>::Base(); // 113
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 105
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 105
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::end(); // 574
	Vector::operator=(
			const Vector& vOther);  // 209
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 200
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 574
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 565
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 452
	CUtlVector<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVector<Vector, CUtlMemory<Vector, int> >& src);  // 352
} /* size: 1672, inline expansions: 153 (8757 bytes) */

// <00A0C293> ../public/animationsystem/animationresource.h:352
inline void CAnimDesc::operator=(const CAnimDesc &)
{
} /* size: 0 */

// <00354CB4> ../public/animationsystem/animationresource.h:352
// function calls: 303
void CAnimDesc::operator=(const CAnimDesc &)
{
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1108
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1108
	CBufferString::operator=(
			const CBufferString& src);  // 352
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1108
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1108
	CBufferString::operator=(
			const CBufferString& src);  // 285
	CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::Count(); // 573
	CUtlMemory<CAnimFrameBlockAnim, int>::Base(); // 112
	CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::Base(); // 102
	CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::begin(); // 574
	CUtlMemory<CAnimFrameBlockAnim, int>::Base(); // 113
	CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::Base(); // 105
	CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::Count(); // 105
	CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::end(); // 574
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 573
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 102
	CUtlVectorBase<int, CUtlMemory<int, int> >::begin(); // 574
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 105
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 105
	CUtlVectorBase<int, CUtlMemory<int, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 173
	UtlTraitsCopyRange<int>(const int* pFrom,
				const int* pFromEnd,
				int* pTo);  // 574
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator=(
			const CUtlVectorBase<int, CUtlMemory<int, int> >& other);  // 565
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator=(
			const CUtlVectorBase<int, CUtlMemory<int, int> >& other);  // 452
	CUtlVector<int, CUtlMemory<int, int> >::operator=(
			const CUtlVector<int, CUtlMemory<int, int> >& src);  // 269
	CAnimFrameBlockAnim::operator=(
			const CAnimFrameBlockAnim  &);  // 209
	UtlTraitsCopyRange<CAnimFrameBlockAnim>(const CAnimFrameBlockAnim* pFrom,
						const CAnimFrameBlockAnim* pFromEnd,
						CAnimFrameBlockAnim* pTo);  // 200
	UtlTraitsCopyRange<CAnimFrameBlockAnim>(const CAnimFrameBlockAnim* pFrom,
						const CAnimFrameBlockAnim* pFromEnd,
						CAnimFrameBlockAnim* pTo);  // 574
	CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::operator=(
			const CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >& other);  // 565
	CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::operator=(
			const CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >& other);  // 452
	CUtlVector<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::operator=(
			const CUtlVector<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >& src);  // 285
	CUtlVectorBase<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >::Count(); // 573
	CUtlMemory<CAnimBoneDifference, int>::Base(); // 112
	CUtlVectorBase<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >::Base(); // 102
	CUtlVectorBase<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >::begin(); // 574
	CUtlMemory<CAnimBoneDifference, int>::Base(); // 113
	CUtlVectorBase<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >::Base(); // 105
	CUtlVectorBase<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >::Count(); // 105
	CUtlVectorBase<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >::end(); // 574
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1108
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1108
	CBufferString::operator=(
			const CBufferString& src);  // 51
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1108
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1108
	CBufferString::operator=(
			const CBufferString& src);  // 51
	Vector::operator=(
			const Vector& vOther);  // 51
	CAnimBoneDifference::operator=(
			const CAnimBoneDifference  &);  // 209
	UtlTraitsCopyRange<CAnimBoneDifference>(const CAnimBoneDifference* pFrom,
						const CAnimBoneDifference* pFromEnd,
						CAnimBoneDifference* pTo);  // 200
	UtlTraitsCopyRange<CAnimBoneDifference>(const CAnimBoneDifference* pFrom,
						const CAnimBoneDifference* pFromEnd,
						CAnimBoneDifference* pTo);  // 574
	CUtlVectorBase<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >::operator=(
			const CUtlVectorBase<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >& other);  // 565
	CUtlVectorBase<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >::operator=(
			const CUtlVectorBase<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >& other);  // 452
	CUtlVector<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >::operator=(
			const CUtlVector<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >& src);  // 89
	CUtlVectorBase<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >::Count(); // 573
	CUtlMemory<CAnimMorphDifference, int>::Base(); // 112
	CUtlVectorBase<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >::Base(); // 102
	CUtlVectorBase<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >::begin(); // 574
	CUtlMemory<CAnimMorphDifference, int>::Base(); // 113
	CUtlVectorBase<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >::Base(); // 105
	CUtlVectorBase<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >::Count(); // 105
	CUtlVectorBase<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >::end(); // 574
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1108
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1108
	CBufferString::operator=(
			const CBufferString& src);  // 66
	CAnimMorphDifference::operator=(
			const CAnimMorphDifference  &);  // 209
	UtlTraitsCopyRange<CAnimMorphDifference>(const CAnimMorphDifference* pFrom,
						const CAnimMorphDifference* pFromEnd,
						CAnimMorphDifference* pTo);  // 200
	UtlTraitsCopyRange<CAnimMorphDifference>(const CAnimMorphDifference* pFrom,
						const CAnimMorphDifference* pFromEnd,
						CAnimMorphDifference* pTo);  // 574
	CUtlVectorBase<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >::operator=(
			const CUtlVectorBase<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >& other);  // 565
	CUtlVectorBase<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >::operator=(
			const CUtlVectorBase<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >& other);  // 452
	CUtlVector<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >::operator=(
			const CUtlVector<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >& src);  // 89
	CUtlVectorBase<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >::Count(); // 573
	CUtlMemory<CAnimUserDifference, int>::Base(); // 112
	CUtlVectorBase<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >::Base(); // 102
	CUtlVectorBase<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >::begin(); // 574
	CUtlMemory<CAnimUserDifference, int>::Base(); // 113
	CUtlVectorBase<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >::Base(); // 105
	CUtlVectorBase<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >::Count(); // 105
	CUtlVectorBase<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >::end(); // 574
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1108
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1108
	CBufferString::operator=(
			const CBufferString& src);  // 77
	CAnimUserDifference::operator=(
			const CAnimUserDifference  &);  // 209
	UtlTraitsCopyRange<CAnimUserDifference>(const CAnimUserDifference* pFrom,
						const CAnimUserDifference* pFromEnd,
						CAnimUserDifference* pTo);  // 200
	UtlTraitsCopyRange<CAnimUserDifference>(const CAnimUserDifference* pFrom,
						const CAnimUserDifference* pFromEnd,
						CAnimUserDifference* pTo);  // 574
	CUtlVectorBase<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >::operator=(
			const CUtlVectorBase<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >& other);  // 565
	CUtlVectorBase<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >::operator=(
			const CUtlVectorBase<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >& other);  // 452
	CUtlVector<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >::operator=(
			const CUtlVector<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >& src);  // 89
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 573
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 102
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::begin(); // 574
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 173
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 574
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 565
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 452
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& src);  // 89
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 573
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 102
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::begin(); // 574
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 173
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 574
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 565
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 452
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& src);  // 89
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 573
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 102
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::begin(); // 574
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 173
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 574
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 565
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 452
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& src);  // 89
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 573
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 102
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::begin(); // 574
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 105
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 173
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 574
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 565
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& other);  // 452
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::operator=(
			const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& src);  // 89
	CAnimEncodeDifference::operator=(
			const CAnimEncodeDifference  &);  // 285
	CAnimEncodedFrames::operator=(
			const CAnimEncodedFrames  &);  // 352
	CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::Count(); // 573
	CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::SetCount(
		int count);  // 573
	CUtlMemory<CAnimMovement, int>::Base(); // 112
	CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::Base(); // 102
	CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::begin(); // 574
	CUtlMemory<CAnimMovement, int>::Base(); // 113
	CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::Base(); // 105
	CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::Count(); // 105
	CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::end(); // 574
	Vector::operator=(
			const Vector& vOther);  // 134
	Vector::operator=(
			const Vector& vOther);  // 134
	CAnimMovement::operator=(
			const CAnimMovement  &);  // 209
	UtlTraitsCopyRange<CAnimMovement>(const CAnimMovement* pFrom,
						const CAnimMovement* pFromEnd,
						CAnimMovement* pTo);  // 200
	UtlTraitsCopyRange<CAnimMovement>(const CAnimMovement* pFrom,
						const CAnimMovement* pFromEnd,
						CAnimMovement* pTo);  // 574
	CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::operator=(
			const CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >& other);  // 565
	CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::operator=(
			const CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >& other);  // 452
	CUtlVector<CAnimMovement, CUtlMemory<CAnimMovement, int> >::operator=(
			const CUtlVector<CAnimMovement, CUtlMemory<CAnimMovement, int> >& src);  // 352
	CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::Count(); // 573
	CUtlMemory<CAnimAnimEvent, int>::Base(); // 112
	CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::Base(); // 102
	CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::begin(); // 574
	CUtlMemory<CAnimAnimEvent, int>::Base(); // 113
	CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::Base(); // 105
	CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::Count(); // 105
	CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::end(); // 574
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1108
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1108
	CBufferString::operator=(
			const CBufferString& src);  // 116
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1108
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1108
	CBufferString::operator=(
			const CBufferString& src);  // 116
	CAnimAnimEvent::operator=(
			const CAnimAnimEvent  &);  // 209
	UtlTraitsCopyRange<CAnimAnimEvent>(const CAnimAnimEvent* pFrom,
						const CAnimAnimEvent* pFromEnd,
						CAnimAnimEvent* pTo);  // 200
	UtlTraitsCopyRange<CAnimAnimEvent>(const CAnimAnimEvent* pFrom,
						const CAnimAnimEvent* pFromEnd,
						CAnimAnimEvent* pTo);  // 574
	CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::operator=(
			const CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >& other);  // 565
	CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::operator=(
			const CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >& other);  // 452
	CUtlVector<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::operator=(
			const CUtlVector<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >& src);  // 352
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::Count(); // 573
	CUtlMemory<CAnimActivity, int>::Base(); // 112
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::Base(); // 102
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::begin(); // 574
	CUtlMemory<CAnimActivity, int>::Base(); // 113
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::Base(); // 105
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::Count(); // 105
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::end(); // 574
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1108
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1108
	CBufferString::operator=(
			const CBufferString& src);  // 402
	CAnimActivity::operator=(
			const CAnimActivity  &);  // 209
	UtlTraitsCopyRange<CAnimActivity>(const CAnimActivity* pFrom,
						const CAnimActivity* pFromEnd,
						CAnimActivity* pTo);  // 200
	UtlTraitsCopyRange<CAnimActivity>(const CAnimActivity* pFrom,
						const CAnimActivity* pFromEnd,
						CAnimActivity* pTo);  // 574
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::operator=(
			const CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >& other);  // 565
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::operator=(
			const CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >& other);  // 452
	CUtlVector<CAnimActivity, CUtlMemory<CAnimActivity, int> >::operator=(
			const CUtlVector<CAnimActivity, CUtlMemory<CAnimActivity, int> >& src);  // 352
	CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::Count(); // 573
	CUtlMemory<CAnimLocalHierarchy, int>::Base(); // 112
	CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::Base(); // 102
	CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::begin(); // 574
	CUtlMemory<CAnimLocalHierarchy, int>::Base(); // 113
	CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::Base(); // 105
	CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::Count(); // 105
	CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::end(); // 574
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1108
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1108
	CBufferString::operator=(
			const CBufferString& src);  // 217
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1108
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1108
	CBufferString::operator=(
			const CBufferString& src);  // 217
	CAnimLocalHierarchy::operator=(
			const CAnimLocalHierarchy  &);  // 209
	UtlTraitsCopyRange<CAnimLocalHierarchy>(const CAnimLocalHierarchy* pFrom,
						const CAnimLocalHierarchy* pFromEnd,
						CAnimLocalHierarchy* pTo);  // 200
	UtlTraitsCopyRange<CAnimLocalHierarchy>(const CAnimLocalHierarchy* pFrom,
						const CAnimLocalHierarchy* pFromEnd,
						CAnimLocalHierarchy* pTo);  // 574
	CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::operator=(
			const CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >& other);  // 565
	CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::operator=(
			const CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >& other);  // 452
	CUtlVector<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::operator=(
			const CUtlVector<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >& src);  // 352
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 573
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 102
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::begin(); // 574
	CUtlMemory<Vector, int>::Base(); // 113
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 105
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 105
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::end(); // 574
	Vector::operator=(
			const Vector& vOther);  // 209
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 200
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 574
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 565
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 452
	CUtlVector<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVector<Vector, CUtlMemory<Vector, int> >& src);  // 352
	Vector::operator=(
			const Vector& vOther);  // 352
	Vector::operator=(
			const Vector& vOther);  // 352
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 573
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 102
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::begin(); // 574
	CUtlMemory<Vector, int>::Base(); // 113
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 105
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 105
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::end(); // 574
	Vector::operator=(
			const Vector& vOther);  // 209
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 200
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 574
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 565
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 452
	CUtlVector<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVector<Vector, CUtlMemory<Vector, int> >& src);  // 352
} /* size: 2931, inline expansions: 303 (17848 bytes) */

// <04A3F1FD> ../public/animationsystem/animationresource.h:352
// member functions: 19
// member variables: 14
// static member variable: 1
// struct size: 544
struct CAnimDesc {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:354 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:354 */
	CAnimDesc* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:354 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:354 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:354 */
	void Schema_CompileTimeVerificationFunction(CAnimDesc* );
	/* ../public/animationsystem/animationresource.h:354 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:354 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:354 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimDesc* );
	/* ../public/animationsystem/animationresource.h:355 */
	CAnimDesc* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:355 */
	void KV3TransferSave(const CAnimDesc* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:355 */
	void KV3TransferLoad(CAnimDesc* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:355 */
	void KV3TransferSave_CAnimDesc(const CAnimDesc* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:355 */
	void KV3TransferLoad_CAnimDesc(CAnimDesc* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	/* ../public/animationsystem/animationresource.h:358 */
	const char* GetName(const CAnimDesc* );
	CAnimDesc_Flag m_flags; /* 16 7 */
	float32 fps; /* 24 4 */
	/* ../public/animationsystem/animationresource.h:364 */
	int NumFrames(const CAnimDesc* );
	/* ../public/animationsystem/animationresource.h:365 */
	int MaxFrame(const CAnimDesc* );
	/* ../public/animationsystem/animationresource.h:366 */
	const CAnimEncodeDifference* GetUsageDifferences(const CAnimDesc* );
	CAnimEncodedFrames m_Data; /* 32 280 */
	CUtlVector<CAnimMovement, CUtlMemory<CAnimMovement, int> > m_movementArray; /* 312 32 */
	CUtlVector<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> > m_eventArray; /* 344 32 */
	CUtlVector<CAnimActivity, CUtlMemory<CAnimActivity, int> > m_activityArray; /* 376 32 */
	CUtlVector<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> > m_hierarchyArray; /* 408 32 */
	float32 framestalltime; /* 440 4 */
	Vector m_vecRootMin; /* 444 12 */
	Vector m_vecRootMax; /* 456 12 */
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_vecBoneWorldMin; /* 472 32 */
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_vecBoneWorldMax; /* 504 32 */
	CAnimSequenceParams m_sequenceParams; /* 536 8 */
	/* ../public/animationsystem/animationresource.h:393 */
	void CAnimDesc(CAnimDesc* );
	/* ../public/animationsystem/animationresource.h:397 */
	void CAnimDesc(CAnimDesc* , const CAnimDesc& );
};

// <00204047> ../public/animationsystem/animationresource.h:352
// member functions: 21
// member variables: 14
// static member variable: 1
// struct size: 544
struct CAnimDesc {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:354 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:354 */
	CAnimDesc* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:354 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:354 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:354 */
	void Schema_CompileTimeVerificationFunction(CAnimDesc* );
	/* ../public/animationsystem/animationresource.h:354 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:354 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:354 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimDesc* );
	/* ../public/animationsystem/animationresource.h:355 */
	CAnimDesc* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:355 */
	void KV3TransferSave(const CAnimDesc* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:355 */
	void KV3TransferLoad(CAnimDesc* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:355 */
	void KV3TransferSave_CAnimDesc(const CAnimDesc* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:355 */
	void KV3TransferLoad_CAnimDesc(CAnimDesc* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	/* ../public/animationsystem/animationresource.h:358 */
	const char* GetName(const CAnimDesc* );
	CAnimDesc_Flag m_flags; /* 16 7 */
	float32 fps; /* 24 4 */
	/* ../public/animationsystem/animationresource.h:364 */
	int NumFrames(const CAnimDesc* );
	/* ../public/animationsystem/animationresource.h:365 */
	int MaxFrame(const CAnimDesc* );
	/* ../public/animationsystem/animationresource.h:366 */
	const CAnimEncodeDifference* GetUsageDifferences(const CAnimDesc* );
	CAnimEncodedFrames m_Data; /* 32 280 */
	CUtlVector<CAnimMovement, CUtlMemory<CAnimMovement, int> > m_movementArray; /* 312 32 */
	CUtlVector<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> > m_eventArray; /* 344 32 */
	CUtlVector<CAnimActivity, CUtlMemory<CAnimActivity, int> > m_activityArray; /* 376 32 */
	CUtlVector<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> > m_hierarchyArray; /* 408 32 */
	float32 framestalltime; /* 440 4 */
	Vector m_vecRootMin; /* 444 12 */
	Vector m_vecRootMax; /* 456 12 */
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_vecBoneWorldMin; /* 472 32 */
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_vecBoneWorldMax; /* 504 32 */
	CAnimSequenceParams m_sequenceParams; /* 536 8 */
	/* ../public/animationsystem/animationresource.h:393 */
	void CAnimDesc(CAnimDesc* );
	/* ../public/animationsystem/animationresource.h:397 */
	void CAnimDesc(CAnimDesc* , const CAnimDesc& );
	CAnimDesc& operator=(CAnimDesc* , const CAnimDesc& );
	void ~CAnimDesc(CAnimDesc* );
};

// <008F6173> ../public/animationsystem/animationresource.h:352
// member functions: 21
// member variables: 14
// static member variable: 1
// struct size: 544
struct CAnimDesc {
	/* ../public/animationsystem/animationresource.h:355 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:354 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:354 */
	CAnimDesc* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:354 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:354 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:354 */
	void Schema_CompileTimeVerificationFunction(CAnimDesc* );
	/* ../public/animationsystem/animationresource.h:354 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:354 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:354 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimDesc* );
	/* ../public/animationsystem/animationresource.h:355 */
	CAnimDesc* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:355 */
	void KV3TransferSave(const CAnimDesc* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:355 */
	void KV3TransferLoad(CAnimDesc* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:355 */
	void KV3TransferSave_CAnimDesc(const CAnimDesc* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:355 */
	void KV3TransferLoad_CAnimDesc(CAnimDesc* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	/* ../public/animationsystem/animationresource.h:358 */
	const char* GetName(const CAnimDesc* );
	CAnimDesc_Flag m_flags; /* 16 7 */
	float32 fps; /* 24 4 */
	/* ../public/animationsystem/animationresource.h:364 */
	int NumFrames(const CAnimDesc* );
	/* ../public/animationsystem/animationresource.h:365 */
	int MaxFrame(const CAnimDesc* );
	/* ../public/animationsystem/animationresource.h:366 */
	const CAnimEncodeDifference* GetUsageDifferences(const CAnimDesc* );
	CAnimEncodedFrames m_Data; /* 32 280 */
	CUtlVector<CAnimMovement, CUtlMemory<CAnimMovement, int> > m_movementArray; /* 312 32 */
	CUtlVector<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> > m_eventArray; /* 344 32 */
	CUtlVector<CAnimActivity, CUtlMemory<CAnimActivity, int> > m_activityArray; /* 376 32 */
	CUtlVector<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> > m_hierarchyArray; /* 408 32 */
	float32 framestalltime; /* 440 4 */
	Vector m_vecRootMin; /* 444 12 */
	Vector m_vecRootMax; /* 456 12 */
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_vecBoneWorldMin; /* 472 32 */
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_vecBoneWorldMax; /* 504 32 */
	CAnimSequenceParams m_sequenceParams; /* 536 8 */
	/* ../public/animationsystem/animationresource.h:393 */
	void CAnimDesc(CAnimDesc* );
	/* ../public/animationsystem/animationresource.h:397 */
	void CAnimDesc(CAnimDesc* , const CAnimDesc& );
	void ~CAnimDesc(CAnimDesc* );
	CAnimDesc& operator=(CAnimDesc* , const CAnimDesc& );
};

// <00B3F3D3> ../public/animationsystem/animationresource.h:352
// member functions: 20
// member variables: 14
// static member variable: 1
// struct size: 544
struct CAnimDesc {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:354 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:354 */
	CAnimDesc* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:354 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:354 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:354 */
	void Schema_CompileTimeVerificationFunction(CAnimDesc* );
	/* ../public/animationsystem/animationresource.h:354 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:354 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:354 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimDesc* );
	/* ../public/animationsystem/animationresource.h:355 */
	CAnimDesc* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:355 */
	void KV3TransferSave(const CAnimDesc* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:355 */
	void KV3TransferLoad(CAnimDesc* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:355 */
	void KV3TransferSave_CAnimDesc(const CAnimDesc* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:355 */
	void KV3TransferLoad_CAnimDesc(CAnimDesc* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	/* ../public/animationsystem/animationresource.h:358 */
	const char* GetName(const CAnimDesc* );
	CAnimDesc_Flag m_flags; /* 16 7 */
	float32 fps; /* 24 4 */
	/* ../public/animationsystem/animationresource.h:364 */
	int NumFrames(const CAnimDesc* );
	/* ../public/animationsystem/animationresource.h:365 */
	int MaxFrame(const CAnimDesc* );
	/* ../public/animationsystem/animationresource.h:366 */
	const CAnimEncodeDifference* GetUsageDifferences(const CAnimDesc* );
	CAnimEncodedFrames m_Data; /* 32 280 */
	CUtlVector<CAnimMovement, CUtlMemory<CAnimMovement, int> > m_movementArray; /* 312 32 */
	CUtlVector<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> > m_eventArray; /* 344 32 */
	CUtlVector<CAnimActivity, CUtlMemory<CAnimActivity, int> > m_activityArray; /* 376 32 */
	CUtlVector<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> > m_hierarchyArray; /* 408 32 */
	float32 framestalltime; /* 440 4 */
	Vector m_vecRootMin; /* 444 12 */
	Vector m_vecRootMax; /* 456 12 */
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_vecBoneWorldMin; /* 472 32 */
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_vecBoneWorldMax; /* 504 32 */
	CAnimSequenceParams m_sequenceParams; /* 536 8 */
	/* ../public/animationsystem/animationresource.h:393 */
	void CAnimDesc(CAnimDesc* );
	/* ../public/animationsystem/animationresource.h:397 */
	void CAnimDesc(CAnimDesc* , const CAnimDesc& );
	void ~CAnimDesc(CAnimDesc* );
};

// <00A497FC> ../public/animationsystem/animationresource.h:354
inline void CAnimDesc::Schema_DynamicBinding()
{
} /* size: 0 */

// <04AE3392> ../public/animationsystem/animationresource.h:358
inline void CAnimDesc::GetName()
{
} /* size: 0 */

// <0325A976> ../public/animationsystem/animationresource.h:364
inline void CAnimDesc::NumFrames()
{
} /* size: 0 */

// <025DE17D> ../public/animationsystem/animationresource.h:365
inline void CAnimDesc::MaxFrame()
{
} /* size: 0 */

// <00371F97> ../public/animationsystem/animationresource.h:366
inline void CAnimDesc::GetUsageDifferences()
{
} /* size: 0 */

// <00C344F9> ../public/animationsystem/animationresource.h:393
void CAnimDesc::CAnimDesc()
{
} /* size: 0 */

// <00C344E0> ../public/animationsystem/animationresource.h:393
inline void CAnimDesc::CAnimDesc()
{
} /* size: 0 */

// <00A0B233> ../public/animationsystem/animationresource.h:393
// function calls: 78
void CAnimDesc::CAnimDesc()
{
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 393
	CAnimDesc_Flag::CAnimDesc_Flag(); // 393
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 290
	CUtlMemory<CAnimFrameBlockAnim, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAnimFrameBlockAnim, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::CUtlVector(); // 290
	CUtlMemory<CAnimBoneDifference, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAnimBoneDifference, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >::CUtlVector(); // 89
	CUtlMemory<CAnimMorphDifference, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAnimMorphDifference, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >::CUtlVector(); // 89
	CUtlMemory<CAnimUserDifference, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAnimUserDifference, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >::CUtlVector(); // 89
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 89
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 89
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 89
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 89
	CAnimEncodeDifference::CAnimEncodeDifference(); // 290
	CAnimEncodedFrames::CAnimEncodedFrames(); // 393
	CUtlMemory<CAnimMovement, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAnimMovement, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimMovement, CUtlMemory<CAnimMovement, int> >::CUtlVector(); // 393
	CUtlMemory<CAnimAnimEvent, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAnimAnimEvent, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::CUtlVector(); // 393
	CUtlMemory<CAnimActivity, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAnimActivity, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimActivity, CUtlMemory<CAnimActivity, int> >::CUtlVector(); // 393
	CUtlMemory<CAnimLocalHierarchy, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAnimLocalHierarchy, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::CUtlVector(); // 393
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 393
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 393
	CAnimSequenceParams::CAnimSequenceParams(); // 393
} /* size: 721, inline expansions: 78 (2196 bytes) */

// <00C24EF8> ../public/animationsystem/animationresource.h:402
void CAnimActivity::~CAnimActivity()
{
} /* size: 0 */

// <00C24EDB> ../public/animationsystem/animationresource.h:402
inline void CAnimActivity::~CAnimActivity()
{
} /* size: 0 */

// <00A001A0> ../public/animationsystem/animationresource.h:402
inline void CAnimActivity::operator=(const CAnimActivity &)
{
} /* size: 0 */

// <00A00189> ../public/animationsystem/animationresource.h:402
void CAnimActivity::CAnimActivity()
{
} /* size: 0 */

// <00A0016C> ../public/animationsystem/animationresource.h:402
inline void CAnimActivity::CAnimActivity()
{
} /* size: 0 */

// <04A42968> ../public/animationsystem/animationresource.h:402
// member functions: 14
// member variables: 4
// static member variable: 1
// struct size: 32
struct CAnimActivity {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:404 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:404 */
	CAnimActivity* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:404 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:404 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:404 */
	void Schema_CompileTimeVerificationFunction(CAnimActivity* );
	/* ../public/animationsystem/animationresource.h:404 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:404 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:404 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimActivity* );
	/* ../public/animationsystem/animationresource.h:405 */
	CAnimActivity* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:405 */
	void KV3TransferSave(const CAnimActivity* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:405 */
	void KV3TransferLoad(CAnimActivity* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:405 */
	void KV3TransferSave_CAnimActivity(const CAnimActivity* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:405 */
	void KV3TransferLoad_CAnimActivity(CAnimActivity* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	/* ../public/animationsystem/animationresource.h:408 */
	const char* GetName(const CAnimActivity* );
	int32 m_nActivity; /* 16 4 */
	int32 m_nFlags; /* 20 4 */
	int32 m_nWeight; /* 24 4 */
};

// <0020791D> ../public/animationsystem/animationresource.h:402
// member functions: 17
// member variables: 4
// static member variable: 1
// struct size: 32
struct CAnimActivity {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:404 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:404 */
	CAnimActivity* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:404 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:404 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:404 */
	void Schema_CompileTimeVerificationFunction(CAnimActivity* );
	/* ../public/animationsystem/animationresource.h:404 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:404 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:404 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimActivity* );
	/* ../public/animationsystem/animationresource.h:405 */
	CAnimActivity* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:405 */
	void KV3TransferSave(const CAnimActivity* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:405 */
	void KV3TransferLoad(CAnimActivity* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:405 */
	void KV3TransferSave_CAnimActivity(const CAnimActivity* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:405 */
	void KV3TransferLoad_CAnimActivity(CAnimActivity* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	/* ../public/animationsystem/animationresource.h:408 */
	const char* GetName(const CAnimActivity* );
	int32 m_nActivity; /* 16 4 */
	int32 m_nFlags; /* 20 4 */
	int32 m_nWeight; /* 24 4 */
	CAnimActivity& operator=(CAnimActivity* , const CAnimActivity& );
	void ~CAnimActivity(CAnimActivity* );
	void CAnimActivity(CAnimActivity* );
};

// <008F9A60> ../public/animationsystem/animationresource.h:402
// member functions: 17
// member variables: 4
// static member variable: 1
// struct size: 32
struct CAnimActivity {
	/* ../public/animationsystem/animationresource.h:405 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:404 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:404 */
	CAnimActivity* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:404 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:404 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:404 */
	void Schema_CompileTimeVerificationFunction(CAnimActivity* );
	/* ../public/animationsystem/animationresource.h:404 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:404 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:404 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimActivity* );
	/* ../public/animationsystem/animationresource.h:405 */
	CAnimActivity* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:405 */
	void KV3TransferSave(const CAnimActivity* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:405 */
	void KV3TransferLoad(CAnimActivity* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:405 */
	void KV3TransferSave_CAnimActivity(const CAnimActivity* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:405 */
	void KV3TransferLoad_CAnimActivity(CAnimActivity* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	/* ../public/animationsystem/animationresource.h:408 */
	const char* GetName(const CAnimActivity* );
	int32 m_nActivity; /* 16 4 */
	int32 m_nFlags; /* 20 4 */
	int32 m_nWeight; /* 24 4 */
	void ~CAnimActivity(CAnimActivity* );
	void CAnimActivity(CAnimActivity* );
	CAnimActivity& operator=(CAnimActivity* , const CAnimActivity& );
};

// <00B42C85> ../public/animationsystem/animationresource.h:402
// member functions: 15
// member variables: 4
// static member variable: 1
// struct size: 32
struct CAnimActivity {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:404 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:404 */
	CAnimActivity* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:404 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:404 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:404 */
	void Schema_CompileTimeVerificationFunction(CAnimActivity* );
	/* ../public/animationsystem/animationresource.h:404 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:404 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:404 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimActivity* );
	/* ../public/animationsystem/animationresource.h:405 */
	CAnimActivity* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:405 */
	void KV3TransferSave(const CAnimActivity* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:405 */
	void KV3TransferLoad(CAnimActivity* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:405 */
	void KV3TransferSave_CAnimActivity(const CAnimActivity* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:405 */
	void KV3TransferLoad_CAnimActivity(CAnimActivity* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	/* ../public/animationsystem/animationresource.h:408 */
	const char* GetName(const CAnimActivity* );
	int32 m_nActivity; /* 16 4 */
	int32 m_nFlags; /* 20 4 */
	int32 m_nWeight; /* 24 4 */
	void ~CAnimActivity(CAnimActivity* );
};

// <00A497D7> ../public/animationsystem/animationresource.h:404
inline void CAnimActivity::Schema_DynamicBinding()
{
} /* size: 0 */

// <00D20789> ../public/animationsystem/animationresource.h:408
inline void CAnimActivity::GetName()
{
} /* size: 0 */

// <00C1E097> ../public/animationsystem/animationresource.h:420
// variables: 3
// function calls: 49
void CAnimData::~CAnimData()
{
	{
		int i; // 1721
		CUtlMemory<CAnimFrameSegment, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimFrameSegment, CUtlMemory<CAnimFrameSegment, int> >::Element(
			int i);  // 1723
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 510
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 19
		CUtlBinaryBlock::~CUtlBinaryBlock(); // 251
		CAnimFrameSegment::~CAnimFrameSegment(); // 1526
		Destruct<CAnimFrameSegment>(CAnimFrameSegment* pMemory); // 1723
	}
	CUtlVectorBase<CAnimFrameSegment, CUtlMemory<CAnimFrameSegment, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimFrameSegment, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimFrameSegment, int>::Purge(); // 903
	CUtlMemory<CAnimFrameSegment, int>::Purge(); // 1799
	CUtlVectorBase<CAnimFrameSegment, CUtlMemory<CAnimFrameSegment, int> >::Purge(); // 560
	ValidateAlignment<CAnimFrameSegment>(void); // 508
	CUtlMemory<CAnimFrameSegment, int>::Purge(); // 510
	CUtlMemory<CAnimFrameSegment, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimFrameSegment, CUtlMemory<CAnimFrameSegment, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimFrameSegment, CUtlMemory<CAnimFrameSegment, int> >::~CUtlVector(); // 420
	{
		int i; // 1721
		CUtlMemory<CAnimDecoder, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimDecoder, CUtlMemory<CAnimDecoder, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 236
		CAnimDecoder::~CAnimDecoder(); // 1526
		Destruct<CAnimDecoder>(CAnimDecoder* pMemory); // 1723
	}
	CUtlVectorBase<CAnimDecoder, CUtlMemory<CAnimDecoder, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimDecoder, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimDecoder, int>::Purge(); // 903
	CUtlMemory<CAnimDecoder, int>::Purge(); // 1799
	CUtlVectorBase<CAnimDecoder, CUtlMemory<CAnimDecoder, int> >::Purge(); // 560
	ValidateAlignment<CAnimDecoder>(void); // 508
	CUtlMemory<CAnimDecoder, int>::Purge(); // 510
	CUtlMemory<CAnimDecoder, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimDecoder, CUtlMemory<CAnimDecoder, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimDecoder, CUtlMemory<CAnimDecoder, int> >::~CUtlVector(); // 420
	{
		int i; // 1721
		CUtlMemory<CAnimDesc, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::Element(
			int i);  // 1723
		Destruct<CAnimDesc>(CAnimDesc* pMemory); // 1723
	}
	CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimDesc, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimDesc, int>::Purge(); // 903
	CUtlMemory<CAnimDesc, int>::Purge(); // 1799
	CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::Purge(); // 560
	ValidateAlignment<CAnimDesc>(void); // 508
	CUtlMemory<CAnimDesc, int>::Purge(); // 510
	CUtlMemory<CAnimDesc, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimDesc, CUtlMemory<CAnimDesc, int> >::~CUtlVector(); // 420
	CBufferString::~CBufferString(); // 420
} /* size: 353, inline expansions: 31 (1263 bytes) */

// <00C1E032> ../public/animationsystem/animationresource.h:420
void CAnimData::~CAnimData()
{
} /* size: 36 */

// <00C1E015> ../public/animationsystem/animationresource.h:420
inline void CAnimData::~CAnimData()
{
} /* size: 0 */

// <009FED3C> ../public/animationsystem/animationresource.h:420
inline void CAnimData::operator=(const CAnimData &)
{
} /* size: 0 */

// <008E22DA> ../public/animationsystem/animationresource.h:420
// member functions: 18
// member variables: 6
// static member variable: 1
// vtable entry: 1
// struct size: 136
struct CAnimData : public CRefCounted<CRefCountServiceBase<true, CRefMT> > {
public:
	/* class CRefCounted<CRefCountServiceBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	CAnimData& operator=(CAnimData* , const CAnimData& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:422 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:422 */
	CAnimData* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animationresource_h_schema.gen_cpp:1838 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animationresource_h_schema.gen_cpp:1867 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animationresource_h_schema.gen_cpp:1801 */
	void Schema_CompileTimeVerificationFunction(CAnimData* );
	/* ../public/animationsystem/animationresource.h:422 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:422 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:422 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CAnimData* );
	/* ../public/animationsystem/animationresource.h:423 */
	CAnimData* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animationresource_h_schema.gen_cpp:1875 */
	void KV3TransferSave(const CAnimData* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animationresource_h_schema.gen_cpp:1889 */
	void KV3TransferLoad(CAnimData* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animationresource_h_schema.gen_cpp:1880 */
	void KV3TransferSave_CAnimData(const CAnimData* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animationresource_h_schema.gen_cpp:1894 */
	void KV3TransferLoad_CAnimData(CAnimData* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:425 */
	void CAnimData(CAnimData* );
	AnimString_t m_name; /* 16 16 */
	/* ../public/animationsystem/animationresource.h:428 */
	const char* GetName(const CAnimData* );
	CUtlVector<CAnimDesc, CUtlMemory<CAnimDesc, int> > m_animArray; /* 32 32 */
	CUtlVector<CAnimDecoder, CUtlMemory<CAnimDecoder, int> > m_decoderArray; /* 64 32 */
	int32 m_nMaxUniqueFrameIndex; /* 96 4 */
	CUtlVector<CAnimFrameSegment, CUtlMemory<CAnimFrameSegment, int> > m_segmentArray; /* 104 32 */
	/* ../public/animationsystem/animationresource.h:441 */
	void CAnimData(CAnimData* , const CAnimData& );
	virtual void ~CAnimData(CAnimData* );
};

// <00AF1EFB> ../public/animationsystem/animationresource.h:420
// member functions: 17
// member variables: 6
// static member variable: 1
// vtable entry: 1
// struct size: 136
struct CAnimData : public CRefCounted<CRefCountServiceBase<true, CRefMT> > {
	/* ../public/animationsystem/animationresource.h:423 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
public:
	/* class CRefCounted<CRefCountServiceBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationresource.h:422 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationresource.h:422 */
	CAnimData* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationresource.h:422 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationresource.h:422 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationresource.h:422 */
	void Schema_CompileTimeVerificationFunction(CAnimData* );
	/* ../public/animationsystem/animationresource.h:422 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationresource.h:422 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationresource.h:422 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CAnimData* );
	/* ../public/animationsystem/animationresource.h:423 */
	CAnimData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationresource.h:423 */
	void KV3TransferSave(const CAnimData* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:423 */
	void KV3TransferLoad(CAnimData* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:423 */
	void KV3TransferSave_CAnimData(const CAnimData* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationresource.h:423 */
	void KV3TransferLoad_CAnimData(CAnimData* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationresource.h:425 */
	void CAnimData(CAnimData* );
	AnimString_t m_name; /* 16 16 */
	/* ../public/animationsystem/animationresource.h:428 */
	const char* GetName(const CAnimData* );
	CUtlVector<CAnimDesc, CUtlMemory<CAnimDesc, int> > m_animArray; /* 32 32 */
	CUtlVector<CAnimDecoder, CUtlMemory<CAnimDecoder, int> > m_decoderArray; /* 64 32 */
	int32 m_nMaxUniqueFrameIndex; /* 96 4 */
	CUtlVector<CAnimFrameSegment, CUtlMemory<CAnimFrameSegment, int> > m_segmentArray; /* 104 32 */
	/* ../public/animationsystem/animationresource.h:441 */
	void CAnimData(CAnimData* , const CAnimData& );
	virtual void ~CAnimData(CAnimData* );
};

// <00D20782> ../public/animationsystem/animationresource.h:422
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <00D2077B> ../public/animationsystem/animationresource.h:422
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <00D2070E> ../public/animationsystem/animationresource.h:422
// function call: 1
void CAnimData::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 422
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00A4C54A> ../public/animationsystem/animationresource.h:422
// function calls: 3
void CAnimData::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 1867
	Schema_VerifyBindingIsRegistered(void); // 422
	GetPrimaryBinding(void); // 422
} /* size: 75, inline expansions: 3 (78 bytes) */

// <00A497B2> ../public/animationsystem/animationresource.h:422
inline void CAnimData::Schema_DynamicBinding()
{
} /* size: 0 */

// <00D206F6> ../public/animationsystem/animationresource.h:423
inline void KV3TransferAllocateClassInstance(const char* pDerivedClassName)
{
} /* size: 0 */

// <00CAB529> ../public/animationsystem/animationresource.h:425
void CAnimData::CAnimData()
{
} /* size: 0 */

// <00CAB510> ../public/animationsystem/animationresource.h:425
inline void CAnimData::CAnimData()
{
} /* size: 0 */

// <025DE164> ../public/animationsystem/animationresource.h:428
inline void CAnimData::GetName()
{
} /* size: 0 */

// <03E63BC9> ../public/animationsystem/animationresource.h:447
// member functions: 20
// member variables: 4
// class size: 32
class CAnimationResource {
	/* ../public/animationsystem/animationresource.h:450 */
	void CAnimationResource(CAnimationResource* );
	/* ../public/animationsystem/animationresource.h:453 */
	void InitFromV0Data(CAnimationResource* , CAnimData* , const char* );
	/* ../public/animationsystem/animationresource.h:454 */
	void Finalize(CAnimationResource* );
	/* ../public/animationsystem/animationresource.h:456 */
	void ~CAnimationResource(CAnimationResource* );
	/* ../public/animationsystem/animationresource.h:462 */
	const CAnimData* GetData(const CAnimationResource* );
	/* ../public/animationsystem/animationresource.h:468 */
	bool IsInited(const CAnimationResource* );
	/* ../public/animationsystem/animationresource.h:473 */
	const ICompressorService* GetDecompressor(const CAnimationResource* , int);
	/* ../public/animationsystem/animationresource.h:478 */
	void InitDecompressors(CAnimationResource* );
	/* ../public/animationsystem/animationresource.h:479 */
	uint32 GetCacheKey(const CAnimationResource* , int);
	/* ../public/animationsystem/animationresource.h:481 */
	const char* GetName(const CAnimationResource* );
private:
	const class ICompressorService * * m_pMasterDecoder; /* 0 8 */
	CSmartPtr<CAnimData, CRefCountAccessor> m_pAnimationResourceData; /* 8 8 */
	CUtlString m_Name; /* 16 8 */
	uint32 m_nCacheKeyBase; /* 24 4 */
	void CAnimationResource(class CAnimationResource *); /* linkage=_ZN18CAnimationResourceC4Ev */
	void InitFromV0Data(class CAnimationResource *, class CAnimData *, const char  *); /* linkage=_ZN18CAnimationResource14InitFromV0DataEP9CAnimDataPKc */
	/* <31daa6f> vanimlib/animationresource.cpp:27 */
	void Finalize(class CAnimationResource *); /* linkage=_ZN18CAnimationResource8FinalizeEv */
	void ~CAnimationResource(class CAnimationResource *); /* linkage=_ZN18CAnimationResourceD4Ev */
	const class CAnimData  * GetData(const class CAnimationResource  *); /* linkage=_ZNK18CAnimationResource7GetDataEv */
	bool IsInited(const class CAnimationResource  *); /* linkage=_ZNK18CAnimationResource8IsInitedEv */
	const class ICompressorService  * GetDecompressor(const class CAnimationResource  *, int); /* linkage=_ZNK18CAnimationResource15GetDecompressorEi */
	/* <25e0d5a> bonesetup/bone_decode.cpp:273 */
	void InitDecompressors(class CAnimationResource *); /* linkage=_ZN18CAnimationResource17InitDecompressorsEv */
	uint32 GetCacheKey(const class CAnimationResource  *, int); /* linkage=_ZNK18CAnimationResource11GetCacheKeyEi */
	const char  * GetName(const class CAnimationResource  *); /* linkage=_ZNK18CAnimationResource7GetNameEv */
};

// <00C14658> ../public/animationsystem/animationresource.h:450
void CAnimationResource::CAnimationResource()
{
} /* size: 0 */

// <055075AC> ../public/animationsystem/animationresource.h:456
void CAnimationResource::~CAnimationResource()
{
} /* size: 0 */

// <05507593> ../public/animationsystem/animationresource.h:456
inline void CAnimationResource::~CAnimationResource()
{
} /* size: 0 */

// <04AE331F> ../public/animationsystem/animationresource.h:462
// variables: 2
inline void CAnimationResource::GetData()
{
	const char   __FUNCTION__; // 35574
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 464
	}
} /* size: 0, variables: 1 */

// <025DE0F2> ../public/animationsystem/animationresource.h:462
// variables: 2
inline void CAnimationResource::GetData()
{
	const char   __FUNCTION__; // 20650
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 464
	}
} /* size: 0, variables: 1 */

// <01E2818D> ../public/animationsystem/animationresource.h:462
// variables: 2
inline void CAnimationResource::GetData()
{
	const char   __FUNCTION__; // 43097
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 464
	}
} /* size: 0, variables: 1 */

// <01CB917F> ../public/animationsystem/animationresource.h:462
// variables: 2
inline void CAnimationResource::GetData()
{
	const char   __FUNCTION__; // 21275
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 464
	}
} /* size: 0, variables: 1 */

// <00D20683> ../public/animationsystem/animationresource.h:462
// variables: 2
inline void CAnimationResource::GetData()
{
	const char   __FUNCTION__; // 21844
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 464
	}
} /* size: 0, variables: 1 */

// <00A5E162> ../public/animationsystem/animationresource.h:462
// variables: 2
inline void CAnimationResource::GetData()
{
	const char   __FUNCTION__; // 17822
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 464
	}
} /* size: 0, variables: 1 */

// <025DE0D9> ../public/animationsystem/animationresource.h:468
inline void CAnimationResource::IsInited()
{
} /* size: 0 */

// <025DE0B3> ../public/animationsystem/animationresource.h:473
inline void CAnimationResource::GetDecompressor(int nLocalChannel)
{
} /* size: 0 */

// <00D2066A> ../public/animationsystem/animationresource.h:481
inline void CAnimationResource::GetName()
{
} /* size: 0 */

