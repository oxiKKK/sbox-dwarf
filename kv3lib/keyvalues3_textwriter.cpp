
//
// kv3lib/keyvalues3_textwriter.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 18
//

// <055FF1BC> kv3lib/keyvalues3_textwriter.cpp:19
const char* KV3FlagToText(KeyValues3Flag_t nFlag)
{
} /* size: 0 */

// <055FF13B> kv3lib/keyvalues3_textwriter.cpp:48
bool IsTerseType(const KeyValues3* pData)
{
} /* size: 0 */

// <055FF0EA> kv3lib/keyvalues3_textwriter.cpp:67
// variables: 4
bool IsArrayOfTerseTypeWithNoMetadataText(const KeyValues3* pData)
{
	{
		const KeyValues3* pElement; // 69
		CKV3ArrayIteratorView<true>& __for_range; // 35153
		iterator __for_begin; // 8655
		iterator __for_end; // 8655
	}
} /* size: 0 */

// <02976AE4> kv3lib/keyvalues3_textwriter.cpp:67
// variables: 4
bool IsArrayOfTerseTypeWithNoMetadataText(const KeyValues3* pData)
{
	{
		const KeyValues3* pElement; // 69
		CKV3ArrayIteratorView<true>& __for_range; // 53824
		iterator __for_begin; // 27326
		iterator __for_end; // 27326
	}
} /* size: 0 */

// <012C6699> kv3lib/keyvalues3_textwriter.cpp:67
// variables: 4
bool IsArrayOfTerseTypeWithNoMetadataText(const KeyValues3* pData)
{
	{
		const KeyValues3* pElement; // 69
		CKV3ArrayIteratorView<true>& __for_range; // 58803
		iterator __for_begin; // 32305
		iterator __for_end; // 32305
	}
} /* size: 0 */

// <00341E5E> kv3lib/keyvalues3_textwriter.cpp:67
// variables: 4
bool IsArrayOfTerseTypeWithNoMetadataText(const KeyValues3* pData)
{
	{
		const KeyValues3* pElement; // 69
		CKV3ArrayIteratorView<true>& __for_range; // 44970
		iterator __for_begin; // 18472
		iterator __for_end; // 18472
	}
} /* size: 0 */

// <006A7060> kv3lib/keyvalues3_textwriter.cpp:67
// variables: 4
bool IsArrayOfTerseTypeWithNoMetadataText(const KeyValues3* pData)
{
	{
		const KeyValues3* pElement; // 69
		CKV3ArrayIteratorView<true>& __for_range; // 5420
		iterator __for_begin; // 44458
		iterator __for_end; // 44458
	}
} /* size: 0 */

// <00A7ECE7> kv3lib/keyvalues3_textwriter.cpp:67
// variables: 4
bool IsArrayOfTerseTypeWithNoMetadataText(const KeyValues3* pData)
{
	{
		const KeyValues3* pElement; // 69
		CKV3ArrayIteratorView<true>& __for_range; // 11571
		iterator __for_begin; // 50609
		iterator __for_end; // 50609
	}
} /* size: 0 */

// <0018B868> kv3lib/keyvalues3_textwriter.cpp:67
// variables: 4
bool IsArrayOfTerseTypeWithNoMetadataText(const KeyValues3* pData)
{
	{
		const KeyValues3* pElement; // 69
		CKV3ArrayIteratorView<true>& __for_range; // 4068
		iterator __for_begin; // 43106
		iterator __for_end; // 43106
	}
} /* size: 0 */

// <055FF0AC> kv3lib/keyvalues3_textwriter.cpp:88
// variables: 3
void StripTrailingZeros(char* pStr)
{
	char* p; // 90
	char* pDot; // 91
	char* pCharAfterDot; // 106
} /* size: 0, variables: 3 */

