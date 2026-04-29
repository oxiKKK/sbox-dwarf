
//
// public/mathlib/rotation.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 60
//	class: 1
//

// <01154F4B> ../public/mathlib/rotation.h:16
// member functions: 72
// member variable: 1
// static member variable: 1
// class size: 4
class CRotation {
	static const class CRotation Zero; /* 0 0 */
	/* ../public/mathlib/rotation.h:21 */
	void CRotation(CRotation* );
	/* ../public/mathlib/rotation.h:22 */
	void CRotation(CRotation* , const CRotation& );
	/* ../public/mathlib/rotation.h:23 */
	void CRotation(CRotation* , angle_t);
	/* ../public/mathlib/rotation.h:27 */
	void CRotation(CRotation* , const QuaternionAligned& , const VectorAligned& );
	/* ../public/mathlib/rotation.h:28 */
	void CRotation(CRotation* , const QAngle& , RotationAxis);
	/* ../public/mathlib/rotation.h:29 */
	void CRotation(CRotation* , const RadianEuler& , RotationAxis);
	/* ../public/mathlib/rotation.h:31 */
	bool IsValid(const CRotation* );
	/* ../public/mathlib/rotation.h:34 */
	float operator float(const CRotation* );
	/* ../public/mathlib/rotation.h:35 */
	angle_t ToRadians(const CRotation* );
	/* ../public/mathlib/rotation.h:36 */
	QuaternionAligned ToQuaternion(const CRotation* , const Vector& );
	/* ../public/mathlib/rotation.h:37 */
	QAngle ToQAngle(const CRotation* , RotationAxis);
	/* ../public/mathlib/rotation.h:38 */
	RadianEuler ToRadianEuler(const CRotation* , RotationAxis);
	/* ../public/mathlib/rotation.h:41 */
	CRotation& operator=(CRotation* , const CRotation& );
	/* ../public/mathlib/rotation.h:44 */
	bool operator==(const CRotation* , const CRotation& );
	/* ../public/mathlib/rotation.h:45 */
	bool operator!=(const CRotation* , const CRotation& );
	/* ../public/mathlib/rotation.h:48 */
	CRotation operator-(const CRotation* );
	/* ../public/mathlib/rotation.h:51 */
	CRotation& operator+=(CRotation* , const CRotation& );
	/* ../public/mathlib/rotation.h:52 */
	CRotation& operator-=(CRotation* , const CRotation& );
	/* ../public/mathlib/rotation.h:53 */
	CRotation& operator*=(CRotation* , const CRotation& );
	/* ../public/mathlib/rotation.h:54 */
	CRotation& operator/=(CRotation* , const CRotation& );
	/* ../public/mathlib/rotation.h:55 */
	CRotation& operator+=(CRotation* , angle_t);
	/* ../public/mathlib/rotation.h:56 */
	CRotation& operator-=(CRotation* , angle_t);
	/* ../public/mathlib/rotation.h:57 */
	CRotation& operator*=(CRotation* , angle_t);
	/* ../public/mathlib/rotation.h:58 */
	CRotation& operator/=(CRotation* , angle_t);
	/* ../public/mathlib/rotation.h:60 */
	CRotation operator+(const CRotation* , const CRotation& );
	/* ../public/mathlib/rotation.h:61 */
	CRotation operator-(const CRotation* , const CRotation& );
	/* ../public/mathlib/rotation.h:62 */
	CRotation operator*(const CRotation* , const CRotation& );
	/* ../public/mathlib/rotation.h:63 */
	CRotation operator/(const CRotation* , const CRotation& );
	/* ../public/mathlib/rotation.h:64 */
	CRotation operator+(const CRotation* , angle_t);
	/* ../public/mathlib/rotation.h:65 */
	CRotation operator-(const CRotation* , angle_t);
	/* ../public/mathlib/rotation.h:66 */
	CRotation operator*(const CRotation* , angle_t);
	/* ../public/mathlib/rotation.h:67 */
	CRotation operator/(const CRotation* , angle_t);
	/* ../public/mathlib/rotation.h:70 */
	void Normalize(CRotation* );
	/* ../public/mathlib/rotation.h:73 */
	CRotation Normalized(const CRotation* );
	/* ../public/mathlib/rotation.h:76 */
	void Align(CRotation* , const CRotation& );
	/* ../public/mathlib/rotation.h:77 */
	CRotation Aligned(const CRotation* , const CRotation& );
private:
	angle_t m_angle; /* 0 4 */
	void CRotation(class CRotation *); /* linkage=_ZN9CRotationC4Ev */
	void CRotation(class CRotation *, const class CRotation  &); /* linkage=_ZN9CRotationC4ERKS_ */
	void CRotation(class CRotation *, angle_t); /* linkage=_ZN9CRotationC4Ef */
	void CRotation(class CRotation *, const class QuaternionAligned  &, const class VectorAligned  &); /* linkage=_ZN9CRotationC4ERK17QuaternionAlignedRK13VectorAligned */
	void CRotation(class CRotation *, const class QAngle  &, class RotationAxis); /* linkage=_ZN9CRotationC4ERK6QAngle12RotationAxis */
	void CRotation(class CRotation *, const class RadianEuler  &, class RotationAxis); /* linkage=_ZN9CRotationC4ERK11RadianEuler12RotationAxis */
	/* <5a38a41> mathlib/rotation.cpp:67 */
	bool IsValid(const class CRotation  *); /* linkage=_ZNK9CRotation7IsValidEv */
	float operator float(const class CRotation  *); /* linkage=_ZNK9CRotationcvfEv */
	angle_t ToRadians(const class CRotation  *); /* linkage=_ZNK9CRotation9ToRadiansEv */
	class QuaternionAligned ToQuaternion(const class CRotation  *, const class Vector  &); /* linkage=_ZNK9CRotation12ToQuaternionERK6Vector */
	class QAngle ToQAngle(const class CRotation  *, class RotationAxis); /* linkage=_ZNK9CRotation8ToQAngleE12RotationAxis */
	class RadianEuler ToRadianEuler(const class CRotation  *, class RotationAxis); /* linkage=_ZNK9CRotation13ToRadianEulerE12RotationAxis */
	class CRotation & operator=(class CRotation *, const class CRotation  &); /* linkage=_ZN9CRotationaSERKS_ */
	bool operator==(const class CRotation  *, const class CRotation  &); /* linkage=_ZNK9CRotationeqERKS_ */
	bool operator!=(const class CRotation  *, const class CRotation  &); /* linkage=_ZNK9CRotationneERKS_ */
	class CRotation operator-(const class CRotation  *); /* linkage=_ZNK9CRotationngEv */
	class CRotation & operator+=(class CRotation *, const class CRotation  &); /* linkage=_ZN9CRotationpLERKS_ */
	class CRotation & operator-=(class CRotation *, const class CRotation  &); /* linkage=_ZN9CRotationmIERKS_ */
	class CRotation & operator*=(class CRotation *, const class CRotation  &); /* linkage=_ZN9CRotationmLERKS_ */
	class CRotation & operator/=(class CRotation *, const class CRotation  &); /* linkage=_ZN9CRotationdVERKS_ */
	class CRotation & operator+=(class CRotation *, angle_t); /* linkage=_ZN9CRotationpLEf */
	class CRotation & operator-=(class CRotation *, angle_t); /* linkage=_ZN9CRotationmIEf */
	class CRotation & operator*=(class CRotation *, angle_t); /* linkage=_ZN9CRotationmLEf */
	class CRotation & operator/=(class CRotation *, angle_t); /* linkage=_ZN9CRotationdVEf */
	class CRotation operator+(const class CRotation  *, const class CRotation  &); /* linkage=_ZNK9CRotationplERKS_ */
	class CRotation operator-(const class CRotation  *, const class CRotation  &); /* linkage=_ZNK9CRotationmiERKS_ */
	class CRotation operator*(const class CRotation  *, const class CRotation  &); /* linkage=_ZNK9CRotationmlERKS_ */
	class CRotation operator/(const class CRotation  *, const class CRotation  &); /* linkage=_ZNK9CRotationdvERKS_ */
	class CRotation operator+(const class CRotation  *, angle_t); /* linkage=_ZNK9CRotationplEf */
	class CRotation operator-(const class CRotation  *, angle_t); /* linkage=_ZNK9CRotationmiEf */
	class CRotation operator*(const class CRotation  *, angle_t); /* linkage=_ZNK9CRotationmlEf */
	class CRotation operator/(const class CRotation  *, angle_t); /* linkage=_ZNK9CRotationdvEf */
	/* <5a38ad0> mathlib/rotation.cpp:101 */
	void Normalize(class CRotation *); /* linkage=_ZN9CRotation9NormalizeEv */
	/* <5a38b19> mathlib/rotation.cpp:116 */
	class CRotation Normalized(const class CRotation  *); /* linkage=_ZNK9CRotation10NormalizedEv */
	/* <5a38ccc> mathlib/rotation.cpp:125 */
	void Align(class CRotation *, const class CRotation  &); /* linkage=_ZN9CRotation5AlignERKS_ */
	class CRotation Aligned(const class CRotation  *, const class CRotation  &); /* linkage=_ZNK9CRotation7AlignedERKS_ */
};

