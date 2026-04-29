
//
// meshutils/uvparamlscm.cpp
//
//	referenced by: libengine2.so
//
//	functions: 45
//	structs: 6
//

// <05CD9C20> meshutils/uvparamlscm.cpp:22
void VertexMatrixPosition_t::VertexMatrixPosition_t()
{
} /* size: 0 */

// <05CD9C04> meshutils/uvparamlscm.cpp:22
inline void VertexMatrixPosition_t::VertexMatrixPosition_t()
{
} /* size: 0 */

// <05CC1B0E> meshutils/uvparamlscm.cpp:22
// member function: 1
// member variables: 4
// struct size: 16
struct VertexMatrixPosition_t {
	MatrixType_t m_nMatrixTypeU; /* 0 4 */
	MatrixType_t m_nMatrixTypeV; /* 4 4 */
	int m_nPosU; /* 8 4 */
	int m_nPosV; /* 12 4 */
	void VertexMatrixPosition_t(VertexMatrixPosition_t* );
};

// <05D006B0> meshutils/uvparamlscm.cpp:42
// variables: 3
void ComputeUVBounds(const int nNumVertices, const Vector2D* pVertexUVs, Vector2D* pOutMin, Vector2D* pOutMax)
{
	Vector2D vMin; // 44
	Vector2D vMax; // 45
	{
		int i; // 46
	}
} /* size: 0, variables: 2 */

