
//
// meshutils/bentnormals.cpp
//
//	referenced by: libengine2.so
//
//	functions: 3
//	struct: 1
//

// <06192142> meshutils/bentnormals.cpp:14
// variables: 25
// function calls: 90
void ComputeBentNormals(const RayTracingEnvironment* pRte, int nNumVertices, const Vector* pPositions, const Vector* pNormals, Vector* pOutBentNormals)
{
	uint16 nSkipFlags; // 16
	CUniformRandomStream rstream; // 23
	const int  nSqrtDirectionalSamples; // 25
	CFilteredRayStream<CFilterSkipFlags> raystream; // 26
	CUtlVector<RayTracingSingleResult_t, CUtlMemory<RayTracingSingleResult_t, int> > rayresults; // 27
	{
		int iVertex; // 31
		{
			const Vector  vVertexPosition; // 33
			const Vector  vVertexNormal; // 34
			Vector vTangent1; // 37
			Vector vTangent2; // 37
			float flOoSampleCount; // 42
			float flR1; // 43
			float flR2; // 43
			int nSampleIndex; // 44
			Vector vAverageNormal; // 62
			{
				int nR1; // 45
				{
					int nR2; // 48
					{
						float r1; // 51
						float r2; // 52
						Vector vDirection; // 53
						Vector vStart; // 54
						Vector vEnd; // 55
						SinCos(float radians,
							float* sine,
							float* cosine);  // 847
						Vector::Vector(); // 1450
						VectorMultiply(const Vector& a,
								vec_t b,
								Vector& c);  // 1451
						Vector::operator*(
								float fl);  // 1478
						operator*(float fl,
								const Vector& v);  // 851
						VectorMultiply(const Vector& a,
								vec_t b,
								Vector& c);  // 1451
						Vector::Vector(); // 1450
						Vector::operator*(
								float fl);  // 1478
						operator*(float fl,
								const Vector& v);  // 849
						VectorMultiply(const Vector& a,
								vec_t b,
								Vector& c);  // 1451
						Vector::Vector(); // 1450
						Vector::operator*(
								float fl);  // 1478
						operator*(float fl,
								const Vector& v);  // 850
						VectorAdd(const Vector& a,
								const Vector& b,
								Vector& c);  // 1437
						Vector::Vector(); // 1436
						Vector::operator+(
								const Vector& v);  // 850
						VectorAdd(const Vector& a,
								const Vector& b,
								Vector& c);  // 1437
						Vector::Vector(); // 1436
						Vector::operator+(
								const Vector& v);  // 851
						CosineHemisphere(float flR1,
								float flR2,
								const Vector& vNormal,
								const Vector& vTangent1,
								const Vector& vTangent2);  // 53
						VectorMultiply(const Vector& a,
								vec_t b,
								Vector& c);  // 1451
						Vector::Vector(); // 1450
						Vector::operator*(
								float fl);  // 1478
						operator*(float fl,
								const Vector& v);  // 54
						VectorAdd(const Vector& a,
								const Vector& b,
								Vector& c);  // 1437
						Vector::Vector(); // 1436
						Vector::operator+(
								const Vector& v);  // 54
						VectorAdd(const Vector& a,
								const Vector& b,
								Vector& c);  // 1437
						Vector::Vector(); // 1436
						Vector::operator+(
								const Vector& v);  // 55
						VectorMultiply(const Vector& a,
								vec_t b,
								Vector& c);  // 1451
						Vector::Vector(); // 1450
						Vector::operator*(
								float fl);  // 1478
						operator*(float fl,
								const Vector& v);  // 55
						CUtlMemory<RayTracingSingleResult_t, int>::operator[](
								int i);  // 588
						CUtlVectorBase<RayTracingSingleResult_t, CUtlMemory<RayTracingSingleResult_t, int> >::operator[](
								int i);  // 56
					}
				}
			}
			{
				int nR1; // 65
				{
					int nR2; // 68
					RayTracingSingleResult_t::HasAnyIntersections(); // 416
					RayTracingSingleResult_t::HasIntersection(); // 70
					SinCos(float radians,
						float* sine,
						float* cosine);  // 847
					Vector::Vector(); // 1450
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::operator*(
							float fl);  // 1478
					operator*(float fl,
							const Vector& v);  // 851
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::Vector(); // 1450
					Vector::operator*(
							float fl);  // 1478
					operator*(float fl,
							const Vector& v);  // 849
					Vector::Vector(); // 1450
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::operator*(
							float fl);  // 1478
					operator*(float fl,
							const Vector& v);  // 850
					VectorAdd(const Vector& a,
							const Vector& b,
							Vector& c);  // 1437
					Vector::Vector(); // 1436
					Vector::operator+(
							const Vector& v);  // 850
					VectorAdd(const Vector& a,
							const Vector& b,
							Vector& c);  // 1437
					Vector::Vector(); // 1436
					Vector::operator+(
							const Vector& v);  // 851
					CosineHemisphere(float flR1,
							float flR2,
							const Vector& vNormal,
							const Vector& vTangent1,
							const Vector& vTangent2);  // 72
					Vector::operator+=(
							const Vector& v);  // 72
				}
			}
			Vector::Vector(); // 37
			Vector::Vector(); // 37
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 41
			Vector::operator!=(
					const Vector& src);  // 78
			Vector::operator=(
					const Vector& vOther);  // 84
			Vector::operator=(
					const Vector& vOther);  // 80
			Vector::Normalized(); // 80
		}
	}
	CFilterSkipFlags::CFilterSkipFlags(
			uint32 nSkipFlagMask);  // 26
	memset(void* __dest,
		int __ch,
		size_t __len);  // 750
	CFilteredRayStream<CFilterSkipFlags>::CFilteredRayStream(
				RTECullMode_t cullMode,
				CFilterSkipFlags filter);  // 26
	CUtlMemory<RayTracingSingleResult_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<RayTracingSingleResult_t, CUtlMemory<RayTracingSingleResult_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<RayTracingSingleResult_t, CUtlMemory<RayTracingSingleResult_t, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
	}
	CUtlVectorBase<RayTracingSingleResult_t, CUtlMemory<RayTracingSingleResult_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<RayTracingSingleResult_t, CUtlMemory<RayTracingSingleResult_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<RayTracingSingleResult_t, CUtlMemory<RayTracingSingleResult_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<RayTracingSingleResult_t, CUtlMemory<RayTracingSingleResult_t, int> >::SetCount(
		int count);  // 28
	CUtlMemory<RayTracingSingleResult_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<RayTracingSingleResult_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<RayTracingSingleResult_t, CUtlMemory<RayTracingSingleResult_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<RayTracingSingleResult_t, CUtlMemory<RayTracingSingleResult_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<RayTracingSingleResult_t, CUtlMemory<RayTracingSingleResult_t, int> >::CUtlVector(); // 27
	CUtlMemory<RayTracingSingleResult_t, int>::Purge(); // 903
	CUtlMemory<RayTracingSingleResult_t, int>::Purge(); // 1799
	CUtlVectorBase<RayTracingSingleResult_t, CUtlMemory<RayTracingSingleResult_t, int> >::Purge(); // 560
	ValidateAlignment<RayTracingSingleResult_t>(void); // 508
	CUtlMemory<RayTracingSingleResult_t, int>::Purge(); // 510
	CUtlMemory<RayTracingSingleResult_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<RayTracingSingleResult_t, CUtlMemory<RayTracingSingleResult_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RayTracingSingleResult_t, CUtlMemory<RayTracingSingleResult_t, int> >::~CUtlVector(); // 87
} /* size: 0, variables: 5, inline expansions: 23 (0 bytes) */

