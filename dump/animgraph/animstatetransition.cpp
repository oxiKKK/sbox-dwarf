
//
// animgraph/animstatetransition.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 33
//

// <01A030E6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:10
void MyTypeInfo(void)
{
} /* size: 0 */

// <019F8B1D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:10
void IAnimStateTransition::GetTypeInfo()
{
} /* size: 0 */

// <019F8988> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:10
// function calls: 3
void* IAnimStateTransition::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IAnimStateTransition>::CastTo(
		IAnimStateTransition* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (0 bytes) */

// <019F87F3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:10
// function calls: 3
const void* IAnimStateTransition::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IAnimStateTransition>::CastTo(
		const IAnimStateTransition* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01A02DDB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:13
void CAnimStateTransition::GetTypeInfo()
{
} /* size: 12 */

// <019F82C5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:13
// function calls: 3
void* CAnimStateTransition::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CAnimStateTransition>::CastTo(
		CAnimStateTransition* derived,
		ClassID baseTypeInfo);  // 13
} /* size: 0, inline expansions: 3 (295 bytes) */

// <019F8130> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:13
// function calls: 3
const void* CAnimStateTransition::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CAnimStateTransition>::CastTo(
		const CAnimStateTransition* derived,
		ClassID baseTypeInfo);  // 13
} /* size: 0, inline expansions: 3 (295 bytes) */

// <019F7AAC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:16
// function calls: 14
void CAnimStateTransition::CAnimStateTransition()
{
	Object::Object(); // 95
	IAnimStateTransition::IAnimStateTransition(); // 16
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 16
	CUtlMemory<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateConditionBase, this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateConditionBase, this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateConditionBase, CRe this); // 16
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::CSmartPtr(); // 16
	AnimStateID::AnimStateID(); // 16
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 27
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 27
	CBlendCurve::CBlendCurve(); // 16
} /* size: 142, inline expansions: 14 (108 bytes) */

// <019F7A93> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:16
void CAnimStateTransition::CAnimStateTransition()
{
} /* size: 0 */

// <019F777E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:22
// function calls: 10
void CAnimStateTransition::GetConditionTypes()
{
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimStateConditionBase>::CFactoryMaker, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimStateConditionBase>::CFactoryMaker, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimStateConditionBase>::CFactoryMaker, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimStateConditionBase>::CFactoryMaker, CRefCountAccessor>, CUtl this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimStateConditionBase>::CFactoryMaker, CRefCountAccessor>, CUtl this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CSmartPtr<Reflection::CTypeFactory<CAnimStateConditionBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemo this,
			int growSize,
			int initCapacity);  // 30
	CUtlStringMap(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimStateConditionBase>::CFactoryMaker, CRefCountAccessor>, CUtlS this,
			bool caseInsensitive,
			int growSize,
			int initSize);  // 157
	CTypeFactory<CAnimStateConditionBase>::CTypeFactory(); // 66
	Get(void); // 61
	Get(void); // 24
} /* size: 254, inline expansions: 10 (604 bytes) */

// <019F7720> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:28
// function call: 1
void CAnimStateTransition::GetConditionCount()
{
	Count(const CUtlVectorBase<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateConditio this); // 30
} /* size: 8, inline expansions: 1 (0 bytes) */

// <019F764C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:34
// function calls: 3
void CAnimStateTransition::GetCondition(int index)
{
	CUtlMemory<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateConditionBase, this,
			int i);  // 36
	CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>::Get(); // 36
} /* size: 16, inline expansions: 3 (10 bytes) */

// <019F7628> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:40
void CAnimStateTransition::GetCondition(int index)
{
} /* size: 0 */

