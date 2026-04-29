
//
// vulkan/framebuffermgrvulkan.cpp
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 20
//

// <004DD897> vulkan/framebuffermgrvulkan.cpp:20
// variables: 2
// function calls: 4
void FramebufferHashFunctor_t::operator(const VulkanFramebufferState_t& framebufferState)
{
	uint32 nHash; // 23
	{
		int32 nRenderTarget; // 26
		HashCombine(uint32& nSeed,
				uint32 nHash);  // 28
	}
	HashCombine(uint32& nSeed,
			uint32 nHash);  // 24
	HashCombine(uint32& nSeed,
			uint32 nHash);  // 25
	HashCombine(uint32& nSeed,
			uint32 nHash);  // 30
} /* size: 244, variables: 1, inline expansions: 3 (69 bytes) */

// <004DE3D9> vulkan/framebuffermgrvulkan.cpp:38
// variable: 1
// function call: 1
void FramebufferEqualFunctor_t::operator(const VulkanFramebufferState_t& rhs, const VulkanFramebufferState_t& lhs)
{
	{
		int32 i; // 55
	}
	FramebufferEqualFunctor_t::operator(
			const VulkanFramebufferState_t& rhs,
			const VulkanFramebufferState_t& lhs);  // 38
} /* size: 118, inline expansions: 1 (20 bytes) */

// <004DD856> vulkan/framebuffermgrvulkan.cpp:38
// variable: 1
void FramebufferEqualFunctor_t::operator(const VulkanFramebufferState_t& rhs, const VulkanFramebufferState_t& lhs)
{
	{
		int32 i; // 55
	}
} /* size: 0 */

// <004DD6B0> vulkan/framebuffermgrvulkan.cpp:79
// variables: 2
// function calls: 3
void RenderPassHashFunctor_t::operator(const VulkanFramebufferState_t& framebufferState)
{
	uint32 nHash; // 92
	{
		int32 nRenderTarget; // 95
		HashCombine(uint32& nSeed,
				uint32 nHash);  // 97
		HashCombine(uint32& nSeed,
				uint32 nHash);  // 98
		HashCombine(uint32& nSeed,
				uint32 nHash);  // 99
	}
} /* size: 220, variables: 1 */

// <004DE47F> vulkan/framebuffermgrvulkan.cpp:108
// variable: 1
// function call: 1
void RenderPassEqualFunctor_t::operator(const VulkanFramebufferState_t& rhs, const VulkanFramebufferState_t& lhs)
{
	{
		int32 i; // 115
	}
	RenderPassEqualFunctor_t::operator(
			const VulkanFramebufferState_t& rhs,
			const VulkanFramebufferState_t& lhs);  // 108
} /* size: 141, inline expansions: 1 (59 bytes) */

// <004DD66F> vulkan/framebuffermgrvulkan.cpp:108
// variable: 1
void RenderPassEqualFunctor_t::operator(const VulkanFramebufferState_t& rhs, const VulkanFramebufferState_t& lhs)
{
	{
		int32 i; // 115
	}
} /* size: 0 */

