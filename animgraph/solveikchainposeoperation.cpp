
//
// animgraph/solveikchainposeoperation.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//

// <01716419> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainposeoperation.cpp:14
void GetSolverData(const CTransform &, float, const SolveIKChainPoseOpFixedSettings_t *, const SolveIKChainPoseOpInstanceSettings_t *, IPoseAccessor *, CUtlVector<CSolveIKChainData, CUtlMemory<CSolveIKChainData, int> > &)
{
} /* size: 0 */

// <01726F97> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainposeoperation.cpp:16
// variables: 12
// function calls: 71
void Evaluate(CPoseUpdateContext& context, OpSettings* pSettings)
{
	CAnimPosePtr pResultPose; // 20
	const SolveIKChainPoseOpFixedSettings_t* pOpFixedSettings; // 22
	const SolveIKChainPoseOpInstanceSettings_t* pOpInstanceSettings; // 23
	CTransform localToWorld; // 25
	CAnimPoseWrapper poseWrapper; // 26
	CUtlVector<CSolveIKChainData, CUtlMemory<CSolveIKChainData, int> > chainData; // 28
	{
		const CSolveIKChainData& chainDatum; // 34
		CUtlVector<CSolveIKChainData, CUtlMemory<CSolveIKChainData, int> >& __for_range; // 52072
		iterator __for_begin; // 43024
		iterator __for_end; // 43024
		CUtlMemory<CSolveIKChainData, int>::Base(); // 112
		CUtlVectorBase<CSolveIKChainData, CUtlMemory<CSolveIKChainData, int> >::Base(); // 102
		CUtlVectorBase<CSolveIKChainData, CUtlMemory<CSolveIKChainData, int> >::begin(); // 34
		CUtlVectorBase<CSolveIKChainData, CUtlMemory<CSolveIKChainData, int> >::Count(); // 104
		CUtlVectorBase<CSolveIKChainData, CUtlMemory<CSolveIKChainData, int> >::end(); // 34
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 117
		CPoseUpdateContext::GetVisualizationManager(); // 41
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<SolveIKChainPoseOpFixedSettings_t>(
							const CPackedHandle<SolveIKChainPoseOpFixedSettings_t>& handle);  // 33
	CAnimGraphFixedData::operator[]<SolveIKChainPoseOpFixedSettings_t>(
							const CPackedHandle<SolveIKChainPoseOpFixedSettings_t>& handle);  // 22
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<SolveIKChainPoseOpInstanceSettings_t>(
							const CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<SolveIKChainPoseOpInstanceSettings_t>(
							const CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>& handle);  // 23
	QuaternionAligned::w(); // 41
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 373
	VectorAligned::operator=(
			fltx4 src);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	VectorAligned::VectorAligned(); // 33
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 373
	VectorAligned::operator fltx4(); // 373
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 373
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 373
	CTransform::Unscaled(); // 25
	IPoseAccessor::IPoseAccessor(); // 43
	ThreadInterlockedIncrement(volatile int32* p); // 683
	CRefCountedMemPoolObject<CAnimPose>::AddRef(); // 21
	AddRef<CAnimPose>(CAnimPose* pObj); // 366
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
	Release<CAnimPose>(CAnimPose* pObj); // 370
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator=(
			CAnimPose* pObj);  // 406
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimPose, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 40
	CAnimPoseWrapper::CAnimPoseWrapper(
			const CModel* pModel,
			const CAnimPosePtr& pAnimPose,
			const CTransform& xModelToWorld,
			float flScale);  // 26
	CUtlMemory<CSolveIKChainData, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSolveIKChainData, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSolveIKChainData, CUtlMemory<CSolveIKChainData, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CSolveIKChainData, CUtlMemory<CSolveIKChainData, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSolveIKChainData, CUtlMemory<CSolveIKChainData, int> >::CUtlVector(); // 28
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 117
	CPoseUpdateContext::GetVisualizationManager(); // 32
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 117
	CPoseUpdateContext::GetVisualizationManager(); // 45
	CUtlVectorBase<CSolveIKChainData, CUtlMemory<CSolveIKChainData, int> >::RemoveAll(); // 1798
	CUtlMemory<CSolveIKChainData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSolveIKChainData, int>::Purge(); // 903
	CUtlMemory<CSolveIKChainData, int>::Purge(); // 1799
	CUtlVectorBase<CSolveIKChainData, CUtlMemory<CSolveIKChainData, int> >::Purge(); // 560
	ValidateAlignment<CSolveIKChainData>(void); // 508
	CUtlMemory<CSolveIKChainData, int>::Purge(); // 510
	CUtlMemory<CSolveIKChainData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CSolveIKChainData, CUtlMemory<CSolveIKChainData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CSolveIKChainData, CUtlMemory<CSolveIKChainData, int> >::~CUtlVector(); // 49
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
	CAnimPoseWrapper::~CAnimPoseWrapper(); // 49
} /* size: 909, variables: 6, inline expansions: 62 (2330 bytes) */

