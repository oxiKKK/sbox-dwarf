
//
// rendersystem/indexbufferbase.cpp
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 12
//

// <0002A09E> rendersystem/indexbufferbase.cpp:21
bool InDeveloperMode(void)
{
} /* size: 0 */

// <0002AD99> rendersystem/indexbufferbase.cpp:26
// function calls: 4
void CIndexBufferBase::CIndexBufferBase(RenderBufferType_t nType, const BufferDesc_t& desc)
{
	CRenderResource::CRenderResource(
			RenderResourceType_t nType);  // 26
	CUtlString::CUtlString(); // 26
	CUtlString::operator=(
			const char* src);  // 45
	CIndexBufferBase::CIndexBufferBase(
			RenderBufferType_t nType,
			const BufferDesc_t& desc);  // 26
} /* size: 130, inline expansions: 4 (32 bytes) */

// <0002AD68> rendersystem/indexbufferbase.cpp:26
void CIndexBufferBase::CIndexBufferBase(RenderBufferType_t nType, const BufferDesc_t& desc)
{
} /* size: 0 */

// <0002AC7F> rendersystem/indexbufferbase.cpp:50
// function calls: 3
void CIndexBufferBase::~CIndexBufferBase()
{
	CIndexBufferBase::GetBufferType(); // 97
	CIndexBufferBase::FreeBackingStore(); // 52
	CUtlString::~CUtlString(); // 53
} /* size: 118, inline expansions: 3 (77 bytes) */

// <0002AB23> rendersystem/indexbufferbase.cpp:50
// function calls: 5
void CIndexBufferBase::~CIndexBufferBase()
{
	CIndexBufferBase::GetBufferType(); // 97
	CIndexBufferBase::FreeBackingStore(); // 52
	CUtlString::~CUtlString(); // 53
	CRenderResource::~CRenderResource(); // 53
	CIndexBufferBase::~CIndexBufferBase(); // 53
} /* size: 121, inline expansions: 5 (144 bytes) */

// <0002AB0A> rendersystem/indexbufferbase.cpp:50
void CIndexBufferBase::~CIndexBufferBase()
{
} /* size: 0 */

// <0002AAA0> rendersystem/indexbufferbase.cpp:59
// function call: 1
void CIndexBufferBase::GetDebugName()
{
	CUtlString::Get(); // 64
} /* size: 69, inline expansions: 1 (18 bytes) */

// <0002A9AC> rendersystem/indexbufferbase.cpp:79
// variables: 2
// function call: 1
void* CIndexBufferBase::AllocateBackingStore(int nSizeInBytes)
{
	const char   __FUNCTION__; // 57062
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
	}
	CIndexBufferBase::GetBufferType(); // 82
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <0002B2DF> rendersystem/indexbufferbase.cpp:93
// function call: 1
void CIndexBufferBase::FreeBackingStore()
{
	CIndexBufferBase::GetBufferType(); // 97
} /* size: 97, inline expansions: 1 (0 bytes) */

// <0002A993> rendersystem/indexbufferbase.cpp:93
void CIndexBufferBase::FreeBackingStore()
{
} /* size: 0 */

// <0002A83D> rendersystem/indexbufferbase.cpp:113
// function calls: 5
void CIndexBufferBase::RegisterAllocation(int nSizeInBytes)
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 115
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 669
	CInterlockedIntT<int, 4>::operator+=(
			int add);  // 116
} /* size: 20, inline expansions: 5 (38 bytes) */

// <0002A6BD> rendersystem/indexbufferbase.cpp:130
// function calls: 6
void CIndexBufferBase::RegisterDeallocation(int nSizeInBytes)
{
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 132
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 669
	CInterlockedIntT<int, 4>::operator+=(
			int add);  // 675
	CInterlockedIntT<int, 4>::operator-=(
			int subtract);  // 133
} /* size: 22, inline expansions: 6 (47 bytes) */