// <055FD039> kv3lib/keyvalues3_textwriter.cpp:117
// variables: 35
// function calls: 92
bool SaveKV3Text_R(const KeyValues3* pData, CUtlString* pOutErrorMessage, CUtlBuffer* pDestBuffer, bool bAfterEquals)
{
	bool bHasMetadata; // 119
	KeyValues3Flag_t FLAGS_OTHER_THAN_MULTILINE_STRING; // 123
	const char   __FUNCTION__; // 47629
	{
		bool bFirstFlag; // 128
		{
			int iFlag; // 129
			{
				const char* pFlagName; // 138
				KV3FlagToText(KeyValues3Flag_t nFlag); // 138
			}
			KeyValues3::GetAllFlags(); // 892
			KeyValues3::HasFlag(
				KeyValues3Flag_t nFlag);  // 131
		}
	}
	{
		double val; // 174
		{
			const int  DOUBLE_STR_MAX_LEN; // 196
			char pStr; // 197
			StripTrailingZeros(char* pStr); // 200
		}
		KeyValues3::GetValueAsNumeric<double>(); // 204
		KeyValues3::GetValueDouble(); // 174
	}
	{
		CUtlString multilineString; // 217
		CUtlBuffer::EnableTabs(
				bool bEnable);  // 213
		CUtlString::CUtlString(
				const char* pString);  // 217
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 218
		CUtlString::~CUtlString(); // 218
		CUtlString::Get(); // 219
		CUtlBuffer::EnableTabs(
				bool bEnable);  // 223
		CUtlString::~CUtlString(); // 224
	}
	{
		int nCount; // 233
		bool bShort; // 234
		const byte* pBlob; // 251
		const char  hexBytes; // 254
		{
			int i; // 256
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
				char c);  // 273
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
				char c);  // 274
		}
		CUtlBuffer::PushTab(); // 248
		CUtlBuffer::TellMaxPut(); // 252
	}
	{
		int nCount; // 293
		bool bMultiplePerRow; // 294
		bool bSingleRow; // 295
		{
			int i; // 312
			{
				const KeyValues3* pElementData; // 326
				{
					const char* pPreamble; // 331
					V_isempty(const char* pszString); // 332
				}
				{
					const char* pPostamble; // 351
					V_isempty(const char* pszString); // 352
				}
			}
		}
		CUtlBuffer::PopTab(); // 363
		{
			const KeyValues3* pElement; // 69
			CKV3ArrayIteratorView<true>& __for_range; // 35121
			iterator __for_begin; // 35131
			iterator __for_end; // 35141
			{
				KeyValues3::Internal_Type(); // 90
				KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
				KeyValues3::GetType(); // 74
				KeyValues3::GetType(); // 74
			}
			{
			}
			CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
						KV3Pointer_t pKV3);  // 67
			CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
						KV3Pointer_t pKV3);  // 922
			KeyValues3::IterateArray(); // 69
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<true>::begin(); // 69
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<true>::end(); // 69
			iterator::operator!=(
					const iterator& rhs);  // 69
			{
			}
			iterator::operator*(); // 69
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 50
			IsTerseType(const KeyValues3* pData); // 71
		}
		IsArrayOfTerseTypeWithNoMetadataText(const KeyValues3* pData); // 294
		CUtlBuffer::PushTab(); // 309
	}
	{
		CBufferStringN<128> memberName; // 381
		int nCount; // 382
		{
			int i; // 383
			{
				const KeyValues3* pMemberData; // 385
				{
					const char* pPreamble; // 390
					V_isempty(const char* pszString); // 391
				}
				{
					const char* pPostamble; // 408
					V_isempty(const char* pszString); // 409
				}
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 398
			}
		}
		CUtlBuffer::PushTab(); // 380
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<128>::CBufferStringN(); // 381
		CUtlBuffer::PopTab(); // 418
		CBufferString::~CBufferString(); // 587
		CBufferStringN<128>::~CBufferStringN(); // 421
		CBufferString::~CBufferString(); // 587
		CBufferStringN<128>::~CBufferStringN(); // 421
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 424
	}
	KeyValues3::GetAllFlags(); // 126
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 150
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 164
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 169
	KeyValues3::GetAllFlags(); // 892
	KeyValues3::HasFlag(
		KeyValues3Flag_t nFlag);  // 210
} /* size: 0, variables: 3, inline expansions: 10 (31 bytes) */

