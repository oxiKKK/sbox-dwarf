
//
// animgraph/poserecipe.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 45
//	class: 1
//

// <01569AB2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:17
// function calls: 8
void CPoseRecipe::~CPoseRecipe()
{
	CPackedDataT<false>::~CPackedDataT(); // 17
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::RemoveAll(); // 1798
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::Purge(); // 903
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::Purge(); // 1799
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::Purge(); // 560
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::~CUtlVector(); // 17
} /* size: 86, inline expansions: 8 (188 bytes) */

// <015697C4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:17
// function calls: 14
void CPoseRecipe::~CPoseRecipe()
{
	CPackedDataT<false>::~CPackedDataT(); // 17
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::RemoveAll(); // 1798
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::Purge(); // 903
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::Purge(); // 1799
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::Purge(); // 560
	ValidateAlignment<CPoseRecipe::PoseOpDesc>(void); // 508
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::Purge(); // 510
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::~CUtlVector(); // 17
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 17
	CPoseRecipe::~CPoseRecipe(); // 17
} /* size: 84, inline expansions: 14 (193 bytes) */

// <015697A8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:17
inline void CPoseRecipe::~CPoseRecipe()
{
} /* size: 0 */

// <0152633D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:17
// member functions: 45
// member variables: 3
// class size: 64
class CPoseRecipe : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:47 */
	struct PoseOpDesc {
		OpFunc m_pFunc; /* 0 8 */
		PackedHandleID m_paramID; /* 8 4 */
		int m_refCount; /* 12 4 */
		void PoseOpDesc(PoseOpDesc* );
		PoseOpDesc& operator=(PoseOpDesc* , const PoseOpDesc& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:45 */
	typedef CAnimPosePtr (*OpFunc)(CPoseUpdateContext& , CPackedData& , PackedHandleID);
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CPoseRecipe(CPoseRecipe* , CPoseRecipe& );
	void CPoseRecipe(CPoseRecipe* , const CPoseRecipe& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.cpp:12 */
	void CPoseRecipe(CPoseRecipe* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.cpp:18 */
	int GetOpCount(const CPoseRecipe* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.cpp:24 */
	CAnimPosePtr EvaluateOp(CPoseRecipe* , int, CPoseUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.cpp:33 */
	void AddReference(CPoseRecipe* , PoseHandle);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.cpp:42 */
	int GetRefCount(const CPoseRecipe* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.cpp:50 */
	CPackedData& GetParameterData(CPoseRecipe* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.cpp:56 */
	const CPackedData& GetParameterData(const CPoseRecipe* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.cpp:62 */
	void Reset(CPoseRecipe* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.cpp:72 */
	void CopyFrom(CPoseRecipe* , const CPoseRecipePtr& );
private:
	CUtlVector<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> > m_ops; /* 16 32 */
	CPackedData m_paramData; /* 48 16 */
	virtual void ~CPoseRecipe(CPoseRecipe* );
	/* <15d64bc> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.cpp:62 */
	void Reset(class CPoseRecipe *); /* linkage=_ZN11CPoseRecipe5ResetEv */
	/* <15d620b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.cpp:18 */
	int GetOpCount(const class CPoseRecipe  *); /* linkage=_ZNK11CPoseRecipe10GetOpCountEv */
	void CPoseRecipe(class CPoseRecipe *); /* linkage=_ZN11CPoseRecipeC4Ev */
	void CPoseRecipe(class CPoseRecipe *, class CPoseRecipe &); /* linkage=_ZN11CPoseRecipeC4EOS_ */
	void CPoseRecipe(class CPoseRecipe *, const class CPoseRecipe  &); /* linkage=_ZN11CPoseRecipeC4ERKS_ */
	CAnimPosePtr EvaluateOp(class CPoseRecipe *, int, class CPoseUpdateContext &); /* linkage=_ZN11CPoseRecipe10EvaluateOpEiR18CPoseUpdateContext */
	/* <15d6264> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.cpp:33 */
	void AddReference(class CPoseRecipe *, PoseHandle); /* linkage=_ZN11CPoseRecipe12AddReferenceEh */
	/* <15d6386> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.cpp:42 */
	int GetRefCount(const class CPoseRecipe  *, int); /* linkage=_ZNK11CPoseRecipe11GetRefCountEi */
	/* <15d6493> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.cpp:50 */
	CPackedData & GetParameterData(class CPoseRecipe *); /* linkage=_ZN11CPoseRecipe16GetParameterDataEv */
	const CPackedData  & GetParameterData(const class CPoseRecipe  *); /* linkage=_ZNK11CPoseRecipe16GetParameterDataEv */
	void CopyFrom(class CPoseRecipe *, const CPoseRecipePtr  &); /* linkage=_ZN11CPoseRecipe8CopyFromERK9CSmartPtrIS_17CRefCountAccessorE */
	virtual void ~CPoseRecipe(class CPoseRecipe *); /* linkage=_ZN11CPoseRecipeD4Ev */
	PoseHandle AddPoseOp<CSubtractPoseOperation, CSubtractPoseOperation::OpSettings>(class CPoseRecipe *, const class CPackedHandle<CSubtractPoseOperation::OpSettings>  &); /* linkage=_ZN11CPoseRecipe9AddPoseOpI22CSubtractPoseOperationNS1_10OpSettingsEEEhRK13CPackedHandleIT0_E */
	PoseHandle AddPoseOp<CSkeletalInputPoseOperation, CSkeletalInputPoseOperation::OpSettings>(class CPoseRecipe *, const class CPackedHandle<CSkeletalInputPoseOperation::OpSettings>  &); /* linkage=_ZN11CPoseRecipe9AddPoseOpI27CSkeletalInputPoseOperationNS1_10OpSettingsEEEhRK13CPackedHandleIT0_E */
	PoseHandle AddPoseOp<CSingleFramePoseOperation, CSingleFramePoseOperation::OpSettings>(class CPoseRecipe *, const class CPackedHandle<CSingleFramePoseOperation::OpSettings>  &); /* linkage=_ZN11CPoseRecipe9AddPoseOpI25CSingleFramePoseOperationNS1_10OpSettingsEEEhRK13CPackedHandleIT0_E */
	PoseHandle AddPoseOp<CLookAtPoseOperation, CLookAtPoseOperation::OpSettings>(class CPoseRecipe *, const class CPackedHandle<CLookAtPoseOperation::OpSettings>  &); /* linkage=_ZN11CPoseRecipe9AddPoseOpI20CLookAtPoseOperationNS1_10OpSettingsEEEhRK13CPackedHandleIT0_E */
	PoseHandle AddPoseOp<CJiggleBonePoseOperation, CJiggleBonePoseOperation::OpSettings>(class CPoseRecipe *, const class CPackedHandle<CJiggleBonePoseOperation::OpSettings>  &); /* linkage=_ZN11CPoseRecipe9AddPoseOpI24CJiggleBonePoseOperationNS1_10OpSettingsEEEhRK13CPackedHandleIT0_E */
	PoseHandle AddPoseOp<CInputStreamPoseOperation, CInputStreamPoseOperation::OpSettings>(class CPoseRecipe *, const class CPackedHandle<CInputStreamPoseOperation::OpSettings>  &); /* linkage=_ZN11CPoseRecipe9AddPoseOpI25CInputStreamPoseOperationNS1_10OpSettingsEEEhRK13CPackedHandleIT0_E */
	PoseHandle AddPoseOp<CHitReactPoseOperation, CHitReactPoseOperation::OpSettings>(class CPoseRecipe *, const class CPackedHandle<CHitReactPoseOperation::OpSettings>  &); /* linkage=_ZN11CPoseRecipe9AddPoseOpI22CHitReactPoseOperationNS1_10OpSettingsEEEhRK13CPackedHandleIT0_E */
	PoseHandle AddPoseOp<CFootLockPoseOperation, CFootLockPoseOperation::OpSettings>(class CPoseRecipe *, const class CPackedHandle<CFootLockPoseOperation::OpSettings>  &); /* linkage=_ZN11CPoseRecipe9AddPoseOpI22CFootLockPoseOperationNS1_10OpSettingsEEEhRK13CPackedHandleIT0_E */
	PoseHandle AddPoseOp<CFollowAttachmentPoseOperation, CFollowAttachmentPoseOperation::OpSettings>(class CPoseRecipe *, const class CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>  &); /* linkage=_ZN11CPoseRecipe9AddPoseOpI30CFollowAttachmentPoseOperationNS1_10OpSettingsEEEhRK13CPackedHandleIT0_E */
	PoseHandle AddPoseOp<CFetchCyclePoseOperation, CFetchCyclePoseOperation::OpSettings>(class CPoseRecipe *, const class CPackedHandle<CFetchCyclePoseOperation::OpSettings>  &); /* linkage=_ZN11CPoseRecipe9AddPoseOpI24CFetchCyclePoseOperationNS1_10OpSettingsEEEhRK13CPackedHandleIT0_E */
	PoseHandle AddPoseOp<CDifferenceBlendPoseOperation, CDifferenceBlendPoseOperation::OpSettings>(class CPoseRecipe *, const class CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>  &); /* linkage=_ZN11CPoseRecipe9AddPoseOpI29CDifferenceBlendPoseOperationNS1_10OpSettingsEEEhRK13CPackedHandleIT0_E */
	PoseHandle AddPoseOp<CChoreoPoseOperation, CChoreoPoseOperation::OpSettings>(class CPoseRecipe *, const class CPackedHandle<CChoreoPoseOperation::OpSettings>  &); /* linkage=_ZN11CPoseRecipe9AddPoseOpI20CChoreoPoseOperationNS1_10OpSettingsEEEhRK13CPackedHandleIT0_E */
	PoseHandle AddPoseOp<CBoneMaskPoseOperation, CBoneMaskPoseOperation::OpSettings>(class CPoseRecipe *, const class CPackedHandle<CBoneMaskPoseOperation::OpSettings>  &); /* linkage=_ZN11CPoseRecipe9AddPoseOpI22CBoneMaskPoseOperationNS1_10OpSettingsEEEhRK13CPackedHandleIT0_E */
	PoseHandle AddPoseOp<CBlendPoseOperation, CBlendPoseOperation::OpSettings>(class CPoseRecipe *, const class CPackedHandle<CBlendPoseOperation::OpSettings>  &); /* linkage=_ZN11CPoseRecipe9AddPoseOpI19CBlendPoseOperationNS1_10OpSettingsEEEhRK13CPackedHandleIT0_E */
	PoseHandle AddPoseOp<CAimMatrixPoseOperation, CAimMatrixPoseOperation::OpSettings>(class CPoseRecipe *, const class CPackedHandle<CAimMatrixPoseOperation::OpSettings>  &); /* linkage=_ZN11CPoseRecipe9AddPoseOpI23CAimMatrixPoseOperationNS1_10OpSettingsEEEhRK13CPackedHandleIT0_E */
	PoseHandle AddPoseOp<CAddPoseOperation, CAddPoseOperation::OpSettings>(class CPoseRecipe *, const class CPackedHandle<CAddPoseOperation::OpSettings>  &); /* linkage=_ZN11CPoseRecipe9AddPoseOpI17CAddPoseOperationNS1_10OpSettingsEEEhRK13CPackedHandleIT0_E */
	PoseHandle AddPoseOp<CTwoBoneIKPoseOperation, CTwoBoneIKPoseOperation::OpSettings>(class CPoseRecipe *, const class CPackedHandle<CTwoBoneIKPoseOperation::OpSettings>  &); /* linkage=_ZN11CPoseRecipe9AddPoseOpI23CTwoBoneIKPoseOperationNS1_10OpSettingsEEEhRK13CPackedHandleIT0_E */
	PoseHandle AddPoseOp<CSolveIKChainPoseOperation, CSolveIKChainPoseOperation::OpSettings>(class CPoseRecipe *, const class CPackedHandle<CSolveIKChainPoseOperation::OpSettings>  &); /* linkage=_ZN11CPoseRecipe9AddPoseOpI26CSolveIKChainPoseOperationNS1_10OpSettingsEEEhRK13CPackedHandleIT0_E */
};

// <00DF5016> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:20
void CPoseRecipe::CPoseRecipe()
{
} /* size: 0 */

// <0191CD0E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:47
void PoseOpDesc::PoseOpDesc()
{
} /* size: 0 */

// <0191CCF2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:47
inline void PoseOpDesc::PoseOpDesc()
{
} /* size: 0 */

// <01918622> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:47
void PoseOpDesc::PoseOpDesc(const PoseOpDesc &)
{
} /* size: 0 */

// <01918601> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:47
inline void PoseOpDesc::PoseOpDesc(const PoseOpDesc &)
{
} /* size: 0 */

// <01574DF4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:47
inline void PoseOpDesc::operator=(const PoseOpDesc &)
{
} /* size: 0 */

// <0191A999> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:75
// function calls: 5
CAnimPosePtr CallOp<CSolveIKChainPoseOperation, CSolveIKChainPoseOperation::OpSettings>(CPoseUpdateContext& context, CPackedData& packedData, PackedHandleID handleID)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CSolveIKChainPoseOperation::OpSettings>(
								const CPackedHandle<CSolveIKChainPoseOperation::OpSettings>& handle);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 23
	CPackedHandle<CSolveIKChainPoseOperation::OpSettings>::CPackedHandle(
			PackedHandleID offset);  // 77
} /* size: 97, inline expansions: 5 (20 bytes) */

// <0191A553> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:75
// function calls: 5
CAnimPosePtr CallOp<CTwoBoneIKPoseOperation, CTwoBoneIKPoseOperation::OpSettings>(CPoseUpdateContext& context, CPackedData& packedData, PackedHandleID handleID)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CTwoBoneIKPoseOperation::OpSettings>(
							const CPackedHandle<CTwoBoneIKPoseOperation::OpSettings>& handle);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 23
	CPackedHandle<CTwoBoneIKPoseOperation::OpSettings>::CPackedHandle(
			PackedHandleID offset);  // 77
} /* size: 97, inline expansions: 5 (20 bytes) */

// <0171EB40> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:75
// function calls: 5
CAnimPosePtr CallOp<CAddPoseOperation, CAddPoseOperation::OpSettings>(CPoseUpdateContext& context, CPackedData& packedData, PackedHandleID handleID)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CAddPoseOperation::OpSettings>(
							const CPackedHandle<CAddPoseOperation::OpSettings>& handle);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 23
	CPackedHandle<CAddPoseOperation::OpSettings>::CPackedHandle(
			PackedHandleID offset);  // 77
} /* size: 97, inline expansions: 5 (20 bytes) */

// <0171E930> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:75
// function calls: 5
CAnimPosePtr CallOp<CAimMatrixPoseOperation, CAimMatrixPoseOperation::OpSettings>(CPoseUpdateContext& context, CPackedData& packedData, PackedHandleID handleID)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CAimMatrixPoseOperation::OpSettings>(
							const CPackedHandle<CAimMatrixPoseOperation::OpSettings>& handle);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 23
	CPackedHandle<CAimMatrixPoseOperation::OpSettings>::CPackedHandle(
			PackedHandleID offset);  // 77
} /* size: 97, inline expansions: 5 (20 bytes) */

// <0171E604> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:75
// function calls: 5
CAnimPosePtr CallOp<CBlendPoseOperation, CBlendPoseOperation::OpSettings>(CPoseUpdateContext& context, CPackedData& packedData, PackedHandleID handleID)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlendPoseOperation::OpSettings>(
							const CPackedHandle<CBlendPoseOperation::OpSettings>& handle);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 23
	CPackedHandle<CBlendPoseOperation::OpSettings>::CPackedHandle(
			PackedHandleID offset);  // 77
} /* size: 97, inline expansions: 5 (20 bytes) */

// <0171E3FA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:75
// function calls: 5
CAnimPosePtr CallOp<CBoneMaskPoseOperation, CBoneMaskPoseOperation::OpSettings>(CPoseUpdateContext& context, CPackedData& packedData, PackedHandleID handleID)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBoneMaskPoseOperation::OpSettings>(
							const CPackedHandle<CBoneMaskPoseOperation::OpSettings>& handle);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 23
	CPackedHandle<CBoneMaskPoseOperation::OpSettings>::CPackedHandle(
			PackedHandleID offset);  // 77
} /* size: 97, inline expansions: 5 (20 bytes) */

// <0171E1AA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:75
// function calls: 5
CAnimPosePtr CallOp<CChoreoPoseOperation, CChoreoPoseOperation::OpSettings>(CPoseUpdateContext& context, CPackedData& packedData, PackedHandleID handleID)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoreoPoseOperation::OpSettings>(
							const CPackedHandle<CChoreoPoseOperation::OpSettings>& handle);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 23
	CPackedHandle<CChoreoPoseOperation::OpSettings>::CPackedHandle(
			PackedHandleID offset);  // 77
} /* size: 97, inline expansions: 5 (20 bytes) */

// <0171DE08> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:75
// function calls: 5
CAnimPosePtr CallOp<CDifferenceBlendPoseOperation, CDifferenceBlendPoseOperation::OpSettings>(CPoseUpdateContext& context, CPackedData& packedData, PackedHandleID handleID)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDifferenceBlendPoseOperation::OpSettings>(
								const CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>& handle);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 23
	CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>::CPackedHandle(
			PackedHandleID offset);  // 77
} /* size: 97, inline expansions: 5 (20 bytes) */

// <0171DBC0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:75
// function calls: 6
CAnimPosePtr CallOp<CFetchCyclePoseOperation, CFetchCyclePoseOperation::OpSettings>(CPoseUpdateContext& context, CPackedData& packedData, PackedHandleID handleID)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFetchCyclePoseOperation::OpSettings>(
							const CPackedHandle<CFetchCyclePoseOperation::OpSettings>& handle);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 23
	CPackedHandle<CFetchCyclePoseOperation::OpSettings>::CPackedHandle(
			PackedHandleID offset);  // 77
	Evaluate(CPoseUpdateContext& context,
		OpSettings* pSettings);  // 77
} /* size: 101, inline expansions: 6 (38 bytes) */

