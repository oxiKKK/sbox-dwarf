
//
// mathlib/extended/feagglomerator.cpp
//
//	referenced by: libengine2.so
//
//	functions: 22
//

// <06F2E33E> mathlib/extended/feagglomerator.cpp:5
// variable: 1
// function calls: 21
void CFeAgglomerator::CFeAgglomerator(uint nReserveNodes)
{
	CUtlMemory<CFeAgglomerator::CCluster::ValidateGrowSize(); // 475
	CUtlMemory<CFeAgglomerator::CCluster::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CFeAgglomerator::CCluster::ResetDbgInfo(); // 530
	CUtlVectorBase<CFeAgglomerator::CCluster::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CFeAgglomerator::CCluster::CUtlVector(); // 5
	CUtlMemory<CFeAgglomerator::CCluster::IsExternallyAllocated(); // 888
	CUtlMemory<CFeAgglomerator::CCluster::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<CFeAgglomerator::CCluster::ResetDbgInfo(); // 1024
	CUtlVectorBase<CFeAgglomerator::CCluster::EnsureCapacity(
			int num);  // 7
	CUtlMemory<CFeAgglomerator::CCluster::NumAllocated(); // 782
	CUtlMemory<CFeAgglomerator::CCluster::Base(); // 112
	CUtlVectorBase<CFeAgglomerator::CCluster::Base(); // 368
	CUtlVectorBase<CFeAgglomerator::CCluster::ResetDbgInfo(); // 824
	CUtlVectorBase<CFeAgglomerator::CCluster::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CFeAgglomerator::CCluster::GrowVector(
			int num);  // 1445
	CUtlVectorBase<CFeAgglomerator::CCluster::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CFeAgglomerator::CCluster::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CFeAgglomerator::CCluster::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CFeAgglomerator::CCluster::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlVectorBase<CFeAgglomerator::CCluster::SetCount(
		int count);  // 8
	{
		int i; // 1554
	}
	CUtlVectorBase<CFeAgglomerator::CCluster::FillWithValue(
			CCluster* const& src);  // 9
} /* size: 288, inline expansions: 21 (635 bytes) */

// <06F2E319> mathlib/extended/feagglomerator.cpp:5
void CFeAgglomerator::CFeAgglomerator(uint nReserveNodes)
{
} /* size: 0 */

// <06F2DD39> mathlib/extended/feagglomerator.cpp:19
// variable: 1
// function calls: 28
void CFeAgglomerator::~CFeAgglomerator()
{
	{
		int i; // 1807
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 602
		CUtlVectorBase<CFeAgglomerator::CCluster::Element(
			int i);  // 1809
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::RemoveAll(); // 1798
		CUtlMemory<CFeAgglomerator::CLink, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CFeAgglomerator::CLink, int>::Purge(); // 903
		CUtlMemory<CFeAgglomerator::CLink, int>::Purge(); // 1799
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Purge(); // 560
		ValidateAlignment<CFeAgglomerator::CLink>(void); // 508
		CUtlMemory<CFeAgglomerator::CLink, int>::Purge(); // 510
		CUtlMemory<CFeAgglomerator::CLink, int>::~CUtlMemory(); // 562
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::~CUtlVector(); // 38
		~CUtlPriorityQueue(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this); // 81
		CCluster::~CCluster(); // 1809
	}
	CUtlVectorBase<CFeAgglomerator::CCluster::RemoveAll(); // 1798
	CUtlMemory<CFeAgglomerator::CCluster::IsExternallyAllocated(); // 905
	CUtlMemory<CFeAgglomerator::CCluster::Purge(); // 903
	CUtlMemory<CFeAgglomerator::CCluster::Purge(); // 1799
	CUtlVectorBase<CFeAgglomerator::CCluster::ResetDbgInfo(); // 1800
	CUtlVectorBase<CFeAgglomerator::CCluster::Purge(); // 1811
	CUtlVectorBase<CFeAgglomerator::CCluster::PurgeAndDeleteElements(); // 21
	CUtlVectorBase<CFeAgglomerator::CCluster::RemoveAll(); // 1798
	CUtlVectorBase<CFeAgglomerator::CCluster::Purge(); // 560
	ValidateAlignment<CFeAgglomerator::CCluster*>(void); // 508
	CUtlMemory<CFeAgglomerator::CCluster::Purge(); // 510
	CUtlMemory<CFeAgglomerator::CCluster::~CUtlMemory(); // 562
	CUtlVectorBase<CFeAgglomerator::CCluster::~CUtlVectorBase(); // 410
	CUtlVector<CFeAgglomerator::CCluster::~CUtlVector(); // 22
} /* size: 194, inline expansions: 14 (317 bytes) */

// <06F2DD20> mathlib/extended/feagglomerator.cpp:19
void CFeAgglomerator::~CFeAgglomerator()
{
} /* size: 0 */

// <06F2DA78> mathlib/extended/feagglomerator.cpp:26
// function calls: 9
void CCluster::CCluster(int nIndex, int nChildLeafs)
{
	Vector::Vector(); // 24
	Vector::Vector(); // 24
	AABB_t::AABB_t(); // 26
	CUtlMemory<CFeAgglomerator::CLink, int>::ValidateGrowSize(); // 475
	CUtlMemory<CFeAgglomerator::CLink, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 96
	CUtlPriorityQueue(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this,
				int growSize,
				int initSize,
				bool (*lessfunc)(const CLink &, const CLink &));  // 26
} /* size: 59, inline expansions: 9 (56 bytes) */

// <06F2DA44> mathlib/extended/feagglomerator.cpp:26
void CCluster::CCluster(int nIndex, int nChildLeafs)
{
} /* size: 0 */

// <06F2EFFC> mathlib/extended/feagglomerator.cpp:33
// function calls: 2
void CCluster::HasLinks()
{
	CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
	Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
} /* size: 0, inline expansions: 2 (0 bytes) */

// <06F2DA28> mathlib/extended/feagglomerator.cpp:33
void CCluster::HasLinks()
{
} /* size: 0 */

// <06F2F085> mathlib/extended/feagglomerator.cpp:38
// function calls: 6
void CCluster::GetBestCost()
{
	CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
	Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
	CCluster::HasLinks(); // 40
	CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
			int i);  // 609
	CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
		int i);  // 54
	ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
} /* size: 0, inline expansions: 6 (0 bytes) */

// <06F2DA0C> mathlib/extended/feagglomerator.cpp:38
void CCluster::GetBestCost()
{
} /* size: 0 */

