
//
// tier0/buffer_string.cpp
//
//	referenced by: libtier0.so
//
//	functions: 75
//

// <0004BDC1> tier0/buffer_string.cpp:17
// variables: 2
int UpdateStringChars(const char* pString, int nChars)
{
	const char   __FUNCTION__; // 64659
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 21
	}
} /* size: 0, variables: 1 */

// <0004B960> tier0/buffer_string.cpp:31
// variables: 6
// function calls: 10
void CBufferString::EnsureCapacity(int nChars, char** pPtr, bool bExact, bool bAllowLess)
{
	const char   __FUNCTION__; // 64560
	{
		int nAllocChars; // 93
		{
			bool bHadBuffer; // 115
			char* pNewBuffer; // 119
			{
				uint32 nCopy; // 137
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 142
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 142
			}
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 153
		}
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 155
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 164
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 50
} /* size: 0, variables: 1, inline expansions: 4 (115 bytes) */

// <0004B7D8> tier0/buffer_string.cpp:169
// variables: 4
void CBufferString::EnsureAddedCapacity(int nChars, char** pPtr, bool bExact, bool bAllowLess)
{
	int nCurChars; // 181
	const char   __FUNCTION__; // 63439
	int nBufferChars; // 187
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 203
	}
} /* size: 0, variables: 3 */

// <0004B683> tier0/buffer_string.cpp:209
// variables: 3
// function call: 1
void CBufferString::GrowByChunks(int nChunkChars, int nCharsUnused)
{
	const char   __FUNCTION__; // 48783
	int nNeedChars; // 221
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	IsPowerOfTwo(int value); // 211
} /* size: 0, variables: 2, inline expansions: 1 (11 bytes) */

// <0004B3C2> tier0/buffer_string.cpp:246
// variables: 10
// function calls: 4
void CBufferString::EnsureOwnedAllocation(EAllocationOption_t option)
{
	int nOptionVal; // 248
	bool bIsOwnedAlloc; // 250
	bool bIsEmpty; // 267
	bool bNeedAlloc; // 277
	const char   __FUNCTION__; // 40904
	char* pBuffer; // 300
	{
		int nWaste; // 280
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 281
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 314
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 327
	}
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 310
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 310
} /* size: 0, variables: 6, inline expansions: 4 (72 bytes) */

// <0004B322> tier0/buffer_string.cpp:332
// variable: 1
void CBufferString::Relinquish(EAllocationOption_t option)
{
	char* pBuffer; // 337
} /* size: 60, variables: 1 */

// <0004B114> tier0/buffer_string.cpp:349
// variables: 3
// function call: 1
void CBufferString::SetPtr(char* pBuffer, int nBufferChars, int nStringChars, bool bFreeBuffer, bool bGrowable)
{
	const char   __FUNCTION__; // 61841
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 357
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 382
	}
	V_strlen(const char* str); // 373
} /* size: 0, variables: 1, inline expansions: 1 (8 bytes) */

// <0004B045> tier0/buffer_string.cpp:388
// variable: 1
void CBufferString::SetLength(int nChars, bool bExact, int* pActual)
{
	char* pBuffer; // 390
} /* size: 164, variables: 1 */

// <0004AF5D> tier0/buffer_string.cpp:413
// function calls: 2
void CBufferString::EnsureLength(int nChars, bool bExact, int* pActual)
{
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 420
} /* size: 61, inline expansions: 2 (19 bytes) */

// <0004ACD2> tier0/buffer_string.cpp:423
// variables: 6
// function calls: 2
void CBufferString::GetInsertPtr(int nIndex, int nChars, bool bExact, int* pActual)
{
	const char   __FUNCTION__; // 48783
	int nCurChars; // 435
	char* pBuffer; // 436
	int nActual; // 437
	{
		int nMoveCount; // 442
		int nSpaceCount; // 443
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 115
		V_memmove(void* dest,
				const void* src,
				size_t count);  // 448
	}
} /* size: 363, variables: 4 */