// <004DD08D> vulkan/framebuffermgrvulkan.cpp:178
// function calls: 23
void CFramebufferMgrVulkan::CFramebufferMgrVulkan()
{
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CFramebufferMgrVulkan>::CConCommandMemberAccessor(
					CFramebufferMgrVulkan* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 140
	CConCommandMemberAccessor<CFramebufferMgrVulkan>::SetOwner(
		CFramebufferMgrVulkan* pOwner);  // 140
	CCommandMemberInitializer_OnPrintStats::CCommandMemberInitializer_OnPrintStats(); // 178
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::Init(); // 178
	CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::CUtlHashtable(
			int minimumSize);  // 178
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::Init(); // 178
	CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::CUtlHashtable(
			int minimumSize);  // 178
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::Init(); // 178
	CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::CUtlHashtable(
			int minimumSize);  // 178
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::Init(); // 178
	CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::CUtlHashtable(
			int minimumSize);  // 178
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 178
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 178
} /* size: 390, inline expansions: 23 (497 bytes) */

// <004DD074> vulkan/framebuffermgrvulkan.cpp:178
void CFramebufferMgrVulkan::CFramebufferMgrVulkan()
{
} /* size: 0 */

// <004DCACF> vulkan/framebuffermgrvulkan.cpp:182
// function calls: 26
void CFramebufferMgrVulkan::~CFramebufferMgrVulkan()
{
	ValidateAlignment<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T*> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::~CUtlMemory(); // 188
	CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::~CUtlHashtable(); // 185
	ValidateAlignment<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T*> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::~CUtlMemory(); // 188
	CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::~CUtlHashtable(); // 185
	ValidateAlignment<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T*> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::~CUtlMemory(); // 188
	CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::~CUtlHashtable(); // 185
	ValidateAlignment<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T*> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::~CUtlMemory(); // 188
	CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::~CUtlHashtable(); // 185
	CConCommandMemberAccessor<CFramebufferMgrVulkan>::~CConCommandMemberAccessor(); // 140
	CCommandMemberInitializer_OnPrintStats::~CCommandMemberInitializer_OnPrintStats(); // 185
} /* size: 266, inline expansions: 26 (512 bytes) */

// <004DCA67> vulkan/framebuffermgrvulkan.cpp:182
void CFramebufferMgrVulkan::~CFramebufferMgrVulkan()
{
} /* size: 36 */

// <004DCA0F> vulkan/framebuffermgrvulkan.cpp:190
void CFramebufferMgrVulkan::Init(VkDevice pDeviceVulkan)
{
} /* size: 17 */

// <004DBB86> vulkan/framebuffermgrvulkan.cpp:199
// variables: 16
// function calls: 60
void CFramebufferMgrVulkan::Shutdown()
{
	{
		UtlHashHandle_t hElem; // 201
		{
			VkFramebuffer pFramebuffer; // 203
			CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::operator[](
					int i);  // 297
			CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::operator[](
					handle_t idx);  // 203
		}
		CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::Count(); // 915
			CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::IsValid(); // 917
		}
		CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::NextHandle(
				handle_t start);  // 208
		CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::FirstHandle(); // 201
		CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::Count(); // 915
			CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::IsValid(); // 917
		}
		CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::NextHandle(
				handle_t start);  // 201
	}
	{
		UtlHashHandle_t hElem; // 207
		{
			VkFramebuffer pFramebuffer; // 209
			CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::operator[](
					int i);  // 297
			CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::operator[](
					handle_t idx);  // 209
		}
		CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::Count(); // 915
			CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::IsValid(); // 917
		}
		CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::NextHandle(
				handle_t start);  // 208
		CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::FirstHandle(); // 207
		CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::Count(); // 915
			CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::IsValid(); // 917
		}
		CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::NextHandle(
				handle_t start);  // 207
	}
	{
		UtlHashHandle_t hElem; // 214
		{
			VkRenderPass pRenderPass; // 216
			CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::operator[](
					int i);  // 297
			CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::operator[](
					handle_t idx);  // 216
		}
		CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::Count(); // 915
			CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::IsValid(); // 917
		}
		CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::NextHandle(
				handle_t start);  // 208
		CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::FirstHandle(); // 214
		CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::Count(); // 915
			CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::IsValid(); // 917
		}
		CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::NextHandle(
				handle_t start);  // 214
	}
	{
		UtlHashHandle_t hElem; // 220
		{
			VkRenderPass pRenderPass; // 222
			CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::operator[](
					int i);  // 297
			CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::operator[](
					handle_t idx);  // 222
		}
		CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::Count(); // 915
			CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::IsValid(); // 917
		}
		CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::NextHandle(
				handle_t start);  // 208
		CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::FirstHandle(); // 220
		CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::Count(); // 915
			CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::IsValid(); // 917
		}
		CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::NextHandle(
				handle_t start);  // 220
	}
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::Purge(); // 284
	CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::Purge(); // 206
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::Purge(); // 284
	CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::Purge(); // 212
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::Purge(); // 284
	CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::Purge(); // 219
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::Purge(); // 284
	CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::Purge(); // 225
} /* size: 1033, inline expansions: 16 (664 bytes) */

