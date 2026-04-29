
//
// vanimlib/animationresource.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//

// <031DA733> vanimlib/animationresource.cpp:8
// function calls: 3
void CAnimationResource::CAnimationResource()
{
	CSmartPtr<CAnimData, CRefCountAccessor>::CSmartPtr(); // 8
	CUtlString::CUtlString(); // 8
	CSmartPtr<CAnimData, CRefCountAccessor>::operator=(
			CAnimData* pObj);  // 10
} /* size: 27, inline expansions: 3 (8 bytes) */

// <031DA717> vanimlib/animationresource.cpp:8
void CAnimationResource::CAnimationResource()
{
} /* size: 0 */

// <031DA299> vanimlib/animationresource.cpp:19
// variables: 2
// function calls: 19
void CAnimationResource::InitFromV0Data(CAnimData* pData, const char* pName)
{
	const char   __FUNCTION__; // 48743
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 21
	}
	CSmartPtr<CAnimData, CRefCountAccessor>::operator==(
			const CAnimData* pOther);  // 21
	CUtlString::operator=(
			const char* src);  // 22
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimData>(CAnimData* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase(); // 185
	CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase(); // 208
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
	Release<CAnimData>(CAnimData* pObj); // 370
	CSmartPtr<CAnimData, CRefCountAccessor>::operator=(
			CAnimData* pObj);  // 23
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 41
	CAnimationResource::Finalize(); // 24
} /* size: 0, variables: 1, inline expansions: 19 (647 bytes) */

// <031DAA6F> vanimlib/animationresource.cpp:27
// variables: 4
// function calls: 3
void CAnimationResource::Finalize()
{
	const CAnimData* pData; // 29
	const int  maxIndex; // 36
	const uint32  range; // 40
	const uint32  base; // 41
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 29
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 41
} /* size: 0, variables: 4, inline expansions: 3 (0 bytes) */

// <031DA24D> vanimlib/animationresource.cpp:27
// variables: 4
void CAnimationResource::Finalize()
{
	const CAnimData* pData; // 29
	const int  maxIndex; // 36
	const uint32  range; // 40
	const uint32  base; // 41
} /* size: 0, variables: 4 */

// <031DA1CE> vanimlib/animationresource.cpp:45
// variable: 1
// function call: 1
void CAnimationResource::GetCacheKey(int nLocalIndex)
{
	const CAnimData* pData; // 47
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 47
} /* size: 41, variables: 1, inline expansions: 1 (4 bytes) */

