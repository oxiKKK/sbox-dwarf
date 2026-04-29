
//
// tier0/stackhelpers_virtualmachine_capture.cpp
//
//	referenced by: libtier0.so
//
//	functions: 36
//	class: 1
//	structs: 3
//

// <0046028E> tier0/stackhelpers_virtualmachine_capture.cpp:17
void StackTools_ReportVirtualMachineEncodingChange(uint64, uint64, uint, uint64, uint, uint64, bool)
{
} /* size: 0 */

// <004601EA> tier0/stackhelpers_virtualmachine_capture.cpp:18
void StackTools_ReportVirtualMachineIndexAdded(uint64, uint32, const char *, const char *, uint32)
{
} /* size: 0 */

// <0045FEB0> tier0/stackhelpers_virtualmachine_capture.cpp:24
// member variables: 3
// struct size: 12
struct VirtualMachineCallStackTranslationEncoderIndex_t {
	uint32 nFunctionNameIndex; /* 0 4 */
	uint32 nFileNameIndex; /* 4 4 */
	uint32 nFileLine; /* 8 4 */
};

// <00463080> tier0/stackhelpers_virtualmachine_capture.cpp:31
void VirtualMachineCallStackTranslationEncoderInternalData_t::VirtualMachineCallStackTranslationEncoderInternalData_t()
{
} /* size: 0 */

// <00463063> tier0/stackhelpers_virtualmachine_capture.cpp:31
inline void VirtualMachineCallStackTranslationEncoderInternalData_t::VirtualMachineCallStackTranslationEncoderInternalData_t()
{
} /* size: 0 */

// <0045EAA8> tier0/stackhelpers_virtualmachine_capture.cpp:31
// member function: 1
// member variables: 24
// struct size: 192
struct VirtualMachineCallStackTranslationEncoderInternalData_t {
	uint64 m_nVMID; /* 0 8 */
	uint64 m_nMappingBaseAddress; /* 8 8 */
	uint32 m_nMappingSize; /* 16 4 */
	uint64 m_nIndexBitMask; /* 24 8 */
	uint m_nIndexBitShift; /* 32 4 */
	uint m_nMaxEncodableIndex; /* 36 4 */
	uint64 m_nLineOffsetBitMask; /* 40 8 */
	uint m_nLineOffsetBitShift; /* 48 4 */
	uint64 m_nLineOffsetSignBitMask; /* 56 8 */
	uint m_nMaxLineOffset; /* 64 4 */
	char * m_pStringMemory; /* 72 8 */
	uint m_nAllocatedStringMemory; /* 80 4 */
	uint m_nStringMemoryWriteOffset; /* 84 4 */
	char * * m_pFunctionNames; /* 88 8 */
	uint m_nAllocatedFunctionNamePointers; /* 96 4 */
	uint m_nFunctionNameCount; /* 100 4 */
	char * * m_pFileNames; /* 104 8 */
	uint m_nAllocatedFileNamePointers; /* 112 4 */
	uint m_nFileNameCount; /* 116 4 */
	VirtualMachineCallStackTranslationEncoderIndex_t * m_pEncodedIndices; /* 120 8 */
	uint m_nAllocatedIndices; /* 128 4 */
	uint m_nIndexCount; /* 132 4 */
	CThreadFastMutex m_Mutex; /* 136 24 */
	char m_szName[32]; /* 160 32 */
	void VirtualMachineCallStackTranslationEncoderInternalData_t(VirtualMachineCallStackTranslationEncoderInternalData_t* );
};

