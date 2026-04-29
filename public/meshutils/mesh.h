
//
// public/meshutils/mesh.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 69
//	classes: 3
//	structs: 4
//

// <05A9F19E> ../public/meshutils/mesh.h:56
void AtlasChart_t::AtlasChart_t(AtlasChart_t &)
{
} /* size: 0 */

// <05A9F17D> ../public/meshutils/mesh.h:56
inline void AtlasChart_t::AtlasChart_t(AtlasChart_t &)
{
} /* size: 0 */

// <05A9EF09> ../public/meshutils/mesh.h:56
inline void AtlasChart_t::operator=(AtlasChart_t &)
{
} /* size: 0 */

// <02E94671> ../public/meshutils/mesh.h:56
void AtlasChart_t::AtlasChart_t()
{
} /* size: 0 */

// <02E94655> ../public/meshutils/mesh.h:56
inline void AtlasChart_t::AtlasChart_t()
{
} /* size: 0 */

// <02DE4CCB> ../public/meshutils/mesh.h:56
// member function: 1
// member variables: 5
// struct size: 40
struct AtlasChart_t {
	Vector2D m_vMaxTextureSize; /* 0 8 */
	Vector2D m_vAtlasMin; /* 8 8 */
	Vector2D m_vAtlasMax; /* 16 8 */
	bool m_bAtlased; /* 24 1 */
	void * m_pPayload; /* 32 8 */
	void AtlasChart_t(AtlasChart_t* );
};

// <05BDFE87> ../public/meshutils/mesh.h:82
// function calls: 2
void CMeshVertexAttribute::~CMeshVertexAttribute()
{
	CUtlString::~CUtlString(); // 82
	CUtlString::~CUtlString(); // 82
} /* size: 62, inline expansions: 2 (31 bytes) */

// <05BDFE6B> ../public/meshutils/mesh.h:82
inline void CMeshVertexAttribute::~CMeshVertexAttribute()
{
} /* size: 0 */

// <05BDFD35> ../public/meshutils/mesh.h:82
void CMeshVertexAttribute::CMeshVertexAttribute()
{
} /* size: 0 */

// <05BDFD19> ../public/meshutils/mesh.h:82
inline void CMeshVertexAttribute::CMeshVertexAttribute()
{
} /* size: 0 */

// <05BDFCF8> ../public/meshutils/mesh.h:82
inline void CMeshVertexAttribute::operator=(const CMeshVertexAttribute &)
{
} /* size: 0 */

// <02DE4D41> ../public/meshutils/mesh.h:82
// member functions: 27
// member variables: 8
// class size: 40
class CMeshVertexAttribute {
	CUtlString m_name; /* 0 8 */
	CUtlString m_nameDelta; /* 8 8 */
	int m_nSemanticIndex; /* 16 4 */
	int m_nOffsetFloats; /* 20 4 */
	int m_nSizeFloats; /* 24 4 */
	bool m_bDelta; /* 28 1 */
	bool m_bNoCompression; /* 29 1 */
	DmAttributeType_t m_dmeType; /* 32 4 */
	/* ../public/meshutils/mesh.h:95 */
	bool IsJointWeight(const CMeshVertexAttribute* );
	/* ../public/meshutils/mesh.h:96 */
	bool IsJointIndices(const CMeshVertexAttribute* );
	/* ../public/meshutils/mesh.h:97 */
	bool IsNormal(const CMeshVertexAttribute* );
	/* ../public/meshutils/mesh.h:98 */
	bool IsTangent(const CMeshVertexAttribute* );
	/* ../public/meshutils/mesh.h:99 */
	bool IsTexcoord(const CMeshVertexAttribute* );
	/* ../public/meshutils/mesh.h:100 */
	bool IsColor(const CMeshVertexAttribute* );
	/* ../public/meshutils/mesh.h:101 */
	bool IsPosition(const CMeshVertexAttribute* );
	/* ../public/meshutils/mesh.h:102 */
	bool IsPerVertexLighting(const CMeshVertexAttribute* );
	/* ../public/meshutils/mesh.h:103 */
	bool IsLightmapUV(const CMeshVertexAttribute* );
	/* ../public/meshutils/mesh.h:104 */
	bool IsPositionRemap(const CMeshVertexAttribute* );
	/* ../public/meshutils/mesh.h:106 */
	bool operator==(const CMeshVertexAttribute* , const CMeshVertexAttribute& );
	/* ../public/meshutils/mesh.h:118 */
	bool operator!=(const CMeshVertexAttribute* , const CMeshVertexAttribute& );
	bool IsJointWeight(const class CMeshVertexAttribute  *); /* linkage=_ZNK20CMeshVertexAttribute13IsJointWeightEv */
	bool IsJointIndices(const class CMeshVertexAttribute  *); /* linkage=_ZNK20CMeshVertexAttribute14IsJointIndicesEv */
	bool IsNormal(const class CMeshVertexAttribute  *); /* linkage=_ZNK20CMeshVertexAttribute8IsNormalEv */
	bool IsTangent(const class CMeshVertexAttribute  *); /* linkage=_ZNK20CMeshVertexAttribute9IsTangentEv */
	bool IsTexcoord(const class CMeshVertexAttribute  *); /* linkage=_ZNK20CMeshVertexAttribute10IsTexcoordEv */
	bool IsColor(const class CMeshVertexAttribute  *); /* linkage=_ZNK20CMeshVertexAttribute7IsColorEv */
	bool IsPosition(const class CMeshVertexAttribute  *); /* linkage=_ZNK20CMeshVertexAttribute10IsPositionEv */
	bool IsPerVertexLighting(const class CMeshVertexAttribute  *); /* linkage=_ZNK20CMeshVertexAttribute19IsPerVertexLightingEv */
	bool IsLightmapUV(const class CMeshVertexAttribute  *); /* linkage=_ZNK20CMeshVertexAttribute12IsLightmapUVEv */
	bool IsPositionRemap(const class CMeshVertexAttribute  *); /* linkage=_ZNK20CMeshVertexAttribute15IsPositionRemapEv */
	bool operator==(const class CMeshVertexAttribute  *, const class CMeshVertexAttribute  &); /* linkage=_ZNK20CMeshVertexAttributeeqERKS_ */
	bool operator!=(const class CMeshVertexAttribute  *, const class CMeshVertexAttribute  &); /* linkage=_ZNK20CMeshVertexAttributeneERKS_ */
	class CMeshVertexAttribute & operator=(class CMeshVertexAttribute *, const class CMeshVertexAttribute  &); /* linkage=_ZN20CMeshVertexAttributeaSERKS_ */
	void CMeshVertexAttribute(class CMeshVertexAttribute *); /* linkage=_ZN20CMeshVertexAttributeC4Ev */
	void ~CMeshVertexAttribute(class CMeshVertexAttribute *); /* linkage=_ZN20CMeshVertexAttributeD4Ev */
};

// <05BE1D0B> ../public/meshutils/mesh.h:95
inline void CMeshVertexAttribute::IsJointWeight()
{
} /* size: 0 */

// <05BE1CF2> ../public/meshutils/mesh.h:96
inline void CMeshVertexAttribute::IsJointIndices()
{
} /* size: 0 */

// <05BE1CD9> ../public/meshutils/mesh.h:97
inline void CMeshVertexAttribute::IsNormal()
{
} /* size: 0 */

// <05AE4E39> ../public/meshutils/mesh.h:98
inline void CMeshVertexAttribute::IsTangent()
{
} /* size: 0 */

// <05AE4E20> ../public/meshutils/mesh.h:100
inline void CMeshVertexAttribute::IsColor()
{
} /* size: 0 */

// <05AE4E07> ../public/meshutils/mesh.h:102
inline void CMeshVertexAttribute::IsPerVertexLighting()
{
} /* size: 0 */

// <05AE4DEE> ../public/meshutils/mesh.h:103
inline void CMeshVertexAttribute::IsLightmapUV()
{
} /* size: 0 */

// <02DE4F6B> ../public/meshutils/mesh.h:128
// member variable: 1
// struct size: 32
struct ShaderInputSignatureDesc_t {
	CVsInputSignatureVector m_inputElements; /* 0 32 */
};

// <02DE4F8D> ../public/meshutils/mesh.h:135
// member variables: 4
// struct size: 4
struct PackedInputLayoutInfo_t {
	bool m_bHasPackedTangentFrame; /* 0 1 */
	bool m_bHasCompressedPerVertexLighting; /* 1 1 */
	bool m_bHasUncompressedPerVertexLighting; /* 2 1 */
	bool m_bHasLightmapUVs; /* 3 1 */
};

