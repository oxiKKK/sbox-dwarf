
//
// animgraph/finishedcondition.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 15
//

// <01A7FB5A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.cpp:13
void MyTypeInfo(void)
{
} /* size: 0 */

// <01A7DFCF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.cpp:13
void CFinishedCondition::GetTypeInfo()
{
} /* size: 12 */

// <01A7583C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.cpp:13
// function calls: 3
void* CFinishedCondition::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CFinishedCondition>::CastTo(
		CFinishedCondition* derived,
		ClassID baseTypeInfo);  // 13
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01A756A9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.cpp:13
// function calls: 3
const void* CFinishedCondition::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CFinishedCondition>::CastTo(
		const CFinishedCondition* derived,
		ClassID baseTypeInfo);  // 13
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01A754BA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.cpp:21
// function calls: 8
void CFinishedCondition::CFinishedCondition()
{
	Object::Object(); // 46
	IAnimStateCondition::IAnimStateCondition(); // 16
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 16
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::CSmartPtr(); // 16
	CAnimStateConditionBase::CAnimStateConditionBase(); // 22
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CFinishedConditionUpdater>::CPackedHandle(); // 22
} /* size: 69, inline expansions: 8 (55 bytes) */

// <01A754A1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.cpp:21
void CFinishedCondition::CFinishedCondition()
{
} /* size: 0 */

// <01A74C3C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.cpp:28
// variables: 10
// function calls: 33
void CFinishedCondition::GetSourceOptions(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* pOutChoiceNames, CUtlVector<int, CUtlMemory<int, int> >* pOutChoiceValues)
{
	CSchemaType_DeclaredEnum* pEnum; // 30
	const char   __FUNCTION__; // 21993
	{
		EnumIntrospectionHandle_t pEnumInfo; // 33
		int nNumEnumerators; // 36
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 34
		}
		{
			int i; // 37
			{
				EnumeratorIntrospectionHandle_t pEnumerator; // 39
				const char* pName; // 41
				const char* pFriendlyName; // 43
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 49
				}
				CUtlMemory<CUtlString, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
					int i);  // 1252
				CUtlString::Get(); // 354
				CUtlString::CUtlString(
						const CUtlString& string);  // 1514
				Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
				CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
				CUtlMemory<CUtlString, int>::Base(); // 112
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
						int num);  // 1249
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
						CUtlString& src);  // 51
				CUtlString::~CUtlString(); // 51
				CSchemaEnumInfo::GetEnumerator(
						int i);  // 39
				CSchemaMetadataSet::CSchemaMetadataSet(
							uint16 nNumEntries,
							const SchemaMetadataEntryData_t* pEntries);  // 16
				CSchemaEnumeratorInfo::GetMetadata(); // 88
				SchemaMetaGetPtr2(EnumeratorIntrospectionHandle_t enumeratorInfo,
							const char* pKey);  // 26
				TagName(void); // 26
				GetPtr(EnumeratorIntrospectionHandle_t pObj); // 26
				GetValue(EnumeratorIntrospectionHandle_t pObj,
					const char* defaultValue);  // 43
				CSchemaEnumeratorInfo::GetName(); // 41
				CSchemaEnumeratorInfo::GetValue(); // 49
				CUtlString::CUtlString(
						const char* pString);  // 51
			}
		}
		CUtlString::Get(); // 72
		CSchemaType::GetName(); // 744
		CSchemaType_DeclaredEnum::LookupEnum(); // 740
		CSchemaType_DeclaredEnum::LookupEnum(); // 709
		CSchemaType_DeclaredEnum::GetEnum(); // 33
		CSchemaEnumInfo::GetEnumeratorCount(); // 36
	}
	SchemaTypeScope(void); // 23
	Get(ISchemaSystemTypeScope* pTypeScope); // 23
	SchemaTypeOf<FinishedConditionOption>(void); // 30
	CSchemaType::InternalAs(
			SchemaTypeCategory_t nTypeCategory,
			SchemaAtomicCategory_t nAtomicCategory);  // 125
	CSchemaType::As<CSchemaType_DeclaredEnum>(); // 30
} /* size: 0, variables: 2, inline expansions: 5 (182 bytes) */