// <0045FEF1> tier0/stackhelpers_virtualmachine_capture.cpp:66
// member functions: 6
// member variable: 1
// class size: 16
class CTier0VirtualMachineCallStackTranslationEncoder : public CVirtualMachineCallStackTranslationEncoder {
public:
	/* class CVirtualMachineCallStackTranslationEncoder <ancestor>; */ /* 0 16 */
	/* tier0/stackhelpers_virtualmachine_capture.cpp:69 */
	void CTier0VirtualMachineCallStackTranslationEncoder(CTier0VirtualMachineCallStackTranslationEncoder* );
	/* tier0/stackhelpers_virtualmachine_capture.cpp:70 */
	bool IsOwnedEncodedPointer(CTier0VirtualMachineCallStackTranslationEncoder* , void* );
	/* tier0/stackhelpers_virtualmachine_capture.cpp:75 */
	CVirtualMachineCallStackTranslationEncoder* Next(CTier0VirtualMachineCallStackTranslationEncoder* );
	void CTier0VirtualMachineCallStackTranslationEncoder(class CTier0VirtualMachineCallStackTranslationEncoder *); /* linkage=_ZN47CTier0VirtualMachineCallStackTranslationEncoderC4Ev */
	bool IsOwnedEncodedPointer(class CTier0VirtualMachineCallStackTranslationEncoder *, void *); /* linkage=_ZN47CTier0VirtualMachineCallStackTranslationEncoder21IsOwnedEncodedPointerEPv */
	class CVirtualMachineCallStackTranslationEncoder * Next(class CTier0VirtualMachineCallStackTranslationEncoder *); /* linkage=_ZN47CTier0VirtualMachineCallStackTranslationEncoder4NextEv */
};

// <00463A83> tier0/stackhelpers_virtualmachine_capture.cpp:70
// variable: 1
inline void CTier0VirtualMachineCallStackTranslationEncoder::IsOwnedEncodedPointer(void* pTest)
{
	VirtualMachineCallStackTranslationEncoderInternalData_t* pInternal; // 72
} /* size: 0, variables: 1 */

// <00463A6A> tier0/stackhelpers_virtualmachine_capture.cpp:75
inline void CTier0VirtualMachineCallStackTranslationEncoder::Next()
{
} /* size: 0 */

// <00460352> tier0/stackhelpers_virtualmachine_capture.cpp:80
void CopyPossiblyDeferredCallStackMarker(CCallStackMarkerBase &, const CCallStackMarkerBase &)
{
} /* size: 0 */

// <0046394C> tier0/stackhelpers_virtualmachine_capture.cpp:91
// variables: 5
// function call: 1
void IStack_VM_Segment_Marker::IStack_VM_Segment_Marker(const CCallStackMarkerBase& leafMarker)
{
	{
		CFiber* pCurrentFiber; // 94
		{
			Tier0FiberLocals_t& fiberLocals; // 97
		}
	}
	{
		CFiber* pCurrentFiber; // 94
		{
			Tier0FiberLocals_t& fiberLocals; // 97
		}
	}
	{
		CFiber* pCurrentFiber; // 94
	}
	IStack_VM_Segment_Marker::IStack_VM_Segment_Marker(
				const CCallStackMarkerBase& leafMarker);  // 91
} /* size: 127, inline expansions: 1 (16 bytes) */

// <0046390B> tier0/stackhelpers_virtualmachine_capture.cpp:91
// variables: 2
void IStack_VM_Segment_Marker::IStack_VM_Segment_Marker(const CCallStackMarkerBase& leafMarker)
{
	{
		CFiber* pCurrentFiber; // 94
		{
			Tier0FiberLocals_t& fiberLocals; // 97
		}
	}
} /* size: 0 */

// <0046386F> tier0/stackhelpers_virtualmachine_capture.cpp:111
// variables: 4
void IStack_VM_Segment_Marker::~IStack_VM_Segment_Marker()
{
	{
		CFiber* pCurrentFiber; // 114
		{
			Tier0FiberLocals_t& fiberLocals; // 117
		}
	}
	{
		CFiber* pCurrentFiber; // 114
		{
			Tier0FiberLocals_t& fiberLocals; // 117
		}
	}
} /* size: 82 */

// <00463809> tier0/stackhelpers_virtualmachine_capture.cpp:111
void IStack_VM_Segment_Marker::~IStack_VM_Segment_Marker()
{
} /* size: 36 */

// <004637CE> tier0/stackhelpers_virtualmachine_capture.cpp:111
// variables: 2
void IStack_VM_Segment_Marker::~IStack_VM_Segment_Marker()
{
	{
		CFiber* pCurrentFiber; // 114
		{
			Tier0FiberLocals_t& fiberLocals; // 117
		}
	}
} /* size: 0 */

// <0046343D> tier0/stackhelpers_virtualmachine_capture.cpp:137
// variables: 2
// function calls: 11
void StackTools_EnumerateVirtualMachineEncoders(FN_VMEncoderEnumerationCallback CallBackFunc, void* pContext)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_140; // 140
	CVirtualMachineCallStackTranslationEncoder* pIterator; // 141
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 140
	CTier0VirtualMachineCallStackTranslationEncoder::Next(); // 147
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 150
} /* size: 204, variables: 2, inline expansions: 11 (490 bytes) */