// <0171DA01> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:75
// function calls: 5
CAnimPosePtr CallOp<CFollowAttachmentPoseOperation, CFollowAttachmentPoseOperation::OpSettings>(CPoseUpdateContext& context, CPackedData& packedData, PackedHandleID handleID)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFollowAttachmentPoseOperation::OpSettings>(
								const CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>& handle);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 23
	CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>::CPackedHandle(
			PackedHandleID offset);  // 77
} /* size: 97, inline expansions: 5 (20 bytes) */

// <0171D6C8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:75
// function calls: 5
CAnimPosePtr CallOp<CFootLockPoseOperation, CFootLockPoseOperation::OpSettings>(CPoseUpdateContext& context, CPackedData& packedData, PackedHandleID handleID)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFootLockPoseOperation::OpSettings>(
							const CPackedHandle<CFootLockPoseOperation::OpSettings>& handle);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 23
	CPackedHandle<CFootLockPoseOperation::OpSettings>::CPackedHandle(
			PackedHandleID offset);  // 77
} /* size: 97, inline expansions: 5 (20 bytes) */

// <0171D447> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:75
// function calls: 5
CAnimPosePtr CallOp<CHitReactPoseOperation, CHitReactPoseOperation::OpSettings>(CPoseUpdateContext& context, CPackedData& packedData, PackedHandleID handleID)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CHitReactPoseOperation::OpSettings>(
							const CPackedHandle<CHitReactPoseOperation::OpSettings>& handle);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 23
	CPackedHandle<CHitReactPoseOperation::OpSettings>::CPackedHandle(
			PackedHandleID offset);  // 77
} /* size: 97, inline expansions: 5 (20 bytes) */

