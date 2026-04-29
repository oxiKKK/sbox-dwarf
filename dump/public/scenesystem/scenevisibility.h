
//
// public/scenesystem/scenevisibility.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 12
//	classes: 2
//

// <03236C43> ../public/scenesystem/scenevisibility.h:18
void CPVSBits::CPVSBits()
{
} /* size: 0 */

// <03236C27> ../public/scenesystem/scenevisibility.h:18
inline void CPVSBits::CPVSBits()
{
} /* size: 0 */

// <00047886> ../public/scenesystem/scenevisibility.h:18
// member functions: 15
// member variables: 2
// class size: 516
class CPVSBits {
	uint32 m_nClusterCount; /* 0 4 */
	uint32 m_nPVS[128]; /* 4 512 */
	/* ../public/scenesystem/scenevisibility.h:24 */
	void GetPrecisePVS(CPVSBits* , ISceneWorld* , const Vector& );
	/* ../public/scenesystem/scenevisibility.h:25 */
	void GetSunlightPVS(CPVSBits* , ISceneWorld* );
	/* ../public/scenesystem/scenevisibility.h:26 */
	uint ClusterCount(const CPVSBits* );
	/* ../public/scenesystem/scenevisibility.h:27 */
	bool IsClusterInPVS(const CPVSBits* , int);
	/* ../public/scenesystem/scenevisibility.h:38 */
	void SetEmpty(CPVSBits* );
	/* ../public/scenesystem/scenevisibility.h:43 */
	void SetAllVisible(CPVSBits* );
	/* ../public/scenesystem/scenevisibility.h:48 */
	bool IsEmpty(const CPVSBits* );
	void GetPrecisePVS(class CPVSBits *, class ISceneWorld *, const class Vector  &); /* linkage=_ZN8CPVSBits13GetPrecisePVSEP11ISceneWorldRK6Vector */
	void GetSunlightPVS(class CPVSBits *, class ISceneWorld *); /* linkage=_ZN8CPVSBits14GetSunlightPVSEP11ISceneWorld */
	uint ClusterCount(const class CPVSBits  *); /* linkage=_ZNK8CPVSBits12ClusterCountEv */
	bool IsClusterInPVS(const class CPVSBits  *, int); /* linkage=_ZNK8CPVSBits14IsClusterInPVSEi */
	void SetEmpty(class CPVSBits *); /* linkage=_ZN8CPVSBits8SetEmptyEv */
	void SetAllVisible(class CPVSBits *); /* linkage=_ZN8CPVSBits13SetAllVisibleEv */
	bool IsEmpty(const class CPVSBits  *); /* linkage=_ZNK8CPVSBits7IsEmptyEv */
	void CPVSBits(class CPVSBits *); /* linkage=_ZN8CPVSBitsC4Ev */
};

// <003DB1C3> ../public/scenesystem/scenevisibility.h:26
inline void CPVSBits::ClusterCount()
{
} /* size: 0 */

// <003DB174> ../public/scenesystem/scenevisibility.h:27
// variables: 2
inline void CPVSBits::IsClusterInPVS(int nCluster)
{
	const char   __FUNCTION__; // 56007
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 33
	}
} /* size: 0, variables: 1 */

// <02CD078E> ../public/scenesystem/scenevisibility.h:38
inline void CPVSBits::SetEmpty()
{
} /* size: 0 */

// <003DB142> ../public/scenesystem/scenevisibility.h:43
inline void CPVSBits::SetAllVisible()
{
} /* size: 0 */

// <03244F69> ../public/scenesystem/scenevisibility.h:48
inline void CPVSBits::IsEmpty()
{
} /* size: 0 */

// <003D71DB> ../public/scenesystem/scenevisibility.h:51
void IPVS::IPVS()
{
} /* size: 0 */

// <003D71BF> ../public/scenesystem/scenevisibility.h:51
inline void IPVS::IPVS()
{
} /* size: 0 */