// <05CFFF39> meshutils/uvparamlscm.cpp:59
// variables: 6
// function calls: 31
void RescaleUVsToRectangle(const int nNumVertices, Vector2D* pVertexUVs, const Vector2D& vRequestedMin, const Vector2D& vRequestedMax, TileUV_t nTileUVMode, float nScale)
{
	Vector2D vCurrentMin; // 62
	Vector2D vCurrentMax; // 62
	Vector2D vScale; // 67
	const Vector2D  vOffset; // 85
	{
		int i; // 88
		Vector2D::Vector2D(); // 708
		Vector2DMultiply(const Vector2D& a,
				const Vector2D& b,
				Vector2D& c);  // 709
		Vector2D::operator*(
				const Vector2D& v);  // 90
		Vector2D::Vector2D(); // 687
		Vector2DAdd(const Vector2D& a,
				const Vector2D& b,
				Vector2D& c);  // 688
		Vector2D::operator+(
				const Vector2D& v);  // 90
		Vector2D::operator=(
				const Vector2D& vOther);  // 90
	}
	Vector2D::Vector2D(); // 62
	Vector2D::Vector2D(); // 62
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 44
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 45
	{
		int i; // 46
		Vector2D::Vector2D(
			vec_t X,
			vec_t Y);  // 666
		Vector2D::Min(
			const Vector2D& vOther);  // 48
		Vector2D::Vector2D(
			vec_t X,
			vec_t Y);  // 672
		Vector2D::Max(
			const Vector2D& vOther);  // 49
	}
	ComputeUVBounds(const int  nNumVertices,
			const Vector2D* pVertexUVs,
			Vector2D* pOutMin,
			Vector2D* pOutMax);  // 63
	Vector2D::Vector2D(); // 694
	Vector2DSubtract(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 695
	Vector2D::operator-(
			const Vector2D& v);  // 67
	Vector2DSubtract(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 695
	Vector2D::Vector2D(); // 694
	Vector2D::operator-(
			const Vector2D& v);  // 67
	Vector2D::Vector2D(); // 722
	Vector2DDivide(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 723
	Vector2D::operator/(
			const Vector2D& v);  // 67
	Vector2D::Vector2D(); // 708
	Vector2DMultiply(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 709
	Vector2D::operator*(
			const Vector2D& v);  // 85
	Vector2D::Vector2D(); // 694
	Vector2DSubtract(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 695
	Vector2D::operator-(
			const Vector2D& v);  // 85
} /* size: 0, variables: 4, inline expansions: 20 (0 bytes) */

// <05CFFC74> meshutils/uvparamlscm.cpp:97
// variables: 7
// function calls: 7
void FlipUVs(const int nNumVertices, Vector2D* pVertexUVs, bool bFlipU, bool bFlipV)
{
	Vector2D vMin; // 103
	Vector2D vMax; // 104
	const Vector2D  vSum; // 111
	{
		int i; // 105
		Vector2D::Vector2D(
			vec_t X,
			vec_t Y);  // 666
		Vector2D::Min(
			const Vector2D& vOther);  // 107
		Vector2D::Vector2D(
			vec_t X,
			vec_t Y);  // 672
		Vector2D::Max(
			const Vector2D& vOther);  // 108
	}
	{
		int i; // 115
	}
	{
		int i; // 123
	}
	{
		int i; // 130
	}
	Vector2D::Vector2D(); // 687
	Vector2DAdd(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 688
	Vector2D::operator+(
			const Vector2D& v);  // 111
} /* size: 0, variables: 3, inline expansions: 3 (0 bytes) */

// <05CFFBC1> meshutils/uvparamlscm.cpp:140
// variable: 1
// function call: 1
void ScaleUVs(const int nNumVertices, Vector2D* pVertexUVs, const Vector2D& vScale)
{
	{
		int i; // 142
		Vector2D::operator*=(
				const Vector2D& v);  // 144
	}
} /* size: 0 */

// <05CFF6E0> meshutils/uvparamlscm.cpp:151
// variables: 6
// function calls: 18
void RebaseUVs(const int nNumVertices, Vector2D* pVertexUVs)
{
	Vector2D vMin; // 153
	Vector2D vMax; // 153
	const Vector2D  vCenter; // 160
	Vector2D vOffset; // 163
	{
		int i; // 169
		Vector2D::operator-=(
				const Vector2D& v);  // 171
	}
	Vector2D::Vector2D(); // 153
	Vector2D::Vector2D(); // 153
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 44
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 45
	{
		int i; // 46
		Vector2D::Vector2D(
			vec_t X,
			vec_t Y);  // 666
		Vector2D::Min(
			const Vector2D& vOther);  // 48
		Vector2D::Vector2D(
			vec_t X,
			vec_t Y);  // 672
		Vector2D::Max(
			const Vector2D& vOther);  // 49
	}
	ComputeUVBounds(const int  nNumVertices,
			const Vector2D* pVertexUVs,
			Vector2D* pOutMin,
			Vector2D* pOutMax);  // 154
	Vector2D::Vector2D(); // 687
	Vector2DAdd(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 688
	Vector2D::operator+(
			const Vector2D& v);  // 160
	Vector2D::Vector2D(); // 701
	Vector2DMultiply(const Vector2D& a,
			vec_t b,
			Vector2D& c);  // 702
	Vector2D::operator*(
			float fl);  // 160
	Vector2D::Vector2D(); // 163
	Vector2D::operator!=(
			const Vector2D& src);  // 167
} /* size: 0, variables: 4, inline expansions: 13 (0 bytes) */

// <05CFEE80> meshutils/uvparamlscm.cpp:179
// variables: 8
// function calls: 36
void AlignUVsToEdge(int nNumVertices, Vector2D* pVertexUVs, const int nVertexIndexA, const int nVertexIndexB, AlignEdgeUV_t nAlignUorV)
{
	const char   __FUNCTION__; // 40042
	Vector2D vUVA; // 188
	Vector2D vUVB; // 189
	Vector2D vAxisU; // 191
	Vector2D vAxisV; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 184
	}
	{
		int i; // 207
		{
			const Vector2D  vToVertex; // 209
			Vector2D::Vector2D(); // 694
			Vector2DSubtract(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 695
			Vector2D::operator-(
					const Vector2D& v);  // 209
			DotProduct2D(const Vector2D& a,
					const Vector2D& b);  // 484
			Vector2D::Dot(
				const Vector2D& vOther);  // 210
			DotProduct2D(const Vector2D& a,
					const Vector2D& b);  // 484
			Vector2D::Dot(
				const Vector2D& vOther);  // 211
		}
	}
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 188
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 189
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 191
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 192
	Vector2DSubtract(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 695
	Vector2D::Vector2D(); // 694
	Vector2D::operator-(
			const Vector2D& v);  // 196
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 498
	Vector2DLength(const Vector2D& v); // 554
	Vector2D::Length(); // 584
	Vector2D::operator/=(
			float fl);  // 587
	Vector2DNormalize(Vector2D& v); // 515
	Vector2D::NormalizeInPlace(); // 197
	Vector2D::Vector2D(); // 694
	Vector2D::operator-(
			const Vector2D& v);  // 202
	_mm_sqrt_ss(__m128 __A); // 21
	FastSqrt(float x); // 498
	Vector2DLength(const Vector2D& v); // 554
	Vector2D::Length(); // 584
	Vector2D::operator/=(
			float fl);  // 587
	Vector2DNormalize(Vector2D& v); // 515
	Vector2D::NormalizeInPlace(); // 203
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 204
	Vector2D::operator=(
			const Vector2D& vOther);  // 204
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 198
	Vector2D::operator=(
			const Vector2D& vOther);  // 198
} /* size: 0, variables: 5, inline expansions: 29 (547 bytes) */

// <05CFEA00> meshutils/uvparamlscm.cpp:218
// variables: 9
// function calls: 14
void GenerateUVsByProjection(const int nNumVertices, const Vector* pVertexPostions, Vector2D* pOutVertexUVs)
{
	const int   projectonTable; // 220
	Vector vMin; // 229
	Vector vMax; // 230
	Vector vExtents; // 238
	const int  nProjectionComponent; // 239
	const int  nU; // 240
	const int  nV; // 241
	{
		int i; // 232
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1414
		Vector::Min(
			const Vector& vOther);  // 234
		Vector::operator=(
				const Vector& vOther);  // 234
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1421
		Vector::Max(
			const Vector& vOther);  // 235
		Vector::operator=(
				const Vector& vOther);  // 235
	}
	{
		int i; // 243
		Vector::operator[](
				int i);  // 246
		Vector::operator[](
				int i);  // 245
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 229
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 230
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 238
	Vector::SmallestComponent(); // 239
} /* size: 356, variables: 7, inline expansions: 6 (184 bytes) */

// <05CFE789> meshutils/uvparamlscm.cpp:253
// variables: 4
// function calls: 8
void FindVerticesToLock(const int nNumVertices, const Vector2D* pVertexUVs, CUtlVector<VertexLockFlags_t, CUtlMemory<VertexLockFlags_t, int> >* pVertexLockFlags)
{
	int nMinVertex; // 258
	int nMaxVertex; // 259
	{
		int i; // 262
	}
	{
		int i; // 1554
		CUtlVectorBase<VertexLockFlags_t, CUtlMemory<VertexLockFlags_t, int> >::Count(); // 1554
		CUtlMemory<VertexLockFlags_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VertexLockFlags_t, CUtlMemory<VertexLockFlags_t, int> >::Element(
			int i);  // 1556
	}
	CUtlVectorBase<VertexLockFlags_t, CUtlMemory<VertexLockFlags_t, int> >::FillWithValue(
			const VertexLockFlags_t& src);  // 256
	CUtlMemory<VertexLockFlags_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<VertexLockFlags_t, CUtlMemory<VertexLockFlags_t, int> >::Element(
		int i);  // 275
	CUtlMemory<VertexLockFlags_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<VertexLockFlags_t, CUtlMemory<VertexLockFlags_t, int> >::Element(
		int i);  // 274
} /* size: 213, variables: 2, inline expansions: 5 (69 bytes) */

// <05CFE159> meshutils/uvparamlscm.cpp:281
// variables: 14
// function calls: 20
int FindMostOrthogonalTriangleVertex(const Vector* pVertices, const bool* pTriangleEdgesAreMeshEdges)
{
	const float  flSquareAngleThreshold; // 283
	int nNumInteriorEdges; // 285
	int nLastInteriorEdgeIndex; // 286
	float flLowestDot; // 320
	int nBestVertex; // 321
	{
		int i; // 287
	}
	{
		const int  nVertex; // 304
		const Vector  vA; // 305
		const Vector  vB; // 306
		const float  flDot; // 307
		Vector::Normalized(); // 305
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 305
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 306
		Vector::Normalized(); // 306
		DotProduct(const Vector& a,
				const Vector& b);  // 1167
		Vector::Dot(
			const Vector& vOther);  // 307
	}
	{
		int i; // 323
		{
			const Vector  vA; // 325
			const Vector  vB; // 326
			const float  flDot; // 327
			Vector::Normalized(); // 325
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 325
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 326
			Vector::Normalized(); // 326
			DotProduct(const Vector& a,
					const Vector& b);  // 1167
			Vector::Dot(
				const Vector& vOther);  // 327
		}
	}
} /* size: 816, variables: 5 */

// <05CFD877> meshutils/uvparamlscm.cpp:343
// variables: 6
// function calls: 38
void ComputeTriangleProjection(bool bSquare, const Vector& v0, const Vector& v1, const Vector& v2, Vector2D* pOutP0, Vector2D* pOutP1, Vector2D* pOutP2)
{
	const Vector  v01; // 345
	const Vector  v02; // 346
	const Vector  vAxisU; // 348
	const Vector  vUp; // 349
	const Vector  vAxisV; // 350
	{
		float flLength; // 359
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 359
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 359
		Vector2D::Vector2D(
			vec_t X,
			vec_t Y);  // 361
		Vector2D::operator=(
				const Vector2D& vOther);  // 361
		Vector2D::Vector2D(
			vec_t X,
			vec_t Y);  // 362
		Vector2D::operator=(
				const Vector2D& vOther);  // 362
	}
	Vector::Normalized(); // 348
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 345
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 346
	Vector::Normalized(); // 350
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 349
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 350
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 352
	Vector2D::operator=(
			const Vector2D& vOther);  // 352
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 367
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 366
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 366
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 367
} /* size: 947, variables: 5, inline expansions: 22 (1258 bytes) */

// <05CFD1C1> meshutils/uvparamlscm.cpp:374
// variables: 9
// function calls: 25
int BuildVertexMatrixPositionTable(const int nNumVertices, const VertexLockFlags_t* pVertexLockFlags, CUtlVector<VertexMatrixPosition_t, CUtlMemory<VertexMatrixPosition_t, int> >* pOutVertexMatrixPositionTable)
{
	int nCoefficientsPosition; // 376
	int nConstantsPosition; // 377
	const char   __FUNCTION__; // 28814
	{
		int i; // 382
		{
			VertexMatrixPosition_t& vertexMatrixPosition; // 384
			CUtlMemory<VertexMatrixPosition_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<VertexMatrixPosition_t, CUtlMemory<VertexMatrixPosition_t, int> >::Element(
				int i);  // 384
			operator&(VertexLockFlags_t a,
					VertexLockFlags_t b);  // 386
		}
	}
	{
		int i; // 401
		{
			VertexMatrixPosition_t& vertexMatrixPosition; // 403
			CUtlMemory<VertexMatrixPosition_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<VertexMatrixPosition_t, CUtlMemory<VertexMatrixPosition_t, int> >::Element(
				int i);  // 403
			operator&(VertexLockFlags_t a,
					VertexLockFlags_t b);  // 405
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 420
	}
	CUtlVectorBase<VertexMatrixPosition_t, CUtlMemory<VertexMatrixPosition_t, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<VertexMatrixPosition_t, int>::NumAllocated(); // 782
	CUtlMemory<VertexMatrixPosition_t, int>::Base(); // 112
	CUtlVectorBase<VertexMatrixPosition_t, CUtlMemory<VertexMatrixPosition_t, int> >::Base(); // 368
	CUtlVectorBase<VertexMatrixPosition_t, CUtlMemory<VertexMatrixPosition_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<VertexMatrixPosition_t, int>::IsGrowable(); // 823
	CUtlMemory<VertexMatrixPosition_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<VertexMatrixPosition_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<VertexMatrixPosition_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<VertexMatrixPosition_t, CUtlMemory<VertexMatrixPosition_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<VertexMatrixPosition_t, CUtlMemory<VertexMatrixPosition_t, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<VertexMatrixPosition_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VertexMatrixPosition_t, CUtlMemory<VertexMatrixPosition_t, int> >::Element(
			int i);  // 1453
		VertexMatrixPosition_t::VertexMatrixPosition_t(); // 1479
		Construct<VertexMatrixPosition_t>(VertexMatrixPosition_t* pMemory); // 1453
	}
	CUtlVectorBase<VertexMatrixPosition_t, CUtlMemory<VertexMatrixPosition_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<VertexMatrixPosition_t, CUtlMemory<VertexMatrixPosition_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<VertexMatrixPosition_t, CUtlMemory<VertexMatrixPosition_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<VertexMatrixPosition_t, CUtlMemory<VertexMatrixPosition_t, int> >::SetCount(
		int count);  // 379
} /* size: 0, variables: 3, inline expansions: 15 (2259 bytes) */

// <05CFD14C> meshutils/uvparamlscm.cpp:428
// variable: 1
void VertexPositionInMatrix(int nVertexIndex, const VertexMatrixPosition_t* pVertexMatrixPositions, int* pOutPosU, MatrixType_t* pOutMatrixU, int* pOutPosV, MatrixType_t* pOutMatrixV)
{
	const VertexMatrixPosition_t& vertexMatrixPosition; // 430
} /* size: 0, variables: 1 */

// <05CFD104> meshutils/uvparamlscm.cpp:440
// variable: 1
float ComputeTriangleDeterminant(const Vector2D& vA, const Vector2D& vB, const Vector2D& vC)
{
	float dt; // 442
} /* size: 0, variables: 1 */

// <05CFCA9E> meshutils/uvparamlscm.cpp:452
// variables: 13
// function calls: 14
void AddTriangleToEquationMatrices(int nTriangleIndex, int nNumTotalTriangles, int nNumTotalVertices, const VertexMatrixPosition_t* pVertexMatrixPositions, uint32* pTriangleVertexIndices, const Vector2D* pVerts, CSparseMatrix* pOutCoefficients, CVariableMatrix* pOutConstants)
{
	float dt; // 455
	const char   __FUNCTION__; // 26907
	float sqrt_dt; // 463
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 458
	}
	{
		int i; // 469
		{
			const float  wi; // 471
			const float  wr; // 472
			const float  wi_t; // 473
			const float  wr_t; // 474
			int nPosU; // 476
			int nPosV; // 476
			MatrixType_t nMatrixU; // 477
			MatrixType_t nMatrixV; // 477
			VertexPositionInMatrix(int nVertexIndex,
						const VertexMatrixPosition_t* pVertexMatrixPositions,
						int* pOutPosU,
						MatrixType_t* pOutMatrixU,
						int* pOutPosV,
						MatrixType_t* pOutMatrixV);  // 478
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
					int i);  // 31
			CVariableMatrix::SetElement(
					int nRow,
					int nCol,
					float flValue);  // 482
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
					int i);  // 31
			CVariableMatrix::SetElement(
					int nRow,
					int nCol,
					float flValue);  // 483
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
					int i);  // 31
			CVariableMatrix::SetElement(
					int nRow,
					int nCol,
					float flValue);  // 493
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
					int i);  // 31
			CVariableMatrix::SetElement(
					int nRow,
					int nCol,
					float flValue);  // 494
		}
	}
	ComputeTriangleDeterminant(const Vector2D& vA,
					const Vector2D& vB,
					const Vector2D& vC);  // 455
} /* size: 0, variables: 3, inline expansions: 1 (85 bytes) */

// <05CF8012> meshutils/uvparamlscm.cpp:507
// variables: 54
// function calls: 305
void SetupEquationsLSCM(const bool bSquare, const int nNumTriangles, const uint32* pTriangleVertexIndices, const bool* pTriangleEdgesAreMeshEdges, const int nNumVertices, const Vector* pVertexPositions, const Vector2D* pInitialVertexUVs, const int nNumLockedVariables, const VertexMatrixPosition_t* pVertexMatrixPositions, CSparseMatrix* pOutTriangleEquations, CVariableMatrix* pOutIdealSolutions, CVariableMatrix* pOutVertexUVs)
{
	CSparseMatrix mCoefficents; // 521
	CVariableMatrix mConstants; // 524
	Vector triangleVertexPostions; // 534
	uint32 triangleVertexIndices; // 535
	Vector2D triangleProjection; // 536
	CVariableMatrix vLockedVariables; // 581
	CVariableMatrix vSolutions; // 602
	const char   __FUNCTION__; // 25012
	CSparseMatrix mCoefficentsTransposed; // 607
	{
		int i; // 526
		{
			int iLocked; // 528
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
					int i);  // 31
			CVariableMatrix::SetElement(
					int nRow,
					int nCol,
					float flValue);  // 530
		}
	}
	{
		int iTriangle; // 537
		{
			int nOriginVertex; // 548
			bool bSquareTriangle; // 549
			Vector::operator=(
					const Vector& vOther);  // 568
			Vector::operator=(
					const Vector& vOther);  // 569
			Vector::operator=(
					const Vector& vOther);  // 570
			Vector::operator=(
					const Vector& vOther);  // 542
			Vector::operator=(
					const Vector& vOther);  // 543
			Vector::operator=(
					const Vector& vOther);  // 544
		}
	}
	{
		int iVertex; // 583
		{
			int nPosU; // 585
			int nPosV; // 585
			MatrixType_t nMatrixU; // 586
			MatrixType_t nMatrixV; // 586
			VertexPositionInMatrix(int nVertexIndex,
						const VertexMatrixPosition_t* pVertexMatrixPositions,
						int* pOutPosU,
						MatrixType_t* pOutMatrixU,
						int* pOutPosV,
						MatrixType_t* pOutMatrixV);  // 587
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
					int i);  // 31
			CVariableMatrix::SetElement(
					int nRow,
					int nCol,
					float flValue);  // 592
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
					int i);  // 31
			CVariableMatrix::SetElement(
					int nRow,
					int nCol,
					float flValue);  // 597
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 605
	}
	{
		CVariableMatrix mTempCoefficents; // 622
		CUtlMemory<float, int>::CUtlMemory(
				float* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		CUtlMemory<float, int>::EnsureCapacity(
				int num);  // 199
		CUtlMemoryFixedGrowable_Base<float, int>::CUtlMemoryFixedGrowable_Base(
						float* pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		AlignedByteArrayExplicit_t<128, float, 4>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<128, float>::AlignedByteArray_t(); // 228
		AlignedByteArrayExplicit_t<128, float, 4>::Base(); // 231
		CUtlMemoryFixedGrowable<float, 128, int>::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<float, 128>::CUtlVectorFixedGrowable(
					int growSize);  // 40
		CVariableMatrix::CVariableMatrix(); // 622
		CSparseMatrix::Height(); // 124
		CVariableMatrix::SetDimensions(
				int nNumRows,
				int nNumCols);  // 126
		{
			int iRow; // 127
			{
				const int  nNumValuesInRow; // 129
				int nDataIdx; // 130
				int nDstCol; // 131
				CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::operator[](
						int i);  // 129
				{
					int iValue; // 132
					{
						float flValue; // 134
						const int  nSrcCol; // 135
						CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::operator[](
								int i);  // 595
						operator[](const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, i this,
								int i);  // 134
						CUtlMemory<float, int>::operator[](
								int i);  // 588
						CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
								int i);  // 31
						CVariableMatrix::SetElement(
								int nRow,
								int nCol,
								float flValue);  // 73
						AppendElement<CVariableMatrix>(CVariableMatrix& matrix,
										int nRow,
										int nCol,
										float flValue);  // 140
						CUtlMemory<float, int>::operator[](
								int i);  // 588
						CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
								int i);  // 31
						CVariableMatrix::SetElement(
								int nRow,
								int nCol,
								float flValue);  // 73
						AppendElement<CVariableMatrix>(CVariableMatrix& matrix,
										int nRow,
										int nCol,
										float flValue);  // 144
					}
				}
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
						int i);  // 31
				CVariableMatrix::SetElement(
						int nRow,
						int nCol,
						float flValue);  // 73
				AppendElement<CVariableMatrix>(CVariableMatrix& matrix,
								int nRow,
								int nCol,
								float flValue);  // 150
			}
		}
		CopyMatrix<CVariableMatrix>(const CSparseMatrix& matrixIn,
						CVariableMatrix* pMatrixOut);  // 623
		CSparseMatrix::Width(); // 94
		CVariableMatrix::Height(); // 94
		{
		}
		CVariableMatrix::Width(); // 95
		CSparseMatrix::Height(); // 95
		{
			int i; // 96
			CSparseMatrix::Height(); // 96
			{
				int j; // 98
				CVariableMatrix::Width(); // 98
				{
					int nCnt; // 101
					int nDataIdx; // 102
					float flDot; // 103
					CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::operator[](
							int i);  // 101
					{
						int nIdx; // 104
						{
							float flAValue; // 106
							int nCol; // 107
							CUtlMemory<float, int>::operator[](
									int i);  // 595
							CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
									int i);  // 30
							CVariableMatrix::Element(
								int nRow,
								int nCol);  // 108
							CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::operator[](
									int i);  // 595
							operator[](const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, i this,
									int i);  // 106
						}
					}
					AppendElement(CSparseMatrix& matrix,
							int nRow,
							int nCol,
							float flValue);  // 110
				}
			}
		}
		FinishedAppending(CSparseMatrix& matrix); // 113
		MatrixMultiply<CVariableMatrix, CSparseMatrix>(const CSparseMatrix& matA,
								const CVariableMatrix& matB,
								CSparseMatrix* pMatrixOut);  // 624
		CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::RemoveAll(); // 1798
		CUtlMemory<float, int>::IsExternallyAllocated(); // 577
		CUtlMemory<float, int>::ConvertToExternalMemory(
					float* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<float, int>::Purge_FixedGrowable(
					float* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<float, int>::Purge_FixedGrowable(
					float* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		AlignedByteArrayExplicit_t<128, float, 4>::Base(); // 237
		CUtlMemoryFixedGrowable<float, 128, int>::Purge(
			int numElements);  // 1799
		CUtlMemory<float, int>::Base(); // 112
		CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::Base(); // 368
		CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::Purge(); // 560
		CUtlMemory<float, int>::Purge(); // 903
		CUtlMemory<float, int>::Purge(); // 510
		ValidateAlignment<float>(void); // 508
		CUtlMemory<float, int>::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<float, int>::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<float, 128, int>::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<float, 128>::~CUtlVectorFixedGrowable(); // 16
		CVariableMatrix::~CVariableMatrix(); // 625
	}
	{
		int iVertex; // 632
		{
			int nPosU; // 634
			int nPosV; // 634
			MatrixType_t nMatrixU; // 635
			MatrixType_t nMatrixV; // 635
			VertexPositionInMatrix(int nVertexIndex,
						const VertexMatrixPosition_t* pVertexMatrixPositions,
						int* pOutPosU,
						MatrixType_t* pOutMatrixU,
						int* pOutPosV,
						MatrixType_t* pOutMatrixV);  // 636
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
					int i);  // 31
			CVariableMatrix::SetElement(
					int nRow,
					int nCol,
					float flValue);  // 640
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
					int i);  // 31
			CVariableMatrix::SetElement(
					int nRow,
					int nCol,
					float flValue);  // 645
		}
	}
	CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::ResetDbgInfo(); // 530
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::CUtlVector(); // 16
	CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> > this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> >  this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> >::CUtlVector(); // 16
	CSparseMatrix::CSparseMatrix(); // 521
	CUtlMemory<float, int>::CUtlMemory(
			float* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<float, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<float, int>::CUtlMemoryFixedGrowable_Base(
					float* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<128, float, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<128, float>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<128, float, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<float, 128, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<float, 128>::CUtlVectorFixedGrowable(
				int growSize);  // 40
	CVariableMatrix::CVariableMatrix(); // 524
	CVariableMatrix::SetDimensions(
			int nNumRows,
			int nNumCols);  // 525
	CUtlMemory<float, int>::CUtlMemory(
			float* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<float, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<float, int>::CUtlMemoryFixedGrowable_Base(
					float* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<128, float, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<128, float>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<128, float, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<float, 128, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<float, 128>::CUtlVectorFixedGrowable(
				int growSize);  // 40
	CVariableMatrix::CVariableMatrix(); // 581
	CVariableMatrix::SetDimensions(
			int nNumRows,
			int nNumCols);  // 582
	CUtlMemory<float, int>::CUtlMemory(
			float* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<float, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<float, int>::CUtlMemoryFixedGrowable_Base(
					float* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<128, float, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<128, float>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<128, float, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<float, 128, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<float, 128>::CUtlVectorFixedGrowable(
				int growSize);  // 40
	CVariableMatrix::CVariableMatrix(); // 602
	CVariableMatrix::Width(); // 305
	CVariableMatrix::Height(); // 305
	{
	}
	CVariableMatrix::Width(); // 306
	CVariableMatrix::SetDimensions(
			int nNumRows,
			int nNumCols);  // 306
	CVariableMatrix::Height(); // 306
	{
		int i; // 307
		CVariableMatrix::Height(); // 307
		{
			int j; // 309
			CVariableMatrix::Width(); // 309
			CVariableMatrix::Height(); // 237
			MatrixColumnAccessor<const CVariableMatrix>::Height(); // 290
			CVariableMatrix::Width(); // 208
			MatrixRowAccessor<const CVariableMatrix>::Height(); // 290
			{
			}
			{
				int i; // 292
				CVariableMatrix::Width(); // 208
				MatrixRowAccessor<const CVariableMatrix>::Height(); // 292
				CUtlMemory<float, int>::operator[](
						int i);  // 595
				CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
						int i);  // 30
				CVariableMatrix::Element(
					int nRow,
					int nCol);  // 198
				MatrixRowAccessor<const CVariableMatrix>::Element(
					int nRow,
					int nCol);  // 294
				CUtlMemory<float, int>::operator[](
						int i);  // 595
				CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
						int i);  // 30
				CVariableMatrix::Element(
					int nRow,
					int nCol);  // 227
				MatrixColumnAccessor<const CVariableMatrix>::Element(
					int nRow,
					int nColumn);  // 294
			}
			InnerProduct<MatrixMath::MatrixRowAccessor<const CVariableMatrix>, MatrixMath::MatrixColumnAccessor<const CVariableMatrix> >(const MatrixRowAccessor<const CVariableMatrix>& vecA,
																const MatrixColumnAccessor<const CVariableMatrix>& vecB);  // 311
			MatrixColumnAccessor<const CVariableMatrix>::MatrixColumnAccessor(
						const CVariableMatrix& matrix,
						int nColumn);  // 275
			MatrixColumn<const CVariableMatrix>(const CVariableMatrix& matrix,
								int nColumn);  // 311
			MatrixRowAccessor<const CVariableMatrix>::MatrixRowAccessor(
						const CVariableMatrix& matrix,
						int nRow);  // 281
			MatrixRow<const CVariableMatrix>(const CVariableMatrix& matrix,
							int nRow);  // 311
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
					int i);  // 31
			CVariableMatrix::SetElement(
					int nRow,
					int nCol,
					float flValue);  // 311
		}
	}
	MatrixMultiply<CVariableMatrix, CVariableMatrix, CVariableMatrix>(const CVariableMatrix& matA,
										const CVariableMatrix& matB,
										CVariableMatrix* pMatrixOut);  // 603
	{
		int i; // 57
		CVariableMatrix::Height(); // 57
		{
			int j; // 59
			CVariableMatrix::Width(); // 59
			CUtlMemory<float, int>::operator[](
					int i);  // 595
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
					int i);  // 30
			CVariableMatrix::Element(
				int nRow,
				int nCol);  // 61
			CVariableMatrix::SetElement(
					int nRow,
					int nCol,
					float flValue);  // 61
		}
	}
	ScaleMatrix<CVariableMatrix>(CVariableMatrix& matrix,
					float flScaleValue);  // 604
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::CUtlVector(); // 16
	CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> > this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> >  this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> >::CUtlVector(); // 16
	CSparseMatrix::CSparseMatrix(); // 607
	CSparseMatrix::Width(); // 94
	CVariableMatrix::Height(); // 94
	{
	}
	CSparseMatrix::Height(); // 95
	CVariableMatrix::SetDimensions(
			int nNumRows,
			int nNumCols);  // 95
	CVariableMatrix::Width(); // 95
	{
		int i; // 96
		CSparseMatrix::Height(); // 96
		{
			int j; // 98
			CVariableMatrix::Width(); // 98
			{
				int nCnt; // 101
				int nDataIdx; // 102
				float flDot; // 103
				CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::operator[](
						int i);  // 101
				{
					int nIdx; // 104
					{
						float flAValue; // 106
						int nCol; // 107
						CUtlMemory<float, int>::operator[](
								int i);  // 595
						CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
								int i);  // 30
						CVariableMatrix::Element(
							int nRow,
							int nCol);  // 108
						CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::operator[](
								int i);  // 595
						operator[](const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, i this,
								int i);  // 106
					}
				}
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
						int i);  // 31
				CVariableMatrix::SetElement(
						int nRow,
						int nCol,
						float flValue);  // 73
				AppendElement<CVariableMatrix>(CVariableMatrix& matrix,
								int nRow,
								int nCol,
								float flValue);  // 110
			}
		}
	}
	MatrixMultiply<CVariableMatrix, CVariableMatrix>(const CSparseMatrix& matA,
							const CVariableMatrix& matB,
							CVariableMatrix* pMatrixOut);  // 628
	CVariableMatrix::SetDimensions(
			int nNumRows,
			int nNumCols);  // 631
	RemoveAll(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> > this); // 1798
	CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::Purge(); // 903
	CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> > this); // 560
	ValidateAlignment<CSparseMatrix::NonZeroValueDescriptor_t>(void); // 508
	CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::Purge(); // 510
	CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> > this); // 410
	CUtlVector<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> >::~CUtlVector(); // 16
	CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::Purge(); // 903
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::Purge(); // 1799
	CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::Purge(); // 560
	ValidateAlignment<CSparseMatrix::RowDescriptor_t>(void); // 508
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::Purge(); // 510
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::~CUtlVector(); // 16
	CSparseMatrix::~CSparseMatrix(); // 648
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<128, float, 4>::Base(); // 237
	CUtlMemory<float, int>::IsExternallyAllocated(); // 577
	CUtlMemory<float, int>::ConvertToExternalMemory(
				float* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<float, int>::Purge_FixedGrowable(
				float* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<float, int>::Purge_FixedGrowable(
				float* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<float, 128, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::Base(); // 368
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<float, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<float, 128, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<float, 128>::~CUtlVectorFixedGrowable(); // 16
	CVariableMatrix::~CVariableMatrix(); // 648
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<128, float, 4>::Base(); // 237
	CUtlMemory<float, int>::IsExternallyAllocated(); // 577
	CUtlMemory<float, int>::ConvertToExternalMemory(
				float* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<float, int>::Purge_FixedGrowable(
				float* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<float, int>::Purge_FixedGrowable(
				float* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<float, 128, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::Base(); // 368
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<float, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<float, 128, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<float, 128>::~CUtlVectorFixedGrowable(); // 16
	CVariableMatrix::~CVariableMatrix(); // 648
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<128, float, 4>::Base(); // 237
	CUtlMemory<float, int>::IsExternallyAllocated(); // 577
	CUtlMemory<float, int>::ConvertToExternalMemory(
				float* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<float, int>::Purge_FixedGrowable(
				float* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<float, int>::Purge_FixedGrowable(
				float* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<float, 128, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::Base(); // 368
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<float, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<float, 128, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<float, 128>::~CUtlVectorFixedGrowable(); // 16
	CVariableMatrix::~CVariableMatrix(); // 648
	RemoveAll(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> > this); // 1798
	CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::Purge(); // 903
	CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> > this); // 560
	ValidateAlignment<CSparseMatrix::NonZeroValueDescriptor_t>(void); // 508
	CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::Purge(); // 510
	CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> > this); // 410
	CUtlVector<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> >::~CUtlVector(); // 16
	CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::Purge(); // 903
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::Purge(); // 1799
	CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::Purge(); // 560
	ValidateAlignment<CSparseMatrix::RowDescriptor_t>(void); // 508
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::Purge(); // 510
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::~CUtlVector(); // 16
	CSparseMatrix::~CSparseMatrix(); // 648
} /* size: 0, variables: 9, inline expansions: 173 (5560 bytes) */

// <05CF7D06> meshutils/uvparamlscm.cpp:653
// variables: 7
// function calls: 8
void UnpackResults(const CVariableMatrix& vVertexUVs, const VertexMatrixPosition_t* pVertexMatrixPositions, Vector2D* pInOutVertexUVs)
{
	const int  nNumVectorEntries; // 655
	const int  nNumVertices; // 656
	{
		int iVertex; // 658
		{
			int nPosU; // 660
			int nPosV; // 660
			MatrixType_t nMatrixU; // 661
			MatrixType_t nMatrixV; // 661
			VertexPositionInMatrix(int nVertexIndex,
						const VertexMatrixPosition_t* pVertexMatrixPositions,
						int* pOutPosU,
						MatrixType_t* pOutMatrixU,
						int* pOutPosV,
						MatrixType_t* pOutMatrixV);  // 662
			CUtlMemory<float, int>::operator[](
					int i);  // 595
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
					int i);  // 30
			CVariableMatrix::Element(
				int nRow,
				int nCol);  // 666
			CUtlMemory<float, int>::operator[](
					int i);  // 595
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
					int i);  // 30
			CVariableMatrix::Element(
				int nRow,
				int nCol);  // 671
		}
	}
	CVariableMatrix::Height(); // 655
} /* size: 131, variables: 2, inline expansions: 1 (6 bytes) */

// <05CF6505> meshutils/uvparamlscm.cpp:679
// variables: 5
// function calls: 108
void ApplyLeastSquaredConformalMappingToUVs(bool bSquare, const int nNumTriangles, const uint32* pTriangleVertexIndices, int nNumVertices, const Vector* pVertexPostions, const VertexLockFlags_t* pVertexLockFlags, const bool* pTriangleEdgesAreMeshEdges, Vector2D* pInOutVertexUVs)
{
	CUtlVector<VertexMatrixPosition_t, CUtlMemory<VertexMatrixPosition_t, int> > vertexMatrixPositionTable; // 683
	const int  nNumLockedVariables; // 684
	CSparseMatrix mTriangleEquations; // 686
	CVariableMatrix vIdealSolutions; // 687
	CVariableMatrix vVertexUVs; // 688
	CUtlMemory<float, int>::CUtlMemory(
			float* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<float, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<float, int>::CUtlMemoryFixedGrowable_Base(
					float* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<128, float, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<128, float>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<128, float, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<float, 128, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<float, 128>::CUtlVectorFixedGrowable(
				int growSize);  // 40
	CVariableMatrix::CVariableMatrix(); // 687
	CUtlMemory<float, int>::CUtlMemory(
			float* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<float, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<float, int>::CUtlMemoryFixedGrowable_Base(
					float* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<128, float, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<128, float>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<128, float, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<float, 128, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<float, 128>::CUtlVectorFixedGrowable(
				int growSize);  // 40
	CVariableMatrix::CVariableMatrix(); // 688
	CUtlMemory<VertexMatrixPosition_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VertexMatrixPosition_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VertexMatrixPosition_t, CUtlMemory<VertexMatrixPosition_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VertexMatrixPosition_t, CUtlMemory<VertexMatrixPosition_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VertexMatrixPosition_t, CUtlMemory<VertexMatrixPosition_t, int> >::CUtlVector(); // 683
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::CUtlVector(); // 16
	CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> > this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> >  this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> >::CUtlVector(); // 16
	CSparseMatrix::CSparseMatrix(); // 686
	Max<int>(const int& val1,
		const int& val2);  // 704
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 577
	CUtlMemory<float, int>::ConvertToExternalMemory(
				float* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<float, int>::Purge_FixedGrowable(
				float* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<float, int>::Purge_FixedGrowable(
				float* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<128, float, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<float, 128, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::Base(); // 368
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<float, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<float, 128, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<float, 128>::~CUtlVectorFixedGrowable(); // 16
	CVariableMatrix::~CVariableMatrix(); // 709
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<128, float, 4>::Base(); // 237
	CUtlMemory<float, int>::IsExternallyAllocated(); // 577
	CUtlMemory<float, int>::ConvertToExternalMemory(
				float* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<float, int>::Purge_FixedGrowable(
				float* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<float, int>::Purge_FixedGrowable(
				float* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<float, 128, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::Base(); // 368
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<float, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<float, 128, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<float, 128>::~CUtlVectorFixedGrowable(); // 16
	CVariableMatrix::~CVariableMatrix(); // 709
	RemoveAll(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> > this); // 1798
	CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::Purge(); // 903
	CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> > this); // 560
	ValidateAlignment<CSparseMatrix::NonZeroValueDescriptor_t>(void); // 508
	CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::Purge(); // 510
	CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> > this); // 410
	CUtlVector<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> >::~CUtlVector(); // 16
	CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::Purge(); // 903
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::Purge(); // 1799
	CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::Purge(); // 560
	ValidateAlignment<CSparseMatrix::RowDescriptor_t>(void); // 508
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::Purge(); // 510
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::~CUtlVector(); // 16
	CSparseMatrix::~CSparseMatrix(); // 709
	CUtlMemory<VertexMatrixPosition_t, int>::Purge(); // 903
	CUtlMemory<VertexMatrixPosition_t, int>::Purge(); // 1799
	CUtlVectorBase<VertexMatrixPosition_t, CUtlMemory<VertexMatrixPosition_t, int> >::Purge(); // 560
	ValidateAlignment<VertexMatrixPosition_t>(void); // 508
	CUtlMemory<VertexMatrixPosition_t, int>::Purge(); // 510
	CUtlMemory<VertexMatrixPosition_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VertexMatrixPosition_t, CUtlMemory<VertexMatrixPosition_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VertexMatrixPosition_t, CUtlMemory<VertexMatrixPosition_t, int> >::~CUtlVector(); // 709
} /* size: 857, variables: 5, inline expansions: 108 (2792 bytes) */

// <05CC49E5> meshutils/uvparamlscm.cpp:714
// member functions: 3
// member variables: 2
// struct size: 8
struct UndirectedEdge_t {
	/* meshutils/uvparamlscm.cpp:716 */
	void UndirectedEdge_t(UndirectedEdge_t* , uint32, uint32);
	/* meshutils/uvparamlscm.cpp:722 */
	bool operator==(const UndirectedEdge_t* , const UndirectedEdge_t& );
	/* meshutils/uvparamlscm.cpp:727 */
	uint32 GetHashKey32(const UndirectedEdge_t* );
	uint32 m_nVertexA; /* 0 4 */
	uint32 m_nVertexB; /* 4 4 */
};

// <05CF6472> meshutils/uvparamlscm.cpp:716
void UndirectedEdge_t::UndirectedEdge_t(uint32 nVertexA, uint32 nVertexB)
{
} /* size: 0 */

// <05CF643F> meshutils/uvparamlscm.cpp:716
inline void UndirectedEdge_t::UndirectedEdge_t(uint32 nVertexA, uint32 nVertexB)
{
} /* size: 0 */

// <05CF63F3> meshutils/uvparamlscm.cpp:727
// variable: 1
inline void UndirectedEdge_t::GetHashKey32()
{
	uint64 nCombinedValue; // 729
} /* size: 0, variables: 1 */

// <05CC4AA6> meshutils/uvparamlscm.cpp:738
// member function: 1
// struct size: 1
struct DefaultHashFunctor<UndirectedEdge_t> {
	/* meshutils/uvparamlscm.cpp:740 */
	unsigned int operator()(const DefaultHashFunctor<UndirectedEdge_t>* , const UndirectedEdge_t& );
};

// <05CF63CD> meshutils/uvparamlscm.cpp:740
inline void DefaultHashFunctor<UndirectedEdge_t>::operator(const UndirectedEdge_t& indexPair)
{
} /* size: 0 */

// <05CC4AF3> meshutils/uvparamlscm.cpp:749
// member function: 1
// member variables: 2
// struct size: 8
struct BoundaryLoopVertex_t {
	/* meshutils/uvparamlscm.cpp:751 */
	void BoundaryLoopVertex_t(BoundaryLoopVertex_t* , uint32, uint32);
	uint32 m_nVertexIndex; /* 0 4 */
	uint32 m_nFaceId; /* 4 4 */
};

// <05CF63AC> meshutils/uvparamlscm.cpp:751
void BoundaryLoopVertex_t::BoundaryLoopVertex_t(uint32 nVertexIndex, uint32 nFaceId)
{
} /* size: 0 */

// <05CF6379> meshutils/uvparamlscm.cpp:751
inline void BoundaryLoopVertex_t::BoundaryLoopVertex_t(uint32 nVertexIndex, uint32 nFaceId)
{
} /* size: 0 */

// <05CF3F0E> meshutils/uvparamlscm.cpp:761
// variables: 14
// function calls: 141
void FindBoundaryVertices(const int nNumTriangles, const uint32* pTriangleVertices, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pOutBoundaryVertices)
{
	CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int> > edgeTriangleCount; // 764
	CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> > boundaryVertices; // 775
	{
		int i; // 767
		CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::operator[](
				int i);  // 297
		operator[](const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
				handle_t idx);  // 769
		CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::operator[](
				int i);  // 720
		CUtlKeyValuePair<UndirectedEdge_t, int>::CUtlKeyValuePair<UndirectedEdge_t, int>(
							const UndirectedEdge_t& k,
							const int& v);  // 1514
		Construct<CUtlKeyValuePair<UndirectedEdge_t, int>, const UndirectedEdge_t&, int&>(CUtlKeyValuePair<UndirectedEdge_t, int>* pMemory); // 720
		DoInsert<const UndirectedEdge_t&>(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
							const UndirectedEdge_t& k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 714
		DoInsert<const UndirectedEdge_t&>(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
							const UndirectedEdge_t& k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 249
		Mix64HashFunctor::operator(
				uint64 s);  // 730
		UndirectedEdge_t::GetHashKey32(); // 742
		DefaultHashFunctor<UndirectedEdge_t>::operator(
				const UndirectedEdge_t& indexPair);  // 249
		Insert(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
			KeyArg_t k,
			ValueArg_t v,
			bool* pDidInsert);  // 770
		Min<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 718
		Max<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 719
		UndirectedEdge_t::UndirectedEdge_t(
				uint32 nVertexA,
				uint32 nVertexB);  // 770
		CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::operator[](
				int i);  // 297
		operator[](const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
				handle_t idx);  // 770
		Min<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 718
		Max<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 719
		UndirectedEdge_t::UndirectedEdge_t(
				uint32 nVertexA,
				uint32 nVertexB);  // 771
		CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::operator[](
				int i);  // 720
		CUtlKeyValuePair<UndirectedEdge_t, int>::CUtlKeyValuePair<UndirectedEdge_t, int>(
							const UndirectedEdge_t& k,
							const int& v);  // 1514
		Construct<CUtlKeyValuePair<UndirectedEdge_t, int>, const UndirectedEdge_t&, int&>(CUtlKeyValuePair<UndirectedEdge_t, int>* pMemory); // 720
		DoInsert<const UndirectedEdge_t&>(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
							const UndirectedEdge_t& k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 714
		DoInsert<const UndirectedEdge_t&>(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
							const UndirectedEdge_t& k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 249
		Mix64HashFunctor::operator(
				uint64 s);  // 730
		UndirectedEdge_t::GetHashKey32(); // 742
		DefaultHashFunctor<UndirectedEdge_t>::operator(
				const UndirectedEdge_t& indexPair);  // 249
		Insert(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
			KeyArg_t k,
			ValueArg_t v,
			bool* pDidInsert);  // 771
		CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::operator[](
				int i);  // 297
		operator[](const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
				handle_t idx);  // 771
		Min<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 718
		Max<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 719
		UndirectedEdge_t::UndirectedEdge_t(
				uint32 nVertexA,
				uint32 nVertexB);  // 769
		CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::operator[](
				int i);  // 720
		CUtlKeyValuePair<UndirectedEdge_t, int>::CUtlKeyValuePair<UndirectedEdge_t, int>(
							const UndirectedEdge_t& k,
							const int& v);  // 1514
		Construct<CUtlKeyValuePair<UndirectedEdge_t, int>, const UndirectedEdge_t&, int&>(CUtlKeyValuePair<UndirectedEdge_t, int>* pMemory); // 720
		DoInsert<const UndirectedEdge_t&>(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
							const UndirectedEdge_t& k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 714
		DoInsert<const UndirectedEdge_t&>(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
							const UndirectedEdge_t& k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 249
		Mix64HashFunctor::operator(
				uint64 s);  // 730
		UndirectedEdge_t::GetHashKey32(); // 742
		DefaultHashFunctor<UndirectedEdge_t>::operator(
				const UndirectedEdge_t& indexPair);  // 249
		Insert(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
			KeyArg_t k,
			ValueArg_t v,
			bool* pDidInsert);  // 769
	}
	{
		UtlHashHandle_t hEdge; // 778
		{
			const UndirectedEdge_t& edge; // 782
			Mix32HashFunctor::operator(
					uint32 n);  // 240
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 650
			IdealIndex(uint32_if32BitStorage h,
					uint32 m);  // 653
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 651
			CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
					uint32 slotmask);  // 656
			CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
					uint32 slotmask);  // 667
			DoLookup<unsigned int>(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this,
						unsigned int x,
						unsigned int h,
						handle_t* pPreviousInChain);  // 697
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
					int i);  // 706
			CUtlKeyValuePair<unsigned int, empty_t>::CUtlKeyValuePair<unsigned int>(
							const unsigned int& k);  // 1514
			Construct<CUtlKeyValuePair<unsigned int, empty_t>, unsigned int&>(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 706
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
						unsigned int k,
						unsigned int h,
						bool* pDidInsert);  // 695
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
						unsigned int k,
						unsigned int h,
						bool* pDidInsert);  // 240
			Insert(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
				KeyArg_t k);  // 783
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 650
			IdealIndex(uint32_if32BitStorage h,
					uint32 m);  // 653
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 651
			CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
					uint32 slotmask);  // 656
			CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
					uint32 slotmask);  // 667
			DoLookup<unsigned int>(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this,
						unsigned int x,
						unsigned int h,
						handle_t* pPreviousInChain);  // 697
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
					int i);  // 706
			CUtlKeyValuePair<unsigned int, empty_t>::CUtlKeyValuePair<unsigned int>(
							const unsigned int& k);  // 1514
			Construct<CUtlKeyValuePair<unsigned int, empty_t>, unsigned int&>(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 706
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
						unsigned int k,
						unsigned int h,
						bool* pDidInsert);  // 695
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
						unsigned int k,
						unsigned int h,
						bool* pDidInsert);  // 240
			Mix32HashFunctor::operator(
					uint32 n);  // 240
			Insert(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
				KeyArg_t k);  // 784
		}
		CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::Count(); // 915
			CUtlHashtableEntry<UndirectedEdge_t, int>::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge this); // 778
		CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::operator[](
				int i);  // 297
		operator[](const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
				handle_t idx);  // 780
		CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::Count(); // 915
			CUtlHashtableEntry<UndirectedEdge_t, int>::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge this,
				handle_t start);  // 778
	}
	{
		UtlHashHandle_t hVertex; // 790
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 915
			CUtlHashtableEntry<unsigned int, empty_t>::IsValid(); // 917
		}
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 914
		NextHandle(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this); // 790
		CUtlMemory<unsigned int, int>::Base(); // 112
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
				int num);  // 1198
		CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
			int i);  // 1201
		CopyConstruct<unsigned int>(unsigned int* pMemory,
						const unsigned int& src);  // 1201
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
				const unsigned int& src);  // 792
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
				int i);  // 293
		Key(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this,
			handle_t idx);  // 792
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 915
			CUtlHashtableEntry<unsigned int, empty_t>::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this,
				handle_t start);  // 790
	}
	CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this); // 178
	CUtlHashtable(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
			int minimumSize);  // 764
	Reserve(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
		int expected);  // 287
	Reserve(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
		int expected);  // 765
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this); // 178
	CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
			int minimumSize);  // 775
	Reserve(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
		int expected);  // 287
	Reserve(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
		int expected);  // 776
	Count(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this); // 789
	CUtlMemory<unsigned int, int>::IsGrowable(); // 881
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 888
	CUtlMemory<unsigned int, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::EnsureCapacity(
			int num);  // 789
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 897
			CUtlHashtableEntry<unsigned int, empty_t>::IsValid(); // 899
			CUtlHashtableEntry<unsigned int, empty_t>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<unsigned int, empty_t> >(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this); // 188
	ValidateAlignment<CUtlHashtableEntry<unsigned int, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this); // 794
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::Count(); // 897
			CUtlHashtableEntry<UndirectedEdge_t, int>::IsValid(); // 899
			CUtlHashtableEntry<UndirectedEdge_t, int>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<UndirectedEdge_t, int> >(CUtlKeyValuePair<UndirectedEdge_t, int>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this); // 188
	ValidateAlignment<CUtlHashtableEntry<UndirectedEdge_t, int> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this); // 794
} /* size: 0, variables: 2, inline expansions: 32 (0 bytes) */