// <004DAFC0> vulkan/framebuffermgrvulkan.cpp:232
// variables: 7
// function calls: 35
void CFramebufferMgrVulkan::GetFramebuffer(VulkanFramebufferState_t& framebufferStateVulkan, VkRenderPass pRenderPass)
{
	VkFramebuffer pFramebufferVulkan; // 234
	FramebufferHashHandle_t hElem; // 235
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_242; // 242
		{
			uint32_t nColorTargets; // 250
			uint32_t nTotalTargets; // 251
			VkImageView* pAttachments; // 254
			VkFramebufferCreateInfo framebufferCreateInfo; // 265
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 257
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 262
			CUtlString::CUtlString(); // 149
			CUtlString::Get(); // 151
			CUtlString::~CUtlString(); // 153
			_DOVK(VkResult result,
				const char* pCommand);  // 275
			CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::operator[](
					int i);  // 720
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 39
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 40
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 39
			VulkanFramebufferState_t::VulkanFramebufferState_t(
						const VulkanFramebufferState_t& rhs);  // 64
			CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T::CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T*>(
											const VulkanFramebufferState_t& k,
											VkFramebuffer_T* const& v);  // 1514
			Construct<CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T*>, const VulkanFramebufferState_t&, VkFramebuffer_T*&>(CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T*>* pMemory); // 720
			CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::DoInsert<const VulkanFramebufferState_t&>(
									const VulkanFramebufferState_t& k,
									Arg_t v,
									unsigned int h,
									bool* pDidInsert);  // 714
			CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::DoInsert<const VulkanFramebufferState_t&>(
									const VulkanFramebufferState_t& k,
									Arg_t v,
									unsigned int h,
									bool* pDidInsert);  // 249
			CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::Insert(
				KeyArg_t k,
				ValueArg_t v,
				bool* pDidInsert);  // 277
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
				int nLineNumber);  // 242
		CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::Find(
			KeyArg_t k);  // 243
		CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::operator[](
				int i);  // 297
		CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::operator[](
				handle_t idx);  // 246
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 279
	}
	CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::Find(
		KeyArg_t k);  // 235
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::operator[](
			int i);  // 297
	CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::operator[](
			handle_t idx);  // 238
} /* size: 992, variables: 2, inline expansions: 3 (36 bytes) */

