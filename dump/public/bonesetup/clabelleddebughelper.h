
//
// public/bonesetup/clabelleddebughelper.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 10
//	classes: 2
//

// <028406D0> ../public/bonesetup/clabelleddebughelper.h:15
// function calls: 2
void CLabelledDebugHelper::~CLabelledDebugHelper()
{
	IAnimationDebugRenderer::~IAnimationDebugRenderer(); // 15
	CDebugVisualizerAbsTime::~CDebugVisualizerAbsTime(); // 15
} /* size: 40, inline expansions: 2 (33 bytes) */

// <028405CF> ../public/bonesetup/clabelleddebughelper.h:15
// function calls: 4
void CLabelledDebugHelper::~CLabelledDebugHelper()
{
	IAnimationDebugRenderer::~IAnimationDebugRenderer(); // 15
	IDebugVisualizer::~IDebugVisualizer(); // 51
	CDebugVisualizerAbsTime::~CDebugVisualizerAbsTime(); // 15
	CLabelledDebugHelper::~CLabelledDebugHelper(); // 15
} /* size: 67, inline expansions: 4 (66 bytes) */

// <028405B2> ../public/bonesetup/clabelleddebughelper.h:15
inline void CLabelledDebugHelper::~CLabelledDebugHelper()
{
} /* size: 0 */

