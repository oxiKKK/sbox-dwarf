
//
// kv3lib/keyvalues3_textreader.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 34
//	class: 1
//

// <055DF910> kv3lib/keyvalues3_textreader.cpp:15
KeyValues3Flag_t KV3FlagFromText(const char *)
{
} /* size: 0 */

// <055DDFE6> kv3lib/keyvalues3_textreader.cpp:37
// member functions: 24
// member variables: 7
// class size: 800
class CLoadKV3FromText {
	/* kv3lib/keyvalues3_textreader.cpp:40 */
	void CLoadKV3FromText(CLoadKV3FromText* , KeyValues3* , CUtlString* , CUtlBuffer* , const char* );
	/* kv3lib/keyvalues3_textreader.cpp:41 */
	void ~CLoadKV3FromText(CLoadKV3FromText* );
	/* kv3lib/keyvalues3_textreader.cpp:42 */
	bool Parse(CLoadKV3FromText* , bool);
	/* kv3lib/keyvalues3_textreader.cpp:43 */
	const V_uuid_t& LoadedFormatUUID(CLoadKV3FromText* );
	/* kv3lib/keyvalues3_textreader.cpp:44 */
	const char* LoadedFormatName(CLoadKV3FromText* );
private:
	/* kv3lib/keyvalues3_textreader.cpp:47 */
	bool ReadTable(CLoadKV3FromText* , KeyValues3* );
	/* kv3lib/keyvalues3_textreader.cpp:48 */
	bool ReadValue(CLoadKV3FromText* , KeyValues3* );
	/* kv3lib/keyvalues3_textreader.cpp:50 */
	bool ReadArrayValue(CLoadKV3FromText* , KeyValues3* );
	/* kv3lib/keyvalues3_textreader.cpp:51 */
	bool ReadBinaryBlobValue(CLoadKV3FromText* , KeyValues3* );
	/* kv3lib/keyvalues3_textreader.cpp:52 */
	bool ReadLiteralValue(CLoadKV3FromText* , KeyValues3* );
	/* kv3lib/keyvalues3_textreader.cpp:54 */
	void ReportError(CLoadKV3FromText* , const char* );
	/* kv3lib/keyvalues3_textreader.cpp:55 */
	void ReportErrorNoLine(CLoadKV3FromText* , const char* );
	bool m_bLoadedOk; /* 0 1 */
	CUtlTokenizer m_Tokenizer __attribute__((__aligned__(8))); /* 8 744 */
	KeyValues3 * m_pRootTarget; /* 752 8 */
	CUtlString * m_pOutErrorMessage; /* 760 8 */
	CUtlBuffer * m_pSrcBuffer; /* 768 8 */
	V_uuid_t m_LoadedFormatUUID; /* 776 16 */
	CUtlString m_LoadedFormatName; /* 792 8 */
	void CLoadKV3FromText(class CLoadKV3FromText *, class KeyValues3 *, class CUtlString *, class CUtlBuffer *, const char  *); /* linkage=_ZN16CLoadKV3FromTextC4EP10KeyValues3P10CUtlStringP10CUtlBufferPKc */
	void ~CLoadKV3FromText(class CLoadKV3FromText *); /* linkage=_ZN16CLoadKV3FromTextD4Ev */
	bool Parse(class CLoadKV3FromText *, bool); /* linkage=_ZN16CLoadKV3FromText5ParseEb */
	/* <55e7c8f> kv3lib/keyvalues3_textreader.cpp:282 */
	const class V_uuid_t  & LoadedFormatUUID(class CLoadKV3FromText *); /* linkage=_ZN16CLoadKV3FromText16LoadedFormatUUIDEv */
	/* <55e7cb8> kv3lib/keyvalues3_textreader.cpp:290 */
	const char  * LoadedFormatName(class CLoadKV3FromText *); /* linkage=_ZN16CLoadKV3FromText16LoadedFormatNameEv */
	bool ReadTable(class CLoadKV3FromText *, class KeyValues3 *); /* linkage=_ZN16CLoadKV3FromText9ReadTableEP10KeyValues3 */
	bool ReadValue(class CLoadKV3FromText *, class KeyValues3 *); /* linkage=_ZN16CLoadKV3FromText9ReadValueEP10KeyValues3 */
	bool ReadArrayValue(class CLoadKV3FromText *, class KeyValues3 *); /* linkage=_ZN16CLoadKV3FromText14ReadArrayValueEP10KeyValues3 */
	bool ReadBinaryBlobValue(class CLoadKV3FromText *, class KeyValues3 *); /* linkage=_ZN16CLoadKV3FromText19ReadBinaryBlobValueEP10KeyValues3 */
	bool ReadLiteralValue(class CLoadKV3FromText *, class KeyValues3 *); /* linkage=_ZN16CLoadKV3FromText16ReadLiteralValueEP10KeyValues3 */
	void ReportError(class CLoadKV3FromText *, const char  *); /* linkage=_ZN16CLoadKV3FromText11ReportErrorEPKc */
	/* <55e7c1b> kv3lib/keyvalues3_textreader.cpp:243 */
	void ReportErrorNoLine(class CLoadKV3FromText *, const char  *); /* linkage=_ZN16CLoadKV3FromText17ReportErrorNoLineEPKc */
} __attribute__((__aligned__(8)));

