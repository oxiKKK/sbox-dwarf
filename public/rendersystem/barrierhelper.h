
//
// public/rendersystem/barrierhelper.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 4
//	class: 1
//

// <000F3B15> ../public/rendersystem/barrierhelper.h:11
// member functions: 20
// member variable: 1
// vtable entries: 6
// class size: 8
class IBarrierHelper {
	int ()(void) * * _vptr.IBarrierHelper; /* 0 8 */
	/* ../public/rendersystem/barrierhelper.h:14 */
	virtual void ~IBarrierHelper(IBarrierHelper* );
	/* ../public/rendersystem/barrierhelper.h:16 */
	void IBarrierHelper(IBarrierHelper* , const IBarrierHelper& );
	/* ../public/rendersystem/barrierhelper.h:17 */
	IBarrierHelper& operator=(IBarrierHelper* , const IBarrierHelper& );
	/* ../public/rendersystem/barrierhelper.h:19 */
	virtual void AddBuffer(IBarrierHelper* , RenderBufferHandle_t, RenderBarrierPipelineStageFlags_t, RenderBarrierAccessFlags_t);
	/* ../public/rendersystem/barrierhelper.h:24 */
	virtual void AddUAV(IBarrierHelper* , HRenderTexture, RenderBarrierPipelineStageFlags_t, RenderBarrierAccessFlags_t);
	/* ../public/rendersystem/barrierhelper.h:29 */
	virtual void TextureTransition(IBarrierHelper* , HRenderTexture, RenderImageLayout_t);
	/* ../public/rendersystem/barrierhelper.h:31 */
	virtual void BufferTransition(IBarrierHelper* , RenderBufferHandle_t, RenderBarrierPipelineStageFlags_t, RenderBarrierAccessFlags_t);
	/* ../public/rendersystem/barrierhelper.h:36 */
	virtual void UAVTransition(IBarrierHelper* , HRenderTexture, RenderBarrierPipelineStageFlags_t, RenderBarrierAccessFlags_t, RenderImageLayout_t, int32);
	/* ../public/rendersystem/barrierhelper.h:43 */
	virtual void Submit(IBarrierHelper* );
protected:
	/* ../public/rendersystem/barrierhelper.h:46 */
	void IBarrierHelper(IBarrierHelper* );
	virtual void ~IBarrierHelper(class IBarrierHelper *); /* linkage=_ZN14IBarrierHelperD4Ev */
	void IBarrierHelper(class IBarrierHelper *, const class IBarrierHelper  &); /* linkage=_ZN14IBarrierHelperC4ERKS_ */
	class IBarrierHelper & operator=(class IBarrierHelper *, const class IBarrierHelper  &); /* linkage=_ZN14IBarrierHelperaSERKS_ */
	virtual void AddBuffer(class IBarrierHelper *, RenderBufferHandle_t, enum RenderBarrierPipelineStageFlags_t, enum RenderBarrierAccessFlags_t); /* linkage=_ZN14IBarrierHelper9AddBufferEP22RenderBufferHandle_t__33RenderBarrierPipelineStageFlags_t26RenderBarrierAccessFlags_t */
	virtual void AddUAV(class IBarrierHelper *, HRenderTexture, enum RenderBarrierPipelineStageFlags_t, enum RenderBarrierAccessFlags_t); /* linkage=_ZN14IBarrierHelper6AddUAVE11CWeakHandleI31InfoForResourceTypeCTextureBaseE33RenderBarrierPipelineStageFlags_t26RenderBarrierAccessFlags_t */
	virtual void TextureTransition(class IBarrierHelper *, HRenderTexture, enum RenderImageLayout_t); /* linkage=_ZN14IBarrierHelper17TextureTransitionE11CWeakHandleI31InfoForResourceTypeCTextureBaseE19RenderImageLayout_t */
	virtual void BufferTransition(class IBarrierHelper *, RenderBufferHandle_t, enum RenderBarrierPipelineStageFlags_t, enum RenderBarrierAccessFlags_t); /* linkage=_ZN14IBarrierHelper16BufferTransitionEP22RenderBufferHandle_t__33RenderBarrierPipelineStageFlags_t26RenderBarrierAccessFlags_t */
	virtual void UAVTransition(class IBarrierHelper *, HRenderTexture, enum RenderBarrierPipelineStageFlags_t, enum RenderBarrierAccessFlags_t, enum RenderImageLayout_t, int32); /* linkage=_ZN14IBarrierHelper13UAVTransitionE11CWeakHandleI31InfoForResourceTypeCTextureBaseE33RenderBarrierPipelineStageFlags_t26RenderBarrierAccessFlags_t19RenderImageLayout_ti */
	virtual void Submit(class IBarrierHelper *); /* linkage=_ZN14IBarrierHelper6SubmitEv */
	void IBarrierHelper(class IBarrierHelper *); /* linkage=_ZN14IBarrierHelperC4Ev */
};

// <0042B3A6> ../public/rendersystem/barrierhelper.h:14
void IBarrierHelper::~IBarrierHelper()
{
} /* size: 0 */

// <0042B376> ../public/rendersystem/barrierhelper.h:14
inline void IBarrierHelper::~IBarrierHelper()
{
} /* size: 0 */

// <0087AE24> ../public/rendersystem/barrierhelper.h:46
void IBarrierHelper::IBarrierHelper()
{
} /* size: 0 */

// <0087AE0B> ../public/rendersystem/barrierhelper.h:46
inline void IBarrierHelper::IBarrierHelper()
{
} /* size: 0 */

