
//
// engine2/pvs.cpp
//
//	referenced by: libengine2.so
//
//	functions: 71
//	classes: 4
//

// <003C7D5D> engine2/pvs.cpp:48
void CVisCluster::~CVisCluster()
{
} /* size: 0 */

// <003C7D41> engine2/pvs.cpp:48
inline void CVisCluster::~CVisCluster()
{
} /* size: 0 */

// <003C6AC3> engine2/pvs.cpp:48
void CVisCluster::CVisCluster()
{
} /* size: 0 */

// <003C6AA7> engine2/pvs.cpp:48
inline void CVisCluster::CVisCluster()
{
} /* size: 0 */

// <003BF436> engine2/pvs.cpp:48
// member functions: 4
// member variables: 2
// class size: 56
class CVisCluster {
	AABB_t m_surroundingBounds; /* 0 24 */
	CUtlVector<AABB_t, CUtlMemory<AABB_t, int> > m_boundsList; /* 24 32 */
	void CVisCluster(CVisCluster* );
	void ~CVisCluster(CVisCluster* );
	void CVisCluster(class CVisCluster *); /* linkage=_ZN11CVisClusterC4Ev */
	void ~CVisCluster(class CVisCluster *); /* linkage=_ZN11CVisClusterD4Ev */
};

// <003CE8C7> engine2/pvs.cpp:56
void CClusterQueryResults::CClusterQueryResults()
{
} /* size: 0 */

// <003CE8AB> engine2/pvs.cpp:56
inline void CClusterQueryResults::CClusterQueryResults()
{
} /* size: 0 */

// <003CE894> engine2/pvs.cpp:56
void CClusterQueryResults::~CClusterQueryResults()
{
} /* size: 0 */

// <003CE878> engine2/pvs.cpp:56
inline void CClusterQueryResults::~CClusterQueryResults()
{
} /* size: 0 */

// <003C0590> engine2/pvs.cpp:56
// member functions: 10
// member variables: 2
// class size: 6,176
class CClusterQueryResults {
	/* engine2/pvs.cpp:59 */
	void AddEmptyCluster(CClusterQueryResults* , uint16);
	/* engine2/pvs.cpp:69 */
	void ReduceToUnique(CClusterQueryResults* );
	/* engine2/pvs.cpp:74 */
	int Count(const CClusterQueryResults* );
	uint m_nRecents[512]; /* 0 2048 */
	CUtlVectorFixedGrowable<unsigned int, 1024> m_list __attribute__((__aligned__(8))); /* 2048 4128 */
	void ~CClusterQueryResults(CClusterQueryResults* );
	void CClusterQueryResults(CClusterQueryResults* );
	void AddEmptyCluster(class CClusterQueryResults *, uint16); /* linkage=_ZN20CClusterQueryResults15AddEmptyClusterEt */
	void ReduceToUnique(class CClusterQueryResults *); /* linkage=_ZN20CClusterQueryResults14ReduceToUniqueEv */
	int Count(const class CClusterQueryResults  *); /* linkage=_ZNK20CClusterQueryResults5CountEv */
	void ~CClusterQueryResults(class CClusterQueryResults *); /* linkage=_ZN20CClusterQueryResultsD4Ev */
	void CClusterQueryResults(class CClusterQueryResults *); /* linkage=_ZN20CClusterQueryResultsC4Ev */
} __attribute__((__aligned__(8)));

// <003D7224> engine2/pvs.cpp:59
// variable: 1
inline void CClusterQueryResults::AddEmptyCluster(uint16 nCluster)
{
	uint nRecent; // 61
} /* size: 0, variables: 1 */

// <003D720B> engine2/pvs.cpp:69
inline void CClusterQueryResults::ReduceToUnique()
{
} /* size: 0 */

// <003D71F2> engine2/pvs.cpp:74
inline void CClusterQueryResults::Count()
{
} /* size: 0 */

// <003C24EF> engine2/pvs.cpp:82
// member functions: 78
// member variables: 6
// vtable entries: 24
// class size: 64
class CPVS : public IPVS {
public:
	/* class IPVS <ancestor>; */ /* 0 8 */
	void CPVS(CPVS* , const CPVS& );
	const class CVoxelVisibility * m_pVis; /* 8 8 */
	bool m_bEnable; /* 16 1 */
	bool m_bIsEmpty; /* 17 1 */
	Vector m_vecWorldOffset; /* 20 12 */
	/* engine2/pvs.cpp:90 */
	void CPVS(CPVS* , const Vector& );
	/* engine2/pvs.cpp:100 */
	void ~CPVS(CPVS* );
	/* engine2/pvs.cpp:105 */
	void BuildNodeBounds_r(CPVS* , int, CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >& , const AABB_t& );
	/* engine2/pvs.cpp:121 */
	void BuildNodeBounds(CPVS* , CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >& );
	/* engine2/pvs.cpp:131 */
	void BuildClusterDebugBounds(CPVS* );
	/* engine2/pvs.cpp:193 */
	void Init(CPVS* , const CVoxelVisibility* );
	/* engine2/pvs.cpp:212 */
	bool IsSunVisibleFromCluster(const CPVS* , uint);
	/* engine2/pvs.cpp:528 */
	void ClustersInBox(const CPVS* , CClusterQueryResults& , const Vector& , const Vector& );
	/* engine2/pvs.cpp:757 */
	virtual int GetClustersForFrustum(CPVS* , uint32* , int, const CFrustum* , bool);
	/* engine2/pvs.cpp:750 */
	virtual int GetVisibleEverywhereClusterList(CPVS* , uint32* , int);
	/* engine2/pvs.cpp:509 */
	virtual int GetClustersForOrigin(CPVS* , uint32* , int, const Vector& );
	/* engine2/pvs.cpp:638 */
	virtual int GetClustersForBounds(CPVS* , uint32* , int, const Vector& , const Vector& , bool);
	/* engine2/pvs.cpp:683 */
	virtual int GetClustersForOrientedBounds(CPVS* , uint32* , int, const OBB_t& , bool);
	/* engine2/pvs.cpp:722 */
	virtual int FilterClustersInRadius(CPVS* , uint32* , int, const Vector& , float);
	/* engine2/pvs.cpp:238 */
	virtual int GetClusterCount(CPVS* );
	/* engine2/pvs.cpp:863 */
	virtual int GetClusterForPosition(const CPVS* , const Vector& );
	/* engine2/pvs.cpp:915 */
	virtual bool IsInPVS(CPVS* , const Vector& , const CPVSBits* );
	/* engine2/pvs.cpp:889 */
	virtual bool IsInPVS(CPVS* , int, const Vector* , const Vector& );
	/* engine2/pvs.cpp:902 */
	virtual bool IsAbsBoxInPVS(CPVS* , int, const Vector* , const Vector& , const Vector& );
	/* engine2/pvs.cpp:923 */
	virtual bool IsAbsBoxInPVS(CPVS* , const Vector& , const Vector& , const CPVSBits* );
	/* engine2/pvs.cpp:246 */
	virtual int GetAllClusterBounds(CPVS* , AABB_t* , int);
	/* engine2/pvs.cpp:269 */
	virtual bool GetClusterBounds(CPVS* , int, Vector* , Vector* );
	/* engine2/pvs.cpp:284 */
	virtual bool IsEmptyPVS(const CPVS* );
	/* engine2/pvs.cpp:290 */
	virtual bool IsSkyVisibleFromPosition(const CPVS* , const Vector& );
	/* engine2/pvs.cpp:308 */
	virtual bool IsSunVisibleFromPosition(const CPVS* , const Vector& );
	/* engine2/pvs.cpp:319 */
	virtual bool IsSunVisibleInPVS(const CPVS* , const CPVSBits& );
	/* engine2/pvs.cpp:939 */
	virtual void ResetPVS(const CPVS* , CPVSBits* );
	/* engine2/pvs.cpp:945 */
	virtual void AddOriginToPVS(const CPVS* , const Vector& , CPVSBits* );
	/* engine2/pvs.cpp:956 */
	virtual void GetVisForCluster(const CPVS* , int, CPVSBits* );
	/* engine2/pvs.cpp:340 */
	virtual void GetPrecisePVS(const CPVS* , CPVSBits* , const Vector& );
	/* engine2/pvs.cpp:395 */
	virtual void GetSunlightPVS(const CPVS* , CPVSBits* );
	/* engine2/pvs.cpp:409 */
	virtual void GetOrthoPVS(const CPVS* , CPVSBits* );
	/* engine2/pvs.cpp:977 */
	const CVisCluster* GetCluster(CPVS* , int);
private:
	/* engine2/pvs.cpp:808 */
	int RegionAt(const CPVS* , const Vector& );
	/* engine2/pvs.cpp:834 */
	int LeafAt(const CPVS* , const Vector& , AABBAligned_t& );
	/* engine2/pvs.cpp:549 */
	void ClustersInBoxEnclosed_r(const CPVS* , CClusterQueryResults& , uint, const AABBAligned_t& , const AABBAligned_t& );
	/* engine2/pvs.cpp:592 */
	void ClustersInBox_r(const CPVS* , CClusterQueryResults& , uint, const AABBAligned_t& , const AABBAligned_t& );
	/* engine2/pvs.cpp:423 */
	const uint32* GetVisBits(const CPVS* , int);
	CUtlVector<CVisCluster, CUtlMemory<CVisCluster, int> > m_clusters; /* 32 32 */
	void CPVS(class CPVS *, const class CPVS  &); /* linkage=_ZN4CPVSC4ERKS_ */
	void CPVS(class CPVS *, const class Vector  &); /* linkage=_ZN4CPVSC4ERK6Vector */
	void ~CPVS(class CPVS *); /* linkage=_ZN4CPVSD4Ev */
	/* <3dd4cf> engine2/pvs.cpp:105 */
	void BuildNodeBounds_r(class CPVS *, int, class CUtlVector<AABB_t, CUtlMemory<AABB_t, int> > &, const class AABB_t  &); /* linkage=_ZN4CPVS17BuildNodeBounds_rEiR10CUtlVectorI6AABB_t10CUtlMemoryIS1_iEERKS1_ */
	void BuildNodeBounds(class CPVS *, class CUtlVector<AABB_t, CUtlMemory<AABB_t, int> > &); /* linkage=_ZN4CPVS15BuildNodeBoundsER10CUtlVectorI6AABB_t10CUtlMemoryIS1_iEE */
	void BuildClusterDebugBounds(class CPVS *); /* linkage=_ZN4CPVS23BuildClusterDebugBoundsEv */
	void Init(class CPVS *, const class CVoxelVisibility  *); /* linkage=_ZN4CPVS4InitEPK16CVoxelVisibility */
	bool IsSunVisibleFromCluster(const class CPVS  *, uint); /* linkage=_ZNK4CPVS23IsSunVisibleFromClusterEj */
	void ClustersInBox(const class CPVS  *, class CClusterQueryResults &, const class Vector  &, const class Vector  &); /* linkage=_ZNK4CPVS13ClustersInBoxER20CClusterQueryResultsRK6VectorS4_ */
	/* <3e0937> engine2/pvs.cpp:757 */
	virtual int GetClustersForFrustum(class CPVS *, uint32 *, int, const class CFrustum  *, bool); /* linkage=_ZN4CPVS21GetClustersForFrustumEPjiPK8CFrustumb */
	virtual int GetVisibleEverywhereClusterList(class CPVS *, uint32 *, int); /* linkage=_ZN4CPVS31GetVisibleEverywhereClusterListEPji */
	virtual int GetClustersForOrigin(class CPVS *, uint32 *, int, const class Vector  &); /* linkage=_ZN4CPVS20GetClustersForOriginEPjiRK6Vector */
	virtual int GetClustersForBounds(class CPVS *, uint32 *, int, const class Vector  &, const class Vector  &, bool); /* linkage=_ZN4CPVS20GetClustersForBoundsEPjiRK6VectorS3_b */
	virtual int GetClustersForOrientedBounds(class CPVS *, uint32 *, int, const class OBB_t  &, bool); /* linkage=_ZN4CPVS28GetClustersForOrientedBoundsEPjiRK5OBB_tb */
	/* <3dc622> engine2/pvs.cpp:722 */
	virtual int FilterClustersInRadius(class CPVS *, uint32 *, int, const class Vector  &, float); /* linkage=_ZN4CPVS22FilterClustersInRadiusEPjiRK6Vectorf */
	virtual int GetClusterCount(class CPVS *); /* linkage=_ZN4CPVS15GetClusterCountEv */
	virtual int GetClusterForPosition(const class CPVS  *, const class Vector  &); /* linkage=_ZNK4CPVS21GetClusterForPositionERK6Vector */
	virtual bool IsInPVS(class CPVS *, const class Vector  &, const class CPVSBits  *); /* linkage=_ZN4CPVS7IsInPVSERK6VectorPK8CPVSBits */
	virtual bool IsInPVS(class CPVS *, int, const class Vector  *, const class Vector  &); /* linkage=_ZN4CPVS7IsInPVSEiPK6VectorRS1_ */
	virtual bool IsAbsBoxInPVS(class CPVS *, int, const class Vector  *, const class Vector  &, const class Vector  &); /* linkage=_ZN4CPVS13IsAbsBoxInPVSEiPK6VectorRS1_S3_ */
	virtual bool IsAbsBoxInPVS(class CPVS *, const class Vector  &, const class Vector  &, const class CPVSBits  *); /* linkage=_ZN4CPVS13IsAbsBoxInPVSERK6VectorS2_PK8CPVSBits */
	virtual int GetAllClusterBounds(class CPVS *, class AABB_t *, int); /* linkage=_ZN4CPVS19GetAllClusterBoundsEP6AABB_ti */
	virtual bool GetClusterBounds(class CPVS *, int, class Vector *, class Vector *); /* linkage=_ZN4CPVS16GetClusterBoundsEiP6VectorS1_ */
	/* <3dc4ac> engine2/pvs.cpp:284 */
	virtual bool IsEmptyPVS(const class CPVS  *); /* linkage=_ZNK4CPVS10IsEmptyPVSEv */
	virtual bool IsSkyVisibleFromPosition(const class CPVS  *, const class Vector  &); /* linkage=_ZNK4CPVS24IsSkyVisibleFromPositionERK6Vector */
	/* <3e0a24> engine2/pvs.cpp:308 */
	virtual bool IsSunVisibleFromPosition(const class CPVS  *, const class Vector  &); /* linkage=_ZNK4CPVS24IsSunVisibleFromPositionERK6Vector */
	virtual bool IsSunVisibleInPVS(const class CPVS  *, const class CPVSBits  &); /* linkage=_ZNK4CPVS17IsSunVisibleInPVSERK8CPVSBits */
	/* <3dc8d3> engine2/pvs.cpp:939 */
	virtual void ResetPVS(const class CPVS  *, class CPVSBits *); /* linkage=_ZNK4CPVS8ResetPVSEP8CPVSBits */
	virtual void AddOriginToPVS(const class CPVS  *, const class Vector  &, class CPVSBits *); /* linkage=_ZNK4CPVS14AddOriginToPVSERK6VectorP8CPVSBits */
	/* <3dc9bd> engine2/pvs.cpp:956 */
	virtual void GetVisForCluster(const class CPVS  *, int, class CPVSBits *); /* linkage=_ZNK4CPVS16GetVisForClusterEiP8CPVSBits */
	virtual void GetPrecisePVS(const class CPVS  *, class CPVSBits *, const class Vector  &); /* linkage=_ZNK4CPVS13GetPrecisePVSEP8CPVSBitsRK6Vector */
	virtual void GetSunlightPVS(const class CPVS  *, class CPVSBits *); /* linkage=_ZNK4CPVS14GetSunlightPVSEP8CPVSBits */
	virtual void GetOrthoPVS(const class CPVS  *, class CPVSBits *); /* linkage=_ZNK4CPVS11GetOrthoPVSEP8CPVSBits */
	const class CVisCluster  * GetCluster(class CPVS *, int); /* linkage=_ZN4CPVS10GetClusterEi */
	int RegionAt(const class CPVS  *, const class Vector  &); /* linkage=_ZNK4CPVS8RegionAtERK6Vector */
	int LeafAt(const class CPVS  *, const class Vector  &, class AABBAligned_t &); /* linkage=_ZNK4CPVS6LeafAtERK6VectorR13AABBAligned_t */
	void ClustersInBoxEnclosed_r(const class CPVS  *, class CClusterQueryResults &, uint, const class AABBAligned_t  &, const class AABBAligned_t  &); /* linkage=_ZNK4CPVS23ClustersInBoxEnclosed_rER20CClusterQueryResultsjRK13AABBAligned_tS4_ */
	void ClustersInBox_r(const class CPVS  *, class CClusterQueryResults &, uint, const class AABBAligned_t  &, const class AABBAligned_t  &); /* linkage=_ZNK4CPVS15ClustersInBox_rER20CClusterQueryResultsjRK13AABBAligned_tS4_ */
	const uint32  * GetVisBits(const class CPVS  *, int); /* linkage=_ZNK4CPVS10GetVisBitsEi */
};