// <00463240> tier0/stackhelpers_virtualmachine_capture.cpp:162
// variables: 6
// function calls: 2
char* CopyStringToLocalMemory(VirtualMachineCallStackTranslationEncoderInternalData_t* pEncoderData, const char* szString)
{
	size_t nStringLength; // 164
	char* szRetVal; // 200
	{
		char* pNewMemory; // 176
		{
			uintp nMemoryOffset; // 181
			{
				uint i; // 185
			}
			{
				uint i; // 190
			}
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 182
		}
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 201
} /* size: 372, variables: 2, inline expansions: 1 (19 bytes) */

// <004631F7> tier0/stackhelpers_virtualmachine_capture.cpp:207
// variables: 2
uint GetFunctionNameIndex(VirtualMachineCallStackTranslationEncoderInternalData_t* pEncoderData, const char* szFunctionName)
{
	{
		uint i; // 210
	}
	{
		char** pNewMemory; // 230
	}
} /* size: 0 */

// <004631AD> tier0/stackhelpers_virtualmachine_capture.cpp:246
// variables: 2
uint GetFileNameIndex(VirtualMachineCallStackTranslationEncoderInternalData_t* pEncoderData, const char* szFileName)
{
	{
		uint i; // 249
	}
	{
		char** pNewMemory; // 269
	}
} /* size: 0 */

// <00463097> tier0/stackhelpers_virtualmachine_capture.cpp:285
// variables: 10
bool GetVMEncodingIndexAndOffset(VirtualMachineCallStackTranslationEncoderInternalData_t* pEncoderData, uint& nIndexOut, int& nOffsetOut, const char* szFunctionName, const char* szFileName, uint nFileLine)
{
	uint nFunctionIndex; // 293
	uint nFileNameIndex; // 294
	bool bEncoderSupportsNegativeLineOffsets; // 296
	const char   __FUNCTION__; // 28700
	VirtualMachineCallStackTranslationEncoderIndex_t& encodingSpace; // 350
	uint nReportIndex; // 356
	{
		uint i; // 299
		{
			int nLineDelta; // 305
		}
	}
	{
		VirtualMachineCallStackTranslationEncoderIndex_t* pNewMemory; // 329
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 344
	}
} /* size: 0, variables: 6 */

// <004600D9> tier0/stackhelpers_virtualmachine_capture.cpp:365
// member variables: 2
// struct size: 4,128
struct StackTranslation_LoadedModuleInfo_VM_t : public StackTranslation_LoadedModuleInfo_t {
public:
	/* struct StackTranslation_LoadedModuleInfo_t <ancestor>; */ /* 0 4120 */
	uint64 nMoreBufferSpace; /* 4120 8 */
};

// <00462C8D> tier0/stackhelpers_virtualmachine_capture.cpp:371
// variables: 2
// function calls: 10
void CVirtualMachineCallStackTranslationEncoder::CVirtualMachineCallStackTranslationEncoder(const char* szVirtualMachineName)
{
	{
		StackTranslation_LoadedModuleInfo_VM_t info; // 424
		{
		}
	}
	{
		StackTranslation_LoadedModuleInfo_VM_t info; // 424
		CThreadFastMutex::CThreadFastMutex(
				const char* pLockName);  // 31
		VirtualMachineCallStackTranslationEncoderInternalData_t::VirtualMachineCallStackTranslationEncoderInternalData_t(); // 374
		strncpy(char* __dest,
			const char* __src,
			size_t __len);  // 377
		{
		}
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 837
		ThreadPause(void); // 839
		CThreadFastMutex::Lock(
			const char* pFileName,
			int nLineNumber,
			unsigned int nSpinSleepTime);  // 419
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 422
		QWordSwapC<long long unsigned int>(long long unsigned int qw); // 430
	}
} /* size: 696 */

// <00462C3B> tier0/stackhelpers_virtualmachine_capture.cpp:371
// variables: 2
void CVirtualMachineCallStackTranslationEncoder::CVirtualMachineCallStackTranslationEncoder(const char* szVirtualMachineName)
{
	{
		StackTranslation_LoadedModuleInfo_VM_t info; // 424
		{
			uint64 s_nBaseAddressAllocator; // 400
		}
	}
} /* size: 0 */

// <004625BA> tier0/stackhelpers_virtualmachine_capture.cpp:440
// variables: 6
// function calls: 18
void CVirtualMachineCallStackTranslationEncoder::~CVirtualMachineCallStackTranslationEncoder()
{
	{
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_444; // 444
			StackTranslation_LoadedModuleInfo_VM_t info; // 446
			{
				CVirtualMachineCallStackTranslationEncoder* pIterator; // 464
				{
				}
			}
		}
	}
	{
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_444; // 444
			StackTranslation_LoadedModuleInfo_VM_t info; // 446
			ThreadInterlockedAssignIf64(volatile int64* pDest,
							int64 value,
							int64 comparand);  // 800
			CThreadFastMutex::TryLockInline(
					const char* pFileName,
					int nLineNumber,
					const ThreadId_t  threadId);  // 837
			ThreadPause(void); // 839
			CThreadFastMutex::Lock(
				const char* pFileName,
				int nLineNumber,
				unsigned int nSpinSleepTime);  // 943
			Lock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
					const CThreadFastMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 444
			strncpy(char* __dest,
				const char* __src,
				size_t __len);  // 449
			QWordSwapC<long long unsigned int>(long long unsigned int qw); // 452
			ThreadInterlockedAssignIf64(volatile int64* pDest,
							int64 value,
							int64 comparand);  // 800
			CThreadFastMutex::TryLockInline(
					const char* pFileName,
					int nLineNumber,
					const ThreadId_t  threadId);  // 837
			ThreadPause(void); // 839
			CThreadFastMutex::Lock(
				const char* pFileName,
				int nLineNumber,
				unsigned int nSpinSleepTime);  // 456
			{
				CVirtualMachineCallStackTranslationEncoder* pIterator; // 464
				{
				}
			}
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 472
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 473
		}
	}
} /* size: 0 */