// <0283CE75> ../public/bonesetup/clabelleddebughelper.h:15
// member functions: 122
// member variables: 2
// static member variables: 3
// vtable entries: 7
// class size: 24
class CLabelledDebugHelper : public CDebugVisualizerAbsTime, public IAnimationDebugRenderer {
public:
	/* class CDebugVisualizerAbsTime <ancestor>; */ /* 0 16 */
	/* class IAnimationDebugRenderer <ancestor>; */ /* 16 8 */
	void CLabelledDebugHelper(CLabelledDebugHelper* , CLabelledDebugHelper& );
	void CLabelledDebugHelper(CLabelledDebugHelper* , const CLabelledDebugHelper& );
	/* bonesetup/clabelleddebughelper.cpp:89 */
	CLabelledDebugHelper* GetInstance(void);
	/* bonesetup/clabelleddebughelper.cpp:108 */
	void Shutdown(void);
	/* bonesetup/clabelleddebughelper.cpp:33 */
	void PrintStack(void);
	/* bonesetup/clabelleddebughelper.cpp:71 */
	virtual void PushTransform(CLabelledDebugHelper* , const CTransform& );
	/* bonesetup/clabelleddebughelper.cpp:76 */
	virtual void PopTransform(CLabelledDebugHelper* );
	/* bonesetup/clabelleddebughelper.cpp:492 */
	virtual void Line(CLabelledDebugHelper* , const VectorAligned& , const VectorAligned& , const VertexColor_t& , const CUtlString& );
	/* bonesetup/clabelleddebughelper.cpp:428 */
	virtual void Sphere(CLabelledDebugHelper* , const VectorAligned& , float, const VertexColor_t& , const CUtlString& );
	/* bonesetup/clabelleddebughelper.cpp:189 */
	virtual void Axis(CLabelledDebugHelper* , const CTransform& , float, const CUtlString& );
	/* bonesetup/clabelleddebughelper.cpp:397 */
	virtual void Box(CLabelledDebugHelper* , const VectorAligned& , const QuaternionAligned& , const VectorAligned& , const VertexColor_t& , const CUtlString& );
	/* bonesetup/clabelleddebughelper.cpp:404 */
	virtual void Pie(CLabelledDebugHelper* , const VectorAligned& , const VectorAligned& , const VectorAligned& , float, float, const VertexColor_t& , const CUtlString& );
	/* bonesetup/clabelleddebughelper.cpp:361 */
	void Text(const CLabelledDebugHelper* , const VectorAligned& , int, const VertexColor_t& , const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:372 */
	void Text(const CLabelledDebugHelper* , const VectorAligned& , const VertexColor_t& , const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:350 */
	void Text(const CLabelledDebugHelper* , float, const VectorAligned& , const VertexColor_t& , const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:328 */
	void Text(const CLabelledDebugHelper* , float, const VectorAligned& , int, const VertexColor_t& , const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:384 */
	void Box(const CLabelledDebugHelper* , float, const VectorAligned& , const QuaternionAligned& , const VectorAligned& , const VertexColor_t& , const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:171 */
	void SphereAxis(const CLabelledDebugHelper* , const matrix3x4a_t& , float, const VertexColor_t& , float, const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:162 */
	void SphereAxis(const CLabelledDebugHelper* , const CTransform& , float, const VertexColor_t& , float, const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:423 */
	void Sphere(const CLabelledDebugHelper* , const VectorAligned& , float, const VertexColor_t& , const CUtlString& );
	/* bonesetup/clabelleddebughelper.cpp:411 */
	void Sphere(const CLabelledDebugHelper* , float, const VectorAligned& , float, const VertexColor_t& , const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:434 */
	void Transform(const CLabelledDebugHelper* , const CTransform& , const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:453 */
	void Arrow(const CLabelledDebugHelper* , float, const VectorAligned& , const VectorAligned& , const VertexColor_t& , const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:461 */
	void Arrow(const CLabelledDebugHelper* , const VectorAligned& , const VectorAligned& , const VertexColor_t& , const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:469 */
	void Arrow(const CLabelledDebugHelper* , const VectorAligned& , const VectorAligned& , const VertexColor_t& , float, const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:477 */
	void Arrow(const CLabelledDebugHelper* , float, const VectorAligned& , const VectorAligned& , const VertexColor_t& , float, const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:497 */
	void Line(const CLabelledDebugHelper* , const VectorAligned& , const VectorAligned& , float, const VertexColor_t& , const CUtlString& );
	/* bonesetup/clabelleddebughelper.cpp:504 */
	void Line(const CLabelledDebugHelper* , const VectorAligned& , const VectorAligned& , const VertexColor_t& , const CUtlString& );
	/* bonesetup/clabelleddebughelper.cpp:509 */
	void Line(const CLabelledDebugHelper* , float, const VectorAligned& , const VectorAligned& , const VertexColor_t& , const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:525 */
	void TraceResult(const CLabelledDebugHelper* , const VectorAligned& , const VectorAligned& , float, const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:532 */
	void TraceResult(const CLabelledDebugHelper* , float, const VectorAligned& , const VectorAligned& , float, const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:212 */
	void Axis(const CLabelledDebugHelper* , const VectorAligned& , const QuaternionAligned& , const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:228 */
	void Axis(const CLabelledDebugHelper* , const VectorAligned& , const QuaternionAligned& , float, float, const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:220 */
	void Axis(const CLabelledDebugHelper* , const VectorAligned& , const QuaternionAligned& , float, const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:236 */
	void Axis(const CLabelledDebugHelper* , float, const VectorAligned& , const QuaternionAligned& , float, const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:248 */
	void Axis(const CLabelledDebugHelper* , float, const VectorAligned& , const QuaternionAligned& , float, float, const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:196 */
	void Axis(const CLabelledDebugHelper* , const CTransform& , const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:291 */
	void Axis(const CLabelledDebugHelper* , const CTransform& , float, const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:204 */
	void Axis(const CLabelledDebugHelper* , float, const CTransform& , const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:298 */
	void Axis(const CLabelledDebugHelper* , float, const CTransform& , float, const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:181 */
	void Axis(const CLabelledDebugHelper* , const matrix3x4a_t& , const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:284 */
	void Axis(const CLabelledDebugHelper* , const matrix3x4a_t& , float, const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:270 */
	void Axis(const CLabelledDebugHelper* , float, const matrix3x4a_t& , const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:277 */
	void Axis(const CLabelledDebugHelper* , float, const matrix3x4a_t& , float, const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:306 */
	void FromToRotation(const CLabelledDebugHelper* , const VectorAligned& , const QuaternionAligned& , const QuaternionAligned& , float, const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:319 */
	void FromToRotation(const CLabelledDebugHelper* , const matrix3x4a_t& , const matrix3x4a_t& , float, const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:592 */
	void Pie(const CLabelledDebugHelper* , const VectorAligned& , const VectorAligned& , const VectorAligned& , float, const VertexColor_t& , const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:568 */
	void Pie(const CLabelledDebugHelper* , const VectorAligned& , const VectorAligned& , const VectorAligned& , float, const VertexColor_t& , bool, const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:547 */
	void Pie(const CLabelledDebugHelper* , const VectorAligned& , const VectorAligned& , const VectorAligned& , float, float, const VertexColor_t& , bool, const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:601 */
	void Arc(const CLabelledDebugHelper* , const VectorAligned& , const VectorAligned& , const VectorAligned& , float, const VertexColor_t& , const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:665 */
	void Arc(const CLabelledDebugHelper* , const VectorAligned& , const VectorAligned& , const VectorAligned& , float, bool, const VertexColor_t& , const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:608 */
	void Arc(const CLabelledDebugHelper* , const VectorAligned& , const VectorAligned& , const VectorAligned& , float, float, bool, const VertexColor_t& , const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:724 */
	void Skeleton(const CLabelledDebugHelper* , const CModel* , const matrix3x4a_t& , const CBoneAccessor<matrix3x4a_t>& , const VertexColor_t& , const VertexColor_t& , const char* , ...);
	/* bonesetup/clabelleddebughelper.cpp:84 */
	void SetEnabled(bool);
	/* ../public/bonesetup/clabelleddebughelper.h:93 */
	bool IsEnabled(void);
private:
	/* bonesetup/clabelleddebughelper.cpp:56 */
	VectorAligned Transform(const VectorAligned& );
	/* bonesetup/clabelleddebughelper.cpp:61 */
	VectorAligned Rotate(const VectorAligned& );
	/* bonesetup/clabelleddebughelper.cpp:66 */
	QuaternionAligned Rotate(const QuaternionAligned& );
	/* bonesetup/clabelleddebughelper.cpp:46 */
	CTransform GetTransform(void);
	/* bonesetup/clabelleddebughelper.cpp:142 */
	void CLabelledDebugHelper(CLabelledDebugHelper* );
	static class CLabelledDebugHelper * s_pInstance; /* 0 0 */
	static bool s_bIsEnabled; /* 0 0 */
	static class CUtlVector<CTransform, CUtlMemory<CTransform, int> > s_xTransformStack; /* 0 0 */
	virtual void ~CLabelledDebugHelper(CLabelledDebugHelper* );
	void CLabelledDebugHelper(class CLabelledDebugHelper *, class CLabelledDebugHelper &); /* linkage=_ZN20CLabelledDebugHelperC4EOS_ */
	void CLabelledDebugHelper(class CLabelledDebugHelper *, const class CLabelledDebugHelper  &); /* linkage=_ZN20CLabelledDebugHelperC4ERKS_ */
	class CLabelledDebugHelper * GetInstance(void); /* linkage=_ZN20CLabelledDebugHelper11GetInstanceEv */
	void Shutdown(void); /* linkage=_ZN20CLabelledDebugHelper8ShutdownEv */
	void PrintStack(void); /* linkage=_ZN20CLabelledDebugHelper10PrintStackEv */
	virtual void PushTransform(class CLabelledDebugHelper *, const class CTransform  &); /* linkage=_ZN20CLabelledDebugHelper13PushTransformERK10CTransform */
	/* <286704d> bonesetup/clabelleddebughelper.cpp:76 */
	virtual void PopTransform(class CLabelledDebugHelper *); /* linkage=_ZN20CLabelledDebugHelper12PopTransformEv */
	/* <2867b1a> bonesetup/clabelleddebughelper.cpp:492 */
	virtual void Line(class CLabelledDebugHelper *, const class VectorAligned  &, const class VectorAligned  &, const class VertexColor_t  &, const class CUtlString  &); /* linkage=_ZN20CLabelledDebugHelper4LineERK13VectorAlignedS2_RK13VertexColor_tRK10CUtlString */
	/* <2867a30> bonesetup/clabelleddebughelper.cpp:428 */
	virtual void Sphere(class CLabelledDebugHelper *, const class VectorAligned  &, float, const class VertexColor_t  &, const class CUtlString  &); /* linkage=_ZN20CLabelledDebugHelper6SphereERK13VectorAlignedfRK13VertexColor_tRK10CUtlString */
	/* <28676d9> bonesetup/clabelleddebughelper.cpp:189 */
	virtual void Axis(class CLabelledDebugHelper *, const class CTransform  &, float, const class CUtlString  &); /* linkage=_ZN20CLabelledDebugHelper4AxisERK10CTransformfRK10CUtlString */
	/* <2867864> bonesetup/clabelleddebughelper.cpp:397 */
	virtual void Box(class CLabelledDebugHelper *, const class VectorAligned  &, const class QuaternionAligned  &, const class VectorAligned  &, const class VertexColor_t  &, const class CUtlString  &); /* linkage=_ZN20CLabelledDebugHelper3BoxERK13VectorAlignedRK17QuaternionAlignedS2_RK13VertexColor_tRK10CUtlString */
	/* <2867c02> bonesetup/clabelleddebughelper.cpp:404 */
	virtual void Pie(class CLabelledDebugHelper *, const class VectorAligned  &, const class VectorAligned  &, const class VectorAligned  &, float, float, const class VertexColor_t  &, const class CUtlString  &); /* linkage=_ZN20CLabelledDebugHelper3PieERK13VectorAlignedS2_S2_ffRK13VertexColor_tRK10CUtlString */
	void Text(const class CLabelledDebugHelper  *, const class VectorAligned  &, int, const class VertexColor_t  &, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper4TextERK13VectorAlignediRK13VertexColor_tPKcz */
	void Text(const class CLabelledDebugHelper  *, const class VectorAligned  &, const class VertexColor_t  &, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper4TextERK13VectorAlignedRK13VertexColor_tPKcz */
	void Text(const class CLabelledDebugHelper  *, float, const class VectorAligned  &, const class VertexColor_t  &, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper4TextEfRK13VectorAlignedRK13VertexColor_tPKcz */
	void Text(const class CLabelledDebugHelper  *, float, const class VectorAligned  &, int, const class VertexColor_t  &, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper4TextEfRK13VectorAlignediRK13VertexColor_tPKcz */
	void Box(const class CLabelledDebugHelper  *, float, const class VectorAligned  &, const class QuaternionAligned  &, const class VectorAligned  &, const class VertexColor_t  &, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper3BoxEfRK13VectorAlignedRK17QuaternionAlignedS2_RK13VertexColor_tPKcz */
	void SphereAxis(const class CLabelledDebugHelper  *, const class matrix3x4a_t  &, float, const class VertexColor_t  &, float, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper10SphereAxisERK12matrix3x4a_tfRK13VertexColor_tfPKcz */
	void SphereAxis(const class CLabelledDebugHelper  *, const class CTransform  &, float, const class VertexColor_t  &, float, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper10SphereAxisERK10CTransformfRK13VertexColor_tfPKcz */
	void Sphere(const class CLabelledDebugHelper  *, const class VectorAligned  &, float, const class VertexColor_t  &, const class CUtlString  &); /* linkage=_ZNK20CLabelledDebugHelper6SphereERK13VectorAlignedfRK13VertexColor_tRK10CUtlString */
	void Sphere(const class CLabelledDebugHelper  *, float, const class VectorAligned  &, float, const class VertexColor_t  &, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper6SphereEfRK13VectorAlignedfRK13VertexColor_tPKcz */
	void Transform(const class CLabelledDebugHelper  *, const class CTransform  &, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper9TransformERK10CTransformPKcz */
	void Arrow(const class CLabelledDebugHelper  *, float, const class VectorAligned  &, const class VectorAligned  &, const class VertexColor_t  &, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper5ArrowEfRK13VectorAlignedS2_RK13VertexColor_tPKcz */
	void Arrow(const class CLabelledDebugHelper  *, const class VectorAligned  &, const class VectorAligned  &, const class VertexColor_t  &, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper5ArrowERK13VectorAlignedS2_RK13VertexColor_tPKcz */
	void Arrow(const class CLabelledDebugHelper  *, const class VectorAligned  &, const class VectorAligned  &, const class VertexColor_t  &, float, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper5ArrowERK13VectorAlignedS2_RK13VertexColor_tfPKcz */
	void Arrow(const class CLabelledDebugHelper  *, float, const class VectorAligned  &, const class VectorAligned  &, const class VertexColor_t  &, float, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper5ArrowEfRK13VectorAlignedS2_RK13VertexColor_tfPKcz */
	void Line(const class CLabelledDebugHelper  *, const class VectorAligned  &, const class VectorAligned  &, float, const class VertexColor_t  &, const class CUtlString  &); /* linkage=_ZNK20CLabelledDebugHelper4LineERK13VectorAlignedS2_fRK13VertexColor_tRK10CUtlString */
	void Line(const class CLabelledDebugHelper  *, const class VectorAligned  &, const class VectorAligned  &, const class VertexColor_t  &, const class CUtlString  &); /* linkage=_ZNK20CLabelledDebugHelper4LineERK13VectorAlignedS2_RK13VertexColor_tRK10CUtlString */
	void Line(const class CLabelledDebugHelper  *, float, const class VectorAligned  &, const class VectorAligned  &, const class VertexColor_t  &, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper4LineEfRK13VectorAlignedS2_RK13VertexColor_tPKcz */
	void TraceResult(const class CLabelledDebugHelper  *, const class VectorAligned  &, const class VectorAligned  &, float, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper11TraceResultERK13VectorAlignedS2_fPKcz */
	void TraceResult(const class CLabelledDebugHelper  *, float, const class VectorAligned  &, const class VectorAligned  &, float, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper11TraceResultEfRK13VectorAlignedS2_fPKcz */
	void Axis(const class CLabelledDebugHelper  *, const class VectorAligned  &, const class QuaternionAligned  &, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper4AxisERK13VectorAlignedRK17QuaternionAlignedPKcz */
	void Axis(const class CLabelledDebugHelper  *, const class VectorAligned  &, const class QuaternionAligned  &, float, float, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper4AxisERK13VectorAlignedRK17QuaternionAlignedffPKcz */
	void Axis(const class CLabelledDebugHelper  *, const class VectorAligned  &, const class QuaternionAligned  &, float, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper4AxisERK13VectorAlignedRK17QuaternionAlignedfPKcz */
	void Axis(const class CLabelledDebugHelper  *, float, const class VectorAligned  &, const class QuaternionAligned  &, float, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper4AxisEfRK13VectorAlignedRK17QuaternionAlignedfPKcz */
	void Axis(const class CLabelledDebugHelper  *, float, const class VectorAligned  &, const class QuaternionAligned  &, float, float, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper4AxisEfRK13VectorAlignedRK17QuaternionAlignedffPKcz */
	void Axis(const class CLabelledDebugHelper  *, const class CTransform  &, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper4AxisERK10CTransformPKcz */
	void Axis(const class CLabelledDebugHelper  *, const class CTransform  &, float, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper4AxisERK10CTransformfPKcz */
	void Axis(const class CLabelledDebugHelper  *, float, const class CTransform  &, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper4AxisEfRK10CTransformPKcz */
	void Axis(const class CLabelledDebugHelper  *, float, const class CTransform  &, float, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper4AxisEfRK10CTransformfPKcz */
	void Axis(const class CLabelledDebugHelper  *, const class matrix3x4a_t  &, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper4AxisERK12matrix3x4a_tPKcz */
	void Axis(const class CLabelledDebugHelper  *, const class matrix3x4a_t  &, float, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper4AxisERK12matrix3x4a_tfPKcz */
	void Axis(const class CLabelledDebugHelper  *, float, const class matrix3x4a_t  &, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper4AxisEfRK12matrix3x4a_tPKcz */
	void Axis(const class CLabelledDebugHelper  *, float, const class matrix3x4a_t  &, float, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper4AxisEfRK12matrix3x4a_tfPKcz */
	void FromToRotation(const class CLabelledDebugHelper  *, const class VectorAligned  &, const class QuaternionAligned  &, const class QuaternionAligned  &, float, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper14FromToRotationERK13VectorAlignedRK17QuaternionAlignedS5_fPKcz */
	void FromToRotation(const class CLabelledDebugHelper  *, const class matrix3x4a_t  &, const class matrix3x4a_t  &, float, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper14FromToRotationERK12matrix3x4a_tS2_fPKcz */
	void Pie(const class CLabelledDebugHelper  *, const class VectorAligned  &, const class VectorAligned  &, const class VectorAligned  &, float, const class VertexColor_t  &, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper3PieERK13VectorAlignedS2_S2_fRK13VertexColor_tPKcz */
	void Pie(const class CLabelledDebugHelper  *, const class VectorAligned  &, const class VectorAligned  &, const class VectorAligned  &, float, const class VertexColor_t  &, bool, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper3PieERK13VectorAlignedS2_S2_fRK13VertexColor_tbPKcz */
	void Pie(const class CLabelledDebugHelper  *, const class VectorAligned  &, const class VectorAligned  &, const class VectorAligned  &, float, float, const class VertexColor_t  &, bool, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper3PieERK13VectorAlignedS2_S2_ffRK13VertexColor_tbPKcz */
	void Arc(const class CLabelledDebugHelper  *, const class VectorAligned  &, const class VectorAligned  &, const class VectorAligned  &, float, const class VertexColor_t  &, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper3ArcERK13VectorAlignedS2_S2_fRK13VertexColor_tPKcz */
	void Arc(const class CLabelledDebugHelper  *, const class VectorAligned  &, const class VectorAligned  &, const class VectorAligned  &, float, bool, const class VertexColor_t  &, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper3ArcERK13VectorAlignedS2_S2_fbRK13VertexColor_tPKcz */
	void Arc(const class CLabelledDebugHelper  *, const class VectorAligned  &, const class VectorAligned  &, const class VectorAligned  &, float, float, bool, const class VertexColor_t  &, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper3ArcERK13VectorAlignedS2_S2_ffbRK13VertexColor_tPKcz */
	void Skeleton(const class CLabelledDebugHelper  *, const class CModel  *, const class matrix3x4a_t  &, const class CBoneAccessor<matrix3x4a_t>  &, const class VertexColor_t  &, const class VertexColor_t  &, const char  *, ...); /* linkage=_ZNK20CLabelledDebugHelper8SkeletonEPK6CModelRK12matrix3x4a_tRK13CBoneAccessorIS3_ERK13VertexColor_tSC_PKcz */
	void SetEnabled(bool); /* linkage=_ZN20CLabelledDebugHelper10SetEnabledEb */
	bool IsEnabled(void); /* linkage=_ZN20CLabelledDebugHelper9IsEnabledEv */
	class VectorAligned Transform(const class VectorAligned  &); /* linkage=_ZN20CLabelledDebugHelper9TransformERK13VectorAligned */
	class VectorAligned Rotate(const class VectorAligned  &); /* linkage=_ZN20CLabelledDebugHelper6RotateERK13VectorAligned */
	class QuaternionAligned Rotate(const class QuaternionAligned  &); /* linkage=_ZN20CLabelledDebugHelper6RotateERK17QuaternionAligned */
	/* <28675fd> bonesetup/clabelleddebughelper.cpp:46 */
	class CTransform GetTransform(void); /* linkage=_ZN20CLabelledDebugHelper12GetTransformEv */
	void CLabelledDebugHelper(class CLabelledDebugHelper *); /* linkage=_ZN20CLabelledDebugHelperC4Ev */
	virtual void ~CLabelledDebugHelper(class CLabelledDebugHelper *); /* linkage=_ZN20CLabelledDebugHelperD4Ev */
};

// <01AD0E06> ../public/bonesetup/clabelleddebughelper.h:145
const VertexColor_t& _ColorCyclerGetNextColourAndUpdateIndex(int &)
{
} /* size: 0 */

// <01BAA2E5> ../public/bonesetup/clabelleddebughelper.h:148
void ColorCycler<CUtlString>::ColorCycler()
{
} /* size: 0 */

// <01BAA2C8> ../public/bonesetup/clabelleddebughelper.h:148
inline void ColorCycler<CUtlString>::ColorCycler()
{
} /* size: 0 */

// <01BA2E1B> ../public/bonesetup/clabelleddebughelper.h:148
// variable: 1
// function calls: 30
void ColorCycler<CUtlString>::~ColorCycler()
{
	{
		int i; // 779
		CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::MaxElement(); // 779
		operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Nod this,
				int i);  // 196
		CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::IsValidIndex(
				IndexType_t i);  // 779
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 781
		Destruct<VertexColor_t>(VertexColor_t* pMemory); // 782
	}
	RemoveAll(const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashB this); // 1798
	Purge(const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashBucke this); // 903
	IsExternallyAllocated(const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Has this); // 905
	Purge(const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashBucke this); // 1799
	ResetDbgInfo(const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashB this); // 1800
	Purge(const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashB this); // 792
	IsExternallyAllocated(const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Nod this); // 905
	Purge(const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Node_t, i this); // 903
	Purge(const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Node_t, i this); // 793
	CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Purge(); // 165
	ValidateAlignment<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Node_t>(void); // 508
	Purge(const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Node_t, i this); // 510
	~CUtlMemory(const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Node_t, i this); // 166
	CVariableBitStringBase::~CVariableBitStringBase(); // 61
	CBitStringT<CVariableBitStringBase>::~CBitStringT(); // 212
	CBitString::~CBitString(); // 166
	RemoveAll(const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashB this); // 1798
	IsExternallyAllocated(const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Has this); // 905
	Purge(const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashBucke this); // 903
	Purge(const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashBucke this); // 1799
	Purge(const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashB this); // 560
	~CUtlVectorBase(const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashB this); // 410
	~CUtlVector(const CUtlVector<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashBucke this); // 166
	CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::~CUtlHashMap(); // 148
} /* size: 229, inline expansions: 24 (734 bytes) */

// <01BA2DFE> ../public/bonesetup/clabelleddebughelper.h:148
inline void ColorCycler<CUtlString>::~ColorCycler()
{
} /* size: 0 */

// <01ACB104> ../public/bonesetup/clabelleddebughelper.h:148
// member functions: 6
// member variables: 2
// class size: 104
class ColorCycler<CUtlString> {
	/* ../public/bonesetup/clabelleddebughelper.h:151 */
	const VertexColor_t& Get(ColorCycler<CUtlString>* , const CUtlString& );
private:
	CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> > m_ColorMap; /* 0 96 */
	int m_nNextColorIndex; /* 96 4 */
	void ~ColorCycler(ColorCycler<CUtlString>* );
	void ColorCycler(ColorCycler<CUtlString>* );
	const class VertexColor_t  & Get(class ColorCycler<CUtlString> *, const class CUtlString  &); /* linkage=_ZN11ColorCyclerI10CUtlStringE3GetERKS0_ */
	void ~ColorCycler(class ColorCycler<CUtlString> *); /* linkage=_ZN11ColorCyclerI10CUtlStringED4Ev */
	void ColorCycler(class ColorCycler<CUtlString> *); /* linkage=_ZN11ColorCyclerI10CUtlStringEC4Ev */
};

// <01BA5B77> ../public/bonesetup/clabelleddebughelper.h:151
// variables: 2
inline void ColorCycler<CUtlString>::Get(const CUtlString& key)
{
	int nHash; // 153
	{
		const VertexColor_t& color; // 157
	}
} /* size: 0, variables: 1 */

// <01AE3ADA> ../public/bonesetup/clabelleddebughelper.h:151
// variables: 5
// function calls: 55
void ColorCycler<CUtlString>::Get(const CUtlString& key)
{
	int nHash; // 153
	{
		const VertexColor_t& color; // 157
		operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Node_t, i this,
				int i);  // 438
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 1520
		CopyConstruct<VertexColor_t>(VertexColor_t* pMemory,
						const VertexColor_t& src);  // 438
		operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Node_t, i this,
				int i);  // 441
		VertexColor_t::operator=(
				const VertexColor_t& src);  // 441
		CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::InsertOrReplace(
				const KeyType_t& key,
				const ElemType_t& insert);  // 203
		CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Insert(
			const KeyType_t& key,
			const ElemType_t& insert);  // 158
	}
	CUtlString::Get(); // 99
	CUtlString::String(); // 25
	HashMapFunctor_t<CUtlString>::operator(
			const CUtlString& strKey);  // 571
	Count(const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >: this); // 574
	ModPowerOfTwo<unsigned int, int>(unsigned int a,
					int b);  // 575
	operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Has this,
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >: this,
			int i);  // 611
	{
		IndexType_t iNode; // 613
		operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Nod this,
				int i);  // 618
		operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Nod this,
				int i);  // 621
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 618
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 618
		CUtlString::Get(); // 99
		CUtlString::String(); // 106
		CUtlString::Get(); // 99
		CUtlString::String(); // 106
		V_strcmp(const char* s1,
			const char* s2);  // 106
		CDefEquals<CUtlString>::operator(
				CUtlString lhs,
				CUtlString rhs);  // 618
		CUtlString::~CUtlString(); // 618
		CUtlString::~CUtlString(); // 618
	}
	CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::FindInBucket(
			int iBucket,
			const KeyType_t& key);  // 578
	ModPowerOfTwo<unsigned int, int>(unsigned int a,
					int b);  // 589
	CVariableBitStringBase::Size(); // 332
	{
	}
	CVariableBitStringBase::GetInts(); // 333
	CBitStringT<CVariableBitStringBase>::GetBit(
		int bitNum);  // 591
	{
		int iNode2; // 593
		operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Has this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >: this,
				int i);  // 611
		{
			IndexType_t iNode; // 613
			operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Nod this,
					int i);  // 618
			operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Nod this,
					int i);  // 621
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 618
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 618
			CUtlString::Get(); // 99
			CUtlString::String(); // 106
			CUtlString::Get(); // 99
			CUtlString::String(); // 106
			V_strcmp(const char* s1,
				const char* s2);  // 106
			CDefEquals<CUtlString>::operator(
					CUtlString lhs,
					CUtlString rhs);  // 618
			CUtlString::~CUtlString(); // 618
			CUtlString::~CUtlString(); // 618
		}
		CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::FindInBucket(
				int iBucket,
				const KeyType_t& key);  // 593
	}
	CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Find(
		const KeyType_t& key);  // 153
	Element(const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Node_t, i this,
		int i);  // 180
	CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::operator[](
			IndexType_t i);  // 161
} /* size: 858, variables: 1, inline expansions: 15 (1119 bytes) */

