
//
// animgraph/skeletalinputanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 14
//

// <0129F11D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.cpp:9
void MyTypeInfo(void)
{
} /* size: 0 */

// <0129BCDE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.cpp:9
void CSkeletalInputAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <012960F5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.cpp:9
// function calls: 3
void* CSkeletalInputAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CSkeletalInputAnimNode>::CastTo(
		CSkeletalInputAnimNode* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01295F61> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.cpp:9
// function calls: 3
const void* CSkeletalInputAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CSkeletalInputAnimNode>::CastTo(
		const CSkeletalInputAnimNode* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01295D41> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.cpp:18
void CSkeletalInputAnimNode::CSkeletalInputAnimNode()
{
} /* size: 80 */

// <01295CFA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.cpp:23
void CSkeletalInputAnimNode::GetChildCount()
{
} /* size: 7 */

// <01295CBD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.cpp:29
void CSkeletalInputAnimNode::GetChild(int childIndex)
{
} /* size: 7 */

// <01295C5C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.cpp:35
// function call: 1
void CSkeletalInputAnimNode::GetChildID(int childIndex)
{
	AnimNodeID::AnimNodeID(); // 37
} /* size: 14, inline expansions: 1 (6 bytes) */

// <01295C1D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.cpp:41
void CSkeletalInputAnimNode::SetChildID(int, AnimNodeID)
{
} /* size: 5 */

// <0129C6AE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.cpp:47
// function calls: 2
void CSkeletalInputAnimNode::GetChildName(int)
{
	CUtlString::CUtlString(); // 49
	CSkeletalInputAnimNode::GetChildName(
			int);  // 47
} /* size: 130, inline expansions: 2 (64 bytes) */

// <01295BE8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.cpp:47
// variable: 1
void CSkeletalInputAnimNode::GetChildName(int)
{
	const CUtlString  sEmptyString; // 49
} /* size: 0, variables: 1 */

// <01295245> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.cpp:54
// variables: 3
// function calls: 32
void CSkeletalInputAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	CSkeletalInputUpdateNode* pNode; // 64
	SkeletalInputOpFixedSettings_t* pFixedSettings; // 66
	CModel::GetModelName(); // 58
	CPackedDataT<false>::AddItem<CSkeletalInputUpdateNode, CAnimGraphInitContext&>(
									CPackedHandle<CSkeletalInputUpdateNode>* handleOut);  // 64
	PackedHandleID::operator=(
			uint32 id);  // 144
	CPackedDataT<false>::AddItem<SkeletalInputOpFixedSettings_t, CAnimGraphInitContext&, const AnimVRHandMotionRange_t&, CVrSkeletalInputSettings>(
																CPackedHandle<SkeletalInputOpFixedSettings_t>* handleOut);  // 66
	CUtlString::~CUtlString(); // 98
	CUtlString::~CUtlString(); // 98
	CUtlString::~CUtlString(); // 98
	CUtlMemory<CFingerChain, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CFingerChain, int>::Purge(); // 903
	CUtlMemory<CFingerChain, int>::Purge(); // 1799
	CUtlVectorBase<CFingerChain, CUtlMemory<CFingerChain, int> >::Purge(); // 560
	ValidateAlignment<CFingerChain>(void); // 508
	CUtlMemory<CFingerChain, int>::Purge(); // 510
	CUtlMemory<CFingerChain, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CFingerChain, CUtlMemory<CFingerChain, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CFingerChain, CUtlMemory<CFingerChain, int> >::~CUtlVector(); // 98
	{
		int i; // 1721
		CUtlMemory<CWristBone, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CWristBone, CUtlMemory<CWristBone, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 74
		CWristBone::~CWristBone(); // 1526
		Destruct<CWristBone>(CWristBone* pMemory); // 1723
	}
	CUtlVectorBase<CWristBone, CUtlMemory<CWristBone, int> >::RemoveAll(); // 1798
	CUtlMemory<CWristBone, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CWristBone, int>::Purge(); // 903
	CUtlMemory<CWristBone, int>::Purge(); // 1799
	CUtlVectorBase<CWristBone, CUtlMemory<CWristBone, int> >::Purge(); // 560
	ValidateAlignment<CWristBone>(void); // 508
	CUtlMemory<CWristBone, int>::Purge(); // 510
	CUtlMemory<CWristBone, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CWristBone, CUtlMemory<CWristBone, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CWristBone, CUtlMemory<CWristBone, int> >::~CUtlVector(); // 98
	CVrSkeletalInputSettings::~CVrSkeletalInputSettings(); // 66
} /* size: 507, variables: 2, inline expansions: 27 (951 bytes) */

// <0129F13B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.cpp:76
void OnSourceChangeCallback(void* pThis)
{
} /* size: 10 */

// <01295200> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.cpp:82
void VisibleIfLiveStream(void* pThis)
{
} /* size: 17 */

