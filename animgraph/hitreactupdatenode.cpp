
//
// animgraph/hitreactupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//

// <017F5286> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactupdatenode.cpp:12
// variable: 1
// function calls: 24
void CHitReactUpdateNode::CHitReactUpdateNode(CAnimGraphInitContext& initContext)
{
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<HitReactFixedSettings_t>::CPackedHandle(); // 14
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<HitReactInstanceSettings_t>::CPackedHandle(); // 14
	CAnimParamHandle::CAnimParamHandle(); // 14
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CHitReactInstanceData>::CPackedHandle(); // 14
	CAnimParamHandle::CAnimParamHandle(); // 14
	CAnimParamHandle::CAnimParamHandle(); // 14
	CAnimParamHandle::CAnimParamHandle(); // 14
	CAnimParamHandle::CAnimParamHandle(); // 14
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<false>::AddItem<HitReactFixedSettings_t>(
					CPackedHandle<HitReactFixedSettings_t>* handleOut);  // 16
	{
		fltx4 retVal; // 186
		_mm_set_ps(const float  __Z,
				const float  __Y,
				const float  __X,
				const float  __W);  // 187
	}
	Set4Floats<>(float p0,
			float p1,
			float p2,
			float p3);  // 146
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 42
	HitReactImpact_t::HitReactImpact_t(); // 54
	HitReactInstanceSettings_t::HitReactInstanceSettings_t(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<true>::AddItem<HitReactInstanceSettings_t>(
						CPackedHandle<HitReactInstanceSettings_t>* handleOut);  // 17
	CHitReactInstanceData::CHitReactInstanceData(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<true>::AddItem<CHitReactInstanceData>(
					CPackedHandle<CHitReactInstanceData>* handleOut);  // 18
} /* size: 309, inline expansions: 23 (513 bytes) */

// <017F5261> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactupdatenode.cpp:12
void CHitReactUpdateNode::CHitReactUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

// <01868112> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactupdatenode.cpp:22
// variables: 13
// function calls: 36
void CHitReactUpdateNode::Update(CAnimGraphUpdateContext& context)
{
	CAnimParamHandle::IsValid(); // 153
	CAnimParamHandle::IsValid(); // 154
	CAnimParamHandle::IsValid(); // 155
	CAnimParamHandle::IsValid(); // 156
	CAnimParamHandle::IsValid(); // 157
	CHitReactUpdateNode::CheckSettingsValid(); // 24
	{
		HitReactInstanceSettings_t* pOpInstData; // 26
		CHitReactInstanceData* pNodeInstData; // 27
		bool bIsTriggered; // 40
		bool bTriggerParamValue; // 42
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<HitReactInstanceSettings_t>(
							const CPackedHandle<HitReactInstanceSettings_t>& handle);  // 77
		CAnimGraphInstanceData::operator[]<HitReactInstanceSettings_t>(
							const CPackedHandle<HitReactInstanceSettings_t>& handle);  // 59
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		CAnimGraphUpdateContext::operator[]<HitReactInstanceSettings_t>(
							const CPackedHandle<HitReactInstanceSettings_t>& handle);  // 26
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CHitReactInstanceData>(
							const CPackedHandle<CHitReactInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CHitReactInstanceData>(
							const CPackedHandle<CHitReactInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CHitReactInstanceData>(
							const CPackedHandle<CHitReactInstanceData>& handle);  // 27
		{
			int i; // 30
		}
		{
		}
		CAnimVariant::GetValue<bool>(); // 194
		CAnimVariant::GetValue<bool>(); // 42
		{
			float flMinDelay; // 46
			{
				int i; // 47
				{
					float flTimeSinceHit; // 49
				}
			}
		}
		{
			int impactSlotIndex; // 67
			float oldestStartTime; // 69
			{
				int i; // 70
			}
			{
			}
			{
				DefaultValue(void); // 200
			}
			CAnimVariant::GetValue<Vector>(); // 194
			CAnimVariant::GetValue<Vector>(); // 88
			{
				fltx4 retVal; // 186
				_mm_set_ps(const float  __Z,
						const float  __Y,
						const float  __X,
						const float  __W);  // 187
			}
			Set4Floats<>(float p0,
					float p1,
					float p2,
					float p3);  // 177
			VectorAligned::operator=(
					const Vector& src);  // 88
			{
				DefaultValue(void); // 200
			}
			CAnimVariant::GetValue<Vector>(); // 194
			CAnimVariant::GetValue<Vector>(); // 89
			Vector::Normalized(); // 89
			{
				fltx4 retVal; // 186
				_mm_set_ps(const float  __Z,
						const float  __Y,
						const float  __X,
						const float  __W);  // 187
			}
			Set4Floats<>(float p0,
					float p1,
					float p2,
					float p3);  // 177
			VectorAligned::operator=(
					const Vector& src);  // 89
			{
			}
			CAnimVariant::GetValue<int>(); // 194
			CAnimVariant::GetValue<int>(); // 90
			{
			}
			CAnimVariant::GetValue<float>(); // 194
			CAnimVariant::GetValue<float>(); // 91
		}
	}
	CHitReactUpdateNode::Update(
		CAnimGraphUpdateContext& context);  // 22
} /* size: 0, inline expansions: 7 (1294 bytes) */

// <017F517E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactupdatenode.cpp:22
// variables: 13
void CHitReactUpdateNode::Update(CAnimGraphUpdateContext& context)
{
	const char   __FUNCTION__; // 32530
	{
		HitReactInstanceSettings_t* pOpInstData; // 26
		CHitReactInstanceData* pNodeInstData; // 27
		bool bIsTriggered; // 40
		bool bTriggerParamValue; // 42
		{
			int i; // 30
		}
		{
			float flMinDelay; // 46
			{
				int i; // 47
				{
					float flTimeSinceHit; // 49
				}
			}
		}
		{
			int impactSlotIndex; // 67
			float oldestStartTime; // 69
			{
				int i; // 70
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 84
			}
		}
	}
} /* size: 0, variables: 1 */

// <017F4DE1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactupdatenode.cpp:99
// variables: 2
// function calls: 12
void CHitReactUpdateNode::CreatePoseOp(CAnimGraphUpdateContext& context)
{
	CHitReactInstanceData* pInstData; // 101
	PoseHandle hChildPose; // 103
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CHitReactInstanceData>(
						const CPackedHandle<CHitReactInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CHitReactInstanceData>(
						const CPackedHandle<CHitReactInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CHitReactInstanceData>(
						const CPackedHandle<CHitReactInstanceData>& handle);  // 101
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 104
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 106
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<HitReactInstanceSettings_t>::CPackedHandle(
			const CPackedHandle<HitReactInstanceSettings_t>  &);  // 111
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<HitReactFixedSettings_t>::CPackedHandle(
			const CPackedHandle<HitReactFixedSettings_t>  &);  // 111
} /* size: 192, variables: 2, inline expansions: 12 (115 bytes) */

// <017F4A8C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactupdatenode.cpp:115
// variables: 2
// function calls: 11
void CHitReactUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	const char   __FUNCTION__; // 32714
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 117
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 66
	CAnimUpdateNodeBase::GetLastUpdateID(
			const CAnimGraphUpdateContext& context);  // 117
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CHitReactInstanceData>(
						const CPackedHandle<CHitReactInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CHitReactInstanceData>(
						const CPackedHandle<CHitReactInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CHitReactInstanceData>(
						const CPackedHandle<CHitReactInstanceData>& handle);  // 118
} /* size: 0, variables: 1, inline expansions: 11 (176 bytes) */

// <017F4278> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactupdatenode.cpp:122
// variables: 2
// function calls: 30
void CHitReactUpdateNode::Reset(CAnimGraphUpdateContext& context, float flCycle)
{
	{
		HitReactInstanceSettings_t* pOpInstData; // 142
		{
			int i; // 143
		}
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<NodeInfo_t>(
					const CPackedHandle<NodeInfo_t>& handle);  // 77
		CAnimGraphInstanceData::operator[]<NodeInfo_t>(
					const CPackedHandle<NodeInfo_t>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<NodeInfo_t>(
					const CPackedHandle<NodeInfo_t>& handle);  // 54
		CAnimUpdateNodeBase::Reset(
			CAnimGraphUpdateContext& context,
			float flCycle);  // 131
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 133
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 135
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CHitReactInstanceData>(
							const CPackedHandle<CHitReactInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CHitReactInstanceData>(
							const CPackedHandle<CHitReactInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CHitReactInstanceData>(
							const CPackedHandle<CHitReactInstanceData>& handle);  // 139
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<HitReactInstanceSettings_t>(
							const CPackedHandle<HitReactInstanceSettings_t>& handle);  // 77
		CAnimGraphInstanceData::operator[]<HitReactInstanceSettings_t>(
							const CPackedHandle<HitReactInstanceSettings_t>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<HitReactInstanceSettings_t>(
							const CPackedHandle<HitReactInstanceSettings_t>& handle);  // 142
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 60
	CAnimUpdateNodeBase::IsReset(
		const CAnimGraphUpdateContext& context);  // 126
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 66
	CAnimUpdateNodeBase::GetLastUpdateID(
			const CAnimGraphUpdateContext& context);  // 127
} /* size: 355, inline expansions: 11 (254 bytes) */

// <01877313> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactupdatenode.cpp:151
// function calls: 5
void CHitReactUpdateNode::CheckSettingsValid()
{
	CAnimParamHandle::IsValid(); // 153
	CAnimParamHandle::IsValid(); // 154
	CAnimParamHandle::IsValid(); // 155
	CAnimParamHandle::IsValid(); // 156
	CAnimParamHandle::IsValid(); // 157
} /* size: 0, inline expansions: 5 (0 bytes) */

// <017F425F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactupdatenode.cpp:151
void CHitReactUpdateNode::CheckSettingsValid()
{
} /* size: 0 */

