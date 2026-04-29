
//
// animgraph/tagcondition.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 16
//

// <01A7FBD2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:10
void MyTypeInfo(void)
{
} /* size: 0 */

// <01A7E15D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:10
void CTagCondition::GetTypeInfo()
{
} /* size: 12 */

// <01A6F548> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:10
// function calls: 3
void* CTagCondition::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CTagCondition>::CastTo(
		CTagCondition* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01A6F3B5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:10
// function calls: 3
const void* CTagCondition::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CTagCondition>::CastTo(
		const CTagCondition* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01A6F192> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:18
// function calls: 9
void CTagCondition::CTagCondition()
{
	Object::Object(); // 46
	IAnimStateCondition::IAnimStateCondition(); // 16
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 16
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::CSmartPtr(); // 16
	CAnimStateConditionBase::CAnimStateConditionBase(); // 19
	AnimTagID::AnimTagID(); // 19
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CTagConditionUpdater>::CPackedHandle(); // 19
} /* size: 69, inline expansions: 9 (62 bytes) */

// <01A6F179> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:18
void CTagCondition::CTagCondition()
{
} /* size: 0 */

// <01A6EB0F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:25
// variables: 3
// function calls: 25
void CTagCondition::GetSourceOptions(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* pOutChoiceNames, CUtlVector<int, CUtlMemory<int, int> >* pOutChoiceValues)
{
	const CAnimTagManager* pTagMgr; // 27
	{
		int i; // 31
		{
			const IAnimTag* pTag; // 33
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 1520
			CopyConstruct<CUtlString>(CUtlString* pMemory,
							const CUtlString& src);  // 1201
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1201
			CUtlMemory<CUtlString, int>::NumAllocated(); // 1196
			CUtlMemory<CUtlString, int>::Base(); // 112
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
					const CUtlString& src);  // 34
		}
	}
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::operator->(); // 27
	CUtlString::CUtlString(
			const char* pString);  // 29
	CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
		int i);  // 1252
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 1514
	Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
			CUtlString& src);  // 29
	CUtlString::~CUtlString(); // 29
} /* size: 391, variables: 1, inline expansions: 14 (287 bytes) */

// <01A6EA2B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:39
// variable: 1
// function calls: 2
void CTagCondition::GetSourceIndex()
{
	const CAnimTagManager* pTagMgr; // 41
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::operator->(); // 41
	AnimTagID::AnimTagID(
			const AnimTagID& rhs);  // 42
} /* size: 85, variables: 1, inline expansions: 2 (6 bytes) */

// <01A7E635> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:46
// variables: 2
// function calls: 19
void CTagCondition::SetSourceIndex(int index)
{
	const CAnimTagManager* pTagMgr; // 55
	const CAnimTagBase* pTag; // 56
	AnimTagID::operator=(
			uint32 id);  // 50
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimStateMachineContext>(CAnimStateMachineContext* pObj); // 366
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::operator=(
			CAnimStateMachineContext* pObj);  // 406
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>& other);  // 24
	CAnimStateConditionBase::GetContext(); // 55
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimStateMachineContext>(CAnimStateMachineContext* pObj); // 344
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::~CSmartPtr(); // 55
	AnimTagID::operator=(
			const AnimTagID& rhs);  // 60
	CTagCondition::SetSourceIndex(
			int index);  // 46
} /* size: 168, variables: 2, inline expansions: 19 (326 bytes) */

// <01A6E9E8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:46
// variables: 2
void CTagCondition::SetSourceIndex(int index)
{
	const CAnimTagManager* pTagMgr; // 55
	const CAnimTagBase* pTag; // 56
} /* size: 0, variables: 2 */

// <01A6E9D0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:69
void CTagCondition::GetComparisonValue()
{
} /* size: 0 */

// <01A6E8FB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:75
// function calls: 2
void CTagCondition::SetComparisonValue(const CAnimVariant& newValue)
{
	{
	}
	CAnimVariant::GetValue<bool>(); // 194
	CAnimVariant::GetValue<bool>(); // 77
} /* size: 137, inline expansions: 2 (121 bytes) */

// <01A6E8CD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:81
void CTagCondition::GetComparisonOpMask()
{
} /* size: 10 */

// <01A6E597> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:87
// variables: 4
// function calls: 11
void CTagCondition::GetDescription()
{
	const CAnimTagManager* pTagMgr; // 89
	const IAnimTag* pTag; // 90
	CUtlString tagName; // 92
	CUtlString desc; // 98
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::operator->(); // 89
	AnimTagID::AnimTagID(
			const AnimTagID& rhs);  // 90
	CUtlString::CUtlString(
			const char* pString);  // 92
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 95
	CUtlString::CUtlString(); // 98
	CUtlString::Get(); // 99
	CUtlString::String(); // 99
	CUtlString::~CUtlString(); // 101
} /* size: 283, variables: 4, inline expansions: 11 (180 bytes) */

// <01A6E360> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:104
// variable: 1
// function calls: 6
void CTagCondition::InitUpdateData(CAnimGraphInitContext& initContext, const CAnimState* pSourceState, const CAnimStateTransition* pTransition)
{
	CTagConditionUpdater* pUpdateData; // 106
	IConditionUpdater::IConditionUpdater(); // 13
	CTagConditionUpdater::CTagConditionUpdater(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<false>::AddItem<CTagConditionUpdater>(
					CPackedHandle<CTagConditionUpdater>* handleOut);  // 106
	CAnimStateConditionBase::GetComparisonOp(); // 107
	AnimTagID::AnimTagID(
			const AnimTagID& rhs);  // 108
} /* size: 204, variables: 1, inline expansions: 6 (89 bytes) */

// <01A6E33C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:113
void CTagCondition::GetUpdateData(CPackedData& constData)
{
} /* size: 0 */

