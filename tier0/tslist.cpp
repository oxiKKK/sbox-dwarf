
//
// tier0/tslist.cpp
//
//	referenced by: libtier0.so
//
//	functions: 36
//

// <004FCB02> tier0/tslist.cpp:45
void CTestOps::Validate()
{
} /* size: 0 */

// <004FC341> tier0/tslist.cpp:51
// variable: 1
// function calls: 25
void CQueueOps::Push(int item)
{
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 1085
	CopyConstruct<int>(int* pMemory,
				const int& src);  // 1090
	{
	}
	{
	}
	{
		Node_t* pCurEnd; // 977
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 416
		ThreadInterlockedCompareExchangePointer(volatile void** p,
							void* value,
							void* comparand);  // 1142
		CTSQueue<int, true>::InterlockedCompareExchangeNode(
						volatile Node_t** ppNode,
						Node_t* value,
						Node_t* comperand);  // 977
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<int, true>::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<int, true>::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 985
		{
		}
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<int, true>::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1135
	CTSQueue<int, true>::FinishPush(
			Node_t* pNode,
			const union NodeLink_t& oldTail);  // 991
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 993
	CTSQueue<int, true>::Push(
		Node_t* pNode);  // 1091
	Node_t::Node_t(); // 1088
	CTSQueue<int, true>::PushItem(
		const int& init);  // 53
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 54
} /* size: 475, inline expansions: 18 (1006 bytes) */

// <004FC0BF> tier0/tslist.cpp:56
// function calls: 9
void CQueueOps::Pop(int* pResult)
{
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 1080
	CTSQueue<int, true>::FreeNode(
		Node_t* pNode);  // 1103
	CTSQueue<int, true>::PopItem(
		int* pResult);  // 58
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 60
} /* size: 148, inline expansions: 9 (339 bytes) */

// <004FC091> tier0/tslist.cpp:65
void CQueueOps::Validate()
{
} /* size: 10 */

// <004FC004> tier0/tslist.cpp:69
// function calls: 2
void CQueueOps::IsEmpty()
{
	CInterlockedIntT<int, 4>::operator int(); // 1109
	CTSQueue<int, true>::Count(); // 71
} /* size: 16, inline expansions: 2 (12 bytes) */

// <004FBC8B> tier0/tslist.cpp:77
// function calls: 13
void CListOps::Push(int item)
{
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 768
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 777
	Node_t::Node_t(); // 774
	CTSItemList<int>::PushItem(
		const int& init);  // 79
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 80
} /* size: 267, inline expansions: 13 (522 bytes) */

// <004FB966> tier0/tslist.cpp:82
// function calls: 12
void CListOps::Pop(int* pResult)
{
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 782
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 786
	CTSItemList<int>::PopItem(
		int* pResult);  // 84
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 86
} /* size: 260, inline expansions: 12 (537 bytes) */

// <004FB938> tier0/tslist.cpp:91
void CListOps::Validate()
{
} /* size: 10 */

// <004FB8DB> tier0/tslist.cpp:95
// function call: 1
void CListOps::IsEmpty()
{
	CTSListBase::Count(); // 97
} /* size: 16, inline expansions: 1 (0 bytes) */

// <004FD1D1> tier0/tslist.cpp:103
// function call: 1
void ClearBuckets(void)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 105
} /* size: 0, inline expansions: 1 (0 bytes) */

// <004FB8D4> tier0/tslist.cpp:103
void ClearBuckets(void)
{
} /* size: 0 */

// <004FD23F> tier0/tslist.cpp:108
// function calls: 2
void IncBucket(int i)
{
	ThreadInterlockedIncrement(volatile int32* p); // 112
	IncBucket(int i); // 108
} /* size: 0, inline expansions: 2 (0 bytes) */

// <004FB8BF> tier0/tslist.cpp:108
void IncBucket(int i)
{
} /* size: 0 */

// <004FD2C1> tier0/tslist.cpp:116
// function calls: 2
void DecBucket(int i)
{
	ThreadInterlockedDecrement(volatile int32* p); // 120
	DecBucket(int i); // 116
} /* size: 0, inline expansions: 2 (0 bytes) */

// <004FB8AA> tier0/tslist.cpp:116
void DecBucket(int i)
{
} /* size: 0 */

// <004FB81E> tier0/tslist.cpp:124
// variable: 1
// function call: 1
void ValidateBuckets(void)
{
	{
		int i; // 126
		Plat_IsInDebugSession(void); // 131
	}
} /* size: 89 */