// <0171D216> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:75
// function calls: 5
CAnimPosePtr CallOp<CInputStreamPoseOperation, CInputStreamPoseOperation::OpSettings>(CPoseUpdateContext& context, CPackedData& packedData, PackedHandleID handleID)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CInputStreamPoseOperation::OpSettings>(
								const CPackedHandle<CInputStreamPoseOperation::OpSettings>& handle);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 23
	CPackedHandle<CInputStreamPoseOperation::OpSettings>::CPackedHandle(
			PackedHandleID offset);  // 77
} /* size: 97, inline expansions: 5 (20 bytes) */

// <0171CF61> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:75
// function calls: 5
CAnimPosePtr CallOp<CJiggleBonePoseOperation, CJiggleBonePoseOperation::OpSettings>(CPoseUpdateContext& context, CPackedData& packedData, PackedHandleID handleID)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CJiggleBonePoseOperation::OpSettings>(
							const CPackedHandle<CJiggleBonePoseOperation::OpSettings>& handle);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 23
	CPackedHandle<CJiggleBonePoseOperation::OpSettings>::CPackedHandle(
			PackedHandleID offset);  // 77
} /* size: 97, inline expansions: 5 (20 bytes) */

// <0171CD04> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:75
// function calls: 5
CAnimPosePtr CallOp<CLookAtPoseOperation, CLookAtPoseOperation::OpSettings>(CPoseUpdateContext& context, CPackedData& packedData, PackedHandleID handleID)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CLookAtPoseOperation::OpSettings>(
							const CPackedHandle<CLookAtPoseOperation::OpSettings>& handle);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 23
	CPackedHandle<CLookAtPoseOperation::OpSettings>::CPackedHandle(
			PackedHandleID offset);  // 77
} /* size: 97, inline expansions: 5 (20 bytes) */

