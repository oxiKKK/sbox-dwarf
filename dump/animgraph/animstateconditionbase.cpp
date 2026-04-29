
//
// animgraph/animstateconditionbase.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 24
//

// <01A7BA43> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:10
void IAnimStateCondition::GetTypeInfo()
{
} /* size: 0 */

// <01A7B8B0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:10
// function calls: 3
void* IAnimStateCondition::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IAnimStateCondition>::CastTo(
		IAnimStateCondition* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01A7B71D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:10
// function calls: 3
const void* IAnimStateCondition::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IAnimStateCondition>::CastTo(
		const IAnimStateCondition* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01A7F80B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:13
void MyTypeInfo(void)
{
} /* size: 0 */

// <01A7B684> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:13
void CAnimStateConditionBase::GetTypeInfo()
{
} /* size: 12 */

// <01A7B4F1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:13
// function calls: 3
void* CAnimStateConditionBase::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CAnimStateConditionBase>::CastTo(
		CAnimStateConditionBase* derived,
		ClassID baseTypeInfo);  // 13
} /* size: 0, inline expansions: 3 (206 bytes) */

// <01A7B35E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:13
// function calls: 3
const void* CAnimStateConditionBase::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CAnimStateConditionBase>::CastTo(
		const CAnimStateConditionBase* derived,
		ClassID baseTypeInfo);  // 13
} /* size: 0, inline expansions: 3 (206 bytes) */

// <01A7B17A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:16
// function calls: 5
void CAnimStateConditionBase::CAnimStateConditionBase()
{
	Object::Object(); // 46
	IAnimStateCondition::IAnimStateCondition(); // 16
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 16
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::CSmartPtr(); // 16
} /* size: 0, inline expansions: 5 (0 bytes) */

// <01A7B161> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:16
void CAnimStateConditionBase::CAnimStateConditionBase()
{
} /* size: 0 */

// <01A7F829> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:22
// function calls: 14
void CAnimStateConditionBase::GetContext()
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimStateMachineContext>(CAnimStateMachineContext* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimStateMachineContext>(CAnimStateMachineContext* pObj); // 370
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::operator=(
			CAnimStateMachineContext* pObj);  // 406
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>& other);  // 24
} /* size: 0, inline expansions: 14 (0 bytes) */

// <01A7FAF4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:28
void CAnimStateConditionBase::GetContext()
{
} /* size: 0 */

// <01A7AC61> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:34
// variable: 1
// function calls: 18
void CAnimStateConditionBase::GetSourceOptions(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* pOutChoiceNames, CUtlVector<int, CUtlMemory<int, int> >* pOutChoiceValues)
{
	CUtlString name; // 37
	CUtlString::CUtlString(
			const char* pString);  // 37
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 39
	CUtlString::~CUtlString(); // 39
	CUtlMemory<CUtlString, int>::NumAllocated(); // 1196
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
		int i);  // 1201
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 1520
	CopyConstruct<CUtlString>(CUtlString* pMemory,
					const CUtlString& src);  // 1201
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
			const CUtlString& src);  // 41
	CUtlString::~CUtlString(); // 42
} /* size: 290, variables: 1, inline expansions: 18 (401 bytes) */

// <01A7AC33> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:46
void CAnimStateConditionBase::GetSourceIndex()
{
} /* size: 7 */

// <01A7E23D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:53
// function call: 1
void CAnimStateConditionBase::SetSourceIndex(int index)
{
	{
	}
	CAnimStateConditionBase::SetSourceIndex(
			int index);  // 53
} /* size: 0, inline expansions: 1 (17 bytes) */

// <01A7ABEB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:53
// variables: 2
void CAnimStateConditionBase::SetSourceIndex(int index)
{
	const char   __FUNCTION__; // 21944
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 56
	}
} /* size: 0, variables: 1 */

// <01A7DF20> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:60
void CAnimStateConditionBase::GetComparisonOp()
{
} /* size: 9 */

// <01A7DF4A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:66
void CAnimStateConditionBase::SetComparisonOp(Comparison_t op)
{
} /* size: 9 */

// <01A7AB80> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:72
void CAnimStateConditionBase::GetComparisonOpMask()
{
} /* size: 10 */

// <01A7AB52> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:79
void CAnimStateConditionBase::GetComparisonValueType()
{
} /* size: 7 */

// <01A7AB15> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:85
void CAnimStateConditionBase::SetComparisonValueType(ComparisonValueType newType)
{
} /* size: 5 */

// <01A7AAE7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:91
void CAnimStateConditionBase::GetComparisonValueTypeMask()
{
} /* size: 10 */

// <01A7A9A5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:98
// function calls: 5
void CAnimStateConditionBase::GetComparisonValueOptions()
{
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 101
} /* size: 38, inline expansions: 5 (83 bytes) */

// <01A7A625> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:105
// variables: 2
// function calls: 10
void CAnimStateConditionBase::GetDescription()
{
	CUtlString name; // 108
	CUtlString description; // 111
	CUtlString::CUtlString(
			const char* pString);  // 108
	CUtlString::~CUtlString(); // 109
	CUtlString::CUtlString(); // 111
	CUtlString::Get(); // 99
	CUtlString::String(); // 112
	CAnimStateConditionBase::GetComparisonOp(); // 112
	CUtlString::Get(); // 99
	CUtlString::String(); // 112
	CUtlString::~CUtlString(); // 112
	CUtlString::~CUtlString(); // 114
} /* size: 311, variables: 2, inline expansions: 10 (166 bytes) */

// <01A7A373> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:117
// function calls: 13
void CAnimStateConditionBase::SetContext(const CAnimStateMachineContextPtr& context)
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimStateMachineContext>(CAnimStateMachineContext* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimStateMachineContext>(CAnimStateMachineContext* pObj); // 370
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::operator=(
			CAnimStateMachineContext* pObj);  // 406
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>& other);  // 119
} /* size: 97, inline expansions: 13 (287 bytes) */