// <02974A33> kv3lib/keyvalues3_textwriter.cpp:117
// variables: 35
// function calls: 92
bool SaveKV3Text_R(const KeyValues3* pData, CUtlString* pOutErrorMessage, CUtlBuffer* pDestBuffer, bool bAfterEquals)
{
	bool bHasMetadata; // 119
	KeyValues3Flag_t FLAGS_OTHER_THAN_MULTILINE_STRING; // 123
	const char   __FUNCTION__; // 764
	{
		bool bFirstFlag; // 128
		{
			int iFlag; // 129
			{
				const char* pFlagName; // 138
				KV3FlagToText(KeyValues3Flag_t nFlag); // 138
			}
			KeyValues3::GetAllFlags(); // 892
			KeyValues3::HasFlag(
				KeyValues3Flag_t nFlag);  // 131
		}
	}
	{
		double val; // 174
		{
			const int  DOUBLE_STR_MAX_LEN; // 196
			char pStr; // 197
			StripTrailingZeros(char* pStr); // 200
		}
		KeyValues3::GetValueAsNumeric<double>(); // 204
		KeyValues3::GetValueDouble(); // 174
	}
	{
		CUtlString multilineString; // 217
		CUtlBuffer::EnableTabs(
				bool bEnable);  // 213
		CUtlString::CUtlString(
				const char* pString);  // 217
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 218
		CUtlString::~CUtlString(); // 218
		CUtlString::Get(); // 219
		CUtlBuffer::EnableTabs(
				bool bEnable);  // 223
		CUtlString::~CUtlString(); // 224
	}
	{
		int nCount; // 233
		bool bShort; // 234
		const byte* pBlob; // 251
		const char  hexBytes; // 254
		{
			int i; // 256
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
				char c);  // 273
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
				char c);  // 274
		}
		CUtlBuffer::PushTab(); // 248
		CUtlBuffer::TellMaxPut(); // 252
	}
	{
		int nCount; // 293
		bool bMultiplePerRow; // 294
		bool bSingleRow; // 295
		{
			int i; // 312
			{
				const KeyValues3* pElementData; // 326
				{
					const char* pPreamble; // 331
					V_isempty(const char* pszString); // 332
				}
				{
					const char* pPostamble; // 351
					V_isempty(const char* pszString); // 352
				}
			}
		}
		CUtlBuffer::PopTab(); // 363
		{
			const KeyValues3* pElement; // 69
			CKV3ArrayIteratorView<true>& __for_range; // 53792
			iterator __for_begin; // 53802
			iterator __for_end; // 53812
			{
				KeyValues3::Internal_Type(); // 90
				KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
				KeyValues3::GetType(); // 74
				KeyValues3::GetType(); // 74
			}
			{
			}
			CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
						KV3Pointer_t pKV3);  // 67
			CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
						KV3Pointer_t pKV3);  // 922
			KeyValues3::IterateArray(); // 69
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<true>::begin(); // 69
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<true>::end(); // 69
			iterator::operator!=(
					const iterator& rhs);  // 69
			{
			}
			iterator::operator*(); // 69
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 50
			IsTerseType(const KeyValues3* pData); // 71
		}
		IsArrayOfTerseTypeWithNoMetadataText(const KeyValues3* pData); // 294
		CUtlBuffer::PushTab(); // 309
	}
	{
		CBufferStringN<128> memberName; // 381
		int nCount; // 382
		{
			int i; // 383
			{
				const KeyValues3* pMemberData; // 385
				{
					const char* pPreamble; // 390
					V_isempty(const char* pszString); // 391
				}
				{
					const char* pPostamble; // 408
					V_isempty(const char* pszString); // 409
				}
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 398
			}
		}
		CUtlBuffer::PushTab(); // 380
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<128>::CBufferStringN(); // 381
		CUtlBuffer::PopTab(); // 418
		CBufferString::~CBufferString(); // 587
		CBufferStringN<128>::~CBufferStringN(); // 421
		CBufferString::~CBufferString(); // 587
		CBufferStringN<128>::~CBufferStringN(); // 421
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 424
	}
	KeyValues3::GetAllFlags(); // 126
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 150
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 164
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 169
	KeyValues3::GetAllFlags(); // 892
	KeyValues3::HasFlag(
		KeyValues3Flag_t nFlag);  // 210
} /* size: 0, variables: 3, inline expansions: 10 (31 bytes) */

