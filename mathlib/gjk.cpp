
//
// mathlib/gjk.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 29
//	class: 1
//	struct: 1
//

// <05989CDE> mathlib/gjk.cpp:11
inline float VectorDistance(const Vector& v1, const Vector& v2)
{
} /* size: 0 */

// <05989CAA> mathlib/gjk.cpp:18
inline float Det(const Vector& v1, const Vector& v2, const Vector& v3)
{
} /* size: 0 */

// <05989C1D> mathlib/gjk.cpp:34
// variables: 4
inline void BarycentricCoordinates(float* out, const Vector& A, const Vector& B, const Vector& Q)
{
	Vector QA; // 37
	Vector QB; // 38
	Vector AB; // 39
	float divisor; // 42
} /* size: 0, variables: 4 */

// <0598A35F> mathlib/gjk.cpp:50
// variables: 10
// function calls: 24
void BarycentricCoordinates(float* out, const Vector& Q, const Vector& C, const Vector& B, const Vector& A)
{
	Vector QA; // 53
	Vector QB; // 54
	Vector QC; // 55
	Vector AB; // 56
	Vector AC; // 57
	Vector QB_x_QC; // 59
	Vector QC_x_QA; // 60
	Vector QA_x_QB; // 61
	Vector AB_x_AC; // 63
	float divisor; // 66
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 53
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 54
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 56
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 55
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 57
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 63
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 59
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 60
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 61
	DotProduct(const Vector& a,
			const Vector& b);  // 67
} /* size: 449, variables: 10, inline expansions: 24 (587 bytes) */

// <05989B68> mathlib/gjk.cpp:50
// variables: 10
inline void BarycentricCoordinates(float* out, const Vector& A, const Vector& B, const Vector& C, const Vector& Q)
{
	Vector QA; // 53
	Vector QB; // 54
	Vector QC; // 55
	Vector AB; // 56
	Vector AC; // 57
	Vector QB_x_QC; // 59
	Vector QC_x_QA; // 60
	Vector QA_x_QB; // 61
	Vector AB_x_AC; // 63
	float divisor; // 66
} /* size: 0, variables: 10 */

// <05989AB7> mathlib/gjk.cpp:75
// variables: 9
inline void BarycentricCoordinates(float* out, const Vector& A, const Vector& B, const Vector& C, const Vector& D, const Vector& Q)
{
	Vector QA; // 78
	Vector QB; // 79
	Vector QC; // 80
	Vector QD; // 81
	Vector AB; // 82
	Vector AC; // 83
	Vector AD; // 84
	float divisor; // 87
	float sign; // 89
} /* size: 0, variables: 9 */

// <05989AA0> mathlib/gjk.cpp:101
void GJKSimplexVertex_t::GJKSimplexVertex_t()
{
} /* size: 0 */

// <05989A84> mathlib/gjk.cpp:101
inline void GJKSimplexVertex_t::GJKSimplexVertex_t()
{
} /* size: 0 */

// <05988F92> mathlib/gjk.cpp:101
inline void GJKSimplexVertex_t::operator=(const GJKSimplexVertex_t &)
{
} /* size: 0 */

// <05980B4E> mathlib/gjk.cpp:101
// member functions: 2
// member variables: 5
// struct size: 44
struct GJKSimplexVertex_t {
	int mIndex1; /* 0 4 */
	int mIndex2; /* 4 4 */
	Vector mPosition1; /* 8 12 */
	Vector mPosition2; /* 20 12 */
	Vector mPosition; /* 32 12 */
	GJKSimplexVertex_t& operator=(GJKSimplexVertex_t* , const GJKSimplexVertex_t& );
	void GJKSimplexVertex_t(GJKSimplexVertex_t* );
};

// <05988B5C> mathlib/gjk.cpp:115
inline void CGJKSimplex::operator=(const CGJKSimplex &)
{
} /* size: 0 */