// <05CF2918> meshutils/uvparamlscm.cpp:799
// variables: 8
// function calls: 88
void FindOpenEdges(const int nNumTriangles, const uint32* pTriangleVertices, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pOutOpenEdgeVertices)
{
	CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int> > edgeTriangleCount; // 802
	{
		int i; // 805
		CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::operator[](
				int i);  // 297
		operator[](const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
				handle_t idx);  // 807
		CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::operator[](
				int i);  // 720
		CUtlKeyValuePair<UndirectedEdge_t, int>::CUtlKeyValuePair<UndirectedEdge_t, int>(
							const UndirectedEdge_t& k,
							const int& v);  // 1514
		Construct<CUtlKeyValuePair<UndirectedEdge_t, int>, const UndirectedEdge_t&, int&>(CUtlKeyValuePair<UndirectedEdge_t, int>* pMemory); // 720
		DoInsert<const UndirectedEdge_t&>(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
							const UndirectedEdge_t& k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 714
		DoInsert<const UndirectedEdge_t&>(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
							const UndirectedEdge_t& k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 249
		Mix64HashFunctor::operator(
				uint64 s);  // 730
		UndirectedEdge_t::GetHashKey32(); // 742
		DefaultHashFunctor<UndirectedEdge_t>::operator(
				const UndirectedEdge_t& indexPair);  // 249
		Insert(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
			KeyArg_t k,
			ValueArg_t v,
			bool* pDidInsert);  // 808
		Min<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 718
		Max<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 719
		UndirectedEdge_t::UndirectedEdge_t(
				uint32 nVertexA,
				uint32 nVertexB);  // 808
		CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::operator[](
				int i);  // 297
		operator[](const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
				handle_t idx);  // 808
		Min<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 718
		Max<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 719
		UndirectedEdge_t::UndirectedEdge_t(
				uint32 nVertexA,
				uint32 nVertexB);  // 809
		CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::operator[](
				int i);  // 720
		CUtlKeyValuePair<UndirectedEdge_t, int>::CUtlKeyValuePair<UndirectedEdge_t, int>(
							const UndirectedEdge_t& k,
							const int& v);  // 1514
		Construct<CUtlKeyValuePair<UndirectedEdge_t, int>, const UndirectedEdge_t&, int&>(CUtlKeyValuePair<UndirectedEdge_t, int>* pMemory); // 720
		DoInsert<const UndirectedEdge_t&>(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
							const UndirectedEdge_t& k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 714
		DoInsert<const UndirectedEdge_t&>(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
							const UndirectedEdge_t& k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 249
		Mix64HashFunctor::operator(
				uint64 s);  // 730
		UndirectedEdge_t::GetHashKey32(); // 742
		DefaultHashFunctor<UndirectedEdge_t>::operator(
				const UndirectedEdge_t& indexPair);  // 249
		Insert(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
			KeyArg_t k,
			ValueArg_t v,
			bool* pDidInsert);  // 809
		CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::operator[](
				int i);  // 297
		operator[](const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
				handle_t idx);  // 809
		Min<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 718
		Max<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 719
		UndirectedEdge_t::UndirectedEdge_t(
				uint32 nVertexA,
				uint32 nVertexB);  // 807
		CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::operator[](
				int i);  // 720
		CUtlKeyValuePair<UndirectedEdge_t, int>::CUtlKeyValuePair<UndirectedEdge_t, int>(
							const UndirectedEdge_t& k,
							const int& v);  // 1514
		Construct<CUtlKeyValuePair<UndirectedEdge_t, int>, const UndirectedEdge_t&, int&>(CUtlKeyValuePair<UndirectedEdge_t, int>* pMemory); // 720
		DoInsert<const UndirectedEdge_t&>(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
							const UndirectedEdge_t& k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 714
		DoInsert<const UndirectedEdge_t&>(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
							const UndirectedEdge_t& k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 249
		Mix64HashFunctor::operator(
				uint64 s);  // 730
		UndirectedEdge_t::GetHashKey32(); // 742
		DefaultHashFunctor<UndirectedEdge_t>::operator(
				const UndirectedEdge_t& indexPair);  // 249
		Insert(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
			KeyArg_t k,
			ValueArg_t v,
			bool* pDidInsert);  // 807
	}
	{
		UtlHashHandle_t hEdge; // 813
		{
			const UndirectedEdge_t& edge; // 817
			CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
				int i);  // 1201
			CopyConstruct<unsigned int>(unsigned int* pMemory,
							const unsigned int& src);  // 1201
			CUtlMemory<unsigned int, int>::Base(); // 112
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
					const unsigned int& src);  // 818
			CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
				int i);  // 1201
			CopyConstruct<unsigned int>(unsigned int* pMemory,
							const unsigned int& src);  // 1201
			CUtlMemory<unsigned int, int>::Base(); // 112
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
					const unsigned int& src);  // 819
		}
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::Count(); // 915
			CUtlHashtableEntry<UndirectedEdge_t, int>::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge this); // 813
		CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::operator[](
				int i);  // 297
		operator[](const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
				handle_t idx);  // 815
		CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::Count(); // 915
			CUtlHashtableEntry<UndirectedEdge_t, int>::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge this,
				handle_t start);  // 813
	}
	CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this); // 178
	CUtlHashtable(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
			int minimumSize);  // 802
	Reserve(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
		int expected);  // 287
	Reserve(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
		int expected);  // 803
	CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::Purge(); // 510
	ValidateAlignment<CUtlHashtableEntry<UndirectedEdge_t, int> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::~CUtlMemory(); // 188
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::Count(); // 897
			CUtlHashtableEntry<UndirectedEdge_t, int>::IsValid(); // 899
			CUtlHashtableEntry<UndirectedEdge_t, int>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<UndirectedEdge_t, int> >(CUtlKeyValuePair<UndirectedEdge_t, int>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this); // 188
	~CUtlHashtable(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this); // 822
} /* size: 0, variables: 1, inline expansions: 13 (0 bytes) */

