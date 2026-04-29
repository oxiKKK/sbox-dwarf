
//
// kv3lib/keyvalues3_binaryreader_v0.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 58
//	struct: 1
//

// <0561AD58> kv3lib/keyvalues3_binaryreader_v0.cpp:25
// member functions: 3
// member variables: 6
// struct size: 40
struct KV3BinaryLoadContextV0_t {
	/* kv3lib/keyvalues3_binaryreader_v0.cpp:27 */
	void KV3BinaryLoadContextV0_t(KV3BinaryLoadContextV0_t* );
	CUtlString * m_pOutErrorMessage; /* 0 8 */
	CUtlBuffer * m_pSrcBuffer; /* 8 8 */
	const char * * m_ppStrings; /* 16 8 */
	KeyValues3LowercaseHash_t * m_pStringHashes; /* 24 8 */
	int m_nNumStrings; /* 32 4 */
	bool m_bRelyOnBufferForStorage; /* 36 1 */
	/* kv3lib/keyvalues3_binaryreader_v0.cpp:44 */
	const char* String(KV3BinaryLoadContextV0_t* , int);
	/* kv3lib/keyvalues3_binaryreader_v0.cpp:60 */
	KeyValues3LowercaseHash_t StringHash(KV3BinaryLoadContextV0_t* , int);
};

// <05627CAB> kv3lib/keyvalues3_binaryreader_v0.cpp:27
void KV3BinaryLoadContextV0_t::KV3BinaryLoadContextV0_t()
{
} /* size: 0 */

// <05627C92> kv3lib/keyvalues3_binaryreader_v0.cpp:27
inline void KV3BinaryLoadContextV0_t::KV3BinaryLoadContextV0_t()
{
} /* size: 0 */

// <05627C6D> kv3lib/keyvalues3_binaryreader_v0.cpp:44
inline void KV3BinaryLoadContextV0_t::String(int nIndex)
{
} /* size: 0 */

// <05627C3A> kv3lib/keyvalues3_binaryreader_v0.cpp:60
// variable: 1
inline void KV3BinaryLoadContextV0_t::StringHash(int nIndex)
{
	{
		KeyValues3LowercaseHash_t nHash; // 68
	}
} /* size: 0 */

// <056273F1> kv3lib/keyvalues3_binaryreader_v0.cpp:94
// variable: 1
// function calls: 29
KeyValues3BinaryType_t ReadTypeAndFlags(KV3BinaryLoadContextV0_t& loadContext, KeyValues3Flag_t& nFlags)
{
	byte nBinaryType; // 98
	CUtlBuffer::TellGet(); // 615
	CUtlBuffer::GetBytesRemaining(); // 96
	CUtlBuffer::IsText(); // 1047
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 690
	CUtlBuffer::BGetTypeBin<unsigned char>(
					unsigned char& dest);  // 672
	CUtlBuffer::BGetTypeBin<unsigned char>(
					unsigned char& dest);  // 1049
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 913
	StringToNumber<short unsigned int>(char* pString,
						char** ppEnd,
						int nRadix);  // 915
	CUtlBuffer::BGetTypeText<short unsigned int>(
					short unsigned int& value,
					int nRadix);  // 1053
	CUtlBuffer::BGetUnsignedChar(
			unsigned char* pOutUChar);  // 1043
	CUtlBuffer::BGetUnsignedChar(
			unsigned char* pOutUChar);  // 944
	CUtlBuffer::GetUnsignedChar(); // 98
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 690
	CUtlBuffer::BGetTypeBin<unsigned char>(
					unsigned char& dest);  // 672
	CUtlBuffer::BGetTypeBin<unsigned char>(
					unsigned char& dest);  // 1049
	CUtlBuffer::IsText(); // 1047
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 913
	StringToNumber<short unsigned int>(char* pString,
						char** ppEnd,
						int nRadix);  // 915
	CUtlBuffer::BGetTypeText<short unsigned int>(
					short unsigned int& value,
					int nRadix);  // 1053
	CUtlBuffer::BGetUnsignedChar(
			unsigned char* pOutUChar);  // 1043
	CUtlBuffer::BGetUnsignedChar(
			unsigned char* pOutUChar);  // 944
	CUtlBuffer::GetUnsignedChar(); // 102
	CUtlString::operator=(
			const char* src);  // 101
	CUtlBuffer::TellGet(); // 615
	CUtlBuffer::GetBytesRemaining(); // 101
} /* size: 466, variables: 1, inline expansions: 29 (1221 bytes) */

// <056273D3> kv3lib/keyvalues3_binaryreader_v0.cpp:118
KeyValues3Type_t GetKV3TypeForBinaryType(KeyValues3BinaryType_t nBinaryType)
{
} /* size: 0 */