// <055E7399> kv3lib/keyvalues3_textreader.cpp:69
bool KV3Helper_HasUTF8BOM(const char* pBuffer, int nLen)
{
} /* size: 0 */

// <055E736A> kv3lib/keyvalues3_textreader.cpp:77
bool KV3Helper_IsUTF16Buffer(const char* pBuffer, int nLen)
{
} /* size: 0 */

// <055E5E4A> kv3lib/keyvalues3_textreader.cpp:139
// variables: 8
// function calls: 21
bool LoadKV3Text_Internal(KeyValues3* pRootTarget, CUtlString* pOutErrorMessage, const char* pBuffer, const char* pReferenceFilename, const KV3ID_t& expectedFormat, const KV3ID_t* pSkipHeaderAndAssumeFormat)
{
	int nLen; // 150
	CUtlBuffer buf; // 159
	bool bSkipHeader; // 170
	CLoadKV3FromText loader; // 172
	KV3ID_t loadedFormatId; // 178
	const KV3ID_t* pDataFormat; // 179
	{
		int nUTF8Len; // 164
		char* pUTF8Buf; // 165
	}
	V_strlen(const char* str); // 150
	KV3Helper_HasUTF8BOM(const char* pBuffer,
				int nLen);  // 153
	KV3Helper_IsUTF16Buffer(const char* pBuffer,
				int nLen);  // 162
	CUtlBuffer::TellPut(); // 208
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 208
	CUtlString::CUtlString(); // 208
	CLoadKV3FromText::CLoadKV3FromText(
			KeyValues3* pRootTarget,
			CUtlString* pOutErrorMessage,
			CUtlBuffer* pSrcBuffer,
			const char* pFilename);  // 172
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 292
	CLoadKV3FromText::LoadedFormatName(); // 178
	KV3ID_t::KV3ID_t(
		const char* pName,
		const V_uuid_t& id);  // 178
	CUtlString::~CUtlString(); // 222
	CLoadKV3FromText::~CLoadKV3FromText(); // 186
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 186
	CUtlString::operator=(
			const char* src);  // 145
} /* size: 678, variables: 6, inline expansions: 21 (447 bytes) */

// <012AD263> kv3lib/keyvalues3_textreader.cpp:199
bool LoadKV3Text_NoHeader(KeyValues3* pRootTarget, CUtlString* pOutErrorMessage, const char* pBuffer, const KV3ID_t& expectedFormat, const char* pReferenceFilename)
{
} /* size: 0 */

// <055E5B4B> kv3lib/keyvalues3_textreader.cpp:207
// function calls: 4
void CLoadKV3FromText::CLoadKV3FromText(KeyValues3* pRootTarget, CUtlString* pOutErrorMessage, CUtlBuffer* pSrcBuffer, const char* pFilename)
{
	CUtlBuffer::TellPut(); // 208
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 208
	CUtlString::CUtlString(); // 208
} /* size: 0, inline expansions: 4 (0 bytes) */

// <055E5B00> kv3lib/keyvalues3_textreader.cpp:207
void CLoadKV3FromText::CLoadKV3FromText(KeyValues3* pRootTarget, CUtlString* pOutErrorMessage, CUtlBuffer* pSrcBuffer, const char* pFilename)
{
} /* size: 0 */

// <055E5A7A> kv3lib/keyvalues3_textreader.cpp:220
// function call: 1
void CLoadKV3FromText::~CLoadKV3FromText()
{
	CUtlString::~CUtlString(); // 222
} /* size: 0, inline expansions: 1 (0 bytes) */

// <055E5A5F> kv3lib/keyvalues3_textreader.cpp:220
void CLoadKV3FromText::~CLoadKV3FromText()
{
} /* size: 0 */

// <055E56B4> kv3lib/keyvalues3_textreader.cpp:227
// variable: 1
// function calls: 11
void CLoadKV3FromText::ReportError(const char* pError)
{
	CUtlTokenReference nextToken; // 229
	CBufferString::WriteBuffer(); // 803
	CBufferString::Access(); // 84
	CFmtStrN<256>::Access(); // 232
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 803
	CBufferString::Access(); // 84
	CFmtStrN<256>::Access(); // 236
	CLoadKV3FromText::ReportErrorNoLine(
				const char* pError);  // 236
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 236
} /* size: 353, variables: 1, inline expansions: 11 (282 bytes) */

// <055E7C1B> kv3lib/keyvalues3_textreader.cpp:243
void CLoadKV3FromText::ReportErrorNoLine(const char* pError)
{
} /* size: 0 */

// <055E54A0> kv3lib/keyvalues3_textreader.cpp:257
// variable: 1
// function calls: 5
void CLoadKV3FromText::Parse(bool bSkipHeader)
{
	{
		CUtlString headerError; // 263
		CUtlString::CUtlString(); // 263
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 266
		CUtlString::~CUtlString(); // 269
		CUtlString::~CUtlString(); // 269
	}
} /* size: 207 */

// <055E7C8F> kv3lib/keyvalues3_textreader.cpp:282
void CLoadKV3FromText::LoadedFormatUUID()
{
} /* size: 0 */