// <004FB48D> tier0/tslist.cpp:137
// variable: 1
// function calls: 14
void PopThreadFunc(void *)
{
	int ignored; // 146
	ThreadSetDebugNameS2(const char* pszName); // 139
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 140
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 141
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 151
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 162
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 163
} /* size: 208, variables: 1, inline expansions: 14 (129 bytes) */

// <004FB092> tier0/tslist.cpp:167
// function calls: 18
void PushThreadFunc(void *)
{
	ThreadSetDebugNameS2(const char* pszName); // 169
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 170
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 171
	CInterlockedIntT<int, 4>::operator int(); // 177
	CInterlockedIntT<int, 4>::operator int(); // 179
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 180
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 182
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 183
} /* size: 156, inline expansions: 18 (152 bytes) */

// <004FAD0F> tier0/tslist.cpp:187
// function calls: 14
void TestStart(void)
{
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 189
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 190
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 191
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 192
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 194
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 194
	memset(void* __dest,
		int __ch,
		size_t __len);  // 105
	ClearBuckets(void); // 195
} /* size: 136, inline expansions: 14 (203 bytes) */

// <004FD33E> tier0/tslist.cpp:198
// function calls: 2
void TestWait(void)
{
	CInterlockedIntT<int, 4>::operator int(); // 200
	CInterlockedIntT<int, 4>::operator int(); // 205
} /* size: 0, inline expansions: 2 (0 bytes) */

// <004FAD08> tier0/tslist.cpp:198
void TestWait(void)
{
} /* size: 0 */

// <004FA75E> tier0/tslist.cpp:211
// variables: 2
// function calls: 19
void TestEnd(bool bExpectEmpty)
{

Fail: // 247
	const char   __FUNCTION__; // 60279
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 248
	}
	CInterlockedIntT<int, 4>::operator int(); // 215
	CInterlockedIntT<int, 4>::operator!=(
			int rhs);  // 215
	_List_base<ThreadHandle_t__::_M_get_size(); // 1589
	list<ThreadHandle_t__::size(); // 239
	_List_iterator<ThreadHandle_t__::_List_iterator(
			_List_node_base* __x);  // 1458
	list<ThreadHandle_t__::begin(); // 1651
	list<ThreadHandle_t__::front(); // 241
	_List_iterator<ThreadHandle_t__::_List_iterator(
			_List_node_base* __x);  // 1458
	list<ThreadHandle_t__::begin(); // 1789
	_List_base<ThreadHandle_t__::_M_dec_size(
			size_t __n);  // 2483
	destroy_at<ThreadHandle_t__*>(ThreadHandle_t__** __location); // 698
	destroy<ThreadHandle_t__*>(allocator_type& __a,
					ThreadHandle_t__** __p);  // 845
	__new_allocator<std::_List_node<ThreadHandle_t__::deallocate(
			_List_node<ThreadHandle_t__*>* __p,
			size_type __n);  // 215
	allocator<std::_List_node<ThreadHandle_t__::deallocate(
			_List_node<ThreadHandle_t__*>* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 820
	_List_base<ThreadHandle_t__::_M_put_node(
			_Node_ptr __p);  // 855
	_List_base<ThreadHandle_t__::_M_destroy_node(
			_Node_ptr __p);  // 2486
	list<ThreadHandle_t__::_M_erase(
		iterator __position);  // 1789
	list<ThreadHandle_t__::pop_front(); // 242
} /* size: 0, variables: 1, goto labels: 1, inline expansions: 19 (140 bytes) */

// <004FA3E5> tier0/tslist.cpp:257
// variable: 1
// function calls: 14
void PushPopTest(void)
{
	int value; // 262
	memset(void* __dest,
		int __ch,
		size_t __len);  // 105
	ClearBuckets(void); // 260
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 261
	CInterlockedIntT<int, 4>::operator int(); // 263
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 265
	ThreadInterlockedIncrement(volatile int32* p); // 112
	IncBucket(int i); // 108
	IncBucket(int i); // 267
	ThreadInterlockedDecrement(volatile int32* p); // 120
	DecBucket(int i); // 116
	DecBucket(int i); // 274
} /* size: 276, variables: 1, inline expansions: 14 (228 bytes) */

