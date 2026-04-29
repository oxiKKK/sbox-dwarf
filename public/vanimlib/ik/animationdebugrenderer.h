
//
// public/vanimlib/ik/animationdebugrenderer.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	class: 1
//

// <0285E54B> ../public/vanimlib/ik/animationdebugrenderer.h:8
void IAnimationDebugRenderer::IAnimationDebugRenderer()
{
} /* size: 0 */

// <0285E52E> ../public/vanimlib/ik/animationdebugrenderer.h:8
inline void IAnimationDebugRenderer::IAnimationDebugRenderer()
{
} /* size: 0 */

// <000880B2> ../public/vanimlib/ik/animationdebugrenderer.h:8
// member functions: 20
// member variable: 1
// vtable entries: 7
// class size: 8
class IAnimationDebugRenderer {
	void IAnimationDebugRenderer(IAnimationDebugRenderer* , const IAnimationDebugRenderer& );
	void IAnimationDebugRenderer(IAnimationDebugRenderer* );
	int ()(void) * * _vptr.IAnimationDebugRenderer; /* 0 8 */
	/* ../public/vanimlib/ik/animationdebugrenderer.h:11 */
	virtual void ~IAnimationDebugRenderer(IAnimationDebugRenderer* );
	/* ../public/vanimlib/ik/animationdebugrenderer.h:13 */
	virtual void Line(IAnimationDebugRenderer* , const VectorAligned& , const VectorAligned& , const VertexColor_t& , const CUtlString& );
	/* ../public/vanimlib/ik/animationdebugrenderer.h:14 */
	virtual void Sphere(IAnimationDebugRenderer* , const VectorAligned& , float, const VertexColor_t& , const CUtlString& );
	/* ../public/vanimlib/ik/animationdebugrenderer.h:15 */
	virtual void Axis(IAnimationDebugRenderer* , const CTransform& , float, const CUtlString& );
	/* ../public/vanimlib/ik/animationdebugrenderer.h:16 */
	virtual void Box(IAnimationDebugRenderer* , const VectorAligned& , const QuaternionAligned& , const VectorAligned& , const VertexColor_t& , const CUtlString& );
	/* ../public/vanimlib/ik/animationdebugrenderer.h:17 */
	virtual void Pie(IAnimationDebugRenderer* , const VectorAligned& , const VectorAligned& , const VectorAligned& , float, float, const VertexColor_t& , const CUtlString& );
	/* ../public/vanimlib/ik/animationdebugrenderer.h:19 */
	virtual void PushTransform(IAnimationDebugRenderer* , const CTransform& );
	/* ../public/vanimlib/ik/animationdebugrenderer.h:20 */
	virtual void PopTransform(IAnimationDebugRenderer* );
	void IAnimationDebugRenderer(class IAnimationDebugRenderer *, const class IAnimationDebugRenderer  &); /* linkage=_ZN23IAnimationDebugRendererC4ERKS_ */
	void IAnimationDebugRenderer(class IAnimationDebugRenderer *); /* linkage=_ZN23IAnimationDebugRendererC4Ev */
	virtual void ~IAnimationDebugRenderer(class IAnimationDebugRenderer *); /* linkage=_ZN23IAnimationDebugRendererD4Ev */
	virtual void Line(class IAnimationDebugRenderer *, const class VectorAligned  &, const class VectorAligned  &, const class VertexColor_t  &, const class CUtlString  &); /* linkage=_ZN23IAnimationDebugRenderer4LineERK13VectorAlignedS2_RK13VertexColor_tRK10CUtlString */
	virtual void Sphere(class IAnimationDebugRenderer *, const class VectorAligned  &, float, const class VertexColor_t  &, const class CUtlString  &); /* linkage=_ZN23IAnimationDebugRenderer6SphereERK13VectorAlignedfRK13VertexColor_tRK10CUtlString */
	virtual void Axis(class IAnimationDebugRenderer *, const class CTransform  &, float, const class CUtlString  &); /* linkage=_ZN23IAnimationDebugRenderer4AxisERK10CTransformfRK10CUtlString */
	virtual void Box(class IAnimationDebugRenderer *, const class VectorAligned  &, const class QuaternionAligned  &, const class VectorAligned  &, const class VertexColor_t  &, const class CUtlString  &); /* linkage=_ZN23IAnimationDebugRenderer3BoxERK13VectorAlignedRK17QuaternionAlignedS2_RK13VertexColor_tRK10CUtlString */
	virtual void Pie(class IAnimationDebugRenderer *, const class VectorAligned  &, const class VectorAligned  &, const class VectorAligned  &, float, float, const class VertexColor_t  &, const class CUtlString  &); /* linkage=_ZN23IAnimationDebugRenderer3PieERK13VectorAlignedS2_S2_ffRK13VertexColor_tRK10CUtlString */
	virtual void PushTransform(class IAnimationDebugRenderer *, const class CTransform  &); /* linkage=_ZN23IAnimationDebugRenderer13PushTransformERK10CTransform */
	virtual void PopTransform(class IAnimationDebugRenderer *); /* linkage=_ZN23IAnimationDebugRenderer12PopTransformEv */
};

// <02861A8E> ../public/vanimlib/ik/animationdebugrenderer.h:11
void IAnimationDebugRenderer::~IAnimationDebugRenderer()
{
} /* size: 0 */

// <02861A5E> ../public/vanimlib/ik/animationdebugrenderer.h:11
inline void IAnimationDebugRenderer::~IAnimationDebugRenderer()
{
} /* size: 0 */

