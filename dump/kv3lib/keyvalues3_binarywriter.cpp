
//
// kv3lib/keyvalues3_binarywriter.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 31
//	struct: 1
//

// <05692E0E> kv3lib/keyvalues3_binarywriter.cpp:25
void KV3BinarySaveContext_t::KV3BinarySaveContext_t()
{
} /* size: 0 */

// <05692DF2> kv3lib/keyvalues3_binarywriter.cpp:25
inline void KV3BinarySaveContext_t::KV3BinarySaveContext_t()
{
} /* size: 0 */

// <05692DDB> kv3lib/keyvalues3_binarywriter.cpp:25
void KV3BinarySaveContext_t::~KV3BinarySaveContext_t()
{
} /* size: 0 */

// <05692DBF> kv3lib/keyvalues3_binarywriter.cpp:25
inline void KV3BinarySaveContext_t::~KV3BinarySaveContext_t()
{
} /* size: 0 */

// <0568A77D> kv3lib/keyvalues3_binarywriter.cpp:25
// member functions: 11
// member variables: 9
// struct size: 512
struct KV3BinarySaveContext_t {
	CUtlString * m_pOutErrorMessage; /* 0 8 */
	CUtlBuffer m_ControlBuffer; /* 8 80 */
	CUtlBuffer m_1ByteBuffer; /* 88 80 */
	CUtlBuffer m_4ByteBuffer; /* 168 80 */
	CUtlBuffer m_8ByteBuffer; /* 248 80 */
	CUtlSymbolTableLarge m_Symbols; /* 328 144 */
	CUtlVector<std::pair<void const*, unsigned int>, CUtlMemory<std::pair<void const*, unsigned int>, int> > m_BinaryBlobs; /* 472 32 */
	uint m_nTableCount; /* 504 4 */
	uint m_nArrayCount; /* 508 4 */
	/* kv3lib/keyvalues3_binarywriter.cpp:38 */
	void PutBytes(KV3BinarySaveContext_t* , const uint8* , uint);
	/* kv3lib/keyvalues3_binarywriter.cpp:39 */
	void PutUCharValue(KV3BinarySaveContext_t* , uint8);
	/* kv3lib/keyvalues3_binarywriter.cpp:41 */
	void PutUInt32Value(KV3BinarySaveContext_t* , uint32);
	/* kv3lib/keyvalues3_binarywriter.cpp:42 */
	void PutInt32Value(KV3BinarySaveContext_t* , int32);
	/* kv3lib/keyvalues3_binarywriter.cpp:43 */
	void PutFloatValue(KV3BinarySaveContext_t* , float);
	/* kv3lib/keyvalues3_binarywriter.cpp:45 */
	void PutUInt64Value(KV3BinarySaveContext_t* , uint64);
	/* kv3lib/keyvalues3_binarywriter.cpp:46 */
	void PutInt64Value(KV3BinarySaveContext_t* , int64);
	/* kv3lib/keyvalues3_binarywriter.cpp:47 */
	void PutDoubleValue(KV3BinarySaveContext_t* , double);
	/* kv3lib/keyvalues3_binarywriter.cpp:49 */
	void PutBinaryBlob(KV3BinarySaveContext_t* , const void* , uint);
	void ~KV3BinarySaveContext_t(KV3BinarySaveContext_t* );
	void KV3BinarySaveContext_t(KV3BinarySaveContext_t* );
};

// <05698322> kv3lib/keyvalues3_binarywriter.cpp:39
inline void KV3BinarySaveContext_t::PutUCharValue(uint8 uValue)
{
} /* size: 0 */

// <056982FD> kv3lib/keyvalues3_binarywriter.cpp:41
inline void KV3BinarySaveContext_t::PutUInt32Value(uint32 uValue)
{
} /* size: 0 */

// <056982D8> kv3lib/keyvalues3_binarywriter.cpp:42
inline void KV3BinarySaveContext_t::PutInt32Value(int32 uValue)
{
} /* size: 0 */

// <056982B3> kv3lib/keyvalues3_binarywriter.cpp:45
inline void KV3BinarySaveContext_t::PutUInt64Value(uint64 uValue)
{
} /* size: 0 */

// <0569828E> kv3lib/keyvalues3_binarywriter.cpp:46
inline void KV3BinarySaveContext_t::PutInt64Value(int64 uValue)
{
} /* size: 0 */

// <05698269> kv3lib/keyvalues3_binarywriter.cpp:47
inline void KV3BinarySaveContext_t::PutDoubleValue(double fValue)
{
} /* size: 0 */

// <05698183> kv3lib/keyvalues3_binarywriter.cpp:49
inline void KV3BinarySaveContext_t::PutBinaryBlob(const void* pBlob, uint nSize)
{
} /* size: 0 */

// <05697EFF> kv3lib/keyvalues3_binarywriter.cpp:58
// variables: 5
// function calls: 3
bool GatherSymbols_R(CUtlSymbolTableLarge* pSymbolTable, const KeyValues3* pData)
{
	{
		int nCount; // 70
		{
			int i; // 71
		}
	}
	{
		int nCount; // 83
		{
			int i; // 84
			{
				const KeyValues3* pMember; // 88
			}
		}
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 60
} /* size: 307, inline expansions: 3 (20 bytes) */

// <05697EBE> kv3lib/keyvalues3_binarywriter.cpp:108
// variable: 1
void PutTypeAndFlags(KV3BinarySaveContext_t& saveContext, const KeyValues3* pData, KeyValues3BinaryType_t nType)
{
	{
		uint8 nFlagsByte; // 112
	}
} /* size: 0 */

// <05697E35> kv3lib/keyvalues3_binarywriter.cpp:124
// variables: 2
KeyValues3BinaryType_t GetBinaryTypeForKV3Type(KeyValues3Type_t nType)
{
	const char   __FUNCTION__; // 48016
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 138
	}
} /* size: 0, variables: 1 */

// <02A0F82F> kv3lib/keyvalues3_binarywriter.cpp:124
// variables: 2
KeyValues3BinaryType_t GetBinaryTypeForKV3Type(KeyValues3Type_t nType)
{
	const char   __FUNCTION__; // 1151
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 138
	}
} /* size: 0, variables: 1 */

// <0135F3E4> kv3lib/keyvalues3_binarywriter.cpp:124
// variables: 2
KeyValues3BinaryType_t GetBinaryTypeForKV3Type(KeyValues3Type_t nType)
{
	const char   __FUNCTION__; // 6130
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 138
	}
} /* size: 0, variables: 1 */

// <003DABA9> kv3lib/keyvalues3_binarywriter.cpp:124
// variables: 2
KeyValues3BinaryType_t GetBinaryTypeForKV3Type(KeyValues3Type_t nType)
{
	const char   __FUNCTION__; // 57833
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 138
	}
} /* size: 0, variables: 1 */

// <0073FDAB> kv3lib/keyvalues3_binarywriter.cpp:124
// variables: 2
KeyValues3BinaryType_t GetBinaryTypeForKV3Type(KeyValues3Type_t nType)
{
	const char   __FUNCTION__; // 18283
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 138
	}
} /* size: 0, variables: 1 */

// <00B17A32> kv3lib/keyvalues3_binarywriter.cpp:124
// variables: 2
KeyValues3BinaryType_t GetBinaryTypeForKV3Type(KeyValues3Type_t nType)
{
	const char   __FUNCTION__; // 24434
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 138
	}
} /* size: 0, variables: 1 */

// <002245B3> kv3lib/keyvalues3_binarywriter.cpp:124
// variables: 2
KeyValues3BinaryType_t GetBinaryTypeForKV3Type(KeyValues3Type_t nType)
{
	const char   __FUNCTION__; // 16931
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 138
	}
} /* size: 0, variables: 1 */

// <05697686> kv3lib/keyvalues3_binarywriter.cpp:144
// variables: 9
// function calls: 27
KeyValues3BinaryType_t GetCompactTypeForKV3Value(KeyValues3BinaryType_t nBinaryType, const KeyValues3* pData)
{
	{
		int64 nValue; // 154
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		{
		}
		KV3Helper_StringToNumber<long long int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<long long int>(); // 694
		KeyValues3::GetValueAsNumeric<long long int>(); // 189
		KeyValues3::GetValueInt64(); // 154
	}
	{
		uint64 nValue; // 163
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		{
		}
		KV3Helper_StringToNumber<long long unsigned int>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 694
		KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
		KeyValues3::GetValueUint64(); // 163
	}
	{
		double fValue; // 172
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		KV3Helper_StringToNumber<double>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<double>(); // 694
		{
		}
		KeyValues3::GetValueAsNumeric<double>(); // 204
		KeyValues3::GetValueDouble(); // 172
	}
	{
		int nCount; // 181
		{
			bool bUniformArray; // 184
			KeyValues3Type_t arrayType; // 185
			KeyValues3Flag_t arrayFlags; // 186
			{
				int i; // 188
				{
					const KeyValues3* pArrayElement; // 190
					KeyValues3::GetAllFlags(); // 192
					KeyValues3::Internal_Type(); // 90
					KeyValues3::GetType(); // 191
				}
			}
			KeyValues3::Internal_Type(); // 90
			KeyValues3::GetType(); // 185
			KeyValues3::GetAllFlags(); // 186
		}
	}
} /* size: 0 */

