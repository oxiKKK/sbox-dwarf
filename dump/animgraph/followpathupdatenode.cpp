
//
// animgraph/followpathupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 12
//

// <0182B23F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathupdatenode.cpp:16
void GetBaseMap(void)
{
} /* size: 0 */

// <0182B181> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathupdatenode.cpp:16
// variables: 2
datamap_t* DataMapInit<CFollowPathInstanceData>(CFollowPathInstanceData *)
{
	const char* pDataMapInit_className; // 16
	typedescription_t dataDesc; // 16
} /* size: 124, variables: 2 */

// <0182AC4C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathupdatenode.cpp:24
// variables: 5
// function calls: 16
void CFollowPathUpdateNode::CFollowPathUpdateNode(CAnimGraphInitContext& initContext)
{
	{
		CFollowPathInstanceData* pInstData; // 27
		const int  nFootCount; // 29
	}
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CFollowPathInstanceData>::CPackedHandle(); // 25
	CAnimParamHandle::CAnimParamHandle(); // 25
	{
		CFollowPathInstanceData* pInstData; // 27
		const int  nFootCount; // 29
		CRelativeOffset<CMotionTransform>::CRelativeOffset(); // 84
		CRelativeArray<CMotionTransform>::CRelativeArray(); // 12
		CDampedValue::CDampedValue(
				float flStartingValue,
				float flStartingVelocity);  // 12
		CFollowPathInstanceData::CFollowPathInstanceData(); // 123
		PackedHandleID::operator=(
				uint32 id);  // 127
		CPackedDataT<true>::AddItem<CFollowPathInstanceData>(
						CPackedHandle<CFollowPathInstanceData>* handleOut);  // 27
		{
			uint32 i; // 183
			{
			}
			{
			}
			CRotation::CRotation(
					const CRotation& rot);  // 22
			CRotation::CRotation(
					const CRotation& rot);  // 17
			CMotionTransform::CMotionTransform(
					const CMotionTransform  &);  // 185
		}
		CPackedDataT<true>::AddArray<CMotionTransform, const CMotionTransform&>(
									uint32 count,
									CPackedHandle<CMotionTransform>* handleOut,
									const CMotionTransform& param1);  // 30
		{
		}
		CRelativeOffset<CMotionTransform>::SetOffset(
				const CMotionTransform* targetPtr);  // 20
		CRelativeOffset<CMotionTransform>::operator=(
				const CMotionTransform* targetPtr);  // 115
		CRelativeArray<CMotionTransform>::SetArray(
			const CMotionTransform* targetArray,
			int32 count);  // 30
	}
} /* size: 0, inline expansions: 3 (38 bytes) */

// <0182AC0D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathupdatenode.cpp:24
// variables: 2
void CFollowPathUpdateNode::CFollowPathUpdateNode(CAnimGraphInitContext& initContext)
{
	{
		CFollowPathInstanceData* pInstData; // 27
		const int  nFootCount; // 29
	}
} /* size: 0 */

