
//
// vfx/vfx_vulkan/vfx_vulkan.cpp
//
//	referenced by: libvfx_vulkan.so
//
//	functions: 10
//

// <00053A61> vfx/vfx_vulkan/vfx_vulkan.cpp:8
void* __CreateCVfxVulkanIVfx_interface(void)
{
} /* size: 12 */

// <000536C3> vfx/vfx_vulkan/vfx_vulkan.cpp:10
// function calls: 13
void CVfxVulkan::CVfxVulkan()
{
	IVfx::IVfx(); // 10
	CUtlMemory<VfxCompileTarget_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VfxCompileTarget_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VfxCompileTarget_t, CUtlMemory<VfxCompileTarget_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VfxCompileTarget_t, CUtlMemory<VfxCompileTarget_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VfxCompileTarget_t, CUtlMemory<VfxCompileTarget_t, int> >::CUtlVector(); // 10
	CUtlMemory<VfxCompileTarget_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<VfxCompileTarget_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<VfxCompileTarget_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<VfxCompileTarget_t, CUtlMemory<VfxCompileTarget_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<VfxCompileTarget_t, CUtlMemory<VfxCompileTarget_t, int> >::GrowMemory(
			int num);  // 1249
	Construct<VfxCompileTarget_t, VfxCompileTarget_t>(VfxCompileTarget_t* pMemory); // 1252
	CUtlVectorBase<VfxCompileTarget_t, CUtlMemory<VfxCompileTarget_t, int> >::AddToTail(
			VfxCompileTarget_t& src);  // 12
} /* size: 172, inline expansions: 13 (346 bytes) */

// <000536AA> vfx/vfx_vulkan/vfx_vulkan.cpp:10
void CVfxVulkan::CVfxVulkan()
{
} /* size: 0 */

// <0005354A> vfx/vfx_vulkan/vfx_vulkan.cpp:15
// function calls: 7
void CVfxVulkan::~CVfxVulkan()
{
	CUtlMemory<VfxCompileTarget_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VfxCompileTarget_t, int>::Purge(); // 903
	CUtlMemory<VfxCompileTarget_t, int>::Purge(); // 1799
	CUtlVectorBase<VfxCompileTarget_t, CUtlMemory<VfxCompileTarget_t, int> >::RemoveAll(); // 1798
	CUtlVectorBase<VfxCompileTarget_t, CUtlMemory<VfxCompileTarget_t, int> >::Purge(); // 560
	CUtlVectorBase<VfxCompileTarget_t, CUtlMemory<VfxCompileTarget_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VfxCompileTarget_t, CUtlMemory<VfxCompileTarget_t, int> >::~CUtlVector(); // 17
} /* size: 49, inline expansions: 7 (154 bytes) */

// <0005330A> vfx/vfx_vulkan/vfx_vulkan.cpp:15
// function calls: 11
void CVfxVulkan::~CVfxVulkan()
{
	CUtlMemory<VfxCompileTarget_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VfxCompileTarget_t, int>::Purge(); // 903
	CUtlMemory<VfxCompileTarget_t, int>::Purge(); // 1799
	CUtlVectorBase<VfxCompileTarget_t, CUtlMemory<VfxCompileTarget_t, int> >::RemoveAll(); // 1798
	CUtlVectorBase<VfxCompileTarget_t, CUtlMemory<VfxCompileTarget_t, int> >::Purge(); // 560
	ValidateAlignment<VfxCompileTarget_t>(void); // 508
	CUtlMemory<VfxCompileTarget_t, int>::Purge(); // 510
	CUtlMemory<VfxCompileTarget_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VfxCompileTarget_t, CUtlMemory<VfxCompileTarget_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VfxCompileTarget_t, CUtlMemory<VfxCompileTarget_t, int> >::~CUtlVector(); // 17
	CVfxVulkan::~CVfxVulkan(); // 17
} /* size: 93, inline expansions: 11 (198 bytes) */

// <000532F1> vfx/vfx_vulkan/vfx_vulkan.cpp:15
void CVfxVulkan::~CVfxVulkan()
{
} /* size: 0 */

// <00053C71> vfx/vfx_vulkan/vfx_vulkan.cpp:19
// variable: 1
// function calls: 2
void CVfxVulkan::Init(CreateInterfaceFn fsFactory)
{
	{
		int* _pCrash; // 26
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 26
	CVfxVulkan::Init(
		CreateInterfaceFn fsFactory);  // 19
} /* size: 202, inline expansions: 2 (133 bytes) */

// <000532B1> vfx/vfx_vulkan/vfx_vulkan.cpp:19
// variables: 2
void CVfxVulkan::Init(CreateInterfaceFn fsFactory)
{
	const char   __FUNCTION__; // 26435
	{
		int* _pCrash; // 26
	}
} /* size: 0, variables: 1 */

// <00053281> vfx/vfx_vulkan/vfx_vulkan.cpp:35
void CVfxVulkan::GetSupportedCompileTargets()
{
} /* size: 9 */

// <00053211> vfx/vfx_vulkan/vfx_vulkan.cpp:40
// variable: 1
void CVfxVulkan::ClearShaderCache()
{
	CVfxCompiledShaderCache shaderCache; // 43
} /* size: 70, variables: 1 */

