
//
// animgraph/animstate.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 42
//

// <01A0301F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:10
void MyTypeInfo(void)
{
} /* size: 0 */

// <01A018F8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:10
void IAnimState::GetTypeInfo()
{
} /* size: 0 */

// <01A01763> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:10
// function calls: 3
void* IAnimState::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IAnimState>::CastTo(
		IAnimState* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01A015CE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:10
// function calls: 3
const void* IAnimState::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IAnimState>::CastTo(
		const IAnimState* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01A02D56> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:13
void CAnimState::GetTypeInfo()
{
} /* size: 12 */

// <01A010A0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:13
// function calls: 3
void* CAnimState::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CAnimState>::CastTo(
		CAnimState* derived,
		ClassID baseTypeInfo);  // 13
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01A00F0B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:13
// function calls: 3
const void* CAnimState::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CAnimState>::CastTo(
		const CAnimState* derived,
		ClassID baseTypeInfo);  // 13
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01A00679> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:17
// function calls: 26
void CAnimState::CAnimState()
{
	Object::Object(); // 145
	IAnimState::IAnimState(); // 17
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 17
	CUtlString::CUtlString(
			const char* pString);  // 17
	CUtlMemory<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefC this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefC this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefCount this); // 17
	CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::ResetDbgInfo(); // 530
	CUtlMemory<AnimTagID, int>::ValidateGrowSize(); // 475
	CUtlMemory<AnimTagID, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<AnimTagID, CUtlMemory<AnimTagID, int> >::CUtlVector(); // 17
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::CSmartPtr(); // 17
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 17
	AnimNodeID::AnimNodeID(); // 22
	AnimOutputID::AnimOutputID(); // 22
	CNodeConnection::CNodeConnection(); // 17
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 17
	AnimStateID::AnimStateID(); // 17
} /* size: 242, inline expansions: 26 (306 bytes) */

// <01A00660> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:17
void CAnimState::CAnimState()
{
} /* size: 0 */

// <01A00632> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:22
void CAnimState::GetName()
{
} /* size: 12 */

// <01A00604> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:28
void CAnimState::IsStartState()
{
} /* size: 12 */

// <01A005D6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:34
void CAnimState::IsEndState()
{
} /* size: 12 */

// <01A005A8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:40
void CAnimState::IsPassThrough()
{
} /* size: 12 */

// <01A0057A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:46
void CAnimState::GetPosition()
{
} /* size: 12 */

// <01A00500> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:52
// function call: 1
void CAnimState::SetPosition(const Vector2D& position)
{
	Vector2D::operator=(
			const Vector2D& vOther);  // 54
} /* size: 30, inline expansions: 1 (25 bytes) */

// <01A004A2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:59
// function call: 1
void CAnimState::GetTransitionCount()
{
	Count(const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, this); // 61
} /* size: 8, inline expansions: 1 (0 bytes) */

// <01A003CE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:65
// function calls: 3
void CAnimState::GetTransition(int index)
{
	CUtlMemory<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefC this,
			int i);  // 67
	CSmartPtr<CAnimStateTransition, CRefCountAccessor>::Get(); // 67
} /* size: 16, inline expansions: 3 (10 bytes) */

// <01A003AA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:71
void CAnimState::GetTransition(int index)
{
} /* size: 0 */

// <019FF8D9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:77
// variable: 1
// function calls: 52
void CAnimState::AddTransition()
{
	CAnimStateTransitionPtr newTransition; // 79
	Object::Object(); // 95
	IAnimStateTransition::IAnimStateTransition(); // 16
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 16
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::CSmartPtr(); // 16
	CUtlMemory<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateConditionBase, this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateConditionBase, this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateConditionBase, CRe this); // 16
	AnimStateID::AnimStateID(); // 16
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 27
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 27
	CBlendCurve::CBlendCurve(); // 16
	CAnimStateTransition::CAnimStateTransition(); // 79
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimStateTransition>(CAnimStateTransition* pObj); // 366
	CSmartPtr<CAnimStateTransition, CRefCountAccessor>::operator=(
			CAnimStateTransition* pObj);  // 319
	CSmartPtr<CAnimStateTransition, CRefCountAccessor>::CSmartPtr(
			CAnimStateTransition* pObj);  // 79
	CUtlMemory<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, int>::NumAllocated(); // 1196
	CUtlMemory<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefC this,
		int i);  // 1201
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimStateTransition>(CAnimStateTransition* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimStateTransition>(CAnimStateTransition* pObj); // 370
	CSmartPtr<CAnimStateTransition, CRefCountAccessor>::operator=(
			CAnimStateTransition* pObj);  // 406
	CSmartPtr<CAnimStateTransition, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimStateTransition, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimStateTransition, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimStateTransition, CRefCountAccessor>& other);  // 1520
	CopyConstruct<CSmartPtr<CAnimStateTransition> >(CSmartPtr<CAnimStateTransition, CRefCountAccessor>* pMemory,
							const CSmartPtr<CAnimStateTransition, CRefCountAccessor>& src);  // 1201
	CUtlMemory<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, int>::Base(); // 112
	Base(const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefC this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefC this); // 824
	GrowMemory(const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefC this,
			int num);  // 1198
	AddToTail(const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefC this,
			const CSmartPtr<CAnimStateTransition, CRefCountAccessor>& src);  // 82
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimStateTransition>(CAnimStateTransition* pObj); // 344
	CSmartPtr<CAnimStateTransition, CRefCountAccessor>::~CSmartPtr(); // 85
} /* size: 347, variables: 1, inline expansions: 52 (797 bytes) */