// <003C40FB> ../public/scenesystem/scenevisibility.h:51
// member functions: 56
// member variable: 1
// vtable entries: 24
// class size: 8
class IPVS {
	void IPVS(IPVS* , IPVS& );
	void IPVS(IPVS* , const IPVS& );
	void IPVS(IPVS* );
	void ~IPVS(IPVS* );
	int ()(void) * * _vptr.IPVS; /* 0 8 */
	/* ../public/scenesystem/scenevisibility.h:54 */
	virtual int GetClustersForOrigin(IPVS* , uint32* , int, const Vector& );
	/* ../public/scenesystem/scenevisibility.h:55 */
	virtual int GetClustersForBounds(IPVS* , uint32* , int, const Vector& , const Vector& , bool);
	/* ../public/scenesystem/scenevisibility.h:56 */
	virtual int GetClustersForOrientedBounds(IPVS* , uint32* , int, const OBB_t& , bool);
	/* ../public/scenesystem/scenevisibility.h:57 */
	virtual int GetClustersForFrustum(IPVS* , uint32* , int, const CFrustum* , bool);
	/* ../public/scenesystem/scenevisibility.h:58 */
	virtual int GetVisibleEverywhereClusterList(IPVS* , uint32* , int);
	/* ../public/scenesystem/scenevisibility.h:59 */
	virtual int FilterClustersInRadius(IPVS* , uint32* , int, const Vector& , float);
	/* ../public/scenesystem/scenevisibility.h:62 */
	virtual int GetClusterCount(IPVS* );
	/* ../public/scenesystem/scenevisibility.h:63 */
	virtual int GetAllClusterBounds(IPVS* , AABB_t* , int);
	/* ../public/scenesystem/scenevisibility.h:64 */
	virtual int GetClusterForPosition(const IPVS* , const Vector& );
	/* ../public/scenesystem/scenevisibility.h:66 */
	virtual bool IsInPVS(IPVS* , const Vector& , const CPVSBits* );
	/* ../public/scenesystem/scenevisibility.h:67 */
	virtual bool IsInPVS(IPVS* , int, const Vector* , const Vector& );
	/* ../public/scenesystem/scenevisibility.h:68 */
	virtual bool IsAbsBoxInPVS(IPVS* , int, const Vector* , const Vector& , const Vector& );
	/* ../public/scenesystem/scenevisibility.h:69 */
	virtual bool IsAbsBoxInPVS(IPVS* , const Vector& , const Vector& , const CPVSBits* );
	/* ../public/scenesystem/scenevisibility.h:71 */
	virtual bool GetClusterBounds(IPVS* , int, Vector* , Vector* );
	/* ../public/scenesystem/scenevisibility.h:73 */
	virtual bool IsEmptyPVS(const IPVS* );
	/* ../public/scenesystem/scenevisibility.h:74 */
	virtual bool IsSkyVisibleFromPosition(const IPVS* , const Vector& );
	/* ../public/scenesystem/scenevisibility.h:75 */
	virtual bool IsSunVisibleFromPosition(const IPVS* , const Vector& );
	/* ../public/scenesystem/scenevisibility.h:77 */
	virtual void GetVisForCluster(const IPVS* , int, CPVSBits* );
	/* ../public/scenesystem/scenevisibility.h:78 */
	virtual bool IsSunVisibleInPVS(const IPVS* , const CPVSBits& );
	/* ../public/scenesystem/scenevisibility.h:79 */
	virtual void ResetPVS(const IPVS* , CPVSBits* );
	/* ../public/scenesystem/scenevisibility.h:80 */
	virtual void AddOriginToPVS(const IPVS* , const Vector& , CPVSBits* );
	/* ../public/scenesystem/scenevisibility.h:81 */
	virtual void GetPrecisePVS(const IPVS* , CPVSBits* , const Vector& );
	/* ../public/scenesystem/scenevisibility.h:83 */
	virtual void GetSunlightPVS(const IPVS* , CPVSBits* );
	/* ../public/scenesystem/scenevisibility.h:84 */
	virtual void GetOrthoPVS(const IPVS* , CPVSBits* );
	void IPVS(class IPVS *, class IPVS &); /* linkage=_ZN4IPVSC4EOS_ */
	void IPVS(class IPVS *, const class IPVS  &); /* linkage=_ZN4IPVSC4ERKS_ */
	void IPVS(class IPVS *); /* linkage=_ZN4IPVSC4Ev */
	void ~IPVS(class IPVS *); /* linkage=_ZN4IPVSD4Ev */
	virtual int GetClustersForOrigin(class IPVS *, uint32 *, int, const class Vector  &); /* linkage=_ZN4IPVS20GetClustersForOriginEPjiRK6Vector */
	virtual int GetClustersForBounds(class IPVS *, uint32 *, int, const class Vector  &, const class Vector  &, bool); /* linkage=_ZN4IPVS20GetClustersForBoundsEPjiRK6VectorS3_b */
	virtual int GetClustersForOrientedBounds(class IPVS *, uint32 *, int, const class OBB_t  &, bool); /* linkage=_ZN4IPVS28GetClustersForOrientedBoundsEPjiRK5OBB_tb */
	virtual int GetClustersForFrustum(class IPVS *, uint32 *, int, const class CFrustum  *, bool); /* linkage=_ZN4IPVS21GetClustersForFrustumEPjiPK8CFrustumb */
	virtual int GetVisibleEverywhereClusterList(class IPVS *, uint32 *, int); /* linkage=_ZN4IPVS31GetVisibleEverywhereClusterListEPji */
	virtual int FilterClustersInRadius(class IPVS *, uint32 *, int, const class Vector  &, float); /* linkage=_ZN4IPVS22FilterClustersInRadiusEPjiRK6Vectorf */
	virtual int GetClusterCount(class IPVS *); /* linkage=_ZN4IPVS15GetClusterCountEv */
	virtual int GetAllClusterBounds(class IPVS *, class AABB_t *, int); /* linkage=_ZN4IPVS19GetAllClusterBoundsEP6AABB_ti */
	virtual int GetClusterForPosition(const class IPVS  *, const class Vector  &); /* linkage=_ZNK4IPVS21GetClusterForPositionERK6Vector */
	virtual bool IsInPVS(class IPVS *, const class Vector  &, const class CPVSBits  *); /* linkage=_ZN4IPVS7IsInPVSERK6VectorPK8CPVSBits */
	virtual bool IsInPVS(class IPVS *, int, const class Vector  *, const class Vector  &); /* linkage=_ZN4IPVS7IsInPVSEiPK6VectorRS1_ */
	virtual bool IsAbsBoxInPVS(class IPVS *, int, const class Vector  *, const class Vector  &, const class Vector  &); /* linkage=_ZN4IPVS13IsAbsBoxInPVSEiPK6VectorRS1_S3_ */
	virtual bool IsAbsBoxInPVS(class IPVS *, const class Vector  &, const class Vector  &, const class CPVSBits  *); /* linkage=_ZN4IPVS13IsAbsBoxInPVSERK6VectorS2_PK8CPVSBits */
	virtual bool GetClusterBounds(class IPVS *, int, class Vector *, class Vector *); /* linkage=_ZN4IPVS16GetClusterBoundsEiP6VectorS1_ */
	virtual bool IsEmptyPVS(const class IPVS  *); /* linkage=_ZNK4IPVS10IsEmptyPVSEv */
	virtual bool IsSkyVisibleFromPosition(const class IPVS  *, const class Vector  &); /* linkage=_ZNK4IPVS24IsSkyVisibleFromPositionERK6Vector */
	virtual bool IsSunVisibleFromPosition(const class IPVS  *, const class Vector  &); /* linkage=_ZNK4IPVS24IsSunVisibleFromPositionERK6Vector */
	virtual void GetVisForCluster(const class IPVS  *, int, class CPVSBits *); /* linkage=_ZNK4IPVS16GetVisForClusterEiP8CPVSBits */
	virtual bool IsSunVisibleInPVS(const class IPVS  *, const class CPVSBits  &); /* linkage=_ZNK4IPVS17IsSunVisibleInPVSERK8CPVSBits */
	virtual void ResetPVS(const class IPVS  *, class CPVSBits *); /* linkage=_ZNK4IPVS8ResetPVSEP8CPVSBits */
	virtual void AddOriginToPVS(const class IPVS  *, const class Vector  &, class CPVSBits *); /* linkage=_ZNK4IPVS14AddOriginToPVSERK6VectorP8CPVSBits */
	virtual void GetPrecisePVS(const class IPVS  *, class CPVSBits *, const class Vector  &); /* linkage=_ZNK4IPVS13GetPrecisePVSEP8CPVSBitsRK6Vector */
	virtual void GetSunlightPVS(const class IPVS  *, class CPVSBits *); /* linkage=_ZNK4IPVS14GetSunlightPVSEP8CPVSBits */
	virtual void GetOrthoPVS(const class IPVS  *, class CPVSBits *); /* linkage=_ZNK4IPVS11GetOrthoPVSEP8CPVSBits */
};

// <027D9DD8> ../public/scenesystem/scenevisibility.h:87
// variables: 2
inline void CPVSBits::GetPrecisePVS(ISceneWorld* pWorld, const Vector& vPos)
{
	const char   __FUNCTION__; // 33966
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 1 */

// <01DD261C> ../public/scenesystem/scenevisibility.h:87
// function calls: 3
void CPVSBits::GetPrecisePVS(const Vector& vPos, ISceneWorld* pWorld)
{
	{
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 41
	CPVSBits::SetEmpty(); // 96
} /* size: 47, inline expansions: 3 (43 bytes) */

// <01DCE30D> ../public/scenesystem/scenevisibility.h:87
// variables: 2
inline void CPVSBits::GetPrecisePVS(ISceneWorld* pWorld, const Vector& vPos)
{
	const char   __FUNCTION__; // 45082
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 1 */