// <004FA163> tier0/tslist.cpp:279
// variables: 2
// function calls: 10
void PushPopInterleavedTestGuts(void)
{
	int value; // 281
	{
		bool bPush; // 284
		ThreadInterlockedDecrement(volatile int32* p); // 120
		DecBucket(int i); // 116
		DecBucket(int i); // 292
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 582
		CInterlockedIntT<int, 4>::operator++(
				int);  // 285
		ThreadInterlockedIncrement(volatile int32* p); // 112
		IncBucket(int i); // 108
		IncBucket(int i); // 288
		CInterlockedIntT<int, 4>::operator int(); // 296
	}
} /* size: 204, variables: 1 */

// <004FD3DA> tier0/tslist.cpp:304
// function calls: 4
void PushPopInterleavedTest(void)
{
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 308
	memset(void* __dest,
		int __ch,
		size_t __len);  // 105
	ClearBuckets(void); // 309
} /* size: 0, inline expansions: 4 (0 bytes) */

// <004FA15C> tier0/tslist.cpp:304
void PushPopInterleavedTest(void)
{
} /* size: 0 */

// <004F9F87> tier0/tslist.cpp:314
// function calls: 7
void PushPopInterleavedTestThreadFunc(void *)
{
	ThreadSetDebugNameS2(const char* pszName); // 316
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 317
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 323
} /* size: 83, inline expansions: 7 (62 bytes) */

// <004F92E5> tier0/tslist.cpp:327
// variables: 3
// function calls: 51
void STPushMTPop(bool bDistribute)
{
	{
		int i; // 332
		{
			ThreadHandle_t hThread; // 334
			{
				uint64 mask; // 338
			}
			CreateSimpleThread(ThreadFunc_t pfnThread,
						void* pParam,
						unsigned int stackSize,
						const char* szName,
						size_t nDuplicateParamSize);  // 334
			__new_allocator<std::_List_node<ThreadHandle_t__::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<std::_List_node<ThreadHandle_t__::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 102
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::__allocated_ptr(
					allocator<std::_List_node<ThreadHandle_t__*> >& __a,
					pointer __ptr);  // 102
			__allocate_guarded<std::allocator<std::_List_node<ThreadHandle_t__*> > >(allocator<std::_List_node<ThreadHandle_t__*> >& __a); // 136
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::__allocated_ptr(
					__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__*> > >& __gd);  // 115
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::get(); // 116
			operator new(size_t,
					void* __p);  // 116
			__allocated_obj<std::allocator<std::_List_node<ThreadHandle_t__::__allocated_obj(
					__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__*> > >& __ptr);  // 136
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::~__allocated_ptr(); // 136
			__allocate_guarded_obj<std::allocator<std::_List_node<ThreadHandle_t__*> > >(allocator<std::_List_node<ThreadHandle_t__*> >& __a); // 1105
			construct_at<ThreadHandle_t__*, ThreadHandle_t__* const&>(ThreadHandle_t__** __location); // 676
			construct<ThreadHandle_t__*, ThreadHandle_t__* const&>(allocator_type& __a,
										ThreadHandle_t__** __p);  // 1106
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::operator bool(); // 121
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::~__allocated_ptr(); // 123
			__allocated_obj<std::allocator<std::_List_node<ThreadHandle_t__::~__allocated_obj(); // 1109
			list<ThreadHandle_t__::_M_create_node<ThreadHandle_t__* const&>(); // 2472
			_List_base<ThreadHandle_t__::_M_inc_size(
					size_t __n);  // 2474
			list<ThreadHandle_t__::_M_insert<ThreadHandle_t__* const&>(
								iterator __position);  // 1804
			_List_node_header::_M_base(); // 1478
			_List_iterator<ThreadHandle_t__::_List_iterator(
					_List_node_base* __x);  // 1478
			list<ThreadHandle_t__::end(); // 1804
			list<ThreadHandle_t__::push_back(
					const value_type& __x);  // 335
		}
	}
	CreateSimpleThread(ThreadFunc_t pfnThread,
				void* pParam,
				unsigned int stackSize,
				const char* szName,
				size_t nDuplicateParamSize);  // 331
	__new_allocator<std::_List_node<ThreadHandle_t__::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<std::_List_node<ThreadHandle_t__::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 102
	__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::__allocated_ptr(
			allocator<std::_List_node<ThreadHandle_t__*> >& __a,
			pointer __ptr);  // 102
	__allocate_guarded<std::allocator<std::_List_node<ThreadHandle_t__*> > >(allocator<std::_List_node<ThreadHandle_t__*> >& __a); // 136
	__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::__allocated_ptr(
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__*> > >& __gd);  // 115
	__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::get(); // 116
	operator new(size_t,
			void* __p);  // 116
	__allocated_obj<std::allocator<std::_List_node<ThreadHandle_t__::__allocated_obj(
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__*> > >& __ptr);  // 136
	__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::~__allocated_ptr(); // 136
	__allocate_guarded_obj<std::allocator<std::_List_node<ThreadHandle_t__*> > >(allocator<std::_List_node<ThreadHandle_t__*> >& __a); // 1105
	construct_at<ThreadHandle_t__*, ThreadHandle_t__*>(ThreadHandle_t__** __location); // 676
	construct<ThreadHandle_t__*, ThreadHandle_t__*>(allocator_type& __a,
							ThreadHandle_t__** __p);  // 1106
	__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::operator bool(); // 121
	__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::~__allocated_ptr(); // 123
	__allocated_obj<std::allocator<std::_List_node<ThreadHandle_t__::~__allocated_obj(); // 1109
	list<ThreadHandle_t__::_M_create_node<ThreadHandle_t__*>(); // 2472
	_List_base<ThreadHandle_t__::_M_inc_size(
			size_t __n);  // 2474
	list<ThreadHandle_t__::_M_insert<ThreadHandle_t__*>(
					iterator __position);  // 1809
	_List_node_header::_M_base(); // 1478
	_List_iterator<ThreadHandle_t__::_List_iterator(
			_List_node_base* __x);  // 1478
	list<ThreadHandle_t__::end(); // 1809
	list<ThreadHandle_t__::push_back(
			value_type& __x);  // 331
	CInterlockedIntT<int, 4>::operator int(); // 200
	CInterlockedIntT<int, 4>::operator int(); // 205
	TestWait(void); // 343
} /* size: 410, inline expansions: 27 (298 bytes) */

