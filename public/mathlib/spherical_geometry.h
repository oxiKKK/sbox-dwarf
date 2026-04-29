
//
// public/mathlib/spherical_geometry.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 36
//	structs: 5
//

// <01259E34> ../public/mathlib/spherical_geometry.h:73
void SphericalHarmonicL2(const Vector &, float *)
{
} /* size: 0 */

// <0125A1EF> ../public/mathlib/spherical_geometry.h:75
void SphericalHarmonicL3(const Vector &, float *)
{
} /* size: 0 */

// <0120F7FB> ../public/mathlib/spherical_geometry.h:81
// member functions: 11
// member variable: 1
// static member variables: 2
// struct size: 16
struct SphericalHarmonicFn_t<2> {
	/* ../public/mathlib/spherical_geometry.h:85 */
	void SphericalHarmonicFn_t(SphericalHarmonicFn_t<2>* );
	/* ../public/mathlib/spherical_geometry.h:87 */
	void SphericalHarmonicFn_t(SphericalHarmonicFn_t<2>* , float, float);
	/* ../public/mathlib/spherical_geometry.h:92 */
	void SphericalHarmonicFn_t(SphericalHarmonicFn_t<2>* , const Vector& );
	/* ../public/mathlib/spherical_geometry.h:113 */
	const float& operator[](const SphericalHarmonicFn_t<2>* , int);
	/* ../public/mathlib/spherical_geometry.h:114 */
	float& operator[](SphericalHarmonicFn_t<2>* , int);
	/* ../public/mathlib/spherical_geometry.h:116 */
	void Init(SphericalHarmonicFn_t<2>* , float, float);
	/* ../public/mathlib/spherical_geometry.h:126 */
	void Init(SphericalHarmonicFn_t<2>* , const Vector& );
	/* ../public/mathlib/spherical_geometry.h:136 */
	void Zero(SphericalHarmonicFn_t<2>* );
	/* ../public/mathlib/spherical_geometry.h:144 */
	int Serialize(SphericalHarmonicFn_t<2>* , float* );
	/* ../public/mathlib/spherical_geometry.h:150 */
	int Unserialize(SphericalHarmonicFn_t<2>* , const float* );
	static const int sm_nOrder; /* 0 0 */
	static const int sm_nCoeffs = 4; /* 0 0 */
	float m_Coeffs[4]; /* 0 16 */
	/* ../public/mathlib/spherical_geometry.h:98 */
	void SphericalHarmonicFn_t<3>(SphericalHarmonicFn_t<2>* , const SphericalHarmonicFn_t<3>& );
};

// <0120F9E7> ../public/mathlib/spherical_geometry.h:81
// member functions: 10
// member variable: 1
// static member variables: 2
// struct size: 36
struct SphericalHarmonicFn_t<3> {
	/* ../public/mathlib/spherical_geometry.h:85 */
	void SphericalHarmonicFn_t(SphericalHarmonicFn_t<3>* );
	/* ../public/mathlib/spherical_geometry.h:87 */
	void SphericalHarmonicFn_t(SphericalHarmonicFn_t<3>* , float, float);
	/* ../public/mathlib/spherical_geometry.h:92 */
	void SphericalHarmonicFn_t(SphericalHarmonicFn_t<3>* , const Vector& );
	/* ../public/mathlib/spherical_geometry.h:113 */
	const float& operator[](const SphericalHarmonicFn_t<3>* , int);
	/* ../public/mathlib/spherical_geometry.h:114 */
	float& operator[](SphericalHarmonicFn_t<3>* , int);
	/* ../public/mathlib/spherical_geometry.h:116 */
	void Init(SphericalHarmonicFn_t<3>* , float, float);
	/* ../public/mathlib/spherical_geometry.h:126 */
	void Init(SphericalHarmonicFn_t<3>* , const Vector& );
	/* ../public/mathlib/spherical_geometry.h:136 */
	void Zero(SphericalHarmonicFn_t<3>* );
	/* ../public/mathlib/spherical_geometry.h:144 */
	int Serialize(SphericalHarmonicFn_t<3>* , float* );
	/* ../public/mathlib/spherical_geometry.h:150 */
	int Unserialize(SphericalHarmonicFn_t<3>* , const float* );
	static const int sm_nOrder; /* 0 0 */
	static const int sm_nCoeffs = 9; /* 0 0 */
	float m_Coeffs[9]; /* 0 36 */
};

