
//
// animgraph/timecondition.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 16
//

// <01A7FBF0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:8
void MyTypeInfo(void)
{
} /* size: 0 */

// <01A7E187> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:8
void CTimeCondition::GetTypeInfo()
{
} /* size: 12 */

// <01A6E0E6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:8
// function calls: 3
void* CTimeCondition::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CTimeCondition>::CastTo(
		CTimeCondition* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01A6DF53> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:8
// function calls: 3
const void* CTimeCondition::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CTimeCondition>::CastTo(
		const CTimeCondition* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01A6DD23> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:16
// function calls: 9
void CTimeCondition::CTimeCondition()
{
	Object::Object(); // 46
	IAnimStateCondition::IAnimStateCondition(); // 16
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 16
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::CSmartPtr(); // 16
	CAnimStateConditionBase::CAnimStateConditionBase(); // 17
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CTimeConditionUpdater>::CPackedHandle(); // 17
	CAnimStateConditionBase::SetComparisonOp(
			Comparison_t op);  // 20
} /* size: 65, inline expansions: 9 (41 bytes) */

// <01A6DD0A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:16
void CTimeCondition::CTimeCondition()
{
} /* size: 0 */

// <01A6D9C0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:24
// function calls: 13
void CTimeCondition::GetSourceOptions(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* pOutChoiceNames, CUtlVector<int, CUtlMemory<int, int> >* pOutChoiceValues)
{
	CUtlString::CUtlString(
			const char* pString);  // 26
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
			CUtlString& src);  // 26
	CUtlString::~CUtlString(); // 26
} /* size: 198, inline expansions: 13 (267 bytes) */

// <01A6D9A8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:30
void CTimeCondition::GetSourceIndex()
{
} /* size: 0 */

// <01A7E34B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:37
// function call: 1
void CTimeCondition::SetSourceIndex(int index)
{
	{
	}
	CTimeCondition::SetSourceIndex(
			int index);  // 37
} /* size: 0, inline expansions: 1 (17 bytes) */

// <01A6D960> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:37
// variables: 2
void CTimeCondition::SetSourceIndex(int index)
{
	const char   __FUNCTION__; // 21944
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 40
	}
} /* size: 0, variables: 1 */

// <01A7E1B1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:44
// function calls: 2
void CTimeCondition::GetComparisonValue()
{
	CAnimVariant::SetValue<float>(
			const float& value);  // 159
	CAnimVariant::CAnimVariant<float>(
				const float& v);  // 46
} /* size: 21, inline expansions: 2 (26 bytes) */

// <01A6D947> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:44
void CTimeCondition::GetComparisonValue()
{
} /* size: 0 */

// <01A6D872> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:50
// function calls: 2
void CTimeCondition::SetComparisonValue(const CAnimVariant& newValue)
{
	{
	}
	CAnimVariant::GetValue<float>(); // 194
	CAnimVariant::GetValue<float>(); // 52
} /* size: 148, inline expansions: 2 (127 bytes) */

// <01A6D5D4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:56
// variable: 1
// function calls: 8
void CTimeCondition::GetDescription()
{
	CUtlString description; // 58
	CUtlString::CUtlString(); // 58
	CAnimVariant::SetValue<float>(
			const float& value);  // 159
	CAnimVariant::CAnimVariant<float>(
				const float& v);  // 46
	CTimeCondition::GetComparisonValue(); // 59
	CUtlString::Get(); // 99
	CUtlString::String(); // 59
	CAnimStateConditionBase::GetComparisonOp(); // 59
	CUtlString::~CUtlString(); // 59
} /* size: 263, variables: 1, inline expansions: 8 (139 bytes) */

// <01A6D429> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:64
// function calls: 3
void CTimeCondition::InitUpdateData(CAnimGraphInitContext& initContext, const CAnimState* pSourceState, const CAnimStateTransition* pTransition)
{
	CAnimStateConditionBase::GetComparisonOp(); // 66
	PackedHandleID::operator=(
			uint32 id);  // 144
	CPackedDataT<false>::AddItem<CTimeConditionUpdater, Comparison_t, float&>(
								CPackedHandle<CTimeConditionUpdater>* handleOut);  // 66
} /* size: 122, inline expansions: 3 (50 bytes) */

// <01A6D374> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:70
// function calls: 2
void CTimeCondition::GetUpdateData(CPackedData& constData)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 246
	CPackedDataBase::GetItem<CTimeConditionUpdater>(
					const CPackedHandle<CTimeConditionUpdater>& handle);  // 72
} /* size: 65, inline expansions: 2 (50 bytes) */