// <004F8643> tier0/tslist.cpp:347
// variables: 3
// function calls: 51
void MTPushSTPop(bool bDistribute)
{
	{
		int i; // 352
		{
			ThreadHandle_t hThread; // 354
			{
				uint64 mask; // 358
			}
			CreateSimpleThread(ThreadFunc_t pfnThread,
						void* pParam,
						unsigned int stackSize,
						const char* szName,
						size_t nDuplicateParamSize);  // 354
			__new_allocator<std::_List_node<ThreadHandle_t__::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<std::_List_node<ThreadHandle_t__::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 102
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::__allocated_ptr(
					allocator<std::_List_node<ThreadHandle_t__*> >& __a,
					pointer __ptr);  // 102
			__allocate_guarded<std::allocator<std::_List_node<ThreadHandle_t__*> > >(allocator<std::_List_node<ThreadHandle_t__*> >& __a); // 136
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::__allocated_ptr(
					__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__*> > >& __gd);  // 115
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::get(); // 116
			operator new(size_t,
					void* __p);  // 116
			__allocated_obj<std::allocator<std::_List_node<ThreadHandle_t__::__allocated_obj(
					__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__*> > >& __ptr);  // 136
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::~__allocated_ptr(); // 136
			__allocate_guarded_obj<std::allocator<std::_List_node<ThreadHandle_t__*> > >(allocator<std::_List_node<ThreadHandle_t__*> >& __a); // 1105
			construct_at<ThreadHandle_t__*, ThreadHandle_t__* const&>(ThreadHandle_t__** __location); // 676
			construct<ThreadHandle_t__*, ThreadHandle_t__* const&>(allocator_type& __a,
										ThreadHandle_t__** __p);  // 1106
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::operator bool(); // 121
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::~__allocated_ptr(); // 123
			__allocated_obj<std::allocator<std::_List_node<ThreadHandle_t__::~__allocated_obj(); // 1109
			list<ThreadHandle_t__::_M_create_node<ThreadHandle_t__* const&>(); // 2472
			_List_base<ThreadHandle_t__::_M_inc_size(
					size_t __n);  // 2474
			list<ThreadHandle_t__::_M_insert<ThreadHandle_t__* const&>(
								iterator __position);  // 1804
			_List_node_header::_M_base(); // 1478
			_List_iterator<ThreadHandle_t__::_List_iterator(
					_List_node_base* __x);  // 1478
			list<ThreadHandle_t__::end(); // 1804
			list<ThreadHandle_t__::push_back(
					const value_type& __x);  // 355
		}
	}
	CreateSimpleThread(ThreadFunc_t pfnThread,
				void* pParam,
				unsigned int stackSize,
				const char* szName,
				size_t nDuplicateParamSize);  // 351
	__new_allocator<std::_List_node<ThreadHandle_t__::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<std::_List_node<ThreadHandle_t__::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 102
	__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::__allocated_ptr(
			allocator<std::_List_node<ThreadHandle_t__*> >& __a,
			pointer __ptr);  // 102
	__allocate_guarded<std::allocator<std::_List_node<ThreadHandle_t__*> > >(allocator<std::_List_node<ThreadHandle_t__*> >& __a); // 136
	__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::__allocated_ptr(
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__*> > >& __gd);  // 115
	__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::get(); // 116
	operator new(size_t,
			void* __p);  // 116
	__allocated_obj<std::allocator<std::_List_node<ThreadHandle_t__::__allocated_obj(
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__*> > >& __ptr);  // 136
	__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::~__allocated_ptr(); // 136
	__allocate_guarded_obj<std::allocator<std::_List_node<ThreadHandle_t__*> > >(allocator<std::_List_node<ThreadHandle_t__*> >& __a); // 1105
	construct_at<ThreadHandle_t__*, ThreadHandle_t__*>(ThreadHandle_t__** __location); // 676
	construct<ThreadHandle_t__*, ThreadHandle_t__*>(allocator_type& __a,
							ThreadHandle_t__** __p);  // 1106
	__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::operator bool(); // 121
	__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::~__allocated_ptr(); // 123
	__allocated_obj<std::allocator<std::_List_node<ThreadHandle_t__::~__allocated_obj(); // 1109
	list<ThreadHandle_t__::_M_create_node<ThreadHandle_t__*>(); // 2472
	_List_base<ThreadHandle_t__::_M_inc_size(
			size_t __n);  // 2474
	list<ThreadHandle_t__::_M_insert<ThreadHandle_t__*>(
					iterator __position);  // 1809
	_List_node_header::_M_base(); // 1478
	_List_iterator<ThreadHandle_t__::_List_iterator(
			_List_node_base* __x);  // 1478
	list<ThreadHandle_t__::end(); // 1809
	list<ThreadHandle_t__::push_back(
			value_type& __x);  // 351
	CInterlockedIntT<int, 4>::operator int(); // 200
	CInterlockedIntT<int, 4>::operator int(); // 205
	TestWait(void); // 363
} /* size: 410, inline expansions: 27 (298 bytes) */

