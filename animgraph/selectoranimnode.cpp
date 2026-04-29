
//
// animgraph/selectoranimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 33
//

// <0116F199> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:10
void ISelectorAnimNode::GetTypeInfo()
{
} /* size: 0 */

// <0116F006> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:10
// function calls: 3
void* ISelectorAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<ISelectorAnimNode>::CastTo(
		ISelectorAnimNode* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0116EE73> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:10
// function calls: 3
const void* ISelectorAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<ISelectorAnimNode>::CastTo(
		const ISelectorAnimNode* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01198304> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:12
void MyTypeInfo(void)
{
} /* size: 0 */

// <0119372A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:12
void CSelectorAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <0116EC5C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:12
// function calls: 3
void* CSelectorAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CSelectorAnimNode>::CastTo(
		CSelectorAnimNode* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0116EAC9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:12
// function calls: 3
const void* CSelectorAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CSelectorAnimNode>::CastTo(
		const CSelectorAnimNode* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0116E50B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:22
// function calls: 22
void CSelectorAnimNode::CSelectorAnimNode()
{
	ISelectorAnimNode::ISelectorAnimNode(); // 25
	CUtlMemory<CNodeConnection, int>::ValidateGrowSize(); // 475
	CUtlMemory<CNodeConnection, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CNodeConnection, CUtlMemory<CNodeConnection, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CNodeConnection, CUtlMemory<CNodeConnection, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CNodeConnection, CUtlMemory<CNodeConnection, int> >::CUtlVector(); // 25
	CUtlMemory<AnimTagID, int>::ValidateGrowSize(); // 475
	CUtlMemory<AnimTagID, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<AnimTagID, CUtlMemory<AnimTagID, int> >::CUtlVector(); // 25
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 27
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 27
	CBlendCurve::CBlendCurve(); // 25
	AnimParamID::AnimParamID(); // 25
	AnimParamID::AnimParamID(); // 25
	AnimParamID::AnimParamID(); // 25
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 25
} /* size: 277, inline expansions: 22 (378 bytes) */

// <0116E4F2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:22
void CSelectorAnimNode::CSelectorAnimNode()
{
} /* size: 0 */

// <0116E111> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:31
// variables: 2
// function calls: 11
void CSelectorAnimNode::GetUIName()
{
	AnimParamID currentParamID; // 33
	const CAnimParameterBase* pParam; // 34
	AnimParamID::AnimParamID(); // 167
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 161
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 165
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 163
	CSelectorAnimNode::GetParamID(); // 33
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 34
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 34
	CUtlString::IsEmpty(); // 35
	operator==(const CUtlString& utlString,
			const char* pString);  // 35
	CUtlString::CUtlString(
			const char* pString);  // 37
	CUtlString::~CUtlString(); // 37
} /* size: 371, variables: 2, inline expansions: 11 (225 bytes) */

// <01193753> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:46
// function call: 1
void CSelectorAnimNode::GetChildCount()
{
	CUtlVectorBase<CNodeConnection, CUtlMemory<CNodeConnection, int> >::Count(); // 48
} /* size: 8, inline expansions: 1 (0 bytes) */

// <0116E0F8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:46
void CSelectorAnimNode::GetChildCount()
{
} /* size: 0 */

// <0116DF2B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:52
// function calls: 5
void CSelectorAnimNode::GetChild(int childIndex)
{
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 54
	CUtlMemory<CNodeConnection, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CNodeConnection, CUtlMemory<CNodeConnection, int> >::operator[](
			int i);  // 60
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 60
	CSelectorAnimNode::GetChildID(
			int index);  // 54
} /* size: 158, inline expansions: 5 (33 bytes) */

// <011937AC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:58
// function calls: 3
void CSelectorAnimNode::GetChildID(int index)
{
	CUtlMemory<CNodeConnection, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CNodeConnection, CUtlMemory<CNodeConnection, int> >::operator[](
			int i);  // 60
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 60
} /* size: 20, inline expansions: 3 (15 bytes) */

// <0116DF06> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:58
void CSelectorAnimNode::GetChildID(int index)
{
} /* size: 0 */

// <0116DE1D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:64
// function calls: 3
void CSelectorAnimNode::SetChildID(int index, AnimNodeID nodeID)
{
	CUtlMemory<CNodeConnection, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CNodeConnection, CUtlMemory<CNodeConnection, int> >::operator[](
			int i);  // 66
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 66
} /* size: 17, inline expansions: 3 (15 bytes) */

// <0116D8EB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:70
// variables: 5
// function calls: 10
void CSelectorAnimNode::GetChildName(int index)
{
	const CUtlString  kEmptyName; // 96
	{
		CUtlString falseString; // 74
		CUtlString trueString; // 75
		CUtlString::CUtlString(
				const char* pString);  // 75
		CUtlString::CUtlString(
				const char* pString);  // 74
	}
	{
		const CEnumAnimParameter* pParam; // 81
		{
			const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& names; // 84
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 85
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
					int i);  // 87
		}
		CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 81
		AnimParamID::AnimParamID(
				const AnimParamID& rhs);  // 81
	}
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
			int i);  // 93
	CUtlString::CUtlString(
			const char* pString);  // 96
} /* size: 588, variables: 1, inline expansions: 3 (52 bytes) */

// <0116D811> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:101
// function calls: 3
void CSelectorAnimNode::GetChildOutputID(int index)
{
	CUtlMemory<CNodeConnection, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CNodeConnection, CUtlMemory<CNodeConnection, int> >::operator[](
			int i);  // 103
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 103
} /* size: 21, inline expansions: 3 (16 bytes) */

// <0116D6CE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:107
// function calls: 5
void CSelectorAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
	CUtlMemory<CNodeConnection, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CNodeConnection, CUtlMemory<CNodeConnection, int> >::operator[](
			int i);  // 109
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 22
	AnimOutputID::operator=(
			const AnimOutputID& rhs);  // 22
	CNodeConnection::operator=(
			const CNodeConnection  &);  // 109
} /* size: 24, inline expansions: 5 (38 bytes) */

// <0116CFB7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:113
// variables: 6
// function calls: 21
void CSelectorAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	AnimParamID currentParamID; // 122
	CSelectorUpdateNode* pUpdateNode; // 123
	const char   __FUNCTION__; // 43281
	{
		int childIndex; // 136
		{
			int nTagIndex; // 140
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 141
			}
			CUtlMemory<CNodeConnection, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CNodeConnection, CUtlMemory<CNodeConnection, int> >::operator[](
					int i);  // 138
			AnimOutputID::AnimOutputID(
					const AnimOutputID& rhs);  // 138
			AnimNodeID::AnimNodeID(
					const AnimNodeID& rhs);  // 138
			CUtlMemory<AnimTagID, int>::operator[](
					int i);  // 595
			CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::operator[](
					int i);  // 140
			AnimTagID::AnimTagID(
					const AnimTagID& rhs);  // 140
		}
		CUtlVectorBase<CNodeConnection, CUtlMemory<CNodeConnection, int> >::Count(); // 136
	}
	AnimParamID::IsValid(); // 115
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 165
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 163
	AnimParamID::AnimParamID(); // 167
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 161
	CSelectorAnimNode::GetParamID(); // 122
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 127
	CUtlVectorBase<CNodeConnection, CUtlMemory<CNodeConnection, int> >::Count(); // 126
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 18
	CAnimParamHandle::CAnimParamHandle(
			const CAnimParamHandle& rhs);  // 140
	CPackedDataT<false>::AddItem<CSelectorUpdateNode, CAnimGraphInitContext&, int, CAnimParamHandle, const CBlendCurve&, float const&, const SelectorTagBehavior_t&, bool const&, bool const&, int const&, int const&>(
																CPackedHandle<CSelectorUpdateNode>* handleOut);  // 123
	AnimParamID::IsValid(); // 116
	AnimParamID::IsValid(); // 117
} /* size: 0, variables: 3, inline expansions: 13 (280 bytes) */

