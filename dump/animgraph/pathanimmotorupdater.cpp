
//
// animgraph/pathanimmotorupdater.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//

// <0167EBF2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorupdater.cpp:10
// function calls: 11
void CPathAnimMotorUpdater::CPathAnimMotorUpdater(CAnimGraphInitContext& initContext, const CAnimInputDamping& facingDamping, bool bLockToPath, const CUtlString& name, bool bIsDefault)
{
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 9
	CAnimMotorUpdaterBase::CAnimMotorUpdaterBase(
				const CUtlString& name,
				bool bIsDefault);  // 15
	CAnimInputDamping::CAnimInputDamping(
				const CAnimInputDamping  &);  // 14
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<PathMotorInstanceData_t>::CPackedHandle(); // 15
	CDampedValue::CDampedValue(
			float flStartingValue,
			float flStartingVelocity);  // 12
	PathMotorInstanceData_t::PathMotorInstanceData_t(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<true>::AddItem<PathMotorInstanceData_t>(
					CPackedHandle<PathMotorInstanceData_t>* handleOut);  // 17
	CPathAnimMotorUpdaterBase::CPathAnimMotorUpdaterBase(
					CAnimGraphInitContext& initContext,
					const CAnimInputDamping& facingDamping,
					bool bLockToPath,
					const CUtlString& name,
					bool bIsDefault);  // 11
} /* size: 232, inline expansions: 11 (383 bytes) */

// <0167EB9D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorupdater.cpp:10
void CPathAnimMotorUpdater::CPathAnimMotorUpdater(CAnimGraphInitContext& initContext, const CAnimInputDamping& facingDamping, bool bLockToPath, const CUtlString& name, bool bIsDefault)
{
} /* size: 0 */

// <0167E4F1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorupdater.cpp:17
// variables: 5
// function calls: 28
void CPathAnimMotorUpdater::Update(CAnimGraphUpdateContext& context, MovementData& moveSettings)
{
	const char   __FUNCTION__; // 31773
	{
		Vector vCurrentPos; // 21
		Vector vDestPos; // 22
		Vector vMoveDir; // 24
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 26
		}
		Vector::operator=(
				const Vector& vOther);  // 29
		VectorAligned::operator fltx4(); // 71
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 21
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 21
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 24
		Vector::Normalized(); // 24
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 619
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 619
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 619
		Vector::IsValid(); // 26
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1659
		VectorIsNormalized(const Vector& vecIn,
					float flTolerance);  // 26
		Vector::operator=(
				const Vector& vOther);  // 27
	}
	Vector::operator=(
			const Vector& vOther);  // 34
} /* size: 0, variables: 1, inline expansions: 1 (19 bytes) */

