
//
// animgraph/activityparamvalues.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 45
//

// <00E86303> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:11
// function calls: 6
void CParameterValue::CParameterValue()
{
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 11
	IParameterValue::IParameterValue(); // 11
	AnimParamID::AnimParamID(); // 11
	CAnimVariant::CAnimVariant(); // 11
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::CSmartPtr(); // 11
} /* size: 53, inline expansions: 6 (33 bytes) */

// <00E862EA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:11
void CParameterValue::CParameterValue()
{
} /* size: 0 */

// <00E85F3D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:17
// function calls: 19
void CParameterValue::CParameterValue(const CAnimParameterListPtr& pParamList)
{
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 18
	IParameterValue::IParameterValue(); // 18
	AnimParamID::AnimParamID(); // 18
	CAnimVariant::CAnimVariant(); // 18
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimParameterList>(CAnimParameterList* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParameterList>(CAnimParameterList* pObj); // 370
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
			CAnimParameterList* pObj);  // 406
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 18
} /* size: 0, inline expansions: 19 (0 bytes) */

// <00E85F18> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:17
void CParameterValue::CParameterValue(const CAnimParameterListPtr& pParamList)
{
} /* size: 0 */

// <00E8C77E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:24
// function calls: 3
void CParameterValue::GetParameter()
{
	AnimParamID::IsValid(); // 26
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator!=(
			const CAnimParameterList* pOther);  // 26
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 28
} /* size: 89, inline expansions: 3 (23 bytes) */

// <00E85EFF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:24
void CParameterValue::GetParameter()
{
} /* size: 0 */

// <00E85BE9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:46
// function calls: 10
void CParameterValue::SetParameter(const IAnimParameter* param)
{
	AnimParamID::operator=(
			const AnimParamID& rhs);  // 54
	CAnimVariant::GetValueUntyped(); // 168
	CAnimVariant::GetType(); // 168
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 424
	CAnimVariant::SetValueUntyped(
			AnimParamType_t nType,
			const void* pData);  // 419
	CAnimVariant::SetValueUntyped(
			AnimParamType_t nType,
			const void* pData);  // 168
	CAnimVariant::operator=(
			const CAnimVariant& rhs);  // 55
	AnimParamID::AnimParamID(); // 50
	AnimParamID::operator=(
			const AnimParamID& rhs);  // 50
} /* size: 158, inline expansions: 10 (155 bytes) */

// <00E89CAF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:60
void CParameterValue::GetValue()
{
} /* size: 9 */

// <00E8C869> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:66
// function calls: 7
void CParameterValue::SetValue(const CAnimVariant& value)
{
	CAnimVariant::GetValueUntyped(); // 168
	CAnimVariant::GetType(); // 168
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 424
	CAnimVariant::SetValueUntyped(
			AnimParamType_t nType,
			const void* pData);  // 419
	CAnimVariant::SetValueUntyped(
			AnimParamType_t nType,
			const void* pData);  // 168
	CAnimVariant::operator=(
			const CAnimVariant& rhs);  // 68
} /* size: 51, inline expansions: 7 (122 bytes) */

// <00E85BAB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:66
void CParameterValue::SetValue(const CAnimVariant& value)
{
} /* size: 0 */

// <00E8CA74> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:72
// function calls: 13
void CParameterValue::SetAnimParameterList(const CAnimParameterListPtr& pParamList)
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimParameterList>(CAnimParameterList* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParameterList>(CAnimParameterList* pObj); // 370
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
			CAnimParameterList* pObj);  // 406
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 74
} /* size: 0, inline expansions: 13 (0 bytes) */

// <00E85B86> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:72
void CParameterValue::SetAnimParameterList(const CAnimParameterListPtr& pParamList)
{
} /* size: 0 */

// <00E8CD1A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:78
// function call: 1
void CParameterValue::GetParamID()
{
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 80
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00E85B6D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:78
void CParameterValue::GetParamID()
{
} /* size: 0 */

// <00E85927> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:86
// function calls: 10
void CActivityValues::CActivityValues()
{
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 86
	IActivityValues::IActivityValues(); // 86
	CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, this); // 86
	CUtlString::CUtlString(); // 86
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::CSmartPtr(); // 86
} /* size: 71, inline expansions: 10 (78 bytes) */