// <0004AA8A> tier0/buffer_string.cpp:464
// variables: 3
// function calls: 2
void CBufferString::GetReplacePtr(int nIndex, int nOldChars, int nNewChars, bool bExact, int* pActual)
{
	const char   __FUNCTION__; // 47797
	char* pBuffer; // 500
	{
		char* pBuffer; // 483
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 500
} /* size: 298, variables: 2, inline expansions: 2 (36 bytes) */

// <0004A929> tier0/buffer_string.cpp:517
// variable: 1
// function calls: 3
void CBufferString::TruncateAt(int nIndex, bool bExact)
{
	const char   __FUNCTION__; // 59288
	CBufferString::IsEmpty(); // 525
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 527
} /* size: 109, variables: 1, inline expansions: 3 (66 bytes) */

// <0004A6CF> tier0/buffer_string.cpp:533
// variable: 1
// function calls: 8
void CBufferString::TruncateAt(const char* pPtrInString, bool bExact)
{
	const char   __FUNCTION__; // 59288
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 863
	CBufferString::ContainsPtr(
			const char* pPtr);  // 535
	CBufferString::IsEmpty(); // 540
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 542
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 547
} /* size: 213, variables: 1, inline expansions: 8 (233 bytes) */

// <0004A446> tier0/buffer_string.cpp:550
// variable: 1
// function calls: 7
void CBufferString::Insert(int nIndex, const char* pString, int nChars, bool bExact)
{
	char* pBuffer; // 555
	V_strlen(const char* str); // 26
	{
	}
	UpdateStringChars(const char* pString,
				int nChars);  // 17
	UpdateStringChars(const char* pString,
				int nChars);  // 552
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 558
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 560
} /* size: 0, variables: 1, inline expansions: 7 (233 bytes) */

// <0004A2E8> tier0/buffer_string.cpp:563
// variable: 1
// function calls: 3
void CBufferString::AppendRepeat(char ch, int nChars, bool bExact)
{
	char* pBuffer; // 566
	CBufferString::GetAppendPtr(
			int nChars,
			bool bExact,
			int* pActual);  // 566
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 571
} /* size: 129, variables: 1, inline expansions: 3 (100 bytes) */

// <0004A1B7> tier0/buffer_string.cpp:574
// variables: 3
// function calls: 3
void CBufferString::Replace(char chTarget, char chReplacement)
{
	int nHits; // 581
	char* pBuffer; // 582
	{
		uint32 i; // 583
	}
	CBufferString::IsEmpty(); // 576
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 582
} /* size: 110, variables: 2, inline expansions: 3 (48 bytes) */

// <00049E82> tier0/buffer_string.cpp:597
// variables: 7
// function calls: 9
void CBufferString::Replace(const char* pTarget, const char* pReplacement, bool bFastCaseless)
{
	int nTargetChars; // 604
	int nReplacementChars; // 605
	int nSearchPos; // 607
	int nHits; // 608
	{
		const char* pBuffer; // 611
		const char* pHit; // 612
		int nHitIndex; // 621
		strstr(const char* __haystack,
			const char* __needle);  // 247
		V_strstr(const char* s1,
			const char* search);  // 614
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 611
	}
	CBufferString::IsEmpty(); // 599
	V_isempty(const char* pszString); // 599
	V_strlen(const char* str); // 604
	V_strlen(const char* str); // 605
	CBufferString::Length(); // 609
} /* size: 275, variables: 4, inline expansions: 5 (69 bytes) */

// <00049B51> tier0/buffer_string.cpp:631
// variables: 4
// function calls: 8
void CBufferString::ReplaceAt(int nIndex, const char* pString, int nChars, bool bExact)
{
	const char   __FUNCTION__; // 54514
	int nOldChars; // 643
	char* pBuffer; // 658
	{
		int nTail; // 646
	}
	V_strlen(const char* str); // 26
	{
	}
	UpdateStringChars(const char* pString,
				int nChars);  // 17
	UpdateStringChars(const char* pString,
				int nChars);  // 633
	CBufferString::Length(); // 644
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 661
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 663
} /* size: 0, variables: 3, inline expansions: 8 (250 bytes) */

// <000498B3> tier0/buffer_string.cpp:666
// variable: 1
// function calls: 7
void CBufferString::ReplaceAt(int nIndex, int nOldChars, const char* pString, int nChars, bool bExact)
{
	char* pBuffer; // 671
	V_strlen(const char* str); // 26
	{
	}
	UpdateStringChars(const char* pString,
				int nChars);  // 17
	UpdateStringChars(const char* pString,
				int nChars);  // 668
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 674
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 676
} /* size: 0, variables: 1, inline expansions: 7 (259 bytes) */

// <00049683> tier0/buffer_string.cpp:679
// variables: 5
// function calls: 5
void CBufferString::ReverseChars(int nIndex, int nChars)
{
	const char   __FUNCTION__; // 48783
	char* pFullBuffer; // 700
	char* pBuffer; // 701
	int nSplit; // 702
	{
		int i; // 703
		V_swap_through_temp<char>(char& x,
						char& y);  // 705
	}
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 697
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 700
} /* size: 253, variables: 4, inline expansions: 4 (96 bytes) */

// <00049419> tier0/buffer_string.cpp:711
// variables: 8
// function calls: 3
void CBufferString::ConvertIn(const wchar_t* pValue, int nWideChars, bool bExact)
{
	const char   __FUNCTION__; // 54514
	const wchar_t* pScan; // 723
	int nChars; // 724
	int nChars32; // 725
	char* pBuffer; // 752
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 715
	}
	{
		uchar32 ch32; // 728
		V_UChar32ToUTF8Len(uchar32 uVal); // 50
		V_UChar32ToUTF8Len(uchar32 uVal); // 747
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 767
	}
	V_wcslen(const wchar_t* pwch); // 720
} /* size: 0, variables: 5, inline expansions: 1 (11 bytes) */