// <05620696> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<1>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 27837
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <056205C9> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<2>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 27837
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <056204FC> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<13>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 27837
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <0562042F> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<14>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 27837
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <05620362> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<15>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 27837
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <05620295> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<16>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 27837
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <056201C8> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<3>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 27837
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <056200FB> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<4>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 27837
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <0562002E> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<11>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 27837
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <0561FF61> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<12>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 27837
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <0561FE94> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<5>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 27837
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <0561FDC7> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<17>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 27837
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <0561FCFA> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<18>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 27837
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <0561FC2D> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<6>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 27837
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <02998090> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<1>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 46508
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <02997FC3> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<2>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 46508
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <02997EF6> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<13>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 46508
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <02997E29> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<14>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 46508
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <02997BC2> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<3>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 46508
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <02997AF5> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<4>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 46508
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <02997A28> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<11>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 46508
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <0299795B> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<12>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 46508
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <006C860C> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<1>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 63640
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <006C853F> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<2>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 63640
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <006C8472> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<13>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 63640
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <006C83A5> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<14>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 63640
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <006C813E> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<3>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 63640
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <006C8071> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<4>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 63640
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <006C7FA4> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<11>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 63640
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <006C7ED7> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<12>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 63640
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <00AA0293> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<1>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 4255
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <00AA01C6> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<2>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 4255
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <00AA00F9> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<13>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 4255
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <00AA002C> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<14>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 4255
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <00A9FF5F> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<15>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 4255
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <00A9FE92> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<16>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 4255
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <00A9FDC5> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<3>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 4255
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <00A9FCF8> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<4>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 4255
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <00A9FC2B> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<11>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 4255
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <00A9FB5E> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<12>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 4255
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <00A9FA91> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<5>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 4255
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <00A9F9C4> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<17>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 4255
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <00A9F8F7> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<18>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 4255
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <00A9F82A> kv3lib/keyvalues3_binaryreader_v0.cpp:169
// variables: 9
inline bool LoadBinaryPODValue<6>(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 4255
	{
		bool bValue; // 191
	}
	{
		int64 nValue; // 209
	}
	{
		uint64 nValue; // 217
	}
	{
		int64 nValue; // 225
	}
	{
		uint64 nValue; // 233
	}
	{
		double doubleValue; // 241
	}
	{
		int nString; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <05623A56> kv3lib/keyvalues3_binaryreader_v0.cpp:278
// variables: 34
// function calls: 203
bool LoadKV3BinaryValue(KV3BinaryLoadContextV0_t& loadContext, KeyValues3BinaryType_t nBinaryType, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 27837
	{
		int nLength; // 300
		byte* pBlob; // 303
		CUtlString::operator=(
				const char* src);  // 302
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 299
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 300
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 302
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 303
		AimAtExternalBinaryBlob(KeyValues3* pTarget,
					byte* pData,
					int nSize);  // 308
	}
	{
		int nMemberCount; // 319
		{
			int i; // 322
			{
				int nMemberName; // 325
				KeyValues3* pMember; // 327
				CKV3MemberName memberName; // 329
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 451
				LoadKV3BinaryTypeAndValue(KV3BinaryLoadContextV0_t& loadContext,
								KeyValues3* pTarget);  // 340
				CUtlBuffer::TellGet(); // 615
				CUtlBuffer::GetBytesRemaining(); // 324
				CUtlBuffer::BGetInt(
					int* pOutInt);  // 965
				CUtlBuffer::GetInt(); // 325
				{
					KeyValues3LowercaseHash_t nHash; // 68
					CUtlStringToken::IsValid(); // 69
					KV3BinaryLoadContextV0_t::String(
						int nIndex);  // 71
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 151
					KV3MakeLowerHash(const char* pStr); // 71
				}
				KV3BinaryLoadContextV0_t::StringHash(
						int nIndex);  // 60
				KV3BinaryLoadContextV0_t::StringHash(
						int nIndex);  // 329
				KV3BinaryLoadContextV0_t::String(
					int nIndex);  // 329
				CKV3MemberName::CKV3MemberName(
						const char* pString,
						KeyValues3LowercaseHash_t nHash);  // 329
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 40
				FindOrCreateMemberAimedAtExternalName(KeyValues3* pTarget,
									CKV3MemberName memberNameAndHash);  // 333
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 333
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 337
			}
		}
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 318
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 319
	}
	{
		int nCount; // 350
		{
			int i; // 353
			{
				KeyValues3* pElement; // 355
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 451
				LoadKV3BinaryTypeAndValue(KV3BinaryLoadContextV0_t& loadContext,
								KeyValues3* pTarget);  // 356
			}
		}
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 349
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 350
	}
	{
		int nCount; // 368
		KeyValues3Flag_t nElementFlags; // 373
		KeyValues3BinaryType_t nArrayType; // 374
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 370
		}
		{
			double* pElements; // 393
			CUtlBuffer::TellGet(); // 615
			CUtlBuffer::GetBytesRemaining(); // 388
			CUtlMemory<unsigned char, int>::Base(); // 1484
			CUtlBuffer::Base(); // 393
			SetValueExternalDoubleArray(KeyValues3* pTarget,
							int nFloatsInArray,
							const double* pValues);  // 395
		}
		{
			int32* pElements; // 406
			CUtlBuffer::TellGet(); // 615
			CUtlBuffer::GetBytesRemaining(); // 401
			CUtlMemory<unsigned char, int>::Base(); // 1484
			CUtlBuffer::Base(); // 406
			SetValueExternalInt32Array(KeyValues3* pTarget,
							int nValues,
							const int32* pValues);  // 408
		}
		{
			int nValuesRead; // 418
			GetKV3TypeForBinaryType(KeyValues3BinaryType_t nBinaryType); // 416
			KeyValues3::SetAllFlags(
					KeyValues3Flag_t nFlag);  // 421
			operator()(const class* __closure,
					int element,
					KeyValues3* pElement); // 136
			KeyValues3::IterateArrayElements<LoadKV3BinaryValue(
																class& callback);  // 418
		}
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 367
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 368
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 253
	LoadBinaryPODValue<18>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 294
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 175
	LoadBinaryPODValue<1>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 282
	{
		bool bValue; // 191
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 190
		CUtlBuffer::IsText(); // 1047
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 672
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 1049
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<short unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
		CUtlBuffer::BGetTypeText<short unsigned int>(
						short unsigned int& value,
						int nRadix);  // 1053
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 1043
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 944
		CUtlBuffer::GetUnsignedChar(); // 191
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 215
		KeyValues3::SetValueBool(
				bool value);  // 193
	}
	LoadBinaryPODValue<2>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 283
	{
		int nString; // 259
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 258
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 259
		KV3BinaryLoadContextV0_t::String(
			int nIndex);  // 263
		AimAtExternalString(KeyValues3* pTarget,
					const char* pString);  // 263
		KV3BinaryLoadContextV0_t::String(
			int nIndex);  // 267
	}
	LoadBinaryPODValue<6>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 295
	{
		uint64 nValue; // 217
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 216
		CUtlBuffer::IsText(); // 928
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<long long unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
		CUtlBuffer::BGetTypeText<long long unsigned int>(
							long long unsigned int& value,
							int nRadix);  // 929
		CUtlBuffer::BGetType<long long unsigned int>(
						long long unsigned int& dest);  // 926
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
			LowLevelByteSwap<long long unsigned int>(long long unsigned int* output,
								long long unsigned int* input);  // 202
		}
		CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
								long long unsigned int* outputBuffer,
								long long unsigned int* inputBuffer,
								int count);  // 170
		CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
								long long unsigned int* outputBuffer,
								long long unsigned int* inputBuffer,
								int count);  // 694
		CUtlBuffer::BGetTypeBin<long long unsigned int>(
							long long unsigned int& dest);  // 672
		CUtlBuffer::BGetTypeBin<long long unsigned int>(
							long long unsigned int& dest);  // 930
		CUtlBuffer::BGetType<long long unsigned int>(
						long long unsigned int& dest);  // 1120
		CUtlBuffer::BGetUnsignedInt64(
					uint64* pOutUint64);  // 979
		CUtlBuffer::GetUnsignedInt64(); // 217
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 227
		KeyValues3::SetValueUint64(
				uint64 value);  // 219
	}
	LoadBinaryPODValue<4>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 289
	{
		double doubleValue; // 241
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 240
		CUtlBuffer::IsText(); // 928
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<double>(char* pString,
					char** ppEnd,
					int nRadix);  // 915
		CUtlBuffer::BGetTypeText<double>(
					double& value,
					int nRadix);  // 929
		CUtlBuffer::BGetType<double>(
				double& dest);  // 926
		{
			uintp pData; // 755
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 755
			CByteswap::IsSwappingBytes(); // 774
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
				LowLevelByteSwap<double>(double* output,
							double* input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<double>(
							double* outputBuffer,
							double* inputBuffer,
							int count);  // 170
			CByteswap::SwapBufferToTargetEndian<double>(
							double* outputBuffer,
							double* inputBuffer,
							int count);  // 776
		}
		CUtlBuffer::BGetTypeBin<double>(
					double& dest);  // 744
		CUtlBuffer::BGetTypeBin<double>(
					double& dest);  // 930
		CUtlBuffer::BGetType<double>(
				double& dest);  // 1122
		CUtlBuffer::BGetDouble(
				double* pOutDouble);  // 1007
		CUtlBuffer::GetDouble(); // 241
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 239
		KeyValues3::SetValueDouble(
				double value);  // 243
	}
	LoadBinaryPODValue<5>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 292
	{
		int64 nValue; // 209
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 208
		CUtlBuffer::IsText(); // 928
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<long long int>(char* pString,
						char** ppEnd,
						int nRadix);  // 915
		CUtlBuffer::BGetTypeText<long long int>(
						long long int& value,
						int nRadix);  // 929
		CUtlBuffer::BGetType<long long int>(
					long long int& dest);  // 926
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
			LowLevelByteSwap<long long int>(long long int* output,
							long long int* input);  // 202
		}
		CByteswap::SwapBufferToTargetEndian<long long int>(
							long long int* outputBuffer,
							long long int* inputBuffer,
							int count);  // 170
		CByteswap::SwapBufferToTargetEndian<long long int>(
							long long int* outputBuffer,
							long long int* inputBuffer,
							int count);  // 694
		CUtlBuffer::BGetTypeBin<long long int>(
						long long int& dest);  // 672
		CUtlBuffer::BGetTypeBin<long long int>(
						long long int& dest);  // 930
		CUtlBuffer::BGetType<long long int>(
					long long int& dest);  // 1118
		CUtlBuffer::BGetInt64(
				int64* pOutInt64);  // 972
		CUtlBuffer::GetInt64(); // 209
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 233
		KeyValues3::SetValueInt64(
				int64 value);  // 211
	}
	LoadBinaryPODValue<3>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 288
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 185
	LoadBinaryPODValue<14>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 285
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 198
	LoadBinaryPODValue<15>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 286
	{
		uint64 nValue; // 233
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 232
		CUtlBuffer::BGetUnsignedInt(
				uint* pOutUint);  // 993
		CUtlBuffer::GetUnsignedInt(); // 233
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 227
		KeyValues3::SetValueUint64(
				uint64 value);  // 235
	}
	LoadBinaryPODValue<12>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 291
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 203
	LoadBinaryPODValue<16>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 287
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 248
	LoadBinaryPODValue<17>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 293
	{
		int64 nValue; // 225
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 224
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 225
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 233
		KeyValues3::SetValueInt64(
				int64 value);  // 227
	}
	LoadBinaryPODValue<11>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 290
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 180
	LoadBinaryPODValue<13>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 284
} /* size: 0, variables: 1, inline expansions: 35 (2607 bytes) */

