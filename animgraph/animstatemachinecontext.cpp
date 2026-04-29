
//
// animgraph/animstatemachinecontext.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 14
//

// <019FB3ED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.cpp:13
// function calls: 2
void CAnimStateMachineContext::CAnimStateMachineContext(CStateMachineAnimNode* stateMachine)
{
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 14
} /* size: 26, inline expansions: 2 (14 bytes) */

// <019FB3C8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.cpp:13
void CAnimStateMachineContext::CAnimStateMachineContext(CStateMachineAnimNode* stateMachine)
{
} /* size: 0 */

// <01A0303D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.cpp:20
void CAnimStateMachineContext::GetStateMachine()
{
} /* size: 9 */

// <019FB13F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.cpp:32
// function calls: 8
void CAnimStateMachineContext::FillParameterChoiceProvider(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* pOutChoiceNames, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* pOutChoiceValues, AnimParamType_t paramType)
{
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 34
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 34
} /* size: 123, inline expansions: 8 (77 bytes) */

// <019FAF04> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.cpp:38
// function calls: 8
void CAnimStateMachineContext::FillTagChoiceProvider(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* pOutChoiceNames, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* pOutChoiceValues)
{
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 40
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 40
} /* size: 0, inline expansions: 8 (0 bytes) */

// <019FAA2D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.cpp:44
// variables: 3
// function calls: 17
void CAnimStateMachineContext::GetParamName(AnimParamID paramID)
{
	CUtlString sInvalidParamName; // 46
	const CAnimParameterListPtr  paramList; // 48
	const IAnimParameter* pParam; // 50
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimParameterList>(CAnimParameterList* pObj); // 366
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
			CAnimParameterList* pObj);  // 406
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 48
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 50
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParameterList>(CAnimParameterList* pObj); // 344
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::~CSmartPtr(); // 59
	CUtlString::CUtlString(
			const char* pString);  // 46
} /* size: 281, variables: 3, inline expansions: 17 (183 bytes) */

// <019FA467> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.cpp:62
// variables: 2
// function calls: 25
void CAnimStateMachineContext::GetParamID(int index)
{
	const CAnimParameterListPtr  paramList; // 64
	{
		CAnimParameterBaseConstPtr pParam; // 68
		CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 73
		CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator!=(
				const CAnimParameterBase* pOther);  // 69
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<const CAnimParameterBase>(const CAnimParameterBase* pObj); // 344
		CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 73
	}
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimParameterList>(CAnimParameterList* pObj); // 366
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
			CAnimParameterList* pObj);  // 406
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 64
	AnimParamID::AnimParamID(); // 75
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParameterList>(CAnimParameterList* pObj); // 344
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::~CSmartPtr(); // 76
} /* size: 232, variables: 1, inline expansions: 16 (180 bytes) */

// <019F9CEA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.cpp:79
// variables: 4
// function calls: 32
void CAnimStateMachineContext::GetParamID(int index, AnimParamType_t paramType)
{
	const CAnimParameterListPtr  paramList; // 81
	int nTypeCount; // 83
	{
		int i; // 84
		{
			CAnimParameterBaseConstPtr pParam; // 86
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<const CAnimParameterBase>(const CAnimParameterBase* pObj); // 344
			CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 101
			CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator!=(
					const CAnimParameterBase* pOther);  // 87
			CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator->(); // 93
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<const CAnimParameterBase>(const CAnimParameterBase* pObj); // 344
			CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 101
		}
	}
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimParameterList>(CAnimParameterList* pObj); // 366
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
			CAnimParameterList* pObj);  // 406
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 81
	AnimParamID::AnimParamID(); // 103
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParameterList>(CAnimParameterList* pObj); // 344
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::~CSmartPtr(); // 104
} /* size: 304, variables: 2, inline expansions: 16 (192 bytes) */

// <019F991D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.cpp:107
// variable: 1
// function calls: 16
void CAnimStateMachineContext::GetParamIndex(AnimParamID paramID)
{
	const CAnimParameterListPtr  paramList; // 109
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimParameterList>(CAnimParameterList* pObj); // 366
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
			CAnimParameterList* pObj);  // 406
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 109
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 111
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParameterList>(CAnimParameterList* pObj); // 344
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::~CSmartPtr(); // 112
} /* size: 133, variables: 1, inline expansions: 16 (153 bytes) */

// <019F9193> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.cpp:115
// variables: 4
// function calls: 32
void CAnimStateMachineContext::GetParamIndex(AnimParamID paramID, AnimParamType_t paramType)
{
	const CAnimParameterListPtr  paramList; // 117
	int nTypeCount; // 119
	{
		int i; // 120
		{
			CAnimParameterBaseConstPtr pParam; // 122
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<const CAnimParameterBase>(const CAnimParameterBase* pObj); // 344
			CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 134
			CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator!=(
					const CAnimParameterBase* pOther);  // 123
			CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator->(); // 128
			AnimParamID::operator==(
					const AnimParamID& rhs);  // 128
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<const CAnimParameterBase>(const CAnimParameterBase* pObj); // 344
			CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 134
		}
	}
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimParameterList>(CAnimParameterList* pObj); // 366
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
			CAnimParameterList* pObj);  // 406
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 117
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParameterList>(CAnimParameterList* pObj); // 344
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::~CSmartPtr(); // 137
} /* size: 290, variables: 2, inline expansions: 15 (182 bytes) */

// <019F8DC0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.cpp:140
// variable: 1
// function calls: 16
void CAnimStateMachineContext::GetParam(AnimParamID paramID)
{
	const CAnimParameterListPtr  paramList; // 142
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimParameterList>(CAnimParameterList* pObj); // 366
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
			CAnimParameterList* pObj);  // 406
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 142
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 144
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParameterList>(CAnimParameterList* pObj); // 344
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::~CSmartPtr(); // 145
} /* size: 140, variables: 1, inline expansions: 16 (153 bytes) */

// <01A03067> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.cpp:148
// function call: 1
void CAnimStateMachineContext::GetTagManager()
{
	CSmartPtr<CAnimTagManager, CRefCountAccessor>::Get(); // 150
} /* size: 30, inline expansions: 1 (0 bytes) */

// <019F8DA7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.cpp:148
void CAnimStateMachineContext::GetTagManager()
{
} /* size: 0 */

// <019F8B52> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.cpp:154
// function calls: 9
void CAnimStateMachineContext::GetNodeByID(AnimNodeID nodeID)
{
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 156
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 156
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 156
} /* size: 119, inline expansions: 9 (122 bytes) */

