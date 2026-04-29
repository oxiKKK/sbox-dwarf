
//
// kv3lib/keyvalues3_jsonreader.cpp
//
//	referenced by: libengine2.so
//
//	functions: 13
//	class: 1
//

// <056E28B7> kv3lib/keyvalues3_jsonreader.cpp:42
// member functions: 20
// member variables: 5
// class size: 776
class CLoadKV3FromJSON {
	/* kv3lib/keyvalues3_jsonreader.cpp:45 */
	void CLoadKV3FromJSON(CLoadKV3FromJSON* , KeyValues3* , CUtlString* , CUtlBuffer* , const char* );
	/* kv3lib/keyvalues3_jsonreader.cpp:46 */
	void ~CLoadKV3FromJSON(CLoadKV3FromJSON* );
	/* kv3lib/keyvalues3_jsonreader.cpp:47 */
	bool Parse(CLoadKV3FromJSON* );
private:
	/* kv3lib/keyvalues3_jsonreader.cpp:50 */
	bool ReadObject(CLoadKV3FromJSON* , KeyValues3* );
	/* kv3lib/keyvalues3_jsonreader.cpp:51 */
	bool ReadValue(CLoadKV3FromJSON* , KeyValues3* );
	/* kv3lib/keyvalues3_jsonreader.cpp:52 */
	bool ReadArrayValue(CLoadKV3FromJSON* , KeyValues3* );
	/* kv3lib/keyvalues3_jsonreader.cpp:53 */
	bool ReadLiteralValue(CLoadKV3FromJSON* , KeyValues3* );
	/* kv3lib/keyvalues3_jsonreader.cpp:55 */
	void ReportError(CLoadKV3FromJSON* , const char* );
	/* kv3lib/keyvalues3_jsonreader.cpp:56 */
	void ReportErrorNoLine(CLoadKV3FromJSON* , const char* );
	/* kv3lib/keyvalues3_jsonreader.cpp:58 */
	bool UnescapeJSONString(CLoadKV3FromJSON* , const CUtlTokenReference& , CBufferString* );
	bool m_bLoadedOk; /* 0 1 */
	CUtlTokenizer m_Tokenizer __attribute__((__aligned__(8))); /* 8 744 */
	KeyValues3 * m_pRootTarget; /* 752 8 */
	CUtlString * m_pOutErrorMessage; /* 760 8 */
	CUtlBuffer * m_pSrcBuffer; /* 768 8 */
	void CLoadKV3FromJSON(class CLoadKV3FromJSON *, class KeyValues3 *, class CUtlString *, class CUtlBuffer *, const char  *); /* linkage=_ZN16CLoadKV3FromJSONC4EP10KeyValues3P10CUtlStringP10CUtlBufferPKc */
	void ~CLoadKV3FromJSON(class CLoadKV3FromJSON *); /* linkage=_ZN16CLoadKV3FromJSOND4Ev */
	/* <56e8a75> kv3lib/keyvalues3_jsonreader.cpp:158 */
	bool Parse(class CLoadKV3FromJSON *); /* linkage=_ZN16CLoadKV3FromJSON5ParseEv */
	bool ReadObject(class CLoadKV3FromJSON *, class KeyValues3 *); /* linkage=_ZN16CLoadKV3FromJSON10ReadObjectEP10KeyValues3 */
	bool ReadValue(class CLoadKV3FromJSON *, class KeyValues3 *); /* linkage=_ZN16CLoadKV3FromJSON9ReadValueEP10KeyValues3 */
	bool ReadArrayValue(class CLoadKV3FromJSON *, class KeyValues3 *); /* linkage=_ZN16CLoadKV3FromJSON14ReadArrayValueEP10KeyValues3 */
	bool ReadLiteralValue(class CLoadKV3FromJSON *, class KeyValues3 *); /* linkage=_ZN16CLoadKV3FromJSON16ReadLiteralValueEP10KeyValues3 */
	void ReportError(class CLoadKV3FromJSON *, const char  *); /* linkage=_ZN16CLoadKV3FromJSON11ReportErrorEPKc */
	/* <56e8a01> kv3lib/keyvalues3_jsonreader.cpp:144 */
	void ReportErrorNoLine(class CLoadKV3FromJSON *, const char  *); /* linkage=_ZN16CLoadKV3FromJSON17ReportErrorNoLineEPKc */
	bool UnescapeJSONString(class CLoadKV3FromJSON *, const class CUtlTokenReference  &, class CBufferString *); /* linkage=_ZN16CLoadKV3FromJSON18UnescapeJSONStringERK18CUtlTokenReferenceP13CBufferString */
} __attribute__((__aligned__(8)));