// <0171CABA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:75
// function calls: 5
CAnimPosePtr CallOp<CSingleFramePoseOperation, CSingleFramePoseOperation::OpSettings>(CPoseUpdateContext& context, CPackedData& packedData, PackedHandleID handleID)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CSingleFramePoseOperation::OpSettings>(
								const CPackedHandle<CSingleFramePoseOperation::OpSettings>& handle);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 23
	CPackedHandle<CSingleFramePoseOperation::OpSettings>::CPackedHandle(
			PackedHandleID offset);  // 77
} /* size: 97, inline expansions: 5 (20 bytes) */

// <0171C681> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:75
// function calls: 5
CAnimPosePtr CallOp<CSkeletalInputPoseOperation, CSkeletalInputPoseOperation::OpSettings>(CPoseUpdateContext& context, CPackedData& packedData, PackedHandleID handleID)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CSkeletalInputPoseOperation::OpSettings>(
								const CPackedHandle<CSkeletalInputPoseOperation::OpSettings>& handle);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 23
	CPackedHandle<CSkeletalInputPoseOperation::OpSettings>::CPackedHandle(
			PackedHandleID offset);  // 77
} /* size: 97, inline expansions: 5 (20 bytes) */

// <0171C1A7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:75
// function calls: 5
CAnimPosePtr CallOp<CSubtractPoseOperation, CSubtractPoseOperation::OpSettings>(CPoseUpdateContext& context, CPackedData& packedData, PackedHandleID handleID)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CSubtractPoseOperation::OpSettings>(
							const CPackedHandle<CSubtractPoseOperation::OpSettings>& handle);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 77
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 23
	CPackedHandle<CSubtractPoseOperation::OpSettings>::CPackedHandle(
			PackedHandleID offset);  // 77
} /* size: 97, inline expansions: 5 (20 bytes) */

