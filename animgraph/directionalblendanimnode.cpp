
//
// animgraph/directionalblendanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 15
//

// <01095587> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.cpp:26
void MyTypeInfo(void)
{
} /* size: 0 */

// <010908D4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.cpp:26
void CDirectionalBlendAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <0107125B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.cpp:26
// function calls: 3
void* CDirectionalBlendAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CDirectionalBlendAnimNode>::CastTo(
		CDirectionalBlendAnimNode* derived,
		ClassID baseTypeInfo);  // 26
} /* size: 0, inline expansions: 3 (295 bytes) */

// <010710C8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.cpp:26
// function calls: 3
const void* CDirectionalBlendAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CDirectionalBlendAnimNode>::CastTo(
		const CDirectionalBlendAnimNode* derived,
		ClassID baseTypeInfo);  // 26
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01070E2E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.cpp:35
// function calls: 12
void CDirectionalBlendAnimNode::CDirectionalBlendAnimNode()
{
	CUtlString::CUtlString(
			const char* pString);  // 19
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 19
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::CSmartPtr(); // 19
	Object::Object(); // 30
	IAnimNode::IAnimNode(); // 19
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 19
	AnimNodeID::AnimNodeID(); // 19
	CUtlString::CUtlString(); // 19
	CAnimNodeBase::CAnimNodeBase(); // 36
	CUtlString::CUtlString(); // 36
	AnimParamID::AnimParamID(); // 36
} /* size: 181, inline expansions: 12 (175 bytes) */

// <01070E15> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.cpp:35
void CDirectionalBlendAnimNode::CDirectionalBlendAnimNode()
{
} /* size: 0 */

// <01070DFD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.cpp:42
void CDirectionalBlendAnimNode::GetChildCount()
{
} /* size: 0 */

// <01070DD9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.cpp:48
void CDirectionalBlendAnimNode::GetChild(int childIndex)
{
} /* size: 0 */

// <01070DB5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.cpp:54
void CDirectionalBlendAnimNode::GetChildID(int childIndex)
{
} /* size: 0 */

// <01070D86> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.cpp:60
void CDirectionalBlendAnimNode::SetChildID(int childIndex, AnimNodeID id)
{
} /* size: 0 */

// <01092AE2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.cpp:66
// function calls: 2
void CDirectionalBlendAnimNode::GetChildName(int childIndex)
{
	CUtlString::CUtlString(); // 68
	CDirectionalBlendAnimNode::GetChildName(
			int childIndex);  // 66
} /* size: 130, inline expansions: 2 (64 bytes) */

// <01070D4B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.cpp:66
// variable: 1
void CDirectionalBlendAnimNode::GetChildName(int childIndex)
{
	const CUtlString  sEmptyString; // 68
} /* size: 0, variables: 1 */

// <0107085C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.cpp:73
// variables: 8
// function calls: 11
void CDirectionalBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	CPackedHandle<CDirectionalBlendUpdateNode> hNodeHandle; // 75
	CDirectionalBlendUpdateNode* pNode; // 77
	CAnimParamHandle hParam; // 79
	float flDuration; // 93
	{
		int i; // 94
		{
			CUtlString sequenceName; // 96
			HSequence sequence; // 97
			CUtlString::Get(); // 99
			CUtlString::String(); // 97
			CUtlString::~CUtlString(); // 103
		}
	}
	{
		int i; // 108
		HSequence::operator==(
				const HSequence& other);  // 110
	}
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CDirectionalBlendUpdateNode>::CPackedHandle(); // 75
	CPackedDataT<false>::AddItem<CDirectionalBlendUpdateNode, CAnimGraphInitContext&>(
									CPackedHandle<CDirectionalBlendUpdateNode>* handleOut);  // 77
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 79
	CAnimParamHandle::IsValid(); // 80
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 85
	CAnimInputDamping::operator=(
			const CAnimInputDamping  &);  // 88
} /* size: 603, variables: 4, inline expansions: 7 (159 bytes) */

// <01070845> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.cpp:122
void BlendSourceChangedCallback(void* pThis)
{
} /* size: 0 */

// <01070803> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.cpp:128
// variable: 1
void VisibleIfSourceIsParam(void* pThis)
{
	CDirectionalBlendAnimNode* pThisPtr; // 130
} /* size: 16, variables: 1 */

