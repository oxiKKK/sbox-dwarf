
//
// animgraph/pathstatuscondition.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 15
//

// <01A7FBB4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.cpp:16
void MyTypeInfo(void)
{
} /* size: 0 */

// <01A7E133> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.cpp:16
void CPathStatusCondition::GetTypeInfo()
{
} /* size: 12 */

// <01A7044A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.cpp:16
// function calls: 3
void* CPathStatusCondition::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CPathStatusCondition>::CastTo(
		CPathStatusCondition* derived,
		ClassID baseTypeInfo);  // 16
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01A702B7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.cpp:16
// function calls: 3
const void* CPathStatusCondition::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CPathStatusCondition>::CastTo(
		const CPathStatusCondition* derived,
		ClassID baseTypeInfo);  // 16
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01A700C8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.cpp:24
// function calls: 8
void CPathStatusCondition::CPathStatusCondition()
{
	Object::Object(); // 46
	IAnimStateCondition::IAnimStateCondition(); // 16
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 16
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::CSmartPtr(); // 16
	CAnimStateConditionBase::CAnimStateConditionBase(); // 25
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CPathStatusConditionUpdater>::CPackedHandle(); // 25
} /* size: 69, inline expansions: 8 (55 bytes) */

// <01A700AF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.cpp:24
void CPathStatusCondition::CPathStatusCondition()
{
} /* size: 0 */

// <01A6FD3B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.cpp:31
// variable: 1
// function calls: 13
void CPathStatusCondition::GetSourceOptions(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* pOutChoiceNames, CUtlVector<int, CUtlMemory<int, int> >* pOutChoiceValues)
{
	{
		int i; // 33
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 1514
		Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
		CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1252
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
				CUtlString& src);  // 35
		CUtlString::CUtlString(
				const char* pString);  // 35
		CUtlString::~CUtlString(); // 35
	}
} /* size: 222 */

// <01A6FD0D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.cpp:40
void CPathStatusCondition::GetSourceIndex()
{
} /* size: 8 */

// <01A6FCD0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.cpp:46
void CPathStatusCondition::SetSourceIndex(int index)
{
} /* size: 8 */

// <01A6FCB8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.cpp:52
void CPathStatusCondition::GetComparisonOpMask()
{
} /* size: 0 */

// <01A6FCA0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.cpp:59
void CPathStatusCondition::GetComparisonValue()
{
} /* size: 0 */

// <01A6FBCB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.cpp:65
// function calls: 2
void CPathStatusCondition::SetComparisonValue(const CAnimVariant& newValue)
{
	{
	}
	CAnimVariant::GetValue<bool>(); // 194
	CAnimVariant::GetValue<bool>(); // 67
} /* size: 137, inline expansions: 2 (121 bytes) */

// <01A6F98E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.cpp:71
// variable: 1
// function calls: 8
void CPathStatusCondition::GetDescription()
{
	CUtlString description; // 73
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 81
	CFmtStrN<256>::String(); // 73
	CUtlString::CUtlString(
			const char* pString);  // 73
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 73
} /* size: 195, variables: 1, inline expansions: 8 (199 bytes) */

// <01A6F7F2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.cpp:78
// variable: 1
// function calls: 4
void CPathStatusCondition::InitUpdateData(CAnimGraphInitContext& initContext, const CAnimState* pSourceState, const CAnimStateTransition* pTransition)
{
	CPathStatusConditionUpdater* pUpdateData; // 80
	IConditionUpdater::IConditionUpdater(); // 22
	CPathStatusConditionUpdater::CPathStatusConditionUpdater(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<false>::AddItem<CPathStatusConditionUpdater>(
						CPackedHandle<CPathStatusConditionUpdater>* handleOut);  // 80
} /* size: 86, variables: 1, inline expansions: 4 (56 bytes) */

// <01A6F7CE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.cpp:86
void CPathStatusCondition::GetUpdateData(CPackedData& constData)
{
} /* size: 0 */

