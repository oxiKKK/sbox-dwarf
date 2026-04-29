
//
// public/mathlib/criticallydampednormal.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//	class: 1
//

// <032A9B62> ../public/mathlib/criticallydampednormal.h:6
inline void CriticallyDampedNormal::operator=(const CriticallyDampedNormal &)
{
} /* size: 0 */

// <0007D9CC> ../public/mathlib/criticallydampednormal.h:6
// member functions: 10
// member variable: 1
// class size: 56
class CriticallyDampedNormal : public GenericCriticallyDampedType<Vector> {
public:
	/* class GenericCriticallyDampedType<Vector> <ancestor>; */ /* 0 56 */
	/* ../public/mathlib/criticallydampednormal.h:9 */
	void CriticallyDampedNormal(CriticallyDampedNormal* , float);
	/* ../public/mathlib/criticallydampednormal.h:11 */
	Vector UpdateAndGetPosition(CriticallyDampedNormal* , float);
	/* ../public/mathlib/criticallydampednormal.h:12 */
	Vector UpdateAndGetPosition(CriticallyDampedNormal* , const Vector& , float);
	/* ../public/mathlib/criticallydampednormal.h:14 */
	bool operator!=(const CriticallyDampedNormal* , const CriticallyDampedNormal& );
	/* ../public/mathlib/criticallydampednormal.h:16 */
	void Lerp(CriticallyDampedNormal* , float, const CriticallyDampedNormal& , const CriticallyDampedNormal& );
	void CriticallyDampedNormal(class CriticallyDampedNormal *, float); /* linkage=_ZN22CriticallyDampedNormalC4Ef */
	class Vector UpdateAndGetPosition(class CriticallyDampedNormal *, float); /* linkage=_ZN22CriticallyDampedNormal20UpdateAndGetPositionEf */
	class Vector UpdateAndGetPosition(class CriticallyDampedNormal *, const class Vector  &, float); /* linkage=_ZN22CriticallyDampedNormal20UpdateAndGetPositionERK6Vectorf */
	bool operator!=(const class CriticallyDampedNormal  *, const class CriticallyDampedNormal  &); /* linkage=_ZNK22CriticallyDampedNormalneERKS_ */
	void Lerp(class CriticallyDampedNormal *, float, const class CriticallyDampedNormal  &, const class CriticallyDampedNormal  &); /* linkage=_ZN22CriticallyDampedNormal4LerpEfRKS_S1_ */
};

// <032A930E> ../public/mathlib/criticallydampednormal.h:9
void CriticallyDampedNormal::CriticallyDampedNormal(float flSpringStrength)
{
} /* size: 0 */

