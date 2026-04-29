
//
// animgraph/moverupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 13
//

// <0195DBD5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moverupdatenode.cpp:11
void GetBaseMap(void)
{
} /* size: 0 */

// <0195DB27> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moverupdatenode.cpp:11
// variables: 2
datamap_t* DataMapInit<CMoverInstanceData>(CMoverInstanceData *)
{
	const char* pDataMapInit_className; // 11
	typedescription_t dataDesc; // 11
} /* size: 124, variables: 2 */

// <0195D6A4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moverupdatenode.cpp:19
// function calls: 15
void CMoverUpdateNode::CMoverUpdateNode(CAnimGraphInitContext& initContext)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::CRelativeOffset(); // 9
	CUnaryUpdateNode::CUnaryUpdateNode(
			CAnimGraphInitContext& initContext);  // 20
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CMoverInstanceData>::CPackedHandle(); // 20
	CAnimParamHandle::CAnimParamHandle(); // 20
	CDampedValue::CDampedValue(
			float flStartingValue,
			float flStartingVelocity);  // 12
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 12
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 12
	{
	}
	{
	}
	CRotation::CRotation(
			angle_t angleDegrees);  // 23
	CRotation::CRotation(
			angle_t angleDegrees);  // 12
	{
	}
	{
	}
	CRotation::CRotation(
			angle_t angleDegrees);  // 23
	CRotation::CRotation(
			angle_t angleDegrees);  // 12
	CMoverInstanceData::CMoverInstanceData(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<true>::AddItem<CMoverInstanceData>(
					CPackedHandle<CMoverInstanceData>* handleOut);  // 22
} /* size: 0, inline expansions: 15 (525 bytes) */

// <0195D67F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moverupdatenode.cpp:19
void CMoverUpdateNode::CMoverUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

// <0195C4A3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moverupdatenode.cpp:26
// variables: 25
// function calls: 66
void CMoverUpdateNode::Update(CAnimGraphUpdateContext& context)
{
	CMoverInstanceData* pInstData; // 28
	float flMoveHeading; // 38
	{
		Vector vVelocityMS; // 32
		CAnimParamHandle::CAnimParamHandle(); // 32
		CAnimParamHandle::CAnimParamHandle(); // 32
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 32
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 33
		Vector::operator=(
				const Vector& vOther);  // 33
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
				const Vector& rhs);  // 84
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
					const int  __mask);  // 3341
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3345
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
				const VectorAligned& v);  // 430
		CTransform::RotateVector(
				const VectorAligned& v0);  // 84
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 42
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 42
		VectorAligned::AsVector(); // 84
		CTransform::RotateVector(
				const Vector& v0);  // 34
		Vector::operator=(
				const Vector& vOther);  // 34
	}
	{
		float flTargetAngle; // 43
		float turnAmount; // 47
		{
		}
		{
		}
		CRotation::CRotation(
				angle_t angleDegrees);  // 23
		CRotation::CRotation(
				angle_t angleDegrees);  // 49
		{
		}
		CRotation::operator=(
				const CRotation& rot);  // 49
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CMoverInstanceData>(
					const CPackedHandle<CMoverInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CMoverInstanceData>(
					const CPackedHandle<CMoverInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CMoverInstanceData>(
					const CPackedHandle<CMoverInstanceData>& handle);  // 28
	CAnimParamHandle::CAnimParamHandle(); // 38
	{
	}
	{
	}
	CRotation::CRotation(
			angle_t angleDegrees);  // 23
	CRotation::CRotation(
			angle_t angleDegrees);  // 39
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 39
} /* size: 0, variables: 2, inline expansions: 9 (210 bytes) */

// <0195C3A3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moverupdatenode.cpp:54
// variable: 1
// function calls: 3
void CMoverUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	PoseHandle hPose; // 56
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 58
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 60
} /* size: 38, variables: 1, inline expansions: 3 (14 bytes) */

// <0195C1D5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moverupdatenode.cpp:67
// function calls: 6
void CMoverUpdateNode::GetTotalMovement(CAnimGraphUpdateContext& context)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 69
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 71
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 75
} /* size: 0, inline expansions: 6 (163 bytes) */