// <0191CC7B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:83
// variables: 4
inline void AddPoseOp<CSolveIKChainPoseOperation, CPoseRecipe::CSolveIKChainPoseOperation::OpSettings>(const CPackedHandle<CSolveIKChainPoseOperation::OpSettings>& hParam)
{
	const char   __FUNCTION__; // 54505
	PoseOpDesc opDesc; // 85
	int index; // 89
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 90
	}
} /* size: 0, variables: 3 */

// <0191C2F4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:83
// variables: 4
inline void AddPoseOp<CTwoBoneIKPoseOperation, CPoseRecipe::CTwoBoneIKPoseOperation::OpSettings>(const CPackedHandle<CTwoBoneIKPoseOperation::OpSettings>& hParam)
{
	const char   __FUNCTION__; // 54505
	PoseOpDesc opDesc; // 85
	int index; // 89
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 90
	}
} /* size: 0, variables: 3 */

// <01722937> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:83
// variables: 4
inline void AddPoseOp<CAddPoseOperation, CPoseRecipe::CAddPoseOperation::OpSettings>(const CPackedHandle<CAddPoseOperation::OpSettings>& hParam)
{
	const char   __FUNCTION__; // 44937
	PoseOpDesc opDesc; // 85
	int index; // 89
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 90
	}
} /* size: 0, variables: 3 */