// <003D716E> engine2/pvs.cpp:90
void CPVS::CPVS(const Vector& vWorldOffset)
{
} /* size: 0 */

// <003D7149> engine2/pvs.cpp:90
inline void CPVS::CPVS(const Vector& vWorldOffset)
{
} /* size: 0 */

// <003D7132> engine2/pvs.cpp:100
void CPVS::~CPVS()
{
} /* size: 0 */

// <003D7119> engine2/pvs.cpp:100
inline void CPVS::~CPVS()
{
} /* size: 0 */

// <003DD4CF> engine2/pvs.cpp:105
// variables: 15
// function calls: 139
void CPVS::BuildNodeBounds_r(int nNodeIndex, CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >& nodeBounds, const AABB_t& bounds)
{
	const CVoxelVisNode& node; // 110
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::IsValidIndex(
			int i);  // 107
	CUtlMemory<AABB_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::operator[](
			int i);  // 109
	Vector::operator=(
			const Vector& vOther);  // 17
	Vector::operator=(
			const Vector& vOther);  // 17
	AABB_t::operator=(
			const AABB_t  &);  // 109
	CVoxelVisNode::IsLeaf(); // 111
	{
		int i; // 113
		{
			AABB_t childBounds; // 115
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 32
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 32
			AABB_t::GetCenter(); // 156
			Vector::Vector(); // 24
			Vector::Vector(); // 24
			AABB_t::AABB_t(); // 157
			BoundsForChildVoxel(const AABB_t& bounds,
						int nChildIndex);  // 115
			CVoxelVisNode::FirstChildNode(); // 116
			CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::IsValidIndex(
					int i);  // 107
			CUtlMemory<AABB_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::operator[](
					int i);  // 109
			Vector::operator=(
					const Vector& vOther);  // 17
			Vector::operator=(
					const Vector& vOther);  // 17
			AABB_t::operator=(
					const AABB_t  &);  // 109
			CVoxelVisNode::IsLeaf(); // 111
			{
				int i; // 113
				{
					AABB_t childBounds; // 115
					VectorAdd(const Vector& a,
							const Vector& b,
							Vector& c);  // 1437
					Vector::Vector(); // 1436
					Vector::operator+(
							const Vector& v);  // 32
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::Vector(); // 1450
					Vector::operator*(
							float fl);  // 32
					AABB_t::GetCenter(); // 156
					Vector::Vector(); // 24
					Vector::Vector(); // 24
					AABB_t::AABB_t(); // 157
					BoundsForChildVoxel(const AABB_t& bounds,
								int nChildIndex);  // 115
					CVoxelVisNode::FirstChildNode(); // 116
					CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::IsValidIndex(
							int i);  // 107
					CUtlMemory<AABB_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::operator[](
							int i);  // 109
					Vector::operator=(
							const Vector& vOther);  // 17
					Vector::operator=(
							const Vector& vOther);  // 17
					AABB_t::operator=(
							const AABB_t  &);  // 109
					CVoxelVisNode::IsLeaf(); // 111
					{
						int i; // 113
						{
							AABB_t childBounds; // 115
							VectorAdd(const Vector& a,
									const Vector& b,
									Vector& c);  // 1437
							Vector::Vector(); // 1436
							Vector::operator+(
									const Vector& v);  // 32
							VectorMultiply(const Vector& a,
									vec_t b,
									Vector& c);  // 1451
							Vector::Vector(); // 1450
							Vector::operator*(
									float fl);  // 32
							AABB_t::GetCenter(); // 156
							Vector::Vector(); // 24
							Vector::Vector(); // 24
							AABB_t::AABB_t(); // 157
							BoundsForChildVoxel(const AABB_t& bounds,
										int nChildIndex);  // 115
							CVoxelVisNode::FirstChildNode(); // 116
							CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::IsValidIndex(
									int i);  // 107
							CUtlMemory<AABB_t, int>::operator[](
									int i);  // 588
							CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::operator[](
									int i);  // 109
							Vector::operator=(
									const Vector& vOther);  // 17
							Vector::operator=(
									const Vector& vOther);  // 17
							AABB_t::operator=(
									const AABB_t  &);  // 109
							CVoxelVisNode::IsLeaf(); // 111
							{
								int i; // 113
								{
									AABB_t childBounds; // 115
									VectorAdd(const Vector& a,
											const Vector& b,
											Vector& c);  // 1437
									Vector::Vector(); // 1436
									Vector::operator+(
											const Vector& v);  // 32
									VectorMultiply(const Vector& a,
											vec_t b,
											Vector& c);  // 1451
									Vector::Vector(); // 1450
									Vector::operator*(
											float fl);  // 32
									AABB_t::GetCenter(); // 156
									Vector::Vector(); // 24
									Vector::Vector(); // 24
									AABB_t::AABB_t(); // 157
									BoundsForChildVoxel(const AABB_t& bounds,
												int nChildIndex);  // 115
									CVoxelVisNode::FirstChildNode(); // 116
									CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::IsValidIndex(
											int i);  // 107
									CUtlMemory<AABB_t, int>::operator[](
											int i);  // 588
									CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::operator[](
											int i);  // 109
									Vector::operator=(
											const Vector& vOther);  // 17
									Vector::operator=(
											const Vector& vOther);  // 17
									AABB_t::operator=(
											const AABB_t  &);  // 109
									CVoxelVisNode::IsLeaf(); // 111
									{
										int i; // 113
										{
											AABB_t childBounds; // 115
											VectorAdd(const Vector& a,
													const Vector& b,
													Vector& c);  // 1437
											Vector::Vector(); // 1436
											Vector::operator+(
													const Vector& v);  // 32
											VectorMultiply(const Vector& a,
													vec_t b,
													Vector& c);  // 1451
											Vector::Vector(); // 1450
											Vector::operator*(
													float fl);  // 32
											AABB_t::GetCenter(); // 156
											Vector::Vector(); // 24
											Vector::Vector(); // 24
											AABB_t::AABB_t(); // 157
											BoundsForChildVoxel(const AABB_t& bounds,
														int nChildIndex);  // 115
											CVoxelVisNode::FirstChildNode(); // 116
											CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::IsValidIndex(
													int i);  // 107
											CUtlMemory<AABB_t, int>::operator[](
													int i);  // 588
											CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::operator[](
													int i);  // 109
											Vector::operator=(
													const Vector& vOther);  // 17
											Vector::operator=(
													const Vector& vOther);  // 17
											AABB_t::operator=(
													const AABB_t  &);  // 109
											CVoxelVisNode::IsLeaf(); // 111
											{
												int i; // 113
												{
													AABB_t childBounds; // 115
													VectorAdd(const Vector& a,
															const Vector& b,
															Vector& c);  // 1437
													Vector::Vector(); // 1436
													Vector::operator+(
															const Vector& v);  // 32
													VectorMultiply(const Vector& a,
															vec_t b,
															Vector& c);  // 1451
													Vector::Vector(); // 1450
													Vector::operator*(
															float fl);  // 32
													AABB_t::GetCenter(); // 156
													Vector::Vector(); // 24
													Vector::Vector(); // 24
													AABB_t::AABB_t(); // 157
													BoundsForChildVoxel(const AABB_t& bounds,
																int nChildIndex);  // 115
													CVoxelVisNode::FirstChildNode(); // 116
													CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::IsValidIndex(
															int i);  // 107
													CUtlMemory<AABB_t, int>::operator[](
															int i);  // 588
													CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::operator[](
															int i);  // 109
													Vector::operator=(
															const Vector& vOther);  // 17
													Vector::operator=(
															const Vector& vOther);  // 17
													AABB_t::operator=(
															const AABB_t  &);  // 109
													CVoxelVisNode::IsLeaf(); // 111
													{
														int i; // 113
														{
															AABB_t childBounds; // 115
															VectorAdd(const Vector& a,
																const Vector& b,
																Vector& c);  // 1437
															Vector::Vector(); // 1436
															Vector::operator+(
																const Vector& v);  // 32
															VectorMultiply(const Vector& a,
																vec_t b,
																Vector& c);  // 1451
															Vector::Vector(); // 1450
															Vector::operator*(
																float fl);  // 32
															AABB_t::GetCenter(); // 156
															Vector::Vector(); // 24
															Vector::Vector(); // 24
															AABB_t::AABB_t(); // 157
															BoundsForChildVoxel(const AABB_t& bounds,
																int nChildIndex);  // 115
															CVoxelVisNode::FirstChildNode(); // 116
														}
													}
													CPVS::BuildNodeBounds_r(
																int nNodeIndex,
																CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >& nodeBounds,
																const AABB_t& bounds);  // 116
												}
											}
											CPVS::BuildNodeBounds_r(
														int nNodeIndex,
														CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >& nodeBounds,
														const AABB_t& bounds);  // 116
										}
									}
									CPVS::BuildNodeBounds_r(
												int nNodeIndex,
												CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >& nodeBounds,
												const AABB_t& bounds);  // 116
								}
							}
							CPVS::BuildNodeBounds_r(
										int nNodeIndex,
										CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >& nodeBounds,
										const AABB_t& bounds);  // 116
						}
					}
					CPVS::BuildNodeBounds_r(
								int nNodeIndex,
								CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >& nodeBounds,
								const AABB_t& bounds);  // 116
				}
			}
			CPVS::BuildNodeBounds_r(
						int nNodeIndex,
						CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >& nodeBounds,
						const AABB_t& bounds);  // 116
		}
	}
} /* size: 4503, variables: 1, inline expansions: 7 (172 bytes) */