// <02DE28CB> ../public/meshutils/mesh.h:144
// member functions: 237
// member variables: 22
// class size: 368
class CMesh {
	/* ../public/meshutils/mesh.h:207 */
	struct SkinningDataFields_t {
		/* ../public/meshutils/mesh.h:209 */
		void SkinningDataFields_t(SkinningDataFields_t* );
		/* ../public/meshutils/mesh.h:210 */
		bool HasSkinningData(const SkinningDataFields_t* );
		int m_nBoneWeights; /* 0 4 */
		int m_nBoneIndices; /* 4 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/mesh.h:147 */
	void CMesh(CMesh* );
	/* ../public/meshutils/mesh.h:148 */
	void ~CMesh(CMesh* );
	/* ../public/meshutils/mesh.h:152 */
	void AllocateMesh(CMesh* , int, int, int, CMeshVertexAttribute* , int);
	/* ../public/meshutils/mesh.h:153 */
	void AllocateAndCopyMesh(CMesh* , int, const float* , int, int, const uint32* , int, CMeshVertexAttribute* , int);
	/* ../public/meshutils/mesh.h:154 */
	void AllocateAndCopyMesh(CMesh* , const CMesh& );
	/* ../public/meshutils/mesh.h:155 */
	void FreeAllMemory(CMesh* );
	/* ../public/meshutils/mesh.h:161 */
	void InitExternalMesh(CMesh* , float* , int, uint32* , int, int, CMeshVertexAttribute* , int);
	/* ../public/meshutils/mesh.h:163 */
	void AppendMesh(CMesh* , const CMesh& );
	/* ../public/meshutils/mesh.h:165 */
	int TriangleCount(const CMesh* );
	/* ../public/meshutils/mesh.h:169 */
	int IndexCount(const CMesh* );
	/* ../public/meshutils/mesh.h:173 */
	int VertexCount(const CMesh* );
	/* ../public/meshutils/mesh.h:177 */
	float* GetVertex(CMesh* , int);
	/* ../public/meshutils/mesh.h:181 */
	const float* GetVertex(const CMesh* , int);
	/* ../public/meshutils/mesh.h:185 */
	const Vector& GetVertexPosition(const CMesh* , int);
	/* ../public/meshutils/mesh.h:189 */
	void SetVertexPosition(CMesh* , int, const Vector& );
	/* ../public/meshutils/mesh.h:194 */
	uint32 GetVertexSizeInBytes(const CMesh* );
	/* ../public/meshutils/mesh.h:198 */
	uint32 GetTotalVertexSizeInBytes(const CMesh* );
	/* ../public/meshutils/mesh.h:202 */
	uint32 GetTotalIndexSizeInBytes(const CMesh* );
	/* ../public/meshutils/mesh.h:296 */
	bool CalculateBounds(const CMesh* , Vector* , Vector* , int, int);
	/* ../public/meshutils/mesh.h:297 */
	bool CalculateBoundsForIndexRange(const CMesh* , Vector* , Vector* , int, int);
	/* ../public/meshutils/mesh.h:298 */
	bool CalculateAdjacency(const CMesh* , int* , int);
	/* ../public/meshutils/mesh.h:299 */
	bool CalculateIndicentFacesForVertices(const CMesh* , CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsigned int, int);
	/* ../public/meshutils/mesh.h:300 */
	bool CalculateInputLayoutFromAttributes(const CMesh* , RenderInputLayoutField_t* , int* );
	/* ../public/meshutils/mesh.h:301 */
	void CreateSimpleUnpackedVBAndIBForMesh(const CMesh* , VertexBufferHandle_t* , IndexBufferHandle_t* , bool);
	/* ../public/meshutils/mesh.h:302 */
	float CalculateAvgUvDensityForIndexRange(const CMesh* , int, int, int);
	/* ../public/meshutils/mesh.h:305 */
	int CreatePackedInputLayout(const CMesh* , PackedInputLayoutInfo_t* , CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >& , InputLayoutToAttributeMap& , const ShaderInputSignatureDesc_t* , bool);
	/* ../public/meshutils/mesh.h:304 */
	typedef struct CUtlVector<int, CUtlMemory<int, int> > InputLayoutToAttributeMap;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/mesh.h:307 */
	int CreatePackedInputLayout(CDmeVertexData* , PackedInputLayoutInfo_t* , CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >& , InputLayoutToAttributeMap& , const ShaderInputSignatureDesc_t* , bool);
	/* ../public/meshutils/mesh.h:309 */
	CMeshVertexAttribute* FindFirstAttribute(CMesh* , const char* , int);
	/* ../public/meshutils/mesh.h:310 */
	CMeshVertexAttribute* FindNthAttribute(CMesh* , const char* , int, int);
	/* ../public/meshutils/mesh.h:311 */
	const CMeshVertexAttribute* FindBaseAttributeForDelta(const CMesh* , const CMeshVertexAttribute* );
	/* ../public/meshutils/mesh.h:312 */
	int FindFirstAttributeOffset(const CMesh* , const char* , int);
	/* ../public/meshutils/mesh.h:313 */
	CUtlVector<int, CUtlMemory<int, int> > FindAllAttributeOffsets(const CMesh* , const char* , int);
	/* ../public/meshutils/mesh.h:314 */
	int FindFirstDeltaAttributeOffset(const CMesh* , const char* , const char* , int);
	/* ../public/meshutils/mesh.h:315 */
	int FindExactAttributeOffset(const CMesh* , const char* , int);
	/* ../public/meshutils/mesh.h:316 */
	void AddAttributes(CMesh* , CMeshVertexAttribute* , int);
	/* ../public/meshutils/mesh.h:317 */
	void AddAttribute(CMesh* , const char* , int, int);
	/* ../public/meshutils/mesh.h:318 */
	void AddExtraVertexStreamsFromMesh(CMesh* , const CMesh& , const int* );
	/* ../public/meshutils/mesh.h:319 */
	void CalculateTangents(CMesh* );
	/* ../public/meshutils/mesh.h:320 */
	void CalculateSmoothNormals(CMesh* );
	/* ../public/meshutils/mesh.h:321 */
	void CalculateCurvature(CMesh* );
	/* ../public/meshutils/mesh.h:322 */
	void CalculateWorldSpaceTextureCoordinateProjection(CMesh* );
	/* ../public/meshutils/mesh.h:323 */
	void FindFacesWithMultipleWorldSpaceTextureProjections(const CMesh* , CUtlVector<int, CUtlMemory<int, int> >* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/meshutils/mesh.h:324 */
	void ScalePositions(CMesh* , float, float, float);
	/* ../public/meshutils/mesh.h:325 */
	bool RemoveFirstAttribute(CMesh* , const char* , int);
	/* ../public/meshutils/mesh.h:326 */
	bool RemoveAttribute(CMesh* , CMeshVertexAttribute* );
	/* ../public/meshutils/mesh.h:327 */
	bool RemoveAttribute(CMesh* , int);
	/* ../public/meshutils/mesh.h:328 */
	bool RemoveAttributes(CMesh* , const SkinningDataFields_t& );
	/* ../public/meshutils/mesh.h:329 */
	void RemoveTangents(CMesh* );
	/* ../public/meshutils/mesh.h:330 */
	void RemoveColors(CMesh* );
	/* ../public/meshutils/mesh.h:331 */
	void RemoveUnusedVertices(CMesh* );
	/* ../public/meshutils/mesh.h:332 */
	void SkinToBoneIfNotSkinned(CMesh* , int);
	/* ../public/meshutils/mesh.h:333 */
	void SetBlendWeightAndIndexCount(CMesh* , int, bool);
	/* ../public/meshutils/mesh.h:334 */
	bool NormalizeSkinWeights(CMesh* );
	/* ../public/meshutils/mesh.h:335 */
	void SortSkinWeights(CMesh* , bool);
	/* ../public/meshutils/mesh.h:336 */
	bool CalculateTangentSpaceWorldLengthsPerFace(CMesh* , Vector2D* , int, float);
	/* ../public/meshutils/mesh.h:337 */
	bool CalculateFaceCenters(CMesh* , Vector* , int);
	/* ../public/meshutils/mesh.h:338 */
	void ReverseTriangleWinding(CMesh* );
	/* ../public/meshutils/mesh.h:339 */
	void SplitLongEdges(CMesh* , float);
	/* ../public/meshutils/mesh.h:340 */
	bool IsConvex(CMesh* , float);
	/* ../public/meshutils/mesh.h:343 */
	int CreatePackedVB(CMesh* , void* , const CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >& , const InputLayoutToAttributeMap& , int, bool, bool);
	/* ../public/meshutils/mesh.h:345 */
	bool HasSkinningData(const CMesh* );
	/* ../public/meshutils/mesh.h:346 */
	bool HasDeltaData(const CMesh* , const char* );
	/* ../public/meshutils/mesh.h:347 */
	bool GetUsedJoints(CMesh* , CVarBitVec& );
	/* ../public/meshutils/mesh.h:348 */
	SkinningDataFields_t GetSkinningDataFields(const CMesh* );
	/* ../public/meshutils/mesh.h:239 */
	class CAttrArray<int> {
	protected:
		float * m_pBase; /* 0 8 */
		int m_nStride; /* 8 4 */
		int m_nElementCount; /* 12 4 */
		int m_nAttrCount; /* 16 4 */
		/* ../public/meshutils/mesh.h:250 */
		void CAttrArray(CAttrArray<int>* , float* , int, int, int);
		/* ../public/meshutils/mesh.h:258 */
		struct Range_t {
			int m_Min; /* 0 4 */
			int m_Max; /* 4 4 */
			/* ../public/meshutils/mesh.h:262 */
			void Range_t(Range_t* );
			/* ../public/meshutils/mesh.h:263 */
			void Append(Range_t* , int);
		};
		/* ../public/meshutils/mesh.h:271 */
		Range_t GetRange(const CAttrArray<int>* );
		/* ../public/meshutils/mesh.h:287 */
		bool operator bool(const CAttrArray<int>* );
		/* ../public/meshutils/mesh.h:288 */
		CSingleVertexFieldAccessor<int> operator[](CAttrArray<int>* , int);
		/* ../public/meshutils/mesh.h:289 */
		CSingleVertexFieldAccessor<int const> operator[](const CAttrArray<int>* , int);
		/* ../public/meshutils/mesh.h:291 */
		int GetElementCount(const CAttrArray<int>* );
		/* ../public/meshutils/mesh.h:292 */
		int GetAttrCount(const CAttrArray<int>* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/mesh.h:375 */
	CAttrArray<int> GetSkinIndexArray(CMesh* );
	/* ../public/meshutils/mesh.h:239 */
	class CAttrArray<float> {
	protected:
		float * m_pBase; /* 0 8 */
		int m_nStride; /* 8 4 */
		int m_nElementCount; /* 12 4 */
		int m_nAttrCount; /* 16 4 */
		/* ../public/meshutils/mesh.h:250 */
		void CAttrArray(CAttrArray<float>* , float* , int, int, int);
		/* ../public/meshutils/mesh.h:258 */
		struct Range_t {
			float m_Min; /* 0 4 */
			float m_Max; /* 4 4 */
			/* ../public/meshutils/mesh.h:262 */
			void Range_t(Range_t* );
			/* ../public/meshutils/mesh.h:263 */
			void Append(Range_t* , float);
		};
		/* ../public/meshutils/mesh.h:271 */
		Range_t GetRange(const CAttrArray<float>* );
		/* ../public/meshutils/mesh.h:287 */
		bool operator bool(const CAttrArray<float>* );
		/* ../public/meshutils/mesh.h:288 */
		CSingleVertexFieldAccessor<float> operator[](CAttrArray<float>* , int);
		/* ../public/meshutils/mesh.h:289 */
		CSingleVertexFieldAccessor<float const> operator[](const CAttrArray<float>* , int);
		/* ../public/meshutils/mesh.h:291 */
		int GetElementCount(const CAttrArray<float>* );
		/* ../public/meshutils/mesh.h:292 */
		int GetAttrCount(const CAttrArray<float>* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/mesh.h:376 */
	CAttrArray<float> GetSkinWeightArray(CMesh* );
	/* ../public/meshutils/mesh.h:239 */
	class CAttrArray<Vector> {
	protected:
		float * m_pBase; /* 0 8 */
		int m_nStride; /* 8 4 */
		int m_nElementCount; /* 12 4 */
		int m_nAttrCount; /* 16 4 */
		/* ../public/meshutils/mesh.h:250 */
		void CAttrArray(CAttrArray<Vector>* , float* , int, int, int);
		struct Range_t {
		};
		/* ../public/meshutils/mesh.h:271 */
		Range_t GetRange(const CAttrArray<Vector>* );
		/* ../public/meshutils/mesh.h:287 */
		bool operator bool(const CAttrArray<Vector>* );
		/* ../public/meshutils/mesh.h:288 */
		CSingleVertexFieldAccessor<Vector> operator[](CAttrArray<Vector>* , int);
		/* ../public/meshutils/mesh.h:289 */
		CSingleVertexFieldAccessor<const Vector> operator[](const CAttrArray<Vector>* , int);
		/* ../public/meshutils/mesh.h:291 */
		int GetElementCount(const CAttrArray<Vector>* );
		/* ../public/meshutils/mesh.h:292 */
		int GetAttrCount(const CAttrArray<Vector>* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/mesh.h:377 */
	CAttrArray<Vector> GetPositionArray(CMesh* );
	/* ../public/meshutils/mesh.h:378 */
	CAttrArray<Vector> GetNormalArray(CMesh* );
	/* ../public/meshutils/mesh.h:239 */
	class CAttrArray<Vector2D> {
	protected:
		float * m_pBase; /* 0 8 */
		int m_nStride; /* 8 4 */
		int m_nElementCount; /* 12 4 */
		int m_nAttrCount; /* 16 4 */
		/* ../public/meshutils/mesh.h:250 */
		void CAttrArray(CAttrArray<Vector2D>* , float* , int, int, int);
		struct Range_t {
		};
		/* ../public/meshutils/mesh.h:271 */
		Range_t GetRange(const CAttrArray<Vector2D>* );
		/* ../public/meshutils/mesh.h:287 */
		bool operator bool(const CAttrArray<Vector2D>* );
		/* ../public/meshutils/mesh.h:288 */
		CSingleVertexFieldAccessor<Vector2D> operator[](CAttrArray<Vector2D>* , int);
		/* ../public/meshutils/mesh.h:289 */
		CSingleVertexFieldAccessor<const Vector2D> operator[](const CAttrArray<Vector2D>* , int);
		/* ../public/meshutils/mesh.h:291 */
		int GetElementCount(const CAttrArray<Vector2D>* );
		/* ../public/meshutils/mesh.h:292 */
		int GetAttrCount(const CAttrArray<Vector2D>* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/mesh.h:379 */
	CAttrArray<Vector2D> GetTexcoordArray(CMesh* , int);
	/* ../public/meshutils/mesh.h:380 */
	CAttrArray<Vector> GetTangentArray(CMesh* );
	/* ../public/meshutils/mesh.h:239 */
	class CAttrArray<Vector4D> {
	protected:
		float * m_pBase; /* 0 8 */
		int m_nStride; /* 8 4 */
		int m_nElementCount; /* 12 4 */
		int m_nAttrCount; /* 16 4 */
		/* ../public/meshutils/mesh.h:250 */
		void CAttrArray(CAttrArray<Vector4D>* , float* , int, int, int);
		struct Range_t {
		};
		/* ../public/meshutils/mesh.h:271 */
		Range_t GetRange(const CAttrArray<Vector4D>* );
		/* ../public/meshutils/mesh.h:287 */
		bool operator bool(const CAttrArray<Vector4D>* );
		/* ../public/meshutils/mesh.h:288 */
		CSingleVertexFieldAccessor<Vector4D> operator[](CAttrArray<Vector4D>* , int);
		/* ../public/meshutils/mesh.h:289 */
		CSingleVertexFieldAccessor<const Vector4D> operator[](const CAttrArray<Vector4D>* , int);
		/* ../public/meshutils/mesh.h:291 */
		int GetElementCount(const CAttrArray<Vector4D>* );
		/* ../public/meshutils/mesh.h:292 */
		int GetAttrCount(const CAttrArray<Vector4D>* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/mesh.h:381 */
	CAttrArray<Vector4D> GetTangentWithSignArray(CMesh* );
	/* ../public/meshutils/mesh.h:383 */
	int GetNormalAttributeIndex(const CMesh* , int);
	/* ../public/meshutils/mesh.h:384 */
	int GetBlendWeightCount(const CMesh* );
	/* ../public/meshutils/mesh.h:385 */
	void RemapBlendIndices(CMesh* , const int* , int, int);
	/* ../public/meshutils/mesh.h:386 */
	float GetVertexJointWeight(CMesh* , const SkinningDataFields_t& , int, int);
	/* ../public/meshutils/mesh.h:387 */
	float GetVertexJointSumWeight(CMesh* , const SkinningDataFields_t& , int, const CVarBitVec& );
	/* ../public/meshutils/mesh.h:389 */
	bool GetBoneInfluenceStats(CMesh* , CUtlVector<float, CUtlMemory<float, int> >& , CUtlVector<int, CUtlMemory<int, int> >& , float);
	/* ../public/meshutils/mesh.h:391 */
	void WriteMeshWireframeToGlViewBuffer(const CMesh* , CGlViewBuffer* , float, float, float);
	/* ../public/meshutils/mesh.h:392 */
	void GetDeltaNames(CMesh* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* ../public/meshutils/mesh.h:394 */
	float ComputeVolume(const CMesh* );
	/* ../public/meshutils/mesh.h:395 */
	int GetMostlyAttachedBone(const CMesh* );
	/* ../public/meshutils/mesh.h:396 */
	AABB_t GetBounds(const CMesh* );
	/* ../public/meshutils/mesh.h:398 */
	int BuildIslandMap(const CMesh* , CUtlVector<int, CUtlMemory<int, int> >& );
	/* ../public/meshutils/mesh.h:399 */
	int BuildIslandMap(const CMesh* , CUtlVector<int, CUtlMemory<int, int> >& , CAttrArray<int>);
	/* ../public/meshutils/mesh.h:401 */
	Range_t GetSupportRange(const CMesh* , const Vector& );
	/* ../public/meshutils/mesh.h:404 */
	void SaveObj(const CMesh* , IFileSystem* , const char* , ...);
	/* ../public/meshutils/mesh.h:405 */
	void SaveObj(const CMesh* , const CMeshDisjointSetPartition& , int, IFileSystem* , const char* , ...);
	/* ../public/meshutils/mesh.h:407 */
	void Validate(CMesh* );
	/* ../public/meshutils/mesh.h:408 */
	bool SupportsLOD(CMesh* );
	/* ../public/meshutils/mesh.h:409 */
	bool IsLowLOD(CMesh* );
	/* ../public/meshutils/mesh.h:410 */
	void SetTintColor(CMesh* , const Vector4D& );
	/* ../public/meshutils/mesh.h:412 */
	void SetContextPtr(CMesh* , const void* );
	/* ../public/meshutils/mesh.h:413 */
	const void* GetContextPtr(const CMesh* );
	float * m_pVerts; /* 0 8 */
	CMeshVertexAttribute * m_pAttributes; /* 8 8 */
	uint32 * m_pIndices; /* 16 8 */
	int m_nVertexCount; /* 24 4 */
	int m_nVertexStrideFloats; /* 28 4 */
	int m_nAttributeCount; /* 32 4 */
	int m_nIndexCount; /* 36 4 */
	CUtlVector<float, CUtlMemory<float, int> > m_lodGroupSwitchDistances; /* 40 32 */
	uint8 m_nLODGroupMask; /* 72 1 */
	CPathBufferString m_materialName; /* 80 208 */
	CDmeMesh * m_pSourceDmeMesh; /* 288 8 */
	int32 m_nMeshID; /* 296 4 */
	bool m_bNoCollapse; /* 300 1 */
	bool m_bPackToSharedVB; /* 301 1 */
	bool m_bUseBaseVertex; /* 302 1 */
	bool m_bUseTintColor; /* 303 1 */
	Vector4D m_vTintColor; /* 304 16 */
	int8 m_nCollisionType; /* 320 1 */
	KeyValues m_KeyValues; /* 321 20 */
	float m_flLightMapScaleBias; /* 344 4 */
	const void * m_pContextPtr; /* 352 8 */
private:
	/* ../public/meshutils/mesh.h:442 */
	void CMesh(CMesh* , const CMesh& );
	/* ../public/meshutils/mesh.h:443 */
	CMesh& operator=(CMesh* , const CMesh& );
	/* ../public/meshutils/mesh.h:445 */
	void RestrideVertexBuffer(CMesh* , int);
	bool m_bAllocatedMeshData; /* 360 1 */
	class CSingleVertexFieldAccessor<int> {
	};
	class CSingleVertexFieldAccessor<int const> {
	};
	class CSingleVertexFieldAccessor<float> {
	};
	class CSingleVertexFieldAccessor<float const> {
	};
	class CSingleVertexFieldAccessor<Vector> {
	};
	class CSingleVertexFieldAccessor<const Vector> {
	};
	class CSingleVertexFieldAccessor<Vector2D> {
	};
	class CSingleVertexFieldAccessor<const Vector2D> {
	};
	class CSingleVertexFieldAccessor<Vector4D> {
	};
	class CSingleVertexFieldAccessor<const Vector4D> {
	};
	void CMesh(class CMesh *); /* linkage=_ZN5CMeshC4Ev */
	void ~CMesh(class CMesh *); /* linkage=_ZN5CMeshD4Ev */
	void AllocateMesh(class CMesh *, int, int, int, class CMeshVertexAttribute *, int); /* linkage=_ZN5CMesh12AllocateMeshEiiiP20CMeshVertexAttributei */
	void AllocateAndCopyMesh(class CMesh *, int, const float  *, int, int, const uint32  *, int, class CMeshVertexAttribute *, int); /* linkage=_ZN5CMesh19AllocateAndCopyMeshEiPKfiiPKjiP20CMeshVertexAttributei */
	void AllocateAndCopyMesh(class CMesh *, const class CMesh  &); /* linkage=_ZN5CMesh19AllocateAndCopyMeshERKS_ */
	void FreeAllMemory(class CMesh *); /* linkage=_ZN5CMesh13FreeAllMemoryEv */
	void InitExternalMesh(class CMesh *, float *, int, uint32 *, int, int, class CMeshVertexAttribute *, int); /* linkage=_ZN5CMesh16InitExternalMeshEPfiPjiiP20CMeshVertexAttributei */
	void AppendMesh(class CMesh *, const class CMesh  &); /* linkage=_ZN5CMesh10AppendMeshERKS_ */
	int TriangleCount(const class CMesh  *); /* linkage=_ZNK5CMesh13TriangleCountEv */
	int IndexCount(const class CMesh  *); /* linkage=_ZNK5CMesh10IndexCountEv */
	int VertexCount(const class CMesh  *); /* linkage=_ZNK5CMesh11VertexCountEv */
	float * GetVertex(class CMesh *, int); /* linkage=_ZN5CMesh9GetVertexEi */
	const float  * GetVertex(const class CMesh  *, int); /* linkage=_ZNK5CMesh9GetVertexEi */
	const class Vector  & GetVertexPosition(const class CMesh  *, int); /* linkage=_ZNK5CMesh17GetVertexPositionEi */
	void SetVertexPosition(class CMesh *, int, const class Vector  &); /* linkage=_ZN5CMesh17SetVertexPositionEiRK6Vector */
	uint32 GetVertexSizeInBytes(const class CMesh  *); /* linkage=_ZNK5CMesh20GetVertexSizeInBytesEv */
	uint32 GetTotalVertexSizeInBytes(const class CMesh  *); /* linkage=_ZNK5CMesh25GetTotalVertexSizeInBytesEv */
	uint32 GetTotalIndexSizeInBytes(const class CMesh  *); /* linkage=_ZNK5CMesh24GetTotalIndexSizeInBytesEv */
	bool CalculateBounds(const class CMesh  *, class Vector *, class Vector *, int, int); /* linkage=_ZNK5CMesh15CalculateBoundsEP6VectorS1_ii */
	bool CalculateBoundsForIndexRange(const class CMesh  *, class Vector *, class Vector *, int, int); /* linkage=_ZNK5CMesh28CalculateBoundsForIndexRangeEP6VectorS1_ii */
	bool CalculateAdjacency(const class CMesh  *, int *, int); /* linkage=_ZNK5CMesh18CalculateAdjacencyEPii */
	bool CalculateIndicentFacesForVertices(const class CMesh  *, class CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsigned int, int); /* linkage=_ZNK5CMesh33CalculateIndicentFacesForVerticesEP14CUtlLinkedListIitLb0Et10CUtlMemoryI19UtlLinkedListElem_tIitEtEEi */
	/* <5ae599e> meshutils/formats.cpp:144 */
	bool CalculateInputLayoutFromAttributes(const class CMesh  *, class RenderInputLayoutField_t *, int *); /* linkage=_ZNK5CMesh34CalculateInputLayoutFromAttributesEP24RenderInputLayoutField_tPi */
	void CreateSimpleUnpackedVBAndIBForMesh(const class CMesh  *, VertexBufferHandle_t *, IndexBufferHandle_t *, bool); /* linkage=_ZNK5CMesh34CreateSimpleUnpackedVBAndIBForMeshEPP22VertexBufferHandle_t__PP21IndexBufferHandle_t__b */
	float CalculateAvgUvDensityForIndexRange(const class CMesh  *, int, int, int); /* linkage=_ZNK5CMesh34CalculateAvgUvDensityForIndexRangeEiii */
	int CreatePackedInputLayout(const class CMesh  *, class PackedInputLayoutInfo_t *, class CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> > &, InputLayoutToAttributeMap &, const class ShaderInputSignatureDesc_t  *, bool); /* linkage=_ZNK5CMesh23CreatePackedInputLayoutEP23PackedInputLayoutInfo_tR10CUtlVectorI24RenderInputLayoutField_t10CUtlMemoryIS3_iEERS2_IiS4_IiiEEPK26ShaderInputSignatureDesc_tb */
	int CreatePackedInputLayout(class CDmeVertexData *, class PackedInputLayoutInfo_t *, class CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> > &, InputLayoutToAttributeMap &, const class ShaderInputSignatureDesc_t  *, bool); /* linkage=_ZN5CMesh23CreatePackedInputLayoutEP14CDmeVertexDataP23PackedInputLayoutInfo_tR10CUtlVectorI24RenderInputLayoutField_t10CUtlMemoryIS5_iEERS4_IiS6_IiiEEPK26ShaderInputSignatureDesc_tb */
	class CMeshVertexAttribute * FindFirstAttribute(class CMesh *, const char  *, int); /* linkage=_ZN5CMesh18FindFirstAttributeEPKci */
	class CMeshVertexAttribute * FindNthAttribute(class CMesh *, const char  *, int, int); /* linkage=_ZN5CMesh16FindNthAttributeEPKcii */
	const class CMeshVertexAttribute  * FindBaseAttributeForDelta(const class CMesh  *, const class CMeshVertexAttribute  *); /* linkage=_ZNK5CMesh25FindBaseAttributeForDeltaEPK20CMeshVertexAttribute */
	/* <5be5d8a> meshutils/mesh.cpp:575 */
	int FindFirstAttributeOffset(const class CMesh  *, const char  *, int); /* linkage=_ZNK5CMesh24FindFirstAttributeOffsetEPKci */
	class CUtlVector<int, CUtlMemory<int, int> > FindAllAttributeOffsets(const class CMesh  *, const char  *, int); /* linkage=_ZNK5CMesh23FindAllAttributeOffsetsEPKci */
	int FindFirstDeltaAttributeOffset(const class CMesh  *, const char  *, const char  *, int); /* linkage=_ZNK5CMesh29FindFirstDeltaAttributeOffsetEPKcS1_i */
	int FindExactAttributeOffset(const class CMesh  *, const char  *, int); /* linkage=_ZNK5CMesh24FindExactAttributeOffsetEPKci */
	void AddAttributes(class CMesh *, class CMeshVertexAttribute *, int); /* linkage=_ZN5CMesh13AddAttributesEP20CMeshVertexAttributei */
	void AddAttribute(class CMesh *, const char  *, int, int); /* linkage=_ZN5CMesh12AddAttributeEPKcii */
	void AddExtraVertexStreamsFromMesh(class CMesh *, const class CMesh  &, const int  *); /* linkage=_ZN5CMesh29AddExtraVertexStreamsFromMeshERKS_PKi */
	void CalculateTangents(class CMesh *); /* linkage=_ZN5CMesh17CalculateTangentsEv */
	void CalculateSmoothNormals(class CMesh *); /* linkage=_ZN5CMesh22CalculateSmoothNormalsEv */
	void CalculateCurvature(class CMesh *); /* linkage=_ZN5CMesh18CalculateCurvatureEv */
	void CalculateWorldSpaceTextureCoordinateProjection(class CMesh *); /* linkage=_ZN5CMesh46CalculateWorldSpaceTextureCoordinateProjectionEv */
	void FindFacesWithMultipleWorldSpaceTextureProjections(const class CMesh  *, class CUtlVector<int, CUtlMemory<int, int> > *, class CUtlVector<int, CUtlMemory<int, int> > *); /* linkage=_ZNK5CMesh49FindFacesWithMultipleWorldSpaceTextureProjectionsEP10CUtlVectorIi10CUtlMemoryIiiEES4_ */
	void ScalePositions(class CMesh *, float, float, float); /* linkage=_ZN5CMesh14ScalePositionsEfff */
	/* <5be5ea2> meshutils/mesh.cpp:1613 */
	bool RemoveFirstAttribute(class CMesh *, const char  *, int); /* linkage=_ZN5CMesh20RemoveFirstAttributeEPKci */
	bool RemoveAttribute(class CMesh *, class CMeshVertexAttribute *); /* linkage=_ZN5CMesh15RemoveAttributeEP20CMeshVertexAttribute */
	/* <5be5e11> meshutils/mesh.cpp:1620 */
	bool RemoveAttribute(class CMesh *, int); /* linkage=_ZN5CMesh15RemoveAttributeEi */
	bool RemoveAttributes(class CMesh *, const class SkinningDataFields_t  &); /* linkage=_ZN5CMesh16RemoveAttributesERKNS_20SkinningDataFields_tE */
	void RemoveTangents(class CMesh *); /* linkage=_ZN5CMesh14RemoveTangentsEv */
	void RemoveColors(class CMesh *); /* linkage=_ZN5CMesh12RemoveColorsEv */
	void RemoveUnusedVertices(class CMesh *); /* linkage=_ZN5CMesh20RemoveUnusedVerticesEv */
	void SkinToBoneIfNotSkinned(class CMesh *, int); /* linkage=_ZN5CMesh22SkinToBoneIfNotSkinnedEi */
	void SetBlendWeightAndIndexCount(class CMesh *, int, bool); /* linkage=_ZN5CMesh27SetBlendWeightAndIndexCountEib */
	bool NormalizeSkinWeights(class CMesh *); /* linkage=_ZN5CMesh20NormalizeSkinWeightsEv */
	void SortSkinWeights(class CMesh *, bool); /* linkage=_ZN5CMesh15SortSkinWeightsEb */
	bool CalculateTangentSpaceWorldLengthsPerFace(class CMesh *, class Vector2D *, int, float); /* linkage=_ZN5CMesh40CalculateTangentSpaceWorldLengthsPerFaceEP8Vector2Dif */
	bool CalculateFaceCenters(class CMesh *, class Vector *, int); /* linkage=_ZN5CMesh20CalculateFaceCentersEP6Vectori */
	void ReverseTriangleWinding(class CMesh *); /* linkage=_ZN5CMesh22ReverseTriangleWindingEv */
	void SplitLongEdges(class CMesh *, float); /* linkage=_ZN5CMesh14SplitLongEdgesEf */
	bool IsConvex(class CMesh *, float); /* linkage=_ZN5CMesh8IsConvexEf */
	int CreatePackedVB(class CMesh *, void *, const class CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >  &, const InputLayoutToAttributeMap  &, int, bool, bool); /* linkage=_ZN5CMesh14CreatePackedVBEPvRK10CUtlVectorI24RenderInputLayoutField_t10CUtlMemoryIS2_iEERKS1_IiS3_IiiEEibb */
	bool HasSkinningData(const class CMesh  *); /* linkage=_ZNK5CMesh15HasSkinningDataEv */
	bool HasDeltaData(const class CMesh  *, const char  *); /* linkage=_ZNK5CMesh12HasDeltaDataEPKc */
	bool GetUsedJoints(class CMesh *, class CVarBitVec &); /* linkage=_ZN5CMesh13GetUsedJointsER10CVarBitVec */
	class SkinningDataFields_t GetSkinningDataFields(const class CMesh  *); /* linkage=_ZNK5CMesh21GetSkinningDataFieldsEv */
	class CAttrArray<int> GetSkinIndexArray(class CMesh *); /* linkage=_ZN5CMesh17GetSkinIndexArrayEv */
	class CAttrArray<float> GetSkinWeightArray(class CMesh *); /* linkage=_ZN5CMesh18GetSkinWeightArrayEv */
	class CAttrArray<Vector> GetPositionArray(class CMesh *); /* linkage=_ZN5CMesh16GetPositionArrayEv */
	class CAttrArray<Vector> GetNormalArray(class CMesh *); /* linkage=_ZN5CMesh14GetNormalArrayEv */
	class CAttrArray<Vector2D> GetTexcoordArray(class CMesh *, int); /* linkage=_ZN5CMesh16GetTexcoordArrayEi */
	class CAttrArray<Vector> GetTangentArray(class CMesh *); /* linkage=_ZN5CMesh15GetTangentArrayEv */
	class CAttrArray<Vector4D> GetTangentWithSignArray(class CMesh *); /* linkage=_ZN5CMesh23GetTangentWithSignArrayEv */
	int GetNormalAttributeIndex(const class CMesh  *, int); /* linkage=_ZNK5CMesh23GetNormalAttributeIndexEi */
	int GetBlendWeightCount(const class CMesh  *); /* linkage=_ZNK5CMesh19GetBlendWeightCountEv */
	void RemapBlendIndices(class CMesh *, const int  *, int, int); /* linkage=_ZN5CMesh17RemapBlendIndicesEPKiii */
	float GetVertexJointWeight(class CMesh *, const class SkinningDataFields_t  &, int, int); /* linkage=_ZN5CMesh20GetVertexJointWeightERKNS_20SkinningDataFields_tEii */
	float GetVertexJointSumWeight(class CMesh *, const class SkinningDataFields_t  &, int, const class CVarBitVec  &); /* linkage=_ZN5CMesh23GetVertexJointSumWeightERKNS_20SkinningDataFields_tEiRK10CVarBitVec */
	bool GetBoneInfluenceStats(class CMesh *, class CUtlVector<float, CUtlMemory<float, int> > &, class CUtlVector<int, CUtlMemory<int, int> > &, float); /* linkage=_ZN5CMesh21GetBoneInfluenceStatsER10CUtlVectorIf10CUtlMemoryIfiEERS0_IiS1_IiiEEf */
	void WriteMeshWireframeToGlViewBuffer(const class CMesh  *, class CGlViewBuffer *, float, float, float); /* linkage=_ZNK5CMesh32WriteMeshWireframeToGlViewBufferEP13CGlViewBufferfff */
	void GetDeltaNames(class CMesh *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN5CMesh13GetDeltaNamesER10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEE */
	float ComputeVolume(const class CMesh  *); /* linkage=_ZNK5CMesh13ComputeVolumeEv */
	int GetMostlyAttachedBone(const class CMesh  *); /* linkage=_ZNK5CMesh21GetMostlyAttachedBoneEv */
	class AABB_t GetBounds(const class CMesh  *); /* linkage=_ZNK5CMesh9GetBoundsEv */
	int BuildIslandMap(const class CMesh  *, class CUtlVector<int, CUtlMemory<int, int> > &); /* linkage=_ZNK5CMesh14BuildIslandMapER10CUtlVectorIi10CUtlMemoryIiiEE */
	int BuildIslandMap(const class CMesh  *, class CUtlVector<int, CUtlMemory<int, int> > &, class CAttrArray<int>); /* linkage=_ZNK5CMesh14BuildIslandMapER10CUtlVectorIi10CUtlMemoryIiiEENS_10CAttrArrayIiEE */
	class Range_t GetSupportRange(const class CMesh  *, const class Vector  &); /* linkage=_ZNK5CMesh15GetSupportRangeERK6Vector */
	void SaveObj(const class CMesh  *, class IFileSystem *, const char  *, ...); /* linkage=_ZNK5CMesh7SaveObjEP11IFileSystemPKcz */
	void SaveObj(const class CMesh  *, const class CMeshDisjointSetPartition  &, int, class IFileSystem *, const char  *, ...); /* linkage=_ZNK5CMesh7SaveObjERK25CMeshDisjointSetPartitioniP11IFileSystemPKcz */
	void Validate(class CMesh *); /* linkage=_ZN5CMesh8ValidateEv */
	bool SupportsLOD(class CMesh *); /* linkage=_ZN5CMesh11SupportsLODEv */
	bool IsLowLOD(class CMesh *); /* linkage=_ZN5CMesh8IsLowLODEv */
	void SetTintColor(class CMesh *, const class Vector4D  &); /* linkage=_ZN5CMesh12SetTintColorERK8Vector4D */
	/* <5be5f37> meshutils/mesh.cpp:1956 */
	void SetContextPtr(class CMesh *, const void  *); /* linkage=_ZN5CMesh13SetContextPtrEPKv */
	/* <5be5f6a> meshutils/mesh.cpp:1961 */
	const void  * GetContextPtr(const class CMesh  *); /* linkage=_ZNK5CMesh13GetContextPtrEv */
	void CMesh(class CMesh *, const class CMesh  &); /* linkage=_ZN5CMeshC4ERKS_ */
	class CMesh & operator=(class CMesh *, const class CMesh  &); /* linkage=_ZN5CMeshaSERKS_ */
	void RestrideVertexBuffer(class CMesh *, int); /* linkage=_ZN5CMesh20RestrideVertexBufferEi */
	class CAttrArray<float> GetAttrArray<float>(class CMesh *, class CMeshVertexAttribute *); /* linkage=_ZN5CMesh12GetAttrArrayIfEENS_10CAttrArrayIT_EEP20CMeshVertexAttribute */
	class CAttrArray<int> GetAttrArray<int>(class CMesh *, class CMeshVertexAttribute *); /* linkage=_ZN5CMesh12GetAttrArrayIiEENS_10CAttrArrayIT_EEP20CMeshVertexAttribute */
	class CAttrArray<float> FindAttrArray<float>(class CMesh *, const char  *, int); /* linkage=_ZN5CMesh13FindAttrArrayIfEENS_10CAttrArrayIT_EEPKci */
	class CAttrArray<int> FindAttrArray<int>(class CMesh *, const char  *, int); /* linkage=_ZN5CMesh13FindAttrArrayIiEENS_10CAttrArrayIT_EEPKci */
};

// <05B86CFB> ../public/meshutils/mesh.h:144
// member functions: 265
// member variables: 22
// class size: 368
class CMesh {
	/* ../public/meshutils/mesh.h:207 */
	struct SkinningDataFields_t {
		/* ../public/meshutils/mesh.h:209 */
		void SkinningDataFields_t(SkinningDataFields_t* );
		/* ../public/meshutils/mesh.h:210 */
		bool HasSkinningData(const SkinningDataFields_t* );
		int m_nBoneWeights; /* 0 4 */
		int m_nBoneIndices; /* 4 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/mesh.h:147 */
	void CMesh(CMesh* );
	/* ../public/meshutils/mesh.h:148 */
	void ~CMesh(CMesh* );
	/* ../public/meshutils/mesh.h:152 */
	void AllocateMesh(CMesh* , int, int, int, CMeshVertexAttribute* , int);
	/* ../public/meshutils/mesh.h:153 */
	void AllocateAndCopyMesh(CMesh* , int, const float* , int, int, const uint32* , int, CMeshVertexAttribute* , int);
	/* ../public/meshutils/mesh.h:154 */
	void AllocateAndCopyMesh(CMesh* , const CMesh& );
	/* ../public/meshutils/mesh.h:155 */
	void FreeAllMemory(CMesh* );
	/* ../public/meshutils/mesh.h:161 */
	void InitExternalMesh(CMesh* , float* , int, uint32* , int, int, CMeshVertexAttribute* , int);
	/* ../public/meshutils/mesh.h:163 */
	void AppendMesh(CMesh* , const CMesh& );
	/* ../public/meshutils/mesh.h:165 */
	int TriangleCount(const CMesh* );
	/* ../public/meshutils/mesh.h:169 */
	int IndexCount(const CMesh* );
	/* ../public/meshutils/mesh.h:173 */
	int VertexCount(const CMesh* );
	/* ../public/meshutils/mesh.h:177 */
	float* GetVertex(CMesh* , int);
	/* ../public/meshutils/mesh.h:181 */
	const float* GetVertex(const CMesh* , int);
	/* ../public/meshutils/mesh.h:185 */
	const Vector& GetVertexPosition(const CMesh* , int);
	/* ../public/meshutils/mesh.h:189 */
	void SetVertexPosition(CMesh* , int, const Vector& );
	/* ../public/meshutils/mesh.h:194 */
	uint32 GetVertexSizeInBytes(const CMesh* );
	/* ../public/meshutils/mesh.h:198 */
	uint32 GetTotalVertexSizeInBytes(const CMesh* );
	/* ../public/meshutils/mesh.h:202 */
	uint32 GetTotalIndexSizeInBytes(const CMesh* );
	/* ../public/meshutils/mesh.h:296 */
	bool CalculateBounds(const CMesh* , Vector* , Vector* , int, int);
	/* ../public/meshutils/mesh.h:297 */
	bool CalculateBoundsForIndexRange(const CMesh* , Vector* , Vector* , int, int);
	/* ../public/meshutils/mesh.h:298 */
	bool CalculateAdjacency(const CMesh* , int* , int);
	/* ../public/meshutils/mesh.h:299 */
	bool CalculateIndicentFacesForVertices(const CMesh* , CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsigned int, int);
	/* ../public/meshutils/mesh.h:300 */
	bool CalculateInputLayoutFromAttributes(const CMesh* , RenderInputLayoutField_t* , int* );
	/* ../public/meshutils/mesh.h:301 */
	void CreateSimpleUnpackedVBAndIBForMesh(const CMesh* , VertexBufferHandle_t* , IndexBufferHandle_t* , bool);
	/* ../public/meshutils/mesh.h:302 */
	float CalculateAvgUvDensityForIndexRange(const CMesh* , int, int, int);
	/* ../public/meshutils/mesh.h:305 */
	int CreatePackedInputLayout(const CMesh* , PackedInputLayoutInfo_t* , CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >& , InputLayoutToAttributeMap& , const ShaderInputSignatureDesc_t* , bool);
	/* ../public/meshutils/mesh.h:304 */
	typedef struct CUtlVector<int, CUtlMemory<int, int> > InputLayoutToAttributeMap;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/mesh.h:307 */
	int CreatePackedInputLayout(CDmeVertexData* , PackedInputLayoutInfo_t* , CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >& , InputLayoutToAttributeMap& , const ShaderInputSignatureDesc_t* , bool);
	/* ../public/meshutils/mesh.h:309 */
	CMeshVertexAttribute* FindFirstAttribute(CMesh* , const char* , int);
	/* ../public/meshutils/mesh.h:310 */
	CMeshVertexAttribute* FindNthAttribute(CMesh* , const char* , int, int);
	/* ../public/meshutils/mesh.h:311 */
	const CMeshVertexAttribute* FindBaseAttributeForDelta(const CMesh* , const CMeshVertexAttribute* );
	/* ../public/meshutils/mesh.h:312 */
	int FindFirstAttributeOffset(const CMesh* , const char* , int);
	/* ../public/meshutils/mesh.h:313 */
	CUtlVector<int, CUtlMemory<int, int> > FindAllAttributeOffsets(const CMesh* , const char* , int);
	/* ../public/meshutils/mesh.h:314 */
	int FindFirstDeltaAttributeOffset(const CMesh* , const char* , const char* , int);
	/* ../public/meshutils/mesh.h:315 */
	int FindExactAttributeOffset(const CMesh* , const char* , int);
	/* ../public/meshutils/mesh.h:316 */
	void AddAttributes(CMesh* , CMeshVertexAttribute* , int);
	/* ../public/meshutils/mesh.h:317 */
	void AddAttribute(CMesh* , const char* , int, int);
	/* ../public/meshutils/mesh.h:318 */
	void AddExtraVertexStreamsFromMesh(CMesh* , const CMesh& , const int* );
	/* ../public/meshutils/mesh.h:319 */
	void CalculateTangents(CMesh* );
	/* ../public/meshutils/mesh.h:320 */
	void CalculateSmoothNormals(CMesh* );
	/* ../public/meshutils/mesh.h:321 */
	void CalculateCurvature(CMesh* );
	/* ../public/meshutils/mesh.h:322 */
	void CalculateWorldSpaceTextureCoordinateProjection(CMesh* );
	/* ../public/meshutils/mesh.h:323 */
	void FindFacesWithMultipleWorldSpaceTextureProjections(const CMesh* , CUtlVector<int, CUtlMemory<int, int> >* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/meshutils/mesh.h:324 */
	void ScalePositions(CMesh* , float, float, float);
	/* ../public/meshutils/mesh.h:325 */
	bool RemoveFirstAttribute(CMesh* , const char* , int);
	/* ../public/meshutils/mesh.h:326 */
	bool RemoveAttribute(CMesh* , CMeshVertexAttribute* );
	/* ../public/meshutils/mesh.h:327 */
	bool RemoveAttribute(CMesh* , int);
	/* ../public/meshutils/mesh.h:328 */
	bool RemoveAttributes(CMesh* , const SkinningDataFields_t& );
	/* ../public/meshutils/mesh.h:329 */
	void RemoveTangents(CMesh* );
	/* ../public/meshutils/mesh.h:330 */
	void RemoveColors(CMesh* );
	/* ../public/meshutils/mesh.h:331 */
	void RemoveUnusedVertices(CMesh* );
	/* ../public/meshutils/mesh.h:332 */
	void SkinToBoneIfNotSkinned(CMesh* , int);
	/* ../public/meshutils/mesh.h:333 */
	void SetBlendWeightAndIndexCount(CMesh* , int, bool);
	/* ../public/meshutils/mesh.h:334 */
	bool NormalizeSkinWeights(CMesh* );
	/* ../public/meshutils/mesh.h:335 */
	void SortSkinWeights(CMesh* , bool);
	/* ../public/meshutils/mesh.h:336 */
	bool CalculateTangentSpaceWorldLengthsPerFace(CMesh* , Vector2D* , int, float);
	/* ../public/meshutils/mesh.h:337 */
	bool CalculateFaceCenters(CMesh* , Vector* , int);
	/* ../public/meshutils/mesh.h:338 */
	void ReverseTriangleWinding(CMesh* );
	/* ../public/meshutils/mesh.h:339 */
	void SplitLongEdges(CMesh* , float);
	/* ../public/meshutils/mesh.h:340 */
	bool IsConvex(CMesh* , float);
	/* ../public/meshutils/mesh.h:343 */
	int CreatePackedVB(CMesh* , void* , const CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >& , const InputLayoutToAttributeMap& , int, bool, bool);
	/* ../public/meshutils/mesh.h:345 */
	bool HasSkinningData(const CMesh* );
	/* ../public/meshutils/mesh.h:346 */
	bool HasDeltaData(const CMesh* , const char* );
	/* ../public/meshutils/mesh.h:347 */
	bool GetUsedJoints(CMesh* , CVarBitVec& );
	/* ../public/meshutils/mesh.h:348 */
	SkinningDataFields_t GetSkinningDataFields(const CMesh* );
	/* ../public/meshutils/mesh.h:239 */
	class CAttrArray<int> {
	protected:
		float * m_pBase; /* 0 8 */
		int m_nStride; /* 8 4 */
		int m_nElementCount; /* 12 4 */
		int m_nAttrCount; /* 16 4 */
		/* ../public/meshutils/mesh.h:250 */
		void CAttrArray(CAttrArray<int>* , float* , int, int, int);
		/* ../public/meshutils/mesh.h:258 */
		struct Range_t {
			int m_Min; /* 0 4 */
			int m_Max; /* 4 4 */
			/* ../public/meshutils/mesh.h:262 */
			void Range_t(Range_t* );
			/* ../public/meshutils/mesh.h:263 */
			void Append(Range_t* , int);
		};
		/* ../public/meshutils/mesh.h:271 */
		Range_t GetRange(const CAttrArray<int>* );
		/* ../public/meshutils/mesh.h:287 */
		bool operator bool(const CAttrArray<int>* );
		/* ../public/meshutils/mesh.h:288 */
		CSingleVertexFieldAccessor<int> operator[](CAttrArray<int>* , int);
		/* ../public/meshutils/mesh.h:289 */
		CSingleVertexFieldAccessor<int const> operator[](const CAttrArray<int>* , int);
		/* ../public/meshutils/mesh.h:291 */
		int GetElementCount(const CAttrArray<int>* );
		/* ../public/meshutils/mesh.h:292 */
		int GetAttrCount(const CAttrArray<int>* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/mesh.h:375 */
	CAttrArray<int> GetSkinIndexArray(CMesh* );
	/* ../public/meshutils/mesh.h:239 */
	class CAttrArray<float> {
	protected:
		float * m_pBase; /* 0 8 */
		int m_nStride; /* 8 4 */
		int m_nElementCount; /* 12 4 */
		int m_nAttrCount; /* 16 4 */
		/* ../public/meshutils/mesh.h:250 */
		void CAttrArray(CAttrArray<float>* , float* , int, int, int);
		/* ../public/meshutils/mesh.h:258 */
		struct Range_t {
			float m_Min; /* 0 4 */
			float m_Max; /* 4 4 */
			/* ../public/meshutils/mesh.h:262 */
			void Range_t(Range_t* );
			/* ../public/meshutils/mesh.h:263 */
			void Append(Range_t* , float);
		};
		/* ../public/meshutils/mesh.h:271 */
		Range_t GetRange(const CAttrArray<float>* );
		/* ../public/meshutils/mesh.h:287 */
		bool operator bool(const CAttrArray<float>* );
		/* ../public/meshutils/mesh.h:288 */
		CSingleVertexFieldAccessor<float> operator[](CAttrArray<float>* , int);
		/* ../public/meshutils/mesh.h:289 */
		CSingleVertexFieldAccessor<float const> operator[](const CAttrArray<float>* , int);
		/* ../public/meshutils/mesh.h:291 */
		int GetElementCount(const CAttrArray<float>* );
		/* ../public/meshutils/mesh.h:292 */
		int GetAttrCount(const CAttrArray<float>* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/mesh.h:376 */
	CAttrArray<float> GetSkinWeightArray(CMesh* );
	/* ../public/meshutils/mesh.h:239 */
	class CAttrArray<Vector> {
	protected:
		float * m_pBase; /* 0 8 */
		int m_nStride; /* 8 4 */
		int m_nElementCount; /* 12 4 */
		int m_nAttrCount; /* 16 4 */
		/* ../public/meshutils/mesh.h:250 */
		void CAttrArray(CAttrArray<Vector>* , float* , int, int, int);
		struct Range_t {
		};
		/* ../public/meshutils/mesh.h:271 */
		Range_t GetRange(const CAttrArray<Vector>* );
		/* ../public/meshutils/mesh.h:287 */
		bool operator bool(const CAttrArray<Vector>* );
		/* ../public/meshutils/mesh.h:288 */
		CSingleVertexFieldAccessor<Vector> operator[](CAttrArray<Vector>* , int);
		/* ../public/meshutils/mesh.h:289 */
		CSingleVertexFieldAccessor<const Vector> operator[](const CAttrArray<Vector>* , int);
		/* ../public/meshutils/mesh.h:291 */
		int GetElementCount(const CAttrArray<Vector>* );
		/* ../public/meshutils/mesh.h:292 */
		int GetAttrCount(const CAttrArray<Vector>* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/mesh.h:377 */
	CAttrArray<Vector> GetPositionArray(CMesh* );
	/* ../public/meshutils/mesh.h:378 */
	CAttrArray<Vector> GetNormalArray(CMesh* );
	/* ../public/meshutils/mesh.h:239 */
	class CAttrArray<Vector2D> {
	protected:
		float * m_pBase; /* 0 8 */
		int m_nStride; /* 8 4 */
		int m_nElementCount; /* 12 4 */
		int m_nAttrCount; /* 16 4 */
		/* ../public/meshutils/mesh.h:250 */
		void CAttrArray(CAttrArray<Vector2D>* , float* , int, int, int);
		struct Range_t {
		};
		/* ../public/meshutils/mesh.h:271 */
		Range_t GetRange(const CAttrArray<Vector2D>* );
		/* ../public/meshutils/mesh.h:287 */
		bool operator bool(const CAttrArray<Vector2D>* );
		/* ../public/meshutils/mesh.h:288 */
		CSingleVertexFieldAccessor<Vector2D> operator[](CAttrArray<Vector2D>* , int);
		/* ../public/meshutils/mesh.h:289 */
		CSingleVertexFieldAccessor<const Vector2D> operator[](const CAttrArray<Vector2D>* , int);
		/* ../public/meshutils/mesh.h:291 */
		int GetElementCount(const CAttrArray<Vector2D>* );
		/* ../public/meshutils/mesh.h:292 */
		int GetAttrCount(const CAttrArray<Vector2D>* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/mesh.h:379 */
	CAttrArray<Vector2D> GetTexcoordArray(CMesh* , int);
	/* ../public/meshutils/mesh.h:380 */
	CAttrArray<Vector> GetTangentArray(CMesh* );
	/* ../public/meshutils/mesh.h:239 */
	class CAttrArray<Vector4D> {
	protected:
		float * m_pBase; /* 0 8 */
		int m_nStride; /* 8 4 */
		int m_nElementCount; /* 12 4 */
		int m_nAttrCount; /* 16 4 */
		/* ../public/meshutils/mesh.h:250 */
		void CAttrArray(CAttrArray<Vector4D>* , float* , int, int, int);
		struct Range_t {
		};
		/* ../public/meshutils/mesh.h:271 */
		Range_t GetRange(const CAttrArray<Vector4D>* );
		/* ../public/meshutils/mesh.h:287 */
		bool operator bool(const CAttrArray<Vector4D>* );
		/* ../public/meshutils/mesh.h:288 */
		CSingleVertexFieldAccessor<Vector4D> operator[](CAttrArray<Vector4D>* , int);
		/* ../public/meshutils/mesh.h:289 */
		CSingleVertexFieldAccessor<const Vector4D> operator[](const CAttrArray<Vector4D>* , int);
		/* ../public/meshutils/mesh.h:291 */
		int GetElementCount(const CAttrArray<Vector4D>* );
		/* ../public/meshutils/mesh.h:292 */
		int GetAttrCount(const CAttrArray<Vector4D>* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/mesh.h:381 */
	CAttrArray<Vector4D> GetTangentWithSignArray(CMesh* );
	/* ../public/meshutils/mesh.h:383 */
	int GetNormalAttributeIndex(const CMesh* , int);
	/* ../public/meshutils/mesh.h:384 */
	int GetBlendWeightCount(const CMesh* );
	/* ../public/meshutils/mesh.h:385 */
	void RemapBlendIndices(CMesh* , const int* , int, int);
	/* ../public/meshutils/mesh.h:386 */
	float GetVertexJointWeight(CMesh* , const SkinningDataFields_t& , int, int);
	/* ../public/meshutils/mesh.h:387 */
	float GetVertexJointSumWeight(CMesh* , const SkinningDataFields_t& , int, const CVarBitVec& );
	/* ../public/meshutils/mesh.h:389 */
	bool GetBoneInfluenceStats(CMesh* , CUtlVector<float, CUtlMemory<float, int> >& , CUtlVector<int, CUtlMemory<int, int> >& , float);
	/* ../public/meshutils/mesh.h:391 */
	void WriteMeshWireframeToGlViewBuffer(const CMesh* , CGlViewBuffer* , float, float, float);
	/* ../public/meshutils/mesh.h:392 */
	void GetDeltaNames(CMesh* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* ../public/meshutils/mesh.h:394 */
	float ComputeVolume(const CMesh* );
	/* ../public/meshutils/mesh.h:395 */
	int GetMostlyAttachedBone(const CMesh* );
	/* ../public/meshutils/mesh.h:396 */
	AABB_t GetBounds(const CMesh* );
	/* ../public/meshutils/mesh.h:398 */
	int BuildIslandMap(const CMesh* , CUtlVector<int, CUtlMemory<int, int> >& );
	/* ../public/meshutils/mesh.h:399 */
	int BuildIslandMap(const CMesh* , CUtlVector<int, CUtlMemory<int, int> >& , CAttrArray<int>);
	/* ../public/meshutils/mesh.h:401 */
	Range_t GetSupportRange(const CMesh* , const Vector& );
	/* ../public/meshutils/mesh.h:404 */
	void SaveObj(const CMesh* , IFileSystem* , const char* , ...);
	/* ../public/meshutils/mesh.h:405 */
	void SaveObj(const CMesh* , const CMeshDisjointSetPartition& , int, IFileSystem* , const char* , ...);
	/* ../public/meshutils/mesh.h:407 */
	void Validate(CMesh* );
	/* ../public/meshutils/mesh.h:408 */
	bool SupportsLOD(CMesh* );
	/* ../public/meshutils/mesh.h:409 */
	bool IsLowLOD(CMesh* );
	/* ../public/meshutils/mesh.h:410 */
	void SetTintColor(CMesh* , const Vector4D& );
	/* ../public/meshutils/mesh.h:412 */
	void SetContextPtr(CMesh* , const void* );
	/* ../public/meshutils/mesh.h:413 */
	const void* GetContextPtr(const CMesh* );
	float * m_pVerts; /* 0 8 */
	CMeshVertexAttribute * m_pAttributes; /* 8 8 */
	uint32 * m_pIndices; /* 16 8 */
	int m_nVertexCount; /* 24 4 */
	int m_nVertexStrideFloats; /* 28 4 */
	int m_nAttributeCount; /* 32 4 */
	int m_nIndexCount; /* 36 4 */
	CUtlVector<float, CUtlMemory<float, int> > m_lodGroupSwitchDistances; /* 40 32 */
	uint8 m_nLODGroupMask; /* 72 1 */
	CPathBufferString m_materialName; /* 80 208 */
	CDmeMesh * m_pSourceDmeMesh; /* 288 8 */
	int32 m_nMeshID; /* 296 4 */
	bool m_bNoCollapse; /* 300 1 */
	bool m_bPackToSharedVB; /* 301 1 */
	bool m_bUseBaseVertex; /* 302 1 */
	bool m_bUseTintColor; /* 303 1 */
	Vector4D m_vTintColor; /* 304 16 */
	int8 m_nCollisionType; /* 320 1 */
	KeyValues m_KeyValues; /* 321 20 */
	float m_flLightMapScaleBias; /* 344 4 */
	const void * m_pContextPtr; /* 352 8 */
private:
	/* ../public/meshutils/mesh.h:442 */
	void CMesh(CMesh* , const CMesh& );
	/* ../public/meshutils/mesh.h:443 */
	CMesh& operator=(CMesh* , const CMesh& );
	/* ../public/meshutils/mesh.h:445 */
	void RestrideVertexBuffer(CMesh* , int);
	bool m_bAllocatedMeshData; /* 360 1 */
	/* ../public/meshutils/mesh.h:216 */
	class CSingleVertexFieldAccessor<int> {
		/* ../public/meshutils/mesh.h:219 */
		void CSingleVertexFieldAccessor(CSingleVertexFieldAccessor<int>* , int* , int);
	protected:
		int * m_pBase; /* 0 8 */
		int m_nCount; /* 8 4 */
		/* ../public/meshutils/mesh.h:224 */
		int& operator[](CSingleVertexFieldAccessor<int>* , int);
		/* ../public/meshutils/mesh.h:225 */
		const int& operator[](const CSingleVertexFieldAccessor<int>* , int);
		/* ../public/meshutils/mesh.h:226 */
		int& operator*(CSingleVertexFieldAccessor<int>* );
		/* ../public/meshutils/mesh.h:227 */
		const int& operator*(const CSingleVertexFieldAccessor<int>* );
		/* ../public/meshutils/mesh.h:228 */
		int& Tail(CSingleVertexFieldAccessor<int>* );
		/* ../public/meshutils/mesh.h:229 */
		const int& Tail(const CSingleVertexFieldAccessor<int>* );
		/* ../public/meshutils/mesh.h:231 */
		int Count(const CSingleVertexFieldAccessor<int>* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/mesh.h:216 */
	class CSingleVertexFieldAccessor<int const> {
		/* ../public/meshutils/mesh.h:219 */
		void CSingleVertexFieldAccessor(CSingleVertexFieldAccessor<int const>* , const int* , int);
	protected:
		const int * m_pBase; /* 0 8 */
		int m_nCount; /* 8 4 */
		/* ../public/meshutils/mesh.h:224 */
		const int& operator[](CSingleVertexFieldAccessor<int const>* , int);
		/* ../public/meshutils/mesh.h:225 */
		const int& operator[](const CSingleVertexFieldAccessor<int const>* , int);
		/* ../public/meshutils/mesh.h:226 */
		const int& operator*(CSingleVertexFieldAccessor<int const>* );
		/* ../public/meshutils/mesh.h:227 */
		const int& operator*(const CSingleVertexFieldAccessor<int const>* );
		/* ../public/meshutils/mesh.h:228 */
		const int& Tail(CSingleVertexFieldAccessor<int const>* );
		/* ../public/meshutils/mesh.h:229 */
		const int& Tail(const CSingleVertexFieldAccessor<int const>* );
		/* ../public/meshutils/mesh.h:231 */
		int Count(const CSingleVertexFieldAccessor<int const>* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/mesh.h:216 */
	class CSingleVertexFieldAccessor<float> {
		/* ../public/meshutils/mesh.h:219 */
		void CSingleVertexFieldAccessor(CSingleVertexFieldAccessor<float>* , float* , int);
	protected:
		float * m_pBase; /* 0 8 */
		int m_nCount; /* 8 4 */
		/* ../public/meshutils/mesh.h:224 */
		float& operator[](CSingleVertexFieldAccessor<float>* , int);
		/* ../public/meshutils/mesh.h:225 */
		const float& operator[](const CSingleVertexFieldAccessor<float>* , int);
		/* ../public/meshutils/mesh.h:226 */
		float& operator*(CSingleVertexFieldAccessor<float>* );
		/* ../public/meshutils/mesh.h:227 */
		const float& operator*(const CSingleVertexFieldAccessor<float>* );
		/* ../public/meshutils/mesh.h:228 */
		float& Tail(CSingleVertexFieldAccessor<float>* );
		/* ../public/meshutils/mesh.h:229 */
		const float& Tail(const CSingleVertexFieldAccessor<float>* );
		/* ../public/meshutils/mesh.h:231 */
		int Count(const CSingleVertexFieldAccessor<float>* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	class CSingleVertexFieldAccessor<float const> {
	};
	class CSingleVertexFieldAccessor<Vector> {
	};
	class CSingleVertexFieldAccessor<const Vector> {
	};
	class CSingleVertexFieldAccessor<Vector2D> {
	};
	class CSingleVertexFieldAccessor<const Vector2D> {
	};
	class CSingleVertexFieldAccessor<Vector4D> {
	};
	class CSingleVertexFieldAccessor<const Vector4D> {
	};
	/* ../public/meshutils/mesh.h:356 */
	CAttrArray<float> GetAttrArray<float>(CMesh* , CMeshVertexAttribute* );
	/* ../public/meshutils/mesh.h:356 */
	CAttrArray<int> GetAttrArray<int>(CMesh* , CMeshVertexAttribute* );
	/* ../public/meshutils/mesh.h:363 */
	CAttrArray<float> FindAttrArray<float>(CMesh* , const char* , int);
	/* ../public/meshutils/mesh.h:363 */
	CAttrArray<int> FindAttrArray<int>(CMesh* , const char* , int);
	void CMesh(class CMesh *); /* linkage=_ZN5CMeshC4Ev */
	void ~CMesh(class CMesh *); /* linkage=_ZN5CMeshD4Ev */
	void AllocateMesh(class CMesh *, int, int, int, class CMeshVertexAttribute *, int); /* linkage=_ZN5CMesh12AllocateMeshEiiiP20CMeshVertexAttributei */
	void AllocateAndCopyMesh(class CMesh *, int, const float  *, int, int, const uint32  *, int, class CMeshVertexAttribute *, int); /* linkage=_ZN5CMesh19AllocateAndCopyMeshEiPKfiiPKjiP20CMeshVertexAttributei */
	void AllocateAndCopyMesh(class CMesh *, const class CMesh  &); /* linkage=_ZN5CMesh19AllocateAndCopyMeshERKS_ */
	void FreeAllMemory(class CMesh *); /* linkage=_ZN5CMesh13FreeAllMemoryEv */
	void InitExternalMesh(class CMesh *, float *, int, uint32 *, int, int, class CMeshVertexAttribute *, int); /* linkage=_ZN5CMesh16InitExternalMeshEPfiPjiiP20CMeshVertexAttributei */
	void AppendMesh(class CMesh *, const class CMesh  &); /* linkage=_ZN5CMesh10AppendMeshERKS_ */
	int TriangleCount(const class CMesh  *); /* linkage=_ZNK5CMesh13TriangleCountEv */
	int IndexCount(const class CMesh  *); /* linkage=_ZNK5CMesh10IndexCountEv */
	int VertexCount(const class CMesh  *); /* linkage=_ZNK5CMesh11VertexCountEv */
	float * GetVertex(class CMesh *, int); /* linkage=_ZN5CMesh9GetVertexEi */
	const float  * GetVertex(const class CMesh  *, int); /* linkage=_ZNK5CMesh9GetVertexEi */
	const class Vector  & GetVertexPosition(const class CMesh  *, int); /* linkage=_ZNK5CMesh17GetVertexPositionEi */
	void SetVertexPosition(class CMesh *, int, const class Vector  &); /* linkage=_ZN5CMesh17SetVertexPositionEiRK6Vector */
	uint32 GetVertexSizeInBytes(const class CMesh  *); /* linkage=_ZNK5CMesh20GetVertexSizeInBytesEv */
	uint32 GetTotalVertexSizeInBytes(const class CMesh  *); /* linkage=_ZNK5CMesh25GetTotalVertexSizeInBytesEv */
	uint32 GetTotalIndexSizeInBytes(const class CMesh  *); /* linkage=_ZNK5CMesh24GetTotalIndexSizeInBytesEv */
	bool CalculateBounds(const class CMesh  *, class Vector *, class Vector *, int, int); /* linkage=_ZNK5CMesh15CalculateBoundsEP6VectorS1_ii */
	bool CalculateBoundsForIndexRange(const class CMesh  *, class Vector *, class Vector *, int, int); /* linkage=_ZNK5CMesh28CalculateBoundsForIndexRangeEP6VectorS1_ii */
	bool CalculateAdjacency(const class CMesh  *, int *, int); /* linkage=_ZNK5CMesh18CalculateAdjacencyEPii */
	bool CalculateIndicentFacesForVertices(const class CMesh  *, class CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsigned int, int); /* linkage=_ZNK5CMesh33CalculateIndicentFacesForVerticesEP14CUtlLinkedListIitLb0Et10CUtlMemoryI19UtlLinkedListElem_tIitEtEEi */
	/* <5ae599e> meshutils/formats.cpp:144 */
	bool CalculateInputLayoutFromAttributes(const class CMesh  *, class RenderInputLayoutField_t *, int *); /* linkage=_ZNK5CMesh34CalculateInputLayoutFromAttributesEP24RenderInputLayoutField_tPi */
	void CreateSimpleUnpackedVBAndIBForMesh(const class CMesh  *, VertexBufferHandle_t *, IndexBufferHandle_t *, bool); /* linkage=_ZNK5CMesh34CreateSimpleUnpackedVBAndIBForMeshEPP22VertexBufferHandle_t__PP21IndexBufferHandle_t__b */
	float CalculateAvgUvDensityForIndexRange(const class CMesh  *, int, int, int); /* linkage=_ZNK5CMesh34CalculateAvgUvDensityForIndexRangeEiii */
	int CreatePackedInputLayout(const class CMesh  *, class PackedInputLayoutInfo_t *, class CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> > &, InputLayoutToAttributeMap &, const class ShaderInputSignatureDesc_t  *, bool); /* linkage=_ZNK5CMesh23CreatePackedInputLayoutEP23PackedInputLayoutInfo_tR10CUtlVectorI24RenderInputLayoutField_t10CUtlMemoryIS3_iEERS2_IiS4_IiiEEPK26ShaderInputSignatureDesc_tb */
	int CreatePackedInputLayout(class CDmeVertexData *, class PackedInputLayoutInfo_t *, class CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> > &, InputLayoutToAttributeMap &, const class ShaderInputSignatureDesc_t  *, bool); /* linkage=_ZN5CMesh23CreatePackedInputLayoutEP14CDmeVertexDataP23PackedInputLayoutInfo_tR10CUtlVectorI24RenderInputLayoutField_t10CUtlMemoryIS5_iEERS4_IiS6_IiiEEPK26ShaderInputSignatureDesc_tb */
	class CMeshVertexAttribute * FindFirstAttribute(class CMesh *, const char  *, int); /* linkage=_ZN5CMesh18FindFirstAttributeEPKci */
	class CMeshVertexAttribute * FindNthAttribute(class CMesh *, const char  *, int, int); /* linkage=_ZN5CMesh16FindNthAttributeEPKcii */
	const class CMeshVertexAttribute  * FindBaseAttributeForDelta(const class CMesh  *, const class CMeshVertexAttribute  *); /* linkage=_ZNK5CMesh25FindBaseAttributeForDeltaEPK20CMeshVertexAttribute */
	/* <5be5d8a> meshutils/mesh.cpp:575 */
	int FindFirstAttributeOffset(const class CMesh  *, const char  *, int); /* linkage=_ZNK5CMesh24FindFirstAttributeOffsetEPKci */
	class CUtlVector<int, CUtlMemory<int, int> > FindAllAttributeOffsets(const class CMesh  *, const char  *, int); /* linkage=_ZNK5CMesh23FindAllAttributeOffsetsEPKci */
	int FindFirstDeltaAttributeOffset(const class CMesh  *, const char  *, const char  *, int); /* linkage=_ZNK5CMesh29FindFirstDeltaAttributeOffsetEPKcS1_i */
	int FindExactAttributeOffset(const class CMesh  *, const char  *, int); /* linkage=_ZNK5CMesh24FindExactAttributeOffsetEPKci */
	void AddAttributes(class CMesh *, class CMeshVertexAttribute *, int); /* linkage=_ZN5CMesh13AddAttributesEP20CMeshVertexAttributei */
	void AddAttribute(class CMesh *, const char  *, int, int); /* linkage=_ZN5CMesh12AddAttributeEPKcii */
	void AddExtraVertexStreamsFromMesh(class CMesh *, const class CMesh  &, const int  *); /* linkage=_ZN5CMesh29AddExtraVertexStreamsFromMeshERKS_PKi */
	void CalculateTangents(class CMesh *); /* linkage=_ZN5CMesh17CalculateTangentsEv */
	void CalculateSmoothNormals(class CMesh *); /* linkage=_ZN5CMesh22CalculateSmoothNormalsEv */
	void CalculateCurvature(class CMesh *); /* linkage=_ZN5CMesh18CalculateCurvatureEv */
	void CalculateWorldSpaceTextureCoordinateProjection(class CMesh *); /* linkage=_ZN5CMesh46CalculateWorldSpaceTextureCoordinateProjectionEv */
	void FindFacesWithMultipleWorldSpaceTextureProjections(const class CMesh  *, class CUtlVector<int, CUtlMemory<int, int> > *, class CUtlVector<int, CUtlMemory<int, int> > *); /* linkage=_ZNK5CMesh49FindFacesWithMultipleWorldSpaceTextureProjectionsEP10CUtlVectorIi10CUtlMemoryIiiEES4_ */
	void ScalePositions(class CMesh *, float, float, float); /* linkage=_ZN5CMesh14ScalePositionsEfff */
	/* <5be5ea2> meshutils/mesh.cpp:1613 */
	bool RemoveFirstAttribute(class CMesh *, const char  *, int); /* linkage=_ZN5CMesh20RemoveFirstAttributeEPKci */
	bool RemoveAttribute(class CMesh *, class CMeshVertexAttribute *); /* linkage=_ZN5CMesh15RemoveAttributeEP20CMeshVertexAttribute */
	/* <5be5e11> meshutils/mesh.cpp:1620 */
	bool RemoveAttribute(class CMesh *, int); /* linkage=_ZN5CMesh15RemoveAttributeEi */
	bool RemoveAttributes(class CMesh *, const class SkinningDataFields_t  &); /* linkage=_ZN5CMesh16RemoveAttributesERKNS_20SkinningDataFields_tE */
	void RemoveTangents(class CMesh *); /* linkage=_ZN5CMesh14RemoveTangentsEv */
	void RemoveColors(class CMesh *); /* linkage=_ZN5CMesh12RemoveColorsEv */
	void RemoveUnusedVertices(class CMesh *); /* linkage=_ZN5CMesh20RemoveUnusedVerticesEv */
	void SkinToBoneIfNotSkinned(class CMesh *, int); /* linkage=_ZN5CMesh22SkinToBoneIfNotSkinnedEi */
	void SetBlendWeightAndIndexCount(class CMesh *, int, bool); /* linkage=_ZN5CMesh27SetBlendWeightAndIndexCountEib */
	bool NormalizeSkinWeights(class CMesh *); /* linkage=_ZN5CMesh20NormalizeSkinWeightsEv */
	void SortSkinWeights(class CMesh *, bool); /* linkage=_ZN5CMesh15SortSkinWeightsEb */
	bool CalculateTangentSpaceWorldLengthsPerFace(class CMesh *, class Vector2D *, int, float); /* linkage=_ZN5CMesh40CalculateTangentSpaceWorldLengthsPerFaceEP8Vector2Dif */
	bool CalculateFaceCenters(class CMesh *, class Vector *, int); /* linkage=_ZN5CMesh20CalculateFaceCentersEP6Vectori */
	void ReverseTriangleWinding(class CMesh *); /* linkage=_ZN5CMesh22ReverseTriangleWindingEv */
	void SplitLongEdges(class CMesh *, float); /* linkage=_ZN5CMesh14SplitLongEdgesEf */
	bool IsConvex(class CMesh *, float); /* linkage=_ZN5CMesh8IsConvexEf */
	int CreatePackedVB(class CMesh *, void *, const class CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >  &, const InputLayoutToAttributeMap  &, int, bool, bool); /* linkage=_ZN5CMesh14CreatePackedVBEPvRK10CUtlVectorI24RenderInputLayoutField_t10CUtlMemoryIS2_iEERKS1_IiS3_IiiEEibb */
	bool HasSkinningData(const class CMesh  *); /* linkage=_ZNK5CMesh15HasSkinningDataEv */
	bool HasDeltaData(const class CMesh  *, const char  *); /* linkage=_ZNK5CMesh12HasDeltaDataEPKc */
	bool GetUsedJoints(class CMesh *, class CVarBitVec &); /* linkage=_ZN5CMesh13GetUsedJointsER10CVarBitVec */
	class SkinningDataFields_t GetSkinningDataFields(const class CMesh  *); /* linkage=_ZNK5CMesh21GetSkinningDataFieldsEv */
	class CAttrArray<int> GetSkinIndexArray(class CMesh *); /* linkage=_ZN5CMesh17GetSkinIndexArrayEv */
	class CAttrArray<float> GetSkinWeightArray(class CMesh *); /* linkage=_ZN5CMesh18GetSkinWeightArrayEv */
	class CAttrArray<Vector> GetPositionArray(class CMesh *); /* linkage=_ZN5CMesh16GetPositionArrayEv */
	class CAttrArray<Vector> GetNormalArray(class CMesh *); /* linkage=_ZN5CMesh14GetNormalArrayEv */
	class CAttrArray<Vector2D> GetTexcoordArray(class CMesh *, int); /* linkage=_ZN5CMesh16GetTexcoordArrayEi */
	class CAttrArray<Vector> GetTangentArray(class CMesh *); /* linkage=_ZN5CMesh15GetTangentArrayEv */
	class CAttrArray<Vector4D> GetTangentWithSignArray(class CMesh *); /* linkage=_ZN5CMesh23GetTangentWithSignArrayEv */
	int GetNormalAttributeIndex(const class CMesh  *, int); /* linkage=_ZNK5CMesh23GetNormalAttributeIndexEi */
	int GetBlendWeightCount(const class CMesh  *); /* linkage=_ZNK5CMesh19GetBlendWeightCountEv */
	void RemapBlendIndices(class CMesh *, const int  *, int, int); /* linkage=_ZN5CMesh17RemapBlendIndicesEPKiii */
	float GetVertexJointWeight(class CMesh *, const class SkinningDataFields_t  &, int, int); /* linkage=_ZN5CMesh20GetVertexJointWeightERKNS_20SkinningDataFields_tEii */
	float GetVertexJointSumWeight(class CMesh *, const class SkinningDataFields_t  &, int, const class CVarBitVec  &); /* linkage=_ZN5CMesh23GetVertexJointSumWeightERKNS_20SkinningDataFields_tEiRK10CVarBitVec */
	bool GetBoneInfluenceStats(class CMesh *, class CUtlVector<float, CUtlMemory<float, int> > &, class CUtlVector<int, CUtlMemory<int, int> > &, float); /* linkage=_ZN5CMesh21GetBoneInfluenceStatsER10CUtlVectorIf10CUtlMemoryIfiEERS0_IiS1_IiiEEf */
	void WriteMeshWireframeToGlViewBuffer(const class CMesh  *, class CGlViewBuffer *, float, float, float); /* linkage=_ZNK5CMesh32WriteMeshWireframeToGlViewBufferEP13CGlViewBufferfff */
	void GetDeltaNames(class CMesh *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN5CMesh13GetDeltaNamesER10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEE */
	float ComputeVolume(const class CMesh  *); /* linkage=_ZNK5CMesh13ComputeVolumeEv */
	int GetMostlyAttachedBone(const class CMesh  *); /* linkage=_ZNK5CMesh21GetMostlyAttachedBoneEv */
	class AABB_t GetBounds(const class CMesh  *); /* linkage=_ZNK5CMesh9GetBoundsEv */
	int BuildIslandMap(const class CMesh  *, class CUtlVector<int, CUtlMemory<int, int> > &); /* linkage=_ZNK5CMesh14BuildIslandMapER10CUtlVectorIi10CUtlMemoryIiiEE */
	int BuildIslandMap(const class CMesh  *, class CUtlVector<int, CUtlMemory<int, int> > &, class CAttrArray<int>); /* linkage=_ZNK5CMesh14BuildIslandMapER10CUtlVectorIi10CUtlMemoryIiiEENS_10CAttrArrayIiEE */
	class Range_t GetSupportRange(const class CMesh  *, const class Vector  &); /* linkage=_ZNK5CMesh15GetSupportRangeERK6Vector */
	void SaveObj(const class CMesh  *, class IFileSystem *, const char  *, ...); /* linkage=_ZNK5CMesh7SaveObjEP11IFileSystemPKcz */
	void SaveObj(const class CMesh  *, const class CMeshDisjointSetPartition  &, int, class IFileSystem *, const char  *, ...); /* linkage=_ZNK5CMesh7SaveObjERK25CMeshDisjointSetPartitioniP11IFileSystemPKcz */
	void Validate(class CMesh *); /* linkage=_ZN5CMesh8ValidateEv */
	bool SupportsLOD(class CMesh *); /* linkage=_ZN5CMesh11SupportsLODEv */
	bool IsLowLOD(class CMesh *); /* linkage=_ZN5CMesh8IsLowLODEv */
	void SetTintColor(class CMesh *, const class Vector4D  &); /* linkage=_ZN5CMesh12SetTintColorERK8Vector4D */
	/* <5be5f37> meshutils/mesh.cpp:1956 */
	void SetContextPtr(class CMesh *, const void  *); /* linkage=_ZN5CMesh13SetContextPtrEPKv */
	/* <5be5f6a> meshutils/mesh.cpp:1961 */
	const void  * GetContextPtr(const class CMesh  *); /* linkage=_ZNK5CMesh13GetContextPtrEv */
	void CMesh(class CMesh *, const class CMesh  &); /* linkage=_ZN5CMeshC4ERKS_ */
	class CMesh & operator=(class CMesh *, const class CMesh  &); /* linkage=_ZN5CMeshaSERKS_ */
	void RestrideVertexBuffer(class CMesh *, int); /* linkage=_ZN5CMesh20RestrideVertexBufferEi */
	class CAttrArray<float> GetAttrArray<float>(class CMesh *, class CMeshVertexAttribute *); /* linkage=_ZN5CMesh12GetAttrArrayIfEENS_10CAttrArrayIT_EEP20CMeshVertexAttribute */
	class CAttrArray<int> GetAttrArray<int>(class CMesh *, class CMeshVertexAttribute *); /* linkage=_ZN5CMesh12GetAttrArrayIiEENS_10CAttrArrayIT_EEP20CMeshVertexAttribute */
	class CAttrArray<float> FindAttrArray<float>(class CMesh *, const char  *, int); /* linkage=_ZN5CMesh13FindAttrArrayIfEENS_10CAttrArrayIT_EEPKci */
	class CAttrArray<int> FindAttrArray<int>(class CMesh *, const char  *, int); /* linkage=_ZN5CMesh13FindAttrArrayIiEENS_10CAttrArrayIT_EEPKci */
};

// <05DB4626> ../public/meshutils/mesh.h:147
void CMesh::CMesh()
{
} /* size: 0 */

// <05DB45D6> ../public/meshutils/mesh.h:148
void CMesh::~CMesh()
{
} /* size: 0 */

// <06468764> ../public/meshutils/mesh.h:165
inline void CMesh::TriangleCount()
{
} /* size: 0 */

// <05DFE847> ../public/meshutils/mesh.h:173
inline void CMesh::VertexCount()
{
} /* size: 0 */

// <0646873F> ../public/meshutils/mesh.h:181
inline void CMesh::GetVertex(int nIndex)
{
} /* size: 0 */

// <0646871A> ../public/meshutils/mesh.h:185
inline void CMesh::GetVertexPosition(int nIndex)
{
} /* size: 0 */

// <05DFE7A9> ../public/meshutils/mesh.h:189
inline void CMesh::SetVertexPosition(int nIndex, const Vector& v)
{
} /* size: 0 */

// <0615B52E> ../public/meshutils/mesh.h:194
inline void CMesh::GetVertexSizeInBytes()
{
} /* size: 0 */

// <0615B515> ../public/meshutils/mesh.h:198
inline void CMesh::GetTotalVertexSizeInBytes()
{
} /* size: 0 */

// <05BE1BED> ../public/meshutils/mesh.h:202
inline void CMesh::GetTotalIndexSizeInBytes()
{
} /* size: 0 */

// <05BE1BD6> ../public/meshutils/mesh.h:209
void SkinningDataFields_t::SkinningDataFields_t()
{
} /* size: 0 */

// <05BE1BBD> ../public/meshutils/mesh.h:209
inline void SkinningDataFields_t::SkinningDataFields_t()
{
} /* size: 0 */

// <05BE1BA4> ../public/meshutils/mesh.h:210
inline void SkinningDataFields_t::HasSkinningData()
{
} /* size: 0 */

// <05BB537E> ../public/meshutils/mesh.h:219
void CSingleVertexFieldAccessor<int>::CSingleVertexFieldAccessor(int* pBase, int nCount)
{
} /* size: 0 */

// <05BB534D> ../public/meshutils/mesh.h:219
inline void CSingleVertexFieldAccessor<int>::CSingleVertexFieldAccessor(int* pBase, int nCount)
{
} /* size: 0 */

// <05BB532C> ../public/meshutils/mesh.h:219
void CSingleVertexFieldAccessor<float>::CSingleVertexFieldAccessor(float* pBase, int nCount)
{
} /* size: 0 */

// <05BB52FB> ../public/meshutils/mesh.h:219
inline void CSingleVertexFieldAccessor<float>::CSingleVertexFieldAccessor(float* pBase, int nCount)
{
} /* size: 0 */

// <05BB14C3> ../public/meshutils/mesh.h:219
void CSingleVertexFieldAccessor<int const>::CSingleVertexFieldAccessor(const int* pBase, int nCount)
{
} /* size: 0 */

// <05BB1492> ../public/meshutils/mesh.h:219
inline void CSingleVertexFieldAccessor<int const>::CSingleVertexFieldAccessor(const int* pBase, int nCount)
{
} /* size: 0 */

// <05BB95B6> ../public/meshutils/mesh.h:224
inline void CSingleVertexFieldAccessor<int>::operator[](int i)
{
} /* size: 0 */

// <05BB950A> ../public/meshutils/mesh.h:224
inline void CSingleVertexFieldAccessor<float>::operator[](int i)
{
} /* size: 0 */

// <05BB95D9> ../public/meshutils/mesh.h:231
inline void CSingleVertexFieldAccessor<int>::Count()
{
} /* size: 0 */

// <05BB94F1> ../public/meshutils/mesh.h:231
inline void CSingleVertexFieldAccessor<float>::Count()
{
} /* size: 0 */

// <05BB5C4C> ../public/meshutils/mesh.h:250
void CAttrArray<int>::CAttrArray(float* pBase, int nStride, int nVertexCount, int nAttrCount)
{
} /* size: 0 */

// <05BB5C03> ../public/meshutils/mesh.h:250
inline void CAttrArray<int>::CAttrArray(float* pBase, int nStride, int nVertexCount, int nAttrCount)
{
} /* size: 0 */

// <05BB5BD8> ../public/meshutils/mesh.h:250
void CAttrArray<float>::CAttrArray(float* pBase, int nStride, int nVertexCount, int nAttrCount)
{
} /* size: 0 */

// <05BB5B8F> ../public/meshutils/mesh.h:250
inline void CAttrArray<float>::CAttrArray(float* pBase, int nStride, int nVertexCount, int nAttrCount)
{
} /* size: 0 */

// <05BB94D8> ../public/meshutils/mesh.h:287
inline void operator CAttrArray<float>::bool()
{
} /* size: 0 */

// <05BB94BF> ../public/meshutils/mesh.h:287
inline void operator CAttrArray<int>::bool()
{
} /* size: 0 */

// <05BB95F2> ../public/meshutils/mesh.h:288
inline void CAttrArray<int>::operator[](int nVertex)
{
} /* size: 0 */

// <05BB952D> ../public/meshutils/mesh.h:288
inline void CAttrArray<float>::operator[](int nVertex)
{
} /* size: 0 */

// <05BB94A6> ../public/meshutils/mesh.h:292
inline void CAttrArray<int>::GetAttrCount()
{
} /* size: 0 */

// <05BB948D> ../public/meshutils/mesh.h:292
inline void CAttrArray<float>::GetAttrCount()
{
} /* size: 0 */

// <05BB9618> ../public/meshutils/mesh.h:356
// variables: 3
inline void CMesh::GetAttrArray<int>(CMeshVertexAttribute* pAttr)
{
	const char   __FUNCTION__; // 39428
	int nAttrCount; // 358
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 359
	}
} /* size: 0, variables: 2 */

// <05BB9553> ../public/meshutils/mesh.h:356
// variables: 3
inline void CMesh::GetAttrArray<float>(CMeshVertexAttribute* pAttr)
{
	const char   __FUNCTION__; // 39428
	int nAttrCount; // 358
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 359
	}
} /* size: 0, variables: 2 */

// <02CFAB60> ../public/meshutils/mesh.h:356
// variables: 3
inline void CMesh::GetAttrArray<int>(CMeshVertexAttribute* pAttr)
{
	const char   __FUNCTION__; // 32321
	int nAttrCount; // 358
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 359
	}
} /* size: 0, variables: 2 */

// <02CFAA9B> ../public/meshutils/mesh.h:356
// variables: 3
inline void CMesh::GetAttrArray<float>(CMeshVertexAttribute* pAttr)
{
	const char   __FUNCTION__; // 32321
	int nAttrCount; // 358
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 359
	}
} /* size: 0, variables: 2 */

// <014E4798> ../public/meshutils/mesh.h:356
// variables: 3
inline void CMesh::GetAttrArray<int>(CMeshVertexAttribute* pAttr)
{
	const char   __FUNCTION__; // 22505
	int nAttrCount; // 358
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 359
	}
} /* size: 0, variables: 2 */

// <014E46D3> ../public/meshutils/mesh.h:356
// variables: 3
inline void CMesh::GetAttrArray<float>(CMeshVertexAttribute* pAttr)
{
	const char   __FUNCTION__; // 22505
	int nAttrCount; // 358
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 359
	}
} /* size: 0, variables: 2 */

// <05BBA166> ../public/meshutils/mesh.h:363
// variable: 1
inline void CMesh::FindAttrArray<int>(const char* pFieldName, int iIndex)
{
	{
		CMeshVertexAttribute* pAttr; // 365
	}
} /* size: 0 */

// <05BBA11D> ../public/meshutils/mesh.h:363
// variable: 1
inline void CMesh::FindAttrArray<float>(const char* pFieldName, int iIndex)
{
	{
		CMeshVertexAttribute* pAttr; // 365
	}
} /* size: 0 */

// <05BE1B8B> ../public/meshutils/mesh.h:375
inline void CMesh::GetSkinIndexArray()
{
} /* size: 0 */

// <05BE1B72> ../public/meshutils/mesh.h:376
inline void CMesh::GetSkinWeightArray()
{
} /* size: 0 */

// <02E0EA6A> ../public/meshutils/mesh.h:533
int PackChartsIntoAtlas(AtlasChart_t *, int, bool, int, int, int, int *, int *)
{
} /* size: 0 */

// <05BA83A0> ../public/meshutils/mesh.h:551
void CopyVertex(float *, const float *, int)
{
} /* size: 0 */

// <05BA8345> ../public/meshutils/mesh.h:557
void LerpVertex(float *, const float *, const float *, float, int)
{
} /* size: 0 */

// <05BE1B33> ../public/meshutils/mesh.h:561
// variable: 1
inline uint32 VertHashKey(int nV0, int nV1)
{
	uint32 nHash; // 563
} /* size: 0, variables: 1 */

// <04CA9A71> ../public/meshutils/mesh.h:573
int CreateMaterialSpecificInputLayoutFromPackedInputLayout(RenderInputLayoutField_t *, int, const RenderInputLayoutField_t *, int, const CVsInputSignatureVector *, InputLayoutToAttributeMap *)
{
} /* size: 0 */

// <05BBFD47> ../public/meshutils/mesh.h:578
void ExtraAssociateMaterialInfo_t::ExtraAssociateMaterialInfo_t()
{
} /* size: 0 */

// <05BBFD2A> ../public/meshutils/mesh.h:578
inline void ExtraAssociateMaterialInfo_t::ExtraAssociateMaterialInfo_t()
{
} /* size: 0 */

// <05BBFD13> ../public/meshutils/mesh.h:578
void ExtraAssociateMaterialInfo_t::~ExtraAssociateMaterialInfo_t()
{
} /* size: 0 */

// <05BBFCF6> ../public/meshutils/mesh.h:578
inline void ExtraAssociateMaterialInfo_t::~ExtraAssociateMaterialInfo_t()
{
} /* size: 0 */

// <05B89B3B> ../public/meshutils/mesh.h:578
// member functions: 2
// member variables: 2
// struct size: 40
struct ExtraAssociateMaterialInfo_t {
	VsInputSignature_t m_Sig; /* 0 32 */
	bool m_bLoadedInputSignature; /* 32 1 */
	void ~ExtraAssociateMaterialInfo_t(ExtraAssociateMaterialInfo_t* );
	void ExtraAssociateMaterialInfo_t(ExtraAssociateMaterialInfo_t* );
};

