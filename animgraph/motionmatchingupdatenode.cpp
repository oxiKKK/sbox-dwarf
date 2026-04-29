
//
// animgraph/motionmatchingupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 74
//

// <0196DB1E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:18
void GetBaseMap(void)
{
} /* size: 0 */

// <0196DA60> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:18
// variables: 2
datamap_t* DataMapInit<ClipIndex>(ClipIndex *)
{
	const char* pDataMapInit_className; // 18
	typedescription_t dataDesc; // 18
} /* size: 114, variables: 2 */

// <0196D9A8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:23
// variables: 2
datamap_t* DataMapInit<ClipSegment>(ClipSegment *)
{
	const char* pDataMapInit_className; // 23
	typedescription_t dataDesc; // 23
} /* size: 154, variables: 2 */

// <0196D8F0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:33
// variables: 2
datamap_t* DataMapInit<MotionMatchingInstanceData>(MotionMatchingInstanceData *)
{
	const char* pDataMapInit_className; // 33
	typedescription_t dataDesc; // 33
} /* size: 124, variables: 2 */

// <0196D65B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:41
// variables: 2
// function calls: 9
CFootCycle CalcTransitionCycle(float flBlendValue, CFootCycle oldCycle, CFootCycle startCycle, CFootCycle currentCycle)
{
	CFootCycle cycleOffset; // 43
	CFootCycle newCycle; // 45
	CCycleBase::CCycleBase(
			float flCycle);  // 126
	CFootCycle::CFootCycle(
			float flCycle);  // 126
	CFootCycle::operator-(
			const CFootCycle& rhs);  // 43
	CCycleBase::CCycleBase(
			float flCycle);  // 126
	CFootCycle::CFootCycle(
			float flCycle);  // 126
	CFootCycle::operator*(
			float flValue);  // 45
	CCycleBase::CCycleBase(
			float flCycle);  // 126
	CFootCycle::CFootCycle(
			float flCycle);  // 126
	CFootCycle::operator+(
			const CFootCycle& rhs);  // 45
} /* size: 0, variables: 2, inline expansions: 9 (0 bytes) */

