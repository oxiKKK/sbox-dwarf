
//
// vulkan/inputlayoutvulkan.cpp
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 13
//	structs: 2
//

// <00541299> vulkan/inputlayoutvulkan.cpp:16
// member variables: 3
// struct size: 16
struct SemanticNameMap_t {
	const char * m_pSemanticName; /* 0 8 */
	SemanticUsageVulkan_t m_Usage; /* 8 4 */
	uint m_nIndex; /* 12 4 */
};

// <00546948> vulkan/inputlayoutvulkan.cpp:45
// variables: 3
const SemanticNameMap_t& SemanticNameToUsage(const char* pSemanticName)
{
	const char   __FUNCTION__; // 48396
	{
		int i; // 47
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 53
	}
} /* size: 0, variables: 1 */

// <00546850> vulkan/inputlayoutvulkan.cpp:57
// variables: 2
// function calls: 2
int32 GetSemanticUsage(const char* pSemanticName)
{
	const SemanticNameMap_t& semanticName; // 59
	{
		int i; // 47
	}
	{
	}
	SemanticNameToUsage(const char* pSemanticName); // 45
	SemanticNameToUsage(const char* pSemanticName); // 59
} /* size: 0, variables: 1, inline expansions: 2 (130 bytes) */

// <00542AB7> vulkan/inputlayoutvulkan.cpp:66
// member functions: 5
// member variables: 4
// vtable entry: 1
// struct size: 32
class CLayoutInsert : public ITSHashConstructor<InputLayoutVulkan_t*> {
public:
	/* class ITSHashConstructor<InputLayoutVulkan_t*> <ancestor>; */ /* 0 8 */
	void ~CLayoutInsert(CLayoutInsert* );
	void CLayoutInsert(CLayoutInsert* , CLayoutInsert& );
	void CLayoutInsert(CLayoutInsert* , const CLayoutInsert& );
	/* vulkan/inputlayoutvulkan.cpp:69 */
	void CLayoutInsert(CLayoutInsert* , CInputLayoutVulkan* , const CVertexShaderVulkan* , const CVsInputSignatureVector* );
	/* vulkan/inputlayoutvulkan.cpp:74 */
	virtual void Construct(CLayoutInsert* , InputLayoutVulkan_t** );
private:
	CInputLayoutVulkan * m_pLayoutVulkan; /* 8 8 */
	const class CVertexShaderVulkan * m_pVertexShader; /* 16 8 */
	const CVsInputSignatureVector * m_pInputSignature; /* 24 8 */
};

// <005467F6> vulkan/inputlayoutvulkan.cpp:69
void CLayoutInsert::CLayoutInsert(CInputLayoutVulkan* pLayoutVulkan, const CVertexShaderVulkan* pVertexShader, const CVsInputSignatureVector* pInputSignature)
{
} /* size: 0 */

// <005467B9> vulkan/inputlayoutvulkan.cpp:69
inline void CLayoutInsert::CLayoutInsert(CInputLayoutVulkan* pLayoutVulkan, const CVertexShaderVulkan* pVertexShader, const CVsInputSignatureVector* pInputSignature)
{
} /* size: 0 */

// <00546F04> vulkan/inputlayoutvulkan.cpp:74
void CLayoutInsert::Construct(InputLayoutVulkan_t** ppLayout)
{
} /* size: 0 */

// <00546794> vulkan/inputlayoutvulkan.cpp:74
inline void CLayoutInsert::Construct(InputLayoutVulkan_t** ppLayout)
{
} /* size: 0 */

// <005465D9> vulkan/inputlayoutvulkan.cpp:89
// variables: 4
// function calls: 2
void CInputLayoutVulkan::CInputLayoutVulkan(int nFieldCount, const RenderInputLayoutField_t* pFieldDescs, const char* pDebugName)
{
	{
		int i; // 103
		{
			ColorFormat_t format; // 107
		}
	}
	CUtlTSHash<InputLayoutVulkan_t::CUtlTSHash(
			int nAllocationCount);  // 91
	{
		int i; // 103
		{
			ColorFormat_t format; // 107
		}
	}
	CInputLayoutVulkan::CInputLayoutVulkan(
				int nFieldCount,
				const RenderInputLayoutField_t* pFieldDescs,
				const char* pDebugName);  // 89
} /* size: 170, inline expansions: 2 (124 bytes) */