// <019FECBB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:88
// variable: 1
// function calls: 58
void CAnimState::AddTransition(IAnimState* toState)
{
	CAnimStateTransitionPtr newTransition; // 90
	Object::Object(); // 95
	IAnimStateTransition::IAnimStateTransition(); // 16
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 16
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::CSmartPtr(); // 16
	CUtlMemory<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateConditionBase, this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateConditionBase, this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateConditionBase, CRe this); // 16
	AnimStateID::AnimStateID(); // 16
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 27
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 27
	CBlendCurve::CBlendCurve(); // 16
	CAnimStateTransition::CAnimStateTransition(); // 90
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimStateTransition>(CAnimStateTransition* pObj); // 366
	CSmartPtr<CAnimStateTransition, CRefCountAccessor>::operator=(
			CAnimStateTransition* pObj);  // 319
	CSmartPtr<CAnimStateTransition, CRefCountAccessor>::CSmartPtr(
			CAnimStateTransition* pObj);  // 90
	AnimStateID::AnimStateID(
			const AnimStateID& rhs);  // 194
	CAnimState::GetStateID(); // 120
	AnimStateID::operator=(
			const AnimStateID& rhs);  // 120
	AnimStateID::AnimStateID(); // 124
	AnimStateID::operator=(
			const AnimStateID& rhs);  // 124
	CAnimStateTransition::SetTargetState(
			IAnimState* targetState);  // 92
	CUtlMemory<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, int>::NumAllocated(); // 1196
	CUtlMemory<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefC this,
		int i);  // 1201
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimStateTransition>(CAnimStateTransition* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimStateTransition>(CAnimStateTransition* pObj); // 370
	CSmartPtr<CAnimStateTransition, CRefCountAccessor>::operator=(
			CAnimStateTransition* pObj);  // 406
	CSmartPtr<CAnimStateTransition, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimStateTransition, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimStateTransition, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimStateTransition, CRefCountAccessor>& other);  // 1520
	CopyConstruct<CSmartPtr<CAnimStateTransition> >(CSmartPtr<CAnimStateTransition, CRefCountAccessor>* pMemory,
							const CSmartPtr<CAnimStateTransition, CRefCountAccessor>& src);  // 1201
	CUtlMemory<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, int>::Base(); // 112
	Base(const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefC this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefC this); // 824
	GrowMemory(const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefC this,
			int num);  // 1198
	AddToTail(const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefC this,
			const CSmartPtr<CAnimStateTransition, CRefCountAccessor>& src);  // 94
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimStateTransition>(CAnimStateTransition* pObj); // 344
	CSmartPtr<CAnimStateTransition, CRefCountAccessor>::~CSmartPtr(); // 97
} /* size: 526, variables: 1, inline expansions: 58 (952 bytes) */

// <019FEB8D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:100
// variable: 1
// function calls: 4
void CAnimState::RemoveTransition(IAnimStateTransition* transition)
{
	{
		int i; // 102
		Count(const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, this); // 102
		CUtlMemory<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefC this,
				int i);  // 104
		CSmartPtr<CAnimStateTransition, CRefCountAccessor>::Get(); // 104
	}
} /* size: 65 */

