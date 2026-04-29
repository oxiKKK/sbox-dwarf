
//
// public/rendersystem/rendersystemtypes.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libvfx_vulkan.so
//
//	functions: 34
//	classes: 3
//	structs: 34
//

// <000975CA> ../public/rendersystem/rendersystemtypes.h:17
// member variable: 1
// struct size: 4
struct RenderInputLayout_t__ {
	int unused; /* 0 4 */
};

// <0000BD8E> ../public/rendersystem/rendersystemtypes.h:24
// member variable: 1
// struct size: 4
struct RenderResourceHandle_t__ {
	int unused; /* 0 4 */
};

// <00042271> ../public/rendersystem/rendersystemtypes.h:31
// member variable: 1
// struct size: 4
struct SwapChainHandle_t__ {
	int unused; /* 0 4 */
};

// <000422A0> ../public/rendersystem/rendersystemtypes.h:38
// member variable: 1
// struct size: 4
struct VertexBufferHandle_t__ : public RenderResourceHandle_t__ {
public:
	/* struct RenderResourceHandle_t__ <ancestor>; */ /* 0 4 */
};

// <000422C9> ../public/rendersystem/rendersystemtypes.h:39
// member variable: 1
// struct size: 4
struct IndexBufferHandle_t__ : public RenderResourceHandle_t__ {
public:
	/* struct RenderResourceHandle_t__ <ancestor>; */ /* 0 4 */
};

// <000422F2> ../public/rendersystem/rendersystemtypes.h:40
// member variable: 1
// struct size: 4
struct RenderBufferHandle_t__ : public RenderResourceHandle_t__ {
public:
	/* struct RenderResourceHandle_t__ <ancestor>; */ /* 0 4 */
};

// <001356BF> ../public/rendersystem/rendersystemtypes.h:49
// member variable: 1
// struct size: 4
struct PooledIndexBufferHandle_t__ : public RenderResourceHandle_t__ {
public:
	/* struct RenderResourceHandle_t__ <ancestor>; */ /* 0 4 */
};

// <000976D2> ../public/rendersystem/rendersystemtypes.h:56
// member variable: 1
// struct size: 4
struct DynamicVertexBufferHandle_t__ {
	int unused; /* 0 4 */
};

// <00097701> ../public/rendersystem/rendersystemtypes.h:57
// member variable: 1
// struct size: 4
struct DynamicIndexBufferHandle_t__ {
	int unused; /* 0 4 */
};

// <0004231B> ../public/rendersystem/rendersystemtypes.h:66
// member variable: 1
// struct size: 4
struct ConstantBufferHandle_t__ : public RenderResourceHandle_t__ {
public:
	/* struct RenderResourceHandle_t__ <ancestor>; */ /* 0 4 */
};

// <0009775E> ../public/rendersystem/rendersystemtypes.h:72
// member variable: 1
// struct size: 4
struct RenderShaderHandle_t__ : public RenderResourceHandle_t__ {
public:
	/* struct RenderResourceHandle_t__ <ancestor>; */ /* 0 4 */
};

// <0000BDAB> ../public/rendersystem/rendersystemtypes.h:78
// member variable: 1
// struct size: 4
struct RenderSemaphoreHandle_t__ : public RenderResourceHandle_t__ {
public:
	/* struct RenderResourceHandle_t__ <ancestor>; */ /* 0 4 */
};

// <00042372> ../public/rendersystem/rendersystemtypes.h:84
// member variable: 1
// struct size: 4
struct RenderDescriptorSetHandle_t__ : public RenderResourceHandle_t__ {
public:
	/* struct RenderResourceHandle_t__ <ancestor>; */ /* 0 4 */
};

// <0347F9CA> ../public/rendersystem/rendersystemtypes.h:90
void RenderPassHandle_t::RenderPassHandle_t()
{
} /* size: 0 */

// <0347F9B1> ../public/rendersystem/rendersystemtypes.h:90
inline void RenderPassHandle_t::RenderPassHandle_t()
{
} /* size: 0 */

// <00ADC6F5> ../public/rendersystem/rendersystemtypes.h:90
void RenderPassHandle_t::RenderPassHandle_t(int32 value)
{
} /* size: 0 */

// <00ADC6D0> ../public/rendersystem/rendersystemtypes.h:90
inline void RenderPassHandle_t::RenderPassHandle_t(int32 value)
{
} /* size: 0 */

// <00ADC6B7> ../public/rendersystem/rendersystemtypes.h:90
inline void RenderPassHandle_t::GetRaw()
{
} /* size: 0 */

// <00A5B936> ../public/rendersystem/rendersystemtypes.h:90
inline void RenderPassHandle_t::operator==(const RenderPassHandle_t& other)
{
} /* size: 0 */