// <0299B450> kv3lib/keyvalues3_binaryreader_v0.cpp:278
// variables: 34
// function calls: 203
bool LoadKV3BinaryValue(KV3BinaryLoadContextV0_t& loadContext, KeyValues3BinaryType_t nBinaryType, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 46508
	{
		int nLength; // 300
		byte* pBlob; // 303
		CUtlString::operator=(
				const char* src);  // 302
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 299
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 300
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 302
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 303
		AimAtExternalBinaryBlob(KeyValues3* pTarget,
					byte* pData,
					int nSize);  // 308
	}
	{
		int nMemberCount; // 319
		{
			int i; // 322
			{
				int nMemberName; // 325
				KeyValues3* pMember; // 327
				CKV3MemberName memberName; // 329
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 451
				LoadKV3BinaryTypeAndValue(KV3BinaryLoadContextV0_t& loadContext,
								KeyValues3* pTarget);  // 340
				CUtlBuffer::TellGet(); // 615
				CUtlBuffer::GetBytesRemaining(); // 324
				CUtlBuffer::BGetInt(
					int* pOutInt);  // 965
				CUtlBuffer::GetInt(); // 325
				{
					KeyValues3LowercaseHash_t nHash; // 68
					CUtlStringToken::IsValid(); // 69
					KV3BinaryLoadContextV0_t::String(
						int nIndex);  // 71
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 151
					KV3MakeLowerHash(const char* pStr); // 71
				}
				KV3BinaryLoadContextV0_t::StringHash(
						int nIndex);  // 60
				KV3BinaryLoadContextV0_t::StringHash(
						int nIndex);  // 329
				KV3BinaryLoadContextV0_t::String(
					int nIndex);  // 329
				CKV3MemberName::CKV3MemberName(
						const char* pString,
						KeyValues3LowercaseHash_t nHash);  // 329
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 40
				FindOrCreateMemberAimedAtExternalName(KeyValues3* pTarget,
									CKV3MemberName memberNameAndHash);  // 333
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 333
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 337
			}
		}
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 318
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 319
	}
	{
		int nCount; // 350
		{
			int i; // 353
			{
				KeyValues3* pElement; // 355
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 451
				LoadKV3BinaryTypeAndValue(KV3BinaryLoadContextV0_t& loadContext,
								KeyValues3* pTarget);  // 356
			}
		}
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 349
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 350
	}
	{
		int nCount; // 368
		KeyValues3Flag_t nElementFlags; // 373
		KeyValues3BinaryType_t nArrayType; // 374
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 370
		}
		{
			double* pElements; // 393
			CUtlBuffer::TellGet(); // 615
			CUtlBuffer::GetBytesRemaining(); // 388
			CUtlMemory<unsigned char, int>::Base(); // 1484
			CUtlBuffer::Base(); // 393
			SetValueExternalDoubleArray(KeyValues3* pTarget,
							int nFloatsInArray,
							const double* pValues);  // 395
		}
		{
			int32* pElements; // 406
			CUtlBuffer::TellGet(); // 615
			CUtlBuffer::GetBytesRemaining(); // 401
			CUtlMemory<unsigned char, int>::Base(); // 1484
			CUtlBuffer::Base(); // 406
			SetValueExternalInt32Array(KeyValues3* pTarget,
							int nValues,
							const int32* pValues);  // 408
		}
		{
			int nValuesRead; // 418
			GetKV3TypeForBinaryType(KeyValues3BinaryType_t nBinaryType); // 416
			KeyValues3::SetAllFlags(
					KeyValues3Flag_t nFlag);  // 421
			operator()(const class* __closure,
					int element,
					KeyValues3* pElement); // 136
			KeyValues3::IterateArrayElements<LoadKV3BinaryValue(
																class& callback);  // 418
		}
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 367
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 368
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 253
	LoadBinaryPODValue<18>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 294
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 175
	LoadBinaryPODValue<1>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 282
	{
		bool bValue; // 191
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 190
		CUtlBuffer::IsText(); // 1047
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 672
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 1049
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<short unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
		CUtlBuffer::BGetTypeText<short unsigned int>(
						short unsigned int& value,
						int nRadix);  // 1053
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 1043
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 944
		CUtlBuffer::GetUnsignedChar(); // 191
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 215
		KeyValues3::SetValueBool(
				bool value);  // 193
	}
	LoadBinaryPODValue<2>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 283
	{
		int nString; // 259
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 258
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 259
		KV3BinaryLoadContextV0_t::String(
			int nIndex);  // 263
		AimAtExternalString(KeyValues3* pTarget,
					const char* pString);  // 263
		KV3BinaryLoadContextV0_t::String(
			int nIndex);  // 267
	}
	LoadBinaryPODValue<6>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 295
	{
		uint64 nValue; // 217
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 216
		CUtlBuffer::IsText(); // 928
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<long long unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
		CUtlBuffer::BGetTypeText<long long unsigned int>(
							long long unsigned int& value,
							int nRadix);  // 929
		CUtlBuffer::BGetType<long long unsigned int>(
						long long unsigned int& dest);  // 926
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
			LowLevelByteSwap<long long unsigned int>(long long unsigned int* output,
								long long unsigned int* input);  // 202
		}
		CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
								long long unsigned int* outputBuffer,
								long long unsigned int* inputBuffer,
								int count);  // 170
		CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
								long long unsigned int* outputBuffer,
								long long unsigned int* inputBuffer,
								int count);  // 694
		CUtlBuffer::BGetTypeBin<long long unsigned int>(
							long long unsigned int& dest);  // 672
		CUtlBuffer::BGetTypeBin<long long unsigned int>(
							long long unsigned int& dest);  // 930
		CUtlBuffer::BGetType<long long unsigned int>(
						long long unsigned int& dest);  // 1120
		CUtlBuffer::BGetUnsignedInt64(
					uint64* pOutUint64);  // 979
		CUtlBuffer::GetUnsignedInt64(); // 217
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 227
		KeyValues3::SetValueUint64(
				uint64 value);  // 219
	}
	LoadBinaryPODValue<4>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 289
	{
		double doubleValue; // 241
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 240
		CUtlBuffer::IsText(); // 928
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<double>(char* pString,
					char** ppEnd,
					int nRadix);  // 915
		CUtlBuffer::BGetTypeText<double>(
					double& value,
					int nRadix);  // 929
		CUtlBuffer::BGetType<double>(
				double& dest);  // 926
		{
			uintp pData; // 755
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 755
			CByteswap::IsSwappingBytes(); // 774
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
				LowLevelByteSwap<double>(double* output,
							double* input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<double>(
							double* outputBuffer,
							double* inputBuffer,
							int count);  // 170
			CByteswap::SwapBufferToTargetEndian<double>(
							double* outputBuffer,
							double* inputBuffer,
							int count);  // 776
		}
		CUtlBuffer::BGetTypeBin<double>(
					double& dest);  // 744
		CUtlBuffer::BGetTypeBin<double>(
					double& dest);  // 930
		CUtlBuffer::BGetType<double>(
				double& dest);  // 1122
		CUtlBuffer::BGetDouble(
				double* pOutDouble);  // 1007
		CUtlBuffer::GetDouble(); // 241
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 239
		KeyValues3::SetValueDouble(
				double value);  // 243
	}
	LoadBinaryPODValue<5>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 292
	{
		int64 nValue; // 209
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 208
		CUtlBuffer::IsText(); // 928
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<long long int>(char* pString,
						char** ppEnd,
						int nRadix);  // 915
		CUtlBuffer::BGetTypeText<long long int>(
						long long int& value,
						int nRadix);  // 929
		CUtlBuffer::BGetType<long long int>(
					long long int& dest);  // 926
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
			LowLevelByteSwap<long long int>(long long int* output,
							long long int* input);  // 202
		}
		CByteswap::SwapBufferToTargetEndian<long long int>(
							long long int* outputBuffer,
							long long int* inputBuffer,
							int count);  // 170
		CByteswap::SwapBufferToTargetEndian<long long int>(
							long long int* outputBuffer,
							long long int* inputBuffer,
							int count);  // 694
		CUtlBuffer::BGetTypeBin<long long int>(
						long long int& dest);  // 672
		CUtlBuffer::BGetTypeBin<long long int>(
						long long int& dest);  // 930
		CUtlBuffer::BGetType<long long int>(
					long long int& dest);  // 1118
		CUtlBuffer::BGetInt64(
				int64* pOutInt64);  // 972
		CUtlBuffer::GetInt64(); // 209
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 233
		KeyValues3::SetValueInt64(
				int64 value);  // 211
	}
	LoadBinaryPODValue<3>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 288
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 185
	LoadBinaryPODValue<14>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 285
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 198
	LoadBinaryPODValue<15>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 286
	{
		uint64 nValue; // 233
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 232
		CUtlBuffer::BGetUnsignedInt(
				uint* pOutUint);  // 993
		CUtlBuffer::GetUnsignedInt(); // 233
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 227
		KeyValues3::SetValueUint64(
				uint64 value);  // 235
	}
	LoadBinaryPODValue<12>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 291
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 203
	LoadBinaryPODValue<16>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 287
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 248
	LoadBinaryPODValue<17>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 293
	{
		int64 nValue; // 225
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 224
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 225
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 233
		KeyValues3::SetValueInt64(
				int64 value);  // 227
	}
	LoadBinaryPODValue<11>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 290
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 180
	LoadBinaryPODValue<13>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 284
} /* size: 0, variables: 1, inline expansions: 35 (2607 bytes) */