// <059EEFAC> ../public/mathlib/rotation.h:21
void CRotation::CRotation()
{
} /* size: 0 */

// <059EEF93> ../public/mathlib/rotation.h:21
inline void CRotation::CRotation()
{
} /* size: 0 */

// <05A37D97> ../public/mathlib/rotation.h:22
void CRotation::CRotation(const CRotation& rot)
{
	{
		{
		}
	}
} /* size: 0 */

// <05A37D4A> ../public/mathlib/rotation.h:22
// variables: 2
inline void CRotation::CRotation(const CRotation& rot)
{
	const char   __FUNCTION__; // 57161
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 22
	}
} /* size: 0, variables: 1 */

// <059EEF23> ../public/mathlib/rotation.h:22
// variables: 2
inline void CRotation::CRotation(const CRotation& rot)
{
	const char   __FUNCTION__; // 34041
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 22
	}
} /* size: 0, variables: 1 */

// <04AE3CA1> ../public/mathlib/rotation.h:22
// variables: 2
inline void CRotation::CRotation(const CRotation& rot)
{
	const char   __FUNCTION__; // 35628
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 22
	}
} /* size: 0, variables: 1 */

// <02BF99C0> ../public/mathlib/rotation.h:22
// variables: 2
inline void CRotation::CRotation(const CRotation& rot)
{
	const char   __FUNCTION__; // 51892
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 22
	}
} /* size: 0, variables: 1 */

