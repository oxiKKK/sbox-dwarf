
//
// animgraph/footmotionmanager.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 18
//

// <00F6F6F1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:12
// variables: 2
// function calls: 8
void CFootMotionManager::CFootMotionManager(const CAnimGraphFixedData& fixedData)
{
	{
		int i; // 14
	}
	{
		int i; // 14
		MyTypeID(void); // 16
		CClassInfo::GetID(); // 16
		ClassID::operator==(
				ClassID nOther);  // 16
		AnimNodeID::operator=(
				const AnimNodeID& rhs);  // 19
	}
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 12
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::CSmartPtr(); // 12
	AnimNodeID::AnimNodeID(); // 12
} /* size: 268, inline expansions: 4 (29 bytes) */

// <00F6F6C0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:12
// variable: 1
void CFootMotionManager::CFootMotionManager(const CAnimGraphFixedData& fixedData)
{
	{
		int i; // 14
	}
} /* size: 0 */

// <00F6F440> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:26
// function calls: 12
void CFootMotionManager::SetContext(CAnimGraphUpdateContext* pContext)
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphUpdateContext>(CAnimGraphUpdateContext* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphUpdateContext>(CAnimGraphUpdateContext* pObj); // 370
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator=(
			CAnimGraphUpdateContext* pObj);  // 28
} /* size: 89, inline expansions: 12 (214 bytes) */

// <00F9F5D0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:32
// function call: 1
void CFootMotionManager::HadFootData()
{
	AnimNodeID::IsValid(); // 34
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00F6F427> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:32
void CFootMotionManager::HadFootData()
{
} /* size: 0 */

// <00F6F32A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:38
// variable: 1
// function calls: 3
void CFootMotionManager::GetFootCount()
{
	int nFootCount; // 40
	AnimNodeID::IsValid(); // 34
	CFootMotionManager::HadFootData(); // 42
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 44
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <00F6F165> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:51
// variable: 1
// function calls: 5
void CFootMotionManager::GetCurrentFootTrajectory(int nFootIndex)
{
	CFootTrajectory trajectory; // 53
	AnimNodeID::IsValid(); // 34
	CFootMotionManager::HadFootData(); // 55
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 57
	Vector::operator=(
			const Vector& vOther);  // 188
	CFootTrajectory::operator=(
			CFootTrajectory &);  // 57
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <00F6EFC1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:64
// variable: 1
// function calls: 5
void CFootMotionManager::EstimateNewFootTrajectory(int nFootIndex)
{
	CFootTrajectory trajectory; // 66
	AnimNodeID::IsValid(); // 34
	CFootMotionManager::HadFootData(); // 68
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 70
	Vector::operator=(
			const Vector& vOther);  // 188
	CFootTrajectory::operator=(
			CFootTrajectory &);  // 70
} /* size: 0, variables: 1, inline expansions: 5 (40 bytes) */

// <00F9F62A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:77
// variable: 1
// function calls: 4
void CFootMotionManager::GetNextPosition(int nFootIndex)
{
	VectorAligned vPos; // 79
	AnimNodeID::IsValid(); // 34
	CFootMotionManager::HadFootData(); // 81
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 83
	VectorAligned::operator=(
			const VectorAligned& src);  // 83
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <00F6EF90> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:77
// variable: 1
void CFootMotionManager::GetNextPosition(int nFootIndex)
{
	VectorAligned vPos; // 79
} /* size: 0, variables: 1 */

// <00F9F776> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:90
// variable: 1
// function calls: 4
void CFootMotionManager::GetPrevPosition(int nFootIndex)
{
	VectorAligned vPos; // 92
	AnimNodeID::IsValid(); // 34
	CFootMotionManager::HadFootData(); // 94
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 96
	VectorAligned::operator=(
			const VectorAligned& src);  // 96
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <00F6EF5F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:90
// variable: 1
void CFootMotionManager::GetPrevPosition(int nFootIndex)
{
	VectorAligned vPos; // 92
} /* size: 0, variables: 1 */

// <00F6EE00> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:103
// variable: 1
// function calls: 4
void CFootMotionManager::GetCurrentPosition(int nFootIndex)
{
	VectorAligned vPos; // 105
	AnimNodeID::IsValid(); // 34
	CFootMotionManager::HadFootData(); // 107
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 109
	VectorAligned::operator=(
			const VectorAligned& src);  // 109
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <00F6ECA9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:116
// variable: 1
// function calls: 4
void CFootMotionManager::EstimateNewFootPosition(int nFootIndex)
{
	VectorAligned vPos; // 118
	AnimNodeID::IsValid(); // 34
	CFootMotionManager::HadFootData(); // 120
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 122
	VectorAligned::operator=(
			const VectorAligned& src);  // 122
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <00F6EB52> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:129
// variable: 1
// function calls: 4
void CFootMotionManager::EstimateNewFootPositionFlattened(int nFootIndex)
{
	VectorAligned vPos; // 131
	AnimNodeID::IsValid(); // 34
	CFootMotionManager::HadFootData(); // 133
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 135
	VectorAligned::operator=(
			const VectorAligned& src);  // 135
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <00F6E978> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:142
// variable: 1
// function calls: 6
void CFootMotionManager::GetPrevTransform(int nFootIndex)
{
	CTransform xform; // 144
	AnimNodeID::IsValid(); // 34
	CFootMotionManager::HadFootData(); // 146
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 148
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			CTransform &);  // 148
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <00F6E5F9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:155
// variables: 2
// function calls: 11
void CFootMotionManager::GetFootPositionForTrajectory(int nFootIndex, const CFootTrajectory& trajectory)
{
	VectorAligned vPrevPos; // 157
	VectorAligned vNextPos; // 158
	AnimNodeID::IsValid(); // 34
	CFootMotionManager::HadFootData(); // 94
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 96
	VectorAligned::operator=(
			const VectorAligned& src);  // 96
	CFootMotionManager::GetPrevPosition(
			int nFootIndex);  // 157
	AnimNodeID::IsValid(); // 34
	CFootMotionManager::HadFootData(); // 81
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 83
	VectorAligned::operator=(
			const VectorAligned& src);  // 83
	CFootMotionManager::GetNextPosition(
			int nFootIndex);  // 158
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 160
} /* size: 0, variables: 2, inline expansions: 11 (0 bytes) */

// <00F6E581> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:164
// variables: 2
void CFootMotionManager::GetFootLockNode()
{
	const char   __FUNCTION__; // 37727
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 167
	}
} /* size: 29, variables: 1 */