// <012EB005> kv3lib/keyvalues3_binaryreader_v0.cpp:278
// variables: 34
// function calls: 203
bool LoadKV3BinaryValue(KV3BinaryLoadContextV0_t& loadContext, KeyValues3BinaryType_t nBinaryType, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 51487
	{
		int nLength; // 300
		byte* pBlob; // 303
		CUtlString::operator=(
				const char* src);  // 302
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 299
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 300
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 302
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 303
		AimAtExternalBinaryBlob(KeyValues3* pTarget,
					byte* pData,
					int nSize);  // 308
	}
	{
		int nMemberCount; // 319
		{
			int i; // 322
			{
				int nMemberName; // 325
				KeyValues3* pMember; // 327
				CKV3MemberName memberName; // 329
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 451
				LoadKV3BinaryTypeAndValue(KV3BinaryLoadContextV0_t& loadContext,
								KeyValues3* pTarget);  // 340
				CUtlBuffer::TellGet(); // 615
				CUtlBuffer::GetBytesRemaining(); // 324
				CUtlBuffer::BGetInt(
					int* pOutInt);  // 965
				CUtlBuffer::GetInt(); // 325
				{
					KeyValues3LowercaseHash_t nHash; // 68
					CUtlStringToken::IsValid(); // 69
					KV3BinaryLoadContextV0_t::String(
						int nIndex);  // 71
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 151
					KV3MakeLowerHash(const char* pStr); // 71
				}
				KV3BinaryLoadContextV0_t::StringHash(
						int nIndex);  // 60
				KV3BinaryLoadContextV0_t::StringHash(
						int nIndex);  // 329
				KV3BinaryLoadContextV0_t::String(
					int nIndex);  // 329
				CKV3MemberName::CKV3MemberName(
						const char* pString,
						KeyValues3LowercaseHash_t nHash);  // 329
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 40
				FindOrCreateMemberAimedAtExternalName(KeyValues3* pTarget,
									CKV3MemberName memberNameAndHash);  // 333
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 333
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 337
			}
		}
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 318
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 319
	}
	{
		int nCount; // 350
		{
			int i; // 353
			{
				KeyValues3* pElement; // 355
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 451
				LoadKV3BinaryTypeAndValue(KV3BinaryLoadContextV0_t& loadContext,
								KeyValues3* pTarget);  // 356
			}
		}
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 349
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 350
	}
	{
		int nCount; // 368
		KeyValues3Flag_t nElementFlags; // 373
		KeyValues3BinaryType_t nArrayType; // 374
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 370
		}
		{
			double* pElements; // 393
			CUtlBuffer::TellGet(); // 615
			CUtlBuffer::GetBytesRemaining(); // 388
			CUtlMemory<unsigned char, int>::Base(); // 1484
			CUtlBuffer::Base(); // 393
			SetValueExternalDoubleArray(KeyValues3* pTarget,
							int nFloatsInArray,
							const double* pValues);  // 395
		}
		{
			int32* pElements; // 406
			CUtlBuffer::TellGet(); // 615
			CUtlBuffer::GetBytesRemaining(); // 401
			CUtlMemory<unsigned char, int>::Base(); // 1484
			CUtlBuffer::Base(); // 406
			SetValueExternalInt32Array(KeyValues3* pTarget,
							int nValues,
							const int32* pValues);  // 408
		}
		{
			int nValuesRead; // 418
			GetKV3TypeForBinaryType(KeyValues3BinaryType_t nBinaryType); // 416
			KeyValues3::SetAllFlags(
					KeyValues3Flag_t nFlag);  // 421
			operator()(const class* __closure,
					int element,
					KeyValues3* pElement); // 136
			KeyValues3::IterateArrayElements<LoadKV3BinaryValue(
																class& callback);  // 418
		}
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 367
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 368
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 253
	LoadBinaryPODValue<18>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 294
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 175
	LoadBinaryPODValue<1>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 282
	{
		bool bValue; // 191
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 190
		CUtlBuffer::IsText(); // 1047
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 672
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 1049
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<short unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
		CUtlBuffer::BGetTypeText<short unsigned int>(
						short unsigned int& value,
						int nRadix);  // 1053
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 1043
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 944
		CUtlBuffer::GetUnsignedChar(); // 191
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 215
		KeyValues3::SetValueBool(
				bool value);  // 193
	}
	LoadBinaryPODValue<2>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 283
	{
		int nString; // 259
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 258
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 259
		KV3BinaryLoadContextV0_t::String(
			int nIndex);  // 263
		AimAtExternalString(KeyValues3* pTarget,
					const char* pString);  // 263
		KV3BinaryLoadContextV0_t::String(
			int nIndex);  // 267
	}
	LoadBinaryPODValue<6>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 295
	{
		uint64 nValue; // 217
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 216
		CUtlBuffer::IsText(); // 928
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<long long unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
		CUtlBuffer::BGetTypeText<long long unsigned int>(
							long long unsigned int& value,
							int nRadix);  // 929
		CUtlBuffer::BGetType<long long unsigned int>(
						long long unsigned int& dest);  // 926
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
			LowLevelByteSwap<long long unsigned int>(long long unsigned int* output,
								long long unsigned int* input);  // 202
		}
		CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
								long long unsigned int* outputBuffer,
								long long unsigned int* inputBuffer,
								int count);  // 170
		CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
								long long unsigned int* outputBuffer,
								long long unsigned int* inputBuffer,
								int count);  // 694
		CUtlBuffer::BGetTypeBin<long long unsigned int>(
							long long unsigned int& dest);  // 672
		CUtlBuffer::BGetTypeBin<long long unsigned int>(
							long long unsigned int& dest);  // 930
		CUtlBuffer::BGetType<long long unsigned int>(
						long long unsigned int& dest);  // 1120
		CUtlBuffer::BGetUnsignedInt64(
					uint64* pOutUint64);  // 979
		CUtlBuffer::GetUnsignedInt64(); // 217
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 227
		KeyValues3::SetValueUint64(
				uint64 value);  // 219
	}
	LoadBinaryPODValue<4>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 289
	{
		double doubleValue; // 241
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 240
		CUtlBuffer::IsText(); // 928
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<double>(char* pString,
					char** ppEnd,
					int nRadix);  // 915
		CUtlBuffer::BGetTypeText<double>(
					double& value,
					int nRadix);  // 929
		CUtlBuffer::BGetType<double>(
				double& dest);  // 926
		{
			uintp pData; // 755
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 755
			CByteswap::IsSwappingBytes(); // 774
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
				LowLevelByteSwap<double>(double* output,
							double* input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<double>(
							double* outputBuffer,
							double* inputBuffer,
							int count);  // 170
			CByteswap::SwapBufferToTargetEndian<double>(
							double* outputBuffer,
							double* inputBuffer,
							int count);  // 776
		}
		CUtlBuffer::BGetTypeBin<double>(
					double& dest);  // 744
		CUtlBuffer::BGetTypeBin<double>(
					double& dest);  // 930
		CUtlBuffer::BGetType<double>(
				double& dest);  // 1122
		CUtlBuffer::BGetDouble(
				double* pOutDouble);  // 1007
		CUtlBuffer::GetDouble(); // 241
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 239
		KeyValues3::SetValueDouble(
				double value);  // 243
	}
	LoadBinaryPODValue<5>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 292
	{
		int64 nValue; // 209
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 208
		CUtlBuffer::IsText(); // 928
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<long long int>(char* pString,
						char** ppEnd,
						int nRadix);  // 915
		CUtlBuffer::BGetTypeText<long long int>(
						long long int& value,
						int nRadix);  // 929
		CUtlBuffer::BGetType<long long int>(
					long long int& dest);  // 926
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
			LowLevelByteSwap<long long int>(long long int* output,
							long long int* input);  // 202
		}
		CByteswap::SwapBufferToTargetEndian<long long int>(
							long long int* outputBuffer,
							long long int* inputBuffer,
							int count);  // 170
		CByteswap::SwapBufferToTargetEndian<long long int>(
							long long int* outputBuffer,
							long long int* inputBuffer,
							int count);  // 694
		CUtlBuffer::BGetTypeBin<long long int>(
						long long int& dest);  // 672
		CUtlBuffer::BGetTypeBin<long long int>(
						long long int& dest);  // 930
		CUtlBuffer::BGetType<long long int>(
					long long int& dest);  // 1118
		CUtlBuffer::BGetInt64(
				int64* pOutInt64);  // 972
		CUtlBuffer::GetInt64(); // 209
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 233
		KeyValues3::SetValueInt64(
				int64 value);  // 211
	}
	LoadBinaryPODValue<3>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 288
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 185
	LoadBinaryPODValue<14>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 285
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 198
	LoadBinaryPODValue<15>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 286
	{
		uint64 nValue; // 233
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 232
		CUtlBuffer::BGetUnsignedInt(
				uint* pOutUint);  // 993
		CUtlBuffer::GetUnsignedInt(); // 233
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 227
		KeyValues3::SetValueUint64(
				uint64 value);  // 235
	}
	LoadBinaryPODValue<12>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 291
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 203
	LoadBinaryPODValue<16>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 287
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 248
	LoadBinaryPODValue<17>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 293
	{
		int64 nValue; // 225
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 224
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 225
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 233
		KeyValues3::SetValueInt64(
				int64 value);  // 227
	}
	LoadBinaryPODValue<11>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 290
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 180
	LoadBinaryPODValue<13>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 284
} /* size: 0, variables: 1, inline expansions: 35 (2607 bytes) */