// <004F78B3> tier0/tslist.cpp:367
// variables: 7
// function calls: 51
void MTPushMTPop(bool bDistribute)
{
	int ct; // 371
	{
		int i; // 372
		{
			ThreadHandle_t hThread; // 374
			{
				uint64 mask; // 378
			}
			CreateSimpleThread(ThreadFunc_t pfnThread,
						void* pParam,
						unsigned int stackSize,
						const char* szName,
						size_t nDuplicateParamSize);  // 374
			__new_allocator<std::_List_node<ThreadHandle_t__::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<std::_List_node<ThreadHandle_t__::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 102
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::__allocated_ptr(
					allocator<std::_List_node<ThreadHandle_t__*> >& __a,
					pointer __ptr);  // 102
			__allocate_guarded<std::allocator<std::_List_node<ThreadHandle_t__*> > >(allocator<std::_List_node<ThreadHandle_t__*> >& __a); // 136
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::__allocated_ptr(
					__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__*> > >& __gd);  // 115
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::get(); // 116
			operator new(size_t,
					void* __p);  // 116
			__allocated_obj<std::allocator<std::_List_node<ThreadHandle_t__::__allocated_obj(
					__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__*> > >& __ptr);  // 136
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::~__allocated_ptr(); // 136
			__allocate_guarded_obj<std::allocator<std::_List_node<ThreadHandle_t__*> > >(allocator<std::_List_node<ThreadHandle_t__*> >& __a); // 1105
			construct_at<ThreadHandle_t__*, ThreadHandle_t__* const&>(ThreadHandle_t__** __location); // 676
			construct<ThreadHandle_t__*, ThreadHandle_t__* const&>(allocator_type& __a,
										ThreadHandle_t__** __p);  // 1106
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::operator bool(); // 121
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::~__allocated_ptr(); // 123
			__allocated_obj<std::allocator<std::_List_node<ThreadHandle_t__::~__allocated_obj(); // 1109
			list<ThreadHandle_t__::_M_create_node<ThreadHandle_t__* const&>(); // 2472
			_List_base<ThreadHandle_t__::_M_inc_size(
					size_t __n);  // 2474
			list<ThreadHandle_t__::_M_insert<ThreadHandle_t__* const&>(
								iterator __position);  // 1804
			_List_node_header::_M_base(); // 1478
			_List_iterator<ThreadHandle_t__::_List_iterator(
					_List_node_base* __x);  // 1478
			list<ThreadHandle_t__::end(); // 1804
			list<ThreadHandle_t__::push_back(
					const value_type& __x);  // 375
		}
	}
	{
		int i; // 382
		{
			ThreadHandle_t hThread; // 384
			{
				uint64 mask; // 388
			}
			CreateSimpleThread(ThreadFunc_t pfnThread,
						void* pParam,
						unsigned int stackSize,
						const char* szName,
						size_t nDuplicateParamSize);  // 384
			__new_allocator<std::_List_node<ThreadHandle_t__::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<std::_List_node<ThreadHandle_t__::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 102
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::__allocated_ptr(
					allocator<std::_List_node<ThreadHandle_t__*> >& __a,
					pointer __ptr);  // 102
			__allocate_guarded<std::allocator<std::_List_node<ThreadHandle_t__*> > >(allocator<std::_List_node<ThreadHandle_t__*> >& __a); // 136
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::__allocated_ptr(
					__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__*> > >& __gd);  // 115
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::get(); // 116
			operator new(size_t,
					void* __p);  // 116
			__allocated_obj<std::allocator<std::_List_node<ThreadHandle_t__::__allocated_obj(
					__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__*> > >& __ptr);  // 136
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::~__allocated_ptr(); // 136
			__allocate_guarded_obj<std::allocator<std::_List_node<ThreadHandle_t__*> > >(allocator<std::_List_node<ThreadHandle_t__*> >& __a); // 1105
			construct_at<ThreadHandle_t__*, ThreadHandle_t__* const&>(ThreadHandle_t__** __location); // 676
			construct<ThreadHandle_t__*, ThreadHandle_t__* const&>(allocator_type& __a,
										ThreadHandle_t__** __p);  // 1106
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::operator bool(); // 121
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::~__allocated_ptr(); // 123
			__allocated_obj<std::allocator<std::_List_node<ThreadHandle_t__::~__allocated_obj(); // 1109
			list<ThreadHandle_t__::_M_create_node<ThreadHandle_t__* const&>(); // 2472
			_List_base<ThreadHandle_t__::_M_inc_size(
					size_t __n);  // 2474
			list<ThreadHandle_t__::_M_insert<ThreadHandle_t__* const&>(
								iterator __position);  // 1804
			_List_node_header::_M_base(); // 1478
			_List_iterator<ThreadHandle_t__::_List_iterator(
					_List_node_base* __x);  // 1478
			list<ThreadHandle_t__::end(); // 1804
			list<ThreadHandle_t__::push_back(
					const value_type& __x);  // 385
		}
	}
	CInterlockedIntT<int, 4>::operator int(); // 200
	CInterlockedIntT<int, 4>::operator int(); // 205
	TestWait(void); // 393
} /* size: 513, variables: 1, inline expansions: 3 (100 bytes) */