// <0054657D> vulkan/inputlayoutvulkan.cpp:89
// variables: 2
void CInputLayoutVulkan::CInputLayoutVulkan(int nFieldCount, const RenderInputLayoutField_t* pFieldDescs, const char* pDebugName)
{
	{
		int i; // 103
		{
			ColorFormat_t format; // 107
		}
	}
} /* size: 0 */

// <00545A91> vulkan/inputlayoutvulkan.cpp:121
// variables: 13
// function calls: 35
void CInputLayoutVulkan::~CInputLayoutVulkan()
{
	{
		int nElements; // 123
		{
			InputLayoutVulkan_t** pLayouts; // 126
			{
				int i; // 129
			}
		}
	}
	{
		int nElements; // 123
		CInterlockedIntT<int, 4>::operator int(); // 68
		CUtlMemoryPoolBase::Count(); // 365
		CUtlTSHashBase<InputLayoutVulkan_t::Count(); // 123
		{
			InputLayoutVulkan_t** pLayouts; // 126
			{
				int i; // 408
				{
					const HashBucket_t& bucket; // 410
					CThreadSpinRWLock::LockForRead(
							const char* pFileName,
							int nLineNumber);  // 411
					{
						HashFixedData_t* pElement; // 412
						CThreadSpinRWLock::UnlockRead(
								const char* pFileName,
								int nLineNumber);  // 420
					}
					CThreadSpinRWLock::UnlockRead(
							const char* pFileName,
							int nLineNumber);  // 424
				}
			}
			CUtlTSHashBase<InputLayoutVulkan_t::GetElementsData(
					int nFirstElement,
					int nCount,
					InputLayoutVulkan_t** pData);  // 127
			{
				int i; // 129
			}
			CInterlockedIntT<int, 4>::operator int(); // 68
			CUtlMemoryPoolBase::Count(); // 675
			{
				int i; // 683
				{
					HashBucket_t& bucket; // 685
					ThreadPause(void); // 3309
					ThreadInterlockedIncrement(volatile int32* p); // 576
					CInterlockedIntT<int, 4>::operator++(); // 582
					CInterlockedIntT<int, 4>::operator++(
							int);  // 3305
					ThreadInterlockedAssignIf128(volatile int128* pDest,
									const int128& value,
									const int128& comparand);  // 3226
					CThreadSpinRWLock::AssignIf(
						const union LockInfo_t& newValue,
						const union LockInfo_t& comparand);  // 3257
					CThreadSpinRWLock::TryLockForWrite(
							const char* pFileName,
							int nLineNumber,
							const ThreadId_t  threadId);  // 3307
					CThreadSpinRWLock::LockForWrite(
							const char* pFileName,
							int nLineNumber);  // 687
				}
			}
			CUtlTSHashBase<InputLayoutVulkan_t::RemoveAll(); // 668
			CUtlTSHashBase<InputLayoutVulkan_t::RemoveAll(); // 136
		}
	}
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 675
	{
		int i; // 683
		{
			HashBucket_t& bucket; // 685
			ThreadPause(void); // 3309
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 3305
			ThreadInterlockedAssignIf128(volatile int128* pDest,
							const int128& value,
							const int128& comparand);  // 3226
			CThreadSpinRWLock::AssignIf(
				const union LockInfo_t& newValue,
				const union LockInfo_t& comparand);  // 3257
			CThreadSpinRWLock::TryLockForWrite(
					const char* pFileName,
					int nLineNumber,
					const ThreadId_t  threadId);  // 3307
			CThreadSpinRWLock::LockForWrite(
					const char* pFileName,
					int nLineNumber);  // 687
		}
	}
	CUtlTSHashBase<InputLayoutVulkan_t::RemoveAll(); // 668
	CUtlTSHashBase<InputLayoutVulkan_t::RemoveAll(); // 352
	CUtlTSHashBase<InputLayoutVulkan_t::Purge(); // 343
	CUtlMemoryPool<CUtlTSHashBase<InputLayoutVulkan_t::~CUtlMemoryPool(); // 344
	CUtlTSHashBase<InputLayoutVulkan_t::~CUtlTSHashBase(); // 803
	CUtlTSHash<InputLayoutVulkan_t::~CUtlTSHash(); // 139
} /* size: 894, inline expansions: 8 (864 bytes) */