// <02BD60D1> ../public/mathlib/rotation.h:22
// variables: 2
inline void CRotation::CRotation(const CRotation& rot)
{
	const char   __FUNCTION__; // 50588
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 22
	}
} /* size: 0, variables: 1 */

// <01E28B0F> ../public/mathlib/rotation.h:22
// variables: 2
inline void CRotation::CRotation(const CRotation& rot)
{
	const char   __FUNCTION__; // 43151
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 22
	}
} /* size: 0, variables: 1 */

// <01971B53> ../public/mathlib/rotation.h:22
// variables: 2
inline void CRotation::CRotation(const CRotation& rot)
{
	const char   __FUNCTION__; // 54505
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 22
	}
} /* size: 0, variables: 1 */

// <01864111> ../public/mathlib/rotation.h:22
// variables: 2
inline void CRotation::CRotation(const CRotation& rot)
{
	const char   __FUNCTION__; // 32606
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 22
	}
} /* size: 0, variables: 1 */

// <0164AC64> ../public/mathlib/rotation.h:22
// variables: 2
inline void CRotation::CRotation(const CRotation& rot)
{
	const char   __FUNCTION__; // 30822
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 22
	}
} /* size: 0, variables: 1 */

// <015CE40F> ../public/mathlib/rotation.h:22
// variables: 2
inline void CRotation::CRotation(const CRotation& rot)
{
	const char   __FUNCTION__; // 35247
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 22
	}
} /* size: 0, variables: 1 */

// <0108EDB4> ../public/mathlib/rotation.h:22
// variables: 2
inline void CRotation::CRotation(const CRotation& rot)
{
	const char   __FUNCTION__; // 19859
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 22
	}
} /* size: 0, variables: 1 */

// <00F97299> ../public/mathlib/rotation.h:22
// variables: 2
inline void CRotation::CRotation(const CRotation& rot)
{
	const char   __FUNCTION__; // 37570
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 22
	}
} /* size: 0, variables: 1 */

// <00D2279E> ../public/mathlib/rotation.h:22
// variables: 2
inline void CRotation::CRotation(const CRotation& rot)
{
	const char   __FUNCTION__; // 21898
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 22
	}
} /* size: 0, variables: 1 */

// <01A9E8A8> ../public/mathlib/rotation.h:22
// variables: 2
inline void CRotation::CRotation(const CRotation& rot)
{
	const char   __FUNCTION__; // 22284
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 22
	}
} /* size: 0, variables: 1 */

// <01A915BE> ../public/mathlib/rotation.h:22
// variables: 2
inline void CRotation::CRotation(const CRotation& rot)
{
	const char   __FUNCTION__; // 47097
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 22
	}
} /* size: 0, variables: 1 */

// <00A5EAE4> ../public/mathlib/rotation.h:22
// variables: 2
inline void CRotation::CRotation(const CRotation& rot)
{
	const char   __FUNCTION__; // 17876
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 22
	}
} /* size: 0, variables: 1 */

// <05A37D27> ../public/mathlib/rotation.h:23
void CRotation::CRotation(angle_t angleDegrees)
{
	{
		{
		}
	}
} /* size: 0 */

