
//
// animgraph/directplaybackupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 26
//

// <01833EFC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:20
void GetBaseMap(void)
{
} /* size: 0 */

// <01833E38> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:20
// variables: 2
datamap_t* DataMapInit<SequenceData>(SequenceData *)
{
	const char* pDataMapInit_className; // 20
	typedescription_t dataDesc; // 20
} /* size: 124, variables: 2 */

// <01833D70> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:28
// variables: 2
datamap_t* DataMapInit<CDirectPlaybackInstanceData>(CDirectPlaybackInstanceData *)
{
	const char* pDataMapInit_className; // 28
	typedescription_t dataDesc; // 28
} /* size: 197, variables: 2 */

// <01833B68> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:43
// variables: 4
// function calls: 5
void CDirectPlaybackUpdateNode::CDirectPlaybackUpdateNode(CAnimGraphInitContext& initContext, bool bFinishEarly, bool bResetOnFinish, bool bStopSequenceOnFinish)
{
	{
		CDirectPlaybackInstanceData* pData; // 49
		{
			int i; // 50
		}
	}
	{
		CDirectPlaybackInstanceData* pData; // 49
		CDirectPlaybackInstanceData::CDirectPlaybackInstanceData(); // 123
		PackedHandleID::operator=(
				uint32 id);  // 127
		CPackedDataT<true>::AddItem<CDirectPlaybackInstanceData>(
							CPackedHandle<CDirectPlaybackInstanceData>* handleOut);  // 49
		{
			int i; // 50
		}
	}
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CDirectPlaybackInstanceData>::CPackedHandle(); // 47
} /* size: 258, inline expansions: 2 (14 bytes) */

// <01833B05> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:43
// variables: 2
void CDirectPlaybackUpdateNode::CDirectPlaybackUpdateNode(CAnimGraphInitContext& initContext, bool bFinishEarly, bool bResetOnFinish, bool bStopSequenceOnFinish)
{
	{
		CDirectPlaybackInstanceData* pData; // 49
		{
			int i; // 50
		}
	}
} /* size: 0 */