// <004DE525> vulkan/framebuffermgrvulkan.cpp:287
// variables: 19
// function calls: 37
void CFramebufferMgrVulkan::GetRenderPass(const VulkanFramebufferState_t& framebufferStateVulkan)
{
	VkRenderPass pRenderPass; // 289
	RenderPassHashHandle_t hElem; // 290
	CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::Find(
		KeyArg_t k);  // 290
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::operator[](
			int i);  // 297
	CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::operator[](
			handle_t idx);  // 293
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_297; // 297
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
				int nLineNumber);  // 297
		CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::Find(
			KeyArg_t k);  // 298
		CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::operator[](
				int i);  // 297
		CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::operator[](
				handle_t idx);  // 301
		{
			uint32_t nColorAttachments; // 305
			uint32_t nDepthStencilAttachments; // 306
			uint32_t nTotalAttachments; // 307
			VkAttachmentDescription* pAttachmentDescs; // 309
			VkAttachmentReference* pColorAttachmentRefs; // 311
			VkAttachmentReference depthStencilAttachmentRef; // 312
			bool bHasColor; // 315
			bool bHasDepthStencil; // 316
			int32_t nDescIndex; // 318
			VkSubpassDescription subPassCreateInfo; // 369
			VkRenderPassCreateInfo renderPassCreateInfo; // 381
			VkSubpassDependency subPassDependency; // 390
			ComputeAASettings(RenderMultisampleType_t nType,
						VkSampleCountFlagBits* pSampleCount);  // 326
			{
				VkImageLayout nDepthStencilLayout; // 341
				CRenderDeviceVulkan::KHRMaintenance2Enabled(); // 344
				ComputeAASettings(RenderMultisampleType_t nType,
							VkSampleCountFlagBits* pSampleCount);  // 355
				CRenderDeviceVulkan::EXTLoadStoreOpNoneEnabled(); // 360
			}
			CRenderDeviceVulkan::UseExternalSubpassDependency(); // 391
			{
				VkPipelineStageFlags stageMask; // 398
				VkAccessFlags srcAccessMask; // 399
				VkAccessFlags dstAccestMask; // 400
			}
			CUtlString::CUtlString(); // 149
			CUtlString::Get(); // 151
			CUtlString::~CUtlString(); // 153
			_DOVK(VkResult result,
				const char* pCommand);  // 425
			CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::operator[](
					int i);  // 720
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 39
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 40
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 39
			VulkanFramebufferState_t::VulkanFramebufferState_t(
						const VulkanFramebufferState_t& rhs);  // 64
			CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T::CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T*>(
											const VulkanFramebufferState_t& k,
											VkRenderPass_T* const& v);  // 1514
			Construct<CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T*>, const VulkanFramebufferState_t&, VkRenderPass_T*&>(CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T*>* pMemory); // 720
			CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::DoInsert<const VulkanFramebufferState_t&>(
									const VulkanFramebufferState_t& k,
									Arg_t v,
									unsigned int h,
									bool* pDidInsert);  // 714
			CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::DoInsert<const VulkanFramebufferState_t&>(
									const VulkanFramebufferState_t& k,
									Arg_t v,
									unsigned int h,
									bool* pDidInsert);  // 249
			CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::Insert(
				KeyArg_t k,
				ValueArg_t v,
				bool* pDidInsert);  // 427
		}
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 432
	}
	CFramebufferMgrVulkan::GetRenderPass(
			const VulkanFramebufferState_t& framebufferStateVulkan);  // 287
} /* size: 0, variables: 2, inline expansions: 4 (1862 bytes) */

// <004DAE8A> vulkan/framebuffermgrvulkan.cpp:287
// variables: 19
void CFramebufferMgrVulkan::GetRenderPass(const VulkanFramebufferState_t& framebufferStateVulkan)
{
	VkRenderPass pRenderPass; // 289
	RenderPassHashHandle_t hElem; // 290
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_297; // 297
		{
			uint32_t nColorAttachments; // 305
			uint32_t nDepthStencilAttachments; // 306
			uint32_t nTotalAttachments; // 307
			VkAttachmentDescription* pAttachmentDescs; // 309
			VkAttachmentReference* pColorAttachmentRefs; // 311
			VkAttachmentReference depthStencilAttachmentRef; // 312
			bool bHasColor; // 315
			bool bHasDepthStencil; // 316
			int32_t nDescIndex; // 318
			VkSubpassDescription subPassCreateInfo; // 369
			VkRenderPassCreateInfo renderPassCreateInfo; // 381
			VkSubpassDependency subPassDependency; // 390
			{
				VkImageLayout nDepthStencilLayout; // 341
			}
			{
				VkPipelineStageFlags stageMask; // 398
				VkAccessFlags srcAccessMask; // 399
				VkAccessFlags dstAccestMask; // 400
			}
		}
	}
} /* size: 0, variables: 2 */

// <004DAB43> vulkan/framebuffermgrvulkan.cpp:441
// variable: 1
// function calls: 10
void CFramebufferMgrVulkan::GetRenderPassForPreWarming(const VulkanFramebufferState_t& framebufferStateVulkan)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_443; // 443
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
			int nLineNumber);  // 443
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 445
} /* size: 178, variables: 1, inline expansions: 10 (421 bytes) */

