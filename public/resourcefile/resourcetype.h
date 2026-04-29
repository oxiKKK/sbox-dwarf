
//
// public/resourcefile/resourcetype.h
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
//	functions: 48
//	classes: 10
//	structs: 22
//

// <067143AC> ../public/resourcefile/resourcetype.h:35
void ResourceId_t::ResourceId_t()
{
} /* size: 0 */

// <06714393> ../public/resourcefile/resourcetype.h:35
inline void ResourceId_t::ResourceId_t()
{
} /* size: 0 */

// <0671437A> ../public/resourcefile/resourcetype.h:35
inline void ResourceId_t::GetRaw()
{
} /* size: 0 */

// <066D2802> ../public/resourcefile/resourcetype.h:35
void ResourceId_t::ResourceId_t(uint64 value)
{
} /* size: 0 */

// <066D27DD> ../public/resourcefile/resourcetype.h:35
inline void ResourceId_t::ResourceId_t(uint64 value)
{
} /* size: 0 */

// <02383962> ../public/resourcefile/resourcetype.h:35
inline void ResourceId_t::operator==(const ResourceId_t& other)
{
} /* size: 0 */

// <0003CCCE> ../public/resourcefile/resourcetype.h:35
// member functions: 30
// member variable: 1
// static member variables: 2
// class size: 8
class ResourceId_t {
	static const enum TypeSafeIntCheckFlag_t CheckValue; /* 0 0 */
	static const bool IS_TYPESAFE_INTEGER = 1; /* 0 0 */
	/* ../public/resourcefile/resourcetype.h:35 */
	const char* GetTypeName(void);
	/* ../public/resourcefile/resourcetype.h:35 */
	void ResourceId_t(ResourceId_t* );
	/* ../public/resourcefile/resourcetype.h:35 */
	void ResourceId_t(ResourceId_t* , uint64);
	/* ../public/resourcefile/resourcetype.h:35 */
	void SetRaw(ResourceId_t* , uint64);
	/* ../public/resourcefile/resourcetype.h:35 */
	uint64 GetRaw(const ResourceId_t* );
	/* ../public/resourcefile/resourcetype.h:35 */
	uint64& GetRawRef(ResourceId_t* );
	/* ../public/resourcefile/resourcetype.h:35 */
	const uint64& GetRawRef(const ResourceId_t* );
	/* ../public/resourcefile/resourcetype.h:35 */
	uint64* GetRawPtrForWrite(ResourceId_t* );
	/* ../public/resourcefile/resourcetype.h:35 */
	bool operator==(const ResourceId_t* , const ResourceId_t& );
	/* ../public/resourcefile/resourcetype.h:35 */
	strong_ordering operator<=>(const ResourceId_t* , const ResourceId_t& );
	/* ../public/resourcefile/resourcetype.h:35 */
	ResourceId_t& operator++(ResourceId_t* );
	/* ../public/resourcefile/resourcetype.h:35 */
	ResourceId_t operator++(ResourceId_t* , int);
	/* ../public/resourcefile/resourcetype.h:35 */
	ResourceId_t& operator--(ResourceId_t* );
	/* ../public/resourcefile/resourcetype.h:35 */
	ResourceId_t operator--(ResourceId_t* , int);
private:
	uint64 m_Value; /* 0 8 */
	/* ../public/resourcefile/resourcetype.h:35 */
	ResourceId_t& operator=(ResourceId_t* , uint64);
	const char  * GetTypeName(void); /* linkage=_ZN12ResourceId_t11GetTypeNameEv */
	void ResourceId_t(class ResourceId_t *); /* linkage=_ZN12ResourceId_tC4Ev */
	void ResourceId_t(class ResourceId_t *, uint64); /* linkage=_ZN12ResourceId_tC4Ey */
	void SetRaw(class ResourceId_t *, uint64); /* linkage=_ZN12ResourceId_t6SetRawEy */
	uint64 GetRaw(const class ResourceId_t  *); /* linkage=_ZNK12ResourceId_t6GetRawEv */
	uint64 & GetRawRef(class ResourceId_t *); /* linkage=_ZN12ResourceId_t9GetRawRefEv */
	const uint64  & GetRawRef(const class ResourceId_t  *); /* linkage=_ZNK12ResourceId_t9GetRawRefEv */
	uint64 * GetRawPtrForWrite(class ResourceId_t *); /* linkage=_ZN12ResourceId_t17GetRawPtrForWriteEv */
	bool operator==(const class ResourceId_t  *, const class ResourceId_t  &); /* linkage=_ZNK12ResourceId_teqERKS_ */
	class strong_ordering operator<=>(const class ResourceId_t  *, const class ResourceId_t  &); /* linkage=_ZNK12ResourceId_tssERKS_ */
	class ResourceId_t & operator++(class ResourceId_t *); /* linkage=_ZN12ResourceId_tppEv */
	class ResourceId_t operator++(class ResourceId_t *, int); /* linkage=_ZN12ResourceId_tppEi */
	class ResourceId_t & operator--(class ResourceId_t *); /* linkage=_ZN12ResourceId_tmmEv */
	class ResourceId_t operator--(class ResourceId_t *, int); /* linkage=_ZN12ResourceId_tmmEi */
	class ResourceId_t & operator=(class ResourceId_t *, uint64); /* linkage=_ZN12ResourceId_taSEy */
};

// <0583A775> ../../public/resourcefile/resourcetype.h:35
// member functions: 30
// member variable: 1
// static member variables: 2
// class size: 8
class ResourceId_t {
	static const enum TypeSafeIntCheckFlag_t CheckValue; /* 0 0 */
	static const bool IS_TYPESAFE_INTEGER = 1; /* 0 0 */
	/* ../../public/resourcefile/resourcetype.h:35 */
	const char* GetTypeName(void);
	/* ../../public/resourcefile/resourcetype.h:35 */
	void ResourceId_t(ResourceId_t* );
	/* ../../public/resourcefile/resourcetype.h:35 */
	void ResourceId_t(ResourceId_t* , uint64);
	/* ../../public/resourcefile/resourcetype.h:35 */
	void SetRaw(ResourceId_t* , uint64);
	/* ../../public/resourcefile/resourcetype.h:35 */
	uint64 GetRaw(const ResourceId_t* );
	/* ../../public/resourcefile/resourcetype.h:35 */
	uint64& GetRawRef(ResourceId_t* );
	/* ../../public/resourcefile/resourcetype.h:35 */
	const uint64& GetRawRef(const ResourceId_t* );
	/* ../../public/resourcefile/resourcetype.h:35 */
	uint64* GetRawPtrForWrite(ResourceId_t* );
	/* ../../public/resourcefile/resourcetype.h:35 */
	bool operator==(const ResourceId_t* , const ResourceId_t& );
	/* ../../public/resourcefile/resourcetype.h:35 */
	strong_ordering operator<=>(const ResourceId_t* , const ResourceId_t& );
	/* ../../public/resourcefile/resourcetype.h:35 */
	ResourceId_t& operator++(ResourceId_t* );
	/* ../../public/resourcefile/resourcetype.h:35 */
	ResourceId_t operator++(ResourceId_t* , int);
	/* ../../public/resourcefile/resourcetype.h:35 */
	ResourceId_t& operator--(ResourceId_t* );
	/* ../../public/resourcefile/resourcetype.h:35 */
	ResourceId_t operator--(ResourceId_t* , int);
private:
	uint64 m_Value; /* 0 8 */
	/* ../../public/resourcefile/resourcetype.h:35 */
	ResourceId_t& operator=(ResourceId_t* , uint64);
	const char  * GetTypeName(void); /* linkage=_ZN12ResourceId_t11GetTypeNameEv */
	void ResourceId_t(class ResourceId_t *); /* linkage=_ZN12ResourceId_tC4Ev */
	void ResourceId_t(class ResourceId_t *, uint64); /* linkage=_ZN12ResourceId_tC4Ey */
	void SetRaw(class ResourceId_t *, uint64); /* linkage=_ZN12ResourceId_t6SetRawEy */
	uint64 GetRaw(const class ResourceId_t  *); /* linkage=_ZNK12ResourceId_t6GetRawEv */
	uint64 & GetRawRef(class ResourceId_t *); /* linkage=_ZN12ResourceId_t9GetRawRefEv */
	const uint64  & GetRawRef(const class ResourceId_t  *); /* linkage=_ZNK12ResourceId_t9GetRawRefEv */
	uint64 * GetRawPtrForWrite(class ResourceId_t *); /* linkage=_ZN12ResourceId_t17GetRawPtrForWriteEv */
	bool operator==(const class ResourceId_t  *, const class ResourceId_t  &); /* linkage=_ZNK12ResourceId_teqERKS_ */
	class strong_ordering operator<=>(const class ResourceId_t  *, const class ResourceId_t  &); /* linkage=_ZNK12ResourceId_tssERKS_ */
	class ResourceId_t & operator++(class ResourceId_t *); /* linkage=_ZN12ResourceId_tppEv */
	class ResourceId_t operator++(class ResourceId_t *, int); /* linkage=_ZN12ResourceId_tppEi */
	class ResourceId_t & operator--(class ResourceId_t *); /* linkage=_ZN12ResourceId_tmmEv */
	class ResourceId_t operator--(class ResourceId_t *, int); /* linkage=_ZN12ResourceId_tmmEi */
	class ResourceId_t & operator=(class ResourceId_t *, uint64); /* linkage=_ZN12ResourceId_taSEy */
};