// <01722752> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:83
// variables: 4
inline void AddPoseOp<CAimMatrixPoseOperation, CPoseRecipe::CAimMatrixPoseOperation::OpSettings>(const CPackedHandle<CAimMatrixPoseOperation::OpSettings>& hParam)
{
	const char   __FUNCTION__; // 44937
	PoseOpDesc opDesc; // 85
	int index; // 89
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 90
	}
} /* size: 0, variables: 3 */

// <017223DE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:83
// variables: 4
inline void AddPoseOp<CBlendPoseOperation, CPoseRecipe::CBlendPoseOperation::OpSettings>(const CPackedHandle<CBlendPoseOperation::OpSettings>& hParam)
{
	const char   __FUNCTION__; // 44937
	PoseOpDesc opDesc; // 85
	int index; // 89
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 90
	}
} /* size: 0, variables: 3 */

// <01722199> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:83
// variables: 4
inline void AddPoseOp<CBoneMaskPoseOperation, CPoseRecipe::CBoneMaskPoseOperation::OpSettings>(const CPackedHandle<CBoneMaskPoseOperation::OpSettings>& hParam)
{
	const char   __FUNCTION__; // 44937
	PoseOpDesc opDesc; // 85
	int index; // 89
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 90
	}
} /* size: 0, variables: 3 */