// <004F7158> tier0/tslist.cpp:397
// variables: 3
// function calls: 27
void MTPushPopPopInterleaved(bool bDistribute)
{
	{
		int i; // 402
		{
			ThreadHandle_t hThread; // 404
			{
				uint64 mask; // 408
			}
			CreateSimpleThread(ThreadFunc_t pfnThread,
						void* pParam,
						unsigned int stackSize,
						const char* szName,
						size_t nDuplicateParamSize);  // 404
			__new_allocator<std::_List_node<ThreadHandle_t__::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<std::_List_node<ThreadHandle_t__::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 102
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::__allocated_ptr(
					allocator<std::_List_node<ThreadHandle_t__*> >& __a,
					pointer __ptr);  // 102
			__allocate_guarded<std::allocator<std::_List_node<ThreadHandle_t__*> > >(allocator<std::_List_node<ThreadHandle_t__*> >& __a); // 136
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::__allocated_ptr(
					__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__*> > >& __gd);  // 115
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::get(); // 116
			operator new(size_t,
					void* __p);  // 116
			__allocated_obj<std::allocator<std::_List_node<ThreadHandle_t__::__allocated_obj(
					__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__*> > >& __ptr);  // 136
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::~__allocated_ptr(); // 136
			__allocate_guarded_obj<std::allocator<std::_List_node<ThreadHandle_t__*> > >(allocator<std::_List_node<ThreadHandle_t__*> >& __a); // 1105
			construct_at<ThreadHandle_t__*, ThreadHandle_t__* const&>(ThreadHandle_t__** __location); // 676
			construct<ThreadHandle_t__*, ThreadHandle_t__* const&>(allocator_type& __a,
										ThreadHandle_t__** __p);  // 1106
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::operator bool(); // 121
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::~__allocated_ptr(); // 123
			__allocated_obj<std::allocator<std::_List_node<ThreadHandle_t__::~__allocated_obj(); // 1109
			list<ThreadHandle_t__::_M_create_node<ThreadHandle_t__* const&>(); // 2472
			_List_base<ThreadHandle_t__::_M_inc_size(
					size_t __n);  // 2474
			list<ThreadHandle_t__::_M_insert<ThreadHandle_t__* const&>(
								iterator __position);  // 1804
			_List_node_header::_M_base(); // 1478
			_List_iterator<ThreadHandle_t__::_List_iterator(
					_List_node_base* __x);  // 1478
			list<ThreadHandle_t__::end(); // 1804
			list<ThreadHandle_t__::push_back(
					const value_type& __x);  // 405
		}
	}
	CInterlockedIntT<int, 4>::operator int(); // 200
	CInterlockedIntT<int, 4>::operator int(); // 205
	TestWait(void); // 412
} /* size: 330, inline expansions: 3 (101 bytes) */

