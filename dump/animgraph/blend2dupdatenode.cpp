
//
// animgraph/blend2dupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 31
//

// <01869A63> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:12
void GetBaseMap(void)
{
} /* size: 0 */

// <0185C954> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:12
// variables: 2
datamap_t* DataMapInit<CBlend2DInstanceData>(CBlend2DInstanceData *)
{
	const char* pDataMapInit_className; // 12
	typedescription_t dataDesc; // 12
} /* size: 114, variables: 2 */

// <0185C34C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:19
// variables: 2
// function calls: 24
void CBlend2DUpdateNode::CBlend2DUpdateNode(CAnimGraphInitContext& initContext, int nItemCount, Blend2DMode eMode)
{
	CLeafUpdateNode::CLeafUpdateNode(
			CAnimGraphInitContext& initContext);  // 21
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CBlend2DInstanceData>::CPackedHandle(); // 21
	CRelativeOffset<BlendItem_t>::CRelativeOffset(); // 84
	CRelativeArray<BlendItem_t>::CRelativeArray(); // 21
	CAnimParamHandle::CAnimParamHandle(); // 21
	CAnimParamHandle::CAnimParamHandle(); // 21
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 38
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 25
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 25
	CDampedVector2::CDampedVector2(); // 38
	{
		int i; // 22
	}
	Blend2DWeights_t::Blend2DWeights_t(); // 38
	CBlend2DInstanceData::CBlend2DInstanceData(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<true>::AddItem<CBlend2DInstanceData>(
					CPackedHandle<CBlend2DInstanceData>* handleOut);  // 24
	{
		uint32 i; // 160
		CRelativeOffset<TagSpan_t>::CRelativeOffset(); // 84
		CRelativeArray<TagSpan_t>::CRelativeArray(); // 26
		HSequence::HSequence(); // 26
		Vector2D::Vector2D(); // 26
		BlendItem_t::BlendItem_t(); // 162
	}
	CPackedDataT<false>::AddArray<BlendItem_t>(
				uint32 count,
				CPackedHandle<BlendItem_t>* handleOut);  // 26
	{
	}
	CRelativeOffset<BlendItem_t>::SetOffset(
			const BlendItem_t* targetPtr);  // 20
	CRelativeOffset<BlendItem_t>::operator=(
			const BlendItem_t* targetPtr);  // 115
	CRelativeArray<BlendItem_t>::SetArray(
		const BlendItem_t* targetArray,
		int32 count);  // 26
} /* size: 0, inline expansions: 19 (600 bytes) */

// <0185C30F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:19
void CBlend2DUpdateNode::CBlend2DUpdateNode(CAnimGraphInitContext& initContext, int nItemCount, Blend2DMode eMode)
{
} /* size: 0 */

// <0185BA2F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:30
// variables: 15
// function calls: 23
void CBlend2DUpdateNode::Update(CAnimGraphUpdateContext& context)
{
	CBlend2DInstanceData* pInstData; // 39
	float& cycle; // 43
	float& prevCycle; // 44
	int wrapCount; // 46
	float unClampedCycle; // 47
	float flPlaybackDirection; // 48
	float duration; // 50
	float currentPlaybackSpeed; // 52
	float predictedCycle; // 62
	int nActiveItems; // 84
	{
		float elapsedAnimTime; // 69
		float flCycleStartTime; // 70
	}
	{
		int i; // 85
		{
			int itemIndex; // 87
			HSequence hSequence; // 88
			CRelativeOffset<BlendItem_t>::IsValid(); // 35
			CRelativeOffset<BlendItem_t>::Get(); // 97
			{
			}
			CRelativeArray<BlendItem_t>::operator[](
					int index);  // 88
			HSequence::operator==(
					const HSequence& other);  // 90
			CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
			PackedHandleID::PackedHandleID(
					const PackedHandleID& rhs);  // 260
			CPackedDataBase::operator[]<CBlend2DInstanceData>(
							const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
			CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
							const CPackedHandle<CBlend2DInstanceData>& handle);  // 59
			CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
							const CPackedHandle<CBlend2DInstanceData>& handle);  // 92
			CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
			PackedHandleID::PackedHandleID(
					const PackedHandleID& rhs);  // 260
			CPackedDataBase::operator[]<CBlend2DInstanceData>(
							const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
			CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
							const CPackedHandle<CBlend2DInstanceData>& handle);  // 59
			CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
							const CPackedHandle<CBlend2DInstanceData>& handle);  // 92
			{
			}
			CRelativeOffset<BlendItem_t>::IsValid(); // 35
			CRelativeOffset<BlendItem_t>::Get(); // 97
			CRelativeArray<BlendItem_t>::operator[](
					int index);  // 94
		}
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 39
	CloseEnough(float a,
			float b,
			float epsilon);  // 63
} /* size: 0, variables: 10, inline expansions: 6 (124 bytes) */