// <01832C2C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:66
// variables: 19
// function calls: 45
void CDirectPlaybackUpdateNode::Update(CAnimGraphUpdateContext& context)
{
	const int  currentSequenceIndex; // 68
	float* pWeights; // 69
	int wrapCount; // 71
	float unClampedCycle; // 72
	float blendTime; // 76
	const float  sequenceZeroTime; // 82
	float elapsedTime; // 83
	float flBlendCycle; // 85
	float newWeight; // 87
	float sumWeights; // 90
	{
		int i; // 91
	}
	{
		uint32 i; // 103
	}
	{
		float weightScale; // 118
		{
			int i; // 121
		}
	}
	{
		int i; // 131
		{
			SequenceData& sequenceData; // 135
			bool bLoop; // 137
			float flDuration; // 143
			float flPlaybackDirection; // 148
			CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
			PackedHandleID::PackedHandleID(
					const PackedHandleID& rhs);  // 260
			CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
								const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
			CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
								const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
			CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
								const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 135
			HSequence::operator==(
					const HSequence& other);  // 138
		}
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 68
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 69
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 76
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 82
	SimpleSpline(float value); // 87
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 166
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 166
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 168
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 169
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 79
} /* size: 1197, variables: 10, inline expansions: 39 (612 bytes) */

// <01867DDA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:174
// variables: 2
// function calls: 11
void CDirectPlaybackUpdateNode::IsChildActive(CAnimGraphUpdateContext& context, int index)
{
	{
		const int  currentSequenceIndex; // 178
		const float* pWeights; // 179
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 178
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 179
	}
	CDirectPlaybackUpdateNode::IsChildActive(
			CAnimGraphUpdateContext& context,
			int index);  // 174
} /* size: 178, inline expansions: 1 (121 bytes) */

// <01832BE1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:174
// variables: 2
void CDirectPlaybackUpdateNode::IsChildActive(CAnimGraphUpdateContext& context, int index)
{
	{
		const int  currentSequenceIndex; // 178
		const float* pWeights; // 179
	}
} /* size: 0 */

// <01867BD7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:189
// variable: 1
// function calls: 6
void CDirectPlaybackUpdateNode::IsChildWaning(CAnimGraphUpdateContext& context, int index)
{
	{
		const int  currentSequenceIndex; // 193
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 193
	}
	CDirectPlaybackUpdateNode::IsChildWaning(
			CAnimGraphUpdateContext& context,
			int index);  // 189
} /* size: 99, inline expansions: 1 (42 bytes) */

// <01832BA2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:189
// variable: 1
void CDirectPlaybackUpdateNode::IsChildWaning(CAnimGraphUpdateContext& context, int index)
{
	{
		const int  currentSequenceIndex; // 193
	}
} /* size: 0 */

// <01832839> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:202
// variables: 2
// function calls: 12
void CDirectPlaybackUpdateNode::EnqueueChildren(CAnimGraphUpdateContext& context)
{
	int currentSequenceIndex; // 204
	float* pWeights; // 205
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 204
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 205
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 208
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 210
} /* size: 217, variables: 2, inline expansions: 12 (146 bytes) */

// <01832182> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:215
// variables: 13
// function calls: 19
void CDirectPlaybackUpdateNode::CreatePoseOp(CAnimGraphUpdateContext& context)
{
	CDirectPlaybackInstanceData* pInstData; // 217
	const char   __FUNCTION__; // 32687
	const float* pWeights; // 278
	{
		PoseHandle pPoseHandles; // 223
		float pPoseWeights; // 224
		const float* pWeights; // 226
		int poseCount; // 228
		{
			int i; // 229
			{
				const SequenceData& sequenceData; // 245
			}
			HSequence::operator==(
					const HSequence& other);  // 243
			CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 238
			CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
			CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 240
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 253
		}
		{
			int childOpIndex; // 259
		}
	}
	{
		int i; // 279
		{
			SequenceData& sequenceData; // 283
			CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
			PackedHandleID::PackedHandleID(
					const PackedHandleID& rhs);  // 260
			CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
								const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
			CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
								const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
			CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
								const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 283
		}
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 217
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 278
} /* size: 0, variables: 3, inline expansions: 10 (177 bytes) */

// <01831F4A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:290
// variable: 1
// function calls: 8
void CDirectPlaybackUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	PoseHandle hPose; // 292
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 292
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 293
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 295
} /* size: 149, variables: 1, inline expansions: 8 (82 bytes) */

// <01831D6D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:302
// variable: 1
// function calls: 5
void CDirectPlaybackUpdateNode::OnSave(const CAnimGraphUpdateContext& context, ISave* pSave)
{
	const CDirectPlaybackInstanceData* pInstData; // 304
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 304
} /* size: 131, variables: 1, inline expansions: 5 (76 bytes) */

// <01831B90> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:309
// variable: 1
// function calls: 5
void CDirectPlaybackUpdateNode::OnRestore(CAnimGraphUpdateContext& context, IRestore* pRestore)
{
	CDirectPlaybackInstanceData* pInstData; // 311
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 311
} /* size: 131, variables: 1, inline expansions: 5 (76 bytes) */

// <0182F33F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:316
// variables: 67
// function calls: 164
void CDirectPlaybackUpdateNode::CalculateRootMotion(CAnimGraphUpdateContext& context)
{
	const CDirectPlaybackInstanceData* pInstData; // 318
	CRootMotion motion; // 320
	{
		int currentIndex; // 331
		{
			float flCurrentHeading; // 336
			Vector vPositionDelta; // 339
			float flRotationDelta; // 340
			float flDeltaScale; // 344
			{
				fltx4 v1_yzxx; // 3340
				fltx4 v2_zxyy; // 3342
				fltx4 v1_zxyy; // 3344
				fltx4 v2_yzxx; // 3346
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3341
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3345
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3343
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3347
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
			}
			CrossProduct3SIMD<>(const fltx4& v1,
						const fltx4& v2);  // 310
			{
				fltx4 retVal; // 1352
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1353
			}
			SplatWSIMD<>(const fltx4& a); // 313
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 311
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1684
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1684
			MaddSIMD<>(const fltx4& a,
					const fltx4& b,
					const fltx4& c);  // 313
			{
				fltx4 v1_yzxx; // 3340
				fltx4 v2_zxyy; // 3342
				fltx4 v1_zxyy; // 3344
				fltx4 v2_yzxx; // 3346
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3343
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3347
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
			}
			CrossProduct3SIMD<>(const fltx4& v1,
						const fltx4& v2);  // 315
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 316
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 318
			QuaternionAligned::operator*(
					const VectorAligned& v);  // 435
			QuaternionAligned::GetForward(); // 391
			CTransform::GetForward(); // 336
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 336
			VectorAligned::operator fltx4(); // 71
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 339
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 339
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 339
			Clamp<float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 344
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 347
			Vector::operator=(
					const Vector& vOther);  // 347
			{
			}
			{
			}
			CRotation::CRotation(
					angle_t angleDegrees);  // 23
			CRotation::CRotation(
					angle_t angleDegrees);  // 348
			{
			}
			CRotation::operator=(
					const CRotation& rot);  // 348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 1797
			NegSIMD<>(const fltx4& a); // 422
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<27>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<27, (ESIMDLevel)20>(const fltx4& a,
							const fltx4& b); // 2928
			ReverseSIMD<>(const fltx4& v); // 421
			QuaternionAligned::QuaternionAligned(
						fltx4 vec);  // 423
			QuaternionAligned::Conjugate(); // 448
			QuaternionAligned::operator fltx4(); // 408
			{
				fltx4 fl4Product; // 1725
				fltx4 fl4YXWZ; // 1727
				fltx4 fl4UUVV; // 1729
				fltx4 fl4VVUU; // 1731
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 1725
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1728
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1730
				{
					fltx4 retVal; // 373
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 374
				}
				RotateLeft2<>(const fltx4& a); // 1732
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1733
			}
			Dot4SIMD<>(const fltx4& a,
					const fltx4& b);  // 405
			{
				fltx4 retVal; // 2350
				_mm_sqrt_ps(__m128 __A); // 2351
			}
			SqrtSIMD<>(const fltx4& a); // 406
			{
				fltx4 retVal; // 1851
				_mm_cmpeq_ps(__m128 __A,
						__m128 __B);  // 1852
			}
			CmpEqSIMD<>(const fltx4& a,
					const fltx4& b);  // 407
			{
				fltx4 retVal; // 1662
				_mm_div_ps(__m128 __A,
						__m128 __B);  // 1663
			}
			DivSIMD<>(const fltx4& a,
					const fltx4& b);  // 408
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 718
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 719
			}
			AndSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			MaskedAssign<>(const fltx4& ReplacementMask,
					const fltx4& a,
					const fltx4& b);  // 408
			QuaternionAligned::QuaternionAligned(
						fltx4 vec);  // 408
			QuaternionAligned::Normalized(); // 448
			{
				fltx4 v1_yzxx; // 3340
				fltx4 v2_zxyy; // 3342
				fltx4 v1_zxyy; // 3344
				fltx4 v2_yzxx; // 3346
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3347
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3343
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3341
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3345
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
			}
			CrossProduct3SIMD<>(const fltx4& v1,
						const fltx4& v2);  // 310
			{
				fltx4 retVal; // 1352
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1353
			}
			SplatWSIMD<>(const fltx4& a); // 313
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 311
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1684
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1684
			MaddSIMD<>(const fltx4& a,
					const fltx4& b,
					const fltx4& c);  // 313
			{
				fltx4 v1_yzxx; // 3340
				fltx4 v2_zxyy; // 3342
				fltx4 v1_zxyy; // 3344
				fltx4 v2_yzxx; // 3346
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3343
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3347
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
			}
			CrossProduct3SIMD<>(const fltx4& v1,
						const fltx4& v2);  // 315
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 316
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 318
			QuaternionAligned::operator*(
					const VectorAligned& v);  // 448
			CTransform::RotateVectorByInverse(
						const VectorAligned& v0);  // 87
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
					const Vector& rhs);  // 87
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 42
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 42
			VectorAligned::AsVector(); // 87
			CTransform::RotateVectorByInverse(
						const Vector& v0);  // 356
			Vector::operator=(
					const Vector& vOther);  // 356
			VectorDivide(const Vector& a,
					vec_t b,
					Vector& c);  // 1465
			Vector::Vector(); // 1464
			Vector::operator/(
					float fl);  // 352
			Vector::operator=(
					const Vector& vOther);  // 352
		}
		{
			const SequenceData& sequenceData; // 360
			float flCycle; // 362
			float flPrevCycle; // 363
			const ISequence* pSequence; // 370
			{
			}
			CRotation::operator=(
					const CRotation& rot);  // 17
			Vector::operator=(
					const Vector& vOther);  // 17
			CMotionTransform::operator=(
					CMotionTransform &);  // 11
			CRootMotion::operator=(
					CRootMotion &);  // 371
		}
		HSequence::operator==(
				const HSequence& other);  // 358
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 318
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
			const CRootMotion  &);  // 320
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 324
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 326
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 11
	CRootMotion::operator=(
			CRootMotion &);  // 326
} /* size: 0, variables: 2, inline expansions: 16 (526 bytes) */