// <00049193> tier0/buffer_string.cpp:772
// variables: 2
// function calls: 7
void CBufferString::RemoveAt(int nIndex, int nChars)
{
	const char   __FUNCTION__; // 53896
	{
		char* pBuffer; // 791
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 791
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 115
		V_memmove(void* dest,
				const void* src,
				size_t count);  // 792
	}
	CBufferString::IsEmpty(); // 784
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 786
} /* size: 286, variables: 1, inline expansions: 3 (53 bytes) */

// <00048F90> tier0/buffer_string.cpp:799
// variables: 3
// function calls: 5
void CBufferString::RemoveAtUTF8(int nByteIndex, int nSeqs)
{
	const char   __FUNCTION__; // 48783
	char* pBuffer; // 812
	char* pAfterRemove; // 813
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 809
	CBufferString::IsEmpty(); // 807
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 812
} /* size: 173, variables: 3, inline expansions: 5 (93 bytes) */

// <00048E03> tier0/buffer_string.cpp:817
// function calls: 5
void CBufferString::RemoveTailUTF8(int nSeqs)
{
	CBufferString::Length(); // 983
	CBufferString::RemoveTail(
			int nChars);  // 824
	CBufferString::IsEmpty(); // 819
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 827
} /* size: 116, inline expansions: 5 (75 bytes) */

// <00048CF1> tier0/buffer_string.cpp:830
// variables: 4
// function calls: 2
void CBufferString::TrimHead(const char* pChars)
{
	int nRemove; // 832
	const char* pBuffer; // 833
	{
		const char* pScan; // 836
		bool bMatch; // 837
	}
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 833
} /* size: 152, variables: 2, inline expansions: 2 (50 bytes) */

// <00048BC4> tier0/buffer_string.cpp:866
// variables: 5
// function calls: 2
void CBufferString::TrimTail(const char* pChars)
{
	uint32 nLength; // 868
	const char* pStart; // 869
	const char* pBuffer; // 870
	{
		const char* pScan; // 875
		bool bMatch; // 876
	}
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 869
} /* size: 177, variables: 3, inline expansions: 2 (54 bytes) */

// <00048B39> tier0/buffer_string.cpp:904
void CBufferString::Trim(const char* pChars)
{
} /* size: 39 */