// <06F2F1ED> mathlib/extended/feagglomerator.cpp:50
// variables: 4
// function calls: 44
void CCluster::RemoveLink(CCluster* pOtherCluster)
{
	{
		int i; // 52
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
		Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 52
		CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
			int i);  // 80
		Element(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this,
			int index);  // 54
		Destruct<CFeAgglomerator::CLink>(CLink* pMemory); // 1575
		{
			const bool  bNotLast; // 1578
			CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
				int i);  // 1584
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1584
		}
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::FastRemove(
				int elem);  // 125
		{
			int child; // 174
			CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::operator[](
					int i);  // 178
			CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::operator[](
					int i);  // 178
			LinkLessFunc_t::operator(
					const CLink& lhs,
					const CLink& rhs,
					bool (*lessFuncPtr)(const CLink &, const CLink &));  // 178
			CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::operator[](
					int i);  // 189
			CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::operator[](
					int i);  // 189
			LinkLessFunc_t::operator(
					const CLink& lhs,
					const CLink& rhs,
					bool (*lessFuncPtr)(const CLink &, const CLink &));  // 189
			CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::operator[](
					int i);  // 238
			CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::operator[](
					int i);  // 239
			CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::operator[](
					int i);  // 240
			Swap(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this,
				int index1,
				int index2);  // 197
		}
		PercolateDown(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this,
				int index);  // 138
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
		Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 207
		{
			int parent; // 213
			CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::operator[](
					int i);  // 240
			Swap(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this,
				int index1,
				int index2);  // 218
			CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::operator[](
					int i);  // 214
			CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::operator[](
					int i);  // 214
			LinkLessFunc_t::operator(
					const CLink& lhs,
					const CLink& rhs,
					bool (*lessFuncPtr)(const CLink &, const CLink &));  // 214
		}
		PercolateUp(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this,
				int index);  // 205
		PercolateUp(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this,
				int index);  // 145
		RevaluateElement(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this,
				const int  nStartingIndex);  // 132
		RemoveAt(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this,
			int index);  // 56
	}
	{
	}
	CCluster::RemoveLink(
			CCluster* pOtherCluster);  // 50
} /* size: 0, inline expansions: 1 (26 bytes) */

// <06F2D9AF> mathlib/extended/feagglomerator.cpp:50
// variables: 3
void CCluster::RemoveLink(CCluster* pOtherCluster)
{
	const char   __FUNCTION__; // 26856
	{
		int i; // 52
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 60
	}
} /* size: 0, variables: 1 */

// <06F2FBCC> mathlib/extended/feagglomerator.cpp:63
// variables: 2
// function calls: 5
void CCluster::FindLink(CCluster* pOtherCluster)
{
	{
		int i; // 65
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
		Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 65
		{
			CLink& link; // 67
			CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
				int i);  // 80
			Element(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this,
				int index);  // 67
		}
	}
} /* size: 0 */

// <06F2D96D> mathlib/extended/feagglomerator.cpp:63
// variables: 2
void CCluster::FindLink(CCluster* pOtherCluster)
{
	{
		int i; // 65
		{
			CLink& link; // 67
		}
	}
} /* size: 0 */

// <06F2D5FD> mathlib/extended/feagglomerator.cpp:81
// variables: 2
// function calls: 14
void CFeAgglomerator::ComputeCost(const CCluster* pCluster0, const CCluster* pCluster1)
{
	Vector vSize; // 83
	int nChildLeafs; // 84
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1534
	VectorMin(const Vector& a,
			const Vector& b);  // 271
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1539
	VectorMax(const Vector& a,
			const Vector& b);  // 272
	Vector::Vector(); // 27
	Vector::Vector(); // 27
	Vector::operator=(
			const Vector& vOther);  // 28
	Vector::operator=(
			const Vector& vOther);  // 29
	AABB_t::AABB_t(
		const Vector& vMins,
		const Vector& vMaxs);  // 273
	operator+(const AABB_t& aabb1,
			const AABB_t& aabb2);  // 83
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 220
	AABB_t::GetSize(); // 83
} /* size: 154, variables: 2, inline expansions: 14 (257 bytes) */

// <06F2FD52> mathlib/extended/feagglomerator.cpp:88
// variable: 1
void CCluster::AddLink(CCluster* pOtherCluster, float flCost)
{
	CLink link; // 97
} /* size: 0, variables: 1 */