// <05CEEBF4> meshutils/uvparamlscm.cpp:827
// variables: 32
// function calls: 246
void FindBoundaryLoops(const int nNumTriangles, const uint32* pTriangleVertices, const uint32* pTriangleFaceIds, CUtlVector<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, CUtlMemory<CUtlVector<BoundaryLoopVe pOutBoundaryLoops)
{
	CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int> > edgeTriangleCount; // 834
	uint32 nMaxVertexIndex; // 836
	CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> > boundaryVertices; // 857
	const uint32  INVALID_VERTEX; // 872
	const uint32  nNumVertices; // 873
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > nextVertexList; // 875
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > vertexListFaceIds; // 879
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > vertexListTriangleIds; // 883
	{
		int i; // 838
		{
			const uint32  nVertexA; // 840
			const uint32  nVertexB; // 841
			const uint32  nVertexC; // 842
			CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::operator[](
					int i);  // 297
			operator[](const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
					handle_t idx);  // 844
			Min<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 718
			Max<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 719
			UndirectedEdge_t::UndirectedEdge_t(
					uint32 nVertexA,
					uint32 nVertexB);  // 845
			CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::operator[](
					int i);  // 720
			CUtlKeyValuePair<UndirectedEdge_t, int>::CUtlKeyValuePair<UndirectedEdge_t, int>(
								const UndirectedEdge_t& k,
								const int& v);  // 1514
			Construct<CUtlKeyValuePair<UndirectedEdge_t, int>, const UndirectedEdge_t&, int&>(CUtlKeyValuePair<UndirectedEdge_t, int>* pMemory); // 720
			DoInsert<const UndirectedEdge_t&>(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
								const UndirectedEdge_t& k,
								Arg_t v,
								unsigned int h,
								bool* pDidInsert);  // 714
			DoInsert<const UndirectedEdge_t&>(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
								const UndirectedEdge_t& k,
								Arg_t v,
								unsigned int h,
								bool* pDidInsert);  // 249
			Mix64HashFunctor::operator(
					uint64 s);  // 730
			UndirectedEdge_t::GetHashKey32(); // 742
			DefaultHashFunctor<UndirectedEdge_t>::operator(
					const UndirectedEdge_t& indexPair);  // 249
			Insert(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
				KeyArg_t k,
				ValueArg_t v,
				bool* pDidInsert);  // 845
			CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::operator[](
					int i);  // 297
			operator[](const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
					handle_t idx);  // 845
			Min<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 718
			Max<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 719
			UndirectedEdge_t::UndirectedEdge_t(
					uint32 nVertexA,
					uint32 nVertexB);  // 846
			CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::operator[](
					int i);  // 720
			CUtlKeyValuePair<UndirectedEdge_t, int>::CUtlKeyValuePair<UndirectedEdge_t, int>(
								const UndirectedEdge_t& k,
								const int& v);  // 1514
			Construct<CUtlKeyValuePair<UndirectedEdge_t, int>, const UndirectedEdge_t&, int&>(CUtlKeyValuePair<UndirectedEdge_t, int>* pMemory); // 720
			DoInsert<const UndirectedEdge_t&>(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
								const UndirectedEdge_t& k,
								Arg_t v,
								unsigned int h,
								bool* pDidInsert);  // 714
			DoInsert<const UndirectedEdge_t&>(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
								const UndirectedEdge_t& k,
								Arg_t v,
								unsigned int h,
								bool* pDidInsert);  // 249
			Mix64HashFunctor::operator(
					uint64 s);  // 730
			UndirectedEdge_t::GetHashKey32(); // 742
			DefaultHashFunctor<UndirectedEdge_t>::operator(
					const UndirectedEdge_t& indexPair);  // 249
			Insert(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
				KeyArg_t k,
				ValueArg_t v,
				bool* pDidInsert);  // 846
			CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::operator[](
					int i);  // 297
			operator[](const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
					handle_t idx);  // 846
			Max<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 852
			CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::operator[](
					int i);  // 720
			CUtlKeyValuePair<UndirectedEdge_t, int>::CUtlKeyValuePair<UndirectedEdge_t, int>(
								const UndirectedEdge_t& k,
								const int& v);  // 1514
			Construct<CUtlKeyValuePair<UndirectedEdge_t, int>, const UndirectedEdge_t&, int&>(CUtlKeyValuePair<UndirectedEdge_t, int>* pMemory); // 720
			DoInsert<const UndirectedEdge_t&>(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
								const UndirectedEdge_t& k,
								Arg_t v,
								unsigned int h,
								bool* pDidInsert);  // 714
			DoInsert<const UndirectedEdge_t&>(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
								const UndirectedEdge_t& k,
								Arg_t v,
								unsigned int h,
								bool* pDidInsert);  // 249
			Mix64HashFunctor::operator(
					uint64 s);  // 730
			UndirectedEdge_t::GetHashKey32(); // 742
			DefaultHashFunctor<UndirectedEdge_t>::operator(
					const UndirectedEdge_t& indexPair);  // 249
			Insert(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
				KeyArg_t k,
				ValueArg_t v,
				bool* pDidInsert);  // 844
			Min<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 718
			Max<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 719
			UndirectedEdge_t::UndirectedEdge_t(
					uint32 nVertexA,
					uint32 nVertexB);  // 844
		}
	}
	{
		UtlHashHandle_t hEdge; // 860
		{
			const UndirectedEdge_t& edge; // 864
			Mix32HashFunctor::operator(
					uint32 n);  // 240
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 650
			IdealIndex(uint32_if32BitStorage h,
					uint32 m);  // 653
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 651
			CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
					uint32 slotmask);  // 656
			CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
					uint32 slotmask);  // 667
			DoLookup<unsigned int>(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this,
						unsigned int x,
						unsigned int h,
						handle_t* pPreviousInChain);  // 697
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
					int i);  // 706
			CUtlKeyValuePair<unsigned int, empty_t>::CUtlKeyValuePair<unsigned int>(
							const unsigned int& k);  // 1514
			Construct<CUtlKeyValuePair<unsigned int, empty_t>, unsigned int&>(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 706
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
						unsigned int k,
						unsigned int h,
						bool* pDidInsert);  // 695
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
						unsigned int k,
						unsigned int h,
						bool* pDidInsert);  // 240
			Insert(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
				KeyArg_t k);  // 865
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 650
			IdealIndex(uint32_if32BitStorage h,
					uint32 m);  // 653
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 651
			CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
					uint32 slotmask);  // 656
			CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
					uint32 slotmask);  // 667
			DoLookup<unsigned int>(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this,
						unsigned int x,
						unsigned int h,
						handle_t* pPreviousInChain);  // 697
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
					int i);  // 706
			CUtlKeyValuePair<unsigned int, empty_t>::CUtlKeyValuePair<unsigned int>(
							const unsigned int& k);  // 1514
			Construct<CUtlKeyValuePair<unsigned int, empty_t>, unsigned int&>(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 706
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
						unsigned int k,
						unsigned int h,
						bool* pDidInsert);  // 695
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
						unsigned int k,
						unsigned int h,
						bool* pDidInsert);  // 240
			Mix32HashFunctor::operator(
					uint32 n);  // 240
			Insert(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
				KeyArg_t k);  // 866
		}
		CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::Count(); // 915
			CUtlHashtableEntry<UndirectedEdge_t, int>::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge this); // 860
		CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::operator[](
				int i);  // 297
		operator[](const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
				handle_t idx);  // 862
		CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::Count(); // 915
			CUtlHashtableEntry<UndirectedEdge_t, int>::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge this,
				handle_t start);  // 860
	}
	{
		int i; // 887
		{
			const int  nFaceId; // 889
			const int  nVertexA; // 890
			const int  nVertexB; // 891
			const int  nVertexC; // 892
			Mix64HashFunctor::operator(
					uint64 s);  // 730
			UndirectedEdge_t::GetHashKey32(); // 742
			DefaultHashFunctor<UndirectedEdge_t>::operator(
					const UndirectedEdge_t& indexPair);  // 218
			Find(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge this,
				KeyArg_t k);  // 302
			CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::operator[](
					int i);  // 294
			CUtlKeyValuePair<UndirectedEdge_t, int>::GetValue(); // 294
			Element(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge this,
				handle_t idx);  // 302
			Get(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge this,
				KeyArg_t k,
				const Element_t& defaultValue);  // 896
			Min<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 718
			Max<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 719
			UndirectedEdge_t::UndirectedEdge_t(
					uint32 nVertexA,
					uint32 nVertexB);  // 896
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 899
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 900
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 901
			Min<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 718
			Max<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 719
			UndirectedEdge_t::UndirectedEdge_t(
					uint32 nVertexA,
					uint32 nVertexB);  // 904
			Mix64HashFunctor::operator(
					uint64 s);  // 730
			UndirectedEdge_t::GetHashKey32(); // 742
			DefaultHashFunctor<UndirectedEdge_t>::operator(
					const UndirectedEdge_t& indexPair);  // 218
			Find(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge this,
				KeyArg_t k);  // 302
			CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::operator[](
					int i);  // 294
			CUtlKeyValuePair<UndirectedEdge_t, int>::GetValue(); // 294
			Element(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge this,
				handle_t idx);  // 302
			Get(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge this,
				KeyArg_t k,
				const Element_t& defaultValue);  // 904
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 907
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 908
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 909
			Min<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 718
			Max<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 719
			UndirectedEdge_t::UndirectedEdge_t(
					uint32 nVertexA,
					uint32 nVertexB);  // 912
			Mix64HashFunctor::operator(
					uint64 s);  // 730
			UndirectedEdge_t::GetHashKey32(); // 742
			DefaultHashFunctor<UndirectedEdge_t>::operator(
					const UndirectedEdge_t& indexPair);  // 218
			Find(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge this,
				KeyArg_t k);  // 302
			CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::operator[](
					int i);  // 294
			CUtlKeyValuePair<UndirectedEdge_t, int>::GetValue(); // 294
			Element(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge this,
				handle_t idx);  // 302
			Get(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge this,
				KeyArg_t k,
				const Element_t& defaultValue);  // 912
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 915
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 916
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 917
		}
	}
	{
		uint32 iStartVertex; // 924
		{
			CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >& boundaryLoop; // 928
			uint32 nCurrentVertex; // 929
			{
				const int  nNextVertex; // 933
				CUtlMemory<BoundaryLoopVertex_t, int>::Base(); // 112
				CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::Base(); // 368
				CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::GrowMemory(
						int num);  // 1249
				CUtlMemory<BoundaryLoopVertex_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::Element(
					int i);  // 1252
				Construct<BoundaryLoopVertex_t, BoundaryLoopVertex_t>(BoundaryLoopVertex_t* pMemory); // 1252
				CUtlMemory<BoundaryLoopVertex_t, int>::NumAllocated(); // 1247
				CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::AddToTail(
						BoundaryLoopVertex_t& src);  // 932
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
						int i);  // 932
				BoundaryLoopVertex_t::BoundaryLoopVertex_t(
							uint32 nVertexIndex,
							uint32 nFaceId);  // 932
			}
			CUtlMemory<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, int>::NumAllocated(); // 1143
			CUtlMemory<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, int>::Base(); // 112
			Base(const CUtlVectorBase<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, CUtlMemory<CUtlVector<Boun this); // 368
			ResetDbgInfo(const CUtlVectorBase<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, CUtlMemory<CUtlVector<Boun this); // 824
			CUtlMemory<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, int>::IsGrowable(); // 823
			CUtlMemory<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, int>::IsExternallyAllocated(); // 859
			CUtlMemory<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, int>::IsExternallyAllocated(); // 861
			CUtlMemory<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, int>::Grow(
				int num);  // 806
			GrowMemory(const CUtlVectorBase<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, CUtlMemory<CUtlVector<Boun this,
					int num);  // 1145
			CUtlMemory<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, CUtlMemory<CUtlVector<Boun this,
				int i);  // 1148
			CUtlMemory<BoundaryLoopVertex_t, int>::ValidateGrowSize(); // 475
			CUtlMemory<BoundaryLoopVertex_t, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::CUtlVector(); // 1479
			Construct<CUtlVector<BoundaryLoopVertex_t> >(CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >* pMemory); // 1148
			AddToTail(const CUtlVectorBase<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, CUtlMemory<CUtlVector<Boun this); // 1156
			CUtlMemory<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, CUtlMemory<CUtlVector<Boun this,
				int i);  // 1156
			AddToTailGetPtr(const CUtlVectorBase<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, CUtlMemory<CUtlVector<Boun this); // 928
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 930
		}
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 926
	}
	CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this); // 178
	CUtlHashtable(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
			int minimumSize);  // 834
	Reserve(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
		int expected);  // 287
	Reserve(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this,
		int expected);  // 835
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 939
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 939
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 939
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 897
			CUtlHashtableEntry<unsigned int, empty_t>::IsValid(); // 899
			CUtlHashtableEntry<unsigned int, empty_t>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<unsigned int, empty_t> >(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this); // 188
	ValidateAlignment<CUtlHashtableEntry<unsigned int, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this); // 939
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::Count(); // 897
			CUtlHashtableEntry<UndirectedEdge_t, int>::IsValid(); // 899
			CUtlHashtableEntry<UndirectedEdge_t, int>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<UndirectedEdge_t, int> >(CUtlKeyValuePair<UndirectedEdge_t, int>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this); // 188
	ValidateAlignment<CUtlHashtableEntry<UndirectedEdge_t, int> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, int>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<UndirectedEdge_t, int, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, u this); // 939
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this); // 178
	CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
			int minimumSize);  // 857
	Reserve(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
		int expected);  // 287
	Reserve(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
		int expected);  // 858
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 875
	{
		int i; // 1554
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::FillWithValue(
			const unsigned int& src);  // 877
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 879
	{
		int i; // 1554
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::FillWithValue(
			const unsigned int& src);  // 881
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 883
	{
		int i; // 1554
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::FillWithValue(
			const unsigned int& src);  // 885
} /* size: 3961, variables: 8, inline expansions: 68 (2095 bytes) */

// <05CEDB81> meshutils/uvparamlscm.cpp:944
// variables: 12
// function calls: 62
bool FindExteriorBoundaryLoop(const int nNumTriangles, const uint32* pTriangleVertices, const uint32* pTriangleFaceIds, const Vector2D* pVertexUVs, CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >* pOutExteriorLoop)
{
	CUtlVector<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, CUtlMemory<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, int> > boundaryLoops; // 949
	const int  nNumBoundaryLoops; // 951
	int nExtiorLoop; // 955
	CUtlVector<Vector, CUtlMemory<Vector, int> > vLoopPositions; // 956
	{
		int iLoop; // 957
		{
			const CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >& boundaryLoop; // 959
			const int  nNumLoopVertices; // 960
			Vector vLoopNormal; // 972
			float flDist; // 973
			{
				int iVertex; // 964
				{
					const Vector2D  loopRelativeUV; // 966
					CUtlMemory<BoundaryLoopVertex_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::operator[](
							int i);  // 966
					CUtlMemory<BoundaryLoopVertex_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::operator[](
							int i);  // 966
					Vector2D::Vector2D(); // 694
					Vector2DSubtract(const Vector2D& a,
							const Vector2D& b,
							Vector2D& c);  // 695
					Vector2D::operator-(
							const Vector2D& v);  // 966
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 967
					Vector::operator=(
							const Vector& vOther);  // 967
				}
			}
			CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::Count(); // 960
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveMultipleFromTail(
						int num);  // 1323
			CUtlMemory<Vector, int>::Grow(
				int num);  // 806
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
					int num);  // 784
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowVector(
					int num);  // 1445
			{
				int i; // 1451
			}
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddMultipleToTail(
						int num);  // 1319
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::SetCount(
				int count);  // 963
			Vector::Vector(); // 972
		}
	}
	CUtlMemory<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, CUtlMemory<CUtlVector<Boun this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, CUtlMemory<CUtlVector<Boun this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, CUtlMemory<CUtlVector<Boundary this); // 949
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 956
	CUtlMemory<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, CUtlMemory<CUtlVector<Boun this,
			int i);  // 992
	CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::Count(); // 573
	CUtlMemory<BoundaryLoopVertex_t, int>::Base(); // 112
	CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::Base(); // 102
	CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::begin(); // 574
	CUtlMemory<BoundaryLoopVertex_t, int>::Base(); // 113
	CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::Base(); // 105
	CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::Count(); // 105
	CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<BoundaryLoopVertex_t>(const BoundaryLoopVertex_t* pFrom,
						const BoundaryLoopVertex_t* pFromEnd,
						BoundaryLoopVertex_t* pTo);  // 173
	UtlTraitsCopyRange<BoundaryLoopVertex_t>(const BoundaryLoopVertex_t* pFrom,
						const BoundaryLoopVertex_t* pFromEnd,
						BoundaryLoopVertex_t* pTo);  // 574
	CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::operator=(
			const CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >& other);  // 565
	CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::operator=(
			const CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >& other);  // 452
	CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::operator=(
			const CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >& src);  // 992
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 994
	CUtlMemory<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, CUtlMemory<CUtlVector<Boun this); // 560
	ValidateAlignment<CUtlVector<BoundaryLoopVertex_t> >(void); // 508
	CUtlMemory<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, CUtlMemory<CUtlVector<Boun this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >, CUtlMemory<CUtlVector<Boundary this); // 994
} /* size: 779, variables: 4, inline expansions: 43 (562 bytes) */