// <00048A0D> tier0/buffer_string.cpp:910
// variables: 4
// function calls: 4
void CBufferString::RemoveWhitespace()
{
	char* pBuffer; // 917
	char* pScan; // 918
	char* pWrite; // 919
	int nRemoved; // 920
	CBufferString::IsEmpty(); // 912
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 917
	V_isspace(int c); // 923
} /* size: 0, variables: 4, inline expansions: 4 (68 bytes) */

// <000488A5> tier0/buffer_string.cpp:943
// variables: 2
// function calls: 4
void CBufferString::Format(const char* pFormat, ...)
{
	va_list args; // 945
	int nChars; // 947
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 1029
	CBufferString::FormatV(
		const char* pFormat,
		typedef __va_list_tag __va_list_tag* marker);  // 947
} /* size: 211, variables: 2, inline expansions: 4 (94 bytes) */

// <0004880A> tier0/buffer_string.cpp:951
// variables: 2
void CBufferString::AppendFormat(const char* pFormat, ...)
{
	va_list args; // 953
	int nChars; // 955
} /* size: 179, variables: 2 */

// <00048296> tier0/buffer_string.cpp:960
// variables: 11
// function calls: 14
void CBufferString::AppendFormatV(const char* pFormat, typedef __va_list_tag __va_list_tag* marker)
{
	const int  k_nStackBufLen; // 962
	char* pStackBuf; // 963
	char* pBuf; // 964
	int nBufLen; // 965
	int nFullLen; // 966
	int nOrigLen; // 967
	const char   __FUNCTION__; // 47797
	{
		va_list reuseArgs; // 995
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1022
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1026
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1057
	}
	CBufferString::Length(); // 967
	CBufferString::LengthUnused(); // 974
	CBufferString::GetGrowable(); // 974
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 978
	CBufferString::GetGrowable(); // 1015
	V_strlen(const char* str); // 1026
	CBufferString::SetError(
		bool bError);  // 1027
	CBufferString::SetError(
		bool bError);  // 1007
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1047
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1057
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 1052
} /* size: 0, variables: 7, inline expansions: 14 (251 bytes) */

// <000480F8> tier0/buffer_string.cpp:1063
// variable: 1
// function calls: 6
void CBufferString::StrFormat(const char* pFormat, ...)
{
	va_list args; // 1065
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 1029
	CBufferString::FormatV(
		const char* pFormat,
		typedef __va_list_tag __va_list_tag* marker);  // 1067
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1069
} /* size: 267, variables: 1, inline expansions: 6 (151 bytes) */

// <00048020> tier0/buffer_string.cpp:1072
// variable: 1
// function calls: 2
void CBufferString::StrAppendFormat(const char* pFormat, ...)
{
	va_list args; // 1074
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1078
} /* size: 235, variables: 1, inline expansions: 2 (54 bytes) */