// <003D70B5> engine2/pvs.cpp:105
// variables: 3
inline void CPVS::BuildNodeBounds_r(int nNodeIndex, CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >& nodeBounds, const AABB_t& bounds)
{
	const CVoxelVisNode& node; // 110
	{
		int i; // 113
		{
			AABB_t childBounds; // 115
		}
	}
} /* size: 0, variables: 1 */

// <003D7090> engine2/pvs.cpp:121
inline void CPVS::BuildNodeBounds(CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >& nodeBounds)
{
} /* size: 0 */

// <003D54A4> engine2/pvs.cpp:131
// variables: 19
// function calls: 123
void CPVS::BuildClusterDebugBounds()
{
	CUtlVector<AABB_t, CUtlMemory<AABB_t, int> > nodeBounds; // 133
	{
		uint i; // 143
		{
			const CVoxelVisNode& node; // 145
			{
				uint nRegion; // 148
				{
					const CVoxelVisRegion& region; // 150
					uint nCluster; // 151
					{
						AABB_t bounds; // 154
						CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> > regionList; // 155
						{
							uint64 nMask; // 157
							CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> >& __for_range; // 33388
							iterator __for_begin; // 60806
							iterator __for_end; // 60806
							{
								AABB_t regBounds; // 159
								CUtlMemory<CVisCluster, int>::operator[](
										int i);  // 588
								CUtlVectorBase<CVisCluster, CUtlMemory<CVisCluster, int> >::operator[](
										int i);  // 160
								CUtlMemory<AABB_t, int>::operator[](
										int i);  // 602
								CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::Element(
									int i);  // 1201
								CopyConstruct<AABB_t>(AABB_t* pMemory,
											const AABB_t& src);  // 1201
								CUtlMemory<AABB_t, int>::NumAllocated(); // 1196
								CUtlMemory<AABB_t, int>::Base(); // 112
								CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::Base(); // 368
								CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::ResetDbgInfo(); // 824
								CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::GrowMemory(
										int num);  // 1198
								CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::AddToTail(
										const AABB_t& src);  // 160
							}
							CUtlMemory<long long unsigned int, int>::Base(); // 112
							CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Base(); // 102
							CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::begin(); // 157
							CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Count(); // 104
							CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::end(); // 157
						}
						CUtlMemory<AABB_t, int>::operator[](
								int i);  // 588
						CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::operator[](
								int i);  // 154
						CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::ResetDbgInfo(); // 530
						CUtlMemory<long long unsigned int, int>::ValidateGrowSize(); // 475
						CUtlMemory<long long unsigned int, int>::CUtlMemory(
								int nGrowSize,
								int nInitAllocationCount);  // 527
						CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::CUtlVectorBase(
								int growSize,
								int initCapacity);  // 418
						CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> >::CUtlVector(); // 155
						CUtlMemory<long long unsigned int, int>::Purge(); // 903
						CUtlMemory<long long unsigned int, int>::IsExternallyAllocated(); // 905
						CUtlMemory<long long unsigned int, int>::Purge(); // 1799
						CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::RemoveAll(); // 1798
						CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Purge(); // 560
						ValidateAlignment<long long unsigned int>(void); // 508
						CUtlMemory<long long unsigned int, int>::Purge(); // 510
						CUtlMemory<long long unsigned int, int>::~CUtlMemory(); // 562
						CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::~CUtlVectorBase(); // 410
						CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> >::~CUtlVector(); // 162
					}
					CVoxelVisibility::ClusterCount(); // 152
				}
			}
			CVoxelVisNode::IsLeaf(); // 146
		}
		CVoxelVisibility::NodeCount(); // 143
	}
	{
		int i; // 168
		{
			AABB_t fullBounds; // 173
			{
				int j; // 174
				VectorMin(const Vector& a,
						const Vector& b,
						Vector& result);  // 99
				VectorMax(const Vector& a,
						const Vector& b,
						Vector& result);  // 100
				AABB_t::AddAABBToBounds(
						const AABB_t& other);  // 94
				AABB_t::operator|=(
						const AABB_t& other);  // 176
			}
			CUtlMemory<AABB_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::operator[](
					int i);  // 173
			Vector::operator=(
					const Vector& vOther);  // 17
			Vector::operator=(
					const Vector& vOther);  // 17
			AABB_t::operator=(
					const AABB_t  &);  // 178
		}
		CUtlVectorBase<CVisCluster, CUtlMemory<CVisCluster, int> >::Count(); // 168
		CUtlMemory<CVisCluster, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CVisCluster, CUtlMemory<CVisCluster, int> >::operator[](
				int i);  // 170
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 138
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 139
		AABB_t::MakeInvalid(); // 170
		CUtlMemory<CVisCluster, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CVisCluster, CUtlMemory<CVisCluster, int> >::operator[](
				int i);  // 171
		CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::Count(); // 171
	}
	CVoxelVisibility::NodeCount(); // 127
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<AABB_t, int>::Base(); // 112
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::Base(); // 368
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
	}
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::SetCount(
		int count);  // 127
	Vector::Vector(); // 27
	Vector::Vector(); // 27
	Vector::operator=(
			const Vector& vOther);  // 28
	Vector::operator=(
			const Vector& vOther);  // 29
	AABB_t::AABB_t(
		const Vector& vMins,
		const Vector& vMaxs);  // 128
	Vector::operator=(
			const Vector& vOther);  // 17
	Vector::operator=(
			const Vector& vOther);  // 17
	AABB_t::operator=(
			const AABB_t  &);  // 109
	CVoxelVisNode::IsLeaf(); // 111
	{
		int i; // 113
		{
			AABB_t childBounds; // 115
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 32
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 32
			AABB_t::GetCenter(); // 156
			Vector::Vector(); // 24
			Vector::Vector(); // 24
			AABB_t::AABB_t(); // 157
			BoundsForChildVoxel(const AABB_t& bounds,
						int nChildIndex);  // 115
			CVoxelVisNode::FirstChildNode(); // 116
		}
	}
	CPVS::BuildNodeBounds_r(
				int nNodeIndex,
				CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >& nodeBounds,
				const AABB_t& bounds);  // 128
	CPVS::BuildNodeBounds(
			CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >& nodeBounds);  // 134
	CUtlMemory<AABB_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<AABB_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >::CUtlVector(); // 133
	CVoxelVisibility::ClusterCount(); // 137
	CUtlVectorBase<CVisCluster, CUtlMemory<CVisCluster, int> >::Count(); // 141
	CUtlMemory<CVisCluster, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CVisCluster, CUtlMemory<CVisCluster, int> >::operator[](
			int i);  // 181
	Vector::operator=(
			const Vector& vOther);  // 181
	CUtlMemory<CVisCluster, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CVisCluster, CUtlMemory<CVisCluster, int> >::operator[](
			int i);  // 182
	Vector::operator=(
			const Vector& vOther);  // 182
	CUtlMemory<CVisCluster, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CVisCluster, CUtlMemory<CVisCluster, int> >::operator[](
			int i);  // 184
	AABB_t::IsInvalid(); // 184
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 187
	CUtlMemory<CVisCluster, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CVisCluster, CUtlMemory<CVisCluster, int> >::operator[](
			int i);  // 188
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 188
	CUtlMemory<CVisCluster, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CVisCluster, CUtlMemory<CVisCluster, int> >::operator[](
			int i);  // 190
	Vector::operator=(
			const Vector& vOther);  // 17
	Vector::operator=(
			const Vector& vOther);  // 17
	AABB_t::operator=(
			const AABB_t  &);  // 190
	CUtlMemory<AABB_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<AABB_t, int>::Purge(); // 903
	CUtlMemory<AABB_t, int>::Purge(); // 1799
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::RemoveAll(); // 1798
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::Purge(); // 560
	ValidateAlignment<AABB_t>(void); // 508
	CUtlMemory<AABB_t, int>::Purge(); // 510
	CUtlMemory<AABB_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >::~CUtlVector(); // 191
} /* size: 2001, variables: 1, inline expansions: 57 (1745 bytes) */

// <003D5432> engine2/pvs.cpp:193
// variables: 3
inline void CPVS::Init(const CVoxelVisibility* pVis)
{
	const char   __FUNCTION__; // 55777
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 199
	}
} /* size: 0, variables: 1 */

// <003D53DB> engine2/pvs.cpp:212
// variables: 4
inline void CPVS::IsSunVisibleFromCluster(uint nCluster)
{
	{
		const uint32* pVisData; // 218
		uint32 nDWord; // 219
		uint32 nBit; // 220
		uint32 nMask; // 221
	}
} /* size: 0 */

