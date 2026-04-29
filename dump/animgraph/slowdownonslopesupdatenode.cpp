
//
// animgraph/slowdownonslopesupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//

// <019489D0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesupdatenode.cpp:12
// function calls: 2
void CSlowDownOnSlopesUpdateNode::CSlowDownOnSlopesUpdateNode(CAnimGraphInitContext& initContext)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::CRelativeOffset(); // 9
	CUnaryUpdateNode::CUnaryUpdateNode(
			CAnimGraphInitContext& initContext);  // 13
} /* size: 51, inline expansions: 2 (33 bytes) */

// <019489AB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesupdatenode.cpp:12
void CSlowDownOnSlopesUpdateNode::CSlowDownOnSlopesUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

// <0197714D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesupdatenode.cpp:18
// variables: 3
// function calls: 2
void CSlowDownOnSlopesUpdateNode::CalculateSlopeScale(CAnimGraphUpdateContext& context)
{
	const VectorAligned  vSlopeNormalMS; // 25
	const float  flScaleAmountRaw; // 27
	float flScaleAmount; // 29
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 20
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <01973FED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesupdatenode.cpp:18
// variables: 11
// function calls: 26
void CSlowDownOnSlopesUpdateNode::CalculateSlopeScale(CAnimGraphUpdateContext& context)
{
	const VectorAligned  vSlopeNormalMS; // 25
	const float  flScaleAmountRaw; // 27
	float flScaleAmount; // 29
	CAnimParamHandle::CAnimParamHandle(); // 25
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
			const Vector& rhs);  // 27
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
			const Vector& rhs);  // 25
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
		const VectorAligned& v);  // 27
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 29
} /* size: 207, variables: 3, inline expansions: 18 (260 bytes) */

// <01948962> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesupdatenode.cpp:18
// variables: 3
void CSlowDownOnSlopesUpdateNode::CalculateSlopeScale(CAnimGraphUpdateContext& context)
{
	const VectorAligned  vSlopeNormalMS; // 25
	const float  flScaleAmountRaw; // 27
	float flScaleAmount; // 29
} /* size: 0, variables: 3 */

// <01948518> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesupdatenode.cpp:34
// variables: 2
// function calls: 16
void CSlowDownOnSlopesUpdateNode::CalculateRootMotion(CAnimGraphUpdateContext& context)
{
	CRootMotion motion; // 36
	float flSlopeScale; // 42
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
			const CRootMotion  &);  // 36
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 37
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 20
	CSlowDownOnSlopesUpdateNode::CalculateSlopeScale(
				CAnimGraphUpdateContext& context);  // 42
	Vector::operator*=(
			float fl);  // 44
	Vector::operator*=(
			float fl);  // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 39
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 11
	CRootMotion::operator=(
			CRootMotion &);  // 39
} /* size: 0, variables: 2, inline expansions: 16 (598 bytes) */

// <01974D25> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesupdatenode.cpp:51
// variable: 1
// function calls: 8
void CSlowDownOnSlopesUpdateNode::CalculateFootMotion(CAnimGraphUpdateContext& context, const CMotionTransform& newLocalToWorld, CStrideStatus& footPoseInfo)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 53
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 55
	{
		int i; // 57
		ConVar::GetInt(); // 351
		ConVar::GetBool(); // 20
		CSlowDownOnSlopesUpdateNode::CalculateSlopeScale(
					CAnimGraphUpdateContext& context);  // 59
		Vector::operator*=(
				float fl);  // 59
	}
	CSlowDownOnSlopesUpdateNode::CalculateFootMotion(
				CAnimGraphUpdateContext& context,
				const CMotionTransform& newLocalToWorld,
				CStrideStatus& footPoseInfo);  // 51
} /* size: 178, inline expansions: 4 (135 bytes) */

// <019484CF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesupdatenode.cpp:51
// variable: 1
void CSlowDownOnSlopesUpdateNode::CalculateFootMotion(CAnimGraphUpdateContext& context, const CMotionTransform& newLocalToWorld, CStrideStatus& footPoseInfo)
{
	{
		int i; // 57
	}
} /* size: 0 */

// <019483CF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesupdatenode.cpp:65
// variable: 1
// function calls: 3
void CSlowDownOnSlopesUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	PoseHandle hPose; // 67
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 69
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 71
} /* size: 38, variables: 1, inline expansions: 3 (14 bytes) */

