
//
// vphysics2/physicstrace.cpp
//
//	referenced by: libengine2.so
//
//	functions: 54
//	struct: 1
//

// <00DD751D> vphysics2/physicstrace.cpp:18
void simplex_t::simplex_t()
{
} /* size: 0 */

// <00DD7500> vphysics2/physicstrace.cpp:18
inline void simplex_t::simplex_t()
{
} /* size: 0 */

// <00DC50F5> vphysics2/physicstrace.cpp:18
// member functions: 16
// member variables: 2
// struct size: 52
struct simplex_t {
	Vector m_vPoints[4]; /* 0 48 */
	int m_nPointCount; /* 48 4 */
	/* vphysics2/physicstrace.cpp:23 */
	bool PointSimplex(simplex_t* , const Vector& , Vector* );
	/* vphysics2/physicstrace.cpp:24 */
	bool EdgeSimplex(simplex_t* , const Vector& , int, const Vector& , Vector* );
	/* vphysics2/physicstrace.cpp:25 */
	bool TriangleSimplex(simplex_t* , const Vector& , int, const Vector& , Vector* );
	/* vphysics2/physicstrace.cpp:27 */
	bool SolveGJKSet(simplex_t* , const Vector& , Vector* );
	/* vphysics2/physicstrace.cpp:28 */
	bool SolveVoronoiRegion2(simplex_t* , const Vector& , Vector* );
	/* vphysics2/physicstrace.cpp:29 */
	bool SolveVoronoiRegion3(simplex_t* , const Vector& , Vector* );
	/* vphysics2/physicstrace.cpp:30 */
	bool SolveVoronoiRegion4(simplex_t* , const Vector& , Vector* );
	/* vphysics2/physicstrace.cpp:32 */
	bool ClipRayToTetrahedronBase(simplex_t* , const Vector& , Vector* );
	/* vphysics2/physicstrace.cpp:33 */
	Vector ClipRayToTetrahedron(simplex_t* , const Vector& );
	/* vphysics2/physicstrace.cpp:34 */
	float ClipRayToTriangle(simplex_t* , const Vector& , float);
	/* vphysics2/physicstrace.cpp:35 */
	bool HasVert(simplex_t* , const Vector& );
	/* vphysics2/physicstrace.cpp:45 */
	void CheckTriangleWindingOrder(simplex_t* , const Vector& );
	/* vphysics2/physicstrace.cpp:63 */
	bool Validate(const simplex_t* , const Vector& );
	/* vphysics2/physicstrace.cpp:76 */
	bool Validate(const simplex_t* );
	/* vphysics2/physicstrace.cpp:88 */
	int VertexCount(const simplex_t* );
	void simplex_t(simplex_t* );
};

// <00DE3D12> vphysics2/physicstrace.cpp:35
// variable: 1
inline void simplex_t::HasVert(const Vector& v)
{
	{
		int i; // 37
	}
} /* size: 0 */

// <00DE3CB3> vphysics2/physicstrace.cpp:45
// variables: 5
inline void simplex_t::CheckTriangleWindingOrder(const Vector& vRef)
{
	{
		Vector AB; // 49
		Vector AC; // 50
		Vector ABC; // 51
		float d; // 52
		{
			Vector B; // 56
		}
	}
} /* size: 0 */

// <00DE3C67> vphysics2/physicstrace.cpp:95
inline void simplex_t::TriangleSimplex(const Vector& vAddPoint, int outIndex, const Vector& vFaceNormal, Vector* pOut)
{
} /* size: 0 */

// <00DE5030> vphysics2/physicstrace.cpp:103
// variables: 2
// function calls: 17
void simplex_t::EdgeSimplex(const Vector& vAddPoint, int outIndex, const Vector& vEdge, Vector* pOut)
{
	Vector cross; // 105
	Vector::Vector(); // 105
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 106
	Vector::LengthSqr(); // 112
	{
		Vector AB; // 114
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 114
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 115
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 115
		Vector::operator=(
				const Vector& vOther);  // 115
		Vector::LengthSqr(); // 116
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 118
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 118
		Vector::operator=(
				const Vector& vOther);  // 118
	}
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 107
	Vector::operator=(
			const Vector& vOther);  // 109
} /* size: 378, variables: 1, inline expansions: 5 (202 bytes) */

// <00DE3C02> vphysics2/physicstrace.cpp:103
// variables: 2
inline void simplex_t::EdgeSimplex(const Vector& vAddPoint, int outIndex, const Vector& vEdge, Vector* pOut)
{
	Vector cross; // 105
	{
		Vector AB; // 114
	}
} /* size: 0, variables: 1 */

// <00DE3BCE> vphysics2/physicstrace.cpp:124
inline void simplex_t::PointSimplex(const Vector& vAddPoint, Vector* pOut)
{
} /* size: 0 */

// <00DE3B7D> vphysics2/physicstrace.cpp:132
// variables: 2
inline float Clip(const Vector& vDir, const Vector& vPos, const Vector& vNormal)
{
	float cosTheta; // 135
	{
		float dist; // 138
	}
} /* size: 0, variables: 1 */

// <00DE3A62> vphysics2/physicstrace.cpp:155
// function calls: 2
void simplex_t::SolveGJKSet(const Vector& vAddPoint, Vector* pOut)
{
	Vector::operator=(
			const Vector& vOther);  // 161
	Vector::operator=(
			const Vector& vOther);  // 162
} /* size: 138, inline expansions: 2 (56 bytes) */

// <00DE3687> vphysics2/physicstrace.cpp:177
// variables: 4
// function calls: 14
void simplex_t::SolveVoronoiRegion2(const Vector& vAddPoint, Vector* pOut)
{
	Vector AB; // 180
	float d; // 181
	{
		Vector cross; // 186
		float flLengthSqr; // 189
		Vector::operator=(
				const Vector& vOther);  // 185
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 187
		Vector::Vector(); // 186
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 188
		Vector::LengthSqr(); // 189
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 195
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 195
	}
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 180
	Vector::operator=(
			const Vector& vOther);  // 127
	Vector::operator=(
			const Vector& vOther);  // 128
	simplex_t::PointSimplex(
			const Vector& vAddPoint,
			Vector* pOut);  // 202
	DotProduct(const Vector& a,
			const Vector& b);  // 181
} /* size: 396, variables: 2, inline expansions: 7 (219 bytes) */

// <00DE2F24> vphysics2/physicstrace.cpp:208
// variables: 6
// function calls: 27
void simplex_t::SolveVoronoiRegion3(const Vector& vAddPoint, Vector* pOut)
{
	Vector AB; // 211
	Vector AC; // 212
	Vector ABC; // 213
	Vector ABCxAC; // 214
	float d; // 215
	{
		Vector ABxABC; // 229
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 229
		DotProduct(const Vector& a,
				const Vector& b);  // 230
		DotProduct(const Vector& a,
				const Vector& b);  // 235
		Vector::operator=(
				const Vector& vOther);  // 243
		Vector::operator=(
				const Vector& vOther);  // 244
		Vector::operator=(
				const Vector& vOther);  // 245
		Vector::operator=(
				const Vector& vOther);  // 239
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1431
		Vector::operator-(); // 240
		Vector::operator=(
				const Vector& vOther);  // 240
	}
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 212
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 211
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 213
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 214
	DotProduct(const Vector& a,
			const Vector& b);  // 215
	DotProduct(const Vector& a,
			const Vector& b);  // 219
	DotProduct(const Vector& a,
			const Vector& b);  // 250
	Vector::operator=(
			const Vector& vOther);  // 127
	Vector::operator=(
			const Vector& vOther);  // 128
	simplex_t::PointSimplex(
			const Vector& vAddPoint,
			Vector* pOut);  // 255
} /* size: 794, variables: 5, inline expansions: 16 (490 bytes) */

