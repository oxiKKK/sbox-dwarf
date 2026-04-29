
//
// public/vanimlib/ik/iksolversettings.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//	structs: 3
//

// <0331E159> ../public/vanimlib/ik/iksolversettings.h:11
void IKSolverSettings_t::IKSolverSettings_t()
{
} /* size: 0 */

// <0331E13D> ../public/vanimlib/ik/iksolversettings.h:11
inline void IKSolverSettings_t::IKSolverSettings_t()
{
} /* size: 0 */

// <00045C79> ../public/vanimlib/ik/iksolversettings.h:11
// member functions: 13
// member variables: 2
// static member variable: 1
// struct size: 8
struct IKSolverSettings_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vanimlib/ik/iksolversettings.h:13 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vanimlib/ik/iksolversettings.h:13 */
	IKSolverSettings_t* Schema_MarkHelperFn(void);
	/* ../public/vanimlib/ik/iksolversettings.h:13 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vanimlib/ik/iksolversettings.h:13 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vanimlib/ik/iksolversettings.h:13 */
	void Schema_CompileTimeVerificationFunction(IKSolverSettings_t* );
	/* ../public/vanimlib/ik/iksolversettings.h:13 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vanimlib/ik/iksolversettings.h:13 */
	const char* Schema_StaticClassname(void);
	/* ../public/vanimlib/ik/iksolversettings.h:13 */
	const CSchemaClassInfo* Schema_DynamicBinding(const IKSolverSettings_t* );
	/* ../public/vanimlib/ik/iksolversettings.h:15 */
	void KV3TransferSave(const IKSolverSettings_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/iksolversettings.h:16 */
	void KV3TransferLoad(IKSolverSettings_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/iksolversettings.h:18 */
	bool Initialize(IKSolverSettings_t* , const CModel* , const CSpaceAgnosticBoneAccessor& );
	IKSolverType m_SolverType; /* 0 4 */
	int m_nNumIterations; /* 4 4 */
	/* ../public/vanimlib/ik/iksolversettings.h:29 */
	PropertyChangeDirtyResult_t OnSolverTypeChanged(void* );
	/* ../public/vanimlib/ik/iksolversettings.h:30 */
	PropertyAttrState_t VisibleIfUsesIterations(void* );
};

// <0022F790> ../public/vanimlib/ik/iksolversettings.h:11
// member functions: 14
// member variables: 2
// static member variable: 1
// struct size: 8
struct IKSolverSettings_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vanimlib/ik/iksolversettings.h:13 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vanimlib/ik/iksolversettings.h:13 */
	IKSolverSettings_t* Schema_MarkHelperFn(void);
	/* ../public/vanimlib/ik/iksolversettings.h:13 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vanimlib/ik/iksolversettings.h:13 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vanimlib/ik/iksolversettings.h:13 */
	void Schema_CompileTimeVerificationFunction(IKSolverSettings_t* );
	/* ../public/vanimlib/ik/iksolversettings.h:13 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vanimlib/ik/iksolversettings.h:13 */
	const char* Schema_StaticClassname(void);
	/* ../public/vanimlib/ik/iksolversettings.h:13 */
	const CSchemaClassInfo* Schema_DynamicBinding(const IKSolverSettings_t* );
	/* ../public/vanimlib/ik/iksolversettings.h:15 */
	void KV3TransferSave(const IKSolverSettings_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/iksolversettings.h:16 */
	void KV3TransferLoad(IKSolverSettings_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/iksolversettings.h:18 */
	bool Initialize(IKSolverSettings_t* , const CModel* , const CSpaceAgnosticBoneAccessor& );
	IKSolverType m_SolverType; /* 0 4 */
	int m_nNumIterations; /* 4 4 */
	/* ../public/vanimlib/ik/iksolversettings.h:29 */
	PropertyChangeDirtyResult_t OnSolverTypeChanged(void* );
	/* ../public/vanimlib/ik/iksolversettings.h:30 */
	PropertyAttrState_t VisibleIfUsesIterations(void* );
	void IKSolverSettings_t(IKSolverSettings_t* );
};

// <00584009> ../public/vanimlib/ik/iksolversettings.h:11
// member functions: 14
// member variables: 2
// static member variable: 1
// struct size: 8
struct IKSolverSettings_t {
	/* ../public/vanimlib/ik/iksolversettings.h:14 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vanimlib/ik/iksolversettings.h:13 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vanimlib/ik/iksolversettings.h:13 */
	IKSolverSettings_t* Schema_MarkHelperFn(void);
	/* ../public/vanimlib/ik/iksolversettings.h:13 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vanimlib/ik/iksolversettings.h:13 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vanimlib/ik/iksolversettings.h:13 */
	void Schema_CompileTimeVerificationFunction(IKSolverSettings_t* );
	/* ../public/vanimlib/ik/iksolversettings.h:13 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vanimlib/ik/iksolversettings.h:13 */
	const char* Schema_StaticClassname(void);
	/* ../public/vanimlib/ik/iksolversettings.h:13 */
	const CSchemaClassInfo* Schema_DynamicBinding(const IKSolverSettings_t* );
	/* ../public/vanimlib/ik/iksolversettings.h:15 */
	void KV3TransferSave(const IKSolverSettings_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/iksolversettings.h:16 */
	void KV3TransferLoad(IKSolverSettings_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/iksolversettings.h:18 */
	bool Initialize(IKSolverSettings_t* , const CModel* , const CSpaceAgnosticBoneAccessor& );
	IKSolverType m_SolverType; /* 0 4 */
	int m_nNumIterations; /* 4 4 */
	/* ../public/vanimlib/ik/iksolversettings.h:29 */
	PropertyChangeDirtyResult_t OnSolverTypeChanged(void* );
	/* ../public/vanimlib/ik/iksolversettings.h:30 */
	PropertyAttrState_t VisibleIfUsesIterations(void* );
	void IKSolverSettings_t(IKSolverSettings_t* );
};

// <00D20898> ../public/vanimlib/ik/iksolversettings.h:13
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <00D20891> ../public/vanimlib/ik/iksolversettings.h:13
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <00D20878> ../public/vanimlib/ik/iksolversettings.h:13
inline void IKSolverSettings_t::Schema_DynamicBinding()
{
} /* size: 0 */