// <0182DB5E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:379
// variables: 34
// function calls: 86
void CDirectPlaybackUpdateNode::CalculateFootMotion(CAnimGraphUpdateContext& context, const CMotionTransform& newLocalToWorld, CStrideStatus& footPoseInfo)
{
	const CDirectPlaybackInstanceData* pInstData; // 381
	int currentIndex; // 383
	float flPrevTime; // 436
	float flNextTIme; // 437
	{
		const SequenceData& sequenceData; // 396
		float flCycle; // 398
		float flPrevCycle; // 399
		const ISequence* pSequence; // 401
		{
			bool bLoop; // 404
			{
				int iFoot; // 406
				CCycleBase::CCycleBase(
						float flCycle);  // 125
				CAnimCycle::CAnimCycle(
						float flCycle);  // 413
				CCycleBase::CCycleBase(
						float flCycle);  // 125
				CAnimCycle::CAnimCycle(
						float flCycle);  // 412
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
						CFootMotionStatus &);  // 415
			}
		}
	}
	{
		Vector vPositionDelta; // 423
		float flCurrentHeading; // 425
		float flRotationDelta; // 426
		{
			int iFoot; // 428
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 145
			{
			}
			CRotation::operator+=(
					angle_t s);  // 431
			Vector::operator+=(
					const Vector& v);  // 430
		}
		VectorAligned::operator fltx4(); // 71
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 423
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 423
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 423
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3341
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3345
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3343
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3347
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 310
		{
			fltx4 retVal; // 1352
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1353
		}
		SplatWSIMD<>(const fltx4& a); // 313
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 311
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		MaddSIMD<>(const fltx4& a,
				const fltx4& b,
				const fltx4& c);  // 313
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3343
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3347
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 315
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 316
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 318
		QuaternionAligned::operator*(
				const VectorAligned& v);  // 435
		QuaternionAligned::GetForward(); // 391
		CTransform::GetForward(); // 425
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 425
	}
	{
		int iFoot; // 440
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 381
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 387
	HSequence::operator==(
			const HSequence& other);  // 394
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 389
} /* size: 0, variables: 4, inline expansions: 9 (149 bytes) */