// <03039C96> ../public/mathlib/spherical_geometry.h:81
// member functions: 10
// member variable: 1
// static member variables: 2
// struct size: 16
struct SphericalHarmonicFn_t<2> {
	/* ../public/mathlib/spherical_geometry.h:85 */
	void SphericalHarmonicFn_t(SphericalHarmonicFn_t<2>* );
	/* ../public/mathlib/spherical_geometry.h:87 */
	void SphericalHarmonicFn_t(SphericalHarmonicFn_t<2>* , float, float);
	/* ../public/mathlib/spherical_geometry.h:92 */
	void SphericalHarmonicFn_t(SphericalHarmonicFn_t<2>* , const Vector& );
	/* ../public/mathlib/spherical_geometry.h:113 */
	const float& operator[](const SphericalHarmonicFn_t<2>* , int);
	/* ../public/mathlib/spherical_geometry.h:114 */
	float& operator[](SphericalHarmonicFn_t<2>* , int);
	/* ../public/mathlib/spherical_geometry.h:116 */
	void Init(SphericalHarmonicFn_t<2>* , float, float);
	/* ../public/mathlib/spherical_geometry.h:126 */
	void Init(SphericalHarmonicFn_t<2>* , const Vector& );
	/* ../public/mathlib/spherical_geometry.h:136 */
	void Zero(SphericalHarmonicFn_t<2>* );
	/* ../public/mathlib/spherical_geometry.h:144 */
	int Serialize(SphericalHarmonicFn_t<2>* , float* );
	/* ../public/mathlib/spherical_geometry.h:150 */
	int Unserialize(SphericalHarmonicFn_t<2>* , const float* );
	static const int sm_nOrder; /* 0 0 */
	static const int sm_nCoeffs = 4; /* 0 0 */
	float m_Coeffs[4]; /* 0 16 */
};

// <0305E040> ../public/mathlib/spherical_geometry.h:85
void SphericalHarmonicFn_t<3>::SphericalHarmonicFn_t()
{
} /* size: 0 */

// <0305E027> ../public/mathlib/spherical_geometry.h:85
inline void SphericalHarmonicFn_t<3>::SphericalHarmonicFn_t()
{
} /* size: 0 */

// <0127C03A> ../public/mathlib/spherical_geometry.h:85
void SphericalHarmonicFn_t<2>::SphericalHarmonicFn_t()
{
} /* size: 0 */

// <0127C021> ../public/mathlib/spherical_geometry.h:85
inline void SphericalHarmonicFn_t<2>::SphericalHarmonicFn_t()
{
} /* size: 0 */

// <0127C111> ../public/mathlib/spherical_geometry.h:92
void SphericalHarmonicFn_t<3>::SphericalHarmonicFn_t(const Vector& vDirection)
{
} /* size: 0 */

// <0127C0EC> ../public/mathlib/spherical_geometry.h:92
inline void SphericalHarmonicFn_t<3>::SphericalHarmonicFn_t(const Vector& vDirection)
{
} /* size: 0 */

// <01279FD5> ../public/mathlib/spherical_geometry.h:92
void SphericalHarmonicFn_t<2>::SphericalHarmonicFn_t(const Vector& vDirection)
{
} /* size: 0 */

// <01279FB0> ../public/mathlib/spherical_geometry.h:92
inline void SphericalHarmonicFn_t<2>::SphericalHarmonicFn_t(const Vector& vDirection)
{
} /* size: 0 */

// <0127BFB0> ../public/mathlib/spherical_geometry.h:98
// variables: 3
void SphericalHarmonicFn_t<2>::SphericalHarmonicFn_t<3>(const SphericalHarmonicFn_t<3>& other)
{
	{
		int nInCommon; // 100
		{
			int i; // 102
		}
		{
			int j; // 107
		}
	}
} /* size: 0 */

// <0127BF58> ../public/mathlib/spherical_geometry.h:98
// variables: 3
inline void SphericalHarmonicFn_t<2>::SphericalHarmonicFn_t<3>(const SphericalHarmonicFn_t<3>& other)
{
	{
		int nInCommon; // 100
		{
			int i; // 102
		}
		{
			int j; // 107
		}
	}
} /* size: 0 */

// <0127C285> ../public/mathlib/spherical_geometry.h:113
inline void SphericalHarmonicFn_t<2>::operator[](int i)
{
} /* size: 0 */

// <0127BFFC> ../public/mathlib/spherical_geometry.h:136
// variable: 1
inline void SphericalHarmonicFn_t<2>::Zero()
{
	{
		int i; // 138
	}
} /* size: 0 */