// <00DE0D82> vphysics2/physicstrace.cpp:259
// variables: 26
// function calls: 127
void simplex_t::SolveVoronoiRegion4(const Vector& vAddPoint, Vector* pOut)
{
	Vector AB; // 264
	Vector AC; // 265
	Vector AD; // 266
	Vector ABC; // 269
	Vector ACD; // 270
	Vector ADB; // 271
	int faceFlags; // 273
	float d; // 274
	{
		Vector ABCxAC; // 312
		{
			Vector ACxACD; // 316
			{
				Vector ACDxAD; // 331
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 1508
				CrossProduct(const Vector& a,
						const Vector& b);  // 331
				DotProduct(const Vector& a,
						const Vector& b);  // 332
			}
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 316
			DotProduct(const Vector& a,
					const Vector& b);  // 317
			DotProduct(const Vector& a,
					const Vector& b);  // 320
		}
		{
			Vector ABxABC; // 345
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 345
			DotProduct(const Vector& a,
					const Vector& b);  // 346
			Vector::operator=(
					const Vector& vOther);  // 98
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1431
			Vector::operator-(); // 99
			Vector::operator=(
					const Vector& vOther);  // 99
			simplex_t::TriangleSimplex(
					const Vector& vAddPoint,
					int outIndex,
					const Vector& vFaceNormal,
					Vector* pOut);  // 357
			DotProduct(const Vector& a,
					const Vector& b);  // 349
		}
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 312
		DotProduct(const Vector& a,
				const Vector& b);  // 313
	}
	{
		Vector ADBxAB; // 364
		{
			Vector ABxABC; // 368
			{
				Vector ABCxAC; // 383
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 1508
				CrossProduct(const Vector& a,
						const Vector& b);  // 383
				DotProduct(const Vector& a,
						const Vector& b);  // 384
				Vector::operator=(
						const Vector& vOther);  // 98
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 1431
				Vector::operator-(); // 99
				Vector::operator=(
						const Vector& vOther);  // 99
				simplex_t::TriangleSimplex(
						const Vector& vAddPoint,
						int outIndex,
						const Vector& vFaceNormal,
						Vector* pOut);  // 391
			}
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 368
			DotProduct(const Vector& a,
					const Vector& b);  // 369
			DotProduct(const Vector& a,
					const Vector& b);  // 372
		}
		{
			Vector ADxADB; // 396
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 396
			DotProduct(const Vector& a,
					const Vector& b);  // 397
			Vector::operator=(
					const Vector& vOther);  // 98
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1431
			Vector::operator-(); // 99
			Vector::operator=(
					const Vector& vOther);  // 99
			simplex_t::TriangleSimplex(
					const Vector& vAddPoint,
					int outIndex,
					const Vector& vFaceNormal,
					Vector* pOut);  // 409
		}
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 364
		DotProduct(const Vector& a,
				const Vector& b);  // 365
	}
	{
		Vector ACDxAD; // 416
		{
			Vector ADxADB; // 420
			{
				Vector ADBxAB; // 436
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 1508
				CrossProduct(const Vector& a,
						const Vector& b);  // 436
				DotProduct(const Vector& a,
						const Vector& b);  // 437
				Vector::operator=(
						const Vector& vOther);  // 98
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 1431
				Vector::operator-(); // 99
				Vector::operator=(
						const Vector& vOther);  // 99
				simplex_t::TriangleSimplex(
						const Vector& vAddPoint,
						int outIndex,
						const Vector& vFaceNormal,
						Vector* pOut);  // 444
			}
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 420
			DotProduct(const Vector& a,
					const Vector& b);  // 421
			DotProduct(const Vector& a,
					const Vector& b);  // 424
		}
		{
			Vector ACxACD; // 449
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 449
			DotProduct(const Vector& a,
					const Vector& b);  // 450
			Vector::operator=(
					const Vector& vOther);  // 98
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1431
			Vector::operator-(); // 99
			Vector::operator=(
					const Vector& vOther);  // 99
			simplex_t::TriangleSimplex(
					const Vector& vAddPoint,
					int outIndex,
					const Vector& vFaceNormal,
					Vector* pOut);  // 461
			DotProduct(const Vector& a,
					const Vector& b);  // 453
		}
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 416
		DotProduct(const Vector& a,
				const Vector& b);  // 417
	}
	{
		Vector ADBxAB; // 467
		Vector ABCxAC; // 486
		Vector ACxACD; // 506
		{
			Vector ADxADB; // 477
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 477
			DotProduct(const Vector& a,
					const Vector& b);  // 478
			Vector::operator=(
					const Vector& vOther);  // 98
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1431
			Vector::operator-(); // 99
			Vector::operator=(
					const Vector& vOther);  // 99
			simplex_t::TriangleSimplex(
					const Vector& vAddPoint,
					int outIndex,
					const Vector& vFaceNormal,
					Vector* pOut);  // 483
		}
		{
			Vector ABxABC; // 494
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 494
			DotProduct(const Vector& a,
					const Vector& b);  // 495
			Vector::operator=(
					const Vector& vOther);  // 98
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1431
			Vector::operator-(); // 99
			Vector::operator=(
					const Vector& vOther);  // 99
			simplex_t::TriangleSimplex(
					const Vector& vAddPoint,
					int outIndex,
					const Vector& vFaceNormal,
					Vector* pOut);  // 500
			DotProduct(const Vector& a,
					const Vector& b);  // 501
		}
		{
			Vector ACDxAD; // 520
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 520
			DotProduct(const Vector& a,
					const Vector& b);  // 521
			Vector::operator=(
					const Vector& vOther);  // 98
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1431
			Vector::operator-(); // 99
			Vector::operator=(
					const Vector& vOther);  // 99
			simplex_t::TriangleSimplex(
					const Vector& vAddPoint,
					int outIndex,
					const Vector& vFaceNormal,
					Vector* pOut);  // 527
		}
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 467
		DotProduct(const Vector& a,
				const Vector& b);  // 468
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 486
		DotProduct(const Vector& a,
				const Vector& b);  // 487
		Vector::operator=(
				const Vector& vOther);  // 127
		Vector::operator=(
				const Vector& vOther);  // 128
		simplex_t::PointSimplex(
				const Vector& vAddPoint,
				Vector* pOut);  // 536
		Vector::operator=(
				const Vector& vOther);  // 533
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 506
		DotProduct(const Vector& a,
				const Vector& b);  // 507
		DotProduct(const Vector& a,
				const Vector& b);  // 513
		DotProduct(const Vector& a,
				const Vector& b);  // 530
	}
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 264
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 265
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 269
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 266
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 270
	DotProduct(const Vector& a,
			const Vector& b);  // 275
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 271
	DotProduct(const Vector& a,
			const Vector& b);  // 280
	DotProduct(const Vector& a,
			const Vector& b);  // 285
	Vector::operator=(
			const Vector& vOther);  // 307
	Vector::operator=(
			const Vector& vOther);  // 303
	Vector::operator=(
			const Vector& vOther);  // 295
} /* size: 3930, variables: 8, inline expansions: 21 (652 bytes) */

// <00DE01FB> vphysics2/physicstrace.cpp:548
// variables: 18
// function calls: 44
void simplex_t::ClipRayToTetrahedronBase(const Vector& vDir, Vector* pSearchDir)
{
	Vector AB; // 550
	Vector AC; // 551
	Vector AD; // 552
	Vector BC; // 553
	Vector BD; // 554
	Vector ABC; // 557
	Vector ACD; // 557
	Vector ADB; // 557
	Vector BCD; // 557
	float dists; // 577
	float dmin; // 582
	int best; // 583
	{
		int i; // 584
	}
	{
		float flPlaneConst; // 594
		DotProduct(const Vector& a,
				const Vector& b);  // 594
		DotProduct(const Vector& a,
				const Vector& b);  // 594
		DotProduct(const Vector& a,
				const Vector& b);  // 595
	}
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 550
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 551
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 552
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 553
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 554
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 558
	Vector::Vector(); // 557
	Vector::Vector(); // 557
	Vector::Vector(); // 557
	Vector::Vector(); // 557
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 559
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 560
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 561
	DotProduct(const Vector& a,
			const Vector& b);  // 135
	{
		float dist; // 138
		DotProduct(const Vector& a,
				const Vector& b);  // 138
	}
	Clip(const Vector& vDir,
		const Vector& vPos,
		const Vector& vNormal);  // 578
	DotProduct(const Vector& a,
			const Vector& b);  // 135
	{
		float dist; // 138
		DotProduct(const Vector& a,
				const Vector& b);  // 138
	}
	Clip(const Vector& vDir,
		const Vector& vPos,
		const Vector& vNormal);  // 579
	DotProduct(const Vector& a,
			const Vector& b);  // 135
	{
		float dist; // 138
		DotProduct(const Vector& a,
				const Vector& b);  // 138
	}
	Clip(const Vector& vDir,
		const Vector& vPos,
		const Vector& vNormal);  // 580
	DotProduct(const Vector& a,
			const Vector& b);  // 135
	{
		float dist; // 138
		DotProduct(const Vector& a,
				const Vector& b);  // 138
	}
	Clip(const Vector& vDir,
		const Vector& vPos,
		const Vector& vNormal);  // 581
	Vector::operator=(
			const Vector& vOther);  // 607
	Vector::operator=(
			const Vector& vOther);  // 612
	Vector::operator=(
			const Vector& vOther);  // 615
	Vector::operator=(
			const Vector& vOther);  // 620
	Vector::operator=(
			const Vector& vOther);  // 621
	Vector::operator=(
			const Vector& vOther);  // 611
} /* size: 1776, variables: 12, inline expansions: 37 (1623 bytes) */