// <0185B339> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:100
// variables: 13
// function calls: 19
void CBlend2DUpdateNode::CreatePoseOp(CAnimGraphUpdateContext& context)
{
	CBlend2DInstanceData* pInstData; // 102
	PoseHandle poseHandles; // 103
	const int  kMaxFeet; // 109
	int nActiveItems; // 111
	{
		int i; // 104
	}
	{
		int i; // 112
		{
			int itemIndex; // 114
			const BlendItem_t& currentItem; // 116
			HSequence hSequence; // 118
			float cycle; // 119
			PoseHandle hPose; // 121
			{
			}
			CRelativeOffset<BlendItem_t>::IsValid(); // 35
			CRelativeOffset<BlendItem_t>::Get(); // 97
			CRelativeArray<BlendItem_t>::operator[](
					int index);  // 116
			HSequence::operator==(
					const HSequence& other);  // 125
			CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
			PackedHandleID::PackedHandleID(
					const PackedHandleID& rhs);  // 260
			CPackedDataBase::operator[]<CBlend2DInstanceData>(
							const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
			CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
							const CPackedHandle<CBlend2DInstanceData>& handle);  // 59
			CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
							const CPackedHandle<CBlend2DInstanceData>& handle);  // 127
			CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
			PackedHandleID::PackedHandleID(
					const PackedHandleID& rhs);  // 260
			CPackedDataBase::operator[]<CBlend2DInstanceData>(
							const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
			CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
							const CPackedHandle<CBlend2DInstanceData>& handle);  // 59
			CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
							const CPackedHandle<CBlend2DInstanceData>& handle);  // 127
		}
	}
	{
		int i; // 132
	}
	{
		int i; // 143
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 102
} /* size: 0, variables: 4, inline expansions: 5 (89 bytes) */

// <0185AFE4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:157
// variables: 2
// function calls: 11
void CBlend2DUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	const char   __FUNCTION__; // 32714
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 159
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
			const CAnimGraphUpdateContext& context);  // 159
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 160
} /* size: 0, variables: 1, inline expansions: 11 (176 bytes) */

// <0185AE50> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:164
// function calls: 5
void CBlend2DUpdateNode::GetCycle(CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 166
} /* size: 88, inline expansions: 5 (68 bytes) */

