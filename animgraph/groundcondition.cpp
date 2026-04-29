
//
// animgraph/groundcondition.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 17
//

// <01A7FB78> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:8
void MyTypeInfo(void)
{
} /* size: 0 */

// <01A7DFF9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:8
void CGroundCondition::GetTypeInfo()
{
} /* size: 12 */

// <01A735F4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:8
// function calls: 3
void* CGroundCondition::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CGroundCondition>::CastTo(
		CGroundCondition* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01A73461> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:8
// function calls: 3
const void* CGroundCondition::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CGroundCondition>::CastTo(
		const CGroundCondition* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01A73231> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:16
// function calls: 9
void CGroundCondition::CGroundCondition()
{
	Object::Object(); // 46
	IAnimStateCondition::IAnimStateCondition(); // 16
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 16
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::CSmartPtr(); // 16
	CAnimStateConditionBase::CAnimStateConditionBase(); // 17
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CGroundConditionUpdater>::CPackedHandle(); // 17
	CAnimStateConditionBase::SetComparisonOp(
			Comparison_t op);  // 20
} /* size: 62, inline expansions: 9 (55 bytes) */

// <01A73218> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:16
void CGroundCondition::CGroundCondition()
{
} /* size: 0 */

// <01A72ECE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:24
// function calls: 13
void CGroundCondition::GetSourceOptions(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* pOutChoiceNames, CUtlVector<int, CUtlMemory<int, int> >* pOutChoiceValues)
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

// <01A72EB6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:31
void CGroundCondition::GetSourceIndex()
{
} /* size: 0 */

// <01A72E9E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:38
void CGroundCondition::GetComparisonOpMask()
{
} /* size: 0 */

// <01A7E2C4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:45
// function call: 1
void CGroundCondition::SetSourceIndex(int index)
{
	{
	}
	CGroundCondition::SetSourceIndex(
			int index);  // 45
} /* size: 0, inline expansions: 1 (17 bytes) */

// <01A72E56> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:45
// variables: 2
void CGroundCondition::SetSourceIndex(int index)
{
	const char   __FUNCTION__; // 21944
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 48
	}
} /* size: 0, variables: 1 */

// <01A7E023> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:52
// function calls: 2
void CGroundCondition::GetComparisonValue()
{
	CAnimVariant::SetValue<bool>(
			const bool& value);  // 159
	CAnimVariant::CAnimVariant<bool>(
				const bool& v);  // 54
} /* size: 18, inline expansions: 2 (20 bytes) */

// <01A72E3D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:52
void CGroundCondition::GetComparisonValue()
{
} /* size: 0 */

// <01A72D68> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:58
// function calls: 2
void CGroundCondition::SetComparisonValue(const CAnimVariant& newValue)
{
	{
	}
	CAnimVariant::GetValue<bool>(); // 194
	CAnimVariant::GetValue<bool>(); // 60
} /* size: 137, inline expansions: 2 (121 bytes) */

// <01A72ACA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:64
// variable: 1
// function calls: 8
void CGroundCondition::GetDescription()
{
	CUtlString description; // 66
	CUtlString::CUtlString(); // 66
	CAnimVariant::SetValue<bool>(
			const bool& value);  // 159
	CAnimVariant::CAnimVariant<bool>(
				const bool& v);  // 54
	CGroundCondition::GetComparisonValue(); // 67
	CUtlString::Get(); // 99
	CUtlString::String(); // 67
	CAnimStateConditionBase::GetComparisonOp(); // 67
	CUtlString::~CUtlString(); // 67
} /* size: 263, variables: 1, inline expansions: 8 (130 bytes) */

// <01A7291F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:72
// function calls: 3
void CGroundCondition::InitUpdateData(CAnimGraphInitContext& initContext, const CAnimState* pSourceState, const CAnimStateTransition* pTransition)
{
	CAnimStateConditionBase::GetComparisonOp(); // 74
	PackedHandleID::operator=(
			uint32 id);  // 144
	CPackedDataT<false>::AddItem<CGroundConditionUpdater, Comparison_t, bool&>(
								CPackedHandle<CGroundConditionUpdater>* handleOut);  // 74
} /* size: 122, inline expansions: 3 (49 bytes) */

// <01A7286A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:78
// function calls: 2
void CGroundCondition::GetUpdateData(CPackedData& constData)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 246
	CPackedDataBase::GetItem<CGroundConditionUpdater>(
					const CPackedHandle<CGroundConditionUpdater>& handle);  // 80
} /* size: 65, inline expansions: 2 (50 bytes) */

