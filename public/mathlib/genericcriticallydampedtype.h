
//
// public/mathlib/genericcriticallydampedtype.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 17
//	classes: 3
//

// <032A9B8F> ../public/mathlib/genericcriticallydampedtype.h:6
inline void GenericCriticallyDampedType<Vector>::operator=(const GenericCriticallyDampedType<Vector> &)
{
} /* size: 0 */

// <0007D7FF> ../public/mathlib/genericcriticallydampedtype.h:6
// member functions: 18
// member variables: 6
// class size: 56
class GenericCriticallyDampedType<Vector> {
	/* ../public/mathlib/genericcriticallydampedtype.h:9 */
	void SnapTo(GenericCriticallyDampedType<Vector>* , const Vector& );
	/* ../public/mathlib/genericcriticallydampedtype.h:16 */
	void SnapToGoal(GenericCriticallyDampedType<Vector>* );
	/* ../public/mathlib/genericcriticallydampedtype.h:21 */
	const Vector& GetPosition(const GenericCriticallyDampedType<Vector>* );
	/* ../public/mathlib/genericcriticallydampedtype.h:26 */
	const Vector& GetGoal(const GenericCriticallyDampedType<Vector>* );
	/* ../public/mathlib/genericcriticallydampedtype.h:31 */
	bool SetGoal(GenericCriticallyDampedType<Vector>* , const Vector& );
	/* ../public/mathlib/genericcriticallydampedtype.h:46 */
	Vector UpdateAndGetPosition(GenericCriticallyDampedType<Vector>* , float);
	/* ../public/mathlib/genericcriticallydampedtype.h:53 */
	Vector UpdateAndGetPosition(GenericCriticallyDampedType<Vector>* , const Vector& , float);
	/* ../public/mathlib/genericcriticallydampedtype.h:63 */
	void SetSpringStrength(GenericCriticallyDampedType<Vector>* , float);
protected:
	/* ../public/mathlib/genericcriticallydampedtype.h:69 */
	void GenericCriticallyDampedType(GenericCriticallyDampedType<Vector>* , const Vector& , const Vector& , float);
	Vector m_DefaultVelocity; /* 0 12 */
	Vector m_CurrentPosition; /* 12 12 */
	Vector m_Velocity; /* 24 12 */
	Vector m_LastGoal; /* 36 12 */
	bool m_bFirstTime; /* 48 1 */
	float m_flSpringStrength; /* 52 4 */
	void SnapTo(class GenericCriticallyDampedType<Vector> *, const class Vector  &); /* linkage=_ZN27GenericCriticallyDampedTypeI6VectorE6SnapToERKS0_ */
	void SnapToGoal(class GenericCriticallyDampedType<Vector> *); /* linkage=_ZN27GenericCriticallyDampedTypeI6VectorE10SnapToGoalEv */
	const class Vector  & GetPosition(const class GenericCriticallyDampedType<Vector>  *); /* linkage=_ZNK27GenericCriticallyDampedTypeI6VectorE11GetPositionEv */
	const class Vector  & GetGoal(const class GenericCriticallyDampedType<Vector>  *); /* linkage=_ZNK27GenericCriticallyDampedTypeI6VectorE7GetGoalEv */
	bool SetGoal(class GenericCriticallyDampedType<Vector> *, const class Vector  &); /* linkage=_ZN27GenericCriticallyDampedTypeI6VectorE7SetGoalERKS0_ */
	class Vector UpdateAndGetPosition(class GenericCriticallyDampedType<Vector> *, float); /* linkage=_ZN27GenericCriticallyDampedTypeI6VectorE20UpdateAndGetPositionEf */
	class Vector UpdateAndGetPosition(class GenericCriticallyDampedType<Vector> *, const class Vector  &, float); /* linkage=_ZN27GenericCriticallyDampedTypeI6VectorE20UpdateAndGetPositionERKS0_f */
	void SetSpringStrength(class GenericCriticallyDampedType<Vector> *, float); /* linkage=_ZN27GenericCriticallyDampedTypeI6VectorE17SetSpringStrengthEf */
	void GenericCriticallyDampedType(class GenericCriticallyDampedType<Vector> *, const class Vector  &, const class Vector  &, float); /* linkage=_ZN27GenericCriticallyDampedTypeI6VectorEC4ERKS0_S3_f */
};

