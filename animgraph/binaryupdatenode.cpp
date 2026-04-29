
//
// animgraph/binaryupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 14
//

// <0185E569> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/binaryupdatenode.cpp:9
// function calls: 2
void CBinaryUpdateNode::CBinaryUpdateNode(CAnimGraphInitContext& initContext)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::CRelativeOffset(); // 10
	CRelativeOffset<const CAnimUpdateNodeBase>::CRelativeOffset(); // 10
} /* size: 68, inline expansions: 2 (8 bytes) */

// <0185E544> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/binaryupdatenode.cpp:9
void CBinaryUpdateNode::CBinaryUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

// <0185E516> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/binaryupdatenode.cpp:16
void CBinaryUpdateNode::GetChildCount()
{
} /* size: 10 */

// <0186644A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/binaryupdatenode.cpp:22
// function calls: 5
void CBinaryUpdateNode::GetChild(int index)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 26
	CBinaryUpdateNode::GetChild(
		int index);  // 22
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 27
} /* size: 72, inline expansions: 5 (88 bytes) */

// <0185E4F1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/binaryupdatenode.cpp:22
void CBinaryUpdateNode::GetChild(int index)
{
} /* size: 0 */

// <0185E4A5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/binaryupdatenode.cpp:33
void CBinaryUpdateNode::IsChildActive(CAnimGraphUpdateContext& context, int index)
{
} /* size: 10 */

// <0185E459> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/binaryupdatenode.cpp:39
void CBinaryUpdateNode::IsChildWaning(CAnimGraphUpdateContext& context, int index)
{
} /* size: 7 */

// <0185DC88> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/binaryupdatenode.cpp:45
// variables: 7
// function calls: 28
void CBinaryUpdateNode::EnqueueChildren(CAnimGraphUpdateContext& context)
{
	float flChild1Speed; // 47
	float flChild2Speed; // 48
	{
		float targetCycle; // 52
		{
			float duration; // 63
			float cycle; // 64
			int wrapCount; // 65
			float unClampedCycle; // 66
		}
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 53
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 57
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 57
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<NodeInfo_t>(
					const CPackedHandle<NodeInfo_t>& handle);  // 77
		CAnimGraphInstanceData::operator[]<NodeInfo_t>(
					const CPackedHandle<NodeInfo_t>& handle);  // 60
		CAnimGraphUpdateContext::operator[]<NodeInfo_t>(
					const CPackedHandle<NodeInfo_t>& handle);  // 78
		CAnimUpdateNodeBase::IsPostUpdatePending(
					const CAnimGraphUpdateContext& context);  // 57
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 59
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 53
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<NodeInfo_t>(
					const CPackedHandle<NodeInfo_t>& handle);  // 77
		CAnimGraphInstanceData::operator[]<NodeInfo_t>(
					const CPackedHandle<NodeInfo_t>& handle);  // 60
		CAnimGraphUpdateContext::operator[]<NodeInfo_t>(
					const CPackedHandle<NodeInfo_t>& handle);  // 78
		CAnimUpdateNodeBase::IsPostUpdatePending(
					const CAnimGraphUpdateContext& context);  // 53
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 55
	}
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 74
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 79
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 76
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 81
} /* size: 0, variables: 2, inline expansions: 4 (35 bytes) */

// <0185D95E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/binaryupdatenode.cpp:86
// variables: 5
// function calls: 12
void CBinaryUpdateNode::GetCycle(CAnimGraphUpdateContext& context)
{
	float flCycle; // 88
	const char   __FUNCTION__; // 32579
	{
		float flCycle1; // 109
		float flCycle2; // 110
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 112
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 114
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 117
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 119
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 127
	}
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 93
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 95
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 100
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 102
} /* size: 0, variables: 2, inline expansions: 6 (28 bytes) */

// <0185D634> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/binaryupdatenode.cpp:135
// variables: 5
// function calls: 12
void CBinaryUpdateNode::GetDuration(CAnimGraphUpdateContext& context)
{
	float flDuration; // 137
	const char   __FUNCTION__; // 32660
	{
		float flChild1Time; // 157
		float flChild2Time; // 158
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 160
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 162
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 165
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 167
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 175
	}
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 142
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 144
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 149
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 151
} /* size: 0, variables: 2, inline expansions: 6 (28 bytes) */

// <0185D2EC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/binaryupdatenode.cpp:183
// function calls: 12
void CBinaryUpdateNode::Reset(CAnimGraphUpdateContext& context, float flCycle)
{
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
		float flCycle);  // 185
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 187
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 189
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 192
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 194
} /* size: 248, inline expansions: 12 (155 bytes) */

// <0185CFA4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/binaryupdatenode.cpp:199
// variables: 5
// function calls: 12
void CBinaryUpdateNode::IsFinished(CAnimGraphUpdateContext& context)
{
	bool bFinished; // 201
	const char   __FUNCTION__; // 32633
	{
		bool bChild1Finished; // 221
		bool bChild2Finished; // 222
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 224
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 226
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 229
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 231
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 239
	}
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 206
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 208
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 213
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 215
} /* size: 0, variables: 2, inline expansions: 6 (28 bytes) */

// <0185CC72> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/binaryupdatenode.cpp:247
// variables: 5
// function calls: 12
void CBinaryUpdateNode::GetTimeTillFinished(CAnimGraphUpdateContext& context)
{
	float flRemainingTime; // 249
	const char   __FUNCTION__; // 32866
	{
		float flChild1Time; // 269
		float flChild2Time; // 270
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 272
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 277
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 279
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 274
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 290
	}
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 254
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 261
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 263
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 256
} /* size: 0, variables: 2, inline expansions: 6 (28 bytes) */

// <0185CA54> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/binaryupdatenode.cpp:298
// variables: 5
// function calls: 6
void CBinaryUpdateNode::CalculatePlaybackSpeed(CAnimGraphUpdateContext& context, const CRelativeOffset<const CAnimUpdateNodeBase>& pChild, float targetCycle)
{
	float childTimeScale; // 300
	{
		float childDuration; // 303
		float childCycle; // 304
		float cycleDelta; // 306
		float adjustedTimeStep; // 318
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 303
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 304
	}
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 301
} /* size: 0, variables: 1, inline expansions: 1 (3 bytes) */