// <0185AA59> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:170
// variables: 7
// function calls: 12
void CBlend2DUpdateNode::GetDuration(CAnimGraphUpdateContext& context)
{
	CBlend2DInstanceData* pInstData; // 172
	int nActiveItems; // 174
	float duration; // 175
	{
		int i; // 176
		{
			int itemIndex; // 178
			float itemWeight; // 179
			HSequence hSequence; // 181
			CRelativeOffset<BlendItem_t>::IsValid(); // 35
			CRelativeOffset<BlendItem_t>::Get(); // 97
			{
			}
			CRelativeArray<BlendItem_t>::operator[](
					int index);  // 181
			HSequence::operator==(
					const HSequence& other);  // 182
			{
			}
			CRelativeOffset<BlendItem_t>::IsValid(); // 35
			CRelativeOffset<BlendItem_t>::Get(); // 97
			CRelativeArray<BlendItem_t>::operator[](
					int index);  // 184
		}
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 172
} /* size: 0, variables: 3, inline expansions: 5 (77 bytes) */

// <0185A3E5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:199
// variables: 8
// function calls: 22
void CBlend2DUpdateNode::GetTotalMovement(CAnimGraphUpdateContext& context)
{
	Blend2DWeights_t blendWeights; // 201
	float moveDist; // 203
	CMotionTransform motion; // 205
	{
		int i; // 207
		{
			const int  itemIndex; // 209
			HSequence hSequence; // 211
			{
				const ISequence* pSequence; // 214
				CMotionTransform sequenceMovement; // 216
				_mm_load_ss(const float* __P); // 21
				_mm_sqrt_ss(__m128 __A); // 21
				_mm_cvtss_f32(__m128 __A); // 21
				FastSqrt(float x); // 1249
				VectorLength(const Vector& v); // 1256
				Vector::Length(); // 219
			}
			{
			}
			CRelativeOffset<BlendItem_t>::IsValid(); // 35
			CRelativeOffset<BlendItem_t>::Get(); // 97
			CRelativeArray<BlendItem_t>::operator[](
					int index);  // 211
			HSequence::operator==(
					const HSequence& other);  // 212
		}
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 201
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 205
	Vector::Normalized(); // 223
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 223
	Vector::operator=(
			const Vector& vOther);  // 223
} /* size: 0, variables: 3, inline expansions: 12 (363 bytes) */

// <01859C19> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:229
// variables: 9
// function calls: 27
void CBlend2DUpdateNode::GetRemainingMovement(CAnimGraphUpdateContext& context, float flCycle)
{
	Blend2DWeights_t blendWeights; // 231
	float moveDist; // 233
	CMotionTransform motion; // 235
	{
		int i; // 237
		{
			const int  itemIndex; // 239
			HSequence hSequence; // 241
			{
				const ISequence* pSequence; // 244
				float flTestCycle; // 246
				CMotionTransform sequenceMovement; // 248
				_mm_load_ss(const float* __P); // 21
				_mm_sqrt_ss(__m128 __A); // 21
				_mm_cvtss_f32(__m128 __A); // 21
				FastSqrt(float x); // 1249
				VectorLength(const Vector& v); // 1256
				Vector::Length(); // 251
				CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
				PackedHandleID::PackedHandleID(
						const PackedHandleID& rhs);  // 260
				CPackedDataBase::operator[]<CBlend2DInstanceData>(
								const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
				CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
								const CPackedHandle<CBlend2DInstanceData>& handle);  // 59
				CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
								const CPackedHandle<CBlend2DInstanceData>& handle);  // 246
			}
			HSequence::operator==(
					const HSequence& other);  // 242
			{
			}
			CRelativeOffset<BlendItem_t>::IsValid(); // 35
			CRelativeOffset<BlendItem_t>::Get(); // 97
			CRelativeArray<BlendItem_t>::operator[](
					int index);  // 241
		}
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 231
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 235
	Vector::Normalized(); // 255
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 255
	Vector::operator=(
			const Vector& vOther);  // 255
} /* size: 0, variables: 3, inline expansions: 12 (374 bytes) */

// <01859142> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:261
// variables: 2
// function calls: 41
void CBlend2DUpdateNode::Reset(CAnimGraphUpdateContext& context, float flCycle)
{
	{
		CBlend2DInstanceData* pInstData; // 270
		Vector2D vTargetPos; // 272
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
			float flCycle);  // 268
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CBlend2DInstanceData>(
						const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
						const CPackedHandle<CBlend2DInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
						const CPackedHandle<CBlend2DInstanceData>& handle);  // 270
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CBlend2DInstanceData>(
						const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
						const CPackedHandle<CBlend2DInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
						const CPackedHandle<CBlend2DInstanceData>& handle);  // 274
		Vector2D::Vector2D(); // 272
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CBlend2DInstanceData>(
						const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
						const CPackedHandle<CBlend2DInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
						const CPackedHandle<CBlend2DInstanceData>& handle);  // 279
		Vector2D::operator=(
				const Vector2D& vOther);  // 279
		Vector2D::operator=(
				const Vector2D& vOther);  // 289
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CBlend2DInstanceData>(
						const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
						const CPackedHandle<CBlend2DInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
						const CPackedHandle<CBlend2DInstanceData>& handle);  // 283
		Vector2D::operator=(
				const Vector2D& vOther);  // 283
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
		const CAnimGraphUpdateContext& context);  // 265
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
			const CAnimGraphUpdateContext& context);  // 266
} /* size: 521, inline expansions: 11 (254 bytes) */

