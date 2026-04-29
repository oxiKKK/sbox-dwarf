
//
// common/dwarf_undecorate.cpp
//
//	referenced by: libtier0.so
//
//	functions: 49
//

// <004567AE> ../common/dwarf_undecorate.cpp:112
// function calls: 6
void CDwarfUndecorateName::CDwarfUndecorateName()
{
	CDwarfVector<char>::Clear(); // 37
	CDwarfVector<char>::CDwarfVector(); // 112
	CDwarfVector<CDwarfUndecorateName::STextRange>::Clear(); // 37
	CDwarfVector<CDwarfUndecorateName::STextRange>::CDwarfVector(); // 112
	CDwarfVector<CDwarfUndecorateName::STextRange>::Clear(); // 37
	CDwarfVector<CDwarfUndecorateName::STextRange>::CDwarfVector(); // 112
} /* size: 67, inline expansions: 6 (96 bytes) */

// <00456792> ../common/dwarf_undecorate.cpp:112
void CDwarfUndecorateName::CDwarfUndecorateName()
{
} /* size: 0 */

// <004564FC> ../common/dwarf_undecorate.cpp:118
// function calls: 13
void CDwarfUndecorateName::~CDwarfUndecorateName()
{
	CDwarfVector<char>::Clear(); // 95
	CDwarfVector<char>::Purge(); // 166
	CDwarfVector<CDwarfUndecorateName::STextRange>::Clear(); // 95
	CDwarfVector<CDwarfUndecorateName::STextRange>::Purge(); // 167
	CDwarfVector<CDwarfUndecorateName::STextRange>::Clear(); // 95
	CDwarfVector<CDwarfUndecorateName::STextRange>::Purge(); // 168
	CDwarfUndecorateName::Purge(); // 120
	CDwarfVector<CDwarfUndecorateName::STextRange>::Purge(); // 41
	CDwarfVector<CDwarfUndecorateName::STextRange>::~CDwarfVector(); // 121
	CDwarfVector<CDwarfUndecorateName::STextRange>::Purge(); // 41
	CDwarfVector<CDwarfUndecorateName::STextRange>::~CDwarfVector(); // 121
	CDwarfVector<char>::Purge(); // 41
	CDwarfVector<char>::~CDwarfVector(); // 121
} /* size: 128, inline expansions: 13 (255 bytes) */

// <004564E0> ../common/dwarf_undecorate.cpp:118
void CDwarfUndecorateName::~CDwarfUndecorateName()
{
} /* size: 0 */

// <00456228> ../common/dwarf_undecorate.cpp:123
// variable: 1
// function calls: 11
void CDwarfUndecorateName::UndecorateName(const char* pDecorated)
{
	const char* pDecoratedIn; // 125
	CDwarfVector<char>::Empty(); // 2289
	CDwarfVector<CDwarfUndecorateName::STextRange>::Empty(); // 2296
	CDwarfVector<CDwarfUndecorateName::STextRange>::Empty(); // 2297
	CDwarfVector<char>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<char>::EnsureCapacity(
			int nEntries);  // 149
	CDwarfVector<char>::GetInsertPtr(
			int nIndex,
			int nCount);  // 160
	CDwarfVector<char>::GetAppendPtr(
			int nCount);  // 164
	CDwarfVector<char>::Append(
		const char& elt);  // 2304
	CDwarfUndecorateName::Parse(
		const char* pDecorated);  // 2285
	CDwarfUndecorateName::Parse(
		const char* pDecorated);  // 142
	CDwarfVector<char>::Base(); // 161
} /* size: 246, variables: 1, inline expansions: 11 (699 bytes) */

// <00456C17> ../common/dwarf_undecorate.cpp:164
// function calls: 6
void CDwarfUndecorateName::Purge()
{
	CDwarfVector<char>::Clear(); // 95
	CDwarfVector<char>::Purge(); // 166
	CDwarfVector<CDwarfUndecorateName::STextRange>::Clear(); // 95
	CDwarfVector<CDwarfUndecorateName::STextRange>::Purge(); // 167
	CDwarfVector<CDwarfUndecorateName::STextRange>::Clear(); // 95
	CDwarfVector<CDwarfUndecorateName::STextRange>::Purge(); // 168
} /* size: 104, inline expansions: 6 (123 bytes) */

