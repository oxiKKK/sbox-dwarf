
//
// rendersystem/renderquerybase.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	class: 1
//

// <002133CB> rendersystem/renderquerybase.h:20
// member functions: 6
// member variables: 4
// class size: 32
class CRenderQueryBase : public CRenderResource {
public:
	/* class CRenderResource <ancestor>; */ /* 0 16 */
	void CRenderQueryBase(CRenderQueryBase* , const CRenderQueryBase& );
	/* rendersystem/renderquerybase.cpp:15 */
	void CRenderQueryBase(CRenderQueryBase* , RenderQueryType_t);
	/* rendersystem/renderquerybase.cpp:22 */
	virtual void ~CRenderQueryBase(CRenderQueryBase* );
protected:
	RenderQueryType_t m_QueryType; /* 16 4 */
	CInterlockedInt m_QueryState __attribute__((__aligned__(4))); /* 20 4 */
	CInterlockedUInt64 m_nQueryData __attribute__((__aligned__(8))); /* 24 8 */
	void CRenderQueryBase(class CRenderQueryBase *, const class CRenderQueryBase  &); /* linkage=_ZN16CRenderQueryBaseC4ERKS_ */
	void CRenderQueryBase(class CRenderQueryBase *, enum RenderQueryType_t); /* linkage=_ZN16CRenderQueryBaseC4E17RenderQueryType_t */
	virtual void ~CRenderQueryBase(class CRenderQueryBase *); /* linkage=_ZN16CRenderQueryBaseD4Ev */
} __attribute__((__aligned__(8)));