// <01858F97> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:301
// variable: 1
// function calls: 5
void CBlend2DUpdateNode::IsFinished(CAnimGraphUpdateContext& context)
{
	CBlend2DInstanceData* pInstData; // 303
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 303
} /* size: 112, variables: 1, inline expansions: 5 (77 bytes) */

// <01858DD9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:309
// variable: 1
// function calls: 5
void CBlend2DUpdateNode::GetTimeTillFinished(CAnimGraphUpdateContext& context)
{
	CBlend2DInstanceData* pInstData; // 311
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 311
} /* size: 177, variables: 1, inline expansions: 5 (68 bytes) */

// <01858BFC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:324
// variable: 1
// function calls: 5
void CBlend2DUpdateNode::OnSave(const CAnimGraphUpdateContext& context, ISave* pSave)
{
	const CBlend2DInstanceData* pInstData; // 326
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 326
} /* size: 131, variables: 1, inline expansions: 5 (76 bytes) */

// <01858A1F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:331
// variable: 1
// function calls: 5
void CBlend2DUpdateNode::OnRestore(CAnimGraphUpdateContext& context, IRestore* pRestore)
{
	CBlend2DInstanceData* pInstData; // 333
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 333
} /* size: 131, variables: 1, inline expansions: 5 (76 bytes) */

// <01858889> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:338
// function calls: 5
void CBlend2DUpdateNode::IsManualModeEnabled(const CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 340
} /* size: 87, inline expansions: 5 (68 bytes) */

// <018586EA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:344
// function calls: 5
void CBlend2DUpdateNode::SetManualModeEnable(CAnimGraphUpdateContext& context, bool bEnable)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 346
} /* size: 95, inline expansions: 5 (76 bytes) */

// <0185851E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:350
// function calls: 6
void CBlend2DUpdateNode::GetTargetBlendValue(const CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 352
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 352
} /* size: 102, inline expansions: 6 (82 bytes) */

// <0185833D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:356
// function calls: 6
void CBlend2DUpdateNode::SetTargetBlendValue(CAnimGraphUpdateContext& context, const Vector2D& vBlendValue)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 358
	Vector2D::operator=(
			const Vector2D& vOther);  // 358
} /* size: 111, inline expansions: 6 (94 bytes) */

// <01858171> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:362
// function calls: 6
void CBlend2DUpdateNode::GetCurrentBlendValue(const CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 364
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 364
} /* size: 103, inline expansions: 6 (83 bytes) */

// <0185802C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:368
// function calls: 4
void CBlend2DUpdateNode::SetCycle(CAnimGraphUpdateContext& context, float flNewCycle)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 370
} /* size: 98, inline expansions: 4 (81 bytes) */

// <01857EE7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:374
// function calls: 4
void CBlend2DUpdateNode::SetPlaybackRate(CAnimGraphUpdateContext& context, float flPlaybackRate)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 376
} /* size: 98, inline expansions: 4 (81 bytes) */

// <01857D51> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:380
// function calls: 5
void CBlend2DUpdateNode::GetWeights(const CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 382
} /* size: 87, inline expansions: 5 (68 bytes) */