// <05A37CDA> ../public/mathlib/rotation.h:23
// variables: 2
inline void CRotation::CRotation(angle_t angleDegrees)
{
	const char   __FUNCTION__; // 57161
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 23
	}
} /* size: 0, variables: 1 */

// <059EEEB3> ../public/mathlib/rotation.h:23
// variables: 2
inline void CRotation::CRotation(angle_t angleDegrees)
{
	const char   __FUNCTION__; // 34041
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 23
	}
} /* size: 0, variables: 1 */

// <02BF9950> ../public/mathlib/rotation.h:23
// variables: 2
inline void CRotation::CRotation(angle_t angleDegrees)
{
	const char   __FUNCTION__; // 51892
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 23
	}
} /* size: 0, variables: 1 */

// <02BD6061> ../public/mathlib/rotation.h:23
// variables: 2
inline void CRotation::CRotation(angle_t angleDegrees)
{
	const char   __FUNCTION__; // 50588
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 23
	}
} /* size: 0, variables: 1 */

// <01971AE2> ../public/mathlib/rotation.h:23
// variables: 2
inline void CRotation::CRotation(angle_t angleDegrees)
{
	const char   __FUNCTION__; // 54505
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 23
	}
} /* size: 0, variables: 1 */

// <018640A0> ../public/mathlib/rotation.h:23
// variables: 2
inline void CRotation::CRotation(angle_t angleDegrees)
{
	const char   __FUNCTION__; // 32606
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 23
	}
} /* size: 0, variables: 1 */

// <0164ABF2> ../public/mathlib/rotation.h:23
// variables: 2
inline void CRotation::CRotation(angle_t angleDegrees)
{
	const char   __FUNCTION__; // 30822
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 23
	}
} /* size: 0, variables: 1 */

// <015CE39E> ../public/mathlib/rotation.h:23
// variables: 2
inline void CRotation::CRotation(angle_t angleDegrees)
{
	const char   __FUNCTION__; // 35247
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 23
	}
} /* size: 0, variables: 1 */

// <01A9E838> ../public/mathlib/rotation.h:23
// variables: 2
inline void CRotation::CRotation(angle_t angleDegrees)
{
	const char   __FUNCTION__; // 22284
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 23
	}
} /* size: 0, variables: 1 */

// <01A9154E> ../public/mathlib/rotation.h:23
// variables: 2
inline void CRotation::CRotation(angle_t angleDegrees)
{
	const char   __FUNCTION__; // 47097
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 23
	}
} /* size: 0, variables: 1 */

// <059EB6D1> ../public/mathlib/rotation.h:27
void CRotation::CRotation(const QuaternionAligned& qRot, const VectorAligned& vAxis)
{
} /* size: 0 */

// <059EB739> ../public/mathlib/rotation.h:28
void CRotation::CRotation(const QAngle& rot, RotationAxis nAxis)
{
} /* size: 0 */

// <059EB705> ../public/mathlib/rotation.h:29
void CRotation::CRotation(const RadianEuler& rot, RotationAxis nAxis)
{
} /* size: 0 */

// <059EEE9A> ../public/mathlib/rotation.h:34
inline void operator CRotation::float()
{
} /* size: 0 */

// <05A37CC1> ../public/mathlib/rotation.h:35
inline void CRotation::ToRadians()
{
} /* size: 0 */

// <059EEE4B> ../public/mathlib/rotation.h:84
// variables: 2
inline void CRotation::operator=(const CRotation& rot)
{
	const char   __FUNCTION__; // 34041
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 86
	}
} /* size: 0, variables: 1 */

// <02BD5FF9> ../public/mathlib/rotation.h:84
// variables: 2
inline void CRotation::operator=(const CRotation& rot)
{
	const char   __FUNCTION__; // 50588
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 86
	}
} /* size: 0, variables: 1 */

// <01971A79> ../public/mathlib/rotation.h:84
// variables: 2
inline void CRotation::operator=(const CRotation& rot)
{
	const char   __FUNCTION__; // 54505
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 86
	}
} /* size: 0, variables: 1 */

// <01864038> ../public/mathlib/rotation.h:84
// variables: 2
inline void CRotation::operator=(const CRotation& rot)
{
	const char   __FUNCTION__; // 32606
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 86
	}
} /* size: 0, variables: 1 */

// <0164AB89> ../public/mathlib/rotation.h:84
// variables: 2
inline void CRotation::operator=(const CRotation& rot)
{
	const char   __FUNCTION__; // 30822
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 86
	}
} /* size: 0, variables: 1 */