// <0182A98C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathupdatenode.cpp:34
// variables: 2
// function calls: 5
void CFollowPathUpdateNode::Update(CAnimGraphUpdateContext& context)
{
	CFollowPathInstanceData* pInstData; // 36
	{
		float flTargetAngle; // 42
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFollowPathInstanceData>(
						const CPackedHandle<CFollowPathInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFollowPathInstanceData>(
						const CPackedHandle<CFollowPathInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CFollowPathInstanceData>(
						const CPackedHandle<CFollowPathInstanceData>& handle);  // 36
} /* size: 281, variables: 1, inline expansions: 5 (85 bytes) */

// <0182932E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathupdatenode.cpp:61
// variables: 33
// function calls: 83
void CFollowPathUpdateNode::PostUpdate(CAnimGraphUpdateContext& context)
{
	CFollowPathInstanceData* pInstData; // 63
	{
		float flNewScale; // 67
		{
			CMotionTransform newRootTransform; // 71
			CStrideStatus footPoseInfo; // 73
			float flAccumulatedScale; // 76
			float cycleTotal; // 78
			{
				int i; // 79
				{
					float flProgression; // 81
					float flCurve; // 82
				}
			}
			{
				int i; // 88
				{
					CMotionTransform animRootPosWS; // 90
					CMotionTransform pathRootPosWS; // 91
					VectorAligned vToAnimPos; // 110
					VectorAligned vToPathPos; // 111
					float dp; // 113
					float angleDegrees; // 114
					float flScale; // 116
					float flProgression; // 118
					float flCurve; // 119
					{
						float flOriginalDistance; // 98
						float flDistToGoal; // 99
						{
							float flDelta; // 102
							Vector vPastGoalVec; // 104
							Vector::Vector(); // 1450
							VectorMultiply(const Vector& a,
									vec_t b,
									Vector& c);  // 1451
							Vector::operator*(
									float fl);  // 104
							Vector::operator+=(
									const Vector& v);  // 106
						}
						_mm_cvtss_f32(__m128 __A); // 1534
						GetZSIMD<>(fltx4 a); // 76
						VectorAligned::z(); // 40
						_mm_cvtss_f32(__m128 __A); // 1515
						GetYSIMD<>(fltx4 a); // 75
						VectorAligned::y(); // 40
						_mm_cvtss_f32(__m128 __A); // 1496
						GetXSIMD<>(fltx4 a); // 74
						VectorAligned::x(); // 40
						Vector::Vector(
							vec_t X,
							vec_t Y,
							vec_t Z);  // 40
						VectorAligned::operator Vector(); // 98
						Vector::Vector(); // 1443
						VectorSubtract(const Vector& a,
								const Vector& b,
								Vector& c);  // 1444
						Vector::operator-(
								const Vector& v);  // 98
						_mm_load_ss(const float* __P); // 21
						_mm_sqrt_ss(__m128 __A); // 21
						_mm_cvtss_f32(__m128 __A); // 21
						FastSqrt(float x); // 1249
						VectorLength(const Vector& v); // 1256
						Vector::Length(); // 98
						CAnimParamHandle::CAnimParamHandle(); // 99
					}
					Clamp<float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 210
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 205
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 116
					_mm_load_ss(const float* __P); // 21
					_mm_sqrt_ss(__m128 __A); // 21
					_mm_cvtss_f32(__m128 __A); // 21
					FastSqrt(float x); // 1249
					VectorLength(const Vector& v); // 1256
					Vector::Length(); // 44
					CMotionTransform::Length(); // 91
					Vector::Vector(); // 1443
					VectorSubtract(const Vector& a,
							const Vector& b,
							Vector& c);  // 1444
					Vector::operator-(
							const Vector& v);  // 110
					Vector::Normalized(); // 110
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
							const Vector& rhs);  // 110
					Vector::Vector(); // 1443
					VectorSubtract(const Vector& a,
							const Vector& b,
							Vector& c);  // 1444
					Vector::operator-(
							const Vector& v);  // 111
					Vector::Normalized(); // 111
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
							const Vector& rhs);  // 111
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 1694
					{
						fltx4 retVal; // 1333
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 1334
					}
					SplatZSIMD<>(const fltx4& a); // 1695
					{
						fltx4 retVal; // 1314
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 1315
					}
					SplatYSIMD<>(const fltx4& a); // 1695
					{
						fltx4 retVal; // 1295
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 1296
					}
					SplatXSIMD<>(const fltx4& a); // 1695
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1695
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1695
					Dot3SIMD<>(const fltx4& a,
							const fltx4& b);  // 379
					_mm_cvtss_f32(__m128 __A); // 1496
					GetXSIMD<>(fltx4 a); // 380
					VectorAligned::Dot(
						const VectorAligned& v);  // 416
					DotProduct(const VectorAligned& lhs,
							const VectorAligned& rhs);  // 113
					clamp<float, float>(const float& val,
								const float& minVal,
								const float& maxVal);  // 114
					RAD2DEG(float flRadians); // 114
				}
			}
			CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
			CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 71
			CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
			CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
			CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 74
		}
		{
			float flScaleDelta; // 129
			float flDelta; // 130
			Sign(float x); // 133
			clamp<float, float>(const float& val,
						const float& minVal,
						const float& maxVal);  // 134
		}
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFollowPathInstanceData>(
						const CPackedHandle<CFollowPathInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFollowPathInstanceData>(
						const CPackedHandle<CFollowPathInstanceData>& handle);  // 59
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	CAnimGraphUpdateContext::operator[]<CFollowPathInstanceData>(
						const CPackedHandle<CFollowPathInstanceData>& handle);  // 63
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 65
} /* size: 1590, variables: 1, inline expansions: 6 (119 bytes) */

// <0182922D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathupdatenode.cpp:140
// variable: 1
// function calls: 3
void CFollowPathUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	PoseHandle hPose; // 142
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 144
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 146
} /* size: 38, variables: 1, inline expansions: 3 (14 bytes) */

// <0182904A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathupdatenode.cpp:153
// variable: 1
// function calls: 5
void CFollowPathUpdateNode::Reset(CAnimGraphUpdateContext& context, float flCycle)
{
	CFollowPathInstanceData* pInstData; // 157
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFollowPathInstanceData>(
						const CPackedHandle<CFollowPathInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFollowPathInstanceData>(
						const CPackedHandle<CFollowPathInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CFollowPathInstanceData>(
						const CPackedHandle<CFollowPathInstanceData>& handle);  // 157
} /* size: 116, variables: 1, inline expansions: 5 (69 bytes) */

// <01828E71> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathupdatenode.cpp:165
// variable: 1
// function calls: 5
void CFollowPathUpdateNode::OnSave(const CAnimGraphUpdateContext& context, ISave* pSave)
{
	const CFollowPathInstanceData* pInstData; // 167
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFollowPathInstanceData>(
						const CPackedHandle<CFollowPathInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFollowPathInstanceData>(
						const CPackedHandle<CFollowPathInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CFollowPathInstanceData>(
						const CPackedHandle<CFollowPathInstanceData>& handle);  // 167
} /* size: 131, variables: 1, inline expansions: 5 (76 bytes) */

// <01828C98> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathupdatenode.cpp:172
// variable: 1
// function calls: 5
void CFollowPathUpdateNode::OnRestore(CAnimGraphUpdateContext& context, IRestore* pRestore)
{
	CFollowPathInstanceData* pInstData; // 174
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFollowPathInstanceData>(
						const CPackedHandle<CFollowPathInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFollowPathInstanceData>(
						const CPackedHandle<CFollowPathInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CFollowPathInstanceData>(
						const CPackedHandle<CFollowPathInstanceData>& handle);  // 174
} /* size: 131, variables: 1, inline expansions: 5 (76 bytes) */

// <01827CF2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathupdatenode.cpp:179
// variables: 11
// function calls: 61
void CFollowPathUpdateNode::CalculateRootMotion(CAnimGraphUpdateContext& context)
{
	CRootMotion motion; // 181
	{
		const float  flOriginalDist; // 187
		const CMotionTransform  startTransform; // 189
		const Vector  vDestPos; // 190
		Vector vMoveVec; // 191
		float flMoveDistance; // 195
		Vector vWaypointPos; // 196
		Vector vToWayPoint; // 197
		Vector vVelocityDirWS; // 198
		Vector vResultPos; // 212
		{
			CMotionTransform newTransform; // 202
			{
			}
			{
			}
			CRotation::CRotation(
					const CRotation& rot);  // 22
			CRotation::CRotation(
					const CRotation& rot);  // 17
			CMotionTransform::CMotionTransform(
					const CMotionTransform  &);  // 202
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 204
			Vector::operator=(
					const Vector& vOther);  // 204
			Vector::operator=(
					const Vector& vOther);  // 205
		}
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 191
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 195
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 197
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 200
		Vector::Normalized(); // 209
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 209
		Vector::operator=(
				const Vector& vOther);  // 209
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 212
		Vector::operator=(
				const Vector& vOther);  // 213
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 221
		Vector::Normalized(); // 221
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 221
		Vector::operator=(
				const Vector& vOther);  // 221
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CFollowPathInstanceData>(
							const CPackedHandle<CFollowPathInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CFollowPathInstanceData>(
							const CPackedHandle<CFollowPathInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CFollowPathInstanceData>(
							const CPackedHandle<CFollowPathInstanceData>& handle);  // 218
		{
		}
		{
		}
		CRotation::CRotation(
				angle_t angleDegrees);  // 23
		CRotation::CRotation(
				angle_t angleDegrees);  // 218
		{
		}
		CRotation::operator=(
				const CRotation& rot);  // 218
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFollowPathInstanceData>(
						const CPackedHandle<CFollowPathInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFollowPathInstanceData>(
						const CPackedHandle<CFollowPathInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CFollowPathInstanceData>(
						const CPackedHandle<CFollowPathInstanceData>& handle);  // 183
	Vector::operator=(
			const Vector& vOther);  // 225
	Vector::operator=(
			const Vector& vOther);  // 226
} /* size: 0, variables: 1, inline expansions: 7 (123 bytes) */

// <0182321C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathupdatenode.cpp:233
// variables: 75
// function calls: 244
void CFollowPathUpdateNode::CalculateFootMotion(CAnimGraphUpdateContext& context, const CMotionTransform& newRootTransform, CStrideStatus& footPoseInfo)
{
	const float  flScale; // 237
	{
		int i; // 241
		{
			CMotionTransform predictedMotionMS; // 243
			float flOriginalDistance; // 248
			VectorAligned vMoveVecMS; // 253
			float flDistance; // 255
			CMotionTransform vPredictedPathXform; // 258
			CMotionTransform pathXfromMS; // 261
			{
				float flDistToGoal; // 277
				{
					float flDelta; // 280
					Vector vPastGoalVec; // 282
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::Vector(); // 1450
					Vector::operator*(
							float fl);  // 282
					Vector::operator+=(
							const Vector& v);  // 284
				}
				CAnimParamHandle::CAnimParamHandle(); // 277
			}
			{
				float flRemainingCycleTime; // 296
				float flTargetAngle; // 299
				CDampedValue dampedValue; // 302
				CRotation flTurnAmount; // 304
				CRotation::operator float(); // 299
				CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
				PackedHandleID::PackedHandleID(
						const PackedHandleID& rhs);  // 260
				CPackedDataBase::operator[]<CFollowPathInstanceData>(
									const CPackedHandle<CFollowPathInstanceData>& handle);  // 77
				CAnimGraphInstanceData::operator[]<CFollowPathInstanceData>(
									const CPackedHandle<CFollowPathInstanceData>& handle);  // 59
				CAnimGraphUpdateContext::operator[]<CFollowPathInstanceData>(
									const CPackedHandle<CFollowPathInstanceData>& handle);  // 302
				{
				}
				{
				}
				CRotation::CRotation(
						angle_t angleDegrees);  // 23
				CRotation::CRotation(
						angle_t angleDegrees);  // 304
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 307
			}
			{
				float flRemainingCycleTime; // 313
				float flTargetAngleMS; // 316
				CDampedValue dampedValue; // 346
				{
					CMotionTransform predictedTransformMS; // 322
					CRotation::operator float(); // 323
				}
				{
					VectorAligned vLookTargetWS; // 330
					VectorAligned vLookDirectionWS; // 331
					VectorAligned vLookDirectionMS; // 332
					CAnimParamHandle::CAnimParamHandle(); // 330
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
							const Vector& rhs);  // 331
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
							const Vector& rhs);  // 330
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
							const VectorAligned& v);  // 331
					_mm_cvtss_f32(__m128 __A); // 1534
					GetZSIMD<>(fltx4 a); // 76
					VectorAligned::z(); // 40
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 40
					VectorAligned::operator Vector(); // 332
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
							const Vector& rhs);  // 332
					VectorAligned::VectorAligned(
							fltx4 rhs);  // 351
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 1694
					{
						fltx4 retVal; // 1333
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 1334
					}
					SplatZSIMD<>(const fltx4& a); // 1695
					{
						fltx4 retVal; // 1314
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 1315
					}
					SplatYSIMD<>(const fltx4& a); // 1695
					{
						fltx4 retVal; // 1295
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 1296
					}
					SplatXSIMD<>(const fltx4& a); // 1695
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1695
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1695
					Dot3SIMD<>(const fltx4& a,
							const fltx4& b);  // 359
					{
						fltx4 retVal; // 2350
						_mm_sqrt_ps(__m128 __A); // 2351
					}
					SqrtSIMD<>(const fltx4& a); // 360
					{
						fltx4 retVal; // 1981
						_mm_cmpgt_ps(__m128 __A,
								__m128 __B);  // 1982
					}
					CmpGtSIMD<>(const fltx4& a,
							const fltx4& b);  // 361
					{
						fltx4 retVal; // 1662
						_mm_div_ps(__m128 __A,
								__m128 __B);  // 1663
					}
					DivSIMD<>(const fltx4& a,
							const fltx4& b);  // 362
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
							const fltx4& b);  // 362
					VectorAligned::VectorAligned(
							fltx4 rhs);  // 362
					VectorAligned::NormalizedSafe(
							const VectorAligned& v);  // 351
					VectorAligned::Normalized(); // 333
					_mm_cvtss_f32(__m128 __A); // 1534
					GetZSIMD<>(fltx4 a); // 76
					VectorAligned::z(); // 40
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 40
					VectorAligned::operator Vector(); // 333
				}
				CAnimParamHandle::CAnimParamHandle(); // 341
				CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
				PackedHandleID::PackedHandleID(
						const PackedHandleID& rhs);  // 260
				CPackedDataBase::operator[]<CFollowPathInstanceData>(
									const CPackedHandle<CFollowPathInstanceData>& handle);  // 77
				CAnimGraphInstanceData::operator[]<CFollowPathInstanceData>(
									const CPackedHandle<CFollowPathInstanceData>& handle);  // 59
				CAnimGraphUpdateContext::operator[]<CFollowPathInstanceData>(
									const CPackedHandle<CFollowPathInstanceData>& handle);  // 346
				{
				}
				{
				}
				CRotation::CRotation(
						angle_t angleDegrees);  // 23
				CRotation::CRotation(
						angle_t angleDegrees);  // 350
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 350
			}
			{
				VectorAligned vLookTargetWS; // 358
				VectorAligned vPredictedPosition; // 360
				VectorAligned vLookDirectionWS; // 362
				VectorAligned vLookDirectionMS; // 364
				float flTargetAngleMS; // 366
				float flRemainingCycleTime; // 371
				CDampedValue dampedValue; // 373
				float flTurnAmount; // 375
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 377
				CAnimParamHandle::CAnimParamHandle(); // 358
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
						const Vector& rhs);  // 358
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
						const Vector& rhs);  // 360
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
						const VectorAligned& v);  // 362
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 351
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 1694
				{
					fltx4 retVal; // 1333
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1334
				}
				SplatZSIMD<>(const fltx4& a); // 1695
				{
					fltx4 retVal; // 1314
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1315
				}
				SplatYSIMD<>(const fltx4& a); // 1695
				{
					fltx4 retVal; // 1295
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1296
				}
				SplatXSIMD<>(const fltx4& a); // 1695
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1695
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1695
				Dot3SIMD<>(const fltx4& a,
						const fltx4& b);  // 359
				{
					fltx4 retVal; // 2350
					_mm_sqrt_ps(__m128 __A); // 2351
				}
				SqrtSIMD<>(const fltx4& a); // 360
				{
					fltx4 retVal; // 1981
					_mm_cmpgt_ps(__m128 __A,
							__m128 __B);  // 1982
				}
				CmpGtSIMD<>(const fltx4& a,
						const fltx4& b);  // 361
				{
					fltx4 retVal; // 1662
					_mm_div_ps(__m128 __A,
							__m128 __B);  // 1663
				}
				DivSIMD<>(const fltx4& a,
						const fltx4& b);  // 362
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
						const fltx4& b);  // 362
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 362
				VectorAligned::NormalizedSafe(
						const VectorAligned& v);  // 351
				VectorAligned::Normalized(); // 362
				_mm_cvtss_f32(__m128 __A); // 1534
				GetZSIMD<>(fltx4 a); // 76
				VectorAligned::z(); // 40
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 364
				VectorAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 31
				VectorAligned::VectorAligned(
						const Vector& rhs);  // 364
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 366
				CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
				PackedHandleID::PackedHandleID(
						const PackedHandleID& rhs);  // 260
				CPackedDataBase::operator[]<CFollowPathInstanceData>(
									const CPackedHandle<CFollowPathInstanceData>& handle);  // 77
				CAnimGraphInstanceData::operator[]<CFollowPathInstanceData>(
									const CPackedHandle<CFollowPathInstanceData>& handle);  // 59
				CAnimGraphUpdateContext::operator[]<CFollowPathInstanceData>(
									const CPackedHandle<CFollowPathInstanceData>& handle);  // 373
				{
				}
				{
				}
				CRotation::CRotation(
						angle_t angleDegrees);  // 23
				CRotation::CRotation(
						angle_t angleDegrees);  // 377
			}
			Vector::operator=(
					const Vector& vOther);  // 17
			{
			}
			CRotation::operator=(
					const CRotation& rot);  // 17
			CMotionTransform::operator=(
					const CMotionTransform  &);  // 387
			CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
			PackedHandleID::PackedHandleID(
					const PackedHandleID& rhs);  // 260
			CPackedDataBase::operator[]<CFollowPathInstanceData>(
								const CPackedHandle<CFollowPathInstanceData>& handle);  // 77
			CAnimGraphInstanceData::operator[]<CFollowPathInstanceData>(
								const CPackedHandle<CFollowPathInstanceData>& handle);  // 59
			CAnimGraphUpdateContext::operator[]<CFollowPathInstanceData>(
								const CPackedHandle<CFollowPathInstanceData>& handle);  // 388
			{
			}
			CRelativeOffset<CMotionTransform>::IsValid(); // 30
			CRelativeOffset<CMotionTransform>::Get(); // 90
			CRelativeArray<CMotionTransform>::operator[](
					int index);  // 388
			Vector::operator=(
					const Vector& vOther);  // 17
			{
			}
			CRotation::operator=(
					const CRotation& rot);  // 17
			CMotionTransform::operator=(
					const CMotionTransform  &);  // 388
			{
			}
			{
			}
			CRotation::CRotation(
					const CRotation& rot);  // 22
			CRotation::CRotation(
					const CRotation& rot);  // 17
			CMotionTransform::CMotionTransform(
					const CMotionTransform  &);  // 243
			Lerp<CMotionTransform>(float flPercent,
						const CMotionTransform& A,
						const CMotionTransform& B);  // 246
			{
			}
			CRotation::operator=(
					const CRotation& rot);  // 17
			Vector::operator=(
					const Vector& vOther);  // 17
			CMotionTransform::operator=(
					CMotionTransform &);  // 246
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 248
			Lerp<CMotionTransform>(float flPercent,
						const CMotionTransform& A,
						const CMotionTransform& B);  // 250
			{
			}
			CRotation::operator=(
					const CRotation& rot);  // 17
			Vector::operator=(
					const Vector& vOther);  // 17
			CMotionTransform::operator=(
					CMotionTransform &);  // 250
			Lerp<CMotionTransform>(float flPercent,
						const CMotionTransform& A,
						const CMotionTransform& B);  // 251
			{
			}
			CRotation::operator=(
					const CRotation& rot);  // 17
			Vector::operator=(
					const Vector& vOther);  // 17
			CMotionTransform::operator=(
					CMotionTransform &);  // 251
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
					const Vector& rhs);  // 253
			{
				fltx4 retVal; // 1460
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1461
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1463
			}
			SetZSIMD<>(fltx4 a,
					float f);  // 80
			VectorAligned::SetZ(
				vec_t value);  // 254
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1694
			{
				fltx4 retVal; // 1333
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1334
			}
			SplatZSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1314
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1315
			}
			SplatYSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1295
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1296
			}
			SplatXSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			Dot3SIMD<>(const fltx4& a,
					const fltx4& b);  // 298
			{
				fltx4 retVal; // 2350
				_mm_sqrt_ps(__m128 __A); // 2351
			}
			SqrtSIMD<>(const fltx4& a); // 299
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 300
			VectorAligned::Length(); // 255
			CloseEnough(const Vector& a,
					const Vector& b,
					float epsilon);  // 264
			{
			}
			{
			}
			CRotation::CRotation(
					angle_t angleDegrees);  // 23
			CRotation::CRotation(
					angle_t angleDegrees);  // 266
			{
			}
			CRotation::operator=(
					const CRotation& rot);  // 266
			Vector::operator=(
					const Vector& vOther);  // 270
		}
	}
	{
		int i; // 395
		Vector::operator=(
				const Vector& vOther);  // 17
		{
		}
		CRotation::operator=(
				const CRotation& rot);  // 17
		CMotionTransform::operator=(
				const CMotionTransform  &);  // 397
	}
	{
		float flBlendCycle; // 409
		{
			int i; // 402
			Lerp<CMotionTransform>(float flPercent,
						const CMotionTransform& A,
						const CMotionTransform& B);  // 404
			{
			}
			CRotation::operator=(
					const CRotation& rot);  // 17
			Vector::operator=(
					const Vector& vOther);  // 17
			CMotionTransform::operator=(
					CMotionTransform &);  // 404
			Lerp<CMotionTransform>(float flPercent,
						const CMotionTransform& A,
						const CMotionTransform& B);  // 405
			{
			}
			CRotation::operator=(
					const CRotation& rot);  // 17
			Vector::operator=(
					const Vector& vOther);  // 17
			CMotionTransform::operator=(
					CMotionTransform &);  // 405
			Lerp<CMotionTransform>(float flPercent,
						const CMotionTransform& A,
						const CMotionTransform& B);  // 406
			{
			}
			CRotation::operator=(
					const CRotation& rot);  // 17
			Vector::operator=(
					const Vector& vOther);  // 17
			CMotionTransform::operator=(
					CMotionTransform &);  // 406
		}
		{
			int i; // 412
			{
				CMotionTransform xDelta; // 414
				CRelativeOffset<CMotionTransform>::IsValid(); // 30
				CRelativeOffset<CMotionTransform>::Get(); // 90
				{
				}
				CRelativeArray<CMotionTransform>::operator[](
						int index);  // 414
				CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
				PackedHandleID::PackedHandleID(
						const PackedHandleID& rhs);  // 260
				CPackedDataBase::operator[]<CFollowPathInstanceData>(
									const CPackedHandle<CFollowPathInstanceData>& handle);  // 77
				CAnimGraphInstanceData::operator[]<CFollowPathInstanceData>(
									const CPackedHandle<CFollowPathInstanceData>& handle);  // 59
				CAnimGraphUpdateContext::operator[]<CFollowPathInstanceData>(
									const CPackedHandle<CFollowPathInstanceData>& handle);  // 414
				Lerp<CMotionTransform>(float flPercent,
							const CMotionTransform& A,
							const CMotionTransform& B);  // 414
				Vector::operator=(
						const Vector& vOther);  // 17
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 17
				CMotionTransform::operator=(
						const CMotionTransform  &);  // 415
			}
		}
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CFollowPathInstanceData>(
							const CPackedHandle<CFollowPathInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CFollowPathInstanceData>(
							const CPackedHandle<CFollowPathInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CFollowPathInstanceData>(
							const CPackedHandle<CFollowPathInstanceData>& handle);  // 409
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFollowPathInstanceData>(
						const CPackedHandle<CFollowPathInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFollowPathInstanceData>(
						const CPackedHandle<CFollowPathInstanceData>& handle);  // 59
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	CAnimGraphUpdateContext::operator[]<CFollowPathInstanceData>(
						const CPackedHandle<CFollowPathInstanceData>& handle);  // 237
} /* size: 0, variables: 1, inline expansions: 5 (81 bytes) */

