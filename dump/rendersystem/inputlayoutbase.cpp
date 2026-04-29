
//
// rendersystem/inputlayoutbase.cpp
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 10
//

// <0004827D> rendersystem/inputlayoutbase.cpp:18
// function calls: 4
void CInputLayoutBase::CInputLayoutBase(int nFieldCount, const RenderInputLayoutField_t* pFieldDescs, const char* pDebugName)
{
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 18
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 22
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 23
} /* size: 113, inline expansions: 4 (45 bytes) */

// <0004823C> rendersystem/inputlayoutbase.cpp:18
void CInputLayoutBase::CInputLayoutBase(int nFieldCount, const RenderInputLayoutField_t* pFieldDescs, const char* pDebugName)
{
} /* size: 0 */

// <000481F9> rendersystem/inputlayoutbase.cpp:30
void CInputLayoutBase::~CInputLayoutBase()
{
} /* size: 25 */

// <0004814C> rendersystem/inputlayoutbase.cpp:39
// function calls: 2
void CInputLayoutBase::AddRef()
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 41
} /* size: 18, inline expansions: 2 (26 bytes) */

// <0004805D> rendersystem/inputlayoutbase.cpp:44
// variables: 2
// function calls: 3
void CInputLayoutBase::Release()
{
	const char   __FUNCTION__; // 17626
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 47
	}
	CInterlockedIntT<int, 4>::operator int(); // 47
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 48
} /* size: 0, variables: 1, inline expansions: 3 (29 bytes) */

// <0004805D> rendersystem/inputlayoutbase.cpp:44
// variables: 2
// function calls: 3
void CInputLayoutBase::Release()
{
	const char   __FUNCTION__; // 53255
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 47
	}
	CInterlockedIntT<int, 4>::operator int(); // 47
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 48
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <00047FE5> rendersystem/inputlayoutbase.cpp:55
// variables: 3
void CInputLayoutBase::GetSlotsUsed()
{
	int nCurrentSlot; // 57
	int nSlotsUsed; // 58
	{
		int f; // 59
	}
} /* size: 133, variables: 2 */

// <00047E77> rendersystem/inputlayoutbase.cpp:77
// variables: 4
// function calls: 2
void CInputLayoutBase::AddFieldsToLayout(int nMaxOutputFields, RenderInputLayoutField_t* pOutputFields, int nStartSlot)
{
	int nToCopy; // 79
	int nCurrentSlot; // 85
	int nSlotsUsed; // 86
	{
		int f; // 87
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 82
} /* size: 212, variables: 3, inline expansions: 2 (26 bytes) */

// <00047BFB> rendersystem/inputlayoutbase.cpp:106
// variables: 2
// function calls: 8
void GetFriendlyShaderSemanticToActualSemanticMapping(const char ** pSemanticOut, uint32* pSemanticIndexOut, const char* pSemanticIn, const CVsInputSignatureVector* pInputSignatureIn)
{
	int nVSSlots; // 108
	{
		int v; // 109
		CUtlMemory<VsInputSignatureElement_t, int>::operator[](
				int i);  // 609
		CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::Element(
			int i);  // 111
		V_strnicmp_fast<int>(const char* s1,
					const char* s2,
					int n);  // 111
		CUtlMemory<VsInputSignatureElement_t, int>::operator[](
				int i);  // 609
		CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::Element(
			int i);  // 113
		CUtlMemory<VsInputSignatureElement_t, int>::operator[](
				int i);  // 609
		CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::Element(
			int i);  // 114
	}
	CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::Count(); // 108
} /* size: 177, variables: 1, inline expansions: 1 (4 bytes) */

// <00047BCA> rendersystem/inputlayoutbase.cpp:122
void CInputLayoutBase::GetFieldDescs()
{
} /* size: 9 */