// <0045620C> ../common/dwarf_undecorate.cpp:164
void CDwarfUndecorateName::Purge()
{
} /* size: 0 */

// <004560F6> ../common/dwarf_undecorate.cpp:172
// variable: 1
// function calls: 3
void CDwarfUndecorateName::GetMemHeld(size_t* pMaxContig)
{
	size_t nSize; // 174
	CDwarfVector<char>::GetMemHeld(
			size_t* pMaxContig);  // 176
	CDwarfVector<CDwarfUndecorateName::STextRange>::GetMemHeld(
			size_t* pMaxContig);  // 177
	CDwarfVector<CDwarfUndecorateName::STextRange>::GetMemHeld(
			size_t* pMaxContig);  // 178
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <00456D66> ../common/dwarf_undecorate.cpp:183
void CDwarfUndecorateName::Fail(const char* pFormat, ...)
{
} /* size: 0 */

// <00455F22> ../common/dwarf_undecorate.cpp:204
// function calls: 5
void CDwarfUndecorateName::Append(const char* pStr, int nChars)
{
	CDwarfVector<char>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<char>::EnsureCapacity(
			int nEntries);  // 149
	CDwarfVector<char>::GetInsertPtr(
			int nIndex,
			int nCount);  // 160
	CDwarfVector<char>::GetAppendPtr(
			int nCount);  // 210
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 210
} /* size: 151, inline expansions: 5 (317 bytes) */

// <00456E29> ../common/dwarf_undecorate.cpp:213
// variable: 1
void CDwarfUndecorateName::AppendNumber(const char* pFormat, int64 nVal)
{
	char numStr; // 215
} /* size: 0, variables: 1 */

// <00455C64> ../common/dwarf_undecorate.cpp:220
// variables: 5
// function calls: 6
void CDwarfUndecorateName::AppendExistingRange(int nStart, int nEnd)
{
	const char   __FUNCTION__; // 40273
	int nChars; // 225
	char* pDst; // 227
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 222
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 226
	}
	CDwarfVector<char>::Count(); // 226
	CDwarfVector<char>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<char>::EnsureCapacity(
			int nEntries);  // 149
	CDwarfVector<char>::GetInsertPtr(
			int nIndex,
			int nCount);  // 160
	CDwarfVector<char>::GetAppendPtr(
			int nCount);  // 227
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 228
} /* size: 0, variables: 3, inline expansions: 6 (327 bytes) */

// <00455BD1> ../common/dwarf_undecorate.cpp:231
// variables: 4
void CDwarfUndecorateName::FindBuiltinType()
{
	{
		int iBuiltin; // 233
		{
			const SBuiltinType* pBuiltin; // 235
			const char* pCode; // 237
			int nLen; // 238
		}
	}
} /* size: 114 */

// <00455B39> ../common/dwarf_undecorate.cpp:257
// variables: 4
void CDwarfUndecorateName::FindOperator()
{
	{
		int iOperator; // 259
		{
			const SOperator* pOperator; // 261
			const char* pCode; // 263
			int nLen; // 264
		}
	}
} /* size: 114 */

// <00456D97> ../common/dwarf_undecorate.cpp:283
void CDwarfUndecorateName::GetQualifierName(char chQual)
{
} /* size: 0 */

// <00456DCD> ../common/dwarf_undecorate.cpp:304
// variable: 1
void CDwarfUndecorateName::AddSubstRange(int nStart, int nEnd)
{
	STextRange* pRange; // 311
} /* size: 0, variables: 1 */

// <00456AE7> ../common/dwarf_undecorate.cpp:304
// variable: 1
// function calls: 4
void CDwarfUndecorateName::AddSubstRange(int nStart, int nEnd)
{
	STextRange* pRange; // 311
	CDwarfVector<CDwarfUndecorateName::STextRange>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<CDwarfUndecorateName::STextRange>::EnsureCapacity(
			int nEntries);  // 149
	CDwarfVector<CDwarfUndecorateName::STextRange>::GetInsertPtr(
			int nIndex,
			int nCount);  // 160
	CDwarfVector<CDwarfUndecorateName::STextRange>::GetAppendPtr(
			int nCount);  // 361
} /* size: 147, variables: 1, inline expansions: 4 (325 bytes) */