// <05CCD9FB> meshutils/uvparamlscm.cpp:999
// member variables: 2
// struct size: 8
struct PossibleCorner_t {
	int m_nIndex; /* 0 4 */
	float m_flCornerAngle; /* 4 4 */
};

// <05CEDB37> meshutils/uvparamlscm.cpp:1005
int SortCornersByAngle(const PossibleCorner_t* pCornerA, const PossibleCorner_t* pCornerB)
{
} /* size: 35 */

// <05CEDAED> meshutils/uvparamlscm.cpp:1012
int SortCornersByIndex(const PossibleCorner_t* pCornerA, const PossibleCorner_t* pCornerB)
{
} /* size: 28 */

// <05CED212> meshutils/uvparamlscm.cpp:1022
// variables: 11
// function calls: 38
float ComputeCornerAngle(const Vector2D* pVertexUVs, const CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >& boundaryLoop, int nBoundaryLoopIndex, bool bSameFaceOnly)
{
	const int  nNumVertices; // 1024
	const int  nBoundaryLoopPrev; // 1025
	const int  nBoundaryLoopNext; // 1026
	const uint32  nPrevVertex; // 1031
	const uint32  nCurrentVertex; // 1032
	const uint32  nNextVertex; // 1033
	const float  dt; // 1036
	const Vector2D  vToCurrent; // 1040
	const Vector2D  vToNext; // 1041
	const float  flDot; // 1042
	const float  flCornerAngle; // 1043
	CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::Count(); // 1024
	CUtlMemory<BoundaryLoopVertex_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::operator[](
			int i);  // 1028
	CUtlMemory<BoundaryLoopVertex_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::operator[](
			int i);  // 1028
	CUtlMemory<BoundaryLoopVertex_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::operator[](
			int i);  // 1033
	ComputeTriangleDeterminant(const Vector2D& vA,
					const Vector2D& vB,
					const Vector2D& vC);  // 1036
	Vector2D::Vector2D(); // 694
	Vector2DSubtract(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 695
	Vector2D::operator-(
			const Vector2D& v);  // 1040
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 530
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 498
	Vector2DLength(const Vector2D& v); // 554
	Vector2D::Length(); // 584
	Vector2D::operator/=(
			float fl);  // 587
	Vector2DNormalize(Vector2D& v); // 531
	Vector2D::Normalized(); // 1040
	Vector2D::Vector2D(); // 694
	Vector2DSubtract(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 695
	Vector2D::operator-(
			const Vector2D& v);  // 1041
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 530
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 498
	Vector2DLength(const Vector2D& v); // 554
	Vector2D::Length(); // 584
	Vector2D::operator/=(
			float fl);  // 587
	Vector2DNormalize(Vector2D& v); // 531
	Vector2D::Normalized(); // 1041
	DotProduct2D(const Vector2D& a,
			const Vector2D& b);  // 484
	Vector2D::Dot(
		const Vector2D& vOther);  // 1042
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 1043
	RAD2DEG(float flRadians); // 1043
} /* size: 476, variables: 11, inline expansions: 38 (787 bytes) */

// <05CECAE1> meshutils/uvparamlscm.cpp:1051
// variables: 7
// function calls: 25
bool FindBoundaryCorners(const Vector2D* pVertexUVs, const CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >& boundaryLoop, bool bSameFaceOnly, CUtlVector<int, CUtlMemory<int, int> >* pOutCornerIndices)
{
	const float  flRequiredAngleGap; // 1053
	const int  nNumVerticesInLoop; // 1055
	CUtlVector<PossibleCorner_t, CUtlMemory<PossibleCorner_t, int> > possibleCorners; // 1058
	{
		int i; // 1060
		{
			const float  flCornerQuality; // 1062
			{
				PossibleCorner_t* pCorner; // 1065
				CUtlVectorBase<PossibleCorner_t, CUtlMemory<PossibleCorner_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<PossibleCorner_t, CUtlMemory<PossibleCorner_t, int> >::GrowMemory(
						int num);  // 1145
				CUtlVectorBase<PossibleCorner_t, CUtlMemory<PossibleCorner_t, int> >::AddToTail(); // 1156
				CUtlMemory<PossibleCorner_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<PossibleCorner_t, CUtlMemory<PossibleCorner_t, int> >::Element(
					int i);  // 1156
				CUtlVectorBase<PossibleCorner_t, CUtlMemory<PossibleCorner_t, int> >::AddToTailGetPtr(); // 1065
			}
		}
	}
	{
		int i; // 1092
		CUtlMemory<int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
			int i);  // 1094
	}
	CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::Count(); // 1055
	CUtlMemory<PossibleCorner_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<PossibleCorner_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<PossibleCorner_t, CUtlMemory<PossibleCorner_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<PossibleCorner_t, CUtlMemory<PossibleCorner_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<PossibleCorner_t, CUtlMemory<PossibleCorner_t, int> >::CUtlVector(); // 1058
	CUtlMemory<PossibleCorner_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<PossibleCorner_t, CUtlMemory<PossibleCorner_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<PossibleCorner_t, CUtlMemory<PossibleCorner_t, int> >::EnsureCapacity(
			int num);  // 1059
	CUtlMemory<PossibleCorner_t, int>::Purge(); // 903
	CUtlMemory<PossibleCorner_t, int>::Purge(); // 1799
	CUtlVectorBase<PossibleCorner_t, CUtlMemory<PossibleCorner_t, int> >::Purge(); // 560
	ValidateAlignment<PossibleCorner_t>(void); // 508
	CUtlMemory<PossibleCorner_t, int>::Purge(); // 510
	CUtlMemory<PossibleCorner_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<PossibleCorner_t, CUtlMemory<PossibleCorner_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<PossibleCorner_t, CUtlMemory<PossibleCorner_t, int> >::~CUtlVector(); // 1098
} /* size: 534, variables: 3, inline expansions: 17 (409 bytes) */

// <05CEC0E0> meshutils/uvparamlscm.cpp:1103
// variables: 7
// function calls: 40
bool SplitLoopIntoSegments(const Vector2D* pVertexUVs, const CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >& boundaryLoop, CUtlVector<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsig pOutBoundarySegments)
{
	const int  nNumBoundaryVertices; // 1105
	CUtlVector<int, CUtlMemory<int, int> > boundaryCorners; // 1109
	{
		int i; // 1128
		{
			CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& segment; // 1130
			const int  nStartVertex; // 1132
			const int  nEndVertex; // 1133
			int nCurrentVertex; // 1137
			CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
				int i);  // 1130
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1133
			CUtlMemory<BoundaryLoopVertex_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::operator[](
					int i);  // 1135
			CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
				int i);  // 1201
			CopyConstruct<unsigned int>(unsigned int* pMemory,
							const unsigned int& src);  // 1201
			CUtlMemory<unsigned int, int>::Base(); // 112
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
					const unsigned int& src);  // 1135
			CUtlMemory<unsigned int, int>::Base(); // 112
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
					int num);  // 1198
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
				int i);  // 1201
			CopyConstruct<unsigned int>(unsigned int* pMemory,
							const unsigned int& src);  // 1201
			CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
					const unsigned int& src);  // 1141
			CUtlMemory<BoundaryLoopVertex_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::operator[](
					int i);  // 1141
		}
	}
	CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::Count(); // 1105
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 1109
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 1146
} /* size: 666, variables: 2, inline expansions: 14 (214 bytes) */