// <00E8590E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:86
void CActivityValues::CActivityValues()
{
} /* size: 0 */

// <00E85436> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:92
// function calls: 24
void CActivityValues::CActivityValues(const CUtlString& activityName, const CAnimParameterListPtr& pParamList)
{
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 94
	IActivityValues::IActivityValues(); // 94
	CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, this); // 94
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 93
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimParameterList>(CAnimParameterList* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParameterList>(CAnimParameterList* pObj); // 370
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
			CAnimParameterList* pObj);  // 406
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 94
} /* size: 0, inline expansions: 24 (0 bytes) */

// <00E85405> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:92
void CActivityValues::CActivityValues(const CUtlString& activityName, const CAnimParameterListPtr& pParamList)
{
} /* size: 0 */

// <00E89CD8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:100
void CActivityValues::GetActivityName()
{
} /* size: 9 */

// <00E89D01> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:106
// function call: 1
void CActivityValues::Count()
{
	Count(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCount this); // 108
} /* size: 8, inline expansions: 1 (0 bytes) */

// <00E853D3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:106
void CActivityValues::Count()
{
} /* size: 0 */

// <00E8CD74> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:112
// function calls: 3
void CActivityValues::GetParamValue(int index)
{
	CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this,
			int i);  // 114
	CSmartPtr<CParameterValue, CRefCountAccessor>::Get(); // 114
} /* size: 27, inline expansions: 3 (14 bytes) */

// <00E853AE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:112
void CActivityValues::GetParamValue(int index)
{
} /* size: 0 */

// <00E846A2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:123
// variable: 1
// function calls: 61
void CActivityValues::AddParamValue()
{
	CParameterValuePtr paramValue; // 125
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimParameterList>(CAnimParameterList* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParameterList>(CAnimParameterList* pObj); // 370
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
			CAnimParameterList* pObj);  // 406
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 18
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 18
	IParameterValue::IParameterValue(); // 18
	AnimParamID::AnimParamID(); // 18
	CAnimVariant::CAnimVariant(); // 18
	CParameterValue::CParameterValue(
			const CAnimParameterListPtr& pParamList);  // 125
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CParameterValue>(CParameterValue* pObj); // 366
	CSmartPtr<CParameterValue, CRefCountAccessor>::operator=(
			CParameterValue* pObj);  // 319
	CSmartPtr<CParameterValue, CRefCountAccessor>::CSmartPtr(
			CParameterValue* pObj);  // 125
	CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::NumAllocated(); // 1196
	CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::Base(); // 112
	Base(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this); // 824
	CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::IsGrowable(); // 823
	CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::Grow(
		int num);  // 806
	GrowMemory(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this,
			int num);  // 1198
	CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this,
		int i);  // 1201
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CParameterValue>(CParameterValue* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CParameterValue>(CParameterValue* pObj); // 370
	CSmartPtr<CParameterValue, CRefCountAccessor>::operator=(
			CParameterValue* pObj);  // 406
	CSmartPtr<CParameterValue, CRefCountAccessor>::operator=(
			const CSmartPtr<CParameterValue, CRefCountAccessor>& other);  // 328
	CSmartPtr<CParameterValue, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CParameterValue, CRefCountAccessor>& other);  // 1520
	CopyConstruct<CSmartPtr<CParameterValue> >(CSmartPtr<CParameterValue, CRefCountAccessor>* pMemory,
							const CSmartPtr<CParameterValue, CRefCountAccessor>& src);  // 1201
	AddToTail(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this,
			const CSmartPtr<CParameterValue, CRefCountAccessor>& src);  // 126
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CParameterValue>(CParameterValue* pObj); // 344
	CSmartPtr<CParameterValue, CRefCountAccessor>::~CSmartPtr(); // 128
} /* size: 476, variables: 1, inline expansions: 61 (1568 bytes) */

