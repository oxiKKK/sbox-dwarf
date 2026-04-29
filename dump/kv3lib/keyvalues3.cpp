
//
// kv3lib/keyvalues3.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 711
//	classes: 10
//	structs: 3
//

// <055443E9> kv3lib/keyvalues3.cpp:28
bool LoadKV3Text(KeyValues3 *, CUtlString *, const char *, const KV3ID_t &, const char *)
{
} /* size: 0 */

// <055443B9> kv3lib/keyvalues3.cpp:31
bool SaveKV3Text(const KV3ID_t &, const KV3ID_t &, const KeyValues3 *, CUtlString *, CUtlBuffer *)
{
} /* size: 0 */

// <05544389> kv3lib/keyvalues3.cpp:32
bool SaveKV3Binary(const KV3ID_t &, const KV3ID_t &, const KeyValues3 *, CUtlString *, CUtlBuffer *)
{
} /* size: 0 */

// <0557C84C> kv3lib/keyvalues3.cpp:93
bool IsInternalTypeNumeric(KeyValues3InternalType_t nType)
{
} /* size: 0 */

// <0557C7D8> kv3lib/keyvalues3.cpp:114
// variables: 2
const char* ExternalNameForInternalType(KeyValues3InternalType_t nType)
{
	const char   __FUNCTION__; // 36116
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 119
	}
} /* size: 0, variables: 1 */

// <028F41D2> kv3lib/keyvalues3.cpp:114
// variables: 2
const char* ExternalNameForInternalType(KeyValues3InternalType_t nType)
{
	const char   __FUNCTION__; // 54787
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 119
	}
} /* size: 0, variables: 1 */

// <01259404> kv3lib/keyvalues3.cpp:114
// variables: 2
const char* ExternalNameForInternalType(KeyValues3InternalType_t nType)
{
	const char   __FUNCTION__; // 16371
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 119
	}
} /* size: 0, variables: 1 */

// <002D4BC9> kv3lib/keyvalues3.cpp:114
// variables: 2
const char* ExternalNameForInternalType(KeyValues3InternalType_t nType)
{
	const char   __FUNCTION__; // 2538
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 119
	}
} /* size: 0, variables: 1 */

// <00639DCB> kv3lib/keyvalues3.cpp:114
// variables: 2
const char* ExternalNameForInternalType(KeyValues3InternalType_t nType)
{
	const char   __FUNCTION__; // 28524
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 119
	}
} /* size: 0, variables: 1 */

// <00A11A52> kv3lib/keyvalues3.cpp:114
// variables: 2
const char* ExternalNameForInternalType(KeyValues3InternalType_t nType)
{
	const char   __FUNCTION__; // 34675
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 119
	}
} /* size: 0, variables: 1 */

// <0011E5D3> kv3lib/keyvalues3.cpp:114
// variables: 2
const char* ExternalNameForInternalType(KeyValues3InternalType_t nType)
{
	const char   __FUNCTION__; // 27172
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 119
	}
} /* size: 0, variables: 1 */

// <05528552> kv3lib/keyvalues3.cpp:151
// member functions: 10
// member variables: 2
// class size: 72
class CKeyValues3Array {
	/* kv3lib/keyvalues3.cpp:154 */
	void CKeyValues3Array(CKeyValues3Array* , int32);
	/* kv3lib/keyvalues3.cpp:155 */
	void ~CKeyValues3Array(CKeyValues3Array* );
	/* kv3lib/keyvalues3.cpp:157 */
	void Expand(CKeyValues3Array* );
	/* kv3lib/keyvalues3.cpp:162 */
	int GetElementCount(const CKeyValues3Array* );
	/* kv3lib/keyvalues3.cpp:167 */
	KeyValues3* GetElement(CKeyValues3Array* , int);
	const int32 m_nClusterIndex; /* 0 4 */
	CUtlVectorFixedGrowable<KeyValues3*, 4> m_Elements __attribute__((__aligned__(8))); /* 8 64 */
	void CKeyValues3Array(class CKeyValues3Array *, int32); /* linkage=_ZN16CKeyValues3ArrayC4Ei */
	void ~CKeyValues3Array(class CKeyValues3Array *); /* linkage=_ZN16CKeyValues3ArrayD4Ev */
	void Expand(class CKeyValues3Array *); /* linkage=_ZN16CKeyValues3Array6ExpandEv */
	int GetElementCount(const class CKeyValues3Array  *); /* linkage=_ZNK16CKeyValues3Array15GetElementCountEv */
	class KeyValues3 * GetElement(class CKeyValues3Array *, int); /* linkage=_ZN16CKeyValues3Array10GetElementEi */
} __attribute__((__aligned__(8)));

// <0557C788> kv3lib/keyvalues3.cpp:154
void CKeyValues3Array::CKeyValues3Array(int32 nClusterIndex)
{
} /* size: 0 */

// <0557C763> kv3lib/keyvalues3.cpp:154
inline void CKeyValues3Array::CKeyValues3Array(int32 nClusterIndex)
{
} /* size: 0 */

// <0557C74C> kv3lib/keyvalues3.cpp:155
void CKeyValues3Array::~CKeyValues3Array()
{
} /* size: 0 */

// <0557C733> kv3lib/keyvalues3.cpp:155
inline void CKeyValues3Array::~CKeyValues3Array()
{
} /* size: 0 */

// <0557C71A> kv3lib/keyvalues3.cpp:157
inline void CKeyValues3Array::Expand()
{
} /* size: 0 */

// <0557C701> kv3lib/keyvalues3.cpp:162
inline void CKeyValues3Array::GetElementCount()
{
} /* size: 0 */

// <0557C6B3> kv3lib/keyvalues3.cpp:167
// variables: 2
inline void CKeyValues3Array::GetElement(int nIndex)
{
	const char   __FUNCTION__; // 35672
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 177
	}
} /* size: 0, variables: 1 */

// <028F40AD> kv3lib/keyvalues3.cpp:167
// variables: 2
inline void CKeyValues3Array::GetElement(int nIndex)
{
	const char   __FUNCTION__; // 54343
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 177
	}
} /* size: 0, variables: 1 */

// <012592DF> kv3lib/keyvalues3.cpp:167
// variables: 2
inline void CKeyValues3Array::GetElement(int nIndex)
{
	const char   __FUNCTION__; // 15927
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 177
	}
} /* size: 0, variables: 1 */

// <002D4AA4> kv3lib/keyvalues3.cpp:167
// variables: 2
inline void CKeyValues3Array::GetElement(int nIndex)
{
	const char   __FUNCTION__; // 2094
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 177
	}
} /* size: 0, variables: 1 */

// <00639CA6> kv3lib/keyvalues3.cpp:167
// variables: 2
inline void CKeyValues3Array::GetElement(int nIndex)
{
	const char   __FUNCTION__; // 28080
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 177
	}
} /* size: 0, variables: 1 */

// <00A1192D> kv3lib/keyvalues3.cpp:167
// variables: 2
inline void CKeyValues3Array::GetElement(int nIndex)
{
	const char   __FUNCTION__; // 34231
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 177
	}
} /* size: 0, variables: 1 */

// <0011E4AE> kv3lib/keyvalues3.cpp:167
// variables: 2
inline void CKeyValues3Array::GetElement(int nIndex)
{
	const char   __FUNCTION__; // 26728
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 177
	}
} /* size: 0, variables: 1 */

// <0552812E> kv3lib/keyvalues3.cpp:189
// member functions: 42
// member variables: 6
// static member variables: 2
// class size: 312
class CKeyValues3Table {
	/* kv3lib/keyvalues3.cpp:225 */
	enum MemberFlags_t {
		MEMBER_FLAG_EXTERNAL_NAME = 1,
	};
	/* kv3lib/keyvalues3.cpp:235 */
	struct LargeTableIndex_t {
		CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int> > m_Entries; /* 0 32 */
		void LargeTableIndex_t(LargeTableIndex_t* );
		void ~LargeTableIndex_t(LargeTableIndex_t* );
	};
	/* kv3lib/keyvalues3.cpp:192 */
	void CKeyValues3Table(CKeyValues3Table* , int32);
	/* kv3lib/keyvalues3.cpp:193 */
	void ~CKeyValues3Table(CKeyValues3Table* );
	/* kv3lib/keyvalues3.cpp:195 */
	void Init(CKeyValues3Table* , KeyValues3* );
	/* kv3lib/keyvalues3.cpp:196 */
	void Free(CKeyValues3Table* , KeyValues3* , KeyValues3InternalFreeMode_t);
	/* kv3lib/keyvalues3.cpp:198 */
	KeyValues3* MemberData(CKeyValues3Table* , int);
	/* kv3lib/keyvalues3.cpp:199 */
	const KeyValues3* MemberData(const CKeyValues3Table* , int);
	/* kv3lib/keyvalues3.cpp:200 */
	const char* MemberName(const CKeyValues3Table* , int);
	/* kv3lib/keyvalues3.cpp:201 */
	KeyValues3LowercaseHash_t MemberNameHash(const CKeyValues3Table* , int);
	/* kv3lib/keyvalues3.cpp:202 */
	CKV3MemberName KV3MemberName(const CKeyValues3Table* , int);
	/* kv3lib/keyvalues3.cpp:204 */
	void Clear(CKeyValues3Table* , KeyValues3* , uint);
	/* kv3lib/keyvalues3.cpp:206 */
	void CopyFrom(CKeyValues3Table* , KeyValues3* , const CKeyValues3Table* );
	/* kv3lib/keyvalues3.cpp:208 */
	bool IsIdenticalTo(const CKeyValues3Table* , const CKeyValues3Table* , bool);
	/* kv3lib/keyvalues3.cpp:210 */
	int Count(const CKeyValues3Table* );
	/* kv3lib/keyvalues3.cpp:211 */
	void Remove(CKeyValues3Table* , KeyValues3* , int);
	/* kv3lib/keyvalues3.cpp:212 */
	bool Remove(CKeyValues3Table* , KeyValues3* , KeyValues3* );
	/* kv3lib/keyvalues3.cpp:213 */
	void RenameMember(CKeyValues3Table* , KeyValues3* , int, CKV3MemberName);
	/* kv3lib/keyvalues3.cpp:216 */
	int FindMember_Internal(const CKeyValues3Table* , CKV3MemberName, uint& );
	/* kv3lib/keyvalues3.cpp:217 */
	int FindOrCreateMember_Internal(CKeyValues3Table* , KeyValues3* , CKV3MemberName, bool, bool* );
	/* kv3lib/keyvalues3.cpp:218 */
	int AddMember_Internal(CKeyValues3Table* , KeyValues3* , CKV3MemberName, bool);
	/* kv3lib/keyvalues3.cpp:219 */
	void InitLargeTableIndex_Internal(CKeyValues3Table* );
	const int32 m_nClusterIndex; /* 0 4 */
private:
	static const int LARGE_TABLE_INDEX_CREATION_THRESHOLD = 128; /* 0 0 */
	static const int KV3_TABLE_EMBEDDED_MEMBER_STORAGE_COUNT = 8; /* 0 0 */
	LargeTableIndex_t * m_pLargeTableIndex; /* 8 8 */
	CUtlVectorFixedGrowable<CUtlStringToken, 8> m_MemberNameLowerHash __attribute__((__aligned__(8))); /* 16 64 */
	CUtlVectorFixedGrowable<KeyValues3*, 8> m_MemberData __attribute__((__aligned__(8))); /* 80 96 */
	CUtlVectorFixedGrowable<char const*, 8> m_MemberName __attribute__((__aligned__(8))); /* 176 96 */
	CUtlVectorFixedGrowable<unsigned char, 8> m_MemberFlags __attribute__((__aligned__(8))); /* 272 40 */
	void CKeyValues3Table(class CKeyValues3Table *, int32); /* linkage=_ZN16CKeyValues3TableC4Ei */
	void ~CKeyValues3Table(class CKeyValues3Table *); /* linkage=_ZN16CKeyValues3TableD4Ev */
	/* <5584b11> kv3lib/keyvalues3.cpp:3185 */
	void Init(class CKeyValues3Table *, class KeyValues3 *); /* linkage=_ZN16CKeyValues3Table4InitEP10KeyValues3 */
	void Free(class CKeyValues3Table *, class KeyValues3 *, enum KeyValues3InternalFreeMode_t); /* linkage=_ZN16CKeyValues3Table4FreeEP10KeyValues328KeyValues3InternalFreeMode_t */
	/* <55851dd> kv3lib/keyvalues3.cpp:3336 */
	class KeyValues3 * MemberData(class CKeyValues3Table *, int); /* linkage=_ZN16CKeyValues3Table10MemberDataEi */
	/* <55852be> kv3lib/keyvalues3.cpp:3351 */
	const class KeyValues3  * MemberData(const class CKeyValues3Table  *, int); /* linkage=_ZNK16CKeyValues3Table10MemberDataEi */
	/* <558539f> kv3lib/keyvalues3.cpp:3366 */
	const char  * MemberName(const class CKeyValues3Table  *, int); /* linkage=_ZNK16CKeyValues3Table10MemberNameEi */
	/* <5585480> kv3lib/keyvalues3.cpp:3381 */
	KeyValues3LowercaseHash_t MemberNameHash(const class CKeyValues3Table  *, int); /* linkage=_ZNK16CKeyValues3Table14MemberNameHashEi */
	class CKV3MemberName KV3MemberName(const class CKeyValues3Table  *, int); /* linkage=_ZNK16CKeyValues3Table13KV3MemberNameEi */
	void Clear(class CKeyValues3Table *, class KeyValues3 *, uint); /* linkage=_ZN16CKeyValues3Table5ClearEP10KeyValues3j */
	void CopyFrom(class CKeyValues3Table *, class KeyValues3 *, const class CKeyValues3Table  *); /* linkage=_ZN16CKeyValues3Table8CopyFromEP10KeyValues3PKS_ */
	bool IsIdenticalTo(const class CKeyValues3Table  *, const class CKeyValues3Table  *, bool); /* linkage=_ZNK16CKeyValues3Table13IsIdenticalToEPKS_b */
	int Count(const class CKeyValues3Table  *); /* linkage=_ZNK16CKeyValues3Table5CountEv */
	void Remove(class CKeyValues3Table *, class KeyValues3 *, int); /* linkage=_ZN16CKeyValues3Table6RemoveEP10KeyValues3i */
	/* <5588459> kv3lib/keyvalues3.cpp:3506 */
	bool Remove(class CKeyValues3Table *, class KeyValues3 *, class KeyValues3 *); /* linkage=_ZN16CKeyValues3Table6RemoveEP10KeyValues3S1_ */
	void RenameMember(class CKeyValues3Table *, class KeyValues3 *, int, class CKV3MemberName); /* linkage=_ZN16CKeyValues3Table12RenameMemberEP10KeyValues3i14CKV3MemberName */
	int FindMember_Internal(const class CKeyValues3Table  *, class CKV3MemberName, uint &); /* linkage=_ZNK16CKeyValues3Table19FindMember_InternalE14CKV3MemberNameRj */
	/* <558b5b9> kv3lib/keyvalues3.cpp:3191 */
	int FindOrCreateMember_Internal(class CKeyValues3Table *, class KeyValues3 *, class CKV3MemberName, bool, bool *); /* linkage=_ZN16CKeyValues3Table27FindOrCreateMember_InternalEP10KeyValues314CKV3MemberNamebPb */
	int AddMember_Internal(class CKeyValues3Table *, class KeyValues3 *, class CKV3MemberName, bool); /* linkage=_ZN16CKeyValues3Table18AddMember_InternalEP10KeyValues314CKV3MemberNameb */
	void InitLargeTableIndex_Internal(class CKeyValues3Table *); /* linkage=_ZN16CKeyValues3Table28InitLargeTableIndex_InternalEv */
} __attribute__((__aligned__(8)));

// <0557C69A> kv3lib/keyvalues3.cpp:210
inline void CKeyValues3Table::Count()
{
} /* size: 0 */

// <05560EC0> kv3lib/keyvalues3.cpp:235
void LargeTableIndex_t::~LargeTableIndex_t()
{
} /* size: 0 */

// <05560EA4> kv3lib/keyvalues3.cpp:235
inline void LargeTableIndex_t::~LargeTableIndex_t()
{
} /* size: 0 */

// <0555FBC6> kv3lib/keyvalues3.cpp:235
void LargeTableIndex_t::LargeTableIndex_t()
{
} /* size: 0 */

// <0555FBAA> kv3lib/keyvalues3.cpp:235
inline void LargeTableIndex_t::LargeTableIndex_t()
{
} /* size: 0 */

// <05528634> kv3lib/keyvalues3.cpp:251
// member functions: 2
// member variable: 1
// struct size: 8
struct KeyValues3BinaryBlob_t {
	/* kv3lib/keyvalues3.cpp:253 */
	const byte* AsByteArray(const KeyValues3BinaryBlob_t* );
	/* kv3lib/keyvalues3.cpp:254 */
	byte* AsByteArray(KeyValues3BinaryBlob_t* );
	intp m_nCount; /* 0 8 */
};

// <0557C681> kv3lib/keyvalues3.cpp:254
inline void KeyValues3BinaryBlob_t::AsByteArray()
{
} /* size: 0 */

// <055286A3> kv3lib/keyvalues3.cpp:262
// member functions: 2
// member variables: 3
// struct size: 24
struct KeyValues3BinaryBlobExternal_t {
	/* kv3lib/keyvalues3.cpp:264 */
	const byte* AsByteArray(const KeyValues3BinaryBlobExternal_t* );
	/* kv3lib/keyvalues3.cpp:265 */
	byte* AsByteArray(KeyValues3BinaryBlobExternal_t* );
	intp m_nCount; /* 0 8 */
	byte * m_pData; /* 8 8 */
	bool m_bOwnsData; /* 16 1 */
};

// <0557C60F> kv3lib/keyvalues3.cpp:274
void CKeyValues3Metadata::~CKeyValues3Metadata()
{
} /* size: 0 */

// <0557C5F2> kv3lib/keyvalues3.cpp:274
inline void CKeyValues3Metadata::~CKeyValues3Metadata()
{
} /* size: 0 */

// <0557C3C8> kv3lib/keyvalues3.cpp:274
void CKeyValues3Metadata::CKeyValues3Metadata()
{
} /* size: 0 */

// <0557C3AB> kv3lib/keyvalues3.cpp:274
inline void CKeyValues3Metadata::CKeyValues3Metadata()
{
} /* size: 0 */

// <0552BFBB> kv3lib/keyvalues3.cpp:274
// member functions: 4
// member variables: 4
// class size: 48
class CKeyValues3Metadata {
	int m_nLineNumber; /* 0 4 */
	CUtlSymbolLarge m_File; /* 8 8 */
	CBufferString m_Preamble; /* 16 16 */
	CBufferString m_Postamble; /* 32 16 */
	void CKeyValues3Metadata(CKeyValues3Metadata* );
	void ~CKeyValues3Metadata(CKeyValues3Metadata* );
	void CKeyValues3Metadata(class CKeyValues3Metadata *); /* linkage=_ZN19CKeyValues3MetadataC4Ev */
	void ~CKeyValues3Metadata(class CKeyValues3Metadata *); /* linkage=_ZN19CKeyValues3MetadataD4Ev */
};

// <0557C5DB> kv3lib/keyvalues3.cpp:286
void CKeyValues3MetadataCluster::~CKeyValues3MetadataCluster()
{
} /* size: 0 */

// <0557C5BE> kv3lib/keyvalues3.cpp:286
inline void CKeyValues3MetadataCluster::~CKeyValues3MetadataCluster()
{
} /* size: 0 */

// <0557C394> kv3lib/keyvalues3.cpp:286
void CKeyValues3MetadataCluster::CKeyValues3MetadataCluster()
{
} /* size: 0 */

// <0557C377> kv3lib/keyvalues3.cpp:286
inline void CKeyValues3MetadataCluster::CKeyValues3MetadataCluster()
{
} /* size: 0 */

// <0553AF2C> kv3lib/keyvalues3.cpp:286
// member functions: 4
// member variable: 1
// class size: 3,024
class CKeyValues3MetadataCluster {
	CKeyValues3Metadata m_Metadata[63]; /* 0 3024 */
	void CKeyValues3MetadataCluster(CKeyValues3MetadataCluster* );
	void ~CKeyValues3MetadataCluster(CKeyValues3MetadataCluster* );
	void CKeyValues3MetadataCluster(class CKeyValues3MetadataCluster *); /* linkage=_ZN26CKeyValues3MetadataClusterC4Ev */
	void ~CKeyValues3MetadataCluster(class CKeyValues3MetadataCluster *); /* linkage=_ZN26CKeyValues3MetadataClusterD4Ev */
};

// <0553AF90> kv3lib/keyvalues3.cpp:303
// member functions: 24
// member variables: 3
// class size: 1,024
class CKV3ClusterAlloc<KeyValues3, 63> {
	/* kv3lib/keyvalues3.cpp:346 */
	void CKV3ClusterAlloc(CKV3ClusterAlloc<KeyValues3, 63>* , CKeyValues3Context* );
	/* kv3lib/keyvalues3.cpp:309 */
	void ~CKV3ClusterAlloc(CKV3ClusterAlloc<KeyValues3, 63>* );
	/* kv3lib/keyvalues3.cpp:311 */
	int Capacity(const CKV3ClusterAlloc<KeyValues3, 63>* );
	/* kv3lib/keyvalues3.cpp:312 */
	int AllocationCount(const CKV3ClusterAlloc<KeyValues3, 63>* );
	/* kv3lib/keyvalues3.cpp:313 */
	bool IsFull(const CKV3ClusterAlloc<KeyValues3, 63>* );
	/* kv3lib/keyvalues3.cpp:314 */
	bool IsEmpty(const CKV3ClusterAlloc<KeyValues3, 63>* );
	/* kv3lib/keyvalues3.cpp:425 */
	void Free(CKV3ClusterAlloc<KeyValues3, 63>* , KeyValues3* );
	/* kv3lib/keyvalues3.cpp:357 */
	KeyValues3* Get(CKV3ClusterAlloc<KeyValues3, 63>* , int);
	/* kv3lib/keyvalues3.cpp:324 */
	CKeyValues3Context* GetParentContext(CKV3ClusterAlloc<KeyValues3, 63>* );
	/* kv3lib/keyvalues3.cpp:387 */
	int GetIndexForEntry(CKV3ClusterAlloc<KeyValues3, 63>* , const KeyValues3* );
	/* kv3lib/keyvalues3.cpp:368 */
	void Dump(CKV3ClusterAlloc<KeyValues3, 63>* );
protected:
	/* kv3lib/keyvalues3.cpp:402 */
	KeyValues3* AllocateEntry(CKV3ClusterAlloc<KeyValues3, 63>* );
	CKeyValues3Context * m_pContext; /* 0 8 */
	uint64 m_nAllocatedFlags; /* 8 8 */
	KeyValues3 m_Values[63]; /* 16 1008 */
	/* kv3lib/keyvalues3.cpp:306 */
	typedef struct KeyValues3 ClusteredType;
	void CKV3ClusterAlloc(class CKV3ClusterAlloc<KeyValues3, 63> *, class CKeyValues3Context *); /* linkage=_ZN16CKV3ClusterAllocI10KeyValues3Li63EEC4EP18CKeyValues3Context */
	void ~CKV3ClusterAlloc(class CKV3ClusterAlloc<KeyValues3, 63> *); /* linkage=_ZN16CKV3ClusterAllocI10KeyValues3Li63EED4Ev */
	int Capacity(const class CKV3ClusterAlloc<KeyValues3, 63>  *); /* linkage=_ZNK16CKV3ClusterAllocI10KeyValues3Li63EE8CapacityEv */
	int AllocationCount(const class CKV3ClusterAlloc<KeyValues3, 63>  *); /* linkage=_ZNK16CKV3ClusterAllocI10KeyValues3Li63EE15AllocationCountEv */
	bool IsFull(const class CKV3ClusterAlloc<KeyValues3, 63>  *); /* linkage=_ZNK16CKV3ClusterAllocI10KeyValues3Li63EE6IsFullEv */
	bool IsEmpty(const class CKV3ClusterAlloc<KeyValues3, 63>  *); /* linkage=_ZNK16CKV3ClusterAllocI10KeyValues3Li63EE7IsEmptyEv */
	void Free(class CKV3ClusterAlloc<KeyValues3, 63> *, class KeyValues3 *); /* linkage=_ZN16CKV3ClusterAllocI10KeyValues3Li63EE4FreeEPS0_ */
	class KeyValues3 * Get(class CKV3ClusterAlloc<KeyValues3, 63> *, int); /* linkage=_ZN16CKV3ClusterAllocI10KeyValues3Li63EE3GetEi */
	class CKeyValues3Context * GetParentContext(class CKV3ClusterAlloc<KeyValues3, 63> *); /* linkage=_ZN16CKV3ClusterAllocI10KeyValues3Li63EE16GetParentContextEv */
	int GetIndexForEntry(class CKV3ClusterAlloc<KeyValues3, 63> *, const class KeyValues3  *); /* linkage=_ZN16CKV3ClusterAllocI10KeyValues3Li63EE16GetIndexForEntryEPKS0_ */
	void Dump(class CKV3ClusterAlloc<KeyValues3, 63> *); /* linkage=_ZN16CKV3ClusterAllocI10KeyValues3Li63EE4DumpEv */
	class KeyValues3 * AllocateEntry(class CKV3ClusterAlloc<KeyValues3, 63> *); /* linkage=_ZN16CKV3ClusterAllocI10KeyValues3Li63EE13AllocateEntryEv */
};

// <0553B342> kv3lib/keyvalues3.cpp:303
// member functions: 12
// member variables: 3
// class size: 4,552
class CKV3ClusterAlloc<CKeyValues3Array, 63> {
	/* kv3lib/keyvalues3.cpp:346 */
	void CKV3ClusterAlloc(CKV3ClusterAlloc<CKeyValues3Array, 63>* , CKeyValues3Context* );
	/* kv3lib/keyvalues3.cpp:309 */
	void ~CKV3ClusterAlloc(CKV3ClusterAlloc<CKeyValues3Array, 63>* );
	/* kv3lib/keyvalues3.cpp:311 */
	int Capacity(const CKV3ClusterAlloc<CKeyValues3Array, 63>* );
	/* kv3lib/keyvalues3.cpp:312 */
	int AllocationCount(const CKV3ClusterAlloc<CKeyValues3Array, 63>* );
	/* kv3lib/keyvalues3.cpp:313 */
	bool IsFull(const CKV3ClusterAlloc<CKeyValues3Array, 63>* );
	/* kv3lib/keyvalues3.cpp:314 */
	bool IsEmpty(const CKV3ClusterAlloc<CKeyValues3Array, 63>* );
	/* kv3lib/keyvalues3.cpp:425 */
	void Free(CKV3ClusterAlloc<CKeyValues3Array, 63>* , CKeyValues3Array* );
	/* kv3lib/keyvalues3.cpp:357 */
	CKeyValues3Array* Get(CKV3ClusterAlloc<CKeyValues3Array, 63>* , int);
	/* kv3lib/keyvalues3.cpp:324 */
	CKeyValues3Context* GetParentContext(CKV3ClusterAlloc<CKeyValues3Array, 63>* );
	/* kv3lib/keyvalues3.cpp:387 */
	int GetIndexForEntry(CKV3ClusterAlloc<CKeyValues3Array, 63>* , const CKeyValues3Array* );
	/* kv3lib/keyvalues3.cpp:368 */
	void Dump(CKV3ClusterAlloc<CKeyValues3Array, 63>* );
protected:
	/* kv3lib/keyvalues3.cpp:402 */
	CKeyValues3Array* AllocateEntry(CKV3ClusterAlloc<CKeyValues3Array, 63>* );
	CKeyValues3Context * m_pContext; /* 0 8 */
	uint64 m_nAllocatedFlags; /* 8 8 */
	CKeyValues3Array m_Values[63] __attribute__((__aligned__(8))); /* 16 4536 */
	/* kv3lib/keyvalues3.cpp:306 */
	typedef struct CKeyValues3Array ClusteredType;
} __attribute__((__aligned__(8)));

// <0553B66B> kv3lib/keyvalues3.cpp:303
// member functions: 24
// member variables: 3
// class size: 19,672
class CKV3ClusterAlloc<CKeyValues3Table, 63> {
	/* kv3lib/keyvalues3.cpp:346 */
	void CKV3ClusterAlloc(CKV3ClusterAlloc<CKeyValues3Table, 63>* , CKeyValues3Context* );
	/* kv3lib/keyvalues3.cpp:309 */
	void ~CKV3ClusterAlloc(CKV3ClusterAlloc<CKeyValues3Table, 63>* );
	/* kv3lib/keyvalues3.cpp:311 */
	int Capacity(const CKV3ClusterAlloc<CKeyValues3Table, 63>* );
	/* kv3lib/keyvalues3.cpp:312 */
	int AllocationCount(const CKV3ClusterAlloc<CKeyValues3Table, 63>* );
	/* kv3lib/keyvalues3.cpp:313 */
	bool IsFull(const CKV3ClusterAlloc<CKeyValues3Table, 63>* );
	/* kv3lib/keyvalues3.cpp:314 */
	bool IsEmpty(const CKV3ClusterAlloc<CKeyValues3Table, 63>* );
	/* kv3lib/keyvalues3.cpp:425 */
	void Free(CKV3ClusterAlloc<CKeyValues3Table, 63>* , CKeyValues3Table* );
	/* kv3lib/keyvalues3.cpp:357 */
	CKeyValues3Table* Get(CKV3ClusterAlloc<CKeyValues3Table, 63>* , int);
	/* kv3lib/keyvalues3.cpp:324 */
	CKeyValues3Context* GetParentContext(CKV3ClusterAlloc<CKeyValues3Table, 63>* );
	/* kv3lib/keyvalues3.cpp:387 */
	int GetIndexForEntry(CKV3ClusterAlloc<CKeyValues3Table, 63>* , const CKeyValues3Table* );
	/* kv3lib/keyvalues3.cpp:368 */
	void Dump(CKV3ClusterAlloc<CKeyValues3Table, 63>* );
protected:
	/* kv3lib/keyvalues3.cpp:402 */
	CKeyValues3Table* AllocateEntry(CKV3ClusterAlloc<CKeyValues3Table, 63>* );
	CKeyValues3Context * m_pContext; /* 0 8 */
	uint64 m_nAllocatedFlags; /* 8 8 */
	CKeyValues3Table m_Values[63] __attribute__((__aligned__(8))); /* 16 19656 */
	/* kv3lib/keyvalues3.cpp:306 */
	typedef struct CKeyValues3Table ClusteredType;
	void CKV3ClusterAlloc(class CKV3ClusterAlloc<CKeyValues3Table, 63> *, class CKeyValues3Context *); /* linkage=_ZN16CKV3ClusterAllocI16CKeyValues3TableLi63EEC4EP18CKeyValues3Context */
	void ~CKV3ClusterAlloc(class CKV3ClusterAlloc<CKeyValues3Table, 63> *); /* linkage=_ZN16CKV3ClusterAllocI16CKeyValues3TableLi63EED4Ev */
	int Capacity(const class CKV3ClusterAlloc<CKeyValues3Table, 63>  *); /* linkage=_ZNK16CKV3ClusterAllocI16CKeyValues3TableLi63EE8CapacityEv */
	int AllocationCount(const class CKV3ClusterAlloc<CKeyValues3Table, 63>  *); /* linkage=_ZNK16CKV3ClusterAllocI16CKeyValues3TableLi63EE15AllocationCountEv */
	bool IsFull(const class CKV3ClusterAlloc<CKeyValues3Table, 63>  *); /* linkage=_ZNK16CKV3ClusterAllocI16CKeyValues3TableLi63EE6IsFullEv */
	bool IsEmpty(const class CKV3ClusterAlloc<CKeyValues3Table, 63>  *); /* linkage=_ZNK16CKV3ClusterAllocI16CKeyValues3TableLi63EE7IsEmptyEv */
	void Free(class CKV3ClusterAlloc<CKeyValues3Table, 63> *, class CKeyValues3Table *); /* linkage=_ZN16CKV3ClusterAllocI16CKeyValues3TableLi63EE4FreeEPS0_ */
	class CKeyValues3Table * Get(class CKV3ClusterAlloc<CKeyValues3Table, 63> *, int); /* linkage=_ZN16CKV3ClusterAllocI16CKeyValues3TableLi63EE3GetEi */
	class CKeyValues3Context * GetParentContext(class CKV3ClusterAlloc<CKeyValues3Table, 63> *); /* linkage=_ZN16CKV3ClusterAllocI16CKeyValues3TableLi63EE16GetParentContextEv */
	int GetIndexForEntry(class CKV3ClusterAlloc<CKeyValues3Table, 63> *, const class CKeyValues3Table  *); /* linkage=_ZN16CKV3ClusterAllocI16CKeyValues3TableLi63EE16GetIndexForEntryEPKS0_ */
	void Dump(class CKV3ClusterAlloc<CKeyValues3Table, 63> *); /* linkage=_ZN16CKV3ClusterAllocI16CKeyValues3TableLi63EE4DumpEv */
	class CKeyValues3Table * AllocateEntry(class CKV3ClusterAlloc<CKeyValues3Table, 63> *); /* linkage=_ZN16CKV3ClusterAllocI16CKeyValues3TableLi63EE13AllocateEntryEv */
} __attribute__((__aligned__(8)));

// <05550A33> kv3lib/keyvalues3.cpp:309
void CKV3ClusterAlloc<KeyValues3, 63>::~CKV3ClusterAlloc()
{
} /* size: 0 */

// <05550A1A> kv3lib/keyvalues3.cpp:309
inline void CKV3ClusterAlloc<KeyValues3, 63>::~CKV3ClusterAlloc()
{
} /* size: 0 */

// <0555084F> kv3lib/keyvalues3.cpp:309
void CKV3ClusterAlloc<CKeyValues3Array, 63>::~CKV3ClusterAlloc()
{
} /* size: 0 */

// <05550836> kv3lib/keyvalues3.cpp:309
inline void CKV3ClusterAlloc<CKeyValues3Array, 63>::~CKV3ClusterAlloc()
{
} /* size: 0 */

// <055507AA> kv3lib/keyvalues3.cpp:309
void CKV3ClusterAlloc<CKeyValues3Table, 63>::~CKV3ClusterAlloc()
{
} /* size: 0 */

// <05550791> kv3lib/keyvalues3.cpp:309
inline void CKV3ClusterAlloc<CKeyValues3Table, 63>::~CKV3ClusterAlloc()
{
} /* size: 0 */

// <0554B1CD> kv3lib/keyvalues3.cpp:311
inline void CKV3ClusterAlloc<KeyValues3, 63>::Capacity()
{
} /* size: 0 */

// <0554B0F2> kv3lib/keyvalues3.cpp:311
inline void CKV3ClusterAlloc<CKeyValues3Array, 63>::Capacity()
{
} /* size: 0 */

// <0554B017> kv3lib/keyvalues3.cpp:311
inline void CKV3ClusterAlloc<CKeyValues3Table, 63>::Capacity()
{
} /* size: 0 */

// <0554B219> kv3lib/keyvalues3.cpp:312
inline void CKV3ClusterAlloc<KeyValues3, 63>::AllocationCount()
{
} /* size: 0 */

// <0554B13E> kv3lib/keyvalues3.cpp:312
inline void CKV3ClusterAlloc<CKeyValues3Array, 63>::AllocationCount()
{
} /* size: 0 */

// <0554B063> kv3lib/keyvalues3.cpp:312
inline void CKV3ClusterAlloc<CKeyValues3Table, 63>::AllocationCount()
{
} /* size: 0 */

// <0554B373> kv3lib/keyvalues3.cpp:313
inline void CKV3ClusterAlloc<KeyValues3, 63>::IsFull()
{
} /* size: 0 */

// <0554B327> kv3lib/keyvalues3.cpp:313
inline void CKV3ClusterAlloc<CKeyValues3Array, 63>::IsFull()
{
} /* size: 0 */

// <0554B2DB> kv3lib/keyvalues3.cpp:313
inline void CKV3ClusterAlloc<CKeyValues3Table, 63>::IsFull()
{
} /* size: 0 */

// <0554D209> kv3lib/keyvalues3.cpp:324
// variables: 2
inline void CKV3ClusterAlloc<KeyValues3, 63>::GetParentContext()
{
	const char   __FUNCTION__; // 35829
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 324
	}
} /* size: 0, variables: 1 */

// <028C4C03> kv3lib/keyvalues3.cpp:324
// variables: 2
inline void CKV3ClusterAlloc<KeyValues3, 63>::GetParentContext()
{
	const char   __FUNCTION__; // 54500
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 324
	}
} /* size: 0, variables: 1 */

// <01229E35> kv3lib/keyvalues3.cpp:324
// variables: 2
inline void CKV3ClusterAlloc<KeyValues3, 63>::GetParentContext()
{
	const char   __FUNCTION__; // 16084
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 324
	}
} /* size: 0, variables: 1 */

// <002A55FA> kv3lib/keyvalues3.cpp:324
// variables: 2
inline void CKV3ClusterAlloc<KeyValues3, 63>::GetParentContext()
{
	const char   __FUNCTION__; // 2251
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 324
	}
} /* size: 0, variables: 1 */

// <0060A7FC> kv3lib/keyvalues3.cpp:324
// variables: 2
inline void CKV3ClusterAlloc<KeyValues3, 63>::GetParentContext()
{
	const char   __FUNCTION__; // 28237
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 324
	}
} /* size: 0, variables: 1 */

// <009E2483> kv3lib/keyvalues3.cpp:324
// variables: 2
inline void CKV3ClusterAlloc<KeyValues3, 63>::GetParentContext()
{
	const char   __FUNCTION__; // 34388
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 324
	}
} /* size: 0, variables: 1 */

// <000EF004> kv3lib/keyvalues3.cpp:324
// variables: 2
inline void CKV3ClusterAlloc<KeyValues3, 63>::GetParentContext()
{
	const char   __FUNCTION__; // 26885
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 324
	}
} /* size: 0, variables: 1 */

// <05550A70> kv3lib/keyvalues3.cpp:346
// function calls: 5
void CKV3ClusterAlloc<KeyValues3, 63>::CKV3ClusterAlloc(CKeyValues3Context* pContext)
{
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 3722
	KeyValues3::Internal_ClearDataWithoutFreeing(); // 3724
	KeyValues3::KeyValues3(
			KeyValues3Type_t nType);  // 347
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 350
} /* size: 105, inline expansions: 5 (61 bytes) */

// <05550A4A> kv3lib/keyvalues3.cpp:346
void CKV3ClusterAlloc<KeyValues3, 63>::CKV3ClusterAlloc(CKeyValues3Context* pContext)
{
} /* size: 0 */

// <0555088C> kv3lib/keyvalues3.cpp:346
void CKV3ClusterAlloc<CKeyValues3Array, 63>::CKV3ClusterAlloc(CKeyValues3Context* pContext)
{
} /* size: 0 */

// <055507E7> kv3lib/keyvalues3.cpp:346
void CKV3ClusterAlloc<CKeyValues3Table, 63>::CKV3ClusterAlloc(CKeyValues3Context* pContext)
{
} /* size: 0 */

// <0554CB3D> kv3lib/keyvalues3.cpp:357
void CKV3ClusterAlloc<KeyValues3, 63>::Get(int nIndex)
{
} /* size: 0 */

// <055508A8> kv3lib/keyvalues3.cpp:387
// variable: 1
void CKV3ClusterAlloc<KeyValues3, 63>::GetIndexForEntry(const KeyValues3* pEntry)
{
	size_t nIndex; // 392
	{
	}
	{
	}
} /* size: 0, variables: 1 */

// <055509E7> kv3lib/keyvalues3.cpp:402
// variables: 2
void CKV3ClusterAlloc<KeyValues3, 63>::AllocateEntry()
{
	int nIndexOfZeroBit; // 407
	uint64 nMask; // 414
} /* size: 0, variables: 2 */

// <05550803> kv3lib/keyvalues3.cpp:402
// variables: 2
void CKV3ClusterAlloc<CKeyValues3Array, 63>::AllocateEntry()
{
	int nIndexOfZeroBit; // 407
	uint64 nMask; // 414
} /* size: 0, variables: 2 */

// <0555075E> kv3lib/keyvalues3.cpp:402
// variables: 2
void CKV3ClusterAlloc<CKeyValues3Table, 63>::AllocateEntry()
{
	int nIndexOfZeroBit; // 407
	uint64 nMask; // 414
} /* size: 0, variables: 2 */

// <0554B232> kv3lib/keyvalues3.cpp:425
// variables: 5
void CKV3ClusterAlloc<KeyValues3, 63>::Free(KeyValues3* pKV3)
{
	const char   __FUNCTION__; // 35515
	bool bInCluster; // 427
	size_t nIndex; // 432
	uint64 nMask; // 434
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 441
	}
} /* size: 0, variables: 4 */

// <0554B157> kv3lib/keyvalues3.cpp:425
// variables: 5
void CKV3ClusterAlloc<CKeyValues3Array, 63>::Free(CKeyValues3Array* pKV3)
{
	const char   __FUNCTION__; // 35515
	bool bInCluster; // 427
	size_t nIndex; // 432
	uint64 nMask; // 434
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 441
	}
} /* size: 0, variables: 4 */

// <0554B07C> kv3lib/keyvalues3.cpp:425
// variables: 5
void CKV3ClusterAlloc<CKeyValues3Table, 63>::Free(CKeyValues3Table* pKV3)
{
	const char   __FUNCTION__; // 35515
	bool bInCluster; // 427
	size_t nIndex; // 432
	uint64 nMask; // 434
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 441
	}
} /* size: 0, variables: 4 */

// <028C2C2C> kv3lib/keyvalues3.cpp:425
// variables: 5
void CKV3ClusterAlloc<KeyValues3, 63>::Free(KeyValues3* pKV3)
{
	const char   __FUNCTION__; // 54186
	bool bInCluster; // 427
	size_t nIndex; // 432
	uint64 nMask; // 434
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 441
	}
} /* size: 0, variables: 4 */

// <028C2B51> kv3lib/keyvalues3.cpp:425
// variables: 5
void CKV3ClusterAlloc<CKeyValues3Array, 63>::Free(CKeyValues3Array* pKV3)
{
	const char   __FUNCTION__; // 54186
	bool bInCluster; // 427
	size_t nIndex; // 432
	uint64 nMask; // 434
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 441
	}
} /* size: 0, variables: 4 */

// <028C2A76> kv3lib/keyvalues3.cpp:425
// variables: 5
void CKV3ClusterAlloc<CKeyValues3Table, 63>::Free(CKeyValues3Table* pKV3)
{
	const char   __FUNCTION__; // 54186
	bool bInCluster; // 427
	size_t nIndex; // 432
	uint64 nMask; // 434
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 441
	}
} /* size: 0, variables: 4 */

// <01227E5E> kv3lib/keyvalues3.cpp:425
// variables: 5
void CKV3ClusterAlloc<KeyValues3, 63>::Free(KeyValues3* pKV3)
{
	const char   __FUNCTION__; // 15770
	bool bInCluster; // 427
	size_t nIndex; // 432
	uint64 nMask; // 434
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 441
	}
} /* size: 0, variables: 4 */

// <01227D83> kv3lib/keyvalues3.cpp:425
// variables: 5
void CKV3ClusterAlloc<CKeyValues3Array, 63>::Free(CKeyValues3Array* pKV3)
{
	const char   __FUNCTION__; // 15770
	bool bInCluster; // 427
	size_t nIndex; // 432
	uint64 nMask; // 434
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 441
	}
} /* size: 0, variables: 4 */

// <01227CA8> kv3lib/keyvalues3.cpp:425
// variables: 5
void CKV3ClusterAlloc<CKeyValues3Table, 63>::Free(CKeyValues3Table* pKV3)
{
	const char   __FUNCTION__; // 15770
	bool bInCluster; // 427
	size_t nIndex; // 432
	uint64 nMask; // 434
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 441
	}
} /* size: 0, variables: 4 */

// <002A3623> kv3lib/keyvalues3.cpp:425
// variables: 5
void CKV3ClusterAlloc<KeyValues3, 63>::Free(KeyValues3* pKV3)
{
	const char   __FUNCTION__; // 1937
	bool bInCluster; // 427
	size_t nIndex; // 432
	uint64 nMask; // 434
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 441
	}
} /* size: 0, variables: 4 */

// <002A3548> kv3lib/keyvalues3.cpp:425
// variables: 5
void CKV3ClusterAlloc<CKeyValues3Array, 63>::Free(CKeyValues3Array* pKV3)
{
	const char   __FUNCTION__; // 1937
	bool bInCluster; // 427
	size_t nIndex; // 432
	uint64 nMask; // 434
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 441
	}
} /* size: 0, variables: 4 */

// <002A346D> kv3lib/keyvalues3.cpp:425
// variables: 5
void CKV3ClusterAlloc<CKeyValues3Table, 63>::Free(CKeyValues3Table* pKV3)
{
	const char   __FUNCTION__; // 1937
	bool bInCluster; // 427
	size_t nIndex; // 432
	uint64 nMask; // 434
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 441
	}
} /* size: 0, variables: 4 */

// <00608825> kv3lib/keyvalues3.cpp:425
// variables: 5
void CKV3ClusterAlloc<KeyValues3, 63>::Free(KeyValues3* pKV3)
{
	const char   __FUNCTION__; // 27923
	bool bInCluster; // 427
	size_t nIndex; // 432
	uint64 nMask; // 434
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 441
	}
} /* size: 0, variables: 4 */

// <0060874A> kv3lib/keyvalues3.cpp:425
// variables: 5
void CKV3ClusterAlloc<CKeyValues3Array, 63>::Free(CKeyValues3Array* pKV3)
{
	const char   __FUNCTION__; // 27923
	bool bInCluster; // 427
	size_t nIndex; // 432
	uint64 nMask; // 434
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 441
	}
} /* size: 0, variables: 4 */

// <0060866F> kv3lib/keyvalues3.cpp:425
// variables: 5
void CKV3ClusterAlloc<CKeyValues3Table, 63>::Free(CKeyValues3Table* pKV3)
{
	const char   __FUNCTION__; // 27923
	bool bInCluster; // 427
	size_t nIndex; // 432
	uint64 nMask; // 434
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 441
	}
} /* size: 0, variables: 4 */

// <009E04AC> kv3lib/keyvalues3.cpp:425
// variables: 5
void CKV3ClusterAlloc<KeyValues3, 63>::Free(KeyValues3* pKV3)
{
	const char   __FUNCTION__; // 34074
	bool bInCluster; // 427
	size_t nIndex; // 432
	uint64 nMask; // 434
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 441
	}
} /* size: 0, variables: 4 */

// <009E03D1> kv3lib/keyvalues3.cpp:425
// variables: 5
void CKV3ClusterAlloc<CKeyValues3Array, 63>::Free(CKeyValues3Array* pKV3)
{
	const char   __FUNCTION__; // 34074
	bool bInCluster; // 427
	size_t nIndex; // 432
	uint64 nMask; // 434
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 441
	}
} /* size: 0, variables: 4 */

// <009E02F6> kv3lib/keyvalues3.cpp:425
// variables: 5
void CKV3ClusterAlloc<CKeyValues3Table, 63>::Free(CKeyValues3Table* pKV3)
{
	const char   __FUNCTION__; // 34074
	bool bInCluster; // 427
	size_t nIndex; // 432
	uint64 nMask; // 434
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 441
	}
} /* size: 0, variables: 4 */

// <000ED02D> kv3lib/keyvalues3.cpp:425
// variables: 5
void CKV3ClusterAlloc<KeyValues3, 63>::Free(KeyValues3* pKV3)
{
	const char   __FUNCTION__; // 26571
	bool bInCluster; // 427
	size_t nIndex; // 432
	uint64 nMask; // 434
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 441
	}
} /* size: 0, variables: 4 */

// <000ECF52> kv3lib/keyvalues3.cpp:425
// variables: 5
void CKV3ClusterAlloc<CKeyValues3Array, 63>::Free(CKeyValues3Array* pKV3)
{
	const char   __FUNCTION__; // 26571
	bool bInCluster; // 427
	size_t nIndex; // 432
	uint64 nMask; // 434
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 441
	}
} /* size: 0, variables: 4 */

// <000ECE77> kv3lib/keyvalues3.cpp:425
// variables: 5
void CKV3ClusterAlloc<CKeyValues3Table, 63>::Free(CKeyValues3Table* pKV3)
{
	const char   __FUNCTION__; // 26571
	bool bInCluster; // 427
	size_t nIndex; // 432
	uint64 nMask; // 434
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 441
	}
} /* size: 0, variables: 4 */

// <0553B1BC> kv3lib/keyvalues3.cpp:449
// member functions: 18
// member variables: 3
// class size: 1,040
class CKeyValues3Cluster : public CKV3ClusterAlloc<KeyValues3, 63> {
public:
	/* class CKV3ClusterAlloc<KeyValues3, 63> <ancestor>; */ /* 0 1024 */
	/* kv3lib/keyvalues3.cpp:452 */
	CKeyValues3Cluster* ClusterFromPointer(const KeyValues3* );
	/* kv3lib/keyvalues3.cpp:454 */
	void CKeyValues3Cluster(CKeyValues3Cluster* , CKeyValues3Context* );
	/* kv3lib/keyvalues3.cpp:458 */
	void ~CKeyValues3Cluster(CKeyValues3Cluster* );
	/* kv3lib/keyvalues3.cpp:464 */
	KeyValues3* Allocate(CKeyValues3Cluster* , KeyValues3InternalType_t);
	/* kv3lib/keyvalues3.cpp:466 */
	CKeyValues3Metadata* GetMetadataForKV3(CKeyValues3Cluster* , const KeyValues3* );
	/* kv3lib/keyvalues3.cpp:468 */
	void SetMetadataEnabled(CKeyValues3Cluster* , bool);
	/* kv3lib/keyvalues3.cpp:470 */
	CKeyValues3Cluster* GetNextFreeCluster(CKeyValues3Cluster* );
	/* kv3lib/keyvalues3.cpp:471 */
	void SetNextFreeCluster(CKeyValues3Cluster* , CKeyValues3Cluster* );
	/* kv3lib/keyvalues3.cpp:473 */
	void FreeAllDireclyOwnedMemory(CKeyValues3Cluster* );
private:
	CKeyValues3MetadataCluster * m_pMetadata; /* 1024 8 */
	CKeyValues3Cluster * m_pNextFreeCluster; /* 1032 8 */
	/* <5582459> kv3lib/keyvalues3.cpp:482 */
	class CKeyValues3Cluster * ClusterFromPointer(const class KeyValues3  *); /* linkage=_ZN18CKeyValues3Cluster18ClusterFromPointerEPK10KeyValues3 */
	void CKeyValues3Cluster(class CKeyValues3Cluster *, class CKeyValues3Context *); /* linkage=_ZN18CKeyValues3ClusterC4EP18CKeyValues3Context */
	void ~CKeyValues3Cluster(class CKeyValues3Cluster *); /* linkage=_ZN18CKeyValues3ClusterD4Ev */
	/* <5586497> kv3lib/keyvalues3.cpp:499 */
	class KeyValues3 * Allocate(class CKeyValues3Cluster *, enum KeyValues3InternalType_t); /* linkage=_ZN18CKeyValues3Cluster8AllocateE24KeyValues3InternalType_t */
	/* <55824b8> kv3lib/keyvalues3.cpp:529 */
	class CKeyValues3Metadata * GetMetadataForKV3(class CKeyValues3Cluster *, const class KeyValues3  *); /* linkage=_ZN18CKeyValues3Cluster17GetMetadataForKV3EPK10KeyValues3 */
	/* <55825c7> kv3lib/keyvalues3.cpp:544 */
	void SetMetadataEnabled(class CKeyValues3Cluster *, bool); /* linkage=_ZN18CKeyValues3Cluster18SetMetadataEnabledEb */
	class CKeyValues3Cluster * GetNextFreeCluster(class CKeyValues3Cluster *); /* linkage=_ZN18CKeyValues3Cluster18GetNextFreeClusterEv */
	void SetNextFreeCluster(class CKeyValues3Cluster *, class CKeyValues3Cluster *); /* linkage=_ZN18CKeyValues3Cluster18SetNextFreeClusterEPS_ */
	/* <55885f8> kv3lib/keyvalues3.cpp:515 */
	void FreeAllDireclyOwnedMemory(class CKeyValues3Cluster *); /* linkage=_ZN18CKeyValues3Cluster25FreeAllDireclyOwnedMemoryEv */
};

// <0557C64C> kv3lib/keyvalues3.cpp:454
void CKeyValues3Cluster::CKeyValues3Cluster(CKeyValues3Context* pContext)
{
} /* size: 0 */

// <0557C626> kv3lib/keyvalues3.cpp:454
inline void CKeyValues3Cluster::CKeyValues3Cluster(CKeyValues3Context* pContext)
{
} /* size: 0 */

// <0557C5A7> kv3lib/keyvalues3.cpp:458
void CKeyValues3Cluster::~CKeyValues3Cluster()
{
} /* size: 0 */

// <0557C58E> kv3lib/keyvalues3.cpp:458
inline void CKeyValues3Cluster::~CKeyValues3Cluster()
{
} /* size: 0 */

// <0557C575> kv3lib/keyvalues3.cpp:470
inline void CKeyValues3Cluster::GetNextFreeCluster()
{
} /* size: 0 */

// <0557C54F> kv3lib/keyvalues3.cpp:471
inline void CKeyValues3Cluster::SetNextFreeCluster(CKeyValues3Cluster* pCluster)
{
} /* size: 0 */

// <05582459> kv3lib/keyvalues3.cpp:482
// variables: 2
void ClusterFromPointer(const KeyValues3* pKV3)
{
	{
		const KeyValues3* pFirstInCluster; // 490
		CKeyValues3Cluster* pCluster; // 491
	}
} /* size: 0 */

// <05586497> kv3lib/keyvalues3.cpp:499
// variables: 2
// function calls: 5
void CKeyValues3Cluster::Allocate(KeyValues3InternalType_t nInternalType)
{
	KeyValues3* pKV3; // 501
	const int  nIndex; // 502
	FindLeastSignificantBit64(uint64 n); // 407
	CKV3ClusterAlloc<KeyValues3, 63>::AllocateEntry(); // 501
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 3750
	KeyValues3::Internal_ClearDataWithoutFreeing(); // 3752
	KeyValues3::KeyValues3(
			CKeyValues3Context* pContext,
			KeyValues3InternalType_t nInternalType,
			uint nClusterIndex);  // 504
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

// <0557C4D4> kv3lib/keyvalues3.cpp:499
// variables: 2
void CKeyValues3Cluster::Allocate(KeyValues3InternalType_t nInternalType)
{
	KeyValues3* pKV3; // 501
	const int  nIndex; // 502
} /* size: 0, variables: 2 */

// <055885F8> kv3lib/keyvalues3.cpp:515
// variables: 2
// function calls: 3
void CKeyValues3Cluster::FreeAllDireclyOwnedMemory()
{
	{
		int i; // 517
		{
			uint64 nMask; // 519
			KeyValues3::Internal_ClearDataWithoutFreeing(); // 3886
			KeyValues3::Internal_SetType(
					KeyValues3InternalType_t nType);  // 3887
			KeyValues3::Internal_SetToNullAndFreeDirectlyOwnedMemory(); // 522
		}
	}
} /* size: 0 */

// <0557C49C> kv3lib/keyvalues3.cpp:515
// variables: 2
void CKeyValues3Cluster::FreeAllDireclyOwnedMemory()
{
	{
		int i; // 517
		{
			uint64 nMask; // 519
		}
	}
} /* size: 0 */

// <055824B8> kv3lib/keyvalues3.cpp:529
// variable: 1
// function calls: 3
void CKeyValues3Cluster::GetMetadataForKV3(const KeyValues3* pKV3)
{
	int nIndex; // 531
	{
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 393
	}
	CKV3ClusterAlloc<KeyValues3, 63>::GetIndexForEntry(
			const KeyValues3* pEntry);  // 531
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 532
	}
} /* size: 0, variables: 1, inline expansions: 1 (50 bytes) */

// <0557C3DF> kv3lib/keyvalues3.cpp:529
// variable: 1
void CKeyValues3Cluster::GetMetadataForKV3(const KeyValues3* pKV3)
{
	int nIndex; // 531
	{
	}
} /* size: 0, variables: 1 */

// <055825C7> kv3lib/keyvalues3.cpp:544
// function calls: 12
void CKeyValues3Cluster::SetMetadataEnabled(bool bMetadata)
{
	CBufferString::~CBufferString(); // 274
	CBufferString::~CBufferString(); // 274
	CKeyValues3Metadata::~CKeyValues3Metadata(); // 286
	CKeyValues3MetadataCluster::~CKeyValues3MetadataCluster(); // 555
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 274
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 274
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 274
	CKeyValues3Metadata::CKeyValues3Metadata(); // 286
	CKeyValues3MetadataCluster::CKeyValues3MetadataCluster(); // 551
	CKeyValues3Cluster::SetMetadataEnabled(
				bool bMetadata);  // 544
} /* size: 255, inline expansions: 12 (410 bytes) */

// <0557C34E> kv3lib/keyvalues3.cpp:544
void CKeyValues3Cluster::SetMetadataEnabled(bool bMetadata)
{
} /* size: 0 */

// <0555039F> kv3lib/keyvalues3.cpp:563
void CKeyValues3ArrayCluster::~CKeyValues3ArrayCluster()
{
} /* size: 0 */

// <05550382> kv3lib/keyvalues3.cpp:563
inline void CKeyValues3ArrayCluster::~CKeyValues3ArrayCluster()
{
} /* size: 0 */

// <0553B574> kv3lib/keyvalues3.cpp:563
// member functions: 12
// member variables: 2
// class size: 4,560
class CKeyValues3ArrayCluster : public CKV3ClusterAlloc<CKeyValues3Array, 63> {
public:
	/* class CKV3ClusterAlloc<CKeyValues3Array, 63> <ancestor>; */ /* 0 4552 */
	/* kv3lib/keyvalues3.cpp:566 */
	CKeyValues3ArrayCluster* ClusterFromPointer(const CKeyValues3Array* );
	/* kv3lib/keyvalues3.cpp:568 */
	void CKeyValues3ArrayCluster(CKeyValues3ArrayCluster* , CKeyValues3Context* );
	/* kv3lib/keyvalues3.cpp:572 */
	CKeyValues3Array* Allocate(CKeyValues3ArrayCluster* );
	/* kv3lib/keyvalues3.cpp:574 */
	CKeyValues3ArrayCluster* GetNextFreeCluster(CKeyValues3ArrayCluster* );
	/* kv3lib/keyvalues3.cpp:575 */
	void SetNextFreeCluster(CKeyValues3ArrayCluster* , CKeyValues3ArrayCluster* );
private:
	CKeyValues3ArrayCluster * m_pNextFreeCluster; /* 4552 8 */
	void ~CKeyValues3ArrayCluster(CKeyValues3ArrayCluster* );
	/* <5582861> kv3lib/keyvalues3.cpp:583 */
	class CKeyValues3ArrayCluster * ClusterFromPointer(const class CKeyValues3Array  *); /* linkage=_ZN23CKeyValues3ArrayCluster18ClusterFromPointerEPK16CKeyValues3Array */
	void CKeyValues3ArrayCluster(class CKeyValues3ArrayCluster *, class CKeyValues3Context *); /* linkage=_ZN23CKeyValues3ArrayClusterC4EP18CKeyValues3Context */
	class CKeyValues3Array * Allocate(class CKeyValues3ArrayCluster *); /* linkage=_ZN23CKeyValues3ArrayCluster8AllocateEv */
	class CKeyValues3ArrayCluster * GetNextFreeCluster(class CKeyValues3ArrayCluster *); /* linkage=_ZN23CKeyValues3ArrayCluster18GetNextFreeClusterEv */
	void SetNextFreeCluster(class CKeyValues3ArrayCluster *, class CKeyValues3ArrayCluster *); /* linkage=_ZN23CKeyValues3ArrayCluster18SetNextFreeClusterEPS_ */
	void ~CKeyValues3ArrayCluster(class CKeyValues3ArrayCluster *); /* linkage=_ZN23CKeyValues3ArrayClusterD4Ev */
} __attribute__((__aligned__(8)));

// <0557C332> kv3lib/keyvalues3.cpp:568
void CKeyValues3ArrayCluster::CKeyValues3ArrayCluster(CKeyValues3Context* pContext)
{
} /* size: 0 */

// <0557C30C> kv3lib/keyvalues3.cpp:568
inline void CKeyValues3ArrayCluster::CKeyValues3ArrayCluster(CKeyValues3Context* pContext)
{
} /* size: 0 */

// <0557C2F3> kv3lib/keyvalues3.cpp:574
inline void CKeyValues3ArrayCluster::GetNextFreeCluster()
{
} /* size: 0 */

// <0557C2CD> kv3lib/keyvalues3.cpp:575
inline void CKeyValues3ArrayCluster::SetNextFreeCluster(CKeyValues3ArrayCluster* pCluster)
{
} /* size: 0 */

// <05582861> kv3lib/keyvalues3.cpp:583
// variables: 2
void ClusterFromPointer(const CKeyValues3Array* pArray)
{
	{
		const CKeyValues3Array* pFirstInCluster; // 591
		CKeyValues3ArrayCluster* pCluster; // 592
	}
} /* size: 0 */

// <0557BF4F> kv3lib/keyvalues3.cpp:600
// variables: 2
// function calls: 13
void CKeyValues3ArrayCluster::Allocate()
{
	CKeyValues3Array* pArray; // 602
	const int  nIndex; // 603
	FindLeastSignificantBit64(uint64 n); // 407
	CKV3ClusterAlloc<CKeyValues3Array, 63>::AllocateEntry(); // 602
	{
	}
	AlignedByteArrayExplicit_t<4, KeyValues3::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, KeyValues3::AlignedByteArray_t(); // 228
	CUtlMemory<KeyValues3::CUtlMemory(
			KeyValues3** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<KeyValues3::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<KeyValues3::CUtlMemoryFixedGrowable_Base(
					KeyValues3** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<4, KeyValues3::Base(); // 231
	CUtlMemoryFixedGrowable<KeyValues3::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<KeyValues3::ResetDbgInfo(); // 530
	CUtlVectorBase<KeyValues3::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<KeyValues3::CUtlVectorFixedGrowable(
				int growSize);  // 154
	CKeyValues3Array::CKeyValues3Array(
			int32 nClusterIndex);  // 605
} /* size: 0, variables: 2, inline expansions: 13 (368 bytes) */

// <05550345> kv3lib/keyvalues3.cpp:616
void CKeyValues3TableCluster::~CKeyValues3TableCluster()
{
} /* size: 0 */

// <05550328> kv3lib/keyvalues3.cpp:616
inline void CKeyValues3TableCluster::~CKeyValues3TableCluster()
{
} /* size: 0 */

// <0553B89D> kv3lib/keyvalues3.cpp:616
// member functions: 12
// member variables: 2
// class size: 19,680
class CKeyValues3TableCluster : public CKV3ClusterAlloc<CKeyValues3Table, 63> {
public:
	/* class CKV3ClusterAlloc<CKeyValues3Table, 63> <ancestor>; */ /* 0 19672 */
	/* kv3lib/keyvalues3.cpp:619 */
	CKeyValues3TableCluster* ClusterFromPointer(const CKeyValues3Table* );
	/* kv3lib/keyvalues3.cpp:621 */
	void CKeyValues3TableCluster(CKeyValues3TableCluster* , CKeyValues3Context* );
	/* kv3lib/keyvalues3.cpp:625 */
	CKeyValues3Table* Allocate(CKeyValues3TableCluster* );
	/* kv3lib/keyvalues3.cpp:627 */
	CKeyValues3TableCluster* GetNextFreeCluster(CKeyValues3TableCluster* );
	/* kv3lib/keyvalues3.cpp:628 */
	void SetNextFreeCluster(CKeyValues3TableCluster* , CKeyValues3TableCluster* );
private:
	CKeyValues3TableCluster * m_pNextFreeCluster; /* 19672 8 */
	void ~CKeyValues3TableCluster(CKeyValues3TableCluster* );
	/* <5582aa4> kv3lib/keyvalues3.cpp:636 */
	class CKeyValues3TableCluster * ClusterFromPointer(const class CKeyValues3Table  *); /* linkage=_ZN23CKeyValues3TableCluster18ClusterFromPointerEPK16CKeyValues3Table */
	void CKeyValues3TableCluster(class CKeyValues3TableCluster *, class CKeyValues3Context *); /* linkage=_ZN23CKeyValues3TableClusterC4EP18CKeyValues3Context */
	/* <5583ffb> kv3lib/keyvalues3.cpp:653 */
	class CKeyValues3Table * Allocate(class CKeyValues3TableCluster *); /* linkage=_ZN23CKeyValues3TableCluster8AllocateEv */
	class CKeyValues3TableCluster * GetNextFreeCluster(class CKeyValues3TableCluster *); /* linkage=_ZN23CKeyValues3TableCluster18GetNextFreeClusterEv */
	void SetNextFreeCluster(class CKeyValues3TableCluster *, class CKeyValues3TableCluster *); /* linkage=_ZN23CKeyValues3TableCluster18SetNextFreeClusterEPS_ */
	void ~CKeyValues3TableCluster(class CKeyValues3TableCluster *); /* linkage=_ZN23CKeyValues3TableClusterD4Ev */
} __attribute__((__aligned__(8)));

// <0557BF33> kv3lib/keyvalues3.cpp:621
void CKeyValues3TableCluster::CKeyValues3TableCluster(CKeyValues3Context* pContext)
{
} /* size: 0 */

// <0557BF0D> kv3lib/keyvalues3.cpp:621
inline void CKeyValues3TableCluster::CKeyValues3TableCluster(CKeyValues3Context* pContext)
{
} /* size: 0 */

// <0557BEF4> kv3lib/keyvalues3.cpp:627
inline void CKeyValues3TableCluster::GetNextFreeCluster()
{
} /* size: 0 */

// <0557BECE> kv3lib/keyvalues3.cpp:628
inline void CKeyValues3TableCluster::SetNextFreeCluster(CKeyValues3TableCluster* pCluster)
{
} /* size: 0 */

// <05582AA4> kv3lib/keyvalues3.cpp:636
// variables: 2
void ClusterFromPointer(const CKeyValues3Table* pTable)
{
	{
		const CKeyValues3Table* pFirstInCluster; // 644
		CKeyValues3TableCluster* pCluster; // 645
	}
} /* size: 0 */

// <05583FFB> kv3lib/keyvalues3.cpp:653
// variables: 2
// function calls: 2
void CKeyValues3TableCluster::Allocate()
{
	CKeyValues3Table* pTable; // 655
	const int  nIndex; // 656
	FindLeastSignificantBit64(uint64 n); // 407
	CKV3ClusterAlloc<CKeyValues3Table, 63>::AllocateEntry(); // 655
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <0557BE60> kv3lib/keyvalues3.cpp:653
// variables: 2
void CKeyValues3TableCluster::Allocate()
{
	CKeyValues3Table* pTable; // 655
	const int  nIndex; // 656
} /* size: 0, variables: 2 */

// <0552D6B1> kv3lib/keyvalues3.cpp:669
// member functions: 17
// member variables: 12
// struct size: 1,528
struct CKeyValues3ContextImpl {
	/* kv3lib/keyvalues3.cpp:671 */
	void CKeyValues3ContextImpl(CKeyValues3ContextImpl* , CKeyValues3Context* );
	/* kv3lib/keyvalues3.cpp:672 */
	void ~CKeyValues3ContextImpl(CKeyValues3ContextImpl* );
	/* kv3lib/keyvalues3.cpp:674 */
	KeyValues3* AllocKV_Internal(CKeyValues3ContextImpl* , KeyValues3Type_t);
	/* kv3lib/keyvalues3.cpp:675 */
	void FreeKV_Internal(CKeyValues3ContextImpl* , KeyValues3* );
	/* kv3lib/keyvalues3.cpp:677 */
	CKeyValues3Array* AllocArray_Internal(CKeyValues3ContextImpl* );
	/* kv3lib/keyvalues3.cpp:678 */
	void FreeArray_Internal(CKeyValues3ContextImpl* , CKeyValues3Array* );
	/* kv3lib/keyvalues3.cpp:680 */
	CKeyValues3Table* AllocTable_Internal(CKeyValues3ContextImpl* );
	/* kv3lib/keyvalues3.cpp:681 */
	void FreeTable_Internal(CKeyValues3ContextImpl* , CKeyValues3Table* );
	/* kv3lib/keyvalues3.cpp:689 */
	void InitNewCluster(CKeyValues3ContextImpl* , CKeyValues3Cluster* );
	/* kv3lib/keyvalues3.cpp:690 */
	void InitNewCluster(CKeyValues3ContextImpl* , CKeyValues3TableCluster* );
	/* kv3lib/keyvalues3.cpp:691 */
	void InitNewCluster(CKeyValues3ContextImpl* , CKeyValues3ArrayCluster* );
	const class CKeyValues3Context * m_pOwner; /* 0 8 */
	CUtlBuffer m_LongTermScratchBuffer; /* 8 80 */
	CKeyValues3Cluster m_EmbeddedCluster; /* 88 1040 */
	CUtlVectorFixedGrowable<CKeyValues3Cluster*, 8> m_AdditionalKVClusters __attribute__((__aligned__(8))); /* 1128 96 */
	CKeyValues3Cluster * m_pFreeKVClusterList; /* 1224 8 */
	CUtlVectorFixedGrowable<CKeyValues3ArrayCluster*, 4> m_ArrayClusters __attribute__((__aligned__(8))); /* 1232 64 */
	CKeyValues3ArrayCluster * m_pFreeArrayClusterList; /* 1296 8 */
	CUtlVectorFixedGrowable<CKeyValues3TableCluster*, 4> m_TableClusters __attribute__((__aligned__(8))); /* 1304 64 */
	CKeyValues3TableCluster * m_pFreeTableClusterList; /* 1368 8 */
	CUtlSymbolTableLarge m_Symbols; /* 1376 144 */
	bool m_bMetadataEnabled:1; /* 1520: 0 1 */
	bool m_bWasUpconverted:1; /* 1520: 1 1 */
	/* kv3lib/keyvalues3.cpp:4100 */
	void FreeToCluster<CKeyValues3TableCluster, CUtlMemoryFixedGrowable<CKeyValues3TableCluster*, 4, int> >(CKeyValues3ContextImpl* , ClusteredType* , CKeyValues3TableCluster* , CUtlVectorBase<CKeyValues3TableCluster*, CUtlMemoryFixedGrowable<CKeyValues3TableCluster*, 4, int> >& , CKeyValues3TableCluster* & );
	/* kv3lib/keyvalues3.cpp:4100 */
	void FreeToCluster<CKeyValues3ArrayCluster, CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster*, 4, int> >(CKeyValues3ContextImpl* , ClusteredType* , CKeyValues3ArrayCluster* , CUtlVectorBase<CKeyValues3ArrayCluster*, CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster*, 4, int> >& , CKeyValues3ArrayCluster* & );
	/* kv3lib/keyvalues3.cpp:4100 */
	void FreeToCluster<CKeyValues3Cluster, CUtlMemoryFixedGrowable<CKeyValues3Cluster*, 8, int> >(CKeyValues3ContextImpl* , ClusteredType* , CKeyValues3Cluster* , CUtlVectorBase<CKeyValues3Cluster*, CUtlMemoryFixedGrowable<CKeyValues3Cluster*, 8, int> >& , CKeyValues3Cluster* & );
	/* kv3lib/keyvalues3.cpp:4024 */
	ClusteredType* AllocateFromCluster<CKeyValues3TableCluster, CUtlMemoryFixedGrowable<CKeyValues3TableCluster*, 4, int> >(CKeyValues3ContextImpl* , CKeyValues3TableCluster* & , CUtlVectorBase<CKeyValues3TableCluster*, CUtlMemoryFixedGrowable<CKeyValues3TableCluster*, 4, int> >& );
	/* kv3lib/keyvalues3.cpp:4024 */
	ClusteredType* AllocateFromCluster<CKeyValues3ArrayCluster, CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster*, 4, int> >(CKeyValues3ContextImpl* , CKeyValues3ArrayCluster* & , CUtlVectorBase<CKeyValues3ArrayCluster*, CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster*, 4, int> >& );
	/* kv3lib/keyvalues3.cpp:4024 */
	ClusteredType* AllocateFromCluster<CKeyValues3Cluster, CUtlMemoryFixedGrowable<CKeyValues3Cluster*, 8, int>, KeyValues3InternalType_t>(CKeyValues3ContextImpl* , CKeyValues3Cluster* & , CUtlVectorBase<CKeyValues3Cluster*, CUtlMemoryFixedGrowable<CKeyValues3Cluster*, 8, int> >& , KeyValues3InternalType_t& );
} __attribute__((__aligned__(8)));

// <0557B13E> kv3lib/keyvalues3.cpp:716
// function calls: 49
void CKeyValues3ContextImpl::CKeyValues3ContextImpl(CKeyValues3Context* pContext)
{
	CKeyValues3Cluster::CKeyValues3Cluster(
				CKeyValues3Context* pContext);  // 717
	CUtlMemory<CKeyValues3Cluster::CUtlMemory(
			CKeyValues3Cluster** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CKeyValues3Cluster::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CKeyValues3Cluster::CUtlMemoryFixedGrowable_Base(
					CKeyValues3Cluster** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	{
	}
	AlignedByteArrayExplicit_t<8, CKeyValues3Cluster::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<8, CKeyValues3Cluster::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<8, CKeyValues3Cluster::Base(); // 231
	CUtlMemoryFixedGrowable<CKeyValues3Cluster::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CKeyValues3Cluster::ResetDbgInfo(); // 530
	CUtlVectorBase<CKeyValues3Cluster::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CKeyValues3Cluster::CUtlVectorFixedGrowable(
				int growSize);  // 718
	{
	}
	AlignedByteArrayExplicit_t<4, CKeyValues3ArrayCluster::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, CKeyValues3ArrayCluster::AlignedByteArray_t(); // 228
	CUtlMemory<CKeyValues3ArrayCluster::CUtlMemory(
			CKeyValues3ArrayCluster** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CKeyValues3ArrayCluster::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CKeyValues3ArrayCluster::CUtlMemoryFixedGrowable_Base(
					CKeyValues3ArrayCluster** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<4, CKeyValues3ArrayCluster::Base(); // 231
	CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CKeyValues3ArrayCluster::ResetDbgInfo(); // 530
	CUtlVectorBase<CKeyValues3ArrayCluster::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CKeyValues3ArrayCluster::CUtlVectorFixedGrowable(
				int growSize);  // 718
	{
	}
	AlignedByteArrayExplicit_t<4, CKeyValues3TableCluster::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, CKeyValues3TableCluster::AlignedByteArray_t(); // 228
	CUtlMemory<CKeyValues3TableCluster::CUtlMemory(
			CKeyValues3TableCluster** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CKeyValues3TableCluster::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CKeyValues3TableCluster::CUtlMemoryFixedGrowable_Base(
					CKeyValues3TableCluster** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<4, CKeyValues3TableCluster::Base(); // 231
	CUtlMemoryFixedGrowable<CKeyValues3TableCluster::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CKeyValues3TableCluster::ResetDbgInfo(); // 530
	CUtlVectorBase<CKeyValues3TableCluster::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CKeyValues3TableCluster::CUtlVectorFixedGrowable(
				int growSize);  // 718
	{
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::ValidateGrowSize(); // 475
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 178
		Eq_t::Eq_t(); // 178
		Hash_t::Hash_t(); // 178
		Init(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 178
		CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this,
				int minimumSize);  // 49
		CUtlMemory<unsigned int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 472
		CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
		CUtlMemory<unsigned int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 419
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(
				int growSize,
				int initCapacity);  // 49
		CThreadNullMutex::CThreadNullMutex(
				const char* pName);  // 48
		GetEqualRef(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 52
		Eq_t::SetSymbolTable(
				CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pTable);  // 52
		GetHashRef(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 53
		Hash_t::SetSymbolTable(
				CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pTable);  // 53
	}
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::CUtlSymbolTableLargeBase(
				int growSize,
				int initSize,
				bool caseInsensitive);  // 718
} /* size: 506, inline expansions: 32 (1051 bytes) */

// <0557B115> kv3lib/keyvalues3.cpp:716
void CKeyValues3ContextImpl::CKeyValues3ContextImpl(CKeyValues3Context* pContext)
{
} /* size: 0 */

// <055790E5> kv3lib/keyvalues3.cpp:726
// variables: 16
// function calls: 157
void CKeyValues3ContextImpl::~CKeyValues3ContextImpl()
{
	{
		CKeyValues3Cluster* pCluster; // 730
		CUtlVectorFixedGrowable<CKeyValues3Cluster*, 8>& __for_range; // 10459
		iterator __for_begin; // 10469
		iterator __for_end; // 10479
	}
	{
		int i; // 517
		{
			uint64 nMask; // 519
			KeyValues3::Internal_ClearDataWithoutFreeing(); // 3886
			KeyValues3::Internal_SetType(
					KeyValues3InternalType_t nType);  // 3887
			KeyValues3::Internal_SetToNullAndFreeDirectlyOwnedMemory(); // 522
		}
	}
	CKeyValues3Cluster::FreeAllDireclyOwnedMemory(); // 728
	{
		CKeyValues3Cluster* pCluster; // 730
		CUtlVectorFixedGrowable<CKeyValues3Cluster*, 8>& __for_range; // 10459
		iterator __for_begin; // 10469
		iterator __for_end; // 10479
		CUtlMemory<CKeyValues3Cluster::Base(); // 112
		CUtlVectorBase<CKeyValues3Cluster::Base(); // 102
		CUtlVectorBase<CKeyValues3Cluster::begin(); // 730
		CUtlVectorBase<CKeyValues3Cluster::Count(); // 104
		CUtlVectorBase<CKeyValues3Cluster::end(); // 730
		{
			int i; // 517
			{
				uint64 nMask; // 519
				KeyValues3::Internal_ClearDataWithoutFreeing(); // 3886
				KeyValues3::Internal_SetType(
						KeyValues3InternalType_t nType);  // 3887
				KeyValues3::Internal_SetToNullAndFreeDirectlyOwnedMemory(); // 522
			}
		}
		CKeyValues3Cluster::FreeAllDireclyOwnedMemory(); // 732
		CBufferString::~CBufferString(); // 274
		CBufferString::~CBufferString(); // 274
		CKeyValues3Metadata::~CKeyValues3Metadata(); // 286
		CKeyValues3MetadataCluster::~CKeyValues3MetadataCluster(); // 460
		KeyValues3::~KeyValues3(); // 309
		CKV3ClusterAlloc<KeyValues3, 63>::~CKV3ClusterAlloc(); // 462
		CKeyValues3Cluster::~CKeyValues3Cluster(); // 733
	}
	{
		int i; // 1807
		CUtlMemory<CKeyValues3ArrayCluster::operator[](
				int i);  // 602
		CUtlVectorBase<CKeyValues3ArrayCluster::Element(
			int i);  // 1809
		CUtlMemory<KeyValues3::IsExternallyAllocated(); // 577
		CUtlMemory<KeyValues3::ConvertToExternalMemory(
					KeyValues3** pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<KeyValues3::Purge_FixedGrowable(
					KeyValues3** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<KeyValues3::Purge_FixedGrowable(
					KeyValues3** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		CUtlMemoryFixedGrowable<KeyValues3::Purge(
			int numElements);  // 1799
		CUtlMemory<KeyValues3::Base(); // 112
		CUtlVectorBase<KeyValues3::Base(); // 368
		CUtlVectorBase<KeyValues3::ResetDbgInfo(); // 1800
		CUtlVectorBase<KeyValues3::RemoveAll(); // 1798
		CUtlVectorBase<KeyValues3::Purge(); // 560
		CUtlMemory<KeyValues3::IsExternallyAllocated(); // 905
		CUtlMemory<KeyValues3::Purge(); // 903
		CUtlMemory<KeyValues3::Purge(); // 510
		ValidateAlignment<KeyValues3*>(void); // 508
		CUtlMemory<KeyValues3::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<KeyValues3::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<KeyValues3::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<KeyValues3::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<KeyValues3::~CUtlVectorFixedGrowable(); // 155
		CKeyValues3Array::~CKeyValues3Array(); // 309
		CKV3ClusterAlloc<CKeyValues3Array, 63>::~CKV3ClusterAlloc(); // 563
		CKeyValues3ArrayCluster::~CKeyValues3ArrayCluster(); // 1809
	}
	CUtlVectorBase<CKeyValues3ArrayCluster::RemoveAll(); // 1798
	CUtlMemory<CKeyValues3ArrayCluster::IsExternallyAllocated(); // 577
	CUtlMemory<CKeyValues3ArrayCluster::ConvertToExternalMemory(
				CKeyValues3ArrayCluster** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CKeyValues3ArrayCluster::Purge_FixedGrowable(
				CKeyValues3ArrayCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CKeyValues3ArrayCluster::Purge_FixedGrowable(
				CKeyValues3ArrayCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<4, CKeyValues3ArrayCluster::Base(); // 237
	CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CKeyValues3ArrayCluster::ResetDbgInfo(); // 1800
	CUtlVectorBase<CKeyValues3ArrayCluster::Purge(); // 1811
	CUtlVectorBase<CKeyValues3ArrayCluster::PurgeAndDeleteElements(); // 736
	{
		int i; // 1807
		CUtlMemory<CKeyValues3TableCluster::operator[](
				int i);  // 602
		CUtlVectorBase<CKeyValues3TableCluster::Element(
			int i);  // 1809
		CKV3ClusterAlloc<CKeyValues3Table, 63>::~CKV3ClusterAlloc(); // 616
		CKeyValues3TableCluster::~CKeyValues3TableCluster(); // 1809
	}
	CUtlVectorBase<CKeyValues3TableCluster::RemoveAll(); // 1798
	CUtlMemory<CKeyValues3TableCluster::IsExternallyAllocated(); // 577
	CUtlMemory<CKeyValues3TableCluster::ConvertToExternalMemory(
				CKeyValues3TableCluster** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CKeyValues3TableCluster::Purge_FixedGrowable(
				CKeyValues3TableCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CKeyValues3TableCluster::Purge_FixedGrowable(
				CKeyValues3TableCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<4, CKeyValues3TableCluster::Base(); // 237
	CUtlMemoryFixedGrowable<CKeyValues3TableCluster::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CKeyValues3TableCluster::ResetDbgInfo(); // 1800
	CUtlVectorBase<CKeyValues3TableCluster::Purge(); // 1811
	CUtlVectorBase<CKeyValues3TableCluster::PurgeAndDeleteElements(); // 737
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 55
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 897
			CUtlHashtableEntry<unsigned int, empty_t>::IsValid(); // 899
			CUtlHashtableEntry<unsigned int, empty_t>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<unsigned int, empty_t> >(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 188
	ValidateAlignment<CUtlHashtableEntry<unsigned int, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 55
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::~CUtlSymbolTableLargeBase(); // 738
	CUtlVectorBase<CKeyValues3TableCluster::RemoveAll(); // 1798
	CUtlMemory<CKeyValues3TableCluster::IsExternallyAllocated(); // 577
	CUtlMemory<CKeyValues3TableCluster::ConvertToExternalMemory(
				CKeyValues3TableCluster** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CKeyValues3TableCluster::Purge_FixedGrowable(
				CKeyValues3TableCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CKeyValues3TableCluster::Purge_FixedGrowable(
				CKeyValues3TableCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CKeyValues3TableCluster::Purge(
		int numElements);  // 1799
	CUtlMemory<CKeyValues3TableCluster::Base(); // 112
	CUtlVectorBase<CKeyValues3TableCluster::Base(); // 368
	CUtlVectorBase<CKeyValues3TableCluster::ResetDbgInfo(); // 1800
	CUtlVectorBase<CKeyValues3TableCluster::Purge(); // 560
	CUtlMemory<CKeyValues3TableCluster::Purge(); // 903
	CUtlMemory<CKeyValues3TableCluster::Purge(); // 510
	ValidateAlignment<CKeyValues3TableCluster*>(void); // 508
	CUtlMemory<CKeyValues3TableCluster::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CKeyValues3TableCluster::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CKeyValues3TableCluster::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CKeyValues3TableCluster::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CKeyValues3TableCluster::~CUtlVectorFixedGrowable(); // 738
	CUtlVectorBase<CKeyValues3ArrayCluster::RemoveAll(); // 1798
	CUtlMemory<CKeyValues3ArrayCluster::IsExternallyAllocated(); // 577
	CUtlMemory<CKeyValues3ArrayCluster::ConvertToExternalMemory(
				CKeyValues3ArrayCluster** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CKeyValues3ArrayCluster::Purge_FixedGrowable(
				CKeyValues3ArrayCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CKeyValues3ArrayCluster::Purge_FixedGrowable(
				CKeyValues3ArrayCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CKeyValues3ArrayCluster::ResetDbgInfo(); // 1800
	CUtlVectorBase<CKeyValues3ArrayCluster::Purge(); // 560
	ValidateAlignment<CKeyValues3ArrayCluster*>(void); // 508
	CUtlMemory<CKeyValues3ArrayCluster::Purge(); // 903
	CUtlMemory<CKeyValues3ArrayCluster::Purge(); // 510
	CUtlMemory<CKeyValues3ArrayCluster::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CKeyValues3ArrayCluster::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CKeyValues3ArrayCluster::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CKeyValues3ArrayCluster::~CUtlVectorFixedGrowable(); // 738
	CUtlVectorBase<CKeyValues3Cluster::RemoveAll(); // 1798
	CUtlMemory<CKeyValues3Cluster::IsExternallyAllocated(); // 577
	CUtlMemory<CKeyValues3Cluster::ConvertToExternalMemory(
				CKeyValues3Cluster** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CKeyValues3Cluster::Purge_FixedGrowable(
				CKeyValues3Cluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CKeyValues3Cluster::Purge_FixedGrowable(
				CKeyValues3Cluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<8, CKeyValues3Cluster::Base(); // 237
	CUtlMemoryFixedGrowable<CKeyValues3Cluster::Purge(
		int numElements);  // 1799
	CUtlMemory<CKeyValues3Cluster::Base(); // 112
	CUtlVectorBase<CKeyValues3Cluster::Base(); // 368
	CUtlVectorBase<CKeyValues3Cluster::ResetDbgInfo(); // 1800
	CUtlVectorBase<CKeyValues3Cluster::Purge(); // 560
	CUtlMemory<CKeyValues3Cluster::Purge(); // 903
	CUtlMemory<CKeyValues3Cluster::Purge(); // 510
	ValidateAlignment<CKeyValues3Cluster*>(void); // 508
	CUtlMemory<CKeyValues3Cluster::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CKeyValues3Cluster::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CKeyValues3Cluster::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CKeyValues3Cluster::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CKeyValues3Cluster::~CUtlVectorFixedGrowable(); // 738
	CBufferString::~CBufferString(); // 274
	CBufferString::~CBufferString(); // 274
	CKeyValues3Metadata::~CKeyValues3Metadata(); // 286
	CKeyValues3MetadataCluster::~CKeyValues3MetadataCluster(); // 460
	KeyValues3::~KeyValues3(); // 309
	CKV3ClusterAlloc<KeyValues3, 63>::~CKV3ClusterAlloc(); // 462
	CKeyValues3Cluster::~CKeyValues3Cluster(); // 738
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 738
} /* size: 1842, inline expansions: 105 (5370 bytes) */

// <05579096> kv3lib/keyvalues3.cpp:726
// variables: 4
void CKeyValues3ContextImpl::~CKeyValues3ContextImpl()
{
	{
		CKeyValues3Cluster* pCluster; // 730
		CUtlVectorFixedGrowable<CKeyValues3Cluster*, 8>& __for_range; // 10491
		iterator __for_begin; // 23926
		iterator __for_end; // 23926
	}
} /* size: 0 */

// <028F0ADF> kv3lib/keyvalues3.cpp:726
// variables: 16
// function calls: 157
void CKeyValues3ContextImpl::~CKeyValues3ContextImpl()
{
	{
		CKeyValues3Cluster* pCluster; // 730
		CUtlVectorFixedGrowable<CKeyValues3Cluster*, 8>& __for_range; // 29130
		iterator __for_begin; // 29140
		iterator __for_end; // 29150
	}
	{
		int i; // 517
		{
			uint64 nMask; // 519
			KeyValues3::Internal_ClearDataWithoutFreeing(); // 3886
			KeyValues3::Internal_SetType(
					KeyValues3InternalType_t nType);  // 3887
			KeyValues3::Internal_SetToNullAndFreeDirectlyOwnedMemory(); // 522
		}
	}
	CKeyValues3Cluster::FreeAllDireclyOwnedMemory(); // 728
	{
		CKeyValues3Cluster* pCluster; // 730
		CUtlVectorFixedGrowable<CKeyValues3Cluster*, 8>& __for_range; // 29130
		iterator __for_begin; // 29140
		iterator __for_end; // 29150
		CUtlMemory<CKeyValues3Cluster::Base(); // 112
		CUtlVectorBase<CKeyValues3Cluster::Base(); // 102
		CUtlVectorBase<CKeyValues3Cluster::begin(); // 730
		CUtlVectorBase<CKeyValues3Cluster::Count(); // 104
		CUtlVectorBase<CKeyValues3Cluster::end(); // 730
		{
			int i; // 517
			{
				uint64 nMask; // 519
				KeyValues3::Internal_ClearDataWithoutFreeing(); // 3886
				KeyValues3::Internal_SetType(
						KeyValues3InternalType_t nType);  // 3887
				KeyValues3::Internal_SetToNullAndFreeDirectlyOwnedMemory(); // 522
			}
		}
		CKeyValues3Cluster::FreeAllDireclyOwnedMemory(); // 732
		CBufferString::~CBufferString(); // 274
		CBufferString::~CBufferString(); // 274
		CKeyValues3Metadata::~CKeyValues3Metadata(); // 286
		CKeyValues3MetadataCluster::~CKeyValues3MetadataCluster(); // 460
		KeyValues3::~KeyValues3(); // 309
		CKV3ClusterAlloc<KeyValues3, 63>::~CKV3ClusterAlloc(); // 462
		CKeyValues3Cluster::~CKeyValues3Cluster(); // 733
	}
	{
		int i; // 1807
		CUtlMemory<CKeyValues3ArrayCluster::operator[](
				int i);  // 602
		CUtlVectorBase<CKeyValues3ArrayCluster::Element(
			int i);  // 1809
		CUtlMemory<KeyValues3::IsExternallyAllocated(); // 577
		CUtlMemory<KeyValues3::ConvertToExternalMemory(
					KeyValues3** pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<KeyValues3::Purge_FixedGrowable(
					KeyValues3** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<KeyValues3::Purge_FixedGrowable(
					KeyValues3** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		CUtlMemoryFixedGrowable<KeyValues3::Purge(
			int numElements);  // 1799
		CUtlMemory<KeyValues3::Base(); // 112
		CUtlVectorBase<KeyValues3::Base(); // 368
		CUtlVectorBase<KeyValues3::ResetDbgInfo(); // 1800
		CUtlVectorBase<KeyValues3::RemoveAll(); // 1798
		CUtlVectorBase<KeyValues3::Purge(); // 560
		CUtlMemory<KeyValues3::IsExternallyAllocated(); // 905
		CUtlMemory<KeyValues3::Purge(); // 903
		CUtlMemory<KeyValues3::Purge(); // 510
		ValidateAlignment<KeyValues3*>(void); // 508
		CUtlMemory<KeyValues3::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<KeyValues3::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<KeyValues3::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<KeyValues3::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<KeyValues3::~CUtlVectorFixedGrowable(); // 155
		CKeyValues3Array::~CKeyValues3Array(); // 309
		CKV3ClusterAlloc<CKeyValues3Array, 63>::~CKV3ClusterAlloc(); // 563
		CKeyValues3ArrayCluster::~CKeyValues3ArrayCluster(); // 1809
	}
	CUtlVectorBase<CKeyValues3ArrayCluster::RemoveAll(); // 1798
	CUtlMemory<CKeyValues3ArrayCluster::IsExternallyAllocated(); // 577
	CUtlMemory<CKeyValues3ArrayCluster::ConvertToExternalMemory(
				CKeyValues3ArrayCluster** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CKeyValues3ArrayCluster::Purge_FixedGrowable(
				CKeyValues3ArrayCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CKeyValues3ArrayCluster::Purge_FixedGrowable(
				CKeyValues3ArrayCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<4, CKeyValues3ArrayCluster::Base(); // 237
	CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CKeyValues3ArrayCluster::ResetDbgInfo(); // 1800
	CUtlVectorBase<CKeyValues3ArrayCluster::Purge(); // 1811
	CUtlVectorBase<CKeyValues3ArrayCluster::PurgeAndDeleteElements(); // 736
	{
		int i; // 1807
		CUtlMemory<CKeyValues3TableCluster::operator[](
				int i);  // 602
		CUtlVectorBase<CKeyValues3TableCluster::Element(
			int i);  // 1809
		CKV3ClusterAlloc<CKeyValues3Table, 63>::~CKV3ClusterAlloc(); // 616
		CKeyValues3TableCluster::~CKeyValues3TableCluster(); // 1809
	}
	CUtlVectorBase<CKeyValues3TableCluster::RemoveAll(); // 1798
	CUtlMemory<CKeyValues3TableCluster::IsExternallyAllocated(); // 577
	CUtlMemory<CKeyValues3TableCluster::ConvertToExternalMemory(
				CKeyValues3TableCluster** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CKeyValues3TableCluster::Purge_FixedGrowable(
				CKeyValues3TableCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CKeyValues3TableCluster::Purge_FixedGrowable(
				CKeyValues3TableCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<4, CKeyValues3TableCluster::Base(); // 237
	CUtlMemoryFixedGrowable<CKeyValues3TableCluster::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CKeyValues3TableCluster::ResetDbgInfo(); // 1800
	CUtlVectorBase<CKeyValues3TableCluster::Purge(); // 1811
	CUtlVectorBase<CKeyValues3TableCluster::PurgeAndDeleteElements(); // 737
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 55
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 897
			CUtlHashtableEntry<unsigned int, empty_t>::IsValid(); // 899
			CUtlHashtableEntry<unsigned int, empty_t>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<unsigned int, empty_t> >(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 188
	ValidateAlignment<CUtlHashtableEntry<unsigned int, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 55
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::~CUtlSymbolTableLargeBase(); // 738
	CUtlVectorBase<CKeyValues3TableCluster::RemoveAll(); // 1798
	CUtlMemory<CKeyValues3TableCluster::IsExternallyAllocated(); // 577
	CUtlMemory<CKeyValues3TableCluster::ConvertToExternalMemory(
				CKeyValues3TableCluster** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CKeyValues3TableCluster::Purge_FixedGrowable(
				CKeyValues3TableCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CKeyValues3TableCluster::Purge_FixedGrowable(
				CKeyValues3TableCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CKeyValues3TableCluster::Purge(
		int numElements);  // 1799
	CUtlMemory<CKeyValues3TableCluster::Base(); // 112
	CUtlVectorBase<CKeyValues3TableCluster::Base(); // 368
	CUtlVectorBase<CKeyValues3TableCluster::ResetDbgInfo(); // 1800
	CUtlVectorBase<CKeyValues3TableCluster::Purge(); // 560
	CUtlMemory<CKeyValues3TableCluster::Purge(); // 903
	CUtlMemory<CKeyValues3TableCluster::Purge(); // 510
	ValidateAlignment<CKeyValues3TableCluster*>(void); // 508
	CUtlMemory<CKeyValues3TableCluster::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CKeyValues3TableCluster::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CKeyValues3TableCluster::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CKeyValues3TableCluster::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CKeyValues3TableCluster::~CUtlVectorFixedGrowable(); // 738
	CUtlVectorBase<CKeyValues3ArrayCluster::RemoveAll(); // 1798
	CUtlMemory<CKeyValues3ArrayCluster::IsExternallyAllocated(); // 577
	CUtlMemory<CKeyValues3ArrayCluster::ConvertToExternalMemory(
				CKeyValues3ArrayCluster** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CKeyValues3ArrayCluster::Purge_FixedGrowable(
				CKeyValues3ArrayCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CKeyValues3ArrayCluster::Purge_FixedGrowable(
				CKeyValues3ArrayCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CKeyValues3ArrayCluster::ResetDbgInfo(); // 1800
	CUtlVectorBase<CKeyValues3ArrayCluster::Purge(); // 560
	ValidateAlignment<CKeyValues3ArrayCluster*>(void); // 508
	CUtlMemory<CKeyValues3ArrayCluster::Purge(); // 903
	CUtlMemory<CKeyValues3ArrayCluster::Purge(); // 510
	CUtlMemory<CKeyValues3ArrayCluster::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CKeyValues3ArrayCluster::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CKeyValues3ArrayCluster::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CKeyValues3ArrayCluster::~CUtlVectorFixedGrowable(); // 738
	CUtlVectorBase<CKeyValues3Cluster::RemoveAll(); // 1798
	CUtlMemory<CKeyValues3Cluster::IsExternallyAllocated(); // 577
	CUtlMemory<CKeyValues3Cluster::ConvertToExternalMemory(
				CKeyValues3Cluster** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CKeyValues3Cluster::Purge_FixedGrowable(
				CKeyValues3Cluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CKeyValues3Cluster::Purge_FixedGrowable(
				CKeyValues3Cluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<8, CKeyValues3Cluster::Base(); // 237
	CUtlMemoryFixedGrowable<CKeyValues3Cluster::Purge(
		int numElements);  // 1799
	CUtlMemory<CKeyValues3Cluster::Base(); // 112
	CUtlVectorBase<CKeyValues3Cluster::Base(); // 368
	CUtlVectorBase<CKeyValues3Cluster::ResetDbgInfo(); // 1800
	CUtlVectorBase<CKeyValues3Cluster::Purge(); // 560
	CUtlMemory<CKeyValues3Cluster::Purge(); // 903
	CUtlMemory<CKeyValues3Cluster::Purge(); // 510
	ValidateAlignment<CKeyValues3Cluster*>(void); // 508
	CUtlMemory<CKeyValues3Cluster::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CKeyValues3Cluster::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CKeyValues3Cluster::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CKeyValues3Cluster::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CKeyValues3Cluster::~CUtlVectorFixedGrowable(); // 738
	CBufferString::~CBufferString(); // 274
	CBufferString::~CBufferString(); // 274
	CKeyValues3Metadata::~CKeyValues3Metadata(); // 286
	CKeyValues3MetadataCluster::~CKeyValues3MetadataCluster(); // 460
	KeyValues3::~KeyValues3(); // 309
	CKV3ClusterAlloc<KeyValues3, 63>::~CKV3ClusterAlloc(); // 462
	CKeyValues3Cluster::~CKeyValues3Cluster(); // 738
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 738
} /* size: 1842, inline expansions: 105 (5370 bytes) */

// <028F0A90> kv3lib/keyvalues3.cpp:726
// variables: 4
void CKeyValues3ContextImpl::~CKeyValues3ContextImpl()
{
	{
		CKeyValues3Cluster* pCluster; // 730
		CUtlVectorFixedGrowable<CKeyValues3Cluster*, 8>& __for_range; // 29162
		iterator __for_begin; // 42597
		iterator __for_end; // 42597
	}
} /* size: 0 */

// <01255D11> kv3lib/keyvalues3.cpp:726
// variables: 16
// function calls: 157
void CKeyValues3ContextImpl::~CKeyValues3ContextImpl()
{
	{
		CKeyValues3Cluster* pCluster; // 730
		CUtlVectorFixedGrowable<CKeyValues3Cluster*, 8>& __for_range; // 56250
		iterator __for_begin; // 56260
		iterator __for_end; // 56270
	}
	{
		int i; // 517
		{
			uint64 nMask; // 519
			KeyValues3::Internal_ClearDataWithoutFreeing(); // 3886
			KeyValues3::Internal_SetType(
					KeyValues3InternalType_t nType);  // 3887
			KeyValues3::Internal_SetToNullAndFreeDirectlyOwnedMemory(); // 522
		}
	}
	CKeyValues3Cluster::FreeAllDireclyOwnedMemory(); // 728
	{
		CKeyValues3Cluster* pCluster; // 730
		CUtlVectorFixedGrowable<CKeyValues3Cluster*, 8>& __for_range; // 56250
		iterator __for_begin; // 56260
		iterator __for_end; // 56270
		CUtlMemory<CKeyValues3Cluster::Base(); // 112
		CUtlVectorBase<CKeyValues3Cluster::Base(); // 102
		CUtlVectorBase<CKeyValues3Cluster::begin(); // 730
		CUtlVectorBase<CKeyValues3Cluster::Count(); // 104
		CUtlVectorBase<CKeyValues3Cluster::end(); // 730
		{
			int i; // 517
			{
				uint64 nMask; // 519
				KeyValues3::Internal_ClearDataWithoutFreeing(); // 3886
				KeyValues3::Internal_SetType(
						KeyValues3InternalType_t nType);  // 3887
				KeyValues3::Internal_SetToNullAndFreeDirectlyOwnedMemory(); // 522
			}
		}
		CKeyValues3Cluster::FreeAllDireclyOwnedMemory(); // 732
		CBufferString::~CBufferString(); // 274
		CBufferString::~CBufferString(); // 274
		CKeyValues3Metadata::~CKeyValues3Metadata(); // 286
		CKeyValues3MetadataCluster::~CKeyValues3MetadataCluster(); // 460
		KeyValues3::~KeyValues3(); // 309
		CKV3ClusterAlloc<KeyValues3, 63>::~CKV3ClusterAlloc(); // 462
		CKeyValues3Cluster::~CKeyValues3Cluster(); // 733
	}
	{
		int i; // 1807
		CUtlMemory<CKeyValues3ArrayCluster::operator[](
				int i);  // 602
		CUtlVectorBase<CKeyValues3ArrayCluster::Element(
			int i);  // 1809
		CUtlMemory<KeyValues3::IsExternallyAllocated(); // 577
		CUtlMemory<KeyValues3::ConvertToExternalMemory(
					KeyValues3** pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<KeyValues3::Purge_FixedGrowable(
					KeyValues3** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<KeyValues3::Purge_FixedGrowable(
					KeyValues3** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		CUtlMemoryFixedGrowable<KeyValues3::Purge(
			int numElements);  // 1799
		CUtlMemory<KeyValues3::Base(); // 112
		CUtlVectorBase<KeyValues3::Base(); // 368
		CUtlVectorBase<KeyValues3::ResetDbgInfo(); // 1800
		CUtlVectorBase<KeyValues3::RemoveAll(); // 1798
		CUtlVectorBase<KeyValues3::Purge(); // 560
		CUtlMemory<KeyValues3::IsExternallyAllocated(); // 905
		CUtlMemory<KeyValues3::Purge(); // 903
		CUtlMemory<KeyValues3::Purge(); // 510
		ValidateAlignment<KeyValues3*>(void); // 508
		CUtlMemory<KeyValues3::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<KeyValues3::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<KeyValues3::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<KeyValues3::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<KeyValues3::~CUtlVectorFixedGrowable(); // 155
		CKeyValues3Array::~CKeyValues3Array(); // 309
		CKV3ClusterAlloc<CKeyValues3Array, 63>::~CKV3ClusterAlloc(); // 563
		CKeyValues3ArrayCluster::~CKeyValues3ArrayCluster(); // 1809
	}
	CUtlVectorBase<CKeyValues3ArrayCluster::RemoveAll(); // 1798
	CUtlMemory<CKeyValues3ArrayCluster::IsExternallyAllocated(); // 577
	CUtlMemory<CKeyValues3ArrayCluster::ConvertToExternalMemory(
				CKeyValues3ArrayCluster** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CKeyValues3ArrayCluster::Purge_FixedGrowable(
				CKeyValues3ArrayCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CKeyValues3ArrayCluster::Purge_FixedGrowable(
				CKeyValues3ArrayCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<4, CKeyValues3ArrayCluster::Base(); // 237
	CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CKeyValues3ArrayCluster::ResetDbgInfo(); // 1800
	CUtlVectorBase<CKeyValues3ArrayCluster::Purge(); // 1811
	CUtlVectorBase<CKeyValues3ArrayCluster::PurgeAndDeleteElements(); // 736
	{
		int i; // 1807
		CUtlMemory<CKeyValues3TableCluster::operator[](
				int i);  // 602
		CUtlVectorBase<CKeyValues3TableCluster::Element(
			int i);  // 1809
		CKV3ClusterAlloc<CKeyValues3Table, 63>::~CKV3ClusterAlloc(); // 616
		CKeyValues3TableCluster::~CKeyValues3TableCluster(); // 1809
	}
	CUtlVectorBase<CKeyValues3TableCluster::RemoveAll(); // 1798
	CUtlMemory<CKeyValues3TableCluster::IsExternallyAllocated(); // 577
	CUtlMemory<CKeyValues3TableCluster::ConvertToExternalMemory(
				CKeyValues3TableCluster** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CKeyValues3TableCluster::Purge_FixedGrowable(
				CKeyValues3TableCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CKeyValues3TableCluster::Purge_FixedGrowable(
				CKeyValues3TableCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<4, CKeyValues3TableCluster::Base(); // 237
	CUtlMemoryFixedGrowable<CKeyValues3TableCluster::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CKeyValues3TableCluster::ResetDbgInfo(); // 1800
	CUtlVectorBase<CKeyValues3TableCluster::Purge(); // 1811
	CUtlVectorBase<CKeyValues3TableCluster::PurgeAndDeleteElements(); // 737
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 55
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 897
			CUtlHashtableEntry<unsigned int, empty_t>::IsValid(); // 899
			CUtlHashtableEntry<unsigned int, empty_t>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<unsigned int, empty_t> >(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 188
	ValidateAlignment<CUtlHashtableEntry<unsigned int, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 55
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::~CUtlSymbolTableLargeBase(); // 738
	CUtlVectorBase<CKeyValues3TableCluster::RemoveAll(); // 1798
	CUtlMemory<CKeyValues3TableCluster::IsExternallyAllocated(); // 577
	CUtlMemory<CKeyValues3TableCluster::ConvertToExternalMemory(
				CKeyValues3TableCluster** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CKeyValues3TableCluster::Purge_FixedGrowable(
				CKeyValues3TableCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CKeyValues3TableCluster::Purge_FixedGrowable(
				CKeyValues3TableCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CKeyValues3TableCluster::Purge(
		int numElements);  // 1799
	CUtlMemory<CKeyValues3TableCluster::Base(); // 112
	CUtlVectorBase<CKeyValues3TableCluster::Base(); // 368
	CUtlVectorBase<CKeyValues3TableCluster::ResetDbgInfo(); // 1800
	CUtlVectorBase<CKeyValues3TableCluster::Purge(); // 560
	CUtlMemory<CKeyValues3TableCluster::Purge(); // 903
	CUtlMemory<CKeyValues3TableCluster::Purge(); // 510
	ValidateAlignment<CKeyValues3TableCluster*>(void); // 508
	CUtlMemory<CKeyValues3TableCluster::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CKeyValues3TableCluster::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CKeyValues3TableCluster::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CKeyValues3TableCluster::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CKeyValues3TableCluster::~CUtlVectorFixedGrowable(); // 738
	CUtlVectorBase<CKeyValues3ArrayCluster::RemoveAll(); // 1798
	CUtlMemory<CKeyValues3ArrayCluster::IsExternallyAllocated(); // 577
	CUtlMemory<CKeyValues3ArrayCluster::ConvertToExternalMemory(
				CKeyValues3ArrayCluster** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CKeyValues3ArrayCluster::Purge_FixedGrowable(
				CKeyValues3ArrayCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CKeyValues3ArrayCluster::Purge_FixedGrowable(
				CKeyValues3ArrayCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CKeyValues3ArrayCluster::ResetDbgInfo(); // 1800
	CUtlVectorBase<CKeyValues3ArrayCluster::Purge(); // 560
	ValidateAlignment<CKeyValues3ArrayCluster*>(void); // 508
	CUtlMemory<CKeyValues3ArrayCluster::Purge(); // 903
	CUtlMemory<CKeyValues3ArrayCluster::Purge(); // 510
	CUtlMemory<CKeyValues3ArrayCluster::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CKeyValues3ArrayCluster::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CKeyValues3ArrayCluster::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CKeyValues3ArrayCluster::~CUtlVectorFixedGrowable(); // 738
	CUtlVectorBase<CKeyValues3Cluster::RemoveAll(); // 1798
	CUtlMemory<CKeyValues3Cluster::IsExternallyAllocated(); // 577
	CUtlMemory<CKeyValues3Cluster::ConvertToExternalMemory(
				CKeyValues3Cluster** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CKeyValues3Cluster::Purge_FixedGrowable(
				CKeyValues3Cluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CKeyValues3Cluster::Purge_FixedGrowable(
				CKeyValues3Cluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<8, CKeyValues3Cluster::Base(); // 237
	CUtlMemoryFixedGrowable<CKeyValues3Cluster::Purge(
		int numElements);  // 1799
	CUtlMemory<CKeyValues3Cluster::Base(); // 112
	CUtlVectorBase<CKeyValues3Cluster::Base(); // 368
	CUtlVectorBase<CKeyValues3Cluster::ResetDbgInfo(); // 1800
	CUtlVectorBase<CKeyValues3Cluster::Purge(); // 560
	CUtlMemory<CKeyValues3Cluster::Purge(); // 903
	CUtlMemory<CKeyValues3Cluster::Purge(); // 510
	ValidateAlignment<CKeyValues3Cluster*>(void); // 508
	CUtlMemory<CKeyValues3Cluster::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CKeyValues3Cluster::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CKeyValues3Cluster::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CKeyValues3Cluster::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CKeyValues3Cluster::~CUtlVectorFixedGrowable(); // 738
	CBufferString::~CBufferString(); // 274
	CBufferString::~CBufferString(); // 274
	CKeyValues3Metadata::~CKeyValues3Metadata(); // 286
	CKeyValues3MetadataCluster::~CKeyValues3MetadataCluster(); // 460
	KeyValues3::~KeyValues3(); // 309
	CKV3ClusterAlloc<KeyValues3, 63>::~CKV3ClusterAlloc(); // 462
	CKeyValues3Cluster::~CKeyValues3Cluster(); // 738
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 738
} /* size: 1842, inline expansions: 105 (5370 bytes) */

// <01255CC2> kv3lib/keyvalues3.cpp:726
// variables: 4
void CKeyValues3ContextImpl::~CKeyValues3ContextImpl()
{
	{
		CKeyValues3Cluster* pCluster; // 730
		CUtlVectorFixedGrowable<CKeyValues3Cluster*, 8>& __for_range; // 56282
		iterator __for_begin; // 4181
		iterator __for_end; // 4181
	}
} /* size: 0 */

// <002D1487> kv3lib/keyvalues3.cpp:726
// variables: 4
void CKeyValues3ContextImpl::~CKeyValues3ContextImpl()
{
	{
		CKeyValues3Cluster* pCluster; // 730
		CUtlVectorFixedGrowable<CKeyValues3Cluster*, 8>& __for_range; // 42449
		iterator __for_begin; // 55884
		iterator __for_end; // 55884
	}
} /* size: 0 */

// <006366D8> kv3lib/keyvalues3.cpp:726
// variables: 16
// function calls: 157
void CKeyValues3ContextImpl::~CKeyValues3ContextImpl()
{
	{
		CKeyValues3Cluster* pCluster; // 730
		CUtlVectorFixedGrowable<CKeyValues3Cluster*, 8>& __for_range; // 2867
		iterator __for_begin; // 2877
		iterator __for_end; // 2887
	}
	{
		int i; // 517
		{
			uint64 nMask; // 519
			KeyValues3::Internal_ClearDataWithoutFreeing(); // 3886
			KeyValues3::Internal_SetType(
					KeyValues3InternalType_t nType);  // 3887
			KeyValues3::Internal_SetToNullAndFreeDirectlyOwnedMemory(); // 522
		}
	}
	CKeyValues3Cluster::FreeAllDireclyOwnedMemory(); // 728
	{
		CKeyValues3Cluster* pCluster; // 730
		CUtlVectorFixedGrowable<CKeyValues3Cluster*, 8>& __for_range; // 2867
		iterator __for_begin; // 2877
		iterator __for_end; // 2887
		CUtlMemory<CKeyValues3Cluster::Base(); // 112
		CUtlVectorBase<CKeyValues3Cluster::Base(); // 102
		CUtlVectorBase<CKeyValues3Cluster::begin(); // 730
		CUtlVectorBase<CKeyValues3Cluster::Count(); // 104
		CUtlVectorBase<CKeyValues3Cluster::end(); // 730
		{
			int i; // 517
			{
				uint64 nMask; // 519
				KeyValues3::Internal_ClearDataWithoutFreeing(); // 3886
				KeyValues3::Internal_SetType(
						KeyValues3InternalType_t nType);  // 3887
				KeyValues3::Internal_SetToNullAndFreeDirectlyOwnedMemory(); // 522
			}
		}
		CKeyValues3Cluster::FreeAllDireclyOwnedMemory(); // 732
		CBufferString::~CBufferString(); // 274
		CBufferString::~CBufferString(); // 274
		CKeyValues3Metadata::~CKeyValues3Metadata(); // 286
		CKeyValues3MetadataCluster::~CKeyValues3MetadataCluster(); // 460
		KeyValues3::~KeyValues3(); // 309
		CKV3ClusterAlloc<KeyValues3, 63>::~CKV3ClusterAlloc(); // 462
		CKeyValues3Cluster::~CKeyValues3Cluster(); // 733
	}
	{
		int i; // 1807
		CUtlMemory<CKeyValues3ArrayCluster::operator[](
				int i);  // 602
		CUtlVectorBase<CKeyValues3ArrayCluster::Element(
			int i);  // 1809
		CUtlMemory<KeyValues3::IsExternallyAllocated(); // 577
		CUtlMemory<KeyValues3::ConvertToExternalMemory(
					KeyValues3** pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<KeyValues3::Purge_FixedGrowable(
					KeyValues3** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<KeyValues3::Purge_FixedGrowable(
					KeyValues3** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		CUtlMemoryFixedGrowable<KeyValues3::Purge(
			int numElements);  // 1799
		CUtlMemory<KeyValues3::Base(); // 112
		CUtlVectorBase<KeyValues3::Base(); // 368
		CUtlVectorBase<KeyValues3::ResetDbgInfo(); // 1800
		CUtlVectorBase<KeyValues3::RemoveAll(); // 1798
		CUtlVectorBase<KeyValues3::Purge(); // 560
		CUtlMemory<KeyValues3::IsExternallyAllocated(); // 905
		CUtlMemory<KeyValues3::Purge(); // 903
		CUtlMemory<KeyValues3::Purge(); // 510
		ValidateAlignment<KeyValues3*>(void); // 508
		CUtlMemory<KeyValues3::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<KeyValues3::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<KeyValues3::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<KeyValues3::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<KeyValues3::~CUtlVectorFixedGrowable(); // 155
		CKeyValues3Array::~CKeyValues3Array(); // 309
		CKV3ClusterAlloc<CKeyValues3Array, 63>::~CKV3ClusterAlloc(); // 563
		CKeyValues3ArrayCluster::~CKeyValues3ArrayCluster(); // 1809
	}
	CUtlVectorBase<CKeyValues3ArrayCluster::RemoveAll(); // 1798
	CUtlMemory<CKeyValues3ArrayCluster::IsExternallyAllocated(); // 577
	CUtlMemory<CKeyValues3ArrayCluster::ConvertToExternalMemory(
				CKeyValues3ArrayCluster** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CKeyValues3ArrayCluster::Purge_FixedGrowable(
				CKeyValues3ArrayCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CKeyValues3ArrayCluster::Purge_FixedGrowable(
				CKeyValues3ArrayCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<4, CKeyValues3ArrayCluster::Base(); // 237
	CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CKeyValues3ArrayCluster::ResetDbgInfo(); // 1800
	CUtlVectorBase<CKeyValues3ArrayCluster::Purge(); // 1811
	CUtlVectorBase<CKeyValues3ArrayCluster::PurgeAndDeleteElements(); // 736
	{
		int i; // 1807
		CUtlMemory<CKeyValues3TableCluster::operator[](
				int i);  // 602
		CUtlVectorBase<CKeyValues3TableCluster::Element(
			int i);  // 1809
		CKV3ClusterAlloc<CKeyValues3Table, 63>::~CKV3ClusterAlloc(); // 616
		CKeyValues3TableCluster::~CKeyValues3TableCluster(); // 1809
	}
	CUtlVectorBase<CKeyValues3TableCluster::RemoveAll(); // 1798
	CUtlMemory<CKeyValues3TableCluster::IsExternallyAllocated(); // 577
	CUtlMemory<CKeyValues3TableCluster::ConvertToExternalMemory(
				CKeyValues3TableCluster** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CKeyValues3TableCluster::Purge_FixedGrowable(
				CKeyValues3TableCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CKeyValues3TableCluster::Purge_FixedGrowable(
				CKeyValues3TableCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<4, CKeyValues3TableCluster::Base(); // 237
	CUtlMemoryFixedGrowable<CKeyValues3TableCluster::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CKeyValues3TableCluster::ResetDbgInfo(); // 1800
	CUtlVectorBase<CKeyValues3TableCluster::Purge(); // 1811
	CUtlVectorBase<CKeyValues3TableCluster::PurgeAndDeleteElements(); // 737
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 55
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 897
			CUtlHashtableEntry<unsigned int, empty_t>::IsValid(); // 899
			CUtlHashtableEntry<unsigned int, empty_t>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<unsigned int, empty_t> >(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 188
	ValidateAlignment<CUtlHashtableEntry<unsigned int, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 55
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::~CUtlSymbolTableLargeBase(); // 738
	CUtlVectorBase<CKeyValues3TableCluster::RemoveAll(); // 1798
	CUtlMemory<CKeyValues3TableCluster::IsExternallyAllocated(); // 577
	CUtlMemory<CKeyValues3TableCluster::ConvertToExternalMemory(
				CKeyValues3TableCluster** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CKeyValues3TableCluster::Purge_FixedGrowable(
				CKeyValues3TableCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CKeyValues3TableCluster::Purge_FixedGrowable(
				CKeyValues3TableCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CKeyValues3TableCluster::Purge(
		int numElements);  // 1799
	CUtlMemory<CKeyValues3TableCluster::Base(); // 112
	CUtlVectorBase<CKeyValues3TableCluster::Base(); // 368
	CUtlVectorBase<CKeyValues3TableCluster::ResetDbgInfo(); // 1800
	CUtlVectorBase<CKeyValues3TableCluster::Purge(); // 560
	CUtlMemory<CKeyValues3TableCluster::Purge(); // 903
	CUtlMemory<CKeyValues3TableCluster::Purge(); // 510
	ValidateAlignment<CKeyValues3TableCluster*>(void); // 508
	CUtlMemory<CKeyValues3TableCluster::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CKeyValues3TableCluster::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CKeyValues3TableCluster::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CKeyValues3TableCluster::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CKeyValues3TableCluster::~CUtlVectorFixedGrowable(); // 738
	CUtlVectorBase<CKeyValues3ArrayCluster::RemoveAll(); // 1798
	CUtlMemory<CKeyValues3ArrayCluster::IsExternallyAllocated(); // 577
	CUtlMemory<CKeyValues3ArrayCluster::ConvertToExternalMemory(
				CKeyValues3ArrayCluster** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CKeyValues3ArrayCluster::Purge_FixedGrowable(
				CKeyValues3ArrayCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CKeyValues3ArrayCluster::Purge_FixedGrowable(
				CKeyValues3ArrayCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CKeyValues3ArrayCluster::ResetDbgInfo(); // 1800
	CUtlVectorBase<CKeyValues3ArrayCluster::Purge(); // 560
	ValidateAlignment<CKeyValues3ArrayCluster*>(void); // 508
	CUtlMemory<CKeyValues3ArrayCluster::Purge(); // 903
	CUtlMemory<CKeyValues3ArrayCluster::Purge(); // 510
	CUtlMemory<CKeyValues3ArrayCluster::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CKeyValues3ArrayCluster::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CKeyValues3ArrayCluster::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CKeyValues3ArrayCluster::~CUtlVectorFixedGrowable(); // 738
	CUtlVectorBase<CKeyValues3Cluster::RemoveAll(); // 1798
	CUtlMemory<CKeyValues3Cluster::IsExternallyAllocated(); // 577
	CUtlMemory<CKeyValues3Cluster::ConvertToExternalMemory(
				CKeyValues3Cluster** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CKeyValues3Cluster::Purge_FixedGrowable(
				CKeyValues3Cluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CKeyValues3Cluster::Purge_FixedGrowable(
				CKeyValues3Cluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<8, CKeyValues3Cluster::Base(); // 237
	CUtlMemoryFixedGrowable<CKeyValues3Cluster::Purge(
		int numElements);  // 1799
	CUtlMemory<CKeyValues3Cluster::Base(); // 112
	CUtlVectorBase<CKeyValues3Cluster::Base(); // 368
	CUtlVectorBase<CKeyValues3Cluster::ResetDbgInfo(); // 1800
	CUtlVectorBase<CKeyValues3Cluster::Purge(); // 560
	CUtlMemory<CKeyValues3Cluster::Purge(); // 903
	CUtlMemory<CKeyValues3Cluster::Purge(); // 510
	ValidateAlignment<CKeyValues3Cluster*>(void); // 508
	CUtlMemory<CKeyValues3Cluster::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CKeyValues3Cluster::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CKeyValues3Cluster::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CKeyValues3Cluster::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CKeyValues3Cluster::~CUtlVectorFixedGrowable(); // 738
	CBufferString::~CBufferString(); // 274
	CBufferString::~CBufferString(); // 274
	CKeyValues3Metadata::~CKeyValues3Metadata(); // 286
	CKeyValues3MetadataCluster::~CKeyValues3MetadataCluster(); // 460
	KeyValues3::~KeyValues3(); // 309
	CKV3ClusterAlloc<KeyValues3, 63>::~CKV3ClusterAlloc(); // 462
	CKeyValues3Cluster::~CKeyValues3Cluster(); // 738
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 738
} /* size: 1842, inline expansions: 105 (5370 bytes) */

// <00636689> kv3lib/keyvalues3.cpp:726
// variables: 4
void CKeyValues3ContextImpl::~CKeyValues3ContextImpl()
{
	{
		CKeyValues3Cluster* pCluster; // 730
		CUtlVectorFixedGrowable<CKeyValues3Cluster*, 8>& __for_range; // 2899
		iterator __for_begin; // 16334
		iterator __for_end; // 16334
	}
} /* size: 0 */

// <00A0E35F> kv3lib/keyvalues3.cpp:726
// variables: 16
// function calls: 157
void CKeyValues3ContextImpl::~CKeyValues3ContextImpl()
{
	{
		CKeyValues3Cluster* pCluster; // 730
		CUtlVectorFixedGrowable<CKeyValues3Cluster*, 8>& __for_range; // 9018
		iterator __for_begin; // 9028
		iterator __for_end; // 9038
	}
	{
		int i; // 517
		{
			uint64 nMask; // 519
			KeyValues3::Internal_ClearDataWithoutFreeing(); // 3886
			KeyValues3::Internal_SetType(
					KeyValues3InternalType_t nType);  // 3887
			KeyValues3::Internal_SetToNullAndFreeDirectlyOwnedMemory(); // 522
		}
	}
	CKeyValues3Cluster::FreeAllDireclyOwnedMemory(); // 728
	{
		CKeyValues3Cluster* pCluster; // 730
		CUtlVectorFixedGrowable<CKeyValues3Cluster*, 8>& __for_range; // 9018
		iterator __for_begin; // 9028
		iterator __for_end; // 9038
		CUtlMemory<CKeyValues3Cluster::Base(); // 112
		CUtlVectorBase<CKeyValues3Cluster::Base(); // 102
		CUtlVectorBase<CKeyValues3Cluster::begin(); // 730
		CUtlVectorBase<CKeyValues3Cluster::Count(); // 104
		CUtlVectorBase<CKeyValues3Cluster::end(); // 730
		{
			int i; // 517
			{
				uint64 nMask; // 519
				KeyValues3::Internal_ClearDataWithoutFreeing(); // 3886
				KeyValues3::Internal_SetType(
						KeyValues3InternalType_t nType);  // 3887
				KeyValues3::Internal_SetToNullAndFreeDirectlyOwnedMemory(); // 522
			}
		}
		CKeyValues3Cluster::FreeAllDireclyOwnedMemory(); // 732
		CBufferString::~CBufferString(); // 274
		CBufferString::~CBufferString(); // 274
		CKeyValues3Metadata::~CKeyValues3Metadata(); // 286
		CKeyValues3MetadataCluster::~CKeyValues3MetadataCluster(); // 460
		KeyValues3::~KeyValues3(); // 309
		CKV3ClusterAlloc<KeyValues3, 63>::~CKV3ClusterAlloc(); // 462
		CKeyValues3Cluster::~CKeyValues3Cluster(); // 733
	}
	{
		int i; // 1807
		CUtlMemory<CKeyValues3ArrayCluster::operator[](
				int i);  // 602
		CUtlVectorBase<CKeyValues3ArrayCluster::Element(
			int i);  // 1809
		CUtlMemory<KeyValues3::IsExternallyAllocated(); // 577
		CUtlMemory<KeyValues3::ConvertToExternalMemory(
					KeyValues3** pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<KeyValues3::Purge_FixedGrowable(
					KeyValues3** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<KeyValues3::Purge_FixedGrowable(
					KeyValues3** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		CUtlMemoryFixedGrowable<KeyValues3::Purge(
			int numElements);  // 1799
		CUtlMemory<KeyValues3::Base(); // 112
		CUtlVectorBase<KeyValues3::Base(); // 368
		CUtlVectorBase<KeyValues3::ResetDbgInfo(); // 1800
		CUtlVectorBase<KeyValues3::RemoveAll(); // 1798
		CUtlVectorBase<KeyValues3::Purge(); // 560
		CUtlMemory<KeyValues3::IsExternallyAllocated(); // 905
		CUtlMemory<KeyValues3::Purge(); // 903
		CUtlMemory<KeyValues3::Purge(); // 510
		ValidateAlignment<KeyValues3*>(void); // 508
		CUtlMemory<KeyValues3::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<KeyValues3::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<KeyValues3::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<KeyValues3::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<KeyValues3::~CUtlVectorFixedGrowable(); // 155
		CKeyValues3Array::~CKeyValues3Array(); // 309
		CKV3ClusterAlloc<CKeyValues3Array, 63>::~CKV3ClusterAlloc(); // 563
		CKeyValues3ArrayCluster::~CKeyValues3ArrayCluster(); // 1809
	}
	CUtlVectorBase<CKeyValues3ArrayCluster::RemoveAll(); // 1798
	CUtlMemory<CKeyValues3ArrayCluster::IsExternallyAllocated(); // 577
	CUtlMemory<CKeyValues3ArrayCluster::ConvertToExternalMemory(
				CKeyValues3ArrayCluster** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CKeyValues3ArrayCluster::Purge_FixedGrowable(
				CKeyValues3ArrayCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CKeyValues3ArrayCluster::Purge_FixedGrowable(
				CKeyValues3ArrayCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<4, CKeyValues3ArrayCluster::Base(); // 237
	CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CKeyValues3ArrayCluster::ResetDbgInfo(); // 1800
	CUtlVectorBase<CKeyValues3ArrayCluster::Purge(); // 1811
	CUtlVectorBase<CKeyValues3ArrayCluster::PurgeAndDeleteElements(); // 736
	{
		int i; // 1807
		CUtlMemory<CKeyValues3TableCluster::operator[](
				int i);  // 602
		CUtlVectorBase<CKeyValues3TableCluster::Element(
			int i);  // 1809
		CKV3ClusterAlloc<CKeyValues3Table, 63>::~CKV3ClusterAlloc(); // 616
		CKeyValues3TableCluster::~CKeyValues3TableCluster(); // 1809
	}
	CUtlVectorBase<CKeyValues3TableCluster::RemoveAll(); // 1798
	CUtlMemory<CKeyValues3TableCluster::IsExternallyAllocated(); // 577
	CUtlMemory<CKeyValues3TableCluster::ConvertToExternalMemory(
				CKeyValues3TableCluster** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CKeyValues3TableCluster::Purge_FixedGrowable(
				CKeyValues3TableCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CKeyValues3TableCluster::Purge_FixedGrowable(
				CKeyValues3TableCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<4, CKeyValues3TableCluster::Base(); // 237
	CUtlMemoryFixedGrowable<CKeyValues3TableCluster::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CKeyValues3TableCluster::ResetDbgInfo(); // 1800
	CUtlVectorBase<CKeyValues3TableCluster::Purge(); // 1811
	CUtlVectorBase<CKeyValues3TableCluster::PurgeAndDeleteElements(); // 737
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 55
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 897
			CUtlHashtableEntry<unsigned int, empty_t>::IsValid(); // 899
			CUtlHashtableEntry<unsigned int, empty_t>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<unsigned int, empty_t> >(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 188
	ValidateAlignment<CUtlHashtableEntry<unsigned int, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 55
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::~CUtlSymbolTableLargeBase(); // 738
	CUtlVectorBase<CKeyValues3TableCluster::RemoveAll(); // 1798
	CUtlMemory<CKeyValues3TableCluster::IsExternallyAllocated(); // 577
	CUtlMemory<CKeyValues3TableCluster::ConvertToExternalMemory(
				CKeyValues3TableCluster** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CKeyValues3TableCluster::Purge_FixedGrowable(
				CKeyValues3TableCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CKeyValues3TableCluster::Purge_FixedGrowable(
				CKeyValues3TableCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CKeyValues3TableCluster::Purge(
		int numElements);  // 1799
	CUtlMemory<CKeyValues3TableCluster::Base(); // 112
	CUtlVectorBase<CKeyValues3TableCluster::Base(); // 368
	CUtlVectorBase<CKeyValues3TableCluster::ResetDbgInfo(); // 1800
	CUtlVectorBase<CKeyValues3TableCluster::Purge(); // 560
	CUtlMemory<CKeyValues3TableCluster::Purge(); // 903
	CUtlMemory<CKeyValues3TableCluster::Purge(); // 510
	ValidateAlignment<CKeyValues3TableCluster*>(void); // 508
	CUtlMemory<CKeyValues3TableCluster::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CKeyValues3TableCluster::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CKeyValues3TableCluster::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CKeyValues3TableCluster::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CKeyValues3TableCluster::~CUtlVectorFixedGrowable(); // 738
	CUtlVectorBase<CKeyValues3ArrayCluster::RemoveAll(); // 1798
	CUtlMemory<CKeyValues3ArrayCluster::IsExternallyAllocated(); // 577
	CUtlMemory<CKeyValues3ArrayCluster::ConvertToExternalMemory(
				CKeyValues3ArrayCluster** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CKeyValues3ArrayCluster::Purge_FixedGrowable(
				CKeyValues3ArrayCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CKeyValues3ArrayCluster::Purge_FixedGrowable(
				CKeyValues3ArrayCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CKeyValues3ArrayCluster::ResetDbgInfo(); // 1800
	CUtlVectorBase<CKeyValues3ArrayCluster::Purge(); // 560
	ValidateAlignment<CKeyValues3ArrayCluster*>(void); // 508
	CUtlMemory<CKeyValues3ArrayCluster::Purge(); // 903
	CUtlMemory<CKeyValues3ArrayCluster::Purge(); // 510
	CUtlMemory<CKeyValues3ArrayCluster::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CKeyValues3ArrayCluster::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CKeyValues3ArrayCluster::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CKeyValues3ArrayCluster::~CUtlVectorFixedGrowable(); // 738
	CUtlVectorBase<CKeyValues3Cluster::RemoveAll(); // 1798
	CUtlMemory<CKeyValues3Cluster::IsExternallyAllocated(); // 577
	CUtlMemory<CKeyValues3Cluster::ConvertToExternalMemory(
				CKeyValues3Cluster** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CKeyValues3Cluster::Purge_FixedGrowable(
				CKeyValues3Cluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CKeyValues3Cluster::Purge_FixedGrowable(
				CKeyValues3Cluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<8, CKeyValues3Cluster::Base(); // 237
	CUtlMemoryFixedGrowable<CKeyValues3Cluster::Purge(
		int numElements);  // 1799
	CUtlMemory<CKeyValues3Cluster::Base(); // 112
	CUtlVectorBase<CKeyValues3Cluster::Base(); // 368
	CUtlVectorBase<CKeyValues3Cluster::ResetDbgInfo(); // 1800
	CUtlVectorBase<CKeyValues3Cluster::Purge(); // 560
	CUtlMemory<CKeyValues3Cluster::Purge(); // 903
	CUtlMemory<CKeyValues3Cluster::Purge(); // 510
	ValidateAlignment<CKeyValues3Cluster*>(void); // 508
	CUtlMemory<CKeyValues3Cluster::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CKeyValues3Cluster::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CKeyValues3Cluster::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CKeyValues3Cluster::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CKeyValues3Cluster::~CUtlVectorFixedGrowable(); // 738
	CBufferString::~CBufferString(); // 274
	CBufferString::~CBufferString(); // 274
	CKeyValues3Metadata::~CKeyValues3Metadata(); // 286
	CKeyValues3MetadataCluster::~CKeyValues3MetadataCluster(); // 460
	KeyValues3::~KeyValues3(); // 309
	CKV3ClusterAlloc<KeyValues3, 63>::~CKV3ClusterAlloc(); // 462
	CKeyValues3Cluster::~CKeyValues3Cluster(); // 738
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 738
} /* size: 1842, inline expansions: 105 (5370 bytes) */

// <00A0E310> kv3lib/keyvalues3.cpp:726
// variables: 4
void CKeyValues3ContextImpl::~CKeyValues3ContextImpl()
{
	{
		CKeyValues3Cluster* pCluster; // 730
		CUtlVectorFixedGrowable<CKeyValues3Cluster*, 8>& __for_range; // 9050
		iterator __for_begin; // 22485
		iterator __for_end; // 22485
	}
} /* size: 0 */

// <0011AEE0> kv3lib/keyvalues3.cpp:726
// variables: 16
// function calls: 157
void CKeyValues3ContextImpl::~CKeyValues3ContextImpl()
{
	{
		CKeyValues3Cluster* pCluster; // 730
		CUtlVectorFixedGrowable<CKeyValues3Cluster*, 8>& __for_range; // 1515
		iterator __for_begin; // 1525
		iterator __for_end; // 1535
	}
	{
		int i; // 517
		{
			uint64 nMask; // 519
			KeyValues3::Internal_ClearDataWithoutFreeing(); // 3886
			KeyValues3::Internal_SetType(
					KeyValues3InternalType_t nType);  // 3887
			KeyValues3::Internal_SetToNullAndFreeDirectlyOwnedMemory(); // 522
		}
	}
	CKeyValues3Cluster::FreeAllDireclyOwnedMemory(); // 728
	{
		CKeyValues3Cluster* pCluster; // 730
		CUtlVectorFixedGrowable<CKeyValues3Cluster*, 8>& __for_range; // 1515
		iterator __for_begin; // 1525
		iterator __for_end; // 1535
		CUtlMemory<CKeyValues3Cluster::Base(); // 112
		CUtlVectorBase<CKeyValues3Cluster::Base(); // 102
		CUtlVectorBase<CKeyValues3Cluster::begin(); // 730
		CUtlVectorBase<CKeyValues3Cluster::Count(); // 104
		CUtlVectorBase<CKeyValues3Cluster::end(); // 730
		{
			int i; // 517
			{
				uint64 nMask; // 519
				KeyValues3::Internal_ClearDataWithoutFreeing(); // 3886
				KeyValues3::Internal_SetType(
						KeyValues3InternalType_t nType);  // 3887
				KeyValues3::Internal_SetToNullAndFreeDirectlyOwnedMemory(); // 522
			}
		}
		CKeyValues3Cluster::FreeAllDireclyOwnedMemory(); // 732
		CBufferString::~CBufferString(); // 274
		CBufferString::~CBufferString(); // 274
		CKeyValues3Metadata::~CKeyValues3Metadata(); // 286
		CKeyValues3MetadataCluster::~CKeyValues3MetadataCluster(); // 460
		KeyValues3::~KeyValues3(); // 309
		CKV3ClusterAlloc<KeyValues3, 63>::~CKV3ClusterAlloc(); // 462
		CKeyValues3Cluster::~CKeyValues3Cluster(); // 733
	}
	{
		int i; // 1807
		CUtlMemory<CKeyValues3ArrayCluster::operator[](
				int i);  // 602
		CUtlVectorBase<CKeyValues3ArrayCluster::Element(
			int i);  // 1809
		CUtlMemory<KeyValues3::IsExternallyAllocated(); // 577
		CUtlMemory<KeyValues3::ConvertToExternalMemory(
					KeyValues3** pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<KeyValues3::Purge_FixedGrowable(
					KeyValues3** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<KeyValues3::Purge_FixedGrowable(
					KeyValues3** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		CUtlMemoryFixedGrowable<KeyValues3::Purge(
			int numElements);  // 1799
		CUtlMemory<KeyValues3::Base(); // 112
		CUtlVectorBase<KeyValues3::Base(); // 368
		CUtlVectorBase<KeyValues3::ResetDbgInfo(); // 1800
		CUtlVectorBase<KeyValues3::RemoveAll(); // 1798
		CUtlVectorBase<KeyValues3::Purge(); // 560
		CUtlMemory<KeyValues3::IsExternallyAllocated(); // 905
		CUtlMemory<KeyValues3::Purge(); // 903
		CUtlMemory<KeyValues3::Purge(); // 510
		ValidateAlignment<KeyValues3*>(void); // 508
		CUtlMemory<KeyValues3::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<KeyValues3::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<KeyValues3::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<KeyValues3::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<KeyValues3::~CUtlVectorFixedGrowable(); // 155
		CKeyValues3Array::~CKeyValues3Array(); // 309
		CKV3ClusterAlloc<CKeyValues3Array, 63>::~CKV3ClusterAlloc(); // 563
		CKeyValues3ArrayCluster::~CKeyValues3ArrayCluster(); // 1809
	}
	CUtlVectorBase<CKeyValues3ArrayCluster::RemoveAll(); // 1798
	CUtlMemory<CKeyValues3ArrayCluster::IsExternallyAllocated(); // 577
	CUtlMemory<CKeyValues3ArrayCluster::ConvertToExternalMemory(
				CKeyValues3ArrayCluster** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CKeyValues3ArrayCluster::Purge_FixedGrowable(
				CKeyValues3ArrayCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CKeyValues3ArrayCluster::Purge_FixedGrowable(
				CKeyValues3ArrayCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<4, CKeyValues3ArrayCluster::Base(); // 237
	CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CKeyValues3ArrayCluster::ResetDbgInfo(); // 1800
	CUtlVectorBase<CKeyValues3ArrayCluster::Purge(); // 1811
	CUtlVectorBase<CKeyValues3ArrayCluster::PurgeAndDeleteElements(); // 736
	{
		int i; // 1807
		CUtlMemory<CKeyValues3TableCluster::operator[](
				int i);  // 602
		CUtlVectorBase<CKeyValues3TableCluster::Element(
			int i);  // 1809
		CKV3ClusterAlloc<CKeyValues3Table, 63>::~CKV3ClusterAlloc(); // 616
		CKeyValues3TableCluster::~CKeyValues3TableCluster(); // 1809
	}
	CUtlVectorBase<CKeyValues3TableCluster::RemoveAll(); // 1798
	CUtlMemory<CKeyValues3TableCluster::IsExternallyAllocated(); // 577
	CUtlMemory<CKeyValues3TableCluster::ConvertToExternalMemory(
				CKeyValues3TableCluster** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CKeyValues3TableCluster::Purge_FixedGrowable(
				CKeyValues3TableCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CKeyValues3TableCluster::Purge_FixedGrowable(
				CKeyValues3TableCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<4, CKeyValues3TableCluster::Base(); // 237
	CUtlMemoryFixedGrowable<CKeyValues3TableCluster::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CKeyValues3TableCluster::ResetDbgInfo(); // 1800
	CUtlVectorBase<CKeyValues3TableCluster::Purge(); // 1811
	CUtlVectorBase<CKeyValues3TableCluster::PurgeAndDeleteElements(); // 737
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 55
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 897
			CUtlHashtableEntry<unsigned int, empty_t>::IsValid(); // 899
			CUtlHashtableEntry<unsigned int, empty_t>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<unsigned int, empty_t> >(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 188
	ValidateAlignment<CUtlHashtableEntry<unsigned int, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 55
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::~CUtlSymbolTableLargeBase(); // 738
	CUtlVectorBase<CKeyValues3TableCluster::RemoveAll(); // 1798
	CUtlMemory<CKeyValues3TableCluster::IsExternallyAllocated(); // 577
	CUtlMemory<CKeyValues3TableCluster::ConvertToExternalMemory(
				CKeyValues3TableCluster** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CKeyValues3TableCluster::Purge_FixedGrowable(
				CKeyValues3TableCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CKeyValues3TableCluster::Purge_FixedGrowable(
				CKeyValues3TableCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CKeyValues3TableCluster::Purge(
		int numElements);  // 1799
	CUtlMemory<CKeyValues3TableCluster::Base(); // 112
	CUtlVectorBase<CKeyValues3TableCluster::Base(); // 368
	CUtlVectorBase<CKeyValues3TableCluster::ResetDbgInfo(); // 1800
	CUtlVectorBase<CKeyValues3TableCluster::Purge(); // 560
	CUtlMemory<CKeyValues3TableCluster::Purge(); // 903
	CUtlMemory<CKeyValues3TableCluster::Purge(); // 510
	ValidateAlignment<CKeyValues3TableCluster*>(void); // 508
	CUtlMemory<CKeyValues3TableCluster::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CKeyValues3TableCluster::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CKeyValues3TableCluster::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CKeyValues3TableCluster::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CKeyValues3TableCluster::~CUtlVectorFixedGrowable(); // 738
	CUtlVectorBase<CKeyValues3ArrayCluster::RemoveAll(); // 1798
	CUtlMemory<CKeyValues3ArrayCluster::IsExternallyAllocated(); // 577
	CUtlMemory<CKeyValues3ArrayCluster::ConvertToExternalMemory(
				CKeyValues3ArrayCluster** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CKeyValues3ArrayCluster::Purge_FixedGrowable(
				CKeyValues3ArrayCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CKeyValues3ArrayCluster::Purge_FixedGrowable(
				CKeyValues3ArrayCluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CKeyValues3ArrayCluster::ResetDbgInfo(); // 1800
	CUtlVectorBase<CKeyValues3ArrayCluster::Purge(); // 560
	ValidateAlignment<CKeyValues3ArrayCluster*>(void); // 508
	CUtlMemory<CKeyValues3ArrayCluster::Purge(); // 903
	CUtlMemory<CKeyValues3ArrayCluster::Purge(); // 510
	CUtlMemory<CKeyValues3ArrayCluster::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CKeyValues3ArrayCluster::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CKeyValues3ArrayCluster::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CKeyValues3ArrayCluster::~CUtlVectorFixedGrowable(); // 738
	CUtlVectorBase<CKeyValues3Cluster::RemoveAll(); // 1798
	CUtlMemory<CKeyValues3Cluster::IsExternallyAllocated(); // 577
	CUtlMemory<CKeyValues3Cluster::ConvertToExternalMemory(
				CKeyValues3Cluster** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CKeyValues3Cluster::Purge_FixedGrowable(
				CKeyValues3Cluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CKeyValues3Cluster::Purge_FixedGrowable(
				CKeyValues3Cluster** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<8, CKeyValues3Cluster::Base(); // 237
	CUtlMemoryFixedGrowable<CKeyValues3Cluster::Purge(
		int numElements);  // 1799
	CUtlMemory<CKeyValues3Cluster::Base(); // 112
	CUtlVectorBase<CKeyValues3Cluster::Base(); // 368
	CUtlVectorBase<CKeyValues3Cluster::ResetDbgInfo(); // 1800
	CUtlVectorBase<CKeyValues3Cluster::Purge(); // 560
	CUtlMemory<CKeyValues3Cluster::Purge(); // 903
	CUtlMemory<CKeyValues3Cluster::Purge(); // 510
	ValidateAlignment<CKeyValues3Cluster*>(void); // 508
	CUtlMemory<CKeyValues3Cluster::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CKeyValues3Cluster::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CKeyValues3Cluster::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CKeyValues3Cluster::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CKeyValues3Cluster::~CUtlVectorFixedGrowable(); // 738
	CBufferString::~CBufferString(); // 274
	CBufferString::~CBufferString(); // 274
	CKeyValues3Metadata::~CKeyValues3Metadata(); // 286
	CKeyValues3MetadataCluster::~CKeyValues3MetadataCluster(); // 460
	KeyValues3::~KeyValues3(); // 309
	CKV3ClusterAlloc<KeyValues3, 63>::~CKV3ClusterAlloc(); // 462
	CKeyValues3Cluster::~CKeyValues3Cluster(); // 738
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 738
} /* size: 0, inline expansions: 105 (0 bytes) */

// <0011AE91> kv3lib/keyvalues3.cpp:726
// variables: 4
void CKeyValues3ContextImpl::~CKeyValues3ContextImpl()
{
	{
		CKeyValues3Cluster* pCluster; // 730
		CUtlVectorFixedGrowable<CKeyValues3Cluster*, 8>& __for_range; // 1547
		iterator __for_begin; // 14982
		iterator __for_end; // 14982
	}
} /* size: 0 */

// <05578E0B> kv3lib/keyvalues3.cpp:750
// function calls: 10
void CKeyValues3Iterator::CKeyValues3Iterator()
{
	CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::CUtlMemory(
			StackEntry_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CKeyValues3Iterator::StackEntry_t, int>::CUtlMemoryFixedGrowable_Base(
					StackEntry_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	{
	}
	AlignedByteArrayExplicit_t<4, CKeyValues3Iterator::StackEntry_t, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, CKeyValues3Iterator::StackEntry_t>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<4, CKeyValues3Iterator::StackEntry_t, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 530
	CUtlVectorBase(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4>::CUtlVectorFixedGrowable(
				int growSize);  // 750
} /* size: 0, inline expansions: 10 (0 bytes) */

// <05578DEE> kv3lib/keyvalues3.cpp:750
void CKeyValues3Iterator::CKeyValues3Iterator()
{
} /* size: 0 */

// <05578968> kv3lib/keyvalues3.cpp:757
// variable: 1
// function calls: 19
void CKeyValues3Iterator::CKeyValues3Iterator(KeyValues3* pKV3)
{
	CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::CUtlMemory(
			StackEntry_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CKeyValues3Iterator::StackEntry_t, int>::CUtlMemoryFixedGrowable_Base(
					StackEntry_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	{
	}
	AlignedByteArrayExplicit_t<4, CKeyValues3Iterator::StackEntry_t, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, CKeyValues3Iterator::StackEntry_t>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<4, CKeyValues3Iterator::StackEntry_t, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 530
	CUtlVectorBase(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4>::CUtlVectorFixedGrowable(
				int growSize);  // 757
	RemoveAll(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 767
	{
		StackEntry_t& e; // 770
		CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::NumAllocated(); // 1143
		CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 368
		ResetDbgInfo(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 824
		GrowMemory(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 770
	}
	CKeyValues3Iterator::Init(
		KeyValues3* pKV3);  // 765
	CKeyValues3Iterator::Init(
		KeyValues3* pKV3);  // 759
} /* size: 197, inline expansions: 13 (416 bytes) */

// <0557893E> kv3lib/keyvalues3.cpp:757
void CKeyValues3Iterator::CKeyValues3Iterator(KeyValues3* pKV3)
{
} /* size: 0 */

// <055892C2> kv3lib/keyvalues3.cpp:765
// variable: 1
// function calls: 10
void CKeyValues3Iterator::Init(KeyValues3* pKV3)
{
	RemoveAll(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 767
	{
		StackEntry_t& e; // 770
		CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::NumAllocated(); // 1143
		CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 368
		ResetDbgInfo(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 824
		GrowMemory(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 770
		CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
				int i);  // 770
	}
	CKeyValues3Iterator::Init(
		KeyValues3* pKV3);  // 765
} /* size: 0, inline expansions: 2 (0 bytes) */

// <05578907> kv3lib/keyvalues3.cpp:765
// variable: 1
void CKeyValues3Iterator::Init(KeyValues3* pKV3)
{
	{
		StackEntry_t& e; // 770
	}
} /* size: 0 */

// <05582B03> kv3lib/keyvalues3.cpp:779
// function call: 1
void CKeyValues3Iterator::IsValid()
{
	Count(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, this); // 781
} /* size: 13, inline expansions: 1 (0 bytes) */

// <055788EA> kv3lib/keyvalues3.cpp:779
void CKeyValues3Iterator::IsValid()
{
} /* size: 0 */

// <05577E80> kv3lib/keyvalues3.cpp:787
// variables: 9
// function calls: 48
void CKeyValues3Iterator::Advance()
{
	const char   __FUNCTION__; // 35591
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 789
	}
	{
		StackEntry_t& e; // 799
		KeyValues3* pCurrent; // 800
		{
			int nIndex; // 809
			StackEntry_t& e2; // 810
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::NumAllocated(); // 1143
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::Base(); // 112
			Base(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 368
			ResetDbgInfo(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 824
			GrowMemory(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int num);  // 1145
			AddToTail(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 810
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int i);  // 810
		}
		{
			int nIndex; // 829
			StackEntry_t& e2; // 830
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::NumAllocated(); // 1143
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::Base(); // 112
			Base(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 368
			ResetDbgInfo(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 824
			GrowMemory(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int num);  // 1145
			AddToTail(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 830
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int i);  // 830
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 2554
			KeyValues3::GetTable(); // 2557
			CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
			CKeyValues3Table::Count(); // 2558
			CUtlMemory<KeyValues3::operator[](
					int i);  // 588
			CUtlVectorBase<KeyValues3::operator[](
					int i);  // 3345
			CKeyValues3Table::MemberData(
					int nIndex);  // 2561
			KeyValues3::GetMember(
					int nIndex);  // 832
		}
		{
			int i; // 1696
		}
		RemoveMultipleFromTail(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int num);  // 838
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 2543
		KeyValues3::GetTable(); // 2546
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
		CKeyValues3Table::Count(); // 2546
		KeyValues3::GetMemberCount(); // 826
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 801
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1200
		CUtlVectorBase<KeyValues3::Count(); // 164
		CKeyValues3Array::GetElementCount(); // 1208
		KeyValues3::GetArrayElementCount(); // 806
		Count(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, this); // 793
		CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::operator[](
				int i);  // 630
		Tail(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 799
	}
	Count(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, this); // 781
	CKeyValues3Iterator::IsValid(); // 789
} /* size: 0, variables: 1, inline expansions: 2 (6 bytes) */

// <028EF87A> kv3lib/keyvalues3.cpp:787
// variables: 9
// function calls: 48
void CKeyValues3Iterator::Advance()
{
	const char   __FUNCTION__; // 54262
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 789
	}
	{
		StackEntry_t& e; // 799
		KeyValues3* pCurrent; // 800
		{
			int nIndex; // 809
			StackEntry_t& e2; // 810
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::NumAllocated(); // 1143
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::Base(); // 112
			Base(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 368
			ResetDbgInfo(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 824
			GrowMemory(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int num);  // 1145
			AddToTail(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 810
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int i);  // 810
		}
		{
			int nIndex; // 829
			StackEntry_t& e2; // 830
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::NumAllocated(); // 1143
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::Base(); // 112
			Base(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 368
			ResetDbgInfo(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 824
			GrowMemory(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int num);  // 1145
			AddToTail(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 830
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int i);  // 830
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 2554
			KeyValues3::GetTable(); // 2557
			CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
			CKeyValues3Table::Count(); // 2558
			CUtlMemory<KeyValues3::operator[](
					int i);  // 588
			CUtlVectorBase<KeyValues3::operator[](
					int i);  // 3345
			CKeyValues3Table::MemberData(
					int nIndex);  // 2561
			KeyValues3::GetMember(
					int nIndex);  // 832
		}
		{
			int i; // 1696
		}
		RemoveMultipleFromTail(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int num);  // 838
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 2543
		KeyValues3::GetTable(); // 2546
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
		CKeyValues3Table::Count(); // 2546
		KeyValues3::GetMemberCount(); // 826
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 801
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1200
		CUtlVectorBase<KeyValues3::Count(); // 164
		CKeyValues3Array::GetElementCount(); // 1208
		KeyValues3::GetArrayElementCount(); // 806
		Count(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, this); // 793
		CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::operator[](
				int i);  // 630
		Tail(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 799
	}
	Count(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, this); // 781
	CKeyValues3Iterator::IsValid(); // 789
} /* size: 0, variables: 1, inline expansions: 2 (6 bytes) */

// <01254AAC> kv3lib/keyvalues3.cpp:787
// variables: 9
// function calls: 48
void CKeyValues3Iterator::Advance()
{
	const char   __FUNCTION__; // 15846
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 789
	}
	{
		StackEntry_t& e; // 799
		KeyValues3* pCurrent; // 800
		{
			int nIndex; // 809
			StackEntry_t& e2; // 810
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::NumAllocated(); // 1143
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::Base(); // 112
			Base(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 368
			ResetDbgInfo(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 824
			GrowMemory(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int num);  // 1145
			AddToTail(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 810
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int i);  // 810
		}
		{
			int nIndex; // 829
			StackEntry_t& e2; // 830
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::NumAllocated(); // 1143
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::Base(); // 112
			Base(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 368
			ResetDbgInfo(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 824
			GrowMemory(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int num);  // 1145
			AddToTail(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 830
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int i);  // 830
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 2554
			KeyValues3::GetTable(); // 2557
			CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
			CKeyValues3Table::Count(); // 2558
			CUtlMemory<KeyValues3::operator[](
					int i);  // 588
			CUtlVectorBase<KeyValues3::operator[](
					int i);  // 3345
			CKeyValues3Table::MemberData(
					int nIndex);  // 2561
			KeyValues3::GetMember(
					int nIndex);  // 832
		}
		{
			int i; // 1696
		}
		RemoveMultipleFromTail(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int num);  // 838
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 2543
		KeyValues3::GetTable(); // 2546
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
		CKeyValues3Table::Count(); // 2546
		KeyValues3::GetMemberCount(); // 826
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 801
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1200
		CUtlVectorBase<KeyValues3::Count(); // 164
		CKeyValues3Array::GetElementCount(); // 1208
		KeyValues3::GetArrayElementCount(); // 806
		Count(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, this); // 793
		CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::operator[](
				int i);  // 630
		Tail(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 799
	}
	Count(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, this); // 781
	CKeyValues3Iterator::IsValid(); // 789
} /* size: 0, variables: 1, inline expansions: 2 (6 bytes) */

// <002D0271> kv3lib/keyvalues3.cpp:787
// variables: 9
// function calls: 48
void CKeyValues3Iterator::Advance()
{
	const char   __FUNCTION__; // 2013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 789
	}
	{
		StackEntry_t& e; // 799
		KeyValues3* pCurrent; // 800
		{
			int nIndex; // 809
			StackEntry_t& e2; // 810
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::NumAllocated(); // 1143
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::Base(); // 112
			Base(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 368
			ResetDbgInfo(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 824
			GrowMemory(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int num);  // 1145
			AddToTail(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 810
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int i);  // 810
		}
		{
			int nIndex; // 829
			StackEntry_t& e2; // 830
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::NumAllocated(); // 1143
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::Base(); // 112
			Base(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 368
			ResetDbgInfo(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 824
			GrowMemory(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int num);  // 1145
			AddToTail(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 830
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int i);  // 830
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 2554
			KeyValues3::GetTable(); // 2557
			CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
			CKeyValues3Table::Count(); // 2558
			CUtlMemory<KeyValues3::operator[](
					int i);  // 588
			CUtlVectorBase<KeyValues3::operator[](
					int i);  // 3345
			CKeyValues3Table::MemberData(
					int nIndex);  // 2561
			KeyValues3::GetMember(
					int nIndex);  // 832
		}
		{
			int i; // 1696
		}
		RemoveMultipleFromTail(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int num);  // 838
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 2543
		KeyValues3::GetTable(); // 2546
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
		CKeyValues3Table::Count(); // 2546
		KeyValues3::GetMemberCount(); // 826
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 801
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1200
		CUtlVectorBase<KeyValues3::Count(); // 164
		CKeyValues3Array::GetElementCount(); // 1208
		KeyValues3::GetArrayElementCount(); // 806
		Count(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, this); // 793
		CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::operator[](
				int i);  // 630
		Tail(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 799
	}
	Count(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, this); // 781
	CKeyValues3Iterator::IsValid(); // 789
} /* size: 0, variables: 1, inline expansions: 2 (6 bytes) */

// <00635473> kv3lib/keyvalues3.cpp:787
// variables: 9
// function calls: 48
void CKeyValues3Iterator::Advance()
{
	const char   __FUNCTION__; // 27999
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 789
	}
	{
		StackEntry_t& e; // 799
		KeyValues3* pCurrent; // 800
		{
			int nIndex; // 809
			StackEntry_t& e2; // 810
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::NumAllocated(); // 1143
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::Base(); // 112
			Base(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 368
			ResetDbgInfo(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 824
			GrowMemory(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int num);  // 1145
			AddToTail(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 810
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int i);  // 810
		}
		{
			int nIndex; // 829
			StackEntry_t& e2; // 830
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::NumAllocated(); // 1143
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::Base(); // 112
			Base(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 368
			ResetDbgInfo(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 824
			GrowMemory(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int num);  // 1145
			AddToTail(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 830
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int i);  // 830
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 2554
			KeyValues3::GetTable(); // 2557
			CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
			CKeyValues3Table::Count(); // 2558
			CUtlMemory<KeyValues3::operator[](
					int i);  // 588
			CUtlVectorBase<KeyValues3::operator[](
					int i);  // 3345
			CKeyValues3Table::MemberData(
					int nIndex);  // 2561
			KeyValues3::GetMember(
					int nIndex);  // 832
		}
		{
			int i; // 1696
		}
		RemoveMultipleFromTail(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int num);  // 838
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 2543
		KeyValues3::GetTable(); // 2546
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
		CKeyValues3Table::Count(); // 2546
		KeyValues3::GetMemberCount(); // 826
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 801
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1200
		CUtlVectorBase<KeyValues3::Count(); // 164
		CKeyValues3Array::GetElementCount(); // 1208
		KeyValues3::GetArrayElementCount(); // 806
		Count(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, this); // 793
		CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::operator[](
				int i);  // 630
		Tail(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 799
	}
	Count(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, this); // 781
	CKeyValues3Iterator::IsValid(); // 789
} /* size: 0, variables: 1, inline expansions: 2 (6 bytes) */

// <00A0D0FA> kv3lib/keyvalues3.cpp:787
// variables: 9
// function calls: 48
void CKeyValues3Iterator::Advance()
{
	const char   __FUNCTION__; // 34150
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 789
	}
	{
		StackEntry_t& e; // 799
		KeyValues3* pCurrent; // 800
		{
			int nIndex; // 809
			StackEntry_t& e2; // 810
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::NumAllocated(); // 1143
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::Base(); // 112
			Base(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 368
			ResetDbgInfo(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 824
			GrowMemory(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int num);  // 1145
			AddToTail(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 810
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int i);  // 810
		}
		{
			int nIndex; // 829
			StackEntry_t& e2; // 830
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::NumAllocated(); // 1143
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::Base(); // 112
			Base(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 368
			ResetDbgInfo(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 824
			GrowMemory(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int num);  // 1145
			AddToTail(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 830
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int i);  // 830
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 2554
			KeyValues3::GetTable(); // 2557
			CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
			CKeyValues3Table::Count(); // 2558
			CUtlMemory<KeyValues3::operator[](
					int i);  // 588
			CUtlVectorBase<KeyValues3::operator[](
					int i);  // 3345
			CKeyValues3Table::MemberData(
					int nIndex);  // 2561
			KeyValues3::GetMember(
					int nIndex);  // 832
		}
		{
			int i; // 1696
		}
		RemoveMultipleFromTail(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int num);  // 838
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 2543
		KeyValues3::GetTable(); // 2546
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
		CKeyValues3Table::Count(); // 2546
		KeyValues3::GetMemberCount(); // 826
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 801
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1200
		CUtlVectorBase<KeyValues3::Count(); // 164
		CKeyValues3Array::GetElementCount(); // 1208
		KeyValues3::GetArrayElementCount(); // 806
		Count(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, this); // 793
		CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::operator[](
				int i);  // 630
		Tail(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 799
	}
	Count(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, this); // 781
	CKeyValues3Iterator::IsValid(); // 789
} /* size: 0, variables: 1, inline expansions: 2 (6 bytes) */

// <00119C7B> kv3lib/keyvalues3.cpp:787
// variables: 9
// function calls: 48
void CKeyValues3Iterator::Advance()
{
	const char   __FUNCTION__; // 26647
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 789
	}
	{
		StackEntry_t& e; // 799
		KeyValues3* pCurrent; // 800
		{
			int nIndex; // 809
			StackEntry_t& e2; // 810
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::NumAllocated(); // 1143
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::Base(); // 112
			Base(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 368
			ResetDbgInfo(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 824
			GrowMemory(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int num);  // 1145
			AddToTail(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 810
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int i);  // 810
		}
		{
			int nIndex; // 829
			StackEntry_t& e2; // 830
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::NumAllocated(); // 1143
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::Base(); // 112
			Base(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 368
			ResetDbgInfo(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 824
			GrowMemory(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int num);  // 1145
			AddToTail(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 830
			CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int i);  // 830
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 2554
			KeyValues3::GetTable(); // 2557
			CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
			CKeyValues3Table::Count(); // 2558
			CUtlMemory<KeyValues3::operator[](
					int i);  // 588
			CUtlVectorBase<KeyValues3::operator[](
					int i);  // 3345
			CKeyValues3Table::MemberData(
					int nIndex);  // 2561
			KeyValues3::GetMember(
					int nIndex);  // 832
		}
		{
			int i; // 1696
		}
		RemoveMultipleFromTail(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this,
					int num);  // 838
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 2543
		KeyValues3::GetTable(); // 2546
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
		CKeyValues3Table::Count(); // 2546
		KeyValues3::GetMemberCount(); // 826
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 801
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1200
		CUtlVectorBase<KeyValues3::Count(); // 164
		CKeyValues3Array::GetElementCount(); // 1208
		KeyValues3::GetArrayElementCount(); // 806
		Count(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, this); // 793
		CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::operator[](
				int i);  // 630
		Tail(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 799
	}
	Count(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, this); // 781
	CKeyValues3Iterator::IsValid(); // 789
} /* size: 0, variables: 1, inline expansions: 2 (6 bytes) */

// <05577DB4> kv3lib/keyvalues3.cpp:852
// function calls: 3
void CKeyValues3Iterator::Get()
{
	Count(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, this); // 854
	CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::operator[](
			int i);  // 637
	Tail(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, this); // 857
} /* size: 35, inline expansions: 3 (10 bytes) */

// <05582B5D> kv3lib/keyvalues3.cpp:863
// function calls: 3
void KeyValues3::GetTable()
{
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
} /* size: 0, inline expansions: 3 (0 bytes) */

// <05577D97> kv3lib/keyvalues3.cpp:863
void KeyValues3::GetTable()
{
} /* size: 0 */

// <05588367> kv3lib/keyvalues3.cpp:893
// function calls: 3
void KeyValues3::SetToEmptyTable()
{
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 903
	KeyValues3::ReserveTableCapacity(
				uint nTableSize);  // 895
} /* size: 60, inline expansions: 3 (104 bytes) */

// <05577D5D> kv3lib/keyvalues3.cpp:893
void KeyValues3::SetToEmptyTable()
{
} /* size: 0 */

// <05588269> kv3lib/keyvalues3.cpp:901
// function calls: 2
void KeyValues3::ReserveTableCapacity(uint nTableSize)
{
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 903
} /* size: 87, inline expansions: 2 (66 bytes) */

// <05577D33> kv3lib/keyvalues3.cpp:901
void KeyValues3::ReserveTableCapacity(uint nTableSize)
{
} /* size: 0 */

// <05577787> kv3lib/keyvalues3.cpp:910
// variable: 1
// function calls: 22
void KeyValues3::GetMemberInt(CKV3MemberName memberName, int defaultValue)
{
	const KeyValues3* pMember; // 912
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 912
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2528
	KeyValues3::GetTable(); // 2531
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 2531
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3338
	{
	}
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3345
	CKeyValues3Table::MemberData(
			int nIndex);  // 2535
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				uint& nextPropertyHint,
				KeyValues3* pDefaultValue);  // 943
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 943
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				uint& nNextPropertyHint,
				const KeyValues3* pDefaultValue);  // 941
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 941
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				const KeyValues3* pDefaultValue);  // 912
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<int>(); // 694
	KeyValues3::GetValueAsNumeric<int>(); // 184
	KeyValues3::GetValueInt(); // 916
} /* size: 0, variables: 1, inline expansions: 22 (997 bytes) */

// <055771B5> kv3lib/keyvalues3.cpp:922
// variable: 1
// function calls: 23
void KeyValues3::GetMemberBool(CKV3MemberName memberName, bool defaultValue)
{
	const KeyValues3* pMember; // 924
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 924
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2528
	KeyValues3::GetTable(); // 2531
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 2531
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3338
	{
	}
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3345
	CKeyValues3Table::MemberData(
			int nIndex);  // 2535
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				uint& nextPropertyHint,
				KeyValues3* pDefaultValue);  // 943
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 943
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				uint& nNextPropertyHint,
				const KeyValues3* pDefaultValue);  // 941
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 941
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				const KeyValues3* pDefaultValue);  // 924
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1333
	{
	}
	KV3Helper_StringToNumber<int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<int>(); // 694
	KeyValues3::GetValueAsNumeric<int>(); // 1335
	KeyValues3::GetValueBool(); // 1331
	KeyValues3::GetValueBool(); // 928
} /* size: 0, variables: 1, inline expansions: 23 (1021 bytes) */

// <05576C20> kv3lib/keyvalues3.cpp:934
// variable: 1
// function calls: 22
void KeyValues3::GetMemberUint64(CKV3MemberName memberName, uint64 defaultValue)
{
	const KeyValues3* pMember; // 936
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 936
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2528
	KeyValues3::GetTable(); // 2531
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 2531
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3338
	{
	}
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3345
	CKeyValues3Table::MemberData(
			int nIndex);  // 2535
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				uint& nextPropertyHint,
				KeyValues3* pDefaultValue);  // 943
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 943
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				uint& nNextPropertyHint,
				const KeyValues3* pDefaultValue);  // 941
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 941
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				const KeyValues3* pDefaultValue);  // 936
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long unsigned int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 694
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 940
} /* size: 0, variables: 1, inline expansions: 22 (0 bytes) */

// <0557668B> kv3lib/keyvalues3.cpp:946
// variable: 1
// function calls: 22
void KeyValues3::GetMemberInt64(CKV3MemberName memberName, int64 defaultValue)
{
	const KeyValues3* pMember; // 948
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 948
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2528
	KeyValues3::GetTable(); // 2531
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 2531
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3338
	{
	}
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3345
	CKeyValues3Table::MemberData(
			int nIndex);  // 2535
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				uint& nextPropertyHint,
				KeyValues3* pDefaultValue);  // 943
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 943
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				uint& nNextPropertyHint,
				const KeyValues3* pDefaultValue);  // 941
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 941
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				const KeyValues3* pDefaultValue);  // 948
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long int>(); // 694
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 952
} /* size: 0, variables: 1, inline expansions: 22 (0 bytes) */

// <055760ED> kv3lib/keyvalues3.cpp:958
// variable: 1
// function calls: 22
void KeyValues3::GetMemberFloat(CKV3MemberName memberName, float defaultValue)
{
	const KeyValues3* pMember; // 960
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2528
	KeyValues3::GetTable(); // 2531
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 2531
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3338
	{
	}
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3345
	CKeyValues3Table::MemberData(
			int nIndex);  // 2535
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				uint& nextPropertyHint,
				KeyValues3* pDefaultValue);  // 943
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 943
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				uint& nNextPropertyHint,
				const KeyValues3* pDefaultValue);  // 941
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 941
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				const KeyValues3* pDefaultValue);  // 960
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 960
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	KV3Helper_StringToNumber<float>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<float>(); // 694
	{
	}
	KeyValues3::GetValueAsNumeric<float>(); // 199
	KeyValues3::GetValueFloat(); // 964
} /* size: 0, variables: 1, inline expansions: 22 (1155 bytes) */

// <05575B66> kv3lib/keyvalues3.cpp:970
// variable: 1
// function calls: 22
void KeyValues3::GetMemberDouble(CKV3MemberName memberName, double defaultValue)
{
	const KeyValues3* pMember; // 972
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2528
	KeyValues3::GetTable(); // 2531
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 2531
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3338
	{
	}
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3345
	CKeyValues3Table::MemberData(
			int nIndex);  // 2535
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				uint& nextPropertyHint,
				KeyValues3* pDefaultValue);  // 943
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 943
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				uint& nNextPropertyHint,
				const KeyValues3* pDefaultValue);  // 941
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 941
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				const KeyValues3* pDefaultValue);  // 972
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 972
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	KV3Helper_StringToNumber<double>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<double>(); // 694
	{
	}
	KeyValues3::GetValueAsNumeric<double>(); // 204
	KeyValues3::GetValueDouble(); // 976
} /* size: 0, variables: 1, inline expansions: 22 (0 bytes) */

// <055756E1> kv3lib/keyvalues3.cpp:982
// variable: 1
// function calls: 16
void KeyValues3::GetMemberAsString(CKV3MemberName memberName, char* pOutData, int nBufSize, const char* defaultValue)
{
	const KeyValues3* pMember; // 984
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2528
	KeyValues3::GetTable(); // 2531
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 2531
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3338
	{
	}
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3345
	CKeyValues3Table::MemberData(
			int nIndex);  // 2535
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				uint& nextPropertyHint,
				KeyValues3* pDefaultValue);  // 943
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 943
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				uint& nNextPropertyHint,
				const KeyValues3* pDefaultValue);  // 941
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 941
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				const KeyValues3* pDefaultValue);  // 984
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 984
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 987
} /* size: 0, variables: 1, inline expansions: 16 (681 bytes) */

// <05575276> kv3lib/keyvalues3.cpp:997
// variable: 1
// function calls: 16
void KeyValues3::GetMemberAsString(CKV3MemberName memberName, CUtlString* pOutData, const char* defaultValue)
{
	const KeyValues3* pMember; // 999
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2528
	KeyValues3::GetTable(); // 2531
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 2531
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3338
	{
	}
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3345
	CKeyValues3Table::MemberData(
			int nIndex);  // 2535
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				uint& nextPropertyHint,
				KeyValues3* pDefaultValue);  // 943
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 943
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				uint& nNextPropertyHint,
				const KeyValues3* pDefaultValue);  // 941
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 941
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				const KeyValues3* pDefaultValue);  // 999
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 999
	CUtlString::operator=(
			const char* src);  // 1002
} /* size: 0, variables: 1, inline expansions: 16 (639 bytes) */

// <05574DD9> kv3lib/keyvalues3.cpp:1012
// variable: 1
// function calls: 18
void KeyValues3::GetMemberString(CKV3MemberName memberName, const char* defaultValue)
{
	const KeyValues3* pMember; // 1014
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2528
	KeyValues3::GetTable(); // 2531
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 2531
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3338
	{
	}
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3345
	CKeyValues3Table::MemberData(
			int nIndex);  // 2535
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				uint& nextPropertyHint,
				KeyValues3* pDefaultValue);  // 943
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 943
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				uint& nNextPropertyHint,
				const KeyValues3* pDefaultValue);  // 941
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 941
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				const KeyValues3* pDefaultValue);  // 1014
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 1014
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1015
} /* size: 0, variables: 1, inline expansions: 18 (566 bytes) */

// <05582BEF> kv3lib/keyvalues3.cpp:1026
// function calls: 8
void KeyValues3::GetBinaryBlobBase()
{
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1028
	KeyValues3BinaryBlob_t::AsByteArray(); // 1074
	KeyValues3BinaryBlobExternal_t::AsByteArray(); // 1070
	KeyValues3::Internal_BinaryBlobBase(); // 1066
	KeyValues3::Internal_BinaryBlobBase(); // 1034
	{
	}
	KeyValues3::GetBinaryBlobBase(); // 1026
} /* size: 0, inline expansions: 8 (113 bytes) */

// <05574D98> kv3lib/keyvalues3.cpp:1026
// variables: 2
void KeyValues3::GetBinaryBlobBase()
{
	const char   __FUNCTION__; // 35856
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1030
	}
} /* size: 0, variables: 1 */

// <028EC792> kv3lib/keyvalues3.cpp:1026
// variables: 2
void KeyValues3::GetBinaryBlobBase()
{
	const char   __FUNCTION__; // 54527
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1030
	}
} /* size: 0, variables: 1 */

// <012519C4> kv3lib/keyvalues3.cpp:1026
// variables: 2
void KeyValues3::GetBinaryBlobBase()
{
	const char   __FUNCTION__; // 16111
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1030
	}
} /* size: 0, variables: 1 */

// <002CD189> kv3lib/keyvalues3.cpp:1026
// variables: 2
void KeyValues3::GetBinaryBlobBase()
{
	const char   __FUNCTION__; // 2278
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1030
	}
} /* size: 0, variables: 1 */

// <0063238B> kv3lib/keyvalues3.cpp:1026
// variables: 2
void KeyValues3::GetBinaryBlobBase()
{
	const char   __FUNCTION__; // 28264
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1030
	}
} /* size: 0, variables: 1 */

// <00A0A012> kv3lib/keyvalues3.cpp:1026
// variables: 2
void KeyValues3::GetBinaryBlobBase()
{
	const char   __FUNCTION__; // 34415
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1030
	}
} /* size: 0, variables: 1 */

// <00116B93> kv3lib/keyvalues3.cpp:1026
// variables: 2
void KeyValues3::GetBinaryBlobBase()
{
	const char   __FUNCTION__; // 26912
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1030
	}
} /* size: 0, variables: 1 */

// <05574A9C> kv3lib/keyvalues3.cpp:1039
// variables: 2
// function calls: 11
void KeyValues3::TransferOwnershipOfBinaryBlob(CUtlBinaryBlock& destBlock)
{
	const char   __FUNCTION__; // 36170
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1056
	}
	KeyValues3::Internal_Type(); // 1041
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 645
	CUtlMemory<unsigned char, int>::AssumeMemory(
			unsigned char* pMemory,
			int numElements);  // 158
	CUtlBinaryBlock::AssumeExternalMemory(
				void* pExternalMemory,
				uint nExternalMemorySize);  // 1052
	CUtlMemory<unsigned char, int>::IsReadOnly(); // 127
	CUtlBinaryBlock::IsReadOnly(); // 1056
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 1058
} /* size: 0, variables: 1, inline expansions: 11 (355 bytes) */

// <028EC496> kv3lib/keyvalues3.cpp:1039
// variables: 2
// function calls: 11
void KeyValues3::TransferOwnershipOfBinaryBlob(CUtlBinaryBlock& destBlock)
{
	const char   __FUNCTION__; // 54841
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1056
	}
	KeyValues3::Internal_Type(); // 1041
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 645
	CUtlMemory<unsigned char, int>::AssumeMemory(
			unsigned char* pMemory,
			int numElements);  // 158
	CUtlBinaryBlock::AssumeExternalMemory(
				void* pExternalMemory,
				uint nExternalMemorySize);  // 1052
	CUtlMemory<unsigned char, int>::IsReadOnly(); // 127
	CUtlBinaryBlock::IsReadOnly(); // 1056
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 1058
} /* size: 0, variables: 1, inline expansions: 11 (355 bytes) */

// <012516C8> kv3lib/keyvalues3.cpp:1039
// variables: 2
// function calls: 11
void KeyValues3::TransferOwnershipOfBinaryBlob(CUtlBinaryBlock& destBlock)
{
	const char   __FUNCTION__; // 16425
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1056
	}
	KeyValues3::Internal_Type(); // 1041
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 645
	CUtlMemory<unsigned char, int>::AssumeMemory(
			unsigned char* pMemory,
			int numElements);  // 158
	CUtlBinaryBlock::AssumeExternalMemory(
				void* pExternalMemory,
				uint nExternalMemorySize);  // 1052
	CUtlMemory<unsigned char, int>::IsReadOnly(); // 127
	CUtlBinaryBlock::IsReadOnly(); // 1056
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 1058
} /* size: 0, variables: 1, inline expansions: 11 (0 bytes) */

// <002CCE8D> kv3lib/keyvalues3.cpp:1039
// variables: 2
// function calls: 11
void KeyValues3::TransferOwnershipOfBinaryBlob(CUtlBinaryBlock& destBlock)
{
	const char   __FUNCTION__; // 2592
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1056
	}
	KeyValues3::Internal_Type(); // 1041
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 645
	CUtlMemory<unsigned char, int>::AssumeMemory(
			unsigned char* pMemory,
			int numElements);  // 158
	CUtlBinaryBlock::AssumeExternalMemory(
				void* pExternalMemory,
				uint nExternalMemorySize);  // 1052
	CUtlMemory<unsigned char, int>::IsReadOnly(); // 127
	CUtlBinaryBlock::IsReadOnly(); // 1056
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 1058
} /* size: 0, variables: 1, inline expansions: 11 (0 bytes) */

// <0063208F> kv3lib/keyvalues3.cpp:1039
// variables: 2
// function calls: 11
void KeyValues3::TransferOwnershipOfBinaryBlob(CUtlBinaryBlock& destBlock)
{
	const char   __FUNCTION__; // 28578
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1056
	}
	KeyValues3::Internal_Type(); // 1041
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 645
	CUtlMemory<unsigned char, int>::AssumeMemory(
			unsigned char* pMemory,
			int numElements);  // 158
	CUtlBinaryBlock::AssumeExternalMemory(
				void* pExternalMemory,
				uint nExternalMemorySize);  // 1052
	CUtlMemory<unsigned char, int>::IsReadOnly(); // 127
	CUtlBinaryBlock::IsReadOnly(); // 1056
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 1058
} /* size: 0, variables: 1, inline expansions: 11 (0 bytes) */

// <00A09D16> kv3lib/keyvalues3.cpp:1039
// variables: 2
// function calls: 11
void KeyValues3::TransferOwnershipOfBinaryBlob(CUtlBinaryBlock& destBlock)
{
	const char   __FUNCTION__; // 34729
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1056
	}
	KeyValues3::Internal_Type(); // 1041
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 645
	CUtlMemory<unsigned char, int>::AssumeMemory(
			unsigned char* pMemory,
			int numElements);  // 158
	CUtlBinaryBlock::AssumeExternalMemory(
				void* pExternalMemory,
				uint nExternalMemorySize);  // 1052
	CUtlMemory<unsigned char, int>::IsReadOnly(); // 127
	CUtlBinaryBlock::IsReadOnly(); // 1056
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 1058
} /* size: 0, variables: 1, inline expansions: 11 (0 bytes) */

// <00116897> kv3lib/keyvalues3.cpp:1039
// variables: 2
// function calls: 11
void KeyValues3::TransferOwnershipOfBinaryBlob(CUtlBinaryBlock& destBlock)
{
	const char   __FUNCTION__; // 27226
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1056
	}
	KeyValues3::Internal_Type(); // 1041
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 645
	CUtlMemory<unsigned char, int>::AssumeMemory(
			unsigned char* pMemory,
			int numElements);  // 158
	CUtlBinaryBlock::AssumeExternalMemory(
				void* pExternalMemory,
				uint nExternalMemorySize);  // 1052
	CUtlMemory<unsigned char, int>::IsReadOnly(); // 127
	CUtlBinaryBlock::IsReadOnly(); // 1056
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 1058
} /* size: 0, variables: 1, inline expansions: 11 (0 bytes) */

// <05582DC6> kv3lib/keyvalues3.cpp:1066
// function calls: 4
void KeyValues3::Internal_BinaryBlobBase()
{
	KeyValues3::Internal_Type(); // 1068
	KeyValues3BinaryBlob_t::AsByteArray(); // 1074
	KeyValues3BinaryBlobExternal_t::AsByteArray(); // 1070
	KeyValues3::Internal_BinaryBlobBase(); // 1066
} /* size: 0, inline expansions: 4 (0 bytes) */

// <05574A7F> kv3lib/keyvalues3.cpp:1066
void KeyValues3::Internal_BinaryBlobBase()
{
} /* size: 0 */

// <05574888> kv3lib/keyvalues3.cpp:1096
// variables: 2
// function calls: 7
void KeyValues3::GetBinaryBlobBaseForWrite()
{
	const char   __FUNCTION__; // 36067
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1100
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1098
	KeyValues3BinaryBlob_t::AsByteArray(); // 1074
	KeyValues3BinaryBlobExternal_t::AsByteArray(); // 1070
	KeyValues3::Internal_BinaryBlobBase(); // 1066
	KeyValues3::Internal_BinaryBlobBase(); // 1104
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <028EC282> kv3lib/keyvalues3.cpp:1096
// variables: 2
// function calls: 7
void KeyValues3::GetBinaryBlobBaseForWrite()
{
	const char   __FUNCTION__; // 54738
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1100
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1098
	KeyValues3BinaryBlob_t::AsByteArray(); // 1074
	KeyValues3BinaryBlobExternal_t::AsByteArray(); // 1070
	KeyValues3::Internal_BinaryBlobBase(); // 1066
	KeyValues3::Internal_BinaryBlobBase(); // 1104
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <012514B4> kv3lib/keyvalues3.cpp:1096
// variables: 2
// function calls: 7
void KeyValues3::GetBinaryBlobBaseForWrite()
{
	const char   __FUNCTION__; // 16322
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1100
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1098
	KeyValues3BinaryBlob_t::AsByteArray(); // 1074
	KeyValues3BinaryBlobExternal_t::AsByteArray(); // 1070
	KeyValues3::Internal_BinaryBlobBase(); // 1066
	KeyValues3::Internal_BinaryBlobBase(); // 1104
} /* size: 0, variables: 1, inline expansions: 7 (87 bytes) */

// <002CCC79> kv3lib/keyvalues3.cpp:1096
// variables: 2
// function calls: 7
void KeyValues3::GetBinaryBlobBaseForWrite()
{
	const char   __FUNCTION__; // 2489
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1100
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1098
	KeyValues3BinaryBlob_t::AsByteArray(); // 1074
	KeyValues3BinaryBlobExternal_t::AsByteArray(); // 1070
	KeyValues3::Internal_BinaryBlobBase(); // 1066
	KeyValues3::Internal_BinaryBlobBase(); // 1104
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <00631E7B> kv3lib/keyvalues3.cpp:1096
// variables: 2
// function calls: 7
void KeyValues3::GetBinaryBlobBaseForWrite()
{
	const char   __FUNCTION__; // 28475
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1100
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1098
	KeyValues3BinaryBlob_t::AsByteArray(); // 1074
	KeyValues3BinaryBlobExternal_t::AsByteArray(); // 1070
	KeyValues3::Internal_BinaryBlobBase(); // 1066
	KeyValues3::Internal_BinaryBlobBase(); // 1104
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <00A09B02> kv3lib/keyvalues3.cpp:1096
// variables: 2
// function calls: 7
void KeyValues3::GetBinaryBlobBaseForWrite()
{
	const char   __FUNCTION__; // 34626
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1100
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1098
	KeyValues3BinaryBlob_t::AsByteArray(); // 1074
	KeyValues3BinaryBlobExternal_t::AsByteArray(); // 1070
	KeyValues3::Internal_BinaryBlobBase(); // 1066
	KeyValues3::Internal_BinaryBlobBase(); // 1104
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <00116683> kv3lib/keyvalues3.cpp:1096
// variables: 2
// function calls: 7
void KeyValues3::GetBinaryBlobBaseForWrite()
{
	const char   __FUNCTION__; // 27123
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1100
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1098
	KeyValues3BinaryBlob_t::AsByteArray(); // 1074
	KeyValues3BinaryBlobExternal_t::AsByteArray(); // 1070
	KeyValues3::Internal_BinaryBlobBase(); // 1066
	KeyValues3::Internal_BinaryBlobBase(); // 1104
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <05582EA2> kv3lib/keyvalues3.cpp:1110
// function calls: 2
void KeyValues3::Internal_BinaryBlobSize()
{
	KeyValues3::Internal_Type(); // 1112
	KeyValues3::Internal_BinaryBlobSize(); // 1110
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0557486B> kv3lib/keyvalues3.cpp:1110
void KeyValues3::Internal_BinaryBlobSize()
{
} /* size: 0 */

// <05582F20> kv3lib/keyvalues3.cpp:1125
// function calls: 6
void KeyValues3::GetBinaryBlobSize()
{
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1127
	KeyValues3::Internal_BinaryBlobSize(); // 1110
	KeyValues3::Internal_BinaryBlobSize(); // 1133
	{
	}
	KeyValues3::GetBinaryBlobSize(); // 1125
} /* size: 0, inline expansions: 6 (89 bytes) */

// <0557482A> kv3lib/keyvalues3.cpp:1125
// variables: 2
void KeyValues3::GetBinaryBlobSize()
{
	const char   __FUNCTION__; // 35856
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1129
	}
} /* size: 0, variables: 1 */

// <028EC224> kv3lib/keyvalues3.cpp:1125
// variables: 2
void KeyValues3::GetBinaryBlobSize()
{
	const char   __FUNCTION__; // 54527
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1129
	}
} /* size: 0, variables: 1 */

// <01251456> kv3lib/keyvalues3.cpp:1125
// variables: 2
void KeyValues3::GetBinaryBlobSize()
{
	const char   __FUNCTION__; // 16111
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1129
	}
} /* size: 0, variables: 1 */

// <002CCC1B> kv3lib/keyvalues3.cpp:1125
// variables: 2
void KeyValues3::GetBinaryBlobSize()
{
	const char   __FUNCTION__; // 2278
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1129
	}
} /* size: 0, variables: 1 */

// <00631E1D> kv3lib/keyvalues3.cpp:1125
// variables: 2
void KeyValues3::GetBinaryBlobSize()
{
	const char   __FUNCTION__; // 28264
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1129
	}
} /* size: 0, variables: 1 */

// <00A09AA4> kv3lib/keyvalues3.cpp:1125
// variables: 2
void KeyValues3::GetBinaryBlobSize()
{
	const char   __FUNCTION__; // 34415
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1129
	}
} /* size: 0, variables: 1 */

// <00116625> kv3lib/keyvalues3.cpp:1125
// variables: 2
void KeyValues3::GetBinaryBlobSize()
{
	const char   __FUNCTION__; // 26912
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1129
	}
} /* size: 0, variables: 1 */

// <055745B9> kv3lib/keyvalues3.cpp:1139
// variables: 4
// function calls: 9
void KeyValues3::GetBinaryBlobByte(int nIndex)
{
	const char   __FUNCTION__; // 35856
	int nCount; // 1147
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1143
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1150
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1141
	KeyValues3::Internal_BinaryBlobSize(); // 1110
	KeyValues3::Internal_BinaryBlobSize(); // 1147
	KeyValues3BinaryBlob_t::AsByteArray(); // 1074
	KeyValues3BinaryBlobExternal_t::AsByteArray(); // 1070
	KeyValues3::Internal_BinaryBlobBase(); // 1066
	KeyValues3::Internal_BinaryBlobBase(); // 1154
} /* size: 0, variables: 2, inline expansions: 9 (0 bytes) */

// <028EBFB3> kv3lib/keyvalues3.cpp:1139
// variables: 4
// function calls: 9
void KeyValues3::GetBinaryBlobByte(int nIndex)
{
	const char   __FUNCTION__; // 54527
	int nCount; // 1147
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1143
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1150
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1141
	KeyValues3::Internal_BinaryBlobSize(); // 1110
	KeyValues3::Internal_BinaryBlobSize(); // 1147
	KeyValues3BinaryBlob_t::AsByteArray(); // 1074
	KeyValues3BinaryBlobExternal_t::AsByteArray(); // 1070
	KeyValues3::Internal_BinaryBlobBase(); // 1066
	KeyValues3::Internal_BinaryBlobBase(); // 1154
} /* size: 0, variables: 2, inline expansions: 9 (0 bytes) */

// <012511E5> kv3lib/keyvalues3.cpp:1139
// variables: 4
// function calls: 9
void KeyValues3::GetBinaryBlobByte(int nIndex)
{
	const char   __FUNCTION__; // 16111
	int nCount; // 1147
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1143
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1150
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1141
	KeyValues3::Internal_BinaryBlobSize(); // 1110
	KeyValues3::Internal_BinaryBlobSize(); // 1147
	KeyValues3BinaryBlob_t::AsByteArray(); // 1074
	KeyValues3BinaryBlobExternal_t::AsByteArray(); // 1070
	KeyValues3::Internal_BinaryBlobBase(); // 1066
	KeyValues3::Internal_BinaryBlobBase(); // 1154
} /* size: 0, variables: 2, inline expansions: 9 (0 bytes) */

// <002CC9AA> kv3lib/keyvalues3.cpp:1139
// variables: 4
// function calls: 9
void KeyValues3::GetBinaryBlobByte(int nIndex)
{
	const char   __FUNCTION__; // 2278
	int nCount; // 1147
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1143
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1150
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1141
	KeyValues3::Internal_BinaryBlobSize(); // 1110
	KeyValues3::Internal_BinaryBlobSize(); // 1147
	KeyValues3BinaryBlob_t::AsByteArray(); // 1074
	KeyValues3BinaryBlobExternal_t::AsByteArray(); // 1070
	KeyValues3::Internal_BinaryBlobBase(); // 1066
	KeyValues3::Internal_BinaryBlobBase(); // 1154
} /* size: 0, variables: 2, inline expansions: 9 (0 bytes) */

// <00631BAC> kv3lib/keyvalues3.cpp:1139
// variables: 4
// function calls: 9
void KeyValues3::GetBinaryBlobByte(int nIndex)
{
	const char   __FUNCTION__; // 28264
	int nCount; // 1147
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1143
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1150
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1141
	KeyValues3::Internal_BinaryBlobSize(); // 1110
	KeyValues3::Internal_BinaryBlobSize(); // 1147
	KeyValues3BinaryBlob_t::AsByteArray(); // 1074
	KeyValues3BinaryBlobExternal_t::AsByteArray(); // 1070
	KeyValues3::Internal_BinaryBlobBase(); // 1066
	KeyValues3::Internal_BinaryBlobBase(); // 1154
} /* size: 0, variables: 2, inline expansions: 9 (0 bytes) */

// <00A09833> kv3lib/keyvalues3.cpp:1139
// variables: 4
// function calls: 9
void KeyValues3::GetBinaryBlobByte(int nIndex)
{
	const char   __FUNCTION__; // 34415
	int nCount; // 1147
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1143
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1150
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1141
	KeyValues3::Internal_BinaryBlobSize(); // 1110
	KeyValues3::Internal_BinaryBlobSize(); // 1147
	KeyValues3BinaryBlob_t::AsByteArray(); // 1074
	KeyValues3BinaryBlobExternal_t::AsByteArray(); // 1070
	KeyValues3::Internal_BinaryBlobBase(); // 1066
	KeyValues3::Internal_BinaryBlobBase(); // 1154
} /* size: 0, variables: 2, inline expansions: 9 (0 bytes) */

// <001163B4> kv3lib/keyvalues3.cpp:1139
// variables: 4
// function calls: 9
void KeyValues3::GetBinaryBlobByte(int nIndex)
{
	const char   __FUNCTION__; // 26912
	int nCount; // 1147
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1143
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1150
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1141
	KeyValues3::Internal_BinaryBlobSize(); // 1110
	KeyValues3::Internal_BinaryBlobSize(); // 1147
	KeyValues3BinaryBlob_t::AsByteArray(); // 1074
	KeyValues3BinaryBlobExternal_t::AsByteArray(); // 1070
	KeyValues3::Internal_BinaryBlobBase(); // 1066
	KeyValues3::Internal_BinaryBlobBase(); // 1154
} /* size: 0, variables: 2, inline expansions: 9 (0 bytes) */

// <05574479> kv3lib/keyvalues3.cpp:1160
// function calls: 2
void KeyValues3::Internal_AimAtExternalBinaryBlob(byte* pData, int nSize, bool bOwnData)
{
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 1162
	AllocBlobExternal(KeyValues3* pParent,
				byte* pData,
				int nSize,
				bool bOwnsData);  // 1163
} /* size: 88, inline expansions: 2 (48 bytes) */

// <055872A7> kv3lib/keyvalues3.cpp:1169
// function calls: 2
void KeyValues3::SetToBinaryBlob(const byte* pData, int nSize)
{
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1171
} /* size: 75, inline expansions: 2 (70 bytes) */

// <05574442> kv3lib/keyvalues3.cpp:1169
void KeyValues3::SetToBinaryBlob(const byte* pData, int nSize)
{
} /* size: 0 */

// <05587386> kv3lib/keyvalues3.cpp:1178
// function calls: 2
void KeyValues3::SetToZeroedBinaryBlob(int nSize)
{
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1180
} /* size: 0, inline expansions: 2 (0 bytes) */

// <05574418> kv3lib/keyvalues3.cpp:1178
void KeyValues3::SetToZeroedBinaryBlob(int nSize)
{
} /* size: 0 */

// <0558A10E> kv3lib/keyvalues3.cpp:1187
// function calls: 3
void KeyValues3::SetToEmptyArray()
{
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1189
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1190
} /* size: 69, inline expansions: 3 (69 bytes) */

// <055743FB> kv3lib/keyvalues3.cpp:1187
void KeyValues3::SetToEmptyArray()
{
} /* size: 0 */

// <05583079> kv3lib/keyvalues3.cpp:1196
// function calls: 10
void KeyValues3::GetArrayElementCount()
{
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3906
	{
	}
	{
	}
	KeyValues3::Internal_AssertIsTable(
				const char* pFuncName,
				bool bAllowNull);  // 3893
	KeyValues3::Internal_AssertIsArray(
				const char* pFuncName,
				bool bAllowNull);  // 1198
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1200
	CUtlVectorBase<KeyValues3::Count(); // 164
	CKeyValues3Array::GetElementCount(); // 1208
} /* size: 174, inline expansions: 10 (149 bytes) */

// <055743D3> kv3lib/keyvalues3.cpp:1196
// variable: 1
void KeyValues3::GetArrayElementCount()
{
	const char   __FUNCTION__; // 35937
} /* size: 0, variables: 1 */

// <028EBDCD> kv3lib/keyvalues3.cpp:1196
// variable: 1
void KeyValues3::GetArrayElementCount()
{
	const char   __FUNCTION__; // 54608
} /* size: 0, variables: 1 */

// <01250FFF> kv3lib/keyvalues3.cpp:1196
// variable: 1
void KeyValues3::GetArrayElementCount()
{
	const char   __FUNCTION__; // 16192
} /* size: 0, variables: 1 */

// <002CC7C4> kv3lib/keyvalues3.cpp:1196
// variable: 1
void KeyValues3::GetArrayElementCount()
{
	const char   __FUNCTION__; // 2359
} /* size: 0, variables: 1 */

// <006319C6> kv3lib/keyvalues3.cpp:1196
// variable: 1
void KeyValues3::GetArrayElementCount()
{
	const char   __FUNCTION__; // 28345
} /* size: 0, variables: 1 */

// <00A0964D> kv3lib/keyvalues3.cpp:1196
// variable: 1
void KeyValues3::GetArrayElementCount()
{
	const char   __FUNCTION__; // 34496
} /* size: 0, variables: 1 */

// <001161CE> kv3lib/keyvalues3.cpp:1196
// variable: 1
void KeyValues3::GetArrayElementCount()
{
	const char   __FUNCTION__; // 26993
} /* size: 0, variables: 1 */

// <0558A22A> kv3lib/keyvalues3.cpp:1219
// function calls: 6
void KeyValues3::SetArrayElementCount(int nCount, KeyValues3Type_t nType)
{
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1222
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1224
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1226
} /* size: 111, inline expansions: 6 (106 bytes) */

// <0557439C> kv3lib/keyvalues3.cpp:1219
void KeyValues3::SetArrayElementCount(int nCount, KeyValues3Type_t nType)
{
} /* size: 0 */

// <05589500> kv3lib/keyvalues3.cpp:1232
void KeyValues3::Internal_SetArrayCount(int nCount, KeyValues3Type_t nType)
{
} /* size: 0 */

// <0555012C> kv3lib/keyvalues3.cpp:1243
// variables: 5
void Internal_ExpandCompactArray<double const, KeyValues3::double>(KeyValues3Type_t elementType, double KeyValues3::* pBackingStore, int nElementCount, const double* pElementValues, bool bFree)
{
	int nElement; // 1250
	{
		KeyValues3* pElement; // 1251
		CKV3ArrayIteratorView<false>& __for_range; // 39222
		iterator __for_begin; // 21131
		iterator __for_end; // 21131
	}
} /* size: 0, variables: 1 */

// <05550074> kv3lib/keyvalues3.cpp:1243
// variables: 5
void Internal_ExpandCompactArray<int const, long long KeyValues3::int>(KeyValues3Type_t elementType, long long int KeyValues3::* pBackingStore, int nElementCount, const int* pElementValues, bool bFree)
{
	int nElement; // 1250
	{
		KeyValues3* pElement; // 1251
		CKV3ArrayIteratorView<false>& __for_range; // 39222
		iterator __for_begin; // 21131
		iterator __for_end; // 21131
	}
} /* size: 0, variables: 1 */

// <028C7A6E> kv3lib/keyvalues3.cpp:1243
// variables: 5
void Internal_ExpandCompactArray<int const, long long KeyValues3::int>(KeyValues3Type_t elementType, long long int KeyValues3::* pBackingStore, int nElementCount, const int* pElementValues, bool bFree)
{
	int nElement; // 1250
	{
		KeyValues3* pElement; // 1251
		CKV3ArrayIteratorView<false>& __for_range; // 57893
		iterator __for_begin; // 39802
		iterator __for_end; // 39802
	}
} /* size: 0, variables: 1 */

// <0122CD58> kv3lib/keyvalues3.cpp:1243
// variables: 5
void Internal_ExpandCompactArray<double const, KeyValues3::double>(KeyValues3Type_t elementType, double KeyValues3::* pBackingStore, int nElementCount, const double* pElementValues, bool bFree)
{
	int nElement; // 1250
	{
		KeyValues3* pElement; // 1251
		CKV3ArrayIteratorView<false>& __for_range; // 19477
		iterator __for_begin; // 1386
		iterator __for_end; // 1386
	}
} /* size: 0, variables: 1 */

// <0122CCA0> kv3lib/keyvalues3.cpp:1243
// variables: 5
void Internal_ExpandCompactArray<int const, long long KeyValues3::int>(KeyValues3Type_t elementType, long long int KeyValues3::* pBackingStore, int nElementCount, const int* pElementValues, bool bFree)
{
	int nElement; // 1250
	{
		KeyValues3* pElement; // 1251
		CKV3ArrayIteratorView<false>& __for_range; // 19477
		iterator __for_begin; // 1386
		iterator __for_end; // 1386
	}
} /* size: 0, variables: 1 */

// <002A851D> kv3lib/keyvalues3.cpp:1243
// variables: 5
void Internal_ExpandCompactArray<double const, KeyValues3::double>(KeyValues3Type_t elementType, double KeyValues3::* pBackingStore, int nElementCount, const double* pElementValues, bool bFree)
{
	int nElement; // 1250
	{
		KeyValues3* pElement; // 1251
		CKV3ArrayIteratorView<false>& __for_range; // 5644
		iterator __for_begin; // 53089
		iterator __for_end; // 53089
	}
} /* size: 0, variables: 1 */

// <002A8465> kv3lib/keyvalues3.cpp:1243
// variables: 5
void Internal_ExpandCompactArray<int const, long long KeyValues3::int>(KeyValues3Type_t elementType, long long int KeyValues3::* pBackingStore, int nElementCount, const int* pElementValues, bool bFree)
{
	int nElement; // 1250
	{
		KeyValues3* pElement; // 1251
		CKV3ArrayIteratorView<false>& __for_range; // 5644
		iterator __for_begin; // 53089
		iterator __for_end; // 53089
	}
} /* size: 0, variables: 1 */

// <0060D71F> kv3lib/keyvalues3.cpp:1243
// variables: 5
void Internal_ExpandCompactArray<double const, KeyValues3::double>(KeyValues3Type_t elementType, double KeyValues3::* pBackingStore, int nElementCount, const double* pElementValues, bool bFree)
{
	int nElement; // 1250
	{
		KeyValues3* pElement; // 1251
		CKV3ArrayIteratorView<false>& __for_range; // 31630
		iterator __for_begin; // 13539
		iterator __for_end; // 13539
	}
} /* size: 0, variables: 1 */

// <0060D667> kv3lib/keyvalues3.cpp:1243
// variables: 5
void Internal_ExpandCompactArray<int const, long long KeyValues3::int>(KeyValues3Type_t elementType, long long int KeyValues3::* pBackingStore, int nElementCount, const int* pElementValues, bool bFree)
{
	int nElement; // 1250
	{
		KeyValues3* pElement; // 1251
		CKV3ArrayIteratorView<false>& __for_range; // 31630
		iterator __for_begin; // 13539
		iterator __for_end; // 13539
	}
} /* size: 0, variables: 1 */

// <000F1F27> kv3lib/keyvalues3.cpp:1243
// variables: 5
void Internal_ExpandCompactArray<double const, KeyValues3::double>(KeyValues3Type_t elementType, double KeyValues3::* pBackingStore, int nElementCount, const double* pElementValues, bool bFree)
{
	int nElement; // 1250
	{
		KeyValues3* pElement; // 1251
		CKV3ArrayIteratorView<false>& __for_range; // 30278
		iterator __for_begin; // 12187
		iterator __for_end; // 12187
	}
} /* size: 0, variables: 1 */

// <000F1E6F> kv3lib/keyvalues3.cpp:1243
// variables: 5
void Internal_ExpandCompactArray<int const, long long KeyValues3::int>(KeyValues3Type_t elementType, long long int KeyValues3::* pBackingStore, int nElementCount, const int* pElementValues, bool bFree)
{
	int nElement; // 1250
	{
		KeyValues3* pElement; // 1251
		CKV3ArrayIteratorView<false>& __for_range; // 30278
		iterator __for_begin; // 12187
		iterator __for_end; // 12187
	}
} /* size: 0, variables: 1 */

// <05573B4A> kv3lib/keyvalues3.cpp:1264
// variables: 10
// function calls: 25
void KeyValues3::Internal_ExpandCompactArray()
{
	const char   __FUNCTION__; // 36116
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1279
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1266
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 1246
	KeyValues3::Internal_ClearDataWithoutFreeing(); // 1245
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1248
	{
		KeyValues3* pElement; // 1251
		CKV3ArrayIteratorView<false>& __for_range; // 39190
		iterator __for_begin; // 39200
		iterator __for_end; // 39210
		KeyValues3::IterateArray(); // 1251
		iterator::operator!=(
				const iterator& rhs);  // 1251
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<false>::begin(); // 1251
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<false>::end(); // 1251
		{
		}
		iterator::operator*(); // 1251
	}
	KeyValues3::Internal_ExpandCompactArray<int const, long long int>(
								KeyValues3Type_t elementType,
								long long int KeyValues3::* pBackingStore,
								int nElementCount,
								const int* pElementValues,
								bool bFree);  // 1275
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 1246
	KeyValues3::Internal_ClearDataWithoutFreeing(); // 1245
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1248
	{
		KeyValues3* pElement; // 1251
		CKV3ArrayIteratorView<false>& __for_range; // 39374
		iterator __for_begin; // 39384
		iterator __for_end; // 39394
		KeyValues3::IterateArray(); // 1251
		iterator::operator!=(
				const iterator& rhs);  // 1251
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<false>::begin(); // 1251
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<false>::end(); // 1251
		{
		}
		iterator::operator*(); // 1251
	}
	KeyValues3::Internal_ExpandCompactArray<double const, double>(
								KeyValues3Type_t elementType,
								double KeyValues3::* pBackingStore,
								int nElementCount,
								const double* pElementValues,
								bool bFree);  // 1271
} /* size: 0, variables: 1, inline expansions: 11 (559 bytes) */

// <028EB544> kv3lib/keyvalues3.cpp:1264
// variables: 10
// function calls: 25
void KeyValues3::Internal_ExpandCompactArray()
{
	const char   __FUNCTION__; // 54787
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1279
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1266
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 1246
	KeyValues3::Internal_ClearDataWithoutFreeing(); // 1245
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1248
	{
		KeyValues3* pElement; // 1251
		CKV3ArrayIteratorView<false>& __for_range; // 57861
		iterator __for_begin; // 57871
		iterator __for_end; // 57881
		KeyValues3::IterateArray(); // 1251
		iterator::operator!=(
				const iterator& rhs);  // 1251
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<false>::begin(); // 1251
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<false>::end(); // 1251
		{
		}
		iterator::operator*(); // 1251
	}
	KeyValues3::Internal_ExpandCompactArray<int const, long long int>(
								KeyValues3Type_t elementType,
								long long int KeyValues3::* pBackingStore,
								int nElementCount,
								const int* pElementValues,
								bool bFree);  // 1275
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 1246
	KeyValues3::Internal_ClearDataWithoutFreeing(); // 1245
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1248
	{
		KeyValues3* pElement; // 1251
		CKV3ArrayIteratorView<false>& __for_range; // 58045
		iterator __for_begin; // 58055
		iterator __for_end; // 58065
		KeyValues3::IterateArray(); // 1251
		iterator::operator!=(
				const iterator& rhs);  // 1251
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<false>::begin(); // 1251
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<false>::end(); // 1251
		{
		}
		iterator::operator*(); // 1251
	}
	KeyValues3::Internal_ExpandCompactArray<double const, double>(
								KeyValues3Type_t elementType,
								double KeyValues3::* pBackingStore,
								int nElementCount,
								const double* pElementValues,
								bool bFree);  // 1271
} /* size: 0, variables: 1, inline expansions: 11 (559 bytes) */

// <01250776> kv3lib/keyvalues3.cpp:1264
// variables: 10
// function calls: 25
void KeyValues3::Internal_ExpandCompactArray()
{
	const char   __FUNCTION__; // 16371
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1279
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1266
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 1246
	KeyValues3::Internal_ClearDataWithoutFreeing(); // 1245
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1248
	{
		KeyValues3* pElement; // 1251
		CKV3ArrayIteratorView<false>& __for_range; // 19445
		iterator __for_begin; // 19455
		iterator __for_end; // 19465
		KeyValues3::IterateArray(); // 1251
		iterator::operator!=(
				const iterator& rhs);  // 1251
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<false>::begin(); // 1251
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<false>::end(); // 1251
		{
		}
		iterator::operator*(); // 1251
	}
	KeyValues3::Internal_ExpandCompactArray<int const, long long int>(
								KeyValues3Type_t elementType,
								long long int KeyValues3::* pBackingStore,
								int nElementCount,
								const int* pElementValues,
								bool bFree);  // 1275
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 1246
	KeyValues3::Internal_ClearDataWithoutFreeing(); // 1245
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1248
	{
		KeyValues3* pElement; // 1251
		CKV3ArrayIteratorView<false>& __for_range; // 19629
		iterator __for_begin; // 19639
		iterator __for_end; // 19649
		KeyValues3::IterateArray(); // 1251
		iterator::operator!=(
				const iterator& rhs);  // 1251
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<false>::begin(); // 1251
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<false>::end(); // 1251
		{
		}
		iterator::operator*(); // 1251
	}
	KeyValues3::Internal_ExpandCompactArray<double const, double>(
								KeyValues3Type_t elementType,
								double KeyValues3::* pBackingStore,
								int nElementCount,
								const double* pElementValues,
								bool bFree);  // 1271
} /* size: 0, variables: 1, inline expansions: 11 (559 bytes) */

// <002CBF3B> kv3lib/keyvalues3.cpp:1264
// variables: 10
// function calls: 25
void KeyValues3::Internal_ExpandCompactArray()
{
	const char   __FUNCTION__; // 2538
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1279
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1266
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 1246
	KeyValues3::Internal_ClearDataWithoutFreeing(); // 1245
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1248
	{
		KeyValues3* pElement; // 1251
		CKV3ArrayIteratorView<false>& __for_range; // 5612
		iterator __for_begin; // 5622
		iterator __for_end; // 5632
		KeyValues3::IterateArray(); // 1251
		iterator::operator!=(
				const iterator& rhs);  // 1251
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<false>::begin(); // 1251
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<false>::end(); // 1251
		{
		}
		iterator::operator*(); // 1251
	}
	KeyValues3::Internal_ExpandCompactArray<int const, long long int>(
								KeyValues3Type_t elementType,
								long long int KeyValues3::* pBackingStore,
								int nElementCount,
								const int* pElementValues,
								bool bFree);  // 1275
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 1246
	KeyValues3::Internal_ClearDataWithoutFreeing(); // 1245
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1248
	{
		KeyValues3* pElement; // 1251
		CKV3ArrayIteratorView<false>& __for_range; // 5796
		iterator __for_begin; // 5806
		iterator __for_end; // 5816
		KeyValues3::IterateArray(); // 1251
		iterator::operator!=(
				const iterator& rhs);  // 1251
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<false>::begin(); // 1251
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<false>::end(); // 1251
		{
		}
		iterator::operator*(); // 1251
	}
	KeyValues3::Internal_ExpandCompactArray<double const, double>(
								KeyValues3Type_t elementType,
								double KeyValues3::* pBackingStore,
								int nElementCount,
								const double* pElementValues,
								bool bFree);  // 1271
} /* size: 0, variables: 1, inline expansions: 11 (559 bytes) */

// <0063113D> kv3lib/keyvalues3.cpp:1264
// variables: 10
// function calls: 25
void KeyValues3::Internal_ExpandCompactArray()
{
	const char   __FUNCTION__; // 28524
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1279
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1266
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 1246
	KeyValues3::Internal_ClearDataWithoutFreeing(); // 1245
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1248
	{
		KeyValues3* pElement; // 1251
		CKV3ArrayIteratorView<false>& __for_range; // 31598
		iterator __for_begin; // 31608
		iterator __for_end; // 31618
		KeyValues3::IterateArray(); // 1251
		iterator::operator!=(
				const iterator& rhs);  // 1251
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<false>::begin(); // 1251
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<false>::end(); // 1251
		{
		}
		iterator::operator*(); // 1251
	}
	KeyValues3::Internal_ExpandCompactArray<int const, long long int>(
								KeyValues3Type_t elementType,
								long long int KeyValues3::* pBackingStore,
								int nElementCount,
								const int* pElementValues,
								bool bFree);  // 1275
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 1246
	KeyValues3::Internal_ClearDataWithoutFreeing(); // 1245
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1248
	{
		KeyValues3* pElement; // 1251
		CKV3ArrayIteratorView<false>& __for_range; // 31782
		iterator __for_begin; // 31792
		iterator __for_end; // 31802
		KeyValues3::IterateArray(); // 1251
		iterator::operator!=(
				const iterator& rhs);  // 1251
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<false>::begin(); // 1251
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<false>::end(); // 1251
		{
		}
		iterator::operator*(); // 1251
	}
	KeyValues3::Internal_ExpandCompactArray<double const, double>(
								KeyValues3Type_t elementType,
								double KeyValues3::* pBackingStore,
								int nElementCount,
								const double* pElementValues,
								bool bFree);  // 1271
} /* size: 0, variables: 1, inline expansions: 11 (559 bytes) */

// <00A08DC4> kv3lib/keyvalues3.cpp:1264
// variables: 10
// function calls: 25
void KeyValues3::Internal_ExpandCompactArray()
{
	const char   __FUNCTION__; // 34675
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1279
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1266
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 1246
	KeyValues3::Internal_ClearDataWithoutFreeing(); // 1245
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1248
	{
		KeyValues3* pElement; // 1251
		CKV3ArrayIteratorView<false>& __for_range; // 37749
		iterator __for_begin; // 37759
		iterator __for_end; // 37769
		KeyValues3::IterateArray(); // 1251
		iterator::operator!=(
				const iterator& rhs);  // 1251
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<false>::begin(); // 1251
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<false>::end(); // 1251
		{
		}
		iterator::operator*(); // 1251
	}
	KeyValues3::Internal_ExpandCompactArray<int const, long long int>(
								KeyValues3Type_t elementType,
								long long int KeyValues3::* pBackingStore,
								int nElementCount,
								const int* pElementValues,
								bool bFree);  // 1275
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 1246
	KeyValues3::Internal_ClearDataWithoutFreeing(); // 1245
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1248
	{
		KeyValues3* pElement; // 1251
		CKV3ArrayIteratorView<false>& __for_range; // 37933
		iterator __for_begin; // 37943
		iterator __for_end; // 37953
		KeyValues3::IterateArray(); // 1251
		iterator::operator!=(
				const iterator& rhs);  // 1251
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<false>::begin(); // 1251
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<false>::end(); // 1251
		{
		}
		iterator::operator*(); // 1251
	}
	KeyValues3::Internal_ExpandCompactArray<double const, double>(
								KeyValues3Type_t elementType,
								double KeyValues3::* pBackingStore,
								int nElementCount,
								const double* pElementValues,
								bool bFree);  // 1271
} /* size: 0, variables: 1, inline expansions: 11 (559 bytes) */

// <00115945> kv3lib/keyvalues3.cpp:1264
// variables: 10
// function calls: 25
void KeyValues3::Internal_ExpandCompactArray()
{
	const char   __FUNCTION__; // 27172
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1279
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1266
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 1246
	KeyValues3::Internal_ClearDataWithoutFreeing(); // 1245
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1248
	{
		KeyValues3* pElement; // 1251
		CKV3ArrayIteratorView<false>& __for_range; // 30246
		iterator __for_begin; // 30256
		iterator __for_end; // 30266
		KeyValues3::IterateArray(); // 1251
		iterator::operator!=(
				const iterator& rhs);  // 1251
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<false>::begin(); // 1251
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<false>::end(); // 1251
		{
		}
		iterator::operator*(); // 1251
	}
	KeyValues3::Internal_ExpandCompactArray<int const, long long int>(
								KeyValues3Type_t elementType,
								long long int KeyValues3::* pBackingStore,
								int nElementCount,
								const int* pElementValues,
								bool bFree);  // 1275
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 1246
	KeyValues3::Internal_ClearDataWithoutFreeing(); // 1245
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1248
	{
		KeyValues3* pElement; // 1251
		CKV3ArrayIteratorView<false>& __for_range; // 30430
		iterator __for_begin; // 30440
		iterator __for_end; // 30450
		KeyValues3::IterateArray(); // 1251
		iterator::operator!=(
				const iterator& rhs);  // 1251
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<false>::begin(); // 1251
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<false>::end(); // 1251
		{
		}
		iterator::operator*(); // 1251
	}
	KeyValues3::Internal_ExpandCompactArray<double const, double>(
								KeyValues3Type_t elementType,
								double KeyValues3::* pBackingStore,
								int nElementCount,
								const double* pElementValues,
								bool bFree);  // 1271
} /* size: 0, variables: 1, inline expansions: 11 (559 bytes) */

// <0558958A> kv3lib/keyvalues3.cpp:1287
// function calls: 8
void KeyValues3::Internal_GetArrayElementsArray()
{
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3906
	{
	}
	{
	}
	KeyValues3::Internal_AssertIsTable(
				const char* pFuncName,
				bool bAllowNull);  // 3893
	KeyValues3::Internal_AssertIsArray(
				const char* pFuncName,
				bool bAllowNull);  // 1290
	KeyValues3::Internal_Type(); // 1292
	CUtlMemory<KeyValues3::Base(); // 112
	CUtlVectorBase<KeyValues3::Base(); // 1294
} /* size: 116, inline expansions: 8 (116 bytes) */

// <05573B22> kv3lib/keyvalues3.cpp:1287
// variable: 1
void KeyValues3::Internal_GetArrayElementsArray()
{
	const char   __FUNCTION__; // 36197
} /* size: 0, variables: 1 */

// <028EB51C> kv3lib/keyvalues3.cpp:1287
// variable: 1
void KeyValues3::Internal_GetArrayElementsArray()
{
	const char   __FUNCTION__; // 54868
} /* size: 0, variables: 1 */

// <0125074E> kv3lib/keyvalues3.cpp:1287
// variable: 1
void KeyValues3::Internal_GetArrayElementsArray()
{
	const char   __FUNCTION__; // 16452
} /* size: 0, variables: 1 */

// <002CBF13> kv3lib/keyvalues3.cpp:1287
// variable: 1
void KeyValues3::Internal_GetArrayElementsArray()
{
	const char   __FUNCTION__; // 2619
} /* size: 0, variables: 1 */

// <00631115> kv3lib/keyvalues3.cpp:1287
// variable: 1
void KeyValues3::Internal_GetArrayElementsArray()
{
	const char   __FUNCTION__; // 28605
} /* size: 0, variables: 1 */

// <00A08D9C> kv3lib/keyvalues3.cpp:1287
// variable: 1
void KeyValues3::Internal_GetArrayElementsArray()
{
	const char   __FUNCTION__; // 34756
} /* size: 0, variables: 1 */

// <0011591D> kv3lib/keyvalues3.cpp:1287
// variable: 1
void KeyValues3::Internal_GetArrayElementsArray()
{
	const char   __FUNCTION__; // 27253
} /* size: 0, variables: 1 */

// <055897B8> kv3lib/keyvalues3.cpp:1305
// function calls: 14
void KeyValues3::GetArrayElement(int nIndex)
{
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3906
	{
	}
	{
	}
	KeyValues3::Internal_AssertIsTable(
				const char* pFuncName,
				bool bAllowNull);  // 3893
	KeyValues3::Internal_AssertIsArray(
				const char* pFuncName,
				bool bAllowNull);  // 1308
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1310
	CUtlVectorBase<KeyValues3::IsValidIndex(
			int i);  // 171
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 173
	{
	}
	CKeyValues3Array::GetElement(
			int nIndex);  // 167
	CKeyValues3Array::GetElement(
			int nIndex);  // 1312
	KeyValues3::GetArrayElement(
			int nIndex);  // 1305
} /* size: 0, inline expansions: 14 (298 bytes) */

// <05573AED> kv3lib/keyvalues3.cpp:1305
// variable: 1
void KeyValues3::GetArrayElement(int nIndex)
{
	const char   __FUNCTION__; // 35802
} /* size: 0, variables: 1 */

// <028EB4E7> kv3lib/keyvalues3.cpp:1305
// variable: 1
void KeyValues3::GetArrayElement(int nIndex)
{
	const char   __FUNCTION__; // 54473
} /* size: 0, variables: 1 */

// <01250719> kv3lib/keyvalues3.cpp:1305
// variable: 1
void KeyValues3::GetArrayElement(int nIndex)
{
	const char   __FUNCTION__; // 16057
} /* size: 0, variables: 1 */

// <002CBEDE> kv3lib/keyvalues3.cpp:1305
// variable: 1
void KeyValues3::GetArrayElement(int nIndex)
{
	const char   __FUNCTION__; // 2224
} /* size: 0, variables: 1 */

// <006310E0> kv3lib/keyvalues3.cpp:1305
// variable: 1
void KeyValues3::GetArrayElement(int nIndex)
{
	const char   __FUNCTION__; // 28210
} /* size: 0, variables: 1 */

// <00A08D67> kv3lib/keyvalues3.cpp:1305
// variable: 1
void KeyValues3::GetArrayElement(int nIndex)
{
	const char   __FUNCTION__; // 34361
} /* size: 0, variables: 1 */

// <001158E8> kv3lib/keyvalues3.cpp:1305
// variable: 1
void KeyValues3::GetArrayElement(int nIndex)
{
	const char   __FUNCTION__; // 26858
} /* size: 0, variables: 1 */

// <05589B91> kv3lib/keyvalues3.cpp:1323
void KeyValues3::GetArrayElement(int nIndex)
{
} /* size: 9 */

// <055832C7> kv3lib/keyvalues3.cpp:1331
// function calls: 7
void KeyValues3::GetValueBool()
{
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1333
	KV3Helper_StringToNumber<int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<int>(); // 694
	{
	}
	KeyValues3::GetValueAsNumeric<int>(); // 1335
	KeyValues3::GetValueBool(); // 1331
} /* size: 0, inline expansions: 7 (216 bytes) */

// <05573AA6> kv3lib/keyvalues3.cpp:1331
void KeyValues3::GetValueBool()
{
} /* size: 0 */

// <055737B8> kv3lib/keyvalues3.cpp:1343
// variables: 2
// function calls: 4
void KeyValues3::GetValueAsString(char* pOutData, int nBufSize)
{
	const char   __FUNCTION__; // 35829
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1379
	}
	KeyValues3::Internal_Type(); // 1345
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 1367
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 1380
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 1363
} /* size: 0, variables: 1, inline expansions: 4 (156 bytes) */

// <028EB1B2> kv3lib/keyvalues3.cpp:1343
// variables: 2
// function calls: 4
void KeyValues3::GetValueAsString(char* pOutData, int nBufSize)
{
	const char   __FUNCTION__; // 54500
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1379
	}
	KeyValues3::Internal_Type(); // 1345
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 1367
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 1380
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 1363
} /* size: 0, variables: 1, inline expansions: 4 (156 bytes) */

// <012503E4> kv3lib/keyvalues3.cpp:1343
// variables: 2
// function calls: 4
void KeyValues3::GetValueAsString(char* pOutData, int nBufSize)
{
	const char   __FUNCTION__; // 16084
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1379
	}
	KeyValues3::Internal_Type(); // 1345
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 1367
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 1380
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 1363
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <002CBBA9> kv3lib/keyvalues3.cpp:1343
// variables: 2
// function calls: 4
void KeyValues3::GetValueAsString(char* pOutData, int nBufSize)
{
	const char   __FUNCTION__; // 2251
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1379
	}
	KeyValues3::Internal_Type(); // 1345
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 1367
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 1380
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 1363
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <00630DAB> kv3lib/keyvalues3.cpp:1343
// variables: 2
// function calls: 4
void KeyValues3::GetValueAsString(char* pOutData, int nBufSize)
{
	const char   __FUNCTION__; // 28237
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1379
	}
	KeyValues3::Internal_Type(); // 1345
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 1367
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 1380
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 1363
} /* size: 0, variables: 1, inline expansions: 4 (156 bytes) */

// <00A08A32> kv3lib/keyvalues3.cpp:1343
// variables: 2
// function calls: 4
void KeyValues3::GetValueAsString(char* pOutData, int nBufSize)
{
	const char   __FUNCTION__; // 34388
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1379
	}
	KeyValues3::Internal_Type(); // 1345
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 1367
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 1380
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 1363
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <001155B3> kv3lib/keyvalues3.cpp:1343
// variables: 2
// function calls: 4
void KeyValues3::GetValueAsString(char* pOutData, int nBufSize)
{
	const char   __FUNCTION__; // 26885
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1379
	}
	KeyValues3::Internal_Type(); // 1345
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 1367
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 1380
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 1363
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <05573582> kv3lib/keyvalues3.cpp:1387
// variables: 2
// function calls: 3
void KeyValues3::GetValueAsString(CUtlString* pOutString)
{
	const char   __FUNCTION__; // 35829
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1419
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1389
} /* size: 0, variables: 1, inline expansions: 3 (24 bytes) */

// <028EAF7C> kv3lib/keyvalues3.cpp:1387
// variables: 2
// function calls: 3
void KeyValues3::GetValueAsString(CUtlString* pOutString)
{
	const char   __FUNCTION__; // 54500
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1419
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1389
} /* size: 0, variables: 1, inline expansions: 3 (24 bytes) */

// <012501AE> kv3lib/keyvalues3.cpp:1387
// variables: 2
// function calls: 3
void KeyValues3::GetValueAsString(CUtlString* pOutString)
{
	const char   __FUNCTION__; // 16084
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1419
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1389
} /* size: 0, variables: 1, inline expansions: 3 (24 bytes) */

// <002CB973> kv3lib/keyvalues3.cpp:1387
// variables: 2
// function calls: 3
void KeyValues3::GetValueAsString(CUtlString* pOutString)
{
	const char   __FUNCTION__; // 2251
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1419
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1389
} /* size: 0, variables: 1, inline expansions: 3 (24 bytes) */

// <00630B75> kv3lib/keyvalues3.cpp:1387
// variables: 2
// function calls: 3
void KeyValues3::GetValueAsString(CUtlString* pOutString)
{
	const char   __FUNCTION__; // 28237
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1419
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1389
} /* size: 0, variables: 1, inline expansions: 3 (24 bytes) */

// <00A087FC> kv3lib/keyvalues3.cpp:1387
// variables: 2
// function calls: 3
void KeyValues3::GetValueAsString(CUtlString* pOutString)
{
	const char   __FUNCTION__; // 34388
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1419
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1389
} /* size: 0, variables: 1, inline expansions: 3 (24 bytes) */

// <0011537D> kv3lib/keyvalues3.cpp:1387
// variables: 2
// function calls: 3
void KeyValues3::GetValueAsString(CUtlString* pOutString)
{
	const char   __FUNCTION__; // 26885
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1419
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1389
} /* size: 0, variables: 1, inline expansions: 3 (24 bytes) */

// <055730AE> kv3lib/keyvalues3.cpp:1430
// variables: 2
// function calls: 15
void KeyValues3::GetValueAsString(CBufferString* pOutString)
{
	const char   __FUNCTION__; // 35829
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1474
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1432
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1470
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1451
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1475
} /* size: 0, variables: 1, inline expansions: 15 (0 bytes) */

// <028EAAA8> kv3lib/keyvalues3.cpp:1430
// variables: 2
// function calls: 15
void KeyValues3::GetValueAsString(CBufferString* pOutString)
{
	const char   __FUNCTION__; // 54500
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1474
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1432
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1470
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1451
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1475
} /* size: 0, variables: 1, inline expansions: 15 (349 bytes) */

// <0124FCDA> kv3lib/keyvalues3.cpp:1430
// variables: 2
// function calls: 15
void KeyValues3::GetValueAsString(CBufferString* pOutString)
{
	const char   __FUNCTION__; // 16084
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1474
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1432
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1470
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1451
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1475
} /* size: 0, variables: 1, inline expansions: 15 (0 bytes) */

// <002CB49F> kv3lib/keyvalues3.cpp:1430
// variables: 2
// function calls: 15
void KeyValues3::GetValueAsString(CBufferString* pOutString)
{
	const char   __FUNCTION__; // 2251
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1474
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1432
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1470
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1451
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1475
} /* size: 0, variables: 1, inline expansions: 15 (0 bytes) */

// <006306A1> kv3lib/keyvalues3.cpp:1430
// variables: 2
// function calls: 15
void KeyValues3::GetValueAsString(CBufferString* pOutString)
{
	const char   __FUNCTION__; // 28237
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1474
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1432
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1470
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1451
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1475
} /* size: 0, variables: 1, inline expansions: 15 (0 bytes) */

// <00A08328> kv3lib/keyvalues3.cpp:1430
// variables: 2
// function calls: 15
void KeyValues3::GetValueAsString(CBufferString* pOutString)
{
	const char   __FUNCTION__; // 34388
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1474
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1432
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1470
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1451
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1475
} /* size: 0, variables: 1, inline expansions: 15 (0 bytes) */

// <00114EA9> kv3lib/keyvalues3.cpp:1430
// variables: 2
// function calls: 15
void KeyValues3::GetValueAsString(CBufferString* pOutString)
{
	const char   __FUNCTION__; // 26885
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1474
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1432
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1470
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1451
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1475
} /* size: 0, variables: 1, inline expansions: 15 (0 bytes) */

// <05572FA9> kv3lib/keyvalues3.cpp:1482
// variables: 3
// function calls: 2
void KeyValues3::GetValueString(const char* pDefaultValue)
{
	const char   __FUNCTION__; // 35775
	{
		bool bLooksLikeABug; // 1497
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1498
		}
		V_isempty(const char* pszString); // 1497
	}
	KeyValues3::Internal_Type(); // 1484
} /* size: 0, variables: 1, inline expansions: 1 (7 bytes) */

// <028EA9A3> kv3lib/keyvalues3.cpp:1482
// variables: 3
// function calls: 2
void KeyValues3::GetValueString(const char* pDefaultValue)
{
	const char   __FUNCTION__; // 54446
	{
		bool bLooksLikeABug; // 1497
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1498
		}
		V_isempty(const char* pszString); // 1497
	}
	KeyValues3::Internal_Type(); // 1484
} /* size: 0, variables: 1, inline expansions: 1 (7 bytes) */

// <0124FBD5> kv3lib/keyvalues3.cpp:1482
// variables: 3
// function calls: 2
void KeyValues3::GetValueString(const char* pDefaultValue)
{
	const char   __FUNCTION__; // 16030
	{
		bool bLooksLikeABug; // 1497
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1498
		}
		V_isempty(const char* pszString); // 1497
	}
	KeyValues3::Internal_Type(); // 1484
} /* size: 0, variables: 1, inline expansions: 1 (7 bytes) */

// <002CB39A> kv3lib/keyvalues3.cpp:1482
// variables: 3
// function calls: 2
void KeyValues3::GetValueString(const char* pDefaultValue)
{
	const char   __FUNCTION__; // 2197
	{
		bool bLooksLikeABug; // 1497
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1498
		}
		V_isempty(const char* pszString); // 1497
	}
	KeyValues3::Internal_Type(); // 1484
} /* size: 0, variables: 1, inline expansions: 1 (7 bytes) */

// <0063059C> kv3lib/keyvalues3.cpp:1482
// variables: 3
// function calls: 2
void KeyValues3::GetValueString(const char* pDefaultValue)
{
	const char   __FUNCTION__; // 28183
	{
		bool bLooksLikeABug; // 1497
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1498
		}
		V_isempty(const char* pszString); // 1497
	}
	KeyValues3::Internal_Type(); // 1484
} /* size: 0, variables: 1, inline expansions: 1 (7 bytes) */

// <00A08223> kv3lib/keyvalues3.cpp:1482
// variables: 3
// function calls: 2
void KeyValues3::GetValueString(const char* pDefaultValue)
{
	const char   __FUNCTION__; // 34334
	{
		bool bLooksLikeABug; // 1497
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1498
		}
		V_isempty(const char* pszString); // 1497
	}
	KeyValues3::Internal_Type(); // 1484
} /* size: 0, variables: 1, inline expansions: 1 (7 bytes) */

// <00114DA4> kv3lib/keyvalues3.cpp:1482
// variables: 3
// function calls: 2
void KeyValues3::GetValueString(const char* pDefaultValue)
{
	const char   __FUNCTION__; // 26831
	{
		bool bLooksLikeABug; // 1497
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1498
		}
		V_isempty(const char* pszString); // 1497
	}
	KeyValues3::Internal_Type(); // 1484
} /* size: 0, variables: 1, inline expansions: 1 (7 bytes) */

// <05572D6F> kv3lib/keyvalues3.cpp:1508
// function calls: 7
void KeyValues3::SetValueString(const char* value)
{
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1521
	V_strlen(const char* str); // 1515
	AllocString(KeyValues3* pParent,
			const char* pStr);  // 1522
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 1554
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 1556
	KeyValues3::Internal_SetToShortString(
					const char* value);  // 1517
} /* size: 159, inline expansions: 7 (169 bytes) */

// <05587536> kv3lib/keyvalues3.cpp:1528
// function call: 1
void KeyValues3::SetValueResourceString(const char* value)
{
	KeyValues3::SetFlag(
		KeyValues3Flag_t nFlag,
		bool bSet);  // 1531
} /* size: 33, inline expansions: 1 (6 bytes) */

// <05572D45> kv3lib/keyvalues3.cpp:1528
void KeyValues3::SetValueResourceString(const char* value)
{
} /* size: 0 */

// <05572B80> kv3lib/keyvalues3.cpp:1537
// function calls: 5
void KeyValues3::Internal_AimAtExternalString(const char* value)
{
	V_strlen(const char* str); // 1539
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 1545
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 1554
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 1556
	KeyValues3::Internal_SetToShortString(
					const char* value);  // 1541
} /* size: 158, inline expansions: 5 (109 bytes) */

// <05587458> kv3lib/keyvalues3.cpp:1552
// function calls: 2
void KeyValues3::Internal_SetToShortString(const char* value)
{
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 1554
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 1556
} /* size: 0, inline expansions: 2 (0 bytes) */

// <05572B56> kv3lib/keyvalues3.cpp:1552
void KeyValues3::Internal_SetToShortString(const char* value)
{
} /* size: 0 */

// <055727F4> kv3lib/keyvalues3.cpp:1562
// variable: 1
// function calls: 12
void KeyValues3::SetValueIntFromString(const char* pString)
{
	{
		uint64 nValue; // 1587
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 227
		KeyValues3::SetValueUint64(
				uint64 value);  // 1590
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 233
		KeyValues3::SetValueInt64(
				int64 value);  // 1594
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 1573
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 1566
} /* size: 230, inline expansions: 6 (122 bytes) */

// <0558347F> kv3lib/keyvalues3.cpp:1602
// function calls: 8
void KeyValues3::GetValueIntAsString(CUtlString* pOutString)
{
	KeyValues3::Internal_Type(); // 1604
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long int>(); // 694
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 1610
	KeyValues3::GetValueIntAsString(
				CUtlString* pOutString);  // 1602
} /* size: 0, inline expansions: 8 (0 bytes) */

// <055727CA> kv3lib/keyvalues3.cpp:1602
void KeyValues3::GetValueIntAsString(CUtlString* pOutString)
{
} /* size: 0 */

// <05571964> kv3lib/keyvalues3.cpp:1617
// variables: 5
// function calls: 52
void KeyValues3::ParseValueFromString(const char* pString)
{
	const char   __FUNCTION__; // 35937
	{
		CSplitString split; // 1631
		int nSplitLen; // 1632
		{
			int i; // 1634
			CUtlMemory<char::operator[](
					int i);  // 588
			CUtlVectorBase<char::operator[](
					int i);  // 1636
		}
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 30
		CSplitString::CSplitString(
				const char* pString,
				const char* pSeparator);  // 1631
		CUtlVectorBase<char::Count(); // 1632
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1222
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1224
		KeyValues3::Internal_SetArrayCount(
					int nCount,
					KeyValues3Type_t nType);  // 1226
		KeyValues3::SetArrayElementCount(
					int nCount,
					KeyValues3Type_t nType);  // 1633
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 40
		CSplitString::~CSplitString(); // 1638
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1676
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1624
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 1641
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 1663
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 1667
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 1671
	V_strlen(const char* str); // 1657
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1171
	KeyValues3::SetToBinaryBlob(
			const byte* pData,
			int nSize);  // 1657
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 1649
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 1645
} /* size: 0, variables: 1, inline expansions: 25 (790 bytes) */

// <028E935E> kv3lib/keyvalues3.cpp:1617
// variables: 5
// function calls: 52
void KeyValues3::ParseValueFromString(const char* pString)
{
	const char   __FUNCTION__; // 54608
	{
		CSplitString split; // 1631
		int nSplitLen; // 1632
		{
			int i; // 1634
			CUtlMemory<char::operator[](
					int i);  // 588
			CUtlVectorBase<char::operator[](
					int i);  // 1636
		}
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 30
		CSplitString::CSplitString(
				const char* pString,
				const char* pSeparator);  // 1631
		CUtlVectorBase<char::Count(); // 1632
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1222
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1224
		KeyValues3::Internal_SetArrayCount(
					int nCount,
					KeyValues3Type_t nType);  // 1226
		KeyValues3::SetArrayElementCount(
					int nCount,
					KeyValues3Type_t nType);  // 1633
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 40
		CSplitString::~CSplitString(); // 1638
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1676
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1624
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 1641
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 1663
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 1667
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 1671
	V_strlen(const char* str); // 1657
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1171
	KeyValues3::SetToBinaryBlob(
			const byte* pData,
			int nSize);  // 1657
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 1649
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 1645
} /* size: 0, variables: 1, inline expansions: 25 (790 bytes) */

// <0124E590> kv3lib/keyvalues3.cpp:1617
// variables: 5
// function calls: 52
void KeyValues3::ParseValueFromString(const char* pString)
{
	const char   __FUNCTION__; // 16192
	{
		CSplitString split; // 1631
		int nSplitLen; // 1632
		{
			int i; // 1634
			CUtlMemory<char::operator[](
					int i);  // 588
			CUtlVectorBase<char::operator[](
					int i);  // 1636
		}
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 30
		CSplitString::CSplitString(
				const char* pString,
				const char* pSeparator);  // 1631
		CUtlVectorBase<char::Count(); // 1632
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1222
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1224
		KeyValues3::Internal_SetArrayCount(
					int nCount,
					KeyValues3Type_t nType);  // 1226
		KeyValues3::SetArrayElementCount(
					int nCount,
					KeyValues3Type_t nType);  // 1633
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 40
		CSplitString::~CSplitString(); // 1638
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1676
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1624
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 1641
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 1663
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 1667
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 1671
	V_strlen(const char* str); // 1657
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1171
	KeyValues3::SetToBinaryBlob(
			const byte* pData,
			int nSize);  // 1657
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 1649
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 1645
} /* size: 0, variables: 1, inline expansions: 25 (790 bytes) */

// <002C9D55> kv3lib/keyvalues3.cpp:1617
// variables: 5
// function calls: 52
void KeyValues3::ParseValueFromString(const char* pString)
{
	const char   __FUNCTION__; // 2359
	{
		CSplitString split; // 1631
		int nSplitLen; // 1632
		{
			int i; // 1634
			CUtlMemory<char::operator[](
					int i);  // 588
			CUtlVectorBase<char::operator[](
					int i);  // 1636
		}
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 30
		CSplitString::CSplitString(
				const char* pString,
				const char* pSeparator);  // 1631
		CUtlVectorBase<char::Count(); // 1632
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1222
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1224
		KeyValues3::Internal_SetArrayCount(
					int nCount,
					KeyValues3Type_t nType);  // 1226
		KeyValues3::SetArrayElementCount(
					int nCount,
					KeyValues3Type_t nType);  // 1633
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 40
		CSplitString::~CSplitString(); // 1638
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1676
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1624
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 1641
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 1663
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 1667
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 1671
	V_strlen(const char* str); // 1657
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1171
	KeyValues3::SetToBinaryBlob(
			const byte* pData,
			int nSize);  // 1657
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 1649
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 1645
} /* size: 0, variables: 1, inline expansions: 25 (790 bytes) */

// <0062EF57> kv3lib/keyvalues3.cpp:1617
// variables: 5
// function calls: 52
void KeyValues3::ParseValueFromString(const char* pString)
{
	const char   __FUNCTION__; // 28345
	{
		CSplitString split; // 1631
		int nSplitLen; // 1632
		{
			int i; // 1634
			CUtlMemory<char::operator[](
					int i);  // 588
			CUtlVectorBase<char::operator[](
					int i);  // 1636
		}
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 30
		CSplitString::CSplitString(
				const char* pString,
				const char* pSeparator);  // 1631
		CUtlVectorBase<char::Count(); // 1632
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1222
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1224
		KeyValues3::Internal_SetArrayCount(
					int nCount,
					KeyValues3Type_t nType);  // 1226
		KeyValues3::SetArrayElementCount(
					int nCount,
					KeyValues3Type_t nType);  // 1633
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 40
		CSplitString::~CSplitString(); // 1638
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1676
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1624
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 1641
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 1663
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 1667
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 1671
	V_strlen(const char* str); // 1657
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1171
	KeyValues3::SetToBinaryBlob(
			const byte* pData,
			int nSize);  // 1657
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 1649
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 1645
} /* size: 0, variables: 1, inline expansions: 25 (790 bytes) */

// <00A06BDE> kv3lib/keyvalues3.cpp:1617
// variables: 5
// function calls: 52
void KeyValues3::ParseValueFromString(const char* pString)
{
	const char   __FUNCTION__; // 34496
	{
		CSplitString split; // 1631
		int nSplitLen; // 1632
		{
			int i; // 1634
			CUtlMemory<char::operator[](
					int i);  // 588
			CUtlVectorBase<char::operator[](
					int i);  // 1636
		}
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 30
		CSplitString::CSplitString(
				const char* pString,
				const char* pSeparator);  // 1631
		CUtlVectorBase<char::Count(); // 1632
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1222
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1224
		KeyValues3::Internal_SetArrayCount(
					int nCount,
					KeyValues3Type_t nType);  // 1226
		KeyValues3::SetArrayElementCount(
					int nCount,
					KeyValues3Type_t nType);  // 1633
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 40
		CSplitString::~CSplitString(); // 1638
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1676
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1624
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 1641
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 1663
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 1667
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 1671
	V_strlen(const char* str); // 1657
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1171
	KeyValues3::SetToBinaryBlob(
			const byte* pData,
			int nSize);  // 1657
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 1649
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 1645
} /* size: 0, variables: 1, inline expansions: 25 (790 bytes) */

// <0011375F> kv3lib/keyvalues3.cpp:1617
// variables: 5
// function calls: 52
void KeyValues3::ParseValueFromString(const char* pString)
{
	const char   __FUNCTION__; // 26993
	{
		CSplitString split; // 1631
		int nSplitLen; // 1632
		{
			int i; // 1634
			CUtlMemory<char::operator[](
					int i);  // 588
			CUtlVectorBase<char::operator[](
					int i);  // 1636
		}
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 30
		CSplitString::CSplitString(
				const char* pString,
				const char* pSeparator);  // 1631
		CUtlVectorBase<char::Count(); // 1632
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1222
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1224
		KeyValues3::Internal_SetArrayCount(
					int nCount,
					KeyValues3Type_t nType);  // 1226
		KeyValues3::SetArrayElementCount(
					int nCount,
					KeyValues3Type_t nType);  // 1633
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 40
		CSplitString::~CSplitString(); // 1638
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1676
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1624
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 1641
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 1663
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 1667
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 1671
	V_strlen(const char* str); // 1657
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1171
	KeyValues3::SetToBinaryBlob(
			const byte* pData,
			int nSize);  // 1657
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 1649
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 1645
} /* size: 0, variables: 1, inline expansions: 25 (790 bytes) */

// <0557179D> kv3lib/keyvalues3.cpp:1683
// variable: 1
// function calls: 4
void KeyValues3::EqualsValueFromString(const char* pString)
{
	KeyValues3 temp; // 1685
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 3722
	KeyValues3::Internal_ClearDataWithoutFreeing(); // 3724
	KeyValues3::KeyValues3(
			KeyValues3Type_t nType);  // 1685
	KeyValues3::~KeyValues3(); // 1690
} /* size: 147, variables: 1, inline expansions: 4 (44 bytes) */

// <05571279> kv3lib/keyvalues3.cpp:1695
// variable: 1
// function calls: 19
void KeyValues3::EnsureIsArray(int nCount, KeyValues3Type_t nType)
{
	{
		int i; // 1709
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1699
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 1701
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1200
	CUtlVectorBase<KeyValues3::Count(); // 164
	CKeyValues3Array::GetElementCount(); // 1208
	KeyValues3::GetArrayElementCount(); // 1704
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1222
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1224
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1226
	KeyValues3::SetArrayElementCount(
				int nCount,
				KeyValues3Type_t nType);  // 1706
} /* size: 0, inline expansions: 19 (0 bytes) */

// <05570D24> kv3lib/keyvalues3.cpp:1718
// function calls: 20
void KeyValues3::EnsureIsAnyArray(int nCount)
{
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1722
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1200
	CUtlVectorBase<KeyValues3::Count(); // 164
	CKeyValues3Array::GetElementCount(); // 1208
	KeyValues3::GetArrayElementCount(); // 1727
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1222
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1224
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1226
	KeyValues3::SetArrayElementCount(
				int nCount,
				KeyValues3Type_t nType);  // 1729
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1189
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1190
	KeyValues3::SetToEmptyArray(); // 1724
} /* size: 0, inline expansions: 20 (0 bytes) */

// <0556FB1E> kv3lib/keyvalues3.cpp:1736
// variables: 8
// function calls: 67
void KeyValues3::EnsureTypeIs(KeyValues3Type_t nType)
{
	const char   __FUNCTION__; // 35721
	{
		bool bValue; // 1750
		KV3Helper_StringToNumber<int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<int>(); // 694
		{
		}
		KeyValues3::GetValueAsNumeric<int>(); // 1335
		KeyValues3::GetValueBool(); // 1331
		KeyValues3::GetValueBool(); // 1750
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1751
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 215
		KeyValues3::SetValueBool(
				bool value);  // 1752
	}
	{
		int64 nValue; // 1757
		{
		}
		KV3Helper_StringToNumber<long long int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<long long int>(); // 694
		KeyValues3::GetValueAsNumeric<long long int>(); // 189
		KeyValues3::GetValueInt64(); // 1757
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1758
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 233
		KeyValues3::SetValueInt64(
				int64 value);  // 1759
	}
	{
		uint64 nValue; // 1764
		{
		}
		KV3Helper_StringToNumber<long long unsigned int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 694
		KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
		KeyValues3::GetValueUint64(); // 1764
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1765
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 227
		KeyValues3::SetValueUint64(
				uint64 value);  // 1766
	}
	{
		double flValue; // 1771
		{
		}
		KV3Helper_StringToNumber<double>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<double>(); // 694
		KeyValues3::GetValueAsNumeric<double>(); // 204
		KeyValues3::GetValueDouble(); // 1771
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1772
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 239
		KeyValues3::SetValueDouble(
				double value);  // 1773
	}
	{
		CUtlString temp; // 1778
		CUtlString::CUtlString(); // 1778
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1780
		CUtlString::Get(); // 1781
		CUtlString::~CUtlString(); // 1783
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1786
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1804
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1738
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 1798
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 903
	KeyValues3::ReserveTableCapacity(
				uint nTableSize);  // 895
	KeyValues3::SetToEmptyTable(); // 1799
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 1745
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 1792
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1189
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1190
	KeyValues3::SetToEmptyArray(); // 1793
} /* size: 0, variables: 1, inline expansions: 20 (0 bytes) */

// <028E7518> kv3lib/keyvalues3.cpp:1736
// variables: 8
// function calls: 67
void KeyValues3::EnsureTypeIs(KeyValues3Type_t nType)
{
	const char   __FUNCTION__; // 54392
	{
		bool bValue; // 1750
		KV3Helper_StringToNumber<int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<int>(); // 694
		{
		}
		KeyValues3::GetValueAsNumeric<int>(); // 1335
		KeyValues3::GetValueBool(); // 1331
		KeyValues3::GetValueBool(); // 1750
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1751
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 215
		KeyValues3::SetValueBool(
				bool value);  // 1752
	}
	{
		int64 nValue; // 1757
		{
		}
		KV3Helper_StringToNumber<long long int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<long long int>(); // 694
		KeyValues3::GetValueAsNumeric<long long int>(); // 189
		KeyValues3::GetValueInt64(); // 1757
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1758
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 233
		KeyValues3::SetValueInt64(
				int64 value);  // 1759
	}
	{
		uint64 nValue; // 1764
		{
		}
		KV3Helper_StringToNumber<long long unsigned int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 694
		KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
		KeyValues3::GetValueUint64(); // 1764
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1765
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 227
		KeyValues3::SetValueUint64(
				uint64 value);  // 1766
	}
	{
		double flValue; // 1771
		{
		}
		KV3Helper_StringToNumber<double>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<double>(); // 694
		KeyValues3::GetValueAsNumeric<double>(); // 204
		KeyValues3::GetValueDouble(); // 1771
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1772
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 239
		KeyValues3::SetValueDouble(
				double value);  // 1773
	}
	{
		CUtlString temp; // 1778
		CUtlString::CUtlString(); // 1778
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1780
		CUtlString::Get(); // 1781
		CUtlString::~CUtlString(); // 1783
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1786
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1804
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1738
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 1798
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 903
	KeyValues3::ReserveTableCapacity(
				uint nTableSize);  // 895
	KeyValues3::SetToEmptyTable(); // 1799
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 1745
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 1792
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1189
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1190
	KeyValues3::SetToEmptyArray(); // 1793
} /* size: 0, variables: 1, inline expansions: 20 (0 bytes) */

// <0124C74A> kv3lib/keyvalues3.cpp:1736
// variables: 8
// function calls: 67
void KeyValues3::EnsureTypeIs(KeyValues3Type_t nType)
{
	const char   __FUNCTION__; // 15976
	{
		bool bValue; // 1750
		KV3Helper_StringToNumber<int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<int>(); // 694
		{
		}
		KeyValues3::GetValueAsNumeric<int>(); // 1335
		KeyValues3::GetValueBool(); // 1331
		KeyValues3::GetValueBool(); // 1750
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1751
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 215
		KeyValues3::SetValueBool(
				bool value);  // 1752
	}
	{
		int64 nValue; // 1757
		{
		}
		KV3Helper_StringToNumber<long long int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<long long int>(); // 694
		KeyValues3::GetValueAsNumeric<long long int>(); // 189
		KeyValues3::GetValueInt64(); // 1757
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1758
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 233
		KeyValues3::SetValueInt64(
				int64 value);  // 1759
	}
	{
		uint64 nValue; // 1764
		{
		}
		KV3Helper_StringToNumber<long long unsigned int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 694
		KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
		KeyValues3::GetValueUint64(); // 1764
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1765
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 227
		KeyValues3::SetValueUint64(
				uint64 value);  // 1766
	}
	{
		double flValue; // 1771
		{
		}
		KV3Helper_StringToNumber<double>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<double>(); // 694
		KeyValues3::GetValueAsNumeric<double>(); // 204
		KeyValues3::GetValueDouble(); // 1771
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1772
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 239
		KeyValues3::SetValueDouble(
				double value);  // 1773
	}
	{
		CUtlString temp; // 1778
		CUtlString::CUtlString(); // 1778
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1780
		CUtlString::Get(); // 1781
		CUtlString::~CUtlString(); // 1783
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1786
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1804
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1738
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 1798
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 903
	KeyValues3::ReserveTableCapacity(
				uint nTableSize);  // 895
	KeyValues3::SetToEmptyTable(); // 1799
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 1745
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 1792
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1189
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1190
	KeyValues3::SetToEmptyArray(); // 1793
} /* size: 0, variables: 1, inline expansions: 20 (0 bytes) */

// <002C7F0F> kv3lib/keyvalues3.cpp:1736
// variables: 8
// function calls: 67
void KeyValues3::EnsureTypeIs(KeyValues3Type_t nType)
{
	const char   __FUNCTION__; // 2143
	{
		bool bValue; // 1750
		KV3Helper_StringToNumber<int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<int>(); // 694
		{
		}
		KeyValues3::GetValueAsNumeric<int>(); // 1335
		KeyValues3::GetValueBool(); // 1331
		KeyValues3::GetValueBool(); // 1750
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1751
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 215
		KeyValues3::SetValueBool(
				bool value);  // 1752
	}
	{
		int64 nValue; // 1757
		{
		}
		KV3Helper_StringToNumber<long long int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<long long int>(); // 694
		KeyValues3::GetValueAsNumeric<long long int>(); // 189
		KeyValues3::GetValueInt64(); // 1757
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1758
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 233
		KeyValues3::SetValueInt64(
				int64 value);  // 1759
	}
	{
		uint64 nValue; // 1764
		{
		}
		KV3Helper_StringToNumber<long long unsigned int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 694
		KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
		KeyValues3::GetValueUint64(); // 1764
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1765
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 227
		KeyValues3::SetValueUint64(
				uint64 value);  // 1766
	}
	{
		double flValue; // 1771
		{
		}
		KV3Helper_StringToNumber<double>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<double>(); // 694
		KeyValues3::GetValueAsNumeric<double>(); // 204
		KeyValues3::GetValueDouble(); // 1771
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1772
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 239
		KeyValues3::SetValueDouble(
				double value);  // 1773
	}
	{
		CUtlString temp; // 1778
		CUtlString::CUtlString(); // 1778
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1780
		CUtlString::Get(); // 1781
		CUtlString::~CUtlString(); // 1783
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1786
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1804
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1738
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 1798
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 903
	KeyValues3::ReserveTableCapacity(
				uint nTableSize);  // 895
	KeyValues3::SetToEmptyTable(); // 1799
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 1745
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 1792
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1189
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1190
	KeyValues3::SetToEmptyArray(); // 1793
} /* size: 0, variables: 1, inline expansions: 20 (0 bytes) */

// <0062D111> kv3lib/keyvalues3.cpp:1736
// variables: 8
// function calls: 67
void KeyValues3::EnsureTypeIs(KeyValues3Type_t nType)
{
	const char   __FUNCTION__; // 28129
	{
		bool bValue; // 1750
		KV3Helper_StringToNumber<int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<int>(); // 694
		{
		}
		KeyValues3::GetValueAsNumeric<int>(); // 1335
		KeyValues3::GetValueBool(); // 1331
		KeyValues3::GetValueBool(); // 1750
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1751
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 215
		KeyValues3::SetValueBool(
				bool value);  // 1752
	}
	{
		int64 nValue; // 1757
		{
		}
		KV3Helper_StringToNumber<long long int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<long long int>(); // 694
		KeyValues3::GetValueAsNumeric<long long int>(); // 189
		KeyValues3::GetValueInt64(); // 1757
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1758
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 233
		KeyValues3::SetValueInt64(
				int64 value);  // 1759
	}
	{
		uint64 nValue; // 1764
		{
		}
		KV3Helper_StringToNumber<long long unsigned int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 694
		KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
		KeyValues3::GetValueUint64(); // 1764
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1765
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 227
		KeyValues3::SetValueUint64(
				uint64 value);  // 1766
	}
	{
		double flValue; // 1771
		{
		}
		KV3Helper_StringToNumber<double>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<double>(); // 694
		KeyValues3::GetValueAsNumeric<double>(); // 204
		KeyValues3::GetValueDouble(); // 1771
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1772
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 239
		KeyValues3::SetValueDouble(
				double value);  // 1773
	}
	{
		CUtlString temp; // 1778
		CUtlString::CUtlString(); // 1778
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1780
		CUtlString::Get(); // 1781
		CUtlString::~CUtlString(); // 1783
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1786
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1804
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1738
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 1798
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 903
	KeyValues3::ReserveTableCapacity(
				uint nTableSize);  // 895
	KeyValues3::SetToEmptyTable(); // 1799
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 1745
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 1792
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1189
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1190
	KeyValues3::SetToEmptyArray(); // 1793
} /* size: 0, variables: 1, inline expansions: 20 (0 bytes) */

// <00A04D98> kv3lib/keyvalues3.cpp:1736
// variables: 8
// function calls: 67
void KeyValues3::EnsureTypeIs(KeyValues3Type_t nType)
{
	const char   __FUNCTION__; // 34280
	{
		bool bValue; // 1750
		KV3Helper_StringToNumber<int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<int>(); // 694
		{
		}
		KeyValues3::GetValueAsNumeric<int>(); // 1335
		KeyValues3::GetValueBool(); // 1331
		KeyValues3::GetValueBool(); // 1750
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1751
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 215
		KeyValues3::SetValueBool(
				bool value);  // 1752
	}
	{
		int64 nValue; // 1757
		{
		}
		KV3Helper_StringToNumber<long long int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<long long int>(); // 694
		KeyValues3::GetValueAsNumeric<long long int>(); // 189
		KeyValues3::GetValueInt64(); // 1757
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1758
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 233
		KeyValues3::SetValueInt64(
				int64 value);  // 1759
	}
	{
		uint64 nValue; // 1764
		{
		}
		KV3Helper_StringToNumber<long long unsigned int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 694
		KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
		KeyValues3::GetValueUint64(); // 1764
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1765
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 227
		KeyValues3::SetValueUint64(
				uint64 value);  // 1766
	}
	{
		double flValue; // 1771
		{
		}
		KV3Helper_StringToNumber<double>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<double>(); // 694
		KeyValues3::GetValueAsNumeric<double>(); // 204
		KeyValues3::GetValueDouble(); // 1771
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1772
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 239
		KeyValues3::SetValueDouble(
				double value);  // 1773
	}
	{
		CUtlString temp; // 1778
		CUtlString::CUtlString(); // 1778
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1780
		CUtlString::Get(); // 1781
		CUtlString::~CUtlString(); // 1783
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1786
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1804
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1738
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 1798
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 903
	KeyValues3::ReserveTableCapacity(
				uint nTableSize);  // 895
	KeyValues3::SetToEmptyTable(); // 1799
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 1745
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 1792
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1189
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1190
	KeyValues3::SetToEmptyArray(); // 1793
} /* size: 0, variables: 1, inline expansions: 20 (0 bytes) */

// <00111919> kv3lib/keyvalues3.cpp:1736
// variables: 8
// function calls: 67
void KeyValues3::EnsureTypeIs(KeyValues3Type_t nType)
{
	const char   __FUNCTION__; // 26777
	{
		bool bValue; // 1750
		KV3Helper_StringToNumber<int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<int>(); // 694
		{
		}
		KeyValues3::GetValueAsNumeric<int>(); // 1335
		KeyValues3::GetValueBool(); // 1331
		KeyValues3::GetValueBool(); // 1750
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1751
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 215
		KeyValues3::SetValueBool(
				bool value);  // 1752
	}
	{
		int64 nValue; // 1757
		{
		}
		KV3Helper_StringToNumber<long long int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<long long int>(); // 694
		KeyValues3::GetValueAsNumeric<long long int>(); // 189
		KeyValues3::GetValueInt64(); // 1757
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1758
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 233
		KeyValues3::SetValueInt64(
				int64 value);  // 1759
	}
	{
		uint64 nValue; // 1764
		{
		}
		KV3Helper_StringToNumber<long long unsigned int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 694
		KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
		KeyValues3::GetValueUint64(); // 1764
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1765
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 227
		KeyValues3::SetValueUint64(
				uint64 value);  // 1766
	}
	{
		double flValue; // 1771
		{
		}
		KV3Helper_StringToNumber<double>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<double>(); // 694
		KeyValues3::GetValueAsNumeric<double>(); // 204
		KeyValues3::GetValueDouble(); // 1771
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1772
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 239
		KeyValues3::SetValueDouble(
				double value);  // 1773
	}
	{
		CUtlString temp; // 1778
		CUtlString::CUtlString(); // 1778
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 1780
		CUtlString::Get(); // 1781
		CUtlString::~CUtlString(); // 1783
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1786
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1804
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1738
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 1798
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 903
	KeyValues3::ReserveTableCapacity(
				uint nTableSize);  // 895
	KeyValues3::SetToEmptyTable(); // 1799
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 1745
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 1792
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1189
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1190
	KeyValues3::SetToEmptyArray(); // 1793
} /* size: 0, variables: 1, inline expansions: 20 (0 bytes) */

// <0556F9A4> kv3lib/keyvalues3.cpp:1812
// variable: 1
// function calls: 4
void KeyValues3::SetMemberToNull(CKV3MemberName memberName)
{
	KeyValues3* pMember; // 1814
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 1814
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 1815
} /* size: 109, variables: 1, inline expansions: 4 (122 bytes) */

// <0556F8A5> kv3lib/keyvalues3.cpp:1822
// variable: 1
// function call: 1
void KeyValues3::SetMemberString(CKV3MemberName memberName, const char* value)
{
	KeyValues3* pMember; // 1824
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 1824
} /* size: 98, variables: 1, inline expansions: 1 (13 bytes) */

// <0556F719> kv3lib/keyvalues3.cpp:1832
// variable: 1
// function calls: 3
void KeyValues3::SetMemberResourceString(CKV3MemberName memberName, const char* value)
{
	KeyValues3* pMember; // 1834
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 1834
	KeyValues3::SetFlag(
		KeyValues3Flag_t nFlag,
		bool bSet);  // 1531
	KeyValues3::SetValueResourceString(
				const char* value);  // 1835
} /* size: 104, variables: 1, inline expansions: 3 (48 bytes) */

// <0556F57C> kv3lib/keyvalues3.cpp:1842
// variable: 1
// function calls: 4
void KeyValues3::SetMemberInt(CKV3MemberName memberName, int value)
{
	KeyValues3* pMember; // 1844
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 1844
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 1845
} /* size: 116, variables: 1, inline expansions: 4 (129 bytes) */

// <0556F3C5> kv3lib/keyvalues3.cpp:1852
// variable: 1
// function calls: 4
void KeyValues3::SetMemberBool(CKV3MemberName memberName, bool value)
{
	KeyValues3* pMember; // 1854
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 1854
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 1855
} /* size: 114, variables: 1, inline expansions: 4 (115 bytes) */

// <0556F228> kv3lib/keyvalues3.cpp:1862
// variable: 1
// function calls: 4
void KeyValues3::SetMemberFloat(CKV3MemberName memberName, float value)
{
	KeyValues3* pMember; // 1864
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 1864
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 221
	KeyValues3::SetValueFloat(
			float value);  // 1865
} /* size: 130, variables: 1, inline expansions: 4 (142 bytes) */

// <0556F071> kv3lib/keyvalues3.cpp:1872
// variable: 1
// function calls: 4
void KeyValues3::SetMemberInt64(CKV3MemberName memberName, int64 value)
{
	KeyValues3* pMember; // 1874
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 1874
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 1875
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <0556EEBA> kv3lib/keyvalues3.cpp:1882
// variable: 1
// function calls: 4
void KeyValues3::SetMemberUint64(CKV3MemberName memberName, uint64 value)
{
	KeyValues3* pMember; // 1884
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 1884
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 1885
} /* size: 116, variables: 1, inline expansions: 4 (116 bytes) */

// <0556ED1D> kv3lib/keyvalues3.cpp:1892
// variable: 1
// function calls: 4
void KeyValues3::SetMemberDouble(CKV3MemberName memberName, double value)
{
	KeyValues3* pMember; // 1894
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 1894
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 1895
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <0556EB48> kv3lib/keyvalues3.cpp:1902
// variable: 1
// function calls: 5
void KeyValues3::SetMemberToEmptyTable(CKV3MemberName memberName)
{
	KeyValues3* pMember; // 1904
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 1904
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 903
	KeyValues3::ReserveTableCapacity(
				uint nTableSize);  // 895
	KeyValues3::SetToEmptyTable(); // 1905
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <0556EA4F> kv3lib/keyvalues3.cpp:1912
// variable: 1
// function call: 1
void KeyValues3::SetMemberToCopyOfValue(CKV3MemberName memberName, KeyValues3* pValue)
{
	KeyValues3* pMember; // 1914
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 1914
} /* size: 89, variables: 1, inline expansions: 1 (13 bytes) */

// <0556E115> kv3lib/keyvalues3.cpp:1921
// variables: 7
// function calls: 36
void KeyValues3::FindOrCreateMember(CKV3MemberName memberName, bool* pOutCreated)
{
	const char   __FUNCTION__; // 35883
	int nMemberIndex; // 1934
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1924
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1931
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1932
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1936
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1937
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1926
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1928
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 1932
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 1934
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 3194
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 3209
	CKeyValues3Table::FindOrCreateMember_Internal(
					KeyValues3* pParent,
					CKV3MemberName memberName,
					bool bUseExternalStorageForName,
					bool* pOutCreated);  // 3191
	CKeyValues3Table::FindOrCreateMember_Internal(
					KeyValues3* pParent,
					CKV3MemberName memberName,
					bool bUseExternalStorageForName,
					bool* pOutCreated);  // 1934
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1936
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 1937
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 1939
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3338
	{
	}
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3345
	CKeyValues3Table::MemberData(
			int nIndex);  // 1939
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1931
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 1934
} /* size: 0, variables: 2, inline expansions: 36 (544 bytes) */

// <028E5B0F> kv3lib/keyvalues3.cpp:1921
// variables: 7
// function calls: 36
void KeyValues3::FindOrCreateMember(CKV3MemberName memberName, bool* pOutCreated)
{
	const char   __FUNCTION__; // 54554
	int nMemberIndex; // 1934
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1924
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1931
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1932
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1936
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1937
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1926
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1928
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 1932
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 1934
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 3194
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 3209
	CKeyValues3Table::FindOrCreateMember_Internal(
					KeyValues3* pParent,
					CKV3MemberName memberName,
					bool bUseExternalStorageForName,
					bool* pOutCreated);  // 3191
	CKeyValues3Table::FindOrCreateMember_Internal(
					KeyValues3* pParent,
					CKV3MemberName memberName,
					bool bUseExternalStorageForName,
					bool* pOutCreated);  // 1934
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1936
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 1937
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 1939
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3338
	{
	}
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3345
	CKeyValues3Table::MemberData(
			int nIndex);  // 1939
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1931
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 1934
} /* size: 0, variables: 2, inline expansions: 36 (544 bytes) */

// <0124AD41> kv3lib/keyvalues3.cpp:1921
// variables: 7
// function calls: 36
void KeyValues3::FindOrCreateMember(CKV3MemberName memberName, bool* pOutCreated)
{
	const char   __FUNCTION__; // 16138
	int nMemberIndex; // 1934
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1924
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1931
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1932
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1936
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1937
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1926
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1928
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 1932
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 1934
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 3194
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 3209
	CKeyValues3Table::FindOrCreateMember_Internal(
					KeyValues3* pParent,
					CKV3MemberName memberName,
					bool bUseExternalStorageForName,
					bool* pOutCreated);  // 3191
	CKeyValues3Table::FindOrCreateMember_Internal(
					KeyValues3* pParent,
					CKV3MemberName memberName,
					bool bUseExternalStorageForName,
					bool* pOutCreated);  // 1934
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1936
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 1937
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 1939
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3338
	{
	}
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3345
	CKeyValues3Table::MemberData(
			int nIndex);  // 1939
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1931
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 1934
} /* size: 0, variables: 2, inline expansions: 36 (544 bytes) */

// <002C6506> kv3lib/keyvalues3.cpp:1921
// variables: 7
// function calls: 36
void KeyValues3::FindOrCreateMember(CKV3MemberName memberName, bool* pOutCreated)
{
	const char   __FUNCTION__; // 2305
	int nMemberIndex; // 1934
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1924
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1931
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1932
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1936
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1937
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1926
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1928
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 1932
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 1934
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 3194
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 3209
	CKeyValues3Table::FindOrCreateMember_Internal(
					KeyValues3* pParent,
					CKV3MemberName memberName,
					bool bUseExternalStorageForName,
					bool* pOutCreated);  // 3191
	CKeyValues3Table::FindOrCreateMember_Internal(
					KeyValues3* pParent,
					CKV3MemberName memberName,
					bool bUseExternalStorageForName,
					bool* pOutCreated);  // 1934
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1936
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 1937
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 1939
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3338
	{
	}
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3345
	CKeyValues3Table::MemberData(
			int nIndex);  // 1939
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1931
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 1934
} /* size: 0, variables: 2, inline expansions: 36 (544 bytes) */

// <0062B708> kv3lib/keyvalues3.cpp:1921
// variables: 7
// function calls: 36
void KeyValues3::FindOrCreateMember(CKV3MemberName memberName, bool* pOutCreated)
{
	const char   __FUNCTION__; // 28291
	int nMemberIndex; // 1934
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1924
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1931
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1932
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1936
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1937
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1926
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1928
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 1932
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 1934
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 3194
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 3209
	CKeyValues3Table::FindOrCreateMember_Internal(
					KeyValues3* pParent,
					CKV3MemberName memberName,
					bool bUseExternalStorageForName,
					bool* pOutCreated);  // 3191
	CKeyValues3Table::FindOrCreateMember_Internal(
					KeyValues3* pParent,
					CKV3MemberName memberName,
					bool bUseExternalStorageForName,
					bool* pOutCreated);  // 1934
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1936
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 1937
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 1939
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3338
	{
	}
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3345
	CKeyValues3Table::MemberData(
			int nIndex);  // 1939
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1931
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 1934
} /* size: 0, variables: 2, inline expansions: 36 (544 bytes) */

// <00A0338F> kv3lib/keyvalues3.cpp:1921
// variables: 7
// function calls: 36
void KeyValues3::FindOrCreateMember(CKV3MemberName memberName, bool* pOutCreated)
{
	const char   __FUNCTION__; // 34442
	int nMemberIndex; // 1934
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1924
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1931
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1932
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1936
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1937
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1926
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1928
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 1932
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 1934
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 3194
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 3209
	CKeyValues3Table::FindOrCreateMember_Internal(
					KeyValues3* pParent,
					CKV3MemberName memberName,
					bool bUseExternalStorageForName,
					bool* pOutCreated);  // 3191
	CKeyValues3Table::FindOrCreateMember_Internal(
					KeyValues3* pParent,
					CKV3MemberName memberName,
					bool bUseExternalStorageForName,
					bool* pOutCreated);  // 1934
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1936
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 1937
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 1939
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3338
	{
	}
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3345
	CKeyValues3Table::MemberData(
			int nIndex);  // 1939
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1931
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 1934
} /* size: 0, variables: 2, inline expansions: 36 (544 bytes) */

// <0010FF10> kv3lib/keyvalues3.cpp:1921
// variables: 7
// function calls: 36
void KeyValues3::FindOrCreateMember(CKV3MemberName memberName, bool* pOutCreated)
{
	const char   __FUNCTION__; // 26939
	int nMemberIndex; // 1934
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1924
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1931
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1932
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1936
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1937
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1926
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1928
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 1932
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 1934
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 3194
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 3209
	CKeyValues3Table::FindOrCreateMember_Internal(
					KeyValues3* pParent,
					CKV3MemberName memberName,
					bool bUseExternalStorageForName,
					bool* pOutCreated);  // 3191
	CKeyValues3Table::FindOrCreateMember_Internal(
					KeyValues3* pParent,
					CKV3MemberName memberName,
					bool bUseExternalStorageForName,
					bool* pOutCreated);  // 1934
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1936
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 1937
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 1939
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3338
	{
	}
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3345
	CKeyValues3Table::MemberData(
			int nIndex);  // 1939
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1931
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 1934
} /* size: 0, variables: 2, inline expansions: 36 (544 bytes) */

// <0558A402> kv3lib/keyvalues3.cpp:1945
// variables: 6
// function calls: 19
void KeyValues3::Internal_SetValueDoubleArray(int nFloats, const double* pValues, KeyValues3InternalOwnershipMode_t ownership)
{
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 1949
	{
		double* pCopiedValues; // 1967
		{
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 1968
	}
	{
		int nElement; // 1977
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1222
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1224
		KeyValues3::Internal_SetArrayCount(
					int nCount,
					KeyValues3Type_t nType);  // 1226
		KeyValues3::SetArrayElementCount(
					int nCount,
					KeyValues3Type_t nType);  // 1976
		{
			KeyValues3* pElement; // 1978
			CKV3ArrayIteratorView<false>& __for_range; // 30970
			iterator __for_begin; // 30980
			iterator __for_end; // 30990
			KeyValues3::IterateArray(); // 1978
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<false>::begin(); // 1978
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<false>::end(); // 1978
			iterator::operator!=(
					const iterator& rhs);  // 1978
			{
			}
			iterator::operator*(); // 1978
			KeyValues3::Internal_PrepareForInternalType(
							KeyValues3InternalType_t newType);  // 950
			KeyValues3::Internal_PrepareForType(
						KeyValues3Type_t newType);  // 239
			KeyValues3::SetValueDouble(
					double value);  // 1980
		}
	}
} /* size: 0, inline expansions: 1 (39 bytes) */

// <0556E011> kv3lib/keyvalues3.cpp:1945
// variables: 8
void KeyValues3::Internal_SetValueDoubleArray(int nFloats, const double* pValues, KeyValues3InternalOwnershipMode_t ownership)
{
	const char   __FUNCTION__; // 36143
	{
		double* pCopiedValues; // 1967
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1965
		}
	}
	{
		int nElement; // 1977
		{
			KeyValues3* pElement; // 1978
			CKV3ArrayIteratorView<false>& __for_range; // 39222
			iterator __for_begin; // 21131
			iterator __for_end; // 21131
		}
	}
} /* size: 0, variables: 1 */

// <02901DFC> kv3lib/keyvalues3.cpp:1945
// variables: 6
// function calls: 19
void KeyValues3::Internal_SetValueDoubleArray(int nFloats, const double* pValues, KeyValues3InternalOwnershipMode_t ownership)
{
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 1949
	{
		double* pCopiedValues; // 1967
		{
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 1968
	}
	{
		int nElement; // 1977
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1222
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1224
		KeyValues3::Internal_SetArrayCount(
					int nCount,
					KeyValues3Type_t nType);  // 1226
		KeyValues3::SetArrayElementCount(
					int nCount,
					KeyValues3Type_t nType);  // 1976
		{
			KeyValues3* pElement; // 1978
			CKV3ArrayIteratorView<false>& __for_range; // 49641
			iterator __for_begin; // 49651
			iterator __for_end; // 49661
			KeyValues3::IterateArray(); // 1978
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<false>::begin(); // 1978
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<false>::end(); // 1978
			iterator::operator!=(
					const iterator& rhs);  // 1978
			{
			}
			iterator::operator*(); // 1978
			KeyValues3::Internal_PrepareForInternalType(
							KeyValues3InternalType_t newType);  // 950
			KeyValues3::Internal_PrepareForType(
						KeyValues3Type_t newType);  // 239
			KeyValues3::SetValueDouble(
					double value);  // 1980
		}
	}
} /* size: 0, inline expansions: 1 (39 bytes) */

// <028E5A0B> kv3lib/keyvalues3.cpp:1945
// variables: 8
void KeyValues3::Internal_SetValueDoubleArray(int nFloats, const double* pValues, KeyValues3InternalOwnershipMode_t ownership)
{
	const char   __FUNCTION__; // 54814
	{
		double* pCopiedValues; // 1967
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1965
		}
	}
	{
		int nElement; // 1977
		{
			KeyValues3* pElement; // 1978
			CKV3ArrayIteratorView<false>& __for_range; // 57893
			iterator __for_begin; // 39802
			iterator __for_end; // 39802
		}
	}
} /* size: 0, variables: 1 */

// <0126702E> kv3lib/keyvalues3.cpp:1945
// variables: 6
// function calls: 19
void KeyValues3::Internal_SetValueDoubleArray(int nFloats, const double* pValues, KeyValues3InternalOwnershipMode_t ownership)
{
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 1949
	{
		double* pCopiedValues; // 1967
		{
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 1968
	}
	{
		int nElement; // 1977
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1222
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1224
		KeyValues3::Internal_SetArrayCount(
					int nCount,
					KeyValues3Type_t nType);  // 1226
		KeyValues3::SetArrayElementCount(
					int nCount,
					KeyValues3Type_t nType);  // 1976
		{
			KeyValues3* pElement; // 1978
			CKV3ArrayIteratorView<false>& __for_range; // 11225
			iterator __for_begin; // 11235
			iterator __for_end; // 11245
			KeyValues3::IterateArray(); // 1978
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<false>::begin(); // 1978
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<false>::end(); // 1978
			iterator::operator!=(
					const iterator& rhs);  // 1978
			{
			}
			iterator::operator*(); // 1978
			KeyValues3::Internal_PrepareForInternalType(
							KeyValues3InternalType_t newType);  // 950
			KeyValues3::Internal_PrepareForType(
						KeyValues3Type_t newType);  // 239
			KeyValues3::SetValueDouble(
					double value);  // 1980
		}
	}
} /* size: 0, inline expansions: 1 (39 bytes) */

// <0124AC3D> kv3lib/keyvalues3.cpp:1945
// variables: 8
void KeyValues3::Internal_SetValueDoubleArray(int nFloats, const double* pValues, KeyValues3InternalOwnershipMode_t ownership)
{
	const char   __FUNCTION__; // 16398
	{
		double* pCopiedValues; // 1967
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1965
		}
	}
	{
		int nElement; // 1977
		{
			KeyValues3* pElement; // 1978
			CKV3ArrayIteratorView<false>& __for_range; // 19477
			iterator __for_begin; // 1386
			iterator __for_end; // 1386
		}
	}
} /* size: 0, variables: 1 */

// <002E27F3> kv3lib/keyvalues3.cpp:1945
// variables: 6
// function calls: 19
void KeyValues3::Internal_SetValueDoubleArray(int nFloats, const double* pValues, KeyValues3InternalOwnershipMode_t ownership)
{
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 1949
	{
		double* pCopiedValues; // 1967
		{
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 1968
	}
	{
		int nElement; // 1977
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1222
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1224
		KeyValues3::Internal_SetArrayCount(
					int nCount,
					KeyValues3Type_t nType);  // 1226
		KeyValues3::SetArrayElementCount(
					int nCount,
					KeyValues3Type_t nType);  // 1976
		{
			KeyValues3* pElement; // 1978
			CKV3ArrayIteratorView<false>& __for_range; // 62928
			iterator __for_begin; // 62938
			iterator __for_end; // 62948
			KeyValues3::IterateArray(); // 1978
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<false>::begin(); // 1978
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<false>::end(); // 1978
			iterator::operator!=(
					const iterator& rhs);  // 1978
			{
			}
			iterator::operator*(); // 1978
			KeyValues3::Internal_PrepareForInternalType(
							KeyValues3InternalType_t newType);  // 950
			KeyValues3::Internal_PrepareForType(
						KeyValues3Type_t newType);  // 239
			KeyValues3::SetValueDouble(
					double value);  // 1980
		}
	}
} /* size: 0, inline expansions: 1 (0 bytes) */

// <002C6402> kv3lib/keyvalues3.cpp:1945
// variables: 8
void KeyValues3::Internal_SetValueDoubleArray(int nFloats, const double* pValues, KeyValues3InternalOwnershipMode_t ownership)
{
	const char   __FUNCTION__; // 2565
	{
		double* pCopiedValues; // 1967
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1965
		}
	}
	{
		int nElement; // 1977
		{
			KeyValues3* pElement; // 1978
			CKV3ArrayIteratorView<false>& __for_range; // 5644
			iterator __for_begin; // 53089
			iterator __for_end; // 53089
		}
	}
} /* size: 0, variables: 1 */

// <006479F5> kv3lib/keyvalues3.cpp:1945
// variables: 6
// function calls: 19
void KeyValues3::Internal_SetValueDoubleArray(int nFloats, const double* pValues, KeyValues3InternalOwnershipMode_t ownership)
{
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 1949
	{
		double* pCopiedValues; // 1967
		{
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 1968
	}
	{
		int nElement; // 1977
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1222
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1224
		KeyValues3::Internal_SetArrayCount(
					int nCount,
					KeyValues3Type_t nType);  // 1226
		KeyValues3::SetArrayElementCount(
					int nCount,
					KeyValues3Type_t nType);  // 1976
		{
			KeyValues3* pElement; // 1978
			CKV3ArrayIteratorView<false>& __for_range; // 23378
			iterator __for_begin; // 23388
			iterator __for_end; // 23398
			KeyValues3::IterateArray(); // 1978
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<false>::begin(); // 1978
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<false>::end(); // 1978
			iterator::operator!=(
					const iterator& rhs);  // 1978
			{
			}
			iterator::operator*(); // 1978
			KeyValues3::Internal_PrepareForInternalType(
							KeyValues3InternalType_t newType);  // 950
			KeyValues3::Internal_PrepareForType(
						KeyValues3Type_t newType);  // 239
			KeyValues3::SetValueDouble(
					double value);  // 1980
		}
	}
} /* size: 0, inline expansions: 1 (39 bytes) */

// <0062B604> kv3lib/keyvalues3.cpp:1945
// variables: 8
void KeyValues3::Internal_SetValueDoubleArray(int nFloats, const double* pValues, KeyValues3InternalOwnershipMode_t ownership)
{
	const char   __FUNCTION__; // 28551
	{
		double* pCopiedValues; // 1967
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1965
		}
	}
	{
		int nElement; // 1977
		{
			KeyValues3* pElement; // 1978
			CKV3ArrayIteratorView<false>& __for_range; // 31630
			iterator __for_begin; // 13539
			iterator __for_end; // 13539
		}
	}
} /* size: 0, variables: 1 */

// <00A0328B> kv3lib/keyvalues3.cpp:1945
// variables: 8
void KeyValues3::Internal_SetValueDoubleArray(int nFloats, const double* pValues, KeyValues3InternalOwnershipMode_t ownership)
{
	const char   __FUNCTION__; // 34702
	{
		double* pCopiedValues; // 1967
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1965
		}
	}
	{
		int nElement; // 1977
		{
			KeyValues3* pElement; // 1978
			CKV3ArrayIteratorView<false>& __for_range; // 37781
			iterator __for_begin; // 19690
			iterator __for_end; // 19690
		}
	}
} /* size: 0, variables: 1 */

// <0012C1FD> kv3lib/keyvalues3.cpp:1945
// variables: 6
// function calls: 19
void KeyValues3::Internal_SetValueDoubleArray(int nFloats, const double* pValues, KeyValues3InternalOwnershipMode_t ownership)
{
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 1949
	{
		double* pCopiedValues; // 1967
		{
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 1968
	}
	{
		int nElement; // 1977
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1222
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1224
		KeyValues3::Internal_SetArrayCount(
					int nCount,
					KeyValues3Type_t nType);  // 1226
		KeyValues3::SetArrayElementCount(
					int nCount,
					KeyValues3Type_t nType);  // 1976
		{
			KeyValues3* pElement; // 1978
			CKV3ArrayIteratorView<false>& __for_range; // 22026
			iterator __for_begin; // 22036
			iterator __for_end; // 22046
			KeyValues3::IterateArray(); // 1978
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<false>::begin(); // 1978
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<false>::end(); // 1978
			iterator::operator!=(
					const iterator& rhs);  // 1978
			{
			}
			iterator::operator*(); // 1978
			KeyValues3::Internal_PrepareForInternalType(
							KeyValues3InternalType_t newType);  // 950
			KeyValues3::Internal_PrepareForType(
						KeyValues3Type_t newType);  // 239
			KeyValues3::SetValueDouble(
					double value);  // 1980
		}
	}
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0010FE0C> kv3lib/keyvalues3.cpp:1945
// variables: 8
void KeyValues3::Internal_SetValueDoubleArray(int nFloats, const double* pValues, KeyValues3InternalOwnershipMode_t ownership)
{
	const char   __FUNCTION__; // 27199
	{
		double* pCopiedValues; // 1967
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1965
		}
	}
	{
		int nElement; // 1977
		{
			KeyValues3* pElement; // 1978
			CKV3ArrayIteratorView<false>& __for_range; // 30278
			iterator __for_begin; // 12187
			iterator __for_end; // 12187
		}
	}
} /* size: 0, variables: 1 */

// <0558A9D8> kv3lib/keyvalues3.cpp:1993
// variables: 6
// function calls: 19
void KeyValues3::Internal_SetValueInt32Array(int nValues, const int32* pValues, KeyValues3InternalOwnershipMode_t ownership)
{
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 1997
	{
		int32* pCopiedValues; // 2015
		{
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2016
	}
	{
		int nElement; // 2025
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1222
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1224
		KeyValues3::Internal_SetArrayCount(
					int nCount,
					KeyValues3Type_t nType);  // 1226
		KeyValues3::SetArrayElementCount(
					int nCount,
					KeyValues3Type_t nType);  // 2024
		{
			KeyValues3* pElement; // 2026
			CKV3ArrayIteratorView<false>& __for_range; // 30710
			iterator __for_begin; // 30720
			iterator __for_end; // 30730
			KeyValues3::IterateArray(); // 2026
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<false>::begin(); // 2026
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<false>::end(); // 2026
			iterator::operator!=(
					const iterator& rhs);  // 2026
			{
			}
			iterator::operator*(); // 2026
			KeyValues3::Internal_PrepareForInternalType(
							KeyValues3InternalType_t newType);  // 950
			KeyValues3::Internal_PrepareForType(
						KeyValues3Type_t newType);  // 209
			KeyValues3::SetValueInt(
					int value);  // 2028
		}
	}
} /* size: 0, inline expansions: 1 (39 bytes) */

// <0556DF0D> kv3lib/keyvalues3.cpp:1993
// variables: 8
void KeyValues3::Internal_SetValueInt32Array(int nValues, const int32* pValues, KeyValues3InternalOwnershipMode_t ownership)
{
	const char   __FUNCTION__; // 36116
	{
		int32* pCopiedValues; // 2015
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2013
		}
	}
	{
		int nElement; // 2025
		{
			KeyValues3* pElement; // 2026
			CKV3ArrayIteratorView<false>& __for_range; // 39222
			iterator __for_begin; // 21131
			iterator __for_end; // 21131
		}
	}
} /* size: 0, variables: 1 */

// <029023D2> kv3lib/keyvalues3.cpp:1993
// variables: 6
// function calls: 19
void KeyValues3::Internal_SetValueInt32Array(int nValues, const int32* pValues, KeyValues3InternalOwnershipMode_t ownership)
{
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 1997
	{
		int32* pCopiedValues; // 2015
		{
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2016
	}
	{
		int nElement; // 2025
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1222
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1224
		KeyValues3::Internal_SetArrayCount(
					int nCount,
					KeyValues3Type_t nType);  // 1226
		KeyValues3::SetArrayElementCount(
					int nCount,
					KeyValues3Type_t nType);  // 2024
		{
			KeyValues3* pElement; // 2026
			CKV3ArrayIteratorView<false>& __for_range; // 49381
			iterator __for_begin; // 49391
			iterator __for_end; // 49401
			KeyValues3::IterateArray(); // 2026
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<false>::begin(); // 2026
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<false>::end(); // 2026
			iterator::operator!=(
					const iterator& rhs);  // 2026
			{
			}
			iterator::operator*(); // 2026
			KeyValues3::Internal_PrepareForInternalType(
							KeyValues3InternalType_t newType);  // 950
			KeyValues3::Internal_PrepareForType(
						KeyValues3Type_t newType);  // 209
			KeyValues3::SetValueInt(
					int value);  // 2028
		}
	}
} /* size: 0, inline expansions: 1 (39 bytes) */

// <028E5907> kv3lib/keyvalues3.cpp:1993
// variables: 8
void KeyValues3::Internal_SetValueInt32Array(int nValues, const int32* pValues, KeyValues3InternalOwnershipMode_t ownership)
{
	const char   __FUNCTION__; // 54787
	{
		int32* pCopiedValues; // 2015
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2013
		}
	}
	{
		int nElement; // 2025
		{
			KeyValues3* pElement; // 2026
			CKV3ArrayIteratorView<false>& __for_range; // 57893
			iterator __for_begin; // 39802
			iterator __for_end; // 39802
		}
	}
} /* size: 0, variables: 1 */

// <01267604> kv3lib/keyvalues3.cpp:1993
// variables: 6
// function calls: 19
void KeyValues3::Internal_SetValueInt32Array(int nValues, const int32* pValues, KeyValues3InternalOwnershipMode_t ownership)
{
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 1997
	{
		int32* pCopiedValues; // 2015
		{
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2016
	}
	{
		int nElement; // 2025
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1222
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1224
		KeyValues3::Internal_SetArrayCount(
					int nCount,
					KeyValues3Type_t nType);  // 1226
		KeyValues3::SetArrayElementCount(
					int nCount,
					KeyValues3Type_t nType);  // 2024
		{
			KeyValues3* pElement; // 2026
			CKV3ArrayIteratorView<false>& __for_range; // 10965
			iterator __for_begin; // 10975
			iterator __for_end; // 10985
			KeyValues3::IterateArray(); // 2026
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<false>::begin(); // 2026
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<false>::end(); // 2026
			iterator::operator!=(
					const iterator& rhs);  // 2026
			{
			}
			iterator::operator*(); // 2026
			KeyValues3::Internal_PrepareForInternalType(
							KeyValues3InternalType_t newType);  // 950
			KeyValues3::Internal_PrepareForType(
						KeyValues3Type_t newType);  // 209
			KeyValues3::SetValueInt(
					int value);  // 2028
		}
	}
} /* size: 0, inline expansions: 1 (39 bytes) */

// <0124AB39> kv3lib/keyvalues3.cpp:1993
// variables: 8
void KeyValues3::Internal_SetValueInt32Array(int nValues, const int32* pValues, KeyValues3InternalOwnershipMode_t ownership)
{
	const char   __FUNCTION__; // 16371
	{
		int32* pCopiedValues; // 2015
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2013
		}
	}
	{
		int nElement; // 2025
		{
			KeyValues3* pElement; // 2026
			CKV3ArrayIteratorView<false>& __for_range; // 19477
			iterator __for_begin; // 1386
			iterator __for_end; // 1386
		}
	}
} /* size: 0, variables: 1 */

// <002E2DC9> kv3lib/keyvalues3.cpp:1993
// variables: 6
// function calls: 19
void KeyValues3::Internal_SetValueInt32Array(int nValues, const int32* pValues, KeyValues3InternalOwnershipMode_t ownership)
{
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 1997
	{
		int32* pCopiedValues; // 2015
		{
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2016
	}
	{
		int nElement; // 2025
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1222
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1224
		KeyValues3::Internal_SetArrayCount(
					int nCount,
					KeyValues3Type_t nType);  // 1226
		KeyValues3::SetArrayElementCount(
					int nCount,
					KeyValues3Type_t nType);  // 2024
		{
			KeyValues3* pElement; // 2026
			CKV3ArrayIteratorView<false>& __for_range; // 62668
			iterator __for_begin; // 62678
			iterator __for_end; // 62688
			KeyValues3::IterateArray(); // 2026
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<false>::begin(); // 2026
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<false>::end(); // 2026
			iterator::operator!=(
					const iterator& rhs);  // 2026
			{
			}
			iterator::operator*(); // 2026
			KeyValues3::Internal_PrepareForInternalType(
							KeyValues3InternalType_t newType);  // 950
			KeyValues3::Internal_PrepareForType(
						KeyValues3Type_t newType);  // 209
			KeyValues3::SetValueInt(
					int value);  // 2028
		}
	}
} /* size: 0, inline expansions: 1 (0 bytes) */

// <002C62FE> kv3lib/keyvalues3.cpp:1993
// variables: 8
void KeyValues3::Internal_SetValueInt32Array(int nValues, const int32* pValues, KeyValues3InternalOwnershipMode_t ownership)
{
	const char   __FUNCTION__; // 2538
	{
		int32* pCopiedValues; // 2015
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2013
		}
	}
	{
		int nElement; // 2025
		{
			KeyValues3* pElement; // 2026
			CKV3ArrayIteratorView<false>& __for_range; // 5644
			iterator __for_begin; // 53089
			iterator __for_end; // 53089
		}
	}
} /* size: 0, variables: 1 */

// <00647FCB> kv3lib/keyvalues3.cpp:1993
// variables: 6
// function calls: 19
void KeyValues3::Internal_SetValueInt32Array(int nValues, const int32* pValues, KeyValues3InternalOwnershipMode_t ownership)
{
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 1997
	{
		int32* pCopiedValues; // 2015
		{
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2016
	}
	{
		int nElement; // 2025
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1222
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1224
		KeyValues3::Internal_SetArrayCount(
					int nCount,
					KeyValues3Type_t nType);  // 1226
		KeyValues3::SetArrayElementCount(
					int nCount,
					KeyValues3Type_t nType);  // 2024
		{
			KeyValues3* pElement; // 2026
			CKV3ArrayIteratorView<false>& __for_range; // 23118
			iterator __for_begin; // 23128
			iterator __for_end; // 23138
			KeyValues3::IterateArray(); // 2026
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<false>::begin(); // 2026
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<false>::end(); // 2026
			iterator::operator!=(
					const iterator& rhs);  // 2026
			{
			}
			iterator::operator*(); // 2026
			KeyValues3::Internal_PrepareForInternalType(
							KeyValues3InternalType_t newType);  // 950
			KeyValues3::Internal_PrepareForType(
						KeyValues3Type_t newType);  // 209
			KeyValues3::SetValueInt(
					int value);  // 2028
		}
	}
} /* size: 0, inline expansions: 1 (39 bytes) */

// <0062B500> kv3lib/keyvalues3.cpp:1993
// variables: 8
void KeyValues3::Internal_SetValueInt32Array(int nValues, const int32* pValues, KeyValues3InternalOwnershipMode_t ownership)
{
	const char   __FUNCTION__; // 28524
	{
		int32* pCopiedValues; // 2015
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2013
		}
	}
	{
		int nElement; // 2025
		{
			KeyValues3* pElement; // 2026
			CKV3ArrayIteratorView<false>& __for_range; // 31630
			iterator __for_begin; // 13539
			iterator __for_end; // 13539
		}
	}
} /* size: 0, variables: 1 */

// <00A03187> kv3lib/keyvalues3.cpp:1993
// variables: 8
void KeyValues3::Internal_SetValueInt32Array(int nValues, const int32* pValues, KeyValues3InternalOwnershipMode_t ownership)
{
	const char   __FUNCTION__; // 34675
	{
		int32* pCopiedValues; // 2015
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2013
		}
	}
	{
		int nElement; // 2025
		{
			KeyValues3* pElement; // 2026
			CKV3ArrayIteratorView<false>& __for_range; // 37781
			iterator __for_begin; // 19690
			iterator __for_end; // 19690
		}
	}
} /* size: 0, variables: 1 */

// <0010FD08> kv3lib/keyvalues3.cpp:1993
// variables: 8
void KeyValues3::Internal_SetValueInt32Array(int nValues, const int32* pValues, KeyValues3InternalOwnershipMode_t ownership)
{
	const char   __FUNCTION__; // 27172
	{
		int32* pCopiedValues; // 2015
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2013
		}
	}
	{
		int nElement; // 2025
		{
			KeyValues3* pElement; // 2026
			CKV3ArrayIteratorView<false>& __for_range; // 30278
			iterator __for_begin; // 12187
			iterator __for_end; // 12187
		}
	}
} /* size: 0, variables: 1 */

// <0556DE81> kv3lib/keyvalues3.cpp:2040
void KeyValues3::SetValueDoubleArray(int nFloatsInArray, const double* pValues)
{
} /* size: 0 */

// <0556D85F> kv3lib/keyvalues3.cpp:2048
// variables: 6
// function calls: 19
void KeyValues3::SetValueFloatArray(int nFloatsInArray, const float* pValues)
{
	{
		double* pValuesCopy; // 2052
		{
			int i; // 2053
		}
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 1949
		KeyValues3::Internal_SetValueDoubleArray(
						int nFloats,
						const double* pValues,
						KeyValues3InternalOwnershipMode_t ownership);  // 2058
	}
	{
		KeyValues3* pElement; // 2063
		CKV3ArrayIteratorView<false>& __for_range; // 39222
		iterator __for_begin; // 21131
		iterator __for_end; // 21131
		KeyValues3::IterateArray(); // 2063
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<false>::begin(); // 2063
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<false>::end(); // 2063
		iterator::operator!=(
				const iterator& rhs);  // 2063
		{
		}
		iterator::operator*(); // 2063
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 221
		KeyValues3::SetValueFloat(
				float value);  // 2065
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1222
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1224
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1226
	KeyValues3::SetArrayElementCount(
				int nCount,
				KeyValues3Type_t nType);  // 2062
} /* size: 0, inline expansions: 7 (194 bytes) */

// <028E5259> kv3lib/keyvalues3.cpp:2048
// variables: 6
// function calls: 19
void KeyValues3::SetValueFloatArray(int nFloatsInArray, const float* pValues)
{
	{
		double* pValuesCopy; // 2052
		{
			int i; // 2053
		}
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 1949
		KeyValues3::Internal_SetValueDoubleArray(
						int nFloats,
						const double* pValues,
						KeyValues3InternalOwnershipMode_t ownership);  // 2058
	}
	{
		KeyValues3* pElement; // 2063
		CKV3ArrayIteratorView<false>& __for_range; // 57893
		iterator __for_begin; // 39802
		iterator __for_end; // 39802
		KeyValues3::IterateArray(); // 2063
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<false>::begin(); // 2063
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<false>::end(); // 2063
		iterator::operator!=(
				const iterator& rhs);  // 2063
		{
		}
		iterator::operator*(); // 2063
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 221
		KeyValues3::SetValueFloat(
				float value);  // 2065
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1222
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1224
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1226
	KeyValues3::SetArrayElementCount(
				int nCount,
				KeyValues3Type_t nType);  // 2062
} /* size: 0, inline expansions: 7 (194 bytes) */

// <0124A48B> kv3lib/keyvalues3.cpp:2048
// variables: 6
// function calls: 19
void KeyValues3::SetValueFloatArray(int nFloatsInArray, const float* pValues)
{
	{
		double* pValuesCopy; // 2052
		{
			int i; // 2053
		}
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 1949
		KeyValues3::Internal_SetValueDoubleArray(
						int nFloats,
						const double* pValues,
						KeyValues3InternalOwnershipMode_t ownership);  // 2058
	}
	{
		KeyValues3* pElement; // 2063
		CKV3ArrayIteratorView<false>& __for_range; // 19477
		iterator __for_begin; // 1386
		iterator __for_end; // 1386
		KeyValues3::IterateArray(); // 2063
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<false>::begin(); // 2063
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<false>::end(); // 2063
		iterator::operator!=(
				const iterator& rhs);  // 2063
		{
		}
		iterator::operator*(); // 2063
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 221
		KeyValues3::SetValueFloat(
				float value);  // 2065
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1222
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1224
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1226
	KeyValues3::SetArrayElementCount(
				int nCount,
				KeyValues3Type_t nType);  // 2062
} /* size: 0, inline expansions: 7 (194 bytes) */

// <002C5C50> kv3lib/keyvalues3.cpp:2048
// variables: 6
// function calls: 19
void KeyValues3::SetValueFloatArray(int nFloatsInArray, const float* pValues)
{
	{
		double* pValuesCopy; // 2052
		{
			int i; // 2053
		}
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 1949
		KeyValues3::Internal_SetValueDoubleArray(
						int nFloats,
						const double* pValues,
						KeyValues3InternalOwnershipMode_t ownership);  // 2058
	}
	{
		KeyValues3* pElement; // 2063
		CKV3ArrayIteratorView<false>& __for_range; // 5644
		iterator __for_begin; // 53089
		iterator __for_end; // 53089
		KeyValues3::IterateArray(); // 2063
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<false>::begin(); // 2063
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<false>::end(); // 2063
		iterator::operator!=(
				const iterator& rhs);  // 2063
		{
		}
		iterator::operator*(); // 2063
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 221
		KeyValues3::SetValueFloat(
				float value);  // 2065
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1222
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1224
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1226
	KeyValues3::SetArrayElementCount(
				int nCount,
				KeyValues3Type_t nType);  // 2062
} /* size: 0, inline expansions: 7 (194 bytes) */

// <0062AE52> kv3lib/keyvalues3.cpp:2048
// variables: 6
// function calls: 19
void KeyValues3::SetValueFloatArray(int nFloatsInArray, const float* pValues)
{
	{
		double* pValuesCopy; // 2052
		{
			int i; // 2053
		}
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 1949
		KeyValues3::Internal_SetValueDoubleArray(
						int nFloats,
						const double* pValues,
						KeyValues3InternalOwnershipMode_t ownership);  // 2058
	}
	{
		KeyValues3* pElement; // 2063
		CKV3ArrayIteratorView<false>& __for_range; // 31630
		iterator __for_begin; // 13539
		iterator __for_end; // 13539
		KeyValues3::IterateArray(); // 2063
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<false>::begin(); // 2063
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<false>::end(); // 2063
		iterator::operator!=(
				const iterator& rhs);  // 2063
		{
		}
		iterator::operator*(); // 2063
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 221
		KeyValues3::SetValueFloat(
				float value);  // 2065
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1222
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1224
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1226
	KeyValues3::SetArrayElementCount(
				int nCount,
				KeyValues3Type_t nType);  // 2062
} /* size: 0, inline expansions: 7 (194 bytes) */

// <0010F65A> kv3lib/keyvalues3.cpp:2048
// variables: 6
// function calls: 19
void KeyValues3::SetValueFloatArray(int nFloatsInArray, const float* pValues)
{
	{
		double* pValuesCopy; // 2052
		{
			int i; // 2053
		}
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 1949
		KeyValues3::Internal_SetValueDoubleArray(
						int nFloats,
						const double* pValues,
						KeyValues3InternalOwnershipMode_t ownership);  // 2058
	}
	{
		KeyValues3* pElement; // 2063
		CKV3ArrayIteratorView<false>& __for_range; // 30278
		iterator __for_begin; // 12187
		iterator __for_end; // 12187
		KeyValues3::IterateArray(); // 2063
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<false>::begin(); // 2063
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<false>::end(); // 2063
		iterator::operator!=(
				const iterator& rhs);  // 2063
		{
		}
		iterator::operator*(); // 2063
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 221
		KeyValues3::SetValueFloat(
				float value);  // 2065
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1222
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1224
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1226
	KeyValues3::SetArrayElementCount(
				int nCount,
				KeyValues3Type_t nType);  // 2062
} /* size: 0, inline expansions: 7 (194 bytes) */

// <0558AFB0> kv3lib/keyvalues3.cpp:2073
void KeyValues3::SetValueIntArray(int nIntsInArray, const int* pValues)
{
} /* size: 14 */

// <0556CD9C> kv3lib/keyvalues3.cpp:2081
// variables: 2
// function calls: 44
void KeyValues3::SetValueShortArray(int nIntsInArray, const short int* pValues)
{
	CUtlVectorFixedGrowable<int, 32> ints; // 2083
	{
		int i; // 2085
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::operator[](
				int i);  // 2087
	}
	CUtlMemory<int, int>::CUtlMemory(
			int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<int, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<int, int>::CUtlMemoryFixedGrowable_Base(
					int* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<32, int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, int>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<32, int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<int, 32, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<int, 32>::CUtlVectorFixedGrowable(
				int growSize);  // 2083
	CUtlMemory<int, int>::IsExternallyAllocated(); // 859
	CUtlMemory<int, int>::IsExternallyAllocated(); // 861
	CUtlMemory<int, int>::Grow(
		int num);  // 806
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::SetCount(
		int count);  // 2084
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Base(); // 2090
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<int, int>::ConvertToExternalMemory(
				int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<int, int>::Purge_FixedGrowable(
				int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<int, int>::Purge_FixedGrowable(
				int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<32, int, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<int, 32, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<int, 32, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<int, 32>::~CUtlVectorFixedGrowable(); // 2091
} /* size: 608, variables: 1, inline expansions: 42 (2567 bytes) */

// <0556C5E0> kv3lib/keyvalues3.cpp:2096
// variables: 3
// function calls: 30
void KeyValues3::SetValueFloatArrayFromString(int nFloats, const char* pString)
{
	CSplitString split; // 2098
	int nStringParts; // 2099
	{
		int iFloat; // 2102
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 2106
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 221
		KeyValues3::SetValueFloat(
				float value);  // 2110
	}
	CUtlMemory<char::ValidateGrowSize(); // 475
	CUtlMemory<char::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<char::ResetDbgInfo(); // 530
	CUtlVectorBase<char::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<char::CUtlVector(); // 30
	CSplitString::CSplitString(
			const char* pString,
			const char* pSeparator);  // 2098
	CUtlVectorBase<char::Count(); // 2099
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1222
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1224
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1226
	KeyValues3::SetArrayElementCount(
				int nCount,
				KeyValues3Type_t nType);  // 2101
	CUtlVectorBase<char::RemoveAll(); // 1798
	CUtlMemory<char::IsExternallyAllocated(); // 905
	CUtlMemory<char::Purge(); // 903
	CUtlMemory<char::Purge(); // 1799
	CUtlVectorBase<char::Purge(); // 560
	ValidateAlignment<char*>(void); // 508
	CUtlMemory<char::Purge(); // 510
	CUtlMemory<char::~CUtlMemory(); // 562
	CUtlVectorBase<char::~CUtlVectorBase(); // 410
	CUtlVector<char::~CUtlVector(); // 40
	CSplitString::~CSplitString(); // 2115
} /* size: 391, variables: 2, inline expansions: 25 (493 bytes) */

// <0556BB20> kv3lib/keyvalues3.cpp:2120
// variables: 11
// function calls: 35
void KeyValues3::GetValueFloatArray(int nExpectedFloats, float* pOutValues)
{
	const char   __FUNCTION__; // 35883
	{
		CSplitString split; // 2131
		int nSplitCount; // 2132
		int nNumToUse; // 2133
		int iFloat; // 2134
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 30
		CSplitString::CSplitString(
				const char* pString,
				const char* pSeparator);  // 2131
		CUtlVectorBase<char::Count(); // 2132
		Min<int>(const int& val1,
			const int& val2);  // 2133
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 2137
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 40
		CSplitString::~CSplitString(); // 2150
	}
	{
		int nCount; // 2153
		int i; // 2154
		Min<int>(const int& val1,
			const int& val2);  // 2153
	}
	{
		int nArrayCount; // 2170
		{
			int iFloat; // 2176
		}
		{
			int i; // 120
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 696
			KV3Helper_StringToNumber<float>(const char* pString); // 715
			KeyValues3::GetValueAsNumeric<float>(); // 694
			{
			}
			KeyValues3::GetValueAsNumeric<float>(); // 199
			KeyValues3::GetValueFloat(); // 2172
			operator()(const class* __closure,
					int element,
					const KeyValues3* pArrayElement); // 122
		}
		KeyValues3::IterateArrayElements<KeyValues3::GetValueFloatArray(
																class& callback);  // 2170
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2124
} /* size: 0, variables: 1, inline expansions: 4 (34 bytes) */

// <028E351A> kv3lib/keyvalues3.cpp:2120
// variables: 11
// function calls: 35
void KeyValues3::GetValueFloatArray(int nExpectedFloats, float* pOutValues)
{
	const char   __FUNCTION__; // 54554
	{
		CSplitString split; // 2131
		int nSplitCount; // 2132
		int nNumToUse; // 2133
		int iFloat; // 2134
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 30
		CSplitString::CSplitString(
				const char* pString,
				const char* pSeparator);  // 2131
		CUtlVectorBase<char::Count(); // 2132
		Min<int>(const int& val1,
			const int& val2);  // 2133
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 2137
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 40
		CSplitString::~CSplitString(); // 2150
	}
	{
		int nCount; // 2153
		int i; // 2154
		Min<int>(const int& val1,
			const int& val2);  // 2153
	}
	{
		int nArrayCount; // 2170
		{
			int iFloat; // 2176
		}
		{
			int i; // 120
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 696
			KV3Helper_StringToNumber<float>(const char* pString); // 715
			KeyValues3::GetValueAsNumeric<float>(); // 694
			{
			}
			KeyValues3::GetValueAsNumeric<float>(); // 199
			KeyValues3::GetValueFloat(); // 2172
			operator()(const class* __closure,
					int element,
					const KeyValues3* pArrayElement); // 122
		}
		KeyValues3::IterateArrayElements<KeyValues3::GetValueFloatArray(
																class& callback);  // 2170
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2124
} /* size: 0, variables: 1, inline expansions: 4 (34 bytes) */

// <0124874C> kv3lib/keyvalues3.cpp:2120
// variables: 11
// function calls: 35
void KeyValues3::GetValueFloatArray(int nExpectedFloats, float* pOutValues)
{
	const char   __FUNCTION__; // 16138
	{
		CSplitString split; // 2131
		int nSplitCount; // 2132
		int nNumToUse; // 2133
		int iFloat; // 2134
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 30
		CSplitString::CSplitString(
				const char* pString,
				const char* pSeparator);  // 2131
		CUtlVectorBase<char::Count(); // 2132
		Min<int>(const int& val1,
			const int& val2);  // 2133
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 2137
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 40
		CSplitString::~CSplitString(); // 2150
	}
	{
		int nCount; // 2153
		int i; // 2154
		Min<int>(const int& val1,
			const int& val2);  // 2153
	}
	{
		int nArrayCount; // 2170
		{
			int iFloat; // 2176
		}
		{
			int i; // 120
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 696
			KV3Helper_StringToNumber<float>(const char* pString); // 715
			KeyValues3::GetValueAsNumeric<float>(); // 694
			{
			}
			KeyValues3::GetValueAsNumeric<float>(); // 199
			KeyValues3::GetValueFloat(); // 2172
			operator()(const class* __closure,
					int element,
					const KeyValues3* pArrayElement); // 122
		}
		KeyValues3::IterateArrayElements<KeyValues3::GetValueFloatArray(
																class& callback);  // 2170
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2124
} /* size: 0, variables: 1, inline expansions: 4 (34 bytes) */

// <002C3F11> kv3lib/keyvalues3.cpp:2120
// variables: 11
// function calls: 35
void KeyValues3::GetValueFloatArray(int nExpectedFloats, float* pOutValues)
{
	const char   __FUNCTION__; // 2305
	{
		CSplitString split; // 2131
		int nSplitCount; // 2132
		int nNumToUse; // 2133
		int iFloat; // 2134
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 30
		CSplitString::CSplitString(
				const char* pString,
				const char* pSeparator);  // 2131
		CUtlVectorBase<char::Count(); // 2132
		Min<int>(const int& val1,
			const int& val2);  // 2133
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 2137
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 40
		CSplitString::~CSplitString(); // 2150
	}
	{
		int nCount; // 2153
		int i; // 2154
		Min<int>(const int& val1,
			const int& val2);  // 2153
	}
	{
		int nArrayCount; // 2170
		{
			int iFloat; // 2176
		}
		{
			int i; // 120
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 696
			KV3Helper_StringToNumber<float>(const char* pString); // 715
			KeyValues3::GetValueAsNumeric<float>(); // 694
			{
			}
			KeyValues3::GetValueAsNumeric<float>(); // 199
			KeyValues3::GetValueFloat(); // 2172
			operator()(const class* __closure,
					int element,
					const KeyValues3* pArrayElement); // 122
		}
		KeyValues3::IterateArrayElements<KeyValues3::GetValueFloatArray(
																class& callback);  // 2170
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2124
} /* size: 0, variables: 1, inline expansions: 4 (34 bytes) */

// <00629113> kv3lib/keyvalues3.cpp:2120
// variables: 11
// function calls: 35
void KeyValues3::GetValueFloatArray(int nExpectedFloats, float* pOutValues)
{
	const char   __FUNCTION__; // 28291
	{
		CSplitString split; // 2131
		int nSplitCount; // 2132
		int nNumToUse; // 2133
		int iFloat; // 2134
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 30
		CSplitString::CSplitString(
				const char* pString,
				const char* pSeparator);  // 2131
		CUtlVectorBase<char::Count(); // 2132
		Min<int>(const int& val1,
			const int& val2);  // 2133
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 2137
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 40
		CSplitString::~CSplitString(); // 2150
	}
	{
		int nCount; // 2153
		int i; // 2154
		Min<int>(const int& val1,
			const int& val2);  // 2153
	}
	{
		int nArrayCount; // 2170
		{
			int iFloat; // 2176
		}
		{
			int i; // 120
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 696
			KV3Helper_StringToNumber<float>(const char* pString); // 715
			KeyValues3::GetValueAsNumeric<float>(); // 694
			{
			}
			KeyValues3::GetValueAsNumeric<float>(); // 199
			KeyValues3::GetValueFloat(); // 2172
			operator()(const class* __closure,
					int element,
					const KeyValues3* pArrayElement); // 122
		}
		KeyValues3::IterateArrayElements<KeyValues3::GetValueFloatArray(
																class& callback);  // 2170
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2124
} /* size: 0, variables: 1, inline expansions: 4 (34 bytes) */

// <00A00D9A> kv3lib/keyvalues3.cpp:2120
// variables: 11
// function calls: 35
void KeyValues3::GetValueFloatArray(int nExpectedFloats, float* pOutValues)
{
	const char   __FUNCTION__; // 34442
	{
		CSplitString split; // 2131
		int nSplitCount; // 2132
		int nNumToUse; // 2133
		int iFloat; // 2134
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 30
		CSplitString::CSplitString(
				const char* pString,
				const char* pSeparator);  // 2131
		CUtlVectorBase<char::Count(); // 2132
		Min<int>(const int& val1,
			const int& val2);  // 2133
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 2137
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 40
		CSplitString::~CSplitString(); // 2150
	}
	{
		int nCount; // 2153
		int i; // 2154
		Min<int>(const int& val1,
			const int& val2);  // 2153
	}
	{
		int nArrayCount; // 2170
		{
			int iFloat; // 2176
		}
		{
			int i; // 120
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 696
			KV3Helper_StringToNumber<float>(const char* pString); // 715
			KeyValues3::GetValueAsNumeric<float>(); // 694
			{
			}
			KeyValues3::GetValueAsNumeric<float>(); // 199
			KeyValues3::GetValueFloat(); // 2172
			operator()(const class* __closure,
					int element,
					const KeyValues3* pArrayElement); // 122
		}
		KeyValues3::IterateArrayElements<KeyValues3::GetValueFloatArray(
																class& callback);  // 2170
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2124
} /* size: 0, variables: 1, inline expansions: 4 (34 bytes) */

// <0010D91B> kv3lib/keyvalues3.cpp:2120
// variables: 11
// function calls: 35
void KeyValues3::GetValueFloatArray(int nExpectedFloats, float* pOutValues)
{
	const char   __FUNCTION__; // 26939
	{
		CSplitString split; // 2131
		int nSplitCount; // 2132
		int nNumToUse; // 2133
		int iFloat; // 2134
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 30
		CSplitString::CSplitString(
				const char* pString,
				const char* pSeparator);  // 2131
		CUtlVectorBase<char::Count(); // 2132
		Min<int>(const int& val1,
			const int& val2);  // 2133
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 2137
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 40
		CSplitString::~CSplitString(); // 2150
	}
	{
		int nCount; // 2153
		int i; // 2154
		Min<int>(const int& val1,
			const int& val2);  // 2153
	}
	{
		int nArrayCount; // 2170
		{
			int iFloat; // 2176
		}
		{
			int i; // 120
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 696
			KV3Helper_StringToNumber<float>(const char* pString); // 715
			KeyValues3::GetValueAsNumeric<float>(); // 694
			{
			}
			KeyValues3::GetValueAsNumeric<float>(); // 199
			KeyValues3::GetValueFloat(); // 2172
			operator()(const class* __closure,
					int element,
					const KeyValues3* pArrayElement); // 122
		}
		KeyValues3::IterateArrayElements<KeyValues3::GetValueFloatArray(
																class& callback);  // 2170
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2124
} /* size: 0, variables: 1, inline expansions: 4 (34 bytes) */

// <0556B099> kv3lib/keyvalues3.cpp:2189
// variables: 11
// function calls: 35
void KeyValues3::GetValueIntArray(int nExpectedInts, int* pOutValues)
{
	const char   __FUNCTION__; // 35829
	{
		CSplitString split; // 2200
		int nSplitCount; // 2201
		int nNumToUse; // 2202
		int iInt; // 2203
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 30
		CSplitString::CSplitString(
				const char* pString,
				const char* pSeparator);  // 2200
		CUtlVectorBase<char::Count(); // 2201
		Min<int>(const int& val1,
			const int& val2);  // 2202
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 2206
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 40
		CSplitString::~CSplitString(); // 2219
	}
	{
		int nCount; // 2222
		int i; // 2223
		Min<int>(const int& val1,
			const int& val2);  // 2222
	}
	{
		int nArrayCount; // 2239
		{
			int iInt; // 2245
		}
		{
			int i; // 120
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 696
			{
			}
			KV3Helper_StringToNumber<int>(const char* pString); // 715
			KeyValues3::GetValueAsNumeric<int>(); // 694
			KeyValues3::GetValueAsNumeric<int>(); // 184
			KeyValues3::GetValueInt(); // 2241
			operator()(const class* __closure,
					int element,
					const KeyValues3* pArrayElement); // 122
		}
		KeyValues3::IterateArrayElements<KeyValues3::GetValueIntArray(
															class& callback);  // 2239
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2191
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2193
} /* size: 0, variables: 1, inline expansions: 4 (34 bytes) */

// <028E2A93> kv3lib/keyvalues3.cpp:2189
// variables: 11
// function calls: 35
void KeyValues3::GetValueIntArray(int nExpectedInts, int* pOutValues)
{
	const char   __FUNCTION__; // 54500
	{
		CSplitString split; // 2200
		int nSplitCount; // 2201
		int nNumToUse; // 2202
		int iInt; // 2203
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 30
		CSplitString::CSplitString(
				const char* pString,
				const char* pSeparator);  // 2200
		CUtlVectorBase<char::Count(); // 2201
		Min<int>(const int& val1,
			const int& val2);  // 2202
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 2206
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 40
		CSplitString::~CSplitString(); // 2219
	}
	{
		int nCount; // 2222
		int i; // 2223
		Min<int>(const int& val1,
			const int& val2);  // 2222
	}
	{
		int nArrayCount; // 2239
		{
			int iInt; // 2245
		}
		{
			int i; // 120
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 696
			{
			}
			KV3Helper_StringToNumber<int>(const char* pString); // 715
			KeyValues3::GetValueAsNumeric<int>(); // 694
			KeyValues3::GetValueAsNumeric<int>(); // 184
			KeyValues3::GetValueInt(); // 2241
			operator()(const class* __closure,
					int element,
					const KeyValues3* pArrayElement); // 122
		}
		KeyValues3::IterateArrayElements<KeyValues3::GetValueIntArray(
															class& callback);  // 2239
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2191
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2193
} /* size: 0, variables: 1, inline expansions: 4 (34 bytes) */

// <01247CC5> kv3lib/keyvalues3.cpp:2189
// variables: 11
// function calls: 35
void KeyValues3::GetValueIntArray(int nExpectedInts, int* pOutValues)
{
	const char   __FUNCTION__; // 16084
	{
		CSplitString split; // 2200
		int nSplitCount; // 2201
		int nNumToUse; // 2202
		int iInt; // 2203
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 30
		CSplitString::CSplitString(
				const char* pString,
				const char* pSeparator);  // 2200
		CUtlVectorBase<char::Count(); // 2201
		Min<int>(const int& val1,
			const int& val2);  // 2202
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 2206
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 40
		CSplitString::~CSplitString(); // 2219
	}
	{
		int nCount; // 2222
		int i; // 2223
		Min<int>(const int& val1,
			const int& val2);  // 2222
	}
	{
		int nArrayCount; // 2239
		{
			int iInt; // 2245
		}
		{
			int i; // 120
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 696
			{
			}
			KV3Helper_StringToNumber<int>(const char* pString); // 715
			KeyValues3::GetValueAsNumeric<int>(); // 694
			KeyValues3::GetValueAsNumeric<int>(); // 184
			KeyValues3::GetValueInt(); // 2241
			operator()(const class* __closure,
					int element,
					const KeyValues3* pArrayElement); // 122
		}
		KeyValues3::IterateArrayElements<KeyValues3::GetValueIntArray(
															class& callback);  // 2239
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2191
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2193
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <002C348A> kv3lib/keyvalues3.cpp:2189
// variables: 11
// function calls: 35
void KeyValues3::GetValueIntArray(int nExpectedInts, int* pOutValues)
{
	const char   __FUNCTION__; // 2251
	{
		CSplitString split; // 2200
		int nSplitCount; // 2201
		int nNumToUse; // 2202
		int iInt; // 2203
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 30
		CSplitString::CSplitString(
				const char* pString,
				const char* pSeparator);  // 2200
		CUtlVectorBase<char::Count(); // 2201
		Min<int>(const int& val1,
			const int& val2);  // 2202
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 2206
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 40
		CSplitString::~CSplitString(); // 2219
	}
	{
		int nCount; // 2222
		int i; // 2223
		Min<int>(const int& val1,
			const int& val2);  // 2222
	}
	{
		int nArrayCount; // 2239
		{
			int iInt; // 2245
		}
		{
			int i; // 120
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 696
			{
			}
			KV3Helper_StringToNumber<int>(const char* pString); // 715
			KeyValues3::GetValueAsNumeric<int>(); // 694
			KeyValues3::GetValueAsNumeric<int>(); // 184
			KeyValues3::GetValueInt(); // 2241
			operator()(const class* __closure,
					int element,
					const KeyValues3* pArrayElement); // 122
		}
		KeyValues3::IterateArrayElements<KeyValues3::GetValueIntArray(
															class& callback);  // 2239
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2191
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2193
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <0062868C> kv3lib/keyvalues3.cpp:2189
// variables: 11
// function calls: 35
void KeyValues3::GetValueIntArray(int nExpectedInts, int* pOutValues)
{
	const char   __FUNCTION__; // 28237
	{
		CSplitString split; // 2200
		int nSplitCount; // 2201
		int nNumToUse; // 2202
		int iInt; // 2203
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 30
		CSplitString::CSplitString(
				const char* pString,
				const char* pSeparator);  // 2200
		CUtlVectorBase<char::Count(); // 2201
		Min<int>(const int& val1,
			const int& val2);  // 2202
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 2206
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 40
		CSplitString::~CSplitString(); // 2219
	}
	{
		int nCount; // 2222
		int i; // 2223
		Min<int>(const int& val1,
			const int& val2);  // 2222
	}
	{
		int nArrayCount; // 2239
		{
			int iInt; // 2245
		}
		{
			int i; // 120
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 696
			{
			}
			KV3Helper_StringToNumber<int>(const char* pString); // 715
			KeyValues3::GetValueAsNumeric<int>(); // 694
			KeyValues3::GetValueAsNumeric<int>(); // 184
			KeyValues3::GetValueInt(); // 2241
			operator()(const class* __closure,
					int element,
					const KeyValues3* pArrayElement); // 122
		}
		KeyValues3::IterateArrayElements<KeyValues3::GetValueIntArray(
															class& callback);  // 2239
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2191
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2193
} /* size: 0, variables: 1, inline expansions: 4 (34 bytes) */

// <00A00313> kv3lib/keyvalues3.cpp:2189
// variables: 11
// function calls: 35
void KeyValues3::GetValueIntArray(int nExpectedInts, int* pOutValues)
{
	const char   __FUNCTION__; // 34388
	{
		CSplitString split; // 2200
		int nSplitCount; // 2201
		int nNumToUse; // 2202
		int iInt; // 2203
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 30
		CSplitString::CSplitString(
				const char* pString,
				const char* pSeparator);  // 2200
		CUtlVectorBase<char::Count(); // 2201
		Min<int>(const int& val1,
			const int& val2);  // 2202
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 2206
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 40
		CSplitString::~CSplitString(); // 2219
	}
	{
		int nCount; // 2222
		int i; // 2223
		Min<int>(const int& val1,
			const int& val2);  // 2222
	}
	{
		int nArrayCount; // 2239
		{
			int iInt; // 2245
		}
		{
			int i; // 120
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 696
			{
			}
			KV3Helper_StringToNumber<int>(const char* pString); // 715
			KeyValues3::GetValueAsNumeric<int>(); // 694
			KeyValues3::GetValueAsNumeric<int>(); // 184
			KeyValues3::GetValueInt(); // 2241
			operator()(const class* __closure,
					int element,
					const KeyValues3* pArrayElement); // 122
		}
		KeyValues3::IterateArrayElements<KeyValues3::GetValueIntArray(
															class& callback);  // 2239
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2191
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2193
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <0010CE94> kv3lib/keyvalues3.cpp:2189
// variables: 11
// function calls: 35
void KeyValues3::GetValueIntArray(int nExpectedInts, int* pOutValues)
{
	const char   __FUNCTION__; // 26885
	{
		CSplitString split; // 2200
		int nSplitCount; // 2201
		int nNumToUse; // 2202
		int iInt; // 2203
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 30
		CSplitString::CSplitString(
				const char* pString,
				const char* pSeparator);  // 2200
		CUtlVectorBase<char::Count(); // 2201
		Min<int>(const int& val1,
			const int& val2);  // 2202
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 2206
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 40
		CSplitString::~CSplitString(); // 2219
	}
	{
		int nCount; // 2222
		int i; // 2223
		Min<int>(const int& val1,
			const int& val2);  // 2222
	}
	{
		int nArrayCount; // 2239
		{
			int iInt; // 2245
		}
		{
			int i; // 120
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 696
			{
			}
			KV3Helper_StringToNumber<int>(const char* pString); // 715
			KeyValues3::GetValueAsNumeric<int>(); // 694
			KeyValues3::GetValueAsNumeric<int>(); // 184
			KeyValues3::GetValueInt(); // 2241
			operator()(const class* __closure,
					int element,
					const KeyValues3* pArrayElement); // 122
		}
		KeyValues3::IterateArrayElements<KeyValues3::GetValueIntArray(
															class& callback);  // 2239
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2191
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2193
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <0556A612> kv3lib/keyvalues3.cpp:2258
// variables: 11
// function calls: 35
void KeyValues3::GetValueShortArray(int nExpectedInts, short int* pOutValues)
{
	const char   __FUNCTION__; // 35883
	{
		CSplitString split; // 2269
		int nSplitCount; // 2270
		int nNumToUse; // 2271
		int iInt; // 2272
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 30
		CSplitString::CSplitString(
				const char* pString,
				const char* pSeparator);  // 2269
		CUtlVectorBase<char::Count(); // 2270
		Min<int>(const int& val1,
			const int& val2);  // 2271
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 2275
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 40
		CSplitString::~CSplitString(); // 2288
	}
	{
		int nCount; // 2291
		int i; // 2292
		Min<int>(const int& val1,
			const int& val2);  // 2291
	}
	{
		int nArrayCount; // 2308
		{
			int iInt; // 2314
		}
		{
			int i; // 120
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 696
			{
			}
			KV3Helper_StringToNumber<int>(const char* pString); // 715
			KeyValues3::GetValueAsNumeric<int>(); // 694
			KeyValues3::GetValueAsNumeric<int>(); // 184
			KeyValues3::GetValueInt(); // 2310
			operator()(const class* __closure,
					int element,
					const KeyValues3* pArrayElement); // 122
		}
		KeyValues3::IterateArrayElements<KeyValues3::GetValueShortArray(
																class& callback);  // 2308
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2260
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2262
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <028E200C> kv3lib/keyvalues3.cpp:2258
// variables: 11
// function calls: 35
void KeyValues3::GetValueShortArray(int nExpectedInts, short int* pOutValues)
{
	const char   __FUNCTION__; // 54554
	{
		CSplitString split; // 2269
		int nSplitCount; // 2270
		int nNumToUse; // 2271
		int iInt; // 2272
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 30
		CSplitString::CSplitString(
				const char* pString,
				const char* pSeparator);  // 2269
		CUtlVectorBase<char::Count(); // 2270
		Min<int>(const int& val1,
			const int& val2);  // 2271
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 2275
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 40
		CSplitString::~CSplitString(); // 2288
	}
	{
		int nCount; // 2291
		int i; // 2292
		Min<int>(const int& val1,
			const int& val2);  // 2291
	}
	{
		int nArrayCount; // 2308
		{
			int iInt; // 2314
		}
		{
			int i; // 120
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 696
			{
			}
			KV3Helper_StringToNumber<int>(const char* pString); // 715
			KeyValues3::GetValueAsNumeric<int>(); // 694
			KeyValues3::GetValueAsNumeric<int>(); // 184
			KeyValues3::GetValueInt(); // 2310
			operator()(const class* __closure,
					int element,
					const KeyValues3* pArrayElement); // 122
		}
		KeyValues3::IterateArrayElements<KeyValues3::GetValueShortArray(
																class& callback);  // 2308
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2260
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2262
} /* size: 0, variables: 1, inline expansions: 4 (34 bytes) */

// <0124723E> kv3lib/keyvalues3.cpp:2258
// variables: 11
// function calls: 35
void KeyValues3::GetValueShortArray(int nExpectedInts, short int* pOutValues)
{
	const char   __FUNCTION__; // 16138
	{
		CSplitString split; // 2269
		int nSplitCount; // 2270
		int nNumToUse; // 2271
		int iInt; // 2272
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 30
		CSplitString::CSplitString(
				const char* pString,
				const char* pSeparator);  // 2269
		CUtlVectorBase<char::Count(); // 2270
		Min<int>(const int& val1,
			const int& val2);  // 2271
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 2275
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 40
		CSplitString::~CSplitString(); // 2288
	}
	{
		int nCount; // 2291
		int i; // 2292
		Min<int>(const int& val1,
			const int& val2);  // 2291
	}
	{
		int nArrayCount; // 2308
		{
			int iInt; // 2314
		}
		{
			int i; // 120
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 696
			{
			}
			KV3Helper_StringToNumber<int>(const char* pString); // 715
			KeyValues3::GetValueAsNumeric<int>(); // 694
			KeyValues3::GetValueAsNumeric<int>(); // 184
			KeyValues3::GetValueInt(); // 2310
			operator()(const class* __closure,
					int element,
					const KeyValues3* pArrayElement); // 122
		}
		KeyValues3::IterateArrayElements<KeyValues3::GetValueShortArray(
																class& callback);  // 2308
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2260
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2262
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <002C2A03> kv3lib/keyvalues3.cpp:2258
// variables: 11
// function calls: 35
void KeyValues3::GetValueShortArray(int nExpectedInts, short int* pOutValues)
{
	const char   __FUNCTION__; // 2305
	{
		CSplitString split; // 2269
		int nSplitCount; // 2270
		int nNumToUse; // 2271
		int iInt; // 2272
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 30
		CSplitString::CSplitString(
				const char* pString,
				const char* pSeparator);  // 2269
		CUtlVectorBase<char::Count(); // 2270
		Min<int>(const int& val1,
			const int& val2);  // 2271
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 2275
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 40
		CSplitString::~CSplitString(); // 2288
	}
	{
		int nCount; // 2291
		int i; // 2292
		Min<int>(const int& val1,
			const int& val2);  // 2291
	}
	{
		int nArrayCount; // 2308
		{
			int iInt; // 2314
		}
		{
			int i; // 120
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 696
			{
			}
			KV3Helper_StringToNumber<int>(const char* pString); // 715
			KeyValues3::GetValueAsNumeric<int>(); // 694
			KeyValues3::GetValueAsNumeric<int>(); // 184
			KeyValues3::GetValueInt(); // 2310
			operator()(const class* __closure,
					int element,
					const KeyValues3* pArrayElement); // 122
		}
		KeyValues3::IterateArrayElements<KeyValues3::GetValueShortArray(
																class& callback);  // 2308
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2260
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2262
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <00627C05> kv3lib/keyvalues3.cpp:2258
// variables: 11
// function calls: 35
void KeyValues3::GetValueShortArray(int nExpectedInts, short int* pOutValues)
{
	const char   __FUNCTION__; // 28291
	{
		CSplitString split; // 2269
		int nSplitCount; // 2270
		int nNumToUse; // 2271
		int iInt; // 2272
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 30
		CSplitString::CSplitString(
				const char* pString,
				const char* pSeparator);  // 2269
		CUtlVectorBase<char::Count(); // 2270
		Min<int>(const int& val1,
			const int& val2);  // 2271
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 2275
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 40
		CSplitString::~CSplitString(); // 2288
	}
	{
		int nCount; // 2291
		int i; // 2292
		Min<int>(const int& val1,
			const int& val2);  // 2291
	}
	{
		int nArrayCount; // 2308
		{
			int iInt; // 2314
		}
		{
			int i; // 120
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 696
			{
			}
			KV3Helper_StringToNumber<int>(const char* pString); // 715
			KeyValues3::GetValueAsNumeric<int>(); // 694
			KeyValues3::GetValueAsNumeric<int>(); // 184
			KeyValues3::GetValueInt(); // 2310
			operator()(const class* __closure,
					int element,
					const KeyValues3* pArrayElement); // 122
		}
		KeyValues3::IterateArrayElements<KeyValues3::GetValueShortArray(
																class& callback);  // 2308
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2260
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2262
} /* size: 0, variables: 1, inline expansions: 4 (34 bytes) */

// <009FF88C> kv3lib/keyvalues3.cpp:2258
// variables: 11
// function calls: 35
void KeyValues3::GetValueShortArray(int nExpectedInts, short int* pOutValues)
{
	const char   __FUNCTION__; // 34442
	{
		CSplitString split; // 2269
		int nSplitCount; // 2270
		int nNumToUse; // 2271
		int iInt; // 2272
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 30
		CSplitString::CSplitString(
				const char* pString,
				const char* pSeparator);  // 2269
		CUtlVectorBase<char::Count(); // 2270
		Min<int>(const int& val1,
			const int& val2);  // 2271
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 2275
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 40
		CSplitString::~CSplitString(); // 2288
	}
	{
		int nCount; // 2291
		int i; // 2292
		Min<int>(const int& val1,
			const int& val2);  // 2291
	}
	{
		int nArrayCount; // 2308
		{
			int iInt; // 2314
		}
		{
			int i; // 120
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 696
			{
			}
			KV3Helper_StringToNumber<int>(const char* pString); // 715
			KeyValues3::GetValueAsNumeric<int>(); // 694
			KeyValues3::GetValueAsNumeric<int>(); // 184
			KeyValues3::GetValueInt(); // 2310
			operator()(const class* __closure,
					int element,
					const KeyValues3* pArrayElement); // 122
		}
		KeyValues3::IterateArrayElements<KeyValues3::GetValueShortArray(
																class& callback);  // 2308
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2260
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2262
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <0010C40D> kv3lib/keyvalues3.cpp:2258
// variables: 11
// function calls: 35
void KeyValues3::GetValueShortArray(int nExpectedInts, short int* pOutValues)
{
	const char   __FUNCTION__; // 26939
	{
		CSplitString split; // 2269
		int nSplitCount; // 2270
		int nNumToUse; // 2271
		int iInt; // 2272
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 30
		CSplitString::CSplitString(
				const char* pString,
				const char* pSeparator);  // 2269
		CUtlVectorBase<char::Count(); // 2270
		Min<int>(const int& val1,
			const int& val2);  // 2271
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 2275
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 40
		CSplitString::~CSplitString(); // 2288
	}
	{
		int nCount; // 2291
		int i; // 2292
		Min<int>(const int& val1,
			const int& val2);  // 2291
	}
	{
		int nArrayCount; // 2308
		{
			int iInt; // 2314
		}
		{
			int i; // 120
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 696
			{
			}
			KV3Helper_StringToNumber<int>(const char* pString); // 715
			KeyValues3::GetValueAsNumeric<int>(); // 694
			KeyValues3::GetValueAsNumeric<int>(); // 184
			KeyValues3::GetValueInt(); // 2310
			operator()(const class* __closure,
					int element,
					const KeyValues3* pArrayElement); // 122
		}
		KeyValues3::IterateArrayElements<KeyValues3::GetValueShortArray(
																class& callback);  // 2308
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2260
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2262
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <0556A126> kv3lib/keyvalues3.cpp:2327
// variables: 3
// function calls: 15
void KeyValues3::GetValueFloatArrayAsString(int nExpectedFloats, CUtlString* pOutString)
{
	int nArrayCount; // 2329
	CUtlString temp; // 2332
	{
		int iFloat; // 2333
		KeyValues3::GetArrayElement(
				int nIndex);  // 2337
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		KV3Helper_StringToNumber<float>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<float>(); // 694
		{
		}
		KeyValues3::GetValueAsNumeric<float>(); // 199
		KeyValues3::GetValueFloat(); // 2426
		KeyValues3::GetValueFloatAsString(
					CUtlString* pOutString);  // 2337
		CUtlString::operator=(
				const char* src);  // 2341
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 2348
	}
	CUtlString::operator=(
			const char* src);  // 2330
	CUtlString::CUtlString(); // 2332
	CUtlString::~CUtlString(); // 2352
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <0556996A> kv3lib/keyvalues3.cpp:2357
// variables: 3
// function calls: 30
void KeyValues3::SetValueIntArrayFromString(int nInts, const char* pString)
{
	CSplitString split; // 2359
	int nStringParts; // 2360
	{
		int iInt; // 2363
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 2367
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 209
		KeyValues3::SetValueInt(
				int value);  // 2371
	}
	CUtlMemory<char::ValidateGrowSize(); // 475
	CUtlMemory<char::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<char::ResetDbgInfo(); // 530
	CUtlVectorBase<char::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<char::CUtlVector(); // 30
	CSplitString::CSplitString(
			const char* pString,
			const char* pSeparator);  // 2359
	CUtlVectorBase<char::Count(); // 2360
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1222
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1224
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1226
	KeyValues3::SetArrayElementCount(
				int nCount,
				KeyValues3Type_t nType);  // 2362
	CUtlVectorBase<char::RemoveAll(); // 1798
	CUtlMemory<char::IsExternallyAllocated(); // 905
	CUtlMemory<char::Purge(); // 903
	CUtlMemory<char::Purge(); // 1799
	CUtlVectorBase<char::Purge(); // 560
	ValidateAlignment<char*>(void); // 508
	CUtlMemory<char::Purge(); // 510
	CUtlMemory<char::~CUtlMemory(); // 562
	CUtlVectorBase<char::~CUtlVectorBase(); // 410
	CUtlVector<char::~CUtlVector(); // 40
	CSplitString::~CSplitString(); // 2376
} /* size: 0, variables: 2, inline expansions: 25 (0 bytes) */

// <05569402> kv3lib/keyvalues3.cpp:2381
// variables: 3
// function calls: 16
void KeyValues3::GetValueIntArrayAsString(int nExpectedInts, CUtlString* pOutString)
{
	int nArrayCount; // 2383
	CUtlString temp; // 2386
	{
		int iInt; // 2387
		KeyValues3::GetArrayElement(
				int nIndex);  // 2391
		KeyValues3::Internal_Type(); // 1604
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		{
		}
		KV3Helper_StringToNumber<long long int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<long long int>(); // 694
		KeyValues3::GetValueAsNumeric<long long int>(); // 189
		KeyValues3::GetValueInt64(); // 1610
		KeyValues3::GetValueIntAsString(
					CUtlString* pOutString);  // 1602
		KeyValues3::GetValueIntAsString(
					CUtlString* pOutString);  // 2391
		CUtlString::operator=(
				const char* src);  // 2395
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 2402
	}
	CUtlString::operator=(
			const char* src);  // 2384
	CUtlString::CUtlString(); // 2386
	CUtlString::~CUtlString(); // 2406
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <0556928B> kv3lib/keyvalues3.cpp:2411
// variable: 1
// function calls: 3
void KeyValues3::SetValueFloatFromString(const char* pString)
{
	double doubleValue; // 2413
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 2418
} /* size: 148, variables: 1, inline expansions: 3 (107 bytes) */

// <055836D5> kv3lib/keyvalues3.cpp:2424
// function calls: 7
void KeyValues3::GetValueFloatAsString(CUtlString* pOutString)
{
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	KV3Helper_StringToNumber<float>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<float>(); // 694
	{
	}
	KeyValues3::GetValueAsNumeric<float>(); // 199
	KeyValues3::GetValueFloat(); // 2426
} /* size: 0, inline expansions: 7 (0 bytes) */

// <05569261> kv3lib/keyvalues3.cpp:2424
void KeyValues3::GetValueFloatAsString(CUtlString* pOutString)
{
} /* size: 0 */

// <05568F9F> kv3lib/keyvalues3.cpp:2432
// function calls: 9
void KeyValues3::SetValueBoolFromString(const char* pString)
{
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 2436
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 2440
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 2444
} /* size: 195, inline expansions: 9 (258 bytes) */

// <05568CA6> kv3lib/keyvalues3.cpp:2451
// function calls: 10
void KeyValues3::GetValueBoolAsString(CUtlString* pOutString)
{
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 1333
	{
	}
	KV3Helper_StringToNumber<int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<int>(); // 694
	KeyValues3::GetValueAsNumeric<int>(); // 1335
	KeyValues3::GetValueBool(); // 1331
	KeyValues3::GetValueBool(); // 2453
	CUtlString::operator=(
			const char* src);  // 2455
	CUtlString::operator=(
			const char* src);  // 2459
} /* size: 0, inline expansions: 10 (0 bytes) */

// <05568B4A> kv3lib/keyvalues3.cpp:2466
// variables: 3
// function call: 1
void KeyValues3::SetMemberFloatArray(CKV3MemberName memberName, int nFloats, const float* pValues)
{
	KeyValues3* pMember; // 2468
	const char   __FUNCTION__; // 35910
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2469
	}
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 2468
} /* size: 0, variables: 2, inline expansions: 1 (13 bytes) */

// <028E0544> kv3lib/keyvalues3.cpp:2466
// variables: 3
// function call: 1
void KeyValues3::SetMemberFloatArray(CKV3MemberName memberName, int nFloats, const float* pValues)
{
	KeyValues3* pMember; // 2468
	const char   __FUNCTION__; // 54581
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2469
	}
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 2468
} /* size: 0, variables: 2, inline expansions: 1 (13 bytes) */

// <01245776> kv3lib/keyvalues3.cpp:2466
// variables: 3
// function call: 1
void KeyValues3::SetMemberFloatArray(CKV3MemberName memberName, int nFloats, const float* pValues)
{
	KeyValues3* pMember; // 2468
	const char   __FUNCTION__; // 16165
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2469
	}
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 2468
} /* size: 0, variables: 2, inline expansions: 1 (13 bytes) */

// <002C0F3B> kv3lib/keyvalues3.cpp:2466
// variables: 3
// function call: 1
void KeyValues3::SetMemberFloatArray(CKV3MemberName memberName, int nFloats, const float* pValues)
{
	KeyValues3* pMember; // 2468
	const char   __FUNCTION__; // 2332
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2469
	}
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 2468
} /* size: 0, variables: 2, inline expansions: 1 (13 bytes) */

// <0062613D> kv3lib/keyvalues3.cpp:2466
// variables: 3
// function call: 1
void KeyValues3::SetMemberFloatArray(CKV3MemberName memberName, int nFloats, const float* pValues)
{
	KeyValues3* pMember; // 2468
	const char   __FUNCTION__; // 28318
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2469
	}
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 2468
} /* size: 0, variables: 2, inline expansions: 1 (13 bytes) */

// <009FDDC4> kv3lib/keyvalues3.cpp:2466
// variables: 3
// function call: 1
void KeyValues3::SetMemberFloatArray(CKV3MemberName memberName, int nFloats, const float* pValues)
{
	KeyValues3* pMember; // 2468
	const char   __FUNCTION__; // 34469
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2469
	}
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 2468
} /* size: 0, variables: 2, inline expansions: 1 (13 bytes) */

// <0010A945> kv3lib/keyvalues3.cpp:2466
// variables: 3
// function call: 1
void KeyValues3::SetMemberFloatArray(CKV3MemberName memberName, int nFloats, const float* pValues)
{
	KeyValues3* pMember; // 2468
	const char   __FUNCTION__; // 26966
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2469
	}
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 2468
} /* size: 0, variables: 2, inline expansions: 1 (13 bytes) */

// <05568620> kv3lib/keyvalues3.cpp:2476
// variable: 1
// function calls: 19
void KeyValues3::GetMemberFloatArray(CKV3MemberName memberName, int nFloats, float* pOutValues)
{
	{
		const KeyValues3* pMember; // 2478
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 2528
		KeyValues3::GetTable(); // 2531
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 2531
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3338
		{
		}
		CUtlMemory<KeyValues3::operator[](
				int i);  // 588
		CUtlVectorBase<KeyValues3::operator[](
				int i);  // 3345
		CKeyValues3Table::MemberData(
				int nIndex);  // 2535
		KeyValues3::Internal_FindMember(
					CKV3MemberName memberName,
					uint& nextPropertyHint,
					KeyValues3* pDefaultValue);  // 2520
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 2520
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				uint& nNextValueHint,
				KeyValues3* pDefaultValue);  // 96
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 101
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 101
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				const KeyValues3* pDefaultValue);  // 2478
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 2478
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 2484
	}
} /* size: 0 */

// <05568184> kv3lib/keyvalues3.cpp:2492
// variable: 1
// function calls: 17
void KeyValues3::GetMemberColor(CKV3MemberName memberName, const Color& defaultValue)
{
	const KeyValues3* pMember; // 2494
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2528
	KeyValues3::GetTable(); // 2531
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 2531
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3338
	{
	}
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3345
	CKeyValues3Table::MemberData(
			int nIndex);  // 2535
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				uint& nextPropertyHint,
				KeyValues3* pDefaultValue);  // 943
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 943
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				uint& nNextPropertyHint,
				const KeyValues3* pDefaultValue);  // 941
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 941
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				const KeyValues3* pDefaultValue);  // 2494
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 2494
	Color::Color(); // 4873
	KeyValues3::GetValueColor(
			const Color& defaultValue);  // 2498
} /* size: 0, variables: 1, inline expansions: 17 (0 bytes) */

// <05567C15> kv3lib/keyvalues3.cpp:2504
// variable: 1
// function calls: 22
void KeyValues3::Internal_FindOrCreateMemberAimedAtExternalName(CKV3MemberName memberName)
{
	int nMemberIndex; // 2511
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2506
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 2508
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 2511
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 2511
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 3194
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 3209
	CKeyValues3Table::FindOrCreateMember_Internal(
					KeyValues3* pParent,
					CKV3MemberName memberName,
					bool bUseExternalStorageForName,
					bool* pOutCreated);  // 3191
	CKeyValues3Table::FindOrCreateMember_Internal(
					KeyValues3* pParent,
					CKV3MemberName memberName,
					bool bUseExternalStorageForName,
					bool* pOutCreated);  // 2511
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 2512
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3338
	{
	}
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3345
	CKeyValues3Table::MemberData(
			int nIndex);  // 2512
} /* size: 0, variables: 1, inline expansions: 22 (431 bytes) */

// <05584E60> kv3lib/keyvalues3.cpp:2518
// function calls: 15
void KeyValues3::FindMember(CKV3MemberName memberName, uint& nNextValueHint, KeyValues3* pDefaultValue)
{
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 2520
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2528
	KeyValues3::GetTable(); // 2531
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 2531
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 2535
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3338
	{
	}
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3345
	CKeyValues3Table::MemberData(
			int nIndex);  // 2535
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				uint& nextPropertyHint,
				KeyValues3* pDefaultValue);  // 2520
} /* size: 0, inline expansions: 15 (358 bytes) */

// <05567BD1> kv3lib/keyvalues3.cpp:2518
void KeyValues3::FindMember(CKV3MemberName memberName, uint& nNextValueHint, KeyValues3* pDefaultValue)
{
} /* size: 0 */

// <05584B41> kv3lib/keyvalues3.cpp:2526
// variable: 1
// function calls: 13
void KeyValues3::Internal_FindMember(CKV3MemberName memberName, uint& nextPropertyHint, KeyValues3* pDefaultValue)
{
	int nMemberIndex; // 2531
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2528
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 2531
	KeyValues3::GetTable(); // 2531
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 2535
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3338
	{
	}
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3345
	CKeyValues3Table::MemberData(
			int nIndex);  // 2535
} /* size: 0, variables: 1, inline expansions: 13 (189 bytes) */

// <05567B80> kv3lib/keyvalues3.cpp:2526
// variable: 1
void KeyValues3::Internal_FindMember(CKV3MemberName memberName, uint& nextPropertyHint, KeyValues3* pDefaultValue)
{
	int nMemberIndex; // 2531
} /* size: 0, variables: 1 */

// <055838C5> kv3lib/keyvalues3.cpp:2541
// function calls: 6
void KeyValues3::GetMemberCount()
{
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2543
	KeyValues3::GetTable(); // 2546
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
	CKeyValues3Table::Count(); // 2546
} /* size: 30, inline expansions: 6 (34 bytes) */

// <05567B63> kv3lib/keyvalues3.cpp:2541
void KeyValues3::GetMemberCount()
{
} /* size: 0 */

// <055839F1> kv3lib/keyvalues3.cpp:2552
// variable: 1
// function calls: 9
void KeyValues3::GetMember(int nIndex)
{
	CKeyValues3Table* pTable; // 2557
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2554
	KeyValues3::GetTable(); // 2557
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
	CKeyValues3Table::Count(); // 2558
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3345
	CKeyValues3Table::MemberData(
			int nIndex);  // 2561
} /* size: 48, variables: 1, inline expansions: 9 (41 bytes) */

// <05567B2C> kv3lib/keyvalues3.cpp:2552
// variable: 1
void KeyValues3::GetMember(int nIndex)
{
	CKeyValues3Table* pTable; // 2557
} /* size: 0, variables: 1 */

// <05583BDE> kv3lib/keyvalues3.cpp:2567
// variable: 1
// function calls: 9
void KeyValues3::GetMember(int nIndex)
{
	const CKeyValues3Table* pTable; // 2572
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2569
	KeyValues3::GetTable(); // 2572
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
	CKeyValues3Table::Count(); // 2573
	CUtlMemory<KeyValues3::operator[](
			int i);  // 595
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3360
	CKeyValues3Table::MemberData(
			int nIndex);  // 2576
} /* size: 48, variables: 1, inline expansions: 9 (41 bytes) */

// <05567AF5> kv3lib/keyvalues3.cpp:2567
// variable: 1
void KeyValues3::GetMember(int nIndex)
{
	const CKeyValues3Table* pTable; // 2572
} /* size: 0, variables: 1 */

// <05583DCB> kv3lib/keyvalues3.cpp:2582
// variable: 1
// function calls: 9
void KeyValues3::GetMemberName(int nIndex)
{
	const CKeyValues3Table* pTable; // 2587
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2584
	KeyValues3::GetTable(); // 2587
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
	CKeyValues3Table::Count(); // 2588
	CUtlMemory<char const::operator[](
			int i);  // 595
	CUtlVectorBase<char const::operator[](
			int i);  // 3375
	CKeyValues3Table::MemberName(
			int nIndex);  // 2591
} /* size: 51, variables: 1, inline expansions: 9 (44 bytes) */

// <05567ABE> kv3lib/keyvalues3.cpp:2582
// variable: 1
void KeyValues3::GetMemberName(int nIndex)
{
	const CKeyValues3Table* pTable; // 2587
} /* size: 0, variables: 1 */

// <05585561> kv3lib/keyvalues3.cpp:2597
// variable: 1
// function calls: 8
void KeyValues3::GetKV3MemberName(int nIndex)
{
	const CKeyValues3Table* pTable; // 2602
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2599
	CUtlStringToken::CUtlStringToken(); // 8
	CKV3MemberName::CKV3MemberName(); // 2604
	KeyValues3::GetTable(); // 2602
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
	CKeyValues3Table::Count(); // 2603
} /* size: 0, variables: 1, inline expansions: 8 (0 bytes) */

// <05567A87> kv3lib/keyvalues3.cpp:2597
// variable: 1
void KeyValues3::GetKV3MemberName(int nIndex)
{
	const CKeyValues3Table* pTable; // 2602
} /* size: 0, variables: 1 */

// <055676B0> kv3lib/keyvalues3.cpp:2612
// variable: 1
// function calls: 15
void KeyValues3::GetMemberNameEscaped(int nIndex, CBufferString* pOutName)
{
	const char* pName; // 2614
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2584
	KeyValues3::GetTable(); // 2587
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
	CKeyValues3Table::Count(); // 2588
	CUtlMemory<char const::operator[](
			int i);  // 595
	CUtlVectorBase<char const::operator[](
			int i);  // 3375
	CKeyValues3Table::MemberName(
			int nIndex);  // 2591
	KeyValues3::GetMemberName(
			int nIndex);  // 2614
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1114
	CBufferString::operator=(
			const char* pSrc);  // 2618
} /* size: 151, variables: 1, inline expansions: 15 (258 bytes) */

// <05567536> kv3lib/keyvalues3.cpp:2629
// variable: 1
// function calls: 6
void KeyValues3::RemoveMember(int nIndex)
{
	CKeyValues3Table* pTable; // 2634
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2631
	KeyValues3::GetTable(); // 2634
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
	CKeyValues3Table::Count(); // 2635
} /* size: 64, variables: 1, inline expansions: 6 (24 bytes) */

// <05567371> kv3lib/keyvalues3.cpp:2645
// variables: 3
// function calls: 5
void KeyValues3::RemoveMember(CKV3MemberName memberName)
{
	uint nUnusedHint; // 2650
	CKeyValues3Table* pTable; // 2651
	int nMemberIndex; // 2652
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2647
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 2652
	KeyValues3::GetTable(); // 2651
} /* size: 144, variables: 3, inline expansions: 5 (41 bytes) */

// <05567167> kv3lib/keyvalues3.cpp:2663
// variables: 2
// function calls: 8
void KeyValues3::RemoveMember(KeyValues3* pMember)
{
	CKeyValues3Table* pTable; // 2668
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2665
	KeyValues3::GetTable(); // 2668
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3508
	{
		int i; // 3513
		CUtlMemory<KeyValues3::operator[](
				int i);  // 588
		CUtlVectorBase<KeyValues3::operator[](
				int i);  // 3515
	}
	CKeyValues3Table::Remove(
		KeyValues3* pParent,
		KeyValues3* pMemberData);  // 2669
} /* size: 109, variables: 1, inline expansions: 6 (79 bytes) */

// <05566E3F> kv3lib/keyvalues3.cpp:2675
// variables: 3
// function calls: 10
void KeyValues3::RenameMember(CKV3MemberName oldName, CKV3MemberName newName)
{
	uint nUnusedHint; // 2680
	CKeyValues3Table* pTable; // 2681
	int nMemberIndex; // 2682
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2677
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 2682
	KeyValues3::GetTable(); // 2681
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 2686
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3338
	{
	}
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3345
	CKeyValues3Table::MemberData(
			int nIndex);  // 2688
} /* size: 0, variables: 3, inline expansions: 10 (0 bytes) */

// <05566469> kv3lib/keyvalues3.cpp:2694
// variables: 7
// function calls: 38
void KeyValues3::MergeFrom(const KeyValues3* pSrc, KV3SubtableMergeBehavior_t nSubtableMerge, KV3ArrayMergeBehavior_t nArrayMerge)
{
	{
		int iSrcMember; // 2696
		{
			const KeyValues3* pSrcMember; // 2698
			CKV3MemberName srcMemberName; // 2699
			KeyValues3* pExistingDestMember; // 2701
			{
				int iSrcArray; // 2717
				{
					const KeyValues3* pSrcArrayElement; // 2719
					KeyValues3::GetArrayElement(
							int nIndex);  // 2719
				}
			}
			{
				KeyValues3* pNewDestMember; // 2727
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 2727
			}
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 2712
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 2704
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 2704
			KeyValues3::GetKV3MemberName(
					int nIndex);  // 2699
			CUtlMemory<KeyValues3::operator[](
					int i);  // 595
			CUtlVectorBase<KeyValues3::operator[](
					int i);  // 3360
			CKeyValues3Table::MemberData(
					int nIndex);  // 2576
			KeyValues3::GetMember(
					int nIndex);  // 2698
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 2528
			KeyValues3::GetTable(); // 2531
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 2531
			CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3338
			{
			}
			CUtlMemory<KeyValues3::operator[](
					int i);  // 588
			CUtlVectorBase<KeyValues3::operator[](
					int i);  // 3345
			CKeyValues3Table::MemberData(
					int nIndex);  // 2535
			KeyValues3::Internal_FindMember(
						CKV3MemberName memberName,
						uint& nextPropertyHint,
						KeyValues3* pDefaultValue);  // 2520
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 2520
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					uint& nNextValueHint,
					KeyValues3* pDefaultValue);  // 96
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 96
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					KeyValues3* pDefaultValue);  // 2701
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 2701
		}
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 2543
		KeyValues3::GetTable(); // 2546
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
		CKeyValues3Table::Count(); // 2546
		KeyValues3::GetMemberCount(); // 2696
	}
} /* size: 0 */

// <05566280> kv3lib/keyvalues3.cpp:2736
// variables: 3
// function calls: 6
void KeyValues3::HasMetadata()
{
	CKeyValues3Metadata* pMeta; // 2738
	{
		const KeyValues3* pFirstInCluster; // 490
		CKeyValues3Cluster* pCluster; // 491
	}
	ClusterFromPointer(const KeyValues3* pKV3); // 3928
	{
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 393
	}
	CKV3ClusterAlloc<KeyValues3, 63>::GetIndexForEntry(
			const KeyValues3* pEntry);  // 531
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 532
	}
	CKeyValues3Cluster::GetMetadataForKV3(
				const KeyValues3* pKV3);  // 3942
	KeyValues3::Internal_GetMetadata(
				CKeyValues3Context** pOutContext);  // 2738
} /* size: 0, variables: 1, inline expansions: 4 (267 bytes) */

// <0556611B> kv3lib/keyvalues3.cpp:2745
// variables: 3
// function calls: 4
void KeyValues3::HasMetadataText()
{
	CKeyValues3Metadata* pMeta; // 2747
	{
		const KeyValues3* pFirstInCluster; // 490
		CKeyValues3Cluster* pCluster; // 491
	}
	ClusterFromPointer(const KeyValues3* pKV3); // 3928
	KeyValues3::Internal_GetMetadata(
				CKeyValues3Context** pOutContext);  // 2747
	CBufferString::IsEmpty(); // 2751
	CBufferString::IsEmpty(); // 2751
} /* size: 95, variables: 1, inline expansions: 4 (67 bytes) */

// <05565F7A> kv3lib/keyvalues3.cpp:2757
// variables: 3
// function calls: 3
void KeyValues3::Metadata_GetLineNumber()
{
	CKeyValues3Metadata* pMeta; // 2759
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 2760
	}
	{
		const KeyValues3* pFirstInCluster; // 490
		CKeyValues3Cluster* pCluster; // 491
	}
	ClusterFromPointer(const KeyValues3* pKV3); // 3928
	KeyValues3::Internal_GetMetadata(
				CKeyValues3Context** pOutContext);  // 2759
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <05565DA4> kv3lib/keyvalues3.cpp:2769
// variables: 3
// function calls: 4
void KeyValues3::Metadata_GetFilename()
{
	CKeyValues3Metadata* pMeta; // 2771
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 2772
	}
	{
		const KeyValues3* pFirstInCluster; // 490
		CKeyValues3Cluster* pCluster; // 491
	}
	ClusterFromPointer(const KeyValues3* pKV3); // 3928
	KeyValues3::Internal_GetMetadata(
				CKeyValues3Context** pOutContext);  // 2771
	CUtlSymbolLarge::String(); // 2775
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <05565AF3> kv3lib/keyvalues3.cpp:2781
// variables: 4
// function calls: 5
void KeyValues3::Metadata_SetFileLineNumber(const char* pFilename, int nLine)
{
	CKeyValues3Context* pContext; // 2783
	CKeyValues3Metadata* pMeta; // 2784
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 2785
	}
	{
		const KeyValues3* pFirstInCluster; // 490
		CKeyValues3Cluster* pCluster; // 491
	}
	ClusterFromPointer(const KeyValues3* pKV3); // 3928
	{
	}
	CKV3ClusterAlloc<KeyValues3, 63>::GetParentContext(); // 3940
	KeyValues3::Internal_GetMetadata(
				CKeyValues3Context** pOutContext);  // 2784
	CUtlSymbolLarge::operator=(
			const CUtlSymbolLarge& src);  // 2788
} /* size: 0, variables: 2, inline expansions: 4 (239 bytes) */

// <055656C4> kv3lib/keyvalues3.cpp:2795
// variables: 3
// function calls: 13
void KeyValues3::Metadata_SetPreamblePostamble(const char* pPreamble, const char* pPostamble)
{
	CKeyValues3Metadata* pMeta; // 2797
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 2798
	}
	{
		const KeyValues3* pFirstInCluster; // 490
		CKeyValues3Cluster* pCluster; // 491
	}
	ClusterFromPointer(const KeyValues3* pKV3); // 3928
	KeyValues3::Internal_GetMetadata(
				CKeyValues3Context** pOutContext);  // 2797
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1114
	CBufferString::operator=(
			const char* pSrc);  // 2801
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1114
	CBufferString::operator=(
			const char* pSrc);  // 2802
} /* size: 0, variables: 1, inline expansions: 12 (394 bytes) */

// <055654A4> kv3lib/keyvalues3.cpp:2808
// variables: 3
// function calls: 6
void KeyValues3::Metadata_GetPreamble()
{
	CKeyValues3Metadata* pMeta; // 2810
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 2811
	}
	{
		const KeyValues3* pFirstInCluster; // 490
		CKeyValues3Cluster* pCluster; // 491
	}
	ClusterFromPointer(const KeyValues3* pKV3); // 3928
	KeyValues3::Internal_GetMetadata(
				CKeyValues3Context** pOutContext);  // 2810
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 2814
} /* size: 0, variables: 1, inline expansions: 5 (147 bytes) */

// <05565284> kv3lib/keyvalues3.cpp:2820
// variables: 3
// function calls: 6
void KeyValues3::Metadata_GetPostamble()
{
	CKeyValues3Metadata* pMeta; // 2822
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 2823
	}
	{
		const KeyValues3* pFirstInCluster; // 490
		CKeyValues3Cluster* pCluster; // 491
	}
	ClusterFromPointer(const KeyValues3* pKV3); // 3928
	KeyValues3::Internal_GetMetadata(
				CKeyValues3Context** pOutContext);  // 2822
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 2826
} /* size: 0, variables: 1, inline expansions: 5 (147 bytes) */

// <05583FB8> kv3lib/keyvalues3.cpp:2832
void KeyValues3::SetFlag(KeyValues3Flag_t nFlag, bool bSet)
{
} /* size: 44 */

// <05564C27> kv3lib/keyvalues3.cpp:2847
// variables: 11
// function calls: 12
void KeyValues3::IsIdenticalTo(const KeyValues3* pOther, bool bAssertOnFailure)
{
	const char   __FUNCTION__; // 35748
	bool bIdentical; // 2867
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2853
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2862
	}
	{
		int nLength; // 2911
		V_memcmp(const void* m1,
			const void* m2,
			int count);  // 2918
	}
	{
		int nCount; // 2924
		{
			int i; // 2931
			{
				const KeyValues3* pElement; // 2933
				const KeyValues3* pOtherElement; // 2934
				KeyValues3::GetArrayElement(
						int nIndex);  // 2933
				KeyValues3::GetArrayElement(
						int nIndex);  // 2934
			}
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2949
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2956
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2849
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2849
	KeyValues3::GetTable(); // 2944
	KeyValues3::GetTable(); // 2944
	V_strcmp(const char* s1,
		const char* s2);  // 2905
} /* size: 0, variables: 2, inline expansions: 9 (57 bytes) */

// <028DC621> kv3lib/keyvalues3.cpp:2847
// variables: 11
// function calls: 12
void KeyValues3::IsIdenticalTo(const KeyValues3* pOther, bool bAssertOnFailure)
{
	const char   __FUNCTION__; // 54419
	bool bIdentical; // 2867
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2853
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2862
	}
	{
		int nLength; // 2911
		V_memcmp(const void* m1,
			const void* m2,
			int count);  // 2918
	}
	{
		int nCount; // 2924
		{
			int i; // 2931
			{
				const KeyValues3* pElement; // 2933
				const KeyValues3* pOtherElement; // 2934
				KeyValues3::GetArrayElement(
						int nIndex);  // 2933
				KeyValues3::GetArrayElement(
						int nIndex);  // 2934
			}
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2949
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2956
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2849
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2849
	KeyValues3::GetTable(); // 2944
	KeyValues3::GetTable(); // 2944
	V_strcmp(const char* s1,
		const char* s2);  // 2905
} /* size: 0, variables: 2, inline expansions: 9 (57 bytes) */

// <01241853> kv3lib/keyvalues3.cpp:2847
// variables: 11
// function calls: 12
void KeyValues3::IsIdenticalTo(const KeyValues3* pOther, bool bAssertOnFailure)
{
	const char   __FUNCTION__; // 16003
	bool bIdentical; // 2867
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2853
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2862
	}
	{
		int nLength; // 2911
		V_memcmp(const void* m1,
			const void* m2,
			int count);  // 2918
	}
	{
		int nCount; // 2924
		{
			int i; // 2931
			{
				const KeyValues3* pElement; // 2933
				const KeyValues3* pOtherElement; // 2934
				KeyValues3::GetArrayElement(
						int nIndex);  // 2933
				KeyValues3::GetArrayElement(
						int nIndex);  // 2934
			}
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2949
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2956
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2849
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2849
	KeyValues3::GetTable(); // 2944
	KeyValues3::GetTable(); // 2944
	V_strcmp(const char* s1,
		const char* s2);  // 2905
} /* size: 0, variables: 2, inline expansions: 9 (57 bytes) */

// <002BD018> kv3lib/keyvalues3.cpp:2847
// variables: 11
// function calls: 12
void KeyValues3::IsIdenticalTo(const KeyValues3* pOther, bool bAssertOnFailure)
{
	const char   __FUNCTION__; // 2170
	bool bIdentical; // 2867
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2853
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2862
	}
	{
		int nLength; // 2911
		V_memcmp(const void* m1,
			const void* m2,
			int count);  // 2918
	}
	{
		int nCount; // 2924
		{
			int i; // 2931
			{
				const KeyValues3* pElement; // 2933
				const KeyValues3* pOtherElement; // 2934
				KeyValues3::GetArrayElement(
						int nIndex);  // 2933
				KeyValues3::GetArrayElement(
						int nIndex);  // 2934
			}
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2949
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2956
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2849
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2849
	KeyValues3::GetTable(); // 2944
	KeyValues3::GetTable(); // 2944
	V_strcmp(const char* s1,
		const char* s2);  // 2905
} /* size: 0, variables: 2, inline expansions: 9 (57 bytes) */

// <0062221A> kv3lib/keyvalues3.cpp:2847
// variables: 11
// function calls: 12
void KeyValues3::IsIdenticalTo(const KeyValues3* pOther, bool bAssertOnFailure)
{
	const char   __FUNCTION__; // 28156
	bool bIdentical; // 2867
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2853
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2862
	}
	{
		int nLength; // 2911
		V_memcmp(const void* m1,
			const void* m2,
			int count);  // 2918
	}
	{
		int nCount; // 2924
		{
			int i; // 2931
			{
				const KeyValues3* pElement; // 2933
				const KeyValues3* pOtherElement; // 2934
				KeyValues3::GetArrayElement(
						int nIndex);  // 2933
				KeyValues3::GetArrayElement(
						int nIndex);  // 2934
			}
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2949
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2956
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2849
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2849
	KeyValues3::GetTable(); // 2944
	KeyValues3::GetTable(); // 2944
	V_strcmp(const char* s1,
		const char* s2);  // 2905
} /* size: 0, variables: 2, inline expansions: 9 (57 bytes) */

// <009F9EA1> kv3lib/keyvalues3.cpp:2847
// variables: 11
// function calls: 12
void KeyValues3::IsIdenticalTo(const KeyValues3* pOther, bool bAssertOnFailure)
{
	const char   __FUNCTION__; // 34307
	bool bIdentical; // 2867
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2853
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2862
	}
	{
		int nLength; // 2911
		V_memcmp(const void* m1,
			const void* m2,
			int count);  // 2918
	}
	{
		int nCount; // 2924
		{
			int i; // 2931
			{
				const KeyValues3* pElement; // 2933
				const KeyValues3* pOtherElement; // 2934
				KeyValues3::GetArrayElement(
						int nIndex);  // 2933
				KeyValues3::GetArrayElement(
						int nIndex);  // 2934
			}
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2949
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2956
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2849
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2849
	KeyValues3::GetTable(); // 2944
	KeyValues3::GetTable(); // 2944
	V_strcmp(const char* s1,
		const char* s2);  // 2905
} /* size: 0, variables: 2, inline expansions: 9 (57 bytes) */

// <00106A22> kv3lib/keyvalues3.cpp:2847
// variables: 11
// function calls: 12
void KeyValues3::IsIdenticalTo(const KeyValues3* pOther, bool bAssertOnFailure)
{
	const char   __FUNCTION__; // 26804
	bool bIdentical; // 2867
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2853
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2862
	}
	{
		int nLength; // 2911
		V_memcmp(const void* m1,
			const void* m2,
			int count);  // 2918
	}
	{
		int nCount; // 2924
		{
			int i; // 2931
			{
				const KeyValues3* pElement; // 2933
				const KeyValues3* pOtherElement; // 2934
				KeyValues3::GetArrayElement(
						int nIndex);  // 2933
				KeyValues3::GetArrayElement(
						int nIndex);  // 2934
			}
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2949
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2956
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2849
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2849
	KeyValues3::GetTable(); // 2944
	KeyValues3::GetTable(); // 2944
	V_strcmp(const char* s1,
		const char* s2);  // 2905
} /* size: 0, variables: 2, inline expansions: 9 (57 bytes) */

// <05563D36> kv3lib/keyvalues3.cpp:2964
// variables: 9
// function calls: 57
void KeyValues3::CopyFrom(const KeyValues3* pOther)
{
	KeyValues3Type_t nOtherType; // 2974
	const char   __FUNCTION__; // 35618
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 2966
	}
	{
		const byte* pBlob; // 2997
		int nBlobSize; // 2998
		KeyValues3BinaryBlob_t::AsByteArray(); // 1074
		KeyValues3BinaryBlobExternal_t::AsByteArray(); // 1070
		KeyValues3::Internal_BinaryBlobBase(); // 1066
		KeyValues3::Internal_BinaryBlobBase(); // 2997
		KeyValues3::Internal_BinaryBlobSize(); // 1110
		KeyValues3::Internal_BinaryBlobSize(); // 2998
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1171
		KeyValues3::SetToBinaryBlob(
				const byte* pData,
				int nSize);  // 3001
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1180
		KeyValues3::SetToZeroedBinaryBlob(
					int nSize);  // 3006
	}
	{
		int nCount; // 3012
		{
			int i; // 3014
			{
				const KeyValues3* pOtherElement; // 3016
				KeyValues3* pElement; // 3017
				KeyValues3::GetArrayElement(
						int nIndex);  // 3016
			}
		}
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1222
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1224
		KeyValues3::Internal_SetArrayCount(
					int nCount,
					KeyValues3Type_t nType);  // 1226
		KeyValues3::SetArrayElementCount(
					int nCount,
					KeyValues3Type_t nType);  // 3013
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3031
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 2969
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2974
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 2981
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 903
	KeyValues3::ReserveTableCapacity(
				uint nTableSize);  // 895
	KeyValues3::SetToEmptyTable(); // 3024
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 3025
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 880
	KeyValues3::GetTable(); // 3025
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 2984
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 2984
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 2987
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 2987
	KeyValues3::GetValueAsNumeric<double>(); // 204
	KeyValues3::GetValueDouble(); // 2990
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 2990
} /* size: 0, variables: 2, inline expansions: 36 (710 bytes) */

// <028DB730> kv3lib/keyvalues3.cpp:2964
// variables: 9
// function calls: 57
void KeyValues3::CopyFrom(const KeyValues3* pOther)
{
	KeyValues3Type_t nOtherType; // 2974
	const char   __FUNCTION__; // 54289
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 2966
	}
	{
		const byte* pBlob; // 2997
		int nBlobSize; // 2998
		KeyValues3BinaryBlob_t::AsByteArray(); // 1074
		KeyValues3BinaryBlobExternal_t::AsByteArray(); // 1070
		KeyValues3::Internal_BinaryBlobBase(); // 1066
		KeyValues3::Internal_BinaryBlobBase(); // 2997
		KeyValues3::Internal_BinaryBlobSize(); // 1110
		KeyValues3::Internal_BinaryBlobSize(); // 2998
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1171
		KeyValues3::SetToBinaryBlob(
				const byte* pData,
				int nSize);  // 3001
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1180
		KeyValues3::SetToZeroedBinaryBlob(
					int nSize);  // 3006
	}
	{
		int nCount; // 3012
		{
			int i; // 3014
			{
				const KeyValues3* pOtherElement; // 3016
				KeyValues3* pElement; // 3017
				KeyValues3::GetArrayElement(
						int nIndex);  // 3016
			}
		}
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1222
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1224
		KeyValues3::Internal_SetArrayCount(
					int nCount,
					KeyValues3Type_t nType);  // 1226
		KeyValues3::SetArrayElementCount(
					int nCount,
					KeyValues3Type_t nType);  // 3013
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3031
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 2969
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2974
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 2981
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 903
	KeyValues3::ReserveTableCapacity(
				uint nTableSize);  // 895
	KeyValues3::SetToEmptyTable(); // 3024
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 3025
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 880
	KeyValues3::GetTable(); // 3025
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 2984
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 2984
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 2987
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 2987
	KeyValues3::GetValueAsNumeric<double>(); // 204
	KeyValues3::GetValueDouble(); // 2990
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 2990
} /* size: 0, variables: 2, inline expansions: 36 (710 bytes) */

// <01240962> kv3lib/keyvalues3.cpp:2964
// variables: 9
// function calls: 57
void KeyValues3::CopyFrom(const KeyValues3* pOther)
{
	KeyValues3Type_t nOtherType; // 2974
	const char   __FUNCTION__; // 15873
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 2966
	}
	{
		const byte* pBlob; // 2997
		int nBlobSize; // 2998
		KeyValues3BinaryBlob_t::AsByteArray(); // 1074
		KeyValues3BinaryBlobExternal_t::AsByteArray(); // 1070
		KeyValues3::Internal_BinaryBlobBase(); // 1066
		KeyValues3::Internal_BinaryBlobBase(); // 2997
		KeyValues3::Internal_BinaryBlobSize(); // 1110
		KeyValues3::Internal_BinaryBlobSize(); // 2998
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1171
		KeyValues3::SetToBinaryBlob(
				const byte* pData,
				int nSize);  // 3001
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1180
		KeyValues3::SetToZeroedBinaryBlob(
					int nSize);  // 3006
	}
	{
		int nCount; // 3012
		{
			int i; // 3014
			{
				const KeyValues3* pOtherElement; // 3016
				KeyValues3* pElement; // 3017
				KeyValues3::GetArrayElement(
						int nIndex);  // 3016
			}
		}
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1222
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1224
		KeyValues3::Internal_SetArrayCount(
					int nCount,
					KeyValues3Type_t nType);  // 1226
		KeyValues3::SetArrayElementCount(
					int nCount,
					KeyValues3Type_t nType);  // 3013
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3031
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 2969
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2974
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 2981
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 903
	KeyValues3::ReserveTableCapacity(
				uint nTableSize);  // 895
	KeyValues3::SetToEmptyTable(); // 3024
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 3025
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 880
	KeyValues3::GetTable(); // 3025
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 2984
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 2984
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 2987
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 2987
	KeyValues3::GetValueAsNumeric<double>(); // 204
	KeyValues3::GetValueDouble(); // 2990
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 2990
} /* size: 0, variables: 2, inline expansions: 36 (710 bytes) */

// <002BC127> kv3lib/keyvalues3.cpp:2964
// variables: 9
// function calls: 57
void KeyValues3::CopyFrom(const KeyValues3* pOther)
{
	KeyValues3Type_t nOtherType; // 2974
	const char   __FUNCTION__; // 2040
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 2966
	}
	{
		const byte* pBlob; // 2997
		int nBlobSize; // 2998
		KeyValues3BinaryBlob_t::AsByteArray(); // 1074
		KeyValues3BinaryBlobExternal_t::AsByteArray(); // 1070
		KeyValues3::Internal_BinaryBlobBase(); // 1066
		KeyValues3::Internal_BinaryBlobBase(); // 2997
		KeyValues3::Internal_BinaryBlobSize(); // 1110
		KeyValues3::Internal_BinaryBlobSize(); // 2998
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1171
		KeyValues3::SetToBinaryBlob(
				const byte* pData,
				int nSize);  // 3001
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1180
		KeyValues3::SetToZeroedBinaryBlob(
					int nSize);  // 3006
	}
	{
		int nCount; // 3012
		{
			int i; // 3014
			{
				const KeyValues3* pOtherElement; // 3016
				KeyValues3* pElement; // 3017
				KeyValues3::GetArrayElement(
						int nIndex);  // 3016
			}
		}
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1222
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1224
		KeyValues3::Internal_SetArrayCount(
					int nCount,
					KeyValues3Type_t nType);  // 1226
		KeyValues3::SetArrayElementCount(
					int nCount,
					KeyValues3Type_t nType);  // 3013
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3031
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 2969
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2974
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 2981
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 903
	KeyValues3::ReserveTableCapacity(
				uint nTableSize);  // 895
	KeyValues3::SetToEmptyTable(); // 3024
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 3025
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 880
	KeyValues3::GetTable(); // 3025
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 2984
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 2984
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 2987
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 2987
	KeyValues3::GetValueAsNumeric<double>(); // 204
	KeyValues3::GetValueDouble(); // 2990
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 2990
} /* size: 0, variables: 2, inline expansions: 36 (710 bytes) */

// <00621329> kv3lib/keyvalues3.cpp:2964
// variables: 9
// function calls: 57
void KeyValues3::CopyFrom(const KeyValues3* pOther)
{
	KeyValues3Type_t nOtherType; // 2974
	const char   __FUNCTION__; // 28026
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 2966
	}
	{
		const byte* pBlob; // 2997
		int nBlobSize; // 2998
		KeyValues3BinaryBlob_t::AsByteArray(); // 1074
		KeyValues3BinaryBlobExternal_t::AsByteArray(); // 1070
		KeyValues3::Internal_BinaryBlobBase(); // 1066
		KeyValues3::Internal_BinaryBlobBase(); // 2997
		KeyValues3::Internal_BinaryBlobSize(); // 1110
		KeyValues3::Internal_BinaryBlobSize(); // 2998
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1171
		KeyValues3::SetToBinaryBlob(
				const byte* pData,
				int nSize);  // 3001
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1180
		KeyValues3::SetToZeroedBinaryBlob(
					int nSize);  // 3006
	}
	{
		int nCount; // 3012
		{
			int i; // 3014
			{
				const KeyValues3* pOtherElement; // 3016
				KeyValues3* pElement; // 3017
				KeyValues3::GetArrayElement(
						int nIndex);  // 3016
			}
		}
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1222
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1224
		KeyValues3::Internal_SetArrayCount(
					int nCount,
					KeyValues3Type_t nType);  // 1226
		KeyValues3::SetArrayElementCount(
					int nCount,
					KeyValues3Type_t nType);  // 3013
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3031
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 2969
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2974
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 2981
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 903
	KeyValues3::ReserveTableCapacity(
				uint nTableSize);  // 895
	KeyValues3::SetToEmptyTable(); // 3024
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 3025
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 880
	KeyValues3::GetTable(); // 3025
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 2984
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 2984
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 2987
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 2987
	KeyValues3::GetValueAsNumeric<double>(); // 204
	KeyValues3::GetValueDouble(); // 2990
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 2990
} /* size: 0, variables: 2, inline expansions: 36 (710 bytes) */

// <009F8FB0> kv3lib/keyvalues3.cpp:2964
// variables: 9
// function calls: 57
void KeyValues3::CopyFrom(const KeyValues3* pOther)
{
	KeyValues3Type_t nOtherType; // 2974
	const char   __FUNCTION__; // 34177
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 2966
	}
	{
		const byte* pBlob; // 2997
		int nBlobSize; // 2998
		KeyValues3BinaryBlob_t::AsByteArray(); // 1074
		KeyValues3BinaryBlobExternal_t::AsByteArray(); // 1070
		KeyValues3::Internal_BinaryBlobBase(); // 1066
		KeyValues3::Internal_BinaryBlobBase(); // 2997
		KeyValues3::Internal_BinaryBlobSize(); // 1110
		KeyValues3::Internal_BinaryBlobSize(); // 2998
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1171
		KeyValues3::SetToBinaryBlob(
				const byte* pData,
				int nSize);  // 3001
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1180
		KeyValues3::SetToZeroedBinaryBlob(
					int nSize);  // 3006
	}
	{
		int nCount; // 3012
		{
			int i; // 3014
			{
				const KeyValues3* pOtherElement; // 3016
				KeyValues3* pElement; // 3017
				KeyValues3::GetArrayElement(
						int nIndex);  // 3016
			}
		}
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1222
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1224
		KeyValues3::Internal_SetArrayCount(
					int nCount,
					KeyValues3Type_t nType);  // 1226
		KeyValues3::SetArrayElementCount(
					int nCount,
					KeyValues3Type_t nType);  // 3013
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3031
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 2969
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2974
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 2981
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 903
	KeyValues3::ReserveTableCapacity(
				uint nTableSize);  // 895
	KeyValues3::SetToEmptyTable(); // 3024
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 3025
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 880
	KeyValues3::GetTable(); // 3025
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 2984
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 2984
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 2987
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 2987
	KeyValues3::GetValueAsNumeric<double>(); // 204
	KeyValues3::GetValueDouble(); // 2990
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 2990
} /* size: 0, variables: 2, inline expansions: 36 (710 bytes) */

// <00105B31> kv3lib/keyvalues3.cpp:2964
// variables: 9
// function calls: 57
void KeyValues3::CopyFrom(const KeyValues3* pOther)
{
	KeyValues3Type_t nOtherType; // 2974
	const char   __FUNCTION__; // 26674
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 2966
	}
	{
		const byte* pBlob; // 2997
		int nBlobSize; // 2998
		KeyValues3BinaryBlob_t::AsByteArray(); // 1074
		KeyValues3BinaryBlobExternal_t::AsByteArray(); // 1070
		KeyValues3::Internal_BinaryBlobBase(); // 1066
		KeyValues3::Internal_BinaryBlobBase(); // 2997
		KeyValues3::Internal_BinaryBlobSize(); // 1110
		KeyValues3::Internal_BinaryBlobSize(); // 2998
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1171
		KeyValues3::SetToBinaryBlob(
				const byte* pData,
				int nSize);  // 3001
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1180
		KeyValues3::SetToZeroedBinaryBlob(
					int nSize);  // 3006
	}
	{
		int nCount; // 3012
		{
			int i; // 3014
			{
				const KeyValues3* pOtherElement; // 3016
				KeyValues3* pElement; // 3017
				KeyValues3::GetArrayElement(
						int nIndex);  // 3016
			}
		}
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 1222
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 1224
		KeyValues3::Internal_SetArrayCount(
					int nCount,
					KeyValues3Type_t nType);  // 1226
		KeyValues3::SetArrayElementCount(
					int nCount,
					KeyValues3Type_t nType);  // 3013
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3031
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 2969
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2974
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 2981
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 903
	KeyValues3::ReserveTableCapacity(
				uint nTableSize);  // 895
	KeyValues3::SetToEmptyTable(); // 3024
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 865
	KeyValues3::GetTable(); // 3025
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 880
	KeyValues3::GetTable(); // 3025
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 2984
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 2984
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 2987
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 2987
	KeyValues3::GetValueAsNumeric<double>(); // 204
	KeyValues3::GetValueDouble(); // 2990
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 2990
} /* size: 0, variables: 2, inline expansions: 36 (710 bytes) */

// <05563441> kv3lib/keyvalues3.cpp:3038
// variables: 5
// function calls: 36
void KeyValues3::CopyMatchingKeysFrom(const KeyValues3* pOther)
{
	CKeyValues3Table* pTable; // 3043
	{
		int iMember; // 3045
		{
			KeyValues3LowercaseHash_t nMemberNameHash; // 3047
			const char* pMemberName; // 3048
			const KeyValues3* pOtherMember; // 3049
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 2528
			KeyValues3::GetTable(); // 2531
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 2531
			CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3338
			{
			}
			CUtlMemory<KeyValues3::operator[](
					int i);  // 588
			CUtlVectorBase<KeyValues3::operator[](
					int i);  // 3345
			CKeyValues3Table::MemberData(
					int nIndex);  // 2535
			KeyValues3::Internal_FindMember(
						CKV3MemberName memberName,
						uint& nextPropertyHint,
						KeyValues3* pDefaultValue);  // 2520
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 2520
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					uint& nNextValueHint,
					KeyValues3* pDefaultValue);  // 96
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 96
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					KeyValues3* pDefaultValue);  // 101
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 101
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					const KeyValues3* pDefaultValue);  // 3049
			CUtlMemory<CUtlStringToken, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
					int i);  // 3390
			CKeyValues3Table::MemberNameHash(
					int nIndex);  // 3047
			CUtlMemory<char const::operator[](
					int i);  // 595
			CUtlVectorBase<char const::operator[](
					int i);  // 3375
			CKeyValues3Table::MemberName(
					int nIndex);  // 3048
			CKV3MemberName::CKV3MemberName(
					const char* pString,
					KeyValues3LowercaseHash_t nHash);  // 3049
			CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3338
			{
			}
			CUtlMemory<KeyValues3::operator[](
					int i);  // 588
			CUtlVectorBase<KeyValues3::operator[](
					int i);  // 3345
			CKeyValues3Table::MemberData(
					int nIndex);  // 3053
		}
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
		CKeyValues3Table::Count(); // 3045
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3040
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3040
	KeyValues3::GetTable(); // 3043
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <05562E3E> kv3lib/keyvalues3.cpp:3060
// variables: 6
// function calls: 24
void KeyValues3::OverlayKeysFrom(const KeyValues3* pOther, bool bRecurseIntoTables)
{
	const CKeyValues3Table* pOtherTable; // 3065
	{
		int iOtherMember; // 3067
		{
			KeyValues3LowercaseHash_t nMemberNameHash; // 3069
			const char* pMemberName; // 3070
			const KeyValues3* pOtherMember; // 3072
			KeyValues3* pThisMember; // 3073
			CUtlMemory<CUtlStringToken, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
					int i);  // 3390
			CKeyValues3Table::MemberNameHash(
					int nIndex);  // 3069
			CUtlMemory<KeyValues3::operator[](
					int i);  // 595
			CUtlVectorBase<KeyValues3::operator[](
					int i);  // 3360
			CKeyValues3Table::MemberData(
					int nIndex);  // 3072
			CUtlMemory<char const::operator[](
					int i);  // 595
			CUtlVectorBase<char const::operator[](
					int i);  // 3375
			CKeyValues3Table::MemberName(
					int nIndex);  // 3070
			CKV3MemberName::CKV3MemberName(
					const char* pString,
					KeyValues3LowercaseHash_t nHash);  // 3073
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 260
			KeyValues3::IsTable(); // 3075
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 260
			KeyValues3::IsTable(); // 3075
		}
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
		CKeyValues3Table::Count(); // 3067
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3062
	KeyValues3::GetTable(); // 3065
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <05562800> kv3lib/keyvalues3.cpp:3089
// function calls: 24
void KeyValues3::MoveFrom(KeyValues3* pOther)
{
	KeyValues3::Internal_Type(); // 3099
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 3095
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 3127
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 3128
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 3131
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 3111
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 3112
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 3101
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 3102
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 3106
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 3119
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 3120
} /* size: 399, inline expansions: 24 (526 bytes) */

// <05561CF9> kv3lib/keyvalues3.cpp:3144
// function calls: 40
void CKeyValues3Table::CKeyValues3Table(int32 nClusterIdx)
{
	{
	}
	AlignedByteArrayExplicit_t<8, CUtlStringToken, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<8, CUtlStringToken>::AlignedByteArray_t(); // 228
	CUtlMemory<CUtlStringToken, int>::CUtlMemory(
			CUtlStringToken* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CUtlStringToken, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CUtlStringToken, int>::CUtlMemoryFixedGrowable_Base(
					CUtlStringToken* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<8, CUtlStringToken, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<CUtlStringToken, 8, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CUtlStringToken, 8>::CUtlVectorFixedGrowable(
				int growSize);  // 3145
	{
	}
	AlignedByteArrayExplicit_t<8, KeyValues3::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<8, KeyValues3::AlignedByteArray_t(); // 228
	CUtlMemory<KeyValues3::CUtlMemory(
			KeyValues3** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<KeyValues3::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<KeyValues3::CUtlMemoryFixedGrowable_Base(
					KeyValues3** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<8, KeyValues3::Base(); // 231
	CUtlMemoryFixedGrowable<KeyValues3::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<KeyValues3::ResetDbgInfo(); // 530
	CUtlVectorBase<KeyValues3::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<KeyValues3::CUtlVectorFixedGrowable(
				int growSize);  // 3145
	{
	}
	AlignedByteArrayExplicit_t<8, char const::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<8, char const::AlignedByteArray_t(); // 228
	CUtlMemory<char const::CUtlMemory(
			const char ** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<char const::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<char const::CUtlMemoryFixedGrowable_Base(
					const char ** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<8, char const::Base(); // 231
	CUtlMemoryFixedGrowable<char const::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<char const::ResetDbgInfo(); // 530
	CUtlVectorBase<char const::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<char const::CUtlVectorFixedGrowable(
				int growSize);  // 3145
	CUtlMemory<unsigned char, int>::CUtlMemory(
			unsigned char* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<unsigned char, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<unsigned char, int>::CUtlMemoryFixedGrowable_Base(
					unsigned char* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<8, unsigned char, 1>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<8, unsigned char>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<8, unsigned char, 1>::Base(); // 231
	CUtlMemoryFixedGrowable<unsigned char, 8, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<unsigned char, 8>::CUtlVectorFixedGrowable(
				int growSize);  // 3145
} /* size: 322, inline expansions: 40 (980 bytes) */

// <05561CD0> kv3lib/keyvalues3.cpp:3144
void CKeyValues3Table::CKeyValues3Table(int32 nClusterIdx)
{
} /* size: 0 */

// <05560EF3> kv3lib/keyvalues3.cpp:3152
// function calls: 74
void CKeyValues3Table::~CKeyValues3Table()
{
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 577
	CUtlMemory<unsigned char, int>::ConvertToExternalMemory(
				unsigned char* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<unsigned char, int>::Purge_FixedGrowable(
				unsigned char* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<unsigned char, int>::Purge_FixedGrowable(
				unsigned char* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<8, unsigned char, 1>::Base(); // 237
	CUtlMemoryFixedGrowable<unsigned char, 8, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned char, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned char, 8, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned char, 8>::~CUtlVectorFixedGrowable(); // 3154
	CUtlVectorBase<char const::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<8, char const::Base(); // 237
	CUtlMemory<char const::IsExternallyAllocated(); // 577
	CUtlMemory<char const::ConvertToExternalMemory(
				const char ** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<char const::Purge_FixedGrowable(
				const char ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<char const::Purge_FixedGrowable(
				const char ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<char const::Purge(
		int numElements);  // 1799
	CUtlMemory<char const::Base(); // 112
	CUtlVectorBase<char const::Base(); // 368
	CUtlVectorBase<char const::ResetDbgInfo(); // 1800
	CUtlVectorBase<char const::Purge(); // 560
	CUtlMemory<char const::Purge(); // 903
	CUtlMemory<char const::Purge(); // 510
	ValidateAlignment<char const*>(void); // 508
	CUtlMemory<char const::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<char const::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<char const::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<char const::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<char const::~CUtlVectorFixedGrowable(); // 3154
	CUtlVectorBase<KeyValues3::RemoveAll(); // 1798
	CUtlMemory<KeyValues3::IsExternallyAllocated(); // 577
	CUtlMemory<KeyValues3::ConvertToExternalMemory(
				KeyValues3** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<KeyValues3::Purge_FixedGrowable(
				KeyValues3** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<KeyValues3::Purge_FixedGrowable(
				KeyValues3** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<8, KeyValues3::Base(); // 237
	CUtlMemoryFixedGrowable<KeyValues3::Purge(
		int numElements);  // 1799
	CUtlMemory<KeyValues3::Base(); // 112
	CUtlVectorBase<KeyValues3::Base(); // 368
	CUtlVectorBase<KeyValues3::ResetDbgInfo(); // 1800
	CUtlVectorBase<KeyValues3::Purge(); // 560
	CUtlMemory<KeyValues3::Purge(); // 903
	CUtlMemory<KeyValues3::Purge(); // 510
	ValidateAlignment<KeyValues3*>(void); // 508
	CUtlMemory<KeyValues3::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<KeyValues3::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<KeyValues3::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<KeyValues3::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<KeyValues3::~CUtlVectorFixedGrowable(); // 3154
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlStringToken, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CUtlStringToken, int>::ConvertToExternalMemory(
				CUtlStringToken* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CUtlStringToken, int>::Purge_FixedGrowable(
				CUtlStringToken* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CUtlStringToken, int>::Purge_FixedGrowable(
				CUtlStringToken* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<8, CUtlStringToken, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<CUtlStringToken, 8, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<CUtlStringToken, int>::Base(); // 112
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Base(); // 368
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Purge(); // 560
	CUtlMemory<CUtlStringToken, int>::Purge(); // 903
	CUtlMemory<CUtlStringToken, int>::Purge(); // 510
	ValidateAlignment<CUtlStringToken>(void); // 508
	CUtlMemory<CUtlStringToken, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CUtlStringToken, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CUtlStringToken, 8, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CUtlStringToken, 8>::~CUtlVectorFixedGrowable(); // 3154
} /* size: 540, inline expansions: 74 (3208 bytes) */

// <05560ED7> kv3lib/keyvalues3.cpp:3152
void CKeyValues3Table::~CKeyValues3Table()
{
} /* size: 0 */

// <055609AE> kv3lib/keyvalues3.cpp:3158
// variables: 5
// function calls: 19
void CKeyValues3Table::Free(KeyValues3* pParent, KeyValues3InternalFreeMode_t nFreeMode)
{
	int nMemberCount; // 3160
	{
		int i; // 3167
		CUtlMemory<KeyValues3::operator[](
				int i);  // 588
		CUtlVectorBase<KeyValues3::operator[](
				int i);  // 3169
	}
	{
		int i; // 3173
		{
			const KeyValues3* pFirstInCluster; // 490
			CKeyValues3Cluster* pCluster; // 491
		}
		ClusterFromPointer(const KeyValues3* pKV3); // 3782
		{
		}
		CKV3ClusterAlloc<KeyValues3, 63>::GetParentContext(); // 3783
		KeyValues3::GetParentContext(); // 3780
		ClusterFromPointer(const KeyValues3* pKV3); // 3782
		KeyValues3::GetParentContext(); // 4424
		FreeSharedString(KeyValues3* pParent,
				const char* pStr);  // 4422
		FreeSharedString(KeyValues3* pParent,
				const char* pStr);  // 3175
		CUtlMemory<char const::operator[](
				int i);  // 588
		CUtlVectorBase<char const::operator[](
				int i);  // 3175
	}
	CUtlVectorBase<KeyValues3::Count(); // 3160
	ValidateAlignment<CUtlHashtableEntry<CUtlStringToken, int> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, unde this); // 235
	LargeTableIndex_t::~LargeTableIndex_t(); // 3178
} /* size: 0, variables: 1, inline expansions: 8 (131 bytes) */

// <05584B11> kv3lib/keyvalues3.cpp:3185
void CKeyValues3Table::Init(KeyValues3* pParent)
{
} /* size: 0 */

// <0558B5B9> kv3lib/keyvalues3.cpp:3191
// variables: 2
// function calls: 3
void CKeyValues3Table::FindOrCreateMember_Internal(KeyValues3* pParent, CKV3MemberName memberName, bool bUseExternalStorageForName, bool* pOutCreated)
{
	uint nUnusedHint; // 3193
	int nExisting; // 3194
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 3194
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 3209
	CKeyValues3Table::FindOrCreateMember_Internal(
					KeyValues3* pParent,
					CKV3MemberName memberName,
					bool bUseExternalStorageForName,
					bool* pOutCreated);  // 3191
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <0556091B> kv3lib/keyvalues3.cpp:3191
// variables: 2
void CKeyValues3Table::FindOrCreateMember_Internal(KeyValues3* pParent, CKV3MemberName memberName, bool bUseExternalStorageForName, bool* pOutCreated)
{
	uint nUnusedHint; // 3193
	int nExisting; // 3194
} /* size: 0, variables: 2 */

// <0555FBDD> kv3lib/keyvalues3.cpp:3214
// variables: 3
// function calls: 54
void CKeyValues3Table::AddMember_Internal(KeyValues3* pParent, CKV3MemberName memberName, bool bUseExternalStorageForName)
{
	int nMemberCount; // 3216
	uint8 nFlags; // 3223
	int nNewIndex; // 3224
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3216
	CUtlMemory<CUtlStringToken, int>::NumAllocated(); // 1196
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Element(
		int i);  // 1201
	CopyConstruct<CUtlStringToken>(CUtlStringToken* pMemory,
					const CUtlStringToken& src);  // 1201
	CUtlMemory<CUtlStringToken, int>::Base(); // 112
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Base(); // 368
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::AddToTail(
			const CUtlStringToken& src);  // 3224
	CUtlMemory<char const::NumAllocated(); // 1196
	CUtlMemory<char const::operator[](
			int i);  // 602
	CUtlVectorBase<char const::Element(
		int i);  // 1201
	CopyConstruct<char const*>(const char ** pMemory,
					const char* const& src);  // 1201
	CUtlMemory<char const::Base(); // 112
	CUtlVectorBase<char const::Base(); // 368
	CUtlVectorBase<char const::ResetDbgInfo(); // 824
	CUtlVectorBase<char const::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char const::AddToTail(
			const char* const& src);  // 3227
	CUtlMemory<char const::NumAllocated(); // 1247
	CUtlMemory<char const::operator[](
			int i);  // 602
	CUtlVectorBase<char const::Element(
		int i);  // 1252
	Construct<char const*, char const*>(const char ** pMemory); // 1252
	CUtlMemory<char const::Base(); // 112
	CUtlVectorBase<char const::Base(); // 368
	CUtlVectorBase<char const::ResetDbgInfo(); // 824
	CUtlVectorBase<char const::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<char const::AddToTail(
			const char  *& src);  // 3232
	CUtlMemory<KeyValues3::NumAllocated(); // 1247
	CUtlMemory<KeyValues3::operator[](
			int i);  // 602
	CUtlVectorBase<KeyValues3::Element(
		int i);  // 1252
	Construct<KeyValues3*, KeyValues3*>(KeyValues3** pMemory); // 1252
	CUtlMemory<KeyValues3::Base(); // 112
	CUtlVectorBase<KeyValues3::Base(); // 368
	CUtlVectorBase<KeyValues3::ResetDbgInfo(); // 824
	CUtlVectorBase<KeyValues3::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<KeyValues3::AddToTail(
			KeyValues3 *& src);  // 3235
	CUtlMemory<unsigned char, int>::NumAllocated(); // 1196
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::Element(
		int i);  // 1201
	CopyConstruct<unsigned char>(unsigned char* pMemory,
					const unsigned char& src);  // 1201
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::Base(); // 368
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::AddToTail(
			const unsigned char& src);  // 3236
	CUtlStringToken::GetHashCode(); // 206
	DefaultHashFunctor<CUtlStringToken>::operator(
			const CUtlStringToken& token);  // 249
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
			int i);  // 720
	CUtlKeyValuePair<CUtlStringToken, int>::CUtlKeyValuePair<CUtlStringToken, int>(
						const CUtlStringToken& k,
						const int& v);  // 1514
	Construct<CUtlKeyValuePair<CUtlStringToken, int>, const CUtlStringToken&, int&>(CUtlKeyValuePair<CUtlStringToken, int>* pMemory); // 720
	DoInsert<const CUtlStringToken&>(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, unde this,
					const CUtlStringToken& k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 714
	DoInsert<const CUtlStringToken&>(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, unde this,
					const CUtlStringToken& k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 249
	Insert(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, unde this,
		KeyArg_t k,
		ValueArg_t v,
		bool* pDidInsert);  // 3242
} /* size: 653, variables: 3, inline expansions: 54 (1102 bytes) */

// <0555F6C0> kv3lib/keyvalues3.cpp:3251
// variables: 3
// function calls: 16
void CKeyValues3Table::InitLargeTableIndex_Internal()
{
	int nMemberCount; // 3262
	{
		int i; // 3263
		{
			KeyValues3LowercaseHash_t nMemberHash; // 3265
			CUtlMemory<CUtlStringToken, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
					int i);  // 3265
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 720
			CUtlKeyValuePair<CUtlStringToken, int>::CUtlKeyValuePair<CUtlStringToken, int>(
								const CUtlStringToken& k,
								const int& v);  // 1514
			Construct<CUtlKeyValuePair<CUtlStringToken, int>, const CUtlStringToken&, int&>(CUtlKeyValuePair<CUtlStringToken, int>* pMemory); // 720
			DoInsert<const CUtlStringToken&>(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, unde this,
							const CUtlStringToken& k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 714
			DoInsert<const CUtlStringToken&>(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, unde this,
							const CUtlStringToken& k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 249
			CUtlStringToken::GetHashCode(); // 206
			DefaultHashFunctor<CUtlStringToken>::operator(
					const CUtlStringToken& token);  // 249
			Insert(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, unde this,
				KeyArg_t k,
				ValueArg_t v,
				bool* pDidInsert);  // 3268
		}
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3262
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, unde this); // 178
	CUtlHashtable(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, unde this,
			int minimumSize);  // 235
	LargeTableIndex_t::LargeTableIndex_t(); // 3255
} /* size: 211, variables: 1, inline expansions: 6 (75 bytes) */

// <0555F2F7> kv3lib/keyvalues3.cpp:3275
// variables: 6
// function calls: 12
void CKeyValues3Table::FindMember_Internal(CKV3MemberName memberName, uint& nNextPropertyHint)
{
	{
		UtlHashHandle_t hEntry; // 3284
		int32 nFoundIndex; // 3290
		{
			const char* pActualMemberName; // 3294
		}
		CUtlStringToken::GetHashCode(); // 206
		DefaultHashFunctor<CUtlStringToken>::operator(
				const CUtlStringToken& token);  // 218
		Find(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken> this,
			KeyArg_t k);  // 3284
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
				int i);  // 295
		Element(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, unde this,
			handle_t idx);  // 3290
	}
	{
		int nMemberCount; // 3303
		{
			int i; // 3314
			{
				const char* pActualMemberName; // 3320
			}
			CUtlStringToken::operator==(
					const CUtlStringToken& other);  // 3316
			CUtlMemory<CUtlStringToken, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
					int i);  // 3316
		}
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3303
		CUtlMemory<CUtlStringToken, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
				int i);  // 3309
		CUtlStringToken::operator==(
				const CUtlStringToken& other);  // 3309
	}
} /* size: 184 */

// <055851DD> kv3lib/keyvalues3.cpp:3336
// variable: 1
// function calls: 3
void CKeyValues3Table::MemberData(int nIndex)
{
	int nMemberCount; // 3338
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3338
	{
	}
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3345
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <0555F282> kv3lib/keyvalues3.cpp:3336
// variables: 3
void CKeyValues3Table::MemberData(int nIndex)
{
	int nMemberCount; // 3338
	const char   __FUNCTION__; // 35672
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3343
	}
} /* size: 0, variables: 2 */

// <028D6C7C> kv3lib/keyvalues3.cpp:3336
// variables: 3
void CKeyValues3Table::MemberData(int nIndex)
{
	int nMemberCount; // 3338
	const char   __FUNCTION__; // 54343
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3343
	}
} /* size: 0, variables: 2 */

// <0123BEAE> kv3lib/keyvalues3.cpp:3336
// variables: 3
void CKeyValues3Table::MemberData(int nIndex)
{
	int nMemberCount; // 3338
	const char   __FUNCTION__; // 15927
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3343
	}
} /* size: 0, variables: 2 */

// <002B7673> kv3lib/keyvalues3.cpp:3336
// variables: 3
void CKeyValues3Table::MemberData(int nIndex)
{
	int nMemberCount; // 3338
	const char   __FUNCTION__; // 2094
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3343
	}
} /* size: 0, variables: 2 */

// <0061C875> kv3lib/keyvalues3.cpp:3336
// variables: 3
void CKeyValues3Table::MemberData(int nIndex)
{
	int nMemberCount; // 3338
	const char   __FUNCTION__; // 28080
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3343
	}
} /* size: 0, variables: 2 */

// <009F44FC> kv3lib/keyvalues3.cpp:3336
// variables: 3
void CKeyValues3Table::MemberData(int nIndex)
{
	int nMemberCount; // 3338
	const char   __FUNCTION__; // 34231
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3343
	}
} /* size: 0, variables: 2 */

// <0010107D> kv3lib/keyvalues3.cpp:3336
// variables: 3
void CKeyValues3Table::MemberData(int nIndex)
{
	int nMemberCount; // 3338
	const char   __FUNCTION__; // 26728
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3343
	}
} /* size: 0, variables: 2 */

// <055852BE> kv3lib/keyvalues3.cpp:3351
// variable: 1
// function calls: 3
void CKeyValues3Table::MemberData(int nIndex)
{
	int nMemberCount; // 3353
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3353
	{
	}
	CUtlMemory<KeyValues3::operator[](
			int i);  // 595
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3360
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <0555F20D> kv3lib/keyvalues3.cpp:3351
// variables: 3
void CKeyValues3Table::MemberData(int nIndex)
{
	int nMemberCount; // 3353
	const char   __FUNCTION__; // 35672
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3358
	}
} /* size: 0, variables: 2 */

// <028D6C07> kv3lib/keyvalues3.cpp:3351
// variables: 3
void CKeyValues3Table::MemberData(int nIndex)
{
	int nMemberCount; // 3353
	const char   __FUNCTION__; // 54343
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3358
	}
} /* size: 0, variables: 2 */

// <0123BE39> kv3lib/keyvalues3.cpp:3351
// variables: 3
void CKeyValues3Table::MemberData(int nIndex)
{
	int nMemberCount; // 3353
	const char   __FUNCTION__; // 15927
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3358
	}
} /* size: 0, variables: 2 */

// <002B75FE> kv3lib/keyvalues3.cpp:3351
// variables: 3
void CKeyValues3Table::MemberData(int nIndex)
{
	int nMemberCount; // 3353
	const char   __FUNCTION__; // 2094
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3358
	}
} /* size: 0, variables: 2 */

// <0061C800> kv3lib/keyvalues3.cpp:3351
// variables: 3
void CKeyValues3Table::MemberData(int nIndex)
{
	int nMemberCount; // 3353
	const char   __FUNCTION__; // 28080
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3358
	}
} /* size: 0, variables: 2 */

// <009F4487> kv3lib/keyvalues3.cpp:3351
// variables: 3
void CKeyValues3Table::MemberData(int nIndex)
{
	int nMemberCount; // 3353
	const char   __FUNCTION__; // 34231
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3358
	}
} /* size: 0, variables: 2 */

// <00101008> kv3lib/keyvalues3.cpp:3351
// variables: 3
void CKeyValues3Table::MemberData(int nIndex)
{
	int nMemberCount; // 3353
	const char   __FUNCTION__; // 26728
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3358
	}
} /* size: 0, variables: 2 */

// <0558539F> kv3lib/keyvalues3.cpp:3366
// variable: 1
// function calls: 3
void CKeyValues3Table::MemberName(int nIndex)
{
	int nMemberCount; // 3368
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3368
	{
	}
	CUtlMemory<char const::operator[](
			int i);  // 595
	CUtlVectorBase<char const::operator[](
			int i);  // 3375
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <0555F198> kv3lib/keyvalues3.cpp:3366
// variables: 3
void CKeyValues3Table::MemberName(int nIndex)
{
	int nMemberCount; // 3368
	const char   __FUNCTION__; // 35672
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3373
	}
} /* size: 0, variables: 2 */

// <028D6B92> kv3lib/keyvalues3.cpp:3366
// variables: 3
void CKeyValues3Table::MemberName(int nIndex)
{
	int nMemberCount; // 3368
	const char   __FUNCTION__; // 54343
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3373
	}
} /* size: 0, variables: 2 */

// <0123BDC4> kv3lib/keyvalues3.cpp:3366
// variables: 3
void CKeyValues3Table::MemberName(int nIndex)
{
	int nMemberCount; // 3368
	const char   __FUNCTION__; // 15927
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3373
	}
} /* size: 0, variables: 2 */

// <002B7589> kv3lib/keyvalues3.cpp:3366
// variables: 3
void CKeyValues3Table::MemberName(int nIndex)
{
	int nMemberCount; // 3368
	const char   __FUNCTION__; // 2094
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3373
	}
} /* size: 0, variables: 2 */

// <0061C78B> kv3lib/keyvalues3.cpp:3366
// variables: 3
void CKeyValues3Table::MemberName(int nIndex)
{
	int nMemberCount; // 3368
	const char   __FUNCTION__; // 28080
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3373
	}
} /* size: 0, variables: 2 */

// <00100F93> kv3lib/keyvalues3.cpp:3366
// variables: 3
void CKeyValues3Table::MemberName(int nIndex)
{
	int nMemberCount; // 3368
	const char   __FUNCTION__; // 26728
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3373
	}
} /* size: 0, variables: 2 */

// <05585480> kv3lib/keyvalues3.cpp:3381
// variable: 1
// function calls: 3
void CKeyValues3Table::MemberNameHash(int nIndex)
{
	int nMemberCount; // 3383
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3383
	{
	}
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
			int i);  // 3390
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <0555F123> kv3lib/keyvalues3.cpp:3381
// variables: 3
void CKeyValues3Table::MemberNameHash(int nIndex)
{
	int nMemberCount; // 3383
	const char   __FUNCTION__; // 35775
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3388
	}
} /* size: 0, variables: 2 */

// <028D6B1D> kv3lib/keyvalues3.cpp:3381
// variables: 3
void CKeyValues3Table::MemberNameHash(int nIndex)
{
	int nMemberCount; // 3383
	const char   __FUNCTION__; // 54446
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3388
	}
} /* size: 0, variables: 2 */

// <0123BD4F> kv3lib/keyvalues3.cpp:3381
// variables: 3
void CKeyValues3Table::MemberNameHash(int nIndex)
{
	int nMemberCount; // 3383
	const char   __FUNCTION__; // 16030
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3388
	}
} /* size: 0, variables: 2 */

// <002B7514> kv3lib/keyvalues3.cpp:3381
// variables: 3
void CKeyValues3Table::MemberNameHash(int nIndex)
{
	int nMemberCount; // 3383
	const char   __FUNCTION__; // 2197
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3388
	}
} /* size: 0, variables: 2 */

// <0061C716> kv3lib/keyvalues3.cpp:3381
// variables: 3
void CKeyValues3Table::MemberNameHash(int nIndex)
{
	int nMemberCount; // 3383
	const char   __FUNCTION__; // 28183
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3388
	}
} /* size: 0, variables: 2 */

// <009F439D> kv3lib/keyvalues3.cpp:3381
// variables: 3
void CKeyValues3Table::MemberNameHash(int nIndex)
{
	int nMemberCount; // 3383
	const char   __FUNCTION__; // 34334
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3388
	}
} /* size: 0, variables: 2 */

// <00100F1E> kv3lib/keyvalues3.cpp:3381
// variables: 3
void CKeyValues3Table::MemberNameHash(int nIndex)
{
	int nMemberCount; // 3383
	const char   __FUNCTION__; // 26831
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3388
	}
} /* size: 0, variables: 2 */

// <0555EF1D> kv3lib/keyvalues3.cpp:3396
// variables: 3
// function calls: 6
void CKeyValues3Table::KV3MemberName(int nIndex)
{
	int nMemberCount; // 3398
	const char   __FUNCTION__; // 35748
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3403
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3398
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
			int i);  // 3405
	CUtlMemory<char const::operator[](
			int i);  // 595
	CUtlVectorBase<char const::operator[](
			int i);  // 3405
	CKV3MemberName::CKV3MemberName(
			const char* pString,
			KeyValues3LowercaseHash_t nHash);  // 3405
} /* size: 0, variables: 2, inline expansions: 6 (0 bytes) */

// <028D6917> kv3lib/keyvalues3.cpp:3396
// variables: 3
// function calls: 6
void CKeyValues3Table::KV3MemberName(int nIndex)
{
	int nMemberCount; // 3398
	const char   __FUNCTION__; // 54419
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3403
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3398
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
			int i);  // 3405
	CUtlMemory<char const::operator[](
			int i);  // 595
	CUtlVectorBase<char const::operator[](
			int i);  // 3405
	CKV3MemberName::CKV3MemberName(
			const char* pString,
			KeyValues3LowercaseHash_t nHash);  // 3405
} /* size: 0, variables: 2, inline expansions: 6 (0 bytes) */

// <0123BB49> kv3lib/keyvalues3.cpp:3396
// variables: 3
// function calls: 6
void CKeyValues3Table::KV3MemberName(int nIndex)
{
	int nMemberCount; // 3398
	const char   __FUNCTION__; // 16003
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3403
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3398
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
			int i);  // 3405
	CUtlMemory<char const::operator[](
			int i);  // 595
	CUtlVectorBase<char const::operator[](
			int i);  // 3405
	CKV3MemberName::CKV3MemberName(
			const char* pString,
			KeyValues3LowercaseHash_t nHash);  // 3405
} /* size: 0, variables: 2, inline expansions: 6 (0 bytes) */

// <002B730E> kv3lib/keyvalues3.cpp:3396
// variables: 3
// function calls: 6
void CKeyValues3Table::KV3MemberName(int nIndex)
{
	int nMemberCount; // 3398
	const char   __FUNCTION__; // 2170
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3403
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3398
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
			int i);  // 3405
	CUtlMemory<char const::operator[](
			int i);  // 595
	CUtlVectorBase<char const::operator[](
			int i);  // 3405
	CKV3MemberName::CKV3MemberName(
			const char* pString,
			KeyValues3LowercaseHash_t nHash);  // 3405
} /* size: 0, variables: 2, inline expansions: 6 (0 bytes) */

// <0061C510> kv3lib/keyvalues3.cpp:3396
// variables: 3
// function calls: 6
void CKeyValues3Table::KV3MemberName(int nIndex)
{
	int nMemberCount; // 3398
	const char   __FUNCTION__; // 28156
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3403
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3398
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
			int i);  // 3405
	CUtlMemory<char const::operator[](
			int i);  // 595
	CUtlVectorBase<char const::operator[](
			int i);  // 3405
	CKV3MemberName::CKV3MemberName(
			const char* pString,
			KeyValues3LowercaseHash_t nHash);  // 3405
} /* size: 0, variables: 2, inline expansions: 6 (20 bytes) */

// <009F4197> kv3lib/keyvalues3.cpp:3396
// variables: 3
// function calls: 6
void CKeyValues3Table::KV3MemberName(int nIndex)
{
	int nMemberCount; // 3398
	const char   __FUNCTION__; // 34307
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3403
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3398
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
			int i);  // 3405
	CUtlMemory<char const::operator[](
			int i);  // 595
	CUtlVectorBase<char const::operator[](
			int i);  // 3405
	CKV3MemberName::CKV3MemberName(
			const char* pString,
			KeyValues3LowercaseHash_t nHash);  // 3405
} /* size: 0, variables: 2, inline expansions: 6 (0 bytes) */

// <00100D18> kv3lib/keyvalues3.cpp:3396
// variables: 3
// function calls: 6
void CKeyValues3Table::KV3MemberName(int nIndex)
{
	int nMemberCount; // 3398
	const char   __FUNCTION__; // 26804
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3403
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3398
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
			int i);  // 3405
	CUtlMemory<char const::operator[](
			int i);  // 595
	CUtlVectorBase<char const::operator[](
			int i);  // 3405
	CKV3MemberName::CKV3MemberName(
			const char* pString,
			KeyValues3LowercaseHash_t nHash);  // 3405
} /* size: 0, variables: 2, inline expansions: 6 (20 bytes) */

// <0555ED07> kv3lib/keyvalues3.cpp:3411
// variables: 3
// function calls: 5
void CKeyValues3Table::RenameMember(KeyValues3* pParent, int nIndex, CKV3MemberName newName)
{
	int nMemberCount; // 3413
	const char   __FUNCTION__; // 35721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3418
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3413
	CUtlMemory<char const::operator[](
			int i);  // 588
	CUtlVectorBase<char const::operator[](
			int i);  // 3420
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
			int i);  // 3421
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

// <028D6701> kv3lib/keyvalues3.cpp:3411
// variables: 3
// function calls: 5
void CKeyValues3Table::RenameMember(KeyValues3* pParent, int nIndex, CKV3MemberName newName)
{
	int nMemberCount; // 3413
	const char   __FUNCTION__; // 54392
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3418
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3413
	CUtlMemory<char const::operator[](
			int i);  // 588
	CUtlVectorBase<char const::operator[](
			int i);  // 3420
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
			int i);  // 3421
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

// <0123B933> kv3lib/keyvalues3.cpp:3411
// variables: 3
// function calls: 5
void CKeyValues3Table::RenameMember(KeyValues3* pParent, int nIndex, CKV3MemberName newName)
{
	int nMemberCount; // 3413
	const char   __FUNCTION__; // 15976
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3418
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3413
	CUtlMemory<char const::operator[](
			int i);  // 588
	CUtlVectorBase<char const::operator[](
			int i);  // 3420
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
			int i);  // 3421
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

// <002B70F8> kv3lib/keyvalues3.cpp:3411
// variables: 3
// function calls: 5
void CKeyValues3Table::RenameMember(KeyValues3* pParent, int nIndex, CKV3MemberName newName)
{
	int nMemberCount; // 3413
	const char   __FUNCTION__; // 2143
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3418
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3413
	CUtlMemory<char const::operator[](
			int i);  // 588
	CUtlVectorBase<char const::operator[](
			int i);  // 3420
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
			int i);  // 3421
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

// <0061C2FA> kv3lib/keyvalues3.cpp:3411
// variables: 3
// function calls: 5
void CKeyValues3Table::RenameMember(KeyValues3* pParent, int nIndex, CKV3MemberName newName)
{
	int nMemberCount; // 3413
	const char   __FUNCTION__; // 28129
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3418
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3413
	CUtlMemory<char const::operator[](
			int i);  // 588
	CUtlVectorBase<char const::operator[](
			int i);  // 3420
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
			int i);  // 3421
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

// <009F3F81> kv3lib/keyvalues3.cpp:3411
// variables: 3
// function calls: 5
void CKeyValues3Table::RenameMember(KeyValues3* pParent, int nIndex, CKV3MemberName newName)
{
	int nMemberCount; // 3413
	const char   __FUNCTION__; // 34280
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3418
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3413
	CUtlMemory<char const::operator[](
			int i);  // 588
	CUtlVectorBase<char const::operator[](
			int i);  // 3420
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
			int i);  // 3421
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

// <00100B02> kv3lib/keyvalues3.cpp:3411
// variables: 3
// function calls: 5
void CKeyValues3Table::RenameMember(KeyValues3* pParent, int nIndex, CKV3MemberName newName)
{
	int nMemberCount; // 3413
	const char   __FUNCTION__; // 26777
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3418
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3413
	CUtlMemory<char const::operator[](
			int i);  // 588
	CUtlVectorBase<char const::operator[](
			int i);  // 3420
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
			int i);  // 3421
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

// <0555E032> kv3lib/keyvalues3.cpp:3427
// variables: 4
// function calls: 49
void CKeyValues3Table::CopyFrom(KeyValues3* pParent, const CKeyValues3Table* pOther)
{
	int nOtherCount; // 3430
	{
		int i; // 3442
		{
			const char* pName; // 3444
			KeyValues3LowercaseHash_t nLowerHash; // 3445
			CUtlMemory<char const::operator[](
					int i);  // 595
			CUtlVectorBase<char const::operator[](
					int i);  // 3444
			CUtlMemory<CUtlStringToken, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
					int i);  // 3445
			CUtlMemory<CUtlStringToken, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
					int i);  // 3448
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::operator[](
					int i);  // 3449
			CUtlMemory<char const::operator[](
					int i);  // 588
			CUtlVectorBase<char const::operator[](
					int i);  // 3450
			CUtlMemory<KeyValues3::operator[](
					int i);  // 588
			CUtlVectorBase<KeyValues3::operator[](
					int i);  // 3451
			CUtlMemory<KeyValues3::operator[](
					int i);  // 588
			CUtlVectorBase<KeyValues3::operator[](
					int i);  // 3452
			CUtlMemory<KeyValues3::operator[](
					int i);  // 595
			CUtlVectorBase<KeyValues3::operator[](
					int i);  // 3452
		}
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3430
	CUtlMemory<KeyValues3::NumAllocated(); // 782
	CUtlMemory<KeyValues3::Base(); // 112
	CUtlVectorBase<KeyValues3::Base(); // 368
	CUtlVectorBase<KeyValues3::ResetDbgInfo(); // 824
	CUtlVectorBase<KeyValues3::GrowMemory(
			int num);  // 784
	CUtlVectorBase<KeyValues3::GrowVector(
			int num);  // 1445
	CUtlVectorBase<KeyValues3::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<KeyValues3::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<KeyValues3::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<KeyValues3::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlVectorBase<KeyValues3::SetCount(
		int count);  // 3438
	CUtlMemory<char const::NumAllocated(); // 782
	CUtlMemory<char const::Base(); // 112
	CUtlVectorBase<char const::Base(); // 368
	CUtlVectorBase<char const::ResetDbgInfo(); // 824
	CUtlVectorBase<char const::GrowMemory(
			int num);  // 784
	CUtlVectorBase<char const::GrowVector(
			int num);  // 1445
	CUtlVectorBase<char const::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<char const::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<char const::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<char const::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlVectorBase<char const::SetCount(
		int count);  // 3439
	CUtlMemory<unsigned char, int>::NumAllocated(); // 782
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::Base(); // 368
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::SetCount(
		int count);  // 3440
} /* size: 500, variables: 1, inline expansions: 33 (1072 bytes) */

// <0555D842> kv3lib/keyvalues3.cpp:3464
// variables: 2
// function calls: 34
void CKeyValues3Table::Clear(KeyValues3* pParent, uint nReserveTableCapacity)
{
	int nMemberCount; // 3466
	{
		int i; // 3471
		CUtlMemory<KeyValues3::operator[](
				int i);  // 588
		CUtlVectorBase<KeyValues3::operator[](
				int i);  // 3473
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3466
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::RemoveAll(); // 3476
	CUtlVectorBase<KeyValues3::RemoveAll(); // 3477
	CUtlVectorBase<char const::RemoveAll(); // 3478
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::RemoveAll(); // 3479
	ValidateAlignment<CUtlHashtableEntry<CUtlStringToken, int> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, unde this); // 235
	LargeTableIndex_t::~LargeTableIndex_t(); // 3493
	CUtlMemory<CUtlStringToken, int>::IsGrowable(); // 881
	CUtlMemory<CUtlStringToken, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CUtlStringToken, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::EnsureCapacity(
			int num);  // 3483
	CUtlMemory<KeyValues3::IsGrowable(); // 881
	CUtlMemory<KeyValues3::IsExternallyAllocated(); // 888
	CUtlMemory<KeyValues3::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<KeyValues3::ResetDbgInfo(); // 1024
	CUtlVectorBase<KeyValues3::EnsureCapacity(
			int num);  // 3484
	CUtlMemory<char const::IsGrowable(); // 881
	CUtlMemory<char const::IsExternallyAllocated(); // 888
	CUtlMemory<char const::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<char const::ResetDbgInfo(); // 1024
	CUtlVectorBase<char const::EnsureCapacity(
			int num);  // 3485
	CUtlMemory<unsigned char, int>::IsGrowable(); // 881
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 888
	CUtlMemory<unsigned char, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::EnsureCapacity(
			int num);  // 3486
} /* size: 841, variables: 1, inline expansions: 32 (1540 bytes) */

// <05588459> kv3lib/keyvalues3.cpp:3506
// variables: 2
// function calls: 3
void CKeyValues3Table::Remove(KeyValues3* pParent, KeyValues3* pMemberData)
{
	int nMemberCount; // 3508
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3508
	{
		int i; // 3513
		CUtlMemory<KeyValues3::operator[](
				int i);  // 588
		CUtlVectorBase<KeyValues3::operator[](
				int i);  // 3515
	}
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <0555D7E5> kv3lib/keyvalues3.cpp:3506
// variables: 2
void CKeyValues3Table::Remove(KeyValues3* pParent, KeyValues3* pMemberData)
{
	int nMemberCount; // 3508
	{
		int i; // 3513
	}
} /* size: 0, variables: 1 */

// <0555C922> kv3lib/keyvalues3.cpp:3528
// variables: 9
// function calls: 57
void CKeyValues3Table::Remove(KeyValues3* pParent, int nIndex)
{
	int nMemberCount; // 3530
	const char   __FUNCTION__; // 35564
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3535
	}
	{
		KeyValues3LowercaseHash_t memberHash; // 3539
		UtlHashHandle_t hEntry; // 3540
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3541
		}
		CUtlMemory<CUtlStringToken, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
				int i);  // 3539
		CUtlStringToken::GetHashCode(); // 206
		DefaultHashFunctor<CUtlStringToken>::operator(
				const CUtlStringToken& token);  // 218
		Find(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken> this,
			KeyArg_t k);  // 3540
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
				int i);  // 875
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::Count(); // 747
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
				int i);  // 756
		CUtlHashtableEntry<CUtlStringToken, int>::MarkInvalid(); // 760
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
				int i);  // 761
		CUtlHashtableEntry<CUtlStringToken, int>::IdealIndex(
				uint32 slotmask);  // 757
		{
			unsigned int chainid; // 776
			unsigned int nextIdx; // 777
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 781
			CUtlHashtableEntry<CUtlStringToken, int>::IdealIndex(
					uint32 slotmask);  // 781
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 789
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 790
			{
				int i; // 121
			}
			CUtlHashtableEntry<CUtlStringToken, int>::MoveDataFrom(
					CUtlHashtableEntry<CUtlStringToken, int>& src);  // 790
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 790
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 791
			CUtlHashtableEntry<CUtlStringToken, int>::MarkInvalid(); // 791
		}
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
				int i);  // 769
		DoRemove<const CUtlStringToken&>(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, unde this,
						const CUtlStringToken& x,
						unsigned int h);  // 875
		RemoveByHandle(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, unde this,
				UtlHashHandle_t idx);  // 3542
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3530
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3545
	CUtlMemory<KeyValues3::operator[](
			int i);  // 602
	CUtlVectorBase<KeyValues3::Element(
		int i);  // 1114
	CUtlMemory<KeyValues3::operator[](
			int i);  // 602
	CUtlVectorBase<KeyValues3::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<KeyValues3::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<KeyValues3::Remove(
		int elem);  // 3547
	CUtlMemory<char const::operator[](
			int i);  // 602
	CUtlVectorBase<char const::Element(
		int i);  // 1114
	CUtlMemory<char const::operator[](
			int i);  // 602
	CUtlVectorBase<char const::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<char const::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<char const::Remove(
		int elem);  // 3548
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Element(
		int i);  // 1114
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Remove(
		int elem);  // 3549
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::Element(
		int i);  // 1114
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::Remove(
		int elem);  // 3550
} /* size: 0, variables: 2, inline expansions: 35 (688 bytes) */

// <028D431C> kv3lib/keyvalues3.cpp:3528
// variables: 9
// function calls: 57
void CKeyValues3Table::Remove(KeyValues3* pParent, int nIndex)
{
	int nMemberCount; // 3530
	const char   __FUNCTION__; // 54235
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3535
	}
	{
		KeyValues3LowercaseHash_t memberHash; // 3539
		UtlHashHandle_t hEntry; // 3540
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3541
		}
		CUtlMemory<CUtlStringToken, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
				int i);  // 3539
		CUtlStringToken::GetHashCode(); // 206
		DefaultHashFunctor<CUtlStringToken>::operator(
				const CUtlStringToken& token);  // 218
		Find(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken> this,
			KeyArg_t k);  // 3540
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
				int i);  // 875
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::Count(); // 747
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
				int i);  // 756
		CUtlHashtableEntry<CUtlStringToken, int>::MarkInvalid(); // 760
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
				int i);  // 761
		CUtlHashtableEntry<CUtlStringToken, int>::IdealIndex(
				uint32 slotmask);  // 757
		{
			unsigned int chainid; // 776
			unsigned int nextIdx; // 777
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 781
			CUtlHashtableEntry<CUtlStringToken, int>::IdealIndex(
					uint32 slotmask);  // 781
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 789
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 790
			{
				int i; // 121
			}
			CUtlHashtableEntry<CUtlStringToken, int>::MoveDataFrom(
					CUtlHashtableEntry<CUtlStringToken, int>& src);  // 790
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 790
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 791
			CUtlHashtableEntry<CUtlStringToken, int>::MarkInvalid(); // 791
		}
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
				int i);  // 769
		DoRemove<const CUtlStringToken&>(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, unde this,
						const CUtlStringToken& x,
						unsigned int h);  // 875
		RemoveByHandle(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, unde this,
				UtlHashHandle_t idx);  // 3542
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3530
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3545
	CUtlMemory<KeyValues3::operator[](
			int i);  // 602
	CUtlVectorBase<KeyValues3::Element(
		int i);  // 1114
	CUtlMemory<KeyValues3::operator[](
			int i);  // 602
	CUtlVectorBase<KeyValues3::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<KeyValues3::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<KeyValues3::Remove(
		int elem);  // 3547
	CUtlMemory<char const::operator[](
			int i);  // 602
	CUtlVectorBase<char const::Element(
		int i);  // 1114
	CUtlMemory<char const::operator[](
			int i);  // 602
	CUtlVectorBase<char const::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<char const::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<char const::Remove(
		int elem);  // 3548
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Element(
		int i);  // 1114
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Remove(
		int elem);  // 3549
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::Element(
		int i);  // 1114
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::Remove(
		int elem);  // 3550
} /* size: 0, variables: 2, inline expansions: 35 (688 bytes) */

// <0123954E> kv3lib/keyvalues3.cpp:3528
// variables: 9
// function calls: 57
void CKeyValues3Table::Remove(KeyValues3* pParent, int nIndex)
{
	int nMemberCount; // 3530
	const char   __FUNCTION__; // 15819
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3535
	}
	{
		KeyValues3LowercaseHash_t memberHash; // 3539
		UtlHashHandle_t hEntry; // 3540
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3541
		}
		CUtlMemory<CUtlStringToken, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
				int i);  // 3539
		CUtlStringToken::GetHashCode(); // 206
		DefaultHashFunctor<CUtlStringToken>::operator(
				const CUtlStringToken& token);  // 218
		Find(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken> this,
			KeyArg_t k);  // 3540
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
				int i);  // 875
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::Count(); // 747
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
				int i);  // 756
		CUtlHashtableEntry<CUtlStringToken, int>::MarkInvalid(); // 760
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
				int i);  // 761
		CUtlHashtableEntry<CUtlStringToken, int>::IdealIndex(
				uint32 slotmask);  // 757
		{
			unsigned int chainid; // 776
			unsigned int nextIdx; // 777
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 781
			CUtlHashtableEntry<CUtlStringToken, int>::IdealIndex(
					uint32 slotmask);  // 781
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 789
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 790
			{
				int i; // 121
			}
			CUtlHashtableEntry<CUtlStringToken, int>::MoveDataFrom(
					CUtlHashtableEntry<CUtlStringToken, int>& src);  // 790
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 790
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 791
			CUtlHashtableEntry<CUtlStringToken, int>::MarkInvalid(); // 791
		}
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
				int i);  // 769
		DoRemove<const CUtlStringToken&>(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, unde this,
						const CUtlStringToken& x,
						unsigned int h);  // 875
		RemoveByHandle(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, unde this,
				UtlHashHandle_t idx);  // 3542
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3530
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3545
	CUtlMemory<KeyValues3::operator[](
			int i);  // 602
	CUtlVectorBase<KeyValues3::Element(
		int i);  // 1114
	CUtlMemory<KeyValues3::operator[](
			int i);  // 602
	CUtlVectorBase<KeyValues3::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<KeyValues3::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<KeyValues3::Remove(
		int elem);  // 3547
	CUtlMemory<char const::operator[](
			int i);  // 602
	CUtlVectorBase<char const::Element(
		int i);  // 1114
	CUtlMemory<char const::operator[](
			int i);  // 602
	CUtlVectorBase<char const::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<char const::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<char const::Remove(
		int elem);  // 3548
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Element(
		int i);  // 1114
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Remove(
		int elem);  // 3549
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::Element(
		int i);  // 1114
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::Remove(
		int elem);  // 3550
} /* size: 0, variables: 2, inline expansions: 35 (688 bytes) */

// <002B4D13> kv3lib/keyvalues3.cpp:3528
// variables: 9
// function calls: 57
void CKeyValues3Table::Remove(KeyValues3* pParent, int nIndex)
{
	int nMemberCount; // 3530
	const char   __FUNCTION__; // 1986
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3535
	}
	{
		KeyValues3LowercaseHash_t memberHash; // 3539
		UtlHashHandle_t hEntry; // 3540
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3541
		}
		CUtlMemory<CUtlStringToken, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
				int i);  // 3539
		CUtlStringToken::GetHashCode(); // 206
		DefaultHashFunctor<CUtlStringToken>::operator(
				const CUtlStringToken& token);  // 218
		Find(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken> this,
			KeyArg_t k);  // 3540
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
				int i);  // 875
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::Count(); // 747
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
				int i);  // 756
		CUtlHashtableEntry<CUtlStringToken, int>::MarkInvalid(); // 760
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
				int i);  // 761
		CUtlHashtableEntry<CUtlStringToken, int>::IdealIndex(
				uint32 slotmask);  // 757
		{
			unsigned int chainid; // 776
			unsigned int nextIdx; // 777
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 781
			CUtlHashtableEntry<CUtlStringToken, int>::IdealIndex(
					uint32 slotmask);  // 781
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 789
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 790
			{
				int i; // 121
			}
			CUtlHashtableEntry<CUtlStringToken, int>::MoveDataFrom(
					CUtlHashtableEntry<CUtlStringToken, int>& src);  // 790
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 790
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 791
			CUtlHashtableEntry<CUtlStringToken, int>::MarkInvalid(); // 791
		}
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
				int i);  // 769
		DoRemove<const CUtlStringToken&>(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, unde this,
						const CUtlStringToken& x,
						unsigned int h);  // 875
		RemoveByHandle(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, unde this,
				UtlHashHandle_t idx);  // 3542
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3530
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3545
	CUtlMemory<KeyValues3::operator[](
			int i);  // 602
	CUtlVectorBase<KeyValues3::Element(
		int i);  // 1114
	CUtlMemory<KeyValues3::operator[](
			int i);  // 602
	CUtlVectorBase<KeyValues3::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<KeyValues3::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<KeyValues3::Remove(
		int elem);  // 3547
	CUtlMemory<char const::operator[](
			int i);  // 602
	CUtlVectorBase<char const::Element(
		int i);  // 1114
	CUtlMemory<char const::operator[](
			int i);  // 602
	CUtlVectorBase<char const::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<char const::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<char const::Remove(
		int elem);  // 3548
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Element(
		int i);  // 1114
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Remove(
		int elem);  // 3549
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::Element(
		int i);  // 1114
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::Remove(
		int elem);  // 3550
} /* size: 0, variables: 2, inline expansions: 35 (688 bytes) */

// <00619F15> kv3lib/keyvalues3.cpp:3528
// variables: 9
// function calls: 57
void CKeyValues3Table::Remove(KeyValues3* pParent, int nIndex)
{
	int nMemberCount; // 3530
	const char   __FUNCTION__; // 27972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3535
	}
	{
		KeyValues3LowercaseHash_t memberHash; // 3539
		UtlHashHandle_t hEntry; // 3540
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3541
		}
		CUtlMemory<CUtlStringToken, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
				int i);  // 3539
		CUtlStringToken::GetHashCode(); // 206
		DefaultHashFunctor<CUtlStringToken>::operator(
				const CUtlStringToken& token);  // 218
		Find(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken> this,
			KeyArg_t k);  // 3540
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
				int i);  // 875
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::Count(); // 747
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
				int i);  // 756
		CUtlHashtableEntry<CUtlStringToken, int>::MarkInvalid(); // 760
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
				int i);  // 761
		CUtlHashtableEntry<CUtlStringToken, int>::IdealIndex(
				uint32 slotmask);  // 757
		{
			unsigned int chainid; // 776
			unsigned int nextIdx; // 777
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 781
			CUtlHashtableEntry<CUtlStringToken, int>::IdealIndex(
					uint32 slotmask);  // 781
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 789
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 790
			{
				int i; // 121
			}
			CUtlHashtableEntry<CUtlStringToken, int>::MoveDataFrom(
					CUtlHashtableEntry<CUtlStringToken, int>& src);  // 790
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 790
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 791
			CUtlHashtableEntry<CUtlStringToken, int>::MarkInvalid(); // 791
		}
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
				int i);  // 769
		DoRemove<const CUtlStringToken&>(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, unde this,
						const CUtlStringToken& x,
						unsigned int h);  // 875
		RemoveByHandle(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, unde this,
				UtlHashHandle_t idx);  // 3542
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3530
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3545
	CUtlMemory<KeyValues3::operator[](
			int i);  // 602
	CUtlVectorBase<KeyValues3::Element(
		int i);  // 1114
	CUtlMemory<KeyValues3::operator[](
			int i);  // 602
	CUtlVectorBase<KeyValues3::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<KeyValues3::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<KeyValues3::Remove(
		int elem);  // 3547
	CUtlMemory<char const::operator[](
			int i);  // 602
	CUtlVectorBase<char const::Element(
		int i);  // 1114
	CUtlMemory<char const::operator[](
			int i);  // 602
	CUtlVectorBase<char const::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<char const::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<char const::Remove(
		int elem);  // 3548
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Element(
		int i);  // 1114
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Remove(
		int elem);  // 3549
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::Element(
		int i);  // 1114
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::Remove(
		int elem);  // 3550
} /* size: 0, variables: 2, inline expansions: 35 (688 bytes) */

// <009F1B9C> kv3lib/keyvalues3.cpp:3528
// variables: 9
// function calls: 57
void CKeyValues3Table::Remove(KeyValues3* pParent, int nIndex)
{
	int nMemberCount; // 3530
	const char   __FUNCTION__; // 34123
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3535
	}
	{
		KeyValues3LowercaseHash_t memberHash; // 3539
		UtlHashHandle_t hEntry; // 3540
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3541
		}
		CUtlMemory<CUtlStringToken, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
				int i);  // 3539
		CUtlStringToken::GetHashCode(); // 206
		DefaultHashFunctor<CUtlStringToken>::operator(
				const CUtlStringToken& token);  // 218
		Find(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken> this,
			KeyArg_t k);  // 3540
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
				int i);  // 875
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::Count(); // 747
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
				int i);  // 756
		CUtlHashtableEntry<CUtlStringToken, int>::MarkInvalid(); // 760
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
				int i);  // 761
		CUtlHashtableEntry<CUtlStringToken, int>::IdealIndex(
				uint32 slotmask);  // 757
		{
			unsigned int chainid; // 776
			unsigned int nextIdx; // 777
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 781
			CUtlHashtableEntry<CUtlStringToken, int>::IdealIndex(
					uint32 slotmask);  // 781
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 789
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 790
			{
				int i; // 121
			}
			CUtlHashtableEntry<CUtlStringToken, int>::MoveDataFrom(
					CUtlHashtableEntry<CUtlStringToken, int>& src);  // 790
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 790
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 791
			CUtlHashtableEntry<CUtlStringToken, int>::MarkInvalid(); // 791
		}
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
				int i);  // 769
		DoRemove<const CUtlStringToken&>(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, unde this,
						const CUtlStringToken& x,
						unsigned int h);  // 875
		RemoveByHandle(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, unde this,
				UtlHashHandle_t idx);  // 3542
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3530
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3545
	CUtlMemory<KeyValues3::operator[](
			int i);  // 602
	CUtlVectorBase<KeyValues3::Element(
		int i);  // 1114
	CUtlMemory<KeyValues3::operator[](
			int i);  // 602
	CUtlVectorBase<KeyValues3::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<KeyValues3::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<KeyValues3::Remove(
		int elem);  // 3547
	CUtlMemory<char const::operator[](
			int i);  // 602
	CUtlVectorBase<char const::Element(
		int i);  // 1114
	CUtlMemory<char const::operator[](
			int i);  // 602
	CUtlVectorBase<char const::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<char const::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<char const::Remove(
		int elem);  // 3548
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Element(
		int i);  // 1114
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Remove(
		int elem);  // 3549
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::Element(
		int i);  // 1114
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::Remove(
		int elem);  // 3550
} /* size: 0, variables: 2, inline expansions: 35 (688 bytes) */

// <000FE71D> kv3lib/keyvalues3.cpp:3528
// variables: 9
// function calls: 57
void CKeyValues3Table::Remove(KeyValues3* pParent, int nIndex)
{
	int nMemberCount; // 3530
	const char   __FUNCTION__; // 26620
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3535
	}
	{
		KeyValues3LowercaseHash_t memberHash; // 3539
		UtlHashHandle_t hEntry; // 3540
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3541
		}
		CUtlMemory<CUtlStringToken, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
				int i);  // 3539
		CUtlStringToken::GetHashCode(); // 206
		DefaultHashFunctor<CUtlStringToken>::operator(
				const CUtlStringToken& token);  // 218
		Find(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken> this,
			KeyArg_t k);  // 3540
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
				int i);  // 875
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::Count(); // 747
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
				int i);  // 756
		CUtlHashtableEntry<CUtlStringToken, int>::MarkInvalid(); // 760
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
				int i);  // 761
		CUtlHashtableEntry<CUtlStringToken, int>::IdealIndex(
				uint32 slotmask);  // 757
		{
			unsigned int chainid; // 776
			unsigned int nextIdx; // 777
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 781
			CUtlHashtableEntry<CUtlStringToken, int>::IdealIndex(
					uint32 slotmask);  // 781
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 789
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 790
			{
				int i; // 121
			}
			CUtlHashtableEntry<CUtlStringToken, int>::MoveDataFrom(
					CUtlHashtableEntry<CUtlStringToken, int>& src);  // 790
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 790
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
					int i);  // 791
			CUtlHashtableEntry<CUtlStringToken, int>::MarkInvalid(); // 791
		}
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, int>, int>::operator[](
				int i);  // 769
		DoRemove<const CUtlStringToken&>(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, unde this,
						const CUtlStringToken& x,
						unsigned int h);  // 875
		RemoveByHandle(const CUtlHashtable<CUtlStringToken, int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, unde this,
				UtlHashHandle_t idx);  // 3542
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3530
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3545
	CUtlMemory<KeyValues3::operator[](
			int i);  // 602
	CUtlVectorBase<KeyValues3::Element(
		int i);  // 1114
	CUtlMemory<KeyValues3::operator[](
			int i);  // 602
	CUtlVectorBase<KeyValues3::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<KeyValues3::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<KeyValues3::Remove(
		int elem);  // 3547
	CUtlMemory<char const::operator[](
			int i);  // 602
	CUtlVectorBase<char const::Element(
		int i);  // 1114
	CUtlMemory<char const::operator[](
			int i);  // 602
	CUtlVectorBase<char const::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<char const::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<char const::Remove(
		int elem);  // 3548
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Element(
		int i);  // 1114
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Remove(
		int elem);  // 3549
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::Element(
		int i);  // 1114
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8, int> >::Remove(
		int elem);  // 3550
} /* size: 0, variables: 2, inline expansions: 35 (688 bytes) */

// <0555C464> kv3lib/keyvalues3.cpp:3556
// variables: 9
// function calls: 13
void CKeyValues3Table::IsIdenticalTo(const CKeyValues3Table* pOther, bool bAssertOnFailure)
{
	int nCount; // 3558
	const char   __FUNCTION__; // 35748
	uint nNextPropertyHint; // 3568
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3563
	}
	{
		int i; // 3569
		{
			const char* pMemberName; // 3571
			KeyValues3LowercaseHash_t nNameHash; // 3572
			int nOtherIndex; // 3574
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3579
			}
			CUtlMemory<KeyValues3::operator[](
					int i);  // 595
			CUtlVectorBase<KeyValues3::operator[](
					int i);  // 3584
			CUtlMemory<KeyValues3::operator[](
					int i);  // 595
			CUtlVectorBase<KeyValues3::operator[](
					int i);  // 3584
			CUtlMemory<char const::operator[](
					int i);  // 595
			CUtlVectorBase<char const::operator[](
					int i);  // 3571
			CUtlMemory<CUtlStringToken, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
					int i);  // 3572
			CKV3MemberName::CKV3MemberName(
					const char* pString,
					KeyValues3LowercaseHash_t nHash);  // 3574
		}
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
	CKeyValues3Table::Count(); // 3559
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
	CKeyValues3Table::Count(); // 3558
} /* size: 0, variables: 3, inline expansions: 4 (20 bytes) */

// <028D3E5E> kv3lib/keyvalues3.cpp:3556
// variables: 9
// function calls: 13
void CKeyValues3Table::IsIdenticalTo(const CKeyValues3Table* pOther, bool bAssertOnFailure)
{
	int nCount; // 3558
	const char   __FUNCTION__; // 54419
	uint nNextPropertyHint; // 3568
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3563
	}
	{
		int i; // 3569
		{
			const char* pMemberName; // 3571
			KeyValues3LowercaseHash_t nNameHash; // 3572
			int nOtherIndex; // 3574
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3579
			}
			CUtlMemory<KeyValues3::operator[](
					int i);  // 595
			CUtlVectorBase<KeyValues3::operator[](
					int i);  // 3584
			CUtlMemory<KeyValues3::operator[](
					int i);  // 595
			CUtlVectorBase<KeyValues3::operator[](
					int i);  // 3584
			CUtlMemory<char const::operator[](
					int i);  // 595
			CUtlVectorBase<char const::operator[](
					int i);  // 3571
			CUtlMemory<CUtlStringToken, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
					int i);  // 3572
			CKV3MemberName::CKV3MemberName(
					const char* pString,
					KeyValues3LowercaseHash_t nHash);  // 3574
		}
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
	CKeyValues3Table::Count(); // 3559
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
	CKeyValues3Table::Count(); // 3558
} /* size: 0, variables: 3, inline expansions: 4 (20 bytes) */

// <01239090> kv3lib/keyvalues3.cpp:3556
// variables: 9
// function calls: 13
void CKeyValues3Table::IsIdenticalTo(const CKeyValues3Table* pOther, bool bAssertOnFailure)
{
	int nCount; // 3558
	const char   __FUNCTION__; // 16003
	uint nNextPropertyHint; // 3568
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3563
	}
	{
		int i; // 3569
		{
			const char* pMemberName; // 3571
			KeyValues3LowercaseHash_t nNameHash; // 3572
			int nOtherIndex; // 3574
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3579
			}
			CUtlMemory<KeyValues3::operator[](
					int i);  // 595
			CUtlVectorBase<KeyValues3::operator[](
					int i);  // 3584
			CUtlMemory<KeyValues3::operator[](
					int i);  // 595
			CUtlVectorBase<KeyValues3::operator[](
					int i);  // 3584
			CUtlMemory<char const::operator[](
					int i);  // 595
			CUtlVectorBase<char const::operator[](
					int i);  // 3571
			CUtlMemory<CUtlStringToken, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
					int i);  // 3572
			CKV3MemberName::CKV3MemberName(
					const char* pString,
					KeyValues3LowercaseHash_t nHash);  // 3574
		}
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
	CKeyValues3Table::Count(); // 3559
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
	CKeyValues3Table::Count(); // 3558
} /* size: 0, variables: 3, inline expansions: 4 (20 bytes) */

// <002B4855> kv3lib/keyvalues3.cpp:3556
// variables: 9
// function calls: 13
void CKeyValues3Table::IsIdenticalTo(const CKeyValues3Table* pOther, bool bAssertOnFailure)
{
	int nCount; // 3558
	const char   __FUNCTION__; // 2170
	uint nNextPropertyHint; // 3568
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3563
	}
	{
		int i; // 3569
		{
			const char* pMemberName; // 3571
			KeyValues3LowercaseHash_t nNameHash; // 3572
			int nOtherIndex; // 3574
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3579
			}
			CUtlMemory<KeyValues3::operator[](
					int i);  // 595
			CUtlVectorBase<KeyValues3::operator[](
					int i);  // 3584
			CUtlMemory<KeyValues3::operator[](
					int i);  // 595
			CUtlVectorBase<KeyValues3::operator[](
					int i);  // 3584
			CUtlMemory<char const::operator[](
					int i);  // 595
			CUtlVectorBase<char const::operator[](
					int i);  // 3571
			CUtlMemory<CUtlStringToken, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
					int i);  // 3572
			CKV3MemberName::CKV3MemberName(
					const char* pString,
					KeyValues3LowercaseHash_t nHash);  // 3574
		}
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
	CKeyValues3Table::Count(); // 3559
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
	CKeyValues3Table::Count(); // 3558
} /* size: 0, variables: 3, inline expansions: 4 (20 bytes) */

// <00619A57> kv3lib/keyvalues3.cpp:3556
// variables: 9
// function calls: 13
void CKeyValues3Table::IsIdenticalTo(const CKeyValues3Table* pOther, bool bAssertOnFailure)
{
	int nCount; // 3558
	const char   __FUNCTION__; // 28156
	uint nNextPropertyHint; // 3568
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3563
	}
	{
		int i; // 3569
		{
			const char* pMemberName; // 3571
			KeyValues3LowercaseHash_t nNameHash; // 3572
			int nOtherIndex; // 3574
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3579
			}
			CUtlMemory<KeyValues3::operator[](
					int i);  // 595
			CUtlVectorBase<KeyValues3::operator[](
					int i);  // 3584
			CUtlMemory<KeyValues3::operator[](
					int i);  // 595
			CUtlVectorBase<KeyValues3::operator[](
					int i);  // 3584
			CUtlMemory<char const::operator[](
					int i);  // 595
			CUtlVectorBase<char const::operator[](
					int i);  // 3571
			CUtlMemory<CUtlStringToken, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
					int i);  // 3572
			CKV3MemberName::CKV3MemberName(
					const char* pString,
					KeyValues3LowercaseHash_t nHash);  // 3574
		}
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
	CKeyValues3Table::Count(); // 3559
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
	CKeyValues3Table::Count(); // 3558
} /* size: 0, variables: 3, inline expansions: 4 (20 bytes) */

// <009F16DE> kv3lib/keyvalues3.cpp:3556
// variables: 9
// function calls: 13
void CKeyValues3Table::IsIdenticalTo(const CKeyValues3Table* pOther, bool bAssertOnFailure)
{
	int nCount; // 3558
	const char   __FUNCTION__; // 34307
	uint nNextPropertyHint; // 3568
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3563
	}
	{
		int i; // 3569
		{
			const char* pMemberName; // 3571
			KeyValues3LowercaseHash_t nNameHash; // 3572
			int nOtherIndex; // 3574
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3579
			}
			CUtlMemory<KeyValues3::operator[](
					int i);  // 595
			CUtlVectorBase<KeyValues3::operator[](
					int i);  // 3584
			CUtlMemory<KeyValues3::operator[](
					int i);  // 595
			CUtlVectorBase<KeyValues3::operator[](
					int i);  // 3584
			CUtlMemory<char const::operator[](
					int i);  // 595
			CUtlVectorBase<char const::operator[](
					int i);  // 3571
			CUtlMemory<CUtlStringToken, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
					int i);  // 3572
			CKV3MemberName::CKV3MemberName(
					const char* pString,
					KeyValues3LowercaseHash_t nHash);  // 3574
		}
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
	CKeyValues3Table::Count(); // 3559
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
	CKeyValues3Table::Count(); // 3558
} /* size: 0, variables: 3, inline expansions: 4 (20 bytes) */

// <000FE25F> kv3lib/keyvalues3.cpp:3556
// variables: 9
// function calls: 13
void CKeyValues3Table::IsIdenticalTo(const CKeyValues3Table* pOther, bool bAssertOnFailure)
{
	int nCount; // 3558
	const char   __FUNCTION__; // 26804
	uint nNextPropertyHint; // 3568
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3563
	}
	{
		int i; // 3569
		{
			const char* pMemberName; // 3571
			KeyValues3LowercaseHash_t nNameHash; // 3572
			int nOtherIndex; // 3574
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3579
			}
			CUtlMemory<KeyValues3::operator[](
					int i);  // 595
			CUtlVectorBase<KeyValues3::operator[](
					int i);  // 3584
			CUtlMemory<KeyValues3::operator[](
					int i);  // 595
			CUtlVectorBase<KeyValues3::operator[](
					int i);  // 3584
			CUtlMemory<char const::operator[](
					int i);  // 595
			CUtlVectorBase<char const::operator[](
					int i);  // 3571
			CUtlMemory<CUtlStringToken, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::operator[](
					int i);  // 3572
			CKV3MemberName::CKV3MemberName(
					const char* pString,
					KeyValues3LowercaseHash_t nHash);  // 3574
		}
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
	CKeyValues3Table::Count(); // 3559
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
	CKeyValues3Table::Count(); // 3558
} /* size: 0, variables: 3, inline expansions: 4 (20 bytes) */

// <05585744> kv3lib/keyvalues3.cpp:3596
void KeyValues3::Internal_ClearDataWithoutFreeing()
{
} /* size: 0 */

// <0555C25A> kv3lib/keyvalues3.cpp:3604
// variables: 4
// function calls: 4
void KeyValues3::Internal_ChangeInternalType(KeyValues3InternalType_t newInternalType)
{
	KeyValues3InternalType_t curInternalType; // 3608
	bool bLegalTypeChange; // 3610
	const char   __FUNCTION__; // 36116
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3614
	}
	KeyValues3::Internal_Type(); // 3608
	IsInternalTypeNumeric(KeyValues3InternalType_t nType); // 3613
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 3622
	KeyValues3::Internal_ClearDataWithoutFreeing(); // 3621
} /* size: 199, variables: 3, inline expansions: 4 (54 bytes) */

// <028D3C54> kv3lib/keyvalues3.cpp:3604
// variables: 4
// function calls: 4
void KeyValues3::Internal_ChangeInternalType(KeyValues3InternalType_t newInternalType)
{
	KeyValues3InternalType_t curInternalType; // 3608
	bool bLegalTypeChange; // 3610
	const char   __FUNCTION__; // 54787
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3614
	}
	KeyValues3::Internal_Type(); // 3608
	IsInternalTypeNumeric(KeyValues3InternalType_t nType); // 3613
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 3622
	KeyValues3::Internal_ClearDataWithoutFreeing(); // 3621
} /* size: 199, variables: 3, inline expansions: 4 (54 bytes) */

// <01238E86> kv3lib/keyvalues3.cpp:3604
// variables: 4
// function calls: 4
void KeyValues3::Internal_ChangeInternalType(KeyValues3InternalType_t newInternalType)
{
	KeyValues3InternalType_t curInternalType; // 3608
	bool bLegalTypeChange; // 3610
	const char   __FUNCTION__; // 16371
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3614
	}
	KeyValues3::Internal_Type(); // 3608
	IsInternalTypeNumeric(KeyValues3InternalType_t nType); // 3613
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 3622
	KeyValues3::Internal_ClearDataWithoutFreeing(); // 3621
} /* size: 199, variables: 3, inline expansions: 4 (54 bytes) */

// <002B464B> kv3lib/keyvalues3.cpp:3604
// variables: 4
// function calls: 4
void KeyValues3::Internal_ChangeInternalType(KeyValues3InternalType_t newInternalType)
{
	KeyValues3InternalType_t curInternalType; // 3608
	bool bLegalTypeChange; // 3610
	const char   __FUNCTION__; // 2538
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3614
	}
	KeyValues3::Internal_Type(); // 3608
	IsInternalTypeNumeric(KeyValues3InternalType_t nType); // 3613
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 3622
	KeyValues3::Internal_ClearDataWithoutFreeing(); // 3621
} /* size: 199, variables: 3, inline expansions: 4 (54 bytes) */

// <0061984D> kv3lib/keyvalues3.cpp:3604
// variables: 4
// function calls: 4
void KeyValues3::Internal_ChangeInternalType(KeyValues3InternalType_t newInternalType)
{
	KeyValues3InternalType_t curInternalType; // 3608
	bool bLegalTypeChange; // 3610
	const char   __FUNCTION__; // 28524
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3614
	}
	KeyValues3::Internal_Type(); // 3608
	IsInternalTypeNumeric(KeyValues3InternalType_t nType); // 3613
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 3622
	KeyValues3::Internal_ClearDataWithoutFreeing(); // 3621
} /* size: 199, variables: 3, inline expansions: 4 (54 bytes) */

// <009F14D4> kv3lib/keyvalues3.cpp:3604
// variables: 4
// function calls: 4
void KeyValues3::Internal_ChangeInternalType(KeyValues3InternalType_t newInternalType)
{
	KeyValues3InternalType_t curInternalType; // 3608
	bool bLegalTypeChange; // 3610
	const char   __FUNCTION__; // 34675
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3614
	}
	KeyValues3::Internal_Type(); // 3608
	IsInternalTypeNumeric(KeyValues3InternalType_t nType); // 3613
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 3622
	KeyValues3::Internal_ClearDataWithoutFreeing(); // 3621
} /* size: 199, variables: 3, inline expansions: 4 (54 bytes) */

// <000FE055> kv3lib/keyvalues3.cpp:3604
// variables: 4
// function calls: 4
void KeyValues3::Internal_ChangeInternalType(KeyValues3InternalType_t newInternalType)
{
	KeyValues3InternalType_t curInternalType; // 3608
	bool bLegalTypeChange; // 3610
	const char   __FUNCTION__; // 27172
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3614
	}
	KeyValues3::Internal_Type(); // 3608
	IsInternalTypeNumeric(KeyValues3InternalType_t nType); // 3613
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 3622
	KeyValues3::Internal_ClearDataWithoutFreeing(); // 3621
} /* size: 199, variables: 3, inline expansions: 4 (54 bytes) */

// <0555C0BB> kv3lib/keyvalues3.cpp:3629
// function calls: 4
void KeyValues3::Internal_FreeAllocation(KeyValues3InternalFreeMode_t nFreeMode)
{
	KeyValues3::Internal_Type(); // 3631
	FreeString(KeyValues3* pParent,
			const char* pStr);  // 3635
	FreeBlobExternal(KeyValues3* pParent,
			KeyValues3BinaryBlobExternal_t* pBlob);  // 3653
	FreeBlob(KeyValues3* pParent,
		KeyValues3BinaryBlob_t* pBlob);  // 3647
} /* size: 278, inline expansions: 4 (82 bytes) */

// <055862F6> kv3lib/keyvalues3.cpp:3691
// function calls: 5
void KeyValues3::Internal_NewAllocation()
{
	KeyValues3::Internal_Type(); // 3693
	KeyValues3::Internal_NewAllocation(); // 3691
	CKeyValues3ContextImpl::AllocTable_Internal(); // 4354
	AllocTable(KeyValues3* pParent); // 4349
	AllocTable(KeyValues3* pParent); // 3696
} /* size: 161, inline expansions: 5 (144 bytes) */

// <0555C09E> kv3lib/keyvalues3.cpp:3691
void KeyValues3::Internal_NewAllocation()
{
} /* size: 0 */

// <0555BFE8> kv3lib/keyvalues3.cpp:3719
// function calls: 2
void KeyValues3::KeyValues3(KeyValues3Type_t nType)
{
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 3722
	KeyValues3::Internal_ClearDataWithoutFreeing(); // 3724
} /* size: 38, inline expansions: 2 (26 bytes) */

// <0555BFBE> kv3lib/keyvalues3.cpp:3719
void KeyValues3::KeyValues3(KeyValues3Type_t nType)
{
} /* size: 0 */

// <0555BEF5> kv3lib/keyvalues3.cpp:3731
// function calls: 2
void KeyValues3::KeyValues3(const KeyValues3& rhs)
{
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 3734
	KeyValues3::Internal_ClearDataWithoutFreeing(); // 3736
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0555BECB> kv3lib/keyvalues3.cpp:3731
void KeyValues3::KeyValues3(const KeyValues3& rhs)
{
} /* size: 0 */

// <0555BDFB> kv3lib/keyvalues3.cpp:3743
// function calls: 2
void KeyValues3::KeyValues3(CKeyValues3Context* pContext, KeyValues3InternalType_t nInternalType, uint nClusterIndex)
{
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 3750
	KeyValues3::Internal_ClearDataWithoutFreeing(); // 3752
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0555BDB7> kv3lib/keyvalues3.cpp:3743
void KeyValues3::KeyValues3(CKeyValues3Context* pContext, KeyValues3InternalType_t nInternalType, uint nClusterIndex)
{
} /* size: 0 */

// <0555BD68> kv3lib/keyvalues3.cpp:3759
void KeyValues3::~KeyValues3()
{
} /* size: 11 */

// <0555BCE1> kv3lib/keyvalues3.cpp:3771
void KeyValues3::operator=(const KeyValues3& rhs)
{
} /* size: 0 */

// <0558576D> kv3lib/keyvalues3.cpp:3780
// variables: 3
// function calls: 4
void KeyValues3::GetParentContext()
{
	CKeyValues3Cluster* pCluster; // 3782
	ClusterFromPointer(const KeyValues3* pKV3); // 3782
	{
		const KeyValues3* pFirstInCluster; // 490
		CKeyValues3Cluster* pCluster; // 491
	}
	ClusterFromPointer(const KeyValues3* pKV3); // 3782
	{
	}
	CKV3ClusterAlloc<KeyValues3, 63>::GetParentContext(); // 3783
	KeyValues3::GetParentContext(); // 3780
} /* size: 0, variables: 1, inline expansions: 4 (119 bytes) */

// <0555BCB7> kv3lib/keyvalues3.cpp:3780
// variable: 1
void KeyValues3::GetParentContext()
{
	CKeyValues3Cluster* pCluster; // 3782
} /* size: 0, variables: 1 */

// <05557BF9> kv3lib/keyvalues3.cpp:3789
// variables: 119
// function calls: 258
void KeyValues3::CalculateHash()
{
	XXH_NAMESPACEXXH3_state_t state; // 3791
	memset(void* __dest,
		int __ch,
		size_t __len);  // 6602
	XXH3_reset_internal(XXH_NAMESPACEXXH3_state_t* statePtr,
				XXH64_hash_t seed,
				const void* secret,
				size_t secretSize);  // 6624
	XXH_INLINE_XXH3_64bits_reset(XXH_NAMESPACEXXH3_state_t* statePtr); // 3792
	{
		XXH64_hash_t acc; // 6865
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 6835
		{
			const size_t  catchupSize; // 6848
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 6850
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 6851
		}
		{
			const size_t  nbStripes; // 6838
			size_t nbStripesSoFar; // 6839
			{
				size_t nbStripesThisIter; // 6692
				{
					const __m128i* xacc; // 5272
					const __m128i* xsecret; // 5275
					const __m128i  prime32; // 5276
					size_t i; // 5278
					{
						const __m128i  acc_vec; // 5281
						const __m128i  shifted; // 5282
						const __m128i  data_vec; // 5283
						const __m128i  key_vec; // 5285
						const __m128i  data_key; // 5286
						const __m128i  data_key_hi; // 5289
						const __m128i  prod_lo; // 5290
						const __m128i  prod_hi; // 5291
						_mm_mul_epu32(__m128i __A,
								__m128i __B);  // 5290
						_mm_srli_epi64(__m128i __A,
								int __B);  // 5282
						_mm_xor_si128(__m128i __A,
								__m128i __B);  // 5286
						_mm_xor_si128(__m128i __A,
								__m128i __B);  // 5283
						_mm_loadu_si128(const __m128i_u* __P); // 5285
						_mm_shuffle_epi32(__m128i __A,
									const int  __mask);  // 5289
						_mm_mul_epu32(__m128i __A,
								__m128i __B);  // 5291
						_mm_slli_epi64(__m128i __A,
								int __B);  // 5292
						_mm_add_epi64(__m128i __A,
								__m128i __B);  // 5292
					}
				}
				XXH3_scrambleAcc_sse2(void* acc,
							const void* secret);  // 6697
				{
					const xxh_u8* in; // 5266
					{
						const __m128i* xacc; // 5239
						const __m128i* xinput; // 5242
						const __m128i* xsecret; // 5245
						size_t i; // 5247
						{
							const __m128i  data_vec; // 5250
							const __m128i  key_vec; // 5252
							const __m128i  data_key; // 5254
							const __m128i  data_key_lo; // 5256
							const __m128i  product; // 5258
							const __m128i  data_swap; // 5260
							const __m128i  sum; // 5261
							_mm_loadu_si128(const __m128i_u* __P); // 5250
							_mm_loadu_si128(const __m128i_u* __P); // 5252
							_mm_xor_si128(__m128i __A,
									__m128i __B);  // 5254
							_mm_shuffle_epi32(__m128i __A,
										const int  __mask);  // 5256
							_mm_mul_epu32(__m128i __A,
									__m128i __B);  // 5258
							_mm_shuffle_epi32(__m128i __A,
										const int  __mask);  // 5260
							_mm_add_epi64(__m128i __A,
									__m128i __B);  // 5261
							_mm_add_epi64(__m128i __A,
									__m128i __B);  // 5263
						}
					}
					XXH3_accumulate_512_sse2(void* acc,
								const void* input,
								const void* secret);  // 5266
				}
				XXH3_accumulate_sse2(xxh_u64* acc,
							const xxh_u8* input,
							const xxh_u8* secret,
							size_t nbStripes);  // 6696
			}
			{
				const xxh_u8* in; // 5266
				{
					const __m128i* xacc; // 5239
					const __m128i* xinput; // 5242
					const __m128i* xsecret; // 5245
					size_t i; // 5247
					{
						const __m128i  data_vec; // 5250
						const __m128i  key_vec; // 5252
						const __m128i  data_key; // 5254
						const __m128i  data_key_lo; // 5256
						const __m128i  product; // 5258
						const __m128i  data_swap; // 5260
						const __m128i  sum; // 5261
						_mm_loadu_si128(const __m128i_u* __P); // 5250
						_mm_loadu_si128(const __m128i_u* __P); // 5252
						_mm_xor_si128(__m128i __A,
								__m128i __B);  // 5254
						_mm_shuffle_epi32(__m128i __A,
									const int  __mask);  // 5256
						_mm_mul_epu32(__m128i __A,
								__m128i __B);  // 5258
						_mm_shuffle_epi32(__m128i __A,
									const int  __mask);  // 5260
						_mm_add_epi64(__m128i __A,
								__m128i __B);  // 5261
						_mm_add_epi64(__m128i __A,
								__m128i __B);  // 5263
					}
				}
				XXH3_accumulate_512_sse2(void* acc,
							const void* input,
							const void* secret);  // 5266
			}
			XXH3_accumulate_sse2(xxh_u64* acc,
						const xxh_u8* input,
						const xxh_u8* secret,
						size_t nbStripes);  // 6708
			XXH3_consumeStripes(xxh_u64* acc,
						size_t* nbStripesSoFarPtr,
						size_t nbStripesPerBlock,
						const xxh_u8* input,
						size_t nbStripes,
						const xxh_u8* secret,
						size_t secretLimit,
						XXH3_f_accumulate f_acc,
						XXH3_f_scrambleAcc f_scramble);  // 6840
		}
		{
			const __m128i* xacc; // 5239
			const __m128i* xinput; // 5242
			const __m128i* xsecret; // 5245
			size_t i; // 5247
			{
				const __m128i  data_vec; // 5250
				const __m128i  key_vec; // 5252
				const __m128i  data_key; // 5254
				const __m128i  data_key_lo; // 5256
				const __m128i  product; // 5258
				const __m128i  data_swap; // 5260
				const __m128i  sum; // 5261
				_mm_loadu_si128(const __m128i_u* __P); // 5250
				_mm_loadu_si128(const __m128i_u* __P); // 5252
				_mm_xor_si128(__m128i __A,
						__m128i __B);  // 5254
				_mm_shuffle_epi32(__m128i __A,
							const int  __mask);  // 5256
				_mm_mul_epu32(__m128i __A,
						__m128i __B);  // 5258
				_mm_shuffle_epi32(__m128i __A,
							const int  __mask);  // 5260
				_mm_add_epi64(__m128i __A,
						__m128i __B);  // 5261
				_mm_add_epi64(__m128i __A,
						__m128i __B);  // 5263
			}
		}
		XXH3_accumulate_512_sse2(void* acc,
					const void* input,
					const void* secret);  // 6855
		XXH3_digest_long(XXH64_hash_t* acc,
				const XXH_NAMESPACEXXH3_state_t* state,
				const unsigned char* secret);  // 6866
		XXH3_finalizeLong_64b(const xxh_u64* acc,
					const xxh_u8* secret,
					xxh_u64 len);  // 6867
	}
	{
		const xxh_u64  bitflip1; // 4743
		const xxh_u64  bitflip2; // 4744
		const xxh_u64  input_lo; // 4745
		const xxh_u64  input_hi; // 4746
		const xxh_u64  acc; // 4747
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4743
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4743
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4744
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4744
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4745
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4746
		XXH_mult64to128(xxh_u64 lhs,
				xxh_u64 rhs);  // 4627
		XXH3_mul128_fold64(xxh_u64 lhs,
					xxh_u64 rhs);  // 4749
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4644
		XXH3_avalanche(xxh_u64 h64); // 4750
	}
	XXH3_len_9to16_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 4758
	{
		const xxh_u32  input1; // 4728
		const xxh_u32  input2; // 4729
		const xxh_u64  bitflip; // 4730
		const xxh_u64  input64; // 4731
		const xxh_u64  keyed; // 4732
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 4728
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 4729
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4730
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4730
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4662
		XXH3_rrmxmx(xxh_u64 h64,
				xxh_u64 len);  // 4733
	}
	XXH3_len_4to8_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 4759
	XXH_read64(const void* ptr); // 3466
	XXH_readLE64(const void* ptr); // 4761
	XXH_read64(const void* ptr); // 3466
	XXH_readLE64(const void* ptr); // 4761
	XXH64_avalanche(xxh_u64 hash); // 4761
	{
		const xxh_u8  c1; // 4710
		const xxh_u8  c2; // 4711
		const xxh_u8  c3; // 4712
		const xxh_u32  combined; // 4713
		const xxh_u64  bitflip; // 4715
		const xxh_u64  keyed; // 4716
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 4715
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 4715
		XXH64_avalanche(xxh_u64 hash); // 4717
	}
	XXH3_len_1to3_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 4760
	XXH3_len_0to16_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 6441
	{
		xxh_u64 acc; // 4832
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4644
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4646
		XXH3_avalanche(xxh_u64 h64); // 4856
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4844
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4845
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4847
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4848
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4850
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4851
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4853
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4854
	}
	XXH3_len_17to128_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				size_t secretSize,
				XXH64_hash_t seed);  // 6443
	XXH3_64bits_internal(const void* input,
				size_t len,
				XXH64_hash_t seed64,
				const void* secret,
				size_t secretLen,
				XXH3_hashLong64_f f_hashLong);  // 6462
	XXH_INLINE_XXH3_64bits_withSecret(const void* input,
						size_t length,
						const void* secret,
						size_t secretSize);  // 6872
	{
		const xxh_u64  bitflip1; // 4743
		const xxh_u64  bitflip2; // 4744
		const xxh_u64  input_lo; // 4745
		const xxh_u64  input_hi; // 4746
		const xxh_u64  acc; // 4747
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4745
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4746
	}
	XXH3_len_9to16_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 4758
	{
		const xxh_u32  input1; // 4728
		const xxh_u32  input2; // 4729
		const xxh_u64  bitflip; // 4730
		const xxh_u64  input64; // 4731
		const xxh_u64  keyed; // 4732
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 4728
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 4729
		XXH3_rrmxmx(xxh_u64 h64,
				xxh_u64 len);  // 4733
	}
	XXH3_len_4to8_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 4759
	{
		const xxh_u8  c1; // 4710
		const xxh_u8  c2; // 4711
		const xxh_u8  c3; // 4712
		const xxh_u32  combined; // 4713
		const xxh_u64  bitflip; // 4715
		const xxh_u64  keyed; // 4716
		XXH64_avalanche(xxh_u64 hash); // 4717
	}
	XXH3_len_1to3_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 4760
	XXH3_len_0to16_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 6441
	{
		xxh_u64 acc; // 4832
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4844
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4845
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4847
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4848
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4850
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4851
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4853
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4854
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4644
		XXH3_avalanche(xxh_u64 h64); // 4856
	}
	XXH3_len_17to128_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				size_t secretSize,
				XXH64_hash_t seed);  // 6443
	XXH3_64bits_internal(const void* input,
				size_t len,
				XXH64_hash_t seed64,
				const void* secret,
				size_t secretLen,
				XXH3_hashLong64_f f_hashLong);  // 6469
	XXH_INLINE_XXH3_64bits_withSeed(const void* input,
					size_t length,
					XXH64_hash_t seed);  // 6871
	XXH_INLINE_XXH3_64bits_digest(const XXH_NAMESPACEXXH3_state_t* state); // 3796
} /* size: 0, variables: 1, inline expansions: 23 (0 bytes) */

// <05556D78> kv3lib/keyvalues3.cpp:3802
// variables: 14
// function calls: 45
void KeyValues3::Internal_CalculateHash_R(XXH_NAMESPACEXXH3_state_t* pState)
{
	KeyValues3Type_t nType; // 3804
	const char   __FUNCTION__; // 36040
	{
		uint8 bBool; // 3816
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3817
	}
	{
		int64 nInt64; // 3822
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		{
		}
		KV3Helper_StringToNumber<long long int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<long long int>(); // 694
		KeyValues3::GetValueAsNumeric<long long int>(); // 189
		KeyValues3::GetValueInt64(); // 3822
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3823
	}
	{
		uint64 nUInt64; // 3828
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		{
		}
		KV3Helper_StringToNumber<long long int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<long long int>(); // 694
		KeyValues3::GetValueAsNumeric<long long int>(); // 189
		KeyValues3::GetValueInt64(); // 3828
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3829
	}
	{
		double flDouble; // 3834
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		KV3Helper_StringToNumber<double>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<double>(); // 694
		{
		}
		KeyValues3::GetValueAsNumeric<double>(); // 204
		KeyValues3::GetValueDouble(); // 3834
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3835
	}
	{
		const char* pStr; // 3840
		V_strlen(const char* str); // 3841
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3841
	}
	{
		int nNumBytes; // 3846
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3847
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3848
	}
	{
		int nCount; // 3853
		{
			int i; // 3855
			KeyValues3::GetArrayElement(
					int nIndex);  // 3857
		}
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3854
	}
	{
		int nCount; // 3863
		{
			int i; // 3865
			{
				const char* pName; // 3867
				V_strlen(const char* str); // 3868
				XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
								const void* input,
								size_t len);  // 3868
			}
		}
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 2543
		KeyValues3::GetTable(); // 2546
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
		CKeyValues3Table::Count(); // 2546
		KeyValues3::GetMemberCount(); // 3863
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3864
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3875
	}
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 3806
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3804
} /* size: 0, variables: 2, inline expansions: 4 (0 bytes) */

// <028CE772> kv3lib/keyvalues3.cpp:3802
// variables: 14
// function calls: 45
void KeyValues3::Internal_CalculateHash_R(XXH_NAMESPACEXXH3_state_t* pState)
{
	KeyValues3Type_t nType; // 3804
	const char   __FUNCTION__; // 54711
	{
		uint8 bBool; // 3816
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3817
	}
	{
		int64 nInt64; // 3822
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		{
		}
		KV3Helper_StringToNumber<long long int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<long long int>(); // 694
		KeyValues3::GetValueAsNumeric<long long int>(); // 189
		KeyValues3::GetValueInt64(); // 3822
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3823
	}
	{
		uint64 nUInt64; // 3828
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		{
		}
		KV3Helper_StringToNumber<long long int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<long long int>(); // 694
		KeyValues3::GetValueAsNumeric<long long int>(); // 189
		KeyValues3::GetValueInt64(); // 3828
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3829
	}
	{
		double flDouble; // 3834
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		KV3Helper_StringToNumber<double>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<double>(); // 694
		{
		}
		KeyValues3::GetValueAsNumeric<double>(); // 204
		KeyValues3::GetValueDouble(); // 3834
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3835
	}
	{
		const char* pStr; // 3840
		V_strlen(const char* str); // 3841
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3841
	}
	{
		int nNumBytes; // 3846
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3847
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3848
	}
	{
		int nCount; // 3853
		{
			int i; // 3855
			KeyValues3::GetArrayElement(
					int nIndex);  // 3857
		}
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3854
	}
	{
		int nCount; // 3863
		{
			int i; // 3865
			{
				const char* pName; // 3867
				V_strlen(const char* str); // 3868
				XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
								const void* input,
								size_t len);  // 3868
			}
		}
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 2543
		KeyValues3::GetTable(); // 2546
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
		CKeyValues3Table::Count(); // 2546
		KeyValues3::GetMemberCount(); // 3863
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3864
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3875
	}
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 3806
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3804
} /* size: 0, variables: 2, inline expansions: 4 (0 bytes) */

// <012339A4> kv3lib/keyvalues3.cpp:3802
// variables: 14
// function calls: 45
void KeyValues3::Internal_CalculateHash_R(XXH_NAMESPACEXXH3_state_t* pState)
{
	KeyValues3Type_t nType; // 3804
	const char   __FUNCTION__; // 16295
	{
		uint8 bBool; // 3816
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3817
	}
	{
		int64 nInt64; // 3822
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		{
		}
		KV3Helper_StringToNumber<long long int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<long long int>(); // 694
		KeyValues3::GetValueAsNumeric<long long int>(); // 189
		KeyValues3::GetValueInt64(); // 3822
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3823
	}
	{
		uint64 nUInt64; // 3828
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		{
		}
		KV3Helper_StringToNumber<long long int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<long long int>(); // 694
		KeyValues3::GetValueAsNumeric<long long int>(); // 189
		KeyValues3::GetValueInt64(); // 3828
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3829
	}
	{
		double flDouble; // 3834
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		KV3Helper_StringToNumber<double>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<double>(); // 694
		{
		}
		KeyValues3::GetValueAsNumeric<double>(); // 204
		KeyValues3::GetValueDouble(); // 3834
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3835
	}
	{
		const char* pStr; // 3840
		V_strlen(const char* str); // 3841
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3841
	}
	{
		int nNumBytes; // 3846
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3847
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3848
	}
	{
		int nCount; // 3853
		{
			int i; // 3855
			KeyValues3::GetArrayElement(
					int nIndex);  // 3857
		}
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3854
	}
	{
		int nCount; // 3863
		{
			int i; // 3865
			{
				const char* pName; // 3867
				V_strlen(const char* str); // 3868
				XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
								const void* input,
								size_t len);  // 3868
			}
		}
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 2543
		KeyValues3::GetTable(); // 2546
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
		CKeyValues3Table::Count(); // 2546
		KeyValues3::GetMemberCount(); // 3863
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3864
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3875
	}
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 3806
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3804
} /* size: 0, variables: 2, inline expansions: 4 (0 bytes) */

// <002AF169> kv3lib/keyvalues3.cpp:3802
// variables: 14
// function calls: 45
void KeyValues3::Internal_CalculateHash_R(XXH_NAMESPACEXXH3_state_t* pState)
{
	KeyValues3Type_t nType; // 3804
	const char   __FUNCTION__; // 2462
	{
		uint8 bBool; // 3816
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3817
	}
	{
		int64 nInt64; // 3822
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		{
		}
		KV3Helper_StringToNumber<long long int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<long long int>(); // 694
		KeyValues3::GetValueAsNumeric<long long int>(); // 189
		KeyValues3::GetValueInt64(); // 3822
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3823
	}
	{
		uint64 nUInt64; // 3828
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		{
		}
		KV3Helper_StringToNumber<long long int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<long long int>(); // 694
		KeyValues3::GetValueAsNumeric<long long int>(); // 189
		KeyValues3::GetValueInt64(); // 3828
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3829
	}
	{
		double flDouble; // 3834
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		KV3Helper_StringToNumber<double>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<double>(); // 694
		{
		}
		KeyValues3::GetValueAsNumeric<double>(); // 204
		KeyValues3::GetValueDouble(); // 3834
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3835
	}
	{
		const char* pStr; // 3840
		V_strlen(const char* str); // 3841
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3841
	}
	{
		int nNumBytes; // 3846
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3847
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3848
	}
	{
		int nCount; // 3853
		{
			int i; // 3855
			KeyValues3::GetArrayElement(
					int nIndex);  // 3857
		}
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3854
	}
	{
		int nCount; // 3863
		{
			int i; // 3865
			{
				const char* pName; // 3867
				V_strlen(const char* str); // 3868
				XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
								const void* input,
								size_t len);  // 3868
			}
		}
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 2543
		KeyValues3::GetTable(); // 2546
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
		CKeyValues3Table::Count(); // 2546
		KeyValues3::GetMemberCount(); // 3863
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3864
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3875
	}
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 3806
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3804
} /* size: 0, variables: 2, inline expansions: 4 (0 bytes) */

// <0061436B> kv3lib/keyvalues3.cpp:3802
// variables: 14
// function calls: 45
void KeyValues3::Internal_CalculateHash_R(XXH_NAMESPACEXXH3_state_t* pState)
{
	KeyValues3Type_t nType; // 3804
	const char   __FUNCTION__; // 28448
	{
		uint8 bBool; // 3816
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3817
	}
	{
		int64 nInt64; // 3822
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		{
		}
		KV3Helper_StringToNumber<long long int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<long long int>(); // 694
		KeyValues3::GetValueAsNumeric<long long int>(); // 189
		KeyValues3::GetValueInt64(); // 3822
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3823
	}
	{
		uint64 nUInt64; // 3828
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		{
		}
		KV3Helper_StringToNumber<long long int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<long long int>(); // 694
		KeyValues3::GetValueAsNumeric<long long int>(); // 189
		KeyValues3::GetValueInt64(); // 3828
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3829
	}
	{
		double flDouble; // 3834
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		KV3Helper_StringToNumber<double>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<double>(); // 694
		{
		}
		KeyValues3::GetValueAsNumeric<double>(); // 204
		KeyValues3::GetValueDouble(); // 3834
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3835
	}
	{
		const char* pStr; // 3840
		V_strlen(const char* str); // 3841
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3841
	}
	{
		int nNumBytes; // 3846
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3847
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3848
	}
	{
		int nCount; // 3853
		{
			int i; // 3855
			KeyValues3::GetArrayElement(
					int nIndex);  // 3857
		}
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3854
	}
	{
		int nCount; // 3863
		{
			int i; // 3865
			{
				const char* pName; // 3867
				V_strlen(const char* str); // 3868
				XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
								const void* input,
								size_t len);  // 3868
			}
		}
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 2543
		KeyValues3::GetTable(); // 2546
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
		CKeyValues3Table::Count(); // 2546
		KeyValues3::GetMemberCount(); // 3863
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3864
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3875
	}
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 3806
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3804
} /* size: 0, variables: 2, inline expansions: 4 (0 bytes) */

// <009EBFF2> kv3lib/keyvalues3.cpp:3802
// variables: 14
// function calls: 45
void KeyValues3::Internal_CalculateHash_R(XXH_NAMESPACEXXH3_state_t* pState)
{
	KeyValues3Type_t nType; // 3804
	const char   __FUNCTION__; // 34599
	{
		uint8 bBool; // 3816
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3817
	}
	{
		int64 nInt64; // 3822
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		{
		}
		KV3Helper_StringToNumber<long long int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<long long int>(); // 694
		KeyValues3::GetValueAsNumeric<long long int>(); // 189
		KeyValues3::GetValueInt64(); // 3822
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3823
	}
	{
		uint64 nUInt64; // 3828
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		{
		}
		KV3Helper_StringToNumber<long long int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<long long int>(); // 694
		KeyValues3::GetValueAsNumeric<long long int>(); // 189
		KeyValues3::GetValueInt64(); // 3828
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3829
	}
	{
		double flDouble; // 3834
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		KV3Helper_StringToNumber<double>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<double>(); // 694
		{
		}
		KeyValues3::GetValueAsNumeric<double>(); // 204
		KeyValues3::GetValueDouble(); // 3834
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3835
	}
	{
		const char* pStr; // 3840
		V_strlen(const char* str); // 3841
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3841
	}
	{
		int nNumBytes; // 3846
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3847
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3848
	}
	{
		int nCount; // 3853
		{
			int i; // 3855
			KeyValues3::GetArrayElement(
					int nIndex);  // 3857
		}
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3854
	}
	{
		int nCount; // 3863
		{
			int i; // 3865
			{
				const char* pName; // 3867
				V_strlen(const char* str); // 3868
				XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
								const void* input,
								size_t len);  // 3868
			}
		}
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 2543
		KeyValues3::GetTable(); // 2546
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
		CKeyValues3Table::Count(); // 2546
		KeyValues3::GetMemberCount(); // 3863
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3864
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3875
	}
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 3806
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3804
} /* size: 0, variables: 2, inline expansions: 4 (0 bytes) */

// <000F8B73> kv3lib/keyvalues3.cpp:3802
// variables: 14
// function calls: 45
void KeyValues3::Internal_CalculateHash_R(XXH_NAMESPACEXXH3_state_t* pState)
{
	KeyValues3Type_t nType; // 3804
	const char   __FUNCTION__; // 27096
	{
		uint8 bBool; // 3816
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3817
	}
	{
		int64 nInt64; // 3822
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		{
		}
		KV3Helper_StringToNumber<long long int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<long long int>(); // 694
		KeyValues3::GetValueAsNumeric<long long int>(); // 189
		KeyValues3::GetValueInt64(); // 3822
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3823
	}
	{
		uint64 nUInt64; // 3828
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		{
		}
		KV3Helper_StringToNumber<long long int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<long long int>(); // 694
		KeyValues3::GetValueAsNumeric<long long int>(); // 189
		KeyValues3::GetValueInt64(); // 3828
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3829
	}
	{
		double flDouble; // 3834
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		KV3Helper_StringToNumber<double>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<double>(); // 694
		{
		}
		KeyValues3::GetValueAsNumeric<double>(); // 204
		KeyValues3::GetValueDouble(); // 3834
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3835
	}
	{
		const char* pStr; // 3840
		V_strlen(const char* str); // 3841
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3841
	}
	{
		int nNumBytes; // 3846
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3847
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3848
	}
	{
		int nCount; // 3853
		{
			int i; // 3855
			KeyValues3::GetArrayElement(
					int nIndex);  // 3857
		}
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3854
	}
	{
		int nCount; // 3863
		{
			int i; // 3865
			{
				const char* pName; // 3867
				V_strlen(const char* str); // 3868
				XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
								const void* input,
								size_t len);  // 3868
			}
		}
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 2543
		KeyValues3::GetTable(); // 2546
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 210
		CKeyValues3Table::Count(); // 2546
		KeyValues3::GetMemberCount(); // 3863
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 3864
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3875
	}
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 3806
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3804
} /* size: 0, variables: 2, inline expansions: 4 (0 bytes) */

// <05588550> kv3lib/keyvalues3.cpp:3883
// function calls: 2
void KeyValues3::Internal_SetToNullAndFreeDirectlyOwnedMemory()
{
	KeyValues3::Internal_ClearDataWithoutFreeing(); // 3886
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 3887
} /* size: 0, inline expansions: 2 (0 bytes) */

// <05556D5B> kv3lib/keyvalues3.cpp:3883
void KeyValues3::Internal_SetToNullAndFreeDirectlyOwnedMemory()
{
} /* size: 0 */

// <0558588F> kv3lib/keyvalues3.cpp:3893
// function calls: 4
void KeyValues3::Internal_AssertIsTable(const char* pFuncName, bool bAllowNull)
{
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3895
	{
	}
	{
	}
	KeyValues3::Internal_AssertIsTable(
				const char* pFuncName,
				bool bAllowNull);  // 3893
} /* size: 81, inline expansions: 4 (25 bytes) */

// <05556CC4> kv3lib/keyvalues3.cpp:3893
// variables: 2
void KeyValues3::Internal_AssertIsTable(const char* pFuncName, bool bAllowNull)
{
	const char   __FUNCTION__; // 35991
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3895
	}
} /* size: 0, variables: 1 */

// <028CE6BE> kv3lib/keyvalues3.cpp:3893
// variables: 2
void KeyValues3::Internal_AssertIsTable(const char* pFuncName, bool bAllowNull)
{
	const char   __FUNCTION__; // 54662
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3895
	}
} /* size: 0, variables: 1 */

// <012338F0> kv3lib/keyvalues3.cpp:3893
// variables: 2
void KeyValues3::Internal_AssertIsTable(const char* pFuncName, bool bAllowNull)
{
	const char   __FUNCTION__; // 16246
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3895
	}
} /* size: 0, variables: 1 */

// <002AF0B5> kv3lib/keyvalues3.cpp:3893
// variables: 2
void KeyValues3::Internal_AssertIsTable(const char* pFuncName, bool bAllowNull)
{
	const char   __FUNCTION__; // 2413
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3895
	}
} /* size: 0, variables: 1 */

// <006142B7> kv3lib/keyvalues3.cpp:3893
// variables: 2
void KeyValues3::Internal_AssertIsTable(const char* pFuncName, bool bAllowNull)
{
	const char   __FUNCTION__; // 28399
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3895
	}
} /* size: 0, variables: 1 */

// <009EBF3E> kv3lib/keyvalues3.cpp:3893
// variables: 2
void KeyValues3::Internal_AssertIsTable(const char* pFuncName, bool bAllowNull)
{
	const char   __FUNCTION__; // 34550
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3895
	}
} /* size: 0, variables: 1 */

// <000F8ABF> kv3lib/keyvalues3.cpp:3893
// variables: 2
void KeyValues3::Internal_AssertIsTable(const char* pFuncName, bool bAllowNull)
{
	const char   __FUNCTION__; // 27047
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3895
	}
} /* size: 0, variables: 1 */

// <055859E7> kv3lib/keyvalues3.cpp:3904
// function calls: 4
void KeyValues3::Internal_AssertIsArray(const char* pFuncName, bool bAllowNull)
{
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3906
	{
	}
	{
	}
	KeyValues3::Internal_AssertIsTable(
				const char* pFuncName,
				bool bAllowNull);  // 3893
} /* size: 81, inline expansions: 4 (25 bytes) */

// <05556C2D> kv3lib/keyvalues3.cpp:3904
// variables: 2
void KeyValues3::Internal_AssertIsArray(const char* pFuncName, bool bAllowNull)
{
	const char   __FUNCTION__; // 35991
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3906
	}
} /* size: 0, variables: 1 */

// <028CE627> kv3lib/keyvalues3.cpp:3904
// variables: 2
void KeyValues3::Internal_AssertIsArray(const char* pFuncName, bool bAllowNull)
{
	const char   __FUNCTION__; // 54662
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3906
	}
} /* size: 0, variables: 1 */

// <01233859> kv3lib/keyvalues3.cpp:3904
// variables: 2
void KeyValues3::Internal_AssertIsArray(const char* pFuncName, bool bAllowNull)
{
	const char   __FUNCTION__; // 16246
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3906
	}
} /* size: 0, variables: 1 */

// <002AF01E> kv3lib/keyvalues3.cpp:3904
// variables: 2
void KeyValues3::Internal_AssertIsArray(const char* pFuncName, bool bAllowNull)
{
	const char   __FUNCTION__; // 2413
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3906
	}
} /* size: 0, variables: 1 */

// <00614220> kv3lib/keyvalues3.cpp:3904
// variables: 2
void KeyValues3::Internal_AssertIsArray(const char* pFuncName, bool bAllowNull)
{
	const char   __FUNCTION__; // 28399
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3906
	}
} /* size: 0, variables: 1 */

// <009EBEA7> kv3lib/keyvalues3.cpp:3904
// variables: 2
void KeyValues3::Internal_AssertIsArray(const char* pFuncName, bool bAllowNull)
{
	const char   __FUNCTION__; // 34550
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3906
	}
} /* size: 0, variables: 1 */

// <000F8A28> kv3lib/keyvalues3.cpp:3904
// variables: 2
void KeyValues3::Internal_AssertIsArray(const char* pFuncName, bool bAllowNull)
{
	const char   __FUNCTION__; // 27047
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3906
	}
} /* size: 0, variables: 1 */

// <05585B27> kv3lib/keyvalues3.cpp:3915
void KeyValues3::Internal_SetType(KeyValues3InternalType_t nType)
{
} /* size: 0 */

// <05585B5D> kv3lib/keyvalues3.cpp:3926
// variables: 3
// function calls: 2
void KeyValues3::Internal_GetMetadata(CKeyValues3Context** pOutContext)
{
	CKeyValues3Cluster* pCluster; // 3928
	{
		const KeyValues3* pFirstInCluster; // 490
		CKeyValues3Cluster* pCluster; // 491
	}
	ClusterFromPointer(const KeyValues3* pKV3); // 3928
	{
	}
	CKV3ClusterAlloc<KeyValues3, 63>::GetParentContext(); // 3940
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <05556BCC> kv3lib/keyvalues3.cpp:3926
// variable: 1
void KeyValues3::Internal_GetMetadata(CKeyValues3Context** pOutContext)
{
	CKeyValues3Cluster* pCluster; // 3928
} /* size: 0, variables: 1 */

// <055568FA> kv3lib/keyvalues3.cpp:3948
// function calls: 11
void CKeyValues3Context::CKeyValues3Context()
{
	CKeyValues3Context::Impl(); // 3955
	Construct<CKeyValues3ContextImpl, CKeyValues3Context*>(CKeyValues3ContextImpl* pMemory); // 3955
	CKeyValues3Context::Impl(); // 3957
	FindLeastSignificantBit64(uint64 n); // 407
	CKV3ClusterAlloc<KeyValues3, 63>::AllocateEntry(); // 501
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 3750
	KeyValues3::Internal_ClearDataWithoutFreeing(); // 3752
	KeyValues3::KeyValues3(
			CKeyValues3Context* pContext,
			KeyValues3InternalType_t nInternalType,
			uint nClusterIndex);  // 504
	CKeyValues3Cluster::Allocate(
		KeyValues3InternalType_t nInternalType);  // 3957
	CKeyValues3Context::Impl(); // 3960
	CKeyValues3Context::Impl(); // 3961
} /* size: 0, inline expansions: 11 (255 bytes) */

// <055568DD> kv3lib/keyvalues3.cpp:3948
void CKeyValues3Context::CKeyValues3Context()
{
} /* size: 0 */

// <05556830> kv3lib/keyvalues3.cpp:3967
// function calls: 2
void CKeyValues3Context::~CKeyValues3Context()
{
	CKeyValues3Context::Impl(); // 3969
	Destruct<CKeyValues3ContextImpl>(CKeyValues3ContextImpl* pMemory); // 3969
} /* size: 9, inline expansions: 2 (5 bytes) */

// <05556813> kv3lib/keyvalues3.cpp:3967
void CKeyValues3Context::~CKeyValues3Context()
{
} /* size: 0 */

// <055567DF> kv3lib/keyvalues3.cpp:3975
void CKeyValues3Context::GetBinarySerializationBuffer()
{
} /* size: 9 */

// <05588FB6> kv3lib/keyvalues3.cpp:3983
// variables: 3
// function calls: 11
void AllocKV(KeyValues3* pParent, KeyValues3Type_t nType)
{
	CKeyValues3Context* pContext; // 3985
	ClusterFromPointer(const KeyValues3* pKV3); // 3782
	{
		const KeyValues3* pFirstInCluster; // 490
		CKeyValues3Cluster* pCluster; // 491
	}
	ClusterFromPointer(const KeyValues3* pKV3); // 3782
	{
	}
	CKV3ClusterAlloc<KeyValues3, 63>::GetParentContext(); // 3783
	KeyValues3::GetParentContext(); // 3780
	KeyValues3::GetParentContext(); // 3985
	CKeyValues3Context::Impl(); // 3988
	CKeyValues3ContextImpl::AllocKV_Internal(
			KeyValues3Type_t nType);  // 3988
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 3722
	KeyValues3::Internal_ClearDataWithoutFreeing(); // 3724
	KeyValues3::KeyValues3(
			KeyValues3Type_t nType);  // 3992
	AllocKV(KeyValues3* pParent,
		KeyValues3Type_t nType);  // 3983
} /* size: 0, variables: 1, inline expansions: 11 (400 bytes) */

// <055567A8> kv3lib/keyvalues3.cpp:3983
// variable: 1
void AllocKV(KeyValues3* pParent, KeyValues3Type_t nType)
{
	CKeyValues3Context* pContext; // 3985
} /* size: 0, variables: 1 */

// <05588F34> kv3lib/keyvalues3.cpp:3999
void CKeyValues3ContextImpl::AllocKV_Internal(KeyValues3Type_t nType)
{
} /* size: 0 */

// <05585C7E> kv3lib/keyvalues3.cpp:4007
void CKeyValues3ContextImpl::AllocArray_Internal()
{
} /* size: 0 */

// <05585CDA> kv3lib/keyvalues3.cpp:4015
void CKeyValues3ContextImpl::AllocTable_Internal()
{
} /* size: 0 */

// <055886EB> kv3lib/keyvalues3.cpp:4024
// variables: 3
// function calls: 31
void AllocateFromCluster<CKeyValues3Cluster, CUtlMemoryFixedGrowable<CKeyValues3Cluster*, 8, int>, CKeyValues3ContextImpl::KeyValues3InternalType_t>(CKeyValues3Cluster *& pFreeClusterList, CUtlVectorBase<CKeyValues3Cluster*, CUtlMemoryFixedGrowable<CKeyValues3Cluster*, 8, int> >& allClusters, <ERROR: type 0 not found>)
{
	CKeyValues3Cluster* pNewCluster; // 4042
	{
		KeyValues3* pResult; // 4030
		FindLeastSignificantBit64(uint64 n); // 407
		CKV3ClusterAlloc<KeyValues3, 63>::AllocateEntry(); // 501
		KeyValues3::Internal_SetType(
				KeyValues3InternalType_t nType);  // 3750
		KeyValues3::Internal_ClearDataWithoutFreeing(); // 3752
		KeyValues3::KeyValues3(
				CKeyValues3Context* pContext,
				KeyValues3InternalType_t nInternalType,
				uint nClusterIndex);  // 504
		CKeyValues3Cluster::Allocate(
			KeyValues3InternalType_t nInternalType);  // 4030
		CKV3ClusterAlloc<KeyValues3, 63>::IsFull(); // 4031
		{
			CKeyValues3Cluster* pNextFreeCluster; // 4034
			CKeyValues3Cluster::GetNextFreeCluster(); // 4034
			CKeyValues3Cluster::SetNextFreeCluster(
						CKeyValues3Cluster* pCluster);  // 4035
		}
	}
	CKeyValues3Cluster::CKeyValues3Cluster(
				CKeyValues3Context* pContext);  // 4042
	CKeyValues3ContextImpl::InitNewCluster(
			CKeyValues3Cluster* pKVCluster);  // 4043
	CUtlMemory<CKeyValues3Cluster::NumAllocated(); // 1196
	CUtlMemory<CKeyValues3Cluster::Base(); // 112
	CUtlVectorBase<CKeyValues3Cluster::Base(); // 368
	CUtlVectorBase<CKeyValues3Cluster::ResetDbgInfo(); // 824
	CUtlMemory<CKeyValues3Cluster::IsGrowable(); // 823
	CUtlMemory<CKeyValues3Cluster::IsExternallyAllocated(); // 859
	CUtlMemory<CKeyValues3Cluster::IsExternallyAllocated(); // 861
	CUtlMemory<CKeyValues3Cluster::Grow(
		int num);  // 806
	CUtlVectorBase<CKeyValues3Cluster::GrowMemory(
			int num);  // 1198
	CUtlMemory<CKeyValues3Cluster::operator[](
			int i);  // 602
	CUtlVectorBase<CKeyValues3Cluster::Element(
		int i);  // 1201
	CopyConstruct<CKeyValues3Cluster*>(CKeyValues3Cluster** pMemory,
						CKeyValues3Cluster* const& src);  // 1201
	CUtlVectorBase<CKeyValues3Cluster::AddToTail(
			CKeyValues3Cluster* const& src);  // 4044
	FindLeastSignificantBit64(uint64 n); // 407
	CKV3ClusterAlloc<KeyValues3, 63>::AllocateEntry(); // 501
	KeyValues3::Internal_SetType(
			KeyValues3InternalType_t nType);  // 3750
	KeyValues3::Internal_ClearDataWithoutFreeing(); // 3752
	KeyValues3::KeyValues3(
			CKeyValues3Context* pContext,
			KeyValues3InternalType_t nInternalType,
			uint nClusterIndex);  // 504
	CKeyValues3Cluster::Allocate(
		KeyValues3InternalType_t nInternalType);  // 4049
	CKeyValues3ContextImpl::AllocateFromCluster<CKeyValues3Cluster, CUtlMemoryFixedGrowable<CKeyValues3Cluster*, 8, int>, KeyValues3InternalType_t>(
																CKeyValues3Cluster *& pFreeClusterList,
																CUtlVectorBase<CKeyValues3Cluster*, CUtlMemoryFixedGrowable<CKeyValues3Cluster*, 8, int> >& allClusters);  // 4024
} /* size: 699, variables: 1, inline expansions: 22 (1667 bytes) */

// <055840DF> kv3lib/keyvalues3.cpp:4024
// variables: 3
// function calls: 6
void AllocateFromCluster<CKeyValues3TableCluster, CUtlMemoryFixedGrowable<CKeyValues3TableCluster*, 4, int> CKeyValues3TableCluster ::>()
{
	CKeyValues3TableCluster* pNewCluster; // 4042
	{
		CKeyValues3Table* pResult; // 4030
		FindLeastSignificantBit64(uint64 n); // 407
		CKV3ClusterAlloc<CKeyValues3Table, 63>::AllocateEntry(); // 655
		CKeyValues3TableCluster::Allocate(); // 4030
		CKV3ClusterAlloc<CKeyValues3Table, 63>::IsFull(); // 4031
		{
			CKeyValues3TableCluster* pNextFreeCluster; // 4034
			CKeyValues3TableCluster::GetNextFreeCluster(); // 4034
			CKeyValues3TableCluster::SetNextFreeCluster(
						CKeyValues3TableCluster* pCluster);  // 4035
		}
	}
} /* size: 579, variables: 1 */

// <055828C0> kv3lib/keyvalues3.cpp:4024
// variables: 3
// function calls: 3
void AllocateFromCluster<CKeyValues3ArrayCluster, CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster*, 4, int> CKeyValues3ArrayCluster ::>()
{
	CKeyValues3ArrayCluster* pNewCluster; // 4042
	{
		CKeyValues3Array* pResult; // 4030
		CKV3ClusterAlloc<CKeyValues3Array, 63>::IsFull(); // 4031
		{
			CKeyValues3ArrayCluster* pNextFreeCluster; // 4034
			CKeyValues3ArrayCluster::GetNextFreeCluster(); // 4034
			CKeyValues3ArrayCluster::SetNextFreeCluster(
						CKeyValues3ArrayCluster* pCluster);  // 4035
		}
	}
} /* size: 543, variables: 1 */

// <0554D101> kv3lib/keyvalues3.cpp:4024
// variables: 3
void AllocateFromCluster<CKeyValues3Cluster, CUtlMemoryFixedGrowable<CKeyValues3Cluster*, 8, int>, CKeyValues3ContextImpl::KeyValues3InternalType_t>(CKeyValues3Cluster *& pFreeClusterList, CUtlVectorBase<CKeyValues3Cluster*, CUtlMemoryFixedGrowable<CKeyValues3Cluster*, 8, int> >& allClusters)
{
	CKeyValues3Cluster* pNewCluster; // 4042
	{
		KeyValues3* pResult; // 4030
		{
			CKeyValues3Cluster* pNextFreeCluster; // 4034
		}
	}
} /* size: 0, variables: 1 */

// <0554D07D> kv3lib/keyvalues3.cpp:4024
// variables: 3
void AllocateFromCluster<CKeyValues3ArrayCluster, CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster*, 4, int> CKeyValues3ContextImpl::>(CKeyValues3ArrayCluster *& pFreeClusterList, CUtlVectorBase<CKeyValues3ArrayCluster*, CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster*, 4, int> >& allClusters)
{
	CKeyValues3ArrayCluster* pNewCluster; // 4042
	{
		CKeyValues3Array* pResult; // 4030
		{
			CKeyValues3ArrayCluster* pNextFreeCluster; // 4034
		}
	}
} /* size: 0, variables: 1 */

// <0554CFFF> kv3lib/keyvalues3.cpp:4024
// variables: 3
void AllocateFromCluster<CKeyValues3TableCluster, CUtlMemoryFixedGrowable<CKeyValues3TableCluster*, 4, int> CKeyValues3ContextImpl::>(CKeyValues3TableCluster *& pFreeClusterList, CUtlVectorBase<CKeyValues3TableCluster*, CUtlMemoryFixedGrowable<CKeyValues3TableCluster*, 4, int> >& allClusters)
{
	CKeyValues3TableCluster* pNewCluster; // 4042
	{
		CKeyValues3Table* pResult; // 4030
		{
			CKeyValues3TableCluster* pNextFreeCluster; // 4034
		}
	}
} /* size: 0, variables: 1 */

// <05588013> kv3lib/keyvalues3.cpp:4055
// variables: 3
// function calls: 8
void FreeKV(KeyValues3* pParent, KeyValues3* pKV)
{
	CKeyValues3Context* pContext; // 4058
	ClusterFromPointer(const KeyValues3* pKV3); // 3782
	{
		const KeyValues3* pFirstInCluster; // 490
		CKeyValues3Cluster* pCluster; // 491
	}
	ClusterFromPointer(const KeyValues3* pKV3); // 3782
	{
	}
	CKV3ClusterAlloc<KeyValues3, 63>::GetParentContext(); // 3783
	KeyValues3::GetParentContext(); // 3780
	KeyValues3::GetParentContext(); // 4058
	CKeyValues3ContextImpl::FreeKV_Internal(
			KeyValues3* pKV);  // 4061
	KeyValues3::~KeyValues3(); // 4065
	FreeKV(KeyValues3* pParent,
		KeyValues3* pKV);  // 4055
} /* size: 0, variables: 1, inline expansions: 8 (316 bytes) */

// <05556710> kv3lib/keyvalues3.cpp:4055
// variable: 1
void FreeKV(KeyValues3* pParent, KeyValues3* pKV)
{
	CKeyValues3Context* pContext; // 4058
} /* size: 0, variables: 1 */

// <05587F9A> kv3lib/keyvalues3.cpp:4072
void CKeyValues3ContextImpl::FreeKV_Internal(KeyValues3* pKV)
{
} /* size: 0 */

// <05585D36> kv3lib/keyvalues3.cpp:4082
void CKeyValues3ContextImpl::FreeArray_Internal(CKeyValues3Array* pArray)
{
} /* size: 0 */

// <05585DAB> kv3lib/keyvalues3.cpp:4090
void CKeyValues3ContextImpl::FreeTable_Internal(CKeyValues3Table* pTable)
{
} /* size: 0 */

// <055876E7> kv3lib/keyvalues3.cpp:4100
// variables: 7
// function calls: 35
void FreeToCluster<CKeyValues3Cluster, CUtlMemoryFixedGrowable<CKeyValues3Cluster*, 8, int> CKeyValues3Cluster::>()
{
	CKeyValues3Cluster* pCluster; // 4102
	int nNewAllocCount; // 4106
	{
		const KeyValues3* pFirstInCluster; // 490
		CKeyValues3Cluster* pCluster; // 491
	}
	ClusterFromPointer(const KeyValues3* pKV3); // 4102
	KeyValues3::~KeyValues3(); // 1526
	Destruct<KeyValues3>(KeyValues3* pMemory); // 437
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 438
	{
	}
	CKV3ClusterAlloc<KeyValues3, 63>::Free(
		KeyValues3* pKV3);  // 425
	CKV3ClusterAlloc<KeyValues3, 63>::Free(
		KeyValues3* pKV3);  // 4104
	PopulationCount(uint64 v); // 312
	CKV3ClusterAlloc<KeyValues3, 63>::AllocationCount(); // 4106
	{
		{
			int i; // 1531
			CUtlVectorBase<CKeyValues3Cluster::Count(); // 1531
			CUtlMemory<CKeyValues3Cluster::operator[](
					int i);  // 609
			CUtlVectorBase<CKeyValues3Cluster::Element(
				int i);  // 1533
		}
		CUtlVectorBase<CKeyValues3Cluster::Find(
			CKeyValues3Cluster* const& src);  // 1629
		CUtlMemory<CKeyValues3Cluster::operator[](
				int i);  // 602
		CUtlVectorBase<CKeyValues3Cluster::Element(
			int i);  // 1575
		Destruct<CKeyValues3Cluster*>(CKeyValues3Cluster** pMemory); // 1575
		{
			const bool  bNotLast; // 1578
			CUtlMemory<CKeyValues3Cluster::operator[](
					int i);  // 602
			CUtlVectorBase<CKeyValues3Cluster::Element(
				int i);  // 1584
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1584
		}
		CUtlVectorBase<CKeyValues3Cluster::FastRemove(
				int elem);  // 1632
		CUtlVectorBase<CKeyValues3Cluster::FindAndFastRemove(
					CKeyValues3Cluster* const& src);  // 4112
		{
			CKeyValues3Cluster* pPrevClusterInFreeList; // 4121
			CKeyValues3Cluster::GetNextFreeCluster(); // 4122
			CKeyValues3Cluster::GetNextFreeCluster(); // 4129
			CKeyValues3Cluster::SetNextFreeCluster(
						CKeyValues3Cluster* pCluster);  // 4129
			{
			}
		}
		CKeyValues3Cluster::GetNextFreeCluster(); // 4117
		CBufferString::~CBufferString(); // 274
		CBufferString::~CBufferString(); // 274
		CKeyValues3Metadata::~CKeyValues3Metadata(); // 286
		CKeyValues3MetadataCluster::~CKeyValues3MetadataCluster(); // 460
		KeyValues3::~KeyValues3(); // 309
		CKV3ClusterAlloc<KeyValues3, 63>::~CKV3ClusterAlloc(); // 462
		CKeyValues3Cluster::~CKeyValues3Cluster(); // 4133
		_DebuggerBreakInlineExpressionWrapper(void); // 4112
	}
	CKeyValues3Cluster::SetNextFreeCluster(
				CKeyValues3Cluster* pCluster);  // 4139
} /* size: 0, variables: 2, inline expansions: 10 (497 bytes) */

// <055843A7> kv3lib/keyvalues3.cpp:4100
// variables: 7
// function calls: 29
void FreeToCluster<CKeyValues3TableCluster, CUtlMemoryFixedGrowable<CKeyValues3TableCluster*, 4, int> CKeyValues3TableCluster::>()
{
	CKeyValues3TableCluster* pCluster; // 4102
	int nNewAllocCount; // 4106
	{
		const CKeyValues3Table* pFirstInCluster; // 644
		CKeyValues3TableCluster* pCluster; // 645
	}
	ClusterFromPointer(const CKeyValues3Table* pTable); // 4102
	Destruct<CKeyValues3Table>(CKeyValues3Table* pMemory); // 437
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 438
	{
	}
	CKV3ClusterAlloc<CKeyValues3Table, 63>::Free(
		CKeyValues3Table* pKV3);  // 425
	CKV3ClusterAlloc<CKeyValues3Table, 63>::Free(
		CKeyValues3Table* pKV3);  // 4104
	PopulationCount(uint64 v); // 312
	CKV3ClusterAlloc<CKeyValues3Table, 63>::AllocationCount(); // 4106
	{
		{
			int i; // 1531
			CUtlVectorBase<CKeyValues3TableCluster::Count(); // 1531
			CUtlMemory<CKeyValues3TableCluster::operator[](
					int i);  // 609
			CUtlVectorBase<CKeyValues3TableCluster::Element(
				int i);  // 1533
		}
		CUtlVectorBase<CKeyValues3TableCluster::Find(
			CKeyValues3TableCluster* const& src);  // 1629
		CUtlMemory<CKeyValues3TableCluster::operator[](
				int i);  // 602
		CUtlVectorBase<CKeyValues3TableCluster::Element(
			int i);  // 1575
		Destruct<CKeyValues3TableCluster*>(CKeyValues3TableCluster** pMemory); // 1575
		{
			const bool  bNotLast; // 1578
			CUtlMemory<CKeyValues3TableCluster::operator[](
					int i);  // 602
			CUtlVectorBase<CKeyValues3TableCluster::Element(
				int i);  // 1584
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1584
		}
		CUtlVectorBase<CKeyValues3TableCluster::FastRemove(
				int elem);  // 1632
		CUtlVectorBase<CKeyValues3TableCluster::FindAndFastRemove(
					CKeyValues3TableCluster* const& src);  // 4112
		{
			CKeyValues3TableCluster* pPrevClusterInFreeList; // 4121
			CKeyValues3TableCluster::GetNextFreeCluster(); // 4122
			CKeyValues3TableCluster::GetNextFreeCluster(); // 4129
			CKeyValues3TableCluster::SetNextFreeCluster(
						CKeyValues3TableCluster* pCluster);  // 4129
			{
			}
		}
		CKeyValues3TableCluster::GetNextFreeCluster(); // 4117
		CKV3ClusterAlloc<CKeyValues3Table, 63>::~CKV3ClusterAlloc(); // 616
		CKeyValues3TableCluster::~CKeyValues3TableCluster(); // 4133
		_DebuggerBreakInlineExpressionWrapper(void); // 4112
	}
	CKeyValues3TableCluster::SetNextFreeCluster(
				CKeyValues3TableCluster* pCluster);  // 4139
} /* size: 0, variables: 2, inline expansions: 9 (487 bytes) */

// <055800FA> kv3lib/keyvalues3.cpp:4100
// variables: 7
// function calls: 67
void FreeToCluster<CKeyValues3ArrayCluster, CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster*, 4, int> CKeyValues3ArrayCluster::>()
{
	CKeyValues3ArrayCluster* pCluster; // 4102
	int nNewAllocCount; // 4106
	{
		const CKeyValues3Array* pFirstInCluster; // 591
		CKeyValues3ArrayCluster* pCluster; // 592
	}
	ClusterFromPointer(const CKeyValues3Array* pArray); // 4102
	CUtlMemory<KeyValues3::IsExternallyAllocated(); // 577
	CUtlMemory<KeyValues3::ConvertToExternalMemory(
				KeyValues3** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<KeyValues3::Purge_FixedGrowable(
				KeyValues3** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<KeyValues3::Purge_FixedGrowable(
				KeyValues3** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<4, KeyValues3::Base(); // 237
	CUtlMemoryFixedGrowable<KeyValues3::Purge(
		int numElements);  // 1799
	CUtlVectorBase<KeyValues3::RemoveAll(); // 1798
	CUtlVectorBase<KeyValues3::ResetDbgInfo(); // 1800
	CUtlVectorBase<KeyValues3::Purge(); // 560
	CUtlMemory<KeyValues3::Purge(); // 903
	CUtlMemory<KeyValues3::Purge(); // 510
	ValidateAlignment<KeyValues3*>(void); // 508
	CUtlMemory<KeyValues3::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<KeyValues3::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<KeyValues3::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<KeyValues3::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<KeyValues3::~CUtlVectorFixedGrowable(); // 155
	CKeyValues3Array::~CKeyValues3Array(); // 1526
	Destruct<CKeyValues3Array>(CKeyValues3Array* pMemory); // 437
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 438
	{
	}
	CKV3ClusterAlloc<CKeyValues3Array, 63>::Free(
		CKeyValues3Array* pKV3);  // 425
	CKV3ClusterAlloc<CKeyValues3Array, 63>::Free(
		CKeyValues3Array* pKV3);  // 4104
	PopulationCount(uint64 v); // 312
	CKV3ClusterAlloc<CKeyValues3Array, 63>::AllocationCount(); // 4106
	{
		{
			int i; // 1531
			CUtlVectorBase<CKeyValues3ArrayCluster::Count(); // 1531
			CUtlMemory<CKeyValues3ArrayCluster::operator[](
					int i);  // 609
			CUtlVectorBase<CKeyValues3ArrayCluster::Element(
				int i);  // 1533
		}
		CUtlVectorBase<CKeyValues3ArrayCluster::Find(
			CKeyValues3ArrayCluster* const& src);  // 1629
		CUtlMemory<CKeyValues3ArrayCluster::operator[](
				int i);  // 602
		CUtlVectorBase<CKeyValues3ArrayCluster::Element(
			int i);  // 1575
		Destruct<CKeyValues3ArrayCluster*>(CKeyValues3ArrayCluster** pMemory); // 1575
		{
			const bool  bNotLast; // 1578
			CUtlMemory<CKeyValues3ArrayCluster::operator[](
					int i);  // 602
			CUtlVectorBase<CKeyValues3ArrayCluster::Element(
				int i);  // 1584
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1584
		}
		CUtlVectorBase<CKeyValues3ArrayCluster::FastRemove(
				int elem);  // 1632
		CUtlVectorBase<CKeyValues3ArrayCluster::FindAndFastRemove(
					CKeyValues3ArrayCluster* const& src);  // 4112
		{
			CKeyValues3ArrayCluster* pPrevClusterInFreeList; // 4121
			CKeyValues3ArrayCluster::GetNextFreeCluster(); // 4122
			CKeyValues3ArrayCluster::GetNextFreeCluster(); // 4129
			CKeyValues3ArrayCluster::SetNextFreeCluster(
						CKeyValues3ArrayCluster* pCluster);  // 4129
			{
			}
		}
		CKeyValues3ArrayCluster::GetNextFreeCluster(); // 4117
		CUtlMemory<KeyValues3::IsExternallyAllocated(); // 577
		CUtlMemory<KeyValues3::ConvertToExternalMemory(
					KeyValues3** pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<KeyValues3::Purge_FixedGrowable(
					KeyValues3** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<KeyValues3::Purge_FixedGrowable(
					KeyValues3** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		CUtlMemoryFixedGrowable<KeyValues3::Purge(
			int numElements);  // 1799
		CUtlMemory<KeyValues3::Base(); // 112
		CUtlVectorBase<KeyValues3::Base(); // 368
		CUtlVectorBase<KeyValues3::ResetDbgInfo(); // 1800
		CUtlVectorBase<KeyValues3::RemoveAll(); // 1798
		CUtlVectorBase<KeyValues3::Purge(); // 560
		CUtlMemory<KeyValues3::IsExternallyAllocated(); // 905
		CUtlMemory<KeyValues3::Purge(); // 903
		CUtlMemory<KeyValues3::Purge(); // 510
		ValidateAlignment<KeyValues3*>(void); // 508
		CUtlMemory<KeyValues3::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<KeyValues3::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<KeyValues3::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<KeyValues3::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<KeyValues3::~CUtlVectorFixedGrowable(); // 155
		CKeyValues3Array::~CKeyValues3Array(); // 309
		CKV3ClusterAlloc<CKeyValues3Array, 63>::~CKV3ClusterAlloc(); // 563
		CKeyValues3ArrayCluster::~CKeyValues3ArrayCluster(); // 4133
		_DebuggerBreakInlineExpressionWrapper(void); // 4112
	}
	CKeyValues3ArrayCluster::SetNextFreeCluster(
				CKeyValues3ArrayCluster* pCluster);  // 4139
} /* size: 0, variables: 2, inline expansions: 27 (2046 bytes) */

// <0554CEC8> kv3lib/keyvalues3.cpp:4100
// variables: 5
void FreeToCluster<CKeyValues3Cluster, CUtlMemoryFixedGrowable<CKeyValues3Cluster*, 8, int> CKeyValues3ContextImpl::>(ClusteredType* pElement, CKeyValues3Cluster* pNoFreeCluster, CUtlVectorBase<CKeyValues3Cluster*, CUtlMemoryFixedGrowable<CKeyValues3Cluster*, 8, int> >& allClusters, CKeyValues3Cluster *& pFreeClusterList)
{
	const char   __FUNCTION__; // 35748
	CKeyValues3Cluster* pCluster; // 4102
	int nNewAllocCount; // 4106
	{
		{
			CKeyValues3Cluster* pPrevClusterInFreeList; // 4121
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4126
			}
		}
	}
} /* size: 0, variables: 3 */

// <0554CD8B> kv3lib/keyvalues3.cpp:4100
// variables: 5
void FreeToCluster<CKeyValues3ArrayCluster, CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster*, 4, int> CKeyValues3ContextImpl::>(ClusteredType* pElement, CKeyValues3ArrayCluster* pNoFreeCluster, CUtlVectorBase<CKeyValues3ArrayCluster*, CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster*, 4, int> >& allClusters, CKeyValues3ArrayCluster *& pFreeClusterList)
{
	const char   __FUNCTION__; // 35748
	CKeyValues3ArrayCluster* pCluster; // 4102
	int nNewAllocCount; // 4106
	{
		{
			CKeyValues3ArrayCluster* pPrevClusterInFreeList; // 4121
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4126
			}
		}
	}
} /* size: 0, variables: 3 */

// <0554CC4E> kv3lib/keyvalues3.cpp:4100
// variables: 5
void FreeToCluster<CKeyValues3TableCluster, CUtlMemoryFixedGrowable<CKeyValues3TableCluster*, 4, int> CKeyValues3ContextImpl::>(ClusteredType* pElement, CKeyValues3TableCluster* pNoFreeCluster, CUtlVectorBase<CKeyValues3TableCluster*, CUtlMemoryFixedGrowable<CKeyValues3TableCluster*, 4, int> >& allClusters, CKeyValues3TableCluster *& pFreeClusterList)
{
	const char   __FUNCTION__; // 35748
	CKeyValues3TableCluster* pCluster; // 4102
	int nNewAllocCount; // 4106
	{
		{
			CKeyValues3TableCluster* pPrevClusterInFreeList; // 4121
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4126
			}
		}
	}
} /* size: 0, variables: 3 */

// <028C48C2> kv3lib/keyvalues3.cpp:4100
// variables: 5
void FreeToCluster<CKeyValues3Cluster, CUtlMemoryFixedGrowable<CKeyValues3Cluster*, 8, int> CKeyValues3ContextImpl::>(ClusteredType* pElement, CKeyValues3Cluster* pNoFreeCluster, CUtlVectorBase<CKeyValues3Cluster*, CUtlMemoryFixedGrowable<CKeyValues3Cluster*, 8, int> >& allClusters, CKeyValues3Cluster *& pFreeClusterList)
{
	const char   __FUNCTION__; // 54419
	CKeyValues3Cluster* pCluster; // 4102
	int nNewAllocCount; // 4106
	{
		{
			CKeyValues3Cluster* pPrevClusterInFreeList; // 4121
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4126
			}
		}
	}
} /* size: 0, variables: 3 */

// <028C4785> kv3lib/keyvalues3.cpp:4100
// variables: 5
void FreeToCluster<CKeyValues3ArrayCluster, CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster*, 4, int> CKeyValues3ContextImpl::>(ClusteredType* pElement, CKeyValues3ArrayCluster* pNoFreeCluster, CUtlVectorBase<CKeyValues3ArrayCluster*, CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster*, 4, int> >& allClusters, CKeyValues3ArrayCluster *& pFreeClusterList)
{
	const char   __FUNCTION__; // 54419
	CKeyValues3ArrayCluster* pCluster; // 4102
	int nNewAllocCount; // 4106
	{
		{
			CKeyValues3ArrayCluster* pPrevClusterInFreeList; // 4121
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4126
			}
		}
	}
} /* size: 0, variables: 3 */

// <028C4648> kv3lib/keyvalues3.cpp:4100
// variables: 5
void FreeToCluster<CKeyValues3TableCluster, CUtlMemoryFixedGrowable<CKeyValues3TableCluster*, 4, int> CKeyValues3ContextImpl::>(ClusteredType* pElement, CKeyValues3TableCluster* pNoFreeCluster, CUtlVectorBase<CKeyValues3TableCluster*, CUtlMemoryFixedGrowable<CKeyValues3TableCluster*, 4, int> >& allClusters, CKeyValues3TableCluster *& pFreeClusterList)
{
	const char   __FUNCTION__; // 54419
	CKeyValues3TableCluster* pCluster; // 4102
	int nNewAllocCount; // 4106
	{
		{
			CKeyValues3TableCluster* pPrevClusterInFreeList; // 4121
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4126
			}
		}
	}
} /* size: 0, variables: 3 */

// <01229AF4> kv3lib/keyvalues3.cpp:4100
// variables: 5
void FreeToCluster<CKeyValues3Cluster, CUtlMemoryFixedGrowable<CKeyValues3Cluster*, 8, int> CKeyValues3ContextImpl::>(ClusteredType* pElement, CKeyValues3Cluster* pNoFreeCluster, CUtlVectorBase<CKeyValues3Cluster*, CUtlMemoryFixedGrowable<CKeyValues3Cluster*, 8, int> >& allClusters, CKeyValues3Cluster *& pFreeClusterList)
{
	const char   __FUNCTION__; // 16003
	CKeyValues3Cluster* pCluster; // 4102
	int nNewAllocCount; // 4106
	{
		{
			CKeyValues3Cluster* pPrevClusterInFreeList; // 4121
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4126
			}
		}
	}
} /* size: 0, variables: 3 */

// <012299B7> kv3lib/keyvalues3.cpp:4100
// variables: 5
void FreeToCluster<CKeyValues3ArrayCluster, CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster*, 4, int> CKeyValues3ContextImpl::>(ClusteredType* pElement, CKeyValues3ArrayCluster* pNoFreeCluster, CUtlVectorBase<CKeyValues3ArrayCluster*, CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster*, 4, int> >& allClusters, CKeyValues3ArrayCluster *& pFreeClusterList)
{
	const char   __FUNCTION__; // 16003
	CKeyValues3ArrayCluster* pCluster; // 4102
	int nNewAllocCount; // 4106
	{
		{
			CKeyValues3ArrayCluster* pPrevClusterInFreeList; // 4121
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4126
			}
		}
	}
} /* size: 0, variables: 3 */

// <0122987A> kv3lib/keyvalues3.cpp:4100
// variables: 5
void FreeToCluster<CKeyValues3TableCluster, CUtlMemoryFixedGrowable<CKeyValues3TableCluster*, 4, int> CKeyValues3ContextImpl::>(ClusteredType* pElement, CKeyValues3TableCluster* pNoFreeCluster, CUtlVectorBase<CKeyValues3TableCluster*, CUtlMemoryFixedGrowable<CKeyValues3TableCluster*, 4, int> >& allClusters, CKeyValues3TableCluster *& pFreeClusterList)
{
	const char   __FUNCTION__; // 16003
	CKeyValues3TableCluster* pCluster; // 4102
	int nNewAllocCount; // 4106
	{
		{
			CKeyValues3TableCluster* pPrevClusterInFreeList; // 4121
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4126
			}
		}
	}
} /* size: 0, variables: 3 */

// <002A52B9> kv3lib/keyvalues3.cpp:4100
// variables: 5
void FreeToCluster<CKeyValues3Cluster, CUtlMemoryFixedGrowable<CKeyValues3Cluster*, 8, int> CKeyValues3ContextImpl::>(ClusteredType* pElement, CKeyValues3Cluster* pNoFreeCluster, CUtlVectorBase<CKeyValues3Cluster*, CUtlMemoryFixedGrowable<CKeyValues3Cluster*, 8, int> >& allClusters, CKeyValues3Cluster *& pFreeClusterList)
{
	const char   __FUNCTION__; // 2170
	CKeyValues3Cluster* pCluster; // 4102
	int nNewAllocCount; // 4106
	{
		{
			CKeyValues3Cluster* pPrevClusterInFreeList; // 4121
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4126
			}
		}
	}
} /* size: 0, variables: 3 */

// <002A517C> kv3lib/keyvalues3.cpp:4100
// variables: 5
void FreeToCluster<CKeyValues3ArrayCluster, CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster*, 4, int> CKeyValues3ContextImpl::>(ClusteredType* pElement, CKeyValues3ArrayCluster* pNoFreeCluster, CUtlVectorBase<CKeyValues3ArrayCluster*, CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster*, 4, int> >& allClusters, CKeyValues3ArrayCluster *& pFreeClusterList)
{
	const char   __FUNCTION__; // 2170
	CKeyValues3ArrayCluster* pCluster; // 4102
	int nNewAllocCount; // 4106
	{
		{
			CKeyValues3ArrayCluster* pPrevClusterInFreeList; // 4121
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4126
			}
		}
	}
} /* size: 0, variables: 3 */

// <002A503F> kv3lib/keyvalues3.cpp:4100
// variables: 5
void FreeToCluster<CKeyValues3TableCluster, CUtlMemoryFixedGrowable<CKeyValues3TableCluster*, 4, int> CKeyValues3ContextImpl::>(ClusteredType* pElement, CKeyValues3TableCluster* pNoFreeCluster, CUtlVectorBase<CKeyValues3TableCluster*, CUtlMemoryFixedGrowable<CKeyValues3TableCluster*, 4, int> >& allClusters, CKeyValues3TableCluster *& pFreeClusterList)
{
	const char   __FUNCTION__; // 2170
	CKeyValues3TableCluster* pCluster; // 4102
	int nNewAllocCount; // 4106
	{
		{
			CKeyValues3TableCluster* pPrevClusterInFreeList; // 4121
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4126
			}
		}
	}
} /* size: 0, variables: 3 */

// <0060A4BB> kv3lib/keyvalues3.cpp:4100
// variables: 5
void FreeToCluster<CKeyValues3Cluster, CUtlMemoryFixedGrowable<CKeyValues3Cluster*, 8, int> CKeyValues3ContextImpl::>(ClusteredType* pElement, CKeyValues3Cluster* pNoFreeCluster, CUtlVectorBase<CKeyValues3Cluster*, CUtlMemoryFixedGrowable<CKeyValues3Cluster*, 8, int> >& allClusters, CKeyValues3Cluster *& pFreeClusterList)
{
	const char   __FUNCTION__; // 28156
	CKeyValues3Cluster* pCluster; // 4102
	int nNewAllocCount; // 4106
	{
		{
			CKeyValues3Cluster* pPrevClusterInFreeList; // 4121
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4126
			}
		}
	}
} /* size: 0, variables: 3 */

// <0060A37E> kv3lib/keyvalues3.cpp:4100
// variables: 5
void FreeToCluster<CKeyValues3ArrayCluster, CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster*, 4, int> CKeyValues3ContextImpl::>(ClusteredType* pElement, CKeyValues3ArrayCluster* pNoFreeCluster, CUtlVectorBase<CKeyValues3ArrayCluster*, CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster*, 4, int> >& allClusters, CKeyValues3ArrayCluster *& pFreeClusterList)
{
	const char   __FUNCTION__; // 28156
	CKeyValues3ArrayCluster* pCluster; // 4102
	int nNewAllocCount; // 4106
	{
		{
			CKeyValues3ArrayCluster* pPrevClusterInFreeList; // 4121
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4126
			}
		}
	}
} /* size: 0, variables: 3 */

// <0060A241> kv3lib/keyvalues3.cpp:4100
// variables: 5
void FreeToCluster<CKeyValues3TableCluster, CUtlMemoryFixedGrowable<CKeyValues3TableCluster*, 4, int> CKeyValues3ContextImpl::>(ClusteredType* pElement, CKeyValues3TableCluster* pNoFreeCluster, CUtlVectorBase<CKeyValues3TableCluster*, CUtlMemoryFixedGrowable<CKeyValues3TableCluster*, 4, int> >& allClusters, CKeyValues3TableCluster *& pFreeClusterList)
{
	const char   __FUNCTION__; // 28156
	CKeyValues3TableCluster* pCluster; // 4102
	int nNewAllocCount; // 4106
	{
		{
			CKeyValues3TableCluster* pPrevClusterInFreeList; // 4121
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4126
			}
		}
	}
} /* size: 0, variables: 3 */

// <009E2142> kv3lib/keyvalues3.cpp:4100
// variables: 5
void FreeToCluster<CKeyValues3Cluster, CUtlMemoryFixedGrowable<CKeyValues3Cluster*, 8, int> CKeyValues3ContextImpl::>(ClusteredType* pElement, CKeyValues3Cluster* pNoFreeCluster, CUtlVectorBase<CKeyValues3Cluster*, CUtlMemoryFixedGrowable<CKeyValues3Cluster*, 8, int> >& allClusters, CKeyValues3Cluster *& pFreeClusterList)
{
	const char   __FUNCTION__; // 34307
	CKeyValues3Cluster* pCluster; // 4102
	int nNewAllocCount; // 4106
	{
		{
			CKeyValues3Cluster* pPrevClusterInFreeList; // 4121
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4126
			}
		}
	}
} /* size: 0, variables: 3 */

// <009E2005> kv3lib/keyvalues3.cpp:4100
// variables: 5
void FreeToCluster<CKeyValues3ArrayCluster, CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster*, 4, int> CKeyValues3ContextImpl::>(ClusteredType* pElement, CKeyValues3ArrayCluster* pNoFreeCluster, CUtlVectorBase<CKeyValues3ArrayCluster*, CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster*, 4, int> >& allClusters, CKeyValues3ArrayCluster *& pFreeClusterList)
{
	const char   __FUNCTION__; // 34307
	CKeyValues3ArrayCluster* pCluster; // 4102
	int nNewAllocCount; // 4106
	{
		{
			CKeyValues3ArrayCluster* pPrevClusterInFreeList; // 4121
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4126
			}
		}
	}
} /* size: 0, variables: 3 */

// <009E1EC8> kv3lib/keyvalues3.cpp:4100
// variables: 5
void FreeToCluster<CKeyValues3TableCluster, CUtlMemoryFixedGrowable<CKeyValues3TableCluster*, 4, int> CKeyValues3ContextImpl::>(ClusteredType* pElement, CKeyValues3TableCluster* pNoFreeCluster, CUtlVectorBase<CKeyValues3TableCluster*, CUtlMemoryFixedGrowable<CKeyValues3TableCluster*, 4, int> >& allClusters, CKeyValues3TableCluster *& pFreeClusterList)
{
	const char   __FUNCTION__; // 34307
	CKeyValues3TableCluster* pCluster; // 4102
	int nNewAllocCount; // 4106
	{
		{
			CKeyValues3TableCluster* pPrevClusterInFreeList; // 4121
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4126
			}
		}
	}
} /* size: 0, variables: 3 */

// <000EECC3> kv3lib/keyvalues3.cpp:4100
// variables: 5
void FreeToCluster<CKeyValues3Cluster, CUtlMemoryFixedGrowable<CKeyValues3Cluster*, 8, int> CKeyValues3ContextImpl::>(ClusteredType* pElement, CKeyValues3Cluster* pNoFreeCluster, CUtlVectorBase<CKeyValues3Cluster*, CUtlMemoryFixedGrowable<CKeyValues3Cluster*, 8, int> >& allClusters, CKeyValues3Cluster *& pFreeClusterList)
{
	const char   __FUNCTION__; // 26804
	CKeyValues3Cluster* pCluster; // 4102
	int nNewAllocCount; // 4106
	{
		{
			CKeyValues3Cluster* pPrevClusterInFreeList; // 4121
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4126
			}
		}
	}
} /* size: 0, variables: 3 */

// <000EEB86> kv3lib/keyvalues3.cpp:4100
// variables: 5
void FreeToCluster<CKeyValues3ArrayCluster, CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster*, 4, int> CKeyValues3ContextImpl::>(ClusteredType* pElement, CKeyValues3ArrayCluster* pNoFreeCluster, CUtlVectorBase<CKeyValues3ArrayCluster*, CUtlMemoryFixedGrowable<CKeyValues3ArrayCluster*, 4, int> >& allClusters, CKeyValues3ArrayCluster *& pFreeClusterList)
{
	const char   __FUNCTION__; // 26804
	CKeyValues3ArrayCluster* pCluster; // 4102
	int nNewAllocCount; // 4106
	{
		{
			CKeyValues3ArrayCluster* pPrevClusterInFreeList; // 4121
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4126
			}
		}
	}
} /* size: 0, variables: 3 */

// <000EEA49> kv3lib/keyvalues3.cpp:4100
// variables: 5
void FreeToCluster<CKeyValues3TableCluster, CUtlMemoryFixedGrowable<CKeyValues3TableCluster*, 4, int> CKeyValues3ContextImpl::>(ClusteredType* pElement, CKeyValues3TableCluster* pNoFreeCluster, CUtlVectorBase<CKeyValues3TableCluster*, CUtlMemoryFixedGrowable<CKeyValues3TableCluster*, 4, int> >& allClusters, CKeyValues3TableCluster *& pFreeClusterList)
{
	const char   __FUNCTION__; // 26804
	CKeyValues3TableCluster* pCluster; // 4102
	int nNewAllocCount; // 4106
	{
		{
			CKeyValues3TableCluster* pPrevClusterInFreeList; // 4121
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4126
			}
		}
	}
} /* size: 0, variables: 3 */

// <05585E20> kv3lib/keyvalues3.cpp:4152
void CKeyValues3ContextImpl::InitNewCluster(CKeyValues3Cluster* pKVCluster)
{
} /* size: 0 */

// <05556643> kv3lib/keyvalues3.cpp:4160
void CKeyValues3ContextImpl::InitNewCluster(CKeyValues3TableCluster* pTableCluster)
{
} /* size: 0 */

// <0555661A> kv3lib/keyvalues3.cpp:4167
void CKeyValues3ContextImpl::InitNewCluster(CKeyValues3ArrayCluster* pArrayCluster)
{
} /* size: 0 */

// <05556255> kv3lib/keyvalues3.cpp:4174
// variables: 3
// function calls: 15
void ResizeArray(KeyValues3* pParent, CKeyValues3Array* pArray, int nNewCount, KeyValues3Type_t nType)
{
	int nOldCount; // 4178
	{
		int iRemove; // 4179
		CUtlMemory<KeyValues3::operator[](
				int i);  // 588
		CUtlVectorBase<KeyValues3::operator[](
				int i);  // 4181
	}
	{
		int iAdd; // 4186
		CUtlMemory<KeyValues3::operator[](
				int i);  // 588
		CUtlVectorBase<KeyValues3::operator[](
				int i);  // 4188
	}
	CUtlVectorBase<KeyValues3::Count(); // 4178
	CUtlMemory<KeyValues3::NumAllocated(); // 782
	CUtlMemory<KeyValues3::Base(); // 112
	CUtlVectorBase<KeyValues3::Base(); // 368
	CUtlVectorBase<KeyValues3::ResetDbgInfo(); // 824
	CUtlVectorBase<KeyValues3::GrowMemory(
			int num);  // 784
	CUtlVectorBase<KeyValues3::GrowVector(
			int num);  // 1445
	CUtlVectorBase<KeyValues3::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<KeyValues3::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<KeyValues3::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<KeyValues3::SetCount(
		int count);  // 4184
} /* size: 251, variables: 1, inline expansions: 11 (254 bytes) */

// <05555D8A> kv3lib/keyvalues3.cpp:4195
// variables: 2
// function calls: 17
void ArrayInsertMultipleBefore(KeyValues3* pParent, CKeyValues3Array* pArray, int nIndexToInsertBefore, int nInsertCount)
{
	{
		int i; // 4200
		{
			int nNewIndex; // 4203
			CUtlMemory<KeyValues3::operator[](
					int i);  // 588
			CUtlVectorBase<KeyValues3::operator[](
					int i);  // 4204
		}
	}
	CUtlMemory<KeyValues3::NumAllocated(); // 782
	CUtlMemory<KeyValues3::Base(); // 112
	CUtlVectorBase<KeyValues3::Base(); // 368
	CUtlVectorBase<KeyValues3::ResetDbgInfo(); // 824
	CUtlVectorBase<KeyValues3::GrowMemory(
			int num);  // 784
	CUtlVectorBase<KeyValues3::GrowVector(
			int num);  // 1445
	CUtlMemory<KeyValues3::operator[](
			int i);  // 602
	CUtlVectorBase<KeyValues3::Element(
		int i);  // 1097
	CUtlMemory<KeyValues3::operator[](
			int i);  // 602
	CUtlVectorBase<KeyValues3::Element(
		int i);  // 1097
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1097
	CUtlVectorBase<KeyValues3::ShiftElementsRight(
				int elem,
				int num);  // 1446
	CUtlVectorBase<KeyValues3::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<KeyValues3::InsertMultipleBefore(
				int elem,
				int num);  // 4198
} /* size: 256, inline expansions: 15 (436 bytes) */

// <05555A60> kv3lib/keyvalues3.cpp:4211
// variables: 2
// function calls: 10
void ArrayRemoveMultiple(KeyValues3* pParent, CKeyValues3Array* pArray, int nFirstIndexToRemove, int nRemoveCount)
{
	{
		int i; // 4214
		{
			int nElement; // 4216
			CUtlMemory<KeyValues3::operator[](
					int i);  // 588
			CUtlVectorBase<KeyValues3::operator[](
					int i);  // 4217
		}
	}
	CUtlMemory<KeyValues3::operator[](
			int i);  // 602
	CUtlVectorBase<KeyValues3::Element(
		int i);  // 1114
	CUtlMemory<KeyValues3::operator[](
			int i);  // 602
	CUtlVectorBase<KeyValues3::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<KeyValues3::ShiftElementsLeft(
				int elem,
				int num);  // 1661
	CUtlVectorBase<KeyValues3::RemoveMultiple(
			int elem,
			int num);  // 4220
} /* size: 180, inline expansions: 8 (155 bytes) */

// <05585E72> kv3lib/keyvalues3.cpp:4226
// variables: 3
// function calls: 18
void AllocArray(KeyValues3* pParent)
{
	CKeyValues3Context* pContext; // 4228
	ClusterFromPointer(const KeyValues3* pKV3); // 3782
	{
		const KeyValues3* pFirstInCluster; // 490
		CKeyValues3Cluster* pCluster; // 491
	}
	ClusterFromPointer(const KeyValues3* pKV3); // 3782
	{
	}
	CKV3ClusterAlloc<KeyValues3, 63>::GetParentContext(); // 3783
	KeyValues3::GetParentContext(); // 3780
	KeyValues3::GetParentContext(); // 4228
	CKeyValues3ContextImpl::AllocArray_Internal(); // 4231
	CUtlMemory<KeyValues3::CUtlMemory(
			KeyValues3** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<KeyValues3::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<KeyValues3::CUtlMemoryFixedGrowable_Base(
					KeyValues3** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	{
	}
	AlignedByteArrayExplicit_t<4, KeyValues3::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, KeyValues3::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<4, KeyValues3::Base(); // 231
	CUtlMemoryFixedGrowable<KeyValues3::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<KeyValues3::ResetDbgInfo(); // 530
	CUtlVectorBase<KeyValues3::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<KeyValues3::CUtlVectorFixedGrowable(
				int growSize);  // 154
	CKeyValues3Array::CKeyValues3Array(
			int32 nClusterIndex);  // 4235
	AllocArray(KeyValues3* pParent); // 4226
} /* size: 0, variables: 1, inline expansions: 18 (498 bytes) */

// <05555A36> kv3lib/keyvalues3.cpp:4226
// variable: 1
void AllocArray(KeyValues3* pParent)
{
	CKeyValues3Context* pContext; // 4228
} /* size: 0, variables: 1 */

// <05555434> kv3lib/keyvalues3.cpp:4242
// variables: 5
// function calls: 24
void FreeArray(KeyValues3* pParent, CKeyValues3Array* pArray, KeyValues3InternalFreeMode_t nFreeMode)
{
	CKeyValues3Context* pContext; // 4255
	{
		KeyValues3* pElement; // 4248
		CUtlVectorFixedGrowable<KeyValues3*, 4>& __for_range; // 62028
		iterator __for_begin; // 52944
		iterator __for_end; // 52944
		CUtlMemory<KeyValues3::Base(); // 112
		CUtlVectorBase<KeyValues3::Base(); // 102
		CUtlVectorBase<KeyValues3::begin(); // 4248
		CUtlVectorBase<KeyValues3::Count(); // 104
		CUtlVectorBase<KeyValues3::end(); // 4248
	}
	CKeyValues3ContextImpl::FreeArray_Internal(
				CKeyValues3Array* pArray);  // 4261
	CUtlVectorBase<KeyValues3::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<4, KeyValues3::Base(); // 237
	CUtlMemory<KeyValues3::IsExternallyAllocated(); // 577
	CUtlMemory<KeyValues3::ConvertToExternalMemory(
				KeyValues3** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<KeyValues3::Purge_FixedGrowable(
				KeyValues3** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<KeyValues3::Purge_FixedGrowable(
				KeyValues3** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<KeyValues3::Purge(
		int numElements);  // 1799
	CUtlVectorBase<KeyValues3::ResetDbgInfo(); // 1800
	CUtlVectorBase<KeyValues3::Purge(); // 560
	ValidateAlignment<KeyValues3*>(void); // 508
	CUtlMemory<KeyValues3::Purge(); // 903
	CUtlMemory<KeyValues3::Purge(); // 510
	CUtlMemory<KeyValues3::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<KeyValues3::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<KeyValues3::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<KeyValues3::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<KeyValues3::~CUtlVectorFixedGrowable(); // 155
	CKeyValues3Array::~CKeyValues3Array(); // 4266
} /* size: 279, variables: 1, inline expansions: 19 (599 bytes) */

// <028CCE2E> kv3lib/keyvalues3.cpp:4242
// variables: 5
// function calls: 24
void FreeArray(KeyValues3* pParent, CKeyValues3Array* pArray, KeyValues3InternalFreeMode_t nFreeMode)
{
	CKeyValues3Context* pContext; // 4255
	{
		KeyValues3* pElement; // 4248
		CUtlVectorFixedGrowable<KeyValues3*, 4>& __for_range; // 15163
		iterator __for_begin; // 6079
		iterator __for_end; // 6079
		CUtlMemory<KeyValues3::Base(); // 112
		CUtlVectorBase<KeyValues3::Base(); // 102
		CUtlVectorBase<KeyValues3::begin(); // 4248
		CUtlVectorBase<KeyValues3::Count(); // 104
		CUtlVectorBase<KeyValues3::end(); // 4248
	}
	CKeyValues3ContextImpl::FreeArray_Internal(
				CKeyValues3Array* pArray);  // 4261
	CUtlVectorBase<KeyValues3::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<4, KeyValues3::Base(); // 237
	CUtlMemory<KeyValues3::IsExternallyAllocated(); // 577
	CUtlMemory<KeyValues3::ConvertToExternalMemory(
				KeyValues3** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<KeyValues3::Purge_FixedGrowable(
				KeyValues3** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<KeyValues3::Purge_FixedGrowable(
				KeyValues3** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<KeyValues3::Purge(
		int numElements);  // 1799
	CUtlVectorBase<KeyValues3::ResetDbgInfo(); // 1800
	CUtlVectorBase<KeyValues3::Purge(); // 560
	ValidateAlignment<KeyValues3*>(void); // 508
	CUtlMemory<KeyValues3::Purge(); // 903
	CUtlMemory<KeyValues3::Purge(); // 510
	CUtlMemory<KeyValues3::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<KeyValues3::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<KeyValues3::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<KeyValues3::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<KeyValues3::~CUtlVectorFixedGrowable(); // 155
	CKeyValues3Array::~CKeyValues3Array(); // 4266
} /* size: 279, variables: 1, inline expansions: 19 (599 bytes) */

// <01232060> kv3lib/keyvalues3.cpp:4242
// variables: 5
// function calls: 24
void FreeArray(KeyValues3* pParent, CKeyValues3Array* pArray, KeyValues3InternalFreeMode_t nFreeMode)
{
	CKeyValues3Context* pContext; // 4255
	{
		KeyValues3* pElement; // 4248
		CUtlVectorFixedGrowable<KeyValues3*, 4>& __for_range; // 42283
		iterator __for_begin; // 33199
		iterator __for_end; // 33199
		CUtlMemory<KeyValues3::Base(); // 112
		CUtlVectorBase<KeyValues3::Base(); // 102
		CUtlVectorBase<KeyValues3::begin(); // 4248
		CUtlVectorBase<KeyValues3::Count(); // 104
		CUtlVectorBase<KeyValues3::end(); // 4248
	}
	CKeyValues3ContextImpl::FreeArray_Internal(
				CKeyValues3Array* pArray);  // 4261
	CUtlVectorBase<KeyValues3::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<4, KeyValues3::Base(); // 237
	CUtlMemory<KeyValues3::IsExternallyAllocated(); // 577
	CUtlMemory<KeyValues3::ConvertToExternalMemory(
				KeyValues3** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<KeyValues3::Purge_FixedGrowable(
				KeyValues3** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<KeyValues3::Purge_FixedGrowable(
				KeyValues3** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<KeyValues3::Purge(
		int numElements);  // 1799
	CUtlVectorBase<KeyValues3::ResetDbgInfo(); // 1800
	CUtlVectorBase<KeyValues3::Purge(); // 560
	ValidateAlignment<KeyValues3*>(void); // 508
	CUtlMemory<KeyValues3::Purge(); // 903
	CUtlMemory<KeyValues3::Purge(); // 510
	CUtlMemory<KeyValues3::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<KeyValues3::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<KeyValues3::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<KeyValues3::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<KeyValues3::~CUtlVectorFixedGrowable(); // 155
	CKeyValues3Array::~CKeyValues3Array(); // 4266
} /* size: 279, variables: 1, inline expansions: 19 (599 bytes) */

// <00612A27> kv3lib/keyvalues3.cpp:4242
// variables: 5
// function calls: 24
void FreeArray(KeyValues3* pParent, CKeyValues3Array* pArray, KeyValues3InternalFreeMode_t nFreeMode)
{
	CKeyValues3Context* pContext; // 4255
	{
		KeyValues3* pElement; // 4248
		CUtlVectorFixedGrowable<KeyValues3*, 4>& __for_range; // 54436
		iterator __for_begin; // 45352
		iterator __for_end; // 45352
		CUtlMemory<KeyValues3::Base(); // 112
		CUtlVectorBase<KeyValues3::Base(); // 102
		CUtlVectorBase<KeyValues3::begin(); // 4248
		CUtlVectorBase<KeyValues3::Count(); // 104
		CUtlVectorBase<KeyValues3::end(); // 4248
	}
	CKeyValues3ContextImpl::FreeArray_Internal(
				CKeyValues3Array* pArray);  // 4261
	CUtlVectorBase<KeyValues3::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<4, KeyValues3::Base(); // 237
	CUtlMemory<KeyValues3::IsExternallyAllocated(); // 577
	CUtlMemory<KeyValues3::ConvertToExternalMemory(
				KeyValues3** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<KeyValues3::Purge_FixedGrowable(
				KeyValues3** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<KeyValues3::Purge_FixedGrowable(
				KeyValues3** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<KeyValues3::Purge(
		int numElements);  // 1799
	CUtlVectorBase<KeyValues3::ResetDbgInfo(); // 1800
	CUtlVectorBase<KeyValues3::Purge(); // 560
	ValidateAlignment<KeyValues3*>(void); // 508
	CUtlMemory<KeyValues3::Purge(); // 903
	CUtlMemory<KeyValues3::Purge(); // 510
	CUtlMemory<KeyValues3::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<KeyValues3::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<KeyValues3::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<KeyValues3::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<KeyValues3::~CUtlVectorFixedGrowable(); // 155
	CKeyValues3Array::~CKeyValues3Array(); // 4266
} /* size: 279, variables: 1, inline expansions: 19 (599 bytes) */

// <009EA6AE> kv3lib/keyvalues3.cpp:4242
// variables: 5
// function calls: 24
void FreeArray(KeyValues3* pParent, CKeyValues3Array* pArray, KeyValues3InternalFreeMode_t nFreeMode)
{
	CKeyValues3Context* pContext; // 4255
	{
		KeyValues3* pElement; // 4248
		CUtlVectorFixedGrowable<KeyValues3*, 4>& __for_range; // 60587
		iterator __for_begin; // 51503
		iterator __for_end; // 51503
		CUtlMemory<KeyValues3::Base(); // 112
		CUtlVectorBase<KeyValues3::Base(); // 102
		CUtlVectorBase<KeyValues3::begin(); // 4248
		CUtlVectorBase<KeyValues3::Count(); // 104
		CUtlVectorBase<KeyValues3::end(); // 4248
	}
	CKeyValues3ContextImpl::FreeArray_Internal(
				CKeyValues3Array* pArray);  // 4261
	CUtlVectorBase<KeyValues3::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<4, KeyValues3::Base(); // 237
	CUtlMemory<KeyValues3::IsExternallyAllocated(); // 577
	CUtlMemory<KeyValues3::ConvertToExternalMemory(
				KeyValues3** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<KeyValues3::Purge_FixedGrowable(
				KeyValues3** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<KeyValues3::Purge_FixedGrowable(
				KeyValues3** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<KeyValues3::Purge(
		int numElements);  // 1799
	CUtlVectorBase<KeyValues3::ResetDbgInfo(); // 1800
	CUtlVectorBase<KeyValues3::Purge(); // 560
	ValidateAlignment<KeyValues3*>(void); // 508
	CUtlMemory<KeyValues3::Purge(); // 903
	CUtlMemory<KeyValues3::Purge(); // 510
	CUtlMemory<KeyValues3::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<KeyValues3::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<KeyValues3::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<KeyValues3::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<KeyValues3::~CUtlVectorFixedGrowable(); // 155
	CKeyValues3Array::~CKeyValues3Array(); // 4266
} /* size: 279, variables: 1, inline expansions: 19 (599 bytes) */

// <000F722F> kv3lib/keyvalues3.cpp:4242
// variables: 5
// function calls: 24
void FreeArray(KeyValues3* pParent, CKeyValues3Array* pArray, KeyValues3InternalFreeMode_t nFreeMode)
{
	CKeyValues3Context* pContext; // 4255
	{
		KeyValues3* pElement; // 4248
		CUtlVectorFixedGrowable<KeyValues3*, 4>& __for_range; // 53084
		iterator __for_begin; // 44000
		iterator __for_end; // 44000
		CUtlMemory<KeyValues3::Base(); // 112
		CUtlVectorBase<KeyValues3::Base(); // 102
		CUtlVectorBase<KeyValues3::begin(); // 4248
		CUtlVectorBase<KeyValues3::Count(); // 104
		CUtlVectorBase<KeyValues3::end(); // 4248
	}
	CKeyValues3ContextImpl::FreeArray_Internal(
				CKeyValues3Array* pArray);  // 4261
	CUtlVectorBase<KeyValues3::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<4, KeyValues3::Base(); // 237
	CUtlMemory<KeyValues3::IsExternallyAllocated(); // 577
	CUtlMemory<KeyValues3::ConvertToExternalMemory(
				KeyValues3** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<KeyValues3::Purge_FixedGrowable(
				KeyValues3** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<KeyValues3::Purge_FixedGrowable(
				KeyValues3** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<KeyValues3::Purge(
		int numElements);  // 1799
	CUtlVectorBase<KeyValues3::ResetDbgInfo(); // 1800
	CUtlVectorBase<KeyValues3::Purge(); // 560
	ValidateAlignment<KeyValues3*>(void); // 508
	CUtlMemory<KeyValues3::Purge(); // 903
	CUtlMemory<KeyValues3::Purge(); // 510
	CUtlMemory<KeyValues3::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<KeyValues3::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<KeyValues3::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<KeyValues3::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<KeyValues3::~CUtlVectorFixedGrowable(); // 155
	CKeyValues3Array::~CKeyValues3Array(); // 4266
} /* size: 279, variables: 1, inline expansions: 19 (599 bytes) */

// <05586615> kv3lib/keyvalues3.cpp:4273
// variable: 1
// function calls: 3
void AllocZeroedBlob(KeyValues3* pParent, int nSize)
{
	KeyValues3BinaryBlob_t* pNewBlob; // 4280
	memset(void* __dest,
		int __ch,
		size_t __len);  // 51
	V_memset(void* dest,
		int fill,
		int count);  // 4282
	KeyValues3BinaryBlob_t::AsByteArray(); // 4282
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <055553FD> kv3lib/keyvalues3.cpp:4273
// variable: 1
void AllocZeroedBlob(KeyValues3* pParent, int nSize)
{
	KeyValues3BinaryBlob_t* pNewBlob; // 4280
} /* size: 0, variables: 1 */

// <05555299> kv3lib/keyvalues3.cpp:4289
// variable: 1
// function calls: 3
void AllocBlob(KeyValues3* pParent, const byte* pData, int nSize)
{
	KeyValues3BinaryBlob_t* pNewBlob; // 4296
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 4298
	KeyValues3BinaryBlob_t::AsByteArray(); // 4298
} /* size: 91, variables: 1, inline expansions: 3 (26 bytes) */

// <05586749> kv3lib/keyvalues3.cpp:4305
// variable: 1
void AllocBlobExternal(KeyValues3* pParent, byte* pData, int nSize, bool bOwnsData)
{
	KeyValues3BinaryBlobExternal_t* pNewBlob; // 4312
} /* size: 0, variables: 1 */

// <055867C0> kv3lib/keyvalues3.cpp:4322
void FreeBlob(KeyValues3* pParent, KeyValues3BinaryBlob_t* pBlob)
{
} /* size: 0 */

// <05586812> kv3lib/keyvalues3.cpp:4333
void FreeBlobExternal(KeyValues3* pParent, KeyValues3BinaryBlobExternal_t* pBlob)
{
} /* size: 0 */

// <0558688C> kv3lib/keyvalues3.cpp:4349
// variables: 3
// function calls: 7
void AllocTable(KeyValues3* pParent)
{
	CKeyValues3Context* pContext; // 4351
	ClusterFromPointer(const KeyValues3* pKV3); // 3782
	{
		const KeyValues3* pFirstInCluster; // 490
		CKeyValues3Cluster* pCluster; // 491
	}
	ClusterFromPointer(const KeyValues3* pKV3); // 3782
	{
	}
	CKV3ClusterAlloc<KeyValues3, 63>::GetParentContext(); // 3783
	KeyValues3::GetParentContext(); // 3780
	KeyValues3::GetParentContext(); // 4351
	CKeyValues3ContextImpl::AllocTable_Internal(); // 4354
	AllocTable(KeyValues3* pParent); // 4349
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <055551CA> kv3lib/keyvalues3.cpp:4349
// variable: 1
void AllocTable(KeyValues3* pParent)
{
	CKeyValues3Context* pContext; // 4351
} /* size: 0, variables: 1 */

// <0558714D> kv3lib/keyvalues3.cpp:4365
// variable: 1
// function calls: 2
void FreeTable(KeyValues3* pParent, CKeyValues3Table* pTable, KeyValues3InternalFreeMode_t nFreeMode)
{
	CKeyValues3Context* pContext; // 4372
	CKeyValues3ContextImpl::FreeTable_Internal(
				CKeyValues3Table* pTable);  // 4378
	FreeTable(KeyValues3* pParent,
			CKeyValues3Table* pTable,
			KeyValues3InternalFreeMode_t nFreeMode);  // 4365
} /* size: 159, variables: 1, inline expansions: 2 (59 bytes) */

// <05555186> kv3lib/keyvalues3.cpp:4365
// variable: 1
void FreeTable(KeyValues3* pParent, CKeyValues3Table* pTable, KeyValues3InternalFreeMode_t nFreeMode)
{
	CKeyValues3Context* pContext; // 4372
} /* size: 0, variables: 1 */

// <05586A8E> kv3lib/keyvalues3.cpp:4390
void CKeyValues3Context::Impl()
{
} /* size: 0 */

// <05554F5A> kv3lib/keyvalues3.cpp:4406
// variables: 3
// function calls: 6
void AllocSharedString(KeyValues3* pParent, const char* pStr)
{
	CKeyValues3Context* pContext; // 4408
	ClusterFromPointer(const KeyValues3* pKV3); // 3782
	{
		const KeyValues3* pFirstInCluster; // 490
		CKeyValues3Cluster* pCluster; // 491
	}
	ClusterFromPointer(const KeyValues3* pKV3); // 3782
	{
	}
	CKV3ClusterAlloc<KeyValues3, 63>::GetParentContext(); // 3783
	KeyValues3::GetParentContext(); // 3780
	KeyValues3::GetParentContext(); // 4408
	CUtlSymbolLarge::String(); // 4411
} /* size: 0, variables: 1, inline expansions: 6 (250 bytes) */

// <05586AB7> kv3lib/keyvalues3.cpp:4422
// variables: 3
// function calls: 6
void FreeSharedString(KeyValues3* pParent, const char* pStr)
{
	CKeyValues3Context* pContext; // 4424
	ClusterFromPointer(const KeyValues3* pKV3); // 3782
	{
		const KeyValues3* pFirstInCluster; // 490
		CKeyValues3Cluster* pCluster; // 491
	}
	ClusterFromPointer(const KeyValues3* pKV3); // 3782
	{
	}
	CKV3ClusterAlloc<KeyValues3, 63>::GetParentContext(); // 3783
	KeyValues3::GetParentContext(); // 3780
	KeyValues3::GetParentContext(); // 4424
	FreeSharedString(KeyValues3* pParent,
			const char* pStr);  // 4422
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <05554F23> kv3lib/keyvalues3.cpp:4422
// variable: 1
void FreeSharedString(KeyValues3* pParent, const char* pStr)
{
	CKeyValues3Context* pContext; // 4424
} /* size: 0, variables: 1 */

// <05586C8F> kv3lib/keyvalues3.cpp:4441
void AllocString(KeyValues3* pParent, const char* pStr)
{
} /* size: 0 */

// <05586CE1> kv3lib/keyvalues3.cpp:4449
void FreeString(KeyValues3* pParent, const char* pStr)
{
} /* size: 0 */

// <05586D33> kv3lib/keyvalues3.cpp:4457
// function call: 1
void CKeyValues3Context::Root()
{
	CKV3ClusterAlloc<KeyValues3, 63>::Get(
		int nIndex);  // 4459
} /* size: 9, inline expansions: 1 (4 bytes) */

// <05554EB2> kv3lib/keyvalues3.cpp:4457
void CKeyValues3Context::Root()
{
} /* size: 0 */

// <05554D24> kv3lib/keyvalues3.cpp:4465
// function calls: 6
void CKeyValues3Context::IsIdenticalTo(const CKeyValues3Context* pOther, bool bAssertOnFailure)
{
	CKV3ClusterAlloc<KeyValues3, 63>::Get(
		int nIndex);  // 4459
	CKeyValues3Context::Root(); // 1047
	CKeyValues3Context::Root(); // 4467
	CKV3ClusterAlloc<KeyValues3, 63>::Get(
		int nIndex);  // 4459
	CKeyValues3Context::Root(); // 1047
	CKeyValues3Context::Root(); // 4467
} /* size: 0, inline expansions: 6 (0 bytes) */

// <05554BB6> kv3lib/keyvalues3.cpp:4473
// function calls: 5
void CKeyValues3Context::CopyFrom(const CKeyValues3Context* pOther)
{
	CKV3ClusterAlloc<KeyValues3, 63>::Get(
		int nIndex);  // 4459
	CKeyValues3Context::Root(); // 4475
	CKV3ClusterAlloc<KeyValues3, 63>::Get(
		int nIndex);  // 4459
	CKeyValues3Context::Root(); // 1047
	CKeyValues3Context::Root(); // 4475
} /* size: 17, inline expansions: 5 (20 bytes) */

// <05554A67> kv3lib/keyvalues3.cpp:4481
// variable: 1
// function calls: 3
void CKeyValues3Context::SetMetadataEnabled(bool bMetadata)
{
	{
		int i; // 4487
		CUtlVectorBase<CKeyValues3Cluster::Count(); // 4487
		CUtlMemory<CKeyValues3Cluster::operator[](
				int i);  // 588
		CUtlVectorBase<CKeyValues3Cluster::operator[](
				int i);  // 4489
	}
} /* size: 0 */

// <05554A33> kv3lib/keyvalues3.cpp:4498
void CKeyValues3Context::IsMetadataEnabled()
{
} /* size: 0 */

// <055549FF> kv3lib/keyvalues3.cpp:4506
void CKeyValues3Context::SetWasUpconverted()
{
} /* size: 12 */

// <055549CB> kv3lib/keyvalues3.cpp:4514
void CKeyValues3Context::WasUpconverted()
{
} /* size: 0 */

// <05554780> kv3lib/keyvalues3.cpp:4543
// variables: 4
// function calls: 5
bool IsKV3Data(const CUtlBuffer* pSrcBuffer, KV3ID_t* pOutDetectedFormat)
{
	int nGet; // 4545
	int nMaxPut; // 4546
	int nBytesLeft; // 4547
	void* pBuffer; // 4548
	CUtlBuffer::TellGet(); // 4545
	IsKV3Data(const void* pBuffer,
			int nBufLength,
			KV3ID_t* pOutDetectedFormat);  // 4549
	CUtlBuffer::TellMaxPut(); // 4546
	CUtlMemory<unsigned char, int>::Base(); // 1479
	CUtlBuffer::Base(); // 4548
} /* size: 0, variables: 4, inline expansions: 5 (0 bytes) */

// <0555402E> kv3lib/keyvalues3.cpp:4577
// variable: 1
// function calls: 7
bool LoadKV3FromFile(KeyValues3* pTargetKV3, CUtlString* pOutErrorMessage, const char* pFilename, const char* pPath, const KV3ID_t& expectedFormat)
{
	CUtlBuffer buf; // 4584
	CUtlString::operator=(
			const char* src);  // 4581
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 4595
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <05553FD5> kv3lib/keyvalues3.cpp:4600
// variables: 2
bool LooksLikeOldSchemaText(const void* pData, int nBufLen, KV3ID_t* pOutDetectedFormat)
{
	const char  SCHEMA_TEXT_PREFIX; // 4605
	const char* pPrefix; // 4606
} /* size: 0, variables: 2 */

// <002AB900> kv3lib/keyvalues3.cpp:4637
// variables: 8
// function calls: 17
bool LoadKV3(KeyValues3* pTargetKV3, CUtlString* pOutErrorMessage, CUtlBuffer* pSrcBuffer, const KV3ID_t& expectedFormat, const char* pReferenceFilename)
{
	const char   __FUNCTION__; // 2013
	int nGet; // 4646
	int nMaxPut; // 4647
	int nBytesLeft; // 4648
	byte* pSrcBase; // 4649
	void* pBuffer; // 4660
	bool bLoadedOk; // 4662
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4639
	}
	CKV3ClusterAlloc<KeyValues3, 63>::Get(
		int nIndex);  // 4459
	CKeyValues3Context::Root(); // 4639
	CUtlString::operator=(
			const char* src);  // 4643
	CUtlBuffer::TellGet(); // 4646
	CUtlBuffer::TellMaxPut(); // 4647
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 4649
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 4697
	CUtlString::operator=(
			const char* src);  // 4655
	V_strncmp<long unsigned int>(const char* s1,
					const char* s2,
					long unsigned int count);  // 4611
	LooksLikeOldSchemaText(const void* pData,
				int nBufLen,
				KV3ID_t* pOutDetectedFormat);  // 4600
	LooksLikeOldSchemaText(const void* pData,
				int nBufLen,
				KV3ID_t* pOutDetectedFormat);  // 4677
	CUtlString::operator=(
			const char* src);  // 4689
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 4683
} /* size: 0, variables: 7, inline expansions: 17 (0 bytes) */

// <009E8789> kv3lib/keyvalues3.cpp:4637
// variables: 8
// function calls: 17
bool LoadKV3(KeyValues3* pTargetKV3, CUtlString* pOutErrorMessage, CUtlBuffer* pSrcBuffer, const KV3ID_t& expectedFormat, const char* pReferenceFilename)
{
	const char   __FUNCTION__; // 34150
	int nGet; // 4646
	int nMaxPut; // 4647
	int nBytesLeft; // 4648
	byte* pSrcBase; // 4649
	void* pBuffer; // 4660
	bool bLoadedOk; // 4662
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4639
	}
	CKV3ClusterAlloc<KeyValues3, 63>::Get(
		int nIndex);  // 4459
	CKeyValues3Context::Root(); // 4639
	CUtlString::operator=(
			const char* src);  // 4643
	CUtlBuffer::TellGet(); // 4646
	CUtlBuffer::TellMaxPut(); // 4647
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 4649
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 4697
	CUtlString::operator=(
			const char* src);  // 4655
	V_strncmp<long unsigned int>(const char* s1,
					const char* s2,
					long unsigned int count);  // 4611
	LooksLikeOldSchemaText(const void* pData,
				int nBufLen,
				KV3ID_t* pOutDetectedFormat);  // 4600
	LooksLikeOldSchemaText(const void* pData,
				int nBufLen,
				KV3ID_t* pOutDetectedFormat);  // 4677
	CUtlString::operator=(
			const char* src);  // 4689
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 4683
} /* size: 0, variables: 7, inline expansions: 17 (373 bytes) */

// <000F530A> kv3lib/keyvalues3.cpp:4637
// variables: 8
// function calls: 17
bool LoadKV3(KeyValues3* pTargetKV3, CUtlString* pOutErrorMessage, CUtlBuffer* pSrcBuffer, const KV3ID_t& expectedFormat, const char* pReferenceFilename)
{
	const char   __FUNCTION__; // 26647
	int nGet; // 4646
	int nMaxPut; // 4647
	int nBytesLeft; // 4648
	byte* pSrcBase; // 4649
	void* pBuffer; // 4660
	bool bLoadedOk; // 4662
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4639
	}
	CKV3ClusterAlloc<KeyValues3, 63>::Get(
		int nIndex);  // 4459
	CKeyValues3Context::Root(); // 4639
	CUtlString::operator=(
			const char* src);  // 4643
	CUtlBuffer::TellGet(); // 4646
	CUtlBuffer::TellMaxPut(); // 4647
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 4649
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 4697
	CUtlString::operator=(
			const char* src);  // 4655
	V_strncmp<long unsigned int>(const char* s1,
					const char* s2,
					long unsigned int count);  // 4611
	LooksLikeOldSchemaText(const void* pData,
				int nBufLen,
				KV3ID_t* pOutDetectedFormat);  // 4600
	LooksLikeOldSchemaText(const void* pData,
				int nBufLen,
				KV3ID_t* pOutDetectedFormat);  // 4677
	CUtlString::operator=(
			const char* src);  // 4689
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 4683
} /* size: 0, variables: 7, inline expansions: 17 (0 bytes) */

// <012300E2> kv3lib/keyvalues3.cpp:4706
bool SaveKV3(const KV3ID_t& encodingId, const KV3ID_t& formatId, const KeyValues3* pRoot, CUtlString* pOutErrorMessage, CUtlBuffer* pDestBuffer)
{
} /* size: 0 */

// <05553090> kv3lib/keyvalues3.cpp:4721
// variable: 1
// function calls: 15
bool SaveKV3ToFile(const KV3ID_t& encodingId, const KV3ID_t& formatId, const KeyValues3* pRoot, CUtlString* pOutErrorMessage, const char* pFilename, const char* pPath)
{
	CUtlBuffer buf; // 4723
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 4723
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 4708
	SaveKV3(const KV3ID_t& encodingId,
		const KV3ID_t& formatId,
		const KeyValues3* pRoot,
		CUtlString* pOutErrorMessage,
		CUtlBuffer* pDestBuffer);  // 4724
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 4737
} /* size: 0, variables: 1, inline expansions: 15 (0 bytes) */

// <05552C60> kv3lib/keyvalues3.cpp:4742
// variables: 3
// function calls: 14
void KeyValues3::ArraySwapItems(int nIndex1, int nIndex2)
{
	const char   __FUNCTION__; // 35775
	int nArrayCount; // 4748
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4751
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3906
	{
	}
	{
	}
	KeyValues3::Internal_AssertIsTable(
				const char* pFuncName,
				bool bAllowNull);  // 3893
	KeyValues3::Internal_AssertIsArray(
				const char* pFuncName,
				bool bAllowNull);  // 4744
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 4745
	CUtlVectorBase<KeyValues3::Count(); // 4748
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 4755
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 4755
	Swap<KeyValues3*>(KeyValues3 *& a,
				KeyValues3 *& b);  // 4755
} /* size: 0, variables: 2, inline expansions: 14 (0 bytes) */

// <028CA65A> kv3lib/keyvalues3.cpp:4742
// variables: 3
// function calls: 14
void KeyValues3::ArraySwapItems(int nIndex1, int nIndex2)
{
	const char   __FUNCTION__; // 54446
	int nArrayCount; // 4748
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4751
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3906
	{
	}
	{
	}
	KeyValues3::Internal_AssertIsTable(
				const char* pFuncName,
				bool bAllowNull);  // 3893
	KeyValues3::Internal_AssertIsArray(
				const char* pFuncName,
				bool bAllowNull);  // 4744
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 4745
	CUtlVectorBase<KeyValues3::Count(); // 4748
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 4755
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 4755
	Swap<KeyValues3*>(KeyValues3 *& a,
				KeyValues3 *& b);  // 4755
} /* size: 0, variables: 2, inline expansions: 14 (0 bytes) */

// <0122F88C> kv3lib/keyvalues3.cpp:4742
// variables: 3
// function calls: 14
void KeyValues3::ArraySwapItems(int nIndex1, int nIndex2)
{
	const char   __FUNCTION__; // 16030
	int nArrayCount; // 4748
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4751
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3906
	{
	}
	{
	}
	KeyValues3::Internal_AssertIsTable(
				const char* pFuncName,
				bool bAllowNull);  // 3893
	KeyValues3::Internal_AssertIsArray(
				const char* pFuncName,
				bool bAllowNull);  // 4744
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 4745
	CUtlVectorBase<KeyValues3::Count(); // 4748
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 4755
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 4755
	Swap<KeyValues3*>(KeyValues3 *& a,
				KeyValues3 *& b);  // 4755
} /* size: 0, variables: 2, inline expansions: 14 (0 bytes) */

// <002AB051> kv3lib/keyvalues3.cpp:4742
// variables: 3
// function calls: 14
void KeyValues3::ArraySwapItems(int nIndex1, int nIndex2)
{
	const char   __FUNCTION__; // 2197
	int nArrayCount; // 4748
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4751
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3906
	{
	}
	{
	}
	KeyValues3::Internal_AssertIsTable(
				const char* pFuncName,
				bool bAllowNull);  // 3893
	KeyValues3::Internal_AssertIsArray(
				const char* pFuncName,
				bool bAllowNull);  // 4744
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 4745
	CUtlVectorBase<KeyValues3::Count(); // 4748
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 4755
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 4755
	Swap<KeyValues3*>(KeyValues3 *& a,
				KeyValues3 *& b);  // 4755
} /* size: 0, variables: 2, inline expansions: 14 (0 bytes) */

// <00610253> kv3lib/keyvalues3.cpp:4742
// variables: 3
// function calls: 14
void KeyValues3::ArraySwapItems(int nIndex1, int nIndex2)
{
	const char   __FUNCTION__; // 28183
	int nArrayCount; // 4748
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4751
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3906
	{
	}
	{
	}
	KeyValues3::Internal_AssertIsTable(
				const char* pFuncName,
				bool bAllowNull);  // 3893
	KeyValues3::Internal_AssertIsArray(
				const char* pFuncName,
				bool bAllowNull);  // 4744
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 4745
	CUtlVectorBase<KeyValues3::Count(); // 4748
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 4755
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 4755
	Swap<KeyValues3*>(KeyValues3 *& a,
				KeyValues3 *& b);  // 4755
} /* size: 0, variables: 2, inline expansions: 14 (0 bytes) */

// <009E7EDA> kv3lib/keyvalues3.cpp:4742
// variables: 3
// function calls: 14
void KeyValues3::ArraySwapItems(int nIndex1, int nIndex2)
{
	const char   __FUNCTION__; // 34334
	int nArrayCount; // 4748
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4751
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3906
	{
	}
	{
	}
	KeyValues3::Internal_AssertIsTable(
				const char* pFuncName,
				bool bAllowNull);  // 3893
	KeyValues3::Internal_AssertIsArray(
				const char* pFuncName,
				bool bAllowNull);  // 4744
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 4745
	CUtlVectorBase<KeyValues3::Count(); // 4748
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 4755
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 4755
	Swap<KeyValues3*>(KeyValues3 *& a,
				KeyValues3 *& b);  // 4755
} /* size: 0, variables: 2, inline expansions: 14 (0 bytes) */

// <000F4A5B> kv3lib/keyvalues3.cpp:4742
// variables: 3
// function calls: 14
void KeyValues3::ArraySwapItems(int nIndex1, int nIndex2)
{
	const char   __FUNCTION__; // 26831
	int nArrayCount; // 4748
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4751
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3906
	{
	}
	{
	}
	KeyValues3::Internal_AssertIsTable(
				const char* pFuncName,
				bool bAllowNull);  // 3893
	KeyValues3::Internal_AssertIsArray(
				const char* pFuncName,
				bool bAllowNull);  // 4744
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 4745
	CUtlVectorBase<KeyValues3::Count(); // 4748
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 4755
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 4755
	Swap<KeyValues3*>(KeyValues3 *& a,
				KeyValues3 *& b);  // 4755
} /* size: 0, variables: 2, inline expansions: 14 (0 bytes) */

// <0558B022> kv3lib/keyvalues3.cpp:4762
// function calls: 9
void KeyValues3::ArrayInsertMultipleBefore(int nIndexToInsertBefore, int nInsertCount)
{
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3906
	{
	}
	{
	}
	KeyValues3::Internal_AssertIsTable(
				const char* pFuncName,
				bool bAllowNull);  // 3893
	KeyValues3::Internal_AssertIsArray(
				const char* pFuncName,
				bool bAllowNull);  // 4764
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 4765
	KeyValues3::ArrayInsertMultipleBefore(
					int nIndexToInsertBefore,
					int nInsertCount);  // 4762
} /* size: 0, inline expansions: 9 (0 bytes) */

// <05552C1E> kv3lib/keyvalues3.cpp:4762
// variable: 1
void KeyValues3::ArrayInsertMultipleBefore(int nIndexToInsertBefore, int nInsertCount)
{
	const char   __FUNCTION__; // 36067
} /* size: 0, variables: 1 */

// <028CA618> kv3lib/keyvalues3.cpp:4762
// variable: 1
void KeyValues3::ArrayInsertMultipleBefore(int nIndexToInsertBefore, int nInsertCount)
{
	const char   __FUNCTION__; // 54738
} /* size: 0, variables: 1 */

// <0122F84A> kv3lib/keyvalues3.cpp:4762
// variable: 1
void KeyValues3::ArrayInsertMultipleBefore(int nIndexToInsertBefore, int nInsertCount)
{
	const char   __FUNCTION__; // 16322
} /* size: 0, variables: 1 */

// <002AB00F> kv3lib/keyvalues3.cpp:4762
// variable: 1
void KeyValues3::ArrayInsertMultipleBefore(int nIndexToInsertBefore, int nInsertCount)
{
	const char   __FUNCTION__; // 2489
} /* size: 0, variables: 1 */

// <00610211> kv3lib/keyvalues3.cpp:4762
// variable: 1
void KeyValues3::ArrayInsertMultipleBefore(int nIndexToInsertBefore, int nInsertCount)
{
	const char   __FUNCTION__; // 28475
} /* size: 0, variables: 1 */

// <009E7E98> kv3lib/keyvalues3.cpp:4762
// variable: 1
void KeyValues3::ArrayInsertMultipleBefore(int nIndexToInsertBefore, int nInsertCount)
{
	const char   __FUNCTION__; // 34626
} /* size: 0, variables: 1 */

// <000F4A19> kv3lib/keyvalues3.cpp:4762
// variable: 1
void KeyValues3::ArrayInsertMultipleBefore(int nIndexToInsertBefore, int nInsertCount)
{
	const char   __FUNCTION__; // 27123
} /* size: 0, variables: 1 */

// <0558B2B0> kv3lib/keyvalues3.cpp:4774
// function calls: 10
void KeyValues3::ArrayInsertBefore(int nIndexToInsertBefore)
{
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3906
	{
	}
	{
	}
	KeyValues3::Internal_AssertIsTable(
				const char* pFuncName,
				bool bAllowNull);  // 3893
	KeyValues3::Internal_AssertIsArray(
				const char* pFuncName,
				bool bAllowNull);  // 4764
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 4765
	KeyValues3::ArrayInsertMultipleBefore(
					int nIndexToInsertBefore,
					int nInsertCount);  // 4762
	KeyValues3::ArrayInsertMultipleBefore(
					int nIndexToInsertBefore,
					int nInsertCount);  // 4776
} /* size: 0, inline expansions: 10 (0 bytes) */

// <05552BF4> kv3lib/keyvalues3.cpp:4774
void KeyValues3::ArrayInsertBefore(int nIndexToInsertBefore)
{
} /* size: 0 */

// <055528A4> kv3lib/keyvalues3.cpp:4783
// function calls: 11
void KeyValues3::ArrayInsertAfter(int nIndexToInsertAfter)
{
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3906
	{
	}
	{
	}
	KeyValues3::Internal_AssertIsTable(
				const char* pFuncName,
				bool bAllowNull);  // 3893
	KeyValues3::Internal_AssertIsArray(
				const char* pFuncName,
				bool bAllowNull);  // 4764
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 4765
	KeyValues3::ArrayInsertMultipleBefore(
					int nIndexToInsertBefore,
					int nInsertCount);  // 4762
	KeyValues3::ArrayInsertMultipleBefore(
					int nIndexToInsertBefore,
					int nInsertCount);  // 4776
	KeyValues3::ArrayInsertBefore(
				int nIndexToInsertBefore);  // 4785
} /* size: 0, inline expansions: 11 (0 bytes) */

// <05552626> kv3lib/keyvalues3.cpp:4791
// variable: 1
// function calls: 8
void KeyValues3::ArrayRemoveMultiple(int nFirstIndexToRemove, int nRemoveCount)
{
	const char   __FUNCTION__; // 35910
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3906
	{
	}
	{
	}
	KeyValues3::Internal_AssertIsTable(
				const char* pFuncName,
				bool bAllowNull);  // 3893
	KeyValues3::Internal_AssertIsArray(
				const char* pFuncName,
				bool bAllowNull);  // 4793
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 4794
} /* size: 148, variables: 1, inline expansions: 8 (116 bytes) */

// <028CA020> kv3lib/keyvalues3.cpp:4791
// variable: 1
// function calls: 8
void KeyValues3::ArrayRemoveMultiple(int nFirstIndexToRemove, int nRemoveCount)
{
	const char   __FUNCTION__; // 54581
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3906
	{
	}
	{
	}
	KeyValues3::Internal_AssertIsTable(
				const char* pFuncName,
				bool bAllowNull);  // 3893
	KeyValues3::Internal_AssertIsArray(
				const char* pFuncName,
				bool bAllowNull);  // 4793
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 4794
} /* size: 148, variables: 1, inline expansions: 8 (116 bytes) */

// <0122F252> kv3lib/keyvalues3.cpp:4791
// variable: 1
// function calls: 8
void KeyValues3::ArrayRemoveMultiple(int nFirstIndexToRemove, int nRemoveCount)
{
	const char   __FUNCTION__; // 16165
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3906
	{
	}
	{
	}
	KeyValues3::Internal_AssertIsTable(
				const char* pFuncName,
				bool bAllowNull);  // 3893
	KeyValues3::Internal_AssertIsArray(
				const char* pFuncName,
				bool bAllowNull);  // 4793
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 4794
} /* size: 148, variables: 1, inline expansions: 8 (116 bytes) */

// <002AAA17> kv3lib/keyvalues3.cpp:4791
// variable: 1
// function calls: 8
void KeyValues3::ArrayRemoveMultiple(int nFirstIndexToRemove, int nRemoveCount)
{
	const char   __FUNCTION__; // 2332
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3906
	{
	}
	{
	}
	KeyValues3::Internal_AssertIsTable(
				const char* pFuncName,
				bool bAllowNull);  // 3893
	KeyValues3::Internal_AssertIsArray(
				const char* pFuncName,
				bool bAllowNull);  // 4793
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 4794
} /* size: 148, variables: 1, inline expansions: 8 (116 bytes) */

// <0060FC19> kv3lib/keyvalues3.cpp:4791
// variable: 1
// function calls: 8
void KeyValues3::ArrayRemoveMultiple(int nFirstIndexToRemove, int nRemoveCount)
{
	const char   __FUNCTION__; // 28318
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3906
	{
	}
	{
	}
	KeyValues3::Internal_AssertIsTable(
				const char* pFuncName,
				bool bAllowNull);  // 3893
	KeyValues3::Internal_AssertIsArray(
				const char* pFuncName,
				bool bAllowNull);  // 4793
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 4794
} /* size: 148, variables: 1, inline expansions: 8 (116 bytes) */

// <009E78A0> kv3lib/keyvalues3.cpp:4791
// variable: 1
// function calls: 8
void KeyValues3::ArrayRemoveMultiple(int nFirstIndexToRemove, int nRemoveCount)
{
	const char   __FUNCTION__; // 34469
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3906
	{
	}
	{
	}
	KeyValues3::Internal_AssertIsTable(
				const char* pFuncName,
				bool bAllowNull);  // 3893
	KeyValues3::Internal_AssertIsArray(
				const char* pFuncName,
				bool bAllowNull);  // 4793
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 4794
} /* size: 148, variables: 1, inline expansions: 8 (116 bytes) */

// <000F4421> kv3lib/keyvalues3.cpp:4791
// variable: 1
// function calls: 8
void KeyValues3::ArrayRemoveMultiple(int nFirstIndexToRemove, int nRemoveCount)
{
	const char   __FUNCTION__; // 26966
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 3906
	{
	}
	{
	}
	KeyValues3::Internal_AssertIsTable(
				const char* pFuncName,
				bool bAllowNull);  // 3893
	KeyValues3::Internal_AssertIsArray(
				const char* pFuncName,
				bool bAllowNull);  // 4793
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 4794
} /* size: 148, variables: 1, inline expansions: 8 (116 bytes) */

// <05552218> kv3lib/keyvalues3.cpp:4803
// variables: 2
// function calls: 12
void KeyValues3::ArrayAddToTail()
{
	const char   __FUNCTION__; // 35775
	int nIdx; // 4811
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 4806
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 4765
	KeyValues3::ArrayInsertMultipleBefore(
					int nIndexToInsertBefore,
					int nInsertCount);  // 4762
	KeyValues3::ArrayInsertMultipleBefore(
					int nIndexToInsertBefore,
					int nInsertCount);  // 4812
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1189
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1190
	KeyValues3::SetToEmptyArray(); // 4808
} /* size: 195, variables: 2, inline expansions: 12 (228 bytes) */

// <028C9C12> kv3lib/keyvalues3.cpp:4803
// variables: 2
// function calls: 12
void KeyValues3::ArrayAddToTail()
{
	const char   __FUNCTION__; // 54446
	int nIdx; // 4811
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 4806
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 4765
	KeyValues3::ArrayInsertMultipleBefore(
					int nIndexToInsertBefore,
					int nInsertCount);  // 4762
	KeyValues3::ArrayInsertMultipleBefore(
					int nIndexToInsertBefore,
					int nInsertCount);  // 4812
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1189
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1190
	KeyValues3::SetToEmptyArray(); // 4808
} /* size: 195, variables: 2, inline expansions: 12 (228 bytes) */

// <0122EE44> kv3lib/keyvalues3.cpp:4803
// variables: 2
// function calls: 12
void KeyValues3::ArrayAddToTail()
{
	const char   __FUNCTION__; // 16030
	int nIdx; // 4811
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 4806
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 4765
	KeyValues3::ArrayInsertMultipleBefore(
					int nIndexToInsertBefore,
					int nInsertCount);  // 4762
	KeyValues3::ArrayInsertMultipleBefore(
					int nIndexToInsertBefore,
					int nInsertCount);  // 4812
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1189
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1190
	KeyValues3::SetToEmptyArray(); // 4808
} /* size: 195, variables: 2, inline expansions: 12 (228 bytes) */

// <002AA609> kv3lib/keyvalues3.cpp:4803
// variables: 2
// function calls: 12
void KeyValues3::ArrayAddToTail()
{
	const char   __FUNCTION__; // 2197
	int nIdx; // 4811
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 4806
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 4765
	KeyValues3::ArrayInsertMultipleBefore(
					int nIndexToInsertBefore,
					int nInsertCount);  // 4762
	KeyValues3::ArrayInsertMultipleBefore(
					int nIndexToInsertBefore,
					int nInsertCount);  // 4812
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1189
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1190
	KeyValues3::SetToEmptyArray(); // 4808
} /* size: 195, variables: 2, inline expansions: 12 (228 bytes) */

// <0060F80B> kv3lib/keyvalues3.cpp:4803
// variables: 2
// function calls: 12
void KeyValues3::ArrayAddToTail()
{
	const char   __FUNCTION__; // 28183
	int nIdx; // 4811
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 4806
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 4765
	KeyValues3::ArrayInsertMultipleBefore(
					int nIndexToInsertBefore,
					int nInsertCount);  // 4762
	KeyValues3::ArrayInsertMultipleBefore(
					int nIndexToInsertBefore,
					int nInsertCount);  // 4812
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1189
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1190
	KeyValues3::SetToEmptyArray(); // 4808
} /* size: 195, variables: 2, inline expansions: 12 (228 bytes) */

// <009E7492> kv3lib/keyvalues3.cpp:4803
// variables: 2
// function calls: 12
void KeyValues3::ArrayAddToTail()
{
	const char   __FUNCTION__; // 34334
	int nIdx; // 4811
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 4806
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 4765
	KeyValues3::ArrayInsertMultipleBefore(
					int nIndexToInsertBefore,
					int nInsertCount);  // 4762
	KeyValues3::ArrayInsertMultipleBefore(
					int nIndexToInsertBefore,
					int nInsertCount);  // 4812
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1189
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1190
	KeyValues3::SetToEmptyArray(); // 4808
} /* size: 195, variables: 2, inline expansions: 12 (228 bytes) */

// <000F4013> kv3lib/keyvalues3.cpp:4803
// variables: 2
// function calls: 12
void KeyValues3::ArrayAddToTail()
{
	const char   __FUNCTION__; // 26831
	int nIdx; // 4811
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 4806
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 4765
	KeyValues3::ArrayInsertMultipleBefore(
					int nIndexToInsertBefore,
					int nInsertCount);  // 4762
	KeyValues3::ArrayInsertMultipleBefore(
					int nIndexToInsertBefore,
					int nInsertCount);  // 4812
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 1189
	KeyValues3::Internal_SetArrayCount(
				int nCount,
				KeyValues3Type_t nType);  // 1190
	KeyValues3::SetToEmptyArray(); // 4808
} /* size: 195, variables: 2, inline expansions: 12 (228 bytes) */

// <05551EE5> kv3lib/keyvalues3.cpp:4819
// variables: 3
// function calls: 8
void KeyValues3::SetValueColor(const Color& value)
{
	int intValues; // 4821
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 1997
	{
		int32* pCopiedValues; // 2015
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2016
	}
	KeyValues3::Internal_SetValueInt32Array(
					int nValues,
					const int32* pValues,
					KeyValues3InternalOwnershipMode_t ownership);  // 2075
	KeyValues3::SetValueIntArray(
			int nIntsInArray,
			const int* pValues);  // 4832
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 1997
	{
		int32* pCopiedValues; // 2015
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2016
	}
	KeyValues3::Internal_SetValueInt32Array(
					int nValues,
					const int32* pValues,
					KeyValues3InternalOwnershipMode_t ownership);  // 2075
	KeyValues3::SetValueIntArray(
			int nIntsInArray,
			const int* pValues);  // 4836
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <05589BEA> kv3lib/keyvalues3.cpp:4843
// variable: 1
// function calls: 8
void KeyValues3::GetValueColor(Color* pOutValue)
{
	int intValues; // 4845
	Color::SetRed(
		int _r);  // 4848
	Color::SetGreen(
		int _g);  // 4849
	Color::SetBlue(
		int _b);  // 4850
	Color::SetAlpha(
		int _a);  // 4851
	Color::SetRed(
		int _r);  // 4856
	Color::SetGreen(
		int _g);  // 4857
	Color::SetAlpha(
		int _a);  // 4859
	Color::SetBlue(
		int _b);  // 4858
} /* size: 0, variables: 1, inline expansions: 8 (0 bytes) */

// <05551E9E> kv3lib/keyvalues3.cpp:4843
// variable: 1
void KeyValues3::GetValueColor(Color* pOutValue)
{
	int intValues; // 4845
} /* size: 0, variables: 1 */

// <05589E75> kv3lib/keyvalues3.cpp:4871
// variable: 1
// function calls: 9
void KeyValues3::GetValueColor(const Color& defaultValue)
{
	Color colResult; // 4873
	Color::SetRed(
		int _r);  // 4848
	Color::SetGreen(
		int _g);  // 4849
	Color::SetBlue(
		int _b);  // 4850
	Color::SetAlpha(
		int _a);  // 4851
	Color::SetRed(
		int _r);  // 4856
	Color::SetGreen(
		int _g);  // 4857
	Color::SetBlue(
		int _b);  // 4858
	KeyValues3::GetValueColor(
			Color* pOutValue);  // 4874
	Color::Color(); // 4873
} /* size: 210, variables: 1, inline expansions: 9 (195 bytes) */

// <05551E67> kv3lib/keyvalues3.cpp:4871
// variable: 1
void KeyValues3::GetValueColor(const Color& defaultValue)
{
	Color colResult; // 4873
} /* size: 0, variables: 1 */

// <05551D6E> kv3lib/keyvalues3.cpp:4883
// variable: 1
// function call: 1
void KeyValues3::SetMemberColor(CKV3MemberName memberName, const Color& value)
{
	KeyValues3* pMember; // 4885
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 4885
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <055518A9> kv3lib/keyvalues3.cpp:4892
// variable: 1
// function calls: 18
void KeyValues3::GetMemberColor(CKV3MemberName memberName, Color* pOutValue)
{
	const KeyValues3* pMember; // 4894
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 2528
	KeyValues3::GetTable(); // 2531
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 2531
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8, int> >::Count(); // 3338
	{
	}
	CUtlMemory<KeyValues3::operator[](
			int i);  // 588
	CUtlVectorBase<KeyValues3::operator[](
			int i);  // 3345
	CKeyValues3Table::MemberData(
			int nIndex);  // 2535
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				uint& nextPropertyHint,
				KeyValues3* pDefaultValue);  // 943
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 943
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				uint& nNextPropertyHint,
				const KeyValues3* pDefaultValue);  // 941
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 941
	KeyValues3::Internal_FindMember(
				CKV3MemberName memberName,
				const KeyValues3* pDefaultValue);  // 4894
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 4894
	Color::GetRawColor(); // 147
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 4897
} /* size: 0, variables: 1, inline expansions: 18 (0 bytes) */

// <0122E1F6> kv3lib/keyvalues3.cpp:4907
// variables: 2
// function calls: 10
void DebugPrintKv3(const KeyValues3* pKV3)
{
	CUtlBuffer buffer; // 4909
	CUtlString errorString; // 4910
	CUtlString::CUtlString(); // 4910
	CUtlString::Get(); // 99
	CUtlString::String(); // 4917
	CUtlString::~CUtlString(); // 4919
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 4919
} /* size: 0, variables: 2, inline expansions: 10 (0 bytes) */