// <0007DABC> ../public/mathlib/genericcriticallydampedtype.h:6
// member functions: 18
// member variables: 6
// class size: 24
class GenericCriticallyDampedType<float> {
	/* ../public/mathlib/genericcriticallydampedtype.h:9 */
	void SnapTo(GenericCriticallyDampedType<float>* , const float& );
	/* ../public/mathlib/genericcriticallydampedtype.h:16 */
	void SnapToGoal(GenericCriticallyDampedType<float>* );
	/* ../public/mathlib/genericcriticallydampedtype.h:21 */
	const float& GetPosition(const GenericCriticallyDampedType<float>* );
	/* ../public/mathlib/genericcriticallydampedtype.h:26 */
	const float& GetGoal(const GenericCriticallyDampedType<float>* );
	/* ../public/mathlib/genericcriticallydampedtype.h:31 */
	bool SetGoal(GenericCriticallyDampedType<float>* , const float& );
	/* ../public/mathlib/genericcriticallydampedtype.h:46 */
	float UpdateAndGetPosition(GenericCriticallyDampedType<float>* , float);
	/* ../public/mathlib/genericcriticallydampedtype.h:53 */
	float UpdateAndGetPosition(GenericCriticallyDampedType<float>* , const float& , float);
	/* ../public/mathlib/genericcriticallydampedtype.h:63 */
	void SetSpringStrength(GenericCriticallyDampedType<float>* , float);
protected:
	/* ../public/mathlib/genericcriticallydampedtype.h:69 */
	void GenericCriticallyDampedType(GenericCriticallyDampedType<float>* , const float& , const float& , float);
	float m_DefaultVelocity; /* 0 4 */
	float m_CurrentPosition; /* 4 4 */
	float m_Velocity; /* 8 4 */
	float m_LastGoal; /* 12 4 */
	bool m_bFirstTime; /* 16 1 */
	float m_flSpringStrength; /* 20 4 */
	void SnapTo(class GenericCriticallyDampedType<float> *, const float  &); /* linkage=_ZN27GenericCriticallyDampedTypeIfE6SnapToERKf */
	void SnapToGoal(class GenericCriticallyDampedType<float> *); /* linkage=_ZN27GenericCriticallyDampedTypeIfE10SnapToGoalEv */
	const float  & GetPosition(const class GenericCriticallyDampedType<float>  *); /* linkage=_ZNK27GenericCriticallyDampedTypeIfE11GetPositionEv */
	const float  & GetGoal(const class GenericCriticallyDampedType<float>  *); /* linkage=_ZNK27GenericCriticallyDampedTypeIfE7GetGoalEv */
	bool SetGoal(class GenericCriticallyDampedType<float> *, const float  &); /* linkage=_ZN27GenericCriticallyDampedTypeIfE7SetGoalERKf */
	float UpdateAndGetPosition(class GenericCriticallyDampedType<float> *, float); /* linkage=_ZN27GenericCriticallyDampedTypeIfE20UpdateAndGetPositionEf */
	float UpdateAndGetPosition(class GenericCriticallyDampedType<float> *, const float  &, float); /* linkage=_ZN27GenericCriticallyDampedTypeIfE20UpdateAndGetPositionERKff */
	void SetSpringStrength(class GenericCriticallyDampedType<float> *, float); /* linkage=_ZN27GenericCriticallyDampedTypeIfE17SetSpringStrengthEf */
	void GenericCriticallyDampedType(class GenericCriticallyDampedType<float> *, const float  &, const float  &, float); /* linkage=_ZN27GenericCriticallyDampedTypeIfEC4ERKfS2_f */
};