// <056943C8> kv3lib/keyvalues3_binarywriter.cpp:217
// variables: 26
// function calls: 180
bool SaveKV3BinaryValue(KV3BinarySaveContext_t& saveContext, const KeyValues3* pData, KeyValues3BinaryType_t binaryType)
{
	const char   __FUNCTION__; // 47901
	{
		int nCount; // 276
		{
			int i; // 280
		}
		CUtlBuffer::PutInt(
			int i);  // 42
		KV3BinarySaveContext_t::PutInt32Value(
				int32 uValue);  // 277
	}
	{
		int nCount; // 292
		const KeyValues3* pElement0; // 298
		KeyValues3BinaryType_t nArrayBinaryType; // 299
		KeyValues3BinaryType_t nArrayCompactBinaryType; // 300
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 296
		}
		{
			bool bCanUseCompactFormat; // 306
			{
				int i; // 307
			}
		}
		{
			int i; // 324
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 326
			}
			KeyValues3::Internal_Type(); // 90
			KeyValues3::GetType(); // 326
			KeyValues3::Internal_Type(); // 90
			KeyValues3::GetType(); // 326
		}
		CUtlBuffer::PutInt(
			int i);  // 42
		KV3BinarySaveContext_t::PutInt32Value(
				int32 uValue);  // 293
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 299
		KeyValues3::GetAllFlags(); // 110
		{
			uint8 nFlagsByte; // 112
		}
		PutTypeAndFlags(KV3BinarySaveContext_t& saveContext,
				const KeyValues3* pData,
				KeyValues3BinaryType_t nType);  // 108
		PutTypeAndFlags(KV3BinarySaveContext_t& saveContext,
				const KeyValues3* pData,
				KeyValues3BinaryType_t nType);  // 322
	}
	{
		int nCount; // 337
		{
			int i; // 340
			{
				const char* pName; // 342
				int nNameSymbol; // 343
				V_strlen(const char* str); // 98
				Lock(CThreadNullMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 978
				CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::CAutoLockT(
						const CThreadNullMutex& lock,
						const char* pFilename,
						int nLineNumber);  // 318
				Hash_t::HashString(
						const char* pString,
						int nLength);  // 319
				CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 612
				IdealIndex(uint32_if32BitStorage h,
						uint32 m);  // 614
				CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 613
				CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
						uint32 slotmask);  // 618
				{
					unsigned int idx; // 621
					CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
							uint32 slotmask);  // 624
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 595
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
							int i);  // 250
					CUtlMemoryBlockAllocator::PageFromBlock(
							blockpooloffset_t nBlock);  // 508
					CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
							int i);  // 509
					CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
							int i);  // 511
					CUtlMemoryBlockAllocator::OffsetFromBlock(
							blockpooloffset_t nBlock);  // 511
					CUtlMemoryBlockAllocator::MemFromBlock(
							blockpooloffset_t nIndex);  // 250
					CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
								uint nId);  // 233
					V_strcmp(const char* s1,
						const char* s2);  // 236
					EqMatch_t::operator(
							const uint  nElement);  // 627
				}
				FindMatch<CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::EqMatch_t>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
														unsigned int nHashToMatch,
														const EqMatch_t& isMatch);  // 321
				EqMatch_t::EqMatch_t(
						const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pTable,
						const char* pString);  // 320
				Unlock(CThreadNullMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::~CAutoLockT(); // 326
				CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
						int i);  // 296
				operator[](const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
						handle_t idx);  // 324
				CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElementInternal(
							const char* pString,
							int nStringLen);  // 98
				CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElement(
						const char* pString);  // 343
				CUtlBuffer::PutInt(
					int i);  // 42
				KV3BinarySaveContext_t::PutInt32Value(
						int32 uValue);  // 344
			}
		}
		CUtlBuffer::PutInt(
			int i);  // 42
		KV3BinarySaveContext_t::PutInt32Value(
				int32 uValue);  // 338
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 355
	}
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
			int i);  // 296
	operator[](const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
			handle_t idx);  // 324
	Unlock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::~CAutoLockT(); // 326
	Lock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::CAutoLockT(
			const CThreadNullMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 318
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 319
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 612
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 614
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 613
	CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
			uint32 slotmask);  // 618
	{
		unsigned int idx; // 621
		CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
				uint32 slotmask);  // 624
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 250
		CUtlMemoryBlockAllocator::PageFromBlock(
				blockpooloffset_t nBlock);  // 508
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
				int i);  // 509
		CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
				int i);  // 511
		CUtlMemoryBlockAllocator::OffsetFromBlock(
				blockpooloffset_t nBlock);  // 511
		CUtlMemoryBlockAllocator::MemFromBlock(
				blockpooloffset_t nIndex);  // 250
		CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
					uint nId);  // 233
		V_strcmp(const char* s1,
			const char* s2);  // 236
		EqMatch_t::operator(
				const uint  nElement);  // 627
	}
	FindMatch<CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::EqMatch_t>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
											unsigned int nHashToMatch,
											const EqMatch_t& isMatch);  // 321
	EqMatch_t::EqMatch_t(
			const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pTable,
			const char* pString);  // 320
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElementInternal(
				const char* pString,
				int nStringLen);  // 98
	V_strlen(const char* str); // 98
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElement(
			const char* pString);  // 264
	CUtlBuffer::PutInt(
		int i);  // 42
	KV3BinarySaveContext_t::PutInt32Value(
			int32 uValue);  // 264
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long unsigned int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 694
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 253
	KV3BinarySaveContext_t::PutUCharValue(
			uint8 uValue);  // 233
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long int>(); // 694
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 238
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long unsigned int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 694
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 243
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<double>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<double>(); // 694
	KeyValues3::GetValueAsNumeric<double>(); // 204
	KeyValues3::GetValueDouble(); // 258
	CUtlMemory<std::pair<void const::NumAllocated(); // 1247
	CUtlMemory<std::pair<void const::Base(); // 112
	CUtlVectorBase<std::pair<void const::Base(); // 368
	CUtlVectorBase<std::pair<void const::ResetDbgInfo(); // 824
	CUtlMemory<std::pair<void const::IsGrowable(); // 823
	CUtlMemory<std::pair<void const::IsExternallyAllocated(); // 859
	CUtlMemory<std::pair<void const::IsExternallyAllocated(); // 861
	CUtlMemory<std::pair<void const::Grow(
		int num);  // 806
	CUtlVectorBase<std::pair<void const::GrowMemory(
			int num);  // 1249
	CUtlMemory<std::pair<void const::operator[](
			int i);  // 602
	CUtlVectorBase<std::pair<void const::Element(
		int i);  // 1252
	Construct<std::pair<void const*, unsigned int>, std::pair<void const*, unsigned int> >(pair<void const*, unsigned int>* pMemory); // 1252
	CUtlVectorBase<std::pair<void const::AddToTail(
			pair<void const*, unsigned int>& src);  // 51
	pair<void const::pair<void const*&, unsigned int&>(
						const void  *& __x,
						unsigned int& __y);  // 1169
	make_pair<void const*&, unsigned int&>(const void  *& __x,
						unsigned int& __y);  // 51
	KV3BinarySaveContext_t::PutBinaryBlob(
			const void* pBlob,
			uint nSize);  // 270
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long int>(); // 694
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 248
	CUtlBuffer::IsText(); // 1238
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	{
	}
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
							int count);  // 1214
	CUtlBuffer::PutTypeBin<double>(
				double src);  // 1204
	CUtlBuffer::PutTypeBin<long long unsigned int>(
						long long unsigned int src);  // 1240
	GetFmtStr<long long unsigned int>(int nRadix,
						bool bPrint);  // 1244
	CUtlBuffer::PutType<long long unsigned int>(
					long long unsigned int src);  // 1236
	CUtlBuffer::PutType<long long unsigned int>(
					long long unsigned int src);  // 1350
	CUtlBuffer::PutUnsignedInt64(
			uint64 i);  // 45
	KV3BinarySaveContext_t::PutUInt64Value(
			uint64 uValue);  // 243
	CUtlBuffer::PutTypeBin<double>(
				double src);  // 1204
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	{
	}
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
					int count);  // 1214
	CUtlBuffer::PutTypeBin<double>(
				double src);  // 1240
	CUtlBuffer::IsText(); // 1238
	GetFmtStr<double>(int nRadix,
				bool bPrint);  // 1244
	CUtlBuffer::PutType<double>(
			double src);  // 1236
	CUtlBuffer::PutType<double>(
			double src);  // 1360
	CUtlBuffer::PutDouble(
			double d);  // 47
	KV3BinarySaveContext_t::PutDoubleValue(
			double fValue);  // 258
	CUtlBuffer::IsText(); // 1238
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	{
	}
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
						int count);  // 1214
	CUtlBuffer::PutTypeBin<double>(
				double src);  // 1204
	CUtlBuffer::PutTypeBin<long long int>(
					long long int src);  // 1240
	GetFmtStr<long long int>(int nRadix,
				bool bPrint);  // 1244
	CUtlBuffer::PutType<long long int>(
				long long int src);  // 1236
	CUtlBuffer::PutType<long long int>(
				long long int src);  // 1340
	CUtlBuffer::PutInt64(
		int64 i);  // 46
	KV3BinarySaveContext_t::PutInt64Value(
			int64 uValue);  // 238
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 41
	KV3BinarySaveContext_t::PutUInt32Value(
			uint32 uValue);  // 253
	CUtlBuffer::PutInt(
		int i);  // 42
	KV3BinarySaveContext_t::PutInt32Value(
			int32 uValue);  // 248
} /* size: 0, variables: 1, inline expansions: 113 (7288 bytes) */