// <05CEB53A> meshutils/uvparamlscm.cpp:1151
// variables: 10
// function calls: 47
void SnapVerticesToEdge(const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& vertexList, Vector2D vStart, Vector2D vEnd, VertexLockFlags_t nAxis, Vector2D* pVertexUVs, VertexLockFlags_t* pVertexLockFlags)
{
	const int  nComponent; // 1153
	const int  nNumVertices; // 1154
	CUtlVector<float, CUtlMemory<float, int> > vertexParameters; // 1158
	float flTotalLength; // 1162
	{
		int iVertex; // 1163
		{
			const Vector2D& vertexUV; // 1165
			const Vector2D& prevUV; // 1166
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 1165
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 1166
			Vector2D::Vector2D(); // 602
			Vector2DSubtract(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 603
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 498
			Vector2DLength(const Vector2D& v); // 554
			Vector2D::Length(); // 604
			Vector2D::DistTo(
				const Vector2D& vOther);  // 1168
		}
	}
	{
		int iVertex; // 1172
	}
	{
		int iVertex; // 1179
		{
			const int  nVertexIndex; // 1181
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 1181
			Vector2D::Vector2D(); // 694
			Vector2DSubtract(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 695
			Vector2D::operator-(
					const Vector2D& v);  // 262
			Vector2D::Vector2D(); // 701
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::operator*(
					float fl);  // 262
			Vector2D::Vector2D(); // 687
			Vector2DAdd(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 688
			Vector2D::operator+(
					const Vector2D& v);  // 262
			Lerp<Vector2D>(float flPercent,
					const Vector2D& A,
					const Vector2D& B);  // 1182
			Vector2D::operator=(
					const Vector2D& vOther);  // 1182
			operator|(VertexLockFlags_t a,
					VertexLockFlags_t b);  // 36
			operator|=(VertexLockFlags_t& a,
					VertexLockFlags_t b);  // 1183
		}
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 1154
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 1158
	CUtlVectorBase<float, CUtlMemory<float, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<float, CUtlMemory<float, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<float, CUtlMemory<float, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<float, CUtlMemory<float, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<float, CUtlMemory<float, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<float, CUtlMemory<float, int> >::SetCount(
		int count);  // 1159
	CUtlMemory<float, int>::operator[](
			int i);  // 588
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 1176
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 1185
} /* size: 618, variables: 4, inline expansions: 19 (639 bytes) */

// <05CE9F6D> meshutils/uvparamlscm.cpp:1190
// variables: 19
// function calls: 87
bool LockQuadBoundaryToBorder(const CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >& boundaryLoop, const int nNumVertices, const int nNumTriangles, const uint32* pTriangleVertices, Vector2D* pVertexUVs, VertexLockFlags_t* pOutVertexLockFlags)
{
	CUtlVector<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int> > boundarySegments; // 1193
	CUtlVector<int, CUtlMemory<int, int> > vertexSegmentFlags; // 1202
	Vector2D vMin; // 1228
	Vector2D vMax; // 1228
	int nStartSegment; // 1232
	float flMinDist; // 1233
	{
		int iSegment; // 1205
		{
			const int  nNumVerticesOnSegment; // 1207
			{
				int i; // 1208
				{
					const int  nVertexIndex; // 1210
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
							int i);  // 1210
					CUtlMemory<int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
							int i);  // 1211
				}
			}
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 1207
		}
	}
	{
		int iTriangle; // 1218
		{
			const uint32  v0; // 1220
			const uint32  v1; // 1221
			const uint32  v2; // 1222
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1223
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1223
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1223
		}
	}
	{
		int i; // 1234
		{
			float flDist; // 1236
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 1236
			Vector2D::Vector2D(); // 602
			Vector2DSubtract(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 603
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 498
			Vector2DLength(const Vector2D& v); // 554
			Vector2D::Length(); // 604
			Vector2D::DistTo(
				const Vector2D& vOther);  // 1236
		}
	}
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMemory this); // 1193
	{
		int i; // 1721
		CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
			int i);  // 1723
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
		CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned int, int>::Purge(); // 903
		CUtlMemory<unsigned int, int>::Purge(); // 1799
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
		ValidateAlignment<unsigned int>(void); // 508
		CUtlMemory<unsigned int, int>::Purge(); // 510
		CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 1526
		Destruct<CUtlVector<unsigned int> >(CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this); // 1798
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this); // 560
	ValidateAlignment<CUtlVector<unsigned int> >(void); // 508
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMemory this); // 1251
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 1202
	{
		int i; // 1554
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::FillWithValue(
			const int& src);  // 1204
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 1251
	{
		int i; // 46
		Vector2D::Vector2D(
			vec_t X,
			vec_t Y);  // 666
		Vector2D::Min(
			const Vector2D& vOther);  // 48
		Vector2D::Vector2D(
			vec_t X,
			vec_t Y);  // 672
		Vector2D::Max(
			const Vector2D& vOther);  // 49
	}
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 44
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 45
	ComputeUVBounds(const int  nNumVertices,
			const Vector2D* pVertexUVs,
			Vector2D* pOutMin,
			Vector2D* pOutMax);  // 1229
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
			int i);  // 1245
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 1245
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 1245
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 1246
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
			int i);  // 1246
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 1246
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 1247
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
			int i);  // 1247
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 1247
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 1248
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
			int i);  // 1248
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 1248
} /* size: 1405, variables: 6, inline expansions: 47 (1582 bytes) */

