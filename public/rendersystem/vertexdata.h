
//
// public/rendersystem/vertexdata.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemvulkan.so
//
//	functions: 386
//	classes: 47
//

// <0010EC5C> ../public/rendersystem/vertexdata.h:24
// member functions: 72
// class size: 1
class CBaseVertex {
	/* ../public/rendersystem/vertexdata.h:28 */
	void Position(CBaseVertex* , const Vector& );
	/* ../public/rendersystem/vertexdata.h:29 */
	void Position3f(CBaseVertex* , float, float, float);
	/* ../public/rendersystem/vertexdata.h:30 */
	void Position3fv(CBaseVertex* , const float* );
	/* ../public/rendersystem/vertexdata.h:33 */
	void SetUV0(CBaseVertex* , const Vector2D& );
	/* ../public/rendersystem/vertexdata.h:34 */
	void SetUV0(CBaseVertex* , float, float);
	/* ../public/rendersystem/vertexdata.h:35 */
	void TexCoord(CBaseVertex* , int, const Vector4D& );
	/* ../public/rendersystem/vertexdata.h:36 */
	void TexCoord1f(CBaseVertex* , int, float);
	/* ../public/rendersystem/vertexdata.h:37 */
	void TexCoord2f(CBaseVertex* , int, float, float);
	/* ../public/rendersystem/vertexdata.h:38 */
	void TexCoord2fv(CBaseVertex* , int, const float* );
	/* ../public/rendersystem/vertexdata.h:39 */
	void TexCoord3f(CBaseVertex* , int, float, float, float);
	/* ../public/rendersystem/vertexdata.h:40 */
	void TexCoord3fv(CBaseVertex* , int, const float* );
	/* ../public/rendersystem/vertexdata.h:41 */
	void TexCoord4f(CBaseVertex* , int, float, float, float, float);
	/* ../public/rendersystem/vertexdata.h:42 */
	void TexCoord4fv(CBaseVertex* , int, const float* );
	/* ../public/rendersystem/vertexdata.h:43 */
	void TexCoordSubRect2f(CBaseVertex* , int, float, float, float, float, float, float);
	/* ../public/rendersystem/vertexdata.h:44 */
	void TexCoordSubRect2fv(CBaseVertex* , int, const float* , const float* , const float* );
	/* ../public/rendersystem/vertexdata.h:47 */
	void Color(CBaseVertex* , const VertexColor_t& );
	/* ../public/rendersystem/vertexdata.h:48 */
	void Color3f(CBaseVertex* , float, float, float);
	/* ../public/rendersystem/vertexdata.h:49 */
	void Color3fv(CBaseVertex* , const float* );
	/* ../public/rendersystem/vertexdata.h:50 */
	void Color4f(CBaseVertex* , float, float, float, float);
	/* ../public/rendersystem/vertexdata.h:51 */
	void Color4fv(CBaseVertex* , const float* );
	/* ../public/rendersystem/vertexdata.h:52 */
	void Color3ub(CBaseVertex* , unsigned char, unsigned char, unsigned char);
	/* ../public/rendersystem/vertexdata.h:53 */
	void Color3ubv(CBaseVertex* , const unsigned char* );
	/* ../public/rendersystem/vertexdata.h:54 */
	void Color4ub(CBaseVertex* , unsigned char, unsigned char, unsigned char, unsigned char);
	/* ../public/rendersystem/vertexdata.h:55 */
	void Color4ubv(CBaseVertex* , const unsigned char* );
	/* ../public/rendersystem/vertexdata.h:58 */
	void Normal(CBaseVertex* , const Vector& );
	/* ../public/rendersystem/vertexdata.h:59 */
	void Normal3f(CBaseVertex* , float, float, float);
	/* ../public/rendersystem/vertexdata.h:60 */
	void Normal3fv(CBaseVertex* , const float* );
	/* ../public/rendersystem/vertexdata.h:62 */
	void TangentBasis(CBaseVertex* , Vector, Vector);
	/* ../public/rendersystem/vertexdata.h:63 */
	void TangentS(CBaseVertex* , const Vector& );
	/* ../public/rendersystem/vertexdata.h:64 */
	void TangentT(CBaseVertex* , const Vector& );
	/* ../public/rendersystem/vertexdata.h:65 */
	void TangentS3f(CBaseVertex* , float, float, float);
	/* ../public/rendersystem/vertexdata.h:66 */
	void TangentS3fv(CBaseVertex* , const float* );
	/* ../public/rendersystem/vertexdata.h:67 */
	void TangentT3f(CBaseVertex* , float, float, float);
	/* ../public/rendersystem/vertexdata.h:68 */
	void TangentT3fv(CBaseVertex* , const float* );
	/* ../public/rendersystem/vertexdata.h:69 */
	void TangentBasis(CBaseVertex* , const Vector4D& );
	/* ../public/rendersystem/vertexdata.h:72 */
	RenderInputLayout_t GetLayout(void);
	void Position(class CBaseVertex *, const class Vector  &); /* linkage=_ZN11CBaseVertex8PositionERK6Vector */
	void Position3f(class CBaseVertex *, float, float, float); /* linkage=_ZN11CBaseVertex10Position3fEfff */
	void Position3fv(class CBaseVertex *, const float  *); /* linkage=_ZN11CBaseVertex11Position3fvEPKf */
	void SetUV0(class CBaseVertex *, const class Vector2D  &); /* linkage=_ZN11CBaseVertex6SetUV0ERK8Vector2D */
	void SetUV0(class CBaseVertex *, float, float); /* linkage=_ZN11CBaseVertex6SetUV0Eff */
	void TexCoord(class CBaseVertex *, int, const class Vector4D  &); /* linkage=_ZN11CBaseVertex8TexCoordEiRK8Vector4D */
	void TexCoord1f(class CBaseVertex *, int, float); /* linkage=_ZN11CBaseVertex10TexCoord1fEif */
	void TexCoord2f(class CBaseVertex *, int, float, float); /* linkage=_ZN11CBaseVertex10TexCoord2fEiff */
	void TexCoord2fv(class CBaseVertex *, int, const float  *); /* linkage=_ZN11CBaseVertex11TexCoord2fvEiPKf */
	void TexCoord3f(class CBaseVertex *, int, float, float, float); /* linkage=_ZN11CBaseVertex10TexCoord3fEifff */
	void TexCoord3fv(class CBaseVertex *, int, const float  *); /* linkage=_ZN11CBaseVertex11TexCoord3fvEiPKf */
	void TexCoord4f(class CBaseVertex *, int, float, float, float, float); /* linkage=_ZN11CBaseVertex10TexCoord4fEiffff */
	void TexCoord4fv(class CBaseVertex *, int, const float  *); /* linkage=_ZN11CBaseVertex11TexCoord4fvEiPKf */
	void TexCoordSubRect2f(class CBaseVertex *, int, float, float, float, float, float, float); /* linkage=_ZN11CBaseVertex17TexCoordSubRect2fEiffffff */
	void TexCoordSubRect2fv(class CBaseVertex *, int, const float  *, const float  *, const float  *); /* linkage=_ZN11CBaseVertex18TexCoordSubRect2fvEiPKfS1_S1_ */
	void Color(class CBaseVertex *, const class VertexColor_t  &); /* linkage=_ZN11CBaseVertex5ColorERK13VertexColor_t */
	void Color3f(class CBaseVertex *, float, float, float); /* linkage=_ZN11CBaseVertex7Color3fEfff */
	void Color3fv(class CBaseVertex *, const float  *); /* linkage=_ZN11CBaseVertex8Color3fvEPKf */
	void Color4f(class CBaseVertex *, float, float, float, float); /* linkage=_ZN11CBaseVertex7Color4fEffff */
	void Color4fv(class CBaseVertex *, const float  *); /* linkage=_ZN11CBaseVertex8Color4fvEPKf */
	void Color3ub(class CBaseVertex *, unsigned char, unsigned char, unsigned char); /* linkage=_ZN11CBaseVertex8Color3ubEhhh */
	void Color3ubv(class CBaseVertex *, const unsigned char  *); /* linkage=_ZN11CBaseVertex9Color3ubvEPKh */
	void Color4ub(class CBaseVertex *, unsigned char, unsigned char, unsigned char, unsigned char); /* linkage=_ZN11CBaseVertex8Color4ubEhhhh */
	void Color4ubv(class CBaseVertex *, const unsigned char  *); /* linkage=_ZN11CBaseVertex9Color4ubvEPKh */
	void Normal(class CBaseVertex *, const class Vector  &); /* linkage=_ZN11CBaseVertex6NormalERK6Vector */
	void Normal3f(class CBaseVertex *, float, float, float); /* linkage=_ZN11CBaseVertex8Normal3fEfff */
	void Normal3fv(class CBaseVertex *, const float  *); /* linkage=_ZN11CBaseVertex9Normal3fvEPKf */
	void TangentBasis(class CBaseVertex *, class Vector, class Vector); /* linkage=_ZN11CBaseVertex12TangentBasisE6VectorS0_ */
	void TangentS(class CBaseVertex *, const class Vector  &); /* linkage=_ZN11CBaseVertex8TangentSERK6Vector */
	void TangentT(class CBaseVertex *, const class Vector  &); /* linkage=_ZN11CBaseVertex8TangentTERK6Vector */
	void TangentS3f(class CBaseVertex *, float, float, float); /* linkage=_ZN11CBaseVertex10TangentS3fEfff */
	void TangentS3fv(class CBaseVertex *, const float  *); /* linkage=_ZN11CBaseVertex11TangentS3fvEPKf */
	void TangentT3f(class CBaseVertex *, float, float, float); /* linkage=_ZN11CBaseVertex10TangentT3fEfff */
	void TangentT3fv(class CBaseVertex *, const float  *); /* linkage=_ZN11CBaseVertex11TangentT3fvEPKf */
	void TangentBasis(class CBaseVertex *, const class Vector4D  &); /* linkage=_ZN11CBaseVertex12TangentBasisERK8Vector4D */
	RenderInputLayout_t GetLayout(void); /* linkage=_ZN11CBaseVertex9GetLayoutEv */
};

// <0317CE5A> ../public/rendersystem/vertexdata.h:47
inline void CBaseVertex::Color(const VertexColor_t& vertexColor)
{
} /* size: 0 */

// <0317CE35> ../public/rendersystem/vertexdata.h:58
inline void CBaseVertex::Normal(const Vector& vecNormal)
{
} /* size: 0 */