// <02A0BDC2> kv3lib/keyvalues3_binarywriter.cpp:217
// variables: 26
// function calls: 180
bool SaveKV3BinaryValue(KV3BinarySaveContext_t& saveContext, const KeyValues3* pData, KeyValues3BinaryType_t binaryType)
{
	const char   __FUNCTION__; // 1036
	{
		int nCount; // 276
		{
			int i; // 280
		}
		CUtlBuffer::PutInt(
			int i);  // 42
		KV3BinarySaveContext_t::PutInt32Value(
				int32 uValue);  // 277
	}
	{
		int nCount; // 292
		const KeyValues3* pElement0; // 298
		KeyValues3BinaryType_t nArrayBinaryType; // 299
		KeyValues3BinaryType_t nArrayCompactBinaryType; // 300
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 296
		}
		{
			bool bCanUseCompactFormat; // 306
			{
				int i; // 307
			}
		}
		{
			int i; // 324
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 326
			}
			KeyValues3::Internal_Type(); // 90
			KeyValues3::GetType(); // 326
			KeyValues3::Internal_Type(); // 90
			KeyValues3::GetType(); // 326
		}
		CUtlBuffer::PutInt(
			int i);  // 42
		KV3BinarySaveContext_t::PutInt32Value(
				int32 uValue);  // 293
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 299
		KeyValues3::GetAllFlags(); // 110
		{
			uint8 nFlagsByte; // 112
		}
		PutTypeAndFlags(KV3BinarySaveContext_t& saveContext,
				const KeyValues3* pData,
				KeyValues3BinaryType_t nType);  // 108
		PutTypeAndFlags(KV3BinarySaveContext_t& saveContext,
				const KeyValues3* pData,
				KeyValues3BinaryType_t nType);  // 322
	}
	{
		int nCount; // 337
		{
			int i; // 340
			{
				const char* pName; // 342
				int nNameSymbol; // 343
				V_strlen(const char* str); // 98
				Lock(CThreadNullMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 978
				CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::CAutoLockT(
						const CThreadNullMutex& lock,
						const char* pFilename,
						int nLineNumber);  // 318
				Hash_t::HashString(
						const char* pString,
						int nLength);  // 319
				CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 612
				IdealIndex(uint32_if32BitStorage h,
						uint32 m);  // 614
				CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 613
				CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
						uint32 slotmask);  // 618
				{
					unsigned int idx; // 621
					CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
							uint32 slotmask);  // 624
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 595
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
							int i);  // 250
					CUtlMemoryBlockAllocator::PageFromBlock(
							blockpooloffset_t nBlock);  // 508
					CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
							int i);  // 509
					CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
							int i);  // 511
					CUtlMemoryBlockAllocator::OffsetFromBlock(
							blockpooloffset_t nBlock);  // 511
					CUtlMemoryBlockAllocator::MemFromBlock(
							blockpooloffset_t nIndex);  // 250
					CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
								uint nId);  // 233
					V_strcmp(const char* s1,
						const char* s2);  // 236
					EqMatch_t::operator(
							const uint  nElement);  // 627
				}
				FindMatch<CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::EqMatch_t>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
														unsigned int nHashToMatch,
														const EqMatch_t& isMatch);  // 321
				EqMatch_t::EqMatch_t(
						const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pTable,
						const char* pString);  // 320
				Unlock(CThreadNullMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::~CAutoLockT(); // 326
				CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
						int i);  // 296
				operator[](const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
						handle_t idx);  // 324
				CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElementInternal(
							const char* pString,
							int nStringLen);  // 98
				CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElement(
						const char* pString);  // 343
				CUtlBuffer::PutInt(
					int i);  // 42
				KV3BinarySaveContext_t::PutInt32Value(
						int32 uValue);  // 344
			}
		}
		CUtlBuffer::PutInt(
			int i);  // 42
		KV3BinarySaveContext_t::PutInt32Value(
				int32 uValue);  // 338
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 355
	}
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
			int i);  // 296
	operator[](const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
			handle_t idx);  // 324
	Unlock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::~CAutoLockT(); // 326
	Lock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::CAutoLockT(
			const CThreadNullMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 318
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 319
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 612
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 614
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 613
	CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
			uint32 slotmask);  // 618
	{
		unsigned int idx; // 621
		CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
				uint32 slotmask);  // 624
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 250
		CUtlMemoryBlockAllocator::PageFromBlock(
				blockpooloffset_t nBlock);  // 508
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
				int i);  // 509
		CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
				int i);  // 511
		CUtlMemoryBlockAllocator::OffsetFromBlock(
				blockpooloffset_t nBlock);  // 511
		CUtlMemoryBlockAllocator::MemFromBlock(
				blockpooloffset_t nIndex);  // 250
		CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
					uint nId);  // 233
		V_strcmp(const char* s1,
			const char* s2);  // 236
		EqMatch_t::operator(
				const uint  nElement);  // 627
	}
	FindMatch<CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::EqMatch_t>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
											unsigned int nHashToMatch,
											const EqMatch_t& isMatch);  // 321
	EqMatch_t::EqMatch_t(
			const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pTable,
			const char* pString);  // 320
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElementInternal(
				const char* pString,
				int nStringLen);  // 98
	V_strlen(const char* str); // 98
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElement(
			const char* pString);  // 264
	CUtlBuffer::PutInt(
		int i);  // 42
	KV3BinarySaveContext_t::PutInt32Value(
			int32 uValue);  // 264
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long unsigned int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 694
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 253
	KV3BinarySaveContext_t::PutUCharValue(
			uint8 uValue);  // 233
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long int>(); // 694
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 238
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long unsigned int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 694
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 243
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<double>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<double>(); // 694
	KeyValues3::GetValueAsNumeric<double>(); // 204
	KeyValues3::GetValueDouble(); // 258
	CUtlMemory<std::pair<void const::NumAllocated(); // 1247
	CUtlMemory<std::pair<void const::Base(); // 112
	CUtlVectorBase<std::pair<void const::Base(); // 368
	CUtlVectorBase<std::pair<void const::ResetDbgInfo(); // 824
	CUtlMemory<std::pair<void const::IsGrowable(); // 823
	CUtlMemory<std::pair<void const::IsExternallyAllocated(); // 859
	CUtlMemory<std::pair<void const::IsExternallyAllocated(); // 861
	CUtlMemory<std::pair<void const::Grow(
		int num);  // 806
	CUtlVectorBase<std::pair<void const::GrowMemory(
			int num);  // 1249
	CUtlMemory<std::pair<void const::operator[](
			int i);  // 602
	CUtlVectorBase<std::pair<void const::Element(
		int i);  // 1252
	Construct<std::pair<void const*, unsigned int>, std::pair<void const*, unsigned int> >(pair<void const*, unsigned int>* pMemory); // 1252
	CUtlVectorBase<std::pair<void const::AddToTail(
			pair<void const*, unsigned int>& src);  // 51
	pair<void const::pair<void const*&, unsigned int&>(
						const void  *& __x,
						unsigned int& __y);  // 1169
	make_pair<void const*&, unsigned int&>(const void  *& __x,
						unsigned int& __y);  // 51
	KV3BinarySaveContext_t::PutBinaryBlob(
			const void* pBlob,
			uint nSize);  // 270
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long int>(); // 694
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 248
	CUtlBuffer::IsText(); // 1238
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	{
	}
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
							int count);  // 1214
	CUtlBuffer::PutTypeBin<double>(
				double src);  // 1204
	CUtlBuffer::PutTypeBin<long long unsigned int>(
						long long unsigned int src);  // 1240
	GetFmtStr<long long unsigned int>(int nRadix,
						bool bPrint);  // 1244
	CUtlBuffer::PutType<long long unsigned int>(
					long long unsigned int src);  // 1236
	CUtlBuffer::PutType<long long unsigned int>(
					long long unsigned int src);  // 1350
	CUtlBuffer::PutUnsignedInt64(
			uint64 i);  // 45
	KV3BinarySaveContext_t::PutUInt64Value(
			uint64 uValue);  // 243
	CUtlBuffer::PutTypeBin<double>(
				double src);  // 1204
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	{
	}
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
					int count);  // 1214
	CUtlBuffer::PutTypeBin<double>(
				double src);  // 1240
	CUtlBuffer::IsText(); // 1238
	GetFmtStr<double>(int nRadix,
				bool bPrint);  // 1244
	CUtlBuffer::PutType<double>(
			double src);  // 1236
	CUtlBuffer::PutType<double>(
			double src);  // 1360
	CUtlBuffer::PutDouble(
			double d);  // 47
	KV3BinarySaveContext_t::PutDoubleValue(
			double fValue);  // 258
	CUtlBuffer::IsText(); // 1238
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	{
	}
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
						int count);  // 1214
	CUtlBuffer::PutTypeBin<double>(
				double src);  // 1204
	CUtlBuffer::PutTypeBin<long long int>(
					long long int src);  // 1240
	GetFmtStr<long long int>(int nRadix,
				bool bPrint);  // 1244
	CUtlBuffer::PutType<long long int>(
				long long int src);  // 1236
	CUtlBuffer::PutType<long long int>(
				long long int src);  // 1340
	CUtlBuffer::PutInt64(
		int64 i);  // 46
	KV3BinarySaveContext_t::PutInt64Value(
			int64 uValue);  // 238
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 41
	KV3BinarySaveContext_t::PutUInt32Value(
			uint32 uValue);  // 253
	CUtlBuffer::PutInt(
		int i);  // 42
	KV3BinarySaveContext_t::PutInt32Value(
			int32 uValue);  // 248
} /* size: 0, variables: 1, inline expansions: 113 (7288 bytes) */