// <067A92D8> ../_generated_code/resourcefile/linuxsteamrt64/release/../../../../public/resourcefile/resourcetype.h:35
// member functions: 30
// member variable: 1
// static member variables: 2
// class size: 8
class ResourceId_t {
	static const enum TypeSafeIntCheckFlag_t CheckValue; /* 0 0 */
	static const bool IS_TYPESAFE_INTEGER = 1; /* 0 0 */
	/* ../_generated_code/resourcefile/linuxsteamrt64/release/../../../../public/resourcefile/resourcetype.h:35 */
	const char* GetTypeName(void);
	/* ../_generated_code/resourcefile/linuxsteamrt64/release/../../../../public/resourcefile/resourcetype.h:35 */
	void ResourceId_t(ResourceId_t* );
	/* ../_generated_code/resourcefile/linuxsteamrt64/release/../../../../public/resourcefile/resourcetype.h:35 */
	void ResourceId_t(ResourceId_t* , uint64);
	/* ../_generated_code/resourcefile/linuxsteamrt64/release/../../../../public/resourcefile/resourcetype.h:35 */
	void SetRaw(ResourceId_t* , uint64);
	/* ../_generated_code/resourcefile/linuxsteamrt64/release/../../../../public/resourcefile/resourcetype.h:35 */
	uint64 GetRaw(const ResourceId_t* );
	/* ../_generated_code/resourcefile/linuxsteamrt64/release/../../../../public/resourcefile/resourcetype.h:35 */
	uint64& GetRawRef(ResourceId_t* );
	/* ../_generated_code/resourcefile/linuxsteamrt64/release/../../../../public/resourcefile/resourcetype.h:35 */
	const uint64& GetRawRef(const ResourceId_t* );
	/* ../_generated_code/resourcefile/linuxsteamrt64/release/../../../../public/resourcefile/resourcetype.h:35 */
	uint64* GetRawPtrForWrite(ResourceId_t* );
	/* ../_generated_code/resourcefile/linuxsteamrt64/release/../../../../public/resourcefile/resourcetype.h:35 */
	bool operator==(const ResourceId_t* , const ResourceId_t& );
	/* ../_generated_code/resourcefile/linuxsteamrt64/release/../../../../public/resourcefile/resourcetype.h:35 */
	strong_ordering operator<=>(const ResourceId_t* , const ResourceId_t& );
	/* ../_generated_code/resourcefile/linuxsteamrt64/release/../../../../public/resourcefile/resourcetype.h:35 */
	ResourceId_t& operator++(ResourceId_t* );
	/* ../_generated_code/resourcefile/linuxsteamrt64/release/../../../../public/resourcefile/resourcetype.h:35 */
	ResourceId_t operator++(ResourceId_t* , int);
	/* ../_generated_code/resourcefile/linuxsteamrt64/release/../../../../public/resourcefile/resourcetype.h:35 */
	ResourceId_t& operator--(ResourceId_t* );
	/* ../_generated_code/resourcefile/linuxsteamrt64/release/../../../../public/resourcefile/resourcetype.h:35 */
	ResourceId_t operator--(ResourceId_t* , int);
private:
	uint64 m_Value; /* 0 8 */
	/* ../_generated_code/resourcefile/linuxsteamrt64/release/../../../../public/resourcefile/resourcetype.h:35 */
	ResourceId_t& operator=(ResourceId_t* , uint64);
	const char  * GetTypeName(void); /* linkage=_ZN12ResourceId_t11GetTypeNameEv */
	void ResourceId_t(class ResourceId_t *); /* linkage=_ZN12ResourceId_tC4Ev */
	void ResourceId_t(class ResourceId_t *, uint64); /* linkage=_ZN12ResourceId_tC4Ey */
	void SetRaw(class ResourceId_t *, uint64); /* linkage=_ZN12ResourceId_t6SetRawEy */
	uint64 GetRaw(const class ResourceId_t  *); /* linkage=_ZNK12ResourceId_t6GetRawEv */
	uint64 & GetRawRef(class ResourceId_t *); /* linkage=_ZN12ResourceId_t9GetRawRefEv */
	const uint64  & GetRawRef(const class ResourceId_t  *); /* linkage=_ZNK12ResourceId_t9GetRawRefEv */
	uint64 * GetRawPtrForWrite(class ResourceId_t *); /* linkage=_ZN12ResourceId_t17GetRawPtrForWriteEv */
	bool operator==(const class ResourceId_t  *, const class ResourceId_t  &); /* linkage=_ZNK12ResourceId_teqERKS_ */
	class strong_ordering operator<=>(const class ResourceId_t  *, const class ResourceId_t  &); /* linkage=_ZNK12ResourceId_tssERKS_ */
	class ResourceId_t & operator++(class ResourceId_t *); /* linkage=_ZN12ResourceId_tppEv */
	class ResourceId_t operator++(class ResourceId_t *, int); /* linkage=_ZN12ResourceId_tppEi */
	class ResourceId_t & operator--(class ResourceId_t *); /* linkage=_ZN12ResourceId_tmmEv */
	class ResourceId_t operator--(class ResourceId_t *, int); /* linkage=_ZN12ResourceId_tmmEi */
	class ResourceId_t & operator=(class ResourceId_t *, uint64); /* linkage=_ZN12ResourceId_taSEy */
};

// <021B8FA9> ../public/resourcefile/resourcetype.h:46
// member function: 1
// struct size: 1
struct DefaultHashFunctor<ResourceId_t> {
	/* ../public/resourcefile/resourcetype.h:48 */
	unsigned int operator()(const DefaultHashFunctor<ResourceId_t>* , ResourceId_t);
};

// <04AE3C59> ../public/resourcefile/resourcetype.h:48
inline void DefaultHashFunctor<ResourceId_t>::operator(ResourceId_t s)
{
} /* size: 0 */