// <003D537B> engine2/pvs.cpp:238
// function call: 1
void CPVS::GetClusterCount()
{
	CVoxelVisibility::ClusterCount(); // 238
} /* size: 19, inline expansions: 1 (3 bytes) */

// <003D502C> engine2/pvs.cpp:246
// variable: 1
// function calls: 14
void CPVS::GetAllClusterBounds(AABB_t* pBBoxList, int maxBBox)
{
	{
		int nCluster; // 260
		CUtlMemory<CVisCluster, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CVisCluster, CUtlMemory<CVisCluster, int> >::operator[](
				int i);  // 262
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 262
		Vector::operator=(
				const Vector& vOther);  // 262
		CUtlMemory<CVisCluster, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CVisCluster, CUtlMemory<CVisCluster, int> >::operator[](
				int i);  // 263
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 263
		Vector::operator=(
				const Vector& vOther);  // 263
	}
	CUtlVectorBase<CVisCluster, CUtlMemory<CVisCluster, int> >::Count(); // 252
	CUtlVectorBase<CVisCluster, CUtlMemory<CVisCluster, int> >::Count(); // 266
} /* size: 179, inline expansions: 2 (6 bytes) */

// <003D4C3C> engine2/pvs.cpp:269
// variables: 3
// function calls: 13
void CPVS::GetClusterBounds(int nCluster, Vector* pMins, Vector* pMaxs)
{
	const char   __FUNCTION__; // 56056
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 271
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 272
	}
	CUtlVectorBase<CVisCluster, CUtlMemory<CVisCluster, int> >::IsValidIndex(
			int i);  // 276
	CUtlMemory<CVisCluster, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CVisCluster, CUtlMemory<CVisCluster, int> >::operator[](
			int i);  // 279
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 279
	Vector::operator=(
			const Vector& vOther);  // 279
	CUtlMemory<CVisCluster, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CVisCluster, CUtlMemory<CVisCluster, int> >::operator[](
			int i);  // 280
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 280
	Vector::operator=(
			const Vector& vOther);  // 280
} /* size: 284, variables: 1, inline expansions: 13 (185 bytes) */

// <003DC4AC> engine2/pvs.cpp:284
// function call: 1
void CPVS::IsEmptyPVS()
{
	CVoxelVisibility::ClusterCount(); // 288
} /* size: 27, inline expansions: 1 (0 bytes) */

// <003D4C23> engine2/pvs.cpp:284
inline void CPVS::IsEmptyPVS()
{
} /* size: 0 */

// <003D4A75> engine2/pvs.cpp:290
// variables: 5
// function calls: 4
void CPVS::IsSkyVisibleFromPosition(const Vector& vPosition)
{
	{
		uint nCluster; // 294
		{
			const uint32* pVisData; // 297
			uint32 nDWord; // 298
			uint32 nBit; // 299
			uint32 nMask; // 300
			CVoxelVisibility::GetVisBits(
					int nPVSIndex);  // 425
			CPVS::GetVisBits(
					int nClusterIndex);  // 297
		}
		CVoxelVisibility::ClusterCount(); // 295
	}
	CVoxelVisibility::HasSkyVisiblityData(); // 292
} /* size: 168, inline expansions: 1 (0 bytes) */

// <003E0A24> engine2/pvs.cpp:308
// variables: 5
// function calls: 7
void CPVS::IsSunVisibleFromPosition(const Vector& vPosition)
{
	CVoxelVisibility::HasSunVisiblityData(); // 310
	{
		uint nCluster; // 312
		CVoxelVisibility::HasSunVisiblityData(); // 214
		CVoxelVisibility::ClusterCount(); // 216
		{
			const uint32* pVisData; // 218
			uint32 nDWord; // 219
			uint32 nBit; // 220
			uint32 nMask; // 221
			CVoxelVisibility::GetVisBits(
					int nPVSIndex);  // 425
			CPVS::GetVisBits(
					int nClusterIndex);  // 218
		}
		CPVS::IsSunVisibleFromCluster(
					uint nCluster);  // 313
	}
	CPVS::IsSunVisibleFromPosition(
				const Vector& vPosition);  // 308
} /* size: 168, inline expansions: 2 (95 bytes) */

// <003D4A40> engine2/pvs.cpp:308
// variable: 1
inline void CPVS::IsSunVisibleFromPosition(const Vector& vPosition)
{
	{
		uint nCluster; // 312
	}
} /* size: 0 */

// <003D484A> engine2/pvs.cpp:319
// variables: 6
// function calls: 5
void CPVS::IsSunVisibleInPVS(const CPVSBits& pvsData)
{
	const uint32* pVisData; // 323
	const char   __FUNCTION__; // 56083
	uint nDwordCount; // 325
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 324
	}
	{
		uint i; // 326
		{
			uint32 nMask; // 328
		}
	}
	CPVSBits::IsEmpty(); // 321
	CVoxelVisibility::ClusterCount(); // 324
	CVoxelVisibility::GetVisBits(
			int nPVSIndex);  // 425
	CPVS::GetVisBits(
			int nClusterIndex);  // 323
	CVoxelVisibility::PVSDWordCount(); // 325
} /* size: 215, variables: 3, inline expansions: 5 (91 bytes) */

// <003D3676> engine2/pvs.cpp:340
// variables: 37
// function calls: 70
void CPVS::GetPrecisePVS(CPVSBits* pOutPVS, const Vector& vPosition)
{
	Vector vCheckPosition; // 342
	AABBAligned_t bounds; // 347
	int nLeaf; // 348
	uint nDwordCount; // 354
	int nClusterPVSCopied; // 356
	uint nRegionCount; // 358
	{
		uint nFirstRegion; // 361
		uint64 nPointMask; // 363
		{
			uint i; // 364
			{
				const CVoxelVisRegion& region; // 366
				uint64 nMask; // 367
				{
					uint nCluster; // 370
					{
						const uint32* pVisData; // 373
						memcpy(void* __dest,
							const void* __src,
							size_t __len);  // 79
						V_memcpy(void* dest,
							const void* src,
							uint count);  // 376
						CVoxelVisibility::GetVisBits(
								int nPVSIndex);  // 425
						CPVS::GetVisBits(
								int nClusterIndex);  // 373
						BitVec_Or<false>(uint32* pDest,
								const uint32* pOperand1,
								const uint32* pOperand2,
								int numDWords);  // 380
					}
				}
			}
		}
		{
			fltx4 x000; // 1010
			fltx4 y000; // 1011
			fltx4 z000; // 1012
			fltx4 x0y0; // 1013
			_mm_load_ss(const float* __P); // 1011
			_mm_load_ss(const float* __P); // 1010
			_mm_movelh_ps(__m128 __A,
					__m128 __B);  // 1013
			_mm_load_ss(const float* __P); // 1012
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1014
		}
		LoadUnaligned3SIMD<>(const void* pSIMD); // 110
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 51
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 51
		AABBAligned_t::GetCenter(); // 109
		{
			fltx4 retVal; // 1981
			_mm_cmpgt_ps(__m128 __A,
					__m128 __B);  // 1982
		}
		CmpGtSIMD<>(const fltx4& a,
				const fltx4& b);  // 111
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
				const fltx4& b);  // 114
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
				const fltx4& b);  // 115
		_mm_movemask_ps(__m128 __A); // 1805
		TestSignSIMD<>(const fltx4& a); // 112
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 51
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 51
		AABBAligned_t::GetCenter(); // 116
		{
			fltx4 retVal; // 1981
			_mm_cmpgt_ps(__m128 __A,
					__m128 __B);  // 1982
		}
		CmpGtSIMD<>(const fltx4& a,
				const fltx4& b);  // 117
		_mm_movemask_ps(__m128 __A); // 1805
		TestSignSIMD<>(const fltx4& a); // 118
		IntersectPointWithVoxelHierarchy(const AABBAligned_t& bounds,
						const Vector& vPoint);  // 363
	}
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 342
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 41
	CPVSBits::SetEmpty(); // 345
	Vector::Base(); // 26
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
	LoadUnaligned3SIMD<>(const void* pSIMD); // 26
	{
		fltx4 x000; // 1010
		fltx4 y000; // 1011
		fltx4 z000; // 1012
		fltx4 x0y0; // 1013
		_mm_load_ss(const float* __P); // 1011
		_mm_load_ss(const float* __P); // 1010
		_mm_load_ss(const float* __P); // 1012
		_mm_movelh_ps(__m128 __A,
				__m128 __B);  // 1013
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1014
	}
	LoadUnaligned3SIMD<>(const void* pSIMD); // 27
	Vector::Base(); // 27
	AABBAligned_t::AABBAligned_t(
			const Vector& vMins,
			const Vector& vMaxs);  // 347
	CVoxelVisibility::ClusterCount(); // 353
	CVoxelVisibility::PVSDWordCount(); // 354
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 46
	CPVSBits::SetAllVisible(); // 351
} /* size: 726, variables: 6, inline expansions: 16 (316 bytes) */

// <003D32AD> engine2/pvs.cpp:395
// variable: 1
// function calls: 15
void CPVS::GetSunlightPVS(CPVSBits* pOutPVS)
{
	{
		const uint32* pVisData; // 399
		ConVar::GetInt(); // 351
		ConVar::GetBool(); // 399
		CVoxelVisibility::GetVisBits(
				int nPVSIndex);  // 425
		CPVS::GetVisBits(
				int nClusterIndex);  // 399
		CVoxelVisibility::GetVisBits(
				int nPVSIndex);  // 425
		CPVS::GetVisBits(
				int nClusterIndex);  // 399
		CVoxelVisibility::ClusterCount(); // 400
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 79
		V_memcpy(void* dest,
			const void* src,
			uint count);  // 401
		CVoxelVisibility::PVSBytes(); // 401
	}
	CVoxelVisibility::ClusterCount(); // 288
	CPVS::IsEmptyPVS(); // 397
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 41
	CPVSBits::SetEmpty(); // 405
} /* size: 185, inline expansions: 5 (63 bytes) */

// <003D31BB> engine2/pvs.cpp:409
// function calls: 3
void CPVS::GetOrthoPVS(CPVSBits* pOutPVS)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 41
	CPVSBits::SetEmpty(); // 411
} /* size: 30, inline expansions: 3 (63 bytes) */

// <003D3195> engine2/pvs.cpp:423
inline void CPVS::GetVisBits(int nClusterIndex)
{
} /* size: 0 */

// <003C5D1C> engine2/pvs.cpp:431
// function calls: 7
void CEnginePVSManager::~CEnginePVSManager()
{
	CUtlMemory<CPVS::IsExternallyAllocated(); // 905
	CUtlMemory<CPVS::Purge(); // 903
	CUtlMemory<CPVS::Purge(); // 1799
	CUtlVectorBase<CPVS::RemoveAll(); // 1798
	CUtlVectorBase<CPVS::Purge(); // 560
	CUtlVectorBase<CPVS::~CUtlVectorBase(); // 410
	CUtlVector<CPVS::~CUtlVector(); // 431
} /* size: 49, inline expansions: 7 (154 bytes) */

// <003C5CFE> engine2/pvs.cpp:431
inline void CEnginePVSManager::~CEnginePVSManager()
{
} /* size: 0 */