// <004D9AE5> vulkan/framebuffermgrvulkan.cpp:447
// variables: 7
// function calls: 64
void CFramebufferMgrVulkan::UpdatePendingObjects()
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_449; // 449
	{
		UtlHashHandle_t hElem; // 451
		CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::Count(); // 915
			CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::IsValid(); // 917
		}
		CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::NextHandle(
				handle_t start);  // 208
		CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::FirstHandle(); // 451
		CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::operator[](
				int i);  // 297
		CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::operator[](
				handle_t idx);  // 453
		CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::operator[](
				int i);  // 720
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 39
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 40
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 39
		VulkanFramebufferState_t::VulkanFramebufferState_t(
					const VulkanFramebufferState_t& rhs);  // 64
		CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T::CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T*>(
										const VulkanFramebufferState_t& k,
										VkFramebuffer_T* const& v);  // 1514
		Construct<CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T*>, const VulkanFramebufferState_t&, VkFramebuffer_T*&>(CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T*>* pMemory); // 720
		CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::DoInsert<const VulkanFramebufferState_t&>(
								const VulkanFramebufferState_t& k,
								Arg_t v,
								unsigned int h,
								bool* pDidInsert);  // 714
		CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::DoInsert<const VulkanFramebufferState_t&>(
								const VulkanFramebufferState_t& k,
								Arg_t v,
								unsigned int h,
								bool* pDidInsert);  // 249
		CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::Insert(
			KeyArg_t k,
			ValueArg_t v,
			bool* pDidInsert);  // 453
		CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::Key(
			handle_t idx);  // 453
		CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::Count(); // 915
			CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::IsValid(); // 917
		}
		CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::NextHandle(
				handle_t start);  // 451
	}
	{
		UtlHashHandle_t hElem; // 457
		CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::Count(); // 915
			CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::IsValid(); // 917
		}
		CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::NextHandle(
				handle_t start);  // 208
		CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::FirstHandle(); // 457
		CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::operator[](
				int i);  // 297
		CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::operator[](
				handle_t idx);  // 459
		CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::operator[](
				int i);  // 720
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 39
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 40
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 39
		VulkanFramebufferState_t::VulkanFramebufferState_t(
					const VulkanFramebufferState_t& rhs);  // 64
		CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T::CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T*>(
										const VulkanFramebufferState_t& k,
										VkRenderPass_T* const& v);  // 1514
		Construct<CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T*>, const VulkanFramebufferState_t&, VkRenderPass_T*&>(CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T*>* pMemory); // 720
		CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::DoInsert<const VulkanFramebufferState_t&>(
								const VulkanFramebufferState_t& k,
								Arg_t v,
								unsigned int h,
								bool* pDidInsert);  // 714
		CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::DoInsert<const VulkanFramebufferState_t&>(
								const VulkanFramebufferState_t& k,
								Arg_t v,
								unsigned int h,
								bool* pDidInsert);  // 249
		CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::Insert(
			KeyArg_t k,
			ValueArg_t v,
			bool* pDidInsert);  // 459
		CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::Key(
			handle_t idx);  // 459
		CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::Count(); // 915
			CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::IsValid(); // 917
		}
		CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::NextHandle(
				handle_t start);  // 457
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
			int nLineNumber);  // 449
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::Purge(); // 284
	CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::Purge(); // 455
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T::Purge(); // 284
	CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::Purge(); // 461
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 462
} /* size: 1020, variables: 1, inline expansions: 18 (808 bytes) */