// <006CB9CC> kv3lib/keyvalues3_binaryreader_v0.cpp:278
// variables: 34
// function calls: 203
bool LoadKV3BinaryValue(KV3BinaryLoadContextV0_t& loadContext, KeyValues3BinaryType_t nBinaryType, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 63640
	{
		int nLength; // 300
		byte* pBlob; // 303
		CUtlString::operator=(
				const char* src);  // 302
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 299
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 300
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 302
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 303
		AimAtExternalBinaryBlob(KeyValues3* pTarget,
					byte* pData,
					int nSize);  // 308
	}
	{
		int nMemberCount; // 319
		{
			int i; // 322
			{
				int nMemberName; // 325
				KeyValues3* pMember; // 327
				CKV3MemberName memberName; // 329
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 451
				LoadKV3BinaryTypeAndValue(KV3BinaryLoadContextV0_t& loadContext,
								KeyValues3* pTarget);  // 340
				CUtlBuffer::TellGet(); // 615
				CUtlBuffer::GetBytesRemaining(); // 324
				CUtlBuffer::BGetInt(
					int* pOutInt);  // 965
				CUtlBuffer::GetInt(); // 325
				{
					KeyValues3LowercaseHash_t nHash; // 68
					CUtlStringToken::IsValid(); // 69
					KV3BinaryLoadContextV0_t::String(
						int nIndex);  // 71
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 151
					KV3MakeLowerHash(const char* pStr); // 71
				}
				KV3BinaryLoadContextV0_t::StringHash(
						int nIndex);  // 60
				KV3BinaryLoadContextV0_t::StringHash(
						int nIndex);  // 329
				KV3BinaryLoadContextV0_t::String(
					int nIndex);  // 329
				CKV3MemberName::CKV3MemberName(
						const char* pString,
						KeyValues3LowercaseHash_t nHash);  // 329
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 40
				FindOrCreateMemberAimedAtExternalName(KeyValues3* pTarget,
									CKV3MemberName memberNameAndHash);  // 333
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 333
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 337
			}
		}
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 318
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 319
	}
	{
		int nCount; // 350
		{
			int i; // 353
			{
				KeyValues3* pElement; // 355
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 451
				LoadKV3BinaryTypeAndValue(KV3BinaryLoadContextV0_t& loadContext,
								KeyValues3* pTarget);  // 356
			}
		}
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 349
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 350
	}
	{
		int nCount; // 368
		KeyValues3Flag_t nElementFlags; // 373
		KeyValues3BinaryType_t nArrayType; // 374
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 370
		}
		{
			double* pElements; // 393
			CUtlBuffer::TellGet(); // 615
			CUtlBuffer::GetBytesRemaining(); // 388
			CUtlMemory<unsigned char, int>::Base(); // 1484
			CUtlBuffer::Base(); // 393
			SetValueExternalDoubleArray(KeyValues3* pTarget,
							int nFloatsInArray,
							const double* pValues);  // 395
		}
		{
			int32* pElements; // 406
			CUtlBuffer::TellGet(); // 615
			CUtlBuffer::GetBytesRemaining(); // 401
			CUtlMemory<unsigned char, int>::Base(); // 1484
			CUtlBuffer::Base(); // 406
			SetValueExternalInt32Array(KeyValues3* pTarget,
							int nValues,
							const int32* pValues);  // 408
		}
		{
			int nValuesRead; // 418
			GetKV3TypeForBinaryType(KeyValues3BinaryType_t nBinaryType); // 416
			KeyValues3::SetAllFlags(
					KeyValues3Flag_t nFlag);  // 421
			operator()(const class* __closure,
					int element,
					KeyValues3* pElement); // 136
			KeyValues3::IterateArrayElements<LoadKV3BinaryValue(
																class& callback);  // 418
		}
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 367
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 368
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 253
	LoadBinaryPODValue<18>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 294
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 175
	LoadBinaryPODValue<1>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 282
	{
		bool bValue; // 191
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 190
		CUtlBuffer::IsText(); // 1047
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 672
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 1049
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<short unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
		CUtlBuffer::BGetTypeText<short unsigned int>(
						short unsigned int& value,
						int nRadix);  // 1053
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 1043
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 944
		CUtlBuffer::GetUnsignedChar(); // 191
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 215
		KeyValues3::SetValueBool(
				bool value);  // 193
	}
	LoadBinaryPODValue<2>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 283
	{
		int nString; // 259
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 258
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 259
		KV3BinaryLoadContextV0_t::String(
			int nIndex);  // 263
		AimAtExternalString(KeyValues3* pTarget,
					const char* pString);  // 263
		KV3BinaryLoadContextV0_t::String(
			int nIndex);  // 267
	}
	LoadBinaryPODValue<6>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 295
	{
		uint64 nValue; // 217
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 216
		CUtlBuffer::IsText(); // 928
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<long long unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
		CUtlBuffer::BGetTypeText<long long unsigned int>(
							long long unsigned int& value,
							int nRadix);  // 929
		CUtlBuffer::BGetType<long long unsigned int>(
						long long unsigned int& dest);  // 926
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
			LowLevelByteSwap<long long unsigned int>(long long unsigned int* output,
								long long unsigned int* input);  // 202
		}
		CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
								long long unsigned int* outputBuffer,
								long long unsigned int* inputBuffer,
								int count);  // 170
		CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
								long long unsigned int* outputBuffer,
								long long unsigned int* inputBuffer,
								int count);  // 694
		CUtlBuffer::BGetTypeBin<long long unsigned int>(
							long long unsigned int& dest);  // 672
		CUtlBuffer::BGetTypeBin<long long unsigned int>(
							long long unsigned int& dest);  // 930
		CUtlBuffer::BGetType<long long unsigned int>(
						long long unsigned int& dest);  // 1120
		CUtlBuffer::BGetUnsignedInt64(
					uint64* pOutUint64);  // 979
		CUtlBuffer::GetUnsignedInt64(); // 217
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 227
		KeyValues3::SetValueUint64(
				uint64 value);  // 219
	}
	LoadBinaryPODValue<4>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 289
	{
		double doubleValue; // 241
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 240
		CUtlBuffer::IsText(); // 928
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<double>(char* pString,
					char** ppEnd,
					int nRadix);  // 915
		CUtlBuffer::BGetTypeText<double>(
					double& value,
					int nRadix);  // 929
		CUtlBuffer::BGetType<double>(
				double& dest);  // 926
		{
			uintp pData; // 755
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 755
			CByteswap::IsSwappingBytes(); // 774
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
				LowLevelByteSwap<double>(double* output,
							double* input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<double>(
							double* outputBuffer,
							double* inputBuffer,
							int count);  // 170
			CByteswap::SwapBufferToTargetEndian<double>(
							double* outputBuffer,
							double* inputBuffer,
							int count);  // 776
		}
		CUtlBuffer::BGetTypeBin<double>(
					double& dest);  // 744
		CUtlBuffer::BGetTypeBin<double>(
					double& dest);  // 930
		CUtlBuffer::BGetType<double>(
				double& dest);  // 1122
		CUtlBuffer::BGetDouble(
				double* pOutDouble);  // 1007
		CUtlBuffer::GetDouble(); // 241
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 239
		KeyValues3::SetValueDouble(
				double value);  // 243
	}
	LoadBinaryPODValue<5>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 292
	{
		int64 nValue; // 209
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 208
		CUtlBuffer::IsText(); // 928
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<long long int>(char* pString,
						char** ppEnd,
						int nRadix);  // 915
		CUtlBuffer::BGetTypeText<long long int>(
						long long int& value,
						int nRadix);  // 929
		CUtlBuffer::BGetType<long long int>(
					long long int& dest);  // 926
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
			LowLevelByteSwap<long long int>(long long int* output,
							long long int* input);  // 202
		}
		CByteswap::SwapBufferToTargetEndian<long long int>(
							long long int* outputBuffer,
							long long int* inputBuffer,
							int count);  // 170
		CByteswap::SwapBufferToTargetEndian<long long int>(
							long long int* outputBuffer,
							long long int* inputBuffer,
							int count);  // 694
		CUtlBuffer::BGetTypeBin<long long int>(
						long long int& dest);  // 672
		CUtlBuffer::BGetTypeBin<long long int>(
						long long int& dest);  // 930
		CUtlBuffer::BGetType<long long int>(
					long long int& dest);  // 1118
		CUtlBuffer::BGetInt64(
				int64* pOutInt64);  // 972
		CUtlBuffer::GetInt64(); // 209
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 233
		KeyValues3::SetValueInt64(
				int64 value);  // 211
	}
	LoadBinaryPODValue<3>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 288
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 185
	LoadBinaryPODValue<14>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 285
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 198
	LoadBinaryPODValue<15>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 286
	{
		uint64 nValue; // 233
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 232
		CUtlBuffer::BGetUnsignedInt(
				uint* pOutUint);  // 993
		CUtlBuffer::GetUnsignedInt(); // 233
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 227
		KeyValues3::SetValueUint64(
				uint64 value);  // 235
	}
	LoadBinaryPODValue<12>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 291
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 203
	LoadBinaryPODValue<16>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 287
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 248
	LoadBinaryPODValue<17>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 293
	{
		int64 nValue; // 225
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 224
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 225
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 233
		KeyValues3::SetValueInt64(
				int64 value);  // 227
	}
	LoadBinaryPODValue<11>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 290
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 180
	LoadBinaryPODValue<13>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 284
} /* size: 0, variables: 1, inline expansions: 35 (2607 bytes) */