// <05980BE8> mathlib/gjk.cpp:115
// member functions: 42
// member variables: 4
// class size: 228
class CGJKSimplex {
	/* mathlib/gjk.cpp:119 */
	void CGJKSimplex(CGJKSimplex* );
	/* mathlib/gjk.cpp:125 */
	void Init(CGJKSimplex* , const Vector& , const Vector& );
	/* mathlib/gjk.cpp:137 */
	void ReadCache(CGJKSimplex* , const matrix3x4_t& , const CGJKShapeProxy& , const matrix3x4_t& , const CGJKShapeProxy& , const GJKSimplexCache_t& );
	/* mathlib/gjk.cpp:182 */
	void WriteCache(const CGJKSimplex* , GJKSimplexCache_t& );
	/* mathlib/gjk.cpp:194 */
	void SaveCache(CGJKSimplex* );
	/* mathlib/gjk.cpp:205 */
	bool CheckCache(const CGJKSimplex* , int, int);
	/* mathlib/gjk.cpp:219 */
	float Metric(const CGJKSimplex* );
	/* mathlib/gjk.cpp:259 */
	bool IsEmpty(const CGJKSimplex* );
	/* mathlib/gjk.cpp:264 */
	int VertexCount(const CGJKSimplex* );
	/* mathlib/gjk.cpp:269 */
	GJKSimplexVertex_t& GetVertex(CGJKSimplex* , int);
	/* mathlib/gjk.cpp:275 */
	const GJKSimplexVertex_t& GetVertex(const CGJKSimplex* , int);
	/* mathlib/gjk.cpp:282 */
	bool Solve(CGJKSimplex* );
	/* mathlib/gjk.cpp:313 */
	Vector GetClosestPoint(const CGJKSimplex* );
	/* mathlib/gjk.cpp:343 */
	Vector GetSearchDirection(const CGJKSimplex* );
	/* mathlib/gjk.cpp:394 */
	bool AddVertex(CGJKSimplex* , int, const Vector& , int, const Vector& );
	/* mathlib/gjk.cpp:412 */
	void BuildWitnessPoints(const CGJKSimplex* , Vector& , Vector& );
private:
	/* mathlib/gjk.cpp:445 */
	bool Solve1(CGJKSimplex* );
	/* mathlib/gjk.cpp:453 */
	bool Solve2(CGJKSimplex* );
	/* mathlib/gjk.cpp:501 */
	bool Solve3(CGJKSimplex* );
	/* mathlib/gjk.cpp:632 */
	bool Solve4(CGJKSimplex* );
	int m_nVertexCount; /* 0 4 */
	GJKSimplexVertex_t m_Vertices[4]; /* 4 176 */
	float m_flLambdas[4]; /* 180 16 */
	GJKSimplexCache_t m_Cache; /* 196 32 */
	CGJKSimplex& operator=(CGJKSimplex* , const CGJKSimplex& );
	void CGJKSimplex(class CGJKSimplex *); /* linkage=_ZN11CGJKSimplexC4Ev */
	void Init(class CGJKSimplex *, const class Vector  &, const class Vector  &); /* linkage=_ZN11CGJKSimplex4InitERK6VectorS2_ */
	void ReadCache(class CGJKSimplex *, const class matrix3x4_t  &, const class CGJKShapeProxy  &, const class matrix3x4_t  &, const class CGJKShapeProxy  &, const class GJKSimplexCache_t  &); /* linkage=_ZN11CGJKSimplex9ReadCacheERK11matrix3x4_tRK14CGJKShapeProxyS2_S5_RK17GJKSimplexCache_t */
	void WriteCache(const class CGJKSimplex  *, class GJKSimplexCache_t &); /* linkage=_ZNK11CGJKSimplex10WriteCacheER17GJKSimplexCache_t */
	void SaveCache(class CGJKSimplex *); /* linkage=_ZN11CGJKSimplex9SaveCacheEv */
	bool CheckCache(const class CGJKSimplex  *, int, int); /* linkage=_ZNK11CGJKSimplex10CheckCacheEii */
	float Metric(const class CGJKSimplex  *); /* linkage=_ZNK11CGJKSimplex6MetricEv */
	bool IsEmpty(const class CGJKSimplex  *); /* linkage=_ZNK11CGJKSimplex7IsEmptyEv */
	int VertexCount(const class CGJKSimplex  *); /* linkage=_ZNK11CGJKSimplex11VertexCountEv */
	class GJKSimplexVertex_t & GetVertex(class CGJKSimplex *, int); /* linkage=_ZN11CGJKSimplex9GetVertexEi */
	const class GJKSimplexVertex_t  & GetVertex(const class CGJKSimplex  *, int); /* linkage=_ZNK11CGJKSimplex9GetVertexEi */
	bool Solve(class CGJKSimplex *); /* linkage=_ZN11CGJKSimplex5SolveEv */
	class Vector GetClosestPoint(const class CGJKSimplex  *); /* linkage=_ZNK11CGJKSimplex15GetClosestPointEv */
	class Vector GetSearchDirection(const class CGJKSimplex  *); /* linkage=_ZNK11CGJKSimplex18GetSearchDirectionEv */
	bool AddVertex(class CGJKSimplex *, int, const class Vector  &, int, const class Vector  &); /* linkage=_ZN11CGJKSimplex9AddVertexEiRK6VectoriS2_ */
	void BuildWitnessPoints(const class CGJKSimplex  *, class Vector &, class Vector &); /* linkage=_ZNK11CGJKSimplex18BuildWitnessPointsER6VectorS1_ */
	bool Solve1(class CGJKSimplex *); /* linkage=_ZN11CGJKSimplex6Solve1Ev */
	bool Solve2(class CGJKSimplex *); /* linkage=_ZN11CGJKSimplex6Solve2Ev */
	bool Solve3(class CGJKSimplex *); /* linkage=_ZN11CGJKSimplex6Solve3Ev */
	bool Solve4(class CGJKSimplex *); /* linkage=_ZN11CGJKSimplex6Solve4Ev */
	class CGJKSimplex & operator=(class CGJKSimplex *, const class CGJKSimplex  &); /* linkage=_ZN11CGJKSimplexaSERKS_ */
};