// <0238390B> ../public/resourcefile/resourcetype.h:78
// variables: 2
inline void ResourceTypeToExt(char* pOutChars, size_t nBufferSize, ResourceType_t nType)
{
	const char   __FUNCTION__; // 58640
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <03123E17> ../public/resourcefile/resourcetype.h:78
// variables: 2
inline void ResourceTypeToExt(char* pOutChars, size_t nBufferSize, ResourceType_t nType)
{
	const char   __FUNCTION__; // 3599
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <014BAD6E> ../public/resourcefile/resourcetype.h:78
// variables: 2
inline void ResourceTypeToExt(char* pOutChars, size_t nBufferSize, ResourceType_t nType)
{
	const char   __FUNCTION__; // 38180
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0073C64D> ../public/resourcefile/resourcetype.h:78
// variables: 2
inline void ResourceTypeToExt(char* pOutChars, size_t nBufferSize, ResourceType_t nType)
{
	const char   __FUNCTION__; // 1888
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <019898D3> ../public/resourcefile/resourcetype.h:78
// variables: 2
inline void ResourceTypeToExt(char* pOutChars, size_t nBufferSize, ResourceType_t nType)
{
	const char   __FUNCTION__; // 42555
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <00900DFC> ../public/resourcefile/resourcetype.h:78
// variables: 2
inline void ResourceTypeToExt(char* pOutChars, size_t nBufferSize, ResourceType_t nType)
{
	const char   __FUNCTION__; // 32991
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <02358989> ../public/resourcefile/resourcetype.h:86
inline void ResourceTypeToExt<9>(char& pDest, ResourceType_t nType)
{
} /* size: 0 */

// <023F95BB> ../public/resourcefile/resourcetype.h:93
// variables: 2
inline void CharsToResourceType(ResourceType_t* pOutType, const char* pChars)
{
	int nShift; // 97
	{
		int i; // 98
	}
} /* size: 0, variables: 1 */

// <023F9526> ../public/resourcefile/resourcetype.h:116
// variables: 5
inline ResourceType_t DeduceResourceTypeFromResourceName(const char* pResourceName)
{
	const char* pExt; // 122
	CBufferStringN<30> extWithNoTrailing; // 128
	int nExtLen; // 130
	ResourceType_t nResult; // 141
	{
		int i; // 131
	}
} /* size: 0, variables: 4 */

// <03123961> ../public/resourcefile/resourcetype.h:116
// variables: 6
// function calls: 15
ResourceType_t DeduceResourceTypeFromResourceName(const char* pResourceName)
{
	const char* pExt; // 122
	CBufferStringN<30> extWithNoTrailing; // 128
	int nExtLen; // 130
	ResourceType_t nResult; // 141
	{
		int i; // 131
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 788
		CBufferString::operator[](
				int i);  // 133
		CBufferString::RemoveTail(
				int nChars);  // 135
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 596
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 601
	CBufferStringN<30>::CBufferStringN(
			const char* pString,
			int nChars,
			bool bExact,
			bool bGrowable);  // 128
	CBufferString::Length(); // 130
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 142
	{
		int i; // 98
	}
	CharsToResourceType(ResourceType_t* pOutType,
				const char* pChars);  // 142
	CBufferString::~CBufferString(); // 587
	CBufferStringN<30>::~CBufferStringN(); // 144
} /* size: 462, variables: 4, inline expansions: 11 (353 bytes) */

// <0003CF41> ../public/resourcefile/resourcetype.h:168
// member variable: 1
// struct size: 8
struct ResourceNameInfo_t {
	CUtlSymbolLarge m_ResourceNameSymbol; /* 0 8 */
};

// <023541BA> ../public/resourcefile/resourcetype.h:198
void ResourceBindingBase_t::ResourceBindingBase_t()
{
} /* size: 0 */

// <0235419E> ../public/resourcefile/resourcetype.h:198
inline void ResourceBindingBase_t::ResourceBindingBase_t()
{
} /* size: 0 */

// <0003D4A2> ../public/resourcefile/resourcetype.h:198
// member variables: 9
// struct size: 40
struct ResourceBindingBase_t {
	void * m_pData; /* 0 8 */
	ResourceNameHandle_t m_Name; /* 8 8 */
	uint16 m_nFlags; /* 16 2 */
	StreamingResourceDataIndex_t m_nStreamingResource; /* 18 2 */
	ResourceTypeIndex_t m_nTypeIndex; /* 20 2 */
	uint8 m_nReloadCounter; /* 22 1 */
	LoadingResourceIndex_t m_nLoadingResource; /* 24 2 */
	CInterlockedInt m_nRefCount __attribute__((__aligned__(4))); /* 28 4 */
	ExtRefIndex_t m_nExtRefHandle; /* 32 4 */
} __attribute__((__aligned__(8)));

// <0004273F> ../public/resourcefile/resourcetype.h:255
// member variable: 1
// struct size: 40
struct ResourceBinding_t<InfoForResourceTypeCTextureBase> : public ResourceBindingBase_t {
public:
	/* struct ResourceBindingBase_t <ancestor>; */ /* 0 40 */
} __attribute__((__aligned__(8)));

// <000473CA> ../public/resourcefile/resourcetype.h:255
// member variable: 1
// struct size: 40
struct ResourceBinding_t<InfoForResourceTypeIMaterial2> : public ResourceBindingBase_t {
public:
	/* struct ResourceBindingBase_t <ancestor>; */ /* 0 40 */
} __attribute__((__aligned__(8)));

// <000F0561> ../public/resourcefile/resourcetype.h:255
// member variable: 1
// struct size: 40
struct ResourceBinding_t<InfoForResourceTypeCModel> : public ResourceBindingBase_t {
public:
	/* struct ResourceBindingBase_t <ancestor>; */ /* 0 40 */
} __attribute__((__aligned__(8)));

// <0011256A> ../public/resourcefile/resourcetype.h:255
// member variable: 1
// struct size: 40
struct ResourceBinding_t<InfoForResourceTypeIAnimationGraph> : public ResourceBindingBase_t {
public:
	/* struct ResourceBindingBase_t <ancestor>; */ /* 0 40 */
} __attribute__((__aligned__(8)));

// <0039AC98> ../public/resourcefile/resourcetype.h:255
// member variable: 1
// struct size: 40
struct ResourceBinding_t<ResourceBindingVoid_t> : public ResourceBindingBase_t {
public:
	/* struct ResourceBindingBase_t <ancestor>; */ /* 0 40 */
} __attribute__((__aligned__(8)));

// <00659209> ../public/resourcefile/resourcetype.h:255
// member variable: 1
// struct size: 40
struct ResourceBinding_t<InfoForResourceTypeVSound_t> : public ResourceBindingBase_t {
public:
	/* struct ResourceBindingBase_t <ancestor>; */ /* 0 40 */
} __attribute__((__aligned__(8)));

// <00E65221> ../public/resourcefile/resourcetype.h:255
// member variable: 1
// struct size: 40
struct ResourceBinding_t<InfoForResourceTypeCEntityLump> : public ResourceBindingBase_t {
public:
	/* struct ResourceBindingBase_t <ancestor>; */ /* 0 40 */
} __attribute__((__aligned__(8)));

// <00F0990E> ../public/resourcefile/resourcetype.h:255
// member variable: 1
// struct size: 40
struct ResourceBinding_t<InfoForResourceTypeWorld_t> : public ResourceBindingBase_t {
public:
	/* struct ResourceBindingBase_t <ancestor>; */ /* 0 40 */
} __attribute__((__aligned__(8)));

// <00F0F569> ../public/resourcefile/resourcetype.h:255
// member variable: 1
// struct size: 40
struct ResourceBinding_t<InfoForResourceTypeCVoxelVisibility> : public ResourceBindingBase_t {
public:
	/* struct ResourceBindingBase_t <ancestor>; */ /* 0 40 */
} __attribute__((__aligned__(8)));

// <00FF7DE7> ../public/resourcefile/resourcetype.h:255
// member variable: 1
// struct size: 40
struct ResourceBinding_t<InfoForResourceTypeCWorldNode> : public ResourceBindingBase_t {
public:
	/* struct ResourceBindingBase_t <ancestor>; */ /* 0 40 */
} __attribute__((__aligned__(8)));

// <010797AD> ../public/resourcefile/resourcetype.h:255
// member variable: 1
// struct size: 40
struct ResourceBinding_t<InfoForResourceTypeCRenderMesh> : public ResourceBindingBase_t {
public:
	/* struct ResourceBindingBase_t <ancestor>; */ /* 0 40 */
} __attribute__((__aligned__(8)));

// <011F2114> ../public/resourcefile/resourcetype.h:255
// member variable: 1
// struct size: 40
struct ResourceBinding_t<InfoForResourceTypeCPhysAggregateData> : public ResourceBindingBase_t {
public:
	/* struct ResourceBindingBase_t <ancestor>; */ /* 0 40 */
} __attribute__((__aligned__(8)));

// <012478AF> ../public/resourcefile/resourcetype.h:255
// member variable: 1
// struct size: 40
struct ResourceBinding_t<InfoForResourceTypeCVfx> : public ResourceBindingBase_t {
public:
	/* struct ResourceBindingBase_t <ancestor>; */ /* 0 40 */
} __attribute__((__aligned__(8)));

// <021C0743> ../public/resourcefile/resourcetype.h:255
// member variable: 1
// struct size: 40
struct ResourceBinding_t<InfoForResourceTypeCGenericDataResource> : public ResourceBindingBase_t {
public:
	/* struct ResourceBindingBase_t <ancestor>; */ /* 0 40 */
} __attribute__((__aligned__(8)));

// <04B9D471> ../public/resourcefile/resourcetype.h:255
// member variable: 1
// struct size: 40
struct ResourceBinding_t<InfoForResourceTypeCAnimationGroup> : public ResourceBindingBase_t {
public:
	/* struct ResourceBindingBase_t <ancestor>; */ /* 0 40 */
} __attribute__((__aligned__(8)));

// <04C7D745> ../public/resourcefile/resourcetype.h:255
// member variable: 1
// struct size: 40
struct ResourceBinding_t<InfoForResourceTypeCMorphSetData> : public ResourceBindingBase_t {
public:
	/* struct ResourceBindingBase_t <ancestor>; */ /* 0 40 */
} __attribute__((__aligned__(8)));

// <00B6A6BD> ../public/resourcefile/resourcetype.h:255
// member variable: 1
// struct size: 40
struct ResourceBinding_t<InfoForResourceTypeCSequenceGroupData> : public ResourceBindingBase_t {
public:
	/* struct ResourceBindingBase_t <ancestor>; */ /* 0 40 */
} __attribute__((__aligned__(8)));

// <00B6C4EB> ../public/resourcefile/resourcetype.h:255
// member variable: 1
// struct size: 40
struct ResourceBinding_t<InfoForResourceTypeCAnimData> : public ResourceBindingBase_t {
public:
	/* struct ResourceBindingBase_t <ancestor>; */ /* 0 40 */
} __attribute__((__aligned__(8)));

// <043094F7> ../public/resourcefile/resourcetype.h:264
// member functions: 34
// class size: 1
class MResourceTypeForInfoType {
	/* ../public/resourcefile/resourcetype.h:264 */
	enum {
		META_FLAGS = 1,
	};
	/* ../public/resourcefile/resourcetype.h:264 */
	const char* TagName(void);
	/* ../public/resourcefile/resourcetype.h:264 */
	bool IsPresent(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/resourcefile/resourcetype.h:264 */
	bool IsPresent(FieldIntrospectionHandle_t);
	/* ../public/resourcefile/resourcetype.h:264 */
	bool IsPresent(StaticFieldIntrospectionHandle_t);
	/* ../public/resourcefile/resourcetype.h:264 */
	bool IsPresent(EnumIntrospectionHandle_t);
	/* ../public/resourcefile/resourcetype.h:264 */
	bool IsPresent(EnumeratorIntrospectionHandle_t);
	/* ../public/resourcefile/resourcetype.h:264 */
	bool IsPresent(AtomicTypeIntrospectionHandle_t);
	/* ../public/resourcefile/resourcetype.h:264 */
	bool IsPresent(CSchemaMetadataSet);
	/* ../public/resourcefile/resourcetype.h:264 */
	bool IsPresent(FieldIteratorHandle_t);
	/* ../public/resourcefile/resourcetype.h:264 */
	ResourceType_t* GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/resourcefile/resourcetype.h:264 */
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<long long unsigned int*, CUtlMemory<long long unsigned int*, int> >& , SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/resourcefile/resourcetype.h:264 */
	ResourceType_t GetValue(ClassIntrospectionHandle_t, ResourceType_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/resourcefile/resourcetype.h:264 */
	ResourceType_t* GetPtr(FieldIntrospectionHandle_t);
	/* ../public/resourcefile/resourcetype.h:264 */
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<long long unsigned int*, CUtlMemory<long long unsigned int*, int> >& );
	/* ../public/resourcefile/resourcetype.h:264 */
	ResourceType_t GetValue(FieldIntrospectionHandle_t, ResourceType_t);
	/* ../public/resourcefile/resourcetype.h:264 */
	ResourceType_t* GetPtr(StaticFieldIntrospectionHandle_t);
	/* ../public/resourcefile/resourcetype.h:264 */
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<long long unsigned int*, CUtlMemory<long long unsigned int*, int> >& );
	/* ../public/resourcefile/resourcetype.h:264 */
	ResourceType_t GetValue(StaticFieldIntrospectionHandle_t, ResourceType_t);
	/* ../public/resourcefile/resourcetype.h:264 */
	ResourceType_t* GetPtr(EnumIntrospectionHandle_t);
	/* ../public/resourcefile/resourcetype.h:264 */
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<long long unsigned int*, CUtlMemory<long long unsigned int*, int> >& );
	/* ../public/resourcefile/resourcetype.h:264 */
	ResourceType_t GetValue(EnumIntrospectionHandle_t, ResourceType_t);
	/* ../public/resourcefile/resourcetype.h:264 */
	ResourceType_t* GetPtr(EnumeratorIntrospectionHandle_t);
	/* ../public/resourcefile/resourcetype.h:264 */
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<long long unsigned int*, CUtlMemory<long long unsigned int*, int> >& );
	/* ../public/resourcefile/resourcetype.h:264 */
	ResourceType_t GetValue(EnumeratorIntrospectionHandle_t, ResourceType_t);
	/* ../public/resourcefile/resourcetype.h:264 */
	ResourceType_t* GetPtr(AtomicTypeIntrospectionHandle_t);
	/* ../public/resourcefile/resourcetype.h:264 */
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<long long unsigned int*, CUtlMemory<long long unsigned int*, int> >& );
	/* ../public/resourcefile/resourcetype.h:264 */
	ResourceType_t GetValue(AtomicTypeIntrospectionHandle_t, ResourceType_t);
	/* ../public/resourcefile/resourcetype.h:264 */
	ResourceType_t* GetPtr(CSchemaMetadataSet);
	/* ../public/resourcefile/resourcetype.h:264 */
	void GetAllPtrs(CSchemaMetadataSet, CUtlVector<long long unsigned int*, CUtlMemory<long long unsigned int*, int> >& );
	/* ../public/resourcefile/resourcetype.h:264 */
	ResourceType_t GetValue(CSchemaMetadataSet, ResourceType_t);
	/* ../public/resourcefile/resourcetype.h:264 */
	ResourceType_t* GetPtr(FieldIteratorHandle_t);
	/* ../public/resourcefile/resourcetype.h:264 */
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<long long unsigned int*, CUtlMemory<long long unsigned int*, int> >& );
	/* ../public/resourcefile/resourcetype.h:264 */
	ResourceType_t GetValue(FieldIteratorHandle_t, ResourceType_t);
	/* ../public/resourcefile/resourcetype.h:264 */
	int MetaFlags(void);
	/* ../public/resourcefile/resourcetype.h:264 */
	typedef ResourceType_t Storage_t;
};

// <027A19AA> ../public/resourcefile/resourcetype.h:280
inline const RuntimeClass_t* ResourceHandleToData<InfoForResourceTypeIMaterial2>(const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource)
{
} /* size: 0 */

// <010F9566> ../public/resourcefile/resourcetype.h:280
inline const RuntimeClass_t* ResourceHandleToData<InfoForResourceTypeCRenderMesh>(const CWeakHandle<InfoForResourceTypeCRenderMesh>& hResource)
{
} /* size: 0 */

// <010F8C13> ../public/resourcefile/resourcetype.h:280
inline const RuntimeClass_t* ResourceHandleToData<InfoForResourceTypeCModel>(const CWeakHandle<InfoForResourceTypeCModel>& hResource)
{
} /* size: 0 */

// <0100884F> ../public/resourcefile/resourcetype.h:280
inline const RuntimeClass_t* ResourceHandleToData<InfoForResourceTypeCEntityLump>(const CWeakHandle<InfoForResourceTypeCEntityLump>& hResource)
{
} /* size: 0 */

// <00179AF9> ../public/resourcefile/resourcetype.h:280
inline const RuntimeClass_t* ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource)
{
} /* size: 0 */

// <0039E2D2> ../public/resourcefile/resourcetype.h:280
inline const RuntimeClass_t* ResourceHandleToData<InfoForResourceTypeCVfx>(const CWeakHandle<InfoForResourceTypeCVfx>& hResource)
{
} /* size: 0 */

// <0185A0CB> ../public/resourcefile/resourcetype.h:286
inline RuntimeClass_t* ResourceHandleToNonConstData<InfoForResourceTypeCRenderMesh>(const CWeakHandle<InfoForResourceTypeCRenderMesh>& hResource)
{
} /* size: 0 */

// <001775C5> ../public/resourcefile/resourcetype.h:286
inline RuntimeClass_t* ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource)
{
} /* size: 0 */

// <0016F6E9> ../public/resourcefile/resourcetype.h:286
inline RuntimeClass_t* ResourceHandleToNonConstData<InfoForResourceTypeCModel>(const CWeakHandle<InfoForResourceTypeCModel>& hResource)
{
} /* size: 0 */

// <00346E4F> ../public/resourcefile/resourcetype.h:286
inline RuntimeClass_t* ResourceHandleToNonConstData<InfoForResourceTypeIMaterial2>(const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource)
{
} /* size: 0 */

// <00092F13> ../public/resourcefile/resourcetype.h:286
inline RuntimeClass_t* ResourceHandleToNonConstData<InfoForResourceTypeCVfx>(const CWeakHandle<InfoForResourceTypeCVfx>& hResource)
{
} /* size: 0 */

// <037DF5F7> ../public/resourcefile/resourcetype.h:292
inline const IMaterial2* ResourceHandleToData<IMaterial2>(const ResourceBindingBase_t* hResource)
{
} /* size: 0 */

// <01007CCF> ../public/resourcefile/resourcetype.h:292
inline const CEntityLump* ResourceHandleToData<CEntityLump>(const ResourceBindingBase_t* hResource)
{
} /* size: 0 */

// <0016E3ED> ../public/resourcefile/resourcetype.h:292
inline CModel_Imp* const* ResourceHandleToData<CModel_Imp*>(const ResourceBindingBase_t* hResource)
{
} /* size: 0 */

// <00092C91> ../public/resourcefile/resourcetype.h:292
inline const CMaterial2* ResourceHandleToData<const CMaterial2>(const ResourceBindingBase_t* hResource)
{
} /* size: 0 */

// <00092C3D> ../public/resourcefile/resourcetype.h:292
inline const CMaterial2* ResourceHandleToData<CMaterial2>(const ResourceBindingBase_t* hResource)
{
} /* size: 0 */

// <00092D89> ../public/resourcefile/resourcetype.h:298
inline CMaterial2* ResourceHandleToNonConstData<CMaterial2>(const ResourceBindingBase_t* hResource)
{
} /* size: 0 */

// <0039A069> ../public/resourcefile/resourcetype.h:307
// struct size: 1
struct ResourceBindingVoid_t {
};

// <06E2A532> ../../public/resourcefile/resourcetype.h:318
void CResourceName::~CResourceName()
{
} /* size: 0 */

// <06E2A515> ../../public/resourcefile/resourcetype.h:318
inline void CResourceName::~CResourceName()
{
} /* size: 0 */

// <0003D57A> ../public/resourcefile/resourcetype.h:318
// member functions: 41
// member variables: 3
// class size: 224
class CResourceName {
	/* ../public/resourcefile/resourcetype.h:321 */
	void CResourceName(CResourceName* );
	/* ../public/resourcefile/resourcetype.h:322 */
	void CResourceName(CResourceName* , const CResourceName& );
	/* ../public/resourcefile/resourcetype.h:323 */
	void CResourceName(CResourceName* , const char* );
	/* ../public/resourcefile/resourcetype.h:324 */
	void CResourceName(CResourceName* , const char* , ResourceType_t);
	/* ../public/resourcefile/resourcetype.h:326 */
	void CopyFrom(CResourceName* , const CResourceName& );
	/* ../public/resourcefile/resourcetype.h:327 */
	const CResourceName& operator=(CResourceName* , const CResourceName& );
	/* ../public/resourcefile/resourcetype.h:329 */
	void Clear(CResourceName* );
	/* ../public/resourcefile/resourcetype.h:331 */
	bool IsEmpty(const CResourceName* );
	/* ../public/resourcefile/resourcetype.h:334 */
	bool Init(CResourceName* , const char* );
	/* ../public/resourcefile/resourcetype.h:335 */
	bool Init(CResourceName* , const char* , ResourceType_t);
	/* ../public/resourcefile/resourcetype.h:338 */
	bool InitAndForceType(CResourceName* , const char* , ResourceType_t);
	/* ../public/resourcefile/resourcetype.h:341 */
	bool InitFormat(CResourceName* , const char* , ...);
	/* ../public/resourcefile/resourcetype.h:342 */
	bool InitFormat(CResourceName* , ResourceType_t, const char* , ...);
	/* ../public/resourcefile/resourcetype.h:344 */
	const char* GetName(const CResourceName* );
	/* ../public/resourcefile/resourcetype.h:347 */
	const char* String(const CResourceName* );
	/* ../public/resourcefile/resourcetype.h:348 */
	const char* Get(const CResourceName* );
	/* ../public/resourcefile/resourcetype.h:350 */
	ResourceType_t GetType(const CResourceName* );
	/* ../public/resourcefile/resourcetype.h:351 */
	ResourceId_t GetId(const CResourceName* );
	/* ../public/resourcefile/resourcetype.h:354 */
	bool AssertTypeIs(const CResourceName* , ResourceType_t);
protected:
	/* ../public/resourcefile/resourcetype.h:357 */
	bool ProcessName(CResourceName* , ResourceType_t, bool);
	CPathBufferString m_Name; /* 0 208 */
	ResourceId_t m_Id; /* 208 8 */
	ResourceType_t m_Type; /* 216 8 */
	void CResourceName(class CResourceName *); /* linkage=_ZN13CResourceNameC4Ev */
	void CResourceName(class CResourceName *, const class CResourceName  &); /* linkage=_ZN13CResourceNameC4ERKS_ */
	void CResourceName(class CResourceName *, const char  *); /* linkage=_ZN13CResourceNameC4EPKc */
	void CResourceName(class CResourceName *, const char  *, ResourceType_t); /* linkage=_ZN13CResourceNameC4EPKcy */
	void CopyFrom(class CResourceName *, const class CResourceName  &); /* linkage=_ZN13CResourceName8CopyFromERKS_ */
	const class CResourceName  & operator=(class CResourceName *, const class CResourceName  &); /* linkage=_ZN13CResourceNameaSERKS_ */
	/* <66d39f4> resourcefile/resourcedictionary.cpp:464 */
	void Clear(class CResourceName *); /* linkage=_ZN13CResourceName5ClearEv */
	bool IsEmpty(const class CResourceName  *); /* linkage=_ZNK13CResourceName7IsEmptyEv */
	/* <66d3aa6> resourcefile/resourcedictionary.cpp:482 */
	bool Init(class CResourceName *, const char  *); /* linkage=_ZN13CResourceName4InitEPKc */
	/* <66d3c35> resourcefile/resourcedictionary.cpp:491 */
	bool Init(class CResourceName *, const char  *, ResourceType_t); /* linkage=_ZN13CResourceName4InitEPKcy */
	bool InitAndForceType(class CResourceName *, const char  *, ResourceType_t); /* linkage=_ZN13CResourceName16InitAndForceTypeEPKcy */
	bool InitFormat(class CResourceName *, const char  *, ...); /* linkage=_ZN13CResourceName10InitFormatEPKcz */
	bool InitFormat(class CResourceName *, ResourceType_t, const char  *, ...); /* linkage=_ZN13CResourceName10InitFormatEyPKcz */
	const char  * GetName(const class CResourceName  *); /* linkage=_ZNK13CResourceName7GetNameEv */
	const char  * String(const class CResourceName  *); /* linkage=_ZNK13CResourceName6StringEv */
	const char  * Get(const class CResourceName  *); /* linkage=_ZNK13CResourceName3GetEv */
	ResourceType_t GetType(const class CResourceName  *); /* linkage=_ZNK13CResourceName7GetTypeEv */
	class ResourceId_t GetId(const class CResourceName  *); /* linkage=_ZNK13CResourceName5GetIdEv */
	bool AssertTypeIs(const class CResourceName  *, ResourceType_t); /* linkage=_ZNK13CResourceName12AssertTypeIsEy */
	bool ProcessName(class CResourceName *, ResourceType_t, bool); /* linkage=_ZN13CResourceName11ProcessNameEyb */
	void ~CResourceName(class CResourceName *); /* linkage=_ZN13CResourceNameD4Ev */
};

// <0008FAC5> ../public/resourcefile/resourcetype.h:318
// member functions: 42
// member variables: 3
// class size: 224
class CResourceName {
	/* ../public/resourcefile/resourcetype.h:321 */
	void CResourceName(CResourceName* );
	/* ../public/resourcefile/resourcetype.h:322 */
	void CResourceName(CResourceName* , const CResourceName& );
	/* ../public/resourcefile/resourcetype.h:323 */
	void CResourceName(CResourceName* , const char* );
	/* ../public/resourcefile/resourcetype.h:324 */
	void CResourceName(CResourceName* , const char* , ResourceType_t);
	/* ../public/resourcefile/resourcetype.h:326 */
	void CopyFrom(CResourceName* , const CResourceName& );
	/* ../public/resourcefile/resourcetype.h:327 */
	const CResourceName& operator=(CResourceName* , const CResourceName& );
	/* ../public/resourcefile/resourcetype.h:329 */
	void Clear(CResourceName* );
	/* ../public/resourcefile/resourcetype.h:331 */
	bool IsEmpty(const CResourceName* );
	/* ../public/resourcefile/resourcetype.h:334 */
	bool Init(CResourceName* , const char* );
	/* ../public/resourcefile/resourcetype.h:335 */
	bool Init(CResourceName* , const char* , ResourceType_t);
	/* ../public/resourcefile/resourcetype.h:338 */
	bool InitAndForceType(CResourceName* , const char* , ResourceType_t);
	/* ../public/resourcefile/resourcetype.h:341 */
	bool InitFormat(CResourceName* , const char* , ...);
	/* ../public/resourcefile/resourcetype.h:342 */
	bool InitFormat(CResourceName* , ResourceType_t, const char* , ...);
	/* ../public/resourcefile/resourcetype.h:344 */
	const char* GetName(const CResourceName* );
	/* ../public/resourcefile/resourcetype.h:347 */
	const char* String(const CResourceName* );
	/* ../public/resourcefile/resourcetype.h:348 */
	const char* Get(const CResourceName* );
	/* ../public/resourcefile/resourcetype.h:350 */
	ResourceType_t GetType(const CResourceName* );
	/* ../public/resourcefile/resourcetype.h:351 */
	ResourceId_t GetId(const CResourceName* );
	/* ../public/resourcefile/resourcetype.h:354 */
	bool AssertTypeIs(const CResourceName* , ResourceType_t);
protected:
	/* ../public/resourcefile/resourcetype.h:357 */
	bool ProcessName(CResourceName* , ResourceType_t, bool);
	CPathBufferString m_Name; /* 0 208 */
	ResourceId_t m_Id; /* 208 8 */
	ResourceType_t m_Type; /* 216 8 */
	void ~CResourceName(CResourceName* );
	void CResourceName(class CResourceName *); /* linkage=_ZN13CResourceNameC4Ev */
	void CResourceName(class CResourceName *, const class CResourceName  &); /* linkage=_ZN13CResourceNameC4ERKS_ */
	void CResourceName(class CResourceName *, const char  *); /* linkage=_ZN13CResourceNameC4EPKc */
	void CResourceName(class CResourceName *, const char  *, ResourceType_t); /* linkage=_ZN13CResourceNameC4EPKcy */
	void CopyFrom(class CResourceName *, const class CResourceName  &); /* linkage=_ZN13CResourceName8CopyFromERKS_ */
	const class CResourceName  & operator=(class CResourceName *, const class CResourceName  &); /* linkage=_ZN13CResourceNameaSERKS_ */
	/* <66d39f4> resourcefile/resourcedictionary.cpp:464 */
	void Clear(class CResourceName *); /* linkage=_ZN13CResourceName5ClearEv */
	bool IsEmpty(const class CResourceName  *); /* linkage=_ZNK13CResourceName7IsEmptyEv */
	/* <66d3aa6> resourcefile/resourcedictionary.cpp:482 */
	bool Init(class CResourceName *, const char  *); /* linkage=_ZN13CResourceName4InitEPKc */
	/* <66d3c35> resourcefile/resourcedictionary.cpp:491 */
	bool Init(class CResourceName *, const char  *, ResourceType_t); /* linkage=_ZN13CResourceName4InitEPKcy */
	bool InitAndForceType(class CResourceName *, const char  *, ResourceType_t); /* linkage=_ZN13CResourceName16InitAndForceTypeEPKcy */
	bool InitFormat(class CResourceName *, const char  *, ...); /* linkage=_ZN13CResourceName10InitFormatEPKcz */
	bool InitFormat(class CResourceName *, ResourceType_t, const char  *, ...); /* linkage=_ZN13CResourceName10InitFormatEyPKcz */
	const char  * GetName(const class CResourceName  *); /* linkage=_ZNK13CResourceName7GetNameEv */
	const char  * String(const class CResourceName  *); /* linkage=_ZNK13CResourceName6StringEv */
	const char  * Get(const class CResourceName  *); /* linkage=_ZNK13CResourceName3GetEv */
	ResourceType_t GetType(const class CResourceName  *); /* linkage=_ZNK13CResourceName7GetTypeEv */
	class ResourceId_t GetId(const class CResourceName  *); /* linkage=_ZNK13CResourceName5GetIdEv */
	bool AssertTypeIs(const class CResourceName  *, ResourceType_t); /* linkage=_ZNK13CResourceName12AssertTypeIsEy */
	bool ProcessName(class CResourceName *, ResourceType_t, bool); /* linkage=_ZN13CResourceName11ProcessNameEyb */
	void ~CResourceName(class CResourceName *); /* linkage=_ZN13CResourceNameD4Ev */
};

// <0583B027> ../../public/resourcefile/resourcetype.h:318
// member functions: 41
// member variables: 3
// class size: 224
class CResourceName {
	/* ../../public/resourcefile/resourcetype.h:321 */
	void CResourceName(CResourceName* );
	/* ../../public/resourcefile/resourcetype.h:322 */
	void CResourceName(CResourceName* , const CResourceName& );
	/* ../../public/resourcefile/resourcetype.h:323 */
	void CResourceName(CResourceName* , const char* );
	/* ../../public/resourcefile/resourcetype.h:324 */
	void CResourceName(CResourceName* , const char* , ResourceType_t);
	/* ../../public/resourcefile/resourcetype.h:326 */
	void CopyFrom(CResourceName* , const CResourceName& );
	/* ../../public/resourcefile/resourcetype.h:327 */
	const CResourceName& operator=(CResourceName* , const CResourceName& );
	/* ../../public/resourcefile/resourcetype.h:329 */
	void Clear(CResourceName* );
	/* ../../public/resourcefile/resourcetype.h:331 */
	bool IsEmpty(const CResourceName* );
	/* ../../public/resourcefile/resourcetype.h:334 */
	bool Init(CResourceName* , const char* );
	/* ../../public/resourcefile/resourcetype.h:335 */
	bool Init(CResourceName* , const char* , ResourceType_t);
	/* ../../public/resourcefile/resourcetype.h:338 */
	bool InitAndForceType(CResourceName* , const char* , ResourceType_t);
	/* ../../public/resourcefile/resourcetype.h:341 */
	bool InitFormat(CResourceName* , const char* , ...);
	/* ../../public/resourcefile/resourcetype.h:342 */
	bool InitFormat(CResourceName* , ResourceType_t, const char* , ...);
	/* ../../public/resourcefile/resourcetype.h:344 */
	const char* GetName(const CResourceName* );
	/* ../../public/resourcefile/resourcetype.h:347 */
	const char* String(const CResourceName* );
	/* ../../public/resourcefile/resourcetype.h:348 */
	const char* Get(const CResourceName* );
	/* ../../public/resourcefile/resourcetype.h:350 */
	ResourceType_t GetType(const CResourceName* );
	/* ../../public/resourcefile/resourcetype.h:351 */
	ResourceId_t GetId(const CResourceName* );
	/* ../../public/resourcefile/resourcetype.h:354 */
	bool AssertTypeIs(const CResourceName* , ResourceType_t);
protected:
	/* ../../public/resourcefile/resourcetype.h:357 */
	bool ProcessName(CResourceName* , ResourceType_t, bool);
	CPathBufferString m_Name; /* 0 208 */
	ResourceId_t m_Id; /* 208 8 */
	ResourceType_t m_Type; /* 216 8 */
	void CResourceName(class CResourceName *); /* linkage=_ZN13CResourceNameC4Ev */
	void CResourceName(class CResourceName *, const class CResourceName  &); /* linkage=_ZN13CResourceNameC4ERKS_ */
	void CResourceName(class CResourceName *, const char  *); /* linkage=_ZN13CResourceNameC4EPKc */
	void CResourceName(class CResourceName *, const char  *, ResourceType_t); /* linkage=_ZN13CResourceNameC4EPKcy */
	void CopyFrom(class CResourceName *, const class CResourceName  &); /* linkage=_ZN13CResourceName8CopyFromERKS_ */
	const class CResourceName  & operator=(class CResourceName *, const class CResourceName  &); /* linkage=_ZN13CResourceNameaSERKS_ */
	/* <66d39f4> resourcefile/resourcedictionary.cpp:464 */
	void Clear(class CResourceName *); /* linkage=_ZN13CResourceName5ClearEv */
	bool IsEmpty(const class CResourceName  *); /* linkage=_ZNK13CResourceName7IsEmptyEv */
	/* <66d3aa6> resourcefile/resourcedictionary.cpp:482 */
	bool Init(class CResourceName *, const char  *); /* linkage=_ZN13CResourceName4InitEPKc */
	/* <66d3c35> resourcefile/resourcedictionary.cpp:491 */
	bool Init(class CResourceName *, const char  *, ResourceType_t); /* linkage=_ZN13CResourceName4InitEPKcy */
	bool InitAndForceType(class CResourceName *, const char  *, ResourceType_t); /* linkage=_ZN13CResourceName16InitAndForceTypeEPKcy */
	bool InitFormat(class CResourceName *, const char  *, ...); /* linkage=_ZN13CResourceName10InitFormatEPKcz */
	bool InitFormat(class CResourceName *, ResourceType_t, const char  *, ...); /* linkage=_ZN13CResourceName10InitFormatEyPKcz */
	const char  * GetName(const class CResourceName  *); /* linkage=_ZNK13CResourceName7GetNameEv */
	const char  * String(const class CResourceName  *); /* linkage=_ZNK13CResourceName6StringEv */
	const char  * Get(const class CResourceName  *); /* linkage=_ZNK13CResourceName3GetEv */
	ResourceType_t GetType(const class CResourceName  *); /* linkage=_ZNK13CResourceName7GetTypeEv */
	class ResourceId_t GetId(const class CResourceName  *); /* linkage=_ZNK13CResourceName5GetIdEv */
	bool AssertTypeIs(const class CResourceName  *, ResourceType_t); /* linkage=_ZNK13CResourceName12AssertTypeIsEy */
	bool ProcessName(class CResourceName *, ResourceType_t, bool); /* linkage=_ZN13CResourceName11ProcessNameEyb */
	void ~CResourceName(class CResourceName *); /* linkage=_ZN13CResourceNameD4Ev */
};

// <0589764C> ../../public/resourcefile/resourcetype.h:318
// member functions: 42
// member variables: 3
// class size: 224
class CResourceName {
	/* ../../public/resourcefile/resourcetype.h:321 */
	void CResourceName(CResourceName* );
	/* ../../public/resourcefile/resourcetype.h:322 */
	void CResourceName(CResourceName* , const CResourceName& );
	/* ../../public/resourcefile/resourcetype.h:323 */
	void CResourceName(CResourceName* , const char* );
	/* ../../public/resourcefile/resourcetype.h:324 */
	void CResourceName(CResourceName* , const char* , ResourceType_t);
	/* ../../public/resourcefile/resourcetype.h:326 */
	void CopyFrom(CResourceName* , const CResourceName& );
	/* ../../public/resourcefile/resourcetype.h:327 */
	const CResourceName& operator=(CResourceName* , const CResourceName& );
	/* ../../public/resourcefile/resourcetype.h:329 */
	void Clear(CResourceName* );
	/* ../../public/resourcefile/resourcetype.h:331 */
	bool IsEmpty(const CResourceName* );
	/* ../../public/resourcefile/resourcetype.h:334 */
	bool Init(CResourceName* , const char* );
	/* ../../public/resourcefile/resourcetype.h:335 */
	bool Init(CResourceName* , const char* , ResourceType_t);
	/* ../../public/resourcefile/resourcetype.h:338 */
	bool InitAndForceType(CResourceName* , const char* , ResourceType_t);
	/* ../../public/resourcefile/resourcetype.h:341 */
	bool InitFormat(CResourceName* , const char* , ...);
	/* ../../public/resourcefile/resourcetype.h:342 */
	bool InitFormat(CResourceName* , ResourceType_t, const char* , ...);
	/* ../../public/resourcefile/resourcetype.h:344 */
	const char* GetName(const CResourceName* );
	/* ../../public/resourcefile/resourcetype.h:347 */
	const char* String(const CResourceName* );
	/* ../../public/resourcefile/resourcetype.h:348 */
	const char* Get(const CResourceName* );
	/* ../../public/resourcefile/resourcetype.h:350 */
	ResourceType_t GetType(const CResourceName* );
	/* ../../public/resourcefile/resourcetype.h:351 */
	ResourceId_t GetId(const CResourceName* );
	/* ../../public/resourcefile/resourcetype.h:354 */
	bool AssertTypeIs(const CResourceName* , ResourceType_t);
protected:
	/* ../../public/resourcefile/resourcetype.h:357 */
	bool ProcessName(CResourceName* , ResourceType_t, bool);
	CPathBufferString m_Name; /* 0 208 */
	ResourceId_t m_Id; /* 208 8 */
	ResourceType_t m_Type; /* 216 8 */
	void ~CResourceName(CResourceName* );
	void CResourceName(class CResourceName *); /* linkage=_ZN13CResourceNameC4Ev */
	void CResourceName(class CResourceName *, const class CResourceName  &); /* linkage=_ZN13CResourceNameC4ERKS_ */
	void CResourceName(class CResourceName *, const char  *); /* linkage=_ZN13CResourceNameC4EPKc */
	void CResourceName(class CResourceName *, const char  *, ResourceType_t); /* linkage=_ZN13CResourceNameC4EPKcy */
	void CopyFrom(class CResourceName *, const class CResourceName  &); /* linkage=_ZN13CResourceName8CopyFromERKS_ */
	const class CResourceName  & operator=(class CResourceName *, const class CResourceName  &); /* linkage=_ZN13CResourceNameaSERKS_ */
	/* <66d39f4> resourcefile/resourcedictionary.cpp:464 */
	void Clear(class CResourceName *); /* linkage=_ZN13CResourceName5ClearEv */
	bool IsEmpty(const class CResourceName  *); /* linkage=_ZNK13CResourceName7IsEmptyEv */
	/* <66d3aa6> resourcefile/resourcedictionary.cpp:482 */
	bool Init(class CResourceName *, const char  *); /* linkage=_ZN13CResourceName4InitEPKc */
	/* <66d3c35> resourcefile/resourcedictionary.cpp:491 */
	bool Init(class CResourceName *, const char  *, ResourceType_t); /* linkage=_ZN13CResourceName4InitEPKcy */
	bool InitAndForceType(class CResourceName *, const char  *, ResourceType_t); /* linkage=_ZN13CResourceName16InitAndForceTypeEPKcy */
	bool InitFormat(class CResourceName *, const char  *, ...); /* linkage=_ZN13CResourceName10InitFormatEPKcz */
	bool InitFormat(class CResourceName *, ResourceType_t, const char  *, ...); /* linkage=_ZN13CResourceName10InitFormatEyPKcz */
	const char  * GetName(const class CResourceName  *); /* linkage=_ZNK13CResourceName7GetNameEv */
	const char  * String(const class CResourceName  *); /* linkage=_ZNK13CResourceName6StringEv */
	const char  * Get(const class CResourceName  *); /* linkage=_ZNK13CResourceName3GetEv */
	ResourceType_t GetType(const class CResourceName  *); /* linkage=_ZNK13CResourceName7GetTypeEv */
	class ResourceId_t GetId(const class CResourceName  *); /* linkage=_ZNK13CResourceName5GetIdEv */
	bool AssertTypeIs(const class CResourceName  *, ResourceType_t); /* linkage=_ZNK13CResourceName12AssertTypeIsEy */
	bool ProcessName(class CResourceName *, ResourceType_t, bool); /* linkage=_ZN13CResourceName11ProcessNameEyb */
	void ~CResourceName(class CResourceName *); /* linkage=_ZN13CResourceNameD4Ev */
};

// <06E22F1F> ../../public/resourcefile/resourcetype.h:321
void CResourceName::CResourceName()
{
} /* size: 0 */

// <023838BB> ../public/resourcefile/resourcetype.h:322
void CResourceName::CResourceName(const CResourceName& rhs)
{
} /* size: 0 */

// <02383895> ../public/resourcefile/resourcetype.h:322
inline void CResourceName::CResourceName(const CResourceName& rhs)
{
} /* size: 0 */

// <06067251> ../public/resourcefile/resourcetype.h:323
void CResourceName::CResourceName(const char* pResourceName)
{
} /* size: 0 */

// <0670D0C4> ../public/resourcefile/resourcetype.h:324
void CResourceName::CResourceName(const char* pResourceName, ResourceType_t nType)
{
} /* size: 0 */

// <00F42279> ../public/resourcefile/resourcetype.h:347
inline void CResourceName::String()
{
} /* size: 0 */

// <06E2A574> ../../public/resourcefile/resourcetype.h:348
inline void CResourceName::Get()
{
} /* size: 0 */

// <00F31F2B> ../public/resourcefile/resourcetype.h:367
void CResourceNameFmt::~CResourceNameFmt()
{
} /* size: 0 */

// <00F31F0D> ../public/resourcefile/resourcetype.h:367
inline void CResourceNameFmt::~CResourceNameFmt()
{
} /* size: 0 */

// <00EAEF38> ../public/resourcefile/resourcetype.h:367
// member functions: 4
// member variable: 1
// class size: 224
class CResourceNameFmt : public CResourceName {
public:
	/* class CResourceName <ancestor>; */ /* 0 224 */
	/* ../public/resourcefile/resourcetype.h:370 */
	void CResourceNameFmt(CResourceNameFmt* , const char* , ...);
	void ~CResourceNameFmt(CResourceNameFmt* );
	void CResourceNameFmt(class CResourceNameFmt *, const char  *, ...); /* linkage=_ZN16CResourceNameFmtC4EPKcz */
	void ~CResourceNameFmt(class CResourceNameFmt *); /* linkage=_ZN16CResourceNameFmtD4Ev */
};

// <0311514C> ../public/resourcefile/resourcetype.h:367
// member functions: 3
// member variable: 1
// class size: 224
class CResourceNameFmt : public CResourceName {
public:
	/* class CResourceName <ancestor>; */ /* 0 224 */
	/* ../public/resourcefile/resourcetype.h:370 */
	void CResourceNameFmt(CResourceNameFmt* , const char* , ...);
	void CResourceNameFmt(class CResourceNameFmt *, const char  *, ...); /* linkage=_ZN16CResourceNameFmtC4EPKcz */
	void ~CResourceNameFmt(class CResourceNameFmt *); /* linkage=_ZN16CResourceNameFmtD4Ev */
};

// <00F1E277> ../public/resourcefile/resourcetype.h:370
void CResourceNameFmt::CResourceNameFmt(const char* pFormat, ...)
{
} /* size: 0 */

