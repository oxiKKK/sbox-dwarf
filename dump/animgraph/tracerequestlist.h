
//
// animgraph/tracerequestlist.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <00DA3A25> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tracerequestlist.h:15
// member functions: 12
// member variable: 1
// class size: 8
class CTraceRequestList {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tracerequestlist.h:18 */
	void CTraceRequestList(CTraceRequestList* , CSaveablePackedData& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tracerequestlist.h:20 */
	int Count(const CTraceRequestList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tracerequestlist.h:22 */
	CTraceRequest& GetRequest(CTraceRequestList* , TraceRequestID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tracerequestlist.h:23 */
	CTraceRequest& GetRequest(CTraceRequestList* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tracerequestlist.h:25 */
	const CTraceRequest& GetRequest(const CTraceRequestList* , TraceRequestID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tracerequestlist.h:26 */
	const CTraceRequest& GetRequest(const CTraceRequestList* , int);
private:
	CRelativeArray<CTraceRequest> m_requests; /* 0 8 */
	void CTraceRequestList(class CTraceRequestList *, CSaveablePackedData &, int); /* linkage=_ZN17CTraceRequestListC4ER12CPackedDataTILb1EEi */
	int Count(const class CTraceRequestList  *); /* linkage=_ZNK17CTraceRequestList5CountEv */
	class CTraceRequest & GetRequest(class CTraceRequestList *, class TraceRequestID); /* linkage=_ZN17CTraceRequestList10GetRequestE14TraceRequestID */
	class CTraceRequest & GetRequest(class CTraceRequestList *, int); /* linkage=_ZN17CTraceRequestList10GetRequestEi */
	const class CTraceRequest  & GetRequest(const class CTraceRequestList  *, class TraceRequestID); /* linkage=_ZNK17CTraceRequestList10GetRequestE14TraceRequestID */
	const class CTraceRequest  & GetRequest(const class CTraceRequestList  *, int); /* linkage=_ZNK17CTraceRequestList10GetRequestEi */
};

// <01565BBB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tracerequestlist.h:18
void CTraceRequestList::CTraceRequestList(CSaveablePackedData& packedData, int nRequestCount)
{
} /* size: 0 */