// <05989A3A> mathlib/gjk.cpp:119
void CGJKSimplex::CGJKSimplex()
{
} /* size: 0 */

// <05989A21> mathlib/gjk.cpp:119
inline void CGJKSimplex::CGJKSimplex()
{
} /* size: 0 */

// <059899F0> mathlib/gjk.cpp:125
inline void CGJKSimplex::Init(const Vector& vVertex1, const Vector& vVertex2)
{
} /* size: 0 */

// <0598991F> mathlib/gjk.cpp:137
// variables: 9
inline void CGJKSimplex::ReadCache(const matrix3x4_t& xform1, const CGJKShapeProxy& proxy1, const matrix3x4_t& xform2, const CGJKShapeProxy& proxy2, const GJKSimplexCache_t& cache)
{
	{
		int nVertex; // 143
		{
			int nIndex1; // 145
			int nIndex2; // 146
			Vector vVertex1; // 148
			Vector vVertex2; // 149
		}
	}
	{
		float flMetric1; // 163
		float flMetric2; // 164
	}
	{
		Vector vVertex1; // 176
		Vector vVertex2; // 177
	}
} /* size: 0 */

// <059898EC> mathlib/gjk.cpp:182
// variable: 1
inline void CGJKSimplex::WriteCache(GJKSimplexCache_t& out)
{
	{
		int nVertex; // 186
	}
} /* size: 0 */

// <059898C7> mathlib/gjk.cpp:194
// variable: 1
inline void CGJKSimplex::SaveCache()
{
	{
		int i; // 198
	}
} /* size: 0 */

// <0598988A> mathlib/gjk.cpp:205
// variable: 1
inline void CGJKSimplex::CheckCache(int nIndex1, int nIndex2)
{
	{
		int i; // 208
	}
} /* size: 0 */