// <05CE97B6> meshutils/uvparamlscm.cpp:1256
// variables: 19
// function calls: 24
bool SnapBoundaryVertexUVsToBorder(const CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >& boundaryLoop, const int nNumVertices, Vector2D* pVertexUVs, VertexLockFlags_t* pOutVertexLockFlags)
{
	const int  nNumBoundaryVertices; // 1258
	Vector2D vMin; // 1260
	Vector2D vMax; // 1260
	float flMinLengthSqr; // 1263
	const float  flSnapDistance; // 1271
	const Vector2D  vSnapMin; // 1273
	const Vector2D  vSnapMax; // 1274
	int nNumLockedU; // 1277
	int nNumLockedV; // 1278
	int nNumLockedUV; // 1279
	{
		int iBoundaryVertex; // 1264
		{
			const Vector2D& vVertexA; // 1266
			const Vector2D& vVertexB; // 1267
			const float  flLengthSqr; // 1268
			CUtlMemory<BoundaryLoopVertex_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::operator[](
					int i);  // 1266
			CUtlMemory<BoundaryLoopVertex_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::operator[](
					int i);  // 1267
			Vector2DSubtract(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 610
			Vector2D::Vector2D(); // 609
			Vector2D::LengthSqr(); // 611
			Vector2D::DistToSqr(
					const Vector2D& vOther);  // 1268
		}
	}
	{
		int i; // 1281
		{
			const uint32  nVertexIndex; // 1283
			VertexLockFlags_t nLockFlags; // 1285
			Vector2D& vCurrentUV; // 1286
			operator|=(VertexLockFlags_t& a,
					VertexLockFlags_t b);  // 1302
			CUtlMemory<BoundaryLoopVertex_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::operator[](
					int i);  // 1283
			operator|=(VertexLockFlags_t& a,
					VertexLockFlags_t b);  // 1307
		}
	}
	CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::Count(); // 1258
	{
		int i; // 46
		Vector2D::Vector2D(
			vec_t X,
			vec_t Y);  // 666
		Vector2D::Min(
			const Vector2D& vOther);  // 48
		Vector2D::Vector2D(
			vec_t X,
			vec_t Y);  // 672
		Vector2D::Max(
			const Vector2D& vOther);  // 49
	}
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 44
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 45
	ComputeUVBounds(const int  nNumVertices,
			const Vector2D* pVertexUVs,
			Vector2D* pOutMin,
			Vector2D* pOutMax);  // 1261
	Vector2D::Vector2D(); // 1260
	Vector2D::Vector2D(); // 1260
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 1273
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 1274
} /* size: 732, variables: 10, inline expansions: 8 (355 bytes) */

// <05CD2EF8> meshutils/uvparamlscm.cpp:1326
// member function: 1
// member variables: 2
// struct size: 8
struct EdgeFaceIdEntry_t {
	/* meshutils/uvparamlscm.cpp:1328 */
	void EdgeFaceIdEntry_t(EdgeFaceIdEntry_t* , uint32, int);
	uint32 m_nFaceId; /* 0 4 */
	int32 m_nTriangleCount; /* 4 4 */
};

// <05CE9795> meshutils/uvparamlscm.cpp:1328
void EdgeFaceIdEntry_t::EdgeFaceIdEntry_t(uint32 nFaceId, int nTriangleCount)
{
} /* size: 0 */

// <05CE9762> meshutils/uvparamlscm.cpp:1328
inline void EdgeFaceIdEntry_t::EdgeFaceIdEntry_t(uint32 nFaceId, int nTriangleCount)
{
} /* size: 0 */

// <05CE971A> meshutils/uvparamlscm.cpp:1333
// variable: 1
void UpdateEdgeFaceIDTable(CUtlHashtable<UndirectedEdge_t, EdgeFaceIdEntry_t, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEd edgeFaceIdTable, const UndirectedEdge_t& edge, uint32 nFaceId)
{
	UtlHashHandle_t hEntry; // 1335
} /* size: 0, variables: 1 */

// <05CE9541> meshutils/uvparamlscm.cpp:1350
// variables: 2
// function calls: 6
bool IsInteriorFaceEdge(CUtlHashtable<UndirectedEdge_t, EdgeFaceIdEntry_t, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEd edgeFaceIdTable, const UndirectedEdge_t& edge, uint32 nFaceId)
{
	UtlHashHandle_t hEntry; // 1352
	EdgeFaceIdEntry_t& edgeEntry; // 1356
	Mix64HashFunctor::operator(
			uint64 s);  // 730
	UndirectedEdge_t::GetHashKey32(); // 742
	DefaultHashFunctor<UndirectedEdge_t>::operator(
			const UndirectedEdge_t& indexPair);  // 218
	Find(const CUtlHashtable<UndirectedEdge_t, EdgeFaceIdEntry_t, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor< this,
		KeyArg_t k);  // 1352
	CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, EdgeFaceIdEntry_t>, int>::operator[](
			int i);  // 297
	operator[](const CUtlHashtable<UndirectedEdge_t, EdgeFaceIdEntry_t, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<Undire this,
			handle_t idx);  // 1356
} /* size: 134, variables: 2, inline expansions: 6 (292 bytes) */

// <05CE8541> meshutils/uvparamlscm.cpp:1364
// variables: 15
// function calls: 61
void DetermineIfTriangleEdgesAreMeshEdges(const int nNumTriangles, const uint32* pTriangleVertices, const uint32* pTriangleFaceIds, CUtlVector<bool, CUtlMemory<bool, int> >* pOutTriangleEdgesAreMeshEdges)
{
	CUtlVector<bool, CUtlMemory<bool, int> >& triangleEdgesAreMeshEdges; // 1366
	CUtlHashtable<UndirectedEdge_t, EdgeFaceIdEntry_t, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<UndirectedEdge_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, EdgeFaceIdEntry_t>, int> > edgeFaceIdTable; // 1373
	{
		int i; // 1379
		{
			const uint32  nTriangleFace; // 1381
			const UndirectedEdge_t  edgeAB; // 1382
			const UndirectedEdge_t  edgeBC; // 1383
			const UndirectedEdge_t  edgeCA; // 1384
			Min<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 718
			Max<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 719
			UndirectedEdge_t::UndirectedEdge_t(
					uint32 nVertexA,
					uint32 nVertexB);  // 1382
			Min<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 718
			Max<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 719
			UndirectedEdge_t::UndirectedEdge_t(
					uint32 nVertexA,
					uint32 nVertexB);  // 1383
			Min<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 718
			Max<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 719
			UndirectedEdge_t::UndirectedEdge_t(
					uint32 nVertexA,
					uint32 nVertexB);  // 1384
		}
	}
	{
		int i; // 1394
		{
			const uint32  nTriangleFace; // 1396
			const UndirectedEdge_t  edgeAB; // 1397
			const UndirectedEdge_t  edgeBC; // 1398
			const UndirectedEdge_t  edgeCA; // 1399
			Min<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 718
			Max<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 719
			UndirectedEdge_t::UndirectedEdge_t(
					uint32 nVertexA,
					uint32 nVertexB);  // 1397
			Min<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 718
			Max<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 719
			UndirectedEdge_t::UndirectedEdge_t(
					uint32 nVertexA,
					uint32 nVertexB);  // 1398
			Min<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 718
			Max<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 719
			UndirectedEdge_t::UndirectedEdge_t(
					uint32 nVertexA,
					uint32 nVertexB);  // 1399
			CUtlMemory<bool, int>::operator[](
					int i);  // 588
			CUtlVectorBase<bool, CUtlMemory<bool, int> >::operator[](
					int i);  // 1401
			CUtlMemory<bool, int>::operator[](
					int i);  // 588
			CUtlVectorBase<bool, CUtlMemory<bool, int> >::operator[](
					int i);  // 1402
			CUtlMemory<bool, int>::operator[](
					int i);  // 588
			CUtlVectorBase<bool, CUtlMemory<bool, int> >::operator[](
					int i);  // 1403
		}
	}
	CUtlMemory<bool, int>::NumAllocated(); // 782
	CUtlMemory<bool, int>::IsGrowable(); // 823
	CUtlMemory<bool, int>::IsExternallyAllocated(); // 859
	CUtlMemory<bool, int>::IsExternallyAllocated(); // 861
	CUtlMemory<bool, int>::Grow(
		int num);  // 806
	CUtlMemory<bool, int>::Base(); // 112
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::Base(); // 368
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::SetCount(
		int count);  // 1367
	{
		int i; // 1554
		CUtlVectorBase<bool, CUtlMemory<bool, int> >::Count(); // 1554
		CUtlMemory<bool, int>::operator[](
				int i);  // 602
		CUtlVectorBase<bool, CUtlMemory<bool, int> >::Element(
			int i);  // 1556
	}
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::FillWithValue(
			const bool& src);  // 1368
	CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, EdgeFaceIdEntry_t>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, EdgeFaceIdEntry_t>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<UndirectedEdge_t, EdgeFaceIdEntry_t, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<Undire this); // 178
	CUtlHashtable(const CUtlHashtable<UndirectedEdge_t, EdgeFaceIdEntry_t, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<Undire this,
			int minimumSize);  // 1373
	Reserve(const CUtlHashtable<UndirectedEdge_t, EdgeFaceIdEntry_t, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<Undire this,
		int expected);  // 287
	Reserve(const CUtlHashtable<UndirectedEdge_t, EdgeFaceIdEntry_t, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<Undire this,
		int expected);  // 1374
	CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, EdgeFaceIdEntry_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, EdgeFaceIdEntry_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, EdgeFaceIdEntry_t>, int>::Purge(); // 510
	ValidateAlignment<CUtlHashtableEntry<UndirectedEdge_t, EdgeFaceIdEntry_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, EdgeFaceIdEntry_t>, int>::~CUtlMemory(); // 188
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, EdgeFaceIdEntry_t>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<UndirectedEdge_t, EdgeFaceIdEntry_t>, int>::Count(); // 897
			CUtlHashtableEntry<UndirectedEdge_t, EdgeFaceIdEntry_t>::IsValid(); // 899
			CUtlHashtableEntry<UndirectedEdge_t, EdgeFaceIdEntry_t>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<UndirectedEdge_t, EdgeFaceIdEntry_t> >(CUtlKeyValuePair<UndirectedEdge_t, EdgeFaceIdEntry_t>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<UndirectedEdge_t, EdgeFaceIdEntry_t, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<Undire this); // 188
	~CUtlHashtable(const CUtlHashtable<UndirectedEdge_t, EdgeFaceIdEntry_t, DefaultHashFunctor<UndirectedEdge_t>, DefaultEqualFunctor<Undire this); // 1405
} /* size: 1139, variables: 2, inline expansions: 29 (1923 bytes) */

