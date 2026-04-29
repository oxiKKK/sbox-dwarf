
//
// ik/ikchainruleinterpolationstate_ground.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//

// <032A9BCC> ik/ikchainruleinterpolationstate_ground.cpp:10
// function calls: 4
void CIKChainRuleInterpolationState_Ground::CIKChainRuleInterpolationState_Ground()
{
	ConVar::GetFloat(); // 12
	GenericCriticallyDampedType<float>::SetSpringStrength(
				float flSpringStrength);  // 12
	ConVar::GetFloat(); // 13
	GenericCriticallyDampedType<Vector>::SetSpringStrength(
				float flSpringStrength);  // 13
} /* size: 93, inline expansions: 4 (34 bytes) */

// <032A9BB0> ik/ikchainruleinterpolationstate_ground.cpp:10
void CIKChainRuleInterpolationState_Ground::CIKChainRuleInterpolationState_Ground()
{
} /* size: 0 */

// <032A99A6> ik/ikchainruleinterpolationstate_ground.cpp:16
// function calls: 6
void CIKChainRuleInterpolationState_Ground::CopyFrom(const CIKChainRuleInterpolationState_Ground* pOther)
{
	Vector::operator=(
			const Vector& vOther);  // 6
	Vector::operator=(
			const Vector& vOther);  // 6
	Vector::operator=(
			const Vector& vOther);  // 6
	Vector::operator=(
			const Vector& vOther);  // 6
	GenericCriticallyDampedType<Vector>::operator=(
			const GenericCriticallyDampedType<Vector>  &);  // 6
	CriticallyDampedNormal::operator=(
			const CriticallyDampedNormal  &);  // 19
} /* size: 0, inline expansions: 6 (0 bytes) */

// <032A988F> ik/ikchainruleinterpolationstate_ground.cpp:23
// function call: 1
void CIKChainRuleInterpolationState_Ground::LerpFrom(const CIKChainRuleInterpolationState_Ground* pState1, const CIKChainRuleInterpolationState_Ground* pState2, float flAlpha)
{
	Lerp<float>(float flPercent,
			const float& A,
			const float& B);  // 27
} /* size: 0, inline expansions: 1 (0 bytes) */