// <019FE18A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:113
// variable: 1
// function calls: 48
void CAnimState::MoveTransitionToIndex(int oldIndex, int newIndex)
{
	CAnimStateTransitionPtr transition; // 115
	CUtlMemory<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefC this,
			int i);  // 115
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimStateTransition>(CAnimStateTransition* pObj); // 366
	CSmartPtr<CAnimStateTransition, CRefCountAccessor>::operator=(
			CAnimStateTransition* pObj);  // 406
	CSmartPtr<CAnimStateTransition, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimStateTransition, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimStateTransition, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimStateTransition, CRefCountAccessor>& other);  // 115
	CUtlMemory<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, int>::NumAllocated(); // 782
	CUtlMemory<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, int>::Base(); // 112
	Base(const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefC this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefC this); // 824
	GrowMemory(const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefC this,
			int num);  // 784
	GrowVector(const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefC this,
			int num);  // 1223
	CUtlMemory<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefC this,
		int i);  // 1097
	CUtlMemory<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefC this,
		int i);  // 1097
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1097
	ShiftElementsRight(const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefC this,
				int elem,
				int num);  // 1224
	CUtlMemory<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefC this,
		int i);  // 1225
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimStateTransition>(CAnimStateTransition* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimStateTransition>(CAnimStateTransition* pObj); // 370
	CSmartPtr<CAnimStateTransition, CRefCountAccessor>::operator=(
			CAnimStateTransition* pObj);  // 406
	CSmartPtr<CAnimStateTransition, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimStateTransition, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimStateTransition, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimStateTransition, CRefCountAccessor>& other);  // 1520
	CopyConstruct<CSmartPtr<CAnimStateTransition> >(CSmartPtr<CAnimStateTransition, CRefCountAccessor>* pMemory,
							const CSmartPtr<CAnimStateTransition, CRefCountAccessor>& src);  // 1225
	InsertBefore(const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefC this,
			int elem,
			const CSmartPtr<CAnimStateTransition, CRefCountAccessor>& src);  // 117
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimStateTransition>(CAnimStateTransition* pObj); // 344
	CSmartPtr<CAnimStateTransition, CRefCountAccessor>::~CSmartPtr(); // 118
} /* size: 275, variables: 1, inline expansions: 48 (905 bytes) */

// <019FE12C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:122
// function call: 1
void CAnimState::GetTagCount()
{
	CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::Count(); // 124
} /* size: 8, inline expansions: 1 (0 bytes) */

// <019FDF84> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:128
// variable: 1
// function calls: 6
void CAnimState::GetTag(int index)
{
	CAnimTagManager* tagMgr; // 130
	CUtlMemory<AnimTagID, int>::operator[](
			int i);  // 588
	CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::operator[](
			int i);  // 131
	CSmartPtr<CAnimTagManager, CRefCountAccessor>::Get(); // 150
	CAnimStateMachineContext::GetTagManager(); // 130
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::operator->(); // 130
	AnimTagID::AnimTagID(
			const AnimTagID& rhs);  // 131
} /* size: 108, variables: 1, inline expansions: 6 (49 bytes) */

// <019FDDDC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:135
// variable: 1
// function calls: 6
void CAnimState::GetTag(int index)
{
	const CAnimTagManager* tagMgr; // 137
	CUtlMemory<AnimTagID, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::operator[](
			int i);  // 138
	CSmartPtr<CAnimTagManager, CRefCountAccessor>::Get(); // 150
	CAnimStateMachineContext::GetTagManager(); // 137
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::operator->(); // 137
	AnimTagID::AnimTagID(
			const AnimTagID& rhs);  // 138
} /* size: 108, variables: 1, inline expansions: 6 (49 bytes) */

// <019FD76C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:142
// variables: 3
// function calls: 25
void CAnimState::AddTag(const IAnimTag* tag)
{
	const CAnimTagBase* tagBase; // 144
	const char   __FUNCTION__; // 50744
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 149
	}
	CUtlMemory<AnimTagID, int>::NumAllocated(); // 1247
	CUtlMemory<AnimTagID, int>::Base(); // 112
	CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::Base(); // 368
	CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::ResetDbgInfo(); // 824
	CUtlMemory<AnimTagID, int>::IsGrowable(); // 823
	CUtlMemory<AnimTagID, int>::IsExternallyAllocated(); // 859
	CUtlMemory<AnimTagID, int>::IsExternallyAllocated(); // 861
	CUtlMemory<AnimTagID, int>::Grow(
		int num);  // 806
	CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::GrowMemory(
			int num);  // 1249
	CUtlMemory<AnimTagID, int>::operator[](
			int i);  // 602
	CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::Element(
		int i);  // 1252
	AnimTagID::AnimTagID(
			const AnimTagID& rhs);  // 1514
	Construct<AnimTagID, AnimTagID>(AnimTagID* pMemory); // 1252
	CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::AddToTail(
			AnimTagID& src);  // 147
	CUtlMemory<unsigned char, int>::NumAllocated(); // 1247
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Element(
		int i);  // 1252
	Construct<unsigned char, unsigned char>(unsigned char* pMemory); // 1252
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 368
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::AddToTail(
			unsigned char& src);  // 148
	CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::Count(); // 149
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 149
} /* size: 0, variables: 2, inline expansions: 25 (909 bytes) */