// <055E7CB8> kv3lib/keyvalues3_textreader.cpp:290
// function calls: 2
void CLoadKV3FromText::LoadedFormatName()
{
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 292
} /* size: 0, inline expansions: 2 (0 bytes) */

// <055E5468> kv3lib/keyvalues3_textreader.cpp:290
void CLoadKV3FromText::LoadedFormatName()
{
} /* size: 0 */

// <055E4705> kv3lib/keyvalues3_textreader.cpp:298
// variables: 9
// function calls: 17
bool ReadKV3TextHeader(CUtlTokenizer* pTokenizer, V_uuid_t* pOutLoadedFormatUUID, CUtlString* pOutLoadedFormatName, CUtlString* pOutError)
{
	const char   __FUNCTION__; // 25638
	CUtlTokenReference encodingName; // 306
	CUtlTokenReference encodingId; // 307
	CUtlTokenReference formatName; // 308
	CUtlTokenReference formatId; // 309
	V_uuid_t encodingUUID; // 369
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 301
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 302
	}
	CUtlString::operator=(
			const char* src);  // 316
	CUtlString::operator=(
			const char* src);  // 313
	CUtlString::operator=(
			const char* src);  // 321
	CUtlString::operator=(
			const char* src);  // 314
	CUtlString::operator=(
			const char* src);  // 317
	CUtlString::operator=(
			const char* src);  // 326
	CUtlString::operator=(
			const char* src);  // 337
	CUtlString::operator=(
			const char* src);  // 333
	CUtlString::operator=(
			const char* src);  // 342
	CUtlString::operator=(
			const char* src);  // 360
	CUtlString::operator=(
			const char* src);  // 354
	CUtlString::operator=(
			const char* src);  // 377
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1593
	operator!=(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 379
	CUtlString::operator=(
			const char* src);  // 383
	CUtlString::operator=(
			const char* src);  // 373
} /* size: 0, variables: 6, inline expansions: 17 (365 bytes) */

// <0295C0FF> kv3lib/keyvalues3_textreader.cpp:298
// variables: 9
// function calls: 17
bool ReadKV3TextHeader(CUtlTokenizer* pTokenizer, V_uuid_t* pOutLoadedFormatUUID, CUtlString* pOutLoadedFormatName, CUtlString* pOutError)
{
	const char   __FUNCTION__; // 44309
	CUtlTokenReference encodingName; // 306
	CUtlTokenReference encodingId; // 307
	CUtlTokenReference formatName; // 308
	CUtlTokenReference formatId; // 309
	V_uuid_t encodingUUID; // 369
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 301
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 302
	}
	CUtlString::operator=(
			const char* src);  // 316
	CUtlString::operator=(
			const char* src);  // 313
	CUtlString::operator=(
			const char* src);  // 321
	CUtlString::operator=(
			const char* src);  // 314
	CUtlString::operator=(
			const char* src);  // 317
	CUtlString::operator=(
			const char* src);  // 326
	CUtlString::operator=(
			const char* src);  // 337
	CUtlString::operator=(
			const char* src);  // 333
	CUtlString::operator=(
			const char* src);  // 342
	CUtlString::operator=(
			const char* src);  // 360
	CUtlString::operator=(
			const char* src);  // 354
	CUtlString::operator=(
			const char* src);  // 377
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1593
	operator!=(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 379
	CUtlString::operator=(
			const char* src);  // 383
	CUtlString::operator=(
			const char* src);  // 373
} /* size: 0, variables: 6, inline expansions: 17 (365 bytes) */

// <012ABCB4> kv3lib/keyvalues3_textreader.cpp:298
// variables: 9
// function calls: 17
bool ReadKV3TextHeader(CUtlTokenizer* pTokenizer, V_uuid_t* pOutLoadedFormatUUID, CUtlString* pOutLoadedFormatName, CUtlString* pOutError)
{
	const char   __FUNCTION__; // 49288
	CUtlTokenReference encodingName; // 306
	CUtlTokenReference encodingId; // 307
	CUtlTokenReference formatName; // 308
	CUtlTokenReference formatId; // 309
	V_uuid_t encodingUUID; // 369
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 301
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 302
	}
	CUtlString::operator=(
			const char* src);  // 316
	CUtlString::operator=(
			const char* src);  // 313
	CUtlString::operator=(
			const char* src);  // 321
	CUtlString::operator=(
			const char* src);  // 314
	CUtlString::operator=(
			const char* src);  // 317
	CUtlString::operator=(
			const char* src);  // 326
	CUtlString::operator=(
			const char* src);  // 337
	CUtlString::operator=(
			const char* src);  // 333
	CUtlString::operator=(
			const char* src);  // 342
	CUtlString::operator=(
			const char* src);  // 360
	CUtlString::operator=(
			const char* src);  // 354
	CUtlString::operator=(
			const char* src);  // 377
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1593
	operator!=(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 379
	CUtlString::operator=(
			const char* src);  // 383
	CUtlString::operator=(
			const char* src);  // 373
} /* size: 0, variables: 6, inline expansions: 17 (365 bytes) */