// <0329FA96> ../public/mathlib/genericcriticallydampedtype.h:6
// member functions: 19
// member variables: 6
// class size: 56
class GenericCriticallyDampedType<Vector> {
	/* ../public/mathlib/genericcriticallydampedtype.h:9 */
	void SnapTo(GenericCriticallyDampedType<Vector>* , const Vector& );
	/* ../public/mathlib/genericcriticallydampedtype.h:16 */
	void SnapToGoal(GenericCriticallyDampedType<Vector>* );
	/* ../public/mathlib/genericcriticallydampedtype.h:21 */
	const Vector& GetPosition(const GenericCriticallyDampedType<Vector>* );
	/* ../public/mathlib/genericcriticallydampedtype.h:26 */
	const Vector& GetGoal(const GenericCriticallyDampedType<Vector>* );
	/* ../public/mathlib/genericcriticallydampedtype.h:31 */
	bool SetGoal(GenericCriticallyDampedType<Vector>* , const Vector& );
	/* ../public/mathlib/genericcriticallydampedtype.h:46 */
	Vector UpdateAndGetPosition(GenericCriticallyDampedType<Vector>* , float);
	/* ../public/mathlib/genericcriticallydampedtype.h:53 */
	Vector UpdateAndGetPosition(GenericCriticallyDampedType<Vector>* , const Vector& , float);
	/* ../public/mathlib/genericcriticallydampedtype.h:63 */
	void SetSpringStrength(GenericCriticallyDampedType<Vector>* , float);
protected:
	/* ../public/mathlib/genericcriticallydampedtype.h:69 */
	void GenericCriticallyDampedType(GenericCriticallyDampedType<Vector>* , const Vector& , const Vector& , float);
	Vector m_DefaultVelocity; /* 0 12 */
	Vector m_CurrentPosition; /* 12 12 */
	Vector m_Velocity; /* 24 12 */
	Vector m_LastGoal; /* 36 12 */
	bool m_bFirstTime; /* 48 1 */
	float m_flSpringStrength; /* 52 4 */
	GenericCriticallyDampedType<Vector>& operator=(GenericCriticallyDampedType<Vector>* , const GenericCriticallyDampedType<Vector>& );
	void SnapTo(class GenericCriticallyDampedType<Vector> *, const class Vector  &); /* linkage=_ZN27GenericCriticallyDampedTypeI6VectorE6SnapToERKS0_ */
	void SnapToGoal(class GenericCriticallyDampedType<Vector> *); /* linkage=_ZN27GenericCriticallyDampedTypeI6VectorE10SnapToGoalEv */
	const class Vector  & GetPosition(const class GenericCriticallyDampedType<Vector>  *); /* linkage=_ZNK27GenericCriticallyDampedTypeI6VectorE11GetPositionEv */
	const class Vector  & GetGoal(const class GenericCriticallyDampedType<Vector>  *); /* linkage=_ZNK27GenericCriticallyDampedTypeI6VectorE7GetGoalEv */
	bool SetGoal(class GenericCriticallyDampedType<Vector> *, const class Vector  &); /* linkage=_ZN27GenericCriticallyDampedTypeI6VectorE7SetGoalERKS0_ */
	class Vector UpdateAndGetPosition(class GenericCriticallyDampedType<Vector> *, float); /* linkage=_ZN27GenericCriticallyDampedTypeI6VectorE20UpdateAndGetPositionEf */
	class Vector UpdateAndGetPosition(class GenericCriticallyDampedType<Vector> *, const class Vector  &, float); /* linkage=_ZN27GenericCriticallyDampedTypeI6VectorE20UpdateAndGetPositionERKS0_f */
	void SetSpringStrength(class GenericCriticallyDampedType<Vector> *, float); /* linkage=_ZN27GenericCriticallyDampedTypeI6VectorE17SetSpringStrengthEf */
	void GenericCriticallyDampedType(class GenericCriticallyDampedType<Vector> *, const class Vector  &, const class Vector  &, float); /* linkage=_ZN27GenericCriticallyDampedTypeI6VectorEC4ERKS0_S3_f */
};