// <019F6897> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:46
// variable: 1
// function calls: 59
void CAnimStateTransition::AddCondition(const CUtlString& conditionTypeName)
{
	CAnimStateConditionBasePtr condition; // 48
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimStateConditionBase>::CFactoryMaker, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimStateConditionBase>::CFactoryMaker, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimStateConditionBase>::CFactoryMaker, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimStateConditionBase>::CFactoryMaker, CRefCountAccessor>, CUtl this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimStateConditionBase>::CFactoryMaker, CRefCountAccessor>, CUtl this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CSmartPtr<Reflection::CTypeFactory<CAnimStateConditionBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemo this,
			int growSize,
			int initCapacity);  // 30
	CUtlStringMap(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimStateConditionBase>::CFactoryMaker, CRefCountAccessor>, CUtlS this,
			bool caseInsensitive,
			int growSize,
			int initSize);  // 157
	CTypeFactory<CAnimStateConditionBase>::CTypeFactory(); // 66
	Get(void); // 61
	Get(void); // 48
	CUtlString::Get(); // 99
	CUtlString::String(); // 48
	CUtlSymbol::IsValid(); // 88
	CUtlSymbolTable::FindElement(
			const char* pString);  // 90
	Find(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimStateConditionBase>::CFactoryMaker, CRefCountAccessor>, this,
		const char* pString);  // 86
	Count(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimStateConditionBase>::CFactoryMaker, CRefCountAccessor> this); // 53
	{
	}
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimStateConditionBase>::CFactoryMaker, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimStateConditionBase>::CFactoryMaker, CRefCountAccessor>, CUtl this,
			int i);  // 54
	operator[](const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimStateConditionBase>::CFactoryMaker, CRefCountAccessor>, CUtlS this,
			IndexType_t n);  // 89
	CSmartPtr<Reflection::CTypeFactory<CAnimStateConditionBase>::CFactoryMaker, CRefCountAccessor>::operator->(); // 89
	CTypeFactory<CAnimStateConditionBase>::Create(
		const char* typeName);  // 48
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimStateConditionBase>(CAnimStateConditionBase* pObj); // 366
	CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>::operator=(
			CAnimStateConditionBase* pObj);  // 319
	CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>::CSmartPtr(
			CAnimStateConditionBase* pObj);  // 48
	CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>::operator!=(
			const CAnimStateConditionBase* pOther);  // 49
	CUtlMemory<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, int>::NumAllocated(); // 1196
	CUtlMemory<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateConditionBase, this,
		int i);  // 1201
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimStateConditionBase>(CAnimStateConditionBase* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimStateConditionBase>(CAnimStateConditionBase* pObj); // 370
	CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>::operator=(
			CAnimStateConditionBase* pObj);  // 406
	CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>& other);  // 1520
	CopyConstruct<CSmartPtr<CAnimStateConditionBase> >(CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>* pMemory,
								const CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>& src);  // 1201
	CUtlMemory<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, int>::Base(); // 112
	Base(const CUtlVectorBase<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateConditionBase, this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateConditionBase, this); // 824
	GrowMemory(const CUtlVectorBase<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateConditionBase, this,
			int num);  // 1198
	AddToTail(const CUtlVectorBase<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateConditionBase, this,
			const CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>& src);  // 52
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimStateConditionBase>(CAnimStateConditionBase* pObj); // 344
	CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>::~CSmartPtr(); // 56
} /* size: 0, variables: 1, inline expansions: 59 (1421 bytes) */

// <019F6769> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:59
// variable: 1
// function calls: 4
void CAnimStateTransition::RemoveCondition(IAnimStateCondition* condition)
{
	{
		int i; // 61
		Count(const CUtlVectorBase<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateConditio this); // 61
		CUtlMemory<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateConditionBase, this,
				int i);  // 63
		CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>::Get(); // 63
	}
} /* size: 65 */

// <019F62DC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:72
// variables: 3
// function calls: 18
void CAnimStateTransition::MoveConditionToIndex(int oldIndex, int newIndex)
{
	CAnimStateConditionBasePtr condition; // 74
	const char   __FUNCTION__; // 51082
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 75
	}
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimStateConditionBase>(CAnimStateConditionBase* pObj); // 366
	CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>::operator=(
			CAnimStateConditionBase* pObj);  // 406
	CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>& other);  // 74
	CUtlMemory<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateConditionBase, this,
			int i);  // 74
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimStateConditionBase>(CAnimStateConditionBase* pObj); // 344
	CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>::~CSmartPtr(); // 87
	InsertAfter(const CUtlVectorBase<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateConditionBase, this,
			int elem,
			const CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>& src);  // 84
} /* size: 0, variables: 2, inline expansions: 18 (331 bytes) */