// <00327479> kv3lib/keyvalues3_textreader.cpp:298
// variables: 9
// function calls: 17
bool ReadKV3TextHeader(CUtlTokenizer* pTokenizer, V_uuid_t* pOutLoadedFormatUUID, CUtlString* pOutLoadedFormatName, CUtlString* pOutError)
{
	const char   __FUNCTION__; // 35455
	CUtlTokenReference encodingName; // 306
	CUtlTokenReference encodingId; // 307
	CUtlTokenReference formatName; // 308
	CUtlTokenReference formatId; // 309
	V_uuid_t encodingUUID; // 369
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 301
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 302
	}
	CUtlString::operator=(
			const char* src);  // 316
	CUtlString::operator=(
			const char* src);  // 313
	CUtlString::operator=(
			const char* src);  // 321
	CUtlString::operator=(
			const char* src);  // 314
	CUtlString::operator=(
			const char* src);  // 317
	CUtlString::operator=(
			const char* src);  // 326
	CUtlString::operator=(
			const char* src);  // 337
	CUtlString::operator=(
			const char* src);  // 333
	CUtlString::operator=(
			const char* src);  // 342
	CUtlString::operator=(
			const char* src);  // 360
	CUtlString::operator=(
			const char* src);  // 354
	CUtlString::operator=(
			const char* src);  // 377
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1593
	operator!=(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 379
	CUtlString::operator=(
			const char* src);  // 383
	CUtlString::operator=(
			const char* src);  // 373
} /* size: 0, variables: 6, inline expansions: 17 (0 bytes) */

// <0068C67B> kv3lib/keyvalues3_textreader.cpp:298
// variables: 9
// function calls: 17
bool ReadKV3TextHeader(CUtlTokenizer* pTokenizer, V_uuid_t* pOutLoadedFormatUUID, CUtlString* pOutLoadedFormatName, CUtlString* pOutError)
{
	const char   __FUNCTION__; // 61441
	CUtlTokenReference encodingName; // 306
	CUtlTokenReference encodingId; // 307
	CUtlTokenReference formatName; // 308
	CUtlTokenReference formatId; // 309
	V_uuid_t encodingUUID; // 369
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 301
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 302
	}
	CUtlString::operator=(
			const char* src);  // 316
	CUtlString::operator=(
			const char* src);  // 313
	CUtlString::operator=(
			const char* src);  // 321
	CUtlString::operator=(
			const char* src);  // 314
	CUtlString::operator=(
			const char* src);  // 317
	CUtlString::operator=(
			const char* src);  // 326
	CUtlString::operator=(
			const char* src);  // 337
	CUtlString::operator=(
			const char* src);  // 333
	CUtlString::operator=(
			const char* src);  // 342
	CUtlString::operator=(
			const char* src);  // 360
	CUtlString::operator=(
			const char* src);  // 354
	CUtlString::operator=(
			const char* src);  // 377
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1593
	operator!=(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 379
	CUtlString::operator=(
			const char* src);  // 383
	CUtlString::operator=(
			const char* src);  // 373
} /* size: 0, variables: 6, inline expansions: 17 (365 bytes) */

// <00A64302> kv3lib/keyvalues3_textreader.cpp:298
// variables: 9
// function calls: 17
bool ReadKV3TextHeader(CUtlTokenizer* pTokenizer, V_uuid_t* pOutLoadedFormatUUID, CUtlString* pOutLoadedFormatName, CUtlString* pOutError)
{
	const char   __FUNCTION__; // 2056
	CUtlTokenReference encodingName; // 306
	CUtlTokenReference encodingId; // 307
	CUtlTokenReference formatName; // 308
	CUtlTokenReference formatId; // 309
	V_uuid_t encodingUUID; // 369
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 301
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 302
	}
	CUtlString::operator=(
			const char* src);  // 316
	CUtlString::operator=(
			const char* src);  // 313
	CUtlString::operator=(
			const char* src);  // 321
	CUtlString::operator=(
			const char* src);  // 314
	CUtlString::operator=(
			const char* src);  // 317
	CUtlString::operator=(
			const char* src);  // 326
	CUtlString::operator=(
			const char* src);  // 337
	CUtlString::operator=(
			const char* src);  // 333
	CUtlString::operator=(
			const char* src);  // 342
	CUtlString::operator=(
			const char* src);  // 360
	CUtlString::operator=(
			const char* src);  // 354
	CUtlString::operator=(
			const char* src);  // 377
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1593
	operator!=(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 379
	CUtlString::operator=(
			const char* src);  // 383
	CUtlString::operator=(
			const char* src);  // 373
} /* size: 0, variables: 6, inline expansions: 17 (365 bytes) */