// <01A74C0E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.cpp:57
void CFinishedCondition::GetSourceIndex()
{
} /* size: 8 */

// <01A74BD1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.cpp:63
void CFinishedCondition::SetSourceIndex(int index)
{
} /* size: 8 */

// <01A74BB9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.cpp:69
void CFinishedCondition::GetComparisonOpMask()
{
} /* size: 0 */

// <01A74B29> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.cpp:76
// function calls: 2
void CFinishedCondition::GetComparisonValue()
{
	CAnimVariant::SetValue<bool>(
			const bool& value);  // 159
	CAnimVariant::CAnimVariant<bool>(
				const bool& v);  // 78
} /* size: 18, inline expansions: 2 (20 bytes) */

// <01A74A54> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.cpp:82
// function calls: 2
void CFinishedCondition::SetComparisonValue(const CAnimVariant& newValue)
{
	{
	}
	CAnimVariant::GetValue<bool>(); // 194
	CAnimVariant::GetValue<bool>(); // 84
} /* size: 137, inline expansions: 2 (121 bytes) */

// <01A749C6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.cpp:88
// variable: 1
// function call: 1
void CFinishedCondition::GetDescription()
{
	CUtlString description; // 90
	CUtlString::CUtlString(
			const char* pString);  // 90
} /* size: 62, variables: 1, inline expansions: 1 (12 bytes) */

// <01A738FF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.cpp:95
// variables: 8
// function calls: 68
void CFinishedCondition::InitUpdateData(CAnimGraphInitContext& initContext, const CAnimState* pSourceState, const CAnimStateTransition* pTransition)
{
	CFinishedConditionUpdater* pUpdateData; // 97
	AnimNodeID childNodeID; // 101
	{
		const CAnimNodeBase* pChildNode; // 104
		{
			const ISequenceAnimNode* pSequenceNode; // 107
			{
				CUtlString sequenceName; // 110
				{
					HSequence sequence; // 113
					{
						const ISequence* pSequence; // 116
						const float  flDuration; // 117
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
						CAnimStateConditionBase::GetContext(); // 137
						CUtlString::Get(); // 99
						CUtlString::String(); // 137
						CUtlString::Get(); // 99
						CUtlString::String(); // 137
						ThreadInterlockedDecrement(volatile int32* p); // 159
						Decrement(int* p); // 295
						CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
						CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
						CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
						Release<CAnimStateMachineContext>(CAnimStateMachineContext* pObj); // 344
						CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::~CSmartPtr(); // 137
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
						CAnimStateConditionBase::GetContext(); // 125
						CUtlString::Get(); // 99
						CUtlString::String(); // 125
						CUtlString::Get(); // 99
						CUtlString::String(); // 125
						ThreadInterlockedDecrement(volatile int32* p); // 159
						Decrement(int* p); // 295
						CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
						CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
						CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
						Release<CAnimStateMachineContext>(CAnimStateMachineContext* pObj); // 344
						CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::~CSmartPtr(); // 125
					}
					CUtlString::Get(); // 99
					CUtlString::String(); // 113
				}
				CUtlString::Get(); // 354
				CUtlString::CUtlString(
						const CUtlString& string);  // 110
				CUtlString::IsEmpty(); // 111
				CUtlString::~CUtlString(); // 142
			}
		}
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
		CAnimStateConditionBase::GetContext(); // 104
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 104
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimStateMachineContext>(CAnimStateMachineContext* pObj); // 344
		CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::~CSmartPtr(); // 104
	}
	IConditionUpdater::IConditionUpdater(); // 20
	CFinishedConditionUpdater::CFinishedConditionUpdater(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<false>::AddItem<CFinishedConditionUpdater>(
						CPackedHandle<CFinishedConditionUpdater>* handleOut);  // 97
	AnimNodeID::IsValid(); // 102
} /* size: 823, variables: 2, inline expansions: 5 (80 bytes) */

// <01A7384A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.cpp:148
// function calls: 2
void CFinishedCondition::GetUpdateData(CPackedData& constData)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 246
	CPackedDataBase::GetItem<CFinishedConditionUpdater>(
						const CPackedHandle<CFinishedConditionUpdater>& handle);  // 150
} /* size: 65, inline expansions: 2 (50 bytes) */

