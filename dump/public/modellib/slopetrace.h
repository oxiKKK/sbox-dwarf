
//
// public/modellib/slopetrace.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 5
//	class: 1
//

// <04A90679> ../public/modellib/slopetrace.h:10
// member functions: 18
// member variable: 1
// class size: 16
class CSlopeTrace {
	/* ../public/modellib/slopetrace.h:15 */
	void CSlopeTrace(CSlopeTrace* );
	/* ../public/modellib/slopetrace.h:18 */
	void CSlopeTrace(CSlopeTrace* , const CSlopeTrace& );
	/* ../public/modellib/slopetrace.h:23 */
	void CSlopeTrace(CSlopeTrace* , CSlopeTrace& );
	/* ../public/modellib/slopetrace.h:28 */
	CSlopeTrace& operator=(CSlopeTrace* , const CSlopeTrace& );
	/* ../public/modellib/slopetrace.h:29 */
	CSlopeTrace& operator=(CSlopeTrace* , CSlopeTrace& );
	/* ../public/modellib/slopetrace.h:31 */
	VectorAligned GetTraceOffset(const CSlopeTrace* );
	/* ../public/modellib/slopetrace.h:32 */
	void SetTraceOffset(CSlopeTrace* , const VectorAligned& );
	/* ../public/modellib/slopetrace.h:34 */
	void KV3TransferSave(const CSlopeTrace* , CKV3TransferSaveContext* );
	/* ../public/modellib/slopetrace.h:38 */
	void KV3TransferLoad(CSlopeTrace* , CKV3TransferLoadContext* );
private:
	VectorAligned m_vTraceOffset __attribute__((__aligned__(16))); /* 0 16 */
	void CSlopeTrace(class CSlopeTrace *); /* linkage=_ZN11CSlopeTraceC4Ev */
	void CSlopeTrace(class CSlopeTrace *, const class CSlopeTrace  &); /* linkage=_ZN11CSlopeTraceC4ERKS_ */
	void CSlopeTrace(class CSlopeTrace *, class CSlopeTrace &); /* linkage=_ZN11CSlopeTraceC4EOS_ */
	class CSlopeTrace & operator=(class CSlopeTrace *, const class CSlopeTrace  &); /* linkage=_ZN11CSlopeTraceaSERKS_ */
	class CSlopeTrace & operator=(class CSlopeTrace *, class CSlopeTrace &); /* linkage=_ZN11CSlopeTraceaSEOS_ */
	class VectorAligned GetTraceOffset(const class CSlopeTrace  *); /* linkage=_ZNK11CSlopeTrace14GetTraceOffsetEv */
	void SetTraceOffset(class CSlopeTrace *, const class VectorAligned  &); /* linkage=_ZN11CSlopeTrace14SetTraceOffsetERK13VectorAligned */
	void KV3TransferSave(const class CSlopeTrace  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CSlopeTrace15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CSlopeTrace *, class CKV3TransferLoadContext *); /* linkage=_ZN11CSlopeTrace15KV3TransferLoadEP23CKV3TransferLoadContext */
} __attribute__((__aligned__(16)));

// <04ADF3BB> ../public/modellib/slopetrace.h:15
void CSlopeTrace::CSlopeTrace()
{
} /* size: 0 */

// <04ADF3A2> ../public/modellib/slopetrace.h:15
inline void CSlopeTrace::CSlopeTrace()
{
} /* size: 0 */

// <04ADF386> ../public/modellib/slopetrace.h:18
void CSlopeTrace::CSlopeTrace(const CSlopeTrace& rhs)
{
} /* size: 0 */

// <04ADF361> ../public/modellib/slopetrace.h:18
inline void CSlopeTrace::CSlopeTrace(const CSlopeTrace& rhs)
{
} /* size: 0 */

// <04ADF33C> ../public/modellib/slopetrace.h:38
inline void CSlopeTrace::KV3TransferLoad(CKV3TransferLoadContext* pContext)
{
} /* size: 0 */