// <0197662D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:56
// function call: 1
void ClipSegment::GetClipIndex()
{
	ClipIndex::ClipIndex(
			uint16 nGroupIndex,
			uint16 nClipIndex);  // 58
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0196D63F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:56
void ClipSegment::GetClipIndex()
{
} /* size: 0 */

// <0197669A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:62
void ClipSegment::SetClipIndex(ClipIndex index)
{
} /* size: 0 */

// <0196D32B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:72
// function calls: 10
void MotionMatchingInstanceData::MotionMatchingInstanceData(CSaveablePackedData& packedData, int nFootCount)
{
	ClipIndex::ClipIndex(); // 15
	ClipSampleInfo::ClipSampleInfo(); // 20
	ClipSegment::ClipSegment(); // 72
	{
	}
	{
	}
	CRotation::CRotation(
			angle_t angleDegrees);  // 23
	CRotation::CRotation(
			angle_t angleDegrees);  // 31
	RotationCorrection::RotationCorrection(); // 39
	PositionCorrection::PositionCorrection(); // 39
	MotionCorrection::MotionCorrection(); // 72
	CDampedValue::CDampedValue(
			float flStartingValue,
			float flStartingVelocity);  // 15
	DistanceScalingSettings::DistanceScalingSettings(); // 72
} /* size: 0, inline expansions: 10 (315 bytes) */

// <0196D2F7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:72
void MotionMatchingInstanceData::MotionMatchingInstanceData(CSaveablePackedData& packedData, int nFootCount)
{
} /* size: 0 */

// <019766CD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:78
void MotionMatchingInstanceData::GetNextSegmentIndex()
{
} /* size: 0 */

// <019766F8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:84
// variable: 1
void MotionMatchingInstanceData::GetPrevSegmentIndex()
{
	int nPrevIndex; // 86
} /* size: 0, variables: 1 */

// <01976730> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:92
void MotionMatchingInstanceData::GetCurrentSegment()
{
} /* size: 0 */

// <0197675B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:103
// function call: 1
void MotionMatchingInstanceData::GetPrevSegment()
{
	MotionMatchingInstanceData::GetPrevSegmentIndex(); // 105
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0196D25F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:103
void MotionMatchingInstanceData::GetPrevSegment()
{
} /* size: 0 */

// <0196CBA6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:117
// variable: 1
// function calls: 19
void CMotionMatchingUpdateNode::CMotionMatchingUpdateNode(CAnimGraphInitContext& initContext, int nClipGroupCount, int metricCount)
{
	{
		uint32 i; // 160
		CRelativeOffset<const CMotionMetricEvaluator>::CRelativeOffset(); // 162
	}
	CPackedDataT<false>::AddArray<CRelativeOffset<const CMotionMetricEvaluator> >(
								uint32 count,
								CPackedHandle<CRelativeOffset<const CMotionMetricEvaluator> >* handleOut);  // 122
	CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::CRelativeOffset(); // 84
	CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::CRelativeArray(); // 138
	CRelativeObjectArray<const CMotionMetricEvaluator>::CRelativeObjectArray(); // 119
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 27
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 27
	CBlendCurve::CBlendCurve(); // 119
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<MotionMatchingInstanceData>::CPackedHandle(); // 119
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<DiffBlendInstanceData>::CPackedHandle(); // 119
	{
	}
	CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::SetOffset(
			const CRelativeOffset<const CMotionMetricEvaluator>* targetPtr);  // 20
	CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::operator=(
			const CRelativeOffset<const CMotionMetricEvaluator>* targetPtr);  // 115
	CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::SetArray(
		const CRelativeOffset<const CMotionMetricEvaluator>* targetArray,
		int32 count);  // 122
	PackedHandleID::operator=(
			uint32 id);  // 144
	CPackedDataT<true>::AddItem<MotionMatchingInstanceData, CPackedDataT<true>&, int>(
									CPackedHandle<MotionMatchingInstanceData>* handleOut);  // 125
	PackedHandleID::operator=(
			uint32 id);  // 144
	CPackedDataT<true>::AddItem<DiffBlendInstanceData, CPackedDataT<true>&, int>(
								CPackedHandle<DiffBlendInstanceData>* handleOut);  // 128
} /* size: 0, inline expansions: 18 (332 bytes) */

// <0196CB69> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:117
void CMotionMatchingUpdateNode::CMotionMatchingUpdateNode(CAnimGraphInitContext& initContext, int nClipGroupCount, int metricCount)
{
} /* size: 0 */

// <0196CA25> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:132
// function call: 1
void CMotionMatchingUpdateNode::Update(CAnimGraphUpdateContext& context)
{
	CMotionMatchingUpdateNode::UpdateCurrentClip(
				CAnimGraphUpdateContext& context);  // 136
} /* size: 84, inline expansions: 1 (21 bytes) */

// <0196C20D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:147
// variables: 17
// function calls: 13
void CMotionMatchingUpdateNode::CreatePoseOp(CAnimGraphUpdateContext& context)
{
	MotionMatchingInstanceData* pInstData; // 149
	PoseHandle hCurrentPose; // 152
	PoseHandle hPrevPose; // 153
	float flPrevBlendCycle; // 155
	float flBlendCycle; // 156
	{
		const float  elapsedTime; // 158
	}
	{
		ClipSegment& currentSegment; // 164
		const ClipInfo& currentClip; // 165
		float flPrevTime; // 178
		float flNextTIme; // 179
		{
			float flCycle; // 169
			float flPrevCycle; // 170
		}
		{
			ClipSegment& prevSegment; // 185
			const ClipInfo& prevClip; // 186
			float flCycle; // 188
			float flPrevCycle; // 189
			const float  elapsedTime; // 195
			ClipIndex::ClipIndex(
					uint16 nGroupIndex,
					uint16 nClipIndex);  // 58
			ClipSegment::GetClipIndex(); // 186
		}
		MotionMatchingInstanceData::GetCurrentSegment(); // 164
		ClipIndex::ClipIndex(
				uint16 nGroupIndex,
				uint16 nClipIndex);  // 58
		ClipSegment::GetClipIndex(); // 165
		HSequence::operator==(
				const HSequence& other);  // 167
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 19
		CPackedHandle<DiffBlendInstanceData>::CPackedHandle(
				const CPackedHandle<DiffBlendInstanceData>  &);  // 199
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 149
} /* size: 946, variables: 5, inline expansions: 5 (93 bytes) */

// <0196BFFD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:204
// variables: 2
// function calls: 5
void CMotionMatchingUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	const char   __FUNCTION__; // 54608
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 206
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 207
} /* size: 0, variables: 1, inline expansions: 5 (76 bytes) */

// <0196BD1F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:211
// variables: 4
// function calls: 8
void CMotionMatchingUpdateNode::GetCycle(CAnimGraphUpdateContext& context)
{
	float flCycle; // 213
	const MotionMatchingInstanceData* pInstData; // 215
	{
		const ClipSegment& currentSegment; // 218
		const ClipInfo& currentClip; // 219
		MotionMatchingInstanceData::GetCurrentSegment(); // 218
		ClipIndex::ClipIndex(
				uint16 nGroupIndex,
				uint16 nClipIndex);  // 58
		ClipSegment::GetClipIndex(); // 219
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 215
} /* size: 228, variables: 2, inline expansions: 5 (77 bytes) */

// <0196BA7B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:228
// variables: 3
// function calls: 8
void CMotionMatchingUpdateNode::GetDuration(CAnimGraphUpdateContext& context)
{
	const MotionMatchingInstanceData* pInstData; // 230
	{
		const ClipSegment& currentSegment; // 234
		const ClipInfo& currentClip; // 235
		MotionMatchingInstanceData::GetCurrentSegment(); // 234
		ClipIndex::ClipIndex(
				uint16 nGroupIndex,
				uint16 nClipIndex);  // 58
		ClipSegment::GetClipIndex(); // 235
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 230
} /* size: 137, variables: 1, inline expansions: 5 (89 bytes) */

// <0196B563> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:246
// variables: 5
// function calls: 15
void CMotionMatchingUpdateNode::GetTotalMovement(CAnimGraphUpdateContext& context)
{
	const MotionMatchingInstanceData* pInstData; // 248
	CMotionTransform motion; // 250
	{
		const ClipSegment& currentSegment; // 254
		const ClipInfo& currentClip; // 255
		{
			const ISequence* pSequence; // 259
			Vector::operator=(
					const Vector& vOther);  // 17
			{
			}
			CRotation::operator=(
					const CRotation& rot);  // 17
			CMotionTransform::operator=(
					CMotionTransform &);  // 261
		}
		MotionMatchingInstanceData::GetCurrentSegment(); // 254
		ClipIndex::ClipIndex(
				uint16 nGroupIndex,
				uint16 nClipIndex);  // 58
		ClipSegment::GetClipIndex(); // 255
		HSequence::operator==(
				const HSequence& other);  // 257
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 248
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 250
} /* size: 0, variables: 2, inline expansions: 8 (232 bytes) */

// <01969A64> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:269
// variables: 46
// function calls: 109
void CMotionMatchingUpdateNode::GetRemainingMovement(CAnimGraphUpdateContext& context, float flCycle)
{
	const MotionMatchingInstanceData* pInstData; // 271
	CMotionTransform motion; // 273
	{
		const ClipSegment& currentSegment; // 277
		const ClipInfo& currentClip; // 278
		{
			const ISequence* pSequence; // 282
			const float  flCurrentCycle; // 284
			float flElapsedBlendTime; // 289
			Vector vExtraMovementWS; // 290
			{
				Vector vAdjustedTranslation; // 296
				Vector::Vector(); // 1450
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 296
				Vector::Vector(); // 1443
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::operator-(
						const Vector& v);  // 262
				Vector::Vector(); // 1450
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 262
				Vector::Vector(); // 1436
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::operator+(
						const Vector& v);  // 262
				Lerp<Vector>(float flPercent,
						const Vector& A,
						const Vector& B);  // 297
				Vector::operator=(
						const Vector& vOther);  // 297
			}
			Vector::operator=(
					const Vector& vOther);  // 17
			{
			}
			CRotation::operator=(
					const CRotation& rot);  // 17
			CMotionTransform::operator=(
					CMotionTransform &);  // 286
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
						const Vector& v0);  // 291
			Vector::operator+=(
					const Vector& v);  // 291
		}
		MotionMatchingInstanceData::GetCurrentSegment(); // 277
		ClipIndex::ClipIndex(
				uint16 nGroupIndex,
				uint16 nClipIndex);  // 58
		ClipSegment::GetClipIndex(); // 278
		HSequence::operator==(
				const HSequence& other);  // 280
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 271
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 273
} /* size: 0, variables: 2, inline expansions: 8 (228 bytes) */

// <019697A1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:306
// variables: 3
// function calls: 6
void CMotionMatchingUpdateNode::Reset(CAnimGraphUpdateContext& context, float flCycle)
{
	const char   __FUNCTION__; // 54402
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 308
	}
	{
		MotionMatchingInstanceData* pInstData; // 317
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<MotionMatchingInstanceData>(
							const CPackedHandle<MotionMatchingInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<MotionMatchingInstanceData>(
							const CPackedHandle<MotionMatchingInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<MotionMatchingInstanceData>(
							const CPackedHandle<MotionMatchingInstanceData>& handle);  // 317
		Vector::operator=(
				const Vector& vOther);  // 322
	}
} /* size: 0, variables: 1 */

// <01969763> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:331
void CMotionMatchingUpdateNode::IsFinished(CAnimGraphUpdateContext& context)
{
} /* size: 7 */

// <01969725> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:337
void CMotionMatchingUpdateNode::GetTimeTillFinished(CAnimGraphUpdateContext& context)
{
} /* size: 13 */

// <01969548> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:343
// variable: 1
// function calls: 5
void CMotionMatchingUpdateNode::OnSave(const CAnimGraphUpdateContext& context, ISave* pSave)
{
	const MotionMatchingInstanceData* pInstData; // 345
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 345
} /* size: 131, variables: 1, inline expansions: 5 (76 bytes) */

// <0196936B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:350
// variable: 1
// function calls: 5
void CMotionMatchingUpdateNode::OnRestore(CAnimGraphUpdateContext& context, IRestore* pRestore)
{
	MotionMatchingInstanceData* pInstData; // 352
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 352
} /* size: 131, variables: 1, inline expansions: 5 (76 bytes) */

// <0196845C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:357
// variables: 22
// function calls: 50
void CMotionMatchingUpdateNode::CalculateFootMotion(CAnimGraphUpdateContext& context, const CMotionTransform& newLocalToWorld, CStrideStatus& footPoseInfo)
{
	MotionMatchingInstanceData* pInstData; // 361
	{
		int i; // 368
		{
			RotationCorrection& rotationCorrection; // 392
			{
				const float  flElapsedTime; // 372
				float flPrevTime; // 383
				float flNextTIme; // 384
				{
					float flRemainingFootCycleTime; // 375
					Vector vExtraMovementWS; // 376
					Vector vExtraMovementMS; // 377
					Vector::operator+=(
							const Vector& v);  // 378
				}
			}
			{
				float flRemainingCycleDistance; // 395
				float flPercent; // 397
				CRotation flCorrection; // 399
				_mm_load_ss(const float* __P); // 21
				_mm_sqrt_ss(__m128 __A); // 21
				_mm_cvtss_f32(__m128 __A); // 21
				FastSqrt(float x); // 1249
				VectorLength(const Vector& v); // 1256
				Vector::Length(); // 395
				FloatBits(const vec_t& f); // 112
				IsFinite(const vec_t& f); // 216
				{
				}
				{
				}
				{
				}
				CRotation::CRotation(
						angle_t angleDegrees);  // 23
				CRotation::CRotation(
						angle_t angleDegrees);  // 217
				CRotation::operator*(
						angle_t s);  // 399
				{
				}
				CRotation::operator+=(
						const CRotation& rot);  // 401
			}
			{
				VectorAligned vPositionDelta; // 407
				VectorAligned vAdjustedPositionDelta; // 409
				VectorAligned vNewPositionDelta; // 411
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
						const Vector& rhs);  // 407
				{
					fltx4 retVal; // 1134
					_mm_set1_ps(float __F); // 1135
				}
				ReplicateX4<>(float flValue); // 268
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 268
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 268
				VectorAligned::operator*(
						vec_t s);  // 409
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 256
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 256
				VectorAligned::operator-(
						const VectorAligned& v);  // 262
				{
					fltx4 retVal; // 1134
					_mm_set1_ps(float __F); // 1135
				}
				ReplicateX4<>(float flValue); // 268
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 268
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 268
				VectorAligned::operator*(
						vec_t s);  // 262
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 250
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 250
				VectorAligned::operator+(
						const VectorAligned& v);  // 262
				Lerp<VectorAligned>(float flPercent,
							const VectorAligned& A,
							const VectorAligned& B);  // 411
				_mm_cvtss_f32(__m128 __A); // 1534
				GetZSIMD<>(fltx4 a); // 76
				VectorAligned::z(); // 40
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 413
				Vector::operator=(
						const Vector& vOther);  // 413
			}
		}
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 361
	MotionMatchingInstanceData::GetCurrentSegment(); // 365
} /* size: 0, variables: 1, inline expansions: 6 (101 bytes) */

// <0196840F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:420
void CMotionMatchingUpdateNode::GetClipGroupCount()
{
} /* size: 13 */

// <019683A6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:426
void CMotionMatchingUpdateNode::GetClipCount(int nGroupIndex)
{
} /* size: 13 */

// <01968344> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:432
void CMotionMatchingUpdateNode::GetClipEntryPointCount(ClipIndex clipIndex)
{
} /* size: 13 */

// <019682C6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:438
void CMotionMatchingUpdateNode::GetClipEntryPointCycle(ClipIndex clipIndex, int nSampleIndex)
{
} /* size: 13 */

// <0196809F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:444
// variables: 2
// function calls: 7
void CMotionMatchingUpdateNode::GetCurrentClipIndex(const CAnimGraphUpdateContext& context)
{
	const MotionMatchingInstanceData* pInstData; // 446
	const int  currentSegmentIndex; // 448
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 446
	ClipIndex::ClipIndex(
			uint16 nGroupIndex,
			uint16 nClipIndex);  // 58
	ClipSegment::GetClipIndex(); // 451
} /* size: 137, variables: 2, inline expansions: 7 (105 bytes) */

// <01967E83> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:458
// variables: 3
// function calls: 6
void CMotionMatchingUpdateNode::GetCurrentEntryPointIndex(const CAnimGraphUpdateContext& context)
{
	const MotionMatchingInstanceData* pInstData; // 460
	const int  currentSegmentIndex; // 462
	{
		const ClipSegment& currentSegment; // 465
		MotionMatchingInstanceData::GetCurrentSegment(); // 465
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 460
} /* size: 107, variables: 2, inline expansions: 5 (77 bytes) */

// <01967C0D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:474
// variables: 3
// function calls: 7
void CMotionMatchingUpdateNode::GetCurrentClipSequence(const CAnimGraphUpdateContext& context)
{
	const MotionMatchingInstanceData* pInstData; // 476
	const int  currentSegmentIndex; // 478
	{
		ClipIndex clipIndex; // 481
		ClipIndex::ClipIndex(
				uint16 nGroupIndex,
				uint16 nClipIndex);  // 58
		ClipSegment::GetClipIndex(); // 481
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 476
} /* size: 138, variables: 2, inline expansions: 5 (92 bytes) */

// <01967A22> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:489
// variables: 3
// function calls: 5
void CMotionMatchingUpdateNode::GetCurrentClipEntryPointCycle(const CAnimGraphUpdateContext& context)
{
	const MotionMatchingInstanceData* pInstData; // 491
	const int  currentSegmentIndex; // 493
	{
		const ClipSegment& segment; // 496
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 491
} /* size: 127, variables: 2, inline expansions: 5 (77 bytes) */

// <01967762> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:504
// variables: 5
// function calls: 7
void CMotionMatchingUpdateNode::GetCurrentClipCycle(const CAnimGraphUpdateContext& context)
{
	const MotionMatchingInstanceData* pInstData; // 506
	const int  currentSegmentIndex; // 508
	{
		const ClipSegment& segment; // 511
		const ClipInfo& clipInfo; // 512
		float flCycle; // 514
		ClipIndex::ClipIndex(
				uint16 nGroupIndex,
				uint16 nClipIndex);  // 58
		ClipSegment::GetClipIndex(); // 512
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 506
} /* size: 236, variables: 2, inline expansions: 5 (77 bytes) */

// <019674D7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:522
// variables: 4
// function calls: 7
void CMotionMatchingUpdateNode::GetCurrentClipLoop(const CAnimGraphUpdateContext& context)
{
	const MotionMatchingInstanceData* pInstData; // 524
	const int  currentSegmentIndex; // 526
	{
		const ClipSegment& segment; // 529
		const ClipInfo& clipInfo; // 530
		ClipIndex::ClipIndex(
				uint16 nGroupIndex,
				uint16 nClipIndex);  // 58
		ClipSegment::GetClipIndex(); // 530
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 524
} /* size: 145, variables: 2, inline expansions: 5 (83 bytes) */

// <019673E3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:538
// variables: 3
void CMotionMatchingUpdateNode::IsGroupEnabled(const CAnimGraphUpdateContext& context, int nGroupIndex)
{
	bool bEnabled; // 540
	{
		const CMotionClipGroupData& group; // 544
		const int  nGroupTagIndex; // 545
	}
} /* size: 102, variables: 1 */

// <01967384> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:557
// function call: 1
void CMotionMatchingUpdateNode::GetMetricCount()
{
	CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::Count(); // 559
} /* size: 8, inline expansions: 1 (0 bytes) */

// <019671D9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:563
// function calls: 6
void CMotionMatchingUpdateNode::GetMetricDimensionCount(int nMetricIndex)
{
	{
	}
	CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::operator[](
			int index);  // 565
	CRelativeOffset<const CMotionMetricEvaluator>::IsValid(); // 35
	CRelativeOffset<const CMotionMetricEvaluator>::Get(); // 45
	CRelativeOffset<const CMotionMetricEvaluator>::operator->(); // 565
} /* size: 0, inline expansions: 6 (0 bytes) */

// <01967010> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:569
// function calls: 6
void CMotionMatchingUpdateNode::GetMetricName(int nMetricIndex)
{
	{
	}
	CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::operator[](
			int index);  // 571
	CRelativeOffset<const CMotionMetricEvaluator>::IsValid(); // 35
	CRelativeOffset<const CMotionMetricEvaluator>::Get(); // 45
	CRelativeOffset<const CMotionMetricEvaluator>::operator->(); // 571
} /* size: 0, inline expansions: 6 (0 bytes) */

// <01966E65> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:575
// function calls: 6
void CMotionMatchingUpdateNode::GetWeight(int nMetricIndex)
{
	{
	}
	CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::operator[](
			int index);  // 577
	CRelativeOffset<const CMotionMetricEvaluator>::IsValid(); // 35
	CRelativeOffset<const CMotionMetricEvaluator>::Get(); // 45
	CRelativeOffset<const CMotionMetricEvaluator>::operator->(); // 577
} /* size: 0, inline expansions: 6 (0 bytes) */

// <01966CB1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:581
// function calls: 6
void CMotionMatchingUpdateNode::GetMean(int nMetricIndex, int nDimensionIndex)
{
	{
	}
	CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::operator[](
			int index);  // 583
	CRelativeOffset<const CMotionMetricEvaluator>::IsValid(); // 35
	CRelativeOffset<const CMotionMetricEvaluator>::Get(); // 45
	CRelativeOffset<const CMotionMetricEvaluator>::operator->(); // 583
} /* size: 0, inline expansions: 6 (0 bytes) */

// <01966AFD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:587
// function calls: 6
void CMotionMatchingUpdateNode::GetStandardDeviation(int nMetricIndex, int nDimensionIndex)
{
	{
	}
	CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::operator[](
			int index);  // 589
	CRelativeOffset<const CMotionMetricEvaluator>::IsValid(); // 35
	CRelativeOffset<const CMotionMetricEvaluator>::Get(); // 45
	CRelativeOffset<const CMotionMetricEvaluator>::operator->(); // 589
} /* size: 0, inline expansions: 6 (0 bytes) */

// <01966904> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:593
// variables: 4
// function calls: 2
void CMotionMatchingUpdateNode::CalculateScore(CAnimGraphUpdateContext& context, ClipIndex clipIndex, int nEntryPointIndex)
{
	float weightVector; // 596
	float goalVector; // 600
	const float* pTestVector; // 604
	{
		int i; // 1289
		Sqr(float f); // 1291
	}
	CMotionMatchingUpdateNode::CalculateCost(
			const float* pTestVector,
			const float* pGoalVector,
			const float* pWeightVector);  // 606
} /* size: 392, variables: 3, inline expansions: 1 (222 bytes) */

// <019663E5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:610
// variables: 5
// function calls: 15
void CMotionMatchingUpdateNode::GetGoalValues(CAnimGraphUpdateContext& context, int nMetricIndex, bool bNormalized, CUtlVector<float, CUtlMemory<float, int> >& valuesOut)
{
	float goalVector; // 612
	int nMetricOffset; // 615
	const CMotionMetricEvaluator* pMetric; // 621
	{
		int i; // 616
		CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::IsValid(); // 35
		CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::Get(); // 97
		{
		}
		CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::operator[](
				int index);  // 618
		CRelativeOffset<const CMotionMetricEvaluator>::IsValid(); // 35
		CRelativeOffset<const CMotionMetricEvaluator>::Get(); // 45
		CRelativeOffset<const CMotionMetricEvaluator>::operator->(); // 618
	}
	{
		int i; // 625
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 627
	}
	{
	}
	CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::operator[](
			int index);  // 621
	CRelativeOffset<const CMotionMetricEvaluator>::IsValid(); // 35
	CRelativeOffset<const CMotionMetricEvaluator>::Get(); // 621
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 632
} /* size: 0, variables: 3, inline expansions: 7 (188 bytes) */

// <01965EC6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:637
// variables: 5
// function calls: 15
void CMotionMatchingUpdateNode::GetCurrentValues(CAnimGraphUpdateContext& context, int nMetricIndex, bool bNormalized, CUtlVector<float, CUtlMemory<float, int> >& valuesOut)
{
	float valueVector; // 639
	int nMetricOffset; // 642
	const CMotionMetricEvaluator* pMetric; // 648
	{
		int i; // 643
		CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::IsValid(); // 35
		CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::Get(); // 97
		{
		}
		CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::operator[](
				int index);  // 645
		CRelativeOffset<const CMotionMetricEvaluator>::IsValid(); // 35
		CRelativeOffset<const CMotionMetricEvaluator>::Get(); // 45
		CRelativeOffset<const CMotionMetricEvaluator>::operator->(); // 645
	}
	{
		int i; // 652
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 654
	}
	{
	}
	CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::operator[](
			int index);  // 648
	CRelativeOffset<const CMotionMetricEvaluator>::IsValid(); // 35
	CRelativeOffset<const CMotionMetricEvaluator>::Get(); // 648
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 659
} /* size: 0, variables: 3, inline expansions: 7 (188 bytes) */

// <01965981> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:664
// variables: 5
// function calls: 15
void CMotionMatchingUpdateNode::GetClipValues(CAnimGraphUpdateContext& context, int nMetricIndex, ClipIndex clipIndex, int nEntryPointIndex, bool bNormalized, CUtlVector<float, CUtlMemory<float, int> >& valuesOut)
{
	int nMetricOffset; // 666
	const float* pClipValues; // 672
	const CMotionMetricEvaluator* pMetric; // 674
	{
		int i; // 667
		CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::IsValid(); // 35
		CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::Get(); // 97
		{
		}
		CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::operator[](
				int index);  // 669
		CRelativeOffset<const CMotionMetricEvaluator>::IsValid(); // 35
		CRelativeOffset<const CMotionMetricEvaluator>::Get(); // 45
		CRelativeOffset<const CMotionMetricEvaluator>::operator->(); // 669
	}
	{
		int i; // 676
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 678
	}
	{
	}
	CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::operator[](
			int index);  // 674
	CRelativeOffset<const CMotionMetricEvaluator>::IsValid(); // 35
	CRelativeOffset<const CMotionMetricEvaluator>::Get(); // 674
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 683
} /* size: 0, variables: 3, inline expansions: 7 (174 bytes) */

// <0196580D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:688
// function calls: 5
void CMotionMatchingUpdateNode::GetMetricEvaluator(int index)
{
	{
	}
	CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::operator[](
			int index);  // 690
	CRelativeOffset<const CMotionMetricEvaluator>::IsValid(); // 35
	CRelativeOffset<const CMotionMetricEvaluator>::Get(); // 690
} /* size: 0, inline expansions: 5 (135 bytes) */

// <019650C8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:694
// variables: 19
// function calls: 24
void CMotionMatchingUpdateNode::UpdateBlendWeights(CAnimGraphUpdateContext& context)
{
	MotionMatchingInstanceData* pInstData; // 696
	ClipSegment* pActiveSegments; // 697
	const int  currentSegmentIndex; // 699
	{
		int wrapCount; // 702
		float unClampedCycle; // 703
		const float  blendStartTime; // 704
		const float  elapsedTime; // 705
		float blendCycle; // 706
		float sumWeights; // 709
		{
			int32 i; // 710
		}
		{
			int32 i; // 729
		}
		{
			float mainStateWeight; // 738
			float weightScale; // 746
			{
				int32 i; // 749
			}
			{
				int i; // 101
				{
					float t2; // 103
					float t3; // 104
					float invT; // 106
					float invT2; // 107
					Vector2DMultiply(const Vector2D& a,
							vec_t b,
							Vector2D& c);  // 702
					Vector2D::Vector2D(); // 701
					Vector2D::operator*(
							float fl);  // 729
					operator*(float fl,
							const Vector2D& v);  // 111
					Vector2DMultiply(const Vector2D& a,
							vec_t b,
							Vector2D& c);  // 702
					Vector2D::Vector2D(); // 701
					Vector2D::operator*(
							float fl);  // 729
					operator*(float fl,
							const Vector2D& v);  // 110
					Vector2D::Vector2D(); // 701
					Vector2D::operator*(
							float fl);  // 729
					operator*(float fl,
							const Vector2D& v);  // 112
					Vector2D::Vector2D(); // 687
					Vector2DAdd(const Vector2D& a,
							const Vector2D& b,
							Vector2D& c);  // 688
					Vector2D::operator+(
							const Vector2D& v);  // 111
					Vector2D::Vector2D(); // 687
					Vector2DAdd(const Vector2D& a,
							const Vector2D& b,
							Vector2D& c);  // 688
					Vector2D::operator+(
							const Vector2D& v);  // 112
					CloseEnough(float a,
							float b,
							float epsilon);  // 114
				}
			}
			CBlendCurve::Evaluate(
				float t);  // 738
		}
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 696
} /* size: 668, variables: 3, inline expansions: 5 (72 bytes) */

// <01962E9F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:770
// variables: 52
// function calls: 131
void CMotionMatchingUpdateNode::CalculateRootMotion(CAnimGraphUpdateContext& context)
{
	MotionMatchingInstanceData* pInstData; // 772
	CRootMotion motion; // 774
	RotationCorrection& rotationCorrection; // 793
	float blendCycle; // 807
	{
		const ClipSegment& currentSegment; // 778
		const ClipInfo& currentClip; // 779
		{
			float flUnclampedCycle; // 783
			float flUnclampedPrevCycle; // 784
			const ISequence* pSequence; // 787
			Vector::operator=(
					const Vector& vOther);  // 17
			{
			}
			CRotation::operator=(
					const CRotation& rot);  // 17
			CMotionTransform::operator=(
					CMotionTransform &);  // 11
			CRootMotion::operator=(
					CRootMotion &);  // 788
		}
		MotionMatchingInstanceData::GetCurrentSegment(); // 778
		ClipIndex::ClipIndex(
				uint16 nGroupIndex,
				uint16 nClipIndex);  // 58
		ClipSegment::GetClipIndex(); // 779
		HSequence::operator==(
				const HSequence& other);  // 780
	}
	{
		float flPercent; // 796
		CRotation flCorrection; // 798
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 796
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 216
		{
		}
		{
		}
		{
		}
		CRotation::CRotation(
				angle_t angleDegrees);  // 23
		CRotation::CRotation(
				angle_t angleDegrees);  // 217
		CRotation::operator*(
				angle_t s);  // 798
		{
		}
		CRotation::operator-=(
				const CRotation& rot);  // 801
		{
		}
		CRotation::operator+=(
				const CRotation& rot);  // 803
	}
	{
		Vector vVelocityDeltaWS; // 810
		Vector vTranslationDeltaWS; // 811
		Vector vTranslationDeltaMS; // 812
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 810
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 811
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
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 1797
		NegSIMD<>(const fltx4& a); // 422
		QuaternionAligned::QuaternionAligned(
					fltx4 vec);  // 423
		QuaternionAligned::Conjugate(); // 448
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
		CTransform::RotateVectorByInverse(
					const VectorAligned& v0);  // 87
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 42
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 42
		VectorAligned::AsVector(); // 87
		CTransform::RotateVectorByInverse(
					const Vector& v0);  // 812
		Vector::operator+=(
				const Vector& v);  // 814
		Vector::operator+=(
				const Vector& v);  // 815
	}
	{
		Vector vAdjustedTranslation; // 821
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 821
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 262
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 262
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 262
		Lerp<Vector>(float flPercent,
				const Vector& A,
				const Vector& B);  // 822
		Vector::operator=(
				const Vector& vOther);  // 822
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 772
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
			const CRootMotion  &);  // 774
} /* size: 0, variables: 4, inline expansions: 9 (369 bytes) */

// <019770CA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:829
// variables: 8
void CMotionMatchingUpdateNode::UpdateCurrentClip(CAnimGraphUpdateContext& context)
{
	MotionMatchingInstanceData* pInstData; // 834
	float weightVector; // 837
	float goalVector; // 841
	float minVector; // 846
	float maxVector; // 847
	float flCurrentCost; // 851
	float flNewCost; // 869
	ClipSampleInfo bestSample; // 870
} /* size: 0, variables: 8 */

// <019768A0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:829
// variables: 17
// function calls: 20
void CMotionMatchingUpdateNode::UpdateCurrentClip(CAnimGraphUpdateContext& context)
{
	MotionMatchingInstanceData* pInstData; // 834
	float weightVector; // 837
	float goalVector; // 841
	float minVector; // 846
	float maxVector; // 847
	float flCurrentCost; // 851
	float flNewCost; // 869
	ClipSampleInfo bestSample; // 870
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 834
	{
		const ClipSegment& currentSegment; // 857
		const CMotionClipGroupData& currentGroup; // 858
		const int  nGroupTagIndex; // 859
		MotionMatchingInstanceData::GetCurrentSegment(); // 857
		ClipIndex::ClipIndex(
				uint16 nGroupIndex,
				uint16 nClipIndex);  // 58
		ClipSegment::GetClipIndex(); // 858
	}
	ClipIndex::IsValid(); // 872
	CloseEnough(float a,
			float b,
			float epsilon);  // 874
	MotionMatchingInstanceData::GetCurrentSegment(); // 876
	{
		const ClipInfo& newClip; // 880
		const float  flNewTime; // 882
		const int  newSegmentIndex; // 896
		ClipSegment& newSegment; // 898
		const float* pClipValues; // 917
		{
			ClipSegment& currentSegment; // 888
			MotionMatchingInstanceData::GetCurrentSegment(); // 888
		}
		MotionMatchingInstanceData::GetNextSegmentIndex(); // 896
		ClipSegment::SetClipIndex(
				ClipIndex index);  // 899
		Vector::operator=(
				const Vector& vOther);  // 914
		Vector::operator=(
				const Vector& vOther);  // 23
		PositionCorrection::operator=(
				PositionCorrection &);  // 39
		{
		}
		CRotation::operator=(
				const CRotation& rot);  // 31
		RotationCorrection::operator=(
				RotationCorrection &);  // 39
		MotionCorrection::operator=(
				MotionCorrection &);  // 918
	}
} /* size: 0, variables: 8, inline expansions: 8 (194 bytes) */

// <01962D0B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:829
// variables: 17
void CMotionMatchingUpdateNode::UpdateCurrentClip(CAnimGraphUpdateContext& context)
{
	MotionMatchingInstanceData* pInstData; // 834
	float weightVector; // 837
	float goalVector; // 841
	float minVector; // 846
	float maxVector; // 847
	float flCurrentCost; // 851
	float flNewCost; // 869
	ClipSampleInfo bestSample; // 870
	{
		const ClipSegment& currentSegment; // 857
		const CMotionClipGroupData& currentGroup; // 858
		const int  nGroupTagIndex; // 859
	}
	{
		const ClipInfo& newClip; // 880
		const float  flNewTime; // 882
		const int  newSegmentIndex; // 896
		ClipSegment& newSegment; // 898
		const float* pClipValues; // 917
		{
			ClipSegment& currentSegment; // 888
		}
	}
} /* size: 0, variables: 8 */

// <019628BA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:924
// variables: 4
// function calls: 15
void CMotionMatchingUpdateNode::UpdateDistanceScaling(CAnimGraphUpdateContext& context)
{
	MotionMatchingInstanceData* pInstData; // 926
	{
		CMotionTransform remainingMotion; // 936
		const float  flGoalDistance; // 938
		const float  flAnimDistance; // 939
		CAnimParamHandle::CAnimParamHandle(); // 938
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 44
		CMotionTransform::Length(); // 939
		CloseEnough(float a,
				float b,
				float epsilon);  // 942
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 945
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 926
} /* size: 551, variables: 1, inline expansions: 5 (68 bytes) */

// <0196252C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:967
// variables: 3
// function calls: 13
void CMotionMatchingUpdateNode::CalculateWeightVector(CAnimGraphUpdateContext& context, float* pWeightVectorOut)
{
	int nWeightIndex; // 969
	{
		int i; // 970
		{
			int iDimension; // 972
			CRelativeOffset<const CMotionMetricEvaluator>::IsValid(); // 35
			CRelativeOffset<const CMotionMetricEvaluator>::Get(); // 45
			CRelativeOffset<const CMotionMetricEvaluator>::operator->(); // 974
			{
			}
			CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::IsValid(); // 35
			CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::Get(); // 97
			CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::operator[](
					int index);  // 974
			{
			}
			CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::IsValid(); // 35
			CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::Get(); // 97
			CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::operator[](
					int index);  // 972
			CRelativeOffset<const CMotionMetricEvaluator>::IsValid(); // 35
			CRelativeOffset<const CMotionMetricEvaluator>::Get(); // 45
			CRelativeOffset<const CMotionMetricEvaluator>::operator->(); // 972
		}
		CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::Count(); // 970
	}
} /* size: 0, variables: 1 */

// <01961F1E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:980
// variables: 12
// function calls: 17
void CMotionMatchingUpdateNode::CalculateGoalVector(CAnimGraphUpdateContext& context, float* pGoalVectorOut)
{
	const MotionMatchingInstanceData* pInstData; // 982
	HSequence hSequence; // 984
	ClipIndex clipIndex; // 985
	float flCycle; // 986
	bool bLoop; // 987
	const int  nCurrentSegment; // 990
	int nDimensionOffset; // 1018
	{
		const ClipSegment& currentSegment; // 993
		const ClipInfo& currentClip; // 994
		ClipIndex::ClipIndex(
				uint16 nGroupIndex,
				uint16 nClipIndex);  // 58
		ClipSegment::GetClipIndex(); // 994
		ClipIndex::ClipIndex(
				uint16 nGroupIndex,
				uint16 nClipIndex);  // 58
		ClipSegment::GetClipIndex(); // 996
	}
	{
		int i; // 1011
	}
	{
		int i; // 1019
		{
			const CMotionMetricEvaluator* pMetric; // 1021
			CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::IsValid(); // 35
			CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::Get(); // 97
			CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::operator[](
					int index);  // 1021
			CRelativeOffset<const CMotionMetricEvaluator>::IsValid(); // 35
			CRelativeOffset<const CMotionMetricEvaluator>::Get(); // 1021
		}
		CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::Count(); // 1019
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 982
	ClipIndex::ClipIndex(); // 985
	ClipIndex::IsValid(); // 1002
} /* size: 512, variables: 7, inline expansions: 7 (109 bytes) */

// <019619CB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:1030
// variables: 9
// function calls: 15
void CMotionMatchingUpdateNode::CalculateCurrentVector(const CAnimGraphUpdateContext& context, float* pCurrentVectorOut)
{
	const MotionMatchingInstanceData* pInstData; // 1032
	const int  nCurrentSegment; // 1034
	{
		const ClipSegment& currentSegment; // 1037
		const ClipInfo& currentClip; // 1038
		ClipIndex clipIndex; // 1040
		float flCycle; // 1041
		int nDimensionOffset; // 1048
		{
			int i; // 1049
			{
				const CMotionMetricEvaluator* pMetric; // 1051
				CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::IsValid(); // 35
				CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::Get(); // 97
				CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::operator[](
						int index);  // 1051
				CRelativeOffset<const CMotionMetricEvaluator>::IsValid(); // 35
				CRelativeOffset<const CMotionMetricEvaluator>::Get(); // 1051
			}
			CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::Count(); // 1049
		}
		ClipIndex::ClipIndex(
				uint16 nGroupIndex,
				uint16 nClipIndex);  // 58
		ClipSegment::GetClipIndex(); // 1038
		ClipIndex::ClipIndex(
				uint16 nGroupIndex,
				uint16 nClipIndex);  // 58
		ClipSegment::GetClipIndex(); // 1040
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 1032
} /* size: 407, variables: 2, inline expansions: 5 (89 bytes) */

// <019614D1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:1061
// variables: 13
// function calls: 12
void CMotionMatchingUpdateNode::CalculateFilterVectors(const CAnimGraphUpdateContext& context, float* pMinVectorOut, float* pMaxVectorOut)
{
	float tempMinVector; // 1070
	float tempMaxVector; // 1071
	int nDimensionStart; // 1074
	{
		int iDimension; // 1064
	}
	{
		int iMetric; // 1075
		{
			const CMotionMetricEvaluator* pMetric; // 1077
			const int  nMetricDimensions; // 1078
			{
				int iDimension; // 1080
			}
			{
				int iDimension; // 1088
			}
			CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::IsValid(); // 35
			CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::Get(); // 97
			CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::operator[](
					int index);  // 1077
			CRelativeOffset<const CMotionMetricEvaluator>::IsValid(); // 35
			CRelativeOffset<const CMotionMetricEvaluator>::Get(); // 1077
		}
		CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::Count(); // 1075
	}
	{
		int iMetric; // 1099
		{
			const CMotionMetricEvaluator* pMetric; // 1101
			{
				int iDimension; // 1102
				{
					int currentDimension; // 1104
				}
			}
			CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::IsValid(); // 35
			CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::Get(); // 97
			CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::operator[](
					int index);  // 1101
			CRelativeOffset<const CMotionMetricEvaluator>::IsValid(); // 35
			CRelativeOffset<const CMotionMetricEvaluator>::Get(); // 1101
		}
		CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::Count(); // 1099
	}
} /* size: 894, variables: 3 */

// <01960EE1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:1114
// variables: 11
// function calls: 17
void CMotionMatchingUpdateNode::CalculateCurrentCost(CAnimGraphUpdateContext& context, const float* pGoalVector, const float* pWeightVector)
{
	const MotionMatchingInstanceData* pInstData; // 1116
	const int  nCurrentSegment; // 1118
	{
		const ClipSegment& currentSegment; // 1123
		const ClipInfo& currentClip; // 1124
		float valueVector; // 1154
		{
			float flElapsedTime; // 1128
			float flRemainingTime; // 1129
		}
		{
			const float  flGoalDist; // 1138
			{
				CMotionTransform remainingMotion; // 1143
				float flRemainingDistance; // 1145
				_mm_load_ss(const float* __P); // 21
				_mm_sqrt_ss(__m128 __A); // 21
				_mm_cvtss_f32(__m128 __A); // 21
				FastSqrt(float x); // 1249
				VectorLength(const Vector& v); // 1256
				Vector::Length(); // 1145
			}
			CAnimParamHandle::CAnimParamHandle(); // 1138
		}
		MotionMatchingInstanceData::GetCurrentSegment(); // 1123
		ClipIndex::ClipIndex(
				uint16 nGroupIndex,
				uint16 nClipIndex);  // 58
		ClipSegment::GetClipIndex(); // 1124
		{
			int i; // 1289
			Sqr(float f); // 1291
		}
		CMotionMatchingUpdateNode::CalculateCost(
				const float* pTestVector,
				const float* pGoalVector,
				const float* pWeightVector);  // 1157
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 59
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	CAnimGraphUpdateContext::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 1116
} /* size: 882, variables: 2, inline expansions: 5 (115 bytes) */

// <01960A01> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:1166
// variables: 11
// function calls: 11
void CMotionMatchingUpdateNode::FindBestMatch(const CAnimGraphUpdateContext& context, const float* pGoalVector, const float* pWeightVector, const float* pMinVector, const float* pMaxVector, float& flBestCost)
{
	ClipSampleInfo closestSample; // 1168
	{
		int iClipGroup; // 1171
		{
			const CMotionClipGroupData& currentGroup; // 1173
			const int  nGroupTagIndex; // 1174
			const int  nDimensionCount; // 1175
			{
				int iSample; // 1180
				{
					const float* pTestVector; // 1182
					bool bPassedFilter; // 1185
					{
						int iDimension; // 1186
					}
					{
						float flCost; // 1199
						{
							int i; // 1289
							Sqr(float f); // 1291
						}
						CMotionMatchingUpdateNode::CalculateCost(
								const float* pTestVector,
								const float* pGoalVector,
								const float* pWeightVector);  // 1199
						{
						}
						CRelativeOffset<ClipSampleInfo>::IsValid(); // 35
						CRelativeOffset<ClipSampleInfo>::Get(); // 97
						CRelativeArray<ClipSampleInfo>::operator[](
								int index);  // 1204
					}
					{
					}
					CRelativeOffset<float>::IsValid(); // 35
					CRelativeOffset<float>::Get(); // 97
					CRelativeArray<float>::operator[](
							int index);  // 1182
				}
				CRelativeArray<ClipSampleInfo>::Count(); // 1180
			}
		}
	}
	ClipIndex::ClipIndex(); // 15
	ClipSampleInfo::ClipSampleInfo(); // 1168
} /* size: 0, variables: 1, inline expansions: 2 (67 bytes) */

// <01960899> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:1215
// variables: 18
void CMotionMatchingUpdateNode::FindBestMatchSIMD(const CAnimGraphUpdateContext& context, const float* pGoalVector, const float* pWeightVector, const float* pMinVector, const float* pMaxVector, float& flBestCost)
{
	ClipSampleInfo closestSample; // 1217
	{
		int iClipGroup; // 1220
		{
			const CMotionClipGroupData& currentGroup; // 1222
			const int  nGroupTagIndex; // 1223
			const int  nDimensionCount; // 1224
			{
				int iSample; // 1229
				{
					const float* pTestVector; // 1233
					const int  nVecCount; // 1234
					fltx4 filterMask; // 1236
					bool bPassedFilter; // 1253
					{
						int i; // 1238
						{
							fltx4 a1; // 1240
							fltx4 vMinVal; // 1241
							fltx4 vMaxVal; // 1242
							fltx4 vMinResult; // 1245
							fltx4 vMaxResult; // 1246
						}
					}
					{
						int iDimension; // 1254
					}
					{
						float flCost; // 1267
					}
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <019767C3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:1283
// variables: 3
// function call: 1
void CMotionMatchingUpdateNode::CalculateCost(const float* pTestVector, const float* pGoalVector, const float* pWeightVector)
{
	const int  nDimensionCount; // 1286
	float sum; // 1288
	{
		int i; // 1289
		Sqr(float f); // 1291
	}
} /* size: 0, variables: 2 */

// <01960832> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:1283
// variables: 3
void CMotionMatchingUpdateNode::CalculateCost(const float* pTestVector, const float* pGoalVector, const float* pWeightVector)
{
	const int  nDimensionCount; // 1286
	float sum; // 1288
	{
		int i; // 1289
	}
} /* size: 0, variables: 2 */

// <01960354> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:1298
// variables: 12
// function calls: 10
void CMotionMatchingUpdateNode::CalculateInterpolatedValues(ClipIndex clipIndex, float flCycle, float* pValueVector)
{
	const ClipInfo& currentClip; // 1300
	const CMotionClipGroupData& currentGroup; // 1301
	const int  nClipEntryPointStartIndex; // 1303
	const int  nClipEntryPointCount; // 1304
	int nLowerBoundIndex; // 1306
	int nUpperBoundIndex; // 1315
	float flLerpValue; // 1325
	const float* pLowVector; // 1338
	const float* pHighVector; // 1339
	{
		float flLowerCycle; // 1328
		float flUpperCycle; // 1329
		{
		}
		CRelativeOffset<ClipSampleInfo>::IsValid(); // 35
		CRelativeOffset<ClipSampleInfo>::Get(); // 97
		CRelativeArray<ClipSampleInfo>::operator[](
				int index);  // 1328
		{
		}
		CRelativeOffset<ClipSampleInfo>::IsValid(); // 35
		CRelativeOffset<ClipSampleInfo>::Get(); // 97
		CRelativeArray<ClipSampleInfo>::operator[](
				int index);  // 1329
	}
	{
		int iDimension; // 1340
		Lerp<float>(float flPercent,
				const float& A,
				const float& B);  // 1342
	}
	CRelativeOffset<ClipSampleInfo>::IsValid(); // 35
	CRelativeOffset<ClipSampleInfo>::Get(); // 97
	{
	}
	CRelativeArray<ClipSampleInfo>::operator[](
			int index);  // 1309
} /* size: 0, variables: 9, inline expansions: 3 (202 bytes) */

// <0195F7A0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:1347
// variables: 6
// function calls: 35
void CMotionMatchingUpdateNode::CalcFootStatusForSegment(CAnimGraphUpdateContext& context, const CMotionTransform& newRootTransform, const ClipSegment& currentSegment, CStrideStatus& footStatusList)
{
	{
		const ClipInfo& currentClip; // 1351
		{
			const ISequence* pSequence; // 1355
			const CAnimCycle  cycle; // 1357
			const CAnimCycle  prevCycle; // 1358
			const int  nFootMotionCount; // 1361
			{
				{
					int iFoot; // 1364
					CCycleBase::CCycleBase(
							float flCycle);  // 125
					CCycleBase::GetValue(); // 125
					CAnimCycle::CAnimCycle(
							const CAnimCycle& rhs);  // 1366
					CCycleBase::CCycleBase(
							float flCycle);  // 125
					CCycleBase::GetValue(); // 125
					CAnimCycle::CAnimCycle(
							const CAnimCycle& rhs);  // 1366
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
							CFootMotionStatus &);  // 1373
				}
				_DebuggerBreakInlineExpressionWrapper(void); // 1362
			}
			CCycleBase::CCycleBase(
					float flCycle);  // 125
			CAnimCycle::CAnimCycle(
					float flCycle);  // 1357
			CCycleBase::CCycleBase(
					float flCycle);  // 125
			CAnimCycle::CAnimCycle(
					float flCycle);  // 1358
		}
		ClipIndex::ClipIndex(
				uint16 nGroupIndex,
				uint16 nClipIndex);  // 58
		ClipSegment::GetClipIndex(); // 1351
		HSequence::operator==(
				const HSequence& other);  // 1353
	}
	ClipIndex::ClipIndex(
			uint16 nGroupIndex,
			uint16 nClipIndex);  // 58
	ClipSegment::GetClipIndex(); // 1349
	ClipIndex::IsValid(); // 1349
} /* size: 0, inline expansions: 3 (32 bytes) */

// <0195F528> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:1381
// variables: 2
// function calls: 7
void CMotionMatchingUpdateNode::CalcLastTransitionValues(CAnimGraphUpdateContext& context)
{
	MotionMatchingInstanceData* pInstData; // 1383
	{
		CRootMotion rootMotion; // 1390
		Vector::operator=(
				const Vector& vOther);  // 1391
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 1383
	Vector::operator=(
			const Vector& vOther);  // 1395
} /* size: 240, variables: 1, inline expansions: 6 (106 bytes) */

// <0195F047> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:1401
// variables: 8
// function calls: 11
void CMotionMatchingUpdateNode::CalcStartTransitionValues(CAnimGraphUpdateContext& context)
{
	MotionMatchingInstanceData* pInstData; // 1403
	Vector vVelocityWS; // 1405
	{
		const ClipSegment& currentSegment; // 1410
		const ClipInfo& currentClip; // 1411
		{
			float flUnclampedCycle; // 1415
			float flUnclampedPrevCycle; // 1416
			const ISequence* pSequence; // 1418
			CRootMotion rootMotion; // 1419
			Vector::operator=(
					const Vector& vOther);  // 1420
		}
		MotionMatchingInstanceData::GetCurrentSegment(); // 1410
		ClipIndex::ClipIndex(
				uint16 nGroupIndex,
				uint16 nClipIndex);  // 58
		ClipSegment::GetClipIndex(); // 1411
		HSequence::operator==(
				const HSequence& other);  // 1412
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 1403
	Vector::operator-=(
			const Vector& v);  // 1427
} /* size: 456, variables: 2, inline expansions: 6 (125 bytes) */

// <0195EB6A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:1431
// variables: 5
// function calls: 15
void CMotionMatchingUpdateNode::CalcMotionCorrection(CAnimGraphUpdateContext& context, const float* pClipVector, const float* pGoalVector)
{
	MotionCorrection totalCorrection; // 1433
	int nDimensionOffset; // 1435
	{
		int i; // 1436
		{
			const CMotionMetricEvaluator* pMetric; // 1438
			MotionCorrection metricCorrection; // 1440
			CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::IsValid(); // 35
			CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::Get(); // 97
			CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::operator[](
					int index);  // 1438
			CRelativeOffset<const CMotionMetricEvaluator>::IsValid(); // 35
			CRelativeOffset<const CMotionMetricEvaluator>::Get(); // 1438
			Vector::operator=(
					const Vector& vOther);  // 23
			PositionCorrection::operator=(
					const PositionCorrection  &);  // 1448
			{
			}
			CRotation::operator=(
					const CRotation& rot);  // 31
			RotationCorrection::operator=(
					const RotationCorrection  &);  // 1457
		}
		CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::Count(); // 1436
	}
	{
	}
	{
	}
	CRotation::CRotation(
			angle_t angleDegrees);  // 23
	CRotation::CRotation(
			angle_t angleDegrees);  // 31
	RotationCorrection::RotationCorrection(); // 39
	PositionCorrection::PositionCorrection(); // 39
	MotionCorrection::MotionCorrection(); // 1433
} /* size: 0, variables: 2, inline expansions: 5 (255 bytes) */

// <0195E739> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:1468
// variables: 8
// function calls: 9
void CMotionMatchingUpdateNode::AccumulateTags(CAnimGraphUpdateContext& context)
{
	const MotionMatchingInstanceData* pInstData; // 1470
	{
		const ClipSegment& currentSegment; // 1475
		const ClipInfo& currentClip; // 1476
		{
			const float  flUnclampedCycle; // 1480
			const float  flUnclampedPrevCycle; // 1481
			const float  prevCycle; // 1483
			const float  relativeCycle; // 1484
			const int  wrapCount; // 1485
		}
		MotionMatchingInstanceData::GetCurrentSegment(); // 1475
		ClipIndex::ClipIndex(
				uint16 nGroupIndex,
				uint16 nClipIndex);  // 58
		ClipSegment::GetClipIndex(); // 1476
		HSequence::operator==(
				const HSequence& other);  // 1478
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 1470
} /* size: 470, variables: 1, inline expansions: 5 (77 bytes) */

// <0195DBDF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:1494
// variables: 23
// function calls: 27
void CMotionMatchingUpdateNode::ShouldPerformNewSearch(CAnimGraphUpdateContext& context)
{
	const MotionMatchingInstanceData* pInstData; // 1496
	{
		float flNewElapsedTime; // 1515
		float flPrevElapsedTime; // 1516
		int nLastSampleCount; // 1518
		int nNewSampleCount; // 1519
	}
	{
		const ClipSegment& currentSegment; // 1532
		const ClipInfo& currentClip; // 1533
		{
			const ISequence* pSequence; // 1537
			const CAnimCycle  cycle; // 1539
			const CAnimCycle  prevCycle; // 1540
			const int  nFootMotionCount; // 1542
			{
				int iFoot; // 1543
				{
					const CFootMotion* pFootMotion; // 1545
					{
						int nNextCycleIndex; // 1548
						int nPrevCycleIndex; // 1549
						const CFootCycle  nextFootCycle; // 1555
						const CFootCycle  prevFootCycle; // 1556
						CCycleBase::GetValue(); // 125
						CCycleBase::CCycleBase(
								float flCycle);  // 125
						CAnimCycle::CAnimCycle(
								const CAnimCycle& rhs);  // 1555
						CCycleBase::GetValue(); // 125
						CCycleBase::CCycleBase(
								float flCycle);  // 125
						CAnimCycle::CAnimCycle(
								const CAnimCycle& rhs);  // 1556
						CCycleBase::operator<(
								float rhs);  // 143
						CFootCycleDefinition::IsStationary(); // 1557
						CCycleBase::CCycleBase(
								float flCycle);  // 126
						CFootCycle::CFootCycle(
								float flCycle);  // 126
						CFootCycle::operator-(
								const CFootCycle& rhs);  // 1557
					}
				}
			}
			CCycleBase::CCycleBase(
					float flCycle);  // 125
			CAnimCycle::CAnimCycle(
					float flCycle);  // 1539
			CCycleBase::CCycleBase(
					float flCycle);  // 125
			CAnimCycle::CAnimCycle(
					float flCycle);  // 1540
		}
		MotionMatchingInstanceData::GetCurrentSegment(); // 1532
		ClipIndex::ClipIndex(
				uint16 nGroupIndex,
				uint16 nClipIndex);  // 58
		ClipSegment::GetClipIndex(); // 1533
		HSequence::operator==(
				const HSequence& other);  // 1535
	}
	{
		int iClipGroup; // 1571
		{
			const CMotionClipGroupData& currentGroup; // 1573
			const int  nGroupTagIndex; // 1574
		}
	}
	{
		const ClipSegment& currentSegment; // 1589
		const ClipInfo& currentClip; // 1590
		{
			float flRemainingTime; // 1595
		}
		MotionMatchingInstanceData::GetCurrentSegment(); // 1589
		ClipIndex::ClipIndex(
				uint16 nGroupIndex,
				uint16 nClipIndex);  // 58
		ClipSegment::GetClipIndex(); // 1590
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<MotionMatchingInstanceData>(
						const CPackedHandle<MotionMatchingInstanceData>& handle);  // 1496
} /* size: 985, variables: 1, inline expansions: 5 (84 bytes) */

