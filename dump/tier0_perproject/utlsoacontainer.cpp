
//
// tier0_perproject/utlsoacontainer.cpp
//
//	referenced by: libengine2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 244
//	classes: 4
//	structs: 2
//

// <044FEB8A> tier0_perproject/utlsoacontainer.cpp:39
void SetThreadPoolForCSOAOps(IThreadPool* pPool)
{
} /* size: 0 */

// <044FEAD3> tier0_perproject/utlsoacontainer.cpp:45
// variables: 3
void ElementSizeInBytes(EAttributeDataType nDataType)
{
	const char   __FUNCTION__; // 6718
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 47
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 48
	}
} /* size: 0, variables: 1 */

// <01B5A1E5> tier0_perproject/utlsoacontainer.cpp:45
// variables: 3
void ElementSizeInBytes(EAttributeDataType nDataType)
{
	const char   __FUNCTION__; // 47107
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 47
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 48
	}
} /* size: 0, variables: 1 */

// <009DFA48> tier0_perproject/utlsoacontainer.cpp:45
// variables: 3
void ElementSizeInBytes(EAttributeDataType nDataType)
{
	const char   __FUNCTION__; // 39827
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 47
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 48
	}
} /* size: 0, variables: 1 */

// <044FE8C1> tier0_perproject/utlsoacontainer.cpp:55
// variables: 6
// function calls: 5
void CSOAContainer::CSOAContainer(int nCols, int nRows, int nSlices, ...)
{
	{
		va_list args; // 60
		{
			int nFieldNumber; // 64
			EAttributeDataType nDataType; // 67
		}
	}
	{
		va_list args; // 60
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 901
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 900
		CSOAContainer::Init(); // 59
		{
			int nFieldNumber; // 64
			EAttributeDataType nDataType; // 67
		}
	}
} /* size: 0 */

// <044FE857> tier0_perproject/utlsoacontainer.cpp:55
// variables: 3
void CSOAContainer::CSOAContainer(int nCols, int nRows, int nSlices, ...)
{
	{
		va_list args; // 60
		{
			int nFieldNumber; // 64
			EAttributeDataType nDataType; // 67
		}
	}
} /* size: 0 */

// <044FE7DD> tier0_perproject/utlsoacontainer.cpp:73
// function call: 1
void CSOAContainer::~CSOAContainer()
{
	CSOAContainer::Purge(); // 75
} /* size: 9, inline expansions: 1 (5 bytes) */

// <044FE7C1> tier0_perproject/utlsoacontainer.cpp:73
void CSOAContainer::~CSOAContainer()
{
} /* size: 0 */

// <0450EFBF> tier0_perproject/utlsoacontainer.cpp:79
// function calls: 5
void CSOAContainer::Purge()
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 900
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 901
	CSOAContainer::Init(); // 82
} /* size: 273, inline expansions: 5 (632 bytes) */

// <044FE7A5> tier0_perproject/utlsoacontainer.cpp:79
void CSOAContainer::Purge()
{
} /* size: 0 */

// <0450EE1E> tier0_perproject/utlsoacontainer.cpp:86
// variable: 1
// function call: 1
void CSOAContainer::AllocateAttributeIndex()
{
	{
		int i; // 88
		CSOAContainer::HasAllocatedMemory(
					int nAttrIdx);  // 90
	}
} /* size: 0 */

// <044FE77C> tier0_perproject/utlsoacontainer.cpp:86
// variable: 1
void CSOAContainer::AllocateAttributeIndex()
{
	{
		int i; // 88
	}
} /* size: 0 */

// <0450EE9C> tier0_perproject/utlsoacontainer.cpp:97
// variables: 2
// function calls: 2
void CSOAContainer::FirstAttr()
{
	CSOAAttributeIterator ret; // 99
	CSOAAttributeIterator::CSOAAttributeIterator(); // 99
	{
		int i; // 102
		CSOAContainer::HasAllocatedMemory(
					int nAttrIdx);  // 104
	}
} /* size: 78, variables: 1, inline expansions: 1 (0 bytes) */

// <044FE746> tier0_perproject/utlsoacontainer.cpp:97
// variables: 2
void CSOAContainer::FirstAttr()
{
	CSOAAttributeIterator ret; // 99
	{
		int i; // 102
	}
} /* size: 0, variables: 1 */

// <044FE53C> tier0_perproject/utlsoacontainer.cpp:117
// variables: 3
// function calls: 5
void CSOAContainer::AllocateData(int nNCols, int nNRows, int nSlices)
{
	uint8* pBasePtr; // 131
	uint8* pConstantDataPtr; // 132
	{
		int i; // 133
		CSOAContainer::AttributeMemorySize(
					int nAttrIndex);  // 150
		CSOAContainer::AttributeMemorySize(
					int nAttrIndex);  // 158
	}
	CSOAContainer::NumRows(); // 315
	CSOAContainer::NumCols(); // 315
	CSOAContainer::SetThreadMode(
			SOAThreadMode_t eThreadMode);  // 161
} /* size: 321, variables: 2, inline expansions: 3 (23 bytes) */

// <0450EF53> tier0_perproject/utlsoacontainer.cpp:165
// variables: 2
void CSOAContainer::SetAttributeDataTypesFrom(const CSOAContainer& other)
{
	{
		int i; // 167
		{
			bool bAllocate; // 171
		}
	}
} /* size: 0 */

// <044FE244> tier0_perproject/utlsoacontainer.cpp:177
// variables: 3
// function calls: 4
void CSOAContainer::SetAttributeType(int nAttrIdx, EAttributeDataType nDataType, bool bAllocateMemory)
{
	const char   __FUNCTION__; // 6676
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
	CSOAContainer::AttributeMemorySize(
				int nAttrIndex);  // 219
	CSOAContainer::AttributeMemorySize(
				int nAttrIndex);  // 224
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 224
} /* size: 0, variables: 1, inline expansions: 4 (174 bytes) */

// <01B59956> tier0_perproject/utlsoacontainer.cpp:177
// variables: 3
// function calls: 4
void CSOAContainer::SetAttributeType(int nAttrIdx, EAttributeDataType nDataType, bool bAllocateMemory)
{
	const char   __FUNCTION__; // 47065
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
	CSOAContainer::AttributeMemorySize(
				int nAttrIndex);  // 219
	CSOAContainer::AttributeMemorySize(
				int nAttrIndex);  // 224
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 224
} /* size: 0, variables: 1, inline expansions: 4 (174 bytes) */

// <009DF1B9> tier0_perproject/utlsoacontainer.cpp:177
// variables: 3
// function calls: 4
void CSOAContainer::SetAttributeType(int nAttrIdx, EAttributeDataType nDataType, bool bAllocateMemory)
{
	const char   __FUNCTION__; // 39785
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
	CSOAContainer::AttributeMemorySize(
				int nAttrIndex);  // 219
	CSOAContainer::AttributeMemorySize(
				int nAttrIndex);  // 224
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 224
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <044FE1BB> tier0_perproject/utlsoacontainer.cpp:229
// variable: 1
void CSOAContainer::PurgeData()
{
	{
		int i; // 243
	}
} /* size: 122 */

// <0450F136> tier0_perproject/utlsoacontainer.cpp:253
// variable: 1
void CSOAContainer::AttributeMemorySize(int nAttrIndex)
{
	EAttributeDataType nDataType; // 255
} /* size: 0, variables: 1 */

// <0450F174> tier0_perproject/utlsoacontainer.cpp:264
// variables: 2
// function call: 1
void CSOAContainer::DataMemorySize()
{
	size_t nDataMemorySize; // 266
	{
		int i; // 267
		CSOAContainer::AttributeMemorySize(
					int nAttrIndex);  // 271
	}
} /* size: 0, variables: 1 */

// <044FE150> tier0_perproject/utlsoacontainer.cpp:264
// variables: 2
void CSOAContainer::DataMemorySize()
{
	size_t nDataMemorySize; // 266
	{
		int i; // 267
	}
} /* size: 0, variables: 1 */

// <044FE00F> tier0_perproject/utlsoacontainer.cpp:276
// variables: 4
// function calls: 2
void CSOAContainer::AllocateDataMemory()
{
	const char   __FUNCTION__; // 6718
	size_t nMemorySize; // 279
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		int i; // 267
		CSOAContainer::AttributeMemorySize(
					int nAttrIndex);  // 271
	}
	CSOAContainer::DataMemorySize(); // 279
} /* size: 0, variables: 2, inline expansions: 1 (84 bytes) */

// <01B59721> tier0_perproject/utlsoacontainer.cpp:276
// variables: 4
// function calls: 2
void CSOAContainer::AllocateDataMemory()
{
	const char   __FUNCTION__; // 47107
	size_t nMemorySize; // 279
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		int i; // 267
		CSOAContainer::AttributeMemorySize(
					int nAttrIndex);  // 271
	}
	CSOAContainer::DataMemorySize(); // 279
} /* size: 0, variables: 2, inline expansions: 1 (84 bytes) */

// <009DEF84> tier0_perproject/utlsoacontainer.cpp:276
// variables: 4
// function calls: 2
void CSOAContainer::AllocateDataMemory()
{
	const char   __FUNCTION__; // 39827
	size_t nMemorySize; // 279
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		int i; // 267
		CSOAContainer::AttributeMemorySize(
					int nAttrIndex);  // 271
	}
	CSOAContainer::DataMemorySize(); // 279
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <0450F201> tier0_perproject/utlsoacontainer.cpp:286
// variables: 2
// function call: 1
void CSOAContainer::ConstantMemorySize()
{
	size_t nConstantDataSize; // 288
	{
		int i; // 289
		CSOAContainer::AttributeMemorySize(
					int nAttrIndex);  // 293
	}
} /* size: 0, variables: 1 */

// <044FDFD8> tier0_perproject/utlsoacontainer.cpp:286
// variables: 2
void CSOAContainer::ConstantMemorySize()
{
	size_t nConstantDataSize; // 288
	{
		int i; // 289
	}
} /* size: 0, variables: 1 */

// <044FDE08> tier0_perproject/utlsoacontainer.cpp:298
// variables: 4
// function calls: 4
void CSOAContainer::AllocateConstantMemory()
{
	const char   __FUNCTION__; // 6760
	size_t nConstantDataSize; // 301
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
	}
	{
		int i; // 289
		CSOAContainer::AttributeMemorySize(
					int nAttrIndex);  // 293
	}
	CSOAContainer::ConstantMemorySize(); // 301
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 305
} /* size: 0, variables: 2, inline expansions: 3 (100 bytes) */

// <01B5951A> tier0_perproject/utlsoacontainer.cpp:298
// variables: 4
// function calls: 4
void CSOAContainer::AllocateConstantMemory()
{
	const char   __FUNCTION__; // 47149
	size_t nConstantDataSize; // 301
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
	}
	{
		int i; // 289
		CSOAContainer::AttributeMemorySize(
					int nAttrIndex);  // 293
	}
	CSOAContainer::ConstantMemorySize(); // 301
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 305
} /* size: 0, variables: 2, inline expansions: 3 (100 bytes) */

// <009DED7D> tier0_perproject/utlsoacontainer.cpp:298
// variables: 4
// function calls: 4
void CSOAContainer::AllocateConstantMemory()
{
	const char   __FUNCTION__; // 39869
	size_t nConstantDataSize; // 301
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
	}
	{
		int i; // 289
		CSOAContainer::AttributeMemorySize(
					int nAttrIndex);  // 293
	}
	CSOAContainer::ConstantMemorySize(); // 301
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 305
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <0450F286> tier0_perproject/utlsoacontainer.cpp:310
// function calls: 2
void CSOAContainer::SetThreadMode(SOAThreadMode_t eThreadMode)
{
	CSOAContainer::NumRows(); // 315
	CSOAContainer::NumCols(); // 315
} /* size: 0, inline expansions: 2 (0 bytes) */

// <044FDDDE> tier0_perproject/utlsoacontainer.cpp:310
void CSOAContainer::SetThreadMode(SOAThreadMode_t eThreadMode)
{
} /* size: 0 */

// <044D9321> tier0_perproject/utlsoacontainer.cpp:336
void QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int>(CCallQueue& queue, CSOAContainer* instance, int nSlices, void ()(CSOAContainer *, int, int, int, int, const CSOAContainer *, int, int) CSOAContainer::* method, int nY, int nStep)
{
} /* size: 0 */

// <044D9189> tier0_perproject/utlsoacontainer.cpp:336
void QueueCallWrapper<CSOAContainer, int, __vector(4) float>(CCallQueue& queue, CSOAContainer* instance, int nSlices, void ()(CSOAContainer *, int, int, int, int, int, float) CSOAContainer::* method, int nY, int nStep)
{
} /* size: 0 */

// <044D7670> tier0_perproject/utlsoacontainer.cpp:336
void QueueCallWrapper<CSOAContainer, int, int, int, Vector, bool>(CCallQueue& queue, CSOAContainer* instance, int nSlices, void ()(CSOAContainer *, int, int, int, int, int, int, int, Vector, bool) CSOAContainer::* method, int nY, int nStep)
{
} /* size: 0 */

// <044D4DE0> tier0_perproject/utlsoacontainer.cpp:336
void QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int, int, int, int, float const*>(CCallQueue& queue, CSOAContainer* instance, int nSlices, void ()(CSOAContainer *, int, int, int, int, const CSOAContainer *, int, int, int, int, int, const float *) CSOAC method, int nY, int nStep)
{
} /* size: 0 */

// <044D1A00> tier0_perproject/utlsoacontainer.cpp:336
void QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int, int>(CCallQueue& queue, CSOAContainer* instance, int nSlices, void ()(CSOAContainer *, int, int, int, int, const CSOAContainer *, int, int, int) CSOAContainer::* method, int nY, int nStep)
{
} /* size: 0 */

// <044FDBDE> tier0_perproject/utlsoacontainer.cpp:398
// variables: 2
// function calls: 4
void CSOAContainer::CopyAttrFromPartial(int nStartRow, int nNumRows, int nStartSlice, int nEndSlice, const CSOAContainer* pOther, int nDestAttributeIndex, int nSrcAttributeIndex)
{
	{
		int z; // 401
		{
			size_t nCopySize; // 403
			CSOAContainer::ConstRowPtr(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 404
			CSOAContainer::RowPtr<__vector(
							int nAttributeIdx,
							int nRowNumber,
							int nSliceNumber);  // 404
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 404
		}
	}
} /* size: 177 */

// <044FCF06> tier0_perproject/utlsoacontainer.cpp:410
// variables: 12
// function calls: 47
void CSOAContainer::CopyAttrFrom(const CSOAContainer& other, int nDestAttributeIndex, int nSrcAttributeIndex)
{
	const char   __FUNCTION__; // 6613
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 416
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 417
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 418
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 419
	}
	{
		CCallQueue workList; // 426
		int nY; // 426
		{
			int nStep; // 426
			CCallQueue::ResumeProcessing(); // 115
			_Function_base::_Function_base(); // 407
			function<void()>::operator bool()>* this); // 409
			function<void()>::function(
				function<void()>& __x); // 102
			CCallQueue::QueueCall(
					function<void()>& fnCall);  // 96
			function<void()>::operator()(const function<void()>* this); // 110
			CCallQueue::QueueCall(
					function<void()>& fnCall);  // 338
			_Function_base::~_Function_base(); // 336
			function<void()>::~function()>* this); // 338
			{
				_M_create<QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int>(CCallQueue&, CSOAContainer*, int, void (CSOAContainer::*)(int, int, int, int, const CSOAContainer*, int, int), int, int, const CSOAContainer*, int, int)::<lambda()> >(union _Any_data& __dest,
																class& __f,
																false_type); // 217
				_M_init_functor<QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int>(CCallQueue&, CSOAContainer*, int, void (CSOAContainer::*)(int, int, int, int, const CSOAContainer*, int, int), int, int, const CSOAContainer*, int, int)::<lambda()> >(union _Any_data& __functor,
																class& __f); // 451
				_M_not_empty_function<QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int>(CCallQueue&, CSOAContainer*, int, void (CSOAContainer::*)(int, int, int, int, const CSOAContainer*, int, int), int, int, const CSOAContainer*, int, int)::<lambda()> >(const &); // 449
			}
			_Function_base::_Function_base(); // 439
			function<void()>::function<QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int>(
																class& __f); // 338
			QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int>(CCallQueue& queue,
											CSOAContainer* instance,
											int nSlices,
											void ()(CSOAContainer *, int, int, int, int, const CSOAContainer *, int, int) CSOAContainer::* method,
											int nY,
											int nStep);  // 426
			CSOAContainer::NumSlices(); // 426
		}
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		CTSListBase::CTSListBase(); // 846
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		Node_t::Node_t(); // 864
		CTSQueue<std::function<void()>::End()>*, false>* this); // 865
		CTSQueue<std::function<void()>::CTSQueue()>*, false>* this); // 13
		CCallQueue::CCallQueue(); // 426
		CSOAContainer::NumRows(); // 426
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<std::function<void()>::FreeNode(
			Node_t* pNode); // 1103
		CTSQueue<std::function<void()>::PopItem(
			function<void()>** pResult); // 75
		_Function_base::~_Function_base(); // 336
		function<void()>::~function()>* this); // 77
		CCallQueue::ResumeProcessing(); // 80
		CCallQueue::Flush(); // 17
		CCallQueue::~CCallQueue(); // 426
	}
	CSOAContainer::NumRows(); // 416
	CSOAContainer::NumRows(); // 416
	CSOAContainer::NumCols(); // 417
	CSOAContainer::NumCols(); // 417
	CSOAContainer::NumSlices(); // 418
	CSOAContainer::NumSlices(); // 418
	CSOAContainer::AttributeMemorySize(
				int nAttrIndex);  // 422
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 422
} /* size: 0, variables: 1, inline expansions: 9 (162 bytes) */

// <01B58618> tier0_perproject/utlsoacontainer.cpp:410
// variables: 12
// function calls: 47
void CSOAContainer::CopyAttrFrom(const CSOAContainer& other, int nDestAttributeIndex, int nSrcAttributeIndex)
{
	const char   __FUNCTION__; // 47002
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 416
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 417
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 418
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 419
	}
	{
		CCallQueue workList; // 426
		int nY; // 426
		{
			int nStep; // 426
			CCallQueue::ResumeProcessing(); // 115
			_Function_base::_Function_base(); // 407
			function<void()>::operator bool()>* this); // 409
			function<void()>::function(
				function<void()>& __x); // 102
			CCallQueue::QueueCall(
					function<void()>& fnCall);  // 96
			function<void()>::operator()(const function<void()>* this); // 110
			CCallQueue::QueueCall(
					function<void()>& fnCall);  // 338
			_Function_base::~_Function_base(); // 336
			function<void()>::~function()>* this); // 338
			{
				_M_create<QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int>(CCallQueue&, CSOAContainer*, int, void (CSOAContainer::*)(int, int, int, int, const CSOAContainer*, int, int), int, int, const CSOAContainer*, int, int)::<lambda()> >(union _Any_data& __dest,
																class& __f,
																false_type); // 217
				_M_init_functor<QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int>(CCallQueue&, CSOAContainer*, int, void (CSOAContainer::*)(int, int, int, int, const CSOAContainer*, int, int), int, int, const CSOAContainer*, int, int)::<lambda()> >(union _Any_data& __functor,
																class& __f); // 451
				_M_not_empty_function<QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int>(CCallQueue&, CSOAContainer*, int, void (CSOAContainer::*)(int, int, int, int, const CSOAContainer*, int, int), int, int, const CSOAContainer*, int, int)::<lambda()> >(const &); // 449
			}
			_Function_base::_Function_base(); // 439
			function<void()>::function<QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int>(
																class& __f); // 338
			QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int>(CCallQueue& queue,
											CSOAContainer* instance,
											int nSlices,
											void ()(CSOAContainer *, int, int, int, int, const CSOAContainer *, int, int) CSOAContainer::* method,
											int nY,
											int nStep);  // 426
			CSOAContainer::NumSlices(); // 426
		}
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		CTSListBase::CTSListBase(); // 846
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		Node_t::Node_t(); // 864
		CTSQueue<std::function<void()>::End()>*, false>* this); // 865
		CTSQueue<std::function<void()>::CTSQueue()>*, false>* this); // 13
		CCallQueue::CCallQueue(); // 426
		CSOAContainer::NumRows(); // 426
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<std::function<void()>::FreeNode(
			Node_t* pNode); // 1103
		CTSQueue<std::function<void()>::PopItem(
			function<void()>** pResult); // 75
		_Function_base::~_Function_base(); // 336
		function<void()>::~function()>* this); // 77
		CCallQueue::ResumeProcessing(); // 80
		CCallQueue::Flush(); // 17
		CCallQueue::~CCallQueue(); // 426
	}
	CSOAContainer::NumRows(); // 416
	CSOAContainer::NumRows(); // 416
	CSOAContainer::NumCols(); // 417
	CSOAContainer::NumCols(); // 417
	CSOAContainer::NumSlices(); // 418
	CSOAContainer::NumSlices(); // 418
	CSOAContainer::AttributeMemorySize(
				int nAttrIndex);  // 422
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 422
} /* size: 0, variables: 1, inline expansions: 9 (162 bytes) */

// <009DDE7B> tier0_perproject/utlsoacontainer.cpp:410
// variables: 12
// function calls: 47
void CSOAContainer::CopyAttrFrom(const CSOAContainer& other, int nDestAttributeIndex, int nSrcAttributeIndex)
{
	const char   __FUNCTION__; // 39722
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 416
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 417
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 418
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 419
	}
	{
		CCallQueue workList; // 426
		int nY; // 426
		{
			int nStep; // 426
			CCallQueue::ResumeProcessing(); // 115
			_Function_base::_Function_base(); // 407
			function<void()>::operator bool()>* this); // 409
			function<void()>::function(
				function<void()>& __x); // 102
			CCallQueue::QueueCall(
					function<void()>& fnCall);  // 96
			function<void()>::operator()(const function<void()>* this); // 110
			CCallQueue::QueueCall(
					function<void()>& fnCall);  // 338
			_Function_base::~_Function_base(); // 336
			function<void()>::~function()>* this); // 338
			{
				_M_create<QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int>(CCallQueue&, CSOAContainer*, int, void (CSOAContainer::*)(int, int, int, int, const CSOAContainer*, int, int), int, int, const CSOAContainer*, int, int)::<lambda()> >(union _Any_data& __dest,
																class& __f,
																false_type); // 217
				_M_init_functor<QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int>(CCallQueue&, CSOAContainer*, int, void (CSOAContainer::*)(int, int, int, int, const CSOAContainer*, int, int), int, int, const CSOAContainer*, int, int)::<lambda()> >(union _Any_data& __functor,
																class& __f); // 451
				_M_not_empty_function<QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int>(CCallQueue&, CSOAContainer*, int, void (CSOAContainer::*)(int, int, int, int, const CSOAContainer*, int, int), int, int, const CSOAContainer*, int, int)::<lambda()> >(const &); // 449
			}
			_Function_base::_Function_base(); // 439
			function<void()>::function<QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int>(
																class& __f); // 338
			QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int>(CCallQueue& queue,
											CSOAContainer* instance,
											int nSlices,
											void ()(CSOAContainer *, int, int, int, int, const CSOAContainer *, int, int) CSOAContainer::* method,
											int nY,
											int nStep);  // 426
			CSOAContainer::NumSlices(); // 426
		}
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		CTSListBase::CTSListBase(); // 846
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		Node_t::Node_t(); // 864
		CTSQueue<std::function<void()>::End()>*, false>* this); // 865
		CTSQueue<std::function<void()>::CTSQueue()>*, false>* this); // 13
		CCallQueue::CCallQueue(); // 426
		CSOAContainer::NumRows(); // 426
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<std::function<void()>::FreeNode(
			Node_t* pNode); // 1103
		CTSQueue<std::function<void()>::PopItem(
			function<void()>** pResult); // 75
		_Function_base::~_Function_base(); // 336
		function<void()>::~function()>* this); // 77
		CCallQueue::ResumeProcessing(); // 80
		CCallQueue::Flush(); // 17
		CCallQueue::~CCallQueue(); // 426
	}
	CSOAContainer::NumRows(); // 416
	CSOAContainer::NumRows(); // 416
	CSOAContainer::NumCols(); // 417
	CSOAContainer::NumCols(); // 417
	CSOAContainer::NumSlices(); // 418
	CSOAContainer::NumSlices(); // 418
	CSOAContainer::AttributeMemorySize(
				int nAttrIndex);  // 422
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 422
} /* size: 0, variables: 1, inline expansions: 9 (0 bytes) */

// <044FCD8C> tier0_perproject/utlsoacontainer.cpp:431
// variables: 2
// function calls: 3
void CSOAContainer::CopyAttrToAttr(int nSrcAttributeIndex, int nDestAttributeIndex)
{
	const char   __FUNCTION__; // 6634
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 433
	}
	CSOAContainer::AttributeMemorySize(
				int nAttrIndex);  // 434
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 434
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <01B5849E> tier0_perproject/utlsoacontainer.cpp:431
// variables: 2
// function calls: 3
void CSOAContainer::CopyAttrToAttr(int nSrcAttributeIndex, int nDestAttributeIndex)
{
	const char   __FUNCTION__; // 47023
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 433
	}
	CSOAContainer::AttributeMemorySize(
				int nAttrIndex);  // 434
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 434
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <009DDD01> tier0_perproject/utlsoacontainer.cpp:431
// variables: 2
// function calls: 3
void CSOAContainer::CopyAttrToAttr(int nSrcAttributeIndex, int nDestAttributeIndex)
{
	const char   __FUNCTION__; // 39743
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 433
	}
	CSOAContainer::AttributeMemorySize(
				int nAttrIndex);  // 434
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 434
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <044FCA5F> tier0_perproject/utlsoacontainer.cpp:437
// variables: 10
// function calls: 7
void CSOAContainer::PackScalarAttributesToVectorAttribute(CSOAContainer* pInput, int nVecAttributeOut, int nScalarAttributeX, int nScalarAttributeY, int nScalarAttributeZ)
{
	FourVectors* pOut; // 448
	fltx4* pInX; // 449
	fltx4* pInY; // 450
	fltx4* pInZ; // 451
	size_t nRowToRowStride; // 452
	size_t nRowToRowStrideX; // 453
	size_t nRowToRowStrideY; // 454
	size_t nRowToRowStrideZ; // 455
	int nRowCtr; // 456
	{
		int nColCtr; // 459
		CSOAContainer::NumQuadsPerRow(); // 459
	}
	CSOAContainer::RowPtr<FourVectors>(
				int nAttributeIdx,
				int nRowNumber,
				int nSliceNumber);  // 448
	CSOAContainer::RowPtr<__vector(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 449
	CSOAContainer::RowPtr<__vector(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 450
	CSOAContainer::RowPtr<__vector(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 451
	CSOAContainer::NumRows(); // 456
	CSOAContainer::NumSlices(); // 456
} /* size: 0, variables: 9, inline expansions: 6 (0 bytes) */

// <044FC50F> tier0_perproject/utlsoacontainer.cpp:475
// variables: 14
// function calls: 13
void CSOAContainer::UnPackVectorAttributeToScalarAttributes(CSOAContainer* pInput, int nVecAttributeIn, int nScalarAttributeX, int nScalarAttributeY, int nScalarAttributeZ)
{
	const char   __FUNCTION__; // 6949
	FourVectors* pIn; // 489
	fltx4* pX; // 490
	fltx4* pY; // 491
	fltx4* pZ; // 492
	size_t nRowToRowStride; // 493
	size_t nRowToRowStrideX; // 494
	size_t nRowToRowStrideY; // 495
	size_t nRowToRowStrideZ; // 496
	int nRowCtr; // 497
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 485
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 486
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 487
	}
	{
		int nColCtr; // 500
		CSOAContainer::NumQuadsPerRow(); // 500
	}
	CSOAContainer::NumCols(); // 485
	CSOAContainer::NumCols(); // 485
	CSOAContainer::NumRows(); // 486
	CSOAContainer::NumRows(); // 486
	CSOAContainer::NumSlices(); // 487
	CSOAContainer::NumSlices(); // 487
	CSOAContainer::RowPtr<FourVectors>(
				int nAttributeIdx,
				int nRowNumber,
				int nSliceNumber);  // 489
	CSOAContainer::RowPtr<__vector(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 490
	CSOAContainer::RowPtr<__vector(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 491
	CSOAContainer::RowPtr<__vector(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 492
	CSOAContainer::NumRows(); // 497
	CSOAContainer::NumSlices(); // 497
} /* size: 0, variables: 10, inline expansions: 12 (0 bytes) */

// <01B57C21> tier0_perproject/utlsoacontainer.cpp:475
// variables: 14
// function calls: 13
void CSOAContainer::UnPackVectorAttributeToScalarAttributes(CSOAContainer* pInput, int nVecAttributeIn, int nScalarAttributeX, int nScalarAttributeY, int nScalarAttributeZ)
{
	const char   __FUNCTION__; // 47338
	FourVectors* pIn; // 489
	fltx4* pX; // 490
	fltx4* pY; // 491
	fltx4* pZ; // 492
	size_t nRowToRowStride; // 493
	size_t nRowToRowStrideX; // 494
	size_t nRowToRowStrideY; // 495
	size_t nRowToRowStrideZ; // 496
	int nRowCtr; // 497
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 485
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 486
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 487
	}
	{
		int nColCtr; // 500
		CSOAContainer::NumQuadsPerRow(); // 500
	}
	CSOAContainer::NumCols(); // 485
	CSOAContainer::NumCols(); // 485
	CSOAContainer::NumRows(); // 486
	CSOAContainer::NumRows(); // 486
	CSOAContainer::NumSlices(); // 487
	CSOAContainer::NumSlices(); // 487
	CSOAContainer::RowPtr<FourVectors>(
				int nAttributeIdx,
				int nRowNumber,
				int nSliceNumber);  // 489
	CSOAContainer::RowPtr<__vector(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 490
	CSOAContainer::RowPtr<__vector(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 491
	CSOAContainer::RowPtr<__vector(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 492
	CSOAContainer::NumRows(); // 497
	CSOAContainer::NumSlices(); // 497
} /* size: 0, variables: 10, inline expansions: 12 (0 bytes) */

// <009DD484> tier0_perproject/utlsoacontainer.cpp:475
// variables: 14
// function calls: 13
void CSOAContainer::UnPackVectorAttributeToScalarAttributes(CSOAContainer* pInput, int nVecAttributeIn, int nScalarAttributeX, int nScalarAttributeY, int nScalarAttributeZ)
{
	const char   __FUNCTION__; // 40058
	FourVectors* pIn; // 489
	fltx4* pX; // 490
	fltx4* pY; // 491
	fltx4* pZ; // 492
	size_t nRowToRowStride; // 493
	size_t nRowToRowStrideX; // 494
	size_t nRowToRowStrideY; // 495
	size_t nRowToRowStrideZ; // 496
	int nRowCtr; // 497
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 485
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 486
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 487
	}
	{
		int nColCtr; // 500
		CSOAContainer::NumQuadsPerRow(); // 500
	}
	CSOAContainer::NumCols(); // 485
	CSOAContainer::NumCols(); // 485
	CSOAContainer::NumRows(); // 486
	CSOAContainer::NumRows(); // 486
	CSOAContainer::NumSlices(); // 487
	CSOAContainer::NumSlices(); // 487
	CSOAContainer::RowPtr<FourVectors>(
				int nAttributeIdx,
				int nRowNumber,
				int nSliceNumber);  // 489
	CSOAContainer::RowPtr<__vector(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 490
	CSOAContainer::RowPtr<__vector(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 491
	CSOAContainer::RowPtr<__vector(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 492
	CSOAContainer::NumRows(); // 497
	CSOAContainer::NumSlices(); // 497
} /* size: 0, variables: 10, inline expansions: 12 (0 bytes) */

// <044FBD45> tier0_perproject/utlsoacontainer.cpp:517
// variables: 17
// function calls: 27
void CSOAContainer::MultiplyVectorAttribute(CSOAContainer* pInput, int nAttributeIn, const Vector& vecScalar, int nAttributeOut)
{
	const char   __FUNCTION__; // 6781
	FourVectors v4Scale; // 523
	size_t nRowToRowStride; // 527
	size_t nRowToRowStrideOut; // 528
	int nRowCtr; // 529
	const FourVectors* pIn; // 530
	FourVectors* pOut; // 531
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 521
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 522
	}
	{
		int nColCtr; // 534
		{
			FourVectors v4In; // 537
			FourVectors::FourVectors(
					const FourVectors& src);  // 537
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 148
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 148
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 148
			FourVectors::ApplyBinaryUpdateFunction<MulSIMD<> >(
								const FourVectors& v4Arg);  // 148
			FourVectors::operator*=(
					const FourVectors& b);  // 539
			FourVectors::operator=(
					const FourVectors& src);  // 540
		}
		CSOAContainer::NumQuadsPerRow(); // 534
	}
	CSOAContainer::NumCols(); // 521
	CSOAContainer::NumCols(); // 521
	CSOAContainer::NumRows(); // 522
	CSOAContainer::NumRows(); // 522
	FourVectors::FourVectors(); // 523
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 98
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 99
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 100
	FourVectors::DuplicateVector(
			const Vector& v);  // 524
	CSOAContainer::RowPtr<FourVectors>(
				int nAttributeIdx,
				int nRowNumber,
				int nSliceNumber);  // 530
	CSOAContainer::RowPtr<FourVectors>(
				int nAttributeIdx,
				int nRowNumber,
				int nSliceNumber);  // 531
	CSOAContainer::NumRows(); // 529
	CSOAContainer::NumSlices(); // 529
} /* size: 0, variables: 7, inline expansions: 13 (0 bytes) */

// <01B57457> tier0_perproject/utlsoacontainer.cpp:517
// variables: 17
// function calls: 27
void CSOAContainer::MultiplyVectorAttribute(CSOAContainer* pInput, int nAttributeIn, const Vector& vecScalar, int nAttributeOut)
{
	const char   __FUNCTION__; // 47170
	FourVectors v4Scale; // 523
	size_t nRowToRowStride; // 527
	size_t nRowToRowStrideOut; // 528
	int nRowCtr; // 529
	const FourVectors* pIn; // 530
	FourVectors* pOut; // 531
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 521
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 522
	}
	{
		int nColCtr; // 534
		{
			FourVectors v4In; // 537
			FourVectors::FourVectors(
					const FourVectors& src);  // 537
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 148
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 148
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 148
			FourVectors::ApplyBinaryUpdateFunction<MulSIMD<> >(
								const FourVectors& v4Arg);  // 148
			FourVectors::operator*=(
					const FourVectors& b);  // 539
			FourVectors::operator=(
					const FourVectors& src);  // 540
		}
		CSOAContainer::NumQuadsPerRow(); // 534
	}
	CSOAContainer::NumCols(); // 521
	CSOAContainer::NumCols(); // 521
	CSOAContainer::NumRows(); // 522
	CSOAContainer::NumRows(); // 522
	FourVectors::FourVectors(); // 523
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 98
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 99
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 100
	FourVectors::DuplicateVector(
			const Vector& v);  // 524
	CSOAContainer::RowPtr<FourVectors>(
				int nAttributeIdx,
				int nRowNumber,
				int nSliceNumber);  // 530
	CSOAContainer::RowPtr<FourVectors>(
				int nAttributeIdx,
				int nRowNumber,
				int nSliceNumber);  // 531
	CSOAContainer::NumRows(); // 529
	CSOAContainer::NumSlices(); // 529
} /* size: 0, variables: 7, inline expansions: 13 (0 bytes) */

// <009DCCBA> tier0_perproject/utlsoacontainer.cpp:517
// variables: 17
// function calls: 27
void CSOAContainer::MultiplyVectorAttribute(CSOAContainer* pInput, int nAttributeIn, const Vector& vecScalar, int nAttributeOut)
{
	const char   __FUNCTION__; // 39890
	FourVectors v4Scale; // 523
	size_t nRowToRowStride; // 527
	size_t nRowToRowStrideOut; // 528
	int nRowCtr; // 529
	const FourVectors* pIn; // 530
	FourVectors* pOut; // 531
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 521
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 522
	}
	{
		int nColCtr; // 534
		{
			FourVectors v4In; // 537
			FourVectors::FourVectors(
					const FourVectors& src);  // 537
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 148
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 148
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 148
			FourVectors::ApplyBinaryUpdateFunction<MulSIMD<> >(
								const FourVectors& v4Arg);  // 148
			FourVectors::operator*=(
					const FourVectors& b);  // 539
			FourVectors::operator=(
					const FourVectors& src);  // 540
		}
		CSOAContainer::NumQuadsPerRow(); // 534
	}
	CSOAContainer::NumCols(); // 521
	CSOAContainer::NumCols(); // 521
	CSOAContainer::NumRows(); // 522
	CSOAContainer::NumRows(); // 522
	FourVectors::FourVectors(); // 523
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 98
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 99
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 100
	FourVectors::DuplicateVector(
			const Vector& v);  // 524
	CSOAContainer::RowPtr<FourVectors>(
				int nAttributeIdx,
				int nRowNumber,
				int nSliceNumber);  // 530
	CSOAContainer::RowPtr<FourVectors>(
				int nAttributeIdx,
				int nRowNumber,
				int nSliceNumber);  // 531
	CSOAContainer::NumRows(); // 529
	CSOAContainer::NumSlices(); // 529
} /* size: 0, variables: 7, inline expansions: 13 (0 bytes) */

// <044FB934> tier0_perproject/utlsoacontainer.cpp:547
// variables: 11
// function calls: 12
void CSOAContainer::RandomizeAttribute(int nAttr, float flMin, float flMax)
{
	fltx4* pOut; // 550
	size_t nRowToRowStride; // 551
	int nContext; // 552
	int nRowCtr; // 553
	fltx4 fl4Min; // 554
	fltx4 fl4Domain; // 555
	{
		int nColCtr; // 558
		CSOAContainer::NumQuadsPerRow(); // 558
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 561
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 561
	}
	CSOAContainer::RowPtr<__vector(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 550
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 554
	CSOAContainer::NumRows(); // 553
	CSOAContainer::NumSlices(); // 553
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 555
} /* size: 0, variables: 6, inline expansions: 5 (0 bytes) */

// <044FB5A0> tier0_perproject/utlsoacontainer.cpp:570
// variables: 13
// function calls: 8
void CSOAContainer::FillAttrWithInterpolatedValues(int nAttr, float flValue00, float flValue10, float flValue01, float flValue11)
{
	float ooWidth; // 572
	float ooHeight; // 573
	float flYDelta0; // 574
	float flYDelta1; // 575
	int nRowCtr; // 576
	fltx4* pOut; // 577
	size_t nRowToRowStride; // 578
	{
		float flXDelta; // 581
		fltx4 fl4Value; // 582
		fltx4 fl4XDelta; // 587
		int nColCtr; // 588
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 587
		CSOAContainer::NumQuadsPerRow(); // 588
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 592
	}
	CSOAContainer::NumCols(); // 572
	CSOAContainer::RowPtr<__vector(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 577
	CSOAContainer::NumRows(); // 573
} /* size: 0, variables: 7, inline expansions: 3 (0 bytes) */

// <044FA333> tier0_perproject/utlsoacontainer.cpp:601
// variables: 29
// function calls: 73
void CSOAContainer::FillAttrWithInterpolatedValues(int nAttr, Vector vecValue00, Vector vecValue10, const Vector& vecValue01, const Vector& vecValue11)
{
	float ooWidth; // 603
	float ooHeight; // 604
	Vector vecYDelta0; // 605
	Vector vecYDelta1; // 606
	int nRowCtr; // 607
	FourVectors* pOut; // 608
	size_t nRowToRowStride; // 609
	{
		Vector vecXDelta; // 612
		FourVectors v4Value; // 613
		FourVectors v4XDelta; // 616
		int nColCtr; // 618
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 612
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 612
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 615
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 615
		FourVectors::FourVectors(); // 613
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 615
		{
			fltx4 retVal; // 947
			_mm_loadu_ps(const float* __P); // 948
		}
		LoadUnalignedSIMD<>(const void* pSIMD); // 311
		{
			__v4sf __r0; // 2491
			__v4sf __r1; // 2491
			__v4sf __r2; // 2491
			__v4sf __r3; // 2491
			__v4sf __t0; // 2491
			__v4sf __t1; // 2491
			__v4sf __t2; // 2491
			__v4sf __t3; // 2491
		}
		TransposeSIMD<>(fltx4& x,
				fltx4& y,
				fltx4& z,
				fltx4& w);  // 318
		{
			fltx4 retVal; // 947
			_mm_loadu_ps(const float* __P); // 948
		}
		LoadUnalignedSIMD<>(const void* pSIMD); // 309
		{
			fltx4 retVal; // 947
			_mm_loadu_ps(const float* __P); // 948
		}
		LoadUnalignedSIMD<>(const void* pSIMD); // 310
		{
			fltx4 retVal; // 947
			_mm_loadu_ps(const float* __P); // 948
		}
		LoadUnalignedSIMD<>(const void* pSIMD); // 312
		FourVectors::LoadAndSwizzle(
				const Vector& a,
				const Vector& b,
				const Vector& c,
				const Vector& d);  // 614
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 617
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 615
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 615
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 614
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 100
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 98
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 99
		FourVectors::DuplicateVector(
				const Vector& v);  // 617
		FourVectors::FourVectors(); // 616
		CSOAContainer::NumQuadsPerRow(); // 618
		FourVectors::operator=(
				const FourVectors& src);  // 621
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 129
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 129
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 129
		FourVectors::ApplyBinaryUpdateFunction<AddSIMD<> >(
							const FourVectors& v4Arg);  // 129
		FourVectors::operator+=(
				const FourVectors& b);  // 622
		Vector::operator+=(
				const Vector& v);  // 625
		Vector::operator+=(
				const Vector& v);  // 626
	}
	CSOAContainer::NumCols(); // 603
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 605
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 606
	CSOAContainer::RowPtr<FourVectors>(
				int nAttributeIdx,
				int nRowNumber,
				int nSliceNumber);  // 608
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 606
	CSOAContainer::NumRows(); // 604
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 605
} /* size: 0, variables: 7, inline expansions: 17 (0 bytes) */

// <044F9F7A> tier0_perproject/utlsoacontainer.cpp:631
// variables: 9
// function calls: 14
void CSOAContainer::FillAttr(int nAttr, const Vector& vecValue)
{
	FourVectors v4Fill; // 633
	FourVectors* pOut; // 643
	size_t nRowToRowStride; // 644
	int nRowCtr; // 645
	{
		FourVectors* pOut; // 637
		FourVectors::operator=(
				const FourVectors& src);  // 638
	}
	{
		int nColCtr; // 648
		CSOAContainer::NumQuadsPerRow(); // 648
		FourVectors::operator=(
				const FourVectors& src);  // 651
	}
	FourVectors::FourVectors(); // 633
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 98
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 99
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 100
	FourVectors::DuplicateVector(
			const Vector& v);  // 634
	CSOAContainer::HasAllocatedMemory(
				int nAttrIdx);  // 635
	CSOAContainer::NumRows(); // 645
	CSOAContainer::NumSlices(); // 645
} /* size: 0, variables: 4, inline expansions: 8 (0 bytes) */

// <0450114F> tier0_perproject/utlsoacontainer.cpp:657
// variables: 5
// function calls: 2
void CSOAContainer::FillAttrPartial(int nStartRow, int nNumRows, int nStartSlice, int nEndSlice, int nAttr, fltx4 fl4Value)
{
	{
		int z; // 659
		{
			fltx4* pOut; // 661
			size_t nRowToRowStride; // 662
			int nRowCtr; // 663
			CSOAContainer::RowPtr<__vector(
							int nAttributeIdx,
							int nRowNumber,
							int nSliceNumber);  // 661
			{
				int nColCtr; // 666
				CSOAContainer::NumQuadsPerRow(); // 666
			}
		}
	}
} /* size: 169 */

// <044F9ECA> tier0_perproject/utlsoacontainer.cpp:657
// variables: 5
void CSOAContainer::FillAttrPartial(int nStartRow, int nNumRows, int nStartSlice, int nEndSlice, int nAttr, fltx4 fl4Value)
{
	{
		int z; // 659
		{
			fltx4* pOut; // 661
			size_t nRowToRowStride; // 662
			int nRowCtr; // 663
			{
				int nColCtr; // 666
			}
		}
	}
} /* size: 0 */

// <044F92A3> tier0_perproject/utlsoacontainer.cpp:677
// variables: 16
// function calls: 49
void CSOAContainer::FillAttr(int nAttr, float flValue)
{
	{
		fltx4* pOut; // 681
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 682
	}
	{
		CCallQueue workList; // 687
		int nY; // 687
		{
			int nStep; // 687
			CCallQueue::ResumeProcessing(); // 115
			_Function_base::_Function_base(); // 407
			function<void()>::operator bool()>* this); // 409
			function<void()>::function(
				function<void()>& __x); // 102
			CCallQueue::QueueCall(
					function<void()>& fnCall);  // 96
			function<void()>::operator()(const function<void()>* this); // 110
			CCallQueue::QueueCall(
					function<void()>& fnCall);  // 338
			_Function_base::~_Function_base(); // 336
			function<void()>::~function()>* this); // 338
			{
				_M_create<QueueCallWrapper<CSOAContainer, int, __vector(4) float>(CCallQueue&, CSOAContainer*, int, void (CSOAContainer::*)(int, int, int, int, int, __vector(4) float), int, int, int, __vector(4) float)::<lambda()> >(union _Any_data& __dest,
																class& __f,
																false_type); // 217
				_M_init_functor<QueueCallWrapper<CSOAContainer, int, __vector(4) float>(CCallQueue&, CSOAContainer*, int, void (CSOAContainer::*)(int, int, int, int, int, __vector(4) float), int, int, int, __vector(4) float)::<lambda()> >(union _Any_data& __functor,
																class& __f); // 451
				_M_not_empty_function<QueueCallWrapper<CSOAContainer, int, __vector(4) float>(CCallQueue&, CSOAContainer*, int, void (CSOAContainer::*)(int, int, int, int, int, __vector(4) float), int, int, int, __vector(4) float)::<lambda()> >(const &); // 449
			}
			_Function_base::_Function_base(); // 439
			function<void()>::function<QueueCallWrapper<CSOAContainer, int, __vector(
																class& __f); // 338
			QueueCallWrapper<CSOAContainer, int, __vector(4) float>(CCallQueue& queue,
										CSOAContainer* instance,
										int nSlices,
										void ()(CSOAContainer *, int, int, int, int, int, float) CSOAContainer::* method,
										int nY,
										int nStep); // 687
			CSOAContainer::NumSlices(); // 687
		}
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		CTSListBase::CTSListBase(); // 846
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		Node_t::Node_t(); // 864
		CTSQueue<std::function<void()>::End()>*, false>* this); // 865
		CTSQueue<std::function<void()>::CTSQueue()>*, false>* this); // 13
		CCallQueue::CCallQueue(); // 687
		CSOAContainer::NumRows(); // 687
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<std::function<void()>::FreeNode(
			Node_t* pNode); // 1103
		CTSQueue<std::function<void()>::PopItem(
			function<void()>** pResult); // 75
		_Function_base::~_Function_base(); // 336
		function<void()>::~function()>* this); // 77
		CCallQueue::ResumeProcessing(); // 80
		CCallQueue::Flush(); // 17
		CCallQueue::~CCallQueue(); // 687
	}
	CSOAContainer::HasAllocatedMemory(
				int nAttrIdx);  // 679
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 687
	CSOAContainer::NumSlices(); // 687
	CSOAContainer::NumRows(); // 687
	{
		int z; // 659
		{
			fltx4* pOut; // 661
			size_t nRowToRowStride; // 662
			int nRowCtr; // 663
			CSOAContainer::RowPtr<__vector(
							int nAttributeIdx,
							int nRowNumber,
							int nSliceNumber);  // 661
			{
				int nColCtr; // 666
				CSOAContainer::NumQuadsPerRow(); // 666
			}
		}
	}
	CSOAContainer::FillAttrPartial(
			int nStartRow,
			int nNumRows,
			int nStartSlice,
			int nEndSlice,
			int nAttr,
			fltx4 fl4Value);  // 687
} /* size: 1138, inline expansions: 5 (167 bytes) */

// <044F905B> tier0_perproject/utlsoacontainer.cpp:690
// variables: 7
// function calls: 3
void CSOAContainer::SrgbGammaToLinearPartial(CSOAContainer* pSrcTable, int nSrcAttr, int nDestAttr, int nStartRow, int nNumRows, int nStartSlice, int nEndSlice)
{
	{
		int z; // 692
		{
			fltx4* pOut; // 694
			fltx4* pIn; // 695
			size_t nSrcRowToRowStride; // 696
			size_t nDestRowToRowStride; // 697
			int nRowCtr; // 698
			{
				int nColCtr; // 701
				CSOAContainer::NumQuadsPerRow(); // 701
			}
			CSOAContainer::RowPtr<__vector(
							int nAttributeIdx,
							int nRowNumber,
							int nSliceNumber);  // 694
			CSOAContainer::RowPtr<__vector(
							int nAttributeIdx,
							int nRowNumber,
							int nSliceNumber);  // 695
		}
	}
} /* size: 281 */

// <044F8A85> tier0_perproject/utlsoacontainer.cpp:712
// variables: 15
// function calls: 18
void CSOAContainer::CalculateStandardDeviationFromMoments(int nSrcMeanAttr, int nSrcMeanSquaredAttr, const CSOAContainer* pSrc, int nAttributeOut, float flScaleValue)
{
	fltx4 fl4Scale; // 714
	{
		int z; // 715
		{
			fltx4* pOut; // 717
			fltx4* pIn; // 718
			fltx4* pIn2; // 719
			size_t nSrcRowToRowStride; // 720
			size_t nDestRowToRowStride; // 721
			int nRowCtr; // 722
			{
				int nColCtr; // 725
				{
					fltx4 retVal; // 2228
					_mm_max_ps(__m128 __A,
							__m128 __B);  // 2229
				}
				MaxSIMD<>(const fltx4& a,
						const fltx4& b);  // 729
				CSOAContainer::NumQuadsPerRow(); // 725
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 729
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 729
				{
					fltx4 retVal; // 2350
					_mm_sqrt_ps(__m128 __A); // 2351
				}
				SqrtSIMD<>(const fltx4& a); // 729
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 729
			}
			CSOAContainer::RowPtr<__vector(
							int nAttributeIdx,
							int nRowNumber,
							int nSliceNumber);  // 719
			CSOAContainer::RowPtr<__vector(
							int nAttributeIdx,
							int nRowNumber,
							int nSliceNumber);  // 718
			CSOAContainer::RowPtr<__vector(
							int nAttributeIdx,
							int nRowNumber,
							int nSliceNumber);  // 717
			CSOAContainer::NumRows(); // 722
		}
		CSOAContainer::NumSlices(); // 715
	}
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 714
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <044D7874> tier0_perproject/utlsoacontainer.cpp:739
// variables: 58
// function calls: 100
void CSOAContainer::Normalize3ComponentVectorInAttributesPartial<true>(int nStartRow, int nNumRows, int nStartSlice, int nEndSlice, int nXAttr, int nYAttr, int nZAttr, Vector vValueToUseForZeroVectors, bool bTreat000InputAsZeroVector)
{
	FourVectors v4ValueToUseForZeroVectors; // 742
	{
		int z; // 744
		{
			fltx4* pX; // 746
			fltx4* pY; // 747
			fltx4* pZ; // 748
			int nRowCtr; // 750
			{
				int nColCtr; // 753
				{
					fltx4 fl4X; // 756
					fltx4 fl4Y; // 757
					fltx4 fl4Z; // 758
					fltx4 fl4BadLength; // 760
					fltx4 fl4Mag2; // 778
					fltx4 fl4OOLen; // 780
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 773
					{
						fltx4 retVal; // 1616
						_mm_sub_ps(__m128 __A,
								__m128 __B);  // 1617
					}
					SubSIMD<>(const fltx4& a,
							const fltx4& b);  // 773
					{
						fltx4 retVal; // 2067
						_mm_cmplt_ps(__m128 __A,
								__m128 __B);  // 2068
					}
					CmpLtSIMD<>(const fltx4& a,
							const fltx4& b);  // 779
					{
						fltx4 retVal; // 1616
						_mm_sub_ps(__m128 __A,
								__m128 __B);  // 1617
					}
					SubSIMD<>(const fltx4& a,
							const fltx4& b);  // 2408
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 2409
					{
						fltx4 retVal; // 2369
						_mm_rsqrt_ps(__m128 __A); // 2370
					}
					ReciprocalSqrtEstSIMD<>(const fltx4& a); // 2406
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 2408
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 2408
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 2408
					ReciprocalSqrtSIMD<>(const fltx4& a); // 780
					{
						fltx4 retVal; // 1851
						_mm_cmpeq_ps(__m128 __A,
								__m128 __B);  // 1852
					}
					CmpEqSIMD<>(const fltx4& a,
							const fltx4& b);  // 764
					{
						fltx4 retVal; // 1851
						_mm_cmpeq_ps(__m128 __A,
								__m128 __B);  // 1852
					}
					CmpEqSIMD<>(const fltx4& a,
							const fltx4& b);  // 764
					{
						fltx4 retVal; // 718
						_mm_and_ps(__m128 __A,
								__m128 __B);  // 719
					}
					AndSIMD<>(const fltx4& a,
							const fltx4& b);  // 764
					{
						fltx4 retVal; // 1851
						_mm_cmpeq_ps(__m128 __A,
								__m128 __B);  // 1852
					}
					CmpEqSIMD<>(const fltx4& a,
							const fltx4& b);  // 764
					{
						fltx4 retVal; // 718
						_mm_and_ps(__m128 __A,
								__m128 __B);  // 719
					}
					AndSIMD<>(const fltx4& a,
							const fltx4& b);  // 764
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 774
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 775
					{
						fltx4 retVal; // 1616
						_mm_sub_ps(__m128 __A,
								__m128 __B);  // 1617
					}
					SubSIMD<>(const fltx4& a,
							const fltx4& b);  // 774
					{
						fltx4 retVal; // 1616
						_mm_sub_ps(__m128 __A,
								__m128 __B);  // 1617
					}
					SubSIMD<>(const fltx4& a,
							const fltx4& b);  // 775
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 778
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 778
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 778
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 778
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 778
					{
						fltx4 retVal; // 875
						_mm_or_ps(__m128 __A,
								__m128 __B);  // 876
					}
					OrSIMD<>(const fltx4& a,
						const fltx4& b);  // 779
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 783
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 784
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 785
					{
						fltx4 retVal; // 826
						_mm_xor_ps(__m128 __A,
								__m128 __B);  // 827
					}
					XorSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					{
						fltx4 retVal; // 718
						_mm_and_ps(__m128 __A,
								__m128 __B);  // 719
					}
					AndSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					{
						fltx4 retVal; // 826
						_mm_xor_ps(__m128 __A,
								__m128 __B);  // 827
					}
					XorSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					MaskedAssign<>(const fltx4& ReplacementMask,
							const fltx4& a,
							const fltx4& b);  // 785
					{
						fltx4 retVal; // 826
						_mm_xor_ps(__m128 __A,
								__m128 __B);  // 827
					}
					XorSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					{
						fltx4 retVal; // 718
						_mm_and_ps(__m128 __A,
								__m128 __B);  // 719
					}
					AndSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					{
						fltx4 retVal; // 826
						_mm_xor_ps(__m128 __A,
								__m128 __B);  // 827
					}
					XorSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					MaskedAssign<>(const fltx4& ReplacementMask,
							const fltx4& a,
							const fltx4& b);  // 783
					{
						fltx4 retVal; // 826
						_mm_xor_ps(__m128 __A,
								__m128 __B);  // 827
					}
					XorSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					{
						fltx4 retVal; // 718
						_mm_and_ps(__m128 __A,
								__m128 __B);  // 719
					}
					AndSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					{
						fltx4 retVal; // 826
						_mm_xor_ps(__m128 __A,
								__m128 __B);  // 827
					}
					XorSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					MaskedAssign<>(const fltx4& ReplacementMask,
							const fltx4& a,
							const fltx4& b);  // 784
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 789
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 791
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 789
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 790
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 790
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 791
				}
				CSOAContainer::NumQuadsPerRow(); // 753
			}
			CSOAContainer::RowPtr<__vector(
							int nAttributeIdx,
							int nRowNumber,
							int nSliceNumber);  // 746
			CSOAContainer::RowPtr<__vector(
							int nAttributeIdx,
							int nRowNumber,
							int nSliceNumber);  // 747
			CSOAContainer::RowPtr<__vector(
							int nAttributeIdx,
							int nRowNumber,
							int nSliceNumber);  // 748
		}
	}
	FourVectors::FourVectors(); // 742
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 98
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 99
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 100
	FourVectors::DuplicateVector(
			const Vector& v);  // 743
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <044D644B> tier0_perproject/utlsoacontainer.cpp:739
// variables: 41
// function calls: 66
void CSOAContainer::Normalize3ComponentVectorInAttributesPartial<false>(int nStartRow, int nNumRows, int nStartSlice, int nEndSlice, int nXAttr, int nYAttr, int nZAttr, Vector vValueToUseForZeroVectors, bool bTreat000InputAsZeroVector)
{
	FourVectors v4ValueToUseForZeroVectors; // 742
	{
		int z; // 744
		{
			fltx4* pX; // 746
			fltx4* pY; // 747
			fltx4* pZ; // 748
			int nRowCtr; // 750
			{
				int nColCtr; // 753
				{
					fltx4 fl4X; // 756
					fltx4 fl4Y; // 757
					fltx4 fl4Z; // 758
					fltx4 fl4BadLength; // 760
					fltx4 fl4Mag2; // 778
					fltx4 fl4OOLen; // 780
					{
						fltx4 retVal; // 2067
						_mm_cmplt_ps(__m128 __A,
								__m128 __B);  // 2068
					}
					CmpLtSIMD<>(const fltx4& a,
							const fltx4& b);  // 779
					{
						fltx4 retVal; // 1616
						_mm_sub_ps(__m128 __A,
								__m128 __B);  // 1617
					}
					SubSIMD<>(const fltx4& a,
							const fltx4& b);  // 2408
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 2409
					{
						fltx4 retVal; // 2369
						_mm_rsqrt_ps(__m128 __A); // 2370
					}
					ReciprocalSqrtEstSIMD<>(const fltx4& a); // 2406
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 2408
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 2408
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 2408
					ReciprocalSqrtSIMD<>(const fltx4& a); // 780
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 778
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 778
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 778
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 778
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 778
					{
						fltx4 retVal; // 875
						_mm_or_ps(__m128 __A,
								__m128 __B);  // 876
					}
					OrSIMD<>(const fltx4& a,
						const fltx4& b);  // 779
					{
						fltx4 retVal; // 826
						_mm_xor_ps(__m128 __A,
								__m128 __B);  // 827
					}
					XorSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					{
						fltx4 retVal; // 718
						_mm_and_ps(__m128 __A,
								__m128 __B);  // 719
					}
					AndSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					{
						fltx4 retVal; // 826
						_mm_xor_ps(__m128 __A,
								__m128 __B);  // 827
					}
					XorSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					MaskedAssign<>(const fltx4& ReplacementMask,
							const fltx4& a,
							const fltx4& b);  // 783
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 783
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 784
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 785
					{
						fltx4 retVal; // 826
						_mm_xor_ps(__m128 __A,
								__m128 __B);  // 827
					}
					XorSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					{
						fltx4 retVal; // 718
						_mm_and_ps(__m128 __A,
								__m128 __B);  // 719
					}
					AndSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					{
						fltx4 retVal; // 826
						_mm_xor_ps(__m128 __A,
								__m128 __B);  // 827
					}
					XorSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					MaskedAssign<>(const fltx4& ReplacementMask,
							const fltx4& a,
							const fltx4& b);  // 785
					{
						fltx4 retVal; // 826
						_mm_xor_ps(__m128 __A,
								__m128 __B);  // 827
					}
					XorSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					{
						fltx4 retVal; // 718
						_mm_and_ps(__m128 __A,
								__m128 __B);  // 719
					}
					AndSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					{
						fltx4 retVal; // 826
						_mm_xor_ps(__m128 __A,
								__m128 __B);  // 827
					}
					XorSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					MaskedAssign<>(const fltx4& ReplacementMask,
							const fltx4& a,
							const fltx4& b);  // 784
				}
				CSOAContainer::NumQuadsPerRow(); // 753
			}
			CSOAContainer::RowPtr<__vector(
							int nAttributeIdx,
							int nRowNumber,
							int nSliceNumber);  // 746
			CSOAContainer::RowPtr<__vector(
							int nAttributeIdx,
							int nRowNumber,
							int nSliceNumber);  // 747
			CSOAContainer::RowPtr<__vector(
							int nAttributeIdx,
							int nRowNumber,
							int nSliceNumber);  // 748
		}
	}
	FourVectors::FourVectors(); // 742
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 98
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 99
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 100
	FourVectors::DuplicateVector(
			const Vector& v);  // 743
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <044F7689> tier0_perproject/utlsoacontainer.cpp:803
// variables: 14
// function calls: 79
void CSOAContainer::Normalize3ComponentVectorInAttributes(int nXAttr, int nYAttr, int nZAttr, Vector vValueToUseForZeroVectors, bool bTreatAsUnsigned, bool bTreat000InputAsZeroVector)
{
	{
		CCallQueue workList; // 807
		int nY; // 807
		{
			int nStep; // 807
			CCallQueue::ResumeProcessing(); // 115
			_Function_base::_Function_base(); // 407
			function<void()>::operator bool()>* this); // 409
			function<void()>::function(
				function<void()>& __x); // 102
			CCallQueue::QueueCall(
					function<void()>& fnCall);  // 96
			function<void()>::operator()(const function<void()>* this); // 110
			CCallQueue::QueueCall(
					function<void()>& fnCall);  // 338
			_Function_base::~_Function_base(); // 336
			function<void()>::~function()>* this); // 338
			{
				_M_create<QueueCallWrapper<CSOAContainer, int, int, int, Vector, bool>(CCallQueue&, CSOAContainer*, int, void (CSOAContainer::*)(int, int, int, int, int, int, int, Vector, bool), int, int, int, int, int, Vector, bool)::<lambda()> >(union _Any_data& __dest,
																class& __f,
																false_type); // 217
				_M_init_functor<QueueCallWrapper<CSOAContainer, int, int, int, Vector, bool>(CCallQueue&, CSOAContainer*, int, void (CSOAContainer::*)(int, int, int, int, int, int, int, Vector, bool), int, int, int, int, int, Vector, bool)::<lambda()> >(union _Any_data& __functor,
																class& __f); // 451
				_M_not_empty_function<QueueCallWrapper<CSOAContainer, int, int, int, Vector, bool>(CCallQueue&, CSOAContainer*, int, void (CSOAContainer::*)(int, int, int, int, int, int, int, Vector, bool), int, int, int, int, int, Vector, bool)::<lambda()> >(const &); // 449
			}
			_Function_base::_Function_base(); // 439
			function<void()>::function<QueueCallWrapper<CSOAContainer, int, int, int, Vector, bool>(
																class& __f); // 338
			QueueCallWrapper<CSOAContainer, int, int, int, Vector, bool>(CCallQueue& queue,
											CSOAContainer* instance,
											int nSlices,
											void ()(CSOAContainer *, int, int, int, int, int, int, int, Vector, bool) CSOAContainer::* method,
											int nY,
											int nStep);  // 807
			CSOAContainer::NumSlices(); // 807
		}
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		CTSListBase::CTSListBase(); // 846
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		Node_t::Node_t(); // 864
		CTSQueue<std::function<void()>::End()>*, false>* this); // 865
		CTSQueue<std::function<void()>::CTSQueue()>*, false>* this); // 13
		CCallQueue::CCallQueue(); // 807
		CSOAContainer::NumRows(); // 807
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<std::function<void()>::FreeNode(
			Node_t* pNode); // 1103
		CTSQueue<std::function<void()>::PopItem(
			function<void()>** pResult); // 75
		_Function_base::~_Function_base(); // 336
		function<void()>::~function()>* this); // 77
		CCallQueue::Flush(); // 17
		CCallQueue::~CCallQueue(); // 807
	}
	{
		CCallQueue workList; // 811
		int nY; // 811
		{
			int nStep; // 811
			CCallQueue::ResumeProcessing(); // 115
			_Function_base::_Function_base(); // 407
			function<void()>::operator bool()>* this); // 409
			function<void()>::function(
				function<void()>& __x); // 102
			CCallQueue::QueueCall(
					function<void()>& fnCall);  // 96
			function<void()>::operator()(const function<void()>* this); // 110
			CCallQueue::QueueCall(
					function<void()>& fnCall);  // 338
			_Function_base::~_Function_base(); // 336
			function<void()>::~function()>* this); // 338
			{
				_M_create<QueueCallWrapper<CSOAContainer, int, int, int, Vector, bool>(CCallQueue&, CSOAContainer*, int, void (CSOAContainer::*)(int, int, int, int, int, int, int, Vector, bool), int, int, int, int, int, Vector, bool)::<lambda()> >(union _Any_data& __dest,
																class& __f,
																false_type); // 217
				_M_init_functor<QueueCallWrapper<CSOAContainer, int, int, int, Vector, bool>(CCallQueue&, CSOAContainer*, int, void (CSOAContainer::*)(int, int, int, int, int, int, int, Vector, bool), int, int, int, int, int, Vector, bool)::<lambda()> >(union _Any_data& __functor,
																class& __f); // 451
				_M_not_empty_function<QueueCallWrapper<CSOAContainer, int, int, int, Vector, bool>(CCallQueue&, CSOAContainer*, int, void (CSOAContainer::*)(int, int, int, int, int, int, int, Vector, bool), int, int, int, int, int, Vector, bool)::<lambda()> >(const &); // 449
			}
			_Function_base::_Function_base(); // 439
			function<void()>::function<QueueCallWrapper<CSOAContainer, int, int, int, Vector, bool>(
																class& __f); // 338
			QueueCallWrapper<CSOAContainer, int, int, int, Vector, bool>(CCallQueue& queue,
											CSOAContainer* instance,
											int nSlices,
											void ()(CSOAContainer *, int, int, int, int, int, int, int, Vector, bool) CSOAContainer::* method,
											int nY,
											int nStep);  // 811
			CSOAContainer::NumSlices(); // 811
		}
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		CTSListBase::CTSListBase(); // 846
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		Node_t::Node_t(); // 864
		CTSQueue<std::function<void()>::End()>*, false>* this); // 865
		CTSQueue<std::function<void()>::CTSQueue()>*, false>* this); // 13
		CCallQueue::CCallQueue(); // 811
		CSOAContainer::NumRows(); // 811
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<std::function<void()>::FreeNode(
			Node_t* pNode); // 1103
		CTSQueue<std::function<void()>::PopItem(
			function<void()>** pResult); // 75
		_Function_base::~_Function_base(); // 336
		function<void()>::~function()>* this); // 77
		CCallQueue::ResumeProcessing(); // 80
		CCallQueue::Flush(); // 17
		CCallQueue::~CCallQueue(); // 811
	}
	CSOAContainer::NumSlices(); // 807
	CSOAContainer::NumRows(); // 807
	CSOAContainer::NumSlices(); // 811
	CSOAContainer::NumRows(); // 811
} /* size: 0, inline expansions: 4 (0 bytes) */

// <0450F323> tier0_perproject/utlsoacontainer.cpp:894
void CSOAContainer::SumAttributeValue(int nAttr)
{
} /* size: 0 */

// <044F56D4> tier0_perproject/utlsoacontainer.cpp:899
// function calls: 7
void CSOAContainer::AverageFloatAttributeValue(int nAttr)
{
	CSOAContainer::HasAllocatedMemory(
				int nAttrIdx);  // 901
	CSOAContainer::SumAttributeValue(
				int nAttr);  // 903
	CSOAContainer::NumCols(); // 903
	CSOAContainer::NumRows(); // 903
	CSOAContainer::NumSlices(); // 903
	CSOAContainer::RowPtr<float>(
			int nAttributeIdx,
			int nRowNumber,
			int nSliceNumber);  // 442
	CSOAContainer::FloatValue(
			int nAttrIdx,
			int nX,
			int nY,
			int nZ);  // 907
} /* size: 0, inline expansions: 7 (0 bytes) */

// <0450F37D> tier0_perproject/utlsoacontainer.cpp:911
void CSOAContainer::MaxAttributeValue(int nAttr)
{
} /* size: 0 */

// <0450F3D7> tier0_perproject/utlsoacontainer.cpp:916
void CSOAContainer::MinAttributeValue(int nAttr)
{
} /* size: 0 */

// <044F4C74> tier0_perproject/utlsoacontainer.cpp:921
// variables: 19
// function calls: 40
void CSOAContainer::NormalizeAttr(int nAttr)
{
	FourVectors* pOut; // 924
	size_t nRowToRowStride; // 925
	int nRowCtr; // 926
	{
		int nColCtr; // 929
		{
			FourVectors v4Data; // 932
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 2408
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 2409
			{
				fltx4 retVal; // 2369
				_mm_rsqrt_ps(__m128 __A); // 2370
			}
			ReciprocalSqrtEstSIMD<>(const fltx4& a); // 2406
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 2408
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 2408
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 2408
			ReciprocalSqrtSIMD<>(const fltx4& a); // 491
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 166
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1684
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1684
			MaddSIMD<>(const fltx4& a,
					const fltx4& b,
					const fltx4& c);  // 167
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1684
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1684
			MaddSIMD<>(const fltx4& a,
					const fltx4& b,
					const fltx4& c);  // 168
			FourVectors::operator*(
					const FourVectors& b);  // 490
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 153
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 154
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 155
			FourVectors::operator*=(
					const fltx4& scale);  // 491
			FourVectors::VectorNormalize(); // 933
			FourVectors::FourVectors(
					const FourVectors& src);  // 932
			FourVectors::operator=(
					const FourVectors& src);  // 934
		}
		CSOAContainer::NumQuadsPerRow(); // 929
	}
	CSOAContainer::RowPtr<FourVectors>(
				int nAttributeIdx,
				int nRowNumber,
				int nSliceNumber);  // 924
	CSOAContainer::NumRows(); // 926
	CSOAContainer::NumSlices(); // 926
} /* size: 0, variables: 3, inline expansions: 3 (0 bytes) */

// <044F41B8> tier0_perproject/utlsoacontainer.cpp:940
// variables: 28
// function calls: 40
void CSOAContainer::ScaleAndBiasAttributeToBeBetweenZeroAndOne(int nAttr)
{
	float flLow; // 942
	float flHigh; // 943
	CSOAContainer::MinAttributeValue(
				int nAttr);  // 942
	CSOAContainer::MaxAttributeValue(
				int nAttr);  // 943
	{
		FourVectors* pOut; // 1237
		size_t nRowToRowStride; // 1238
		int nRowCtr; // 1239
		CSOAContainer::RowPtr<FourVectors>(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 1237
		CSOAContainer::NumRows(); // 1239
		CSOAContainer::NumSlices(); // 1239
		{
			int nColCtr; // 1242
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 657
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 657
			CSOAContainer::NumQuadsPerRow(); // 1242
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 657
		}
	}
	CSOAContainer::ApplyBinaryFunctionToAttr<AddSIMD<> >(
						int nDestAttr,
						const fltx4& fl4FnArg1);  // 1233
	{
		fltx4* pOut; // 1255
		size_t nRowToRowStride; // 1256
		int nRowCtr; // 1257
		{
			int nColCtr; // 1260
			CSOAContainer::NumQuadsPerRow(); // 1260
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 657
		}
	}
	CSOAContainer::ApplyBinaryFunctionToAttr<AddSIMD<> >(
						int nDestAttr,
						const fltx4& fl4FnArg1);  // 657
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 657
	CSOAContainer::AddToAttr(
			int nDestAttr,
			float flAddend);  // 1028
	CSOAAttributeReference::operator-=(
			float flAddend);  // 944
	{
		FourVectors* pOut; // 1237
		size_t nRowToRowStride; // 1238
		int nRowCtr; // 1239
		CSOAContainer::RowPtr<FourVectors>(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 1237
		{
			int nColCtr; // 1242
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 651
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 651
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 651
			CSOAContainer::NumQuadsPerRow(); // 1242
		}
		CSOAContainer::NumRows(); // 1239
		CSOAContainer::NumSlices(); // 1239
	}
	CSOAContainer::ApplyBinaryFunctionToAttr<MulSIMD<> >(
						int nDestAttr,
						const fltx4& fl4FnArg1);  // 1233
	{
		fltx4* pOut; // 1255
		size_t nRowToRowStride; // 1256
		int nRowCtr; // 1257
		{
			int nColCtr; // 1260
			CSOAContainer::NumQuadsPerRow(); // 1260
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 651
		}
	}
	CSOAContainer::ApplyBinaryFunctionToAttr<MulSIMD<> >(
						int nDestAttr,
						const fltx4& fl4FnArg1);  // 651
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 651
	CSOAContainer::MulAttr(
		int nDestAttr,
		float flScale);  // 1020
	CSOAAttributeReference::operator*=(
			float flScale);  // 947
} /* size: 0, variables: 2, inline expansions: 12 (0 bytes) */

// <044F3CD4> tier0_perproject/utlsoacontainer.cpp:951
// variables: 10
// function calls: 15
void CSOAContainer::MulAttr(const CSOAContainer& src, int nSrcAttr, int nDestAttr)
{
	FourVectors* pOut; // 955
	FourVectors* pIn; // 956
	size_t nSrcRowToRowStride; // 957
	size_t nRowToRowStride; // 958
	int nRowCtr; // 959
	{
		int nColCtr; // 962
		{
			FourVectors rslt; // 965
			FourVectors::FourVectors(
					const FourVectors& src);  // 965
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 148
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 148
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 148
			FourVectors::ApplyBinaryUpdateFunction<MulSIMD<> >(
								const FourVectors& v4Arg);  // 148
			FourVectors::operator*=(
					const FourVectors& b);  // 967
			FourVectors::operator=(
					const FourVectors& src);  // 968
		}
		CSOAContainer::NumQuadsPerRow(); // 962
	}
	CSOAContainer::RowPtr<FourVectors>(
				int nAttributeIdx,
				int nRowNumber,
				int nSliceNumber);  // 955
	CSOAContainer::RowPtr<FourVectors>(
				int nAttributeIdx,
				int nRowNumber,
				int nSliceNumber);  // 956
	CSOAContainer::NumRows(); // 959
	CSOAContainer::NumSlices(); // 959
} /* size: 0, variables: 5, inline expansions: 4 (0 bytes) */

// <044F2439> tier0_perproject/utlsoacontainer.cpp:975
// variables: 61
// function calls: 94
void CSOAContainer::FindIndicesOfClosestPoint(int nAttr, const Vector& vPoint, int* nx, int* ny, int* nz)
{
	int nClosestCol; // 980
	int nClosestRow; // 981
	int nClosestSlice; // 982
	FourVectors v4ClosestPoint; // 984
	float flClosestDistance; // 985
	const FourVectors* pPnt; // 987
	size_t nRowToRowStride; // 988
	fltx4 fl4IndexStep; // 989
	FourVectors v4QueryPoint; // 990
	int nSlice; // 993
	{
		int nRow; // 996
		{
			int nColCtr; // 999
			fltx4 fl4ColNumber; // 1000
			fltx4 fl4ClosestColumn; // 1001
			fltx4 fl4ClosestColumnDistance; // 1002
			fltx4 fl4DistShifted; // 1017
			fltx4 fl4IndexShifted; // 1018
			fltx4 fl4ReduceMask0; // 1019
			float flTrial; // 1029
			{
				fltx4 fl4TrialDistanceSQ; // 1005
				fltx4 fl4ReplaceMask; // 1006
				{
					fltx4 retVal; // 602
					_mm_load_ps(const float* __P); // 603
				}
				LoadAlignedSIMD<>(const void* pSIMD); // 60
				{
					fltx4 retVal; // 718
					_mm_and_ps(__m128 __A,
							__m128 __B);  // 719
				}
				AndSIMD<>(const fltx4& a,
						const fltx4& b);  // 60
				ZeroOutTrailingFloats(const fltx4& a,
							int nCount);  // 1009
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				{
					fltx4 retVal; // 718
					_mm_and_ps(__m128 __A,
							__m128 __B);  // 719
				}
				AndSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				MaskedAssign<>(const fltx4& ReplacementMask,
						const fltx4& a,
						const fltx4& b);  // 1011
				{
					fltx4 retVal; // 718
					_mm_and_ps(__m128 __A,
							__m128 __B);  // 719
				}
				AndSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				MaskedAssign<>(const fltx4& ReplacementMask,
						const fltx4& a,
						const fltx4& b);  // 1012
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 496
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 497
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 498
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 499
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 499
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 499
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 499
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 499
				FourVectors::DistToSqr(
						const FourVectors& pnt);  // 1005
				{
					fltx4 retVal; // 2067
					_mm_cmplt_ps(__m128 __A,
							__m128 __B);  // 2068
				}
				CmpLtSIMD<>(const fltx4& a,
						const fltx4& b);  // 1006
				CSOAContainer::NumCols(); // 1009
			}
			{
				int nCol; // 1032
			}
			CSOAContainer::NumQuadsPerRow(); // 999
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 1002
			{
				fltx4 retVal; // 341
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 342
			}
			RotateLeft<>(const fltx4& a); // 1017
			{
				fltx4 retVal; // 341
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 342
			}
			RotateLeft<>(const fltx4& a); // 1018
			{
				fltx4 retVal; // 2067
				_mm_cmplt_ps(__m128 __A,
						__m128 __B);  // 2068
			}
			CmpLtSIMD<>(const fltx4& a,
					const fltx4& b);  // 1019
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 718
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 719
			}
			AndSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			MaskedAssign<>(const fltx4& ReplacementMask,
					const fltx4& a,
					const fltx4& b);  // 1020
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 718
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 719
			}
			AndSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			MaskedAssign<>(const fltx4& ReplacementMask,
					const fltx4& a,
					const fltx4& b);  // 1021
			{
				fltx4 retVal; // 373
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 374
			}
			RotateLeft2<>(const fltx4& a); // 1023
			{
				fltx4 retVal; // 373
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 374
			}
			RotateLeft2<>(const fltx4& a); // 1024
			{
				fltx4 retVal; // 2067
				_mm_cmplt_ps(__m128 __A,
						__m128 __B);  // 2068
			}
			CmpLtSIMD<>(const fltx4& a,
					const fltx4& b);  // 1025
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 718
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 719
			}
			AndSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			MaskedAssign<>(const fltx4& ReplacementMask,
					const fltx4& a,
					const fltx4& b);  // 1026
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 718
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 719
			}
			AndSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			MaskedAssign<>(const fltx4& ReplacementMask,
					const fltx4& a,
					const fltx4& b);  // 1027
		}
		CSOAContainer::NumRows(); // 1042
	}
	FourVectors::FourVectors(); // 984
	CSOAContainer::RowPtr<FourVectors>(
				int nAttributeIdx,
				int nRowNumber,
				int nSliceNumber);  // 987
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 98
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 99
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 100
	FourVectors::DuplicateVector(
			const Vector& v);  // 991
	FourVectors::FourVectors(); // 990
	CSOAContainer::NumSlices(); // 1043
} /* size: 0, variables: 10, inline expansions: 8 (0 bytes) */

// <044F1A5E> tier0_perproject/utlsoacontainer.cpp:1057
// variables: 22
// function calls: 38
void CSOAContainer::AddGaussianSRBF(float flWeight, Vector vecDir, int nDirectionAttribute, int nScalarTargetAttribute)
{
	fltx4 fl4Weight; // 1061
	FourVectors v4Dir; // 1062
	FourVectors* pDirIn; // 1065
	size_t nRowToRowStride; // 1066
	fltx4* pTarget; // 1067
	size_t nRowToRowStrideTarget; // 1068
	int nRowCtr; // 1069
	{
		int nColCtr; // 1072
		{
			FourVectors v4InDir; // 1075
			fltx4 fl4ExpDot; // 1077
			fltx4 fl4Addend; // 1078
			FourVectors::FourVectors(
					const FourVectors& src);  // 1075
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 166
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1684
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1684
			MaddSIMD<>(const fltx4& a,
					const fltx4& b,
					const fltx4& c);  // 167
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1684
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1684
			MaddSIMD<>(const fltx4& a,
					const fltx4& b,
					const fltx4& c);  // 168
			FourVectors::operator*(
					const FourVectors& b);  // 1077
			SubFloat<>(const fltx4& a,
					int idx);  // 546
			SubFloat<>(const fltx4& a,
					int idx);  // 547
			SubFloat<>(const fltx4& a,
					int idx);  // 548
			SubFloat<>(const fltx4& a,
					int idx);  // 549
			NatExpSIMD(const fltx4& val); // 1077
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1078
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1079
		}
		CSOAContainer::NumQuadsPerRow(); // 1072
	}
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 1061
	CSOAContainer::RowPtr<FourVectors>(
				int nAttributeIdx,
				int nRowNumber,
				int nSliceNumber);  // 1065
	CSOAContainer::RowPtr<__vector(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 1067
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 100
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 98
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 99
	FourVectors::DuplicateVector(
			const Vector& v);  // 1063
	FourVectors::FourVectors(); // 1062
	CSOAContainer::NumRows(); // 1069
	CSOAContainer::NumSlices(); // 1069
} /* size: 0, variables: 7, inline expansions: 10 (0 bytes) */

// <044F0C7F> tier0_perproject/utlsoacontainer.cpp:1087
// variables: 26
// function calls: 55
void CSOAContainer::AddGaussianSRBF(Vector vecWeight, Vector vecDir, int nDirectionAttribute, int nVectorTargetAttribute)
{
	FourVectors v4Weight; // 1092
	FourVectors v4Dir; // 1094
	FourVectors* pDirIn; // 1097
	size_t nRowToRowStride; // 1098
	FourVectors* pTarget; // 1099
	int nRowCtr; // 1100
	{
		int nColCtr; // 1103
		{
			fltx4 fl4ExpDot; // 1106
			FourVectors v4Addend; // 1107
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 166
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1684
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1684
			MaddSIMD<>(const fltx4& a,
					const fltx4& b,
					const fltx4& c);  // 167
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1684
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1684
			MaddSIMD<>(const fltx4& a,
					const fltx4& b,
					const fltx4& c);  // 168
			FourVectors::operator*(
					const FourVectors& b);  // 1106
			SubFloat<>(const fltx4& a,
					int idx);  // 546
			SubFloat<>(const fltx4& a,
					int idx);  // 547
			SubFloat<>(const fltx4& a,
					int idx);  // 548
			SubFloat<>(const fltx4& a,
					int idx);  // 549
			NatExpSIMD(const fltx4& val); // 1106
			FourVectors::FourVectors(
					const FourVectors& src);  // 1107
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 153
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 154
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 155
			FourVectors::operator*=(
					const fltx4& scale);  // 1108
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 129
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 129
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 129
			FourVectors::ApplyBinaryUpdateFunction<AddSIMD<> >(
								const FourVectors& v4Arg);  // 129
			FourVectors::operator+=(
					const FourVectors& b);  // 1109
		}
		CSOAContainer::NumQuadsPerRow(); // 1103
	}
	FourVectors::FourVectors(); // 1092
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 100
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 98
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 99
	FourVectors::DuplicateVector(
			const Vector& v);  // 1093
	CSOAContainer::RowPtr<FourVectors>(
				int nAttributeIdx,
				int nRowNumber,
				int nSliceNumber);  // 1099
	CSOAContainer::RowPtr<FourVectors>(
				int nAttributeIdx,
				int nRowNumber,
				int nSliceNumber);  // 1097
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 98
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 99
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 100
	FourVectors::DuplicateVector(
			const Vector& v);  // 1095
	FourVectors::FourVectors(); // 1094
	CSOAContainer::NumRows(); // 1100
	CSOAContainer::NumSlices(); // 1100
} /* size: 0, variables: 6, inline expansions: 14 (0 bytes) */

// <044C2B08> tier0_perproject/utlsoacontainer.cpp:1124
// variables: 12
void ResampleAttributeInternal<(EResampleHorzMode)2, __vector(4) float>(CSOAContainer& src, CSOAContainer& dst, int nSrcAttr, int nDestAttr)
{
	{
		int s; // 1127
		{
			int srcs; // 1129
			{
				int r; // 1130
				{
					int srcr; // 1132
					float* pSrc; // 1133
					float* pDest; // 1134
					int n; // 1135
					{
						float flDU; // 1159
						float flU; // 1160
						float* pDestValue; // 1161
						const float* pSrcValue; // 1162
						{
							int i; // 1163
						}
					}
				}
			}
		}
	}
} /* size: 0 */

// <044C243A> tier0_perproject/utlsoacontainer.cpp:1124
// variables: 18
// function calls: 21
void ResampleAttributeInternal<(EResampleHorzMode)0, __vector(4) float>(CSOAContainer& src, CSOAContainer& dst, int nSrcAttr, int nDestAttr)
{
	{
		int s; // 1127
		{
			int srcs; // 1129
			{
				int r; // 1130
				{
					int srcr; // 1132
					float* pSrc; // 1133
					float* pDest; // 1134
					int n; // 1135
					{
						float flDU; // 1159
						float flU; // 1160
						float* pDestValue; // 1161
						const float* pSrcValue; // 1162
						{
							int i; // 1163
						}
					}
					CSOAContainer::RowPtr<__vector(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 1133
					CSOAContainer::NumRows(); // 1132
					RemapVal(float val,
						float A,
						float B,
						float C,
						float D);  // 1132
					CSOAContainer::RowPtr<__vector(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 1134
					CSOAContainer::NumQuadsPerRow(); // 1135
					{
						fltx4 aacc; // 2890
						fltx4 bbdd; // 2892
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 2891
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 2893
						{
							fltx4 retVal; // 602
							_mm_load_ps(const float* __P); // 603
						}
						LoadAlignedSIMD<>(const void* pSIMD); // 2894
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						MaskedAssign<>(const fltx4& ReplacementMask,
								const fltx4& a,
								const fltx4& b);  // 2894
					}
					Compress4SIMD<>(const fltx4  a,
							const fltx4& b,
							const fltx4& c,
							const fltx4& d);  // 1140
				}
				CSOAContainer::NumRows(); // 1130
			}
			RemapVal(float val,
				float A,
				float B,
				float C,
				float D);  // 1129
			CSOAContainer::NumSlices(); // 1129
		}
		CSOAContainer::NumSlices(); // 1127
	}
} /* size: 0 */

// <044C202A> tier0_perproject/utlsoacontainer.cpp:1124
// variables: 13
// function calls: 11
void ResampleAttributeInternal<(EResampleHorzMode)1, __vector(4) float>(CSOAContainer& src, CSOAContainer& dst, int nSrcAttr, int nDestAttr)
{
	{
		int s; // 1127
		{
			int srcs; // 1129
			{
				int r; // 1130
				{
					int srcr; // 1132
					float* pSrc; // 1133
					float* pDest; // 1134
					int n; // 1135
					{
						float flDU; // 1159
						float flU; // 1160
						float* pDestValue; // 1161
						const float* pSrcValue; // 1162
						{
							int i; // 1163
						}
					}
					CSOAContainer::RowPtr<__vector(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 1133
					CSOAContainer::NumRows(); // 1132
					RemapVal(float val,
						float A,
						float B,
						float C,
						float D);  // 1132
					CSOAContainer::RowPtr<__vector(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 1134
					CSOAContainer::NumQuadsPerRow(); // 1135
					{
						fltx4 retVal; // 2769
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 2770
					}
					CompressSIMD<>(const fltx4& a,
							const fltx4& b);  // 1148
				}
				CSOAContainer::NumRows(); // 1130
			}
			RemapVal(float val,
				float A,
				float B,
				float C,
				float D);  // 1129
			CSOAContainer::NumSlices(); // 1129
		}
		CSOAContainer::NumSlices(); // 1127
	}
} /* size: 0 */

// <044C1C49> tier0_perproject/utlsoacontainer.cpp:1124
// variables: 12
// function calls: 11
void ResampleAttributeInternal<(EResampleHorzMode)3, __vector(4) float>(CSOAContainer& src, CSOAContainer& dst, int nSrcAttr, int nDestAttr)
{
	{
		int s; // 1127
		{
			int srcs; // 1129
			{
				int r; // 1130
				{
					int srcr; // 1132
					float* pSrc; // 1133
					float* pDest; // 1134
					int n; // 1135
					{
						float flDU; // 1159
						float flU; // 1160
						float* pDestValue; // 1161
						const float* pSrcValue; // 1162
						{
							int i; // 1163
							CSOAContainer::NumCols(); // 1163
						}
						CSOAContainer::NumCols(); // 1159
						CSOAContainer::NumCols(); // 1159
					}
					CSOAContainer::RowPtr<__vector(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 1133
					CSOAContainer::NumRows(); // 1132
					RemapVal(float val,
						float A,
						float B,
						float C,
						float D);  // 1132
					CSOAContainer::RowPtr<__vector(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 1134
				}
				CSOAContainer::NumRows(); // 1130
			}
			RemapVal(float val,
				float A,
				float B,
				float C,
				float D);  // 1129
			CSOAContainer::NumSlices(); // 1129
		}
		CSOAContainer::NumSlices(); // 1127
	}
} /* size: 0 */

// <044C1B52> tier0_perproject/utlsoacontainer.cpp:1124
// variables: 12
void ResampleAttributeInternal<(EResampleHorzMode)2, FourVectors>(CSOAContainer& src, CSOAContainer& dst, int nSrcAttr, int nDestAttr)
{
	{
		int s; // 1127
		{
			int srcs; // 1129
			{
				int r; // 1130
				{
					int srcr; // 1132
					FourVectors* pSrc; // 1133
					FourVectors* pDest; // 1134
					int n; // 1135
					{
						float flDU; // 1159
						float flU; // 1160
						float* pDestValue; // 1161
						const float* pSrcValue; // 1162
						{
							int i; // 1163
						}
					}
				}
			}
		}
	}
} /* size: 0 */

// <044C0E9C> tier0_perproject/utlsoacontainer.cpp:1124
// variables: 28
// function calls: 44
void ResampleAttributeInternal<(EResampleHorzMode)0, FourVectors>(CSOAContainer& src, CSOAContainer& dst, int nSrcAttr, int nDestAttr)
{
	{
		int s; // 1127
		{
			int srcs; // 1129
			{
				int r; // 1130
				{
					int srcr; // 1132
					FourVectors* pSrc; // 1133
					FourVectors* pDest; // 1134
					int n; // 1135
					{
						float flDU; // 1159
						float flU; // 1160
						float* pDestValue; // 1161
						const float* pSrcValue; // 1162
						{
							int i; // 1163
						}
					}
					CSOAContainer::RowPtr<FourVectors>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1133
					CSOAContainer::NumRows(); // 1132
					RemapVal(float val,
						float A,
						float B,
						float C,
						float D);  // 1132
					CSOAContainer::RowPtr<FourVectors>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1134
					CSOAContainer::NumQuadsPerRow(); // 1135
					FourVectors::FourVectors(); // 1677
					{
						fltx4 aacc; // 2890
						fltx4 bbdd; // 2892
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 2891
						{
							fltx4 retVal; // 602
							_mm_load_ps(const float* __P); // 603
						}
						LoadAlignedSIMD<>(const void* pSIMD); // 2894
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 2893
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						MaskedAssign<>(const fltx4& ReplacementMask,
								const fltx4& a,
								const fltx4& b);  // 2894
					}
					Compress4SIMD<>(const fltx4  a,
							const fltx4& b,
							const fltx4& c,
							const fltx4& d);  // 1678
					{
						fltx4 aacc; // 2890
						fltx4 bbdd; // 2892
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 2893
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 2891
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						MaskedAssign<>(const fltx4& ReplacementMask,
								const fltx4& a,
								const fltx4& b);  // 2894
					}
					Compress4SIMD<>(const fltx4  a,
							const fltx4& b,
							const fltx4& c,
							const fltx4& d);  // 1679
					{
						fltx4 aacc; // 2890
						fltx4 bbdd; // 2892
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 2891
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 2893
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						MaskedAssign<>(const fltx4& ReplacementMask,
								const fltx4& a,
								const fltx4& b);  // 2894
					}
					Compress4SIMD<>(const fltx4  a,
							const fltx4& b,
							const fltx4& c,
							const fltx4& d);  // 1680
					Compress4SIMD(const FourVectors& a,
							const FourVectors& b,
							const FourVectors& c,
							const FourVectors& d);  // 1140
					FourVectors::operator=(
							const FourVectors& src);  // 1140
				}
				CSOAContainer::NumRows(); // 1130
			}
			RemapVal(float val,
				float A,
				float B,
				float C,
				float D);  // 1129
			CSOAContainer::NumSlices(); // 1129
		}
		CSOAContainer::NumSlices(); // 1127
	}
} /* size: 0 */

// <044C08F0> tier0_perproject/utlsoacontainer.cpp:1124
// variables: 15
// function calls: 18
void ResampleAttributeInternal<(EResampleHorzMode)1, FourVectors>(CSOAContainer& src, CSOAContainer& dst, int nSrcAttr, int nDestAttr)
{
	{
		int s; // 1127
		{
			int srcs; // 1129
			{
				int r; // 1130
				{
					int srcr; // 1132
					FourVectors* pSrc; // 1133
					FourVectors* pDest; // 1134
					int n; // 1135
					{
						float flDU; // 1159
						float flU; // 1160
						float* pDestValue; // 1161
						const float* pSrcValue; // 1162
						{
							int i; // 1163
						}
					}
					CSOAContainer::RowPtr<FourVectors>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1133
					CSOAContainer::NumRows(); // 1132
					RemapVal(float val,
						float A,
						float B,
						float C,
						float D);  // 1132
					CSOAContainer::RowPtr<FourVectors>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1134
					CSOAContainer::NumQuadsPerRow(); // 1135
					FourVectors::FourVectors(); // 1667
					{
						fltx4 retVal; // 2769
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 2770
					}
					CompressSIMD<>(const fltx4& a,
							const fltx4& b);  // 1668
					{
						fltx4 retVal; // 2769
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 2770
					}
					CompressSIMD<>(const fltx4& a,
							const fltx4& b);  // 1669
					{
						fltx4 retVal; // 2769
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 2770
					}
					CompressSIMD<>(const fltx4& a,
							const fltx4& b);  // 1670
					CompressSIMD(const FourVectors& a,
							const FourVectors& b);  // 1148
					FourVectors::operator=(
							const FourVectors& src);  // 1148
				}
				CSOAContainer::NumRows(); // 1130
			}
			RemapVal(float val,
				float A,
				float B,
				float C,
				float D);  // 1129
			CSOAContainer::NumSlices(); // 1129
		}
		CSOAContainer::NumSlices(); // 1127
	}
} /* size: 0 */

// <044C050F> tier0_perproject/utlsoacontainer.cpp:1124
// variables: 12
// function calls: 11
void ResampleAttributeInternal<(EResampleHorzMode)3, FourVectors>(CSOAContainer& src, CSOAContainer& dst, int nSrcAttr, int nDestAttr)
{
	{
		int s; // 1127
		{
			int srcs; // 1129
			{
				int r; // 1130
				{
					int srcr; // 1132
					FourVectors* pSrc; // 1133
					FourVectors* pDest; // 1134
					int n; // 1135
					{
						float flDU; // 1159
						float flU; // 1160
						float* pDestValue; // 1161
						const float* pSrcValue; // 1162
						{
							int i; // 1163
							CSOAContainer::NumCols(); // 1163
						}
						CSOAContainer::NumCols(); // 1159
						CSOAContainer::NumCols(); // 1159
					}
					CSOAContainer::RowPtr<FourVectors>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1133
					CSOAContainer::NumRows(); // 1132
					RemapVal(float val,
						float A,
						float B,
						float C,
						float D);  // 1132
					CSOAContainer::RowPtr<FourVectors>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1134
				}
				CSOAContainer::NumRows(); // 1130
			}
			RemapVal(float val,
				float A,
				float B,
				float C,
				float D);  // 1129
			CSOAContainer::NumSlices(); // 1129
		}
		CSOAContainer::NumSlices(); // 1127
	}
} /* size: 0 */

// <044D5CFE> tier0_perproject/utlsoacontainer.cpp:1173
// variables: 10
// function calls: 14
void ResampleAttributeInternalDType<__vector(4) float>(CSOAContainer& src, CSOAContainer& dst, int nSrcAttr, int nDestAttr)
{
	int nSrcW; // 1175
	int nDstW; // 1176
	CSOAContainer::NumCols(); // 1175
	CSOAContainer::NumCols(); // 1176
	{
		int s; // 1127
		CSOAContainer::NumSlices(); // 1127
		{
			int srcs; // 1129
			CSOAContainer::NumSlices(); // 1129
			RemapVal(float val,
				float A,
				float B,
				float C,
				float D);  // 1129
			{
				int r; // 1130
				CSOAContainer::NumRows(); // 1130
				{
					int srcr; // 1132
					float* pSrc; // 1133
					float* pDest; // 1134
					int n; // 1135
					CSOAContainer::RowPtr<__vector(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 1133
					RemapVal(float val,
						float A,
						float B,
						float C,
						float D);  // 1132
					CSOAContainer::RowPtr<__vector(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 1134
					CSOAContainer::NumQuadsPerRow(); // 1135
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 91
					V_memcpy(void* dest,
						const void* src,
						size_t count);  // 1154
					CSOAContainer::NumRows(); // 1132
				}
			}
		}
	}
	ResampleAttributeInternal<(EResampleHorzMode)2, __vector(4) float>(CSOAContainer& src,
										CSOAContainer& dst,
										int nSrcAttr,
										int nDestAttr); // 1179
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <044D5862> tier0_perproject/utlsoacontainer.cpp:1173
// variables: 10
// function calls: 14
void ResampleAttributeInternalDType<FourVectors>(CSOAContainer& src, CSOAContainer& dst, int nSrcAttr, int nDestAttr)
{
	int nSrcW; // 1175
	int nDstW; // 1176
	CSOAContainer::NumCols(); // 1175
	CSOAContainer::NumCols(); // 1176
	{
		int s; // 1127
		CSOAContainer::NumSlices(); // 1127
		{
			int srcs; // 1129
			CSOAContainer::NumSlices(); // 1129
			RemapVal(float val,
				float A,
				float B,
				float C,
				float D);  // 1129
			{
				int r; // 1130
				CSOAContainer::NumRows(); // 1130
				{
					int srcr; // 1132
					FourVectors* pSrc; // 1133
					FourVectors* pDest; // 1134
					int n; // 1135
					CSOAContainer::RowPtr<FourVectors>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1133
					RemapVal(float val,
						float A,
						float B,
						float C,
						float D);  // 1132
					CSOAContainer::RowPtr<FourVectors>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1134
					CSOAContainer::NumQuadsPerRow(); // 1135
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 91
					V_memcpy(void* dest,
						const void* src,
						size_t count);  // 1154
					CSOAContainer::NumRows(); // 1132
				}
			}
		}
	}
	ResampleAttributeInternal<(EResampleHorzMode)2, FourVectors>(CSOAContainer& src,
									CSOAContainer& dst,
									int nSrcAttr,
									int nDestAttr); // 1179
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <044F0B48> tier0_perproject/utlsoacontainer.cpp:1201
// variables: 2
void CSOAContainer::ResampleAttribute(CSOAContainer& src, int nSrcAttr, int nDestAttr)
{
	const char   __FUNCTION__; // 6697
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1207
	}
} /* size: 0, variables: 1 */

// <01B4C25A> tier0_perproject/utlsoacontainer.cpp:1201
// variables: 2
void CSOAContainer::ResampleAttribute(CSOAContainer& src, int nSrcAttr, int nDestAttr)
{
	const char   __FUNCTION__; // 47086
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1207
	}
} /* size: 0, variables: 1 */

// <009D1ABD> tier0_perproject/utlsoacontainer.cpp:1201
// variables: 2
void CSOAContainer::ResampleAttribute(CSOAContainer& src, int nSrcAttr, int nDestAttr)
{
	const char   __FUNCTION__; // 39806
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1207
	}
} /* size: 0, variables: 1 */

// <044817D2> tier0_perproject/utlsoacontainer.cpp:1227
// member function: 1
// member variables: 9
// struct size: 56
struct KMeansQuantizationWorkUnit {
	CSOAContainer * m_pContainer; /* 0 8 */
	int m_nRowIndex; /* 8 4 */
	int m_nNumResultsDesired; /* 12 4 */
	IKMeansErrorMetric * m_pErrorCalculator; /* 16 8 */
	const int * m_pFieldIndices; /* 24 8 */
	int m_nNumFields; /* 32 4 */
	int m_nFieldToStoreIndexInto; /* 36 4 */
	KMeansQuantizedValue * m_pOutValues; /* 40 8 */
	int m_nErrorChannel; /* 48 4 */
	/* tier0_perproject/utlsoacontainer.cpp:1238 */
	void Process(KMeansQuantizationWorkUnit* );
};

// <044F0AFA> tier0_perproject/utlsoacontainer.cpp:1243
void DoKMeansWork(KMeansQuantizationWorkUnit& jobDesc)
{
} /* size: 0 */

// <044F0133> tier0_perproject/utlsoacontainer.cpp:1248
// variables: 31
// function calls: 32
void KMeansQuantizationWorkUnit::Process()
{
	FourVectors v4SamplePositions; // 1250
	const char   __FUNCTION__; // 6550
	{
		int nZ; // 1251
		{
			int nY; // 1254
			{
				KMeansSampleDescriptor samples; // 1257
				fltx4* pIndexOut; // 1262
				fltx4* pErrOut; // 1263
				int nXSize; // 1271
				{
					int c; // 1258
					CSOAContainer::RowPtr<__vector(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 1260
				}
				{
					fltx4 fl4SampleIdx; // 1274
					fltx4 fl4ClosestError; // 1275
					fltx4 fl4BestSampleIdx; // 1276
					{
						int n; // 1277
						{
							fltx4 fl4TrialError; // 1279
							fltx4 fl4BetterMask; // 1282
							{
								fltx4 retVal; // 1593
								_mm_add_ps(__m128 __A,
										__m128 __B);  // 1594
							}
							AddSIMD<>(const fltx4& a,
									const fltx4& b);  // 1285
							{
								fltx4 retVal; // 2095
								_mm_cmple_ps(__m128 __A,
										__m128 __B);  // 2096
							}
							CmpLeSIMD<>(const fltx4& a,
									const fltx4& b);  // 1282
							{
								fltx4 retVal; // 826
								_mm_xor_ps(__m128 __A,
										__m128 __B);  // 827
							}
							XorSIMD<>(const fltx4& a,
									const fltx4& b);  // 1259
							{
								fltx4 retVal; // 718
								_mm_and_ps(__m128 __A,
										__m128 __B);  // 719
							}
							AndSIMD<>(const fltx4& a,
									const fltx4& b);  // 1259
							{
								fltx4 retVal; // 826
								_mm_xor_ps(__m128 __A,
										__m128 __B);  // 827
							}
							XorSIMD<>(const fltx4& a,
									const fltx4& b);  // 1259
							MaskedAssign<>(const fltx4& ReplacementMask,
									const fltx4& a,
									const fltx4& b);  // 1283
							{
								fltx4 retVal; // 826
								_mm_xor_ps(__m128 __A,
										__m128 __B);  // 827
							}
							XorSIMD<>(const fltx4& a,
									const fltx4& b);  // 1259
							{
								fltx4 retVal; // 718
								_mm_and_ps(__m128 __A,
										__m128 __B);  // 719
							}
							AndSIMD<>(const fltx4& a,
									const fltx4& b);  // 1259
							{
								fltx4 retVal; // 826
								_mm_xor_ps(__m128 __A,
										__m128 __B);  // 827
							}
							XorSIMD<>(const fltx4& a,
									const fltx4& b);  // 1259
							MaskedAssign<>(const fltx4& ReplacementMask,
									const fltx4& a,
									const fltx4& b);  // 1284
						}
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1294
					}
					{
						int s; // 1296
						{
							int nIdx; // 1298
							{
								int c; // 1299
								SubFloat<>(fltx4& a,
										int idx);  // 1301
							}
						}
					}
					{
						int c; // 1306
					}
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1311
				}
				{
					fltx4 retVal; // 1134
					_mm_set1_ps(float __F); // 1135
				}
				ReplicateX4<>(float flValue); // 1256
				CSOAContainer::RowPtr<__vector(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1262
				CSOAContainer::RowPtr<__vector(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1266
				CSOAContainer::NumQuadsPerRow(); // 1271
			}
			CSOAContainer::NumRows(); // 1254
		}
		CSOAContainer::NumSlices(); // 1251
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 1253
	}
	FourVectors::FourVectors(); // 1250
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <01B4B845> tier0_perproject/utlsoacontainer.cpp:1248
// variables: 31
// function calls: 32
void KMeansQuantizationWorkUnit::Process()
{
	FourVectors v4SamplePositions; // 1250
	const char   __FUNCTION__; // 46939
	{
		int nZ; // 1251
		{
			int nY; // 1254
			{
				KMeansSampleDescriptor samples; // 1257
				fltx4* pIndexOut; // 1262
				fltx4* pErrOut; // 1263
				int nXSize; // 1271
				{
					int c; // 1258
					CSOAContainer::RowPtr<__vector(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 1260
				}
				{
					fltx4 fl4SampleIdx; // 1274
					fltx4 fl4ClosestError; // 1275
					fltx4 fl4BestSampleIdx; // 1276
					{
						int n; // 1277
						{
							fltx4 fl4TrialError; // 1279
							fltx4 fl4BetterMask; // 1282
							{
								fltx4 retVal; // 1593
								_mm_add_ps(__m128 __A,
										__m128 __B);  // 1594
							}
							AddSIMD<>(const fltx4& a,
									const fltx4& b);  // 1285
							{
								fltx4 retVal; // 2095
								_mm_cmple_ps(__m128 __A,
										__m128 __B);  // 2096
							}
							CmpLeSIMD<>(const fltx4& a,
									const fltx4& b);  // 1282
							{
								fltx4 retVal; // 826
								_mm_xor_ps(__m128 __A,
										__m128 __B);  // 827
							}
							XorSIMD<>(const fltx4& a,
									const fltx4& b);  // 1259
							{
								fltx4 retVal; // 718
								_mm_and_ps(__m128 __A,
										__m128 __B);  // 719
							}
							AndSIMD<>(const fltx4& a,
									const fltx4& b);  // 1259
							{
								fltx4 retVal; // 826
								_mm_xor_ps(__m128 __A,
										__m128 __B);  // 827
							}
							XorSIMD<>(const fltx4& a,
									const fltx4& b);  // 1259
							MaskedAssign<>(const fltx4& ReplacementMask,
									const fltx4& a,
									const fltx4& b);  // 1283
							{
								fltx4 retVal; // 826
								_mm_xor_ps(__m128 __A,
										__m128 __B);  // 827
							}
							XorSIMD<>(const fltx4& a,
									const fltx4& b);  // 1259
							{
								fltx4 retVal; // 718
								_mm_and_ps(__m128 __A,
										__m128 __B);  // 719
							}
							AndSIMD<>(const fltx4& a,
									const fltx4& b);  // 1259
							{
								fltx4 retVal; // 826
								_mm_xor_ps(__m128 __A,
										__m128 __B);  // 827
							}
							XorSIMD<>(const fltx4& a,
									const fltx4& b);  // 1259
							MaskedAssign<>(const fltx4& ReplacementMask,
									const fltx4& a,
									const fltx4& b);  // 1284
						}
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1294
					}
					{
						int s; // 1296
						{
							int nIdx; // 1298
							{
								int c; // 1299
								SubFloat<>(fltx4& a,
										int idx);  // 1301
							}
						}
					}
					{
						int c; // 1306
					}
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1311
				}
				{
					fltx4 retVal; // 1134
					_mm_set1_ps(float __F); // 1135
				}
				ReplicateX4<>(float flValue); // 1256
				CSOAContainer::RowPtr<__vector(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1262
				CSOAContainer::RowPtr<__vector(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1266
				CSOAContainer::NumQuadsPerRow(); // 1271
			}
			CSOAContainer::NumRows(); // 1254
		}
		CSOAContainer::NumSlices(); // 1251
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 1253
	}
	FourVectors::FourVectors(); // 1250
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <009D10A8> tier0_perproject/utlsoacontainer.cpp:1248
// variables: 31
// function calls: 32
void KMeansQuantizationWorkUnit::Process()
{
	FourVectors v4SamplePositions; // 1250
	const char   __FUNCTION__; // 39659
	{
		int nZ; // 1251
		{
			int nY; // 1254
			{
				KMeansSampleDescriptor samples; // 1257
				fltx4* pIndexOut; // 1262
				fltx4* pErrOut; // 1263
				int nXSize; // 1271
				{
					int c; // 1258
					CSOAContainer::RowPtr<__vector(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 1260
				}
				{
					fltx4 fl4SampleIdx; // 1274
					fltx4 fl4ClosestError; // 1275
					fltx4 fl4BestSampleIdx; // 1276
					{
						int n; // 1277
						{
							fltx4 fl4TrialError; // 1279
							fltx4 fl4BetterMask; // 1282
							{
								fltx4 retVal; // 1593
								_mm_add_ps(__m128 __A,
										__m128 __B);  // 1594
							}
							AddSIMD<>(const fltx4& a,
									const fltx4& b);  // 1285
							{
								fltx4 retVal; // 2095
								_mm_cmple_ps(__m128 __A,
										__m128 __B);  // 2096
							}
							CmpLeSIMD<>(const fltx4& a,
									const fltx4& b);  // 1282
							{
								fltx4 retVal; // 826
								_mm_xor_ps(__m128 __A,
										__m128 __B);  // 827
							}
							XorSIMD<>(const fltx4& a,
									const fltx4& b);  // 1259
							{
								fltx4 retVal; // 718
								_mm_and_ps(__m128 __A,
										__m128 __B);  // 719
							}
							AndSIMD<>(const fltx4& a,
									const fltx4& b);  // 1259
							{
								fltx4 retVal; // 826
								_mm_xor_ps(__m128 __A,
										__m128 __B);  // 827
							}
							XorSIMD<>(const fltx4& a,
									const fltx4& b);  // 1259
							MaskedAssign<>(const fltx4& ReplacementMask,
									const fltx4& a,
									const fltx4& b);  // 1283
							{
								fltx4 retVal; // 826
								_mm_xor_ps(__m128 __A,
										__m128 __B);  // 827
							}
							XorSIMD<>(const fltx4& a,
									const fltx4& b);  // 1259
							{
								fltx4 retVal; // 718
								_mm_and_ps(__m128 __A,
										__m128 __B);  // 719
							}
							AndSIMD<>(const fltx4& a,
									const fltx4& b);  // 1259
							{
								fltx4 retVal; // 826
								_mm_xor_ps(__m128 __A,
										__m128 __B);  // 827
							}
							XorSIMD<>(const fltx4& a,
									const fltx4& b);  // 1259
							MaskedAssign<>(const fltx4& ReplacementMask,
									const fltx4& a,
									const fltx4& b);  // 1284
						}
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1294
					}
					{
						int s; // 1296
						{
							int nIdx; // 1298
							{
								int c; // 1299
								SubFloat<>(fltx4& a,
										int idx);  // 1301
							}
						}
					}
					{
						int c; // 1306
					}
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1311
				}
				{
					fltx4 retVal; // 1134
					_mm_set1_ps(float __F); // 1135
				}
				ReplicateX4<>(float flValue); // 1256
				CSOAContainer::RowPtr<__vector(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1262
				CSOAContainer::RowPtr<__vector(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1266
				CSOAContainer::NumQuadsPerRow(); // 1271
			}
			CSOAContainer::NumRows(); // 1254
		}
		CSOAContainer::NumSlices(); // 1251
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 1253
	}
	FourVectors::FourVectors(); // 1250
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <044EF442> tier0_perproject/utlsoacontainer.cpp:1319
// variables: 21
// function calls: 39
void CSOAContainer::KMeansQuantization(const int* pFieldIndices, int nNumFields, KMeansQuantizedValue* pOutValues, int nNumResultsDesired, IKMeansErrorMetric* pErrorCalculator, int nFieldToStoreIndexInto, int nNumIterations, int nChannelToReceiveErrorSignal)
{
	HaltonSequenceGenerator_t xSequence; // 1326
	HaltonSequenceGenerator_t ySequence; // 1327
	HaltonSequenceGenerator_t zSequence; // 1328
	{
		int i; // 1329
		{
			int nX; // 1331
			int nY; // 1332
			int nZ; // 1333
			{
				int c; // 1335
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 1337
				{
					fltx4 retVal; // 1134
					_mm_set1_ps(float __F); // 1135
				}
				ReplicateX4<>(float flValue); // 1337
			}
			CSOAContainer::NumCols(); // 1331
			HaltonSequenceGenerator_t::NextValue(); // 1331
			HaltonSequenceGenerator_t::NextValue(); // 1332
			CSOAContainer::NumRows(); // 1332
			HaltonSequenceGenerator_t::NextValue(); // 1333
			CSOAContainer::NumSlices(); // 1333
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 99
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 98
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 100
			FourVectors::DuplicateVector(
					const Vector& v);  // 1334
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1334
		}
	}
	{
		KMeansQuantizationWorkUnit jobs; // 1350
		{
			int i; // 1344
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 1346
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 1347
		}
		{
			int i; // 1351
		}
		{
			int n; // 1366
			{
				float flOOWeight; // 1378
				{
					int j; // 1369
					{
						int c; // 1372
					}
				}
				{
					int c; // 1379
					{
						fltx4 retVal; // 1134
						_mm_set1_ps(float __F); // 1135
					}
					ReplicateX4<>(float flValue); // 1381
				}
			}
		}
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 800
		CInterlockedPtr<KMeansQuantizationWorkUnit>::operator=(
				KMeansQuantizationWorkUnit* newValue);  // 819
		CParallelProcessorAbstract_Base::CParallelProcessorAbstract_Base(
						IThreadPool* pThreadPool);  // 564
		IMultipleWorkerJob::IMultipleWorkerJob(); // 564
		CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationW this,
						CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1>* pController,
						IThreadPool* pThreadPool);  // 825
		IMultipleWorkerJob::~IMultipleWorkerJob(); // 559
		~CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationW this); // 827
		CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1>::Run(
			KMeansQuantizationWorkUnit* pItems,
			unsigned int nItems,
			int nChunkSize,
			int nMaxParallel,
			IThreadPool* pThreadPool);  // 814
		CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1>::Run(
			KMeansQuantizationWorkUnit* pItems,
			unsigned int nItems,
			int nChunkSize,
			int nMaxParallel,
			IThreadPool* pThreadPool);  // 957
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 811
		CInterlockedPtr<KMeansQuantizationWorkUnit>::CInterlockedPtr(); // 811
		CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1>::CParallelProcessor(
					const char* pszDescription);  // 955
		CFuncJobItemProcessor<KMeansQuantizationWorkUnit>::Init(
			void (*pfnProcess)(KMeansQuantizationWorkUnit &),
			void (*pfnBegin)(void),
			void (*pfnEnd)(void));  // 956
		ParallelProcess<KMeansQuantizationWorkUnit>(const char* pszDescription,
								KMeansQuantizationWorkUnit* pItems,
								unsigned int nItems,
								void (*pfnProcess)(KMeansQuantizationWorkUnit &),
								void (*pfnBegin)(void),
								void (*pfnEnd)(void),
								int nMaxParallel);  // 1363
	}
} /* size: 0, variables: 3 */

// <044EE739> tier0_perproject/utlsoacontainer.cpp:1392
// variables: 41
// function calls: 44
void CSOAContainer::UpdateDistanceRow(int nSearchRadius, int nMinX, int nMaxX, int nY, int nZ, int nSrcField, int nDestField)
{
	const float* pDataIn; // 1395
	float* pDataOut; // 1396
	int nStartY; // 1398
	int nEndY; // 1399
	int nStartZ; // 1401
	int nEndZ; // 1402
	fltx4 fl4Thresh; // 1404
	{
		int x; // 1405
		{
			float flReferenceValue; // 1407
			fltx4 fl4ReferenceValue; // 1409
			fltx4 fl4ClosestDistance; // 1410
			int nStartX; // 1412
			int nEndX; // 1413
			int nCount; // 1417
			float flClosestDistance; // 1439
			{
				int z1; // 1418
				{
					int y1; // 1420
					{
						fltx4 fl4YZDist; // 1422
						fltx4 fl4SrcXDiff; // 1423
						fltx4* pfl4SrcData; // 1424
						{
							int x1; // 1425
							{
								fltx4 fl4SrcData; // 1428
								fltx4 fl4Distance; // 1430
								{
									fltx4 retVal; // 1593
									_mm_add_ps(__m128 __A,
											__m128 __B);  // 1594
								}
								AddSIMD<>(const fltx4& a,
										const fltx4& b);  // 1434
								{
									fltx4 retVal; // 1639
									_mm_mul_ps(__m128 __A,
											__m128 __B);  // 1640
								}
								MulSIMD<>(const fltx4& a,
										const fltx4& b);  // 1430
								{
									fltx4 retVal; // 1981
									_mm_cmpgt_ps(__m128 __A,
											__m128 __B);  // 1982
								}
								CmpGtSIMD<>(const fltx4& a,
										const fltx4& b);  // 1429
								{
									fltx4 retVal; // 826
									_mm_xor_ps(__m128 __A,
											__m128 __B);  // 827
								}
								XorSIMD<>(const fltx4& a,
										const fltx4& b);  // 1259
								{
									fltx4 retVal; // 718
									_mm_and_ps(__m128 __A,
											__m128 __B);  // 719
								}
								AndSIMD<>(const fltx4& a,
										const fltx4& b);  // 1259
								{
									fltx4 retVal; // 826
									_mm_xor_ps(__m128 __A,
											__m128 __B);  // 827
								}
								XorSIMD<>(const fltx4& a,
										const fltx4& b);  // 1259
								MaskedAssign<>(const fltx4& ReplacementMask,
										const fltx4& a,
										const fltx4& b);  // 1429
								{
									fltx4 retVal; // 1593
									_mm_add_ps(__m128 __A,
											__m128 __B);  // 1594
								}
								AddSIMD<>(const fltx4& a,
										const fltx4& b);  // 1430
								{
									fltx4 retVal; // 2350
									_mm_sqrt_ps(__m128 __A); // 2351
								}
								SqrtSIMD<>(const fltx4& a); // 1430
								{
									fltx4 retVal; // 1851
									_mm_cmpeq_ps(__m128 __A,
											__m128 __B);  // 1852
								}
								CmpEqSIMD<>(const fltx4& a,
										const fltx4& b);  // 1432
								{
									fltx4 retVal; // 2067
									_mm_cmplt_ps(__m128 __A,
											__m128 __B);  // 2068
								}
								CmpLtSIMD<>(const fltx4& a,
										const fltx4& b);  // 1432
								{
									fltx4 retVal; // 826
									_mm_xor_ps(__m128 __A,
											__m128 __B);  // 827
								}
								XorSIMD<>(const fltx4& a,
										const fltx4& b);  // 1259
								{
									fltx4 retVal; // 718
									_mm_and_ps(__m128 __A,
											__m128 __B);  // 719
								}
								AndSIMD<>(const fltx4& a,
										const fltx4& b);  // 1259
								{
									fltx4 retVal; // 826
									_mm_xor_ps(__m128 __A,
											__m128 __B);  // 827
								}
								XorSIMD<>(const fltx4& a,
										const fltx4& b);  // 1259
								MaskedAssign<>(const fltx4& ReplacementMask,
										const fltx4& a,
										const fltx4& b);  // 1431
								{
									fltx4 retVal; // 767
									_mm_andnot_ps(__m128 __A,
											__m128 __B);  // 768
								}
								AndNotSIMD<>(const fltx4& a,
										const fltx4& b);  // 1432
							}
						}
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1423
						{
							fltx4 retVal; // 1134
							_mm_set1_ps(float __F); // 1135
						}
						ReplicateX4<>(float flValue); // 1422
						{
							fltx4 retVal; // 1134
							_mm_set1_ps(float __F); // 1135
						}
						ReplicateX4<>(float flValue); // 1423
						CSOAContainer::RowPtr<__vector(
										int nAttributeIdx,
										int nRowNumber,
										int nSliceNumber);  // 1424
					}
				}
			}
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 1410
			CSOAContainer::NumCols(); // 1413
		}
	}
	CSOAContainer::RowPtr<float>(
			int nAttributeIdx,
			int nRowNumber,
			int nSliceNumber);  // 1395
	CSOAContainer::RowPtr<float>(
			int nAttributeIdx,
			int nRowNumber,
			int nSliceNumber);  // 1396
	CSOAContainer::NumRows(); // 1399
	CSOAContainer::NumSlices(); // 1402
} /* size: 874, variables: 7, inline expansions: 4 (59 bytes) */

// <044EDC5B> tier0_perproject/utlsoacontainer.cpp:1452
// variables: 13
// function calls: 38
void CSOAContainer::GenerateDistanceField(int nSrcField, int nDestField, int nMaxDistance, Rect3D_t* pRect)
{
	int nMinX; // 1456
	int nMaxX; // 1456
	int nMinY; // 1456
	int nMaxY; // 1456
	int nMinZ; // 1456
	int nMaxZ; // 1456
	CCallQueue workList; // 1498
	{
		int z; // 1499
		{
			int y; // 1501
			{
				CCallQueue::ResumeProcessing(); // 115
				_Function_base::_Function_base(); // 407
				function<void()>::operator bool()>* this); // 409
				function<void()>::function(
					function<void()>& __x); // 102
				CCallQueue::QueueCall(
						function<void()>& fnCall);  // 96
				function<void()>::operator()(const function<void()>* this); // 110
				CCallQueue::QueueCall(
						function<void()>& fnCall);  // 1503
				_Function_base::~_Function_base(); // 336
				function<void()>::~function()>* this); // 1503
				{
					_M_create<CSOAContainer::GenerateDistanceField(int, int, int, Rect3D_t*)::<lambda()> >(union _Any_data& __dest,
																class& __f,
																false_type); // 217
					_M_init_functor<CSOAContainer::GenerateDistanceField(int, int, int, Rect3D_t*)::<lambda()> >(union _Any_data& __functor,
																class& __f); // 451
					_M_not_empty_function<CSOAContainer::GenerateDistanceField(int, int, int, Rect3D_t*)::<lambda()> >(const &); // 449
				}
				_Function_base::_Function_base(); // 439
				function<void()>::function<CSOAContainer::GenerateDistanceField(
															class& __f); // 1503
			}
		}
	}
	CSOAContainer::NumRows(); // 1471
	CSOAContainer::NumSlices(); // 1472
	CSOAContainer::NumCols(); // 1470
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 862
	CTSListBase::CTSListBase(); // 846
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
	Node_t::Node_t(); // 864
	CTSQueue<std::function<void()>::End()>*, false>* this); // 865
	CTSQueue<std::function<void()>::CTSQueue()>*, false>* this); // 13
	CCallQueue::CCallQueue(); // 1498
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 1080
	CTSQueue<std::function<void()>::FreeNode(
		Node_t* pNode); // 1103
	CTSQueue<std::function<void()>::PopItem(
		function<void()>** pResult); // 75
	_Function_base::~_Function_base(); // 336
	function<void()>::~function()>* this); // 77
	CCallQueue::ResumeProcessing(); // 80
	CCallQueue::Flush(); // 17
	CCallQueue::~CCallQueue(); // 1509
} /* size: 0, variables: 7, inline expansions: 22 (0 bytes) */

// <044ED7C5> tier0_perproject/utlsoacontainer.cpp:1511
// variables: 9
// function calls: 10
void CSOAContainer::CopyRegionFrom(const CSOAContainer& src, int nSrcAttr, int nDestAttr, int nSrcMinX, int nSrcMaxX, int nSrcMinY, int nSrcMaxY, int nSrcMinZ, int nSrcMaxZ, int nDestX, int nDestY, int nDestZ)
{
	const char   __FUNCTION__; // 6634
	size_t nRowSize; // 1518
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1515
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1516
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1517
	}
	{
		int z; // 1519
		{
			int y; // 1521
			{
				const uint8* pSrc; // 1523
				uint8* pDest; // 1524
				CSOAContainer::RowPtr<unsigned char>(
							int nAttributeIdx,
							int nRowNumber,
							int nSliceNumber);  // 1524
				CSOAContainer::RowPtr<unsigned char>(
							int nAttributeIdx,
							int nRowNumber,
							int nSliceNumber);  // 1523
				CSOAContainer::ItemByteStride(
						int nAttributeIdx);  // 1523
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 1525
			}
		}
	}
	CSOAContainer::HasAllocatedMemory(
				int nAttrIdx);  // 1515
	CSOAContainer::HasAllocatedMemory(
				int nAttrIdx);  // 1516
	CSOAContainer::ItemByteStride(
			int nAttributeIdx);  // 1517
	CSOAContainer::ItemByteStride(
			int nAttributeIdx);  // 1517
	CSOAContainer::ItemByteStride(
			int nAttributeIdx);  // 1518
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

// <01B48ED7> tier0_perproject/utlsoacontainer.cpp:1511
// variables: 9
// function calls: 10
void CSOAContainer::CopyRegionFrom(const CSOAContainer& src, int nSrcAttr, int nDestAttr, int nSrcMinX, int nSrcMaxX, int nSrcMinY, int nSrcMaxY, int nSrcMinZ, int nSrcMaxZ, int nDestX, int nDestY, int nDestZ)
{
	const char   __FUNCTION__; // 47023
	size_t nRowSize; // 1518
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1515
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1516
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1517
	}
	{
		int z; // 1519
		{
			int y; // 1521
			{
				const uint8* pSrc; // 1523
				uint8* pDest; // 1524
				CSOAContainer::RowPtr<unsigned char>(
							int nAttributeIdx,
							int nRowNumber,
							int nSliceNumber);  // 1524
				CSOAContainer::RowPtr<unsigned char>(
							int nAttributeIdx,
							int nRowNumber,
							int nSliceNumber);  // 1523
				CSOAContainer::ItemByteStride(
						int nAttributeIdx);  // 1523
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 1525
			}
		}
	}
	CSOAContainer::HasAllocatedMemory(
				int nAttrIdx);  // 1515
	CSOAContainer::HasAllocatedMemory(
				int nAttrIdx);  // 1516
	CSOAContainer::ItemByteStride(
			int nAttributeIdx);  // 1517
	CSOAContainer::ItemByteStride(
			int nAttributeIdx);  // 1517
	CSOAContainer::ItemByteStride(
			int nAttributeIdx);  // 1518
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

// <009CE73A> tier0_perproject/utlsoacontainer.cpp:1511
// variables: 9
// function calls: 10
void CSOAContainer::CopyRegionFrom(const CSOAContainer& src, int nSrcAttr, int nDestAttr, int nSrcMinX, int nSrcMaxX, int nSrcMinY, int nSrcMaxY, int nSrcMinZ, int nSrcMaxZ, int nDestX, int nDestY, int nDestZ)
{
	const char   __FUNCTION__; // 39743
	size_t nRowSize; // 1518
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1515
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1516
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1517
	}
	{
		int z; // 1519
		{
			int y; // 1521
			{
				const uint8* pSrc; // 1523
				uint8* pDest; // 1524
				CSOAContainer::RowPtr<unsigned char>(
							int nAttributeIdx,
							int nRowNumber,
							int nSliceNumber);  // 1524
				CSOAContainer::RowPtr<unsigned char>(
							int nAttributeIdx,
							int nRowNumber,
							int nSliceNumber);  // 1523
				CSOAContainer::ItemByteStride(
						int nAttributeIdx);  // 1523
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 1525
			}
		}
	}
	CSOAContainer::HasAllocatedMemory(
				int nAttrIdx);  // 1515
	CSOAContainer::HasAllocatedMemory(
				int nAttrIdx);  // 1516
	CSOAContainer::ItemByteStride(
			int nAttributeIdx);  // 1517
	CSOAContainer::ItemByteStride(
			int nAttributeIdx);  // 1517
	CSOAContainer::ItemByteStride(
			int nAttributeIdx);  // 1518
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

// <044ED4FD> tier0_perproject/utlsoacontainer.cpp:1530
// variables: 3
// function calls: 6
void CSOAContainer::CopyRegionFrom(const CSOAContainer& src, int nSrcMinX, int nSrcMaxX, int nSrcMinY, int nSrcMaxY, int nSrcMinZ, int nSrcMaxZ, int nDestX, int nDestY, int nDestZ)
{
	{
		CSOAAttributeIterator i; // 1534
		CSOAAttributeIterator::CSOAAttributeIterator(); // 99
		{
			int i; // 102
			CSOAContainer::HasAllocatedMemory(
						int nAttrIdx);  // 104
		}
		CSOAContainer::FirstAttr(); // 1534
		{
			int i; // 1647
			CSOAContainer::HasAllocatedMemory(
						int nAttrIdx);  // 1649
		}
		CSOAAttributeIterator::Next(); // 231
		CSOAAttributeIterator::operator++(
				int);  // 1534
	}
} /* size: 0 */

// <044ECD2A> tier0_perproject/utlsoacontainer.cpp:1543
// variables: 8
// function calls: 25
void CSOAContainer::Crop(int x1, int y1, int z1, int nWidth, int nHeight, int nDepth)
{
	int x2; // 1551
	int y2; // 1552
	int z2; // 1553
	const char   __FUNCTION__; // 6508
	CSOAContainer oldPixels; // 1562
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1557
	}
	CSOAContainer::NumCols(); // 1546
	CSOAContainer::NumSlices(); // 1555
	CSOAContainer::NumRows(); // 1546
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 900
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 901
	CSOAContainer::Init(); // 1482
	CSOAContainer::CSOAContainer(); // 1562
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 900
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 901
	CSOAContainer::Init(); // 82
	CSOAContainer::Purge(); // 1614
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 900
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 901
	CSOAContainer::Init(); // 1617
	CSOAContainer::MoveDataFrom(
			CSOAContainer& other);  // 1563
	{
		int i; // 167
		{
			bool bAllocate; // 171
		}
	}
	CSOAContainer::SetAttributeDataTypesFrom(
					const CSOAContainer& other);  // 1566
	CSOAContainer::Purge(); // 75
	CSOAContainer::~CSOAContainer(); // 1570
	CSOAContainer::NumSlices(); // 1546
} /* size: 0, variables: 5, inline expansions: 25 (0 bytes) */

// <01B4843C> tier0_perproject/utlsoacontainer.cpp:1543
// variables: 8
// function calls: 25
void CSOAContainer::Crop(int x1, int y1, int z1, int nWidth, int nHeight, int nDepth)
{
	int x2; // 1551
	int y2; // 1552
	int z2; // 1553
	const char   __FUNCTION__; // 46897
	CSOAContainer oldPixels; // 1562
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1557
	}
	CSOAContainer::NumCols(); // 1546
	CSOAContainer::NumSlices(); // 1555
	CSOAContainer::NumRows(); // 1546
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 900
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 901
	CSOAContainer::Init(); // 1482
	CSOAContainer::CSOAContainer(); // 1562
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 900
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 901
	CSOAContainer::Init(); // 82
	CSOAContainer::Purge(); // 1614
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 900
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 901
	CSOAContainer::Init(); // 1617
	CSOAContainer::MoveDataFrom(
			CSOAContainer& other);  // 1563
	{
		int i; // 167
		{
			bool bAllocate; // 171
		}
	}
	CSOAContainer::SetAttributeDataTypesFrom(
					const CSOAContainer& other);  // 1566
	CSOAContainer::Purge(); // 75
	CSOAContainer::~CSOAContainer(); // 1570
	CSOAContainer::NumSlices(); // 1546
} /* size: 0, variables: 5, inline expansions: 25 (0 bytes) */

// <009CDC9F> tier0_perproject/utlsoacontainer.cpp:1543
// variables: 8
// function calls: 25
void CSOAContainer::Crop(int x1, int y1, int z1, int nWidth, int nHeight, int nDepth)
{
	int x2; // 1551
	int y2; // 1552
	int z2; // 1553
	const char   __FUNCTION__; // 39617
	CSOAContainer oldPixels; // 1562
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1557
	}
	CSOAContainer::NumCols(); // 1546
	CSOAContainer::NumSlices(); // 1555
	CSOAContainer::NumRows(); // 1546
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 900
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 901
	CSOAContainer::Init(); // 1482
	CSOAContainer::CSOAContainer(); // 1562
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 900
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 901
	CSOAContainer::Init(); // 82
	CSOAContainer::Purge(); // 1614
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 900
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 901
	CSOAContainer::Init(); // 1617
	CSOAContainer::MoveDataFrom(
			CSOAContainer& other);  // 1563
	{
		int i; // 167
		{
			bool bAllocate; // 171
		}
	}
	CSOAContainer::SetAttributeDataTypesFrom(
					const CSOAContainer& other);  // 1566
	CSOAContainer::Purge(); // 75
	CSOAContainer::~CSOAContainer(); // 1570
	CSOAContainer::NumSlices(); // 1546
} /* size: 0, variables: 5, inline expansions: 25 (0 bytes) */

// <044BFF6E> tier0_perproject/utlsoacontainer.cpp:1573
inline int WrapOrClamp<true>(int nC, int nLimit)
{
} /* size: 0 */

// <044BFECD> tier0_perproject/utlsoacontainer.cpp:1573
inline int WrapOrClamp<false>(int nC, int nLimit)
{
} /* size: 0 */

// <044ECCEC> tier0_perproject/utlsoacontainer.cpp:1585
inline int WrapOrClamp(int nC, int nLimit, bool bClamp)
{
} /* size: 0 */

// <044D502C> tier0_perproject/utlsoacontainer.cpp:1597
// variables: 17
// function calls: 22
void CSOAContainer::FilterFromPartial<true>(int nStartRow, int nNumRows, int nStartSlice, int nEndSlice, const CSOAContainer* pSrc, int nSrcAttr, int nDestAttr, int nFilterDimX, int nFilterDimY, int nFilterDimZ, const float* pFilterCoefficients)
{
	int nSrcXScale; // 1600
	int nSrcYScale; // 1601
	int nSrcZScale; // 1602
	{
		int z; // 1603
		{
			int y; // 1605
			{
				float* pOut; // 1607
				{
					int x; // 1608
					{
						float flSum; // 1610
						int nBaseX; // 1611
						int nBaseY; // 1612
						int nBaseZ; // 1613
						{
							int iz; // 1614
							{
								int nSrcZ; // 1616
								{
									int iy; // 1617
									{
										int nSrcY; // 1619
										{
											int ix; // 1621
											{
												int nSrcX; // 1623
												Wrap(int x,
													int nLimit);  // 1098
												Wrap(int x,
													int nLimit);  // 1577
												WrapOrClamp<true>(int nC,
															int nLimit);  // 1623
												CSOAContainer::RowPtr<float>(
														int nAttributeIdx,
														int nRowNumber,
														int nSliceNumber);  // 442
												CSOAContainer::FloatValue(
														int nAttrIdx,
														int nX,
														int nY,
														int nZ);  // 1624
												CSOAContainer::NumCols(); // 1623
											}
										}
										CSOAContainer::NumRows(); // 1619
										Wrap(int x,
											int nLimit);  // 1098
										Wrap(int x,
											int nLimit);  // 1577
										WrapOrClamp<true>(int nC,
													int nLimit);  // 1619
									}
								}
								CSOAContainer::NumSlices(); // 1616
								Wrap(int x,
									int nLimit);  // 1098
								Wrap(int x,
									int nLimit);  // 1577
								WrapOrClamp<true>(int nC,
											int nLimit);  // 1616
							}
						}
					}
					CSOAContainer::NumCols(); // 1608
				}
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 1607
			}
		}
	}
	CSOAContainer::NumCols(); // 1600
	CSOAContainer::NumCols(); // 1600
	CSOAContainer::NumRows(); // 1601
	CSOAContainer::NumRows(); // 1601
	CSOAContainer::NumSlices(); // 1602
	CSOAContainer::NumSlices(); // 1602
} /* size: 0, variables: 3, inline expansions: 6 (0 bytes) */

// <044D47BC> tier0_perproject/utlsoacontainer.cpp:1597
// variables: 17
// function calls: 19
void CSOAContainer::FilterFromPartial<false>(int nStartRow, int nNumRows, int nStartSlice, int nEndSlice, const CSOAContainer* pSrc, int nSrcAttr, int nDestAttr, int nFilterDimX, int nFilterDimY, int nFilterDimZ, const float* pFilterCoefficients)
{
	int nSrcXScale; // 1600
	int nSrcYScale; // 1601
	int nSrcZScale; // 1602
	{
		int z; // 1603
		{
			int y; // 1605
			{
				float* pOut; // 1607
				{
					int x; // 1608
					{
						float flSum; // 1610
						int nBaseX; // 1611
						int nBaseY; // 1612
						int nBaseZ; // 1613
						{
							int iz; // 1614
							{
								int nSrcZ; // 1616
								{
									int iy; // 1617
									{
										int nSrcY; // 1619
										{
											int ix; // 1621
											{
												int nSrcX; // 1623
												Clamp<int>(const int& val,
														const int& minVal,
														const int& maxVal);  // 1581
												WrapOrClamp<false>(int nC,
															int nLimit);  // 1623
												CSOAContainer::RowPtr<float>(
														int nAttributeIdx,
														int nRowNumber,
														int nSliceNumber);  // 442
												CSOAContainer::FloatValue(
														int nAttrIdx,
														int nX,
														int nY,
														int nZ);  // 1624
												CSOAContainer::NumCols(); // 1623
											}
										}
										Clamp<int>(const int& val,
												const int& minVal,
												const int& maxVal);  // 1581
										WrapOrClamp<false>(int nC,
													int nLimit);  // 1619
										CSOAContainer::NumRows(); // 1619
									}
								}
								Clamp<int>(const int& val,
										const int& minVal,
										const int& maxVal);  // 1581
								WrapOrClamp<false>(int nC,
											int nLimit);  // 1616
								CSOAContainer::NumSlices(); // 1616
							}
						}
					}
					CSOAContainer::NumCols(); // 1608
				}
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 1607
			}
		}
	}
	CSOAContainer::NumCols(); // 1600
	CSOAContainer::NumCols(); // 1600
	CSOAContainer::NumRows(); // 1601
	CSOAContainer::NumRows(); // 1601
	CSOAContainer::NumSlices(); // 1602
	CSOAContainer::NumSlices(); // 1602
} /* size: 0, variables: 3, inline expansions: 6 (0 bytes) */

// <044EB895> tier0_perproject/utlsoacontainer.cpp:1634
// variables: 14
// function calls: 79
void CSOAContainer::FilterFrom(const CSOAContainer& src, int nSrcAttr, int nDestAttr, int nFilterDimX, int nFilterDimY, int nFilterDimZ, const float* pFilterCoefficients, bool bWrap)
{
	{
		CCallQueue workList; // 1638
		int nY; // 1638
		{
			int nStep; // 1638
			CCallQueue::ResumeProcessing(); // 115
			_Function_base::_Function_base(); // 407
			function<void()>::operator bool()>* this); // 409
			function<void()>::function(
				function<void()>& __x); // 102
			CCallQueue::QueueCall(
					function<void()>& fnCall);  // 96
			function<void()>::operator()(const function<void()>* this); // 110
			CCallQueue::QueueCall(
					function<void()>& fnCall);  // 338
			_Function_base::~_Function_base(); // 336
			function<void()>::~function()>* this); // 338
			{
				_M_create<QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int, int, int, int, float const*>(CCallQueue&, CSOAContainer*, int, void (CSOAContainer::*)(int, int, int, int, const CSOAContainer*, int, int, int, int, int, float const*), int, int, const CSOAContainer*, int, int, int, int, int, float const*)::<lambda()> >(union _Any_data& __dest,
																class& __f,
																false_type); // 217
				_M_init_functor<QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int, int, int, int, float const*>(CCallQueue&, CSOAContainer*, int, void (CSOAContainer::*)(int, int, int, int, const CSOAContainer*, int, int, int, int, int, float const*), int, int, const CSOAContainer*, int, int, int, int, int, float const*)::<lambda()> >(union _Any_data& __functor,
																class& __f); // 451
				_M_not_empty_function<QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int, int, int, int, float const*>(CCallQueue&, CSOAContainer*, int, void (CSOAContainer::*)(int, int, int, int, const CSOAContainer*, int, int, int, int, int, float const*), int, int, const CSOAContainer*, int, int, int, int, int, float const*)::<lambda()> >(const &); // 449
			}
			_Function_base::_Function_base(); // 439
			function<void()>::function<QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int, int, int, int, float const*>(
																class& __f); // 338
			QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int, int, int, int, float const*>(CCallQueue& queue,
															CSOAContainer* instance,
															int nSlices,
															void ()(CSOAContainer *, int, int, int, int, const CSOAContainer *, int, int, int, int, int, const float *) CSOAC method,
															int nY,
															int nStep);  // 1638
			CSOAContainer::NumSlices(); // 1638
		}
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		CTSListBase::CTSListBase(); // 846
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		Node_t::Node_t(); // 864
		CTSQueue<std::function<void()>::End()>*, false>* this); // 865
		CTSQueue<std::function<void()>::CTSQueue()>*, false>* this); // 13
		CCallQueue::CCallQueue(); // 1638
		CSOAContainer::NumRows(); // 1638
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<std::function<void()>::FreeNode(
			Node_t* pNode); // 1103
		CTSQueue<std::function<void()>::PopItem(
			function<void()>** pResult); // 75
		_Function_base::~_Function_base(); // 336
		function<void()>::~function()>* this); // 77
		CCallQueue::Flush(); // 17
		CCallQueue::~CCallQueue(); // 1638
	}
	{
		CCallQueue workList; // 1642
		int nY; // 1642
		{
			int nStep; // 1642
			CCallQueue::ResumeProcessing(); // 115
			_Function_base::_Function_base(); // 407
			function<void()>::operator bool()>* this); // 409
			function<void()>::function(
				function<void()>& __x); // 102
			CCallQueue::QueueCall(
					function<void()>& fnCall);  // 96
			function<void()>::operator()(const function<void()>* this); // 110
			CCallQueue::QueueCall(
					function<void()>& fnCall);  // 338
			_Function_base::~_Function_base(); // 336
			function<void()>::~function()>* this); // 338
			{
				_M_create<QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int, int, int, int, float const*>(CCallQueue&, CSOAContainer*, int, void (CSOAContainer::*)(int, int, int, int, const CSOAContainer*, int, int, int, int, int, float const*), int, int, const CSOAContainer*, int, int, int, int, int, float const*)::<lambda()> >(union _Any_data& __dest,
																class& __f,
																false_type); // 217
				_M_init_functor<QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int, int, int, int, float const*>(CCallQueue&, CSOAContainer*, int, void (CSOAContainer::*)(int, int, int, int, const CSOAContainer*, int, int, int, int, int, float const*), int, int, const CSOAContainer*, int, int, int, int, int, float const*)::<lambda()> >(union _Any_data& __functor,
																class& __f); // 451
				_M_not_empty_function<QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int, int, int, int, float const*>(CCallQueue&, CSOAContainer*, int, void (CSOAContainer::*)(int, int, int, int, const CSOAContainer*, int, int, int, int, int, float const*), int, int, const CSOAContainer*, int, int, int, int, int, float const*)::<lambda()> >(const &); // 449
			}
			_Function_base::_Function_base(); // 439
			function<void()>::function<QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int, int, int, int, float const*>(
																class& __f); // 338
			QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int, int, int, int, float const*>(CCallQueue& queue,
															CSOAContainer* instance,
															int nSlices,
															void ()(CSOAContainer *, int, int, int, int, const CSOAContainer *, int, int, int, int, int, const float *) CSOAC method,
															int nY,
															int nStep);  // 1642
			CSOAContainer::NumSlices(); // 1642
		}
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		CTSListBase::CTSListBase(); // 846
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		Node_t::Node_t(); // 864
		CTSQueue<std::function<void()>::End()>*, false>* this); // 865
		CTSQueue<std::function<void()>::CTSQueue()>*, false>* this); // 13
		CCallQueue::CCallQueue(); // 1642
		CSOAContainer::NumRows(); // 1642
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<std::function<void()>::FreeNode(
			Node_t* pNode); // 1103
		CTSQueue<std::function<void()>::PopItem(
			function<void()>** pResult); // 75
		_Function_base::~_Function_base(); // 336
		function<void()>::~function()>* this); // 77
		CCallQueue::ResumeProcessing(); // 80
		CCallQueue::Flush(); // 17
		CCallQueue::~CCallQueue(); // 1642
	}
	CSOAContainer::NumSlices(); // 1638
	CSOAContainer::NumRows(); // 1638
	CSOAContainer::NumSlices(); // 1642
	CSOAContainer::NumRows(); // 1642
} /* size: 0, inline expansions: 4 (0 bytes) */

// <044D1BE6> tier0_perproject/utlsoacontainer.cpp:1646
// variables: 92
// function calls: 180
void CSOAContainer::Normalized3x3SobelEdgeFilterPartial<true>(int nStartRow, int nNumRows, int nStartSlice, int nEndSlice, const CSOAContainer* pSrc, int nSrcAttr, int nGradientXOutAttr, int nGradientYOutAttr)
{
	const char   __FUNCTION__; // 6907
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1648
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1649
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1650
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1651
	}
	{
		int z; // 1652
		{
			int y; // 1654
			{
				fltx4* pOutX; // 1656
				fltx4* pOutY; // 1657
				fltx4* pIn; // 1658
				int nYUp; // 1659
				int nYDown; // 1660
				int nRowStride; // 1661
				int nXLimit; // 1665
				{
					int x; // 1666
					{
						fltx4 fl4RightNeighborUp; // 1670
						fltx4 fl4RightNeighborDown; // 1671
						fltx4 fl4RightNeighbor; // 1672
						fltx4 fl4LeftNeighborDown; // 1674
						fltx4 fl4LeftNeighborUp; // 1674
						fltx4 fl4LeftNeighbor; // 1674
						fltx4 fl4SobelX; // 1691
						fltx4 fl4SobelY; // 1698
						fltx4 fl4LenSQ; // 1703
						fltx4 fl4BadLenMask; // 1704
						fltx4 fl4OOLen; // 1705
						fltx4 fl4ResultX; // 1707
						fltx4 fl4ResultY; // 1708
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1692
						{
							fltx4 retVal; // 2095
							_mm_cmple_ps(__m128 __A,
									__m128 __B);  // 2096
						}
						CmpLeSIMD<>(const fltx4& a,
								const fltx4& b);  // 1704
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 2408
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 2409
						{
							fltx4 retVal; // 2369
							_mm_rsqrt_ps(__m128 __A); // 2370
						}
						ReciprocalSqrtEstSIMD<>(const fltx4& a); // 2406
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 2408
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 2408
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 2408
						ReciprocalSqrtSIMD<>(const fltx4& a); // 1705
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1707
						SplatWSIMD<>(const fltx4& a); // 122
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1685
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						SplatWSIMD<>(const fltx4& a); // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1686
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						SplatWSIMD<>(const fltx4& a); // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1687
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1691
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1692
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1695
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1695
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1696
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1696
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1700
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1698
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1700
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1699
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1699
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1700
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1703
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1703
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1703
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						MaskedAssign<>(const fltx4& ReplacementMask,
								const fltx4& a,
								const fltx4& b);  // 1707
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1707
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1707
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1708
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						MaskedAssign<>(const fltx4& ReplacementMask,
								const fltx4& a,
								const fltx4& b);  // 1708
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1708
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1708
						SplatXSIMD<>(const fltx4& a); // 116
						{
							fltx4 retVal; // 341
						}
						RotateLeft<>(const fltx4& a); // 116
						{
							fltx4 zzww; // 1414
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 1414
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 1415
						}
						SetWSIMD<(ESIMDLevel)20>(const fltx4& a,
									const fltx4& w); // 116
						ShiftLeftAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1670
						{
							fltx4 retVal; // 341
						}
						RotateLeft<>(const fltx4& a); // 116
						{
							fltx4 zzww; // 1414
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 1415
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 1414
						}
						SetWSIMD<(ESIMDLevel)20>(const fltx4& a,
									const fltx4& w); // 116
						SplatXSIMD<>(const fltx4& a); // 116
						ShiftLeftAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1671
						{
							fltx4 retVal; // 341
						}
						RotateLeft<>(const fltx4& a); // 116
						SplatXSIMD<>(const fltx4& a); // 116
						{
							fltx4 zzww; // 1414
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 1414
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 1415
						}
						SetWSIMD<(ESIMDLevel)20>(const fltx4& a,
									const fltx4& w); // 116
						ShiftLeftAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1672
						SplatWSIMD<>(const fltx4& a); // 1679
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1679
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1680
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1681
						SplatWSIMD<>(const fltx4& a); // 1680
						SplatWSIMD<>(const fltx4& a); // 1681
					}
				}
				{
					int x; // 1715
					{
						int w; // 1717
						int h; // 1718
						float flSobelX; // 1719
						float flSobelY; // 1719
						float flLength; // 1734
						float flX; // 1736
						float flY; // 1737
						CSOAContainer::RowPtr<float>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 442
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1720
						CSOAContainer::RowPtr<float>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 442
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1738
						CSOAContainer::RowPtr<float>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 442
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1739
						CSOAContainer::NumRows(); // 1718
						Wrap(int x,
							int nLimit);  // 1098
						Wrap(int x,
							int nLimit);  // 1577
						WrapOrClamp<true>(int nC,
									int nLimit);  // 1720
						Wrap(int x,
							int nLimit);  // 1098
						Wrap(int x,
							int nLimit);  // 1577
						WrapOrClamp<true>(int nC,
									int nLimit);  // 1720
						Wrap(int x,
							int nLimit);  // 1098
						Wrap(int x,
							int nLimit);  // 1577
						WrapOrClamp<true>(int nC,
									int nLimit);  // 1721
						CSOAContainer::RowPtr<float>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 442
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1721
						Wrap(int x,
							int nLimit);  // 1098
						Wrap(int x,
							int nLimit);  // 1577
						WrapOrClamp<true>(int nC,
									int nLimit);  // 1722
						CSOAContainer::RowPtr<float>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 442
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1722
						Wrap(int x,
							int nLimit);  // 1098
						Wrap(int x,
							int nLimit);  // 1577
						WrapOrClamp<true>(int nC,
									int nLimit);  // 1723
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1723
						Wrap(int x,
							int nLimit);  // 1098
						Wrap(int x,
							int nLimit);  // 1577
						WrapOrClamp<true>(int nC,
									int nLimit);  // 1728
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1724
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1725
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1728
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1731
					}
					CSOAContainer::NumCols(); // 1715
				}
				CSOAContainer::RowPtr<__vector(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1656
				CSOAContainer::RowPtr<__vector(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1657
				CSOAContainer::RowPtr<__vector(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1658
				CSOAContainer::NumRows(); // 1659
				Wrap(int x,
					int nLimit);  // 1098
				Wrap(int x,
					int nLimit);  // 1577
				WrapOrClamp<true>(int nC,
							int nLimit);  // 1659
				Wrap(int x,
					int nLimit);  // 1098
				Wrap(int x,
					int nLimit);  // 1577
				WrapOrClamp<true>(int nC,
							int nLimit);  // 1660
				CSOAContainer::NumQuadsPerRow(); // 1661
			}
		}
	}
	CSOAContainer::NumCols(); // 1648
	CSOAContainer::NumCols(); // 1648
	CSOAContainer::NumRows(); // 1649
	CSOAContainer::NumRows(); // 1649
	CSOAContainer::NumSlices(); // 1650
	CSOAContainer::NumSlices(); // 1650
	CSOAContainer::NumSlices(); // 1651
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <044CF0BD> tier0_perproject/utlsoacontainer.cpp:1646
// variables: 92
// function calls: 169
void CSOAContainer::Normalized3x3SobelEdgeFilterPartial<false>(int nStartRow, int nNumRows, int nStartSlice, int nEndSlice, const CSOAContainer* pSrc, int nSrcAttr, int nGradientXOutAttr, int nGradientYOutAttr)
{
	const char   __FUNCTION__; // 6907
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1648
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1649
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1650
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1651
	}
	{
		int z; // 1652
		{
			int y; // 1654
			{
				fltx4* pOutX; // 1656
				fltx4* pOutY; // 1657
				fltx4* pIn; // 1658
				int nYUp; // 1659
				int nYDown; // 1660
				int nRowStride; // 1661
				int nXLimit; // 1665
				{
					int x; // 1666
					{
						fltx4 fl4RightNeighborUp; // 1670
						fltx4 fl4RightNeighborDown; // 1671
						fltx4 fl4RightNeighbor; // 1672
						fltx4 fl4LeftNeighborDown; // 1674
						fltx4 fl4LeftNeighborUp; // 1674
						fltx4 fl4LeftNeighbor; // 1674
						fltx4 fl4SobelX; // 1691
						fltx4 fl4SobelY; // 1698
						fltx4 fl4LenSQ; // 1703
						fltx4 fl4BadLenMask; // 1704
						fltx4 fl4OOLen; // 1705
						fltx4 fl4ResultX; // 1707
						fltx4 fl4ResultY; // 1708
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1692
						{
							fltx4 retVal; // 2095
							_mm_cmple_ps(__m128 __A,
									__m128 __B);  // 2096
						}
						CmpLeSIMD<>(const fltx4& a,
								const fltx4& b);  // 1704
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 2408
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 2409
						{
							fltx4 retVal; // 2369
							_mm_rsqrt_ps(__m128 __A); // 2370
						}
						ReciprocalSqrtEstSIMD<>(const fltx4& a); // 2406
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 2408
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 2408
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 2408
						ReciprocalSqrtSIMD<>(const fltx4& a); // 1705
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1707
						SplatWSIMD<>(const fltx4& a); // 122
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1685
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						SplatWSIMD<>(const fltx4& a); // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1686
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						SplatWSIMD<>(const fltx4& a); // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1687
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1691
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1692
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1695
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1695
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1696
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1696
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1700
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1698
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1700
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1699
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1699
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1700
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1703
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1703
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1703
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						MaskedAssign<>(const fltx4& ReplacementMask,
								const fltx4& a,
								const fltx4& b);  // 1707
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1707
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1707
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1708
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1708
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1708
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						MaskedAssign<>(const fltx4& ReplacementMask,
								const fltx4& a,
								const fltx4& b);  // 1708
						SplatXSIMD<>(const fltx4& a); // 116
						{
							fltx4 retVal; // 341
						}
						RotateLeft<>(const fltx4& a); // 116
						{
							fltx4 zzww; // 1414
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 1414
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 1415
						}
						SetWSIMD<(ESIMDLevel)20>(const fltx4& a,
									const fltx4& w); // 116
						ShiftLeftAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1670
						{
							fltx4 retVal; // 341
						}
						RotateLeft<>(const fltx4& a); // 116
						{
							fltx4 zzww; // 1414
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 1415
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 1414
						}
						SetWSIMD<(ESIMDLevel)20>(const fltx4& a,
									const fltx4& w); // 116
						SplatXSIMD<>(const fltx4& a); // 116
						ShiftLeftAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1671
						{
							fltx4 retVal; // 341
						}
						RotateLeft<>(const fltx4& a); // 116
						SplatXSIMD<>(const fltx4& a); // 116
						{
							fltx4 zzww; // 1414
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 1414
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 1415
						}
						SetWSIMD<(ESIMDLevel)20>(const fltx4& a,
									const fltx4& w); // 116
						ShiftLeftAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1672
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1679
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1680
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1681
					}
				}
				{
					int x; // 1715
					{
						int w; // 1717
						int h; // 1718
						float flSobelX; // 1719
						float flSobelY; // 1719
						float flLength; // 1734
						float flX; // 1736
						float flY; // 1737
						CSOAContainer::RowPtr<float>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 442
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1720
						CSOAContainer::RowPtr<float>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 442
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1738
						CSOAContainer::RowPtr<float>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 442
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1739
						CSOAContainer::NumRows(); // 1718
						Clamp<int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 1581
						WrapOrClamp<false>(int nC,
									int nLimit);  // 1720
						Clamp<int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 1581
						WrapOrClamp<false>(int nC,
									int nLimit);  // 1720
						Clamp<int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 1581
						WrapOrClamp<false>(int nC,
									int nLimit);  // 1721
						CSOAContainer::RowPtr<float>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 442
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1721
						Clamp<int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 1581
						WrapOrClamp<false>(int nC,
									int nLimit);  // 1722
						CSOAContainer::RowPtr<float>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 442
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1722
						Clamp<int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 1581
						WrapOrClamp<false>(int nC,
									int nLimit);  // 1723
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1723
						Clamp<int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 1581
						WrapOrClamp<false>(int nC,
									int nLimit);  // 1728
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1724
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1725
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1728
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1731
					}
					CSOAContainer::NumCols(); // 1715
				}
				CSOAContainer::RowPtr<__vector(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1656
				CSOAContainer::RowPtr<__vector(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1657
				CSOAContainer::RowPtr<__vector(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1658
				CSOAContainer::NumRows(); // 1659
				Clamp<int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1581
				WrapOrClamp<false>(int nC,
							int nLimit);  // 1659
				Clamp<int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1581
				WrapOrClamp<false>(int nC,
							int nLimit);  // 1660
				CSOAContainer::NumQuadsPerRow(); // 1661
			}
		}
	}
	CSOAContainer::NumCols(); // 1648
	CSOAContainer::NumCols(); // 1648
	CSOAContainer::NumRows(); // 1649
	CSOAContainer::NumRows(); // 1649
	CSOAContainer::NumSlices(); // 1650
	CSOAContainer::NumSlices(); // 1650
	CSOAContainer::NumSlices(); // 1651
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <01B2D2F8> tier0_perproject/utlsoacontainer.cpp:1646
// variables: 92
// function calls: 180
void CSOAContainer::Normalized3x3SobelEdgeFilterPartial<true>(int nStartRow, int nNumRows, int nStartSlice, int nEndSlice, const CSOAContainer* pSrc, int nSrcAttr, int nGradientXOutAttr, int nGradientYOutAttr)
{
	const char   __FUNCTION__; // 47296
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1648
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1649
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1650
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1651
	}
	{
		int z; // 1652
		{
			int y; // 1654
			{
				fltx4* pOutX; // 1656
				fltx4* pOutY; // 1657
				fltx4* pIn; // 1658
				int nYUp; // 1659
				int nYDown; // 1660
				int nRowStride; // 1661
				int nXLimit; // 1665
				{
					int x; // 1666
					{
						fltx4 fl4RightNeighborUp; // 1670
						fltx4 fl4RightNeighborDown; // 1671
						fltx4 fl4RightNeighbor; // 1672
						fltx4 fl4LeftNeighborDown; // 1674
						fltx4 fl4LeftNeighborUp; // 1674
						fltx4 fl4LeftNeighbor; // 1674
						fltx4 fl4SobelX; // 1691
						fltx4 fl4SobelY; // 1698
						fltx4 fl4LenSQ; // 1703
						fltx4 fl4BadLenMask; // 1704
						fltx4 fl4OOLen; // 1705
						fltx4 fl4ResultX; // 1707
						fltx4 fl4ResultY; // 1708
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1692
						{
							fltx4 retVal; // 2095
							_mm_cmple_ps(__m128 __A,
									__m128 __B);  // 2096
						}
						CmpLeSIMD<>(const fltx4& a,
								const fltx4& b);  // 1704
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 2408
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 2409
						{
							fltx4 retVal; // 2369
							_mm_rsqrt_ps(__m128 __A); // 2370
						}
						ReciprocalSqrtEstSIMD<>(const fltx4& a); // 2406
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 2408
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 2408
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 2408
						ReciprocalSqrtSIMD<>(const fltx4& a); // 1705
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1707
						SplatWSIMD<>(const fltx4& a); // 122
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1685
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						SplatWSIMD<>(const fltx4& a); // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1686
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						SplatWSIMD<>(const fltx4& a); // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1687
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1691
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1692
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1695
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1695
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1696
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1696
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1700
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1698
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1700
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1699
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1699
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1700
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1703
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1703
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1703
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						MaskedAssign<>(const fltx4& ReplacementMask,
								const fltx4& a,
								const fltx4& b);  // 1707
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1707
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1707
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1708
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						MaskedAssign<>(const fltx4& ReplacementMask,
								const fltx4& a,
								const fltx4& b);  // 1708
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1708
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1708
						SplatXSIMD<>(const fltx4& a); // 116
						{
							fltx4 retVal; // 341
						}
						RotateLeft<>(const fltx4& a); // 116
						{
							fltx4 zzww; // 1414
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 1414
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 1415
						}
						SetWSIMD<(ESIMDLevel)20>(const fltx4& a,
									const fltx4& w); // 116
						ShiftLeftAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1670
						{
							fltx4 retVal; // 341
						}
						RotateLeft<>(const fltx4& a); // 116
						{
							fltx4 zzww; // 1414
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 1415
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 1414
						}
						SetWSIMD<(ESIMDLevel)20>(const fltx4& a,
									const fltx4& w); // 116
						SplatXSIMD<>(const fltx4& a); // 116
						ShiftLeftAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1671
						{
							fltx4 retVal; // 341
						}
						RotateLeft<>(const fltx4& a); // 116
						SplatXSIMD<>(const fltx4& a); // 116
						{
							fltx4 zzww; // 1414
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 1414
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 1415
						}
						SetWSIMD<(ESIMDLevel)20>(const fltx4& a,
									const fltx4& w); // 116
						ShiftLeftAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1672
						SplatWSIMD<>(const fltx4& a); // 1679
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1679
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1680
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1681
						SplatWSIMD<>(const fltx4& a); // 1680
						SplatWSIMD<>(const fltx4& a); // 1681
					}
				}
				{
					int x; // 1715
					{
						int w; // 1717
						int h; // 1718
						float flSobelX; // 1719
						float flSobelY; // 1719
						float flLength; // 1734
						float flX; // 1736
						float flY; // 1737
						CSOAContainer::RowPtr<float>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 442
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1720
						CSOAContainer::RowPtr<float>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 442
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1738
						CSOAContainer::RowPtr<float>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 442
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1739
						CSOAContainer::NumRows(); // 1718
						Wrap(int x,
							int nLimit);  // 1098
						Wrap(int x,
							int nLimit);  // 1577
						WrapOrClamp<true>(int nC,
									int nLimit);  // 1720
						Wrap(int x,
							int nLimit);  // 1098
						Wrap(int x,
							int nLimit);  // 1577
						WrapOrClamp<true>(int nC,
									int nLimit);  // 1720
						Wrap(int x,
							int nLimit);  // 1098
						Wrap(int x,
							int nLimit);  // 1577
						WrapOrClamp<true>(int nC,
									int nLimit);  // 1721
						CSOAContainer::RowPtr<float>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 442
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1721
						Wrap(int x,
							int nLimit);  // 1098
						Wrap(int x,
							int nLimit);  // 1577
						WrapOrClamp<true>(int nC,
									int nLimit);  // 1722
						CSOAContainer::RowPtr<float>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 442
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1722
						Wrap(int x,
							int nLimit);  // 1098
						Wrap(int x,
							int nLimit);  // 1577
						WrapOrClamp<true>(int nC,
									int nLimit);  // 1723
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1723
						Wrap(int x,
							int nLimit);  // 1098
						Wrap(int x,
							int nLimit);  // 1577
						WrapOrClamp<true>(int nC,
									int nLimit);  // 1728
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1724
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1725
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1728
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1731
					}
					CSOAContainer::NumCols(); // 1715
				}
				CSOAContainer::RowPtr<__vector(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1656
				CSOAContainer::RowPtr<__vector(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1657
				CSOAContainer::RowPtr<__vector(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1658
				CSOAContainer::NumRows(); // 1659
				Wrap(int x,
					int nLimit);  // 1098
				Wrap(int x,
					int nLimit);  // 1577
				WrapOrClamp<true>(int nC,
							int nLimit);  // 1659
				Wrap(int x,
					int nLimit);  // 1098
				Wrap(int x,
					int nLimit);  // 1577
				WrapOrClamp<true>(int nC,
							int nLimit);  // 1660
				CSOAContainer::NumQuadsPerRow(); // 1661
			}
		}
	}
	CSOAContainer::NumCols(); // 1648
	CSOAContainer::NumCols(); // 1648
	CSOAContainer::NumRows(); // 1649
	CSOAContainer::NumRows(); // 1649
	CSOAContainer::NumSlices(); // 1650
	CSOAContainer::NumSlices(); // 1650
	CSOAContainer::NumSlices(); // 1651
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <01B2A7CF> tier0_perproject/utlsoacontainer.cpp:1646
// variables: 92
// function calls: 169
void CSOAContainer::Normalized3x3SobelEdgeFilterPartial<false>(int nStartRow, int nNumRows, int nStartSlice, int nEndSlice, const CSOAContainer* pSrc, int nSrcAttr, int nGradientXOutAttr, int nGradientYOutAttr)
{
	const char   __FUNCTION__; // 47296
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1648
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1649
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1650
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1651
	}
	{
		int z; // 1652
		{
			int y; // 1654
			{
				fltx4* pOutX; // 1656
				fltx4* pOutY; // 1657
				fltx4* pIn; // 1658
				int nYUp; // 1659
				int nYDown; // 1660
				int nRowStride; // 1661
				int nXLimit; // 1665
				{
					int x; // 1666
					{
						fltx4 fl4RightNeighborUp; // 1670
						fltx4 fl4RightNeighborDown; // 1671
						fltx4 fl4RightNeighbor; // 1672
						fltx4 fl4LeftNeighborDown; // 1674
						fltx4 fl4LeftNeighborUp; // 1674
						fltx4 fl4LeftNeighbor; // 1674
						fltx4 fl4SobelX; // 1691
						fltx4 fl4SobelY; // 1698
						fltx4 fl4LenSQ; // 1703
						fltx4 fl4BadLenMask; // 1704
						fltx4 fl4OOLen; // 1705
						fltx4 fl4ResultX; // 1707
						fltx4 fl4ResultY; // 1708
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1692
						{
							fltx4 retVal; // 2095
							_mm_cmple_ps(__m128 __A,
									__m128 __B);  // 2096
						}
						CmpLeSIMD<>(const fltx4& a,
								const fltx4& b);  // 1704
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 2408
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 2409
						{
							fltx4 retVal; // 2369
							_mm_rsqrt_ps(__m128 __A); // 2370
						}
						ReciprocalSqrtEstSIMD<>(const fltx4& a); // 2406
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 2408
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 2408
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 2408
						ReciprocalSqrtSIMD<>(const fltx4& a); // 1705
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1707
						SplatWSIMD<>(const fltx4& a); // 122
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1685
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						SplatWSIMD<>(const fltx4& a); // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1686
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						SplatWSIMD<>(const fltx4& a); // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1687
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1691
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1692
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1695
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1695
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1696
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1696
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1700
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1698
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1700
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1699
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1699
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1700
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1703
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1703
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1703
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						MaskedAssign<>(const fltx4& ReplacementMask,
								const fltx4& a,
								const fltx4& b);  // 1707
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1707
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1707
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1708
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1708
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1708
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						MaskedAssign<>(const fltx4& ReplacementMask,
								const fltx4& a,
								const fltx4& b);  // 1708
						SplatXSIMD<>(const fltx4& a); // 116
						{
							fltx4 retVal; // 341
						}
						RotateLeft<>(const fltx4& a); // 116
						{
							fltx4 zzww; // 1414
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 1414
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 1415
						}
						SetWSIMD<(ESIMDLevel)20>(const fltx4& a,
									const fltx4& w); // 116
						ShiftLeftAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1670
						{
							fltx4 retVal; // 341
						}
						RotateLeft<>(const fltx4& a); // 116
						{
							fltx4 zzww; // 1414
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 1415
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 1414
						}
						SetWSIMD<(ESIMDLevel)20>(const fltx4& a,
									const fltx4& w); // 116
						SplatXSIMD<>(const fltx4& a); // 116
						ShiftLeftAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1671
						{
							fltx4 retVal; // 341
						}
						RotateLeft<>(const fltx4& a); // 116
						SplatXSIMD<>(const fltx4& a); // 116
						{
							fltx4 zzww; // 1414
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 1414
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 1415
						}
						SetWSIMD<(ESIMDLevel)20>(const fltx4& a,
									const fltx4& w); // 116
						ShiftLeftAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1672
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1679
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1680
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1681
					}
				}
				{
					int x; // 1715
					{
						int w; // 1717
						int h; // 1718
						float flSobelX; // 1719
						float flSobelY; // 1719
						float flLength; // 1734
						float flX; // 1736
						float flY; // 1737
						CSOAContainer::RowPtr<float>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 442
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1720
						CSOAContainer::RowPtr<float>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 442
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1738
						CSOAContainer::RowPtr<float>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 442
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1739
						CSOAContainer::NumRows(); // 1718
						Clamp<int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 1581
						WrapOrClamp<false>(int nC,
									int nLimit);  // 1720
						Clamp<int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 1581
						WrapOrClamp<false>(int nC,
									int nLimit);  // 1720
						Clamp<int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 1581
						WrapOrClamp<false>(int nC,
									int nLimit);  // 1721
						CSOAContainer::RowPtr<float>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 442
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1721
						Clamp<int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 1581
						WrapOrClamp<false>(int nC,
									int nLimit);  // 1722
						CSOAContainer::RowPtr<float>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 442
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1722
						Clamp<int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 1581
						WrapOrClamp<false>(int nC,
									int nLimit);  // 1723
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1723
						Clamp<int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 1581
						WrapOrClamp<false>(int nC,
									int nLimit);  // 1728
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1724
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1725
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1728
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1731
					}
					CSOAContainer::NumCols(); // 1715
				}
				CSOAContainer::RowPtr<__vector(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1656
				CSOAContainer::RowPtr<__vector(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1657
				CSOAContainer::RowPtr<__vector(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1658
				CSOAContainer::NumRows(); // 1659
				Clamp<int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1581
				WrapOrClamp<false>(int nC,
							int nLimit);  // 1659
				Clamp<int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1581
				WrapOrClamp<false>(int nC,
							int nLimit);  // 1660
				CSOAContainer::NumQuadsPerRow(); // 1661
			}
		}
	}
	CSOAContainer::NumCols(); // 1648
	CSOAContainer::NumCols(); // 1648
	CSOAContainer::NumRows(); // 1649
	CSOAContainer::NumRows(); // 1649
	CSOAContainer::NumSlices(); // 1650
	CSOAContainer::NumSlices(); // 1650
	CSOAContainer::NumSlices(); // 1651
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <009B2B5B> tier0_perproject/utlsoacontainer.cpp:1646
// variables: 92
// function calls: 180
void CSOAContainer::Normalized3x3SobelEdgeFilterPartial<true>(int nStartRow, int nNumRows, int nStartSlice, int nEndSlice, const CSOAContainer* pSrc, int nSrcAttr, int nGradientXOutAttr, int nGradientYOutAttr)
{
	const char   __FUNCTION__; // 40016
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1648
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1649
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1650
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1651
	}
	{
		int z; // 1652
		{
			int y; // 1654
			{
				fltx4* pOutX; // 1656
				fltx4* pOutY; // 1657
				fltx4* pIn; // 1658
				int nYUp; // 1659
				int nYDown; // 1660
				int nRowStride; // 1661
				int nXLimit; // 1665
				{
					int x; // 1666
					{
						fltx4 fl4RightNeighborUp; // 1670
						fltx4 fl4RightNeighborDown; // 1671
						fltx4 fl4RightNeighbor; // 1672
						fltx4 fl4LeftNeighborDown; // 1674
						fltx4 fl4LeftNeighborUp; // 1674
						fltx4 fl4LeftNeighbor; // 1674
						fltx4 fl4SobelX; // 1691
						fltx4 fl4SobelY; // 1698
						fltx4 fl4LenSQ; // 1703
						fltx4 fl4BadLenMask; // 1704
						fltx4 fl4OOLen; // 1705
						fltx4 fl4ResultX; // 1707
						fltx4 fl4ResultY; // 1708
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1692
						{
							fltx4 retVal; // 2095
							_mm_cmple_ps(__m128 __A,
									__m128 __B);  // 2096
						}
						CmpLeSIMD<>(const fltx4& a,
								const fltx4& b);  // 1704
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 2408
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 2409
						{
							fltx4 retVal; // 2369
							_mm_rsqrt_ps(__m128 __A); // 2370
						}
						ReciprocalSqrtEstSIMD<>(const fltx4& a); // 2406
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 2408
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 2408
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 2408
						ReciprocalSqrtSIMD<>(const fltx4& a); // 1705
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1707
						SplatWSIMD<>(const fltx4& a); // 122
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1685
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						SplatWSIMD<>(const fltx4& a); // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1686
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						SplatWSIMD<>(const fltx4& a); // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1687
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1691
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1692
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1695
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1695
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1696
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1696
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1700
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1698
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1700
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1699
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1699
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1700
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1703
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1703
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1703
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						MaskedAssign<>(const fltx4& ReplacementMask,
								const fltx4& a,
								const fltx4& b);  // 1707
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1707
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1707
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1708
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						MaskedAssign<>(const fltx4& ReplacementMask,
								const fltx4& a,
								const fltx4& b);  // 1708
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1708
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1708
						SplatXSIMD<>(const fltx4& a); // 116
						{
							fltx4 retVal; // 341
						}
						RotateLeft<>(const fltx4& a); // 116
						{
							fltx4 zzww; // 1414
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 1414
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 1415
						}
						SetWSIMD<(ESIMDLevel)20>(const fltx4& a,
									const fltx4& w); // 116
						ShiftLeftAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1670
						{
							fltx4 retVal; // 341
						}
						RotateLeft<>(const fltx4& a); // 116
						{
							fltx4 zzww; // 1414
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 1415
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 1414
						}
						SetWSIMD<(ESIMDLevel)20>(const fltx4& a,
									const fltx4& w); // 116
						SplatXSIMD<>(const fltx4& a); // 116
						ShiftLeftAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1671
						{
							fltx4 retVal; // 341
						}
						RotateLeft<>(const fltx4& a); // 116
						SplatXSIMD<>(const fltx4& a); // 116
						{
							fltx4 zzww; // 1414
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 1414
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 1415
						}
						SetWSIMD<(ESIMDLevel)20>(const fltx4& a,
									const fltx4& w); // 116
						ShiftLeftAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1672
						SplatWSIMD<>(const fltx4& a); // 1679
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1679
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1680
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1681
						SplatWSIMD<>(const fltx4& a); // 1680
						SplatWSIMD<>(const fltx4& a); // 1681
					}
				}
				{
					int x; // 1715
					{
						int w; // 1717
						int h; // 1718
						float flSobelX; // 1719
						float flSobelY; // 1719
						float flLength; // 1734
						float flX; // 1736
						float flY; // 1737
						CSOAContainer::RowPtr<float>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 442
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1720
						CSOAContainer::RowPtr<float>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 442
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1738
						CSOAContainer::RowPtr<float>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 442
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1739
						CSOAContainer::NumRows(); // 1718
						Wrap(int x,
							int nLimit);  // 1098
						Wrap(int x,
							int nLimit);  // 1577
						WrapOrClamp<true>(int nC,
									int nLimit);  // 1720
						Wrap(int x,
							int nLimit);  // 1098
						Wrap(int x,
							int nLimit);  // 1577
						WrapOrClamp<true>(int nC,
									int nLimit);  // 1720
						Wrap(int x,
							int nLimit);  // 1098
						Wrap(int x,
							int nLimit);  // 1577
						WrapOrClamp<true>(int nC,
									int nLimit);  // 1721
						CSOAContainer::RowPtr<float>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 442
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1721
						Wrap(int x,
							int nLimit);  // 1098
						Wrap(int x,
							int nLimit);  // 1577
						WrapOrClamp<true>(int nC,
									int nLimit);  // 1722
						CSOAContainer::RowPtr<float>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 442
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1722
						Wrap(int x,
							int nLimit);  // 1098
						Wrap(int x,
							int nLimit);  // 1577
						WrapOrClamp<true>(int nC,
									int nLimit);  // 1723
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1723
						Wrap(int x,
							int nLimit);  // 1098
						Wrap(int x,
							int nLimit);  // 1577
						WrapOrClamp<true>(int nC,
									int nLimit);  // 1728
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1724
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1725
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1728
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1731
					}
					CSOAContainer::NumCols(); // 1715
				}
				CSOAContainer::RowPtr<__vector(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1656
				CSOAContainer::RowPtr<__vector(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1657
				CSOAContainer::RowPtr<__vector(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1658
				CSOAContainer::NumRows(); // 1659
				Wrap(int x,
					int nLimit);  // 1098
				Wrap(int x,
					int nLimit);  // 1577
				WrapOrClamp<true>(int nC,
							int nLimit);  // 1659
				Wrap(int x,
					int nLimit);  // 1098
				Wrap(int x,
					int nLimit);  // 1577
				WrapOrClamp<true>(int nC,
							int nLimit);  // 1660
				CSOAContainer::NumQuadsPerRow(); // 1661
			}
		}
	}
	CSOAContainer::NumCols(); // 1648
	CSOAContainer::NumCols(); // 1648
	CSOAContainer::NumRows(); // 1649
	CSOAContainer::NumRows(); // 1649
	CSOAContainer::NumSlices(); // 1650
	CSOAContainer::NumSlices(); // 1650
	CSOAContainer::NumSlices(); // 1651
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <009B0032> tier0_perproject/utlsoacontainer.cpp:1646
// variables: 92
// function calls: 169
void CSOAContainer::Normalized3x3SobelEdgeFilterPartial<false>(int nStartRow, int nNumRows, int nStartSlice, int nEndSlice, const CSOAContainer* pSrc, int nSrcAttr, int nGradientXOutAttr, int nGradientYOutAttr)
{
	const char   __FUNCTION__; // 40016
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1648
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1649
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1650
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1651
	}
	{
		int z; // 1652
		{
			int y; // 1654
			{
				fltx4* pOutX; // 1656
				fltx4* pOutY; // 1657
				fltx4* pIn; // 1658
				int nYUp; // 1659
				int nYDown; // 1660
				int nRowStride; // 1661
				int nXLimit; // 1665
				{
					int x; // 1666
					{
						fltx4 fl4RightNeighborUp; // 1670
						fltx4 fl4RightNeighborDown; // 1671
						fltx4 fl4RightNeighbor; // 1672
						fltx4 fl4LeftNeighborDown; // 1674
						fltx4 fl4LeftNeighborUp; // 1674
						fltx4 fl4LeftNeighbor; // 1674
						fltx4 fl4SobelX; // 1691
						fltx4 fl4SobelY; // 1698
						fltx4 fl4LenSQ; // 1703
						fltx4 fl4BadLenMask; // 1704
						fltx4 fl4OOLen; // 1705
						fltx4 fl4ResultX; // 1707
						fltx4 fl4ResultY; // 1708
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1692
						{
							fltx4 retVal; // 2095
							_mm_cmple_ps(__m128 __A,
									__m128 __B);  // 2096
						}
						CmpLeSIMD<>(const fltx4& a,
								const fltx4& b);  // 1704
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 2408
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 2409
						{
							fltx4 retVal; // 2369
							_mm_rsqrt_ps(__m128 __A); // 2370
						}
						ReciprocalSqrtEstSIMD<>(const fltx4& a); // 2406
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 2408
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 2408
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 2408
						ReciprocalSqrtSIMD<>(const fltx4& a); // 1705
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1707
						SplatWSIMD<>(const fltx4& a); // 122
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1685
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						SplatWSIMD<>(const fltx4& a); // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1686
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						SplatWSIMD<>(const fltx4& a); // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1687
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1691
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1692
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1695
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1695
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1696
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1696
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1700
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1698
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1700
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1699
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1699
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1700
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1703
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1703
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1703
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						MaskedAssign<>(const fltx4& ReplacementMask,
								const fltx4& a,
								const fltx4& b);  // 1707
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1707
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1707
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1708
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1708
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1708
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						MaskedAssign<>(const fltx4& ReplacementMask,
								const fltx4& a,
								const fltx4& b);  // 1708
						SplatXSIMD<>(const fltx4& a); // 116
						{
							fltx4 retVal; // 341
						}
						RotateLeft<>(const fltx4& a); // 116
						{
							fltx4 zzww; // 1414
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 1414
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 1415
						}
						SetWSIMD<(ESIMDLevel)20>(const fltx4& a,
									const fltx4& w); // 116
						ShiftLeftAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1670
						{
							fltx4 retVal; // 341
						}
						RotateLeft<>(const fltx4& a); // 116
						{
							fltx4 zzww; // 1414
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 1415
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 1414
						}
						SetWSIMD<(ESIMDLevel)20>(const fltx4& a,
									const fltx4& w); // 116
						SplatXSIMD<>(const fltx4& a); // 116
						ShiftLeftAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1671
						{
							fltx4 retVal; // 341
						}
						RotateLeft<>(const fltx4& a); // 116
						SplatXSIMD<>(const fltx4& a); // 116
						{
							fltx4 zzww; // 1414
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<250>(const fltx4& a,
									const fltx4& b);  // 1414
							{
								fltx4 retVal; // 1276
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1277
							}
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 665
							ShuffleSIMD<148>(const fltx4& a,
									const fltx4& b);  // 1415
						}
						SetWSIMD<(ESIMDLevel)20>(const fltx4& a,
									const fltx4& w); // 116
						ShiftLeftAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1672
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1679
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1680
						{
							fltx4 retVal; // 1371
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1372
						}
						SetXSIMD<>(const fltx4& a,
								const fltx4& x);  // 122
						ShiftRightAndMergeSIMD<>(FLTX4 fl4a,
									FLTX4 fl4b);  // 1681
					}
				}
				{
					int x; // 1715
					{
						int w; // 1717
						int h; // 1718
						float flSobelX; // 1719
						float flSobelY; // 1719
						float flLength; // 1734
						float flX; // 1736
						float flY; // 1737
						CSOAContainer::RowPtr<float>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 442
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1720
						CSOAContainer::RowPtr<float>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 442
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1738
						CSOAContainer::RowPtr<float>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 442
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1739
						CSOAContainer::NumRows(); // 1718
						Clamp<int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 1581
						WrapOrClamp<false>(int nC,
									int nLimit);  // 1720
						Clamp<int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 1581
						WrapOrClamp<false>(int nC,
									int nLimit);  // 1720
						Clamp<int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 1581
						WrapOrClamp<false>(int nC,
									int nLimit);  // 1721
						CSOAContainer::RowPtr<float>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 442
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1721
						Clamp<int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 1581
						WrapOrClamp<false>(int nC,
									int nLimit);  // 1722
						CSOAContainer::RowPtr<float>(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 442
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1722
						Clamp<int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 1581
						WrapOrClamp<false>(int nC,
									int nLimit);  // 1723
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1723
						Clamp<int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 1581
						WrapOrClamp<false>(int nC,
									int nLimit);  // 1728
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1724
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1725
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1728
						CSOAContainer::FloatValue(
								int nAttrIdx,
								int nX,
								int nY,
								int nZ);  // 1731
					}
					CSOAContainer::NumCols(); // 1715
				}
				CSOAContainer::RowPtr<__vector(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1656
				CSOAContainer::RowPtr<__vector(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1657
				CSOAContainer::RowPtr<__vector(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1658
				CSOAContainer::NumRows(); // 1659
				Clamp<int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1581
				WrapOrClamp<false>(int nC,
							int nLimit);  // 1659
				Clamp<int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1581
				WrapOrClamp<false>(int nC,
							int nLimit);  // 1660
				CSOAContainer::NumQuadsPerRow(); // 1661
			}
		}
	}
	CSOAContainer::NumCols(); // 1648
	CSOAContainer::NumCols(); // 1648
	CSOAContainer::NumRows(); // 1649
	CSOAContainer::NumRows(); // 1649
	CSOAContainer::NumSlices(); // 1650
	CSOAContainer::NumSlices(); // 1650
	CSOAContainer::NumSlices(); // 1651
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <044EA4D2> tier0_perproject/utlsoacontainer.cpp:1748
// variables: 14
// function calls: 79
void CSOAContainer::Normalized3x3SobelEdgeFilterFrom(const CSOAContainer& src, int nSrcAttr, int nGradientXOutAttr, int nGradientYOutAttr, bool bWrap)
{
	{
		CCallQueue workList; // 1752
		int nY; // 1752
		{
			int nStep; // 1752
			CCallQueue::ResumeProcessing(); // 115
			_Function_base::_Function_base(); // 407
			function<void()>::operator bool()>* this); // 409
			function<void()>::function(
				function<void()>& __x); // 102
			CCallQueue::QueueCall(
					function<void()>& fnCall);  // 96
			function<void()>::operator()(const function<void()>* this); // 110
			CCallQueue::QueueCall(
					function<void()>& fnCall);  // 338
			_Function_base::~_Function_base(); // 336
			function<void()>::~function()>* this); // 338
			{
				_M_create<QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int, int>(CCallQueue&, CSOAContainer*, int, void (CSOAContainer::*)(int, int, int, int, const CSOAContainer*, int, int, int), int, int, const CSOAContainer*, int, int, int)::<lambda()> >(union _Any_data& __dest,
																class& __f,
																false_type); // 217
				_M_init_functor<QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int, int>(CCallQueue&, CSOAContainer*, int, void (CSOAContainer::*)(int, int, int, int, const CSOAContainer*, int, int, int), int, int, const CSOAContainer*, int, int, int)::<lambda()> >(union _Any_data& __functor,
																class& __f); // 451
				_M_not_empty_function<QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int, int>(CCallQueue&, CSOAContainer*, int, void (CSOAContainer::*)(int, int, int, int, const CSOAContainer*, int, int, int), int, int, const CSOAContainer*, int, int, int)::<lambda()> >(const &); // 449
			}
			_Function_base::_Function_base(); // 439
			function<void()>::function<QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int, int>(
																class& __f); // 338
			QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int, int>(CCallQueue& queue,
												CSOAContainer* instance,
												int nSlices,
												void ()(CSOAContainer *, int, int, int, int, const CSOAContainer *, int, int, int) CSOAContainer::* method,
												int nY,
												int nStep);  // 1752
			CSOAContainer::NumSlices(); // 1752
		}
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		CTSListBase::CTSListBase(); // 846
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		Node_t::Node_t(); // 864
		CTSQueue<std::function<void()>::End()>*, false>* this); // 865
		CTSQueue<std::function<void()>::CTSQueue()>*, false>* this); // 13
		CCallQueue::CCallQueue(); // 1752
		CSOAContainer::NumRows(); // 1752
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<std::function<void()>::FreeNode(
			Node_t* pNode); // 1103
		CTSQueue<std::function<void()>::PopItem(
			function<void()>** pResult); // 75
		_Function_base::~_Function_base(); // 336
		function<void()>::~function()>* this); // 77
		CCallQueue::Flush(); // 17
		CCallQueue::~CCallQueue(); // 1752
	}
	{
		CCallQueue workList; // 1756
		int nY; // 1756
		{
			int nStep; // 1756
			CCallQueue::ResumeProcessing(); // 115
			_Function_base::_Function_base(); // 407
			function<void()>::operator bool()>* this); // 409
			function<void()>::function(
				function<void()>& __x); // 102
			CCallQueue::QueueCall(
					function<void()>& fnCall);  // 96
			function<void()>::operator()(const function<void()>* this); // 110
			CCallQueue::QueueCall(
					function<void()>& fnCall);  // 338
			_Function_base::~_Function_base(); // 336
			function<void()>::~function()>* this); // 338
			{
				_M_create<QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int, int>(CCallQueue&, CSOAContainer*, int, void (CSOAContainer::*)(int, int, int, int, const CSOAContainer*, int, int, int), int, int, const CSOAContainer*, int, int, int)::<lambda()> >(union _Any_data& __dest,
																class& __f,
																false_type); // 217
				_M_init_functor<QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int, int>(CCallQueue&, CSOAContainer*, int, void (CSOAContainer::*)(int, int, int, int, const CSOAContainer*, int, int, int), int, int, const CSOAContainer*, int, int, int)::<lambda()> >(union _Any_data& __functor,
																class& __f); // 451
				_M_not_empty_function<QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int, int>(CCallQueue&, CSOAContainer*, int, void (CSOAContainer::*)(int, int, int, int, const CSOAContainer*, int, int, int), int, int, const CSOAContainer*, int, int, int)::<lambda()> >(const &); // 449
			}
			_Function_base::_Function_base(); // 439
			function<void()>::function<QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int, int>(
																class& __f); // 338
			QueueCallWrapper<CSOAContainer, const CSOAContainer*, int, int, int>(CCallQueue& queue,
												CSOAContainer* instance,
												int nSlices,
												void ()(CSOAContainer *, int, int, int, int, const CSOAContainer *, int, int, int) CSOAContainer::* method,
												int nY,
												int nStep);  // 1756
			CSOAContainer::NumSlices(); // 1756
		}
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		CTSListBase::CTSListBase(); // 846
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		Node_t::Node_t(); // 864
		CTSQueue<std::function<void()>::End()>*, false>* this); // 865
		CTSQueue<std::function<void()>::CTSQueue()>*, false>* this); // 13
		CCallQueue::CCallQueue(); // 1756
		CSOAContainer::NumRows(); // 1756
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<std::function<void()>::FreeNode(
			Node_t* pNode); // 1103
		CTSQueue<std::function<void()>::PopItem(
			function<void()>** pResult); // 75
		_Function_base::~_Function_base(); // 336
		function<void()>::~function()>* this); // 77
		CCallQueue::ResumeProcessing(); // 80
		CCallQueue::Flush(); // 17
		CCallQueue::~CCallQueue(); // 1756
	}
	CSOAContainer::NumSlices(); // 1752
	CSOAContainer::NumRows(); // 1752
	CSOAContainer::NumSlices(); // 1756
	CSOAContainer::NumRows(); // 1756
} /* size: 0, inline expansions: 4 (0 bytes) */

// <044BEE8B> tier0_perproject/utlsoacontainer.cpp:1763
// variables: 26
// function calls: 59
void QuarterSizeAttrWithBoxFilterPartial<true, CSOAContainer::true>(int nStartRow, int nNumRows, int nStartSlice, int nEndSlice, const CSOAContainer* pSrc, int nSrcAttr, int nDestAttr)
{
	int nNumHorizontalIterations; // 1767
	fltx4 fl4FilterScaleFactor; // 1768
	{
		int z; // 1769
		{
			int y; // 1771
			{
				fltx4* pOut; // 1773
				const fltx4* pIn; // 1774
				const fltx4* pIn1; // 1775
				int nRowToRowStep; // 1780
				{
					int x; // 1789
					{
						fltx4 fl4Result; // 1794
						{
							int nWordIndex; // 1795
							{
								int nX; // 1804
								clamp<int, int>(const int& val,
										const int& minVal,
										const int& maxVal);  // 452
								CSOAContainer::NumSlices(); // 452
								clamp<int, int>(const int& val,
										const int& minVal,
										const int& maxVal);  // 452
								CSOAContainer::NumRows(); // 452
								CSOAContainer::NumCols(); // 452
								CSOAContainer::RowPtr<float>(
										int nAttributeIdx,
										int nRowNumber,
										int nSliceNumber);  // 442
								CSOAContainer::FloatValue(
										int nAttrIdx,
										int nX,
										int nY,
										int nZ);  // 452
								clamp<int, int>(const int& val,
										const int& minVal,
										const int& maxVal);  // 452
								CSOAContainer::FloatValueClamped(
											int nAttrIdx,
											int nX,
											int nY,
											int nZ);  // 1808
								clamp<int, int>(const int& val,
										const int& minVal,
										const int& maxVal);  // 452
								CSOAContainer::RowPtr<float>(
										int nAttributeIdx,
										int nRowNumber,
										int nSliceNumber);  // 442
								CSOAContainer::FloatValue(
										int nAttrIdx,
										int nX,
										int nY,
										int nZ);  // 452
								CSOAContainer::FloatValueClamped(
											int nAttrIdx,
											int nX,
											int nY,
											int nZ);  // 1809
								clamp<int, int>(const int& val,
										const int& minVal,
										const int& maxVal);  // 452
								CSOAContainer::RowPtr<float>(
										int nAttributeIdx,
										int nRowNumber,
										int nSliceNumber);  // 442
								CSOAContainer::FloatValue(
										int nAttrIdx,
										int nX,
										int nY,
										int nZ);  // 452
								CSOAContainer::FloatValueClamped(
											int nAttrIdx,
											int nX,
											int nY,
											int nZ);  // 1810
								CSOAContainer::RowPtr<float>(
										int nAttributeIdx,
										int nRowNumber,
										int nSliceNumber);  // 442
								CSOAContainer::FloatValue(
										int nAttrIdx,
										int nX,
										int nY,
										int nZ);  // 452
								CSOAContainer::FloatValueClamped(
											int nAttrIdx,
											int nX,
											int nY,
											int nZ);  // 1811
								clamp<int, int>(const int& val,
										const int& minVal,
										const int& maxVal);  // 452
								CSOAContainer::FloatValue(
										int nAttrIdx,
										int nX,
										int nY,
										int nZ);  // 452
								CSOAContainer::FloatValueClamped(
											int nAttrIdx,
											int nX,
											int nY,
											int nZ);  // 1812
								CSOAContainer::FloatValueClamped(
											int nAttrIdx,
											int nX,
											int nY,
											int nZ);  // 1813
								CSOAContainer::FloatValue(
										int nAttrIdx,
										int nX,
										int nY,
										int nZ);  // 452
								CSOAContainer::FloatValueClamped(
											int nAttrIdx,
											int nX,
											int nY,
											int nZ);  // 1814
								CSOAContainer::FloatValue(
										int nAttrIdx,
										int nX,
										int nY,
										int nZ);  // 452
								CSOAContainer::FloatValueClamped(
											int nAttrIdx,
											int nX,
											int nY,
											int nZ);  // 1815
							}
							SubFloat<>(fltx4& a,
									int idx);  // 1800
							CSOAContainer::NumCols(); // 1797
						}
					}
					{
						fltx4 fl4Pixels0; // 1832
						fltx4 fl4Pixels1; // 1833
						fltx4 fl4Filtered; // 1840
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1841
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1832
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1833
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1836
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1836
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1837
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1837
						{
							fltx4 retVal; // 341
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 342
						}
						RotateLeft<>(const fltx4& a); // 1787
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1787
						{
							fltx4 retVal; // 341
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 342
						}
						RotateLeft<>(const fltx4& a); // 1788
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1788
						PairwiseHorizontalAddSIMD<>(const fltx4& a,
										const fltx4& b);  // 1840
					}
				}
				CSOAContainer::ConstRowPtr(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 1778
				CSOAContainer::RowPtr<__vector(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1773
				CSOAContainer::ConstRowPtr(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 1774
				CSOAContainer::NumRows(); // 1781
				CSOAContainer::NumRows(); // 1781
			}
		}
	}
	CSOAContainer::NumQuadsPerRow(); // 1767
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <044BE5E6> tier0_perproject/utlsoacontainer.cpp:1763
// variables: 26
// function calls: 29
void QuarterSizeAttrWithBoxFilterPartial<true, CSOAContainer::false>(int nStartRow, int nNumRows, int nStartSlice, int nEndSlice, const CSOAContainer* pSrc, int nSrcAttr, int nDestAttr)
{
	int nNumHorizontalIterations; // 1767
	fltx4 fl4FilterScaleFactor; // 1768
	{
		int z; // 1769
		{
			int y; // 1771
			{
				fltx4* pOut; // 1773
				const fltx4* pIn; // 1774
				const fltx4* pIn1; // 1775
				int nRowToRowStep; // 1780
				{
					int x; // 1789
					{
						fltx4 fl4Result; // 1794
						{
							int nWordIndex; // 1795
							{
								int nX; // 1804
							}
						}
					}
					{
						fltx4 fl4Pixels0; // 1832
						fltx4 fl4Pixels1; // 1833
						fltx4 fl4Filtered; // 1840
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1832
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1833
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1836
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1836
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1837
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1837
						{
							fltx4 retVal; // 341
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 342
						}
						RotateLeft<>(const fltx4& a); // 1787
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1787
						{
							fltx4 retVal; // 341
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 342
						}
						RotateLeft<>(const fltx4& a); // 1788
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1788
						PairwiseHorizontalAddSIMD<>(const fltx4& a,
										const fltx4& b);  // 1840
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1841
					}
				}
				CSOAContainer::ConstRowPtr(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 1778
				CSOAContainer::RowPtr<__vector(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1773
				CSOAContainer::ConstRowPtr(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 1774
				CSOAContainer::NumRows(); // 1781
				CSOAContainer::NumRows(); // 1781
			}
		}
	}
	CSOAContainer::NumQuadsPerRow(); // 1767
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <044BD9D8> tier0_perproject/utlsoacontainer.cpp:1763
// variables: 22
// function calls: 41
void QuarterSizeAttrWithBoxFilterPartial<false, CSOAContainer::true>(int nStartRow, int nNumRows, int nStartSlice, int nEndSlice, const CSOAContainer* pSrc, int nSrcAttr, int nDestAttr)
{
	int nNumHorizontalIterations; // 1767
	fltx4 fl4FilterScaleFactor; // 1768
	{
		int z; // 1769
		{
			int y; // 1771
			{
				fltx4* pOut; // 1773
				const fltx4* pIn; // 1774
				const fltx4* pIn1; // 1775
				int nRowToRowStep; // 1780
				{
					int x; // 1789
					{
						fltx4 fl4Result; // 1794
						{
							int nWordIndex; // 1795
							{
								int nX; // 1804
								CSOAContainer::NumSlices(); // 452
								clamp<int, int>(const int& val,
										const int& minVal,
										const int& maxVal);  // 452
								clamp<int, int>(const int& val,
										const int& minVal,
										const int& maxVal);  // 452
								CSOAContainer::NumRows(); // 452
								CSOAContainer::RowPtr<float>(
										int nAttributeIdx,
										int nRowNumber,
										int nSliceNumber);  // 442
								CSOAContainer::FloatValue(
										int nAttrIdx,
										int nX,
										int nY,
										int nZ);  // 452
								CSOAContainer::NumCols(); // 452
								clamp<int, int>(const int& val,
										const int& minVal,
										const int& maxVal);  // 452
								CSOAContainer::FloatValueClamped(
											int nAttrIdx,
											int nX,
											int nY,
											int nZ);  // 1821
								clamp<int, int>(const int& val,
										const int& minVal,
										const int& maxVal);  // 452
								CSOAContainer::RowPtr<float>(
										int nAttributeIdx,
										int nRowNumber,
										int nSliceNumber);  // 442
								CSOAContainer::FloatValue(
										int nAttrIdx,
										int nX,
										int nY,
										int nZ);  // 452
								CSOAContainer::FloatValueClamped(
											int nAttrIdx,
											int nX,
											int nY,
											int nZ);  // 1822
								clamp<int, int>(const int& val,
										const int& minVal,
										const int& maxVal);  // 452
								CSOAContainer::FloatValue(
										int nAttrIdx,
										int nX,
										int nY,
										int nZ);  // 452
								CSOAContainer::FloatValueClamped(
											int nAttrIdx,
											int nX,
											int nY,
											int nZ);  // 1823
								clamp<int, int>(const int& val,
										const int& minVal,
										const int& maxVal);  // 452
								CSOAContainer::FloatValue(
										int nAttrIdx,
										int nX,
										int nY,
										int nZ);  // 452
								CSOAContainer::FloatValueClamped(
											int nAttrIdx,
											int nX,
											int nY,
											int nZ);  // 1824
							}
							SubFloat<>(fltx4& a,
									int idx);  // 1800
							CSOAContainer::NumCols(); // 1797
						}
					}
					{
						fltx4 fl4Pixels0; // 1832
						fltx4 fl4Pixels1; // 1833
						fltx4 fl4Filtered; // 1840
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1841
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1832
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1833
						{
							fltx4 retVal; // 341
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 342
						}
						RotateLeft<>(const fltx4& a); // 1787
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1787
						{
							fltx4 retVal; // 341
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 342
						}
						RotateLeft<>(const fltx4& a); // 1788
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1788
						PairwiseHorizontalAddSIMD<>(const fltx4& a,
										const fltx4& b);  // 1840
					}
				}
				CSOAContainer::ConstRowPtr(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 1774
				CSOAContainer::RowPtr<__vector(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1773
				CSOAContainer::NumRows(); // 1781
				CSOAContainer::NumRows(); // 1781
			}
		}
	}
	CSOAContainer::NumQuadsPerRow(); // 1767
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <044BD880> tier0_perproject/utlsoacontainer.cpp:1763
// variables: 15
void QuarterSizeAttrWithBoxFilterPartial<false, CSOAContainer::false>(int nStartRow, int nNumRows, int nStartSlice, int nEndSlice, const CSOAContainer* pSrc, int nSrcAttr, int nDestAttr)
{
	int nNumHorizontalIterations; // 1767
	fltx4 fl4FilterScaleFactor; // 1768
	{
		int z; // 1769
		{
			int y; // 1771
			{
				fltx4* pOut; // 1773
				const fltx4* pIn; // 1774
				const fltx4* pIn1; // 1775
				int nRowToRowStep; // 1780
				{
					int x; // 1789
					{
						fltx4 fl4Result; // 1794
						{
							int nWordIndex; // 1795
							{
								int nX; // 1804
							}
						}
					}
					{
						fltx4 fl4Pixels0; // 1832
						fltx4 fl4Pixels1; // 1833
						fltx4 fl4Filtered; // 1840
					}
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <0450FC69> tier0_perproject/utlsoacontainer.cpp:1849
// function call: 1
void CSOAContainer::QuarterSizeAttrWithBoxFilterPartial<true>(int nStartRow, int nNumRows, int nStartSlice, int nEndSlice, const CSOAContainer* pSrc, int nSrcAttr, int nDestAttr)
{
	CSOAContainer::NumCols(); // 1852
} /* size: 0, inline expansions: 1 (0 bytes) */

// <044CF03F> tier0_perproject/utlsoacontainer.cpp:1849
void CSOAContainer::QuarterSizeAttrWithBoxFilterPartial<true>(int nStartRow, int nNumRows, int nStartSlice, int nEndSlice, const CSOAContainer* pSrc, int nSrcAttr, int nDestAttr)
{
} /* size: 0 */

// <044CE936> tier0_perproject/utlsoacontainer.cpp:1849
// variables: 17
// function calls: 22
void CSOAContainer::QuarterSizeAttrWithBoxFilterPartial<false>(int nStartRow, int nNumRows, int nStartSlice, int nEndSlice, const CSOAContainer* pSrc, int nSrcAttr, int nDestAttr)
{
	CSOAContainer::NumCols(); // 1852
	CSOAContainer::NumQuadsPerRow(); // 1767
	{
		int z; // 1769
		{
			int y; // 1771
			{
				fltx4* pOut; // 1773
				const fltx4* pIn; // 1774
				const fltx4* pIn1; // 1775
				int nRowToRowStep; // 1780
				CSOAContainer::ConstRowPtr(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 1774
				CSOAContainer::RowPtr<__vector(
								int nAttributeIdx,
								int nRowNumber,
								int nSliceNumber);  // 1773
				CSOAContainer::NumRows(); // 1781
				{
					int x; // 1789
					{
						fltx4 fl4Pixels0; // 1832
						fltx4 fl4Pixels1; // 1833
						fltx4 fl4Filtered; // 1840
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1832
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1833
						{
							fltx4 retVal; // 341
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 342
						}
						RotateLeft<>(const fltx4& a); // 1787
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1787
						{
							fltx4 retVal; // 341
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 342
						}
						RotateLeft<>(const fltx4& a); // 1788
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1788
						PairwiseHorizontalAddSIMD<>(const fltx4& a,
										const fltx4& b);  // 1840
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1841
					}
				}
				CSOAContainer::NumRows(); // 1781
			}
		}
	}
	CSOAContainer::QuarterSizeAttrWithBoxFilterPartial<false, false>(
								int nStartRow,
								int nNumRows,
								int nStartSlice,
								int nEndSlice,
								const CSOAContainer* pSrc,
								int nSrcAttr,
								int nDestAttr);  // 1858
} /* size: 0, inline expansions: 3 (0 bytes) */

// <044E87C7> tier0_perproject/utlsoacontainer.cpp:1864
// variables: 15
// function calls: 106
void CSOAContainer::QuarterSizeAttrWithBoxFilter(const CSOAContainer& src, int nSrcAttr, int nDestAttr, CCallQueue* pQueue)
{
	const char   __FUNCTION__; // 6823
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1866
	}
	{
		int y; // 1871
		{
			int x; // 1873
			{
				int z; // 1878
				CSOAContainer::NumSlices(); // 1878
				CSOAContainer::NumSlices(); // 452
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 452
				CSOAContainer::NumRows(); // 452
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 452
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 452
				CSOAContainer::NumCols(); // 452
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 452
				CSOAContainer::FloatValueClamped(
							int nAttrIdx,
							int nX,
							int nY,
							int nZ);  // 1881
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 452
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 452
				CSOAContainer::FloatValueClamped(
							int nAttrIdx,
							int nX,
							int nY,
							int nZ);  // 1882
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 452
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 452
				CSOAContainer::FloatValueClamped(
							int nAttrIdx,
							int nX,
							int nY,
							int nZ);  // 1883
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 1880
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 452
				CSOAContainer::FloatValueClamped(
							int nAttrIdx,
							int nX,
							int nY,
							int nZ);  // 1884
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 452
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 452
				CSOAContainer::FloatValueClamped(
							int nAttrIdx,
							int nX,
							int nY,
							int nZ);  // 1885
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 452
				CSOAContainer::FloatValueClamped(
							int nAttrIdx,
							int nX,
							int nY,
							int nZ);  // 1886
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 452
				CSOAContainer::FloatValueClamped(
							int nAttrIdx,
							int nX,
							int nY,
							int nZ);  // 1887
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 452
				CSOAContainer::FloatValueClamped(
							int nAttrIdx,
							int nX,
							int nY,
							int nZ);  // 1888
			}
			CSOAContainer::RowPtr<float>(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 442
			CSOAContainer::FloatValue(
					int nAttrIdx,
					int nX,
					int nY,
					int nZ);  // 1894
			CSOAContainer::NumRows(); // 452
			CSOAContainer::RowPtr<float>(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 442
			CSOAContainer::FloatValue(
					int nAttrIdx,
					int nX,
					int nY,
					int nZ);  // 452
			clamp<int, int>(const int& val,
					const int& minVal,
					const int& maxVal);  // 452
			CSOAContainer::NumCols(); // 452
			clamp<int, int>(const int& val,
					const int& minVal,
					const int& maxVal);  // 452
			CSOAContainer::FloatValueClamped(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 1895
			clamp<int, int>(const int& val,
					const int& minVal,
					const int& maxVal);  // 452
			CSOAContainer::RowPtr<float>(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 442
			CSOAContainer::FloatValue(
					int nAttrIdx,
					int nX,
					int nY,
					int nZ);  // 452
			CSOAContainer::FloatValueClamped(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 1896
			clamp<int, int>(const int& val,
					const int& minVal,
					const int& maxVal);  // 452
			CSOAContainer::FloatValue(
					int nAttrIdx,
					int nX,
					int nY,
					int nZ);  // 452
			CSOAContainer::FloatValueClamped(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 1897
			CSOAContainer::FloatValue(
					int nAttrIdx,
					int nX,
					int nY,
					int nZ);  // 452
			CSOAContainer::FloatValueClamped(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 1898
			CSOAContainer::NumSlices(); // 1875
			CSOAContainer::NumCols(); // 1873
		}
		CSOAContainer::NumRows(); // 1871
	}
	{
		CCallQueue workList; // 1908
		bool bExecuteQueue; // 1908
		int nY; // 1908
		{
			int nStep; // 1908
			CSOAContainer::NumSlices(); // 1908
		}
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		CTSListBase::CTSListBase(); // 846
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		Node_t::Node_t(); // 864
		CTSQueue<std::function<void()>::End()>*, false>* this); // 865
		CTSQueue<std::function<void()>::CTSQueue()>*, false>* this); // 13
		CCallQueue::CCallQueue(); // 1908
		CSOAContainer::NumRows(); // 1908
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<std::function<void()>::FreeNode(
			Node_t* pNode); // 1103
		CTSQueue<std::function<void()>::PopItem(
			function<void()>** pResult); // 75
		_Function_base::~_Function_base(); // 336
		function<void()>::~function()>* this); // 77
		CCallQueue::Flush(); // 17
		CCallQueue::~CCallQueue(); // 1908
	}
	{
		CCallQueue workList; // 1912
		bool bExecuteQueue; // 1912
		int nY; // 1912
		{
			int nStep; // 1912
			CSOAContainer::NumSlices(); // 1912
		}
		CCallQueue::ResumeProcessing(); // 80
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<std::function<void()>::FreeNode(
			Node_t* pNode); // 1103
		CTSQueue<std::function<void()>::PopItem(
			function<void()>** pResult); // 75
		_Function_base::~_Function_base(); // 336
		function<void()>::~function()>* this); // 77
		CCallQueue::Flush(); // 17
		CCallQueue::~CCallQueue(); // 1912
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		CTSListBase::CTSListBase(); // 846
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		Node_t::Node_t(); // 864
		CTSQueue<std::function<void()>::End()>*, false>* this); // 865
		CTSQueue<std::function<void()>::CTSQueue()>*, false>* this); // 13
		CCallQueue::CCallQueue(); // 1912
		CSOAContainer::NumRows(); // 1912
	}
	CSOAContainer::NumSlices(); // 1866
	CSOAContainer::NumSlices(); // 1866
	CSOAContainer::NumCols(); // 1869
	CSOAContainer::NumSlices(); // 1912
	CSOAContainer::NumRows(); // 1912
	CSOAContainer::NumSlices(); // 1905
	CSOAContainer::NumSlices(); // 1908
	CSOAContainer::NumCols(); // 1852
	CSOAContainer::QuarterSizeAttrWithBoxFilterPartial<true>(
							int nStartRow,
							int nNumRows,
							int nStartSlice,
							int nEndSlice,
							const CSOAContainer* pSrc,
							int nSrcAttr,
							int nDestAttr);  // 1908
	CSOAContainer::NumRows(); // 1908
} /* size: 0, variables: 1, inline expansions: 10 (0 bytes) */

// <01B43ED9> tier0_perproject/utlsoacontainer.cpp:1864
// variables: 15
// function calls: 106
void CSOAContainer::QuarterSizeAttrWithBoxFilter(const CSOAContainer& src, int nSrcAttr, int nDestAttr, CCallQueue* pQueue)
{
	const char   __FUNCTION__; // 47212
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1866
	}
	{
		int y; // 1871
		{
			int x; // 1873
			{
				int z; // 1878
				CSOAContainer::NumSlices(); // 1878
				CSOAContainer::NumSlices(); // 452
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 452
				CSOAContainer::NumRows(); // 452
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 452
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 452
				CSOAContainer::NumCols(); // 452
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 452
				CSOAContainer::FloatValueClamped(
							int nAttrIdx,
							int nX,
							int nY,
							int nZ);  // 1881
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 452
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 452
				CSOAContainer::FloatValueClamped(
							int nAttrIdx,
							int nX,
							int nY,
							int nZ);  // 1882
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 452
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 452
				CSOAContainer::FloatValueClamped(
							int nAttrIdx,
							int nX,
							int nY,
							int nZ);  // 1883
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 1880
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 452
				CSOAContainer::FloatValueClamped(
							int nAttrIdx,
							int nX,
							int nY,
							int nZ);  // 1884
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 452
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 452
				CSOAContainer::FloatValueClamped(
							int nAttrIdx,
							int nX,
							int nY,
							int nZ);  // 1885
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 452
				CSOAContainer::FloatValueClamped(
							int nAttrIdx,
							int nX,
							int nY,
							int nZ);  // 1886
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 452
				CSOAContainer::FloatValueClamped(
							int nAttrIdx,
							int nX,
							int nY,
							int nZ);  // 1887
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 452
				CSOAContainer::FloatValueClamped(
							int nAttrIdx,
							int nX,
							int nY,
							int nZ);  // 1888
			}
			CSOAContainer::RowPtr<float>(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 442
			CSOAContainer::FloatValue(
					int nAttrIdx,
					int nX,
					int nY,
					int nZ);  // 1894
			CSOAContainer::NumRows(); // 452
			CSOAContainer::RowPtr<float>(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 442
			CSOAContainer::FloatValue(
					int nAttrIdx,
					int nX,
					int nY,
					int nZ);  // 452
			clamp<int, int>(const int& val,
					const int& minVal,
					const int& maxVal);  // 452
			CSOAContainer::NumCols(); // 452
			clamp<int, int>(const int& val,
					const int& minVal,
					const int& maxVal);  // 452
			CSOAContainer::FloatValueClamped(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 1895
			clamp<int, int>(const int& val,
					const int& minVal,
					const int& maxVal);  // 452
			CSOAContainer::RowPtr<float>(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 442
			CSOAContainer::FloatValue(
					int nAttrIdx,
					int nX,
					int nY,
					int nZ);  // 452
			CSOAContainer::FloatValueClamped(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 1896
			clamp<int, int>(const int& val,
					const int& minVal,
					const int& maxVal);  // 452
			CSOAContainer::FloatValue(
					int nAttrIdx,
					int nX,
					int nY,
					int nZ);  // 452
			CSOAContainer::FloatValueClamped(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 1897
			CSOAContainer::FloatValue(
					int nAttrIdx,
					int nX,
					int nY,
					int nZ);  // 452
			CSOAContainer::FloatValueClamped(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 1898
			CSOAContainer::NumSlices(); // 1875
			CSOAContainer::NumCols(); // 1873
		}
		CSOAContainer::NumRows(); // 1871
	}
	{
		CCallQueue workList; // 1908
		bool bExecuteQueue; // 1908
		int nY; // 1908
		{
			int nStep; // 1908
			CSOAContainer::NumSlices(); // 1908
		}
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		CTSListBase::CTSListBase(); // 846
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		Node_t::Node_t(); // 864
		CTSQueue<std::function<void()>::End()>*, false>* this); // 865
		CTSQueue<std::function<void()>::CTSQueue()>*, false>* this); // 13
		CCallQueue::CCallQueue(); // 1908
		CSOAContainer::NumRows(); // 1908
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<std::function<void()>::FreeNode(
			Node_t* pNode); // 1103
		CTSQueue<std::function<void()>::PopItem(
			function<void()>** pResult); // 75
		_Function_base::~_Function_base(); // 336
		function<void()>::~function()>* this); // 77
		CCallQueue::Flush(); // 17
		CCallQueue::~CCallQueue(); // 1908
	}
	{
		CCallQueue workList; // 1912
		bool bExecuteQueue; // 1912
		int nY; // 1912
		{
			int nStep; // 1912
			CSOAContainer::NumSlices(); // 1912
		}
		CCallQueue::ResumeProcessing(); // 80
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<std::function<void()>::FreeNode(
			Node_t* pNode); // 1103
		CTSQueue<std::function<void()>::PopItem(
			function<void()>** pResult); // 75
		_Function_base::~_Function_base(); // 336
		function<void()>::~function()>* this); // 77
		CCallQueue::Flush(); // 17
		CCallQueue::~CCallQueue(); // 1912
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		CTSListBase::CTSListBase(); // 846
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		Node_t::Node_t(); // 864
		CTSQueue<std::function<void()>::End()>*, false>* this); // 865
		CTSQueue<std::function<void()>::CTSQueue()>*, false>* this); // 13
		CCallQueue::CCallQueue(); // 1912
		CSOAContainer::NumRows(); // 1912
	}
	CSOAContainer::NumSlices(); // 1866
	CSOAContainer::NumSlices(); // 1866
	CSOAContainer::NumCols(); // 1869
	CSOAContainer::NumSlices(); // 1912
	CSOAContainer::NumRows(); // 1912
	CSOAContainer::NumSlices(); // 1905
	CSOAContainer::NumSlices(); // 1908
	CSOAContainer::NumCols(); // 1852
	CSOAContainer::QuarterSizeAttrWithBoxFilterPartial<true>(
							int nStartRow,
							int nNumRows,
							int nStartSlice,
							int nEndSlice,
							const CSOAContainer* pSrc,
							int nSrcAttr,
							int nDestAttr);  // 1908
	CSOAContainer::NumRows(); // 1908
} /* size: 0, variables: 1, inline expansions: 10 (0 bytes) */

// <009C973C> tier0_perproject/utlsoacontainer.cpp:1864
// variables: 15
// function calls: 106
void CSOAContainer::QuarterSizeAttrWithBoxFilter(const CSOAContainer& src, int nSrcAttr, int nDestAttr, CCallQueue* pQueue)
{
	const char   __FUNCTION__; // 39932
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1866
	}
	{
		int y; // 1871
		{
			int x; // 1873
			{
				int z; // 1878
				CSOAContainer::NumSlices(); // 1878
				CSOAContainer::NumSlices(); // 452
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 452
				CSOAContainer::NumRows(); // 452
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 452
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 452
				CSOAContainer::NumCols(); // 452
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 452
				CSOAContainer::FloatValueClamped(
							int nAttrIdx,
							int nX,
							int nY,
							int nZ);  // 1881
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 452
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 452
				CSOAContainer::FloatValueClamped(
							int nAttrIdx,
							int nX,
							int nY,
							int nZ);  // 1882
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 452
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 452
				CSOAContainer::FloatValueClamped(
							int nAttrIdx,
							int nX,
							int nY,
							int nZ);  // 1883
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 1880
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 452
				CSOAContainer::FloatValueClamped(
							int nAttrIdx,
							int nX,
							int nY,
							int nZ);  // 1884
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 452
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 452
				CSOAContainer::FloatValueClamped(
							int nAttrIdx,
							int nX,
							int nY,
							int nZ);  // 1885
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 452
				CSOAContainer::FloatValueClamped(
							int nAttrIdx,
							int nX,
							int nY,
							int nZ);  // 1886
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 452
				CSOAContainer::FloatValueClamped(
							int nAttrIdx,
							int nX,
							int nY,
							int nZ);  // 1887
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 452
				CSOAContainer::FloatValueClamped(
							int nAttrIdx,
							int nX,
							int nY,
							int nZ);  // 1888
			}
			CSOAContainer::RowPtr<float>(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 442
			CSOAContainer::FloatValue(
					int nAttrIdx,
					int nX,
					int nY,
					int nZ);  // 1894
			CSOAContainer::NumRows(); // 452
			CSOAContainer::RowPtr<float>(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 442
			CSOAContainer::FloatValue(
					int nAttrIdx,
					int nX,
					int nY,
					int nZ);  // 452
			clamp<int, int>(const int& val,
					const int& minVal,
					const int& maxVal);  // 452
			CSOAContainer::NumCols(); // 452
			clamp<int, int>(const int& val,
					const int& minVal,
					const int& maxVal);  // 452
			CSOAContainer::FloatValueClamped(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 1895
			clamp<int, int>(const int& val,
					const int& minVal,
					const int& maxVal);  // 452
			CSOAContainer::RowPtr<float>(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 442
			CSOAContainer::FloatValue(
					int nAttrIdx,
					int nX,
					int nY,
					int nZ);  // 452
			CSOAContainer::FloatValueClamped(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 1896
			clamp<int, int>(const int& val,
					const int& minVal,
					const int& maxVal);  // 452
			CSOAContainer::FloatValue(
					int nAttrIdx,
					int nX,
					int nY,
					int nZ);  // 452
			CSOAContainer::FloatValueClamped(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 1897
			CSOAContainer::FloatValue(
					int nAttrIdx,
					int nX,
					int nY,
					int nZ);  // 452
			CSOAContainer::FloatValueClamped(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 1898
			CSOAContainer::NumSlices(); // 1875
			CSOAContainer::NumCols(); // 1873
		}
		CSOAContainer::NumRows(); // 1871
	}
	{
		CCallQueue workList; // 1908
		bool bExecuteQueue; // 1908
		int nY; // 1908
		{
			int nStep; // 1908
			CSOAContainer::NumSlices(); // 1908
		}
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		CTSListBase::CTSListBase(); // 846
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		Node_t::Node_t(); // 864
		CTSQueue<std::function<void()>::End()>*, false>* this); // 865
		CTSQueue<std::function<void()>::CTSQueue()>*, false>* this); // 13
		CCallQueue::CCallQueue(); // 1908
		CSOAContainer::NumRows(); // 1908
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<std::function<void()>::FreeNode(
			Node_t* pNode); // 1103
		CTSQueue<std::function<void()>::PopItem(
			function<void()>** pResult); // 75
		_Function_base::~_Function_base(); // 336
		function<void()>::~function()>* this); // 77
		CCallQueue::Flush(); // 17
		CCallQueue::~CCallQueue(); // 1908
	}
	{
		CCallQueue workList; // 1912
		bool bExecuteQueue; // 1912
		int nY; // 1912
		{
			int nStep; // 1912
			CSOAContainer::NumSlices(); // 1912
		}
		CCallQueue::ResumeProcessing(); // 80
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<std::function<void()>::FreeNode(
			Node_t* pNode); // 1103
		CTSQueue<std::function<void()>::PopItem(
			function<void()>** pResult); // 75
		_Function_base::~_Function_base(); // 336
		function<void()>::~function()>* this); // 77
		CCallQueue::Flush(); // 17
		CCallQueue::~CCallQueue(); // 1912
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		CTSListBase::CTSListBase(); // 846
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		Node_t::Node_t(); // 864
		CTSQueue<std::function<void()>::End()>*, false>* this); // 865
		CTSQueue<std::function<void()>::CTSQueue()>*, false>* this); // 13
		CCallQueue::CCallQueue(); // 1912
		CSOAContainer::NumRows(); // 1912
	}
	CSOAContainer::NumSlices(); // 1866
	CSOAContainer::NumSlices(); // 1866
	CSOAContainer::NumCols(); // 1869
	CSOAContainer::NumSlices(); // 1912
	CSOAContainer::NumRows(); // 1912
	CSOAContainer::NumSlices(); // 1905
	CSOAContainer::NumSlices(); // 1908
	CSOAContainer::NumCols(); // 1852
	CSOAContainer::QuarterSizeAttrWithBoxFilterPartial<true>(
							int nStartRow,
							int nNumRows,
							int nStartSlice,
							int nEndSlice,
							const CSOAContainer* pSrc,
							int nSrcAttr,
							int nDestAttr);  // 1908
	CSOAContainer::NumRows(); // 1908
} /* size: 0, variables: 1, inline expansions: 10 (0 bytes) */

// <044E86E5> tier0_perproject/utlsoacontainer.cpp:1918
// variable: 1
void CSOAContainer::CalculateGradientY(const CSOAContainer& src, int nSrcAttr, int nDestAttr, bool bWrap)
{
	float flCoeffs; // 1920
} /* size: 0, variables: 1 */

// <044E8603> tier0_perproject/utlsoacontainer.cpp:1926
// variable: 1
void CSOAContainer::CalculateGradientX(const CSOAContainer& src, int nSrcAttr, int nDestAttr, bool bWrap)
{
	float flCoeffs; // 1928
} /* size: 0, variables: 1 */

// <044E83D3> tier0_perproject/utlsoacontainer.cpp:1935
// variables: 13
void CSOAContainer::GaussianBlurFrom(const CSOAContainer& src, int nSrcAttr, int nDestAttr, int nFilterDimX, int nFilterDimY, int nFilterDimZ)
{
	int nNumCoeffs; // 1937
	float* pCoeffs; // 1938
	float flFilterRadius; // 1939
	float flSum; // 1941
	{
		int iz; // 1943
		{
			float flZDist; // 1945
			{
				int iy; // 1946
				{
					float flYDist; // 1948
					{
						int ix; // 1949
						{
							float flXDist; // 1951
							float flExp; // 1953
							float flWeight; // 1954
						}
					}
				}
			}
		}
	}
	{
		int i; // 1960
	}
} /* size: 0, variables: 4 */

// <044E821A> tier0_perproject/utlsoacontainer.cpp:1969
// variables: 10
// function call: 1
void GenerateGaussianFilterCoefficients(float* pOut, int nSize)
{
	const char   __FUNCTION__; // 6886
	float flDev; // 1972
	float flHalfWidth; // 1973
	float flSumWeights; // 1976
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1971
	}
	{
		int i; // 1977
		{
			float flDist; // 1979
			float flExp; // 1981
			float flWeight; // 1982
			RemapVal(float val,
				float A,
				float B,
				float C,
				float D);  // 1980
		}
	}
	{
		int i; // 1986
	}
} /* size: 0, variables: 4 */

// <01B4392C> tier0_perproject/utlsoacontainer.cpp:1969
// variables: 10
// function call: 1
void GenerateGaussianFilterCoefficients(float* pOut, int nSize)
{
	const char   __FUNCTION__; // 47275
	float flDev; // 1972
	float flHalfWidth; // 1973
	float flSumWeights; // 1976
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1971
	}
	{
		int i; // 1977
		{
			float flDist; // 1979
			float flExp; // 1981
			float flWeight; // 1982
			RemapVal(float val,
				float A,
				float B,
				float C,
				float D);  // 1980
		}
	}
	{
		int i; // 1986
	}
} /* size: 0, variables: 4 */

// <009C918F> tier0_perproject/utlsoacontainer.cpp:1969
// variables: 10
// function call: 1
void GenerateGaussianFilterCoefficients(float* pOut, int nSize)
{
	const char   __FUNCTION__; // 39995
	float flDev; // 1972
	float flHalfWidth; // 1973
	float flSumWeights; // 1976
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1971
	}
	{
		int i; // 1977
		{
			float flDist; // 1979
			float flExp; // 1981
			float flWeight; // 1982
			RemapVal(float val,
				float A,
				float B,
				float C,
				float D);  // 1980
		}
	}
	{
		int i; // 1986
	}
} /* size: 0, variables: 4 */

// <044E7835> tier0_perproject/utlsoacontainer.cpp:1993
// variable: 1
// function calls: 39
void CSOAContainer::GaussianBlur(int nFilterWidth, int nFilterHeight, int nFilterDepth, int nMask)
{
	float flCoeffs; // 1995
	CSOAContainer::NumCols(); // 382
	CSOAContainer::Width(); // 1996
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 2001
	CSOAContainer::NumSlices(); // 384
	CSOAContainer::Depth(); // 2006
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 390
	IntVector3D::IntVector3D(); // 304
	IntVector3D::IntVector3D(); // 304
	GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
				const IntVector3D& mins,
				const IntVector3D& maxes);  // 430
	IntAABB_t::IntAABB_t(
			IntVector3D a,
			IntVector3D b);  // 390
	CSOAContainer::NumCols(); // 382
	CSOAContainer::Width(); // 390
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 390
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 390
	CSOAContainer::Bounds(); // 2009
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 390
	IntVector3D::IntVector3D(); // 304
	IntVector3D::IntVector3D(); // 304
	GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
				const IntVector3D& mins,
				const IntVector3D& maxes);  // 430
	IntAABB_t::IntAABB_t(
			IntVector3D a,
			IntVector3D b);  // 390
	CSOAContainer::NumCols(); // 382
	CSOAContainer::Width(); // 390
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 390
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 390
	CSOAContainer::Bounds(); // 1999
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 390
	IntVector3D::IntVector3D(); // 304
	IntVector3D::IntVector3D(); // 304
	GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
				const IntVector3D& mins,
				const IntVector3D& maxes);  // 430
	IntAABB_t::IntAABB_t(
			IntVector3D a,
			IntVector3D b);  // 390
	CSOAContainer::NumCols(); // 382
	CSOAContainer::Width(); // 390
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 390
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 390
	CSOAContainer::Bounds(); // 2004
} /* size: 0, variables: 1, inline expansions: 39 (0 bytes) */

// <044AAE4C> tier0_perproject/utlsoacontainer.cpp:2016
// variables: 23
void Filter1DPrimitiveSIMDLeaf<true, true, true, false>(const float* pInputPtr, float* pOutputPtr, int nCount, fltx4* pfl4Coeffs, int nMaxIndex, int nVerticalStrideInFloats, int nNeighborStrideInFloats, int nFilterDim, fltx4* pfl4OutputBuffer, fltx4 fl4MaskIfUsed)
{
	int nY; // 2019
	int nHalfFilterWidth; // 2020
	int nLeadingAndTrailingRange; // 2021
	int nLimit; // 2034
	float* pOut; // 2077
	{
		fltx4 fl4Acc; // 2024
		{
			int nTap; // 2025
			{
				int nYSrc; // 2027
				int nTapOfs; // 2028
				fltx4 fl4Sample; // 2029
			}
		}
	}
	{
		fltx4 fl4Acc; // 2039
		{
			int nTap; // 2044
			{
				int nTapOfs; // 2046
				fltx4 fl4Sample; // 2047
			}
		}
		{
			int nTap; // 2054
			{
				int nTapOfs; // 2056
				fltx4 fl4Sample; // 2057
			}
		}
	}
	{
		fltx4 fl4Acc; // 2066
		{
			int nTap; // 2067
			{
				int nYSrc; // 2069
				int nTapOfs; // 2070
				fltx4 fl4Sample; // 2071
			}
		}
	}
	{
		fltx4 fl4Dest; // 2082
	}
} /* size: 0, variables: 5 */

// <044AAC36> tier0_perproject/utlsoacontainer.cpp:2016
// variables: 23
void Filter1DPrimitiveSIMDLeaf<true, false, false, false>(const float* pInputPtr, float* pOutputPtr, int nCount, fltx4* pfl4Coeffs, int nMaxIndex, int nVerticalStrideInFloats, int nNeighborStrideInFloats, int nFilterDim, fltx4* pfl4OutputBuffer, fltx4 fl4MaskIfUsed)
{
	int nY; // 2019
	int nHalfFilterWidth; // 2020
	int nLeadingAndTrailingRange; // 2021
	int nLimit; // 2034
	float* pOut; // 2077
	{
		fltx4 fl4Acc; // 2024
		{
			int nTap; // 2025
			{
				int nYSrc; // 2027
				int nTapOfs; // 2028
				fltx4 fl4Sample; // 2029
			}
		}
	}
	{
		fltx4 fl4Acc; // 2039
		{
			int nTap; // 2044
			{
				int nTapOfs; // 2046
				fltx4 fl4Sample; // 2047
			}
		}
		{
			int nTap; // 2054
			{
				int nTapOfs; // 2056
				fltx4 fl4Sample; // 2057
			}
		}
	}
	{
		fltx4 fl4Acc; // 2066
		{
			int nTap; // 2067
			{
				int nYSrc; // 2069
				int nTapOfs; // 2070
				fltx4 fl4Sample; // 2071
			}
		}
	}
	{
		fltx4 fl4Dest; // 2082
	}
} /* size: 0, variables: 5 */

// <044BD381> tier0_perproject/utlsoacontainer.cpp:2094
// variable: 1
void Filter1DPrimitiveSIMDLeaf1<true, true, false>(const float* pInputPtr, float* pOutputPtr, int nCount, fltx4* pfl4Coeffs, int nMaxIndex, int nVerticalStrideInFloats, int nNeighborStrideInFloats, int nFilterDim, fltx4* pfl4OutputBuffer, fltx4 fl4MaskIfUsed)
{
	bool bSymetric; // 2096
} /* size: 0, variables: 1 */

// <044BD2BA> tier0_perproject/utlsoacontainer.cpp:2094
// variable: 1
void Filter1DPrimitiveSIMDLeaf1<false, false, false>(const float* pInputPtr, float* pOutputPtr, int nCount, fltx4* pfl4Coeffs, int nMaxIndex, int nVerticalStrideInFloats, int nNeighborStrideInFloats, int nFilterDim, fltx4* pfl4OutputBuffer, fltx4 fl4MaskIfUsed)
{
	bool bSymetric; // 2096
} /* size: 0, variables: 1 */

// <044CCE60> tier0_perproject/utlsoacontainer.cpp:2109
inline void Filter1DPrimitiveSIMD<>(const float* pInputPtr, float* pOutputPtr, int nCount, fltx4* pfl4Coeffs, int nMaxIndex, int nVerticalStrideInFloats, int nNeighborStrideInFloats, int nFilterDim, fltx4* pfl4OutputBuffer, fltx4 fl4MaskIfUsed)
{
} /* size: 0 */

// <044CCF03> tier0_perproject/utlsoacontainer.cpp:2122
// variables: 69
// function calls: 92
void Filter1DPrimitiveSIMD4Wide<true>(const float* pInputPtr, float* pOutputPtr, int nCount, fltx4* pfl4Coeffs, int nMaxIndex, int nVerticalStrideInFloats, int nFilterDim, fltx4* pfl4OutputBuffer)
{
	int nY; // 2125
	int nHalfFilterWidth; // 2126
	int nLeadingAndTrailingRange; // 2127
	int nLimit; // 2157
	float* pOut; // 2258
	fltx4* pBuf; // 2259
	{
		fltx4 fl4Acc0; // 2130
		fltx4 fl4Acc1; // 2131
		fltx4 fl4Acc2; // 2132
		fltx4 fl4Acc3; // 2133
		{
			int nTap; // 2134
			{
				int nYSrc; // 2136
				int nTapOfs; // 2137
				int nOfs; // 2138
				fltx4 fl4Sample; // 2139
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 2140
				LoadSIMD<false>(const void* pIn); // 2139
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 2140
				LoadSIMD<false>(const void* pIn); // 2142
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 2143
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 2143
				LoadSIMD<false>(const void* pIn); // 2145
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 2146
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 2146
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 2149
				LoadSIMD<false>(const void* pIn); // 2148
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 2149
			}
		}
	}
	{
		fltx4 fl4Acc0; // 2162
		fltx4 fl4Acc1; // 2163
		fltx4 fl4Acc2; // 2164
		fltx4 fl4Acc3; // 2165
		{
			int nOfs; // 2168
			{
				int nTap; // 2181
				{
					int nTapOfs; // 2183
					int nOfs1; // 2185
					fltx4 fl4Sample; // 2187
					LoadSIMD<false>(const void* pIn); // 2187
					LoadSIMD<false>(const void* pIn); // 2188
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 2188
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 2189
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 2189
					LoadSIMD<false>(const void* pIn); // 2191
					LoadSIMD<false>(const void* pIn); // 2192
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 2192
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 2193
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 2193
					LoadSIMD<false>(const void* pIn); // 2195
					LoadSIMD<false>(const void* pIn); // 2196
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 2196
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 2197
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 2197
					LoadSIMD<false>(const void* pIn); // 2199
					LoadSIMD<false>(const void* pIn); // 2200
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 2200
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 2201
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 2201
				}
			}
			LoadSIMD<false>(const void* pIn); // 2169
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 2170
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 2173
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 2176
			LoadSIMD<false>(const void* pIn); // 2172
			LoadSIMD<false>(const void* pIn); // 2175
			LoadSIMD<false>(const void* pIn); // 2178
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 2179
		}
		{
			int nTap; // 2206
			{
				int nTapOfs; // 2208
				int nOfs; // 2209
				fltx4 fl4Sample; // 2211
			}
		}
	}
	{
		fltx4 fl4Acc0; // 2231
		fltx4 fl4Acc1; // 2232
		fltx4 fl4Acc2; // 2233
		fltx4 fl4Acc3; // 2234
		{
			int nTap; // 2235
			{
				int nYSrc; // 2237
				int nTapOfs; // 2238
				int nOfs; // 2239
				fltx4 fl4Sample; // 2240
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 2241
				LoadSIMD<false>(const void* pIn); // 2240
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 2241
				LoadSIMD<false>(const void* pIn); // 2243
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 2244
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 2244
				LoadSIMD<false>(const void* pIn); // 2246
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 2247
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 2247
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 2250
				LoadSIMD<false>(const void* pIn); // 2249
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 2250
			}
		}
	}
	StoreSIMD<false>(fltx4* pOut,
			const fltx4& fl4Value);  // 51
	StoreSIMD<false>(float* pOut,
			const fltx4& fl4Value);  // 2262
	StoreSIMD<false>(fltx4* pOut,
			const fltx4& fl4Value);  // 51
	StoreSIMD<false>(float* pOut,
			const fltx4& fl4Value);  // 2263
	StoreSIMD<false>(fltx4* pOut,
			const fltx4& fl4Value);  // 51
	StoreSIMD<false>(float* pOut,
			const fltx4& fl4Value);  // 2264
	StoreSIMD<false>(fltx4* pOut,
			const fltx4& fl4Value);  // 51
	StoreSIMD<false>(float* pOut,
			const fltx4& fl4Value);  // 2265
} /* size: 1080, variables: 6, inline expansions: 8 (60 bytes) */

// <044E660B> tier0_perproject/utlsoacontainer.cpp:2271
// variables: 25
// function calls: 63
void CSOAContainer::FilterInY(int nAttrMask, IntAABB_t bounds, int nFilterDim, const float* pFilterCoefficients, bool bUseThreads)
{
	fltx4 fl4FilterCoeffs; // 2295
	CArrayAutoPtr<__vector(4) float> fl4OutputBuffer; // 2296
	int nVerticalStride; // 2302
	bool bDoFourAtATime; // 2304
	{
		CCallQueue workList; // 2278
		{
			int nX; // 2279
			{
				IntAABB_t subBounds; // 2281
				CCallQueue::ResumeProcessing(); // 115
				_Function_base::_Function_base(); // 407
				function<void()>::operator bool()>* this); // 409
				function<void()>::function(
					function<void()>& __x); // 102
				CCallQueue::QueueCall(
						function<void()>& fnCall);  // 96
				function<void()>::operator()(const function<void()>* this); // 110
				CCallQueue::QueueCall(
						function<void()>& fnCall);  // 2284
				_Function_base::~_Function_base(); // 336
				function<void()>::~function()>* this); // 2284
				{
					_M_create<CSOAContainer::FilterInY(int, IntAABB_t, int, float const*, bool)::<lambda()> >(union _Any_data& __dest,
																class& __f,
																false_type); // 217
					_M_init_functor<CSOAContainer::FilterInY(int, IntAABB_t, int, float const*, bool)::<lambda()> >(union _Any_data& __functor,
																class& __f); // 451
					_M_not_empty_function<CSOAContainer::FilterInY(int, IntAABB_t, int, float const*, bool)::<lambda()> >(const &); // 449
				}
				_Function_base::_Function_base(); // 439
				function<void()>::function<CSOAContainer::FilterInY(
															class& __f); // 2284
			}
		}
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		CTSListBase::CTSListBase(); // 846
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		Node_t::Node_t(); // 864
		CTSQueue<std::function<void()>::End()>*, false>* this); // 865
		CTSQueue<std::function<void()>::CTSQueue()>*, false>* this); // 13
		CCallQueue::CCallQueue(); // 2278
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<std::function<void()>::FreeNode(
			Node_t* pNode); // 1103
		CTSQueue<std::function<void()>::PopItem(
			function<void()>** pResult); // 75
		_Function_base::~_Function_base(); // 336
		function<void()>::~function()>* this); // 77
		CCallQueue::ResumeProcessing(); // 80
		CCallQueue::Flush(); // 17
		CCallQueue::~CCallQueue(); // 2290
	}
	{
		int i; // 2297
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 2299
	}
	{
		CSOAAttributeIterator c; // 2305
		{
			int nZ; // 2309
			{
				float* pRowPtr; // 2311
				int nCount; // 2312
				{
					int nX; // 2315
					{
						float* pColPtr; // 2317
						CSOAContainer::NumRows(); // 2318
					}
				}
				{
					int nX; // 2323
					{
						float* pColPtr; // 2325
						Filter1DPrimitiveSIMDLeaf1<true, true, false>(const float* pInputPtr,
												float* pOutputPtr,
												int nCount,
												fltx4* pfl4Coeffs,
												int nMaxIndex,
												int nVerticalStrideInFloats,
												int nNeighborStrideInFloats,
												int nFilterDim,
												fltx4* pfl4OutputBuffer,
												fltx4 fl4MaskIfUsed);  // 2113
						Filter1DPrimitiveSIMDLeaf1<false, false, false>(const float* pInputPtr,
												float* pOutputPtr,
												int nCount,
												fltx4* pfl4Coeffs,
												int nMaxIndex,
												int nVerticalStrideInFloats,
												int nNeighborStrideInFloats,
												int nFilterDim,
												fltx4* pfl4OutputBuffer,
												fltx4 fl4MaskIfUsed);  // 2117
						Filter1DPrimitiveSIMD<>(const float* pInputPtr,
									float* pOutputPtr,
									int nCount,
									fltx4* pfl4Coeffs,
									int nMaxIndex,
									int nVerticalStrideInFloats,
									int nNeighborStrideInFloats,
									int nFilterDim,
									fltx4* pfl4OutputBuffer,
									fltx4 fl4MaskIfUsed);  // 2326
						CSOAContainer::NumRows(); // 2326
					}
				}
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 2311
				CSOAContainer::NumRows(); // 383
				CSOAContainer::Height(); // 2312
			}
		}
		CSOAAttributeIterator::CSOAAttributeIterator(); // 99
		{
			int i; // 102
			CSOAContainer::HasAllocatedMemory(
						int nAttrIdx);  // 104
		}
		CSOAContainer::FirstAttr(); // 2305
		CSOAAttributeIterator::operator bool(); // 2305
		{
			int i; // 1647
			CSOAContainer::HasAllocatedMemory(
						int nAttrIdx);  // 1649
		}
		CSOAAttributeIterator::Next(); // 231
		CSOAAttributeIterator::operator++(
				int);  // 2305
	}
	IntAABB_t::Height(); // 453
	IntAABB_t::Width(); // 453
	IntAABB_t::Depth(); // 453
	IntAABB_t::NumberOfCells(); // 2275
	CPlainAutoPtr<__vector(4) float>::CPlainAutoPtr(
			float* p); // 146
	CPlainAutoPtr<__vector(4) float>::Attach(
		float* p); // 146
	CArrayAutoPtr<__vector(4) float>::CArrayAutoPtr(
			int nNumElements); // 2296
	CSOAContainer::RowPtr<float>(
			int nAttributeIdx,
			int nRowNumber,
			int nSliceNumber);  // 2302
	CArrayAutoPtr<__vector(4) float>::Delete() float>* this); // 147
	CArrayAutoPtr<__vector(4) float>::~CArrayAutoPtr() float>* this); // 2332
} /* size: 2096, variables: 4, inline expansions: 10 (238 bytes) */

// <044E539E> tier0_perproject/utlsoacontainer.cpp:2336
// variables: 25
// function calls: 65
void CSOAContainer::FilterInZ(int nAttrMask, IntAABB_t bounds, int nFilterDim, const float* pFilterCoefficients, bool bUseThreads)
{
	fltx4 fl4FilterCoeffs; // 2360
	CArrayAutoPtr<__vector(4) float> fl4OutputBuffer; // 2361
	bool bDoFourAtATime; // 2367
	{
		CCallQueue workList; // 2343
		{
			int nX; // 2344
			{
				IntAABB_t subBounds; // 2346
				CCallQueue::ResumeProcessing(); // 115
				_Function_base::_Function_base(); // 407
				function<void()>::operator bool()>* this); // 409
				function<void()>::function(
					function<void()>& __x); // 102
				CCallQueue::QueueCall(
						function<void()>& fnCall);  // 96
				function<void()>::operator()(const function<void()>* this); // 110
				CCallQueue::QueueCall(
						function<void()>& fnCall);  // 2349
				_Function_base::~_Function_base(); // 336
				function<void()>::~function()>* this); // 2349
				{
					_M_create<CSOAContainer::FilterInZ(int, IntAABB_t, int, float const*, bool)::<lambda()> >(union _Any_data& __dest,
																class& __f,
																false_type); // 217
					_M_init_functor<CSOAContainer::FilterInZ(int, IntAABB_t, int, float const*, bool)::<lambda()> >(union _Any_data& __functor,
																class& __f); // 451
					_M_not_empty_function<CSOAContainer::FilterInZ(int, IntAABB_t, int, float const*, bool)::<lambda()> >(const &); // 449
				}
				_Function_base::_Function_base(); // 439
				function<void()>::function<CSOAContainer::FilterInZ(
															class& __f); // 2349
			}
		}
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		CTSListBase::CTSListBase(); // 846
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		Node_t::Node_t(); // 864
		CTSQueue<std::function<void()>::End()>*, false>* this); // 865
		CTSQueue<std::function<void()>::CTSQueue()>*, false>* this); // 13
		CCallQueue::CCallQueue(); // 2343
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<std::function<void()>::FreeNode(
			Node_t* pNode); // 1103
		CTSQueue<std::function<void()>::PopItem(
			function<void()>** pResult); // 75
		_Function_base::~_Function_base(); // 336
		function<void()>::~function()>* this); // 77
		CCallQueue::ResumeProcessing(); // 80
		CCallQueue::Flush(); // 17
		CCallQueue::~CCallQueue(); // 2355
	}
	{
		int i; // 2362
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 2364
	}
	{
		CSOAAttributeIterator c; // 2368
		{
			int nSliceStride; // 2372
			{
				int nY; // 2373
				{
					float* pRowPtr; // 2375
					int nCount; // 2376
					{
						int nX; // 2379
						{
							float* pColPtr; // 2381
							CSOAContainer::NumSlices(); // 2382
						}
					}
					{
						int nX; // 2387
						{
							float* pColPtr; // 2389
							Filter1DPrimitiveSIMDLeaf1<true, true, false>(const float* pInputPtr,
													float* pOutputPtr,
													int nCount,
													fltx4* pfl4Coeffs,
													int nMaxIndex,
													int nVerticalStrideInFloats,
													int nNeighborStrideInFloats,
													int nFilterDim,
													fltx4* pfl4OutputBuffer,
													fltx4 fl4MaskIfUsed);  // 2113
							Filter1DPrimitiveSIMDLeaf1<false, false, false>(const float* pInputPtr,
													float* pOutputPtr,
													int nCount,
													fltx4* pfl4Coeffs,
													int nMaxIndex,
													int nVerticalStrideInFloats,
													int nNeighborStrideInFloats,
													int nFilterDim,
													fltx4* pfl4OutputBuffer,
													fltx4 fl4MaskIfUsed);  // 2117
							Filter1DPrimitiveSIMD<>(const float* pInputPtr,
										float* pOutputPtr,
										int nCount,
										fltx4* pfl4Coeffs,
										int nMaxIndex,
										int nVerticalStrideInFloats,
										int nNeighborStrideInFloats,
										int nFilterDim,
										fltx4* pfl4OutputBuffer,
										fltx4 fl4MaskIfUsed);  // 2390
							CSOAContainer::NumSlices(); // 2390
						}
					}
					CSOAContainer::RowPtr<float>(
							int nAttributeIdx,
							int nRowNumber,
							int nSliceNumber);  // 2375
					CSOAContainer::NumSlices(); // 384
					CSOAContainer::Depth(); // 2376
				}
			}
			CSOAContainer::RowPtr<float>(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 2372
		}
		CSOAAttributeIterator::CSOAAttributeIterator(); // 99
		{
			int i; // 102
			CSOAContainer::HasAllocatedMemory(
						int nAttrIdx);  // 104
		}
		CSOAContainer::FirstAttr(); // 2368
		CSOAAttributeIterator::operator bool(); // 2368
		{
			int i; // 1647
			CSOAContainer::HasAllocatedMemory(
						int nAttrIdx);  // 1649
		}
		CSOAAttributeIterator::Next(); // 231
		CSOAAttributeIterator::operator++(
				int);  // 2368
	}
	IntAABB_t::Width(); // 453
	IntAABB_t::Depth(); // 453
	IntAABB_t::Height(); // 453
	IntAABB_t::NumberOfCells(); // 2340
	CSOAContainer::NumSlices(); // 384
	CSOAContainer::Depth(); // 2339
	CPlainAutoPtr<__vector(4) float>::CPlainAutoPtr(
			float* p); // 146
	CPlainAutoPtr<__vector(4) float>::Attach(
		float* p); // 146
	CArrayAutoPtr<__vector(4) float>::CArrayAutoPtr(
			int nNumElements); // 2361
	CArrayAutoPtr<__vector(4) float>::Delete() float>* this); // 147
	CArrayAutoPtr<__vector(4) float>::~CArrayAutoPtr() float>* this); // 2396
} /* size: 1957, variables: 3, inline expansions: 11 (289 bytes) */

// <044CC513> tier0_perproject/utlsoacontainer.cpp:2398
// variables: 32
// function calls: 23
void Filter1DHorizontal<true, false>(const float* pInputPtr, float* pOutputPtr, int nCount, const fltx4* pfl4Coeffs, int nMaxIndex, int nFilterDim, fltx4* pfl4OutputBuffer)
{
	int nY; // 2401
	int nHalfFilterWidth; // 2402
	int nLeadingAndTrailingRange; // 2403
	int nLimit; // 2422
	fltx4* pOut; // 2469
	{
		fltx4 fl4Acc; // 2408
		{
			int nTap; // 2409
			{
				fltx4 fl4Sample; // 2411
				{
					int nX; // 2412
					{
						int nXSrc; // 2414
					}
				}
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 2417
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 2417
			}
		}
	}
	{
		fltx4 fl4Acc; // 2427
		{
			int nTap; // 2432
			{
				int nTapOfs; // 2434
				fltx4 fl4Sample; // 2435
				{
					fltx4 retVal; // 947
					_mm_loadu_ps(const float* __P); // 948
				}
				LoadUnalignedSIMD<>(const void* pSIMD); // 27
				LoadSIMD<true>(const void* pIn); // 2435
				{
					fltx4 retVal; // 947
					_mm_loadu_ps(const float* __P); // 948
				}
				LoadUnalignedSIMD<>(const void* pSIMD); // 27
				LoadSIMD<true>(const void* pIn); // 2436
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 2436
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 2437
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 2437
			}
		}
		{
			int nTap; // 2442
			{
				int nTapOfs; // 2444
				fltx4 fl4Sample; // 2445
			}
		}
		LoadSIMD<false>(const void* pIn); // 2430
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 2431
	}
	{
		fltx4 fl4Acc; // 2455
		{
			int nTap; // 2456
			{
				fltx4 fl4Sample; // 2458
				{
					int nX; // 2459
					{
						int nXSrc; // 2461
					}
				}
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 2464
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 2464
			}
		}
	}
} /* size: 0, variables: 5 */

// <044E4D85> tier0_perproject/utlsoacontainer.cpp:2487
// variables: 4
// function calls: 24
void CSOAContainer::GetListOfActiveChannels(int nAttrMask)
{
	CUtlVector<int, CUtlMemory<int, int> > nRet; // 2489
	{
		CSOAAttributeIterator c; // 2490
		{
			int i; // 102
			CSOAContainer::HasAllocatedMemory(
						int nAttrIdx);  // 104
		}
		CSOAAttributeIterator::CSOAAttributeIterator(); // 99
		CSOAContainer::FirstAttr(); // 2490
		{
			int i; // 1647
			CSOAContainer::HasAllocatedMemory(
						int nAttrIdx);  // 1649
		}
		CSOAAttributeIterator::Next(); // 231
		CSOAAttributeIterator::operator++(
				int);  // 2490
		CUtlMemory<int, int>::NumAllocated(); // 1247
		CUtlMemory<int, int>::Base(); // 112
		CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
		CUtlMemory<int, int>::IsGrowable(); // 823
		CUtlMemory<int, int>::IsExternallyAllocated(); // 859
		CUtlMemory<int, int>::IsExternallyAllocated(); // 861
		CUtlMemory<int, int>::Grow(
			int num);  // 806
		CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
				int num);  // 1249
		CUtlMemory<int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
			int i);  // 1252
		Construct<int, int>(int* pMemory); // 1252
		CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
				int& src);  // 2494
	}
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 2489
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <044E4550> tier0_perproject/utlsoacontainer.cpp:2502
// variables: 15
// function calls: 21
void CSOAContainer::FilterInX(int nAttrMask, IntAABB_t bounds, int nFilterDim, const float* pFilterCoefficients, bool bUseThreads)
{
	CUtlVector<int, CUtlMemory<int, int> > nChannelsToProcess; // 2505
	fltx4 fl4FilterCoeffs; // 2510
	int nNumRows; // 2518
	int nNumSlices; // 2519
	int nIterationLimit; // 2521
	int nFlopsPerRow; // 2524
	int nNumStepsPerJob; // 2525
	int nNumJobs; // 2526
	bool bThreadIt; // 2529
	int nCount; // 2536
	const fltx4* pCoeffs; // 2537
	int nWidth; // 2538
	CInterlockedInt nJobCounter; // 2540
	{
		int i; // 2511
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 2513
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 2507
	IntAABB_t::Height(); // 2518
	IntAABB_t::Depth(); // 2519
	IntAABB_t::Width(); // 2524
	CInterlockedIntT<int, 4>::CInterlockedIntT(
			int value);  // 2540
	CParallelProcessLauncher::CParallelProcessLauncher(
				int nMaxThreads,
				const char* szDescription,
				IThreadPool* pThreadPool);  // 2541
	IMultipleWorkerJob::IMultipleWorkerJob(); // 627
	CParallelLambdaJob<CSOAContainer::FilterInX(int, IntAABB_t, int, float const::CParallelLambdaJob(
				const class& lambda);  // 648
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 624
	CParallelLambdaJob<CSOAContainer::FilterInX(int, IntAABB_t, int, float const::~CParallelLambdaJob()::<lambda(int)> >* this); // 650
	CParallelProcessLauncher::operator<< <CSOAContainer::FilterInX(
													const class& lambda);  // 2541
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 2560
} /* size: 0, variables: 13, inline expansions: 19 (0 bytes) */

// <044E4515> tier0_perproject/utlsoacontainer.cpp:2565
inline float LinInterp(float frac, float L, float R)
{
} /* size: 0 */

// <044E449B> tier0_perproject/utlsoacontainer.cpp:2571
// variables: 2
inline float BiLinInterp(float flFracX, float flFracY, float UL, float UR, float LL, float LR)
{
	float iu; // 2573
	float il; // 2574
} /* size: 0, variables: 2 */

// <044E43C4> tier0_perproject/utlsoacontainer.cpp:2579
// variables: 4
inline float TriLinInterp(float flFracX, float flFracY, float flFracZ, float ULN, float URN, float LLN, float LRN, float ULF, float URF, float LLF, float LRF)
{
	float iu; // 2582
	float il; // 2583
	float jn; // 2584
	float jf; // 2588
} /* size: 0, variables: 4 */

// <044E3F8E> tier0_perproject/utlsoacontainer.cpp:2593
// variables: 6
// function calls: 12
void CSOAContainer::InterpolatedPixel(float x, float y, int comp, bool bClamp)
{
	int nLeft; // 2595
	int nRight; // 2596
	int nTop; // 2597
	int nBot; // 2598
	float flFracX; // 2599
	float flFracY; // 2600
	CSOAContainer::NumCols(); // 2609
	CSOAContainer::NumRows(); // 2613
	CSOAContainer::RowPtr<float>(
			int nAttributeIdx,
			int nRowNumber,
			int nSliceNumber);  // 442
	CSOAContainer::FloatValue(
			int nAttrIdx,
			int nX,
			int nY,
			int nZ);  // 2650
	CSOAContainer::RowPtr<float>(
			int nAttributeIdx,
			int nRowNumber,
			int nSliceNumber);  // 442
	CSOAContainer::FloatValue(
			int nAttrIdx,
			int nX,
			int nY,
			int nZ);  // 2648
	CSOAContainer::FloatValue(
			int nAttrIdx,
			int nX,
			int nY,
			int nZ);  // 2649
	LinInterp(float frac,
			float L,
			float R);  // 2573
	LinInterp(float frac,
			float L,
			float R);  // 2574
	LinInterp(float frac,
			float L,
			float R);  // 2575
	BiLinInterp(float flFracX,
			float flFracY,
			float UL,
			float UR,
			float LL,
			float LR);  // 2646
	CSOAContainer::FloatValue(
			int nAttrIdx,
			int nX,
			int nY,
			int nZ);  // 2647
} /* size: 735, variables: 6, inline expansions: 12 (174 bytes) */

// <044E37A7> tier0_perproject/utlsoacontainer.cpp:2653
// variables: 9
// function calls: 23
void CSOAContainer::InterpolatedVoxel(float x, float y, float z, int comp)
{
	int nLeft; // 2659
	float flFracX; // 2660
	int nRight; // 2661
	int nTop; // 2663
	float flFracY; // 2664
	int nBot; // 2665
	int nNear; // 2667
	float flFracZ; // 2668
	int nFar; // 2669
	CSOAContainer::NumCols(); // 2661
	CSOAContainer::NumRows(); // 2665
	CSOAContainer::NumSlices(); // 2669
	CSOAContainer::RowPtr<float>(
			int nAttributeIdx,
			int nRowNumber,
			int nSliceNumber);  // 442
	CSOAContainer::FloatValue(
			int nAttrIdx,
			int nX,
			int nY,
			int nZ);  // 2679
	CSOAContainer::RowPtr<float>(
			int nAttributeIdx,
			int nRowNumber,
			int nSliceNumber);  // 442
	CSOAContainer::FloatValue(
			int nAttrIdx,
			int nX,
			int nY,
			int nZ);  // 2677
	CSOAContainer::FloatValue(
			int nAttrIdx,
			int nX,
			int nY,
			int nZ);  // 2678
	CSOAContainer::RowPtr<float>(
			int nAttributeIdx,
			int nRowNumber,
			int nSliceNumber);  // 442
	CSOAContainer::FloatValue(
			int nAttrIdx,
			int nX,
			int nY,
			int nZ);  // 2675
	CSOAContainer::FloatValue(
			int nAttrIdx,
			int nX,
			int nY,
			int nZ);  // 2676
	CSOAContainer::RowPtr<float>(
			int nAttributeIdx,
			int nRowNumber,
			int nSliceNumber);  // 442
	CSOAContainer::FloatValue(
			int nAttrIdx,
			int nX,
			int nY,
			int nZ);  // 2673
	CSOAContainer::FloatValue(
			int nAttrIdx,
			int nX,
			int nY,
			int nZ);  // 2674
	LinInterp(float frac,
			float L,
			float R);  // 2582
	LinInterp(float frac,
			float L,
			float R);  // 2583
	LinInterp(float frac,
			float L,
			float R);  // 2584
	LinInterp(float frac,
			float L,
			float R);  // 2586
	LinInterp(float frac,
			float L,
			float R);  // 2587
	LinInterp(float frac,
			float L,
			float R);  // 2588
	LinInterp(float frac,
			float L,
			float R);  // 2590
	TriLinInterp(float flFracX,
			float flFracY,
			float flFracZ,
			float ULN,
			float URN,
			float LLN,
			float LRN,
			float ULF,
			float URF,
			float LLF,
			float LRF);  // 2671
	CSOAContainer::FloatValue(
			int nAttrIdx,
			int nX,
			int nY,
			int nZ);  // 2672
} /* size: 0, variables: 9, inline expansions: 23 (0 bytes) */

// <044E33E4> tier0_perproject/utlsoacontainer.cpp:2683
// variables: 8
// function calls: 12
void CSOAContainer::CalculateBilinearWeights(float flX, float flY, WeightedSampleDescriptor_t* pWeightsOut, bool bClamp)
{
	int nX1; // 2687
	int nY1; // 2688
	float flFracX; // 2691
	float flFracY; // 2692
	{
		int nYOffset; // 2704
		{
			int nY; // 2706
			{
				int nXOffset; // 2708
				{
					int nX; // 2710
					Clamp<int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 1589
					Wrap(int x,
						int nLimit);  // 1098
					Wrap(int x,
						int nLimit);  // 1593
					WrapOrClamp(int nC,
							int nLimit,
							bool bClamp);  // 2710
					CSOAContainer::NumCols(); // 2710
				}
			}
			Clamp<int>(const int& val,
					const int& minVal,
					const int& maxVal);  // 1589
			Wrap(int x,
				int nLimit);  // 1098
			Wrap(int x,
				int nLimit);  // 1593
			WrapOrClamp(int nC,
					int nLimit,
					bool bClamp);  // 2706
			CSOAContainer::NumRows(); // 2706
		}
	}
	CSOAContainer::NumCols(); // 2685
	CSOAContainer::NumRows(); // 2686
} /* size: 0, variables: 4, inline expansions: 2 (0 bytes) */

// <044E3217> tier0_perproject/utlsoacontainer.cpp:2720
// variables: 3
// function calls: 2
void CSOAContainer::Tex2D(float flX, float flY, int nAttrIdx, bool bClamp)
{
	WeightedSampleDescriptor_t samples; // 2722
	float flResult; // 2725
	{
		int i; // 2726
		CSOAContainer::RowPtr<float>(
				int nAttributeIdx,
				int nRowNumber,
				int nSliceNumber);  // 442
		CSOAContainer::FloatValue(
				int nAttrIdx,
				int nX,
				int nY,
				int nZ);  // 2728
	}
} /* size: 0, variables: 2 */

// <044BCD34> tier0_perproject/utlsoacontainer.cpp:2734
inline int WrapCoord<true>(int nCoord, int nLimit)
{
} /* size: 0 */

// <044BCCF8> tier0_perproject/utlsoacontainer.cpp:2734
inline int WrapCoord<false>(int nCoord, int nLimit)
{
} /* size: 0 */

// <044CBED4> tier0_perproject/utlsoacontainer.cpp:2751
// variables: 19
// function calls: 8
void FindClosestMatchingRegionInternal<true, false>(int* pRetNumMatches, const WeightedComparisonDescriptor_t* pDescriptor, int nNumRecords, int nNumClosestMatchesToFind, IntVector3D* pAddressesOut, float* pDifferencesOut, int nMaskAttr, int nMinX, int nMaxX, int nMinY, int nMaxY, int nMinZ, int nMaxZ)
{
	const char   __FUNCTION__; // 6865
	int nNumValidResults; // 2758
	{
		int nZ; // 2759
		{
			int nY; // 2761
			{
				int nX; // 2763
				{
					float flError; // 2765
					bool bFoundInvalidPixel; // 2766
					{
						int i; // 2767
						{
							const CSOAContainer* pSrc; // 2769
							int nTestX; // 2770
							int nTestY; // 2771
							int nTestZ; // 2772
							float flDiff; // 2778
							WrapCoord<true>(int nCoord,
									int nLimit);  // 2770
							CSOAContainer::NumRows(); // 2771
							WrapCoord<true>(int nCoord,
									int nLimit);  // 2771
							CSOAContainer::NumSlices(); // 2772
							WrapCoord<true>(int nCoord,
									int nLimit);  // 2772
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 2778
							CSOAContainer::NumCols(); // 2770
						}
					}
					{
						int nSrc; // 2784
						int nNewNumResults; // 2786
						bool bAddedNew; // 2794
						{
							int nOut; // 2796
						}
					}
					{
						int i; // 2817
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2819
						}
					}
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <044CB9B0> tier0_perproject/utlsoacontainer.cpp:2751
// variables: 19
// function calls: 10
void FindClosestMatchingRegionInternal<true, true>(int* pRetNumMatches, const WeightedComparisonDescriptor_t* pDescriptor, int nNumRecords, int nNumClosestMatchesToFind, IntVector3D* pAddressesOut, float* pDifferencesOut, int nMaskAttr, int nMinX, int nMaxX, int nMinY, int nMaxY, int nMinZ, int nMaxZ)
{
	const char   __FUNCTION__; // 6865
	int nNumValidResults; // 2758
	{
		int nZ; // 2759
		{
			int nY; // 2761
			{
				int nX; // 2763
				{
					float flError; // 2765
					bool bFoundInvalidPixel; // 2766
					{
						int i; // 2767
						{
							const CSOAContainer* pSrc; // 2769
							int nTestX; // 2770
							int nTestY; // 2771
							int nTestZ; // 2772
							float flDiff; // 2778
							WrapCoord<true>(int nCoord,
									int nLimit);  // 2770
							CSOAContainer::NumRows(); // 2771
							WrapCoord<true>(int nCoord,
									int nLimit);  // 2771
							CSOAContainer::NumSlices(); // 2772
							WrapCoord<true>(int nCoord,
									int nLimit);  // 2772
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 2773
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 2778
							CSOAContainer::NumCols(); // 2770
						}
					}
					{
						int nSrc; // 2784
						int nNewNumResults; // 2786
						bool bAddedNew; // 2794
						{
							int nOut; // 2796
						}
					}
					{
						int i; // 2817
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2819
						}
					}
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <044CB65F> tier0_perproject/utlsoacontainer.cpp:2751
// variables: 19
// function calls: 2
void FindClosestMatchingRegionInternal<false, false>(int* pRetNumMatches, const WeightedComparisonDescriptor_t* pDescriptor, int nNumRecords, int nNumClosestMatchesToFind, IntVector3D* pAddressesOut, float* pDifferencesOut, int nMaskAttr, int nMinX, int nMaxX, int nMinY, int nMaxY, int nMinZ, int nMaxZ)
{
	const char   __FUNCTION__; // 6865
	int nNumValidResults; // 2758
	{
		int nZ; // 2759
		{
			int nY; // 2761
			{
				int nX; // 2763
				{
					float flError; // 2765
					bool bFoundInvalidPixel; // 2766
					{
						int i; // 2767
						{
							const CSOAContainer* pSrc; // 2769
							int nTestX; // 2770
							int nTestY; // 2771
							int nTestZ; // 2772
							float flDiff; // 2778
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 2778
						}
					}
					{
						int nSrc; // 2784
						int nNewNumResults; // 2786
						bool bAddedNew; // 2794
						{
							int nOut; // 2796
						}
					}
					{
						int i; // 2817
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2819
						}
					}
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <044CB220> tier0_perproject/utlsoacontainer.cpp:2751
// variables: 19
// function calls: 4
void FindClosestMatchingRegionInternal<false, true>(int* pRetNumMatches, const WeightedComparisonDescriptor_t* pDescriptor, int nNumRecords, int nNumClosestMatchesToFind, IntVector3D* pAddressesOut, float* pDifferencesOut, int nMaskAttr, int nMinX, int nMaxX, int nMinY, int nMaxY, int nMinZ, int nMaxZ)
{
	const char   __FUNCTION__; // 6865
	int nNumValidResults; // 2758
	{
		int nZ; // 2759
		{
			int nY; // 2761
			{
				int nX; // 2763
				{
					float flError; // 2765
					bool bFoundInvalidPixel; // 2766
					{
						int i; // 2767
						{
							const CSOAContainer* pSrc; // 2769
							int nTestX; // 2770
							int nTestY; // 2771
							int nTestZ; // 2772
							float flDiff; // 2778
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 2778
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 2773
						}
					}
					{
						int nSrc; // 2784
						int nNewNumResults; // 2786
						bool bAddedNew; // 2794
						{
							int nOut; // 2796
						}
					}
					{
						int i; // 2817
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2819
						}
					}
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <01B275E6> tier0_perproject/utlsoacontainer.cpp:2751
// variables: 19
// function calls: 8
void FindClosestMatchingRegionInternal<true, false>(int* pRetNumMatches, const WeightedComparisonDescriptor_t* pDescriptor, int nNumRecords, int nNumClosestMatchesToFind, IntVector3D* pAddressesOut, float* pDifferencesOut, int nMaskAttr, int nMinX, int nMaxX, int nMinY, int nMaxY, int nMinZ, int nMaxZ)
{
	const char   __FUNCTION__; // 47254
	int nNumValidResults; // 2758
	{
		int nZ; // 2759
		{
			int nY; // 2761
			{
				int nX; // 2763
				{
					float flError; // 2765
					bool bFoundInvalidPixel; // 2766
					{
						int i; // 2767
						{
							const CSOAContainer* pSrc; // 2769
							int nTestX; // 2770
							int nTestY; // 2771
							int nTestZ; // 2772
							float flDiff; // 2778
							WrapCoord<true>(int nCoord,
									int nLimit);  // 2770
							CSOAContainer::NumRows(); // 2771
							WrapCoord<true>(int nCoord,
									int nLimit);  // 2771
							CSOAContainer::NumSlices(); // 2772
							WrapCoord<true>(int nCoord,
									int nLimit);  // 2772
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 2778
							CSOAContainer::NumCols(); // 2770
						}
					}
					{
						int nSrc; // 2784
						int nNewNumResults; // 2786
						bool bAddedNew; // 2794
						{
							int nOut; // 2796
						}
					}
					{
						int i; // 2817
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2819
						}
					}
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <01B270C2> tier0_perproject/utlsoacontainer.cpp:2751
// variables: 19
// function calls: 10
void FindClosestMatchingRegionInternal<true, true>(int* pRetNumMatches, const WeightedComparisonDescriptor_t* pDescriptor, int nNumRecords, int nNumClosestMatchesToFind, IntVector3D* pAddressesOut, float* pDifferencesOut, int nMaskAttr, int nMinX, int nMaxX, int nMinY, int nMaxY, int nMinZ, int nMaxZ)
{
	const char   __FUNCTION__; // 47254
	int nNumValidResults; // 2758
	{
		int nZ; // 2759
		{
			int nY; // 2761
			{
				int nX; // 2763
				{
					float flError; // 2765
					bool bFoundInvalidPixel; // 2766
					{
						int i; // 2767
						{
							const CSOAContainer* pSrc; // 2769
							int nTestX; // 2770
							int nTestY; // 2771
							int nTestZ; // 2772
							float flDiff; // 2778
							WrapCoord<true>(int nCoord,
									int nLimit);  // 2770
							CSOAContainer::NumRows(); // 2771
							WrapCoord<true>(int nCoord,
									int nLimit);  // 2771
							CSOAContainer::NumSlices(); // 2772
							WrapCoord<true>(int nCoord,
									int nLimit);  // 2772
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 2773
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 2778
							CSOAContainer::NumCols(); // 2770
						}
					}
					{
						int nSrc; // 2784
						int nNewNumResults; // 2786
						bool bAddedNew; // 2794
						{
							int nOut; // 2796
						}
					}
					{
						int i; // 2817
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2819
						}
					}
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <01B26D71> tier0_perproject/utlsoacontainer.cpp:2751
// variables: 19
// function calls: 2
void FindClosestMatchingRegionInternal<false, false>(int* pRetNumMatches, const WeightedComparisonDescriptor_t* pDescriptor, int nNumRecords, int nNumClosestMatchesToFind, IntVector3D* pAddressesOut, float* pDifferencesOut, int nMaskAttr, int nMinX, int nMaxX, int nMinY, int nMaxY, int nMinZ, int nMaxZ)
{
	const char   __FUNCTION__; // 47254
	int nNumValidResults; // 2758
	{
		int nZ; // 2759
		{
			int nY; // 2761
			{
				int nX; // 2763
				{
					float flError; // 2765
					bool bFoundInvalidPixel; // 2766
					{
						int i; // 2767
						{
							const CSOAContainer* pSrc; // 2769
							int nTestX; // 2770
							int nTestY; // 2771
							int nTestZ; // 2772
							float flDiff; // 2778
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 2778
						}
					}
					{
						int nSrc; // 2784
						int nNewNumResults; // 2786
						bool bAddedNew; // 2794
						{
							int nOut; // 2796
						}
					}
					{
						int i; // 2817
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2819
						}
					}
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <01B26932> tier0_perproject/utlsoacontainer.cpp:2751
// variables: 19
// function calls: 4
void FindClosestMatchingRegionInternal<false, true>(int* pRetNumMatches, const WeightedComparisonDescriptor_t* pDescriptor, int nNumRecords, int nNumClosestMatchesToFind, IntVector3D* pAddressesOut, float* pDifferencesOut, int nMaskAttr, int nMinX, int nMaxX, int nMinY, int nMaxY, int nMinZ, int nMaxZ)
{
	const char   __FUNCTION__; // 47254
	int nNumValidResults; // 2758
	{
		int nZ; // 2759
		{
			int nY; // 2761
			{
				int nX; // 2763
				{
					float flError; // 2765
					bool bFoundInvalidPixel; // 2766
					{
						int i; // 2767
						{
							const CSOAContainer* pSrc; // 2769
							int nTestX; // 2770
							int nTestY; // 2771
							int nTestZ; // 2772
							float flDiff; // 2778
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 2778
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 2773
						}
					}
					{
						int nSrc; // 2784
						int nNewNumResults; // 2786
						bool bAddedNew; // 2794
						{
							int nOut; // 2796
						}
					}
					{
						int i; // 2817
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2819
						}
					}
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <009ACE49> tier0_perproject/utlsoacontainer.cpp:2751
// variables: 19
// function calls: 8
void FindClosestMatchingRegionInternal<true, false>(int* pRetNumMatches, const WeightedComparisonDescriptor_t* pDescriptor, int nNumRecords, int nNumClosestMatchesToFind, IntVector3D* pAddressesOut, float* pDifferencesOut, int nMaskAttr, int nMinX, int nMaxX, int nMinY, int nMaxY, int nMinZ, int nMaxZ)
{
	const char   __FUNCTION__; // 39974
	int nNumValidResults; // 2758
	{
		int nZ; // 2759
		{
			int nY; // 2761
			{
				int nX; // 2763
				{
					float flError; // 2765
					bool bFoundInvalidPixel; // 2766
					{
						int i; // 2767
						{
							const CSOAContainer* pSrc; // 2769
							int nTestX; // 2770
							int nTestY; // 2771
							int nTestZ; // 2772
							float flDiff; // 2778
							WrapCoord<true>(int nCoord,
									int nLimit);  // 2770
							CSOAContainer::NumRows(); // 2771
							WrapCoord<true>(int nCoord,
									int nLimit);  // 2771
							CSOAContainer::NumSlices(); // 2772
							WrapCoord<true>(int nCoord,
									int nLimit);  // 2772
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 2778
							CSOAContainer::NumCols(); // 2770
						}
					}
					{
						int nSrc; // 2784
						int nNewNumResults; // 2786
						bool bAddedNew; // 2794
						{
							int nOut; // 2796
						}
					}
					{
						int i; // 2817
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2819
						}
					}
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <009AC925> tier0_perproject/utlsoacontainer.cpp:2751
// variables: 19
// function calls: 10
void FindClosestMatchingRegionInternal<true, true>(int* pRetNumMatches, const WeightedComparisonDescriptor_t* pDescriptor, int nNumRecords, int nNumClosestMatchesToFind, IntVector3D* pAddressesOut, float* pDifferencesOut, int nMaskAttr, int nMinX, int nMaxX, int nMinY, int nMaxY, int nMinZ, int nMaxZ)
{
	const char   __FUNCTION__; // 39974
	int nNumValidResults; // 2758
	{
		int nZ; // 2759
		{
			int nY; // 2761
			{
				int nX; // 2763
				{
					float flError; // 2765
					bool bFoundInvalidPixel; // 2766
					{
						int i; // 2767
						{
							const CSOAContainer* pSrc; // 2769
							int nTestX; // 2770
							int nTestY; // 2771
							int nTestZ; // 2772
							float flDiff; // 2778
							WrapCoord<true>(int nCoord,
									int nLimit);  // 2770
							CSOAContainer::NumRows(); // 2771
							WrapCoord<true>(int nCoord,
									int nLimit);  // 2771
							CSOAContainer::NumSlices(); // 2772
							WrapCoord<true>(int nCoord,
									int nLimit);  // 2772
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 2773
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 2778
							CSOAContainer::NumCols(); // 2770
						}
					}
					{
						int nSrc; // 2784
						int nNewNumResults; // 2786
						bool bAddedNew; // 2794
						{
							int nOut; // 2796
						}
					}
					{
						int i; // 2817
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2819
						}
					}
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <009AC5D4> tier0_perproject/utlsoacontainer.cpp:2751
// variables: 19
// function calls: 2
void FindClosestMatchingRegionInternal<false, false>(int* pRetNumMatches, const WeightedComparisonDescriptor_t* pDescriptor, int nNumRecords, int nNumClosestMatchesToFind, IntVector3D* pAddressesOut, float* pDifferencesOut, int nMaskAttr, int nMinX, int nMaxX, int nMinY, int nMaxY, int nMinZ, int nMaxZ)
{
	const char   __FUNCTION__; // 39974
	int nNumValidResults; // 2758
	{
		int nZ; // 2759
		{
			int nY; // 2761
			{
				int nX; // 2763
				{
					float flError; // 2765
					bool bFoundInvalidPixel; // 2766
					{
						int i; // 2767
						{
							const CSOAContainer* pSrc; // 2769
							int nTestX; // 2770
							int nTestY; // 2771
							int nTestZ; // 2772
							float flDiff; // 2778
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 2778
						}
					}
					{
						int nSrc; // 2784
						int nNewNumResults; // 2786
						bool bAddedNew; // 2794
						{
							int nOut; // 2796
						}
					}
					{
						int i; // 2817
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2819
						}
					}
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <009AC195> tier0_perproject/utlsoacontainer.cpp:2751
// variables: 19
// function calls: 4
void FindClosestMatchingRegionInternal<false, true>(int* pRetNumMatches, const WeightedComparisonDescriptor_t* pDescriptor, int nNumRecords, int nNumClosestMatchesToFind, IntVector3D* pAddressesOut, float* pDifferencesOut, int nMaskAttr, int nMinX, int nMaxX, int nMinY, int nMaxY, int nMinZ, int nMaxZ)
{
	const char   __FUNCTION__; // 39974
	int nNumValidResults; // 2758
	{
		int nZ; // 2759
		{
			int nY; // 2761
			{
				int nX; // 2763
				{
					float flError; // 2765
					bool bFoundInvalidPixel; // 2766
					{
						int i; // 2767
						{
							const CSOAContainer* pSrc; // 2769
							int nTestX; // 2770
							int nTestY; // 2771
							int nTestZ; // 2772
							float flDiff; // 2778
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 2778
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 2773
						}
					}
					{
						int nSrc; // 2784
						int nNewNumResults; // 2786
						bool bAddedNew; // 2794
						{
							int nOut; // 2796
						}
					}
					{
						int i; // 2817
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2819
						}
					}
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <044E3193> tier0_perproject/utlsoacontainer.cpp:2828
// variable: 1
void CalculateSearchRanges(int& nStart, int& nEnd, int nSrcIndexCount, int nNumRecords, const WeightedComparisonDescriptor_t* pDescriptor, bool bWrap, int WeightedComparisonDescriptor_t::* pIndexMember)
{
	{
		int i; // 2838
	}
} /* size: 0 */

// <044E21F9> tier0_perproject/utlsoacontainer.cpp:2853
// variables: 34
// function calls: 42
void FindClosestMatchingRegion(const WeightedComparisonDescriptor_t* pDescriptor, int nNumRecords, int nNumClosestMatchesToFind, IntVector3D* pAddressesOut, float* pDifferencesOut, bool bWrap, int nMaskAttr)
{
	const CSOAContainer* pFirstSrc; // 2859
	int nStartX; // 2860
	int nEndX; // 2860
	int nStartY; // 2860
	int nEndY; // 2860
	int nStartZ; // 2860
	int nEndZ; // 2860
	const char   __FUNCTION__; // 6802
	void ()(int *, const WeightedComparisonDescriptor_t *, int, int, IntVector3D *, float *, int, int, int, int, int, int, int)* pFN; // 2872
	int nNumThreads; // 2897
	int nRet; // 2904
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2867
	}
	{
		uint64 nPixelsVisited; // 2900
	}
	{
		float* flTmpDiffs; // 2913
		IntVector3D* vecTmpLocations; // 2914
		int* nTmpNumResults; // 2915
		int* nTmpCurPos; // 2916
		int nYStep; // 2918
		CCallQueue workList; // 2919
		int nY; // 2920
		{
			int i; // 2921
			{
				int nNumToDo; // 2923
				CCallQueue::ResumeProcessing(); // 115
				_Function_base::_Function_base(); // 407
				function<void()>::operator bool()>* this); // 409
				function<void()>::function(
					function<void()>& __x); // 102
				CCallQueue::QueueCall(
						function<void()>& fnCall);  // 96
				function<void()>::operator()(const function<void()>* this); // 110
				CCallQueue::QueueCall(
						function<void()>& fnCall);  // 2931
				_Function_base::~_Function_base(); // 336
				function<void()>::~function()>* this); // 2931
				_Function_base::_Function_base(); // 439
				{
					_M_not_empty_function<CSOAContainer::FindClosestMatchingRegion(const WeightedComparisonDescriptor_t*, int, int, IntVector3D*, float*, bool, int)::<lambda()> >(const &); // 449
					_M_create<CSOAContainer::FindClosestMatchingRegion(const WeightedComparisonDescriptor_t*, int, int, IntVector3D*, float*, bool, int)::<lambda()> >(union _Any_data& __dest,
																class& __f,
																false_type); // 217
					_M_init_functor<CSOAContainer::FindClosestMatchingRegion(const WeightedComparisonDescriptor_t*, int, int, IntVector3D*, float*, bool, int)::<lambda()> >(union _Any_data& __functor,
																class& __f); // 451
				}
				function<void()>::function<CSOAContainer::FindClosestMatchingRegion(
																class& __f); // 2931
			}
		}
		{
			int i; // 2939
			{
				float flBestError; // 2941
				int nBestIdx; // 2942
				{
					int nCheck; // 2943
				}
			}
		}
		CTSListBase::CTSListBase(); // 846
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		Node_t::Node_t(); // 864
		CTSQueue<std::function<void()>::End()>*, false>* this); // 865
		CTSQueue<std::function<void()>::CTSQueue()>*, false>* this); // 13
		CCallQueue::CCallQueue(); // 2919
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<std::function<void()>::FreeNode(
			Node_t* pNode); // 1103
		CTSQueue<std::function<void()>::PopItem(
			function<void()>** pResult); // 75
		_Function_base::~_Function_base(); // 336
		function<void()>::~function()>* this); // 77
		CCallQueue::ResumeProcessing(); // 80
		CCallQueue::Flush(); // 17
		CCallQueue::~CCallQueue(); // 2959
	}
	{
		int nCheck; // 2960
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2962
		}
	}
	{
		int i; // 2838
	}
	CalculateSearchRanges(int& nStart,
				int& nEnd,
				int nSrcIndexCount,
				int nNumRecords,
				const WeightedComparisonDescriptor_t* pDescriptor,
				bool bWrap,
				int WeightedComparisonDescriptor_t::* pIndexMember);  // 2861
	CSOAContainer::NumCols(); // 2861
	{
		int i; // 2838
	}
	CalculateSearchRanges(int& nStart,
				int& nEnd,
				int nSrcIndexCount,
				int nNumRecords,
				const WeightedComparisonDescriptor_t* pDescriptor,
				bool bWrap,
				int WeightedComparisonDescriptor_t::* pIndexMember);  // 2863
	CSOAContainer::NumRows(); // 2863
	CSOAContainer::NumSlices(); // 2869
	{
		int i; // 2838
	}
	CalculateSearchRanges(int& nStart,
				int& nEnd,
				int nSrcIndexCount,
				int nNumRecords,
				const WeightedComparisonDescriptor_t* pDescriptor,
				bool bWrap,
				int WeightedComparisonDescriptor_t::* pIndexMember);  // 2869
} /* size: 0, variables: 11, inline expansions: 6 (0 bytes) */

// <01B3D90B> tier0_perproject/utlsoacontainer.cpp:2853
// variables: 34
// function calls: 42
void FindClosestMatchingRegion(const WeightedComparisonDescriptor_t* pDescriptor, int nNumRecords, int nNumClosestMatchesToFind, IntVector3D* pAddressesOut, float* pDifferencesOut, bool bWrap, int nMaskAttr)
{
	const CSOAContainer* pFirstSrc; // 2859
	int nStartX; // 2860
	int nEndX; // 2860
	int nStartY; // 2860
	int nEndY; // 2860
	int nStartZ; // 2860
	int nEndZ; // 2860
	const char   __FUNCTION__; // 47191
	void ()(int *, const WeightedComparisonDescriptor_t *, int, int, IntVector3D *, float *, int, int, int, int, int, int, int)* pFN; // 2872
	int nNumThreads; // 2897
	int nRet; // 2904
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2867
	}
	{
		uint64 nPixelsVisited; // 2900
	}
	{
		float* flTmpDiffs; // 2913
		IntVector3D* vecTmpLocations; // 2914
		int* nTmpNumResults; // 2915
		int* nTmpCurPos; // 2916
		int nYStep; // 2918
		CCallQueue workList; // 2919
		int nY; // 2920
		{
			int i; // 2921
			{
				int nNumToDo; // 2923
				CCallQueue::ResumeProcessing(); // 115
				_Function_base::_Function_base(); // 407
				function<void()>::operator bool()>* this); // 409
				function<void()>::function(
					function<void()>& __x); // 102
				CCallQueue::QueueCall(
						function<void()>& fnCall);  // 96
				function<void()>::operator()(const function<void()>* this); // 110
				CCallQueue::QueueCall(
						function<void()>& fnCall);  // 2931
				_Function_base::~_Function_base(); // 336
				function<void()>::~function()>* this); // 2931
				_Function_base::_Function_base(); // 439
				{
					_M_not_empty_function<CSOAContainer::FindClosestMatchingRegion(const WeightedComparisonDescriptor_t*, int, int, IntVector3D*, float*, bool, int)::<lambda()> >(const &); // 449
					_M_create<CSOAContainer::FindClosestMatchingRegion(const WeightedComparisonDescriptor_t*, int, int, IntVector3D*, float*, bool, int)::<lambda()> >(union _Any_data& __dest,
																class& __f,
																false_type); // 217
					_M_init_functor<CSOAContainer::FindClosestMatchingRegion(const WeightedComparisonDescriptor_t*, int, int, IntVector3D*, float*, bool, int)::<lambda()> >(union _Any_data& __functor,
																class& __f); // 451
				}
				function<void()>::function<CSOAContainer::FindClosestMatchingRegion(
																class& __f); // 2931
			}
		}
		{
			int i; // 2939
			{
				float flBestError; // 2941
				int nBestIdx; // 2942
				{
					int nCheck; // 2943
				}
			}
		}
		CTSListBase::CTSListBase(); // 846
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		Node_t::Node_t(); // 864
		CTSQueue<std::function<void()>::End()>*, false>* this); // 865
		CTSQueue<std::function<void()>::CTSQueue()>*, false>* this); // 13
		CCallQueue::CCallQueue(); // 2919
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<std::function<void()>::FreeNode(
			Node_t* pNode); // 1103
		CTSQueue<std::function<void()>::PopItem(
			function<void()>** pResult); // 75
		_Function_base::~_Function_base(); // 336
		function<void()>::~function()>* this); // 77
		CCallQueue::ResumeProcessing(); // 80
		CCallQueue::Flush(); // 17
		CCallQueue::~CCallQueue(); // 2959
	}
	{
		int nCheck; // 2960
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2962
		}
	}
	{
		int i; // 2838
	}
	CalculateSearchRanges(int& nStart,
				int& nEnd,
				int nSrcIndexCount,
				int nNumRecords,
				const WeightedComparisonDescriptor_t* pDescriptor,
				bool bWrap,
				int WeightedComparisonDescriptor_t::* pIndexMember);  // 2861
	CSOAContainer::NumCols(); // 2861
	{
		int i; // 2838
	}
	CalculateSearchRanges(int& nStart,
				int& nEnd,
				int nSrcIndexCount,
				int nNumRecords,
				const WeightedComparisonDescriptor_t* pDescriptor,
				bool bWrap,
				int WeightedComparisonDescriptor_t::* pIndexMember);  // 2863
	CSOAContainer::NumRows(); // 2863
	CSOAContainer::NumSlices(); // 2869
	{
		int i; // 2838
	}
	CalculateSearchRanges(int& nStart,
				int& nEnd,
				int nSrcIndexCount,
				int nNumRecords,
				const WeightedComparisonDescriptor_t* pDescriptor,
				bool bWrap,
				int WeightedComparisonDescriptor_t::* pIndexMember);  // 2869
} /* size: 0, variables: 11, inline expansions: 6 (0 bytes) */

// <009C316E> tier0_perproject/utlsoacontainer.cpp:2853
// variables: 34
// function calls: 42
void FindClosestMatchingRegion(const WeightedComparisonDescriptor_t* pDescriptor, int nNumRecords, int nNumClosestMatchesToFind, IntVector3D* pAddressesOut, float* pDifferencesOut, bool bWrap, int nMaskAttr)
{
	const CSOAContainer* pFirstSrc; // 2859
	int nStartX; // 2860
	int nEndX; // 2860
	int nStartY; // 2860
	int nEndY; // 2860
	int nStartZ; // 2860
	int nEndZ; // 2860
	const char   __FUNCTION__; // 39911
	void ()(int *, const WeightedComparisonDescriptor_t *, int, int, IntVector3D *, float *, int, int, int, int, int, int, int)* pFN; // 2872
	int nNumThreads; // 2897
	int nRet; // 2904
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2867
	}
	{
		uint64 nPixelsVisited; // 2900
	}
	{
		float* flTmpDiffs; // 2913
		IntVector3D* vecTmpLocations; // 2914
		int* nTmpNumResults; // 2915
		int* nTmpCurPos; // 2916
		int nYStep; // 2918
		CCallQueue workList; // 2919
		int nY; // 2920
		{
			int i; // 2921
			{
				int nNumToDo; // 2923
				CCallQueue::ResumeProcessing(); // 115
				_Function_base::_Function_base(); // 407
				function<void()>::operator bool()>* this); // 409
				function<void()>::function(
					function<void()>& __x); // 102
				CCallQueue::QueueCall(
						function<void()>& fnCall);  // 96
				function<void()>::operator()(const function<void()>* this); // 110
				CCallQueue::QueueCall(
						function<void()>& fnCall);  // 2931
				_Function_base::~_Function_base(); // 336
				function<void()>::~function()>* this); // 2931
				_Function_base::_Function_base(); // 439
				{
					_M_not_empty_function<CSOAContainer::FindClosestMatchingRegion(const WeightedComparisonDescriptor_t*, int, int, IntVector3D*, float*, bool, int)::<lambda()> >(const &); // 449
					_M_create<CSOAContainer::FindClosestMatchingRegion(const WeightedComparisonDescriptor_t*, int, int, IntVector3D*, float*, bool, int)::<lambda()> >(union _Any_data& __dest,
																class& __f,
																false_type); // 217
					_M_init_functor<CSOAContainer::FindClosestMatchingRegion(const WeightedComparisonDescriptor_t*, int, int, IntVector3D*, float*, bool, int)::<lambda()> >(union _Any_data& __functor,
																class& __f); // 451
				}
				function<void()>::function<CSOAContainer::FindClosestMatchingRegion(
																class& __f); // 2931
			}
		}
		{
			int i; // 2939
			{
				float flBestError; // 2941
				int nBestIdx; // 2942
				{
					int nCheck; // 2943
				}
			}
		}
		CTSListBase::CTSListBase(); // 846
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		Node_t::Node_t(); // 864
		CTSQueue<std::function<void()>::End()>*, false>* this); // 865
		CTSQueue<std::function<void()>::CTSQueue()>*, false>* this); // 13
		CCallQueue::CCallQueue(); // 2919
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<std::function<void()>::FreeNode(
			Node_t* pNode); // 1103
		CTSQueue<std::function<void()>::PopItem(
			function<void()>** pResult); // 75
		_Function_base::~_Function_base(); // 336
		function<void()>::~function()>* this); // 77
		CCallQueue::ResumeProcessing(); // 80
		CCallQueue::Flush(); // 17
		CCallQueue::~CCallQueue(); // 2959
	}
	{
		int nCheck; // 2960
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2962
		}
	}
	{
		int i; // 2838
	}
	CalculateSearchRanges(int& nStart,
				int& nEnd,
				int nSrcIndexCount,
				int nNumRecords,
				const WeightedComparisonDescriptor_t* pDescriptor,
				bool bWrap,
				int WeightedComparisonDescriptor_t::* pIndexMember);  // 2861
	CSOAContainer::NumCols(); // 2861
	{
		int i; // 2838
	}
	CalculateSearchRanges(int& nStart,
				int& nEnd,
				int nSrcIndexCount,
				int nNumRecords,
				const WeightedComparisonDescriptor_t* pDescriptor,
				bool bWrap,
				int WeightedComparisonDescriptor_t::* pIndexMember);  // 2863
	CSOAContainer::NumRows(); // 2863
	CSOAContainer::NumSlices(); // 2869
	{
		int i; // 2838
	}
	CalculateSearchRanges(int& nStart,
				int& nEnd,
				int nSrcIndexCount,
				int nNumRecords,
				const WeightedComparisonDescriptor_t* pDescriptor,
				bool bWrap,
				int WeightedComparisonDescriptor_t::* pIndexMember);  // 2869
} /* size: 0, variables: 11, inline expansions: 6 (0 bytes) */

// <044E1BC0> tier0_perproject/utlsoacontainer.cpp:2968
// variables: 20
// function calls: 22
float MeanSquaredError(const CSOAAttributeReference& a, const CSOAAttributeReference& b)
{
	const fltx4* pA; // 2973
	size_t nRowToRowStrideA; // 2974
	const fltx4* pB; // 2976
	size_t nRowToRowStrideB; // 2977
	fltx4 fl4SumSQ; // 2979
	int nRowCtr; // 2980
	int nTotal; // 2981
	float flTotalSum; // 2993
	{
		int nColCtr; // 2984
		{
			fltx4 fl4Diff; // 2987
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 2987
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 2988
		}
		CSOAContainer::NumQuadsPerRow(); // 2984
	}
	CSOAContainer::RowPtr<__vector(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 2973
	CSOAContainer::RowPtr<__vector(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 2976
	CSOAContainer::NumRows(); // 2980
	CSOAContainer::NumSlices(); // 2980
	CSOAContainer::NumCols(); // 2981
	{
		fltx4 fl4Product; // 1725
		fltx4 fl4YXWZ; // 1727
		fltx4 fl4UUVV; // 1729
		fltx4 fl4VVUU; // 1731
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1725
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1728
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1730
		{
			fltx4 retVal; // 373
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 374
		}
		RotateLeft2<>(const fltx4& a); // 1732
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1733
	}
	Dot4SIMD<>(const fltx4& a,
			const fltx4& b);  // 66
	SubFloat<>(const fltx4& a,
			int idx);  // 66
	SumOfSIMDFloats(const fltx4& a); // 2993
} /* size: 0, variables: 8, inline expansions: 8 (0 bytes) */

// <044E1A9D> tier0_perproject/utlsoacontainer.cpp:2999
void HeightmapSampleLocation_t::HeightmapSampleLocation_t()
{
} /* size: 0 */

// <044E1A80> tier0_perproject/utlsoacontainer.cpp:2999
inline void HeightmapSampleLocation_t::HeightmapSampleLocation_t()
{
} /* size: 0 */

// <044831A8> tier0_perproject/utlsoacontainer.cpp:2999
// member functions: 3
// member variables: 4
// struct size: 24
struct HeightmapSampleLocation_t {
	IntVector2D m_nEdgePoint1; /* 0 8 */
	IntVector2D m_nEdgePoint2; /* 8 8 */
	int m_nFirstRayBlockAffected; /* 16 4 */
	int m_nLastRayBlockAffected; /* 20 4 */
	/* tier0_perproject/utlsoacontainer.cpp:3006 */
	int64 PackedEdgeID(const HeightmapSampleLocation_t* );
	/* tier0_perproject/utlsoacontainer.cpp:3015 */
	bool operator<(const HeightmapSampleLocation_t* , const HeightmapSampleLocation_t& );
	void HeightmapSampleLocation_t(HeightmapSampleLocation_t* );
};

// <044E1BA7> tier0_perproject/utlsoacontainer.cpp:3006
inline void HeightmapSampleLocation_t::PackedEdgeID()
{
} /* size: 0 */

// <044E1B81> tier0_perproject/utlsoacontainer.cpp:3015
inline void HeightmapSampleLocation_t::operator<(const HeightmapSampleLocation_t& other)
{
} /* size: 0 */

// <044E1B5E> tier0_perproject/utlsoacontainer.cpp:3022
float Angle2D(Vector x)
{
} /* size: 0 */

// <044E1B14> tier0_perproject/utlsoacontainer.cpp:3028
// variables: 2
int RayDirectionSortFunction(const Vector* pA, const Vector* pB)
{
	float flA; // 3030
	float flB; // 3031
} /* size: 0, variables: 2 */

// <04503BBA> tier0_perproject/utlsoacontainer.cpp:3043
// function calls: 4
int HeightmapSampleLocationSortFunction(const HeightmapSampleLocation_t* pA, const HeightmapSampleLocation_t* pB)
{
	HeightmapSampleLocation_t::PackedEdgeID(); // 3017
	HeightmapSampleLocation_t::PackedEdgeID(); // 3017
	HeightmapSampleLocation_t::operator<(
			const HeightmapSampleLocation_t& other);  // 3045
	HeightmapSampleLocationSortFunction(const HeightmapSampleLocation_t* pA,
						const HeightmapSampleLocation_t* pB);  // 3043
} /* size: 0, inline expansions: 4 (0 bytes) */

// <044E1AE8> tier0_perproject/utlsoacontainer.cpp:3043
int HeightmapSampleLocationSortFunction(const HeightmapSampleLocation_t* pA, const HeightmapSampleLocation_t* pB)
{
} /* size: 0 */

// <044DF563> tier0_perproject/utlsoacontainer.cpp:3050
// variables: 40
// function calls: 145
void CSOAContainer::ComputeSelfShadowedBumpmapFromHeight(const CSOAContainer* pSrc, int nSrcAttr, Vector vScale, float flSharpness, const Vector* pTangentSpaceBasisVectors, int nNumChannelsToOutput, const int* pChannelsToOutput, int nNumRaysToTracePerPixel, bool bWrap)
{
	const char   __FUNCTION__; // 6928
	CUtlVector<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> > sampleEdgesTmp; // 3069
	CUtlVector<Vector, CUtlMemory<Vector, int> > vRayDirections; // 3089
	CUtlVector<FourVectors, CUtlMemory<FourVectors, int> > v4RayDirections; // 3097
	CUtlVector<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> > sampleEdges; // 3106
	fltx4* fl4RayIsBlocked; // 3131
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3061
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3062
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3063
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3064
	}
	{
		int y; // 3071
		{
			int x; // 3073
			{
				HeightmapSampleLocation_t nEdge; // 3075
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::GrowMemory(
						int num);  // 1198
				CUtlMemory<HeightmapSampleLocation_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::Element(
					int i);  // 1201
				CopyConstruct<HeightmapSampleLocation_t>(HeightmapSampleLocation_t* pMemory,
									const HeightmapSampleLocation_t& src);  // 1201
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::AddToTail(
						const HeightmapSampleLocation_t& src);  // 3080
				CUtlMemory<HeightmapSampleLocation_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::Element(
					int i);  // 1201
				CopyConstruct<HeightmapSampleLocation_t>(HeightmapSampleLocation_t* pMemory,
									const HeightmapSampleLocation_t& src);  // 1201
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::AddToTail(
						const HeightmapSampleLocation_t& src);  // 3082
				CUtlMemory<HeightmapSampleLocation_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::Element(
					int i);  // 1201
				CopyConstruct<HeightmapSampleLocation_t>(HeightmapSampleLocation_t* pMemory,
									const HeightmapSampleLocation_t& src);  // 1201
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::AddToTail(
						const HeightmapSampleLocation_t& src);  // 3084
				IntVector2D::IntVector2D(); // 2999
				IntVector2D::IntVector2D(); // 2999
				HeightmapSampleLocation_t::HeightmapSampleLocation_t(); // 3075
			}
			CSOAContainer::NumCols(); // 3073
			CSOAContainer::NumCols(); // 3073
		}
		CSOAContainer::NumRows(); // 3071
		CSOAContainer::NumRows(); // 3071
	}
	{
		int i; // 3090
		CopyConstruct<Vector>(Vector* pMemory,
					const Vector& src);  // 1201
		CUtlMemory<Vector, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
			int i);  // 1201
		CUtlMemory<Vector, int>::Grow(
			int num);  // 806
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
				const Vector& src);  // 3092
	}
	{
		int i; // 3099
		CUtlMemory<FourVectors, int>::operator[](
				int i);  // 588
		CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::operator[](
				int i);  // 3101
		SubFloat<>(fltx4& a,
				int idx);  // 273
		FourVectors::X(
			int idx);  // 294
		SubFloat<>(fltx4& a,
				int idx);  // 278
		FourVectors::Y(
			int idx);  // 295
		SubFloat<>(fltx4& a,
				int idx);  // 283
		FourVectors::Z(
			int idx);  // 296
		FourVectors::SetVec(
			const Vector& v,
			int nIdx);  // 3101
	}
	{
		int i; // 3107
		{
			Vector vEnd0; // 3113
			Vector vEnd1; // 3115
			int nMinRay; // 3117
			int nMaxRay; // 3118
			{
				int j; // 3120
				{
					int nIndex; // 3122
				}
			}
			CopyConstruct<HeightmapSampleLocation_t>(HeightmapSampleLocation_t* pMemory,
								const HeightmapSampleLocation_t& src);  // 1201
			CUtlMemory<HeightmapSampleLocation_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::Element(
				int i);  // 1201
			CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::AddToTail(
					const HeightmapSampleLocation_t& src);  // 3111
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 3113
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 3115
			CUtlMemory<HeightmapSampleLocation_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::operator[](
					int i);  // 3126
		}
		HeightmapSampleLocation_t::PackedEdgeID(); // 3109
		HeightmapSampleLocation_t::PackedEdgeID(); // 3109
	}
	{
		int y; // 3141
		{
			int x; // 3143
			{
				Vector vOurLocation; // 3145
				{
					int i; // 3148
					{
						int nX; // 3150
						int nY; // 3151
						Vector vEndPoint1; // 3152
						int nX2; // 3156
						int nY2; // 3157
						Vector vEndPoint2; // 3158
						FourVectors v4P0; // 3162
						FourVectors v4P1; // 3162
						{
							int r; // 3166
						}
					}
				}
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 3145
				memset(void* __dest,
					int __ch,
					size_t __len);  // 67
				V_memset(void* dest,
					int fill,
					size_t count);  // 3147
			}
			CSOAContainer::NumCols(); // 3143
		}
		CSOAContainer::NumRows(); // 3141
	}
	CSOAContainer::NumRows(); // 3062
	CSOAContainer::NumRows(); // 3062
	CSOAContainer::NumSlices(); // 3063
	CSOAContainer::NumSlices(); // 3064
	CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::ResetDbgInfo(); // 530
	CUtlMemory<HeightmapSampleLocation_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<HeightmapSampleLocation_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::CUtlVector(); // 3069
	CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::Count(); // 934
	{
		int i; // 949
		{
			int j; // 951
			HeightmapSampleLocation_t::PackedEdgeID(); // 3017
			HeightmapSampleLocation_t::PackedEdgeID(); // 3017
			HeightmapSampleLocation_t::operator<(
					const HeightmapSampleLocation_t& other);  // 3045
			HeightmapSampleLocationSortFunction(const HeightmapSampleLocation_t* pA,
								const HeightmapSampleLocation_t* pB);  // 953
			CUtlMemory<HeightmapSampleLocation_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::Element(
				int i);  // 953
			CUtlMemory<HeightmapSampleLocation_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::Element(
				int i);  // 953
			swap<HeightmapSampleLocation_t>(HeightmapSampleLocation_t& __a,
							HeightmapSampleLocation_t& __b);  // 19
			V_swap<HeightmapSampleLocation_t>(HeightmapSampleLocation_t& x,
								HeightmapSampleLocation_t& y);  // 955
		}
	}
	CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::Sort(
		int (*pfnCompare)(const HeightmapSampleLocation_t *, const HeightmapSampleLocation_t *));  // 3087
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 3089
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 934
	{
		int i; // 949
		{
			int j; // 951
			CUtlMemory<Vector, int>::operator[](
					int i);  // 602
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
				int i);  // 953
			Angle2D(Vector x); // 3030
			Angle2D(Vector x); // 3031
			RayDirectionSortFunction(const Vector* pA,
						const Vector* pB);  // 953
			CUtlMemory<Vector, int>::operator[](
					int i);  // 602
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
				int i);  // 953
			Vector::operator=(
					const Vector& vOther);  // 236
			Vector::operator=(
					const Vector& vOther);  // 237
			swap<Vector>(Vector& __a,
					Vector& __b);  // 19
			V_swap<Vector>(Vector& x,
					Vector& y);  // 955
		}
	}
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Sort(
		int (*pfnCompare)(const Vector *, const Vector *));  // 3095
	CUtlMemory<FourVectors, int>::ValidateGrowSize(); // 475
	CUtlMemory<FourVectors, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<FourVectors, CUtlMemory<FourVectors, int> >::CUtlVector(); // 3097
	CUtlMemory<FourVectors, int>::Grow(
		int num);  // 806
	CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
	}
	CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::SetCount(
		int count);  // 3098
	CUtlMemory<HeightmapSampleLocation_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<HeightmapSampleLocation_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::CUtlVector(); // 3106
	CUtlMemory<HeightmapSampleLocation_t, int>::Purge(); // 903
	CUtlMemory<HeightmapSampleLocation_t, int>::Purge(); // 1799
	CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::Purge(); // 560
	ValidateAlignment<HeightmapSampleLocation_t>(void); // 508
	CUtlMemory<HeightmapSampleLocation_t, int>::Purge(); // 510
	CUtlMemory<HeightmapSampleLocation_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::~CUtlVector(); // 3172
	CUtlMemory<FourVectors, int>::Purge(); // 903
	CUtlMemory<FourVectors, int>::Purge(); // 1799
	CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::Purge(); // 560
	ValidateAlignment<FourVectors>(void); // 508
	CUtlMemory<FourVectors, int>::Purge(); // 510
	CUtlMemory<FourVectors, int>::~CUtlMemory(); // 562
	CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::~CUtlVectorBase(); // 410
	CUtlVector<FourVectors, CUtlMemory<FourVectors, int> >::~CUtlVector(); // 3172
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 3172
	CUtlMemory<HeightmapSampleLocation_t, int>::Purge(); // 903
	CUtlMemory<HeightmapSampleLocation_t, int>::Purge(); // 1799
	CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::Purge(); // 560
	ValidateAlignment<HeightmapSampleLocation_t>(void); // 508
	CUtlMemory<HeightmapSampleLocation_t, int>::Purge(); // 510
	CUtlMemory<HeightmapSampleLocation_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::~CUtlVector(); // 3172
} /* size: 0, variables: 6, inline expansions: 67 (0 bytes) */

// <01B3AC75> tier0_perproject/utlsoacontainer.cpp:3050
// variables: 40
// function calls: 145
void CSOAContainer::ComputeSelfShadowedBumpmapFromHeight(const CSOAContainer* pSrc, int nSrcAttr, Vector vScale, float flSharpness, const Vector* pTangentSpaceBasisVectors, int nNumChannelsToOutput, const int* pChannelsToOutput, int nNumRaysToTracePerPixel, bool bWrap)
{
	const char   __FUNCTION__; // 47317
	CUtlVector<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> > sampleEdgesTmp; // 3069
	CUtlVector<Vector, CUtlMemory<Vector, int> > vRayDirections; // 3089
	CUtlVector<FourVectors, CUtlMemory<FourVectors, int> > v4RayDirections; // 3097
	CUtlVector<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> > sampleEdges; // 3106
	fltx4* fl4RayIsBlocked; // 3131
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3061
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3062
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3063
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3064
	}
	{
		int y; // 3071
		{
			int x; // 3073
			{
				HeightmapSampleLocation_t nEdge; // 3075
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::GrowMemory(
						int num);  // 1198
				CUtlMemory<HeightmapSampleLocation_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::Element(
					int i);  // 1201
				CopyConstruct<HeightmapSampleLocation_t>(HeightmapSampleLocation_t* pMemory,
									const HeightmapSampleLocation_t& src);  // 1201
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::AddToTail(
						const HeightmapSampleLocation_t& src);  // 3080
				CUtlMemory<HeightmapSampleLocation_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::Element(
					int i);  // 1201
				CopyConstruct<HeightmapSampleLocation_t>(HeightmapSampleLocation_t* pMemory,
									const HeightmapSampleLocation_t& src);  // 1201
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::AddToTail(
						const HeightmapSampleLocation_t& src);  // 3082
				CUtlMemory<HeightmapSampleLocation_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::Element(
					int i);  // 1201
				CopyConstruct<HeightmapSampleLocation_t>(HeightmapSampleLocation_t* pMemory,
									const HeightmapSampleLocation_t& src);  // 1201
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::AddToTail(
						const HeightmapSampleLocation_t& src);  // 3084
				IntVector2D::IntVector2D(); // 2999
				IntVector2D::IntVector2D(); // 2999
				HeightmapSampleLocation_t::HeightmapSampleLocation_t(); // 3075
			}
			CSOAContainer::NumCols(); // 3073
			CSOAContainer::NumCols(); // 3073
		}
		CSOAContainer::NumRows(); // 3071
		CSOAContainer::NumRows(); // 3071
	}
	{
		int i; // 3090
		CopyConstruct<Vector>(Vector* pMemory,
					const Vector& src);  // 1201
		CUtlMemory<Vector, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
			int i);  // 1201
		CUtlMemory<Vector, int>::Grow(
			int num);  // 806
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
				const Vector& src);  // 3092
	}
	{
		int i; // 3099
		CUtlMemory<FourVectors, int>::operator[](
				int i);  // 588
		CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::operator[](
				int i);  // 3101
		SubFloat<>(fltx4& a,
				int idx);  // 273
		FourVectors::X(
			int idx);  // 294
		SubFloat<>(fltx4& a,
				int idx);  // 278
		FourVectors::Y(
			int idx);  // 295
		SubFloat<>(fltx4& a,
				int idx);  // 283
		FourVectors::Z(
			int idx);  // 296
		FourVectors::SetVec(
			const Vector& v,
			int nIdx);  // 3101
	}
	{
		int i; // 3107
		{
			Vector vEnd0; // 3113
			Vector vEnd1; // 3115
			int nMinRay; // 3117
			int nMaxRay; // 3118
			{
				int j; // 3120
				{
					int nIndex; // 3122
				}
			}
			CopyConstruct<HeightmapSampleLocation_t>(HeightmapSampleLocation_t* pMemory,
								const HeightmapSampleLocation_t& src);  // 1201
			CUtlMemory<HeightmapSampleLocation_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::Element(
				int i);  // 1201
			CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::AddToTail(
					const HeightmapSampleLocation_t& src);  // 3111
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 3113
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 3115
			CUtlMemory<HeightmapSampleLocation_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::operator[](
					int i);  // 3126
		}
		HeightmapSampleLocation_t::PackedEdgeID(); // 3109
		HeightmapSampleLocation_t::PackedEdgeID(); // 3109
	}
	{
		int y; // 3141
		{
			int x; // 3143
			{
				Vector vOurLocation; // 3145
				{
					int i; // 3148
					{
						int nX; // 3150
						int nY; // 3151
						Vector vEndPoint1; // 3152
						int nX2; // 3156
						int nY2; // 3157
						Vector vEndPoint2; // 3158
						FourVectors v4P0; // 3162
						FourVectors v4P1; // 3162
						{
							int r; // 3166
						}
					}
				}
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 3145
				memset(void* __dest,
					int __ch,
					size_t __len);  // 67
				V_memset(void* dest,
					int fill,
					size_t count);  // 3147
			}
			CSOAContainer::NumCols(); // 3143
		}
		CSOAContainer::NumRows(); // 3141
	}
	CSOAContainer::NumRows(); // 3062
	CSOAContainer::NumRows(); // 3062
	CSOAContainer::NumSlices(); // 3063
	CSOAContainer::NumSlices(); // 3064
	CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::ResetDbgInfo(); // 530
	CUtlMemory<HeightmapSampleLocation_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<HeightmapSampleLocation_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::CUtlVector(); // 3069
	CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::Count(); // 934
	{
		int i; // 949
		{
			int j; // 951
			HeightmapSampleLocation_t::PackedEdgeID(); // 3017
			HeightmapSampleLocation_t::PackedEdgeID(); // 3017
			HeightmapSampleLocation_t::operator<(
					const HeightmapSampleLocation_t& other);  // 3045
			HeightmapSampleLocationSortFunction(const HeightmapSampleLocation_t* pA,
								const HeightmapSampleLocation_t* pB);  // 953
			CUtlMemory<HeightmapSampleLocation_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::Element(
				int i);  // 953
			CUtlMemory<HeightmapSampleLocation_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::Element(
				int i);  // 953
			swap<HeightmapSampleLocation_t>(HeightmapSampleLocation_t& __a,
							HeightmapSampleLocation_t& __b);  // 19
			V_swap<HeightmapSampleLocation_t>(HeightmapSampleLocation_t& x,
								HeightmapSampleLocation_t& y);  // 955
		}
	}
	CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::Sort(
		int (*pfnCompare)(const HeightmapSampleLocation_t *, const HeightmapSampleLocation_t *));  // 3087
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 3089
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 934
	{
		int i; // 949
		{
			int j; // 951
			CUtlMemory<Vector, int>::operator[](
					int i);  // 602
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
				int i);  // 953
			Angle2D(Vector x); // 3030
			Angle2D(Vector x); // 3031
			RayDirectionSortFunction(const Vector* pA,
						const Vector* pB);  // 953
			CUtlMemory<Vector, int>::operator[](
					int i);  // 602
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
				int i);  // 953
			Vector::operator=(
					const Vector& vOther);  // 236
			Vector::operator=(
					const Vector& vOther);  // 237
			swap<Vector>(Vector& __a,
					Vector& __b);  // 19
			V_swap<Vector>(Vector& x,
					Vector& y);  // 955
		}
	}
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Sort(
		int (*pfnCompare)(const Vector *, const Vector *));  // 3095
	CUtlMemory<FourVectors, int>::ValidateGrowSize(); // 475
	CUtlMemory<FourVectors, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<FourVectors, CUtlMemory<FourVectors, int> >::CUtlVector(); // 3097
	CUtlMemory<FourVectors, int>::Grow(
		int num);  // 806
	CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
	}
	CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::SetCount(
		int count);  // 3098
	CUtlMemory<HeightmapSampleLocation_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<HeightmapSampleLocation_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::CUtlVector(); // 3106
	CUtlMemory<HeightmapSampleLocation_t, int>::Purge(); // 903
	CUtlMemory<HeightmapSampleLocation_t, int>::Purge(); // 1799
	CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::Purge(); // 560
	ValidateAlignment<HeightmapSampleLocation_t>(void); // 508
	CUtlMemory<HeightmapSampleLocation_t, int>::Purge(); // 510
	CUtlMemory<HeightmapSampleLocation_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::~CUtlVector(); // 3172
	CUtlMemory<FourVectors, int>::Purge(); // 903
	CUtlMemory<FourVectors, int>::Purge(); // 1799
	CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::Purge(); // 560
	ValidateAlignment<FourVectors>(void); // 508
	CUtlMemory<FourVectors, int>::Purge(); // 510
	CUtlMemory<FourVectors, int>::~CUtlMemory(); // 562
	CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::~CUtlVectorBase(); // 410
	CUtlVector<FourVectors, CUtlMemory<FourVectors, int> >::~CUtlVector(); // 3172
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 3172
	CUtlMemory<HeightmapSampleLocation_t, int>::Purge(); // 903
	CUtlMemory<HeightmapSampleLocation_t, int>::Purge(); // 1799
	CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::Purge(); // 560
	ValidateAlignment<HeightmapSampleLocation_t>(void); // 508
	CUtlMemory<HeightmapSampleLocation_t, int>::Purge(); // 510
	CUtlMemory<HeightmapSampleLocation_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::~CUtlVector(); // 3172
} /* size: 0, variables: 6, inline expansions: 67 (0 bytes) */

// <009C04D8> tier0_perproject/utlsoacontainer.cpp:3050
// variables: 40
// function calls: 145
void CSOAContainer::ComputeSelfShadowedBumpmapFromHeight(const CSOAContainer* pSrc, int nSrcAttr, Vector vScale, float flSharpness, const Vector* pTangentSpaceBasisVectors, int nNumChannelsToOutput, const int* pChannelsToOutput, int nNumRaysToTracePerPixel, bool bWrap)
{
	const char   __FUNCTION__; // 40037
	CUtlVector<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> > sampleEdgesTmp; // 3069
	CUtlVector<Vector, CUtlMemory<Vector, int> > vRayDirections; // 3089
	CUtlVector<FourVectors, CUtlMemory<FourVectors, int> > v4RayDirections; // 3097
	CUtlVector<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> > sampleEdges; // 3106
	fltx4* fl4RayIsBlocked; // 3131
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3061
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3062
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3063
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3064
	}
	{
		int y; // 3071
		{
			int x; // 3073
			{
				HeightmapSampleLocation_t nEdge; // 3075
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::GrowMemory(
						int num);  // 1198
				CUtlMemory<HeightmapSampleLocation_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::Element(
					int i);  // 1201
				CopyConstruct<HeightmapSampleLocation_t>(HeightmapSampleLocation_t* pMemory,
									const HeightmapSampleLocation_t& src);  // 1201
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::AddToTail(
						const HeightmapSampleLocation_t& src);  // 3080
				CUtlMemory<HeightmapSampleLocation_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::Element(
					int i);  // 1201
				CopyConstruct<HeightmapSampleLocation_t>(HeightmapSampleLocation_t* pMemory,
									const HeightmapSampleLocation_t& src);  // 1201
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::AddToTail(
						const HeightmapSampleLocation_t& src);  // 3082
				CUtlMemory<HeightmapSampleLocation_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::Element(
					int i);  // 1201
				CopyConstruct<HeightmapSampleLocation_t>(HeightmapSampleLocation_t* pMemory,
									const HeightmapSampleLocation_t& src);  // 1201
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::AddToTail(
						const HeightmapSampleLocation_t& src);  // 3084
				IntVector2D::IntVector2D(); // 2999
				IntVector2D::IntVector2D(); // 2999
				HeightmapSampleLocation_t::HeightmapSampleLocation_t(); // 3075
			}
			CSOAContainer::NumCols(); // 3073
			CSOAContainer::NumCols(); // 3073
		}
		CSOAContainer::NumRows(); // 3071
		CSOAContainer::NumRows(); // 3071
	}
	{
		int i; // 3090
		CopyConstruct<Vector>(Vector* pMemory,
					const Vector& src);  // 1201
		CUtlMemory<Vector, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
			int i);  // 1201
		CUtlMemory<Vector, int>::Grow(
			int num);  // 806
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
				const Vector& src);  // 3092
	}
	{
		int i; // 3099
		CUtlMemory<FourVectors, int>::operator[](
				int i);  // 588
		CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::operator[](
				int i);  // 3101
		SubFloat<>(fltx4& a,
				int idx);  // 273
		FourVectors::X(
			int idx);  // 294
		SubFloat<>(fltx4& a,
				int idx);  // 278
		FourVectors::Y(
			int idx);  // 295
		SubFloat<>(fltx4& a,
				int idx);  // 283
		FourVectors::Z(
			int idx);  // 296
		FourVectors::SetVec(
			const Vector& v,
			int nIdx);  // 3101
	}
	{
		int i; // 3107
		{
			Vector vEnd0; // 3113
			Vector vEnd1; // 3115
			int nMinRay; // 3117
			int nMaxRay; // 3118
			{
				int j; // 3120
				{
					int nIndex; // 3122
				}
			}
			CopyConstruct<HeightmapSampleLocation_t>(HeightmapSampleLocation_t* pMemory,
								const HeightmapSampleLocation_t& src);  // 1201
			CUtlMemory<HeightmapSampleLocation_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::Element(
				int i);  // 1201
			CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::AddToTail(
					const HeightmapSampleLocation_t& src);  // 3111
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 3113
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 3115
			CUtlMemory<HeightmapSampleLocation_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::operator[](
					int i);  // 3126
		}
		HeightmapSampleLocation_t::PackedEdgeID(); // 3109
		HeightmapSampleLocation_t::PackedEdgeID(); // 3109
	}
	{
		int y; // 3141
		{
			int x; // 3143
			{
				Vector vOurLocation; // 3145
				{
					int i; // 3148
					{
						int nX; // 3150
						int nY; // 3151
						Vector vEndPoint1; // 3152
						int nX2; // 3156
						int nY2; // 3157
						Vector vEndPoint2; // 3158
						FourVectors v4P0; // 3162
						FourVectors v4P1; // 3162
						{
							int r; // 3166
						}
					}
				}
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 3145
				memset(void* __dest,
					int __ch,
					size_t __len);  // 67
				V_memset(void* dest,
					int fill,
					size_t count);  // 3147
			}
			CSOAContainer::NumCols(); // 3143
		}
		CSOAContainer::NumRows(); // 3141
	}
	CSOAContainer::NumRows(); // 3062
	CSOAContainer::NumRows(); // 3062
	CSOAContainer::NumSlices(); // 3063
	CSOAContainer::NumSlices(); // 3064
	CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::ResetDbgInfo(); // 530
	CUtlMemory<HeightmapSampleLocation_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<HeightmapSampleLocation_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::CUtlVector(); // 3069
	CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::Count(); // 934
	{
		int i; // 949
		{
			int j; // 951
			HeightmapSampleLocation_t::PackedEdgeID(); // 3017
			HeightmapSampleLocation_t::PackedEdgeID(); // 3017
			HeightmapSampleLocation_t::operator<(
					const HeightmapSampleLocation_t& other);  // 3045
			HeightmapSampleLocationSortFunction(const HeightmapSampleLocation_t* pA,
								const HeightmapSampleLocation_t* pB);  // 953
			CUtlMemory<HeightmapSampleLocation_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::Element(
				int i);  // 953
			CUtlMemory<HeightmapSampleLocation_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::Element(
				int i);  // 953
			swap<HeightmapSampleLocation_t>(HeightmapSampleLocation_t& __a,
							HeightmapSampleLocation_t& __b);  // 19
			V_swap<HeightmapSampleLocation_t>(HeightmapSampleLocation_t& x,
								HeightmapSampleLocation_t& y);  // 955
		}
	}
	CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::Sort(
		int (*pfnCompare)(const HeightmapSampleLocation_t *, const HeightmapSampleLocation_t *));  // 3087
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 3089
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 934
	{
		int i; // 949
		{
			int j; // 951
			CUtlMemory<Vector, int>::operator[](
					int i);  // 602
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
				int i);  // 953
			Angle2D(Vector x); // 3030
			Angle2D(Vector x); // 3031
			RayDirectionSortFunction(const Vector* pA,
						const Vector* pB);  // 953
			CUtlMemory<Vector, int>::operator[](
					int i);  // 602
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
				int i);  // 953
			Vector::operator=(
					const Vector& vOther);  // 236
			Vector::operator=(
					const Vector& vOther);  // 237
			swap<Vector>(Vector& __a,
					Vector& __b);  // 19
			V_swap<Vector>(Vector& x,
					Vector& y);  // 955
		}
	}
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Sort(
		int (*pfnCompare)(const Vector *, const Vector *));  // 3095
	CUtlMemory<FourVectors, int>::ValidateGrowSize(); // 475
	CUtlMemory<FourVectors, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<FourVectors, CUtlMemory<FourVectors, int> >::CUtlVector(); // 3097
	CUtlMemory<FourVectors, int>::Grow(
		int num);  // 806
	CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
	}
	CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::SetCount(
		int count);  // 3098
	CUtlMemory<HeightmapSampleLocation_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<HeightmapSampleLocation_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::CUtlVector(); // 3106
	CUtlMemory<HeightmapSampleLocation_t, int>::Purge(); // 903
	CUtlMemory<HeightmapSampleLocation_t, int>::Purge(); // 1799
	CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::Purge(); // 560
	ValidateAlignment<HeightmapSampleLocation_t>(void); // 508
	CUtlMemory<HeightmapSampleLocation_t, int>::Purge(); // 510
	CUtlMemory<HeightmapSampleLocation_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::~CUtlVector(); // 3172
	CUtlMemory<FourVectors, int>::Purge(); // 903
	CUtlMemory<FourVectors, int>::Purge(); // 1799
	CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::Purge(); // 560
	ValidateAlignment<FourVectors>(void); // 508
	CUtlMemory<FourVectors, int>::Purge(); // 510
	CUtlMemory<FourVectors, int>::~CUtlMemory(); // 562
	CUtlVectorBase<FourVectors, CUtlMemory<FourVectors, int> >::~CUtlVectorBase(); // 410
	CUtlVector<FourVectors, CUtlMemory<FourVectors, int> >::~CUtlVector(); // 3172
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 3172
	CUtlMemory<HeightmapSampleLocation_t, int>::Purge(); // 903
	CUtlMemory<HeightmapSampleLocation_t, int>::Purge(); // 1799
	CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::Purge(); // 560
	ValidateAlignment<HeightmapSampleLocation_t>(void); // 508
	CUtlMemory<HeightmapSampleLocation_t, int>::Purge(); // 510
	CUtlMemory<HeightmapSampleLocation_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<HeightmapSampleLocation_t, CUtlMemory<HeightmapSampleLocation_t, int> >::~CUtlVector(); // 3172
} /* size: 0, variables: 6, inline expansions: 67 (0 bytes) */

// <044AA2C6> tier0_perproject/utlsoacontainer.cpp:3175
// variables: 11
void FastSweepPassEikonal<true, true, false, float>(float* pData, float* pLockData, IntVector3D vStepStrides, IntVector3D vLoopCounts, float flGridSizeToDistanceScale, int nSupressFirstFetchMask)
{
	{
		int nZCount; // 3178
		{
			int nYCount; // 3180
			{
				float* pCur; // 3182
				float* pLockCur; // 3183
				float flLastD; // 3188
				{
					int nXCount; // 3194
					{
						float flCurDist; // 3198
						float d1; // 3199
						float d2; // 3200
						float d3; // 3201
						float d; // 3210
					}
				}
			}
		}
	}
} /* size: 0 */

// <044AA1A9> tier0_perproject/utlsoacontainer.cpp:3175
// variables: 11
void FastSweepPassEikonal<true, true, true, float>(float* pData, float* pLockData, IntVector3D vStepStrides, IntVector3D vLoopCounts, float flGridSizeToDistanceScale, int nSupressFirstFetchMask)
{
	{
		int nZCount; // 3178
		{
			int nYCount; // 3180
			{
				float* pCur; // 3182
				float* pLockCur; // 3183
				float flLastD; // 3188
				{
					int nXCount; // 3194
					{
						float flCurDist; // 3198
						float d1; // 3199
						float d2; // 3200
						float d3; // 3201
						float d; // 3210
					}
				}
			}
		}
	}
} /* size: 0 */

// <044AA08C> tier0_perproject/utlsoacontainer.cpp:3175
// variables: 11
void FastSweepPassEikonal<false, true, false, float>(float* pData, float* pLockData, IntVector3D vStepStrides, IntVector3D vLoopCounts, float flGridSizeToDistanceScale, int nSupressFirstFetchMask)
{
	{
		int nZCount; // 3178
		{
			int nYCount; // 3180
			{
				float* pCur; // 3182
				float* pLockCur; // 3183
				float flLastD; // 3188
				{
					int nXCount; // 3194
					{
						float flCurDist; // 3198
						float d1; // 3199
						float d2; // 3200
						float d3; // 3201
						float d; // 3210
					}
				}
			}
		}
	}
} /* size: 0 */

// <044A9C18> tier0_perproject/utlsoacontainer.cpp:3175
// variables: 11
void FastSweepPassEikonal<false, false, false, float>(float* pData, float* pLockData, IntVector3D vStepStrides, IntVector3D vLoopCounts, float flGridSizeToDistanceScale, int nSupressFirstFetchMask)
{
	{
		int nZCount; // 3178
		{
			int nYCount; // 3180
			{
				float* pCur; // 3182
				float* pLockCur; // 3183
				float flLastD; // 3188
				{
					int nXCount; // 3194
					{
						float flCurDist; // 3198
						float d1; // 3199
						float d2; // 3200
						float d3; // 3201
						float d; // 3210
					}
				}
			}
		}
	}
} /* size: 0 */

// <044CAC19> tier0_perproject/utlsoacontainer.cpp:3249
void FastSweepPassEikonalSIMD<(ESIMDLevel)40>(bool b2D, bool bSigned, float* pData, size_t nOfs1, size_t nOfs2, size_t nOfs3, IntVector3D vStepStrides, IntVector3D vLoopCounts, float flGridSizeToDistanceScale)
{
} /* size: 0 */

// <044CAB86> tier0_perproject/utlsoacontainer.cpp:3249
void FastSweepPassEikonalSIMD<(ESIMDLevel)20>(bool b2D, bool bSigned, float* pData, size_t nOfs1, size_t nOfs2, size_t nOfs3, IntVector3D vStepStrides, IntVector3D vLoopCounts, float flGridSizeToDistanceScale)
{
} /* size: 0 */

// <044BB2EB> tier0_perproject/utlsoacontainer.cpp:3277
// variables: 11
void FastSweepPassEikonalSIMD<true, true, (ESIMDLevel)40>(float* pData, size_t nOfs1, size_t nOfs2, size_t nOfs3, IntVector3D vStepStrides, IntVector3D vLoopCounts, float flGridSizeToDistanceScale)
{
	fltx4 fl4GridSizeToDistanceScale; // 3280
	{
		int nZCount; // 3281
		{
			int nYCount; // 3283
			{
				float* pCur; // 3285
				fltx4 fl4LastD; // 3287
				{
					int nXCount; // 3290
					{
						fltx4 fl4CurDist; // 3292
						fltx4 fl4d1; // 3293
						fltx4 fl4d2; // 3294
						fltx4 fl4d3; // 3295
						fltx4 fl4d; // 3298
					}
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <044BB1C5> tier0_perproject/utlsoacontainer.cpp:3277
// variables: 11
void FastSweepPassEikonalSIMD<true, false, (ESIMDLevel)40>(float* pData, size_t nOfs1, size_t nOfs2, size_t nOfs3, IntVector3D vStepStrides, IntVector3D vLoopCounts, float flGridSizeToDistanceScale)
{
	fltx4 fl4GridSizeToDistanceScale; // 3280
	{
		int nZCount; // 3281
		{
			int nYCount; // 3283
			{
				float* pCur; // 3285
				fltx4 fl4LastD; // 3287
				{
					int nXCount; // 3290
					{
						fltx4 fl4CurDist; // 3292
						fltx4 fl4d1; // 3293
						fltx4 fl4d2; // 3294
						fltx4 fl4d3; // 3295
						fltx4 fl4d; // 3298
					}
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <044BAF79> tier0_perproject/utlsoacontainer.cpp:3277
// variables: 11
void FastSweepPassEikonalSIMD<false, false, (ESIMDLevel)40>(float* pData, size_t nOfs1, size_t nOfs2, size_t nOfs3, IntVector3D vStepStrides, IntVector3D vLoopCounts, float flGridSizeToDistanceScale)
{
	fltx4 fl4GridSizeToDistanceScale; // 3280
	{
		int nZCount; // 3281
		{
			int nYCount; // 3283
			{
				float* pCur; // 3285
				fltx4 fl4LastD; // 3287
				{
					int nXCount; // 3290
					{
						fltx4 fl4CurDist; // 3292
						fltx4 fl4d1; // 3293
						fltx4 fl4d2; // 3294
						fltx4 fl4d3; // 3295
						fltx4 fl4d; // 3298
					}
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <044BAE53> tier0_perproject/utlsoacontainer.cpp:3277
// variables: 11
void FastSweepPassEikonalSIMD<true, true, (ESIMDLevel)20>(float* pData, size_t nOfs1, size_t nOfs2, size_t nOfs3, IntVector3D vStepStrides, IntVector3D vLoopCounts, float flGridSizeToDistanceScale)
{
	fltx4 fl4GridSizeToDistanceScale; // 3280
	{
		int nZCount; // 3281
		{
			int nYCount; // 3283
			{
				float* pCur; // 3285
				fltx4 fl4LastD; // 3287
				{
					int nXCount; // 3290
					{
						fltx4 fl4CurDist; // 3292
						fltx4 fl4d1; // 3293
						fltx4 fl4d2; // 3294
						fltx4 fl4d3; // 3295
						fltx4 fl4d; // 3298
					}
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <044BAD2D> tier0_perproject/utlsoacontainer.cpp:3277
// variables: 11
void FastSweepPassEikonalSIMD<true, false, (ESIMDLevel)20>(float* pData, size_t nOfs1, size_t nOfs2, size_t nOfs3, IntVector3D vStepStrides, IntVector3D vLoopCounts, float flGridSizeToDistanceScale)
{
	fltx4 fl4GridSizeToDistanceScale; // 3280
	{
		int nZCount; // 3281
		{
			int nYCount; // 3283
			{
				float* pCur; // 3285
				fltx4 fl4LastD; // 3287
				{
					int nXCount; // 3290
					{
						fltx4 fl4CurDist; // 3292
						fltx4 fl4d1; // 3293
						fltx4 fl4d2; // 3294
						fltx4 fl4d3; // 3295
						fltx4 fl4d; // 3298
					}
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <044BAAE1> tier0_perproject/utlsoacontainer.cpp:3277
// variables: 11
void FastSweepPassEikonalSIMD<false, false, (ESIMDLevel)20>(float* pData, size_t nOfs1, size_t nOfs2, size_t nOfs3, IntVector3D vStepStrides, IntVector3D vLoopCounts, float flGridSizeToDistanceScale)
{
	fltx4 fl4GridSizeToDistanceScale; // 3280
	{
		int nZCount; // 3281
		{
			int nYCount; // 3283
			{
				float* pCur; // 3285
				fltx4 fl4LastD; // 3287
				{
					int nXCount; // 3290
					{
						fltx4 fl4CurDist; // 3292
						fltx4 fl4d1; // 3293
						fltx4 fl4d2; // 3294
						fltx4 fl4d3; // 3295
						fltx4 fl4d; // 3298
					}
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <044DF3B2> tier0_perproject/utlsoacontainer.cpp:3328
void CEikonalExecuteControls::CEikonalExecuteControls()
{
} /* size: 0 */

// <044DF395> tier0_perproject/utlsoacontainer.cpp:3328
inline void CEikonalExecuteControls::CEikonalExecuteControls()
{
} /* size: 0 */

// <044877E6> tier0_perproject/utlsoacontainer.cpp:3328
// member functions: 10
// member variables: 6
// class size: 32
class CEikonalExecuteControls : public CExecuteControlsBase {
public:
	/* class CExecuteControlsBase <ancestor>; */ /* 0 0 */
	/* tier0_perproject/utlsoacontainer.cpp:3332 */
	IntVector3D GetBlockSize(IntAABB_t);
	/* tier0_perproject/utlsoacontainer.cpp:3346 */
	int ShouldDecompose(int, IntVector3D);
	bool m_bSigned; /* 0 1 */
	CSOAContainer * m_pContainer; /* 8 8 */
	int m_nAttr; /* 16 4 */
	int m_nLockAttr; /* 20 4 */
	float m_flGridSizeToDistanceScale; /* 24 4 */
	/* tier0_perproject/utlsoacontainer.cpp:3358 */
	void ExecuteOnBlock(CEikonalExecuteControls* , IntVector3D, int, const IntAABB_t& , IntVector3D, CFastSweepControllerBase* , int);
	/* tier0_perproject/utlsoacontainer.cpp:3384 */
	void ExecuteOn4Blocks(CEikonalExecuteControls* , IntVector3D, IntVector3D, IntVector3D, IntVector3D, int, const IntAABB_t& , IntVector3D, CFastSweepControllerBase* );
	void CEikonalExecuteControls(CEikonalExecuteControls* );
	class IntVector3D GetBlockSize(class IntAABB_t); /* linkage=_ZN23CEikonalExecuteControls12GetBlockSizeE9IntAABB_t */
	int ShouldDecompose(int, class IntVector3D); /* linkage=_ZN23CEikonalExecuteControls15ShouldDecomposeEi11IntVector3D */
	void ExecuteOnBlock(class CEikonalExecuteControls *, class IntVector3D, int, const class IntAABB_t  &, class IntVector3D, class CFastSweepControllerBase *, int); /* linkage=_ZN23CEikonalExecuteControls14ExecuteOnBlockE11IntVector3DiRK9IntAABB_tS0_P24CFastSweepControllerBasei */
	void ExecuteOn4Blocks(class CEikonalExecuteControls *, class IntVector3D, class IntVector3D, class IntVector3D, class IntVector3D, int, const class IntAABB_t  &, class IntVector3D, class CFastSweepControllerBase *); /* linkage=_ZN23CEikonalExecuteControls16ExecuteOn4BlocksE11IntVector3DS0_S0_S0_iRK9IntAABB_tS0_P24CFastSweepControllerBase */
	void CEikonalExecuteControls(class CEikonalExecuteControls *); /* linkage=_ZN23CEikonalExecuteControlsC4Ev */
};

// <044DF53E> tier0_perproject/utlsoacontainer.cpp:3332
// variable: 1
inline void GetBlockSize(IntAABB_t vBounds)
{
	IntVector3D vRet; // 3338
} /* size: 0, variables: 1 */

// <044DF519> tier0_perproject/utlsoacontainer.cpp:3346
inline void ShouldDecompose(int nNumBlocksInDecomposition, IntVector3D vBlockSize)
{
} /* size: 0 */

// <0450FD7E> tier0_perproject/utlsoacontainer.cpp:3358
// variables: 66
// function calls: 84
void CEikonalExecuteControls::ExecuteOnBlock(int nWhichSweep, const IntAABB_t& vBounds, IntVector3D vStart, int nBoundaryMask, CFastSweepControllerBase* pController, IntVector3D vBlockIndex)
{
	IntAABB_t::Height(); // 457
	IntAABB_t::Depth(); // 457
	IntAABB_t::Width(); // 457
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 457
	IntAABB_t::Size(); // 3364
	CSOAContainer::RowPtr<float>(
			int nAttributeIdx,
			int nRowNumber,
			int nSliceNumber);  // 442
	CSOAContainer::FloatValue(
			int nAttrIdx,
			int nX,
			int nY,
			int nZ);  // 446
	CSOAContainer::FloatValue(
			int nAttrIdx,
			IntVector3D vCoord);  // 3428
	CSOAContainer::NumQuadsPerRow(); // 3424
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 3427
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 3433
	{
		int nZCount; // 3178
		{
			int nYCount; // 3180
			{
				float* pCur; // 3182
				float* pLockCur; // 3183
				float flLastD; // 3188
				{
					int nXCount; // 3194
					{
						float flCurDist; // 3198
						float d1; // 3199
						float d2; // 3200
						float d3; // 3201
						float d; // 3210
						Swap<float>(float& a,
								float& b);  // 1247
						Square<float>(const float& a); // 1256
						UpWindDifferenceEstimate2D<true>(float d1,
										float d2,
										float H);  // 3213
					}
				}
			}
		}
	}
	FastSweepPassEikonal<true, true, false, float>(float* pData,
							float* pLockData,
							IntVector3D vStepStrides,
							IntVector3D vLoopCounts,
							float flGridSizeToDistanceScale,
							int nSupressFirstFetchMask);  // 3430
	CSOAContainer::FastSweepPass<true, true, false>(
					int nAttr,
					int nLockAttr,
					IntVector3D vStartPos,
					IntVector3D vStepDirections,
					IntVector3D vLoopCounts,
					float flGridSizeToDistanceScale,
					int nSupressFirstFetchMask);  // 583
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 3433
	CSOAContainer::RowPtr<float>(
			int nAttributeIdx,
			int nRowNumber,
			int nSliceNumber);  // 442
	CSOAContainer::FloatValue(
			int nAttrIdx,
			int nX,
			int nY,
			int nZ);  // 446
	CSOAContainer::FloatValue(
			int nAttrIdx,
			IntVector3D vCoord);  // 3432
	{
		int nZCount; // 3178
		{
			int nYCount; // 3180
			{
				float* pCur; // 3182
				float* pLockCur; // 3183
				float flLastD; // 3188
				{
					int nXCount; // 3194
					{
						float flCurDist; // 3198
						float d1; // 3199
						float d2; // 3200
						float d3; // 3201
						float d; // 3210
						Swap<float>(float& a,
								float& b);  // 1247
						Square<float>(const float& a); // 1256
						UpWindDifferenceEstimate2D<true>(float d1,
										float d2,
										float H);  // 3213
					}
				}
			}
		}
	}
	FastSweepPassEikonal<true, true, true, float>(float* pData,
							float* pLockData,
							IntVector3D vStepStrides,
							IntVector3D vLoopCounts,
							float flGridSizeToDistanceScale,
							int nSupressFirstFetchMask);  // 3430
	CSOAContainer::FastSweepPass<true, true, true>(
					int nAttr,
					int nLockAttr,
					IntVector3D vStartPos,
					IntVector3D vStepDirections,
					IntVector3D vLoopCounts,
					float flGridSizeToDistanceScale,
					int nSupressFirstFetchMask);  // 587
	CSOAContainer::FastSweepPass<true, true>(
					int nAttr,
					int nLockAttr,
					IntVector3D vStartPos,
					IntVector3D vStepDirections,
					IntVector3D vLoopCounts,
					float flGridSizeToDistanceScale,
					int nSupressFirstFetchMask);  // 3364
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 457
	IntAABB_t::Size(); // 3375
	CSOAContainer::RowPtr<float>(
			int nAttributeIdx,
			int nRowNumber,
			int nSliceNumber);  // 442
	CSOAContainer::FloatValue(
			int nAttrIdx,
			int nX,
			int nY,
			int nZ);  // 446
	CSOAContainer::FloatValue(
			int nAttrIdx,
			IntVector3D vCoord);  // 3428
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 3433
	{
		int nZCount; // 3178
		{
			int nYCount; // 3180
			{
				float* pCur; // 3182
				float* pLockCur; // 3183
				float flLastD; // 3188
				{
					int nXCount; // 3194
					{
						float flCurDist; // 3198
						float d1; // 3199
						float d2; // 3200
						float d3; // 3201
						float d; // 3210
						Swap<float>(float& a,
								float& b);  // 1247
						Square<float>(const float& a); // 1256
						UpWindDifferenceEstimate2D<false>(float d1,
											float d2,
											float H);  // 3213
					}
				}
			}
		}
	}
	FastSweepPassEikonal<true, false, false, float>(float* pData,
							float* pLockData,
							IntVector3D vStepStrides,
							IntVector3D vLoopCounts,
							float flGridSizeToDistanceScale,
							int nSupressFirstFetchMask);  // 3430
	CSOAContainer::FastSweepPass<true, false, false>(
						int nAttr,
						int nLockAttr,
						IntVector3D vStartPos,
						IntVector3D vStepDirections,
						IntVector3D vLoopCounts,
						float flGridSizeToDistanceScale,
						int nSupressFirstFetchMask);  // 583
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 3433
	CSOAContainer::RowPtr<float>(
			int nAttributeIdx,
			int nRowNumber,
			int nSliceNumber);  // 442
	CSOAContainer::FloatValue(
			int nAttrIdx,
			int nX,
			int nY,
			int nZ);  // 446
	CSOAContainer::FloatValue(
			int nAttrIdx,
			IntVector3D vCoord);  // 3432
	{
		int nZCount; // 3178
		{
			int nYCount; // 3180
			{
				float* pCur; // 3182
				float* pLockCur; // 3183
				float flLastD; // 3188
				{
					int nXCount; // 3194
					{
						float flCurDist; // 3198
						float d1; // 3199
						float d2; // 3200
						float d3; // 3201
						float d; // 3210
						Swap<float>(float& a,
								float& b);  // 1247
						Square<float>(const float& a); // 1256
						UpWindDifferenceEstimate2D<false>(float d1,
											float d2,
											float H);  // 3213
					}
				}
			}
		}
	}
	FastSweepPassEikonal<true, false, true, float>(float* pData,
							float* pLockData,
							IntVector3D vStepStrides,
							IntVector3D vLoopCounts,
							float flGridSizeToDistanceScale,
							int nSupressFirstFetchMask);  // 3430
	CSOAContainer::FastSweepPass<true, false, true>(
					int nAttr,
					int nLockAttr,
					IntVector3D vStartPos,
					IntVector3D vStepDirections,
					IntVector3D vLoopCounts,
					float flGridSizeToDistanceScale,
					int nSupressFirstFetchMask);  // 587
	CSOAContainer::FastSweepPass<true, false>(
					int nAttr,
					int nLockAttr,
					IntVector3D vStartPos,
					IntVector3D vStepDirections,
					IntVector3D vLoopCounts,
					float flGridSizeToDistanceScale,
					int nSupressFirstFetchMask);  // 3375
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 457
	IntAABB_t::Size(); // 3379
	CSOAContainer::NumQuadsPerRow(); // 3424
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 3427
	CSOAContainer::RowPtr<float>(
			int nAttributeIdx,
			int nRowNumber,
			int nSliceNumber);  // 442
	CSOAContainer::FloatValue(
			int nAttrIdx,
			int nX,
			int nY,
			int nZ);  // 446
	CSOAContainer::FloatValue(
			int nAttrIdx,
			IntVector3D vCoord);  // 3428
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 3433
	{
		int nZCount; // 3178
		{
			int nYCount; // 3180
			{
				float* pCur; // 3182
				float* pLockCur; // 3183
				float flLastD; // 3188
				{
					int nXCount; // 3194
					{
						float flCurDist; // 3198
						float d1; // 3199
						float d2; // 3200
						float d3; // 3201
						float d; // 3210
						Swap<float>(float& a,
								float& b);  // 1292
						Swap<float>(float& a,
								float& b);  // 1288
						Square<float>(const float& a); // 1303
						Square<float>(const float& a); // 1306
						Square<float>(const float& a); // 1306
						UpWindDifferenceEstimate3D<false>(float d1,
											float d2,
											float d3,
											float H);  // 3217
					}
				}
			}
		}
	}
	FastSweepPassEikonal<false, false, false, float>(float* pData,
							float* pLockData,
							IntVector3D vStepStrides,
							IntVector3D vLoopCounts,
							float flGridSizeToDistanceScale,
							int nSupressFirstFetchMask);  // 3430
	CSOAContainer::FastSweepPass<false, false, false>(
						int nAttr,
						int nLockAttr,
						IntVector3D vStartPos,
						IntVector3D vStepDirections,
						IntVector3D vLoopCounts,
						float flGridSizeToDistanceScale,
						int nSupressFirstFetchMask);  // 583
	CSOAContainer::FastSweepPass<false, false>(
					int nAttr,
					int nLockAttr,
					IntVector3D vStartPos,
					IntVector3D vStepDirections,
					IntVector3D vLoopCounts,
					float flGridSizeToDistanceScale,
					int nSupressFirstFetchMask);  // 3379
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 457
	IntAABB_t::Size(); // 3368
	CSOAContainer::NumQuadsPerRow(); // 3424
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 3427
	CSOAContainer::RowPtr<float>(
			int nAttributeIdx,
			int nRowNumber,
			int nSliceNumber);  // 442
	CSOAContainer::FloatValue(
			int nAttrIdx,
			int nX,
			int nY,
			int nZ);  // 446
	CSOAContainer::FloatValue(
			int nAttrIdx,
			IntVector3D vCoord);  // 3428
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 3433
	{
		int nZCount; // 3178
		{
			int nYCount; // 3180
			{
				float* pCur; // 3182
				float* pLockCur; // 3183
				float flLastD; // 3188
				{
					int nXCount; // 3194
					{
						float flCurDist; // 3198
						float d1; // 3199
						float d2; // 3200
						float d3; // 3201
						float d; // 3210
						Swap<float>(float& a,
								float& b);  // 1288
						Swap<float>(float& a,
								float& b);  // 1292
						Square<float>(const float& a); // 1303
						Square<float>(const float& a); // 1306
						Square<float>(const float& a); // 1306
						UpWindDifferenceEstimate3D<true>(float d1,
										float d2,
										float d3,
										float H);  // 3217
					}
				}
			}
		}
	}
	FastSweepPassEikonal<false, true, false, float>(float* pData,
							float* pLockData,
							IntVector3D vStepStrides,
							IntVector3D vLoopCounts,
							float flGridSizeToDistanceScale,
							int nSupressFirstFetchMask);  // 3430
	CSOAContainer::FastSweepPass<false, true, false>(
						int nAttr,
						int nLockAttr,
						IntVector3D vStartPos,
						IntVector3D vStepDirections,
						IntVector3D vLoopCounts,
						float flGridSizeToDistanceScale,
						int nSupressFirstFetchMask);  // 583
	CSOAContainer::FastSweepPass<false, true>(
					int nAttr,
					int nLockAttr,
					IntVector3D vStartPos,
					IntVector3D vStepDirections,
					IntVector3D vLoopCounts,
					float flGridSizeToDistanceScale,
					int nSupressFirstFetchMask);  // 3368
} /* size: 6566, inline expansions: 60 (19191 bytes) */

// <044DF4B2> tier0_perproject/utlsoacontainer.cpp:3358
inline void CEikonalExecuteControls::ExecuteOnBlock(IntVector3D vBlockIndex, int nWhichSweep, const IntAABB_t& vBounds, IntVector3D vStart, CFastSweepControllerBase* pController, int nBoundaryMask)
{
} /* size: 0 */

// <04503C8C> tier0_perproject/utlsoacontainer.cpp:3384
// variables: 572
// function calls: 727
void CEikonalExecuteControls::ExecuteOn4Blocks(int nWhichSweep, const IntAABB_t& vBounds, IntVector3D vStart, CFastSweepControllerBase* pController, IntVector3D vBlockIndex3, IntVector3D vBlockIndex2, IntVector3D vBlockIndex1, IntVector3D vBlockIndex0)
{
	IntVector3D vStepDirections; // 3387
	int nWStride; // 3389
	int nPrevYStride; // 3391
	int nPrevZStride; // 3392
	float* pData; // 3393
	int nStride1; // 3395
	int nStride2; // 3396
	int nStride3; // 3397
	CSOAContainer::NumQuadsPerRow(); // 3389
	CSOAContainer::RowPtr<float>(
			int nAttributeIdx,
			int nRowNumber,
			int nSliceNumber);  // 442
	CSOAContainer::FloatValue(
			int nAttrIdx,
			int nX,
			int nY,
			int nZ);  // 446
	CSOAContainer::FloatValue(
			int nAttrIdx,
			IntVector3D vCoord);  // 3393
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 3392
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<(ESIMDLevel)40>(float flValue); // 3280
	{
		int nZCount; // 3281
		{
			int nYCount; // 3283
			{
				float* pCur; // 3285
				fltx4 fl4LastD; // 3287
				{
					int nXCount; // 3290
					{
						fltx4 fl4CurDist; // 3292
						fltx4 fl4d1; // 3293
						fltx4 fl4d2; // 3294
						fltx4 fl4d3; // 3295
						fltx4 fl4d; // 3298
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1274
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1274
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 19
						SquareSIMD<(ESIMDLevel)40>(const fltx4& a); // 1274
						{
							fltx4 retVal; // 602
							_mm_load_ps(const float* __P); // 603
						}
						LoadAlignedSIMD<(ESIMDLevel)40>(const void* pSIMD); // 2267
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 2267
						fabs<(ESIMDLevel)40>(const fltx4& x); // 2272
						AbsSIMD<(ESIMDLevel)40>(const fltx4& val); // 1268
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1274
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 2267
						fabs<(ESIMDLevel)40>(const fltx4& x); // 2272
						AbsSIMD<(ESIMDLevel)40>(const fltx4& val); // 1269
						{
							fltx4 retVal; // 2200
							_mm_min_ps(__m128 __A,
									__m128 __B);  // 2201
						}
						MinSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1271
						{
							fltx4 retVal; // 2228
							_mm_max_ps(__m128 __A,
									__m128 __B);  // 2229
						}
						MaxSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1272
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1273
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1274
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 19
						SquareSIMD<(ESIMDLevel)40>(const fltx4& a); // 1274
						{
							fltx4 retVal; // 2350
							_mm_sqrt_ps(__m128 __A); // 2351
						}
						SqrtSIMD<(ESIMDLevel)40>(const fltx4& a); // 1274
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1274
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1274
						{
							fltx4 retVal; // 2067
							_mm_cmplt_ps(__m128 __A,
									__m128 __B);  // 2068
						}
						CmpLtSIMD<(ESIMDLevel)40>(const fltx4& a,
										const fltx4& b); // 1275
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1259
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1259
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1259
						MaskedAssign<(ESIMDLevel)40>(const fltx4& ReplacementMask,
										const fltx4& a,
										const fltx4& b); // 1275
						UpWindDifferenceEstimate2DSIMD<true, (ESIMDLevel)40>(fltx4 fl4D1,
													fltx4 fl4D2,
													fltx4 fl4H); // 3301
						{
							fltx4 retVal; // 152
							_mm_set_ps(const float  __Z,
									const float  __Y,
									const float  __X,
									const float  __W);  // 153
						}
						Load4Floats<(ESIMDLevel)40>(const float* p0,
										const float* p1,
										const float* p2,
										const float* p3); // 3292
						{
							fltx4 retVal; // 152
							_mm_set_ps(const float  __Z,
									const float  __Y,
									const float  __X,
									const float  __W);  // 153
						}
						Load4Floats<(ESIMDLevel)40>(const float* p0,
										const float* p1,
										const float* p2,
										const float* p3); // 3294
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 2267
						fabs<(ESIMDLevel)40>(const fltx4& x); // 2272
						AbsSIMD<(ESIMDLevel)40>(const fltx4& val); // 3309
						{
							fltx4 retVal; // 767
							_mm_andnot_ps(__m128 __A,
									__m128 __B);  // 768
						}
						AndNotSIMD<(ESIMDLevel)40>(const fltx4& a,
										const fltx4& b); // 3311
						{
							fltx4 retVal; // 2200
							_mm_min_ps(__m128 __A,
									__m128 __B);  // 2201
						}
						MinSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 3309
						{
							fltx4 retVal; // 602
							_mm_load_ps(const float* __P); // 603
						}
						LoadAlignedSIMD<(ESIMDLevel)40>(const void* pSIMD); // 3311
						{
							fltx4 retVal; // 875
							_mm_or_ps(__m128 __A,
									__m128 __B);  // 876
						}
						OrSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 3311
						{
							fltx4 fl4Val; // 556
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)40>(float* pSingleFloat,
												const fltx4& a); // 557
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)40>(float* pSingleFloat,
												const fltx4& a); // 560
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)40>(float* pSingleFloat,
												const fltx4& a); // 563
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)40>(float* pSingleFloat,
												const fltx4& a); // 566
						}
						Store4Floats<(ESIMDLevel)40>(const fltx4& a,
										float* p0,
										float* p1,
										float* p2,
										float* p3); // 3317
					}
				}
				{
					fltx4 retVal; // 152
					_mm_set_ps(const float  __Z,
							const float  __Y,
							const float  __X,
							const float  __W);  // 153
				}
				Load4Floats<(ESIMDLevel)40>(const float* p0,
								const float* p1,
								const float* p2,
								const float* p3); // 3287
			}
		}
	}
	FastSweepPassEikonalSIMD<true, true, (ESIMDLevel)40>(float* pData,
								size_t nOfs1,
								size_t nOfs2,
								size_t nOfs3,
								IntVector3D vStepStrides,
								IntVector3D vLoopCounts,
								float flGridSizeToDistanceScale); // 3256
	{
		int nZCount; // 3281
		{
			int nYCount; // 3283
			{
				float* pCur; // 3285
				fltx4 fl4LastD; // 3287
				{
					int nXCount; // 3290
					{
						fltx4 fl4CurDist; // 3292
						fltx4 fl4d1; // 3293
						fltx4 fl4d2; // 3294
						fltx4 fl4d3; // 3295
						fltx4 fl4d; // 3298
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1353
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1344
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1345
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1347
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 19
						SquareSIMD<>(const fltx4& a); // 1341
						{
							fltx4 retVal; // 602
							_mm_load_ps(const float* __P); // 603
						}
						LoadAlignedSIMD<(ESIMDLevel)40>(const void* pSIMD); // 2267
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 2267
						fabs<(ESIMDLevel)40>(const fltx4& x); // 2272
						AbsSIMD<(ESIMDLevel)40>(const fltx4& val); // 1318
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 2267
						fabs<(ESIMDLevel)40>(const fltx4& x); // 2272
						AbsSIMD<(ESIMDLevel)40>(const fltx4& val); // 1319
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 2267
						fabs<(ESIMDLevel)40>(const fltx4& x); // 2272
						AbsSIMD<(ESIMDLevel)40>(const fltx4& val); // 1320
						{
							fltx4 retVal; // 2228
							_mm_max_ps(__m128 __A,
									__m128 __B);  // 2229
						}
						MaxSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1329
						{
							fltx4 retVal; // 2228
							_mm_max_ps(__m128 __A,
									__m128 __B);  // 2229
						}
						MaxSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1324
						{
							fltx4 retVal; // 2200
							_mm_min_ps(__m128 __A,
									__m128 __B);  // 2201
						}
						MinSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1325
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1349
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1344
						{
							fltx4 retVal; // 2200
							_mm_min_ps(__m128 __A,
									__m128 __B);  // 2201
						}
						MinSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1330
						{
							fltx4 retVal; // 2228
							_mm_max_ps(__m128 __A,
									__m128 __B);  // 2229
						}
						MaxSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1334
						{
							fltx4 retVal; // 2200
							_mm_min_ps(__m128 __A,
									__m128 __B);  // 2201
						}
						MinSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1335
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1340
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1342
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1343
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1351
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1350
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 19
						SquareSIMD<>(const fltx4& a); // 1344
						{
							fltx4 retVal; // 2350
							_mm_sqrt_ps(__m128 __A); // 2351
						}
						SqrtSIMD<(ESIMDLevel)40>(const fltx4& a); // 1345
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 19
						SquareSIMD<(ESIMDLevel)40>(const fltx4& a); // 1350
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 19
						SquareSIMD<(ESIMDLevel)40>(const fltx4& a); // 1351
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1350
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1345
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1351
						{
							fltx4 retVal; // 2350
							_mm_sqrt_ps(__m128 __A); // 2351
						}
						SqrtSIMD<(ESIMDLevel)40>(const fltx4& a); // 1352
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1346
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1259
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1259
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1259
						MaskedAssign<(ESIMDLevel)40>(const fltx4& ReplacementMask,
										const fltx4& a,
										const fltx4& b); // 1357
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1352
						{
							fltx4 retVal; // 2067
							_mm_cmplt_ps(__m128 __A,
									__m128 __B);  // 2068
						}
						CmpLtSIMD<>(const fltx4& a,
								const fltx4& b);  // 1356
						{
							fltx4 retVal; // 2067
							_mm_cmplt_ps(__m128 __A,
									__m128 __B);  // 2068
						}
						CmpLtSIMD<>(const fltx4& a,
								const fltx4& b);  // 1358
						{
							fltx4 retVal; // 875
							_mm_or_ps(__m128 __A,
									__m128 __B);  // 876
						}
						OrSIMD<>(const fltx4& a,
							const fltx4& b);  // 1358
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1259
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1259
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1259
						MaskedAssign<(ESIMDLevel)40>(const fltx4& ReplacementMask,
										const fltx4& a,
										const fltx4& b); // 1359
						UpWindDifferenceEstimate3DSIMD<true, (ESIMDLevel)40>(fltx4 fl4D1,
													fltx4 fl4D2,
													fltx4 fl4D3,
													const fltx4& fl4H); // 3305
						{
							fltx4 retVal; // 152
							_mm_set_ps(const float  __Z,
									const float  __Y,
									const float  __X,
									const float  __W);  // 153
						}
						Load4Floats<(ESIMDLevel)40>(const float* p0,
										const float* p1,
										const float* p2,
										const float* p3); // 3292
						{
							fltx4 retVal; // 152
							_mm_set_ps(const float  __Z,
									const float  __Y,
									const float  __X,
									const float  __W);  // 153
						}
						Load4Floats<(ESIMDLevel)40>(const float* p0,
										const float* p1,
										const float* p2,
										const float* p3); // 3294
						{
							fltx4 retVal; // 152
							_mm_set_ps(const float  __Z,
									const float  __Y,
									const float  __X,
									const float  __W);  // 153
						}
						Load4Floats<(ESIMDLevel)40>(const float* p0,
										const float* p1,
										const float* p2,
										const float* p3); // 3297
						{
							fltx4 retVal; // 767
							_mm_andnot_ps(__m128 __A,
									__m128 __B);  // 768
						}
						AndNotSIMD<(ESIMDLevel)40>(const fltx4& a,
										const fltx4& b); // 3311
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 2267
						fabs<(ESIMDLevel)40>(const fltx4& x); // 2272
						AbsSIMD<(ESIMDLevel)40>(const fltx4& val); // 3309
						{
							fltx4 fl4Val; // 556
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)40>(float* pSingleFloat,
												const fltx4& a); // 566
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)40>(float* pSingleFloat,
												const fltx4& a); // 560
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)40>(float* pSingleFloat,
												const fltx4& a); // 557
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)40>(float* pSingleFloat,
												const fltx4& a); // 563
						}
						Store4Floats<(ESIMDLevel)40>(const fltx4& a,
										float* p0,
										float* p1,
										float* p2,
										float* p3); // 3317
						{
							fltx4 retVal; // 2200
							_mm_min_ps(__m128 __A,
									__m128 __B);  // 2201
						}
						MinSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 3309
						{
							fltx4 retVal; // 602
							_mm_load_ps(const float* __P); // 603
						}
						LoadAlignedSIMD<(ESIMDLevel)40>(const void* pSIMD); // 3311
						{
							fltx4 retVal; // 875
							_mm_or_ps(__m128 __A,
									__m128 __B);  // 876
						}
						OrSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 3311
					}
				}
				{
					fltx4 retVal; // 152
					_mm_set_ps(const float  __Z,
							const float  __Y,
							const float  __X,
							const float  __W);  // 153
				}
				Load4Floats<(ESIMDLevel)40>(const float* p0,
								const float* p1,
								const float* p2,
								const float* p3); // 3287
			}
		}
	}
	FastSweepPassEikonalSIMD<false, true, (ESIMDLevel)40>(float* pData,
								size_t nOfs1,
								size_t nOfs2,
								size_t nOfs3,
								IntVector3D vStepStrides,
								IntVector3D vLoopCounts,
								float flGridSizeToDistanceScale); // 3267
	{
		int nZCount; // 3281
		{
			int nYCount; // 3283
			{
				float* pCur; // 3285
				fltx4 fl4LastD; // 3287
				{
					int nXCount; // 3290
					{
						fltx4 fl4CurDist; // 3292
						fltx4 fl4d1; // 3293
						fltx4 fl4d2; // 3294
						fltx4 fl4d3; // 3295
						fltx4 fl4d; // 3298
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1274
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1274
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 19
						SquareSIMD<(ESIMDLevel)40>(const fltx4& a); // 1274
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1274
						{
							fltx4 retVal; // 2200
							_mm_min_ps(__m128 __A,
									__m128 __B);  // 2201
						}
						MinSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1271
						{
							fltx4 retVal; // 2228
							_mm_max_ps(__m128 __A,
									__m128 __B);  // 2229
						}
						MaxSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1272
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1273
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1274
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 19
						SquareSIMD<(ESIMDLevel)40>(const fltx4& a); // 1274
						{
							fltx4 retVal; // 2350
							_mm_sqrt_ps(__m128 __A); // 2351
						}
						SqrtSIMD<(ESIMDLevel)40>(const fltx4& a); // 1274
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1274
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1274
						{
							fltx4 retVal; // 2067
							_mm_cmplt_ps(__m128 __A,
									__m128 __B);  // 2068
						}
						CmpLtSIMD<(ESIMDLevel)40>(const fltx4& a,
										const fltx4& b); // 1275
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1259
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1259
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1259
						MaskedAssign<(ESIMDLevel)40>(const fltx4& ReplacementMask,
										const fltx4& a,
										const fltx4& b); // 1275
						UpWindDifferenceEstimate2DSIMD<false, (ESIMDLevel)40>(fltx4 fl4D1,
													fltx4 fl4D2,
													fltx4 fl4H); // 3301
						{
							fltx4 retVal; // 152
							_mm_set_ps(const float  __Z,
									const float  __Y,
									const float  __X,
									const float  __W);  // 153
						}
						Load4Floats<(ESIMDLevel)40>(const float* p0,
										const float* p1,
										const float* p2,
										const float* p3); // 3292
						{
							fltx4 retVal; // 152
							_mm_set_ps(const float  __Z,
									const float  __Y,
									const float  __X,
									const float  __W);  // 153
						}
						Load4Floats<(ESIMDLevel)40>(const float* p0,
										const float* p1,
										const float* p2,
										const float* p3); // 3294
						{
							fltx4 retVal; // 2200
							_mm_min_ps(__m128 __A,
									__m128 __B);  // 2201
						}
						MinSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 3315
						{
							fltx4 fl4Val; // 556
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)40>(float* pSingleFloat,
												const fltx4& a); // 560
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)40>(float* pSingleFloat,
												const fltx4& a); // 557
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)40>(float* pSingleFloat,
												const fltx4& a); // 563
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)40>(float* pSingleFloat,
												const fltx4& a); // 566
						}
						Store4Floats<(ESIMDLevel)40>(const fltx4& a,
										float* p0,
										float* p1,
										float* p2,
										float* p3); // 3317
					}
				}
				{
					fltx4 retVal; // 152
					_mm_set_ps(const float  __Z,
							const float  __Y,
							const float  __X,
							const float  __W);  // 153
				}
				Load4Floats<(ESIMDLevel)40>(const float* p0,
								const float* p1,
								const float* p2,
								const float* p3); // 3287
			}
		}
	}
	FastSweepPassEikonalSIMD<true, false, (ESIMDLevel)40>(float* pData,
								size_t nOfs1,
								size_t nOfs2,
								size_t nOfs3,
								IntVector3D vStepStrides,
								IntVector3D vLoopCounts,
								float flGridSizeToDistanceScale); // 3260
	{
		int nZCount; // 3281
		{
			int nYCount; // 3283
			{
				float* pCur; // 3285
				fltx4 fl4LastD; // 3287
				{
					int nXCount; // 3290
					{
						fltx4 fl4CurDist; // 3292
						fltx4 fl4d1; // 3293
						fltx4 fl4d2; // 3294
						fltx4 fl4d3; // 3295
						fltx4 fl4d; // 3298
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1353
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1344
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1345
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1347
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 19
						SquareSIMD<>(const fltx4& a); // 1341
						{
							fltx4 retVal; // 2228
							_mm_max_ps(__m128 __A,
									__m128 __B);  // 2229
						}
						MaxSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1329
						{
							fltx4 retVal; // 2228
							_mm_max_ps(__m128 __A,
									__m128 __B);  // 2229
						}
						MaxSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1324
						{
							fltx4 retVal; // 2200
							_mm_min_ps(__m128 __A,
									__m128 __B);  // 2201
						}
						MinSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1325
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1349
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1344
						{
							fltx4 retVal; // 2200
							_mm_min_ps(__m128 __A,
									__m128 __B);  // 2201
						}
						MinSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1330
						{
							fltx4 retVal; // 2228
							_mm_max_ps(__m128 __A,
									__m128 __B);  // 2229
						}
						MaxSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1334
						{
							fltx4 retVal; // 2200
							_mm_min_ps(__m128 __A,
									__m128 __B);  // 2201
						}
						MinSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1335
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1340
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1342
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1343
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1351
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1350
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 19
						SquareSIMD<>(const fltx4& a); // 1344
						{
							fltx4 retVal; // 2350
							_mm_sqrt_ps(__m128 __A); // 2351
						}
						SqrtSIMD<(ESIMDLevel)40>(const fltx4& a); // 1345
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 19
						SquareSIMD<(ESIMDLevel)40>(const fltx4& a); // 1350
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 19
						SquareSIMD<(ESIMDLevel)40>(const fltx4& a); // 1351
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1350
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1345
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1351
						{
							fltx4 retVal; // 2350
							_mm_sqrt_ps(__m128 __A); // 2351
						}
						SqrtSIMD<(ESIMDLevel)40>(const fltx4& a); // 1352
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1346
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1352
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1259
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1259
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1259
						MaskedAssign<(ESIMDLevel)40>(const fltx4& ReplacementMask,
										const fltx4& a,
										const fltx4& b); // 1357
						{
							fltx4 retVal; // 2067
							_mm_cmplt_ps(__m128 __A,
									__m128 __B);  // 2068
						}
						CmpLtSIMD<>(const fltx4& a,
								const fltx4& b);  // 1356
						{
							fltx4 retVal; // 2067
							_mm_cmplt_ps(__m128 __A,
									__m128 __B);  // 2068
						}
						CmpLtSIMD<>(const fltx4& a,
								const fltx4& b);  // 1358
						{
							fltx4 retVal; // 875
							_mm_or_ps(__m128 __A,
									__m128 __B);  // 876
						}
						OrSIMD<>(const fltx4& a,
							const fltx4& b);  // 1358
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1259
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1259
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 1259
						MaskedAssign<(ESIMDLevel)40>(const fltx4& ReplacementMask,
										const fltx4& a,
										const fltx4& b); // 1359
						UpWindDifferenceEstimate3DSIMD<false, (ESIMDLevel)40>(fltx4 fl4D1,
													fltx4 fl4D2,
													fltx4 fl4D3,
													const fltx4& fl4H); // 3305
						{
							fltx4 retVal; // 152
							_mm_set_ps(const float  __Z,
									const float  __Y,
									const float  __X,
									const float  __W);  // 153
						}
						Load4Floats<(ESIMDLevel)40>(const float* p0,
										const float* p1,
										const float* p2,
										const float* p3); // 3292
						{
							fltx4 retVal; // 152
							_mm_set_ps(const float  __Z,
									const float  __Y,
									const float  __X,
									const float  __W);  // 153
						}
						Load4Floats<(ESIMDLevel)40>(const float* p0,
										const float* p1,
										const float* p2,
										const float* p3); // 3294
						{
							fltx4 retVal; // 152
							_mm_set_ps(const float  __Z,
									const float  __Y,
									const float  __X,
									const float  __W);  // 153
						}
						Load4Floats<(ESIMDLevel)40>(const float* p0,
										const float* p1,
										const float* p2,
										const float* p3); // 3297
						{
							fltx4 retVal; // 2200
							_mm_min_ps(__m128 __A,
									__m128 __B);  // 2201
						}
						MinSIMD<(ESIMDLevel)40>(const fltx4& a,
									const fltx4& b); // 3315
						{
							fltx4 fl4Val; // 556
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)40>(float* pSingleFloat,
												const fltx4& a); // 557
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)40>(float* pSingleFloat,
												const fltx4& a); // 560
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)40>(float* pSingleFloat,
												const fltx4& a); // 563
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)40>(float* pSingleFloat,
												const fltx4& a); // 566
						}
						Store4Floats<(ESIMDLevel)40>(const fltx4& a,
										float* p0,
										float* p1,
										float* p2,
										float* p3); // 3317
					}
				}
				{
					fltx4 retVal; // 152
					_mm_set_ps(const float  __Z,
							const float  __Y,
							const float  __X,
							const float  __W);  // 153
				}
				Load4Floats<(ESIMDLevel)40>(const float* p0,
								const float* p1,
								const float* p2,
								const float* p3); // 3287
			}
		}
	}
	FastSweepPassEikonalSIMD<false, false, (ESIMDLevel)40>(float* pData,
								size_t nOfs1,
								size_t nOfs2,
								size_t nOfs3,
								IntVector3D vStepStrides,
								IntVector3D vLoopCounts,
								float flGridSizeToDistanceScale); // 3271
	FastSweepPassEikonalSIMD<(ESIMDLevel)40>(bool b2D,
						bool bSigned,
						float* pData,
						size_t nOfs1,
						size_t nOfs2,
						size_t nOfs3,
						IntVector3D vStepStrides,
						IntVector3D vLoopCounts,
						float flGridSizeToDistanceScale); // 3402
	IntAABB_t::Height(); // 457
	IntAABB_t::Width(); // 457
	IntAABB_t::Depth(); // 457
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 457
	IntAABB_t::Size(); // 3402
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 3404
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 457
	IntAABB_t::Size(); // 3410
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 3412
	{
		int nZCount; // 3281
		{
			int nYCount; // 3283
			{
				float* pCur; // 3285
				fltx4 fl4LastD; // 3287
				{
					int nXCount; // 3290
					{
						fltx4 fl4CurDist; // 3292
						fltx4 fl4d1; // 3293
						fltx4 fl4d2; // 3294
						fltx4 fl4d3; // 3295
						fltx4 fl4d; // 3298
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1274
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1274
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 19
						SquareSIMD<>(const fltx4& a); // 1274
						{
							fltx4 retVal; // 602
							_mm_load_ps(const float* __P); // 603
						}
						LoadAlignedSIMD<>(const void* pSIMD); // 2267
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<>(const fltx4& a,
								const fltx4& b);  // 2267
						fabs<>(const fltx4& x); // 2272
						AbsSIMD<>(const fltx4& val); // 1268
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1274
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<>(const fltx4& a,
								const fltx4& b);  // 2267
						fabs<>(const fltx4& x); // 2272
						AbsSIMD<>(const fltx4& val); // 1269
						{
							fltx4 retVal; // 2200
							_mm_min_ps(__m128 __A,
									__m128 __B);  // 2201
						}
						MinSIMD<>(const fltx4& a,
								const fltx4& b);  // 1271
						{
							fltx4 retVal; // 2228
							_mm_max_ps(__m128 __A,
									__m128 __B);  // 2229
						}
						MaxSIMD<>(const fltx4& a,
								const fltx4& b);  // 1272
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1273
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1274
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 19
						SquareSIMD<>(const fltx4& a); // 1274
						{
							fltx4 retVal; // 2350
							_mm_sqrt_ps(__m128 __A); // 2351
						}
						SqrtSIMD<>(const fltx4& a); // 1274
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1274
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1274
						{
							fltx4 retVal; // 2067
							_mm_cmplt_ps(__m128 __A,
									__m128 __B);  // 2068
						}
						CmpLtSIMD<>(const fltx4& a,
								const fltx4& b);  // 1275
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						MaskedAssign<>(const fltx4& ReplacementMask,
								const fltx4& a,
								const fltx4& b);  // 1275
						UpWindDifferenceEstimate2DSIMD<true, (ESIMDLevel)20>(fltx4 fl4D1,
													fltx4 fl4D2,
													fltx4 fl4H); // 3301
						{
							fltx4 retVal; // 152
							_mm_set_ps(const float  __Z,
									const float  __Y,
									const float  __X,
									const float  __W);  // 153
						}
						Load4Floats<(ESIMDLevel)20>(const float* p0,
										const float* p1,
										const float* p2,
										const float* p3); // 3292
						{
							fltx4 retVal; // 152
							_mm_set_ps(const float  __Z,
									const float  __Y,
									const float  __X,
									const float  __W);  // 153
						}
						Load4Floats<(ESIMDLevel)20>(const float* p0,
										const float* p1,
										const float* p2,
										const float* p3); // 3294
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<>(const fltx4& a,
								const fltx4& b);  // 2267
						fabs<>(const fltx4& x); // 2272
						AbsSIMD<>(const fltx4& val); // 3309
						{
							fltx4 retVal; // 767
							_mm_andnot_ps(__m128 __A,
									__m128 __B);  // 768
						}
						AndNotSIMD<>(const fltx4& a,
								const fltx4& b);  // 3311
						{
							fltx4 retVal; // 2200
							_mm_min_ps(__m128 __A,
									__m128 __B);  // 2201
						}
						MinSIMD<>(const fltx4& a,
								const fltx4& b);  // 3309
						{
							fltx4 retVal; // 602
							_mm_load_ps(const float* __P); // 603
						}
						LoadAlignedSIMD<>(const void* pSIMD); // 3311
						{
							fltx4 retVal; // 875
							_mm_or_ps(__m128 __A,
									__m128 __B);  // 876
						}
						OrSIMD<>(const fltx4& a,
							const fltx4& b);  // 3311
						{
							fltx4 fl4Val; // 556
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)20>(float* pSingleFloat,
												const fltx4& a); // 557
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)20>(float* pSingleFloat,
												const fltx4& a); // 560
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)20>(float* pSingleFloat,
												const fltx4& a); // 563
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)20>(float* pSingleFloat,
												const fltx4& a); // 566
						}
						Store4Floats<(ESIMDLevel)20>(const fltx4& a,
										float* p0,
										float* p1,
										float* p2,
										float* p3); // 3317
					}
				}
				{
					fltx4 retVal; // 152
					_mm_set_ps(const float  __Z,
							const float  __Y,
							const float  __X,
							const float  __W);  // 153
				}
				Load4Floats<(ESIMDLevel)20>(const float* p0,
								const float* p1,
								const float* p2,
								const float* p3); // 3287
			}
		}
	}
	FastSweepPassEikonalSIMD<true, true, (ESIMDLevel)20>(float* pData,
								size_t nOfs1,
								size_t nOfs2,
								size_t nOfs3,
								IntVector3D vStepStrides,
								IntVector3D vLoopCounts,
								float flGridSizeToDistanceScale); // 3256
	{
		int nZCount; // 3281
		{
			int nYCount; // 3283
			{
				float* pCur; // 3285
				fltx4 fl4LastD; // 3287
				{
					int nXCount; // 3290
					{
						fltx4 fl4CurDist; // 3292
						fltx4 fl4d1; // 3293
						fltx4 fl4d2; // 3294
						fltx4 fl4d3; // 3295
						fltx4 fl4d; // 3298
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1353
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1344
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1345
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1347
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 19
						SquareSIMD<>(const fltx4& a); // 1341
						{
							fltx4 retVal; // 602
							_mm_load_ps(const float* __P); // 603
						}
						LoadAlignedSIMD<>(const void* pSIMD); // 2267
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<>(const fltx4& a,
								const fltx4& b);  // 2267
						fabs<>(const fltx4& x); // 2272
						AbsSIMD<>(const fltx4& val); // 1318
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<>(const fltx4& a,
								const fltx4& b);  // 2267
						fabs<>(const fltx4& x); // 2272
						AbsSIMD<>(const fltx4& val); // 1319
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<>(const fltx4& a,
								const fltx4& b);  // 2267
						fabs<>(const fltx4& x); // 2272
						AbsSIMD<>(const fltx4& val); // 1320
						{
							fltx4 retVal; // 2228
							_mm_max_ps(__m128 __A,
									__m128 __B);  // 2229
						}
						MaxSIMD<>(const fltx4& a,
								const fltx4& b);  // 1329
						{
							fltx4 retVal; // 2228
							_mm_max_ps(__m128 __A,
									__m128 __B);  // 2229
						}
						MaxSIMD<>(const fltx4& a,
								const fltx4& b);  // 1324
						{
							fltx4 retVal; // 2200
							_mm_min_ps(__m128 __A,
									__m128 __B);  // 2201
						}
						MinSIMD<>(const fltx4& a,
								const fltx4& b);  // 1325
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1349
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1344
						{
							fltx4 retVal; // 2200
							_mm_min_ps(__m128 __A,
									__m128 __B);  // 2201
						}
						MinSIMD<>(const fltx4& a,
								const fltx4& b);  // 1330
						{
							fltx4 retVal; // 2228
							_mm_max_ps(__m128 __A,
									__m128 __B);  // 2229
						}
						MaxSIMD<>(const fltx4& a,
								const fltx4& b);  // 1334
						{
							fltx4 retVal; // 2200
							_mm_min_ps(__m128 __A,
									__m128 __B);  // 2201
						}
						MinSIMD<>(const fltx4& a,
								const fltx4& b);  // 1335
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1340
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1342
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1343
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1351
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1350
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 19
						SquareSIMD<>(const fltx4& a); // 1344
						{
							fltx4 retVal; // 2350
							_mm_sqrt_ps(__m128 __A); // 2351
						}
						SqrtSIMD<>(const fltx4& a); // 1345
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 19
						SquareSIMD<>(const fltx4& a); // 1350
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 19
						SquareSIMD<>(const fltx4& a); // 1351
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1350
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1345
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1351
						{
							fltx4 retVal; // 2350
							_mm_sqrt_ps(__m128 __A); // 2351
						}
						SqrtSIMD<>(const fltx4& a); // 1352
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1346
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						MaskedAssign<>(const fltx4& ReplacementMask,
								const fltx4& a,
								const fltx4& b);  // 1357
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1352
						{
							fltx4 retVal; // 2067
							_mm_cmplt_ps(__m128 __A,
									__m128 __B);  // 2068
						}
						CmpLtSIMD<>(const fltx4& a,
								const fltx4& b);  // 1356
						{
							fltx4 retVal; // 2067
							_mm_cmplt_ps(__m128 __A,
									__m128 __B);  // 2068
						}
						CmpLtSIMD<>(const fltx4& a,
								const fltx4& b);  // 1358
						{
							fltx4 retVal; // 875
							_mm_or_ps(__m128 __A,
									__m128 __B);  // 876
						}
						OrSIMD<>(const fltx4& a,
							const fltx4& b);  // 1358
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						MaskedAssign<>(const fltx4& ReplacementMask,
								const fltx4& a,
								const fltx4& b);  // 1359
						UpWindDifferenceEstimate3DSIMD<true, (ESIMDLevel)20>(fltx4 fl4D1,
													fltx4 fl4D2,
													fltx4 fl4D3,
													const fltx4& fl4H); // 3305
						{
							fltx4 retVal; // 152
							_mm_set_ps(const float  __Z,
									const float  __Y,
									const float  __X,
									const float  __W);  // 153
						}
						Load4Floats<(ESIMDLevel)20>(const float* p0,
										const float* p1,
										const float* p2,
										const float* p3); // 3292
						{
							fltx4 retVal; // 152
							_mm_set_ps(const float  __Z,
									const float  __Y,
									const float  __X,
									const float  __W);  // 153
						}
						Load4Floats<(ESIMDLevel)20>(const float* p0,
										const float* p1,
										const float* p2,
										const float* p3); // 3294
						{
							fltx4 retVal; // 152
							_mm_set_ps(const float  __Z,
									const float  __Y,
									const float  __X,
									const float  __W);  // 153
						}
						Load4Floats<(ESIMDLevel)20>(const float* p0,
										const float* p1,
										const float* p2,
										const float* p3); // 3297
						{
							fltx4 retVal; // 767
							_mm_andnot_ps(__m128 __A,
									__m128 __B);  // 768
						}
						AndNotSIMD<>(const fltx4& a,
								const fltx4& b);  // 3311
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<>(const fltx4& a,
								const fltx4& b);  // 2267
						fabs<>(const fltx4& x); // 2272
						AbsSIMD<>(const fltx4& val); // 3309
						{
							fltx4 fl4Val; // 556
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)20>(float* pSingleFloat,
												const fltx4& a); // 566
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)20>(float* pSingleFloat,
												const fltx4& a); // 560
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)20>(float* pSingleFloat,
												const fltx4& a); // 557
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)20>(float* pSingleFloat,
												const fltx4& a); // 563
						}
						Store4Floats<(ESIMDLevel)20>(const fltx4& a,
										float* p0,
										float* p1,
										float* p2,
										float* p3); // 3317
						{
							fltx4 retVal; // 2200
							_mm_min_ps(__m128 __A,
									__m128 __B);  // 2201
						}
						MinSIMD<>(const fltx4& a,
								const fltx4& b);  // 3309
						{
							fltx4 retVal; // 602
							_mm_load_ps(const float* __P); // 603
						}
						LoadAlignedSIMD<>(const void* pSIMD); // 3311
						{
							fltx4 retVal; // 875
							_mm_or_ps(__m128 __A,
									__m128 __B);  // 876
						}
						OrSIMD<>(const fltx4& a,
							const fltx4& b);  // 3311
					}
				}
				{
					fltx4 retVal; // 152
					_mm_set_ps(const float  __Z,
							const float  __Y,
							const float  __X,
							const float  __W);  // 153
				}
				Load4Floats<(ESIMDLevel)20>(const float* p0,
								const float* p1,
								const float* p2,
								const float* p3); // 3287
			}
		}
	}
	FastSweepPassEikonalSIMD<false, true, (ESIMDLevel)20>(float* pData,
								size_t nOfs1,
								size_t nOfs2,
								size_t nOfs3,
								IntVector3D vStepStrides,
								IntVector3D vLoopCounts,
								float flGridSizeToDistanceScale); // 3267
	{
		int nZCount; // 3281
		{
			int nYCount; // 3283
			{
				float* pCur; // 3285
				fltx4 fl4LastD; // 3287
				{
					int nXCount; // 3290
					{
						fltx4 fl4CurDist; // 3292
						fltx4 fl4d1; // 3293
						fltx4 fl4d2; // 3294
						fltx4 fl4d3; // 3295
						fltx4 fl4d; // 3298
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1274
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1274
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 19
						SquareSIMD<>(const fltx4& a); // 1274
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1274
						{
							fltx4 retVal; // 2200
							_mm_min_ps(__m128 __A,
									__m128 __B);  // 2201
						}
						MinSIMD<>(const fltx4& a,
								const fltx4& b);  // 1271
						{
							fltx4 retVal; // 2228
							_mm_max_ps(__m128 __A,
									__m128 __B);  // 2229
						}
						MaxSIMD<>(const fltx4& a,
								const fltx4& b);  // 1272
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1273
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1274
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 19
						SquareSIMD<>(const fltx4& a); // 1274
						{
							fltx4 retVal; // 2350
							_mm_sqrt_ps(__m128 __A); // 2351
						}
						SqrtSIMD<>(const fltx4& a); // 1274
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1274
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1274
						{
							fltx4 retVal; // 2067
							_mm_cmplt_ps(__m128 __A,
									__m128 __B);  // 2068
						}
						CmpLtSIMD<>(const fltx4& a,
								const fltx4& b);  // 1275
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						MaskedAssign<>(const fltx4& ReplacementMask,
								const fltx4& a,
								const fltx4& b);  // 1275
						UpWindDifferenceEstimate2DSIMD<false, (ESIMDLevel)20>(fltx4 fl4D1,
													fltx4 fl4D2,
													fltx4 fl4H); // 3301
						{
							fltx4 retVal; // 152
							_mm_set_ps(const float  __Z,
									const float  __Y,
									const float  __X,
									const float  __W);  // 153
						}
						Load4Floats<(ESIMDLevel)20>(const float* p0,
										const float* p1,
										const float* p2,
										const float* p3); // 3292
						{
							fltx4 retVal; // 152
							_mm_set_ps(const float  __Z,
									const float  __Y,
									const float  __X,
									const float  __W);  // 153
						}
						Load4Floats<(ESIMDLevel)20>(const float* p0,
										const float* p1,
										const float* p2,
										const float* p3); // 3294
						{
							fltx4 retVal; // 2200
							_mm_min_ps(__m128 __A,
									__m128 __B);  // 2201
						}
						MinSIMD<>(const fltx4& a,
								const fltx4& b);  // 3315
						{
							fltx4 fl4Val; // 556
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)20>(float* pSingleFloat,
												const fltx4& a); // 560
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)20>(float* pSingleFloat,
												const fltx4& a); // 557
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)20>(float* pSingleFloat,
												const fltx4& a); // 563
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)20>(float* pSingleFloat,
												const fltx4& a); // 566
						}
						Store4Floats<(ESIMDLevel)20>(const fltx4& a,
										float* p0,
										float* p1,
										float* p2,
										float* p3); // 3317
					}
				}
				{
					fltx4 retVal; // 152
					_mm_set_ps(const float  __Z,
							const float  __Y,
							const float  __X,
							const float  __W);  // 153
				}
				Load4Floats<(ESIMDLevel)20>(const float* p0,
								const float* p1,
								const float* p2,
								const float* p3); // 3287
			}
		}
	}
	FastSweepPassEikonalSIMD<true, false, (ESIMDLevel)20>(float* pData,
								size_t nOfs1,
								size_t nOfs2,
								size_t nOfs3,
								IntVector3D vStepStrides,
								IntVector3D vLoopCounts,
								float flGridSizeToDistanceScale); // 3260
	{
		int nZCount; // 3281
		{
			int nYCount; // 3283
			{
				float* pCur; // 3285
				fltx4 fl4LastD; // 3287
				{
					int nXCount; // 3290
					{
						fltx4 fl4CurDist; // 3292
						fltx4 fl4d1; // 3293
						fltx4 fl4d2; // 3294
						fltx4 fl4d3; // 3295
						fltx4 fl4d; // 3298
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1353
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1344
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1345
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1347
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 19
						SquareSIMD<>(const fltx4& a); // 1341
						{
							fltx4 retVal; // 2228
							_mm_max_ps(__m128 __A,
									__m128 __B);  // 2229
						}
						MaxSIMD<>(const fltx4& a,
								const fltx4& b);  // 1329
						{
							fltx4 retVal; // 2228
							_mm_max_ps(__m128 __A,
									__m128 __B);  // 2229
						}
						MaxSIMD<>(const fltx4& a,
								const fltx4& b);  // 1324
						{
							fltx4 retVal; // 2200
							_mm_min_ps(__m128 __A,
									__m128 __B);  // 2201
						}
						MinSIMD<>(const fltx4& a,
								const fltx4& b);  // 1325
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1349
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1344
						{
							fltx4 retVal; // 2200
							_mm_min_ps(__m128 __A,
									__m128 __B);  // 2201
						}
						MinSIMD<>(const fltx4& a,
								const fltx4& b);  // 1330
						{
							fltx4 retVal; // 2228
							_mm_max_ps(__m128 __A,
									__m128 __B);  // 2229
						}
						MaxSIMD<>(const fltx4& a,
								const fltx4& b);  // 1334
						{
							fltx4 retVal; // 2200
							_mm_min_ps(__m128 __A,
									__m128 __B);  // 2201
						}
						MinSIMD<>(const fltx4& a,
								const fltx4& b);  // 1335
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1340
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1342
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1343
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1351
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1350
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 19
						SquareSIMD<>(const fltx4& a); // 1344
						{
							fltx4 retVal; // 2350
							_mm_sqrt_ps(__m128 __A); // 2351
						}
						SqrtSIMD<>(const fltx4& a); // 1345
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 19
						SquareSIMD<>(const fltx4& a); // 1350
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 19
						SquareSIMD<>(const fltx4& a); // 1351
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1350
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1345
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 1351
						{
							fltx4 retVal; // 2350
							_mm_sqrt_ps(__m128 __A); // 2351
						}
						SqrtSIMD<>(const fltx4& a); // 1352
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1346
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1352
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						MaskedAssign<>(const fltx4& ReplacementMask,
								const fltx4& a,
								const fltx4& b);  // 1357
						{
							fltx4 retVal; // 2067
							_mm_cmplt_ps(__m128 __A,
									__m128 __B);  // 2068
						}
						CmpLtSIMD<>(const fltx4& a,
								const fltx4& b);  // 1356
						{
							fltx4 retVal; // 2067
							_mm_cmplt_ps(__m128 __A,
									__m128 __B);  // 2068
						}
						CmpLtSIMD<>(const fltx4& a,
								const fltx4& b);  // 1358
						{
							fltx4 retVal; // 875
							_mm_or_ps(__m128 __A,
									__m128 __B);  // 876
						}
						OrSIMD<>(const fltx4& a,
							const fltx4& b);  // 1358
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 718
							_mm_and_ps(__m128 __A,
									__m128 __B);  // 719
						}
						AndSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						{
							fltx4 retVal; // 826
							_mm_xor_ps(__m128 __A,
									__m128 __B);  // 827
						}
						XorSIMD<>(const fltx4& a,
								const fltx4& b);  // 1259
						MaskedAssign<>(const fltx4& ReplacementMask,
								const fltx4& a,
								const fltx4& b);  // 1359
						UpWindDifferenceEstimate3DSIMD<false, (ESIMDLevel)20>(fltx4 fl4D1,
													fltx4 fl4D2,
													fltx4 fl4D3,
													const fltx4& fl4H); // 3305
						{
							fltx4 retVal; // 152
							_mm_set_ps(const float  __Z,
									const float  __Y,
									const float  __X,
									const float  __W);  // 153
						}
						Load4Floats<(ESIMDLevel)20>(const float* p0,
										const float* p1,
										const float* p2,
										const float* p3); // 3292
						{
							fltx4 retVal; // 152
							_mm_set_ps(const float  __Z,
									const float  __Y,
									const float  __X,
									const float  __W);  // 153
						}
						Load4Floats<(ESIMDLevel)20>(const float* p0,
										const float* p1,
										const float* p2,
										const float* p3); // 3294
						{
							fltx4 retVal; // 152
							_mm_set_ps(const float  __Z,
									const float  __Y,
									const float  __X,
									const float  __W);  // 153
						}
						Load4Floats<(ESIMDLevel)20>(const float* p0,
										const float* p1,
										const float* p2,
										const float* p3); // 3297
						{
							fltx4 retVal; // 2200
							_mm_min_ps(__m128 __A,
									__m128 __B);  // 2201
						}
						MinSIMD<>(const fltx4& a,
								const fltx4& b);  // 3315
						{
							fltx4 fl4Val; // 556
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)20>(float* pSingleFloat,
												const fltx4& a); // 557
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)20>(float* pSingleFloat,
												const fltx4& a); // 560
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)20>(float* pSingleFloat,
												const fltx4& a); // 563
							_mm_store_ss(float* __P,
									__m128 __A);  // 528
							StoreUnalignedFloat<(ESIMDLevel)20>(float* pSingleFloat,
												const fltx4& a); // 566
						}
						Store4Floats<(ESIMDLevel)20>(const fltx4& a,
										float* p0,
										float* p1,
										float* p2,
										float* p3); // 3317
					}
				}
				{
					fltx4 retVal; // 152
					_mm_set_ps(const float  __Z,
							const float  __Y,
							const float  __X,
							const float  __W);  // 153
				}
				Load4Floats<(ESIMDLevel)20>(const float* p0,
								const float* p1,
								const float* p2,
								const float* p3); // 3287
			}
		}
	}
	FastSweepPassEikonalSIMD<false, false, (ESIMDLevel)20>(float* pData,
								size_t nOfs1,
								size_t nOfs2,
								size_t nOfs3,
								IntVector3D vStepStrides,
								IntVector3D vLoopCounts,
								float flGridSizeToDistanceScale); // 3271
	FastSweepPassEikonalSIMD<(ESIMDLevel)20>(bool b2D,
						bool bSigned,
						float* pData,
						size_t nOfs1,
						size_t nOfs2,
						size_t nOfs3,
						IntVector3D vStepStrides,
						IntVector3D vLoopCounts,
						float flGridSizeToDistanceScale); // 3410
} /* size: 6679, variables: 8, inline expansions: 26 (12997 bytes) */

// <044DF3C9> tier0_perproject/utlsoacontainer.cpp:3384
// variables: 8
inline void CEikonalExecuteControls::ExecuteOn4Blocks(IntVector3D vBlockIndex0, IntVector3D vBlockIndex1, IntVector3D vBlockIndex2, IntVector3D vBlockIndex3, int nWhichSweep, const IntAABB_t& vBounds, IntVector3D vStart, CFastSweepControllerBase* pController)
{
	IntVector3D vStepDirections; // 3387
	int nWStride; // 3389
	int nPrevYStride; // 3391
	int nPrevZStride; // 3392
	float* pData; // 3393
	int nStride1; // 3395
	int nStride2; // 3396
	int nStride3; // 3397
} /* size: 0, variables: 8 */

// <044BC441> tier0_perproject/utlsoacontainer.cpp:3418
// variables: 4
void FastSweepPass<true, true, CSOAContainer::false>(int nAttr, int nLockAttr, IntVector3D vStartPos, IntVector3D vStepDirections, IntVector3D vLoopCounts, float flGridSizeToDistanceScale, int nSupressFirstFetchMask)
{
	int nWStride; // 3424
	int nPrevYStride; // 3426
	int nPrevZStride; // 3427
	float* pData; // 3428
} /* size: 0, variables: 4 */

// <044BC37B> tier0_perproject/utlsoacontainer.cpp:3418
// variables: 4
void FastSweepPass<true, true, CSOAContainer::true>(int nAttr, int nLockAttr, IntVector3D vStartPos, IntVector3D vStepDirections, IntVector3D vLoopCounts, float flGridSizeToDistanceScale, int nSupressFirstFetchMask)
{
	int nWStride; // 3424
	int nPrevYStride; // 3426
	int nPrevZStride; // 3427
	float* pData; // 3428
} /* size: 0, variables: 4 */

// <044BC2B5> tier0_perproject/utlsoacontainer.cpp:3418
// variables: 4
void FastSweepPass<false, true, CSOAContainer::false>(int nAttr, int nLockAttr, IntVector3D vStartPos, IntVector3D vStepDirections, IntVector3D vLoopCounts, float flGridSizeToDistanceScale, int nSupressFirstFetchMask)
{
	int nWStride; // 3424
	int nPrevYStride; // 3426
	int nPrevZStride; // 3427
	float* pData; // 3428
} /* size: 0, variables: 4 */

// <044BBC8C> tier0_perproject/utlsoacontainer.cpp:3418
// variables: 15
// function calls: 17
void FastSweepPass<false, true, CSOAContainer::true>(int nAttr, int nLockAttr, IntVector3D vStartPos, IntVector3D vStepDirections, IntVector3D vLoopCounts, float flGridSizeToDistanceScale, int nSupressFirstFetchMask)
{
	int nWStride; // 3424
	int nPrevYStride; // 3426
	int nPrevZStride; // 3427
	float* pData; // 3428
	CSOAContainer::NumQuadsPerRow(); // 3424
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 3427
	CSOAContainer::RowPtr<float>(
			int nAttributeIdx,
			int nRowNumber,
			int nSliceNumber);  // 442
	CSOAContainer::FloatValue(
			int nAttrIdx,
			int nX,
			int nY,
			int nZ);  // 446
	CSOAContainer::FloatValue(
			int nAttrIdx,
			IntVector3D vCoord);  // 3428
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 3433
	CSOAContainer::RowPtr<float>(
			int nAttributeIdx,
			int nRowNumber,
			int nSliceNumber);  // 442
	CSOAContainer::FloatValue(
			int nAttrIdx,
			int nX,
			int nY,
			int nZ);  // 446
	CSOAContainer::FloatValue(
			int nAttrIdx,
			IntVector3D vCoord);  // 3432
	{
		int nZCount; // 3178
		{
			int nYCount; // 3180
			{
				float* pCur; // 3182
				float* pLockCur; // 3183
				float flLastD; // 3188
				{
					int nXCount; // 3194
					{
						float flCurDist; // 3198
						float d1; // 3199
						float d2; // 3200
						float d3; // 3201
						float d; // 3210
						Swap<float>(float& a,
								float& b);  // 1288
						Square<float>(const float& a); // 1303
						Square<float>(const float& a); // 1306
						Square<float>(const float& a); // 1306
						Swap<float>(float& a,
								float& b);  // 1292
						UpWindDifferenceEstimate3D<true>(float d1,
										float d2,
										float d3,
										float H);  // 3217
					}
				}
			}
		}
	}
	FastSweepPassEikonal<false, true, true, float>(float* pData,
							float* pLockData,
							IntVector3D vStepStrides,
							IntVector3D vLoopCounts,
							float flGridSizeToDistanceScale,
							int nSupressFirstFetchMask);  // 3430
} /* size: 1375, variables: 4, inline expansions: 11 (1431 bytes) */

// <044BBA3A> tier0_perproject/utlsoacontainer.cpp:3418
// variables: 4
void FastSweepPass<false, false, CSOAContainer::false>(int nAttr, int nLockAttr, IntVector3D vStartPos, IntVector3D vStepDirections, IntVector3D vLoopCounts, float flGridSizeToDistanceScale, int nSupressFirstFetchMask)
{
	int nWStride; // 3424
	int nPrevYStride; // 3426
	int nPrevZStride; // 3427
	float* pData; // 3428
} /* size: 0, variables: 4 */

// <044BB411> tier0_perproject/utlsoacontainer.cpp:3418
// variables: 15
// function calls: 17
void FastSweepPass<false, false, CSOAContainer::true>(int nAttr, int nLockAttr, IntVector3D vStartPos, IntVector3D vStepDirections, IntVector3D vLoopCounts, float flGridSizeToDistanceScale, int nSupressFirstFetchMask)
{
	int nWStride; // 3424
	int nPrevYStride; // 3426
	int nPrevZStride; // 3427
	float* pData; // 3428
	CSOAContainer::NumQuadsPerRow(); // 3424
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 3427
	CSOAContainer::RowPtr<float>(
			int nAttributeIdx,
			int nRowNumber,
			int nSliceNumber);  // 442
	CSOAContainer::FloatValue(
			int nAttrIdx,
			int nX,
			int nY,
			int nZ);  // 446
	CSOAContainer::FloatValue(
			int nAttrIdx,
			IntVector3D vCoord);  // 3428
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 3433
	CSOAContainer::RowPtr<float>(
			int nAttributeIdx,
			int nRowNumber,
			int nSliceNumber);  // 442
	CSOAContainer::FloatValue(
			int nAttrIdx,
			int nX,
			int nY,
			int nZ);  // 446
	CSOAContainer::FloatValue(
			int nAttrIdx,
			IntVector3D vCoord);  // 3432
	{
		int nZCount; // 3178
		{
			int nYCount; // 3180
			{
				float* pCur; // 3182
				float* pLockCur; // 3183
				float flLastD; // 3188
				{
					int nXCount; // 3194
					{
						float flCurDist; // 3198
						float d1; // 3199
						float d2; // 3200
						float d3; // 3201
						float d; // 3210
						Swap<float>(float& a,
								float& b);  // 1288
						Square<float>(const float& a); // 1303
						Square<float>(const float& a); // 1306
						Square<float>(const float& a); // 1306
						Swap<float>(float& a,
								float& b);  // 1292
						UpWindDifferenceEstimate3D<false>(float d1,
											float d2,
											float d3,
											float H);  // 3217
					}
				}
			}
		}
	}
	FastSweepPassEikonal<false, false, true, float>(float* pData,
							float* pLockData,
							IntVector3D vStepStrides,
							IntVector3D vLoopCounts,
							float flGridSizeToDistanceScale,
							int nSupressFirstFetchMask);  // 3430
} /* size: 1533, variables: 4, inline expansions: 11 (1536 bytes) */

// <044C94C4> tier0_perproject/utlsoacontainer.cpp:3439
// variables: 9
// function calls: 102
void DoSweep<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >(const JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls>& controls, IntAABB_t vBounds)
{
	FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> > state; // 3441
	{
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 397
		IntVector3D::IntVector3D(); // 397
		IntVector3D::IntVector3D(); // 397
		CFastSweepControllerBase::CFastSweepControllerBase(); // 618
		CInterlockedIntT<int, 4>::CInterlockedIntT(
				int value);  // 618
		CEikonalExecuteControls::CEikonalExecuteControls(); // 132
		JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls>::JoinedClasses_t(); // 618
		CInterlockedIntT<int, 4>::CInterlockedIntT(
				int value);  // 618
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		CTSListBase::CTSListBase(); // 846
		QueuedSweepNode_t::QueuedSweepNode_t(); // 827
		Node_t::Node_t(); // 864
		CTSQueue<QueuedSweepNode_t, false>::End(); // 865
		CTSQueue<QueuedSweepNode_t, false>::CTSQueue(); // 618
		CTSListBase::CTSListBase(); // 846
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		Node_t::Node_t(); // 864
		CTSQueue<SweepGroup_t::End(); // 865
		CTSQueue<SweepGroup_t::CTSQueue(); // 618
		CUtlBlockMemory<unsigned int, int>::CUtlBlockMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 14
		CUtlBlockVector<unsigned int, int>::CUtlBlockVector(
				int growSize,
				int initCapacity);  // 618
		_Head_base<0, CInterlockedIntT<long long unsigned int, 8>::_Head_base(); // 303
		_Head_base<1, std::default_delete<CInterlockedIntT<long long unsigned int, 8> []>, true>::_Head_base(); // 561
		_Tuple_impl<1, std::default_delete<CInterlockedIntT<long long unsigned int, 8> []> >::_Tuple_impl(); // 303
		_Tuple_impl<0, CInterlockedIntT<long long unsigned int, 8>::_Tuple_impl(); // 966
		tuple<CInterlockedIntT<long long unsigned int, 8>::tuple(); // 167
		__uniq_ptr_impl(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long unsigne this); // 232
		__uniq_ptr_data(const __uniq_ptr_data<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long unsigne this); // 596
		unique_ptr<>(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long unsigned this); // 618
		_Head_base<1, std::default_delete<SweepGroup_t []>, true>::_Head_base(); // 561
		_Tuple_impl<1, std::default_delete<SweepGroup_t []> >::_Tuple_impl(); // 303
		_Head_base<0, SweepGroup_t::_Head_base(); // 303
		_Tuple_impl<0, SweepGroup_t::_Tuple_impl(); // 966
		tuple<SweepGroup_t::tuple(); // 167
		__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::__uniq_ptr_impl(); // 232
		__uniq_ptr_data<SweepGroup_t, std::default_delete<SweepGroup_t []>, true, true>::__uniq_ptr_data(); // 596
		unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::unique_ptr<>(); // 618
		_Head_base<1, std::default_delete<SweepGroup_t::_Head_base(); // 561
		_Tuple_impl<1, std::default_delete<SweepGroup_t::_Tuple_impl(); // 303
		_Head_base<0, SweepGroup_t::_Head_base(); // 303
		_Tuple_impl<0, SweepGroup_t::_Tuple_impl(); // 966
		tuple<SweepGroup_t::tuple(); // 167
		__uniq_ptr_impl<SweepGroup_t::__uniq_ptr_impl(); // 232
		__uniq_ptr_data<SweepGroup_t::__uniq_ptr_data(); // 596
		unique_ptr<SweepGroup_t::unique_ptr<>(); // 618
		_Head_base<0, CInterlockedIntT<int, 4>::_Head_base(); // 303
		_Head_base<1, std::default_delete<CInterlockedIntT<int, 4> []>, true>::_Head_base(); // 561
		_Tuple_impl<1, std::default_delete<CInterlockedIntT<int, 4> []> >::_Tuple_impl(); // 303
		_Tuple_impl<0, CInterlockedIntT<int, 4>::_Tuple_impl(); // 966
		tuple<CInterlockedIntT<int, 4>::tuple(); // 167
		__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::__uniq_ptr_impl(); // 232
		__uniq_ptr_data<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []>, true, true>::__uniq_ptr_data(); // 596
		unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::unique_ptr<>(); // 618
		{
			bool bDoAsOneBlock; // 644
			{
				int nSize; // 634
				IntAABB_t::Depth(); // 632
				IntAABB_t::Height(); // 631
				IntAABB_t::Width(); // 630
				IntVector3D::IntVector3D(
						int nX,
						int nY,
						int nZ);  // 630
			}
			IntVector3D::IntVector3D(
					int nX,
					int nY,
					int nZ);  // 3338
			GetBlockSize(IntAABB_t vBounds); // 625
			GetNumSweeps(const IntAABB_t& vBounds); // 623
			ShouldDecompose(int nNumBlocksInDecomposition,
					IntVector3D vBlockSize);  // 644
			IntVector3D::IntVector3D(
					int nX,
					int nY,
					int nZ);  // 654
			DoesNeighborAffectSweep(int nSweep,
						IntVector3D vNeighborOffset);  // 654
		}
	}
	FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::FastSweepThreadedExecutionState(
					const JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls>& controls,
					const IntAABB_t& bounds);  // 3441
	CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::RemoveAll(); // 1798
	{
		int i; // 359
	}
	CUtlBlockMemory<unsigned int, int>::Purge(); // 354
	CUtlBlockMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Purge(); // 560
	CUtlBlockMemory<unsigned int, int>::Purge(); // 132
	CUtlBlockMemory<unsigned int, int>::~CUtlBlockMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::~CUtlVectorBase(); // 10
	CUtlBlockVector<unsigned int, int>::~CUtlBlockVector(); // 456
	{
		CInterlockedIntT<int, 4> *& __ptr; // 682
		__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 682
		unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get_deleter(); // 684
		default_delete<CInterlockedIntT<int, 4> []>::operator(
							CInterlockedIntT<int, 4>* __ptr);  // 684
	}
	unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::~unique_ptr(); // 456
	{
		unsigned int *& __ptr; // 682
		__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 682
		unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get_deleter(); // 684
		default_delete<unsigned int []>::operator(
					unsigned int* __ptr);  // 684
	}
	unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::~unique_ptr(); // 456
	{
		SweepGroup_t* *& __ptr; // 682
		__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 682
		unique_ptr<SweepGroup_t::get_deleter(); // 684
		default_delete<SweepGroup_t::operator(
						SweepGroup_t** __ptr);  // 684
	}
	unique_ptr<SweepGroup_t::~unique_ptr(); // 456
	{
		SweepGroup_t *& __ptr; // 682
		__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 682
		unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get_deleter(); // 684
		default_delete<SweepGroup_t []>::operator(
					SweepGroup_t* __ptr);  // 684
	}
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::~unique_ptr(); // 456
	{
		CInterlockedIntT<long long unsigned int, 8> *& __ptr; // 682
		_M_ptr(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long unsigne this); // 682
		get_deleter(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long unsigned this); // 684
		default_delete<CInterlockedIntT<long long unsigned int, 8> []>::operator(
									CInterlockedIntT<long long unsigned int, 8>* __ptr);  // 684
	}
	~unique_ptr(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long unsigned this); // 456
	FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::~FastSweepThreadedExecutionState(); // 3453
} /* size: 0, variables: 1, inline expansions: 15 (0 bytes) */

// <044C7E31> tier0_perproject/utlsoacontainer.cpp:3439
// variables: 9
// function calls: 102
void DoSweep<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >(const JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls>& controls, IntAABB_t vBounds)
{
	FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> > state; // 3441
	{
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 397
		IntVector3D::IntVector3D(); // 397
		IntVector3D::IntVector3D(); // 397
		CFastSweepControllerBase::CFastSweepControllerBase(); // 618
		CEikonalExecuteControls::CEikonalExecuteControls(); // 132
		JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls>::JoinedClasses_t(); // 618
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		CTSListBase::CTSListBase(); // 846
		QueuedSweepNode_t::QueuedSweepNode_t(); // 827
		Node_t::Node_t(); // 864
		CTSQueue<QueuedSweepNode_t, false>::End(); // 865
		CTSQueue<QueuedSweepNode_t, false>::CTSQueue(); // 618
		CTSListBase::CTSListBase(); // 846
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		Node_t::Node_t(); // 864
		CTSQueue<SweepGroup_t::End(); // 865
		CTSQueue<SweepGroup_t::CTSQueue(); // 618
		CUtlBlockMemory<unsigned int, int>::CUtlBlockMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 14
		CUtlBlockVector<unsigned int, int>::CUtlBlockVector(
				int growSize,
				int initCapacity);  // 618
		_Head_base<0, long long unsigned int::_Head_base(); // 303
		_Head_base<1, std::default_delete<long long unsigned int []>, true>::_Head_base(); // 561
		_Tuple_impl<1, std::default_delete<long long unsigned int []> >::_Tuple_impl(); // 303
		_Tuple_impl<0, long long unsigned int::_Tuple_impl(); // 966
		tuple<long long unsigned int::tuple(); // 167
		__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::__uniq_ptr_impl(); // 232
		__uniq_ptr_data<long long unsigned int, std::default_delete<long long unsigned int []>, true, true>::__uniq_ptr_data(); // 596
		unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::unique_ptr<>(); // 618
		_Head_base<1, std::default_delete<SweepGroup_t []>, true>::_Head_base(); // 561
		_Tuple_impl<1, std::default_delete<SweepGroup_t []> >::_Tuple_impl(); // 303
		_Head_base<0, SweepGroup_t::_Head_base(); // 303
		_Tuple_impl<0, SweepGroup_t::_Tuple_impl(); // 966
		tuple<SweepGroup_t::tuple(); // 167
		__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::__uniq_ptr_impl(); // 232
		__uniq_ptr_data<SweepGroup_t, std::default_delete<SweepGroup_t []>, true, true>::__uniq_ptr_data(); // 596
		unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::unique_ptr<>(); // 618
		_Head_base<1, std::default_delete<SweepGroup_t::_Head_base(); // 561
		_Tuple_impl<1, std::default_delete<SweepGroup_t::_Tuple_impl(); // 303
		_Head_base<0, SweepGroup_t::_Head_base(); // 303
		_Tuple_impl<0, SweepGroup_t::_Tuple_impl(); // 966
		tuple<SweepGroup_t::tuple(); // 167
		__uniq_ptr_impl<SweepGroup_t::__uniq_ptr_impl(); // 232
		__uniq_ptr_data<SweepGroup_t::__uniq_ptr_data(); // 596
		unique_ptr<SweepGroup_t::unique_ptr<>(); // 618
		_Head_base<0, int::_Head_base(); // 303
		_Head_base<1, std::default_delete<int []>, true>::_Head_base(); // 561
		_Tuple_impl<1, std::default_delete<int []> >::_Tuple_impl(); // 303
		_Tuple_impl<0, int::_Tuple_impl(); // 966
		tuple<int::tuple(); // 167
		__uniq_ptr_impl<int, std::default_delete<int []> >::__uniq_ptr_impl(); // 232
		__uniq_ptr_data<int, std::default_delete<int []>, true, true>::__uniq_ptr_data(); // 596
		unique_ptr<int [], std::default_delete<int []> >::unique_ptr<>(); // 618
		{
			bool bDoAsOneBlock; // 644
			{
				int nSize; // 634
				IntAABB_t::Depth(); // 632
				IntAABB_t::Height(); // 631
				IntAABB_t::Width(); // 630
				IntVector3D::IntVector3D(
						int nX,
						int nY,
						int nZ);  // 630
			}
			IntVector3D::IntVector3D(
					int nX,
					int nY,
					int nZ);  // 3338
			GetBlockSize(IntAABB_t vBounds); // 625
			GetNumSweeps(const IntAABB_t& vBounds); // 623
			ShouldDecompose(int nNumBlocksInDecomposition,
					IntVector3D vBlockSize);  // 644
			IntVector3D::IntVector3D(
					int nX,
					int nY,
					int nZ);  // 654
			DoesNeighborAffectSweep(int nSweep,
						IntVector3D vNeighborOffset);  // 654
		}
	}
	FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::FastSweepThreadedExecutionState(
					const JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls>& controls,
					const IntAABB_t& bounds);  // 3441
	FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::RunAlgorithm2(); // 3445
	CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::RemoveAll(); // 1798
	{
		int i; // 359
	}
	CUtlBlockMemory<unsigned int, int>::Purge(); // 354
	CUtlBlockMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Purge(); // 560
	CUtlBlockMemory<unsigned int, int>::Purge(); // 132
	CUtlBlockMemory<unsigned int, int>::~CUtlBlockMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::~CUtlVectorBase(); // 10
	CUtlBlockVector<unsigned int, int>::~CUtlBlockVector(); // 456
	{
		int *& __ptr; // 682
		__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 682
		unique_ptr<int [], std::default_delete<int []> >::get_deleter(); // 684
		default_delete<int []>::operator(
				int* __ptr);  // 684
	}
	unique_ptr<int [], std::default_delete<int []> >::~unique_ptr(); // 456
	{
		unsigned int *& __ptr; // 682
		__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 682
		unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get_deleter(); // 684
		default_delete<unsigned int []>::operator(
					unsigned int* __ptr);  // 684
	}
	unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::~unique_ptr(); // 456
	{
		SweepGroup_t* *& __ptr; // 682
		__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 682
		unique_ptr<SweepGroup_t::get_deleter(); // 684
		default_delete<SweepGroup_t::operator(
						SweepGroup_t** __ptr);  // 684
	}
	unique_ptr<SweepGroup_t::~unique_ptr(); // 456
	{
		SweepGroup_t *& __ptr; // 682
		__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 682
		unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get_deleter(); // 684
		default_delete<SweepGroup_t []>::operator(
					SweepGroup_t* __ptr);  // 684
	}
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::~unique_ptr(); // 456
	{
		long long unsigned int *& __ptr; // 682
		__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 682
		unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get_deleter(); // 684
		default_delete<long long unsigned int []>::operator(
							long long unsigned int* __ptr);  // 684
	}
	unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::~unique_ptr(); // 456
	FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::~FastSweepThreadedExecutionState(); // 3453
	FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::Run(); // 3450
} /* size: 0, variables: 1, inline expansions: 17 (0 bytes) */

// <044C676D> tier0_perproject/utlsoacontainer.cpp:3439
// variables: 9
// function calls: 102
void DoSweep<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >(const JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls>& controls, IntAABB_t vBounds)
{
	FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> > state; // 3441
	{
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 397
		IntVector3D::IntVector3D(); // 397
		IntVector3D::IntVector3D(); // 397
		CFastSweepControllerBase::CFastSweepControllerBase(); // 618
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		CTSListBase::CTSListBase(); // 846
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		QueuedSweepNode_t::QueuedSweepNode_t(); // 827
		Node_t::Node_t(); // 864
		CTSQueue<QueuedSweepNode_t, false>::End(); // 865
		CTSQueue<QueuedSweepNode_t, false>::CTSQueue(); // 618
		CDistanceFieldReinitializationControls::CDistanceFieldReinitializationControls(); // 132
		JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls>::JoinedClasses_t(); // 618
		CTSListBase::CTSListBase(); // 846
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		Node_t::Node_t(); // 864
		CTSQueue<SweepGroup_t::End(); // 865
		CTSQueue<SweepGroup_t::CTSQueue(); // 618
		CUtlBlockMemory<unsigned int, int>::CUtlBlockMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 14
		CUtlBlockVector<unsigned int, int>::CUtlBlockVector(
				int growSize,
				int initCapacity);  // 618
		_Head_base<0, long long unsigned int::_Head_base(); // 303
		_Head_base<1, std::default_delete<long long unsigned int []>, true>::_Head_base(); // 561
		_Tuple_impl<1, std::default_delete<long long unsigned int []> >::_Tuple_impl(); // 303
		_Tuple_impl<0, long long unsigned int::_Tuple_impl(); // 966
		tuple<long long unsigned int::tuple(); // 167
		__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::__uniq_ptr_impl(); // 232
		__uniq_ptr_data<long long unsigned int, std::default_delete<long long unsigned int []>, true, true>::__uniq_ptr_data(); // 596
		unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::unique_ptr<>(); // 618
		_Head_base<1, std::default_delete<SweepGroup_t []>, true>::_Head_base(); // 561
		_Tuple_impl<1, std::default_delete<SweepGroup_t []> >::_Tuple_impl(); // 303
		_Head_base<0, SweepGroup_t::_Head_base(); // 303
		_Tuple_impl<0, SweepGroup_t::_Tuple_impl(); // 966
		tuple<SweepGroup_t::tuple(); // 167
		__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::__uniq_ptr_impl(); // 232
		__uniq_ptr_data<SweepGroup_t, std::default_delete<SweepGroup_t []>, true, true>::__uniq_ptr_data(); // 596
		unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::unique_ptr<>(); // 618
		_Head_base<1, std::default_delete<SweepGroup_t::_Head_base(); // 561
		_Tuple_impl<1, std::default_delete<SweepGroup_t::_Tuple_impl(); // 303
		_Head_base<0, SweepGroup_t::_Head_base(); // 303
		_Tuple_impl<0, SweepGroup_t::_Tuple_impl(); // 966
		tuple<SweepGroup_t::tuple(); // 167
		__uniq_ptr_impl<SweepGroup_t::__uniq_ptr_impl(); // 232
		__uniq_ptr_data<SweepGroup_t::__uniq_ptr_data(); // 596
		unique_ptr<SweepGroup_t::unique_ptr<>(); // 618
		_Head_base<0, int::_Head_base(); // 303
		_Head_base<1, std::default_delete<int []>, true>::_Head_base(); // 561
		_Tuple_impl<1, std::default_delete<int []> >::_Tuple_impl(); // 303
		_Tuple_impl<0, int::_Tuple_impl(); // 966
		tuple<int::tuple(); // 167
		__uniq_ptr_impl<int, std::default_delete<int []> >::__uniq_ptr_impl(); // 232
		__uniq_ptr_data<int, std::default_delete<int []>, true, true>::__uniq_ptr_data(); // 596
		unique_ptr<int [], std::default_delete<int []> >::unique_ptr<>(); // 618
		{
			bool bDoAsOneBlock; // 644
			{
				int nSize; // 634
				IntAABB_t::Depth(); // 632
				IntAABB_t::Height(); // 631
				IntAABB_t::Width(); // 630
				IntVector3D::IntVector3D(
						int nX,
						int nY,
						int nZ);  // 630
			}
			GetNumSweeps(const IntAABB_t& vBounds); // 623
			IntVector3D::IntVector3D(
					int nX,
					int nY,
					int nZ);  // 184
			GetBlockSize(IntAABB_t vBounds); // 625
			ShouldDecompose(int nNumBlocksInDecomposition,
					IntVector3D vBlockSize);  // 644
			IntVector3D::IntVector3D(
					int nX,
					int nY,
					int nZ);  // 654
			DoesNeighborAffectSweep(int nSweep,
						IntVector3D vNeighborOffset);  // 654
		}
	}
	FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::FastSweepThreadedExecutionState(
					const JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls>& controls,
					const IntAABB_t& bounds);  // 3441
	FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::RunAlgorithm2(); // 3445
	CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::RemoveAll(); // 1798
	{
		int i; // 359
	}
	CUtlBlockMemory<unsigned int, int>::Purge(); // 354
	CUtlBlockMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Purge(); // 560
	CUtlBlockMemory<unsigned int, int>::Purge(); // 132
	CUtlBlockMemory<unsigned int, int>::~CUtlBlockMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::~CUtlVectorBase(); // 10
	CUtlBlockVector<unsigned int, int>::~CUtlBlockVector(); // 456
	{
		int *& __ptr; // 682
		__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 682
		unique_ptr<int [], std::default_delete<int []> >::get_deleter(); // 684
		default_delete<int []>::operator(
				int* __ptr);  // 684
	}
	unique_ptr<int [], std::default_delete<int []> >::~unique_ptr(); // 456
	{
		unsigned int *& __ptr; // 682
		__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 682
		unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get_deleter(); // 684
		default_delete<unsigned int []>::operator(
					unsigned int* __ptr);  // 684
	}
	unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::~unique_ptr(); // 456
	{
		SweepGroup_t* *& __ptr; // 682
		__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 682
		unique_ptr<SweepGroup_t::get_deleter(); // 684
		default_delete<SweepGroup_t::operator(
						SweepGroup_t** __ptr);  // 684
	}
	unique_ptr<SweepGroup_t::~unique_ptr(); // 456
	{
		SweepGroup_t *& __ptr; // 682
		__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 682
		unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get_deleter(); // 684
		default_delete<SweepGroup_t []>::operator(
					SweepGroup_t* __ptr);  // 684
	}
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::~unique_ptr(); // 456
	{
		long long unsigned int *& __ptr; // 682
		__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 682
		unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get_deleter(); // 684
		default_delete<long long unsigned int []>::operator(
							long long unsigned int* __ptr);  // 684
	}
	unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::~unique_ptr(); // 456
	FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::~FastSweepThreadedExecutionState(); // 3453
	FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::Run(); // 3450
} /* size: 0, variables: 1, inline expansions: 17 (0 bytes) */

// <044C50E3> tier0_perproject/utlsoacontainer.cpp:3439
// variables: 9
// function calls: 102
void DoSweep<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >(const JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls>& controls, IntAABB_t vBounds)
{
	FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> > state; // 3441
	{
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 397
		IntVector3D::IntVector3D(); // 397
		IntVector3D::IntVector3D(); // 397
		CFastSweepControllerBase::CFastSweepControllerBase(); // 618
		CInterlockedIntT<int, 4>::CInterlockedIntT(
				int value);  // 618
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		CTSListBase::CTSListBase(); // 846
		QueuedSweepNode_t::QueuedSweepNode_t(); // 827
		Node_t::Node_t(); // 864
		CTSQueue<QueuedSweepNode_t, false>::End(); // 865
		CTSQueue<QueuedSweepNode_t, false>::CTSQueue(); // 618
		CInterlockedIntT<int, 4>::CInterlockedIntT(
				int value);  // 618
		CHeatTransferEquationControls::CHeatTransferEquationControls(); // 132
		JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls>::JoinedClasses_t(); // 618
		CTSListBase::CTSListBase(); // 846
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		Node_t::Node_t(); // 864
		CTSQueue<SweepGroup_t::End(); // 865
		CTSQueue<SweepGroup_t::CTSQueue(); // 618
		CUtlBlockMemory<unsigned int, int>::CUtlBlockMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 14
		CUtlBlockVector<unsigned int, int>::CUtlBlockVector(
				int growSize,
				int initCapacity);  // 618
		_Head_base<0, CInterlockedIntT<long long unsigned int, 8>::_Head_base(); // 303
		_Head_base<1, std::default_delete<CInterlockedIntT<long long unsigned int, 8> []>, true>::_Head_base(); // 561
		_Tuple_impl<1, std::default_delete<CInterlockedIntT<long long unsigned int, 8> []> >::_Tuple_impl(); // 303
		_Tuple_impl<0, CInterlockedIntT<long long unsigned int, 8>::_Tuple_impl(); // 966
		tuple<CInterlockedIntT<long long unsigned int, 8>::tuple(); // 167
		__uniq_ptr_impl(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long unsigne this); // 232
		__uniq_ptr_data(const __uniq_ptr_data<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long unsigne this); // 596
		unique_ptr<>(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long unsigned this); // 618
		_Head_base<1, std::default_delete<SweepGroup_t []>, true>::_Head_base(); // 561
		_Tuple_impl<1, std::default_delete<SweepGroup_t []> >::_Tuple_impl(); // 303
		_Head_base<0, SweepGroup_t::_Head_base(); // 303
		_Tuple_impl<0, SweepGroup_t::_Tuple_impl(); // 966
		tuple<SweepGroup_t::tuple(); // 167
		__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::__uniq_ptr_impl(); // 232
		__uniq_ptr_data<SweepGroup_t, std::default_delete<SweepGroup_t []>, true, true>::__uniq_ptr_data(); // 596
		unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::unique_ptr<>(); // 618
		_Head_base<1, std::default_delete<SweepGroup_t::_Head_base(); // 561
		_Tuple_impl<1, std::default_delete<SweepGroup_t::_Tuple_impl(); // 303
		_Head_base<0, SweepGroup_t::_Head_base(); // 303
		_Tuple_impl<0, SweepGroup_t::_Tuple_impl(); // 966
		tuple<SweepGroup_t::tuple(); // 167
		__uniq_ptr_impl<SweepGroup_t::__uniq_ptr_impl(); // 232
		__uniq_ptr_data<SweepGroup_t::__uniq_ptr_data(); // 596
		unique_ptr<SweepGroup_t::unique_ptr<>(); // 618
		_Head_base<0, CInterlockedIntT<int, 4>::_Head_base(); // 303
		_Head_base<1, std::default_delete<CInterlockedIntT<int, 4> []>, true>::_Head_base(); // 561
		_Tuple_impl<1, std::default_delete<CInterlockedIntT<int, 4> []> >::_Tuple_impl(); // 303
		_Tuple_impl<0, CInterlockedIntT<int, 4>::_Tuple_impl(); // 966
		tuple<CInterlockedIntT<int, 4>::tuple(); // 167
		__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::__uniq_ptr_impl(); // 232
		__uniq_ptr_data<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []>, true, true>::__uniq_ptr_data(); // 596
		unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::unique_ptr<>(); // 618
		{
			bool bDoAsOneBlock; // 644
			{
				int nSize; // 634
				IntAABB_t::Depth(); // 632
				IntAABB_t::Height(); // 631
				IntAABB_t::Width(); // 630
				IntVector3D::IntVector3D(
						int nX,
						int nY,
						int nZ);  // 630
			}
			GetNumSweeps(const IntAABB_t& vBounds); // 623
			IntVector3D::IntVector3D(
					int nX,
					int nY,
					int nZ);  // 184
			GetBlockSize(IntAABB_t vBounds); // 625
			ShouldDecompose(int nNumBlocksInDecomposition,
					IntVector3D vBlockSize);  // 644
			IntVector3D::IntVector3D(
					int nX,
					int nY,
					int nZ);  // 654
			DoesNeighborAffectSweep(int nSweep,
						IntVector3D vNeighborOffset);  // 654
		}
	}
	FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::FastSweepThreadedExecutionState(
					const JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls>& controls,
					const IntAABB_t& bounds);  // 3441
	CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::RemoveAll(); // 1798
	{
		int i; // 359
	}
	CUtlBlockMemory<unsigned int, int>::Purge(); // 354
	CUtlBlockMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Purge(); // 560
	CUtlBlockMemory<unsigned int, int>::Purge(); // 132
	CUtlBlockMemory<unsigned int, int>::~CUtlBlockMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::~CUtlVectorBase(); // 10
	CUtlBlockVector<unsigned int, int>::~CUtlBlockVector(); // 456
	{
		CInterlockedIntT<int, 4> *& __ptr; // 682
		__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 682
		unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get_deleter(); // 684
		default_delete<CInterlockedIntT<int, 4> []>::operator(
							CInterlockedIntT<int, 4>* __ptr);  // 684
	}
	unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::~unique_ptr(); // 456
	{
		unsigned int *& __ptr; // 682
		__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 682
		unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get_deleter(); // 684
		default_delete<unsigned int []>::operator(
					unsigned int* __ptr);  // 684
	}
	unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::~unique_ptr(); // 456
	{
		SweepGroup_t* *& __ptr; // 682
		__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 682
		unique_ptr<SweepGroup_t::get_deleter(); // 684
		default_delete<SweepGroup_t::operator(
						SweepGroup_t** __ptr);  // 684
	}
	unique_ptr<SweepGroup_t::~unique_ptr(); // 456
	{
		SweepGroup_t *& __ptr; // 682
		__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 682
		unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get_deleter(); // 684
		default_delete<SweepGroup_t []>::operator(
					SweepGroup_t* __ptr);  // 684
	}
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::~unique_ptr(); // 456
	{
		CInterlockedIntT<long long unsigned int, 8> *& __ptr; // 682
		_M_ptr(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long unsigne this); // 682
		get_deleter(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long unsigned this); // 684
		default_delete<CInterlockedIntT<long long unsigned int, 8> []>::operator(
									CInterlockedIntT<long long unsigned int, 8>* __ptr);  // 684
	}
	~unique_ptr(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long unsigned this); // 456
	FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::~FastSweepThreadedExecutionState(); // 3453
} /* size: 0, variables: 1, inline expansions: 15 (0 bytes) */

// <044C3AA2> tier0_perproject/utlsoacontainer.cpp:3439
// variables: 9
// function calls: 100
void DoSweep<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >(const JoinedClasses_t<CNonThreadedControls, CGutterFillingControls>& controls, IntAABB_t vBounds)
{
	FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > state; // 3441
	{
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 397
		IntVector3D::IntVector3D(); // 397
		IntVector3D::IntVector3D(); // 397
		CFastSweepControllerBase::CFastSweepControllerBase(); // 618
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		CTSListBase::CTSListBase(); // 846
		QueuedSweepNode_t::QueuedSweepNode_t(); // 827
		Node_t::Node_t(); // 864
		CTSQueue<QueuedSweepNode_t, false>::End(); // 865
		CTSQueue<QueuedSweepNode_t, false>::CTSQueue(); // 618
		CTSListBase::CTSListBase(); // 846
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		Node_t::Node_t(); // 864
		CTSQueue<SweepGroup_t::End(); // 865
		CTSQueue<SweepGroup_t::CTSQueue(); // 618
		CUtlBlockMemory<unsigned int, int>::CUtlBlockMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 14
		CUtlBlockVector<unsigned int, int>::CUtlBlockVector(
				int growSize,
				int initCapacity);  // 618
		_Head_base<0, long long unsigned int::_Head_base(); // 303
		_Head_base<1, std::default_delete<long long unsigned int []>, true>::_Head_base(); // 561
		_Tuple_impl<1, std::default_delete<long long unsigned int []> >::_Tuple_impl(); // 303
		_Tuple_impl<0, long long unsigned int::_Tuple_impl(); // 966
		tuple<long long unsigned int::tuple(); // 167
		__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::__uniq_ptr_impl(); // 232
		__uniq_ptr_data<long long unsigned int, std::default_delete<long long unsigned int []>, true, true>::__uniq_ptr_data(); // 596
		unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::unique_ptr<>(); // 618
		_Head_base<1, std::default_delete<SweepGroup_t []>, true>::_Head_base(); // 561
		_Tuple_impl<1, std::default_delete<SweepGroup_t []> >::_Tuple_impl(); // 303
		_Head_base<0, SweepGroup_t::_Head_base(); // 303
		_Tuple_impl<0, SweepGroup_t::_Tuple_impl(); // 966
		tuple<SweepGroup_t::tuple(); // 167
		__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::__uniq_ptr_impl(); // 232
		__uniq_ptr_data<SweepGroup_t, std::default_delete<SweepGroup_t []>, true, true>::__uniq_ptr_data(); // 596
		unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::unique_ptr<>(); // 618
		_Head_base<1, std::default_delete<SweepGroup_t::_Head_base(); // 561
		_Tuple_impl<1, std::default_delete<SweepGroup_t::_Tuple_impl(); // 303
		_Head_base<0, SweepGroup_t::_Head_base(); // 303
		_Tuple_impl<0, SweepGroup_t::_Tuple_impl(); // 966
		tuple<SweepGroup_t::tuple(); // 167
		__uniq_ptr_impl<SweepGroup_t::__uniq_ptr_impl(); // 232
		__uniq_ptr_data<SweepGroup_t::__uniq_ptr_data(); // 596
		unique_ptr<SweepGroup_t::unique_ptr<>(); // 618
		_Head_base<0, int::_Head_base(); // 303
		_Head_base<1, std::default_delete<int []>, true>::_Head_base(); // 561
		_Tuple_impl<1, std::default_delete<int []> >::_Tuple_impl(); // 303
		_Tuple_impl<0, int::_Tuple_impl(); // 966
		tuple<int::tuple(); // 167
		__uniq_ptr_impl<int, std::default_delete<int []> >::__uniq_ptr_impl(); // 232
		__uniq_ptr_data<int, std::default_delete<int []>, true, true>::__uniq_ptr_data(); // 596
		unique_ptr<int [], std::default_delete<int []> >::unique_ptr<>(); // 618
		{
			bool bDoAsOneBlock; // 644
			{
				int nSize; // 634
				IntAABB_t::Depth(); // 632
				IntAABB_t::Height(); // 631
				IntAABB_t::Width(); // 630
				IntVector3D::IntVector3D(
						int nX,
						int nY,
						int nZ);  // 630
			}
			GetNumSweeps(const IntAABB_t& vBounds); // 623
			IntVector3D::IntVector3D(
					int nX,
					int nY,
					int nZ);  // 184
			GetBlockSize(IntAABB_t vBounds); // 625
			ShouldDecompose(int nNumBlocksInDecomposition,
					IntVector3D vBlockSize);  // 644
			IntVector3D::IntVector3D(
					int nX,
					int nY,
					int nZ);  // 654
			DoesNeighborAffectSweep(int nSweep,
						IntVector3D vNeighborOffset);  // 654
		}
	}
	FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::FastSweepThreadedExecutionState(
					const JoinedClasses_t<CNonThreadedControls, CGutterFillingControls>& controls,
					const IntAABB_t& bounds);  // 3441
	FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::RunAlgorithm2(); // 3445
	CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::RemoveAll(); // 1798
	{
		int i; // 359
	}
	CUtlBlockMemory<unsigned int, int>::Purge(); // 354
	CUtlBlockMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Purge(); // 560
	CUtlBlockMemory<unsigned int, int>::Purge(); // 132
	CUtlBlockMemory<unsigned int, int>::~CUtlBlockMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::~CUtlVectorBase(); // 10
	CUtlBlockVector<unsigned int, int>::~CUtlBlockVector(); // 456
	{
		int *& __ptr; // 682
		__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 682
		unique_ptr<int [], std::default_delete<int []> >::get_deleter(); // 684
		default_delete<int []>::operator(
				int* __ptr);  // 684
	}
	unique_ptr<int [], std::default_delete<int []> >::~unique_ptr(); // 456
	{
		unsigned int *& __ptr; // 682
		__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 682
		unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get_deleter(); // 684
		default_delete<unsigned int []>::operator(
					unsigned int* __ptr);  // 684
	}
	unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::~unique_ptr(); // 456
	{
		SweepGroup_t* *& __ptr; // 682
		__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 682
		unique_ptr<SweepGroup_t::get_deleter(); // 684
		default_delete<SweepGroup_t::operator(
						SweepGroup_t** __ptr);  // 684
	}
	unique_ptr<SweepGroup_t::~unique_ptr(); // 456
	{
		SweepGroup_t *& __ptr; // 682
		__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 682
		unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get_deleter(); // 684
		default_delete<SweepGroup_t []>::operator(
					SweepGroup_t* __ptr);  // 684
	}
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::~unique_ptr(); // 456
	{
		long long unsigned int *& __ptr; // 682
		__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 682
		unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get_deleter(); // 684
		default_delete<long long unsigned int []>::operator(
							long long unsigned int* __ptr);  // 684
	}
	unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::~unique_ptr(); // 456
	FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::~FastSweepThreadedExecutionState(); // 3453
	FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::Run(); // 3450
} /* size: 0, variables: 1, inline expansions: 17 (0 bytes) */

// <044DF108> tier0_perproject/utlsoacontainer.cpp:3458
// variables: 2
// function calls: 5
void CSOAContainer::GenerateUnsignedDistanceField(int nAttr, IntAABB_t bounds, float flGridSizeToDistanceScale, int nLockAttr, int nMaxThreads)
{
	{
		JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> controls; // 3462
		CEikonalExecuteControls::CEikonalExecuteControls(); // 132
		JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls>::JoinedClasses_t(); // 3462
		SetMaxThreads(int nNumWorkers); // 3463
	}
	{
		JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> controls; // 3473
		CEikonalExecuteControls::CEikonalExecuteControls(); // 132
		JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls>::JoinedClasses_t(); // 3473
	}
} /* size: 0 */

// <044DEEF7> tier0_perproject/utlsoacontainer.cpp:3483
// variables: 2
// function calls: 5
void CSOAContainer::GenerateSignedDistanceField(int nAttr, IntAABB_t bounds, float flGridSizeToDistanceScale, int nLockAttr, int nMaxThreads)
{
	{
		JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> controls; // 3487
		CEikonalExecuteControls::CEikonalExecuteControls(); // 132
		JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls>::JoinedClasses_t(); // 3487
		SetMaxThreads(int nNumWorkers); // 3488
	}
	{
		JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> controls; // 3498
		CEikonalExecuteControls::CEikonalExecuteControls(); // 132
		JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls>::JoinedClasses_t(); // 3498
	}
} /* size: 0 */

// <044DECA0> tier0_perproject/utlsoacontainer.cpp:3509
// variables: 15
// function calls: 3
void DistanceReinitializationPass(float* pData, IntVector3D vStepStrides, IntVector3D vLoopCounts, float flGridSizeToDistanceScale, int nSupressFirstFetchMask)
{
	{
		int nZCount; // 3512
		{
			int nYCount; // 3514
			{
				float* pCur; // 3516
				float flLastD; // 3517
				{
					int nXCount; // 3523
					{
						bool bSkip; // 3525
						{
							float flCurDist; // 3530
							float d1; // 3531
							float d2; // 3532
							float d3; // 3533
							float flDx; // 3536
							float flDy; // 3537
							float flDz; // 3538
							float flGradMagnitude; // 3539
							float flScale; // 3540
							Square<float>(const float& a); // 3539
							Square<float>(const float& a); // 3539
							Square<float>(const float& a); // 3539
						}
					}
				}
			}
		}
	}
} /* size: 0 */

// <044DEB45> tier0_perproject/utlsoacontainer.cpp:3557
void CDistanceFieldReinitializationControls::CDistanceFieldReinitializationControls()
{
} /* size: 0 */

// <044DEB28> tier0_perproject/utlsoacontainer.cpp:3557
inline void CDistanceFieldReinitializationControls::CDistanceFieldReinitializationControls()
{
} /* size: 0 */

// <044879FF> tier0_perproject/utlsoacontainer.cpp:3557
// member functions: 8
// member variables: 5
// class size: 24
class CDistanceFieldReinitializationControls : public CExecuteControlsBase {
public:
	/* class CExecuteControlsBase <ancestor>; */ /* 0 0 */
	float * m_pBaseAddress; /* 0 8 */
	int m_nDataWidth; /* 8 4 */
	int m_nDataHeight; /* 12 4 */
	float m_flGridSizeToDistanceScale; /* 16 4 */
	/* tier0_perproject/utlsoacontainer.cpp:3565 */
	void Init(CDistanceFieldReinitializationControls* , const CSOAContainer* , int);
	/* tier0_perproject/utlsoacontainer.cpp:3572 */
	void ExecuteOnBlock(CDistanceFieldReinitializationControls* , IntVector3D, int, const IntAABB_t& , IntVector3D, CFastSweepControllerBase* , int);
	/* tier0_perproject/utlsoacontainer.cpp:3578 */
	void ExecuteOn4Blocks(CDistanceFieldReinitializationControls* , IntVector3D, IntVector3D, IntVector3D, IntVector3D, int, const IntAABB_t& , IntVector3D, CFastSweepControllerBase* );
	void CDistanceFieldReinitializationControls(CDistanceFieldReinitializationControls* );
	void Init(class CDistanceFieldReinitializationControls *, const class CSOAContainer  *, int); /* linkage=_ZN38CDistanceFieldReinitializationControls4InitEPK13CSOAContaineri */
	void ExecuteOnBlock(class CDistanceFieldReinitializationControls *, class IntVector3D, int, const class IntAABB_t  &, class IntVector3D, class CFastSweepControllerBase *, int); /* linkage=_ZN38CDistanceFieldReinitializationControls14ExecuteOnBlockE11IntVector3DiRK9IntAABB_tS0_P24CFastSweepControllerBasei */
	void ExecuteOn4Blocks(class CDistanceFieldReinitializationControls *, class IntVector3D, class IntVector3D, class IntVector3D, class IntVector3D, int, const class IntAABB_t  &, class IntVector3D, class CFastSweepControllerBase *); /* linkage=_ZN38CDistanceFieldReinitializationControls16ExecuteOn4BlocksE11IntVector3DS0_S0_S0_iRK9IntAABB_tS0_P24CFastSweepControllerBase */
	void CDistanceFieldReinitializationControls(class CDistanceFieldReinitializationControls *); /* linkage=_ZN38CDistanceFieldReinitializationControlsC4Ev */
};

// <044DEC6D> tier0_perproject/utlsoacontainer.cpp:3565
inline void CDistanceFieldReinitializationControls::Init(const CSOAContainer* pContainer, int nAttr)
{
} /* size: 0 */

// <044DEC06> tier0_perproject/utlsoacontainer.cpp:3572
inline void CDistanceFieldReinitializationControls::ExecuteOnBlock(IntVector3D vBlockIndex, int nWhichSweep, const IntAABB_t& vBounds, IntVector3D vStart, CFastSweepControllerBase* pController, int nBoundaryMask)
{
} /* size: 0 */

// <044DEB5C> tier0_perproject/utlsoacontainer.cpp:3578
// variables: 2
inline void CDistanceFieldReinitializationControls::ExecuteOn4Blocks(IntVector3D vBlockIndex0, IntVector3D vBlockIndex1, IntVector3D vBlockIndex2, IntVector3D vBlockIndex3, int nWhichSweep, const IntAABB_t& vBounds, IntVector3D vStart, CFastSweepControllerBase* pController)
{
	const char   __FUNCTION__; // 6676
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3580
	}
} /* size: 0, variables: 1 */

// <01B3A26E> tier0_perproject/utlsoacontainer.cpp:3578
// variables: 2
inline void CDistanceFieldReinitializationControls::ExecuteOn4Blocks(IntVector3D vBlockIndex0, IntVector3D vBlockIndex1, IntVector3D vBlockIndex2, IntVector3D vBlockIndex3, int nWhichSweep, const IntAABB_t& vBounds, IntVector3D vStart, CFastSweepControllerBase* pController)
{
	const char   __FUNCTION__; // 47065
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3580
	}
} /* size: 0, variables: 1 */

// <009BFAD1> tier0_perproject/utlsoacontainer.cpp:3578
// variables: 2
inline void CDistanceFieldReinitializationControls::ExecuteOn4Blocks(IntVector3D vBlockIndex0, IntVector3D vBlockIndex1, IntVector3D vBlockIndex2, IntVector3D vBlockIndex3, int nWhichSweep, const IntAABB_t& vBounds, IntVector3D vStart, CFastSweepControllerBase* pController)
{
	const char   __FUNCTION__; // 39785
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3580
	}
} /* size: 0, variables: 1 */

// <044DE91F> tier0_perproject/utlsoacontainer.cpp:3585
// variables: 2
// function calls: 5
void CSOAContainer::ReinitializeSignedDistanceField(int nAttr, IntAABB_t bounds, float flGridSizeToDistanceScale, bool bDisableThreading)
{
	{
		JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> controls; // 3589
		CSOAContainer::ElementPointer<float>(
					int nAttributeIdx,
					int nX,
					int nY,
					int nZ);  // 3567
		CDistanceFieldReinitializationControls::Init(
			const CSOAContainer* pContainer,
			int nAttr);  // 3590
	}
	{
		JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> controls; // 3595
		CDistanceFieldReinitializationControls::CDistanceFieldReinitializationControls(); // 132
		JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls>::JoinedClasses_t(); // 3595
		CDistanceFieldReinitializationControls::Init(
			const CSOAContainer* pContainer,
			int nAttr);  // 3596
	}
} /* size: 0 */

// <044DE7D0> tier0_perproject/utlsoacontainer.cpp:3606
// variables: 6
void HeatTransferPass2D(float* pData, IntVector3D vStepStrides, IntVector3D vLoopCounts, int nSupressFirstFetchMask, float flBB, float flB1, float flB2, float flB3)
{
	{
		int nYCount; // 3610
		{
			float* pCur; // 3612
			float flPrev1X; // 3614
			float flPrev2X; // 3615
			float flPrev3X; // 3616
			{
				int nXCount; // 3623
			}
		}
	}
} /* size: 348 */

// <044DE681> tier0_perproject/utlsoacontainer.cpp:3636
// variables: 6
void HeatTransferPass2DVert(float* pData, IntVector3D vStepStrides, IntVector3D vLoopCounts, int nSupressFirstFetchMask, float flBB, float flB1, float flB2, float flB3)
{
	{
		int nYCount; // 3640
		{
			float* pCur; // 3642
			{
				int nXCount; // 3644
				{
					float flPrev1Y; // 3646
					float flPrev2Y; // 3651
					float flPrev3Y; // 3656
				}
			}
		}
	}
} /* size: 331 */

// <044DE50C> tier0_perproject/utlsoacontainer.cpp:3669
void CHeatTransferEquationControls::CHeatTransferEquationControls()
{
} /* size: 0 */

// <044DE4EF> tier0_perproject/utlsoacontainer.cpp:3669
inline void CHeatTransferEquationControls::CHeatTransferEquationControls()
{
} /* size: 0 */

// <04487B72> tier0_perproject/utlsoacontainer.cpp:3669
// member functions: 8
// member variables: 9
// class size: 40
class CHeatTransferEquationControls : public CExecuteControlsBase {
public:
	/* class CExecuteControlsBase <ancestor>; */ /* 0 0 */
	int m_nDataWidth; /* 0 4 */
	int m_nDataHeight; /* 4 4 */
	int m_nAttrMask; /* 8 4 */
	CSOAContainer * m_pContainer; /* 16 8 */
	float m_flB1; /* 24 4 */
	float m_flB2; /* 28 4 */
	float m_flB3; /* 32 4 */
	float m_flBB; /* 36 4 */
	/* tier0_perproject/utlsoacontainer.cpp:3683 */
	void Init(CHeatTransferEquationControls* , CSOAContainer* , int, float);
	/* tier0_perproject/utlsoacontainer.cpp:3715 */
	void ExecuteOnBlock(CHeatTransferEquationControls* , IntVector3D, int, const IntAABB_t& , IntVector3D, CFastSweepControllerBase* , int);
	/* tier0_perproject/utlsoacontainer.cpp:3732 */
	void ExecuteOn4Blocks(CHeatTransferEquationControls* , IntVector3D, IntVector3D, IntVector3D, IntVector3D, int, const IntAABB_t& , IntVector3D, CFastSweepControllerBase* );
	void CHeatTransferEquationControls(CHeatTransferEquationControls* );
	void Init(class CHeatTransferEquationControls *, class CSOAContainer *, int, float); /* linkage=_ZN29CHeatTransferEquationControls4InitEP13CSOAContainerif */
	void ExecuteOnBlock(class CHeatTransferEquationControls *, class IntVector3D, int, const class IntAABB_t  &, class IntVector3D, class CFastSweepControllerBase *, int); /* linkage=_ZN29CHeatTransferEquationControls14ExecuteOnBlockE11IntVector3DiRK9IntAABB_tS0_P24CFastSweepControllerBasei */
	void ExecuteOn4Blocks(class CHeatTransferEquationControls *, class IntVector3D, class IntVector3D, class IntVector3D, class IntVector3D, int, const class IntAABB_t  &, class IntVector3D, class CFastSweepControllerBase *); /* linkage=_ZN29CHeatTransferEquationControls16ExecuteOn4BlocksE11IntVector3DS0_S0_S0_iRK9IntAABB_tS0_P24CFastSweepControllerBase */
	void CHeatTransferEquationControls(class CHeatTransferEquationControls *); /* linkage=_ZN29CHeatTransferEquationControlsC4Ev */
};

// <044DE641> tier0_perproject/utlsoacontainer.cpp:3683
inline void CHeatTransferEquationControls::Init(CSOAContainer* pContainer, int nAttrMask, float flDeviation)
{
} /* size: 0 */

// <0450F47E> tier0_perproject/utlsoacontainer.cpp:3715
// variables: 3
// function calls: 17
void CHeatTransferEquationControls::ExecuteOnBlock(int nWhichSweep, const IntAABB_t& vBounds, IntVector3D vStart, int nBoundaryMask, CFastSweepControllerBase* pController, IntVector3D vBlockIndex)
{
	{
		CSOAAttributeIterator i; // 3717
		CSOAAttributeIterator::CSOAAttributeIterator(); // 99
		{
			int i; // 102
			CSOAContainer::HasAllocatedMemory(
						int nAttrIdx);  // 104
		}
		CSOAContainer::FirstAttr(); // 3717
		CSOAAttributeIterator::operator bool(); // 3717
		IntAABB_t::Height(); // 457
		IntAABB_t::Depth(); // 457
		IntAABB_t::Width(); // 457
		IntVector3D::IntVector3D(
				int nX,
				int nY,
				int nZ);  // 457
		IntAABB_t::Size(); // 3722
		CSOAContainer::ElementPointer<float>(
					int nAttributeIdx,
					int nX,
					int nY,
					int nZ);  // 3722
		IntVector3D::IntVector3D(
				int nX,
				int nY,
				int nZ);  // 3722
		{
			int i; // 1647
			CSOAContainer::HasAllocatedMemory(
						int nAttrIdx);  // 1649
		}
		CSOAAttributeIterator::Next(); // 231
		CSOAAttributeIterator::operator++(
				int);  // 3717
		IntVector3D::IntVector3D(
				int nX,
				int nY,
				int nZ);  // 457
		IntAABB_t::Size(); // 3726
		IntVector3D::IntVector3D(
				int nX,
				int nY,
				int nZ);  // 3726
	}
} /* size: 500 */

// <044DE5CD> tier0_perproject/utlsoacontainer.cpp:3715
// variable: 1
inline void CHeatTransferEquationControls::ExecuteOnBlock(IntVector3D vBlockIndex, int nWhichSweep, const IntAABB_t& vBounds, IntVector3D vStart, CFastSweepControllerBase* pController, int nBoundaryMask)
{
	{
		CSOAAttributeIterator i; // 3717
	}
} /* size: 0 */

// <044DE523> tier0_perproject/utlsoacontainer.cpp:3732
// variables: 2
inline void CHeatTransferEquationControls::ExecuteOn4Blocks(IntVector3D vBlockIndex0, IntVector3D vBlockIndex1, IntVector3D vBlockIndex2, IntVector3D vBlockIndex3, int nWhichSweep, const IntAABB_t& vBounds, IntVector3D vStart, CFastSweepControllerBase* pController)
{
	const char   __FUNCTION__; // 6676
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3734
	}
} /* size: 0, variables: 1 */

// <01B39C35> tier0_perproject/utlsoacontainer.cpp:3732
// variables: 2
inline void CHeatTransferEquationControls::ExecuteOn4Blocks(IntVector3D vBlockIndex0, IntVector3D vBlockIndex1, IntVector3D vBlockIndex2, IntVector3D vBlockIndex3, int nWhichSweep, const IntAABB_t& vBounds, IntVector3D vStart, CFastSweepControllerBase* pController)
{
	const char   __FUNCTION__; // 47065
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3734
	}
} /* size: 0, variables: 1 */

// <009BF498> tier0_perproject/utlsoacontainer.cpp:3732
// variables: 2
inline void CHeatTransferEquationControls::ExecuteOn4Blocks(IntVector3D vBlockIndex0, IntVector3D vBlockIndex1, IntVector3D vBlockIndex2, IntVector3D vBlockIndex3, int nWhichSweep, const IntAABB_t& vBounds, IntVector3D vStart, CFastSweepControllerBase* pController)
{
	const char   __FUNCTION__; // 39785
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3734
	}
} /* size: 0, variables: 1 */

// <044DE2C0> tier0_perproject/utlsoacontainer.cpp:3739
// variable: 1
// function calls: 6
void CSOAContainer::GaussianBlurUsingSweeping(int nAttrMask, IntAABB_t bounds, float flAlpha, int nMaxThreads)
{
	JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> controls; // 3741
	CHeatTransferEquationControls::CHeatTransferEquationControls(); // 132
	JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls>::JoinedClasses_t(); // 3741
	CSOAContainer::PaddedWidth(); // 3685
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 3686
	CHeatTransferEquationControls::Init(
		CSOAContainer* pContainer,
		int nAttrMask,
		float flDeviation);  // 3742
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <044DE0AF> tier0_perproject/utlsoacontainer.cpp:3749
// variables: 10
// function call: 1
void GutterFill2D(float* pData, IntVector3D vStepStrides, IntVector3D vLoopCounts, int nSupressFirstFetchMask, size_t nAlphaOffset, size_t nGreenOffset, size_t nBlueOffset, size_t nAccWeightsOffset)
{
	{
		int nYCount; // 3751
		{
			float* pCur; // 3753
			{
				int nXCount; // 3755
				{
					float flTotal; // 3760
					Vector vAccColor; // 3761
					{
						float* pPrev; // 3765
						float flPrevAlpha; // 3766
					}
					{
						float* pPrev; // 3774
						float flPrevAlpha; // 3775
					}
					{
						const float  flScaleDown; // 3783
					}
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 3761
				}
			}
		}
	}
} /* size: 0 */

// <04487D2A> tier0_perproject/utlsoacontainer.cpp:3795
// member functions: 6
// member variables: 7
// class size: 40
class CGutterFillingControls : public CExecuteControlsBase {
public:
	/* class CExecuteControlsBase <ancestor>; */ /* 0 0 */
	int m_nDataWidth; /* 0 4 */
	int m_nDataHeight; /* 4 4 */
	int m_nAttrMask; /* 8 4 */
	CSOAContainer * m_pContainer; /* 16 8 */
	int m_nAccWeightsIndex; /* 24 4 */
	int m_nColorAccAttributeIndices[3]; /* 28 12 */
	/* tier0_perproject/utlsoacontainer.cpp:3805 */
	void Init(CGutterFillingControls* , CSOAContainer* , int);
	/* tier0_perproject/utlsoacontainer.cpp:3814 */
	void ExecuteOnBlock(CGutterFillingControls* , IntVector3D, int, const IntAABB_t& , IntVector3D, CFastSweepControllerBase* , int);
	/* tier0_perproject/utlsoacontainer.cpp:3827 */
	void ExecuteOn4Blocks(CGutterFillingControls* , IntVector3D, IntVector3D, IntVector3D, IntVector3D, int, const IntAABB_t& , IntVector3D, CFastSweepControllerBase* );
	void Init(class CGutterFillingControls *, class CSOAContainer *, int); /* linkage=_ZN22CGutterFillingControls4InitEP13CSOAContaineri */
	void ExecuteOnBlock(class CGutterFillingControls *, class IntVector3D, int, const class IntAABB_t  &, class IntVector3D, class CFastSweepControllerBase *, int); /* linkage=_ZN22CGutterFillingControls14ExecuteOnBlockE11IntVector3DiRK9IntAABB_tS0_P24CFastSweepControllerBasei */
	void ExecuteOn4Blocks(class CGutterFillingControls *, class IntVector3D, class IntVector3D, class IntVector3D, class IntVector3D, int, const class IntAABB_t  &, class IntVector3D, class CFastSweepControllerBase *); /* linkage=_ZN22CGutterFillingControls16ExecuteOn4BlocksE11IntVector3DS0_S0_S0_iRK9IntAABB_tS0_P24CFastSweepControllerBase */
};

// <044DE07C> tier0_perproject/utlsoacontainer.cpp:3805
inline void CGutterFillingControls::Init(CSOAContainer* pContainer, int nAttrMask)
{
} /* size: 0 */

// <044DE008> tier0_perproject/utlsoacontainer.cpp:3814
// variable: 1
inline void CGutterFillingControls::ExecuteOnBlock(IntVector3D vBlockIndex, int nWhichSweep, const IntAABB_t& vBounds, IntVector3D vStart, CFastSweepControllerBase* pController, int nBoundaryMask)
{
	float* pBase; // 3816
} /* size: 0, variables: 1 */

// <044DDF5E> tier0_perproject/utlsoacontainer.cpp:3827
// variables: 2
inline void CGutterFillingControls::ExecuteOn4Blocks(IntVector3D vBlockIndex0, IntVector3D vBlockIndex1, IntVector3D vBlockIndex2, IntVector3D vBlockIndex3, int nWhichSweep, const IntAABB_t& vBounds, IntVector3D vStart, CFastSweepControllerBase* pController)
{
	const char   __FUNCTION__; // 6676
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3829
	}
} /* size: 0, variables: 1 */

// <01B39670> tier0_perproject/utlsoacontainer.cpp:3827
// variables: 2
inline void CGutterFillingControls::ExecuteOn4Blocks(IntVector3D vBlockIndex0, IntVector3D vBlockIndex1, IntVector3D vBlockIndex2, IntVector3D vBlockIndex3, int nWhichSweep, const IntAABB_t& vBounds, IntVector3D vStart, CFastSweepControllerBase* pController)
{
	const char   __FUNCTION__; // 47065
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3829
	}
} /* size: 0, variables: 1 */

// <009BEED3> tier0_perproject/utlsoacontainer.cpp:3827
// variables: 2
inline void CGutterFillingControls::ExecuteOn4Blocks(IntVector3D vBlockIndex0, IntVector3D vBlockIndex1, IntVector3D vBlockIndex2, IntVector3D vBlockIndex3, int nWhichSweep, const IntAABB_t& vBounds, IntVector3D vStart, CFastSweepControllerBase* pController)
{
	const char   __FUNCTION__; // 39785
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3829
	}
} /* size: 0, variables: 1 */

// <044DC6FE> tier0_perproject/utlsoacontainer.cpp:3834
// variables: 19
// function calls: 106
void CSOAContainer::FillGutterPixels(int nMaskAttr)
{
	JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> controls; // 3836
	int nAccWeights; // 3839
	int nColorAccAttributeIndices; // 3844
	{
		int i; // 3845
		{
			int i; // 88
			CSOAContainer::HasAllocatedMemory(
						int nAttrIdx);  // 90
		}
		CSOAContainer::AllocateAttributeIndex(); // 3847
	}
	{
		IntVector3D vCoords; // 3851
		IntAABB_CellRangeReference& __for_range; // 29357
		IntAABBIterator __for_begin; // 9767
		IntAABBIterator __for_end; // 9767
		{
			float flAlpha; // 3853
			{
				int i; // 3855
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 446
				CSOAContainer::FloatValue(
						int nAttrIdx,
						IntVector3D vCoord);  // 3857
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 446
				CSOAContainer::FloatValue(
						int nAttrIdx,
						IntVector3D vCoord);  // 3857
			}
			IntVector3D::IntVector3D(); // 507
			IntAABBIterator::operator*(); // 3851
			CSOAContainer::RowPtr<float>(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 442
			CSOAContainer::FloatValue(
					int nAttrIdx,
					int nX,
					int nY,
					int nZ);  // 446
			CSOAContainer::FloatValue(
					int nAttrIdx,
					IntVector3D vCoord);  // 3853
			CSOAContainer::RowPtr<float>(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 442
			CSOAContainer::FloatValue(
					int nAttrIdx,
					int nX,
					int nY,
					int nZ);  // 446
			CSOAContainer::FloatValue(
					int nAttrIdx,
					IntVector3D vCoord);  // 3854
		}
		CSOAContainer::NumCols(); // 382
		CSOAContainer::Width(); // 390
		CSOAContainer::NumRows(); // 383
		CSOAContainer::Height(); // 390
		IntVector3D::IntVector3D(
				int nX,
				int nY,
				int nZ);  // 390
		IntVector3D::IntVector3D(
				int nX,
				int nY,
				int nZ);  // 390
		IntVector3D::IntVector3D(); // 304
		IntVector3D::IntVector3D(); // 304
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
					const IntVector3D& mins,
					const IntVector3D& maxes);  // 430
		IntAABB_t::IntAABB_t(
				IntVector3D a,
				IntVector3D b);  // 390
		CSOAContainer::Bounds(); // 3851
		IntAABB_t::Width(); // 453
		IntAABB_t::Depth(); // 453
		IntAABB_t::Height(); // 453
		IntAABB_t::NumberOfCells(); // 525
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 525
		IntAABB_CellRangeReference::end(); // 3851
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 520
		IntAABB_CellRangeReference::begin(); // 3851
	}
	{
		IntVector3D vCoords; // 3863
		IntAABB_CellRangeReference& __for_range; // 29357
		IntAABBIterator __for_begin; // 9767
		IntAABBIterator __for_end; // 9767
		{
			float flAlpha; // 3865
			{
				float flSumWeights; // 3868
				{
					int i; // 3871
					CSOAContainer::RowPtr<float>(
							int nAttributeIdx,
							int nRowNumber,
							int nSliceNumber);  // 442
					CSOAContainer::FloatValue(
							int nAttrIdx,
							int nX,
							int nY,
							int nZ);  // 446
					CSOAContainer::FloatValue(
							int nAttrIdx,
							IntVector3D vCoord);  // 3873
					CSOAContainer::RowPtr<float>(
							int nAttributeIdx,
							int nRowNumber,
							int nSliceNumber);  // 442
					CSOAContainer::FloatValue(
							int nAttrIdx,
							int nX,
							int nY,
							int nZ);  // 446
					CSOAContainer::FloatValue(
							int nAttrIdx,
							IntVector3D vCoord);  // 3873
				}
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 446
				CSOAContainer::FloatValue(
						int nAttrIdx,
						IntVector3D vCoord);  // 3875
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 446
				CSOAContainer::FloatValue(
						int nAttrIdx,
						IntVector3D vCoord);  // 3868
			}
			IntVector3D::IntVector3D(); // 507
			IntAABBIterator::operator*(); // 3863
			CSOAContainer::RowPtr<float>(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 442
			CSOAContainer::FloatValue(
					int nAttrIdx,
					int nX,
					int nY,
					int nZ);  // 446
			CSOAContainer::FloatValue(
					int nAttrIdx,
					IntVector3D vCoord);  // 3865
		}
		CSOAContainer::NumSlices(); // 384
		CSOAContainer::Depth(); // 390
		CSOAContainer::NumRows(); // 383
		CSOAContainer::Height(); // 390
		CSOAContainer::NumCols(); // 382
		CSOAContainer::Width(); // 390
		IntVector3D::IntVector3D(
				int nX,
				int nY,
				int nZ);  // 390
		IntVector3D::IntVector3D(
				int nX,
				int nY,
				int nZ);  // 390
		IntVector3D::IntVector3D(); // 304
		IntVector3D::IntVector3D(); // 304
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
					const IntVector3D& mins,
					const IntVector3D& maxes);  // 430
		IntAABB_t::IntAABB_t(
				IntVector3D a,
				IntVector3D b);  // 390
		CSOAContainer::Bounds(); // 3863
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 520
		IntAABB_CellRangeReference::begin(); // 3863
		IntAABB_t::Width(); // 453
		IntAABB_t::Height(); // 453
		IntAABB_t::Depth(); // 453
		IntAABB_t::NumberOfCells(); // 525
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 525
		IntAABB_CellRangeReference::end(); // 3863
	}
	{
		int i; // 88
		CSOAContainer::HasAllocatedMemory(
					int nAttrIdx);  // 90
	}
	CSOAContainer::AllocateAttributeIndex(); // 3839
	CSOAContainer::PaddedWidth(); // 3807
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 3808
	CGutterFillingControls::Init(
		CSOAContainer* pContainer,
		int nAttrMask);  // 3837
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 390
	CSOAContainer::NumCols(); // 382
	CSOAContainer::Width(); // 390
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 390
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 390
	IntVector3D::IntVector3D(); // 304
	IntVector3D::IntVector3D(); // 304
	GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
				const IntVector3D& mins,
				const IntVector3D& maxes);  // 430
	IntAABB_t::IntAABB_t(
			IntVector3D a,
			IntVector3D b);  // 390
	CSOAContainer::Bounds(); // 3861
} /* size: 0, variables: 3, inline expansions: 16 (0 bytes) */

// <01B37E10> tier0_perproject/utlsoacontainer.cpp:3834
// variables: 19
// function calls: 106
void CSOAContainer::FillGutterPixels(int nMaskAttr)
{
	JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> controls; // 3836
	int nAccWeights; // 3839
	int nColorAccAttributeIndices; // 3844
	{
		int i; // 3845
		{
			int i; // 88
			CSOAContainer::HasAllocatedMemory(
						int nAttrIdx);  // 90
		}
		CSOAContainer::AllocateAttributeIndex(); // 3847
	}
	{
		IntVector3D vCoords; // 3851
		IntAABB_CellRangeReference& __for_range; // 4210
		IntAABBIterator __for_begin; // 50156
		IntAABBIterator __for_end; // 50156
		{
			float flAlpha; // 3853
			{
				int i; // 3855
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 446
				CSOAContainer::FloatValue(
						int nAttrIdx,
						IntVector3D vCoord);  // 3857
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 446
				CSOAContainer::FloatValue(
						int nAttrIdx,
						IntVector3D vCoord);  // 3857
			}
			IntVector3D::IntVector3D(); // 507
			IntAABBIterator::operator*(); // 3851
			CSOAContainer::RowPtr<float>(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 442
			CSOAContainer::FloatValue(
					int nAttrIdx,
					int nX,
					int nY,
					int nZ);  // 446
			CSOAContainer::FloatValue(
					int nAttrIdx,
					IntVector3D vCoord);  // 3853
			CSOAContainer::RowPtr<float>(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 442
			CSOAContainer::FloatValue(
					int nAttrIdx,
					int nX,
					int nY,
					int nZ);  // 446
			CSOAContainer::FloatValue(
					int nAttrIdx,
					IntVector3D vCoord);  // 3854
		}
		CSOAContainer::NumCols(); // 382
		CSOAContainer::Width(); // 390
		CSOAContainer::NumRows(); // 383
		CSOAContainer::Height(); // 390
		IntVector3D::IntVector3D(
				int nX,
				int nY,
				int nZ);  // 390
		IntVector3D::IntVector3D(
				int nX,
				int nY,
				int nZ);  // 390
		IntVector3D::IntVector3D(); // 304
		IntVector3D::IntVector3D(); // 304
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
					const IntVector3D& mins,
					const IntVector3D& maxes);  // 430
		IntAABB_t::IntAABB_t(
				IntVector3D a,
				IntVector3D b);  // 390
		CSOAContainer::Bounds(); // 3851
		IntAABB_t::Width(); // 453
		IntAABB_t::Depth(); // 453
		IntAABB_t::Height(); // 453
		IntAABB_t::NumberOfCells(); // 525
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 525
		IntAABB_CellRangeReference::end(); // 3851
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 520
		IntAABB_CellRangeReference::begin(); // 3851
	}
	{
		IntVector3D vCoords; // 3863
		IntAABB_CellRangeReference& __for_range; // 4210
		IntAABBIterator __for_begin; // 50156
		IntAABBIterator __for_end; // 50156
		{
			float flAlpha; // 3865
			{
				float flSumWeights; // 3868
				{
					int i; // 3871
					CSOAContainer::RowPtr<float>(
							int nAttributeIdx,
							int nRowNumber,
							int nSliceNumber);  // 442
					CSOAContainer::FloatValue(
							int nAttrIdx,
							int nX,
							int nY,
							int nZ);  // 446
					CSOAContainer::FloatValue(
							int nAttrIdx,
							IntVector3D vCoord);  // 3873
					CSOAContainer::RowPtr<float>(
							int nAttributeIdx,
							int nRowNumber,
							int nSliceNumber);  // 442
					CSOAContainer::FloatValue(
							int nAttrIdx,
							int nX,
							int nY,
							int nZ);  // 446
					CSOAContainer::FloatValue(
							int nAttrIdx,
							IntVector3D vCoord);  // 3873
				}
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 446
				CSOAContainer::FloatValue(
						int nAttrIdx,
						IntVector3D vCoord);  // 3875
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 446
				CSOAContainer::FloatValue(
						int nAttrIdx,
						IntVector3D vCoord);  // 3868
			}
			IntVector3D::IntVector3D(); // 507
			IntAABBIterator::operator*(); // 3863
			CSOAContainer::RowPtr<float>(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 442
			CSOAContainer::FloatValue(
					int nAttrIdx,
					int nX,
					int nY,
					int nZ);  // 446
			CSOAContainer::FloatValue(
					int nAttrIdx,
					IntVector3D vCoord);  // 3865
		}
		CSOAContainer::NumSlices(); // 384
		CSOAContainer::Depth(); // 390
		CSOAContainer::NumRows(); // 383
		CSOAContainer::Height(); // 390
		CSOAContainer::NumCols(); // 382
		CSOAContainer::Width(); // 390
		IntVector3D::IntVector3D(
				int nX,
				int nY,
				int nZ);  // 390
		IntVector3D::IntVector3D(
				int nX,
				int nY,
				int nZ);  // 390
		IntVector3D::IntVector3D(); // 304
		IntVector3D::IntVector3D(); // 304
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
					const IntVector3D& mins,
					const IntVector3D& maxes);  // 430
		IntAABB_t::IntAABB_t(
				IntVector3D a,
				IntVector3D b);  // 390
		CSOAContainer::Bounds(); // 3863
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 520
		IntAABB_CellRangeReference::begin(); // 3863
		IntAABB_t::Width(); // 453
		IntAABB_t::Height(); // 453
		IntAABB_t::Depth(); // 453
		IntAABB_t::NumberOfCells(); // 525
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 525
		IntAABB_CellRangeReference::end(); // 3863
	}
	{
		int i; // 88
		CSOAContainer::HasAllocatedMemory(
					int nAttrIdx);  // 90
	}
	CSOAContainer::AllocateAttributeIndex(); // 3839
	CSOAContainer::PaddedWidth(); // 3807
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 3808
	CGutterFillingControls::Init(
		CSOAContainer* pContainer,
		int nAttrMask);  // 3837
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 390
	CSOAContainer::NumCols(); // 382
	CSOAContainer::Width(); // 390
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 390
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 390
	IntVector3D::IntVector3D(); // 304
	IntVector3D::IntVector3D(); // 304
	GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
				const IntVector3D& mins,
				const IntVector3D& maxes);  // 430
	IntAABB_t::IntAABB_t(
			IntVector3D a,
			IntVector3D b);  // 390
	CSOAContainer::Bounds(); // 3861
} /* size: 0, variables: 3, inline expansions: 16 (0 bytes) */

// <009BD673> tier0_perproject/utlsoacontainer.cpp:3834
// variables: 19
// function calls: 106
void CSOAContainer::FillGutterPixels(int nMaskAttr)
{
	JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> controls; // 3836
	int nAccWeights; // 3839
	int nColorAccAttributeIndices; // 3844
	{
		int i; // 3845
		{
			int i; // 88
			CSOAContainer::HasAllocatedMemory(
						int nAttrIdx);  // 90
		}
		CSOAContainer::AllocateAttributeIndex(); // 3847
	}
	{
		IntVector3D vCoords; // 3851
		IntAABB_CellRangeReference& __for_range; // 62466
		IntAABBIterator __for_begin; // 42876
		IntAABBIterator __for_end; // 42876
		{
			float flAlpha; // 3853
			{
				int i; // 3855
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 446
				CSOAContainer::FloatValue(
						int nAttrIdx,
						IntVector3D vCoord);  // 3857
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 446
				CSOAContainer::FloatValue(
						int nAttrIdx,
						IntVector3D vCoord);  // 3857
			}
			IntVector3D::IntVector3D(); // 507
			IntAABBIterator::operator*(); // 3851
			CSOAContainer::RowPtr<float>(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 442
			CSOAContainer::FloatValue(
					int nAttrIdx,
					int nX,
					int nY,
					int nZ);  // 446
			CSOAContainer::FloatValue(
					int nAttrIdx,
					IntVector3D vCoord);  // 3853
			CSOAContainer::RowPtr<float>(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 442
			CSOAContainer::FloatValue(
					int nAttrIdx,
					int nX,
					int nY,
					int nZ);  // 446
			CSOAContainer::FloatValue(
					int nAttrIdx,
					IntVector3D vCoord);  // 3854
		}
		CSOAContainer::NumCols(); // 382
		CSOAContainer::Width(); // 390
		CSOAContainer::NumRows(); // 383
		CSOAContainer::Height(); // 390
		IntVector3D::IntVector3D(
				int nX,
				int nY,
				int nZ);  // 390
		IntVector3D::IntVector3D(
				int nX,
				int nY,
				int nZ);  // 390
		IntVector3D::IntVector3D(); // 304
		IntVector3D::IntVector3D(); // 304
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
					const IntVector3D& mins,
					const IntVector3D& maxes);  // 430
		IntAABB_t::IntAABB_t(
				IntVector3D a,
				IntVector3D b);  // 390
		CSOAContainer::Bounds(); // 3851
		IntAABB_t::Width(); // 453
		IntAABB_t::Depth(); // 453
		IntAABB_t::Height(); // 453
		IntAABB_t::NumberOfCells(); // 525
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 525
		IntAABB_CellRangeReference::end(); // 3851
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 520
		IntAABB_CellRangeReference::begin(); // 3851
	}
	{
		IntVector3D vCoords; // 3863
		IntAABB_CellRangeReference& __for_range; // 62466
		IntAABBIterator __for_begin; // 42876
		IntAABBIterator __for_end; // 42876
		{
			float flAlpha; // 3865
			{
				float flSumWeights; // 3868
				{
					int i; // 3871
					CSOAContainer::RowPtr<float>(
							int nAttributeIdx,
							int nRowNumber,
							int nSliceNumber);  // 442
					CSOAContainer::FloatValue(
							int nAttrIdx,
							int nX,
							int nY,
							int nZ);  // 446
					CSOAContainer::FloatValue(
							int nAttrIdx,
							IntVector3D vCoord);  // 3873
					CSOAContainer::RowPtr<float>(
							int nAttributeIdx,
							int nRowNumber,
							int nSliceNumber);  // 442
					CSOAContainer::FloatValue(
							int nAttrIdx,
							int nX,
							int nY,
							int nZ);  // 446
					CSOAContainer::FloatValue(
							int nAttrIdx,
							IntVector3D vCoord);  // 3873
				}
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 446
				CSOAContainer::FloatValue(
						int nAttrIdx,
						IntVector3D vCoord);  // 3875
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 446
				CSOAContainer::FloatValue(
						int nAttrIdx,
						IntVector3D vCoord);  // 3868
			}
			IntVector3D::IntVector3D(); // 507
			IntAABBIterator::operator*(); // 3863
			CSOAContainer::RowPtr<float>(
					int nAttributeIdx,
					int nRowNumber,
					int nSliceNumber);  // 442
			CSOAContainer::FloatValue(
					int nAttrIdx,
					int nX,
					int nY,
					int nZ);  // 446
			CSOAContainer::FloatValue(
					int nAttrIdx,
					IntVector3D vCoord);  // 3865
		}
		CSOAContainer::NumSlices(); // 384
		CSOAContainer::Depth(); // 390
		CSOAContainer::NumRows(); // 383
		CSOAContainer::Height(); // 390
		CSOAContainer::NumCols(); // 382
		CSOAContainer::Width(); // 390
		IntVector3D::IntVector3D(
				int nX,
				int nY,
				int nZ);  // 390
		IntVector3D::IntVector3D(
				int nX,
				int nY,
				int nZ);  // 390
		IntVector3D::IntVector3D(); // 304
		IntVector3D::IntVector3D(); // 304
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
					const IntVector3D& mins,
					const IntVector3D& maxes);  // 430
		IntAABB_t::IntAABB_t(
				IntVector3D a,
				IntVector3D b);  // 390
		CSOAContainer::Bounds(); // 3863
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 520
		IntAABB_CellRangeReference::begin(); // 3863
		IntAABB_t::Width(); // 453
		IntAABB_t::Height(); // 453
		IntAABB_t::Depth(); // 453
		IntAABB_t::NumberOfCells(); // 525
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 525
		IntAABB_CellRangeReference::end(); // 3863
	}
	{
		int i; // 88
		CSOAContainer::HasAllocatedMemory(
					int nAttrIdx);  // 90
	}
	CSOAContainer::AllocateAttributeIndex(); // 3839
	CSOAContainer::PaddedWidth(); // 3807
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 3808
	CGutterFillingControls::Init(
		CSOAContainer* pContainer,
		int nAttrMask);  // 3837
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 390
	CSOAContainer::NumCols(); // 382
	CSOAContainer::Width(); // 390
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 390
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 390
	IntVector3D::IntVector3D(); // 304
	IntVector3D::IntVector3D(); // 304
	GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
				const IntVector3D& mins,
				const IntVector3D& maxes);  // 430
	IntAABB_t::IntAABB_t(
			IntVector3D a,
			IntVector3D b);  // 390
	CSOAContainer::Bounds(); // 3861
} /* size: 0, variables: 3, inline expansions: 16 (0 bytes) */

// <044DB411> tier0_perproject/utlsoacontainer.cpp:3882
// variables: 24
// function calls: 78
void CSOAContainer::IntegrateVectorField(IntAABB_t bounds, int nValueAttr, int nLockedFlagsAttr, int nXGradientAttr, int nYGradientAttr, int nZGradientAttr)
{
	{
		int nZDir; // 3885
		initializer_list<int>& __for_range; // 24340
		const_iterator __for_begin; // 16659
		const_iterator __for_end; // 16659
		{
			int nYDir; // 3887
			initializer_list<int>& __for_range; // 24340
			const_iterator __for_begin; // 16659
			const_iterator __for_end; // 16659
			{
				int nXDir; // 3889
				initializer_list<int>& __for_range; // 24340
				const_iterator __for_begin; // 16659
				const_iterator __for_end; // 16659
				{
					float flTotalError; // 3892
					{
						IntVector3D vC1; // 3893
						IntAABB_CellRangeReference& __for_range; // 29357
						IntAABBIterator __for_begin; // 9767
						IntAABBIterator __for_end; // 9767
						{
							IntVector3D vCoord; // 3895
							float flVal; // 3908
							float flDiv; // 3909
							IntVector3D vXNeighbor; // 3910
							IntVector3D vYNeighbor; // 3916
							IntVector3D vZNeighbor; // 3922
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 3910
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 219
							IntVector3D::operator+(
									const IntVector3D& rhs);  // 3910
							CSOAContainer::NumCols(); // 404
							CSOAContainer::NumRows(); // 404
							CSOAContainer::NumSlices(); // 404
							CSOAContainer::IsValidCoordinate(
										IntVector3D vCoord);  // 3911
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 3916
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 219
							IntVector3D::operator+(
									const IntVector3D& rhs);  // 3916
							CSOAContainer::NumCols(); // 404
							CSOAContainer::NumRows(); // 404
							CSOAContainer::NumSlices(); // 404
							CSOAContainer::IsValidCoordinate(
										IntVector3D vCoord);  // 3917
							CSOAContainer::NumRows(); // 404
							CSOAContainer::NumSlices(); // 404
							CSOAContainer::IsValidCoordinate(
										IntVector3D vCoord);  // 3923
							IntVector3D::IntVector3D(); // 507
							IntVector3D::operator+=(
									const IntVector3D& rhs);  // 513
							IntAABBIterator::operator*(); // 3893
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 446
							CSOAContainer::FloatValue(
									int nAttrIdx,
									IntVector3D vCoord);  // 3919
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 446
							CSOAContainer::FloatValue(
									int nAttrIdx,
									IntVector3D vCoord);  // 3919
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 3922
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 219
							IntVector3D::operator+(
									const IntVector3D& rhs);  // 3922
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 446
							CSOAContainer::FloatValue(
									int nAttrIdx,
									IntVector3D vCoord);  // 3933
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 446
							CSOAContainer::FloatValue(
									int nAttrIdx,
									IntVector3D vCoord);  // 3913
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 446
							CSOAContainer::FloatValue(
									int nAttrIdx,
									IntVector3D vCoord);  // 3934
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 446
							CSOAContainer::FloatValue(
									int nAttrIdx,
									IntVector3D vCoord);  // 3913
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 446
							CSOAContainer::FloatValue(
									int nAttrIdx,
									IntVector3D vCoord);  // 3925
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 446
							CSOAContainer::FloatValue(
									int nAttrIdx,
									IntVector3D vCoord);  // 3925
						}
						IntAABB_t::Indices(); // 3893
						IntAABB_t::Width(); // 453
						IntAABB_t::Height(); // 453
						IntAABB_t::Depth(); // 453
						IntAABB_t::NumberOfCells(); // 525
						IntVector3D::IntVector3D(); // 301
						IntVector3D::IntVector3D(); // 301
						GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
						IntAABB_t::IntAABB_t(); // 491
						IntAABBIterator::IntAABBIterator(
								const IntAABB_t& domain,
								int nStartingIndex);  // 525
						IntAABB_CellRangeReference::end(); // 3893
						IntVector3D::IntVector3D(); // 301
						IntVector3D::IntVector3D(); // 301
						GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
						IntAABB_t::IntAABB_t(); // 491
						IntAABBIterator::IntAABBIterator(
								const IntAABB_t& domain,
								int nStartingIndex);  // 520
						IntAABB_CellRangeReference::begin(); // 3893
					}
				}
			}
		}
	}
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 390
	CSOAContainer::NumCols(); // 382
	CSOAContainer::Width(); // 390
	IntVector3D::IntVector3D(); // 304
	IntVector3D::IntVector3D(); // 304
	GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
				const IntVector3D& mins,
				const IntVector3D& maxes);  // 430
	IntAABB_t::IntAABB_t(
			IntVector3D a,
			IntVector3D b);  // 390
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 390
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 390
	CSOAContainer::Bounds(); // 3884
	{
		int i; // 342
		IntVector3D::operator[](
				const int  i);  // 344
		IntVector3D::operator[](
				const int  i);  // 345
	}
	GenericBoundingBox_t<IntVector3D, 3>::operator&=(
			const GenericBoundingBox_t<IntVector3D, 3>& other);  // 3884
} /* size: 0, inline expansions: 12 (0 bytes) */

// <01B36B23> tier0_perproject/utlsoacontainer.cpp:3882
// variables: 24
// function calls: 78
void CSOAContainer::IntegrateVectorField(IntAABB_t bounds, int nValueAttr, int nLockedFlagsAttr, int nXGradientAttr, int nYGradientAttr, int nZGradientAttr)
{
	{
		int nZDir; // 3885
		initializer_list<int>& __for_range; // 64729
		const_iterator __for_begin; // 57048
		const_iterator __for_end; // 57048
		{
			int nYDir; // 3887
			initializer_list<int>& __for_range; // 64729
			const_iterator __for_begin; // 57048
			const_iterator __for_end; // 57048
			{
				int nXDir; // 3889
				initializer_list<int>& __for_range; // 64729
				const_iterator __for_begin; // 57048
				const_iterator __for_end; // 57048
				{
					float flTotalError; // 3892
					{
						IntVector3D vC1; // 3893
						IntAABB_CellRangeReference& __for_range; // 4210
						IntAABBIterator __for_begin; // 50156
						IntAABBIterator __for_end; // 50156
						{
							IntVector3D vCoord; // 3895
							float flVal; // 3908
							float flDiv; // 3909
							IntVector3D vXNeighbor; // 3910
							IntVector3D vYNeighbor; // 3916
							IntVector3D vZNeighbor; // 3922
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 3910
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 219
							IntVector3D::operator+(
									const IntVector3D& rhs);  // 3910
							CSOAContainer::NumCols(); // 404
							CSOAContainer::NumRows(); // 404
							CSOAContainer::NumSlices(); // 404
							CSOAContainer::IsValidCoordinate(
										IntVector3D vCoord);  // 3911
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 3916
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 219
							IntVector3D::operator+(
									const IntVector3D& rhs);  // 3916
							CSOAContainer::NumCols(); // 404
							CSOAContainer::NumRows(); // 404
							CSOAContainer::NumSlices(); // 404
							CSOAContainer::IsValidCoordinate(
										IntVector3D vCoord);  // 3917
							CSOAContainer::NumRows(); // 404
							CSOAContainer::NumSlices(); // 404
							CSOAContainer::IsValidCoordinate(
										IntVector3D vCoord);  // 3923
							IntVector3D::IntVector3D(); // 507
							IntVector3D::operator+=(
									const IntVector3D& rhs);  // 513
							IntAABBIterator::operator*(); // 3893
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 446
							CSOAContainer::FloatValue(
									int nAttrIdx,
									IntVector3D vCoord);  // 3919
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 446
							CSOAContainer::FloatValue(
									int nAttrIdx,
									IntVector3D vCoord);  // 3919
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 3922
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 219
							IntVector3D::operator+(
									const IntVector3D& rhs);  // 3922
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 446
							CSOAContainer::FloatValue(
									int nAttrIdx,
									IntVector3D vCoord);  // 3933
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 446
							CSOAContainer::FloatValue(
									int nAttrIdx,
									IntVector3D vCoord);  // 3913
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 446
							CSOAContainer::FloatValue(
									int nAttrIdx,
									IntVector3D vCoord);  // 3934
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 446
							CSOAContainer::FloatValue(
									int nAttrIdx,
									IntVector3D vCoord);  // 3913
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 446
							CSOAContainer::FloatValue(
									int nAttrIdx,
									IntVector3D vCoord);  // 3925
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 446
							CSOAContainer::FloatValue(
									int nAttrIdx,
									IntVector3D vCoord);  // 3925
						}
						IntAABB_t::Indices(); // 3893
						IntAABB_t::Width(); // 453
						IntAABB_t::Height(); // 453
						IntAABB_t::Depth(); // 453
						IntAABB_t::NumberOfCells(); // 525
						IntVector3D::IntVector3D(); // 301
						IntVector3D::IntVector3D(); // 301
						GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
						IntAABB_t::IntAABB_t(); // 491
						IntAABBIterator::IntAABBIterator(
								const IntAABB_t& domain,
								int nStartingIndex);  // 525
						IntAABB_CellRangeReference::end(); // 3893
						IntVector3D::IntVector3D(); // 301
						IntVector3D::IntVector3D(); // 301
						GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
						IntAABB_t::IntAABB_t(); // 491
						IntAABBIterator::IntAABBIterator(
								const IntAABB_t& domain,
								int nStartingIndex);  // 520
						IntAABB_CellRangeReference::begin(); // 3893
					}
				}
			}
		}
	}
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 390
	CSOAContainer::NumCols(); // 382
	CSOAContainer::Width(); // 390
	IntVector3D::IntVector3D(); // 304
	IntVector3D::IntVector3D(); // 304
	GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
				const IntVector3D& mins,
				const IntVector3D& maxes);  // 430
	IntAABB_t::IntAABB_t(
			IntVector3D a,
			IntVector3D b);  // 390
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 390
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 390
	CSOAContainer::Bounds(); // 3884
	{
		int i; // 342
		IntVector3D::operator[](
				const int  i);  // 344
		IntVector3D::operator[](
				const int  i);  // 345
	}
	GenericBoundingBox_t<IntVector3D, 3>::operator&=(
			const GenericBoundingBox_t<IntVector3D, 3>& other);  // 3884
} /* size: 0, inline expansions: 12 (0 bytes) */

// <009BC386> tier0_perproject/utlsoacontainer.cpp:3882
// variables: 24
// function calls: 78
void CSOAContainer::IntegrateVectorField(IntAABB_t bounds, int nValueAttr, int nLockedFlagsAttr, int nXGradientAttr, int nYGradientAttr, int nZGradientAttr)
{
	{
		int nZDir; // 3885
		initializer_list<int>& __for_range; // 57449
		const_iterator __for_begin; // 49768
		const_iterator __for_end; // 49768
		{
			int nYDir; // 3887
			initializer_list<int>& __for_range; // 57449
			const_iterator __for_begin; // 49768
			const_iterator __for_end; // 49768
			{
				int nXDir; // 3889
				initializer_list<int>& __for_range; // 57449
				const_iterator __for_begin; // 49768
				const_iterator __for_end; // 49768
				{
					float flTotalError; // 3892
					{
						IntVector3D vC1; // 3893
						IntAABB_CellRangeReference& __for_range; // 62466
						IntAABBIterator __for_begin; // 42876
						IntAABBIterator __for_end; // 42876
						{
							IntVector3D vCoord; // 3895
							float flVal; // 3908
							float flDiv; // 3909
							IntVector3D vXNeighbor; // 3910
							IntVector3D vYNeighbor; // 3916
							IntVector3D vZNeighbor; // 3922
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 3910
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 219
							IntVector3D::operator+(
									const IntVector3D& rhs);  // 3910
							CSOAContainer::NumCols(); // 404
							CSOAContainer::NumRows(); // 404
							CSOAContainer::NumSlices(); // 404
							CSOAContainer::IsValidCoordinate(
										IntVector3D vCoord);  // 3911
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 3916
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 219
							IntVector3D::operator+(
									const IntVector3D& rhs);  // 3916
							CSOAContainer::NumCols(); // 404
							CSOAContainer::NumRows(); // 404
							CSOAContainer::NumSlices(); // 404
							CSOAContainer::IsValidCoordinate(
										IntVector3D vCoord);  // 3917
							CSOAContainer::NumRows(); // 404
							CSOAContainer::NumSlices(); // 404
							CSOAContainer::IsValidCoordinate(
										IntVector3D vCoord);  // 3923
							IntVector3D::IntVector3D(); // 507
							IntVector3D::operator+=(
									const IntVector3D& rhs);  // 513
							IntAABBIterator::operator*(); // 3893
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 446
							CSOAContainer::FloatValue(
									int nAttrIdx,
									IntVector3D vCoord);  // 3919
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 446
							CSOAContainer::FloatValue(
									int nAttrIdx,
									IntVector3D vCoord);  // 3919
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 3922
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 219
							IntVector3D::operator+(
									const IntVector3D& rhs);  // 3922
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 446
							CSOAContainer::FloatValue(
									int nAttrIdx,
									IntVector3D vCoord);  // 3933
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 446
							CSOAContainer::FloatValue(
									int nAttrIdx,
									IntVector3D vCoord);  // 3913
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 446
							CSOAContainer::FloatValue(
									int nAttrIdx,
									IntVector3D vCoord);  // 3934
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 446
							CSOAContainer::FloatValue(
									int nAttrIdx,
									IntVector3D vCoord);  // 3913
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 446
							CSOAContainer::FloatValue(
									int nAttrIdx,
									IntVector3D vCoord);  // 3925
							CSOAContainer::RowPtr<float>(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 442
							CSOAContainer::FloatValue(
									int nAttrIdx,
									int nX,
									int nY,
									int nZ);  // 446
							CSOAContainer::FloatValue(
									int nAttrIdx,
									IntVector3D vCoord);  // 3925
						}
						IntAABB_t::Indices(); // 3893
						IntAABB_t::Width(); // 453
						IntAABB_t::Height(); // 453
						IntAABB_t::Depth(); // 453
						IntAABB_t::NumberOfCells(); // 525
						IntVector3D::IntVector3D(); // 301
						IntVector3D::IntVector3D(); // 301
						GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
						IntAABB_t::IntAABB_t(); // 491
						IntAABBIterator::IntAABBIterator(
								const IntAABB_t& domain,
								int nStartingIndex);  // 525
						IntAABB_CellRangeReference::end(); // 3893
						IntVector3D::IntVector3D(); // 301
						IntVector3D::IntVector3D(); // 301
						GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
						IntAABB_t::IntAABB_t(); // 491
						IntAABBIterator::IntAABBIterator(
								const IntAABB_t& domain,
								int nStartingIndex);  // 520
						IntAABB_CellRangeReference::begin(); // 3893
					}
				}
			}
		}
	}
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 390
	CSOAContainer::NumCols(); // 382
	CSOAContainer::Width(); // 390
	IntVector3D::IntVector3D(); // 304
	IntVector3D::IntVector3D(); // 304
	GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
				const IntVector3D& mins,
				const IntVector3D& maxes);  // 430
	IntAABB_t::IntAABB_t(
			IntVector3D a,
			IntVector3D b);  // 390
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 390
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 390
	CSOAContainer::Bounds(); // 3884
	{
		int i; // 342
		IntVector3D::operator[](
				const int  i);  // 344
		IntVector3D::operator[](
				const int  i);  // 345
	}
	GenericBoundingBox_t<IntVector3D, 3>::operator&=(
			const GenericBoundingBox_t<IntVector3D, 3>& other);  // 3884
} /* size: 0, inline expansions: 12 (0 bytes) */