// <056E7AB6> kv3lib/keyvalues3_jsonreader.cpp:91
// variable: 1
// function calls: 8
bool LoadKV3FromJSONFile(KeyValues3* pRoot, CUtlString* pOutErrorMessage, const char* pPath, const char* pFilename)
{
	CUtlBuffer buf; // 93
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 103
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 102
} /* size: 0, variables: 1, inline expansions: 8 (0 bytes) */

// <056E71C7> kv3lib/keyvalues3_jsonreader.cpp:108
// function calls: 3
void CLoadKV3FromJSON::CLoadKV3FromJSON(KeyValues3* pRootTarget, CUtlString* pOutErrorMessage, CUtlBuffer* pSrcBuffer, const char* pFilename)
{
	CUtlBuffer::TellPut(); // 109
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 109
} /* size: 0, inline expansions: 3 (0 bytes) */

// <056E717C> kv3lib/keyvalues3_jsonreader.cpp:108
void CLoadKV3FromJSON::CLoadKV3FromJSON(KeyValues3* pRootTarget, CUtlString* pOutErrorMessage, CUtlBuffer* pSrcBuffer, const char* pFilename)
{
} /* size: 0 */

// <056E7133> kv3lib/keyvalues3_jsonreader.cpp:121
void CLoadKV3FromJSON::~CLoadKV3FromJSON()
{
} /* size: 0 */

// <056E6D78> kv3lib/keyvalues3_jsonreader.cpp:128
// variable: 1
// function calls: 11
void CLoadKV3FromJSON::ReportError(const char* pError)
{
	CUtlTokenReference nextToken; // 130
	CBufferString::WriteBuffer(); // 803
	CBufferString::Access(); // 84
	CFmtStrN<256>::Access(); // 133
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 803
	CBufferString::Access(); // 84
	CFmtStrN<256>::Access(); // 137
	CLoadKV3FromJSON::ReportErrorNoLine(
				const char* pError);  // 137
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 137
} /* size: 353, variables: 1, inline expansions: 11 (282 bytes) */

// <056E8A01> kv3lib/keyvalues3_jsonreader.cpp:144
void CLoadKV3FromJSON::ReportErrorNoLine(const char* pError)
{
} /* size: 0 */

// <056E8A75> kv3lib/keyvalues3_jsonreader.cpp:158
// function calls: 3
void CLoadKV3FromJSON::Parse()
{
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 169
} /* size: 0, inline expansions: 3 (0 bytes) */

// <056E6D36> kv3lib/keyvalues3_jsonreader.cpp:158
void CLoadKV3FromJSON::Parse()
{
} /* size: 0 */

// <056E616E> kv3lib/keyvalues3_jsonreader.cpp:178
// variables: 6
// function calls: 36
void CLoadKV3FromJSON::ReadObject(KeyValues3* pTarget)
{
	KeyValues3* pObject; // 189
	const char   __FUNCTION__; // 38382
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 190
	}
	{
		CUtlTokenReference memberName; // 206
		CBufferStringN<1024> unescapedName; // 226
		KeyValues3* pMember; // 232
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<1024>::CBufferStringN(); // 226
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 232
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 151
		KV3MakeLowerHash(const char* pStr); // 23
		CKV3MemberName::CKV3MemberName(
				const char* pString);  // 232
		CBufferString::~CBufferString(); // 587
		CBufferStringN<1024>::~CBufferStringN(); // 246
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 235
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 243
		CBufferString::~CBufferString(); // 587
		CBufferStringN<1024>::~CBufferStringN(); // 246
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 215
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 221
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 221
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 243
	}
} /* size: 0, variables: 2 */