// <00AA3653> kv3lib/keyvalues3_binaryreader_v0.cpp:278
// variables: 34
// function calls: 203
bool LoadKV3BinaryValue(KV3BinaryLoadContextV0_t& loadContext, KeyValues3BinaryType_t nBinaryType, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 4255
	{
		int nLength; // 300
		byte* pBlob; // 303
		CUtlString::operator=(
				const char* src);  // 302
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 299
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 300
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 302
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 303
		AimAtExternalBinaryBlob(KeyValues3* pTarget,
					byte* pData,
					int nSize);  // 308
	}
	{
		int nMemberCount; // 319
		{
			int i; // 322
			{
				int nMemberName; // 325
				KeyValues3* pMember; // 327
				CKV3MemberName memberName; // 329
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 451
				LoadKV3BinaryTypeAndValue(KV3BinaryLoadContextV0_t& loadContext,
								KeyValues3* pTarget);  // 340
				CUtlBuffer::TellGet(); // 615
				CUtlBuffer::GetBytesRemaining(); // 324
				CUtlBuffer::BGetInt(
					int* pOutInt);  // 965
				CUtlBuffer::GetInt(); // 325
				{
					KeyValues3LowercaseHash_t nHash; // 68
					CUtlStringToken::IsValid(); // 69
					KV3BinaryLoadContextV0_t::String(
						int nIndex);  // 71
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 151
					KV3MakeLowerHash(const char* pStr); // 71
				}
				KV3BinaryLoadContextV0_t::StringHash(
						int nIndex);  // 60
				KV3BinaryLoadContextV0_t::StringHash(
						int nIndex);  // 329
				KV3BinaryLoadContextV0_t::String(
					int nIndex);  // 329
				CKV3MemberName::CKV3MemberName(
						const char* pString,
						KeyValues3LowercaseHash_t nHash);  // 329
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 40
				FindOrCreateMemberAimedAtExternalName(KeyValues3* pTarget,
									CKV3MemberName memberNameAndHash);  // 333
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 333
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 337
			}
		}
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 318
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 319
	}
	{
		int nCount; // 350
		{
			int i; // 353
			{
				KeyValues3* pElement; // 355
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 451
				LoadKV3BinaryTypeAndValue(KV3BinaryLoadContextV0_t& loadContext,
								KeyValues3* pTarget);  // 356
			}
		}
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 349
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 350
	}
	{
		int nCount; // 368
		KeyValues3Flag_t nElementFlags; // 373
		KeyValues3BinaryType_t nArrayType; // 374
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 370
		}
		{
			double* pElements; // 393
			CUtlBuffer::TellGet(); // 615
			CUtlBuffer::GetBytesRemaining(); // 388
			CUtlMemory<unsigned char, int>::Base(); // 1484
			CUtlBuffer::Base(); // 393
			SetValueExternalDoubleArray(KeyValues3* pTarget,
							int nFloatsInArray,
							const double* pValues);  // 395
		}
		{
			int32* pElements; // 406
			CUtlBuffer::TellGet(); // 615
			CUtlBuffer::GetBytesRemaining(); // 401
			CUtlMemory<unsigned char, int>::Base(); // 1484
			CUtlBuffer::Base(); // 406
			SetValueExternalInt32Array(KeyValues3* pTarget,
							int nValues,
							const int32* pValues);  // 408
		}
		{
			int nValuesRead; // 418
			GetKV3TypeForBinaryType(KeyValues3BinaryType_t nBinaryType); // 416
			KeyValues3::SetAllFlags(
					KeyValues3Flag_t nFlag);  // 421
			operator()(const class* __closure,
					int element,
					KeyValues3* pElement); // 136
			KeyValues3::IterateArrayElements<LoadKV3BinaryValue(
																class& callback);  // 418
		}
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 367
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 368
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 253
	LoadBinaryPODValue<18>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 294
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 175
	LoadBinaryPODValue<1>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 282
	{
		bool bValue; // 191
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 190
		CUtlBuffer::IsText(); // 1047
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 672
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 1049
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<short unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
		CUtlBuffer::BGetTypeText<short unsigned int>(
						short unsigned int& value,
						int nRadix);  // 1053
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 1043
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 944
		CUtlBuffer::GetUnsignedChar(); // 191
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 215
		KeyValues3::SetValueBool(
				bool value);  // 193
	}
	LoadBinaryPODValue<2>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 283
	{
		int nString; // 259
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 258
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 259
		KV3BinaryLoadContextV0_t::String(
			int nIndex);  // 263
		AimAtExternalString(KeyValues3* pTarget,
					const char* pString);  // 263
		KV3BinaryLoadContextV0_t::String(
			int nIndex);  // 267
	}
	LoadBinaryPODValue<6>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 295
	{
		uint64 nValue; // 217
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 216
		CUtlBuffer::IsText(); // 928
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<long long unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
		CUtlBuffer::BGetTypeText<long long unsigned int>(
							long long unsigned int& value,
							int nRadix);  // 929
		CUtlBuffer::BGetType<long long unsigned int>(
						long long unsigned int& dest);  // 926
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
			LowLevelByteSwap<long long unsigned int>(long long unsigned int* output,
								long long unsigned int* input);  // 202
		}
		CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
								long long unsigned int* outputBuffer,
								long long unsigned int* inputBuffer,
								int count);  // 170
		CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
								long long unsigned int* outputBuffer,
								long long unsigned int* inputBuffer,
								int count);  // 694
		CUtlBuffer::BGetTypeBin<long long unsigned int>(
							long long unsigned int& dest);  // 672
		CUtlBuffer::BGetTypeBin<long long unsigned int>(
							long long unsigned int& dest);  // 930
		CUtlBuffer::BGetType<long long unsigned int>(
						long long unsigned int& dest);  // 1120
		CUtlBuffer::BGetUnsignedInt64(
					uint64* pOutUint64);  // 979
		CUtlBuffer::GetUnsignedInt64(); // 217
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 227
		KeyValues3::SetValueUint64(
				uint64 value);  // 219
	}
	LoadBinaryPODValue<4>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 289
	{
		double doubleValue; // 241
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 240
		CUtlBuffer::IsText(); // 928
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<double>(char* pString,
					char** ppEnd,
					int nRadix);  // 915
		CUtlBuffer::BGetTypeText<double>(
					double& value,
					int nRadix);  // 929
		CUtlBuffer::BGetType<double>(
				double& dest);  // 926
		{
			uintp pData; // 755
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 755
			CByteswap::IsSwappingBytes(); // 774
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
				LowLevelByteSwap<double>(double* output,
							double* input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<double>(
							double* outputBuffer,
							double* inputBuffer,
							int count);  // 170
			CByteswap::SwapBufferToTargetEndian<double>(
							double* outputBuffer,
							double* inputBuffer,
							int count);  // 776
		}
		CUtlBuffer::BGetTypeBin<double>(
					double& dest);  // 744
		CUtlBuffer::BGetTypeBin<double>(
					double& dest);  // 930
		CUtlBuffer::BGetType<double>(
				double& dest);  // 1122
		CUtlBuffer::BGetDouble(
				double* pOutDouble);  // 1007
		CUtlBuffer::GetDouble(); // 241
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 239
		KeyValues3::SetValueDouble(
				double value);  // 243
	}
	LoadBinaryPODValue<5>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 292
	{
		int64 nValue; // 209
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 208
		CUtlBuffer::IsText(); // 928
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<long long int>(char* pString,
						char** ppEnd,
						int nRadix);  // 915
		CUtlBuffer::BGetTypeText<long long int>(
						long long int& value,
						int nRadix);  // 929
		CUtlBuffer::BGetType<long long int>(
					long long int& dest);  // 926
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
			LowLevelByteSwap<long long int>(long long int* output,
							long long int* input);  // 202
		}
		CByteswap::SwapBufferToTargetEndian<long long int>(
							long long int* outputBuffer,
							long long int* inputBuffer,
							int count);  // 170
		CByteswap::SwapBufferToTargetEndian<long long int>(
							long long int* outputBuffer,
							long long int* inputBuffer,
							int count);  // 694
		CUtlBuffer::BGetTypeBin<long long int>(
						long long int& dest);  // 672
		CUtlBuffer::BGetTypeBin<long long int>(
						long long int& dest);  // 930
		CUtlBuffer::BGetType<long long int>(
					long long int& dest);  // 1118
		CUtlBuffer::BGetInt64(
				int64* pOutInt64);  // 972
		CUtlBuffer::GetInt64(); // 209
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 233
		KeyValues3::SetValueInt64(
				int64 value);  // 211
	}
	LoadBinaryPODValue<3>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 288
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 185
	LoadBinaryPODValue<14>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 285
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 198
	LoadBinaryPODValue<15>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 286
	{
		uint64 nValue; // 233
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 232
		CUtlBuffer::BGetUnsignedInt(
				uint* pOutUint);  // 993
		CUtlBuffer::GetUnsignedInt(); // 233
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 227
		KeyValues3::SetValueUint64(
				uint64 value);  // 235
	}
	LoadBinaryPODValue<12>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 291
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 203
	LoadBinaryPODValue<16>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 287
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 248
	LoadBinaryPODValue<17>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 293
	{
		int64 nValue; // 225
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 224
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 225
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 233
		KeyValues3::SetValueInt64(
				int64 value);  // 227
	}
	LoadBinaryPODValue<11>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 290
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 180
	LoadBinaryPODValue<13>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 284
} /* size: 0, variables: 1, inline expansions: 35 (2607 bytes) */