// <0135B977> kv3lib/keyvalues3_binarywriter.cpp:217
// variables: 26
// function calls: 180
bool SaveKV3BinaryValue(KV3BinarySaveContext_t& saveContext, const KeyValues3* pData, KeyValues3BinaryType_t binaryType)
{
	const char   __FUNCTION__; // 6015
	{
		int nCount; // 276
		{
			int i; // 280
		}
		CUtlBuffer::PutInt(
			int i);  // 42
		KV3BinarySaveContext_t::PutInt32Value(
				int32 uValue);  // 277
	}
	{
		int nCount; // 292
		const KeyValues3* pElement0; // 298
		KeyValues3BinaryType_t nArrayBinaryType; // 299
		KeyValues3BinaryType_t nArrayCompactBinaryType; // 300
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 296
		}
		{
			bool bCanUseCompactFormat; // 306
			{
				int i; // 307
			}
		}
		{
			int i; // 324
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 326
			}
			KeyValues3::Internal_Type(); // 90
			KeyValues3::GetType(); // 326
			KeyValues3::Internal_Type(); // 90
			KeyValues3::GetType(); // 326
		}
		CUtlBuffer::PutInt(
			int i);  // 42
		KV3BinarySaveContext_t::PutInt32Value(
				int32 uValue);  // 293
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 299
		KeyValues3::GetAllFlags(); // 110
		{
			uint8 nFlagsByte; // 112
		}
		PutTypeAndFlags(KV3BinarySaveContext_t& saveContext,
				const KeyValues3* pData,
				KeyValues3BinaryType_t nType);  // 108
		PutTypeAndFlags(KV3BinarySaveContext_t& saveContext,
				const KeyValues3* pData,
				KeyValues3BinaryType_t nType);  // 322
	}
	{
		int nCount; // 337
		{
			int i; // 340
			{
				const char* pName; // 342
				int nNameSymbol; // 343
				V_strlen(const char* str); // 98
				Lock(CThreadNullMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 978
				CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::CAutoLockT(
						const CThreadNullMutex& lock,
						const char* pFilename,
						int nLineNumber);  // 318
				Hash_t::HashString(
						const char* pString,
						int nLength);  // 319
				CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 612
				IdealIndex(uint32_if32BitStorage h,
						uint32 m);  // 614
				CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 613
				CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
						uint32 slotmask);  // 618
				{
					unsigned int idx; // 621
					CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
							uint32 slotmask);  // 624
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 595
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
							int i);  // 250
					CUtlMemoryBlockAllocator::PageFromBlock(
							blockpooloffset_t nBlock);  // 508
					CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
							int i);  // 509
					CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
							int i);  // 511
					CUtlMemoryBlockAllocator::OffsetFromBlock(
							blockpooloffset_t nBlock);  // 511
					CUtlMemoryBlockAllocator::MemFromBlock(
							blockpooloffset_t nIndex);  // 250
					CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
								uint nId);  // 233
					V_strcmp(const char* s1,
						const char* s2);  // 236
					EqMatch_t::operator(
							const uint  nElement);  // 627
				}
				FindMatch<CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::EqMatch_t>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
														unsigned int nHashToMatch,
														const EqMatch_t& isMatch);  // 321
				EqMatch_t::EqMatch_t(
						const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pTable,
						const char* pString);  // 320
				Unlock(CThreadNullMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::~CAutoLockT(); // 326
				CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
						int i);  // 296
				operator[](const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
						handle_t idx);  // 324
				CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElementInternal(
							const char* pString,
							int nStringLen);  // 98
				CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElement(
						const char* pString);  // 343
				CUtlBuffer::PutInt(
					int i);  // 42
				KV3BinarySaveContext_t::PutInt32Value(
						int32 uValue);  // 344
			}
		}
		CUtlBuffer::PutInt(
			int i);  // 42
		KV3BinarySaveContext_t::PutInt32Value(
				int32 uValue);  // 338
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 355
	}
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
			int i);  // 296
	operator[](const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
			handle_t idx);  // 324
	Unlock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::~CAutoLockT(); // 326
	Lock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::CAutoLockT(
			const CThreadNullMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 318
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 319
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 612
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 614
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 613
	CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
			uint32 slotmask);  // 618
	{
		unsigned int idx; // 621
		CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
				uint32 slotmask);  // 624
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 250
		CUtlMemoryBlockAllocator::PageFromBlock(
				blockpooloffset_t nBlock);  // 508
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
				int i);  // 509
		CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
				int i);  // 511
		CUtlMemoryBlockAllocator::OffsetFromBlock(
				blockpooloffset_t nBlock);  // 511
		CUtlMemoryBlockAllocator::MemFromBlock(
				blockpooloffset_t nIndex);  // 250
		CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
					uint nId);  // 233
		V_strcmp(const char* s1,
			const char* s2);  // 236
		EqMatch_t::operator(
				const uint  nElement);  // 627
	}
	FindMatch<CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::EqMatch_t>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
											unsigned int nHashToMatch,
											const EqMatch_t& isMatch);  // 321
	EqMatch_t::EqMatch_t(
			const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pTable,
			const char* pString);  // 320
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElementInternal(
				const char* pString,
				int nStringLen);  // 98
	V_strlen(const char* str); // 98
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElement(
			const char* pString);  // 264
	CUtlBuffer::PutInt(
		int i);  // 42
	KV3BinarySaveContext_t::PutInt32Value(
			int32 uValue);  // 264
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long unsigned int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 694
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 253
	KV3BinarySaveContext_t::PutUCharValue(
			uint8 uValue);  // 233
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long int>(); // 694
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 238
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long unsigned int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 694
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 243
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<double>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<double>(); // 694
	KeyValues3::GetValueAsNumeric<double>(); // 204
	KeyValues3::GetValueDouble(); // 258
	CUtlMemory<std::pair<void const::NumAllocated(); // 1247
	CUtlMemory<std::pair<void const::Base(); // 112
	CUtlVectorBase<std::pair<void const::Base(); // 368
	CUtlVectorBase<std::pair<void const::ResetDbgInfo(); // 824
	CUtlMemory<std::pair<void const::IsGrowable(); // 823
	CUtlMemory<std::pair<void const::IsExternallyAllocated(); // 859
	CUtlMemory<std::pair<void const::IsExternallyAllocated(); // 861
	CUtlMemory<std::pair<void const::Grow(
		int num);  // 806
	CUtlVectorBase<std::pair<void const::GrowMemory(
			int num);  // 1249
	CUtlMemory<std::pair<void const::operator[](
			int i);  // 602
	CUtlVectorBase<std::pair<void const::Element(
		int i);  // 1252
	Construct<std::pair<void const*, unsigned int>, std::pair<void const*, unsigned int> >(pair<void const*, unsigned int>* pMemory); // 1252
	CUtlVectorBase<std::pair<void const::AddToTail(
			pair<void const*, unsigned int>& src);  // 51
	pair<void const::pair<void const*&, unsigned int&>(
						const void  *& __x,
						unsigned int& __y);  // 1169
	make_pair<void const*&, unsigned int&>(const void  *& __x,
						unsigned int& __y);  // 51
	KV3BinarySaveContext_t::PutBinaryBlob(
			const void* pBlob,
			uint nSize);  // 270
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long int>(); // 694
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 248
	CUtlBuffer::IsText(); // 1238
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	{
	}
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
							int count);  // 1214
	CUtlBuffer::PutTypeBin<double>(
				double src);  // 1204
	CUtlBuffer::PutTypeBin<long long unsigned int>(
						long long unsigned int src);  // 1240
	GetFmtStr<long long unsigned int>(int nRadix,
						bool bPrint);  // 1244
	CUtlBuffer::PutType<long long unsigned int>(
					long long unsigned int src);  // 1236
	CUtlBuffer::PutType<long long unsigned int>(
					long long unsigned int src);  // 1350
	CUtlBuffer::PutUnsignedInt64(
			uint64 i);  // 45
	KV3BinarySaveContext_t::PutUInt64Value(
			uint64 uValue);  // 243
	CUtlBuffer::PutTypeBin<double>(
				double src);  // 1204
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	{
	}
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
					int count);  // 1214
	CUtlBuffer::PutTypeBin<double>(
				double src);  // 1240
	CUtlBuffer::IsText(); // 1238
	GetFmtStr<double>(int nRadix,
				bool bPrint);  // 1244
	CUtlBuffer::PutType<double>(
			double src);  // 1236
	CUtlBuffer::PutType<double>(
			double src);  // 1360
	CUtlBuffer::PutDouble(
			double d);  // 47
	KV3BinarySaveContext_t::PutDoubleValue(
			double fValue);  // 258
	CUtlBuffer::IsText(); // 1238
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	{
	}
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
						int count);  // 1214
	CUtlBuffer::PutTypeBin<double>(
				double src);  // 1204
	CUtlBuffer::PutTypeBin<long long int>(
					long long int src);  // 1240
	GetFmtStr<long long int>(int nRadix,
				bool bPrint);  // 1244
	CUtlBuffer::PutType<long long int>(
				long long int src);  // 1236
	CUtlBuffer::PutType<long long int>(
				long long int src);  // 1340
	CUtlBuffer::PutInt64(
		int64 i);  // 46
	KV3BinarySaveContext_t::PutInt64Value(
			int64 uValue);  // 238
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 41
	KV3BinarySaveContext_t::PutUInt32Value(
			uint32 uValue);  // 253
	CUtlBuffer::PutInt(
		int i);  // 42
	KV3BinarySaveContext_t::PutInt32Value(
			int32 uValue);  // 248
} /* size: 0, variables: 1, inline expansions: 113 (7288 bytes) */