// <009D3E62> ../public/rendersystem/vertexdata.h:89
// member functions: 24
// member variables: 9
// class size: 80
class CVertexDataBase<PhysicsDebugVertex_t> {
	/* ../public/rendersystem/vertexdata.h:165 */
	void CVertexDataBase(CVertexDataBase<PhysicsDebugVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:194 */
	void ~CVertexDataBase(CVertexDataBase<PhysicsDebugVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:239 */
	int VertexCount(const CVertexDataBase<PhysicsDebugVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:229 */
	int GetBufferVertexCount(const CVertexDataBase<PhysicsDebugVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:270 */
	void AdvanceVertex(CVertexDataBase<PhysicsDebugVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:249 */
	void AdvanceVertexCount(CVertexDataBase<PhysicsDebugVertex_t>* , int);
	/* ../public/rendersystem/vertexdata.h:260 */
	IRenderContext* GetRenderContext(CVertexDataBase<PhysicsDebugVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:113 */
	PhysicsDebugVertex_t* operator->(CVertexDataBase<PhysicsDebugVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:114 */
	const PhysicsDebugVertex_t* operator->(const CVertexDataBase<PhysicsDebugVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:205 */
	PhysicsDebugVertex_t& CurrentVertex(CVertexDataBase<PhysicsDebugVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:219 */
	PhysicsDebugVertex_t* Base(const CVertexDataBase<PhysicsDebugVertex_t>* );
protected:
	/* ../public/rendersystem/vertexdata.h:175 */
	void ClearVertexFields(CVertexDataBase<PhysicsDebugVertex_t>* );
	PhysicsDebugVertex_t m_Scratch; /* 0 48 */
	PhysicsDebugVertex_t * m_pMemory; /* 48 8 */
	int m_nVertexCount; /* 56 4 */
	int m_nVertexIncrement; /* 60 4 */
	IRenderContext * m_pRenderContext; /* 64 8 */
	int m_nMaxVertexCount; /* 72 4 */
	uint32 m_nBufferVertexCount:30; /* 76: 0 4 */
	uint32 m_bShouldDeallocate:1; /* 76:30 4 */
	uint32 m_bBufferInstalled:1; /* 76:31 4 */
	void CVertexDataBase(class CVertexDataBase<PhysicsDebugVertex_t> *); /* linkage=_ZN15CVertexDataBaseI20PhysicsDebugVertex_tEC4Ev */
	void ~CVertexDataBase(class CVertexDataBase<PhysicsDebugVertex_t> *); /* linkage=_ZN15CVertexDataBaseI20PhysicsDebugVertex_tED4Ev */
	int VertexCount(const class CVertexDataBase<PhysicsDebugVertex_t>  *); /* linkage=_ZNK15CVertexDataBaseI20PhysicsDebugVertex_tE11VertexCountEv */
	int GetBufferVertexCount(const class CVertexDataBase<PhysicsDebugVertex_t>  *); /* linkage=_ZNK15CVertexDataBaseI20PhysicsDebugVertex_tE20GetBufferVertexCountEv */
	void AdvanceVertex(class CVertexDataBase<PhysicsDebugVertex_t> *); /* linkage=_ZN15CVertexDataBaseI20PhysicsDebugVertex_tE13AdvanceVertexEv */
	void AdvanceVertexCount(class CVertexDataBase<PhysicsDebugVertex_t> *, int); /* linkage=_ZN15CVertexDataBaseI20PhysicsDebugVertex_tE18AdvanceVertexCountEi */
	class IRenderContext * GetRenderContext(class CVertexDataBase<PhysicsDebugVertex_t> *); /* linkage=_ZN15CVertexDataBaseI20PhysicsDebugVertex_tE16GetRenderContextEv */
	class PhysicsDebugVertex_t * operator->(class CVertexDataBase<PhysicsDebugVertex_t> *); /* linkage=_ZN15CVertexDataBaseI20PhysicsDebugVertex_tEptEv */
	const class PhysicsDebugVertex_t  * operator->(const class CVertexDataBase<PhysicsDebugVertex_t>  *); /* linkage=_ZNK15CVertexDataBaseI20PhysicsDebugVertex_tEptEv */
	class PhysicsDebugVertex_t & CurrentVertex(class CVertexDataBase<PhysicsDebugVertex_t> *); /* linkage=_ZN15CVertexDataBaseI20PhysicsDebugVertex_tE13CurrentVertexEv */
	class PhysicsDebugVertex_t * Base(const class CVertexDataBase<PhysicsDebugVertex_t>  *); /* linkage=_ZNK15CVertexDataBaseI20PhysicsDebugVertex_tE4BaseEv */
	void ClearVertexFields(class CVertexDataBase<PhysicsDebugVertex_t> *); /* linkage=_ZN15CVertexDataBaseI20PhysicsDebugVertex_tE17ClearVertexFieldsEv */
} __attribute__((__aligned__(16)));

// <028B9718> ../public/rendersystem/vertexdata.h:89
// member functions: 12
// member variables: 9
// class size: 64
class CVertexDataBase<CQuadRenderer::Vertex_t> {
	/* ../public/rendersystem/vertexdata.h:165 */
	void CVertexDataBase(CVertexDataBase<CQuadRenderer::Vertex_t>* );
	/* ../public/rendersystem/vertexdata.h:194 */
	void ~CVertexDataBase(CVertexDataBase<CQuadRenderer::Vertex_t>* );
	/* ../public/rendersystem/vertexdata.h:239 */
	int VertexCount(const CVertexDataBase<CQuadRenderer::Vertex_t>* );
	/* ../public/rendersystem/vertexdata.h:229 */
	int GetBufferVertexCount(const CVertexDataBase<CQuadRenderer::Vertex_t>* );
	/* ../public/rendersystem/vertexdata.h:270 */
	void AdvanceVertex(CVertexDataBase<CQuadRenderer::Vertex_t>* );
	/* ../public/rendersystem/vertexdata.h:249 */
	void AdvanceVertexCount(CVertexDataBase<CQuadRenderer::Vertex_t>* , int);
	/* ../public/rendersystem/vertexdata.h:260 */
	IRenderContext* GetRenderContext(CVertexDataBase<CQuadRenderer::Vertex_t>* );
	/* ../public/rendersystem/vertexdata.h:113 */
	Vertex_t* operator->(CVertexDataBase<CQuadRenderer::Vertex_t>* );
	/* ../public/rendersystem/vertexdata.h:114 */
	const Vertex_t* operator->(const CVertexDataBase<CQuadRenderer::Vertex_t>* );
	/* ../public/rendersystem/vertexdata.h:205 */
	Vertex_t& CurrentVertex(CVertexDataBase<CQuadRenderer::Vertex_t>* );
	/* ../public/rendersystem/vertexdata.h:219 */
	Vertex_t* Base(const CVertexDataBase<CQuadRenderer::Vertex_t>* );
protected:
	/* ../public/rendersystem/vertexdata.h:175 */
	void ClearVertexFields(CVertexDataBase<CQuadRenderer::Vertex_t>* );
	Vertex_t m_Scratch; /* 0 28 */
	Vertex_t * m_pMemory; /* 32 8 */
	int m_nVertexCount; /* 40 4 */
	int m_nVertexIncrement; /* 44 4 */
	IRenderContext * m_pRenderContext; /* 48 8 */
	int m_nMaxVertexCount; /* 56 4 */
	uint32 m_nBufferVertexCount:30; /* 60: 0 4 */
	uint32 m_bShouldDeallocate:1; /* 60:30 4 */
	uint32 m_bBufferInstalled:1; /* 60:31 4 */
} __attribute__((__aligned__(16)));

// <02DFD5DB> ../public/rendersystem/vertexdata.h:89
// member functions: 12
// member variables: 9
// class size: 96
class CVertexDataBase<MorphPositionSpeedVertex_t> {
	/* ../public/rendersystem/vertexdata.h:165 */
	void CVertexDataBase(CVertexDataBase<MorphPositionSpeedVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:194 */
	void ~CVertexDataBase(CVertexDataBase<MorphPositionSpeedVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:239 */
	int VertexCount(const CVertexDataBase<MorphPositionSpeedVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:229 */
	int GetBufferVertexCount(const CVertexDataBase<MorphPositionSpeedVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:270 */
	void AdvanceVertex(CVertexDataBase<MorphPositionSpeedVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:249 */
	void AdvanceVertexCount(CVertexDataBase<MorphPositionSpeedVertex_t>* , int);
	/* ../public/rendersystem/vertexdata.h:260 */
	IRenderContext* GetRenderContext(CVertexDataBase<MorphPositionSpeedVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:113 */
	MorphPositionSpeedVertex_t* operator->(CVertexDataBase<MorphPositionSpeedVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:114 */
	const MorphPositionSpeedVertex_t* operator->(const CVertexDataBase<MorphPositionSpeedVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:205 */
	MorphPositionSpeedVertex_t& CurrentVertex(CVertexDataBase<MorphPositionSpeedVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:219 */
	MorphPositionSpeedVertex_t* Base(const CVertexDataBase<MorphPositionSpeedVertex_t>* );
protected:
	/* ../public/rendersystem/vertexdata.h:175 */
	void ClearVertexFields(CVertexDataBase<MorphPositionSpeedVertex_t>* );
	MorphPositionSpeedVertex_t m_Scratch; /* 0 56 */
	MorphPositionSpeedVertex_t * m_pMemory; /* 56 8 */
	int m_nVertexCount; /* 64 4 */
	int m_nVertexIncrement; /* 68 4 */
	IRenderContext * m_pRenderContext; /* 72 8 */
	int m_nMaxVertexCount; /* 80 4 */
	uint32 m_nBufferVertexCount:30; /* 84: 0 4 */
	uint32 m_bShouldDeallocate:1; /* 84:30 4 */
	uint32 m_bBufferInstalled:1; /* 84:31 4 */
} __attribute__((__aligned__(16)));

// <02DFDA21> ../public/rendersystem/vertexdata.h:89
// member functions: 12
// member variables: 9
// class size: 128
class CVertexDataBase<MorphNormalWrinkleVertex_t> {
	/* ../public/rendersystem/vertexdata.h:165 */
	void CVertexDataBase(CVertexDataBase<MorphNormalWrinkleVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:194 */
	void ~CVertexDataBase(CVertexDataBase<MorphNormalWrinkleVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:239 */
	int VertexCount(const CVertexDataBase<MorphNormalWrinkleVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:229 */
	int GetBufferVertexCount(const CVertexDataBase<MorphNormalWrinkleVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:270 */
	void AdvanceVertex(CVertexDataBase<MorphNormalWrinkleVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:249 */
	void AdvanceVertexCount(CVertexDataBase<MorphNormalWrinkleVertex_t>* , int);
	/* ../public/rendersystem/vertexdata.h:260 */
	IRenderContext* GetRenderContext(CVertexDataBase<MorphNormalWrinkleVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:113 */
	MorphNormalWrinkleVertex_t* operator->(CVertexDataBase<MorphNormalWrinkleVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:114 */
	const MorphNormalWrinkleVertex_t* operator->(const CVertexDataBase<MorphNormalWrinkleVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:205 */
	MorphNormalWrinkleVertex_t& CurrentVertex(CVertexDataBase<MorphNormalWrinkleVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:219 */
	MorphNormalWrinkleVertex_t* Base(const CVertexDataBase<MorphNormalWrinkleVertex_t>* );
protected:
	/* ../public/rendersystem/vertexdata.h:175 */
	void ClearVertexFields(CVertexDataBase<MorphNormalWrinkleVertex_t>* );
	MorphNormalWrinkleVertex_t m_Scratch; /* 0 96 */
	MorphNormalWrinkleVertex_t * m_pMemory; /* 96 8 */
	int m_nVertexCount; /* 104 4 */
	int m_nVertexIncrement; /* 108 4 */
	IRenderContext * m_pRenderContext; /* 112 8 */
	int m_nMaxVertexCount; /* 120 4 */
	uint32 m_nBufferVertexCount:30; /* 124: 0 4 */
	uint32 m_bShouldDeallocate:1; /* 124:30 4 */
	uint32 m_bBufferInstalled:1; /* 124:31 4 */
} __attribute__((__aligned__(16)));

// <0311468C> ../public/rendersystem/vertexdata.h:89
// member functions: 12
// member variables: 9
// class size: 80
class CVertexDataBase<VertexWireFrame_t> {
	/* ../public/rendersystem/vertexdata.h:165 */
	void CVertexDataBase(CVertexDataBase<VertexWireFrame_t>* );
	/* ../public/rendersystem/vertexdata.h:194 */
	void ~CVertexDataBase(CVertexDataBase<VertexWireFrame_t>* );
	/* ../public/rendersystem/vertexdata.h:239 */
	int VertexCount(const CVertexDataBase<VertexWireFrame_t>* );
	/* ../public/rendersystem/vertexdata.h:229 */
	int GetBufferVertexCount(const CVertexDataBase<VertexWireFrame_t>* );
	/* ../public/rendersystem/vertexdata.h:270 */
	void AdvanceVertex(CVertexDataBase<VertexWireFrame_t>* );
	/* ../public/rendersystem/vertexdata.h:249 */
	void AdvanceVertexCount(CVertexDataBase<VertexWireFrame_t>* , int);
	/* ../public/rendersystem/vertexdata.h:260 */
	IRenderContext* GetRenderContext(CVertexDataBase<VertexWireFrame_t>* );
	/* ../public/rendersystem/vertexdata.h:113 */
	VertexWireFrame_t* operator->(CVertexDataBase<VertexWireFrame_t>* );
	/* ../public/rendersystem/vertexdata.h:114 */
	const VertexWireFrame_t* operator->(const CVertexDataBase<VertexWireFrame_t>* );
	/* ../public/rendersystem/vertexdata.h:205 */
	VertexWireFrame_t& CurrentVertex(CVertexDataBase<VertexWireFrame_t>* );
	/* ../public/rendersystem/vertexdata.h:219 */
	VertexWireFrame_t* Base(const CVertexDataBase<VertexWireFrame_t>* );
protected:
	/* ../public/rendersystem/vertexdata.h:175 */
	void ClearVertexFields(CVertexDataBase<VertexWireFrame_t>* );
	VertexWireFrame_t m_Scratch; /* 0 40 */
	VertexWireFrame_t * m_pMemory; /* 40 8 */
	int m_nVertexCount; /* 48 4 */
	int m_nVertexIncrement; /* 52 4 */
	IRenderContext * m_pRenderContext; /* 56 8 */
	int m_nMaxVertexCount; /* 64 4 */
	uint32 m_nBufferVertexCount:30; /* 68: 0 4 */
	uint32 m_bShouldDeallocate:1; /* 68:30 4 */
	uint32 m_bBufferInstalled:1; /* 68:31 4 */
} __attribute__((__aligned__(16)));

// <03116357> ../public/rendersystem/vertexdata.h:89
// member functions: 12
// member variables: 9
// class size: 64
class CVertexDataBase<VertexWireFrame2D_t> {
	/* ../public/rendersystem/vertexdata.h:165 */
	void CVertexDataBase(CVertexDataBase<VertexWireFrame2D_t>* );
	/* ../public/rendersystem/vertexdata.h:194 */
	void ~CVertexDataBase(CVertexDataBase<VertexWireFrame2D_t>* );
	/* ../public/rendersystem/vertexdata.h:239 */
	int VertexCount(const CVertexDataBase<VertexWireFrame2D_t>* );
	/* ../public/rendersystem/vertexdata.h:229 */
	int GetBufferVertexCount(const CVertexDataBase<VertexWireFrame2D_t>* );
	/* ../public/rendersystem/vertexdata.h:270 */
	void AdvanceVertex(CVertexDataBase<VertexWireFrame2D_t>* );
	/* ../public/rendersystem/vertexdata.h:249 */
	void AdvanceVertexCount(CVertexDataBase<VertexWireFrame2D_t>* , int);
	/* ../public/rendersystem/vertexdata.h:260 */
	IRenderContext* GetRenderContext(CVertexDataBase<VertexWireFrame2D_t>* );
	/* ../public/rendersystem/vertexdata.h:113 */
	VertexWireFrame2D_t* operator->(CVertexDataBase<VertexWireFrame2D_t>* );
	/* ../public/rendersystem/vertexdata.h:114 */
	const VertexWireFrame2D_t* operator->(const CVertexDataBase<VertexWireFrame2D_t>* );
	/* ../public/rendersystem/vertexdata.h:205 */
	VertexWireFrame2D_t& CurrentVertex(CVertexDataBase<VertexWireFrame2D_t>* );
	/* ../public/rendersystem/vertexdata.h:219 */
	VertexWireFrame2D_t* Base(const CVertexDataBase<VertexWireFrame2D_t>* );
protected:
	/* ../public/rendersystem/vertexdata.h:175 */
	void ClearVertexFields(CVertexDataBase<VertexWireFrame2D_t>* );
	VertexWireFrame2D_t m_Scratch; /* 0 28 */
	VertexWireFrame2D_t * m_pMemory; /* 32 8 */
	int m_nVertexCount; /* 40 4 */
	int m_nVertexIncrement; /* 44 4 */
	IRenderContext * m_pRenderContext; /* 48 8 */
	int m_nMaxVertexCount; /* 56 4 */
	uint32 m_nBufferVertexCount:30; /* 60: 0 4 */
	uint32 m_bShouldDeallocate:1; /* 60:30 4 */
	uint32 m_bBufferInstalled:1; /* 60:31 4 */
} __attribute__((__aligned__(16)));

// <03116793> ../public/rendersystem/vertexdata.h:89
// member functions: 12
// member variables: 9
// class size: 64
class CVertexDataBase<VertexDebugUI_t> {
	/* ../public/rendersystem/vertexdata.h:165 */
	void CVertexDataBase(CVertexDataBase<VertexDebugUI_t>* );
	/* ../public/rendersystem/vertexdata.h:194 */
	void ~CVertexDataBase(CVertexDataBase<VertexDebugUI_t>* );
	/* ../public/rendersystem/vertexdata.h:239 */
	int VertexCount(const CVertexDataBase<VertexDebugUI_t>* );
	/* ../public/rendersystem/vertexdata.h:229 */
	int GetBufferVertexCount(const CVertexDataBase<VertexDebugUI_t>* );
	/* ../public/rendersystem/vertexdata.h:270 */
	void AdvanceVertex(CVertexDataBase<VertexDebugUI_t>* );
	/* ../public/rendersystem/vertexdata.h:249 */
	void AdvanceVertexCount(CVertexDataBase<VertexDebugUI_t>* , int);
	/* ../public/rendersystem/vertexdata.h:260 */
	IRenderContext* GetRenderContext(CVertexDataBase<VertexDebugUI_t>* );
	/* ../public/rendersystem/vertexdata.h:113 */
	VertexDebugUI_t* operator->(CVertexDataBase<VertexDebugUI_t>* );
	/* ../public/rendersystem/vertexdata.h:114 */
	const VertexDebugUI_t* operator->(const CVertexDataBase<VertexDebugUI_t>* );
	/* ../public/rendersystem/vertexdata.h:205 */
	VertexDebugUI_t& CurrentVertex(CVertexDataBase<VertexDebugUI_t>* );
	/* ../public/rendersystem/vertexdata.h:219 */
	VertexDebugUI_t* Base(const CVertexDataBase<VertexDebugUI_t>* );
protected:
	/* ../public/rendersystem/vertexdata.h:175 */
	void ClearVertexFields(CVertexDataBase<VertexDebugUI_t>* );
	VertexDebugUI_t m_Scratch; /* 0 24 */
	VertexDebugUI_t * m_pMemory; /* 24 8 */
	int m_nVertexCount; /* 32 4 */
	int m_nVertexIncrement; /* 36 4 */
	IRenderContext * m_pRenderContext; /* 40 8 */
	int m_nMaxVertexCount; /* 48 4 */
	uint32 m_nBufferVertexCount:30; /* 52: 0 4 */
	uint32 m_bShouldDeallocate:1; /* 52:30 4 */
	uint32 m_bBufferInstalled:1; /* 52:31 4 */
} __attribute__((__aligned__(16)));

// <03116F43> ../public/rendersystem/vertexdata.h:89
// member functions: 24
// member variables: 9
// class size: 64
class CVertexDataBase<VertexUVPos_t> {
	/* ../public/rendersystem/vertexdata.h:165 */
	void CVertexDataBase(CVertexDataBase<VertexUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:194 */
	void ~CVertexDataBase(CVertexDataBase<VertexUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:239 */
	int VertexCount(const CVertexDataBase<VertexUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:229 */
	int GetBufferVertexCount(const CVertexDataBase<VertexUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:270 */
	void AdvanceVertex(CVertexDataBase<VertexUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:249 */
	void AdvanceVertexCount(CVertexDataBase<VertexUVPos_t>* , int);
	/* ../public/rendersystem/vertexdata.h:260 */
	IRenderContext* GetRenderContext(CVertexDataBase<VertexUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:113 */
	VertexUVPos_t* operator->(CVertexDataBase<VertexUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:114 */
	const VertexUVPos_t* operator->(const CVertexDataBase<VertexUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:205 */
	VertexUVPos_t& CurrentVertex(CVertexDataBase<VertexUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:219 */
	VertexUVPos_t* Base(const CVertexDataBase<VertexUVPos_t>* );
protected:
	/* ../public/rendersystem/vertexdata.h:175 */
	void ClearVertexFields(CVertexDataBase<VertexUVPos_t>* );
	VertexUVPos_t m_Scratch; /* 0 20 */
	VertexUVPos_t * m_pMemory; /* 24 8 */
	int m_nVertexCount; /* 32 4 */
	int m_nVertexIncrement; /* 36 4 */
	IRenderContext * m_pRenderContext; /* 40 8 */
	int m_nMaxVertexCount; /* 48 4 */
	uint32 m_nBufferVertexCount:30; /* 52: 0 4 */
	uint32 m_bShouldDeallocate:1; /* 52:30 4 */
	uint32 m_bBufferInstalled:1; /* 52:31 4 */
	void CVertexDataBase(class CVertexDataBase<VertexUVPos_t> *); /* linkage=_ZN15CVertexDataBaseI13VertexUVPos_tEC4Ev */
	void ~CVertexDataBase(class CVertexDataBase<VertexUVPos_t> *); /* linkage=_ZN15CVertexDataBaseI13VertexUVPos_tED4Ev */
	int VertexCount(const class CVertexDataBase<VertexUVPos_t>  *); /* linkage=_ZNK15CVertexDataBaseI13VertexUVPos_tE11VertexCountEv */
	int GetBufferVertexCount(const class CVertexDataBase<VertexUVPos_t>  *); /* linkage=_ZNK15CVertexDataBaseI13VertexUVPos_tE20GetBufferVertexCountEv */
	void AdvanceVertex(class CVertexDataBase<VertexUVPos_t> *); /* linkage=_ZN15CVertexDataBaseI13VertexUVPos_tE13AdvanceVertexEv */
	void AdvanceVertexCount(class CVertexDataBase<VertexUVPos_t> *, int); /* linkage=_ZN15CVertexDataBaseI13VertexUVPos_tE18AdvanceVertexCountEi */
	class IRenderContext * GetRenderContext(class CVertexDataBase<VertexUVPos_t> *); /* linkage=_ZN15CVertexDataBaseI13VertexUVPos_tE16GetRenderContextEv */
	class VertexUVPos_t * operator->(class CVertexDataBase<VertexUVPos_t> *); /* linkage=_ZN15CVertexDataBaseI13VertexUVPos_tEptEv */
	const class VertexUVPos_t  * operator->(const class CVertexDataBase<VertexUVPos_t>  *); /* linkage=_ZNK15CVertexDataBaseI13VertexUVPos_tEptEv */
	class VertexUVPos_t & CurrentVertex(class CVertexDataBase<VertexUVPos_t> *); /* linkage=_ZN15CVertexDataBaseI13VertexUVPos_tE13CurrentVertexEv */
	class VertexUVPos_t * Base(const class CVertexDataBase<VertexUVPos_t>  *); /* linkage=_ZNK15CVertexDataBaseI13VertexUVPos_tE4BaseEv */
	void ClearVertexFields(class CVertexDataBase<VertexUVPos_t> *); /* linkage=_ZN15CVertexDataBaseI13VertexUVPos_tE17ClearVertexFieldsEv */
} __attribute__((__aligned__(16)));

// <0321A230> ../public/rendersystem/vertexdata.h:89
// member functions: 12
// member variables: 9
// class size: 64
class CVertexDataBase<VertexPostProcess_t> {
	/* ../public/rendersystem/vertexdata.h:165 */
	void CVertexDataBase(CVertexDataBase<VertexPostProcess_t>* );
	/* ../public/rendersystem/vertexdata.h:194 */
	void ~CVertexDataBase(CVertexDataBase<VertexPostProcess_t>* );
	/* ../public/rendersystem/vertexdata.h:239 */
	int VertexCount(const CVertexDataBase<VertexPostProcess_t>* );
	/* ../public/rendersystem/vertexdata.h:229 */
	int GetBufferVertexCount(const CVertexDataBase<VertexPostProcess_t>* );
	/* ../public/rendersystem/vertexdata.h:270 */
	void AdvanceVertex(CVertexDataBase<VertexPostProcess_t>* );
	/* ../public/rendersystem/vertexdata.h:249 */
	void AdvanceVertexCount(CVertexDataBase<VertexPostProcess_t>* , int);
	/* ../public/rendersystem/vertexdata.h:260 */
	IRenderContext* GetRenderContext(CVertexDataBase<VertexPostProcess_t>* );
	/* ../public/rendersystem/vertexdata.h:113 */
	VertexPostProcess_t* operator->(CVertexDataBase<VertexPostProcess_t>* );
	/* ../public/rendersystem/vertexdata.h:114 */
	const VertexPostProcess_t* operator->(const CVertexDataBase<VertexPostProcess_t>* );
	/* ../public/rendersystem/vertexdata.h:205 */
	VertexPostProcess_t& CurrentVertex(CVertexDataBase<VertexPostProcess_t>* );
	/* ../public/rendersystem/vertexdata.h:219 */
	VertexPostProcess_t* Base(const CVertexDataBase<VertexPostProcess_t>* );
protected:
	/* ../public/rendersystem/vertexdata.h:175 */
	void ClearVertexFields(CVertexDataBase<VertexPostProcess_t>* );
	VertexPostProcess_t m_Scratch; /* 0 32 */
	VertexPostProcess_t * m_pMemory; /* 32 8 */
	int m_nVertexCount; /* 40 4 */
	int m_nVertexIncrement; /* 44 4 */
	IRenderContext * m_pRenderContext; /* 48 8 */
	int m_nMaxVertexCount; /* 56 4 */
	uint32 m_nBufferVertexCount:30; /* 60: 0 4 */
	uint32 m_bShouldDeallocate:1; /* 60:30 4 */
	uint32 m_bBufferInstalled:1; /* 60:31 4 */
} __attribute__((__aligned__(16)));

// <0321A67F> ../public/rendersystem/vertexdata.h:89
// member functions: 12
// member variables: 9
// class size: 48
class CVertexDataBase<VertexPos2DTex2D_t> {
	/* ../public/rendersystem/vertexdata.h:165 */
	void CVertexDataBase(CVertexDataBase<VertexPos2DTex2D_t>* );
	/* ../public/rendersystem/vertexdata.h:194 */
	void ~CVertexDataBase(CVertexDataBase<VertexPos2DTex2D_t>* );
	/* ../public/rendersystem/vertexdata.h:239 */
	int VertexCount(const CVertexDataBase<VertexPos2DTex2D_t>* );
	/* ../public/rendersystem/vertexdata.h:229 */
	int GetBufferVertexCount(const CVertexDataBase<VertexPos2DTex2D_t>* );
	/* ../public/rendersystem/vertexdata.h:270 */
	void AdvanceVertex(CVertexDataBase<VertexPos2DTex2D_t>* );
	/* ../public/rendersystem/vertexdata.h:249 */
	void AdvanceVertexCount(CVertexDataBase<VertexPos2DTex2D_t>* , int);
	/* ../public/rendersystem/vertexdata.h:260 */
	IRenderContext* GetRenderContext(CVertexDataBase<VertexPos2DTex2D_t>* );
	/* ../public/rendersystem/vertexdata.h:113 */
	VertexPos2DTex2D_t* operator->(CVertexDataBase<VertexPos2DTex2D_t>* );
	/* ../public/rendersystem/vertexdata.h:114 */
	const VertexPos2DTex2D_t* operator->(const CVertexDataBase<VertexPos2DTex2D_t>* );
	/* ../public/rendersystem/vertexdata.h:205 */
	VertexPos2DTex2D_t& CurrentVertex(CVertexDataBase<VertexPos2DTex2D_t>* );
	/* ../public/rendersystem/vertexdata.h:219 */
	VertexPos2DTex2D_t* Base(const CVertexDataBase<VertexPos2DTex2D_t>* );
protected:
	/* ../public/rendersystem/vertexdata.h:175 */
	void ClearVertexFields(CVertexDataBase<VertexPos2DTex2D_t>* );
	VertexPos2DTex2D_t m_Scratch; /* 0 16 */
	VertexPos2DTex2D_t * m_pMemory; /* 16 8 */
	int m_nVertexCount; /* 24 4 */
	int m_nVertexIncrement; /* 28 4 */
	IRenderContext * m_pRenderContext; /* 32 8 */
	int m_nMaxVertexCount; /* 40 4 */
	uint32 m_nBufferVertexCount:30; /* 44: 0 4 */
	uint32 m_bShouldDeallocate:1; /* 44:30 4 */
	uint32 m_bBufferInstalled:1; /* 44:31 4 */
} __attribute__((__aligned__(16)));

// <033A57D9> ../public/rendersystem/vertexdata.h:89
// member functions: 12
// member variables: 9
// class size: 48
class CVertexDataBase<Vector> {
	/* ../public/rendersystem/vertexdata.h:165 */
	void CVertexDataBase(CVertexDataBase<Vector>* );
	/* ../public/rendersystem/vertexdata.h:194 */
	void ~CVertexDataBase(CVertexDataBase<Vector>* );
	/* ../public/rendersystem/vertexdata.h:239 */
	int VertexCount(const CVertexDataBase<Vector>* );
	/* ../public/rendersystem/vertexdata.h:229 */
	int GetBufferVertexCount(const CVertexDataBase<Vector>* );
	/* ../public/rendersystem/vertexdata.h:270 */
	void AdvanceVertex(CVertexDataBase<Vector>* );
	/* ../public/rendersystem/vertexdata.h:249 */
	void AdvanceVertexCount(CVertexDataBase<Vector>* , int);
	/* ../public/rendersystem/vertexdata.h:260 */
	IRenderContext* GetRenderContext(CVertexDataBase<Vector>* );
	/* ../public/rendersystem/vertexdata.h:113 */
	Vector* operator->(CVertexDataBase<Vector>* );
	/* ../public/rendersystem/vertexdata.h:114 */
	const Vector* operator->(const CVertexDataBase<Vector>* );
	/* ../public/rendersystem/vertexdata.h:205 */
	Vector& CurrentVertex(CVertexDataBase<Vector>* );
	/* ../public/rendersystem/vertexdata.h:219 */
	Vector* Base(const CVertexDataBase<Vector>* );
protected:
	/* ../public/rendersystem/vertexdata.h:175 */
	void ClearVertexFields(CVertexDataBase<Vector>* );
	Vector m_Scratch; /* 0 12 */
	Vector * m_pMemory; /* 16 8 */
	int m_nVertexCount; /* 24 4 */
	int m_nVertexIncrement; /* 28 4 */
	IRenderContext * m_pRenderContext; /* 32 8 */
	int m_nMaxVertexCount; /* 40 4 */
	uint32 m_nBufferVertexCount:30; /* 44: 0 4 */
	uint32 m_bShouldDeallocate:1; /* 44:30 4 */
	uint32 m_bBufferInstalled:1; /* 44:31 4 */
} __attribute__((__aligned__(16)));

// <033A5DAA> ../public/rendersystem/vertexdata.h:89
// member functions: 12
// member variables: 9
// class size: 48
class CVertexDataBase<Vertex2DPos_t> {
	/* ../public/rendersystem/vertexdata.h:165 */
	void CVertexDataBase(CVertexDataBase<Vertex2DPos_t>* );
	/* ../public/rendersystem/vertexdata.h:194 */
	void ~CVertexDataBase(CVertexDataBase<Vertex2DPos_t>* );
	/* ../public/rendersystem/vertexdata.h:239 */
	int VertexCount(const CVertexDataBase<Vertex2DPos_t>* );
	/* ../public/rendersystem/vertexdata.h:229 */
	int GetBufferVertexCount(const CVertexDataBase<Vertex2DPos_t>* );
	/* ../public/rendersystem/vertexdata.h:270 */
	void AdvanceVertex(CVertexDataBase<Vertex2DPos_t>* );
	/* ../public/rendersystem/vertexdata.h:249 */
	void AdvanceVertexCount(CVertexDataBase<Vertex2DPos_t>* , int);
	/* ../public/rendersystem/vertexdata.h:260 */
	IRenderContext* GetRenderContext(CVertexDataBase<Vertex2DPos_t>* );
	/* ../public/rendersystem/vertexdata.h:113 */
	Vertex2DPos_t* operator->(CVertexDataBase<Vertex2DPos_t>* );
	/* ../public/rendersystem/vertexdata.h:114 */
	const Vertex2DPos_t* operator->(const CVertexDataBase<Vertex2DPos_t>* );
	/* ../public/rendersystem/vertexdata.h:205 */
	Vertex2DPos_t& CurrentVertex(CVertexDataBase<Vertex2DPos_t>* );
	/* ../public/rendersystem/vertexdata.h:219 */
	Vertex2DPos_t* Base(const CVertexDataBase<Vertex2DPos_t>* );
protected:
	/* ../public/rendersystem/vertexdata.h:175 */
	void ClearVertexFields(CVertexDataBase<Vertex2DPos_t>* );
	Vertex2DPos_t m_Scratch; /* 0 8 */
	Vertex2DPos_t * m_pMemory; /* 8 8 */
	int m_nVertexCount; /* 16 4 */
	int m_nVertexIncrement; /* 20 4 */
	IRenderContext * m_pRenderContext; /* 24 8 */
	int m_nMaxVertexCount; /* 32 4 */
	uint32 m_nBufferVertexCount:30; /* 36: 0 4 */
	uint32 m_bShouldDeallocate:1; /* 36:30 4 */
	uint32 m_bBufferInstalled:1; /* 36:31 4 */
} __attribute__((__aligned__(16)));

// <0392539A> ../public/rendersystem/vertexdata.h:89
// member functions: 27
// member variables: 9
// class size: 96
class CVertexDataBase<VertexUVPosColorNormalAndTangent_t> {
	/* ../public/rendersystem/vertexdata.h:165 */
	void CVertexDataBase(CVertexDataBase<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/rendersystem/vertexdata.h:194 */
	void ~CVertexDataBase(CVertexDataBase<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/rendersystem/vertexdata.h:239 */
	int VertexCount(const CVertexDataBase<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/rendersystem/vertexdata.h:229 */
	int GetBufferVertexCount(const CVertexDataBase<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/rendersystem/vertexdata.h:270 */
	void AdvanceVertex(CVertexDataBase<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/rendersystem/vertexdata.h:249 */
	void AdvanceVertexCount(CVertexDataBase<VertexUVPosColorNormalAndTangent_t>* , int);
	/* ../public/rendersystem/vertexdata.h:260 */
	IRenderContext* GetRenderContext(CVertexDataBase<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/rendersystem/vertexdata.h:113 */
	VertexUVPosColorNormalAndTangent_t* operator->(CVertexDataBase<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/rendersystem/vertexdata.h:114 */
	const VertexUVPosColorNormalAndTangent_t* operator->(const CVertexDataBase<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/rendersystem/vertexdata.h:205 */
	VertexUVPosColorNormalAndTangent_t& CurrentVertex(CVertexDataBase<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/rendersystem/vertexdata.h:219 */
	VertexUVPosColorNormalAndTangent_t* Base(const CVertexDataBase<VertexUVPosColorNormalAndTangent_t>* );
protected:
	/* ../public/rendersystem/vertexdata.h:175 */
	void ClearVertexFields(CVertexDataBase<VertexUVPosColorNormalAndTangent_t>* );
	VertexUVPosColorNormalAndTangent_t m_Scratch; /* 0 52 */
	VertexUVPosColorNormalAndTangent_t * m_pMemory; /* 56 8 */
	int m_nVertexCount; /* 64 4 */
	int m_nVertexIncrement; /* 68 4 */
	IRenderContext * m_pRenderContext; /* 72 8 */
	int m_nMaxVertexCount; /* 80 4 */
	uint32 m_nBufferVertexCount:30; /* 84: 0 4 */
	uint32 m_bShouldDeallocate:1; /* 84:30 4 */
	uint32 m_bBufferInstalled:1; /* 84:31 4 */
	void CVertexDataBase(class CVertexDataBase<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN15CVertexDataBaseI34VertexUVPosColorNormalAndTangent_tEC4Ev */
	void ~CVertexDataBase(class CVertexDataBase<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN15CVertexDataBaseI34VertexUVPosColorNormalAndTangent_tED4Ev */
	int VertexCount(const class CVertexDataBase<VertexUVPosColorNormalAndTangent_t>  *); /* linkage=_ZNK15CVertexDataBaseI34VertexUVPosColorNormalAndTangent_tE11VertexCountEv */
	int GetBufferVertexCount(const class CVertexDataBase<VertexUVPosColorNormalAndTangent_t>  *); /* linkage=_ZNK15CVertexDataBaseI34VertexUVPosColorNormalAndTangent_tE20GetBufferVertexCountEv */
	void AdvanceVertex(class CVertexDataBase<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN15CVertexDataBaseI34VertexUVPosColorNormalAndTangent_tE13AdvanceVertexEv */
	void AdvanceVertexCount(class CVertexDataBase<VertexUVPosColorNormalAndTangent_t> *, int); /* linkage=_ZN15CVertexDataBaseI34VertexUVPosColorNormalAndTangent_tE18AdvanceVertexCountEi */
	class IRenderContext * GetRenderContext(class CVertexDataBase<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN15CVertexDataBaseI34VertexUVPosColorNormalAndTangent_tE16GetRenderContextEv */
	class VertexUVPosColorNormalAndTangent_t * operator->(class CVertexDataBase<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN15CVertexDataBaseI34VertexUVPosColorNormalAndTangent_tEptEv */
	const class VertexUVPosColorNormalAndTangent_t  * operator->(const class CVertexDataBase<VertexUVPosColorNormalAndTangent_t>  *); /* linkage=_ZNK15CVertexDataBaseI34VertexUVPosColorNormalAndTangent_tEptEv */
	class VertexUVPosColorNormalAndTangent_t & CurrentVertex(class CVertexDataBase<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN15CVertexDataBaseI34VertexUVPosColorNormalAndTangent_tE13CurrentVertexEv */
	class VertexUVPosColorNormalAndTangent_t * Base(const class CVertexDataBase<VertexUVPosColorNormalAndTangent_t>  *); /* linkage=_ZNK15CVertexDataBaseI34VertexUVPosColorNormalAndTangent_tE4BaseEv */
	void ClearVertexFields(class CVertexDataBase<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN15CVertexDataBaseI34VertexUVPosColorNormalAndTangent_tE17ClearVertexFieldsEv */
	void TexCoord2f<int, float, float>(class CVertexDataBase<VertexUVPosColorNormalAndTangent_t> *, int, float, float); /* linkage=_ZN15CVertexDataBaseI34VertexUVPosColorNormalAndTangent_tE10TexCoord2fIiffEEvT_T0_T1_ */
	void Normal<Vector>(class CVertexDataBase<VertexUVPosColorNormalAndTangent_t> *, class Vector); /* linkage=_ZN15CVertexDataBaseI34VertexUVPosColorNormalAndTangent_tE6NormalI6VectorEEvT_ */
	void Position<Vector>(class CVertexDataBase<VertexUVPosColorNormalAndTangent_t> *, class Vector); /* linkage=_ZN15CVertexDataBaseI34VertexUVPosColorNormalAndTangent_tE8PositionI6VectorEEvT_ */
} __attribute__((__aligned__(16)));

// <03C85B5F> ../public/rendersystem/vertexdata.h:89
// member functions: 12
// member variables: 9
// class size: 64
class CVertexDataBase<FullscreenQuadVertex_t> {
	/* ../public/rendersystem/vertexdata.h:165 */
	void CVertexDataBase(CVertexDataBase<FullscreenQuadVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:194 */
	void ~CVertexDataBase(CVertexDataBase<FullscreenQuadVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:239 */
	int VertexCount(const CVertexDataBase<FullscreenQuadVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:229 */
	int GetBufferVertexCount(const CVertexDataBase<FullscreenQuadVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:270 */
	void AdvanceVertex(CVertexDataBase<FullscreenQuadVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:249 */
	void AdvanceVertexCount(CVertexDataBase<FullscreenQuadVertex_t>* , int);
	/* ../public/rendersystem/vertexdata.h:260 */
	IRenderContext* GetRenderContext(CVertexDataBase<FullscreenQuadVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:113 */
	FullscreenQuadVertex_t* operator->(CVertexDataBase<FullscreenQuadVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:114 */
	const FullscreenQuadVertex_t* operator->(const CVertexDataBase<FullscreenQuadVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:205 */
	FullscreenQuadVertex_t& CurrentVertex(CVertexDataBase<FullscreenQuadVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:219 */
	FullscreenQuadVertex_t* Base(const CVertexDataBase<FullscreenQuadVertex_t>* );
protected:
	/* ../public/rendersystem/vertexdata.h:175 */
	void ClearVertexFields(CVertexDataBase<FullscreenQuadVertex_t>* );
	FullscreenQuadVertex_t m_Scratch; /* 0 24 */
	FullscreenQuadVertex_t * m_pMemory; /* 24 8 */
	int m_nVertexCount; /* 32 4 */
	int m_nVertexIncrement; /* 36 4 */
	IRenderContext * m_pRenderContext; /* 40 8 */
	int m_nMaxVertexCount; /* 48 4 */
	uint32 m_nBufferVertexCount:30; /* 52: 0 4 */
	uint32 m_bShouldDeallocate:1; /* 52:30 4 */
	uint32 m_bBufferInstalled:1; /* 52:31 4 */
} __attribute__((__aligned__(16)));

// <06449F8F> ../public/rendersystem/vertexdata.h:89
// member functions: 13
// member variables: 9
// class size: 48
class CVertexDataBase<VertexPos_t> {
	/* ../public/rendersystem/vertexdata.h:165 */
	void CVertexDataBase(CVertexDataBase<VertexPos_t>* );
	/* ../public/rendersystem/vertexdata.h:194 */
	void ~CVertexDataBase(CVertexDataBase<VertexPos_t>* );
	/* ../public/rendersystem/vertexdata.h:239 */
	int VertexCount(const CVertexDataBase<VertexPos_t>* );
	/* ../public/rendersystem/vertexdata.h:229 */
	int GetBufferVertexCount(const CVertexDataBase<VertexPos_t>* );
	/* ../public/rendersystem/vertexdata.h:270 */
	void AdvanceVertex(CVertexDataBase<VertexPos_t>* );
	/* ../public/rendersystem/vertexdata.h:249 */
	void AdvanceVertexCount(CVertexDataBase<VertexPos_t>* , int);
	/* ../public/rendersystem/vertexdata.h:260 */
	IRenderContext* GetRenderContext(CVertexDataBase<VertexPos_t>* );
	/* ../public/rendersystem/vertexdata.h:113 */
	VertexPos_t* operator->(CVertexDataBase<VertexPos_t>* );
	/* ../public/rendersystem/vertexdata.h:114 */
	const VertexPos_t* operator->(const CVertexDataBase<VertexPos_t>* );
	/* ../public/rendersystem/vertexdata.h:205 */
	VertexPos_t& CurrentVertex(CVertexDataBase<VertexPos_t>* );
	/* ../public/rendersystem/vertexdata.h:219 */
	VertexPos_t* Base(const CVertexDataBase<VertexPos_t>* );
protected:
	/* ../public/rendersystem/vertexdata.h:175 */
	void ClearVertexFields(CVertexDataBase<VertexPos_t>* );
	VertexPos_t m_Scratch; /* 0 12 */
	VertexPos_t * m_pMemory; /* 16 8 */
	int m_nVertexCount; /* 24 4 */
	int m_nVertexIncrement; /* 28 4 */
	IRenderContext * m_pRenderContext; /* 32 8 */
	int m_nMaxVertexCount; /* 40 4 */
	uint32 m_nBufferVertexCount:30; /* 44: 0 4 */
	uint32 m_bShouldDeallocate:1; /* 44:30 4 */
	uint32 m_bBufferInstalled:1; /* 44:31 4 */
	/* ../public/rendersystem/vertexdata.h:127 */
	void Position<Vector>(CVertexDataBase<VertexPos_t>* , Vector);
} __attribute__((__aligned__(16)));

// <0644A44D> ../public/rendersystem/vertexdata.h:89
// member functions: 26
// member variables: 9
// class size: 48
class CVertexDataBase<VertexColorPos_t> {
	/* ../public/rendersystem/vertexdata.h:165 */
	void CVertexDataBase(CVertexDataBase<VertexColorPos_t>* );
	/* ../public/rendersystem/vertexdata.h:194 */
	void ~CVertexDataBase(CVertexDataBase<VertexColorPos_t>* );
	/* ../public/rendersystem/vertexdata.h:239 */
	int VertexCount(const CVertexDataBase<VertexColorPos_t>* );
	/* ../public/rendersystem/vertexdata.h:229 */
	int GetBufferVertexCount(const CVertexDataBase<VertexColorPos_t>* );
	/* ../public/rendersystem/vertexdata.h:270 */
	void AdvanceVertex(CVertexDataBase<VertexColorPos_t>* );
	/* ../public/rendersystem/vertexdata.h:249 */
	void AdvanceVertexCount(CVertexDataBase<VertexColorPos_t>* , int);
	/* ../public/rendersystem/vertexdata.h:260 */
	IRenderContext* GetRenderContext(CVertexDataBase<VertexColorPos_t>* );
	/* ../public/rendersystem/vertexdata.h:113 */
	VertexColorPos_t* operator->(CVertexDataBase<VertexColorPos_t>* );
	/* ../public/rendersystem/vertexdata.h:114 */
	const VertexColorPos_t* operator->(const CVertexDataBase<VertexColorPos_t>* );
	/* ../public/rendersystem/vertexdata.h:205 */
	VertexColorPos_t& CurrentVertex(CVertexDataBase<VertexColorPos_t>* );
	/* ../public/rendersystem/vertexdata.h:219 */
	VertexColorPos_t* Base(const CVertexDataBase<VertexColorPos_t>* );
protected:
	/* ../public/rendersystem/vertexdata.h:175 */
	void ClearVertexFields(CVertexDataBase<VertexColorPos_t>* );
	VertexColorPos_t m_Scratch; /* 0 16 */
	VertexColorPos_t * m_pMemory; /* 16 8 */
	int m_nVertexCount; /* 24 4 */
	int m_nVertexIncrement; /* 28 4 */
	IRenderContext * m_pRenderContext; /* 32 8 */
	int m_nMaxVertexCount; /* 40 4 */
	uint32 m_nBufferVertexCount:30; /* 44: 0 4 */
	uint32 m_bShouldDeallocate:1; /* 44:30 4 */
	uint32 m_bBufferInstalled:1; /* 44:31 4 */
	/* ../public/rendersystem/vertexdata.h:127 */
	void Position<Vector>(CVertexDataBase<VertexColorPos_t>* , Vector);
	void CVertexDataBase(class CVertexDataBase<VertexColorPos_t> *); /* linkage=_ZN15CVertexDataBaseI16VertexColorPos_tEC4Ev */
	void ~CVertexDataBase(class CVertexDataBase<VertexColorPos_t> *); /* linkage=_ZN15CVertexDataBaseI16VertexColorPos_tED4Ev */
	int VertexCount(const class CVertexDataBase<VertexColorPos_t>  *); /* linkage=_ZNK15CVertexDataBaseI16VertexColorPos_tE11VertexCountEv */
	int GetBufferVertexCount(const class CVertexDataBase<VertexColorPos_t>  *); /* linkage=_ZNK15CVertexDataBaseI16VertexColorPos_tE20GetBufferVertexCountEv */
	void AdvanceVertex(class CVertexDataBase<VertexColorPos_t> *); /* linkage=_ZN15CVertexDataBaseI16VertexColorPos_tE13AdvanceVertexEv */
	void AdvanceVertexCount(class CVertexDataBase<VertexColorPos_t> *, int); /* linkage=_ZN15CVertexDataBaseI16VertexColorPos_tE18AdvanceVertexCountEi */
	class IRenderContext * GetRenderContext(class CVertexDataBase<VertexColorPos_t> *); /* linkage=_ZN15CVertexDataBaseI16VertexColorPos_tE16GetRenderContextEv */
	class VertexColorPos_t * operator->(class CVertexDataBase<VertexColorPos_t> *); /* linkage=_ZN15CVertexDataBaseI16VertexColorPos_tEptEv */
	const class VertexColorPos_t  * operator->(const class CVertexDataBase<VertexColorPos_t>  *); /* linkage=_ZNK15CVertexDataBaseI16VertexColorPos_tEptEv */
	class VertexColorPos_t & CurrentVertex(class CVertexDataBase<VertexColorPos_t> *); /* linkage=_ZN15CVertexDataBaseI16VertexColorPos_tE13CurrentVertexEv */
	class VertexColorPos_t * Base(const class CVertexDataBase<VertexColorPos_t>  *); /* linkage=_ZNK15CVertexDataBaseI16VertexColorPos_tE4BaseEv */
	void ClearVertexFields(class CVertexDataBase<VertexColorPos_t> *); /* linkage=_ZN15CVertexDataBaseI16VertexColorPos_tE17ClearVertexFieldsEv */
	void Position<Vector>(class CVertexDataBase<VertexColorPos_t> *, class Vector); /* linkage=_ZN15CVertexDataBaseI16VertexColorPos_tE8PositionI6VectorEEvT_ */
} __attribute__((__aligned__(16)));

// <0644A910> ../public/rendersystem/vertexdata.h:89
// member functions: 30
// member variables: 9
// class size: 96
class CVertexDataBase<VertexUVPosColorNormalAndTangent_t> {
	/* ../public/rendersystem/vertexdata.h:165 */
	void CVertexDataBase(CVertexDataBase<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/rendersystem/vertexdata.h:194 */
	void ~CVertexDataBase(CVertexDataBase<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/rendersystem/vertexdata.h:239 */
	int VertexCount(const CVertexDataBase<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/rendersystem/vertexdata.h:229 */
	int GetBufferVertexCount(const CVertexDataBase<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/rendersystem/vertexdata.h:270 */
	void AdvanceVertex(CVertexDataBase<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/rendersystem/vertexdata.h:249 */
	void AdvanceVertexCount(CVertexDataBase<VertexUVPosColorNormalAndTangent_t>* , int);
	/* ../public/rendersystem/vertexdata.h:260 */
	IRenderContext* GetRenderContext(CVertexDataBase<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/rendersystem/vertexdata.h:113 */
	VertexUVPosColorNormalAndTangent_t* operator->(CVertexDataBase<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/rendersystem/vertexdata.h:114 */
	const VertexUVPosColorNormalAndTangent_t* operator->(const CVertexDataBase<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/rendersystem/vertexdata.h:205 */
	VertexUVPosColorNormalAndTangent_t& CurrentVertex(CVertexDataBase<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/rendersystem/vertexdata.h:219 */
	VertexUVPosColorNormalAndTangent_t* Base(const CVertexDataBase<VertexUVPosColorNormalAndTangent_t>* );
protected:
	/* ../public/rendersystem/vertexdata.h:175 */
	void ClearVertexFields(CVertexDataBase<VertexUVPosColorNormalAndTangent_t>* );
	VertexUVPosColorNormalAndTangent_t m_Scratch; /* 0 52 */
	VertexUVPosColorNormalAndTangent_t * m_pMemory; /* 56 8 */
	int m_nVertexCount; /* 64 4 */
	int m_nVertexIncrement; /* 68 4 */
	IRenderContext * m_pRenderContext; /* 72 8 */
	int m_nMaxVertexCount; /* 80 4 */
	uint32 m_nBufferVertexCount:30; /* 84: 0 4 */
	uint32 m_bShouldDeallocate:1; /* 84:30 4 */
	uint32 m_bBufferInstalled:1; /* 84:31 4 */
	/* ../public/rendersystem/vertexdata.h:129 */
	void TexCoord2f<int, float, float>(CVertexDataBase<VertexUVPosColorNormalAndTangent_t>* , int, float, float);
	/* ../public/rendersystem/vertexdata.h:128 */
	void Normal<Vector>(CVertexDataBase<VertexUVPosColorNormalAndTangent_t>* , Vector);
	/* ../public/rendersystem/vertexdata.h:127 */
	void Position<Vector>(CVertexDataBase<VertexUVPosColorNormalAndTangent_t>* , Vector);
	void CVertexDataBase(class CVertexDataBase<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN15CVertexDataBaseI34VertexUVPosColorNormalAndTangent_tEC4Ev */
	void ~CVertexDataBase(class CVertexDataBase<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN15CVertexDataBaseI34VertexUVPosColorNormalAndTangent_tED4Ev */
	int VertexCount(const class CVertexDataBase<VertexUVPosColorNormalAndTangent_t>  *); /* linkage=_ZNK15CVertexDataBaseI34VertexUVPosColorNormalAndTangent_tE11VertexCountEv */
	int GetBufferVertexCount(const class CVertexDataBase<VertexUVPosColorNormalAndTangent_t>  *); /* linkage=_ZNK15CVertexDataBaseI34VertexUVPosColorNormalAndTangent_tE20GetBufferVertexCountEv */
	void AdvanceVertex(class CVertexDataBase<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN15CVertexDataBaseI34VertexUVPosColorNormalAndTangent_tE13AdvanceVertexEv */
	void AdvanceVertexCount(class CVertexDataBase<VertexUVPosColorNormalAndTangent_t> *, int); /* linkage=_ZN15CVertexDataBaseI34VertexUVPosColorNormalAndTangent_tE18AdvanceVertexCountEi */
	class IRenderContext * GetRenderContext(class CVertexDataBase<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN15CVertexDataBaseI34VertexUVPosColorNormalAndTangent_tE16GetRenderContextEv */
	class VertexUVPosColorNormalAndTangent_t * operator->(class CVertexDataBase<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN15CVertexDataBaseI34VertexUVPosColorNormalAndTangent_tEptEv */
	const class VertexUVPosColorNormalAndTangent_t  * operator->(const class CVertexDataBase<VertexUVPosColorNormalAndTangent_t>  *); /* linkage=_ZNK15CVertexDataBaseI34VertexUVPosColorNormalAndTangent_tEptEv */
	class VertexUVPosColorNormalAndTangent_t & CurrentVertex(class CVertexDataBase<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN15CVertexDataBaseI34VertexUVPosColorNormalAndTangent_tE13CurrentVertexEv */
	class VertexUVPosColorNormalAndTangent_t * Base(const class CVertexDataBase<VertexUVPosColorNormalAndTangent_t>  *); /* linkage=_ZNK15CVertexDataBaseI34VertexUVPosColorNormalAndTangent_tE4BaseEv */
	void ClearVertexFields(class CVertexDataBase<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN15CVertexDataBaseI34VertexUVPosColorNormalAndTangent_tE17ClearVertexFieldsEv */
	void TexCoord2f<int, float, float>(class CVertexDataBase<VertexUVPosColorNormalAndTangent_t> *, int, float, float); /* linkage=_ZN15CVertexDataBaseI34VertexUVPosColorNormalAndTangent_tE10TexCoord2fIiffEEvT_T0_T1_ */
	void Normal<Vector>(class CVertexDataBase<VertexUVPosColorNormalAndTangent_t> *, class Vector); /* linkage=_ZN15CVertexDataBaseI34VertexUVPosColorNormalAndTangent_tE6NormalI6VectorEEvT_ */
	void Position<Vector>(class CVertexDataBase<VertexUVPosColorNormalAndTangent_t> *, class Vector); /* linkage=_ZN15CVertexDataBaseI34VertexUVPosColorNormalAndTangent_tE8PositionI6VectorEEvT_ */
} __attribute__((__aligned__(16)));

// <008322F4> ../public/rendersystem/vertexdata.h:89
// member functions: 12
// member variables: 9
// class size: 80
class CVertexDataBase<ResolveVertex_t> {
	/* ../public/rendersystem/vertexdata.h:165 */
	void CVertexDataBase(CVertexDataBase<ResolveVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:194 */
	void ~CVertexDataBase(CVertexDataBase<ResolveVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:239 */
	int VertexCount(const CVertexDataBase<ResolveVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:229 */
	int GetBufferVertexCount(const CVertexDataBase<ResolveVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:270 */
	void AdvanceVertex(CVertexDataBase<ResolveVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:249 */
	void AdvanceVertexCount(CVertexDataBase<ResolveVertex_t>* , int);
	/* ../public/rendersystem/vertexdata.h:260 */
	IRenderContext* GetRenderContext(CVertexDataBase<ResolveVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:113 */
	ResolveVertex_t* operator->(CVertexDataBase<ResolveVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:114 */
	const ResolveVertex_t* operator->(const CVertexDataBase<ResolveVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:205 */
	ResolveVertex_t& CurrentVertex(CVertexDataBase<ResolveVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:219 */
	ResolveVertex_t* Base(const CVertexDataBase<ResolveVertex_t>* );
protected:
	/* ../public/rendersystem/vertexdata.h:175 */
	void ClearVertexFields(CVertexDataBase<ResolveVertex_t>* );
	ResolveVertex_t m_Scratch; /* 0 36 */
	ResolveVertex_t * m_pMemory; /* 40 8 */
	int m_nVertexCount; /* 48 4 */
	int m_nVertexIncrement; /* 52 4 */
	IRenderContext * m_pRenderContext; /* 56 8 */
	int m_nMaxVertexCount; /* 64 4 */
	uint32 m_nBufferVertexCount:30; /* 68: 0 4 */
	uint32 m_bShouldDeallocate:1; /* 68:30 4 */
	uint32 m_bBufferInstalled:1; /* 68:31 4 */
} __attribute__((__aligned__(16)));

// <008328FC> ../public/rendersystem/vertexdata.h:89
// member functions: 24
// member variables: 9
// class size: 64
class CVertexDataBase<ClearVertex_t> {
	/* ../public/rendersystem/vertexdata.h:165 */
	void CVertexDataBase(CVertexDataBase<ClearVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:194 */
	void ~CVertexDataBase(CVertexDataBase<ClearVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:239 */
	int VertexCount(const CVertexDataBase<ClearVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:229 */
	int GetBufferVertexCount(const CVertexDataBase<ClearVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:270 */
	void AdvanceVertex(CVertexDataBase<ClearVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:249 */
	void AdvanceVertexCount(CVertexDataBase<ClearVertex_t>* , int);
	/* ../public/rendersystem/vertexdata.h:260 */
	IRenderContext* GetRenderContext(CVertexDataBase<ClearVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:113 */
	ClearVertex_t* operator->(CVertexDataBase<ClearVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:114 */
	const ClearVertex_t* operator->(const CVertexDataBase<ClearVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:205 */
	ClearVertex_t& CurrentVertex(CVertexDataBase<ClearVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:219 */
	ClearVertex_t* Base(const CVertexDataBase<ClearVertex_t>* );
protected:
	/* ../public/rendersystem/vertexdata.h:175 */
	void ClearVertexFields(CVertexDataBase<ClearVertex_t>* );
	ClearVertex_t m_Scratch; /* 0 28 */
	ClearVertex_t * m_pMemory; /* 32 8 */
	int m_nVertexCount; /* 40 4 */
	int m_nVertexIncrement; /* 44 4 */
	IRenderContext * m_pRenderContext; /* 48 8 */
	int m_nMaxVertexCount; /* 56 4 */
	uint32 m_nBufferVertexCount:30; /* 60: 0 4 */
	uint32 m_bShouldDeallocate:1; /* 60:30 4 */
	uint32 m_bBufferInstalled:1; /* 60:31 4 */
	void CVertexDataBase(class CVertexDataBase<ClearVertex_t> *); /* linkage=_ZN15CVertexDataBaseI13ClearVertex_tEC4Ev */
	void ~CVertexDataBase(class CVertexDataBase<ClearVertex_t> *); /* linkage=_ZN15CVertexDataBaseI13ClearVertex_tED4Ev */
	int VertexCount(const class CVertexDataBase<ClearVertex_t>  *); /* linkage=_ZNK15CVertexDataBaseI13ClearVertex_tE11VertexCountEv */
	int GetBufferVertexCount(const class CVertexDataBase<ClearVertex_t>  *); /* linkage=_ZNK15CVertexDataBaseI13ClearVertex_tE20GetBufferVertexCountEv */
	void AdvanceVertex(class CVertexDataBase<ClearVertex_t> *); /* linkage=_ZN15CVertexDataBaseI13ClearVertex_tE13AdvanceVertexEv */
	void AdvanceVertexCount(class CVertexDataBase<ClearVertex_t> *, int); /* linkage=_ZN15CVertexDataBaseI13ClearVertex_tE18AdvanceVertexCountEi */
	class IRenderContext * GetRenderContext(class CVertexDataBase<ClearVertex_t> *); /* linkage=_ZN15CVertexDataBaseI13ClearVertex_tE16GetRenderContextEv */
	class ClearVertex_t * operator->(class CVertexDataBase<ClearVertex_t> *); /* linkage=_ZN15CVertexDataBaseI13ClearVertex_tEptEv */
	const class ClearVertex_t  * operator->(const class CVertexDataBase<ClearVertex_t>  *); /* linkage=_ZNK15CVertexDataBaseI13ClearVertex_tEptEv */
	class ClearVertex_t & CurrentVertex(class CVertexDataBase<ClearVertex_t> *); /* linkage=_ZN15CVertexDataBaseI13ClearVertex_tE13CurrentVertexEv */
	class ClearVertex_t * Base(const class CVertexDataBase<ClearVertex_t>  *); /* linkage=_ZNK15CVertexDataBaseI13ClearVertex_tE4BaseEv */
	void ClearVertexFields(class CVertexDataBase<ClearVertex_t> *); /* linkage=_ZN15CVertexDataBaseI13ClearVertex_tE17ClearVertexFieldsEv */
} __attribute__((__aligned__(16)));

// <00214588> ../public/rendersystem/vertexdata.h:89
// member functions: 24
// member variables: 9
// class size: 64
class CVertexDataBase<SkeletonMeshVertex_t> {
	/* ../public/rendersystem/vertexdata.h:165 */
	void CVertexDataBase(CVertexDataBase<SkeletonMeshVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:194 */
	void ~CVertexDataBase(CVertexDataBase<SkeletonMeshVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:239 */
	int VertexCount(const CVertexDataBase<SkeletonMeshVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:229 */
	int GetBufferVertexCount(const CVertexDataBase<SkeletonMeshVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:270 */
	void AdvanceVertex(CVertexDataBase<SkeletonMeshVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:249 */
	void AdvanceVertexCount(CVertexDataBase<SkeletonMeshVertex_t>* , int);
	/* ../public/rendersystem/vertexdata.h:260 */
	IRenderContext* GetRenderContext(CVertexDataBase<SkeletonMeshVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:113 */
	SkeletonMeshVertex_t* operator->(CVertexDataBase<SkeletonMeshVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:114 */
	const SkeletonMeshVertex_t* operator->(const CVertexDataBase<SkeletonMeshVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:205 */
	SkeletonMeshVertex_t& CurrentVertex(CVertexDataBase<SkeletonMeshVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:219 */
	SkeletonMeshVertex_t* Base(const CVertexDataBase<SkeletonMeshVertex_t>* );
protected:
	/* ../public/rendersystem/vertexdata.h:175 */
	void ClearVertexFields(CVertexDataBase<SkeletonMeshVertex_t>* );
	SkeletonMeshVertex_t m_Scratch; /* 0 28 */
	SkeletonMeshVertex_t * m_pMemory; /* 32 8 */
	int m_nVertexCount; /* 40 4 */
	int m_nVertexIncrement; /* 44 4 */
	IRenderContext * m_pRenderContext; /* 48 8 */
	int m_nMaxVertexCount; /* 56 4 */
	uint32 m_nBufferVertexCount:30; /* 60: 0 4 */
	uint32 m_bShouldDeallocate:1; /* 60:30 4 */
	uint32 m_bBufferInstalled:1; /* 60:31 4 */
	void CVertexDataBase(class CVertexDataBase<SkeletonMeshVertex_t> *); /* linkage=_ZN15CVertexDataBaseI20SkeletonMeshVertex_tEC4Ev */
	void ~CVertexDataBase(class CVertexDataBase<SkeletonMeshVertex_t> *); /* linkage=_ZN15CVertexDataBaseI20SkeletonMeshVertex_tED4Ev */
	int VertexCount(const class CVertexDataBase<SkeletonMeshVertex_t>  *); /* linkage=_ZNK15CVertexDataBaseI20SkeletonMeshVertex_tE11VertexCountEv */
	int GetBufferVertexCount(const class CVertexDataBase<SkeletonMeshVertex_t>  *); /* linkage=_ZNK15CVertexDataBaseI20SkeletonMeshVertex_tE20GetBufferVertexCountEv */
	void AdvanceVertex(class CVertexDataBase<SkeletonMeshVertex_t> *); /* linkage=_ZN15CVertexDataBaseI20SkeletonMeshVertex_tE13AdvanceVertexEv */
	void AdvanceVertexCount(class CVertexDataBase<SkeletonMeshVertex_t> *, int); /* linkage=_ZN15CVertexDataBaseI20SkeletonMeshVertex_tE18AdvanceVertexCountEi */
	class IRenderContext * GetRenderContext(class CVertexDataBase<SkeletonMeshVertex_t> *); /* linkage=_ZN15CVertexDataBaseI20SkeletonMeshVertex_tE16GetRenderContextEv */
	class SkeletonMeshVertex_t * operator->(class CVertexDataBase<SkeletonMeshVertex_t> *); /* linkage=_ZN15CVertexDataBaseI20SkeletonMeshVertex_tEptEv */
	const class SkeletonMeshVertex_t  * operator->(const class CVertexDataBase<SkeletonMeshVertex_t>  *); /* linkage=_ZNK15CVertexDataBaseI20SkeletonMeshVertex_tEptEv */
	class SkeletonMeshVertex_t & CurrentVertex(class CVertexDataBase<SkeletonMeshVertex_t> *); /* linkage=_ZN15CVertexDataBaseI20SkeletonMeshVertex_tE13CurrentVertexEv */
	class SkeletonMeshVertex_t * Base(const class CVertexDataBase<SkeletonMeshVertex_t>  *); /* linkage=_ZNK15CVertexDataBaseI20SkeletonMeshVertex_tE4BaseEv */
	void ClearVertexFields(class CVertexDataBase<SkeletonMeshVertex_t> *); /* linkage=_ZN15CVertexDataBaseI20SkeletonMeshVertex_tE17ClearVertexFieldsEv */
} __attribute__((__aligned__(16)));

// <00426FD5> ../public/rendersystem/vertexdata.h:89
// member functions: 24
// member variables: 9
// class size: 64
class CVertexDataBase<VertexColorUVPos_t> {
	/* ../public/rendersystem/vertexdata.h:165 */
	void CVertexDataBase(CVertexDataBase<VertexColorUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:194 */
	void ~CVertexDataBase(CVertexDataBase<VertexColorUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:239 */
	int VertexCount(const CVertexDataBase<VertexColorUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:229 */
	int GetBufferVertexCount(const CVertexDataBase<VertexColorUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:270 */
	void AdvanceVertex(CVertexDataBase<VertexColorUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:249 */
	void AdvanceVertexCount(CVertexDataBase<VertexColorUVPos_t>* , int);
	/* ../public/rendersystem/vertexdata.h:260 */
	IRenderContext* GetRenderContext(CVertexDataBase<VertexColorUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:113 */
	VertexColorUVPos_t* operator->(CVertexDataBase<VertexColorUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:114 */
	const VertexColorUVPos_t* operator->(const CVertexDataBase<VertexColorUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:205 */
	VertexColorUVPos_t& CurrentVertex(CVertexDataBase<VertexColorUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:219 */
	VertexColorUVPos_t* Base(const CVertexDataBase<VertexColorUVPos_t>* );
protected:
	/* ../public/rendersystem/vertexdata.h:175 */
	void ClearVertexFields(CVertexDataBase<VertexColorUVPos_t>* );
	VertexColorUVPos_t m_Scratch; /* 0 24 */
	VertexColorUVPos_t * m_pMemory; /* 24 8 */
	int m_nVertexCount; /* 32 4 */
	int m_nVertexIncrement; /* 36 4 */
	IRenderContext * m_pRenderContext; /* 40 8 */
	int m_nMaxVertexCount; /* 48 4 */
	uint32 m_nBufferVertexCount:30; /* 52: 0 4 */
	uint32 m_bShouldDeallocate:1; /* 52:30 4 */
	uint32 m_bBufferInstalled:1; /* 52:31 4 */
	void CVertexDataBase(class CVertexDataBase<VertexColorUVPos_t> *); /* linkage=_ZN15CVertexDataBaseI18VertexColorUVPos_tEC4Ev */
	void ~CVertexDataBase(class CVertexDataBase<VertexColorUVPos_t> *); /* linkage=_ZN15CVertexDataBaseI18VertexColorUVPos_tED4Ev */
	int VertexCount(const class CVertexDataBase<VertexColorUVPos_t>  *); /* linkage=_ZNK15CVertexDataBaseI18VertexColorUVPos_tE11VertexCountEv */
	int GetBufferVertexCount(const class CVertexDataBase<VertexColorUVPos_t>  *); /* linkage=_ZNK15CVertexDataBaseI18VertexColorUVPos_tE20GetBufferVertexCountEv */
	void AdvanceVertex(class CVertexDataBase<VertexColorUVPos_t> *); /* linkage=_ZN15CVertexDataBaseI18VertexColorUVPos_tE13AdvanceVertexEv */
	void AdvanceVertexCount(class CVertexDataBase<VertexColorUVPos_t> *, int); /* linkage=_ZN15CVertexDataBaseI18VertexColorUVPos_tE18AdvanceVertexCountEi */
	class IRenderContext * GetRenderContext(class CVertexDataBase<VertexColorUVPos_t> *); /* linkage=_ZN15CVertexDataBaseI18VertexColorUVPos_tE16GetRenderContextEv */
	class VertexColorUVPos_t * operator->(class CVertexDataBase<VertexColorUVPos_t> *); /* linkage=_ZN15CVertexDataBaseI18VertexColorUVPos_tEptEv */
	const class VertexColorUVPos_t  * operator->(const class CVertexDataBase<VertexColorUVPos_t>  *); /* linkage=_ZNK15CVertexDataBaseI18VertexColorUVPos_tEptEv */
	class VertexColorUVPos_t & CurrentVertex(class CVertexDataBase<VertexColorUVPos_t> *); /* linkage=_ZN15CVertexDataBaseI18VertexColorUVPos_tE13CurrentVertexEv */
	class VertexColorUVPos_t * Base(const class CVertexDataBase<VertexColorUVPos_t>  *); /* linkage=_ZNK15CVertexDataBaseI18VertexColorUVPos_tE4BaseEv */
	void ClearVertexFields(class CVertexDataBase<VertexColorUVPos_t> *); /* linkage=_ZN15CVertexDataBaseI18VertexColorUVPos_tE17ClearVertexFieldsEv */
} __attribute__((__aligned__(16)));

// <064561BA> ../public/rendersystem/vertexdata.h:113
inline void CVertexDataBase<VertexColorPos_t>::operator->()
{
} /* size: 0 */

// <06456112> ../public/rendersystem/vertexdata.h:113
inline void CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::operator->()
{
} /* size: 0 */

// <03C87C1C> ../public/rendersystem/vertexdata.h:113
inline void CVertexDataBase<FullscreenQuadVertex_t>::operator->()
{
} /* size: 0 */

// <03AE82BC> ../public/rendersystem/vertexdata.h:113
inline void CVertexDataBase<VertexUVPos_t>::operator->()
{
} /* size: 0 */

// <03A4D375> ../public/rendersystem/vertexdata.h:113
inline void CVertexDataBase<VertexPos2DTex2D_t>::operator->()
{
} /* size: 0 */

// <033AF602> ../public/rendersystem/vertexdata.h:113
inline void CVertexDataBase<Vector>::operator->()
{
} /* size: 0 */

// <033AF173> ../public/rendersystem/vertexdata.h:113
inline void CVertexDataBase<Vertex2DPos_t>::operator->()
{
} /* size: 0 */

// <03225D14> ../public/rendersystem/vertexdata.h:113
inline void CVertexDataBase<VertexPostProcess_t>::operator->()
{
} /* size: 0 */

// <031275A8> ../public/rendersystem/vertexdata.h:113
inline void CVertexDataBase<VertexWireFrame_t>::operator->()
{
} /* size: 0 */

// <031270A6> ../public/rendersystem/vertexdata.h:113
inline void CVertexDataBase<VertexWireFrame2D_t>::operator->()
{
} /* size: 0 */

// <03126E8D> ../public/rendersystem/vertexdata.h:113
inline void CVertexDataBase<VertexDebugUI_t>::operator->()
{
} /* size: 0 */

// <02EA6342> ../public/rendersystem/vertexdata.h:113
inline void CVertexDataBase<MorphPositionSpeedVertex_t>::operator->()
{
} /* size: 0 */

// <02EA614F> ../public/rendersystem/vertexdata.h:113
inline void CVertexDataBase<MorphNormalWrinkleVertex_t>::operator->()
{
} /* size: 0 */

// <028BB060> ../public/rendersystem/vertexdata.h:113
inline void CVertexDataBase<CQuadRenderer::Vertex_t>::operator->()
{
} /* size: 0 */

// <009F2F64> ../public/rendersystem/vertexdata.h:113
inline void CVertexDataBase<PhysicsDebugVertex_t>::operator->()
{
} /* size: 0 */

// <0083DA29> ../public/rendersystem/vertexdata.h:113
inline void CVertexDataBase<ResolveVertex_t>::operator->()
{
} /* size: 0 */

// <0083D435> ../public/rendersystem/vertexdata.h:113
inline void CVertexDataBase<ClearVertex_t>::operator->()
{
} /* size: 0 */

// <06456234> ../public/rendersystem/vertexdata.h:127
inline void CVertexDataBase<VertexPos_t>::Position<Vector>(Vector Arg1)
{
} /* size: 0 */

// <064561D3> ../public/rendersystem/vertexdata.h:127
inline void CVertexDataBase<VertexColorPos_t>::Position<Vector>(Vector Arg1)
{
} /* size: 0 */

// <06456159> ../public/rendersystem/vertexdata.h:127
inline void CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::Position<Vector>(Vector Arg1)
{
} /* size: 0 */

// <0645612B> ../public/rendersystem/vertexdata.h:128
inline void CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::Normal<Vector>(Vector Arg1)
{
} /* size: 0 */

// <064560BA> ../public/rendersystem/vertexdata.h:129
inline void TexCoord2f<int, float, CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::float>(int Arg1, float Arg2, float Arg3)
{
} /* size: 0 */

// <064524C0> ../public/rendersystem/vertexdata.h:165
void CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::CVertexDataBase()
{
} /* size: 0 */

// <064524A7> ../public/rendersystem/vertexdata.h:165
inline void CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::CVertexDataBase()
{
} /* size: 0 */

// <06452297> ../public/rendersystem/vertexdata.h:165
void CVertexDataBase<VertexColorPos_t>::CVertexDataBase()
{
} /* size: 0 */

// <0645227E> ../public/rendersystem/vertexdata.h:165
inline void CVertexDataBase<VertexColorPos_t>::CVertexDataBase()
{
} /* size: 0 */

// <03C876FD> ../public/rendersystem/vertexdata.h:165
void CVertexDataBase<FullscreenQuadVertex_t>::CVertexDataBase()
{
} /* size: 0 */

// <03C876E4> ../public/rendersystem/vertexdata.h:165
inline void CVertexDataBase<FullscreenQuadVertex_t>::CVertexDataBase()
{
} /* size: 0 */

// <03C17B3C> ../public/rendersystem/vertexdata.h:165
void CVertexDataBase<VertexUVPos_t>::CVertexDataBase()
{
} /* size: 0 */

// <03C17B23> ../public/rendersystem/vertexdata.h:165
inline void CVertexDataBase<VertexUVPos_t>::CVertexDataBase()
{
} /* size: 0 */

// <03A4C304> ../public/rendersystem/vertexdata.h:165
void CVertexDataBase<VertexPos2DTex2D_t>::CVertexDataBase()
{
} /* size: 0 */

// <03A4C2EB> ../public/rendersystem/vertexdata.h:165
inline void CVertexDataBase<VertexPos2DTex2D_t>::CVertexDataBase()
{
} /* size: 0 */

// <033AC966> ../public/rendersystem/vertexdata.h:165
void CVertexDataBase<Vector>::CVertexDataBase()
{
} /* size: 0 */

// <033AC94D> ../public/rendersystem/vertexdata.h:165
inline void CVertexDataBase<Vector>::CVertexDataBase()
{
} /* size: 0 */

// <033AC6A2> ../public/rendersystem/vertexdata.h:165
void CVertexDataBase<Vertex2DPos_t>::CVertexDataBase()
{
} /* size: 0 */

// <033AC689> ../public/rendersystem/vertexdata.h:165
inline void CVertexDataBase<Vertex2DPos_t>::CVertexDataBase()
{
} /* size: 0 */

// <03222681> ../public/rendersystem/vertexdata.h:165
void CVertexDataBase<VertexPostProcess_t>::CVertexDataBase()
{
} /* size: 0 */

// <03222668> ../public/rendersystem/vertexdata.h:165
inline void CVertexDataBase<VertexPostProcess_t>::CVertexDataBase()
{
} /* size: 0 */

// <0312199F> ../public/rendersystem/vertexdata.h:165
void CVertexDataBase<VertexWireFrame_t>::CVertexDataBase()
{
} /* size: 0 */

// <03121986> ../public/rendersystem/vertexdata.h:165
inline void CVertexDataBase<VertexWireFrame_t>::CVertexDataBase()
{
} /* size: 0 */

// <03121626> ../public/rendersystem/vertexdata.h:165
void CVertexDataBase<VertexWireFrame2D_t>::CVertexDataBase()
{
} /* size: 0 */

// <0312160D> ../public/rendersystem/vertexdata.h:165
inline void CVertexDataBase<VertexWireFrame2D_t>::CVertexDataBase()
{
} /* size: 0 */

// <0312136D> ../public/rendersystem/vertexdata.h:165
void CVertexDataBase<VertexDebugUI_t>::CVertexDataBase()
{
} /* size: 0 */

// <03121354> ../public/rendersystem/vertexdata.h:165
inline void CVertexDataBase<VertexDebugUI_t>::CVertexDataBase()
{
} /* size: 0 */

// <02E945D5> ../public/rendersystem/vertexdata.h:165
void CVertexDataBase<MorphPositionSpeedVertex_t>::CVertexDataBase()
{
} /* size: 0 */

// <02E945BC> ../public/rendersystem/vertexdata.h:165
inline void CVertexDataBase<MorphPositionSpeedVertex_t>::CVertexDataBase()
{
} /* size: 0 */

// <02E943E2> ../public/rendersystem/vertexdata.h:165
void CVertexDataBase<MorphNormalWrinkleVertex_t>::CVertexDataBase()
{
} /* size: 0 */

// <02E943C9> ../public/rendersystem/vertexdata.h:165
inline void CVertexDataBase<MorphNormalWrinkleVertex_t>::CVertexDataBase()
{
} /* size: 0 */

// <028BAB37> ../public/rendersystem/vertexdata.h:165
void CVertexDataBase<CQuadRenderer::Vertex_t>::CVertexDataBase()
{
} /* size: 0 */

// <028BAB1E> ../public/rendersystem/vertexdata.h:165
inline void CVertexDataBase<CQuadRenderer::Vertex_t>::CVertexDataBase()
{
} /* size: 0 */

// <009EF4A7> ../public/rendersystem/vertexdata.h:165
void CVertexDataBase<PhysicsDebugVertex_t>::CVertexDataBase()
{
} /* size: 0 */

// <009EF48E> ../public/rendersystem/vertexdata.h:165
inline void CVertexDataBase<PhysicsDebugVertex_t>::CVertexDataBase()
{
} /* size: 0 */

// <0083B219> ../public/rendersystem/vertexdata.h:165
void CVertexDataBase<ResolveVertex_t>::CVertexDataBase()
{
} /* size: 0 */

// <0083B200> ../public/rendersystem/vertexdata.h:165
inline void CVertexDataBase<ResolveVertex_t>::CVertexDataBase()
{
} /* size: 0 */

// <0083AD90> ../public/rendersystem/vertexdata.h:165
void CVertexDataBase<ClearVertex_t>::CVertexDataBase()
{
} /* size: 0 */

// <0083AD77> ../public/rendersystem/vertexdata.h:165
inline void CVertexDataBase<ClearVertex_t>::CVertexDataBase()
{
} /* size: 0 */

// <00219106> ../public/rendersystem/vertexdata.h:165
void CVertexDataBase<SkeletonMeshVertex_t>::CVertexDataBase()
{
} /* size: 0 */

// <002190ED> ../public/rendersystem/vertexdata.h:165
inline void CVertexDataBase<SkeletonMeshVertex_t>::CVertexDataBase()
{
} /* size: 0 */

// <00431ED7> ../public/rendersystem/vertexdata.h:165
void CVertexDataBase<VertexColorUVPos_t>::CVertexDataBase()
{
} /* size: 0 */

// <00431EBE> ../public/rendersystem/vertexdata.h:165
inline void CVertexDataBase<VertexColorUVPos_t>::CVertexDataBase()
{
} /* size: 0 */

// <0645245E> ../public/rendersystem/vertexdata.h:175
inline void CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::ClearVertexFields()
{
} /* size: 0 */

// <06452235> ../public/rendersystem/vertexdata.h:175
inline void CVertexDataBase<VertexColorPos_t>::ClearVertexFields()
{
} /* size: 0 */

// <03C87590> ../public/rendersystem/vertexdata.h:175
inline void CVertexDataBase<FullscreenQuadVertex_t>::ClearVertexFields()
{
} /* size: 0 */

// <03C17807> ../public/rendersystem/vertexdata.h:175
inline void CVertexDataBase<VertexUVPos_t>::ClearVertexFields()
{
} /* size: 0 */

// <03A4B46C> ../public/rendersystem/vertexdata.h:175
inline void CVertexDataBase<VertexPos2DTex2D_t>::ClearVertexFields()
{
} /* size: 0 */

// <033AAF1D> ../public/rendersystem/vertexdata.h:175
inline void CVertexDataBase<Vector>::ClearVertexFields()
{
} /* size: 0 */

// <033AADB1> ../public/rendersystem/vertexdata.h:175
inline void CVertexDataBase<Vertex2DPos_t>::ClearVertexFields()
{
} /* size: 0 */

// <032201D5> ../public/rendersystem/vertexdata.h:175
inline void CVertexDataBase<VertexPostProcess_t>::ClearVertexFields()
{
} /* size: 0 */

// <0311D88C> ../public/rendersystem/vertexdata.h:175
inline void CVertexDataBase<VertexWireFrame_t>::ClearVertexFields()
{
} /* size: 0 */

// <0311D6E6> ../public/rendersystem/vertexdata.h:175
inline void CVertexDataBase<VertexWireFrame2D_t>::ClearVertexFields()
{
} /* size: 0 */

// <0311D6CD> ../public/rendersystem/vertexdata.h:175
inline void CVertexDataBase<VertexDebugUI_t>::ClearVertexFields()
{
} /* size: 0 */

// <02E244C9> ../public/rendersystem/vertexdata.h:175
inline void CVertexDataBase<MorphPositionSpeedVertex_t>::ClearVertexFields()
{
} /* size: 0 */

// <02E244B0> ../public/rendersystem/vertexdata.h:175
inline void CVertexDataBase<MorphNormalWrinkleVertex_t>::ClearVertexFields()
{
} /* size: 0 */

// <028BA9CC> ../public/rendersystem/vertexdata.h:175
inline void CVertexDataBase<CQuadRenderer::Vertex_t>::ClearVertexFields()
{
} /* size: 0 */

// <009EAF1E> ../public/rendersystem/vertexdata.h:175
inline void CVertexDataBase<PhysicsDebugVertex_t>::ClearVertexFields()
{
} /* size: 0 */

// <00839574> ../public/rendersystem/vertexdata.h:175
inline void CVertexDataBase<ResolveVertex_t>::ClearVertexFields()
{
} /* size: 0 */

// <00837C67> ../public/rendersystem/vertexdata.h:175
inline void CVertexDataBase<ClearVertex_t>::ClearVertexFields()
{
} /* size: 0 */

// <00217EE6> ../public/rendersystem/vertexdata.h:175
inline void CVertexDataBase<SkeletonMeshVertex_t>::ClearVertexFields()
{
} /* size: 0 */

// <0042F6A0> ../public/rendersystem/vertexdata.h:175
inline void CVertexDataBase<VertexColorUVPos_t>::ClearVertexFields()
{
} /* size: 0 */

// <06452490> ../public/rendersystem/vertexdata.h:194
void CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase()
{
} /* size: 0 */

// <06452477> ../public/rendersystem/vertexdata.h:194
inline void CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase()
{
} /* size: 0 */

// <06452267> ../public/rendersystem/vertexdata.h:194
void CVertexDataBase<VertexColorPos_t>::~CVertexDataBase()
{
} /* size: 0 */

// <0645224E> ../public/rendersystem/vertexdata.h:194
inline void CVertexDataBase<VertexColorPos_t>::~CVertexDataBase()
{
} /* size: 0 */

// <03C876C4> ../public/rendersystem/vertexdata.h:194
void CVertexDataBase<FullscreenQuadVertex_t>::~CVertexDataBase()
{
	{
		{
		}
	}
} /* size: 0 */

// <03C87680> ../public/rendersystem/vertexdata.h:194
// variables: 2
inline void CVertexDataBase<FullscreenQuadVertex_t>::~CVertexDataBase()
{
	const char   __FUNCTION__; // 25660
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
} /* size: 0, variables: 1 */

// <03C17E28> ../public/rendersystem/vertexdata.h:194
void CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase()
{
	{
		{
		}
	}
} /* size: 0 */

// <03C17DE6> ../public/rendersystem/vertexdata.h:194
// variables: 2
inline void CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase()
{
	const char   __FUNCTION__; // 59582
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
} /* size: 0, variables: 1 */

// <03C17B04> ../public/rendersystem/vertexdata.h:194
void CVertexDataBase<VertexUVPos_t>::~CVertexDataBase()
{
	{
		{
		}
	}
} /* size: 0 */

// <03C17AC2> ../public/rendersystem/vertexdata.h:194
// variables: 2
inline void CVertexDataBase<VertexUVPos_t>::~CVertexDataBase()
{
	const char   __FUNCTION__; // 59582
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
} /* size: 0, variables: 1 */

// <03AE51B4> ../public/rendersystem/vertexdata.h:194
// variables: 2
inline void CVertexDataBase<VertexUVPos_t>::~CVertexDataBase()
{
	const char   __FUNCTION__; // 16127
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
} /* size: 0, variables: 1 */

// <03A4C2CC> ../public/rendersystem/vertexdata.h:194
void CVertexDataBase<VertexPos2DTex2D_t>::~CVertexDataBase()
{
	{
		{
		}
	}
} /* size: 0 */

// <03A4C289> ../public/rendersystem/vertexdata.h:194
// variables: 2
inline void CVertexDataBase<VertexPos2DTex2D_t>::~CVertexDataBase()
{
	const char   __FUNCTION__; // 12126
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
} /* size: 0, variables: 1 */

// <0392A0F9> ../public/rendersystem/vertexdata.h:194
// variables: 2
inline void CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase()
{
	const char   __FUNCTION__; // 62110
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
} /* size: 0, variables: 1 */

// <033AC92E> ../public/rendersystem/vertexdata.h:194
void CVertexDataBase<Vector>::~CVertexDataBase()
{
	{
		{
		}
	}
} /* size: 0 */

// <033AC8EC> ../public/rendersystem/vertexdata.h:194
// variables: 2
inline void CVertexDataBase<Vector>::~CVertexDataBase()
{
	const char   __FUNCTION__; // 54225
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
} /* size: 0, variables: 1 */

// <033AC66A> ../public/rendersystem/vertexdata.h:194
void CVertexDataBase<Vertex2DPos_t>::~CVertexDataBase()
{
	{
		{
		}
	}
} /* size: 0 */

// <033AC628> ../public/rendersystem/vertexdata.h:194
// variables: 2
inline void CVertexDataBase<Vertex2DPos_t>::~CVertexDataBase()
{
	const char   __FUNCTION__; // 54225
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
} /* size: 0, variables: 1 */

// <033AC4B6> ../public/rendersystem/vertexdata.h:194
// variables: 2
inline void CVertexDataBase<VertexUVPos_t>::~CVertexDataBase()
{
	const char   __FUNCTION__; // 54225
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
} /* size: 0, variables: 1 */

// <03222649> ../public/rendersystem/vertexdata.h:194
void CVertexDataBase<VertexPostProcess_t>::~CVertexDataBase()
{
	{
		{
		}
	}
} /* size: 0 */

// <03222607> ../public/rendersystem/vertexdata.h:194
// variables: 2
inline void CVertexDataBase<VertexPostProcess_t>::~CVertexDataBase()
{
	const char   __FUNCTION__; // 39715
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
} /* size: 0, variables: 1 */

// <032224A3> ../public/rendersystem/vertexdata.h:194
// variables: 2
inline void CVertexDataBase<VertexPos2DTex2D_t>::~CVertexDataBase()
{
	const char   __FUNCTION__; // 39715
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
} /* size: 0, variables: 1 */

// <03121967> ../public/rendersystem/vertexdata.h:194
void CVertexDataBase<VertexWireFrame_t>::~CVertexDataBase()
{
	{
		{
		}
	}
} /* size: 0 */

// <03121925> ../public/rendersystem/vertexdata.h:194
// variables: 2
inline void CVertexDataBase<VertexWireFrame_t>::~CVertexDataBase()
{
	const char   __FUNCTION__; // 39012
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
} /* size: 0, variables: 1 */

// <031215EE> ../public/rendersystem/vertexdata.h:194
void CVertexDataBase<VertexWireFrame2D_t>::~CVertexDataBase()
{
	{
		{
		}
	}
} /* size: 0 */

// <031215AC> ../public/rendersystem/vertexdata.h:194
// variables: 2
inline void CVertexDataBase<VertexWireFrame2D_t>::~CVertexDataBase()
{
	const char   __FUNCTION__; // 39012
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
} /* size: 0, variables: 1 */

// <0311C36B> ../public/rendersystem/vertexdata.h:194
// variables: 2
inline void CVertexDataBase<VertexUVPos_t>::~CVertexDataBase()
{
	const char   __FUNCTION__; // 39012
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
} /* size: 0, variables: 1 */

// <02E9459D> ../public/rendersystem/vertexdata.h:194
void CVertexDataBase<MorphPositionSpeedVertex_t>::~CVertexDataBase()
{
	{
		{
		}
	}
} /* size: 0 */

// <02E9455B> ../public/rendersystem/vertexdata.h:194
// variables: 2
inline void CVertexDataBase<MorphPositionSpeedVertex_t>::~CVertexDataBase()
{
	const char   __FUNCTION__; // 63601
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
} /* size: 0, variables: 1 */

// <02E943AA> ../public/rendersystem/vertexdata.h:194
void CVertexDataBase<MorphNormalWrinkleVertex_t>::~CVertexDataBase()
{
	{
		{
		}
	}
} /* size: 0 */

// <02E94368> ../public/rendersystem/vertexdata.h:194
// variables: 2
inline void CVertexDataBase<MorphNormalWrinkleVertex_t>::~CVertexDataBase()
{
	const char   __FUNCTION__; // 63601
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
} /* size: 0, variables: 1 */

// <028BAAFE> ../public/rendersystem/vertexdata.h:194
void CVertexDataBase<CQuadRenderer::Vertex_t>::~CVertexDataBase()
{
	{
		{
		}
	}
} /* size: 0 */

// <028BAABA> ../public/rendersystem/vertexdata.h:194
// variables: 2
inline void CVertexDataBase<CQuadRenderer::Vertex_t>::~CVertexDataBase()
{
	const char   __FUNCTION__; // 33470
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
} /* size: 0, variables: 1 */

// <009EF46F> ../public/rendersystem/vertexdata.h:194
void CVertexDataBase<PhysicsDebugVertex_t>::~CVertexDataBase()
{
	{
		{
		}
	}
} /* size: 0 */

// <009EF42C> ../public/rendersystem/vertexdata.h:194
// variables: 2
inline void CVertexDataBase<PhysicsDebugVertex_t>::~CVertexDataBase()
{
	const char   __FUNCTION__; // 57716
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
} /* size: 0, variables: 1 */

// <0083B1E1> ../public/rendersystem/vertexdata.h:194
void CVertexDataBase<ResolveVertex_t>::~CVertexDataBase()
{
	{
		{
		}
	}
} /* size: 0 */

// <0083B19F> ../public/rendersystem/vertexdata.h:194
// variables: 2
inline void CVertexDataBase<ResolveVertex_t>::~CVertexDataBase()
{
	const char   __FUNCTION__; // 22994
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
} /* size: 0, variables: 1 */

// <0083AD58> ../public/rendersystem/vertexdata.h:194
void CVertexDataBase<ClearVertex_t>::~CVertexDataBase()
{
	{
		{
		}
	}
} /* size: 0 */

// <0083AD16> ../public/rendersystem/vertexdata.h:194
// variables: 2
inline void CVertexDataBase<ClearVertex_t>::~CVertexDataBase()
{
	const char   __FUNCTION__; // 22994
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
} /* size: 0, variables: 1 */

// <002190CE> ../public/rendersystem/vertexdata.h:194
void CVertexDataBase<SkeletonMeshVertex_t>::~CVertexDataBase()
{
	{
		{
		}
	}
} /* size: 0 */

// <0021908B> ../public/rendersystem/vertexdata.h:194
// variables: 2
inline void CVertexDataBase<SkeletonMeshVertex_t>::~CVertexDataBase()
{
	const char   __FUNCTION__; // 6462
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
} /* size: 0, variables: 1 */

// <00439D70> ../public/rendersystem/vertexdata.h:194
void CVertexDataBase<VertexColorUVPos_t>::~CVertexDataBase()
{
	{
		{
		}
	}
} /* size: 0 */

// <00439D2E> ../public/rendersystem/vertexdata.h:194
// variables: 2
inline void CVertexDataBase<VertexColorUVPos_t>::~CVertexDataBase()
{
	const char   __FUNCTION__; // 58061
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
} /* size: 0, variables: 1 */

// <00439C42> ../public/rendersystem/vertexdata.h:194
// variables: 2
inline void CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase()
{
	const char   __FUNCTION__; // 58061
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
} /* size: 0, variables: 1 */

// <03C1AB1A> ../public/rendersystem/vertexdata.h:205
inline void CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::CurrentVertex()
{
} /* size: 0 */

// <03C1989B> ../public/rendersystem/vertexdata.h:205
inline void CVertexDataBase<VertexUVPos_t>::CurrentVertex()
{
} /* size: 0 */

// <0021A814> ../public/rendersystem/vertexdata.h:205
inline void CVertexDataBase<SkeletonMeshVertex_t>::CurrentVertex()
{
} /* size: 0 */

// <0657D2C9> ../public/rendersystem/vertexdata.h:219
inline void CVertexDataBase<PhysicsDebugVertex_t>::Base()
{
} /* size: 0 */

// <03C18A36> ../public/rendersystem/vertexdata.h:219
inline void CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::Base()
{
} /* size: 0 */

// <03C18535> ../public/rendersystem/vertexdata.h:219
inline void CVertexDataBase<VertexUVPos_t>::Base()
{
} /* size: 0 */

// <00441A18> ../public/rendersystem/vertexdata.h:219
inline void CVertexDataBase<VertexColorUVPos_t>::Base()
{
} /* size: 0 */

// <0657D2E2> ../public/rendersystem/vertexdata.h:229
inline void CVertexDataBase<PhysicsDebugVertex_t>::GetBufferVertexCount()
{
} /* size: 0 */

// <03127248> ../public/rendersystem/vertexdata.h:229
inline void CVertexDataBase<VertexWireFrame_t>::GetBufferVertexCount()
{
} /* size: 0 */

// <03126F8E> ../public/rendersystem/vertexdata.h:229
inline void CVertexDataBase<VertexDebugUI_t>::GetBufferVertexCount()
{
} /* size: 0 */

// <0657D2FB> ../public/rendersystem/vertexdata.h:239
inline void CVertexDataBase<PhysicsDebugVertex_t>::VertexCount()
{
} /* size: 0 */

// <03C1970F> ../public/rendersystem/vertexdata.h:239
inline void CVertexDataBase<VertexUVPos_t>::VertexCount()
{
} /* size: 0 */

// <03C18821> ../public/rendersystem/vertexdata.h:239
inline void CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::VertexCount()
{
} /* size: 0 */

// <03127261> ../public/rendersystem/vertexdata.h:239
inline void CVertexDataBase<VertexWireFrame_t>::VertexCount()
{
} /* size: 0 */

// <03126FA7> ../public/rendersystem/vertexdata.h:239
inline void CVertexDataBase<VertexDebugUI_t>::VertexCount()
{
} /* size: 0 */

// <0657D28B> ../public/rendersystem/vertexdata.h:249
inline void CVertexDataBase<PhysicsDebugVertex_t>::AdvanceVertexCount(int nNumVertices)
{
} /* size: 0 */

// <06456201> ../public/rendersystem/vertexdata.h:270
// variables: 2
inline void CVertexDataBase<VertexPos_t>::AdvanceVertex()
{
	VertexPos_t* pDest; // 286
	VertexPos_t* pSrc; // 287
} /* size: 0, variables: 2 */

// <06456187> ../public/rendersystem/vertexdata.h:270
// variables: 2
inline void CVertexDataBase<VertexColorPos_t>::AdvanceVertex()
{
	VertexColorPos_t* pDest; // 286
	VertexColorPos_t* pSrc; // 287
} /* size: 0, variables: 2 */

// <06456003> ../public/rendersystem/vertexdata.h:270
// variables: 2
inline void CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex()
{
	VertexUVPosColorNormalAndTangent_t* pDest; // 286
	VertexUVPosColorNormalAndTangent_t* pSrc; // 287
} /* size: 0, variables: 2 */

// <03C87B70> ../public/rendersystem/vertexdata.h:270
// variables: 5
inline void CVertexDataBase<FullscreenQuadVertex_t>::AdvanceVertex()
{
	const char   __FUNCTION__; // 25589
	FullscreenQuadVertex_t* pDest; // 286
	FullscreenQuadVertex_t* pSrc; // 287
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 276
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 282
	}
} /* size: 0, variables: 3 */

// <03C1A9BE> ../public/rendersystem/vertexdata.h:270
// variables: 5
inline void CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex()
{
	const char   __FUNCTION__; // 59501
	VertexUVPosColorNormalAndTangent_t* pDest; // 286
	VertexUVPosColorNormalAndTangent_t* pSrc; // 287
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 276
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 282
	}
} /* size: 0, variables: 3 */

// <03C197EA> ../public/rendersystem/vertexdata.h:270
// variables: 5
inline void CVertexDataBase<VertexUVPos_t>::AdvanceVertex()
{
	const char   __FUNCTION__; // 59501
	VertexUVPos_t* pDest; // 286
	VertexUVPos_t* pSrc; // 287
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 276
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 282
	}
} /* size: 0, variables: 3 */

// <03AE81E5> ../public/rendersystem/vertexdata.h:270
// variables: 5
inline void CVertexDataBase<VertexUVPos_t>::AdvanceVertex()
{
	const char   __FUNCTION__; // 16046
	VertexUVPos_t* pDest; // 286
	VertexUVPos_t* pSrc; // 287
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 276
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 282
	}
} /* size: 0, variables: 3 */

// <03A4D2CC> ../public/rendersystem/vertexdata.h:270
// variables: 5
inline void CVertexDataBase<VertexPos2DTex2D_t>::AdvanceVertex()
{
	const char   __FUNCTION__; // 12050
	VertexPos2DTex2D_t* pDest; // 286
	VertexPos2DTex2D_t* pSrc; // 287
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 276
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 282
	}
} /* size: 0, variables: 3 */

// <0392B46A> ../public/rendersystem/vertexdata.h:270
// variables: 5
inline void CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex()
{
	const char   __FUNCTION__; // 62034
	VertexUVPosColorNormalAndTangent_t* pDest; // 286
	VertexUVPosColorNormalAndTangent_t* pSrc; // 287
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 276
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 282
	}
} /* size: 0, variables: 3 */

// <033AF583> ../public/rendersystem/vertexdata.h:270
// variables: 5
inline void CVertexDataBase<Vector>::AdvanceVertex()
{
	const char   __FUNCTION__; // 54144
	Vector* pDest; // 286
	Vector* pSrc; // 287
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 276
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 282
	}
} /* size: 0, variables: 3 */

// <033AF0CD> ../public/rendersystem/vertexdata.h:270
// variables: 5
inline void CVertexDataBase<Vertex2DPos_t>::AdvanceVertex()
{
	const char   __FUNCTION__; // 54144
	Vertex2DPos_t* pDest; // 286
	Vertex2DPos_t* pSrc; // 287
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 276
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 282
	}
} /* size: 0, variables: 3 */

// <033AEE7D> ../public/rendersystem/vertexdata.h:270
// variables: 5
inline void CVertexDataBase<VertexUVPos_t>::AdvanceVertex()
{
	const char   __FUNCTION__; // 54144
	VertexUVPos_t* pDest; // 286
	VertexUVPos_t* pSrc; // 287
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 276
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 282
	}
} /* size: 0, variables: 3 */

// <03225C6D> ../public/rendersystem/vertexdata.h:270
// variables: 5
inline void CVertexDataBase<VertexPostProcess_t>::AdvanceVertex()
{
	const char   __FUNCTION__; // 39634
	VertexPostProcess_t* pDest; // 286
	VertexPostProcess_t* pSrc; // 287
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 276
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 282
	}
} /* size: 0, variables: 3 */

// <03225A94> ../public/rendersystem/vertexdata.h:270
// variables: 5
inline void CVertexDataBase<VertexPos2DTex2D_t>::AdvanceVertex()
{
	const char   __FUNCTION__; // 39634
	VertexPos2DTex2D_t* pDest; // 286
	VertexPos2DTex2D_t* pSrc; // 287
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 276
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 282
	}
} /* size: 0, variables: 3 */

// <031274D5> ../public/rendersystem/vertexdata.h:270
// variables: 5
inline void CVertexDataBase<VertexWireFrame_t>::AdvanceVertex()
{
	const char   __FUNCTION__; // 38936
	VertexWireFrame_t* pDest; // 286
	VertexWireFrame_t* pSrc; // 287
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 276
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 282
	}
} /* size: 0, variables: 3 */

// <03127000> ../public/rendersystem/vertexdata.h:270
// variables: 5
inline void CVertexDataBase<VertexWireFrame2D_t>::AdvanceVertex()
{
	const char   __FUNCTION__; // 38936
	VertexWireFrame2D_t* pDest; // 286
	VertexWireFrame2D_t* pSrc; // 287
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 276
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 282
	}
} /* size: 0, variables: 3 */

// <03126D91> ../public/rendersystem/vertexdata.h:270
// variables: 5
inline void CVertexDataBase<VertexDebugUI_t>::AdvanceVertex()
{
	const char   __FUNCTION__; // 38936
	VertexDebugUI_t* pDest; // 286
	VertexDebugUI_t* pSrc; // 287
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 276
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 282
	}
} /* size: 0, variables: 3 */

// <0311F618> ../public/rendersystem/vertexdata.h:270
// variables: 5
inline void CVertexDataBase<VertexUVPos_t>::AdvanceVertex()
{
	const char   __FUNCTION__; // 38936
	VertexUVPos_t* pDest; // 286
	VertexUVPos_t* pSrc; // 287
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 276
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 282
	}
} /* size: 0, variables: 3 */

// <02EA6276> ../public/rendersystem/vertexdata.h:270
// variables: 5
inline void CVertexDataBase<MorphPositionSpeedVertex_t>::AdvanceVertex()
{
	const char   __FUNCTION__; // 63520
	MorphPositionSpeedVertex_t* pDest; // 286
	MorphPositionSpeedVertex_t* pSrc; // 287
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 276
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 282
	}
} /* size: 0, variables: 3 */

// <02EA60A7> ../public/rendersystem/vertexdata.h:270
// variables: 5
inline void CVertexDataBase<MorphNormalWrinkleVertex_t>::AdvanceVertex()
{
	const char   __FUNCTION__; // 63520
	MorphNormalWrinkleVertex_t* pDest; // 286
	MorphNormalWrinkleVertex_t* pSrc; // 287
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 276
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 282
	}
} /* size: 0, variables: 3 */

// <028BAFB5> ../public/rendersystem/vertexdata.h:270
// variables: 5
inline void CVertexDataBase<CQuadRenderer::Vertex_t>::AdvanceVertex()
{
	const char   __FUNCTION__; // 33399
	Vertex_t* pDest; // 286
	Vertex_t* pSrc; // 287
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 276
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 282
	}
} /* size: 0, variables: 3 */

// <009F2EC1> ../public/rendersystem/vertexdata.h:270
// variables: 5
inline void CVertexDataBase<PhysicsDebugVertex_t>::AdvanceVertex()
{
	const char   __FUNCTION__; // 57635
	PhysicsDebugVertex_t* pDest; // 286
	PhysicsDebugVertex_t* pSrc; // 287
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 276
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 282
	}
} /* size: 0, variables: 3 */

// <0083D95D> ../public/rendersystem/vertexdata.h:270
// variables: 5
inline void CVertexDataBase<ResolveVertex_t>::AdvanceVertex()
{
	const char   __FUNCTION__; // 22913
	ResolveVertex_t* pDest; // 286
	ResolveVertex_t* pSrc; // 287
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 276
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 282
	}
} /* size: 0, variables: 3 */

// <0083D3B7> ../public/rendersystem/vertexdata.h:270
// variables: 5
inline void CVertexDataBase<ClearVertex_t>::AdvanceVertex()
{
	const char   __FUNCTION__; // 22913
	ClearVertex_t* pDest; // 286
	ClearVertex_t* pSrc; // 287
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 276
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 282
	}
} /* size: 0, variables: 3 */

// <0021A76F> ../public/rendersystem/vertexdata.h:270
// variables: 5
inline void CVertexDataBase<SkeletonMeshVertex_t>::AdvanceVertex()
{
	const char   __FUNCTION__; // 6391
	SkeletonMeshVertex_t* pDest; // 286
	SkeletonMeshVertex_t* pSrc; // 287
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 276
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 282
	}
} /* size: 0, variables: 3 */

// <00441BEC> ../public/rendersystem/vertexdata.h:270
// variables: 5
inline void CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex()
{
	const char   __FUNCTION__; // 57985
	VertexUVPosColorNormalAndTangent_t* pDest; // 286
	VertexUVPosColorNormalAndTangent_t* pSrc; // 287
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 276
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 282
	}
} /* size: 0, variables: 3 */

// <009939BB> ../public/rendersystem/vertexdata.h:364
// member functions: 28
// member variables: 2
// class size: 96
class CVertexData<PhysicsDebugVertex_t> : public CVertexDataBase<PhysicsDebugVertex_t> {
public:
	/* class CVertexDataBase<PhysicsDebugVertex_t> <ancestor>; */ /* 0 80 */
	/* ../public/rendersystem/vertexdata.h:420 */
	void CVertexData(CVertexData<PhysicsDebugVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:426 */
	void CVertexData(CVertexData<PhysicsDebugVertex_t>* , PhysicsDebugVertex_t* , int);
	/* ../public/rendersystem/vertexdata.h:433 */
	void CVertexData(CVertexData<PhysicsDebugVertex_t>* , IRenderContext* , VertexBufferHandle_t);
	/* ../public/rendersystem/vertexdata.h:440 */
	void CVertexData(CVertexData<PhysicsDebugVertex_t>* , IRenderContext* , RenderBufferType_t, int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:459 */
	void ~CVertexData(CVertexData<PhysicsDebugVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:466 */
	void Init(CVertexData<PhysicsDebugVertex_t>* , PhysicsDebugVertex_t* , int);
	/* ../public/rendersystem/vertexdata.h:481 */
	void Init(CVertexData<PhysicsDebugVertex_t>* , IRenderContext* , VertexBufferHandle_t);
	/* ../public/rendersystem/vertexdata.h:538 */
	bool Lock(CVertexData<PhysicsDebugVertex_t>* , int);
	/* ../public/rendersystem/vertexdata.h:576 */
	void Unlock(CVertexData<PhysicsDebugVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:605 */
	void Bind(CVertexData<PhysicsDebugVertex_t>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:388 */
	void UnlockAndBind(CVertexData<PhysicsDebugVertex_t>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:517 */
	VertexBufferHandle_t TakeOwnership(CVertexData<PhysicsDebugVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:528 */
	void ReleaseBuffer(CVertexData<PhysicsDebugVertex_t>* );
protected:
	/* ../public/rendersystem/vertexdata.h:502 */
	void Release(CVertexData<PhysicsDebugVertex_t>* );
private:
	VertexBufferHandle_t m_hVertexBuffer; /* 80 8 */
	void CVertexData(class CVertexData<PhysicsDebugVertex_t> *); /* linkage=_ZN11CVertexDataI20PhysicsDebugVertex_tEC4Ev */
	void CVertexData(class CVertexData<PhysicsDebugVertex_t> *, class PhysicsDebugVertex_t *, int); /* linkage=_ZN11CVertexDataI20PhysicsDebugVertex_tEC4EPS0_i */
	void CVertexData(class CVertexData<PhysicsDebugVertex_t> *, class IRenderContext *, VertexBufferHandle_t); /* linkage=_ZN11CVertexDataI20PhysicsDebugVertex_tEC4EP14IRenderContextP22VertexBufferHandle_t__ */
	void CVertexData(class CVertexData<PhysicsDebugVertex_t> *, class IRenderContext *, enum RenderBufferType_t, int, const char  *, const char  *); /* linkage=_ZN11CVertexDataI20PhysicsDebugVertex_tEC4EP14IRenderContext18RenderBufferType_tiPKcS6_ */
	void ~CVertexData(class CVertexData<PhysicsDebugVertex_t> *); /* linkage=_ZN11CVertexDataI20PhysicsDebugVertex_tED4Ev */
	void Init(class CVertexData<PhysicsDebugVertex_t> *, class PhysicsDebugVertex_t *, int); /* linkage=_ZN11CVertexDataI20PhysicsDebugVertex_tE4InitEPS0_i */
	void Init(class CVertexData<PhysicsDebugVertex_t> *, class IRenderContext *, VertexBufferHandle_t); /* linkage=_ZN11CVertexDataI20PhysicsDebugVertex_tE4InitEP14IRenderContextP22VertexBufferHandle_t__ */
	bool Lock(class CVertexData<PhysicsDebugVertex_t> *, int); /* linkage=_ZN11CVertexDataI20PhysicsDebugVertex_tE4LockEi */
	void Unlock(class CVertexData<PhysicsDebugVertex_t> *); /* linkage=_ZN11CVertexDataI20PhysicsDebugVertex_tE6UnlockEv */
	void Bind(class CVertexData<PhysicsDebugVertex_t> *, int, int, int); /* linkage=_ZN11CVertexDataI20PhysicsDebugVertex_tE4BindEiii */
	void UnlockAndBind(class CVertexData<PhysicsDebugVertex_t> *, int, int, int); /* linkage=_ZN11CVertexDataI20PhysicsDebugVertex_tE13UnlockAndBindEiii */
	VertexBufferHandle_t TakeOwnership(class CVertexData<PhysicsDebugVertex_t> *); /* linkage=_ZN11CVertexDataI20PhysicsDebugVertex_tE13TakeOwnershipEv */
	void ReleaseBuffer(class CVertexData<PhysicsDebugVertex_t> *); /* linkage=_ZN11CVertexDataI20PhysicsDebugVertex_tE13ReleaseBufferEv */
	void Release(class CVertexData<PhysicsDebugVertex_t> *); /* linkage=_ZN11CVertexDataI20PhysicsDebugVertex_tE7ReleaseEv */
} __attribute__((__aligned__(16)));

// <033A5A1E> ../public/rendersystem/vertexdata.h:364
// member functions: 14
// member variables: 2
// class size: 64
class CVertexData<Vector> : public CVertexDataBase<Vector> {
public:
	/* class CVertexDataBase<Vector> <ancestor>; */ /* 0 48 */
	/* ../public/rendersystem/vertexdata.h:420 */
	void CVertexData(CVertexData<Vector>* );
	/* ../public/rendersystem/vertexdata.h:426 */
	void CVertexData(CVertexData<Vector>* , Vector* , int);
	/* ../public/rendersystem/vertexdata.h:433 */
	void CVertexData(CVertexData<Vector>* , IRenderContext* , VertexBufferHandle_t);
	/* ../public/rendersystem/vertexdata.h:440 */
	void CVertexData(CVertexData<Vector>* , IRenderContext* , RenderBufferType_t, int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:459 */
	void ~CVertexData(CVertexData<Vector>* );
	/* ../public/rendersystem/vertexdata.h:466 */
	void Init(CVertexData<Vector>* , Vector* , int);
	/* ../public/rendersystem/vertexdata.h:481 */
	void Init(CVertexData<Vector>* , IRenderContext* , VertexBufferHandle_t);
	/* ../public/rendersystem/vertexdata.h:538 */
	bool Lock(CVertexData<Vector>* , int);
	/* ../public/rendersystem/vertexdata.h:576 */
	void Unlock(CVertexData<Vector>* );
	/* ../public/rendersystem/vertexdata.h:605 */
	void Bind(CVertexData<Vector>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:388 */
	void UnlockAndBind(CVertexData<Vector>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:517 */
	VertexBufferHandle_t TakeOwnership(CVertexData<Vector>* );
	/* ../public/rendersystem/vertexdata.h:528 */
	void ReleaseBuffer(CVertexData<Vector>* );
protected:
	/* ../public/rendersystem/vertexdata.h:502 */
	void Release(CVertexData<Vector>* );
private:
	VertexBufferHandle_t m_hVertexBuffer; /* 48 8 */
} __attribute__((__aligned__(16)));

// <033A6006> ../public/rendersystem/vertexdata.h:364
// member functions: 14
// member variables: 2
// class size: 48
class CVertexData<Vertex2DPos_t> : public CVertexDataBase<Vertex2DPos_t> {
public:
	/* class CVertexDataBase<Vertex2DPos_t> <ancestor>; */ /* 0 48 */
	/* ../public/rendersystem/vertexdata.h:420 */
	void CVertexData(CVertexData<Vertex2DPos_t>* );
	/* ../public/rendersystem/vertexdata.h:426 */
	void CVertexData(CVertexData<Vertex2DPos_t>* , Vertex2DPos_t* , int);
	/* ../public/rendersystem/vertexdata.h:433 */
	void CVertexData(CVertexData<Vertex2DPos_t>* , IRenderContext* , VertexBufferHandle_t);
	/* ../public/rendersystem/vertexdata.h:440 */
	void CVertexData(CVertexData<Vertex2DPos_t>* , IRenderContext* , RenderBufferType_t, int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:459 */
	void ~CVertexData(CVertexData<Vertex2DPos_t>* );
	/* ../public/rendersystem/vertexdata.h:466 */
	void Init(CVertexData<Vertex2DPos_t>* , Vertex2DPos_t* , int);
	/* ../public/rendersystem/vertexdata.h:481 */
	void Init(CVertexData<Vertex2DPos_t>* , IRenderContext* , VertexBufferHandle_t);
	/* ../public/rendersystem/vertexdata.h:538 */
	bool Lock(CVertexData<Vertex2DPos_t>* , int);
	/* ../public/rendersystem/vertexdata.h:576 */
	void Unlock(CVertexData<Vertex2DPos_t>* );
	/* ../public/rendersystem/vertexdata.h:605 */
	void Bind(CVertexData<Vertex2DPos_t>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:388 */
	void UnlockAndBind(CVertexData<Vertex2DPos_t>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:517 */
	VertexBufferHandle_t TakeOwnership(CVertexData<Vertex2DPos_t>* );
	/* ../public/rendersystem/vertexdata.h:528 */
	void ReleaseBuffer(CVertexData<Vertex2DPos_t>* );
protected:
	/* ../public/rendersystem/vertexdata.h:502 */
	void Release(CVertexData<Vertex2DPos_t>* );
private:
	VertexBufferHandle_t m_hVertexBuffer; /* 40 8 */
} __attribute__((__aligned__(16)));

// <039255E2> ../public/rendersystem/vertexdata.h:364
// member functions: 14
// member variables: 2
// class size: 96
class CVertexData<VertexUVPosColorNormalAndTangent_t> : public CVertexDataBase<VertexUVPosColorNormalAndTangent_t> {
public:
	/* class CVertexDataBase<VertexUVPosColorNormalAndTangent_t> <ancestor>; */ /* 0 96 */
	/* ../public/rendersystem/vertexdata.h:420 */
	void CVertexData(CVertexData<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/rendersystem/vertexdata.h:426 */
	void CVertexData(CVertexData<VertexUVPosColorNormalAndTangent_t>* , VertexUVPosColorNormalAndTangent_t* , int);
	/* ../public/rendersystem/vertexdata.h:433 */
	void CVertexData(CVertexData<VertexUVPosColorNormalAndTangent_t>* , IRenderContext* , VertexBufferHandle_t);
	/* ../public/rendersystem/vertexdata.h:440 */
	void CVertexData(CVertexData<VertexUVPosColorNormalAndTangent_t>* , IRenderContext* , RenderBufferType_t, int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:459 */
	void ~CVertexData(CVertexData<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/rendersystem/vertexdata.h:466 */
	void Init(CVertexData<VertexUVPosColorNormalAndTangent_t>* , VertexUVPosColorNormalAndTangent_t* , int);
	/* ../public/rendersystem/vertexdata.h:481 */
	void Init(CVertexData<VertexUVPosColorNormalAndTangent_t>* , IRenderContext* , VertexBufferHandle_t);
	/* ../public/rendersystem/vertexdata.h:538 */
	bool Lock(CVertexData<VertexUVPosColorNormalAndTangent_t>* , int);
	/* ../public/rendersystem/vertexdata.h:576 */
	void Unlock(CVertexData<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/rendersystem/vertexdata.h:605 */
	void Bind(CVertexData<VertexUVPosColorNormalAndTangent_t>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:388 */
	void UnlockAndBind(CVertexData<VertexUVPosColorNormalAndTangent_t>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:517 */
	VertexBufferHandle_t TakeOwnership(CVertexData<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/rendersystem/vertexdata.h:528 */
	void ReleaseBuffer(CVertexData<VertexUVPosColorNormalAndTangent_t>* );
protected:
	/* ../public/rendersystem/vertexdata.h:502 */
	void Release(CVertexData<VertexUVPosColorNormalAndTangent_t>* );
private:
	VertexBufferHandle_t m_hVertexBuffer; /* 88 8 */
} __attribute__((__aligned__(16)));

// <03C14A03> ../public/rendersystem/vertexdata.h:364
// member functions: 28
// member variables: 2
// class size: 64
class CVertexData<VertexUVPos_t> : public CVertexDataBase<VertexUVPos_t> {
public:
	/* class CVertexDataBase<VertexUVPos_t> <ancestor>; */ /* 0 64 */
	/* ../public/rendersystem/vertexdata.h:420 */
	void CVertexData(CVertexData<VertexUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:426 */
	void CVertexData(CVertexData<VertexUVPos_t>* , VertexUVPos_t* , int);
	/* ../public/rendersystem/vertexdata.h:433 */
	void CVertexData(CVertexData<VertexUVPos_t>* , IRenderContext* , VertexBufferHandle_t);
	/* ../public/rendersystem/vertexdata.h:440 */
	void CVertexData(CVertexData<VertexUVPos_t>* , IRenderContext* , RenderBufferType_t, int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:459 */
	void ~CVertexData(CVertexData<VertexUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:466 */
	void Init(CVertexData<VertexUVPos_t>* , VertexUVPos_t* , int);
	/* ../public/rendersystem/vertexdata.h:481 */
	void Init(CVertexData<VertexUVPos_t>* , IRenderContext* , VertexBufferHandle_t);
	/* ../public/rendersystem/vertexdata.h:538 */
	bool Lock(CVertexData<VertexUVPos_t>* , int);
	/* ../public/rendersystem/vertexdata.h:576 */
	void Unlock(CVertexData<VertexUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:605 */
	void Bind(CVertexData<VertexUVPos_t>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:388 */
	void UnlockAndBind(CVertexData<VertexUVPos_t>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:517 */
	VertexBufferHandle_t TakeOwnership(CVertexData<VertexUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:528 */
	void ReleaseBuffer(CVertexData<VertexUVPos_t>* );
protected:
	/* ../public/rendersystem/vertexdata.h:502 */
	void Release(CVertexData<VertexUVPos_t>* );
private:
	VertexBufferHandle_t m_hVertexBuffer; /* 56 8 */
	void CVertexData(class CVertexData<VertexUVPos_t> *); /* linkage=_ZN11CVertexDataI13VertexUVPos_tEC4Ev */
	void CVertexData(class CVertexData<VertexUVPos_t> *, class VertexUVPos_t *, int); /* linkage=_ZN11CVertexDataI13VertexUVPos_tEC4EPS0_i */
	void CVertexData(class CVertexData<VertexUVPos_t> *, class IRenderContext *, VertexBufferHandle_t); /* linkage=_ZN11CVertexDataI13VertexUVPos_tEC4EP14IRenderContextP22VertexBufferHandle_t__ */
	void CVertexData(class CVertexData<VertexUVPos_t> *, class IRenderContext *, enum RenderBufferType_t, int, const char  *, const char  *); /* linkage=_ZN11CVertexDataI13VertexUVPos_tEC4EP14IRenderContext18RenderBufferType_tiPKcS6_ */
	void ~CVertexData(class CVertexData<VertexUVPos_t> *); /* linkage=_ZN11CVertexDataI13VertexUVPos_tED4Ev */
	void Init(class CVertexData<VertexUVPos_t> *, class VertexUVPos_t *, int); /* linkage=_ZN11CVertexDataI13VertexUVPos_tE4InitEPS0_i */
	void Init(class CVertexData<VertexUVPos_t> *, class IRenderContext *, VertexBufferHandle_t); /* linkage=_ZN11CVertexDataI13VertexUVPos_tE4InitEP14IRenderContextP22VertexBufferHandle_t__ */
	bool Lock(class CVertexData<VertexUVPos_t> *, int); /* linkage=_ZN11CVertexDataI13VertexUVPos_tE4LockEi */
	void Unlock(class CVertexData<VertexUVPos_t> *); /* linkage=_ZN11CVertexDataI13VertexUVPos_tE6UnlockEv */
	void Bind(class CVertexData<VertexUVPos_t> *, int, int, int); /* linkage=_ZN11CVertexDataI13VertexUVPos_tE4BindEiii */
	void UnlockAndBind(class CVertexData<VertexUVPos_t> *, int, int, int); /* linkage=_ZN11CVertexDataI13VertexUVPos_tE13UnlockAndBindEiii */
	VertexBufferHandle_t TakeOwnership(class CVertexData<VertexUVPos_t> *); /* linkage=_ZN11CVertexDataI13VertexUVPos_tE13TakeOwnershipEv */
	void ReleaseBuffer(class CVertexData<VertexUVPos_t> *); /* linkage=_ZN11CVertexDataI13VertexUVPos_tE13ReleaseBufferEv */
	/* <3c46bbc> ../public/rendersystem/vertexdata.h:502 */
	void Release(class CVertexData<VertexUVPos_t> *); /* linkage=_ZN11CVertexDataI13VertexUVPos_tE7ReleaseEv */
} __attribute__((__aligned__(16)));

// <0644A205> ../public/rendersystem/vertexdata.h:364
// member functions: 14
// member variables: 2
// class size: 64
class CVertexData<VertexPos_t> : public CVertexDataBase<VertexPos_t> {
public:
	/* class CVertexDataBase<VertexPos_t> <ancestor>; */ /* 0 48 */
	/* ../public/rendersystem/vertexdata.h:420 */
	void CVertexData(CVertexData<VertexPos_t>* );
	/* ../public/rendersystem/vertexdata.h:426 */
	void CVertexData(CVertexData<VertexPos_t>* , VertexPos_t* , int);
	/* ../public/rendersystem/vertexdata.h:433 */
	void CVertexData(CVertexData<VertexPos_t>* , IRenderContext* , VertexBufferHandle_t);
	/* ../public/rendersystem/vertexdata.h:440 */
	void CVertexData(CVertexData<VertexPos_t>* , IRenderContext* , RenderBufferType_t, int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:459 */
	void ~CVertexData(CVertexData<VertexPos_t>* );
	/* ../public/rendersystem/vertexdata.h:466 */
	void Init(CVertexData<VertexPos_t>* , VertexPos_t* , int);
	/* ../public/rendersystem/vertexdata.h:481 */
	void Init(CVertexData<VertexPos_t>* , IRenderContext* , VertexBufferHandle_t);
	/* ../public/rendersystem/vertexdata.h:538 */
	bool Lock(CVertexData<VertexPos_t>* , int);
	/* ../public/rendersystem/vertexdata.h:576 */
	void Unlock(CVertexData<VertexPos_t>* );
	/* ../public/rendersystem/vertexdata.h:605 */
	void Bind(CVertexData<VertexPos_t>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:388 */
	void UnlockAndBind(CVertexData<VertexPos_t>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:517 */
	VertexBufferHandle_t TakeOwnership(CVertexData<VertexPos_t>* );
	/* ../public/rendersystem/vertexdata.h:528 */
	void ReleaseBuffer(CVertexData<VertexPos_t>* );
protected:
	/* ../public/rendersystem/vertexdata.h:502 */
	void Release(CVertexData<VertexPos_t>* );
private:
	VertexBufferHandle_t m_hVertexBuffer; /* 48 8 */
} __attribute__((__aligned__(16)));

// <0644A6C3> ../public/rendersystem/vertexdata.h:364
// member functions: 28
// member variables: 2
// class size: 64
class CVertexData<VertexColorPos_t> : public CVertexDataBase<VertexColorPos_t> {
public:
	/* class CVertexDataBase<VertexColorPos_t> <ancestor>; */ /* 0 48 */
	/* ../public/rendersystem/vertexdata.h:420 */
	void CVertexData(CVertexData<VertexColorPos_t>* );
	/* ../public/rendersystem/vertexdata.h:426 */
	void CVertexData(CVertexData<VertexColorPos_t>* , VertexColorPos_t* , int);
	/* ../public/rendersystem/vertexdata.h:433 */
	void CVertexData(CVertexData<VertexColorPos_t>* , IRenderContext* , VertexBufferHandle_t);
	/* ../public/rendersystem/vertexdata.h:440 */
	void CVertexData(CVertexData<VertexColorPos_t>* , IRenderContext* , RenderBufferType_t, int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:459 */
	void ~CVertexData(CVertexData<VertexColorPos_t>* );
	/* ../public/rendersystem/vertexdata.h:466 */
	void Init(CVertexData<VertexColorPos_t>* , VertexColorPos_t* , int);
	/* ../public/rendersystem/vertexdata.h:481 */
	void Init(CVertexData<VertexColorPos_t>* , IRenderContext* , VertexBufferHandle_t);
	/* ../public/rendersystem/vertexdata.h:538 */
	bool Lock(CVertexData<VertexColorPos_t>* , int);
	/* ../public/rendersystem/vertexdata.h:576 */
	void Unlock(CVertexData<VertexColorPos_t>* );
	/* ../public/rendersystem/vertexdata.h:605 */
	void Bind(CVertexData<VertexColorPos_t>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:388 */
	void UnlockAndBind(CVertexData<VertexColorPos_t>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:517 */
	VertexBufferHandle_t TakeOwnership(CVertexData<VertexColorPos_t>* );
	/* ../public/rendersystem/vertexdata.h:528 */
	void ReleaseBuffer(CVertexData<VertexColorPos_t>* );
protected:
	/* ../public/rendersystem/vertexdata.h:502 */
	void Release(CVertexData<VertexColorPos_t>* );
private:
	VertexBufferHandle_t m_hVertexBuffer; /* 48 8 */
	void CVertexData(class CVertexData<VertexColorPos_t> *); /* linkage=_ZN11CVertexDataI16VertexColorPos_tEC4Ev */
	void CVertexData(class CVertexData<VertexColorPos_t> *, class VertexColorPos_t *, int); /* linkage=_ZN11CVertexDataI16VertexColorPos_tEC4EPS0_i */
	void CVertexData(class CVertexData<VertexColorPos_t> *, class IRenderContext *, VertexBufferHandle_t); /* linkage=_ZN11CVertexDataI16VertexColorPos_tEC4EP14IRenderContextP22VertexBufferHandle_t__ */
	void CVertexData(class CVertexData<VertexColorPos_t> *, class IRenderContext *, enum RenderBufferType_t, int, const char  *, const char  *); /* linkage=_ZN11CVertexDataI16VertexColorPos_tEC4EP14IRenderContext18RenderBufferType_tiPKcS6_ */
	void ~CVertexData(class CVertexData<VertexColorPos_t> *); /* linkage=_ZN11CVertexDataI16VertexColorPos_tED4Ev */
	void Init(class CVertexData<VertexColorPos_t> *, class VertexColorPos_t *, int); /* linkage=_ZN11CVertexDataI16VertexColorPos_tE4InitEPS0_i */
	void Init(class CVertexData<VertexColorPos_t> *, class IRenderContext *, VertexBufferHandle_t); /* linkage=_ZN11CVertexDataI16VertexColorPos_tE4InitEP14IRenderContextP22VertexBufferHandle_t__ */
	bool Lock(class CVertexData<VertexColorPos_t> *, int); /* linkage=_ZN11CVertexDataI16VertexColorPos_tE4LockEi */
	void Unlock(class CVertexData<VertexColorPos_t> *); /* linkage=_ZN11CVertexDataI16VertexColorPos_tE6UnlockEv */
	void Bind(class CVertexData<VertexColorPos_t> *, int, int, int); /* linkage=_ZN11CVertexDataI16VertexColorPos_tE4BindEiii */
	void UnlockAndBind(class CVertexData<VertexColorPos_t> *, int, int, int); /* linkage=_ZN11CVertexDataI16VertexColorPos_tE13UnlockAndBindEiii */
	VertexBufferHandle_t TakeOwnership(class CVertexData<VertexColorPos_t> *); /* linkage=_ZN11CVertexDataI16VertexColorPos_tE13TakeOwnershipEv */
	void ReleaseBuffer(class CVertexData<VertexColorPos_t> *); /* linkage=_ZN11CVertexDataI16VertexColorPos_tE13ReleaseBufferEv */
	void Release(class CVertexData<VertexColorPos_t> *); /* linkage=_ZN11CVertexDataI16VertexColorPos_tE7ReleaseEv */
} __attribute__((__aligned__(16)));

// <03C18983> ../public/rendersystem/vertexdata.h:426
void CVertexData<VertexUVPosColorNormalAndTangent_t>::CVertexData(VertexUVPosColorNormalAndTangent_t* pVB, int nBufferVertexCount)
{
} /* size: 0 */

// <03C18950> ../public/rendersystem/vertexdata.h:426
inline void CVertexData<VertexUVPosColorNormalAndTangent_t>::CVertexData(VertexUVPosColorNormalAndTangent_t* pVB, int nBufferVertexCount)
{
} /* size: 0 */

// <03C18693> ../public/rendersystem/vertexdata.h:426
void CVertexData<VertexUVPos_t>::CVertexData(VertexUVPos_t* pVB, int nBufferVertexCount)
{
} /* size: 0 */

// <03C18660> ../public/rendersystem/vertexdata.h:426
inline void CVertexData<VertexUVPos_t>::CVertexData(VertexUVPos_t* pVB, int nBufferVertexCount)
{
} /* size: 0 */

// <0392B621> ../public/rendersystem/vertexdata.h:433
void CVertexData<VertexUVPosColorNormalAndTangent_t>::CVertexData(IRenderContext* pRenderContext, VertexBufferHandle_t hVertexBuffer)
{
} /* size: 0 */

// <0392B5EE> ../public/rendersystem/vertexdata.h:433
inline void CVertexData<VertexUVPosColorNormalAndTangent_t>::CVertexData(IRenderContext* pRenderContext, VertexBufferHandle_t hVertexBuffer)
{
} /* size: 0 */

// <033AF711> ../public/rendersystem/vertexdata.h:433
void CVertexData<Vector>::CVertexData(IRenderContext* pRenderContext, VertexBufferHandle_t hVertexBuffer)
{
} /* size: 0 */

// <033AF6DE> ../public/rendersystem/vertexdata.h:433
inline void CVertexData<Vector>::CVertexData(IRenderContext* pRenderContext, VertexBufferHandle_t hVertexBuffer)
{
} /* size: 0 */

// <033AF279> ../public/rendersystem/vertexdata.h:433
void CVertexData<Vertex2DPos_t>::CVertexData(IRenderContext* pRenderContext, VertexBufferHandle_t hVertexBuffer)
{
} /* size: 0 */

// <033AF246> ../public/rendersystem/vertexdata.h:433
inline void CVertexData<Vertex2DPos_t>::CVertexData(IRenderContext* pRenderContext, VertexBufferHandle_t hVertexBuffer)
{
} /* size: 0 */

// <009F321A> ../public/rendersystem/vertexdata.h:433
void CVertexData<PhysicsDebugVertex_t>::CVertexData(IRenderContext* pRenderContext, VertexBufferHandle_t hVertexBuffer)
{
} /* size: 0 */

// <009F31E7> ../public/rendersystem/vertexdata.h:433
inline void CVertexData<PhysicsDebugVertex_t>::CVertexData(IRenderContext* pRenderContext, VertexBufferHandle_t hVertexBuffer)
{
} /* size: 0 */

// <06455F3A> ../public/rendersystem/vertexdata.h:440
// variable: 1
void CVertexData<VertexUVPosColorNormalAndTangent_t>::CVertexData(IRenderContext* pRenderContext, RenderBufferType_t nType, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
	{
		BufferDesc_t vertexDesc; // 444
	}
} /* size: 0 */

// <06455ED1> ../public/rendersystem/vertexdata.h:440
// variable: 1
inline void CVertexData<VertexUVPosColorNormalAndTangent_t>::CVertexData(IRenderContext* pRenderContext, RenderBufferType_t nType, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
	{
		BufferDesc_t vertexDesc; // 444
	}
} /* size: 0 */

// <06455D10> ../public/rendersystem/vertexdata.h:440
// variable: 1
void CVertexData<VertexColorPos_t>::CVertexData(IRenderContext* pRenderContext, RenderBufferType_t nType, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
	{
		BufferDesc_t vertexDesc; // 444
	}
} /* size: 0 */

// <06455CA7> ../public/rendersystem/vertexdata.h:440
// variable: 1
inline void CVertexData<VertexColorPos_t>::CVertexData(IRenderContext* pRenderContext, RenderBufferType_t nType, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
	{
		BufferDesc_t vertexDesc; // 444
	}
} /* size: 0 */

// <06455EBA> ../public/rendersystem/vertexdata.h:459
void CVertexData<VertexUVPosColorNormalAndTangent_t>::~CVertexData()
{
} /* size: 0 */

// <06455EA1> ../public/rendersystem/vertexdata.h:459
inline void CVertexData<VertexUVPosColorNormalAndTangent_t>::~CVertexData()
{
} /* size: 0 */

// <06455C90> ../public/rendersystem/vertexdata.h:459
void CVertexData<VertexColorPos_t>::~CVertexData()
{
} /* size: 0 */

// <06455C77> ../public/rendersystem/vertexdata.h:459
inline void CVertexData<VertexColorPos_t>::~CVertexData()
{
} /* size: 0 */

// <03C18567> ../public/rendersystem/vertexdata.h:459
void CVertexData<VertexUVPos_t>::~CVertexData()
{
} /* size: 0 */

// <03C1854E> ../public/rendersystem/vertexdata.h:459
inline void CVertexData<VertexUVPos_t>::~CVertexData()
{
} /* size: 0 */

// <033AF6C7> ../public/rendersystem/vertexdata.h:459
void CVertexData<Vector>::~CVertexData()
{
} /* size: 0 */

// <033AF6AE> ../public/rendersystem/vertexdata.h:459
inline void CVertexData<Vector>::~CVertexData()
{
} /* size: 0 */

// <033AF22F> ../public/rendersystem/vertexdata.h:459
void CVertexData<Vertex2DPos_t>::~CVertexData()
{
} /* size: 0 */

// <033AF216> ../public/rendersystem/vertexdata.h:459
inline void CVertexData<Vertex2DPos_t>::~CVertexData()
{
} /* size: 0 */

// <009F31D0> ../public/rendersystem/vertexdata.h:459
void CVertexData<PhysicsDebugVertex_t>::~CVertexData()
{
} /* size: 0 */

// <009F31B7> ../public/rendersystem/vertexdata.h:459
inline void CVertexData<PhysicsDebugVertex_t>::~CVertexData()
{
} /* size: 0 */

// <03C17C01> ../public/rendersystem/vertexdata.h:466
// variables: 2
inline void CVertexData<VertexUVPosColorNormalAndTangent_t>::Init(VertexUVPosColorNormalAndTangent_t* pVB, int nBufferVertexCount)
{
	const char   __FUNCTION__; // 59268
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 469
	}
} /* size: 0, variables: 1 */

// <03C17A6F> ../public/rendersystem/vertexdata.h:466
// variables: 2
inline void CVertexData<VertexUVPos_t>::Init(VertexUVPos_t* pVB, int nBufferVertexCount)
{
	const char   __FUNCTION__; // 59268
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 469
	}
} /* size: 0, variables: 1 */

// <0392A098> ../public/rendersystem/vertexdata.h:481
// variables: 3
inline void CVertexData<VertexUVPosColorNormalAndTangent_t>::Init(IRenderContext* pRenderContext, VertexBufferHandle_t hVertexBuffer)
{
	const char   __FUNCTION__; // 61816
	BufferDesc_t desc; // 488
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 483
	}
} /* size: 0, variables: 2 */

// <033AC88C> ../public/rendersystem/vertexdata.h:481
// variables: 3
inline void CVertexData<Vector>::Init(IRenderContext* pRenderContext, VertexBufferHandle_t hVertexBuffer)
{
	const char   __FUNCTION__; // 53921
	BufferDesc_t desc; // 488
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 483
	}
} /* size: 0, variables: 2 */

// <033AC5C8> ../public/rendersystem/vertexdata.h:481
// variables: 3
inline void CVertexData<Vertex2DPos_t>::Init(IRenderContext* pRenderContext, VertexBufferHandle_t hVertexBuffer)
{
	const char   __FUNCTION__; // 53921
	BufferDesc_t desc; // 488
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 483
	}
} /* size: 0, variables: 2 */

// <009EF3CB> ../public/rendersystem/vertexdata.h:481
// variables: 3
inline void CVertexData<PhysicsDebugVertex_t>::Init(IRenderContext* pRenderContext, VertexBufferHandle_t hVertexBuffer)
{
	const char   __FUNCTION__; // 57407
	BufferDesc_t desc; // 488
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 483
	}
} /* size: 0, variables: 2 */

// <06452403> ../public/rendersystem/vertexdata.h:502
void CVertexData<VertexUVPosColorNormalAndTangent_t>::Release()
{
} /* size: 0 */

// <064521DA> ../public/rendersystem/vertexdata.h:502
void CVertexData<VertexColorPos_t>::Release()
{
} /* size: 0 */

// <03C46BBC> ../public/rendersystem/vertexdata.h:502
// function call: 1
void CVertexData<VertexUVPos_t>::Release()
{
	CVertexData<VertexUVPos_t>::Release(); // 502
} /* size: 81, inline expansions: 1 (41 bytes) */

// <03C46B10> ../public/rendersystem/vertexdata.h:502
// function call: 1
void CVertexData<VertexUVPosColorNormalAndTangent_t>::Release()
{
	CVertexData<VertexUVPosColorNormalAndTangent_t>::Release(); // 502
} /* size: 81, inline expansions: 1 (41 bytes) */

// <03C17A56> ../public/rendersystem/vertexdata.h:502
void CVertexData<VertexUVPos_t>::Release()
{
} /* size: 0 */

// <033AC873> ../public/rendersystem/vertexdata.h:502
void CVertexData<Vector>::Release()
{
} /* size: 0 */

// <033AC5AF> ../public/rendersystem/vertexdata.h:502
void CVertexData<Vertex2DPos_t>::Release()
{
} /* size: 0 */

// <009EF3B2> ../public/rendersystem/vertexdata.h:502
void CVertexData<PhysicsDebugVertex_t>::Release()
{
} /* size: 0 */

// <06455D7E> ../public/rendersystem/vertexdata.h:517
void CVertexData<VertexUVPosColorNormalAndTangent_t>::TakeOwnership()
{
} /* size: 0 */

// <06455C13> ../public/rendersystem/vertexdata.h:517
void CVertexData<VertexColorPos_t>::TakeOwnership()
{
} /* size: 0 */

// <03C18A1D> ../public/rendersystem/vertexdata.h:528
inline void CVertexData<VertexUVPosColorNormalAndTangent_t>::ReleaseBuffer()
{
} /* size: 0 */

// <03C1857E> ../public/rendersystem/vertexdata.h:528
inline void CVertexData<VertexUVPos_t>::ReleaseBuffer()
{
} /* size: 0 */

// <0645241C> ../public/rendersystem/vertexdata.h:538
// variables: 2
inline void CVertexData<VertexUVPosColorNormalAndTangent_t>::Lock(int nMaxVertexCount)
{
	{
		LockDesc_t desc; // 557
		bool bOk; // 558
	}
} /* size: 0 */

// <064521F3> ../public/rendersystem/vertexdata.h:538
// variables: 2
inline void CVertexData<VertexColorPos_t>::Lock(int nMaxVertexCount)
{
	{
		LockDesc_t desc; // 557
		bool bOk; // 558
	}
} /* size: 0 */

// <03C1ABC4> ../public/rendersystem/vertexdata.h:538
// variables: 5
inline void CVertexData<VertexUVPosColorNormalAndTangent_t>::Lock(int nMaxVertexCount)
{
	const char   __FUNCTION__; // 59268
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 547
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 548
	}
	{
		LockDesc_t desc; // 557
		bool bOk; // 558
	}
} /* size: 0, variables: 1 */

// <03C198B4> ../public/rendersystem/vertexdata.h:538
// variables: 5
inline void CVertexData<VertexUVPos_t>::Lock(int nMaxVertexCount)
{
	const char   __FUNCTION__; // 59268
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 547
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 548
	}
	{
		LockDesc_t desc; // 557
		bool bOk; // 558
	}
} /* size: 0, variables: 1 */

// <0392B528> ../public/rendersystem/vertexdata.h:538
// variables: 5
inline void CVertexData<VertexUVPosColorNormalAndTangent_t>::Lock(int nMaxVertexCount)
{
	const char   __FUNCTION__; // 61816
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 547
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 548
	}
	{
		LockDesc_t desc; // 557
		bool bOk; // 558
	}
} /* size: 0, variables: 1 */

// <033AF61B> ../public/rendersystem/vertexdata.h:538
// variables: 5
inline void CVertexData<Vector>::Lock(int nMaxVertexCount)
{
	const char   __FUNCTION__; // 53921
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 547
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 548
	}
	{
		LockDesc_t desc; // 557
		bool bOk; // 558
	}
} /* size: 0, variables: 1 */

// <033AF18C> ../public/rendersystem/vertexdata.h:538
// variables: 5
inline void CVertexData<Vertex2DPos_t>::Lock(int nMaxVertexCount)
{
	const char   __FUNCTION__; // 53921
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 547
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 548
	}
	{
		LockDesc_t desc; // 557
		bool bOk; // 558
	}
} /* size: 0, variables: 1 */

// <009F3007> ../public/rendersystem/vertexdata.h:538
// variables: 5
inline void CVertexData<PhysicsDebugVertex_t>::Lock(int nMaxVertexCount)
{
	const char   __FUNCTION__; // 57407
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 547
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 548
	}
	{
		LockDesc_t desc; // 557
		bool bOk; // 558
	}
} /* size: 0, variables: 1 */

// <06455DBF> ../public/rendersystem/vertexdata.h:576
// variable: 1
inline void CVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock()
{
	{
		LockDesc_t desc; // 588
	}
} /* size: 0 */

// <06455C2C> ../public/rendersystem/vertexdata.h:576
// variable: 1
inline void CVertexData<VertexColorPos_t>::Unlock()
{
	{
		LockDesc_t desc; // 588
	}
} /* size: 0 */

// <03C19639> ../public/rendersystem/vertexdata.h:576
// variables: 3
inline void CVertexData<VertexUVPos_t>::Unlock()
{
	const char   __FUNCTION__; // 59322
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 580
	}
	{
		LockDesc_t desc; // 588
	}
} /* size: 0, variables: 1 */

// <03C1877D> ../public/rendersystem/vertexdata.h:576
// variables: 3
inline void CVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock()
{
	const char   __FUNCTION__; // 59322
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 580
	}
	{
		LockDesc_t desc; // 588
	}
} /* size: 0, variables: 1 */

// <0392B412> ../public/rendersystem/vertexdata.h:576
// variables: 3
inline void CVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock()
{
	const char   __FUNCTION__; // 61865
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 580
	}
	{
		LockDesc_t desc; // 588
	}
} /* size: 0, variables: 1 */

// <033AF52D> ../public/rendersystem/vertexdata.h:576
// variables: 3
inline void CVertexData<Vector>::Unlock()
{
	const char   __FUNCTION__; // 53975
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 580
	}
	{
		LockDesc_t desc; // 588
	}
} /* size: 0, variables: 1 */

// <033AF077> ../public/rendersystem/vertexdata.h:576
// variables: 3
inline void CVertexData<Vertex2DPos_t>::Unlock()
{
	const char   __FUNCTION__; // 53975
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 580
	}
	{
		LockDesc_t desc; // 588
	}
} /* size: 0, variables: 1 */

// <009F2E1A> ../public/rendersystem/vertexdata.h:576
// variables: 3
inline void CVertexData<PhysicsDebugVertex_t>::Unlock()
{
	const char   __FUNCTION__; // 57461
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 580
	}
	{
		LockDesc_t desc; // 588
	}
} /* size: 0, variables: 1 */

// <028B9974> ../public/rendersystem/vertexdata.h:616
// member functions: 9
// member variables: 7
// class size: 96
class CDynamicVertexData<CQuadRenderer::Vertex_t> : public CVertexDataBase<CQuadRenderer::Vertex_t> {
public:
	/* class CVertexDataBase<CQuadRenderer::Vertex_t> <ancestor>; */ /* 0 64 */
	/* ../public/rendersystem/vertexdata.h:672 */
	void CDynamicVertexData(CDynamicVertexData<CQuadRenderer::Vertex_t>* , IRenderContext* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:684 */
	void CDynamicVertexData(CDynamicVertexData<CQuadRenderer::Vertex_t>* , IRenderContext* );
	/* ../public/rendersystem/vertexdata.h:708 */
	void ~CDynamicVertexData(CDynamicVertexData<CQuadRenderer::Vertex_t>* );
	/* ../public/rendersystem/vertexdata.h:694 */
	void Init(CDynamicVertexData<CQuadRenderer::Vertex_t>* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:702 */
	void Reinit(CDynamicVertexData<CQuadRenderer::Vertex_t>* , int);
	/* ../public/rendersystem/vertexdata.h:760 */
	void Unlock(CDynamicVertexData<CQuadRenderer::Vertex_t>* );
	/* ../public/rendersystem/vertexdata.h:788 */
	void Bind(CDynamicVertexData<CQuadRenderer::Vertex_t>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:637 */
	void UnlockAndBind(CDynamicVertexData<CQuadRenderer::Vertex_t>* , int, int, int);
protected:
	/* ../public/rendersystem/vertexdata.h:718 */
	void Lock(CDynamicVertexData<CQuadRenderer::Vertex_t>* , int);
private:
	DynamicVertexBufferHandle_t m_hVertexBuffer; /* 64 8 */
	const char * m_pDebugName; /* 72 8 */
	const char * m_pBudgetGroupName; /* 80 8 */
	int m_nStartOffsetInBytes; /* 88 4 */
	bool m_bOkToLock; /* 92 1 */
	bool m_bLocked; /* 93 1 */
} __attribute__((__aligned__(16)));

// <02DFD830> ../public/rendersystem/vertexdata.h:616
// member functions: 9
// member variables: 7
// class size: 128
class CDynamicVertexData<MorphPositionSpeedVertex_t> : public CVertexDataBase<MorphPositionSpeedVertex_t> {
public:
	/* class CVertexDataBase<MorphPositionSpeedVertex_t> <ancestor>; */ /* 0 96 */
	/* ../public/rendersystem/vertexdata.h:672 */
	void CDynamicVertexData(CDynamicVertexData<MorphPositionSpeedVertex_t>* , IRenderContext* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:684 */
	void CDynamicVertexData(CDynamicVertexData<MorphPositionSpeedVertex_t>* , IRenderContext* );
	/* ../public/rendersystem/vertexdata.h:708 */
	void ~CDynamicVertexData(CDynamicVertexData<MorphPositionSpeedVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:694 */
	void Init(CDynamicVertexData<MorphPositionSpeedVertex_t>* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:702 */
	void Reinit(CDynamicVertexData<MorphPositionSpeedVertex_t>* , int);
	/* ../public/rendersystem/vertexdata.h:760 */
	void Unlock(CDynamicVertexData<MorphPositionSpeedVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:788 */
	void Bind(CDynamicVertexData<MorphPositionSpeedVertex_t>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:637 */
	void UnlockAndBind(CDynamicVertexData<MorphPositionSpeedVertex_t>* , int, int, int);
protected:
	/* ../public/rendersystem/vertexdata.h:718 */
	void Lock(CDynamicVertexData<MorphPositionSpeedVertex_t>* , int);
private:
	DynamicVertexBufferHandle_t m_hVertexBuffer; /* 88 8 */
	const char * m_pDebugName; /* 96 8 */
	const char * m_pBudgetGroupName; /* 104 8 */
	int m_nStartOffsetInBytes; /* 112 4 */
	bool m_bOkToLock; /* 116 1 */
	bool m_bLocked; /* 117 1 */
} __attribute__((__aligned__(16)));

// <02DFDC76> ../public/rendersystem/vertexdata.h:616
// member functions: 18
// member variables: 7
// class size: 160
class CDynamicVertexData<MorphNormalWrinkleVertex_t> : public CVertexDataBase<MorphNormalWrinkleVertex_t> {
public:
	/* class CVertexDataBase<MorphNormalWrinkleVertex_t> <ancestor>; */ /* 0 128 */
	/* ../public/rendersystem/vertexdata.h:672 */
	void CDynamicVertexData(CDynamicVertexData<MorphNormalWrinkleVertex_t>* , IRenderContext* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:684 */
	void CDynamicVertexData(CDynamicVertexData<MorphNormalWrinkleVertex_t>* , IRenderContext* );
	/* ../public/rendersystem/vertexdata.h:708 */
	void ~CDynamicVertexData(CDynamicVertexData<MorphNormalWrinkleVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:694 */
	void Init(CDynamicVertexData<MorphNormalWrinkleVertex_t>* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:702 */
	void Reinit(CDynamicVertexData<MorphNormalWrinkleVertex_t>* , int);
	/* ../public/rendersystem/vertexdata.h:760 */
	void Unlock(CDynamicVertexData<MorphNormalWrinkleVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:788 */
	void Bind(CDynamicVertexData<MorphNormalWrinkleVertex_t>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:637 */
	void UnlockAndBind(CDynamicVertexData<MorphNormalWrinkleVertex_t>* , int, int, int);
protected:
	/* ../public/rendersystem/vertexdata.h:718 */
	void Lock(CDynamicVertexData<MorphNormalWrinkleVertex_t>* , int);
private:
	DynamicVertexBufferHandle_t m_hVertexBuffer; /* 128 8 */
	const char * m_pDebugName; /* 136 8 */
	const char * m_pBudgetGroupName; /* 144 8 */
	int m_nStartOffsetInBytes; /* 152 4 */
	bool m_bOkToLock; /* 156 1 */
	bool m_bLocked; /* 157 1 */
	void CDynamicVertexData(class CDynamicVertexData<MorphNormalWrinkleVertex_t> *, class IRenderContext *, int, const char  *, const char  *); /* linkage=_ZN18CDynamicVertexDataI26MorphNormalWrinkleVertex_tEC4EP14IRenderContextiPKcS5_ */
	void CDynamicVertexData(class CDynamicVertexData<MorphNormalWrinkleVertex_t> *, class IRenderContext *); /* linkage=_ZN18CDynamicVertexDataI26MorphNormalWrinkleVertex_tEC4EP14IRenderContext */
	void ~CDynamicVertexData(class CDynamicVertexData<MorphNormalWrinkleVertex_t> *); /* linkage=_ZN18CDynamicVertexDataI26MorphNormalWrinkleVertex_tED4Ev */
	void Init(class CDynamicVertexData<MorphNormalWrinkleVertex_t> *, int, const char  *, const char  *); /* linkage=_ZN18CDynamicVertexDataI26MorphNormalWrinkleVertex_tE4InitEiPKcS3_ */
	void Reinit(class CDynamicVertexData<MorphNormalWrinkleVertex_t> *, int); /* linkage=_ZN18CDynamicVertexDataI26MorphNormalWrinkleVertex_tE6ReinitEi */
	void Unlock(class CDynamicVertexData<MorphNormalWrinkleVertex_t> *); /* linkage=_ZN18CDynamicVertexDataI26MorphNormalWrinkleVertex_tE6UnlockEv */
	void Bind(class CDynamicVertexData<MorphNormalWrinkleVertex_t> *, int, int, int); /* linkage=_ZN18CDynamicVertexDataI26MorphNormalWrinkleVertex_tE4BindEiii */
	void UnlockAndBind(class CDynamicVertexData<MorphNormalWrinkleVertex_t> *, int, int, int); /* linkage=_ZN18CDynamicVertexDataI26MorphNormalWrinkleVertex_tE13UnlockAndBindEiii */
	void Lock(class CDynamicVertexData<MorphNormalWrinkleVertex_t> *, int); /* linkage=_ZN18CDynamicVertexDataI26MorphNormalWrinkleVertex_tE4LockEi */
} __attribute__((__aligned__(16)));

// <031148DC> ../public/rendersystem/vertexdata.h:616
// member functions: 9
// member variables: 7
// class size: 112
class CDynamicVertexData<VertexWireFrame_t> : public CVertexDataBase<VertexWireFrame_t> {
public:
	/* class CVertexDataBase<VertexWireFrame_t> <ancestor>; */ /* 0 80 */
	/* ../public/rendersystem/vertexdata.h:672 */
	void CDynamicVertexData(CDynamicVertexData<VertexWireFrame_t>* , IRenderContext* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:684 */
	void CDynamicVertexData(CDynamicVertexData<VertexWireFrame_t>* , IRenderContext* );
	/* ../public/rendersystem/vertexdata.h:708 */
	void ~CDynamicVertexData(CDynamicVertexData<VertexWireFrame_t>* );
	/* ../public/rendersystem/vertexdata.h:694 */
	void Init(CDynamicVertexData<VertexWireFrame_t>* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:702 */
	void Reinit(CDynamicVertexData<VertexWireFrame_t>* , int);
	/* ../public/rendersystem/vertexdata.h:760 */
	void Unlock(CDynamicVertexData<VertexWireFrame_t>* );
	/* ../public/rendersystem/vertexdata.h:788 */
	void Bind(CDynamicVertexData<VertexWireFrame_t>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:637 */
	void UnlockAndBind(CDynamicVertexData<VertexWireFrame_t>* , int, int, int);
protected:
	/* ../public/rendersystem/vertexdata.h:718 */
	void Lock(CDynamicVertexData<VertexWireFrame_t>* , int);
private:
	DynamicVertexBufferHandle_t m_hVertexBuffer; /* 72 8 */
	const char * m_pDebugName; /* 80 8 */
	const char * m_pBudgetGroupName; /* 88 8 */
	int m_nStartOffsetInBytes; /* 96 4 */
	bool m_bOkToLock; /* 100 1 */
	bool m_bLocked; /* 101 1 */
} __attribute__((__aligned__(16)));

// <031165A2> ../public/rendersystem/vertexdata.h:616
// member functions: 9
// member variables: 7
// class size: 96
class CDynamicVertexData<VertexWireFrame2D_t> : public CVertexDataBase<VertexWireFrame2D_t> {
public:
	/* class CVertexDataBase<VertexWireFrame2D_t> <ancestor>; */ /* 0 64 */
	/* ../public/rendersystem/vertexdata.h:672 */
	void CDynamicVertexData(CDynamicVertexData<VertexWireFrame2D_t>* , IRenderContext* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:684 */
	void CDynamicVertexData(CDynamicVertexData<VertexWireFrame2D_t>* , IRenderContext* );
	/* ../public/rendersystem/vertexdata.h:708 */
	void ~CDynamicVertexData(CDynamicVertexData<VertexWireFrame2D_t>* );
	/* ../public/rendersystem/vertexdata.h:694 */
	void Init(CDynamicVertexData<VertexWireFrame2D_t>* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:702 */
	void Reinit(CDynamicVertexData<VertexWireFrame2D_t>* , int);
	/* ../public/rendersystem/vertexdata.h:760 */
	void Unlock(CDynamicVertexData<VertexWireFrame2D_t>* );
	/* ../public/rendersystem/vertexdata.h:788 */
	void Bind(CDynamicVertexData<VertexWireFrame2D_t>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:637 */
	void UnlockAndBind(CDynamicVertexData<VertexWireFrame2D_t>* , int, int, int);
protected:
	/* ../public/rendersystem/vertexdata.h:718 */
	void Lock(CDynamicVertexData<VertexWireFrame2D_t>* , int);
private:
	DynamicVertexBufferHandle_t m_hVertexBuffer; /* 64 8 */
	const char * m_pDebugName; /* 72 8 */
	const char * m_pBudgetGroupName; /* 80 8 */
	int m_nStartOffsetInBytes; /* 88 4 */
	bool m_bOkToLock; /* 92 1 */
	bool m_bLocked; /* 93 1 */
} __attribute__((__aligned__(16)));

// <031169E9> ../public/rendersystem/vertexdata.h:616
// member functions: 9
// member variables: 7
// class size: 96
class CDynamicVertexData<VertexDebugUI_t> : public CVertexDataBase<VertexDebugUI_t> {
public:
	/* class CVertexDataBase<VertexDebugUI_t> <ancestor>; */ /* 0 64 */
	/* ../public/rendersystem/vertexdata.h:672 */
	void CDynamicVertexData(CDynamicVertexData<VertexDebugUI_t>* , IRenderContext* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:684 */
	void CDynamicVertexData(CDynamicVertexData<VertexDebugUI_t>* , IRenderContext* );
	/* ../public/rendersystem/vertexdata.h:708 */
	void ~CDynamicVertexData(CDynamicVertexData<VertexDebugUI_t>* );
	/* ../public/rendersystem/vertexdata.h:694 */
	void Init(CDynamicVertexData<VertexDebugUI_t>* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:702 */
	void Reinit(CDynamicVertexData<VertexDebugUI_t>* , int);
	/* ../public/rendersystem/vertexdata.h:760 */
	void Unlock(CDynamicVertexData<VertexDebugUI_t>* );
	/* ../public/rendersystem/vertexdata.h:788 */
	void Bind(CDynamicVertexData<VertexDebugUI_t>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:637 */
	void UnlockAndBind(CDynamicVertexData<VertexDebugUI_t>* , int, int, int);
protected:
	/* ../public/rendersystem/vertexdata.h:718 */
	void Lock(CDynamicVertexData<VertexDebugUI_t>* , int);
private:
	DynamicVertexBufferHandle_t m_hVertexBuffer; /* 56 8 */
	const char * m_pDebugName; /* 64 8 */
	const char * m_pBudgetGroupName; /* 72 8 */
	int m_nStartOffsetInBytes; /* 80 4 */
	bool m_bOkToLock; /* 84 1 */
	bool m_bLocked; /* 85 1 */
} __attribute__((__aligned__(16)));

// <0311718E> ../public/rendersystem/vertexdata.h:616
// member functions: 9
// member variables: 7
// class size: 96
class CDynamicVertexData<VertexUVPos_t> : public CVertexDataBase<VertexUVPos_t> {
public:
	/* class CVertexDataBase<VertexUVPos_t> <ancestor>; */ /* 0 64 */
	/* ../public/rendersystem/vertexdata.h:672 */
	void CDynamicVertexData(CDynamicVertexData<VertexUVPos_t>* , IRenderContext* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:684 */
	void CDynamicVertexData(CDynamicVertexData<VertexUVPos_t>* , IRenderContext* );
	/* ../public/rendersystem/vertexdata.h:708 */
	void ~CDynamicVertexData(CDynamicVertexData<VertexUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:694 */
	void Init(CDynamicVertexData<VertexUVPos_t>* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:702 */
	void Reinit(CDynamicVertexData<VertexUVPos_t>* , int);
	/* ../public/rendersystem/vertexdata.h:760 */
	void Unlock(CDynamicVertexData<VertexUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:788 */
	void Bind(CDynamicVertexData<VertexUVPos_t>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:637 */
	void UnlockAndBind(CDynamicVertexData<VertexUVPos_t>* , int, int, int);
protected:
	/* ../public/rendersystem/vertexdata.h:718 */
	void Lock(CDynamicVertexData<VertexUVPos_t>* , int);
private:
	DynamicVertexBufferHandle_t m_hVertexBuffer; /* 56 8 */
	const char * m_pDebugName; /* 64 8 */
	const char * m_pBudgetGroupName; /* 72 8 */
	int m_nStartOffsetInBytes; /* 80 4 */
	bool m_bOkToLock; /* 84 1 */
	bool m_bLocked; /* 85 1 */
} __attribute__((__aligned__(16)));

// <0321A48F> ../public/rendersystem/vertexdata.h:616
// member functions: 9
// member variables: 7
// class size: 96
class CDynamicVertexData<VertexPostProcess_t> : public CVertexDataBase<VertexPostProcess_t> {
public:
	/* class CVertexDataBase<VertexPostProcess_t> <ancestor>; */ /* 0 64 */
	/* ../public/rendersystem/vertexdata.h:672 */
	void CDynamicVertexData(CDynamicVertexData<VertexPostProcess_t>* , IRenderContext* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:684 */
	void CDynamicVertexData(CDynamicVertexData<VertexPostProcess_t>* , IRenderContext* );
	/* ../public/rendersystem/vertexdata.h:708 */
	void ~CDynamicVertexData(CDynamicVertexData<VertexPostProcess_t>* );
	/* ../public/rendersystem/vertexdata.h:694 */
	void Init(CDynamicVertexData<VertexPostProcess_t>* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:702 */
	void Reinit(CDynamicVertexData<VertexPostProcess_t>* , int);
	/* ../public/rendersystem/vertexdata.h:760 */
	void Unlock(CDynamicVertexData<VertexPostProcess_t>* );
	/* ../public/rendersystem/vertexdata.h:788 */
	void Bind(CDynamicVertexData<VertexPostProcess_t>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:637 */
	void UnlockAndBind(CDynamicVertexData<VertexPostProcess_t>* , int, int, int);
protected:
	/* ../public/rendersystem/vertexdata.h:718 */
	void Lock(CDynamicVertexData<VertexPostProcess_t>* , int);
private:
	DynamicVertexBufferHandle_t m_hVertexBuffer; /* 64 8 */
	const char * m_pDebugName; /* 72 8 */
	const char * m_pBudgetGroupName; /* 80 8 */
	int m_nStartOffsetInBytes; /* 88 4 */
	bool m_bOkToLock; /* 92 1 */
	bool m_bLocked; /* 93 1 */
} __attribute__((__aligned__(16)));

// <0321A8DE> ../public/rendersystem/vertexdata.h:616
// member functions: 9
// member variables: 7
// class size: 80
class CDynamicVertexData<VertexPos2DTex2D_t> : public CVertexDataBase<VertexPos2DTex2D_t> {
public:
	/* class CVertexDataBase<VertexPos2DTex2D_t> <ancestor>; */ /* 0 48 */
	/* ../public/rendersystem/vertexdata.h:672 */
	void CDynamicVertexData(CDynamicVertexData<VertexPos2DTex2D_t>* , IRenderContext* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:684 */
	void CDynamicVertexData(CDynamicVertexData<VertexPos2DTex2D_t>* , IRenderContext* );
	/* ../public/rendersystem/vertexdata.h:708 */
	void ~CDynamicVertexData(CDynamicVertexData<VertexPos2DTex2D_t>* );
	/* ../public/rendersystem/vertexdata.h:694 */
	void Init(CDynamicVertexData<VertexPos2DTex2D_t>* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:702 */
	void Reinit(CDynamicVertexData<VertexPos2DTex2D_t>* , int);
	/* ../public/rendersystem/vertexdata.h:760 */
	void Unlock(CDynamicVertexData<VertexPos2DTex2D_t>* );
	/* ../public/rendersystem/vertexdata.h:788 */
	void Bind(CDynamicVertexData<VertexPos2DTex2D_t>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:637 */
	void UnlockAndBind(CDynamicVertexData<VertexPos2DTex2D_t>* , int, int, int);
protected:
	/* ../public/rendersystem/vertexdata.h:718 */
	void Lock(CDynamicVertexData<VertexPos2DTex2D_t>* , int);
private:
	DynamicVertexBufferHandle_t m_hVertexBuffer; /* 48 8 */
	const char * m_pDebugName; /* 56 8 */
	const char * m_pBudgetGroupName; /* 64 8 */
	int m_nStartOffsetInBytes; /* 72 4 */
	bool m_bOkToLock; /* 76 1 */
	bool m_bLocked; /* 77 1 */
} __attribute__((__aligned__(16)));

// <03C85DBB> ../public/rendersystem/vertexdata.h:616
// member functions: 9
// member variables: 7
// class size: 96
class CDynamicVertexData<FullscreenQuadVertex_t> : public CVertexDataBase<FullscreenQuadVertex_t> {
public:
	/* class CVertexDataBase<FullscreenQuadVertex_t> <ancestor>; */ /* 0 64 */
	/* ../public/rendersystem/vertexdata.h:672 */
	void CDynamicVertexData(CDynamicVertexData<FullscreenQuadVertex_t>* , IRenderContext* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:684 */
	void CDynamicVertexData(CDynamicVertexData<FullscreenQuadVertex_t>* , IRenderContext* );
	/* ../public/rendersystem/vertexdata.h:708 */
	void ~CDynamicVertexData(CDynamicVertexData<FullscreenQuadVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:694 */
	void Init(CDynamicVertexData<FullscreenQuadVertex_t>* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:702 */
	void Reinit(CDynamicVertexData<FullscreenQuadVertex_t>* , int);
	/* ../public/rendersystem/vertexdata.h:760 */
	void Unlock(CDynamicVertexData<FullscreenQuadVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:788 */
	void Bind(CDynamicVertexData<FullscreenQuadVertex_t>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:637 */
	void UnlockAndBind(CDynamicVertexData<FullscreenQuadVertex_t>* , int, int, int);
protected:
	/* ../public/rendersystem/vertexdata.h:718 */
	void Lock(CDynamicVertexData<FullscreenQuadVertex_t>* , int);
private:
	DynamicVertexBufferHandle_t m_hVertexBuffer; /* 56 8 */
	const char * m_pDebugName; /* 64 8 */
	const char * m_pBudgetGroupName; /* 72 8 */
	int m_nStartOffsetInBytes; /* 80 4 */
	bool m_bOkToLock; /* 84 1 */
	bool m_bLocked; /* 85 1 */
} __attribute__((__aligned__(16)));

// <00832553> ../public/rendersystem/vertexdata.h:616
// member functions: 9
// member variables: 7
// class size: 112
class CDynamicVertexData<ResolveVertex_t> : public CVertexDataBase<ResolveVertex_t> {
public:
	/* class CVertexDataBase<ResolveVertex_t> <ancestor>; */ /* 0 80 */
	/* ../public/rendersystem/vertexdata.h:672 */
	void CDynamicVertexData(CDynamicVertexData<ResolveVertex_t>* , IRenderContext* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:684 */
	void CDynamicVertexData(CDynamicVertexData<ResolveVertex_t>* , IRenderContext* );
	/* ../public/rendersystem/vertexdata.h:708 */
	void ~CDynamicVertexData(CDynamicVertexData<ResolveVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:694 */
	void Init(CDynamicVertexData<ResolveVertex_t>* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:702 */
	void Reinit(CDynamicVertexData<ResolveVertex_t>* , int);
	/* ../public/rendersystem/vertexdata.h:760 */
	void Unlock(CDynamicVertexData<ResolveVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:788 */
	void Bind(CDynamicVertexData<ResolveVertex_t>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:637 */
	void UnlockAndBind(CDynamicVertexData<ResolveVertex_t>* , int, int, int);
protected:
	/* ../public/rendersystem/vertexdata.h:718 */
	void Lock(CDynamicVertexData<ResolveVertex_t>* , int);
private:
	DynamicVertexBufferHandle_t m_hVertexBuffer; /* 72 8 */
	const char * m_pDebugName; /* 80 8 */
	const char * m_pBudgetGroupName; /* 88 8 */
	int m_nStartOffsetInBytes; /* 96 4 */
	bool m_bOkToLock; /* 100 1 */
	bool m_bLocked; /* 101 1 */
} __attribute__((__aligned__(16)));

// <00832B5B> ../public/rendersystem/vertexdata.h:616
// member functions: 18
// member variables: 7
// class size: 96
class CDynamicVertexData<ClearVertex_t> : public CVertexDataBase<ClearVertex_t> {
public:
	/* class CVertexDataBase<ClearVertex_t> <ancestor>; */ /* 0 64 */
	/* ../public/rendersystem/vertexdata.h:672 */
	void CDynamicVertexData(CDynamicVertexData<ClearVertex_t>* , IRenderContext* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:684 */
	void CDynamicVertexData(CDynamicVertexData<ClearVertex_t>* , IRenderContext* );
	/* ../public/rendersystem/vertexdata.h:708 */
	void ~CDynamicVertexData(CDynamicVertexData<ClearVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:694 */
	void Init(CDynamicVertexData<ClearVertex_t>* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:702 */
	void Reinit(CDynamicVertexData<ClearVertex_t>* , int);
	/* ../public/rendersystem/vertexdata.h:760 */
	void Unlock(CDynamicVertexData<ClearVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:788 */
	void Bind(CDynamicVertexData<ClearVertex_t>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:637 */
	void UnlockAndBind(CDynamicVertexData<ClearVertex_t>* , int, int, int);
protected:
	/* ../public/rendersystem/vertexdata.h:718 */
	void Lock(CDynamicVertexData<ClearVertex_t>* , int);
private:
	DynamicVertexBufferHandle_t m_hVertexBuffer; /* 64 8 */
	const char * m_pDebugName; /* 72 8 */
	const char * m_pBudgetGroupName; /* 80 8 */
	int m_nStartOffsetInBytes; /* 88 4 */
	bool m_bOkToLock; /* 92 1 */
	bool m_bLocked; /* 93 1 */
	void CDynamicVertexData(class CDynamicVertexData<ClearVertex_t> *, class IRenderContext *, int, const char  *, const char  *); /* linkage=_ZN18CDynamicVertexDataI13ClearVertex_tEC4EP14IRenderContextiPKcS5_ */
	void CDynamicVertexData(class CDynamicVertexData<ClearVertex_t> *, class IRenderContext *); /* linkage=_ZN18CDynamicVertexDataI13ClearVertex_tEC4EP14IRenderContext */
	void ~CDynamicVertexData(class CDynamicVertexData<ClearVertex_t> *); /* linkage=_ZN18CDynamicVertexDataI13ClearVertex_tED4Ev */
	void Init(class CDynamicVertexData<ClearVertex_t> *, int, const char  *, const char  *); /* linkage=_ZN18CDynamicVertexDataI13ClearVertex_tE4InitEiPKcS3_ */
	void Reinit(class CDynamicVertexData<ClearVertex_t> *, int); /* linkage=_ZN18CDynamicVertexDataI13ClearVertex_tE6ReinitEi */
	void Unlock(class CDynamicVertexData<ClearVertex_t> *); /* linkage=_ZN18CDynamicVertexDataI13ClearVertex_tE6UnlockEv */
	void Bind(class CDynamicVertexData<ClearVertex_t> *, int, int, int); /* linkage=_ZN18CDynamicVertexDataI13ClearVertex_tE4BindEiii */
	void UnlockAndBind(class CDynamicVertexData<ClearVertex_t> *, int, int, int); /* linkage=_ZN18CDynamicVertexDataI13ClearVertex_tE13UnlockAndBindEiii */
	void Lock(class CDynamicVertexData<ClearVertex_t> *, int); /* linkage=_ZN18CDynamicVertexDataI13ClearVertex_tE4LockEi */
} __attribute__((__aligned__(16)));

// <002147D0> ../public/rendersystem/vertexdata.h:616
// member functions: 18
// member variables: 7
// class size: 96
class CDynamicVertexData<SkeletonMeshVertex_t> : public CVertexDataBase<SkeletonMeshVertex_t> {
public:
	/* class CVertexDataBase<SkeletonMeshVertex_t> <ancestor>; */ /* 0 64 */
	/* ../public/rendersystem/vertexdata.h:672 */
	void CDynamicVertexData(CDynamicVertexData<SkeletonMeshVertex_t>* , IRenderContext* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:684 */
	void CDynamicVertexData(CDynamicVertexData<SkeletonMeshVertex_t>* , IRenderContext* );
	/* ../public/rendersystem/vertexdata.h:708 */
	void ~CDynamicVertexData(CDynamicVertexData<SkeletonMeshVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:694 */
	void Init(CDynamicVertexData<SkeletonMeshVertex_t>* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:702 */
	void Reinit(CDynamicVertexData<SkeletonMeshVertex_t>* , int);
	/* ../public/rendersystem/vertexdata.h:760 */
	void Unlock(CDynamicVertexData<SkeletonMeshVertex_t>* );
	/* ../public/rendersystem/vertexdata.h:788 */
	void Bind(CDynamicVertexData<SkeletonMeshVertex_t>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:637 */
	void UnlockAndBind(CDynamicVertexData<SkeletonMeshVertex_t>* , int, int, int);
protected:
	/* ../public/rendersystem/vertexdata.h:718 */
	void Lock(CDynamicVertexData<SkeletonMeshVertex_t>* , int);
private:
	DynamicVertexBufferHandle_t m_hVertexBuffer; /* 64 8 */
	const char * m_pDebugName; /* 72 8 */
	const char * m_pBudgetGroupName; /* 80 8 */
	int m_nStartOffsetInBytes; /* 88 4 */
	bool m_bOkToLock; /* 92 1 */
	bool m_bLocked; /* 93 1 */
	void CDynamicVertexData(class CDynamicVertexData<SkeletonMeshVertex_t> *, class IRenderContext *, int, const char  *, const char  *); /* linkage=_ZN18CDynamicVertexDataI20SkeletonMeshVertex_tEC4EP14IRenderContextiPKcS5_ */
	void CDynamicVertexData(class CDynamicVertexData<SkeletonMeshVertex_t> *, class IRenderContext *); /* linkage=_ZN18CDynamicVertexDataI20SkeletonMeshVertex_tEC4EP14IRenderContext */
	void ~CDynamicVertexData(class CDynamicVertexData<SkeletonMeshVertex_t> *); /* linkage=_ZN18CDynamicVertexDataI20SkeletonMeshVertex_tED4Ev */
	void Init(class CDynamicVertexData<SkeletonMeshVertex_t> *, int, const char  *, const char  *); /* linkage=_ZN18CDynamicVertexDataI20SkeletonMeshVertex_tE4InitEiPKcS3_ */
	void Reinit(class CDynamicVertexData<SkeletonMeshVertex_t> *, int); /* linkage=_ZN18CDynamicVertexDataI20SkeletonMeshVertex_tE6ReinitEi */
	void Unlock(class CDynamicVertexData<SkeletonMeshVertex_t> *); /* linkage=_ZN18CDynamicVertexDataI20SkeletonMeshVertex_tE6UnlockEv */
	void Bind(class CDynamicVertexData<SkeletonMeshVertex_t> *, int, int, int); /* linkage=_ZN18CDynamicVertexDataI20SkeletonMeshVertex_tE4BindEiii */
	void UnlockAndBind(class CDynamicVertexData<SkeletonMeshVertex_t> *, int, int, int); /* linkage=_ZN18CDynamicVertexDataI20SkeletonMeshVertex_tE13UnlockAndBindEiii */
	void Lock(class CDynamicVertexData<SkeletonMeshVertex_t> *, int); /* linkage=_ZN18CDynamicVertexDataI20SkeletonMeshVertex_tE4LockEi */
} __attribute__((__aligned__(16)));

// <00427228> ../public/rendersystem/vertexdata.h:616
// member functions: 18
// member variables: 7
// class size: 96
class CDynamicVertexData<VertexColorUVPos_t> : public CVertexDataBase<VertexColorUVPos_t> {
public:
	/* class CVertexDataBase<VertexColorUVPos_t> <ancestor>; */ /* 0 64 */
	/* ../public/rendersystem/vertexdata.h:672 */
	void CDynamicVertexData(CDynamicVertexData<VertexColorUVPos_t>* , IRenderContext* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:684 */
	void CDynamicVertexData(CDynamicVertexData<VertexColorUVPos_t>* , IRenderContext* );
	/* ../public/rendersystem/vertexdata.h:708 */
	void ~CDynamicVertexData(CDynamicVertexData<VertexColorUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:694 */
	void Init(CDynamicVertexData<VertexColorUVPos_t>* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:702 */
	void Reinit(CDynamicVertexData<VertexColorUVPos_t>* , int);
	/* ../public/rendersystem/vertexdata.h:760 */
	void Unlock(CDynamicVertexData<VertexColorUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:788 */
	void Bind(CDynamicVertexData<VertexColorUVPos_t>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:637 */
	void UnlockAndBind(CDynamicVertexData<VertexColorUVPos_t>* , int, int, int);
protected:
	/* ../public/rendersystem/vertexdata.h:718 */
	void Lock(CDynamicVertexData<VertexColorUVPos_t>* , int);
private:
	DynamicVertexBufferHandle_t m_hVertexBuffer; /* 56 8 */
	const char * m_pDebugName; /* 64 8 */
	const char * m_pBudgetGroupName; /* 72 8 */
	int m_nStartOffsetInBytes; /* 80 4 */
	bool m_bOkToLock; /* 84 1 */
	bool m_bLocked; /* 85 1 */
	void CDynamicVertexData(class CDynamicVertexData<VertexColorUVPos_t> *, class IRenderContext *, int, const char  *, const char  *); /* linkage=_ZN18CDynamicVertexDataI18VertexColorUVPos_tEC4EP14IRenderContextiPKcS5_ */
	void CDynamicVertexData(class CDynamicVertexData<VertexColorUVPos_t> *, class IRenderContext *); /* linkage=_ZN18CDynamicVertexDataI18VertexColorUVPos_tEC4EP14IRenderContext */
	void ~CDynamicVertexData(class CDynamicVertexData<VertexColorUVPos_t> *); /* linkage=_ZN18CDynamicVertexDataI18VertexColorUVPos_tED4Ev */
	void Init(class CDynamicVertexData<VertexColorUVPos_t> *, int, const char  *, const char  *); /* linkage=_ZN18CDynamicVertexDataI18VertexColorUVPos_tE4InitEiPKcS3_ */
	void Reinit(class CDynamicVertexData<VertexColorUVPos_t> *, int); /* linkage=_ZN18CDynamicVertexDataI18VertexColorUVPos_tE6ReinitEi */
	void Unlock(class CDynamicVertexData<VertexColorUVPos_t> *); /* linkage=_ZN18CDynamicVertexDataI18VertexColorUVPos_tE6UnlockEv */
	void Bind(class CDynamicVertexData<VertexColorUVPos_t> *, int, int, int); /* linkage=_ZN18CDynamicVertexDataI18VertexColorUVPos_tE4BindEiii */
	void UnlockAndBind(class CDynamicVertexData<VertexColorUVPos_t> *, int, int, int); /* linkage=_ZN18CDynamicVertexDataI18VertexColorUVPos_tE13UnlockAndBindEiii */
	void Lock(class CDynamicVertexData<VertexColorUVPos_t> *, int); /* linkage=_ZN18CDynamicVertexDataI18VertexColorUVPos_tE4LockEi */
} __attribute__((__aligned__(16)));

// <004278ED> ../public/rendersystem/vertexdata.h:616
// member functions: 18
// member variables: 7
// class size: 128
class CDynamicVertexData<VertexUVPosColorNormalAndTangent_t> : public CVertexDataBase<VertexUVPosColorNormalAndTangent_t> {
public:
	/* class CVertexDataBase<VertexUVPosColorNormalAndTangent_t> <ancestor>; */ /* 0 96 */
	/* ../public/rendersystem/vertexdata.h:672 */
	void CDynamicVertexData(CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>* , IRenderContext* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:684 */
	void CDynamicVertexData(CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>* , IRenderContext* );
	/* ../public/rendersystem/vertexdata.h:708 */
	void ~CDynamicVertexData(CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/rendersystem/vertexdata.h:694 */
	void Init(CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:702 */
	void Reinit(CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>* , int);
	/* ../public/rendersystem/vertexdata.h:760 */
	void Unlock(CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/rendersystem/vertexdata.h:788 */
	void Bind(CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:637 */
	void UnlockAndBind(CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>* , int, int, int);
protected:
	/* ../public/rendersystem/vertexdata.h:718 */
	void Lock(CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>* , int);
private:
	DynamicVertexBufferHandle_t m_hVertexBuffer; /* 88 8 */
	const char * m_pDebugName; /* 96 8 */
	const char * m_pBudgetGroupName; /* 104 8 */
	int m_nStartOffsetInBytes; /* 112 4 */
	bool m_bOkToLock; /* 116 1 */
	bool m_bLocked; /* 117 1 */
	void CDynamicVertexData(class CDynamicVertexData<VertexUVPosColorNormalAndTangent_t> *, class IRenderContext *, int, const char  *, const char  *); /* linkage=_ZN18CDynamicVertexDataI34VertexUVPosColorNormalAndTangent_tEC4EP14IRenderContextiPKcS5_ */
	void CDynamicVertexData(class CDynamicVertexData<VertexUVPosColorNormalAndTangent_t> *, class IRenderContext *); /* linkage=_ZN18CDynamicVertexDataI34VertexUVPosColorNormalAndTangent_tEC4EP14IRenderContext */
	void ~CDynamicVertexData(class CDynamicVertexData<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN18CDynamicVertexDataI34VertexUVPosColorNormalAndTangent_tED4Ev */
	void Init(class CDynamicVertexData<VertexUVPosColorNormalAndTangent_t> *, int, const char  *, const char  *); /* linkage=_ZN18CDynamicVertexDataI34VertexUVPosColorNormalAndTangent_tE4InitEiPKcS3_ */
	void Reinit(class CDynamicVertexData<VertexUVPosColorNormalAndTangent_t> *, int); /* linkage=_ZN18CDynamicVertexDataI34VertexUVPosColorNormalAndTangent_tE6ReinitEi */
	void Unlock(class CDynamicVertexData<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN18CDynamicVertexDataI34VertexUVPosColorNormalAndTangent_tE6UnlockEv */
	void Bind(class CDynamicVertexData<VertexUVPosColorNormalAndTangent_t> *, int, int, int); /* linkage=_ZN18CDynamicVertexDataI34VertexUVPosColorNormalAndTangent_tE4BindEiii */
	void UnlockAndBind(class CDynamicVertexData<VertexUVPosColorNormalAndTangent_t> *, int, int, int); /* linkage=_ZN18CDynamicVertexDataI34VertexUVPosColorNormalAndTangent_tE13UnlockAndBindEiii */
	void Lock(class CDynamicVertexData<VertexUVPosColorNormalAndTangent_t> *, int); /* linkage=_ZN18CDynamicVertexDataI34VertexUVPosColorNormalAndTangent_tE4LockEi */
} __attribute__((__aligned__(16)));

// <03C87B30> ../public/rendersystem/vertexdata.h:637
inline void CDynamicVertexData<FullscreenQuadVertex_t>::UnlockAndBind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <03AE81A5> ../public/rendersystem/vertexdata.h:637
inline void CDynamicVertexData<VertexUVPos_t>::UnlockAndBind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <03A4D28C> ../public/rendersystem/vertexdata.h:637
inline void CDynamicVertexData<VertexPos2DTex2D_t>::UnlockAndBind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <03225C2D> ../public/rendersystem/vertexdata.h:637
inline void CDynamicVertexData<VertexPostProcess_t>::UnlockAndBind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <03127495> ../public/rendersystem/vertexdata.h:637
inline void CDynamicVertexData<VertexWireFrame_t>::UnlockAndBind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <03126FC0> ../public/rendersystem/vertexdata.h:637
inline void CDynamicVertexData<VertexWireFrame2D_t>::UnlockAndBind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <03126F4E> ../public/rendersystem/vertexdata.h:637
inline void CDynamicVertexData<VertexDebugUI_t>::UnlockAndBind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <02EA63E2> ../public/rendersystem/vertexdata.h:637
inline void CDynamicVertexData<MorphPositionSpeedVertex_t>::UnlockAndBind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <02EA618E> ../public/rendersystem/vertexdata.h:637
inline void CDynamicVertexData<MorphNormalWrinkleVertex_t>::UnlockAndBind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <028BAF75> ../public/rendersystem/vertexdata.h:637
inline void CDynamicVertexData<CQuadRenderer::Vertex_t>::UnlockAndBind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <0083D91D> ../public/rendersystem/vertexdata.h:637
inline void CDynamicVertexData<ResolveVertex_t>::UnlockAndBind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <0083D377> ../public/rendersystem/vertexdata.h:637
inline void CDynamicVertexData<ClearVertex_t>::UnlockAndBind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <0021A72F> ../public/rendersystem/vertexdata.h:637
inline void CDynamicVertexData<SkeletonMeshVertex_t>::UnlockAndBind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <00441BAC> ../public/rendersystem/vertexdata.h:637
inline void CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::UnlockAndBind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <03C87CB2> ../public/rendersystem/vertexdata.h:672
void CDynamicVertexData<FullscreenQuadVertex_t>::CDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <03C87C65> ../public/rendersystem/vertexdata.h:672
inline void CDynamicVertexData<FullscreenQuadVertex_t>::CDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <03AE8352> ../public/rendersystem/vertexdata.h:672
void CDynamicVertexData<VertexUVPos_t>::CDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <03AE8305> ../public/rendersystem/vertexdata.h:672
inline void CDynamicVertexData<VertexUVPos_t>::CDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <03A4D40B> ../public/rendersystem/vertexdata.h:672
void CDynamicVertexData<VertexPos2DTex2D_t>::CDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <03A4D3BE> ../public/rendersystem/vertexdata.h:672
inline void CDynamicVertexData<VertexPos2DTex2D_t>::CDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <03225DAA> ../public/rendersystem/vertexdata.h:672
void CDynamicVertexData<VertexPostProcess_t>::CDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <03225D5D> ../public/rendersystem/vertexdata.h:672
inline void CDynamicVertexData<VertexPostProcess_t>::CDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <0312763E> ../public/rendersystem/vertexdata.h:672
void CDynamicVertexData<VertexWireFrame_t>::CDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <031275F1> ../public/rendersystem/vertexdata.h:672
inline void CDynamicVertexData<VertexWireFrame_t>::CDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <0312713C> ../public/rendersystem/vertexdata.h:672
void CDynamicVertexData<VertexWireFrame2D_t>::CDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <031270EF> ../public/rendersystem/vertexdata.h:672
inline void CDynamicVertexData<VertexWireFrame2D_t>::CDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <03126EF3> ../public/rendersystem/vertexdata.h:672
void CDynamicVertexData<VertexDebugUI_t>::CDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <03126EA6> ../public/rendersystem/vertexdata.h:672
inline void CDynamicVertexData<VertexDebugUI_t>::CDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <02EA64DC> ../public/rendersystem/vertexdata.h:672
void CDynamicVertexData<MorphPositionSpeedVertex_t>::CDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <02EA648F> ../public/rendersystem/vertexdata.h:672
inline void CDynamicVertexData<MorphPositionSpeedVertex_t>::CDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <02EA624B> ../public/rendersystem/vertexdata.h:672
void CDynamicVertexData<MorphNormalWrinkleVertex_t>::CDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <02EA61FE> ../public/rendersystem/vertexdata.h:672
inline void CDynamicVertexData<MorphNormalWrinkleVertex_t>::CDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <028BB0F6> ../public/rendersystem/vertexdata.h:672
void CDynamicVertexData<CQuadRenderer::Vertex_t>::CDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <028BB0A9> ../public/rendersystem/vertexdata.h:672
inline void CDynamicVertexData<CQuadRenderer::Vertex_t>::CDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <0083DABF> ../public/rendersystem/vertexdata.h:672
void CDynamicVertexData<ResolveVertex_t>::CDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <0083DA72> ../public/rendersystem/vertexdata.h:672
inline void CDynamicVertexData<ResolveVertex_t>::CDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <0083D4CB> ../public/rendersystem/vertexdata.h:672
void CDynamicVertexData<ClearVertex_t>::CDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <0083D47E> ../public/rendersystem/vertexdata.h:672
inline void CDynamicVertexData<ClearVertex_t>::CDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <0021A8AA> ../public/rendersystem/vertexdata.h:672
void CDynamicVertexData<SkeletonMeshVertex_t>::CDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <0021A85D> ../public/rendersystem/vertexdata.h:672
inline void CDynamicVertexData<SkeletonMeshVertex_t>::CDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <00441D7E> ../public/rendersystem/vertexdata.h:672
void CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::CDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <00441D31> ../public/rendersystem/vertexdata.h:672
inline void CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::CDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <00439DF5> ../public/rendersystem/vertexdata.h:672
void CDynamicVertexData<VertexColorUVPos_t>::CDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <00439DA8> ../public/rendersystem/vertexdata.h:672
inline void CDynamicVertexData<VertexColorUVPos_t>::CDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <02EA63BC> ../public/rendersystem/vertexdata.h:702
inline void CDynamicVertexData<MorphPositionSpeedVertex_t>::Reinit(int nVertexCount)
{
} /* size: 0 */

// <02EA6168> ../public/rendersystem/vertexdata.h:702
inline void CDynamicVertexData<MorphNormalWrinkleVertex_t>::Reinit(int nVertexCount)
{
} /* size: 0 */

// <03C87C4E> ../public/rendersystem/vertexdata.h:708
void CDynamicVertexData<FullscreenQuadVertex_t>::~CDynamicVertexData()
{
} /* size: 0 */

// <03C87C35> ../public/rendersystem/vertexdata.h:708
inline void CDynamicVertexData<FullscreenQuadVertex_t>::~CDynamicVertexData()
{
} /* size: 0 */

// <03AE82EE> ../public/rendersystem/vertexdata.h:708
void CDynamicVertexData<VertexUVPos_t>::~CDynamicVertexData()
{
} /* size: 0 */

// <03AE82D5> ../public/rendersystem/vertexdata.h:708
inline void CDynamicVertexData<VertexUVPos_t>::~CDynamicVertexData()
{
} /* size: 0 */

// <03A4D3A7> ../public/rendersystem/vertexdata.h:708
void CDynamicVertexData<VertexPos2DTex2D_t>::~CDynamicVertexData()
{
} /* size: 0 */

// <03A4D38E> ../public/rendersystem/vertexdata.h:708
inline void CDynamicVertexData<VertexPos2DTex2D_t>::~CDynamicVertexData()
{
} /* size: 0 */

// <03225D46> ../public/rendersystem/vertexdata.h:708
void CDynamicVertexData<VertexPostProcess_t>::~CDynamicVertexData()
{
} /* size: 0 */

// <03225D2D> ../public/rendersystem/vertexdata.h:708
inline void CDynamicVertexData<VertexPostProcess_t>::~CDynamicVertexData()
{
} /* size: 0 */

// <031275DA> ../public/rendersystem/vertexdata.h:708
void CDynamicVertexData<VertexWireFrame_t>::~CDynamicVertexData()
{
} /* size: 0 */

// <031275C1> ../public/rendersystem/vertexdata.h:708
inline void CDynamicVertexData<VertexWireFrame_t>::~CDynamicVertexData()
{
} /* size: 0 */

// <031270D8> ../public/rendersystem/vertexdata.h:708
void CDynamicVertexData<VertexWireFrame2D_t>::~CDynamicVertexData()
{
} /* size: 0 */

// <031270BF> ../public/rendersystem/vertexdata.h:708
inline void CDynamicVertexData<VertexWireFrame2D_t>::~CDynamicVertexData()
{
} /* size: 0 */

// <03126F37> ../public/rendersystem/vertexdata.h:708
void CDynamicVertexData<VertexDebugUI_t>::~CDynamicVertexData()
{
} /* size: 0 */

// <03126F1E> ../public/rendersystem/vertexdata.h:708
inline void CDynamicVertexData<VertexDebugUI_t>::~CDynamicVertexData()
{
} /* size: 0 */

// <02EA6478> ../public/rendersystem/vertexdata.h:708
void CDynamicVertexData<MorphPositionSpeedVertex_t>::~CDynamicVertexData()
{
} /* size: 0 */

// <02EA645F> ../public/rendersystem/vertexdata.h:708
inline void CDynamicVertexData<MorphPositionSpeedVertex_t>::~CDynamicVertexData()
{
} /* size: 0 */

// <02EA61E7> ../public/rendersystem/vertexdata.h:708
void CDynamicVertexData<MorphNormalWrinkleVertex_t>::~CDynamicVertexData()
{
} /* size: 0 */

// <02EA61CE> ../public/rendersystem/vertexdata.h:708
inline void CDynamicVertexData<MorphNormalWrinkleVertex_t>::~CDynamicVertexData()
{
} /* size: 0 */

// <028BB092> ../public/rendersystem/vertexdata.h:708
void CDynamicVertexData<CQuadRenderer::Vertex_t>::~CDynamicVertexData()
{
} /* size: 0 */

// <028BB079> ../public/rendersystem/vertexdata.h:708
inline void CDynamicVertexData<CQuadRenderer::Vertex_t>::~CDynamicVertexData()
{
} /* size: 0 */

// <0083DA5B> ../public/rendersystem/vertexdata.h:708
void CDynamicVertexData<ResolveVertex_t>::~CDynamicVertexData()
{
} /* size: 0 */

// <0083DA42> ../public/rendersystem/vertexdata.h:708
inline void CDynamicVertexData<ResolveVertex_t>::~CDynamicVertexData()
{
} /* size: 0 */

// <0083D467> ../public/rendersystem/vertexdata.h:708
void CDynamicVertexData<ClearVertex_t>::~CDynamicVertexData()
{
} /* size: 0 */

// <0083D44E> ../public/rendersystem/vertexdata.h:708
inline void CDynamicVertexData<ClearVertex_t>::~CDynamicVertexData()
{
} /* size: 0 */

// <0021A846> ../public/rendersystem/vertexdata.h:708
void CDynamicVertexData<SkeletonMeshVertex_t>::~CDynamicVertexData()
{
} /* size: 0 */

// <0021A82D> ../public/rendersystem/vertexdata.h:708
inline void CDynamicVertexData<SkeletonMeshVertex_t>::~CDynamicVertexData()
{
} /* size: 0 */

// <004421CF> ../public/rendersystem/vertexdata.h:708
void CDynamicVertexData<VertexColorUVPos_t>::~CDynamicVertexData()
{
} /* size: 0 */

// <004421B6> ../public/rendersystem/vertexdata.h:708
inline void CDynamicVertexData<VertexColorUVPos_t>::~CDynamicVertexData()
{
} /* size: 0 */

// <0044207C> ../public/rendersystem/vertexdata.h:708
void CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::~CDynamicVertexData()
{
} /* size: 0 */

// <00442063> ../public/rendersystem/vertexdata.h:708
inline void CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::~CDynamicVertexData()
{
} /* size: 0 */

// <03C87602> ../public/rendersystem/vertexdata.h:718
// variables: 5
inline void CDynamicVertexData<FullscreenQuadVertex_t>::Lock(int nVertexCount)
{
	const char   __FUNCTION__; // 25381
	BufferDesc_t vertexDesc; // 727
	DynamicLockDesc_t desc; // 733
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 722
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 723
	}
} /* size: 0, variables: 3 */

// <03AE5139> ../public/rendersystem/vertexdata.h:718
// variables: 5
inline void CDynamicVertexData<VertexUVPos_t>::Lock(int nVertexCount)
{
	const char   __FUNCTION__; // 15833
	BufferDesc_t vertexDesc; // 727
	DynamicLockDesc_t desc; // 733
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 722
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 723
	}
} /* size: 0, variables: 3 */

// <03A4C20E> ../public/rendersystem/vertexdata.h:718
// variables: 5
inline void CDynamicVertexData<VertexPos2DTex2D_t>::Lock(int nVertexCount)
{
	const char   __FUNCTION__; // 11842
	BufferDesc_t vertexDesc; // 727
	DynamicLockDesc_t desc; // 733
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 722
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 723
	}
} /* size: 0, variables: 3 */

// <0322258D> ../public/rendersystem/vertexdata.h:718
// variables: 5
inline void CDynamicVertexData<VertexPostProcess_t>::Lock(int nVertexCount)
{
	const char   __FUNCTION__; // 39406
	BufferDesc_t vertexDesc; // 727
	DynamicLockDesc_t desc; // 733
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 722
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 723
	}
} /* size: 0, variables: 3 */

// <03222429> ../public/rendersystem/vertexdata.h:718
// variables: 5
inline void CDynamicVertexData<VertexPos2DTex2D_t>::Lock(int nVertexCount)
{
	const char   __FUNCTION__; // 39406
	BufferDesc_t vertexDesc; // 727
	DynamicLockDesc_t desc; // 733
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 722
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 723
	}
} /* size: 0, variables: 3 */

// <031218AC> ../public/rendersystem/vertexdata.h:718
// variables: 5
inline void CDynamicVertexData<VertexWireFrame_t>::Lock(int nVertexCount)
{
	const char   __FUNCTION__; // 38713
	BufferDesc_t vertexDesc; // 727
	DynamicLockDesc_t desc; // 733
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 722
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 723
	}
} /* size: 0, variables: 3 */

// <03121533> ../public/rendersystem/vertexdata.h:718
// variables: 5
inline void CDynamicVertexData<VertexWireFrame2D_t>::Lock(int nVertexCount)
{
	const char   __FUNCTION__; // 38713
	BufferDesc_t vertexDesc; // 727
	DynamicLockDesc_t desc; // 733
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 722
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 723
	}
} /* size: 0, variables: 3 */

// <031212DB> ../public/rendersystem/vertexdata.h:718
// variables: 5
inline void CDynamicVertexData<VertexDebugUI_t>::Lock(int nVertexCount)
{
	const char   __FUNCTION__; // 38713
	BufferDesc_t vertexDesc; // 727
	DynamicLockDesc_t desc; // 733
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 722
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 723
	}
} /* size: 0, variables: 3 */

// <0311C2F2> ../public/rendersystem/vertexdata.h:718
// variables: 5
inline void CDynamicVertexData<VertexUVPos_t>::Lock(int nVertexCount)
{
	const char   __FUNCTION__; // 38713
	BufferDesc_t vertexDesc; // 727
	DynamicLockDesc_t desc; // 733
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 722
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 723
	}
} /* size: 0, variables: 3 */

// <02E944E2> ../public/rendersystem/vertexdata.h:718
// variables: 5
inline void CDynamicVertexData<MorphPositionSpeedVertex_t>::Lock(int nVertexCount)
{
	const char   __FUNCTION__; // 63277
	BufferDesc_t vertexDesc; // 727
	DynamicLockDesc_t desc; // 733
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 722
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 723
	}
} /* size: 0, variables: 3 */

// <02E942EF> ../public/rendersystem/vertexdata.h:718
// variables: 5
inline void CDynamicVertexData<MorphNormalWrinkleVertex_t>::Lock(int nVertexCount)
{
	const char   __FUNCTION__; // 63277
	BufferDesc_t vertexDesc; // 727
	DynamicLockDesc_t desc; // 733
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 722
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 723
	}
} /* size: 0, variables: 3 */

// <028BAA3E> ../public/rendersystem/vertexdata.h:718
// variables: 5
inline void CDynamicVertexData<CQuadRenderer::Vertex_t>::Lock(int nVertexCount)
{
	const char   __FUNCTION__; // 33191
	BufferDesc_t vertexDesc; // 727
	DynamicLockDesc_t desc; // 733
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 722
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 723
	}
} /* size: 0, variables: 3 */

// <0083B126> ../public/rendersystem/vertexdata.h:718
// variables: 5
inline void CDynamicVertexData<ResolveVertex_t>::Lock(int nVertexCount)
{
	const char   __FUNCTION__; // 22670
	BufferDesc_t vertexDesc; // 727
	DynamicLockDesc_t desc; // 733
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 722
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 723
	}
} /* size: 0, variables: 3 */

// <0083AC9D> ../public/rendersystem/vertexdata.h:718
// variables: 5
inline void CDynamicVertexData<ClearVertex_t>::Lock(int nVertexCount)
{
	const char   __FUNCTION__; // 22670
	BufferDesc_t vertexDesc; // 727
	DynamicLockDesc_t desc; // 733
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 722
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 723
	}
} /* size: 0, variables: 3 */

// <00219010> ../public/rendersystem/vertexdata.h:718
// variables: 5
inline void CDynamicVertexData<SkeletonMeshVertex_t>::Lock(int nVertexCount)
{
	const char   __FUNCTION__; // 6178
	BufferDesc_t vertexDesc; // 727
	DynamicLockDesc_t desc; // 733
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 722
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 723
	}
} /* size: 0, variables: 3 */

// <00439930> ../public/rendersystem/vertexdata.h:718
// variables: 5
inline void CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Lock(int nVertexCount)
{
	const char   __FUNCTION__; // 57747
	BufferDesc_t vertexDesc; // 727
	DynamicLockDesc_t desc; // 733
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 722
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 723
	}
} /* size: 0, variables: 3 */

// <00431E44> ../public/rendersystem/vertexdata.h:718
// variables: 5
inline void CDynamicVertexData<VertexColorUVPos_t>::Lock(int nVertexCount)
{
	const char   __FUNCTION__; // 57747
	BufferDesc_t vertexDesc; // 727
	DynamicLockDesc_t desc; // 733
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 722
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 723
	}
} /* size: 0, variables: 3 */

// <03C875E9> ../public/rendersystem/vertexdata.h:760
inline void CDynamicVertexData<FullscreenQuadVertex_t>::Unlock()
{
} /* size: 0 */

// <03AE5120> ../public/rendersystem/vertexdata.h:760
inline void CDynamicVertexData<VertexUVPos_t>::Unlock()
{
} /* size: 0 */

// <03A4C1F5> ../public/rendersystem/vertexdata.h:760
inline void CDynamicVertexData<VertexPos2DTex2D_t>::Unlock()
{
} /* size: 0 */

// <03222574> ../public/rendersystem/vertexdata.h:760
inline void CDynamicVertexData<VertexPostProcess_t>::Unlock()
{
} /* size: 0 */

// <031271BD> ../public/rendersystem/vertexdata.h:760
inline void CDynamicVertexData<VertexWireFrame_t>::Unlock()
{
} /* size: 0 */

// <0312151A> ../public/rendersystem/vertexdata.h:760
inline void CDynamicVertexData<VertexWireFrame2D_t>::Unlock()
{
} /* size: 0 */

// <031214C1> ../public/rendersystem/vertexdata.h:760
inline void CDynamicVertexData<VertexDebugUI_t>::Unlock()
{
} /* size: 0 */

// <02E944C9> ../public/rendersystem/vertexdata.h:760
inline void CDynamicVertexData<MorphPositionSpeedVertex_t>::Unlock()
{
} /* size: 0 */

// <02E942D6> ../public/rendersystem/vertexdata.h:760
inline void CDynamicVertexData<MorphNormalWrinkleVertex_t>::Unlock()
{
} /* size: 0 */

// <028BAA25> ../public/rendersystem/vertexdata.h:760
inline void CDynamicVertexData<CQuadRenderer::Vertex_t>::Unlock()
{
} /* size: 0 */

// <0083B10D> ../public/rendersystem/vertexdata.h:760
inline void CDynamicVertexData<ResolveVertex_t>::Unlock()
{
} /* size: 0 */

// <0083AC84> ../public/rendersystem/vertexdata.h:760
inline void CDynamicVertexData<ClearVertex_t>::Unlock()
{
} /* size: 0 */

// <00218FF7> ../public/rendersystem/vertexdata.h:760
inline void CDynamicVertexData<SkeletonMeshVertex_t>::Unlock()
{
} /* size: 0 */

// <00439D15> ../public/rendersystem/vertexdata.h:760
inline void CDynamicVertexData<VertexColorUVPos_t>::Unlock()
{
} /* size: 0 */

// <00439C29> ../public/rendersystem/vertexdata.h:760
inline void CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock()
{
} /* size: 0 */

// <03C875A9> ../public/rendersystem/vertexdata.h:788
inline void CDynamicVertexData<FullscreenQuadVertex_t>::Bind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <03AE50E0> ../public/rendersystem/vertexdata.h:788
inline void CDynamicVertexData<VertexUVPos_t>::Bind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <03A4C1B5> ../public/rendersystem/vertexdata.h:788
inline void CDynamicVertexData<VertexPos2DTex2D_t>::Bind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <03222534> ../public/rendersystem/vertexdata.h:788
inline void CDynamicVertexData<VertexPostProcess_t>::Bind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <031271D6> ../public/rendersystem/vertexdata.h:788
inline void CDynamicVertexData<VertexWireFrame_t>::Bind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <031214DA> ../public/rendersystem/vertexdata.h:788
inline void CDynamicVertexData<VertexWireFrame2D_t>::Bind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <03121481> ../public/rendersystem/vertexdata.h:788
inline void CDynamicVertexData<VertexDebugUI_t>::Bind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <02E94465> ../public/rendersystem/vertexdata.h:788
inline void CDynamicVertexData<MorphPositionSpeedVertex_t>::Bind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <02E94296> ../public/rendersystem/vertexdata.h:788
inline void CDynamicVertexData<MorphNormalWrinkleVertex_t>::Bind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <028BA9E5> ../public/rendersystem/vertexdata.h:788
inline void CDynamicVertexData<CQuadRenderer::Vertex_t>::Bind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <0083B0CD> ../public/rendersystem/vertexdata.h:788
inline void CDynamicVertexData<ResolveVertex_t>::Bind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <0083AC44> ../public/rendersystem/vertexdata.h:788
inline void CDynamicVertexData<ClearVertex_t>::Bind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <00218F93> ../public/rendersystem/vertexdata.h:788
inline void CDynamicVertexData<SkeletonMeshVertex_t>::Bind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <004398F0> ../public/rendersystem/vertexdata.h:788
inline void CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Bind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <00431E04> ../public/rendersystem/vertexdata.h:788
inline void CDynamicVertexData<VertexColorUVPos_t>::Bind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <00484ACD> ../public/rendersystem/vertexdata.h:808
void CSysMemDynamicVertexData<VertexColorUVPos_t>::~CSysMemDynamicVertexData()
{
} /* size: 0 */

// <00484AB0> ../public/rendersystem/vertexdata.h:808
inline void CSysMemDynamicVertexData<VertexColorUVPos_t>::~CSysMemDynamicVertexData()
{
} /* size: 0 */

// <00481E93> ../public/rendersystem/vertexdata.h:808
void CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::~CSysMemDynamicVertexData()
{
} /* size: 0 */

// <00481E76> ../public/rendersystem/vertexdata.h:808
inline void CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::~CSysMemDynamicVertexData()
{
} /* size: 0 */

// <00427418> ../public/rendersystem/vertexdata.h:808
// member functions: 16
// member variables: 2
// class size: 96
class CSysMemDynamicVertexData<VertexColorUVPos_t> : public CDynamicVertexData<VertexColorUVPos_t> {
public:
	/* class CDynamicVertexData<VertexColorUVPos_t> <ancestor>; */ /* 0 96 */
	/* ../public/rendersystem/vertexdata.h:813 */
	void CSysMemDynamicVertexData(CSysMemDynamicVertexData<VertexColorUVPos_t>* , IRenderContext* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:818 */
	void CSysMemDynamicVertexData(CSysMemDynamicVertexData<VertexColorUVPos_t>* , IRenderContext* );
	/* ../public/rendersystem/vertexdata.h:826 */
	void Init(CSysMemDynamicVertexData<VertexColorUVPos_t>* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:832 */
	void Reinit(CSysMemDynamicVertexData<VertexColorUVPos_t>* , int);
	/* ../public/rendersystem/vertexdata.h:838 */
	void Unlock(CSysMemDynamicVertexData<VertexColorUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:844 */
	void Bind(CSysMemDynamicVertexData<VertexColorUVPos_t>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:849 */
	void UnlockAndBind(CSysMemDynamicVertexData<VertexColorUVPos_t>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:855 */
	VertexColorUVPos_t& CurrentVertex(CSysMemDynamicVertexData<VertexColorUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:861 */
	void AdvanceVertex(CSysMemDynamicVertexData<VertexColorUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:884 */
	void AdvanceVertexUnsafe(CSysMemDynamicVertexData<VertexColorUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:892 */
	void AdvanceVertexCount(CSysMemDynamicVertexData<VertexColorUVPos_t>* , int);
	/* ../public/rendersystem/vertexdata.h:903 */
	VertexColorUVPos_t* operator->(CSysMemDynamicVertexData<VertexColorUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:904 */
	const VertexColorUVPos_t* operator->(const CSysMemDynamicVertexData<VertexColorUVPos_t>* );
private:
	/* ../public/rendersystem/vertexdata.h:912 */
	void SetCurrentVertex(CSysMemDynamicVertexData<VertexColorUVPos_t>* );
	/* ../public/rendersystem/vertexdata.h:923 */
	void Lock(CSysMemDynamicVertexData<VertexColorUVPos_t>* , int);
	VertexColorUVPos_t * m_pCurrentVertex; /* 88 8 */
	void ~CSysMemDynamicVertexData(CSysMemDynamicVertexData<VertexColorUVPos_t>* );
} __attribute__((__aligned__(16)));

// <00427ADD> ../public/rendersystem/vertexdata.h:808
// member functions: 32
// member variables: 2
// class size: 128
class CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t> : public CDynamicVertexData<VertexUVPosColorNormalAndTangent_t> {
public:
	/* class CDynamicVertexData<VertexUVPosColorNormalAndTangent_t> <ancestor>; */ /* 0 128 */
	/* ../public/rendersystem/vertexdata.h:813 */
	void CSysMemDynamicVertexData(CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>* , IRenderContext* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:818 */
	void CSysMemDynamicVertexData(CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>* , IRenderContext* );
	/* ../public/rendersystem/vertexdata.h:826 */
	void Init(CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>* , int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:832 */
	void Reinit(CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>* , int);
	/* ../public/rendersystem/vertexdata.h:838 */
	void Unlock(CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/rendersystem/vertexdata.h:844 */
	void Bind(CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:849 */
	void UnlockAndBind(CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>* , int, int, int);
	/* ../public/rendersystem/vertexdata.h:855 */
	VertexUVPosColorNormalAndTangent_t& CurrentVertex(CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/rendersystem/vertexdata.h:861 */
	void AdvanceVertex(CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/rendersystem/vertexdata.h:884 */
	void AdvanceVertexUnsafe(CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/rendersystem/vertexdata.h:892 */
	void AdvanceVertexCount(CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>* , int);
	/* ../public/rendersystem/vertexdata.h:903 */
	VertexUVPosColorNormalAndTangent_t* operator->(CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/rendersystem/vertexdata.h:904 */
	const VertexUVPosColorNormalAndTangent_t* operator->(const CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>* );
private:
	/* ../public/rendersystem/vertexdata.h:912 */
	void SetCurrentVertex(CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/rendersystem/vertexdata.h:923 */
	void Lock(CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>* , int);
	VertexUVPosColorNormalAndTangent_t * m_pCurrentVertex; /* 120 8 */
	void ~CSysMemDynamicVertexData(CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>* );
	void CSysMemDynamicVertexData(class CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t> *, class IRenderContext *, int, const char  *, const char  *); /* linkage=_ZN24CSysMemDynamicVertexDataI34VertexUVPosColorNormalAndTangent_tEC4EP14IRenderContextiPKcS5_ */
	void CSysMemDynamicVertexData(class CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t> *, class IRenderContext *); /* linkage=_ZN24CSysMemDynamicVertexDataI34VertexUVPosColorNormalAndTangent_tEC4EP14IRenderContext */
	void Init(class CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t> *, int, const char  *, const char  *); /* linkage=_ZN24CSysMemDynamicVertexDataI34VertexUVPosColorNormalAndTangent_tE4InitEiPKcS3_ */
	void Reinit(class CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t> *, int); /* linkage=_ZN24CSysMemDynamicVertexDataI34VertexUVPosColorNormalAndTangent_tE6ReinitEi */
	void Unlock(class CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN24CSysMemDynamicVertexDataI34VertexUVPosColorNormalAndTangent_tE6UnlockEv */
	void Bind(class CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t> *, int, int, int); /* linkage=_ZN24CSysMemDynamicVertexDataI34VertexUVPosColorNormalAndTangent_tE4BindEiii */
	void UnlockAndBind(class CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t> *, int, int, int); /* linkage=_ZN24CSysMemDynamicVertexDataI34VertexUVPosColorNormalAndTangent_tE13UnlockAndBindEiii */
	class VertexUVPosColorNormalAndTangent_t & CurrentVertex(class CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN24CSysMemDynamicVertexDataI34VertexUVPosColorNormalAndTangent_tE13CurrentVertexEv */
	/* <4a2a9f> ../public/rendersystem/vertexdata.h:861 */
	void AdvanceVertex(class CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN24CSysMemDynamicVertexDataI34VertexUVPosColorNormalAndTangent_tE13AdvanceVertexEv */
	void AdvanceVertexUnsafe(class CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN24CSysMemDynamicVertexDataI34VertexUVPosColorNormalAndTangent_tE19AdvanceVertexUnsafeEv */
	void AdvanceVertexCount(class CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t> *, int); /* linkage=_ZN24CSysMemDynamicVertexDataI34VertexUVPosColorNormalAndTangent_tE18AdvanceVertexCountEi */
	class VertexUVPosColorNormalAndTangent_t * operator->(class CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN24CSysMemDynamicVertexDataI34VertexUVPosColorNormalAndTangent_tEptEv */
	const class VertexUVPosColorNormalAndTangent_t  * operator->(const class CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>  *); /* linkage=_ZNK24CSysMemDynamicVertexDataI34VertexUVPosColorNormalAndTangent_tEptEv */
	void SetCurrentVertex(class CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN24CSysMemDynamicVertexDataI34VertexUVPosColorNormalAndTangent_tE16SetCurrentVertexEv */
	void Lock(class CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t> *, int); /* linkage=_ZN24CSysMemDynamicVertexDataI34VertexUVPosColorNormalAndTangent_tE4LockEi */
	void ~CSysMemDynamicVertexData(class CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN24CSysMemDynamicVertexDataI34VertexUVPosColorNormalAndTangent_tED4Ev */
} __attribute__((__aligned__(16)));

// <00442233> ../public/rendersystem/vertexdata.h:813
void CSysMemDynamicVertexData<VertexColorUVPos_t>::CSysMemDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <004421E6> ../public/rendersystem/vertexdata.h:813
inline void CSysMemDynamicVertexData<VertexColorUVPos_t>::CSysMemDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <004420E0> ../public/rendersystem/vertexdata.h:813
void CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::CSysMemDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <00442093> ../public/rendersystem/vertexdata.h:813
inline void CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::CSysMemDynamicVertexData(IRenderContext* pRenderContext, int nVertexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <00439C10> ../public/rendersystem/vertexdata.h:838
inline void CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock()
{
} /* size: 0 */

// <00439CBC> ../public/rendersystem/vertexdata.h:844
inline void CSysMemDynamicVertexData<VertexColorUVPos_t>::Bind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <00439BD0> ../public/rendersystem/vertexdata.h:844
inline void CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Bind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <00442176> ../public/rendersystem/vertexdata.h:849
inline void CSysMemDynamicVertexData<VertexColorUVPos_t>::UnlockAndBind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <00441F3C> ../public/rendersystem/vertexdata.h:849
inline void CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::UnlockAndBind(int nSlot, int nOffset, int nStride)
{
} /* size: 0 */

// <004A2A9F> ../public/rendersystem/vertexdata.h:861
// function call: 1
void CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex()
{
	{
	}
	{
	}
	{
	}
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 861
} /* size: 151, inline expansions: 1 (38 bytes) */

// <004A29DF> ../public/rendersystem/vertexdata.h:861
// function call: 1
void CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex()
{
	{
	}
	{
	}
	{
	}
	CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 861
} /* size: 151, inline expansions: 1 (38 bytes) */

// <0044225E> ../public/rendersystem/vertexdata.h:861
// variables: 4
inline void CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex()
{
	const char   __FUNCTION__; // 57985
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 867
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 875
	}
} /* size: 0, variables: 1 */

// <00441F7C> ../public/rendersystem/vertexdata.h:861
// variables: 4
inline void CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex()
{
	const char   __FUNCTION__; // 57985
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 867
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 875
	}
} /* size: 0, variables: 1 */

// <0044232C> ../public/rendersystem/vertexdata.h:903
inline void CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->()
{
} /* size: 0 */

// <0044204A> ../public/rendersystem/vertexdata.h:903
inline void CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->()
{
} /* size: 0 */

// <00439D8F> ../public/rendersystem/vertexdata.h:912
inline void CSysMemDynamicVertexData<VertexColorUVPos_t>::SetCurrentVertex()
{
} /* size: 0 */

// <00439CA3> ../public/rendersystem/vertexdata.h:912
inline void CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::SetCurrentVertex()
{
} /* size: 0 */

// <01B4F4C1> ../public/rendersystem/vertexdata.h:938
// member functions: 28
// member variables: 12
// class size: 72
class CRawDynamicVertexData {
	/* ../public/rendersystem/vertexdata.h:941 */
	void CRawDynamicVertexData(CRawDynamicVertexData* , IRenderContext* , int, int, const char* , const char* );
	/* ../public/rendersystem/vertexdata.h:942 */
	void ~CRawDynamicVertexData(CRawDynamicVertexData* );
	/* ../public/rendersystem/vertexdata.h:944 */
	void* Base(CRawDynamicVertexData* );
	/* ../public/rendersystem/vertexdata.h:949 */
	void* CurrentVertex(CRawDynamicVertexData* );
	/* ../public/rendersystem/vertexdata.h:954 */
	int VertexCount(const CRawDynamicVertexData* );
	/* ../public/rendersystem/vertexdata.h:958 */
	int GetBufferVertexCount(const CRawDynamicVertexData* );
	/* ../public/rendersystem/vertexdata.h:963 */
	IRenderContext* GetRenderContext(CRawDynamicVertexData* );
	/* ../public/rendersystem/vertexdata.h:968 */
	void AdvanceVertexCount(CRawDynamicVertexData* , int);
	/* ../public/rendersystem/vertexdata.h:976 */
	void AdvanceVertex(CRawDynamicVertexData* );
	/* ../public/rendersystem/vertexdata.h:983 */
	void CopyAndAdvance(CRawDynamicVertexData* , const void* , int);
	/* ../public/rendersystem/vertexdata.h:994 */
	void Unlock(CRawDynamicVertexData* );
	/* ../public/rendersystem/vertexdata.h:996 */
	void Bind(CRawDynamicVertexData* , int, int);
	/* ../public/rendersystem/vertexdata.h:998 */
	void UnlockAndBind(CRawDynamicVertexData* , int, int);
protected:
	/* ../public/rendersystem/vertexdata.h:1005 */
	void Lock(CRawDynamicVertexData* , int);
	IRenderContext * m_pRenderContext; /* 0 8 */
	int m_nElementSizeInBytes; /* 8 4 */
	int m_nVertexCount; /* 12 4 */
	int m_nBufferVertexCount; /* 16 4 */
	const char * m_pDebugName; /* 24 8 */
	const char * m_pBudgetGroupName; /* 32 8 */
	DynamicVertexBufferHandle_t m_hVertexBuffer; /* 40 8 */
	uint8 * m_pMemory; /* 48 8 */
	uint8 * m_pCurrentVertex; /* 56 8 */
	int m_nStartOffsetInBytes; /* 64 4 */
	bool m_bOkToLock; /* 68 1 */
	bool m_bLocked; /* 69 1 */
	void CRawDynamicVertexData(class CRawDynamicVertexData *, class IRenderContext *, int, int, const char  *, const char  *); /* linkage=_ZN21CRawDynamicVertexDataC4EP14IRenderContextiiPKcS3_ */
	void ~CRawDynamicVertexData(class CRawDynamicVertexData *); /* linkage=_ZN21CRawDynamicVertexDataD4Ev */
	void * Base(class CRawDynamicVertexData *); /* linkage=_ZN21CRawDynamicVertexData4BaseEv */
	void * CurrentVertex(class CRawDynamicVertexData *); /* linkage=_ZN21CRawDynamicVertexData13CurrentVertexEv */
	int VertexCount(const class CRawDynamicVertexData  *); /* linkage=_ZNK21CRawDynamicVertexData11VertexCountEv */
	int GetBufferVertexCount(const class CRawDynamicVertexData  *); /* linkage=_ZNK21CRawDynamicVertexData20GetBufferVertexCountEv */
	class IRenderContext * GetRenderContext(class CRawDynamicVertexData *); /* linkage=_ZN21CRawDynamicVertexData16GetRenderContextEv */
	void AdvanceVertexCount(class CRawDynamicVertexData *, int); /* linkage=_ZN21CRawDynamicVertexData18AdvanceVertexCountEi */
	void AdvanceVertex(class CRawDynamicVertexData *); /* linkage=_ZN21CRawDynamicVertexData13AdvanceVertexEv */
	void CopyAndAdvance(class CRawDynamicVertexData *, const void  *, int); /* linkage=_ZN21CRawDynamicVertexData14CopyAndAdvanceEPKvi */
	void Unlock(class CRawDynamicVertexData *); /* linkage=_ZN21CRawDynamicVertexData6UnlockEv */
	void Bind(class CRawDynamicVertexData *, int, int); /* linkage=_ZN21CRawDynamicVertexData4BindEii */
	void UnlockAndBind(class CRawDynamicVertexData *, int, int); /* linkage=_ZN21CRawDynamicVertexData13UnlockAndBindEii */
	void Lock(class CRawDynamicVertexData *, int); /* linkage=_ZN21CRawDynamicVertexData4LockEi */
};

// <01B5F69C> ../public/rendersystem/vertexdata.h:944
inline void* CRawDynamicVertexData::Base()
{
} /* size: 0 */

// <01B5F683> ../public/rendersystem/vertexdata.h:958
inline void CRawDynamicVertexData::GetBufferVertexCount()
{
} /* size: 0 */

// <01B5F65D> ../public/rendersystem/vertexdata.h:968
inline void CRawDynamicVertexData::AdvanceVertexCount(int nNumVerts)
{
} /* size: 0 */

// <01B5F62A> ../public/rendersystem/vertexdata.h:983
inline void CRawDynamicVertexData::CopyAndAdvance(const void* pData, int nNumVerts)
{
} /* size: 0 */

// <01B5F5F7> ../public/rendersystem/vertexdata.h:998
inline void CRawDynamicVertexData::UnlockAndBind(int nSlot, int nOffset)
{
} /* size: 0 */

// <01B5F5C7> ../public/rendersystem/vertexdata.h:1027
void CRawDynamicVertexData::CRawDynamicVertexData(IRenderContext* pRenderContext, int nElementCount, int nElementSizeInBytes, const char* pDebugName, const char* pBudgetGroupName)
{
} /* size: 0 */

// <01B5F569> ../public/rendersystem/vertexdata.h:1027
inline void CRawDynamicVertexData::CRawDynamicVertexData(IRenderContext* pRenderContext, int nElementCount, int nElementSizeInBytes, const char* pDebugName, const char* pBudgetGroupName)
{
} /* size: 0 */

// <01B5F552> ../public/rendersystem/vertexdata.h:1040
void CRawDynamicVertexData::~CRawDynamicVertexData()
{
} /* size: 0 */

// <01B5F535> ../public/rendersystem/vertexdata.h:1040
inline void CRawDynamicVertexData::~CRawDynamicVertexData()
{
} /* size: 0 */

// <01B5F4B6> ../public/rendersystem/vertexdata.h:1045
// variables: 5
inline void CRawDynamicVertexData::Lock(int nVertexCount)
{
	const char   __FUNCTION__; // 35633
	BufferDesc_t vertexDesc; // 1054
	DynamicLockDesc_t desc; // 1060
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1049
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1050
	}
} /* size: 0, variables: 3 */

// <004986A4> ../public/rendersystem/vertexdata.h:1045
// variables: 5
inline void CRawDynamicVertexData::Lock(int nVertexCount)
{
	const char   __FUNCTION__; // 57747
	BufferDesc_t vertexDesc; // 1054
	DynamicLockDesc_t desc; // 1060
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1049
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1050
	}
} /* size: 0, variables: 3 */

// <01B5F499> ../public/rendersystem/vertexdata.h:1080
inline void CRawDynamicVertexData::Unlock()
{
} /* size: 0 */

// <01B5F462> ../public/rendersystem/vertexdata.h:1101
inline void CRawDynamicVertexData::Bind(int nSlot, int nOffset)
{
} /* size: 0 */