// <00047C46> tier0/buffer_string.cpp:1081
// variables: 8
// function calls: 7
void CBufferString::AppendConcat(int nStrs, const char* const* ppStrs, const int* pLens, bool bExact)
{
	int nTotal; // 1083
	const char   __FUNCTION__; // 48783
	char* pBuffer; // 1095
	{
		int i; // 1084
		{
			int nChars; // 1086
			V_strlen(const char* str); // 1086
		}
	}
	{
		int i; // 1096
		{
			int nChars; // 1098
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1103
			V_strlen(const char* str); // 1098
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1107
	}
	CBufferString::GetAppendPtr(
			int nChars,
			bool bExact,
			int* pActual);  // 1095
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1109
} /* size: 0, variables: 3, inline expansions: 3 (139 bytes) */

// <0004765C> tier0/buffer_string.cpp:1112
// variables: 8
// function calls: 15
void CBufferString::AppendConcatV(const char* pStr1, const char* pStr2, typedef __va_list_tag __va_list_tag* args, bool bExact)
{
	int nTotal; // 1114
	int nChars; // 1115
	const char   __FUNCTION__; // 47797
	char* pBuffer; // 1145
	{
		va_list reuseArgs; // 1124
		{
			const char* pStr; // 1128
			V_strlen(const char* str); // 1134
		}
	}
	{
		const char* pStr; // 1167
		V_strlen(const char* str); // 1173
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 1178
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1182
	}
	V_strlen(const char* str); // 1114
	V_strlen(const char* str); // 1115
	CBufferString::GetAppendPtr(
			int nChars,
			bool bExact,
			int* pActual);  // 1145
	V_strlen(const char* str); // 1147
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 1152
	V_strlen(const char* str); // 1156
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 1161
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1184
} /* size: 0, variables: 4, inline expansions: 11 (318 bytes) */

// <0004756A> tier0/buffer_string.cpp:1187
// variable: 1
// function calls: 2
void CBufferString::AppendConcat(const char* pStr1, const char* pStr2, ...)
{
	va_list args; // 1189
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1193
} /* size: 227, variables: 1, inline expansions: 2 (54 bytes) */

// <000473E4> tier0/buffer_string.cpp:1196
// variable: 1
// function calls: 5
void CBufferString::Concat(const char* pStr1, const char* pStr2, ...)
{
	va_list args; // 1199
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 1198
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1203
} /* size: 259, variables: 1, inline expansions: 5 (104 bytes) */

// <000472E3> tier0/buffer_string.cpp:1206
// variables: 3
// function call: 1
void CBufferString::Purge(int nExtraInstanceChars)
{
	const char   __FUNCTION__; // 45651
	uint32 nBufferChars; // 1209
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1208
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 1227
} /* size: 0, variables: 2, inline expansions: 1 (33 bytes) */

// <0004722F> tier0/buffer_string.cpp:1231
// function call: 1
void CBufferString::SetUnusable()
{
	V_strcpy_safe<8>(char& pDest,
			const char* pSrc);  // 1239
} /* size: 49, inline expansions: 1 (17 bytes) */

// <00046F5F> tier0/buffer_string.cpp:1242
// function calls: 11
void CBufferString::MoveFrom(CBufferString& src)
{
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 1258
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1258
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1268
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 1268
} /* size: 338, inline expansions: 11 (218 bytes) */

// <00046DC8> tier0/buffer_string.cpp:1298
// variable: 1
// function calls: 5
void CBufferString::StartsWith(const char* pStr)
{
	int nStrLen; // 1300
	V_strlen(const char* str); // 1300
	CBufferString::Length(); // 1301
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1306
	V_strncmp<int>(const char* s1,
			const char* s2,
			int count);  // 1306
} /* size: 116, variables: 1, inline expansions: 5 (93 bytes) */

// <00046C31> tier0/buffer_string.cpp:1309
// variable: 1
// function calls: 5
void CBufferString::StartsWith_FastCaseInsensitive(const char* pStr)
{
	int nStrLen; // 1311
	V_strlen(const char* str); // 1311
	CBufferString::Length(); // 1312
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1317
	V_strnicmp_fast<int>(const char* s1,
				const char* s2,
				int n);  // 1317
} /* size: 116, variables: 1, inline expansions: 5 (93 bytes) */

// <00046ABF> tier0/buffer_string.cpp:1320
// variable: 1
// function calls: 5
void CBufferString::EndsWith(const char* pStr)
{
	int nStrLen; // 1322
	V_strlen(const char* str); // 1322
	CBufferString::Length(); // 1323
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1328
	V_strcmp(const char* s1,
		const char* s2);  // 1328
} /* size: 119, variables: 1, inline expansions: 5 (92 bytes) */

// <00046986> tier0/buffer_string.cpp:1331
// variable: 1
// function calls: 4
void CBufferString::EndsWith_FastCaseInsensitive(const char* pStr)
{
	int nStrLen; // 1333
	V_strlen(const char* str); // 1333
	CBufferString::Length(); // 1334
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1339
} /* size: 119, variables: 1, inline expansions: 4 (87 bytes) */

// <0004684E> tier0/buffer_string.cpp:1342
// variable: 1
// function calls: 3
void CBufferString::ToLowerFast(int nStart)
{
	const char   __FUNCTION__; // 42685
	CBufferString::IsEmpty(); // 1350
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1355
} /* size: 96, variables: 1, inline expansions: 3 (40 bytes) */

// <00046701> tier0/buffer_string.cpp:1358
// variable: 1
// function calls: 3
void CBufferString::ToUpperFast(int nStart)
{
	const char   __FUNCTION__; // 42685
	CBufferString::IsEmpty(); // 1366
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1371
} /* size: 96, variables: 1, inline expansions: 3 (40 bytes) */

// <00046159> tier0/buffer_string.cpp:1374
// variables: 9
// function calls: 14
void CBufferString::UnicodeCaseConvert(int nStringCaseFlags, EStringConvertErrorPolicy ePolicy)
{
	int nTempChars; // 1384
	const char   __FUNCTION__; // 42352
	char* pHeapBuf; // 1391
	char* pBuf; // 1392
	int nConvLen; // 1404
	{
		int nActual; // 1423
		char* pFinal; // 1424
		int nFinalLen; // 1428
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1426
		}
		CBufferString::Length(); // 1420
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 1420
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 1420
	}
	CBufferString::IsEmpty(); // 1376
	CBufferString::Length(); // 1384
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1404
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1408
	CBufferString::IsCurBufferFull(); // 833
	CBufferString::IsFixedFull(); // 1410
} /* size: 0, variables: 5, inline expansions: 10 (227 bytes) */