// <003D713C> kv3lib/keyvalues3_binarywriter.cpp:217
// variables: 26
// function calls: 180
bool SaveKV3BinaryValue(KV3BinarySaveContext_t& saveContext, const KeyValues3* pData, KeyValues3BinaryType_t binaryType)
{
	const char   __FUNCTION__; // 57718
	{
		int nCount; // 276
		{
			int i; // 280
		}
		CUtlBuffer::PutInt(
			int i);  // 42
		KV3BinarySaveContext_t::PutInt32Value(
				int32 uValue);  // 277
	}
	{
		int nCount; // 292
		const KeyValues3* pElement0; // 298
		KeyValues3BinaryType_t nArrayBinaryType; // 299
		KeyValues3BinaryType_t nArrayCompactBinaryType; // 300
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 296
		}
		{
			bool bCanUseCompactFormat; // 306
			{
				int i; // 307
			}
		}
		{
			int i; // 324
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 326
			}
			KeyValues3::Internal_Type(); // 90
			KeyValues3::GetType(); // 326
			KeyValues3::Internal_Type(); // 90
			KeyValues3::GetType(); // 326
		}
		CUtlBuffer::PutInt(
			int i);  // 42
		KV3BinarySaveContext_t::PutInt32Value(
				int32 uValue);  // 293
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 299
		KeyValues3::GetAllFlags(); // 110
		{
			uint8 nFlagsByte; // 112
		}
		PutTypeAndFlags(KV3BinarySaveContext_t& saveContext,
				const KeyValues3* pData,
				KeyValues3BinaryType_t nType);  // 108
		PutTypeAndFlags(KV3BinarySaveContext_t& saveContext,
				const KeyValues3* pData,
				KeyValues3BinaryType_t nType);  // 322
	}
	{
		int nCount; // 337
		{
			int i; // 340
			{
				const char* pName; // 342
				int nNameSymbol; // 343
				V_strlen(const char* str); // 98
				Lock(CThreadNullMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 978
				CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::CAutoLockT(
						const CThreadNullMutex& lock,
						const char* pFilename,
						int nLineNumber);  // 318
				Hash_t::HashString(
						const char* pString,
						int nLength);  // 319
				CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 612
				IdealIndex(uint32_if32BitStorage h,
						uint32 m);  // 614
				CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 613
				CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
						uint32 slotmask);  // 618
				{
					unsigned int idx; // 621
					CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
							uint32 slotmask);  // 624
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 595
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
							int i);  // 250
					CUtlMemoryBlockAllocator::PageFromBlock(
							blockpooloffset_t nBlock);  // 508
					CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
							int i);  // 509
					CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
							int i);  // 511
					CUtlMemoryBlockAllocator::OffsetFromBlock(
							blockpooloffset_t nBlock);  // 511
					CUtlMemoryBlockAllocator::MemFromBlock(
							blockpooloffset_t nIndex);  // 250
					CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
								uint nId);  // 233
					V_strcmp(const char* s1,
						const char* s2);  // 236
					EqMatch_t::operator(
							const uint  nElement);  // 627
				}
				FindMatch<CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::EqMatch_t>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
														unsigned int nHashToMatch,
														const EqMatch_t& isMatch);  // 321
				EqMatch_t::EqMatch_t(
						const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pTable,
						const char* pString);  // 320
				Unlock(CThreadNullMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::~CAutoLockT(); // 326
				CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
						int i);  // 296
				operator[](const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
						handle_t idx);  // 324
				CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElementInternal(
							const char* pString,
							int nStringLen);  // 98
				CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElement(
						const char* pString);  // 343
				CUtlBuffer::PutInt(
					int i);  // 42
				KV3BinarySaveContext_t::PutInt32Value(
						int32 uValue);  // 344
			}
		}
		CUtlBuffer::PutInt(
			int i);  // 42
		KV3BinarySaveContext_t::PutInt32Value(
				int32 uValue);  // 338
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 355
	}
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
			int i);  // 296
	operator[](const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
			handle_t idx);  // 324
	Unlock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::~CAutoLockT(); // 326
	Lock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::CAutoLockT(
			const CThreadNullMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 318
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 319
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 612
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 614
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 613
	CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
			uint32 slotmask);  // 618
	{
		unsigned int idx; // 621
		CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
				uint32 slotmask);  // 624
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 250
		CUtlMemoryBlockAllocator::PageFromBlock(
				blockpooloffset_t nBlock);  // 508
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
				int i);  // 509
		CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
				int i);  // 511
		CUtlMemoryBlockAllocator::OffsetFromBlock(
				blockpooloffset_t nBlock);  // 511
		CUtlMemoryBlockAllocator::MemFromBlock(
				blockpooloffset_t nIndex);  // 250
		CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
					uint nId);  // 233
		V_strcmp(const char* s1,
			const char* s2);  // 236
		EqMatch_t::operator(
				const uint  nElement);  // 627
	}
	FindMatch<CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::EqMatch_t>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
											unsigned int nHashToMatch,
											const EqMatch_t& isMatch);  // 321
	EqMatch_t::EqMatch_t(
			const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pTable,
			const char* pString);  // 320
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElementInternal(
				const char* pString,
				int nStringLen);  // 98
	V_strlen(const char* str); // 98
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElement(
			const char* pString);  // 264
	CUtlBuffer::PutInt(
		int i);  // 42
	KV3BinarySaveContext_t::PutInt32Value(
			int32 uValue);  // 264
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long unsigned int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 694
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 253
	KV3BinarySaveContext_t::PutUCharValue(
			uint8 uValue);  // 233
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long int>(); // 694
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 238
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long unsigned int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 694
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 243
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<double>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<double>(); // 694
	KeyValues3::GetValueAsNumeric<double>(); // 204
	KeyValues3::GetValueDouble(); // 258
	CUtlMemory<std::pair<void const::NumAllocated(); // 1247
	CUtlMemory<std::pair<void const::Base(); // 112
	CUtlVectorBase<std::pair<void const::Base(); // 368
	CUtlVectorBase<std::pair<void const::ResetDbgInfo(); // 824
	CUtlMemory<std::pair<void const::IsGrowable(); // 823
	CUtlMemory<std::pair<void const::IsExternallyAllocated(); // 859
	CUtlMemory<std::pair<void const::IsExternallyAllocated(); // 861
	CUtlMemory<std::pair<void const::Grow(
		int num);  // 806
	CUtlVectorBase<std::pair<void const::GrowMemory(
			int num);  // 1249
	CUtlMemory<std::pair<void const::operator[](
			int i);  // 602
	CUtlVectorBase<std::pair<void const::Element(
		int i);  // 1252
	Construct<std::pair<void const*, unsigned int>, std::pair<void const*, unsigned int> >(pair<void const*, unsigned int>* pMemory); // 1252
	CUtlVectorBase<std::pair<void const::AddToTail(
			pair<void const*, unsigned int>& src);  // 51
	pair<void const::pair<void const*&, unsigned int&>(
						const void  *& __x,
						unsigned int& __y);  // 1169
	make_pair<void const*&, unsigned int&>(const void  *& __x,
						unsigned int& __y);  // 51
	KV3BinarySaveContext_t::PutBinaryBlob(
			const void* pBlob,
			uint nSize);  // 270
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long int>(); // 694
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 248
	CUtlBuffer::IsText(); // 1238
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	{
	}
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
							int count);  // 1214
	CUtlBuffer::PutTypeBin<double>(
				double src);  // 1204
	CUtlBuffer::PutTypeBin<long long unsigned int>(
						long long unsigned int src);  // 1240
	GetFmtStr<long long unsigned int>(int nRadix,
						bool bPrint);  // 1244
	CUtlBuffer::PutType<long long unsigned int>(
					long long unsigned int src);  // 1236
	CUtlBuffer::PutType<long long unsigned int>(
					long long unsigned int src);  // 1350
	CUtlBuffer::PutUnsignedInt64(
			uint64 i);  // 45
	KV3BinarySaveContext_t::PutUInt64Value(
			uint64 uValue);  // 243
	CUtlBuffer::PutTypeBin<double>(
				double src);  // 1204
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	{
	}
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
					int count);  // 1214
	CUtlBuffer::PutTypeBin<double>(
				double src);  // 1240
	CUtlBuffer::IsText(); // 1238
	GetFmtStr<double>(int nRadix,
				bool bPrint);  // 1244
	CUtlBuffer::PutType<double>(
			double src);  // 1236
	CUtlBuffer::PutType<double>(
			double src);  // 1360
	CUtlBuffer::PutDouble(
			double d);  // 47
	KV3BinarySaveContext_t::PutDoubleValue(
			double fValue);  // 258
	CUtlBuffer::IsText(); // 1238
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	{
	}
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
						int count);  // 1214
	CUtlBuffer::PutTypeBin<double>(
				double src);  // 1204
	CUtlBuffer::PutTypeBin<long long int>(
					long long int src);  // 1240
	GetFmtStr<long long int>(int nRadix,
				bool bPrint);  // 1244
	CUtlBuffer::PutType<long long int>(
				long long int src);  // 1236
	CUtlBuffer::PutType<long long int>(
				long long int src);  // 1340
	CUtlBuffer::PutInt64(
		int64 i);  // 46
	KV3BinarySaveContext_t::PutInt64Value(
			int64 uValue);  // 238
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 41
	KV3BinarySaveContext_t::PutUInt32Value(
			uint32 uValue);  // 253
	CUtlBuffer::PutInt(
		int i);  // 42
	KV3BinarySaveContext_t::PutInt32Value(
			int32 uValue);  // 248
} /* size: 0, variables: 1, inline expansions: 113 (0 bytes) */