// <004F69E3> tier0/tslist.cpp:416
// variables: 4
// function calls: 27
void MTPushSeqPop(bool bDistribute)
{
	int ignored; // 432
	{
		int i; // 420
		{
			ThreadHandle_t hThread; // 422
			{
				uint64 mask; // 426
			}
			CreateSimpleThread(ThreadFunc_t pfnThread,
						void* pParam,
						unsigned int stackSize,
						const char* szName,
						size_t nDuplicateParamSize);  // 422
			__new_allocator<std::_List_node<ThreadHandle_t__::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<std::_List_node<ThreadHandle_t__::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 102
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::__allocated_ptr(
					allocator<std::_List_node<ThreadHandle_t__*> >& __a,
					pointer __ptr);  // 102
			__allocate_guarded<std::allocator<std::_List_node<ThreadHandle_t__*> > >(allocator<std::_List_node<ThreadHandle_t__*> >& __a); // 136
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::__allocated_ptr(
					__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__*> > >& __gd);  // 115
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::get(); // 116
			operator new(size_t,
					void* __p);  // 116
			__allocated_obj<std::allocator<std::_List_node<ThreadHandle_t__::__allocated_obj(
					__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__*> > >& __ptr);  // 136
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::~__allocated_ptr(); // 136
			__allocate_guarded_obj<std::allocator<std::_List_node<ThreadHandle_t__*> > >(allocator<std::_List_node<ThreadHandle_t__*> >& __a); // 1105
			construct_at<ThreadHandle_t__*, ThreadHandle_t__* const&>(ThreadHandle_t__** __location); // 676
			construct<ThreadHandle_t__*, ThreadHandle_t__* const&>(allocator_type& __a,
										ThreadHandle_t__** __p);  // 1106
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::operator bool(); // 121
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::~__allocated_ptr(); // 123
			__allocated_obj<std::allocator<std::_List_node<ThreadHandle_t__::~__allocated_obj(); // 1109
			list<ThreadHandle_t__::_M_create_node<ThreadHandle_t__* const&>(); // 2472
			_List_base<ThreadHandle_t__::_M_inc_size(
					size_t __n);  // 2474
			list<ThreadHandle_t__::_M_insert<ThreadHandle_t__* const&>(
								iterator __position);  // 1804
			_List_node_header::_M_base(); // 1478
			_List_iterator<ThreadHandle_t__::_List_iterator(
					_List_node_base* __x);  // 1478
			list<ThreadHandle_t__::end(); // 1804
			list<ThreadHandle_t__::push_back(
					const value_type& __x);  // 423
		}
	}
	CInterlockedIntT<int, 4>::operator int(); // 200
	CInterlockedIntT<int, 4>::operator int(); // 205
	TestWait(void); // 431
} /* size: 408, variables: 1, inline expansions: 3 (109 bytes) */