// <003C3C86> engine2/pvs.cpp:431
// member functions: 18
// member variables: 3
// vtable entries: 5
// class size: 48
class CEnginePVSManager : public IEnginePVSManager {
public:
	/* class IEnginePVSManager <ancestor>; */ /* 0 8 */
	void CEnginePVSManager(CEnginePVSManager* , CEnginePVSManager& );
	void CEnginePVSManager(CEnginePVSManager* , const CEnginePVSManager& );
	/* engine2/pvs.cpp:434 */
	void CEnginePVSManager(CEnginePVSManager* );
	/* engine2/pvs.cpp:485 */
	virtual void Shutdown(CEnginePVSManager* );
	/* engine2/pvs.cpp:490 */
	virtual void Enable(CEnginePVSManager* , bool);
	/* engine2/pvs.cpp:499 */
	virtual bool IsEnabled(const CEnginePVSManager* );
	/* engine2/pvs.cpp:455 */
	virtual IPVS* BuildPvs(CEnginePVSManager* , IWorldReference* );
	/* engine2/pvs.cpp:471 */
	virtual void DestroyPvs(CEnginePVSManager* , IPVS* );
private:
	CUtlVector<CPVS*, CUtlMemory<CPVS*, int> > m_PVSList; /* 8 32 */
	bool m_bEnable; /* 40 1 */
	void ~CEnginePVSManager(CEnginePVSManager* );
	void CEnginePVSManager(class CEnginePVSManager *, class CEnginePVSManager &); /* linkage=_ZN17CEnginePVSManagerC4EOS_ */
	void CEnginePVSManager(class CEnginePVSManager *, const class CEnginePVSManager  &); /* linkage=_ZN17CEnginePVSManagerC4ERKS_ */
	void CEnginePVSManager(class CEnginePVSManager *); /* linkage=_ZN17CEnginePVSManagerC4Ev */
	virtual void Shutdown(class CEnginePVSManager *); /* linkage=_ZN17CEnginePVSManager8ShutdownEv */
	/* <3dc508> engine2/pvs.cpp:490 */
	virtual void Enable(class CEnginePVSManager *, bool); /* linkage=_ZN17CEnginePVSManager6EnableEb */
	/* <3dc5f7> engine2/pvs.cpp:499 */
	virtual bool IsEnabled(const class CEnginePVSManager  *); /* linkage=_ZNK17CEnginePVSManager9IsEnabledEv */
	virtual class IPVS * BuildPvs(class CEnginePVSManager *, class IWorldReference *); /* linkage=_ZN17CEnginePVSManager8BuildPvsEP15IWorldReference */
	virtual void DestroyPvs(class CEnginePVSManager *, class IPVS *); /* linkage=_ZN17CEnginePVSManager10DestroyPvsEP4IPVS */
	void ~CEnginePVSManager(class CEnginePVSManager *); /* linkage=_ZN17CEnginePVSManagerD4Ev */
};

// <003D3116> engine2/pvs.cpp:434
void CEnginePVSManager::CEnginePVSManager()
{
} /* size: 0 */

// <003D30FD> engine2/pvs.cpp:434
inline void CEnginePVSManager::CEnginePVSManager()
{
} /* size: 0 */

// <003D29BE> engine2/pvs.cpp:455
// variables: 5
// function calls: 26
void CEnginePVSManager::BuildPvs(IWorldReference* worldRef)
{
	CVoxelVisibility* pVis; // 457
	IWorld* pGeometryWorld; // 458
	const char   __FUNCTION__; // 55870
	CPVS* pPVS; // 463
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 460
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 463
	CVoxelVisibility::IsValidCluster(
			int nClusterIndex);  // 198
	{
	}
	CVoxelVisibility::IsValidCluster(
			int nClusterIndex);  // 199
	{
	}
	CVoxelVisibility::ClusterCount(); // 203
	CPVS::Init(
		const CVoxelVisibility* pVis);  // 464
	IPVS::IPVS(); // 91
	CUtlMemory<CVisCluster, int>::ValidateGrowSize(); // 475
	CUtlMemory<CVisCluster, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CVisCluster, CUtlMemory<CVisCluster, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CVisCluster, CUtlMemory<CVisCluster, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVisCluster, CUtlMemory<CVisCluster, int> >::CUtlVector(); // 91
	CPVS::CPVS(
		const Vector& vWorldOffset);  // 463
	CUtlMemory<CPVS::NumAllocated(); // 1196
	CUtlMemory<CPVS::Base(); // 112
	CUtlVectorBase<CPVS::Base(); // 368
	CUtlVectorBase<CPVS::ResetDbgInfo(); // 824
	CUtlMemory<CPVS::IsGrowable(); // 823
	CUtlMemory<CPVS::IsExternallyAllocated(); // 859
	CUtlMemory<CPVS::IsExternallyAllocated(); // 861
	CUtlMemory<CPVS::Grow(
		int num);  // 806
	CUtlVectorBase<CPVS::GrowMemory(
			int num);  // 1198
	CUtlMemory<CPVS::operator[](
			int i);  // 602
	CUtlVectorBase<CPVS::Element(
		int i);  // 1201
	CopyConstruct<CPVS*>(CPVS** pMemory,
				CPVS* const& src);  // 1201
	CUtlVectorBase<CPVS::AddToTail(
			CPVS* const& src);  // 466
} /* size: 0, variables: 4, inline expansions: 26 (1128 bytes) */

// <003D24FB> engine2/pvs.cpp:471
// variables: 2
// function calls: 21
void CEnginePVSManager::DestroyPvs(IPVS* pvs)
{
	{
		int i; // 473
		{
			CPVS* pPVS; // 477
			CUtlMemory<CVisCluster, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CVisCluster, int>::Purge(); // 903
			CUtlMemory<CVisCluster, int>::Purge(); // 1799
			CUtlVectorBase<CVisCluster, CUtlMemory<CVisCluster, int> >::Purge(); // 560
			ValidateAlignment<CVisCluster>(void); // 508
			CUtlMemory<CVisCluster, int>::Purge(); // 510
			CUtlMemory<CVisCluster, int>::~CUtlMemory(); // 562
			CUtlVectorBase<CVisCluster, CUtlMemory<CVisCluster, int> >::~CUtlVectorBase(); // 410
			CUtlVector<CVisCluster, CUtlMemory<CVisCluster, int> >::~CUtlVector(); // 103
			CPVS::~CPVS(); // 478
			CUtlMemory<CPVS::operator[](
					int i);  // 602
			CUtlVectorBase<CPVS::Element(
				int i);  // 1114
			CUtlMemory<CPVS::operator[](
					int i);  // 602
			CUtlVectorBase<CPVS::Element(
				int i);  // 1114
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 115
			V_memmove(void* dest,
					const void* src,
					size_t count);  // 1114
			CUtlVectorBase<CPVS::ShiftElementsLeft(
						int elem,
						int num);  // 1608
			CUtlVectorBase<CPVS::Remove(
				int elem);  // 479
		}
		CUtlVectorBase<CPVS::Count(); // 473
		CUtlMemory<CPVS::operator[](
				int i);  // 588
		CUtlVectorBase<CPVS::operator[](
				int i);  // 475
	}
} /* size: 265 */

// <003D20DB> engine2/pvs.cpp:485
// variable: 1
// function calls: 19
void CEnginePVSManager::Shutdown()
{
	{
		int i; // 1807
		CUtlMemory<CPVS::operator[](
				int i);  // 602
		CUtlVectorBase<CPVS::Element(
			int i);  // 1809
		CUtlMemory<CVisCluster, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CVisCluster, int>::Purge(); // 903
		CUtlMemory<CVisCluster, int>::Purge(); // 1799
		CUtlVectorBase<CVisCluster, CUtlMemory<CVisCluster, int> >::Purge(); // 560
		ValidateAlignment<CVisCluster>(void); // 508
		CUtlMemory<CVisCluster, int>::Purge(); // 510
		CUtlMemory<CVisCluster, int>::~CUtlMemory(); // 562
		CUtlVectorBase<CVisCluster, CUtlMemory<CVisCluster, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CVisCluster, CUtlMemory<CVisCluster, int> >::~CUtlVector(); // 103
		CPVS::~CPVS(); // 1809
	}
	CUtlVectorBase<CPVS::RemoveAll(); // 1798
	CUtlMemory<CPVS::IsExternallyAllocated(); // 905
	CUtlMemory<CPVS::Purge(); // 903
	CUtlMemory<CPVS::Purge(); // 1799
	CUtlVectorBase<CPVS::ResetDbgInfo(); // 1800
	CUtlVectorBase<CPVS::Purge(); // 1811
	CUtlVectorBase<CPVS::PurgeAndDeleteElements(); // 487
} /* size: 198, inline expansions: 7 (296 bytes) */

// <003DC508> engine2/pvs.cpp:490
// variable: 1
// function calls: 3
void CEnginePVSManager::Enable(bool bEnable)
{
	{
		int i; // 493
		CUtlVectorBase<CPVS::Count(); // 493
		CUtlMemory<CPVS::operator[](
				int i);  // 588
		CUtlVectorBase<CPVS::operator[](
				int i);  // 495
	}
} /* size: 54 */

// <003D20A8> engine2/pvs.cpp:490
// variable: 1
void CEnginePVSManager::Enable(bool bEnable)
{
	{
		int i; // 493
	}
} /* size: 0 */

// <003DC5F7> engine2/pvs.cpp:499
void CEnginePVSManager::IsEnabled()
{
} /* size: 9 */

// <003D1FFE> engine2/pvs.cpp:509
void CPVS::GetClustersForOrigin(uint32* pList, int nListMax, const Vector& vOrigin)
{
} /* size: 79 */