// <0126D3C0> ../public/mathlib/spherical_geometry.h:136
// variable: 1
inline void SphericalHarmonicFn_t<3>::Zero()
{
	{
		int i; // 138
	}
} /* size: 0 */

// <0126D2A9> ../public/mathlib/spherical_geometry.h:150
inline void SphericalHarmonicFn_t<3>::Unserialize(const float* pCoeffs)
{
} /* size: 0 */

// <013377EC> ../public/mathlib/spherical_geometry.h:166
inline void SphericalHarmonicFn_t<2>::Init(const Vector& vDirection)
{
} /* size: 0 */

// <013377C4> ../public/mathlib/spherical_geometry.h:172
inline void SphericalHarmonicFn_t<3>::Init(const Vector& vDirection)
{
} /* size: 0 */

// <0126D25F> ../public/mathlib/spherical_geometry.h:202
// variable: 1
inline void SHScale<3>(const SphericalHarmonicFn_t<3>& a, float flScale, SphericalHarmonicFn_t<3>& result)
{
	{
		int i; // 204
	}
} /* size: 0 */

// <0126C6AD> ../public/mathlib/spherical_geometry.h:202
// variable: 1
inline void SHScale<2>(const SphericalHarmonicFn_t<2>& a, float flScale, SphericalHarmonicFn_t<2>& result)
{
	{
		int i; // 204
	}
} /* size: 0 */

// <0127C098> ../public/mathlib/spherical_geometry.h:227
// variable: 1
inline void SHMulAdd<3>(const SphericalHarmonicFn_t<3>& a, const SphericalHarmonicFn_t<3>& b, float flScale, SphericalHarmonicFn_t<3>& result)
{
	{
		int i; // 229
	}
} /* size: 0 */

// <0127BF04> ../public/mathlib/spherical_geometry.h:227
// variable: 1
inline void SHMulAdd<2>(const SphericalHarmonicFn_t<2>& a, const SphericalHarmonicFn_t<2>& b, float flScale, SphericalHarmonicFn_t<2>& result)
{
	{
		int i; // 229
	}
} /* size: 0 */

// <01337786> ../public/mathlib/spherical_geometry.h:293
// variables: 2
inline Vector4D SHRadianceToIrradianceEvalConstants(const SphericalHarmonicFn_t<2>& shIrradiance)
{
	const float  c1; // 295
	const float  c0; // 296
} /* size: 0, variables: 2 */

// <0120FBC9> ../public/mathlib/spherical_geometry.h:308
// member functions: 7
// member variables: 3
// static member variables: 2
// struct size: 108
struct SphericalHarmonicRGBFn_t<3> {
	/* ../public/mathlib/spherical_geometry.h:312 */
	void SphericalHarmonicRGBFn_t(SphericalHarmonicRGBFn_t<3>* );
	/* ../public/mathlib/spherical_geometry.h:315 */
	void SphericalHarmonicRGBFn_t(SphericalHarmonicRGBFn_t<3>* , const SphericalHarmonicRGBFn_t<3>& );
	/* ../public/mathlib/spherical_geometry.h:319 */
	const SphericalHarmonicFn_t<3>& operator[](const SphericalHarmonicRGBFn_t<3>* , int);
	/* ../public/mathlib/spherical_geometry.h:320 */
	SphericalHarmonicFn_t<3>& operator[](SphericalHarmonicRGBFn_t<3>* , int);
	/* ../public/mathlib/spherical_geometry.h:322 */
	void Zero(SphericalHarmonicRGBFn_t<3>* );
	/* ../public/mathlib/spherical_geometry.h:329 */
	int Serialize(SphericalHarmonicRGBFn_t<3>* , float* );
	/* ../public/mathlib/spherical_geometry.h:338 */
	int Unserialize(SphericalHarmonicRGBFn_t<3>* , const float* );
	static const int sm_nOrder; /* 0 0 */
	static const int sm_nCoeffs = 27; /* 0 0 */
	SphericalHarmonicFn_t<3> r; /* 0 36 */
	SphericalHarmonicFn_t<3> g; /* 36 36 */
	SphericalHarmonicFn_t<3> b; /* 72 36 */
};