// <00045F83> tier0/buffer_string.cpp:1446
// variables: 7
// function calls: 3
void CBufferString::RemovePartialUTF8Tail(bool bRemoveInvalid)
{
	const char   __FUNCTION__; // 40904
	char* pBuffer; // 1454
	char* pEnd; // 1455
	int nTrailing; // 1464
	int nSeqLen; // 1511
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1453
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1514
	}
	CBufferString::IsEmpty(); // 1448
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1454
} /* size: 0, variables: 5, inline expansions: 3 (48 bytes) */

// <00045DAB> tier0/buffer_string.cpp:1547
// variables: 2
// function calls: 8
void CBufferString::StripTrailingSlash()
{
	int nLastChar; // 1552
	char c; // 1553
	CBufferString::IsEmpty(); // 1549
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1550
	CBufferString::Length(); // 1552
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1553
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1558
} /* size: 187, variables: 2, inline expansions: 8 (137 bytes) */

// <00045B6D> tier0/buffer_string.cpp:1561
// variables: 3
// function calls: 7
void CBufferString::EnsureTrailingSlash(char chSeparator, bool bOnlyIfNonEmpty)
{
	{
		int nLastChar; // 1565
		char* pBuffer; // 1566
		char c; // 1567
		CBufferString::Length(); // 1565
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1566
	}
	CBufferString::IsEmpty(); // 1563
	CBufferString::Append(
		char ch,
		bool bExact);  // 1586
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1583
} /* size: 190, inline expansions: 4 (91 bytes) */

// <000459FE> tier0/buffer_string.cpp:1589
// variable: 1
// function calls: 5
void CBufferString::FixSlashes(char chSeparator)
{
	{
		char* pBuffer; // 1593
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1593
	}
	CBufferString::IsEmpty(); // 1591
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1599
} /* size: 126, inline expansions: 3 (68 bytes) */

// <0004580D> tier0/buffer_string.cpp:1603
// variables: 2
// function calls: 6
void CBufferString::RemoveDotSlashes(char chSeparator)
{
	{
		char* pBuffer; // 1607
		bool bRet; // 1608
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1607
		V_strlen(const char* str); // 1609
	}
	CBufferString::IsEmpty(); // 1605
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1614
} /* size: 251, inline expansions: 3 (48 bytes) */

// <0004C511> tier0/buffer_string.cpp:1618
// variable: 1
// function calls: 7
void CBufferString::FixupPathName(char chSeparator)
{
	CBufferString::IsEmpty(); // 1620
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1640
	{
		char* pBuffer; // 1622
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1622
		V_strlen(const char* str); // 1635
	}
	CBufferString::FixupPathName(
			char chSeparator);  // 1618
} /* size: 397, inline expansions: 4 (342 bytes) */

