
//
// animgraph/parameteranimcondition.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 18
//

// <01A7FB96> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:12
void MyTypeInfo(void)
{
} /* size: 0 */

// <01A7E0AF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:12
void CParameterAnimCondition::GetTypeInfo()
{
} /* size: 12 */

// <01A725B2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:12
// function calls: 3
void* CParameterAnimCondition::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CParameterAnimCondition>::CastTo(
		CParameterAnimCondition* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01A7241F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:12
// function calls: 3
const void* CParameterAnimCondition::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CParameterAnimCondition>::CastTo(
		const CParameterAnimCondition* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01A721C8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:20
// function calls: 10
void CParameterAnimCondition::CParameterAnimCondition()
{
	Object::Object(); // 46
	IAnimStateCondition::IAnimStateCondition(); // 16
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 16
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::CSmartPtr(); // 16
	CAnimStateConditionBase::CAnimStateConditionBase(); // 21
	AnimParamID::AnimParamID(); // 21
	CAnimVariant::CAnimVariant(); // 21
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CParamConditionUpdater>::CPackedHandle(); // 21
} /* size: 69, inline expansions: 10 (66 bytes) */

// <01A721AF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:20
void CParameterAnimCondition::CParameterAnimCondition()
{
} /* size: 0 */

// <01A720FF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:28
// function call: 1
void CParameterAnimCondition::GetSourceOptions(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* pOutChoiceNames, CUtlVector<int, CUtlMemory<int, int> >* pOutChoiceValues)
{
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::operator->(); // 30
} /* size: 17, inline expansions: 1 (0 bytes) */

// <01A7204D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:34
// function calls: 2
void CParameterAnimCondition::GetSourceIndex()
{
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 36
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::operator->(); // 36
} /* size: 72, inline expansions: 2 (23 bytes) */

// <01A7EAA6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:40
// variable: 1
// function calls: 60
void CParameterAnimCondition::SetSourceIndex(int index)
{
	AnimParamID::operator=(
			uint32 id);  // 44
	{
		CAnimParameterBaseConstPtr pParam; // 49
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
		CAnimStateConditionBase::GetContext(); // 48
		AnimParamID::operator=(
				const AnimParamID& rhs);  // 48
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimStateMachineContext>(CAnimStateMachineContext* pObj); // 344
		CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::~CSmartPtr(); // 48
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
		CAnimStateConditionBase::GetContext(); // 49
		AnimParamID::AnimParamID(
				const AnimParamID& rhs);  // 49
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimStateMachineContext>(CAnimStateMachineContext* pObj); // 344
		CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::~CSmartPtr(); // 49
		CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator!=(
				const CAnimParameterBase* pOther);  // 50
		CAnimVariant::GetType(); // 52
		CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator->(); // 54
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
				const CAnimVariant& rhs);  // 54
		CAnimVariant::GetType(); // 85
		CParameterAnimCondition::GetComparisonOpMask(); // 57
		CAnimStateConditionBase::GetComparisonOp(); // 57
		CAnimStateConditionBase::SetComparisonOp(
				Comparison_t op);  // 59
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<const CAnimParameterBase>(const CAnimParameterBase* pObj); // 344
		CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 67
		CAnimVariant::CAnimVariant(); // 65
		CAnimVariant::SetValueUntyped(
				AnimParamType_t nType,
				const void* pData);  // 168
		CAnimVariant::operator=(
				const CAnimVariant& rhs);  // 65
	}
	CParameterAnimCondition::SetSourceIndex(
			int index);  // 40
} /* size: 497, inline expansions: 2 (411 bytes) */

// <01A7201A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:40
// variable: 1
void CParameterAnimCondition::SetSourceIndex(int index)
{
	{
		CAnimParameterBaseConstPtr pParam; // 49
	}
} /* size: 0 */

// <01A71E37> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:71
// function calls: 7
void CParameterAnimCondition::GetComparisonValue()
{
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
			const CAnimVariant& rhs);  // 142
	CAnimVariant::CAnimVariant(
			const CAnimVariant& rhs);  // 73
} /* size: 57, inline expansions: 7 (161 bytes) */