// <00170E83> kv3lib/keyvalues3_textreader.cpp:298
// variables: 9
// function calls: 17
bool ReadKV3TextHeader(CUtlTokenizer* pTokenizer, V_uuid_t* pOutLoadedFormatUUID, CUtlString* pOutLoadedFormatName, CUtlString* pOutError)
{
	const char   __FUNCTION__; // 60089
	CUtlTokenReference encodingName; // 306
	CUtlTokenReference encodingId; // 307
	CUtlTokenReference formatName; // 308
	CUtlTokenReference formatId; // 309
	V_uuid_t encodingUUID; // 369
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 301
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 302
	}
	CUtlString::operator=(
			const char* src);  // 316
	CUtlString::operator=(
			const char* src);  // 313
	CUtlString::operator=(
			const char* src);  // 321
	CUtlString::operator=(
			const char* src);  // 314
	CUtlString::operator=(
			const char* src);  // 317
	CUtlString::operator=(
			const char* src);  // 326
	CUtlString::operator=(
			const char* src);  // 337
	CUtlString::operator=(
			const char* src);  // 333
	CUtlString::operator=(
			const char* src);  // 342
	CUtlString::operator=(
			const char* src);  // 360
	CUtlString::operator=(
			const char* src);  // 354
	CUtlString::operator=(
			const char* src);  // 377
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1593
	operator!=(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 379
	CUtlString::operator=(
			const char* src);  // 383
	CUtlString::operator=(
			const char* src);  // 373
} /* size: 0, variables: 6, inline expansions: 17 (0 bytes) */

// <055E34D4> kv3lib/keyvalues3_textreader.cpp:394
// variables: 8
// function calls: 61
void CLoadKV3FromText::ReadTable(KeyValues3* pTarget)
{
	KeyValues3* pObject; // 405
	const char   __FUNCTION__; // 25452
	bool bMetadata; // 409
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 406
	}
	{
		CMetadataParseHelper metadataHelper; // 423
		CUtlTokenReference memberName; // 427
		CBufferStringN<128> unescapedName; // 447
		KeyValues3* pMember; // 449
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<128>::CBufferStringN(); // 447
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 449
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 151
		KV3MakeLowerHash(const char* pStr); // 23
		CKV3MemberName::CKV3MemberName(
				const char* pString);  // 449
		CMetadataParseHelper::CopyPostamble(
				CUtlTokenizer* pTokenizer);  // 70
		CMetadataParseHelper::CopyPostamble(
				CUtlTokenizer* pTokenizer);  // 456
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 85
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 85
		CMetadataParseHelper::ApplyMetadata(
				KeyValues3* pTarget);  // 80
		CMetadataParseHelper::ApplyMetadata(
				KeyValues3* pTarget);  // 457
		CBufferString::~CBufferString(); // 587
		CBufferStringN<128>::~CBufferStringN(); // 458
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CMetadataParseHelper::~CMetadataParseHelper(); // 458
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<80>::CBufferStringN(); // 55
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<80>::CBufferStringN(); // 55
		CMetadataParseHelper::CMetadataParseHelper(
					bool bEnabled);  // 423
		CMetadataParseHelper::CopyPreamble(
				CUtlTokenizer* pTokenizer);  // 59
		CMetadataParseHelper::CopyPreamble(
				CUtlTokenizer* pTokenizer);  // 424
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 430
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 442
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 442
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CMetadataParseHelper::~CMetadataParseHelper(); // 458
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 452
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 452
		CBufferString::~CBufferString(); // 587
		CBufferStringN<128>::~CBufferStringN(); // 458
	}
} /* size: 0, variables: 3 */

// <0295AECE> kv3lib/keyvalues3_textreader.cpp:394
// variables: 8
// function calls: 61
void CLoadKV3FromText::ReadTable(KeyValues3* pTarget)
{
	KeyValues3* pObject; // 405
	const char   __FUNCTION__; // 44123
	bool bMetadata; // 409
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 406
	}
	{
		CMetadataParseHelper metadataHelper; // 423
		CUtlTokenReference memberName; // 427
		CBufferStringN<128> unescapedName; // 447
		KeyValues3* pMember; // 449
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<128>::CBufferStringN(); // 447
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 449
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 151
		KV3MakeLowerHash(const char* pStr); // 23
		CKV3MemberName::CKV3MemberName(
				const char* pString);  // 449
		CMetadataParseHelper::CopyPostamble(
				CUtlTokenizer* pTokenizer);  // 70
		CMetadataParseHelper::CopyPostamble(
				CUtlTokenizer* pTokenizer);  // 456
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 85
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 85
		CMetadataParseHelper::ApplyMetadata(
				KeyValues3* pTarget);  // 80
		CMetadataParseHelper::ApplyMetadata(
				KeyValues3* pTarget);  // 457
		CBufferString::~CBufferString(); // 587
		CBufferStringN<128>::~CBufferStringN(); // 458
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CMetadataParseHelper::~CMetadataParseHelper(); // 458
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<80>::CBufferStringN(); // 55
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<80>::CBufferStringN(); // 55
		CMetadataParseHelper::CMetadataParseHelper(
					bool bEnabled);  // 423
		CMetadataParseHelper::CopyPreamble(
				CUtlTokenizer* pTokenizer);  // 59
		CMetadataParseHelper::CopyPreamble(
				CUtlTokenizer* pTokenizer);  // 424
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 430
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 442
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 442
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CMetadataParseHelper::~CMetadataParseHelper(); // 458
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 452
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 452
		CBufferString::~CBufferString(); // 587
		CBufferStringN<128>::~CBufferStringN(); // 458
	}
} /* size: 0, variables: 3 */