// <00DDFA77> vphysics2/physicstrace.cpp:632
// variables: 13
// function calls: 27
void simplex_t::ClipRayToTetrahedron(const Vector& vDir)
{
	Vector AB; // 634
	Vector AC; // 635
	Vector AD; // 636
	Vector ABC; // 639
	Vector ACD; // 639
	Vector ADB; // 639
	float dists; // 656
	float dmin; // 661
	int best; // 662
	{
		int i; // 663
	}
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 634
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 635
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 640
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 636
	Vector::Vector(); // 639
	Vector::Vector(); // 639
	Vector::Vector(); // 639
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 641
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 642
	DotProduct(const Vector& a,
			const Vector& b);  // 135
	{
		float dist; // 138
		DotProduct(const Vector& a,
				const Vector& b);  // 138
	}
	Clip(const Vector& vDir,
		const Vector& vPos,
		const Vector& vNormal);  // 657
	DotProduct(const Vector& a,
			const Vector& b);  // 135
	{
		float dist; // 138
		DotProduct(const Vector& a,
				const Vector& b);  // 138
	}
	Clip(const Vector& vDir,
		const Vector& vPos,
		const Vector& vNormal);  // 658
	DotProduct(const Vector& a,
			const Vector& b);  // 135
	{
		float dist; // 138
		DotProduct(const Vector& a,
				const Vector& b);  // 138
	}
	Clip(const Vector& vDir,
		const Vector& vPos,
		const Vector& vNormal);  // 659
	Vector::operator=(
			const Vector& vOther);  // 681
	Vector::operator=(
			const Vector& vOther);  // 678
	Vector::operator=(
			const Vector& vOther);  // 684
} /* size: 866, variables: 9, inline expansions: 24 (951 bytes) */

// <00DDF284> vphysics2/physicstrace.cpp:692
// variables: 15
// function calls: 27
void simplex_t::ClipRayToTriangle(const Vector& vDir, float epsilon)
{
	Vector AB; // 694
	Vector AC; // 695
	Vector BC; // 696
	Vector ABC; // 699
	Vector edgeAB; // 702
	Vector edgeAC; // 702
	Vector edgeBC; // 702
	float dists; // 721
	Vector* normals; // 725
	float dmin; // 727
	int best; // 728
	float dot; // 739
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 694
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 695
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 696
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 700
	Vector::Vector(); // 699
	Vector::Vector(); // 702
	Vector::Vector(); // 702
	Vector::Vector(); // 702
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 704
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 705
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 706
	{
		float dist; // 138
		DotProduct(const Vector& a,
				const Vector& b);  // 138
	}
	DotProduct(const Vector& a,
			const Vector& b);  // 135
	Clip(const Vector& vDir,
		const Vector& vPos,
		const Vector& vNormal);  // 722
	{
		float dist; // 138
		DotProduct(const Vector& a,
				const Vector& b);  // 138
	}
	DotProduct(const Vector& a,
			const Vector& b);  // 135
	Clip(const Vector& vDir,
		const Vector& vPos,
		const Vector& vNormal);  // 723
	DotProduct(const Vector& a,
			const Vector& b);  // 135
	{
		float dist; // 138
		DotProduct(const Vector& a,
				const Vector& b);  // 138
	}
	Clip(const Vector& vDir,
		const Vector& vPos,
		const Vector& vNormal);  // 724
	DotProduct(const Vector& a,
			const Vector& b);  // 739
} /* size: 1288, variables: 12, inline expansions: 24 (1247 bytes) */

// <00DDF08C> vphysics2/physicstrace.cpp:751
// function calls: 7
void CTraceAABB::CTraceAABB(const Vector& hlmins, const Vector& hlmaxs)
{
	ITraceObject::ITraceObject(); // 751
	Vector::operator[](
			int i);  // 753
	Vector::operator[](
			int i);  // 754
	Vector::operator[](
			int i);  // 755
	Vector::operator[](
			int i);  // 756
	Vector::operator[](
			int i);  // 757
	Vector::operator[](
			int i);  // 758
} /* size: 0, inline expansions: 7 (0 bytes) */

// <00DDF059> vphysics2/physicstrace.cpp:751
void CTraceAABB::CTraceAABB(const Vector& hlmins, const Vector& hlmaxs)
{
} /* size: 0 */