// <012C45E8> kv3lib/keyvalues3_textwriter.cpp:117
// variables: 35
// function calls: 92
bool SaveKV3Text_R(const KeyValues3* pData, CUtlString* pOutErrorMessage, CUtlBuffer* pDestBuffer, bool bAfterEquals)
{
	bool bHasMetadata; // 119
	KeyValues3Flag_t FLAGS_OTHER_THAN_MULTILINE_STRING; // 123
	const char   __FUNCTION__; // 5743
	{
		bool bFirstFlag; // 128
		{
			int iFlag; // 129
			{
				const char* pFlagName; // 138
				KV3FlagToText(KeyValues3Flag_t nFlag); // 138
			}
			KeyValues3::GetAllFlags(); // 892
			KeyValues3::HasFlag(
				KeyValues3Flag_t nFlag);  // 131
		}
	}
	{
		double val; // 174
		{
			const int  DOUBLE_STR_MAX_LEN; // 196
			char pStr; // 197
			StripTrailingZeros(char* pStr); // 200
		}
		KeyValues3::GetValueAsNumeric<double>(); // 204
		KeyValues3::GetValueDouble(); // 174
	}
	{
		CUtlString multilineString; // 217
		CUtlBuffer::EnableTabs(
				bool bEnable);  // 213
		CUtlString::CUtlString(
				const char* pString);  // 217
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 218
		CUtlString::~CUtlString(); // 218
		CUtlString::Get(); // 219
		CUtlBuffer::EnableTabs(
				bool bEnable);  // 223
		CUtlString::~CUtlString(); // 224
	}
	{
		int nCount; // 233
		bool bShort; // 234
		const byte* pBlob; // 251
		const char  hexBytes; // 254
		{
			int i; // 256
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
				char c);  // 273
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
				char c);  // 274
		}
		CUtlBuffer::PushTab(); // 248
		CUtlBuffer::TellMaxPut(); // 252
	}
	{
		int nCount; // 293
		bool bMultiplePerRow; // 294
		bool bSingleRow; // 295
		{
			int i; // 312
			{
				const KeyValues3* pElementData; // 326
				{
					const char* pPreamble; // 331
					V_isempty(const char* pszString); // 332
				}
				{
					const char* pPostamble; // 351
					V_isempty(const char* pszString); // 352
				}
			}
		}
		CUtlBuffer::PopTab(); // 363
		{
			const KeyValues3* pElement; // 69
			CKV3ArrayIteratorView<true>& __for_range; // 58771
			iterator __for_begin; // 58781
			iterator __for_end; // 58791
			{
				KeyValues3::Internal_Type(); // 90
				KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
				KeyValues3::GetType(); // 74
				KeyValues3::GetType(); // 74
			}
			{
			}
			CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
						KV3Pointer_t pKV3);  // 67
			CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
						KV3Pointer_t pKV3);  // 922
			KeyValues3::IterateArray(); // 69
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<true>::begin(); // 69
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<true>::end(); // 69
			iterator::operator!=(
					const iterator& rhs);  // 69
			{
			}
			iterator::operator*(); // 69
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 50
			IsTerseType(const KeyValues3* pData); // 71
		}
		IsArrayOfTerseTypeWithNoMetadataText(const KeyValues3* pData); // 294
		CUtlBuffer::PushTab(); // 309
	}
	{
		CBufferStringN<128> memberName; // 381
		int nCount; // 382
		{
			int i; // 383
			{
				const KeyValues3* pMemberData; // 385
				{
					const char* pPreamble; // 390
					V_isempty(const char* pszString); // 391
				}
				{
					const char* pPostamble; // 408
					V_isempty(const char* pszString); // 409
				}
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 398
			}
		}
		CUtlBuffer::PushTab(); // 380
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<128>::CBufferStringN(); // 381
		CUtlBuffer::PopTab(); // 418
		CBufferString::~CBufferString(); // 587
		CBufferStringN<128>::~CBufferStringN(); // 421
		CBufferString::~CBufferString(); // 587
		CBufferStringN<128>::~CBufferStringN(); // 421
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 424
	}
	KeyValues3::GetAllFlags(); // 126
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 150
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 164
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 169
	KeyValues3::GetAllFlags(); // 892
	KeyValues3::HasFlag(
		KeyValues3Flag_t nFlag);  // 210
} /* size: 0, variables: 3, inline expansions: 10 (31 bytes) */

