
//
// meshutils/triangulatepolygon.cpp
//
//	referenced by: libengine2.so
//
//	functions: 85
//	structs: 3
//

// <05CB4699> meshutils/triangulatepolygon.cpp:178
// variables: 10
// function calls: 5
float PolgyonArea(const CUtlVector<Vector, CUtlMemory<Vector, int> >& polyPoints, Vector vNormal)
{
	float area; // 180
	float an; // 181
	float ax; // 181
	float ay; // 181
	float az; // 181
	int coord; // 182
	int i; // 183
	int j; // 183
	int k; // 183
	int nPoints; // 197
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 197
	CUtlMemory<Vector, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 201
	CUtlMemory<Vector, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 201
} /* size: 0, variables: 10, inline expansions: 5 (0 bytes) */

// <05CB3E11> meshutils/triangulatepolygon.cpp:232
// variables: 9
// function calls: 33
bool InsideTriangle(const Vector& a, const Vector& b, const Vector& c, const Vector& p, const Vector& vNormal)
{
	const float  MAX_EDGE_DIST_SQ; // 239
	Vector bc; // 241
	Vector ca; // 242
	Vector ab; // 243
	Vector ap; // 244
	Vector bp; // 245
	Vector cp; // 246
	float flDistSQ; // 256
	float flParam; // 256
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 249
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 244
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 241
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 245
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 249
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 242
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 243
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 246
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 249
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 249
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 249
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 249
} /* size: 799, variables: 9, inline expansions: 33 (934 bytes) */

// <05CB30BD> meshutils/triangulatepolygon.cpp:275
// variables: 26
// function calls: 48
bool TrySnip(const Vector* polygonVerts, int nCornerTriVert, const int* pVertIndicies, int nNumVertIndices, const Vector& vNormal, float* pOutTriangleFitness)
{
	int a; // 279
	int b; // 280
	int c; // 281
	Vector vA; // 283
	Vector vB; // 284
	Vector vC; // 285
	Vector vAB; // 287
	Vector vAC; // 288
	float flArea; // 289
	Vector vBC; // 335
	float flCosAngleA; // 340
	float flCosAngleB; // 341
	float flCosAngleC; // 342
	float flSmallerIsBetter; // 345
	float flEquilateralIsBetter; // 348
	{
		int i; // 296
		Vector::operator!=(
				const Vector& src);  // 302
		Vector::operator!=(
				const Vector& src);  // 303
		Vector::operator!=(
				const Vector& src);  // 304
	}
	{
		int d; // 316
		Vector vD; // 317
		Vector vDB; // 318
		Vector vDC; // 319
		float flAreaNext; // 320
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 319
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 318
		DotProduct(const Vector& a,
				const Vector& b);  // 1167
		Vector::Dot(
			const Vector& vOther);  // 320
		Vector::Vector(); // 1487
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 1488
		Vector::Cross(
			const Vector& vOther);  // 320
	}
	{
		int d; // 326
		Vector vD; // 327
		Vector vDA; // 328
		Vector vDB; // 329
		float flAreaPrev; // 330
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 328
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 329
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 1488
		Vector::Vector(); // 1487
		Vector::Cross(
			const Vector& vOther);  // 330
		DotProduct(const Vector& a,
				const Vector& b);  // 1167
		Vector::Dot(
			const Vector& vOther);  // 330
	}
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 287
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 288
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 289
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 289
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 335
	Vector::NormalizeInPlace(); // 336
	Vector::NormalizeInPlace(); // 337
	Vector::NormalizeInPlace(); // 338
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 340
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 341
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 342
} /* size: 1562, variables: 15, inline expansions: 23 (584 bytes) */

// <05CB2D92> meshutils/triangulatepolygon.cpp:357
// variables: 6
// function calls: 11
bool PolygonIsConcave(const Vector* pPolygonVerts, int nNumVerts, const Vector& vNormal)
{
	bool bPositive; // 359
	{
		int i; // 361
		{
			Vector v1; // 363
			Vector v2; // 364
			Vector v3; // 365
			float flDot; // 366
			DotProduct(const Vector& a,
					const Vector& b);  // 1167
			Vector::Dot(
				const Vector& vOther);  // 366
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 366
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 366
			Vector::Vector(); // 1487
			CrossProduct(const Vector& a,
					const Vector& b,
					Vector& result);  // 1488
			Vector::Cross(
				const Vector& vOther);  // 366
		}
	}
} /* size: 0, variables: 1 */