// <0045591A> ../common/dwarf_undecorate.cpp:366
// variables: 3
// function calls: 4
void CDwarfUndecorateName::AddTemplateArg(int nStart, int nEnd)
{
	const char   __FUNCTION__; // 39226
	STextRange* pRange; // 372
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 368
	}
	CDwarfVector<CDwarfUndecorateName::STextRange>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<CDwarfUndecorateName::STextRange>::EnsureCapacity(
			int nEntries);  // 149
	CDwarfVector<CDwarfUndecorateName::STextRange>::GetInsertPtr(
			int nIndex,
			int nCount);  // 160
	CDwarfVector<CDwarfUndecorateName::STextRange>::GetAppendPtr(
			int nCount);  // 372
} /* size: 0, variables: 2, inline expansions: 4 (305 bytes) */

// <004558A9> ../common/dwarf_undecorate.cpp:377
// variables: 2
void CDwarfUndecorateName::ParseNumber(bool bAllowNegative)
{
	bool bNegative; // 379
	int64 nValue; // 391
} /* size: 163, variables: 2 */

// <0045584D> ../common/dwarf_undecorate.cpp:407
// variables: 2
void CDwarfUndecorateName::ParseSeqId()
{
	int64 nValue; // 409
	bool bFirst; // 410
} /* size: 169, variables: 2 */

// <0045571D> ../common/dwarf_undecorate.cpp:444
// variables: 3
// function calls: 2
void CDwarfUndecorateName::ParseSubstitution()
{
	const char* pSimpleSub; // 453
	int64 nIndex; // 470
	STextRange* pRange; // 495
	CDwarfVector<CDwarfUndecorateName::STextRange>::Count(); // 489
	CDwarfVector<CDwarfUndecorateName::STextRange>::operator[](
			int nIndex);  // 495
} /* size: 193, variables: 3, inline expansions: 2 (10 bytes) */

// <00455648> ../common/dwarf_undecorate.cpp:501
// variable: 1
// function call: 1
void CDwarfUndecorateName::ParseSourceName()
{
	int64 nChars; // 504
	V_strlen(const char* str); // 507
} /* size: 115, variables: 1, inline expansions: 1 (16 bytes) */

// <0045710C> ../common/dwarf_undecorate.cpp:518
void CDwarfUndecorateName::ParseSimpleId()
{
} /* size: 0 */

// <00455465> ../common/dwarf_undecorate.cpp:536
// variables: 7
// function calls: 2
void CDwarfUndecorateName::ParseUnqualifiedName()
{
	{
		const char* pEnd; // 547
		const char* pScan; // 548
		int nTemplateNesting; // 549
		int nPrevStart; // 571
		int nPrevEnd; // 572
		EParseElement parseElement; // 574
		CDwarfVector<char>::Base(); // 547
		CDwarfVector<char>::Count(); // 547
	}
	{
		EParseElement parseElement; // 597
	}
} /* size: 569 */

// <0045531A> ../common/dwarf_undecorate.cpp:615
// variables: 2
// function call: 1
void CDwarfUndecorateName::ParseOperatorName()
{
	const SOperator* pOperator; // 617
	const char* pPrefix; // 624
	V_strcmp(const char* s1,
		const char* s2);  // 627
} /* size: 149, variables: 2, inline expansions: 1 (15 bytes) */

// <004552C7> ../common/dwarf_undecorate.cpp:643
void CDwarfUndecorateName::ParseFunctionType()
{
} /* size: 110 */

// <0045522D> ../common/dwarf_undecorate.cpp:679
void CDwarfUndecorateName::ParseMemberPtrType()
{
} /* size: 105 */