// <00E8CE2F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:131
// function calls: 18
void CActivityValues::RemoveParamValue(int index)
{
	CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this,
		int i);  // 1607
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CParameterValue>(CParameterValue* pObj); // 344
	CSmartPtr<CParameterValue, CRefCountAccessor>::~CSmartPtr(); // 1526
	Destruct<CSmartPtr<CParameterValue> >(CSmartPtr<CParameterValue, CRefCountAccessor>* pMemory); // 1607
	CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this,
		int i);  // 1114
	CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this,
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	ShiftElementsLeft(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this,
				int elem,
				int num);  // 1608
	Remove(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this,
		int elem);  // 133
} /* size: 128, inline expansions: 18 (369 bytes) */

// <00E8467D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:131
void CActivityValues::RemoveParamValue(int index)
{
} /* size: 0 */

// <00E8D22C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:137
// variable: 1
// function calls: 21
void CActivityValues::RemoveParamValue(IParameterValue* param)
{
	{
		int i; // 141
		Count(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCount this); // 141
		CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this,
				int i);  // 143
		CSmartPtr<CParameterValue, CRefCountAccessor>::Get(); // 143
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CParameterValue>(CParameterValue* pObj); // 344
		CSmartPtr<CParameterValue, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CParameterValue> >(CSmartPtr<CParameterValue, CRefCountAccessor>* pMemory); // 1607
		CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this,
			int i);  // 1114
		CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this,
			int i);  // 1114
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 115
		V_memmove(void* dest,
				const void* src,
				size_t count);  // 1114
		ShiftElementsLeft(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this,
					int elem,
					int num);  // 1608
		Remove(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this,
			int elem);  // 145
	}
	CActivityValues::RemoveParamValue(
			IParameterValue* param);  // 137
} /* size: 195, inline expansions: 1 (164 bytes) */

// <00E8464B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:137
// variable: 1
void CActivityValues::RemoveParamValue(IParameterValue* param)
{
	{
		int i; // 141
	}
} /* size: 0 */

// <00E8D61F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:153
// variable: 1
// function calls: 31
void CActivityValues::SetAnimParameterList(const CAnimParameterListPtr& pParamList)
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimParameterList>(CAnimParameterList* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParameterList>(CAnimParameterList* pObj); // 370
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
			CAnimParameterList* pObj);  // 406
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 155
	{
		int i; // 156
		Count(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCount this); // 156
		CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this,
				int i);  // 158
		CSmartPtr<CParameterValue, CRefCountAccessor>::operator->(); // 158
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<CAnimParameterList>(CAnimParameterList* pObj); // 366
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimParameterList>(CAnimParameterList* pObj); // 370
		CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
				CAnimParameterList* pObj);  // 406
		CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
				const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 74
		CParameterValue::SetAnimParameterList(
					const CAnimParameterListPtr& pParamList);  // 158
	}
} /* size: 0, inline expansions: 13 (0 bytes) */

// <00E84619> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:153
// variable: 1
void CActivityValues::SetAnimParameterList(const CAnimParameterListPtr& pParamList)
{
	{
		int i; // 156
	}
} /* size: 0 */

// <00E8DC9C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:163
// function calls: 17
void CActivityValues::GetParamValueInternal(int index)
{
	CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCount this,
			int i);  // 165
	CSmartPtr<CParameterValue, CRefCountAccessor>::Get(); // 413
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CParameterValue>(CParameterValue* pObj); // 386
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CParameterValue>(const CParameterValue* pObj); // 390
	CSmartPtr<const CParameterValue, CRefCountAccessor>::operator=<CParameterValue>(
					CParameterValue* pObj);  // 413
	CSmartPtr<const CParameterValue, CRefCountAccessor>::operator=<CParameterValue>(
					const CSmartPtr<CParameterValue, CRefCountAccessor>& other);  // 354
	CSmartPtr<const CParameterValue, CRefCountAccessor>::CSmartPtr<CParameterValue>(
					const CSmartPtr<CParameterValue, CRefCountAccessor>& other);  // 165
} /* size: 0, inline expansions: 17 (0 bytes) */