// <02B64728> ../public/mathlib/genericcriticallydampedtype.h:9
inline void GenericCriticallyDampedType<Vector>::SnapTo(const Vector& kNewPosition)
{
} /* size: 0 */

// <01BA545E> ../public/mathlib/genericcriticallydampedtype.h:9
inline void GenericCriticallyDampedType<float>::SnapTo(const float& kNewPosition)
{
} /* size: 0 */

// <02B64772> ../public/mathlib/genericcriticallydampedtype.h:21
inline void GenericCriticallyDampedType<Vector>::GetPosition()
{
} /* size: 0 */

// <01BA5B2D> ../public/mathlib/genericcriticallydampedtype.h:21
inline void GenericCriticallyDampedType<float>::GetPosition()
{
} /* size: 0 */

// <02B6474D> ../public/mathlib/genericcriticallydampedtype.h:31
inline void GenericCriticallyDampedType<Vector>::SetGoal(const Vector& kGoal)
{
} /* size: 0 */

// <01BA5831> ../public/mathlib/genericcriticallydampedtype.h:31
inline void GenericCriticallyDampedType<float>::SetGoal(const float& kGoal)
{
} /* size: 0 */

// <02B64846> ../public/mathlib/genericcriticallydampedtype.h:46
inline void GenericCriticallyDampedType<Vector>::UpdateAndGetPosition(float flTimeStep)
{
} /* size: 0 */

// <01BA580C> ../public/mathlib/genericcriticallydampedtype.h:46
inline void GenericCriticallyDampedType<float>::UpdateAndGetPosition(float flTimeStep)
{
} /* size: 0 */

// <02B64815> ../public/mathlib/genericcriticallydampedtype.h:53
inline void GenericCriticallyDampedType<Vector>::UpdateAndGetPosition(const Vector& kNewGoal, float flTimeStep)
{
} /* size: 0 */

// <01BA5B46> ../public/mathlib/genericcriticallydampedtype.h:53
inline void GenericCriticallyDampedType<float>::UpdateAndGetPosition(const float& kNewGoal, float flTimeStep)
{
} /* size: 0 */

// <032A9705> ../public/mathlib/genericcriticallydampedtype.h:63
inline void GenericCriticallyDampedType<float>::SetSpringStrength(float flSpringStrength)
{
} /* size: 0 */

// <032A96E0> ../public/mathlib/genericcriticallydampedtype.h:63
inline void GenericCriticallyDampedType<Vector>::SetSpringStrength(float flSpringStrength)
{
} /* size: 0 */

// <02B648A8> ../public/mathlib/genericcriticallydampedtype.h:69
void GenericCriticallyDampedType<Vector>::GenericCriticallyDampedType(const Vector& kDefaultVelocity, const Vector& kInitialPosition, float flSpringStrength)
{
} /* size: 0 */

// <02B6486B> ../public/mathlib/genericcriticallydampedtype.h:69
inline void GenericCriticallyDampedType<Vector>::GenericCriticallyDampedType(const Vector& kDefaultVelocity, const Vector& kInitialPosition, float flSpringStrength)
{
} /* size: 0 */

// <02B5F381> ../public/mathlib/genericcriticallydampedtype.h:69
void GenericCriticallyDampedType<float>::GenericCriticallyDampedType(const float& kDefaultVelocity, const float& kInitialPosition, float flSpringStrength)
{
} /* size: 0 */

// <02B5F344> ../public/mathlib/genericcriticallydampedtype.h:69
inline void GenericCriticallyDampedType<float>::GenericCriticallyDampedType(const float& kDefaultVelocity, const float& kInitialPosition, float flSpringStrength)
{
} /* size: 0 */

