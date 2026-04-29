
//
// tier0/eventutils.cpp
//
//	referenced by: libtier0.so
//
//	functions: 6
//

// <00138107> tier0/eventutils.cpp:13
// function calls: 2
void COneTimeEvent::COneTimeEvent()
{
	IRefCounted::IRefCounted(); // 15
	CInterlockedIntT<int, 4>::CInterlockedIntT(
			int value);  // 15
} /* size: 0, inline expansions: 2 (0 bytes) */

// <001380EE> tier0/eventutils.cpp:13
void COneTimeEvent::COneTimeEvent()
{
} /* size: 0 */

// <00137D67> tier0/eventutils.cpp:21
// variables: 3
// function calls: 12
void Allocate(void)
{
	COneTimeEvent* pRet; // 23
	const char   __FUNCTION__; // 48937
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 24
	}
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 376
	IRefCounted::IRefCounted(); // 15
	CInterlockedIntT<int, 4>::CInterlockedIntT(
			int value);  // 15
	COneTimeEvent::COneTimeEvent(); // 341
	simpleTSPoolStruct_t::simpleTSPoolStruct_t(); // 382
	CTSPool<COneTimeEvent>::GetObject(); // 23
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 24
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 25
} /* size: 0, variables: 2, inline expansions: 12 (503 bytes) */

// <00137CD8> tier0/eventutils.cpp:30
// function calls: 2
void COneTimeEvent::AddRef()
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 33
} /* size: 21, inline expansions: 2 (32 bytes) */

// <00138524> tier0/eventutils.cpp:36
// variable: 1
// function calls: 8
void COneTimeEvent::Release()
{
	int nRet; // 39
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 39
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 371
	CTSPool<COneTimeEvent>::PutObject(
			COneTimeEvent* pInfo);  // 42
	COneTimeEvent::Release(); // 36
} /* size: 135, variables: 1, inline expansions: 8 (282 bytes) */

// <00137CB3> tier0/eventutils.cpp:36
// variable: 1
void COneTimeEvent::Release()
{
	int nRet; // 39
} /* size: 0, variables: 1 */