// <056E5FDF> kv3lib/keyvalues3_jsonreader.cpp:257
// function calls: 2
void CLoadKV3FromJSON::ReadValue(KeyValues3* pTarget)
{
	CUtlString::Get(); // 304
	CUtlTokenizer::GetFilename(); // 264
} /* size: 189, inline expansions: 2 (42 bytes) */

// <056E5C30> kv3lib/keyvalues3_jsonreader.cpp:287
// variables: 2
// function calls: 7
void CLoadKV3FromJSON::ReadArrayValue(KeyValues3* arrayTarget)
{
	int nArrayIndex; // 301
	{
		KeyValues3* pElement; // 312
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 325
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 325
	}
} /* size: 400, variables: 1 */

// <056E525A> kv3lib/keyvalues3_jsonreader.cpp:341
// variables: 3
// function calls: 30
void CLoadKV3FromJSON::ReadLiteralValue(KeyValues3* pTarget)
{
	CUtlTokenReference memberValue; // 343
	{
		float64 doubleValue; // 377
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 239
		KeyValues3::SetValueDouble(
				double value);  // 378
	}
	{
		CBufferStringN<1024> strUnescaped; // 382
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<1024>::CBufferStringN(); // 382
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 387
		CBufferString::~CBufferString(); // 587
		CBufferStringN<1024>::~CBufferStringN(); // 388
		CBufferString::~CBufferString(); // 587
		CBufferStringN<1024>::~CBufferStringN(); // 388
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 360
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 391
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 803
	CBufferString::Access(); // 84
	CFmtStrN<256>::Access(); // 395
	CLoadKV3FromJSON::ReportErrorNoLine(
				const char* pError);  // 395
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 395
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 364
} /* size: 904, variables: 1, inline expansions: 17 (573 bytes) */

// <056E49FA> kv3lib/keyvalues3_jsonreader.cpp:404
// variables: 19
// function calls: 22
void CLoadKV3FromJSON::UnescapeJSONString(const CUtlTokenReference& token, CBufferString* pOutResult)
{
	Escape_t JSON_SIMPLE_ESCAPE_CHARACTERS; // 411
	const char  JSON_UNICODE_ESCAPE; // 423
	bool bInEscape; // 425
	const char* pStart; // 426
	const char* pEnd; // 427
	const char   __FUNCTION__; // 38568
	{
		const char* pStr; // 428
		{
			char c; // 430
			{
				uchar32 nCodePoint; // 458
				char utf8Encode; // 474
				int r; // 475
				{
					int n; // 459
					{
						char chHex; // 462
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 470
						}
					}
				}
				CBufferString::Append(
					const char* pString,
					int nChars,
					bool bExact);  // 1017
				CBufferString::operator+=(
						const char* pRhs);  // 482
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 83
				CFmtStrN<256>::operator char const*(); // 478
				CBufferString::~CBufferString(); // 587
				CBufferStringN<256>::~CBufferStringN(); // 41
				CFmtStrN<256>::~CFmtStrN(); // 478
			}
			{
				bool bOk; // 488
				{
					const Escape_t& SIMPLE_ESCAPE; // 489
					Escape_t& __for_range; // 59183
					Escape_t* __for_begin; // 57999
					Escape_t* __for_end; // 57999
				}
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 83
				CFmtStrN<256>::operator char const*(); // 501
				CBufferString::~CBufferString(); // 587
				CBufferStringN<256>::~CBufferStringN(); // 41
				CFmtStrN<256>::~CFmtStrN(); // 501
				CBufferString::Append(
					char ch,
					bool bExact);  // 1023
				CBufferString::operator+=(
						char c);  // 507
			}
			CBufferString::Append(
				char ch,
				bool bExact);  // 1023
			CBufferString::operator+=(
					char c);  // 515
		}
	}
	CUtlTokenReference::GetStartPtr(); // 426
	CUtlTokenReference::GetEndPtr(); // 427
} /* size: 0, variables: 6, inline expansions: 2 (8 bytes) */

