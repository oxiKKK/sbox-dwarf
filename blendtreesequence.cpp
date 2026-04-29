
//
// blendtreesequence.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 28
//

// <00CB54F5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:23
// function calls: 7
void CBlendTreeSequence::CBlendTreeSequence(const CAnimContainer* pAnimContainer, HSequence hSequence, const char* pszName)
{
	CUtlString::CUtlString(
			const char* pString);  // 26
	CSeqSeqDescFlag::CSeqSeqDescFlag(); // 27
	CUtlMemory<CSeqPoseSetting, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSeqPoseSetting, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSeqPoseSetting, CUtlMemory<CSeqPoseSetting, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CSeqPoseSetting, CUtlMemory<CSeqPoseSetting, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSeqPoseSetting, CUtlMemory<CSeqPoseSetting, int> >::CUtlVector(); // 27
} /* size: 0, inline expansions: 7 (0 bytes) */

// <00CB54B8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:23
void CBlendTreeSequence::CBlendTreeSequence(const CAnimContainer* pAnimContainer, HSequence hSequence, const char* pszName)
{
} /* size: 0 */

// <00CB545A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:32
// function call: 1
void CBlendTreeSequence::GetName()
{
	CUtlString::Get(); // 34
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00CB53FC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:37
// function call: 1
void CBlendTreeSequence::GetModel()
{
	CAnimContainer::GetModel(); // 39
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00CB53CE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:42
void CBlendTreeSequence::IsLooping()
{
} /* size: 0 */

// <00CB53A0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:47
void CBlendTreeSequence::IsSnapped()
{
} /* size: 0 */

// <00CB5372> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:52
void CBlendTreeSequence::IsMulti()
{
} /* size: 0 */

// <00CB5344> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:57
void CBlendTreeSequence::IsDelta()
{
} /* size: 0 */

// <00CB5316> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:62
void CBlendTreeSequence::IsHidden()
{
} /* size: 0 */

// <00CB52E8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:67
void CBlendTreeSequence::IsAutoplay()
{
} /* size: 0 */

// <00CB52D0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:72
void CBlendTreeSequence::IsAnimation()
{
} /* size: 0 */

// <00CB52B8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:77
void CBlendTreeSequence::IsFrameCacheable()
{
} /* size: 0 */

// <00CB520C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:83
// function calls: 2
void CBlendTreeSequence::GetBounds(Vector* pVecMins, Vector* pVecMaxs)
{
	Vector::operator=(
			const Vector& vOther);  // 85
	Vector::operator=(
			const Vector& vOther);  // 86
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00CB51E8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:90
void CBlendTreeSequence::GetAllAnimations(AnimRefVector_t& animRef)
{
} /* size: 0 */

// <00CB51C4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:95
void CBlendTreeSequence::GetAllSequences(CUtlVector<HSequence, CUtlMemory<HSequence, int> >& seqRef)
{
} /* size: 0 */

// <00CB516C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:100
void CBlendTreeSequence::DoAnimation(CAnimationBucket& baseResult, float flCycle, float flWeight)
{
} /* size: 0 */

// <00CB513E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:105
void CBlendTreeSequence::GetFadeInTime()
{
} /* size: 0 */

// <00CB5126> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:110
void CBlendTreeSequence::GetFadeOutTime()
{
} /* size: 0 */

// <00CB50DC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:115
void CBlendTreeSequence::GetNextSequence(HSequence hDestinationSequence, int* pDir)
{
} /* size: 0 */

// <00CB509A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:120
void CBlendTreeSequence::IsFlagSet(int nFlagMask)
{
} /* size: 0 */

// <00CB505E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:125
void CBlendTreeSequence::SetFlag(int nFlagMask)
{
} /* size: 0 */

// <00CB501C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:130
void CBlendTreeSequence::ClearFlag(int nFlagMask)
{
} /* size: 0 */

// <00CB4FD2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:135
void CBlendTreeSequence::BuildBlendlist(CAnimationBlendList* pBlendList, const float* flPoseParameterArray)
{
} /* size: 0 */

// <00CB4F74> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:141
// function call: 1
void CBlendTreeSequence::NumPoseSettings()
{
	CUtlVectorBase<CSeqPoseSetting, CUtlMemory<CSeqPoseSetting, int> >::Count(); // 143
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00D2CCE2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:147
// function calls: 7
void CBlendTreeSequence::GetPoseSettingName(int index)
{
	CUtlVectorBase<CSeqPoseSetting, CUtlMemory<CSeqPoseSetting, int> >::Count(); // 149
	CUtlMemory<CSeqPoseSetting, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSeqPoseSetting, CUtlMemory<CSeqPoseSetting, int> >::operator[](
			int i);  // 151
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 151
	CBlendTreeSequence::GetPoseSettingName(
				int index);  // 147
} /* size: 0, inline expansions: 7 (0 bytes) */

// <00CB4F4F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:147
void CBlendTreeSequence::GetPoseSettingName(int index)
{
} /* size: 0 */

// <00CB4F13> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:158
void CBlendTreeSequence::GetPoseSettingValue(int index)
{
} /* size: 0 */

// <00CB4EFB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:164
void CBlendTreeSequence::PostInit()
{
} /* size: 0 */

