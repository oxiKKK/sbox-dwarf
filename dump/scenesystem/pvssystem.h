
//
// scenesystem/pvssystem.h
//
//	referenced by: libengine2.so
//
//	functions: 27
//	class: 1
//

// <02CC5B64> ../scenesystem/pvssystem.h:12
// member functions: 28
// member variable: 1
// vtable entries: 24
// class size: 8
class CDefaultPVS : public IPVS {
public:
	/* class IPVS <ancestor>; */ /* 0 8 */
	void ~CDefaultPVS(CDefaultPVS* );
	void CDefaultPVS(CDefaultPVS* , CDefaultPVS& );
	void CDefaultPVS(CDefaultPVS* , const CDefaultPVS& );
	void CDefaultPVS(CDefaultPVS* );
	/* ../scenesystem/pvssystem.h:16 */
	virtual int GetClustersForOrigin(CDefaultPVS* , uint32* , int, const Vector& );
	/* ../scenesystem/pvssystem.h:21 */
	virtual int GetClustersForBounds(CDefaultPVS* , uint32* , int, const Vector& , const Vector& , bool);
	/* ../scenesystem/pvssystem.h:26 */
	virtual int GetClustersForOrientedBounds(CDefaultPVS* , uint32* , int, const OBB_t& , bool);
	/* ../scenesystem/pvssystem.h:31 */
	virtual int FilterClustersInRadius(CDefaultPVS* , uint32* , int, const Vector& , float);
	/* ../scenesystem/pvssystem.h:36 */
	virtual int GetVisibleEverywhereClusterList(CDefaultPVS* , uint32* , int);
	/* ../scenesystem/pvssystem.h:41 */
	virtual int GetClustersForFrustum(CDefaultPVS* , uint32* , int, const CFrustum* , bool);
	/* ../scenesystem/pvssystem.h:46 */
	virtual bool GetClusterBounds(CDefaultPVS* , int, Vector* , Vector* );
	/* ../scenesystem/pvssystem.h:54 */
	virtual int GetClusterCount(CDefaultPVS* );
	/* ../scenesystem/pvssystem.h:59 */
	virtual int GetAllClusterBounds(CDefaultPVS* , AABB_t* , int);
	/* ../scenesystem/pvssystem.h:64 */
	virtual int GetClusterForPosition(const CDefaultPVS* , const Vector& );
	/* ../scenesystem/pvssystem.h:69 */
	virtual bool IsInPVS(CDefaultPVS* , const Vector& , const CPVSBits* );
	/* ../scenesystem/pvssystem.h:74 */
	virtual bool IsInPVS(CDefaultPVS* , int, const Vector* , const Vector& );
	/* ../scenesystem/pvssystem.h:79 */
	virtual bool IsAbsBoxInPVS(CDefaultPVS* , int, const Vector* , const Vector& , const Vector& );
	/* ../scenesystem/pvssystem.h:84 */
	virtual bool IsAbsBoxInPVS(CDefaultPVS* , const Vector& , const Vector& , const CPVSBits* );
	/* ../scenesystem/pvssystem.h:89 */
	virtual bool IsEmptyPVS(const CDefaultPVS* );
	/* ../scenesystem/pvssystem.h:90 */
	virtual bool IsSkyVisibleFromPosition(const CDefaultPVS* , const Vector& );
	/* ../scenesystem/pvssystem.h:91 */
	virtual bool IsSunVisibleFromPosition(const CDefaultPVS* , const Vector& );
	/* ../scenesystem/pvssystem.h:93 */
	virtual bool IsSunVisibleInPVS(const CDefaultPVS* , const CPVSBits& );
	/* ../scenesystem/pvssystem.h:95 */
	virtual void ResetPVS(const CDefaultPVS* , CPVSBits* );
	/* ../scenesystem/pvssystem.h:99 */
	virtual void AddOriginToPVS(const CDefaultPVS* , const Vector& , CPVSBits* );
	/* ../scenesystem/pvssystem.h:103 */
	virtual void GetPrecisePVS(const CDefaultPVS* , CPVSBits* , const Vector& );
	/* ../scenesystem/pvssystem.h:108 */
	virtual void GetVisForCluster(const CDefaultPVS* , int, CPVSBits* );
	/* ../scenesystem/pvssystem.h:113 */
	virtual void GetSunlightPVS(const CDefaultPVS* , CPVSBits* );
	/* ../scenesystem/pvssystem.h:118 */
	virtual void GetOrthoPVS(const CDefaultPVS* , CPVSBits* );
};

// <02CCAD6D> ../scenesystem/pvssystem.h:16
void CDefaultPVS::GetClustersForOrigin(uint32* pList, int nListMax, const Vector& vOrigin)
{
} /* size: 7 */

// <02CD1340> ../scenesystem/pvssystem.h:21
void CDefaultPVS::GetClustersForBounds(uint32* pList, int nListMax, const Vector& vMins, const Vector& vMaxs, bool bIsStatic)
{
} /* size: 7 */

// <02CCAD18> ../scenesystem/pvssystem.h:21
inline void CDefaultPVS::GetClustersForBounds(uint32* pList, int nListMax, const Vector& vMins, const Vector& vMaxs, bool bIsStatic)
{
} /* size: 0 */

// <02CCACB1> ../scenesystem/pvssystem.h:26
void CDefaultPVS::GetClustersForOrientedBounds(uint32* pList, int nListMax, const OBB_t& obb, bool bIsStatic)
{
} /* size: 7 */

