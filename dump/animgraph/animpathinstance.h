
//
// animgraph/animpathinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//

// <00F95AF4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathinstance.h:15
void CAnimPathInstance::~CAnimPathInstance()
{
} /* size: 0 */

// <00F95AD8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathinstance.h:15
inline void CAnimPathInstance::~CAnimPathInstance()
{
} /* size: 0 */

// <0156475C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathinstance.h:15
// member functions: 25
// member variables: 3
// vtable entries: 9
// class size: 24
class CAnimPathInstance : public IAnimPath {
public:
	/* class IAnimPath <ancestor>; */ /* 0 8 */
	void CAnimPathInstance(CAnimPathInstance* , CAnimPathInstance& );
	void CAnimPathInstance(CAnimPathInstance* , const CAnimPathInstance& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathinstance.cpp:13 */
	void CAnimPathInstance(CAnimPathInstance* , const CAnimMovementUpdater* , const CAnimGraphUpdateContextPtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathinstance.cpp:22 */
	virtual bool IsEmpty(const CAnimPathInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathinstance.cpp:29 */
	virtual int GetWayPointCount(const CAnimPathInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathinstance.cpp:36 */
	virtual const Vector& GetWayPointPosition(const CAnimPathInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathinstance.cpp:43 */
	virtual const float GetWayPointBoundaryRadius(const CAnimPathInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathinstance.cpp:50 */
	virtual int GetPastWayPointCount(const CAnimPathInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathinstance.cpp:57 */
	virtual const Vector& GetPastWayPointPosition(const CAnimPathInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathinstance.cpp:64 */
	virtual const float GetPastWayPointBoundaryRadius(const CAnimPathInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathinstance.cpp:71 */
	virtual void ClearWayPoints(CAnimPathInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathinstance.cpp:78 */
	virtual void SetWayPoints(CAnimPathInstance* , const CUtlVector<CAnimPathWaypointData, CUtlMemory<CAnimPathWaypointData, int> >& );
private:
	const class CAnimMovementUpdater * m_pMoveUpdater; /* 8 8 */
	CAnimGraphUpdateContextPtr m_pContext; /* 16 8 */
	virtual void SetWayPoints(class CAnimPathInstance *, const class CUtlVector<CAnimPathWaypointData, CUtlMemory<CAnimPathWaypointData, int> >  &); /* linkage=_ZN17CAnimPathInstance12SetWayPointsERK10CUtlVectorI21CAnimPathWaypointData10CUtlMemoryIS1_iEE */
	virtual void ClearWayPoints(class CAnimPathInstance *); /* linkage=_ZN17CAnimPathInstance14ClearWayPointsEv */
	virtual const float  GetPastWayPointBoundaryRadius(const class CAnimPathInstance  *, int); /* linkage=_ZNK17CAnimPathInstance29GetPastWayPointBoundaryRadiusEi */
	virtual const class Vector  & GetPastWayPointPosition(const class CAnimPathInstance  *, int); /* linkage=_ZNK17CAnimPathInstance23GetPastWayPointPositionEi */
	virtual int GetPastWayPointCount(const class CAnimPathInstance  *); /* linkage=_ZNK17CAnimPathInstance20GetPastWayPointCountEv */
	virtual const float  GetWayPointBoundaryRadius(const class CAnimPathInstance  *, int); /* linkage=_ZNK17CAnimPathInstance25GetWayPointBoundaryRadiusEi */
	virtual const class Vector  & GetWayPointPosition(const class CAnimPathInstance  *, int); /* linkage=_ZNK17CAnimPathInstance19GetWayPointPositionEi */
	virtual int GetWayPointCount(const class CAnimPathInstance  *); /* linkage=_ZNK17CAnimPathInstance16GetWayPointCountEv */
	virtual bool IsEmpty(const class CAnimPathInstance  *); /* linkage=_ZNK17CAnimPathInstance7IsEmptyEv */
	void CAnimPathInstance(class CAnimPathInstance *, const class CAnimMovementUpdater  *, const CAnimGraphUpdateContextPtr  &); /* linkage=_ZN17CAnimPathInstanceC4EPK20CAnimMovementUpdaterRK9CSmartPtrI23CAnimGraphUpdateContext17CRefCountAccessorE */
	void ~CAnimPathInstance(class CAnimPathInstance *); /* linkage=_ZN17CAnimPathInstanceD4Ev */
	void CAnimPathInstance(class CAnimPathInstance *, class CAnimPathInstance &); /* linkage=_ZN17CAnimPathInstanceC4EOS_ */
	void CAnimPathInstance(class CAnimPathInstance *, const class CAnimPathInstance  &); /* linkage=_ZN17CAnimPathInstanceC4ERKS_ */
};

// <00F34C94> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathinstance.h:18
void CAnimPathInstance::CAnimPathInstance(const CAnimMovementUpdater* pMoveUpdater, const CAnimGraphUpdateContextPtr& pContext)
{
} /* size: 0 */