// <000977DE> ../public/rendersystem/rendersystemtypes.h:90
// member functions: 30
// member variable: 1
// static member variables: 2
// class size: 4
class RenderPassHandle_t {
	static const enum TypeSafeIntCheckFlag_t CheckValue; /* 0 0 */
	static const bool IS_TYPESAFE_INTEGER = 1; /* 0 0 */
	/* ../public/rendersystem/rendersystemtypes.h:90 */
	const char* GetTypeName(void);
	/* ../public/rendersystem/rendersystemtypes.h:90 */
	void RenderPassHandle_t(RenderPassHandle_t* );
	/* ../public/rendersystem/rendersystemtypes.h:90 */
	void RenderPassHandle_t(RenderPassHandle_t* , int32);
	/* ../public/rendersystem/rendersystemtypes.h:90 */
	void SetRaw(RenderPassHandle_t* , int32);
	/* ../public/rendersystem/rendersystemtypes.h:90 */
	int32 GetRaw(const RenderPassHandle_t* );
	/* ../public/rendersystem/rendersystemtypes.h:90 */
	int32& GetRawRef(RenderPassHandle_t* );
	/* ../public/rendersystem/rendersystemtypes.h:90 */
	const int32& GetRawRef(const RenderPassHandle_t* );
	/* ../public/rendersystem/rendersystemtypes.h:90 */
	int32* GetRawPtrForWrite(RenderPassHandle_t* );
	/* ../public/rendersystem/rendersystemtypes.h:90 */
	bool operator==(const RenderPassHandle_t* , const RenderPassHandle_t& );
	/* ../public/rendersystem/rendersystemtypes.h:90 */
	strong_ordering operator<=>(const RenderPassHandle_t* , const RenderPassHandle_t& );
	/* ../public/rendersystem/rendersystemtypes.h:90 */
	RenderPassHandle_t& operator++(RenderPassHandle_t* );
	/* ../public/rendersystem/rendersystemtypes.h:90 */
	RenderPassHandle_t operator++(RenderPassHandle_t* , int);
	/* ../public/rendersystem/rendersystemtypes.h:90 */
	RenderPassHandle_t& operator--(RenderPassHandle_t* );
	/* ../public/rendersystem/rendersystemtypes.h:90 */
	RenderPassHandle_t operator--(RenderPassHandle_t* , int);
private:
	int32 m_Value; /* 0 4 */
	/* ../public/rendersystem/rendersystemtypes.h:90 */
	RenderPassHandle_t& operator=(RenderPassHandle_t* , int32);
	const char  * GetTypeName(void); /* linkage=_ZN18RenderPassHandle_t11GetTypeNameEv */
	void RenderPassHandle_t(class RenderPassHandle_t *); /* linkage=_ZN18RenderPassHandle_tC4Ev */
	void RenderPassHandle_t(class RenderPassHandle_t *, int32); /* linkage=_ZN18RenderPassHandle_tC4Ei */
	void SetRaw(class RenderPassHandle_t *, int32); /* linkage=_ZN18RenderPassHandle_t6SetRawEi */
	int32 GetRaw(const class RenderPassHandle_t  *); /* linkage=_ZNK18RenderPassHandle_t6GetRawEv */
	int32 & GetRawRef(class RenderPassHandle_t *); /* linkage=_ZN18RenderPassHandle_t9GetRawRefEv */
	const int32  & GetRawRef(const class RenderPassHandle_t  *); /* linkage=_ZNK18RenderPassHandle_t9GetRawRefEv */
	int32 * GetRawPtrForWrite(class RenderPassHandle_t *); /* linkage=_ZN18RenderPassHandle_t17GetRawPtrForWriteEv */
	bool operator==(const class RenderPassHandle_t  *, const class RenderPassHandle_t  &); /* linkage=_ZNK18RenderPassHandle_teqERKS_ */
	class strong_ordering operator<=>(const class RenderPassHandle_t  *, const class RenderPassHandle_t  &); /* linkage=_ZNK18RenderPassHandle_tssERKS_ */
	class RenderPassHandle_t & operator++(class RenderPassHandle_t *); /* linkage=_ZN18RenderPassHandle_tppEv */
	class RenderPassHandle_t operator++(class RenderPassHandle_t *, int); /* linkage=_ZN18RenderPassHandle_tppEi */
	class RenderPassHandle_t & operator--(class RenderPassHandle_t *); /* linkage=_ZN18RenderPassHandle_tmmEv */
	class RenderPassHandle_t operator--(class RenderPassHandle_t *, int); /* linkage=_ZN18RenderPassHandle_tmmEi */
	class RenderPassHandle_t & operator=(class RenderPassHandle_t *, int32); /* linkage=_ZN18RenderPassHandle_taSEi */
};

// <01156800> ../public/rendersystem/rendersystemtypes.h:96
// member variable: 1
// struct size: 4
struct SamplerStateHandle_t__ {
	int unused; /* 0 4 */
};

// <00097A35> ../public/rendersystem/rendersystemtypes.h:102
// member variable: 1
// struct size: 4
struct RenderBLASHandle_t__ : public RenderResourceHandle_t__ {
public:
	/* struct RenderResourceHandle_t__ <ancestor>; */ /* 0 4 */
};

// <00097A5E> ../public/rendersystem/rendersystemtypes.h:105
// member variable: 1
// struct size: 4
struct RenderTLASHandle_t__ : public RenderResourceHandle_t__ {
public:
	/* struct RenderResourceHandle_t__ <ancestor>; */ /* 0 4 */
};

// <00097A87> ../public/rendersystem/rendersystemtypes.h:108
// member variable: 1
// struct size: 4
struct RenderRayTracePipelineHandle_t__ : public RenderResourceHandle_t__ {
public:
	/* struct RenderResourceHandle_t__ <ancestor>; */ /* 0 4 */
};

// <041EB93C> ../public/rendersystem/rendersystemtypes.h:118
// member functions: 2
// class size: 1
class CSchemaTypeOf<RenderSlotType_t> {
	/* ../public/rendersystem/rendersystemtypes.h:118 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
	/* ../public/rendersystem/rendersystemtypes.h:118 */
	const char* GetEnumName(void);
};

// <0524AAB6> ../public/rendersystem/rendersystemtypes.h:186
inline void Get(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <04F05C8E> ../public/rendersystem/rendersystemtypes.h:186
// member functions: 2
// class size: 1
class CSchemaTypeOf<RenderPrimitiveType_t> {
	/* ../public/rendersystem/rendersystemtypes.h:186 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
	/* ../public/rendersystem/rendersystemtypes.h:186 */
	const char* GetEnumName(void);
};

// <00097C40> ../public/rendersystem/rendersystemtypes.h:206
// member functions: 12
// member variables: 7
// static member variable: 1
// struct size: 56
struct RenderInputLayoutField_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/rendersystem/rendersystemtypes.h:208 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/rendersystem/rendersystemtypes.h:208 */
	RenderInputLayoutField_t* Schema_MarkHelperFn(void);
	/* ../public/rendersystem/rendersystemtypes.h:208 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/rendersystem/rendersystemtypes.h:208 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/rendersystem/rendersystemtypes.h:208 */
	void Schema_CompileTimeVerificationFunction(RenderInputLayoutField_t* );
	/* ../public/rendersystem/rendersystemtypes.h:208 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/rendersystem/rendersystemtypes.h:208 */
	const char* Schema_StaticClassname(void);
	/* ../public/rendersystem/rendersystemtypes.h:208 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RenderInputLayoutField_t* );
	uint8 m_pSemanticName[32]; /* 0 32 */
	int32 m_nSemanticIndex; /* 32 4 */
	uint32 m_Format; /* 36 4 */
	int32 m_nOffset; /* 40 4 */
	int32 m_nSlot; /* 44 4 */
	RenderSlotType_t m_nSlotType; /* 48 4 */
	int32 m_nInstanceStepRate; /* 52 4 */
	/* ../public/rendersystem/rendersystemtypes.h:227 */
	void KV3TransferSave(const RenderInputLayoutField_t* , CKV3TransferSaveContext* );
	/* ../public/rendersystem/rendersystemtypes.h:238 */
	void KV3TransferLoad(RenderInputLayoutField_t* , CKV3TransferLoadContext* );
	/* ../public/rendersystem/rendersystemtypes.h:249 */
	bool operator==(const RenderInputLayoutField_t* , const RenderInputLayoutField_t& );
	/* ../public/rendersystem/rendersystemtypes.h:261 */
	bool operator!=(const RenderInputLayoutField_t* , const RenderInputLayoutField_t& );
};

