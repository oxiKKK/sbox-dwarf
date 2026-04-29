
//
// meshutils/quickhullsimplifier.cpp
//
//	referenced by: libengine2.so
//
//	functions: 3
//

// <0610F9A9> meshutils/quickhullsimplifier.cpp:8
// variables: 25
// function calls: 127
void CQuickHullSimplifier::Run(qhConvex* pSource, int nNewFaceCount)
{
	int nSourceFaceIt; // 17
	qhConvex dualHull; // 43
	CUtlVector<Vector, CUtlMemory<Vector, int> > dualVertices; // 44
	CUtlVector<float, CUtlMemory<float, int> > dualVertexWeights; // 45
	qhVector3 vecCentroid; // 51
	const char   __FUNCTION__; // 45673
	qhArray<qhVector3> primalVertices; // 77
	qhConvex* pTarget; // 89
	{
		const qhFace* pSourceFace; // 18
		{
			Face_t& face; // 20
			CUtlMemory<CQuickHullSimplifier::Face_t, int>::Base(); // 112
			CUtlVectorBase<CQuickHullSimplifier::Face_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int> >::Base(); // 368
			CUtlVectorBase<CQuickHullSimplifier::Face_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int> >::ResetDbgInfo(); // 824
			CUtlMemory<CQuickHullSimplifier::Face_t, int>::IsGrowable(); // 823
			CUtlMemory<CQuickHullSimplifier::Face_t, int>::IsExternallyAllocated(); // 859
			CUtlMemory<CQuickHullSimplifier::Face_t, int>::IsExternallyAllocated(); // 861
			CUtlMemory<CQuickHullSimplifier::Face_t, int>::Grow(
				int num);  // 806
			CUtlVectorBase<CQuickHullSimplifier::Face_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int> >::GrowMemory(
					int num);  // 1145
			CUtlMemory<CQuickHullSimplifier::Face_t, int>::NumAllocated(); // 1143
			CUtlVectorBase<CQuickHullSimplifier::Face_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int> >::AddToTail(); // 20
			CUtlMemory<CQuickHullSimplifier::Face_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CQuickHullSimplifier::Face_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int> >::operator[](
					int i);  // 20
		}
		qhList<qhFace>::Begin(); // 18
		qhList<qhFace>::End(); // 18
	}
	{
		int nAttempt; // 31
	}
	{
		int nFace; // 53
		{
			Face_t& face; // 55
			qhPlane Plane; // 57
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
			}
			qhVector3::qhVector3(
					qhReal x,
					qhReal y,
					qhReal z);  // 194
			qhVector3::operator-(); // 58
			CUtlMemory<CQuickHullSimplifier::Face_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CQuickHullSimplifier::Face_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int> >::operator[](
					int i);  // 55
			qhDot(const qhVector3& V1,
				const qhVector3& V2);  // 1046
			qhPlane::Translate(
					const qhVector3& Translation);  // 58
			qhVector3::qhVector3(
					qhReal x,
					qhReal y,
					qhReal z);  // 258
			operator/(const qhVector3& V,
					qhReal S);  // 61
			qhVector3::qhVector3(
					qhReal x,
					qhReal y,
					qhReal z);  // 244
			operator*(qhReal S,
					const qhVector3& V);  // 61
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 12
			AsVector(const qhVector3& V); // 61
			CUtlMemory<Vector, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 61
			Vector::operator+=(
					const Vector& v);  // 61
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 62
		}
		Count(const CUtlVectorBase<CQuickHullSimplifier::Face_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int> this); // 53
	}
	{
		int nFace; // 64
		Count(const CUtlVectorBase<CQuickHullSimplifier::Cluster_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, this); // 64
		Vector::operator/=(
				float fl);  // 66
	}
	{
		const qhFace* pFace; // 78
		{
			const qhPlane& plane; // 80
			qhVector3 primalVertex; // 84
			qhArray<qhVector3>::Capacity(); // 112
			qhCopyConstruct<qhVector3>(qhVector3* Address,
							const qhVector3& Other);  // 115
			{
				qhVector3* Begin; // 69
				qhSwap<qhVector3>(qhVector3& Lhs,
							qhVector3& Rhs);  // 156
				qhMove<qhVector3>(qhVector3* Address,
							qhVector3* Begin,
							qhVector3* End);  // 70
				qhArray<qhVector3>::Size(); // 74
			}
			qhArray<qhVector3>::Reserve(
				int Count);  // 65
			qhArray<qhVector3>::Reserve(
				int Count);  // 112
			qhArray<qhVector3>::PushBack(
				const qhVector3& Other);  // 85
			qhVector3::qhVector3(
					qhReal x,
					qhReal y,
					qhReal z);  // 258
			operator/(const qhVector3& V,
					qhReal S);  // 84
			qhVector3::qhVector3(
					qhReal x,
					qhReal y,
					qhReal z);  // 230
			operator+(const qhVector3& V1,
					const qhVector3& V2);  // 84
		}
		qhList<qhFace>::Begin(); // 78
		qhList<qhFace>::End(); // 78
	}
	qhConvex::GetFaceList(); // 10
	CUtlVectorBase<CQuickHullSimplifier::Face_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<256, CQuickHullSimplifier::Face_t, 8>::Base(); // 237
	CUtlMemory<CQuickHullSimplifier::Face_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CQuickHullSimplifier::Face_t, int>::ConvertToExternalMemory(
				Face_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CQuickHullSimplifier::Face_t, int>::Purge_FixedGrowable(
				Face_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CQuickHullSimplifier::Face_t, int>::Purge_FixedGrowable(
				Face_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CQuickHullSimplifier::Face_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CQuickHullSimplifier::Face_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int> >::Purge(); // 11
	CUtlMemory<CQuickHullSimplifier::Cluster_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CQuickHullSimplifier::Cluster_t, int>::ConvertToExternalMemory(
				Cluster_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CQuickHullSimplifier::Cluster_t, int>::Purge_FixedGrowable(
				Cluster_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CQuickHullSimplifier::Cluster_t, int>::Purge_FixedGrowable(
				Cluster_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<256, CQuickHullSimplifier::Cluster_t, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, int>::Purge(
		int numElements);  // 1799
	RemoveAll(const CUtlVectorBase<CQuickHullSimplifier::Cluster_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, int> this); // 1798
	ResetDbgInfo(const CUtlVectorBase<CQuickHullSimplifier::Cluster_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, int> this); // 1800
	Purge(const CUtlVectorBase<CQuickHullSimplifier::Cluster_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, int> this); // 12
	CUtlMemory<CQuickHullSimplifier::Face_t, int>::IsGrowable(); // 881
	CUtlMemory<CQuickHullSimplifier::Face_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CQuickHullSimplifier::Face_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<CQuickHullSimplifier::Face_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<CQuickHullSimplifier::Face_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int> >::EnsureCapacity(
			int num);  // 14
	Count(const CUtlVectorBase<CQuickHullSimplifier::Cluster_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, this); // 38
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 44
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 45
	Count(const CUtlVectorBase<CQuickHullSimplifier::Cluster_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, this); // 46
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
		int count);  // 46
	{
		int i; // 1554
	}
	CUtlVectorBase<float, CUtlMemory<float, int> >::FillWithValue(
			const float& src);  // 49
	qhList<qhVertex>::Empty(); // 14
	{
		int VertexCount; // 16
		{
			const qhVertex* Vertex; // 17
			qhVector3::operator+=(
					const qhVector3& V);  // 19
		}
		qhVector3::operator/=(
				qhReal S);  // 23
	}
	qhConvex::GetCentroid(); // 51
	qhArray<qhVector3>::qhArray(); // 77
	qhArray<qhVector3>::Size(); // 25
	qhDestroy<qhVector3>(qhVector3* Address,
				int N);  // 25
	qhArray<qhVector3>::~qhArray(); // 99
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 99
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 99
	qhArray<qhVector3>::Size(); // 90
	{
		int i; // 1554
		Vector::operator=(
				const Vector& vOther);  // 1556
	}
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::FillWithValue(
			const Vector& src);  // 47
	Count(const CUtlVectorBase<CQuickHullSimplifier::Cluster_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, this); // 48
	CUtlMemory<float, int>::Grow(
		int num);  // 806
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
		int count);  // 48
} /* size: 0, variables: 8, inline expansions: 76 (0 bytes) */

// <0610F805> meshutils/quickhullsimplifier.cpp:103
// variables: 4
// function calls: 5
void CQuickHullSimplifier::FindBestCluster(const Vector& vecNormal)
{
	int nBestCluster; // 106
	float flBestCosine; // 107
	{
		int nCluster; // 108
		{
			float flCosine; // 110
			DotProduct(const Vector& a,
					const Vector& b);  // 110
		}
		Count(const CUtlVectorBase<CQuickHullSimplifier::Cluster_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, this); // 108
	}
	CUtlMemory<CQuickHullSimplifier::Cluster_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CQuickHullSimplifier::Cluster_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, int>  this,
			int i);  // 107
	DotProduct(const Vector& a,
			const Vector& b);  // 107
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <0610F02A> meshutils/quickhullsimplifier.cpp:122
// variables: 9
// function calls: 30
void CQuickHullSimplifier::ReassignClusters()
{
	uint nReassignmentCounter; // 150
	{
		int nFace; // 127
		{
			Face_t& face; // 129
			Cluster_t& cluster; // 130
			CUtlMemory<CQuickHullSimplifier::Face_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CQuickHullSimplifier::Face_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int> >::operator[](
					int i);  // 129
			CUtlMemory<CQuickHullSimplifier::Cluster_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CQuickHullSimplifier::Cluster_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, int>  this,
					int i);  // 130
			qhVector3::qhVector3(
					qhReal x,
					qhReal y,
					qhReal z);  // 251
			operator*(const qhVector3& V,
					qhReal S);  // 132
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 12
			AsVector(const qhVector3& V); // 132
			Vector::operator+=(
					const Vector& v);  // 132
		}
		Count(const CUtlVectorBase<CQuickHullSimplifier::Face_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int> this); // 127
	}
	{
		int nCluster; // 136
		Count(const CUtlVectorBase<CQuickHullSimplifier::Cluster_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, this); // 136
		Destruct<CQuickHullSimplifier::Cluster_t>(Cluster_t* pMemory); // 1575
		{
			const bool  bNotLast; // 1578
			CUtlMemory<CQuickHullSimplifier::Cluster_t, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CQuickHullSimplifier::Cluster_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, int>  this,
				int i);  // 1584
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1584
		}
		FastRemove(const CUtlVectorBase<CQuickHullSimplifier::Cluster_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, int>  this,
				int elem);  // 146
		CUtlMemory<CQuickHullSimplifier::Cluster_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CQuickHullSimplifier::Cluster_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, int>  this,
				int i);  // 138
		Vector::NormalizeInPlace(); // 140
	}
	{
		int nFace; // 153
		{
			Face_t& face; // 155
			int nBestCluster; // 156
			CUtlMemory<CQuickHullSimplifier::Face_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CQuickHullSimplifier::Face_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int> >::operator[](
					int i);  // 155
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 12
			AsVector(const qhVector3& V); // 156
		}
		Count(const CUtlVectorBase<CQuickHullSimplifier::Face_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int> this); // 153
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 124
	Count(const CUtlVectorBase<CQuickHullSimplifier::Cluster_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, this); // 124
	CUtlMemory<CQuickHullSimplifier::Cluster_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CQuickHullSimplifier::Cluster_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, int> this); // 124
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

