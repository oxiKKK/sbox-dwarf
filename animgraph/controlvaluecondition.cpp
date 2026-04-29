
//
// animgraph/controlvaluecondition.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 18
//

// <01A7FB1E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:12
void MyTypeInfo(void)
{
} /* size: 0 */

// <01A7DF7B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:12
void CControlValueCondition::GetTypeInfo()
{
} /* size: 12 */

// <01A7A08A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:12
// function calls: 3
void* CControlValueCondition::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CControlValueCondition>::CastTo(
		CControlValueCondition* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01A79EF7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:12
// function calls: 3
const void* CControlValueCondition::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CControlValueCondition>::CastTo(
		const CControlValueCondition* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01A79BF6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:20
// function calls: 9
void CControlValueCondition::CControlValueCondition()
{
	Object::Object(); // 46
	IAnimStateCondition::IAnimStateCondition(); // 16
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 16
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::CSmartPtr(); // 16
	CAnimStateConditionBase::CAnimStateConditionBase(); // 21
	AnimParamID::AnimParamID(); // 21
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CControlValueConditionUpdater>::CPackedHandle(); // 21
} /* size: 75, inline expansions: 9 (41 bytes) */

// <01A79BDD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:20
void CControlValueCondition::CControlValueCondition()
{
} /* size: 0 */

// <01A79552> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:27
// variable: 1
// function calls: 26
void CControlValueCondition::GetSourceOptions(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* pOutChoiceNames, CUtlVector<int, CUtlMemory<int, int> >* pOutChoiceValues)
{
	{
		int i; // 31
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
				CUtlString& src);  // 33
		CUtlString::~CUtlString(); // 33
		CUtlString::CUtlString(
				const char* pString);  // 33
	}
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
} /* size: 373, inline expansions: 13 (287 bytes) */

// <01A79524> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:38
void CControlValueCondition::GetSourceIndex()
{
} /* size: 11 */

// <01A794E2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:44
void CControlValueCondition::SetSourceIndex(int index)
{
} /* size: 19 */

// <01A794B4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:57
void CControlValueCondition::GetComparisonValueType()
{
} /* size: 9 */

// <01A79477> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:63
void CControlValueCondition::SetComparisonValueType(ComparisonValueType newType)
{
} /* size: 12 */

// <01A7945F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:69
void CControlValueCondition::GetComparisonValueTypeMask()
{
} /* size: 0 */

// <01A78DE8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:75
// variables: 2
// function calls: 26
void CControlValueCondition::GetComparisonValue()
{
	CAnimVariant compValue; // 77
	{
		int nFloatParamIndex; // 91
		AnimParamID::AnimParamID(
				const AnimParamID& rhs);  // 91
		CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::operator->(); // 91
		CAnimEnum::CAnimEnum(
				AnimEnumValue_t value);  // 93
		CAnimVariant::SetValue<CAnimEnum>(
					const CAnimEnum& value);  // 159
		CAnimVariant::CAnimVariant<CAnimEnum>(
					const CAnimEnum& v);  // 93
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
				const CAnimVariant& rhs);  // 93
	}
	CAnimVariant::CAnimVariant(); // 77
	CAnimVariant::SetValue<float>(
			const float& value);  // 159
	CAnimVariant::CAnimVariant<float>(
				const float& v);  // 82
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
			const CAnimVariant& rhs);  // 82
	CAnimEnum::CAnimEnum(
			AnimEnumValue_t value);  // 86
	CAnimVariant::SetValue<CAnimEnum>(
				const CAnimEnum& value);  // 159
	CAnimVariant::CAnimVariant<CAnimEnum>(
				const CAnimEnum& v);  // 86
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
			const CAnimVariant& rhs);  // 86
} /* size: 144, variables: 1, inline expansions: 16 (46 bytes) */