// <06F2AB15> mathlib/extended/feagglomerator.cpp:109
// variables: 8
// function calls: 200
void CFeAgglomerator::AddLink(CCluster* pCluster0, CCluster* pCluster1, ClustersPriorityQueue_t& queue)
{
	float flBestDist0; // 111
	float flBestDist1; // 112
	float flNewBestDist0; // 116
	float flNewBestDist1; // 117
	CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
	Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
	CCluster::HasLinks(); // 40
	CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
			int i);  // 609
	CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
		int i);  // 54
	ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
	CCluster::GetBestCost(); // 111
	CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
	Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
	CCluster::HasLinks(); // 40
	CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
			int i);  // 609
	CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
		int i);  // 54
	ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
	CCluster::GetBestCost(); // 112
	CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
	Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
	CCluster::HasLinks(); // 40
	CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
			int i);  // 609
	CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
		int i);  // 54
	ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
	CCluster::GetBestCost(); // 116
	CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
	Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
	CCluster::HasLinks(); // 40
	CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
			int i);  // 609
	CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
		int i);  // 54
	ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
	CCluster::GetBestCost(); // 117
	CUtlVectorBase<CFeAgglomerator::CCluster::Count(); // 71
	CUtlPriorityQueue<CFeAgglomerator::CCluster::Count(); // 167
	{
		int child; // 174
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 178
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 178
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
		Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
		CCluster::HasLinks(); // 40
		CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
				int i);  // 609
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
			int i);  // 54
		ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
		CCluster::GetBestCost(); // 107
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
		Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
		CCluster::HasLinks(); // 40
		CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
				int i);  // 609
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
			int i);  // 54
		ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
		CCluster::GetBestCost(); // 107
		ClusterLessFunc_t::operator(
				const CCluster* pLeft,
				const CCluster* pRight,
				bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 178
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 189
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
		Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
		CCluster::HasLinks(); // 40
		CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
				int i);  // 609
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
			int i);  // 54
		ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
		CCluster::GetBestCost(); // 107
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
		Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
		CCluster::HasLinks(); // 40
		CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
				int i);  // 609
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
			int i);  // 54
		ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
		CCluster::GetBestCost(); // 107
		ClusterLessFunc_t::operator(
				const CCluster* pLeft,
				const CCluster* pRight,
				bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 189
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 189
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 238
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 239
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 240
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 242
		SetIndex(CCluster* heapElement,
			int nNewIndex,
			bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 242
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 243
		SetIndex(CCluster* heapElement,
			int nNewIndex,
			bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 243
		CUtlPriorityQueue<CFeAgglomerator::CCluster::Swap(
			int index1,
			int index2);  // 197
	}
	CUtlPriorityQueue<CFeAgglomerator::CCluster::PercolateDown(
			int index);  // 138
	CUtlVectorBase<CFeAgglomerator::CCluster::Count(); // 71
	CUtlPriorityQueue<CFeAgglomerator::CCluster::Count(); // 207
	{
		int parent; // 213
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
		Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
		CCluster::HasLinks(); // 40
		CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
				int i);  // 609
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
			int i);  // 54
		ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
		CCluster::GetBestCost(); // 107
		CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
				int i);  // 609
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
			int i);  // 54
		ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
		Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
		CCluster::HasLinks(); // 40
		CCluster::GetBestCost(); // 107
		ClusterLessFunc_t::operator(
				const CCluster* pLeft,
				const CCluster* pRight,
				bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 214
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 240
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 242
		SetIndex(CCluster* heapElement,
			int nNewIndex,
			bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 242
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 243
		SetIndex(CCluster* heapElement,
			int nNewIndex,
			bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 243
		CUtlPriorityQueue<CFeAgglomerator::CCluster::Swap(
			int index1,
			int index2);  // 218
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 214
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 214
	}
	CUtlPriorityQueue<CFeAgglomerator::CCluster::PercolateUp(
			int index);  // 145
	CUtlPriorityQueue<CFeAgglomerator::CCluster::RevaluateElement(
			const int  nStartingIndex);  // 121
	CUtlVectorBase<CFeAgglomerator::CCluster::Count(); // 71
	CUtlPriorityQueue<CFeAgglomerator::CCluster::Count(); // 167
	{
		int child; // 174
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 178
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 178
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
		Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
		CCluster::HasLinks(); // 40
		CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
				int i);  // 609
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
			int i);  // 54
		ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
		CCluster::GetBestCost(); // 107
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
		Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
		CCluster::HasLinks(); // 40
		CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
				int i);  // 609
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
			int i);  // 54
		ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
		CCluster::GetBestCost(); // 107
		ClusterLessFunc_t::operator(
				const CCluster* pLeft,
				const CCluster* pRight,
				bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 178
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 189
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
		Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
		CCluster::HasLinks(); // 40
		CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
				int i);  // 609
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
			int i);  // 54
		ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
		CCluster::GetBestCost(); // 107
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
		Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
		CCluster::HasLinks(); // 40
		CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
				int i);  // 609
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
			int i);  // 54
		ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
		CCluster::GetBestCost(); // 107
		ClusterLessFunc_t::operator(
				const CCluster* pLeft,
				const CCluster* pRight,
				bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 189
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 189
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 238
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 239
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 240
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 242
		SetIndex(CCluster* heapElement,
			int nNewIndex,
			bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 242
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 243
		SetIndex(CCluster* heapElement,
			int nNewIndex,
			bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 243
		CUtlPriorityQueue<CFeAgglomerator::CCluster::Swap(
			int index1,
			int index2);  // 197
	}
	CUtlPriorityQueue<CFeAgglomerator::CCluster::PercolateDown(
			int index);  // 138
	CUtlVectorBase<CFeAgglomerator::CCluster::Count(); // 71
	CUtlPriorityQueue<CFeAgglomerator::CCluster::Count(); // 207
	{
		int parent; // 213
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
		Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
		CCluster::HasLinks(); // 40
		CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
				int i);  // 609
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
			int i);  // 54
		ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
		CCluster::GetBestCost(); // 107
		CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
				int i);  // 609
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
			int i);  // 54
		ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
		Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
		CCluster::HasLinks(); // 40
		CCluster::GetBestCost(); // 107
		ClusterLessFunc_t::operator(
				const CCluster* pLeft,
				const CCluster* pRight,
				bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 214
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 240
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 242
		SetIndex(CCluster* heapElement,
			int nNewIndex,
			bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 242
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 243
		SetIndex(CCluster* heapElement,
			int nNewIndex,
			bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 243
		CUtlPriorityQueue<CFeAgglomerator::CCluster::Swap(
			int index1,
			int index2);  // 218
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 214
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 214
	}
	CUtlPriorityQueue<CFeAgglomerator::CCluster::PercolateUp(
			int index);  // 145
	CUtlPriorityQueue<CFeAgglomerator::CCluster::RevaluateElement(
			const int  nStartingIndex);  // 126
} /* size: 0, variables: 4, inline expansions: 42 (0 bytes) */

// <06F2A98C> mathlib/extended/feagglomerator.cpp:130
// variable: 1
// function calls: 2
void CFeAgglomerator::AddInterLink(CCluster* pCluster0, CCluster* pCluster1)
{
	float flCost; // 132
	CCluster::AddLink(
		CCluster* pOtherCluster,
		float flCost);  // 133
	CCluster::AddLink(
		CCluster* pOtherCluster,
		float flCost);  // 134
} /* size: 153, variables: 1, inline expansions: 2 (55 bytes) */

// <06F2A6AF> mathlib/extended/feagglomerator.cpp:139
// variables: 4
// function calls: 10
void CFeAgglomerator::LinkNodes(int nNode0, int nNode1)
{
	CCluster* pCluster0; // 143
	CCluster* pCluster1; // 144
	CUtlMemory<CFeAgglomerator::CCluster::operator[](
			int i);  // 588
	CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
			int i);  // 143
	CUtlMemory<CFeAgglomerator::CCluster::operator[](
			int i);  // 588
	CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
			int i);  // 144
	{
		int i; // 65
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
		Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 65
		{
			CLink& link; // 67
			CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
				int i);  // 80
			Element(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this,
				int index);  // 67
		}
	}
	CCluster::FindLink(
		CCluster* pOtherCluster);  // 145
} /* size: 72, variables: 2, inline expansions: 5 (56 bytes) */

