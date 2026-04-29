
//
// mathlib/criticallydampednormal.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//

// <02B65627> mathlib/criticallydampednormal.cpp:4
// function calls: 2
void CriticallyDampedNormal::CriticallyDampedNormal(float flSpringStrength)
{
	Vector::Vector(); // 73
	GenericCriticallyDampedType<Vector>::GenericCriticallyDampedType(
					const Vector& kDefaultVelocity,
					const Vector& kInitialPosition,
					float flSpringStrength);  // 4
} /* size: 60, inline expansions: 2 (55 bytes) */

// <02B655FF> mathlib/criticallydampednormal.cpp:4
void CriticallyDampedNormal::CriticallyDampedNormal(float flSpringStrength)
{
} /* size: 0 */

// <02B65513> mathlib/criticallydampednormal.cpp:9
// function calls: 2
void CriticallyDampedNormal::UpdateAndGetPosition(float flTimeStep)
{
	GenericCriticallyDampedType<Vector>::UpdateAndGetPosition(
				float flTimeStep);  // 11
	Vector::NormalizeInPlace(); // 13
} /* size: 74, inline expansions: 2 (31 bytes) */

// <02B65263> mathlib/criticallydampednormal.cpp:18
// function calls: 10
void CriticallyDampedNormal::UpdateAndGetPosition(const Vector& kNewGoal, float flTimeStep)
{
	Vector::operator=(
			const Vector& vOther);  // 41
	Vector::operator=(
			const Vector& vOther);  // 11
	Vector::operator=(
			const Vector& vOther);  // 13
	Vector::operator=(
			const Vector& vOther);  // 12
	GenericCriticallyDampedType<Vector>::SnapTo(
		const Vector& kNewPosition);  // 36
	GenericCriticallyDampedType<Vector>::SetGoal(
		const Vector& kGoal);  // 31
	GenericCriticallyDampedType<Vector>::SetGoal(
		const Vector& kGoal);  // 55
	GenericCriticallyDampedType<Vector>::UpdateAndGetPosition(
				float flTimeStep);  // 57
	GenericCriticallyDampedType<Vector>::UpdateAndGetPosition(
				const Vector& kNewGoal,
				float flTimeStep);  // 20
	Vector::NormalizeInPlace(); // 22
} /* size: 205, inline expansions: 10 (582 bytes) */