// <0182DAA5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:448
// function calls: 2
void CDirectPlaybackUpdateNode::SetChild(const CAnimUpdateNodeBase* childNode)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::SetOffset(
			const CAnimUpdateNodeBase* targetPtr);  // 20
	CRelativeOffset<const CAnimUpdateNodeBase>::operator=(
			const CAnimUpdateNodeBase* targetPtr);  // 450
} /* size: 26, inline expansions: 2 (42 bytes) */

// <0182CBD6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:454
// variables: 5
// function calls: 55
void CDirectPlaybackUpdateNode::PlaySequence(CAnimGraphUpdateContext& context, HSequence sequence)
{
	{
		float* pWeights; // 477
		float minWeight; // 480
		int slotIndex; // 481
		SequenceData& sequenceData; // 492
		{
			int i; // 483
		}
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 477
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 492
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 497
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 498
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 499
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 500
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 456
	HSequence::GetRaw(); // 456
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 462
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 473
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 464
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 469
} /* size: 705, inline expansions: 26 (384 bytes) */

// <0182C983> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:505
// variable: 1
// function calls: 6
void CDirectPlaybackUpdateNode::PlaySequence(CAnimGraphUpdateContext& context, HSequence sequence, const Vector& vTargetPos, float flFacingHeading, float flInterpTime)
{
	CDirectPlaybackInstanceData* pInstanceData; // 509
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 509
	Vector::operator=(
			const Vector& vOther);  // 510
} /* size: 179, variables: 1, inline expansions: 6 (110 bytes) */

// <0182C70A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:516
// variable: 1
// function calls: 9
void CDirectPlaybackUpdateNode::SetSequenceStartTime(CAnimGraphUpdateContext& context, float flStartTime)
{
	int currentIndex; // 519
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 519
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 522
} /* size: 153, variables: 1, inline expansions: 9 (165 bytes) */

// <0182C3FC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:527
// variables: 3
// function calls: 10
void CDirectPlaybackUpdateNode::GetSequenceCycle(const CAnimGraphUpdateContext& context)
{
	float flCycle; // 529
	int currentIndex; // 531
	{
		const SequenceData& sequenceData; // 534
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 60
		CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 534
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 531
} /* size: 166, variables: 2, inline expansions: 5 (88 bytes) */

// <0182C103> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:542
// variables: 2
// function calls: 10
void CDirectPlaybackUpdateNode::GetCurrentSequence(const CAnimGraphUpdateContext& context)
{
	int currentIndex; // 544
	{
		const SequenceData& sequenceData; // 551
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 60
		CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 551
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 544
} /* size: 164, variables: 1, inline expansions: 5 (76 bytes) */

// <0182BC1B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:557
// variables: 5
// function calls: 16
void CDirectPlaybackUpdateNode::IsSequenceFinished(const CAnimGraphUpdateContext& context)
{
	int currentSequenceIndex; // 559
	{
		const SequenceData& sequenceData; // 562
		float flFinishCycle; // 564
		{
			float flDuration; // 570
			{
				float flFadeOutTime; // 573
				CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
				PackedHandleID::PackedHandleID(
						const PackedHandleID& rhs);  // 260
				CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
									const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
				CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
									const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 60
				CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
									const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 573
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 577
			}
		}
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 60
		CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
							const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 562
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 559
} /* size: 413, variables: 1, inline expansions: 5 (68 bytes) */

// <0182BB5E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:594
// function call: 1
void CDirectPlaybackUpdateNode::OnSequenceChanged(CAnimGraphUpdateContext& context, int32 newSequence)
{
	HSequence::HSequence(
			int32 value);  // 596
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0182BA19> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:600
// function calls: 4
void CDirectPlaybackUpdateNode::OnSequenceTimeChanged(CAnimGraphUpdateContext& context, float newStartTime)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectPlaybackInstanceData>(
						const CPackedHandle<CDirectPlaybackInstanceData>& handle);  // 602
} /* size: 0, inline expansions: 4 (0 bytes) */

