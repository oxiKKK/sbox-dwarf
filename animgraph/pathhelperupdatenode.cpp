
//
// animgraph/pathhelperupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//

// <01958976> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperupdatenode.cpp:10
// function calls: 2
void CPathHelperUpdateNode::CPathHelperUpdateNode(CAnimGraphInitContext& initContext)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::CRelativeOffset(); // 9
	CUnaryUpdateNode::CUnaryUpdateNode(
			CAnimGraphInitContext& initContext);  // 11
} /* size: 44, inline expansions: 2 (19 bytes) */

// <01958951> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperupdatenode.cpp:10
void CPathHelperUpdateNode::CPathHelperUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

// <01958851> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperupdatenode.cpp:17
// variable: 1
// function calls: 3
void CPathHelperUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	PoseHandle hPose; // 19
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 21
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 23
} /* size: 38, variables: 1, inline expansions: 3 (14 bytes) */

// <0195723B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperupdatenode.cpp:30
// variables: 17
// function calls: 97
void CPathHelperUpdateNode::CalculateRootMotion(CAnimGraphUpdateContext& context)
{
	CRootMotion motion; // 32
	{
		const float  flTimeStep; // 41
		const float  flGoalDistance; // 42
		{
			float flStartingSpeed; // 45
			float flMinSpeed; // 46
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 44
			CMotionTransform::Length(); // 45
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 56
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 56
			Vector::operator=(
					const Vector& vOther);  // 56
			Vector::Normalized(); // 52
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 52
			Vector::operator=(
					const Vector& vOther);  // 52
		}
		CAnimParamHandle::CAnimParamHandle(); // 42
	}
	{
		Vector vTranslationNormalized; // 64
		float len; // 65
		{
			const Vector  vTargetMoveDir; // 68
			const float  flTargetHeading; // 69
			float flCurrentHeading; // 70
			{
				float flDeltaAngle; // 74
				Quaternion deltaRot; // 75
				Vector vVelocityWS; // 78
				float flSpeed; // 79
				CrossProduct(const Vector& a,
						const Vector& b,
						Vector& result);  // 1488
				Vector::Vector(); // 1487
				Vector::Cross(
					const Vector& vOther);  // 2464
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::Vector(); // 1436
				Vector::operator+(
						const Vector& v);  // 2464
				CrossProduct(const Vector& a,
						const Vector& b,
						Vector& result);  // 1488
				Vector::Vector(); // 1487
				Vector::Cross(
					const Vector& vOther);  // 2464
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 1853
				Quaternion::v(); // 2464
				Vector::Vector(); // 1450
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 1478
				operator*(float fl,
						const Vector& v);  // 2464
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::Vector(); // 1436
				Vector::operator+(
						const Vector& v);  // 2464
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 1853
				Quaternion::v(); // 2464
				Vector::Vector(); // 1450
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 1478
				operator*(float fl,
						const Vector& v);  // 2464
				operator*(const Quaternion& q,
						const Vector& v);  // 76
				Vector::NormalizeInPlace(); // 79
				Vector::Vector(); // 1450
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 76
				Vector::operator=(
						const Vector& vOther);  // 76
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 1853
				Quaternion::v(); // 2464
				Vector::Vector(); // 1450
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 1478
				operator*(float fl,
						const Vector& v);  // 2464
				CrossProduct(const Vector& a,
						const Vector& b,
						Vector& result);  // 1488
				Vector::Vector(); // 1487
				Vector::Cross(
					const Vector& vOther);  // 2464
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::Vector(); // 1436
				Vector::operator+(
						const Vector& v);  // 2464
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::Vector(); // 1436
				Vector::operator+(
						const Vector& v);  // 2464
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 1853
				Quaternion::v(); // 2464
				Vector::Vector(); // 1487
				CrossProduct(const Vector& a,
						const Vector& b,
						Vector& result);  // 1488
				Vector::Cross(
					const Vector& vOther);  // 2464
				Vector::Vector(); // 1450
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 1478
				operator*(float fl,
						const Vector& v);  // 2464
				operator*(const Quaternion& q,
						const Vector& v);  // 80
				Vector::Vector(); // 1450
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 80
				Vector::operator=(
						const Vector& vOther);  // 80
			}
			CAnimParamHandle::CAnimParamHandle(); // 68
			CloseEnough(float a,
					float b,
					float epsilon);  // 72
		}
		Vector::NormalizeInPlace(); // 65
	}
	{
		Vector vToGoal; // 88
		float flMoveDistSqrd; // 90
		float flGoalDistSqrd; // 91
		CAnimParamHandle::CAnimParamHandle(); // 88
		Vector::LengthSqr(); // 90
		Vector::LengthSqr(); // 91
		Vector::operator=(
				const Vector& vOther);  // 95
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
			const CRootMotion  &);  // 32
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 34
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 36
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 11
	CRootMotion::operator=(
			CRootMotion &);  // 36
} /* size: 0, variables: 1, inline expansions: 11 (506 bytes) */

