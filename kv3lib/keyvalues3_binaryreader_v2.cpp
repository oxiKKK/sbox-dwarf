
//
// kv3lib/keyvalues3_binaryreader_v2.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 104
//	class: 1
//

// <056704E3> kv3lib/keyvalues3_binaryreader_v2.cpp:28
KeyValues3Type_t GetKV3TypeForBinaryType(KeyValues3BinaryType_t nBinaryType)
{
} /* size: 0 */

// <05663ADE> kv3lib/keyvalues3_binaryreader_v2.cpp:77
// member functions: 84
// member variables: 19
// class size: 3,496
class CKV3BinaryLoadContextV2 {
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:80 */
	void CKV3BinaryLoadContextV2(CKV3BinaryLoadContextV2* , KeyValues3BinaryHeaderV2_t* , KeyValues3* , CUtlString* , CUtlBuffer* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:92 */
	void ~CKV3BinaryLoadContextV2(CKV3BinaryLoadContextV2* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:104 */
	bool Init(CKV3BinaryLoadContextV2* , CUtlBuffer* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:189 */
	bool HasError(const CKV3BinaryLoadContextV2* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:194 */
	bool Load(CKV3BinaryLoadContextV2* );
private:
	bool m_bError; /* 0 1 */
	const class KeyValues3 * m_pTarget; /* 8 8 */
	const class CUtlString * m_pOutErrorMessage; /* 16 8 */
	const class KeyValues3BinaryHeaderV2_t * m_pHeader; /* 24 8 */
	const uint8 * m_pControlBuffer; /* 32 8 */
	const uint8 * m_pControlBufferEnd; /* 40 8 */
	const uint8 * m_p1ByteValues; /* 48 8 */
	const uint8 * m_p1ByteValuesEnd; /* 56 8 */
	const uint32 * m_p4ByteValues; /* 64 8 */
	const uint32 * m_p4ByteValuesEnd; /* 72 8 */
	const uint64 * m_p8ByteValues; /* 80 8 */
	const uint64 * m_p8ByteValuesEnd; /* 88 8 */
	CUtlVectorFixedGrowable<CUtlStringToken, 256> m_stringHashes __attribute__((__aligned__(8))); /* 96 1056 */
	CUtlVectorFixedGrowable<char const*, 256> m_stringPtrs __attribute__((__aligned__(8))); /* 1152 2080 */
	int m_nCurrentBlob; /* 3232 4 */
	CUtlVectorFixedGrowable<std::pair<unsigned char*, unsigned int>, 8> m_binaryBlobs __attribute__((__aligned__(8))); /* 3240 160 */
	bool m_bRelyOnBufferForStorage; /* 3400 1 */
	CUtlBuffer * m_pScratchBuffer; /* 3408 8 */
	CUtlBuffer m_shortTermScratchBuffer; /* 3416 80 */
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:231 */
	void LoadStringTable(CKV3BinaryLoadContextV2* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:250 */
	bool DecompressBinaryBlobs(CKV3BinaryLoadContextV2* , CUtlBuffer* , CUtlBuffer* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:357 */
	uint8 GetControl(CKV3BinaryLoadContextV2* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:359 */
	uint8 GetUint8Value(CKV3BinaryLoadContextV2* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:360 */
	int8 GetInt8Value(CKV3BinaryLoadContextV2* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:362 */
	uint32 GetUint32Value(CKV3BinaryLoadContextV2* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:363 */
	int32 GetInt32Value(CKV3BinaryLoadContextV2* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:364 */
	float GetFloatValue(CKV3BinaryLoadContextV2* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:366 */
	uint64 GetUint64Value(CKV3BinaryLoadContextV2* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:367 */
	int64 GetInt64Value(CKV3BinaryLoadContextV2* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:368 */
	double GetDoubleValue(CKV3BinaryLoadContextV2* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:370 */
	const char* String(CKV3BinaryLoadContextV2* , int);
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:382 */
	CKV3MemberName MemberName(CKV3BinaryLoadContextV2* , int);
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:401 */
	KeyValues3BinaryType_t ReadTypeAndFlags(CKV3BinaryLoadContextV2* , KeyValues3Flag_t& );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:416 */
	void LoadTypeAndValue(CKV3BinaryLoadContextV2* , KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:516 */
	void LoadValue(CKV3BinaryLoadContextV2* , KeyValues3BinaryType_t, KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:427 */
	void LoadPODValue<6>(CKV3BinaryLoadContextV2* , KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:427 */
	void LoadPODValue<18>(CKV3BinaryLoadContextV2* , KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:427 */
	void LoadPODValue<17>(CKV3BinaryLoadContextV2* , KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:427 */
	void LoadPODValue<5>(CKV3BinaryLoadContextV2* , KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:427 */
	void LoadPODValue<12>(CKV3BinaryLoadContextV2* , KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:427 */
	void LoadPODValue<11>(CKV3BinaryLoadContextV2* , KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:427 */
	void LoadPODValue<4>(CKV3BinaryLoadContextV2* , KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:427 */
	void LoadPODValue<3>(CKV3BinaryLoadContextV2* , KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:427 */
	void LoadPODValue<16>(CKV3BinaryLoadContextV2* , KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:427 */
	void LoadPODValue<15>(CKV3BinaryLoadContextV2* , KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:427 */
	void LoadPODValue<14>(CKV3BinaryLoadContextV2* , KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:427 */
	void LoadPODValue<13>(CKV3BinaryLoadContextV2* , KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:427 */
	void LoadPODValue<2>(CKV3BinaryLoadContextV2* , KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:427 */
	void LoadPODValue<1>(CKV3BinaryLoadContextV2* , KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:337 */
	double GetValue<double, long long unsigned int const>(CKV3BinaryLoadContextV2* , const long long unsigned int** , const long long unsigned int* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:337 */
	long long int GetValue<long long int, long long unsigned int const>(CKV3BinaryLoadContextV2* , const long long unsigned int** , const long long unsigned int* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:337 */
	long long unsigned int GetValue<long long unsigned int, long long unsigned int const>(CKV3BinaryLoadContextV2* , const long long unsigned int** , const long long unsigned int* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:337 */
	int GetValue<int, unsigned int const>(CKV3BinaryLoadContextV2* , const unsigned int** , const unsigned int* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:337 */
	unsigned int GetValue<unsigned int, unsigned int const>(CKV3BinaryLoadContextV2* , const unsigned int** , const unsigned int* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:337 */
	signed char GetValue<signed char, unsigned char const>(CKV3BinaryLoadContextV2* , const unsigned char** , const unsigned char* );
	/* kv3lib/keyvalues3_binaryreader_v2.cpp:337 */
	unsigned char GetValue<unsigned char, unsigned char const>(CKV3BinaryLoadContextV2* , const unsigned char** , const unsigned char* );
	void CKV3BinaryLoadContextV2(class CKV3BinaryLoadContextV2 *, class KeyValues3BinaryHeaderV2_t *, class KeyValues3 *, class CUtlString *, class CUtlBuffer *); /* linkage=_ZN23CKV3BinaryLoadContextV2C4EP26KeyValues3BinaryHeaderV2_tP10KeyValues3P10CUtlStringP10CUtlBuffer */
	void ~CKV3BinaryLoadContextV2(class CKV3BinaryLoadContextV2 *); /* linkage=_ZN23CKV3BinaryLoadContextV2D4Ev */
	bool Init(class CKV3BinaryLoadContextV2 *, class CUtlBuffer *); /* linkage=_ZN23CKV3BinaryLoadContextV24InitEP10CUtlBuffer */
	bool HasError(const class CKV3BinaryLoadContextV2  *); /* linkage=_ZNK23CKV3BinaryLoadContextV28HasErrorEv */
	bool Load(class CKV3BinaryLoadContextV2 *); /* linkage=_ZN23CKV3BinaryLoadContextV24LoadEv */
	void LoadStringTable(class CKV3BinaryLoadContextV2 *); /* linkage=_ZN23CKV3BinaryLoadContextV215LoadStringTableEv */
	bool DecompressBinaryBlobs(class CKV3BinaryLoadContextV2 *, class CUtlBuffer *, class CUtlBuffer *); /* linkage=_ZN23CKV3BinaryLoadContextV221DecompressBinaryBlobsEP10CUtlBufferS1_ */
	uint8 GetControl(class CKV3BinaryLoadContextV2 *); /* linkage=_ZN23CKV3BinaryLoadContextV210GetControlEv */
	uint8 GetUint8Value(class CKV3BinaryLoadContextV2 *); /* linkage=_ZN23CKV3BinaryLoadContextV213GetUint8ValueEv */
	int8 GetInt8Value(class CKV3BinaryLoadContextV2 *); /* linkage=_ZN23CKV3BinaryLoadContextV212GetInt8ValueEv */
	uint32 GetUint32Value(class CKV3BinaryLoadContextV2 *); /* linkage=_ZN23CKV3BinaryLoadContextV214GetUint32ValueEv */
	int32 GetInt32Value(class CKV3BinaryLoadContextV2 *); /* linkage=_ZN23CKV3BinaryLoadContextV213GetInt32ValueEv */
	float GetFloatValue(class CKV3BinaryLoadContextV2 *); /* linkage=_ZN23CKV3BinaryLoadContextV213GetFloatValueEv */
	uint64 GetUint64Value(class CKV3BinaryLoadContextV2 *); /* linkage=_ZN23CKV3BinaryLoadContextV214GetUint64ValueEv */
	int64 GetInt64Value(class CKV3BinaryLoadContextV2 *); /* linkage=_ZN23CKV3BinaryLoadContextV213GetInt64ValueEv */
	double GetDoubleValue(class CKV3BinaryLoadContextV2 *); /* linkage=_ZN23CKV3BinaryLoadContextV214GetDoubleValueEv */
	const char  * String(class CKV3BinaryLoadContextV2 *, int); /* linkage=_ZN23CKV3BinaryLoadContextV26StringEi */
	class CKV3MemberName MemberName(class CKV3BinaryLoadContextV2 *, int); /* linkage=_ZN23CKV3BinaryLoadContextV210MemberNameEi */
	enum KeyValues3BinaryType_t ReadTypeAndFlags(class CKV3BinaryLoadContextV2 *, enum KeyValues3Flag_t &); /* linkage=_ZN23CKV3BinaryLoadContextV216ReadTypeAndFlagsER16KeyValues3Flag_t */
	void LoadTypeAndValue(class CKV3BinaryLoadContextV2 *, class KeyValues3 *); /* linkage=_ZN23CKV3BinaryLoadContextV216LoadTypeAndValueEP10KeyValues3 */
	void LoadValue(class CKV3BinaryLoadContextV2 *, enum KeyValues3BinaryType_t, class KeyValues3 *); /* linkage=_ZN23CKV3BinaryLoadContextV29LoadValueE22KeyValues3BinaryType_tP10KeyValues3 */
	void LoadPODValue<6>(class CKV3BinaryLoadContextV2 *, class KeyValues3 *); /* linkage=_ZN23CKV3BinaryLoadContextV212LoadPODValueILi6EEEvP10KeyValues3 */
	void LoadPODValue<18>(class CKV3BinaryLoadContextV2 *, class KeyValues3 *); /* linkage=_ZN23CKV3BinaryLoadContextV212LoadPODValueILi18EEEvP10KeyValues3 */
	void LoadPODValue<17>(class CKV3BinaryLoadContextV2 *, class KeyValues3 *); /* linkage=_ZN23CKV3BinaryLoadContextV212LoadPODValueILi17EEEvP10KeyValues3 */
	void LoadPODValue<5>(class CKV3BinaryLoadContextV2 *, class KeyValues3 *); /* linkage=_ZN23CKV3BinaryLoadContextV212LoadPODValueILi5EEEvP10KeyValues3 */
	void LoadPODValue<12>(class CKV3BinaryLoadContextV2 *, class KeyValues3 *); /* linkage=_ZN23CKV3BinaryLoadContextV212LoadPODValueILi12EEEvP10KeyValues3 */
	void LoadPODValue<11>(class CKV3BinaryLoadContextV2 *, class KeyValues3 *); /* linkage=_ZN23CKV3BinaryLoadContextV212LoadPODValueILi11EEEvP10KeyValues3 */
	void LoadPODValue<4>(class CKV3BinaryLoadContextV2 *, class KeyValues3 *); /* linkage=_ZN23CKV3BinaryLoadContextV212LoadPODValueILi4EEEvP10KeyValues3 */
	void LoadPODValue<3>(class CKV3BinaryLoadContextV2 *, class KeyValues3 *); /* linkage=_ZN23CKV3BinaryLoadContextV212LoadPODValueILi3EEEvP10KeyValues3 */
	void LoadPODValue<16>(class CKV3BinaryLoadContextV2 *, class KeyValues3 *); /* linkage=_ZN23CKV3BinaryLoadContextV212LoadPODValueILi16EEEvP10KeyValues3 */
	void LoadPODValue<15>(class CKV3BinaryLoadContextV2 *, class KeyValues3 *); /* linkage=_ZN23CKV3BinaryLoadContextV212LoadPODValueILi15EEEvP10KeyValues3 */
	void LoadPODValue<14>(class CKV3BinaryLoadContextV2 *, class KeyValues3 *); /* linkage=_ZN23CKV3BinaryLoadContextV212LoadPODValueILi14EEEvP10KeyValues3 */
	void LoadPODValue<13>(class CKV3BinaryLoadContextV2 *, class KeyValues3 *); /* linkage=_ZN23CKV3BinaryLoadContextV212LoadPODValueILi13EEEvP10KeyValues3 */
	void LoadPODValue<2>(class CKV3BinaryLoadContextV2 *, class KeyValues3 *); /* linkage=_ZN23CKV3BinaryLoadContextV212LoadPODValueILi2EEEvP10KeyValues3 */
	void LoadPODValue<1>(class CKV3BinaryLoadContextV2 *, class KeyValues3 *); /* linkage=_ZN23CKV3BinaryLoadContextV212LoadPODValueILi1EEEvP10KeyValues3 */
	double GetValue<double, long long unsigned int const>(class CKV3BinaryLoadContextV2 *, const long long unsigned int  * *, const long long unsigned int  *); /* linkage=_ZN23CKV3BinaryLoadContextV28GetValueIdKyEET_PPT0_S4_ */
	long long int GetValue<long long int, long long unsigned int const>(class CKV3BinaryLoadContextV2 *, const long long unsigned int  * *, const long long unsigned int  *); /* linkage=_ZN23CKV3BinaryLoadContextV28GetValueIxKyEET_PPT0_S4_ */
	long long unsigned int GetValue<long long unsigned int, long long unsigned int const>(class CKV3BinaryLoadContextV2 *, const long long unsigned int  * *, const long long unsigned int  *); /* linkage=_ZN23CKV3BinaryLoadContextV28GetValueIyKyEET_PPT0_S4_ */
	int GetValue<int, unsigned int const>(class CKV3BinaryLoadContextV2 *, const unsigned int  * *, const unsigned int  *); /* linkage=_ZN23CKV3BinaryLoadContextV28GetValueIiKjEET_PPT0_S4_ */
	unsigned int GetValue<unsigned int, unsigned int const>(class CKV3BinaryLoadContextV2 *, const unsigned int  * *, const unsigned int  *); /* linkage=_ZN23CKV3BinaryLoadContextV28GetValueIjKjEET_PPT0_S4_ */
	signed char GetValue<signed char, unsigned char const>(class CKV3BinaryLoadContextV2 *, const unsigned char  * *, const unsigned char  *); /* linkage=_ZN23CKV3BinaryLoadContextV28GetValueIaKhEET_PPT0_S4_ */
	unsigned char GetValue<unsigned char, unsigned char const>(class CKV3BinaryLoadContextV2 *, const unsigned char  * *, const unsigned char  *); /* linkage=_ZN23CKV3BinaryLoadContextV28GetValueIhKhEET_PPT0_S4_ */
} __attribute__((__aligned__(8)));

// <056703E2> kv3lib/keyvalues3_binaryreader_v2.cpp:80
void CKV3BinaryLoadContextV2::CKV3BinaryLoadContextV2(KeyValues3BinaryHeaderV2_t* pHeader, KeyValues3* pRoot, CUtlString* pOutErrorMessage, CUtlBuffer* pScratchBuffer)
{
	{
		{
		}
	}
} /* size: 0 */

// <05670370> kv3lib/keyvalues3_binaryreader_v2.cpp:80
// variables: 2
inline void CKV3BinaryLoadContextV2::CKV3BinaryLoadContextV2(KeyValues3BinaryHeaderV2_t* pHeader, KeyValues3* pRoot, CUtlString* pOutErrorMessage, CUtlBuffer* pScratchBuffer)
{
	const char   __FUNCTION__; // 45561
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 1 */

// <029E7D6A> kv3lib/keyvalues3_binaryreader_v2.cpp:80
// variables: 2
inline void CKV3BinaryLoadContextV2::CKV3BinaryLoadContextV2(KeyValues3BinaryHeaderV2_t* pHeader, KeyValues3* pRoot, CUtlString* pOutErrorMessage, CUtlBuffer* pScratchBuffer)
{
	const char   __FUNCTION__; // 64232
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 1 */

// <0133791F> kv3lib/keyvalues3_binaryreader_v2.cpp:80
// variables: 2
inline void CKV3BinaryLoadContextV2::CKV3BinaryLoadContextV2(KeyValues3BinaryHeaderV2_t* pHeader, KeyValues3* pRoot, CUtlString* pOutErrorMessage, CUtlBuffer* pScratchBuffer)
{
	const char   __FUNCTION__; // 3675
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 1 */

// <003B30E4> kv3lib/keyvalues3_binaryreader_v2.cpp:80
// variables: 2
inline void CKV3BinaryLoadContextV2::CKV3BinaryLoadContextV2(KeyValues3BinaryHeaderV2_t* pHeader, KeyValues3* pRoot, CUtlString* pOutErrorMessage, CUtlBuffer* pScratchBuffer)
{
	const char   __FUNCTION__; // 55378
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 1 */

// <007182E6> kv3lib/keyvalues3_binaryreader_v2.cpp:80
// variables: 2
inline void CKV3BinaryLoadContextV2::CKV3BinaryLoadContextV2(KeyValues3BinaryHeaderV2_t* pHeader, KeyValues3* pRoot, CUtlString* pOutErrorMessage, CUtlBuffer* pScratchBuffer)
{
	const char   __FUNCTION__; // 15828
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 1 */

// <001FCAEE> kv3lib/keyvalues3_binaryreader_v2.cpp:80
// variables: 2
inline void CKV3BinaryLoadContextV2::CKV3BinaryLoadContextV2(KeyValues3BinaryHeaderV2_t* pHeader, KeyValues3* pRoot, CUtlString* pOutErrorMessage, CUtlBuffer* pScratchBuffer)
{
	const char   __FUNCTION__; // 14476
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 1 */

// <0567034D> kv3lib/keyvalues3_binaryreader_v2.cpp:92
// variable: 1
void CKV3BinaryLoadContextV2::~CKV3BinaryLoadContextV2()
{
	{
		int i; // 95
	}
} /* size: 0 */

// <05670328> kv3lib/keyvalues3_binaryreader_v2.cpp:92
// variable: 1
inline void CKV3BinaryLoadContextV2::~CKV3BinaryLoadContextV2()
{
	{
		int i; // 95
	}
} /* size: 0 */

// <05670288> kv3lib/keyvalues3_binaryreader_v2.cpp:104
// variables: 8
inline void CKV3BinaryLoadContextV2::Init(CUtlBuffer* pBuffer)
{
	CUtlBuffer* pOrigBuffer; // 112
	uint8* pSrcData; // 149
	const char   __FUNCTION__; // 45118
	uint nTotalBlobBytes; // 168
	{
		int nActualDecompressedSize; // 117
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 156
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 160
	}
	{
		uint i; // 169
	}
} /* size: 0, variables: 4 */

// <029E7C82> kv3lib/keyvalues3_binaryreader_v2.cpp:104
// variables: 8
inline void CKV3BinaryLoadContextV2::Init(CUtlBuffer* pBuffer)
{
	CUtlBuffer* pOrigBuffer; // 112
	uint8* pSrcData; // 149
	const char   __FUNCTION__; // 63789
	uint nTotalBlobBytes; // 168
	{
		int nActualDecompressedSize; // 117
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 156
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 160
	}
	{
		uint i; // 169
	}
} /* size: 0, variables: 4 */

// <01337837> kv3lib/keyvalues3_binaryreader_v2.cpp:104
// variables: 8
inline void CKV3BinaryLoadContextV2::Init(CUtlBuffer* pBuffer)
{
	CUtlBuffer* pOrigBuffer; // 112
	uint8* pSrcData; // 149
	const char   __FUNCTION__; // 3232
	uint nTotalBlobBytes; // 168
	{
		int nActualDecompressedSize; // 117
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 156
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 160
	}
	{
		uint i; // 169
	}
} /* size: 0, variables: 4 */

// <003B2FFC> kv3lib/keyvalues3_binaryreader_v2.cpp:104
// variables: 8
inline void CKV3BinaryLoadContextV2::Init(CUtlBuffer* pBuffer)
{
	CUtlBuffer* pOrigBuffer; // 112
	uint8* pSrcData; // 149
	const char   __FUNCTION__; // 54935
	uint nTotalBlobBytes; // 168
	{
		int nActualDecompressedSize; // 117
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 156
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 160
	}
	{
		uint i; // 169
	}
} /* size: 0, variables: 4 */

// <007181FE> kv3lib/keyvalues3_binaryreader_v2.cpp:104
// variables: 8
inline void CKV3BinaryLoadContextV2::Init(CUtlBuffer* pBuffer)
{
	CUtlBuffer* pOrigBuffer; // 112
	uint8* pSrcData; // 149
	const char   __FUNCTION__; // 15385
	uint nTotalBlobBytes; // 168
	{
		int nActualDecompressedSize; // 117
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 156
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 160
	}
	{
		uint i; // 169
	}
} /* size: 0, variables: 4 */

// <00AEFE85> kv3lib/keyvalues3_binaryreader_v2.cpp:104
// variables: 8
inline void CKV3BinaryLoadContextV2::Init(CUtlBuffer* pBuffer)
{
	CUtlBuffer* pOrigBuffer; // 112
	uint8* pSrcData; // 149
	const char   __FUNCTION__; // 21536
	uint nTotalBlobBytes; // 168
	{
		int nActualDecompressedSize; // 117
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 156
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 160
	}
	{
		uint i; // 169
	}
} /* size: 0, variables: 4 */

// <001FCA06> kv3lib/keyvalues3_binaryreader_v2.cpp:104
// variables: 8
inline void CKV3BinaryLoadContextV2::Init(CUtlBuffer* pBuffer)
{
	CUtlBuffer* pOrigBuffer; // 112
	uint8* pSrcData; // 149
	const char   __FUNCTION__; // 14033
	uint nTotalBlobBytes; // 168
	{
		int nActualDecompressedSize; // 117
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 156
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 160
	}
	{
		uint i; // 169
	}
} /* size: 0, variables: 4 */

// <0567026F> kv3lib/keyvalues3_binaryreader_v2.cpp:189
inline void CKV3BinaryLoadContextV2::HasError()
{
} /* size: 0 */

// <05670256> kv3lib/keyvalues3_binaryreader_v2.cpp:194
inline void CKV3BinaryLoadContextV2::Load()
{
} /* size: 0 */

// <0567020B> kv3lib/keyvalues3_binaryreader_v2.cpp:231
// variables: 4
inline void CKV3BinaryLoadContextV2::LoadStringTable()
{
	int nNumStrings; // 233
	{
		int i; // 237
		{
			const char* pStr; // 239
			const uint  nLength; // 240
		}
	}
} /* size: 0, variables: 1 */

// <0566ECDB> kv3lib/keyvalues3_binaryreader_v2.cpp:250
// variables: 18
// function calls: 75
void CKV3BinaryLoadContextV2::DecompressBinaryBlobs(CUtlBuffer* pFramingBuffer, CUtlBuffer* pCompressedBuffer)
{
	const char   __FUNCTION__; // 45512
	{
		const uint  nFrameSize; // 270
		const uint  nRingBufferSize; // 271
		uint nRingBufferPut; // 272
		CUtlVector<char, CUtlMemory<char, int> > ringBuffer; // 274
		char* pRingBuffer; // 276
		LZ4_streamDecode_t lz4StreamDecode_body; // 278
		LZ4_streamDecode_t* lz4StreamDecode; // 279
		{
			int i; // 281
			{
				uint nBlobSize; // 283
				uint nBytesDecompressed; // 284
				{
					uint16 nCompressedBytesInFrame; // 289
					int nDecompressed; // 290
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 624
					CUtlBuffer::PeekGet(
						int offset);  // 913
					StringToNumber<short unsigned int>(char* pString,
										char** ppEnd,
										int nRadix);  // 915
					CUtlBuffer::BGetTypeText<short unsigned int>(
									short unsigned int& value,
									int nRadix);  // 929
					CUtlBuffer::BGetType<short unsigned int>(
									short unsigned int& dest);  // 926
					CUtlBuffer::IsText(); // 928
					CByteswap::IsSwappingBytes(); // 688
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 624
					CUtlBuffer::PeekGet(
						int offset);  // 690
					{
						int i; // 200
						{
							int i; // 214
						}
						memcpy(void* __dest,
							const void* __src,
							size_t __len);  // 91
						V_memcpy(void* dest,
							const void* src,
							size_t count);  // 218
						LowLevelByteSwap<short unsigned int>(short unsigned int* output,
											short unsigned int* input);  // 202
					}
					CByteswap::SwapBufferToTargetEndian<short unsigned int>(
											short unsigned int* outputBuffer,
											short unsigned int* inputBuffer,
											int count);  // 170
					CByteswap::SwapBufferToTargetEndian<short unsigned int>(
											short unsigned int* outputBuffer,
											short unsigned int* inputBuffer,
											int count);  // 694
					CUtlBuffer::BGetTypeBin<short unsigned int>(
									short unsigned int& dest);  // 672
					CUtlBuffer::BGetTypeBin<short unsigned int>(
									short unsigned int& dest);  // 930
					CUtlBuffer::BGetType<short unsigned int>(
									short unsigned int& dest);  // 1116
					CUtlBuffer::BGetUnsignedShort(
								short unsigned int* pOutUShort);  // 958
					CUtlBuffer::GetUnsignedShort(); // 289
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 624
					CUtlBuffer::PeekGet(
						int offset);  // 290
					CUtlMemory<std::pair<unsigned char::operator[](
							int i);  // 588
					CUtlVectorBase<std::pair<unsigned char::operator[](
							int i);  // 298
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 75
					V_memcpy(void* dest,
						const void* src,
						int count);  // 298
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 308
				}
				CUtlMemory<std::pair<unsigned char::operator[](
						int i);  // 588
				CUtlVectorBase<std::pair<unsigned char::operator[](
						int i);  // 283
				CUtlMemory<std::pair<unsigned char::operator[](
						int i);  // 588
				CUtlVectorBase<std::pair<unsigned char::operator[](
						int i);  // 285
				CUtlMemory<std::pair<unsigned char::operator[](
						int i);  // 588
				CUtlVectorBase<std::pair<unsigned char::operator[](
						int i);  // 308
			}
			CUtlVectorBase<std::pair<unsigned char::Count(); // 281
		}
		CUtlMemory<char, int>::Grow(
			int num);  // 806
		CUtlVectorBase<char, CUtlMemory<char, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<char, CUtlMemory<char, int> >::GrowVector(
				int num);  // 1445
		CUtlVectorBase<char, CUtlMemory<char, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<char, CUtlMemory<char, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<char, CUtlMemory<char, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<char, CUtlMemory<char, int> >::SetCount(
			int count);  // 275
		CUtlMemory<char, int>::ValidateGrowSize(); // 475
		CUtlMemory<char, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char, CUtlMemory<char, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<char, CUtlMemory<char, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char, CUtlMemory<char, int> >::CUtlVector(); // 274
		CUtlMemory<char, int>::Purge(); // 903
		CUtlMemory<char, int>::Purge(); // 1799
		CUtlVectorBase<char, CUtlMemory<char, int> >::Purge(); // 560
		ValidateAlignment<char>(void); // 508
		CUtlMemory<char, int>::Purge(); // 510
		CUtlMemory<char, int>::~CUtlMemory(); // 562
		CUtlVectorBase<char, CUtlMemory<char, int> >::~CUtlVectorBase(); // 410
		CUtlVector<char, CUtlMemory<char, int> >::~CUtlVector(); // 310
		CUtlMemory<char, int>::Purge(); // 903
		CUtlMemory<char, int>::Purge(); // 1799
		CUtlVectorBase<char, CUtlMemory<char, int> >::Purge(); // 560
		ValidateAlignment<char>(void); // 508
		CUtlMemory<char, int>::Purge(); // 510
		CUtlMemory<char, int>::~CUtlMemory(); // 562
		CUtlVectorBase<char, CUtlMemory<char, int> >::~CUtlVectorBase(); // 410
		CUtlVector<char, CUtlMemory<char, int> >::~CUtlVector(); // 310
	}
	{
		int i; // 313
		{
			uint nBlobSize; // 315
			CUtlMemory<std::pair<unsigned char::operator[](
					int i);  // 588
			CUtlVectorBase<std::pair<unsigned char::operator[](
					int i);  // 322
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 79
			V_memcpy(void* dest,
				const void* src,
				uint count);  // 323
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 323
			CUtlMemory<std::pair<unsigned char::operator[](
					int i);  // 588
			CUtlVectorBase<std::pair<unsigned char::operator[](
					int i);  // 323
			CUtlMemory<std::pair<unsigned char::operator[](
					int i);  // 588
			CUtlVectorBase<std::pair<unsigned char::operator[](
					int i);  // 315
			CUtlBuffer::TellGet(); // 615
			CUtlBuffer::GetBytesRemaining(); // 318
		}
		CUtlVectorBase<std::pair<unsigned char::Count(); // 313
	}
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 328
} /* size: 1152, variables: 1, inline expansions: 2 (24 bytes) */

// <029E66D5> kv3lib/keyvalues3_binaryreader_v2.cpp:250
// variables: 18
// function calls: 75
void CKV3BinaryLoadContextV2::DecompressBinaryBlobs(CUtlBuffer* pFramingBuffer, CUtlBuffer* pCompressedBuffer)
{
	const char   __FUNCTION__; // 64183
	{
		const uint  nFrameSize; // 270
		const uint  nRingBufferSize; // 271
		uint nRingBufferPut; // 272
		CUtlVector<char, CUtlMemory<char, int> > ringBuffer; // 274
		char* pRingBuffer; // 276
		LZ4_streamDecode_t lz4StreamDecode_body; // 278
		LZ4_streamDecode_t* lz4StreamDecode; // 279
		{
			int i; // 281
			{
				uint nBlobSize; // 283
				uint nBytesDecompressed; // 284
				{
					uint16 nCompressedBytesInFrame; // 289
					int nDecompressed; // 290
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 624
					CUtlBuffer::PeekGet(
						int offset);  // 913
					StringToNumber<short unsigned int>(char* pString,
										char** ppEnd,
										int nRadix);  // 915
					CUtlBuffer::BGetTypeText<short unsigned int>(
									short unsigned int& value,
									int nRadix);  // 929
					CUtlBuffer::BGetType<short unsigned int>(
									short unsigned int& dest);  // 926
					CUtlBuffer::IsText(); // 928
					CByteswap::IsSwappingBytes(); // 688
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 624
					CUtlBuffer::PeekGet(
						int offset);  // 690
					{
						int i; // 200
						{
							int i; // 214
						}
						memcpy(void* __dest,
							const void* __src,
							size_t __len);  // 91
						V_memcpy(void* dest,
							const void* src,
							size_t count);  // 218
						LowLevelByteSwap<short unsigned int>(short unsigned int* output,
											short unsigned int* input);  // 202
					}
					CByteswap::SwapBufferToTargetEndian<short unsigned int>(
											short unsigned int* outputBuffer,
											short unsigned int* inputBuffer,
											int count);  // 170
					CByteswap::SwapBufferToTargetEndian<short unsigned int>(
											short unsigned int* outputBuffer,
											short unsigned int* inputBuffer,
											int count);  // 694
					CUtlBuffer::BGetTypeBin<short unsigned int>(
									short unsigned int& dest);  // 672
					CUtlBuffer::BGetTypeBin<short unsigned int>(
									short unsigned int& dest);  // 930
					CUtlBuffer::BGetType<short unsigned int>(
									short unsigned int& dest);  // 1116
					CUtlBuffer::BGetUnsignedShort(
								short unsigned int* pOutUShort);  // 958
					CUtlBuffer::GetUnsignedShort(); // 289
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 624
					CUtlBuffer::PeekGet(
						int offset);  // 290
					CUtlMemory<std::pair<unsigned char::operator[](
							int i);  // 588
					CUtlVectorBase<std::pair<unsigned char::operator[](
							int i);  // 298
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 75
					V_memcpy(void* dest,
						const void* src,
						int count);  // 298
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 308
				}
				CUtlMemory<std::pair<unsigned char::operator[](
						int i);  // 588
				CUtlVectorBase<std::pair<unsigned char::operator[](
						int i);  // 283
				CUtlMemory<std::pair<unsigned char::operator[](
						int i);  // 588
				CUtlVectorBase<std::pair<unsigned char::operator[](
						int i);  // 285
				CUtlMemory<std::pair<unsigned char::operator[](
						int i);  // 588
				CUtlVectorBase<std::pair<unsigned char::operator[](
						int i);  // 308
			}
			CUtlVectorBase<std::pair<unsigned char::Count(); // 281
		}
		CUtlMemory<char, int>::Grow(
			int num);  // 806
		CUtlVectorBase<char, CUtlMemory<char, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<char, CUtlMemory<char, int> >::GrowVector(
				int num);  // 1445
		CUtlVectorBase<char, CUtlMemory<char, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<char, CUtlMemory<char, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<char, CUtlMemory<char, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<char, CUtlMemory<char, int> >::SetCount(
			int count);  // 275
		CUtlMemory<char, int>::ValidateGrowSize(); // 475
		CUtlMemory<char, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char, CUtlMemory<char, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<char, CUtlMemory<char, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char, CUtlMemory<char, int> >::CUtlVector(); // 274
		CUtlMemory<char, int>::Purge(); // 903
		CUtlMemory<char, int>::Purge(); // 1799
		CUtlVectorBase<char, CUtlMemory<char, int> >::Purge(); // 560
		ValidateAlignment<char>(void); // 508
		CUtlMemory<char, int>::Purge(); // 510
		CUtlMemory<char, int>::~CUtlMemory(); // 562
		CUtlVectorBase<char, CUtlMemory<char, int> >::~CUtlVectorBase(); // 410
		CUtlVector<char, CUtlMemory<char, int> >::~CUtlVector(); // 310
		CUtlMemory<char, int>::Purge(); // 903
		CUtlMemory<char, int>::Purge(); // 1799
		CUtlVectorBase<char, CUtlMemory<char, int> >::Purge(); // 560
		ValidateAlignment<char>(void); // 508
		CUtlMemory<char, int>::Purge(); // 510
		CUtlMemory<char, int>::~CUtlMemory(); // 562
		CUtlVectorBase<char, CUtlMemory<char, int> >::~CUtlVectorBase(); // 410
		CUtlVector<char, CUtlMemory<char, int> >::~CUtlVector(); // 310
	}
	{
		int i; // 313
		{
			uint nBlobSize; // 315
			CUtlMemory<std::pair<unsigned char::operator[](
					int i);  // 588
			CUtlVectorBase<std::pair<unsigned char::operator[](
					int i);  // 322
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 79
			V_memcpy(void* dest,
				const void* src,
				uint count);  // 323
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 323
			CUtlMemory<std::pair<unsigned char::operator[](
					int i);  // 588
			CUtlVectorBase<std::pair<unsigned char::operator[](
					int i);  // 323
			CUtlMemory<std::pair<unsigned char::operator[](
					int i);  // 588
			CUtlVectorBase<std::pair<unsigned char::operator[](
					int i);  // 315
			CUtlBuffer::TellGet(); // 615
			CUtlBuffer::GetBytesRemaining(); // 318
		}
		CUtlVectorBase<std::pair<unsigned char::Count(); // 313
	}
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 328
} /* size: 1152, variables: 1, inline expansions: 2 (24 bytes) */

// <0133628A> kv3lib/keyvalues3_binaryreader_v2.cpp:250
// variables: 18
// function calls: 75
void CKV3BinaryLoadContextV2::DecompressBinaryBlobs(CUtlBuffer* pFramingBuffer, CUtlBuffer* pCompressedBuffer)
{
	const char   __FUNCTION__; // 3626
	{
		const uint  nFrameSize; // 270
		const uint  nRingBufferSize; // 271
		uint nRingBufferPut; // 272
		CUtlVector<char, CUtlMemory<char, int> > ringBuffer; // 274
		char* pRingBuffer; // 276
		LZ4_streamDecode_t lz4StreamDecode_body; // 278
		LZ4_streamDecode_t* lz4StreamDecode; // 279
		{
			int i; // 281
			{
				uint nBlobSize; // 283
				uint nBytesDecompressed; // 284
				{
					uint16 nCompressedBytesInFrame; // 289
					int nDecompressed; // 290
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 624
					CUtlBuffer::PeekGet(
						int offset);  // 913
					StringToNumber<short unsigned int>(char* pString,
										char** ppEnd,
										int nRadix);  // 915
					CUtlBuffer::BGetTypeText<short unsigned int>(
									short unsigned int& value,
									int nRadix);  // 929
					CUtlBuffer::BGetType<short unsigned int>(
									short unsigned int& dest);  // 926
					CUtlBuffer::IsText(); // 928
					CByteswap::IsSwappingBytes(); // 688
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 624
					CUtlBuffer::PeekGet(
						int offset);  // 690
					{
						int i; // 200
						{
							int i; // 214
						}
						memcpy(void* __dest,
							const void* __src,
							size_t __len);  // 91
						V_memcpy(void* dest,
							const void* src,
							size_t count);  // 218
						LowLevelByteSwap<short unsigned int>(short unsigned int* output,
											short unsigned int* input);  // 202
					}
					CByteswap::SwapBufferToTargetEndian<short unsigned int>(
											short unsigned int* outputBuffer,
											short unsigned int* inputBuffer,
											int count);  // 170
					CByteswap::SwapBufferToTargetEndian<short unsigned int>(
											short unsigned int* outputBuffer,
											short unsigned int* inputBuffer,
											int count);  // 694
					CUtlBuffer::BGetTypeBin<short unsigned int>(
									short unsigned int& dest);  // 672
					CUtlBuffer::BGetTypeBin<short unsigned int>(
									short unsigned int& dest);  // 930
					CUtlBuffer::BGetType<short unsigned int>(
									short unsigned int& dest);  // 1116
					CUtlBuffer::BGetUnsignedShort(
								short unsigned int* pOutUShort);  // 958
					CUtlBuffer::GetUnsignedShort(); // 289
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 624
					CUtlBuffer::PeekGet(
						int offset);  // 290
					CUtlMemory<std::pair<unsigned char::operator[](
							int i);  // 588
					CUtlVectorBase<std::pair<unsigned char::operator[](
							int i);  // 298
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 75
					V_memcpy(void* dest,
						const void* src,
						int count);  // 298
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 308
				}
				CUtlMemory<std::pair<unsigned char::operator[](
						int i);  // 588
				CUtlVectorBase<std::pair<unsigned char::operator[](
						int i);  // 283
				CUtlMemory<std::pair<unsigned char::operator[](
						int i);  // 588
				CUtlVectorBase<std::pair<unsigned char::operator[](
						int i);  // 285
				CUtlMemory<std::pair<unsigned char::operator[](
						int i);  // 588
				CUtlVectorBase<std::pair<unsigned char::operator[](
						int i);  // 308
			}
			CUtlVectorBase<std::pair<unsigned char::Count(); // 281
		}
		CUtlMemory<char, int>::Grow(
			int num);  // 806
		CUtlVectorBase<char, CUtlMemory<char, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<char, CUtlMemory<char, int> >::GrowVector(
				int num);  // 1445
		CUtlVectorBase<char, CUtlMemory<char, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<char, CUtlMemory<char, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<char, CUtlMemory<char, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<char, CUtlMemory<char, int> >::SetCount(
			int count);  // 275
		CUtlMemory<char, int>::ValidateGrowSize(); // 475
		CUtlMemory<char, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char, CUtlMemory<char, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<char, CUtlMemory<char, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char, CUtlMemory<char, int> >::CUtlVector(); // 274
		CUtlMemory<char, int>::Purge(); // 903
		CUtlMemory<char, int>::Purge(); // 1799
		CUtlVectorBase<char, CUtlMemory<char, int> >::Purge(); // 560
		ValidateAlignment<char>(void); // 508
		CUtlMemory<char, int>::Purge(); // 510
		CUtlMemory<char, int>::~CUtlMemory(); // 562
		CUtlVectorBase<char, CUtlMemory<char, int> >::~CUtlVectorBase(); // 410
		CUtlVector<char, CUtlMemory<char, int> >::~CUtlVector(); // 310
		CUtlMemory<char, int>::Purge(); // 903
		CUtlMemory<char, int>::Purge(); // 1799
		CUtlVectorBase<char, CUtlMemory<char, int> >::Purge(); // 560
		ValidateAlignment<char>(void); // 508
		CUtlMemory<char, int>::Purge(); // 510
		CUtlMemory<char, int>::~CUtlMemory(); // 562
		CUtlVectorBase<char, CUtlMemory<char, int> >::~CUtlVectorBase(); // 410
		CUtlVector<char, CUtlMemory<char, int> >::~CUtlVector(); // 310
	}
	{
		int i; // 313
		{
			uint nBlobSize; // 315
			CUtlMemory<std::pair<unsigned char::operator[](
					int i);  // 588
			CUtlVectorBase<std::pair<unsigned char::operator[](
					int i);  // 322
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 79
			V_memcpy(void* dest,
				const void* src,
				uint count);  // 323
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 323
			CUtlMemory<std::pair<unsigned char::operator[](
					int i);  // 588
			CUtlVectorBase<std::pair<unsigned char::operator[](
					int i);  // 323
			CUtlMemory<std::pair<unsigned char::operator[](
					int i);  // 588
			CUtlVectorBase<std::pair<unsigned char::operator[](
					int i);  // 315
			CUtlBuffer::TellGet(); // 615
			CUtlBuffer::GetBytesRemaining(); // 318
		}
		CUtlVectorBase<std::pair<unsigned char::Count(); // 313
	}
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 328
} /* size: 1152, variables: 1, inline expansions: 2 (24 bytes) */

// <003B1A4F> kv3lib/keyvalues3_binaryreader_v2.cpp:250
// variables: 18
// function calls: 75
void CKV3BinaryLoadContextV2::DecompressBinaryBlobs(CUtlBuffer* pFramingBuffer, CUtlBuffer* pCompressedBuffer)
{
	const char   __FUNCTION__; // 55329
	{
		const uint  nFrameSize; // 270
		const uint  nRingBufferSize; // 271
		uint nRingBufferPut; // 272
		CUtlVector<char, CUtlMemory<char, int> > ringBuffer; // 274
		char* pRingBuffer; // 276
		LZ4_streamDecode_t lz4StreamDecode_body; // 278
		LZ4_streamDecode_t* lz4StreamDecode; // 279
		{
			int i; // 281
			{
				uint nBlobSize; // 283
				uint nBytesDecompressed; // 284
				{
					uint16 nCompressedBytesInFrame; // 289
					int nDecompressed; // 290
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 624
					CUtlBuffer::PeekGet(
						int offset);  // 913
					StringToNumber<short unsigned int>(char* pString,
										char** ppEnd,
										int nRadix);  // 915
					CUtlBuffer::BGetTypeText<short unsigned int>(
									short unsigned int& value,
									int nRadix);  // 929
					CUtlBuffer::BGetType<short unsigned int>(
									short unsigned int& dest);  // 926
					CUtlBuffer::IsText(); // 928
					CByteswap::IsSwappingBytes(); // 688
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 624
					CUtlBuffer::PeekGet(
						int offset);  // 690
					{
						int i; // 200
						{
							int i; // 214
						}
						memcpy(void* __dest,
							const void* __src,
							size_t __len);  // 91
						V_memcpy(void* dest,
							const void* src,
							size_t count);  // 218
						LowLevelByteSwap<short unsigned int>(short unsigned int* output,
											short unsigned int* input);  // 202
					}
					CByteswap::SwapBufferToTargetEndian<short unsigned int>(
											short unsigned int* outputBuffer,
											short unsigned int* inputBuffer,
											int count);  // 170
					CByteswap::SwapBufferToTargetEndian<short unsigned int>(
											short unsigned int* outputBuffer,
											short unsigned int* inputBuffer,
											int count);  // 694
					CUtlBuffer::BGetTypeBin<short unsigned int>(
									short unsigned int& dest);  // 672
					CUtlBuffer::BGetTypeBin<short unsigned int>(
									short unsigned int& dest);  // 930
					CUtlBuffer::BGetType<short unsigned int>(
									short unsigned int& dest);  // 1116
					CUtlBuffer::BGetUnsignedShort(
								short unsigned int* pOutUShort);  // 958
					CUtlBuffer::GetUnsignedShort(); // 289
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 624
					CUtlBuffer::PeekGet(
						int offset);  // 290
					CUtlMemory<std::pair<unsigned char::operator[](
							int i);  // 588
					CUtlVectorBase<std::pair<unsigned char::operator[](
							int i);  // 298
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 75
					V_memcpy(void* dest,
						const void* src,
						int count);  // 298
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 308
				}
				CUtlMemory<std::pair<unsigned char::operator[](
						int i);  // 588
				CUtlVectorBase<std::pair<unsigned char::operator[](
						int i);  // 283
				CUtlMemory<std::pair<unsigned char::operator[](
						int i);  // 588
				CUtlVectorBase<std::pair<unsigned char::operator[](
						int i);  // 285
				CUtlMemory<std::pair<unsigned char::operator[](
						int i);  // 588
				CUtlVectorBase<std::pair<unsigned char::operator[](
						int i);  // 308
			}
			CUtlVectorBase<std::pair<unsigned char::Count(); // 281
		}
		CUtlMemory<char, int>::Grow(
			int num);  // 806
		CUtlVectorBase<char, CUtlMemory<char, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<char, CUtlMemory<char, int> >::GrowVector(
				int num);  // 1445
		CUtlVectorBase<char, CUtlMemory<char, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<char, CUtlMemory<char, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<char, CUtlMemory<char, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<char, CUtlMemory<char, int> >::SetCount(
			int count);  // 275
		CUtlMemory<char, int>::ValidateGrowSize(); // 475
		CUtlMemory<char, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char, CUtlMemory<char, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<char, CUtlMemory<char, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char, CUtlMemory<char, int> >::CUtlVector(); // 274
		CUtlMemory<char, int>::Purge(); // 903
		CUtlMemory<char, int>::Purge(); // 1799
		CUtlVectorBase<char, CUtlMemory<char, int> >::Purge(); // 560
		ValidateAlignment<char>(void); // 508
		CUtlMemory<char, int>::Purge(); // 510
		CUtlMemory<char, int>::~CUtlMemory(); // 562
		CUtlVectorBase<char, CUtlMemory<char, int> >::~CUtlVectorBase(); // 410
		CUtlVector<char, CUtlMemory<char, int> >::~CUtlVector(); // 310
		CUtlMemory<char, int>::Purge(); // 903
		CUtlMemory<char, int>::Purge(); // 1799
		CUtlVectorBase<char, CUtlMemory<char, int> >::Purge(); // 560
		ValidateAlignment<char>(void); // 508
		CUtlMemory<char, int>::Purge(); // 510
		CUtlMemory<char, int>::~CUtlMemory(); // 562
		CUtlVectorBase<char, CUtlMemory<char, int> >::~CUtlVectorBase(); // 410
		CUtlVector<char, CUtlMemory<char, int> >::~CUtlVector(); // 310
	}
	{
		int i; // 313
		{
			uint nBlobSize; // 315
			CUtlMemory<std::pair<unsigned char::operator[](
					int i);  // 588
			CUtlVectorBase<std::pair<unsigned char::operator[](
					int i);  // 322
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 79
			V_memcpy(void* dest,
				const void* src,
				uint count);  // 323
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 323
			CUtlMemory<std::pair<unsigned char::operator[](
					int i);  // 588
			CUtlVectorBase<std::pair<unsigned char::operator[](
					int i);  // 323
			CUtlMemory<std::pair<unsigned char::operator[](
					int i);  // 588
			CUtlVectorBase<std::pair<unsigned char::operator[](
					int i);  // 315
			CUtlBuffer::TellGet(); // 615
			CUtlBuffer::GetBytesRemaining(); // 318
		}
		CUtlVectorBase<std::pair<unsigned char::Count(); // 313
	}
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 328
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00716C51> kv3lib/keyvalues3_binaryreader_v2.cpp:250
// variables: 18
// function calls: 75
void CKV3BinaryLoadContextV2::DecompressBinaryBlobs(CUtlBuffer* pFramingBuffer, CUtlBuffer* pCompressedBuffer)
{
	const char   __FUNCTION__; // 15779
	{
		const uint  nFrameSize; // 270
		const uint  nRingBufferSize; // 271
		uint nRingBufferPut; // 272
		CUtlVector<char, CUtlMemory<char, int> > ringBuffer; // 274
		char* pRingBuffer; // 276
		LZ4_streamDecode_t lz4StreamDecode_body; // 278
		LZ4_streamDecode_t* lz4StreamDecode; // 279
		{
			int i; // 281
			{
				uint nBlobSize; // 283
				uint nBytesDecompressed; // 284
				{
					uint16 nCompressedBytesInFrame; // 289
					int nDecompressed; // 290
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 624
					CUtlBuffer::PeekGet(
						int offset);  // 913
					StringToNumber<short unsigned int>(char* pString,
										char** ppEnd,
										int nRadix);  // 915
					CUtlBuffer::BGetTypeText<short unsigned int>(
									short unsigned int& value,
									int nRadix);  // 929
					CUtlBuffer::BGetType<short unsigned int>(
									short unsigned int& dest);  // 926
					CUtlBuffer::IsText(); // 928
					CByteswap::IsSwappingBytes(); // 688
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 624
					CUtlBuffer::PeekGet(
						int offset);  // 690
					{
						int i; // 200
						{
							int i; // 214
						}
						memcpy(void* __dest,
							const void* __src,
							size_t __len);  // 91
						V_memcpy(void* dest,
							const void* src,
							size_t count);  // 218
						LowLevelByteSwap<short unsigned int>(short unsigned int* output,
											short unsigned int* input);  // 202
					}
					CByteswap::SwapBufferToTargetEndian<short unsigned int>(
											short unsigned int* outputBuffer,
											short unsigned int* inputBuffer,
											int count);  // 170
					CByteswap::SwapBufferToTargetEndian<short unsigned int>(
											short unsigned int* outputBuffer,
											short unsigned int* inputBuffer,
											int count);  // 694
					CUtlBuffer::BGetTypeBin<short unsigned int>(
									short unsigned int& dest);  // 672
					CUtlBuffer::BGetTypeBin<short unsigned int>(
									short unsigned int& dest);  // 930
					CUtlBuffer::BGetType<short unsigned int>(
									short unsigned int& dest);  // 1116
					CUtlBuffer::BGetUnsignedShort(
								short unsigned int* pOutUShort);  // 958
					CUtlBuffer::GetUnsignedShort(); // 289
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 624
					CUtlBuffer::PeekGet(
						int offset);  // 290
					CUtlMemory<std::pair<unsigned char::operator[](
							int i);  // 588
					CUtlVectorBase<std::pair<unsigned char::operator[](
							int i);  // 298
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 75
					V_memcpy(void* dest,
						const void* src,
						int count);  // 298
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 308
				}
				CUtlMemory<std::pair<unsigned char::operator[](
						int i);  // 588
				CUtlVectorBase<std::pair<unsigned char::operator[](
						int i);  // 283
				CUtlMemory<std::pair<unsigned char::operator[](
						int i);  // 588
				CUtlVectorBase<std::pair<unsigned char::operator[](
						int i);  // 285
				CUtlMemory<std::pair<unsigned char::operator[](
						int i);  // 588
				CUtlVectorBase<std::pair<unsigned char::operator[](
						int i);  // 308
			}
			CUtlVectorBase<std::pair<unsigned char::Count(); // 281
		}
		CUtlMemory<char, int>::Grow(
			int num);  // 806
		CUtlVectorBase<char, CUtlMemory<char, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<char, CUtlMemory<char, int> >::GrowVector(
				int num);  // 1445
		CUtlVectorBase<char, CUtlMemory<char, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<char, CUtlMemory<char, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<char, CUtlMemory<char, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<char, CUtlMemory<char, int> >::SetCount(
			int count);  // 275
		CUtlMemory<char, int>::ValidateGrowSize(); // 475
		CUtlMemory<char, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char, CUtlMemory<char, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<char, CUtlMemory<char, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char, CUtlMemory<char, int> >::CUtlVector(); // 274
		CUtlMemory<char, int>::Purge(); // 903
		CUtlMemory<char, int>::Purge(); // 1799
		CUtlVectorBase<char, CUtlMemory<char, int> >::Purge(); // 560
		ValidateAlignment<char>(void); // 508
		CUtlMemory<char, int>::Purge(); // 510
		CUtlMemory<char, int>::~CUtlMemory(); // 562
		CUtlVectorBase<char, CUtlMemory<char, int> >::~CUtlVectorBase(); // 410
		CUtlVector<char, CUtlMemory<char, int> >::~CUtlVector(); // 310
		CUtlMemory<char, int>::Purge(); // 903
		CUtlMemory<char, int>::Purge(); // 1799
		CUtlVectorBase<char, CUtlMemory<char, int> >::Purge(); // 560
		ValidateAlignment<char>(void); // 508
		CUtlMemory<char, int>::Purge(); // 510
		CUtlMemory<char, int>::~CUtlMemory(); // 562
		CUtlVectorBase<char, CUtlMemory<char, int> >::~CUtlVectorBase(); // 410
		CUtlVector<char, CUtlMemory<char, int> >::~CUtlVector(); // 310
	}
	{
		int i; // 313
		{
			uint nBlobSize; // 315
			CUtlMemory<std::pair<unsigned char::operator[](
					int i);  // 588
			CUtlVectorBase<std::pair<unsigned char::operator[](
					int i);  // 322
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 79
			V_memcpy(void* dest,
				const void* src,
				uint count);  // 323
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 323
			CUtlMemory<std::pair<unsigned char::operator[](
					int i);  // 588
			CUtlVectorBase<std::pair<unsigned char::operator[](
					int i);  // 323
			CUtlMemory<std::pair<unsigned char::operator[](
					int i);  // 588
			CUtlVectorBase<std::pair<unsigned char::operator[](
					int i);  // 315
			CUtlBuffer::TellGet(); // 615
			CUtlBuffer::GetBytesRemaining(); // 318
		}
		CUtlVectorBase<std::pair<unsigned char::Count(); // 313
	}
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 328
} /* size: 1152, variables: 1, inline expansions: 2 (24 bytes) */

// <00AEE8D8> kv3lib/keyvalues3_binaryreader_v2.cpp:250
// variables: 18
// function calls: 75
void CKV3BinaryLoadContextV2::DecompressBinaryBlobs(CUtlBuffer* pFramingBuffer, CUtlBuffer* pCompressedBuffer)
{
	const char   __FUNCTION__; // 21930
	{
		const uint  nFrameSize; // 270
		const uint  nRingBufferSize; // 271
		uint nRingBufferPut; // 272
		CUtlVector<char, CUtlMemory<char, int> > ringBuffer; // 274
		char* pRingBuffer; // 276
		LZ4_streamDecode_t lz4StreamDecode_body; // 278
		LZ4_streamDecode_t* lz4StreamDecode; // 279
		{
			int i; // 281
			{
				uint nBlobSize; // 283
				uint nBytesDecompressed; // 284
				{
					uint16 nCompressedBytesInFrame; // 289
					int nDecompressed; // 290
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 624
					CUtlBuffer::PeekGet(
						int offset);  // 913
					StringToNumber<short unsigned int>(char* pString,
										char** ppEnd,
										int nRadix);  // 915
					CUtlBuffer::BGetTypeText<short unsigned int>(
									short unsigned int& value,
									int nRadix);  // 929
					CUtlBuffer::BGetType<short unsigned int>(
									short unsigned int& dest);  // 926
					CUtlBuffer::IsText(); // 928
					CByteswap::IsSwappingBytes(); // 688
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 624
					CUtlBuffer::PeekGet(
						int offset);  // 690
					{
						int i; // 200
						{
							int i; // 214
						}
						memcpy(void* __dest,
							const void* __src,
							size_t __len);  // 91
						V_memcpy(void* dest,
							const void* src,
							size_t count);  // 218
						LowLevelByteSwap<short unsigned int>(short unsigned int* output,
											short unsigned int* input);  // 202
					}
					CByteswap::SwapBufferToTargetEndian<short unsigned int>(
											short unsigned int* outputBuffer,
											short unsigned int* inputBuffer,
											int count);  // 170
					CByteswap::SwapBufferToTargetEndian<short unsigned int>(
											short unsigned int* outputBuffer,
											short unsigned int* inputBuffer,
											int count);  // 694
					CUtlBuffer::BGetTypeBin<short unsigned int>(
									short unsigned int& dest);  // 672
					CUtlBuffer::BGetTypeBin<short unsigned int>(
									short unsigned int& dest);  // 930
					CUtlBuffer::BGetType<short unsigned int>(
									short unsigned int& dest);  // 1116
					CUtlBuffer::BGetUnsignedShort(
								short unsigned int* pOutUShort);  // 958
					CUtlBuffer::GetUnsignedShort(); // 289
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 624
					CUtlBuffer::PeekGet(
						int offset);  // 290
					CUtlMemory<std::pair<unsigned char::operator[](
							int i);  // 588
					CUtlVectorBase<std::pair<unsigned char::operator[](
							int i);  // 298
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 75
					V_memcpy(void* dest,
						const void* src,
						int count);  // 298
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 308
				}
				CUtlMemory<std::pair<unsigned char::operator[](
						int i);  // 588
				CUtlVectorBase<std::pair<unsigned char::operator[](
						int i);  // 283
				CUtlMemory<std::pair<unsigned char::operator[](
						int i);  // 588
				CUtlVectorBase<std::pair<unsigned char::operator[](
						int i);  // 285
				CUtlMemory<std::pair<unsigned char::operator[](
						int i);  // 588
				CUtlVectorBase<std::pair<unsigned char::operator[](
						int i);  // 308
			}
			CUtlVectorBase<std::pair<unsigned char::Count(); // 281
		}
		CUtlMemory<char, int>::Grow(
			int num);  // 806
		CUtlVectorBase<char, CUtlMemory<char, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<char, CUtlMemory<char, int> >::GrowVector(
				int num);  // 1445
		CUtlVectorBase<char, CUtlMemory<char, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<char, CUtlMemory<char, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<char, CUtlMemory<char, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<char, CUtlMemory<char, int> >::SetCount(
			int count);  // 275
		CUtlMemory<char, int>::ValidateGrowSize(); // 475
		CUtlMemory<char, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char, CUtlMemory<char, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<char, CUtlMemory<char, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char, CUtlMemory<char, int> >::CUtlVector(); // 274
		CUtlMemory<char, int>::Purge(); // 903
		CUtlMemory<char, int>::Purge(); // 1799
		CUtlVectorBase<char, CUtlMemory<char, int> >::Purge(); // 560
		ValidateAlignment<char>(void); // 508
		CUtlMemory<char, int>::Purge(); // 510
		CUtlMemory<char, int>::~CUtlMemory(); // 562
		CUtlVectorBase<char, CUtlMemory<char, int> >::~CUtlVectorBase(); // 410
		CUtlVector<char, CUtlMemory<char, int> >::~CUtlVector(); // 310
		CUtlMemory<char, int>::Purge(); // 903
		CUtlMemory<char, int>::Purge(); // 1799
		CUtlVectorBase<char, CUtlMemory<char, int> >::Purge(); // 560
		ValidateAlignment<char>(void); // 508
		CUtlMemory<char, int>::Purge(); // 510
		CUtlMemory<char, int>::~CUtlMemory(); // 562
		CUtlVectorBase<char, CUtlMemory<char, int> >::~CUtlVectorBase(); // 410
		CUtlVector<char, CUtlMemory<char, int> >::~CUtlVector(); // 310
	}
	{
		int i; // 313
		{
			uint nBlobSize; // 315
			CUtlMemory<std::pair<unsigned char::operator[](
					int i);  // 588
			CUtlVectorBase<std::pair<unsigned char::operator[](
					int i);  // 322
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 79
			V_memcpy(void* dest,
				const void* src,
				uint count);  // 323
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 323
			CUtlMemory<std::pair<unsigned char::operator[](
					int i);  // 588
			CUtlVectorBase<std::pair<unsigned char::operator[](
					int i);  // 323
			CUtlMemory<std::pair<unsigned char::operator[](
					int i);  // 588
			CUtlVectorBase<std::pair<unsigned char::operator[](
					int i);  // 315
			CUtlBuffer::TellGet(); // 615
			CUtlBuffer::GetBytesRemaining(); // 318
		}
		CUtlVectorBase<std::pair<unsigned char::Count(); // 313
	}
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 328
} /* size: 1152, variables: 1, inline expansions: 2 (24 bytes) */

// <001FB459> kv3lib/keyvalues3_binaryreader_v2.cpp:250
// variables: 18
// function calls: 75
void CKV3BinaryLoadContextV2::DecompressBinaryBlobs(CUtlBuffer* pFramingBuffer, CUtlBuffer* pCompressedBuffer)
{
	const char   __FUNCTION__; // 14427
	{
		const uint  nFrameSize; // 270
		const uint  nRingBufferSize; // 271
		uint nRingBufferPut; // 272
		CUtlVector<char, CUtlMemory<char, int> > ringBuffer; // 274
		char* pRingBuffer; // 276
		LZ4_streamDecode_t lz4StreamDecode_body; // 278
		LZ4_streamDecode_t* lz4StreamDecode; // 279
		{
			int i; // 281
			{
				uint nBlobSize; // 283
				uint nBytesDecompressed; // 284
				{
					uint16 nCompressedBytesInFrame; // 289
					int nDecompressed; // 290
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 624
					CUtlBuffer::PeekGet(
						int offset);  // 913
					StringToNumber<short unsigned int>(char* pString,
										char** ppEnd,
										int nRadix);  // 915
					CUtlBuffer::BGetTypeText<short unsigned int>(
									short unsigned int& value,
									int nRadix);  // 929
					CUtlBuffer::BGetType<short unsigned int>(
									short unsigned int& dest);  // 926
					CUtlBuffer::IsText(); // 928
					CByteswap::IsSwappingBytes(); // 688
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 624
					CUtlBuffer::PeekGet(
						int offset);  // 690
					{
						int i; // 200
						{
							int i; // 214
						}
						memcpy(void* __dest,
							const void* __src,
							size_t __len);  // 91
						V_memcpy(void* dest,
							const void* src,
							size_t count);  // 218
						LowLevelByteSwap<short unsigned int>(short unsigned int* output,
											short unsigned int* input);  // 202
					}
					CByteswap::SwapBufferToTargetEndian<short unsigned int>(
											short unsigned int* outputBuffer,
											short unsigned int* inputBuffer,
											int count);  // 170
					CByteswap::SwapBufferToTargetEndian<short unsigned int>(
											short unsigned int* outputBuffer,
											short unsigned int* inputBuffer,
											int count);  // 694
					CUtlBuffer::BGetTypeBin<short unsigned int>(
									short unsigned int& dest);  // 672
					CUtlBuffer::BGetTypeBin<short unsigned int>(
									short unsigned int& dest);  // 930
					CUtlBuffer::BGetType<short unsigned int>(
									short unsigned int& dest);  // 1116
					CUtlBuffer::BGetUnsignedShort(
								short unsigned int* pOutUShort);  // 958
					CUtlBuffer::GetUnsignedShort(); // 289
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 624
					CUtlBuffer::PeekGet(
						int offset);  // 290
					CUtlMemory<std::pair<unsigned char::operator[](
							int i);  // 588
					CUtlVectorBase<std::pair<unsigned char::operator[](
							int i);  // 298
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 75
					V_memcpy(void* dest,
						const void* src,
						int count);  // 298
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 308
				}
				CUtlMemory<std::pair<unsigned char::operator[](
						int i);  // 588
				CUtlVectorBase<std::pair<unsigned char::operator[](
						int i);  // 283
				CUtlMemory<std::pair<unsigned char::operator[](
						int i);  // 588
				CUtlVectorBase<std::pair<unsigned char::operator[](
						int i);  // 285
				CUtlMemory<std::pair<unsigned char::operator[](
						int i);  // 588
				CUtlVectorBase<std::pair<unsigned char::operator[](
						int i);  // 308
			}
			CUtlVectorBase<std::pair<unsigned char::Count(); // 281
		}
		CUtlMemory<char, int>::Grow(
			int num);  // 806
		CUtlVectorBase<char, CUtlMemory<char, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<char, CUtlMemory<char, int> >::GrowVector(
				int num);  // 1445
		CUtlVectorBase<char, CUtlMemory<char, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<char, CUtlMemory<char, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<char, CUtlMemory<char, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<char, CUtlMemory<char, int> >::SetCount(
			int count);  // 275
		CUtlMemory<char, int>::ValidateGrowSize(); // 475
		CUtlMemory<char, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char, CUtlMemory<char, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<char, CUtlMemory<char, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char, CUtlMemory<char, int> >::CUtlVector(); // 274
		CUtlMemory<char, int>::Purge(); // 903
		CUtlMemory<char, int>::Purge(); // 1799
		CUtlVectorBase<char, CUtlMemory<char, int> >::Purge(); // 560
		ValidateAlignment<char>(void); // 508
		CUtlMemory<char, int>::Purge(); // 510
		CUtlMemory<char, int>::~CUtlMemory(); // 562
		CUtlVectorBase<char, CUtlMemory<char, int> >::~CUtlVectorBase(); // 410
		CUtlVector<char, CUtlMemory<char, int> >::~CUtlVector(); // 310
		CUtlMemory<char, int>::Purge(); // 903
		CUtlMemory<char, int>::Purge(); // 1799
		CUtlVectorBase<char, CUtlMemory<char, int> >::Purge(); // 560
		ValidateAlignment<char>(void); // 508
		CUtlMemory<char, int>::Purge(); // 510
		CUtlMemory<char, int>::~CUtlMemory(); // 562
		CUtlVectorBase<char, CUtlMemory<char, int> >::~CUtlVectorBase(); // 410
		CUtlVector<char, CUtlMemory<char, int> >::~CUtlVector(); // 310
	}
	{
		int i; // 313
		{
			uint nBlobSize; // 315
			CUtlMemory<std::pair<unsigned char::operator[](
					int i);  // 588
			CUtlVectorBase<std::pair<unsigned char::operator[](
					int i);  // 322
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 79
			V_memcpy(void* dest,
				const void* src,
				uint count);  // 323
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 323
			CUtlMemory<std::pair<unsigned char::operator[](
					int i);  // 588
			CUtlVectorBase<std::pair<unsigned char::operator[](
					int i);  // 323
			CUtlMemory<std::pair<unsigned char::operator[](
					int i);  // 588
			CUtlVectorBase<std::pair<unsigned char::operator[](
					int i);  // 315
			CUtlBuffer::TellGet(); // 615
			CUtlBuffer::GetBytesRemaining(); // 318
		}
		CUtlVectorBase<std::pair<unsigned char::Count(); // 313
	}
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 328
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <0566864F> kv3lib/keyvalues3_binaryreader_v2.cpp:337
// variables: 2
inline void GetValue<unsigned char, unsigned char CKV3BinaryLoadContextV2::const>(const unsigned char ** ppGet, const unsigned char* pEnd)
{
	const unsigned char* pGet; // 342
	unsigned char value; // 343
} /* size: 0, variables: 2 */

// <056685F4> kv3lib/keyvalues3_binaryreader_v2.cpp:337
// variables: 2
inline void GetValue<signed char, unsigned char CKV3BinaryLoadContextV2::const>(const unsigned char ** ppGet, const unsigned char* pEnd)
{
	const unsigned char* pGet; // 342
	signed char value; // 343
} /* size: 0, variables: 2 */

// <05668593> kv3lib/keyvalues3_binaryreader_v2.cpp:337
// variables: 2
inline void GetValue<unsigned int, unsigned int CKV3BinaryLoadContextV2::const>(const unsigned int ** ppGet, const unsigned int* pEnd)
{
	const unsigned int* pGet; // 342
	unsigned int value; // 343
} /* size: 0, variables: 2 */

// <05668538> kv3lib/keyvalues3_binaryreader_v2.cpp:337
// variables: 2
inline void GetValue<int, unsigned int CKV3BinaryLoadContextV2::const>(const unsigned int ** ppGet, const unsigned int* pEnd)
{
	const unsigned int* pGet; // 342
	int value; // 343
} /* size: 0, variables: 2 */

// <056684D1> kv3lib/keyvalues3_binaryreader_v2.cpp:337
// variables: 2
inline void GetValue<long long unsigned int, long long unsigned int CKV3BinaryLoadContextV2::const>(const long long unsigned int ** ppGet, const long long unsigned int* pEnd)
{
	const long long unsigned int* pGet; // 342
	long long unsigned int value; // 343
} /* size: 0, variables: 2 */

// <05668476> kv3lib/keyvalues3_binaryreader_v2.cpp:337
// variables: 2
inline void GetValue<long long int, long long unsigned int CKV3BinaryLoadContextV2::const>(const long long unsigned int ** ppGet, const long long unsigned int* pEnd)
{
	const long long unsigned int* pGet; // 342
	long long int value; // 343
} /* size: 0, variables: 2 */

// <0566841B> kv3lib/keyvalues3_binaryreader_v2.cpp:337
// variables: 2
inline void GetValue<double, long long unsigned int CKV3BinaryLoadContextV2::const>(const long long unsigned int ** ppGet, const long long unsigned int* pEnd)
{
	const long long unsigned int* pGet; // 342
	double value; // 343
} /* size: 0, variables: 2 */

// <0566ECC2> kv3lib/keyvalues3_binaryreader_v2.cpp:357
inline void CKV3BinaryLoadContextV2::GetControl()
{
} /* size: 0 */

// <0566ECA9> kv3lib/keyvalues3_binaryreader_v2.cpp:360
inline void CKV3BinaryLoadContextV2::GetInt8Value()
{
} /* size: 0 */

// <0566EC90> kv3lib/keyvalues3_binaryreader_v2.cpp:362
inline void CKV3BinaryLoadContextV2::GetUint32Value()
{
} /* size: 0 */

// <0566EC77> kv3lib/keyvalues3_binaryreader_v2.cpp:363
inline void CKV3BinaryLoadContextV2::GetInt32Value()
{
} /* size: 0 */

// <0566EC5E> kv3lib/keyvalues3_binaryreader_v2.cpp:366
inline void CKV3BinaryLoadContextV2::GetUint64Value()
{
} /* size: 0 */

// <0566EC45> kv3lib/keyvalues3_binaryreader_v2.cpp:367
inline void CKV3BinaryLoadContextV2::GetInt64Value()
{
} /* size: 0 */

// <0566EC2C> kv3lib/keyvalues3_binaryreader_v2.cpp:368
inline void CKV3BinaryLoadContextV2::GetDoubleValue()
{
} /* size: 0 */

// <0566EC06> kv3lib/keyvalues3_binaryreader_v2.cpp:370
inline void CKV3BinaryLoadContextV2::String(int nIndex)
{
} /* size: 0 */

// <0566EBD1> kv3lib/keyvalues3_binaryreader_v2.cpp:382
// variable: 1
inline void CKV3BinaryLoadContextV2::MemberName(int nIndex)
{
	{
		KeyValues3LowercaseHash_t nHash; // 386
	}
} /* size: 0 */

// <0566EB9E> kv3lib/keyvalues3_binaryreader_v2.cpp:401
// variable: 1
inline void CKV3BinaryLoadContextV2::ReadTypeAndFlags(KeyValues3Flag_t& nFlags)
{
	byte nBinaryType; // 403
} /* size: 0, variables: 1 */

// <0566EB5E> kv3lib/keyvalues3_binaryreader_v2.cpp:416
// variables: 2
inline void CKV3BinaryLoadContextV2::LoadTypeAndValue(KeyValues3* pTarget)
{
	KeyValues3Flag_t nFlags; // 418
	KeyValues3BinaryType_t nBinaryType; // 419
} /* size: 0, variables: 2 */

// <0566831D> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<1>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 45304
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <056682BB> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<2>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 45304
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <05668259> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<13>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 45304
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <056681F7> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<14>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 45304
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <05668195> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<15>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 45304
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <05668133> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<16>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 45304
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <056680D1> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<3>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 45304
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <0566806F> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<4>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 45304
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <0566800D> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<11>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 45304
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <05667FAB> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<12>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 45304
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <05667F49> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<5>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 45304
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <05667EE7> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<17>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 45304
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <05667E85> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<18>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 45304
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <05667E23> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<6>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 45304
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <029DFD17> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<1>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 63975
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <029DFCB5> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<2>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 63975
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <029DFC53> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<13>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 63975
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <029DFBF1> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<14>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 63975
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <029DFB8F> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<15>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 63975
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <029DFB2D> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<16>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 63975
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <029DFACB> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<3>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 63975
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <029DFA69> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<4>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 63975
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <029DFA07> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<11>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 63975
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <029DF9A5> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<12>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 63975
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <029DF943> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<5>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 63975
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <029DF8E1> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<17>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 63975
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <029DF87F> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<18>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 63975
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <029DF81D> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<6>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 63975
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <0132F8CC> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<1>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 3418
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <0132F86A> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<2>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 3418
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <0132F808> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<13>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 3418
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <0132F7A6> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<14>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 3418
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <0132F744> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<15>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 3418
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <0132F6E2> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<16>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 3418
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <0132F680> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<3>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 3418
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <0132F61E> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<4>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 3418
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <0132F5BC> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<11>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 3418
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <0132F55A> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<12>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 3418
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <0132F4F8> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<5>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 3418
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <0132F496> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<17>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 3418
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <0132F434> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<18>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 3418
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <0132F3D2> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<6>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 3418
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <003AB091> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<1>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 55121
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <003AB02F> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<2>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 55121
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <003AAD81> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<11>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 55121
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <003AAD1F> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<12>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 55121
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <007100A9> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<16>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 15571
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <0070FFE5> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<4>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 15571
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <0070FEBF> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<5>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 15571
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <0070FE5D> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<17>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 15571
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <0070FDFB> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<18>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 15571
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <0070FD99> kv3lib/keyvalues3_binaryreader_v2.cpp:427
// variables: 3
inline void CKV3BinaryLoadContextV2::LoadPODValue<6>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 15571
	{
		int32 nString; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 511
	}
} /* size: 0, variables: 1 */

// <0566C528> kv3lib/keyvalues3_binaryreader_v2.cpp:516
// variables: 21
// function calls: 148
void CKV3BinaryLoadContextV2::LoadValue(KeyValues3BinaryType_t nBinaryType, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 45233
	{
		const uint  nMemberCount; // 561
		{
			uint i; // 564
			{
				const uint  nMemberName; // 566
				KeyValues3* pMember; // 568
				CKV3MemberName memberName; // 569
				CKV3BinaryLoadContextV2::GetValue<unsigned int, unsigned int const>(
										const unsigned int ** ppGet,
										const unsigned int* pEnd);  // 362
				CKV3BinaryLoadContextV2::GetUint32Value(); // 566
				CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::IsValidIndex(
						int i);  // 384
				{
					KeyValues3LowercaseHash_t nHash; // 386
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::operator[](
							int i);  // 386
					CUtlStringToken::IsValid(); // 387
					CUtlMemory<char const::operator[](
							int i);  // 588
					CUtlVectorBase<char const::operator[](
							int i);  // 393
					CKV3MemberName::CKV3MemberName(
							const char* pString,
							KeyValues3LowercaseHash_t nHash);  // 393
					CUtlMemory<char const::operator[](
							int i);  // 588
					CUtlVectorBase<char const::operator[](
							int i);  // 389
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 151
					KV3MakeLowerHash(const char* pStr); // 389
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::operator[](
							int i);  // 390
				}
				CUtlStringToken::CUtlStringToken(); // 8
				CKV3MemberName::CKV3MemberName(); // 397
				CKV3BinaryLoadContextV2::MemberName(
						int nIndex);  // 569
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 40
				FindOrCreateMemberAimedAtExternalName(KeyValues3* pTarget,
									CKV3MemberName memberNameAndHash);  // 573
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 573
				CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 357
				CKV3BinaryLoadContextV2::GetControl(); // 403
				CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 357
				CKV3BinaryLoadContextV2::GetControl(); // 406
				CKV3BinaryLoadContextV2::ReadTypeAndFlags(
						KeyValues3Flag_t& nFlags);  // 419
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 421
				CKV3BinaryLoadContextV2::LoadTypeAndValue(
						KeyValues3* pTarget);  // 580
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 577
			}
		}
		CKV3BinaryLoadContextV2::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 362
		CKV3BinaryLoadContextV2::GetUint32Value(); // 561
	}
	{
		const int  nCount; // 588
		{
			int i; // 591
			{
				KeyValues3* pElement; // 593
				CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 357
				CKV3BinaryLoadContextV2::GetControl(); // 403
				CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 357
				CKV3BinaryLoadContextV2::GetControl(); // 406
				CKV3BinaryLoadContextV2::ReadTypeAndFlags(
						KeyValues3Flag_t& nFlags);  // 419
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 421
				CKV3BinaryLoadContextV2::LoadTypeAndValue(
						KeyValues3* pTarget);  // 594
			}
		}
		CKV3BinaryLoadContextV2::GetValue<int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 363
		CKV3BinaryLoadContextV2::GetInt32Value(); // 588
	}
	{
		uint nCount; // 603
		KeyValues3Flag_t nElementFlags; // 607
		KeyValues3BinaryType_t nArrayType; // 608
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 604
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 623
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 636
		}
		{
			KeyValues3* pElement; // 646
			CKV3ArrayIteratorView<false>& __for_range; // 33652
			iterator __for_begin; // 21842
			iterator __for_end; // 21842
			{
				KeyValues3::Internal_Type(); // 90
				KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
				KeyValues3::GetType(); // 74
				KeyValues3::GetType(); // 74
			}
			{
			}
			CKV3ArrayIteratorView<false>::CKV3ArrayIteratorView(
						KV3Pointer_t pKV3);  // 67
			CKV3ArrayIteratorView<false>::CKV3ArrayIteratorView(
						KV3Pointer_t pKV3);  // 921
			KeyValues3::IterateArray(); // 646
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<false>::begin(); // 646
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<false>::end(); // 646
			iterator::operator!=(
					const iterator& rhs);  // 646
			KeyValues3::SetAllFlags(
					KeyValues3Flag_t nFlag);  // 649
			{
			}
			iterator::operator*(); // 646
		}
		CKV3BinaryLoadContextV2::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 362
		CKV3BinaryLoadContextV2::GetUint32Value(); // 603
		CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
								const unsigned char ** ppGet,
								const unsigned char* pEnd);  // 357
		CKV3BinaryLoadContextV2::GetControl(); // 403
		CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
								const unsigned char ** ppGet,
								const unsigned char* pEnd);  // 357
		CKV3BinaryLoadContextV2::GetControl(); // 406
		CKV3BinaryLoadContextV2::ReadTypeAndFlags(
				KeyValues3Flag_t& nFlags);  // 608
		GetKV3TypeForBinaryType(KeyValues3BinaryType_t nBinaryType); // 644
		SetValueExternalInt32Array(KeyValues3* pTarget,
						int nValues,
						const int32* pValues);  // 637
		SetValueExternalDoubleArray(KeyValues3* pTarget,
						int nFloatsInArray,
						const double* pValues);  // 624
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 493
	CKV3BinaryLoadContextV2::LoadPODValue<18>(
			KeyValues3* pTarget);  // 532
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 433
	CKV3BinaryLoadContextV2::LoadPODValue<1>(
			KeyValues3* pTarget);  // 520
	CKV3BinaryLoadContextV2::GetValue<signed char, unsigned char const>(
							const unsigned char ** ppGet,
							const unsigned char* pEnd);  // 360
	CKV3BinaryLoadContextV2::GetInt8Value(); // 448
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 448
	CKV3BinaryLoadContextV2::LoadPODValue<2>(
			KeyValues3* pTarget);  // 521
	CKV3BinaryLoadContextV2::GetValue<int, unsigned int const>(
						const unsigned int ** ppGet,
						const unsigned int* pEnd);  // 363
	CKV3BinaryLoadContextV2::GetInt32Value(); // 473
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 473
	CKV3BinaryLoadContextV2::LoadPODValue<11>(
			KeyValues3* pTarget);  // 528
	CKV3BinaryLoadContextV2::GetValue<unsigned int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 362
	CKV3BinaryLoadContextV2::GetUint32Value(); // 478
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 478
	CKV3BinaryLoadContextV2::LoadPODValue<12>(
			KeyValues3* pTarget);  // 529
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 438
	CKV3BinaryLoadContextV2::LoadPODValue<13>(
			KeyValues3* pTarget);  // 522
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 443
	CKV3BinaryLoadContextV2::LoadPODValue<14>(
			KeyValues3* pTarget);  // 523
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 458
	CKV3BinaryLoadContextV2::LoadPODValue<16>(
			KeyValues3* pTarget);  // 525
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 453
	CKV3BinaryLoadContextV2::LoadPODValue<15>(
			KeyValues3* pTarget);  // 524
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 488
	CKV3BinaryLoadContextV2::LoadPODValue<17>(
			KeyValues3* pTarget);  // 531
	{
		int32 nString; // 498
		CKV3BinaryLoadContextV2::GetValue<int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 363
		CKV3BinaryLoadContextV2::GetInt32Value(); // 498
		CUtlVectorBase<char const::IsValidIndex(
				int i);  // 372
		CUtlMemory<char const::operator[](
				int i);  // 588
		CUtlVectorBase<char const::operator[](
				int i);  // 374
		CKV3BinaryLoadContextV2::String(
			int nIndex);  // 501
		AimAtExternalString(KeyValues3* pTarget,
					const char* pString);  // 501
		CUtlVectorBase<char const::IsValidIndex(
				int i);  // 372
		CUtlMemory<char const::operator[](
				int i);  // 588
		CUtlVectorBase<char const::operator[](
				int i);  // 374
		CKV3BinaryLoadContextV2::String(
			int nIndex);  // 505
	}
	CKV3BinaryLoadContextV2::LoadPODValue<6>(
			KeyValues3* pTarget);  // 533
	CKV3BinaryLoadContextV2::GetValue<long long unsigned int, long long unsigned int const>(
									const long long unsigned int ** ppGet,
									const long long unsigned int* pEnd);  // 366
	CKV3BinaryLoadContextV2::GetUint64Value(); // 468
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 468
	CKV3BinaryLoadContextV2::LoadPODValue<4>(
			KeyValues3* pTarget);  // 527
	CKV3BinaryLoadContextV2::GetValue<double, long long unsigned int const>(
							const long long unsigned int ** ppGet,
							const long long unsigned int* pEnd);  // 368
	CKV3BinaryLoadContextV2::GetDoubleValue(); // 483
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 483
	CKV3BinaryLoadContextV2::LoadPODValue<5>(
			KeyValues3* pTarget);  // 530
	CKV3BinaryLoadContextV2::GetValue<long long int, long long unsigned int const>(
								const long long unsigned int ** ppGet,
								const long long unsigned int* pEnd);  // 367
	CKV3BinaryLoadContextV2::GetInt64Value(); // 463
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 463
	CKV3BinaryLoadContextV2::LoadPODValue<3>(
			KeyValues3* pTarget);  // 526
	CUtlVectorBase<std::pair<unsigned char::Count(); // 537
	CUtlMemory<std::pair<unsigned char::operator[](
			int i);  // 588
	CUtlVectorBase<std::pair<unsigned char::operator[](
			int i);  // 547
	TakeOwnershipOfBinaryBlob(KeyValues3* pTarget,
					byte* pData,
					int nSize);  // 544
	CUtlMemory<std::pair<unsigned char::operator[](
			int i);  // 588
	CUtlVectorBase<std::pair<unsigned char::operator[](
			int i);  // 551
} /* size: 2907, variables: 1, inline expansions: 71 (3127 bytes) */

// <029E3F22> kv3lib/keyvalues3_binaryreader_v2.cpp:516
// variables: 21
// function calls: 148
void CKV3BinaryLoadContextV2::LoadValue(KeyValues3BinaryType_t nBinaryType, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 63904
	{
		const uint  nMemberCount; // 561
		{
			uint i; // 564
			{
				const uint  nMemberName; // 566
				KeyValues3* pMember; // 568
				CKV3MemberName memberName; // 569
				CKV3BinaryLoadContextV2::GetValue<unsigned int, unsigned int const>(
										const unsigned int ** ppGet,
										const unsigned int* pEnd);  // 362
				CKV3BinaryLoadContextV2::GetUint32Value(); // 566
				CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::IsValidIndex(
						int i);  // 384
				{
					KeyValues3LowercaseHash_t nHash; // 386
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::operator[](
							int i);  // 386
					CUtlStringToken::IsValid(); // 387
					CUtlMemory<char const::operator[](
							int i);  // 588
					CUtlVectorBase<char const::operator[](
							int i);  // 393
					CKV3MemberName::CKV3MemberName(
							const char* pString,
							KeyValues3LowercaseHash_t nHash);  // 393
					CUtlMemory<char const::operator[](
							int i);  // 588
					CUtlVectorBase<char const::operator[](
							int i);  // 389
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 151
					KV3MakeLowerHash(const char* pStr); // 389
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::operator[](
							int i);  // 390
				}
				CUtlStringToken::CUtlStringToken(); // 8
				CKV3MemberName::CKV3MemberName(); // 397
				CKV3BinaryLoadContextV2::MemberName(
						int nIndex);  // 569
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 40
				FindOrCreateMemberAimedAtExternalName(KeyValues3* pTarget,
									CKV3MemberName memberNameAndHash);  // 573
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 573
				CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 357
				CKV3BinaryLoadContextV2::GetControl(); // 403
				CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 357
				CKV3BinaryLoadContextV2::GetControl(); // 406
				CKV3BinaryLoadContextV2::ReadTypeAndFlags(
						KeyValues3Flag_t& nFlags);  // 419
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 421
				CKV3BinaryLoadContextV2::LoadTypeAndValue(
						KeyValues3* pTarget);  // 580
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 577
			}
		}
		CKV3BinaryLoadContextV2::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 362
		CKV3BinaryLoadContextV2::GetUint32Value(); // 561
	}
	{
		const int  nCount; // 588
		{
			int i; // 591
			{
				KeyValues3* pElement; // 593
				CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 357
				CKV3BinaryLoadContextV2::GetControl(); // 403
				CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 357
				CKV3BinaryLoadContextV2::GetControl(); // 406
				CKV3BinaryLoadContextV2::ReadTypeAndFlags(
						KeyValues3Flag_t& nFlags);  // 419
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 421
				CKV3BinaryLoadContextV2::LoadTypeAndValue(
						KeyValues3* pTarget);  // 594
			}
		}
		CKV3BinaryLoadContextV2::GetValue<int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 363
		CKV3BinaryLoadContextV2::GetInt32Value(); // 588
	}
	{
		uint nCount; // 603
		KeyValues3Flag_t nElementFlags; // 607
		KeyValues3BinaryType_t nArrayType; // 608
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 604
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 623
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 636
		}
		{
			KeyValues3* pElement; // 646
			CKV3ArrayIteratorView<false>& __for_range; // 52323
			iterator __for_begin; // 40513
			iterator __for_end; // 40513
			{
				KeyValues3::Internal_Type(); // 90
				KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
				KeyValues3::GetType(); // 74
				KeyValues3::GetType(); // 74
			}
			{
			}
			CKV3ArrayIteratorView<false>::CKV3ArrayIteratorView(
						KV3Pointer_t pKV3);  // 67
			CKV3ArrayIteratorView<false>::CKV3ArrayIteratorView(
						KV3Pointer_t pKV3);  // 921
			KeyValues3::IterateArray(); // 646
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<false>::begin(); // 646
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<false>::end(); // 646
			iterator::operator!=(
					const iterator& rhs);  // 646
			KeyValues3::SetAllFlags(
					KeyValues3Flag_t nFlag);  // 649
			{
			}
			iterator::operator*(); // 646
		}
		CKV3BinaryLoadContextV2::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 362
		CKV3BinaryLoadContextV2::GetUint32Value(); // 603
		CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
								const unsigned char ** ppGet,
								const unsigned char* pEnd);  // 357
		CKV3BinaryLoadContextV2::GetControl(); // 403
		CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
								const unsigned char ** ppGet,
								const unsigned char* pEnd);  // 357
		CKV3BinaryLoadContextV2::GetControl(); // 406
		CKV3BinaryLoadContextV2::ReadTypeAndFlags(
				KeyValues3Flag_t& nFlags);  // 608
		GetKV3TypeForBinaryType(KeyValues3BinaryType_t nBinaryType); // 644
		SetValueExternalInt32Array(KeyValues3* pTarget,
						int nValues,
						const int32* pValues);  // 637
		SetValueExternalDoubleArray(KeyValues3* pTarget,
						int nFloatsInArray,
						const double* pValues);  // 624
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 493
	CKV3BinaryLoadContextV2::LoadPODValue<18>(
			KeyValues3* pTarget);  // 532
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 433
	CKV3BinaryLoadContextV2::LoadPODValue<1>(
			KeyValues3* pTarget);  // 520
	CKV3BinaryLoadContextV2::GetValue<signed char, unsigned char const>(
							const unsigned char ** ppGet,
							const unsigned char* pEnd);  // 360
	CKV3BinaryLoadContextV2::GetInt8Value(); // 448
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 448
	CKV3BinaryLoadContextV2::LoadPODValue<2>(
			KeyValues3* pTarget);  // 521
	CKV3BinaryLoadContextV2::GetValue<int, unsigned int const>(
						const unsigned int ** ppGet,
						const unsigned int* pEnd);  // 363
	CKV3BinaryLoadContextV2::GetInt32Value(); // 473
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 473
	CKV3BinaryLoadContextV2::LoadPODValue<11>(
			KeyValues3* pTarget);  // 528
	CKV3BinaryLoadContextV2::GetValue<unsigned int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 362
	CKV3BinaryLoadContextV2::GetUint32Value(); // 478
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 478
	CKV3BinaryLoadContextV2::LoadPODValue<12>(
			KeyValues3* pTarget);  // 529
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 438
	CKV3BinaryLoadContextV2::LoadPODValue<13>(
			KeyValues3* pTarget);  // 522
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 443
	CKV3BinaryLoadContextV2::LoadPODValue<14>(
			KeyValues3* pTarget);  // 523
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 458
	CKV3BinaryLoadContextV2::LoadPODValue<16>(
			KeyValues3* pTarget);  // 525
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 453
	CKV3BinaryLoadContextV2::LoadPODValue<15>(
			KeyValues3* pTarget);  // 524
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 488
	CKV3BinaryLoadContextV2::LoadPODValue<17>(
			KeyValues3* pTarget);  // 531
	{
		int32 nString; // 498
		CKV3BinaryLoadContextV2::GetValue<int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 363
		CKV3BinaryLoadContextV2::GetInt32Value(); // 498
		CUtlVectorBase<char const::IsValidIndex(
				int i);  // 372
		CUtlMemory<char const::operator[](
				int i);  // 588
		CUtlVectorBase<char const::operator[](
				int i);  // 374
		CKV3BinaryLoadContextV2::String(
			int nIndex);  // 501
		AimAtExternalString(KeyValues3* pTarget,
					const char* pString);  // 501
		CUtlVectorBase<char const::IsValidIndex(
				int i);  // 372
		CUtlMemory<char const::operator[](
				int i);  // 588
		CUtlVectorBase<char const::operator[](
				int i);  // 374
		CKV3BinaryLoadContextV2::String(
			int nIndex);  // 505
	}
	CKV3BinaryLoadContextV2::LoadPODValue<6>(
			KeyValues3* pTarget);  // 533
	CKV3BinaryLoadContextV2::GetValue<long long unsigned int, long long unsigned int const>(
									const long long unsigned int ** ppGet,
									const long long unsigned int* pEnd);  // 366
	CKV3BinaryLoadContextV2::GetUint64Value(); // 468
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 468
	CKV3BinaryLoadContextV2::LoadPODValue<4>(
			KeyValues3* pTarget);  // 527
	CKV3BinaryLoadContextV2::GetValue<double, long long unsigned int const>(
							const long long unsigned int ** ppGet,
							const long long unsigned int* pEnd);  // 368
	CKV3BinaryLoadContextV2::GetDoubleValue(); // 483
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 483
	CKV3BinaryLoadContextV2::LoadPODValue<5>(
			KeyValues3* pTarget);  // 530
	CKV3BinaryLoadContextV2::GetValue<long long int, long long unsigned int const>(
								const long long unsigned int ** ppGet,
								const long long unsigned int* pEnd);  // 367
	CKV3BinaryLoadContextV2::GetInt64Value(); // 463
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 463
	CKV3BinaryLoadContextV2::LoadPODValue<3>(
			KeyValues3* pTarget);  // 526
	CUtlVectorBase<std::pair<unsigned char::Count(); // 537
	CUtlMemory<std::pair<unsigned char::operator[](
			int i);  // 588
	CUtlVectorBase<std::pair<unsigned char::operator[](
			int i);  // 547
	TakeOwnershipOfBinaryBlob(KeyValues3* pTarget,
					byte* pData,
					int nSize);  // 544
	CUtlMemory<std::pair<unsigned char::operator[](
			int i);  // 588
	CUtlVectorBase<std::pair<unsigned char::operator[](
			int i);  // 551
} /* size: 2907, variables: 1, inline expansions: 71 (3127 bytes) */

// <01333AD7> kv3lib/keyvalues3_binaryreader_v2.cpp:516
// variables: 21
// function calls: 148
void CKV3BinaryLoadContextV2::LoadValue(KeyValues3BinaryType_t nBinaryType, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 3347
	{
		const uint  nMemberCount; // 561
		{
			uint i; // 564
			{
				const uint  nMemberName; // 566
				KeyValues3* pMember; // 568
				CKV3MemberName memberName; // 569
				CKV3BinaryLoadContextV2::GetValue<unsigned int, unsigned int const>(
										const unsigned int ** ppGet,
										const unsigned int* pEnd);  // 362
				CKV3BinaryLoadContextV2::GetUint32Value(); // 566
				CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::IsValidIndex(
						int i);  // 384
				{
					KeyValues3LowercaseHash_t nHash; // 386
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::operator[](
							int i);  // 386
					CUtlStringToken::IsValid(); // 387
					CUtlMemory<char const::operator[](
							int i);  // 588
					CUtlVectorBase<char const::operator[](
							int i);  // 393
					CKV3MemberName::CKV3MemberName(
							const char* pString,
							KeyValues3LowercaseHash_t nHash);  // 393
					CUtlMemory<char const::operator[](
							int i);  // 588
					CUtlVectorBase<char const::operator[](
							int i);  // 389
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 151
					KV3MakeLowerHash(const char* pStr); // 389
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::operator[](
							int i);  // 390
				}
				CUtlStringToken::CUtlStringToken(); // 8
				CKV3MemberName::CKV3MemberName(); // 397
				CKV3BinaryLoadContextV2::MemberName(
						int nIndex);  // 569
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 40
				FindOrCreateMemberAimedAtExternalName(KeyValues3* pTarget,
									CKV3MemberName memberNameAndHash);  // 573
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 573
				CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 357
				CKV3BinaryLoadContextV2::GetControl(); // 403
				CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 357
				CKV3BinaryLoadContextV2::GetControl(); // 406
				CKV3BinaryLoadContextV2::ReadTypeAndFlags(
						KeyValues3Flag_t& nFlags);  // 419
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 421
				CKV3BinaryLoadContextV2::LoadTypeAndValue(
						KeyValues3* pTarget);  // 580
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 577
			}
		}
		CKV3BinaryLoadContextV2::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 362
		CKV3BinaryLoadContextV2::GetUint32Value(); // 561
	}
	{
		const int  nCount; // 588
		{
			int i; // 591
			{
				KeyValues3* pElement; // 593
				CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 357
				CKV3BinaryLoadContextV2::GetControl(); // 403
				CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 357
				CKV3BinaryLoadContextV2::GetControl(); // 406
				CKV3BinaryLoadContextV2::ReadTypeAndFlags(
						KeyValues3Flag_t& nFlags);  // 419
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 421
				CKV3BinaryLoadContextV2::LoadTypeAndValue(
						KeyValues3* pTarget);  // 594
			}
		}
		CKV3BinaryLoadContextV2::GetValue<int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 363
		CKV3BinaryLoadContextV2::GetInt32Value(); // 588
	}
	{
		uint nCount; // 603
		KeyValues3Flag_t nElementFlags; // 607
		KeyValues3BinaryType_t nArrayType; // 608
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 604
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 623
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 636
		}
		{
			KeyValues3* pElement; // 646
			CKV3ArrayIteratorView<false>& __for_range; // 57302
			iterator __for_begin; // 45492
			iterator __for_end; // 45492
			{
				KeyValues3::Internal_Type(); // 90
				KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
				KeyValues3::GetType(); // 74
				KeyValues3::GetType(); // 74
			}
			{
			}
			CKV3ArrayIteratorView<false>::CKV3ArrayIteratorView(
						KV3Pointer_t pKV3);  // 67
			CKV3ArrayIteratorView<false>::CKV3ArrayIteratorView(
						KV3Pointer_t pKV3);  // 921
			KeyValues3::IterateArray(); // 646
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<false>::begin(); // 646
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<false>::end(); // 646
			iterator::operator!=(
					const iterator& rhs);  // 646
			KeyValues3::SetAllFlags(
					KeyValues3Flag_t nFlag);  // 649
			{
			}
			iterator::operator*(); // 646
		}
		CKV3BinaryLoadContextV2::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 362
		CKV3BinaryLoadContextV2::GetUint32Value(); // 603
		CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
								const unsigned char ** ppGet,
								const unsigned char* pEnd);  // 357
		CKV3BinaryLoadContextV2::GetControl(); // 403
		CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
								const unsigned char ** ppGet,
								const unsigned char* pEnd);  // 357
		CKV3BinaryLoadContextV2::GetControl(); // 406
		CKV3BinaryLoadContextV2::ReadTypeAndFlags(
				KeyValues3Flag_t& nFlags);  // 608
		GetKV3TypeForBinaryType(KeyValues3BinaryType_t nBinaryType); // 644
		SetValueExternalInt32Array(KeyValues3* pTarget,
						int nValues,
						const int32* pValues);  // 637
		SetValueExternalDoubleArray(KeyValues3* pTarget,
						int nFloatsInArray,
						const double* pValues);  // 624
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 493
	CKV3BinaryLoadContextV2::LoadPODValue<18>(
			KeyValues3* pTarget);  // 532
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 433
	CKV3BinaryLoadContextV2::LoadPODValue<1>(
			KeyValues3* pTarget);  // 520
	CKV3BinaryLoadContextV2::GetValue<signed char, unsigned char const>(
							const unsigned char ** ppGet,
							const unsigned char* pEnd);  // 360
	CKV3BinaryLoadContextV2::GetInt8Value(); // 448
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 448
	CKV3BinaryLoadContextV2::LoadPODValue<2>(
			KeyValues3* pTarget);  // 521
	CKV3BinaryLoadContextV2::GetValue<int, unsigned int const>(
						const unsigned int ** ppGet,
						const unsigned int* pEnd);  // 363
	CKV3BinaryLoadContextV2::GetInt32Value(); // 473
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 473
	CKV3BinaryLoadContextV2::LoadPODValue<11>(
			KeyValues3* pTarget);  // 528
	CKV3BinaryLoadContextV2::GetValue<unsigned int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 362
	CKV3BinaryLoadContextV2::GetUint32Value(); // 478
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 478
	CKV3BinaryLoadContextV2::LoadPODValue<12>(
			KeyValues3* pTarget);  // 529
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 438
	CKV3BinaryLoadContextV2::LoadPODValue<13>(
			KeyValues3* pTarget);  // 522
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 443
	CKV3BinaryLoadContextV2::LoadPODValue<14>(
			KeyValues3* pTarget);  // 523
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 458
	CKV3BinaryLoadContextV2::LoadPODValue<16>(
			KeyValues3* pTarget);  // 525
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 453
	CKV3BinaryLoadContextV2::LoadPODValue<15>(
			KeyValues3* pTarget);  // 524
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 488
	CKV3BinaryLoadContextV2::LoadPODValue<17>(
			KeyValues3* pTarget);  // 531
	{
		int32 nString; // 498
		CKV3BinaryLoadContextV2::GetValue<int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 363
		CKV3BinaryLoadContextV2::GetInt32Value(); // 498
		CUtlVectorBase<char const::IsValidIndex(
				int i);  // 372
		CUtlMemory<char const::operator[](
				int i);  // 588
		CUtlVectorBase<char const::operator[](
				int i);  // 374
		CKV3BinaryLoadContextV2::String(
			int nIndex);  // 501
		AimAtExternalString(KeyValues3* pTarget,
					const char* pString);  // 501
		CUtlVectorBase<char const::IsValidIndex(
				int i);  // 372
		CUtlMemory<char const::operator[](
				int i);  // 588
		CUtlVectorBase<char const::operator[](
				int i);  // 374
		CKV3BinaryLoadContextV2::String(
			int nIndex);  // 505
	}
	CKV3BinaryLoadContextV2::LoadPODValue<6>(
			KeyValues3* pTarget);  // 533
	CKV3BinaryLoadContextV2::GetValue<long long unsigned int, long long unsigned int const>(
									const long long unsigned int ** ppGet,
									const long long unsigned int* pEnd);  // 366
	CKV3BinaryLoadContextV2::GetUint64Value(); // 468
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 468
	CKV3BinaryLoadContextV2::LoadPODValue<4>(
			KeyValues3* pTarget);  // 527
	CKV3BinaryLoadContextV2::GetValue<double, long long unsigned int const>(
							const long long unsigned int ** ppGet,
							const long long unsigned int* pEnd);  // 368
	CKV3BinaryLoadContextV2::GetDoubleValue(); // 483
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 483
	CKV3BinaryLoadContextV2::LoadPODValue<5>(
			KeyValues3* pTarget);  // 530
	CKV3BinaryLoadContextV2::GetValue<long long int, long long unsigned int const>(
								const long long unsigned int ** ppGet,
								const long long unsigned int* pEnd);  // 367
	CKV3BinaryLoadContextV2::GetInt64Value(); // 463
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 463
	CKV3BinaryLoadContextV2::LoadPODValue<3>(
			KeyValues3* pTarget);  // 526
	CUtlVectorBase<std::pair<unsigned char::Count(); // 537
	CUtlMemory<std::pair<unsigned char::operator[](
			int i);  // 588
	CUtlVectorBase<std::pair<unsigned char::operator[](
			int i);  // 547
	TakeOwnershipOfBinaryBlob(KeyValues3* pTarget,
					byte* pData,
					int nSize);  // 544
	CUtlMemory<std::pair<unsigned char::operator[](
			int i);  // 588
	CUtlVectorBase<std::pair<unsigned char::operator[](
			int i);  // 551
} /* size: 2907, variables: 1, inline expansions: 71 (3127 bytes) */

// <003AF29C> kv3lib/keyvalues3_binaryreader_v2.cpp:516
// variables: 21
// function calls: 148
void CKV3BinaryLoadContextV2::LoadValue(KeyValues3BinaryType_t nBinaryType, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 55050
	{
		const uint  nMemberCount; // 561
		{
			uint i; // 564
			{
				const uint  nMemberName; // 566
				KeyValues3* pMember; // 568
				CKV3MemberName memberName; // 569
				CKV3BinaryLoadContextV2::GetValue<unsigned int, unsigned int const>(
										const unsigned int ** ppGet,
										const unsigned int* pEnd);  // 362
				CKV3BinaryLoadContextV2::GetUint32Value(); // 566
				CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::IsValidIndex(
						int i);  // 384
				{
					KeyValues3LowercaseHash_t nHash; // 386
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::operator[](
							int i);  // 386
					CUtlStringToken::IsValid(); // 387
					CUtlMemory<char const::operator[](
							int i);  // 588
					CUtlVectorBase<char const::operator[](
							int i);  // 393
					CKV3MemberName::CKV3MemberName(
							const char* pString,
							KeyValues3LowercaseHash_t nHash);  // 393
					CUtlMemory<char const::operator[](
							int i);  // 588
					CUtlVectorBase<char const::operator[](
							int i);  // 389
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 151
					KV3MakeLowerHash(const char* pStr); // 389
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::operator[](
							int i);  // 390
				}
				CUtlStringToken::CUtlStringToken(); // 8
				CKV3MemberName::CKV3MemberName(); // 397
				CKV3BinaryLoadContextV2::MemberName(
						int nIndex);  // 569
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 40
				FindOrCreateMemberAimedAtExternalName(KeyValues3* pTarget,
									CKV3MemberName memberNameAndHash);  // 573
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 573
				CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 357
				CKV3BinaryLoadContextV2::GetControl(); // 403
				CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 357
				CKV3BinaryLoadContextV2::GetControl(); // 406
				CKV3BinaryLoadContextV2::ReadTypeAndFlags(
						KeyValues3Flag_t& nFlags);  // 419
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 421
				CKV3BinaryLoadContextV2::LoadTypeAndValue(
						KeyValues3* pTarget);  // 580
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 577
			}
		}
		CKV3BinaryLoadContextV2::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 362
		CKV3BinaryLoadContextV2::GetUint32Value(); // 561
	}
	{
		const int  nCount; // 588
		{
			int i; // 591
			{
				KeyValues3* pElement; // 593
				CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 357
				CKV3BinaryLoadContextV2::GetControl(); // 403
				CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 357
				CKV3BinaryLoadContextV2::GetControl(); // 406
				CKV3BinaryLoadContextV2::ReadTypeAndFlags(
						KeyValues3Flag_t& nFlags);  // 419
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 421
				CKV3BinaryLoadContextV2::LoadTypeAndValue(
						KeyValues3* pTarget);  // 594
			}
		}
		CKV3BinaryLoadContextV2::GetValue<int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 363
		CKV3BinaryLoadContextV2::GetInt32Value(); // 588
	}
	{
		uint nCount; // 603
		KeyValues3Flag_t nElementFlags; // 607
		KeyValues3BinaryType_t nArrayType; // 608
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 604
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 623
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 636
		}
		{
			KeyValues3* pElement; // 646
			CKV3ArrayIteratorView<false>& __for_range; // 43469
			iterator __for_begin; // 31659
			iterator __for_end; // 31659
			{
				KeyValues3::Internal_Type(); // 90
				KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
				KeyValues3::GetType(); // 74
				KeyValues3::GetType(); // 74
			}
			{
			}
			CKV3ArrayIteratorView<false>::CKV3ArrayIteratorView(
						KV3Pointer_t pKV3);  // 67
			CKV3ArrayIteratorView<false>::CKV3ArrayIteratorView(
						KV3Pointer_t pKV3);  // 921
			KeyValues3::IterateArray(); // 646
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<false>::begin(); // 646
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<false>::end(); // 646
			iterator::operator!=(
					const iterator& rhs);  // 646
			KeyValues3::SetAllFlags(
					KeyValues3Flag_t nFlag);  // 649
			{
			}
			iterator::operator*(); // 646
		}
		CKV3BinaryLoadContextV2::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 362
		CKV3BinaryLoadContextV2::GetUint32Value(); // 603
		CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
								const unsigned char ** ppGet,
								const unsigned char* pEnd);  // 357
		CKV3BinaryLoadContextV2::GetControl(); // 403
		CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
								const unsigned char ** ppGet,
								const unsigned char* pEnd);  // 357
		CKV3BinaryLoadContextV2::GetControl(); // 406
		CKV3BinaryLoadContextV2::ReadTypeAndFlags(
				KeyValues3Flag_t& nFlags);  // 608
		GetKV3TypeForBinaryType(KeyValues3BinaryType_t nBinaryType); // 644
		SetValueExternalInt32Array(KeyValues3* pTarget,
						int nValues,
						const int32* pValues);  // 637
		SetValueExternalDoubleArray(KeyValues3* pTarget,
						int nFloatsInArray,
						const double* pValues);  // 624
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 493
	CKV3BinaryLoadContextV2::LoadPODValue<18>(
			KeyValues3* pTarget);  // 532
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 433
	CKV3BinaryLoadContextV2::LoadPODValue<1>(
			KeyValues3* pTarget);  // 520
	CKV3BinaryLoadContextV2::GetValue<signed char, unsigned char const>(
							const unsigned char ** ppGet,
							const unsigned char* pEnd);  // 360
	CKV3BinaryLoadContextV2::GetInt8Value(); // 448
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 448
	CKV3BinaryLoadContextV2::LoadPODValue<2>(
			KeyValues3* pTarget);  // 521
	CKV3BinaryLoadContextV2::GetValue<int, unsigned int const>(
						const unsigned int ** ppGet,
						const unsigned int* pEnd);  // 363
	CKV3BinaryLoadContextV2::GetInt32Value(); // 473
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 473
	CKV3BinaryLoadContextV2::LoadPODValue<11>(
			KeyValues3* pTarget);  // 528
	CKV3BinaryLoadContextV2::GetValue<unsigned int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 362
	CKV3BinaryLoadContextV2::GetUint32Value(); // 478
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 478
	CKV3BinaryLoadContextV2::LoadPODValue<12>(
			KeyValues3* pTarget);  // 529
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 438
	CKV3BinaryLoadContextV2::LoadPODValue<13>(
			KeyValues3* pTarget);  // 522
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 443
	CKV3BinaryLoadContextV2::LoadPODValue<14>(
			KeyValues3* pTarget);  // 523
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 458
	CKV3BinaryLoadContextV2::LoadPODValue<16>(
			KeyValues3* pTarget);  // 525
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 453
	CKV3BinaryLoadContextV2::LoadPODValue<15>(
			KeyValues3* pTarget);  // 524
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 488
	CKV3BinaryLoadContextV2::LoadPODValue<17>(
			KeyValues3* pTarget);  // 531
	{
		int32 nString; // 498
		CKV3BinaryLoadContextV2::GetValue<int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 363
		CKV3BinaryLoadContextV2::GetInt32Value(); // 498
		CUtlVectorBase<char const::IsValidIndex(
				int i);  // 372
		CUtlMemory<char const::operator[](
				int i);  // 588
		CUtlVectorBase<char const::operator[](
				int i);  // 374
		CKV3BinaryLoadContextV2::String(
			int nIndex);  // 501
		AimAtExternalString(KeyValues3* pTarget,
					const char* pString);  // 501
		CUtlVectorBase<char const::IsValidIndex(
				int i);  // 372
		CUtlMemory<char const::operator[](
				int i);  // 588
		CUtlVectorBase<char const::operator[](
				int i);  // 374
		CKV3BinaryLoadContextV2::String(
			int nIndex);  // 505
	}
	CKV3BinaryLoadContextV2::LoadPODValue<6>(
			KeyValues3* pTarget);  // 533
	CKV3BinaryLoadContextV2::GetValue<long long unsigned int, long long unsigned int const>(
									const long long unsigned int ** ppGet,
									const long long unsigned int* pEnd);  // 366
	CKV3BinaryLoadContextV2::GetUint64Value(); // 468
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 468
	CKV3BinaryLoadContextV2::LoadPODValue<4>(
			KeyValues3* pTarget);  // 527
	CKV3BinaryLoadContextV2::GetValue<double, long long unsigned int const>(
							const long long unsigned int ** ppGet,
							const long long unsigned int* pEnd);  // 368
	CKV3BinaryLoadContextV2::GetDoubleValue(); // 483
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 483
	CKV3BinaryLoadContextV2::LoadPODValue<5>(
			KeyValues3* pTarget);  // 530
	CKV3BinaryLoadContextV2::GetValue<long long int, long long unsigned int const>(
								const long long unsigned int ** ppGet,
								const long long unsigned int* pEnd);  // 367
	CKV3BinaryLoadContextV2::GetInt64Value(); // 463
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 463
	CKV3BinaryLoadContextV2::LoadPODValue<3>(
			KeyValues3* pTarget);  // 526
	CUtlVectorBase<std::pair<unsigned char::Count(); // 537
	CUtlMemory<std::pair<unsigned char::operator[](
			int i);  // 588
	CUtlVectorBase<std::pair<unsigned char::operator[](
			int i);  // 547
	TakeOwnershipOfBinaryBlob(KeyValues3* pTarget,
					byte* pData,
					int nSize);  // 544
	CUtlMemory<std::pair<unsigned char::operator[](
			int i);  // 588
	CUtlVectorBase<std::pair<unsigned char::operator[](
			int i);  // 551
} /* size: 0, variables: 1, inline expansions: 71 (0 bytes) */

// <0071449E> kv3lib/keyvalues3_binaryreader_v2.cpp:516
// variables: 21
// function calls: 148
void CKV3BinaryLoadContextV2::LoadValue(KeyValues3BinaryType_t nBinaryType, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 15500
	{
		const uint  nMemberCount; // 561
		{
			uint i; // 564
			{
				const uint  nMemberName; // 566
				KeyValues3* pMember; // 568
				CKV3MemberName memberName; // 569
				CKV3BinaryLoadContextV2::GetValue<unsigned int, unsigned int const>(
										const unsigned int ** ppGet,
										const unsigned int* pEnd);  // 362
				CKV3BinaryLoadContextV2::GetUint32Value(); // 566
				CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::IsValidIndex(
						int i);  // 384
				{
					KeyValues3LowercaseHash_t nHash; // 386
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::operator[](
							int i);  // 386
					CUtlStringToken::IsValid(); // 387
					CUtlMemory<char const::operator[](
							int i);  // 588
					CUtlVectorBase<char const::operator[](
							int i);  // 393
					CKV3MemberName::CKV3MemberName(
							const char* pString,
							KeyValues3LowercaseHash_t nHash);  // 393
					CUtlMemory<char const::operator[](
							int i);  // 588
					CUtlVectorBase<char const::operator[](
							int i);  // 389
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 151
					KV3MakeLowerHash(const char* pStr); // 389
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::operator[](
							int i);  // 390
				}
				CUtlStringToken::CUtlStringToken(); // 8
				CKV3MemberName::CKV3MemberName(); // 397
				CKV3BinaryLoadContextV2::MemberName(
						int nIndex);  // 569
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 40
				FindOrCreateMemberAimedAtExternalName(KeyValues3* pTarget,
									CKV3MemberName memberNameAndHash);  // 573
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 573
				CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 357
				CKV3BinaryLoadContextV2::GetControl(); // 403
				CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 357
				CKV3BinaryLoadContextV2::GetControl(); // 406
				CKV3BinaryLoadContextV2::ReadTypeAndFlags(
						KeyValues3Flag_t& nFlags);  // 419
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 421
				CKV3BinaryLoadContextV2::LoadTypeAndValue(
						KeyValues3* pTarget);  // 580
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 577
			}
		}
		CKV3BinaryLoadContextV2::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 362
		CKV3BinaryLoadContextV2::GetUint32Value(); // 561
	}
	{
		const int  nCount; // 588
		{
			int i; // 591
			{
				KeyValues3* pElement; // 593
				CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 357
				CKV3BinaryLoadContextV2::GetControl(); // 403
				CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 357
				CKV3BinaryLoadContextV2::GetControl(); // 406
				CKV3BinaryLoadContextV2::ReadTypeAndFlags(
						KeyValues3Flag_t& nFlags);  // 419
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 421
				CKV3BinaryLoadContextV2::LoadTypeAndValue(
						KeyValues3* pTarget);  // 594
			}
		}
		CKV3BinaryLoadContextV2::GetValue<int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 363
		CKV3BinaryLoadContextV2::GetInt32Value(); // 588
	}
	{
		uint nCount; // 603
		KeyValues3Flag_t nElementFlags; // 607
		KeyValues3BinaryType_t nArrayType; // 608
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 604
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 623
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 636
		}
		{
			KeyValues3* pElement; // 646
			CKV3ArrayIteratorView<false>& __for_range; // 3919
			iterator __for_begin; // 57645
			iterator __for_end; // 57645
			{
				KeyValues3::Internal_Type(); // 90
				KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
				KeyValues3::GetType(); // 74
				KeyValues3::GetType(); // 74
			}
			{
			}
			CKV3ArrayIteratorView<false>::CKV3ArrayIteratorView(
						KV3Pointer_t pKV3);  // 67
			CKV3ArrayIteratorView<false>::CKV3ArrayIteratorView(
						KV3Pointer_t pKV3);  // 921
			KeyValues3::IterateArray(); // 646
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<false>::begin(); // 646
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<false>::end(); // 646
			iterator::operator!=(
					const iterator& rhs);  // 646
			KeyValues3::SetAllFlags(
					KeyValues3Flag_t nFlag);  // 649
			{
			}
			iterator::operator*(); // 646
		}
		CKV3BinaryLoadContextV2::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 362
		CKV3BinaryLoadContextV2::GetUint32Value(); // 603
		CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
								const unsigned char ** ppGet,
								const unsigned char* pEnd);  // 357
		CKV3BinaryLoadContextV2::GetControl(); // 403
		CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
								const unsigned char ** ppGet,
								const unsigned char* pEnd);  // 357
		CKV3BinaryLoadContextV2::GetControl(); // 406
		CKV3BinaryLoadContextV2::ReadTypeAndFlags(
				KeyValues3Flag_t& nFlags);  // 608
		GetKV3TypeForBinaryType(KeyValues3BinaryType_t nBinaryType); // 644
		SetValueExternalInt32Array(KeyValues3* pTarget,
						int nValues,
						const int32* pValues);  // 637
		SetValueExternalDoubleArray(KeyValues3* pTarget,
						int nFloatsInArray,
						const double* pValues);  // 624
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 493
	CKV3BinaryLoadContextV2::LoadPODValue<18>(
			KeyValues3* pTarget);  // 532
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 433
	CKV3BinaryLoadContextV2::LoadPODValue<1>(
			KeyValues3* pTarget);  // 520
	CKV3BinaryLoadContextV2::GetValue<signed char, unsigned char const>(
							const unsigned char ** ppGet,
							const unsigned char* pEnd);  // 360
	CKV3BinaryLoadContextV2::GetInt8Value(); // 448
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 448
	CKV3BinaryLoadContextV2::LoadPODValue<2>(
			KeyValues3* pTarget);  // 521
	CKV3BinaryLoadContextV2::GetValue<int, unsigned int const>(
						const unsigned int ** ppGet,
						const unsigned int* pEnd);  // 363
	CKV3BinaryLoadContextV2::GetInt32Value(); // 473
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 473
	CKV3BinaryLoadContextV2::LoadPODValue<11>(
			KeyValues3* pTarget);  // 528
	CKV3BinaryLoadContextV2::GetValue<unsigned int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 362
	CKV3BinaryLoadContextV2::GetUint32Value(); // 478
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 478
	CKV3BinaryLoadContextV2::LoadPODValue<12>(
			KeyValues3* pTarget);  // 529
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 438
	CKV3BinaryLoadContextV2::LoadPODValue<13>(
			KeyValues3* pTarget);  // 522
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 443
	CKV3BinaryLoadContextV2::LoadPODValue<14>(
			KeyValues3* pTarget);  // 523
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 458
	CKV3BinaryLoadContextV2::LoadPODValue<16>(
			KeyValues3* pTarget);  // 525
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 453
	CKV3BinaryLoadContextV2::LoadPODValue<15>(
			KeyValues3* pTarget);  // 524
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 488
	CKV3BinaryLoadContextV2::LoadPODValue<17>(
			KeyValues3* pTarget);  // 531
	{
		int32 nString; // 498
		CKV3BinaryLoadContextV2::GetValue<int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 363
		CKV3BinaryLoadContextV2::GetInt32Value(); // 498
		CUtlVectorBase<char const::IsValidIndex(
				int i);  // 372
		CUtlMemory<char const::operator[](
				int i);  // 588
		CUtlVectorBase<char const::operator[](
				int i);  // 374
		CKV3BinaryLoadContextV2::String(
			int nIndex);  // 501
		AimAtExternalString(KeyValues3* pTarget,
					const char* pString);  // 501
		CUtlVectorBase<char const::IsValidIndex(
				int i);  // 372
		CUtlMemory<char const::operator[](
				int i);  // 588
		CUtlVectorBase<char const::operator[](
				int i);  // 374
		CKV3BinaryLoadContextV2::String(
			int nIndex);  // 505
	}
	CKV3BinaryLoadContextV2::LoadPODValue<6>(
			KeyValues3* pTarget);  // 533
	CKV3BinaryLoadContextV2::GetValue<long long unsigned int, long long unsigned int const>(
									const long long unsigned int ** ppGet,
									const long long unsigned int* pEnd);  // 366
	CKV3BinaryLoadContextV2::GetUint64Value(); // 468
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 468
	CKV3BinaryLoadContextV2::LoadPODValue<4>(
			KeyValues3* pTarget);  // 527
	CKV3BinaryLoadContextV2::GetValue<double, long long unsigned int const>(
							const long long unsigned int ** ppGet,
							const long long unsigned int* pEnd);  // 368
	CKV3BinaryLoadContextV2::GetDoubleValue(); // 483
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 483
	CKV3BinaryLoadContextV2::LoadPODValue<5>(
			KeyValues3* pTarget);  // 530
	CKV3BinaryLoadContextV2::GetValue<long long int, long long unsigned int const>(
								const long long unsigned int ** ppGet,
								const long long unsigned int* pEnd);  // 367
	CKV3BinaryLoadContextV2::GetInt64Value(); // 463
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 463
	CKV3BinaryLoadContextV2::LoadPODValue<3>(
			KeyValues3* pTarget);  // 526
	CUtlVectorBase<std::pair<unsigned char::Count(); // 537
	CUtlMemory<std::pair<unsigned char::operator[](
			int i);  // 588
	CUtlVectorBase<std::pair<unsigned char::operator[](
			int i);  // 547
	TakeOwnershipOfBinaryBlob(KeyValues3* pTarget,
					byte* pData,
					int nSize);  // 544
	CUtlMemory<std::pair<unsigned char::operator[](
			int i);  // 588
	CUtlVectorBase<std::pair<unsigned char::operator[](
			int i);  // 551
} /* size: 2907, variables: 1, inline expansions: 71 (3127 bytes) */

// <00AEC125> kv3lib/keyvalues3_binaryreader_v2.cpp:516
// variables: 21
// function calls: 148
void CKV3BinaryLoadContextV2::LoadValue(KeyValues3BinaryType_t nBinaryType, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 21651
	{
		const uint  nMemberCount; // 561
		{
			uint i; // 564
			{
				const uint  nMemberName; // 566
				KeyValues3* pMember; // 568
				CKV3MemberName memberName; // 569
				CKV3BinaryLoadContextV2::GetValue<unsigned int, unsigned int const>(
										const unsigned int ** ppGet,
										const unsigned int* pEnd);  // 362
				CKV3BinaryLoadContextV2::GetUint32Value(); // 566
				CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::IsValidIndex(
						int i);  // 384
				{
					KeyValues3LowercaseHash_t nHash; // 386
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::operator[](
							int i);  // 386
					CUtlStringToken::IsValid(); // 387
					CUtlMemory<char const::operator[](
							int i);  // 588
					CUtlVectorBase<char const::operator[](
							int i);  // 393
					CKV3MemberName::CKV3MemberName(
							const char* pString,
							KeyValues3LowercaseHash_t nHash);  // 393
					CUtlMemory<char const::operator[](
							int i);  // 588
					CUtlVectorBase<char const::operator[](
							int i);  // 389
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 151
					KV3MakeLowerHash(const char* pStr); // 389
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::operator[](
							int i);  // 390
				}
				CUtlStringToken::CUtlStringToken(); // 8
				CKV3MemberName::CKV3MemberName(); // 397
				CKV3BinaryLoadContextV2::MemberName(
						int nIndex);  // 569
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 40
				FindOrCreateMemberAimedAtExternalName(KeyValues3* pTarget,
									CKV3MemberName memberNameAndHash);  // 573
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 573
				CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 357
				CKV3BinaryLoadContextV2::GetControl(); // 403
				CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 357
				CKV3BinaryLoadContextV2::GetControl(); // 406
				CKV3BinaryLoadContextV2::ReadTypeAndFlags(
						KeyValues3Flag_t& nFlags);  // 419
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 421
				CKV3BinaryLoadContextV2::LoadTypeAndValue(
						KeyValues3* pTarget);  // 580
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 577
			}
		}
		CKV3BinaryLoadContextV2::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 362
		CKV3BinaryLoadContextV2::GetUint32Value(); // 561
	}
	{
		const int  nCount; // 588
		{
			int i; // 591
			{
				KeyValues3* pElement; // 593
				CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 357
				CKV3BinaryLoadContextV2::GetControl(); // 403
				CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 357
				CKV3BinaryLoadContextV2::GetControl(); // 406
				CKV3BinaryLoadContextV2::ReadTypeAndFlags(
						KeyValues3Flag_t& nFlags);  // 419
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 421
				CKV3BinaryLoadContextV2::LoadTypeAndValue(
						KeyValues3* pTarget);  // 594
			}
		}
		CKV3BinaryLoadContextV2::GetValue<int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 363
		CKV3BinaryLoadContextV2::GetInt32Value(); // 588
	}
	{
		uint nCount; // 603
		KeyValues3Flag_t nElementFlags; // 607
		KeyValues3BinaryType_t nArrayType; // 608
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 604
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 623
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 636
		}
		{
			KeyValues3* pElement; // 646
			CKV3ArrayIteratorView<false>& __for_range; // 10070
			iterator __for_begin; // 63796
			iterator __for_end; // 63796
			{
				KeyValues3::Internal_Type(); // 90
				KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
				KeyValues3::GetType(); // 74
				KeyValues3::GetType(); // 74
			}
			{
			}
			CKV3ArrayIteratorView<false>::CKV3ArrayIteratorView(
						KV3Pointer_t pKV3);  // 67
			CKV3ArrayIteratorView<false>::CKV3ArrayIteratorView(
						KV3Pointer_t pKV3);  // 921
			KeyValues3::IterateArray(); // 646
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<false>::begin(); // 646
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<false>::end(); // 646
			iterator::operator!=(
					const iterator& rhs);  // 646
			KeyValues3::SetAllFlags(
					KeyValues3Flag_t nFlag);  // 649
			{
			}
			iterator::operator*(); // 646
		}
		CKV3BinaryLoadContextV2::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 362
		CKV3BinaryLoadContextV2::GetUint32Value(); // 603
		CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
								const unsigned char ** ppGet,
								const unsigned char* pEnd);  // 357
		CKV3BinaryLoadContextV2::GetControl(); // 403
		CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
								const unsigned char ** ppGet,
								const unsigned char* pEnd);  // 357
		CKV3BinaryLoadContextV2::GetControl(); // 406
		CKV3BinaryLoadContextV2::ReadTypeAndFlags(
				KeyValues3Flag_t& nFlags);  // 608
		GetKV3TypeForBinaryType(KeyValues3BinaryType_t nBinaryType); // 644
		SetValueExternalInt32Array(KeyValues3* pTarget,
						int nValues,
						const int32* pValues);  // 637
		SetValueExternalDoubleArray(KeyValues3* pTarget,
						int nFloatsInArray,
						const double* pValues);  // 624
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 493
	CKV3BinaryLoadContextV2::LoadPODValue<18>(
			KeyValues3* pTarget);  // 532
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 433
	CKV3BinaryLoadContextV2::LoadPODValue<1>(
			KeyValues3* pTarget);  // 520
	CKV3BinaryLoadContextV2::GetValue<signed char, unsigned char const>(
							const unsigned char ** ppGet,
							const unsigned char* pEnd);  // 360
	CKV3BinaryLoadContextV2::GetInt8Value(); // 448
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 448
	CKV3BinaryLoadContextV2::LoadPODValue<2>(
			KeyValues3* pTarget);  // 521
	CKV3BinaryLoadContextV2::GetValue<int, unsigned int const>(
						const unsigned int ** ppGet,
						const unsigned int* pEnd);  // 363
	CKV3BinaryLoadContextV2::GetInt32Value(); // 473
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 473
	CKV3BinaryLoadContextV2::LoadPODValue<11>(
			KeyValues3* pTarget);  // 528
	CKV3BinaryLoadContextV2::GetValue<unsigned int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 362
	CKV3BinaryLoadContextV2::GetUint32Value(); // 478
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 478
	CKV3BinaryLoadContextV2::LoadPODValue<12>(
			KeyValues3* pTarget);  // 529
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 438
	CKV3BinaryLoadContextV2::LoadPODValue<13>(
			KeyValues3* pTarget);  // 522
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 443
	CKV3BinaryLoadContextV2::LoadPODValue<14>(
			KeyValues3* pTarget);  // 523
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 458
	CKV3BinaryLoadContextV2::LoadPODValue<16>(
			KeyValues3* pTarget);  // 525
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 453
	CKV3BinaryLoadContextV2::LoadPODValue<15>(
			KeyValues3* pTarget);  // 524
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 488
	CKV3BinaryLoadContextV2::LoadPODValue<17>(
			KeyValues3* pTarget);  // 531
	{
		int32 nString; // 498
		CKV3BinaryLoadContextV2::GetValue<int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 363
		CKV3BinaryLoadContextV2::GetInt32Value(); // 498
		CUtlVectorBase<char const::IsValidIndex(
				int i);  // 372
		CUtlMemory<char const::operator[](
				int i);  // 588
		CUtlVectorBase<char const::operator[](
				int i);  // 374
		CKV3BinaryLoadContextV2::String(
			int nIndex);  // 501
		AimAtExternalString(KeyValues3* pTarget,
					const char* pString);  // 501
		CUtlVectorBase<char const::IsValidIndex(
				int i);  // 372
		CUtlMemory<char const::operator[](
				int i);  // 588
		CUtlVectorBase<char const::operator[](
				int i);  // 374
		CKV3BinaryLoadContextV2::String(
			int nIndex);  // 505
	}
	CKV3BinaryLoadContextV2::LoadPODValue<6>(
			KeyValues3* pTarget);  // 533
	CKV3BinaryLoadContextV2::GetValue<long long unsigned int, long long unsigned int const>(
									const long long unsigned int ** ppGet,
									const long long unsigned int* pEnd);  // 366
	CKV3BinaryLoadContextV2::GetUint64Value(); // 468
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 468
	CKV3BinaryLoadContextV2::LoadPODValue<4>(
			KeyValues3* pTarget);  // 527
	CKV3BinaryLoadContextV2::GetValue<double, long long unsigned int const>(
							const long long unsigned int ** ppGet,
							const long long unsigned int* pEnd);  // 368
	CKV3BinaryLoadContextV2::GetDoubleValue(); // 483
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 483
	CKV3BinaryLoadContextV2::LoadPODValue<5>(
			KeyValues3* pTarget);  // 530
	CKV3BinaryLoadContextV2::GetValue<long long int, long long unsigned int const>(
								const long long unsigned int ** ppGet,
								const long long unsigned int* pEnd);  // 367
	CKV3BinaryLoadContextV2::GetInt64Value(); // 463
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 463
	CKV3BinaryLoadContextV2::LoadPODValue<3>(
			KeyValues3* pTarget);  // 526
	CUtlVectorBase<std::pair<unsigned char::Count(); // 537
	CUtlMemory<std::pair<unsigned char::operator[](
			int i);  // 588
	CUtlVectorBase<std::pair<unsigned char::operator[](
			int i);  // 547
	TakeOwnershipOfBinaryBlob(KeyValues3* pTarget,
					byte* pData,
					int nSize);  // 544
	CUtlMemory<std::pair<unsigned char::operator[](
			int i);  // 588
	CUtlVectorBase<std::pair<unsigned char::operator[](
			int i);  // 551
} /* size: 2907, variables: 1, inline expansions: 71 (3127 bytes) */

// <001F8CA6> kv3lib/keyvalues3_binaryreader_v2.cpp:516
// variables: 21
// function calls: 148
void CKV3BinaryLoadContextV2::LoadValue(KeyValues3BinaryType_t nBinaryType, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 14148
	{
		const uint  nMemberCount; // 561
		{
			uint i; // 564
			{
				const uint  nMemberName; // 566
				KeyValues3* pMember; // 568
				CKV3MemberName memberName; // 569
				CKV3BinaryLoadContextV2::GetValue<unsigned int, unsigned int const>(
										const unsigned int ** ppGet,
										const unsigned int* pEnd);  // 362
				CKV3BinaryLoadContextV2::GetUint32Value(); // 566
				CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::IsValidIndex(
						int i);  // 384
				{
					KeyValues3LowercaseHash_t nHash; // 386
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::operator[](
							int i);  // 386
					CUtlStringToken::IsValid(); // 387
					CUtlMemory<char const::operator[](
							int i);  // 588
					CUtlVectorBase<char const::operator[](
							int i);  // 393
					CKV3MemberName::CKV3MemberName(
							const char* pString,
							KeyValues3LowercaseHash_t nHash);  // 393
					CUtlMemory<char const::operator[](
							int i);  // 588
					CUtlVectorBase<char const::operator[](
							int i);  // 389
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 151
					KV3MakeLowerHash(const char* pStr); // 389
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::operator[](
							int i);  // 390
				}
				CUtlStringToken::CUtlStringToken(); // 8
				CKV3MemberName::CKV3MemberName(); // 397
				CKV3BinaryLoadContextV2::MemberName(
						int nIndex);  // 569
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 40
				FindOrCreateMemberAimedAtExternalName(KeyValues3* pTarget,
									CKV3MemberName memberNameAndHash);  // 573
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 573
				CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 357
				CKV3BinaryLoadContextV2::GetControl(); // 403
				CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 357
				CKV3BinaryLoadContextV2::GetControl(); // 406
				CKV3BinaryLoadContextV2::ReadTypeAndFlags(
						KeyValues3Flag_t& nFlags);  // 419
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 421
				CKV3BinaryLoadContextV2::LoadTypeAndValue(
						KeyValues3* pTarget);  // 580
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 577
			}
		}
		CKV3BinaryLoadContextV2::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 362
		CKV3BinaryLoadContextV2::GetUint32Value(); // 561
	}
	{
		const int  nCount; // 588
		{
			int i; // 591
			{
				KeyValues3* pElement; // 593
				CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 357
				CKV3BinaryLoadContextV2::GetControl(); // 403
				CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 357
				CKV3BinaryLoadContextV2::GetControl(); // 406
				CKV3BinaryLoadContextV2::ReadTypeAndFlags(
						KeyValues3Flag_t& nFlags);  // 419
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 421
				CKV3BinaryLoadContextV2::LoadTypeAndValue(
						KeyValues3* pTarget);  // 594
			}
		}
		CKV3BinaryLoadContextV2::GetValue<int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 363
		CKV3BinaryLoadContextV2::GetInt32Value(); // 588
	}
	{
		uint nCount; // 603
		KeyValues3Flag_t nElementFlags; // 607
		KeyValues3BinaryType_t nArrayType; // 608
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 604
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 623
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 636
		}
		{
			KeyValues3* pElement; // 646
			CKV3ArrayIteratorView<false>& __for_range; // 2567
			iterator __for_begin; // 56293
			iterator __for_end; // 56293
			{
				KeyValues3::Internal_Type(); // 90
				KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
				KeyValues3::GetType(); // 74
				KeyValues3::GetType(); // 74
			}
			{
			}
			CKV3ArrayIteratorView<false>::CKV3ArrayIteratorView(
						KV3Pointer_t pKV3);  // 67
			CKV3ArrayIteratorView<false>::CKV3ArrayIteratorView(
						KV3Pointer_t pKV3);  // 921
			KeyValues3::IterateArray(); // 646
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<false>::begin(); // 646
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<false>::end(); // 646
			iterator::operator!=(
					const iterator& rhs);  // 646
			KeyValues3::SetAllFlags(
					KeyValues3Flag_t nFlag);  // 649
			{
			}
			iterator::operator*(); // 646
		}
		CKV3BinaryLoadContextV2::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 362
		CKV3BinaryLoadContextV2::GetUint32Value(); // 603
		CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
								const unsigned char ** ppGet,
								const unsigned char* pEnd);  // 357
		CKV3BinaryLoadContextV2::GetControl(); // 403
		CKV3BinaryLoadContextV2::GetValue<unsigned char, unsigned char const>(
								const unsigned char ** ppGet,
								const unsigned char* pEnd);  // 357
		CKV3BinaryLoadContextV2::GetControl(); // 406
		CKV3BinaryLoadContextV2::ReadTypeAndFlags(
				KeyValues3Flag_t& nFlags);  // 608
		GetKV3TypeForBinaryType(KeyValues3BinaryType_t nBinaryType); // 644
		SetValueExternalInt32Array(KeyValues3* pTarget,
						int nValues,
						const int32* pValues);  // 637
		SetValueExternalDoubleArray(KeyValues3* pTarget,
						int nFloatsInArray,
						const double* pValues);  // 624
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 493
	CKV3BinaryLoadContextV2::LoadPODValue<18>(
			KeyValues3* pTarget);  // 532
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 433
	CKV3BinaryLoadContextV2::LoadPODValue<1>(
			KeyValues3* pTarget);  // 520
	CKV3BinaryLoadContextV2::GetValue<signed char, unsigned char const>(
							const unsigned char ** ppGet,
							const unsigned char* pEnd);  // 360
	CKV3BinaryLoadContextV2::GetInt8Value(); // 448
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 448
	CKV3BinaryLoadContextV2::LoadPODValue<2>(
			KeyValues3* pTarget);  // 521
	CKV3BinaryLoadContextV2::GetValue<int, unsigned int const>(
						const unsigned int ** ppGet,
						const unsigned int* pEnd);  // 363
	CKV3BinaryLoadContextV2::GetInt32Value(); // 473
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 473
	CKV3BinaryLoadContextV2::LoadPODValue<11>(
			KeyValues3* pTarget);  // 528
	CKV3BinaryLoadContextV2::GetValue<unsigned int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 362
	CKV3BinaryLoadContextV2::GetUint32Value(); // 478
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 478
	CKV3BinaryLoadContextV2::LoadPODValue<12>(
			KeyValues3* pTarget);  // 529
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 438
	CKV3BinaryLoadContextV2::LoadPODValue<13>(
			KeyValues3* pTarget);  // 522
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 443
	CKV3BinaryLoadContextV2::LoadPODValue<14>(
			KeyValues3* pTarget);  // 523
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 458
	CKV3BinaryLoadContextV2::LoadPODValue<16>(
			KeyValues3* pTarget);  // 525
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 453
	CKV3BinaryLoadContextV2::LoadPODValue<15>(
			KeyValues3* pTarget);  // 524
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 488
	CKV3BinaryLoadContextV2::LoadPODValue<17>(
			KeyValues3* pTarget);  // 531
	{
		int32 nString; // 498
		CKV3BinaryLoadContextV2::GetValue<int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 363
		CKV3BinaryLoadContextV2::GetInt32Value(); // 498
		CUtlVectorBase<char const::IsValidIndex(
				int i);  // 372
		CUtlMemory<char const::operator[](
				int i);  // 588
		CUtlVectorBase<char const::operator[](
				int i);  // 374
		CKV3BinaryLoadContextV2::String(
			int nIndex);  // 501
		AimAtExternalString(KeyValues3* pTarget,
					const char* pString);  // 501
		CUtlVectorBase<char const::IsValidIndex(
				int i);  // 372
		CUtlMemory<char const::operator[](
				int i);  // 588
		CUtlVectorBase<char const::operator[](
				int i);  // 374
		CKV3BinaryLoadContextV2::String(
			int nIndex);  // 505
	}
	CKV3BinaryLoadContextV2::LoadPODValue<6>(
			KeyValues3* pTarget);  // 533
	CKV3BinaryLoadContextV2::GetValue<long long unsigned int, long long unsigned int const>(
									const long long unsigned int ** ppGet,
									const long long unsigned int* pEnd);  // 366
	CKV3BinaryLoadContextV2::GetUint64Value(); // 468
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 468
	CKV3BinaryLoadContextV2::LoadPODValue<4>(
			KeyValues3* pTarget);  // 527
	CKV3BinaryLoadContextV2::GetValue<double, long long unsigned int const>(
							const long long unsigned int ** ppGet,
							const long long unsigned int* pEnd);  // 368
	CKV3BinaryLoadContextV2::GetDoubleValue(); // 483
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 483
	CKV3BinaryLoadContextV2::LoadPODValue<5>(
			KeyValues3* pTarget);  // 530
	CKV3BinaryLoadContextV2::GetValue<long long int, long long unsigned int const>(
								const long long unsigned int ** ppGet,
								const long long unsigned int* pEnd);  // 367
	CKV3BinaryLoadContextV2::GetInt64Value(); // 463
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 463
	CKV3BinaryLoadContextV2::LoadPODValue<3>(
			KeyValues3* pTarget);  // 526
	CUtlVectorBase<std::pair<unsigned char::Count(); // 537
	CUtlMemory<std::pair<unsigned char::operator[](
			int i);  // 588
	CUtlVectorBase<std::pair<unsigned char::operator[](
			int i);  // 547
	TakeOwnershipOfBinaryBlob(KeyValues3* pTarget,
					byte* pData,
					int nSize);  // 544
	CUtlMemory<std::pair<unsigned char::operator[](
			int i);  // 588
	CUtlVectorBase<std::pair<unsigned char::operator[](
			int i);  // 551
} /* size: 0, variables: 1, inline expansions: 71 (0 bytes) */