// <0073C33E> kv3lib/keyvalues3_binarywriter.cpp:217
// variables: 26
// function calls: 180
bool SaveKV3BinaryValue(KV3BinarySaveContext_t& saveContext, const KeyValues3* pData, KeyValues3BinaryType_t binaryType)
{
	const char   __FUNCTION__; // 18168
	{
		int nCount; // 276
		{
			int i; // 280
		}
		CUtlBuffer::PutInt(
			int i);  // 42
		KV3BinarySaveContext_t::PutInt32Value(
				int32 uValue);  // 277
	}
	{
		int nCount; // 292
		const KeyValues3* pElement0; // 298
		KeyValues3BinaryType_t nArrayBinaryType; // 299
		KeyValues3BinaryType_t nArrayCompactBinaryType; // 300
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 296
		}
		{
			bool bCanUseCompactFormat; // 306
			{
				int i; // 307
			}
		}
		{
			int i; // 324
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 326
			}
			KeyValues3::Internal_Type(); // 90
			KeyValues3::GetType(); // 326
			KeyValues3::Internal_Type(); // 90
			KeyValues3::GetType(); // 326
		}
		CUtlBuffer::PutInt(
			int i);  // 42
		KV3BinarySaveContext_t::PutInt32Value(
				int32 uValue);  // 293
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 299
		KeyValues3::GetAllFlags(); // 110
		{
			uint8 nFlagsByte; // 112
		}
		PutTypeAndFlags(KV3BinarySaveContext_t& saveContext,
				const KeyValues3* pData,
				KeyValues3BinaryType_t nType);  // 108
		PutTypeAndFlags(KV3BinarySaveContext_t& saveContext,
				const KeyValues3* pData,
				KeyValues3BinaryType_t nType);  // 322
	}
	{
		int nCount; // 337
		{
			int i; // 340
			{
				const char* pName; // 342
				int nNameSymbol; // 343
				V_strlen(const char* str); // 98
				Lock(CThreadNullMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 978
				CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::CAutoLockT(
						const CThreadNullMutex& lock,
						const char* pFilename,
						int nLineNumber);  // 318
				Hash_t::HashString(
						const char* pString,
						int nLength);  // 319
				CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 612
				IdealIndex(uint32_if32BitStorage h,
						uint32 m);  // 614
				CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 613
				CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
						uint32 slotmask);  // 618
				{
					unsigned int idx; // 621
					CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
							uint32 slotmask);  // 624
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 595
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
							int i);  // 250
					CUtlMemoryBlockAllocator::PageFromBlock(
							blockpooloffset_t nBlock);  // 508
					CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
							int i);  // 509
					CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
							int i);  // 511
					CUtlMemoryBlockAllocator::OffsetFromBlock(
							blockpooloffset_t nBlock);  // 511
					CUtlMemoryBlockAllocator::MemFromBlock(
							blockpooloffset_t nIndex);  // 250
					CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
								uint nId);  // 233
					V_strcmp(const char* s1,
						const char* s2);  // 236
					EqMatch_t::operator(
							const uint  nElement);  // 627
				}
				FindMatch<CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::EqMatch_t>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
														unsigned int nHashToMatch,
														const EqMatch_t& isMatch);  // 321
				EqMatch_t::EqMatch_t(
						const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pTable,
						const char* pString);  // 320
				Unlock(CThreadNullMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::~CAutoLockT(); // 326
				CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
						int i);  // 296
				operator[](const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
						handle_t idx);  // 324
				CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElementInternal(
							const char* pString,
							int nStringLen);  // 98
				CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElement(
						const char* pString);  // 343
				CUtlBuffer::PutInt(
					int i);  // 42
				KV3BinarySaveContext_t::PutInt32Value(
						int32 uValue);  // 344
			}
		}
		CUtlBuffer::PutInt(
			int i);  // 42
		KV3BinarySaveContext_t::PutInt32Value(
				int32 uValue);  // 338
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 355
	}
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
			int i);  // 296
	operator[](const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
			handle_t idx);  // 324
	Unlock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::~CAutoLockT(); // 326
	Lock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::CAutoLockT(
			const CThreadNullMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 318
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 319
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 612
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 614
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 613
	CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
			uint32 slotmask);  // 618
	{
		unsigned int idx; // 621
		CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
				uint32 slotmask);  // 624
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 250
		CUtlMemoryBlockAllocator::PageFromBlock(
				blockpooloffset_t nBlock);  // 508
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
				int i);  // 509
		CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
				int i);  // 511
		CUtlMemoryBlockAllocator::OffsetFromBlock(
				blockpooloffset_t nBlock);  // 511
		CUtlMemoryBlockAllocator::MemFromBlock(
				blockpooloffset_t nIndex);  // 250
		CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
					uint nId);  // 233
		V_strcmp(const char* s1,
			const char* s2);  // 236
		EqMatch_t::operator(
				const uint  nElement);  // 627
	}
	FindMatch<CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::EqMatch_t>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
											unsigned int nHashToMatch,
											const EqMatch_t& isMatch);  // 321
	EqMatch_t::EqMatch_t(
			const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pTable,
			const char* pString);  // 320
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElementInternal(
				const char* pString,
				int nStringLen);  // 98
	V_strlen(const char* str); // 98
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElement(
			const char* pString);  // 264
	CUtlBuffer::PutInt(
		int i);  // 42
	KV3BinarySaveContext_t::PutInt32Value(
			int32 uValue);  // 264
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long unsigned int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 694
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 253
	KV3BinarySaveContext_t::PutUCharValue(
			uint8 uValue);  // 233
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long int>(); // 694
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 238
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long unsigned int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 694
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 243
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<double>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<double>(); // 694
	KeyValues3::GetValueAsNumeric<double>(); // 204
	KeyValues3::GetValueDouble(); // 258
	CUtlMemory<std::pair<void const::NumAllocated(); // 1247
	CUtlMemory<std::pair<void const::Base(); // 112
	CUtlVectorBase<std::pair<void const::Base(); // 368
	CUtlVectorBase<std::pair<void const::ResetDbgInfo(); // 824
	CUtlMemory<std::pair<void const::IsGrowable(); // 823
	CUtlMemory<std::pair<void const::IsExternallyAllocated(); // 859
	CUtlMemory<std::pair<void const::IsExternallyAllocated(); // 861
	CUtlMemory<std::pair<void const::Grow(
		int num);  // 806
	CUtlVectorBase<std::pair<void const::GrowMemory(
			int num);  // 1249
	CUtlMemory<std::pair<void const::operator[](
			int i);  // 602
	CUtlVectorBase<std::pair<void const::Element(
		int i);  // 1252
	Construct<std::pair<void const*, unsigned int>, std::pair<void const*, unsigned int> >(pair<void const*, unsigned int>* pMemory); // 1252
	CUtlVectorBase<std::pair<void const::AddToTail(
			pair<void const*, unsigned int>& src);  // 51
	pair<void const::pair<void const*&, unsigned int&>(
						const void  *& __x,
						unsigned int& __y);  // 1169
	make_pair<void const*&, unsigned int&>(const void  *& __x,
						unsigned int& __y);  // 51
	KV3BinarySaveContext_t::PutBinaryBlob(
			const void* pBlob,
			uint nSize);  // 270
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long int>(); // 694
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 248
	CUtlBuffer::IsText(); // 1238
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	{
	}
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
							int count);  // 1214
	CUtlBuffer::PutTypeBin<double>(
				double src);  // 1204
	CUtlBuffer::PutTypeBin<long long unsigned int>(
						long long unsigned int src);  // 1240
	GetFmtStr<long long unsigned int>(int nRadix,
						bool bPrint);  // 1244
	CUtlBuffer::PutType<long long unsigned int>(
					long long unsigned int src);  // 1236
	CUtlBuffer::PutType<long long unsigned int>(
					long long unsigned int src);  // 1350
	CUtlBuffer::PutUnsignedInt64(
			uint64 i);  // 45
	KV3BinarySaveContext_t::PutUInt64Value(
			uint64 uValue);  // 243
	CUtlBuffer::PutTypeBin<double>(
				double src);  // 1204
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	{
	}
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
					int count);  // 1214
	CUtlBuffer::PutTypeBin<double>(
				double src);  // 1240
	CUtlBuffer::IsText(); // 1238
	GetFmtStr<double>(int nRadix,
				bool bPrint);  // 1244
	CUtlBuffer::PutType<double>(
			double src);  // 1236
	CUtlBuffer::PutType<double>(
			double src);  // 1360
	CUtlBuffer::PutDouble(
			double d);  // 47
	KV3BinarySaveContext_t::PutDoubleValue(
			double fValue);  // 258
	CUtlBuffer::IsText(); // 1238
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	{
	}
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
						int count);  // 1214
	CUtlBuffer::PutTypeBin<double>(
				double src);  // 1204
	CUtlBuffer::PutTypeBin<long long int>(
					long long int src);  // 1240
	GetFmtStr<long long int>(int nRadix,
				bool bPrint);  // 1244
	CUtlBuffer::PutType<long long int>(
				long long int src);  // 1236
	CUtlBuffer::PutType<long long int>(
				long long int src);  // 1340
	CUtlBuffer::PutInt64(
		int64 i);  // 46
	KV3BinarySaveContext_t::PutInt64Value(
			int64 uValue);  // 238
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 41
	KV3BinarySaveContext_t::PutUInt32Value(
			uint32 uValue);  // 253
	CUtlBuffer::PutInt(
		int i);  // 42
	KV3BinarySaveContext_t::PutInt32Value(
			int32 uValue);  // 248
} /* size: 0, variables: 1, inline expansions: 113 (0 bytes) */

