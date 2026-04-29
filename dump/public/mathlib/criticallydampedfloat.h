
//
// public/mathlib/criticallydampedfloat.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <0007DC89> ../public/mathlib/criticallydampedfloat.h:5
// member functions: 6
// member variable: 1
// class size: 24
class CriticallyDampedFloat : public GenericCriticallyDampedType<float> {
public:
	/* class GenericCriticallyDampedType<float> <ancestor>; */ /* 0 24 */
	/* ../public/mathlib/criticallydampedfloat.h:8 */
	void CriticallyDampedFloat(CriticallyDampedFloat* , float);
	/* ../public/mathlib/criticallydampedfloat.h:10 */
	bool operator!=(const CriticallyDampedFloat* , const CriticallyDampedFloat& );
	/* ../public/mathlib/criticallydampedfloat.h:12 */
	void Lerp(CriticallyDampedFloat* , float, const CriticallyDampedFloat& , const CriticallyDampedFloat& );
	void CriticallyDampedFloat(class CriticallyDampedFloat *, float); /* linkage=_ZN21CriticallyDampedFloatC4Ef */
	bool operator!=(const class CriticallyDampedFloat  *, const class CriticallyDampedFloat  &); /* linkage=_ZNK21CriticallyDampedFloatneERKS_ */
	void Lerp(class CriticallyDampedFloat *, float, const class CriticallyDampedFloat  &, const class CriticallyDampedFloat  &); /* linkage=_ZN21CriticallyDampedFloat4LerpEfRKS_S1_ */
};

// <032A9336> ../public/mathlib/criticallydampedfloat.h:8
void CriticallyDampedFloat::CriticallyDampedFloat(float flSpringStrength)
{
} /* size: 0 */