// <012AAA83> kv3lib/keyvalues3_textreader.cpp:394
// variables: 8
// function calls: 61
void CLoadKV3FromText::ReadTable(KeyValues3* pTarget)
{
	KeyValues3* pObject; // 405
	const char   __FUNCTION__; // 49102
	bool bMetadata; // 409
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 406
	}
	{
		CMetadataParseHelper metadataHelper; // 423
		CUtlTokenReference memberName; // 427
		CBufferStringN<128> unescapedName; // 447
		KeyValues3* pMember; // 449
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<128>::CBufferStringN(); // 447
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 449
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 151
		KV3MakeLowerHash(const char* pStr); // 23
		CKV3MemberName::CKV3MemberName(
				const char* pString);  // 449
		CMetadataParseHelper::CopyPostamble(
				CUtlTokenizer* pTokenizer);  // 70
		CMetadataParseHelper::CopyPostamble(
				CUtlTokenizer* pTokenizer);  // 456
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 85
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 85
		CMetadataParseHelper::ApplyMetadata(
				KeyValues3* pTarget);  // 80
		CMetadataParseHelper::ApplyMetadata(
				KeyValues3* pTarget);  // 457
		CBufferString::~CBufferString(); // 587
		CBufferStringN<128>::~CBufferStringN(); // 458
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CMetadataParseHelper::~CMetadataParseHelper(); // 458
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<80>::CBufferStringN(); // 55
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<80>::CBufferStringN(); // 55
		CMetadataParseHelper::CMetadataParseHelper(
					bool bEnabled);  // 423
		CMetadataParseHelper::CopyPreamble(
				CUtlTokenizer* pTokenizer);  // 59
		CMetadataParseHelper::CopyPreamble(
				CUtlTokenizer* pTokenizer);  // 424
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 430
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 442
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 442
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CMetadataParseHelper::~CMetadataParseHelper(); // 458
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 452
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 452
		CBufferString::~CBufferString(); // 587
		CBufferStringN<128>::~CBufferStringN(); // 458
	}
} /* size: 0, variables: 3 */

// <00326248> kv3lib/keyvalues3_textreader.cpp:394
// variables: 8
// function calls: 61
void CLoadKV3FromText::ReadTable(KeyValues3* pTarget)
{
	KeyValues3* pObject; // 405
	const char   __FUNCTION__; // 35269
	bool bMetadata; // 409
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 406
	}
	{
		CMetadataParseHelper metadataHelper; // 423
		CUtlTokenReference memberName; // 427
		CBufferStringN<128> unescapedName; // 447
		KeyValues3* pMember; // 449
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<128>::CBufferStringN(); // 447
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 449
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 151
		KV3MakeLowerHash(const char* pStr); // 23
		CKV3MemberName::CKV3MemberName(
				const char* pString);  // 449
		CMetadataParseHelper::CopyPostamble(
				CUtlTokenizer* pTokenizer);  // 70
		CMetadataParseHelper::CopyPostamble(
				CUtlTokenizer* pTokenizer);  // 456
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 85
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 85
		CMetadataParseHelper::ApplyMetadata(
				KeyValues3* pTarget);  // 80
		CMetadataParseHelper::ApplyMetadata(
				KeyValues3* pTarget);  // 457
		CBufferString::~CBufferString(); // 587
		CBufferStringN<128>::~CBufferStringN(); // 458
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CMetadataParseHelper::~CMetadataParseHelper(); // 458
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<80>::CBufferStringN(); // 55
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<80>::CBufferStringN(); // 55
		CMetadataParseHelper::CMetadataParseHelper(
					bool bEnabled);  // 423
		CMetadataParseHelper::CopyPreamble(
				CUtlTokenizer* pTokenizer);  // 59
		CMetadataParseHelper::CopyPreamble(
				CUtlTokenizer* pTokenizer);  // 424
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 430
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 442
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 442
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CMetadataParseHelper::~CMetadataParseHelper(); // 458
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 452
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 452
		CBufferString::~CBufferString(); // 587
		CBufferStringN<128>::~CBufferStringN(); // 458
	}
} /* size: 0, variables: 3 */

// <0068B44A> kv3lib/keyvalues3_textreader.cpp:394
// variables: 8
// function calls: 61
void CLoadKV3FromText::ReadTable(KeyValues3* pTarget)
{
	KeyValues3* pObject; // 405
	const char   __FUNCTION__; // 61255
	bool bMetadata; // 409
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 406
	}
	{
		CMetadataParseHelper metadataHelper; // 423
		CUtlTokenReference memberName; // 427
		CBufferStringN<128> unescapedName; // 447
		KeyValues3* pMember; // 449
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<128>::CBufferStringN(); // 447
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 449
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 151
		KV3MakeLowerHash(const char* pStr); // 23
		CKV3MemberName::CKV3MemberName(
				const char* pString);  // 449
		CMetadataParseHelper::CopyPostamble(
				CUtlTokenizer* pTokenizer);  // 70
		CMetadataParseHelper::CopyPostamble(
				CUtlTokenizer* pTokenizer);  // 456
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 85
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 85
		CMetadataParseHelper::ApplyMetadata(
				KeyValues3* pTarget);  // 80
		CMetadataParseHelper::ApplyMetadata(
				KeyValues3* pTarget);  // 457
		CBufferString::~CBufferString(); // 587
		CBufferStringN<128>::~CBufferStringN(); // 458
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CMetadataParseHelper::~CMetadataParseHelper(); // 458
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<80>::CBufferStringN(); // 55
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<80>::CBufferStringN(); // 55
		CMetadataParseHelper::CMetadataParseHelper(
					bool bEnabled);  // 423
		CMetadataParseHelper::CopyPreamble(
				CUtlTokenizer* pTokenizer);  // 59
		CMetadataParseHelper::CopyPreamble(
				CUtlTokenizer* pTokenizer);  // 424
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 430
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 442
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 442
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CMetadataParseHelper::~CMetadataParseHelper(); // 458
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 452
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 452
		CBufferString::~CBufferString(); // 587
		CBufferStringN<128>::~CBufferStringN(); // 458
	}
} /* size: 0, variables: 3 */