// <06F28E96> mathlib/extended/feagglomerator.cpp:159
// variables: 10
// function calls: 104
void CFeAgglomerator::Build(bool bSingleRoot, function<void()> fnLog)
{
	ClustersPriorityQueue_t queue; // 161
	const char   __FUNCTION__; // 26726
	{
		int i; // 162
		CUtlVectorBase<CFeAgglomerator::CCluster::Count(); // 162
		{
			int parent; // 213
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
			Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
			CCluster::HasLinks(); // 40
			CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
					int i);  // 609
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
				int i);  // 54
			ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
			CCluster::GetBestCost(); // 107
			CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
					int i);  // 609
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
				int i);  // 54
			ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
			Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
			CCluster::HasLinks(); // 40
			CCluster::GetBestCost(); // 107
			ClusterLessFunc_t::operator(
					const CCluster* pLeft,
					const CCluster* pRight,
					bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 214
			SetIndex(CCluster* heapElement,
				int nNewIndex,
				bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 242
			SetIndex(CCluster* heapElement,
				int nNewIndex,
				bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 243
			CUtlPriorityQueue<CFeAgglomerator::CCluster::Swap(
				int index1,
				int index2);  // 218
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 214
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 214
		}
		CUtlPriorityQueue<CFeAgglomerator::CCluster::PercolateUp(
				int index);  // 232
		CUtlVectorBase<CFeAgglomerator::CCluster::ResetDbgInfo(); // 824
		CUtlVectorBase<CFeAgglomerator::CCluster::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<CFeAgglomerator::CCluster::AddToTail(); // 228
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 229
		SetIndex(CCluster* heapElement,
			int nNewIndex,
			bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 230
		CUtlPriorityQueue<CFeAgglomerator::CCluster::Insert(
			CCluster* const& element);  // 164
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 164
	}
	{
		ClustersPriorityQueue_t queue2; // 179
		{
			int i; // 171
			{
				int j; // 173
			}
		}
		{
			int i; // 180
			{
				int parent; // 213
				CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
				Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
				CCluster::HasLinks(); // 40
				CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
						int i);  // 609
				CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
					int i);  // 54
				ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
				CCluster::GetBestCost(); // 107
				CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
						int i);  // 609
				CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
					int i);  // 54
				ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
				CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
				Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
				CCluster::HasLinks(); // 40
				CCluster::GetBestCost(); // 107
				ClusterLessFunc_t::operator(
						const CCluster* pLeft,
						const CCluster* pRight,
						bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 214
				SetIndex(CCluster* heapElement,
					int nNewIndex,
					bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 242
				SetIndex(CCluster* heapElement,
					int nNewIndex,
					bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 243
				CUtlPriorityQueue<CFeAgglomerator::CCluster::Swap(
					int index1,
					int index2);  // 218
				CUtlMemory<CFeAgglomerator::CCluster::operator[](
						int i);  // 588
				CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
						int i);  // 214
				CUtlMemory<CFeAgglomerator::CCluster::operator[](
						int i);  // 588
				CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
						int i);  // 214
			}
			CUtlPriorityQueue<CFeAgglomerator::CCluster::PercolateUp(
					int index);  // 232
			CUtlVectorBase<CFeAgglomerator::CCluster::ResetDbgInfo(); // 824
			CUtlVectorBase<CFeAgglomerator::CCluster::GrowMemory(
					int num);  // 1145
			CUtlVectorBase<CFeAgglomerator::CCluster::AddToTail(); // 228
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 229
			SetIndex(CCluster* heapElement,
				int nNewIndex,
				bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 230
			CUtlPriorityQueue<CFeAgglomerator::CCluster::Insert(
				CCluster* const& element);  // 182
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 186
		}
		CUtlVectorBase<CFeAgglomerator::CCluster::ResetDbgInfo(); // 530
		CUtlMemory<CFeAgglomerator::CCluster::ValidateGrowSize(); // 475
		CUtlMemory<CFeAgglomerator::CCluster::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CFeAgglomerator::CCluster::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 419
		CUtlVector<CFeAgglomerator::CCluster::CUtlVector(
				int growSize,
				int initCapacity);  // 96
		CUtlPriorityQueue<CFeAgglomerator::CCluster::CUtlPriorityQueue(
					int growSize,
					int initSize,
					bool (*lessfunc)(CCluster* const &, CCluster* const &));  // 179
		_Function_base::_M_empty(); // 576
		function<void()>::operator bool()>* this); // 391
		_Function_base::_Function_base(); // 389
		function<void()>::function(
			const function<void()>& __x); // 185
		_Function_base::~_Function_base(); // 336
		function<void()>::~function()>* this); // 185
		CUtlMemory<CFeAgglomerator::CCluster::Purge(); // 903
		CUtlMemory<CFeAgglomerator::CCluster::Purge(); // 1799
		CUtlVectorBase<CFeAgglomerator::CCluster::Purge(); // 560
		ValidateAlignment<CFeAgglomerator::CCluster*>(void); // 508
		CUtlMemory<CFeAgglomerator::CCluster::Purge(); // 510
		CUtlMemory<CFeAgglomerator::CCluster::~CUtlMemory(); // 562
		CUtlVectorBase<CFeAgglomerator::CCluster::~CUtlVectorBase(); // 410
		CUtlVector<CFeAgglomerator::CCluster::~CUtlVector(); // 38
		CUtlPriorityQueue<CFeAgglomerator::CCluster::~CUtlPriorityQueue(); // 187
	}
	CUtlMemory<CFeAgglomerator::CCluster::ValidateGrowSize(); // 475
	CUtlMemory<CFeAgglomerator::CCluster::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CFeAgglomerator::CCluster::ResetDbgInfo(); // 530
	CUtlVectorBase<CFeAgglomerator::CCluster::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<CFeAgglomerator::CCluster::CUtlVector(
			int growSize,
			int initCapacity);  // 96
	CUtlPriorityQueue<CFeAgglomerator::CCluster::CUtlPriorityQueue(
				int growSize,
				int initSize,
				bool (*lessfunc)(CCluster* const &, CCluster* const &));  // 161
	_Function_base::_M_empty(); // 576
	function<void()>::operator bool()>* this); // 391
	_Function_base::_Function_base(); // 389
	function<void()>::function(
		const function<void()>& __x); // 166
	_Function_base::~_Function_base(); // 336
	function<void()>::~function()>* this); // 166
	CUtlMemory<CFeAgglomerator::CCluster::Purge(); // 903
	CUtlMemory<CFeAgglomerator::CCluster::Purge(); // 1799
	CUtlVectorBase<CFeAgglomerator::CCluster::Purge(); // 560
	CUtlVectorBase<CFeAgglomerator::CCluster::~CUtlVectorBase(); // 410
	CUtlVector<CFeAgglomerator::CCluster::~CUtlVector(); // 38
	CUtlPriorityQueue<CFeAgglomerator::CCluster::~CUtlPriorityQueue(); // 188
} /* size: 0, variables: 2, inline expansions: 18 (621 bytes) */

// <06F2FD22> mathlib/extended/feagglomerator.cpp:191
void CFeAgglomerator::Validate(ClustersPriorityQueue_t* pQueue)
{
} /* size: 0 */

