
//
// public/materialsystem2/imesh2.h
//
//	referenced by: libengine2.so
//
//	functions: 60
//	classes: 2
//

// <03C165F3> ../public/materialsystem2/imesh2.h:31
void GenerateSequentialIndexBuffer(short unsigned int *, int, int)
{
} /* size: 0 */

// <03C1667F> ../public/materialsystem2/imesh2.h:32
void GenerateQuadIndexBuffer(short unsigned int *, int, int)
{
} /* size: 0 */

// <03C1665C> ../public/materialsystem2/imesh2.h:33
void GeneratePolygonIndexBuffer(short unsigned int *, int, int)
{
} /* size: 0 */

// <03C16639> ../public/materialsystem2/imesh2.h:34
void GenerateLineStripIndexBuffer(short unsigned int *, int, int)
{
} /* size: 0 */

// <03C16616> ../public/materialsystem2/imesh2.h:35
void GenerateLineLoopIndexBuffer(short unsigned int *, int, int)
{
} /* size: 0 */

// <03C1262A> ../public/materialsystem2/imesh2.h:42
// member functions: 202
// member variables: 10
// class size: 72
class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> {
	/* ../public/materialsystem2/imesh2.h:322 */
	void CMeshBuilder2(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/materialsystem2/imesh2.h:336 */
	void ~CMeshBuilder2(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/materialsystem2/imesh2.h:524 */
	void Begin(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , MaterialPrimitiveType2_t, int);
	/* ../public/materialsystem2/imesh2.h:578 */
	void Begin(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , MaterialPrimitiveType2_t, int, int, int* );
	/* ../public/materialsystem2/imesh2.h:589 */
	void Begin(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , MaterialPrimitiveType2_t, int, int);
	/* ../public/materialsystem2/imesh2.h:624 */
	void End(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/materialsystem2/imesh2.h:751 */
	void ExtractBuffers(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , MeshBuilderBuffers_t* , bool);
	/* ../public/materialsystem2/imesh2.h:796 */
	MeshBuilderBuffers_t EndAndExtract(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , bool);
	/* ../public/materialsystem2/imesh2.h:860 */
	void BeginModify(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , int, int, int, int);
	/* ../public/materialsystem2/imesh2.h:866 */
	void EndModify(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , bool);
	/* ../public/materialsystem2/imesh2.h:921 */
	void DrawQuad(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , const float* , const float* , const float* , const float* , const unsigned char* , bool);
	/* ../public/materialsystem2/imesh2.h:971 */
	int VertexCount(const CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/materialsystem2/imesh2.h:977 */
	int IndexCount(const CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/materialsystem2/imesh2.h:983 */
	int VertexRenderCount(const CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/materialsystem2/imesh2.h:989 */
	int IndexRenderCount(const CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/materialsystem2/imesh2.h:995 */
	RenderInputLayout_t GetLayout(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/materialsystem2/imesh2.h:876 */
	void Reset(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/materialsystem2/imesh2.h:97 */
	int VertexSize(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/materialsystem2/imesh2.h:100 */
	int TextureCoordinateSize(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , int);
	/* ../public/materialsystem2/imesh2.h:1005 */
	void* BaseVertexData(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/materialsystem2/imesh2.h:1011 */
	void* BaseIndexData(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/materialsystem2/imesh2.h:885 */
	void AdvanceVertex(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/materialsystem2/imesh2.h:891 */
	void AdvanceVertices(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , int);
	/* ../public/materialsystem2/imesh2.h:897 */
	void AdvanceIndex(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/materialsystem2/imesh2.h:904 */
	void AdvanceIndices(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , int);
	/* ../public/materialsystem2/imesh2.h:911 */
	VertexUVPosColorNormalAndTangent_t& GetCurrentVertex(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/materialsystem2/imesh2.h:1026 */
	const float* Position(const CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/materialsystem2/imesh2.h:1027 */
	const float* Normal(const CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/materialsystem2/imesh2.h:1028 */
	unsigned int Color(const CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/materialsystem2/imesh2.h:1029 */
	unsigned char* Specular(const CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/materialsystem2/imesh2.h:1033 */
	const float* TexCoord(const CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , int);
	/* ../public/materialsystem2/imesh2.h:1038 */
	const float* TangentS(const CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/materialsystem2/imesh2.h:1039 */
	const float* TangentT(const CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/materialsystem2/imesh2.h:1044 */
	const float* BoneWeight(const CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/materialsystem2/imesh2.h:1040 */
	float Wrinkle(const CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/materialsystem2/imesh2.h:1053 */
	int NumBoneWeights(const CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/materialsystem2/imesh2.h:136 */
	unsigned char* BoneMatrix(const CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/materialsystem2/imesh2.h:1062 */
	const short unsigned int* Index(const CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/materialsystem2/imesh2.h:1180 */
	void Position(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , const Vector& );
	/* ../public/materialsystem2/imesh2.h:1187 */
	void Position3f(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , float, float, float);
	/* ../public/materialsystem2/imesh2.h:1194 */
	void Position3fv(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , const float* );
	/* ../public/materialsystem2/imesh2.h:1200 */
	void Normal(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , const Vector& );
	/* ../public/materialsystem2/imesh2.h:1201 */
	void Normal3f(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , float, float, float);
	/* ../public/materialsystem2/imesh2.h:1202 */
	void Normal3fv(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , const float* );
	/* ../public/materialsystem2/imesh2.h:1214 */
	void NormalDelta3fv(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , const float* );
	/* ../public/materialsystem2/imesh2.h:1205 */
	void NormalDelta3f(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , float, float, float);
	/* ../public/materialsystem2/imesh2.h:1223 */
	void Color3f(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , float, float, float);
	/* ../public/materialsystem2/imesh2.h:1224 */
	void Color3fv(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , const float* );
	/* ../public/materialsystem2/imesh2.h:1225 */
	void Color4f(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , float, float, float, float);
	/* ../public/materialsystem2/imesh2.h:1226 */
	void Color4fv(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , const float* );
	/* ../public/materialsystem2/imesh2.h:1227 */
	void Color3ub(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , unsigned char, unsigned char, unsigned char);
	/* ../public/materialsystem2/imesh2.h:1228 */
	void Color3ubv(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , const unsigned char* );
	/* ../public/materialsystem2/imesh2.h:1229 */
	void Color4ub(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , unsigned char, unsigned char, unsigned char, unsigned char);
	/* ../public/materialsystem2/imesh2.h:1230 */
	void Color4ubv(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , const unsigned char* );
	/* ../public/materialsystem2/imesh2.h:1233 */
	void Color4Packed(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , int);
	/* ../public/materialsystem2/imesh2.h:1241 */
	int PackColor4(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , unsigned char, unsigned char, unsigned char, unsigned char);
	/* ../public/materialsystem2/imesh2.h:1250 */
	void Specular3f(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , float, float, float);
	/* ../public/materialsystem2/imesh2.h:1251 */
	void Specular3fv(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , const float* );
	/* ../public/materialsystem2/imesh2.h:1252 */
	void Specular4f(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , float, float, float, float);
	/* ../public/materialsystem2/imesh2.h:1253 */
	void Specular4fv(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , const float* );
	/* ../public/materialsystem2/imesh2.h:1254 */
	void Specular3ub(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , unsigned char, unsigned char, unsigned char);
	/* ../public/materialsystem2/imesh2.h:1255 */
	void Specular3ubv(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , const unsigned char* );
	/* ../public/materialsystem2/imesh2.h:1256 */
	void Specular4ub(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , unsigned char, unsigned char, unsigned char, unsigned char);
	/* ../public/materialsystem2/imesh2.h:1257 */
	void Specular4ubv(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , const unsigned char* );
	/* ../public/materialsystem2/imesh2.h:1260 */
	void TexCoord1f(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , int, float);
	/* ../public/materialsystem2/imesh2.h:1261 */
	void TexCoord2f(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , int, float, float);
	/* ../public/materialsystem2/imesh2.h:1262 */
	void TexCoord2fv(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , int, const float* );
	/* ../public/materialsystem2/imesh2.h:1263 */
	void TexCoord3f(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , int, float, float, float);
	/* ../public/materialsystem2/imesh2.h:1264 */
	void TexCoord3fv(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , int, const float* );
	/* ../public/materialsystem2/imesh2.h:1265 */
	void TexCoord4f(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , int, float, float, float, float);
	/* ../public/materialsystem2/imesh2.h:1266 */
	void TexCoord4fv(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , int, const float* );
	/* ../public/materialsystem2/imesh2.h:1267 */
	void TexCoordSubRect2f(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , int, float, float, float, float, float, float);
	/* ../public/materialsystem2/imesh2.h:1268 */
	void TexCoordSubRect2fv(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , int, const float* , const float* , const float* );
	/* ../public/materialsystem2/imesh2.h:1270 */
	void TangentS3f(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , float, float, float);
	/* ../public/materialsystem2/imesh2.h:1271 */
	void TangentS3fv(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , const float* );
	/* ../public/materialsystem2/imesh2.h:1272 */
	void TangentT3f(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , float, float, float);
	/* ../public/materialsystem2/imesh2.h:1273 */
	void TangentT3fv(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , const float* );
	/* ../public/materialsystem2/imesh2.h:1274 */
	void TangentBasis(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , const Vector4D& );
	/* ../public/materialsystem2/imesh2.h:1276 */
	void Wrinkle1f(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , float);
	/* ../public/materialsystem2/imesh2.h:1279 */
	void BoneWeight(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , int, float);
	/* ../public/materialsystem2/imesh2.h:1286 */
	void BoneWeights2(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , float, float);
	/* ../public/materialsystem2/imesh2.h:1300 */
	void BoneMatrix(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , int, int);
	/* ../public/materialsystem2/imesh2.h:1307 */
	void BoneMatrices4(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , int, int, int, int);
	/* ../public/materialsystem2/imesh2.h:1314 */
	void UserData(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , const float* );
	/* ../public/materialsystem2/imesh2.h:1073 */
	void Index(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , short unsigned int);
	/* ../public/materialsystem2/imesh2.h:1093 */
	void FastIndex2(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , short unsigned int, short unsigned int);
	/* ../public/materialsystem2/imesh2.h:1084 */
	void FastIndex(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , short unsigned int);
	/* ../public/materialsystem2/imesh2.h:1100 */
	void FastQuad(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , int);
	/* ../public/materialsystem2/imesh2.h:1111 */
	void FastAdvanceNVertices(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , int);
	/* ../public/materialsystem2/imesh2.h:1156 */
	void* GetVertexDataPtr(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , int);
	/* ../public/materialsystem2/imesh2.h:695 */
	void Draw(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , IRenderContext* , IMaterialMode* , const CRenderAttributes* );
	/* ../public/materialsystem2/imesh2.h:711 */
	void ExtractAndQueueDraw(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , CUtlStringToken, IMaterialMode* , CRenderAttributes* , float);
	/* ../public/materialsystem2/imesh2.h:728 */
	void QueueDraw(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , CUtlStringToken, IMaterialMode* , const CRenderAttributes* , float);
	/* ../public/materialsystem2/imesh2.h:809 */
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>& operator=(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , const CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>& );
	/* ../public/materialsystem2/imesh2.h:838 */
	void WithInstancedTransforms(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* );
private:
	/* ../public/materialsystem2/imesh2.h:363 */
	void InitBuffers(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , int, int);
	/* ../public/materialsystem2/imesh2.h:395 */
	void ClearBuffers(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/materialsystem2/imesh2.h:420 */
	void ComputeNumVertsAndIndices(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , int* , int* , MaterialPrimitiveType2_t, int);
	/* ../public/materialsystem2/imesh2.h:476 */
	int IndicesFromVertices(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , MaterialPrimitiveType2_t, int);
	/* ../public/materialsystem2/imesh2.h:343 */
	void AutoUpdateBounds(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , const Vector& );
	/* ../public/materialsystem2/imesh2.h:273 */
	void DrawVertexBuffer(CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>* , IRenderContext* , IMaterialMode* , const CRenderAttributes* , int, int);
	MaterialPrimitiveType2_t m_Type; /* 0 4 */
	bool m_bGenerateIndices; /* 4 1 */
	CVertexData<VertexUVPosColorNormalAndTangent_t> * m_pVertexBuffer; /* 8 8 */
	CIndexData<short unsigned int> * m_pIndexBuffer; /* 16 8 */
	int m_nVertexRenderCount; /* 24 4 */
	int m_nIndexRenderCount; /* 28 4 */
	RenderInputLayout_t m_hInputLayout; /* 32 8 */
	bool m_bBegin; /* 40 1 */
	Vector m_MinLocalBounds; /* 44 12 */
	Vector m_MaxLocalBounds; /* 56 12 */
	void CMeshBuilder2(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tEC4Ev */
	void ~CMeshBuilder2(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tED4Ev */
	void Begin(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, enum MaterialPrimitiveType2_t, int); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE5BeginE24MaterialPrimitiveType2_ti */
	void Begin(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, enum MaterialPrimitiveType2_t, int, int, int *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE5BeginE24MaterialPrimitiveType2_tiiPi */
	void Begin(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, enum MaterialPrimitiveType2_t, int, int); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE5BeginE24MaterialPrimitiveType2_tii */
	void End(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE3EndEv */
	void ExtractBuffers(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, class MeshBuilderBuffers_t *, bool); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE14ExtractBuffersEP20MeshBuilderBuffers_tb */
	class MeshBuilderBuffers_t EndAndExtract(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, bool); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE13EndAndExtractEb */
	void BeginModify(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, int, int, int, int); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE11BeginModifyEiiii */
	void EndModify(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, bool); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE9EndModifyEb */
	void DrawQuad(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, const float  *, const float  *, const float  *, const float  *, const unsigned char  *, bool); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE8DrawQuadEPKfS3_S3_S3_PKhb */
	int VertexCount(const class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>  *); /* linkage=_ZNK13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE11VertexCountEv */
	int IndexCount(const class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>  *); /* linkage=_ZNK13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE10IndexCountEv */
	int VertexRenderCount(const class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>  *); /* linkage=_ZNK13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE17VertexRenderCountEv */
	int IndexRenderCount(const class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>  *); /* linkage=_ZNK13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE16IndexRenderCountEv */
	RenderInputLayout_t GetLayout(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE9GetLayoutEv */
	void Reset(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE5ResetEv */
	int VertexSize(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE10VertexSizeEv */
	int TextureCoordinateSize(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, int); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE21TextureCoordinateSizeEi */
	void * BaseVertexData(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE14BaseVertexDataEv */
	void * BaseIndexData(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE13BaseIndexDataEv */
	void AdvanceVertex(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE13AdvanceVertexEv */
	void AdvanceVertices(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, int); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE15AdvanceVerticesEi */
	void AdvanceIndex(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE12AdvanceIndexEv */
	void AdvanceIndices(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, int); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE14AdvanceIndicesEi */
	class VertexUVPosColorNormalAndTangent_t & GetCurrentVertex(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE16GetCurrentVertexEv */
	const float  * Position(const class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>  *); /* linkage=_ZNK13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE8PositionEv */
	const float  * Normal(const class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>  *); /* linkage=_ZNK13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE6NormalEv */
	unsigned int Color(const class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>  *); /* linkage=_ZNK13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE5ColorEv */
	unsigned char * Specular(const class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>  *); /* linkage=_ZNK13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE8SpecularEv */
	const float  * TexCoord(const class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>  *, int); /* linkage=_ZNK13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE8TexCoordEi */
	const float  * TangentS(const class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>  *); /* linkage=_ZNK13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE8TangentSEv */
	const float  * TangentT(const class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>  *); /* linkage=_ZNK13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE8TangentTEv */
	const float  * BoneWeight(const class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>  *); /* linkage=_ZNK13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE10BoneWeightEv */
	float Wrinkle(const class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>  *); /* linkage=_ZNK13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE7WrinkleEv */
	int NumBoneWeights(const class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>  *); /* linkage=_ZNK13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE14NumBoneWeightsEv */
	unsigned char * BoneMatrix(const class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>  *); /* linkage=_ZNK13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE10BoneMatrixEv */
	const short unsigned int  * Index(const class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>  *); /* linkage=_ZNK13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE5IndexEv */
	void Position(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, const class Vector  &); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE8PositionERK6Vector */
	void Position3f(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, float, float, float); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE10Position3fEfff */
	void Position3fv(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, const float  *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE11Position3fvEPKf */
	void Normal(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, const class Vector  &); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE6NormalERK6Vector */
	void Normal3f(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, float, float, float); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE8Normal3fEfff */
	void Normal3fv(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, const float  *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE9Normal3fvEPKf */
	void NormalDelta3fv(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, const float  *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE14NormalDelta3fvEPKf */
	void NormalDelta3f(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, float, float, float); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE13NormalDelta3fEfff */
	void Color3f(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, float, float, float); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE7Color3fEfff */
	void Color3fv(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, const float  *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE8Color3fvEPKf */
	void Color4f(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, float, float, float, float); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE7Color4fEffff */
	void Color4fv(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, const float  *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE8Color4fvEPKf */
	void Color3ub(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, unsigned char, unsigned char, unsigned char); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE8Color3ubEhhh */
	void Color3ubv(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, const unsigned char  *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE9Color3ubvEPKh */
	void Color4ub(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, unsigned char, unsigned char, unsigned char, unsigned char); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE8Color4ubEhhhh */
	void Color4ubv(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, const unsigned char  *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE9Color4ubvEPKh */
	void Color4Packed(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, int); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE12Color4PackedEi */
	int PackColor4(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, unsigned char, unsigned char, unsigned char, unsigned char); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE10PackColor4Ehhhh */
	void Specular3f(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, float, float, float); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE10Specular3fEfff */
	void Specular3fv(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, const float  *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE11Specular3fvEPKf */
	void Specular4f(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, float, float, float, float); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE10Specular4fEffff */
	void Specular4fv(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, const float  *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE11Specular4fvEPKf */
	void Specular3ub(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, unsigned char, unsigned char, unsigned char); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE11Specular3ubEhhh */
	void Specular3ubv(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, const unsigned char  *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE12Specular3ubvEPKh */
	void Specular4ub(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, unsigned char, unsigned char, unsigned char, unsigned char); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE11Specular4ubEhhhh */
	void Specular4ubv(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, const unsigned char  *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE12Specular4ubvEPKh */
	void TexCoord1f(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, int, float); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE10TexCoord1fEif */
	void TexCoord2f(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, int, float, float); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE10TexCoord2fEiff */
	void TexCoord2fv(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, int, const float  *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE11TexCoord2fvEiPKf */
	void TexCoord3f(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, int, float, float, float); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE10TexCoord3fEifff */
	void TexCoord3fv(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, int, const float  *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE11TexCoord3fvEiPKf */
	void TexCoord4f(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, int, float, float, float, float); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE10TexCoord4fEiffff */
	void TexCoord4fv(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, int, const float  *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE11TexCoord4fvEiPKf */
	void TexCoordSubRect2f(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, int, float, float, float, float, float, float); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE17TexCoordSubRect2fEiffffff */
	void TexCoordSubRect2fv(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, int, const float  *, const float  *, const float  *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE18TexCoordSubRect2fvEiPKfS3_S3_ */
	void TangentS3f(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, float, float, float); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE10TangentS3fEfff */
	void TangentS3fv(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, const float  *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE11TangentS3fvEPKf */
	void TangentT3f(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, float, float, float); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE10TangentT3fEfff */
	void TangentT3fv(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, const float  *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE11TangentT3fvEPKf */
	void TangentBasis(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, const class Vector4D  &); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE12TangentBasisERK8Vector4D */
	void Wrinkle1f(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, float); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE9Wrinkle1fEf */
	void BoneWeight(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, int, float); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE10BoneWeightEif */
	void BoneWeights2(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, float, float); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE12BoneWeights2Eff */
	void BoneMatrix(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, int, int); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE10BoneMatrixEii */
	void BoneMatrices4(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, int, int, int, int); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE13BoneMatrices4Eiiii */
	void UserData(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, const float  *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE8UserDataEPKf */
	void Index(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, short unsigned int); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE5IndexEt */
	void FastIndex2(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, short unsigned int, short unsigned int); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE10FastIndex2Ett */
	void FastIndex(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, short unsigned int); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE9FastIndexEt */
	void FastQuad(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, int); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE8FastQuadEi */
	void FastAdvanceNVertices(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, int); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE20FastAdvanceNVerticesEi */
	void * GetVertexDataPtr(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, int); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE16GetVertexDataPtrEi */
	void Draw(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, class IRenderContext *, class IMaterialMode *, const class CRenderAttributes  *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE4DrawEP14IRenderContextP13IMaterialModePK17CRenderAttributes */
	void ExtractAndQueueDraw(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, class CUtlStringToken, class IMaterialMode *, class CRenderAttributes *, float); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE19ExtractAndQueueDrawE15CUtlStringTokenP13IMaterialModeP17CRenderAttributesf */
	void QueueDraw(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, class CUtlStringToken, class IMaterialMode *, const class CRenderAttributes  *, float); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE9QueueDrawE15CUtlStringTokenP13IMaterialModePK17CRenderAttributesf */
	class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> & operator=(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, const class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>  &); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tEaSERKS1_ */
	void WithInstancedTransforms(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE23WithInstancedTransformsEv */
	void InitBuffers(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, int, int); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE11InitBuffersEii */
	void ClearBuffers(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE12ClearBuffersEv */
	void ComputeNumVertsAndIndices(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, int *, int *, enum MaterialPrimitiveType2_t, int); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE25ComputeNumVertsAndIndicesEPiS2_24MaterialPrimitiveType2_ti */
	int IndicesFromVertices(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, enum MaterialPrimitiveType2_t, int); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE19IndicesFromVerticesE24MaterialPrimitiveType2_ti */
	void AutoUpdateBounds(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, const class Vector  &); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE16AutoUpdateBoundsERK6Vector */
	void DrawVertexBuffer(class CMeshBuilder2<VertexUVPosColorNormalAndTangent_t> *, class IRenderContext *, class IMaterialMode *, const class CRenderAttributes  *, int, int); /* linkage=_ZN13CMeshBuilder2I34VertexUVPosColorNormalAndTangent_tE16DrawVertexBufferEP14IRenderContextP13IMaterialModePK17CRenderAttributesii */
};

// <03C1398E> ../public/materialsystem2/imesh2.h:42
// member functions: 202
// member variables: 10
// class size: 72
class CMeshBuilder2<VertexUVPos_t> {
	/* ../public/materialsystem2/imesh2.h:322 */
	void CMeshBuilder2(CMeshBuilder2<VertexUVPos_t>* );
	/* ../public/materialsystem2/imesh2.h:336 */
	void ~CMeshBuilder2(CMeshBuilder2<VertexUVPos_t>* );
	/* ../public/materialsystem2/imesh2.h:524 */
	void Begin(CMeshBuilder2<VertexUVPos_t>* , MaterialPrimitiveType2_t, int);
	/* ../public/materialsystem2/imesh2.h:578 */
	void Begin(CMeshBuilder2<VertexUVPos_t>* , MaterialPrimitiveType2_t, int, int, int* );
	/* ../public/materialsystem2/imesh2.h:589 */
	void Begin(CMeshBuilder2<VertexUVPos_t>* , MaterialPrimitiveType2_t, int, int);
	/* ../public/materialsystem2/imesh2.h:624 */
	void End(CMeshBuilder2<VertexUVPos_t>* );
	/* ../public/materialsystem2/imesh2.h:751 */
	void ExtractBuffers(CMeshBuilder2<VertexUVPos_t>* , MeshBuilderBuffers_t* , bool);
	/* ../public/materialsystem2/imesh2.h:796 */
	MeshBuilderBuffers_t EndAndExtract(CMeshBuilder2<VertexUVPos_t>* , bool);
	/* ../public/materialsystem2/imesh2.h:860 */
	void BeginModify(CMeshBuilder2<VertexUVPos_t>* , int, int, int, int);
	/* ../public/materialsystem2/imesh2.h:866 */
	void EndModify(CMeshBuilder2<VertexUVPos_t>* , bool);
	/* ../public/materialsystem2/imesh2.h:921 */
	void DrawQuad(CMeshBuilder2<VertexUVPos_t>* , const float* , const float* , const float* , const float* , const unsigned char* , bool);
	/* ../public/materialsystem2/imesh2.h:971 */
	int VertexCount(const CMeshBuilder2<VertexUVPos_t>* );
	/* ../public/materialsystem2/imesh2.h:977 */
	int IndexCount(const CMeshBuilder2<VertexUVPos_t>* );
	/* ../public/materialsystem2/imesh2.h:983 */
	int VertexRenderCount(const CMeshBuilder2<VertexUVPos_t>* );
	/* ../public/materialsystem2/imesh2.h:989 */
	int IndexRenderCount(const CMeshBuilder2<VertexUVPos_t>* );
	/* ../public/materialsystem2/imesh2.h:995 */
	RenderInputLayout_t GetLayout(CMeshBuilder2<VertexUVPos_t>* );
	/* ../public/materialsystem2/imesh2.h:876 */
	void Reset(CMeshBuilder2<VertexUVPos_t>* );
	/* ../public/materialsystem2/imesh2.h:97 */
	int VertexSize(CMeshBuilder2<VertexUVPos_t>* );
	/* ../public/materialsystem2/imesh2.h:100 */
	int TextureCoordinateSize(CMeshBuilder2<VertexUVPos_t>* , int);
	/* ../public/materialsystem2/imesh2.h:1005 */
	void* BaseVertexData(CMeshBuilder2<VertexUVPos_t>* );
	/* ../public/materialsystem2/imesh2.h:1011 */
	void* BaseIndexData(CMeshBuilder2<VertexUVPos_t>* );
	/* ../public/materialsystem2/imesh2.h:885 */
	void AdvanceVertex(CMeshBuilder2<VertexUVPos_t>* );
	/* ../public/materialsystem2/imesh2.h:891 */
	void AdvanceVertices(CMeshBuilder2<VertexUVPos_t>* , int);
	/* ../public/materialsystem2/imesh2.h:897 */
	void AdvanceIndex(CMeshBuilder2<VertexUVPos_t>* );
	/* ../public/materialsystem2/imesh2.h:904 */
	void AdvanceIndices(CMeshBuilder2<VertexUVPos_t>* , int);
	/* ../public/materialsystem2/imesh2.h:911 */
	VertexUVPos_t& GetCurrentVertex(CMeshBuilder2<VertexUVPos_t>* );
	/* ../public/materialsystem2/imesh2.h:1026 */
	const float* Position(const CMeshBuilder2<VertexUVPos_t>* );
	/* ../public/materialsystem2/imesh2.h:1027 */
	const float* Normal(const CMeshBuilder2<VertexUVPos_t>* );
	/* ../public/materialsystem2/imesh2.h:1028 */
	unsigned int Color(const CMeshBuilder2<VertexUVPos_t>* );
	/* ../public/materialsystem2/imesh2.h:1029 */
	unsigned char* Specular(const CMeshBuilder2<VertexUVPos_t>* );
	/* ../public/materialsystem2/imesh2.h:1033 */
	const float* TexCoord(const CMeshBuilder2<VertexUVPos_t>* , int);
	/* ../public/materialsystem2/imesh2.h:1038 */
	const float* TangentS(const CMeshBuilder2<VertexUVPos_t>* );
	/* ../public/materialsystem2/imesh2.h:1039 */
	const float* TangentT(const CMeshBuilder2<VertexUVPos_t>* );
	/* ../public/materialsystem2/imesh2.h:1044 */
	const float* BoneWeight(const CMeshBuilder2<VertexUVPos_t>* );
	/* ../public/materialsystem2/imesh2.h:1040 */
	float Wrinkle(const CMeshBuilder2<VertexUVPos_t>* );
	/* ../public/materialsystem2/imesh2.h:1053 */
	int NumBoneWeights(const CMeshBuilder2<VertexUVPos_t>* );
	/* ../public/materialsystem2/imesh2.h:136 */
	unsigned char* BoneMatrix(const CMeshBuilder2<VertexUVPos_t>* );
	/* ../public/materialsystem2/imesh2.h:1062 */
	const short unsigned int* Index(const CMeshBuilder2<VertexUVPos_t>* );
	/* ../public/materialsystem2/imesh2.h:1180 */
	void Position(CMeshBuilder2<VertexUVPos_t>* , const Vector& );
	/* ../public/materialsystem2/imesh2.h:1187 */
	void Position3f(CMeshBuilder2<VertexUVPos_t>* , float, float, float);
	/* ../public/materialsystem2/imesh2.h:1194 */
	void Position3fv(CMeshBuilder2<VertexUVPos_t>* , const float* );
	/* ../public/materialsystem2/imesh2.h:1200 */
	void Normal(CMeshBuilder2<VertexUVPos_t>* , const Vector& );
	/* ../public/materialsystem2/imesh2.h:1201 */
	void Normal3f(CMeshBuilder2<VertexUVPos_t>* , float, float, float);
	/* ../public/materialsystem2/imesh2.h:1202 */
	void Normal3fv(CMeshBuilder2<VertexUVPos_t>* , const float* );
	/* ../public/materialsystem2/imesh2.h:1214 */
	void NormalDelta3fv(CMeshBuilder2<VertexUVPos_t>* , const float* );
	/* ../public/materialsystem2/imesh2.h:1205 */
	void NormalDelta3f(CMeshBuilder2<VertexUVPos_t>* , float, float, float);
	/* ../public/materialsystem2/imesh2.h:1223 */
	void Color3f(CMeshBuilder2<VertexUVPos_t>* , float, float, float);
	/* ../public/materialsystem2/imesh2.h:1224 */
	void Color3fv(CMeshBuilder2<VertexUVPos_t>* , const float* );
	/* ../public/materialsystem2/imesh2.h:1225 */
	void Color4f(CMeshBuilder2<VertexUVPos_t>* , float, float, float, float);
	/* ../public/materialsystem2/imesh2.h:1226 */
	void Color4fv(CMeshBuilder2<VertexUVPos_t>* , const float* );
	/* ../public/materialsystem2/imesh2.h:1227 */
	void Color3ub(CMeshBuilder2<VertexUVPos_t>* , unsigned char, unsigned char, unsigned char);
	/* ../public/materialsystem2/imesh2.h:1228 */
	void Color3ubv(CMeshBuilder2<VertexUVPos_t>* , const unsigned char* );
	/* ../public/materialsystem2/imesh2.h:1229 */
	void Color4ub(CMeshBuilder2<VertexUVPos_t>* , unsigned char, unsigned char, unsigned char, unsigned char);
	/* ../public/materialsystem2/imesh2.h:1230 */
	void Color4ubv(CMeshBuilder2<VertexUVPos_t>* , const unsigned char* );
	/* ../public/materialsystem2/imesh2.h:1233 */
	void Color4Packed(CMeshBuilder2<VertexUVPos_t>* , int);
	/* ../public/materialsystem2/imesh2.h:1241 */
	int PackColor4(CMeshBuilder2<VertexUVPos_t>* , unsigned char, unsigned char, unsigned char, unsigned char);
	/* ../public/materialsystem2/imesh2.h:1250 */
	void Specular3f(CMeshBuilder2<VertexUVPos_t>* , float, float, float);
	/* ../public/materialsystem2/imesh2.h:1251 */
	void Specular3fv(CMeshBuilder2<VertexUVPos_t>* , const float* );
	/* ../public/materialsystem2/imesh2.h:1252 */
	void Specular4f(CMeshBuilder2<VertexUVPos_t>* , float, float, float, float);
	/* ../public/materialsystem2/imesh2.h:1253 */
	void Specular4fv(CMeshBuilder2<VertexUVPos_t>* , const float* );
	/* ../public/materialsystem2/imesh2.h:1254 */
	void Specular3ub(CMeshBuilder2<VertexUVPos_t>* , unsigned char, unsigned char, unsigned char);
	/* ../public/materialsystem2/imesh2.h:1255 */
	void Specular3ubv(CMeshBuilder2<VertexUVPos_t>* , const unsigned char* );
	/* ../public/materialsystem2/imesh2.h:1256 */
	void Specular4ub(CMeshBuilder2<VertexUVPos_t>* , unsigned char, unsigned char, unsigned char, unsigned char);
	/* ../public/materialsystem2/imesh2.h:1257 */
	void Specular4ubv(CMeshBuilder2<VertexUVPos_t>* , const unsigned char* );
	/* ../public/materialsystem2/imesh2.h:1260 */
	void TexCoord1f(CMeshBuilder2<VertexUVPos_t>* , int, float);
	/* ../public/materialsystem2/imesh2.h:1261 */
	void TexCoord2f(CMeshBuilder2<VertexUVPos_t>* , int, float, float);
	/* ../public/materialsystem2/imesh2.h:1262 */
	void TexCoord2fv(CMeshBuilder2<VertexUVPos_t>* , int, const float* );
	/* ../public/materialsystem2/imesh2.h:1263 */
	void TexCoord3f(CMeshBuilder2<VertexUVPos_t>* , int, float, float, float);
	/* ../public/materialsystem2/imesh2.h:1264 */
	void TexCoord3fv(CMeshBuilder2<VertexUVPos_t>* , int, const float* );
	/* ../public/materialsystem2/imesh2.h:1265 */
	void TexCoord4f(CMeshBuilder2<VertexUVPos_t>* , int, float, float, float, float);
	/* ../public/materialsystem2/imesh2.h:1266 */
	void TexCoord4fv(CMeshBuilder2<VertexUVPos_t>* , int, const float* );
	/* ../public/materialsystem2/imesh2.h:1267 */
	void TexCoordSubRect2f(CMeshBuilder2<VertexUVPos_t>* , int, float, float, float, float, float, float);
	/* ../public/materialsystem2/imesh2.h:1268 */
	void TexCoordSubRect2fv(CMeshBuilder2<VertexUVPos_t>* , int, const float* , const float* , const float* );
	/* ../public/materialsystem2/imesh2.h:1270 */
	void TangentS3f(CMeshBuilder2<VertexUVPos_t>* , float, float, float);
	/* ../public/materialsystem2/imesh2.h:1271 */
	void TangentS3fv(CMeshBuilder2<VertexUVPos_t>* , const float* );
	/* ../public/materialsystem2/imesh2.h:1272 */
	void TangentT3f(CMeshBuilder2<VertexUVPos_t>* , float, float, float);
	/* ../public/materialsystem2/imesh2.h:1273 */
	void TangentT3fv(CMeshBuilder2<VertexUVPos_t>* , const float* );
	/* ../public/materialsystem2/imesh2.h:1274 */
	void TangentBasis(CMeshBuilder2<VertexUVPos_t>* , const Vector4D& );
	/* ../public/materialsystem2/imesh2.h:1276 */
	void Wrinkle1f(CMeshBuilder2<VertexUVPos_t>* , float);
	/* ../public/materialsystem2/imesh2.h:1279 */
	void BoneWeight(CMeshBuilder2<VertexUVPos_t>* , int, float);
	/* ../public/materialsystem2/imesh2.h:1286 */
	void BoneWeights2(CMeshBuilder2<VertexUVPos_t>* , float, float);
	/* ../public/materialsystem2/imesh2.h:1300 */
	void BoneMatrix(CMeshBuilder2<VertexUVPos_t>* , int, int);
	/* ../public/materialsystem2/imesh2.h:1307 */
	void BoneMatrices4(CMeshBuilder2<VertexUVPos_t>* , int, int, int, int);
	/* ../public/materialsystem2/imesh2.h:1314 */
	void UserData(CMeshBuilder2<VertexUVPos_t>* , const float* );
	/* ../public/materialsystem2/imesh2.h:1073 */
	void Index(CMeshBuilder2<VertexUVPos_t>* , short unsigned int);
	/* ../public/materialsystem2/imesh2.h:1093 */
	void FastIndex2(CMeshBuilder2<VertexUVPos_t>* , short unsigned int, short unsigned int);
	/* ../public/materialsystem2/imesh2.h:1084 */
	void FastIndex(CMeshBuilder2<VertexUVPos_t>* , short unsigned int);
	/* ../public/materialsystem2/imesh2.h:1100 */
	void FastQuad(CMeshBuilder2<VertexUVPos_t>* , int);
	/* ../public/materialsystem2/imesh2.h:1111 */
	void FastAdvanceNVertices(CMeshBuilder2<VertexUVPos_t>* , int);
	/* ../public/materialsystem2/imesh2.h:1156 */
	void* GetVertexDataPtr(CMeshBuilder2<VertexUVPos_t>* , int);
	/* ../public/materialsystem2/imesh2.h:695 */
	void Draw(CMeshBuilder2<VertexUVPos_t>* , IRenderContext* , IMaterialMode* , const CRenderAttributes* );
	/* ../public/materialsystem2/imesh2.h:711 */
	void ExtractAndQueueDraw(CMeshBuilder2<VertexUVPos_t>* , CUtlStringToken, IMaterialMode* , CRenderAttributes* , float);
	/* ../public/materialsystem2/imesh2.h:728 */
	void QueueDraw(CMeshBuilder2<VertexUVPos_t>* , CUtlStringToken, IMaterialMode* , const CRenderAttributes* , float);
	/* ../public/materialsystem2/imesh2.h:809 */
	CMeshBuilder2<VertexUVPos_t>& operator=(CMeshBuilder2<VertexUVPos_t>* , const CMeshBuilder2<VertexUVPos_t>& );
	/* ../public/materialsystem2/imesh2.h:838 */
	void WithInstancedTransforms(CMeshBuilder2<VertexUVPos_t>* );
private:
	/* ../public/materialsystem2/imesh2.h:363 */
	void InitBuffers(CMeshBuilder2<VertexUVPos_t>* , int, int);
	/* ../public/materialsystem2/imesh2.h:395 */
	void ClearBuffers(CMeshBuilder2<VertexUVPos_t>* );
	/* ../public/materialsystem2/imesh2.h:420 */
	void ComputeNumVertsAndIndices(CMeshBuilder2<VertexUVPos_t>* , int* , int* , MaterialPrimitiveType2_t, int);
	/* ../public/materialsystem2/imesh2.h:476 */
	int IndicesFromVertices(CMeshBuilder2<VertexUVPos_t>* , MaterialPrimitiveType2_t, int);
	/* ../public/materialsystem2/imesh2.h:343 */
	void AutoUpdateBounds(CMeshBuilder2<VertexUVPos_t>* , const Vector& );
	/* ../public/materialsystem2/imesh2.h:273 */
	void DrawVertexBuffer(CMeshBuilder2<VertexUVPos_t>* , IRenderContext* , IMaterialMode* , const CRenderAttributes* , int, int);
	MaterialPrimitiveType2_t m_Type; /* 0 4 */
	bool m_bGenerateIndices; /* 4 1 */
	CVertexData<VertexUVPos_t> * m_pVertexBuffer; /* 8 8 */
	CIndexData<short unsigned int> * m_pIndexBuffer; /* 16 8 */
	int m_nVertexRenderCount; /* 24 4 */
	int m_nIndexRenderCount; /* 28 4 */
	RenderInputLayout_t m_hInputLayout; /* 32 8 */
	bool m_bBegin; /* 40 1 */
	Vector m_MinLocalBounds; /* 44 12 */
	Vector m_MaxLocalBounds; /* 56 12 */
	void CMeshBuilder2(class CMeshBuilder2<VertexUVPos_t> *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tEC4Ev */
	void ~CMeshBuilder2(class CMeshBuilder2<VertexUVPos_t> *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tED4Ev */
	void Begin(class CMeshBuilder2<VertexUVPos_t> *, enum MaterialPrimitiveType2_t, int); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE5BeginE24MaterialPrimitiveType2_ti */
	void Begin(class CMeshBuilder2<VertexUVPos_t> *, enum MaterialPrimitiveType2_t, int, int, int *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE5BeginE24MaterialPrimitiveType2_tiiPi */
	void Begin(class CMeshBuilder2<VertexUVPos_t> *, enum MaterialPrimitiveType2_t, int, int); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE5BeginE24MaterialPrimitiveType2_tii */
	void End(class CMeshBuilder2<VertexUVPos_t> *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE3EndEv */
	void ExtractBuffers(class CMeshBuilder2<VertexUVPos_t> *, class MeshBuilderBuffers_t *, bool); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE14ExtractBuffersEP20MeshBuilderBuffers_tb */
	class MeshBuilderBuffers_t EndAndExtract(class CMeshBuilder2<VertexUVPos_t> *, bool); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE13EndAndExtractEb */
	void BeginModify(class CMeshBuilder2<VertexUVPos_t> *, int, int, int, int); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE11BeginModifyEiiii */
	void EndModify(class CMeshBuilder2<VertexUVPos_t> *, bool); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE9EndModifyEb */
	void DrawQuad(class CMeshBuilder2<VertexUVPos_t> *, const float  *, const float  *, const float  *, const float  *, const unsigned char  *, bool); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE8DrawQuadEPKfS3_S3_S3_PKhb */
	int VertexCount(const class CMeshBuilder2<VertexUVPos_t>  *); /* linkage=_ZNK13CMeshBuilder2I13VertexUVPos_tE11VertexCountEv */
	int IndexCount(const class CMeshBuilder2<VertexUVPos_t>  *); /* linkage=_ZNK13CMeshBuilder2I13VertexUVPos_tE10IndexCountEv */
	int VertexRenderCount(const class CMeshBuilder2<VertexUVPos_t>  *); /* linkage=_ZNK13CMeshBuilder2I13VertexUVPos_tE17VertexRenderCountEv */
	int IndexRenderCount(const class CMeshBuilder2<VertexUVPos_t>  *); /* linkage=_ZNK13CMeshBuilder2I13VertexUVPos_tE16IndexRenderCountEv */
	RenderInputLayout_t GetLayout(class CMeshBuilder2<VertexUVPos_t> *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE9GetLayoutEv */
	void Reset(class CMeshBuilder2<VertexUVPos_t> *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE5ResetEv */
	int VertexSize(class CMeshBuilder2<VertexUVPos_t> *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE10VertexSizeEv */
	int TextureCoordinateSize(class CMeshBuilder2<VertexUVPos_t> *, int); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE21TextureCoordinateSizeEi */
	void * BaseVertexData(class CMeshBuilder2<VertexUVPos_t> *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE14BaseVertexDataEv */
	void * BaseIndexData(class CMeshBuilder2<VertexUVPos_t> *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE13BaseIndexDataEv */
	void AdvanceVertex(class CMeshBuilder2<VertexUVPos_t> *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE13AdvanceVertexEv */
	void AdvanceVertices(class CMeshBuilder2<VertexUVPos_t> *, int); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE15AdvanceVerticesEi */
	void AdvanceIndex(class CMeshBuilder2<VertexUVPos_t> *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE12AdvanceIndexEv */
	void AdvanceIndices(class CMeshBuilder2<VertexUVPos_t> *, int); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE14AdvanceIndicesEi */
	class VertexUVPos_t & GetCurrentVertex(class CMeshBuilder2<VertexUVPos_t> *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE16GetCurrentVertexEv */
	const float  * Position(const class CMeshBuilder2<VertexUVPos_t>  *); /* linkage=_ZNK13CMeshBuilder2I13VertexUVPos_tE8PositionEv */
	const float  * Normal(const class CMeshBuilder2<VertexUVPos_t>  *); /* linkage=_ZNK13CMeshBuilder2I13VertexUVPos_tE6NormalEv */
	unsigned int Color(const class CMeshBuilder2<VertexUVPos_t>  *); /* linkage=_ZNK13CMeshBuilder2I13VertexUVPos_tE5ColorEv */
	unsigned char * Specular(const class CMeshBuilder2<VertexUVPos_t>  *); /* linkage=_ZNK13CMeshBuilder2I13VertexUVPos_tE8SpecularEv */
	const float  * TexCoord(const class CMeshBuilder2<VertexUVPos_t>  *, int); /* linkage=_ZNK13CMeshBuilder2I13VertexUVPos_tE8TexCoordEi */
	const float  * TangentS(const class CMeshBuilder2<VertexUVPos_t>  *); /* linkage=_ZNK13CMeshBuilder2I13VertexUVPos_tE8TangentSEv */
	const float  * TangentT(const class CMeshBuilder2<VertexUVPos_t>  *); /* linkage=_ZNK13CMeshBuilder2I13VertexUVPos_tE8TangentTEv */
	const float  * BoneWeight(const class CMeshBuilder2<VertexUVPos_t>  *); /* linkage=_ZNK13CMeshBuilder2I13VertexUVPos_tE10BoneWeightEv */
	float Wrinkle(const class CMeshBuilder2<VertexUVPos_t>  *); /* linkage=_ZNK13CMeshBuilder2I13VertexUVPos_tE7WrinkleEv */
	int NumBoneWeights(const class CMeshBuilder2<VertexUVPos_t>  *); /* linkage=_ZNK13CMeshBuilder2I13VertexUVPos_tE14NumBoneWeightsEv */
	unsigned char * BoneMatrix(const class CMeshBuilder2<VertexUVPos_t>  *); /* linkage=_ZNK13CMeshBuilder2I13VertexUVPos_tE10BoneMatrixEv */
	const short unsigned int  * Index(const class CMeshBuilder2<VertexUVPos_t>  *); /* linkage=_ZNK13CMeshBuilder2I13VertexUVPos_tE5IndexEv */
	void Position(class CMeshBuilder2<VertexUVPos_t> *, const class Vector  &); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE8PositionERK6Vector */
	void Position3f(class CMeshBuilder2<VertexUVPos_t> *, float, float, float); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE10Position3fEfff */
	void Position3fv(class CMeshBuilder2<VertexUVPos_t> *, const float  *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE11Position3fvEPKf */
	void Normal(class CMeshBuilder2<VertexUVPos_t> *, const class Vector  &); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE6NormalERK6Vector */
	void Normal3f(class CMeshBuilder2<VertexUVPos_t> *, float, float, float); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE8Normal3fEfff */
	void Normal3fv(class CMeshBuilder2<VertexUVPos_t> *, const float  *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE9Normal3fvEPKf */
	void NormalDelta3fv(class CMeshBuilder2<VertexUVPos_t> *, const float  *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE14NormalDelta3fvEPKf */
	void NormalDelta3f(class CMeshBuilder2<VertexUVPos_t> *, float, float, float); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE13NormalDelta3fEfff */
	void Color3f(class CMeshBuilder2<VertexUVPos_t> *, float, float, float); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE7Color3fEfff */
	void Color3fv(class CMeshBuilder2<VertexUVPos_t> *, const float  *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE8Color3fvEPKf */
	void Color4f(class CMeshBuilder2<VertexUVPos_t> *, float, float, float, float); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE7Color4fEffff */
	void Color4fv(class CMeshBuilder2<VertexUVPos_t> *, const float  *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE8Color4fvEPKf */
	void Color3ub(class CMeshBuilder2<VertexUVPos_t> *, unsigned char, unsigned char, unsigned char); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE8Color3ubEhhh */
	void Color3ubv(class CMeshBuilder2<VertexUVPos_t> *, const unsigned char  *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE9Color3ubvEPKh */
	void Color4ub(class CMeshBuilder2<VertexUVPos_t> *, unsigned char, unsigned char, unsigned char, unsigned char); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE8Color4ubEhhhh */
	void Color4ubv(class CMeshBuilder2<VertexUVPos_t> *, const unsigned char  *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE9Color4ubvEPKh */
	void Color4Packed(class CMeshBuilder2<VertexUVPos_t> *, int); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE12Color4PackedEi */
	int PackColor4(class CMeshBuilder2<VertexUVPos_t> *, unsigned char, unsigned char, unsigned char, unsigned char); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE10PackColor4Ehhhh */
	void Specular3f(class CMeshBuilder2<VertexUVPos_t> *, float, float, float); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE10Specular3fEfff */
	void Specular3fv(class CMeshBuilder2<VertexUVPos_t> *, const float  *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE11Specular3fvEPKf */
	void Specular4f(class CMeshBuilder2<VertexUVPos_t> *, float, float, float, float); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE10Specular4fEffff */
	void Specular4fv(class CMeshBuilder2<VertexUVPos_t> *, const float  *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE11Specular4fvEPKf */
	void Specular3ub(class CMeshBuilder2<VertexUVPos_t> *, unsigned char, unsigned char, unsigned char); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE11Specular3ubEhhh */
	void Specular3ubv(class CMeshBuilder2<VertexUVPos_t> *, const unsigned char  *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE12Specular3ubvEPKh */
	void Specular4ub(class CMeshBuilder2<VertexUVPos_t> *, unsigned char, unsigned char, unsigned char, unsigned char); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE11Specular4ubEhhhh */
	void Specular4ubv(class CMeshBuilder2<VertexUVPos_t> *, const unsigned char  *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE12Specular4ubvEPKh */
	void TexCoord1f(class CMeshBuilder2<VertexUVPos_t> *, int, float); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE10TexCoord1fEif */
	void TexCoord2f(class CMeshBuilder2<VertexUVPos_t> *, int, float, float); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE10TexCoord2fEiff */
	void TexCoord2fv(class CMeshBuilder2<VertexUVPos_t> *, int, const float  *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE11TexCoord2fvEiPKf */
	void TexCoord3f(class CMeshBuilder2<VertexUVPos_t> *, int, float, float, float); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE10TexCoord3fEifff */
	void TexCoord3fv(class CMeshBuilder2<VertexUVPos_t> *, int, const float  *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE11TexCoord3fvEiPKf */
	void TexCoord4f(class CMeshBuilder2<VertexUVPos_t> *, int, float, float, float, float); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE10TexCoord4fEiffff */
	void TexCoord4fv(class CMeshBuilder2<VertexUVPos_t> *, int, const float  *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE11TexCoord4fvEiPKf */
	void TexCoordSubRect2f(class CMeshBuilder2<VertexUVPos_t> *, int, float, float, float, float, float, float); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE17TexCoordSubRect2fEiffffff */
	void TexCoordSubRect2fv(class CMeshBuilder2<VertexUVPos_t> *, int, const float  *, const float  *, const float  *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE18TexCoordSubRect2fvEiPKfS3_S3_ */
	void TangentS3f(class CMeshBuilder2<VertexUVPos_t> *, float, float, float); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE10TangentS3fEfff */
	void TangentS3fv(class CMeshBuilder2<VertexUVPos_t> *, const float  *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE11TangentS3fvEPKf */
	void TangentT3f(class CMeshBuilder2<VertexUVPos_t> *, float, float, float); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE10TangentT3fEfff */
	void TangentT3fv(class CMeshBuilder2<VertexUVPos_t> *, const float  *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE11TangentT3fvEPKf */
	void TangentBasis(class CMeshBuilder2<VertexUVPos_t> *, const class Vector4D  &); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE12TangentBasisERK8Vector4D */
	void Wrinkle1f(class CMeshBuilder2<VertexUVPos_t> *, float); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE9Wrinkle1fEf */
	void BoneWeight(class CMeshBuilder2<VertexUVPos_t> *, int, float); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE10BoneWeightEif */
	void BoneWeights2(class CMeshBuilder2<VertexUVPos_t> *, float, float); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE12BoneWeights2Eff */
	void BoneMatrix(class CMeshBuilder2<VertexUVPos_t> *, int, int); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE10BoneMatrixEii */
	void BoneMatrices4(class CMeshBuilder2<VertexUVPos_t> *, int, int, int, int); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE13BoneMatrices4Eiiii */
	void UserData(class CMeshBuilder2<VertexUVPos_t> *, const float  *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE8UserDataEPKf */
	void Index(class CMeshBuilder2<VertexUVPos_t> *, short unsigned int); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE5IndexEt */
	void FastIndex2(class CMeshBuilder2<VertexUVPos_t> *, short unsigned int, short unsigned int); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE10FastIndex2Ett */
	void FastIndex(class CMeshBuilder2<VertexUVPos_t> *, short unsigned int); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE9FastIndexEt */
	void FastQuad(class CMeshBuilder2<VertexUVPos_t> *, int); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE8FastQuadEi */
	void FastAdvanceNVertices(class CMeshBuilder2<VertexUVPos_t> *, int); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE20FastAdvanceNVerticesEi */
	void * GetVertexDataPtr(class CMeshBuilder2<VertexUVPos_t> *, int); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE16GetVertexDataPtrEi */
	void Draw(class CMeshBuilder2<VertexUVPos_t> *, class IRenderContext *, class IMaterialMode *, const class CRenderAttributes  *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE4DrawEP14IRenderContextP13IMaterialModePK17CRenderAttributes */
	void ExtractAndQueueDraw(class CMeshBuilder2<VertexUVPos_t> *, class CUtlStringToken, class IMaterialMode *, class CRenderAttributes *, float); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE19ExtractAndQueueDrawE15CUtlStringTokenP13IMaterialModeP17CRenderAttributesf */
	void QueueDraw(class CMeshBuilder2<VertexUVPos_t> *, class CUtlStringToken, class IMaterialMode *, const class CRenderAttributes  *, float); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE9QueueDrawE15CUtlStringTokenP13IMaterialModePK17CRenderAttributesf */
	class CMeshBuilder2<VertexUVPos_t> & operator=(class CMeshBuilder2<VertexUVPos_t> *, const class CMeshBuilder2<VertexUVPos_t>  &); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tEaSERKS1_ */
	void WithInstancedTransforms(class CMeshBuilder2<VertexUVPos_t> *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE23WithInstancedTransformsEv */
	void InitBuffers(class CMeshBuilder2<VertexUVPos_t> *, int, int); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE11InitBuffersEii */
	void ClearBuffers(class CMeshBuilder2<VertexUVPos_t> *); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE12ClearBuffersEv */
	void ComputeNumVertsAndIndices(class CMeshBuilder2<VertexUVPos_t> *, int *, int *, enum MaterialPrimitiveType2_t, int); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE25ComputeNumVertsAndIndicesEPiS2_24MaterialPrimitiveType2_ti */
	int IndicesFromVertices(class CMeshBuilder2<VertexUVPos_t> *, enum MaterialPrimitiveType2_t, int); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE19IndicesFromVerticesE24MaterialPrimitiveType2_ti */
	void AutoUpdateBounds(class CMeshBuilder2<VertexUVPos_t> *, const class Vector  &); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE16AutoUpdateBoundsERK6Vector */
	void DrawVertexBuffer(class CMeshBuilder2<VertexUVPos_t> *, class IRenderContext *, class IMaterialMode *, const class CRenderAttributes  *, int, int); /* linkage=_ZN13CMeshBuilder2I13VertexUVPos_tE16DrawVertexBufferEP14IRenderContextP13IMaterialModePK17CRenderAttributesii */
};

// <03C1872D> ../public/materialsystem2/imesh2.h:97
inline void CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::VertexSize()
{
} /* size: 0 */

// <03C18610> ../public/materialsystem2/imesh2.h:97
inline void CMeshBuilder2<VertexUVPos_t>::VertexSize()
{
} /* size: 0 */

// <03C1D497> ../public/materialsystem2/imesh2.h:322
void CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::CMeshBuilder2()
{
} /* size: 0 */

// <03C1D47E> ../public/materialsystem2/imesh2.h:322
inline void CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::CMeshBuilder2()
{
} /* size: 0 */

// <03C1CAE1> ../public/materialsystem2/imesh2.h:322
void CMeshBuilder2<VertexUVPos_t>::CMeshBuilder2()
{
} /* size: 0 */

// <03C1CAC8> ../public/materialsystem2/imesh2.h:322
inline void CMeshBuilder2<VertexUVPos_t>::CMeshBuilder2()
{
} /* size: 0 */

// <03C1D45F> ../public/materialsystem2/imesh2.h:336
void CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::~CMeshBuilder2()
{
	{
		{
		}
	}
} /* size: 0 */

// <03C1D41D> ../public/materialsystem2/imesh2.h:336
// variables: 2
inline void CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::~CMeshBuilder2()
{
	const char   __FUNCTION__; // 59528
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 338
	}
} /* size: 0, variables: 1 */

// <03C1C37F> ../public/materialsystem2/imesh2.h:336
void CMeshBuilder2<VertexUVPos_t>::~CMeshBuilder2()
{
	{
		{
		}
	}
} /* size: 0 */

// <03C1C33D> ../public/materialsystem2/imesh2.h:336
// variables: 2
inline void CMeshBuilder2<VertexUVPos_t>::~CMeshBuilder2()
{
	const char   __FUNCTION__; // 59528
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 338
	}
} /* size: 0, variables: 1 */

// <03C1AAE7> ../public/materialsystem2/imesh2.h:343
// variable: 1
inline void CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AutoUpdateBounds(const Vector& point)
{
	{
		int i; // 345
	}
} /* size: 0 */

// <03C19868> ../public/materialsystem2/imesh2.h:343
// variable: 1
inline void CMeshBuilder2<VertexUVPos_t>::AutoUpdateBounds(const Vector& point)
{
	{
		int i; // 345
	}
} /* size: 0 */

// <03C1AC55> ../public/materialsystem2/imesh2.h:363
// variables: 6
// function calls: 32
void CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::InitBuffers(int nVertexCount, int nIndexCount)
{
	const char   __FUNCTION__; // 59447
	VertexUVPosColorNormalAndTangent_t* pMesh; // 378
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 367
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 368
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 377
	}
	{
		uint16* pIB; // 384
		{
		}
		CIndexDataBase<short unsigned int>::ClearIndexFields(); // 352
		{
		}
		CIndexData<short unsigned int>::Init(
			short unsigned int* pIB,
			int nBufferIndexCount);  // 321
		CIndexDataBase<short unsigned int>::ClearIndexFields(); // 89
		CIndexDataBase<short unsigned int>::CIndexDataBase(); // 318
		CIndexData<short unsigned int>::CIndexData(
				short unsigned int* pIB,
				int nBufferIndexCount);  // 385
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::Base(); // 399
	CVertexData<VertexUVPosColorNormalAndTangent_t>::ReleaseBuffer(); // 400
	{
	}
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 462
	CVertexData<VertexUVPosColorNormalAndTangent_t>::~CVertexData(); // 401
	CIndexDataBase<short unsigned int>::Base(); // 408
	CIndexData<short unsigned int>::ReleaseBuffer(); // 409
	{
	}
	{
	}
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 105
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 343
	CIndexData<short unsigned int>::~CIndexData(); // 410
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ClearBuffers(); // 365
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 180
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::ClearVertexFields(); // 471
	CVertexData<VertexUVPosColorNormalAndTangent_t>::Init(
		VertexUVPosColorNormalAndTangent_t* pVB,
		int nBufferVertexCount);  // 429
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::ClearVertexFields(); // 171
	Vector::Vector(); // 103
	VertexPos_t::VertexPos_t(); // 257
	Vector2D::Vector2D(); // 257
	VertexUVPos_t::VertexUVPos_t(); // 372
	VertexColor_t::VertexColor_t(); // 372
	VertexColorUVPos_t::VertexColorUVPos_t(); // 572
	Vector::Vector(); // 572
	Vector4D::Vector4D(); // 572
	VertexUVPosColorNormalAndTangent_t::VertexUVPosColorNormalAndTangent_t(); // 165
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::CVertexDataBase(); // 426
	CVertexData<VertexUVPosColorNormalAndTangent_t>::CVertexData(
			VertexUVPosColorNormalAndTangent_t* pVB,
			int nBufferVertexCount);  // 379
} /* size: 775, variables: 2, inline expansions: 27 (645 bytes) */

// <03C1993C> ../public/materialsystem2/imesh2.h:363
// variables: 6
// function calls: 27
void CMeshBuilder2<VertexUVPos_t>::InitBuffers(int nVertexCount, int nIndexCount)
{
	const char   __FUNCTION__; // 59447
	VertexUVPos_t* pMesh; // 378
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 367
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 368
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 377
	}
	{
		uint16* pIB; // 384
		{
		}
		CIndexDataBase<short unsigned int>::ClearIndexFields(); // 352
		{
		}
		CIndexData<short unsigned int>::Init(
			short unsigned int* pIB,
			int nBufferIndexCount);  // 321
		CIndexDataBase<short unsigned int>::ClearIndexFields(); // 89
		CIndexDataBase<short unsigned int>::CIndexDataBase(); // 318
		CIndexData<short unsigned int>::CIndexData(
				short unsigned int* pIB,
				int nBufferIndexCount);  // 385
	}
	CVertexDataBase<VertexUVPos_t>::Base(); // 399
	CVertexData<VertexUVPos_t>::ReleaseBuffer(); // 400
	{
	}
	{
	}
	CVertexDataBase<VertexUVPos_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexUVPos_t>::~CVertexDataBase(); // 462
	CVertexData<VertexUVPos_t>::~CVertexData(); // 401
	CIndexDataBase<short unsigned int>::Base(); // 408
	CIndexData<short unsigned int>::ReleaseBuffer(); // 409
	{
	}
	{
	}
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 105
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 343
	CIndexData<short unsigned int>::~CIndexData(); // 410
	CMeshBuilder2<VertexUVPos_t>::ClearBuffers(); // 365
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 180
	CVertexDataBase<VertexUVPos_t>::ClearVertexFields(); // 471
	CVertexData<VertexUVPos_t>::Init(
		VertexUVPos_t* pVB,
		int nBufferVertexCount);  // 429
	Vector::Vector(); // 103
	VertexPos_t::VertexPos_t(); // 257
	Vector2D::Vector2D(); // 257
	VertexUVPos_t::VertexUVPos_t(); // 165
	CVertexDataBase<VertexUVPos_t>::ClearVertexFields(); // 171
	CVertexDataBase<VertexUVPos_t>::CVertexDataBase(); // 426
	CVertexData<VertexUVPos_t>::CVertexData(
			VertexUVPos_t* pVB,
			int nBufferVertexCount);  // 379
} /* size: 775, variables: 2, inline expansions: 22 (660 bytes) */

// <03C1B5E7> ../public/materialsystem2/imesh2.h:395
inline void CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ClearBuffers()
{
} /* size: 0 */

// <03C19534> ../public/materialsystem2/imesh2.h:395
inline void CMeshBuilder2<VertexUVPos_t>::ClearBuffers()
{
} /* size: 0 */

// <03C1A291> ../public/materialsystem2/imesh2.h:420
// variables: 4
inline void CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ComputeNumVertsAndIndices(int* pMaxVertices, int* pMaxIndices, MaterialPrimitiveType2_t type, int nPrimitiveCount)
{
	const char   __FUNCTION__; // 59800
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 467
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 471
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 472
	}
} /* size: 0, variables: 1 */

// <03C1A1F2> ../public/materialsystem2/imesh2.h:420
// variables: 4
inline void CMeshBuilder2<VertexUVPos_t>::ComputeNumVertsAndIndices(int* pMaxVertices, int* pMaxIndices, MaterialPrimitiveType2_t type, int nPrimitiveCount)
{
	const char   __FUNCTION__; // 59800
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 467
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 471
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 472
	}
} /* size: 0, variables: 1 */

// <03C19728> ../public/materialsystem2/imesh2.h:476
// variables: 5
inline void CMeshBuilder2<VertexUVPos_t>::IndicesFromVertices(MaterialPrimitiveType2_t type, int nVertexCount)
{
	const char   __FUNCTION__; // 59658
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 485
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 493
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 497
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 501
	}
} /* size: 0, variables: 1 */

// <03C1883A> ../public/materialsystem2/imesh2.h:476
// variables: 5
inline void CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::IndicesFromVertices(MaterialPrimitiveType2_t type, int nVertexCount)
{
	const char   __FUNCTION__; // 59658
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 485
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 493
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 497
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 501
	}
} /* size: 0, variables: 1 */

// <03C1CBAF> ../public/materialsystem2/imesh2.h:524
// variables: 12
// function calls: 4
void CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Begin(MaterialPrimitiveType2_t type, int numPrimitives)
{
	const char   __FUNCTION__; // 59295
	int nMaxVertexCount; // 536
	int nMaxIndexCount; // 536
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 526
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 527
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 528
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 561
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 567
	}
	{
	}
	{
	}
	{
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ComputeNumVertsAndIndices(
					int* pMaxVertices,
					int* pMaxIndices,
					MaterialPrimitiveType2_t type,
					int nPrimitiveCount);  // 420
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ComputeNumVertsAndIndices(
					int* pMaxVertices,
					int* pMaxIndices,
					MaterialPrimitiveType2_t type,
					int nPrimitiveCount);  // 537
	{
		LockDesc_t desc; // 557
		bool bOk; // 558
	}
	{
	}
	{
	}
	CVertexData<VertexUVPosColorNormalAndTangent_t>::Lock(
		int nMaxVertexCount);  // 559
	{
		LockDesc_t desc; // 459
		bool bOk; // 460
	}
	{
	}
	{
	}
	CIndexData<short unsigned int>::Lock(
		int nMaxIndexCount);  // 565
} /* size: 1456, variables: 3, inline expansions: 4 (1135 bytes) */

// <03C1C9DC> ../public/materialsystem2/imesh2.h:524
// variables: 8
inline void CMeshBuilder2<VertexUVPos_t>::Begin(MaterialPrimitiveType2_t type, int numPrimitives)
{
	const char   __FUNCTION__; // 59295
	int nMaxVertexCount; // 536
	int nMaxIndexCount; // 536
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 526
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 527
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 528
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 561
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 567
	}
} /* size: 0, variables: 3 */

// <03C460EB> ../public/materialsystem2/imesh2.h:589
void CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Begin()
{
	{
	}
} /* size: 23 */

// <03C1D357> ../public/materialsystem2/imesh2.h:589
// variables: 5
inline void CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Begin(MaterialPrimitiveType2_t type, int nVertexCount, int nIndexCount)
{
	const char   __FUNCTION__; // 59295
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 594
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 597
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 607
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 613
	}
} /* size: 0, variables: 1 */

// <03C1C414> ../public/materialsystem2/imesh2.h:624
// variables: 7
// function calls: 11
void CMeshBuilder2<VertexUVPos_t>::End()
{
	const char   __FUNCTION__; // 59241
	int nIndexCount; // 634
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 626
	}
	{
		short unsigned int* pIndices; // 643
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 661
		}
		{
		}
		CIndexDataBase<short unsigned int>::AdvanceIndexCount(
					int nNumIndices);  // 907
		{
		}
		CMeshBuilder2<VertexUVPos_t>::AdvanceIndices(
				int nIndices);  // 669
		CIndexDataBase<short unsigned int>::Base(); // 643
	}
	CVertexDataBase<VertexUVPos_t>::VertexCount(); // 637
	{
	}
	{
	}
	{
	}
	{
	}
	CMeshBuilder2<VertexUVPos_t>::IndicesFromVertices(
				MaterialPrimitiveType2_t type,
				int nVertexCount);  // 476
	CMeshBuilder2<VertexUVPos_t>::IndicesFromVertices(
				MaterialPrimitiveType2_t type,
				int nVertexCount);  // 637
	CIndexDataBase<short unsigned int>::GetBufferIndexCount(); // 641
	CVertexDataBase<VertexUVPos_t>::VertexCount(); // 675
	{
	}
	{
		LockDesc_t desc; // 588
	}
	CVertexData<VertexUVPos_t>::Unlock(); // 676
	CIndexDataBase<short unsigned int>::IndexCount(); // 677
	{
	}
	{
		LockDesc_t desc; // 492
	}
	CIndexData<short unsigned int>::Unlock(); // 680
} /* size: 1117, variables: 2, inline expansions: 8 (561 bytes) */

// <03C1A3C9> ../public/materialsystem2/imesh2.h:624
// variables: 7
// function calls: 11
void CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::End()
{
	const char   __FUNCTION__; // 59241
	int nIndexCount; // 634
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 626
	}
	{
		short unsigned int* pIndices; // 643
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 661
		}
		{
		}
		CIndexDataBase<short unsigned int>::AdvanceIndexCount(
					int nNumIndices);  // 907
		{
		}
		CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceIndices(
				int nIndices);  // 669
		CIndexDataBase<short unsigned int>::Base(); // 643
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::VertexCount(); // 637
	{
	}
	{
	}
	{
	}
	{
	}
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::IndicesFromVertices(
				MaterialPrimitiveType2_t type,
				int nVertexCount);  // 476
	CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::IndicesFromVertices(
				MaterialPrimitiveType2_t type,
				int nVertexCount);  // 637
	CIndexDataBase<short unsigned int>::GetBufferIndexCount(); // 641
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::VertexCount(); // 675
	{
	}
	{
		LockDesc_t desc; // 588
	}
	CVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 676
	CIndexDataBase<short unsigned int>::IndexCount(); // 677
	{
	}
	{
		LockDesc_t desc; // 492
	}
	CIndexData<short unsigned int>::Unlock(); // 680
} /* size: 1101, variables: 2, inline expansions: 8 (550 bytes) */

// <03C1C39E> ../public/materialsystem2/imesh2.h:695
// variables: 3
inline void CMeshBuilder2<VertexUVPos_t>::Draw(IRenderContext* pCtx, IMaterialMode* pMode, const CRenderAttributes* pAttributes)
{
	const char   __FUNCTION__; // 59268
	MeshBuilderBuffers_t buffers; // 705
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 697
	}
} /* size: 0, variables: 2 */

// <03C1A34B> ../public/materialsystem2/imesh2.h:751
// variables: 3
inline void CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::ExtractBuffers(MeshBuilderBuffers_t* pBuffers, bool bPurge)
{
	const char   __FUNCTION__; // 59528
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 753
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 754
	}
} /* size: 0, variables: 1 */

// <03C1954D> ../public/materialsystem2/imesh2.h:751
// variables: 3
inline void CMeshBuilder2<VertexUVPos_t>::ExtractBuffers(MeshBuilderBuffers_t* pBuffers, bool bPurge)
{
	const char   __FUNCTION__; // 59528
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 753
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 754
	}
} /* size: 0, variables: 1 */

// <03C1D1C8> ../public/materialsystem2/imesh2.h:796
// variable: 1
inline void CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::EndAndExtract(bool bPurge)
{
	MeshBuilderBuffers_t buffers; // 800
} /* size: 0, variables: 1 */

// <03C1D2BF> ../public/materialsystem2/imesh2.h:885
inline void CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex()
{
} /* size: 0 */

// <03C1C96D> ../public/materialsystem2/imesh2.h:885
inline void CMeshBuilder2<VertexUVPos_t>::AdvanceVertex()
{
} /* size: 0 */

// <03C1D22E> ../public/materialsystem2/imesh2.h:897
// variables: 2
inline void CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceIndex()
{
	const char   __FUNCTION__; // 59474
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 899
	}
} /* size: 0, variables: 1 */

// <03C1968E> ../public/materialsystem2/imesh2.h:904
// variables: 2
inline void CMeshBuilder2<VertexUVPos_t>::AdvanceIndices(int nIndices)
{
	const char   __FUNCTION__; // 59528
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 906
	}
} /* size: 0, variables: 1 */

// <03C187D2> ../public/materialsystem2/imesh2.h:904
// variables: 2
inline void CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::AdvanceIndices(int nIndices)
{
	const char   __FUNCTION__; // 59528
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 906
	}
} /* size: 0, variables: 1 */

// <03C18764> ../public/materialsystem2/imesh2.h:983
inline void CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::VertexRenderCount()
{
} /* size: 0 */

// <03C18647> ../public/materialsystem2/imesh2.h:983
inline void CMeshBuilder2<VertexUVPos_t>::VertexRenderCount()
{
} /* size: 0 */

// <03C186FB> ../public/materialsystem2/imesh2.h:989
inline void CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::IndexRenderCount()
{
} /* size: 0 */

// <03C185DE> ../public/materialsystem2/imesh2.h:989
inline void CMeshBuilder2<VertexUVPos_t>::IndexRenderCount()
{
} /* size: 0 */

// <03C18714> ../public/materialsystem2/imesh2.h:995
inline void CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::GetLayout()
{
} /* size: 0 */

// <03C185F7> ../public/materialsystem2/imesh2.h:995
inline void CMeshBuilder2<VertexUVPos_t>::GetLayout()
{
} /* size: 0 */

// <03C18746> ../public/materialsystem2/imesh2.h:1005
inline void* CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::BaseVertexData()
{
} /* size: 0 */

// <03C18629> ../public/materialsystem2/imesh2.h:1005
inline void* CMeshBuilder2<VertexUVPos_t>::BaseVertexData()
{
} /* size: 0 */

// <03C186B4> ../public/materialsystem2/imesh2.h:1011
// variables: 2
inline void* CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::BaseIndexData()
{
	const char   __FUNCTION__; // 59501
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1013
	}
} /* size: 0, variables: 1 */

// <03C18597> ../public/materialsystem2/imesh2.h:1011
// variables: 2
inline void* CMeshBuilder2<VertexUVPos_t>::BaseIndexData()
{
	const char   __FUNCTION__; // 59501
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1013
	}
} /* size: 0, variables: 1 */

// <03C1D270> ../public/materialsystem2/imesh2.h:1073
// variables: 2
inline void CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Index(short unsigned int idx)
{
	const char   __FUNCTION__; // 59295
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1075
	}
} /* size: 0, variables: 1 */

// <03C1D31D> ../public/materialsystem2/imesh2.h:1187
inline void CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3f(float x, float y, float z)
{
} /* size: 0 */

// <03C1CB8B> ../public/materialsystem2/imesh2.h:1194
inline void CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Position3fv(const float* v)
{
} /* size: 0 */

// <03C1C9B8> ../public/materialsystem2/imesh2.h:1194
inline void CMeshBuilder2<VertexUVPos_t>::Position3fv(const float* v)
{
} /* size: 0 */

// <03C1D18B> ../public/materialsystem2/imesh2.h:1201
inline void CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Normal3f(float nx, float ny, float nz)
{
} /* size: 0 */

// <03C1CB67> ../public/materialsystem2/imesh2.h:1202
inline void CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Normal3fv(const float* n)
{
} /* size: 0 */

// <03C1D2D8> ../public/materialsystem2/imesh2.h:1229
inline void CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::Color4ub(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
{
} /* size: 0 */

// <03C1D129> ../public/materialsystem2/imesh2.h:1261
inline void CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::TexCoord2f(int nStage, float s, float t)
{
} /* size: 0 */

// <03C1C986> ../public/materialsystem2/imesh2.h:1262
inline void CMeshBuilder2<VertexUVPos_t>::TexCoord2fv(int nStage, const float* st)
{
} /* size: 0 */

// <03C1D165> ../public/materialsystem2/imesh2.h:1274
inline void CMeshBuilder2<VertexUVPosColorNormalAndTangent_t>::TangentBasis(const Vector4D& vecTangent)
{
} /* size: 0 */