// <00A630D1> kv3lib/keyvalues3_textreader.cpp:394
// variables: 8
// function calls: 61
void CLoadKV3FromText::ReadTable(KeyValues3* pTarget)
{
	KeyValues3* pObject; // 405
	const char   __FUNCTION__; // 1870
	bool bMetadata; // 409
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 406
	}
	{
		CMetadataParseHelper metadataHelper; // 423
		CUtlTokenReference memberName; // 427
		CBufferStringN<128> unescapedName; // 447
		KeyValues3* pMember; // 449
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<128>::CBufferStringN(); // 447
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 449
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 151
		KV3MakeLowerHash(const char* pStr); // 23
		CKV3MemberName::CKV3MemberName(
				const char* pString);  // 449
		CMetadataParseHelper::CopyPostamble(
				CUtlTokenizer* pTokenizer);  // 70
		CMetadataParseHelper::CopyPostamble(
				CUtlTokenizer* pTokenizer);  // 456
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 85
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 85
		CMetadataParseHelper::ApplyMetadata(
				KeyValues3* pTarget);  // 80
		CMetadataParseHelper::ApplyMetadata(
				KeyValues3* pTarget);  // 457
		CBufferString::~CBufferString(); // 587
		CBufferStringN<128>::~CBufferStringN(); // 458
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CMetadataParseHelper::~CMetadataParseHelper(); // 458
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<80>::CBufferStringN(); // 55
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<80>::CBufferStringN(); // 55
		CMetadataParseHelper::CMetadataParseHelper(
					bool bEnabled);  // 423
		CMetadataParseHelper::CopyPreamble(
				CUtlTokenizer* pTokenizer);  // 59
		CMetadataParseHelper::CopyPreamble(
				CUtlTokenizer* pTokenizer);  // 424
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 430
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 442
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 442
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CMetadataParseHelper::~CMetadataParseHelper(); // 458
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 452
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 452
		CBufferString::~CBufferString(); // 587
		CBufferStringN<128>::~CBufferStringN(); // 458
	}
} /* size: 0, variables: 3 */

// <0016FC52> kv3lib/keyvalues3_textreader.cpp:394
// variables: 8
// function calls: 61
void CLoadKV3FromText::ReadTable(KeyValues3* pTarget)
{
	KeyValues3* pObject; // 405
	const char   __FUNCTION__; // 59903
	bool bMetadata; // 409
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 406
	}
	{
		CMetadataParseHelper metadataHelper; // 423
		CUtlTokenReference memberName; // 427
		CBufferStringN<128> unescapedName; // 447
		KeyValues3* pMember; // 449
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<128>::CBufferStringN(); // 447
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 449
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 151
		KV3MakeLowerHash(const char* pStr); // 23
		CKV3MemberName::CKV3MemberName(
				const char* pString);  // 449
		CMetadataParseHelper::CopyPostamble(
				CUtlTokenizer* pTokenizer);  // 70
		CMetadataParseHelper::CopyPostamble(
				CUtlTokenizer* pTokenizer);  // 456
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 85
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 85
		CMetadataParseHelper::ApplyMetadata(
				KeyValues3* pTarget);  // 80
		CMetadataParseHelper::ApplyMetadata(
				KeyValues3* pTarget);  // 457
		CBufferString::~CBufferString(); // 587
		CBufferStringN<128>::~CBufferStringN(); // 458
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CMetadataParseHelper::~CMetadataParseHelper(); // 458
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<80>::CBufferStringN(); // 55
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<80>::CBufferStringN(); // 55
		CMetadataParseHelper::CMetadataParseHelper(
					bool bEnabled);  // 423
		CMetadataParseHelper::CopyPreamble(
				CUtlTokenizer* pTokenizer);  // 59
		CMetadataParseHelper::CopyPreamble(
				CUtlTokenizer* pTokenizer);  // 424
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 430
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 442
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 442
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CMetadataParseHelper::~CMetadataParseHelper(); // 458
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 452
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 452
		CBufferString::~CBufferString(); // 587
		CBufferStringN<128>::~CBufferStringN(); // 458
	}
} /* size: 0, variables: 3 */