// <041EBAA0> ../public/rendersystem/rendersystemtypes.h:206
// member functions: 12
// member variables: 7
// static member variable: 1
// struct size: 56
struct RenderInputLayoutField_t {
	/* ../public/rendersystem/rendersystemtypes.h:225 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/rendersystem/rendersystemtypes.h:208 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/rendersystem/rendersystemtypes.h:208 */
	RenderInputLayoutField_t* Schema_MarkHelperFn(void);
	/* ../public/rendersystem/rendersystemtypes.h:208 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/rendersystem/rendersystemtypes.h:208 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/rendersystem/rendersystemtypes.h:208 */
	void Schema_CompileTimeVerificationFunction(RenderInputLayoutField_t* );
	/* ../public/rendersystem/rendersystemtypes.h:208 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/rendersystem/rendersystemtypes.h:208 */
	const char* Schema_StaticClassname(void);
	/* ../public/rendersystem/rendersystemtypes.h:208 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RenderInputLayoutField_t* );
	uint8 m_pSemanticName[32]; /* 0 32 */
	int32 m_nSemanticIndex; /* 32 4 */
	uint32 m_Format; /* 36 4 */
	int32 m_nOffset; /* 40 4 */
	int32 m_nSlot; /* 44 4 */
	RenderSlotType_t m_nSlotType; /* 48 4 */
	int32 m_nInstanceStepRate; /* 52 4 */
	/* ../public/rendersystem/rendersystemtypes.h:227 */
	void KV3TransferSave(const RenderInputLayoutField_t* , CKV3TransferSaveContext* );
	/* ../public/rendersystem/rendersystemtypes.h:238 */
	void KV3TransferLoad(RenderInputLayoutField_t* , CKV3TransferLoadContext* );
	/* ../public/rendersystem/rendersystemtypes.h:249 */
	bool operator==(const RenderInputLayoutField_t* , const RenderInputLayoutField_t& );
	/* ../public/rendersystem/rendersystemtypes.h:261 */
	bool operator!=(const RenderInputLayoutField_t* , const RenderInputLayoutField_t& );
};

