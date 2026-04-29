
//
// animgraph/directionalblendupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 22
//

// <018396C4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:26
void GetBaseMap(void)
{
} /* size: 0 */

// <01839606> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:26
// variables: 2
datamap_t* DataMapInit<CDirectionalBlendInstanceData>(CDirectionalBlendInstanceData *)
{
	const char* pDataMapInit_className; // 26
	typedescription_t dataDesc; // 26
} /* size: 154, variables: 2 */

// <0183959A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:37
// function call: 1
void CDirectionalBlendInstanceData::CDirectionalBlendInstanceData()
{
	CDampedValue::CDampedValue(
			float flStartingValue,
			float flStartingVelocity);  // 37
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0183957E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:37
void CDirectionalBlendInstanceData::CDirectionalBlendInstanceData()
{
} /* size: 0 */

// <01839338> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:46
// function calls: 8
void CDirectionalBlendUpdateNode::CDirectionalBlendUpdateNode(CAnimGraphInitContext& initContext)
{
	CLeafUpdateNode::CLeafUpdateNode(
			CAnimGraphInitContext& initContext);  // 47
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CDirectionalBlendInstanceData>::CPackedHandle(); // 47
	CAnimParamHandle::CAnimParamHandle(); // 47
	CDampedValue::CDampedValue(
			float flStartingValue,
			float flStartingVelocity);  // 37
	CDirectionalBlendInstanceData::CDirectionalBlendInstanceData(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<true>::AddItem<CDirectionalBlendInstanceData>(
						CPackedHandle<CDirectionalBlendInstanceData>* handleOut);  // 50
} /* size: 193, inline expansions: 8 (184 bytes) */

// <01839313> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:46
void CDirectionalBlendUpdateNode::CDirectionalBlendUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

// <01838AB4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:54
// variables: 17
// function calls: 22
void CDirectionalBlendUpdateNode::Update(CAnimGraphUpdateContext& context)
{
	CDirectionalBlendInstanceData* pInstData; // 63
	float& cycle; // 67
	float& prevCycle; // 68
	int wrapCount; // 70
	float unClampedCycle; // 71
	float flPlaybackDirection; // 72
	float duration; // 74
	const char   __FUNCTION__; // 32530
	const float  newPlaybackSpeed; // 109
	{
		float flPrevCycleUnclamped; // 83
		float flNextCycleUnclamped; // 84
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 104
	}
	{
		float elapsedAnimTime; // 116
		float flCycleStartTime; // 117
	}
	{
		int i; // 130
		{
			int sequenceIndex; // 132
			HSequence hSequence; // 133
			CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
			PackedHandleID::PackedHandleID(
					const PackedHandleID& rhs);  // 260
			CPackedDataBase::operator[]<CDirectionalBlendInstanceData>(
									const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 77
			CAnimGraphInstanceData::operator[]<CDirectionalBlendInstanceData>(
									const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 59
			CAnimGraphUpdateContext::operator[]<CDirectionalBlendInstanceData>(
									const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 132
			HSequence::operator==(
					const HSequence& other);  // 135
			CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
			PackedHandleID::PackedHandleID(
					const PackedHandleID& rhs);  // 260
			CPackedDataBase::operator[]<CDirectionalBlendInstanceData>(
									const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 77
			CAnimGraphInstanceData::operator[]<CDirectionalBlendInstanceData>(
									const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 59
			CAnimGraphUpdateContext::operator[]<CDirectionalBlendInstanceData>(
									const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 137
			CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
			PackedHandleID::PackedHandleID(
					const PackedHandleID& rhs);  // 260
			CPackedDataBase::operator[]<CDirectionalBlendInstanceData>(
									const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 77
			CAnimGraphInstanceData::operator[]<CDirectionalBlendInstanceData>(
									const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 59
			CAnimGraphUpdateContext::operator[]<CDirectionalBlendInstanceData>(
									const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 137
		}
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 63
	CDirectionalBlendUpdateNode::GetDuration(
			CAnimGraphUpdateContext& context);  // 74
} /* size: 0, variables: 9, inline expansions: 6 (157 bytes) */

// <01838517> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:143
// variables: 7
// function calls: 16
void CDirectionalBlendUpdateNode::CreatePoseOp(CAnimGraphUpdateContext& context)
{
	CDirectionalBlendInstanceData* pInstData; // 145
	PoseHandle poseHandles; // 146
	{
		int i; // 148
		{
			int sequenceIndex; // 150
			HSequence hSequence; // 152
			float cycle; // 153
			PoseHandle hPose; // 155
			HSequence::operator==(
					const HSequence& other);  // 160
			CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
			PackedHandleID::PackedHandleID(
					const PackedHandleID& rhs);  // 260
			CPackedDataBase::operator[]<CDirectionalBlendInstanceData>(
									const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 77
			CAnimGraphInstanceData::operator[]<CDirectionalBlendInstanceData>(
									const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 59
			CAnimGraphUpdateContext::operator[]<CDirectionalBlendInstanceData>(
									const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 162
			CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
			PackedHandleID::PackedHandleID(
					const PackedHandleID& rhs);  // 260
			CPackedDataBase::operator[]<CDirectionalBlendInstanceData>(
									const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 77
			CAnimGraphInstanceData::operator[]<CDirectionalBlendInstanceData>(
									const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 59
			CAnimGraphUpdateContext::operator[]<CDirectionalBlendInstanceData>(
									const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 162
		}
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 59
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	CAnimGraphUpdateContext::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 145
} /* size: 335, variables: 2, inline expansions: 5 (102 bytes) */

// <018381C2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:170
// variables: 2
// function calls: 11
void CDirectionalBlendUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	const char   __FUNCTION__; // 32714
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
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
			const CAnimGraphUpdateContext& context);  // 172
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 173
} /* size: 0, variables: 1, inline expansions: 11 (176 bytes) */

// <0183802E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:177
// function calls: 5
void CDirectionalBlendUpdateNode::GetCycle(CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 179
} /* size: 88, inline expansions: 5 (68 bytes) */

// <01866108> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:183
void CDirectionalBlendUpdateNode::GetDuration(CAnimGraphUpdateContext& context)
{
} /* size: 52 */

// <01837766> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:196
// variables: 13
// function calls: 29
void CDirectionalBlendUpdateNode::GetTotalMovement(CAnimGraphUpdateContext& context)
{
	float paramValue; // 200
	BlendWeights blendWeights; // 201
	CMotionTransform sequenceMotion; // 203
	const char   __FUNCTION__; // 32790
	float flWeight; // 217
	CMotionTransform motion; // 219
	float length1; // 221
	float length2; // 222
	float moveDist; // 224
	{
		int i; // 205
		{
			const int  sequenceIndex; // 207
			{
				const ISequence* pSequence; // 210
				Vector::operator=(
						const Vector& vOther);  // 17
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 17
				CMotionTransform::operator=(
						CMotionTransform &);  // 211
			}
			HSequence::operator==(
					const HSequence& other);  // 208
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 215
	}
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 203
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 203
	CloseEnough(float a,
			float b,
			float epsilon);  // 215
	Lerp<CMotionTransform>(float flPercent,
				const CMotionTransform& A,
				const CMotionTransform& B);  // 219
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 221
	Vector::Normalized(); // 225
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 222
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 225
	Vector::operator=(
			const Vector& vOther);  // 225
} /* size: 0, variables: 9, inline expansions: 25 (728 bytes) */

// <01836D59> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:231
// variables: 14
// function calls: 34
void CDirectionalBlendUpdateNode::GetRemainingMovement(CAnimGraphUpdateContext& context, float flCycle)
{
	float paramValue; // 235
	BlendWeights blendWeights; // 236
	CMotionTransform sequenceMotion; // 238
	const char   __FUNCTION__; // 32893
	float flWeight; // 254
	CMotionTransform motion; // 256
	float length1; // 258
	float length2; // 259
	float moveDist; // 261
	{
		int i; // 240
		{
			const int  sequenceIndex; // 242
			{
				const ISequence* pSequence; // 245
				float flTestCycle; // 247
				Vector::operator=(
						const Vector& vOther);  // 17
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 17
				CMotionTransform::operator=(
						CMotionTransform &);  // 248
				CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
				PackedHandleID::PackedHandleID(
						const PackedHandleID& rhs);  // 260
				CPackedDataBase::operator[]<CDirectionalBlendInstanceData>(
										const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 77
				CAnimGraphInstanceData::operator[]<CDirectionalBlendInstanceData>(
										const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 59
				CAnimGraphUpdateContext::operator[]<CDirectionalBlendInstanceData>(
										const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 247
			}
			HSequence::operator==(
					const HSequence& other);  // 243
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 252
	}
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 238
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 238
	CloseEnough(float a,
			float b,
			float epsilon);  // 252
	Lerp<CMotionTransform>(float flPercent,
				const CMotionTransform& A,
				const CMotionTransform& B);  // 256
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 258
	Vector::Normalized(); // 262
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 259
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 262
	Vector::operator=(
			const Vector& vOther);  // 262
} /* size: 0, variables: 9, inline expansions: 25 (734 bytes) */

// <0183664F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:268
// variables: 4
// function calls: 23
void CDirectionalBlendUpdateNode::Reset(CAnimGraphUpdateContext& context, float flCycle)
{
	{
		CDirectionalBlendInstanceData* pInstData; // 277
		float duration; // 285
		{
			float elapsedAnimTime; // 295
			float flCycleStartTime; // 296
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
			float flCycle);  // 275
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CDirectionalBlendInstanceData>(
								const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CDirectionalBlendInstanceData>(
								const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CDirectionalBlendInstanceData>(
								const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 277
		CDirectionalBlendUpdateNode::GetDuration(
				CAnimGraphUpdateContext& context);  // 285
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
		const CAnimGraphUpdateContext& context);  // 272
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
			const CAnimGraphUpdateContext& context);  // 273
} /* size: 597, inline expansions: 11 (254 bytes) */

// <018364A4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:314
// variable: 1
// function calls: 5
void CDirectionalBlendUpdateNode::IsFinished(CAnimGraphUpdateContext& context)
{
	CDirectionalBlendInstanceData* pInstData; // 316
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 316
} /* size: 112, variables: 1, inline expansions: 5 (77 bytes) */

// <018362B5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:322
// variable: 1
// function calls: 6
void CDirectionalBlendUpdateNode::GetTimeTillFinished(CAnimGraphUpdateContext& context)
{
	CDirectionalBlendInstanceData* pInstData; // 324
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 324
	CDirectionalBlendUpdateNode::GetDuration(
			CAnimGraphUpdateContext& context);  // 328
} /* size: 225, variables: 1, inline expansions: 6 (116 bytes) */

// <018360D8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:337
// variable: 1
// function calls: 5
void CDirectionalBlendUpdateNode::OnSave(const CAnimGraphUpdateContext& context, ISave* pSave)
{
	const CDirectionalBlendInstanceData* pInstData; // 339
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 339
} /* size: 131, variables: 1, inline expansions: 5 (76 bytes) */

// <01835EFB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:344
// variable: 1
// function calls: 5
void CDirectionalBlendUpdateNode::OnRestore(CAnimGraphUpdateContext& context, IRestore* pRestore)
{
	CDirectionalBlendInstanceData* pInstData; // 346
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 346
} /* size: 131, variables: 1, inline expansions: 5 (76 bytes) */

// <01835700> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:351
// variables: 15
// function calls: 23
void CDirectionalBlendUpdateNode::CalculateRootMotion(CAnimGraphUpdateContext& context)
{
	CDirectionalBlendInstanceData* pInstData; // 353
	const int* indices; // 355
	const float* weights; // 356
	float moveDist; // 358
	CRootMotion motion; // 360
	float flCycleTimeDelta; // 362
	float flPrevCycleTimeDelta; // 363
	float duration; // 365
	int wrap; // 367
	float flUnclampedCycle; // 368
	float flUnclampedPrevCycle; // 369
	{
		int i; // 373
		{
			const int  sequenceIndex; // 375
			{
				const ISequence* pSequence; // 379
				CRootMotion sequenceMotion; // 381
				_mm_load_ss(const float* __P); // 21
				_mm_sqrt_ss(__m128 __A); // 21
				_mm_cvtss_f32(__m128 __A); // 21
				FastSqrt(float x); // 1249
				VectorLength(const Vector& v); // 1256
				Vector::Length(); // 44
				CMotionTransform::Length(); // 384
			}
			HSequence::operator==(
					const HSequence& other);  // 377
		}
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 353
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
			const CRootMotion  &);  // 360
	CDirectionalBlendUpdateNode::GetDuration(
			CAnimGraphUpdateContext& context);  // 365
	Vector::Normalized(); // 388
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 388
	Vector::operator=(
			const Vector& vOther);  // 388
} /* size: 0, variables: 11, inline expansions: 15 (516 bytes) */

// <0183482D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:394
// variables: 8
// function calls: 47
void CDirectionalBlendUpdateNode::CalculateFootMotion(CAnimGraphUpdateContext& context, const CMotionTransform& newLocalToWorld, CStrideStatus& footPoseInfo)
{
	CDirectionalBlendInstanceData* pInstData; // 398
	const int* indices; // 400
	const float* weights; // 401
	{
		int i; // 403
		{
			const int  sequenceIndex; // 405
			{
				const ISequence* pSequence; // 409
				{
					int iFoot; // 411
					{
						CFootMotionStatus currentFootStatus; // 413
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
								CFootMotionStatus &);  // 428
						CDirectionalBlendUpdateNode::GetDuration(
								CAnimGraphUpdateContext& context);  // 420
						CCycleBase::CCycleBase(
								float flCycle);  // 125
						CAnimCycle::CAnimCycle(
								float flCycle);  // 418
						CCycleBase::CCycleBase(
								float flCycle);  // 125
						CAnimCycle::CAnimCycle(
								float flCycle);  // 417
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
								const CFootMotionStatus  &);  // 424
					}
				}
			}
			HSequence::operator==(
					const HSequence& other);  // 407
		}
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 398
} /* size: 0, variables: 3, inline expansions: 5 (124 bytes) */

// <0183407D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:436
// variables: 7
// function calls: 26
void CDirectionalBlendUpdateNode::UpdateWeights(CAnimGraphUpdateContext& context)
{
	CDampedValue& dampedValue; // 438
	float flTargetHeading; // 440
	const char   __FUNCTION__; // 32714
	const float  paramValue; // 456
	BlendWeights blendWeights; // 458
	{
		float flNewTargetValue; // 446
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 447
		}
		Sign(float x); // 446
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 438
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 459
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 460
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 461
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CDirectionalBlendInstanceData>(
							const CPackedHandle<CDirectionalBlendInstanceData>& handle);  // 462
} /* size: 0, variables: 5, inline expansions: 25 (349 bytes) */

// <01833F06> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:466
// variables: 9
// function call: 1
void CDirectionalBlendUpdateNode::CalcBlendWeights(CAnimGraphUpdateContext& context, float paramValue)
{
	BlendWeights results; // 468
	bool bFound; // 471
	{
		uint32 i; // 472
		{
			const float  lowValue; // 478
			const float  highValue; // 479
			const float  blend; // 481
		}
	}
	{
		const float  lowValue; // 504
		const float  highValue; // 505
		const float  blend; // 507
	}
	BlendWeights::BlendWeights(); // 468
} /* size: 181, variables: 2, inline expansions: 1 (0 bytes) */