// <003D0767> engine2/pvs.cpp:528
// variables: 33
// function calls: 98
void CPVS::ClustersInBox(CClusterQueryResults& results, const Vector& vMins, const Vector& vMaxs)
{
	AABBAligned_t queryBounds; // 530
	AABBAligned_t nodeBounds; // 531
	fltx4 fl4Mins; // 532
	fltx4 fl4Maxs; // 533
	fltx4 fl4Size; // 534
	{
		fltx4 x000; // 1010
		fltx4 y000; // 1011
		fltx4 z000; // 1012
		fltx4 x0y0; // 1013
		_mm_load_ss(const float* __P); // 1011
		_mm_load_ss(const float* __P); // 1010
		_mm_movelh_ps(__m128 __A,
				__m128 __B);  // 1013
		_mm_load_ss(const float* __P); // 1012
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1014
	}
	LoadUnaligned3SIMD<>(const void* pSIMD); // 26
	{
		fltx4 x000; // 1010
		fltx4 y000; // 1011
		fltx4 z000; // 1012
		fltx4 x0y0; // 1013
		_mm_load_ss(const float* __P); // 1011
		_mm_load_ss(const float* __P); // 1010
		_mm_movelh_ps(__m128 __A,
				__m128 __B);  // 1013
		_mm_load_ss(const float* __P); // 1012
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1014
	}
	LoadUnaligned3SIMD<>(const void* pSIMD); // 27
	Vector::Base(); // 26
	Vector::Base(); // 27
	AABBAligned_t::AABBAligned_t(
			const Vector& vMins,
			const Vector& vMaxs);  // 530
	Vector::Base(); // 26
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
	LoadUnaligned3SIMD<>(const void* pSIMD); // 26
	{
		fltx4 x000; // 1010
		fltx4 y000; // 1011
		fltx4 z000; // 1012
		fltx4 x0y0; // 1013
		_mm_load_ss(const float* __P); // 1011
		_mm_load_ss(const float* __P); // 1010
		_mm_load_ss(const float* __P); // 1012
		_mm_movelh_ps(__m128 __A,
				__m128 __B);  // 1013
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1014
	}
	LoadUnaligned3SIMD<>(const void* pSIMD); // 27
	Vector::Base(); // 27
	AABBAligned_t::AABBAligned_t(
			const Vector& vMins,
			const Vector& vMaxs);  // 531
	{
		fltx4 zzww; // 1414
		{
			fltx4 retVal; // 1276
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1277
		}
		ShuffleSIMD<148>(const fltx4& a,
				const fltx4& b);  // 665
		ShuffleSIMD<148>(const fltx4& a,
				const fltx4& b);  // 1415
	}
	SetWSIMD<>(const fltx4& a,
			const fltx4& w);  // 536
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 2335
	{
		fltx4 retVal; // 373
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 374
	}
	RotateLeft2<>(const fltx4& a); // 2336
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 2337
	HMinSIMD(fltx4 a); // 536
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 538
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::Base(); // 104
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::Count(); // 104
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::end(); // 71
	__countl_zero<long unsigned int>(long unsigned int __x); // 388
	__bit_width<long unsigned int>(long unsigned int __x); // 1555
	__lg<long int>(long int __n); // 1907
	{
		unsigned int* __i; // 1776
		{
			value_type __val; // 1781
			{
				ptrdiff_t __n; // 700
				__distance<unsigned int*>(unsigned int* __first,
								unsigned int* __last,
								random_access_iterator_tag);  // 153
				distance<unsigned int*>(unsigned int* __first,
							unsigned int* __last);  // 700
				__advance<unsigned int*, long int>(unsigned int *& __i,
									long int __n,
									random_access_iterator_tag);  // 186
				__advance<unsigned int*, long int>(unsigned int *& __i,
									long int __n,
									random_access_iterator_tag);  // 226
				advance<unsigned int*, long int>(unsigned int *& __i,
								long int __n);  // 701
				__assign_one<true, unsigned int*, unsigned int*>(unsigned int *& __out,
										unsigned int *& __in);  // 709
			}
			__copy_move_backward_a2<true, unsigned int*, unsigned int*>(unsigned int* __first,
											unsigned int* __last,
											unsigned int* __result);  // 753
			__copy_move_backward_a1<true, unsigned int*, unsigned int*>(unsigned int* __first,
											unsigned int* __last,
											unsigned int* __result);  // 783
			__copy_move_backward_a<true, unsigned int*, unsigned int*>(unsigned int* __first,
											unsigned int* __last,
											unsigned int* __result);  // 882
			move_backward<unsigned int*, unsigned int*>(unsigned int* __first,
									unsigned int* __last,
									unsigned int* __result);  // 1782
		}
		_Iter_less_iter::operator(
							unsigned int* __it1,
							unsigned int* __it2);  // 1778
		_Val_less_iter::operator(
							unsigned int& __val,
							unsigned int* __it);  // 1758
		__unguarded_linear_insert<unsigned int*, __gnu_cxx::__ops::_Val_less_iter>(unsigned int* __last,
												_Val_less_iter __comp);  // 1786
	}
	__insertion_sort<unsigned int*, __gnu_cxx::__ops::_Iter_less_iter>(unsigned int* __first,
										unsigned int* __last,
										_Iter_less_iter __comp);  // 1818
	{
		unsigned int* __i; // 1798
		_Val_less_iter::operator(
							unsigned int& __val,
							unsigned int* __it);  // 1758
		__unguarded_linear_insert<unsigned int*, __gnu_cxx::__ops::_Val_less_iter>(unsigned int* __last,
												_Val_less_iter __comp);  // 1799
	}
	__unguarded_insertion_sort<unsigned int*, __gnu_cxx::__ops::_Iter_less_iter>(unsigned int* __first,
											unsigned int* __last,
											_Iter_less_iter __comp);  // 1819
	__final_insertion_sort<unsigned int*, __gnu_cxx::__ops::_Iter_less_iter>(unsigned int* __first,
										unsigned int* __last,
										_Iter_less_iter __comp);  // 1813
	{
		unsigned int* __i; // 1776
		{
			value_type __val; // 1781
			{
				ptrdiff_t __n; // 700
				__distance<unsigned int*>(unsigned int* __first,
								unsigned int* __last,
								random_access_iterator_tag);  // 153
				distance<unsigned int*>(unsigned int* __first,
							unsigned int* __last);  // 700
				__advance<unsigned int*, long int>(unsigned int *& __i,
									long int __n,
									random_access_iterator_tag);  // 186
				__advance<unsigned int*, long int>(unsigned int *& __i,
									long int __n,
									random_access_iterator_tag);  // 226
				advance<unsigned int*, long int>(unsigned int *& __i,
								long int __n);  // 701
				__assign_one<true, unsigned int*, unsigned int*>(unsigned int *& __out,
										unsigned int *& __in);  // 709
			}
			__copy_move_backward_a2<true, unsigned int*, unsigned int*>(unsigned int* __first,
											unsigned int* __last,
											unsigned int* __result);  // 753
			__copy_move_backward_a1<true, unsigned int*, unsigned int*>(unsigned int* __first,
											unsigned int* __last,
											unsigned int* __result);  // 783
			__copy_move_backward_a<true, unsigned int*, unsigned int*>(unsigned int* __first,
											unsigned int* __last,
											unsigned int* __result);  // 882
			move_backward<unsigned int*, unsigned int*>(unsigned int* __first,
									unsigned int* __last,
									unsigned int* __result);  // 1782
		}
		_Iter_less_iter::operator(
							unsigned int* __it1,
							unsigned int* __it2);  // 1778
		_Val_less_iter::operator(
							unsigned int& __val,
							unsigned int* __it);  // 1758
		__unguarded_linear_insert<unsigned int*, __gnu_cxx::__ops::_Val_less_iter>(unsigned int* __last,
												_Val_less_iter __comp);  // 1786
	}
	__insertion_sort<unsigned int*, __gnu_cxx::__ops::_Iter_less_iter>(unsigned int* __first,
										unsigned int* __last,
										_Iter_less_iter __comp);  // 1823
	__final_insertion_sort<unsigned int*, __gnu_cxx::__ops::_Iter_less_iter>(unsigned int* __first,
										unsigned int* __last,
										_Iter_less_iter __comp);  // 1909
	__sort<unsigned int*, __gnu_cxx::__ops::_Iter_less_iter>(unsigned int* __first,
								unsigned int* __last,
								_Iter_less_iter __comp);  // 4841
	sort<unsigned int*>(unsigned int* __first,
				unsigned int* __last);  // 71
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::Base(); // 104
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::Count(); // 104
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::end(); // 72
	_Iter_equal_to_iter::operator(
						unsigned int* __it1,
						unsigned int* __it2);  // 831
	__adjacent_find<unsigned int*, __gnu_cxx::__ops::_Iter_equal_to_iter>(unsigned int* __first,
										unsigned int* __last,
										_Iter_equal_to_iter __binary_pred);  // 845
	_Iter_equal_to_iter::operator(
						unsigned int* __it1,
						unsigned int* __it2);  // 853
	__unique<unsigned int*, __gnu_cxx::__ops::_Iter_equal_to_iter>(unsigned int* __first,
									unsigned int* __last,
									_Iter_equal_to_iter __binary_pred);  // 884
	unique<unsigned int*>(unsigned int* __first,
				unsigned int* __last);  // 72
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::Base(); // 102
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::begin(); // 72
	CClusterQueryResults::ReduceToUnique(); // 546
} /* size: 995, variables: 5, inline expansions: 44 (3625 bytes) */

// <003CF603> engine2/pvs.cpp:549
// variables: 27
// function calls: 68
void CPVS::ClustersInBoxEnclosed_r(CClusterQueryResults& results, uint nNode, const AABBAligned_t& nodeBounds, const AABBAligned_t& queryBounds)
{
	const CVoxelVisNode& node; // 551
	{
		const VisClusterListEntry_t& entry; // 556
		{
			uint i; // 557
			CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::Element(
				int i);  // 1252
			Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
			CUtlMemory<unsigned int, int>::Base(); // 112
			CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::Base(); // 368
			CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::AddToTail(
					unsigned int& src);  // 65
			CClusterQueryResults::AddEmptyCluster(
					uint16 nCluster);  // 559
		}
	}
	{
		uint64 nQueryMask; // 566
		{
			uint i; // 567
			{
				const CVoxelVisRegion& region; // 569
				uint64 nMask; // 570
				{
					uint16 nCluster; // 573
					CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::Element(
						int i);  // 1252
					Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
					CUtlMemory<unsigned int, int>::Base(); // 112
					CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::Base(); // 368
					CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::AddToTail(
							unsigned int& src);  // 65
					CClusterQueryResults::AddEmptyCluster(
							uint16 nCluster);  // 574
				}
			}
		}
		IntersectBoxWithVoxelHierarchy(const AABBAligned_t& queryBounds,
						const AABBAligned_t& hierarchyBounds);  // 566
	}
	{
		int i; // 580
		{
			AABBAligned_t childBounds; // 582
			{
				uint nChildNode; // 585
				CVoxelVisNode::FirstChildNode(); // 585
			}
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 51
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 51
			AABBAligned_t::GetCenter(); // 171
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 169
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
					const fltx4& b);  // 172
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
					const fltx4& b);  // 173
			BoundsForChildVoxel(const AABBAligned_t& bounds,
						int nChildIndex);  // 582
			{
				fltx4 retVal; // 927
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 928
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 930
			}
			SetWToZeroSIMD<>(const fltx4& a); // 43
			{
				fltx4 retVal; // 2067
				_mm_cmplt_ps(__m128 __A,
						__m128 __B);  // 2068
			}
			CmpLtSIMD<>(const fltx4& a,
					const fltx4& b);  // 42
			{
				fltx4 retVal; // 2067
				_mm_cmplt_ps(__m128 __A,
						__m128 __B);  // 2068
			}
			CmpLtSIMD<>(const fltx4& a,
					const fltx4& b);  // 41
			{
				fltx4 retVal; // 875
				_mm_or_ps(__m128 __A,
						__m128 __B);  // 876
			}
			OrSIMD<>(const fltx4& a,
				const fltx4& b);  // 42
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 1842
			IsAnyNegative<>(const fltx4& a); // 43
			AABBAligned_t::Overlaps(
				const AABBAligned_t& other);  // 583
		}
	}
	CVoxelVisNode::HasEnclosedClusterList(); // 554
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 48
	{
		fltx4 retVal; // 2039
		_mm_cmpge_ps(__m128 __A,
				__m128 __B);  // 2040
	}
	CmpGeSIMD<>(const fltx4& a,
			const fltx4& b);  // 48
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 48
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 49
	AABBAligned_t::Contains(
		const AABBAligned_t& other);  // 554
	CVoxelVisNode::IsLeaf(); // 564
} /* size: 813, variables: 1, inline expansions: 8 (62 bytes) */

// <003CE964> engine2/pvs.cpp:592
// variables: 22
// function calls: 48
void CPVS::ClustersInBox_r(CClusterQueryResults& results, uint nNode, const AABBAligned_t& nodeBounds, const AABBAligned_t& queryBounds)
{
	const CVoxelVisNode& node; // 594
	{
		uint64 nQueryMask; // 598
		{
			uint i; // 599
			{
				const CVoxelVisRegion& region; // 601
				uint64 nMask; // 602
				{
					uint16 nCluster; // 605
					CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::Element(
						int i);  // 1252
					Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
					CUtlMemory<unsigned int, int>::Base(); // 112
					CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::Base(); // 368
					CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::AddToTail(
							unsigned int& src);  // 65
					CClusterQueryResults::AddEmptyCluster(
							uint16 nCluster);  // 606
				}
			}
		}
		IntersectBoxWithVoxelHierarchy(const AABBAligned_t& queryBounds,
						const AABBAligned_t& hierarchyBounds);  // 598
	}
	{
		int i; // 612
		{
			AABBAligned_t childBounds; // 614
			{
				uint nChildNode; // 617
				CVoxelVisNode::FirstChildNode(); // 617
			}
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 51
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 51
			AABBAligned_t::GetCenter(); // 171
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 169
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
					const fltx4& b);  // 172
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
					const fltx4& b);  // 173
			BoundsForChildVoxel(const AABBAligned_t& bounds,
						int nChildIndex);  // 614
			{
				fltx4 retVal; // 927
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 928
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 930
			}
			SetWToZeroSIMD<>(const fltx4& a); // 43
			{
				fltx4 retVal; // 2067
				_mm_cmplt_ps(__m128 __A,
						__m128 __B);  // 2068
			}
			CmpLtSIMD<>(const fltx4& a,
					const fltx4& b);  // 42
			{
				fltx4 retVal; // 2067
				_mm_cmplt_ps(__m128 __A,
						__m128 __B);  // 2068
			}
			CmpLtSIMD<>(const fltx4& a,
					const fltx4& b);  // 41
			{
				fltx4 retVal; // 875
				_mm_or_ps(__m128 __A,
						__m128 __B);  // 876
			}
			OrSIMD<>(const fltx4& a,
				const fltx4& b);  // 42
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 1842
			IsAnyNegative<>(const fltx4& a); // 43
			AABBAligned_t::Overlaps(
				const AABBAligned_t& other);  // 615
		}
	}
	CVoxelVisNode::IsLeaf(); // 596
} /* size: 570, variables: 1, inline expansions: 1 (0 bytes) */