// <05CB1F85> meshutils/triangulatepolygon.cpp:496
// function calls: 30
void CTriangulatedPolygon::CTriangulatedPolygon()
{
	CUtlMemory<Vector, int>::CUtlMemory(
			Vector* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<Vector, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<Vector, int>::CUtlMemoryFixedGrowable_Base(
					Vector* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	{
	}
	AlignedByteArrayExplicit_t<16, Vector, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<16, Vector>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<16, Vector, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<Vector, 16, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<Vector, 16>::CUtlVectorFixedGrowable(
				int growSize);  // 500
	{
	}
	AlignedByteArrayExplicit_t<16, Vector2D, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<16, Vector2D>::AlignedByteArray_t(); // 228
	CUtlMemory<Vector2D, int>::CUtlMemory(
			Vector2D* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<Vector2D, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<Vector2D, int>::CUtlMemoryFixedGrowable_Base(
					Vector2D* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<16, Vector2D, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<Vector2D, 16, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<Vector2D, 16>::CUtlVectorFixedGrowable(
				int growSize);  // 500
	{
	}
	AlignedByteArrayExplicit_t<45, int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<45, int>::AlignedByteArray_t(); // 228
	CUtlMemory<int, int>::CUtlMemory(
			int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<int, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<int, int>::CUtlMemoryFixedGrowable_Base(
					int* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<45, int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<int, 45, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<int, 45>::CUtlVectorFixedGrowable(
				int growSize);  // 500
} /* size: 0, inline expansions: 30 (0 bytes) */

// <05CB1F68> meshutils/triangulatepolygon.cpp:496
void CTriangulatedPolygon::CTriangulatedPolygon()
{
} /* size: 0 */

// <05CB17CC> meshutils/triangulatepolygon.cpp:509
// function calls: 30
void CTriangulatedPolygon::CTriangulatedPolygon(const Vector* pPositions, const Vector2D* pTexcoords, int nNumVertices)
{
	{
	}
	AlignedByteArrayExplicit_t<16, Vector, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<16, Vector>::AlignedByteArray_t(); // 228
	CUtlMemory<Vector, int>::CUtlMemory(
			Vector* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<Vector, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<Vector, int>::CUtlMemoryFixedGrowable_Base(
					Vector* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<16, Vector, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<Vector, 16, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<Vector, 16>::CUtlVectorFixedGrowable(
				int growSize);  // 513
	{
	}
	AlignedByteArrayExplicit_t<16, Vector2D, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<16, Vector2D>::AlignedByteArray_t(); // 228
	CUtlMemory<Vector2D, int>::CUtlMemory(
			Vector2D* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<Vector2D, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<Vector2D, int>::CUtlMemoryFixedGrowable_Base(
					Vector2D* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<16, Vector2D, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<Vector2D, 16, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<Vector2D, 16>::CUtlVectorFixedGrowable(
				int growSize);  // 513
	{
	}
	AlignedByteArrayExplicit_t<45, int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<45, int>::AlignedByteArray_t(); // 228
	CUtlMemory<int, int>::CUtlMemory(
			int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<int, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<int, int>::CUtlMemoryFixedGrowable_Base(
					int* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<45, int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<int, 45, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<int, 45>::CUtlVectorFixedGrowable(
				int growSize);  // 513
} /* size: 384, inline expansions: 30 (1141 bytes) */

// <05CB1788> meshutils/triangulatepolygon.cpp:509
void CTriangulatedPolygon::CTriangulatedPolygon(const Vector* pPositions, const Vector2D* pTexcoords, int nNumVertices)
{
} /* size: 0 */

// <05CB0F63> meshutils/triangulatepolygon.cpp:522
// function calls: 33
void CTriangulatedPolygon::CTriangulatedPolygon(const CTriangulatedPolygon& src)
{
	Vector::Vector(); // 522
	Vector::Vector(); // 522
	Vector::Vector(); // 522
	CUtlMemory<Vector, int>::CUtlMemory(
			Vector* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<Vector, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<Vector, int>::CUtlMemoryFixedGrowable_Base(
					Vector* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	{
	}
	AlignedByteArrayExplicit_t<16, Vector, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<16, Vector>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<16, Vector, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<Vector, 16, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<Vector, 16>::CUtlVectorFixedGrowable(
				int growSize);  // 522
	{
	}
	AlignedByteArrayExplicit_t<16, Vector2D, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<16, Vector2D>::AlignedByteArray_t(); // 228
	CUtlMemory<Vector2D, int>::CUtlMemory(
			Vector2D* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<Vector2D, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<Vector2D, int>::CUtlMemoryFixedGrowable_Base(
					Vector2D* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<16, Vector2D, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<Vector2D, 16, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<Vector2D, 16>::CUtlVectorFixedGrowable(
				int growSize);  // 522
	{
	}
	AlignedByteArrayExplicit_t<45, int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<45, int>::AlignedByteArray_t(); // 228
	CUtlMemory<int, int>::CUtlMemory(
			int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<int, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<int, int>::CUtlMemoryFixedGrowable_Base(
					int* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<45, int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<int, 45, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<int, 45>::CUtlVectorFixedGrowable(
				int growSize);  // 522
} /* size: 0, inline expansions: 33 (0 bytes) */

// <05CB0F39> meshutils/triangulatepolygon.cpp:522
void CTriangulatedPolygon::CTriangulatedPolygon(const CTriangulatedPolygon& src)
{
} /* size: 0 */

// <05CAFFD0> meshutils/triangulatepolygon.cpp:530
// variables: 2
// function calls: 68
void CTriangulatedPolygon::operator=(const CTriangulatedPolygon& src)
{
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Count(); // 573
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<Vector, int>::NumAllocated(); // 782
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Base(); // 368
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
	}
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::SetCount(
		int count);  // 573
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Base(); // 102
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::begin(); // 574
	CUtlMemory<Vector, int>::Base(); // 113
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Base(); // 105
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Count(); // 105
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::end(); // 574
	Vector::operator=(
			const Vector& vOther);  // 209
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 200
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 574
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::operator=(
			const CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >& other);  // 565
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::operator=(
			const CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >& other);  // 478
	CUtlVectorFixedGrowable<Vector, 16>::operator=(
			const CUtlVectorFixedGrowable<Vector, 16>  &);  // 536
	Vector::operator=(
			const Vector& vOther);  // 533
	Vector::operator=(
			const Vector& vOther);  // 534
	Vector::operator=(
			const Vector& vOther);  // 535
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::Count(); // 573
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<Vector2D, int>::NumAllocated(); // 782
	CUtlMemory<Vector2D, int>::Base(); // 112
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::Base(); // 368
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
	}
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::SetCount(
		int count);  // 573
	CUtlMemory<Vector2D, int>::Base(); // 112
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::Base(); // 102
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::begin(); // 574
	CUtlMemory<Vector2D, int>::Base(); // 113
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::Base(); // 105
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::Count(); // 105
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::end(); // 574
	Vector2D::operator=(
			const Vector2D& vOther);  // 209
	UtlTraitsCopyRange<Vector2D>(const Vector2D* pFrom,
					const Vector2D* pFromEnd,
					Vector2D* pTo);  // 200
	UtlTraitsCopyRange<Vector2D>(const Vector2D* pFrom,
					const Vector2D* pFromEnd,
					Vector2D* pTo);  // 574
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::operator=(
			const CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >& other);  // 565
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::operator=(
			const CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >& other);  // 478
	CUtlVectorFixedGrowable<Vector2D, 16>::operator=(
			const CUtlVectorFixedGrowable<Vector2D, 16>  &);  // 537
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::Count(); // 573
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::Base(); // 102
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::begin(); // 574
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::Base(); // 105
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::Count(); // 105
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<int>(const int* pFrom,
				const int* pFromEnd,
				int* pTo);  // 173
	UtlTraitsCopyRange<int>(const int* pFrom,
				const int* pFromEnd,
				int* pTo);  // 574
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::operator=(
			const CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >& other);  // 565
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::operator=(
			const CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >& other);  // 478
	CUtlVectorFixedGrowable<int, 45>::operator=(
			const CUtlVectorFixedGrowable<int, 45>  &);  // 538
} /* size: 0, inline expansions: 68 (0 bytes) */

// <05CAF851> meshutils/triangulatepolygon.cpp:547
// variables: 4
// function calls: 27
void CTriangulatedPolygon::ConstructPolygon(const Vector* pPositions, const Vector2D* pTexcoords, int nNumVertices)
{
	const char   __FUNCTION__; // 38887
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 549
	}
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::RemoveAll(); // 550
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::RemoveAll(); // 551
	CUtlMemory<Vector, int>::NumAllocated(); // 782
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Base(); // 368
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::GrowVector(
			int num);  // 1484
	{
		int i; // 1500
		CUtlMemory<Vector, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
			int i);  // 1502
		CopyConstruct<Vector>(Vector* pMemory,
					const Vector& src);  // 1502
	}
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::InsertMultipleBefore(
				int elem,
				int num,
				const Vector* pToInsert);  // 1476
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::InsertMultipleBefore(
				int elem,
				int num,
				const Vector* pToInsert);  // 1303
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::AddMultipleToTail(
				int num,
				const Vector* pToCopy);  // 554
	CUtlMemory<Vector2D, int>::NumAllocated(); // 782
	CUtlMemory<Vector2D, int>::Base(); // 112
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::Base(); // 368
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::GrowVector(
			int num);  // 1484
	{
		int i; // 1500
		CUtlMemory<Vector2D, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::Element(
			int i);  // 1502
		Vector2D::Vector2D(
			const Vector2D& vOther);  // 1520
		CopyConstruct<Vector2D>(Vector2D* pMemory,
					const Vector2D& src);  // 1502
	}
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::InsertMultipleBefore(
				int elem,
				int num,
				const Vector2D* pToInsert);  // 1476
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::InsertMultipleBefore(
				int elem,
				int num,
				const Vector2D* pToInsert);  // 1303
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::AddMultipleToTail(
				int num,
				const Vector2D* pToCopy);  // 559
} /* size: 0, variables: 1, inline expansions: 20 (1002 bytes) */

// <05CAF36C> meshutils/triangulatepolygon.cpp:569
// variables: 4
// function calls: 17
void CTriangulatedPolygon::ConstructPolygon2D(const Vector2D* pPositions, int nNumVertices)
{
	const char   __FUNCTION__; // 36968
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 571
	}
	{
		int iVertex; // 576
		CUtlMemory<Vector, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::operator[](
				int i);  // 578
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 578
		Vector::operator=(
				const Vector& vOther);  // 578
	}
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::RemoveAll(); // 572
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::RemoveAll(); // 573
	CUtlMemory<Vector, int>::NumAllocated(); // 782
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Base(); // 368
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
	}
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::SetCount(
		int count);  // 575
} /* size: 0, variables: 1, inline expansions: 13 (0 bytes) */

// <05CAEE3C> meshutils/triangulatepolygon.cpp:587
// variables: 4
// function calls: 19
void CTriangulatedPolygon::InitializeAndTriangluatePolygon()
{
	const int  nNumVertices; // 589
	float flPlaneDist; // 603
	int nNumTriangleIndices; // 607
	{
		int iVert; // 596
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1414
		Vector::Min(
			const Vector& vOther);  // 598
		Vector::operator=(
				const Vector& vOther);  // 598
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1421
		Vector::Max(
			const Vector& vOther);  // 599
		Vector::operator=(
				const Vector& vOther);  // 599
	}
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Count(); // 589
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::RemoveAll(); // 590
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 594
	Vector::operator=(
			const Vector& vOther);  // 594
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 595
	Vector::operator=(
			const Vector& vOther);  // 595
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Base(); // 604
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::Count(); // 607
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::Base(); // 607
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Base(); // 607
} /* size: 351, variables: 3, inline expansions: 13 (46 bytes) */

// <05CAE7E3> meshutils/triangulatepolygon.cpp:619
// variables: 8
// function calls: 23
void CTriangulatedPolygon::IsPointInPolygon(const Vector& vPoint)
{
	int nNumIndicies; // 625
	{
		int iIndex; // 626
		{
			const Vector& vA; // 628
			const Vector& vB; // 629
			const Vector& vC; // 630
			Vector vAB; // 632
			Vector vAC; // 633
			Vector vTriangleNormal; // 634
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::operator[](
					int i);  // 628
			CUtlMemory<Vector, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::operator[](
					int i);  // 628
			Vector::Normalized(); // 634
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::operator[](
					int i);  // 629
			CUtlMemory<Vector, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::operator[](
					int i);  // 629
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 632
			CUtlMemory<Vector, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::operator[](
					int i);  // 630
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::operator[](
					int i);  // 630
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 633
			Vector::Vector(); // 1487
			CrossProduct(const Vector& a,
					const Vector& b,
					Vector& result);  // 1488
			Vector::Cross(
				const Vector& vOther);  // 634
		}
	}
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::Count(); // 625
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <05CAE38D> meshutils/triangulatepolygon.cpp:650
// variables: 3
// function calls: 16
void CTriangulatedPolygon::IsPointInPolygon(const Vector& vPoint, float flNormalTolerance)
{
	{
		Vector vPolyToPoint; // 655
		float flProj; // 656
		Vector vTestPoint; // 658
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::operator[](
				int i);  // 655
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 655
		DotProduct(const Vector& a,
				const Vector& b);  // 1167
		Vector::Dot(
			const Vector& vOther);  // 656
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 657
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 658
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 658
	}
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::Count(); // 653
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05CAD762> meshutils/triangulatepolygon.cpp:669
// variables: 10
// function calls: 50
void CTriangulatedPolygon::IntersectLineSegment(const Vector& vSegmentPointA, const Vector& vSegmentPointB, Vector* pOutIntersection)
{
	int nNumIndicies; // 676
	{
		int iIndex; // 677
		{
			const Vector& vA; // 679
			const Vector& vB; // 680
			const Vector& vC; // 681
			Vector vAB; // 683
			Vector vAC; // 684
			Vector vTriangleNormal; // 685
			VPlane vTrianglePlane; // 687
			Vector vIntersection; // 690
			Vector::operator=(
					const Vector& vOther);  // 251
			DotProduct(const Vector& a,
					const Vector& b);  // 1167
			Vector::Dot(
				const Vector& vOther);  // 119
			VPlane::DistTo(
				const Vector& vVec);  // 233
			DotProduct(const Vector& a,
					const Vector& b);  // 1167
			Vector::Dot(
				const Vector& vOther);  // 119
			VPlane::DistTo(
				const Vector& vVec);  // 234
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 251
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 251
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 251
			VPlane::IntersectLineSegment(
						const Vector& vStart,
						const Vector& vEnd,
						Vector& vIntersection);  // 691
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::operator[](
					int i);  // 679
			CUtlMemory<Vector, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::operator[](
					int i);  // 679
			CUtlMemory<Vector, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::operator[](
					int i);  // 680
			CUtlMemory<Vector, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::operator[](
					int i);  // 681
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::operator[](
					int i);  // 680
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 683
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::operator[](
					int i);  // 681
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 684
			Vector::Normalized(); // 685
			CrossProduct(const Vector& a,
					const Vector& b,
					Vector& result);  // 1488
			Vector::Vector(); // 1487
			Vector::Cross(
				const Vector& vOther);  // 685
			Vector::NormalizeInPlace(); // 113
			Vector::operator=(
					const Vector& vOther);  // 112
			DotProduct(const Vector& a,
					const Vector& b);  // 1167
			Vector::Dot(
				const Vector& vOther);  // 114
			VPlane::InitFromPointAndNormal(
						const Vector& vPos,
						const Vector& vNormal);  // 688
			Vector::Vector(); // 89
			VPlane::VPlane(); // 687
			Vector::Vector(); // 690
			Vector::operator=(
					const Vector& vOther);  // 697
		}
	}
	Vector::operator=(
			const Vector& vOther);  // 673
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::Count(); // 676
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <05CAC719> meshutils/triangulatepolygon.cpp:713
// variables: 20
// function calls: 65
void CTriangulatedPolygon::ComputeTextureCoordinateForPoint(const Vector& vPoint)
{
	int nNumIndicies; // 733
	Vector bestPositions; // 754
	Vector2D bestTexCoords; // 755
	Vector vTextureAxisU; // 758
	Vector vTextureAxisV; // 759
	Vector vToPoint; // 762
	float u; // 763
	float v; // 764
	{
		Vector2D vBarycentricCoord; // 722
		{
			Vector2D vTexCoord; // 725
			Vector2D::Vector2D(
				const Vector2D& vOther);  // 725
			CUtlMemory<Vector2D, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::operator[](
					int i);  // 726
			CUtlMemory<Vector2D, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::operator[](
					int i);  // 726
			CUtlMemory<Vector2D, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::operator[](
					int i);  // 726
			Vector2D::Vector2D(
				const Vector2D& vOther);  // 727
		}
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::operator[](
				int i);  // 723
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::operator[](
				int i);  // 723
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::operator[](
				int i);  // 723
		Vector2D::Vector2D(); // 722
	}
	{
		int iIndex; // 734
		{
			const Vector& vA; // 736
			const Vector& vB; // 737
			const Vector& vC; // 738
			const Vector2D& vTexA; // 739
			const Vector2D& vTexB; // 740
			const Vector2D& vTexC; // 741
			float cA; // 743
			float cB; // 743
			float cC; // 743
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::operator[](
					int i);  // 736
			CUtlMemory<Vector, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::operator[](
					int i);  // 736
			CUtlMemory<Vector2D, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::operator[](
					int i);  // 739
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::operator[](
					int i);  // 737
			CUtlMemory<Vector, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::operator[](
					int i);  // 737
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::operator[](
					int i);  // 738
			CUtlMemory<Vector, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::operator[](
					int i);  // 738
			CUtlMemory<Vector2D, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::operator[](
					int i);  // 740
			CUtlMemory<Vector2D, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::operator[](
					int i);  // 741
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::Vector2D(); // 701
			Vector2D::operator*(
					float fl);  // 746
			Vector2D::Vector2D(); // 701
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::operator*(
					float fl);  // 746
			Vector2D::Vector2D(); // 701
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::operator*(
					float fl);  // 746
			Vector2D::Vector2D(); // 687
			Vector2DAdd(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 688
			Vector2D::operator+(
					const Vector2D& v);  // 746
			Vector2D::Vector2D(); // 687
			Vector2DAdd(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 688
			Vector2D::operator+(
					const Vector2D& v);  // 746
		}
	}
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Count(); // 715
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 716
	CUtlMemory<Vector, int>::Base(); // 113
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Base(); // 1009
	CTriangulatedPolygon::IsConvex(); // 720
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::Count(); // 733
	CUtlMemory<Vector, int>::Base(); // 113
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Base(); // 756
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Count(); // 756
	CUtlMemory<Vector2D, int>::Base(); // 113
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::Base(); // 756
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 762
	DotProduct(const Vector& a,
			const Vector& b);  // 763
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 766
	DotProduct(const Vector& a,
			const Vector& b);  // 764
} /* size: 0, variables: 8, inline expansions: 17 (0 bytes) */

// <05CAC428> meshutils/triangulatepolygon.cpp:773
// variables: 3
// function calls: 10
Vector ComputeTriangleNormal(const Vector& vPositionA, const Vector& vPositionB, const Vector& vPositionC)
{
	Vector vAB; // 775
	Vector vAC; // 776
	Vector vNormal; // 777
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 775
	Vector::Normalized(); // 777
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 776
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 777
} /* size: 0, variables: 3, inline expansions: 10 (0 bytes) */

// <05CABD54> meshutils/triangulatepolygon.cpp:786
// variables: 9
// function calls: 27
int ClipTriangle(const Vector* pVerts, const TriangleVertexBarycentric_t* pBarycentricVerts, const Vector4D& vClipPlane, Vector* pClippedVerts, TriangleVertexBarycentric_t* pClippedBarycentricVerts)
{
	int nNumVerts; // 788
	const Vector  vPlaneNormal; // 789
	{
		int vA; // 791
		int vB; // 791
		{
			const Vector& vPos1; // 793
			const Vector& vPos2; // 794
			float flDot1; // 796
			float flDot2; // 797
			{
				float flLerp; // 815
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 262
				Vector::Vector(); // 1450
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 262
				Vector::Vector(); // 1436
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::operator+(
						const Vector& v);  // 262
				Lerp<Vector>(float flPercent,
						const Vector& A,
						const Vector& B);  // 816
				Vector::operator=(
						const Vector& vOther);  // 816
				Vector::Vector(); // 1443
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::operator-(
						const Vector& v);  // 262
				Vector::Vector(); // 1450
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 262
				Vector::Vector(); // 1436
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::operator+(
						const Vector& v);  // 262
				Lerp<Vector>(float flPercent,
						const Vector& A,
						const Vector& B);  // 824
				Vector::operator=(
						const Vector& vOther);  // 824
			}
			DotProduct(const Vector& a,
					const Vector& b);  // 796
			DotProduct(const Vector& a,
					const Vector& b);  // 797
			Vector::operator=(
					const Vector& vOther);  // 803
			Vector::operator=(
					const Vector& vOther);  // 39
			TriangleVertexBarycentric_t::operator=(
					const TriangleVertexBarycentric_t  &);  // 806
		}
	}
} /* size: 0, variables: 2 */

// <05CAA3E1> meshutils/triangulatepolygon.cpp:839
// variables: 18
// function calls: 104
void ClipTrianglesByPlane(const VPlane& plane, CUtlVector<Vector, CUtlMemory<Vector, int> >* pInOutTriangleVertices, CUtlVector<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >* pInOutBarycentricVertices)
{
	const CUtlVector<Vector, CUtlMemory<Vector, int> >& triangleVertices; // 841
	const TriangleVertexBarycentric_t* pBarycentricVertices; // 843
	const int  nHasBarycentricVerts; // 844
	Vector4D vClipPlane; // 846
	Vector clippedVertices; // 849
	TriangleVertexBarycentric_t clippedBarycentricVertices; // 850
	const int  nNumVertices; // 852
	CUtlVector<Vector, CUtlMemory<Vector, int> > resultTriangleVertices; // 853
	CUtlVector<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> > resultTriangleBarycentricVertices; // 854
	const char   __FUNCTION__; // 28667
	{
		int iVertex; // 856
		{
			const TriangleVertexBarycentric_t* pTriangleBarycentricVertices; // 858
			int nNumClippedVertices; // 859
			const int  nNumClippedTriangles; // 861
			{
				int i; // 862
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
						int num);  // 1198
				CopyConstruct<Vector>(Vector* pMemory,
							const Vector& src);  // 1201
				CUtlMemory<Vector, int>::operator[](
						int i);  // 602
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
					int i);  // 1201
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
						const Vector& src);  // 864
				CUtlMemory<Vector, int>::operator[](
						int i);  // 602
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
					int i);  // 1201
				CopyConstruct<Vector>(Vector* pMemory,
							const Vector& src);  // 1201
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
						const Vector& src);  // 865
				CopyConstruct<Vector>(Vector* pMemory,
							const Vector& src);  // 1201
				CUtlMemory<Vector, int>::operator[](
						int i);  // 602
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
					int i);  // 1201
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
						const Vector& src);  // 866
			}
			{
				int i; // 871
				CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::GrowMemory(
						int num);  // 1198
				CopyConstruct<TriangleVertexBarycentric_t>(TriangleVertexBarycentric_t* pMemory,
										const TriangleVertexBarycentric_t& src);  // 1201
				CUtlMemory<TriangleVertexBarycentric_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::Element(
					int i);  // 1201
				CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::AddToTail(
						const TriangleVertexBarycentric_t& src);  // 873
				CopyConstruct<TriangleVertexBarycentric_t>(TriangleVertexBarycentric_t* pMemory,
										const TriangleVertexBarycentric_t& src);  // 1201
				CUtlMemory<TriangleVertexBarycentric_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::Element(
					int i);  // 1201
				CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::AddToTail(
						const TriangleVertexBarycentric_t& src);  // 874
				CopyConstruct<TriangleVertexBarycentric_t>(TriangleVertexBarycentric_t* pMemory,
										const TriangleVertexBarycentric_t& src);  // 1201
				CUtlMemory<TriangleVertexBarycentric_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::Element(
					int i);  // 1201
				CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::AddToTail(
						const TriangleVertexBarycentric_t& src);  // 875
			}
			CUtlMemory<Vector, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 859
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 885
	}
	CUtlMemory<TriangleVertexBarycentric_t, int>::Base(); // 112
	CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::Base(); // 843
	Vector4D::Vector4D(); // 846
	Vector::operator=(
			const Vector& vOther);  // 159
	VPlane::ConvertToPlaneEquation(
				Vector4D& vOut);  // 847
	TriangleVertexBarycentric_t::TriangleVertexBarycentric_t(); // 850
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 852
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 853
	CUtlMemory<TriangleVertexBarycentric_t, int>::Base(); // 112
	CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::Base(); // 102
	CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::begin(); // 574
	CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::end(); // 574
	Vector::operator=(
			const Vector& vOther);  // 39
	TriangleVertexBarycentric_t::operator=(
			const TriangleVertexBarycentric_t  &);  // 209
	UtlTraitsCopyRange<TriangleVertexBarycentric_t>(const TriangleVertexBarycentric_t* pFrom,
							const TriangleVertexBarycentric_t* pFromEnd,
							TriangleVertexBarycentric_t* pTo);  // 200
	UtlTraitsCopyRange<TriangleVertexBarycentric_t>(const TriangleVertexBarycentric_t* pFrom,
							const TriangleVertexBarycentric_t* pFromEnd,
							TriangleVertexBarycentric_t* pTo);  // 574
	CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::operator=(
			const CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >& other);  // 565
	CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::operator=(
			const CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >& other);  // 452
	CUtlVector<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::operator=(
			const CUtlVector<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >& src);  // 884
	CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::Count(); // 885
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 885
	CUtlMemory<TriangleVertexBarycentric_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<TriangleVertexBarycentric_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<TriangleVertexBarycentric_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 854
	CUtlMemory<Vector, int>::NumAllocated(); // 782
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
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
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::SetCount(
		int count);  // 573
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 102
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::begin(); // 574
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::end(); // 574
	Vector::operator=(
			const Vector& vOther);  // 209
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 200
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 574
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 565
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 452
	CUtlVector<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVector<Vector, CUtlMemory<Vector, int> >& src);  // 880
	CUtlMemory<TriangleVertexBarycentric_t, int>::Purge(); // 903
	CUtlMemory<TriangleVertexBarycentric_t, int>::Purge(); // 1799
	CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::Purge(); // 560
	ValidateAlignment<TriangleVertexBarycentric_t>(void); // 508
	CUtlMemory<TriangleVertexBarycentric_t, int>::Purge(); // 510
	CUtlMemory<TriangleVertexBarycentric_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::~CUtlVector(); // 887
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 887
} /* size: 0, variables: 10, inline expansions: 66 (0 bytes) */

// <05CA7944> meshutils/triangulatepolygon.cpp:892
// variables: 24
// function calls: 186
void ClipTrianglesToConvexPolygonProjection(const Vector* pVertices, int nNumVertices, const Vector& vProjectionNormal, float flProjectionDistance, bool bCullBackfaces, const CUtlVector<Vector, CUtlMemory<Vector, int> >& triangleVertices, CUtlVector<Vector, CUtlMemory<Vector, int> >* pOutClippedTriangleVertices, CUtlVector<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >* pOutClippedBarycentricTriangleVertices)
{
	const float  flEpsilon; // 894
	CUtlVector<Vector, CUtlMemory<Vector, int> > clippedTriangleVertices; // 896
	CUtlVector<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> > clippedBarycentricVertices; // 897
	CUtlVector<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >* pClippedBarycentricVertices; // 898
	{
		const int  nNumTriangles; // 902
		const Vector* pVerts; // 903
		{
			int iTriangle; // 906
			{
				const int  nVertex; // 908
				Vector vTriangleNormal; // 909
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
						int num);  // 784
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowVector(
						int num);  // 1484
				{
					int i; // 1500
					CopyConstruct<Vector>(Vector* pMemory,
								const Vector& src);  // 1502
				}
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::InsertMultipleBefore(
							int elem,
							int num,
							const Vector* pToInsert);  // 1476
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::InsertMultipleBefore(
							int elem,
							int num,
							const Vector* pToInsert);  // 1303
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddMultipleToTail(
							int num,
							const Vector* pToCopy);  // 912
				Construct<TriangleVertexBarycentric_t, TriangleVertexBarycentric_t>(TriangleVertexBarycentric_t* pMemory); // 1252
				CUtlMemory<TriangleVertexBarycentric_t, int>::NumAllocated(); // 1247
				CUtlMemory<TriangleVertexBarycentric_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::Element(
					int i);  // 1252
				CUtlMemory<TriangleVertexBarycentric_t, int>::Base(); // 112
				CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::Base(); // 368
				CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::GrowMemory(
						int num);  // 1249
				CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::AddToTail(
						TriangleVertexBarycentric_t& src);  // 918
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 1431
				Vector::operator-(); // 910
				DotProduct(const Vector& a,
						const Vector& b);  // 1167
				Vector::Dot(
					const Vector& vOther);  // 910
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 916
				TriangleVertexBarycentric_t::TriangleVertexBarycentric_t(
								int nTriangleIndex,
								const Vector& vCoord);  // 916
				CUtlMemory<TriangleVertexBarycentric_t, int>::NumAllocated(); // 1247
				CUtlMemory<TriangleVertexBarycentric_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::Element(
					int i);  // 1252
				Construct<TriangleVertexBarycentric_t, TriangleVertexBarycentric_t>(TriangleVertexBarycentric_t* pMemory); // 1252
				CUtlMemory<TriangleVertexBarycentric_t, int>::Base(); // 112
				CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::Base(); // 368
				CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::GrowMemory(
						int num);  // 1249
				CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::AddToTail(
						TriangleVertexBarycentric_t& src);  // 916
				CUtlMemory<TriangleVertexBarycentric_t, int>::NumAllocated(); // 1247
				Construct<TriangleVertexBarycentric_t, TriangleVertexBarycentric_t>(TriangleVertexBarycentric_t* pMemory); // 1252
				CUtlMemory<TriangleVertexBarycentric_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::Element(
					int i);  // 1252
				CUtlMemory<TriangleVertexBarycentric_t, int>::Base(); // 112
				CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::Base(); // 368
				CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::GrowMemory(
						int num);  // 1249
				CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::AddToTail(
						TriangleVertexBarycentric_t& src);  // 917
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 917
				TriangleVertexBarycentric_t::TriangleVertexBarycentric_t(
								int nTriangleIndex,
								const Vector& vCoord);  // 917
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 918
				TriangleVertexBarycentric_t::TriangleVertexBarycentric_t(
								int nTriangleIndex,
								const Vector& vCoord);  // 918
			}
		}
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 902
		CUtlMemory<Vector, int>::Base(); // 113
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 903
		CUtlMemory<Vector, int>::EnsureCapacity(
				int num);  // 1006
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 1024
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::EnsureCapacity(
				int num);  // 905
	}
	{
		const int  nNumTriangles; // 929
		{
			int iTriangle; // 930
			CUtlMemory<TriangleVertexBarycentric_t, int>::Base(); // 112
			CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::Base(); // 368
			CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::GrowMemory(
					int num);  // 1249
			CUtlMemory<TriangleVertexBarycentric_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::Element(
				int i);  // 1252
			Construct<TriangleVertexBarycentric_t, TriangleVertexBarycentric_t>(TriangleVertexBarycentric_t* pMemory); // 1252
			CUtlMemory<TriangleVertexBarycentric_t, int>::NumAllocated(); // 1247
			CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::AddToTail(
					TriangleVertexBarycentric_t& src);  // 932
			CUtlMemory<TriangleVertexBarycentric_t, int>::NumAllocated(); // 1247
			Construct<TriangleVertexBarycentric_t, TriangleVertexBarycentric_t>(TriangleVertexBarycentric_t* pMemory); // 1252
			CUtlMemory<TriangleVertexBarycentric_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::Element(
				int i);  // 1252
			CUtlMemory<TriangleVertexBarycentric_t, int>::Base(); // 112
			CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::Base(); // 368
			CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::AddToTail(
					TriangleVertexBarycentric_t& src);  // 933
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 933
			TriangleVertexBarycentric_t::TriangleVertexBarycentric_t(
							int nTriangleIndex,
							const Vector& vCoord);  // 933
			CUtlMemory<TriangleVertexBarycentric_t, int>::NumAllocated(); // 1247
			CUtlMemory<TriangleVertexBarycentric_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::Element(
				int i);  // 1252
			Construct<TriangleVertexBarycentric_t, TriangleVertexBarycentric_t>(TriangleVertexBarycentric_t* pMemory); // 1252
			CUtlMemory<TriangleVertexBarycentric_t, int>::Base(); // 112
			CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::Base(); // 368
			CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::AddToTail(
					TriangleVertexBarycentric_t& src);  // 934
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 934
			TriangleVertexBarycentric_t::TriangleVertexBarycentric_t(
							int nTriangleIndex,
							const Vector& vCoord);  // 934
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 932
			TriangleVertexBarycentric_t::TriangleVertexBarycentric_t(
							int nTriangleIndex,
							const Vector& vCoord);  // 932
		}
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 929
	}
	{
		VPlane nearPlane; // 943
		VPlane farPlane; // 947
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1431
		Vector::operator-(); // 944
		Vector::NormalizeInPlace(); // 113
		Vector::operator=(
				const Vector& vOther);  // 112
		DotProduct(const Vector& a,
				const Vector& b);  // 1167
		Vector::Dot(
			const Vector& vOther);  // 114
		VPlane::InitFromPointAndNormal(
					const Vector& vPos,
					const Vector& vNormal);  // 944
		Vector::Vector(); // 89
		VPlane::VPlane(); // 943
		Vector::Vector(); // 89
		VPlane::VPlane(); // 947
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 948
		Vector::NormalizeInPlace(); // 113
		Vector::operator=(
				const Vector& vOther);  // 112
		DotProduct(const Vector& a,
				const Vector& b);  // 1167
		Vector::Dot(
			const Vector& vOther);  // 114
		VPlane::InitFromPointAndNormal(
					const Vector& vPos,
					const Vector& vNormal);  // 948
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 948
	}
	{
		int iVertA; // 952
		int iVertB; // 952
		{
			Vector vVertexA; // 954
			Vector vVertexB; // 955
			Vector vAB; // 956
			Vector vClipPlaneNormal; // 957
			VPlane vClipPlane; // 959
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 956
			Vector::Normalized(); // 956
			Vector::Vector(); // 1487
			CrossProduct(const Vector& a,
					const Vector& b,
					Vector& result);  // 1488
			Vector::Cross(
				const Vector& vOther);  // 957
			Vector::Vector(); // 89
			VPlane::VPlane(); // 959
			Vector::operator=(
					const Vector& vOther);  // 112
			Vector::NormalizeInPlace(); // 113
			DotProduct(const Vector& a,
					const Vector& b);  // 1167
			Vector::Dot(
				const Vector& vOther);  // 114
			VPlane::InitFromPointAndNormal(
						const Vector& vPos,
						const Vector& vNormal);  // 960
		}
	}
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
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
		int count);  // 573
	CUtlMemory<Vector, int>::Base(); // 113
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 105
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 105
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::end(); // 574
	Vector::operator=(
			const Vector& vOther);  // 209
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 200
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 574
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 565
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 452
	CUtlVector<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVector<Vector, CUtlMemory<Vector, int> >& src);  // 925
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 896
	CUtlMemory<TriangleVertexBarycentric_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<TriangleVertexBarycentric_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::CUtlVector(); // 897
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1366
	CUtlMemory<Vector, int>::NumAllocated(); // 782
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowVector(
			int num);  // 1373
	{
		int i; // 1376
		CUtlMemory<Vector, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
			int i);  // 1378
		CopyConstruct<Vector>(Vector* pMemory,
					const Vector& src);  // 1378
	}
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddVectorToTail<CUtlMemory<Vector, int> >(
							const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& src);  // 964
	CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::Count(); // 1366
	CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::Count(); // 1369
	CUtlMemory<TriangleVertexBarycentric_t, int>::NumAllocated(); // 782
	CUtlMemory<TriangleVertexBarycentric_t, int>::Base(); // 112
	CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::Base(); // 368
	CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::GrowVector(
			int num);  // 1373
	{
		int i; // 1376
		CUtlMemory<TriangleVertexBarycentric_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::operator[](
				int i);  // 1378
		CUtlMemory<TriangleVertexBarycentric_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::Element(
			int i);  // 1378
		CopyConstruct<TriangleVertexBarycentric_t>(TriangleVertexBarycentric_t* pMemory,
								const TriangleVertexBarycentric_t& src);  // 1378
	}
	CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::AddVectorToTail<CUtlMemory<TriangleVertexBarycentric_t, int> >(
									const CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >& src);  // 968
	CUtlMemory<TriangleVertexBarycentric_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<TriangleVertexBarycentric_t, int>::Purge(); // 903
	CUtlMemory<TriangleVertexBarycentric_t, int>::Purge(); // 1799
	CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::Purge(); // 560
	ValidateAlignment<TriangleVertexBarycentric_t>(void); // 508
	CUtlMemory<TriangleVertexBarycentric_t, int>::Purge(); // 510
	CUtlMemory<TriangleVertexBarycentric_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::~CUtlVector(); // 970
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 970
} /* size: 0, variables: 4, inline expansions: 58 (0 bytes) */

// <05CA72D8> meshutils/triangulatepolygon.cpp:978
// variables: 3
// function calls: 23
void CTriangulatedPolygon::ClipTrianglesToPolygonProjection(const Vector& vProjectionDirection, float flProjectionDistance, bool bCullBackfaces, const CUtlVector<Vector, CUtlMemory<Vector, int> >& triangleVertices, CUtlVector<Vector, CUtlMemory<Vector, int> >* pOutClippedTriangleVertices, CUtlVector<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >* pOutClippedBarycentricTriangleVertices)
{
	{
		Vector vTriangleVertices; // 988
		int nNumIndicies; // 989
		{
			int iIndex; // 990
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::operator[](
					int i);  // 992
			CUtlMemory<Vector, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::operator[](
					int i);  // 992
			CUtlMemory<Vector, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::operator[](
					int i);  // 993
			CUtlMemory<Vector, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::operator[](
					int i);  // 994
			Vector::operator=(
					const Vector& vOther);  // 992
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::operator[](
					int i);  // 993
			Vector::operator=(
					const Vector& vOther);  // 993
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::operator[](
					int i);  // 994
			Vector::operator=(
					const Vector& vOther);  // 994
		}
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::Count(); // 989
	}
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Count(); // 1009
	CUtlMemory<Vector, int>::Base(); // 113
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Base(); // 1009
	CTriangulatedPolygon::IsConvex(); // 982
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Count(); // 984
	CUtlMemory<Vector, int>::Base(); // 113
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Base(); // 984
} /* size: 0, inline expansions: 7 (0 bytes) */

// <05CB5EBE> meshutils/triangulatepolygon.cpp:1004
// function calls: 3
void CTriangulatedPolygon::IsConvex()
{
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Count(); // 1009
	CUtlMemory<Vector, int>::Base(); // 113
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Base(); // 1009
} /* size: 0, inline expansions: 3 (0 bytes) */

// <05CA72BB> meshutils/triangulatepolygon.cpp:1004
void CTriangulatedPolygon::IsConvex()
{
} /* size: 0 */

// <05CA70B1> meshutils/triangulatepolygon.cpp:1019
// variables: 4
// function calls: 7
void CTriangulatedPolygon::ComputeCenter()
{
	Vector vSum; // 1021
	const int  nNumVertices; // 1023
	const Vector* pPositions; // 1024
	{
		int iVertex; // 1025
		Vector::operator+=(
				const Vector& v);  // 1027
	}
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Count(); // 1023
	CUtlMemory<Vector, int>::Base(); // 113
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Base(); // 1024
	Vector::Vector(); // 1464
	VectorDivide(const Vector& a,
			vec_t b,
			Vector& c);  // 1465
	Vector::operator/(
			float fl);  // 1030
} /* size: 0, variables: 3, inline expansions: 6 (0 bytes) */

// <05CB5FA3> meshutils/triangulatepolygon.cpp:1037
// function calls: 10
void CTriangulatedPolygon::GetPlane(VPlane* pOutPlane)
{
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Count(); // 1039
	{
	}
	CUtlMemory<Vector, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::operator[](
			int i);  // 1043
	Vector::operator=(
			const Vector& vOther);  // 112
	Vector::NormalizeInPlace(); // 113
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 114
	VPlane::InitFromPointAndNormal(
				const Vector& vPos,
				const Vector& vNormal);  // 1043
	CTriangulatedPolygon::GetPlane(
		VPlane* pOutPlane);  // 1037
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Count(); // 1040
} /* size: 0, inline expansions: 10 (301 bytes) */

// <05CA7033> meshutils/triangulatepolygon.cpp:1037
// variables: 2
void CTriangulatedPolygon::GetPlane(VPlane* pOutPlane)
{
	const char   __FUNCTION__; // 2248
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1039
	}
} /* size: 0, variables: 1 */

// <05CA6B06> meshutils/triangulatepolygon.cpp:1049
// variables: 8
// function calls: 20
void CTriangulatedPolygon::RebaseTextureCoordinates()
{
	Vector2D vMin; // 1054
	Vector2D vMax; // 1055
	const int  nNumCoords; // 1057
	Vector2D vCenter; // 1064
	int nCenterX; // 1066
	int nCenterY; // 1067
	{
		int i; // 1058
		Vector2D::Vector2D(
			vec_t X,
			vec_t Y);  // 666
		Vector2D::Min(
			const Vector2D& vOther);  // 1060
		Vector2D::Vector2D(
			vec_t X,
			vec_t Y);  // 672
		Vector2D::Max(
			const Vector2D& vOther);  // 1061
	}
	{
		int i; // 1069
		CUtlMemory<Vector2D, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::operator[](
				int i);  // 1071
		CUtlMemory<Vector2D, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::operator[](
				int i);  // 1072
	}
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::Count(); // 135
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::IsEmpty(); // 1051
	CUtlMemory<Vector2D, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::operator[](
			int i);  // 1054
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 1054
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 1055
	Vector2DAdd(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 688
	Vector2D::Vector2D(); // 687
	Vector2D::operator+(
			const Vector2D& v);  // 1064
	Vector2DMultiply(const Vector2D& a,
			vec_t b,
			Vector2D& c);  // 702
	Vector2D::Vector2D(); // 701
	Vector2D::operator*(
			float fl);  // 1064
} /* size: 0, variables: 6, inline expansions: 12 (0 bytes) */

// <05CA686F> meshutils/triangulatepolygon.cpp:1079
// variables: 3
// function calls: 9
void CTriangulatedPolygon::SnapVertices(float flSnap)
{
	const int  nNumVertices; // 1081
	{
		int iVertex; // 1082
		{
			Vector vSnapped; // 1084
			Snap(float a,
				float flSnap);  // 2950
			Snap(float a,
				float flSnap);  // 2950
			Snap(float a,
				float flSnap);  // 2950
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 2950
			Snap(const Vector& a,
				float flSnap);  // 1084
			CUtlMemory<Vector, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::operator[](
					int i);  // 1084
			Vector::operator=(
					const Vector& vOther);  // 1085
		}
	}
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Count(); // 1081
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <05CA5646> meshutils/triangulatepolygon.cpp:1093
// variables: 12
// function calls: 70
bool CalcTextureBasisFromUVs(const Vector* vVertPos, const Vector2D* vTexCoord, Vector& vOutU, Vector& vOutV)
{
	const float  flEpsilon; // 1095
	Vector E; // 1107
	Vector2D T; // 1108
	float eDet; // 1122
	Vector textureU; // 1126
	Vector textureV; // 1127
	Vector textureNormal; // 1130
	VMatrix mTextureToWorld; // 1134
	VMatrix mWorldToTexture; // 1143
	const char   __FUNCTION__; // 134
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1149
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1150
	}
	Vector::operator=(
			const Vector& vOther);  // 1099
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1098
	Vector::operator=(
			const Vector& vOther);  // 1098
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1099
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 1107
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 1107
	Vector2D::Vector2D(); // 694
	Vector2DSubtract(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 695
	Vector2D::operator-(
			const Vector2D& v);  // 1108
	Vector2DSubtract(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 695
	Vector2D::Vector2D(); // 694
	Vector2D::operator-(
			const Vector2D& v);  // 1108
	Vector2D::LengthSqr(); // 1111
	Vector2D::LengthSqr(); // 1111
	fabs(float __x); // 1123
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 1126
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 1126
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 488
	VMatrix::VMatrix(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 1138
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 1127
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 1126
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 1126
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 1127
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 1127
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 1127
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 1147
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 1148
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 1149
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 1150
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1131
	Vector::Vector(); // 1130
	VMatrix::VMatrix(); // 1143
} /* size: 0, variables: 10, inline expansions: 70 (0 bytes) */

// <05CA4C69> meshutils/triangulatepolygon.cpp:1162
// variables: 14
// function calls: 33
void ComputeFaceTextureParametersFromUVs(const Vector* vVertPos, const Vector2D* vTexCoord, Vector2D vTextureDimensions, Vector4D* pAxisU, Vector4D* pAxisV, Vector2D* pScale)
{
	Vector vWorldU; // 1164
	Vector vWorldV; // 1164
	float flWorldUScale; // 1174
	float flWorldVScale; // 1175
	const char   __FUNCTION__; // 61021
	Vector2D vWorldOffset; // 1191
	Vector2D vWorldOffsetFrac; // 1195
	Vector2D vTexCoordFrac; // 1196
	Vector2D uvOffset; // 1198
	float uOffset; // 1204
	float vOffset; // 1205
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1183
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1212
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1213
	}
	Vector::operator=(
			const Vector& vOther);  // 1177
	Vector::operator=(
			const Vector& vOther);  // 1180
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 302
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 302
	Vector2D::IsValid(); // 1183
	Vector2D::Vector2D(); // 1191
	DotProduct(const Vector& a,
			const Vector& b);  // 1192
	DotProduct(const Vector& a,
			const Vector& b);  // 1193
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 1195
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 1196
	Vector2D::Vector2D(); // 694
	Vector2DSubtract(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 695
	Vector2D::operator-(
			const Vector2D& v);  // 1198
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 341
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 341
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 341
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 341
	Vector4D::IsValid(); // 1212
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 341
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 341
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 341
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 341
	Vector4D::IsValid(); // 1213
} /* size: 0, variables: 11, inline expansions: 33 (0 bytes) */

// <05CA4584> meshutils/triangulatepolygon.cpp:1219
// variables: 14
// function calls: 24
void GetBestThreeTextureBasisVerticies(const Vector* pPositions, const Vector2D* pTexCoords, int nNumPositions, Vector* pOutPositions, Vector2D* pOutTexCoords)
{
	const char   __FUNCTION__; // 58496
	int nBestVert; // 1235
	float flBestHeuristic; // 1236
	int nPrevVert; // 1256
	int nNextVert; // 1257
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1225
	}
	{
		int i; // 1238
		{
			int nVert0; // 1240
			int nVert1; // 1241
			int nVert2; // 1242
			Vector vEdge0; // 1244
			Vector vEdge1; // 1245
			float flOneMinsDot; // 1246
			float flHeuristic; // 1248
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 1244
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 1245
			Vector::Normalized(); // 1246
			Vector::Normalized(); // 1246
			DotProduct(const Vector& a,
					const Vector& b);  // 1167
			Vector::Dot(
				const Vector& vOther);  // 1246
			Vector::LengthSqr(); // 1248
			Vector::LengthSqr(); // 1248
		}
	}
	Vector2D::operator=(
			const Vector2D& vOther);  // 1231
	Vector::operator=(
			const Vector& vOther);  // 1226
	Vector::operator=(
			const Vector& vOther);  // 1227
	Vector2D::operator=(
			const Vector2D& vOther);  // 1229
	Vector::operator=(
			const Vector& vOther);  // 1228
	Vector2D::operator=(
			const Vector2D& vOther);  // 1230
	Vector::operator=(
			const Vector& vOther);  // 1259
	Vector::operator=(
			const Vector& vOther);  // 1260
	Vector::operator=(
			const Vector& vOther);  // 1261
	Vector2D::operator=(
			const Vector2D& vOther);  // 1263
	Vector2D::operator=(
			const Vector2D& vOther);  // 1264
	Vector2D::operator=(
			const Vector2D& vOther);  // 1265
} /* size: 0, variables: 5, inline expansions: 12 (0 bytes) */

// <05CA3E3B> meshutils/triangulatepolygon.cpp:1359
// variables: 8
// function calls: 28
void CalcTangentAndFlipFromBasis(const Vector& vInAxisU, const Vector& vInAxisV, const Vector& vPlaneNormal, Vector4D& vTangentOut)
{
	Vector tmpVect; // 1362
	Vector vAxisU; // 1363
	Vector vAxisV; // 1364
	bool leftHanded; // 1374
	Vector vOrthoU; // 1377
	Vector vTangentFromU; // 1378
	Vector vTangentFromV; // 1382
	Vector vTangent; // 1394
	Vector::Vector(); // 1362
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 1366
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 1366
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1373
	DotProduct(const Vector& a,
			const Vector& b);  // 1374
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 1377
	Vector::Normalized(); // 1378
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 1378
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1385
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1389
	Vector::NormalizeInPlace(); // 1391
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 1394
	Vector::Normalized(); // 1394
	Vector4D::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz,
		vec_t iw);  // 1397
} /* size: 0, variables: 8, inline expansions: 28 (0 bytes) */

// <05CA3BE7> meshutils/triangulatepolygon.cpp:1405
// variables: 4
// function calls: 6
bool TexCoordCompare(const Vector2D& vTexCoordA, const Vector2D& vTexCoordB)
{
	const float  flMaxDistSq; // 1407
	Vector2D vFracA; // 1409
	Vector2D vFracB; // 1410
	float flDistSq; // 1412
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 1409
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 1410
	Vector2D::Vector2D(); // 609
	Vector2DSubtract(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 610
	Vector2D::LengthSqr(); // 611
	Vector2D::DistToSqr(
			const Vector2D& vOther);  // 1412
} /* size: 0, variables: 4, inline expansions: 6 (0 bytes) */

// <05CA2DE7> meshutils/triangulatepolygon.cpp:1419
// variables: 15
// function calls: 53
void ProjectPolygonsOntoTriangles(float flProjectionDistance, bool bProjectOnBackfaces, const CTriangulatedPolygon* pBasePolygons, const int nNumBasePolygons, const CUtlVector<Vector, CUtlMemory<Vector, int> >& triangleVertices, CUtlVector<Vector, CUtlMemory<Vector, int> >* pOutProjectedTriangleVertices, CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >* pOutProjectedTriangleTexcoords, CUtlVector<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >* pOutBarycentricTriangleVertices)
{
	const int  nEstimatedOutputVertices; // 1429
	Vector vPositionSum; // 1451
	Vector vNormalSum; // 1452
	const Vector  vAverageNormal; // 1458
	const Vector  vAverageCenter; // 1459
	VPlane basePlane; // 1461
	const char   __FUNCTION__; // 54270
	{
		int iPolygon; // 1453
		Vector::operator+=(
				const Vector& v);  // 1455
		Vector::operator+=(
				const Vector& v);  // 1456
	}
	{
		int iPolygon; // 1465
		{
			const CTriangulatedPolygon& polygon; // 1468
			const int  nNumStartingVertices; // 1469
			{
				const int  nNumFinalVertices; // 1477
				{
					int iVertex; // 1478
					{
						Vector vProjectedPosition; // 1483
						CUtlMemory<Vector, int>::operator[](
								int i);  // 602
						CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
							int i);  // 1483
						DotProduct(const Vector& a,
								const Vector& b);  // 1167
						Vector::Dot(
							const Vector& vOther);  // 119
						VPlane::DistTo(
							const Vector& vVec);  // 154
						VectorSubtract(const Vector& a,
								const Vector& b,
								Vector& c);  // 1444
						Vector::Vector(); // 1443
						Vector::operator-(
								const Vector& v);  // 154
						VectorMultiply(const Vector& a,
								vec_t b,
								Vector& c);  // 1451
						Vector::Vector(); // 1450
						Vector::operator*(
								float fl);  // 154
						VPlane::SnapPointToPlane(
								const Vector& vPoint);  // 1483
						CUtlMemory<Vector2D, int>::operator[](
								int i);  // 602
						CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Element(
							int i);  // 1484
						Vector2D::operator=(
								const Vector2D& vOther);  // 1484
					}
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1488
				}
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1475
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1477
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1488
				CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Count(); // 1488
			}
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1431
			Vector::operator-(); // 1470
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1469
		}
	}
	CUtlMemory<Vector, int>::IsGrowable(); // 881
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 888
	CUtlMemory<Vector, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::EnsureCapacity(
			int num);  // 1432
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1431
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::RemoveAll(); // 1436
	CUtlMemory<Vector2D, int>::IsGrowable(); // 881
	CUtlMemory<Vector2D, int>::IsExternallyAllocated(); // 888
	CUtlMemory<Vector2D, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::EnsureCapacity(
			int num);  // 1437
	CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::RemoveAll(); // 1442
	CUtlMemory<TriangleVertexBarycentric_t, int>::IsGrowable(); // 881
	CUtlMemory<TriangleVertexBarycentric_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<TriangleVertexBarycentric_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >::EnsureCapacity(
			int num);  // 1443
	Vector::Normalized(); // 1458
	VectorDivide(const Vector& a,
			vec_t b,
			Vector& c);  // 1465
	Vector::Vector(); // 1464
	Vector::operator/(
			float fl);  // 1459
	Vector::NormalizeInPlace(); // 113
	Vector::operator=(
			const Vector& vOther);  // 112
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 114
	VPlane::InitFromPointAndNormal(
				const Vector& vPos,
				const Vector& vNormal);  // 1462
	Vector::Vector(); // 89
	VPlane::VPlane(); // 1461
} /* size: 0, variables: 7, inline expansions: 29 (0 bytes) */

// <05CB6226> meshutils/triangulatepolygon.cpp:1496
// function calls: 2
void CTriangulatedPolygon::IsValid()
{
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Count(); // 1498
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::Count(); // 1498
} /* size: 0, inline expansions: 2 (0 bytes) */

// <05CA2DCA> meshutils/triangulatepolygon.cpp:1496
void CTriangulatedPolygon::IsValid()
{
} /* size: 0 */

// <05CA2CFA> meshutils/triangulatepolygon.cpp:1504
// variable: 1
// function calls: 2
void CTriangulatedPolygon::IsValidPolygonEdge(int nVertexA, int nVertexB)
{
	const int  nNumVertices; // 1506
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Count(); // 1506
	Square<int>(const int& a); // 1518
} /* size: 83, variables: 1, inline expansions: 2 (6 bytes) */

// <05C8FD1E> meshutils/triangulatepolygon.cpp:1526
// member functions: 13
// member variables: 2
// struct size: 8
struct PointLocation_t {
	/* meshutils/triangulatepolygon.cpp:1528 */
	void PointLocation_t(PointLocation_t* );
	/* meshutils/triangulatepolygon.cpp:1536 */
	void PointLocation_t(PointLocation_t* , int);
	/* meshutils/triangulatepolygon.cpp:1543 */
	void PointLocation_t(PointLocation_t* , int, int);
	/* meshutils/triangulatepolygon.cpp:1549 */
	bool operator==(const PointLocation_t* , const PointLocation_t& );
	/* meshutils/triangulatepolygon.cpp:1554 */
	bool IsOppositeEdge(const PointLocation_t* , const PointLocation_t& );
	/* meshutils/triangulatepolygon.cpp:1562 */
	bool IsSameVertex(const PointLocation_t* , const PointLocation_t& );
	/* meshutils/triangulatepolygon.cpp:1570 */
	int FindSharedVertex(const PointLocation_t* , const PointLocation_t& );
	/* meshutils/triangulatepolygon.cpp:1577 */
	bool IsValid(const PointLocation_t* );
	/* meshutils/triangulatepolygon.cpp:1582 */
	bool IsEdge(const PointLocation_t* );
	/* meshutils/triangulatepolygon.cpp:1587 */
	bool IsVertex(const PointLocation_t* );
	/* meshutils/triangulatepolygon.cpp:1592 */
	void SetInvalid(PointLocation_t* );
	/* meshutils/triangulatepolygon.cpp:1598 */
	int VertexA(const PointLocation_t* );
	/* meshutils/triangulatepolygon.cpp:1599 */
	int VertexB(const PointLocation_t* );
private:
	int m_nVertexA; /* 0 4 */
	int m_nVertexB; /* 4 4 */
};

// <05CA2CE3> meshutils/triangulatepolygon.cpp:1528
void PointLocation_t::PointLocation_t()
{
} /* size: 0 */

// <05CA2CCA> meshutils/triangulatepolygon.cpp:1528
inline void PointLocation_t::PointLocation_t()
{
} /* size: 0 */

// <05CA2CAE> meshutils/triangulatepolygon.cpp:1536
void PointLocation_t::PointLocation_t(int nVertex)
{
} /* size: 0 */

// <05CA2C88> meshutils/triangulatepolygon.cpp:1536
inline void PointLocation_t::PointLocation_t(int nVertex)
{
} /* size: 0 */

// <05CA2C67> meshutils/triangulatepolygon.cpp:1543
void PointLocation_t::PointLocation_t(int nVertexA, int nVertexB)
{
} /* size: 0 */

// <05CA2C34> meshutils/triangulatepolygon.cpp:1543
inline void PointLocation_t::PointLocation_t(int nVertexA, int nVertexB)
{
} /* size: 0 */

// <05CA2BE8> meshutils/triangulatepolygon.cpp:1554
inline void PointLocation_t::IsOppositeEdge(const PointLocation_t& other)
{
} /* size: 0 */

// <05CA2BC2> meshutils/triangulatepolygon.cpp:1562
inline void PointLocation_t::IsSameVertex(const PointLocation_t& other)
{
} /* size: 0 */

// <05CA2B9C> meshutils/triangulatepolygon.cpp:1570
inline void PointLocation_t::FindSharedVertex(const PointLocation_t& other)
{
} /* size: 0 */

// <05CA2B83> meshutils/triangulatepolygon.cpp:1577
inline void PointLocation_t::IsValid()
{
} /* size: 0 */

// <05CA2B6A> meshutils/triangulatepolygon.cpp:1582
inline void PointLocation_t::IsEdge()
{
} /* size: 0 */

// <05CA2B51> meshutils/triangulatepolygon.cpp:1587
inline void PointLocation_t::IsVertex()
{
} /* size: 0 */

// <05CA2B38> meshutils/triangulatepolygon.cpp:1598
inline void PointLocation_t::VertexA()
{
} /* size: 0 */

// <05CA2B1F> meshutils/triangulatepolygon.cpp:1599
inline void PointLocation_t::VertexB()
{
} /* size: 0 */

// <05CA2085> meshutils/triangulatepolygon.cpp:1609
inline void SegmentPoint_t::operator=(SegmentPoint_t &)
{
} /* size: 0 */

// <05CA176E> meshutils/triangulatepolygon.cpp:1609
inline void SegmentPoint_t::operator=(const SegmentPoint_t &)
{
} /* size: 0 */

// <05C8FF3D> meshutils/triangulatepolygon.cpp:1609
// member functions: 4
// member variables: 3
// struct size: 24
struct SegmentPoint_t {
	/* meshutils/triangulatepolygon.cpp:1611 */
	void SegmentPoint_t(SegmentPoint_t* );
	/* meshutils/triangulatepolygon.cpp:1617 */
	void SegmentPoint_t(SegmentPoint_t* , const Vector& );
	Vector m_vPosition; /* 0 12 */
	bool m_bClipped; /* 12 1 */
	PointLocation_t m_Location; /* 16 8 */
	SegmentPoint_t& operator=(SegmentPoint_t* , const SegmentPoint_t& );
	SegmentPoint_t& operator=(SegmentPoint_t* , SegmentPoint_t& );
};

// <05CA2B08> meshutils/triangulatepolygon.cpp:1611
void SegmentPoint_t::SegmentPoint_t()
{
} /* size: 0 */

// <05CA2AEF> meshutils/triangulatepolygon.cpp:1611
inline void SegmentPoint_t::SegmentPoint_t()
{
} /* size: 0 */

// <05CA2AD3> meshutils/triangulatepolygon.cpp:1617
void SegmentPoint_t::SegmentPoint_t(const Vector& vPos)
{
} /* size: 0 */

// <05CA2AAD> meshutils/triangulatepolygon.cpp:1617
inline void SegmentPoint_t::SegmentPoint_t(const Vector& vPos)
{
} /* size: 0 */

// <05CA205D> meshutils/triangulatepolygon.cpp:1631
inline void ClippedLineSegment_t::operator=(ClippedLineSegment_t &)
{
} /* size: 0 */

// <05CA1746> meshutils/triangulatepolygon.cpp:1631
inline void ClippedLineSegment_t::operator=(const ClippedLineSegment_t &)
{
} /* size: 0 */

// <05C90013> meshutils/triangulatepolygon.cpp:1631
// member functions: 6
// member variables: 2
// struct size: 48
struct ClippedLineSegment_t {
	/* meshutils/triangulatepolygon.cpp:1633 */
	void ClippedLineSegment_t(ClippedLineSegment_t* );
	/* meshutils/triangulatepolygon.cpp:1635 */
	void ClippedLineSegment_t(ClippedLineSegment_t* , const Vector& , const Vector& );
	/* meshutils/triangulatepolygon.cpp:1641 */
	void ClippedLineSegment_t(ClippedLineSegment_t* , const SegmentPoint_t& , const SegmentPoint_t& );
	/* meshutils/triangulatepolygon.cpp:1647 */
	bool IsClipped(const ClippedLineSegment_t* );
	SegmentPoint_t m_Start; /* 0 24 */
	SegmentPoint_t m_End; /* 24 24 */
	ClippedLineSegment_t& operator=(ClippedLineSegment_t* , const ClippedLineSegment_t& );
	ClippedLineSegment_t& operator=(ClippedLineSegment_t* , ClippedLineSegment_t& );
};

// <05CA2A96> meshutils/triangulatepolygon.cpp:1633
void ClippedLineSegment_t::ClippedLineSegment_t()
{
} /* size: 0 */

// <05CA2A7D> meshutils/triangulatepolygon.cpp:1633
inline void ClippedLineSegment_t::ClippedLineSegment_t()
{
} /* size: 0 */

// <05CA2A5C> meshutils/triangulatepolygon.cpp:1635
void ClippedLineSegment_t::ClippedLineSegment_t(const Vector& vStart, const Vector& vEnd)
{
} /* size: 0 */

// <05CA2A29> meshutils/triangulatepolygon.cpp:1635
inline void ClippedLineSegment_t::ClippedLineSegment_t(const Vector& vStart, const Vector& vEnd)
{
} /* size: 0 */

// <05CA2A08> meshutils/triangulatepolygon.cpp:1641
void ClippedLineSegment_t::ClippedLineSegment_t(const SegmentPoint_t& start, const SegmentPoint_t& end)
{
} /* size: 0 */

// <05CA29D5> meshutils/triangulatepolygon.cpp:1641
inline void ClippedLineSegment_t::ClippedLineSegment_t(const SegmentPoint_t& start, const SegmentPoint_t& end)
{
} /* size: 0 */

// <05CA29BC> meshutils/triangulatepolygon.cpp:1647
inline void ClippedLineSegment_t::IsClipped()
{
} /* size: 0 */

// <05CA20A7> meshutils/triangulatepolygon.cpp:1674
// variables: 4
// function calls: 38
ClipLineSegmentResult_t ClipLineSegmentToPlane(const Vector& vNormal, const Vector& vPlanePoint, Vector* p1, Vector* p2, float flBias)
{
	float flDot1; // 1676
	float flDot2; // 1676
	{
		Vector vRay; // 1687
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 1687
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1688
		Vector::Vector(); // 1464
		VectorDivide(const Vector& a,
				vec_t b,
				Vector& c);  // 1465
		Vector::operator/(
				float fl);  // 1688
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 1688
		Vector::operator=(
				const Vector& vOther);  // 1688
	}
	{
		Vector vRay; // 1693
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 1693
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1694
		Vector::Vector(); // 1464
		VectorDivide(const Vector& a,
				vec_t b,
				Vector& c);  // 1465
		Vector::operator/(
				float fl);  // 1694
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 1694
		Vector::operator=(
				const Vector& vOther);  // 1694
	}
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 1677
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 1677
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 1678
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 1678
	Vector::operator=(
			const Vector& vOther);  // 1699
	Vector::operator=(
			const Vector& vOther);  // 1700
} /* size: 473, variables: 2, inline expansions: 12 (361 bytes) */

// <05CA18FB> meshutils/triangulatepolygon.cpp:1710
// variables: 8
// function calls: 28
bool ClipLineSegmentToConvexPolygon(const Vector& vA, const Vector vB, const Vector& vPolygonNormal, const Vector* pPolygonVertices, const int nNumVertices, ClippedLineSegment_t* pOutLineSegment)
{
	{
		int iVertA; // 1714
		int iVertB; // 1714
		{
			Vector vVertexA; // 1716
			Vector vVertexB; // 1717
			Vector vAB; // 1718
			Vector vClipPlaneNormal; // 1719
			VPlane vClipPlane; // 1721
			ClipLineSegmentResult_t nPlaneClipResult; // 1724
			PointLocation_t::PointLocation_t(
					int nVertexA,
					int nVertexB);  // 1737
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 1718
			Vector::Normalized(); // 1718
			Vector::Vector(); // 1487
			CrossProduct(const Vector& a,
					const Vector& b,
					Vector& result);  // 1488
			Vector::Cross(
				const Vector& vOther);  // 1719
			Vector::NormalizeInPlace(); // 113
			Vector::operator=(
					const Vector& vOther);  // 112
			DotProduct(const Vector& a,
					const Vector& b);  // 1167
			Vector::Dot(
				const Vector& vOther);  // 114
			VPlane::InitFromPointAndNormal(
						const Vector& vPos,
						const Vector& vNormal);  // 1722
			Vector::Vector(); // 89
			VPlane::VPlane(); // 1721
			PointLocation_t::PointLocation_t(
					int nVertexA,
					int nVertexB);  // 1732
		}
	}
	Vector::operator=(
			const Vector& vOther);  // 1637
	PointLocation_t::PointLocation_t(); // 1613
	SegmentPoint_t::SegmentPoint_t(); // 1636
	PointLocation_t::PointLocation_t(); // 1613
	SegmentPoint_t::SegmentPoint_t(); // 1636
	Vector::operator=(
			const Vector& vOther);  // 1638
	ClippedLineSegment_t::ClippedLineSegment_t(
				const Vector& vStart,
				const Vector& vEnd);  // 1712
	Vector::operator=(
			const Vector& vOther);  // 1609
	SegmentPoint_t::operator=(
			SegmentPoint_t &);  // 1631
	Vector::operator=(
			const Vector& vOther);  // 1609
	SegmentPoint_t::operator=(
			SegmentPoint_t &);  // 1631
	ClippedLineSegment_t::operator=(
			ClippedLineSegment_t &);  // 1712
} /* size: 649, inline expansions: 12 (126 bytes) */

// <05CA1790> meshutils/triangulatepolygon.cpp:1749
// variables: 2
// function calls: 4
bool IsDuplicateSegment(const ClippedLineSegment_t& segment, const ClippedLineSegment_t* pExistingSegments, int nNumExisting)
{
	{
		int iSegment; // 1751
		{
			const ClippedLineSegment_t& existingSegment; // 1753
			PointLocation_t::operator==(
					const PointLocation_t& other);  // 1755
			PointLocation_t::FindSharedVertex(
					const PointLocation_t& other);  // 1764
			PointLocation_t::FindSharedVertex(
					const PointLocation_t& other);  // 1765
			PointLocation_t::operator==(
					const PointLocation_t& other);  // 1756
		}
	}
} /* size: 134 */

// <05CA10FA> meshutils/triangulatepolygon.cpp:1777
// variables: 2
// function calls: 30
bool MergeLineSegmentsIfConnected(const ClippedLineSegment_t& segment1, const ClippedLineSegment_t& segment2, ClippedLineSegment_t* pOutMergedSegment)
{
	ClippedLineSegment_t mergedSegment; // 1780
	bool bMerged; // 1781
	PointLocation_t::PointLocation_t(); // 1613
	SegmentPoint_t::SegmentPoint_t(); // 1633
	PointLocation_t::PointLocation_t(); // 1613
	SegmentPoint_t::SegmentPoint_t(); // 1633
	ClippedLineSegment_t::ClippedLineSegment_t(); // 1780
	PointLocation_t::IsEdge(); // 1556
	PointLocation_t::IsEdge(); // 1556
	PointLocation_t::IsOppositeEdge(
			const PointLocation_t& other);  // 1783
	PointLocation_t::IsVertex(); // 1564
	PointLocation_t::IsVertex(); // 1564
	PointLocation_t::IsSameVertex(
			const PointLocation_t& other);  // 1784
	PointLocation_t::IsEdge(); // 1556
	PointLocation_t::IsEdge(); // 1556
	PointLocation_t::IsOppositeEdge(
			const PointLocation_t& other);  // 1790
	Vector::operator=(
			const Vector& vOther);  // 1609
	SegmentPoint_t::operator=(
			const SegmentPoint_t  &);  // 1786
	Vector::operator=(
			const Vector& vOther);  // 1609
	SegmentPoint_t::operator=(
			const SegmentPoint_t  &);  // 1787
	Vector::operator=(
			const Vector& vOther);  // 1609
	SegmentPoint_t::operator=(
			const SegmentPoint_t  &);  // 1631
	Vector::operator=(
			const Vector& vOther);  // 1609
	SegmentPoint_t::operator=(
			const SegmentPoint_t  &);  // 1631
	ClippedLineSegment_t::operator=(
			const ClippedLineSegment_t  &);  // 1804
	Vector::operator=(
			const Vector& vOther);  // 1609
	SegmentPoint_t::operator=(
			const SegmentPoint_t  &);  // 1793
	Vector::operator=(
			const Vector& vOther);  // 1609
	SegmentPoint_t::operator=(
			const SegmentPoint_t  &);  // 1794
	PointLocation_t::IsVertex(); // 1564
	PointLocation_t::IsVertex(); // 1564
	PointLocation_t::IsSameVertex(
			const PointLocation_t& other);  // 1791
} /* size: 424, variables: 2, inline expansions: 30 (568 bytes) */

// <05CA0F44> meshutils/triangulatepolygon.cpp:1813
// variables: 3
// function calls: 5
void MergeConnectedLineSegments(CUtlVector<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >* pInOutMergedSegments)
{
	const int  nNumSegments; // 1815
	{
		int i; // 1817
		{
			int j; // 1819
			CUtlMemory<ClippedLineSegment_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Element(
				int i);  // 1821
			CUtlMemory<ClippedLineSegment_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Element(
				int i);  // 1821
		}
	}
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Count(); // 1815
} /* size: 208, variables: 1, inline expansions: 1 (4 bytes) */

// <05CA0ED5> meshutils/triangulatepolygon.cpp:1833
// variables: 2
void UpdateNearestVertex(const Vector* pPoint, const Vector* pVertices, int nTestVertex, float* pNearestDistSq, int* pNearestVertex)
{
	const Vector& vertexPosition; // 1835
	const float  flDistSq; // 1836
} /* size: 0, variables: 2 */

// <05CA0914> meshutils/triangulatepolygon.cpp:1847
// variables: 5
// function calls: 21
void SnapPointToClosestVertex(const CTriangulatedPolygon& polygon, float flMaxSnapDistance, PointLocation_t* pPointLocaiton, Vector* pPoint)
{
	const int  nNumVertices; // 1849
	const Vector* pVertices; // 1850
	int nNearestVertex; // 1852
	float flDistSq; // 1853
	{
		int iVertex; // 1865
		Vector::Vector(); // 194
		Vector::LengthSqr(); // 198
		Vector::DistToSqr(
				const Vector& vOther);  // 1836
		UpdateNearestVertex(const Vector* pPoint,
					const Vector* pVertices,
					int nTestVertex,
					float* pNearestDistSq,
					int* pNearestVertex);  // 1867
	}
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Count(); // 135
	CTriangulatedPolygon::GetNumVertices(); // 1849
	PointLocation_t::IsValid(); // 1855
	Square<float>(const float& a); // 1853
	CUtlMemory<Vector, int>::Base(); // 113
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Base(); // 136
	CTriangulatedPolygon::GetVertices(); // 1850
	Vector::Vector(); // 194
	Vector::LengthSqr(); // 198
	Vector::DistToSqr(
			const Vector& vOther);  // 1836
	UpdateNearestVertex(const Vector* pPoint,
				const Vector* pVertices,
				int nTestVertex,
				float* pNearestDistSq,
				int* pNearestVertex);  // 1858
	Vector::Vector(); // 194
	Vector::LengthSqr(); // 198
	Vector::DistToSqr(
			const Vector& vOther);  // 1836
	UpdateNearestVertex(const Vector* pPoint,
				const Vector* pVertices,
				int nTestVertex,
				float* pNearestDistSq,
				int* pNearestVertex);  // 1859
	Vector::operator=(
			const Vector& vOther);  // 1873
	PointLocation_t::PointLocation_t(
			int nVertex);  // 1874
} /* size: 369, variables: 4, inline expansions: 17 (328 bytes) */

// <05CA05EC> meshutils/triangulatepolygon.cpp:1881
// variables: 5
// function calls: 12
void SnapSegmentEndpointsToVertices(const CTriangulatedPolygon& polygon, CUtlVector<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >* pSegments)
{
	const float  flSize; // 1884
	const float  flSnapDistance; // 1885
	const int  nNumSegments; // 1887
	{
		int iSegment; // 1888
		{
			ClippedLineSegment_t& segment; // 1890
			CUtlMemory<ClippedLineSegment_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Element(
				int i);  // 1890
		}
	}
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
		const Vector& vOther);  // 1884
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Count(); // 1887
} /* size: 225, variables: 3, inline expansions: 10 (220 bytes) */

// <05CA0347> meshutils/triangulatepolygon.cpp:1899
// variables: 3
// function calls: 7
void RemoveInvalidSegments(const CTriangulatedPolygon& polygon, CUtlVector<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >* pSegments)
{
	{
		int i; // 1901
		{
			const ClippedLineSegment_t& segment; // 1903
			bool bIsValid; // 1905
			CUtlMemory<ClippedLineSegment_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Element(
				int i);  // 1903
			PointLocation_t::IsEdge(); // 1908
			PointLocation_t::operator==(
					const PointLocation_t& other);  // 1915
			PointLocation_t::IsEdge(); // 1909
			PointLocation_t::IsValid(); // 1915
		}
		CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Count(); // 1901
	}
} /* size: 398 */

// <05CA02FB> meshutils/triangulatepolygon.cpp:1939
// variables: 2
int ClippedLineSegmentCompare(const ClippedLineSegment_t* pSegmentA, const ClippedLineSegment_t* pSegmentB)
{
	Vector vLineDirection; // 1942
	Vector vBetweenSegments; // 1945
} /* size: 0, variables: 2 */

// <05C9F446> meshutils/triangulatepolygon.cpp:1963
// variables: 4
// function calls: 67
void InvertClippedSegments(const Vector& vA, const Vector& vB, const CUtlVector<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >& segments, CUtlVector<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >* pInverseSegments)
{
	const int  nNumSegments; // 1965
	{
		const ClippedLineSegment_t& firstSegment; // 1976
		const ClippedLineSegment_t& lastSegment; // 1983
		{
			int i; // 1990
			CUtlMemory<ClippedLineSegment_t, int>::Base(); // 112
			CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Base(); // 368
			CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::GrowMemory(
					int num);  // 1249
			CUtlMemory<ClippedLineSegment_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Element(
				int i);  // 1252
			Construct<ClippedLineSegment_t, ClippedLineSegment_t>(ClippedLineSegment_t* pMemory); // 1252
			CUtlMemory<ClippedLineSegment_t, int>::NumAllocated(); // 1247
			CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::AddToTail(
					ClippedLineSegment_t& src);  // 1992
			CUtlMemory<ClippedLineSegment_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::operator[](
					int i);  // 1992
			CUtlMemory<ClippedLineSegment_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::operator[](
					int i);  // 1992
			ClippedLineSegment_t::ClippedLineSegment_t(
						const SegmentPoint_t& start,
						const SegmentPoint_t& end);  // 1992
		}
		CUtlMemory<ClippedLineSegment_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::operator[](
				int i);  // 1976
		PointLocation_t::IsValid(); // 1977
		CUtlMemory<ClippedLineSegment_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::operator[](
				int i);  // 1983
		PointLocation_t::IsValid(); // 1984
		PointLocation_t::PointLocation_t(); // 1619
		SegmentPoint_t::SegmentPoint_t(
				const Vector& vPos);  // 1979
		CUtlMemory<ClippedLineSegment_t, int>::NumAllocated(); // 1247
		CUtlMemory<ClippedLineSegment_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Element(
			int i);  // 1252
		Construct<ClippedLineSegment_t, ClippedLineSegment_t>(ClippedLineSegment_t* pMemory); // 1252
		CUtlMemory<ClippedLineSegment_t, int>::Base(); // 112
		CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Base(); // 368
		CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::AddToTail(
				ClippedLineSegment_t& src);  // 1979
		ClippedLineSegment_t::ClippedLineSegment_t(
					const SegmentPoint_t& start,
					const SegmentPoint_t& end);  // 1979
		PointLocation_t::PointLocation_t(); // 1619
		SegmentPoint_t::SegmentPoint_t(
				const Vector& vPos);  // 1986
		ClippedLineSegment_t::ClippedLineSegment_t(
					const SegmentPoint_t& start,
					const SegmentPoint_t& end);  // 1986
		CUtlMemory<ClippedLineSegment_t, int>::NumAllocated(); // 1247
		CUtlMemory<ClippedLineSegment_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Element(
			int i);  // 1252
		Construct<ClippedLineSegment_t, ClippedLineSegment_t>(ClippedLineSegment_t* pMemory); // 1252
		CUtlMemory<ClippedLineSegment_t, int>::Base(); // 112
		CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Base(); // 368
		CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::AddToTail(
				ClippedLineSegment_t& src);  // 1986
	}
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Count(); // 1965
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Count(); // 1967
	CUtlMemory<ClippedLineSegment_t, int>::IsGrowable(); // 881
	CUtlMemory<ClippedLineSegment_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<ClippedLineSegment_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::EnsureCapacity(
			int num);  // 1967
	PointLocation_t::PointLocation_t(); // 1613
	SegmentPoint_t::SegmentPoint_t(); // 1636
	PointLocation_t::PointLocation_t(); // 1613
	SegmentPoint_t::SegmentPoint_t(); // 1636
	Vector::operator=(
			const Vector& vOther);  // 1637
	Vector::operator=(
			const Vector& vOther);  // 1638
	ClippedLineSegment_t::ClippedLineSegment_t(
				const Vector& vStart,
				const Vector& vEnd);  // 1971
	CUtlMemory<ClippedLineSegment_t, int>::NumAllocated(); // 1247
	Construct<ClippedLineSegment_t, ClippedLineSegment_t>(ClippedLineSegment_t* pMemory); // 1252
	CUtlMemory<ClippedLineSegment_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Element(
		int i);  // 1252
	CUtlMemory<ClippedLineSegment_t, int>::Base(); // 112
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Base(); // 368
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::AddToTail(
			ClippedLineSegment_t& src);  // 1971
} /* size: 1162, variables: 1, inline expansions: 23 (638 bytes) */

// <05C9DF80> meshutils/triangulatepolygon.cpp:2009
// variables: 12
// function calls: 82
ClipResult_t ClipLineSegmentToPolygon(const CTriangulatedPolygon& polygon, const Vector& vA, const Vector& vB, CUtlVector<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >* pOutSegmentsInside, CUtlVector<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >* pOutSegmentsOutside)
{
	const int  nNumVertices; // 2011
	const int  nNumIndicies; // 2012
	const Vector* pVertices; // 2013
	const int* pTriangleIndices; // 2014
	VPlane polygonPlane; // 2019
	CUtlVector<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> > insideSegments; // 2024
	Vector vTriangleVertices; // 2027
	ClippedLineSegment_t clippedSegment; // 2028
	{
		int iIndex; // 2030
		Vector::operator=(
				const Vector& vOther);  // 2032
		Vector::operator=(
				const Vector& vOther);  // 2033
		Vector::operator=(
				const Vector& vOther);  // 2034
		PointLocation_t::IsValid(); // 2039
		PointLocation_t::PointLocation_t(
				int nVertexA,
				int nVertexB);  // 2042
		PointLocation_t::IsValid(); // 2045
		PointLocation_t::PointLocation_t(
				int nVertexA,
				int nVertexB);  // 2048
		CUtlMemory<ClippedLineSegment_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Element(
			int i);  // 1201
		CopyConstruct<ClippedLineSegment_t>(ClippedLineSegment_t* pMemory,
							const ClippedLineSegment_t& src);  // 1201
		CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::AddToTail(
				const ClippedLineSegment_t& src);  // 2053
	}
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::Count(); // 133
	CTriangulatedPolygon::GetNumTriangleIndices(); // 2012
	CUtlMemory<Vector, int>::Base(); // 113
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Base(); // 136
	CTriangulatedPolygon::GetVertices(); // 2013
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::Base(); // 134
	CTriangulatedPolygon::GetTriangleIndices(); // 2014
	CUtlMemory<ClippedLineSegment_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<ClippedLineSegment_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::CUtlVector(); // 2024
	Vector::Vector(); // 89
	VPlane::VPlane(); // 2019
	CUtlMemory<ClippedLineSegment_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::EnsureCapacity(
			int num);  // 2025
	PointLocation_t::PointLocation_t(); // 1613
	SegmentPoint_t::SegmentPoint_t(); // 1633
	PointLocation_t::PointLocation_t(); // 1613
	SegmentPoint_t::SegmentPoint_t(); // 1633
	ClippedLineSegment_t::ClippedLineSegment_t(); // 2028
	{
		int i; // 949
		{
			int j; // 951
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 1942
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 1945
			DotProduct(const Vector& a,
					const Vector& b);  // 1167
			Vector::Dot(
				const Vector& vOther);  // 1948
			ClippedLineSegmentCompare(const ClippedLineSegment_t* pSegmentA,
							const ClippedLineSegment_t* pSegmentB);  // 953
			CUtlMemory<ClippedLineSegment_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Element(
				int i);  // 953
			CUtlMemory<ClippedLineSegment_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Element(
				int i);  // 953
			Vector::operator=(
					const Vector& vOther);  // 1609
			SegmentPoint_t::operator=(
					SegmentPoint_t &);  // 1631
			Vector::operator=(
					const Vector& vOther);  // 1609
			SegmentPoint_t::operator=(
					SegmentPoint_t &);  // 1631
			ClippedLineSegment_t::operator=(
					ClippedLineSegment_t &);  // 236
			Vector::operator=(
					const Vector& vOther);  // 1609
			SegmentPoint_t::operator=(
					SegmentPoint_t &);  // 1631
			Vector::operator=(
					const Vector& vOther);  // 1609
			SegmentPoint_t::operator=(
					SegmentPoint_t &);  // 1631
			ClippedLineSegment_t::operator=(
					ClippedLineSegment_t &);  // 237
			swap<ClippedLineSegment_t>(ClippedLineSegment_t& __a,
							ClippedLineSegment_t& __b);  // 19
			V_swap<ClippedLineSegment_t>(ClippedLineSegment_t& x,
							ClippedLineSegment_t& y);  // 955
		}
	}
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Sort(
		int (*pfnCompare)(const ClippedLineSegment_t *, const ClippedLineSegment_t *));  // 2071
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Count(); // 1366
	CUtlMemory<ClippedLineSegment_t, int>::NumAllocated(); // 782
	CUtlMemory<ClippedLineSegment_t, int>::Base(); // 112
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Base(); // 368
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::GrowVector(
			int num);  // 1373
	{
		int i; // 1376
		CUtlMemory<ClippedLineSegment_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Element(
			int i);  // 1378
		CopyConstruct<ClippedLineSegment_t>(ClippedLineSegment_t* pMemory,
							const ClippedLineSegment_t& src);  // 1378
	}
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::AddVectorToTail<CUtlMemory<ClippedLineSegment_t, int> >(
								const CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >& src);  // 2075
	ClippedLineSegment_t::IsClipped(); // 2089
	CUtlMemory<ClippedLineSegment_t, int>::Purge(); // 903
	CUtlMemory<ClippedLineSegment_t, int>::Purge(); // 1799
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Purge(); // 560
	ValidateAlignment<ClippedLineSegment_t>(void); // 508
	CUtlMemory<ClippedLineSegment_t, int>::Purge(); // 510
	CUtlMemory<ClippedLineSegment_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::~CUtlVector(); // 2099
} /* size: 2342, variables: 8, inline expansions: 41 (1986 bytes) */

// <05C9DF38> meshutils/triangulatepolygon.cpp:2104
// variables: 2
void ConvertSegmentsToPoints(const CUtlVector<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >& segments, CUtlVector<Vector, CUtlMemory<Vector, int> >* pOutSegmentPoints)
{
	const int  nNumSegments; // 2109
	{
		int i; // 2113
	}
} /* size: 0, variables: 1 */

// <05C9D7E4> meshutils/triangulatepolygon.cpp:2123
// variables: 6
// function calls: 27
void CTriangulatedPolygon::ClipLineSegment(const Vector& vA, const Vector& vB, CUtlVector<Vector, CUtlMemory<Vector, int> >* pOutSegmentPointsInside, CUtlVector<Vector, CUtlMemory<Vector, int> >* pOutSegmentPointsOutside)
{
	const char   __FUNCTION__; // 30543
	CUtlVector<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> > insideSegments; // 2130
	CUtlVector<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> > outsideSegments; // 2131
	CUtlVector<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >* pInsideSegments; // 2132
	CUtlVector<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >* pOutsideSegments; // 2133
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2126
	}
	CUtlMemory<ClippedLineSegment_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<ClippedLineSegment_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::CUtlVector(); // 2130
	CUtlMemory<ClippedLineSegment_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<ClippedLineSegment_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::CUtlVector(); // 2131
	ConvertSegmentsToPoints(const CUtlVector<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >& segments,
				CUtlVector<Vector, CUtlMemory<Vector, int> >* pOutSegmentPoints);  // 2137
	ConvertSegmentsToPoints(const CUtlVector<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >& segments,
				CUtlVector<Vector, CUtlMemory<Vector, int> >* pOutSegmentPoints);  // 2138
	CUtlMemory<ClippedLineSegment_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<ClippedLineSegment_t, int>::Purge(); // 903
	CUtlMemory<ClippedLineSegment_t, int>::Purge(); // 1799
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Purge(); // 560
	ValidateAlignment<ClippedLineSegment_t>(void); // 508
	CUtlMemory<ClippedLineSegment_t, int>::Purge(); // 510
	CUtlMemory<ClippedLineSegment_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::~CUtlVector(); // 2139
	CUtlMemory<ClippedLineSegment_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<ClippedLineSegment_t, int>::Purge(); // 903
	CUtlMemory<ClippedLineSegment_t, int>::Purge(); // 1799
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Purge(); // 560
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::~CUtlVector(); // 2139
} /* size: 0, variables: 5, inline expansions: 27 (531 bytes) */

// <05C9D522> meshutils/triangulatepolygon.cpp:2152
// variables: 12
// function calls: 5
ClipResult_t ClipPolygonByPolygon(ClipPolygonMode_t nMode, const CTriangulatedPolygon& polygonToClip, CTriangulatedPolygon& referencePolygon, CUtlVector<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >* pOutClippedEdges)
{
	int nNumOutside; // 2154
	int nNumInside; // 2155
	int nNumIntersecting; // 2156
	const int  nNumVertices; // 2158
	const Vector* pVertices; // 2159
	CUtlVector<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >* pOutEdgesInside; // 2161
	CUtlVector<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >* pOutEdgesOutside; // 2162
	const char   __FUNCTION__; // 28667
	{
		int nA; // 2164
		int nB; // 2164
		{
			ClipResult_t nEdgeClipResult; // 2166
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2184
	}
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Count(); // 135
	CTriangulatedPolygon::GetNumVertices(); // 2158
	CUtlMemory<Vector, int>::Base(); // 113
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Base(); // 136
	CTriangulatedPolygon::GetVertices(); // 2159
} /* size: 0, variables: 8, inline expansions: 5 (0 bytes) */

// <05C9D49E> meshutils/triangulatepolygon.cpp:2203
// variables: 6
int FindNextEdge(const ClippedLineSegment_t& currentEdge, const CUtlVector<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >& clippedEdges)
{
	const int  nNumEdges; // 2205
	const Vector& vEnd; // 2207
	float flMinDistSq; // 2209
	int nBestEdge; // 2210
	{
		int iEdge; // 2211
		{
			const float  flDistSq; // 2213
		}
	}
} /* size: 0, variables: 4 */

// <05C99C01> meshutils/triangulatepolygon.cpp:2227
// variables: 27
// function calls: 188
bool ComputePolygonUnion(CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& polygonVerticesA, CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& polygonVerticesB, CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >* pOutUnionPolygon, CUtlVector<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, pOutHoles)
{
	CTriangulatedPolygon polygonA; // 2235
	CTriangulatedPolygon polygonB; // 2235
	CUtlVector<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> > clippedEdges; // 2250
	ClipResult_t clipResultAB; // 2251
	ClipResult_t clipResultBA; // 2252
	CUtlVector<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int> > edgeLoops; // 2278
	int nExteriorEdgeLoop; // 2304
	const int  nNumEdgeLoops; // 2305
	const char   __FUNCTION__; // 25067
	{
		CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Count(); // 1498
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::Count(); // 1498
		CTriangulatedPolygon::IsValid(); // 2240
		CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Count(); // 1498
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::Count(); // 1498
		CTriangulatedPolygon::IsValid(); // 2240
	}
	{
		DotProduct(const Vector& a,
				const Vector& b);  // 1167
		Vector::Dot(
			const Vector& vOther);  // 2244
		_DebuggerBreakInlineExpressionWrapper(void); // 2244
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 2273
	}
	{
		CUtlVector<Vector, CUtlMemory<Vector, int> >& edgeLoop; // 2283
		ClippedLineSegment_t currentEdge; // 2285
		{
			const int  nNextEdge; // 2290
			{
				int iEdge; // 2211
				{
					const float  flDistSq; // 2213
					Vector::Vector(); // 194
					Vector::LengthSqr(); // 198
					Vector::DistToSqr(
							const Vector& vOther);  // 2213
				}
			}
			FindNextEdge(const ClippedLineSegment_t& currentEdge,
					const CUtlVector<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >& clippedEdges);  // 2290
			CUtlMemory<ClippedLineSegment_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::operator[](
					int i);  // 2294
			CUtlMemory<Vector, int>::NumAllocated(); // 1196
			CUtlMemory<Vector, int>::operator[](
					int i);  // 602
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
				int i);  // 1201
			CopyConstruct<Vector>(Vector* pMemory,
						const Vector& src);  // 1201
			CUtlMemory<Vector, int>::Base(); // 112
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
					const Vector& src);  // 2295
			Vector::operator=(
					const Vector& vOther);  // 1609
			SegmentPoint_t::operator=(
					const SegmentPoint_t  &);  // 1631
			Vector::operator=(
					const Vector& vOther);  // 1609
			SegmentPoint_t::operator=(
					const SegmentPoint_t  &);  // 1631
			ClippedLineSegment_t::operator=(
					const ClippedLineSegment_t  &);  // 2294
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 115
			V_memmove(void* dest,
					const void* src,
					size_t count);  // 1114
			CUtlMemory<ClippedLineSegment_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Element(
				int i);  // 1114
			CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::ShiftElementsLeft(
						int elem,
						int num);  // 1608
			CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Remove(
				int elem);  // 2296
		}
		CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int>  this,
			int i);  // 1148
		CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
		CUtlMemory<Vector, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 1479
		Construct<CUtlVector<Vector> >(CUtlVector<Vector, CUtlMemory<Vector, int> >* pMemory); // 1148
		CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::Grow(
			int num);  // 806
		GrowMemory(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int>  this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> this); // 2283
		CUtlMemory<Vector, int>::Base(); // 112
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
				int num);  // 1198
		CopyConstruct<Vector>(Vector* pMemory,
					const Vector& src);  // 1201
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
				const Vector& src);  // 2286
		CUtlMemory<ClippedLineSegment_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Element(
			int i);  // 1114
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 115
		V_memmove(void* dest,
				const void* src,
				size_t count);  // 1114
		CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::ShiftElementsLeft(
					int elem,
					int num);  // 1608
		CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Remove(
			int elem);  // 2299
	}
	{
		int iLoop; // 2306
		{
			CUtlVector<Vector, CUtlMemory<Vector, int> >& edgeLoop; // 2308
			float flPlaneDist; // 2311
			Vector vLoopNormal; // 2312
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2318
			}
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 2313
			CUtlMemory<Vector, int>::Base(); // 112
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 2313
			DotProduct(const Vector& a,
					const Vector& b);  // 1167
			Vector::Dot(
				const Vector& vOther);  // 2315
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2327
	}
	{
		int iLoop; // 2337
		{
			CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >* pOutput; // 2339
			{
				CUtlVector<Vector, CUtlMemory<Vector, int> >& edgeLoop; // 2351
				const int  nNumVerticesInLoop; // 2352
				{
					int iVert; // 2355
					CUtlMemory<Vector, int>::operator[](
							int i);  // 588
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
							int i);  // 2357
					CUtlMemory<Vector2D, int>::operator[](
							int i);  // 602
					CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Element(
						int i);  // 2357
					Vector2D::operator=(
							const Vector2D& vOther);  // 2357
				}
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 2352
			}
			CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::NumAllocated(); // 1143
			CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::Base(); // 112
			Base(const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this); // 368
			ResetDbgInfo(const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this); // 824
			CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::IsGrowable(); // 823
			CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::IsExternallyAllocated(); // 859
			CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::IsExternallyAllocated(); // 861
			CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::Grow(
				int num);  // 806
			GrowMemory(const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this,
					int num);  // 1145
			CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this,
				int i);  // 1148
			CUtlMemory<Vector2D, int>::ValidateGrowSize(); // 475
			CUtlMemory<Vector2D, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >::CUtlVector(); // 1479
			Construct<CUtlVector<Vector2D> >(CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >* pMemory); // 1148
			AddToTail(const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this); // 1156
			CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this,
				int i);  // 1156
			AddToTailGetPtr(const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this); // 2346
		}
	}
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::RemoveAll(); // 2229
	{
		int i; // 1721
		CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this,
			int i);  // 1723
		CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::RemoveAll(); // 1798
		CUtlMemory<Vector2D, int>::IsExternallyAllocated(); // 905
		CUtlMemory<Vector2D, int>::Purge(); // 903
		CUtlMemory<Vector2D, int>::Purge(); // 1799
		CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Purge(); // 560
		ValidateAlignment<Vector2D>(void); // 508
		CUtlMemory<Vector2D, int>::Purge(); // 510
		CUtlMemory<Vector2D, int>::~CUtlMemory(); // 562
		CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::~CUtlVectorBase(); // 410
		CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >::~CUtlVector(); // 1526
		Destruct<CUtlVector<Vector2D> >(CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this); // 2232
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Count(); // 2236
	CUtlMemory<Vector2D, int>::Base(); // 112
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Base(); // 2236
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Count(); // 2237
	CUtlMemory<Vector2D, int>::Base(); // 112
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Base(); // 2237
	CUtlMemory<ClippedLineSegment_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<ClippedLineSegment_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::CUtlVector(); // 2250
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int>  this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, i this); // 2278
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::EnsureCapacity(
			int num);  // 1006
	EnsureCapacity(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int>  this,
			int num);  // 2279
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Count(); // 573
	CUtlMemory<Vector2D, int>::Base(); // 112
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Base(); // 102
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::begin(); // 574
	CUtlMemory<Vector2D, int>::Base(); // 113
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Base(); // 105
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Count(); // 105
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::end(); // 574
	Vector2D::operator=(
			const Vector2D& vOther);  // 209
	UtlTraitsCopyRange<Vector2D>(const Vector2D* pFrom,
					const Vector2D* pFromEnd,
					Vector2D* pTo);  // 200
	UtlTraitsCopyRange<Vector2D>(const Vector2D* pFrom,
					const Vector2D* pFromEnd,
					Vector2D* pTo);  // 574
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::operator=(
			const CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >& other);  // 565
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::operator=(
			const CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >& other);  // 452
	CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >::operator=(
			const CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& src);  // 2263
	CUtlMemory<ClippedLineSegment_t, int>::Purge(); // 903
	CUtlMemory<ClippedLineSegment_t, int>::Purge(); // 1799
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::Purge(); // 560
	ValidateAlignment<ClippedLineSegment_t>(void); // 508
	CUtlMemory<ClippedLineSegment_t, int>::Purge(); // 510
	CUtlMemory<ClippedLineSegment_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<ClippedLineSegment_t, CUtlMemory<ClippedLineSegment_t, int> >::~CUtlVector(); // 2363
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Count(); // 573
	CUtlMemory<Vector2D, int>::Base(); // 112
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Base(); // 102
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::begin(); // 574
	CUtlMemory<Vector2D, int>::Base(); // 113
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Base(); // 105
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Count(); // 105
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::end(); // 574
	Vector2D::operator=(
			const Vector2D& vOther);  // 209
	UtlTraitsCopyRange<Vector2D>(const Vector2D* pFrom,
					const Vector2D* pFromEnd,
					Vector2D* pTo);  // 200
	UtlTraitsCopyRange<Vector2D>(const Vector2D* pFrom,
					const Vector2D* pFromEnd,
					Vector2D* pTo);  // 574
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::operator=(
			const CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >& other);  // 565
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::operator=(
			const CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >& other);  // 452
	CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >::operator=(
			const CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& src);  // 2257
	{
		int i; // 1721
		CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int>  this,
			int i);  // 1723
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1798
		CUtlMemory<Vector, int>::IsExternallyAllocated(); // 905
		CUtlMemory<Vector, int>::Purge(); // 903
		CUtlMemory<Vector, int>::Purge(); // 1799
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
		ValidateAlignment<Vector>(void); // 508
		CUtlMemory<Vector, int>::Purge(); // 510
		CUtlMemory<Vector, int>::~CUtlMemory(); // 562
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
		CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 1526
		Destruct<CUtlVector<Vector> >(CUtlVector<Vector, CUtlMemory<Vector, int> >* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> this); // 1798
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> this); // 560
	ValidateAlignment<CUtlVector<Vector> >(void); // 508
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, i this); // 2363
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::IsGrowable(); // 881
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this); // 1024
	EnsureCapacity(const CUtlVectorBase<CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >, CUtlMemory<CUtlVector<Vector2D, CUtlMemory<Vector2 this,
			int num);  // 2334
} /* size: 0, variables: 9, inline expansions: 70 (0 bytes) */