// <019FD2F0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:154
// variables: 5
// function calls: 16
void CAnimState::RemoveTag(const IAnimTag* tag)
{
	const CAnimTagBase* tagBase; // 156
	const char   __FUNCTION__; // 50820
	{
		int index; // 159
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 166
		}
		{
			int i; // 1531
			CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::Count(); // 1531
			CUtlMemory<AnimTagID, int>::operator[](
					int i);  // 609
			CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::Element(
				int i);  // 1533
			AnimTagID::operator==(
					const AnimTagID& rhs);  // 1533
		}
		CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::Find(
			const AnimTagID& src);  // 159
		CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::Remove(
			int elem);  // 162
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 602
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Element(
			int i);  // 1114
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 602
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Element(
			int i);  // 1114
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 115
		V_memmove(void* dest,
				const void* src,
				size_t count);  // 1114
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ShiftElementsLeft(
					int elem,
					int num);  // 1608
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Remove(
			int elem);  // 163
		CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::Count(); // 166
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 166
	}
} /* size: 0, variables: 2 */

// <019FD018> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:171
// variables: 2
// function calls: 10
void CAnimState::RemoveTag(int index)
{
	const char   __FUNCTION__; // 50820
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 176
	}
	CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::Remove(
		int elem);  // 173
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Element(
		int i);  // 1114
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Remove(
		int elem);  // 174
	CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::Count(); // 176
} /* size: 0, variables: 1, inline expansions: 10 (158 bytes) */

// <019FCF78> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:180
// function calls: 2
void CAnimState::GetTagBehavior(int index)
{
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
			int i);  // 182
} /* size: 16, inline expansions: 2 (6 bytes) */

// <019FCEC9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:186
// function calls: 2
void CAnimState::SetTagBehavior(int index, StateTagBehavior behavior)
{
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 588
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
			int i);  // 188
} /* size: 15, inline expansions: 2 (6 bytes) */

// <01A02D80> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:192
// function call: 1
void CAnimState::GetStateID()
{
	AnimStateID::AnimStateID(
			const AnimStateID& rhs);  // 194
} /* size: 16, inline expansions: 1 (8 bytes) */

// <019FCEB0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:192
void CAnimState::GetStateID()
{
} /* size: 0 */

// <019FCE36> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:198
// function call: 1
void CAnimState::SetStateID(AnimStateID id)
{
	AnimStateID::operator=(
			const AnimStateID& rhs);  // 200
} /* size: 13, inline expansions: 1 (8 bytes) */

// <019FCDD7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:204
// function call: 1
void CAnimState::GetNodeID()
{
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 206
} /* size: 16, inline expansions: 1 (8 bytes) */

// <019FCD5C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:210
// function call: 1
void CAnimState::SetNodeID(AnimNodeID nodeID)
{
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 212
} /* size: 13, inline expansions: 1 (8 bytes) */

// <019FCCFD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:216
// function call: 1
void CAnimState::GetOutputID()
{
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 218
} /* size: 16, inline expansions: 1 (8 bytes) */

// <019FCBD7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:222
// function calls: 3
void CAnimState::SetInputConnection(CNodeConnection connection)
{
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 22
	AnimOutputID::operator=(
			const AnimOutputID& rhs);  // 22
	CNodeConnection::operator=(
			const CNodeConnection  &);  // 224
} /* size: 22, inline expansions: 3 (34 bytes) */

// <019FC875> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:228
// function calls: 16
void CAnimState::GetTransitionInternal(int index)
{
	CUtlMemory<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefC this,
			int i);  // 230
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimStateTransition>(CAnimStateTransition* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimStateTransition>(CAnimStateTransition* pObj); // 370
	CSmartPtr<CAnimStateTransition, CRefCountAccessor>::operator=(
			CAnimStateTransition* pObj);  // 406
	CSmartPtr<CAnimStateTransition, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimStateTransition, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimStateTransition, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimStateTransition, CRefCountAccessor>& other);  // 230
} /* size: 105, inline expansions: 16 (346 bytes) */