// <0618CCAD> meshutils/bentnormals.cpp:92
// member variables: 5
// struct size: 40
struct BentNormalComputationJob_t {
	int m_nNumVertices; /* 0 4 */
	const class Vector * m_pPositions; /* 8 8 */
	const class Vector * m_pNormals; /* 16 8 */
	Vector * m_pOutBentNormals; /* 24 8 */
	const class RayTracingEnvironment * m_pRte; /* 32 8 */
};

// <061920F7> meshutils/bentnormals.cpp:104
void ProcessBentNormalsComputationJob(BentNormalComputationJob_t& job)
{
} /* size: 0 */

// <06191BC9> meshutils/bentnormals.cpp:112
// variables: 6
// function calls: 17
void BuildBentNormalComputationJobs(const RayTracingEnvironment* pRte, int nNumVertices, const Vector* pPositions, const Vector* pNormals, Vector* pOutBentNormals, CUtlVector<BentNormalComputationJob_t, CUtlMemory<BentNormalComputationJob_t, int> >* pOutJobList)
{
	const int  nMaxVerticesPerJob; // 114
	int nVertexOffset; // 116
	const int  nNumJobs; // 117
	{
		int iJob; // 120
		{
			BentNormalComputationJob_t& job; // 122
			const int  nNumRemainingVertices; // 124
			CUtlMemory<BentNormalComputationJob_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<BentNormalComputationJob_t, CUtlMemory<BentNormalComputationJob_t, int> >::Element(
				int i);  // 122
			Min<int>(const int& val1,
				const int& val2);  // 125
		}
	}
	CUtlMemory<BentNormalComputationJob_t, int>::NumAllocated(); // 782
	CUtlMemory<BentNormalComputationJob_t, int>::IsGrowable(); // 823
	CUtlMemory<BentNormalComputationJob_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<BentNormalComputationJob_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<BentNormalComputationJob_t, int>::Grow(
		int num);  // 806
	CUtlMemory<BentNormalComputationJob_t, int>::Base(); // 112
	CUtlVectorBase<BentNormalComputationJob_t, CUtlMemory<BentNormalComputationJob_t, int> >::Base(); // 368
	CUtlVectorBase<BentNormalComputationJob_t, CUtlMemory<BentNormalComputationJob_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<BentNormalComputationJob_t, CUtlMemory<BentNormalComputationJob_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<BentNormalComputationJob_t, CUtlMemory<BentNormalComputationJob_t, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<BentNormalComputationJob_t, CUtlMemory<BentNormalComputationJob_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<BentNormalComputationJob_t, CUtlMemory<BentNormalComputationJob_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<BentNormalComputationJob_t, CUtlMemory<BentNormalComputationJob_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<BentNormalComputationJob_t, CUtlMemory<BentNormalComputationJob_t, int> >::SetCount(
		int count);  // 118
} /* size: 0, variables: 3, inline expansions: 14 (0 bytes) */

