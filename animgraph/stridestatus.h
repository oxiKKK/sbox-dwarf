
//
// animgraph/stridestatus.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <00FFBD1C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stridestatus.h:14
// member functions: 14
// member variables: 2
// class size: 1,316
class CStrideStatus {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stridestatus.h:17 */
	void CStrideStatus(CStrideStatus* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stridestatus.h:18 */
	void CStrideStatus(CStrideStatus* , const CStrideStatus& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stridestatus.h:20 */
	CStrideStatus& operator=(CStrideStatus* , const CStrideStatus& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stridestatus.h:22 */
	int Count(const CStrideStatus* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stridestatus.h:24 */
	CFootMotionStatus& operator[](CStrideStatus* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stridestatus.h:25 */
	const CFootMotionStatus& operator[](const CStrideStatus* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stridestatus.h:27 */
	void Clear(CStrideStatus* );
private:
	CFootMotionStatus m_footMotionStatus[8]; /* 0 1312 */
	int m_nFootCount; /* 1312 4 */
	void CStrideStatus(class CStrideStatus *, int); /* linkage=_ZN13CStrideStatusC4Ei */
	void CStrideStatus(class CStrideStatus *, const class CStrideStatus  &); /* linkage=_ZN13CStrideStatusC4ERKS_ */
	class CStrideStatus & operator=(class CStrideStatus *, const class CStrideStatus  &); /* linkage=_ZN13CStrideStatusaSERKS_ */
	int Count(const class CStrideStatus  *); /* linkage=_ZNK13CStrideStatus5CountEv */
	class CFootMotionStatus & operator[](class CStrideStatus *, int); /* linkage=_ZN13CStrideStatusixEi */
	const class CFootMotionStatus  & operator[](const class CStrideStatus  *, int); /* linkage=_ZNK13CStrideStatusixEi */
	void Clear(class CStrideStatus *); /* linkage=_ZN13CStrideStatus5ClearEv */
};

// <01914671> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stridestatus.h:17
void CStrideStatus::CStrideStatus(int nFootCount)
{
} /* size: 0 */