// <00DDEF91> vphysics2/physicstrace.cpp:763
// variables: 3
// function call: 1
void CTraceAABB::SupportMap(const Vector& dir)
{
	int x; // 766
	int y; // 767
	int z; // 768
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 769
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <00DDEF1E> vphysics2/physicstrace.cpp:775
// function call: 1
void CTraceHull::CTraceHull(const CTransform& xForm, float flScale, const RnHull_t* pHull)
{
	ITraceObject::ITraceObject(); // 778
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00DDEEDE> vphysics2/physicstrace.cpp:775
void CTraceHull::CTraceHull(const CTransform& xForm, float flScale, const RnHull_t* pHull)
{
} /* size: 0 */

// <00DDCF95> vphysics2/physicstrace.cpp:785
// variables: 69
// function calls: 149
void CTraceHull::SupportMap(const Vector& vDirection)
{
	Vector vLocal; // 787
	int i_max; // 789
	float f_max; // 790
	Vector vOut; // 803
	{
		int i; // 792
		{
			float f; // 794
			RnHull_t::GetVertex(
					int nVertex);  // 794
			DotProduct(const Vector& a,
					const Vector& b);  // 794
		}
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 320
		RnHull_t::GetVertexCount(); // 792
	}
	{
		fltx4 retVal; // 186
		_mm_set_ps(const float  __Z,
				const float  __Y,
				const float  __X,
				const float  __W);  // 187
	}
	Set4Floats<>(float p0,
			float p1,
			float p2,
			float p3);  // 146
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 87
	{
		fltx4 retVal; // 1276
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1277
	}
	ShuffleSIMD<27>(const fltx4& a,
			const fltx4& b);  // 665
	ShuffleSIMD<27, (ESIMDLevel)20>(const fltx4& a,
					const fltx4& b); // 2928
	ReverseSIMD<>(const fltx4& v); // 421
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 1797
	NegSIMD<>(const fltx4& a); // 422
	QuaternionAligned::QuaternionAligned(
				fltx4 vec);  // 423
	QuaternionAligned::Conjugate(); // 448
	{
		fltx4 fl4Product; // 1725
		fltx4 fl4YXWZ; // 1727
		fltx4 fl4UUVV; // 1729
		fltx4 fl4VVUU; // 1731
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1725
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1728
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1730
		{
			fltx4 retVal; // 373
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 374
		}
		RotateLeft2<>(const fltx4& a); // 1732
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1733
	}
	Dot4SIMD<>(const fltx4& a,
			const fltx4& b);  // 405
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 406
	{
		fltx4 retVal; // 1851
		_mm_cmpeq_ps(__m128 __A,
				__m128 __B);  // 1852
	}
	CmpEqSIMD<>(const fltx4& a,
			const fltx4& b);  // 407
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 408
	QuaternionAligned::operator fltx4(); // 408
	{
		fltx4 retVal; // 826
		_mm_xor_ps(__m128 __A,
				__m128 __B);  // 827
	}
	XorSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	{
		fltx4 retVal; // 826
		_mm_xor_ps(__m128 __A,
				__m128 __B);  // 827
	}
	XorSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	MaskedAssign<>(const fltx4& ReplacementMask,
			const fltx4& a,
			const fltx4& b);  // 408
	QuaternionAligned::QuaternionAligned(
				fltx4 vec);  // 408
	QuaternionAligned::Normalized(); // 448
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3341
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3345
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 310
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 311
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 313
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 313
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 315
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 316
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 318
	QuaternionAligned::operator*(
			const VectorAligned& v);  // 448
	CTransform::RotateVectorByInverse(
				const VectorAligned& v0);  // 87
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 42
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 42
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 42
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 42
	VectorAligned::AsVector(); // 87
	CTransform::RotateVectorByInverse(
				const Vector& v0);  // 787
	CUtlMemory<Vector, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 321
	RnHull_t::GetVertex(
			int nVertex);  // 790
	DotProduct(const Vector& a,
			const Vector& b);  // 790
	CUtlMemory<Vector, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 321
	RnHull_t::GetVertex(
			int nVertex);  // 803
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 803
	VectorAligned::operator fltx4(); // 417
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3341
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3345
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 310
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 313
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 311
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 313
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 315
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 316
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 318
	QuaternionAligned::operator*(
			const VectorAligned& v);  // 419
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 417
	{
		fltx4 x000; // 1010
		fltx4 y000; // 1011
		fltx4 z000; // 1012
		fltx4 x0y0; // 1013
		_mm_load_ss(const float* __P); // 1010
		_mm_load_ss(const float* __P); // 1011
		_mm_load_ss(const float* __P); // 1012
		_mm_movelh_ps(__m128 __A,
				__m128 __B);  // 1013
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1014
	}
	LoadUnaligned3SIMD<>(const void* pSIMD); // 419
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 419
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 420
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 421
	Vector::Vector(); // 422
	_mm_store_ss(float* __P,
			__m128 __A);  // 468
	StoreUnaligned3SIMD<>(float* pSIMD,
				const fltx4& a);  // 423
	CTransform::TransformVector(
			const Vector& v0);  // 803
} /* size: 0, variables: 4, inline expansions: 75 (0 bytes) */

// <00DDB1E8> vphysics2/physicstrace.cpp:811
// variables: 69
// function calls: 140
void CTraceCloud::SupportMap(const Vector& vDirection)
{
	Vector vLocal; // 813
	int i_max; // 815
	float f_max; // 816
	Vector vOut; // 830
	{
		int i; // 818
		{
			float f; // 820
			DotProduct(const Vector& a,
					const Vector& b);  // 820
		}
	}
	{
		fltx4 retVal; // 186
		_mm_set_ps(const float  __Z,
				const float  __Y,
				const float  __X,
				const float  __W);  // 187
	}
	Set4Floats<>(float p0,
			float p1,
			float p2,
			float p3);  // 146
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 87
	{
		fltx4 retVal; // 1276
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1277
	}
	ShuffleSIMD<27>(const fltx4& a,
			const fltx4& b);  // 665
	ShuffleSIMD<27, (ESIMDLevel)20>(const fltx4& a,
					const fltx4& b); // 2928
	ReverseSIMD<>(const fltx4& v); // 421
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 1797
	NegSIMD<>(const fltx4& a); // 422
	QuaternionAligned::QuaternionAligned(
				fltx4 vec);  // 423
	QuaternionAligned::Conjugate(); // 448
	{
		fltx4 fl4Product; // 1725
		fltx4 fl4YXWZ; // 1727
		fltx4 fl4UUVV; // 1729
		fltx4 fl4VVUU; // 1731
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1725
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1728
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1730
		{
			fltx4 retVal; // 373
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 374
		}
		RotateLeft2<>(const fltx4& a); // 1732
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1733
	}
	Dot4SIMD<>(const fltx4& a,
			const fltx4& b);  // 405
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 406
	{
		fltx4 retVal; // 1851
		_mm_cmpeq_ps(__m128 __A,
				__m128 __B);  // 1852
	}
	CmpEqSIMD<>(const fltx4& a,
			const fltx4& b);  // 407
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 408
	QuaternionAligned::operator fltx4(); // 408
	{
		fltx4 retVal; // 826
		_mm_xor_ps(__m128 __A,
				__m128 __B);  // 827
	}
	XorSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	{
		fltx4 retVal; // 826
		_mm_xor_ps(__m128 __A,
				__m128 __B);  // 827
	}
	XorSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	MaskedAssign<>(const fltx4& ReplacementMask,
			const fltx4& a,
			const fltx4& b);  // 408
	QuaternionAligned::QuaternionAligned(
				fltx4 vec);  // 408
	QuaternionAligned::Normalized(); // 448
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3341
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3345
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 310
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 311
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 313
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 313
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 315
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 316
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 318
	QuaternionAligned::operator*(
			const VectorAligned& v);  // 448
	CTransform::RotateVectorByInverse(
				const VectorAligned& v0);  // 87
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 42
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 42
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 42
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 42
	VectorAligned::AsVector(); // 87
	CTransform::RotateVectorByInverse(
				const Vector& v0);  // 813
	DotProduct(const Vector& a,
			const Vector& b);  // 816
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 830
	VectorAligned::operator fltx4(); // 417
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3341
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3345
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 310
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 313
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 311
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 313
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 315
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 316
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 318
	QuaternionAligned::operator*(
			const VectorAligned& v);  // 419
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 417
	{
		fltx4 x000; // 1010
		fltx4 y000; // 1011
		fltx4 z000; // 1012
		fltx4 x0y0; // 1013
		_mm_load_ss(const float* __P); // 1010
		_mm_load_ss(const float* __P); // 1011
		_mm_load_ss(const float* __P); // 1012
		_mm_movelh_ps(__m128 __A,
				__m128 __B);  // 1013
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1014
	}
	LoadUnaligned3SIMD<>(const void* pSIMD); // 419
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 419
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 420
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 421
	Vector::Vector(); // 422
	_mm_store_ss(float* __P,
			__m128 __A);  // 468
	StoreUnaligned3SIMD<>(float* pSIMD,
				const fltx4& a);  // 423
	CTransform::TransformVector(
			const Vector& v0);  // 830
} /* size: 0, variables: 4, inline expansions: 69 (0 bytes) */

// <00DDB0CD> vphysics2/physicstrace.cpp:838
// variables: 4
// function calls: 2
void CTraceWorldspaceCloud::SupportMap(const Vector& vDirection)
{
	int i_max; // 840
	float f_max; // 841
	{
		int i; // 843
		{
			float f; // 845
			DotProduct(const Vector& a,
					const Vector& b);  // 845
		}
	}
	DotProduct(const Vector& a,
			const Vector& b);  // 841
} /* size: 214, variables: 2, inline expansions: 1 (91 bytes) */

// <00DDAD62> vphysics2/physicstrace.cpp:862
// variables: 11
// function calls: 13
void CTraceTriangle::CTraceTriangle(const Vector& vVertex1, const Vector& vVertex2, const Vector& vVertex3)
{
	ITraceObject::ITraceObject(); // 862
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 311
	{
		__v4sf __r0; // 2491
		__v4sf __r1; // 2491
		__v4sf __r2; // 2491
		__v4sf __r3; // 2491
		__v4sf __t0; // 2491
		__v4sf __t1; // 2491
		__v4sf __t2; // 2491
		__v4sf __t3; // 2491
	}
	TransposeSIMD<>(fltx4& x,
			fltx4& y,
			fltx4& z,
			fltx4& w);  // 318
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 309
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 310
	FourVectors::LoadAndSwizzle(
			const Vector& a,
			const Vector& b,
			const Vector& c,
			const Vector& d);  // 864
	Vector::operator=(
			const Vector& vOther);  // 865
	FourVectors::FourVectors(); // 862
	Vector::operator=(
			const Vector& vOther);  // 866
	Vector::operator=(
			const Vector& vOther);  // 867
} /* size: 0, inline expansions: 10 (0 bytes) */

// <00DDAD22> vphysics2/physicstrace.cpp:862
void CTraceTriangle::CTraceTriangle(const Vector& vVertex1, const Vector& vVertex2, const Vector& vVertex3)
{
} /* size: 0 */

// <00DDA845> vphysics2/physicstrace.cpp:870
// variables: 8
// function calls: 19
void CTraceTriangle::CTraceTriangle(const fltx4& vVertex1, const fltx4& vVertex2, const fltx4& vVertex3)
{
	ITraceObject::ITraceObject(); // 870
	{
		__v4sf __r0; // 2491
		__v4sf __r1; // 2491
		__v4sf __r2; // 2491
		__v4sf __r3; // 2491
		__v4sf __t0; // 2491
		__v4sf __t1; // 2491
		__v4sf __t2; // 2491
		__v4sf __t3; // 2491
	}
	TransposeSIMD<>(fltx4& x,
			fltx4& y,
			fltx4& z,
			fltx4& w);  // 353
	FourVectors::LoadAndSwizzle(
			FLTX4 a,
			FLTX4 b,
			FLTX4 c,
			FLTX4 d);  // 872
	FourVectors::FourVectors(); // 870
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 873
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 873
	Vector::operator=(
			const Vector& vOther);  // 873
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 874
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 874
	Vector::operator=(
			const Vector& vOther);  // 874
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 875
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 875
	Vector::operator=(
			const Vector& vOther);  // 875
} /* size: 0, inline expansions: 19 (0 bytes) */

// <00DDA805> vphysics2/physicstrace.cpp:870
void CTraceTriangle::CTraceTriangle(const fltx4& vVertex1, const fltx4& vVertex2, const fltx4& vVertex3)
{
} /* size: 0 */

// <00DD9E20> vphysics2/physicstrace.cpp:879
// variables: 19
// function calls: 37
void CTraceTriangle::SupportMap(const Vector& vDirection)
{
	fltx4 fl4Dot; // 884
	fltx4 rot; // 886
	fltx4 maxIndex; // 887
	int nMaxElement; // 892
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 605
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 605
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 605
	FourVectors::Init(
		const fltx4& fl4X,
		const fltx4& fl4Y,
		const fltx4& fl4Z);  // 71
	FourVectors::FourVectors(
			const fltx4& fl4X,
			const fltx4& fl4Y,
			const fltx4& fl4Z);  // 605
	ReplicateX4(const Vector& v); // 884
	DotProduct(const FourVectors& a,
			const FourVectors& b);  // 884
	{
		fltx4 retVal; // 373
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 374
	}
	RotateLeft2<>(const fltx4& a); // 886
	{
		fltx4 retVal; // 1981
		_mm_cmpgt_ps(__m128 __A,
				__m128 __B);  // 1982
	}
	CmpGtSIMD<>(const fltx4& a,
			const fltx4& b);  // 887
	{
		fltx4 retVal; // 826
		_mm_xor_ps(__m128 __A,
				__m128 __B);  // 827
	}
	XorSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	{
		fltx4 retVal; // 826
		_mm_xor_ps(__m128 __A,
				__m128 __B);  // 827
	}
	XorSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	MaskedAssign<>(const fltx4& ReplacementMask,
			const fltx4& a,
			const fltx4& b);  // 887
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 888
	{
		fltx4 retVal; // 341
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 342
	}
	RotateLeft<>(const fltx4& a); // 889
	{
		fltx4 retVal; // 341
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 342
	}
	RotateLeft<>(const fltx4& a); // 890
	{
		fltx4 retVal; // 1981
		_mm_cmpgt_ps(__m128 __A,
				__m128 __B);  // 1982
	}
	CmpGtSIMD<>(const fltx4& a,
			const fltx4& b);  // 890
	{
		fltx4 retVal; // 826
		_mm_xor_ps(__m128 __A,
				__m128 __B);  // 827
	}
	XorSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	{
		fltx4 retVal; // 826
		_mm_xor_ps(__m128 __A,
				__m128 __B);  // 827
	}
	XorSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	MaskedAssign<>(const fltx4& ReplacementMask,
			const fltx4& a,
			const fltx4& b);  // 890
	_mm_cvtss_si32(__m128 __A); // 892
} /* size: 0, variables: 4, inline expansions: 22 (0 bytes) */

// <00DD9CDA> vphysics2/physicstrace.cpp:907
// function calls: 4
void CTraceRay::CTraceRay(const Vector& vStart, const Vector& vDelta)
{
	Vector::Vector(); // 907
	Vector::Vector(); // 907
	Vector::Vector(); // 907
	Vector::Vector(); // 907
} /* size: 9, inline expansions: 4 (0 bytes) */

// <00DD9CA2> vphysics2/physicstrace.cpp:907
void CTraceRay::CTraceRay(const Vector& vStart, const Vector& vDelta)
{
} /* size: 0 */

// <00DD99E6> vphysics2/physicstrace.cpp:912
// variables: 3
// function calls: 9
void CTraceRay::Init(const Vector& vStart, const Vector& vDelta)
{
	const float  flMaxVectorComponent; // 922
	const char   __FUNCTION__; // 10778
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 935
	}
	Vector::operator=(
			const Vector& vOther);  // 914
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 915
	Vector::operator=(
			const Vector& vOther);  // 915
	Vector::operator=(
			const Vector& vOther);  // 916
	Vector::operator=(
			const Vector& vOther);  // 917
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 935
} /* size: 0, variables: 2, inline expansions: 9 (127 bytes) */

// <00DD97D3> vphysics2/physicstrace.cpp:938
// function calls: 8
void CTraceRay::Reset(float flFraction)
{
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 948
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 948
	Vector::operator=(
			const Vector& vOther);  // 948
} /* size: 98, inline expansions: 8 (113 bytes) */

// <00DE5474> vphysics2/physicstrace.cpp:951
// function calls: 7
void CTraceRay::ShiftByEpsilon(float flEps)
{
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 955
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 955
	Vector::operator=(
			const Vector& vOther);  // 955
} /* size: 0, inline expansions: 7 (0 bytes) */

// <00DD97A8> vphysics2/physicstrace.cpp:951
void CTraceRay::ShiftByEpsilon(float flEps)
{
} /* size: 0 */

// <00DD9631> vphysics2/physicstrace.cpp:1000
// function calls: 5
void CTraceSolver::CTraceSolver(ITraceObject* sweepobject, CTraceRay* ray, ITraceObject* obstacle, const Vector& axis, float flSeparationRadius)
{
	Vector::Vector(); // 1000
	Vector::Vector(); // 1000
	Vector::Vector(); // 1000
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 1005
	Vector::operator=(
			const Vector& vOther);  // 1010
} /* size: 94, inline expansions: 5 (32 bytes) */

// <00DD95D2> vphysics2/physicstrace.cpp:1000
void CTraceSolver::CTraceSolver(ITraceObject* sweepobject, CTraceRay* ray, ITraceObject* obstacle, const Vector& axis, float flSeparationRadius)
{
} /* size: 0 */

// <00DD8E5C> vphysics2/physicstrace.cpp:1015
// variables: 8
// function calls: 28
void CTraceSolver::CalculateSeparatingPlane(const simplex_t& simplex)
{
	{
		Vector vEdge0; // 1019
		Vector vEdge1; // 1020
		Vector::operator=(
				const Vector& vOther);  // 243
		CTraceSolver::SetHitNormal(
				const Vector& vNormal);  // 1021
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 1019
		Vector::Normalized(); // 1021
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 1020
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 1021
	}
	{
		Vector t0; // 1026
		Vector t1; // 1027
		Vector edge; // 1028
		Vector tangent; // 1029
		Vector vHitNormal; // 1030
		float flDot; // 1031
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 1028
		Vector::Normalized(); // 1030
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 1029
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 1030
		DotProduct(const Vector& a,
				const Vector& b);  // 1031
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1431
		Vector::operator-(); // 1034
		Vector::operator=(
				const Vector& vOther);  // 1034
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1431
		Vector::operator-(); // 1038
		Vector::operator=(
				const Vector& vOther);  // 1038
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 1044
} /* size: 574, inline expansions: 2 (28 bytes) */

// <00DCE133> vphysics2/physicstrace.cpp:1049
void CastCapsuleRay(CShapeCastResult &, const Vector &, const Vector &, const Vector *, float)
{
} /* size: 0 */

// <00DD8DE2> vphysics2/physicstrace.cpp:1050
// variables: 2
void IntersectRayWithCapsule(CShapeCastResult& result, const Vector& vRayStart, const Vector& vRayDelta, const Vector& v0, const Vector& v1, float flRadius)
{
	Vector vc; // 1052
	float flHit; // 1054
} /* size: 0, variables: 2 */

// <00DD8411> vphysics2/physicstrace.cpp:1059
// variables: 8
// function calls: 40
void CTraceSolver::BackupRequiredDistanceFromVertex(const Vector& v0, float flCurrentDist, float flDistGoal)
{
	Vector vPos; // 1062
	float flProj; // 1063
	Vector vEnd; // 1064
	Vector vDelta; // 1065
	float t0; // 1066
	float t1; // 1067
	{
		Vector vPoint; // 1071
		float flDist; // 1073
		Vector::Normalized(); // 1072
		Max<float>(const float& val1,
				const float& val2);  // 1070
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 1071
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 1071
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 1072
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 1073
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1431
		Vector::operator-(); // 1072
		Vector::operator=(
				const Vector& vOther);  // 243
		CTraceSolver::SetHitNormal(
				const Vector& vNormal);  // 1072
	}
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1062
	DotProduct(const Vector& a,
			const Vector& b);  // 1063
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 1064
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 1064
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 1065
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 1077
	Vector::operator=(
			const Vector& vOther);  // 243
	CTraceSolver::SetHitNormal(
			const Vector& vNormal);  // 1077
} /* size: 535, variables: 6, inline expansions: 18 (241 bytes) */

// <00DD7534> vphysics2/physicstrace.cpp:1082
// variables: 19
// function calls: 57
void CTraceSolver::BackupRequiredDistanceFromEdge(const simplex_t& simplex, float flCurrentDist, float flDistGoal, bool bIsFirstIteration)
{
	Vector vDir; // 1084
	Vector v0; // 1085
	Vector v1; // 1086
	Vector vEdge; // 1087
	float flEdgeLength; // 1088
	float flOutsideDistance; // 1089
	Vector vPos; // 1090
	Vector vOut; // 1091
	Vector vRayDelta; // 1093
	CShapeCastResult result; // 1094
	float flCast; // 1104
	float flOutDist; // 1105
	Vector vUnitEdge; // 1106
	float flProj; // 1107
	float flProj0; // 1108
	float flProj1; // 1109
	Vector vEdgeNormal; // 1126
	float flDot; // 1130
	float flEdgePlane; // 1141
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1055
	IntersectRayWithCapsule(CShapeCastResult& result,
				const Vector& vRayStart,
				const Vector& vRayDelta,
				const Vector& v0,
				const Vector& v1,
				float flRadius);  // 1095
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 1087
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1091
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 1088
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1090
	Vector::operator=(
			const Vector& vOther);  // 80
	Vector::Vector(); // 77
	Vector::Vector(); // 77
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 79
	Vector::operator=(
			const Vector& vOther);  // 79
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 80
	CShapeCastResult::CShapeCastResult(); // 1094
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 1093
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 1099
	Vector::operator=(
			const Vector& vOther);  // 243
	CTraceSolver::SetHitNormal(
			const Vector& vNormal);  // 1099
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1106
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 1103
	Vector::operator=(
			const Vector& vOther);  // 243
	CTraceSolver::SetHitNormal(
			const Vector& vNormal);  // 1103
	DotProduct(const Vector& a,
			const Vector& b);  // 1107
	DotProduct(const Vector& a,
			const Vector& b);  // 1108
	DotProduct(const Vector& a,
			const Vector& b);  // 1109
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 1118
	Vector::Normalized(); // 1126
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 1126
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 1126
	DotProduct(const Vector& a,
			const Vector& b);  // 1130
	Vector::operator=(
			const Vector& vOther);  // 236
	Vector::operator=(
			const Vector& vOther);  // 237
	swap<Vector>(Vector& __a,
			Vector& __b);  // 19
	V_swap<Vector>(Vector& x,
			Vector& y);  // 1139
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 1138
	Vector::operator=(
			const Vector& vOther);  // 1138
	DotProduct(const Vector& a,
			const Vector& b);  // 1141
} /* size: 1686, variables: 19, inline expansions: 57 (1530 bytes) */

// <00DD68AA> vphysics2/physicstrace.cpp:1145
// variables: 17
// function calls: 45
void CTraceSolver::IterateFaceBackup(const Vector& v1, const Vector& v0, float flCurrentDistance, float flDistGoal, const Vector& vStartNormal, float flPlaneDist)
{
	const float  flCoplanarEpsilon; // 1147
	bool bFoundNewPoint; // 1148
	Vector vFoundPoint; // 1149
	Vector vIterateNormal; // 1150
	float flIteratePlane; // 1151
	Vector vStartEdge; // 1152
	{
		int i; // 1155
		{
			Vector vNextPoint; // 1157
			float flDistToIteratePlane; // 1158
			Vector vIterateEdge; // 1175
			DotProduct(const Vector& a,
					const Vector& b);  // 136
			CTraceRay::SupportMap(
					const Vector& vDir);  // 217
			Vector::operator+=(
					const Vector& v);  // 218
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1431
			Vector::operator-(); // 219
			Vector::operator-=(
					const Vector& v);  // 219
			CTraceSolver::Support(
				const Vector& vDir);  // 1157
			DotProduct(const Vector& a,
					const Vector& b);  // 1158
			Vector::operator==(
					const Vector& src);  // 1162
			Vector::operator==(
					const Vector& src);  // 1162
			DotProduct(const Vector& a,
					const Vector& b);  // 1165
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 1175
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 1176
			Vector::Normalized(); // 1176
			DotProduct(const Vector& a,
					const Vector& b);  // 1177
			Vector::operator=(
					const Vector& vOther);  // 1176
			DotProduct(const Vector& a,
					const Vector& b);  // 1179
			Vector::operator*=(
					float fl);  // 1181
			Vector::operator=(
					const Vector& vOther);  // 1168
		}
	}
	{
		simplex_t iteratedSimplex; // 1188
		Vector vOut; // 1194
		simplex_t::simplex_t(); // 1188
		Vector::operator=(
				const Vector& vOther);  // 1190
		Vector::operator=(
				const Vector& vOther);  // 1191
		Vector::operator=(
				const Vector& vOther);  // 1192
		{
			Vector AB; // 49
			Vector AC; // 50
			Vector ABC; // 51
			float d; // 52
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 49
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 50
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 51
			DotProduct(const Vector& a,
					const Vector& b);  // 52
			DotProduct(const Vector& a,
					const Vector& b);  // 53
			{
				Vector B; // 56
				Vector::operator=(
						const Vector& vOther);  // 57
				Vector::operator=(
						const Vector& vOther);  // 58
			}
		}
		simplex_t::CheckTriangleWindingOrder(
						const Vector& vRef);  // 1195
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1194
	}
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 1152
} /* size: 1578, variables: 6, inline expansions: 3 (180 bytes) */

// <00DD5500> vphysics2/physicstrace.cpp:1202
// variables: 23
// function calls: 75
void CTraceSolver::IterateEdgeBackup(const Vector& v0, float flCurrentDistance, float flDistGoal, const Vector& vStartNormal, float flPlaneDist)
{
	const float  flCoplanarEpsilon; // 1204
	Vector v1; // 1206
	float flDistToIteratePlane; // 1207
	simplex_t iteratedSimplex; // 1213
	Vector vExit; // 1221
	Vector vEdge0; // 1222
	Vector vNormal0; // 1223
	Vector vEdgeNormal; // 1224
	Vector vFace; // 1231
	float flFaceProj; // 1232
	float flEdgePlane; // 1233
	Vector vOut; // 1264
	{
		int i; // 1241
		{
			Vector vEdge1; // 1243
			Vector vFaceNormal; // 1244
			Vector vNext; // 1252
			float flFacePlane; // 1253
			float flNext; // 1254
			DotProduct(const Vector& a,
					const Vector& b);  // 136
			CTraceRay::SupportMap(
					const Vector& vDir);  // 217
			Vector::operator+=(
					const Vector& v);  // 218
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1431
			Vector::operator-(); // 219
			Vector::operator-=(
					const Vector& v);  // 219
			CTraceSolver::Support(
				const Vector& vDir);  // 1252
			DotProduct(const Vector& a,
					const Vector& b);  // 1253
			DotProduct(const Vector& a,
					const Vector& b);  // 1254
			DotProduct(const Vector& a,
					const Vector& b);  // 1257
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 1243
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 1244
			Vector::Normalized(); // 1244
			DotProduct(const Vector& a,
					const Vector& b);  // 1245
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1431
			Vector::operator-(); // 1247
			Vector::operator=(
					const Vector& vOther);  // 1247
		}
	}
	DotProduct(const Vector& a,
			const Vector& b);  // 136
	CTraceRay::SupportMap(
			const Vector& vDir);  // 217
	Vector::operator+=(
			const Vector& v);  // 218
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 219
	Vector::operator-=(
			const Vector& v);  // 219
	CTraceSolver::Support(
		const Vector& vDir);  // 1206
	DotProduct(const Vector& a,
			const Vector& b);  // 1207
	simplex_t::simplex_t(); // 1213
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 1222
	Vector::operator=(
			const Vector& vOther);  // 1216
	Vector::operator=(
			const Vector& vOther);  // 1215
	Vector::Normalized(); // 1223
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1221
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 1223
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 1223
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 1224
	Vector::Normalized(); // 1224
	DotProduct(const Vector& a,
			const Vector& b);  // 1226
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 1228
	Vector::operator=(
			const Vector& vOther);  // 1228
	DotProduct(const Vector& a,
			const Vector& b);  // 136
	CTraceRay::SupportMap(
			const Vector& vDir);  // 217
	Vector::operator+=(
			const Vector& v);  // 218
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 219
	Vector::operator-=(
			const Vector& v);  // 219
	CTraceSolver::Support(
		const Vector& vDir);  // 1231
	DotProduct(const Vector& a,
			const Vector& b);  // 1233
	DotProduct(const Vector& a,
			const Vector& b);  // 1232
	{
		Vector AB; // 49
		Vector AC; // 50
		Vector ABC; // 51
		float d; // 52
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 50
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 51
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 49
		DotProduct(const Vector& a,
				const Vector& b);  // 52
		DotProduct(const Vector& a,
				const Vector& b);  // 53
		{
			Vector B; // 56
			Vector::operator=(
					const Vector& vOther);  // 57
			Vector::operator=(
					const Vector& vOther);  // 58
		}
	}
	simplex_t::CheckTriangleWindingOrder(
					const Vector& vRef);  // 1265
	Vector::operator=(
			const Vector& vOther);  // 1263
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1264
} /* size: 3022, variables: 12, inline expansions: 44 (2427 bytes) */

// <00DD4A3A> vphysics2/physicstrace.cpp:1271
// variables: 11
// function calls: 37
void CTraceSolver::TestEdgeAndIterate(const Vector& v0, const Vector& v1, const Vector& vOutside, float flCurrentDist, float flDistGoal, const Vector& vOpposite, const Vector& vEdge, const Vector& vEdgeNormal, float flEdgePlane)
{
	CShapeCastResult result; // 1273
	const char   __FUNCTION__; // 11101
	{
		float flRayLen; // 1277
		float flOutDist; // 1279
		Vector vAxis; // 1282
		float flImpact; // 1283
		float flDist0; // 1284
		float flDist1; // 1285
		Vector vSearchPlane; // 1287
		float flSearchPlaneDist; // 1288
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
		}
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 1277
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1431
		Vector::operator-(); // 1278
		Vector::operator=(
				const Vector& vOther);  // 243
		CTraceSolver::SetHitNormal(
				const Vector& vNormal);  // 1278
		Vector::Normalized(); // 1282
		DotProduct(const Vector& a,
				const Vector& b);  // 1283
		DotProduct(const Vector& a,
				const Vector& b);  // 1284
		DotProduct(const Vector& a,
				const Vector& b);  // 1285
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 1299
		Vector::Normalized(); // 1299
		DotProduct(const Vector& a,
				const Vector& b);  // 1300
		Vector::operator=(
				const Vector& vOther);  // 1299
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 1292
		Vector::Normalized(); // 1292
		DotProduct(const Vector& a,
				const Vector& b);  // 1293
		Vector::operator=(
				const Vector& vOther);  // 1292
	}
	Vector::Vector(); // 77
	Vector::Vector(); // 77
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 79
	Vector::operator=(
			const Vector& vOther);  // 79
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 80
	Vector::operator=(
			const Vector& vOther);  // 80
	CShapeCastResult::CShapeCastResult(); // 1273
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 1274
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1055
	IntersectRayWithCapsule(CShapeCastResult& result,
				const Vector& vRayStart,
				const Vector& vRayDelta,
				const Vector& v0,
				const Vector& v1,
				float flRadius);  // 1274
} /* size: 0, variables: 2, inline expansions: 11 (270 bytes) */

// <00DD3E0B> vphysics2/physicstrace.cpp:1314
// variables: 23
// function calls: 39
void CTraceSolver::BackupRequiredDistanceFromFace(const simplex_t& simplex, float flCurrentDist, float flDistGoal, bool bIsFirstIteration)
{
	Vector vDir; // 1316
	Vector vEdge; // 1317
	Vector vPos; // 1322
	Vector vFaceNormal; // 1325
	float flPlaneConstant; // 1327
	float flDot; // 1328
	float flDistToMoveToPlane; // 1332
	bool bWriteTriangleNormalWhenHittingFace; // 1335
	float flOutsideDistance; // 1337
	float flRayLen; // 1382
	Vector vOut; // 1383
	Vector vOutPlane; // 1384
	Vector vEdgeNormal; // 1386
	float flEdgePlane; // 1387
	int nEdgeRegion; // 1388
	float flMin; // 1389
	{
		float flMinDist; // 1373
		{
			int i; // 1374
			{
				float flProj; // 1376
				DotProduct(const Vector& a,
						const Vector& b);  // 1376
			}
		}
	}
	{
		int i; // 1391
		{
			float flEnd; // 1398
			{
				float flStart; // 1406
				float t; // 1407
				DotProduct(const Vector& a,
						const Vector& b);  // 1406
			}
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 1393
			Vector::Normalized(); // 1393
			Vector::operator=(
					const Vector& vOther);  // 1393
			DotProduct(const Vector& a,
					const Vector& b);  // 1398
			DotProduct(const Vector& a,
					const Vector& b);  // 1397
		}
	}
	Vector::Normalized(); // 1325
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 1318
	Vector::operator=(
			const Vector& vOther);  // 1318
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 1319
	Vector::operator=(
			const Vector& vOther);  // 1319
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1322
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 1320
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 1325
	Vector::operator=(
			const Vector& vOther);  // 1320
	DotProduct(const Vector& a,
			const Vector& b);  // 1328
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 1355
	Vector::operator=(
			const Vector& vOther);  // 243
	CTraceSolver::SetHitNormal(
			const Vector& vNormal);  // 1355
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 1439
	DotProduct(const Vector& a,
			const Vector& b);  // 1327
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1383
	Vector::operator=(
			const Vector& vOther);  // 243
	CTraceSolver::SetHitNormal(
			const Vector& vNormal);  // 1439
} /* size: 1994, variables: 16, inline expansions: 31 (991 bytes) */

// <00DD3BF6> vphysics2/physicstrace.cpp:1521
// variables: 4
// function calls: 3
void CTraceSolver::ComputeSeparation(const simplex_t& simplex, float flCurrentDist, bool bForceBackup)
{
	float flSeparationDistGoal; // 1524
	{
		const float  flCoplanarEpsilon; // 1529
		float flDot; // 1531
		DotProduct(const Vector& a,
				const Vector& b);  // 1531
		Min<float>(const float& val1,
				const float& val2);  // 1536
	}
	{
		float flDistAllowed; // 1573
	}
	Vector::operator=(
			const Vector& vOther);  // 1566
} /* size: 458, variables: 1, inline expansions: 1 (38 bytes) */

// <00DD2628> vphysics2/physicstrace.cpp:1591
// variables: 23
// function calls: 82
void CTraceSolver::SolveMinDistanceSimplex(simplex_t& simplex, Vector dir, float flDistanceEstimate, const Vector& vLastSupportVert)
{
	float flNecessarySeparation; // 1595
	const char   __FUNCTION__; // 11216
	{
		Vector vert; // 1598
		bool bCanImproveSimplex; // 1600
		{
			Vector vTangentDir; // 1605
			DotProduct(const Vector& a,
					const Vector& b);  // 136
			CTraceRay::SupportMap(
					const Vector& vDir);  // 217
			Vector::operator+=(
					const Vector& v);  // 218
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1431
			Vector::operator-(); // 219
			Vector::operator-=(
					const Vector& v);  // 219
			CTraceSolver::Support(
				const Vector& vDir);  // 1606
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 1605
			{
				int i; // 37
				Vector::Vector(); // 194
				Vector::LengthSqr(); // 198
				Vector::DistToSqr(
						const Vector& vOther);  // 39
			}
			simplex_t::HasVert(
				const Vector& v);  // 1607
			Vector::operator=(
					const Vector& vOther);  // 1606
		}
		{
			Vector vTangentDir; // 1611
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 1611
			DotProduct(const Vector& a,
					const Vector& b);  // 136
			CTraceRay::SupportMap(
					const Vector& vDir);  // 217
			Vector::operator+=(
					const Vector& v);  // 218
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1431
			Vector::operator-(); // 219
			Vector::operator-=(
					const Vector& v);  // 219
			CTraceSolver::Support(
				const Vector& vDir);  // 1612
			{
				int i; // 37
				Vector::Vector(); // 194
				Vector::LengthSqr(); // 198
				Vector::DistToSqr(
						const Vector& vOther);  // 39
			}
			simplex_t::HasVert(
				const Vector& v);  // 1613
			Vector::operator=(
					const Vector& vOther);  // 1612
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1431
			Vector::operator-(); // 1616
			DotProduct(const Vector& a,
					const Vector& b);  // 136
			CTraceRay::SupportMap(
					const Vector& vDir);  // 217
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1431
			Vector::operator-(); // 219
			Vector::operator+=(
					const Vector& v);  // 218
			Vector::operator-=(
					const Vector& v);  // 219
			CTraceSolver::Support(
				const Vector& vDir);  // 1616
			{
				int i; // 37
				Vector::Vector(); // 194
				Vector::LengthSqr(); // 198
				Vector::DistToSqr(
						const Vector& vOther);  // 39
			}
			simplex_t::HasVert(
				const Vector& v);  // 1617
			Vector::operator=(
					const Vector& vOther);  // 1616
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1623
		}
		{
			int j; // 1627
			{
				Vector lastVert; // 1629
				float flUpdatedDistanceEstimate; // 1637
				float flLastVertDistanceAlongDir; // 1640
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 1431
				Vector::operator-(); // 1633
				Vector::Normalized(); // 1633
				DotProduct(const Vector& a,
						const Vector& b);  // 136
				CTraceRay::SupportMap(
						const Vector& vDir);  // 217
				Vector::operator+=(
						const Vector& v);  // 218
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 1431
				Vector::operator-(); // 219
				Vector::operator-=(
						const Vector& v);  // 219
				CTraceSolver::Support(
					const Vector& vDir);  // 1635
				Vector::operator=(
						const Vector& vOther);  // 1633
				DotProduct(const Vector& a,
						const Vector& b);  // 1637
				Vector::operator=(
						const Vector& vOther);  // 1635
				DotProduct(const Vector& a,
						const Vector& b);  // 1640
				{
					int i; // 37
					Vector::Vector(); // 194
					Vector::LengthSqr(); // 198
					Vector::DistToSqr(
							const Vector& vOther);  // 39
				}
				simplex_t::HasVert(
					const Vector& v);  // 1643
			}
		}
		{
			int i; // 37
			Vector::Vector(); // 194
			Vector::LengthSqr(); // 198
			Vector::DistToSqr(
					const Vector& vOther);  // 39
		}
		simplex_t::HasVert(
			const Vector& v);  // 1600
		{
			int i; // 37
			Vector::Vector(); // 194
			Vector::LengthSqr(); // 198
			Vector::DistToSqr(
					const Vector& vOther);  // 39
		}
		simplex_t::HasVert(
			const Vector& v);  // 1623
		{
			int i; // 37
			Vector::Vector(); // 194
			Vector::LengthSqr(); // 198
			Vector::DistToSqr(
					const Vector& vOther);  // 39
		}
		simplex_t::HasVert(
			const Vector& v);  // 1624
	}
	{
		bool bSeparated; // 1657
		{
			float flDist; // 1660
			bool bSolved; // 1661
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1675
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1676
		}
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 1675
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 619
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 619
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 619
		Vector::IsValid(); // 1676
	}
	Vector::operator=(
			const Vector& vOther);  // 1692
} /* size: 0, variables: 2, inline expansions: 1 (36 bytes) */

// <00DD1711> vphysics2/physicstrace.cpp:1697
// variables: 20
// function calls: 54
void CTraceSolver::SweepSingleConvex()
{
	simplex_t simplex; // 1699
	Vector vert; // 1700
	float testLen; // 1709
	Vector dir; // 1710
	const char   __FUNCTION__; // 11074
	{
		int i; // 1713
		{
			bool bSimplexContainsOrigin; // 1786
			{
				const float  flEps; // 1724
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 955
				Vector::Vector(); // 1436
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::operator+(
						const Vector& v);  // 955
				Vector::operator=(
						const Vector& vOther);  // 955
				CTraceRay::ShiftByEpsilon(
						float flEps);  // 1725
			}
			{
				float flNecessarySeparation; // 1741
				bool bIsSweep; // 1742
			}
			{
				Vector vEdge0; // 1759
				Vector vEdge1; // 1760
				Vector vTriangleNormal; // 1762
				float flDist; // 1763
				{
					bool bSolved; // 1767
				}
				Vector::Vector(); // 1443
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::operator-(
						const Vector& v);  // 1759
				Vector::Normalized(); // 1762
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 1760
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 1508
				CrossProduct(const Vector& a,
						const Vector& b);  // 1762
				DotProduct(const Vector& a,
						const Vector& b);  // 1763
			}
			{
				float flDist; // 1797
				bool bSolved; // 1798
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1816
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1817
			}
			DotProduct(const Vector& a,
					const Vector& b);  // 136
			CTraceRay::SupportMap(
					const Vector& vDir);  // 217
			Vector::operator+=(
					const Vector& v);  // 218
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1431
			Vector::operator-(); // 219
			Vector::operator-=(
					const Vector& v);  // 219
			CTraceSolver::Support(
				const Vector& vDir);  // 1716
			Vector::LengthSqr(); // 1719
			DotProduct(const Vector& a,
					const Vector& b);  // 1721
			DotProduct(const Vector& a,
					const Vector& b);  // 1717
			Vector::operator=(
					const Vector& vOther);  // 1716
			{
				int i; // 37
				Vector::Vector(); // 194
				Vector::LengthSqr(); // 198
				Vector::DistToSqr(
						const Vector& vOther);  // 39
			}
			simplex_t::HasVert(
				const Vector& v);  // 1755
			Vector::LengthSqr(); // 1788
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 1816
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 619
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 619
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 619
			Vector::IsValid(); // 1817
			Vector::Normalized(); // 1820
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1431
			Vector::operator-(); // 1820
			Vector::operator=(
					const Vector& vOther);  // 1820
		}
	}
	Vector::LengthSqr(); // 1704
	simplex_t::simplex_t(); // 1699
	Vector::Vector(); // 1700
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 1710
	Vector::Normalized(); // 1710
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 1706
} /* size: 0, variables: 5, inline expansions: 7 (194 bytes) */

// <00DD0BDB> vphysics2/physicstrace.cpp:1834
// variables: 14
// function calls: 41
void CTraceSolver::SolveMeshIntersection(simplex_t& simplex, float* pflDist)
{
	Vector v; // 1850
	Vector vert; // 1858
	{
		int i; // 1860
		{
			float dist; // 1867
			{
				Vector BC; // 1870
				Vector BD; // 1871
				Vector BCD; // 1874
				float flDist; // 1879
				Vector::Vector(); // 1443
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::operator-(
						const Vector& v);  // 1870
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 1871
				CrossProduct(const Vector& a,
						const Vector& b,
						Vector& result);  // 1875
				Vector::Vector(); // 1874
				DotProduct(const Vector& a,
						const Vector& b);  // 135
				{
					float dist; // 138
					DotProduct(const Vector& a,
							const Vector& b);  // 138
				}
				Clip(const Vector& vDir,
					const Vector& vPos,
					const Vector& vNormal);  // 1879
				{
					Vector AB; // 49
					Vector AC; // 50
					Vector ABC; // 51
					float d; // 52
					Vector::Vector(); // 1443
					VectorSubtract(const Vector& a,
							const Vector& b,
							Vector& c);  // 1444
					Vector::operator-(
							const Vector& v);  // 49
					VectorSubtract(const Vector& a,
							const Vector& b,
							Vector& c);  // 1444
					Vector::Vector(); // 1443
					Vector::operator-(
							const Vector& v);  // 50
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 1508
					CrossProduct(const Vector& a,
							const Vector& b);  // 51
					DotProduct(const Vector& a,
							const Vector& b);  // 53
					{
						Vector B; // 56
						Vector::operator=(
								const Vector& vOther);  // 57
						Vector::operator=(
								const Vector& vOther);  // 58
					}
					DotProduct(const Vector& a,
							const Vector& b);  // 52
				}
				simplex_t::CheckTriangleWindingOrder(
								const Vector& vRef);  // 1881
			}
			DotProduct(const Vector& a,
					const Vector& b);  // 136
			CTraceRay::SupportMap(
					const Vector& vDir);  // 217
			Vector::operator+=(
					const Vector& v);  // 218
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1431
			Vector::operator-(); // 219
			Vector::operator-=(
					const Vector& v);  // 219
			CTraceSolver::Support(
				const Vector& vDir);  // 1863
			DotProduct(const Vector& a,
					const Vector& b);  // 1867
			DotProduct(const Vector& a,
					const Vector& b);  // 1868
			Vector::operator=(
					const Vector& vOther);  // 1888
			Vector::operator=(
					const Vector& vOther);  // 1890
			Vector::Normalized(); // 1862
			Vector::operator=(
					const Vector& vOther);  // 1862
		}
	}
	CTraceSolver::SolveMeshIntersection2D(
				simplex_t& simplex);  // 1899
	CTraceSolver::SolveMeshIntersection2D(
				simplex_t& simplex);  // 1843
	CTraceSolver::SolveMeshIntersection2D(
				simplex_t& simplex);  // 1899
	CTraceSolver::SolveMeshIntersection2D(
				simplex_t& simplex);  // 1854
} /* size: 1244, variables: 2, inline expansions: 4 (78 bytes) */

// <00DE572B> vphysics2/physicstrace.cpp:1899
// variable: 1
// function call: 1
void CTraceSolver::SolveMeshIntersection2D(simplex_t& simplex)
{
	float dist; // 1909
	CTraceSolver::SolveMeshIntersection2D(
				simplex_t& simplex);  // 1899
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <00DD0BA3> vphysics2/physicstrace.cpp:1899
// variable: 1
void CTraceSolver::SolveMeshIntersection2D(simplex_t& simplex)
{
	float dist; // 1909
} /* size: 0, variables: 1 */

// <00DCFA94> vphysics2/physicstrace.cpp:1913
// variables: 18
// function calls: 66
void CTraceSolver::SolveSweep()
{
	const char   __FUNCTION__; // 10915
	{
		const Vector  vDir; // 1924
		const Vector  vSweepInitialSupp0; // 1927
		const Vector  vSweepInitialSupp1; // 1928
		const Vector  vObstacleSupp0; // 1929
		const Vector  vObstacleSupp1; // 1930
		const float  flSweepRadius; // 1933
		float t0; // 1936
		float t1; // 1939
		Vector v0; // 1953
		Vector v1; // 1954
		Vector vDelta; // 1955
		CTraceRay clippedRay; // 1956
		CTraceSolver clippedSolver; // 1957
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1948
		}
		{
			float flTmpFraction; // 1961
			float flFraction; // 1962
			CTraceSolver::GetHitNormal(); // 1965
			Vector::operator=(
					const Vector& vOther);  // 1965
			Vector::LengthSqr(); // 1974
		}
		Vector::Normalized(); // 1924
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1431
		Vector::operator-(); // 1927
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 1927
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 1928
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1431
		Vector::operator-(); // 1929
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 1936
		DotProduct(const Vector& a,
				const Vector& b);  // 1936
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 1939
		DotProduct(const Vector& a,
				const Vector& b);  // 1939
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 1949
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 1950
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 1953
		Vector::Vector(); // 907
		Vector::Vector(); // 907
		Vector::Vector(); // 907
		Vector::Vector(); // 907
		CTraceRay::CTraceRay(
				const Vector& vStart,
				const Vector& vDelta);  // 1956
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 1954
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 1953
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 1954
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 1955
		Vector::Vector(); // 1000
		Vector::Vector(); // 1000
		Vector::Vector(); // 1000
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 1005
		Vector::operator=(
				const Vector& vOther);  // 1010
		CTraceSolver::CTraceSolver(
				ITraceObject* sweepobject,
				CTraceRay* ray,
				ITraceObject* obstacle,
				const Vector& axis,
				float flSeparationRadius);  // 1957
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1990
	}
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 1990
	CTraceSolver::IsStartSolid(); // 1991
	Vector::LengthSqr(); // 1991
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 1993
	Vector::operator=(
			const Vector& vOther);  // 1993
	Vector::LengthSqr(); // 1994
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 1996
} /* size: 0, variables: 1, inline expansions: 14 (172 bytes) */

// <00DCF7F8> vphysics2/physicstrace.cpp:2005
// function calls: 11
void CTraceSolver::SolveSweep(CShapeCastResult& result)
{
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2009
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2009
	Vector::operator=(
			const Vector& vOther);  // 2009
	CTraceSolver::GetHitNormal(); // 2011
	Vector::operator=(
			const Vector& vOther);  // 2011
	CTraceSolver::IsStartSolid(); // 2012
} /* size: 149, inline expansions: 11 (153 bytes) */

