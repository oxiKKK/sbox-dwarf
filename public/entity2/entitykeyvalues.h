
//
// public/entity2/entitykeyvalues.h
//
//	referenced by: libengine2.so
//
//	functions: 56
//	classes: 5
//	struct: 1
//

// <0010B985> ../public/entity2/entitykeyvalues.h:22
// member functions: 4
// static member variable: 1
// class size: 1
class CEntityVariantAllocator {
	/* ../public/entity2/entitykeyvalues.h:30 */
	void* Allocate(uint);
	/* ../public/entity2/entitykeyvalues.h:31 */
	void Free(void* );
	/* ../public/entity2/entitykeyvalues.h:36 */
	void Activate(CUtlScratchMemoryPool* , bool);
	/* ../public/entity2/entitykeyvalues.h:38 */
	CUtlScratchMemoryPool* GetAllocator(void);
private:
	static class CUtlScratchMemoryPool * sm_pMemoryPool; /* 0 0 */
};

// <067E05B7> ../public/entity2/entitykeyvalues.h:31
inline void Free(void* pMemory)
{
} /* size: 0 */

// <067E05B0> ../public/entity2/entitykeyvalues.h:38
inline void GetAllocator(void)
{
} /* size: 0 */

// <0010CE48> ../public/entity2/entitykeyvalues.h:50
// member functions: 73
// member variables: 5
// static member variable: 1
// class size: 88
class CEntityKeyValues {
	/* ../public/entity2/entitykeyvalues.h:53 */
	struct KeyValueInfo_t {
		CEntityVariant m_value; /* 0 16 */
		const char * m_pAttributeName; /* 16 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/entity2/entitykeyvalues.h:60 */
	void CEntityKeyValues(CEntityKeyValues* );
	/* ../public/entity2/entitykeyvalues.h:61 */
	void ~CEntityKeyValues(CEntityKeyValues* );
	/* ../public/entity2/entitykeyvalues.h:63 */
	void SetValue(CEntityKeyValues* , CUtlStringToken, const char* );
	/* ../public/entity2/entitykeyvalues.h:66 */
	void SetDynamicAttribute(CEntityKeyValues* , const char* , const char* );
	/* ../public/entity2/entitykeyvalues.h:69 */
	bool HasValue(const CEntityKeyValues* , CUtlStringToken);
	/* ../public/entity2/entitykeyvalues.h:72 */
	const CEntityVariant& GetValue(const CEntityKeyValues* , CUtlStringToken);
	/* ../public/entity2/entitykeyvalues.h:73 */
	const char* GetValueString(const CEntityKeyValues* , CUtlStringToken, const char* );
	/* ../public/entity2/entitykeyvalues.h:75 */
	void RemoveAllKeys(CEntityKeyValues* );
	/* ../public/entity2/entitykeyvalues.h:77 */
	bool Serialize(const CEntityKeyValues* , CUtlBuffer& );
	/* ../public/entity2/entitykeyvalues.h:78 */
	bool Unserialize(CEntityKeyValues* , CUtlBuffer& );
	/* ../public/entity2/entitykeyvalues.h:80 */
	void AddRef(const CEntityKeyValues* );
	/* ../public/entity2/entitykeyvalues.h:81 */
	void Release(const CEntityKeyValues* );
	/* ../public/entity2/entitykeyvalues.h:82 */
	int GetRef(const CEntityKeyValues* );
	/* ../public/entity2/entitykeyvalues.h:84 */
	bool IsEmpty(const CEntityKeyValues* );
private:
	/* ../public/entity2/entitykeyvalues.h:88 */
	bool SerializeKeys(const CEntityKeyValues* , CUtlBuffer& , bool);
	/* ../public/entity2/entitykeyvalues.h:89 */
	bool UnserializeKeys(CEntityKeyValues* , CUtlBuffer& , int, bool);
	/* ../public/entity2/entitykeyvalues.h:91 */
	int FindKeyHash(const CEntityKeyValues* , CUtlStringToken);
	CUtlLeanVectorFixedGrowable<unsigned int, 9, short int> m_keyHashes __attribute__((__aligned__(8))); /* 0 40 */
	CUtlLeanVector<CEntityKeyValues::KeyValueInfo_t, short int> m_keyValues; /* 40 16 */
	CUtlScratchMemoryPool m_memoryPool; /* 56 16 */
	CUtlString m_staticValue; /* 72 8 */
	int16 m_nRefCount; /* 80 2 */
	static CEntityVariant sm_EmptyVariant; /* 0 0 */
	/* ../public/entity2/entitykeyvalues.h:127 */
	const CEntityVariant& GetValue(const CEntityKeyValues* , int);
	/* ../public/entity2/entitykeyvalues.h:128 */
	CUtlStringToken GetKey(const CEntityKeyValues* , int);
	/* ../public/entity2/entitykeyvalues.h:129 */
	int GetKeyCount(const CEntityKeyValues* );
	void CEntityKeyValues(class CEntityKeyValues *); /* linkage=_ZN16CEntityKeyValuesC4Ev */
	void ~CEntityKeyValues(class CEntityKeyValues *); /* linkage=_ZN16CEntityKeyValuesD4Ev */
	void SetValue(class CEntityKeyValues *, class CUtlStringToken, const char  *); /* linkage=_ZN16CEntityKeyValues8SetValueE15CUtlStringTokenPKc */
	void SetDynamicAttribute(class CEntityKeyValues *, const char  *, const char  *); /* linkage=_ZN16CEntityKeyValues19SetDynamicAttributeEPKcS1_ */
	/* <67e2be1> entity2/entitykeyvalues.cpp:56 */
	bool HasValue(const class CEntityKeyValues  *, class CUtlStringToken); /* linkage=_ZNK16CEntityKeyValues8HasValueE15CUtlStringToken */
	const CEntityVariant  & GetValue(const class CEntityKeyValues  *, class CUtlStringToken); /* linkage=_ZNK16CEntityKeyValues8GetValueE15CUtlStringToken */
	const char  * GetValueString(const class CEntityKeyValues  *, class CUtlStringToken, const char  *); /* linkage=_ZNK16CEntityKeyValues14GetValueStringE15CUtlStringTokenPKc */
	/* <67e2dd4> entity2/entitykeyvalues.cpp:64 */
	void RemoveAllKeys(class CEntityKeyValues *); /* linkage=_ZN16CEntityKeyValues13RemoveAllKeysEv */
	bool Serialize(const class CEntityKeyValues  *, class CUtlBuffer &); /* linkage=_ZNK16CEntityKeyValues9SerializeER10CUtlBuffer */
	bool Unserialize(class CEntityKeyValues *, class CUtlBuffer &); /* linkage=_ZN16CEntityKeyValues11UnserializeER10CUtlBuffer */
	void AddRef(const class CEntityKeyValues  *); /* linkage=_ZNK16CEntityKeyValues6AddRefEv */
	void Release(const class CEntityKeyValues  *); /* linkage=_ZNK16CEntityKeyValues7ReleaseEv */
	int GetRef(const class CEntityKeyValues  *); /* linkage=_ZNK16CEntityKeyValues6GetRefEv */
	bool IsEmpty(const class CEntityKeyValues  *); /* linkage=_ZNK16CEntityKeyValues7IsEmptyEv */
	bool SerializeKeys(const class CEntityKeyValues  *, class CUtlBuffer &, bool); /* linkage=_ZNK16CEntityKeyValues13SerializeKeysER10CUtlBufferb */
	bool UnserializeKeys(class CEntityKeyValues *, class CUtlBuffer &, int, bool); /* linkage=_ZN16CEntityKeyValues15UnserializeKeysER10CUtlBufferib */
	int FindKeyHash(const class CEntityKeyValues  *, class CUtlStringToken); /* linkage=_ZNK16CEntityKeyValues11FindKeyHashE15CUtlStringToken */
	const CEntityVariant  & GetValue(const class CEntityKeyValues  *, int); /* linkage=_ZNK16CEntityKeyValues8GetValueEi */
	class CUtlStringToken GetKey(const class CEntityKeyValues  *, int); /* linkage=_ZNK16CEntityKeyValues6GetKeyEi */
	int GetKeyCount(const class CEntityKeyValues  *); /* linkage=_ZNK16CEntityKeyValues11GetKeyCountEv */
	int AddKeyValue<char const*>(class CEntityKeyValues *, class CUtlStringToken, const char  * const &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueIPKcEEi15CUtlStringTokenRKT_S2_ */
	int AddKeyValue<CBufferStringN<200> >(class CEntityKeyValues *, class CUtlStringToken, const class CBufferStringN<200>  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueI14CBufferStringNILi200EEEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<Color>(class CEntityKeyValues *, class CUtlStringToken, const class Color  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueI5ColorEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<Vector4D>(class CEntityKeyValues *, class CUtlStringToken, const class Vector4D  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueI8Vector4DEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<Vector2D>(class CEntityKeyValues *, class CUtlStringToken, const class Vector2D  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueI8Vector2DEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<QAngle>(class CEntityKeyValues *, class CUtlStringToken, const class QAngle  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueI6QAngleEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<Quaternion>(class CEntityKeyValues *, class CUtlStringToken, const class Quaternion  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueI10QuaternionEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<Vector>(class CEntityKeyValues *, class CUtlStringToken, const class Vector  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueI6VectorEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<bool>(class CEntityKeyValues *, class CUtlStringToken, const bool  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueIbEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<char>(class CEntityKeyValues *, class CUtlStringToken, const char  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueIcEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<long long unsigned int>(class CEntityKeyValues *, class CUtlStringToken, const long long unsigned int  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueIyEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<long long int>(class CEntityKeyValues *, class CUtlStringToken, const long long int  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueIxEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<unsigned int>(class CEntityKeyValues *, class CUtlStringToken, const unsigned int  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueIjEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<double>(class CEntityKeyValues *, class CUtlStringToken, const double  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueIdEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<int>(class CEntityKeyValues *, class CUtlStringToken, const int  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueIiEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<float>(class CEntityKeyValues *, class CUtlStringToken, const float  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueIfEEi15CUtlStringTokenRKT_PKc */
	void SetValue<CBufferStringN<200> >(class CEntityKeyValues *, class CUtlStringToken, const class CBufferStringN<200>  &); /* linkage=_ZN16CEntityKeyValues8SetValueI14CBufferStringNILi200EEEEv15CUtlStringTokenRKT_ */
	void SetValue<Color>(class CEntityKeyValues *, class CUtlStringToken, const class Color  &); /* linkage=_ZN16CEntityKeyValues8SetValueI5ColorEEv15CUtlStringTokenRKT_ */
	void SetValue<Vector4D>(class CEntityKeyValues *, class CUtlStringToken, const class Vector4D  &); /* linkage=_ZN16CEntityKeyValues8SetValueI8Vector4DEEv15CUtlStringTokenRKT_ */
	void SetValue<Vector2D>(class CEntityKeyValues *, class CUtlStringToken, const class Vector2D  &); /* linkage=_ZN16CEntityKeyValues8SetValueI8Vector2DEEv15CUtlStringTokenRKT_ */
	void SetValue<QAngle>(class CEntityKeyValues *, class CUtlStringToken, const class QAngle  &); /* linkage=_ZN16CEntityKeyValues8SetValueI6QAngleEEv15CUtlStringTokenRKT_ */
	void SetValue<Quaternion>(class CEntityKeyValues *, class CUtlStringToken, const class Quaternion  &); /* linkage=_ZN16CEntityKeyValues8SetValueI10QuaternionEEv15CUtlStringTokenRKT_ */
	void SetValue<Vector>(class CEntityKeyValues *, class CUtlStringToken, const class Vector  &); /* linkage=_ZN16CEntityKeyValues8SetValueI6VectorEEv15CUtlStringTokenRKT_ */
	void SetValue<bool>(class CEntityKeyValues *, class CUtlStringToken, const bool  &); /* linkage=_ZN16CEntityKeyValues8SetValueIbEEv15CUtlStringTokenRKT_ */
	void SetValue<char>(class CEntityKeyValues *, class CUtlStringToken, const char  &); /* linkage=_ZN16CEntityKeyValues8SetValueIcEEv15CUtlStringTokenRKT_ */
	void SetValue<long long unsigned int>(class CEntityKeyValues *, class CUtlStringToken, const long long unsigned int  &); /* linkage=_ZN16CEntityKeyValues8SetValueIyEEv15CUtlStringTokenRKT_ */
	void SetValue<long long int>(class CEntityKeyValues *, class CUtlStringToken, const long long int  &); /* linkage=_ZN16CEntityKeyValues8SetValueIxEEv15CUtlStringTokenRKT_ */
	void SetValue<unsigned int>(class CEntityKeyValues *, class CUtlStringToken, const unsigned int  &); /* linkage=_ZN16CEntityKeyValues8SetValueIjEEv15CUtlStringTokenRKT_ */
	void SetValue<int>(class CEntityKeyValues *, class CUtlStringToken, const int  &); /* linkage=_ZN16CEntityKeyValues8SetValueIiEEv15CUtlStringTokenRKT_ */
	void SetValue<double>(class CEntityKeyValues *, class CUtlStringToken, const double  &); /* linkage=_ZN16CEntityKeyValues8SetValueIdEEv15CUtlStringTokenRKT_ */
	void SetValue<float>(class CEntityKeyValues *, class CUtlStringToken, const float  &); /* linkage=_ZN16CEntityKeyValues8SetValueIfEEv15CUtlStringTokenRKT_ */
	void SetDynamicAttribute<int>(class CEntityKeyValues *, const char  *, const int  &); /* linkage=_ZN16CEntityKeyValues19SetDynamicAttributeIiEEvPKcRKT_ */
	void SetDynamicAttribute<float>(class CEntityKeyValues *, const char  *, const float  &); /* linkage=_ZN16CEntityKeyValues19SetDynamicAttributeIfEEvPKcRKT_ */
} __attribute__((__aligned__(8)));

// <00FCA7F8> ../public/entity2/entitykeyvalues.h:50
// member functions: 77
// member variables: 5
// static member variable: 1
// class size: 88
class CEntityKeyValues {
	/* ../public/entity2/entitykeyvalues.h:53 */
	struct KeyValueInfo_t {
		CEntityVariant m_value; /* 0 16 */
		const char * m_pAttributeName; /* 16 8 */
		void ~KeyValueInfo_t(KeyValueInfo_t* );
		void KeyValueInfo_t(KeyValueInfo_t* , KeyValueInfo_t& );
		void KeyValueInfo_t(KeyValueInfo_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/entity2/entitykeyvalues.h:60 */
	void CEntityKeyValues(CEntityKeyValues* );
	/* ../public/entity2/entitykeyvalues.h:61 */
	void ~CEntityKeyValues(CEntityKeyValues* );
	/* ../public/entity2/entitykeyvalues.h:63 */
	void SetValue(CEntityKeyValues* , CUtlStringToken, const char* );
	/* ../public/entity2/entitykeyvalues.h:66 */
	void SetDynamicAttribute(CEntityKeyValues* , const char* , const char* );
	/* ../public/entity2/entitykeyvalues.h:69 */
	bool HasValue(const CEntityKeyValues* , CUtlStringToken);
	/* ../public/entity2/entitykeyvalues.h:72 */
	const CEntityVariant& GetValue(const CEntityKeyValues* , CUtlStringToken);
	/* ../public/entity2/entitykeyvalues.h:73 */
	const char* GetValueString(const CEntityKeyValues* , CUtlStringToken, const char* );
	/* ../public/entity2/entitykeyvalues.h:75 */
	void RemoveAllKeys(CEntityKeyValues* );
	/* ../public/entity2/entitykeyvalues.h:77 */
	bool Serialize(const CEntityKeyValues* , CUtlBuffer& );
	/* ../public/entity2/entitykeyvalues.h:78 */
	bool Unserialize(CEntityKeyValues* , CUtlBuffer& );
	/* ../public/entity2/entitykeyvalues.h:80 */
	void AddRef(const CEntityKeyValues* );
	/* ../public/entity2/entitykeyvalues.h:81 */
	void Release(const CEntityKeyValues* );
	/* ../public/entity2/entitykeyvalues.h:82 */
	int GetRef(const CEntityKeyValues* );
	/* ../public/entity2/entitykeyvalues.h:84 */
	bool IsEmpty(const CEntityKeyValues* );
private:
	/* ../public/entity2/entitykeyvalues.h:88 */
	bool SerializeKeys(const CEntityKeyValues* , CUtlBuffer& , bool);
	/* ../public/entity2/entitykeyvalues.h:89 */
	bool UnserializeKeys(CEntityKeyValues* , CUtlBuffer& , int, bool);
	/* ../public/entity2/entitykeyvalues.h:91 */
	int FindKeyHash(const CEntityKeyValues* , CUtlStringToken);
	CUtlLeanVectorFixedGrowable<unsigned int, 9, short int> m_keyHashes __attribute__((__aligned__(8))); /* 0 40 */
	CUtlLeanVector<CEntityKeyValues::KeyValueInfo_t, short int> m_keyValues; /* 40 16 */
	CUtlScratchMemoryPool m_memoryPool; /* 56 16 */
	CUtlString m_staticValue; /* 72 8 */
	int16 m_nRefCount; /* 80 2 */
	static CEntityVariant sm_EmptyVariant; /* 0 0 */
	/* ../public/entity2/entitykeyvalues.h:127 */
	const CEntityVariant& GetValue(const CEntityKeyValues* , int);
	/* ../public/entity2/entitykeyvalues.h:128 */
	CUtlStringToken GetKey(const CEntityKeyValues* , int);
	/* ../public/entity2/entitykeyvalues.h:129 */
	int GetKeyCount(const CEntityKeyValues* );
	/* ../public/entity2/entitykeyvalues.h:103 */
	int AddKeyValue<char const*>(CEntityKeyValues* , CUtlStringToken, const char* const& , const char* );
	void CEntityKeyValues(class CEntityKeyValues *); /* linkage=_ZN16CEntityKeyValuesC4Ev */
	void ~CEntityKeyValues(class CEntityKeyValues *); /* linkage=_ZN16CEntityKeyValuesD4Ev */
	void SetValue(class CEntityKeyValues *, class CUtlStringToken, const char  *); /* linkage=_ZN16CEntityKeyValues8SetValueE15CUtlStringTokenPKc */
	void SetDynamicAttribute(class CEntityKeyValues *, const char  *, const char  *); /* linkage=_ZN16CEntityKeyValues19SetDynamicAttributeEPKcS1_ */
	/* <67e2be1> entity2/entitykeyvalues.cpp:56 */
	bool HasValue(const class CEntityKeyValues  *, class CUtlStringToken); /* linkage=_ZNK16CEntityKeyValues8HasValueE15CUtlStringToken */
	const CEntityVariant  & GetValue(const class CEntityKeyValues  *, class CUtlStringToken); /* linkage=_ZNK16CEntityKeyValues8GetValueE15CUtlStringToken */
	const char  * GetValueString(const class CEntityKeyValues  *, class CUtlStringToken, const char  *); /* linkage=_ZNK16CEntityKeyValues14GetValueStringE15CUtlStringTokenPKc */
	/* <67e2dd4> entity2/entitykeyvalues.cpp:64 */
	void RemoveAllKeys(class CEntityKeyValues *); /* linkage=_ZN16CEntityKeyValues13RemoveAllKeysEv */
	bool Serialize(const class CEntityKeyValues  *, class CUtlBuffer &); /* linkage=_ZNK16CEntityKeyValues9SerializeER10CUtlBuffer */
	bool Unserialize(class CEntityKeyValues *, class CUtlBuffer &); /* linkage=_ZN16CEntityKeyValues11UnserializeER10CUtlBuffer */
	void AddRef(const class CEntityKeyValues  *); /* linkage=_ZNK16CEntityKeyValues6AddRefEv */
	void Release(const class CEntityKeyValues  *); /* linkage=_ZNK16CEntityKeyValues7ReleaseEv */
	int GetRef(const class CEntityKeyValues  *); /* linkage=_ZNK16CEntityKeyValues6GetRefEv */
	bool IsEmpty(const class CEntityKeyValues  *); /* linkage=_ZNK16CEntityKeyValues7IsEmptyEv */
	bool SerializeKeys(const class CEntityKeyValues  *, class CUtlBuffer &, bool); /* linkage=_ZNK16CEntityKeyValues13SerializeKeysER10CUtlBufferb */
	bool UnserializeKeys(class CEntityKeyValues *, class CUtlBuffer &, int, bool); /* linkage=_ZN16CEntityKeyValues15UnserializeKeysER10CUtlBufferib */
	int FindKeyHash(const class CEntityKeyValues  *, class CUtlStringToken); /* linkage=_ZNK16CEntityKeyValues11FindKeyHashE15CUtlStringToken */
	const CEntityVariant  & GetValue(const class CEntityKeyValues  *, int); /* linkage=_ZNK16CEntityKeyValues8GetValueEi */
	class CUtlStringToken GetKey(const class CEntityKeyValues  *, int); /* linkage=_ZNK16CEntityKeyValues6GetKeyEi */
	int GetKeyCount(const class CEntityKeyValues  *); /* linkage=_ZNK16CEntityKeyValues11GetKeyCountEv */
	int AddKeyValue<char const*>(class CEntityKeyValues *, class CUtlStringToken, const char  * const &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueIPKcEEi15CUtlStringTokenRKT_S2_ */
	int AddKeyValue<CBufferStringN<200> >(class CEntityKeyValues *, class CUtlStringToken, const class CBufferStringN<200>  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueI14CBufferStringNILi200EEEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<Color>(class CEntityKeyValues *, class CUtlStringToken, const class Color  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueI5ColorEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<Vector4D>(class CEntityKeyValues *, class CUtlStringToken, const class Vector4D  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueI8Vector4DEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<Vector2D>(class CEntityKeyValues *, class CUtlStringToken, const class Vector2D  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueI8Vector2DEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<QAngle>(class CEntityKeyValues *, class CUtlStringToken, const class QAngle  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueI6QAngleEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<Quaternion>(class CEntityKeyValues *, class CUtlStringToken, const class Quaternion  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueI10QuaternionEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<Vector>(class CEntityKeyValues *, class CUtlStringToken, const class Vector  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueI6VectorEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<bool>(class CEntityKeyValues *, class CUtlStringToken, const bool  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueIbEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<char>(class CEntityKeyValues *, class CUtlStringToken, const char  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueIcEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<long long unsigned int>(class CEntityKeyValues *, class CUtlStringToken, const long long unsigned int  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueIyEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<long long int>(class CEntityKeyValues *, class CUtlStringToken, const long long int  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueIxEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<unsigned int>(class CEntityKeyValues *, class CUtlStringToken, const unsigned int  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueIjEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<double>(class CEntityKeyValues *, class CUtlStringToken, const double  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueIdEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<int>(class CEntityKeyValues *, class CUtlStringToken, const int  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueIiEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<float>(class CEntityKeyValues *, class CUtlStringToken, const float  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueIfEEi15CUtlStringTokenRKT_PKc */
	void SetValue<CBufferStringN<200> >(class CEntityKeyValues *, class CUtlStringToken, const class CBufferStringN<200>  &); /* linkage=_ZN16CEntityKeyValues8SetValueI14CBufferStringNILi200EEEEv15CUtlStringTokenRKT_ */
	void SetValue<Color>(class CEntityKeyValues *, class CUtlStringToken, const class Color  &); /* linkage=_ZN16CEntityKeyValues8SetValueI5ColorEEv15CUtlStringTokenRKT_ */
	void SetValue<Vector4D>(class CEntityKeyValues *, class CUtlStringToken, const class Vector4D  &); /* linkage=_ZN16CEntityKeyValues8SetValueI8Vector4DEEv15CUtlStringTokenRKT_ */
	void SetValue<Vector2D>(class CEntityKeyValues *, class CUtlStringToken, const class Vector2D  &); /* linkage=_ZN16CEntityKeyValues8SetValueI8Vector2DEEv15CUtlStringTokenRKT_ */
	void SetValue<QAngle>(class CEntityKeyValues *, class CUtlStringToken, const class QAngle  &); /* linkage=_ZN16CEntityKeyValues8SetValueI6QAngleEEv15CUtlStringTokenRKT_ */
	void SetValue<Quaternion>(class CEntityKeyValues *, class CUtlStringToken, const class Quaternion  &); /* linkage=_ZN16CEntityKeyValues8SetValueI10QuaternionEEv15CUtlStringTokenRKT_ */
	void SetValue<Vector>(class CEntityKeyValues *, class CUtlStringToken, const class Vector  &); /* linkage=_ZN16CEntityKeyValues8SetValueI6VectorEEv15CUtlStringTokenRKT_ */
	void SetValue<bool>(class CEntityKeyValues *, class CUtlStringToken, const bool  &); /* linkage=_ZN16CEntityKeyValues8SetValueIbEEv15CUtlStringTokenRKT_ */
	void SetValue<char>(class CEntityKeyValues *, class CUtlStringToken, const char  &); /* linkage=_ZN16CEntityKeyValues8SetValueIcEEv15CUtlStringTokenRKT_ */
	void SetValue<long long unsigned int>(class CEntityKeyValues *, class CUtlStringToken, const long long unsigned int  &); /* linkage=_ZN16CEntityKeyValues8SetValueIyEEv15CUtlStringTokenRKT_ */
	void SetValue<long long int>(class CEntityKeyValues *, class CUtlStringToken, const long long int  &); /* linkage=_ZN16CEntityKeyValues8SetValueIxEEv15CUtlStringTokenRKT_ */
	void SetValue<unsigned int>(class CEntityKeyValues *, class CUtlStringToken, const unsigned int  &); /* linkage=_ZN16CEntityKeyValues8SetValueIjEEv15CUtlStringTokenRKT_ */
	void SetValue<int>(class CEntityKeyValues *, class CUtlStringToken, const int  &); /* linkage=_ZN16CEntityKeyValues8SetValueIiEEv15CUtlStringTokenRKT_ */
	void SetValue<double>(class CEntityKeyValues *, class CUtlStringToken, const double  &); /* linkage=_ZN16CEntityKeyValues8SetValueIdEEv15CUtlStringTokenRKT_ */
	void SetValue<float>(class CEntityKeyValues *, class CUtlStringToken, const float  &); /* linkage=_ZN16CEntityKeyValues8SetValueIfEEv15CUtlStringTokenRKT_ */
	void SetDynamicAttribute<int>(class CEntityKeyValues *, const char  *, const int  &); /* linkage=_ZN16CEntityKeyValues19SetDynamicAttributeIiEEvPKcRKT_ */
	void SetDynamicAttribute<float>(class CEntityKeyValues *, const char  *, const float  &); /* linkage=_ZN16CEntityKeyValues19SetDynamicAttributeIfEEvPKcRKT_ */
} __attribute__((__aligned__(8)));

// <067C7D44> ../public/entity2/entitykeyvalues.h:50
// member functions: 109
// member variables: 5
// static member variable: 1
// class size: 88
class CEntityKeyValues {
	/* ../public/entity2/entitykeyvalues.h:53 */
	struct KeyValueInfo_t {
		CEntityVariant m_value; /* 0 16 */
		const char * m_pAttributeName; /* 16 8 */
		void ~KeyValueInfo_t(KeyValueInfo_t* );
		void KeyValueInfo_t(KeyValueInfo_t* , KeyValueInfo_t& );
		void KeyValueInfo_t(KeyValueInfo_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/entity2/entitykeyvalues.h:60 */
	void CEntityKeyValues(CEntityKeyValues* );
	/* ../public/entity2/entitykeyvalues.h:61 */
	void ~CEntityKeyValues(CEntityKeyValues* );
	/* ../public/entity2/entitykeyvalues.h:63 */
	void SetValue(CEntityKeyValues* , CUtlStringToken, const char* );
	/* ../public/entity2/entitykeyvalues.h:66 */
	void SetDynamicAttribute(CEntityKeyValues* , const char* , const char* );
	/* ../public/entity2/entitykeyvalues.h:69 */
	bool HasValue(const CEntityKeyValues* , CUtlStringToken);
	/* ../public/entity2/entitykeyvalues.h:72 */
	const CEntityVariant& GetValue(const CEntityKeyValues* , CUtlStringToken);
	/* ../public/entity2/entitykeyvalues.h:73 */
	const char* GetValueString(const CEntityKeyValues* , CUtlStringToken, const char* );
	/* ../public/entity2/entitykeyvalues.h:75 */
	void RemoveAllKeys(CEntityKeyValues* );
	/* ../public/entity2/entitykeyvalues.h:77 */
	bool Serialize(const CEntityKeyValues* , CUtlBuffer& );
	/* ../public/entity2/entitykeyvalues.h:78 */
	bool Unserialize(CEntityKeyValues* , CUtlBuffer& );
	/* ../public/entity2/entitykeyvalues.h:80 */
	void AddRef(const CEntityKeyValues* );
	/* ../public/entity2/entitykeyvalues.h:81 */
	void Release(const CEntityKeyValues* );
	/* ../public/entity2/entitykeyvalues.h:82 */
	int GetRef(const CEntityKeyValues* );
	/* ../public/entity2/entitykeyvalues.h:84 */
	bool IsEmpty(const CEntityKeyValues* );
private:
	/* ../public/entity2/entitykeyvalues.h:88 */
	bool SerializeKeys(const CEntityKeyValues* , CUtlBuffer& , bool);
	/* ../public/entity2/entitykeyvalues.h:89 */
	bool UnserializeKeys(CEntityKeyValues* , CUtlBuffer& , int, bool);
	/* ../public/entity2/entitykeyvalues.h:91 */
	int FindKeyHash(const CEntityKeyValues* , CUtlStringToken);
	CUtlLeanVectorFixedGrowable<unsigned int, 9, short int> m_keyHashes __attribute__((__aligned__(8))); /* 0 40 */
	CUtlLeanVector<CEntityKeyValues::KeyValueInfo_t, short int> m_keyValues; /* 40 16 */
	CUtlScratchMemoryPool m_memoryPool; /* 56 16 */
	CUtlString m_staticValue; /* 72 8 */
	int16 m_nRefCount; /* 80 2 */
	static CEntityVariant sm_EmptyVariant; /* 0 0 */
	/* ../public/entity2/entitykeyvalues.h:127 */
	const CEntityVariant& GetValue(const CEntityKeyValues* , int);
	/* ../public/entity2/entitykeyvalues.h:128 */
	CUtlStringToken GetKey(const CEntityKeyValues* , int);
	/* ../public/entity2/entitykeyvalues.h:129 */
	int GetKeyCount(const CEntityKeyValues* );
	/* ../public/entity2/entitykeyvalues.h:103 */
	int AddKeyValue<CBufferStringN<200> >(CEntityKeyValues* , CUtlStringToken, const CBufferStringN<200>& , const char* );
	/* ../public/entity2/entitykeyvalues.h:103 */
	int AddKeyValue<Color>(CEntityKeyValues* , CUtlStringToken, const Color& , const char* );
	/* ../public/entity2/entitykeyvalues.h:103 */
	int AddKeyValue<Vector4D>(CEntityKeyValues* , CUtlStringToken, const Vector4D& , const char* );
	/* ../public/entity2/entitykeyvalues.h:103 */
	int AddKeyValue<Vector2D>(CEntityKeyValues* , CUtlStringToken, const Vector2D& , const char* );
	/* ../public/entity2/entitykeyvalues.h:103 */
	int AddKeyValue<QAngle>(CEntityKeyValues* , CUtlStringToken, const QAngle& , const char* );
	/* ../public/entity2/entitykeyvalues.h:103 */
	int AddKeyValue<Quaternion>(CEntityKeyValues* , CUtlStringToken, const Quaternion& , const char* );
	/* ../public/entity2/entitykeyvalues.h:103 */
	int AddKeyValue<Vector>(CEntityKeyValues* , CUtlStringToken, const Vector& , const char* );
	/* ../public/entity2/entitykeyvalues.h:103 */
	int AddKeyValue<bool>(CEntityKeyValues* , CUtlStringToken, const bool& , const char* );
	/* ../public/entity2/entitykeyvalues.h:103 */
	int AddKeyValue<char>(CEntityKeyValues* , CUtlStringToken, const char& , const char* );
	/* ../public/entity2/entitykeyvalues.h:103 */
	int AddKeyValue<long long unsigned int>(CEntityKeyValues* , CUtlStringToken, const long long unsigned int& , const char* );
	/* ../public/entity2/entitykeyvalues.h:103 */
	int AddKeyValue<long long int>(CEntityKeyValues* , CUtlStringToken, const long long int& , const char* );
	/* ../public/entity2/entitykeyvalues.h:103 */
	int AddKeyValue<unsigned int>(CEntityKeyValues* , CUtlStringToken, const unsigned int& , const char* );
	/* ../public/entity2/entitykeyvalues.h:103 */
	int AddKeyValue<double>(CEntityKeyValues* , CUtlStringToken, const double& , const char* );
	/* ../public/entity2/entitykeyvalues.h:103 */
	int AddKeyValue<int>(CEntityKeyValues* , CUtlStringToken, const int& , const char* );
	/* ../public/entity2/entitykeyvalues.h:103 */
	int AddKeyValue<float>(CEntityKeyValues* , CUtlStringToken, const float& , const char* );
	/* ../public/entity2/entitykeyvalues.h:244 */
	void SetValue<CBufferStringN<200> >(CEntityKeyValues* , CUtlStringToken, const CBufferStringN<200>& );
	/* ../public/entity2/entitykeyvalues.h:244 */
	void SetValue<Color>(CEntityKeyValues* , CUtlStringToken, const Color& );
	/* ../public/entity2/entitykeyvalues.h:244 */
	void SetValue<Vector4D>(CEntityKeyValues* , CUtlStringToken, const Vector4D& );
	/* ../public/entity2/entitykeyvalues.h:244 */
	void SetValue<Vector2D>(CEntityKeyValues* , CUtlStringToken, const Vector2D& );
	/* ../public/entity2/entitykeyvalues.h:244 */
	void SetValue<QAngle>(CEntityKeyValues* , CUtlStringToken, const QAngle& );
	/* ../public/entity2/entitykeyvalues.h:244 */
	void SetValue<Quaternion>(CEntityKeyValues* , CUtlStringToken, const Quaternion& );
	/* ../public/entity2/entitykeyvalues.h:244 */
	void SetValue<Vector>(CEntityKeyValues* , CUtlStringToken, const Vector& );
	/* ../public/entity2/entitykeyvalues.h:244 */
	void SetValue<bool>(CEntityKeyValues* , CUtlStringToken, const bool& );
	/* ../public/entity2/entitykeyvalues.h:244 */
	void SetValue<char>(CEntityKeyValues* , CUtlStringToken, const char& );
	/* ../public/entity2/entitykeyvalues.h:244 */
	void SetValue<long long unsigned int>(CEntityKeyValues* , CUtlStringToken, const long long unsigned int& );
	/* ../public/entity2/entitykeyvalues.h:244 */
	void SetValue<long long int>(CEntityKeyValues* , CUtlStringToken, const long long int& );
	/* ../public/entity2/entitykeyvalues.h:244 */
	void SetValue<unsigned int>(CEntityKeyValues* , CUtlStringToken, const unsigned int& );
	/* ../public/entity2/entitykeyvalues.h:244 */
	void SetValue<int>(CEntityKeyValues* , CUtlStringToken, const int& );
	/* ../public/entity2/entitykeyvalues.h:244 */
	void SetValue<double>(CEntityKeyValues* , CUtlStringToken, const double& );
	/* ../public/entity2/entitykeyvalues.h:244 */
	void SetValue<float>(CEntityKeyValues* , CUtlStringToken, const float& );
	/* ../public/entity2/entitykeyvalues.h:286 */
	void SetDynamicAttribute<int>(CEntityKeyValues* , const char* , const int& );
	/* ../public/entity2/entitykeyvalues.h:286 */
	void SetDynamicAttribute<float>(CEntityKeyValues* , const char* , const float& );
	/* ../public/entity2/entitykeyvalues.h:103 */
	int AddKeyValue<char const*>(CEntityKeyValues* , CUtlStringToken, const char* const& , const char* );
	void CEntityKeyValues(class CEntityKeyValues *); /* linkage=_ZN16CEntityKeyValuesC4Ev */
	void ~CEntityKeyValues(class CEntityKeyValues *); /* linkage=_ZN16CEntityKeyValuesD4Ev */
	void SetValue(class CEntityKeyValues *, class CUtlStringToken, const char  *); /* linkage=_ZN16CEntityKeyValues8SetValueE15CUtlStringTokenPKc */
	void SetDynamicAttribute(class CEntityKeyValues *, const char  *, const char  *); /* linkage=_ZN16CEntityKeyValues19SetDynamicAttributeEPKcS1_ */
	/* <67e2be1> entity2/entitykeyvalues.cpp:56 */
	bool HasValue(const class CEntityKeyValues  *, class CUtlStringToken); /* linkage=_ZNK16CEntityKeyValues8HasValueE15CUtlStringToken */
	const CEntityVariant  & GetValue(const class CEntityKeyValues  *, class CUtlStringToken); /* linkage=_ZNK16CEntityKeyValues8GetValueE15CUtlStringToken */
	const char  * GetValueString(const class CEntityKeyValues  *, class CUtlStringToken, const char  *); /* linkage=_ZNK16CEntityKeyValues14GetValueStringE15CUtlStringTokenPKc */
	/* <67e2dd4> entity2/entitykeyvalues.cpp:64 */
	void RemoveAllKeys(class CEntityKeyValues *); /* linkage=_ZN16CEntityKeyValues13RemoveAllKeysEv */
	bool Serialize(const class CEntityKeyValues  *, class CUtlBuffer &); /* linkage=_ZNK16CEntityKeyValues9SerializeER10CUtlBuffer */
	bool Unserialize(class CEntityKeyValues *, class CUtlBuffer &); /* linkage=_ZN16CEntityKeyValues11UnserializeER10CUtlBuffer */
	void AddRef(const class CEntityKeyValues  *); /* linkage=_ZNK16CEntityKeyValues6AddRefEv */
	void Release(const class CEntityKeyValues  *); /* linkage=_ZNK16CEntityKeyValues7ReleaseEv */
	int GetRef(const class CEntityKeyValues  *); /* linkage=_ZNK16CEntityKeyValues6GetRefEv */
	bool IsEmpty(const class CEntityKeyValues  *); /* linkage=_ZNK16CEntityKeyValues7IsEmptyEv */
	bool SerializeKeys(const class CEntityKeyValues  *, class CUtlBuffer &, bool); /* linkage=_ZNK16CEntityKeyValues13SerializeKeysER10CUtlBufferb */
	bool UnserializeKeys(class CEntityKeyValues *, class CUtlBuffer &, int, bool); /* linkage=_ZN16CEntityKeyValues15UnserializeKeysER10CUtlBufferib */
	int FindKeyHash(const class CEntityKeyValues  *, class CUtlStringToken); /* linkage=_ZNK16CEntityKeyValues11FindKeyHashE15CUtlStringToken */
	const CEntityVariant  & GetValue(const class CEntityKeyValues  *, int); /* linkage=_ZNK16CEntityKeyValues8GetValueEi */
	class CUtlStringToken GetKey(const class CEntityKeyValues  *, int); /* linkage=_ZNK16CEntityKeyValues6GetKeyEi */
	int GetKeyCount(const class CEntityKeyValues  *); /* linkage=_ZNK16CEntityKeyValues11GetKeyCountEv */
	int AddKeyValue<char const*>(class CEntityKeyValues *, class CUtlStringToken, const char  * const &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueIPKcEEi15CUtlStringTokenRKT_S2_ */
	int AddKeyValue<CBufferStringN<200> >(class CEntityKeyValues *, class CUtlStringToken, const class CBufferStringN<200>  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueI14CBufferStringNILi200EEEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<Color>(class CEntityKeyValues *, class CUtlStringToken, const class Color  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueI5ColorEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<Vector4D>(class CEntityKeyValues *, class CUtlStringToken, const class Vector4D  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueI8Vector4DEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<Vector2D>(class CEntityKeyValues *, class CUtlStringToken, const class Vector2D  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueI8Vector2DEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<QAngle>(class CEntityKeyValues *, class CUtlStringToken, const class QAngle  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueI6QAngleEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<Quaternion>(class CEntityKeyValues *, class CUtlStringToken, const class Quaternion  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueI10QuaternionEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<Vector>(class CEntityKeyValues *, class CUtlStringToken, const class Vector  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueI6VectorEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<bool>(class CEntityKeyValues *, class CUtlStringToken, const bool  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueIbEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<char>(class CEntityKeyValues *, class CUtlStringToken, const char  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueIcEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<long long unsigned int>(class CEntityKeyValues *, class CUtlStringToken, const long long unsigned int  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueIyEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<long long int>(class CEntityKeyValues *, class CUtlStringToken, const long long int  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueIxEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<unsigned int>(class CEntityKeyValues *, class CUtlStringToken, const unsigned int  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueIjEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<double>(class CEntityKeyValues *, class CUtlStringToken, const double  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueIdEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<int>(class CEntityKeyValues *, class CUtlStringToken, const int  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueIiEEi15CUtlStringTokenRKT_PKc */
	int AddKeyValue<float>(class CEntityKeyValues *, class CUtlStringToken, const float  &, const char  *); /* linkage=_ZN16CEntityKeyValues11AddKeyValueIfEEi15CUtlStringTokenRKT_PKc */
	void SetValue<CBufferStringN<200> >(class CEntityKeyValues *, class CUtlStringToken, const class CBufferStringN<200>  &); /* linkage=_ZN16CEntityKeyValues8SetValueI14CBufferStringNILi200EEEEv15CUtlStringTokenRKT_ */
	void SetValue<Color>(class CEntityKeyValues *, class CUtlStringToken, const class Color  &); /* linkage=_ZN16CEntityKeyValues8SetValueI5ColorEEv15CUtlStringTokenRKT_ */
	void SetValue<Vector4D>(class CEntityKeyValues *, class CUtlStringToken, const class Vector4D  &); /* linkage=_ZN16CEntityKeyValues8SetValueI8Vector4DEEv15CUtlStringTokenRKT_ */
	void SetValue<Vector2D>(class CEntityKeyValues *, class CUtlStringToken, const class Vector2D  &); /* linkage=_ZN16CEntityKeyValues8SetValueI8Vector2DEEv15CUtlStringTokenRKT_ */
	void SetValue<QAngle>(class CEntityKeyValues *, class CUtlStringToken, const class QAngle  &); /* linkage=_ZN16CEntityKeyValues8SetValueI6QAngleEEv15CUtlStringTokenRKT_ */
	void SetValue<Quaternion>(class CEntityKeyValues *, class CUtlStringToken, const class Quaternion  &); /* linkage=_ZN16CEntityKeyValues8SetValueI10QuaternionEEv15CUtlStringTokenRKT_ */
	void SetValue<Vector>(class CEntityKeyValues *, class CUtlStringToken, const class Vector  &); /* linkage=_ZN16CEntityKeyValues8SetValueI6VectorEEv15CUtlStringTokenRKT_ */
	void SetValue<bool>(class CEntityKeyValues *, class CUtlStringToken, const bool  &); /* linkage=_ZN16CEntityKeyValues8SetValueIbEEv15CUtlStringTokenRKT_ */
	void SetValue<char>(class CEntityKeyValues *, class CUtlStringToken, const char  &); /* linkage=_ZN16CEntityKeyValues8SetValueIcEEv15CUtlStringTokenRKT_ */
	void SetValue<long long unsigned int>(class CEntityKeyValues *, class CUtlStringToken, const long long unsigned int  &); /* linkage=_ZN16CEntityKeyValues8SetValueIyEEv15CUtlStringTokenRKT_ */
	void SetValue<long long int>(class CEntityKeyValues *, class CUtlStringToken, const long long int  &); /* linkage=_ZN16CEntityKeyValues8SetValueIxEEv15CUtlStringTokenRKT_ */
	void SetValue<unsigned int>(class CEntityKeyValues *, class CUtlStringToken, const unsigned int  &); /* linkage=_ZN16CEntityKeyValues8SetValueIjEEv15CUtlStringTokenRKT_ */
	void SetValue<int>(class CEntityKeyValues *, class CUtlStringToken, const int  &); /* linkage=_ZN16CEntityKeyValues8SetValueIiEEv15CUtlStringTokenRKT_ */
	void SetValue<double>(class CEntityKeyValues *, class CUtlStringToken, const double  &); /* linkage=_ZN16CEntityKeyValues8SetValueIdEEv15CUtlStringTokenRKT_ */
	void SetValue<float>(class CEntityKeyValues *, class CUtlStringToken, const float  &); /* linkage=_ZN16CEntityKeyValues8SetValueIfEEv15CUtlStringTokenRKT_ */
	void SetDynamicAttribute<int>(class CEntityKeyValues *, const char  *, const int  &); /* linkage=_ZN16CEntityKeyValues19SetDynamicAttributeIiEEvPKcRKT_ */
	void SetDynamicAttribute<float>(class CEntityKeyValues *, const char  *, const float  &); /* linkage=_ZN16CEntityKeyValues19SetDynamicAttributeIfEEvPKcRKT_ */
} __attribute__((__aligned__(8)));

// <067D1315> ../public/entity2/entitykeyvalues.h:53
void KeyValueInfo_t::KeyValueInfo_t()
{
} /* size: 0 */

// <067D12F9> ../public/entity2/entitykeyvalues.h:53
inline void KeyValueInfo_t::KeyValueInfo_t()
{
} /* size: 0 */

// <067D11EB> ../public/entity2/entitykeyvalues.h:53
void KeyValueInfo_t::KeyValueInfo_t(KeyValueInfo_t &)
{
} /* size: 0 */

// <067D11CA> ../public/entity2/entitykeyvalues.h:53
inline void KeyValueInfo_t::KeyValueInfo_t(KeyValueInfo_t &)
{
} /* size: 0 */

// <067D1166> ../public/entity2/entitykeyvalues.h:53
void KeyValueInfo_t::~KeyValueInfo_t()
{
} /* size: 0 */

// <067D114A> ../public/entity2/entitykeyvalues.h:53
inline void KeyValueInfo_t::~KeyValueInfo_t()
{
} /* size: 0 */

// <00FF9148> ../public/entity2/entitykeyvalues.h:60
void CEntityKeyValues::CEntityKeyValues()
{
} /* size: 0 */

// <00E68F70> ../public/entity2/entitykeyvalues.h:61
void CEntityKeyValues::~CEntityKeyValues()
{
} /* size: 0 */

// <067E057F> ../public/entity2/entitykeyvalues.h:91
// variable: 1
inline void CEntityKeyValues::FindKeyHash(CUtlStringToken key)
{
	{
		int i; // 93
	}
} /* size: 0 */

// <067D69CE> ../public/entity2/entitykeyvalues.h:103
// variable: 1
inline void AddKeyValue<char CEntityKeyValues::const*>(CUtlStringToken key, const char* const& value, const char* pAttributeName)
{
	int nIdx; // 105
} /* size: 0, variables: 1 */

// <067D1CBC> ../public/entity2/entitykeyvalues.h:103
// variable: 1
inline void CEntityKeyValues::AddKeyValue<float>(CUtlStringToken key, const float& value, const char* pAttributeName)
{
	int nIdx; // 105
} /* size: 0, variables: 1 */

// <067D1C66> ../public/entity2/entitykeyvalues.h:103
// variable: 1
inline void CEntityKeyValues::AddKeyValue<int>(CUtlStringToken key, const int& value, const char* pAttributeName)
{
	int nIdx; // 105
} /* size: 0, variables: 1 */

// <067D1C16> ../public/entity2/entitykeyvalues.h:103
// variable: 1
inline void CEntityKeyValues::AddKeyValue<double>(CUtlStringToken key, const double& value, const char* pAttributeName)
{
	int nIdx; // 105
} /* size: 0, variables: 1 */

// <067D1BC0> ../public/entity2/entitykeyvalues.h:103
// variable: 1
inline void AddKeyValue<unsigned CEntityKeyValues::int>(CUtlStringToken key, const unsigned int& value, const char* pAttributeName)
{
	int nIdx; // 105
} /* size: 0, variables: 1 */

// <067D1B70> ../public/entity2/entitykeyvalues.h:103
// variable: 1
inline void AddKeyValue<long long CEntityKeyValues::int>(CUtlStringToken key, const long long int& value, const char* pAttributeName)
{
	int nIdx; // 105
} /* size: 0, variables: 1 */

// <067D1B1A> ../public/entity2/entitykeyvalues.h:103
// variable: 1
inline void AddKeyValue<long long unsigned CEntityKeyValues::int>(CUtlStringToken key, const long long unsigned int& value, const char* pAttributeName)
{
	int nIdx; // 105
} /* size: 0, variables: 1 */

// <067D1AC4> ../public/entity2/entitykeyvalues.h:103
// variable: 1
inline void CEntityKeyValues::AddKeyValue<char>(CUtlStringToken key, const char& value, const char* pAttributeName)
{
	int nIdx; // 105
} /* size: 0, variables: 1 */

// <067D1A74> ../public/entity2/entitykeyvalues.h:103
// variable: 1
inline void CEntityKeyValues::AddKeyValue<bool>(CUtlStringToken key, const bool& value, const char* pAttributeName)
{
	int nIdx; // 105
} /* size: 0, variables: 1 */

// <067D1A24> ../public/entity2/entitykeyvalues.h:103
// variable: 1
inline void CEntityKeyValues::AddKeyValue<Vector>(CUtlStringToken key, const Vector& value, const char* pAttributeName)
{
	int nIdx; // 105
} /* size: 0, variables: 1 */

// <067D19D4> ../public/entity2/entitykeyvalues.h:103
// variable: 1
inline void CEntityKeyValues::AddKeyValue<Quaternion>(CUtlStringToken key, const Quaternion& value, const char* pAttributeName)
{
	int nIdx; // 105
} /* size: 0, variables: 1 */

// <067D1984> ../public/entity2/entitykeyvalues.h:103
// variable: 1
inline void CEntityKeyValues::AddKeyValue<QAngle>(CUtlStringToken key, const QAngle& value, const char* pAttributeName)
{
	int nIdx; // 105
} /* size: 0, variables: 1 */

// <067D1934> ../public/entity2/entitykeyvalues.h:103
// variable: 1
inline void CEntityKeyValues::AddKeyValue<Vector2D>(CUtlStringToken key, const Vector2D& value, const char* pAttributeName)
{
	int nIdx; // 105
} /* size: 0, variables: 1 */

// <067D18E4> ../public/entity2/entitykeyvalues.h:103
// variable: 1
inline void CEntityKeyValues::AddKeyValue<Vector4D>(CUtlStringToken key, const Vector4D& value, const char* pAttributeName)
{
	int nIdx; // 105
} /* size: 0, variables: 1 */

// <067D1894> ../public/entity2/entitykeyvalues.h:103
// variable: 1
inline void CEntityKeyValues::AddKeyValue<Color>(CUtlStringToken key, const Color& value, const char* pAttributeName)
{
	int nIdx; // 105
} /* size: 0, variables: 1 */

// <067D1844> ../public/entity2/entitykeyvalues.h:103
// variable: 1
inline void AddKeyValue<CBufferStringN<200> CEntityKeyValues::>(CUtlStringToken key, const CBufferStringN<200>& value, const char* pAttributeName)
{
	int nIdx; // 105
} /* size: 0, variables: 1 */

// <0010E9B2> ../public/entity2/entitykeyvalues.h:134
// member functions: 10
// member variables: 3
// static member variable: 1
// class size: 24
class CEntityKeyValuesModifyScope {
	/* ../public/entity2/entitykeyvalues.h:137 */
	void CEntityKeyValuesModifyScope(CEntityKeyValuesModifyScope* , CEntityKeyValues* );
	/* ../public/entity2/entitykeyvalues.h:145 */
	void ~CEntityKeyValuesModifyScope(CEntityKeyValuesModifyScope* );
	/* ../public/entity2/entitykeyvalues.h:150 */
	void BeginModify(CEntityKeyValuesModifyScope* , CEntityKeyValues* );
	/* ../public/entity2/entitykeyvalues.h:151 */
	void Release(CEntityKeyValuesModifyScope* );
	/* ../public/entity2/entitykeyvalues.h:153 */
	CUtlScratchMemoryPool* OverrideAllocator(CUtlScratchMemoryPool* );
private:
	CEntityKeyValues * m_pKeyValues; /* 0 8 */
	CUtlScratchMemoryPool * m_pPrevAllocator; /* 8 8 */
	CUtlScratchMemoryPool * m_pOverrideAllocator; /* 16 8 */
	static class CUtlScratchMemoryPool * sm_pAllocatorOverride; /* 0 0 */
	void CEntityKeyValuesModifyScope(class CEntityKeyValuesModifyScope *, class CEntityKeyValues *); /* linkage=_ZN27CEntityKeyValuesModifyScopeC4EP16CEntityKeyValues */
	void ~CEntityKeyValuesModifyScope(class CEntityKeyValuesModifyScope *); /* linkage=_ZN27CEntityKeyValuesModifyScopeD4Ev */
	void BeginModify(class CEntityKeyValuesModifyScope *, class CEntityKeyValues *); /* linkage=_ZN27CEntityKeyValuesModifyScope11BeginModifyEP16CEntityKeyValues */
	void Release(class CEntityKeyValuesModifyScope *); /* linkage=_ZN27CEntityKeyValuesModifyScope7ReleaseEv */
	class CUtlScratchMemoryPool * OverrideAllocator(class CUtlScratchMemoryPool *); /* linkage=_ZN27CEntityKeyValuesModifyScope17OverrideAllocatorEP21CUtlScratchMemoryPool */
};

// <0101FFFD> ../public/entity2/entitykeyvalues.h:137
void CEntityKeyValuesModifyScope::CEntityKeyValuesModifyScope(CEntityKeyValues* pKeyValues)
{
} /* size: 0 */

// <0101FFD8> ../public/entity2/entitykeyvalues.h:137
inline void CEntityKeyValuesModifyScope::CEntityKeyValuesModifyScope(CEntityKeyValues* pKeyValues)
{
} /* size: 0 */

// <0101FFC1> ../public/entity2/entitykeyvalues.h:145
void CEntityKeyValuesModifyScope::~CEntityKeyValuesModifyScope()
{
} /* size: 0 */

// <0101FFA8> ../public/entity2/entitykeyvalues.h:145
inline void CEntityKeyValuesModifyScope::~CEntityKeyValuesModifyScope()
{
} /* size: 0 */

// <00E7A880> ../public/entity2/entitykeyvalues.h:153
// variable: 1
inline void OverrideAllocator(CUtlScratchMemoryPool* pMemoryPool)
{
	CUtlScratchMemoryPool* pPrevAllocator; // 155
} /* size: 0, variables: 1 */

// <01345E6D> ../public/entity2/entitykeyvalues.h:183
// variable: 1
inline void CEntityKeyValues::GetValue(CUtlStringToken key)
{
	int nIdx; // 185
} /* size: 0, variables: 1 */

// <01345E21> ../public/entity2/entitykeyvalues.h:194
// variables: 2
inline void CEntityKeyValues::GetValueString(CUtlStringToken key, const char* pDefaultValue)
{
	const CEntityVariant& value; // 196
	CUtlString nValue; // 197
} /* size: 0, variables: 2 */

// <01345DD2> ../public/entity2/entitykeyvalues.h:220
inline void CEntityKeyValues::GetKeyCount()
{
} /* size: 0 */

// <067DFA80> ../public/entity2/entitykeyvalues.h:225
// variables: 4
// function calls: 45
void CEntityKeyValues::SetValue(CUtlStringToken key, const char* pString)
{
	int nIdx; // 227
	{
		int i; // 93
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Count(); // 93
		AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 452
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
			int i);  // 442
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
				int i);  // 95
	}
	CEntityKeyValues::FindKeyHash(
			CUtlStringToken key);  // 227
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 234
	CVariantBase<CEntityVariantAllocator>::Free(); // 600
	{
		int nLen; // 604
		V_strlen(const char* str); // 604
		CVariantBase<CEntityVariantAllocator>::Allocate(
			uint nSize);  // 605
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 606
	}
	CVariantBase<CEntityVariantAllocator>::CopyData(
		const char* pString,
		bool bForceCopy);  // 598
	CVariantBase<CEntityVariantAllocator>::CopyData(
		const char* pString,
		bool bForceCopy);  // 160
	CVariantBase<CEntityVariantAllocator>::operator=(
			const char* psz);  // 239
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 630
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTailGetPtr(); // 660
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTail(); // 105
	AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 447
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
		int i);  // 438
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
			int i);  // 106
	AddToTail(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this); // 107
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 108
	CVariantBase<CEntityVariantAllocator>::Free(); // 600
	{
		int nLen; // 604
		V_strlen(const char* str); // 604
		CVariantBase<CEntityVariantAllocator>::Allocate(
			uint nSize);  // 605
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 606
	}
	CVariantBase<CEntityVariantAllocator>::CopyData(
		const char* pString,
		bool bForceCopy);  // 598
	CVariantBase<CEntityVariantAllocator>::CopyData(
		const char* pString,
		bool bForceCopy);  // 160
	CVariantBase<CEntityVariantAllocator>::operator=(
			const char* psz);  // 108
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 109
	CEntityKeyValues::AddKeyValue<char const*>(
				CUtlStringToken key,
				const char* const& value,
				const char* pAttributeName);  // 230
} /* size: 0, variables: 1, inline expansions: 32 (0 bytes) */

// <0101FEE8> ../public/entity2/entitykeyvalues.h:225
// variable: 1
inline void CEntityKeyValues::SetValue(CUtlStringToken key, const char* pString)
{
	int nIdx; // 227
} /* size: 0, variables: 1 */

// <067D46F8> ../public/entity2/entitykeyvalues.h:244
// variable: 1
inline void CEntityKeyValues::SetValue<float>(CUtlStringToken key, const float& value)
{
	int nIdx; // 246
} /* size: 0, variables: 1 */

// <067D46B4> ../public/entity2/entitykeyvalues.h:244
// variable: 1
inline void CEntityKeyValues::SetValue<double>(CUtlStringToken key, const double& value)
{
	int nIdx; // 246
} /* size: 0, variables: 1 */

// <067D3F2B> ../public/entity2/entitykeyvalues.h:244
// variables: 2
// function calls: 33
void CEntityKeyValues::SetValue<int>(CUtlStringToken key, const int& value)
{
	int nIdx; // 246
	{
		int i; // 93
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Count(); // 93
		AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 452
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
			int i);  // 442
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
				int i);  // 95
	}
	CEntityKeyValues::FindKeyHash(
			CUtlStringToken key);  // 246
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 253
	CVariantBase<CEntityVariantAllocator>::Free(); // 138
	CVariantBase<CEntityVariantAllocator>::operator=(
			int i);  // 258
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 630
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTailGetPtr(); // 660
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTail(); // 105
	AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 447
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
		int i);  // 438
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
			int i);  // 106
	AddToTail(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this); // 107
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 108
	CVariantBase<CEntityVariantAllocator>::Free(); // 138
	CVariantBase<CEntityVariantAllocator>::operator=(
			int i);  // 108
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 109
	CEntityKeyValues::AddKeyValue<int>(
			CUtlStringToken key,
			const int& value,
			const char* pAttributeName);  // 249
} /* size: 0, variables: 1, inline expansions: 28 (0 bytes) */

// <067D3E9D> ../public/entity2/entitykeyvalues.h:244
// variable: 1
inline void SetValue<unsigned CEntityKeyValues::int>(CUtlStringToken key, const unsigned int& value)
{
	int nIdx; // 246
} /* size: 0, variables: 1 */

// <067D3E59> ../public/entity2/entitykeyvalues.h:244
// variable: 1
inline void SetValue<long long CEntityKeyValues::int>(CUtlStringToken key, const long long int& value)
{
	int nIdx; // 246
} /* size: 0, variables: 1 */

// <067D3E15> ../public/entity2/entitykeyvalues.h:244
// variable: 1
inline void SetValue<long long unsigned CEntityKeyValues::int>(CUtlStringToken key, const long long unsigned int& value)
{
	int nIdx; // 246
} /* size: 0, variables: 1 */

// <067D3DD1> ../public/entity2/entitykeyvalues.h:244
// variable: 1
inline void CEntityKeyValues::SetValue<char>(CUtlStringToken key, const char& value)
{
	int nIdx; // 246
} /* size: 0, variables: 1 */

// <067D3692> ../public/entity2/entitykeyvalues.h:244
// variables: 2
// function calls: 33
void CEntityKeyValues::SetValue<bool>(CUtlStringToken key, const bool& value)
{
	int nIdx; // 246
	{
		int i; // 93
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Count(); // 93
		AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 452
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
			int i);  // 442
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
				int i);  // 95
	}
	CEntityKeyValues::FindKeyHash(
			CUtlStringToken key);  // 246
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 253
	CVariantBase<CEntityVariantAllocator>::Free(); // 163
	CVariantBase<CEntityVariantAllocator>::operator=(
			bool b);  // 258
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 630
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTailGetPtr(); // 660
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTail(); // 105
	AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 447
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
		int i);  // 438
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
			int i);  // 106
	AddToTail(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this); // 107
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 108
	CVariantBase<CEntityVariantAllocator>::Free(); // 163
	CVariantBase<CEntityVariantAllocator>::operator=(
			bool b);  // 108
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 109
	CEntityKeyValues::AddKeyValue<bool>(
				CUtlStringToken key,
				const bool& value,
				const char* pAttributeName);  // 249
} /* size: 0, variables: 1, inline expansions: 28 (0 bytes) */

// <067D364E> ../public/entity2/entitykeyvalues.h:244
// variable: 1
inline void CEntityKeyValues::SetValue<Vector>(CUtlStringToken key, const Vector& value)
{
	int nIdx; // 246
} /* size: 0, variables: 1 */

// <067D360A> ../public/entity2/entitykeyvalues.h:244
// variable: 1
inline void CEntityKeyValues::SetValue<Quaternion>(CUtlStringToken key, const Quaternion& value)
{
	int nIdx; // 246
} /* size: 0, variables: 1 */

// <067D35C6> ../public/entity2/entitykeyvalues.h:244
// variable: 1
inline void CEntityKeyValues::SetValue<QAngle>(CUtlStringToken key, const QAngle& value)
{
	int nIdx; // 246
} /* size: 0, variables: 1 */

// <067D3582> ../public/entity2/entitykeyvalues.h:244
// variable: 1
inline void CEntityKeyValues::SetValue<Vector2D>(CUtlStringToken key, const Vector2D& value)
{
	int nIdx; // 246
} /* size: 0, variables: 1 */

// <067D353E> ../public/entity2/entitykeyvalues.h:244
// variable: 1
inline void CEntityKeyValues::SetValue<Vector4D>(CUtlStringToken key, const Vector4D& value)
{
	int nIdx; // 246
} /* size: 0, variables: 1 */

// <067D34FA> ../public/entity2/entitykeyvalues.h:244
// variable: 1
inline void CEntityKeyValues::SetValue<Color>(CUtlStringToken key, const Color& value)
{
	int nIdx; // 246
} /* size: 0, variables: 1 */

// <067D34B6> ../public/entity2/entitykeyvalues.h:244
// variable: 1
inline void SetValue<CBufferStringN<200> CEntityKeyValues::>(CUtlStringToken key, const CBufferStringN<200>& value)
{
	int nIdx; // 246
} /* size: 0, variables: 1 */

// <067D5102> ../public/entity2/entitykeyvalues.h:286
// variables: 5
// function calls: 39
void CEntityKeyValues::SetDynamicAttribute<float>(const char* pAttributeName, const float& value)
{
	CUtlStringToken key; // 288
	int nIdx; // 289
	{
		int nLen; // 292
		char* pNameCopy; // 293
		V_strlen(const char* str); // 292
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 294
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 630
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTailGetPtr(); // 660
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTail(); // 105
		AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
				int i);  // 106
		AddToTail(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this); // 107
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 438
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
				int i);  // 108
		CVariantBase<CEntityVariantAllocator>::Free(); // 143
		CVariantBase<CEntityVariantAllocator>::operator=(
				float f);  // 108
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 438
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
				int i);  // 109
		CEntityKeyValues::AddKeyValue<float>(
					CUtlStringToken key,
					const float& value,
					const char* pAttributeName);  // 296
	}
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 288
	{
		int i; // 93
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Count(); // 93
		AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 452
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
			int i);  // 442
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
				int i);  // 95
	}
	CEntityKeyValues::FindKeyHash(
			CUtlStringToken key);  // 289
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 300
	CVariantBase<CEntityVariantAllocator>::Free(); // 143
	CVariantBase<CEntityVariantAllocator>::operator=(
			float f);  // 305
} /* size: 0, variables: 2, inline expansions: 10 (0 bytes) */

// <067D473C> ../public/entity2/entitykeyvalues.h:286
// variables: 5
// function calls: 39
void CEntityKeyValues::SetDynamicAttribute<int>(const char* pAttributeName, const int& value)
{
	CUtlStringToken key; // 288
	int nIdx; // 289
	{
		int nLen; // 292
		char* pNameCopy; // 293
		V_strlen(const char* str); // 292
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 294
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 630
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTailGetPtr(); // 660
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTail(); // 105
		AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
				int i);  // 106
		AddToTail(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this); // 107
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 438
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
				int i);  // 108
		CVariantBase<CEntityVariantAllocator>::Free(); // 138
		CVariantBase<CEntityVariantAllocator>::operator=(
				int i);  // 108
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 438
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
				int i);  // 109
		CEntityKeyValues::AddKeyValue<int>(
				CUtlStringToken key,
				const int& value,
				const char* pAttributeName);  // 296
	}
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 288
	{
		int i; // 93
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Count(); // 93
		AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 452
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
			int i);  // 442
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
				int i);  // 95
	}
	CEntityKeyValues::FindKeyHash(
			CUtlStringToken key);  // 289
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 300
	CVariantBase<CEntityVariantAllocator>::Free(); // 138
	CVariantBase<CEntityVariantAllocator>::operator=(
			int i);  // 305
} /* size: 0, variables: 2, inline expansions: 10 (0 bytes) */

// <0101FECC> ../public/entity2/entitykeyvalues.h:309
inline void CEntityKeyValues::AddRef()
{
} /* size: 0 */

// <00E7A846> ../public/entity2/entitykeyvalues.h:314
inline void CEntityKeyValues::Release()
{
} /* size: 0 */

// <067CA0D4> ../public/entity2/entitykeyvalues.h:327
// member variables: 2
// struct size: 16
struct FGDFieldInfo_t {
	fieldtype_t m_fieldType; /* 0 1 */
	CUtlString m_defaultValue; /* 8 8 */
};