// <01A71C20> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:77
// function calls: 7
void CParameterAnimCondition::SetComparisonValue(const CAnimVariant& newValue)
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
			const CAnimVariant& rhs);  // 79
} /* size: 51, inline expansions: 7 (122 bytes) */

// <01A7E0D9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:83
// function call: 1
void CParameterAnimCondition::GetComparisonOpMask()
{
	CAnimVariant::GetType(); // 85
} /* size: 20, inline expansions: 1 (0 bytes) */

// <01A71C07> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:83
void CParameterAnimCondition::GetComparisonOpMask()
{
} /* size: 0 */

// <01A71052> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:101
// variables: 5
// function calls: 52
void CParameterAnimCondition::GetComparisonValueOptions()
{
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > options; // 103
	CAnimParameterBaseConstPtr pParam; // 105
	{
		const IEnumAnimParameter* pEnumParam; // 108
		CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::Get(); // 108
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 573
		CUtlMemory<CUtlString, int>::NumAllocated(); // 782
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowVector(
				int num);  // 1445
		{
			int i; // 1451
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1453
			CUtlString::CUtlString(); // 1479
			Construct<CUtlString>(CUtlString* pMemory); // 1453
		}
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddMultipleToTail(
					int num);  // 1319
		{
			int i; // 1696
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1697
			CUtlString::~CUtlString(); // 1526
			Destruct<CUtlString>(CUtlString* pMemory); // 1697
		}
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveMultipleFromTail(
					int num);  // 1323
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::SetCount(
			int count);  // 573
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 102
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::begin(); // 574
		CUtlMemory<CUtlString, int>::Base(); // 113
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 105
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 105
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::end(); // 574
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 209
		UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
						const CUtlString* pFromEnd,
						CUtlString* pTo);  // 200
		UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
						const CUtlString* pFromEnd,
						CUtlString* pTo);  // 574
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
				const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 565
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
				const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 452
		CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
				const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& src);  // 111
	}
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 103
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::operator->(); // 105
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 105
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator!=(
			const CAnimParameterBase* pOther);  // 106
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimParameterBase>(const CAnimParameterBase* pObj); // 344
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 116
} /* size: 562, variables: 2, inline expansions: 15 (191 bytes) */

// <01A70BF5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:119
// variables: 2
// function calls: 16
void CParameterAnimCondition::GetDescription()
{
	CUtlString paramName; // 121
	CUtlString description; // 127
	CUtlString::CUtlString(
			const char* pString);  // 121
	AnimParamID::IsValid(); // 122
	CUtlString::CUtlString(); // 127
	CUtlString::Get(); // 99
	CUtlString::String(); // 128
	CAnimStateConditionBase::GetComparisonOp(); // 128
	CUtlString::Get(); // 99
	CUtlString::String(); // 128
	CUtlString::~CUtlString(); // 128
	CUtlString::~CUtlString(); // 130
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::operator->(); // 124
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 124
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 124
} /* size: 344, variables: 2, inline expansions: 16 (238 bytes) */

// <01A70785> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:133
// variable: 1
// function calls: 15
void CParameterAnimCondition::InitUpdateData(CAnimGraphInitContext& initContext, const CAnimState* pSourceState, const CAnimStateTransition* pTransition)
{
	CParamConditionUpdater* pUpdateData; // 135
	CAnimVariant::CAnimVariant(); // 13
	IConditionUpdater::IConditionUpdater(); // 13
	CAnimParamHandle::CAnimParamHandle(); // 13
	CParamConditionUpdater::CParamConditionUpdater(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<false>::AddItem<CParamConditionUpdater>(
					CPackedHandle<CParamConditionUpdater>* handleOut);  // 135
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 136
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 136
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
			const CAnimVariant& rhs);  // 137
	CAnimStateConditionBase::GetComparisonOp(); // 138
} /* size: 268, variables: 1, inline expansions: 15 (270 bytes) */

// <01A706D0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:142
// function calls: 2
void CParameterAnimCondition::GetUpdateData(CPackedData& constData)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 246
	CPackedDataBase::GetItem<CParamConditionUpdater>(
					const CPackedHandle<CParamConditionUpdater>& handle);  // 144
} /* size: 65, inline expansions: 2 (50 bytes) */

