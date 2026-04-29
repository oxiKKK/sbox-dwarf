
//
// public/animationsystem/ianimpath.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 7
//	classes: 3
//

// <0159B25B> ../public/animationsystem/ianimpath.h:11
inline void CAnimPathWaypointData::operator=(const CAnimPathWaypointData &)
{
} /* size: 0 */

// <00D920A6> ../public/animationsystem/ianimpath.h:11
// member functions: 5
// member variables: 2
// class size: 16
class CAnimPathWaypointData {
	/* ../public/animationsystem/ianimpath.h:14 */
	void CAnimPathWaypointData(CAnimPathWaypointData* );
	/* ../public/animationsystem/ianimpath.h:20 */
	void CAnimPathWaypointData(CAnimPathWaypointData* , const Vector& , float);
	Vector m_vPosition; /* 0 12 */
	float m_flBoundaryRadius; /* 12 4 */
	void CAnimPathWaypointData(class CAnimPathWaypointData *); /* linkage=_ZN21CAnimPathWaypointDataC4Ev */
	void CAnimPathWaypointData(class CAnimPathWaypointData *, const class Vector  &, float); /* linkage=_ZN21CAnimPathWaypointDataC4ERK6Vectorf */
	class CAnimPathWaypointData & operator=(class CAnimPathWaypointData *, const class CAnimPathWaypointData  &); /* linkage=_ZN21CAnimPathWaypointDataaSERKS_ */
};

// <0150DA8E> ../public/animationsystem/ianimpath.h:11
// member functions: 6
// member variables: 2
// class size: 16
class CAnimPathWaypointData {
	/* ../public/animationsystem/ianimpath.h:14 */
	void CAnimPathWaypointData(CAnimPathWaypointData* );
	/* ../public/animationsystem/ianimpath.h:20 */
	void CAnimPathWaypointData(CAnimPathWaypointData* , const Vector& , float);
	Vector m_vPosition; /* 0 12 */
	float m_flBoundaryRadius; /* 12 4 */
	CAnimPathWaypointData& operator=(CAnimPathWaypointData* , const CAnimPathWaypointData& );
	void CAnimPathWaypointData(class CAnimPathWaypointData *); /* linkage=_ZN21CAnimPathWaypointDataC4Ev */
	void CAnimPathWaypointData(class CAnimPathWaypointData *, const class Vector  &, float); /* linkage=_ZN21CAnimPathWaypointDataC4ERK6Vectorf */
	class CAnimPathWaypointData & operator=(class CAnimPathWaypointData *, const class CAnimPathWaypointData  &); /* linkage=_ZN21CAnimPathWaypointDataaSERKS_ */
};

// <016877C3> ../public/animationsystem/ianimpath.h:14
void CAnimPathWaypointData::CAnimPathWaypointData()
{
} /* size: 0 */

// <016877AA> ../public/animationsystem/ianimpath.h:14
inline void CAnimPathWaypointData::CAnimPathWaypointData()
{
} /* size: 0 */

// <015CD99D> ../public/animationsystem/ianimpath.h:20
void CAnimPathWaypointData::CAnimPathWaypointData(const Vector& vPosition, float flBoundaryRadius)
{
} /* size: 0 */

// <015CD96C> ../public/animationsystem/ianimpath.h:20
inline void CAnimPathWaypointData::CAnimPathWaypointData(const Vector& vPosition, float flBoundaryRadius)
{
} /* size: 0 */

// <01597F02> ../public/animationsystem/ianimpath.h:34
void IAnimPath::IAnimPath()
{
} /* size: 0 */

// <01597EE6> ../public/animationsystem/ianimpath.h:34
inline void IAnimPath::IAnimPath()
{
} /* size: 0 */

// <0156498B> ../public/animationsystem/ianimpath.h:34
// member functions: 26
// member variable: 1
// vtable entries: 9
// class size: 8
class IAnimPath {
	void ~IAnimPath(IAnimPath* );
	void IAnimPath(IAnimPath* , IAnimPath& );
	void IAnimPath(IAnimPath* , const IAnimPath& );
	void IAnimPath(IAnimPath* );
	int ()(void) * * _vptr.IAnimPath; /* 0 8 */
	/* ../public/animationsystem/ianimpath.h:37 */
	virtual bool IsEmpty(const IAnimPath* );
	/* ../public/animationsystem/ianimpath.h:38 */
	virtual int GetWayPointCount(const IAnimPath* );
	/* ../public/animationsystem/ianimpath.h:39 */
	virtual const Vector& GetWayPointPosition(const IAnimPath* , int);
	/* ../public/animationsystem/ianimpath.h:40 */
	virtual const float GetWayPointBoundaryRadius(const IAnimPath* , int);
	/* ../public/animationsystem/ianimpath.h:42 */
	virtual int GetPastWayPointCount(const IAnimPath* );
	/* ../public/animationsystem/ianimpath.h:43 */
	virtual const Vector& GetPastWayPointPosition(const IAnimPath* , int);
	/* ../public/animationsystem/ianimpath.h:44 */
	virtual const float GetPastWayPointBoundaryRadius(const IAnimPath* , int);
	/* ../public/animationsystem/ianimpath.h:46 */
	virtual void ClearWayPoints(IAnimPath* );
	/* ../public/animationsystem/ianimpath.h:47 */
	virtual void SetWayPoints(IAnimPath* , const CUtlVector<CAnimPathWaypointData, CUtlMemory<CAnimPathWaypointData, int> >& );
	void ~IAnimPath(class IAnimPath *); /* linkage=_ZN9IAnimPathD4Ev */
	void IAnimPath(class IAnimPath *, class IAnimPath &); /* linkage=_ZN9IAnimPathC4EOS_ */
	void IAnimPath(class IAnimPath *, const class IAnimPath  &); /* linkage=_ZN9IAnimPathC4ERKS_ */
	void IAnimPath(class IAnimPath *); /* linkage=_ZN9IAnimPathC4Ev */
	virtual bool IsEmpty(const class IAnimPath  *); /* linkage=_ZNK9IAnimPath7IsEmptyEv */
	virtual int GetWayPointCount(const class IAnimPath  *); /* linkage=_ZNK9IAnimPath16GetWayPointCountEv */
	virtual const class Vector  & GetWayPointPosition(const class IAnimPath  *, int); /* linkage=_ZNK9IAnimPath19GetWayPointPositionEi */
	virtual const float  GetWayPointBoundaryRadius(const class IAnimPath  *, int); /* linkage=_ZNK9IAnimPath25GetWayPointBoundaryRadiusEi */
	virtual int GetPastWayPointCount(const class IAnimPath  *); /* linkage=_ZNK9IAnimPath20GetPastWayPointCountEv */
	virtual const class Vector  & GetPastWayPointPosition(const class IAnimPath  *, int); /* linkage=_ZNK9IAnimPath23GetPastWayPointPositionEi */
	virtual const float  GetPastWayPointBoundaryRadius(const class IAnimPath  *, int); /* linkage=_ZNK9IAnimPath29GetPastWayPointBoundaryRadiusEi */
	virtual void ClearWayPoints(class IAnimPath *); /* linkage=_ZN9IAnimPath14ClearWayPointsEv */
	virtual void SetWayPoints(class IAnimPath *, const class CUtlVector<CAnimPathWaypointData, CUtlMemory<CAnimPathWaypointData, int> >  &); /* linkage=_ZN9IAnimPath12SetWayPointsERK10CUtlVectorI21CAnimPathWaypointData10CUtlMemoryIS1_iEE */
};