// <015CE335> ../public/mathlib/rotation.h:84
// variables: 2
inline void CRotation::operator=(const CRotation& rot)
{
	const char   __FUNCTION__; // 35247
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 86
	}
} /* size: 0, variables: 1 */

// <00F97249> ../public/mathlib/rotation.h:84
// variables: 2
inline void CRotation::operator=(const CRotation& rot)
{
	const char   __FUNCTION__; // 37570
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 86
	}
} /* size: 0, variables: 1 */

// <01A914E6> ../public/mathlib/rotation.h:84
// variables: 2
inline void CRotation::operator=(const CRotation& rot)
{
	const char   __FUNCTION__; // 47097
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 86
	}
} /* size: 0, variables: 1 */

// <02BD5F8F> ../public/mathlib/rotation.h:110
// variables: 2
inline void CRotation::operator+=(const CRotation& rot)
{
	const char   __FUNCTION__; // 50764
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 112
	}
} /* size: 0, variables: 1 */

// <01971A29> ../public/mathlib/rotation.h:110
// variables: 2
inline void CRotation::operator+=(const CRotation& rot)
{
	const char   __FUNCTION__; // 54532
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 112
	}
} /* size: 0, variables: 1 */

// <01863FE9> ../public/mathlib/rotation.h:110
// variables: 2
inline void CRotation::operator+=(const CRotation& rot)
{
	const char   __FUNCTION__; // 32633
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 112
	}
} /* size: 0, variables: 1 */

// <059EED92> ../public/mathlib/rotation.h:118
// variables: 2
inline void CRotation::operator-=(const CRotation& rot)
{
	const char   __FUNCTION__; // 34217
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 120
	}
} /* size: 0, variables: 1 */

// <02BD5F40> ../public/mathlib/rotation.h:118
// variables: 2
inline void CRotation::operator-=(const CRotation& rot)
{
	const char   __FUNCTION__; // 50764
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 120
	}
} /* size: 0, variables: 1 */

// <019719D9> ../public/mathlib/rotation.h:118
// variables: 2
inline void CRotation::operator-=(const CRotation& rot)
{
	const char   __FUNCTION__; // 54532
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 120
	}
} /* size: 0, variables: 1 */

// <0164AB39> ../public/mathlib/rotation.h:118
// variables: 2
inline void CRotation::operator-=(const CRotation& rot)
{
	const char   __FUNCTION__; // 30849
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 120
	}
} /* size: 0, variables: 1 */

// <01A9142D> ../public/mathlib/rotation.h:118
// variables: 2
inline void CRotation::operator-=(const CRotation& rot)
{
	const char   __FUNCTION__; // 47273
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 120
	}
} /* size: 0, variables: 1 */

// <01863F4D> ../public/mathlib/rotation.h:143
// variables: 2
inline void CRotation::operator+=(angle_t s)
{
	const char   __FUNCTION__; // 32633
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 145
	}
} /* size: 0, variables: 1 */

// <015CE297> ../public/mathlib/rotation.h:143
// variables: 2
inline void CRotation::operator+=(angle_t s)
{
	const char   __FUNCTION__; // 35274
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 145
	}
} /* size: 0, variables: 1 */

// <059EED30> ../public/mathlib/rotation.h:159
// variables: 2
inline void CRotation::operator*=(angle_t s)
{
	const char   __FUNCTION__; // 34217
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 161
	}
} /* size: 0, variables: 1 */

// <02BD5EDE> ../public/mathlib/rotation.h:159
// variables: 2
inline void CRotation::operator*=(angle_t s)
{
	const char   __FUNCTION__; // 50764
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 161
	}
} /* size: 0, variables: 1 */

// <01A913CB> ../public/mathlib/rotation.h:159
// variables: 2
inline void CRotation::operator*=(angle_t s)
{
	const char   __FUNCTION__; // 47273
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 161
	}
} /* size: 0, variables: 1 */

// <02BD5EB7> ../public/mathlib/rotation.h:176
inline void CRotation::operator+(const CRotation& rot)
{
} /* size: 0 */

// <01863F26> ../public/mathlib/rotation.h:182
inline void CRotation::operator-(const CRotation& rot)
{
} /* size: 0 */

// <01863ED9> ../public/mathlib/rotation.h:200
// variables: 2
inline void CRotation::operator+(angle_t s)
{
	const char   __FUNCTION__; // 32606
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 202
	}
} /* size: 0, variables: 1 */

// <01863E8C> ../public/mathlib/rotation.h:207
// variables: 2
inline void CRotation::operator-(angle_t s)
{
	const char   __FUNCTION__; // 32606
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
	}
} /* size: 0, variables: 1 */