// <055E2F18> kv3lib/keyvalues3_textreader.cpp:469
// variables: 2
// function calls: 10
void CLoadKV3FromText::ReadValue(KeyValues3* pTarget)
{
	{
		CUtlTokenReference flag_name; // 482
		KeyValues3Flag_t nFlag; // 486
		CUtlTokenizer::ConsumeNextToken(); // 484
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 489
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 489
	}
	CUtlString::Get(); // 304
	CUtlTokenizer::GetFilename(); // 476
} /* size: 734, inline expansions: 2 (42 bytes) */

// <055E244A> kv3lib/keyvalues3_textreader.cpp:522
// variables: 4
// function calls: 36
void CLoadKV3FromText::ReadArrayValue(KeyValues3* arrayTarget)
{
	bool bMetadata; // 535
	int nArrayIndex; // 537
	{
		CMetadataParseHelper metadataHelper; // 547
		KeyValues3* pElement; // 551
		CMetadataParseHelper::CopyPostamble(
				CUtlTokenizer* pTokenizer);  // 70
		CMetadataParseHelper::CopyPostamble(
				CUtlTokenizer* pTokenizer);  // 568
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 85
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 85
		CMetadataParseHelper::ApplyMetadata(
				KeyValues3* pTarget);  // 80
		CMetadataParseHelper::ApplyMetadata(
				KeyValues3* pTarget);  // 569
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CMetadataParseHelper::~CMetadataParseHelper(); // 572
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<80>::CBufferStringN(); // 55
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<80>::CBufferStringN(); // 55
		CMetadataParseHelper::CMetadataParseHelper(
					bool bEnabled);  // 547
		CMetadataParseHelper::CopyPreamble(
				CUtlTokenizer* pTokenizer);  // 59
		CMetadataParseHelper::CopyPreamble(
				CUtlTokenizer* pTokenizer);  // 548
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 564
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 564
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CMetadataParseHelper::~CMetadataParseHelper(); // 572
	}
} /* size: 780, variables: 2 */

// <055E2411> kv3lib/keyvalues3_textreader.cpp:583
// variable: 1
bool ByteFromToken(const CUtlTokenReference& token, byte* pOutValue)
{
	char c; // 592
} /* size: 0, variables: 1 */

// <055E173D> kv3lib/keyvalues3_textreader.cpp:638
// variables: 3
// function calls: 47
void CLoadKV3FromText::ReadBinaryBlobValue(KeyValues3* arrayTarget)
{
	CUtlVectorFixedGrowable<unsigned char, 1024> byteArr; // 657
	{
		CUtlTokenReference memberValue; // 668
		byte byteVal; // 675
		CUtlTokenReference::GetTokenSize(); // 587
		ByteFromToken(const CUtlTokenReference& token,
				byte* pOutValue);  // 676
		CUtlMemory<unsigned char, int>::NumAllocated(); // 1196
		CUtlMemory<unsigned char, int>::Base(); // 112
		CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 1024, int> >::Base(); // 368
		CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 1024, int> >::ResetDbgInfo(); // 824
		CUtlMemory<unsigned char, int>::IsGrowable(); // 823
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 859
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 861
		CUtlMemory<unsigned char, int>::Grow(
			int num);  // 806
		CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 1024, int> >::GrowMemory(
				int num);  // 1198
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 602
		CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 1024, int> >::Element(
			int i);  // 1201
		CopyConstruct<unsigned char>(unsigned char* pMemory,
						const unsigned char& src);  // 1201
		CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 1024, int> >::AddToTail(
				const unsigned char& src);  // 682
	}
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
	AlignedByteArrayExplicit_t<1024, unsigned char, 1>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<1024, unsigned char>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<1024, unsigned char, 1>::Base(); // 231
	CUtlMemoryFixedGrowable<unsigned char, 1024, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 1024, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 1024, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<unsigned char, 1024>::CUtlVectorFixedGrowable(
				int growSize);  // 657
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 1024, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<1024, unsigned char, 1>::Base(); // 237
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
	CUtlMemoryFixedGrowable<unsigned char, 1024, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 1024, int> >::Base(); // 368
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 1024, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 1024, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned char, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned char, 1024, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 1024, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned char, 1024>::~CUtlVectorFixedGrowable(); // 691
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 1024, int> >::Count(); // 686
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 1024, int> >::Base(); // 686
} /* size: 944, variables: 1, inline expansions: 32 (869 bytes) */

// <055E0F56> kv3lib/keyvalues3_textreader.cpp:696
// variables: 3
// function calls: 22
void CLoadKV3FromText::ReadLiteralValue(KeyValues3* pTarget)
{
	CUtlTokenReference memberValue; // 698
	double specialFloatingPointValue; // 711
	{
		CBufferStringN<128> strUnescaped; // 727
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<128>::CBufferStringN(); // 727
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 729
		CBufferString::~CBufferString(); // 587
		CBufferStringN<128>::~CBufferStringN(); // 736
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 739
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 743
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 803
	CBufferString::Access(); // 84
	CFmtStrN<256>::Access(); // 747
	CLoadKV3FromText::ReportErrorNoLine(
				const char* pError);  // 747
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 747
} /* size: 799, variables: 2, inline expansions: 14 (482 bytes) */