// <01217595> ../public/mathlib/spherical_geometry.h:308
// member functions: 7
// member variables: 3
// static member variables: 2
// struct size: 48
struct SphericalHarmonicRGBFn_t<2> {
	/* ../public/mathlib/spherical_geometry.h:312 */
	void SphericalHarmonicRGBFn_t(SphericalHarmonicRGBFn_t<2>* );
	/* ../public/mathlib/spherical_geometry.h:315 */
	void SphericalHarmonicRGBFn_t(SphericalHarmonicRGBFn_t<2>* , const SphericalHarmonicRGBFn_t<2>& );
	/* ../public/mathlib/spherical_geometry.h:319 */
	const SphericalHarmonicFn_t<2>& operator[](const SphericalHarmonicRGBFn_t<2>* , int);
	/* ../public/mathlib/spherical_geometry.h:320 */
	SphericalHarmonicFn_t<2>& operator[](SphericalHarmonicRGBFn_t<2>* , int);
	/* ../public/mathlib/spherical_geometry.h:322 */
	void Zero(SphericalHarmonicRGBFn_t<2>* );
	/* ../public/mathlib/spherical_geometry.h:329 */
	int Serialize(SphericalHarmonicRGBFn_t<2>* , float* );
	/* ../public/mathlib/spherical_geometry.h:338 */
	int Unserialize(SphericalHarmonicRGBFn_t<2>* , const float* );
	static const int sm_nOrder; /* 0 0 */
	static const int sm_nCoeffs; /* 0 0 */
	SphericalHarmonicFn_t<2> r; /* 0 16 */
	SphericalHarmonicFn_t<2> g; /* 16 16 */
	SphericalHarmonicFn_t<2> b; /* 32 16 */
};

// <0305F6F6> ../public/mathlib/spherical_geometry.h:312
void SphericalHarmonicRGBFn_t<3>::SphericalHarmonicRGBFn_t()
{
} /* size: 0 */

// <0305F6DD> ../public/mathlib/spherical_geometry.h:312
inline void SphericalHarmonicRGBFn_t<3>::SphericalHarmonicRGBFn_t()
{
} /* size: 0 */

// <0127A023> ../public/mathlib/spherical_geometry.h:312
void SphericalHarmonicRGBFn_t<2>::SphericalHarmonicRGBFn_t()
{
} /* size: 0 */

// <0127A00A> ../public/mathlib/spherical_geometry.h:312
inline void SphericalHarmonicRGBFn_t<2>::SphericalHarmonicRGBFn_t()
{
} /* size: 0 */

// <0127C26C> ../public/mathlib/spherical_geometry.h:322
inline void SphericalHarmonicRGBFn_t<3>::Zero()
{
} /* size: 0 */

// <01279FF1> ../public/mathlib/spherical_geometry.h:322
inline void SphericalHarmonicRGBFn_t<2>::Zero()
{
} /* size: 0 */

// <0127C12D> ../public/mathlib/spherical_geometry.h:338
// variable: 1
inline void SphericalHarmonicRGBFn_t<3>::Unserialize(const float* pCoeffs)
{
	int nCount; // 340
} /* size: 0, variables: 1 */

// <044FEBC0> ../public/mathlib/spherical_geometry.h:704
inline const Vector& GetHemisphericalSamplingDirection(int n)
{
} /* size: 0 */

// <0584C59B> ../../public/mathlib/spherical_geometry.h:728
// variables: 3
inline Vector UniformDisk(float flR1, float flR2, const Vector& vTangent1, const Vector& vTangent2)
{
	float flR; // 730
	float flSinPhi; // 731
	float flCosPhi; // 731
} /* size: 0, variables: 3 */

// <0584C4F4> ../../public/mathlib/spherical_geometry.h:751
// variables: 5
inline Vector UniformCone(const Vector& vDirection, const Vector& vTangent, const Vector& vBitangent, float flR1, float flR2, float flCosThetaMax)
{
	const float  fCosTheta; // 753
	const float  fSinTheta; // 754
	const float  fPhi; // 755
	float fSinPhi; // 757
	float fCosPhi; // 757
} /* size: 0, variables: 5 */

// <0583E57C> ../../public/mathlib/spherical_geometry.h:766
Vector2D UniformDiskConcentric(float, float)
{
} /* size: 0 */

// <0584C49B> ../../public/mathlib/spherical_geometry.h:819
// variables: 3
inline Vector UniformSphere(float flR1, float flR2)
{
	float flSinTheta; // 821
	float flSinPhi; // 822
	float flCosPhi; // 822
} /* size: 0, variables: 3 */

// <06193B96> ../public/mathlib/spherical_geometry.h:843
// variables: 3
inline Vector CosineHemisphere(float flR1, float flR2, const Vector& vNormal, const Vector& vTangent1, const Vector& vTangent2)
{
	float flSinTheta; // 845
	float flSinPhi; // 846
	float flCosPhi; // 846
} /* size: 0, variables: 3 */