// <019F61D2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:90
// function calls: 4
void CAnimStateTransition::GetTargetState()
{
	AnimStateID::IsValid(); // 92
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::operator->(); // 94
	CAnimStateMachineContext::GetStateMachine(); // 94
	AnimStateID::AnimStateID(
			const AnimStateID& rhs);  // 94
} /* size: 89, inline expansions: 4 (27 bytes) */

// <019F61BA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:103
void CAnimStateTransition::GetTargetState()
{
} /* size: 0 */

// <01A02EB5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:116
// function calls: 5
void CAnimStateTransition::SetTargetState(IAnimState* targetState)
{
	AnimStateID::AnimStateID(
			const AnimStateID& rhs);  // 194
	CAnimState::GetStateID(); // 120
	AnimStateID::operator=(
			const AnimStateID& rhs);  // 120
	AnimStateID::AnimStateID(); // 124
	AnimStateID::operator=(
			const AnimStateID& rhs);  // 124
} /* size: 120, inline expansions: 5 (31 bytes) */

// <019F6195> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:116
void CAnimStateTransition::SetTargetState(IAnimState* targetState)
{
} /* size: 0 */

// <019F6167> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:129
void CAnimStateTransition::GetBlendDuration()
{
} /* size: 10 */

// <019F612A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:135
void CAnimStateTransition::SetBlendDuration(float duration)
{
} /* size: 10 */

// <019F60FC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:141
void CAnimStateTransition::GetBlendCurve()
{
} /* size: 9 */

// <019F5FDD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:147
// function calls: 3
void CAnimStateTransition::SetBlendCurve(const CBlendCurve& curve)
{
	Vector2D::operator=(
			const Vector2D& vOther);  // 22
	Vector2D::operator=(
			const Vector2D& vOther);  // 22
	CBlendCurve::operator=(
			const CBlendCurve  &);  // 149
} /* size: 44, inline expansions: 3 (78 bytes) */

// <019F5FAF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:153
void CAnimStateTransition::IsDisabled()
{
} /* size: 9 */

// <019F5F72> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:159
void CAnimStateTransition::SetDisabled(bool bDisabled)
{
} /* size: 9 */

// <019F5E49> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:165
// variable: 1
// function calls: 2
void CAnimStateTransition::SaveToBuffer(CUtlBuffer& bufferOut)
{
	CUtlString errors; // 170
	CUtlString::CUtlString(); // 170
	CUtlString::~CUtlString(); // 172
} /* size: 142, variables: 1, inline expansions: 2 (24 bytes) */

// <019F503E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:175
// variables: 7
// function calls: 55
void CAnimStateTransition::LoadFromBuffer(const CUtlBuffer& buffer)
{
	CUtlString errors; // 177
	CUtlBuffer tmpBuffer; // 179
	CKeyValues3Context KV3Data; // 182
	AnimStateID savedDestState; // 187
	CAnimStateMachineContextPtr context; // 188
	CKV3TransferLoadContext loadArchive; // 192
	CUtlString::CUtlString(); // 177
	CUtlBuffer::TellPut(); // 1597
	CUtlBuffer::Clear(); // 1602
	CUtlBuffer::CopyBuffer(
			const void* pubData,
			int cubData);  // 1600
	CUtlBuffer::CopyBuffer(
			const void* pubData,
			int cubData);  // 1597
	CUtlMemory<unsigned char, int>::Base(); // 1479
	CUtlBuffer::Base(); // 1597
	CUtlBuffer::CopyBuffer(
			const CUtlBuffer& buffer);  // 180
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 205
	CUtlString::~CUtlString(); // 205
	AnimStateID::AnimStateID(
			const AnimStateID& rhs);  // 187
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
			const CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>& other);  // 188
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateConditionBase, this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimStateConditionBase>(CAnimStateConditionBase* pObj); // 344
		CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CAnimStateConditionBase> >(CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateConditionBase, this); // 190
	CUtlStack<const KeyValues3::Count(); // 413
	CKV3TransferLoadContext::LoadClassInstance<CAnimStateTransition>(
						CAnimStateTransition* pClassInstance,
						const KeyValues3* pNestedValue);  // 193
	AnimStateID::operator=(
			const AnimStateID& rhs);  // 201
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimStateMachineContext>(CAnimStateMachineContext* pObj); // 344
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::~CSmartPtr(); // 205
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 89
	CKV3TransferContextBase::GetErrorMessage(); // 196
} /* size: 747, variables: 6, inline expansions: 45 (1099 bytes) */

