
//
// animgraph/animpathdata.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	classes: 2
//

// <00DAE2FF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:13
// member functions: 8
// member variable: 1
// class size: 256
class CWaypointBuffer : public CFixedSizeCircularBuffer<CAnimPathWaypointData, 15> {
public:
	/* class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15> <ancestor>; */ /* 0 256 */
	void ~CWaypointBuffer(CWaypointBuffer* );
	void CWaypointBuffer(CWaypointBuffer* , CWaypointBuffer& );
	void CWaypointBuffer(CWaypointBuffer* , const CWaypointBuffer& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:16 */
	void CWaypointBuffer(CWaypointBuffer* );
	void ~CWaypointBuffer(class CWaypointBuffer *); /* linkage=_ZN15CWaypointBufferD4Ev */
	void CWaypointBuffer(class CWaypointBuffer *, class CWaypointBuffer &); /* linkage=_ZN15CWaypointBufferC4EOS_ */
	void CWaypointBuffer(class CWaypointBuffer *, const class CWaypointBuffer  &); /* linkage=_ZN15CWaypointBufferC4ERKS_ */
	void CWaypointBuffer(class CWaypointBuffer *); /* linkage=_ZN15CWaypointBufferC4Ev */
};

// <015CD5AD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:16
void CWaypointBuffer::CWaypointBuffer()
{
} /* size: 0 */

// <015CD594> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:16
inline void CWaypointBuffer::CWaypointBuffer()
{
} /* size: 0 */

// <00DADE8E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:25
// member functions: 50
// member variables: 2
// class size: 512
class CAnimPath {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:62 */
	enum PathWalkOption {
		PathWalkOption_Default = 0,
		PathWalkOption_FlattenPath = 1,
	};
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:28 */
	void CAnimPath(CAnimPath* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:30 */
	bool IsEmpty(const CAnimPath* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:32 */
	int GetWayPointCount(const CAnimPath* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:33 */
	const Vector& GetWayPointPosition(const CAnimPath* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:34 */
	const float GetWayPointBoundaryRadius(const CAnimPath* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:35 */
	const Vector& GetGoalPosition(const CAnimPath* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:37 */
	int GetPastWayPointCount(const CAnimPath* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:38 */
	const Vector& GetPastWayPointPosition(const CAnimPath* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:39 */
	const float GetPastWayPointBoundaryRadius(const CAnimPath* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:41 */
	void SetWayPoints(CAnimPath* , const CUtlVector<CAnimPathWaypointData, CUtlMemory<CAnimPathWaypointData, int> >& , const Vector& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:42 */
	void SetWayPoints(CAnimPath* , const CAnimPathWaypointData* , int, const Vector& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:43 */
	void Clear(CAnimPath* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:46 */
	void ClearFutureWayPoints(CAnimPath* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:48 */
	const Vector& operator[](const CAnimPath* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:51 */
	Vector CalcPointAlongPath(const CAnimPath* , const Vector& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:54 */
	CMotionTransform CalcTransformAlongPath(const CAnimPath* , const CMotionTransform& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:55 */
	CMotionTransform CalcTransformAlongFlattenedPath(const CAnimPath* , const CMotionTransform& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:59 */
	int CalcStartingWayPointIndex(const CAnimPath* , const Vector& );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:71 */
	Vector GetClosestWaypointToIndex(const CAnimPath* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:73 */
	Vector CalcPointAlongPathInternal(const CAnimPath* , const Vector& , float, PathWalkOption);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:74 */
	CMotionTransform CalcTransformAlongPathInternal(const CAnimPath* , const CMotionTransform& , float, PathWalkOption);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:75 */
	int CalcStartingWayPointIndexInternal(const CAnimPath* , const Vector& , PathWalkOption);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:79 */
	Vector WalkPathFromPoint(const CAnimPath* , const Vector& , int, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:83 */
	bool IsValidIndex(const CAnimPath* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:87 */
	Vector GetWaypointAtIndex(const CAnimPath* , int);
	CWaypointBuffer m_wayPoints; /* 0 256 */
	CWaypointBuffer m_oldWayPoints; /* 256 256 */
	void CAnimPath(class CAnimPath *); /* linkage=_ZN9CAnimPathC4Ev */
	/* <15d4b53> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:36 */
	bool IsEmpty(const class CAnimPath  *); /* linkage=_ZNK9CAnimPath7IsEmptyEv */
	/* <15d4bac> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:42 */
	int GetWayPointCount(const class CAnimPath  *); /* linkage=_ZNK9CAnimPath16GetWayPointCountEv */
	/* <15d4c05> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:48 */
	const class Vector  & GetWayPointPosition(const class CAnimPath  *, int); /* linkage=_ZNK9CAnimPath19GetWayPointPositionEi */
	/* <15d4d1f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:59 */
	const float  GetWayPointBoundaryRadius(const class CAnimPath  *, int); /* linkage=_ZNK9CAnimPath25GetWayPointBoundaryRadiusEi */
	const class Vector  & GetGoalPosition(const class CAnimPath  *); /* linkage=_ZNK9CAnimPath15GetGoalPositionEv */
	/* <15d4e8f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:77 */
	int GetPastWayPointCount(const class CAnimPath  *); /* linkage=_ZNK9CAnimPath20GetPastWayPointCountEv */
	/* <15d4ee8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:83 */
	const class Vector  & GetPastWayPointPosition(const class CAnimPath  *, int); /* linkage=_ZNK9CAnimPath23GetPastWayPointPositionEi */
	const float  GetPastWayPointBoundaryRadius(const class CAnimPath  *, int); /* linkage=_ZNK9CAnimPath29GetPastWayPointBoundaryRadiusEi */
	/* <15d4fb1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:95 */
	void SetWayPoints(class CAnimPath *, const class CUtlVector<CAnimPathWaypointData, CUtlMemory<CAnimPathWaypointData, int> >  &, const class Vector  &, float); /* linkage=_ZN9CAnimPath12SetWayPointsERK10CUtlVectorI21CAnimPathWaypointData10CUtlMemoryIS1_iEERK6Vectorf */
	/* <15d51b5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:101 */
	void SetWayPoints(class CAnimPath *, const class CAnimPathWaypointData  *, int, const class Vector  &, float); /* linkage=_ZN9CAnimPath12SetWayPointsEPK21CAnimPathWaypointDataiRK6Vectorf */
	/* <15d52e4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:181 */
	void Clear(class CAnimPath *); /* linkage=_ZN9CAnimPath5ClearEv */
	void ClearFutureWayPoints(class CAnimPath *); /* linkage=_ZN9CAnimPath20ClearFutureWayPointsEv */
	/* <15d5371> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:194 */
	const class Vector  & operator[](const class CAnimPath  *, int); /* linkage=_ZNK9CAnimPathixEi */
	class Vector CalcPointAlongPath(const class CAnimPath  *, const class Vector  &, float); /* linkage=_ZNK9CAnimPath18CalcPointAlongPathERK6Vectorf */
	class CMotionTransform CalcTransformAlongPath(const class CAnimPath  *, const class CMotionTransform  &, float); /* linkage=_ZNK9CAnimPath22CalcTransformAlongPathERK16CMotionTransformf */
	class CMotionTransform CalcTransformAlongFlattenedPath(const class CAnimPath  *, const class CMotionTransform  &, float); /* linkage=_ZNK9CAnimPath31CalcTransformAlongFlattenedPathERK16CMotionTransformf */
	int CalcStartingWayPointIndex(const class CAnimPath  *, const class Vector  &); /* linkage=_ZNK9CAnimPath25CalcStartingWayPointIndexERK6Vector */
	class Vector GetClosestWaypointToIndex(const class CAnimPath  *, int); /* linkage=_ZNK9CAnimPath25GetClosestWaypointToIndexEi */
	/* <15d5832> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:223 */
	class Vector CalcPointAlongPathInternal(const class CAnimPath  *, const class Vector  &, float, enum PathWalkOption); /* linkage=_ZNK9CAnimPath26CalcPointAlongPathInternalERK6VectorfNS_14PathWalkOptionE */
	class CMotionTransform CalcTransformAlongPathInternal(const class CAnimPath  *, const class CMotionTransform  &, float, enum PathWalkOption); /* linkage=_ZNK9CAnimPath30CalcTransformAlongPathInternalERK16CMotionTransformfNS_14PathWalkOptionE */
	int CalcStartingWayPointIndexInternal(const class CAnimPath  *, const class Vector  &, enum PathWalkOption); /* linkage=_ZNK9CAnimPath33CalcStartingWayPointIndexInternalERK6VectorNS_14PathWalkOptionE */
	class Vector WalkPathFromPoint(const class CAnimPath  *, const class Vector  &, int, float); /* linkage=_ZNK9CAnimPath17WalkPathFromPointERK6Vectorif */
	/* <15d54bc> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:464 */
	bool IsValidIndex(const class CAnimPath  *, int); /* linkage=_ZNK9CAnimPath12IsValidIndexEi */
	/* <15d55b8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.cpp:477 */
	class Vector GetWaypointAtIndex(const class CAnimPath  *, int); /* linkage=_ZNK9CAnimPath18GetWaypointAtIndexEi */
};

// <015CD57D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:28
void CAnimPath::CAnimPath()
{
} /* size: 0 */

// <015CD564> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animpathdata.h:28
inline void CAnimPath::CAnimPath()
{
} /* size: 0 */