// <00462539> tier0/stackhelpers_virtualmachine_capture.cpp:440
// variables: 5
void CVirtualMachineCallStackTranslationEncoder::~CVirtualMachineCallStackTranslationEncoder()
{
	const char   __FUNCTION__; // 25641
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_444; // 444
		StackTranslation_LoadedModuleInfo_VM_t info; // 446
		{
			CVirtualMachineCallStackTranslationEncoder* pIterator; // 464
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 463
			}
		}
	}
} /* size: 0, variables: 1 */

// <00461C42> tier0/stackhelpers_virtualmachine_capture.cpp:479
// variables: 15
// function calls: 16
void* CVirtualMachineCallStackTranslationEncoder::EncodeAsNativePointer(const char* szFunctionName, const char* szFileName, uint32 nFileLine)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_482; // 482
	uint nIndex; // 484
	int nLineOffset; // 485
	const char   __FUNCTION__; // 25512
	{
		uint64 nEncodedIndex; // 488
		uint64 nEncodedOffset; // 491
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 489
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 493
		}
	}
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 482
	{
		uint i; // 210
	}
	{
		char** pNewMemory; // 230
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 235
	}
	GetFunctionNameIndex(VirtualMachineCallStackTranslationEncoderInternalData_t* pEncoderData,
				const char* szFunctionName);  // 293
	{
		uint i; // 249
	}
	{
		char** pNewMemory; // 269
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 274
	}
	GetFileNameIndex(VirtualMachineCallStackTranslationEncoderInternalData_t* pEncoderData,
			const char* szFileName);  // 294
	{
		uint i; // 299
		{
			int nLineDelta; // 305
		}
	}
	{
		VirtualMachineCallStackTranslationEncoderIndex_t* pNewMemory; // 329
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 334
	}
	{
	}
	GetVMEncodingIndexAndOffset(VirtualMachineCallStackTranslationEncoderInternalData_t* pEncoderData,
					uint& nIndexOut,
					int& nOffsetOut,
					const char* szFunctionName,
					const char* szFileName,
					uint nFileLine);  // 486
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 499
} /* size: 0, variables: 4, inline expansions: 13 (2170 bytes) */