// <01196714> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:150
// function calls: 2
void CSelectorAnimNode::GetOptionCount()
{
	CUtlVectorBase<CNodeConnection, CUtlMemory<CNodeConnection, int> >::Count(); // 48
	CSelectorAnimNode::GetChildCount(); // 152
} /* size: 34, inline expansions: 2 (6 bytes) */

// <0116CF9E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:150
void CSelectorAnimNode::GetOptionCount()
{
} /* size: 0 */

// <0119387A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:156
// function calls: 4
void CSelectorAnimNode::GetParamID()
{
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 161
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 165
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 163
	AnimParamID::AnimParamID(); // 167
} /* size: 82, inline expansions: 4 (30 bytes) */

// <0116CF85> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:156
void CSelectorAnimNode::GetParamID()
{
} /* size: 0 */

// <01193996> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:172
// function calls: 3
void CSelectorAnimNode::GetTagID(int index)
{
	CUtlMemory<AnimTagID, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::operator[](
			int i);  // 174
	AnimTagID::AnimTagID(
			const AnimTagID& rhs);  // 174
} /* size: 20, inline expansions: 3 (15 bytes) */

// <0116CF60> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:172
void CSelectorAnimNode::GetTagID(int index)
{
} /* size: 0 */

// <01193A64> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:178
// function calls: 3
void CSelectorAnimNode::SetTagID(int index, AnimTagID tagID)
{
	CUtlMemory<AnimTagID, int>::operator[](
			int i);  // 588
	CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::operator[](
			int i);  // 180
	AnimTagID::operator=(
			const AnimTagID& rhs);  // 180
} /* size: 17, inline expansions: 3 (15 bytes) */

// <0116CF2F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:178
void CSelectorAnimNode::SetTagID(int index, AnimTagID tagID)
{
} /* size: 0 */

// <01193B39> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:184
void CSelectorAnimNode::GetBlendCurve()
{
} /* size: 12 */

// <01193B62> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:190
// function calls: 3
void CSelectorAnimNode::SetBlendCurve(const CBlendCurve& curve)
{
	Vector2D::operator=(
			const Vector2D& vOther);  // 22
	Vector2D::operator=(
			const Vector2D& vOther);  // 22
	CBlendCurve::operator=(
			const CBlendCurve  &);  // 192
} /* size: 56, inline expansions: 3 (102 bytes) */

// <0116CEF1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:190
void CSelectorAnimNode::SetBlendCurve(const CBlendCurve& curve)
{
} /* size: 0 */

// <0116C831> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:196
// variables: 4
// function calls: 23
void CSelectorAnimNode::RefreshInputs()
{
	{
		const CEnumAnimParameter* pParam; // 205
		CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 205
		AnimParamID::AnimParamID(
				const AnimParamID& rhs);  // 205
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
		CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 205
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 208
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 209
	}
	{
		const CIntAnimParameter* pParam; // 219
		{
			int nValues; // 222
			{
				int i; // 226
				CUtlMemory<CUtlString, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
						int i);  // 228
			}
			Min<int>(const int& val1,
				const int& val2);  // 222
		}
		CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 219
		AnimParamID::AnimParamID(
				const AnimParamID& rhs);  // 219
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
		CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 219
	}
} /* size: 578 */

// <0116C7EC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:244
void OnParameterChangeCallback(void* pThis)
{
} /* size: 24 */

