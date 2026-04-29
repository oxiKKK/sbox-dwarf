
//
// tier0/keyvaluesjson.cpp
//
//	referenced by: libtier0.so
//
//	functions: 27
//	structs: 2
//

// <0023EE14> tier0/keyvaluesjson.cpp:17
// function calls: 15
void KeyValuesJSONParser::KeyValuesJSONParser(const CUtlBuffer& buf)
{
	CUtlMemory<char, int>::CUtlMemory(
			char* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<char, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<char, int>::CUtlMemoryFixedGrowable_Base(
					char* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<1024, char, 1>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<1024, char>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<1024, char, 1>::Base(); // 231
	CUtlMemoryFixedGrowable<char, 1024, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<char, 1024>::CUtlVectorFixedGrowable(
				int growSize);  // 17

unexpected_char: // 397
	KeyValuesJSONParser::NextToken(); // 37
	KeyValuesJSONParser::Init(
		const char* pszText,
		int cbSize);  // 19
	CUtlBuffer::TellPut(); // 19
	CUtlMemory<unsigned char, int>::Base(); // 1479
	CUtlBuffer::Base(); // 19
} /* size: 112, goto labels: 1, inline expansions: 15 (137 bytes) */

// <0023EDEC> tier0/keyvaluesjson.cpp:17
void KeyValuesJSONParser::KeyValuesJSONParser(const CUtlBuffer& buf)
{
} /* size: 0 */

// <0023EA6D> tier0/keyvaluesjson.cpp:22
// function calls: 13
void KeyValuesJSONParser::KeyValuesJSONParser(const char* pszText, int cbSize)
{
	CUtlMemory<char, int>::CUtlMemory(
			char* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<char, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<char, int>::CUtlMemoryFixedGrowable_Base(
					char* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<1024, char, 1>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<1024, char>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<1024, char, 1>::Base(); // 231
	CUtlMemoryFixedGrowable<char, 1024, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<char, 1024>::CUtlVectorFixedGrowable(
				int growSize);  // 22

unexpected_char: // 397
	KeyValuesJSONParser::NextToken(); // 37
	KeyValuesJSONParser::Init(
		const char* pszText,
		int cbSize);  // 24
	V_strlen(const char* str); // 24
} /* size: 172, goto labels: 1, inline expansions: 13 (189 bytes) */

// <0023EA39> tier0/keyvaluesjson.cpp:22
void KeyValuesJSONParser::KeyValuesJSONParser(const char* pszText, int cbSize)
{
} /* size: 0 */

// <0023E6C5> tier0/keyvaluesjson.cpp:27
// function calls: 17
void KeyValuesJSONParser::~KeyValuesJSONParser()
{
	CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<1024, char, 1>::Base(); // 237
	CUtlMemory<char, int>::IsExternallyAllocated(); // 577
	CUtlMemory<char, int>::ConvertToExternalMemory(
				char* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<char, int>::Purge_FixedGrowable(
				char* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<char, int>::Purge_FixedGrowable(
				char* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<char, 1024, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Purge(); // 560
	ValidateAlignment<char>(void); // 508
	CUtlMemory<char, int>::Purge(); // 903
	CUtlMemory<char, int>::Purge(); // 510
	CUtlMemory<char, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<char, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<char, 1024, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<char, 1024>::~CUtlVectorFixedGrowable(); // 27
} /* size: 105, inline expansions: 17 (591 bytes) */

// <0023E6A9> tier0/keyvaluesjson.cpp:27
void KeyValuesJSONParser::~KeyValuesJSONParser()
{
} /* size: 0 */

// <0023FA00> tier0/keyvaluesjson.cpp:29
// function call: 1
void KeyValuesJSONParser::Init(const char* pszText, int cbSize)
{

unexpected_char: // 397
	KeyValuesJSONParser::NextToken(); // 37
} /* size: 0, goto labels: 1, inline expansions: 1 (0 bytes) */

// <0023E675> tier0/keyvaluesjson.cpp:29
void KeyValuesJSONParser::Init(const char* pszText, int cbSize)
{
} /* size: 0 */

// <0023E510> tier0/keyvaluesjson.cpp:40
// variable: 1
void KeyValuesJSONParser::ParseFile()
{
	{
		KeyValues* pResult; // 54
	}
} /* size: 178 */

// <0023E060> tier0/keyvaluesjson.cpp:68
// variables: 5
// function calls: 8
void KeyValuesJSONParser::ParseObject(KeyValues* pObject)
{
	const char   __FUNCTION__; // 9087
	int nOpenDelimLine; // 71
	KeyValues* pLastChild; // 73
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 70
	}
	{
		KeyValues* pChildValue; // 96
		CUtlMemory<char, int>::Base(); // 112
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Base(); // 96

unexpected_char: // 397
		KeyValuesJSONParser::NextToken(); // 97

unexpected_char: // 397
		KeyValuesJSONParser::NextToken(); // 106

unexpected_char: // 397
		KeyValuesJSONParser::NextToken(); // 125
		V_strcpy_safe<1024>(char& pDest,
					const char* pSrc);  // 85
	}

unexpected_char: // 397
	KeyValuesJSONParser::NextToken(); // 72

unexpected_char: // 397
	KeyValuesJSONParser::NextToken(); // 135
} /* size: 0, variables: 3, goto labels: 2, inline expansions: 2 (35 bytes) */

// <0023DCE0> tier0/keyvaluesjson.cpp:141
// variables: 7
// function calls: 4
void KeyValuesJSONParser::ParseArray(KeyValues* pArray)
{
	const char   __FUNCTION__; // 7887
	int nOpenDelimLine; // 144
	KeyValues* pLastChild; // 146
	int idx; // 147
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 143
	}
	{
		char szKeyName; // 164
		KeyValues* pChildValue; // 167

unexpected_char: // 397
		KeyValuesJSONParser::NextToken(); // 194
		V_strcpy_safe<1024>(char& pDest,
					const char* pSrc);  // 159
	}

unexpected_char: // 397
	KeyValuesJSONParser::NextToken(); // 145

unexpected_char: // 397
	KeyValuesJSONParser::NextToken(); // 204
} /* size: 0, variables: 4, goto labels: 2, inline expansions: 2 (37 bytes) */

// <0023D7CE> tier0/keyvaluesjson.cpp:210
// variables: 4
// function calls: 13
void KeyValuesJSONParser::ParseValue(KeyValues* pValue)
{
	{
		const char* pszNum; // 223
		{
			int64 val64; // 228
		}
		{
			uint64 val64; // 240
		}
		CUtlMemory<char, int>::Base(); // 112
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Base(); // 223

unexpected_char: // 397
		KeyValuesJSONParser::NextToken(); // 250
	}
	{
		float f; // 256
		CUtlMemory<char, int>::Base(); // 112
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Base(); // 256

unexpected_char: // 397
		KeyValuesJSONParser::NextToken(); // 258
	}

unexpected_char: // 397
	KeyValuesJSONParser::NextToken(); // 274

unexpected_char: // 397
	KeyValuesJSONParser::NextToken(); // 218
	KeyValues::SetBool(
		const char* keyName,
		bool value);  // 263
	KeyValues::SetBool(
		const char* keyName,
		bool value);  // 268

unexpected_char: // 397
	KeyValuesJSONParser::NextToken(); // 269
	CUtlMemory<char, int>::Base(); // 112
	CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Base(); // 217
} /* size: 460, goto labels: 3, inline expansions: 7 (83 bytes) */

// <0023F9BA> tier0/keyvaluesjson.cpp:285
void KeyValuesJSONParser::NextToken()
{
} /* size: 0 */

// <0023F899> tier0/keyvaluesjson.cpp:285
// variable: 1
// function call: 1
void KeyValuesJSONParser::NextToken()
{

unexpected_char: // 397
	{
		char c; // 300
		V_isprint(char c); // 398
	}
} /* size: 656, goto labels: 1 */

// <0023D79A> tier0/keyvaluesjson.cpp:285
// variable: 1
void KeyValuesJSONParser::NextToken()
{

unexpected_char: // 397
	{
		char c; // 300
	}
} /* size: 0, goto labels: 1 */

// <0023C1BE> tier0/keyvaluesjson.cpp:410
// variables: 4
// function calls: 96
void KeyValuesJSONParser::ParseNumberToken()
{
	char c; // 429
	bool bHasWholePart; // 431
	{
		bool bHasFractionPart; // 474
		CUtlMemory<char, int>::NumAllocated(); // 1196
		CUtlMemory<char, int>::operator[](
				int i);  // 602
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Element(
			int i);  // 1201
		CopyConstruct<char>(char* pMemory,
					const char& src);  // 1201
		CUtlMemory<char, int>::Base(); // 112
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Base(); // 368
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::AddToTail(
				const char& src);  // 471
		CUtlMemory<char, int>::operator[](
				int i);  // 602
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Element(
			int i);  // 1201
		CopyConstruct<char>(char* pMemory,
					const char& src);  // 1201
		CUtlMemory<char, int>::NumAllocated(); // 1196
		CUtlMemory<char, int>::Base(); // 112
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Base(); // 368
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::AddToTail(
				const char& src);  // 477
		CUtlMemory<char, int>::NumAllocated(); // 1247
		CUtlMemory<char, int>::operator[](
				int i);  // 602
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Element(
			int i);  // 1252
		Construct<char, char>(char* pMemory); // 1252
		CUtlMemory<char, int>::Base(); // 112
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Base(); // 368
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::AddToTail(
				char& src);  // 484
		CUtlMemory<char, int>::Base(); // 112
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Base(); // 485
	}
	{
		bool bHasExponentDigit; // 504
		CUtlMemory<char, int>::NumAllocated(); // 1196
		CUtlMemory<char, int>::operator[](
				int i);  // 602
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Element(
			int i);  // 1201
		CopyConstruct<char>(char* pMemory,
					const char& src);  // 1201
		CUtlMemory<char, int>::Base(); // 112
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Base(); // 368
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::AddToTail(
				const char& src);  // 497
		V_strcpy_safe<1024>(char& pDest,
					const char* pSrc);  // 512
		CUtlMemory<char, int>::operator[](
				int i);  // 602
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Element(
			int i);  // 1201
		CopyConstruct<char>(char* pMemory,
					const char& src);  // 1201
		CUtlMemory<char, int>::NumAllocated(); // 1196
		CUtlMemory<char, int>::Base(); // 112
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Base(); // 368
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::AddToTail(
				const char& src);  // 507
		CUtlMemory<char, int>::NumAllocated(); // 1196
		CUtlMemory<char, int>::operator[](
				int i);  // 602
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Element(
			int i);  // 1201
		CopyConstruct<char>(char* pMemory,
					const char& src);  // 1201
		CUtlMemory<char, int>::Base(); // 112
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Base(); // 368
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::AddToTail(
				const char& src);  // 501
	}
	CUtlMemory<char, int>::NumAllocated(); // 1196
	CUtlMemory<char, int>::operator[](
			int i);  // 602
	CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Element(
		int i);  // 1201
	CopyConstruct<char>(char* pMemory,
				const char& src);  // 1201
	CUtlMemory<char, int>::Base(); // 112
	CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Base(); // 368
	CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::AddToTail(
			const char& src);  // 430
	CUtlMemory<char, int>::operator[](
			int i);  // 602
	CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Element(
		int i);  // 1201
	CopyConstruct<char>(char* pMemory,
				const char& src);  // 1201
	CUtlMemory<char, int>::NumAllocated(); // 1196
	CUtlMemory<char, int>::Base(); // 112
	CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Base(); // 368
	CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::AddToTail(
			const char& src);  // 454
	CUtlMemory<char, int>::NumAllocated(); // 1247
	CUtlMemory<char, int>::operator[](
			int i);  // 602
	CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Element(
		int i);  // 1252
	Construct<char, char>(char* pMemory); // 1252
	CUtlMemory<char, int>::Base(); // 112
	CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Base(); // 368
	CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::AddToTail(
			char& src);  // 520
	V_isspace(int c); // 529
	V_strcpy_safe<1024>(char& pDest,
				const char* pSrc);  // 424
	CUtlMemory<char, int>::NumAllocated(); // 1247
	CUtlMemory<char, int>::operator[](
			int i);  // 602
	CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Element(
		int i);  // 1252
	Construct<char, char>(char* pMemory); // 1252
	CUtlMemory<char, int>::Base(); // 112
	CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Base(); // 368
	CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::AddToTail(
			char& src);  // 418
	V_isprint(char c); // 537
} /* size: 1947, variables: 2, inline expansions: 39 (861 bytes) */

// <0023BA8D> tier0/keyvaluesjson.cpp:544
// variables: 10
// function calls: 27
void KeyValuesJSONParser::ParseStringToken()
{
	char cDelim; // 546
	const char   __FUNCTION__; // 45
	{
		char c; // 550
		{
			uchar32 nCodePoint; // 601
			char utf8Encode; // 617
			int r; // 618
			{
				int n; // 602
				{
					char chHex; // 605
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 613
					}
				}
			}
			{
				int i; // 625
			}
		}
		CUtlMemory<char, int>::NumAllocated(); // 1196
		CUtlMemory<char, int>::operator[](
				int i);  // 602
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Element(
			int i);  // 1201
		CopyConstruct<char>(char* pMemory,
					const char& src);  // 1201
		CUtlMemory<char, int>::Base(); // 112
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Base(); // 368
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::AddToTail(
				const char& src);  // 582
		CUtlMemory<char, int>::NumAllocated(); // 1196
		CUtlMemory<char, int>::operator[](
				int i);  // 602
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Element(
			int i);  // 1201
		CopyConstruct<char>(char* pMemory,
					const char& src);  // 1201
		CUtlMemory<char, int>::Base(); // 112
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Base(); // 368
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::AddToTail(
				const char& src);  // 567
		CUtlMemory<char, int>::NumAllocated(); // 1247
		CUtlMemory<char, int>::operator[](
				int i);  // 602
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Element(
			int i);  // 1252
		Construct<char, char>(char* pMemory); // 1252
		CUtlMemory<char, int>::Base(); // 112
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::Base(); // 368
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<char, CUtlMemoryFixedGrowable<char, 1024, int> >::AddToTail(
				char& src);  // 560
	}
} /* size: 532, variables: 2 */

// <0023BA1B> tier0/keyvaluesjson.cpp:643
// variables: 2
void KeyValuesJSONParser::GetTokenDebugText()
{
	const char   __FUNCTION__; // 55298
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 664
	}
} /* size: 0, variables: 1 */

// <0023B9FC> tier0/keyvaluesjson.cpp:721
void TestKeyValuesJSONParser(void)
{
} /* size: 5 */

// <00235903> tier0/keyvaluesjson.cpp:728
// member variables: 3
// struct size: 24
struct KVJSONParserStackEntry_t {
	KeyValues * m_pNode; /* 0 8 */
	KeyValues * m_pLastSubNode; /* 8 8 */
	uint m_unSubNodes; /* 16 4 */
};

// <002399EF> tier0/keyvaluesjson.cpp:735
void KVJSONParserContext_t::KVJSONParserContext_t()
{
} /* size: 0 */

// <002399D2> tier0/keyvaluesjson.cpp:735
inline void KVJSONParserContext_t::KVJSONParserContext_t()
{
} /* size: 0 */

// <002399BB> tier0/keyvaluesjson.cpp:735
void KVJSONParserContext_t::~KVJSONParserContext_t()
{
} /* size: 0 */

// <0023999E> tier0/keyvaluesjson.cpp:735
inline void KVJSONParserContext_t::~KVJSONParserContext_t()
{
} /* size: 0 */

// <0023706E> tier0/keyvaluesjson.cpp:735
// member functions: 2
// member variables: 2
// struct size: 112
struct KVJSONParserContext_t {
	CUtlVector<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> > m_vecStack; /* 0 32 */
	CUtlBuffer m_bufNextChildName; /* 32 80 */
	void ~KVJSONParserContext_t(KVJSONParserContext_t* );
	void KVJSONParserContext_t(KVJSONParserContext_t* );
};

// <0023B50B> tier0/keyvaluesjson.cpp:744
// variables: 5
// function calls: 18
KeyValues* KVJSONParserCreateNewSubNode(KVJSONParserContext_t* ctx, bool bPush)
{
	KeyValues* pNewSubNode; // 746
	{
		KVJSONParserStackEntry_t& tail; // 749
		CNumStr numStr; // 750
		const char* pszName; // 751
		CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::Count(); // 749
		CUtlMemory<KVJSONParserStackEntry_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::operator[](
				int i);  // 749
		CNumStr::CNumStr(); // 750
		CUtlBuffer::TellPut(); // 751
		CUtlMemory<unsigned char, int>::Base(); // 1484
		CUtlBuffer::Base(); // 751
		CNumStr::SetUint32(
				uint32 un32);  // 754
		CNumStr::operator char const*(); // 755
	}
	{
		KVJSONParserStackEntry_t& newtail; // 766
		CUtlMemory<KVJSONParserStackEntry_t, int>::NumAllocated(); // 1143
		CUtlMemory<KVJSONParserStackEntry_t, int>::Base(); // 112
		CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::Base(); // 368
		CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::AddToTail(); // 766
		CUtlMemory<KVJSONParserStackEntry_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::operator[](
				int i);  // 766
	}
	CUtlBuffer::Clear(); // 772
} /* size: 351, variables: 1, inline expansions: 1 (28 bytes) */

// <0023AFA5> tier0/keyvaluesjson.cpp:777
// variables: 6
// function calls: 15
int KeyValuesJSONParserCallback(void* void_ctx, int type, const JSON_value_struct* value)
{
	KVJSONParserContext_t* ctx; // 779
	const char   __FUNCTION__; // 62330
	{
		KVJSONParserStackEntry_t& tail; // 786
	}
	{
		KVJSONParserStackEntry_t& tail; // 810
		CUtlMemory<KVJSONParserStackEntry_t, int>::NumAllocated(); // 1143
		CUtlMemory<KVJSONParserStackEntry_t, int>::Base(); // 112
		CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::Base(); // 368
		CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::AddToTail(); // 810
		CUtlMemory<KVJSONParserStackEntry_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::operator[](
				int i);  // 810
		CUtlMemory<unsigned char, int>::Base(); // 1484
		CUtlBuffer::Base(); // 811
		CUtlBuffer::Clear(); // 814
	}
	{
		KeyValues* pCreatedNode; // 843
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 886
	}
	CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::Count(); // 824
	CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::Count(); // 807
	CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::Remove(
		int elem);  // 826
	CUtlBuffer::Clear(); // 831
} /* size: 0, variables: 2, inline expansions: 4 (56 bytes) */

// <00239A6D> tier0/keyvaluesjson.cpp:894
// variables: 11
// function calls: 70
bool KeyValuesToJSON(const KeyValues* pKeyValues, CUtlBuffer& outBuffer)
{
	const char   __FUNCTION__; // 60948
	{
		KeyValues* dat; // 897
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 901
		}
		{
			CNumStr numStr; // 933
			CNumStr::SetInt32(
				int32 n32);  // 177
			CNumStr::CNumStr(
				int32 n32);  // 933
			CNumStr::String(); // 934
			V_strlen(const char* str); // 934
		}
		{
			CNumStr numStr; // 940
			CNumStr::SetUint64(
					uint64 un64);  // 180
			CNumStr::CNumStr(
				uint64 un64);  // 940
			CNumStr::String(); // 941
			V_strlen(const char* str); // 941
		}
		{
			CNumStr numStr; // 947
			CNumStr::String(); // 948
			V_strlen(const char* str); // 948
			CNumStr::String(); // 948
			CNumStr::SetFloat(
				float f);  // 188
			CNumStr::CNumStr(
				float f);  // 947
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 954
		}
		KeyValues::ToJSON(
			CUtlBuffer& outputBuffer);  // 918
		CUtlBuffer::IsText(); // 1253
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1256
		CUtlBuffer::WasLastCharacterCR(); // 1303
		{
			int i; // 1262
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1204
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1264
		}
		CUtlBuffer::PutTabs(); // 1305
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1308
		CUtlBuffer::PutChar(
			char c);  // 906
		CUtlBuffer::IsText(); // 1253
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1256
		CUtlBuffer::WasLastCharacterCR(); // 1303
		{
			int i; // 1262
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1204
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1264
		}
		CUtlBuffer::PutTabs(); // 1305
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1308
		CUtlBuffer::PutChar(
			char c);  // 962
	}
	CUtlBuffer::IsText(); // 1253
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1256
	CUtlBuffer::WasLastCharacterCR(); // 1303
	{
		int i; // 1262
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1264
	}
	CUtlBuffer::PutTabs(); // 1305
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1204
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1308
	CUtlBuffer::PutChar(
		char c);  // 896
	CUtlBuffer::IsText(); // 1253
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1256
	CUtlBuffer::WasLastCharacterCR(); // 1303
	{
		int i; // 1262
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1264
	}
	CUtlBuffer::PutTabs(); // 1305
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1204
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1308
	CUtlBuffer::PutChar(
		char c);  // 965
} /* size: 0, variables: 1, inline expansions: 20 (882 bytes) */

// <00238C2D> tier0/keyvaluesjson.cpp:970
// variables: 12
// function calls: 46
KeyValues* KeyValuesFromJSON(CUtlBuffer& inputBuffer, bool bIgnoreFailures, bool* pSuccess)
{
	int nBytesRemaining; // 984
	const char* pchInput; // 985
	bool bWrapContent; // 990
	KVJSONParserContext_t context; // 992
	JSON_config config; // 993
	JSON_parser_struct* jc; // 1003
	bool bSuccess; // 1008
	const char   __FUNCTION__; // 55298
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1020
	}
	{
		KeyValues* pWrapRoot; // 1027
		KeyValues* pRealRoot; // 1028
		CUtlMemory<KVJSONParserStackEntry_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::operator[](
				int i);  // 1027
		CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::Count(); // 1043
		CUtlMemory<KVJSONParserStackEntry_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::operator[](
				int i);  // 1043
	}
	{
		int i; // 1063
		CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::Count(); // 1063
		CUtlMemory<KVJSONParserStackEntry_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::operator[](
				int i);  // 1065
	}
	CUtlBuffer::TellGet(); // 615
	CUtlBuffer::GetBytesRemaining(); // 974
	CUtlBuffer::GetBytesRemaining(); // 984
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 985
	CUtlMemory<KVJSONParserStackEntry_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<KVJSONParserStackEntry_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::CUtlVector(); // 735
	KVJSONParserContext_t::KVJSONParserContext_t(); // 992
	CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::Count(); // 135
	CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::IsEmpty(); // 1054
	CUtlMemory<KVJSONParserStackEntry_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::operator[](
			int i);  // 1056
	CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::Count(); // 1060
	CUtlMemory<KVJSONParserStackEntry_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::operator[](
			int i);  // 1069
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 735
	CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::RemoveAll(); // 1798
	CUtlMemory<KVJSONParserStackEntry_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<KVJSONParserStackEntry_t, int>::Purge(); // 903
	CUtlMemory<KVJSONParserStackEntry_t, int>::Purge(); // 1799
	CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::Purge(); // 560
	ValidateAlignment<KVJSONParserStackEntry_t>(void); // 508
	CUtlMemory<KVJSONParserStackEntry_t, int>::Purge(); // 510
	CUtlMemory<KVJSONParserStackEntry_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::~CUtlVector(); // 735
	KVJSONParserContext_t::~KVJSONParserContext_t(); // 1074
	CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::Count(); // 1051
	CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::Count(); // 1020
	CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >::Count(); // 1021
} /* size: 0, variables: 8, inline expansions: 38 (695 bytes) */