// <0195B9E5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moverupdatenode.cpp:80
// variables: 4
// function calls: 25
void CMoverUpdateNode::GetRemainingMovement(CAnimGraphUpdateContext& context, float flCycle)
{
	CMotionTransform motion; // 82
	CMoverInstanceData* pInstData; // 89
	{
		Vector vMovement; // 99
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 99
		Vector::operator+=(
				const Vector& v);  // 105
		Vector::operator=(
				const Vector& vOther);  // 107
		Vector::operator+=(
				const Vector& v);  // 102
	}
	{
		CRotation angle; // 112
		{
		}
		{
		}
		CRotation::CRotation(
				angle_t angleDegrees);  // 23
		CRotation::CRotation(
				angle_t angleDegrees);  // 112
		{
		}
		CRotation::operator+=(
				const CRotation& rot);  // 118
		{
		}
		CRotation::operator=(
				const CRotation& rot);  // 120
		{
		}
		CRotation::operator+=(
				const CRotation& rot);  // 115
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
			const CMotionTransform  &);  // 82
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 84
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 86
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 86
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CMoverInstanceData>(
					const CPackedHandle<CMoverInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CMoverInstanceData>(
					const CPackedHandle<CMoverInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CMoverInstanceData>(
					const CPackedHandle<CMoverInstanceData>& handle);  // 89
	CRotation::operator float(); // 94
	Vector::operator=(
			const Vector& vOther);  // 94
} /* size: 0, variables: 2, inline expansions: 16 (411 bytes) */

// <0195B5C4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moverupdatenode.cpp:127
// function calls: 14
void CMoverUpdateNode::Reset(CAnimGraphUpdateContext& context, float flCycle)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 104
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 106
	CUnaryUpdateNode::Reset(
		CAnimGraphUpdateContext& context,
		float flCycle);  // 129
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CMoverInstanceData>(
					const CPackedHandle<CMoverInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CMoverInstanceData>(
					const CPackedHandle<CMoverInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CMoverInstanceData>(
					const CPackedHandle<CMoverInstanceData>& handle);  // 131
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CMoverInstanceData>(
					const CPackedHandle<CMoverInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CMoverInstanceData>(
					const CPackedHandle<CMoverInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CMoverInstanceData>(
					const CPackedHandle<CMoverInstanceData>& handle);  // 132
} /* size: 198, inline expansions: 14 (189 bytes) */

// <0195B3EB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moverupdatenode.cpp:136
// variable: 1
// function calls: 5
void CMoverUpdateNode::OnSave(const CAnimGraphUpdateContext& context, ISave* pSave)
{
	const CMoverInstanceData* pInstData; // 138
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CMoverInstanceData>(
					const CPackedHandle<CMoverInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CMoverInstanceData>(
					const CPackedHandle<CMoverInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CMoverInstanceData>(
					const CPackedHandle<CMoverInstanceData>& handle);  // 138
} /* size: 131, variables: 1, inline expansions: 5 (76 bytes) */

// <0195B212> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moverupdatenode.cpp:143
// variable: 1
// function calls: 5
void CMoverUpdateNode::OnRestore(CAnimGraphUpdateContext& context, IRestore* pRestore)
{
	CMoverInstanceData* pInstData; // 145
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CMoverInstanceData>(
					const CPackedHandle<CMoverInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CMoverInstanceData>(
					const CPackedHandle<CMoverInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CMoverInstanceData>(
					const CPackedHandle<CMoverInstanceData>& handle);  // 145
} /* size: 131, variables: 1, inline expansions: 5 (76 bytes) */

// <019592FB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moverupdatenode.cpp:150
// variables: 34
// function calls: 130
void CMoverUpdateNode::CalculateRootMotion(CAnimGraphUpdateContext& context)
{
	CRootMotion motion; // 152
	const CMoverInstanceData* pInstData; // 159
	{
		Vector vMoveDir; // 164
		CRotation::operator float(); // 164
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 165
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 165
		Vector::operator=(
				const Vector& vOther);  // 165
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 166
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
				const Vector& rhs);  // 84
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
					const int  __mask);  // 3341
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3345
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
				const VectorAligned& v);  // 430
		CTransform::RotateVector(
				const VectorAligned& v0);  // 84
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 42
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 42
		VectorAligned::AsVector(); // 84
		CTransform::RotateVector(
				const Vector& v0);  // 166
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 166
		Vector::operator=(
				const Vector& vOther);  // 166
	}
	{
		VectorAligned vMovement; // 171
		VectorAligned vVelocity; // 172
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 30
		VectorAligned::VectorAligned(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 171
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 30
		VectorAligned::VectorAligned(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 172
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
				const Vector& rhs);  // 179
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 208
		VectorAligned::operator+=(
				const VectorAligned& v);  // 179
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
				const Vector& rhs);  // 180
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 208
		VectorAligned::operator+=(
				const VectorAligned& v);  // 180
		Vector::operator=(
				const Vector& vOther);  // 182
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 182
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 183
		Vector::operator=(
				const Vector& vOther);  // 183
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
				const Vector& rhs);  // 175
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 208
		VectorAligned::operator+=(
				const VectorAligned& v);  // 175
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
				const Vector& rhs);  // 176
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 208
		VectorAligned::operator+=(
				const VectorAligned& v);  // 176
	}
	{
		CRotation angle; // 188
		{
		}
		{
		}
		CRotation::CRotation(
				angle_t angleDegrees);  // 23
		CRotation::CRotation(
				angle_t angleDegrees);  // 188
		{
		}
		CRotation::operator+=(
				const CRotation& rot);  // 194
		{
		}
		CRotation::operator=(
				const CRotation& rot);  // 196
		{
		}
		CRotation::operator+=(
				const CRotation& rot);  // 191
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
			const CMotionTransform  &);  // 11
	CRootMotion::CRootMotion(
			const CRootMotion  &);  // 152
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 154
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CMoverInstanceData>(
					const CPackedHandle<CMoverInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CMoverInstanceData>(
					const CPackedHandle<CMoverInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CMoverInstanceData>(
					const CPackedHandle<CMoverInstanceData>& handle);  // 159
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 156
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 11
	CRootMotion::operator=(
			CRootMotion &);  // 156
} /* size: 0, variables: 2, inline expansions: 16 (590 bytes) */

// <01958A2C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moverupdatenode.cpp:203
// variables: 8
// function calls: 26
void CMoverUpdateNode::CalculateFootMotion(CAnimGraphUpdateContext& context, const CMotionTransform& newLocalToWorld, CStrideStatus& footPoseInfo)
{
	{
		CMoverInstanceData* pInstData; // 209
		{
			int i; // 210
			{
				CMotionTransform remainingMovement; // 212
				float flRemainingFootCycleTime; // 214
				{
					Vector vVelocity; // 218
					CAnimParamHandle::CAnimParamHandle(); // 218
					CAnimParamHandle::CAnimParamHandle(); // 218
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::Vector(); // 1450
					Vector::operator*(
							float fl);  // 218
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::Vector(); // 1450
					Vector::operator*(
							float fl);  // 220
					Vector::operator=(
							const Vector& vOther);  // 220
				}
				{
					float flTargetAngle; // 225
					CDampedValue dampedValue; // 228
					float turnAmount; // 230
					FloatBits(const vec_t& f); // 112
					IsFinite(const vec_t& f); // 145
					{
					}
					CRotation::operator+=(
							angle_t s);  // 232
				}
				Vector::operator=(
						const Vector& vOther);  // 17
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 17
				CMotionTransform::operator=(
						const CMotionTransform  &);  // 235
				{
				}
				{
				}
				CRotation::CRotation(
						const CRotation& rot);  // 22
				CRotation::CRotation(
						const CRotation& rot);  // 17
				CMotionTransform::CMotionTransform(
						const CMotionTransform  &);  // 212
			}
		}
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 207
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CMoverInstanceData>(
						const CPackedHandle<CMoverInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CMoverInstanceData>(
						const CPackedHandle<CMoverInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CMoverInstanceData>(
						const CPackedHandle<CMoverInstanceData>& handle);  // 209
	}
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 205
} /* size: 0, inline expansions: 1 (17 bytes) */