// <004D861B> vulkan/framebuffermgrvulkan.cpp:467
// variables: 17
// function calls: 85
void CFramebufferMgrVulkan::DestroyObjectsReferencing(CPipelineManagerVulkan* pPipelineManager, VkImage pImage)
{
	const char   __FUNCTION__; // 7939
	CUtlVectorFixedGrowable<VulkanFramebufferState_t, 128> toDelete; // 472
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 469
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 470
	}
	{
		UtlHashHandle_t hElem; // 475
		{
			const VulkanFramebufferState_t& framebufferState; // 477
			bool bUsedByFramebuffer; // 478
			{
				int32 nAttachment; // 479
			}
			{
				int nToDeleteIndex; // 503
				CUtlMemory<VulkanFramebufferState_t, int>::NumAllocated(); // 1143
				CUtlMemory<VulkanFramebufferState_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<VulkanFramebufferState_t, CUtlMemoryFixedGrowable<VulkanFramebufferState_t, 128, int> >::Element(
					int i);  // 1148
				memset(void* __dest,
					int __ch,
					size_t __len);  // 67
				V_memset(void* dest,
					int fill,
					size_t count);  // 31
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 30
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 30
				VulkanFramebufferState_t::VulkanFramebufferState_t(); // 1479
				Construct<VulkanFramebufferState_t>(VulkanFramebufferState_t* pMemory); // 1148
				CUtlMemory<VulkanFramebufferState_t, int>::IsGrowable(); // 823
				CUtlMemory<VulkanFramebufferState_t, int>::IsExternallyAllocated(); // 859
				CUtlMemory<VulkanFramebufferState_t, int>::IsExternallyAllocated(); // 861
				CUtlMemory<VulkanFramebufferState_t, int>::Grow(
					int num);  // 806
				CUtlVectorBase<VulkanFramebufferState_t, CUtlMemoryFixedGrowable<VulkanFramebufferState_t, 128, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<VulkanFramebufferState_t, CUtlMemoryFixedGrowable<VulkanFramebufferState_t, 128, int> >::GrowMemory(
						int num);  // 1145
				CUtlVectorBase<VulkanFramebufferState_t, CUtlMemoryFixedGrowable<VulkanFramebufferState_t, 128, int> >::AddToTail(); // 503
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 504
				CUtlMemory<VulkanFramebufferState_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<VulkanFramebufferState_t, CUtlMemoryFixedGrowable<VulkanFramebufferState_t, 128, int> >::operator[](
						int i);  // 504
			}
			CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::operator[](
					int i);  // 293
			CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::Key(
				handle_t idx);  // 477
		}
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::Count(); // 915
			CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::IsValid(); // 917
		}
		CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::Base(); // 914
		CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::NextHandle(
				handle_t start);  // 208
		CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::FirstHandle(); // 475
		CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::Count(); // 915
			CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::IsValid(); // 917
		}
		CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::NextHandle(
				handle_t start);  // 475
	}
	{
		int32 nDeleteIndex; // 509
		{
			const VulkanFramebufferState_t& framebufferState; // 511
			FramebufferHashHandle_t hFramebuffer; // 514
			{
				unsigned int chainid; // 776
				unsigned int nextIdx; // 777
				CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::operator[](
						int i);  // 781
				CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::IdealIndex(
						uint32 slotmask);  // 781
				CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::operator[](
						int i);  // 789
				CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::operator[](
						int i);  // 790
				CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::operator[](
						int i);  // 790
				{
					int i; // 121
				}
				CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::MoveDataFrom(
						CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T*>& src);  // 790
				CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::operator[](
						int i);  // 791
				CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::MarkInvalid(); // 791
			}
			CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::Count(); // 747
			CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::operator[](
					int i);  // 756
			CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::IdealIndex(
					uint32 slotmask);  // 757
			CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::MarkInvalid(); // 760
			CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::operator[](
					int i);  // 761
			CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::operator[](
					int i);  // 769
			CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::DoRemove<const VulkanFramebufferState_t&>(
									const VulkanFramebufferState_t& x,
									unsigned int h);  // 875
			CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::operator[](
					int i);  // 875
			CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::RemoveByHandle(
					UtlHashHandle_t idx);  // 518
			CUtlMemory<VulkanFramebufferState_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VulkanFramebufferState_t, CUtlMemoryFixedGrowable<VulkanFramebufferState_t, 128, int> >::operator[](
					int i);  // 511
			CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::Find(
				KeyArg_t k);  // 514
			CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T::operator[](
					int i);  // 297
			CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::operator[](
					handle_t idx);  // 517
		}
		CUtlVectorBase<VulkanFramebufferState_t, CUtlMemoryFixedGrowable<VulkanFramebufferState_t, 128, int> >::Count(); // 509
	}
	CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::Count(); // 469
	CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::Count(); // 470
	CUtlMemory<VulkanFramebufferState_t, int>::CUtlMemory(
			VulkanFramebufferState_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<VulkanFramebufferState_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<VulkanFramebufferState_t, int>::CUtlMemoryFixedGrowable_Base(
					VulkanFramebufferState_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<128, VulkanFramebufferState_t, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<128, VulkanFramebufferState_t>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<128, VulkanFramebufferState_t, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<VulkanFramebufferState_t, 128, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<VulkanFramebufferState_t, CUtlMemoryFixedGrowable<VulkanFramebufferState_t, 128, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VulkanFramebufferState_t, CUtlMemoryFixedGrowable<VulkanFramebufferState_t, 128, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<VulkanFramebufferState_t, 128>::CUtlVectorFixedGrowable(
				int growSize);  // 472
	CUtlMemory<VulkanFramebufferState_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<VulkanFramebufferState_t, int>::ConvertToExternalMemory(
				VulkanFramebufferState_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<VulkanFramebufferState_t, int>::Purge_FixedGrowable(
				VulkanFramebufferState_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<VulkanFramebufferState_t, int>::Purge_FixedGrowable(
				VulkanFramebufferState_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<128, VulkanFramebufferState_t, 8>::Base(); // 237
	CUtlMemoryFixedGrowable<VulkanFramebufferState_t, 128, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<VulkanFramebufferState_t, CUtlMemoryFixedGrowable<VulkanFramebufferState_t, 128, int> >::RemoveAll(); // 1798
	CUtlMemory<VulkanFramebufferState_t, int>::Base(); // 112
	CUtlVectorBase<VulkanFramebufferState_t, CUtlMemoryFixedGrowable<VulkanFramebufferState_t, 128, int> >::Base(); // 368
	CUtlVectorBase<VulkanFramebufferState_t, CUtlMemoryFixedGrowable<VulkanFramebufferState_t, 128, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<VulkanFramebufferState_t, CUtlMemoryFixedGrowable<VulkanFramebufferState_t, 128, int> >::Purge(); // 560
	CUtlMemory<VulkanFramebufferState_t, int>::Purge(); // 903
	CUtlMemory<VulkanFramebufferState_t, int>::Purge(); // 510
	ValidateAlignment<VulkanFramebufferState_t>(void); // 508
	CUtlMemory<VulkanFramebufferState_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<VulkanFramebufferState_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<VulkanFramebufferState_t, 128, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<VulkanFramebufferState_t, CUtlMemoryFixedGrowable<VulkanFramebufferState_t, 128, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<VulkanFramebufferState_t, 128>::~CUtlVectorFixedGrowable(); // 521
} /* size: 0, variables: 2, inline expansions: 31 (1242 bytes) */

// <004D840C> vulkan/framebuffermgrvulkan.cpp:526
// function calls: 4
void CFramebufferMgrVulkan::OnPrintStats(const CCommandContext& ctx, const CCommand& args)
{
	CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::Count(); // 529
	CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::Count(); // 529
	CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::Count(); // 530
	CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::Count(); // 530
} /* size: 211, inline expansions: 4 (0 bytes) */

// <004D82B1> vulkan/framebuffermgrvulkan.cpp:536
// function calls: 4
void CFramebufferMgrVulkan::AppendStatsSummaryString(CBufferString* pOut)
{
	CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::Count(); // 540
	CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T::Count(); // 540
	CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::Count(); // 539
	CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T::Count(); // 539
} /* size: 102, inline expansions: 4 (0 bytes) */

