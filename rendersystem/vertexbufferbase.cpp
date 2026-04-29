
//
// rendersystem/vertexbufferbase.cpp
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 14
//

// <003C4DCA> rendersystem/vertexbufferbase.cpp:36
// function calls: 8
void CVertexBufferBase::CVertexBufferBase(RenderBufferType_t nType, const BufferDesc_t& desc)
{
	{
		{
		}
	}
	{
		CRenderResource::CRenderResource(
				RenderResourceType_t nType);  // 36
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 36
		{
		}
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 1114
		CBufferString::operator=(
				const char* pSrc);  // 56
	}
} /* size: 0 */

// <003C4D76> rendersystem/vertexbufferbase.cpp:36
// variables: 2
void CVertexBufferBase::CVertexBufferBase(RenderBufferType_t nType, const BufferDesc_t& desc)
{
	const char   __FUNCTION__; // 925
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 41
	}
} /* size: 0, variables: 1 */

// <0034B244> rendersystem/vertexbufferbase.cpp:36
// variables: 2
void CVertexBufferBase::CVertexBufferBase(RenderBufferType_t nType, const BufferDesc_t& desc)
{
	const char   __FUNCTION__; // 62360
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 41
	}
} /* size: 0, variables: 1 */

// <003C4C8B> rendersystem/vertexbufferbase.cpp:61
// function calls: 3
void CVertexBufferBase::~CVertexBufferBase()
{
	CVertexBufferBase::GetBufferType(); // 108
	CVertexBufferBase::FreeBackingStore(); // 63
	CBufferString::~CBufferString(); // 64
} /* size: 94, inline expansions: 3 (59 bytes) */

// <003C4B2E> rendersystem/vertexbufferbase.cpp:61
// function calls: 5
void CVertexBufferBase::~CVertexBufferBase()
{
	CVertexBufferBase::GetBufferType(); // 108
	CVertexBufferBase::FreeBackingStore(); // 63
	CBufferString::~CBufferString(); // 64
	CRenderResource::~CRenderResource(); // 64
	CVertexBufferBase::~CVertexBufferBase(); // 64
} /* size: 110, inline expansions: 5 (124 bytes) */

// <003C4B15> rendersystem/vertexbufferbase.cpp:61
void CVertexBufferBase::~CVertexBufferBase()
{
} /* size: 0 */

// <003C4A3F> rendersystem/vertexbufferbase.cpp:70
// function calls: 3
void CVertexBufferBase::GetDebugName()
{
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 75
} /* size: 68, inline expansions: 3 (80 bytes) */

// <003C494C> rendersystem/vertexbufferbase.cpp:90
// variables: 2
// function call: 1
void* CVertexBufferBase::AllocateBackingStore(int nSizeInBytes)
{
	const char   __FUNCTION__; // 996
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 92
	}
	CVertexBufferBase::GetBufferType(); // 93
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <0034AE1A> rendersystem/vertexbufferbase.cpp:90
// variables: 2
// function call: 1
void* CVertexBufferBase::AllocateBackingStore(int nSizeInBytes)
{
	const char   __FUNCTION__; // 62431
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 92
	}
	CVertexBufferBase::GetBufferType(); // 93
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <003C5572> rendersystem/vertexbufferbase.cpp:104
// function call: 1
void CVertexBufferBase::FreeBackingStore()
{
	CVertexBufferBase::GetBufferType(); // 108
} /* size: 97, inline expansions: 1 (0 bytes) */

// <003C4933> rendersystem/vertexbufferbase.cpp:104
void CVertexBufferBase::FreeBackingStore()
{
} /* size: 0 */

// <003C47DC> rendersystem/vertexbufferbase.cpp:124
// function calls: 5
void CVertexBufferBase::RegisterAllocation(int nSizeInBytes)
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 126
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 669
	CInterlockedIntT<int, 4>::operator+=(
			int add);  // 127
} /* size: 20, inline expansions: 5 (38 bytes) */

// <003C465B> rendersystem/vertexbufferbase.cpp:141
// function calls: 6
void CVertexBufferBase::RegisterDeallocation(int nSizeInBytes)
{
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 143
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 669
	CInterlockedIntT<int, 4>::operator+=(
			int add);  // 675
	CInterlockedIntT<int, 4>::operator-=(
			int subtract);  // 144
} /* size: 22, inline expansions: 6 (47 bytes) */

// <003C45A8> rendersystem/vertexbufferbase.cpp:159
void CVertexBufferBase::CreateInputLayouts(IRenderDevice* pRenderDevice, int nLayoutFields, const RenderInputLayoutField_t* pVBFields, bool bHasInstanceIDInHW)
{
} /* size: 46 */

