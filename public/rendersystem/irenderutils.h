
//
// public/rendersystem/irenderutils.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 2
//	class: 1
//	struct: 1
//

// <00076689> ../public/rendersystem/irenderutils.h:25
// member variable: 1
// struct size: 4
struct OcclusionQueryObjectHandle_t__ {
	int unused; /* 0 4 */
};

// <00265670> ../public/rendersystem/irenderutils.h:32
void IRenderUtils::IRenderUtils()
{
} /* size: 0 */

// <00265654> ../public/rendersystem/irenderutils.h:32
inline void IRenderUtils::IRenderUtils()
{
} /* size: 0 */

// <00235CCA> ../public/rendersystem/irenderutils.h:32
// member functions: 20
// member variable: 1
// vtable entries: 6
// class size: 8
class IRenderUtils : public IAppSystem {
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	void ~IRenderUtils(IRenderUtils* );
	void IRenderUtils(IRenderUtils* , IRenderUtils& );
	void IRenderUtils(IRenderUtils* , const IRenderUtils& );
	void IRenderUtils(IRenderUtils* );
	/* ../public/rendersystem/irenderutils.h:35 */
	virtual OcclusionQueryObjectHandle_t CreateOcclusionQueryObject(IRenderUtils* );
	/* ../public/rendersystem/irenderutils.h:36 */
	virtual void DestroyOcclusionQueryObject(IRenderUtils* , OcclusionQueryObjectHandle_t);
	/* ../public/rendersystem/irenderutils.h:37 */
	virtual int OcclusionQuery_GetNumPixelsRendered(IRenderUtils* , OcclusionQueryObjectHandle_t);
	/* ../public/rendersystem/irenderutils.h:38 */
	virtual void ResetOcclusionQueryObject(IRenderUtils* , OcclusionQueryObjectHandle_t);
	/* ../public/rendersystem/irenderutils.h:40 */
	virtual bool BeginOcclusionQueryDrawing(IRenderUtils* , OcclusionQueryObjectHandle_t, IRenderContext* );
	/* ../public/rendersystem/irenderutils.h:41 */
	virtual void EndOcclusionQueryDrawing(IRenderUtils* , OcclusionQueryObjectHandle_t, IRenderContext* );
	void ~IRenderUtils(class IRenderUtils *); /* linkage=_ZN12IRenderUtilsD4Ev */
	void IRenderUtils(class IRenderUtils *, class IRenderUtils &); /* linkage=_ZN12IRenderUtilsC4EOS_ */
	void IRenderUtils(class IRenderUtils *, const class IRenderUtils  &); /* linkage=_ZN12IRenderUtilsC4ERKS_ */
	void IRenderUtils(class IRenderUtils *); /* linkage=_ZN12IRenderUtilsC4Ev */
	virtual OcclusionQueryObjectHandle_t CreateOcclusionQueryObject(class IRenderUtils *); /* linkage=_ZN12IRenderUtils26CreateOcclusionQueryObjectEv */
	virtual void DestroyOcclusionQueryObject(class IRenderUtils *, OcclusionQueryObjectHandle_t); /* linkage=_ZN12IRenderUtils27DestroyOcclusionQueryObjectEP30OcclusionQueryObjectHandle_t__ */
	virtual int OcclusionQuery_GetNumPixelsRendered(class IRenderUtils *, OcclusionQueryObjectHandle_t); /* linkage=_ZN12IRenderUtils35OcclusionQuery_GetNumPixelsRenderedEP30OcclusionQueryObjectHandle_t__ */
	virtual void ResetOcclusionQueryObject(class IRenderUtils *, OcclusionQueryObjectHandle_t); /* linkage=_ZN12IRenderUtils25ResetOcclusionQueryObjectEP30OcclusionQueryObjectHandle_t__ */
	virtual bool BeginOcclusionQueryDrawing(class IRenderUtils *, OcclusionQueryObjectHandle_t, class IRenderContext *); /* linkage=_ZN12IRenderUtils26BeginOcclusionQueryDrawingEP30OcclusionQueryObjectHandle_t__P14IRenderContext */
	virtual void EndOcclusionQueryDrawing(class IRenderUtils *, OcclusionQueryObjectHandle_t, class IRenderContext *); /* linkage=_ZN12IRenderUtils24EndOcclusionQueryDrawingEP30OcclusionQueryObjectHandle_t__P14IRenderContext */
};