// <0033FDAD> kv3lib/keyvalues3_textwriter.cpp:117
// variables: 35
// function calls: 92
bool SaveKV3Text_R(const KeyValues3* pData, CUtlString* pOutErrorMessage, CUtlBuffer* pDestBuffer, bool bAfterEquals)
{
	bool bHasMetadata; // 119
	KeyValues3Flag_t FLAGS_OTHER_THAN_MULTILINE_STRING; // 123
	const char   __FUNCTION__; // 57446
	{
		bool bFirstFlag; // 128
		{
			int iFlag; // 129
			{
				const char* pFlagName; // 138
				KV3FlagToText(KeyValues3Flag_t nFlag); // 138
			}
			KeyValues3::GetAllFlags(); // 892
			KeyValues3::HasFlag(
				KeyValues3Flag_t nFlag);  // 131
		}
	}
	{
		double val; // 174
		{
			const int  DOUBLE_STR_MAX_LEN; // 196
			char pStr; // 197
			StripTrailingZeros(char* pStr); // 200
		}
		KeyValues3::GetValueAsNumeric<double>(); // 204
		KeyValues3::GetValueDouble(); // 174
	}
	{
		CUtlString multilineString; // 217
		CUtlBuffer::EnableTabs(
				bool bEnable);  // 213
		CUtlString::CUtlString(
				const char* pString);  // 217
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 218
		CUtlString::~CUtlString(); // 218
		CUtlString::Get(); // 219
		CUtlBuffer::EnableTabs(
				bool bEnable);  // 223
		CUtlString::~CUtlString(); // 224
	}
	{
		int nCount; // 233
		bool bShort; // 234
		const byte* pBlob; // 251
		const char  hexBytes; // 254
		{
			int i; // 256
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
				char c);  // 273
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
				char c);  // 274
		}
		CUtlBuffer::PushTab(); // 248
		CUtlBuffer::TellMaxPut(); // 252
	}
	{
		int nCount; // 293
		bool bMultiplePerRow; // 294
		bool bSingleRow; // 295
		{
			int i; // 312
			{
				const KeyValues3* pElementData; // 326
				{
					const char* pPreamble; // 331
					V_isempty(const char* pszString); // 332
				}
				{
					const char* pPostamble; // 351
					V_isempty(const char* pszString); // 352
				}
			}
		}
		CUtlBuffer::PopTab(); // 363
		{
			const KeyValues3* pElement; // 69
			CKV3ArrayIteratorView<true>& __for_range; // 44938
			iterator __for_begin; // 44948
			iterator __for_end; // 44958
			{
				KeyValues3::Internal_Type(); // 90
				KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
				KeyValues3::GetType(); // 74
				KeyValues3::GetType(); // 74
			}
			{
			}
			CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
						KV3Pointer_t pKV3);  // 67
			CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
						KV3Pointer_t pKV3);  // 922
			KeyValues3::IterateArray(); // 69
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<true>::begin(); // 69
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<true>::end(); // 69
			iterator::operator!=(
					const iterator& rhs);  // 69
			{
			}
			iterator::operator*(); // 69
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 50
			IsTerseType(const KeyValues3* pData); // 71
		}
		IsArrayOfTerseTypeWithNoMetadataText(const KeyValues3* pData); // 294
		CUtlBuffer::PushTab(); // 309
	}
	{
		CBufferStringN<128> memberName; // 381
		int nCount; // 382
		{
			int i; // 383
			{
				const KeyValues3* pMemberData; // 385
				{
					const char* pPreamble; // 390
					V_isempty(const char* pszString); // 391
				}
				{
					const char* pPostamble; // 408
					V_isempty(const char* pszString); // 409
				}
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 398
			}
		}
		CUtlBuffer::PushTab(); // 380
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<128>::CBufferStringN(); // 381
		CUtlBuffer::PopTab(); // 418
		CBufferString::~CBufferString(); // 587
		CBufferStringN<128>::~CBufferStringN(); // 421
		CBufferString::~CBufferString(); // 587
		CBufferStringN<128>::~CBufferStringN(); // 421
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 424
	}
	KeyValues3::GetAllFlags(); // 126
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 150
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 164
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 169
	KeyValues3::GetAllFlags(); // 892
	KeyValues3::HasFlag(
		KeyValues3Flag_t nFlag);  // 210
} /* size: 0, variables: 3, inline expansions: 10 (0 bytes) */

