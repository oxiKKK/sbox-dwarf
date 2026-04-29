
//
// public/vanimlib/ik/iktargetsettings.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 13
//	classes: 2
//	structs: 8
//

// <0033F6EF> ../public/vanimlib/ik/iktargetsettings.h:28
inline void Get(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <0022F9B5> ../public/vanimlib/ik/iktargetsettings.h:28
// member functions: 2
// class size: 1
class CSchemaTypeOf<IKTargetSource> {
	/* ../public/vanimlib/ik/iktargetsettings.h:28 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
	/* ../public/vanimlib/ik/iktargetsettings.h:28 */
	const char* GetEnumName(void);
};

// <0022F9F8> ../public/vanimlib/ik/iktargetsettings.h:29
// member functions: 2
// class size: 1
class CSchemaTypeOf<IKTargetCoordinateSystem> {
	/* ../public/vanimlib/ik/iktargetsettings.h:29 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
	/* ../public/vanimlib/ik/iktargetsettings.h:29 */
	const char* GetEnumName(void);
};

// <034C700B> ../public/vanimlib/ik/iktargetsettings.h:32
// variable: 1
inline void Pairs(void)
{
	KV3Transfer_EnumHelpers_StringPair_t<IKTargetSource> s_Elements; // 32
} /* size: 0, variables: 1 */

// <034C133F> ../public/vanimlib/ik/iktargetsettings.h:32
// member function: 1
// static member variables: 3
// struct size: 1
struct KV3Transfer_EnumHelpers_t<IKTargetSource> {
	static const bool is_present = 1; /* 0 0 */
	static const enum IKTargetSource ENUM_COUNT = 2; /* 0 0 */
	static const enum IKTargetSource ENUM_DEFAULT; /* 0 0 */
	/* ../public/vanimlib/ik/iktargetsettings.h:32 */
	KV3Transfer_EnumHelpers_StringPairList_t<IKTargetSource> Pairs(void);
};

// <034C6FD4> ../public/vanimlib/ik/iktargetsettings.h:37
// variable: 1
inline void Pairs(void)
{
	KV3Transfer_EnumHelpers_StringPair_t<IKTargetCoordinateSystem> s_Elements; // 37
} /* size: 0, variables: 1 */

// <034C1417> ../public/vanimlib/ik/iktargetsettings.h:37
// member function: 1
// static member variables: 3
// struct size: 1
struct KV3Transfer_EnumHelpers_t<IKTargetCoordinateSystem> {
	static const bool is_present = 1; /* 0 0 */
	static const enum IKTargetCoordinateSystem ENUM_COUNT = 2; /* 0 0 */
	static const enum IKTargetCoordinateSystem ENUM_DEFAULT; /* 0 0 */
	/* ../public/vanimlib/ik/iktargetsettings.h:37 */
	KV3Transfer_EnumHelpers_StringPairList_t<IKTargetCoordinateSystem> Pairs(void);
};

// <0331E126> ../public/vanimlib/ik/iktargetsettings.h:42
void IKTargetSettings_t::IKTargetSettings_t()
{
} /* size: 0 */

// <0331E10A> ../public/vanimlib/ik/iktargetsettings.h:42
inline void IKTargetSettings_t::IKTargetSettings_t()
{
} /* size: 0 */

// <0331DDE8> ../public/vanimlib/ik/iktargetsettings.h:42
void IKTargetSettings_t::IKTargetSettings_t(const IKTargetSettings_t &)
{
} /* size: 0 */

// <0331DDC7> ../public/vanimlib/ik/iktargetsettings.h:42
inline void IKTargetSettings_t::IKTargetSettings_t(const IKTargetSettings_t &)
{
} /* size: 0 */

// <0331D6B5> ../public/vanimlib/ik/iktargetsettings.h:42
inline void IKTargetSettings_t::operator=(const IKTargetSettings_t &)
{
} /* size: 0 */

// <032D02C0> ../public/vanimlib/ik/iktargetsettings.h:42
void IKTargetSettings_t::~IKTargetSettings_t()
{
} /* size: 0 */

// <032D02A4> ../public/vanimlib/ik/iktargetsettings.h:42
inline void IKTargetSettings_t::~IKTargetSettings_t()
{
} /* size: 0 */

// <000461FD> ../public/vanimlib/ik/iktargetsettings.h:42
// member functions: 15
// member variables: 4
// static member variable: 1
// struct size: 32
struct IKTargetSettings_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	IKTargetSettings_t* Schema_MarkHelperFn(void);
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	void Schema_CompileTimeVerificationFunction(IKTargetSettings_t* );
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	const char* Schema_StaticClassname(void);
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	const CSchemaClassInfo* Schema_DynamicBinding(const IKTargetSettings_t* );
	/* ../public/vanimlib/ik/iktargetsettings.h:47 */
	void KV3TransferSave(const IKTargetSettings_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/iktargetsettings.h:48 */
	void KV3TransferLoad(IKTargetSettings_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/iktargetsettings.h:50 */
	bool Initialize(IKTargetSettings_t* , const CModel* , const CSpaceAgnosticBoneAccessor& );
	/* ../public/vanimlib/ik/iktargetsettings.h:61 */
	CTransform GetTarget(const IKTargetSettings_t* , const CModel* , const IPoseAccessor* , const CTransform* );
	IKTargetSource m_TargetSource; /* 0 4 */
	IKBoneNameAndIndex_t m_Bone; /* 8 16 */
	AnimParamID m_AnimgraphParameterNamePosition; /* 24 4 */
	IKTargetCoordinateSystem m_TargetCoordSystem; /* 28 4 */
	/* ../public/vanimlib/ik/iktargetsettings.h:82 */
	PropertyChangeDirtyResult_t OnTargetSourceChanged(void* );
	/* ../public/vanimlib/ik/iktargetsettings.h:83 */
	PropertyAttrState_t VisibleIfUsesBone(void* );
	/* ../public/vanimlib/ik/iktargetsettings.h:84 */
	PropertyAttrState_t VisibleIfUsesAnimgraphParameter(void* );
};

// <0022FA3B> ../public/vanimlib/ik/iktargetsettings.h:42
// member functions: 18
// member variables: 4
// static member variable: 1
// struct size: 32
struct IKTargetSettings_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	IKTargetSettings_t* Schema_MarkHelperFn(void);
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	void Schema_CompileTimeVerificationFunction(IKTargetSettings_t* );
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	const char* Schema_StaticClassname(void);
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	const CSchemaClassInfo* Schema_DynamicBinding(const IKTargetSettings_t* );
	/* ../public/vanimlib/ik/iktargetsettings.h:47 */
	void KV3TransferSave(const IKTargetSettings_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/iktargetsettings.h:48 */
	void KV3TransferLoad(IKTargetSettings_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/iktargetsettings.h:50 */
	bool Initialize(IKTargetSettings_t* , const CModel* , const CSpaceAgnosticBoneAccessor& );
	/* ../public/vanimlib/ik/iktargetsettings.h:61 */
	CTransform GetTarget(const IKTargetSettings_t* , const CModel* , const IPoseAccessor* , const CTransform* );
	IKTargetSource m_TargetSource; /* 0 4 */
	IKBoneNameAndIndex_t m_Bone; /* 8 16 */
	AnimParamID m_AnimgraphParameterNamePosition; /* 24 4 */
	IKTargetCoordinateSystem m_TargetCoordSystem; /* 28 4 */
	/* ../public/vanimlib/ik/iktargetsettings.h:82 */
	PropertyChangeDirtyResult_t OnTargetSourceChanged(void* );
	/* ../public/vanimlib/ik/iktargetsettings.h:83 */
	PropertyAttrState_t VisibleIfUsesBone(void* );
	/* ../public/vanimlib/ik/iktargetsettings.h:84 */
	PropertyAttrState_t VisibleIfUsesAnimgraphParameter(void* );
	IKTargetSettings_t& operator=(IKTargetSettings_t* , const IKTargetSettings_t& );
	void ~IKTargetSettings_t(IKTargetSettings_t* );
	void IKTargetSettings_t(IKTargetSettings_t* );
};

// <00584249> ../public/vanimlib/ik/iktargetsettings.h:42
// member functions: 18
// member variables: 4
// static member variable: 1
// struct size: 32
struct IKTargetSettings_t {
	/* ../public/vanimlib/ik/iktargetsettings.h:46 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	IKTargetSettings_t* Schema_MarkHelperFn(void);
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	void Schema_CompileTimeVerificationFunction(IKTargetSettings_t* );
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	const char* Schema_StaticClassname(void);
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	const CSchemaClassInfo* Schema_DynamicBinding(const IKTargetSettings_t* );
	/* ../public/vanimlib/ik/iktargetsettings.h:47 */
	void KV3TransferSave(const IKTargetSettings_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/iktargetsettings.h:48 */
	void KV3TransferLoad(IKTargetSettings_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/iktargetsettings.h:50 */
	bool Initialize(IKTargetSettings_t* , const CModel* , const CSpaceAgnosticBoneAccessor& );
	/* ../public/vanimlib/ik/iktargetsettings.h:61 */
	CTransform GetTarget(const IKTargetSettings_t* , const CModel* , const IPoseAccessor* , const CTransform* );
	IKTargetSource m_TargetSource; /* 0 4 */
	IKBoneNameAndIndex_t m_Bone; /* 8 16 */
	AnimParamID m_AnimgraphParameterNamePosition; /* 24 4 */
	IKTargetCoordinateSystem m_TargetCoordSystem; /* 28 4 */
	/* ../public/vanimlib/ik/iktargetsettings.h:82 */
	PropertyChangeDirtyResult_t OnTargetSourceChanged(void* );
	/* ../public/vanimlib/ik/iktargetsettings.h:83 */
	PropertyAttrState_t VisibleIfUsesBone(void* );
	/* ../public/vanimlib/ik/iktargetsettings.h:84 */
	PropertyAttrState_t VisibleIfUsesAnimgraphParameter(void* );
	IKTargetSettings_t& operator=(IKTargetSettings_t* , const IKTargetSettings_t& );
	void ~IKTargetSettings_t(IKTargetSettings_t* );
	void IKTargetSettings_t(IKTargetSettings_t* );
};

// <016EB543> ../public/vanimlib/ik/iktargetsettings.h:42
// member functions: 16
// member variables: 4
// static member variable: 1
// struct size: 32
struct IKTargetSettings_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	IKTargetSettings_t* Schema_MarkHelperFn(void);
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	void Schema_CompileTimeVerificationFunction(IKTargetSettings_t* );
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	const char* Schema_StaticClassname(void);
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	const CSchemaClassInfo* Schema_DynamicBinding(const IKTargetSettings_t* );
	/* ../public/vanimlib/ik/iktargetsettings.h:47 */
	void KV3TransferSave(const IKTargetSettings_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/iktargetsettings.h:48 */
	void KV3TransferLoad(IKTargetSettings_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/iktargetsettings.h:50 */
	bool Initialize(IKTargetSettings_t* , const CModel* , const CSpaceAgnosticBoneAccessor& );
	/* ../public/vanimlib/ik/iktargetsettings.h:61 */
	CTransform GetTarget(const IKTargetSettings_t* , const CModel* , const IPoseAccessor* , const CTransform* );
	IKTargetSource m_TargetSource; /* 0 4 */
	IKBoneNameAndIndex_t m_Bone; /* 8 16 */
	AnimParamID m_AnimgraphParameterNamePosition; /* 24 4 */
	IKTargetCoordinateSystem m_TargetCoordSystem; /* 28 4 */
	/* ../public/vanimlib/ik/iktargetsettings.h:82 */
	PropertyChangeDirtyResult_t OnTargetSourceChanged(void* );
	/* ../public/vanimlib/ik/iktargetsettings.h:83 */
	PropertyAttrState_t VisibleIfUsesBone(void* );
	/* ../public/vanimlib/ik/iktargetsettings.h:84 */
	PropertyAttrState_t VisibleIfUsesAnimgraphParameter(void* );
	void ~IKTargetSettings_t(IKTargetSettings_t* );
};

// <018EF37C> ../public/vanimlib/ik/iktargetsettings.h:42
// member functions: 16
// member variables: 4
// static member variable: 1
// struct size: 32
struct IKTargetSettings_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	IKTargetSettings_t* Schema_MarkHelperFn(void);
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	void Schema_CompileTimeVerificationFunction(IKTargetSettings_t* );
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	const char* Schema_StaticClassname(void);
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	const CSchemaClassInfo* Schema_DynamicBinding(const IKTargetSettings_t* );
	/* ../public/vanimlib/ik/iktargetsettings.h:47 */
	void KV3TransferSave(const IKTargetSettings_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/iktargetsettings.h:48 */
	void KV3TransferLoad(IKTargetSettings_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/iktargetsettings.h:50 */
	bool Initialize(IKTargetSettings_t* , const CModel* , const CSpaceAgnosticBoneAccessor& );
	/* ../public/vanimlib/ik/iktargetsettings.h:61 */
	CTransform GetTarget(const IKTargetSettings_t* , const CModel* , const IPoseAccessor* , const CTransform* );
	IKTargetSource m_TargetSource; /* 0 4 */
	IKBoneNameAndIndex_t m_Bone; /* 8 16 */
	AnimParamID m_AnimgraphParameterNamePosition; /* 24 4 */
	IKTargetCoordinateSystem m_TargetCoordSystem; /* 28 4 */
	/* ../public/vanimlib/ik/iktargetsettings.h:82 */
	PropertyChangeDirtyResult_t OnTargetSourceChanged(void* );
	/* ../public/vanimlib/ik/iktargetsettings.h:83 */
	PropertyAttrState_t VisibleIfUsesBone(void* );
	/* ../public/vanimlib/ik/iktargetsettings.h:84 */
	PropertyAttrState_t VisibleIfUsesAnimgraphParameter(void* );
	void IKTargetSettings_t(IKTargetSettings_t* );
};

// <03314CE5> ../public/vanimlib/ik/iktargetsettings.h:42
// member functions: 18
// member variables: 4
// static member variable: 1
// struct size: 32
struct IKTargetSettings_t {
	/* ../public/vanimlib/ik/iktargetsettings.h:46 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	IKTargetSettings_t* Schema_MarkHelperFn(void);
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	void Schema_CompileTimeVerificationFunction(IKTargetSettings_t* );
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	const char* Schema_StaticClassname(void);
	/* ../public/vanimlib/ik/iktargetsettings.h:44 */
	const CSchemaClassInfo* Schema_DynamicBinding(const IKTargetSettings_t* );
	/* ../public/vanimlib/ik/iktargetsettings.h:47 */
	void KV3TransferSave(const IKTargetSettings_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/iktargetsettings.h:48 */
	void KV3TransferLoad(IKTargetSettings_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/iktargetsettings.h:50 */
	bool Initialize(IKTargetSettings_t* , const CModel* , const CSpaceAgnosticBoneAccessor& );
	/* ../public/vanimlib/ik/iktargetsettings.h:61 */
	CTransform GetTarget(const IKTargetSettings_t* , const CModel* , const IPoseAccessor* , const CTransform* );
	IKTargetSource m_TargetSource; /* 0 4 */
	IKBoneNameAndIndex_t m_Bone; /* 8 16 */
	AnimParamID m_AnimgraphParameterNamePosition; /* 24 4 */
	IKTargetCoordinateSystem m_TargetCoordSystem; /* 28 4 */
	/* ../public/vanimlib/ik/iktargetsettings.h:82 */
	PropertyChangeDirtyResult_t OnTargetSourceChanged(void* );
	/* ../public/vanimlib/ik/iktargetsettings.h:83 */
	PropertyAttrState_t VisibleIfUsesBone(void* );
	/* ../public/vanimlib/ik/iktargetsettings.h:84 */
	PropertyAttrState_t VisibleIfUsesAnimgraphParameter(void* );
	IKTargetSettings_t& operator=(IKTargetSettings_t* , const IKTargetSettings_t& );
	void IKTargetSettings_t(IKTargetSettings_t* , const IKTargetSettings_t& );
	void IKTargetSettings_t(IKTargetSettings_t* );
};

// <00D20871> ../public/vanimlib/ik/iktargetsettings.h:44
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <00D2086A> ../public/vanimlib/ik/iktargetsettings.h:44
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <00D20851> ../public/vanimlib/ik/iktargetsettings.h:44
inline void IKTargetSettings_t::Schema_DynamicBinding()
{
} /* size: 0 */