// <00E845F4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:163
void CActivityValues::GetParamValueInternal(int index)
{
} /* size: 0 */

// <00E843E2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:172
// function calls: 9
void CActivityValueList::CActivityValueList()
{
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 172
	IActivityValueList::IActivityValueList(); // 172
	CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccess this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccess this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, this); // 172
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::CSmartPtr(); // 172
} /* size: 71, inline expansions: 9 (78 bytes) */

// <00E843C9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:172
void CActivityValueList::CActivityValueList()
{
} /* size: 0 */

// <00E89D5A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:178
// function call: 1
void CActivityValueList::Count()
{
	Count(const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCount this); // 180
} /* size: 8, inline expansions: 1 (0 bytes) */

// <00E843B0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:178
void CActivityValueList::Count()
{
} /* size: 0 */

// <00E8E028> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:184
// function calls: 3
void CActivityValueList::GetActivityValues(int index)
{
	CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccess this,
			int i);  // 186
	CSmartPtr<CActivityValues, CRefCountAccessor>::Get(); // 186
} /* size: 27, inline expansions: 3 (14 bytes) */

// <00E8438B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:184
void CActivityValueList::GetActivityValues(int index)
{
} /* size: 0 */

// <00E84115> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:196
// variable: 1
// function calls: 8
void CActivityValueList::GetActivityValues(const CUtlString& activityName)
{
	{
		int i; // 198
		Count(const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCount this); // 198
		CActivityValues::GetActivityName(); // 200
		CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccess this,
				int i);  // 200
		CSmartPtr<CActivityValues, CRefCountAccessor>::operator->(); // 200
		CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccess this,
				int i);  // 202
		CSmartPtr<CActivityValues, CRefCountAccessor>::Get(); // 202
	}
} /* size: 180 */

// <00E840E4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:210
// variable: 1
void CActivityValueList::GetActivityValues(const CUtlString& activityName)
{
	{
		int i; // 212
	}
} /* size: 0 */

// <00E83295> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:224
// variable: 1
// function calls: 66
void CActivityValueList::AddActivity(const CUtlString& activityName)
{
	CActivityValuesPtr newActivity; // 226
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 93
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 94
	IActivityValues::IActivityValues(); // 94
	CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, this); // 94
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimParameterList>(CAnimParameterList* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParameterList>(CAnimParameterList* pObj); // 370
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
			CAnimParameterList* pObj);  // 406
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 94
	CActivityValues::CActivityValues(
			const CUtlString& activityName,
			const CAnimParameterListPtr& pParamList);  // 226
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CActivityValues>(CActivityValues* pObj); // 366
	CSmartPtr<CActivityValues, CRefCountAccessor>::operator=(
			CActivityValues* pObj);  // 319
	CSmartPtr<CActivityValues, CRefCountAccessor>::CSmartPtr(
			CActivityValues* pObj);  // 226
	CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, int>::NumAllocated(); // 1196
	CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, int>::Base(); // 112
	Base(const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccess this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccess this); // 824
	CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, int>::IsGrowable(); // 823
	CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, int>::Grow(
		int num);  // 806
	GrowMemory(const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccess this,
			int num);  // 1198
	CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccess this,
		int i);  // 1201
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CActivityValues>(CActivityValues* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CActivityValues>(CActivityValues* pObj); // 370
	CSmartPtr<CActivityValues, CRefCountAccessor>::operator=(
			CActivityValues* pObj);  // 406
	CSmartPtr<CActivityValues, CRefCountAccessor>::operator=(
			const CSmartPtr<CActivityValues, CRefCountAccessor>& other);  // 328
	CSmartPtr<CActivityValues, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CActivityValues, CRefCountAccessor>& other);  // 1520
	CopyConstruct<CSmartPtr<CActivityValues> >(CSmartPtr<CActivityValues, CRefCountAccessor>* pMemory,
							const CSmartPtr<CActivityValues, CRefCountAccessor>& src);  // 1201
	AddToTail(const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccess this,
			const CSmartPtr<CActivityValues, CRefCountAccessor>& src);  // 228
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CActivityValues>(CActivityValues* pObj); // 344
	CSmartPtr<CActivityValues, CRefCountAccessor>::~CSmartPtr(); // 231
} /* size: 540, variables: 1, inline expansions: 66 (1722 bytes) */