// <006A4FAF> kv3lib/keyvalues3_textwriter.cpp:117
// variables: 35
// function calls: 92
bool SaveKV3Text_R(const KeyValues3* pData, CUtlString* pOutErrorMessage, CUtlBuffer* pDestBuffer, bool bAfterEquals)
{
	bool bHasMetadata; // 119
	KeyValues3Flag_t FLAGS_OTHER_THAN_MULTILINE_STRING; // 123
	const char   __FUNCTION__; // 17896
	{
		bool bFirstFlag; // 128
		{
			int iFlag; // 129
			{
				const char* pFlagName; // 138
				KV3FlagToText(KeyValues3Flag_t nFlag); // 138
			}
			KeyValues3::GetAllFlags(); // 892
			KeyValues3::HasFlag(
				KeyValues3Flag_t nFlag);  // 131
		}
	}
	{
		double val; // 174
		{
			const int  DOUBLE_STR_MAX_LEN; // 196
			char pStr; // 197
			StripTrailingZeros(char* pStr); // 200
		}
		KeyValues3::GetValueAsNumeric<double>(); // 204
		KeyValues3::GetValueDouble(); // 174
	}
	{
		CUtlString multilineString; // 217
		CUtlBuffer::EnableTabs(
				bool bEnable);  // 213
		CUtlString::CUtlString(
				const char* pString);  // 217
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 218
		CUtlString::~CUtlString(); // 218
		CUtlString::Get(); // 219
		CUtlBuffer::EnableTabs(
				bool bEnable);  // 223
		CUtlString::~CUtlString(); // 224
	}
	{
		int nCount; // 233
		bool bShort; // 234
		const byte* pBlob; // 251
		const char  hexBytes; // 254
		{
			int i; // 256
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
				char c);  // 273
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
				char c);  // 274
		}
		CUtlBuffer::PushTab(); // 248
		CUtlBuffer::TellMaxPut(); // 252
	}
	{
		int nCount; // 293
		bool bMultiplePerRow; // 294
		bool bSingleRow; // 295
		{
			int i; // 312
			{
				const KeyValues3* pElementData; // 326
				{
					const char* pPreamble; // 331
					V_isempty(const char* pszString); // 332
				}
				{
					const char* pPostamble; // 351
					V_isempty(const char* pszString); // 352
				}
			}
		}
		CUtlBuffer::PopTab(); // 363
		{
			const KeyValues3* pElement; // 69
			CKV3ArrayIteratorView<true>& __for_range; // 5388
			iterator __for_begin; // 5398
			iterator __for_end; // 5408
			{
				KeyValues3::Internal_Type(); // 90
				KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
				KeyValues3::GetType(); // 74
				KeyValues3::GetType(); // 74
			}
			{
			}
			CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
						KV3Pointer_t pKV3);  // 67
			CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
						KV3Pointer_t pKV3);  // 922
			KeyValues3::IterateArray(); // 69
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<true>::begin(); // 69
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<true>::end(); // 69
			iterator::operator!=(
					const iterator& rhs);  // 69
			{
			}
			iterator::operator*(); // 69
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 50
			IsTerseType(const KeyValues3* pData); // 71
		}
		IsArrayOfTerseTypeWithNoMetadataText(const KeyValues3* pData); // 294
		CUtlBuffer::PushTab(); // 309
	}
	{
		CBufferStringN<128> memberName; // 381
		int nCount; // 382
		{
			int i; // 383
			{
				const KeyValues3* pMemberData; // 385
				{
					const char* pPreamble; // 390
					V_isempty(const char* pszString); // 391
				}
				{
					const char* pPostamble; // 408
					V_isempty(const char* pszString); // 409
				}
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 398
			}
		}
		CUtlBuffer::PushTab(); // 380
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<128>::CBufferStringN(); // 381
		CUtlBuffer::PopTab(); // 418
		CBufferString::~CBufferString(); // 587
		CBufferStringN<128>::~CBufferStringN(); // 421
		CBufferString::~CBufferString(); // 587
		CBufferStringN<128>::~CBufferStringN(); // 421
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 424
	}
	KeyValues3::GetAllFlags(); // 126
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 150
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 164
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 169
	KeyValues3::GetAllFlags(); // 892
	KeyValues3::HasFlag(
		KeyValues3Flag_t nFlag);  // 210
} /* size: 0, variables: 3, inline expansions: 10 (31 bytes) */

