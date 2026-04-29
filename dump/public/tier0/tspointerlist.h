
//
// public/tier0/tspointerlist.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//				   libtier0.so
//
//	functions: 16
//	classes: 2
//	struct: 1
//

// <0013DED0> ../public/tier0/tspointerlist.h:15
// member variables: 2
// struct size: 32
struct TSPointerListNode_t : public TSLNodeBase_t {
public:
	/* struct TSLNodeBase_t <ancestor>; */ /* 0 16 */
	void * pData; /* 16 8 */
} __attribute__((__aligned__(16)));

// <001A4F86> ../public/tier0/tspointerlist.h:23
void CTSPointerList<IRenderContext>::CTSPointerList()
{
} /* size: 0 */

// <001A4F6A> ../public/tier0/tspointerlist.h:23
inline void CTSPointerList<IRenderContext>::CTSPointerList()
{
} /* size: 0 */

// <001A4EB7> ../public/tier0/tspointerlist.h:23
void CTSPointerList<void>::CTSPointerList()
{
} /* size: 0 */

// <001A4E9B> ../public/tier0/tspointerlist.h:23
inline void CTSPointerList<void>::CTSPointerList()
{
} /* size: 0 */

// <0015D232> ../public/tier0/tspointerlist.h:23
// member functions: 10
// member variable: 1
// class size: 16
class CTSPointerList<IRenderContext> : public CTSListBase {
public:
	/* class CTSListBase <ancestor>; */ /* 0 16 */
	/* ../public/tier0/tspointerlist.h:26 */
	void ~CTSPointerList(CTSPointerList<IRenderContext>* );
	/* ../public/tier0/tspointerlist.h:31 */
	void Purge(CTSPointerList<IRenderContext>* );
	/* ../public/tier0/tspointerlist.h:50 */
	void PushItem(CTSPointerList<IRenderContext>* , IRenderContext* const& );
	/* ../public/tier0/tspointerlist.h:57 */
	bool PopItem(CTSPointerList<IRenderContext>* , IRenderContext** );
	void CTSPointerList(CTSPointerList<IRenderContext>* );
	void ~CTSPointerList(class CTSPointerList<IRenderContext> *); /* linkage=_ZN14CTSPointerListI14IRenderContextED4Ev */
	void Purge(class CTSPointerList<IRenderContext> *); /* linkage=_ZN14CTSPointerListI14IRenderContextE5PurgeEv */
	void PushItem(class CTSPointerList<IRenderContext> *, class IRenderContext * const &); /* linkage=_ZN14CTSPointerListI14IRenderContextE8PushItemERKPS0_ */
	bool PopItem(class CTSPointerList<IRenderContext> *, class IRenderContext * *); /* linkage=_ZN14CTSPointerListI14IRenderContextE7PopItemEPPS0_ */
	void CTSPointerList(class CTSPointerList<IRenderContext> *); /* linkage=_ZN14CTSPointerListI14IRenderContextEC4Ev */
} __attribute__((__aligned__(16)));

// <0015EDB5> ../public/tier0/tspointerlist.h:23
// member functions: 10
// member variable: 1
// class size: 16
class CTSPointerList<void> : public CTSListBase {
public:
	/* class CTSListBase <ancestor>; */ /* 0 16 */
	/* ../public/tier0/tspointerlist.h:26 */
	void ~CTSPointerList(CTSPointerList<void>* );
	/* ../public/tier0/tspointerlist.h:31 */
	void Purge(CTSPointerList<void>* );
	/* ../public/tier0/tspointerlist.h:50 */
	void PushItem(CTSPointerList<void>* , void* const& );
	/* ../public/tier0/tspointerlist.h:57 */
	bool PopItem(CTSPointerList<void>* , void** );
	void CTSPointerList(CTSPointerList<void>* );
	void ~CTSPointerList(class CTSPointerList<void> *); /* linkage=_ZN14CTSPointerListIvED4Ev */
	void Purge(class CTSPointerList<void> *); /* linkage=_ZN14CTSPointerListIvE5PurgeEv */
	void PushItem(class CTSPointerList<void> *, void * const &); /* linkage=_ZN14CTSPointerListIvE8PushItemERKPv */
	bool PopItem(class CTSPointerList<void> *, void * *); /* linkage=_ZN14CTSPointerListIvE7PopItemEPPv */
	void CTSPointerList(class CTSPointerList<void> *); /* linkage=_ZN14CTSPointerListIvEC4Ev */
} __attribute__((__aligned__(16)));

// <00178CF3> ../public/tier0/tspointerlist.h:26
void CTSPointerList<IRenderContext>::~CTSPointerList()
{
} /* size: 0 */

// <00178CDA> ../public/tier0/tspointerlist.h:26
inline void CTSPointerList<IRenderContext>::~CTSPointerList()
{
} /* size: 0 */

// <0017897D> ../public/tier0/tspointerlist.h:26
void CTSPointerList<void>::~CTSPointerList()
{
} /* size: 0 */

// <00178964> ../public/tier0/tspointerlist.h:26
inline void CTSPointerList<void>::~CTSPointerList()
{
} /* size: 0 */

// <0017534A> ../public/tier0/tspointerlist.h:31
// variables: 4
inline void CTSPointerList<IRenderContext>::Purge()
{
	const char   __FUNCTION__; // 2361
	TSPointerListNode_t* pCurrent; // 33
	TSPointerListNode_t* pNext; // 34
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 41
	}
} /* size: 0, variables: 3 */

// <001750B1> ../public/tier0/tspointerlist.h:31
// variables: 4
inline void CTSPointerList<void>::Purge()
{
	const char   __FUNCTION__; // 2361
	TSPointerListNode_t* pCurrent; // 33
	TSPointerListNode_t* pNext; // 34
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 41
	}
} /* size: 0, variables: 3 */

// <001733C4> ../public/tier0/tspointerlist.h:31
// variables: 4
inline void CTSPointerList<IRenderContext>::Purge()
{
	const char   __FUNCTION__; // 31741
	TSPointerListNode_t* pCurrent; // 33
	TSPointerListNode_t* pNext; // 34
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 41
	}
} /* size: 0, variables: 3 */

// <0017312B> ../public/tier0/tspointerlist.h:31
// variables: 4
inline void CTSPointerList<void>::Purge()
{
	const char   __FUNCTION__; // 31741
	TSPointerListNode_t* pCurrent; // 33
	TSPointerListNode_t* pNext; // 34
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 41
	}
} /* size: 0, variables: 3 */

// <00177E17> ../public/tier0/tspointerlist.h:50
// variable: 1
inline void CTSPointerList<IRenderContext>::PushItem(IRenderContext* const& init)
{
	TSPointerListNode_t* pNode; // 52
} /* size: 0, variables: 1 */

// <00176802> ../public/tier0/tspointerlist.h:50
// variable: 1
inline void CTSPointerList<void>::PushItem(void* const& init)
{
	TSPointerListNode_t* pNode; // 52
} /* size: 0, variables: 1 */

// <00178773> ../public/tier0/tspointerlist.h:57
// variable: 1
inline void CTSPointerList<void>::PopItem(void** pResult)
{
	TSPointerListNode_t* pNode; // 59
} /* size: 0, variables: 1 */

// <001786F6> ../public/tier0/tspointerlist.h:57
// variable: 1
inline void CTSPointerList<IRenderContext>::PopItem(IRenderContext** pResult)
{
	TSPointerListNode_t* pNode; // 59
} /* size: 0, variables: 1 */

