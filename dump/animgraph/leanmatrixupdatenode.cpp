
//
// animgraph/leanmatrixupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 11
//

// <019765D3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixupdatenode.cpp:10
void GetBaseMap(void)
{
} /* size: 0 */

// <01970D19> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixupdatenode.cpp:10
// variables: 2
datamap_t* DataMapInit<CLeanMatrixInstanceData>(CLeanMatrixInstanceData *)
{
	const char* pDataMapInit_className; // 10
	typedescription_t dataDesc; // 10
} /* size: 0, variables: 2 */

// <01970A22> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixupdatenode.cpp:16
// function calls: 11
void CLeanMatrixUpdateNode::CLeanMatrixUpdateNode(CAnimGraphInitContext& initContext, HSequence hSeq)
{
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CLeanMatrixInstanceData>::CPackedHandle(); // 18
	StaticPoseCacheHandle::StaticPoseCacheHandle(); // 18
	CAnimParamHandle::CAnimParamHandle(); // 18
	Vector::Vector(); // 18
	Vector::Vector(); // 18
	CDampedValue::CDampedValue(
			float flStartingValue,
			float flStartingVelocity);  // 28
	CDampedValue::CDampedValue(
			float flStartingValue,
			float flStartingVelocity);  // 28
	CLeanMatrixInstanceData::CLeanMatrixInstanceData(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<true>::AddItem<CLeanMatrixInstanceData>(
					CPackedHandle<CLeanMatrixInstanceData>* handleOut);  // 31
} /* size: 219, inline expansions: 11 (164 bytes) */

// <019709F1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixupdatenode.cpp:16
void CLeanMatrixUpdateNode::CLeanMatrixUpdateNode(CAnimGraphInitContext& initContext, HSequence hSeq)
{
} /* size: 0 */

// <0197065F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixupdatenode.cpp:35
// variables: 2
// function calls: 10
void CLeanMatrixUpdateNode::Update(CAnimGraphUpdateContext& context)
{
	float flValueY; // 37
	float flValueX; // 37
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 41
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 42
} /* size: 236, variables: 2, inline expansions: 10 (152 bytes) */

// <0196FEF9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixupdatenode.cpp:46
// variables: 16
// function calls: 23
void CLeanMatrixUpdateNode::CreatePoseOp(CAnimGraphUpdateContext& context)
{
	float unclampedY; // 48
	float unclampedX; // 49
	float xValue; // 53
	float yValue; // 54
	int lowerRow; // 56
	int leftColumn; // 62
	int upperRow; // 68
	int rightColumn; // 69
	StaticPoseCacheHandle poseCacheHandles; // 71
	const float  flFrameToCycle; // 77
	float cycles; // 78
	float upWeights; // 84
	float sideWeights; // 85
	float poseWeights; // 87
	PoseHandle poseOpHandles; // 94
	{
		int i; // 95
		StaticPoseCacheHandle::StaticPoseCacheHandle(
					const StaticPoseCacheHandle& rhs);  // 97
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 59
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	CAnimGraphUpdateContext::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 48
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 49
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 53
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 54
	StaticPoseCacheHandle::StaticPoseCacheHandle(); // 71
	StaticPoseCacheHandle::operator=(
			const StaticPoseCacheHandle& rhs);  // 72
	StaticPoseCacheHandle::operator=(
			const StaticPoseCacheHandle& rhs);  // 73
	StaticPoseCacheHandle::operator=(
			const StaticPoseCacheHandle& rhs);  // 74
	StaticPoseCacheHandle::operator=(
			const StaticPoseCacheHandle& rhs);  // 75
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 103
} /* size: 1062, variables: 15, inline expansions: 22 (452 bytes) */

// <0196FD65> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixupdatenode.cpp:107
// function calls: 5
void CLeanMatrixUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 109
} /* size: 87, inline expansions: 5 (68 bytes) */

// <0196F79E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixupdatenode.cpp:113
// variables: 2
// function calls: 20
void CLeanMatrixUpdateNode::Reset(CAnimGraphUpdateContext& context, float flCycle)
{
	float flPitch; // 117
	float flYaw; // 117
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 120
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 121
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 123
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 124
} /* size: 250, variables: 2, inline expansions: 20 (276 bytes) */

// <0196F5C5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixupdatenode.cpp:128
// variable: 1
// function calls: 5
void CLeanMatrixUpdateNode::OnSave(const CAnimGraphUpdateContext& context, ISave* pSave)
{
	const CLeanMatrixInstanceData* pInstData; // 130
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 130
} /* size: 131, variables: 1, inline expansions: 5 (76 bytes) */

// <0196F3EC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixupdatenode.cpp:135
// variable: 1
// function calls: 5
void CLeanMatrixUpdateNode::OnRestore(CAnimGraphUpdateContext& context, IRestore* pRestore)
{
	CLeanMatrixInstanceData* pInstData; // 137
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CLeanMatrixInstanceData>(
						const CPackedHandle<CLeanMatrixInstanceData>& handle);  // 137
} /* size: 131, variables: 1, inline expansions: 5 (76 bytes) */

// <0196F265> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixupdatenode.cpp:142
// variable: 1
// function calls: 4
void CLeanMatrixUpdateNode::CalculateTargetXY(CAnimGraphUpdateContext& context, float& targetY, float& targetX)
{
	Vector targetVector; // 144
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 146
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 147
} /* size: 155, variables: 1, inline expansions: 4 (152 bytes) */