// <00A7CC36> kv3lib/keyvalues3_textwriter.cpp:117
// variables: 35
// function calls: 92
bool SaveKV3Text_R(const KeyValues3* pData, CUtlString* pOutErrorMessage, CUtlBuffer* pDestBuffer, bool bAfterEquals)
{
	bool bHasMetadata; // 119
	KeyValues3Flag_t FLAGS_OTHER_THAN_MULTILINE_STRING; // 123
	const char   __FUNCTION__; // 24047
	{
		bool bFirstFlag; // 128
		{
			int iFlag; // 129
			{
				const char* pFlagName; // 138
				KV3FlagToText(KeyValues3Flag_t nFlag); // 138
			}
			KeyValues3::GetAllFlags(); // 892
			KeyValues3::HasFlag(
				KeyValues3Flag_t nFlag);  // 131
		}
	}
	{
		double val; // 174
		{
			const int  DOUBLE_STR_MAX_LEN; // 196
			char pStr; // 197
			StripTrailingZeros(char* pStr); // 200
		}
		KeyValues3::GetValueAsNumeric<double>(); // 204
		KeyValues3::GetValueDouble(); // 174
	}
	{
		CUtlString multilineString; // 217
		CUtlBuffer::EnableTabs(
				bool bEnable);  // 213
		CUtlString::CUtlString(
				const char* pString);  // 217
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 218
		CUtlString::~CUtlString(); // 218
		CUtlString::Get(); // 219
		CUtlBuffer::EnableTabs(
				bool bEnable);  // 223
		CUtlString::~CUtlString(); // 224
	}
	{
		int nCount; // 233
		bool bShort; // 234
		const byte* pBlob; // 251
		const char  hexBytes; // 254
		{
			int i; // 256
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
				char c);  // 273
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
				char c);  // 274
		}
		CUtlBuffer::PushTab(); // 248
		CUtlBuffer::TellMaxPut(); // 252
	}
	{
		int nCount; // 293
		bool bMultiplePerRow; // 294
		bool bSingleRow; // 295
		{
			int i; // 312
			{
				const KeyValues3* pElementData; // 326
				{
					const char* pPreamble; // 331
					V_isempty(const char* pszString); // 332
				}
				{
					const char* pPostamble; // 351
					V_isempty(const char* pszString); // 352
				}
			}
		}
		CUtlBuffer::PopTab(); // 363
		{
			const KeyValues3* pElement; // 69
			CKV3ArrayIteratorView<true>& __for_range; // 11539
			iterator __for_begin; // 11549
			iterator __for_end; // 11559
			{
				KeyValues3::Internal_Type(); // 90
				KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
				KeyValues3::GetType(); // 74
				KeyValues3::GetType(); // 74
			}
			{
			}
			CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
						KV3Pointer_t pKV3);  // 67
			CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
						KV3Pointer_t pKV3);  // 922
			KeyValues3::IterateArray(); // 69
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<true>::begin(); // 69
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<true>::end(); // 69
			iterator::operator!=(
					const iterator& rhs);  // 69
			{
			}
			iterator::operator*(); // 69
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 50
			IsTerseType(const KeyValues3* pData); // 71
		}
		IsArrayOfTerseTypeWithNoMetadataText(const KeyValues3* pData); // 294
		CUtlBuffer::PushTab(); // 309
	}
	{
		CBufferStringN<128> memberName; // 381
		int nCount; // 382
		{
			int i; // 383
			{
				const KeyValues3* pMemberData; // 385
				{
					const char* pPreamble; // 390
					V_isempty(const char* pszString); // 391
				}
				{
					const char* pPostamble; // 408
					V_isempty(const char* pszString); // 409
				}
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 398
			}
		}
		CUtlBuffer::PushTab(); // 380
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<128>::CBufferStringN(); // 381
		CUtlBuffer::PopTab(); // 418
		CBufferString::~CBufferString(); // 587
		CBufferStringN<128>::~CBufferStringN(); // 421
		CBufferString::~CBufferString(); // 587
		CBufferStringN<128>::~CBufferStringN(); // 421
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 424
	}
	KeyValues3::GetAllFlags(); // 126
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 150
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 164
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 169
	KeyValues3::GetAllFlags(); // 892
	KeyValues3::HasFlag(
		KeyValues3Flag_t nFlag);  // 210
} /* size: 0, variables: 3, inline expansions: 10 (0 bytes) */