// <05CE7E46> meshutils/uvparamlscm.cpp:1410
// variables: 14
// function calls: 24
void CountNumUVsOnBorder(const CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& vertexUVs, int* pOutNumBorderVertices, int* pOutNumCornerVertices)
{
	const float  flEdgeTolerance; // 1412
	const int  nNumVertices; // 1414
	Vector2D vMin; // 1416
	Vector2D vMax; // 1416
	const Vector2D  vBorderSize; // 1419
	const Vector2D  vBorderMin; // 1420
	const Vector2D  vBorderMax; // 1421
	int nNumBorderVertices; // 1423
	int nNumCornerVertices; // 1424
	{
		int iVertex; // 1426
		{
			const Vector2D& vCurrentUV; // 1428
			bool bOnBorderX; // 1429
			bool bOnBorderY; // 1430
		}
	}
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Count(); // 1414
	Vector2D::Vector2D(); // 1416
	Vector2D::Vector2D(); // 1416
	CUtlMemory<Vector2D, int>::Base(); // 113
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Base(); // 1417
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 44
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 45
	{
		int i; // 46
		Vector2D::Vector2D(
			vec_t X,
			vec_t Y);  // 666
		Vector2D::Min(
			const Vector2D& vOther);  // 48
		Vector2D::Vector2D(
			vec_t X,
			vec_t Y);  // 672
		Vector2D::Max(
			const Vector2D& vOther);  // 49
	}
	ComputeUVBounds(const int  nNumVertices,
			const Vector2D* pVertexUVs,
			Vector2D* pOutMin,
			Vector2D* pOutMax);  // 1417
	Vector2D::Vector2D(); // 694
	Vector2DSubtract(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 695
	Vector2D::operator-(
			const Vector2D& v);  // 1419
	Vector2D::Vector2D(); // 701
	Vector2DMultiply(const Vector2D& a,
			vec_t b,
			Vector2D& c);  // 702
	Vector2D::operator*(
			float fl);  // 1419
	Vector2D::Vector2D(); // 687
	Vector2DAdd(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 688
	Vector2D::operator+(
			const Vector2D& v);  // 1420
	Vector2D::Vector2D(); // 694
	Vector2DSubtract(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 695
	Vector2D::operator-(
			const Vector2D& v);  // 1421
} /* size: 262, variables: 9, inline expansions: 20 (209 bytes) */

// <05CE7DE4> meshutils/uvparamlscm.cpp:1450
void GenerateUVsForTianglesLSCM(const int nNumVertices, const Vector* pVertexPositions, const int nNumTriangles, const uint32* pTriangleVertexIndices, CUtlVector<VertexLockFlags_t, CUtlMemory<VertexLockFlags_t, int> >* pOutVertexLockFlags, CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >* pOutVertexUVs)
{
} /* size: 0 */

// <05CE6E92> meshutils/uvparamlscm.cpp:1474
// variables: 4
// function calls: 57
void GenerateUVsForTrianglesSquare(const int nNumVertices, const Vector* pVertexPositions, const int nNumTriangles, const uint32* pTriangleVertexIndices, const uint32* pTriangleFaceIds, const AlignEdgeUV_t nEdgeAlignMode, const int nAlignEdgeVertexIndexA, const int nAlignEdgeVertexIndexB, const Vector2D* pInitialVertexUVs, const VertexLockFlags_t* pInitialVertexLockFlags, CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >* pOutVertexUVs)
{
	CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> > boundaryLoop; // 1492
	CUtlVector<VertexLockFlags_t, CUtlMemory<VertexLockFlags_t, int> > boundaryVertexLockFlags; // 1495
	{
		CUtlVector<bool, CUtlMemory<bool, int> > triangleEdgesAreMeshEdges; // 1511
		CUtlMemory<bool, int>::ValidateGrowSize(); // 475
		CUtlMemory<bool, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<bool, CUtlMemory<bool, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<bool, CUtlMemory<bool, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<bool, CUtlMemory<bool, int> >::CUtlVector(); // 1511
		CUtlMemory<Vector2D, int>::Base(); // 112
		CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Base(); // 1515
		CUtlMemory<bool, int>::Purge(); // 903
		CUtlMemory<bool, int>::Purge(); // 1799
		CUtlVectorBase<bool, CUtlMemory<bool, int> >::Purge(); // 560
		ValidateAlignment<bool>(void); // 508
		CUtlMemory<bool, int>::Purge(); // 510
		CUtlMemory<bool, int>::~CUtlMemory(); // 562
		CUtlVectorBase<bool, CUtlMemory<bool, int> >::~CUtlVectorBase(); // 410
		CUtlVector<bool, CUtlMemory<bool, int> >::~CUtlVector(); // 1529
		CUtlMemory<Vector2D, int>::Base(); // 112
		CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Base(); // 1519
		CUtlMemory<Vector2D, int>::Base(); // 112
		CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Base(); // 1524
		CUtlMemory<Vector2D, int>::Base(); // 112
		CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Base(); // 1526
	}
	CUtlMemory<Vector2D, int>::Base(); // 112
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Base(); // 102
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::begin(); // 1344
	Vector2D::operator=(
			const Vector2D& vOther);  // 209
	UtlTraitsCopyRange<Vector2D>(const Vector2D* pFrom,
					const Vector2D* pFromEnd,
					Vector2D* pTo);  // 200
	UtlTraitsCopyRange<Vector2D>(const Vector2D* pFrom,
					const Vector2D* pFromEnd,
					Vector2D* pTo);  // 1344
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::CopyArray(
			const Vector2D* pArray,
			int size);  // 1488
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::RemoveAll(); // 1487
	CUtlMemory<BoundaryLoopVertex_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<BoundaryLoopVertex_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::CUtlVector(); // 1492
	CUtlVectorBase<VertexLockFlags_t, CUtlMemory<VertexLockFlags_t, int> >::ResetDbgInfo(); // 530
	CUtlMemory<VertexLockFlags_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VertexLockFlags_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VertexLockFlags_t, CUtlMemory<VertexLockFlags_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VertexLockFlags_t, CUtlMemory<VertexLockFlags_t, int> >::CUtlVector(); // 1495
	{
		int i; // 1554
	}
	CUtlVectorBase<VertexLockFlags_t, CUtlMemory<VertexLockFlags_t, int> >::FillWithValue(
			const VertexLockFlags_t& src);  // 1497
	CUtlMemory<Vector2D, int>::Base(); // 112
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Base(); // 1499
	CUtlMemory<Vector2D, int>::Base(); // 112
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Base(); // 1505
	CUtlMemory<VertexLockFlags_t, int>::Purge(); // 903
	CUtlMemory<VertexLockFlags_t, int>::Purge(); // 1799
	CUtlVectorBase<VertexLockFlags_t, CUtlMemory<VertexLockFlags_t, int> >::Purge(); // 560
	ValidateAlignment<VertexLockFlags_t>(void); // 508
	CUtlMemory<VertexLockFlags_t, int>::Purge(); // 510
	CUtlMemory<VertexLockFlags_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VertexLockFlags_t, CUtlMemory<VertexLockFlags_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VertexLockFlags_t, CUtlMemory<VertexLockFlags_t, int> >::~CUtlVector(); // 1530
	CUtlMemory<BoundaryLoopVertex_t, int>::Purge(); // 903
	CUtlMemory<BoundaryLoopVertex_t, int>::Purge(); // 1799
	CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::Purge(); // 560
	CUtlVectorBase<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >::~CUtlVector(); // 1530
} /* size: 857, variables: 2, inline expansions: 36 (769 bytes) */