// <00461790> tier0/stackhelpers_virtualmachine_capture.cpp:502
// variables: 5
// function calls: 12
void CVirtualMachineCallStackTranslationEncoder::DecodeFromNativePointer(const void* pEncoding, char* pFunctionNameOut, uint nMaxFunctionNameLength, char* pFileNameOut, uint nMaxFileNameLength, int* pFileLineOut)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_505; // 505
	uint nRetVal; // 507
	uint64 nEncoding; // 509
	uint64 nIndex; // 517
	{
		uint64 nOffset_Part1; // 538
	}
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 505
	strncpy(char* __dest,
		const char* __src,
		size_t __len);  // 524
	strncpy(char* __dest,
		const char* __src,
		size_t __len);  // 530
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 562
} /* size: 460, variables: 4, inline expansions: 12 (450 bytes) */

// <0046175E> tier0/stackhelpers_virtualmachine_capture.cpp:566
void CVirtualMachineCallStackTranslationEncoder::GetVMID()
{
} /* size: 12 */

// <0046172C> tier0/stackhelpers_virtualmachine_capture.cpp:574
void CVirtualMachineCallStackTranslationEncoder::GetName()
{
} /* size: 15 */

// <004616FA> tier0/stackhelpers_virtualmachine_capture.cpp:583
void CVirtualMachineCallStackTranslationEncoder::GetMappingBaseAddress()
{
} /* size: 13 */

// <004616C8> tier0/stackhelpers_virtualmachine_capture.cpp:592
void CVirtualMachineCallStackTranslationEncoder::GetMappingSize()
{
} /* size: 12 */

// <00461696> tier0/stackhelpers_virtualmachine_capture.cpp:601
void CVirtualMachineCallStackTranslationEncoder::GetCurrentIndexCount()
{
} /* size: 15 */

// <00461664> tier0/stackhelpers_virtualmachine_capture.cpp:610
void CVirtualMachineCallStackTranslationEncoder::GetIndexBitMask()
{
} /* size: 13 */

// <00461632> tier0/stackhelpers_virtualmachine_capture.cpp:619
void CVirtualMachineCallStackTranslationEncoder::GetIndexBitShift()
{
} /* size: 12 */

// <00461600> tier0/stackhelpers_virtualmachine_capture.cpp:628
void CVirtualMachineCallStackTranslationEncoder::GetLineOffsetBitMask()
{
} /* size: 13 */

// <004615CE> tier0/stackhelpers_virtualmachine_capture.cpp:637
void CVirtualMachineCallStackTranslationEncoder::GetLineOffsetBitShift()
{
} /* size: 12 */

// <0046159C> tier0/stackhelpers_virtualmachine_capture.cpp:646
void CVirtualMachineCallStackTranslationEncoder::GetLineOffsetPostShiftedSignBitMask()
{
} /* size: 13 */

// <0046114C> tier0/stackhelpers_virtualmachine_capture.cpp:655
// variables: 3
// function calls: 13
void CVirtualMachineCallStackTranslationEncoder::EnumerateEncodingIndices(FN_VMEncodingIndexEnumerationCallback CallBackFunc, void* pContext)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_658; // 658
	{
		uint i; // 659
		{
			VirtualMachineCallStackTranslationEncoderIndex_t& encodedIndex; // 661
		}
	}
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 658
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 666
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 666
} /* size: 285, variables: 1, inline expansions: 13 (468 bytes) */

// <00460D7D> tier0/stackhelpers_virtualmachine_capture.cpp:670
// variables: 3
// function calls: 12
bool StackTools_LocalVirtualMachinesCanTranslatePointer(uint64 pAddress)
{
	void* pTestAddress; // 672
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_674; // 674
	CVirtualMachineCallStackTranslationEncoder* pIterator; // 675
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 674
	CTier0VirtualMachineCallStackTranslationEncoder::IsOwnedEncodedPointer(
				void* pTest);  // 678
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 685
	CTier0VirtualMachineCallStackTranslationEncoder::Next(); // 681
} /* size: 220, variables: 3, inline expansions: 12 (529 bytes) */

// <0046069F> tier0/stackhelpers_virtualmachine_capture.cpp:722
// variables: 2
uint StackTools_LocalVirtualMachines_GetTranslationData(uint64 pAddress, wchar_t* pModuleNameOut, uint nMaxModuleNameLength, wchar_t* pSymbolNameOut, uint nMaxSymbolNameLength, wchar_t* pFileNameOut, uint nMaxFileNameLength, uint* pLineNumberOut, uint* pSymbolDisplacementOut, uint* pLineDisplacementOut)
{
	const char   __FUNCTION__; // 18020
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 759
	}
} /* size: 106, variables: 1 */