// <01721F32> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:83
// variables: 4
inline void AddPoseOp<CChoreoPoseOperation, CPoseRecipe::CChoreoPoseOperation::OpSettings>(const CPackedHandle<CChoreoPoseOperation::OpSettings>& hParam)
{
	const char   __FUNCTION__; // 44937
	PoseOpDesc opDesc; // 85
	int index; // 89
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 90
	}
} /* size: 0, variables: 3 */

// <01721BF5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:83
// variables: 4
inline void AddPoseOp<CDifferenceBlendPoseOperation, CPoseRecipe::CDifferenceBlendPoseOperation::OpSettings>(const CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>& hParam)
{
	const char   __FUNCTION__; // 44937
	PoseOpDesc opDesc; // 85
	int index; // 89
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 90
	}
} /* size: 0, variables: 3 */

// <01721A9B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:83
// variables: 4
inline void AddPoseOp<CFetchCyclePoseOperation, CPoseRecipe::CFetchCyclePoseOperation::OpSettings>(const CPackedHandle<CFetchCyclePoseOperation::OpSettings>& hParam)
{
	const char   __FUNCTION__; // 44937
	PoseOpDesc opDesc; // 85
	int index; // 89
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 90
	}
} /* size: 0, variables: 3 */

// <01721980> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:83
// variables: 4
inline void AddPoseOp<CFollowAttachmentPoseOperation, CPoseRecipe::CFollowAttachmentPoseOperation::OpSettings>(const CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>& hParam)
{
	const char   __FUNCTION__; // 44937
	PoseOpDesc opDesc; // 85
	int index; // 89
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 90
	}
} /* size: 0, variables: 3 */