// <01A78836> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:102
// variable: 1
// function calls: 27
void CControlValueCondition::SetComparisonValue(const CAnimVariant& newValue)
{
	{
		int nFloatParamIndex; // 116
		{
			CAnimEnum::CAnimEnum(); // 117
			DefaultValue(void); // 200
		}
		CAnimVariant::GetValue<CAnimEnum>(); // 194
		CAnimVariant::GetValue<CAnimEnum>(); // 116
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
		CAnimStateConditionBase::GetContext(); // 119
		AnimParamID::operator=(
				const AnimParamID& rhs);  // 119
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimStateMachineContext>(CAnimStateMachineContext* pObj); // 344
		CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::~CSmartPtr(); // 119
	}
	{
	}
	CAnimVariant::GetValue<float>(); // 194
	CAnimVariant::GetValue<float>(); // 107
	{
		CAnimEnum::CAnimEnum(); // 117
		DefaultValue(void); // 200
	}
	CAnimVariant::GetValue<CAnimEnum>(); // 194
	CAnimVariant::GetValue<CAnimEnum>(); // 111
} /* size: 472, inline expansions: 4 (304 bytes) */

// <01A78338> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:126
// variables: 2
// function calls: 19
void CControlValueCondition::GetComparisonValueOptions()
{
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > options; // 128
	{
		int i; // 133
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
				CUtlString& src);  // 135
		CUtlString::~CUtlString(); // 135
		CUtlString::CUtlString(
				const char* pString);  // 135
	}
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 128
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::operator->(); // 140
} /* size: 311, variables: 1, inline expansions: 6 (83 bytes) */

// <01A77ABF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:148
// variables: 4
// function calls: 34
void CControlValueCondition::GetDescription()
{
	CUtlString paramName; // 150
	CUtlString valueName; // 156
	CUtlString description; // 181
	{
		CAnimParameterBaseConstPtr pParam; // 172
		CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::operator->(); // 172
		AnimParamID::AnimParamID(
				const AnimParamID& rhs);  // 172
		CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator!=(
				const CAnimParameterBase* pOther);  // 173
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 175
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<const CAnimParameterBase>(const CAnimParameterBase* pObj); // 344
		CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 178
	}
	CUtlString::CUtlString(
			const char* pString);  // 150
	CUtlString::operator=(
			const char* src);  // 153
	CUtlString::CUtlString(); // 156
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 160
	CUtlString::operator=(
			const char* src);  // 160
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 160
	CUtlString::operator=(
			const char* src);  // 166
	CUtlString::Get(); // 99
	CUtlString::String(); // 182
	CUtlString::CUtlString(); // 181
	CAnimStateConditionBase::GetComparisonOp(); // 182
	CUtlString::Get(); // 99
	CUtlString::String(); // 182
	CUtlString::~CUtlString(); // 184
	CUtlString::~CUtlString(); // 184
} /* size: 675, variables: 3, inline expansions: 20 (504 bytes) */

// <01A7780D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:187
// variable: 1
// function calls: 8
void CControlValueCondition::InitUpdateData(CAnimGraphInitContext& initContext, const CAnimState* pSourceState, const CAnimStateTransition* pTransition)
{
	CControlValueConditionUpdater* pUpdateData; // 189
	IConditionUpdater::IConditionUpdater(); // 14
	CompValues(const union CompValues* this); // 14
	CControlValueConditionUpdater::CControlValueConditionUpdater(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<false>::AddItem<CControlValueConditionUpdater>(
						CPackedHandle<CControlValueConditionUpdater>* handleOut);  // 189
	CAnimStateConditionBase::GetComparisonOp(); // 194
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 207
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 207
} /* size: 295, variables: 1, inline expansions: 8 (128 bytes) */

// <01A77758> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:213
// function calls: 2
void CControlValueCondition::GetUpdateData(CPackedData& constData)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 246
	CPackedDataBase::GetItem<CControlValueConditionUpdater>(
						const CPackedHandle<CControlValueConditionUpdater>& handle);  // 215
} /* size: 65, inline expansions: 2 (50 bytes) */