// <004F61CD> tier0/tslist.cpp:440
// variables: 3
// function calls: 31
void SeqPushMTPop(bool bDistribute)
{
	{
		int i; // 448
		{
			ThreadHandle_t hThread; // 450
			{
				uint32 mask; // 454
			}
			CreateSimpleThread(ThreadFunc_t pfnThread,
						void* pParam,
						unsigned int stackSize,
						const char* szName,
						size_t nDuplicateParamSize);  // 450
			__new_allocator<std::_List_node<ThreadHandle_t__::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<std::_List_node<ThreadHandle_t__::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 102
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::__allocated_ptr(
					allocator<std::_List_node<ThreadHandle_t__*> >& __a,
					pointer __ptr);  // 102
			__allocate_guarded<std::allocator<std::_List_node<ThreadHandle_t__*> > >(allocator<std::_List_node<ThreadHandle_t__*> >& __a); // 136
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::__allocated_ptr(
					__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__*> > >& __gd);  // 115
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::get(); // 116
			operator new(size_t,
					void* __p);  // 116
			__allocated_obj<std::allocator<std::_List_node<ThreadHandle_t__::__allocated_obj(
					__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__*> > >& __ptr);  // 136
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::~__allocated_ptr(); // 136
			__allocate_guarded_obj<std::allocator<std::_List_node<ThreadHandle_t__*> > >(allocator<std::_List_node<ThreadHandle_t__*> >& __a); // 1105
			construct_at<ThreadHandle_t__*, ThreadHandle_t__* const&>(ThreadHandle_t__** __location); // 676
			construct<ThreadHandle_t__*, ThreadHandle_t__* const&>(allocator_type& __a,
										ThreadHandle_t__** __p);  // 1106
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::operator bool(); // 121
			__allocated_ptr<std::allocator<std::_List_node<ThreadHandle_t__::~__allocated_ptr(); // 123
			__allocated_obj<std::allocator<std::_List_node<ThreadHandle_t__::~__allocated_obj(); // 1109
			list<ThreadHandle_t__::_M_create_node<ThreadHandle_t__* const&>(); // 2472
			_List_base<ThreadHandle_t__::_M_inc_size(
					size_t __n);  // 2474
			list<ThreadHandle_t__::_M_insert<ThreadHandle_t__* const&>(
								iterator __position);  // 1804
			_List_node_header::_M_base(); // 1478
			_List_iterator<ThreadHandle_t__::_List_iterator(
					_List_node_base* __x);  // 1478
			list<ThreadHandle_t__::end(); // 1804
			list<ThreadHandle_t__::push_back(
					const value_type& __x);  // 451
		}
	}
	CInterlockedIntT<int, 4>::operator int(); // 446
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 444
	CInterlockedIntT<int, 4>::operator int(); // 200
	CInterlockedIntT<int, 4>::operator int(); // 205
	TestWait(void); // 459
} /* size: 378, inline expansions: 7 (155 bytes) */

// <004F5EA7> tier0/tslist.cpp:464
// variable: 1
// function calls: 5
void RunSharedTests(int nTests)
{
	const CPUInformation& pi; // 468
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 308
	memset(void* __dest,
		int __ch,
		size_t __len);  // 105
	ClearBuckets(void); // 309
	PushPopInterleavedTest(void); // 484
} /* size: 485, variables: 1, inline expansions: 5 (142 bytes) */

// <004F5ACC> tier0/tslist.cpp:505
// variables: 2
// function calls: 10
bool RunTSListTests(int nListSize, int nTests)
{
	const char   __FUNCTION__; // 40214
	int maxSize; // 513
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 792
	CTSItemList<int>::Detach(); // 737
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 745
	CTSItemList<int>::Purge(); // 536
} /* size: 410, variables: 2, inline expansions: 10 (617 bytes) */

// <004F577C> tier0/tslist.cpp:541
// variable: 1
// function calls: 6
bool RunTSQueueTests(int nListSize, int nTests)
{
	const char   __FUNCTION__; // 39227
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	ThreadPause(void); // 208
	CTSListBase::Pop(); // 890
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 895
	{
	}
	{
	}
	{
	}
	CTSQueue<int, true>::Purge(); // 554
} /* size: 0, variables: 1, inline expansions: 6 (412 bytes) */

