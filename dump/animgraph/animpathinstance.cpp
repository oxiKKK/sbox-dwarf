
//
// animgraph/animpathinstance.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 11
//

// <01597BC9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathinstance.cpp:13
// function calls: 15
void CAnimPathInstance::CAnimPathInstance(const CAnimMovementUpdater* pMoveUpdater, const CAnimGraphUpdateContextPtr& pContext)
{
	IAnimPath::IAnimPath(); // 17
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
			CAnimGraphUpdateContext* pObj);  // 406
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>& other);  // 17
} /* size: 121, inline expansions: 15 (350 bytes) */

// <01597B98> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathinstance.cpp:13
void CAnimPathInstance::CAnimPathInstance(const CAnimMovementUpdater* pMoveUpdater, const CAnimGraphUpdateContextPtr& pContext)
{
} /* size: 0 */

// <01597AD6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathinstance.cpp:22
// function calls: 3
void CAnimPathInstance::IsEmpty()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 24
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::IsEmpty(); // 38
	CAnimPath::IsEmpty(); // 24
} /* size: 30, inline expansions: 3 (22 bytes) */

// <015979FC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathinstance.cpp:29
// function calls: 3
void CAnimPathInstance::GetWayPointCount()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 31
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 44
	CAnimPath::GetWayPointCount(); // 31
} /* size: 25, inline expansions: 3 (0 bytes) */

// <0159788A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathinstance.cpp:36
// function calls: 5
void CAnimPathInstance::GetWayPointPosition(int index)
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 38
	{
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 50
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::GetAbsoluteIndex(
				int nRelativeIndex);  // 148
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::operator[](
				int index);  // 52
	}
	CAnimPath::GetWayPointPosition(
				int nIndex);  // 38
} /* size: 0, inline expansions: 2 (84 bytes) */

// <01597694> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathinstance.cpp:43
// function calls: 7
void CAnimPathInstance::GetWayPointBoundaryRadius(int index)
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 45
	{
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 61
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::GetAbsoluteIndex(
				int nRelativeIndex);  // 148
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::operator[](
				int index);  // 63
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 61
	}
	CAnimPath::GetWayPointBoundaryRadius(
					int nIndex);  // 59
	CAnimPath::GetWayPointBoundaryRadius(
					int nIndex);  // 45
} /* size: 0, inline expansions: 3 (100 bytes) */

// <015975BA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathinstance.cpp:50
// function calls: 3
void CAnimPathInstance::GetPastWayPointCount()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 52
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count(); // 79
	CAnimPath::GetPastWayPointCount(); // 52
} /* size: 25, inline expansions: 3 (0 bytes) */

// <01597477> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathinstance.cpp:57
// function calls: 4
void CAnimPathInstance::GetPastWayPointPosition(int index)
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 59
	{
	}
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::GetAbsoluteIndex(
			int nRelativeIndex);  // 148
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::operator[](
			int index);  // 85
	CAnimPath::GetPastWayPointPosition(
				int nIndex);  // 59
} /* size: 0, inline expansions: 4 (264 bytes) */

// <01597452> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathinstance.cpp:64
void CAnimPathInstance::GetPastWayPointBoundaryRadius(int index)
{
} /* size: 0 */

// <01597164> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathinstance.cpp:71
// variables: 2
// function calls: 12
void CAnimPathInstance::ClearWayPoints()
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 470
	CAnimMovementUpdater::GetPath(
		CAnimGraphUpdateContext& context);  // 73
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 73
	{
		int i; // 126
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::GetAbsoluteIndex(
				int nRelativeIndex);  // 128
	}
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Clear(); // 183
	{
		int i; // 126
		CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::GetAbsoluteIndex(
				int nRelativeIndex);  // 128
	}
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Clear(); // 184
	CAnimPath::Clear(); // 73
} /* size: 411, inline expansions: 10 (707 bytes) */

// <01596AEC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathinstance.cpp:78
// variables: 2
// function calls: 28
void CAnimPathInstance::SetWayPoints(const CUtlVector<CAnimPathWaypointData, CUtlMemory<CAnimPathWaypointData, int> >& wayPoints)
{
	Vector vCurrentPos; // 80
	float flCurrentBoundaryRadius; // 81
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 135
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 195
	CAnimGraphInstanceData::GetPreviousLocalToWorldTransform(); // 135
	CAnimGraphUpdateContext::GetLocalToWorldTransform(); // 80
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 80
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 80
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 81
	CAnimParamHandle::CAnimParamHandle(); // 81
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 470
	CAnimMovementUpdater::GetPath(
		CAnimGraphUpdateContext& context);  // 83
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 83
	CUtlVectorBase<CAnimPathWaypointData, CUtlMemory<CAnimPathWaypointData, int> >::Count(); // 97
	CUtlMemory<CAnimPathWaypointData, int>::Base(); // 113
	CUtlVectorBase<CAnimPathWaypointData, CUtlMemory<CAnimPathWaypointData, int> >::Base(); // 97
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Clear(); // 183
	CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Clear(); // 184
	CAnimPath::Clear(); // 106
	CAnimPath::SetWayPoints(
			const CAnimPathWaypointData* pNewWayPoints,
			int nNewWaypointCount,
			const Vector& vCurrentPos,
			float flCurrentBoundaryRadius);  // 97
	CAnimPath::SetWayPoints(
			const CUtlVector<CAnimPathWaypointData, CUtlMemory<CAnimPathWaypointData, int> >& newWayPoints,
			const Vector& vCurrentPos,
			float flCurrentBoundaryRadius);  // 83
} /* size: 251, variables: 2, inline expansions: 28 (368 bytes) */