// <00545A4B> vulkan/inputlayoutvulkan.cpp:121
// variables: 3
void CInputLayoutVulkan::~CInputLayoutVulkan()
{
	{
		int nElements; // 123
		{
			InputLayoutVulkan_t** pLayouts; // 126
			{
				int i; // 129
			}
		}
	}
} /* size: 0 */

// <0054594F> vulkan/inputlayoutvulkan.cpp:142
// variables: 2
// function calls: 2
void CInputLayoutVulkan::CommitInputLayoutChanges()
{
	{
		int i; // 591
		{
			HashBucket_t& bucket; // 593
		}
	}
	CUtlTSHashBase<InputLayoutVulkan_t::Commit(); // 579
	CUtlTSHashBase<InputLayoutVulkan_t::Commit(); // 144
} /* size: 129, inline expansions: 2 (139 bytes) */

// <00544EEF> vulkan/inputlayoutvulkan.cpp:148
// variables: 18
// function calls: 30
void CInputLayoutVulkan::ComputeVertexSpec(const CVsInputSignatureVector* pInputSignature)
{
	InputLayoutVulkan_t* pInputLayoutVulkan; // 150
	CUtlVector<VkVertexInputAttributeDescription, CUtlMemory<VkVertexInputAttributeDescription, int> > vertexInputAttributeDescs; // 154
	int32 nNumVertexBindingSlots; // 155
	const char* pUnusedSemanticName; // 156
	int nUnusedSemanticIndex; // 157
	VkVertexInputBindingDescription* pVertexBindingDescs; // 197
	VkPipelineVertexInputStateCreateInfo* pVertexInputStateCreateInfo; // 225
	VkVertexInputAttributeDescription* pVertexAttributeDescriptions; // 231
	{
		int i; // 158
		{
			VkVertexInputAttributeDescription vertexAttribDesc; // 160
			uint32 nSemanticIndex; // 166
			const char* pSemanticName; // 167
			const SemanticNameMap_t& semanticInfo; // 183
			uint8 nUsageIndex; // 184
			uint8 nAttribMapIndex; // 185
			CUtlMemory<VkVertexInputAttributeDescription, int>::operator[](
					int i);  // 602
			CUtlVectorBase<VkVertexInputAttributeDescription, CUtlMemory<VkVertexInputAttributeDescription, int> >::Element(
				int i);  // 1201
			CopyConstruct<VkVertexInputAttributeDescription>(VkVertexInputAttributeDescription* pMemory,
									const VkVertexInputAttributeDescription& src);  // 1201
			CUtlMemory<VkVertexInputAttributeDescription, int>::Grow(
				int num);  // 806
			CUtlVectorBase<VkVertexInputAttributeDescription, CUtlMemory<VkVertexInputAttributeDescription, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<VkVertexInputAttributeDescription, CUtlMemory<VkVertexInputAttributeDescription, int> >::AddToTail(
					const VkVertexInputAttributeDescription& src);  // 164
			{
				int i; // 47
			}
			{
			}
			SemanticNameToUsage(const char* pSemanticName); // 45
			SemanticNameToUsage(const char* pSemanticName); // 183
			Max<int>(const int& val1,
				const int& val2);  // 191
		}
	}
	{
		int nSlot; // 199
		{
			int i; // 201
		}
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 151
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 152
	CUtlMemory<VkVertexInputAttributeDescription, int>::ValidateGrowSize(); // 475
	CUtlMemory<VkVertexInputAttributeDescription, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VkVertexInputAttributeDescription, CUtlMemory<VkVertexInputAttributeDescription, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VkVertexInputAttributeDescription, CUtlMemory<VkVertexInputAttributeDescription, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VkVertexInputAttributeDescription, CUtlMemory<VkVertexInputAttributeDescription, int> >::CUtlVector(); // 154
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 198
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 232
	CUtlMemory<VkVertexInputAttributeDescription, int>::Purge(); // 903
	CUtlMemory<VkVertexInputAttributeDescription, int>::Purge(); // 1799
	CUtlVectorBase<VkVertexInputAttributeDescription, CUtlMemory<VkVertexInputAttributeDescription, int> >::Purge(); // 560
	ValidateAlignment<VkVertexInputAttributeDescription>(void); // 508
	CUtlMemory<VkVertexInputAttributeDescription, int>::Purge(); // 510
	CUtlMemory<VkVertexInputAttributeDescription, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VkVertexInputAttributeDescription, CUtlMemory<VkVertexInputAttributeDescription, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VkVertexInputAttributeDescription, CUtlMemory<VkVertexInputAttributeDescription, int> >::~CUtlVector(); // 239
} /* size: 0, variables: 8, inline expansions: 21 (393 bytes) */

// <005445ED> vulkan/inputlayoutvulkan.cpp:244
// variables: 7
// function calls: 25
void CInputLayoutVulkan::GetInputLayout(RenderShaderHandle_t hVertexShader, const CVsInputSignatureVector* pInputSignature)
{
	CVertexShaderVulkan* pVertexShader; // 246
	CLayoutInsert insertCallback; // 253
	UtlTSHashHandle_t h; // 254
	InputLayoutVulkan_t* pInputLayout; // 255
	ITSHashConstructor<InputLayoutVulkan_t::ITSHashConstructor(); // 70
	CLayoutInsert::CLayoutInsert(
			CInputLayoutVulkan* pLayoutVulkan,
			const CVertexShaderVulkan* pVertexShader,
			const CVsInputSignatureVector* pInputSignature);  // 253
	HashIntConventional(const int n); // 63
	Hash(const long long int& key,
		int nBucketMask);  // 734
	{
		HashFixedData_t* pElement; // 719
		Compare(const long long int& lhs,
			const long long int& rhs);  // 721
	}
	CUtlTSHashBase<InputLayoutVulkan_t::Find(
		long long int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 736
	CThreadSpinRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 743
	{
		HashFixedData_t* pElement; // 719
		Compare(const long long int& lhs,
			const long long int& rhs);  // 721
	}
	CUtlTSHashBase<InputLayoutVulkan_t::Find(
		long long int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 744
	CThreadSpinRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 745
	CUtlTSHashBase<InputLayoutVulkan_t::Find(
		long long int uiKey);  // 507
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 3305
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 3226
	CThreadSpinRWLock::AssignIf(
		const union LockInfo_t& newValue,
		const union LockInfo_t& comparand);  // 3257
	CThreadSpinRWLock::TryLockForWrite(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 3307
	ThreadPause(void); // 3309
	CThreadSpinRWLock::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 514
	{
		HashFixedData_t* pElement; // 719
		Compare(const long long int& lhs,
			const long long int& rhs);  // 721
	}
	CUtlTSHashBase<InputLayoutVulkan_t::Find(
		long long int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 516
	CUtlMemoryPool<CUtlTSHashBase<InputLayoutVulkan_t::Alloc(); // 438
	CUtlTSHashBase<InputLayoutVulkan_t::InsertUncommitted(
				long long int uiKey,
				HashBucket_t& bucket);  // 521
	CLayoutInsert::Construct(
			InputLayoutVulkan_t** ppLayout);  // 522
	CUtlTSHashBase<InputLayoutVulkan_t::Insert(
		long long int uiKey,
		ITSHashConstructor<InputLayoutVulkan_t*>* pConstructor,
		bool* pDidInsert);  // 254
} /* size: 597, variables: 4, inline expansions: 22 (1330 bytes) */