// <0045498E> ../common/dwarf_undecorate.cpp:705
// variables: 4
// function calls: 32
void CDwarfUndecorateName::ParseArrayType()
{
	CDwarfVector<char> sizeExpr; // 713
	int64 nSize; // 714
	{
		int nStart; // 727
		int nLen; // 735
		CDwarfVector<char>::Count(); // 727
		CDwarfVector<char>::Count(); // 735
		CDwarfVector<char>::EnsureCapacity(
				int nEntries);  // 98
		CDwarfVector<char>::EnsureCapacity(
				int nEntries);  // 149
		CDwarfVector<char>::GetInsertPtr(
				int nIndex,
				int nCount);  // 160
		CDwarfVector<char>::GetAppendPtr(
				int nCount);  // 164
		CDwarfVector<char>::Append(
			const char& elt);  // 741
		CDwarfVector<char>::EnsureCapacity(
				int nEntries);  // 98
		CDwarfVector<char>::EnsureCapacity(
				int nEntries);  // 149
		CDwarfVector<char>::GetInsertPtr(
				int nIndex,
				int nCount);  // 160
		CDwarfVector<char>::GetAppendPtr(
				int nCount);  // 168
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 180
		UtlTraitsCopyRange<char>(const char* pFrom,
					const char* pFromEnd,
					char* pTo);  // 173
		UtlTraitsCopyRange<char>(const char* pFrom,
					const char* pFromEnd,
					char* pTo);  // 168
		CDwarfVector<char>::Append(
			const char* pElt,
			int nCount);  // 743
		CDwarfVector<char>::operator[](
				int nIndex);  // 743
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 109
		V_memmove(void* dest,
				const void* src,
				ptrdiff_t count);  // 134
		UtlTraitsMoveRange<char>(char* pFrom,
					char* pFromEnd,
					char* pTo);  // 127
		UtlTraitsMoveRange<char>(char* pFrom,
					char* pFromEnd,
					char* pTo);  // 175
		CDwarfVector<char>::Remove(
			int nIndex,
			int nCount);  // 744
	}
	CDwarfVector<char>::Clear(); // 37
	CDwarfVector<char>::CDwarfVector(); // 713
	CDwarfVector<char>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<char>::EnsureCapacity(
			int nEntries);  // 149
	CDwarfVector<char>::GetInsertPtr(
			int nIndex,
			int nCount);  // 160
	CDwarfVector<char>::GetAppendPtr(
			int nCount);  // 164
	CDwarfVector<char>::Append(
		const char& elt);  // 762
	CDwarfVector<char>::Purge(); // 41
	CDwarfVector<char>::~CDwarfVector(); // 776
	CDwarfUndecorateName::AppendNumber(
			const char* pFormat,
			int64 nVal);  // 772
} /* size: 933, variables: 2, inline expansions: 10 (519 bytes) */

// <00454510> ../common/dwarf_undecorate.cpp:778
// variables: 7
// function calls: 6
void CDwarfUndecorateName::ParseType(bool bFromQualifier)
{
	int nStart; // 790
	EParseElement parseElement; // 791
	bool bMatched; // 792
	bool bAddSubst; // 793
	{
		const char* pQual; // 908
		bool bNonQual; // 909
		CDwarfUndecorateName::GetQualifierName(
				char chQual);  // 908
	}
	{
		const SBuiltinType* pBuiltin; // 964
	}
	CDwarfVector<char>::Count(); // 790
	CDwarfVector<char>::Count(); // 873
	CDwarfUndecorateName::AddSubstRange(
			int nStart,
			int nEnd);  // 873
	CDwarfVector<char>::Count(); // 986
	CDwarfUndecorateName::AddSubstRange(
			int nStart,
			int nEnd);  // 986
} /* size: 1041, variables: 4, inline expansions: 5 (71 bytes) */

// <00454390> ../common/dwarf_undecorate.cpp:992
// variable: 1
// function call: 1
void CDwarfUndecorateName::ParseClosureType()
{
	int64 nNum; // 1014
	CDwarfUndecorateName::AppendNumber(
			const char* pFormat,
			int64 nVal);  // 1033
} /* size: 279, variables: 1, inline expansions: 1 (48 bytes) */

// <0045421F> ../common/dwarf_undecorate.cpp:1039
// variable: 1
// function call: 1
void CDwarfUndecorateName::ParseUnnamedType()
{
	{
		int64 nInstance; // 1063
		CDwarfUndecorateName::AppendNumber(
				const char* pFormat,
				int64 nVal);  // 1077
	}
} /* size: 297 */