// <01721598> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:83
// variables: 4
inline void AddPoseOp<CFootLockPoseOperation, CPoseRecipe::CFootLockPoseOperation::OpSettings>(const CPackedHandle<CFootLockPoseOperation::OpSettings>& hParam)
{
	const char   __FUNCTION__; // 44937
	PoseOpDesc opDesc; // 85
	int index; // 89
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 90
	}
} /* size: 0, variables: 3 */

// <0172130D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:83
// variables: 4
inline void AddPoseOp<CHitReactPoseOperation, CPoseRecipe::CHitReactPoseOperation::OpSettings>(const CPackedHandle<CHitReactPoseOperation::OpSettings>& hParam)
{
	const char   __FUNCTION__; // 44937
	PoseOpDesc opDesc; // 85
	int index; // 89
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 90
	}
} /* size: 0, variables: 3 */

// <017210D6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:83
// variables: 4
inline void AddPoseOp<CInputStreamPoseOperation, CPoseRecipe::CInputStreamPoseOperation::OpSettings>(const CPackedHandle<CInputStreamPoseOperation::OpSettings>& hParam)
{
	const char   __FUNCTION__; // 44937
	PoseOpDesc opDesc; // 85
	int index; // 89
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 90
	}
} /* size: 0, variables: 3 */

// <01720CAB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:83
// variables: 4
inline void AddPoseOp<CJiggleBonePoseOperation, CPoseRecipe::CJiggleBonePoseOperation::OpSettings>(const CPackedHandle<CJiggleBonePoseOperation::OpSettings>& hParam)
{
	const char   __FUNCTION__; // 44937
	PoseOpDesc opDesc; // 85
	int index; // 89
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 90
	}
} /* size: 0, variables: 3 */

// <01720A3A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:83
// variables: 4
inline void AddPoseOp<CLookAtPoseOperation, CPoseRecipe::CLookAtPoseOperation::OpSettings>(const CPackedHandle<CLookAtPoseOperation::OpSettings>& hParam)
{
	const char   __FUNCTION__; // 44937
	PoseOpDesc opDesc; // 85
	int index; // 89
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 90
	}
} /* size: 0, variables: 3 */

// <01720865> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:83
// variables: 4
inline void AddPoseOp<CSingleFramePoseOperation, CPoseRecipe::CSingleFramePoseOperation::OpSettings>(const CPackedHandle<CSingleFramePoseOperation::OpSettings>& hParam)
{
	const char   __FUNCTION__; // 44937
	PoseOpDesc opDesc; // 85
	int index; // 89
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 90
	}
} /* size: 0, variables: 3 */

// <0172000A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:83
// variables: 4
inline void AddPoseOp<CSkeletalInputPoseOperation, CPoseRecipe::CSkeletalInputPoseOperation::OpSettings>(const CPackedHandle<CSkeletalInputPoseOperation::OpSettings>& hParam)
{
	const char   __FUNCTION__; // 44937
	PoseOpDesc opDesc; // 85
	int index; // 89
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 90
	}
} /* size: 0, variables: 3 */

// <0171F7E0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.h:83
// variables: 4
inline void AddPoseOp<CSubtractPoseOperation, CPoseRecipe::CSubtractPoseOperation::OpSettings>(const CPackedHandle<CSubtractPoseOperation::OpSettings>& hParam)
{
	const char   __FUNCTION__; // 44937
	PoseOpDesc opDesc; // 85
	int index; // 89
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 90
	}
} /* size: 0, variables: 3 */