// <00B13FC5> kv3lib/keyvalues3_binarywriter.cpp:217
// variables: 26
// function calls: 180
bool SaveKV3BinaryValue(KV3BinarySaveContext_t& saveContext, const KeyValues3* pData, KeyValues3BinaryType_t binaryType)
{
	const char   __FUNCTION__; // 24319
	{
		int nCount; // 276
		{
			int i; // 280
		}
		CUtlBuffer::PutInt(
			int i);  // 42
		KV3BinarySaveContext_t::PutInt32Value(
				int32 uValue);  // 277
	}
	{
		int nCount; // 292
		const KeyValues3* pElement0; // 298
		KeyValues3BinaryType_t nArrayBinaryType; // 299
		KeyValues3BinaryType_t nArrayCompactBinaryType; // 300
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 296
		}
		{
			bool bCanUseCompactFormat; // 306
			{
				int i; // 307
			}
		}
		{
			int i; // 324
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 326
			}
			KeyValues3::Internal_Type(); // 90
			KeyValues3::GetType(); // 326
			KeyValues3::Internal_Type(); // 90
			KeyValues3::GetType(); // 326
		}
		CUtlBuffer::PutInt(
			int i);  // 42
		KV3BinarySaveContext_t::PutInt32Value(
				int32 uValue);  // 293
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 299
		KeyValues3::GetAllFlags(); // 110
		{
			uint8 nFlagsByte; // 112
		}
		PutTypeAndFlags(KV3BinarySaveContext_t& saveContext,
				const KeyValues3* pData,
				KeyValues3BinaryType_t nType);  // 108
		PutTypeAndFlags(KV3BinarySaveContext_t& saveContext,
				const KeyValues3* pData,
				KeyValues3BinaryType_t nType);  // 322
	}
	{
		int nCount; // 337
		{
			int i; // 340
			{
				const char* pName; // 342
				int nNameSymbol; // 343
				V_strlen(const char* str); // 98
				Lock(CThreadNullMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 978
				CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::CAutoLockT(
						const CThreadNullMutex& lock,
						const char* pFilename,
						int nLineNumber);  // 318
				Hash_t::HashString(
						const char* pString,
						int nLength);  // 319
				CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 612
				IdealIndex(uint32_if32BitStorage h,
						uint32 m);  // 614
				CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 613
				CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
						uint32 slotmask);  // 618
				{
					unsigned int idx; // 621
					CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
							uint32 slotmask);  // 624
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 595
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
							int i);  // 250
					CUtlMemoryBlockAllocator::PageFromBlock(
							blockpooloffset_t nBlock);  // 508
					CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
							int i);  // 509
					CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
							int i);  // 511
					CUtlMemoryBlockAllocator::OffsetFromBlock(
							blockpooloffset_t nBlock);  // 511
					CUtlMemoryBlockAllocator::MemFromBlock(
							blockpooloffset_t nIndex);  // 250
					CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
								uint nId);  // 233
					V_strcmp(const char* s1,
						const char* s2);  // 236
					EqMatch_t::operator(
							const uint  nElement);  // 627
				}
				FindMatch<CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::EqMatch_t>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
														unsigned int nHashToMatch,
														const EqMatch_t& isMatch);  // 321
				EqMatch_t::EqMatch_t(
						const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pTable,
						const char* pString);  // 320
				Unlock(CThreadNullMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::~CAutoLockT(); // 326
				CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
						int i);  // 296
				operator[](const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
						handle_t idx);  // 324
				CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElementInternal(
							const char* pString,
							int nStringLen);  // 98
				CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElement(
						const char* pString);  // 343
				CUtlBuffer::PutInt(
					int i);  // 42
				KV3BinarySaveContext_t::PutInt32Value(
						int32 uValue);  // 344
			}
		}
		CUtlBuffer::PutInt(
			int i);  // 42
		KV3BinarySaveContext_t::PutInt32Value(
				int32 uValue);  // 338
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 355
	}
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
			int i);  // 296
	operator[](const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
			handle_t idx);  // 324
	Unlock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::~CAutoLockT(); // 326
	Lock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::CAutoLockT(
			const CThreadNullMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 318
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 319
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 612
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 614
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 613
	CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
			uint32 slotmask);  // 618
	{
		unsigned int idx; // 621
		CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
				uint32 slotmask);  // 624
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 250
		CUtlMemoryBlockAllocator::PageFromBlock(
				blockpooloffset_t nBlock);  // 508
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
				int i);  // 509
		CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
				int i);  // 511
		CUtlMemoryBlockAllocator::OffsetFromBlock(
				blockpooloffset_t nBlock);  // 511
		CUtlMemoryBlockAllocator::MemFromBlock(
				blockpooloffset_t nIndex);  // 250
		CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
					uint nId);  // 233
		V_strcmp(const char* s1,
			const char* s2);  // 236
		EqMatch_t::operator(
				const uint  nElement);  // 627
	}
	FindMatch<CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::EqMatch_t>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
											unsigned int nHashToMatch,
											const EqMatch_t& isMatch);  // 321
	EqMatch_t::EqMatch_t(
			const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pTable,
			const char* pString);  // 320
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElementInternal(
				const char* pString,
				int nStringLen);  // 98
	V_strlen(const char* str); // 98
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElement(
			const char* pString);  // 264
	CUtlBuffer::PutInt(
		int i);  // 42
	KV3BinarySaveContext_t::PutInt32Value(
			int32 uValue);  // 264
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long unsigned int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 694
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 253
	KV3BinarySaveContext_t::PutUCharValue(
			uint8 uValue);  // 233
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long int>(); // 694
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 238
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long unsigned int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 694
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 243
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<double>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<double>(); // 694
	KeyValues3::GetValueAsNumeric<double>(); // 204
	KeyValues3::GetValueDouble(); // 258
	CUtlMemory<std::pair<void const::NumAllocated(); // 1247
	CUtlMemory<std::pair<void const::Base(); // 112
	CUtlVectorBase<std::pair<void const::Base(); // 368
	CUtlVectorBase<std::pair<void const::ResetDbgInfo(); // 824
	CUtlMemory<std::pair<void const::IsGrowable(); // 823
	CUtlMemory<std::pair<void const::IsExternallyAllocated(); // 859
	CUtlMemory<std::pair<void const::IsExternallyAllocated(); // 861
	CUtlMemory<std::pair<void const::Grow(
		int num);  // 806
	CUtlVectorBase<std::pair<void const::GrowMemory(
			int num);  // 1249
	CUtlMemory<std::pair<void const::operator[](
			int i);  // 602
	CUtlVectorBase<std::pair<void const::Element(
		int i);  // 1252
	Construct<std::pair<void const*, unsigned int>, std::pair<void const*, unsigned int> >(pair<void const*, unsigned int>* pMemory); // 1252
	CUtlVectorBase<std::pair<void const::AddToTail(
			pair<void const*, unsigned int>& src);  // 51
	pair<void const::pair<void const*&, unsigned int&>(
						const void  *& __x,
						unsigned int& __y);  // 1169
	make_pair<void const*&, unsigned int&>(const void  *& __x,
						unsigned int& __y);  // 51
	KV3BinarySaveContext_t::PutBinaryBlob(
			const void* pBlob,
			uint nSize);  // 270
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long int>(); // 694
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 248
	CUtlBuffer::IsText(); // 1238
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	{
	}
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
							int count);  // 1214
	CUtlBuffer::PutTypeBin<double>(
				double src);  // 1204
	CUtlBuffer::PutTypeBin<long long unsigned int>(
						long long unsigned int src);  // 1240
	GetFmtStr<long long unsigned int>(int nRadix,
						bool bPrint);  // 1244
	CUtlBuffer::PutType<long long unsigned int>(
					long long unsigned int src);  // 1236
	CUtlBuffer::PutType<long long unsigned int>(
					long long unsigned int src);  // 1350
	CUtlBuffer::PutUnsignedInt64(
			uint64 i);  // 45
	KV3BinarySaveContext_t::PutUInt64Value(
			uint64 uValue);  // 243
	CUtlBuffer::PutTypeBin<double>(
				double src);  // 1204
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	{
	}
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
					int count);  // 1214
	CUtlBuffer::PutTypeBin<double>(
				double src);  // 1240
	CUtlBuffer::IsText(); // 1238
	GetFmtStr<double>(int nRadix,
				bool bPrint);  // 1244
	CUtlBuffer::PutType<double>(
			double src);  // 1236
	CUtlBuffer::PutType<double>(
			double src);  // 1360
	CUtlBuffer::PutDouble(
			double d);  // 47
	KV3BinarySaveContext_t::PutDoubleValue(
			double fValue);  // 258
	CUtlBuffer::IsText(); // 1238
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	{
	}
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
						int count);  // 1214
	CUtlBuffer::PutTypeBin<double>(
				double src);  // 1204
	CUtlBuffer::PutTypeBin<long long int>(
					long long int src);  // 1240
	GetFmtStr<long long int>(int nRadix,
				bool bPrint);  // 1244
	CUtlBuffer::PutType<long long int>(
				long long int src);  // 1236
	CUtlBuffer::PutType<long long int>(
				long long int src);  // 1340
	CUtlBuffer::PutInt64(
		int64 i);  // 46
	KV3BinarySaveContext_t::PutInt64Value(
			int64 uValue);  // 238
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 41
	KV3BinarySaveContext_t::PutUInt32Value(
			uint32 uValue);  // 253
	CUtlBuffer::PutInt(
		int i);  // 42
	KV3BinarySaveContext_t::PutInt32Value(
			int32 uValue);  // 248
} /* size: 0, variables: 1, inline expansions: 113 (0 bytes) */