// <004541A7> ../common/dwarf_undecorate.cpp:1086
void CDwarfUndecorateName::ParseDeclType()
{
} /* size: 120 */

// <004540E6> ../common/dwarf_undecorate.cpp:1117
// function call: 1
void CDwarfUndecorateName::ParseBaseUnresolvedName()
{
	CDwarfUndecorateName::ParseSimpleId(); // 1142
} /* size: 151, inline expansions: 1 (41 bytes) */

// <00453F66> ../common/dwarf_undecorate.cpp:1150
// variables: 2
// function calls: 3
void CDwarfUndecorateName::ParseUnresolvedType()
{
	int nStart; // 1157
	EParseElement parseElement; // 1158
	CDwarfVector<char>::Count(); // 1157
	CDwarfVector<char>::Count(); // 1188
	CDwarfUndecorateName::AddSubstRange(
			int nStart,
			int nEnd);  // 1188
} /* size: 141, variables: 2, inline expansions: 3 (23 bytes) */

// <00453E5F> ../common/dwarf_undecorate.cpp:1192
// variable: 1
// function call: 1
void CDwarfUndecorateName::ParseUnresolvedName()
{
	{
		bool bHasQual; // 1199
		CDwarfUndecorateName::ParseSimpleId(); // 1210
	}
} /* size: 201 */

// <00453CDE> ../common/dwarf_undecorate.cpp:1234
// variable: 1
// function call: 1
void CDwarfUndecorateName::ParseFunctionParam()
{
	{
		int64 nNum; // 1249
		CDwarfUndecorateName::AppendNumber(
				const char* pFormat,
				int64 nVal);  // 1267
	}
} /* size: 284 */

// <00453B8D> ../common/dwarf_undecorate.cpp:1277
// variables: 3
void CDwarfUndecorateName::ParseExprPrimary()
{
	const char* pStr; // 1286
	EParseElement parseElement; // 1287
	{
		const char* pDecStart; // 1369
	}
} /* size: 561, variables: 2 */

// <004538F9> ../common/dwarf_undecorate.cpp:1395
// variables: 3
void CDwarfUndecorateName::ParseExpression()
{
	const SOperator* pOperator; // 1420
	int nArgs; // 1431
	{
		int i; // 1432
	}
} /* size: 689, variables: 2 */

// <004537FF> ../common/dwarf_undecorate.cpp:1501
// variables: 2
// function calls: 2
void CDwarfUndecorateName::ParseTemplateParam()
{
	int64 nIndex; // 1510
	STextRange* pRange; // 1536
	CDwarfVector<CDwarfUndecorateName::STextRange>::Count(); // 1529
	CDwarfVector<CDwarfUndecorateName::STextRange>::operator[](
			int nIndex);  // 1536
} /* size: 133, variables: 2, inline expansions: 2 (10 bytes) */

// <00453761> ../common/dwarf_undecorate.cpp:1542
// variable: 1
void CDwarfUndecorateName::ParseTemplateArg()
{
	EParseElement parseElement; // 1544
} /* size: 105, variables: 1 */

// <004535BA> ../common/dwarf_undecorate.cpp:1578
// variables: 2
// function calls: 2
void CDwarfUndecorateName::ParseTemplateArgs(bool bSaveArgs)
{
	bool bFirst; // 1589
	{
		int nStart; // 1605
		CDwarfVector<char>::Count(); // 1605
		CDwarfVector<char>::Count(); // 1614
	}
} /* size: 224, variables: 1 */

// <004533ED> ../common/dwarf_undecorate.cpp:1623
// variables: 2
void CDwarfUndecorateName::ParseSignature(EParseElement parseElement)
{
	bool bHasRetType; // 1626
	{
		bool bFirst; // 1691
	}
} /* size: 314, variables: 1 */

// <00453167> ../common/dwarf_undecorate.cpp:1719
// variables: 3
// function call: 1
void CDwarfUndecorateName::ParseLocalName()
{
	{
		int64 nArgNum; // 1745
		CDwarfUndecorateName::AppendNumber(
				const char* pFormat,
				int64 nVal);  // 1763
	}
	{
		int64 nDisc; // 1788
		bool bLimited; // 1789
	}
} /* size: 556 */