// <019FC4DE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:234
// function calls: 17
void CAnimState::GetTransitionInternal(int index)
{
	CUtlMemory<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, this,
			int i);  // 236
	CSmartPtr<CAnimStateTransition, CRefCountAccessor>::Get(); // 413
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimStateTransition>(CAnimStateTransition* pObj); // 386
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimStateTransition>(const CAnimStateTransition* pObj); // 390
	CSmartPtr<const CAnimStateTransition, CRefCountAccessor>::operator=<CAnimStateTransition>(
					CAnimStateTransition* pObj);  // 413
	CSmartPtr<const CAnimStateTransition, CRefCountAccessor>::operator=<CAnimStateTransition>(
					const CSmartPtr<CAnimStateTransition, CRefCountAccessor>& other);  // 354
	CSmartPtr<const CAnimStateTransition, CRefCountAccessor>::CSmartPtr<CAnimStateTransition>(
					const CSmartPtr<CAnimStateTransition, CRefCountAccessor>& other);  // 236
} /* size: 0, inline expansions: 17 (0 bytes) */

// <019FC0E4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:240
// variable: 1
// function calls: 17
void CAnimState::SetContext(const CAnimStateMachineContextPtr& context)
{
	{
		int i; // 244
		Count(const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, this); // 244
		CUtlMemory<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefC this,
				int i);  // 246
		CSmartPtr<CAnimStateTransition, CRefCountAccessor>::operator->(); // 246
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
			const CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>& other);  // 242
} /* size: 127, inline expansions: 13 (177 bytes) */

// <019FB7B6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:251
// variables: 8
// function calls: 28
void CAnimState::InitUpdateData(CStateUpdateData& updateState, CAnimGraphInitContext& initContext)
{
	int transitionCount; // 260
	int tagCount; // 264
	const char   __FUNCTION__; // 50940
	{
		int i; // 266
		{
			int tagIndex; // 268
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 269
			}
			CRelativeOffset<CStateTag>::IsValid(); // 30
			CRelativeOffset<CStateTag>::Get(); // 90
			{
			}
			CRelativeArray<CStateTag>::operator[](
					int index);  // 270
			CUtlMemory<AnimTagID, int>::operator[](
					int i);  // 588
			CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::operator[](
					int i);  // 268
			AnimTagID::AnimTagID(
					const AnimTagID& rhs);  // 268
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
					int i);  // 272
			{
			}
			CRelativeOffset<CStateTag>::IsValid(); // 30
			CRelativeOffset<CStateTag>::Get(); // 90
			CRelativeArray<CStateTag>::operator[](
					int index);  // 272
		}
	}
	AnimNodeID::IsValid(); // 254
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 256
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 256
	CRelativeOffset<const CAnimUpdateNodeBase>::SetOffset(
			const CAnimUpdateNodeBase* targetPtr);  // 20
	CRelativeOffset<const CAnimUpdateNodeBase>::operator=(
			const CAnimUpdateNodeBase* targetPtr);  // 256
	Count(const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, this); // 260
	{
		uint32 i; // 160
	}
	CPackedDataT<false>::AddArray<int>(
			uint32 count,
			CPackedHandle<int>* handleOut);  // 261
	{
	}
	CRelativeOffset<int>::SetOffset(
			const int* targetPtr);  // 20
	CRelativeOffset<int>::operator=(
			const int* targetPtr);  // 115
	CRelativeArray<int>::SetArray(
		const int* targetArray,
		int32 count);  // 261
	CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::Count(); // 264
	{
		uint32 i; // 160
		CStateTag::CStateTag(); // 162
	}
	CPackedDataT<false>::AddArray<CStateTag>(
				uint32 count,
				CPackedHandle<CStateTag>* handleOut);  // 265
	{
	}
	CRelativeOffset<CStateTag>::SetOffset(
			const CStateTag* targetPtr);  // 20
	CRelativeOffset<CStateTag>::operator=(
			const CStateTag* targetPtr);  // 115
	CRelativeArray<CStateTag>::SetArray(
		const CStateTag* targetArray,
		int32 count);  // 265
	AnimStateID::operator=(
			const AnimStateID& rhs);  // 275
} /* size: 0, variables: 3, inline expansions: 16 (720 bytes) */

// <019FB51D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:286
// function calls: 11
void CAnimState::OnPostLoad(CKV3TransferLoadContext* pContext)
{
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 291
	CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::Count(); // 291
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Element(
		int i);  // 1252
	Construct<unsigned char, unsigned char>(unsigned char* pMemory); // 1252
	CUtlMemory<unsigned char, int>::NumAllocated(); // 1247
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 368
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::AddToTail(
			unsigned char& src);  // 293
} /* size: 99, inline expansions: 11 (110 bytes) */