// <001B01D4> kv3lib/keyvalues3_binaryreader_v0.cpp:278
// variables: 34
// function calls: 203
bool LoadKV3BinaryValue(KV3BinaryLoadContextV0_t& loadContext, KeyValues3BinaryType_t nBinaryType, KeyValues3* pTarget)
{
	const char   __FUNCTION__; // 62288
	{
		int nLength; // 300
		byte* pBlob; // 303
		CUtlString::operator=(
				const char* src);  // 302
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 299
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 300
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 302
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 303
		AimAtExternalBinaryBlob(KeyValues3* pTarget,
					byte* pData,
					int nSize);  // 308
	}
	{
		int nMemberCount; // 319
		{
			int i; // 322
			{
				int nMemberName; // 325
				KeyValues3* pMember; // 327
				CKV3MemberName memberName; // 329
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 451
				LoadKV3BinaryTypeAndValue(KV3BinaryLoadContextV0_t& loadContext,
								KeyValues3* pTarget);  // 340
				CUtlBuffer::TellGet(); // 615
				CUtlBuffer::GetBytesRemaining(); // 324
				CUtlBuffer::BGetInt(
					int* pOutInt);  // 965
				CUtlBuffer::GetInt(); // 325
				{
					KeyValues3LowercaseHash_t nHash; // 68
					CUtlStringToken::IsValid(); // 69
					KV3BinaryLoadContextV0_t::String(
						int nIndex);  // 71
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 151
					KV3MakeLowerHash(const char* pStr); // 71
				}
				KV3BinaryLoadContextV0_t::StringHash(
						int nIndex);  // 60
				KV3BinaryLoadContextV0_t::StringHash(
						int nIndex);  // 329
				KV3BinaryLoadContextV0_t::String(
					int nIndex);  // 329
				CKV3MemberName::CKV3MemberName(
						const char* pString,
						KeyValues3LowercaseHash_t nHash);  // 329
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 40
				FindOrCreateMemberAimedAtExternalName(KeyValues3* pTarget,
									CKV3MemberName memberNameAndHash);  // 333
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 333
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 337
			}
		}
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 318
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 319
	}
	{
		int nCount; // 350
		{
			int i; // 353
			{
				KeyValues3* pElement; // 355
				KeyValues3::SetAllFlags(
						KeyValues3Flag_t nFlag);  // 451
				LoadKV3BinaryTypeAndValue(KV3BinaryLoadContextV0_t& loadContext,
								KeyValues3* pTarget);  // 356
			}
		}
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 349
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 350
	}
	{
		int nCount; // 368
		KeyValues3Flag_t nElementFlags; // 373
		KeyValues3BinaryType_t nArrayType; // 374
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 370
		}
		{
			double* pElements; // 393
			CUtlBuffer::TellGet(); // 615
			CUtlBuffer::GetBytesRemaining(); // 388
			CUtlMemory<unsigned char, int>::Base(); // 1484
			CUtlBuffer::Base(); // 393
			SetValueExternalDoubleArray(KeyValues3* pTarget,
							int nFloatsInArray,
							const double* pValues);  // 395
		}
		{
			int32* pElements; // 406
			CUtlBuffer::TellGet(); // 615
			CUtlBuffer::GetBytesRemaining(); // 401
			CUtlMemory<unsigned char, int>::Base(); // 1484
			CUtlBuffer::Base(); // 406
			SetValueExternalInt32Array(KeyValues3* pTarget,
							int nValues,
							const int32* pValues);  // 408
		}
		{
			int nValuesRead; // 418
			GetKV3TypeForBinaryType(KeyValues3BinaryType_t nBinaryType); // 416
			KeyValues3::SetAllFlags(
					KeyValues3Flag_t nFlag);  // 421
			operator()(const class* __closure,
					int element,
					KeyValues3* pElement); // 136
			KeyValues3::IterateArrayElements<LoadKV3BinaryValue(
																class& callback);  // 418
		}
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 367
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 368
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 253
	LoadBinaryPODValue<18>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 294
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 175
	LoadBinaryPODValue<1>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 282
	{
		bool bValue; // 191
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 190
		CUtlBuffer::IsText(); // 1047
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 672
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 1049
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<short unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
		CUtlBuffer::BGetTypeText<short unsigned int>(
						short unsigned int& value,
						int nRadix);  // 1053
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 1043
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 944
		CUtlBuffer::GetUnsignedChar(); // 191
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 215
		KeyValues3::SetValueBool(
				bool value);  // 193
	}
	LoadBinaryPODValue<2>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 283
	{
		int nString; // 259
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 258
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 259
		KV3BinaryLoadContextV0_t::String(
			int nIndex);  // 263
		AimAtExternalString(KeyValues3* pTarget,
					const char* pString);  // 263
		KV3BinaryLoadContextV0_t::String(
			int nIndex);  // 267
	}
	LoadBinaryPODValue<6>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 295
	{
		uint64 nValue; // 217
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 216
		CUtlBuffer::IsText(); // 928
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<long long unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
		CUtlBuffer::BGetTypeText<long long unsigned int>(
							long long unsigned int& value,
							int nRadix);  // 929
		CUtlBuffer::BGetType<long long unsigned int>(
						long long unsigned int& dest);  // 926
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
			LowLevelByteSwap<long long unsigned int>(long long unsigned int* output,
								long long unsigned int* input);  // 202
		}
		CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
								long long unsigned int* outputBuffer,
								long long unsigned int* inputBuffer,
								int count);  // 170
		CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
								long long unsigned int* outputBuffer,
								long long unsigned int* inputBuffer,
								int count);  // 694
		CUtlBuffer::BGetTypeBin<long long unsigned int>(
							long long unsigned int& dest);  // 672
		CUtlBuffer::BGetTypeBin<long long unsigned int>(
							long long unsigned int& dest);  // 930
		CUtlBuffer::BGetType<long long unsigned int>(
						long long unsigned int& dest);  // 1120
		CUtlBuffer::BGetUnsignedInt64(
					uint64* pOutUint64);  // 979
		CUtlBuffer::GetUnsignedInt64(); // 217
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 227
		KeyValues3::SetValueUint64(
				uint64 value);  // 219
	}
	LoadBinaryPODValue<4>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 289
	{
		double doubleValue; // 241
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 240
		CUtlBuffer::IsText(); // 928
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<double>(char* pString,
					char** ppEnd,
					int nRadix);  // 915
		CUtlBuffer::BGetTypeText<double>(
					double& value,
					int nRadix);  // 929
		CUtlBuffer::BGetType<double>(
				double& dest);  // 926
		{
			uintp pData; // 755
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 755
			CByteswap::IsSwappingBytes(); // 774
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
				LowLevelByteSwap<double>(double* output,
							double* input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<double>(
							double* outputBuffer,
							double* inputBuffer,
							int count);  // 170
			CByteswap::SwapBufferToTargetEndian<double>(
							double* outputBuffer,
							double* inputBuffer,
							int count);  // 776
		}
		CUtlBuffer::BGetTypeBin<double>(
					double& dest);  // 744
		CUtlBuffer::BGetTypeBin<double>(
					double& dest);  // 930
		CUtlBuffer::BGetType<double>(
				double& dest);  // 1122
		CUtlBuffer::BGetDouble(
				double* pOutDouble);  // 1007
		CUtlBuffer::GetDouble(); // 241
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 239
		KeyValues3::SetValueDouble(
				double value);  // 243
	}
	LoadBinaryPODValue<5>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 292
	{
		int64 nValue; // 209
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 208
		CUtlBuffer::IsText(); // 928
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<long long int>(char* pString,
						char** ppEnd,
						int nRadix);  // 915
		CUtlBuffer::BGetTypeText<long long int>(
						long long int& value,
						int nRadix);  // 929
		CUtlBuffer::BGetType<long long int>(
					long long int& dest);  // 926
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
			LowLevelByteSwap<long long int>(long long int* output,
							long long int* input);  // 202
		}
		CByteswap::SwapBufferToTargetEndian<long long int>(
							long long int* outputBuffer,
							long long int* inputBuffer,
							int count);  // 170
		CByteswap::SwapBufferToTargetEndian<long long int>(
							long long int* outputBuffer,
							long long int* inputBuffer,
							int count);  // 694
		CUtlBuffer::BGetTypeBin<long long int>(
						long long int& dest);  // 672
		CUtlBuffer::BGetTypeBin<long long int>(
						long long int& dest);  // 930
		CUtlBuffer::BGetType<long long int>(
					long long int& dest);  // 1118
		CUtlBuffer::BGetInt64(
				int64* pOutInt64);  // 972
		CUtlBuffer::GetInt64(); // 209
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 233
		KeyValues3::SetValueInt64(
				int64 value);  // 211
	}
	LoadBinaryPODValue<3>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 288
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 185
	LoadBinaryPODValue<14>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 285
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 198
	LoadBinaryPODValue<15>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 286
	{
		uint64 nValue; // 233
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 232
		CUtlBuffer::BGetUnsignedInt(
				uint* pOutUint);  // 993
		CUtlBuffer::GetUnsignedInt(); // 233
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 227
		KeyValues3::SetValueUint64(
				uint64 value);  // 235
	}
	LoadBinaryPODValue<12>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 291
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 203
	LoadBinaryPODValue<16>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 287
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 248
	LoadBinaryPODValue<17>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 293
	{
		int64 nValue; // 225
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 224
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 225
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 233
		KeyValues3::SetValueInt64(
				int64 value);  // 227
	}
	LoadBinaryPODValue<11>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 290
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 180
	LoadBinaryPODValue<13>(KV3BinaryLoadContextV0_t& loadContext,
				KeyValues3* pTarget);  // 284
} /* size: 0, variables: 1, inline expansions: 35 (0 bytes) */