// <003CE913> engine2/pvs.cpp:624
// variables: 3
void EnsureNonEmptyBounds(Vector& vMins, Vector& vMaxs)
{
	Vector vCenter; // 626
	Vector vExt; // 627
	const float  flMinAdj; // 629
} /* size: 0, variables: 3 */

// <003CD743> engine2/pvs.cpp:638
// variables: 4
// function calls: 74
void CPVS::GetClustersForBounds(uint32* pList, int nListMax, const Vector& vMinsIn, const Vector& vMaxsIn, bool bIsStatic)
{
	Vector vMins; // 648
	Vector vMaxs; // 649
	CClusterQueryResults results; // 658
	{
		int i; // 674
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::operator[](
				int i);  // 676
	}
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 649
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 648
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 626
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 627
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 626
	Vector::operator+=(
			const Vector& v);  // 632
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 635
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 634
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1539
	VectorMax(const Vector& a,
			const Vector& b);  // 631
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 632
	Vector::operator=(
			const Vector& vOther);  // 635
	Vector::operator=(
			const Vector& vOther);  // 634
	EnsureNonEmptyBounds(Vector& vMins,
				Vector& vMaxs);  // 650
	AABB_t::Contains(
		const AABB_t& box);  // 652
	Vector::Vector(); // 27
	Vector::Vector(); // 27
	Vector::operator=(
			const Vector& vOther);  // 28
	Vector::operator=(
			const Vector& vOther);  // 29
	AABB_t::AABB_t(
		const Vector& vMins,
		const Vector& vMaxs);  // 652
	Vector::Vector(); // 27
	Vector::Vector(); // 27
	Vector::operator=(
			const Vector& vOther);  // 28
	Vector::operator=(
			const Vector& vOther);  // 29
	AABB_t::AABB_t(
		const Vector& vMins,
		const Vector& vMaxs);  // 652
	CUtlMemory<unsigned int, int>::CUtlMemory(
			unsigned int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<unsigned int, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::CUtlMemoryFixedGrowable_Base(
					unsigned int* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<1024, unsigned int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<1024, unsigned int>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<1024, unsigned int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<unsigned int, 1024, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<unsigned int, 1024>::CUtlVectorFixedGrowable(
				int growSize);  // 56
	CClusterQueryResults::CClusterQueryResults(); // 658
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::Count(); // 661
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<1024, unsigned int, 4>::Base(); // 237
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<unsigned int, int>::ConvertToExternalMemory(
				unsigned int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<unsigned int, 1024, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned int, 1024, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned int, 1024>::~CUtlVectorFixedGrowable(); // 56
	CClusterQueryResults::~CClusterQueryResults(); // 681
} /* size: 720, variables: 3, inline expansions: 72 (1498 bytes) */

// <003CD2DA> engine2/pvs.cpp:683
// variables: 7
// function calls: 13
void CPVS::GetClustersForOrientedBounds(uint32* pList, int nListMax, const OBB_t& orientedBounds, bool bIsStatic)
{
	const AABB_t  axisAlignedBounds; // 692
	uint32 aabbClusters; // 693
	int nAABBClusters; // 694
	int nOBBClusters; // 702
	{
		int i; // 703
		{
			const CVisCluster& cluster; // 705
			AABB_t clusterBounds; // 707
			CUtlMemory<CVisCluster, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CVisCluster, CUtlMemory<CVisCluster, int> >::operator[](
					int i);  // 705
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 708
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 709
			Vector::Vector(); // 24
			Vector::Vector(); // 24
			AABB_t::AABB_t(); // 707
			Vector::operator=(
					const Vector& vOther);  // 708
			Vector::operator=(
					const Vector& vOther);  // 709
		}
	}
} /* size: 499, variables: 4 */

// <003DC622> engine2/pvs.cpp:722
// variables: 5
// function calls: 7
void CPVS::FilterClustersInRadius(uint32* pList, int nListIn, const Vector& vCenter, float fRadius)
{
	const Vector  vShiftedCenter; // 730
	int nClustersOut; // 731
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 730
	{
		int i; // 733
		{
			const int  nCluster; // 735
			const CVisCluster& cluster; // 736
			CUtlMemory<CVisCluster, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CVisCluster, CUtlMemory<CVisCluster, int> >::operator[](
					int i);  // 736
			AABB_t::GetMinDistToPoint(
						const Vector& vPoint);  // 740
		}
	}
	CPVS::FilterClustersInRadius(
				uint32* pList,
				int nListIn,
				const Vector& vCenter,
				float fRadius);  // 722
} /* size: 250, variables: 2, inline expansions: 4 (178 bytes) */

// <003CD24A> engine2/pvs.cpp:722
// variables: 5
void CPVS::FilterClustersInRadius(uint32* pList, int nListIn, const Vector& vCenter, float fRadius)
{
	const Vector  vShiftedCenter; // 730
	int nClustersOut; // 731
	{
		int i; // 733
		{
			const int  nCluster; // 735
			const CVisCluster& cluster; // 736
		}
	}
} /* size: 0, variables: 2 */

// <003CD1FA> engine2/pvs.cpp:750
void CPVS::GetVisibleEverywhereClusterList(uint32* pList, int nListMax)
{
} /* size: 16 */

// <003E0937> engine2/pvs.cpp:757
// variables: 6
// function call: 1
void CPVS::GetClustersForFrustum(uint32* pList, int nListMax, const CFrustum* pFrustum, bool bIsStatic)
{
	const Vector   vClipSpacePoints; // 765
	VMatrix invViewProj; // 776
	AABB_t frustumBounds; // 777
	uint32 nClusterList; // 789
	int nClusterCount; // 790
	int nOut; // 792
	CVoxelVisibility::ClusterCount(); // 759
} /* size: 52, variables: 6, inline expansions: 1 (0 bytes) */

// <003DF26E> engine2/pvs.cpp:757
// variables: 47
// function calls: 87
void CPVS::GetClustersForFrustum(uint32* pList, int nListMax, const CFrustum* pFrustum, bool bIsStatic)
{
	const Vector   vClipSpacePoints; // 765
	VMatrix invViewProj; // 776
	AABB_t frustumBounds; // 777
	uint32 nClusterList; // 789
	int nClusterCount; // 790
	int nOut; // 792
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 774
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 774
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 774
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 774
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 774
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 774
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 774
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 774
	Vector::Vector(); // 24
	Vector::Vector(); // 24
	AABB_t::AABB_t(); // 777
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 138
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 139
	AABB_t::MakeInvalid(); // 778
	{
		const Vector& vClipSpacePoint; // 779
		const Vector& __for_range; // 27027
		const Vector* __for_begin; // 27038
		const Vector* __for_end; // 27049
		{
			Vector vPoint; // 781
			Vector::Vector(); // 781
			AABB_t::AddPointToBounds(
					const Vector& vPoint);  // 783
		}
	}
	{
		int i; // 793
		{
			const CVisCluster& cluster; // 795
			VectorAligned vClusterMins; // 796
			VectorAligned vClusterMaxs; // 797
			CUtlMemory<CVisCluster, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CVisCluster, CUtlMemory<CVisCluster, int> >::operator[](
					int i);  // 795
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 796
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
					const Vector& rhs);  // 796
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 797
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
					const Vector& rhs);  // 797
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 669
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 670
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 671
			{
				fltx4 retVal; // 1295
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1296
			}
			SplatXSIMD<>(const fltx4& a); // 673
			{
				fltx4 retVal; // 1314
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1315
			}
			SplatYSIMD<>(const fltx4& a); // 674
			{
				fltx4 retVal; // 1333
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1334
			}
			SplatZSIMD<>(const fltx4& a); // 675
			{
				fltx4 retVal; // 1295
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1296
			}
			SplatXSIMD<>(const fltx4& a); // 676
			{
				fltx4 retVal; // 1314
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1315
			}
			SplatYSIMD<>(const fltx4& a); // 677
			{
				fltx4 retVal; // 1333
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1334
			}
			SplatZSIMD<>(const fltx4& a); // 678
			{
				int i; // 682
				{
					fltx4 xTotalBack; // 684
					fltx4 yTotalBack; // 685
					fltx4 zTotalBack; // 686
					fltx4 dotBack; // 687
					fltx4 isOut; // 693
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
							const fltx4& b);  // 684
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
							const fltx4& b);  // 685
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
							const fltx4& b);  // 686
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 685
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 686
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 684
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 687
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 687
					{
						fltx4 retVal; // 2067
						_mm_cmplt_ps(__m128 __A,
								__m128 __B);  // 2068
					}
					CmpLtSIMD<>(const fltx4& a,
							const fltx4& b);  // 693
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 1842
					IsAnyNegative<>(const fltx4& a); // 694
				}
			}
			CFrustum::CheckBoxInline(
					const VectorAligned& mins,
					const VectorAligned& maxs);  // 798
		}
	}
} /* size: 873, variables: 6, inline expansions: 14 (145 bytes) */

// <003CD0CA> engine2/pvs.cpp:757
// variables: 15
void CPVS::GetClustersForFrustum(uint32* pList, int nListMax, const CFrustum* pFrustum, bool bIsStatic)
{
	const Vector   vClipSpacePoints; // 765
	VMatrix invViewProj; // 776
	AABB_t frustumBounds; // 777
	uint32 nClusterList; // 789
	int nClusterCount; // 790
	int nOut; // 792
	{
		const Vector& vClipSpacePoint; // 779
		const Vector& __for_range; // 27152
		const Vector* __for_begin; // 49586
		const Vector* __for_end; // 49586
		{
			Vector vPoint; // 781
		}
	}
	{
		int i; // 793
		{
			const CVisCluster& cluster; // 795
			VectorAligned vClusterMins; // 796
			VectorAligned vClusterMaxs; // 797
		}
	}
} /* size: 0, variables: 6 */

