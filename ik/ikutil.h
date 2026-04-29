
//
// ik/ikutil.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 11
//

// <01AD4586> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.h:36
// variable: 1
// function calls: 8
void CAnimPoseWrapper::~CAnimPoseWrapper()
{
	ThreadInterlockedDecrement(volatile int32* p); // 690
	{
		CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
		CEnduringClassMemoryPool<CAnimPose>::Free(
			CAnimPose* pObject);  // 699
	}
	CRefCountedMemPoolObject<CAnimPose>::~CRefCountedMemPoolObject(); // 649
	CRefCountedMemPoolObject<CAnimPose>::~CRefCountedMemPoolObject(); // 703
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
	Release<CAnimPose>(CAnimPose* pObj); // 344
	CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 36
} /* size: 167, inline expansions: 7 (397 bytes) */

// <01AD42FE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.h:36
// variable: 1
// function calls: 10
void CAnimPoseWrapper::~CAnimPoseWrapper()
{
	ThreadInterlockedDecrement(volatile int32* p); // 690
	{
		CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
		CEnduringClassMemoryPool<CAnimPose>::Free(
			CAnimPose* pObject);  // 699
	}
	CRefCountedMemPoolObject<CAnimPose>::~CRefCountedMemPoolObject(); // 649
	CRefCountedMemPoolObject<CAnimPose>::~CRefCountedMemPoolObject(); // 703
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
	Release<CAnimPose>(CAnimPose* pObj); // 344
	CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 36
	IPoseAccessor::~IPoseAccessor(); // 36
	CAnimPoseWrapper::~CAnimPoseWrapper(); // 36
} /* size: 189, inline expansions: 9 (534 bytes) */

// <01AD42E1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.h:36
inline void CAnimPoseWrapper::~CAnimPoseWrapper()
{
} /* size: 0 */

// <01776527> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/../ik/ikutil.h:36
void CAnimPoseWrapper::~CAnimPoseWrapper()
{
} /* size: 0 */

// <0177B185> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/../ik/ikutil.h:39
void CAnimPoseWrapper::CAnimPoseWrapper(const CModel* pModel, const CAnimPosePtr& pAnimPose, const CTransform& xModelToWorld, float flScale)
{
} /* size: 0 */

// <0177B13C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/../ik/ikutil.h:39
inline void CAnimPoseWrapper::CAnimPoseWrapper(const CModel* pModel, const CAnimPosePtr& pAnimPose, const CTransform& xModelToWorld, float flScale)
{
} /* size: 0 */

// <01B56193> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.h:47
void CAnimPoseWrapper::GetModel()
{
} /* size: 9 */

// <01B4EB03> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.h:47
inline void CAnimPoseWrapper::GetModel()
{
} /* size: 0 */

// <01B561BC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.h:59
void CAnimPoseWrapper::GetModelToWorld()
{
} /* size: 39 */

// <01B4EAEA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.h:59
inline void CAnimPoseWrapper::GetModelToWorld()
{
} /* size: 0 */

// <01B4EAD1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.h:61
inline void CAnimPoseWrapper::GetScale()
{
} /* size: 0 */