// <00E82E5F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:234
// variable: 1
// function calls: 20
void CActivityValueList::RemoveActivity(IActivityValues* pActivityValues)
{
	{
		int i; // 236
		Count(const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCount this); // 236
		CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccess this,
				int i);  // 238
		CSmartPtr<CActivityValues, CRefCountAccessor>::Get(); // 238
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CActivityValues>(CActivityValues* pObj); // 344
		CSmartPtr<CActivityValues, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CActivityValues> >(CSmartPtr<CActivityValues, CRefCountAccessor>* pMemory); // 1607
		CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccess this,
			int i);  // 1114
		CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccess this,
			int i);  // 1114
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 115
		V_memmove(void* dest,
				const void* src,
				size_t count);  // 1114
		ShiftElementsLeft(const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccess this,
					int elem,
					int num);  // 1608
		Remove(const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccess this,
			int elem);  // 240
	}
} /* size: 212 */

// <00E8E0E3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:247
// function calls: 17
void CActivityValueList::GetActivityValuesInternal(int index)
{
	CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCount this,
			int i);  // 249
	CSmartPtr<CActivityValues, CRefCountAccessor>::Get(); // 413
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CActivityValues>(CActivityValues* pObj); // 386
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CActivityValues>(const CActivityValues* pObj); // 390
	CSmartPtr<const CActivityValues, CRefCountAccessor>::operator=<CActivityValues>(
					CActivityValues* pObj);  // 413
	CSmartPtr<const CActivityValues, CRefCountAccessor>::operator=<CActivityValues>(
					const CSmartPtr<CActivityValues, CRefCountAccessor>& other);  // 354
	CSmartPtr<const CActivityValues, CRefCountAccessor>::CSmartPtr<CActivityValues>(
					const CSmartPtr<CActivityValues, CRefCountAccessor>& other);  // 249
} /* size: 0, inline expansions: 17 (0 bytes) */

// <00E82E3A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:247
void CActivityValueList::GetActivityValuesInternal(int index)
{
} /* size: 0 */

// <00E82403> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:253
// variables: 2
// function calls: 49
void CActivityValueList::SetAnimParameterList(const CAnimParameterListPtr& pParamList)
{
	{
		int i; // 256
		Count(const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCount this); // 256
		CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccess this,
				int i);  // 258
		CSmartPtr<CActivityValues, CRefCountAccessor>::operator->(); // 258
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<CAnimParameterList>(CAnimParameterList* pObj); // 366
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimParameterList>(CAnimParameterList* pObj); // 370
		CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
				CAnimParameterList* pObj);  // 406
		CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
				const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 155
		{
			int i; // 156
			Count(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCount this); // 156
			CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this,
					int i);  // 158
			CSmartPtr<CParameterValue, CRefCountAccessor>::operator->(); // 158
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 290
			CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
			AddRef<CAnimParameterList>(CAnimParameterList* pObj); // 366
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<CAnimParameterList>(CAnimParameterList* pObj); // 370
			CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
					CAnimParameterList* pObj);  // 406
			CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
					const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 74
			CParameterValue::SetAnimParameterList(
						const CAnimParameterListPtr& pParamList);  // 158
		}
		CActivityValues::SetAnimParameterList(
					const CAnimParameterListPtr& pParamList);  // 258
	}
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimParameterList>(CAnimParameterList* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParameterList>(CAnimParameterList* pObj); // 370
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
			CAnimParameterList* pObj);  // 406
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 255
} /* size: 300, inline expansions: 13 (203 bytes) */