// <02CCAC4B> ../scenesystem/pvssystem.h:31
void CDefaultPVS::FilterClustersInRadius(uint32* pList, int nListIn, const Vector& vCenter, float fRadius)
{
} /* size: 7 */

// <02CD138D> ../scenesystem/pvssystem.h:36
void CDefaultPVS::GetVisibleEverywhereClusterList(uint32* pList, int nListMax)
{
} /* size: 7 */

// <02CCAC1A> ../scenesystem/pvssystem.h:36
inline void CDefaultPVS::GetVisibleEverywhereClusterList(uint32* pList, int nListMax)
{
} /* size: 0 */

// <02CD13C5> ../scenesystem/pvssystem.h:41
void CDefaultPVS::GetClustersForFrustum(uint32* pList, int nListMax, const CFrustum* pFrustum, bool bIsStatic)
{
} /* size: 7 */

// <02CCABD1> ../scenesystem/pvssystem.h:41
inline void CDefaultPVS::GetClustersForFrustum(uint32* pList, int nListMax, const CFrustum* pFrustum, bool bIsStatic)
{
} /* size: 0 */

// <02CCAB18> ../scenesystem/pvssystem.h:46
// function calls: 2
void CDefaultPVS::GetClusterBounds(int nCluster, Vector* pMins, Vector* pMaxs)
{
	Vector::operator=(
			const Vector& vOther);  // 48
	Vector::operator=(
			const Vector& vOther);  // 49
} /* size: 69, inline expansions: 2 (59 bytes) */

// <02CCAAEA> ../scenesystem/pvssystem.h:54
void CDefaultPVS::GetClusterCount()
{
} /* size: 7 */

// <02CCAAA0> ../scenesystem/pvssystem.h:59
void CDefaultPVS::GetAllClusterBounds(AABB_t* pBBoxList, int maxBBox)
{
} /* size: 7 */

// <02CCAA64> ../scenesystem/pvssystem.h:64
void CDefaultPVS::GetClusterForPosition(const Vector& vPosition)
{
} /* size: 7 */

// <02CCAA1A> ../scenesystem/pvssystem.h:69
void CDefaultPVS::IsInPVS(const Vector& vPosition, const CPVSBits* pPVS)
{
} /* size: 10 */

// <02CCA9C2> ../scenesystem/pvssystem.h:74
void CDefaultPVS::IsInPVS(int nNumSources, const Vector* pvSources, const Vector& vPosition)
{
} /* size: 10 */

// <02CCA95C> ../scenesystem/pvssystem.h:79
void CDefaultPVS::IsAbsBoxInPVS(int nNumSources, const Vector* pvSources, const Vector& mins, const Vector& maxs)
{
} /* size: 10 */

// <02CCA904> ../scenesystem/pvssystem.h:84
void CDefaultPVS::IsAbsBoxInPVS(const Vector& mins, const Vector& maxs, const CPVSBits* pPVS)
{
} /* size: 10 */

// <02CCA8D6> ../scenesystem/pvssystem.h:89
void CDefaultPVS::IsEmptyPVS()
{
} /* size: 10 */

// <02CCA89A> ../scenesystem/pvssystem.h:90
void CDefaultPVS::IsSkyVisibleFromPosition(const Vector& vPosition)
{
} /* size: 10 */

// <02CCA85E> ../scenesystem/pvssystem.h:91
void CDefaultPVS::IsSunVisibleFromPosition(const Vector& vPosition)
{
} /* size: 10 */

// <02CCA822> ../scenesystem/pvssystem.h:93
void CDefaultPVS::IsSunVisibleInPVS(const CPVSBits& pvsData)
{
} /* size: 10 */

// <02CCA7E6> ../scenesystem/pvssystem.h:95
void CDefaultPVS::ResetPVS(CPVSBits* pPVS)
{
} /* size: 5 */

// <02CCA79C> ../scenesystem/pvssystem.h:99
void CDefaultPVS::AddOriginToPVS(const Vector& origin, CPVSBits* pPVS)
{
} /* size: 5 */

// <02CCA6A3> ../scenesystem/pvssystem.h:103
// function calls: 3
void CDefaultPVS::GetPrecisePVS(CPVSBits* pOutPVS, const Vector& vPosition)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 41
	CPVSBits::SetEmpty(); // 105
} /* size: 30, inline expansions: 3 (63 bytes) */

// <02CCA5AA> ../scenesystem/pvssystem.h:108
// function calls: 3
void CDefaultPVS::GetVisForCluster(int cluster, CPVSBits* pOutPVS)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 41
	CPVSBits::SetEmpty(); // 110
} /* size: 30, inline expansions: 3 (63 bytes) */

// <02CCA4BF> ../scenesystem/pvssystem.h:113
// function calls: 3
void CDefaultPVS::GetSunlightPVS(CPVSBits* pOutPVS)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 41
	CPVSBits::SetEmpty(); // 115
} /* size: 30, inline expansions: 3 (63 bytes) */

// <02CCA3D4> ../scenesystem/pvssystem.h:118
// function calls: 3
void CDefaultPVS::GetOrthoPVS(CPVSBits* pOutPVS)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 41
	CPVSBits::SetEmpty(); // 120
} /* size: 30, inline expansions: 3 (63 bytes) */