// <019F4C54> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:208
// variable: 1
// function calls: 17
void CAnimStateTransition::SetContext(const CAnimStateMachineContextPtr& context)
{
	{
		int i; // 212
		Count(const CUtlVectorBase<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateConditio this); // 212
		CUtlMemory<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateConditionBase, this,
				int i);  // 214
		CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>::operator->(); // 214
	}
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
			const CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>& other);  // 210
} /* size: 131, inline expansions: 13 (177 bytes) */

// <019F4BEF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:219
// function call: 1
void CAnimStateTransition::GetTargetStateID()
{
	AnimStateID::AnimStateID(
			const AnimStateID& rhs);  // 221
} /* size: 13, inline expansions: 1 (5 bytes) */

// <019F4B75> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:225
// function call: 1
void CAnimStateTransition::SetTargetStateID(AnimStateID id)
{
	AnimStateID::operator=(
			const AnimStateID& rhs);  // 227
} /* size: 10, inline expansions: 1 (5 bytes) */

// <019F4575> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:231
// variables: 3
// function calls: 20
void CAnimStateTransition::InitUpdateData(CAnimGraphInitContext& initContext, CTransitionUpdateData& updateTransition, const CAnimState* pSourceState)
{
	int conditionCount; // 234
	{
		int i; // 237
		CUtlMemory<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateConditionBase, this,
				int i);  // 239
		CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>::operator->(); // 239
		CUtlMemory<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateConditionBase, this,
				int i);  // 240
		CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>::operator->(); // 240
		{
		}
		CRelativeOffset<CRelativeOffset<IConditionUpdater> >::IsValid(); // 30
		CRelativeOffset<CRelativeOffset<IConditionUpdater> >::Get(); // 90
		CRelativeArray<CRelativeOffset<IConditionUpdater> >::operator[](
				int index);  // 240
		CRelativeOffset<IConditionUpdater>::SetOffset(
				const IConditionUpdater* targetPtr);  // 20
		CRelativeOffset<IConditionUpdater>::operator=(
				const IConditionUpdater* targetPtr);  // 240
	}
	Count(const CUtlVectorBase<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateConditio this); // 234
	{
		uint32 i; // 160
		CRelativeOffset<IConditionUpdater>::CRelativeOffset(); // 162
	}
	CPackedDataT<false>::AddArray<CRelativeOffset<IConditionUpdater> >(
							uint32 count,
							CPackedHandle<CRelativeOffset<IConditionUpdater> >* handleOut);  // 235
	{
	}
	CRelativeOffset<CRelativeOffset<IConditionUpdater> >::SetOffset(
			const CRelativeOffset<IConditionUpdater>* targetPtr);  // 20
	CRelativeOffset<CRelativeOffset<IConditionUpdater> >::operator=(
			const CRelativeOffset<IConditionUpdater>* targetPtr);  // 115
	CRelativeArray<CRelativeOffset<IConditionUpdater> >::SetArray(
		const CRelativeOffset<IConditionUpdater>* targetArray,
		int32 count);  // 235
	Vector2D::operator=(
			const Vector2D& vOther);  // 22
	Vector2D::operator=(
			const Vector2D& vOther);  // 22
	CBlendCurve::operator=(
			const CBlendCurve  &);  // 243
} /* size: 0, variables: 1, inline expansions: 8 (403 bytes) */

// <019F43BB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:257
// variables: 3
// function calls: 4
void CAnimStateTransition::TransferPostLoadFn(CKV3TransferLoadContext* pContext)
{
	const char   __FUNCTION__; // 51033
	{
		int i; // 261
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 267
		}
		Count(const CUtlVectorBase<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateConditio this); // 261
		CUtlMemory<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateConditionBase, this,
				int i);  // 263
		CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>::operator==(
				const CAnimStateConditionBase* pOther);  // 263
	}
} /* size: 150, variables: 1 */

