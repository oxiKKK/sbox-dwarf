
//
// public/animationsystem/animationgroupresource.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 117
//	class: 1
//	structs: 34
//

// <0550426F> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:46
inline void CAnimBone::operator=(const CAnimBone &)
{
} /* size: 0 */

// <05504258> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:46
void CAnimBone::CAnimBone()
{
} /* size: 0 */

// <0550423C> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:46
inline void CAnimBone::CAnimBone()
{
} /* size: 0 */

// <05504225> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:46
void CAnimBone::~CAnimBone()
{
} /* size: 0 */

// <05504209> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:46
inline void CAnimBone::~CAnimBone()
{
} /* size: 0 */

// <03E65944> ../public/animationsystem/animationgroupresource.h:46
// member functions: 15
// member variables: 6
// static member variable: 1
// struct size: 72
struct CAnimBone {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationgroupresource.h:48 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:48 */
	CAnimBone* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationgroupresource.h:48 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationgroupresource.h:48 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationgroupresource.h:48 */
	void Schema_CompileTimeVerificationFunction(CAnimBone* );
	/* ../public/animationsystem/animationgroupresource.h:48 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:48 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationgroupresource.h:48 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimBone* );
	/* ../public/animationsystem/animationgroupresource.h:49 */
	CAnimBone* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationgroupresource.h:49 */
	void KV3TransferSave(const CAnimBone* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:49 */
	void KV3TransferLoad(CAnimBone* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationgroupresource.h:49 */
	void KV3TransferSave_CAnimBone(const CAnimBone* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:49 */
	void KV3TransferLoad_CAnimBone(CAnimBone* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	/* ../public/animationsystem/animationgroupresource.h:52 */
	const char* GetName(const CAnimBone* );
	int32 m_parent; /* 16 4 */
	Vector m_pos; /* 20 12 */
	Quaternion m_quat; /* 32 16 */
	Quaternion m_qAlignment; /* 48 16 */
	int32 m_flags; /* 64 4 */
	void ~CAnimBone(CAnimBone* );
};

// <054B579A> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:46
// member functions: 17
// member variables: 6
// static member variable: 1
// struct size: 72
struct CAnimBone {
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:49 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:48 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:48 */
	CAnimBone* Schema_MarkHelperFn(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:48 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:48 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:48 */
	void Schema_CompileTimeVerificationFunction(CAnimBone* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:48 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:48 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:48 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimBone* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:49 */
	CAnimBone* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:49 */
	void KV3TransferSave(const CAnimBone* , CKV3TransferSaveContext* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:49 */
	void KV3TransferLoad(CAnimBone* , CKV3TransferLoadContext* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:49 */
	void KV3TransferSave_CAnimBone(const CAnimBone* , CKV3TransferSaveContext* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:49 */
	void KV3TransferLoad_CAnimBone(CAnimBone* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:52 */
	const char* GetName(const CAnimBone* );
	int32 m_parent; /* 16 4 */
	Vector m_pos; /* 20 12 */
	Quaternion m_quat; /* 32 16 */
	Quaternion m_qAlignment; /* 48 16 */
	int32 m_flags; /* 64 4 */
	void ~CAnimBone(CAnimBone* );
	void CAnimBone(CAnimBone* );
	CAnimBone& operator=(CAnimBone* , const CAnimBone& );
};

// <002229D1> ../public/animationsystem/animationgroupresource.h:46
// member functions: 17
// member variables: 6
// static member variable: 1
// struct size: 72
struct CAnimBone {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationgroupresource.h:48 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:48 */
	CAnimBone* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationgroupresource.h:48 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationgroupresource.h:48 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationgroupresource.h:48 */
	void Schema_CompileTimeVerificationFunction(CAnimBone* );
	/* ../public/animationsystem/animationgroupresource.h:48 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:48 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationgroupresource.h:48 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimBone* );
	/* ../public/animationsystem/animationgroupresource.h:49 */
	CAnimBone* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationgroupresource.h:49 */
	void KV3TransferSave(const CAnimBone* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:49 */
	void KV3TransferLoad(CAnimBone* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationgroupresource.h:49 */
	void KV3TransferSave_CAnimBone(const CAnimBone* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:49 */
	void KV3TransferLoad_CAnimBone(CAnimBone* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	/* ../public/animationsystem/animationgroupresource.h:52 */
	const char* GetName(const CAnimBone* );
	int32 m_parent; /* 16 4 */
	Vector m_pos; /* 20 12 */
	Quaternion m_quat; /* 32 16 */
	Quaternion m_qAlignment; /* 48 16 */
	int32 m_flags; /* 64 4 */
	CAnimBone& operator=(CAnimBone* , const CAnimBone& );
	void CAnimBone(CAnimBone* );
	void ~CAnimBone(CAnimBone* );
};

// <00919861> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:46
// member functions: 17
// member variables: 6
// static member variable: 1
// struct size: 72
struct CAnimBone {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:49 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:48 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:48 */
	CAnimBone* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:48 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:48 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:48 */
	void Schema_CompileTimeVerificationFunction(CAnimBone* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:48 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:48 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:48 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimBone* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:49 */
	CAnimBone* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:49 */
	void KV3TransferSave(const CAnimBone* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:49 */
	void KV3TransferLoad(CAnimBone* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:49 */
	void KV3TransferSave_CAnimBone(const CAnimBone* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:49 */
	void KV3TransferLoad_CAnimBone(CAnimBone* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:52 */
	const char* GetName(const CAnimBone* );
	int32 m_parent; /* 16 4 */
	Vector m_pos; /* 20 12 */
	Quaternion m_quat; /* 32 16 */
	Quaternion m_qAlignment; /* 48 16 */
	int32 m_flags; /* 64 4 */
	void ~CAnimBone(CAnimBone* );
	void CAnimBone(CAnimBone* );
	CAnimBone& operator=(CAnimBone* , const CAnimBone& );
};

// <00B5DD52> ../public/animationsystem/animationgroupresource.h:46
// member functions: 16
// member variables: 6
// static member variable: 1
// struct size: 72
struct CAnimBone {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationgroupresource.h:48 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:48 */
	CAnimBone* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationgroupresource.h:48 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationgroupresource.h:48 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationgroupresource.h:48 */
	void Schema_CompileTimeVerificationFunction(CAnimBone* );
	/* ../public/animationsystem/animationgroupresource.h:48 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:48 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationgroupresource.h:48 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimBone* );
	/* ../public/animationsystem/animationgroupresource.h:49 */
	CAnimBone* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationgroupresource.h:49 */
	void KV3TransferSave(const CAnimBone* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:49 */
	void KV3TransferLoad(CAnimBone* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationgroupresource.h:49 */
	void KV3TransferSave_CAnimBone(const CAnimBone* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:49 */
	void KV3TransferLoad_CAnimBone(CAnimBone* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	/* ../public/animationsystem/animationgroupresource.h:52 */
	const char* GetName(const CAnimBone* );
	int32 m_parent; /* 16 4 */
	Vector m_pos; /* 20 12 */
	Quaternion m_quat; /* 32 16 */
	Quaternion m_qAlignment; /* 48 16 */
	int32 m_flags; /* 64 4 */
	void CAnimBone(CAnimBone* );
	void ~CAnimBone(CAnimBone* );
};

// <055074E9> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:48
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <055074E3> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:48
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <055074CA> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:48
inline void CAnimBone::Schema_DynamicBinding()
{
} /* size: 0 */

// <04BDC63A> ../public/animationsystem/animationgroupresource.h:52
inline void CAnimBone::GetName()
{
} /* size: 0 */

// <05501373> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:67
inline void CAnimUser::operator=(const CAnimUser &)
{
} /* size: 0 */

// <0550135C> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:67
void CAnimUser::CAnimUser()
{
} /* size: 0 */

// <05501340> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:67
inline void CAnimUser::CAnimUser()
{
} /* size: 0 */

// <05501329> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:67
void CAnimUser::~CAnimUser()
{
} /* size: 0 */

// <0550130D> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:67
inline void CAnimUser::~CAnimUser()
{
} /* size: 0 */

// <03E65B68> ../public/animationsystem/animationgroupresource.h:67
// member functions: 15
// member variables: 2
// static member variable: 1
// struct size: 24
struct CAnimUser {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationgroupresource.h:69 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:69 */
	CAnimUser* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationgroupresource.h:69 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationgroupresource.h:69 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationgroupresource.h:69 */
	void Schema_CompileTimeVerificationFunction(CAnimUser* );
	/* ../public/animationsystem/animationgroupresource.h:69 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:69 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationgroupresource.h:69 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimUser* );
	/* ../public/animationsystem/animationgroupresource.h:70 */
	CAnimUser* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationgroupresource.h:70 */
	void KV3TransferSave(const CAnimUser* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:70 */
	void KV3TransferLoad(CAnimUser* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationgroupresource.h:70 */
	void KV3TransferSave_CAnimUser(const CAnimUser* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:70 */
	void KV3TransferLoad_CAnimUser(CAnimUser* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	/* ../public/animationsystem/animationgroupresource.h:73 */
	const char* GetName(const CAnimUser* );
	int32 m_nType; /* 16 4 */
	void ~CAnimUser(CAnimUser* );
};

// <054B5A19> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:67
// member functions: 17
// member variables: 2
// static member variable: 1
// struct size: 24
struct CAnimUser {
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:70 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:69 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:69 */
	CAnimUser* Schema_MarkHelperFn(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:69 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:69 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:69 */
	void Schema_CompileTimeVerificationFunction(CAnimUser* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:69 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:69 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:69 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimUser* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:70 */
	CAnimUser* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:70 */
	void KV3TransferSave(const CAnimUser* , CKV3TransferSaveContext* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:70 */
	void KV3TransferLoad(CAnimUser* , CKV3TransferLoadContext* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:70 */
	void KV3TransferSave_CAnimUser(const CAnimUser* , CKV3TransferSaveContext* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:70 */
	void KV3TransferLoad_CAnimUser(CAnimUser* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:73 */
	const char* GetName(const CAnimUser* );
	int32 m_nType; /* 16 4 */
	void ~CAnimUser(CAnimUser* );
	void CAnimUser(CAnimUser* );
	CAnimUser& operator=(CAnimUser* , const CAnimUser& );
};

// <00222C34> ../public/animationsystem/animationgroupresource.h:67
// member functions: 17
// member variables: 2
// static member variable: 1
// struct size: 24
struct CAnimUser {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationgroupresource.h:69 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:69 */
	CAnimUser* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationgroupresource.h:69 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationgroupresource.h:69 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationgroupresource.h:69 */
	void Schema_CompileTimeVerificationFunction(CAnimUser* );
	/* ../public/animationsystem/animationgroupresource.h:69 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:69 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationgroupresource.h:69 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimUser* );
	/* ../public/animationsystem/animationgroupresource.h:70 */
	CAnimUser* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationgroupresource.h:70 */
	void KV3TransferSave(const CAnimUser* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:70 */
	void KV3TransferLoad(CAnimUser* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationgroupresource.h:70 */
	void KV3TransferSave_CAnimUser(const CAnimUser* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:70 */
	void KV3TransferLoad_CAnimUser(CAnimUser* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	/* ../public/animationsystem/animationgroupresource.h:73 */
	const char* GetName(const CAnimUser* );
	int32 m_nType; /* 16 4 */
	CAnimUser& operator=(CAnimUser* , const CAnimUser& );
	void CAnimUser(CAnimUser* );
	void ~CAnimUser(CAnimUser* );
};

// <00919ADF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:67
// member functions: 17
// member variables: 2
// static member variable: 1
// struct size: 24
struct CAnimUser {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:70 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:69 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:69 */
	CAnimUser* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:69 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:69 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:69 */
	void Schema_CompileTimeVerificationFunction(CAnimUser* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:69 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:69 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:69 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimUser* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:70 */
	CAnimUser* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:70 */
	void KV3TransferSave(const CAnimUser* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:70 */
	void KV3TransferLoad(CAnimUser* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:70 */
	void KV3TransferSave_CAnimUser(const CAnimUser* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:70 */
	void KV3TransferLoad_CAnimUser(CAnimUser* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:73 */
	const char* GetName(const CAnimUser* );
	int32 m_nType; /* 16 4 */
	void ~CAnimUser(CAnimUser* );
	void CAnimUser(CAnimUser* );
	CAnimUser& operator=(CAnimUser* , const CAnimUser& );
};

// <055074A5> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:69
inline void CAnimUser::Schema_DynamicBinding()
{
} /* size: 0 */

// <0550F1EF> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:81
// function calls: 78
void CAnimDataChannelDesc::operator=(const CAnimDataChannelDesc &)
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
			const CBufferString& src);  // 81
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
			const CBufferString& src);  // 81
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
			const CBufferString& src);  // 81
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
			const CBufferString& src);  // 81
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 573
	CUtlMemory<CBufferString, int>::Base(); // 112
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Base(); // 102
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::begin(); // 574
	CUtlMemory<CBufferString, int>::Base(); // 113
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Base(); // 105
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 105
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::end(); // 574
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
			const CBufferString& src);  // 209
	UtlTraitsCopyRange<CBufferString>(const CBufferString* pFrom,
						const CBufferString* pFromEnd,
						CBufferString* pTo);  // 200
	UtlTraitsCopyRange<CBufferString>(const CBufferString* pFrom,
						const CBufferString* pFromEnd,
						CBufferString* pTo);  // 574
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::operator=(
			const CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >& other);  // 565
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::operator=(
			const CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >& other);  // 452
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::operator=(
			const CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >& src);  // 81
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
			const CUtlVector<int, CUtlMemory<int, int> >& src);  // 81
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 573
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 102
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::begin(); // 574
	CUtlMemory<unsigned int, int>::Base(); // 113
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 105
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 105
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<int>(const int* pFrom,
				const int* pFromEnd,
				int* pTo);  // 173
	UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
					const unsigned int* pFromEnd,
					unsigned int* pTo);  // 574
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
			const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 565
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
			const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 452
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
			const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 81
} /* size: 0, inline expansions: 78 (0 bytes) */

// <05500BD6> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:81
inline void CAnimDataChannelDesc::operator=(const CAnimDataChannelDesc &)
{
} /* size: 0 */

// <05500B8B> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:81
void CAnimDataChannelDesc::CAnimDataChannelDesc()
{
} /* size: 0 */

// <05500B6F> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:81
inline void CAnimDataChannelDesc::CAnimDataChannelDesc()
{
} /* size: 0 */

// <05500B58> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:81
void CAnimDataChannelDesc::~CAnimDataChannelDesc()
{
} /* size: 0 */

// <05500B3C> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:81
inline void CAnimDataChannelDesc::~CAnimDataChannelDesc()
{
} /* size: 0 */

// <00A42555> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:81
// variable: 1
// function calls: 38
void CAnimDataChannelDesc::~CAnimDataChannelDesc()
{
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 81
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 81
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 81
	CBufferString::~CBufferString(); // 81
	CBufferString::~CBufferString(); // 81
	CBufferString::~CBufferString(); // 81
	CBufferString::~CBufferString(); // 81
} /* size: 241, inline expansions: 34 (762 bytes) */

// <00358C90> ../public/animationsystem/animationgroupresource.h:81
// function calls: 78
void CAnimDataChannelDesc::operator=(const CAnimDataChannelDesc &)
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
			const CBufferString& src);  // 81
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
			const CBufferString& src);  // 81
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
			const CBufferString& src);  // 81
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
			const CBufferString& src);  // 81
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 573
	CUtlMemory<CBufferString, int>::Base(); // 112
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Base(); // 102
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::begin(); // 574
	CUtlMemory<CBufferString, int>::Base(); // 113
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Base(); // 105
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 105
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::end(); // 574
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
			const CBufferString& src);  // 209
	UtlTraitsCopyRange<CBufferString>(const CBufferString* pFrom,
						const CBufferString* pFromEnd,
						CBufferString* pTo);  // 200
	UtlTraitsCopyRange<CBufferString>(const CBufferString* pFrom,
						const CBufferString* pFromEnd,
						CBufferString* pTo);  // 574
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::operator=(
			const CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >& other);  // 565
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::operator=(
			const CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >& other);  // 452
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::operator=(
			const CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >& src);  // 81
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
			const CUtlVector<int, CUtlMemory<int, int> >& src);  // 81
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 573
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 102
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::begin(); // 574
	CUtlMemory<unsigned int, int>::Base(); // 113
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 105
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 105
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 173
	UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
					const unsigned int* pFromEnd,
					unsigned int* pTo);  // 574
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
			const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 565
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
			const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 452
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
			const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 81
} /* size: 798, inline expansions: 78 (2873 bytes) */

// <03E65D50> ../public/animationsystem/animationgroupresource.h:81
// member functions: 14
// member variables: 9
// static member variable: 1
// struct size: 168
struct CAnimDataChannelDesc {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationgroupresource.h:83 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:83 */
	CAnimDataChannelDesc* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationgroupresource.h:83 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationgroupresource.h:83 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationgroupresource.h:83 */
	void Schema_CompileTimeVerificationFunction(CAnimDataChannelDesc* );
	/* ../public/animationsystem/animationgroupresource.h:83 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:83 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationgroupresource.h:83 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimDataChannelDesc* );
	/* ../public/animationsystem/animationgroupresource.h:84 */
	CAnimDataChannelDesc* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationgroupresource.h:84 */
	void KV3TransferSave(const CAnimDataChannelDesc* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:84 */
	void KV3TransferLoad(CAnimDataChannelDesc* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationgroupresource.h:84 */
	void KV3TransferSave_CAnimDataChannelDesc(const CAnimDataChannelDesc* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:84 */
	void KV3TransferLoad_CAnimDataChannelDesc(CAnimDataChannelDesc* , CKV3TransferLoadContext* );
	AnimString_t m_szChannelClass; /* 0 16 */
	AnimString_t m_szVariableName; /* 16 16 */
	int32 m_nFlags; /* 32 4 */
	int32 m_nType; /* 36 4 */
	AnimString_t m_szGrouping; /* 40 16 */
	AnimString_t m_szDescription; /* 56 16 */
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> > m_szElementNameArray; /* 72 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_nElementIndexArray; /* 104 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_nElementMaskArray; /* 136 32 */
	void ~CAnimDataChannelDesc(CAnimDataChannelDesc* );
};

// <054B5C5C> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:81
// member functions: 16
// member variables: 9
// static member variable: 1
// struct size: 168
struct CAnimDataChannelDesc {
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:84 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:83 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:83 */
	CAnimDataChannelDesc* Schema_MarkHelperFn(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:83 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:83 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:83 */
	void Schema_CompileTimeVerificationFunction(CAnimDataChannelDesc* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:83 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:83 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:83 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimDataChannelDesc* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:84 */
	CAnimDataChannelDesc* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:84 */
	void KV3TransferSave(const CAnimDataChannelDesc* , CKV3TransferSaveContext* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:84 */
	void KV3TransferLoad(CAnimDataChannelDesc* , CKV3TransferLoadContext* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:84 */
	void KV3TransferSave_CAnimDataChannelDesc(const CAnimDataChannelDesc* , CKV3TransferSaveContext* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:84 */
	void KV3TransferLoad_CAnimDataChannelDesc(CAnimDataChannelDesc* , CKV3TransferLoadContext* );
	AnimString_t m_szChannelClass; /* 0 16 */
	AnimString_t m_szVariableName; /* 16 16 */
	int32 m_nFlags; /* 32 4 */
	int32 m_nType; /* 36 4 */
	AnimString_t m_szGrouping; /* 40 16 */
	AnimString_t m_szDescription; /* 56 16 */
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> > m_szElementNameArray; /* 72 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_nElementIndexArray; /* 104 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_nElementMaskArray; /* 136 32 */
	void ~CAnimDataChannelDesc(CAnimDataChannelDesc* );
	void CAnimDataChannelDesc(CAnimDataChannelDesc* );
	CAnimDataChannelDesc& operator=(CAnimDataChannelDesc* , const CAnimDataChannelDesc& );
};

// <00222E5B> ../public/animationsystem/animationgroupresource.h:81
// member functions: 16
// member variables: 9
// static member variable: 1
// struct size: 168
struct CAnimDataChannelDesc {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationgroupresource.h:83 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:83 */
	CAnimDataChannelDesc* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationgroupresource.h:83 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationgroupresource.h:83 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationgroupresource.h:83 */
	void Schema_CompileTimeVerificationFunction(CAnimDataChannelDesc* );
	/* ../public/animationsystem/animationgroupresource.h:83 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:83 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationgroupresource.h:83 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimDataChannelDesc* );
	/* ../public/animationsystem/animationgroupresource.h:84 */
	CAnimDataChannelDesc* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationgroupresource.h:84 */
	void KV3TransferSave(const CAnimDataChannelDesc* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:84 */
	void KV3TransferLoad(CAnimDataChannelDesc* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationgroupresource.h:84 */
	void KV3TransferSave_CAnimDataChannelDesc(const CAnimDataChannelDesc* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:84 */
	void KV3TransferLoad_CAnimDataChannelDesc(CAnimDataChannelDesc* , CKV3TransferLoadContext* );
	AnimString_t m_szChannelClass; /* 0 16 */
	AnimString_t m_szVariableName; /* 16 16 */
	int32 m_nFlags; /* 32 4 */
	int32 m_nType; /* 36 4 */
	AnimString_t m_szGrouping; /* 40 16 */
	AnimString_t m_szDescription; /* 56 16 */
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> > m_szElementNameArray; /* 72 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_nElementIndexArray; /* 104 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_nElementMaskArray; /* 136 32 */
	CAnimDataChannelDesc& operator=(CAnimDataChannelDesc* , const CAnimDataChannelDesc& );
	void CAnimDataChannelDesc(CAnimDataChannelDesc* );
	void ~CAnimDataChannelDesc(CAnimDataChannelDesc* );
};

// <00919D21> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:81
// member functions: 16
// member variables: 9
// static member variable: 1
// struct size: 168
struct CAnimDataChannelDesc {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:84 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:83 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:83 */
	CAnimDataChannelDesc* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:83 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:83 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:83 */
	void Schema_CompileTimeVerificationFunction(CAnimDataChannelDesc* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:83 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:83 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:83 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimDataChannelDesc* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:84 */
	CAnimDataChannelDesc* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:84 */
	void KV3TransferSave(const CAnimDataChannelDesc* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:84 */
	void KV3TransferLoad(CAnimDataChannelDesc* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:84 */
	void KV3TransferSave_CAnimDataChannelDesc(const CAnimDataChannelDesc* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:84 */
	void KV3TransferLoad_CAnimDataChannelDesc(CAnimDataChannelDesc* , CKV3TransferLoadContext* );
	AnimString_t m_szChannelClass; /* 0 16 */
	AnimString_t m_szVariableName; /* 16 16 */
	int32 m_nFlags; /* 32 4 */
	int32 m_nType; /* 36 4 */
	AnimString_t m_szGrouping; /* 40 16 */
	AnimString_t m_szDescription; /* 56 16 */
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> > m_szElementNameArray; /* 72 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_nElementIndexArray; /* 104 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_nElementMaskArray; /* 136 32 */
	void ~CAnimDataChannelDesc(CAnimDataChannelDesc* );
	void CAnimDataChannelDesc(CAnimDataChannelDesc* );
	CAnimDataChannelDesc& operator=(CAnimDataChannelDesc* , const CAnimDataChannelDesc& );
};

// <00B5E17F> ../public/animationsystem/animationgroupresource.h:81
// member functions: 15
// member variables: 9
// static member variable: 1
// struct size: 168
struct CAnimDataChannelDesc {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationgroupresource.h:83 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:83 */
	CAnimDataChannelDesc* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationgroupresource.h:83 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationgroupresource.h:83 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationgroupresource.h:83 */
	void Schema_CompileTimeVerificationFunction(CAnimDataChannelDesc* );
	/* ../public/animationsystem/animationgroupresource.h:83 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:83 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationgroupresource.h:83 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimDataChannelDesc* );
	/* ../public/animationsystem/animationgroupresource.h:84 */
	CAnimDataChannelDesc* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationgroupresource.h:84 */
	void KV3TransferSave(const CAnimDataChannelDesc* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:84 */
	void KV3TransferLoad(CAnimDataChannelDesc* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationgroupresource.h:84 */
	void KV3TransferSave_CAnimDataChannelDesc(const CAnimDataChannelDesc* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:84 */
	void KV3TransferLoad_CAnimDataChannelDesc(CAnimDataChannelDesc* , CKV3TransferLoadContext* );
	AnimString_t m_szChannelClass; /* 0 16 */
	AnimString_t m_szVariableName; /* 16 16 */
	int32 m_nFlags; /* 32 4 */
	int32 m_nType; /* 36 4 */
	AnimString_t m_szGrouping; /* 40 16 */
	AnimString_t m_szDescription; /* 56 16 */
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> > m_szElementNameArray; /* 72 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_nElementIndexArray; /* 104 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_nElementMaskArray; /* 136 32 */
	void CAnimDataChannelDesc(CAnimDataChannelDesc* );
	void ~CAnimDataChannelDesc(CAnimDataChannelDesc* );
};

// <05507480> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:83
inline void CAnimDataChannelDesc::Schema_DynamicBinding()
{
} /* size: 0 */

// <05505F5F> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:104
// variables: 5
// function calls: 97
void CAnimKeyData::~CAnimKeyData()
{
	{
		int i; // 1721
		CUtlMemory<CAnimDataChannelDesc, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::Element(
			int i);  // 1723
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
		CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned int, int>::Purge(); // 903
		CUtlMemory<unsigned int, int>::Purge(); // 1799
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
		ValidateAlignment<unsigned int>(void); // 508
		CUtlMemory<unsigned int, int>::Purge(); // 510
		CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 81
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
		CUtlMemory<int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 81
		{
			int i; // 1721
			CUtlMemory<CBufferString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
				int i);  // 1723
			CBufferString::~CBufferString(); // 1526
			Destruct<CBufferString>(CBufferString* pMemory); // 1723
		}
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
		CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CBufferString, int>::Purge(); // 903
		CUtlMemory<CBufferString, int>::Purge(); // 1799
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
		ValidateAlignment<CBufferString>(void); // 508
		CUtlMemory<CBufferString, int>::Purge(); // 510
		CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 81
		CBufferString::~CBufferString(); // 81
		CBufferString::~CBufferString(); // 81
		CBufferString::~CBufferString(); // 81
		CBufferString::~CBufferString(); // 81
		CAnimDataChannelDesc::~CAnimDataChannelDesc(); // 1526
		Destruct<CAnimDataChannelDesc>(CAnimDataChannelDesc* pMemory); // 1723
	}
	CUtlVectorBase<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimDataChannelDesc, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimDataChannelDesc, int>::Purge(); // 903
	CUtlMemory<CAnimDataChannelDesc, int>::Purge(); // 1799
	CUtlVectorBase<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::Purge(); // 560
	ValidateAlignment<CAnimDataChannelDesc>(void); // 508
	CUtlMemory<CAnimDataChannelDesc, int>::Purge(); // 510
	CUtlMemory<CAnimDataChannelDesc, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::~CUtlVector(); // 104
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 104
	{
		int i; // 1721
		CUtlMemory<CAnimUser, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimUser, CUtlMemory<CAnimUser, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 67
		CAnimUser::~CAnimUser(); // 1526
		Destruct<CAnimUser>(CAnimUser* pMemory); // 1723
	}
	CUtlVectorBase<CAnimUser, CUtlMemory<CAnimUser, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimUser, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimUser, int>::Purge(); // 903
	CUtlMemory<CAnimUser, int>::Purge(); // 1799
	CUtlVectorBase<CAnimUser, CUtlMemory<CAnimUser, int> >::Purge(); // 560
	ValidateAlignment<CAnimUser>(void); // 508
	CUtlMemory<CAnimUser, int>::Purge(); // 510
	CUtlMemory<CAnimUser, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimUser, CUtlMemory<CAnimUser, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimUser, CUtlMemory<CAnimUser, int> >::~CUtlVector(); // 104
	{
		int i; // 1721
		CUtlMemory<CAnimBone, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 46
		CAnimBone::~CAnimBone(); // 1526
		Destruct<CAnimBone>(CAnimBone* pMemory); // 1723
	}
	CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimBone, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimBone, int>::Purge(); // 903
	CUtlMemory<CAnimBone, int>::Purge(); // 1799
	CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::Purge(); // 560
	ValidateAlignment<CAnimBone>(void); // 508
	CUtlMemory<CAnimBone, int>::Purge(); // 510
	CUtlMemory<CAnimBone, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimBone, CUtlMemory<CAnimBone, int> >::~CUtlVector(); // 104
	CBufferString::~CBufferString(); // 104
} /* size: 0, inline expansions: 41 (0 bytes) */

// <05505F43> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:104
inline void CAnimKeyData::~CAnimKeyData()
{
} /* size: 0 */

// <054F9331> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:104
inline void CAnimKeyData::operator=(const CAnimKeyData &)
{
} /* size: 0 */

// <054F931A> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:104
void CAnimKeyData::CAnimKeyData()
{
} /* size: 0 */

// <054F92FE> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:104
inline void CAnimKeyData::CAnimKeyData()
{
} /* size: 0 */

// <0547DC70> ../public/animationsystem/animationgroupresource.h:104
// variables: 3
// function calls: 54
void CAnimKeyData::~CAnimKeyData()
{
	CUtlMemory<CAnimDataChannelDesc, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimDataChannelDesc, int>::Purge(); // 903
	CUtlMemory<CAnimDataChannelDesc, int>::Purge(); // 1799
	CUtlVectorBase<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::Purge(); // 560
	ValidateAlignment<CAnimDataChannelDesc>(void); // 508
	CUtlMemory<CAnimDataChannelDesc, int>::Purge(); // 510
	CUtlMemory<CAnimDataChannelDesc, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::~CUtlVector(); // 104
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 104
	{
		int i; // 1721
		CUtlMemory<CAnimUser, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimUser, CUtlMemory<CAnimUser, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 67
		CAnimUser::~CAnimUser(); // 1526
		Destruct<CAnimUser>(CAnimUser* pMemory); // 1723
	}
	CUtlVectorBase<CAnimUser, CUtlMemory<CAnimUser, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimUser, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimUser, int>::Purge(); // 903
	CUtlMemory<CAnimUser, int>::Purge(); // 1799
	CUtlVectorBase<CAnimUser, CUtlMemory<CAnimUser, int> >::Purge(); // 560
	ValidateAlignment<CAnimUser>(void); // 508
	CUtlMemory<CAnimUser, int>::Purge(); // 510
	CUtlMemory<CAnimUser, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimUser, CUtlMemory<CAnimUser, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimUser, CUtlMemory<CAnimUser, int> >::~CUtlVector(); // 104
	{
		int i; // 1721
		CUtlMemory<CAnimBone, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 46
		CAnimBone::~CAnimBone(); // 1526
		Destruct<CAnimBone>(CAnimBone* pMemory); // 1723
	}
	CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimBone, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimBone, int>::Purge(); // 903
	CUtlMemory<CAnimBone, int>::Purge(); // 1799
	CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::Purge(); // 560
	ValidateAlignment<CAnimBone>(void); // 508
	CUtlMemory<CAnimBone, int>::Purge(); // 510
	CUtlMemory<CAnimBone, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimBone, CUtlMemory<CAnimBone, int> >::~CUtlVector(); // 104
	CBufferString::~CBufferString(); // 104
} /* size: 0, inline expansions: 40 (0 bytes) */

// <03E65F81> ../public/animationsystem/animationgroupresource.h:104
// member functions: 15
// member variables: 6
// static member variable: 1
// struct size: 152
struct CAnimKeyData {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationgroupresource.h:106 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:106 */
	CAnimKeyData* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationgroupresource.h:106 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationgroupresource.h:106 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationgroupresource.h:106 */
	void Schema_CompileTimeVerificationFunction(CAnimKeyData* );
	/* ../public/animationsystem/animationgroupresource.h:106 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:106 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationgroupresource.h:106 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimKeyData* );
	/* ../public/animationsystem/animationgroupresource.h:107 */
	CAnimKeyData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationgroupresource.h:107 */
	void KV3TransferSave(const CAnimKeyData* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:107 */
	void KV3TransferLoad(CAnimKeyData* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationgroupresource.h:107 */
	void KV3TransferSave_CAnimKeyData(const CAnimKeyData* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:107 */
	void KV3TransferLoad_CAnimKeyData(CAnimKeyData* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	/* ../public/animationsystem/animationgroupresource.h:110 */
	const char* GetName(const CAnimKeyData* );
	CUtlVector<CAnimBone, CUtlMemory<CAnimBone, int> > m_boneArray; /* 16 32 */
	CUtlVector<CAnimUser, CUtlMemory<CAnimUser, int> > m_userArray; /* 48 32 */
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> > m_morphArray; /* 80 32 */
	int32 m_nChannelElements; /* 112 4 */
	CUtlVector<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> > m_dataChannelArray; /* 120 32 */
	void ~CAnimKeyData(CAnimKeyData* );
};

// <054B5EE8> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:104
// member functions: 17
// member variables: 6
// static member variable: 1
// struct size: 152
struct CAnimKeyData {
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:107 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:106 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:106 */
	CAnimKeyData* Schema_MarkHelperFn(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:106 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:106 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:106 */
	void Schema_CompileTimeVerificationFunction(CAnimKeyData* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:106 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:106 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:106 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimKeyData* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:107 */
	CAnimKeyData* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:107 */
	void KV3TransferSave(const CAnimKeyData* , CKV3TransferSaveContext* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:107 */
	void KV3TransferLoad(CAnimKeyData* , CKV3TransferLoadContext* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:107 */
	void KV3TransferSave_CAnimKeyData(const CAnimKeyData* , CKV3TransferSaveContext* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:107 */
	void KV3TransferLoad_CAnimKeyData(CAnimKeyData* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:110 */
	const char* GetName(const CAnimKeyData* );
	CUtlVector<CAnimBone, CUtlMemory<CAnimBone, int> > m_boneArray; /* 16 32 */
	CUtlVector<CAnimUser, CUtlMemory<CAnimUser, int> > m_userArray; /* 48 32 */
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> > m_morphArray; /* 80 32 */
	int32 m_nChannelElements; /* 112 4 */
	CUtlVector<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> > m_dataChannelArray; /* 120 32 */
	void CAnimKeyData(CAnimKeyData* );
	CAnimKeyData& operator=(CAnimKeyData* , const CAnimKeyData& );
	void ~CAnimKeyData(CAnimKeyData* );
};

// <00919FAC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:104
// member functions: 17
// member variables: 6
// static member variable: 1
// struct size: 152
struct CAnimKeyData {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:107 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:106 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:106 */
	CAnimKeyData* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:106 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:106 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:106 */
	void Schema_CompileTimeVerificationFunction(CAnimKeyData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:106 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:106 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:106 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimKeyData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:107 */
	CAnimKeyData* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:107 */
	void KV3TransferSave(const CAnimKeyData* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:107 */
	void KV3TransferLoad(CAnimKeyData* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:107 */
	void KV3TransferSave_CAnimKeyData(const CAnimKeyData* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:107 */
	void KV3TransferLoad_CAnimKeyData(CAnimKeyData* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:110 */
	const char* GetName(const CAnimKeyData* );
	CUtlVector<CAnimBone, CUtlMemory<CAnimBone, int> > m_boneArray; /* 16 32 */
	CUtlVector<CAnimUser, CUtlMemory<CAnimUser, int> > m_userArray; /* 48 32 */
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> > m_morphArray; /* 80 32 */
	int32 m_nChannelElements; /* 112 4 */
	CUtlVector<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> > m_dataChannelArray; /* 120 32 */
	void CAnimKeyData(CAnimKeyData* );
	CAnimKeyData& operator=(CAnimKeyData* , const CAnimKeyData& );
	void ~CAnimKeyData(CAnimKeyData* );
};

// <00B5E3CE> ../public/animationsystem/animationgroupresource.h:104
// member functions: 16
// member variables: 6
// static member variable: 1
// struct size: 152
struct CAnimKeyData {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationgroupresource.h:106 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:106 */
	CAnimKeyData* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationgroupresource.h:106 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationgroupresource.h:106 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationgroupresource.h:106 */
	void Schema_CompileTimeVerificationFunction(CAnimKeyData* );
	/* ../public/animationsystem/animationgroupresource.h:106 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:106 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationgroupresource.h:106 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimKeyData* );
	/* ../public/animationsystem/animationgroupresource.h:107 */
	CAnimKeyData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationgroupresource.h:107 */
	void KV3TransferSave(const CAnimKeyData* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:107 */
	void KV3TransferLoad(CAnimKeyData* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationgroupresource.h:107 */
	void KV3TransferSave_CAnimKeyData(const CAnimKeyData* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:107 */
	void KV3TransferLoad_CAnimKeyData(CAnimKeyData* , CKV3TransferLoadContext* );
	AnimString_t m_name; /* 0 16 */
	/* ../public/animationsystem/animationgroupresource.h:110 */
	const char* GetName(const CAnimKeyData* );
	CUtlVector<CAnimBone, CUtlMemory<CAnimBone, int> > m_boneArray; /* 16 32 */
	CUtlVector<CAnimUser, CUtlMemory<CAnimUser, int> > m_userArray; /* 48 32 */
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> > m_morphArray; /* 80 32 */
	int32 m_nChannelElements; /* 112 4 */
	CUtlVector<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> > m_dataChannelArray; /* 120 32 */
	void CAnimKeyData(CAnimKeyData* );
	void ~CAnimKeyData(CAnimKeyData* );
};

// <0550745B> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:106
inline void CAnimKeyData::Schema_DynamicBinding()
{
} /* size: 0 */

// <054F31E3> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:124
inline void CAnimRetargetElementData::operator=(const CAnimRetargetElementData &)
{
} /* size: 0 */

// <054F31CC> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:124
void CAnimRetargetElementData::CAnimRetargetElementData()
{
} /* size: 0 */

// <054F31B0> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:124
inline void CAnimRetargetElementData::CAnimRetargetElementData()
{
} /* size: 0 */

// <054F3199> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:124
void CAnimRetargetElementData::~CAnimRetargetElementData()
{
} /* size: 0 */

// <054F317D> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:124
inline void CAnimRetargetElementData::~CAnimRetargetElementData()
{
} /* size: 0 */

// <03E6A6DB> ../public/animationsystem/animationgroupresource.h:124
// member functions: 14
// member variables: 13
// static member variable: 1
// struct size: 168
struct CAnimRetargetElementData {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationgroupresource.h:126 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:126 */
	CAnimRetargetElementData* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationgroupresource.h:126 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationgroupresource.h:126 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationgroupresource.h:126 */
	void Schema_CompileTimeVerificationFunction(CAnimRetargetElementData* );
	/* ../public/animationsystem/animationgroupresource.h:126 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:126 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationgroupresource.h:126 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimRetargetElementData* );
	/* ../public/animationsystem/animationgroupresource.h:127 */
	CAnimRetargetElementData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationgroupresource.h:127 */
	void KV3TransferSave(const CAnimRetargetElementData* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:127 */
	void KV3TransferLoad(CAnimRetargetElementData* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationgroupresource.h:127 */
	void KV3TransferSave_CAnimRetargetElementData(const CAnimRetargetElementData* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:127 */
	void KV3TransferLoad_CAnimRetargetElementData(CAnimRetargetElementData* , CKV3TransferLoadContext* );
	int32 m_nElementType; /* 0 4 */
	int32 m_nGroupType; /* 4 4 */
	int32 m_nChainType; /* 8 4 */
	int32 m_nChainIndex; /* 12 4 */
	int32 m_nChainInvIndex; /* 16 4 */
	int32 m_nBoneIndex; /* 20 4 */
	AnimString_t m_boneName; /* 24 16 */
	matrix3x4_t m_transform; /* 40 48 */
	matrix3x4_t m_invTransform; /* 88 48 */
	float m_flDistance; /* 136 4 */
	Vector m_vecMin; /* 140 12 */
	Vector m_vecMax; /* 152 12 */
	float m_flMass; /* 164 4 */
	void ~CAnimRetargetElementData(CAnimRetargetElementData* );
};

// <054BA6AD> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:124
// member functions: 16
// member variables: 13
// static member variable: 1
// struct size: 168
struct CAnimRetargetElementData {
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:127 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:126 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:126 */
	CAnimRetargetElementData* Schema_MarkHelperFn(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:126 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:126 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:126 */
	void Schema_CompileTimeVerificationFunction(CAnimRetargetElementData* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:126 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:126 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:126 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimRetargetElementData* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:127 */
	CAnimRetargetElementData* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:127 */
	void KV3TransferSave(const CAnimRetargetElementData* , CKV3TransferSaveContext* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:127 */
	void KV3TransferLoad(CAnimRetargetElementData* , CKV3TransferLoadContext* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:127 */
	void KV3TransferSave_CAnimRetargetElementData(const CAnimRetargetElementData* , CKV3TransferSaveContext* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:127 */
	void KV3TransferLoad_CAnimRetargetElementData(CAnimRetargetElementData* , CKV3TransferLoadContext* );
	int32 m_nElementType; /* 0 4 */
	int32 m_nGroupType; /* 4 4 */
	int32 m_nChainType; /* 8 4 */
	int32 m_nChainIndex; /* 12 4 */
	int32 m_nChainInvIndex; /* 16 4 */
	int32 m_nBoneIndex; /* 20 4 */
	AnimString_t m_boneName; /* 24 16 */
	matrix3x4_t m_transform; /* 40 48 */
	matrix3x4_t m_invTransform; /* 88 48 */
	float m_flDistance; /* 136 4 */
	Vector m_vecMin; /* 140 12 */
	Vector m_vecMax; /* 152 12 */
	float m_flMass; /* 164 4 */
	void ~CAnimRetargetElementData(CAnimRetargetElementData* );
	void CAnimRetargetElementData(CAnimRetargetElementData* );
	CAnimRetargetElementData& operator=(CAnimRetargetElementData* , const CAnimRetargetElementData& );
};

// <00227834> ../public/animationsystem/animationgroupresource.h:124
// member functions: 16
// member variables: 13
// static member variable: 1
// struct size: 168
struct CAnimRetargetElementData {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationgroupresource.h:126 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:126 */
	CAnimRetargetElementData* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationgroupresource.h:126 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationgroupresource.h:126 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationgroupresource.h:126 */
	void Schema_CompileTimeVerificationFunction(CAnimRetargetElementData* );
	/* ../public/animationsystem/animationgroupresource.h:126 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:126 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationgroupresource.h:126 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimRetargetElementData* );
	/* ../public/animationsystem/animationgroupresource.h:127 */
	CAnimRetargetElementData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationgroupresource.h:127 */
	void KV3TransferSave(const CAnimRetargetElementData* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:127 */
	void KV3TransferLoad(CAnimRetargetElementData* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationgroupresource.h:127 */
	void KV3TransferSave_CAnimRetargetElementData(const CAnimRetargetElementData* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:127 */
	void KV3TransferLoad_CAnimRetargetElementData(CAnimRetargetElementData* , CKV3TransferLoadContext* );
	int32 m_nElementType; /* 0 4 */
	int32 m_nGroupType; /* 4 4 */
	int32 m_nChainType; /* 8 4 */
	int32 m_nChainIndex; /* 12 4 */
	int32 m_nChainInvIndex; /* 16 4 */
	int32 m_nBoneIndex; /* 20 4 */
	AnimString_t m_boneName; /* 24 16 */
	matrix3x4_t m_transform; /* 40 48 */
	matrix3x4_t m_invTransform; /* 88 48 */
	float m_flDistance; /* 136 4 */
	Vector m_vecMin; /* 140 12 */
	Vector m_vecMax; /* 152 12 */
	float m_flMass; /* 164 4 */
	CAnimRetargetElementData& operator=(CAnimRetargetElementData* , const CAnimRetargetElementData& );
	void CAnimRetargetElementData(CAnimRetargetElementData* );
	void ~CAnimRetargetElementData(CAnimRetargetElementData* );
};

// <0091E771> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:124
// member functions: 16
// member variables: 13
// static member variable: 1
// struct size: 168
struct CAnimRetargetElementData {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:127 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:126 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:126 */
	CAnimRetargetElementData* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:126 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:126 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:126 */
	void Schema_CompileTimeVerificationFunction(CAnimRetargetElementData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:126 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:126 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:126 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimRetargetElementData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:127 */
	CAnimRetargetElementData* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:127 */
	void KV3TransferSave(const CAnimRetargetElementData* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:127 */
	void KV3TransferLoad(CAnimRetargetElementData* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:127 */
	void KV3TransferSave_CAnimRetargetElementData(const CAnimRetargetElementData* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:127 */
	void KV3TransferLoad_CAnimRetargetElementData(CAnimRetargetElementData* , CKV3TransferLoadContext* );
	int32 m_nElementType; /* 0 4 */
	int32 m_nGroupType; /* 4 4 */
	int32 m_nChainType; /* 8 4 */
	int32 m_nChainIndex; /* 12 4 */
	int32 m_nChainInvIndex; /* 16 4 */
	int32 m_nBoneIndex; /* 20 4 */
	AnimString_t m_boneName; /* 24 16 */
	matrix3x4_t m_transform; /* 40 48 */
	matrix3x4_t m_invTransform; /* 88 48 */
	float m_flDistance; /* 136 4 */
	Vector m_vecMin; /* 140 12 */
	Vector m_vecMax; /* 152 12 */
	float m_flMass; /* 164 4 */
	void ~CAnimRetargetElementData(CAnimRetargetElementData* );
	void CAnimRetargetElementData(CAnimRetargetElementData* );
	CAnimRetargetElementData& operator=(CAnimRetargetElementData* , const CAnimRetargetElementData& );
};

// <05507436> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:126
inline void CAnimRetargetElementData::Schema_DynamicBinding()
{
} /* size: 0 */

// <054ED19B> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:149
inline void CAnimRetargetChainData::operator=(const CAnimRetargetChainData &)
{
} /* size: 0 */

// <054ED184> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:149
void CAnimRetargetChainData::CAnimRetargetChainData()
{
} /* size: 0 */

// <054ED168> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:149
inline void CAnimRetargetChainData::CAnimRetargetChainData()
{
} /* size: 0 */

// <054ED151> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:149
void CAnimRetargetChainData::~CAnimRetargetChainData()
{
} /* size: 0 */

// <054ED135> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:149
inline void CAnimRetargetChainData::~CAnimRetargetChainData()
{
} /* size: 0 */

// <03E6A94B> ../public/animationsystem/animationgroupresource.h:149
// member functions: 14
// member variables: 4
// static member variable: 1
// struct size: 56
struct CAnimRetargetChainData {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationgroupresource.h:151 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:151 */
	CAnimRetargetChainData* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationgroupresource.h:151 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationgroupresource.h:151 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationgroupresource.h:151 */
	void Schema_CompileTimeVerificationFunction(CAnimRetargetChainData* );
	/* ../public/animationsystem/animationgroupresource.h:151 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:151 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationgroupresource.h:151 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimRetargetChainData* );
	/* ../public/animationsystem/animationgroupresource.h:152 */
	CAnimRetargetChainData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationgroupresource.h:152 */
	void KV3TransferSave(const CAnimRetargetChainData* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:152 */
	void KV3TransferLoad(CAnimRetargetChainData* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationgroupresource.h:152 */
	void KV3TransferSave_CAnimRetargetChainData(const CAnimRetargetChainData* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:152 */
	void KV3TransferLoad_CAnimRetargetChainData(CAnimRetargetChainData* , CKV3TransferLoadContext* );
	AnimString_t m_sChainName; /* 0 16 */
	int32 m_nGroupType; /* 16 4 */
	int32 m_nChainType; /* 20 4 */
	CUtlVector<int, CUtlMemory<int, int> > m_nElement; /* 24 32 */
	void ~CAnimRetargetChainData(CAnimRetargetChainData* );
};

// <054BA978> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:149
// member functions: 16
// member variables: 4
// static member variable: 1
// struct size: 56
struct CAnimRetargetChainData {
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:152 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:151 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:151 */
	CAnimRetargetChainData* Schema_MarkHelperFn(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:151 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:151 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:151 */
	void Schema_CompileTimeVerificationFunction(CAnimRetargetChainData* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:151 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:151 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:151 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimRetargetChainData* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:152 */
	CAnimRetargetChainData* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:152 */
	void KV3TransferSave(const CAnimRetargetChainData* , CKV3TransferSaveContext* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:152 */
	void KV3TransferLoad(CAnimRetargetChainData* , CKV3TransferLoadContext* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:152 */
	void KV3TransferSave_CAnimRetargetChainData(const CAnimRetargetChainData* , CKV3TransferSaveContext* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:152 */
	void KV3TransferLoad_CAnimRetargetChainData(CAnimRetargetChainData* , CKV3TransferLoadContext* );
	AnimString_t m_sChainName; /* 0 16 */
	int32 m_nGroupType; /* 16 4 */
	int32 m_nChainType; /* 20 4 */
	CUtlVector<int, CUtlMemory<int, int> > m_nElement; /* 24 32 */
	void ~CAnimRetargetChainData(CAnimRetargetChainData* );
	void CAnimRetargetChainData(CAnimRetargetChainData* );
	CAnimRetargetChainData& operator=(CAnimRetargetChainData* , const CAnimRetargetChainData& );
};

// <00227AE3> ../public/animationsystem/animationgroupresource.h:149
// member functions: 16
// member variables: 4
// static member variable: 1
// struct size: 56
struct CAnimRetargetChainData {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationgroupresource.h:151 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:151 */
	CAnimRetargetChainData* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationgroupresource.h:151 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationgroupresource.h:151 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationgroupresource.h:151 */
	void Schema_CompileTimeVerificationFunction(CAnimRetargetChainData* );
	/* ../public/animationsystem/animationgroupresource.h:151 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:151 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationgroupresource.h:151 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimRetargetChainData* );
	/* ../public/animationsystem/animationgroupresource.h:152 */
	CAnimRetargetChainData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationgroupresource.h:152 */
	void KV3TransferSave(const CAnimRetargetChainData* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:152 */
	void KV3TransferLoad(CAnimRetargetChainData* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationgroupresource.h:152 */
	void KV3TransferSave_CAnimRetargetChainData(const CAnimRetargetChainData* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:152 */
	void KV3TransferLoad_CAnimRetargetChainData(CAnimRetargetChainData* , CKV3TransferLoadContext* );
	AnimString_t m_sChainName; /* 0 16 */
	int32 m_nGroupType; /* 16 4 */
	int32 m_nChainType; /* 20 4 */
	CUtlVector<int, CUtlMemory<int, int> > m_nElement; /* 24 32 */
	CAnimRetargetChainData& operator=(CAnimRetargetChainData* , const CAnimRetargetChainData& );
	void CAnimRetargetChainData(CAnimRetargetChainData* );
	void ~CAnimRetargetChainData(CAnimRetargetChainData* );
};

// <0091EA3B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:149
// member functions: 16
// member variables: 4
// static member variable: 1
// struct size: 56
struct CAnimRetargetChainData {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:152 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:151 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:151 */
	CAnimRetargetChainData* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:151 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:151 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:151 */
	void Schema_CompileTimeVerificationFunction(CAnimRetargetChainData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:151 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:151 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:151 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimRetargetChainData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:152 */
	CAnimRetargetChainData* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:152 */
	void KV3TransferSave(const CAnimRetargetChainData* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:152 */
	void KV3TransferLoad(CAnimRetargetChainData* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:152 */
	void KV3TransferSave_CAnimRetargetChainData(const CAnimRetargetChainData* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:152 */
	void KV3TransferLoad_CAnimRetargetChainData(CAnimRetargetChainData* , CKV3TransferLoadContext* );
	AnimString_t m_sChainName; /* 0 16 */
	int32 m_nGroupType; /* 16 4 */
	int32 m_nChainType; /* 20 4 */
	CUtlVector<int, CUtlMemory<int, int> > m_nElement; /* 24 32 */
	void ~CAnimRetargetChainData(CAnimRetargetChainData* );
	void CAnimRetargetChainData(CAnimRetargetChainData* );
	CAnimRetargetChainData& operator=(CAnimRetargetChainData* , const CAnimRetargetChainData& );
};

// <05507411> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:151
inline void CAnimRetargetChainData::Schema_DynamicBinding()
{
} /* size: 0 */

// <05505531> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:162
// variables: 3
// function calls: 51
void CAnimRetargetData::~CAnimRetargetData()
{
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetChainData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Element(
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
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 149
		CBufferString::~CBufferString(); // 149
		CAnimRetargetChainData::~CAnimRetargetChainData(); // 1526
		Destruct<CAnimRetargetChainData>(CAnimRetargetChainData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetChainData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetChainData>(void); // 508
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetChainData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetElementData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 124
		CAnimRetargetElementData::~CAnimRetargetElementData(); // 1526
		Destruct<CAnimRetargetElementData>(CAnimRetargetElementData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetElementData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Purge(); // 560
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVector(); // 162
} /* size: 0, inline expansions: 27 (0 bytes) */

// <05505515> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:162
inline void CAnimRetargetData::~CAnimRetargetData()
{
} /* size: 0 */

// <054E9E47> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:162
inline void CAnimRetargetData::operator=(const CAnimRetargetData &)
{
} /* size: 0 */

// <054E9E30> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:162
void CAnimRetargetData::CAnimRetargetData()
{
} /* size: 0 */

// <0547DBD5> ../public/animationsystem/animationgroupresource.h:162
void CAnimRetargetData::~CAnimRetargetData()
{
} /* size: 0 */

// <03E6AB30> ../public/animationsystem/animationgroupresource.h:162
// member functions: 14
// member variables: 5
// static member variable: 1
// struct size: 104
struct CAnimRetargetData {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationgroupresource.h:164 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:164 */
	CAnimRetargetData* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationgroupresource.h:164 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationgroupresource.h:164 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationgroupresource.h:164 */
	void Schema_CompileTimeVerificationFunction(CAnimRetargetData* );
	/* ../public/animationsystem/animationgroupresource.h:164 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:164 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationgroupresource.h:164 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimRetargetData* );
	/* ../public/animationsystem/animationgroupresource.h:165 */
	CAnimRetargetData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationgroupresource.h:165 */
	void KV3TransferSave(const CAnimRetargetData* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:165 */
	void KV3TransferLoad(CAnimRetargetData* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationgroupresource.h:165 */
	void KV3TransferSave_CAnimRetargetData(const CAnimRetargetData* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:165 */
	void KV3TransferLoad_CAnimRetargetData(CAnimRetargetData* , CKV3TransferLoadContext* );
	int32 m_bEnableRetarget; /* 0 4 */
	int32 m_nRetargetStyle; /* 4 4 */
	CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> > m_element; /* 8 32 */
	CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> > m_chain; /* 40 32 */
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> > m_replicated; /* 72 32 */
	void ~CAnimRetargetData(CAnimRetargetData* );
};

// <054BABB8> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:162
// member functions: 16
// member variables: 5
// static member variable: 1
// struct size: 104
struct CAnimRetargetData {
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:165 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:164 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:164 */
	CAnimRetargetData* Schema_MarkHelperFn(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:164 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:164 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:164 */
	void Schema_CompileTimeVerificationFunction(CAnimRetargetData* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:164 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:164 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:164 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimRetargetData* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:165 */
	CAnimRetargetData* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:165 */
	void KV3TransferSave(const CAnimRetargetData* , CKV3TransferSaveContext* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:165 */
	void KV3TransferLoad(CAnimRetargetData* , CKV3TransferLoadContext* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:165 */
	void KV3TransferSave_CAnimRetargetData(const CAnimRetargetData* , CKV3TransferSaveContext* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:165 */
	void KV3TransferLoad_CAnimRetargetData(CAnimRetargetData* , CKV3TransferLoadContext* );
	int32 m_bEnableRetarget; /* 0 4 */
	int32 m_nRetargetStyle; /* 4 4 */
	CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> > m_element; /* 8 32 */
	CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> > m_chain; /* 40 32 */
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> > m_replicated; /* 72 32 */
	void CAnimRetargetData(CAnimRetargetData* );
	CAnimRetargetData& operator=(CAnimRetargetData* , const CAnimRetargetData& );
	void ~CAnimRetargetData(CAnimRetargetData* );
};

// <0091EC7A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:162
// member functions: 16
// member variables: 5
// static member variable: 1
// struct size: 104
struct CAnimRetargetData {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:165 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:164 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:164 */
	CAnimRetargetData* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:164 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:164 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:164 */
	void Schema_CompileTimeVerificationFunction(CAnimRetargetData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:164 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:164 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:164 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimRetargetData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:165 */
	CAnimRetargetData* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:165 */
	void KV3TransferSave(const CAnimRetargetData* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:165 */
	void KV3TransferLoad(CAnimRetargetData* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:165 */
	void KV3TransferSave_CAnimRetargetData(const CAnimRetargetData* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:165 */
	void KV3TransferLoad_CAnimRetargetData(CAnimRetargetData* , CKV3TransferLoadContext* );
	int32 m_bEnableRetarget; /* 0 4 */
	int32 m_nRetargetStyle; /* 4 4 */
	CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> > m_element; /* 8 32 */
	CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> > m_chain; /* 40 32 */
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> > m_replicated; /* 72 32 */
	void CAnimRetargetData(CAnimRetargetData* );
	CAnimRetargetData& operator=(CAnimRetargetData* , const CAnimRetargetData& );
	void ~CAnimRetargetData(CAnimRetargetData* );
};

// <00B62FB0> ../public/animationsystem/animationgroupresource.h:162
// member functions: 15
// member variables: 5
// static member variable: 1
// struct size: 104
struct CAnimRetargetData {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationgroupresource.h:164 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:164 */
	CAnimRetargetData* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationgroupresource.h:164 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationgroupresource.h:164 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationgroupresource.h:164 */
	void Schema_CompileTimeVerificationFunction(CAnimRetargetData* );
	/* ../public/animationsystem/animationgroupresource.h:164 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:164 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationgroupresource.h:164 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimRetargetData* );
	/* ../public/animationsystem/animationgroupresource.h:165 */
	CAnimRetargetData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationgroupresource.h:165 */
	void KV3TransferSave(const CAnimRetargetData* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:165 */
	void KV3TransferLoad(CAnimRetargetData* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationgroupresource.h:165 */
	void KV3TransferSave_CAnimRetargetData(const CAnimRetargetData* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:165 */
	void KV3TransferLoad_CAnimRetargetData(CAnimRetargetData* , CKV3TransferLoadContext* );
	int32 m_bEnableRetarget; /* 0 4 */
	int32 m_nRetargetStyle; /* 4 4 */
	CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> > m_element; /* 8 32 */
	CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> > m_chain; /* 40 32 */
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> > m_replicated; /* 72 32 */
	void CAnimRetargetData(CAnimRetargetData* );
	void ~CAnimRetargetData(CAnimRetargetData* );
};

// <055073EC> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:164
inline void CAnimRetargetData::Schema_DynamicBinding()
{
} /* size: 0 */

// <03DD4B69> ../public/animationsystem/animationgroupresource.h:180
// member functions: 17
// member variables: 13
// static member variable: 1
// vtable entry: 1
// struct size: 472
struct CAnimationGroup : public CRefCounted<CRefCountServiceBase<true, CRefMT> > {
public:
	/* class CRefCounted<CRefCountServiceBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationgroupresource.h:182 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:182 */
	CAnimationGroup* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationgroupresource.h:182 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationgroupresource.h:182 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationgroupresource.h:182 */
	void Schema_CompileTimeVerificationFunction(CAnimationGroup* );
	/* ../public/animationsystem/animationgroupresource.h:182 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:182 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationgroupresource.h:182 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CAnimationGroup* );
	/* ../public/animationsystem/animationgroupresource.h:183 */
	CAnimationGroup* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationgroupresource.h:183 */
	void KV3TransferSave(const CAnimationGroup* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:183 */
	void KV3TransferLoad(CAnimationGroup* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationgroupresource.h:183 */
	void KV3TransferSave_CAnimationGroup(const CAnimationGroup* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:183 */
	void KV3TransferLoad_CAnimationGroup(CAnimationGroup* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationgroupresource.h:185 */
	void CAnimationGroup(CAnimationGroup* );
	/* ../public/animationsystem/animationgroupresource.h:258 */
	virtual void ~CAnimationGroup(CAnimationGroup* );
	/* ../public/animationsystem/animationgroupresource.h:188 */
	void Initalize(CAnimationGroup* , CConvertOldDiskCtx& );
	uint32 m_nFlags; /* 12 4 */
	AnimString_t m_name; /* 16 16 */
	/* ../public/animationsystem/animationgroupresource.h:193 */
	const char* GetName(const CAnimationGroup* );
	CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int> > m_localHAnimArray; /* 32 32 */
	CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> > m_includedGroupArray; /* 64 32 */
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> > m_directHSeqGroup; /* 96 8 */
	CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int> > m_localHAnimArray_Handle; /* 104 32 */
	CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int> > m_includedGroupArray_Handle; /* 136 32 */
	HSequenceGroup_InternalStrong m_directHSeqGroup_Handle; /* 168 8 */
	CAnimKeyData m_decodeKey; /* 176 152 */
	CAnimRetargetData m_retarget; /* 328 104 */
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> > m_szScripts; /* 432 32 */
	bool m_bInitialized; /* 464 1 */
};

// <054955C4> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:180
// member functions: 18
// member variables: 13
// static member variable: 1
// vtable entry: 1
// struct size: 472
struct CAnimationGroup : public CRefCounted<CRefCountServiceBase<true, CRefMT> > {
public:
	/* class CRefCounted<CRefCountServiceBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CAnimationGroup(CAnimationGroup* , const CAnimationGroup& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:182 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:182 */
	CAnimationGroup* Schema_MarkHelperFn(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/animationgroupresource_h_schema.gen_cpp:959 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/animationgroupresource_h_schema.gen_cpp:1000 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/animationgroupresource_h_schema.gen_cpp:913 */
	void Schema_CompileTimeVerificationFunction(CAnimationGroup* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:182 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:182 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:182 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CAnimationGroup* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:183 */
	CAnimationGroup* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/animationgroupresource_h_schema.gen_cpp:1008 */
	void KV3TransferSave(const CAnimationGroup* , CKV3TransferSaveContext* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/animationgroupresource_h_schema.gen_cpp:1025 */
	void KV3TransferLoad(CAnimationGroup* , CKV3TransferLoadContext* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/animationgroupresource_h_schema.gen_cpp:1013 */
	void KV3TransferSave_CAnimationGroup(const CAnimationGroup* , CKV3TransferSaveContext* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/animationgroupresource_h_schema.gen_cpp:1030 */
	void KV3TransferLoad_CAnimationGroup(CAnimationGroup* , CKV3TransferLoadContext* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:185 */
	void CAnimationGroup(CAnimationGroup* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:258 */
	virtual void ~CAnimationGroup(CAnimationGroup* );
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:188 */
	void Initalize(CAnimationGroup* , CConvertOldDiskCtx& );
	uint32 m_nFlags; /* 12 4 */
	AnimString_t m_name; /* 16 16 */
	/* ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:193 */
	const char* GetName(const CAnimationGroup* );
	CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int> > m_localHAnimArray; /* 32 32 */
	CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> > m_includedGroupArray; /* 64 32 */
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> > m_directHSeqGroup; /* 96 8 */
	CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int> > m_localHAnimArray_Handle; /* 104 32 */
	CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int> > m_includedGroupArray_Handle; /* 136 32 */
	HSequenceGroup_InternalStrong m_directHSeqGroup_Handle; /* 168 8 */
	CAnimKeyData m_decodeKey; /* 176 152 */
	CAnimRetargetData m_retarget; /* 328 104 */
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> > m_szScripts; /* 432 32 */
	bool m_bInitialized; /* 464 1 */
};

// <008E2D22> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:180
// member functions: 18
// member variables: 13
// static member variable: 1
// vtable entry: 1
// struct size: 472
struct CAnimationGroup : public CRefCounted<CRefCountServiceBase<true, CRefMT> > {
public:
	/* class CRefCounted<CRefCountServiceBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CAnimationGroup(CAnimationGroup* , const CAnimationGroup& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:182 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:182 */
	CAnimationGroup* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animationgroupresource_h_schema.gen_cpp:902 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animationgroupresource_h_schema.gen_cpp:930 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animationgroupresource_h_schema.gen_cpp:856 */
	void Schema_CompileTimeVerificationFunction(CAnimationGroup* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:182 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:182 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:182 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CAnimationGroup* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:183 */
	CAnimationGroup* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animationgroupresource_h_schema.gen_cpp:938 */
	void KV3TransferSave(const CAnimationGroup* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animationgroupresource_h_schema.gen_cpp:955 */
	void KV3TransferLoad(CAnimationGroup* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animationgroupresource_h_schema.gen_cpp:943 */
	void KV3TransferSave_CAnimationGroup(const CAnimationGroup* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animationgroupresource_h_schema.gen_cpp:960 */
	void KV3TransferLoad_CAnimationGroup(CAnimationGroup* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:185 */
	void CAnimationGroup(CAnimationGroup* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:258 */
	virtual void ~CAnimationGroup(CAnimationGroup* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:188 */
	void Initalize(CAnimationGroup* , CConvertOldDiskCtx& );
	uint32 m_nFlags; /* 12 4 */
	AnimString_t m_name; /* 16 16 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:193 */
	const char* GetName(const CAnimationGroup* );
	CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int> > m_localHAnimArray; /* 32 32 */
	CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> > m_includedGroupArray; /* 64 32 */
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> > m_directHSeqGroup; /* 96 8 */
	CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int> > m_localHAnimArray_Handle; /* 104 32 */
	CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int> > m_includedGroupArray_Handle; /* 136 32 */
	HSequenceGroup_InternalStrong m_directHSeqGroup_Handle; /* 168 8 */
	CAnimKeyData m_decodeKey; /* 176 152 */
	CAnimRetargetData m_retarget; /* 328 104 */
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> > m_szScripts; /* 432 32 */
	bool m_bInitialized; /* 464 1 */
};

// <00AF2F7D> ../public/animationsystem/animationgroupresource.h:180
// member functions: 18
// member variables: 13
// static member variable: 1
// vtable entry: 1
// struct size: 472
struct CAnimationGroup : public CRefCounted<CRefCountServiceBase<true, CRefMT> > {
	/* ../public/animationsystem/animationgroupresource.h:183 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
public:
	/* class CRefCounted<CRefCountServiceBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CAnimationGroup(CAnimationGroup* , const CAnimationGroup& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/animationgroupresource.h:182 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:182 */
	CAnimationGroup* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/animationgroupresource.h:182 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/animationgroupresource.h:182 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/animationgroupresource.h:182 */
	void Schema_CompileTimeVerificationFunction(CAnimationGroup* );
	/* ../public/animationsystem/animationgroupresource.h:182 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/animationgroupresource.h:182 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/animationgroupresource.h:182 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CAnimationGroup* );
	/* ../public/animationsystem/animationgroupresource.h:183 */
	CAnimationGroup* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/animationgroupresource.h:183 */
	void KV3TransferSave(const CAnimationGroup* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:183 */
	void KV3TransferLoad(CAnimationGroup* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationgroupresource.h:183 */
	void KV3TransferSave_CAnimationGroup(const CAnimationGroup* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/animationgroupresource.h:183 */
	void KV3TransferLoad_CAnimationGroup(CAnimationGroup* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/animationgroupresource.h:185 */
	void CAnimationGroup(CAnimationGroup* );
	/* ../public/animationsystem/animationgroupresource.h:258 */
	virtual void ~CAnimationGroup(CAnimationGroup* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationgroupresource.cpp:21 */
	void Initalize(CAnimationGroup* , CConvertOldDiskCtx& );
	uint32 m_nFlags; /* 12 4 */
	AnimString_t m_name; /* 16 16 */
	/* ../public/animationsystem/animationgroupresource.h:193 */
	const char* GetName(const CAnimationGroup* );
	CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int> > m_localHAnimArray; /* 32 32 */
	CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> > m_includedGroupArray; /* 64 32 */
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> > m_directHSeqGroup; /* 96 8 */
	CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int> > m_localHAnimArray_Handle; /* 104 32 */
	CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int> > m_includedGroupArray_Handle; /* 136 32 */
	HSequenceGroup_InternalStrong m_directHSeqGroup_Handle; /* 168 8 */
	CAnimKeyData m_decodeKey; /* 176 152 */
	CAnimRetargetData m_retarget; /* 328 104 */
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> > m_szScripts; /* 432 32 */
	bool m_bInitialized; /* 464 1 */
};

// <0550846E> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:182
// function calls: 3
void CAnimationGroup::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 1000
	Schema_VerifyBindingIsRegistered(void); // 182
	GetPrimaryBinding(void); // 182
} /* size: 0, inline expansions: 3 (0 bytes) */

// <055073C7> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:182
inline void CAnimationGroup::Schema_DynamicBinding()
{
} /* size: 0 */

// <0547E896> ../public/animationsystem/animationgroupresource.h:182
// function call: 1
void CAnimationGroup::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 182
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00A4C495> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:182
// function calls: 3
void CAnimationGroup::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 930
	Schema_VerifyBindingIsRegistered(void); // 182
	GetPrimaryBinding(void); // 182
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00D20407> ../public/animationsystem/animationgroupresource.h:183
inline void KV3TransferAllocateClassInstance(const char* pDerivedClassName)
{
} /* size: 0 */

// <054E5015> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:185
void CAnimationGroup::CAnimationGroup()
{
} /* size: 0 */

// <054E4FFC> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:185
inline void CAnimationGroup::CAnimationGroup()
{
} /* size: 0 */

// <00D1C922> ../public/animationsystem/animationgroupresource.h:225
void CAnimationGroupResource::CAnimationGroupResource()
{
} /* size: 0 */

// <00D1C906> ../public/animationsystem/animationgroupresource.h:225
inline void CAnimationGroupResource::CAnimationGroupResource()
{
} /* size: 0 */

// <00B0C209> ../public/animationsystem/animationgroupresource.h:225
// member functions: 16
// member variables: 3
// class size: 32
class CAnimationGroupResource : public CRefCounted<CRefCountServiceBase<true, CRefMT> > {
public:
	/* class CRefCounted<CRefCountServiceBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CAnimationGroupResource(CAnimationGroupResource* , const CAnimationGroupResource& );
	void CAnimationGroupResource(CAnimationGroupResource* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationgroupresource.cpp:84 */
	void InitFromV0Data(CAnimationGroupResource* , CConvertOldDiskCtx& , CAnimationGroup* , const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationgroupresource.cpp:102 */
	void InitFromV0DataEmbedded(CAnimationGroupResource* , CConvertOldDiskCtx& , CAnimationGroup* , CAnimData* , CSequenceGroupData* , const char* );
	/* ../public/animationsystem/animationgroupresource.h:232 */
	const CAnimationGroup* GetData(const CAnimationGroupResource* );
	/* ../public/animationsystem/animationgroupresource.h:237 */
	const CAnimationResource* pLocalHAnim(const CAnimationGroupResource* , int);
	/* ../public/animationsystem/animationgroupresource.h:242 */
	const char* GetName(const CAnimationGroupResource* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationgroupresource.cpp:95 */
	virtual void ~CAnimationGroupResource(CAnimationGroupResource* );
	CSmartPtr<CAnimationGroup, CRefCountAccessor> m_pAnimationGroupResourceData; /* 16 8 */
	CUtlString m_Name; /* 24 8 */
	const class CAnimationResource  * pLocalHAnim(const class CAnimationGroupResource  *, int); /* linkage=_ZNK23CAnimationGroupResource11pLocalHAnimEi */
	const char  * GetName(const class CAnimationGroupResource  *); /* linkage=_ZNK23CAnimationGroupResource7GetNameEv */
	const class CAnimationGroup  * GetData(const class CAnimationGroupResource  *); /* linkage=_ZNK23CAnimationGroupResource7GetDataEv */
	void CAnimationGroupResource(class CAnimationGroupResource *, const class CAnimationGroupResource  &); /* linkage=_ZN23CAnimationGroupResourceC4ERKS_ */
	void CAnimationGroupResource(class CAnimationGroupResource *); /* linkage=_ZN23CAnimationGroupResourceC4Ev */
	void InitFromV0Data(class CAnimationGroupResource *, class CConvertOldDiskCtx &, class CAnimationGroup *, const char  *); /* linkage=_ZN23CAnimationGroupResource14InitFromV0DataER18CConvertOldDiskCtxP15CAnimationGroupPKc */
	void InitFromV0DataEmbedded(class CAnimationGroupResource *, class CConvertOldDiskCtx &, class CAnimationGroup *, class CAnimData *, class CSequenceGroupData *, const char  *); /* linkage=_ZN23CAnimationGroupResource22InitFromV0DataEmbeddedER18CConvertOldDiskCtxP15CAnimationGroupP9CAnimDataP18CSequenceGroupDataPKc */
	virtual void ~CAnimationGroupResource(class CAnimationGroupResource *); /* linkage=_ZN23CAnimationGroupResourceD4Ev */
};

// <04BDC5AE> ../public/animationsystem/animationgroupresource.h:232
inline void CAnimationGroupResource::GetData()
{
} /* size: 0 */

// <04AE3257> ../public/animationsystem/animationgroupresource.h:237
inline void CAnimationGroupResource::pLocalHAnim(int nLocalHAnim)
{
} /* size: 0 */

// <04BDC595> ../public/animationsystem/animationgroupresource.h:242
inline void CAnimationGroupResource::GetName()
{
} /* size: 0 */

// <05504360> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:258
// variables: 12
// function calls: 88
void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 56046
		iterator __for_begin; // 56056
		iterator __for_end; // 56066
	}
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 56046
		iterator __for_begin; // 56056
		iterator __for_end; // 56066
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 102
		CUtlVectorBase<CAnimationGroupResource::begin(); // 260
		CUtlVectorBase<CAnimationGroupResource::Count(); // 104
		CUtlVectorBase<CAnimationGroupResource::end(); // 260
	}
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 1800
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 265
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 266
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>::~CStrongHandle(); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimData>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimData> >(CStrongHandle<InfoForResourceTypeCAnimData>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimData> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int this); // 266
	{
		CSequenceGroupResource *& __ptr; // 396
		__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 396
		unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::get_deleter(); // 398
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
		Release<CSequenceGroupData>(CSequenceGroupData* pObj); // 344
		CSmartPtr<CSequenceGroupData, CRefCountAccessor>::~CSmartPtr(); // 21
		CUtlString::~CUtlString(); // 21
		CSequenceGroupResource::~CSequenceGroupResource(); // 92
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 86
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 398
	}
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::~unique_ptr(); // 266
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 560
	ValidateAlignment<CAnimationGroupResource*>(void); // 508
	CUtlMemory<CAnimationGroupResource::Purge(); // 510
	CUtlMemory<CAnimationGroupResource::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimationGroupResource::~CUtlVectorBase(); // 410
	CUtlVector<CAnimationGroupResource::~CUtlVector(); // 266
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 903
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 560
	ValidateAlignment<std::unique_ptr<CAnimationResource> >(void); // 508
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 510
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 410
	~CUtlVector(const CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_pt this); // 266
	CBufferString::~CBufferString(); // 266
} /* size: 0, inline expansions: 58 (0 bytes) */

// <055042F8> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:258
void CAnimationGroup::~CAnimationGroup()
{
} /* size: 0 */

// <055042AC> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:258
// variables: 4
inline void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 56078
		iterator __for_begin; // 57862
		iterator __for_end; // 57862
	}
} /* size: 0 */

// <0547BFBA> ../public/animationsystem/animationgroupresource.h:258
// variables: 15
// function calls: 143
void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 22340
		iterator __for_begin; // 22351
		iterator __for_end; // 22362
	}
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 22340
		iterator __for_begin; // 22351
		iterator __for_end; // 22362
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 102
		CUtlVectorBase<CAnimationGroupResource::begin(); // 260
		CUtlVectorBase<CAnimationGroupResource::Count(); // 104
		CUtlVectorBase<CAnimationGroupResource::end(); // 260
	}
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 1800
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 265
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 266
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetChainData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Element(
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
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 149
		CBufferString::~CBufferString(); // 149
		CAnimRetargetChainData::~CAnimRetargetChainData(); // 1526
		Destruct<CAnimRetargetChainData>(CAnimRetargetChainData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetChainData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetChainData>(void); // 508
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetChainData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetElementData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 124
		CAnimRetargetElementData::~CAnimRetargetElementData(); // 1526
		Destruct<CAnimRetargetElementData>(CAnimRetargetElementData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetElementData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetElementData>(void); // 508
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetElementData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVector(); // 162
	CAnimRetargetData::~CAnimRetargetData(); // 266
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>::~CStrongHandle(); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimData>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimData> >(CStrongHandle<InfoForResourceTypeCAnimData>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimData> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int this); // 266
	{
		CSequenceGroupResource *& __ptr; // 396
		__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 396
		unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::get_deleter(); // 398
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
		Release<CSequenceGroupData>(CSequenceGroupData* pObj); // 344
		CSmartPtr<CSequenceGroupData, CRefCountAccessor>::~CSmartPtr(); // 21
		CUtlString::~CUtlString(); // 21
		CSequenceGroupResource::~CSequenceGroupResource(); // 92
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 86
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 398
	}
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::~unique_ptr(); // 266
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 560
	ValidateAlignment<CAnimationGroupResource*>(void); // 508
	CUtlMemory<CAnimationGroupResource::Purge(); // 510
	CUtlMemory<CAnimationGroupResource::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimationGroupResource::~CUtlVectorBase(); // 410
	CUtlVector<CAnimationGroupResource::~CUtlVector(); // 266
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 903
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 560
	ValidateAlignment<std::unique_ptr<CAnimationResource> >(void); // 508
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 510
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 410
	~CUtlVector(const CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_pt this); // 266
	CBufferString::~CBufferString(); // 266
} /* size: 0, inline expansions: 89 (0 bytes) */

// <0547BF02> ../public/animationsystem/animationgroupresource.h:258
// variables: 4
inline void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 22375
		iterator __for_begin; // 51837
		iterator __for_end; // 51837
	}
} /* size: 0 */

// <04D799CF> ../public/animationsystem/animationgroupresource.h:258
// variables: 15
// function calls: 143
void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 12635
		iterator __for_begin; // 12646
		iterator __for_end; // 12657
	}
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 12635
		iterator __for_begin; // 12646
		iterator __for_end; // 12657
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 102
		CUtlVectorBase<CAnimationGroupResource::begin(); // 260
		CUtlVectorBase<CAnimationGroupResource::Count(); // 104
		CUtlVectorBase<CAnimationGroupResource::end(); // 260
	}
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 1800
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 265
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 266
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetChainData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Element(
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
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 149
		CBufferString::~CBufferString(); // 149
		CAnimRetargetChainData::~CAnimRetargetChainData(); // 1526
		Destruct<CAnimRetargetChainData>(CAnimRetargetChainData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetChainData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetChainData>(void); // 508
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetChainData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetElementData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 124
		CAnimRetargetElementData::~CAnimRetargetElementData(); // 1526
		Destruct<CAnimRetargetElementData>(CAnimRetargetElementData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetElementData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetElementData>(void); // 508
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetElementData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVector(); // 162
	CAnimRetargetData::~CAnimRetargetData(); // 266
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>::~CStrongHandle(); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimData>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimData> >(CStrongHandle<InfoForResourceTypeCAnimData>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimData> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int this); // 266
	{
		CSequenceGroupResource *& __ptr; // 396
		__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 396
		unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::get_deleter(); // 398
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
		Release<CSequenceGroupData>(CSequenceGroupData* pObj); // 344
		CSmartPtr<CSequenceGroupData, CRefCountAccessor>::~CSmartPtr(); // 21
		CUtlString::~CUtlString(); // 21
		CSequenceGroupResource::~CSequenceGroupResource(); // 92
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 86
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 398
	}
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::~unique_ptr(); // 266
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 560
	ValidateAlignment<CAnimationGroupResource*>(void); // 508
	CUtlMemory<CAnimationGroupResource::Purge(); // 510
	CUtlMemory<CAnimationGroupResource::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimationGroupResource::~CUtlVectorBase(); // 410
	CUtlVector<CAnimationGroupResource::~CUtlVector(); // 266
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 903
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 560
	ValidateAlignment<std::unique_ptr<CAnimationResource> >(void); // 508
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 510
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 410
	~CUtlVector(const CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_pt this); // 266
	CBufferString::~CBufferString(); // 266
} /* size: 0, inline expansions: 89 (0 bytes) */

// <04D79919> ../public/animationsystem/animationgroupresource.h:258
// variables: 4
inline void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 12670
		iterator __for_begin; // 47892
		iterator __for_end; // 47892
	}
} /* size: 0 */

// <04BD94AD> ../public/animationsystem/animationgroupresource.h:258
// variables: 15
// function calls: 143
void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 11320
		iterator __for_begin; // 11331
		iterator __for_end; // 11342
	}
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 11320
		iterator __for_begin; // 11331
		iterator __for_end; // 11342
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 102
		CUtlVectorBase<CAnimationGroupResource::begin(); // 260
		CUtlVectorBase<CAnimationGroupResource::Count(); // 104
		CUtlVectorBase<CAnimationGroupResource::end(); // 260
	}
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 1800
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 265
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 266
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetChainData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Element(
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
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 149
		CBufferString::~CBufferString(); // 149
		CAnimRetargetChainData::~CAnimRetargetChainData(); // 1526
		Destruct<CAnimRetargetChainData>(CAnimRetargetChainData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetChainData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetChainData>(void); // 508
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetChainData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetElementData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 124
		CAnimRetargetElementData::~CAnimRetargetElementData(); // 1526
		Destruct<CAnimRetargetElementData>(CAnimRetargetElementData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetElementData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetElementData>(void); // 508
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetElementData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVector(); // 162
	CAnimRetargetData::~CAnimRetargetData(); // 266
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>::~CStrongHandle(); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimData>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimData> >(CStrongHandle<InfoForResourceTypeCAnimData>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimData> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int this); // 266
	{
		CSequenceGroupResource *& __ptr; // 396
		__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 396
		unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::get_deleter(); // 398
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
		Release<CSequenceGroupData>(CSequenceGroupData* pObj); // 344
		CSmartPtr<CSequenceGroupData, CRefCountAccessor>::~CSmartPtr(); // 21
		CUtlString::~CUtlString(); // 21
		CSequenceGroupResource::~CSequenceGroupResource(); // 92
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 86
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 398
	}
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::~unique_ptr(); // 266
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 560
	ValidateAlignment<CAnimationGroupResource*>(void); // 508
	CUtlMemory<CAnimationGroupResource::Purge(); // 510
	CUtlMemory<CAnimationGroupResource::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimationGroupResource::~CUtlVectorBase(); // 410
	CUtlVector<CAnimationGroupResource::~CUtlVector(); // 266
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 903
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 560
	ValidateAlignment<std::unique_ptr<CAnimationResource> >(void); // 508
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 510
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 410
	~CUtlVector(const CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_pt this); // 266
	CBufferString::~CBufferString(); // 266
} /* size: 0, inline expansions: 89 (0 bytes) */

// <04BD93F6> ../public/animationsystem/animationgroupresource.h:258
// variables: 4
inline void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 11355
		iterator __for_begin; // 61477
		iterator __for_end; // 61477
	}
} /* size: 0 */

// <03E97F83> ../public/animationsystem/animationgroupresource.h:258
// variables: 15
// function calls: 143
void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 5905
		iterator __for_begin; // 5915
		iterator __for_end; // 5925
	}
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 5905
		iterator __for_begin; // 5915
		iterator __for_end; // 5925
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 102
		CUtlVectorBase<CAnimationGroupResource::begin(); // 260
		CUtlVectorBase<CAnimationGroupResource::Count(); // 104
		CUtlVectorBase<CAnimationGroupResource::end(); // 260
	}
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 1800
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 265
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 266
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetChainData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Element(
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
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 149
		CBufferString::~CBufferString(); // 149
		CAnimRetargetChainData::~CAnimRetargetChainData(); // 1526
		Destruct<CAnimRetargetChainData>(CAnimRetargetChainData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetChainData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetChainData>(void); // 508
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetChainData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetElementData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 124
		CAnimRetargetElementData::~CAnimRetargetElementData(); // 1526
		Destruct<CAnimRetargetElementData>(CAnimRetargetElementData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetElementData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetElementData>(void); // 508
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetElementData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVector(); // 162
	CAnimRetargetData::~CAnimRetargetData(); // 266
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>::~CStrongHandle(); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimData>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimData> >(CStrongHandle<InfoForResourceTypeCAnimData>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimData> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int this); // 266
	{
		CSequenceGroupResource *& __ptr; // 396
		__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 396
		unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::get_deleter(); // 398
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
		Release<CSequenceGroupData>(CSequenceGroupData* pObj); // 344
		CSmartPtr<CSequenceGroupData, CRefCountAccessor>::~CSmartPtr(); // 21
		CUtlString::~CUtlString(); // 21
		CSequenceGroupResource::~CSequenceGroupResource(); // 92
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 86
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 398
	}
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::~unique_ptr(); // 266
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 560
	ValidateAlignment<CAnimationGroupResource*>(void); // 508
	CUtlMemory<CAnimationGroupResource::Purge(); // 510
	CUtlMemory<CAnimationGroupResource::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimationGroupResource::~CUtlVectorBase(); // 410
	CUtlVector<CAnimationGroupResource::~CUtlVector(); // 266
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 903
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 560
	ValidateAlignment<std::unique_ptr<CAnimationResource> >(void); // 508
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 510
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 410
	~CUtlVector(const CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_pt this); // 266
	CBufferString::~CBufferString(); // 266
} /* size: 0, inline expansions: 89 (0 bytes) */

// <03E97ECF> ../public/animationsystem/animationgroupresource.h:258
// variables: 4
inline void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 5937
		iterator __for_begin; // 4529
		iterator __for_end; // 4529
	}
} /* size: 0 */

// <03257FC4> ../public/animationsystem/animationgroupresource.h:258
// variables: 15
// function calls: 143
void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 58947
		iterator __for_begin; // 58958
		iterator __for_end; // 58969
	}
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 58947
		iterator __for_begin; // 58958
		iterator __for_end; // 58969
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 102
		CUtlVectorBase<CAnimationGroupResource::begin(); // 260
		CUtlVectorBase<CAnimationGroupResource::Count(); // 104
		CUtlVectorBase<CAnimationGroupResource::end(); // 260
	}
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 1800
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 265
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 266
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetChainData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Element(
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
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 149
		CBufferString::~CBufferString(); // 149
		CAnimRetargetChainData::~CAnimRetargetChainData(); // 1526
		Destruct<CAnimRetargetChainData>(CAnimRetargetChainData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetChainData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetChainData>(void); // 508
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetChainData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetElementData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 124
		CAnimRetargetElementData::~CAnimRetargetElementData(); // 1526
		Destruct<CAnimRetargetElementData>(CAnimRetargetElementData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetElementData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetElementData>(void); // 508
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetElementData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVector(); // 162
	CAnimRetargetData::~CAnimRetargetData(); // 266
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>::~CStrongHandle(); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimData>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimData> >(CStrongHandle<InfoForResourceTypeCAnimData>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimData> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int this); // 266
	{
		CSequenceGroupResource *& __ptr; // 396
		__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 396
		unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::get_deleter(); // 398
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
		Release<CSequenceGroupData>(CSequenceGroupData* pObj); // 344
		CSmartPtr<CSequenceGroupData, CRefCountAccessor>::~CSmartPtr(); // 21
		CUtlString::~CUtlString(); // 21
		CSequenceGroupResource::~CSequenceGroupResource(); // 92
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 86
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 398
	}
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::~unique_ptr(); // 266
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 560
	ValidateAlignment<CAnimationGroupResource*>(void); // 508
	CUtlMemory<CAnimationGroupResource::Purge(); // 510
	CUtlMemory<CAnimationGroupResource::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimationGroupResource::~CUtlVectorBase(); // 410
	CUtlVector<CAnimationGroupResource::~CUtlVector(); // 266
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 903
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 560
	ValidateAlignment<std::unique_ptr<CAnimationResource> >(void); // 508
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 510
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 410
	~CUtlVector(const CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_pt this); // 266
	CBufferString::~CBufferString(); // 266
} /* size: 981, inline expansions: 89 (3594 bytes) */

// <03257F0B> ../public/animationsystem/animationgroupresource.h:258
// variables: 4
inline void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 58982
		iterator __for_begin; // 48952
		iterator __for_end; // 48952
	}
} /* size: 0 */

// <0280E2C5> ../public/animationsystem/animationgroupresource.h:258
// variables: 15
// function calls: 143
void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 18756
		iterator __for_begin; // 18767
		iterator __for_end; // 18778
	}
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 18756
		iterator __for_begin; // 18767
		iterator __for_end; // 18778
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 102
		CUtlVectorBase<CAnimationGroupResource::begin(); // 260
		CUtlVectorBase<CAnimationGroupResource::Count(); // 104
		CUtlVectorBase<CAnimationGroupResource::end(); // 260
	}
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 1800
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 265
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 266
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetChainData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Element(
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
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 149
		CBufferString::~CBufferString(); // 149
		CAnimRetargetChainData::~CAnimRetargetChainData(); // 1526
		Destruct<CAnimRetargetChainData>(CAnimRetargetChainData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetChainData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetChainData>(void); // 508
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetChainData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetElementData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 124
		CAnimRetargetElementData::~CAnimRetargetElementData(); // 1526
		Destruct<CAnimRetargetElementData>(CAnimRetargetElementData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetElementData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetElementData>(void); // 508
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetElementData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVector(); // 162
	CAnimRetargetData::~CAnimRetargetData(); // 266
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>::~CStrongHandle(); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimData>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimData> >(CStrongHandle<InfoForResourceTypeCAnimData>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimData> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int this); // 266
	{
		CSequenceGroupResource *& __ptr; // 396
		__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 396
		unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::get_deleter(); // 398
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
		Release<CSequenceGroupData>(CSequenceGroupData* pObj); // 344
		CSmartPtr<CSequenceGroupData, CRefCountAccessor>::~CSmartPtr(); // 21
		CUtlString::~CUtlString(); // 21
		CSequenceGroupResource::~CSequenceGroupResource(); // 92
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 86
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 398
	}
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::~unique_ptr(); // 266
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 560
	ValidateAlignment<CAnimationGroupResource*>(void); // 508
	CUtlMemory<CAnimationGroupResource::Purge(); // 510
	CUtlMemory<CAnimationGroupResource::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimationGroupResource::~CUtlVectorBase(); // 410
	CUtlVector<CAnimationGroupResource::~CUtlVector(); // 266
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 903
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 560
	ValidateAlignment<std::unique_ptr<CAnimationResource> >(void); // 508
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 510
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 410
	~CUtlVector(const CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_pt this); // 266
	CBufferString::~CBufferString(); // 266
} /* size: 981, inline expansions: 89 (3594 bytes) */

// <0280E20D> ../public/animationsystem/animationgroupresource.h:258
// variables: 4
inline void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 18791
		iterator __for_begin; // 16432
		iterator __for_end; // 16432
	}
} /* size: 0 */

// <02787EB8> ../public/animationsystem/animationgroupresource.h:258
// variables: 15
// function calls: 143
void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 58679
		iterator __for_begin; // 58690
		iterator __for_end; // 58701
	}
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 58679
		iterator __for_begin; // 58690
		iterator __for_end; // 58701
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 102
		CUtlVectorBase<CAnimationGroupResource::begin(); // 260
		CUtlVectorBase<CAnimationGroupResource::Count(); // 104
		CUtlVectorBase<CAnimationGroupResource::end(); // 260
	}
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 1800
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 265
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 266
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetChainData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Element(
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
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 149
		CBufferString::~CBufferString(); // 149
		CAnimRetargetChainData::~CAnimRetargetChainData(); // 1526
		Destruct<CAnimRetargetChainData>(CAnimRetargetChainData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetChainData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetChainData>(void); // 508
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetChainData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetElementData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 124
		CAnimRetargetElementData::~CAnimRetargetElementData(); // 1526
		Destruct<CAnimRetargetElementData>(CAnimRetargetElementData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetElementData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetElementData>(void); // 508
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetElementData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVector(); // 162
	CAnimRetargetData::~CAnimRetargetData(); // 266
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>::~CStrongHandle(); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimData>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimData> >(CStrongHandle<InfoForResourceTypeCAnimData>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimData> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int this); // 266
	{
		CSequenceGroupResource *& __ptr; // 396
		__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 396
		unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::get_deleter(); // 398
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
		Release<CSequenceGroupData>(CSequenceGroupData* pObj); // 344
		CSmartPtr<CSequenceGroupData, CRefCountAccessor>::~CSmartPtr(); // 21
		CUtlString::~CUtlString(); // 21
		CSequenceGroupResource::~CSequenceGroupResource(); // 92
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 86
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 398
	}
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::~unique_ptr(); // 266
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 560
	ValidateAlignment<CAnimationGroupResource*>(void); // 508
	CUtlMemory<CAnimationGroupResource::Purge(); // 510
	CUtlMemory<CAnimationGroupResource::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimationGroupResource::~CUtlVectorBase(); // 410
	CUtlVector<CAnimationGroupResource::~CUtlVector(); // 266
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 903
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 560
	ValidateAlignment<std::unique_ptr<CAnimationResource> >(void); // 508
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 510
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 410
	~CUtlVector(const CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_pt this); // 266
	CBufferString::~CBufferString(); // 266
} /* size: 981, inline expansions: 89 (3594 bytes) */

// <02787E00> ../public/animationsystem/animationgroupresource.h:258
// variables: 4
inline void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 58714
		iterator __for_begin; // 38001
		iterator __for_end; // 38001
	}
} /* size: 0 */

// <0273AACD> ../public/animationsystem/animationgroupresource.h:258
// variables: 15
// function calls: 143
void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 4429
		iterator __for_begin; // 4440
		iterator __for_end; // 4451
	}
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 4429
		iterator __for_begin; // 4440
		iterator __for_end; // 4451
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 102
		CUtlVectorBase<CAnimationGroupResource::begin(); // 260
		CUtlVectorBase<CAnimationGroupResource::Count(); // 104
		CUtlVectorBase<CAnimationGroupResource::end(); // 260
	}
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 1800
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 265
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 266
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetChainData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Element(
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
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 149
		CBufferString::~CBufferString(); // 149
		CAnimRetargetChainData::~CAnimRetargetChainData(); // 1526
		Destruct<CAnimRetargetChainData>(CAnimRetargetChainData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetChainData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetChainData>(void); // 508
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetChainData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetElementData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 124
		CAnimRetargetElementData::~CAnimRetargetElementData(); // 1526
		Destruct<CAnimRetargetElementData>(CAnimRetargetElementData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetElementData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetElementData>(void); // 508
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetElementData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVector(); // 162
	CAnimRetargetData::~CAnimRetargetData(); // 266
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>::~CStrongHandle(); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimData>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimData> >(CStrongHandle<InfoForResourceTypeCAnimData>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimData> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int this); // 266
	{
		CSequenceGroupResource *& __ptr; // 396
		__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 396
		unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::get_deleter(); // 398
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
		Release<CSequenceGroupData>(CSequenceGroupData* pObj); // 344
		CSmartPtr<CSequenceGroupData, CRefCountAccessor>::~CSmartPtr(); // 21
		CUtlString::~CUtlString(); // 21
		CSequenceGroupResource::~CSequenceGroupResource(); // 92
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 86
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 398
	}
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::~unique_ptr(); // 266
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 560
	ValidateAlignment<CAnimationGroupResource*>(void); // 508
	CUtlMemory<CAnimationGroupResource::Purge(); // 510
	CUtlMemory<CAnimationGroupResource::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimationGroupResource::~CUtlVectorBase(); // 410
	CUtlVector<CAnimationGroupResource::~CUtlVector(); // 266
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 903
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 560
	ValidateAlignment<std::unique_ptr<CAnimationResource> >(void); // 508
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 510
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 410
	~CUtlVector(const CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_pt this); // 266
	CBufferString::~CBufferString(); // 266
} /* size: 981, inline expansions: 89 (3594 bytes) */

// <0273AA16> ../public/animationsystem/animationgroupresource.h:258
// variables: 4
inline void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 4464
		iterator __for_begin; // 1651
		iterator __for_end; // 1651
	}
} /* size: 0 */

// <026B17F8> ../public/animationsystem/animationgroupresource.h:258
// variables: 15
// function calls: 143
void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 32375
		iterator __for_begin; // 32386
		iterator __for_end; // 32397
	}
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 32375
		iterator __for_begin; // 32386
		iterator __for_end; // 32397
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 102
		CUtlVectorBase<CAnimationGroupResource::begin(); // 260
		CUtlVectorBase<CAnimationGroupResource::Count(); // 104
		CUtlVectorBase<CAnimationGroupResource::end(); // 260
	}
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 1800
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 265
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 266
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetChainData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Element(
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
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 149
		CBufferString::~CBufferString(); // 149
		CAnimRetargetChainData::~CAnimRetargetChainData(); // 1526
		Destruct<CAnimRetargetChainData>(CAnimRetargetChainData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetChainData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetChainData>(void); // 508
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetChainData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetElementData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 124
		CAnimRetargetElementData::~CAnimRetargetElementData(); // 1526
		Destruct<CAnimRetargetElementData>(CAnimRetargetElementData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetElementData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetElementData>(void); // 508
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetElementData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVector(); // 162
	CAnimRetargetData::~CAnimRetargetData(); // 266
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>::~CStrongHandle(); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimData>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimData> >(CStrongHandle<InfoForResourceTypeCAnimData>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimData> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int this); // 266
	{
		CSequenceGroupResource *& __ptr; // 396
		__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 396
		unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::get_deleter(); // 398
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
		Release<CSequenceGroupData>(CSequenceGroupData* pObj); // 344
		CSmartPtr<CSequenceGroupData, CRefCountAccessor>::~CSmartPtr(); // 21
		CUtlString::~CUtlString(); // 21
		CSequenceGroupResource::~CSequenceGroupResource(); // 92
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 86
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 398
	}
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::~unique_ptr(); // 266
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 560
	ValidateAlignment<CAnimationGroupResource*>(void); // 508
	CUtlMemory<CAnimationGroupResource::Purge(); // 510
	CUtlMemory<CAnimationGroupResource::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimationGroupResource::~CUtlVectorBase(); // 410
	CUtlVector<CAnimationGroupResource::~CUtlVector(); // 266
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 903
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 560
	ValidateAlignment<std::unique_ptr<CAnimationResource> >(void); // 508
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 510
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 410
	~CUtlVector(const CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_pt this); // 266
	CBufferString::~CBufferString(); // 266
} /* size: 981, inline expansions: 89 (3594 bytes) */

// <026B1740> ../public/animationsystem/animationgroupresource.h:258
// variables: 4
inline void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 32410
		iterator __for_begin; // 34867
		iterator __for_end; // 34867
	}
} /* size: 0 */

// <02633776> ../public/animationsystem/animationgroupresource.h:258
// variables: 15
// function calls: 143
void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 40437
		iterator __for_begin; // 40448
		iterator __for_end; // 40459
	}
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 40437
		iterator __for_begin; // 40448
		iterator __for_end; // 40459
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 102
		CUtlVectorBase<CAnimationGroupResource::begin(); // 260
		CUtlVectorBase<CAnimationGroupResource::Count(); // 104
		CUtlVectorBase<CAnimationGroupResource::end(); // 260
	}
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 1800
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 265
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 266
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetChainData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Element(
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
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 149
		CBufferString::~CBufferString(); // 149
		CAnimRetargetChainData::~CAnimRetargetChainData(); // 1526
		Destruct<CAnimRetargetChainData>(CAnimRetargetChainData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetChainData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetChainData>(void); // 508
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetChainData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetElementData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 124
		CAnimRetargetElementData::~CAnimRetargetElementData(); // 1526
		Destruct<CAnimRetargetElementData>(CAnimRetargetElementData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetElementData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetElementData>(void); // 508
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetElementData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVector(); // 162
	CAnimRetargetData::~CAnimRetargetData(); // 266
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>::~CStrongHandle(); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimData>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimData> >(CStrongHandle<InfoForResourceTypeCAnimData>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimData> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int this); // 266
	{
		CSequenceGroupResource *& __ptr; // 396
		__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 396
		unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::get_deleter(); // 398
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
		Release<CSequenceGroupData>(CSequenceGroupData* pObj); // 344
		CSmartPtr<CSequenceGroupData, CRefCountAccessor>::~CSmartPtr(); // 21
		CUtlString::~CUtlString(); // 21
		CSequenceGroupResource::~CSequenceGroupResource(); // 92
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 86
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 398
	}
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::~unique_ptr(); // 266
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 560
	ValidateAlignment<CAnimationGroupResource*>(void); // 508
	CUtlMemory<CAnimationGroupResource::Purge(); // 510
	CUtlMemory<CAnimationGroupResource::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimationGroupResource::~CUtlVectorBase(); // 410
	CUtlVector<CAnimationGroupResource::~CUtlVector(); // 266
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 903
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 560
	ValidateAlignment<std::unique_ptr<CAnimationResource> >(void); // 508
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 510
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 410
	~CUtlVector(const CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_pt this); // 266
	CBufferString::~CBufferString(); // 266
} /* size: 981, inline expansions: 89 (3594 bytes) */

// <025DB713> ../public/animationsystem/animationgroupresource.h:258
// variables: 15
// function calls: 143
void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 7573
		iterator __for_begin; // 7584
		iterator __for_end; // 7595
	}
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 7573
		iterator __for_begin; // 7584
		iterator __for_end; // 7595
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 102
		CUtlVectorBase<CAnimationGroupResource::begin(); // 260
		CUtlVectorBase<CAnimationGroupResource::Count(); // 104
		CUtlVectorBase<CAnimationGroupResource::end(); // 260
	}
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 1800
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 265
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 266
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetChainData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Element(
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
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 149
		CBufferString::~CBufferString(); // 149
		CAnimRetargetChainData::~CAnimRetargetChainData(); // 1526
		Destruct<CAnimRetargetChainData>(CAnimRetargetChainData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetChainData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetChainData>(void); // 508
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetChainData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetElementData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 124
		CAnimRetargetElementData::~CAnimRetargetElementData(); // 1526
		Destruct<CAnimRetargetElementData>(CAnimRetargetElementData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetElementData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetElementData>(void); // 508
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetElementData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVector(); // 162
	CAnimRetargetData::~CAnimRetargetData(); // 266
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>::~CStrongHandle(); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimData>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimData> >(CStrongHandle<InfoForResourceTypeCAnimData>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimData> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int this); // 266
	{
		CSequenceGroupResource *& __ptr; // 396
		__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 396
		unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::get_deleter(); // 398
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
		Release<CSequenceGroupData>(CSequenceGroupData* pObj); // 344
		CSmartPtr<CSequenceGroupData, CRefCountAccessor>::~CSmartPtr(); // 21
		CUtlString::~CUtlString(); // 21
		CSequenceGroupResource::~CSequenceGroupResource(); // 92
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 86
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 398
	}
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::~unique_ptr(); // 266
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 560
	ValidateAlignment<CAnimationGroupResource*>(void); // 508
	CUtlMemory<CAnimationGroupResource::Purge(); // 510
	CUtlMemory<CAnimationGroupResource::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimationGroupResource::~CUtlVectorBase(); // 410
	CUtlVector<CAnimationGroupResource::~CUtlVector(); // 266
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 903
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 560
	ValidateAlignment<std::unique_ptr<CAnimationResource> >(void); // 508
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 510
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 410
	~CUtlVector(const CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_pt this); // 266
	CBufferString::~CBufferString(); // 266
} /* size: 981, inline expansions: 89 (3594 bytes) */

// <025DB65E> ../public/animationsystem/animationgroupresource.h:258
// variables: 4
inline void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 7608
		iterator __for_begin; // 16760
		iterator __for_end; // 16760
	}
} /* size: 0 */

// <02506846> ../public/animationsystem/animationgroupresource.h:258
// variables: 4
inline void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 53152
		iterator __for_begin; // 17078
		iterator __for_end; // 17078
	}
} /* size: 0 */

// <02332523> ../public/animationsystem/animationgroupresource.h:258
// variables: 4
inline void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 35965
		iterator __for_begin; // 42701
		iterator __for_end; // 42701
	}
} /* size: 0 */

// <0212FD9D> ../public/animationsystem/animationgroupresource.h:258
// variables: 4
inline void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 25847
		iterator __for_begin; // 61069
		iterator __for_end; // 61069
	}
} /* size: 0 */

// <01F1E31B> ../public/animationsystem/animationgroupresource.h:258
// variables: 15
// function calls: 143
void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 18843
		iterator __for_begin; // 18854
		iterator __for_end; // 18865
	}
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 18843
		iterator __for_begin; // 18854
		iterator __for_end; // 18865
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 102
		CUtlVectorBase<CAnimationGroupResource::begin(); // 260
		CUtlVectorBase<CAnimationGroupResource::Count(); // 104
		CUtlVectorBase<CAnimationGroupResource::end(); // 260
	}
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 1800
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 265
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 266
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetChainData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Element(
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
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 149
		CBufferString::~CBufferString(); // 149
		CAnimRetargetChainData::~CAnimRetargetChainData(); // 1526
		Destruct<CAnimRetargetChainData>(CAnimRetargetChainData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetChainData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetChainData>(void); // 508
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetChainData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetElementData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 124
		CAnimRetargetElementData::~CAnimRetargetElementData(); // 1526
		Destruct<CAnimRetargetElementData>(CAnimRetargetElementData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetElementData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetElementData>(void); // 508
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetElementData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVector(); // 162
	CAnimRetargetData::~CAnimRetargetData(); // 266
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>::~CStrongHandle(); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimData>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimData> >(CStrongHandle<InfoForResourceTypeCAnimData>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimData> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int this); // 266
	{
		CSequenceGroupResource *& __ptr; // 396
		__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 396
		unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::get_deleter(); // 398
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
		Release<CSequenceGroupData>(CSequenceGroupData* pObj); // 344
		CSmartPtr<CSequenceGroupData, CRefCountAccessor>::~CSmartPtr(); // 21
		CUtlString::~CUtlString(); // 21
		CSequenceGroupResource::~CSequenceGroupResource(); // 92
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 86
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 398
	}
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::~unique_ptr(); // 266
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 560
	ValidateAlignment<CAnimationGroupResource*>(void); // 508
	CUtlMemory<CAnimationGroupResource::Purge(); // 510
	CUtlMemory<CAnimationGroupResource::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimationGroupResource::~CUtlVectorBase(); // 410
	CUtlVector<CAnimationGroupResource::~CUtlVector(); // 266
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 903
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 560
	ValidateAlignment<std::unique_ptr<CAnimationResource> >(void); // 508
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 510
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 410
	~CUtlVector(const CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_pt this); // 266
	CBufferString::~CBufferString(); // 266
} /* size: 981, inline expansions: 89 (3594 bytes) */

// <01F1E264> ../public/animationsystem/animationgroupresource.h:258
// variables: 4
inline void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 18878
		iterator __for_begin; // 3464
		iterator __for_end; // 3464
	}
} /* size: 0 */

// <01E257E9> ../public/animationsystem/animationgroupresource.h:258
// variables: 15
// function calls: 143
void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 48745
		iterator __for_begin; // 48756
		iterator __for_end; // 48767
	}
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 48745
		iterator __for_begin; // 48756
		iterator __for_end; // 48767
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 102
		CUtlVectorBase<CAnimationGroupResource::begin(); // 260
		CUtlVectorBase<CAnimationGroupResource::Count(); // 104
		CUtlVectorBase<CAnimationGroupResource::end(); // 260
	}
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 1800
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 265
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 266
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetChainData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Element(
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
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 149
		CBufferString::~CBufferString(); // 149
		CAnimRetargetChainData::~CAnimRetargetChainData(); // 1526
		Destruct<CAnimRetargetChainData>(CAnimRetargetChainData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetChainData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetChainData>(void); // 508
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetChainData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetElementData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 124
		CAnimRetargetElementData::~CAnimRetargetElementData(); // 1526
		Destruct<CAnimRetargetElementData>(CAnimRetargetElementData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetElementData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetElementData>(void); // 508
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetElementData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVector(); // 162
	CAnimRetargetData::~CAnimRetargetData(); // 266
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>::~CStrongHandle(); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimData>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimData> >(CStrongHandle<InfoForResourceTypeCAnimData>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimData> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int this); // 266
	{
		CSequenceGroupResource *& __ptr; // 396
		__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 396
		unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::get_deleter(); // 398
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
		Release<CSequenceGroupData>(CSequenceGroupData* pObj); // 344
		CSmartPtr<CSequenceGroupData, CRefCountAccessor>::~CSmartPtr(); // 21
		CUtlString::~CUtlString(); // 21
		CSequenceGroupResource::~CSequenceGroupResource(); // 92
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 86
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 398
	}
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::~unique_ptr(); // 266
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 560
	ValidateAlignment<CAnimationGroupResource*>(void); // 508
	CUtlMemory<CAnimationGroupResource::Purge(); // 510
	CUtlMemory<CAnimationGroupResource::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimationGroupResource::~CUtlVectorBase(); // 410
	CUtlVector<CAnimationGroupResource::~CUtlVector(); // 266
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 903
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 560
	ValidateAlignment<std::unique_ptr<CAnimationResource> >(void); // 508
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 510
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 410
	~CUtlVector(const CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_pt this); // 266
	CBufferString::~CBufferString(); // 266
} /* size: 981, inline expansions: 89 (3594 bytes) */

// <01E25732> ../public/animationsystem/animationgroupresource.h:258
// variables: 4
inline void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 48780
		iterator __for_begin; // 46957
		iterator __for_end; // 46957
	}
} /* size: 0 */

// <01CB66C5> ../public/animationsystem/animationgroupresource.h:258
// variables: 4
inline void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 52768
		iterator __for_begin; // 2181
		iterator __for_end; // 2181
	}
} /* size: 0 */

// <0178C490> ../public/animationsystem/animationgroupresource.h:258
// variables: 15
// function calls: 143
void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 11024
		iterator __for_begin; // 11035
		iterator __for_end; // 11046
	}
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 11024
		iterator __for_begin; // 11035
		iterator __for_end; // 11046
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 102
		CUtlVectorBase<CAnimationGroupResource::begin(); // 260
		CUtlVectorBase<CAnimationGroupResource::Count(); // 104
		CUtlVectorBase<CAnimationGroupResource::end(); // 260
	}
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 1800
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 265
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 266
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetChainData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Element(
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
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 149
		CBufferString::~CBufferString(); // 149
		CAnimRetargetChainData::~CAnimRetargetChainData(); // 1526
		Destruct<CAnimRetargetChainData>(CAnimRetargetChainData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetChainData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetChainData>(void); // 508
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetChainData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetElementData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 124
		CAnimRetargetElementData::~CAnimRetargetElementData(); // 1526
		Destruct<CAnimRetargetElementData>(CAnimRetargetElementData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetElementData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetElementData>(void); // 508
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetElementData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVector(); // 162
	CAnimRetargetData::~CAnimRetargetData(); // 266
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>::~CStrongHandle(); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimData>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimData> >(CStrongHandle<InfoForResourceTypeCAnimData>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimData> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int this); // 266
	{
		CSequenceGroupResource *& __ptr; // 396
		__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 396
		unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::get_deleter(); // 398
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
		Release<CSequenceGroupData>(CSequenceGroupData* pObj); // 344
		CSmartPtr<CSequenceGroupData, CRefCountAccessor>::~CSmartPtr(); // 21
		CUtlString::~CUtlString(); // 21
		CSequenceGroupResource::~CSequenceGroupResource(); // 92
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 86
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 398
	}
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::~unique_ptr(); // 266
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 560
	ValidateAlignment<CAnimationGroupResource*>(void); // 508
	CUtlMemory<CAnimationGroupResource::Purge(); // 510
	CUtlMemory<CAnimationGroupResource::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimationGroupResource::~CUtlVectorBase(); // 410
	CUtlVector<CAnimationGroupResource::~CUtlVector(); // 266
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 903
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 560
	ValidateAlignment<std::unique_ptr<CAnimationResource> >(void); // 508
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 510
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 410
	~CUtlVector(const CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_pt this); // 266
	CBufferString::~CBufferString(); // 266
} /* size: 981, inline expansions: 89 (3594 bytes) */

// <0178C3D9> ../public/animationsystem/animationgroupresource.h:258
// variables: 4
inline void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 11059
		iterator __for_begin; // 5042
		iterator __for_end; // 5042
	}
} /* size: 0 */

// <015CA993> ../public/animationsystem/animationgroupresource.h:258
// variables: 15
// function calls: 143
void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 4116
		iterator __for_begin; // 4127
		iterator __for_end; // 4138
	}
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 4116
		iterator __for_begin; // 4127
		iterator __for_end; // 4138
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 102
		CUtlVectorBase<CAnimationGroupResource::begin(); // 260
		CUtlVectorBase<CAnimationGroupResource::Count(); // 104
		CUtlVectorBase<CAnimationGroupResource::end(); // 260
	}
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 1800
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 265
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 266
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetChainData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Element(
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
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 149
		CBufferString::~CBufferString(); // 149
		CAnimRetargetChainData::~CAnimRetargetChainData(); // 1526
		Destruct<CAnimRetargetChainData>(CAnimRetargetChainData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetChainData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetChainData>(void); // 508
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetChainData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetElementData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 124
		CAnimRetargetElementData::~CAnimRetargetElementData(); // 1526
		Destruct<CAnimRetargetElementData>(CAnimRetargetElementData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetElementData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetElementData>(void); // 508
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetElementData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVector(); // 162
	CAnimRetargetData::~CAnimRetargetData(); // 266
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>::~CStrongHandle(); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimData>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimData> >(CStrongHandle<InfoForResourceTypeCAnimData>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimData> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int this); // 266
	{
		CSequenceGroupResource *& __ptr; // 396
		__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 396
		unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::get_deleter(); // 398
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
		Release<CSequenceGroupData>(CSequenceGroupData* pObj); // 344
		CSmartPtr<CSequenceGroupData, CRefCountAccessor>::~CSmartPtr(); // 21
		CUtlString::~CUtlString(); // 21
		CSequenceGroupResource::~CSequenceGroupResource(); // 92
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 86
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 398
	}
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::~unique_ptr(); // 266
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 560
	ValidateAlignment<CAnimationGroupResource*>(void); // 508
	CUtlMemory<CAnimationGroupResource::Purge(); // 510
	CUtlMemory<CAnimationGroupResource::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimationGroupResource::~CUtlVectorBase(); // 410
	CUtlVector<CAnimationGroupResource::~CUtlVector(); // 266
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 903
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 560
	ValidateAlignment<std::unique_ptr<CAnimationResource> >(void); // 508
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 510
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 410
	~CUtlVector(const CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_pt this); // 266
	CBufferString::~CBufferString(); // 266
} /* size: 981, inline expansions: 89 (3594 bytes) */

// <015CA8DD> ../public/animationsystem/animationgroupresource.h:258
// variables: 4
inline void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 4151
		iterator __for_begin; // 52804
		iterator __for_end; // 52804
	}
} /* size: 0 */

// <013FF759> ../public/animationsystem/animationgroupresource.h:258
// variables: 15
// function calls: 143
void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 24026
		iterator __for_begin; // 24037
		iterator __for_end; // 24048
	}
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 24026
		iterator __for_begin; // 24037
		iterator __for_end; // 24048
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 102
		CUtlVectorBase<CAnimationGroupResource::begin(); // 260
		CUtlVectorBase<CAnimationGroupResource::Count(); // 104
		CUtlVectorBase<CAnimationGroupResource::end(); // 260
	}
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 1800
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 265
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 266
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetChainData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Element(
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
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 149
		CBufferString::~CBufferString(); // 149
		CAnimRetargetChainData::~CAnimRetargetChainData(); // 1526
		Destruct<CAnimRetargetChainData>(CAnimRetargetChainData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetChainData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetChainData>(void); // 508
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetChainData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetElementData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 124
		CAnimRetargetElementData::~CAnimRetargetElementData(); // 1526
		Destruct<CAnimRetargetElementData>(CAnimRetargetElementData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetElementData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetElementData>(void); // 508
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetElementData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVector(); // 162
	CAnimRetargetData::~CAnimRetargetData(); // 266
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>::~CStrongHandle(); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimData>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimData> >(CStrongHandle<InfoForResourceTypeCAnimData>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimData> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int this); // 266
	{
		CSequenceGroupResource *& __ptr; // 396
		__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 396
		unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::get_deleter(); // 398
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
		Release<CSequenceGroupData>(CSequenceGroupData* pObj); // 344
		CSmartPtr<CSequenceGroupData, CRefCountAccessor>::~CSmartPtr(); // 21
		CUtlString::~CUtlString(); // 21
		CSequenceGroupResource::~CSequenceGroupResource(); // 92
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 86
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 398
	}
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::~unique_ptr(); // 266
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 560
	ValidateAlignment<CAnimationGroupResource*>(void); // 508
	CUtlMemory<CAnimationGroupResource::Purge(); // 510
	CUtlMemory<CAnimationGroupResource::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimationGroupResource::~CUtlVectorBase(); // 410
	CUtlVector<CAnimationGroupResource::~CUtlVector(); // 266
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 903
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 560
	ValidateAlignment<std::unique_ptr<CAnimationResource> >(void); // 508
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 510
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 410
	~CUtlVector(const CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_pt this); // 266
	CBufferString::~CBufferString(); // 266
} /* size: 981, inline expansions: 89 (3594 bytes) */

// <013FF6A3> ../public/animationsystem/animationgroupresource.h:258
// variables: 4
inline void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 24061
		iterator __for_begin; // 33932
		iterator __for_end; // 33932
	}
} /* size: 0 */

// <01296498> ../public/animationsystem/animationgroupresource.h:258
// variables: 15
// function calls: 143
void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 51993
		iterator __for_begin; // 52004
		iterator __for_end; // 52015
	}
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 51993
		iterator __for_begin; // 52004
		iterator __for_end; // 52015
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 102
		CUtlVectorBase<CAnimationGroupResource::begin(); // 260
		CUtlVectorBase<CAnimationGroupResource::Count(); // 104
		CUtlVectorBase<CAnimationGroupResource::end(); // 260
	}
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 1800
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 265
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 266
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetChainData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Element(
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
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 149
		CBufferString::~CBufferString(); // 149
		CAnimRetargetChainData::~CAnimRetargetChainData(); // 1526
		Destruct<CAnimRetargetChainData>(CAnimRetargetChainData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetChainData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetChainData>(void); // 508
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetChainData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetElementData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 124
		CAnimRetargetElementData::~CAnimRetargetElementData(); // 1526
		Destruct<CAnimRetargetElementData>(CAnimRetargetElementData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetElementData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetElementData>(void); // 508
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetElementData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVector(); // 162
	CAnimRetargetData::~CAnimRetargetData(); // 266
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>::~CStrongHandle(); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimData>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimData> >(CStrongHandle<InfoForResourceTypeCAnimData>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimData> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int this); // 266
	{
		CSequenceGroupResource *& __ptr; // 396
		__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 396
		unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::get_deleter(); // 398
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
		Release<CSequenceGroupData>(CSequenceGroupData* pObj); // 344
		CSmartPtr<CSequenceGroupData, CRefCountAccessor>::~CSmartPtr(); // 21
		CUtlString::~CUtlString(); // 21
		CSequenceGroupResource::~CSequenceGroupResource(); // 92
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 86
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 398
	}
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::~unique_ptr(); // 266
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 560
	ValidateAlignment<CAnimationGroupResource*>(void); // 508
	CUtlMemory<CAnimationGroupResource::Purge(); // 510
	CUtlMemory<CAnimationGroupResource::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimationGroupResource::~CUtlVectorBase(); // 410
	CUtlVector<CAnimationGroupResource::~CUtlVector(); // 266
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 903
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 560
	ValidateAlignment<std::unique_ptr<CAnimationResource> >(void); // 508
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 510
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 410
	~CUtlVector(const CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_pt this); // 266
	CBufferString::~CBufferString(); // 266
} /* size: 981, inline expansions: 89 (3594 bytes) */

// <012963E2> ../public/animationsystem/animationgroupresource.h:258
// variables: 4
inline void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 52028
		iterator __for_begin; // 26798
		iterator __for_end; // 26798
	}
} /* size: 0 */

// <0106A4D9> ../public/animationsystem/animationgroupresource.h:258
// variables: 4
inline void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 3123
		iterator __for_begin; // 22812
		iterator __for_end; // 22812
	}
} /* size: 0 */

// <00F916C6> ../public/animationsystem/animationgroupresource.h:258
// variables: 15
// function calls: 143
void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 32071
		iterator __for_begin; // 32082
		iterator __for_end; // 32093
	}
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 32071
		iterator __for_begin; // 32082
		iterator __for_end; // 32093
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 102
		CUtlVectorBase<CAnimationGroupResource::begin(); // 260
		CUtlVectorBase<CAnimationGroupResource::Count(); // 104
		CUtlVectorBase<CAnimationGroupResource::end(); // 260
	}
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 1800
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 265
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 266
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetChainData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Element(
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
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 149
		CBufferString::~CBufferString(); // 149
		CAnimRetargetChainData::~CAnimRetargetChainData(); // 1526
		Destruct<CAnimRetargetChainData>(CAnimRetargetChainData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetChainData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetChainData>(void); // 508
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetChainData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetElementData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 124
		CAnimRetargetElementData::~CAnimRetargetElementData(); // 1526
		Destruct<CAnimRetargetElementData>(CAnimRetargetElementData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetElementData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetElementData>(void); // 508
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetElementData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVector(); // 162
	CAnimRetargetData::~CAnimRetargetData(); // 266
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>::~CStrongHandle(); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimData>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimData> >(CStrongHandle<InfoForResourceTypeCAnimData>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimData> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int this); // 266
	{
		CSequenceGroupResource *& __ptr; // 396
		__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 396
		unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::get_deleter(); // 398
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
		Release<CSequenceGroupData>(CSequenceGroupData* pObj); // 344
		CSmartPtr<CSequenceGroupData, CRefCountAccessor>::~CSmartPtr(); // 21
		CUtlString::~CUtlString(); // 21
		CSequenceGroupResource::~CSequenceGroupResource(); // 92
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 86
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 398
	}
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::~unique_ptr(); // 266
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 560
	ValidateAlignment<CAnimationGroupResource*>(void); // 508
	CUtlMemory<CAnimationGroupResource::Purge(); // 510
	CUtlMemory<CAnimationGroupResource::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimationGroupResource::~CUtlVectorBase(); // 410
	CUtlVector<CAnimationGroupResource::~CUtlVector(); // 266
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 903
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 560
	ValidateAlignment<std::unique_ptr<CAnimationResource> >(void); // 508
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 510
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 410
	~CUtlVector(const CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_pt this); // 266
	CBufferString::~CBufferString(); // 266
} /* size: 981, inline expansions: 89 (3594 bytes) */

// <00F91610> ../public/animationsystem/animationgroupresource.h:258
// variables: 4
inline void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 32106
		iterator __for_begin; // 32887
		iterator __for_end; // 32887
	}
} /* size: 0 */

// <00E7DE29> ../public/animationsystem/animationgroupresource.h:258
// variables: 15
// function calls: 143
void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 17578
		iterator __for_begin; // 17589
		iterator __for_end; // 17600
	}
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 17578
		iterator __for_begin; // 17589
		iterator __for_end; // 17600
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 102
		CUtlVectorBase<CAnimationGroupResource::begin(); // 260
		CUtlVectorBase<CAnimationGroupResource::Count(); // 104
		CUtlVectorBase<CAnimationGroupResource::end(); // 260
	}
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 1800
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 265
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 266
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetChainData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Element(
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
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 149
		CBufferString::~CBufferString(); // 149
		CAnimRetargetChainData::~CAnimRetargetChainData(); // 1526
		Destruct<CAnimRetargetChainData>(CAnimRetargetChainData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetChainData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetChainData>(void); // 508
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetChainData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetElementData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 124
		CAnimRetargetElementData::~CAnimRetargetElementData(); // 1526
		Destruct<CAnimRetargetElementData>(CAnimRetargetElementData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetElementData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetElementData>(void); // 508
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetElementData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVector(); // 162
	CAnimRetargetData::~CAnimRetargetData(); // 266
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>::~CStrongHandle(); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimData>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimData> >(CStrongHandle<InfoForResourceTypeCAnimData>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimData> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int this); // 266
	{
		CSequenceGroupResource *& __ptr; // 396
		__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 396
		unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::get_deleter(); // 398
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
		Release<CSequenceGroupData>(CSequenceGroupData* pObj); // 344
		CSmartPtr<CSequenceGroupData, CRefCountAccessor>::~CSmartPtr(); // 21
		CUtlString::~CUtlString(); // 21
		CSequenceGroupResource::~CSequenceGroupResource(); // 92
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 86
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 398
	}
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::~unique_ptr(); // 266
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 560
	ValidateAlignment<CAnimationGroupResource*>(void); // 508
	CUtlMemory<CAnimationGroupResource::Purge(); // 510
	CUtlMemory<CAnimationGroupResource::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimationGroupResource::~CUtlVectorBase(); // 410
	CUtlVector<CAnimationGroupResource::~CUtlVector(); // 266
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 903
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 560
	ValidateAlignment<std::unique_ptr<CAnimationResource> >(void); // 508
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 510
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 410
	~CUtlVector(const CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_pt this); // 266
	CBufferString::~CBufferString(); // 266
} /* size: 981, inline expansions: 89 (3594 bytes) */

// <00D1CB86> ../public/animationsystem/animationgroupresource.h:258
// variables: 17
// function calls: 180
void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 12808
		iterator __for_begin; // 12819
		iterator __for_end; // 12830
	}
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 12808
		iterator __for_begin; // 12819
		iterator __for_end; // 12830
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 102
		CUtlVectorBase<CAnimationGroupResource::begin(); // 260
		CUtlVectorBase<CAnimationGroupResource::Count(); // 104
		CUtlVectorBase<CAnimationGroupResource::end(); // 260
		CUtlString::~CUtlString(); // 97
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
		Release<CAnimationGroup>(CAnimationGroup* pObj); // 344
		CSmartPtr<CAnimationGroup, CRefCountAccessor>::~CSmartPtr(); // 97
		CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase(); // 328
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::~CRefCounted(); // 97
		CAnimationGroupResource::~CAnimationGroupResource(); // 97
		CAnimationGroupResource::~CAnimationGroupResource(); // 262
	}
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 1800
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 265
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 266
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetChainData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Element(
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
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 149
		CBufferString::~CBufferString(); // 149
		CAnimRetargetChainData::~CAnimRetargetChainData(); // 1526
		Destruct<CAnimRetargetChainData>(CAnimRetargetChainData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetChainData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetChainData>(void); // 508
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetChainData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetElementData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 124
		CAnimRetargetElementData::~CAnimRetargetElementData(); // 1526
		Destruct<CAnimRetargetElementData>(CAnimRetargetElementData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetElementData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetElementData>(void); // 508
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetElementData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVector(); // 162
	CAnimRetargetData::~CAnimRetargetData(); // 266
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>::~CStrongHandle(); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimData>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimData> >(CStrongHandle<InfoForResourceTypeCAnimData>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimData> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int this); // 266
	{
		CSequenceGroupResource *& __ptr; // 396
		__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 396
		unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::get_deleter(); // 398
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
		Release<CSequenceGroupData>(CSequenceGroupData* pObj); // 344
		CSmartPtr<CSequenceGroupData, CRefCountAccessor>::~CSmartPtr(); // 21
		CUtlString::~CUtlString(); // 21
		CSequenceGroupResource::~CSequenceGroupResource(); // 92
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 86
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 398
	}
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::~unique_ptr(); // 266
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 560
	ValidateAlignment<CAnimationGroupResource*>(void); // 508
	CUtlMemory<CAnimationGroupResource::Purge(); // 510
	CUtlMemory<CAnimationGroupResource::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimationGroupResource::~CUtlVectorBase(); // 410
	CUtlVector<CAnimationGroupResource::~CUtlVector(); // 266
	{
		int i; // 1721
		CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
			int i);  // 1723
		{
			CAnimationResource *& __ptr; // 396
			__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 396
			unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::get_deleter(); // 398
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 204
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
			CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
			Release<CAnimData>(CAnimData* pObj); // 370
			CSmartPtr<CAnimData, CRefCountAccessor>::operator=(
					CAnimData* pObj);  // 459
			CUtlString::~CUtlString(); // 460
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 204
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
			CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
			Release<CAnimData>(CAnimData* pObj); // 344
			CSmartPtr<CAnimData, CRefCountAccessor>::~CSmartPtr(); // 460
			CAnimationResource::~CAnimationResource(); // 92
			default_delete<CAnimationResource>::operator(
					CAnimationResource* __ptr);  // 86
			default_delete<CAnimationResource>::operator(
					CAnimationResource* __ptr);  // 398
		}
		unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::~unique_ptr(); // 1526
		Destruct<std::unique_ptr<CAnimationResource> >(unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 1798
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 903
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 560
	ValidateAlignment<std::unique_ptr<CAnimationResource> >(void); // 508
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 510
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 410
	~CUtlVector(const CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_pt this); // 266
	CBufferString::~CBufferString(); // 266
} /* size: 0, inline expansions: 90 (0 bytes) */

// <00A4577A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:258
// variables: 4
inline void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 48849
		iterator __for_begin; // 15525
		iterator __for_end; // 15525
	}
} /* size: 0 */

// <007E2891> ../public/animationsystem/animationgroupresource.h:258
// variables: 4
inline void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 36844
		iterator __for_begin; // 18329
		iterator __for_end; // 18329
	}
} /* size: 0 */

// <005BBCAD> ../public/animationsystem/animationgroupresource.h:258
// variables: 15
// function calls: 143
void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 9009
		iterator __for_begin; // 9019
		iterator __for_end; // 9029
	}
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 9009
		iterator __for_begin; // 9019
		iterator __for_end; // 9029
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 102
		CUtlVectorBase<CAnimationGroupResource::begin(); // 260
		CUtlVectorBase<CAnimationGroupResource::Count(); // 104
		CUtlVectorBase<CAnimationGroupResource::end(); // 260
	}
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 1800
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 265
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 266
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetChainData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Element(
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
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 149
		CBufferString::~CBufferString(); // 149
		CAnimRetargetChainData::~CAnimRetargetChainData(); // 1526
		Destruct<CAnimRetargetChainData>(CAnimRetargetChainData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetChainData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetChainData>(void); // 508
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetChainData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetElementData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 124
		CAnimRetargetElementData::~CAnimRetargetElementData(); // 1526
		Destruct<CAnimRetargetElementData>(CAnimRetargetElementData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetElementData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetElementData>(void); // 508
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetElementData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVector(); // 162
	CAnimRetargetData::~CAnimRetargetData(); // 266
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>::~CStrongHandle(); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimData>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimData> >(CStrongHandle<InfoForResourceTypeCAnimData>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimData> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int this); // 266
	{
		CSequenceGroupResource *& __ptr; // 396
		__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 396
		unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::get_deleter(); // 398
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
		Release<CSequenceGroupData>(CSequenceGroupData* pObj); // 344
		CSmartPtr<CSequenceGroupData, CRefCountAccessor>::~CSmartPtr(); // 21
		CUtlString::~CUtlString(); // 21
		CSequenceGroupResource::~CSequenceGroupResource(); // 92
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 86
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 398
	}
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::~unique_ptr(); // 266
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 560
	ValidateAlignment<CAnimationGroupResource*>(void); // 508
	CUtlMemory<CAnimationGroupResource::Purge(); // 510
	CUtlMemory<CAnimationGroupResource::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimationGroupResource::~CUtlVectorBase(); // 410
	CUtlVector<CAnimationGroupResource::~CUtlVector(); // 266
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 903
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 560
	ValidateAlignment<std::unique_ptr<CAnimationResource> >(void); // 508
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 510
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 410
	~CUtlVector(const CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_pt this); // 266
	CBufferString::~CBufferString(); // 266
} /* size: 981, inline expansions: 89 (3594 bytes) */

// <005BBBFA> ../public/animationsystem/animationgroupresource.h:258
// variables: 4
inline void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 9041
		iterator __for_begin; // 63414
		iterator __for_end; // 63414
	}
} /* size: 0 */

// <0033F759> ../public/animationsystem/animationgroupresource.h:258
// variables: 4
inline void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 24243
		iterator __for_begin; // 14746
		iterator __for_end; // 14746
	}
} /* size: 0 */

// <01426FA1> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:258
// variables: 12
// function calls: 88
void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 5012
		iterator __for_begin; // 5022
		iterator __for_end; // 5032
	}
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 5012
		iterator __for_begin; // 5022
		iterator __for_end; // 5032
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 102
		CUtlVectorBase<CAnimationGroupResource::begin(); // 260
		CUtlVectorBase<CAnimationGroupResource::Count(); // 104
		CUtlVectorBase<CAnimationGroupResource::end(); // 260
	}
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 1800
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 265
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 266
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>::~CStrongHandle(); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimData>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimData> >(CStrongHandle<InfoForResourceTypeCAnimData>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimData> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int this); // 266
	{
		CSequenceGroupResource *& __ptr; // 396
		__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 396
		unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::get_deleter(); // 398
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
		Release<CSequenceGroupData>(CSequenceGroupData* pObj); // 344
		CSmartPtr<CSequenceGroupData, CRefCountAccessor>::~CSmartPtr(); // 21
		CUtlString::~CUtlString(); // 21
		CSequenceGroupResource::~CSequenceGroupResource(); // 92
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 86
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 398
	}
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::~unique_ptr(); // 266
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 560
	ValidateAlignment<CAnimationGroupResource*>(void); // 508
	CUtlMemory<CAnimationGroupResource::Purge(); // 510
	CUtlMemory<CAnimationGroupResource::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimationGroupResource::~CUtlVectorBase(); // 410
	CUtlVector<CAnimationGroupResource::~CUtlVector(); // 266
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 903
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 560
	ValidateAlignment<std::unique_ptr<CAnimationResource> >(void); // 508
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 510
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 410
	~CUtlVector(const CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_pt this); // 266
	CBufferString::~CBufferString(); // 266
} /* size: 0, inline expansions: 58 (0 bytes) */

// <01426EED> ../_generated_code/bonesetup/linuxsteamrt64/release/../../../../public/animationsystem/animationgroupresource.h:258
// variables: 4
inline void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 5044
		iterator __for_begin; // 6828
		iterator __for_end; // 6828
	}
} /* size: 0 */

// <0139EBFB> ../public/animationsystem/animationgroupresource.h:258
// variables: 15
// function calls: 143
void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 36842
		iterator __for_begin; // 36853
		iterator __for_end; // 36864
	}
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 36842
		iterator __for_begin; // 36853
		iterator __for_end; // 36864
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 102
		CUtlVectorBase<CAnimationGroupResource::begin(); // 260
		CUtlVectorBase<CAnimationGroupResource::Count(); // 104
		CUtlVectorBase<CAnimationGroupResource::end(); // 260
	}
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 1800
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 265
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 266
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetChainData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Element(
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
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 149
		CBufferString::~CBufferString(); // 149
		CAnimRetargetChainData::~CAnimRetargetChainData(); // 1526
		Destruct<CAnimRetargetChainData>(CAnimRetargetChainData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetChainData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetChainData>(void); // 508
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetChainData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetElementData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 124
		CAnimRetargetElementData::~CAnimRetargetElementData(); // 1526
		Destruct<CAnimRetargetElementData>(CAnimRetargetElementData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetElementData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetElementData>(void); // 508
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetElementData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVector(); // 162
	CAnimRetargetData::~CAnimRetargetData(); // 266
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>::~CStrongHandle(); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimData>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimData> >(CStrongHandle<InfoForResourceTypeCAnimData>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimData> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int this); // 266
	{
		CSequenceGroupResource *& __ptr; // 396
		__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 396
		unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::get_deleter(); // 398
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
		Release<CSequenceGroupData>(CSequenceGroupData* pObj); // 344
		CSmartPtr<CSequenceGroupData, CRefCountAccessor>::~CSmartPtr(); // 21
		CUtlString::~CUtlString(); // 21
		CSequenceGroupResource::~CSequenceGroupResource(); // 92
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 86
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 398
	}
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::~unique_ptr(); // 266
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 560
	ValidateAlignment<CAnimationGroupResource*>(void); // 508
	CUtlMemory<CAnimationGroupResource::Purge(); // 510
	CUtlMemory<CAnimationGroupResource::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimationGroupResource::~CUtlVectorBase(); // 410
	CUtlVector<CAnimationGroupResource::~CUtlVector(); // 266
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 903
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 560
	ValidateAlignment<std::unique_ptr<CAnimationResource> >(void); // 508
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 510
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 410
	~CUtlVector(const CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_pt this); // 266
	CBufferString::~CBufferString(); // 266
} /* size: 0, inline expansions: 89 (0 bytes) */

// <0139EB43> ../public/animationsystem/animationgroupresource.h:258
// variables: 4
inline void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 36877
		iterator __for_begin; // 803
		iterator __for_end; // 803
	}
} /* size: 0 */

// <00B542F0> ../public/animationsystem/animationgroupresource.h:258
// variables: 15
// function calls: 143
void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 59104
		iterator __for_begin; // 59115
		iterator __for_end; // 59126
	}
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 59104
		iterator __for_begin; // 59115
		iterator __for_end; // 59126
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 102
		CUtlVectorBase<CAnimationGroupResource::begin(); // 260
		CUtlVectorBase<CAnimationGroupResource::Count(); // 104
		CUtlVectorBase<CAnimationGroupResource::end(); // 260
	}
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 1800
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 265
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 266
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetChainData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Element(
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
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 149
		CBufferString::~CBufferString(); // 149
		CAnimRetargetChainData::~CAnimRetargetChainData(); // 1526
		Destruct<CAnimRetargetChainData>(CAnimRetargetChainData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetChainData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetChainData>(void); // 508
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetChainData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetElementData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 124
		CAnimRetargetElementData::~CAnimRetargetElementData(); // 1526
		Destruct<CAnimRetargetElementData>(CAnimRetargetElementData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetElementData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetElementData>(void); // 508
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetElementData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVector(); // 162
	CAnimRetargetData::~CAnimRetargetData(); // 266
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>::~CStrongHandle(); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimData>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimData> >(CStrongHandle<InfoForResourceTypeCAnimData>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimData> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int this); // 266
	{
		CSequenceGroupResource *& __ptr; // 396
		__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 396
		unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::get_deleter(); // 398
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
		Release<CSequenceGroupData>(CSequenceGroupData* pObj); // 344
		CSmartPtr<CSequenceGroupData, CRefCountAccessor>::~CSmartPtr(); // 21
		CUtlString::~CUtlString(); // 21
		CSequenceGroupResource::~CSequenceGroupResource(); // 92
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 86
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 398
	}
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::~unique_ptr(); // 266
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 560
	ValidateAlignment<CAnimationGroupResource*>(void); // 508
	CUtlMemory<CAnimationGroupResource::Purge(); // 510
	CUtlMemory<CAnimationGroupResource::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimationGroupResource::~CUtlVectorBase(); // 410
	CUtlVector<CAnimationGroupResource::~CUtlVector(); // 266
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 903
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 560
	ValidateAlignment<std::unique_ptr<CAnimationResource> >(void); // 508
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 510
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 410
	~CUtlVector(const CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_pt this); // 266
	CBufferString::~CBufferString(); // 266
} /* size: 0, inline expansions: 89 (0 bytes) */

// <00A5B7BE> ../public/animationsystem/animationgroupresource.h:258
// variables: 15
// function calls: 143
void CAnimationGroup::~CAnimationGroup()
{
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 23470
		iterator __for_begin; // 23481
		iterator __for_end; // 23492
	}
	{
		CAnimationGroupResource* pGroup; // 260
		CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >& __for_range; // 23470
		iterator __for_begin; // 23481
		iterator __for_end; // 23492
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 102
		CUtlVectorBase<CAnimationGroupResource::begin(); // 260
		CUtlVectorBase<CAnimationGroupResource::Count(); // 104
		CUtlVectorBase<CAnimationGroupResource::end(); // 260
	}
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 1800
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 265
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 266
	{
		int i; // 1721
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 1723
	}
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveAll(); // 1798
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 1799
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 560
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetChainData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Element(
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
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 149
		CBufferString::~CBufferString(); // 149
		CAnimRetargetChainData::~CAnimRetargetChainData(); // 1526
		Destruct<CAnimRetargetChainData>(CAnimRetargetChainData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetChainData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetChainData>(void); // 508
	CUtlMemory<CAnimRetargetChainData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetChainData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::~CUtlVector(); // 162
	{
		int i; // 1721
		CUtlMemory<CAnimRetargetElementData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 124
		CAnimRetargetElementData::~CAnimRetargetElementData(); // 1526
		Destruct<CAnimRetargetElementData>(CAnimRetargetElementData* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetargetElementData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 903
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetargetElementData>(void); // 508
	CUtlMemory<CAnimRetargetElementData, int>::Purge(); // 510
	CUtlMemory<CAnimRetargetElementData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::~CUtlVector(); // 162
	CAnimRetargetData::~CAnimRetargetData(); // 266
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>::~CStrongHandle(); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 266
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimData>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimData> >(CStrongHandle<InfoForResourceTypeCAnimData>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimData> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int this); // 266
	{
		CSequenceGroupResource *& __ptr; // 396
		__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 396
		unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::get_deleter(); // 398
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
		Release<CSequenceGroupData>(CSequenceGroupData* pObj); // 344
		CSmartPtr<CSequenceGroupData, CRefCountAccessor>::~CSmartPtr(); // 21
		CUtlString::~CUtlString(); // 21
		CSequenceGroupResource::~CSequenceGroupResource(); // 92
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 86
		default_delete<CSequenceGroupResource>::operator(
				CSequenceGroupResource* __ptr);  // 398
	}
	unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::~unique_ptr(); // 266
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 560
	ValidateAlignment<CAnimationGroupResource*>(void); // 508
	CUtlMemory<CAnimationGroupResource::Purge(); // 510
	CUtlMemory<CAnimationGroupResource::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimationGroupResource::~CUtlVectorBase(); // 410
	CUtlVector<CAnimationGroupResource::~CUtlVector(); // 266
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 903
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 560
	ValidateAlignment<std::unique_ptr<CAnimationResource> >(void); // 508
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::Purge(); // 510
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 410
	~CUtlVector(const CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_pt this); // 266
	CBufferString::~CBufferString(); // 266
} /* size: 0, inline expansions: 89 (0 bytes) */