// <0598916F> mathlib/gjk.cpp:219
// variables: 3
// function calls: 33
void CGJKSimplex::Metric()
{
	{
		float flDistance; // 231
		Vector::Vector(); // 1305
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1306
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 1307
		Vector::DistTo(
			const Vector& vOther);  // 13
		VectorDistance(const Vector& v1,
				const Vector& v2);  // 231
	}
	{
		float flArea; // 238
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 238
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 238
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 238
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 238
	}
	{
		float flVolume; // 245
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 245
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 245
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 245
		Det(const Vector& v1,
			const Vector& v2,
			const Vector& v3);  // 245
	}
} /* size: 441 */

// <05989156> mathlib/gjk.cpp:259
inline void CGJKSimplex::IsEmpty()
{
} /* size: 0 */

// <0598913D> mathlib/gjk.cpp:264
inline void CGJKSimplex::VertexCount()
{
} /* size: 0 */

// <05989117> mathlib/gjk.cpp:282
// variable: 1
inline void CGJKSimplex::Solve()
{
	bool bSuccess; // 286
} /* size: 0, variables: 1 */

// <059890F1> mathlib/gjk.cpp:313
// variable: 1
inline void CGJKSimplex::GetClosestPoint()
{
	Vector out; // 315
} /* size: 0, variables: 1 */

// <0598904C> mathlib/gjk.cpp:343
// variables: 11
inline void CGJKSimplex::GetSearchDirection()
{
	Vector out; // 345
	{
		const Vector& A; // 352
	}
	{
		const Vector& A; // 361
		const Vector& B; // 362
		Vector AB; // 364
	}
	{
		const Vector& A; // 373
		const Vector& B; // 374
		const Vector& C; // 375
		Vector AB; // 377
		Vector AC; // 378
		Vector N; // 380
	}
} /* size: 0, variables: 1 */

// <05988FFF> mathlib/gjk.cpp:394
inline void CGJKSimplex::AddVertex(int index1, const Vector& vertex1, int index2, const Vector& vertex2)
{
} /* size: 0 */

// <05988FCC> mathlib/gjk.cpp:412
inline void CGJKSimplex::BuildWitnessPoints(Vector& vertex1, Vector& vertex2)
{
} /* size: 0 */

// <05988FB3> mathlib/gjk.cpp:445
inline void CGJKSimplex::Solve1()
{
} /* size: 0 */

// <05988F3E> mathlib/gjk.cpp:453
// variables: 4
inline void CGJKSimplex::Solve2()
{
	GJKSimplexVertex_t A; // 456
	GJKSimplexVertex_t B; // 457
	float wAB; // 460
	float divisor; // 488
} /* size: 0, variables: 4 */

// <05988E8E> mathlib/gjk.cpp:501
// variables: 11
inline void CGJKSimplex::Solve3()
{
	GJKSimplexVertex_t A; // 504
	GJKSimplexVertex_t B; // 505
	GJKSimplexVertex_t C; // 506
	float wAB; // 509
	float wBC; // 509
	float wCA; // 509
	float wABC; // 551
	float divisor; // 618
	{
		float divisor; // 563
	}
	{
		float divisor; // 584
	}
	{
		float divisor; // 605
	}
} /* size: 0, variables: 8 */

// <05988CD3> mathlib/gjk.cpp:632
// variables: 26
inline void CGJKSimplex::Solve4()
{
	GJKSimplexVertex_t A; // 635
	GJKSimplexVertex_t B; // 636
	GJKSimplexVertex_t C; // 637
	GJKSimplexVertex_t D; // 638
	float wAB; // 641
	float wAC; // 641
	float wAD; // 641
	float wBC; // 641
	float wCD; // 641
	float wDB; // 641
	float wACB; // 698
	float wABD; // 698
	float wADC; // 698
	float wBCD; // 698
	float wABCD; // 833
	float divisor; // 929
	{
		float divisor; // 713
	}
	{
		float divisor; // 734
	}
	{
		float divisor; // 755
	}
	{
		float divisor; // 776
	}
	{
		float divisor; // 797
	}
	{
		float divisor; // 819
	}
	{
		float divisor; // 846
	}
	{
		float divisor; // 869
	}
	{
		float divisor; // 892
	}
	{
		float divisor; // 915
	}
} /* size: 0, variables: 16 */