// <05623A0E> kv3lib/keyvalues3_binaryreader_v0.cpp:442
// variables: 2
bool LoadKV3BinaryTypeAndValue(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget)
{
	KeyValues3Flag_t nFlags; // 444
	KeyValues3BinaryType_t nBinaryType; // 445
} /* size: 0, variables: 2 */

// <05621F62> kv3lib/keyvalues3_binaryreader_v0.cpp:458
// variables: 8
// function calls: 112
bool LoadKV3BinaryUncompressed(KV3BinaryLoadContextV0_t& loadContext, KeyValues3* pTarget, const V_uuid_t& loadedFormat, const KV3ID_t& expectedFormat)
{
	int nNumStrings; // 460
	CUtlVectorFixedGrowable<CUtlStringToken, 256> stringHashes; // 463
	CUtlVectorFixedGrowable<char const*, 256> stringPtrs; // 464
	uint32 nKV3BinaryIdentifier; // 486
	KV3ID_t loadedFormatID; // 496
	{
		int i; // 467
		{
			const char* pStr; // 469
			int nLen; // 472
			CUtlMemory<char const::Base(); // 112
			CUtlVectorBase<char const::Base(); // 368
			CUtlVectorBase<char const::ResetDbgInfo(); // 824
			CUtlMemory<char const::IsGrowable(); // 823
			CUtlMemory<char const::IsExternallyAllocated(); // 859
			CUtlMemory<char const::IsExternallyAllocated(); // 861
			CUtlMemory<char const::Grow(
				int num);  // 806
			CUtlVectorBase<char const::GrowMemory(
					int num);  // 1198
			CUtlMemory<char const::operator[](
					int i);  // 602
			CUtlVectorBase<char const::Element(
				int i);  // 1201
			CopyConstruct<char const*>(const char ** pMemory,
							const char* const& src);  // 1201
			CUtlMemory<char const::NumAllocated(); // 1196
			CUtlVectorBase<char const::AddToTail(
					const char* const& src);  // 470
			CUtlStringToken::CUtlStringToken(); // 471
			CUtlMemory<CUtlStringToken, int>::NumAllocated(); // 1247
			CUtlMemory<CUtlStringToken, int>::Base(); // 112
			CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::Base(); // 368
			CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::ResetDbgInfo(); // 824
			CUtlMemory<CUtlStringToken, int>::IsGrowable(); // 823
			CUtlMemory<CUtlStringToken, int>::IsExternallyAllocated(); // 859
			CUtlMemory<CUtlStringToken, int>::IsExternallyAllocated(); // 861
			CUtlMemory<CUtlStringToken, int>::Grow(
				int num);  // 806
			CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::GrowMemory(
					int num);  // 1249
			CUtlMemory<CUtlStringToken, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::Element(
				int i);  // 1252
			Construct<CUtlStringToken, CUtlStringToken>(CUtlStringToken* pMemory); // 1252
			CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::AddToTail(
					CUtlStringToken& src);  // 471
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 469
		}
	}
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
	AlignedByteArrayExplicit_t<256, CUtlStringToken, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<256, CUtlStringToken>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<256, CUtlStringToken, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<CUtlStringToken, 256, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CUtlStringToken, 256>::CUtlVectorFixedGrowable(
				int growSize);  // 463
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
	AlignedByteArrayExplicit_t<256, char const::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<256, char const::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<256, char const::Base(); // 231
	CUtlMemoryFixedGrowable<char const::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<char const::ResetDbgInfo(); // 530
	CUtlVectorBase<char const::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<char const::CUtlVectorFixedGrowable(
				int growSize);  // 464
	CUtlBuffer::BGetInt(
		int* pOutInt);  // 965
	CUtlBuffer::GetInt(); // 460
	CUtlMemory<char const::IsExternallyAllocated(); // 888
	CUtlMemory<char const::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<char const::ResetDbgInfo(); // 1024
	CUtlVectorBase<char const::EnsureCapacity(
			int num);  // 465
	CUtlMemory<CUtlStringToken, int>::IsGrowable(); // 881
	CUtlMemory<CUtlStringToken, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CUtlStringToken, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::EnsureCapacity(
			int num);  // 466
	CUtlMemory<CUtlStringToken, int>::Base(); // 112
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::Base(); // 476
	CUtlMemory<char const::Base(); // 112
	CUtlVectorBase<char const::Base(); // 477
	KeyValues3::SetAllFlags(
			KeyValues3Flag_t nFlag);  // 451
	LoadKV3BinaryTypeAndValue(KV3BinaryLoadContextV0_t& loadContext,
					KeyValues3* pTarget);  // 479
	CUtlVectorBase<char const::Count(); // 478
	CUtlBuffer::TellGet(); // 615
	CUtlBuffer::GetBytesRemaining(); // 485
	CUtlString::operator=(
			const char* src);  // 485
	CUtlVectorBase<char const::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<256, char const::Base(); // 237
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
	ValidateAlignment<char const*>(void); // 508
	CUtlMemory<char const::Purge(); // 903
	CUtlMemory<char const::Purge(); // 510
	CUtlMemory<char const::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<char const::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<char const::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<char const::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<char const::~CUtlVectorFixedGrowable(); // 498
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<256, CUtlStringToken, 4>::Base(); // 237
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
	CUtlMemoryFixedGrowable<CUtlStringToken, 256, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<CUtlStringToken, int>::Base(); // 112
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::Base(); // 368
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::Purge(); // 560
	ValidateAlignment<CUtlStringToken>(void); // 508
	CUtlMemory<CUtlStringToken, int>::Purge(); // 903
	CUtlMemory<CUtlStringToken, int>::Purge(); // 510
	CUtlMemory<CUtlStringToken, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CUtlStringToken, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CUtlStringToken, 256, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CUtlStringToken, 256>::~CUtlVectorFixedGrowable(); // 498
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 486
	CUtlString::operator=(
			const char* src);  // 491
	KV3ID_t::KV3ID_t(
		const char* pName,
		const V_uuid_t& id);  // 496
} /* size: 1722, variables: 5, inline expansions: 83 (2456 bytes) */