// <000457D4> tier0/buffer_string.cpp:1618
// variable: 1
void CBufferString::FixupPathName(char chSeparator)
{
	{
		char* pBuffer; // 1622
	}
} /* size: 0 */

// <000454CD> tier0/buffer_string.cpp:1644
// variables: 4
// function calls: 7
void CBufferString::ComposeFileName(const char* pPrefix, const char* pSuffix, char chSeparator)
{
	{
		const char* ppStrs; // 1652
		int pLens; // 1653
		int nStrs; // 1654
		char slashStr; // 1655
		V_strlen(const char* str); // 1658
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 1047
		CBufferString::Concat(
			int nStrs,
			const char* const* ppStrs,
			const int* pLens,
			bool bExact);  // 1672
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1646
} /* size: 466, inline expansions: 2 (48 bytes) */

// <0004CADA> tier0/buffer_string.cpp:1678
// function calls: 6
void CBufferString::ExtendPath(const char* pComponent, char chSeparator)
{
	V_isempty(const char* pszString); // 1680
	CBufferString::IsEmpty(); // 1685
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 1689
	CBufferString::ExtendPath(
			const char* pComponent,
			char chSeparator);  // 1678
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1682
} /* size: 134, inline expansions: 6 (162 bytes) */

// <00045496> tier0/buffer_string.cpp:1678
void CBufferString::ExtendPath(const char* pComponent, char chSeparator)
{
} /* size: 0 */

// <0004539A> tier0/buffer_string.cpp:1692
// variables: 4
// function call: 1
int GetFilePathChars(const char* pFileName, bool* pHasOrigin)
{
	int nFileChars; // 1703
	int nOriginChars; // 1709
	const char* pOriginEnd; // 1721
	const char* pScan; // 1722
	V_strlen(const char* str); // 1703
} /* size: 147, variables: 4, inline expansions: 1 (14 bytes) */

// <000450DB> tier0/buffer_string.cpp:1743
// variables: 3
// function calls: 9
void CBufferString::ShortenPath(bool bAsDir)
{
	const char* pBuffer; // 1750
	bool bHasOrigin; // 1751
	int nChars; // 1752
	CBufferString::IsEmpty(); // 1745
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1747
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1750
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1758
} /* size: 305, variables: 3, inline expansions: 9 (271 bytes) */

// <00044FE5> tier0/buffer_string.cpp:1764
// variable: 1
// function calls: 2
void CBufferString::MakeAbsolutePath(const char* pPath, const char* pStartingDir)
{
	bool bSucc; // 1766
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1767
} /* size: 66, variables: 1, inline expansions: 2 (50 bytes) */

// <00044EEF> tier0/buffer_string.cpp:1770
// variable: 1
// function calls: 2
void CBufferString::MakeRelativePath(const char* pFullPath, const char* pDirectory)
{
	bool bSucc; // 1772
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1773
} /* size: 75, variables: 1, inline expansions: 2 (50 bytes) */

// <00044D07> tier0/buffer_string.cpp:1776
// variable: 1
// function calls: 7
void CBufferString::ExtractFirstDir(const char* pFileName)
{
	const char* pScan; // 1778
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1785
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 1789
} /* size: 208, variables: 1, inline expansions: 7 (209 bytes) */

// <000449BC> tier0/buffer_string.cpp:1794
// variables: 3
// function calls: 13
void CBufferString::RemoveFirstDir(CBufferString* pFirstDir)
{
	const char* pBuffer; // 1801
	const char* pScan; // 1807
	{
		int nDirChars; // 1814
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 1817
		CBufferString::RemoveHead(
				int nChars);  // 1821
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 1822
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 1798
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1801
	CBufferString::IsEmpty(); // 1802
} /* size: 336, variables: 2, inline expansions: 6 (113 bytes) */

// <00044738> tier0/buffer_string.cpp:1830
// variables: 2
// function calls: 8
void CBufferString::ExtractFilePath(const char* pFileName, bool bAsDir)
{
	bool bHasOrigin; // 1832
	int nChars; // 1833
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1839
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1842
} /* size: 208, variables: 2, inline expansions: 8 (228 bytes) */

// <0004CCA6> tier0/buffer_string.cpp:1845
// variables: 2
// function calls: 9
void CBufferString::RemoveFilePath()
{
	const char* pBuffer; // 1852
	const char* pFile; // 1853
	CBufferString::IsEmpty(); // 1847
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1849
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1852
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1858
	CBufferString::RemoveHead(
			int nChars);  // 1856
	CBufferString::RemoveFilePath(); // 1845
} /* size: 200, variables: 2, inline expansions: 9 (322 bytes) */

// <00044701> tier0/buffer_string.cpp:1845
// variables: 2
void CBufferString::RemoveFilePath()
{
	const char* pBuffer; // 1852
	const char* pFile; // 1853
} /* size: 0, variables: 2 */

// <0004455C> tier0/buffer_string.cpp:1861
// variable: 1
// function calls: 4
void CBufferString::ExtractFileBase(const char* pFileName)
{
	const char* pFile; // 1863
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1864
} /* size: 90, variables: 1, inline expansions: 4 (103 bytes) */

// <000444F4> tier0/buffer_string.cpp:1868
void CBufferString::RemoveToFileBase()
{
} /* size: 31 */

// <0004C805> tier0/buffer_string.cpp:1874
// variables: 2
// function calls: 7
void CBufferString::StripExtension()
{
	char* pBuffer; // 1881
	int nChars; // 1882
	CBufferString::IsEmpty(); // 1876
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1878
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1881
	CBufferString::Length(); // 1882
	CBufferString::StripExtension(); // 1874
} /* size: 160, variables: 2, inline expansions: 7 (201 bytes) */

// <000444BD> tier0/buffer_string.cpp:1874
// variables: 2
void CBufferString::StripExtension()
{
	char* pBuffer; // 1881
	int nChars; // 1882
} /* size: 0, variables: 2 */

// <000441DB> tier0/buffer_string.cpp:1903
// function calls: 11
void CBufferString::DefaultExtension(const char* pExt)
{
	CBufferString::IsEmpty(); // 1343
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1349
	CBufferString::GetFileExtension(); // 1905
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1907
	CBufferString::Append(
		char ch,
		bool bExact);  // 1923
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 1927
	CBufferString::IsEmpty(); // 1912
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1912
} /* size: 323, inline expansions: 11 (278 bytes) */

// <00044099> tier0/buffer_string.cpp:1930
// function calls: 2
void CBufferString::SetExtension(const char* pExt)
{
	CBufferString::Append(
		char ch,
		bool bExact);  // 1936
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 1938
} /* size: 133, inline expansions: 2 (79 bytes) */

// <00043E2E> tier0/buffer_string.cpp:1941
// variable: 1
// function calls: 9
void CBufferString::ExtractFileExtension(const char* pFileName)
{
	const char* pExt; // 1943
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1946
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1952
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 1950
} /* size: 161, variables: 1, inline expansions: 9 (208 bytes) */

// <0004C9A2> tier0/buffer_string.cpp:1955
// variables: 6
// function call: 1
void GetAllocChars(int nCurChars, int nReqChars)
{
	int nExtra; // 1998
	{
		int nExtra; // 1967
	}
	{
		int nExtra; // 1962
	}
	{
		int nExtra; // 1982
	}
	{
		int nExtra; // 1977
	}
	{
		int nExtra; // 1972
	}
	GetAllocChars(int nCurChars,
			int nReqChars);  // 1955
} /* size: 262, variables: 1, inline expansions: 1 (185 bytes) */

// <00043D9C> tier0/buffer_string.cpp:1955
// variables: 6
void GetAllocChars(int nCurChars, int nReqChars)
{
	int nExtra; // 1998
	{
		int nExtra; // 1962
	}
	{
		int nExtra; // 1967
	}
	{
		int nExtra; // 1972
	}
	{
		int nExtra; // 1977
	}
	{
		int nExtra; // 1982
	}
} /* size: 0, variables: 1 */