// <00220B46> kv3lib/keyvalues3_binarywriter.cpp:217
// variables: 26
// function calls: 180
bool SaveKV3BinaryValue(KV3BinarySaveContext_t& saveContext, const KeyValues3* pData, KeyValues3BinaryType_t binaryType)
{
	const char   __FUNCTION__; // 16816
	{
		int nCount; // 276
		{
			int i; // 280
		}
		CUtlBuffer::PutInt(
			int i);  // 42
		KV3BinarySaveContext_t::PutInt32Value(
				int32 uValue);  // 277
	}
	{
		int nCount; // 292
		const KeyValues3* pElement0; // 298
		KeyValues3BinaryType_t nArrayBinaryType; // 299
		KeyValues3BinaryType_t nArrayCompactBinaryType; // 300
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 296
		}
		{
			bool bCanUseCompactFormat; // 306
			{
				int i; // 307
			}
		}
		{
			int i; // 324
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 326
			}
			KeyValues3::Internal_Type(); // 90
			KeyValues3::GetType(); // 326
			KeyValues3::Internal_Type(); // 90
			KeyValues3::GetType(); // 326
		}
		CUtlBuffer::PutInt(
			int i);  // 42
		KV3BinarySaveContext_t::PutInt32Value(
				int32 uValue);  // 293
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 299
		KeyValues3::GetAllFlags(); // 110
		{
			uint8 nFlagsByte; // 112
		}
		PutTypeAndFlags(KV3BinarySaveContext_t& saveContext,
				const KeyValues3* pData,
				KeyValues3BinaryType_t nType);  // 108
		PutTypeAndFlags(KV3BinarySaveContext_t& saveContext,
				const KeyValues3* pData,
				KeyValues3BinaryType_t nType);  // 322
	}
	{
		int nCount; // 337
		{
			int i; // 340
			{
				const char* pName; // 342
				int nNameSymbol; // 343
				V_strlen(const char* str); // 98
				Lock(CThreadNullMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 978
				CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::CAutoLockT(
						const CThreadNullMutex& lock,
						const char* pFilename,
						int nLineNumber);  // 318
				Hash_t::HashString(
						const char* pString,
						int nLength);  // 319
				CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 612
				IdealIndex(uint32_if32BitStorage h,
						uint32 m);  // 614
				CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 613
				CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
						uint32 slotmask);  // 618
				{
					unsigned int idx; // 621
					CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
							uint32 slotmask);  // 624
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 595
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
							int i);  // 250
					CUtlMemoryBlockAllocator::PageFromBlock(
							blockpooloffset_t nBlock);  // 508
					CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
							int i);  // 509
					CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
							int i);  // 511
					CUtlMemoryBlockAllocator::OffsetFromBlock(
							blockpooloffset_t nBlock);  // 511
					CUtlMemoryBlockAllocator::MemFromBlock(
							blockpooloffset_t nIndex);  // 250
					CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
								uint nId);  // 233
					V_strcmp(const char* s1,
						const char* s2);  // 236
					EqMatch_t::operator(
							const uint  nElement);  // 627
				}
				FindMatch<CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::EqMatch_t>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
														unsigned int nHashToMatch,
														const EqMatch_t& isMatch);  // 321
				EqMatch_t::EqMatch_t(
						const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pTable,
						const char* pString);  // 320
				Unlock(CThreadNullMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::~CAutoLockT(); // 326
				CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
						int i);  // 296
				operator[](const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
						handle_t idx);  // 324
				CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElementInternal(
							const char* pString,
							int nStringLen);  // 98
				CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElement(
						const char* pString);  // 343
				CUtlBuffer::PutInt(
					int i);  // 42
				KV3BinarySaveContext_t::PutInt32Value(
						int32 uValue);  // 344
			}
		}
		CUtlBuffer::PutInt(
			int i);  // 42
		KV3BinarySaveContext_t::PutInt32Value(
				int32 uValue);  // 338
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 355
	}
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
			int i);  // 296
	operator[](const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
			handle_t idx);  // 324
	Unlock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::~CAutoLockT(); // 326
	Lock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::CAutoLockT(
			const CThreadNullMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 318
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 319
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 612
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 614
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 613
	CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
			uint32 slotmask);  // 618
	{
		unsigned int idx; // 621
		CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
				uint32 slotmask);  // 624
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 250
		CUtlMemoryBlockAllocator::PageFromBlock(
				blockpooloffset_t nBlock);  // 508
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
				int i);  // 509
		CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
				int i);  // 511
		CUtlMemoryBlockAllocator::OffsetFromBlock(
				blockpooloffset_t nBlock);  // 511
		CUtlMemoryBlockAllocator::MemFromBlock(
				blockpooloffset_t nIndex);  // 250
		CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
					uint nId);  // 233
		V_strcmp(const char* s1,
			const char* s2);  // 236
		EqMatch_t::operator(
				const uint  nElement);  // 627
	}
	FindMatch<CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::EqMatch_t>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
											unsigned int nHashToMatch,
											const EqMatch_t& isMatch);  // 321
	EqMatch_t::EqMatch_t(
			const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pTable,
			const char* pString);  // 320
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElementInternal(
				const char* pString,
				int nStringLen);  // 98
	V_strlen(const char* str); // 98
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElement(
			const char* pString);  // 264
	CUtlBuffer::PutInt(
		int i);  // 42
	KV3BinarySaveContext_t::PutInt32Value(
			int32 uValue);  // 264
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long unsigned int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 694
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 253
	KV3BinarySaveContext_t::PutUCharValue(
			uint8 uValue);  // 233
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long int>(); // 694
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 238
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long unsigned int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 694
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 243
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<double>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<double>(); // 694
	KeyValues3::GetValueAsNumeric<double>(); // 204
	KeyValues3::GetValueDouble(); // 258
	CUtlMemory<std::pair<void const::NumAllocated(); // 1247
	CUtlMemory<std::pair<void const::Base(); // 112
	CUtlVectorBase<std::pair<void const::Base(); // 368
	CUtlVectorBase<std::pair<void const::ResetDbgInfo(); // 824
	CUtlMemory<std::pair<void const::IsGrowable(); // 823
	CUtlMemory<std::pair<void const::IsExternallyAllocated(); // 859
	CUtlMemory<std::pair<void const::IsExternallyAllocated(); // 861
	CUtlMemory<std::pair<void const::Grow(
		int num);  // 806
	CUtlVectorBase<std::pair<void const::GrowMemory(
			int num);  // 1249
	CUtlMemory<std::pair<void const::operator[](
			int i);  // 602
	CUtlVectorBase<std::pair<void const::Element(
		int i);  // 1252
	Construct<std::pair<void const*, unsigned int>, std::pair<void const*, unsigned int> >(pair<void const*, unsigned int>* pMemory); // 1252
	CUtlVectorBase<std::pair<void const::AddToTail(
			pair<void const*, unsigned int>& src);  // 51
	pair<void const::pair<void const*&, unsigned int&>(
						const void  *& __x,
						unsigned int& __y);  // 1169
	make_pair<void const*&, unsigned int&>(const void  *& __x,
						unsigned int& __y);  // 51
	KV3BinarySaveContext_t::PutBinaryBlob(
			const void* pBlob,
			uint nSize);  // 270
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long int>(); // 694
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 248
	CUtlBuffer::IsText(); // 1238
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	{
	}
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
							int count);  // 1214
	CUtlBuffer::PutTypeBin<double>(
				double src);  // 1204
	CUtlBuffer::PutTypeBin<long long unsigned int>(
						long long unsigned int src);  // 1240
	GetFmtStr<long long unsigned int>(int nRadix,
						bool bPrint);  // 1244
	CUtlBuffer::PutType<long long unsigned int>(
					long long unsigned int src);  // 1236
	CUtlBuffer::PutType<long long unsigned int>(
					long long unsigned int src);  // 1350
	CUtlBuffer::PutUnsignedInt64(
			uint64 i);  // 45
	KV3BinarySaveContext_t::PutUInt64Value(
			uint64 uValue);  // 243
	CUtlBuffer::PutTypeBin<double>(
				double src);  // 1204
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	{
	}
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
					int count);  // 1214
	CUtlBuffer::PutTypeBin<double>(
				double src);  // 1240
	CUtlBuffer::IsText(); // 1238
	GetFmtStr<double>(int nRadix,
				bool bPrint);  // 1244
	CUtlBuffer::PutType<double>(
			double src);  // 1236
	CUtlBuffer::PutType<double>(
			double src);  // 1360
	CUtlBuffer::PutDouble(
			double d);  // 47
	KV3BinarySaveContext_t::PutDoubleValue(
			double fValue);  // 258
	CUtlBuffer::IsText(); // 1238
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	{
	}
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
						int count);  // 1214
	CUtlBuffer::PutTypeBin<double>(
				double src);  // 1204
	CUtlBuffer::PutTypeBin<long long int>(
					long long int src);  // 1240
	GetFmtStr<long long int>(int nRadix,
				bool bPrint);  // 1244
	CUtlBuffer::PutType<long long int>(
				long long int src);  // 1236
	CUtlBuffer::PutType<long long int>(
				long long int src);  // 1340
	CUtlBuffer::PutInt64(
		int64 i);  // 46
	KV3BinarySaveContext_t::PutInt64Value(
			int64 uValue);  // 238
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 41
	KV3BinarySaveContext_t::PutUInt32Value(
			uint32 uValue);  // 253
	CUtlBuffer::PutInt(
		int i);  // 42
	KV3BinarySaveContext_t::PutInt32Value(
			int32 uValue);  // 248
} /* size: 0, variables: 1, inline expansions: 113 (0 bytes) */

// <0569417C> kv3lib/keyvalues3_binarywriter.cpp:363
// variables: 2
// function calls: 6
bool SaveKV3Binary_R(KV3BinarySaveContext_t& saveContext, const KeyValues3* pData)
{
	KeyValues3BinaryType_t nBinaryType; // 365
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 365
	{
		uint8 nFlagsByte; // 112
	}
	KeyValues3::GetAllFlags(); // 110
	PutTypeAndFlags(KV3BinarySaveContext_t& saveContext,
			const KeyValues3* pData,
			KeyValues3BinaryType_t nType);  // 108
	PutTypeAndFlags(KV3BinarySaveContext_t& saveContext,
			const KeyValues3* pData,
			KeyValues3BinaryType_t nType);  // 368
} /* size: 138, variables: 1, inline expansions: 6 (95 bytes) */

// <05694123> kv3lib/keyvalues3_binarywriter.cpp:374
// variables: 3
bool SaveKV3BinaryUncompressed(KV3BinarySaveContext_t& saveContext, const KeyValues3* pRoot)
{
	int nNumStrings; // 376
	{
		int iString; // 379
		{
			const char* pString; // 381
		}
	}
} /* size: 0, variables: 1 */

// <05692E5A> kv3lib/keyvalues3_binarywriter.cpp:396
// variables: 21
// function calls: 58
bool CompressKV3(KV3BinarySaveContext_t& saveContext, KeyValues3BinaryHeaderV2_t& header, CUtlBuffer& origDataBuffer, CUtlBuffer& binaryBlobBuffer)
{
	CUtlBuffer dataBuffer; // 405
	CUtlBuffer compressedDataBuffer; // 408
	CUtlBuffer compressedBlobBuffer; // 409
	const int  nUncompressedSize; // 480
	const int  nCompressedSize; // 481
	const int  nCompressionThresholdPct; // 482
	const int  nCompressionDelta; // 483
	{
		LZ4_streamHC_t* lz4Stream; // 415
		int nRingBufferPut; // 421
		char ringBuffer; // 422
		char cmpBuffer; // 423
		{
			int i; // 428
			{
				const char* pBlob; // 430
				uint nBlobSize; // 431
				{
					uint nInput; // 436
					int nOutput; // 442
					CByteswap::IsSwappingBytes(); // 1208
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 1166
					CUtlBuffer::PeekPut(
						int offset);  // 1210
					CUtlBuffer::PutTypeBin<short unsigned int>(
									short unsigned int src);  // 1204
					{
					}
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
											int count);  // 1214
					CUtlBuffer::PutTypeBin<short unsigned int>(
									short unsigned int src);  // 1240
					CUtlBuffer::IsText(); // 1238
					GetFmtStr<short unsigned int>(int nRadix,
									bool bPrint);  // 1244
					CUtlBuffer::PutType<short unsigned int>(
									short unsigned int src);  // 1236
					CUtlBuffer::PutType<short unsigned int>(
									short unsigned int src);  // 1330
					CUtlBuffer::PutUnsignedShort(
							short unsigned int s);  // 449
					Min<unsigned int>(const unsigned int& val1,
								const unsigned int& val2);  // 436
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 79
					V_memcpy(void* dest,
						const void* src,
						uint count);  // 437
				}
				CUtlMemory<std::pair<void const::operator[](
						int i);  // 588
				CUtlVectorBase<std::pair<void const::operator[](
						int i);  // 430
			}
			CUtlVectorBase<std::pair<void const::Count(); // 428
		}
	}
	{
		LZ4_streamHC_t* lz4Stream; // 465
		int nMaxCompressedSize; // 471
		int nActualCompressedSize; // 473
		CUtlBuffer::TellMaxPut(); // 471
		CUtlBuffer::TellMaxPut(); // 473
		CUtlMemory<unsigned char, int>::Base(); // 1484
		CUtlBuffer::Base(); // 473
		CUtlMemory<unsigned char, int>::Base(); // 1484
		CUtlBuffer::Base(); // 473
	}
	CUtlBuffer::TellPut(); // 1597
	CUtlMemory<unsigned char, int>::Base(); // 1479
	CUtlBuffer::Base(); // 1597
	CUtlBuffer::Clear(); // 1602
	CUtlBuffer::CopyBuffer(
			const void* pubData,
			int cubData);  // 1600
	CUtlBuffer::CopyBuffer(
			const void* pubData,
			int cubData);  // 1597
	CUtlBuffer::CopyBuffer(
			const CUtlBuffer& buffer);  // 406
	CUtlVectorBase<std::pair<void const::Count(); // 135
	CUtlVectorBase<std::pair<void const::IsEmpty(); // 413
	CUtlBuffer::TellMaxPut(); // 480
	CUtlBuffer::TellMaxPut(); // 480
	CUtlBuffer::TellMaxPut(); // 481
	CUtlBuffer::TellMaxPut(); // 481
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 500
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 500
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 500
} /* size: 0, variables: 7, inline expansions: 31 (643 bytes) */