// <00452E7B> ../common/dwarf_undecorate.cpp:1828
// variables: 5
// function calls: 5
void CDwarfUndecorateName::ParseNestedName(char* pCvQual, int nCvQualChars)
{
	int nStart; // 1883
	EParseElement parseElement; // 1884
	bool bFirst; // 1885
	{
		bool bIsSubst; // 1889
		{
			int nTemplatePrefix; // 1931
			CDwarfVector<char>::Count(); // 1931
			CDwarfUndecorateName::AddSubstRange(
					int nStart,
					int nEnd);  // 1932
		}
		CDwarfVector<char>::Count(); // 1960
		CDwarfUndecorateName::AddSubstRange(
				int nStart,
				int nEnd);  // 1960
	}
	CDwarfVector<char>::Count(); // 1883
} /* size: 489, variables: 3, inline expansions: 1 (4 bytes) */

// <00452C98> ../common/dwarf_undecorate.cpp:1970
// variables: 2
// function calls: 3
void CDwarfUndecorateName::ParseName(char* pCvQual, int nCvQualChars)
{
	EParseElement parseElement; // 1972
	int nStart; // 1988
	CDwarfVector<char>::Count(); // 1988
	CDwarfVector<char>::Count(); // 2008
	CDwarfUndecorateName::AddSubstRange(
			int nStart,
			int nEnd);  // 2008
} /* size: 236, variables: 2, inline expansions: 3 (29 bytes) */

// <00452C12> ../common/dwarf_undecorate.cpp:2030
void CDwarfUndecorateName::ParseCallOffset()
{
} /* size: 185 */

// <0045253E> ../common/dwarf_undecorate.cpp:2083
// variables: 8
// function calls: 7
void CDwarfUndecorateName::ParseEncoding(bool bUndecSig)
{

Exit: // 2278
	EParseElement parseElement; // 2085
	int nPrevTemplateArgBase; // 2230
	char cvQual; // 2233
	{
		const char* pDesc; // 2095
	}
	{
		int64 nOffset; // 2141
		CDwarfUndecorateName::AppendNumber(
				const char* pFormat,
				int64 nVal);  // 2160
	}
	{
		int64 nIndex; // 2202
		CDwarfUndecorateName::AppendNumber(
				const char* pFormat,
				int64 nVal);  // 2221
	}
	{
		const char* pScan; // 2266
		{
			const char* pQual; // 2269
			CDwarfUndecorateName::GetQualifierName(
					char chQual);  // 2269
		}
	}
	CDwarfVector<CDwarfUndecorateName::STextRange>::Count(); // 2231
	CDwarfVector<CDwarfUndecorateName::STextRange>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<CDwarfUndecorateName::STextRange>::EnsureCapacity(
			int nEntries);  // 122
	CDwarfVector<CDwarfUndecorateName::STextRange>::SetCount(
		int nCount);  // 2280
} /* size: 1311, variables: 3, goto labels: 1, inline expansions: 4 (161 bytes) */

// <00456ED5> ../common/dwarf_undecorate.cpp:2285
// variables: 2
// function calls: 9
void CDwarfUndecorateName::Parse(const char* pDecorated)
{
	bool bSig; // 2291
	EParseElement parseElement; // 2293
	CDwarfVector<char>::Empty(); // 2289
	CDwarfVector<CDwarfUndecorateName::STextRange>::Empty(); // 2296
	CDwarfVector<CDwarfUndecorateName::STextRange>::Empty(); // 2297
	CDwarfVector<char>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<char>::EnsureCapacity(
			int nEntries);  // 149
	CDwarfVector<char>::GetInsertPtr(
			int nIndex,
			int nCount);  // 160
	CDwarfVector<char>::GetAppendPtr(
			int nCount);  // 164
	CDwarfVector<char>::Append(
		const char& elt);  // 2304
	CDwarfUndecorateName::Parse(
		const char* pDecorated);  // 2285
} /* size: 0, variables: 2, inline expansions: 9 (0 bytes) */

// <004524FA> ../common/dwarf_undecorate.cpp:2285
// variables: 2
void CDwarfUndecorateName::Parse(const char* pDecorated)
{
	bool bSig; // 2291
	EParseElement parseElement; // 2293
} /* size: 0, variables: 2 */

