
//
// kv3lib/keyvalues3_binaryreader_v1.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 91
//	struct: 1
//

// <05648EA8> kv3lib/keyvalues3_binaryreader_v1.cpp:25
KeyValues3Type_t GetKV3TypeForBinaryType(KeyValues3BinaryType_t nBinaryType)
{
} /* size: 0 */

// <05646439> kv3lib/keyvalues3_binaryreader_v1.cpp:74
void KV3BinaryLoadContextV1_t::~KV3BinaryLoadContextV1_t()
{
} /* size: 0 */

// <0564641D> kv3lib/keyvalues3_binaryreader_v1.cpp:74
inline void KV3BinaryLoadContextV1_t::~KV3BinaryLoadContextV1_t()
{
} /* size: 0 */

// <056412BE> kv3lib/keyvalues3_binaryreader_v1.cpp:74
// member functions: 40
// member variables: 16
// struct size: 3,240
struct KV3BinaryLoadContextV1_t {
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:76 */
	void KV3BinaryLoadContextV1_t(KV3BinaryLoadContextV1_t* , KeyValues3* , CUtlString* , CUtlBuffer* , KeyValues3BinaryHeaderV1_t* );
	bool m_bRelyOnBufferForStorage; /* 0 1 */
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:116 */
	bool HasError(const KV3BinaryLoadContextV1_t* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:121 */
	bool Load(KV3BinaryLoadContextV1_t* );
private:
	bool m_bError; /* 1 1 */
	const class KeyValues3 * m_pTarget; /* 8 8 */
	const class CUtlString * m_pOutErrorMessage; /* 16 8 */
	const class CUtlBuffer * m_pSrcBuffer; /* 24 8 */
	const class KeyValues3BinaryHeaderV1_t * m_pHeader; /* 32 8 */
	const uint8 * m_pControlBuffer; /* 40 8 */
	const uint8 * m_pControlBufferEnd; /* 48 8 */
	const uint8 * m_p1ByteValues; /* 56 8 */
	const uint8 * m_p1ByteValuesEnd; /* 64 8 */
	const uint32 * m_p4ByteValues; /* 72 8 */
	const uint32 * m_p4ByteValuesEnd; /* 80 8 */
	const uint64 * m_p8ByteValues; /* 88 8 */
	const uint64 * m_p8ByteValuesEnd; /* 96 8 */
	CUtlVectorFixedGrowable<CUtlStringToken, 256> m_stringHashes __attribute__((__aligned__(8))); /* 104 1056 */
	CUtlVectorFixedGrowable<char const*, 256> m_stringPtrs __attribute__((__aligned__(8))); /* 1160 2080 */
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:152 */
	void LoadStringTable(KV3BinaryLoadContextV1_t* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:192 */
	uint8 GetControl(KV3BinaryLoadContextV1_t* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:194 */
	uint8 GetUint8Value(KV3BinaryLoadContextV1_t* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:195 */
	int8 GetInt8Value(KV3BinaryLoadContextV1_t* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:197 */
	uint32 GetUint32Value(KV3BinaryLoadContextV1_t* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:198 */
	int32 GetInt32Value(KV3BinaryLoadContextV1_t* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:199 */
	float GetFloatValue(KV3BinaryLoadContextV1_t* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:201 */
	uint64 GetUint64Value(KV3BinaryLoadContextV1_t* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:202 */
	int64 GetInt64Value(KV3BinaryLoadContextV1_t* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:203 */
	double GetDoubleValue(KV3BinaryLoadContextV1_t* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:205 */
	const char* String(KV3BinaryLoadContextV1_t* , int);
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:217 */
	CKV3MemberName MemberName(KV3BinaryLoadContextV1_t* , int);
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:236 */
	KeyValues3BinaryType_t ReadTypeAndFlags(KV3BinaryLoadContextV1_t* , KeyValues3Flag_t& );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:251 */
	void LoadTypeAndValue(KV3BinaryLoadContextV1_t* , KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:351 */
	void LoadValue(KV3BinaryLoadContextV1_t* , KeyValues3BinaryType_t, KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:262 */
	void LoadPODValue<6>(KV3BinaryLoadContextV1_t* , KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:262 */
	void LoadPODValue<18>(KV3BinaryLoadContextV1_t* , KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:262 */
	void LoadPODValue<17>(KV3BinaryLoadContextV1_t* , KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:262 */
	void LoadPODValue<5>(KV3BinaryLoadContextV1_t* , KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:262 */
	void LoadPODValue<12>(KV3BinaryLoadContextV1_t* , KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:262 */
	void LoadPODValue<11>(KV3BinaryLoadContextV1_t* , KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:262 */
	void LoadPODValue<4>(KV3BinaryLoadContextV1_t* , KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:262 */
	void LoadPODValue<3>(KV3BinaryLoadContextV1_t* , KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:262 */
	void LoadPODValue<16>(KV3BinaryLoadContextV1_t* , KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:262 */
	void LoadPODValue<15>(KV3BinaryLoadContextV1_t* , KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:262 */
	void LoadPODValue<14>(KV3BinaryLoadContextV1_t* , KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:262 */
	void LoadPODValue<13>(KV3BinaryLoadContextV1_t* , KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:262 */
	void LoadPODValue<2>(KV3BinaryLoadContextV1_t* , KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:262 */
	void LoadPODValue<1>(KV3BinaryLoadContextV1_t* , KeyValues3* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:172 */
	double GetValue<double, long long unsigned int const>(KV3BinaryLoadContextV1_t* , const long long unsigned int** , const long long unsigned int* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:172 */
	long long int GetValue<long long int, long long unsigned int const>(KV3BinaryLoadContextV1_t* , const long long unsigned int** , const long long unsigned int* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:172 */
	long long unsigned int GetValue<long long unsigned int, long long unsigned int const>(KV3BinaryLoadContextV1_t* , const long long unsigned int** , const long long unsigned int* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:172 */
	int GetValue<int, unsigned int const>(KV3BinaryLoadContextV1_t* , const unsigned int** , const unsigned int* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:172 */
	unsigned int GetValue<unsigned int, unsigned int const>(KV3BinaryLoadContextV1_t* , const unsigned int** , const unsigned int* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:172 */
	signed char GetValue<signed char, unsigned char const>(KV3BinaryLoadContextV1_t* , const unsigned char** , const unsigned char* );
	/* kv3lib/keyvalues3_binaryreader_v1.cpp:172 */
	unsigned char GetValue<unsigned char, unsigned char const>(KV3BinaryLoadContextV1_t* , const unsigned char** , const unsigned char* );
	void ~KV3BinaryLoadContextV1_t(KV3BinaryLoadContextV1_t* );
} __attribute__((__aligned__(8)));

// <05648DF3> kv3lib/keyvalues3_binaryreader_v1.cpp:76
// variables: 2
void KV3BinaryLoadContextV1_t::KV3BinaryLoadContextV1_t(KeyValues3* pRoot, CUtlString* pOutErrorMessage, CUtlBuffer* pBuffer, KeyValues3BinaryHeaderV1_t* pHeader)
{
	{
		{
			uint8* pSrcData; // 84
			uint srcDataSize; // 85
			{
			}
			{
			}
			{
			}
		}
	}
} /* size: 0 */

// <05648D39> kv3lib/keyvalues3_binaryreader_v1.cpp:76
// variables: 6
inline void KV3BinaryLoadContextV1_t::KV3BinaryLoadContextV1_t(KeyValues3* pRoot, CUtlString* pOutErrorMessage, CUtlBuffer* pBuffer, KeyValues3BinaryHeaderV1_t* pHeader)
{
	const char   __FUNCTION__; // 42389
	{
		uint8* pSrcData; // 84
		uint srcDataSize; // 85
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 86
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 93
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 97
		}
	}
} /* size: 0, variables: 1 */

// <029C0733> kv3lib/keyvalues3_binaryreader_v1.cpp:76
// variables: 6
inline void KV3BinaryLoadContextV1_t::KV3BinaryLoadContextV1_t(KeyValues3* pRoot, CUtlString* pOutErrorMessage, CUtlBuffer* pBuffer, KeyValues3BinaryHeaderV1_t* pHeader)
{
	const char   __FUNCTION__; // 61060
	{
		uint8* pSrcData; // 84
		uint srcDataSize; // 85
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 86
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 93
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 97
		}
	}
} /* size: 0, variables: 1 */

// <013102E8> kv3lib/keyvalues3_binaryreader_v1.cpp:76
// variables: 6
inline void KV3BinaryLoadContextV1_t::KV3BinaryLoadContextV1_t(KeyValues3* pRoot, CUtlString* pOutErrorMessage, CUtlBuffer* pBuffer, KeyValues3BinaryHeaderV1_t* pHeader)
{
	const char   __FUNCTION__; // 503
	{
		uint8* pSrcData; // 84
		uint srcDataSize; // 85
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 86
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 93
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 97
		}
	}
} /* size: 0, variables: 1 */

// <0038BAAD> kv3lib/keyvalues3_binaryreader_v1.cpp:76
// variables: 6
inline void KV3BinaryLoadContextV1_t::KV3BinaryLoadContextV1_t(KeyValues3* pRoot, CUtlString* pOutErrorMessage, CUtlBuffer* pBuffer, KeyValues3BinaryHeaderV1_t* pHeader)
{
	const char   __FUNCTION__; // 52206
	{
		uint8* pSrcData; // 84
		uint srcDataSize; // 85
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 86
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 93
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 97
		}
	}
} /* size: 0, variables: 1 */

// <006F0CAF> kv3lib/keyvalues3_binaryreader_v1.cpp:76
// variables: 6
inline void KV3BinaryLoadContextV1_t::KV3BinaryLoadContextV1_t(KeyValues3* pRoot, CUtlString* pOutErrorMessage, CUtlBuffer* pBuffer, KeyValues3BinaryHeaderV1_t* pHeader)
{
	const char   __FUNCTION__; // 12656
	{
		uint8* pSrcData; // 84
		uint srcDataSize; // 85
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 86
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 93
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 97
		}
	}
} /* size: 0, variables: 1 */

// <00AC8936> kv3lib/keyvalues3_binaryreader_v1.cpp:76
// variables: 6
inline void KV3BinaryLoadContextV1_t::KV3BinaryLoadContextV1_t(KeyValues3* pRoot, CUtlString* pOutErrorMessage, CUtlBuffer* pBuffer, KeyValues3BinaryHeaderV1_t* pHeader)
{
	const char   __FUNCTION__; // 18807
	{
		uint8* pSrcData; // 84
		uint srcDataSize; // 85
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 86
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 93
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 97
		}
	}
} /* size: 0, variables: 1 */

// <001D54B7> kv3lib/keyvalues3_binaryreader_v1.cpp:76
// variables: 6
inline void KV3BinaryLoadContextV1_t::KV3BinaryLoadContextV1_t(KeyValues3* pRoot, CUtlString* pOutErrorMessage, CUtlBuffer* pBuffer, KeyValues3BinaryHeaderV1_t* pHeader)
{
	const char   __FUNCTION__; // 11304
	{
		uint8* pSrcData; // 84
		uint srcDataSize; // 85
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 86
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 93
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 97
		}
	}
} /* size: 0, variables: 1 */

// <05648D20> kv3lib/keyvalues3_binaryreader_v1.cpp:116
inline void KV3BinaryLoadContextV1_t::HasError()
{
} /* size: 0 */

// <05648D07> kv3lib/keyvalues3_binaryreader_v1.cpp:121
inline void KV3BinaryLoadContextV1_t::Load()
{
} /* size: 0 */

// <05648CBC> kv3lib/keyvalues3_binaryreader_v1.cpp:152
// variables: 4
inline void KV3BinaryLoadContextV1_t::LoadStringTable()
{
	int nNumStrings; // 154
	{
		int i; // 158
		{
			const char* pStr; // 160
			const uint  nLength; // 161
		}
	}
} /* size: 0, variables: 1 */

// <05643943> kv3lib/keyvalues3_binaryreader_v1.cpp:172
// variables: 2
inline void GetValue<unsigned char, unsigned char KV3BinaryLoadContextV1_t::const>(const unsigned char ** ppGet, const unsigned char* pEnd)
{
	const unsigned char* pGet; // 177
	unsigned char value; // 178
} /* size: 0, variables: 2 */

// <056438EC> kv3lib/keyvalues3_binaryreader_v1.cpp:172
// variables: 2
inline void GetValue<signed char, unsigned char KV3BinaryLoadContextV1_t::const>(const unsigned char ** ppGet, const unsigned char* pEnd)
{
	const unsigned char* pGet; // 177
	signed char value; // 178
} /* size: 0, variables: 2 */

// <0564388F> kv3lib/keyvalues3_binaryreader_v1.cpp:172
// variables: 2
inline void GetValue<unsigned int, unsigned int KV3BinaryLoadContextV1_t::const>(const unsigned int ** ppGet, const unsigned int* pEnd)
{
	const unsigned int* pGet; // 177
	unsigned int value; // 178
} /* size: 0, variables: 2 */

// <05643838> kv3lib/keyvalues3_binaryreader_v1.cpp:172
// variables: 2
inline void GetValue<int, unsigned int KV3BinaryLoadContextV1_t::const>(const unsigned int ** ppGet, const unsigned int* pEnd)
{
	const unsigned int* pGet; // 177
	int value; // 178
} /* size: 0, variables: 2 */

// <056437D5> kv3lib/keyvalues3_binaryreader_v1.cpp:172
// variables: 2
inline void GetValue<long long unsigned int, long long unsigned int KV3BinaryLoadContextV1_t::const>(const long long unsigned int ** ppGet, const long long unsigned int* pEnd)
{
	const long long unsigned int* pGet; // 177
	long long unsigned int value; // 178
} /* size: 0, variables: 2 */

// <0564377E> kv3lib/keyvalues3_binaryreader_v1.cpp:172
// variables: 2
inline void GetValue<long long int, long long unsigned int KV3BinaryLoadContextV1_t::const>(const long long unsigned int ** ppGet, const long long unsigned int* pEnd)
{
	const long long unsigned int* pGet; // 177
	long long int value; // 178
} /* size: 0, variables: 2 */

// <05643727> kv3lib/keyvalues3_binaryreader_v1.cpp:172
// variables: 2
inline void GetValue<double, long long unsigned int KV3BinaryLoadContextV1_t::const>(const long long unsigned int ** ppGet, const long long unsigned int* pEnd)
{
	const long long unsigned int* pGet; // 177
	double value; // 178
} /* size: 0, variables: 2 */

// <05648CA3> kv3lib/keyvalues3_binaryreader_v1.cpp:192
inline void KV3BinaryLoadContextV1_t::GetControl()
{
} /* size: 0 */

// <05648C8A> kv3lib/keyvalues3_binaryreader_v1.cpp:195
inline void KV3BinaryLoadContextV1_t::GetInt8Value()
{
} /* size: 0 */

// <05648C71> kv3lib/keyvalues3_binaryreader_v1.cpp:197
inline void KV3BinaryLoadContextV1_t::GetUint32Value()
{
} /* size: 0 */

// <05648C58> kv3lib/keyvalues3_binaryreader_v1.cpp:198
inline void KV3BinaryLoadContextV1_t::GetInt32Value()
{
} /* size: 0 */

// <05648C3F> kv3lib/keyvalues3_binaryreader_v1.cpp:201
inline void KV3BinaryLoadContextV1_t::GetUint64Value()
{
} /* size: 0 */

// <05648C26> kv3lib/keyvalues3_binaryreader_v1.cpp:202
inline void KV3BinaryLoadContextV1_t::GetInt64Value()
{
} /* size: 0 */

// <05648C0D> kv3lib/keyvalues3_binaryreader_v1.cpp:203
inline void KV3BinaryLoadContextV1_t::GetDoubleValue()
{
} /* size: 0 */

// <05648BE8> kv3lib/keyvalues3_binaryreader_v1.cpp:205
inline void KV3BinaryLoadContextV1_t::String(int nIndex)
{
} /* size: 0 */

// <05648BB5> kv3lib/keyvalues3_binaryreader_v1.cpp:217
// variable: 1
inline void KV3BinaryLoadContextV1_t::MemberName(int nIndex)
{
	{
		KeyValues3LowercaseHash_t nHash; // 221
	}
} /* size: 0 */

// <05648B84> kv3lib/keyvalues3_binaryreader_v1.cpp:236
// variable: 1
inline void KV3BinaryLoadContextV1_t::ReadTypeAndFlags(KeyValues3Flag_t& nFlags)
{
	byte nBinaryType; // 238
} /* size: 0, variables: 1 */

// <05648B47> kv3lib/keyvalues3_binaryreader_v1.cpp:251
// variables: 2
inline void KV3BinaryLoadContextV1_t::LoadTypeAndValue(KeyValues3* pTarget)
{
	KeyValues3Flag_t nFlags; // 253
	KeyValues3BinaryType_t nBinaryType; // 254
} /* size: 0, variables: 2 */

// <05643629> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<1>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 42110
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <056435C7> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<2>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 42110
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <05643565> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<13>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 42110
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <05643503> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<14>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 42110
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <056434A1> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<15>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 42110
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <0564343F> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<16>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 42110
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <056433DD> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<3>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 42110
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <0564337B> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<4>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 42110
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <05643319> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<11>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 42110
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <056432B7> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<12>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 42110
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <05643255> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<5>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 42110
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <056431F3> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<17>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 42110
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <05643191> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<18>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 42110
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <0564312F> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<6>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 42110
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <029BB023> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<1>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 60781
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <029BAFC1> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<2>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 60781
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <029BAF5F> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<13>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 60781
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <029BAEFD> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<14>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 60781
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <029BAE9B> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<15>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 60781
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <029BAE39> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<16>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 60781
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <029BADD7> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<3>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 60781
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <029BAD75> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<4>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 60781
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <029BAD13> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<11>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 60781
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <029BACB1> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<12>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 60781
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <029BAC4F> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<5>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 60781
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <029BABED> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<17>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 60781
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <029BAB8B> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<18>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 60781
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <029BAB29> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<6>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 60781
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <0130ABD8> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<1>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 224
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <0130AB76> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<2>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 224
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <0130AB14> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<13>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 224
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <0130AAB2> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<14>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 224
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <0130AA50> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<15>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 224
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <0130A9EE> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<16>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 224
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <0130A98C> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<3>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 224
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <0130A92A> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<4>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 224
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <0130A8C8> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<11>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 224
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <0130A866> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<12>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 224
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <0130A804> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<5>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 224
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <0130A7A2> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<17>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 224
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <0130A740> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<18>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 224
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <0130A6DE> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<6>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 224
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <00385FC9> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<5>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 51927
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <00385F67> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<17>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 51927
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <00385F05> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<18>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 51927
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <00385EA3> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<6>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 51927
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <006EB59F> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<1>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 12377
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <006EB53D> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<2>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 12377
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <006EB28F> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<11>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 12377
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <006EB22D> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<12>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 12377
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <001CF90F> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<18>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 11025
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <001CF8AD> kv3lib/keyvalues3_binaryreader_v1.cpp:262
// variables: 3
inline void KV3BinaryLoadContextV1_t::LoadPODValue<6>(KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 11025
	{
		int32 nString; // 333
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 346
	}
} /* size: 0, variables: 1 */

// <056465C8> kv3lib/keyvalues3_binaryreader_v1.cpp:351
// variables: 23
// function calls: 145
void KV3BinaryLoadContextV1_t::LoadValue(KeyValues3BinaryType_t nBinaryType, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 42039
	{
		int nLength; // 372
		byte* pBlob; // 379
		KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 197
		KV3BinaryLoadContextV1_t::GetUint32Value(); // 372
		AimAtExternalBinaryBlob(KeyValues3* pTarget,
					byte* pData,
					int nSize);  // 384
	}
	{
		const uint  nMemberCount; // 396
		{
			uint i; // 399
			{
				const uint  nMemberName; // 401
				KeyValues3* pMember; // 403
				CKV3MemberName memberName; // 404
				KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
										const unsigned int ** ppGet,
										const unsigned int* pEnd);  // 197
				KV3BinaryLoadContextV1_t::GetUint32Value(); // 401
				CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::IsValidIndex(
						int i);  // 219
				{
					KeyValues3LowercaseHash_t nHash; // 221
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::operator[](
							int i);  // 221
					CUtlStringToken::IsValid(); // 222
					CUtlMemory<char const::operator[](
							int i);  // 588
					CUtlVectorBase<char const::operator[](
							int i);  // 228
					CKV3MemberName::CKV3MemberName(
							const char* pString,
							KeyValues3LowercaseHash_t nHash);  // 228
					CUtlMemory<char const::operator[](
							int i);  // 588
					CUtlVectorBase<char const::operator[](
							int i);  // 224
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 151
					KV3MakeLowerHash(const char* pStr); // 224
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::operator[](
							int i);  // 225
				}
				CUtlStringToken::CUtlStringToken(); // 8
				CKV3MemberName::CKV3MemberName(); // 232
				KV3BinaryLoadContextV1_t::MemberName(
						int nIndex);  // 404
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 40
				FindOrCreateMemberAimedAtExternalName(KeyValues3* pTarget,
									CKV3MemberName memberNameAndHash);  // 408
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 408
				KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 192
				KV3BinaryLoadContextV1_t::GetControl(); // 238
				KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 192
				KV3BinaryLoadContextV1_t::GetControl(); // 241
				KV3BinaryLoadContextV1_t::ReadTypeAndFlags(
						KeyValues3Flag_t& nFlags);  // 254
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 256
				KV3BinaryLoadContextV1_t::LoadTypeAndValue(
						KeyValues3* pTarget);  // 415
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 412
			}
		}
		KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 197
		KV3BinaryLoadContextV1_t::GetUint32Value(); // 396
	}
	{
		const int  nCount; // 423
		{
			int i; // 426
			{
				KeyValues3* pElement; // 428
				KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 192
				KV3BinaryLoadContextV1_t::GetControl(); // 238
				KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 192
				KV3BinaryLoadContextV1_t::GetControl(); // 241
				KV3BinaryLoadContextV1_t::ReadTypeAndFlags(
						KeyValues3Flag_t& nFlags);  // 254
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 256
				KV3BinaryLoadContextV1_t::LoadTypeAndValue(
						KeyValues3* pTarget);  // 429
			}
		}
		KV3BinaryLoadContextV1_t::GetValue<int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 198
		KV3BinaryLoadContextV1_t::GetInt32Value(); // 423
	}
	{
		uint nCount; // 438
		KeyValues3Flag_t nElementFlags; // 442
		KeyValues3BinaryType_t nArrayType; // 443
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 439
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 458
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 471
		}
		{
			KeyValues3* pElement; // 481
			CKV3ArrayIteratorView<false>& __for_range; // 9053
			iterator __for_begin; // 18641
			iterator __for_end; // 18641
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
			KeyValues3::IterateArray(); // 481
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<false>::begin(); // 481
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<false>::end(); // 481
			iterator::operator!=(
					const iterator& rhs);  // 481
			KeyValues3::SetAllFlags(
					KeyValues3Flag_t nFlag);  // 484
			{
			}
			iterator::operator*(); // 481
		}
		KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 197
		KV3BinaryLoadContextV1_t::GetUint32Value(); // 438
		KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
								const unsigned char ** ppGet,
								const unsigned char* pEnd);  // 192
		KV3BinaryLoadContextV1_t::GetControl(); // 238
		KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
								const unsigned char ** ppGet,
								const unsigned char* pEnd);  // 192
		KV3BinaryLoadContextV1_t::GetControl(); // 241
		KV3BinaryLoadContextV1_t::ReadTypeAndFlags(
				KeyValues3Flag_t& nFlags);  // 443
		GetKV3TypeForBinaryType(KeyValues3BinaryType_t nBinaryType); // 479
		SetValueExternalInt32Array(KeyValues3* pTarget,
						int nValues,
						const int32* pValues);  // 472
		SetValueExternalDoubleArray(KeyValues3* pTarget,
						int nFloatsInArray,
						const double* pValues);  // 459
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 328
	KV3BinaryLoadContextV1_t::LoadPODValue<18>(
			KeyValues3* pTarget);  // 367
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 268
	KV3BinaryLoadContextV1_t::LoadPODValue<1>(
			KeyValues3* pTarget);  // 355
	KV3BinaryLoadContextV1_t::GetValue<signed char, unsigned char const>(
							const unsigned char ** ppGet,
							const unsigned char* pEnd);  // 195
	KV3BinaryLoadContextV1_t::GetInt8Value(); // 283
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 283
	KV3BinaryLoadContextV1_t::LoadPODValue<2>(
			KeyValues3* pTarget);  // 356
	KV3BinaryLoadContextV1_t::GetValue<int, unsigned int const>(
						const unsigned int ** ppGet,
						const unsigned int* pEnd);  // 198
	KV3BinaryLoadContextV1_t::GetInt32Value(); // 308
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 308
	KV3BinaryLoadContextV1_t::LoadPODValue<11>(
			KeyValues3* pTarget);  // 363
	KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 197
	KV3BinaryLoadContextV1_t::GetUint32Value(); // 313
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 313
	KV3BinaryLoadContextV1_t::LoadPODValue<12>(
			KeyValues3* pTarget);  // 364
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 273
	KV3BinaryLoadContextV1_t::LoadPODValue<13>(
			KeyValues3* pTarget);  // 357
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 278
	KV3BinaryLoadContextV1_t::LoadPODValue<14>(
			KeyValues3* pTarget);  // 358
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 293
	KV3BinaryLoadContextV1_t::LoadPODValue<16>(
			KeyValues3* pTarget);  // 360
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 288
	KV3BinaryLoadContextV1_t::LoadPODValue<15>(
			KeyValues3* pTarget);  // 359
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 323
	KV3BinaryLoadContextV1_t::LoadPODValue<17>(
			KeyValues3* pTarget);  // 366
	{
		int32 nString; // 333
		KV3BinaryLoadContextV1_t::GetValue<int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 198
		KV3BinaryLoadContextV1_t::GetInt32Value(); // 333
		CUtlVectorBase<char const::IsValidIndex(
				int i);  // 207
		CUtlMemory<char const::operator[](
				int i);  // 588
		CUtlVectorBase<char const::operator[](
				int i);  // 209
		KV3BinaryLoadContextV1_t::String(
			int nIndex);  // 336
		AimAtExternalString(KeyValues3* pTarget,
					const char* pString);  // 336
		CUtlVectorBase<char const::IsValidIndex(
				int i);  // 207
		CUtlMemory<char const::operator[](
				int i);  // 588
		CUtlVectorBase<char const::operator[](
				int i);  // 209
		KV3BinaryLoadContextV1_t::String(
			int nIndex);  // 340
	}
	KV3BinaryLoadContextV1_t::LoadPODValue<6>(
			KeyValues3* pTarget);  // 368
	KV3BinaryLoadContextV1_t::GetValue<long long unsigned int, long long unsigned int const>(
									const long long unsigned int ** ppGet,
									const long long unsigned int* pEnd);  // 201
	KV3BinaryLoadContextV1_t::GetUint64Value(); // 303
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 303
	KV3BinaryLoadContextV1_t::LoadPODValue<4>(
			KeyValues3* pTarget);  // 362
	KV3BinaryLoadContextV1_t::GetValue<double, long long unsigned int const>(
							const long long unsigned int ** ppGet,
							const long long unsigned int* pEnd);  // 203
	KV3BinaryLoadContextV1_t::GetDoubleValue(); // 318
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 318
	KV3BinaryLoadContextV1_t::LoadPODValue<5>(
			KeyValues3* pTarget);  // 365
	KV3BinaryLoadContextV1_t::GetValue<long long int, long long unsigned int const>(
								const long long unsigned int ** ppGet,
								const long long unsigned int* pEnd);  // 202
	KV3BinaryLoadContextV1_t::GetInt64Value(); // 298
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 298
	KV3BinaryLoadContextV1_t::LoadPODValue<3>(
			KeyValues3* pTarget);  // 361
} /* size: 3004, variables: 1, inline expansions: 65 (3052 bytes) */

// <029BDFC2> kv3lib/keyvalues3_binaryreader_v1.cpp:351
// variables: 23
// function calls: 145
void KV3BinaryLoadContextV1_t::LoadValue(KeyValues3BinaryType_t nBinaryType, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 60710
	{
		int nLength; // 372
		byte* pBlob; // 379
		KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 197
		KV3BinaryLoadContextV1_t::GetUint32Value(); // 372
		AimAtExternalBinaryBlob(KeyValues3* pTarget,
					byte* pData,
					int nSize);  // 384
	}
	{
		const uint  nMemberCount; // 396
		{
			uint i; // 399
			{
				const uint  nMemberName; // 401
				KeyValues3* pMember; // 403
				CKV3MemberName memberName; // 404
				KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
										const unsigned int ** ppGet,
										const unsigned int* pEnd);  // 197
				KV3BinaryLoadContextV1_t::GetUint32Value(); // 401
				CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::IsValidIndex(
						int i);  // 219
				{
					KeyValues3LowercaseHash_t nHash; // 221
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::operator[](
							int i);  // 221
					CUtlStringToken::IsValid(); // 222
					CUtlMemory<char const::operator[](
							int i);  // 588
					CUtlVectorBase<char const::operator[](
							int i);  // 228
					CKV3MemberName::CKV3MemberName(
							const char* pString,
							KeyValues3LowercaseHash_t nHash);  // 228
					CUtlMemory<char const::operator[](
							int i);  // 588
					CUtlVectorBase<char const::operator[](
							int i);  // 224
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 151
					KV3MakeLowerHash(const char* pStr); // 224
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::operator[](
							int i);  // 225
				}
				CUtlStringToken::CUtlStringToken(); // 8
				CKV3MemberName::CKV3MemberName(); // 232
				KV3BinaryLoadContextV1_t::MemberName(
						int nIndex);  // 404
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 40
				FindOrCreateMemberAimedAtExternalName(KeyValues3* pTarget,
									CKV3MemberName memberNameAndHash);  // 408
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 408
				KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 192
				KV3BinaryLoadContextV1_t::GetControl(); // 238
				KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 192
				KV3BinaryLoadContextV1_t::GetControl(); // 241
				KV3BinaryLoadContextV1_t::ReadTypeAndFlags(
						KeyValues3Flag_t& nFlags);  // 254
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 256
				KV3BinaryLoadContextV1_t::LoadTypeAndValue(
						KeyValues3* pTarget);  // 415
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 412
			}
		}
		KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 197
		KV3BinaryLoadContextV1_t::GetUint32Value(); // 396
	}
	{
		const int  nCount; // 423
		{
			int i; // 426
			{
				KeyValues3* pElement; // 428
				KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 192
				KV3BinaryLoadContextV1_t::GetControl(); // 238
				KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 192
				KV3BinaryLoadContextV1_t::GetControl(); // 241
				KV3BinaryLoadContextV1_t::ReadTypeAndFlags(
						KeyValues3Flag_t& nFlags);  // 254
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 256
				KV3BinaryLoadContextV1_t::LoadTypeAndValue(
						KeyValues3* pTarget);  // 429
			}
		}
		KV3BinaryLoadContextV1_t::GetValue<int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 198
		KV3BinaryLoadContextV1_t::GetInt32Value(); // 423
	}
	{
		uint nCount; // 438
		KeyValues3Flag_t nElementFlags; // 442
		KeyValues3BinaryType_t nArrayType; // 443
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 439
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 458
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 471
		}
		{
			KeyValues3* pElement; // 481
			CKV3ArrayIteratorView<false>& __for_range; // 27724
			iterator __for_begin; // 37312
			iterator __for_end; // 37312
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
			KeyValues3::IterateArray(); // 481
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<false>::begin(); // 481
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<false>::end(); // 481
			iterator::operator!=(
					const iterator& rhs);  // 481
			KeyValues3::SetAllFlags(
					KeyValues3Flag_t nFlag);  // 484
			{
			}
			iterator::operator*(); // 481
		}
		KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 197
		KV3BinaryLoadContextV1_t::GetUint32Value(); // 438
		KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
								const unsigned char ** ppGet,
								const unsigned char* pEnd);  // 192
		KV3BinaryLoadContextV1_t::GetControl(); // 238
		KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
								const unsigned char ** ppGet,
								const unsigned char* pEnd);  // 192
		KV3BinaryLoadContextV1_t::GetControl(); // 241
		KV3BinaryLoadContextV1_t::ReadTypeAndFlags(
				KeyValues3Flag_t& nFlags);  // 443
		GetKV3TypeForBinaryType(KeyValues3BinaryType_t nBinaryType); // 479
		SetValueExternalInt32Array(KeyValues3* pTarget,
						int nValues,
						const int32* pValues);  // 472
		SetValueExternalDoubleArray(KeyValues3* pTarget,
						int nFloatsInArray,
						const double* pValues);  // 459
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 328
	KV3BinaryLoadContextV1_t::LoadPODValue<18>(
			KeyValues3* pTarget);  // 367
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 268
	KV3BinaryLoadContextV1_t::LoadPODValue<1>(
			KeyValues3* pTarget);  // 355
	KV3BinaryLoadContextV1_t::GetValue<signed char, unsigned char const>(
							const unsigned char ** ppGet,
							const unsigned char* pEnd);  // 195
	KV3BinaryLoadContextV1_t::GetInt8Value(); // 283
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 283
	KV3BinaryLoadContextV1_t::LoadPODValue<2>(
			KeyValues3* pTarget);  // 356
	KV3BinaryLoadContextV1_t::GetValue<int, unsigned int const>(
						const unsigned int ** ppGet,
						const unsigned int* pEnd);  // 198
	KV3BinaryLoadContextV1_t::GetInt32Value(); // 308
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 308
	KV3BinaryLoadContextV1_t::LoadPODValue<11>(
			KeyValues3* pTarget);  // 363
	KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 197
	KV3BinaryLoadContextV1_t::GetUint32Value(); // 313
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 313
	KV3BinaryLoadContextV1_t::LoadPODValue<12>(
			KeyValues3* pTarget);  // 364
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 273
	KV3BinaryLoadContextV1_t::LoadPODValue<13>(
			KeyValues3* pTarget);  // 357
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 278
	KV3BinaryLoadContextV1_t::LoadPODValue<14>(
			KeyValues3* pTarget);  // 358
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 293
	KV3BinaryLoadContextV1_t::LoadPODValue<16>(
			KeyValues3* pTarget);  // 360
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 288
	KV3BinaryLoadContextV1_t::LoadPODValue<15>(
			KeyValues3* pTarget);  // 359
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 323
	KV3BinaryLoadContextV1_t::LoadPODValue<17>(
			KeyValues3* pTarget);  // 366
	{
		int32 nString; // 333
		KV3BinaryLoadContextV1_t::GetValue<int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 198
		KV3BinaryLoadContextV1_t::GetInt32Value(); // 333
		CUtlVectorBase<char const::IsValidIndex(
				int i);  // 207
		CUtlMemory<char const::operator[](
				int i);  // 588
		CUtlVectorBase<char const::operator[](
				int i);  // 209
		KV3BinaryLoadContextV1_t::String(
			int nIndex);  // 336
		AimAtExternalString(KeyValues3* pTarget,
					const char* pString);  // 336
		CUtlVectorBase<char const::IsValidIndex(
				int i);  // 207
		CUtlMemory<char const::operator[](
				int i);  // 588
		CUtlVectorBase<char const::operator[](
				int i);  // 209
		KV3BinaryLoadContextV1_t::String(
			int nIndex);  // 340
	}
	KV3BinaryLoadContextV1_t::LoadPODValue<6>(
			KeyValues3* pTarget);  // 368
	KV3BinaryLoadContextV1_t::GetValue<long long unsigned int, long long unsigned int const>(
									const long long unsigned int ** ppGet,
									const long long unsigned int* pEnd);  // 201
	KV3BinaryLoadContextV1_t::GetUint64Value(); // 303
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 303
	KV3BinaryLoadContextV1_t::LoadPODValue<4>(
			KeyValues3* pTarget);  // 362
	KV3BinaryLoadContextV1_t::GetValue<double, long long unsigned int const>(
							const long long unsigned int ** ppGet,
							const long long unsigned int* pEnd);  // 203
	KV3BinaryLoadContextV1_t::GetDoubleValue(); // 318
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 318
	KV3BinaryLoadContextV1_t::LoadPODValue<5>(
			KeyValues3* pTarget);  // 365
	KV3BinaryLoadContextV1_t::GetValue<long long int, long long unsigned int const>(
								const long long unsigned int ** ppGet,
								const long long unsigned int* pEnd);  // 202
	KV3BinaryLoadContextV1_t::GetInt64Value(); // 298
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 298
	KV3BinaryLoadContextV1_t::LoadPODValue<3>(
			KeyValues3* pTarget);  // 361
} /* size: 3004, variables: 1, inline expansions: 65 (3052 bytes) */

// <0130DB77> kv3lib/keyvalues3_binaryreader_v1.cpp:351
// variables: 23
// function calls: 145
void KV3BinaryLoadContextV1_t::LoadValue(KeyValues3BinaryType_t nBinaryType, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 153
	{
		int nLength; // 372
		byte* pBlob; // 379
		KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 197
		KV3BinaryLoadContextV1_t::GetUint32Value(); // 372
		AimAtExternalBinaryBlob(KeyValues3* pTarget,
					byte* pData,
					int nSize);  // 384
	}
	{
		const uint  nMemberCount; // 396
		{
			uint i; // 399
			{
				const uint  nMemberName; // 401
				KeyValues3* pMember; // 403
				CKV3MemberName memberName; // 404
				KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
										const unsigned int ** ppGet,
										const unsigned int* pEnd);  // 197
				KV3BinaryLoadContextV1_t::GetUint32Value(); // 401
				CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::IsValidIndex(
						int i);  // 219
				{
					KeyValues3LowercaseHash_t nHash; // 221
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::operator[](
							int i);  // 221
					CUtlStringToken::IsValid(); // 222
					CUtlMemory<char const::operator[](
							int i);  // 588
					CUtlVectorBase<char const::operator[](
							int i);  // 228
					CKV3MemberName::CKV3MemberName(
							const char* pString,
							KeyValues3LowercaseHash_t nHash);  // 228
					CUtlMemory<char const::operator[](
							int i);  // 588
					CUtlVectorBase<char const::operator[](
							int i);  // 224
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 151
					KV3MakeLowerHash(const char* pStr); // 224
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::operator[](
							int i);  // 225
				}
				CUtlStringToken::CUtlStringToken(); // 8
				CKV3MemberName::CKV3MemberName(); // 232
				KV3BinaryLoadContextV1_t::MemberName(
						int nIndex);  // 404
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 40
				FindOrCreateMemberAimedAtExternalName(KeyValues3* pTarget,
									CKV3MemberName memberNameAndHash);  // 408
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 408
				KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 192
				KV3BinaryLoadContextV1_t::GetControl(); // 238
				KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 192
				KV3BinaryLoadContextV1_t::GetControl(); // 241
				KV3BinaryLoadContextV1_t::ReadTypeAndFlags(
						KeyValues3Flag_t& nFlags);  // 254
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 256
				KV3BinaryLoadContextV1_t::LoadTypeAndValue(
						KeyValues3* pTarget);  // 415
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 412
			}
		}
		KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 197
		KV3BinaryLoadContextV1_t::GetUint32Value(); // 396
	}
	{
		const int  nCount; // 423
		{
			int i; // 426
			{
				KeyValues3* pElement; // 428
				KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 192
				KV3BinaryLoadContextV1_t::GetControl(); // 238
				KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 192
				KV3BinaryLoadContextV1_t::GetControl(); // 241
				KV3BinaryLoadContextV1_t::ReadTypeAndFlags(
						KeyValues3Flag_t& nFlags);  // 254
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 256
				KV3BinaryLoadContextV1_t::LoadTypeAndValue(
						KeyValues3* pTarget);  // 429
			}
		}
		KV3BinaryLoadContextV1_t::GetValue<int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 198
		KV3BinaryLoadContextV1_t::GetInt32Value(); // 423
	}
	{
		uint nCount; // 438
		KeyValues3Flag_t nElementFlags; // 442
		KeyValues3BinaryType_t nArrayType; // 443
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 439
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 458
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 471
		}
		{
			KeyValues3* pElement; // 481
			CKV3ArrayIteratorView<false>& __for_range; // 32703
			iterator __for_begin; // 42291
			iterator __for_end; // 42291
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
			KeyValues3::IterateArray(); // 481
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<false>::begin(); // 481
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<false>::end(); // 481
			iterator::operator!=(
					const iterator& rhs);  // 481
			KeyValues3::SetAllFlags(
					KeyValues3Flag_t nFlag);  // 484
			{
			}
			iterator::operator*(); // 481
		}
		KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 197
		KV3BinaryLoadContextV1_t::GetUint32Value(); // 438
		KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
								const unsigned char ** ppGet,
								const unsigned char* pEnd);  // 192
		KV3BinaryLoadContextV1_t::GetControl(); // 238
		KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
								const unsigned char ** ppGet,
								const unsigned char* pEnd);  // 192
		KV3BinaryLoadContextV1_t::GetControl(); // 241
		KV3BinaryLoadContextV1_t::ReadTypeAndFlags(
				KeyValues3Flag_t& nFlags);  // 443
		GetKV3TypeForBinaryType(KeyValues3BinaryType_t nBinaryType); // 479
		SetValueExternalInt32Array(KeyValues3* pTarget,
						int nValues,
						const int32* pValues);  // 472
		SetValueExternalDoubleArray(KeyValues3* pTarget,
						int nFloatsInArray,
						const double* pValues);  // 459
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 328
	KV3BinaryLoadContextV1_t::LoadPODValue<18>(
			KeyValues3* pTarget);  // 367
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 268
	KV3BinaryLoadContextV1_t::LoadPODValue<1>(
			KeyValues3* pTarget);  // 355
	KV3BinaryLoadContextV1_t::GetValue<signed char, unsigned char const>(
							const unsigned char ** ppGet,
							const unsigned char* pEnd);  // 195
	KV3BinaryLoadContextV1_t::GetInt8Value(); // 283
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 283
	KV3BinaryLoadContextV1_t::LoadPODValue<2>(
			KeyValues3* pTarget);  // 356
	KV3BinaryLoadContextV1_t::GetValue<int, unsigned int const>(
						const unsigned int ** ppGet,
						const unsigned int* pEnd);  // 198
	KV3BinaryLoadContextV1_t::GetInt32Value(); // 308
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 308
	KV3BinaryLoadContextV1_t::LoadPODValue<11>(
			KeyValues3* pTarget);  // 363
	KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 197
	KV3BinaryLoadContextV1_t::GetUint32Value(); // 313
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 313
	KV3BinaryLoadContextV1_t::LoadPODValue<12>(
			KeyValues3* pTarget);  // 364
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 273
	KV3BinaryLoadContextV1_t::LoadPODValue<13>(
			KeyValues3* pTarget);  // 357
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 278
	KV3BinaryLoadContextV1_t::LoadPODValue<14>(
			KeyValues3* pTarget);  // 358
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 293
	KV3BinaryLoadContextV1_t::LoadPODValue<16>(
			KeyValues3* pTarget);  // 360
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 288
	KV3BinaryLoadContextV1_t::LoadPODValue<15>(
			KeyValues3* pTarget);  // 359
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 323
	KV3BinaryLoadContextV1_t::LoadPODValue<17>(
			KeyValues3* pTarget);  // 366
	{
		int32 nString; // 333
		KV3BinaryLoadContextV1_t::GetValue<int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 198
		KV3BinaryLoadContextV1_t::GetInt32Value(); // 333
		CUtlVectorBase<char const::IsValidIndex(
				int i);  // 207
		CUtlMemory<char const::operator[](
				int i);  // 588
		CUtlVectorBase<char const::operator[](
				int i);  // 209
		KV3BinaryLoadContextV1_t::String(
			int nIndex);  // 336
		AimAtExternalString(KeyValues3* pTarget,
					const char* pString);  // 336
		CUtlVectorBase<char const::IsValidIndex(
				int i);  // 207
		CUtlMemory<char const::operator[](
				int i);  // 588
		CUtlVectorBase<char const::operator[](
				int i);  // 209
		KV3BinaryLoadContextV1_t::String(
			int nIndex);  // 340
	}
	KV3BinaryLoadContextV1_t::LoadPODValue<6>(
			KeyValues3* pTarget);  // 368
	KV3BinaryLoadContextV1_t::GetValue<long long unsigned int, long long unsigned int const>(
									const long long unsigned int ** ppGet,
									const long long unsigned int* pEnd);  // 201
	KV3BinaryLoadContextV1_t::GetUint64Value(); // 303
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 303
	KV3BinaryLoadContextV1_t::LoadPODValue<4>(
			KeyValues3* pTarget);  // 362
	KV3BinaryLoadContextV1_t::GetValue<double, long long unsigned int const>(
							const long long unsigned int ** ppGet,
							const long long unsigned int* pEnd);  // 203
	KV3BinaryLoadContextV1_t::GetDoubleValue(); // 318
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 318
	KV3BinaryLoadContextV1_t::LoadPODValue<5>(
			KeyValues3* pTarget);  // 365
	KV3BinaryLoadContextV1_t::GetValue<long long int, long long unsigned int const>(
								const long long unsigned int ** ppGet,
								const long long unsigned int* pEnd);  // 202
	KV3BinaryLoadContextV1_t::GetInt64Value(); // 298
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 298
	KV3BinaryLoadContextV1_t::LoadPODValue<3>(
			KeyValues3* pTarget);  // 361
} /* size: 3004, variables: 1, inline expansions: 65 (3052 bytes) */

// <0038933C> kv3lib/keyvalues3_binaryreader_v1.cpp:351
// variables: 23
// function calls: 145
void KV3BinaryLoadContextV1_t::LoadValue(KeyValues3BinaryType_t nBinaryType, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 51856
	{
		int nLength; // 372
		byte* pBlob; // 379
		KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 197
		KV3BinaryLoadContextV1_t::GetUint32Value(); // 372
		AimAtExternalBinaryBlob(KeyValues3* pTarget,
					byte* pData,
					int nSize);  // 384
	}
	{
		const uint  nMemberCount; // 396
		{
			uint i; // 399
			{
				const uint  nMemberName; // 401
				KeyValues3* pMember; // 403
				CKV3MemberName memberName; // 404
				KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
										const unsigned int ** ppGet,
										const unsigned int* pEnd);  // 197
				KV3BinaryLoadContextV1_t::GetUint32Value(); // 401
				CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::IsValidIndex(
						int i);  // 219
				{
					KeyValues3LowercaseHash_t nHash; // 221
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::operator[](
							int i);  // 221
					CUtlStringToken::IsValid(); // 222
					CUtlMemory<char const::operator[](
							int i);  // 588
					CUtlVectorBase<char const::operator[](
							int i);  // 228
					CKV3MemberName::CKV3MemberName(
							const char* pString,
							KeyValues3LowercaseHash_t nHash);  // 228
					CUtlMemory<char const::operator[](
							int i);  // 588
					CUtlVectorBase<char const::operator[](
							int i);  // 224
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 151
					KV3MakeLowerHash(const char* pStr); // 224
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::operator[](
							int i);  // 225
				}
				CUtlStringToken::CUtlStringToken(); // 8
				CKV3MemberName::CKV3MemberName(); // 232
				KV3BinaryLoadContextV1_t::MemberName(
						int nIndex);  // 404
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 40
				FindOrCreateMemberAimedAtExternalName(KeyValues3* pTarget,
									CKV3MemberName memberNameAndHash);  // 408
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 408
				KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 192
				KV3BinaryLoadContextV1_t::GetControl(); // 238
				KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 192
				KV3BinaryLoadContextV1_t::GetControl(); // 241
				KV3BinaryLoadContextV1_t::ReadTypeAndFlags(
						KeyValues3Flag_t& nFlags);  // 254
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 256
				KV3BinaryLoadContextV1_t::LoadTypeAndValue(
						KeyValues3* pTarget);  // 415
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 412
			}
		}
		KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 197
		KV3BinaryLoadContextV1_t::GetUint32Value(); // 396
	}
	{
		const int  nCount; // 423
		{
			int i; // 426
			{
				KeyValues3* pElement; // 428
				KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 192
				KV3BinaryLoadContextV1_t::GetControl(); // 238
				KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 192
				KV3BinaryLoadContextV1_t::GetControl(); // 241
				KV3BinaryLoadContextV1_t::ReadTypeAndFlags(
						KeyValues3Flag_t& nFlags);  // 254
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 256
				KV3BinaryLoadContextV1_t::LoadTypeAndValue(
						KeyValues3* pTarget);  // 429
			}
		}
		KV3BinaryLoadContextV1_t::GetValue<int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 198
		KV3BinaryLoadContextV1_t::GetInt32Value(); // 423
	}
	{
		uint nCount; // 438
		KeyValues3Flag_t nElementFlags; // 442
		KeyValues3BinaryType_t nArrayType; // 443
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 439
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 458
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 471
		}
		{
			KeyValues3* pElement; // 481
			CKV3ArrayIteratorView<false>& __for_range; // 18870
			iterator __for_begin; // 28458
			iterator __for_end; // 28458
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
			KeyValues3::IterateArray(); // 481
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<false>::begin(); // 481
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<false>::end(); // 481
			iterator::operator!=(
					const iterator& rhs);  // 481
			KeyValues3::SetAllFlags(
					KeyValues3Flag_t nFlag);  // 484
			{
			}
			iterator::operator*(); // 481
		}
		KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 197
		KV3BinaryLoadContextV1_t::GetUint32Value(); // 438
		KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
								const unsigned char ** ppGet,
								const unsigned char* pEnd);  // 192
		KV3BinaryLoadContextV1_t::GetControl(); // 238
		KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
								const unsigned char ** ppGet,
								const unsigned char* pEnd);  // 192
		KV3BinaryLoadContextV1_t::GetControl(); // 241
		KV3BinaryLoadContextV1_t::ReadTypeAndFlags(
				KeyValues3Flag_t& nFlags);  // 443
		GetKV3TypeForBinaryType(KeyValues3BinaryType_t nBinaryType); // 479
		SetValueExternalInt32Array(KeyValues3* pTarget,
						int nValues,
						const int32* pValues);  // 472
		SetValueExternalDoubleArray(KeyValues3* pTarget,
						int nFloatsInArray,
						const double* pValues);  // 459
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 328
	KV3BinaryLoadContextV1_t::LoadPODValue<18>(
			KeyValues3* pTarget);  // 367
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 268
	KV3BinaryLoadContextV1_t::LoadPODValue<1>(
			KeyValues3* pTarget);  // 355
	KV3BinaryLoadContextV1_t::GetValue<signed char, unsigned char const>(
							const unsigned char ** ppGet,
							const unsigned char* pEnd);  // 195
	KV3BinaryLoadContextV1_t::GetInt8Value(); // 283
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 283
	KV3BinaryLoadContextV1_t::LoadPODValue<2>(
			KeyValues3* pTarget);  // 356
	KV3BinaryLoadContextV1_t::GetValue<int, unsigned int const>(
						const unsigned int ** ppGet,
						const unsigned int* pEnd);  // 198
	KV3BinaryLoadContextV1_t::GetInt32Value(); // 308
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 308
	KV3BinaryLoadContextV1_t::LoadPODValue<11>(
			KeyValues3* pTarget);  // 363
	KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 197
	KV3BinaryLoadContextV1_t::GetUint32Value(); // 313
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 313
	KV3BinaryLoadContextV1_t::LoadPODValue<12>(
			KeyValues3* pTarget);  // 364
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 273
	KV3BinaryLoadContextV1_t::LoadPODValue<13>(
			KeyValues3* pTarget);  // 357
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 278
	KV3BinaryLoadContextV1_t::LoadPODValue<14>(
			KeyValues3* pTarget);  // 358
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 293
	KV3BinaryLoadContextV1_t::LoadPODValue<16>(
			KeyValues3* pTarget);  // 360
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 288
	KV3BinaryLoadContextV1_t::LoadPODValue<15>(
			KeyValues3* pTarget);  // 359
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 323
	KV3BinaryLoadContextV1_t::LoadPODValue<17>(
			KeyValues3* pTarget);  // 366
	{
		int32 nString; // 333
		KV3BinaryLoadContextV1_t::GetValue<int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 198
		KV3BinaryLoadContextV1_t::GetInt32Value(); // 333
		CUtlVectorBase<char const::IsValidIndex(
				int i);  // 207
		CUtlMemory<char const::operator[](
				int i);  // 588
		CUtlVectorBase<char const::operator[](
				int i);  // 209
		KV3BinaryLoadContextV1_t::String(
			int nIndex);  // 336
		AimAtExternalString(KeyValues3* pTarget,
					const char* pString);  // 336
		CUtlVectorBase<char const::IsValidIndex(
				int i);  // 207
		CUtlMemory<char const::operator[](
				int i);  // 588
		CUtlVectorBase<char const::operator[](
				int i);  // 209
		KV3BinaryLoadContextV1_t::String(
			int nIndex);  // 340
	}
	KV3BinaryLoadContextV1_t::LoadPODValue<6>(
			KeyValues3* pTarget);  // 368
	KV3BinaryLoadContextV1_t::GetValue<long long unsigned int, long long unsigned int const>(
									const long long unsigned int ** ppGet,
									const long long unsigned int* pEnd);  // 201
	KV3BinaryLoadContextV1_t::GetUint64Value(); // 303
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 303
	KV3BinaryLoadContextV1_t::LoadPODValue<4>(
			KeyValues3* pTarget);  // 362
	KV3BinaryLoadContextV1_t::GetValue<double, long long unsigned int const>(
							const long long unsigned int ** ppGet,
							const long long unsigned int* pEnd);  // 203
	KV3BinaryLoadContextV1_t::GetDoubleValue(); // 318
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 318
	KV3BinaryLoadContextV1_t::LoadPODValue<5>(
			KeyValues3* pTarget);  // 365
	KV3BinaryLoadContextV1_t::GetValue<long long int, long long unsigned int const>(
								const long long unsigned int ** ppGet,
								const long long unsigned int* pEnd);  // 202
	KV3BinaryLoadContextV1_t::GetInt64Value(); // 298
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 298
	KV3BinaryLoadContextV1_t::LoadPODValue<3>(
			KeyValues3* pTarget);  // 361
} /* size: 0, variables: 1, inline expansions: 65 (0 bytes) */

// <006EE53E> kv3lib/keyvalues3_binaryreader_v1.cpp:351
// variables: 23
// function calls: 145
void KV3BinaryLoadContextV1_t::LoadValue(KeyValues3BinaryType_t nBinaryType, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 12306
	{
		int nLength; // 372
		byte* pBlob; // 379
		KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 197
		KV3BinaryLoadContextV1_t::GetUint32Value(); // 372
		AimAtExternalBinaryBlob(KeyValues3* pTarget,
					byte* pData,
					int nSize);  // 384
	}
	{
		const uint  nMemberCount; // 396
		{
			uint i; // 399
			{
				const uint  nMemberName; // 401
				KeyValues3* pMember; // 403
				CKV3MemberName memberName; // 404
				KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
										const unsigned int ** ppGet,
										const unsigned int* pEnd);  // 197
				KV3BinaryLoadContextV1_t::GetUint32Value(); // 401
				CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::IsValidIndex(
						int i);  // 219
				{
					KeyValues3LowercaseHash_t nHash; // 221
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::operator[](
							int i);  // 221
					CUtlStringToken::IsValid(); // 222
					CUtlMemory<char const::operator[](
							int i);  // 588
					CUtlVectorBase<char const::operator[](
							int i);  // 228
					CKV3MemberName::CKV3MemberName(
							const char* pString,
							KeyValues3LowercaseHash_t nHash);  // 228
					CUtlMemory<char const::operator[](
							int i);  // 588
					CUtlVectorBase<char const::operator[](
							int i);  // 224
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 151
					KV3MakeLowerHash(const char* pStr); // 224
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::operator[](
							int i);  // 225
				}
				CUtlStringToken::CUtlStringToken(); // 8
				CKV3MemberName::CKV3MemberName(); // 232
				KV3BinaryLoadContextV1_t::MemberName(
						int nIndex);  // 404
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 40
				FindOrCreateMemberAimedAtExternalName(KeyValues3* pTarget,
									CKV3MemberName memberNameAndHash);  // 408
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 408
				KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 192
				KV3BinaryLoadContextV1_t::GetControl(); // 238
				KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 192
				KV3BinaryLoadContextV1_t::GetControl(); // 241
				KV3BinaryLoadContextV1_t::ReadTypeAndFlags(
						KeyValues3Flag_t& nFlags);  // 254
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 256
				KV3BinaryLoadContextV1_t::LoadTypeAndValue(
						KeyValues3* pTarget);  // 415
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 412
			}
		}
		KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 197
		KV3BinaryLoadContextV1_t::GetUint32Value(); // 396
	}
	{
		const int  nCount; // 423
		{
			int i; // 426
			{
				KeyValues3* pElement; // 428
				KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 192
				KV3BinaryLoadContextV1_t::GetControl(); // 238
				KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 192
				KV3BinaryLoadContextV1_t::GetControl(); // 241
				KV3BinaryLoadContextV1_t::ReadTypeAndFlags(
						KeyValues3Flag_t& nFlags);  // 254
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 256
				KV3BinaryLoadContextV1_t::LoadTypeAndValue(
						KeyValues3* pTarget);  // 429
			}
		}
		KV3BinaryLoadContextV1_t::GetValue<int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 198
		KV3BinaryLoadContextV1_t::GetInt32Value(); // 423
	}
	{
		uint nCount; // 438
		KeyValues3Flag_t nElementFlags; // 442
		KeyValues3BinaryType_t nArrayType; // 443
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 439
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 458
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 471
		}
		{
			KeyValues3* pElement; // 481
			CKV3ArrayIteratorView<false>& __for_range; // 44856
			iterator __for_begin; // 54444
			iterator __for_end; // 54444
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
			KeyValues3::IterateArray(); // 481
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<false>::begin(); // 481
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<false>::end(); // 481
			iterator::operator!=(
					const iterator& rhs);  // 481
			KeyValues3::SetAllFlags(
					KeyValues3Flag_t nFlag);  // 484
			{
			}
			iterator::operator*(); // 481
		}
		KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 197
		KV3BinaryLoadContextV1_t::GetUint32Value(); // 438
		KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
								const unsigned char ** ppGet,
								const unsigned char* pEnd);  // 192
		KV3BinaryLoadContextV1_t::GetControl(); // 238
		KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
								const unsigned char ** ppGet,
								const unsigned char* pEnd);  // 192
		KV3BinaryLoadContextV1_t::GetControl(); // 241
		KV3BinaryLoadContextV1_t::ReadTypeAndFlags(
				KeyValues3Flag_t& nFlags);  // 443
		GetKV3TypeForBinaryType(KeyValues3BinaryType_t nBinaryType); // 479
		SetValueExternalInt32Array(KeyValues3* pTarget,
						int nValues,
						const int32* pValues);  // 472
		SetValueExternalDoubleArray(KeyValues3* pTarget,
						int nFloatsInArray,
						const double* pValues);  // 459
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 328
	KV3BinaryLoadContextV1_t::LoadPODValue<18>(
			KeyValues3* pTarget);  // 367
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 268
	KV3BinaryLoadContextV1_t::LoadPODValue<1>(
			KeyValues3* pTarget);  // 355
	KV3BinaryLoadContextV1_t::GetValue<signed char, unsigned char const>(
							const unsigned char ** ppGet,
							const unsigned char* pEnd);  // 195
	KV3BinaryLoadContextV1_t::GetInt8Value(); // 283
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 283
	KV3BinaryLoadContextV1_t::LoadPODValue<2>(
			KeyValues3* pTarget);  // 356
	KV3BinaryLoadContextV1_t::GetValue<int, unsigned int const>(
						const unsigned int ** ppGet,
						const unsigned int* pEnd);  // 198
	KV3BinaryLoadContextV1_t::GetInt32Value(); // 308
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 308
	KV3BinaryLoadContextV1_t::LoadPODValue<11>(
			KeyValues3* pTarget);  // 363
	KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 197
	KV3BinaryLoadContextV1_t::GetUint32Value(); // 313
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 313
	KV3BinaryLoadContextV1_t::LoadPODValue<12>(
			KeyValues3* pTarget);  // 364
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 273
	KV3BinaryLoadContextV1_t::LoadPODValue<13>(
			KeyValues3* pTarget);  // 357
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 278
	KV3BinaryLoadContextV1_t::LoadPODValue<14>(
			KeyValues3* pTarget);  // 358
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 293
	KV3BinaryLoadContextV1_t::LoadPODValue<16>(
			KeyValues3* pTarget);  // 360
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 288
	KV3BinaryLoadContextV1_t::LoadPODValue<15>(
			KeyValues3* pTarget);  // 359
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 323
	KV3BinaryLoadContextV1_t::LoadPODValue<17>(
			KeyValues3* pTarget);  // 366
	{
		int32 nString; // 333
		KV3BinaryLoadContextV1_t::GetValue<int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 198
		KV3BinaryLoadContextV1_t::GetInt32Value(); // 333
		CUtlVectorBase<char const::IsValidIndex(
				int i);  // 207
		CUtlMemory<char const::operator[](
				int i);  // 588
		CUtlVectorBase<char const::operator[](
				int i);  // 209
		KV3BinaryLoadContextV1_t::String(
			int nIndex);  // 336
		AimAtExternalString(KeyValues3* pTarget,
					const char* pString);  // 336
		CUtlVectorBase<char const::IsValidIndex(
				int i);  // 207
		CUtlMemory<char const::operator[](
				int i);  // 588
		CUtlVectorBase<char const::operator[](
				int i);  // 209
		KV3BinaryLoadContextV1_t::String(
			int nIndex);  // 340
	}
	KV3BinaryLoadContextV1_t::LoadPODValue<6>(
			KeyValues3* pTarget);  // 368
	KV3BinaryLoadContextV1_t::GetValue<long long unsigned int, long long unsigned int const>(
									const long long unsigned int ** ppGet,
									const long long unsigned int* pEnd);  // 201
	KV3BinaryLoadContextV1_t::GetUint64Value(); // 303
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 303
	KV3BinaryLoadContextV1_t::LoadPODValue<4>(
			KeyValues3* pTarget);  // 362
	KV3BinaryLoadContextV1_t::GetValue<double, long long unsigned int const>(
							const long long unsigned int ** ppGet,
							const long long unsigned int* pEnd);  // 203
	KV3BinaryLoadContextV1_t::GetDoubleValue(); // 318
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 318
	KV3BinaryLoadContextV1_t::LoadPODValue<5>(
			KeyValues3* pTarget);  // 365
	KV3BinaryLoadContextV1_t::GetValue<long long int, long long unsigned int const>(
								const long long unsigned int ** ppGet,
								const long long unsigned int* pEnd);  // 202
	KV3BinaryLoadContextV1_t::GetInt64Value(); // 298
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 298
	KV3BinaryLoadContextV1_t::LoadPODValue<3>(
			KeyValues3* pTarget);  // 361
} /* size: 3004, variables: 1, inline expansions: 65 (3052 bytes) */

// <00AC61C5> kv3lib/keyvalues3_binaryreader_v1.cpp:351
// variables: 23
// function calls: 145
void KV3BinaryLoadContextV1_t::LoadValue(KeyValues3BinaryType_t nBinaryType, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 18457
	{
		int nLength; // 372
		byte* pBlob; // 379
		KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 197
		KV3BinaryLoadContextV1_t::GetUint32Value(); // 372
		AimAtExternalBinaryBlob(KeyValues3* pTarget,
					byte* pData,
					int nSize);  // 384
	}
	{
		const uint  nMemberCount; // 396
		{
			uint i; // 399
			{
				const uint  nMemberName; // 401
				KeyValues3* pMember; // 403
				CKV3MemberName memberName; // 404
				KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
										const unsigned int ** ppGet,
										const unsigned int* pEnd);  // 197
				KV3BinaryLoadContextV1_t::GetUint32Value(); // 401
				CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::IsValidIndex(
						int i);  // 219
				{
					KeyValues3LowercaseHash_t nHash; // 221
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::operator[](
							int i);  // 221
					CUtlStringToken::IsValid(); // 222
					CUtlMemory<char const::operator[](
							int i);  // 588
					CUtlVectorBase<char const::operator[](
							int i);  // 228
					CKV3MemberName::CKV3MemberName(
							const char* pString,
							KeyValues3LowercaseHash_t nHash);  // 228
					CUtlMemory<char const::operator[](
							int i);  // 588
					CUtlVectorBase<char const::operator[](
							int i);  // 224
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 151
					KV3MakeLowerHash(const char* pStr); // 224
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::operator[](
							int i);  // 225
				}
				CUtlStringToken::CUtlStringToken(); // 8
				CKV3MemberName::CKV3MemberName(); // 232
				KV3BinaryLoadContextV1_t::MemberName(
						int nIndex);  // 404
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 40
				FindOrCreateMemberAimedAtExternalName(KeyValues3* pTarget,
									CKV3MemberName memberNameAndHash);  // 408
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 408
				KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 192
				KV3BinaryLoadContextV1_t::GetControl(); // 238
				KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 192
				KV3BinaryLoadContextV1_t::GetControl(); // 241
				KV3BinaryLoadContextV1_t::ReadTypeAndFlags(
						KeyValues3Flag_t& nFlags);  // 254
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 256
				KV3BinaryLoadContextV1_t::LoadTypeAndValue(
						KeyValues3* pTarget);  // 415
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 412
			}
		}
		KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 197
		KV3BinaryLoadContextV1_t::GetUint32Value(); // 396
	}
	{
		const int  nCount; // 423
		{
			int i; // 426
			{
				KeyValues3* pElement; // 428
				KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 192
				KV3BinaryLoadContextV1_t::GetControl(); // 238
				KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 192
				KV3BinaryLoadContextV1_t::GetControl(); // 241
				KV3BinaryLoadContextV1_t::ReadTypeAndFlags(
						KeyValues3Flag_t& nFlags);  // 254
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 256
				KV3BinaryLoadContextV1_t::LoadTypeAndValue(
						KeyValues3* pTarget);  // 429
			}
		}
		KV3BinaryLoadContextV1_t::GetValue<int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 198
		KV3BinaryLoadContextV1_t::GetInt32Value(); // 423
	}
	{
		uint nCount; // 438
		KeyValues3Flag_t nElementFlags; // 442
		KeyValues3BinaryType_t nArrayType; // 443
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 439
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 458
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 471
		}
		{
			KeyValues3* pElement; // 481
			CKV3ArrayIteratorView<false>& __for_range; // 51007
			iterator __for_begin; // 60595
			iterator __for_end; // 60595
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
			KeyValues3::IterateArray(); // 481
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<false>::begin(); // 481
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<false>::end(); // 481
			iterator::operator!=(
					const iterator& rhs);  // 481
			KeyValues3::SetAllFlags(
					KeyValues3Flag_t nFlag);  // 484
			{
			}
			iterator::operator*(); // 481
		}
		KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 197
		KV3BinaryLoadContextV1_t::GetUint32Value(); // 438
		KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
								const unsigned char ** ppGet,
								const unsigned char* pEnd);  // 192
		KV3BinaryLoadContextV1_t::GetControl(); // 238
		KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
								const unsigned char ** ppGet,
								const unsigned char* pEnd);  // 192
		KV3BinaryLoadContextV1_t::GetControl(); // 241
		KV3BinaryLoadContextV1_t::ReadTypeAndFlags(
				KeyValues3Flag_t& nFlags);  // 443
		GetKV3TypeForBinaryType(KeyValues3BinaryType_t nBinaryType); // 479
		SetValueExternalInt32Array(KeyValues3* pTarget,
						int nValues,
						const int32* pValues);  // 472
		SetValueExternalDoubleArray(KeyValues3* pTarget,
						int nFloatsInArray,
						const double* pValues);  // 459
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 328
	KV3BinaryLoadContextV1_t::LoadPODValue<18>(
			KeyValues3* pTarget);  // 367
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 268
	KV3BinaryLoadContextV1_t::LoadPODValue<1>(
			KeyValues3* pTarget);  // 355
	KV3BinaryLoadContextV1_t::GetValue<signed char, unsigned char const>(
							const unsigned char ** ppGet,
							const unsigned char* pEnd);  // 195
	KV3BinaryLoadContextV1_t::GetInt8Value(); // 283
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 283
	KV3BinaryLoadContextV1_t::LoadPODValue<2>(
			KeyValues3* pTarget);  // 356
	KV3BinaryLoadContextV1_t::GetValue<int, unsigned int const>(
						const unsigned int ** ppGet,
						const unsigned int* pEnd);  // 198
	KV3BinaryLoadContextV1_t::GetInt32Value(); // 308
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 308
	KV3BinaryLoadContextV1_t::LoadPODValue<11>(
			KeyValues3* pTarget);  // 363
	KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 197
	KV3BinaryLoadContextV1_t::GetUint32Value(); // 313
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 313
	KV3BinaryLoadContextV1_t::LoadPODValue<12>(
			KeyValues3* pTarget);  // 364
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 273
	KV3BinaryLoadContextV1_t::LoadPODValue<13>(
			KeyValues3* pTarget);  // 357
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 278
	KV3BinaryLoadContextV1_t::LoadPODValue<14>(
			KeyValues3* pTarget);  // 358
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 293
	KV3BinaryLoadContextV1_t::LoadPODValue<16>(
			KeyValues3* pTarget);  // 360
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 288
	KV3BinaryLoadContextV1_t::LoadPODValue<15>(
			KeyValues3* pTarget);  // 359
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 323
	KV3BinaryLoadContextV1_t::LoadPODValue<17>(
			KeyValues3* pTarget);  // 366
	{
		int32 nString; // 333
		KV3BinaryLoadContextV1_t::GetValue<int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 198
		KV3BinaryLoadContextV1_t::GetInt32Value(); // 333
		CUtlVectorBase<char const::IsValidIndex(
				int i);  // 207
		CUtlMemory<char const::operator[](
				int i);  // 588
		CUtlVectorBase<char const::operator[](
				int i);  // 209
		KV3BinaryLoadContextV1_t::String(
			int nIndex);  // 336
		AimAtExternalString(KeyValues3* pTarget,
					const char* pString);  // 336
		CUtlVectorBase<char const::IsValidIndex(
				int i);  // 207
		CUtlMemory<char const::operator[](
				int i);  // 588
		CUtlVectorBase<char const::operator[](
				int i);  // 209
		KV3BinaryLoadContextV1_t::String(
			int nIndex);  // 340
	}
	KV3BinaryLoadContextV1_t::LoadPODValue<6>(
			KeyValues3* pTarget);  // 368
	KV3BinaryLoadContextV1_t::GetValue<long long unsigned int, long long unsigned int const>(
									const long long unsigned int ** ppGet,
									const long long unsigned int* pEnd);  // 201
	KV3BinaryLoadContextV1_t::GetUint64Value(); // 303
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 303
	KV3BinaryLoadContextV1_t::LoadPODValue<4>(
			KeyValues3* pTarget);  // 362
	KV3BinaryLoadContextV1_t::GetValue<double, long long unsigned int const>(
							const long long unsigned int ** ppGet,
							const long long unsigned int* pEnd);  // 203
	KV3BinaryLoadContextV1_t::GetDoubleValue(); // 318
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 318
	KV3BinaryLoadContextV1_t::LoadPODValue<5>(
			KeyValues3* pTarget);  // 365
	KV3BinaryLoadContextV1_t::GetValue<long long int, long long unsigned int const>(
								const long long unsigned int ** ppGet,
								const long long unsigned int* pEnd);  // 202
	KV3BinaryLoadContextV1_t::GetInt64Value(); // 298
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 298
	KV3BinaryLoadContextV1_t::LoadPODValue<3>(
			KeyValues3* pTarget);  // 361
} /* size: 3004, variables: 1, inline expansions: 65 (3052 bytes) */

// <001D2D46> kv3lib/keyvalues3_binaryreader_v1.cpp:351
// variables: 23
// function calls: 145
void KV3BinaryLoadContextV1_t::LoadValue(KeyValues3BinaryType_t nBinaryType, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 10954
	{
		int nLength; // 372
		byte* pBlob; // 379
		KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 197
		KV3BinaryLoadContextV1_t::GetUint32Value(); // 372
		AimAtExternalBinaryBlob(KeyValues3* pTarget,
					byte* pData,
					int nSize);  // 384
	}
	{
		const uint  nMemberCount; // 396
		{
			uint i; // 399
			{
				const uint  nMemberName; // 401
				KeyValues3* pMember; // 403
				CKV3MemberName memberName; // 404
				KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
										const unsigned int ** ppGet,
										const unsigned int* pEnd);  // 197
				KV3BinaryLoadContextV1_t::GetUint32Value(); // 401
				CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::IsValidIndex(
						int i);  // 219
				{
					KeyValues3LowercaseHash_t nHash; // 221
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::operator[](
							int i);  // 221
					CUtlStringToken::IsValid(); // 222
					CUtlMemory<char const::operator[](
							int i);  // 588
					CUtlVectorBase<char const::operator[](
							int i);  // 228
					CKV3MemberName::CKV3MemberName(
							const char* pString,
							KeyValues3LowercaseHash_t nHash);  // 228
					CUtlMemory<char const::operator[](
							int i);  // 588
					CUtlVectorBase<char const::operator[](
							int i);  // 224
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 151
					KV3MakeLowerHash(const char* pStr); // 224
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::operator[](
							int i);  // 225
				}
				CUtlStringToken::CUtlStringToken(); // 8
				CKV3MemberName::CKV3MemberName(); // 232
				KV3BinaryLoadContextV1_t::MemberName(
						int nIndex);  // 404
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 40
				FindOrCreateMemberAimedAtExternalName(KeyValues3* pTarget,
									CKV3MemberName memberNameAndHash);  // 408
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 408
				KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 192
				KV3BinaryLoadContextV1_t::GetControl(); // 238
				KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 192
				KV3BinaryLoadContextV1_t::GetControl(); // 241
				KV3BinaryLoadContextV1_t::ReadTypeAndFlags(
						KeyValues3Flag_t& nFlags);  // 254
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 256
				KV3BinaryLoadContextV1_t::LoadTypeAndValue(
						KeyValues3* pTarget);  // 415
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 412
			}
		}
		KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 197
		KV3BinaryLoadContextV1_t::GetUint32Value(); // 396
	}
	{
		const int  nCount; // 423
		{
			int i; // 426
			{
				KeyValues3* pElement; // 428
				KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 192
				KV3BinaryLoadContextV1_t::GetControl(); // 238
				KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
										const unsigned char ** ppGet,
										const unsigned char* pEnd);  // 192
				KV3BinaryLoadContextV1_t::GetControl(); // 241
				KV3BinaryLoadContextV1_t::ReadTypeAndFlags(
						KeyValues3Flag_t& nFlags);  // 254
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 256
				KV3BinaryLoadContextV1_t::LoadTypeAndValue(
						KeyValues3* pTarget);  // 429
			}
		}
		KV3BinaryLoadContextV1_t::GetValue<int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 198
		KV3BinaryLoadContextV1_t::GetInt32Value(); // 423
	}
	{
		uint nCount; // 438
		KeyValues3Flag_t nElementFlags; // 442
		KeyValues3BinaryType_t nArrayType; // 443
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 439
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 458
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 471
		}
		{
			KeyValues3* pElement; // 481
			CKV3ArrayIteratorView<false>& __for_range; // 43504
			iterator __for_begin; // 53092
			iterator __for_end; // 53092
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
			KeyValues3::IterateArray(); // 481
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<false>::begin(); // 481
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<false>::end(); // 481
			iterator::operator!=(
					const iterator& rhs);  // 481
			KeyValues3::SetAllFlags(
					KeyValues3Flag_t nFlag);  // 484
			{
			}
			iterator::operator*(); // 481
		}
		KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
								const unsigned int ** ppGet,
								const unsigned int* pEnd);  // 197
		KV3BinaryLoadContextV1_t::GetUint32Value(); // 438
		KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
								const unsigned char ** ppGet,
								const unsigned char* pEnd);  // 192
		KV3BinaryLoadContextV1_t::GetControl(); // 238
		KV3BinaryLoadContextV1_t::GetValue<unsigned char, unsigned char const>(
								const unsigned char ** ppGet,
								const unsigned char* pEnd);  // 192
		KV3BinaryLoadContextV1_t::GetControl(); // 241
		KV3BinaryLoadContextV1_t::ReadTypeAndFlags(
				KeyValues3Flag_t& nFlags);  // 443
		GetKV3TypeForBinaryType(KeyValues3BinaryType_t nBinaryType); // 479
		SetValueExternalInt32Array(KeyValues3* pTarget,
						int nValues,
						const int32* pValues);  // 472
		SetValueExternalDoubleArray(KeyValues3* pTarget,
						int nFloatsInArray,
						const double* pValues);  // 459
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 328
	KV3BinaryLoadContextV1_t::LoadPODValue<18>(
			KeyValues3* pTarget);  // 367
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 268
	KV3BinaryLoadContextV1_t::LoadPODValue<1>(
			KeyValues3* pTarget);  // 355
	KV3BinaryLoadContextV1_t::GetValue<signed char, unsigned char const>(
							const unsigned char ** ppGet,
							const unsigned char* pEnd);  // 195
	KV3BinaryLoadContextV1_t::GetInt8Value(); // 283
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 283
	KV3BinaryLoadContextV1_t::LoadPODValue<2>(
			KeyValues3* pTarget);  // 356
	KV3BinaryLoadContextV1_t::GetValue<int, unsigned int const>(
						const unsigned int ** ppGet,
						const unsigned int* pEnd);  // 198
	KV3BinaryLoadContextV1_t::GetInt32Value(); // 308
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 308
	KV3BinaryLoadContextV1_t::LoadPODValue<11>(
			KeyValues3* pTarget);  // 363
	KV3BinaryLoadContextV1_t::GetValue<unsigned int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 197
	KV3BinaryLoadContextV1_t::GetUint32Value(); // 313
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 313
	KV3BinaryLoadContextV1_t::LoadPODValue<12>(
			KeyValues3* pTarget);  // 364
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 273
	KV3BinaryLoadContextV1_t::LoadPODValue<13>(
			KeyValues3* pTarget);  // 357
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 278
	KV3BinaryLoadContextV1_t::LoadPODValue<14>(
			KeyValues3* pTarget);  // 358
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 293
	KV3BinaryLoadContextV1_t::LoadPODValue<16>(
			KeyValues3* pTarget);  // 360
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 288
	KV3BinaryLoadContextV1_t::LoadPODValue<15>(
			KeyValues3* pTarget);  // 359
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 323
	KV3BinaryLoadContextV1_t::LoadPODValue<17>(
			KeyValues3* pTarget);  // 366
	{
		int32 nString; // 333
		KV3BinaryLoadContextV1_t::GetValue<int, unsigned int const>(
							const unsigned int ** ppGet,
							const unsigned int* pEnd);  // 198
		KV3BinaryLoadContextV1_t::GetInt32Value(); // 333
		CUtlVectorBase<char const::IsValidIndex(
				int i);  // 207
		CUtlMemory<char const::operator[](
				int i);  // 588
		CUtlVectorBase<char const::operator[](
				int i);  // 209
		KV3BinaryLoadContextV1_t::String(
			int nIndex);  // 336
		AimAtExternalString(KeyValues3* pTarget,
					const char* pString);  // 336
		CUtlVectorBase<char const::IsValidIndex(
				int i);  // 207
		CUtlMemory<char const::operator[](
				int i);  // 588
		CUtlVectorBase<char const::operator[](
				int i);  // 209
		KV3BinaryLoadContextV1_t::String(
			int nIndex);  // 340
	}
	KV3BinaryLoadContextV1_t::LoadPODValue<6>(
			KeyValues3* pTarget);  // 368
	KV3BinaryLoadContextV1_t::GetValue<long long unsigned int, long long unsigned int const>(
									const long long unsigned int ** ppGet,
									const long long unsigned int* pEnd);  // 201
	KV3BinaryLoadContextV1_t::GetUint64Value(); // 303
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 303
	KV3BinaryLoadContextV1_t::LoadPODValue<4>(
			KeyValues3* pTarget);  // 362
	KV3BinaryLoadContextV1_t::GetValue<double, long long unsigned int const>(
							const long long unsigned int ** ppGet,
							const long long unsigned int* pEnd);  // 203
	KV3BinaryLoadContextV1_t::GetDoubleValue(); // 318
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 318
	KV3BinaryLoadContextV1_t::LoadPODValue<5>(
			KeyValues3* pTarget);  // 365
	KV3BinaryLoadContextV1_t::GetValue<long long int, long long unsigned int const>(
								const long long unsigned int ** ppGet,
								const long long unsigned int* pEnd);  // 202
	KV3BinaryLoadContextV1_t::GetInt64Value(); // 298
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 298
	KV3BinaryLoadContextV1_t::LoadPODValue<3>(
			KeyValues3* pTarget);  // 361
} /* size: 0, variables: 1, inline expansions: 65 (0 bytes) */

