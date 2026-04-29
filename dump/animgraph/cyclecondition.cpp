
//
// animgraph/cyclecondition.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 14
//

// <01A7FB3C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.cpp:9
void MyTypeInfo(void)
{
} /* size: 0 */

// <01A7DFA5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.cpp:9
void CCycleCondition::GetTypeInfo()
{
} /* size: 12 */

// <01A774A2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.cpp:9
// function calls: 3
void* CCycleCondition::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CCycleCondition>::CastTo(
		CCycleCondition* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01A7730F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.cpp:9
// function calls: 3
const void* CCycleCondition::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CCycleCondition>::CastTo(
		const CCycleCondition* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01A770EC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.cpp:17
// function calls: 9
void CCycleCondition::CCycleCondition()
{
	Object::Object(); // 46
	IAnimStateCondition::IAnimStateCondition(); // 16
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 16
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::CSmartPtr(); // 16
	CAnimStateConditionBase::CAnimStateConditionBase(); // 18
	AnimParamID::AnimParamID(); // 18
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CCycleConditionUpdater>::CPackedHandle(); // 18
} /* size: 74, inline expansions: 9 (41 bytes) */

// <01A770D3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.cpp:17
void CCycleCondition::CCycleCondition()
{
} /* size: 0 */

// <01A770A5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.cpp:24
void CCycleCondition::GetComparisonValueType()
{
} /* size: 9 */

// <01A77068> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.cpp:30
void CCycleCondition::SetComparisonValueType(ComparisonValueType newType)
{
} /* size: 12 */

// <01A77050> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.cpp:36
void CCycleCondition::GetComparisonValueTypeMask()
{
} /* size: 0 */

// <01A769D9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.cpp:42
// variables: 2
// function calls: 26
void CCycleCondition::GetComparisonValue()
{
	CAnimVariant compValue; // 44
	{
		int nFloatParamIndex; // 58
		AnimParamID::AnimParamID(
				const AnimParamID& rhs);  // 58
		CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::operator->(); // 58
		CAnimEnum::CAnimEnum(
				AnimEnumValue_t value);  // 60
		CAnimVariant::SetValue<CAnimEnum>(
					const CAnimEnum& value);  // 159
		CAnimVariant::CAnimVariant<CAnimEnum>(
					const CAnimEnum& v);  // 60
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
				const CAnimVariant& rhs);  // 60
	}
	CAnimVariant::CAnimVariant(); // 44
	CAnimVariant::SetValue<float>(
			const float& value);  // 159
	CAnimVariant::CAnimVariant<float>(
				const float& v);  // 49
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
			const CAnimVariant& rhs);  // 49
	CAnimEnum::CAnimEnum(
			AnimEnumValue_t value);  // 53
	CAnimVariant::SetValue<CAnimEnum>(
				const CAnimEnum& value);  // 159
	CAnimVariant::CAnimVariant<CAnimEnum>(
				const CAnimEnum& v);  // 53
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
			const CAnimVariant& rhs);  // 53
} /* size: 144, variables: 1, inline expansions: 16 (46 bytes) */

// <01A763F5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.cpp:70
// variable: 1
// function calls: 28
void CCycleCondition::SetComparisonValue(const CAnimVariant& newValue)
{
	{
		int nFloatParamIndex; // 85
		{
			CAnimEnum::CAnimEnum(); // 117
			DefaultValue(void); // 200
		}
		CAnimVariant::GetValue<CAnimEnum>(); // 194
		CAnimVariant::GetValue<CAnimEnum>(); // 85
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
		CAnimStateConditionBase::GetContext(); // 88
		AnimParamID::operator=(
				const AnimParamID& rhs);  // 88
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimStateMachineContext>(CAnimStateMachineContext* pObj); // 344
		CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::~CSmartPtr(); // 88
	}
	{
	}
	CAnimVariant::GetValue<float>(); // 194
	CAnimVariant::GetValue<float>(); // 75
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 76
	{
		CAnimEnum::CAnimEnum(); // 117
		DefaultValue(void); // 200
	}
	CAnimVariant::GetValue<CAnimEnum>(); // 194
	CAnimVariant::GetValue<CAnimEnum>(); // 80
} /* size: 504, inline expansions: 5 (364 bytes) */

// <01A75EF7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.cpp:96
// variables: 2
// function calls: 19
void CCycleCondition::GetComparisonValueOptions()
{
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > options; // 98
	{
		int i; // 103
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 1514
		Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1252
		CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
				CUtlString& src);  // 105
		CUtlString::~CUtlString(); // 105
		CUtlString::CUtlString(
				const char* pString);  // 105
	}
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 98
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::operator->(); // 110
} /* size: 311, variables: 1, inline expansions: 6 (83 bytes) */

// <01A75C45> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.cpp:118
// variable: 1
// function calls: 8
void CCycleCondition::InitUpdateData(CAnimGraphInitContext& initContext, const CAnimState* pSourceState, const CAnimStateTransition* pTransition)
{
	CCycleConditionUpdater* pUpdateData; // 120
	IConditionUpdater::IConditionUpdater(); // 14
	CompValues(const union CompValues* this); // 14
	CCycleConditionUpdater::CCycleConditionUpdater(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<false>::AddItem<CCycleConditionUpdater>(
					CPackedHandle<CCycleConditionUpdater>* handleOut);  // 120
	CAnimStateConditionBase::GetComparisonOp(); // 122
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 135
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 135
} /* size: 279, variables: 1, inline expansions: 8 (125 bytes) */

// <01A75B90> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.cpp:141
// function calls: 2
void CCycleCondition::GetUpdateData(CPackedData& constData)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 246
	CPackedDataBase::GetItem<CCycleConditionUpdater>(
					const CPackedHandle<CCycleConditionUpdater>& handle);  // 143
} /* size: 65, inline expansions: 2 (50 bytes) */