// <003CC325> engine2/pvs.cpp:808
// variables: 32
// function calls: 54
void CPVS::RegionAt(const Vector& vPosition)
{
	AABBAligned_t bounds; // 810
	int nLeaf; // 811
	{
		uint nRegionCount; // 814
		{
			uint nFirstRegion; // 817
			uint64 nPointMask; // 819
			{
				uint i; // 820
				{
					const CVoxelVisRegion& region; // 822
					uint64 nMask; // 823
				}
			}
			{
				fltx4 x000; // 1010
				fltx4 y000; // 1011
				fltx4 z000; // 1012
				fltx4 x0y0; // 1013
				_mm_load_ss(const float* __P); // 1011
				_mm_load_ss(const float* __P); // 1010
				_mm_movelh_ps(__m128 __A,
						__m128 __B);  // 1013
				_mm_load_ss(const float* __P); // 1012
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1014
			}
			LoadUnaligned3SIMD<>(const void* pSIMD); // 110
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 51
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 51
			AABBAligned_t::GetCenter(); // 109
			{
				fltx4 retVal; // 1981
				_mm_cmpgt_ps(__m128 __A,
						__m128 __B);  // 1982
			}
			CmpGtSIMD<>(const fltx4& a,
					const fltx4& b);  // 111
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
					const fltx4& b);  // 114
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
					const fltx4& b);  // 115
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 112
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 51
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 51
			AABBAligned_t::GetCenter(); // 116
			{
				fltx4 retVal; // 1981
				_mm_cmpgt_ps(__m128 __A,
						__m128 __B);  // 1982
			}
			CmpGtSIMD<>(const fltx4& a,
					const fltx4& b);  // 117
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 118
			IntersectPointWithVoxelHierarchy(const AABBAligned_t& bounds,
							const Vector& vPoint);  // 819
		}
	}
	Vector::Base(); // 26
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
	LoadUnaligned3SIMD<>(const void* pSIMD); // 26
	{
		fltx4 x000; // 1010
		fltx4 y000; // 1011
		fltx4 z000; // 1012
		fltx4 x0y0; // 1013
		_mm_load_ss(const float* __P); // 1011
		_mm_load_ss(const float* __P); // 1010
		_mm_load_ss(const float* __P); // 1012
		_mm_movelh_ps(__m128 __A,
				__m128 __B);  // 1013
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1014
	}
	LoadUnaligned3SIMD<>(const void* pSIMD); // 27
	Vector::Base(); // 27
	AABBAligned_t::AABBAligned_t(
			const Vector& vMins,
			const Vector& vMaxs);  // 810
} /* size: 373, variables: 2, inline expansions: 5 (100 bytes) */

// <003CB7BA> engine2/pvs.cpp:834
// variables: 22
// function calls: 45
void CPVS::LeafAt(const Vector& vPosition, AABBAligned_t& boundsInOut)
{
	AABBAligned_t bounds; // 839
	uint nNode; // 840
	uint nNodeCount; // 841
	{
		uint nNextNode; // 845
		int nChild; // 852
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 51
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 51
		AABBAligned_t::GetCenter(); // 186
		{
			fltx4 retVal; // 1981
			_mm_cmpgt_ps(__m128 __A,
					__m128 __B);  // 1982
		}
		CmpGtSIMD<>(const fltx4& a,
				const fltx4& b);  // 188
		_mm_movemask_ps(__m128 __A); // 1805
		TestSignSIMD<>(const fltx4& a); // 188
		ChildForPoint(const AABBAligned_t& bounds,
				const Vector& vPoint);  // 852
		{
			fltx4 retVal; // 602
			_mm_load_ps(const float* __P); // 603
		}
		LoadAlignedSIMD<>(const void* pSIMD); // 169
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
				const fltx4& b);  // 173
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
				const fltx4& b);  // 172
		BoundsForChildVoxel(const AABBAligned_t& bounds,
					int nChildIndex);  // 853
		CVoxelVisNode::FirstChildNode(); // 854
		CVoxelVisNode::IsLeaf(); // 846
	}
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
	LoadUnaligned3SIMD<>(const void* pSIMD); // 56
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 57
	{
		fltx4 retVal; // 1981
		_mm_cmpgt_ps(__m128 __A,
				__m128 __B);  // 1982
	}
	CmpGtSIMD<>(const fltx4& a,
			const fltx4& b);  // 57
	{
		fltx4 retVal; // 875
		_mm_or_ps(__m128 __A,
				__m128 __B);  // 876
	}
	OrSIMD<>(const fltx4& a,
		const fltx4& b);  // 57
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 57
	AABBAligned_t::ContainsPoint(
			const Vector& vPnt);  // 836
	CVoxelVisibility::NodeCount(); // 841
} /* size: 198, variables: 3, inline expansions: 8 (103 bytes) */

// <003CAC95> engine2/pvs.cpp:863
// variables: 8
// function calls: 45
void CPVS::GetClusterForPosition(const Vector& vPosition)
{
	Vector vCheckPosition; // 865
	int nRegion; // 871
	const char   __FUNCTION__; // 56176
	{
		CClusterQueryResults results; // 874
		float flExt; // 875
		Vector vGrid; // 876
		int nCluster; // 878
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 882
		}
		CUtlMemory<unsigned int, int>::CUtlMemory(
				unsigned int* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		CUtlMemory<unsigned int, int>::EnsureCapacity(
				int num);  // 199
		CUtlMemoryFixedGrowable_Base<unsigned int, int>::CUtlMemoryFixedGrowable_Base(
						unsigned int* pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		AlignedByteArrayExplicit_t<1024, unsigned int, 4>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<1024, unsigned int>::AlignedByteArray_t(); // 228
		AlignedByteArrayExplicit_t<1024, unsigned int, 4>::Base(); // 231
		CUtlMemoryFixedGrowable<unsigned int, 1024, int>::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<unsigned int, 1024>::CUtlVectorFixedGrowable(
					int growSize);  // 56
		CClusterQueryResults::CClusterQueryResults(); // 874
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 877
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 876
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 877
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::Count(); // 879
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::operator[](
				int i);  // 881
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::RemoveAll(); // 1798
		AlignedByteArrayExplicit_t<1024, unsigned int, 4>::Base(); // 237
		CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 577
		CUtlMemory<unsigned int, int>::ConvertToExternalMemory(
					unsigned int* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
					unsigned int* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
					unsigned int* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		CUtlMemoryFixedGrowable<unsigned int, 1024, int>::Purge(
			int numElements);  // 1799
		CUtlMemory<unsigned int, int>::Base(); // 112
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::Base(); // 368
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::Purge(); // 560
		ValidateAlignment<unsigned int>(void); // 508
		CUtlMemory<unsigned int, int>::Purge(); // 903
		CUtlMemory<unsigned int, int>::Purge(); // 510
		CUtlMemory<unsigned int, int>::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<unsigned int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<unsigned int, 1024, int>::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 1024, int> >::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<unsigned int, 1024>::~CUtlVectorFixedGrowable(); // 56
		CClusterQueryResults::~CClusterQueryResults(); // 885
	}
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 865
	CVoxelVisibility::NodeCount(); // 868
} /* size: 0, variables: 3, inline expansions: 4 (44 bytes) */

// <003CAA1E> engine2/pvs.cpp:889
// variables: 2
// function calls: 5
void CPVS::IsInPVS(int nNumSources, const Vector* pvSources, const Vector& vPosition)
{
	CPVSBits visInfo; // 891
	{
		int nSource; // 894
	}
	CPVSBits::CPVSBits(); // 891
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 941
	CUtlVectorBase<CVisCluster, CUtlMemory<CVisCluster, int> >::Count(); // 942
	CPVS::ResetPVS(
		CPVSBits* pPVS);  // 892
} /* size: 329, variables: 1, inline expansions: 5 (88 bytes) */

// <003CA7BD> engine2/pvs.cpp:902
// variables: 2
// function calls: 5
void CPVS::IsAbsBoxInPVS(int nNumSources, const Vector* pvSources, const Vector& mins, const Vector& maxs)
{
	CPVSBits visInfo; // 904
	{
		int nSource; // 907
	}
	CPVSBits::CPVSBits(); // 904
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 941
	CUtlVectorBase<CVisCluster, CUtlMemory<CVisCluster, int> >::Count(); // 942
	CPVS::ResetPVS(
		CPVSBits* pPVS);  // 905
} /* size: 329, variables: 1, inline expansions: 5 (81 bytes) */

// <003CA64F> engine2/pvs.cpp:915
// variable: 1
// function calls: 3
void CPVS::IsInPVS(const Vector& vPosition, const CPVSBits* pPVS)
{
	int nCluster; // 917
	BitVec_IsBitSet(const uint32* pBase,
			int nBitNum);  // 36
	{
	}
	CPVSBits::IsClusterInPVS(
			int nCluster);  // 27
	CPVSBits::IsClusterInPVS(
			int nCluster);  // 920
} /* size: 0, variables: 1, inline expansions: 3 (97 bytes) */

// <003CA455> engine2/pvs.cpp:923
// variables: 4
// function calls: 3
void CPVS::IsAbsBoxInPVS(const Vector& mins, const Vector& maxs, const CPVSBits* pPVS)
{
	uint32 nClusterList; // 925
	int nClusterCount; // 926
	{
		int i; // 930
		{
			int cluster; // 932
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 36
			{
			}
			CPVSBits::IsClusterInPVS(
					int nCluster);  // 27
			CPVSBits::IsClusterInPVS(
					int nCluster);  // 933
		}
	}
} /* size: 0, variables: 2 */

// <003DC8D3> engine2/pvs.cpp:939
// function calls: 3
void CPVS::ResetPVS(CPVSBits* pPVS)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 941
	CUtlVectorBase<CVisCluster, CUtlMemory<CVisCluster, int> >::Count(); // 942
} /* size: 35, inline expansions: 3 (32 bytes) */

// <003CA42F> engine2/pvs.cpp:939
void CPVS::ResetPVS(CPVSBits* pPVS)
{
} /* size: 0 */

// <003CA2B6> engine2/pvs.cpp:945
// variable: 1
// function calls: 3
void CPVS::AddOriginToPVS(const Vector& origin, CPVSBits* pPVS)
{
	CPVSBits orgPVS; // 950
	CPVSBits::CPVSBits(); // 950
	BitVec_Or<false>(uint32* pDest,
			const uint32* pOperand1,
			const uint32* pOperand2,
			int numDWords);  // 952
	Max<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 953
} /* size: 209, variables: 1, inline expansions: 3 (89 bytes) */

// <003DC9BD> engine2/pvs.cpp:956
// variable: 1
// function calls: 10
void CPVS::GetVisForCluster(int nCluster, CPVSBits* pPVS)
{
	CVoxelVisibility::ClusterCount(); // 960
	CVoxelVisibility::IsValidCluster(
			int nClusterIndex);  // 961
	{
		const uint32* pVisData; // 963
		CVoxelVisibility::GetVisBits(
				int nPVSIndex);  // 425
		CPVS::GetVisBits(
				int nClusterIndex);  // 963
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 79
		V_memcpy(void* dest,
			const void* src,
			uint count);  // 964
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 41
	CPVSBits::SetEmpty(); // 973
	CPVS::GetVisForCluster(
			int nCluster,
			CPVSBits* pPVS);  // 956
} /* size: 74, inline expansions: 6 (91 bytes) */

// <003CA274> engine2/pvs.cpp:956
// variable: 1
void CPVS::GetVisForCluster(int nCluster, CPVSBits* pPVS)
{
	{
		const uint32* pVisData; // 963
	}
} /* size: 0 */

// <003CA17D> engine2/pvs.cpp:977
// function calls: 3
void CPVS::GetCluster(int nCluster)
{
	CUtlVectorBase<CVisCluster, CUtlMemory<CVisCluster, int> >::IsValidIndex(
			int i);  // 979
	CUtlMemory<CVisCluster, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CVisCluster, CUtlMemory<CVisCluster, int> >::operator[](
			int i);  // 980
} /* size: 0, inline expansions: 3 (0 bytes) */

// <003C9F7C> engine2/pvs.cpp:987
// variable: 1
// function calls: 7
void VisEnableCallback(IConVar* pVar, const char* pOldValue, float flOldValue)
{
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 989
	{
		int i; // 493
		CUtlVectorBase<CPVS::Count(); // 493
		CUtlMemory<CPVS::operator[](
				int i);  // 588
		CUtlVectorBase<CPVS::operator[](
				int i);  // 495
	}
	CEnginePVSManager::Enable(
		bool bEnable);  // 989
	CEnginePVSManager::IsEnabled(); // 990
} /* size: 164, inline expansions: 4 (74 bytes) */