// <001897B7> kv3lib/keyvalues3_textwriter.cpp:117
// variables: 35
// function calls: 92
bool SaveKV3Text_R(const KeyValues3* pData, CUtlString* pOutErrorMessage, CUtlBuffer* pDestBuffer, bool bAfterEquals)
{
	bool bHasMetadata; // 119
	KeyValues3Flag_t FLAGS_OTHER_THAN_MULTILINE_STRING; // 123
	const char   __FUNCTION__; // 16544
	{
		bool bFirstFlag; // 128
		{
			int iFlag; // 129
			{
				const char* pFlagName; // 138
				KV3FlagToText(KeyValues3Flag_t nFlag); // 138
			}
			KeyValues3::GetAllFlags(); // 892
			KeyValues3::HasFlag(
				KeyValues3Flag_t nFlag);  // 131
		}
	}
	{
		double val; // 174
		{
			const int  DOUBLE_STR_MAX_LEN; // 196
			char pStr; // 197
			StripTrailingZeros(char* pStr); // 200
		}
		KeyValues3::GetValueAsNumeric<double>(); // 204
		KeyValues3::GetValueDouble(); // 174
	}
	{
		CUtlString multilineString; // 217
		CUtlBuffer::EnableTabs(
				bool bEnable);  // 213
		CUtlString::CUtlString(
				const char* pString);  // 217
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 218
		CUtlString::~CUtlString(); // 218
		CUtlString::Get(); // 219
		CUtlBuffer::EnableTabs(
				bool bEnable);  // 223
		CUtlString::~CUtlString(); // 224
	}
	{
		int nCount; // 233
		bool bShort; // 234
		const byte* pBlob; // 251
		const char  hexBytes; // 254
		{
			int i; // 256
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
				char c);  // 273
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
				char c);  // 274
		}
		CUtlBuffer::PushTab(); // 248
		CUtlBuffer::TellMaxPut(); // 252
	}
	{
		int nCount; // 293
		bool bMultiplePerRow; // 294
		bool bSingleRow; // 295
		{
			int i; // 312
			{
				const KeyValues3* pElementData; // 326
				{
					const char* pPreamble; // 331
					V_isempty(const char* pszString); // 332
				}
				{
					const char* pPostamble; // 351
					V_isempty(const char* pszString); // 352
				}
			}
		}
		CUtlBuffer::PopTab(); // 363
		{
			const KeyValues3* pElement; // 69
			CKV3ArrayIteratorView<true>& __for_range; // 4036
			iterator __for_begin; // 4046
			iterator __for_end; // 4056
			{
				KeyValues3::Internal_Type(); // 90
				KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
				KeyValues3::GetType(); // 74
				KeyValues3::GetType(); // 74
			}
			{
			}
			CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
						KV3Pointer_t pKV3);  // 67
			CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
						KV3Pointer_t pKV3);  // 922
			KeyValues3::IterateArray(); // 69
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 396
			CKV3ArrayIteratorView<true>::begin(); // 69
			iterator::iterator(
				const KV3Pointer_t* pArrayElements,
				int nStartingIndex,
				int nArrayElementCount);  // 401
			CKV3ArrayIteratorView<true>::end(); // 69
			iterator::operator!=(
					const iterator& rhs);  // 69
			{
			}
			iterator::operator*(); // 69
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 50
			IsTerseType(const KeyValues3* pData); // 71
		}
		IsArrayOfTerseTypeWithNoMetadataText(const KeyValues3* pData); // 294
		CUtlBuffer::PushTab(); // 309
	}
	{
		CBufferStringN<128> memberName; // 381
		int nCount; // 382
		{
			int i; // 383
			{
				const KeyValues3* pMemberData; // 385
				{
					const char* pPreamble; // 390
					V_isempty(const char* pszString); // 391
				}
				{
					const char* pPostamble; // 408
					V_isempty(const char* pszString); // 409
				}
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 398
			}
		}
		CUtlBuffer::PushTab(); // 380
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<128>::CBufferStringN(); // 381
		CUtlBuffer::PopTab(); // 418
		CBufferString::~CBufferString(); // 587
		CBufferStringN<128>::~CBufferStringN(); // 421
		CBufferString::~CBufferString(); // 587
		CBufferStringN<128>::~CBufferStringN(); // 421
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 424
	}
	KeyValues3::GetAllFlags(); // 126
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 150
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 164
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 169
	KeyValues3::GetAllFlags(); // 892
	KeyValues3::HasFlag(
		KeyValues3Flag_t nFlag);  // 210
} /* size: 0, variables: 3, inline expansions: 10 (0 bytes) */

// <012C3D80> kv3lib/keyvalues3_textwriter.cpp:479
// variable: 1
// function calls: 8
bool SaveKV3Text_ToString(const KV3ID_t& formatId, const KeyValues3* pRoot, CUtlString* pOutErrorMessage, CUtlString* pDestString)
{
	CUtlBuffer textBuffer; // 481
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 487
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 489
} /* size: 0, variables: 1, inline expansions: 8 (0 bytes) */

