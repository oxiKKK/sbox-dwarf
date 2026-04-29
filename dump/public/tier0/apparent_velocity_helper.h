
//
// public/tier0/apparent_velocity_helper.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 3
//	classes: 2
//

// <049A49BB> ../public/tier0/apparent_velocity_helper.h:33
inline float CalcDistance(const Vector& a, const Vector& b)
{
} /* size: 0 */

// <04998103> ../public/tier0/apparent_velocity_helper.h:40
// member function: 1
// class size: 1
class CDefaultCalcDistance<Vector> {
	/* ../public/tier0/apparent_velocity_helper.h:43 */
	float CalcDistance(const Vector& , const Vector& );
};

// <049992D6> ../public/tier0/apparent_velocity_helper.h:43
inline void CalcDistance(const Vector& a, const Vector& b)
{
} /* size: 0 */

// <049980B9> ../public/tier0/apparent_velocity_helper.h:60
// member function: 1
// class size: 1
class CComputeApparentVelocity<Vector, CDefaultCalcDistance<Vector> > {
	/* ../public/tier0/apparent_velocity_helper.h:63 */
	float Compute(float, const Vector* , float, const Vector* );
};

// <04999A83> ../public/tier0/apparent_velocity_helper.h:63
// variables: 2
inline void Compute(float flPrevTime, const Vector* pPrevValue, float flNextTime, const Vector* pNextValue)
{
	float flRet; // 65
	{
		float dt; // 68
	}
} /* size: 0, variables: 1 */