// <01857596> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:386
// variables: 12
// function calls: 25
void CBlend2DUpdateNode::CalculateRootMotion(CAnimGraphUpdateContext& context)
{
	CBlend2DInstanceData* pInstData; // 388
	float moveDist; // 390
	CRootMotion motion; // 392
	int nActiveItems; // 394
	{
		int i; // 395
		{
			const int  itemIndex; // 397
			HSequence hSequence; // 399
			{
				const ISequence* pSequence; // 402
				float flCycle; // 404
				float flPrevCycle; // 405
				const float  flWeight; // 411
				CRootMotion sequenceMotion; // 413
				_mm_load_ss(const float* __P); // 21
				_mm_sqrt_ss(__m128 __A); // 21
				_mm_cvtss_f32(__m128 __A); // 21
				FastSqrt(float x); // 1249
				VectorLength(const Vector& v); // 1256
				Vector::Length(); // 44
				CMotionTransform::Length(); // 416
			}
			{
			}
			CRelativeOffset<BlendItem_t>::IsValid(); // 35
			CRelativeOffset<BlendItem_t>::Get(); // 97
			CRelativeArray<BlendItem_t>::operator[](
					int index);  // 399
			HSequence::operator==(
					const HSequence& other);  // 400
		}
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 388
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 11
	CRootMotion::CRootMotion(
			const CRootMotion  &);  // 392
	Vector::Normalized(); // 420
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 420
	Vector::operator=(
			const Vector& vOther);  // 420
} /* size: 0, variables: 4, inline expansions: 14 (467 bytes) */

// <018564E6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:426
// variables: 14
// function calls: 48
void CBlend2DUpdateNode::CalculateFootMotion(CAnimGraphUpdateContext& context, const CMotionTransform& newLocalToWorld, CStrideStatus& footPoseInfo)
{
	CBlend2DInstanceData* pInstData; // 430
	const int  nActiveItems; // 432
	const float* weights; // 433
	float tmpWeights; // 435
	{
		int i; // 438
	}
	{
		int i; // 445
		{
			float scale; // 449
			{
				int j; // 450
			}
		}
	}
	{
		int i; // 458
		{
			int itemIndex; // 460
			const BlendItem_t& currentItem; // 462
			const ISequence* pSequence; // 464
			{
				int iFoot; // 467
				{
					CFootMotionStatus currentFootStatus; // 469
					Vector::operator=(
							const Vector& vOther);  // 17
					{
					}
					CRotation::operator=(
							const CRotation& rot);  // 17
					CMotionTransform::operator=(
							CMotionTransform &);  // 12
					{
					}
					CRotation::operator=(
							const CRotation& rot);  // 17
					Vector::operator=(
							const Vector& vOther);  // 17
					CMotionTransform::operator=(
							CMotionTransform &);  // 12
					{
					}
					CRotation::operator=(
							const CRotation& rot);  // 17
					Vector::operator=(
							const Vector& vOther);  // 17
					CMotionTransform::operator=(
							CMotionTransform &);  // 12
					Vector::operator=(
							const Vector& vOther);  // 188
					CFootTrajectory::operator=(
							CFootTrajectory &);  // 12
					Vector::operator=(
							const Vector& vOther);  // 188
					CFootTrajectory::operator=(
							CFootTrajectory &);  // 12
					Vector::operator=(
							const Vector& vOther);  // 12
					Vector::operator=(
							const Vector& vOther);  // 12
					Vector::operator=(
							const Vector& vOther);  // 12
					Vector::operator=(
							const Vector& vOther);  // 12
					CFootMotionStatus::operator=(
							CFootMotionStatus &);  // 484
					CCycleBase::CCycleBase(
							float flCycle);  // 125
					CAnimCycle::CAnimCycle(
							float flCycle);  // 474
					CCycleBase::CCycleBase(
							float flCycle);  // 125
					CAnimCycle::CAnimCycle(
							float flCycle);  // 473
					Vector::operator=(
							const Vector& vOther);  // 17
					{
					}
					CRotation::operator=(
							const CRotation& rot);  // 17
					CMotionTransform::operator=(
							const CMotionTransform  &);  // 12
					{
					}
					CRotation::operator=(
							const CRotation& rot);  // 17
					Vector::operator=(
							const Vector& vOther);  // 17
					CMotionTransform::operator=(
							const CMotionTransform  &);  // 12
					{
					}
					CRotation::operator=(
							const CRotation& rot);  // 17
					Vector::operator=(
							const Vector& vOther);  // 17
					CMotionTransform::operator=(
							const CMotionTransform  &);  // 12
					Vector::operator=(
							const Vector& vOther);  // 188
					CFootTrajectory::operator=(
							const CFootTrajectory  &);  // 12
					Vector::operator=(
							const Vector& vOther);  // 188
					CFootTrajectory::operator=(
							const CFootTrajectory  &);  // 12
					Vector::operator=(
							const Vector& vOther);  // 12
					Vector::operator=(
							const Vector& vOther);  // 12
					Vector::operator=(
							const Vector& vOther);  // 12
					Vector::operator=(
							const Vector& vOther);  // 12
					CFootMotionStatus::operator=(
							const CFootMotionStatus  &);  // 480
				}
			}
			{
			}
			CRelativeOffset<BlendItem_t>::IsValid(); // 35
			CRelativeOffset<BlendItem_t>::Get(); // 97
			CRelativeArray<BlendItem_t>::operator[](
					int index);  // 462
		}
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 430
} /* size: 0, variables: 4, inline expansions: 5 (118 bytes) */

// <01856136> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:492
// function calls: 13
void CBlend2DUpdateNode::SetSequence(int index, const Vector2D& vPos, HSequence hSequence, float flDuration)
{
	{
	}
	CRelativeOffset<BlendItem_t>::IsValid(); // 30
	CRelativeOffset<BlendItem_t>::Get(); // 90
	CRelativeArray<BlendItem_t>::operator[](
			int index);  // 494
	Vector2D::operator=(
			const Vector2D& vOther);  // 494
	{
	}
	CRelativeOffset<BlendItem_t>::IsValid(); // 30
	CRelativeOffset<BlendItem_t>::Get(); // 90
	CRelativeArray<BlendItem_t>::operator[](
			int index);  // 495
	{
	}
	CRelativeOffset<BlendItem_t>::IsValid(); // 30
	CRelativeOffset<BlendItem_t>::Get(); // 90
	CRelativeArray<BlendItem_t>::operator[](
			int index);  // 496
	{
	}
	CRelativeOffset<BlendItem_t>::IsValid(); // 30
	CRelativeOffset<BlendItem_t>::Get(); // 90
	CRelativeArray<BlendItem_t>::operator[](
			int index);  // 498
} /* size: 0, inline expansions: 13 (805 bytes) */

// <0185592C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:502
// variables: 2
// function calls: 28
void CBlend2DUpdateNode::UpdateWeights(CAnimGraphUpdateContext& context)
{
	Vector2D vTargetPos; // 504
	CDampedVector2& dampedValue; // 518
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 506
	Vector2D::Vector2D(); // 504
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 511
	Vector2D::operator=(
			const Vector2D& vOther);  // 511
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 518
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 522
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CBlend2DInstanceData>(
					const CPackedHandle<CBlend2DInstanceData>& handle);  // 515
	Vector2D::operator=(
			const Vector2D& vOther);  // 515
} /* size: 406, variables: 2, inline expansions: 28 (375 bytes) */

// <0185570D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:526
// variables: 11
// function calls: 2
void CBlend2DUpdateNode::CalcBlendWeights(CAnimGraphUpdateContext& context, const Vector2D& vTargetPos)
{
	Blend2DWeights_t results; // 528
	float sum; // 581
	{
		int i; // 531
		{
			float flInfluence; // 533
			{
				int resultIndex; // 546
				{
					int minIndex; // 555
					float minValue; // 556
					{
						int iEntry; // 557
					}
				}
			}
		}
		CRelativeArray<BlendItem_t>::Count(); // 531
	}
	{
		int iEntry; // 582
	}
	{
		int iEntry; // 589
	}
	{
		int i; // 22
	}
	Blend2DWeights_t::Blend2DWeights_t(); // 528
} /* size: 545, variables: 2, inline expansions: 1 (54 bytes) */

// <01855298> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:606
// variables: 7
// function calls: 15
void CBlend2DUpdateNode::CalcInfluenceGeneral(const Vector2D& vTargetPos, int nItemIndex)
{
	float flInfluence; // 608
	const Vector2D  vItemPos; // 610
	Vector2D vItemToTarget; // 611
	{
		int i; // 613
		{
			Vector2D vec; // 617
			float flSqrdLength; // 619
			float flTestInfluence; // 628
			Vector2D::Vector2D(); // 694
			Vector2DSubtract(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 695
			Vector2D::operator-(
					const Vector2D& v);  // 617
			Vector2D::LengthSqr(); // 619
			DotProduct2D(const Vector2D& a,
					const Vector2D& b);  // 484
			Vector2D::Dot(
				const Vector2D& vOther);  // 574
			DotProduct(const Vector2D& lhs,
					const Vector2D& rhs);  // 628
		}
		CRelativeArray<BlendItem_t>::Count(); // 613
	}
	{
	}
	CRelativeOffset<BlendItem_t>::IsValid(); // 35
	CRelativeOffset<BlendItem_t>::Get(); // 97
	CRelativeArray<BlendItem_t>::operator[](
			int index);  // 610
	Vector2DSubtract(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 695
	Vector2D::Vector2D(); // 694
	Vector2D::operator-(
			const Vector2D& v);  // 611
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 610
} /* size: 0, variables: 3, inline expansions: 7 (239 bytes) */

// <01854706> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:637
// variables: 16
// function calls: 47
void CBlend2DUpdateNode::CalcInfluenceDirectional(const Vector2D& vTargetPos, int nItemIndex)
{
	const float  flAlpha; // 639
	float flInfluence; // 640
	const Vector2D  vItemPos; // 642
	float flItemPosLength; // 643
	float flTargetLength; // 645
	{
		int i; // 648
		{
			Vector2D vOtherItemPos; // 652
			float flOtherItemPosLength; // 653
			float flDenominator; // 655
			{
				Vector2D vec1; // 659
				Vector2D vec2; // 663
				float flSqrdLength; // 667
				float flTestInfluence; // 676
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
					vec_t Z);  // 30
				VectorAligned::VectorAligned(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 661
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
					vec_t Z);  // 30
				VectorAligned::VectorAligned(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 661
				Vector2D::Vector2D(); // 659
				Vector2D::Vector2D(); // 663
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
					vec_t Z);  // 30
				VectorAligned::VectorAligned(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 665
				VectorAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 30
				VectorAligned::VectorAligned(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 665
				Vector2D::LengthSqr(); // 667
				DotProduct2D(const Vector2D& a,
						const Vector2D& b);  // 484
				Vector2D::Dot(
					const Vector2D& vOther);  // 574
				DotProduct(const Vector2D& lhs,
						const Vector2D& rhs);  // 676
			}
			CRelativeOffset<BlendItem_t>::IsValid(); // 35
			CRelativeOffset<BlendItem_t>::Get(); // 97
			CRelativeArray<BlendItem_t>::operator[](
					int index);  // 652
			Vector2D::Vector2D(
				const Vector2D& vOther);  // 652
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 498
			Vector2DLength(const Vector2D& v); // 554
			Vector2D::Length(); // 653
		}
		CRelativeArray<BlendItem_t>::Count(); // 648
	}
	{
	}
	CRelativeOffset<BlendItem_t>::IsValid(); // 35
	CRelativeOffset<BlendItem_t>::Get(); // 97
	CRelativeArray<BlendItem_t>::operator[](
			int index);  // 642
	_mm_cvtss_f32(__m128 __A); // 21
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	FastSqrt(float x); // 498
	Vector2DLength(const Vector2D& v); // 554
	Vector2D::Length(); // 645
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 642
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 498
	Vector2DLength(const Vector2D& v); // 554
	Vector2D::Length(); // 643
} /* size: 0, variables: 5, inline expansions: 16 (484 bytes) */