// <06F2091F> mathlib/extended/feagglomerator.cpp:253
// variables: 35
// function calls: 600
void CFeAgglomerator::Process(ClustersPriorityQueue_t& queue, function<void()> fnLog)
{
	const char   __FUNCTION__; // 26775
	{
		CCluster* pChild; // 260
		int nParentIndex; // 273
		CCluster* pParent; // 274
		CUtlVectorFixedGrowable<CFeAgglomerator::CCluster*, 8> reAdd; // 285
		CVarBitVec skipAddLink; // 286
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 265
		}
		{
			ClusterLinkQueue_t& links; // 289
			{
				int i; // 290
				{
					CCluster* pOther; // 292
					float flOldDistance; // 298
					float flNewDistance; // 302
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 293
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 296
					}
					CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
							int i);  // 602
					CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
						int i);  // 80
					Element(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this,
						int index);  // 292
					CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
					Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
					CCluster::HasLinks(); // 40
					CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
							int i);  // 609
					CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
						int i);  // 54
					ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
					CCluster::GetBestCost(); // 298
					CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
					{
					}
					CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
					Bitvec_Set(uint32* pBits,
							int nBitNum);  // 1480
					CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
						int bitNum);  // 301
					CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
					Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
					CCluster::HasLinks(); // 40
					CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
							int i);  // 609
					CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
						int i);  // 54
					ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
					CCluster::GetBestCost(); // 302
					CUtlMemory<CFeAgglomerator::CCluster::NumAllocated(); // 1196
					CUtlMemory<CFeAgglomerator::CCluster::operator[](
							int i);  // 602
					CUtlVectorBase<CFeAgglomerator::CCluster::Element(
						int i);  // 1201
					CopyConstruct<CFeAgglomerator::CCluster*>(CCluster** pMemory,
											CCluster* const& src);  // 1201
					CUtlMemory<CFeAgglomerator::CCluster::Base(); // 112
					CUtlVectorBase<CFeAgglomerator::CCluster::Base(); // 368
					CUtlVectorBase<CFeAgglomerator::CCluster::ResetDbgInfo(); // 824
					CUtlVectorBase<CFeAgglomerator::CCluster::GrowMemory(
							int num);  // 1198
					CUtlVectorBase<CFeAgglomerator::CCluster::AddToTail(
							CCluster* const& src);  // 305
					CUtlVectorBase<CFeAgglomerator::CCluster::IsValidIndex(
							int i);  // 123
					CUtlMemory<CFeAgglomerator::CCluster::operator[](
							int i);  // 588
					CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
							int i);  // 124
					SetIndex(CCluster* heapElement,
						int nNewIndex,
						bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 124
					CUtlVectorBase<CFeAgglomerator::CCluster::Count(); // 71
					CUtlPriorityQueue<CFeAgglomerator::CCluster::Count(); // 127
					CUtlMemory<CFeAgglomerator::CCluster::operator[](
							int i);  // 588
					CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
							int i);  // 129
					SetIndex(CCluster* heapElement,
						int nNewIndex,
						bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 129
					CUtlVectorBase<CFeAgglomerator::CCluster::Count(); // 71
					CUtlPriorityQueue<CFeAgglomerator::CCluster::Count(); // 167
					{
						int child; // 174
						CUtlMemory<CFeAgglomerator::CCluster::operator[](
								int i);  // 588
						CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
								int i);  // 178
						CUtlMemory<CFeAgglomerator::CCluster::operator[](
								int i);  // 588
						CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
								int i);  // 178
						CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
						Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
						CCluster::HasLinks(); // 40
						CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
								int i);  // 609
						CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
							int i);  // 54
						ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
						CCluster::GetBestCost(); // 107
						CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
						Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
						CCluster::HasLinks(); // 40
						CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
								int i);  // 609
						CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
							int i);  // 54
						ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
						CCluster::GetBestCost(); // 107
						ClusterLessFunc_t::operator(
								const CCluster* pLeft,
								const CCluster* pRight,
								bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 178
						CUtlMemory<CFeAgglomerator::CCluster::operator[](
								int i);  // 588
						CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
								int i);  // 189
						CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
						Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
						CCluster::HasLinks(); // 40
						CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
								int i);  // 609
						CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
							int i);  // 54
						ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
						CCluster::GetBestCost(); // 107
						CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
						Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
						CCluster::HasLinks(); // 40
						CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
								int i);  // 609
						CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
							int i);  // 54
						ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
						CCluster::GetBestCost(); // 107
						ClusterLessFunc_t::operator(
								const CCluster* pLeft,
								const CCluster* pRight,
								bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 189
						CUtlMemory<CFeAgglomerator::CCluster::operator[](
								int i);  // 588
						CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
								int i);  // 189
						CUtlMemory<CFeAgglomerator::CCluster::operator[](
								int i);  // 588
						CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
								int i);  // 238
						CUtlMemory<CFeAgglomerator::CCluster::operator[](
								int i);  // 588
						CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
								int i);  // 239
						CUtlMemory<CFeAgglomerator::CCluster::operator[](
								int i);  // 588
						CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
								int i);  // 240
						CUtlMemory<CFeAgglomerator::CCluster::operator[](
								int i);  // 588
						CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
								int i);  // 242
						SetIndex(CCluster* heapElement,
							int nNewIndex,
							bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 242
						CUtlMemory<CFeAgglomerator::CCluster::operator[](
								int i);  // 588
						CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
								int i);  // 243
						SetIndex(CCluster* heapElement,
							int nNewIndex,
							bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 243
						CUtlPriorityQueue<CFeAgglomerator::CCluster::Swap(
							int index1,
							int index2);  // 197
					}
					CUtlPriorityQueue<CFeAgglomerator::CCluster::PercolateDown(
							int index);  // 138
					CUtlVectorBase<CFeAgglomerator::CCluster::Count(); // 71
					CUtlPriorityQueue<CFeAgglomerator::CCluster::Count(); // 207
					{
						int parent; // 213
						CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
						Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
						CCluster::HasLinks(); // 40
						CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
								int i);  // 609
						CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
							int i);  // 54
						ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
						CCluster::GetBestCost(); // 107
						CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
								int i);  // 609
						CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
							int i);  // 54
						ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
						CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
						Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
						CCluster::HasLinks(); // 40
						CCluster::GetBestCost(); // 107
						ClusterLessFunc_t::operator(
								const CCluster* pLeft,
								const CCluster* pRight,
								bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 214
						CUtlMemory<CFeAgglomerator::CCluster::operator[](
								int i);  // 588
						CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
								int i);  // 240
						CUtlMemory<CFeAgglomerator::CCluster::operator[](
								int i);  // 588
						CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
								int i);  // 242
						SetIndex(CCluster* heapElement,
							int nNewIndex,
							bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 242
						CUtlMemory<CFeAgglomerator::CCluster::operator[](
								int i);  // 588
						CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
								int i);  // 243
						SetIndex(CCluster* heapElement,
							int nNewIndex,
							bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 243
						CUtlPriorityQueue<CFeAgglomerator::CCluster::Swap(
							int index1,
							int index2);  // 218
						CUtlMemory<CFeAgglomerator::CCluster::operator[](
								int i);  // 588
						CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
								int i);  // 214
						CUtlMemory<CFeAgglomerator::CCluster::operator[](
								int i);  // 588
						CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
								int i);  // 214
					}
					CUtlPriorityQueue<CFeAgglomerator::CCluster::PercolateUp(
							int index);  // 145
					CUtlPriorityQueue<CFeAgglomerator::CCluster::RevaluateElement(
							const int  nStartingIndex);  // 132
					{
					}
					CUtlPriorityQueue<CFeAgglomerator::CCluster::RemoveAt(
						int index);  // 306
				}
				CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
				Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 290
			}
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::RemoveAll(); // 1798
			CUtlMemory<CFeAgglomerator::CLink, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CFeAgglomerator::CLink, int>::Purge(); // 903
			CUtlMemory<CFeAgglomerator::CLink, int>::Purge(); // 1799
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::ResetDbgInfo(); // 1800
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Purge(); // 77
			Purge(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this); // 310
		}
		{
			ClusterLinkQueue_t& links; // 313
			{
				int i; // 314
				{
					CCluster* pOther; // 316
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 317
					}
					{
						float flOldDistance; // 323
						float flNewDistance; // 330
						CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
						Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
						CCluster::HasLinks(); // 40
						CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
								int i);  // 609
						CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
							int i);  // 54
						ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
						CCluster::GetBestCost(); // 323
						CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
						{
						}
						CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
						BitVec_IsBitSet(const uint32* pBase,
								int nBitNum);  // 1471
						CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
							int bitNum);  // 326
						CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
						Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
						CCluster::HasLinks(); // 40
						CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
								int i);  // 609
						CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
							int i);  // 54
						ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
						CCluster::GetBestCost(); // 330
						CUtlVectorBase<CFeAgglomerator::CCluster::Count(); // 71
						CUtlPriorityQueue<CFeAgglomerator::CCluster::Count(); // 167
						{
							int child; // 174
							CUtlMemory<CFeAgglomerator::CCluster::operator[](
									int i);  // 588
							CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
									int i);  // 178
							CUtlMemory<CFeAgglomerator::CCluster::operator[](
									int i);  // 588
							CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
									int i);  // 178
							CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
							Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
							CCluster::HasLinks(); // 40
							CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
									int i);  // 609
							CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
								int i);  // 54
							ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
							CCluster::GetBestCost(); // 107
							CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
							Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
							CCluster::HasLinks(); // 40
							CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
									int i);  // 609
							CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
								int i);  // 54
							ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
							CCluster::GetBestCost(); // 107
							ClusterLessFunc_t::operator(
									const CCluster* pLeft,
									const CCluster* pRight,
									bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 178
							CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
							Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
							CCluster::HasLinks(); // 40
							CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
									int i);  // 609
							CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
								int i);  // 54
							ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
							CCluster::GetBestCost(); // 107
							CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
							Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
							CCluster::HasLinks(); // 40
							CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
									int i);  // 609
							CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
								int i);  // 54
							ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
							CCluster::GetBestCost(); // 107
							ClusterLessFunc_t::operator(
									const CCluster* pLeft,
									const CCluster* pRight,
									bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 189
							CUtlMemory<CFeAgglomerator::CCluster::operator[](
									int i);  // 588
							CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
									int i);  // 238
							CUtlMemory<CFeAgglomerator::CCluster::operator[](
									int i);  // 588
							CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
									int i);  // 239
							CUtlMemory<CFeAgglomerator::CCluster::operator[](
									int i);  // 588
							CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
									int i);  // 240
							CUtlMemory<CFeAgglomerator::CCluster::operator[](
									int i);  // 588
							CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
									int i);  // 242
							SetIndex(CCluster* heapElement,
								int nNewIndex,
								bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 242
							CUtlMemory<CFeAgglomerator::CCluster::operator[](
									int i);  // 588
							CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
									int i);  // 243
							SetIndex(CCluster* heapElement,
								int nNewIndex,
								bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 243
							CUtlPriorityQueue<CFeAgglomerator::CCluster::Swap(
								int index1,
								int index2);  // 197
							CUtlMemory<CFeAgglomerator::CCluster::operator[](
									int i);  // 588
							CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
									int i);  // 189
							CUtlMemory<CFeAgglomerator::CCluster::operator[](
									int i);  // 588
							CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
									int i);  // 189
						}
						CUtlPriorityQueue<CFeAgglomerator::CCluster::PercolateDown(
								int index);  // 138
						CUtlVectorBase<CFeAgglomerator::CCluster::Count(); // 71
						CUtlPriorityQueue<CFeAgglomerator::CCluster::Count(); // 207
						{
							int parent; // 213
							CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
							Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
							CCluster::HasLinks(); // 40
							CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
									int i);  // 609
							CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
								int i);  // 54
							ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
							CCluster::GetBestCost(); // 107
							CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
									int i);  // 609
							CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
								int i);  // 54
							ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
							CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
							Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
							CCluster::HasLinks(); // 40
							CCluster::GetBestCost(); // 107
							ClusterLessFunc_t::operator(
									const CCluster* pLeft,
									const CCluster* pRight,
									bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 214
							CUtlMemory<CFeAgglomerator::CCluster::operator[](
									int i);  // 588
							CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
									int i);  // 240
							CUtlMemory<CFeAgglomerator::CCluster::operator[](
									int i);  // 588
							CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
									int i);  // 242
							SetIndex(CCluster* heapElement,
								int nNewIndex,
								bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 242
							CUtlMemory<CFeAgglomerator::CCluster::operator[](
									int i);  // 588
							CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
									int i);  // 243
							SetIndex(CCluster* heapElement,
								int nNewIndex,
								bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 243
							CUtlPriorityQueue<CFeAgglomerator::CCluster::Swap(
								int index1,
								int index2);  // 218
							CUtlMemory<CFeAgglomerator::CCluster::operator[](
									int i);  // 588
							CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
									int i);  // 214
							CUtlMemory<CFeAgglomerator::CCluster::operator[](
									int i);  // 588
							CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
									int i);  // 214
						}
						CUtlPriorityQueue<CFeAgglomerator::CCluster::PercolateUp(
								int index);  // 145
						CUtlPriorityQueue<CFeAgglomerator::CCluster::RevaluateElement(
								const int  nStartingIndex);  // 333
					}
					CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
							int i);  // 602
					CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
						int i);  // 80
					Element(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this,
						int index);  // 316
				}
				CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
				Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 314
			}
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::RemoveAll(); // 1798
			CUtlMemory<CFeAgglomerator::CLink, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CFeAgglomerator::CLink, int>::Purge(); // 903
			CUtlMemory<CFeAgglomerator::CLink, int>::Purge(); // 1799
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::ResetDbgInfo(); // 1800
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Purge(); // 77
			Purge(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this); // 342
		}
		{
			CCluster* pRemoved; // 345
			CUtlVectorFixedGrowable<CFeAgglomerator::CCluster*, 8>& __for_range; // 9714
			iterator __for_begin; // 27981
			iterator __for_end; // 27981
			CUtlMemory<CFeAgglomerator::CCluster::Base(); // 112
			CUtlVectorBase<CFeAgglomerator::CCluster::Base(); // 102
			CUtlVectorBase<CFeAgglomerator::CCluster::begin(); // 345
			CUtlVectorBase<CFeAgglomerator::CCluster::Count(); // 104
			CUtlVectorBase<CFeAgglomerator::CCluster::end(); // 345
			CUtlMemory<CFeAgglomerator::CCluster::Base(); // 112
			CUtlVectorBase<CFeAgglomerator::CCluster::Base(); // 368
			CUtlVectorBase<CFeAgglomerator::CCluster::ResetDbgInfo(); // 824
			CUtlVectorBase<CFeAgglomerator::CCluster::GrowMemory(
					int num);  // 1145
			CUtlMemory<CFeAgglomerator::CCluster::NumAllocated(); // 1143
			CUtlVectorBase<CFeAgglomerator::CCluster::AddToTail(); // 228
			{
				int parent; // 213
				CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
				Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
				CCluster::HasLinks(); // 40
				CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
						int i);  // 609
				CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
					int i);  // 54
				ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
				CCluster::GetBestCost(); // 107
				CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
						int i);  // 609
				CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
					int i);  // 54
				ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
				CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
				Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
				CCluster::HasLinks(); // 40
				CCluster::GetBestCost(); // 107
				ClusterLessFunc_t::operator(
						const CCluster* pLeft,
						const CCluster* pRight,
						bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 214
				CUtlMemory<CFeAgglomerator::CCluster::operator[](
						int i);  // 588
				CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
						int i);  // 240
				CUtlMemory<CFeAgglomerator::CCluster::operator[](
						int i);  // 588
				CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
						int i);  // 242
				SetIndex(CCluster* heapElement,
					int nNewIndex,
					bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 242
				CUtlMemory<CFeAgglomerator::CCluster::operator[](
						int i);  // 588
				CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
						int i);  // 243
				SetIndex(CCluster* heapElement,
					int nNewIndex,
					bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 243
				CUtlPriorityQueue<CFeAgglomerator::CCluster::Swap(
					int index1,
					int index2);  // 218
				CUtlMemory<CFeAgglomerator::CCluster::operator[](
						int i);  // 588
				CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
						int i);  // 214
				CUtlMemory<CFeAgglomerator::CCluster::operator[](
						int i);  // 588
				CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
						int i);  // 214
			}
			CUtlVectorBase<CFeAgglomerator::CCluster::Count(); // 71
			CUtlPriorityQueue<CFeAgglomerator::CCluster::Count(); // 207
			CUtlPriorityQueue<CFeAgglomerator::CCluster::PercolateUp(
					int index);  // 232
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 229
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 230
			SetIndex(CCluster* heapElement,
				int nNewIndex,
				bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 230
			CUtlPriorityQueue<CFeAgglomerator::CCluster::Insert(
				CCluster* const& element);  // 347
		}
		CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
				int i);  // 609
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
			int i);  // 54
		ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 262
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 109
		SetIndex(CCluster* heapElement,
			int nNewIndex,
			bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 109
		CUtlVectorBase<CFeAgglomerator::CCluster::Count(); // 71
		CUtlPriorityQueue<CFeAgglomerator::CCluster::Count(); // 112
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 114
		SetIndex(CCluster* heapElement,
			int nNewIndex,
			bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 114
		CUtlVectorBase<CFeAgglomerator::CCluster::Count(); // 71
		CUtlPriorityQueue<CFeAgglomerator::CCluster::Count(); // 167
		{
			int child; // 174
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 178
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 178
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
			Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
			CCluster::HasLinks(); // 40
			CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
					int i);  // 609
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
				int i);  // 54
			ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
			CCluster::GetBestCost(); // 107
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
			Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
			CCluster::HasLinks(); // 40
			CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
					int i);  // 609
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
				int i);  // 54
			ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
			CCluster::GetBestCost(); // 107
			ClusterLessFunc_t::operator(
					const CCluster* pLeft,
					const CCluster* pRight,
					bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 178
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 189
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
			Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
			CCluster::HasLinks(); // 40
			CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
					int i);  // 609
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
				int i);  // 54
			ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
			CCluster::GetBestCost(); // 107
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
			Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
			CCluster::HasLinks(); // 40
			CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
					int i);  // 609
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
				int i);  // 54
			ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
			CCluster::GetBestCost(); // 107
			ClusterLessFunc_t::operator(
					const CCluster* pLeft,
					const CCluster* pRight,
					bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 189
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 189
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 238
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 239
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 240
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 242
			SetIndex(CCluster* heapElement,
				int nNewIndex,
				bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 242
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 243
			SetIndex(CCluster* heapElement,
				int nNewIndex,
				bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 243
			CUtlPriorityQueue<CFeAgglomerator::CCluster::Swap(
				int index1,
				int index2);  // 197
		}
		CUtlPriorityQueue<CFeAgglomerator::CCluster::PercolateDown(
				int index);  // 117
		CUtlPriorityQueue<CFeAgglomerator::CCluster::RemoveAtHead(); // 266
		CUtlVectorBase<CFeAgglomerator::CCluster::IsValidIndex(
				int i);  // 123
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 124
		SetIndex(CCluster* heapElement,
			int nNewIndex,
			bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 124
		CUtlVectorBase<CFeAgglomerator::CCluster::Count(); // 71
		CUtlPriorityQueue<CFeAgglomerator::CCluster::Count(); // 127
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 129
		SetIndex(CCluster* heapElement,
			int nNewIndex,
			bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 129
		CUtlVectorBase<CFeAgglomerator::CCluster::Count(); // 71
		CUtlPriorityQueue<CFeAgglomerator::CCluster::Count(); // 167
		{
			int child; // 174
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 178
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 178
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
			Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
			CCluster::HasLinks(); // 40
			CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
					int i);  // 609
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
				int i);  // 54
			ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
			CCluster::GetBestCost(); // 107
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
			Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
			CCluster::HasLinks(); // 40
			CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
					int i);  // 609
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
				int i);  // 54
			ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
			CCluster::GetBestCost(); // 107
			ClusterLessFunc_t::operator(
					const CCluster* pLeft,
					const CCluster* pRight,
					bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 178
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 189
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
			Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
			CCluster::HasLinks(); // 40
			CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
					int i);  // 609
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
				int i);  // 54
			ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
			CCluster::GetBestCost(); // 107
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
			Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
			CCluster::HasLinks(); // 40
			CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
					int i);  // 609
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
				int i);  // 54
			ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
			CCluster::GetBestCost(); // 107
			ClusterLessFunc_t::operator(
					const CCluster* pLeft,
					const CCluster* pRight,
					bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 189
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 189
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 238
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 239
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 240
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 242
			SetIndex(CCluster* heapElement,
				int nNewIndex,
				bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 242
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 243
			SetIndex(CCluster* heapElement,
				int nNewIndex,
				bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 243
			CUtlPriorityQueue<CFeAgglomerator::CCluster::Swap(
				int index1,
				int index2);  // 197
		}
		CUtlPriorityQueue<CFeAgglomerator::CCluster::PercolateDown(
				int index);  // 138
		CUtlVectorBase<CFeAgglomerator::CCluster::Count(); // 71
		CUtlPriorityQueue<CFeAgglomerator::CCluster::Count(); // 207
		{
			int parent; // 213
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
			Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
			CCluster::HasLinks(); // 40
			CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
					int i);  // 609
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
				int i);  // 54
			ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
			CCluster::GetBestCost(); // 107
			CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
					int i);  // 609
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
				int i);  // 54
			ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
			Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
			CCluster::HasLinks(); // 40
			CCluster::GetBestCost(); // 107
			ClusterLessFunc_t::operator(
					const CCluster* pLeft,
					const CCluster* pRight,
					bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 214
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 240
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 242
			SetIndex(CCluster* heapElement,
				int nNewIndex,
				bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 242
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 243
			SetIndex(CCluster* heapElement,
				int nNewIndex,
				bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 243
			CUtlPriorityQueue<CFeAgglomerator::CCluster::Swap(
				int index1,
				int index2);  // 218
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 214
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 214
		}
		CUtlPriorityQueue<CFeAgglomerator::CCluster::PercolateUp(
				int index);  // 145
		CUtlPriorityQueue<CFeAgglomerator::CCluster::RevaluateElement(
				const int  nStartingIndex);  // 132
		{
		}
		CUtlPriorityQueue<CFeAgglomerator::CCluster::RemoveAt(
			int index);  // 267
		CUtlMemory<CFeAgglomerator::CCluster::NumAllocated(); // 1143
		CUtlMemory<CFeAgglomerator::CCluster::Base(); // 112
		CUtlVectorBase<CFeAgglomerator::CCluster::Base(); // 368
		CUtlVectorBase<CFeAgglomerator::CCluster::ResetDbgInfo(); // 824
		CUtlVectorBase<CFeAgglomerator::CCluster::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<CFeAgglomerator::CCluster::AddToTail(); // 273
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 275
		CUtlMemory<CFeAgglomerator::CLink, int>::ValidateGrowSize(); // 475
		CUtlMemory<CFeAgglomerator::CLink, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 419
		CUtlVector<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::CUtlVector(
				int growSize,
				int initCapacity);  // 96
		CUtlPriorityQueue(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this,
					int growSize,
					int initSize,
					bool (*lessfunc)(const CLink &, const CLink &));  // 26
		Vector::Vector(); // 24
		Vector::Vector(); // 24
		AABB_t::AABB_t(); // 26
		CCluster::CCluster(
			int nIndex,
			int nChildLeafs);  // 274
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1534
		VectorMin(const Vector& a,
				const Vector& b);  // 271
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1539
		VectorMax(const Vector& a,
				const Vector& b);  // 272
		Vector::Vector(); // 27
		Vector::Vector(); // 27
		Vector::operator=(
				const Vector& vOther);  // 28
		Vector::operator=(
				const Vector& vOther);  // 29
		AABB_t::AABB_t(
			const Vector& vMins,
			const Vector& vMaxs);  // 273
		operator+(const AABB_t& aabb1,
				const AABB_t& aabb2);  // 276
		Vector::operator=(
				const Vector& vOther);  // 17
		Vector::operator=(
				const Vector& vOther);  // 17
		AABB_t::operator=(
				AABB_t &);  // 276
		CUtlMemory<CFeAgglomerator::CCluster::CUtlMemory(
				CCluster** pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		CUtlMemory<CFeAgglomerator::CCluster::EnsureCapacity(
				int num);  // 199
		CUtlMemoryFixedGrowable_Base<CFeAgglomerator::CCluster::CUtlMemoryFixedGrowable_Base(
						CCluster** pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		AlignedByteArrayExplicit_t<8, CFeAgglomerator::CCluster::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<8, CFeAgglomerator::CCluster::AlignedByteArray_t(); // 228
		AlignedByteArrayExplicit_t<8, CFeAgglomerator::CCluster::Base(); // 231
		CUtlMemoryFixedGrowable<CFeAgglomerator::CCluster::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<CFeAgglomerator::CCluster::ResetDbgInfo(); // 530
		CUtlVectorBase<CFeAgglomerator::CCluster::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<CFeAgglomerator::CCluster::CUtlVectorFixedGrowable(
					int growSize);  // 285
		CUtlVectorBase<CFeAgglomerator::CCluster::Count(); // 286
		CalcNumIntsForBits(int numBits); // 1292
		CVarBitVecBase<short unsigned int, 32>::AllocInts(
				int numInts);  // 2546
		CVarBitVecBase<short unsigned int, 32>::AllocInts(
				int numInts);  // 1294
		CVarBitVecBase<short unsigned int, 32>::CVarBitVecBase(
				int numBits);  // 1419
		CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1970
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 1970
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll(); // 1427
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::CBitVecT(
			int numBits);  // 1215
		CVarBitVecT<short unsigned int, 32>::CVarBitVecT(
				int numBits);  // 1224
		CVarBitVec::CVarBitVec(
				int nBitCount);  // 286
		CUtlMemory<CFeAgglomerator::CCluster::NumAllocated(); // 1143
		CUtlMemory<CFeAgglomerator::CCluster::Base(); // 112
		CUtlVectorBase<CFeAgglomerator::CCluster::Base(); // 368
		CUtlVectorBase<CFeAgglomerator::CCluster::ResetDbgInfo(); // 824
		CUtlVectorBase<CFeAgglomerator::CCluster::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<CFeAgglomerator::CCluster::AddToTail(); // 228
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 229
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 230
		SetIndex(CCluster* heapElement,
			int nNewIndex,
			bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 230
		CUtlVectorBase<CFeAgglomerator::CCluster::Count(); // 71
		CUtlPriorityQueue<CFeAgglomerator::CCluster::Count(); // 207
		{
			int parent; // 213
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
			Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
			CCluster::HasLinks(); // 40
			CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
					int i);  // 609
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
				int i);  // 54
			ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
			CCluster::GetBestCost(); // 107
			CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
					int i);  // 609
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Element(
				int i);  // 54
			ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 42
			CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
			Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
			CCluster::HasLinks(); // 40
			CCluster::GetBestCost(); // 107
			ClusterLessFunc_t::operator(
					const CCluster* pLeft,
					const CCluster* pRight,
					bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 214
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 240
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 242
			SetIndex(CCluster* heapElement,
				int nNewIndex,
				bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 242
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 243
			SetIndex(CCluster* heapElement,
				int nNewIndex,
				bool (*lessFuncPtr)(CCluster* const &, CCluster* const &));  // 243
			CUtlPriorityQueue<CFeAgglomerator::CCluster::Swap(
				int index1,
				int index2);  // 218
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 214
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 214
		}
		CUtlPriorityQueue<CFeAgglomerator::CCluster::PercolateUp(
				int index);  // 232
		CUtlPriorityQueue<CFeAgglomerator::CCluster::Insert(
			CCluster* const& element);  // 349
		_Function_base::_M_empty(); // 576
		function<void()>::operator bool()>* this); // 351
		function<void()>::operator()(const function<void()>* this); // 352
		CVarBitVecBase<short unsigned int, 32>::FreeInts(); // 1342
		CVarBitVecBase<short unsigned int, 32>::~CVarBitVecBase(); // 914
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::~CBitVecT(); // 1207
		CVarBitVecT<short unsigned int, 32>::~CVarBitVecT(); // 1220
		CVarBitVec::~CVarBitVec(); // 355
		CUtlVectorBase<CFeAgglomerator::CCluster::RemoveAll(); // 1798
		AlignedByteArrayExplicit_t<8, CFeAgglomerator::CCluster::Base(); // 237
		CUtlMemory<CFeAgglomerator::CCluster::IsExternallyAllocated(); // 577
		CUtlMemory<CFeAgglomerator::CCluster::ConvertToExternalMemory(
					CCluster** pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<CFeAgglomerator::CCluster::Purge_FixedGrowable(
					CCluster** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<CFeAgglomerator::CCluster::Purge_FixedGrowable(
					CCluster** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		CUtlMemoryFixedGrowable<CFeAgglomerator::CCluster::Purge(
			int numElements);  // 1799
		CUtlMemory<CFeAgglomerator::CCluster::Base(); // 112
		CUtlVectorBase<CFeAgglomerator::CCluster::Base(); // 368
		CUtlVectorBase<CFeAgglomerator::CCluster::ResetDbgInfo(); // 1800
		CUtlVectorBase<CFeAgglomerator::CCluster::Purge(); // 560
		ValidateAlignment<CFeAgglomerator::CCluster*>(void); // 508
		CUtlMemory<CFeAgglomerator::CCluster::Purge(); // 903
		CUtlMemory<CFeAgglomerator::CCluster::Purge(); // 510
		CUtlMemory<CFeAgglomerator::CCluster::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<CFeAgglomerator::CCluster::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<CFeAgglomerator::CCluster::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<CFeAgglomerator::CCluster::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<CFeAgglomerator::CCluster::~CUtlVectorFixedGrowable(); // 355
	}
	{
		int i; // 357
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 359
		}
		CUtlVectorBase<CFeAgglomerator::CCluster::Count(); // 71
		CUtlPriorityQueue<CFeAgglomerator::CCluster::Count(); // 357
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 602
		CUtlVectorBase<CFeAgglomerator::CCluster::Element(
			int i);  // 80
		CUtlPriorityQueue<CFeAgglomerator::CCluster::Element(
			int index);  // 359
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
		Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
		CCluster::HasLinks(); // 359
	}
	CUtlVectorBase<CFeAgglomerator::CCluster::Count(); // 71
	CUtlPriorityQueue<CFeAgglomerator::CCluster::Count(); // 255
	CUtlMemory<CFeAgglomerator::CCluster::operator[](
			int i);  // 609
	CUtlVectorBase<CFeAgglomerator::CCluster::Element(
		int i);  // 54
	CUtlPriorityQueue<CFeAgglomerator::CCluster::ElementAtHead(); // 255
	CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
	Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 35
	CCluster::HasLinks(); // 255
} /* size: 0, variables: 1, inline expansions: 8 (0 bytes) */