// <00E1E141> ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:206
// member functions: 12
// member variables: 7
// static member variable: 1
// struct size: 56
struct RenderInputLayoutField_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:208 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:208 */
	RenderInputLayoutField_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:208 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:208 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:208 */
	void Schema_CompileTimeVerificationFunction(RenderInputLayoutField_t* );
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:208 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:208 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:208 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RenderInputLayoutField_t* );
	uint8 m_pSemanticName[32]; /* 0 32 */
	int32 m_nSemanticIndex; /* 32 4 */
	uint32 m_Format; /* 36 4 */
	int32 m_nOffset; /* 40 4 */
	int32 m_nSlot; /* 44 4 */
	RenderSlotType_t m_nSlotType; /* 48 4 */
	int32 m_nInstanceStepRate; /* 52 4 */
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:227 */
	void KV3TransferSave(const RenderInputLayoutField_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:238 */
	void KV3TransferLoad(RenderInputLayoutField_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:249 */
	bool operator==(const RenderInputLayoutField_t* , const RenderInputLayoutField_t& );
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:261 */
	bool operator!=(const RenderInputLayoutField_t* , const RenderInputLayoutField_t& );
};

// <00596A7E> ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:206
// member functions: 12
// member variables: 7
// static member variable: 1
// struct size: 56
struct RenderInputLayoutField_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:208 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:208 */
	RenderInputLayoutField_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:208 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:208 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:208 */
	void Schema_CompileTimeVerificationFunction(RenderInputLayoutField_t* );
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:208 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:208 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:208 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RenderInputLayoutField_t* );
	uint8 m_pSemanticName[32]; /* 0 32 */
	int32 m_nSemanticIndex; /* 32 4 */
	uint32 m_Format; /* 36 4 */
	int32 m_nOffset; /* 40 4 */
	int32 m_nSlot; /* 44 4 */
	RenderSlotType_t m_nSlotType; /* 48 4 */
	int32 m_nInstanceStepRate; /* 52 4 */
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:227 */
	void KV3TransferSave(const RenderInputLayoutField_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:238 */
	void KV3TransferLoad(RenderInputLayoutField_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:249 */
	bool operator==(const RenderInputLayoutField_t* , const RenderInputLayoutField_t& );
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:261 */
	bool operator!=(const RenderInputLayoutField_t* , const RenderInputLayoutField_t& );
};

// <004CFBCE> ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:206
// member functions: 12
// member variables: 7
// static member variable: 1
// struct size: 56
struct RenderInputLayoutField_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:208 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:208 */
	RenderInputLayoutField_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:208 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:208 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:208 */
	void Schema_CompileTimeVerificationFunction(RenderInputLayoutField_t* );
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:208 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:208 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:208 */
	const CSchemaClassInfo* Schema_DynamicBinding(const RenderInputLayoutField_t* );
	uint8 m_pSemanticName[32]; /* 0 32 */
	int32 m_nSemanticIndex; /* 32 4 */
	uint32 m_Format; /* 36 4 */
	int32 m_nOffset; /* 40 4 */
	int32 m_nSlot; /* 44 4 */
	RenderSlotType_t m_nSlotType; /* 48 4 */
	int32 m_nInstanceStepRate; /* 52 4 */
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:227 */
	void KV3TransferSave(const RenderInputLayoutField_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:238 */
	void KV3TransferLoad(RenderInputLayoutField_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:249 */
	bool operator==(const RenderInputLayoutField_t* , const RenderInputLayoutField_t& );
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:261 */
	bool operator!=(const RenderInputLayoutField_t* , const RenderInputLayoutField_t& );
};

// <0427E7A7> ../public/rendersystem/rendersystemtypes.h:208
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <00E2231C> ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:208
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <00E222FD> ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:208
inline void RenderInputLayoutField_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <0427D44E> ../public/rendersystem/rendersystemtypes.h:227
// function calls: 69
void RenderInputLayoutField_t::KV3TransferSave(CKV3TransferSaveContext* pContext)
{
	CKV3MemberName::CKV3MemberName<16>(
				const char& str);  // 229
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 164
	SaveValue<unsigned char [32]>(CKV3TransferSaveContext* pContext,
					KeyValues3* pSaveToValue,
					const byte* value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<unsigned char [32]>(
						const unsigned char& sourceValue,
						KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<unsigned char [32]>(
						CKV3MemberName memberNameAndHash,
						const unsigned char& sourceValue);  // 229
	CKV3MemberName::CKV3MemberName<17>(
				const char& str);  // 230
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 164
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 772
	SaveValue<int>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const int32& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<int>(
				const int& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<int>(
				CKV3MemberName memberNameAndHash,
				const int& sourceValue);  // 230
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<9>(
				const char& str);  // 231
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 164
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 773
	SaveValue<unsigned int>(CKV3TransferSaveContext* pContext,
				KeyValues3* pSaveToValue,
				const uint32& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<unsigned int>(
					const unsigned int& sourceValue,
					KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<unsigned int>(
					CKV3MemberName memberNameAndHash,
					const unsigned int& sourceValue);  // 231
	CKV3MemberName::CKV3MemberName<10>(
				const char& str);  // 232
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 164
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 772
	SaveValue<int>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const int32& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<int>(
				const int& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<int>(
				CKV3MemberName memberNameAndHash,
				const int& sourceValue);  // 232
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<8>(
				const char& str);  // 233
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 164
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 772
	SaveValue<int>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const int32& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<int>(
				const int& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<int>(
				CKV3MemberName memberNameAndHash,
				const int& sourceValue);  // 233
	CKV3MemberName::CKV3MemberName<12>(
				const char& str);  // 234
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 164
	SchemaTypeScope(void); // 23
	Get(ISchemaSystemTypeScope* pTypeScope); // 23
	SchemaTypeOf<RenderSlotType_t>(void); // 13
	CSchemaType::InternalAs(
			SchemaTypeCategory_t nTypeCategory,
			SchemaAtomicCategory_t nAtomicCategory);  // 125
	CSchemaType::As<CSchemaType_DeclaredEnum>(); // 13
	CUtlString::Get(); // 72
	CSchemaType::GetName(); // 744
	CSchemaType_DeclaredEnum::LookupEnum(); // 740
	CSchemaType_DeclaredEnum::LookupEnum(); // 709
	CSchemaType_DeclaredEnum::GetEnum(); // 14
	CSchemaEnumeratorInfo::GetName(); // 18
	SchemaEnumeratorNameFromValue<RenderSlotType_t>(RenderSlotType_t nValue,
							const char* pDefault);  // 72
	KV3Transfer_EnumeratorNameFromValue<RenderSlotType_t>(RenderSlotType_t nValue); // 511
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 526
	SaveValue<RenderSlotType_t>(CKV3TransferSaveContext* pContext,
					KeyValues3* pSaveToValue,
					const RenderSlotType_t& value,
					type *);  // 509
	SaveValue<RenderSlotType_t>(CKV3TransferSaveContext* pContext,
					KeyValues3* pSaveToValue,
					const RenderSlotType_t& value,
					type *);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<RenderSlotType_t>(
						const RenderSlotType_t& sourceValue,
						KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<RenderSlotType_t>(
						CKV3MemberName memberNameAndHash,
						const RenderSlotType_t& sourceValue);  // 234
	CKV3MemberName::CKV3MemberName<20>(
				const char& str);  // 235
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 164
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 772
	SaveValue<int>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const int32& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<int>(
				const int& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<int>(
				CKV3MemberName memberNameAndHash,
				const int& sourceValue);  // 235
} /* size: 0, inline expansions: 69 (0 bytes) */

// <0427ACDF> ../public/rendersystem/rendersystemtypes.h:238
// variables: 20
// function calls: 134
void RenderInputLayoutField_t::KV3TransferLoad(CKV3TransferLoadContext* pContext)
{
	CKV3MemberName::CKV3MemberName<16>(
				const char& str);  // 240
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1242
	{
		byte* pValues; // 1249
		int i; // 1250
		{
			int i; // 120
			KeyValues3::GetValueInt(); // 769
			LoadValue<unsigned char>(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						uint8& value);  // 1548
			CKV3TransferLoadContext::LoadValueDirect<unsigned char>(
							unsigned char& destValue,
							const KeyValues3* pLoadFromMember);  // 1252
			operator()(const class* __closure,
					int element,
					const KeyValues3* pArrayElement); // 1250
			operator()(const class* __closure,
					int element,
					const KeyValues3* pArrayElement); // 122
		}
		KeyValues3::IterateArrayElements<CKV3TransferValHelper<unsigned char [32], void>::LoadValue<unsigned char [32]>(
																class& callback);  // 1250
		{
			KeyValues3 nullValue; // 1259
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 696
			{
			}
			KV3Helper_StringToNumber<int>(const char* pString); // 715
			KeyValues3::GetValueAsNumeric<int>(); // 694
			KeyValues3::GetValueAsNumeric<int>(); // 184
			KeyValues3::GetValueInt(); // 769
			LoadValue<unsigned char>(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						uint8& value);  // 1548
			CKV3TransferLoadContext::LoadValueDirect<unsigned char>(
							unsigned char& destValue,
							const KeyValues3* pLoadFromMember);  // 1260
		}
	}
	{
		int nCount; // 1244
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 1245
	}
	LoadValue<unsigned char [32]>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					byte* value);  // 1240
	LoadValue<unsigned char [32]>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					byte* value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<unsigned char [32]>(
						unsigned char& destValue,
						const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1242
		{
			byte* pValues; // 1249
			int i; // 1250
			{
				int i; // 120
				KeyValues3::GetValueInt(); // 769
				LoadValue<unsigned char>(CKV3TransferLoadContext* pContext,
							const KeyValues3* pLoadFromValue,
							uint8& value);  // 1548
				CKV3TransferLoadContext::LoadValueDirect<unsigned char>(
								unsigned char& destValue,
								const KeyValues3* pLoadFromMember);  // 1252
				operator()(const class* __closure,
						int element,
						const KeyValues3* pArrayElement); // 1250
				operator()(const class* __closure,
						int element,
						const KeyValues3* pArrayElement); // 122
			}
			KeyValues3::IterateArrayElements<CKV3TransferValHelper<unsigned char [32], void>::LoadValue<unsigned char [32]>(
																class& callback);  // 1250
			{
				KeyValues3 nullValue; // 1259
				KeyValues3::GetValueInt(); // 769
				LoadValue<unsigned char>(CKV3TransferLoadContext* pContext,
							const KeyValues3* pLoadFromValue,
							uint8& value);  // 1548
				CKV3TransferLoadContext::LoadValueDirect<unsigned char>(
								unsigned char& destValue,
								const KeyValues3* pLoadFromMember);  // 1260
			}
		}
		{
			int nCount; // 1244
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 1245
		}
		LoadValue<unsigned char [32]>(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						byte* value);  // 1240
		LoadValue<unsigned char [32]>(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						byte* value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<unsigned char [32]>(
							unsigned char& destValue,
							const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<unsigned char [32]>(
						CKV3MemberName memberNameAndHash,
						unsigned char& destValue,
						uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<unsigned char [32]>(
						CKV3MemberName memberNameAndHash,
						unsigned char& destValue,
						uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<unsigned char [32]>(
						CKV3MemberName memberNameAndHash,
						unsigned char& destValue);  // 240
	CKV3MemberName::CKV3MemberName<17>(
				const char& str);  // 241
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	KeyValues3::GetValueInt(); // 772
	LoadValue<int>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			int32& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<int>(
				int& destValue,
				const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		KeyValues3::GetValueInt(); // 772
		LoadValue<int>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				int32& value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<int>(
					int& destValue,
					const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<int>(
				CKV3MemberName memberNameAndHash,
				int& destValue,
				uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<int>(
				CKV3MemberName memberNameAndHash,
				int& destValue,
				uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<int>(
				CKV3MemberName memberNameAndHash,
				int& destValue);  // 241
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<9>(
				const char& str);  // 242
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	KeyValues3::GetValueInt64(); // 773
	LoadValue<unsigned int>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				uint32& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<unsigned int>(
					unsigned int& destValue,
					const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		KeyValues3::GetValueInt64(); // 773
		LoadValue<unsigned int>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					uint32& value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<unsigned int>(
						unsigned int& destValue,
						const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<unsigned int>(
						CKV3MemberName memberNameAndHash,
						unsigned int& destValue,
						uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<unsigned int>(
						CKV3MemberName memberNameAndHash,
						unsigned int& destValue,
						uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<unsigned int>(
						CKV3MemberName memberNameAndHash,
						unsigned int& destValue);  // 242
	CKV3MemberName::CKV3MemberName<10>(
				const char& str);  // 243
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	KeyValues3::GetValueInt(); // 772
	LoadValue<int>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			int32& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<int>(
				int& destValue,
				const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		KeyValues3::GetValueInt(); // 772
		LoadValue<int>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				int32& value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<int>(
					int& destValue,
					const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<int>(
				CKV3MemberName memberNameAndHash,
				int& destValue,
				uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<int>(
				CKV3MemberName memberNameAndHash,
				int& destValue,
				uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<int>(
				CKV3MemberName memberNameAndHash,
				int& destValue);  // 243
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<8>(
				const char& str);  // 244
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	KeyValues3::GetValueInt(); // 772
	LoadValue<int>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			int32& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<int>(
				int& destValue,
				const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		KeyValues3::GetValueInt(); // 772
		LoadValue<int>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				int32& value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<int>(
					int& destValue,
					const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<int>(
				CKV3MemberName memberNameAndHash,
				int& destValue,
				uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<int>(
				CKV3MemberName memberNameAndHash,
				int& destValue,
				uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<int>(
				CKV3MemberName memberNameAndHash,
				int& destValue);  // 244
	CKV3MemberName::CKV3MemberName<12>(
				const char& str);  // 245
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 534
	KeyValues3::GetValueInt64(); // 543
	KV3Transfer_EnumeratorValueFromName<RenderSlotType_t>(const char* pEnumeratorName,
								RenderSlotType_t* pOutValue);  // 536
	LoadValue<RenderSlotType_t>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					RenderSlotType_t& value,
					type *);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<RenderSlotType_t>(
						RenderSlotType_t& destValue,
						const KeyValues3* pLoadFromMember);  // 292
	CKV3TransferLoadContext::LoadValueFromMember<RenderSlotType_t>(
						CKV3MemberName memberNameAndHash,
						RenderSlotType_t& destValue,
						uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<RenderSlotType_t>(
						CKV3MemberName memberNameAndHash,
						RenderSlotType_t& destValue);  // 245
	CKV3MemberName::CKV3MemberName<20>(
				const char& str);  // 246
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	KeyValues3::GetValueInt(); // 772
	LoadValue<int>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			int32& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<int>(
				int& destValue,
				const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		KeyValues3::GetValueInt(); // 772
		LoadValue<int>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				int32& value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<int>(
					int& destValue,
					const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<int>(
				CKV3MemberName memberNameAndHash,
				int& destValue,
				uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<int>(
				CKV3MemberName memberNameAndHash,
				int& destValue,
				uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<int>(
				CKV3MemberName memberNameAndHash,
				int& destValue);  // 246
} /* size: 1855, inline expansions: 85 (5298 bytes) */

// <02F2A18A> ../public/rendersystem/rendersystemtypes.h:286
// variable: 1
inline int RenderMultisampleTypeNumSamples(RenderMultisampleType_t msaaType)
{
	int nNumMsaaSamples; // 288
} /* size: 0, variables: 1 */

// <0087CA62> ../public/rendersystem/rendersystemtypes.h:300
inline RenderMultisampleType_t NumSamplesToRenderMultisampleType(int nMsaaValue)
{
} /* size: 0 */

// <00097E8B> ../public/rendersystem/rendersystemtypes.h:332
// member functions: 11
// member variables: 4
// static member variable: 1
// struct size: 196
struct VsInputSignatureElement_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/rendersystem/rendersystemtypes.h:334 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/rendersystem/rendersystemtypes.h:334 */
	VsInputSignatureElement_t* Schema_MarkHelperFn(void);
	/* ../public/rendersystem/rendersystemtypes.h:334 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/rendersystem/rendersystemtypes.h:334 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/rendersystem/rendersystemtypes.h:334 */
	void Schema_CompileTimeVerificationFunction(VsInputSignatureElement_t* );
	/* ../public/rendersystem/rendersystemtypes.h:334 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/rendersystem/rendersystemtypes.h:334 */
	const char* Schema_StaticClassname(void);
	/* ../public/rendersystem/rendersystemtypes.h:334 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VsInputSignatureElement_t* );
	char m_pName[64]; /* 0 64 */
	char m_pSemantic[64]; /* 64 64 */
	char m_pD3DSemanticName[64]; /* 128 64 */
	int m_nD3DSemanticIndex; /* 192 4 */
	/* ../public/rendersystem/rendersystemtypes.h:341 */
	void VsInputSignatureElement_t(VsInputSignatureElement_t* );
	/* ../public/rendersystem/rendersystemtypes.h:351 */
	void KV3TransferSave(const VsInputSignatureElement_t* , CKV3TransferSaveContext* );
	/* ../public/rendersystem/rendersystemtypes.h:359 */
	void KV3TransferLoad(VsInputSignatureElement_t* , CKV3TransferLoadContext* );
};

// <007BA778> ../public/rendersystem/rendersystemtypes.h:332
// member functions: 11
// member variables: 4
// static member variable: 1
// struct size: 196
struct VsInputSignatureElement_t {
	/* ../public/rendersystem/rendersystemtypes.h:349 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/rendersystem/rendersystemtypes.h:334 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/rendersystem/rendersystemtypes.h:334 */
	VsInputSignatureElement_t* Schema_MarkHelperFn(void);
	/* ../public/rendersystem/rendersystemtypes.h:334 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/rendersystem/rendersystemtypes.h:334 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/rendersystem/rendersystemtypes.h:334 */
	void Schema_CompileTimeVerificationFunction(VsInputSignatureElement_t* );
	/* ../public/rendersystem/rendersystemtypes.h:334 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/rendersystem/rendersystemtypes.h:334 */
	const char* Schema_StaticClassname(void);
	/* ../public/rendersystem/rendersystemtypes.h:334 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VsInputSignatureElement_t* );
	char m_pName[64]; /* 0 64 */
	char m_pSemantic[64]; /* 64 64 */
	char m_pD3DSemanticName[64]; /* 128 64 */
	int m_nD3DSemanticIndex; /* 192 4 */
	/* ../public/rendersystem/rendersystemtypes.h:341 */
	void VsInputSignatureElement_t(VsInputSignatureElement_t* );
	/* ../public/rendersystem/rendersystemtypes.h:351 */
	void KV3TransferSave(const VsInputSignatureElement_t* , CKV3TransferSaveContext* );
	/* ../public/rendersystem/rendersystemtypes.h:359 */
	void KV3TransferLoad(VsInputSignatureElement_t* , CKV3TransferLoadContext* );
};

// <00E1E395> ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:332
// member functions: 11
// member variables: 4
// static member variable: 1
// struct size: 196
struct VsInputSignatureElement_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:334 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:334 */
	VsInputSignatureElement_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:334 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:334 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:334 */
	void Schema_CompileTimeVerificationFunction(VsInputSignatureElement_t* );
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:334 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:334 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:334 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VsInputSignatureElement_t* );
	char m_pName[64]; /* 0 64 */
	char m_pSemantic[64]; /* 64 64 */
	char m_pD3DSemanticName[64]; /* 128 64 */
	int m_nD3DSemanticIndex; /* 192 4 */
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:341 */
	void VsInputSignatureElement_t(VsInputSignatureElement_t* );
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:351 */
	void KV3TransferSave(const VsInputSignatureElement_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:359 */
	void KV3TransferLoad(VsInputSignatureElement_t* , CKV3TransferLoadContext* );
};

// <00028B9A> ../../public/rendersystem/rendersystemtypes.h:332
// member functions: 11
// member variables: 4
// static member variable: 1
// struct size: 196
struct VsInputSignatureElement_t {
	/* ../../public/rendersystem/rendersystemtypes.h:349 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../../public/rendersystem/rendersystemtypes.h:334 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../../public/rendersystem/rendersystemtypes.h:334 */
	VsInputSignatureElement_t* Schema_MarkHelperFn(void);
	/* ../../public/rendersystem/rendersystemtypes.h:334 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../../public/rendersystem/rendersystemtypes.h:334 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../../public/rendersystem/rendersystemtypes.h:334 */
	void Schema_CompileTimeVerificationFunction(VsInputSignatureElement_t* );
	/* ../../public/rendersystem/rendersystemtypes.h:334 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../../public/rendersystem/rendersystemtypes.h:334 */
	const char* Schema_StaticClassname(void);
	/* ../../public/rendersystem/rendersystemtypes.h:334 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VsInputSignatureElement_t* );
	char m_pName[64]; /* 0 64 */
	char m_pSemantic[64]; /* 64 64 */
	char m_pD3DSemanticName[64]; /* 128 64 */
	int m_nD3DSemanticIndex; /* 192 4 */
	/* ../../public/rendersystem/rendersystemtypes.h:341 */
	void VsInputSignatureElement_t(VsInputSignatureElement_t* );
	/* ../../public/rendersystem/rendersystemtypes.h:351 */
	void KV3TransferSave(const VsInputSignatureElement_t* , CKV3TransferSaveContext* );
	/* ../../public/rendersystem/rendersystemtypes.h:359 */
	void KV3TransferLoad(VsInputSignatureElement_t* , CKV3TransferLoadContext* );
};

// <00075BE4> ../../public/rendersystem/rendersystemtypes.h:332
// member functions: 11
// member variables: 4
// static member variable: 1
// struct size: 196
struct VsInputSignatureElement_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../../public/rendersystem/rendersystemtypes.h:334 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../../public/rendersystem/rendersystemtypes.h:334 */
	VsInputSignatureElement_t* Schema_MarkHelperFn(void);
	/* ../../public/rendersystem/rendersystemtypes.h:334 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../../public/rendersystem/rendersystemtypes.h:334 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../../public/rendersystem/rendersystemtypes.h:334 */
	void Schema_CompileTimeVerificationFunction(VsInputSignatureElement_t* );
	/* ../../public/rendersystem/rendersystemtypes.h:334 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../../public/rendersystem/rendersystemtypes.h:334 */
	const char* Schema_StaticClassname(void);
	/* ../../public/rendersystem/rendersystemtypes.h:334 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VsInputSignatureElement_t* );
	char m_pName[64]; /* 0 64 */
	char m_pSemantic[64]; /* 64 64 */
	char m_pD3DSemanticName[64]; /* 128 64 */
	int m_nD3DSemanticIndex; /* 192 4 */
	/* ../../public/rendersystem/rendersystemtypes.h:341 */
	void VsInputSignatureElement_t(VsInputSignatureElement_t* );
	/* ../../public/rendersystem/rendersystemtypes.h:351 */
	void KV3TransferSave(const VsInputSignatureElement_t* , CKV3TransferSaveContext* );
	/* ../../public/rendersystem/rendersystemtypes.h:359 */
	void KV3TransferLoad(VsInputSignatureElement_t* , CKV3TransferLoadContext* );
};

// <00596CD2> ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:332
// member functions: 11
// member variables: 4
// static member variable: 1
// struct size: 196
struct VsInputSignatureElement_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:334 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:334 */
	VsInputSignatureElement_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:334 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:334 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:334 */
	void Schema_CompileTimeVerificationFunction(VsInputSignatureElement_t* );
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:334 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:334 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:334 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VsInputSignatureElement_t* );
	char m_pName[64]; /* 0 64 */
	char m_pSemantic[64]; /* 64 64 */
	char m_pD3DSemanticName[64]; /* 128 64 */
	int m_nD3DSemanticIndex; /* 192 4 */
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:341 */
	void VsInputSignatureElement_t(VsInputSignatureElement_t* );
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:351 */
	void KV3TransferSave(const VsInputSignatureElement_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:359 */
	void KV3TransferLoad(VsInputSignatureElement_t* , CKV3TransferLoadContext* );
};

// <004CFE22> ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:332
// member functions: 11
// member variables: 4
// static member variable: 1
// struct size: 196
struct VsInputSignatureElement_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:334 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:334 */
	VsInputSignatureElement_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:334 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:334 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:334 */
	void Schema_CompileTimeVerificationFunction(VsInputSignatureElement_t* );
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:334 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:334 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:334 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VsInputSignatureElement_t* );
	char m_pName[64]; /* 0 64 */
	char m_pSemantic[64]; /* 64 64 */
	char m_pD3DSemanticName[64]; /* 128 64 */
	int m_nD3DSemanticIndex; /* 192 4 */
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:341 */
	void VsInputSignatureElement_t(VsInputSignatureElement_t* );
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:351 */
	void KV3TransferSave(const VsInputSignatureElement_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:359 */
	void KV3TransferLoad(VsInputSignatureElement_t* , CKV3TransferLoadContext* );
};

// <00E222D8> ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:334
inline void VsInputSignatureElement_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <069F7290> ../public/rendersystem/rendersystemtypes.h:341
void VsInputSignatureElement_t::VsInputSignatureElement_t()
{
} /* size: 0 */

// <069F7277> ../public/rendersystem/rendersystemtypes.h:341
inline void VsInputSignatureElement_t::VsInputSignatureElement_t()
{
} /* size: 0 */

// <05BE1F86> ../public/rendersystem/rendersystemtypes.h:359
// variables: 4
// function calls: 63
void VsInputSignatureElement_t::KV3TransferLoad(CKV3TransferLoadContext* pContext)
{
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	LoadValue<char [64]>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				char* value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<char [64]>(
					char& destValue,
					const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		LoadValue<char [64]>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					char* value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<char [64]>(
						char& destValue,
						const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<char [64]>(
					CKV3MemberName memberNameAndHash,
					char& destValue,
					uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<char [64]>(
					CKV3MemberName memberNameAndHash,
					char& destValue,
					uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<char [64]>(
					CKV3MemberName memberNameAndHash,
					char& destValue);  // 361
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<8>(
				const char& str);  // 361
	CKV3MemberName::CKV3MemberName<12>(
				const char& str);  // 362
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	LoadValue<char [64]>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				char* value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<char [64]>(
					char& destValue,
					const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		LoadValue<char [64]>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					char* value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<char [64]>(
						char& destValue,
						const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<char [64]>(
					CKV3MemberName memberNameAndHash,
					char& destValue,
					uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<char [64]>(
					CKV3MemberName memberNameAndHash,
					char& destValue,
					uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<char [64]>(
					CKV3MemberName memberNameAndHash,
					char& destValue);  // 362
	CKV3MemberName::CKV3MemberName<19>(
				const char& str);  // 363
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	LoadValue<char [64]>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				char* value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<char [64]>(
					char& destValue,
					const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		LoadValue<char [64]>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					char* value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<char [64]>(
						char& destValue,
						const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<char [64]>(
					CKV3MemberName memberNameAndHash,
					char& destValue,
					uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<char [64]>(
					CKV3MemberName memberNameAndHash,
					char& destValue,
					uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<char [64]>(
					CKV3MemberName memberNameAndHash,
					char& destValue);  // 363
	CKV3MemberName::CKV3MemberName<20>(
				const char& str);  // 364
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<int>(); // 694
	KeyValues3::GetValueAsNumeric<int>(); // 184
	KeyValues3::GetValueInt(); // 772
	LoadValue<int>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			int32& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<int>(
				int& destValue,
				const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		{
		}
		KV3Helper_StringToNumber<int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<int>(); // 694
		KeyValues3::GetValueAsNumeric<int>(); // 184
		KeyValues3::GetValueInt(); // 772
		LoadValue<int>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				int32& value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<int>(
					int& destValue,
					const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<int>(
				CKV3MemberName memberNameAndHash,
				int& destValue,
				uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<int>(
				CKV3MemberName memberNameAndHash,
				int& destValue,
				uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<int>(
				CKV3MemberName memberNameAndHash,
				int& destValue);  // 364
} /* size: 0, inline expansions: 48 (0 bytes) */

// <05BBFDAF> ../public/rendersystem/rendersystemtypes.h:370
void VsInputSignature_t::VsInputSignature_t()
{
} /* size: 0 */

// <05BBFD92> ../public/rendersystem/rendersystemtypes.h:370
inline void VsInputSignature_t::VsInputSignature_t()
{
} /* size: 0 */

// <05BBFD7B> ../public/rendersystem/rendersystemtypes.h:370
void VsInputSignature_t::~VsInputSignature_t()
{
} /* size: 0 */

// <05BBFD5E> ../public/rendersystem/rendersystemtypes.h:370
inline void VsInputSignature_t::~VsInputSignature_t()
{
} /* size: 0 */

// <00E21CFC> ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:370
inline void VsInputSignature_t::operator=(const VsInputSignature_t &)
{
} /* size: 0 */

// <05B75F24> ../public/rendersystem/rendersystemtypes.h:370
// member functions: 12
// member variable: 1
// static member variable: 1
// struct size: 32
struct VsInputSignature_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/rendersystem/rendersystemtypes.h:372 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/rendersystem/rendersystemtypes.h:372 */
	VsInputSignature_t* Schema_MarkHelperFn(void);
	/* ../public/rendersystem/rendersystemtypes.h:372 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/rendersystem/rendersystemtypes.h:372 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/rendersystem/rendersystemtypes.h:372 */
	void Schema_CompileTimeVerificationFunction(VsInputSignature_t* );
	/* ../public/rendersystem/rendersystemtypes.h:372 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/rendersystem/rendersystemtypes.h:372 */
	const char* Schema_StaticClassname(void);
	/* ../public/rendersystem/rendersystemtypes.h:372 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VsInputSignature_t* );
	CVsInputSignatureVector m_elems; /* 0 32 */
	/* ../public/rendersystem/rendersystemtypes.h:378 */
	void KV3TransferSave(const VsInputSignature_t* , CKV3TransferSaveContext* );
	/* ../public/rendersystem/rendersystemtypes.h:383 */
	void KV3TransferLoad(VsInputSignature_t* , CKV3TransferLoadContext* );
	void ~VsInputSignature_t(VsInputSignature_t* );
	void VsInputSignature_t(VsInputSignature_t* );
};

// <00E1FC5E> ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:370
// member functions: 13
// member variable: 1
// static member variable: 1
// struct size: 32
struct VsInputSignature_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:372 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:372 */
	VsInputSignature_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:372 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:372 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:372 */
	void Schema_CompileTimeVerificationFunction(VsInputSignature_t* );
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:372 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:372 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:372 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VsInputSignature_t* );
	CVsInputSignatureVector m_elems; /* 0 32 */
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:378 */
	void KV3TransferSave(const VsInputSignature_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:383 */
	void KV3TransferLoad(VsInputSignature_t* , CKV3TransferLoadContext* );
	void ~VsInputSignature_t(VsInputSignature_t* );
	void VsInputSignature_t(VsInputSignature_t* );
	VsInputSignature_t& operator=(VsInputSignature_t* , const VsInputSignature_t& );
};

// <0059859B> ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:370
// member functions: 13
// member variable: 1
// static member variable: 1
// struct size: 32
struct VsInputSignature_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:372 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:372 */
	VsInputSignature_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:372 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:372 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:372 */
	void Schema_CompileTimeVerificationFunction(VsInputSignature_t* );
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:372 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:372 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:372 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VsInputSignature_t* );
	CVsInputSignatureVector m_elems; /* 0 32 */
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:378 */
	void KV3TransferSave(const VsInputSignature_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/meshsystem/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:383 */
	void KV3TransferLoad(VsInputSignature_t* , CKV3TransferLoadContext* );
	void ~VsInputSignature_t(VsInputSignature_t* );
	void VsInputSignature_t(VsInputSignature_t* );
	VsInputSignature_t& operator=(VsInputSignature_t* , const VsInputSignature_t& );
};

// <004D16EB> ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:370
// member functions: 13
// member variable: 1
// static member variable: 1
// struct size: 32
struct VsInputSignature_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:372 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:372 */
	VsInputSignature_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:372 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:372 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:372 */
	void Schema_CompileTimeVerificationFunction(VsInputSignature_t* );
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:372 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:372 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:372 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VsInputSignature_t* );
	CVsInputSignatureVector m_elems; /* 0 32 */
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:378 */
	void KV3TransferSave(const VsInputSignature_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/rendersystemempty/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:383 */
	void KV3TransferLoad(VsInputSignature_t* , CKV3TransferLoadContext* );
	void ~VsInputSignature_t(VsInputSignature_t* );
	void VsInputSignature_t(VsInputSignature_t* );
	VsInputSignature_t& operator=(VsInputSignature_t* , const VsInputSignature_t& );
};

// <00E22283> ../_generated_code/rendersystemvulkan/linuxsteamrt64/release/../../../../public/rendersystem/rendersystemtypes.h:372
inline void VsInputSignature_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <05BE1F60> ../public/rendersystem/rendersystemtypes.h:383
inline void VsInputSignature_t::KV3TransferLoad(CKV3TransferLoadContext* pContext)
{
} /* size: 0 */

// <000423FD> ../public/rendersystem/rendersystemtypes.h:393
// member functions: 13
// member variables: 7
// struct size: 28
struct RenderViewport_t {
	int m_nVersion; /* 0 4 */
	int m_nTopLeftX; /* 4 4 */
	int m_nTopLeftY; /* 8 4 */
	int m_nWidth; /* 12 4 */
	int m_nHeight; /* 16 4 */
	float m_flMinZ; /* 20 4 */
	float m_flMaxZ; /* 24 4 */
	/* ../public/rendersystem/rendersystemtypes.h:403 */
	void RenderViewport_t(RenderViewport_t* );
	/* ../public/rendersystem/rendersystemtypes.h:404 */
	void RenderViewport_t(RenderViewport_t* , int, int, int, int, float, float);
	/* ../public/rendersystem/rendersystemtypes.h:406 */
	void Init(RenderViewport_t* );
	/* ../public/rendersystem/rendersystemtypes.h:412 */
	void Init(RenderViewport_t* , int, int, int, int, float, float);
	/* ../public/rendersystem/rendersystemtypes.h:420 */
	void Init(RenderViewport_t* , const Rect_t& , float, float);
	/* ../public/rendersystem/rendersystemtypes.h:425 */
	Rect_t GetRect(const RenderViewport_t* );
	/* ../public/rendersystem/rendersystemtypes.h:435 */
	bool IsValid(const RenderViewport_t* );
	/* ../public/rendersystem/rendersystemtypes.h:440 */
	bool IsEqual(const RenderViewport_t* , const RenderViewport_t& );
	/* ../public/rendersystem/rendersystemtypes.h:448 */
	float NormalizedXCoordRelative(const RenderViewport_t* , int);
	/* ../public/rendersystem/rendersystemtypes.h:453 */
	float NormalizedYCoordRelative(const RenderViewport_t* , int);
	/* ../public/rendersystem/rendersystemtypes.h:460 */
	Vector ConvertPixelCoordinateToNDCCoordinates(const RenderViewport_t* , float, float, float);
	/* ../public/rendersystem/rendersystemtypes.h:469 */
	bool operator==(const RenderViewport_t* , const RenderViewport_t& );
	/* ../public/rendersystem/rendersystemtypes.h:481 */
	bool operator!=(const RenderViewport_t* , const RenderViewport_t& );
};

// <03AF722E> ../public/rendersystem/rendersystemtypes.h:403
void RenderViewport_t::RenderViewport_t()
{
} /* size: 0 */

// <03AF7215> ../public/rendersystem/rendersystemtypes.h:403
inline void RenderViewport_t::RenderViewport_t()
{
} /* size: 0 */

// <03AF71E0> ../public/rendersystem/rendersystemtypes.h:404
void RenderViewport_t::RenderViewport_t(int x, int y, int nWidth, int nHeight, float flMinZ, float flMaxZ)
{
} /* size: 0 */

// <03AF717D> ../public/rendersystem/rendersystemtypes.h:404
inline void RenderViewport_t::RenderViewport_t(int x, int y, int nWidth, int nHeight, float flMinZ, float flMaxZ)
{
} /* size: 0 */

// <03AF711A> ../public/rendersystem/rendersystemtypes.h:412
inline void RenderViewport_t::Init(int x, int y, int nWidth, int nHeight, float flMinZ, float flMaxZ)
{
} /* size: 0 */

// <01351ECA> ../public/rendersystem/rendersystemtypes.h:420
inline void RenderViewport_t::Init(const Rect_t& rect, float flMinZ, float flMaxZ)
{
} /* size: 0 */

// <0324522E> ../public/rendersystem/rendersystemtypes.h:435
inline void RenderViewport_t::IsValid()
{
} /* size: 0 */

// <03180A42> ../public/rendersystem/rendersystemtypes.h:448
inline void RenderViewport_t::NormalizedXCoordRelative(int nScrX)
{
} /* size: 0 */

// <03180A1C> ../public/rendersystem/rendersystemtypes.h:453
inline void RenderViewport_t::NormalizedYCoordRelative(int nScrY)
{
} /* size: 0 */

