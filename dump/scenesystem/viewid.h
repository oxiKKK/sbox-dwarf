
//
// scenesystem/viewid.h
//
//	referenced by: libengine2.so
//
//	functions: 3
//	class: 1
//

// <02DD5F0E> ../scenesystem/viewid.h:21
// member functions: 14
// member variable: 1
// class size: 8
class CViewIdInternal {
	/* ../scenesystem/viewid.h:24 */
	void CViewIdInternal(CViewIdInternal* );
	/* ../scenesystem/viewid.h:25 */
	void CViewIdInternal(CViewIdInternal* , const CViewIdInternal& );
	/* ../scenesystem/viewid.h:26 */
	void CViewIdInternal(CViewIdInternal* , const CViewId& );
	/* ../scenesystem/viewid.h:27 */
	CViewIdInternal AppendViewProducer(CViewIdInternal* , uint);
	/* ../scenesystem/viewid.h:28 */
	uint64 GetViewIdHash(const CViewIdInternal* );
	/* ../scenesystem/viewid.h:29 */
	CViewId GetViewIdStruct(const CViewIdInternal* );
private:
	/* ../scenesystem/viewid.h:32 */
	void AppendInt(CViewIdInternal* , uint);
	CRC64_t m_nHash; /* 0 8 */
	void CViewIdInternal(class CViewIdInternal *); /* linkage=_ZN15CViewIdInternalC4Ev */
	void CViewIdInternal(class CViewIdInternal *, const class CViewIdInternal  &); /* linkage=_ZN15CViewIdInternalC4ERKS_ */
	void CViewIdInternal(class CViewIdInternal *, const class CViewId  &); /* linkage=_ZN15CViewIdInternalC4ERK7CViewId */
	/* <389ba5d> ../scenesystem/viewid.cpp:101 */
	class CViewIdInternal AppendViewProducer(class CViewIdInternal *, uint); /* linkage=_ZN15CViewIdInternal18AppendViewProducerEj */
	/* <389bb3d> ../scenesystem/viewid.cpp:108 */
	uint64 GetViewIdHash(const class CViewIdInternal  *); /* linkage=_ZNK15CViewIdInternal13GetViewIdHashEv */
	class CViewId GetViewIdStruct(const class CViewIdInternal  *); /* linkage=_ZNK15CViewIdInternal15GetViewIdStructEv */
	/* <389bb98> ../scenesystem/viewid.cpp:123 */
	void AppendInt(class CViewIdInternal *, uint); /* linkage=_ZN15CViewIdInternal9AppendIntEj */
};

// <0321C547> ../scenesystem/viewid.h:24
void CViewIdInternal::CViewIdInternal()
{
} /* size: 0 */

// <0321C167> ../scenesystem/viewid.h:25
void CViewIdInternal::CViewIdInternal(const CViewIdInternal& other)
{
} /* size: 0 */

// <02E0ECE6> ../scenesystem/viewid.h:26
void CViewIdInternal::CViewIdInternal(const CViewId& viewId)
{
} /* size: 0 */

