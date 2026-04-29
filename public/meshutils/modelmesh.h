
//
// public/meshutils/modelmesh.h
//
//	referenced by: libengine2.so
//
//	functions: 78
//	classes: 12
//	structs: 4
//

// <05C637B1> ../public/meshutils/modelmesh.h:57
// member functions: 6
// member variable: 1
// class size: 4
class CModelMeshStreamIndex<CModelMesh::Vertex_t> {
	/* ../public/meshutils/modelmesh.h:60 */
	void CModelMeshStreamIndex(CModelMeshStreamIndex<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmesh.h:61 */
	void CModelMeshStreamIndex(CModelMeshStreamIndex<CModelMesh::Vertex_t>* , int);
	/* ../public/meshutils/modelmesh.h:63 */
	bool IsValid(const CModelMeshStreamIndex<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmesh.h:64 */
	int ToInt(const CModelMeshStreamIndex<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmesh.h:65 */
	bool operator==(const CModelMeshStreamIndex<CModelMesh::Vertex_t>* , const CModelMeshStreamIndex<CModelMesh::Vertex_t>& );
	/* ../public/meshutils/modelmesh.h:66 */
	bool operator!=(const CModelMeshStreamIndex<CModelMesh::Vertex_t>* , const CModelMeshStreamIndex<CModelMesh::Vertex_t>& );
private:
	int m_nIndex; /* 0 4 */
};

// <05C638C7> ../public/meshutils/modelmesh.h:57
// member functions: 6
// member variable: 1
// class size: 4
class CModelMeshStreamIndex<CModelMesh::FaceVertex_t> {
	/* ../public/meshutils/modelmesh.h:60 */
	void CModelMeshStreamIndex(CModelMeshStreamIndex<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmesh.h:61 */
	void CModelMeshStreamIndex(CModelMeshStreamIndex<CModelMesh::FaceVertex_t>* , int);
	/* ../public/meshutils/modelmesh.h:63 */
	bool IsValid(const CModelMeshStreamIndex<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmesh.h:64 */
	int ToInt(const CModelMeshStreamIndex<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmesh.h:65 */
	bool operator==(const CModelMeshStreamIndex<CModelMesh::FaceVertex_t>* , const CModelMeshStreamIndex<CModelMesh::FaceVertex_t>& );
	/* ../public/meshutils/modelmesh.h:66 */
	bool operator!=(const CModelMeshStreamIndex<CModelMesh::FaceVertex_t>* , const CModelMeshStreamIndex<CModelMesh::FaceVertex_t>& );
private:
	int m_nIndex; /* 0 4 */
};

// <05C639D3> ../public/meshutils/modelmesh.h:57
// member functions: 6
// member variable: 1
// class size: 4
class CModelMeshStreamIndex<CModelMesh::Edge_t> {
	/* ../public/meshutils/modelmesh.h:60 */
	void CModelMeshStreamIndex(CModelMeshStreamIndex<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmesh.h:61 */
	void CModelMeshStreamIndex(CModelMeshStreamIndex<CModelMesh::Edge_t>* , int);
	/* ../public/meshutils/modelmesh.h:63 */
	bool IsValid(const CModelMeshStreamIndex<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmesh.h:64 */
	int ToInt(const CModelMeshStreamIndex<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmesh.h:65 */
	bool operator==(const CModelMeshStreamIndex<CModelMesh::Edge_t>* , const CModelMeshStreamIndex<CModelMesh::Edge_t>& );
	/* ../public/meshutils/modelmesh.h:66 */
	bool operator!=(const CModelMeshStreamIndex<CModelMesh::Edge_t>* , const CModelMeshStreamIndex<CModelMesh::Edge_t>& );
private:
	int m_nIndex; /* 0 4 */
};

// <05C63ADF> ../public/meshutils/modelmesh.h:57
// member functions: 6
// member variable: 1
// class size: 4
class CModelMeshStreamIndex<CModelMesh::Face_t> {
	/* ../public/meshutils/modelmesh.h:60 */
	void CModelMeshStreamIndex(CModelMeshStreamIndex<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmesh.h:61 */
	void CModelMeshStreamIndex(CModelMeshStreamIndex<CModelMesh::Face_t>* , int);
	/* ../public/meshutils/modelmesh.h:63 */
	bool IsValid(const CModelMeshStreamIndex<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmesh.h:64 */
	int ToInt(const CModelMeshStreamIndex<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmesh.h:65 */
	bool operator==(const CModelMeshStreamIndex<CModelMesh::Face_t>* , const CModelMeshStreamIndex<CModelMesh::Face_t>& );
	/* ../public/meshutils/modelmesh.h:66 */
	bool operator!=(const CModelMeshStreamIndex<CModelMesh::Face_t>* , const CModelMeshStreamIndex<CModelMesh::Face_t>& );
private:
	int m_nIndex; /* 0 4 */
};

// <061D34A3> ../public/meshutils/modelmesh.h:60
void CModelMeshStreamIndex<CModelMesh::Vertex_t>::CModelMeshStreamIndex()
{
} /* size: 0 */

// <061D348A> ../public/meshutils/modelmesh.h:60
inline void CModelMeshStreamIndex<CModelMesh::Vertex_t>::CModelMeshStreamIndex()
{
} /* size: 0 */

// <061D3473> ../public/meshutils/modelmesh.h:60
void CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex()
{
} /* size: 0 */

// <061D345A> ../public/meshutils/modelmesh.h:60
inline void CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex()
{
} /* size: 0 */

// <061D2F29> ../public/meshutils/modelmesh.h:61
void CModelMeshStreamIndex<CModelMesh::Vertex_t>::CModelMeshStreamIndex(int nIndex)
{
} /* size: 0 */

// <061D2F04> ../public/meshutils/modelmesh.h:61
inline void CModelMeshStreamIndex<CModelMesh::Vertex_t>::CModelMeshStreamIndex(int nIndex)
{
} /* size: 0 */

// <061D2EE8> ../public/meshutils/modelmesh.h:61
void CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex(int nIndex)
{
} /* size: 0 */

// <061D2EC3> ../public/meshutils/modelmesh.h:61
inline void CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex(int nIndex)
{
} /* size: 0 */

// <05F7C3F3> ../public/meshutils/modelmesh.h:61
void CModelMeshStreamIndex<CModelMesh::Edge_t>::CModelMeshStreamIndex(int nIndex)
{
} /* size: 0 */

// <05F7C3CE> ../public/meshutils/modelmesh.h:61
inline void CModelMeshStreamIndex<CModelMesh::Edge_t>::CModelMeshStreamIndex(int nIndex)
{
} /* size: 0 */

// <05F7C3B2> ../public/meshutils/modelmesh.h:61
void CModelMeshStreamIndex<CModelMesh::Face_t>::CModelMeshStreamIndex(int nIndex)
{
} /* size: 0 */

// <05F7C38D> ../public/meshutils/modelmesh.h:61
inline void CModelMeshStreamIndex<CModelMesh::Face_t>::CModelMeshStreamIndex(int nIndex)
{
} /* size: 0 */

// <060914FE> ../public/meshutils/modelmesh.h:63
inline void CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::IsValid()
{
} /* size: 0 */

// <0609146B> ../public/meshutils/modelmesh.h:63
inline void CModelMeshStreamIndex<CModelMesh::Vertex_t>::IsValid()
{
} /* size: 0 */

// <061D2900> ../public/meshutils/modelmesh.h:64
inline void CModelMeshStreamIndex<CModelMesh::Vertex_t>::ToInt()
{
} /* size: 0 */

// <061D2835> ../public/meshutils/modelmesh.h:64
inline void CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::ToInt()
{
} /* size: 0 */

// <05C328D0> ../public/meshutils/modelmesh.h:134
// member functions: 266
// member variables: 7
// static member variables: 17
// class size: 688
class CModelMesh {
	/* ../public/meshutils/modelmesh.h:240 */
	struct Vertex_t {
		FaceVertexHandle_t m_hFirstFaceVertex; /* 0 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:270 */
	struct FaceVertex_t {
		VertexHandle_t m_hVertex; /* 0 16 */
		FaceHandle_t m_hFace; /* 16 16 */
		EdgeHandle_t m_hEdge; /* 32 16 */
		FaceVertexHandle_t m_hNextFaceVertex; /* 48 16 */
		FaceVertexHandle_t m_hPrevFaceVertex; /* 64 16 */
		FaceVertexHandle_t m_hVertexListNext; /* 80 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:285 */
	struct Edge_t {
		VertexHandle_t m_hVertexA; /* 0 16 */
		VertexHandle_t m_hVertexB; /* 16 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:254 */
	struct Face_t {
		FaceVertexHandle_t m_hFirstFaceVertex; /* 0 16 */
		int m_nFaceGroupIndex; /* 16 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:159 */
	struct VertexStreamIndex_t : public CModelMeshStreamIndex<CModelMesh::Vertex_t> {
	public:
		/* class CModelMeshStreamIndex<CModelMesh::Vertex_t> <ancestor>; */ /* 0 4 */
		void VertexStreamIndex_t(VertexStreamIndex_t* , int);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:160 */
	struct FaceVertexStreamIndex_t : public CModelMeshStreamIndex<CModelMesh::FaceVertex_t> {
	public:
		/* class CModelMeshStreamIndex<CModelMesh::FaceVertex_t> <ancestor>; */ /* 0 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:161 */
	struct EdgeStreamIndex_t : public CModelMeshStreamIndex<CModelMesh::Edge_t> {
	public:
		/* class CModelMeshStreamIndex<CModelMesh::Edge_t> <ancestor>; */ /* 0 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:162 */
	struct FaceStreamIndex_t : public CModelMeshStreamIndex<CModelMesh::Face_t> {
	public:
		/* class CModelMeshStreamIndex<CModelMesh::Face_t> <ancestor>; */ /* 0 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:227 */
	enum FreeVertexRemovalMode_t {
		FREE_VERTICES_REMOVE = 0,
		FREE_VERTICES_LEAVE = 1,
	};
	/* ../public/meshutils/modelmesh.h:149 */
	typedef ComponentHandle_t FaceVertexHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:148 */
	typedef ComponentHandle_t VertexHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:151 */
	typedef ComponentHandle_t FaceHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:150 */
	typedef ComponentHandle_t EdgeHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:296 */
	struct FaceGroup_t {
		CUtlString m_MaterialName; /* 0 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:307 */
	class CVertex {
		/* ../public/meshutils/modelmesh.h:310 */
		void CVertex(CVertex* , CModelMesh* , VertexHandle_t);
		/* ../public/meshutils/modelmesh.h:312 */
		void GetFacesConnectedToVertex(const CVertex* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
		/* ../public/meshutils/modelmesh.h:313 */
		void GetFaceVerticesConnectedToVertex(const CVertex* , CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon);
		/* ../public/meshutils/modelmesh.h:314 */
		void GetEdgesConnectedToVertex(const CVertex* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
	private:
		CModelMesh & m_Mesh; /* 0 8 */
		VertexHandle_t m_hVertex; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:332 */
	class CFaceVertex {
		/* ../public/meshutils/modelmesh.h:335 */
		void CFaceVertex(CFaceVertex* , CModelMesh* , FaceVertexHandle_t);
		/* ../public/meshutils/modelmesh.h:337 */
		VertexHandle_t GetVertexConnectedToFaceVertex(const CFaceVertex* );
		/* ../public/meshutils/modelmesh.h:338 */
		FaceHandle_t GetFaceConnectedToFaceVertex(const CFaceVertex* );
		/* ../public/meshutils/modelmesh.h:340 */
		EdgeHandle_t GetOutgoingEdge(const CFaceVertex* );
		/* ../public/meshutils/modelmesh.h:341 */
		EdgeHandle_t GetIncomingEdge(const CFaceVertex* );
		/* ../public/meshutils/modelmesh.h:343 */
		FaceVertexHandle_t GetNextFaceVertexInFace(const CFaceVertex* );
		/* ../public/meshutils/modelmesh.h:344 */
		FaceVertexHandle_t GetPreviousFaceVertexInFace(const CFaceVertex* );
	private:
		CModelMesh & m_Mesh; /* 0 8 */
		FaceVertexHandle_t m_hFaceVertex; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:366 */
	class CEdge {
		/* ../public/meshutils/modelmesh.h:369 */
		void CEdge(CEdge* , CModelMesh* , EdgeHandle_t);
		/* ../public/meshutils/modelmesh.h:371 */
		VertexHandle_t GetVertexA(const CEdge* );
		/* ../public/meshutils/modelmesh.h:372 */
		VertexHandle_t GetVertexB(const CEdge* );
		/* ../public/meshutils/modelmesh.h:373 */
		void GetConnectedFaces(const CEdge* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
	private:
		CModelMesh & m_Mesh; /* 0 8 */
		EdgeHandle_t m_hEdge; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:391 */
	class CFace {
		/* ../public/meshutils/modelmesh.h:394 */
		void CFace(CFace* , CModelMesh* , FaceHandle_t);
		/* ../public/meshutils/modelmesh.h:396 */
		int ComputeNumVertices(const CFace* );
		/* ../public/meshutils/modelmesh.h:397 */
		int GetFaceGroupIndex(const CFace* );
		/* ../public/meshutils/modelmesh.h:399 */
		void GetVertices(const CFace* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL);
		/* ../public/meshutils/modelmesh.h:400 */
		void GetFaceVertices(const CFace* , CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon);
		/* ../public/meshutils/modelmesh.h:401 */
		void GetEdges(const CFace* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
		/* ../public/meshutils/modelmesh.h:403 */
		FaceVertexHandle_t GetFaceVertexForVertex(const CFace* , VertexHandle_t);
	private:
		CModelMesh & m_Mesh; /* 0 8 */
		FaceHandle_t m_hFace; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	static const VertexHandle_t INVALID_VERTEX; /* 0 0 */
	static const FaceVertexHandle_t INVALID_FACE_VERTEX; /* 0 0 */
	static const EdgeHandle_t INVALID_EDGE; /* 0 0 */
	static const FaceHandle_t INVALID_FACE; /* 0 0 */
	static const struct VertexStreamIndex_t INVALID_VERTEX_STREAM; /* 0 0 */
	static const struct FaceVertexStreamIndex_t INVALID_FACE_VERTEX_STREAM; /* 0 0 */
	static const struct EdgeStreamIndex_t INVALID_EDGE_STREAM; /* 0 0 */
	static const struct FaceStreamIndex_t INVALID_FACE_STREAM; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:183 */
	typedef DeltaIndex_t VertexDeltaIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const VertexDeltaIndex_t INVALID_VERTEX_DELTA; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:184 */
	typedef DeltaIndex_t FaceVertexDeltaIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const FaceVertexDeltaIndex_t INVALID_FACE_VERTEX_DELTA; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:185 */
	typedef DeltaIndex_t EdgeDeltaIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const EdgeDeltaIndex_t INVALID_EDGE_DELTA; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:186 */
	typedef DeltaIndex_t FaceDeltaIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const FaceDeltaIndex_t INVALID_FACE_DELTA; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:193 */
	typedef StreamIndex_t VertexDeltaStreamIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const VertexDeltaStreamIndex_t INVALID_VERTEX_DELTA_STREAM; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:194 */
	typedef StreamIndex_t FaceVertexDeltaStreamIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const FaceVertexDeltaStreamIndex_t INVALID_FACE_VERTEX_DELTA_STREAM; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:195 */
	typedef StreamIndex_t EdgeDeltaStreamIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const EdgeDeltaStreamIndex_t INVALID_EDGE_DELTA_STREAM; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:196 */
	typedef StreamIndex_t FaceDeltaStreamIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const FaceDeltaStreamIndex_t INVALID_FACE_DELTA_STREAM; /* 0 0 */
	static const int INVALID_FACE_GROUP = 18446744073709551615; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:424 */
	void CModelMesh(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:425 */
	void CModelMesh(CModelMesh* , const CModelMesh& );
	/* ../public/meshutils/modelmesh.h:432 */
	CModelMesh& operator=(CModelMesh* , const CModelMesh& );
	/* ../public/meshutils/modelmesh.h:435 */
	void CopyFrom(CModelMesh* , const CModelMesh& );
	/* ../public/meshutils/modelmesh.h:438 */
	void RemoveAll(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:441 */
	bool IsEmpty(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:444 */
	bool CheckIntegrity(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:449 */
	bool CanAppendMesh(const CModelMesh* , const CModelMesh& );
	/* ../public/meshutils/modelmesh.h:453 */
	void FlipAllFaces(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:456 */
	uint64 CalculateMeshHash(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:464 */
	int GetNumVertices(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:467 */
	VertexHandle_t GetVertexHandleForIndex(const CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:470 */
	void GetAllVertices(const CModelMesh* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL);
	/* ../public/meshutils/modelmesh.h:473 */
	bool IsVertexInMesh(const CModelMesh* , VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:476 */
	VertexHandle_t AddVertex(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:480 */
	void AddVertices(CModelMesh* , int, CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL);
	/* ../public/meshutils/modelmesh.h:485 */
	void RemoveVertex(CModelMesh* , VertexHandle_t, FreeVertexRemovalMode_t);
	/* ../public/meshutils/modelmesh.h:488 */
	void RemoveVertices(CModelMesh* , VertexHandle_t* , int, FreeVertexRemovalMode_t);
	/* ../public/meshutils/modelmesh.h:491 */
	void SaveVerticesToKV3(const CModelMesh* , KeyValues3* );
	/* ../public/meshutils/modelmesh.h:492 */
	bool LoadVerticesFromKV3(CModelMesh* , const KeyValues3* , CUtlString* );
	/* ../public/meshutils/modelmesh.h:494 */
	void SaveToKV3(const CModelMesh* , KeyValues3* );
	/* ../public/meshutils/modelmesh.h:495 */
	bool LoadFromKV3(CModelMesh* , const KeyValues3* , CUtlString* );
	/* ../public/meshutils/modelmesh.h:503 */
	int GetNumFaceVertices(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:506 */
	FaceVertexHandle_t GetFaceVertexHandleForIndex(const CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:509 */
	void GetAllFaceVertices(const CModelMesh* , CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon);
	/* ../public/meshutils/modelmesh.h:512 */
	bool IsFaceVertexInMesh(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:521 */
	int GetNumEdges(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:524 */
	EdgeHandle_t GetEdgeHandleForIndex(const CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:527 */
	void GetAllEdgeHandles(const CModelMesh* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
	/* ../public/meshutils/modelmesh.h:530 */
	bool IsEdgeInMesh(const CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:534 */
	EdgeHandle_t FindEdgeConnectingVertices(const CModelMesh* , VertexHandle_t, VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:538 */
	VertexHandle_t CollapseEdge(CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:545 */
	int GetNumFaces(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:548 */
	FaceHandle_t GetFaceHandleForIndex(const CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:551 */
	void GetAllFaces(const CModelMesh* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
	/* ../public/meshutils/modelmesh.h:554 */
	bool IsFaceInMesh(const CModelMesh* , FaceHandle_t);
	/* ../public/meshutils/modelmesh.h:558 */
	FaceHandle_t AddFace(CModelMesh* , const VertexHandle_t* , int, int, CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon);
	/* ../public/meshutils/modelmesh.h:564 */
	void AddFaces(CModelMesh* , int, const int* , const VertexHandle_t* , int, CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis, CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon);
	/* ../public/meshutils/modelmesh.h:568 */
	void RemoveFace(CModelMesh* , FaceHandle_t, FreeVertexRemovalMode_t);
	/* ../public/meshutils/modelmesh.h:572 */
	void RemoveFaces(CModelMesh* , const FaceHandle_t* , int, FreeVertexRemovalMode_t);
	/* ../public/meshutils/modelmesh.h:584 */
	int GetNumFaceGroups(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:587 */
	int AddFaceGroup(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:590 */
	void RemoveFaceGroup(CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:593 */
	void SetFaceGroupMaterial(CModelMesh* , int, const char* );
	/* ../public/meshutils/modelmesh.h:596 */
	const char* GetFaceGroupMaterial(const CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:599 */
	void FindFaceGroupsUsingMaterial(const CModelMesh* , const char* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/meshutils/modelmesh.h:603 */
	void AssignFaceToGroup(CModelMesh* , FaceHandle_t, int);
	/* ../public/meshutils/modelmesh.h:606 */
	void AssignFacesToGroup(CModelMesh* , FaceHandle_t* , int, int);
	/* ../public/meshutils/modelmesh.h:609 */
	void FindFacesInFaceGroup(const CModelMesh* , int, CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
	/* ../public/meshutils/modelmesh.h:612 */
	bool HasFacesInFaceGroup(const CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:624 */
	void SetBoneNames(CModelMesh* , const char** , int);
	/* ../public/meshutils/modelmesh.h:625 */
	void SetBoneNames(CModelMesh* , CUtlString* , int);
	/* ../public/meshutils/modelmesh.h:628 */
	void GetBoneNames(const CModelMesh* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* );
	/* ../public/meshutils/modelmesh.h:631 */
	int GetNumBones(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:634 */
	const char* GetBoneName(const CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:638 */
	int FindBoneByName(const CModelMesh* , const char* );
	/* ../public/meshutils/modelmesh.h:641 */
	int FindOrCreateBone(CModelMesh* , const char* );
	/* ../public/meshutils/modelmesh.h:644 */
	bool DoBoneListsMatch(const CModelMesh* , const CModelMesh& );
	/* ../public/meshutils/modelmesh.h:647 */
	bool RemoveBoneName(CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:650 */
	void RemoveBoneNames(CModelMesh* , const int* , int);
	/* ../public/meshutils/modelmesh.h:653 */
	bool RenameBone(CModelMesh* , const char* , const char* );
	/* ../public/meshutils/modelmesh.h:660 */
	CVertex Vertex(CModelMesh* , VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:661 */
	CVertex Vertex(const CModelMesh* , VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:663 */
	CFaceVertex FaceVertex(CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:664 */
	CFaceVertex FaceVertex(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:666 */
	CEdge Edge(CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:667 */
	CEdge Edge(const CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:669 */
	CFace Face(CModelMesh* , FaceHandle_t);
	/* ../public/meshutils/modelmesh.h:670 */
	CFace Face(const CModelMesh* , FaceHandle_t);
	/* ../public/meshutils/modelmesh.h:169 */
	typedef struct CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t> CVertexStreamSet;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:678 */
	CVertexStreamSet VertexStreamSet(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:679 */
	const CVertexStreamSet VertexStreamSet(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:170 */
	typedef struct CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t> CFaceVertexStreamSet;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:681 */
	CFaceVertexStreamSet FaceVertexStreamSet(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:682 */
	const CFaceVertexStreamSet FaceVertexStreamSet(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:171 */
	typedef struct CModelMeshStreamSetAccessor<CModelMesh::Edge_t, CModelMesh::EdgeStreamIndex_t> CEdgeStreamSet;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:684 */
	CEdgeStreamSet EdgeStreamSet(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:685 */
	const CEdgeStreamSet EdgeStreamSet(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:172 */
	typedef struct CModelMeshStreamSetAccessor<CModelMesh::Face_t, CModelMesh::FaceStreamIndex_t> CFaceStreamSet;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:687 */
	CFaceStreamSet FaceStreamSet(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:688 */
	const CFaceStreamSet FaceStreamSet(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:179 */
	typedef struct CModelMeshDeltaSet<CModelMesh::Vertex_t> CVertexDeltaSet;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:696 */
	CVertexDeltaSet& VertexDeltaSet(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:697 */
	const CVertexDeltaSet& VertexDeltaSet(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:180 */
	typedef struct CModelMeshDeltaSet<CModelMesh::FaceVertex_t> CFaceVertexDeltaSet;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:699 */
	CFaceVertexDeltaSet& FaceVertexDeltaSet(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:700 */
	const CFaceVertexDeltaSet& FaceVertexDeltaSet(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:181 */
	typedef struct CModelMeshDeltaSet<CModelMesh::Face_t> CFaceDeltaSet;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:702 */
	CFaceDeltaSet& FaceDeltaSet(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:703 */
	const CFaceDeltaSet& FaceDeltaSet(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:705 */
	bool HasDeltaData(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:714 */
	int GetVertexComponentIndex(const CModelMesh* , VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:715 */
	int GetFaceVertexComponentIndex(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:716 */
	int GetEdgeComponentIndex(const CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:717 */
	int GetFaceComponentIndex(const CModelMesh* , FaceHandle_t);
	/* ../public/meshutils/modelmesh.h:724 */
	CModelMeshMetaData& MetaData(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:725 */
	const CModelMeshMetaData& MetaData(const CModelMesh* );
private:
	/* ../public/meshutils/modelmesh.h:741 */
	FaceVertexHandle_t GetFaceVertexForVertex(const CModelMesh* , FaceHandle_t, VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:749 */
	void GetEdgesConnectedToVertex(const CModelMesh* , VertexHandle_t, CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFunctor<C);
	/* ../public/meshutils/modelmesh.h:755 */
	int GetNumFacesConnectedToEdge(const CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:760 */
	VertexHandle_t GetVertexConnectedToFaceVertex(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:761 */
	FaceHandle_t GetFaceConnectedToFaceVertex(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:764 */
	EdgeHandle_t GetOutgoingEdgeConnectedToFaceVertex(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:768 */
	EdgeHandle_t GetIncomingEdgeConnectedToFaceVertex(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:771 */
	FaceVertexHandle_t GetNextFaceVertexInFace(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:774 */
	FaceVertexHandle_t GetPreviousFaceVertexInFace(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:780 */
	Vertex_t* GetVertex(CModelMesh* , VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:781 */
	const Vertex_t* GetVertex(const CModelMesh* , VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:782 */
	FaceVertex_t* GetFaceVertex(CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:783 */
	const FaceVertex_t* GetFaceVertex(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:784 */
	Edge_t* GetEdge(CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:785 */
	const Edge_t* GetEdge(const CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:786 */
	Face_t* GetFace(CModelMesh* , FaceHandle_t);
	/* ../public/meshutils/modelmesh.h:787 */
	const Face_t* GetFace(const CModelMesh* , FaceHandle_t);
	/* ../public/meshutils/modelmesh.h:792 */
	EdgeHandle_t FindOrCreateEdgeConnectingVertices(CModelMesh* , VertexHandle_t, VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:793 */
	void DetachFaceVertexFromVertex(CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:794 */
	void AttachFaceVertexToVertex(CModelMesh* , FaceVertexHandle_t, VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:795 */
	int FindMatchingFaceGroup(CModelMesh* , const FaceGroup_t& );
	/* ../public/meshutils/modelmesh.h:796 */
	void MergeFaceGroupsFromMesh(CModelMesh* , const CModelMesh& , const CUtlVector<int, CUtlMemory<int, int> >* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/meshutils/modelmesh.h:797 */
	void MergeBonesFromMesh(CModelMesh* , const CModelMesh& , const CUtlVector<int, CUtlMemory<int, int> >* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/meshutils/modelmesh.h:798 */
	bool RemoveFaceVertexFromFace(CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:799 */
	ReplaceVertexResult_t ReplaceVertexInFace(CModelMesh* , FaceHandle_t, VertexHandle_t, VertexHandle_t);
	CModelMeshComponentList<CModelMesh::Vertex_t> m_Vertices; /* 0 152 */
	CModelMeshComponentList<CModelMesh::FaceVertex_t> m_FaceVertices; /* 152 152 */
	CModelMeshComponentList<CModelMesh::Edge_t> m_Edges; /* 304 152 */
	CModelMeshComponentList<CModelMesh::Face_t> m_Faces; /* 456 152 */
	CUtlVector<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> > m_FaceGroups; /* 608 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_BoneNames; /* 640 32 */
	CModelMeshMetaData m_MetaData; /* 672 16 */
	void CModelMesh(class CModelMesh *); /* linkage=_ZN10CModelMeshC4Ev */
	void CModelMesh(class CModelMesh *, const class CModelMesh  &); /* linkage=_ZN10CModelMeshC4ERKS_ */
	/* <5fa7e6f> meshutils/modelmesh.cpp:52 */
	class CModelMesh & operator=(class CModelMesh *, const class CModelMesh  &); /* linkage=_ZN10CModelMeshaSERKS_ */
	void CopyFrom(class CModelMesh *, const class CModelMesh  &); /* linkage=_ZN10CModelMesh8CopyFromERKS_ */
	void RemoveAll(class CModelMesh *); /* linkage=_ZN10CModelMesh9RemoveAllEv */
	bool IsEmpty(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh7IsEmptyEv */
	bool CheckIntegrity(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh14CheckIntegrityEv */
	bool CanAppendMesh(const class CModelMesh  *, const class CModelMesh  &); /* linkage=_ZNK10CModelMesh13CanAppendMeshERKS_ */
	void FlipAllFaces(class CModelMesh *); /* linkage=_ZN10CModelMesh12FlipAllFacesEv */
	uint64 CalculateMeshHash(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh17CalculateMeshHashEv */
	int GetNumVertices(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh14GetNumVerticesEv */
	VertexHandle_t GetVertexHandleForIndex(const class CModelMesh  *, int); /* linkage=_ZNK10CModelMesh23GetVertexHandleForIndexEi */
	void GetAllVertices(const class CModelMesh  *, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL); /* linkage=_ZNK10CModelMesh14GetAllVerticesEP10CUtlVectorIN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS4_iEE */
	bool IsVertexInMesh(const class CModelMesh  *, VertexHandle_t); /* linkage=_ZNK10CModelMesh14IsVertexInMeshEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	VertexHandle_t AddVertex(class CModelMesh *); /* linkage=_ZN10CModelMesh9AddVertexEv */
	void AddVertices(class CModelMesh *, int, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL); /* linkage=_ZN10CModelMesh11AddVerticesEiP10CUtlVectorIN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS4_iEE */
	void RemoveVertex(class CModelMesh *, VertexHandle_t, enum FreeVertexRemovalMode_t); /* linkage=_ZN10CModelMesh12RemoveVertexEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tENS_23FreeVertexRemovalMode_tE */
	void RemoveVertices(class CModelMesh *, VertexHandle_t *, int, enum FreeVertexRemovalMode_t); /* linkage=_ZN10CModelMesh14RemoveVerticesEPN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tEiNS_23FreeVertexRemovalMode_tE */
	void SaveVerticesToKV3(const class CModelMesh  *, class KeyValues3 *); /* linkage=_ZNK10CModelMesh17SaveVerticesToKV3EP10KeyValues3 */
	bool LoadVerticesFromKV3(class CModelMesh *, const class KeyValues3  *, class CUtlString *); /* linkage=_ZN10CModelMesh19LoadVerticesFromKV3EPK10KeyValues3P10CUtlString */
	void SaveToKV3(const class CModelMesh  *, class KeyValues3 *); /* linkage=_ZNK10CModelMesh9SaveToKV3EP10KeyValues3 */
	bool LoadFromKV3(class CModelMesh *, const class KeyValues3  *, class CUtlString *); /* linkage=_ZN10CModelMesh11LoadFromKV3EPK10KeyValues3P10CUtlString */
	int GetNumFaceVertices(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh18GetNumFaceVerticesEv */
	FaceVertexHandle_t GetFaceVertexHandleForIndex(const class CModelMesh  *, int); /* linkage=_ZNK10CModelMesh27GetFaceVertexHandleForIndexEi */
	void GetAllFaceVertices(const class CModelMesh  *, class CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon); /* linkage=_ZNK10CModelMesh18GetAllFaceVerticesEP10CUtlVectorIN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS4_iEE */
	bool IsFaceVertexInMesh(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh18IsFaceVertexInMeshEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	int GetNumEdges(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh11GetNumEdgesEv */
	EdgeHandle_t GetEdgeHandleForIndex(const class CModelMesh  *, int); /* linkage=_ZNK10CModelMesh21GetEdgeHandleForIndexEi */
	void GetAllEdgeHandles(const class CModelMesh  *, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis); /* linkage=_ZNK10CModelMesh17GetAllEdgeHandlesEP10CUtlVectorIN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS4_iEE */
	bool IsEdgeInMesh(const class CModelMesh  *, EdgeHandle_t); /* linkage=_ZNK10CModelMesh12IsEdgeInMeshEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	EdgeHandle_t FindEdgeConnectingVertices(const class CModelMesh  *, VertexHandle_t, VertexHandle_t); /* linkage=_ZNK10CModelMesh26FindEdgeConnectingVerticesEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tES3_ */
	VertexHandle_t CollapseEdge(class CModelMesh *, EdgeHandle_t); /* linkage=_ZN10CModelMesh12CollapseEdgeEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	int GetNumFaces(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh11GetNumFacesEv */
	FaceHandle_t GetFaceHandleForIndex(const class CModelMesh  *, int); /* linkage=_ZNK10CModelMesh21GetFaceHandleForIndexEi */
	void GetAllFaces(const class CModelMesh  *, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis); /* linkage=_ZNK10CModelMesh11GetAllFacesEP10CUtlVectorIN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS4_iEE */
	bool IsFaceInMesh(const class CModelMesh  *, FaceHandle_t); /* linkage=_ZNK10CModelMesh12IsFaceInMeshEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa7bf7> meshutils/modelmesh.cpp:789 */
	FaceHandle_t AddFace(class CModelMesh *, const VertexHandle_t  *, int, int, class CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon); /* linkage=_ZN10CModelMesh7AddFaceEPKN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tEiiP10CUtlVectorINS0_INS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS9_iEE */
	void AddFaces(class CModelMesh *, int, const int  *, const VertexHandle_t  *, int, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis, class CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon); /* linkage=_ZN10CModelMesh8AddFacesEiPKiPKN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tEiP10CUtlVectorINS2_INS_6Face_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryISB_iEEPS8_INS2_INS_12FaceVertex_tEE32ComponentHandleWithListPointer_tESC_ISI_iEE */
	void RemoveFace(class CModelMesh *, FaceHandle_t, enum FreeVertexRemovalMode_t); /* linkage=_ZN10CModelMesh10RemoveFaceEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tENS_23FreeVertexRemovalMode_tE */
	void RemoveFaces(class CModelMesh *, const FaceHandle_t  *, int, enum FreeVertexRemovalMode_t); /* linkage=_ZN10CModelMesh11RemoveFacesEPKN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tEiNS_23FreeVertexRemovalMode_tE */
	int GetNumFaceGroups(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh16GetNumFaceGroupsEv */
	/* <5fa4d1e> meshutils/modelmesh.cpp:1021 */
	int AddFaceGroup(class CModelMesh *); /* linkage=_ZN10CModelMesh12AddFaceGroupEv */
	void RemoveFaceGroup(class CModelMesh *, int); /* linkage=_ZN10CModelMesh15RemoveFaceGroupEi */
	/* <5fa2e5a> meshutils/modelmesh.cpp:1059 */
	void SetFaceGroupMaterial(class CModelMesh *, int, const char  *); /* linkage=_ZN10CModelMesh20SetFaceGroupMaterialEiPKc */
	const char  * GetFaceGroupMaterial(const class CModelMesh  *, int); /* linkage=_ZNK10CModelMesh20GetFaceGroupMaterialEi */
	void FindFaceGroupsUsingMaterial(const class CModelMesh  *, const char  *, class CUtlVector<int, CUtlMemory<int, int> > *); /* linkage=_ZNK10CModelMesh27FindFaceGroupsUsingMaterialEPKcP10CUtlVectorIi10CUtlMemoryIiiEE */
	void AssignFaceToGroup(class CModelMesh *, FaceHandle_t, int); /* linkage=_ZN10CModelMesh17AssignFaceToGroupEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tEi */
	/* <5fa2ff5> meshutils/modelmesh.cpp:1111 */
	void AssignFacesToGroup(class CModelMesh *, FaceHandle_t *, int, int); /* linkage=_ZN10CModelMesh18AssignFacesToGroupEPN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tEii */
	void FindFacesInFaceGroup(const class CModelMesh  *, int, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis); /* linkage=_ZNK10CModelMesh20FindFacesInFaceGroupEiP10CUtlVectorIN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS4_iEE */
	bool HasFacesInFaceGroup(const class CModelMesh  *, int); /* linkage=_ZNK10CModelMesh19HasFacesInFaceGroupEi */
	void SetBoneNames(class CModelMesh *, const char  * *, int); /* linkage=_ZN10CModelMesh12SetBoneNamesEPPKci */
	void SetBoneNames(class CModelMesh *, class CUtlString *, int); /* linkage=_ZN10CModelMesh12SetBoneNamesEP10CUtlStringi */
	void GetBoneNames(const class CModelMesh  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *); /* linkage=_ZNK10CModelMesh12GetBoneNamesEP10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEE */
	/* <5fa3353> meshutils/modelmesh.cpp:1201 */
	int GetNumBones(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh11GetNumBonesEv */
	/* <5fa33ad> meshutils/modelmesh.cpp:1209 */
	const char  * GetBoneName(const class CModelMesh  *, int); /* linkage=_ZNK10CModelMesh11GetBoneNameEi */
	/* <5fa349f> meshutils/modelmesh.cpp:1220 */
	int FindBoneByName(const class CModelMesh  *, const char  *); /* linkage=_ZNK10CModelMesh14FindBoneByNameEPKc */
	/* <5fa52a0> meshutils/modelmesh.cpp:1238 */
	int FindOrCreateBone(class CModelMesh *, const char  *); /* linkage=_ZN10CModelMesh16FindOrCreateBoneEPKc */
	bool DoBoneListsMatch(const class CModelMesh  *, const class CModelMesh  &); /* linkage=_ZNK10CModelMesh16DoBoneListsMatchERKS_ */
	bool RemoveBoneName(class CModelMesh *, int); /* linkage=_ZN10CModelMesh14RemoveBoneNameEi */
	void RemoveBoneNames(class CModelMesh *, const int  *, int); /* linkage=_ZN10CModelMesh15RemoveBoneNamesEPKii */
	bool RenameBone(class CModelMesh *, const char  *, const char  *); /* linkage=_ZN10CModelMesh10RenameBoneEPKcS1_ */
	/* <5fa37c3> meshutils/modelmesh.cpp:1582 */
	class CVertex Vertex(class CModelMesh *, VertexHandle_t); /* linkage=_ZN10CModelMesh6VertexEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	class CVertex Vertex(const class CModelMesh  *, VertexHandle_t); /* linkage=_ZNK10CModelMesh6VertexEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa3841> meshutils/modelmesh.cpp:1598 */
	class CFaceVertex FaceVertex(class CModelMesh *, FaceVertexHandle_t); /* linkage=_ZN10CModelMesh10FaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	class CFaceVertex FaceVertex(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh10FaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa38bf> meshutils/modelmesh.cpp:1614 */
	class CEdge Edge(class CModelMesh *, EdgeHandle_t); /* linkage=_ZN10CModelMesh4EdgeEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	class CEdge Edge(const class CModelMesh  *, EdgeHandle_t); /* linkage=_ZNK10CModelMesh4EdgeEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa392b> meshutils/modelmesh.cpp:1630 */
	class CFace Face(class CModelMesh *, FaceHandle_t); /* linkage=_ZN10CModelMesh4FaceEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE */
	class CFace Face(const class CModelMesh  *, FaceHandle_t); /* linkage=_ZNK10CModelMesh4FaceEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa3629> meshutils/modelmesh.cpp:1550 */
	CVertexStreamSet VertexStreamSet(class CModelMesh *); /* linkage=_ZN10CModelMesh15VertexStreamSetEv */
	const CVertexStreamSet  VertexStreamSet(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh15VertexStreamSetEv */
	/* <5fa36f3> meshutils/modelmesh.cpp:1566 */
	CFaceVertexStreamSet FaceVertexStreamSet(class CModelMesh *); /* linkage=_ZN10CModelMesh19FaceVertexStreamSetEv */
	const CFaceVertexStreamSet  FaceVertexStreamSet(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh19FaceVertexStreamSetEv */
	CEdgeStreamSet EdgeStreamSet(class CModelMesh *); /* linkage=_ZN10CModelMesh13EdgeStreamSetEv */
	const CEdgeStreamSet  EdgeStreamSet(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh13EdgeStreamSetEv */
	/* <5fa3ab7> meshutils/modelmesh.cpp:1703 */
	CFaceStreamSet FaceStreamSet(class CModelMesh *); /* linkage=_ZN10CModelMesh13FaceStreamSetEv */
	const CFaceStreamSet  FaceStreamSet(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh13FaceStreamSetEv */
	/* <5fa39a9> meshutils/modelmesh.cpp:1646 */
	CVertexDeltaSet & VertexDeltaSet(class CModelMesh *); /* linkage=_ZN10CModelMesh14VertexDeltaSetEv */
	const CVertexDeltaSet  & VertexDeltaSet(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh14VertexDeltaSetEv */
	/* <5fa3a03> meshutils/modelmesh.cpp:1661 */
	CFaceVertexDeltaSet & FaceVertexDeltaSet(class CModelMesh *); /* linkage=_ZN10CModelMesh18FaceVertexDeltaSetEv */
	const CFaceVertexDeltaSet  & FaceVertexDeltaSet(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh18FaceVertexDeltaSetEv */
	/* <5fa3a5d> meshutils/modelmesh.cpp:1677 */
	CFaceDeltaSet & FaceDeltaSet(class CModelMesh *); /* linkage=_ZN10CModelMesh12FaceDeltaSetEv */
	const CFaceDeltaSet  & FaceDeltaSet(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh12FaceDeltaSetEv */
	bool HasDeltaData(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh12HasDeltaDataEv */
	int GetVertexComponentIndex(const class CModelMesh  *, VertexHandle_t); /* linkage=_ZNK10CModelMesh23GetVertexComponentIndexEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	int GetFaceVertexComponentIndex(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh27GetFaceVertexComponentIndexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	int GetEdgeComponentIndex(const class CModelMesh  *, EdgeHandle_t); /* linkage=_ZNK10CModelMesh21GetEdgeComponentIndexEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	int GetFaceComponentIndex(const class CModelMesh  *, FaceHandle_t); /* linkage=_ZNK10CModelMesh21GetFaceComponentIndexEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa3600> meshutils/modelmesh.cpp:1534 */
	class CModelMeshMetaData & MetaData(class CModelMesh *); /* linkage=_ZN10CModelMesh8MetaDataEv */
	const class CModelMeshMetaData  & MetaData(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh8MetaDataEv */
	FaceVertexHandle_t GetFaceVertexForVertex(const class CModelMesh  *, FaceHandle_t, VertexHandle_t); /* linkage=_ZNK10CModelMesh22GetFaceVertexForVertexEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tENS0_INS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	void GetEdgesConnectedToVertex(const class CModelMesh  *, VertexHandle_t, class CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFunctor<C); /* linkage=_ZNK10CModelMesh25GetEdgesConnectedToVertexEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tEP13CUtlHashtableINS0_INS_6Edge_tEE32ComponentHandleWithListPointer_tE7empty_t18DefaultHashFunctorIS7_E19DefaultEqualFunctorIS7_E11undefined_t10CUtlMemoryI18CUtlHashtableEntryIS7_S8_EiEE */
	/* <5fa5479> meshutils/modelmesh.cpp:546 */
	int GetNumFacesConnectedToEdge(const class CModelMesh  *, EdgeHandle_t); /* linkage=_ZNK10CModelMesh26GetNumFacesConnectedToEdgeEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa40fb> meshutils/modelmesh.cpp:1325 */
	VertexHandle_t GetVertexConnectedToFaceVertex(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh30GetVertexConnectedToFaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa4021> meshutils/modelmesh.cpp:1338 */
	FaceHandle_t GetFaceConnectedToFaceVertex(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh28GetFaceConnectedToFaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa25ad> meshutils/modelmesh.cpp:417 */
	EdgeHandle_t GetOutgoingEdgeConnectedToFaceVertex(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh36GetOutgoingEdgeConnectedToFaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa41d5> meshutils/modelmesh.cpp:429 */
	EdgeHandle_t GetIncomingEdgeConnectedToFaceVertex(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh36GetIncomingEdgeConnectedToFaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa2894> meshutils/modelmesh.cpp:445 */
	FaceVertexHandle_t GetNextFaceVertexInFace(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh23GetNextFaceVertexInFaceEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa2b7b> meshutils/modelmesh.cpp:457 */
	FaceVertexHandle_t GetPreviousFaceVertexInFace(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh27GetPreviousFaceVertexInFaceEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa3b87> meshutils/modelmesh.cpp:1719 */
	class Vertex_t * GetVertex(class CModelMesh *, VertexHandle_t); /* linkage=_ZN10CModelMesh9GetVertexEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	const class Vertex_t  * GetVertex(const class CModelMesh  *, VertexHandle_t); /* linkage=_ZNK10CModelMesh9GetVertexEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa3dd4> meshutils/modelmesh.cpp:1735 */
	class FaceVertex_t * GetFaceVertex(class CModelMesh *, FaceVertexHandle_t); /* linkage=_ZN10CModelMesh13GetFaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	const class FaceVertex_t  * GetFaceVertex(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh13GetFaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa4253> meshutils/modelmesh.cpp:1752 */
	class Edge_t * GetEdge(class CModelMesh *, EdgeHandle_t); /* linkage=_ZN10CModelMesh7GetEdgeEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	const class Edge_t  * GetEdge(const class CModelMesh  *, EdgeHandle_t); /* linkage=_ZNK10CModelMesh7GetEdgeEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa44a0> meshutils/modelmesh.cpp:1768 */
	class Face_t * GetFace(class CModelMesh *, FaceHandle_t); /* linkage=_ZN10CModelMesh7GetFaceEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE */
	const class Face_t  * GetFace(const class CModelMesh  *, FaceHandle_t); /* linkage=_ZNK10CModelMesh7GetFaceEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE */
	EdgeHandle_t FindOrCreateEdgeConnectingVertices(class CModelMesh *, VertexHandle_t, VertexHandle_t); /* linkage=_ZN10CModelMesh34FindOrCreateEdgeConnectingVerticesEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tES3_ */
	void DetachFaceVertexFromVertex(class CModelMesh *, FaceVertexHandle_t); /* linkage=_ZN10CModelMesh26DetachFaceVertexFromVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	void AttachFaceVertexToVertex(class CModelMesh *, FaceVertexHandle_t, VertexHandle_t); /* linkage=_ZN10CModelMesh24AttachFaceVertexToVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tENS0_INS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa46ed> meshutils/modelmesh.cpp:1839 */
	int FindMatchingFaceGroup(class CModelMesh *, const class FaceGroup_t  &); /* linkage=_ZN10CModelMesh21FindMatchingFaceGroupERKNS_11FaceGroup_tE */
	void MergeFaceGroupsFromMesh(class CModelMesh *, const class CModelMesh  &, const class CUtlVector<int, CUtlMemory<int, int> >  *, class CUtlVector<int, CUtlMemory<int, int> > *); /* linkage=_ZN10CModelMesh23MergeFaceGroupsFromMeshERKS_PK10CUtlVectorIi10CUtlMemoryIiiEEPS5_ */
	void MergeBonesFromMesh(class CModelMesh *, const class CModelMesh  &, const class CUtlVector<int, CUtlMemory<int, int> >  *, class CUtlVector<int, CUtlMemory<int, int> > *); /* linkage=_ZN10CModelMesh18MergeBonesFromMeshERKS_PK10CUtlVectorIi10CUtlMemoryIiiEEPS5_ */
	bool RemoveFaceVertexFromFace(class CModelMesh *, FaceVertexHandle_t); /* linkage=_ZN10CModelMesh24RemoveFaceVertexFromFaceEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	enum ReplaceVertexResult_t ReplaceVertexInFace(class CModelMesh *, FaceHandle_t, VertexHandle_t, VertexHandle_t); /* linkage=_ZN10CModelMesh19ReplaceVertexInFaceEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tENS0_INS_8Vertex_tEE32ComponentHandleWithListPointer_tES6_ */
	void GetEdgesConnectedToFace<CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int> > >(const class CModelMesh  *, FaceHandle_t, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis); /* linkage=_ZNK10CModelMesh23GetEdgesConnectedToFaceI10CUtlVectorIN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS5_iEEEEvNS2_INS_6Face_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetFaceVerticesConnectedToFace<CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > >(const class CModelMesh  *, FaceHandle_t, class CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon); /* linkage=_ZNK10CModelMesh30GetFaceVerticesConnectedToFaceI10CUtlVectorIN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS5_iEEEEvNS2_INS_6Face_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetVerticesConnectedToFace<CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > >(const class CModelMesh  *, FaceHandle_t, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL); /* linkage=_ZNK10CModelMesh26GetVerticesConnectedToFaceI10CUtlVectorIN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS5_iEEEEvNS2_INS_6Face_tEE32ComponentHandleWithListPointer_tEPT_ */
	int GetFacesConnectedToEdge<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > >(const class CModelMesh  *, EdgeHandle_t, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis); /* linkage=_ZNK10CModelMesh23GetFacesConnectedToEdgeI10CUtlVectorIN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS5_iEEEEiNS2_INS_6Edge_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetFaceVerticesConnectedToVertex<CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > >(const class CModelMesh  *, VertexHandle_t, class CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon); /* linkage=_ZNK10CModelMesh32GetFaceVerticesConnectedToVertexI10CUtlVectorIN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS5_iEEEEvNS2_INS_8Vertex_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetFacesConnectedToVertex<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > >(const class CModelMesh  *, VertexHandle_t, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis); /* linkage=_ZNK10CModelMesh25GetFacesConnectedToVertexI10CUtlVectorIN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS5_iEEEEvNS2_INS_8Vertex_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetEdgesConnectedToFace<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t> >(const class CModelMesh  *, FaceHandle_t, class CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t> *); /* linkage=_ZNK10CModelMesh23GetEdgesConnectedToFaceI24CUtlVectorMeshComponentsIN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tEEEEvNS2_INS_6Face_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetFaceVerticesConnectedToFace<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> >(const class CModelMesh  *, FaceHandle_t, class CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> *); /* linkage=_ZNK10CModelMesh30GetFaceVerticesConnectedToFaceI24CUtlVectorMeshComponentsIN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tEEEEvNS2_INS_6Face_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetFacesConnectedToVertex<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t> >(const class CModelMesh  *, VertexHandle_t, class CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t> *); /* linkage=_ZNK10CModelMesh25GetFacesConnectedToVertexI24CUtlVectorMeshComponentsIN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tEEEEvNS2_INS_8Vertex_tEE32ComponentHandleWithListPointer_tEPT_ */
	int GetFacesConnectedToEdge<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t> >(const class CModelMesh  *, EdgeHandle_t, class CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t> *); /* linkage=_ZNK10CModelMesh23GetFacesConnectedToEdgeI24CUtlVectorMeshComponentsIN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tEEEEiNS2_INS_6Edge_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetFaceVerticesConnectedToVertex<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> >(const class CModelMesh  *, VertexHandle_t, class CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> *); /* linkage=_ZNK10CModelMesh32GetFaceVerticesConnectedToVertexI24CUtlVectorMeshComponentsIN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tEEEEvNS2_INS_8Vertex_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetEdgesConnectedToVertex<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t> >(const class CModelMesh  *, VertexHandle_t, class CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t> *); /* linkage=_ZNK10CModelMesh25GetEdgesConnectedToVertexI24CUtlVectorMeshComponentsIN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tEEEEvNS2_INS_8Vertex_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetFaceVerticesConnectedToVertex<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 32> >(const class CModelMesh  *, VertexHandle_t, class CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 32> *); /* linkage=_ZNK10CModelMesh32GetFaceVerticesConnectedToVertexI23CUtlVectorFixedGrowableIN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tELm32EEEEvNS2_INS_8Vertex_tEE32ComponentHandleWithListPointer_tEPT_ */
};

// <05F35C2C> ../public/meshutils/modelmesh.h:134
// member functions: 284
// member variables: 7
// static member variables: 17
// class size: 688
class CModelMesh {
	/* ../public/meshutils/modelmesh.h:240 */
	struct Vertex_t {
		FaceVertexHandle_t m_hFirstFaceVertex; /* 0 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:270 */
	struct FaceVertex_t {
		VertexHandle_t m_hVertex; /* 0 16 */
		FaceHandle_t m_hFace; /* 16 16 */
		EdgeHandle_t m_hEdge; /* 32 16 */
		FaceVertexHandle_t m_hNextFaceVertex; /* 48 16 */
		FaceVertexHandle_t m_hPrevFaceVertex; /* 64 16 */
		FaceVertexHandle_t m_hVertexListNext; /* 80 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:285 */
	struct Edge_t {
		VertexHandle_t m_hVertexA; /* 0 16 */
		VertexHandle_t m_hVertexB; /* 16 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:254 */
	struct Face_t {
		FaceVertexHandle_t m_hFirstFaceVertex; /* 0 16 */
		int m_nFaceGroupIndex; /* 16 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:159 */
	struct VertexStreamIndex_t : public CModelMeshStreamIndex<CModelMesh::Vertex_t> {
	public:
		/* class CModelMeshStreamIndex<CModelMesh::Vertex_t> <ancestor>; */ /* 0 4 */
		void VertexStreamIndex_t(VertexStreamIndex_t* , int);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:160 */
	struct FaceVertexStreamIndex_t : public CModelMeshStreamIndex<CModelMesh::FaceVertex_t> {
	public:
		/* class CModelMeshStreamIndex<CModelMesh::FaceVertex_t> <ancestor>; */ /* 0 4 */
		void FaceVertexStreamIndex_t(FaceVertexStreamIndex_t* , int);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:161 */
	struct EdgeStreamIndex_t : public CModelMeshStreamIndex<CModelMesh::Edge_t> {
	public:
		/* class CModelMeshStreamIndex<CModelMesh::Edge_t> <ancestor>; */ /* 0 4 */
		void EdgeStreamIndex_t(EdgeStreamIndex_t* , int);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:162 */
	struct FaceStreamIndex_t : public CModelMeshStreamIndex<CModelMesh::Face_t> {
	public:
		/* class CModelMeshStreamIndex<CModelMesh::Face_t> <ancestor>; */ /* 0 4 */
		void FaceStreamIndex_t(FaceStreamIndex_t* , int);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:227 */
	enum FreeVertexRemovalMode_t {
		FREE_VERTICES_REMOVE = 0,
		FREE_VERTICES_LEAVE = 1,
	};
	/* ../public/meshutils/modelmesh.h:149 */
	typedef ComponentHandle_t FaceVertexHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:148 */
	typedef ComponentHandle_t VertexHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:151 */
	typedef ComponentHandle_t FaceHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:150 */
	typedef ComponentHandle_t EdgeHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:296 */
	struct FaceGroup_t {
		CUtlString m_MaterialName; /* 0 8 */
		void FaceGroup_t(FaceGroup_t* );
		void ~FaceGroup_t(FaceGroup_t* );
		FaceGroup_t& operator=(FaceGroup_t* , const FaceGroup_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:307 */
	class CVertex {
		/* ../public/meshutils/modelmesh.h:310 */
		void CVertex(CVertex* , CModelMesh* , VertexHandle_t);
		/* ../public/meshutils/modelmesh.h:312 */
		void GetFacesConnectedToVertex(const CVertex* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
		/* ../public/meshutils/modelmesh.h:313 */
		void GetFaceVerticesConnectedToVertex(const CVertex* , CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon);
		/* ../public/meshutils/modelmesh.h:314 */
		void GetEdgesConnectedToVertex(const CVertex* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
	private:
		CModelMesh & m_Mesh; /* 0 8 */
		VertexHandle_t m_hVertex; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:332 */
	class CFaceVertex {
		/* ../public/meshutils/modelmesh.h:335 */
		void CFaceVertex(CFaceVertex* , CModelMesh* , FaceVertexHandle_t);
		/* ../public/meshutils/modelmesh.h:337 */
		VertexHandle_t GetVertexConnectedToFaceVertex(const CFaceVertex* );
		/* ../public/meshutils/modelmesh.h:338 */
		FaceHandle_t GetFaceConnectedToFaceVertex(const CFaceVertex* );
		/* ../public/meshutils/modelmesh.h:340 */
		EdgeHandle_t GetOutgoingEdge(const CFaceVertex* );
		/* ../public/meshutils/modelmesh.h:341 */
		EdgeHandle_t GetIncomingEdge(const CFaceVertex* );
		/* ../public/meshutils/modelmesh.h:343 */
		FaceVertexHandle_t GetNextFaceVertexInFace(const CFaceVertex* );
		/* ../public/meshutils/modelmesh.h:344 */
		FaceVertexHandle_t GetPreviousFaceVertexInFace(const CFaceVertex* );
	private:
		CModelMesh & m_Mesh; /* 0 8 */
		FaceVertexHandle_t m_hFaceVertex; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:366 */
	class CEdge {
		/* ../public/meshutils/modelmesh.h:369 */
		void CEdge(CEdge* , CModelMesh* , EdgeHandle_t);
		/* ../public/meshutils/modelmesh.h:371 */
		VertexHandle_t GetVertexA(const CEdge* );
		/* ../public/meshutils/modelmesh.h:372 */
		VertexHandle_t GetVertexB(const CEdge* );
		/* ../public/meshutils/modelmesh.h:373 */
		void GetConnectedFaces(const CEdge* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
	private:
		CModelMesh & m_Mesh; /* 0 8 */
		EdgeHandle_t m_hEdge; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:391 */
	class CFace {
		/* ../public/meshutils/modelmesh.h:394 */
		void CFace(CFace* , CModelMesh* , FaceHandle_t);
		/* ../public/meshutils/modelmesh.h:396 */
		int ComputeNumVertices(const CFace* );
		/* ../public/meshutils/modelmesh.h:397 */
		int GetFaceGroupIndex(const CFace* );
		/* ../public/meshutils/modelmesh.h:399 */
		void GetVertices(const CFace* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL);
		/* ../public/meshutils/modelmesh.h:400 */
		void GetFaceVertices(const CFace* , CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon);
		/* ../public/meshutils/modelmesh.h:401 */
		void GetEdges(const CFace* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
		/* ../public/meshutils/modelmesh.h:403 */
		FaceVertexHandle_t GetFaceVertexForVertex(const CFace* , VertexHandle_t);
	private:
		CModelMesh & m_Mesh; /* 0 8 */
		FaceHandle_t m_hFace; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	static const VertexHandle_t INVALID_VERTEX; /* 0 0 */
	static const FaceVertexHandle_t INVALID_FACE_VERTEX; /* 0 0 */
	static const EdgeHandle_t INVALID_EDGE; /* 0 0 */
	static const FaceHandle_t INVALID_FACE; /* 0 0 */
	static const struct VertexStreamIndex_t INVALID_VERTEX_STREAM; /* 0 0 */
	static const struct FaceVertexStreamIndex_t INVALID_FACE_VERTEX_STREAM; /* 0 0 */
	static const struct EdgeStreamIndex_t INVALID_EDGE_STREAM; /* 0 0 */
	static const struct FaceStreamIndex_t INVALID_FACE_STREAM; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:183 */
	typedef DeltaIndex_t VertexDeltaIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const VertexDeltaIndex_t INVALID_VERTEX_DELTA; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:184 */
	typedef DeltaIndex_t FaceVertexDeltaIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const FaceVertexDeltaIndex_t INVALID_FACE_VERTEX_DELTA; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:185 */
	typedef DeltaIndex_t EdgeDeltaIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const EdgeDeltaIndex_t INVALID_EDGE_DELTA; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:186 */
	typedef DeltaIndex_t FaceDeltaIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const FaceDeltaIndex_t INVALID_FACE_DELTA; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:193 */
	typedef StreamIndex_t VertexDeltaStreamIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const VertexDeltaStreamIndex_t INVALID_VERTEX_DELTA_STREAM; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:194 */
	typedef StreamIndex_t FaceVertexDeltaStreamIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const FaceVertexDeltaStreamIndex_t INVALID_FACE_VERTEX_DELTA_STREAM; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:195 */
	typedef StreamIndex_t EdgeDeltaStreamIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const EdgeDeltaStreamIndex_t INVALID_EDGE_DELTA_STREAM; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:196 */
	typedef StreamIndex_t FaceDeltaStreamIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const FaceDeltaStreamIndex_t INVALID_FACE_DELTA_STREAM; /* 0 0 */
	static const int INVALID_FACE_GROUP = 18446744073709551615; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:424 */
	void CModelMesh(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:425 */
	void CModelMesh(CModelMesh* , const CModelMesh& );
	/* ../public/meshutils/modelmesh.h:432 */
	CModelMesh& operator=(CModelMesh* , const CModelMesh& );
	/* ../public/meshutils/modelmesh.h:435 */
	void CopyFrom(CModelMesh* , const CModelMesh& );
	/* ../public/meshutils/modelmesh.h:438 */
	void RemoveAll(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:441 */
	bool IsEmpty(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:444 */
	bool CheckIntegrity(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:449 */
	bool CanAppendMesh(const CModelMesh* , const CModelMesh& );
	/* ../public/meshutils/modelmesh.h:453 */
	void FlipAllFaces(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:456 */
	uint64 CalculateMeshHash(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:464 */
	int GetNumVertices(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:467 */
	VertexHandle_t GetVertexHandleForIndex(const CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:470 */
	void GetAllVertices(const CModelMesh* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL);
	/* ../public/meshutils/modelmesh.h:473 */
	bool IsVertexInMesh(const CModelMesh* , VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:476 */
	VertexHandle_t AddVertex(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:480 */
	void AddVertices(CModelMesh* , int, CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL);
	/* ../public/meshutils/modelmesh.h:485 */
	void RemoveVertex(CModelMesh* , VertexHandle_t, FreeVertexRemovalMode_t);
	/* ../public/meshutils/modelmesh.h:488 */
	void RemoveVertices(CModelMesh* , VertexHandle_t* , int, FreeVertexRemovalMode_t);
	/* ../public/meshutils/modelmesh.h:491 */
	void SaveVerticesToKV3(const CModelMesh* , KeyValues3* );
	/* ../public/meshutils/modelmesh.h:492 */
	bool LoadVerticesFromKV3(CModelMesh* , const KeyValues3* , CUtlString* );
	/* ../public/meshutils/modelmesh.h:494 */
	void SaveToKV3(const CModelMesh* , KeyValues3* );
	/* ../public/meshutils/modelmesh.h:495 */
	bool LoadFromKV3(CModelMesh* , const KeyValues3* , CUtlString* );
	/* ../public/meshutils/modelmesh.h:503 */
	int GetNumFaceVertices(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:506 */
	FaceVertexHandle_t GetFaceVertexHandleForIndex(const CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:509 */
	void GetAllFaceVertices(const CModelMesh* , CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon);
	/* ../public/meshutils/modelmesh.h:512 */
	bool IsFaceVertexInMesh(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:521 */
	int GetNumEdges(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:524 */
	EdgeHandle_t GetEdgeHandleForIndex(const CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:527 */
	void GetAllEdgeHandles(const CModelMesh* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
	/* ../public/meshutils/modelmesh.h:530 */
	bool IsEdgeInMesh(const CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:534 */
	EdgeHandle_t FindEdgeConnectingVertices(const CModelMesh* , VertexHandle_t, VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:538 */
	VertexHandle_t CollapseEdge(CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:545 */
	int GetNumFaces(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:548 */
	FaceHandle_t GetFaceHandleForIndex(const CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:551 */
	void GetAllFaces(const CModelMesh* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
	/* ../public/meshutils/modelmesh.h:554 */
	bool IsFaceInMesh(const CModelMesh* , FaceHandle_t);
	/* ../public/meshutils/modelmesh.h:558 */
	FaceHandle_t AddFace(CModelMesh* , const VertexHandle_t* , int, int, CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon);
	/* ../public/meshutils/modelmesh.h:564 */
	void AddFaces(CModelMesh* , int, const int* , const VertexHandle_t* , int, CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis, CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon);
	/* ../public/meshutils/modelmesh.h:568 */
	void RemoveFace(CModelMesh* , FaceHandle_t, FreeVertexRemovalMode_t);
	/* ../public/meshutils/modelmesh.h:572 */
	void RemoveFaces(CModelMesh* , const FaceHandle_t* , int, FreeVertexRemovalMode_t);
	/* ../public/meshutils/modelmesh.h:584 */
	int GetNumFaceGroups(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:587 */
	int AddFaceGroup(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:590 */
	void RemoveFaceGroup(CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:593 */
	void SetFaceGroupMaterial(CModelMesh* , int, const char* );
	/* ../public/meshutils/modelmesh.h:596 */
	const char* GetFaceGroupMaterial(const CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:599 */
	void FindFaceGroupsUsingMaterial(const CModelMesh* , const char* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/meshutils/modelmesh.h:603 */
	void AssignFaceToGroup(CModelMesh* , FaceHandle_t, int);
	/* ../public/meshutils/modelmesh.h:606 */
	void AssignFacesToGroup(CModelMesh* , FaceHandle_t* , int, int);
	/* ../public/meshutils/modelmesh.h:609 */
	void FindFacesInFaceGroup(const CModelMesh* , int, CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
	/* ../public/meshutils/modelmesh.h:612 */
	bool HasFacesInFaceGroup(const CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:624 */
	void SetBoneNames(CModelMesh* , const char** , int);
	/* ../public/meshutils/modelmesh.h:625 */
	void SetBoneNames(CModelMesh* , CUtlString* , int);
	/* ../public/meshutils/modelmesh.h:628 */
	void GetBoneNames(const CModelMesh* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* );
	/* ../public/meshutils/modelmesh.h:631 */
	int GetNumBones(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:634 */
	const char* GetBoneName(const CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:638 */
	int FindBoneByName(const CModelMesh* , const char* );
	/* ../public/meshutils/modelmesh.h:641 */
	int FindOrCreateBone(CModelMesh* , const char* );
	/* ../public/meshutils/modelmesh.h:644 */
	bool DoBoneListsMatch(const CModelMesh* , const CModelMesh& );
	/* ../public/meshutils/modelmesh.h:647 */
	bool RemoveBoneName(CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:650 */
	void RemoveBoneNames(CModelMesh* , const int* , int);
	/* ../public/meshutils/modelmesh.h:653 */
	bool RenameBone(CModelMesh* , const char* , const char* );
	/* ../public/meshutils/modelmesh.h:660 */
	CVertex Vertex(CModelMesh* , VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:661 */
	CVertex Vertex(const CModelMesh* , VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:663 */
	CFaceVertex FaceVertex(CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:664 */
	CFaceVertex FaceVertex(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:666 */
	CEdge Edge(CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:667 */
	CEdge Edge(const CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:669 */
	CFace Face(CModelMesh* , FaceHandle_t);
	/* ../public/meshutils/modelmesh.h:670 */
	CFace Face(const CModelMesh* , FaceHandle_t);
	/* ../public/meshutils/modelmesh.h:169 */
	typedef struct CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t> CVertexStreamSet;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:678 */
	CVertexStreamSet VertexStreamSet(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:679 */
	const CVertexStreamSet VertexStreamSet(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:170 */
	typedef struct CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t> CFaceVertexStreamSet;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:681 */
	CFaceVertexStreamSet FaceVertexStreamSet(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:682 */
	const CFaceVertexStreamSet FaceVertexStreamSet(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:171 */
	typedef struct CModelMeshStreamSetAccessor<CModelMesh::Edge_t, CModelMesh::EdgeStreamIndex_t> CEdgeStreamSet;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:684 */
	CEdgeStreamSet EdgeStreamSet(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:685 */
	const CEdgeStreamSet EdgeStreamSet(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:172 */
	typedef struct CModelMeshStreamSetAccessor<CModelMesh::Face_t, CModelMesh::FaceStreamIndex_t> CFaceStreamSet;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:687 */
	CFaceStreamSet FaceStreamSet(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:688 */
	const CFaceStreamSet FaceStreamSet(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:179 */
	typedef struct CModelMeshDeltaSet<CModelMesh::Vertex_t> CVertexDeltaSet;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:696 */
	CVertexDeltaSet& VertexDeltaSet(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:697 */
	const CVertexDeltaSet& VertexDeltaSet(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:180 */
	typedef struct CModelMeshDeltaSet<CModelMesh::FaceVertex_t> CFaceVertexDeltaSet;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:699 */
	CFaceVertexDeltaSet& FaceVertexDeltaSet(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:700 */
	const CFaceVertexDeltaSet& FaceVertexDeltaSet(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:181 */
	typedef struct CModelMeshDeltaSet<CModelMesh::Face_t> CFaceDeltaSet;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:702 */
	CFaceDeltaSet& FaceDeltaSet(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:703 */
	const CFaceDeltaSet& FaceDeltaSet(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:705 */
	bool HasDeltaData(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:714 */
	int GetVertexComponentIndex(const CModelMesh* , VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:715 */
	int GetFaceVertexComponentIndex(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:716 */
	int GetEdgeComponentIndex(const CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:717 */
	int GetFaceComponentIndex(const CModelMesh* , FaceHandle_t);
	/* ../public/meshutils/modelmesh.h:724 */
	CModelMeshMetaData& MetaData(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:725 */
	const CModelMeshMetaData& MetaData(const CModelMesh* );
private:
	/* ../public/meshutils/modelmesh.h:741 */
	FaceVertexHandle_t GetFaceVertexForVertex(const CModelMesh* , FaceHandle_t, VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:749 */
	void GetEdgesConnectedToVertex(const CModelMesh* , VertexHandle_t, CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFunctor<C);
	/* ../public/meshutils/modelmesh.h:755 */
	int GetNumFacesConnectedToEdge(const CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:760 */
	VertexHandle_t GetVertexConnectedToFaceVertex(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:761 */
	FaceHandle_t GetFaceConnectedToFaceVertex(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:764 */
	EdgeHandle_t GetOutgoingEdgeConnectedToFaceVertex(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:768 */
	EdgeHandle_t GetIncomingEdgeConnectedToFaceVertex(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:771 */
	FaceVertexHandle_t GetNextFaceVertexInFace(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:774 */
	FaceVertexHandle_t GetPreviousFaceVertexInFace(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:780 */
	Vertex_t* GetVertex(CModelMesh* , VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:781 */
	const Vertex_t* GetVertex(const CModelMesh* , VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:782 */
	FaceVertex_t* GetFaceVertex(CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:783 */
	const FaceVertex_t* GetFaceVertex(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:784 */
	Edge_t* GetEdge(CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:785 */
	const Edge_t* GetEdge(const CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:786 */
	Face_t* GetFace(CModelMesh* , FaceHandle_t);
	/* ../public/meshutils/modelmesh.h:787 */
	const Face_t* GetFace(const CModelMesh* , FaceHandle_t);
	/* ../public/meshutils/modelmesh.h:792 */
	EdgeHandle_t FindOrCreateEdgeConnectingVertices(CModelMesh* , VertexHandle_t, VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:793 */
	void DetachFaceVertexFromVertex(CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:794 */
	void AttachFaceVertexToVertex(CModelMesh* , FaceVertexHandle_t, VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:795 */
	int FindMatchingFaceGroup(CModelMesh* , const FaceGroup_t& );
	/* ../public/meshutils/modelmesh.h:796 */
	void MergeFaceGroupsFromMesh(CModelMesh* , const CModelMesh& , const CUtlVector<int, CUtlMemory<int, int> >* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/meshutils/modelmesh.h:797 */
	void MergeBonesFromMesh(CModelMesh* , const CModelMesh& , const CUtlVector<int, CUtlMemory<int, int> >* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/meshutils/modelmesh.h:798 */
	bool RemoveFaceVertexFromFace(CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:799 */
	ReplaceVertexResult_t ReplaceVertexInFace(CModelMesh* , FaceHandle_t, VertexHandle_t, VertexHandle_t);
	CModelMeshComponentList<CModelMesh::Vertex_t> m_Vertices; /* 0 152 */
	CModelMeshComponentList<CModelMesh::FaceVertex_t> m_FaceVertices; /* 152 152 */
	CModelMeshComponentList<CModelMesh::Edge_t> m_Edges; /* 304 152 */
	CModelMeshComponentList<CModelMesh::Face_t> m_Faces; /* 456 152 */
	CUtlVector<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> > m_FaceGroups; /* 608 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_BoneNames; /* 640 32 */
	CModelMeshMetaData m_MetaData; /* 672 16 */
	/* ../public/meshutils/modelmesh.h:950 */
	void GetEdgesConnectedToFace<CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int> > >(const CModelMesh* , FaceHandle_t, CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
	/* ../public/meshutils/modelmesh.h:928 */
	void GetFaceVerticesConnectedToFace<CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > >(const CModelMesh* , FaceHandle_t, CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon);
	/* ../public/meshutils/modelmesh.h:906 */
	void GetVerticesConnectedToFace<CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > >(const CModelMesh* , FaceHandle_t, CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL);
	/* ../public/meshutils/modelmesh.h:1038 */
	int GetFacesConnectedToEdge<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > >(const CModelMesh* , EdgeHandle_t, CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
	/* ../public/meshutils/modelmesh.h:993 */
	void GetFaceVerticesConnectedToVertex<CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > >(const CModelMesh* , VertexHandle_t, CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon);
	/* ../public/meshutils/modelmesh.h:973 */
	void GetFacesConnectedToVertex<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > >(const CModelMesh* , VertexHandle_t, CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
	/* ../public/meshutils/modelmesh.h:950 */
	void GetEdgesConnectedToFace<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t> >(const CModelMesh* , FaceHandle_t, CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>* );
	/* ../public/meshutils/modelmesh.h:928 */
	void GetFaceVerticesConnectedToFace<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> >(const CModelMesh* , FaceHandle_t, CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>* );
	/* ../public/meshutils/modelmesh.h:973 */
	void GetFacesConnectedToVertex<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t> >(const CModelMesh* , VertexHandle_t, CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>* );
	/* ../public/meshutils/modelmesh.h:1038 */
	int GetFacesConnectedToEdge<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t> >(const CModelMesh* , EdgeHandle_t, CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>* );
	/* ../public/meshutils/modelmesh.h:993 */
	void GetFaceVerticesConnectedToVertex<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> >(const CModelMesh* , VertexHandle_t, CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>* );
	/* ../public/meshutils/modelmesh.h:1015 */
	void GetEdgesConnectedToVertex<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t> >(const CModelMesh* , VertexHandle_t, CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>* );
	void CModelMesh(class CModelMesh *); /* linkage=_ZN10CModelMeshC4Ev */
	void CModelMesh(class CModelMesh *, const class CModelMesh  &); /* linkage=_ZN10CModelMeshC4ERKS_ */
	/* <5fa7e6f> meshutils/modelmesh.cpp:52 */
	class CModelMesh & operator=(class CModelMesh *, const class CModelMesh  &); /* linkage=_ZN10CModelMeshaSERKS_ */
	void CopyFrom(class CModelMesh *, const class CModelMesh  &); /* linkage=_ZN10CModelMesh8CopyFromERKS_ */
	void RemoveAll(class CModelMesh *); /* linkage=_ZN10CModelMesh9RemoveAllEv */
	bool IsEmpty(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh7IsEmptyEv */
	bool CheckIntegrity(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh14CheckIntegrityEv */
	bool CanAppendMesh(const class CModelMesh  *, const class CModelMesh  &); /* linkage=_ZNK10CModelMesh13CanAppendMeshERKS_ */
	void FlipAllFaces(class CModelMesh *); /* linkage=_ZN10CModelMesh12FlipAllFacesEv */
	uint64 CalculateMeshHash(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh17CalculateMeshHashEv */
	int GetNumVertices(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh14GetNumVerticesEv */
	VertexHandle_t GetVertexHandleForIndex(const class CModelMesh  *, int); /* linkage=_ZNK10CModelMesh23GetVertexHandleForIndexEi */
	void GetAllVertices(const class CModelMesh  *, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL); /* linkage=_ZNK10CModelMesh14GetAllVerticesEP10CUtlVectorIN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS4_iEE */
	bool IsVertexInMesh(const class CModelMesh  *, VertexHandle_t); /* linkage=_ZNK10CModelMesh14IsVertexInMeshEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	VertexHandle_t AddVertex(class CModelMesh *); /* linkage=_ZN10CModelMesh9AddVertexEv */
	void AddVertices(class CModelMesh *, int, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL); /* linkage=_ZN10CModelMesh11AddVerticesEiP10CUtlVectorIN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS4_iEE */
	void RemoveVertex(class CModelMesh *, VertexHandle_t, enum FreeVertexRemovalMode_t); /* linkage=_ZN10CModelMesh12RemoveVertexEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tENS_23FreeVertexRemovalMode_tE */
	void RemoveVertices(class CModelMesh *, VertexHandle_t *, int, enum FreeVertexRemovalMode_t); /* linkage=_ZN10CModelMesh14RemoveVerticesEPN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tEiNS_23FreeVertexRemovalMode_tE */
	void SaveVerticesToKV3(const class CModelMesh  *, class KeyValues3 *); /* linkage=_ZNK10CModelMesh17SaveVerticesToKV3EP10KeyValues3 */
	bool LoadVerticesFromKV3(class CModelMesh *, const class KeyValues3  *, class CUtlString *); /* linkage=_ZN10CModelMesh19LoadVerticesFromKV3EPK10KeyValues3P10CUtlString */
	void SaveToKV3(const class CModelMesh  *, class KeyValues3 *); /* linkage=_ZNK10CModelMesh9SaveToKV3EP10KeyValues3 */
	bool LoadFromKV3(class CModelMesh *, const class KeyValues3  *, class CUtlString *); /* linkage=_ZN10CModelMesh11LoadFromKV3EPK10KeyValues3P10CUtlString */
	int GetNumFaceVertices(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh18GetNumFaceVerticesEv */
	FaceVertexHandle_t GetFaceVertexHandleForIndex(const class CModelMesh  *, int); /* linkage=_ZNK10CModelMesh27GetFaceVertexHandleForIndexEi */
	void GetAllFaceVertices(const class CModelMesh  *, class CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon); /* linkage=_ZNK10CModelMesh18GetAllFaceVerticesEP10CUtlVectorIN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS4_iEE */
	bool IsFaceVertexInMesh(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh18IsFaceVertexInMeshEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	int GetNumEdges(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh11GetNumEdgesEv */
	EdgeHandle_t GetEdgeHandleForIndex(const class CModelMesh  *, int); /* linkage=_ZNK10CModelMesh21GetEdgeHandleForIndexEi */
	void GetAllEdgeHandles(const class CModelMesh  *, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis); /* linkage=_ZNK10CModelMesh17GetAllEdgeHandlesEP10CUtlVectorIN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS4_iEE */
	bool IsEdgeInMesh(const class CModelMesh  *, EdgeHandle_t); /* linkage=_ZNK10CModelMesh12IsEdgeInMeshEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	EdgeHandle_t FindEdgeConnectingVertices(const class CModelMesh  *, VertexHandle_t, VertexHandle_t); /* linkage=_ZNK10CModelMesh26FindEdgeConnectingVerticesEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tES3_ */
	VertexHandle_t CollapseEdge(class CModelMesh *, EdgeHandle_t); /* linkage=_ZN10CModelMesh12CollapseEdgeEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	int GetNumFaces(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh11GetNumFacesEv */
	FaceHandle_t GetFaceHandleForIndex(const class CModelMesh  *, int); /* linkage=_ZNK10CModelMesh21GetFaceHandleForIndexEi */
	void GetAllFaces(const class CModelMesh  *, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis); /* linkage=_ZNK10CModelMesh11GetAllFacesEP10CUtlVectorIN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS4_iEE */
	bool IsFaceInMesh(const class CModelMesh  *, FaceHandle_t); /* linkage=_ZNK10CModelMesh12IsFaceInMeshEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa7bf7> meshutils/modelmesh.cpp:789 */
	FaceHandle_t AddFace(class CModelMesh *, const VertexHandle_t  *, int, int, class CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon); /* linkage=_ZN10CModelMesh7AddFaceEPKN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tEiiP10CUtlVectorINS0_INS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS9_iEE */
	void AddFaces(class CModelMesh *, int, const int  *, const VertexHandle_t  *, int, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis, class CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon); /* linkage=_ZN10CModelMesh8AddFacesEiPKiPKN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tEiP10CUtlVectorINS2_INS_6Face_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryISB_iEEPS8_INS2_INS_12FaceVertex_tEE32ComponentHandleWithListPointer_tESC_ISI_iEE */
	void RemoveFace(class CModelMesh *, FaceHandle_t, enum FreeVertexRemovalMode_t); /* linkage=_ZN10CModelMesh10RemoveFaceEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tENS_23FreeVertexRemovalMode_tE */
	void RemoveFaces(class CModelMesh *, const FaceHandle_t  *, int, enum FreeVertexRemovalMode_t); /* linkage=_ZN10CModelMesh11RemoveFacesEPKN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tEiNS_23FreeVertexRemovalMode_tE */
	int GetNumFaceGroups(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh16GetNumFaceGroupsEv */
	/* <5fa4d1e> meshutils/modelmesh.cpp:1021 */
	int AddFaceGroup(class CModelMesh *); /* linkage=_ZN10CModelMesh12AddFaceGroupEv */
	void RemoveFaceGroup(class CModelMesh *, int); /* linkage=_ZN10CModelMesh15RemoveFaceGroupEi */
	/* <5fa2e5a> meshutils/modelmesh.cpp:1059 */
	void SetFaceGroupMaterial(class CModelMesh *, int, const char  *); /* linkage=_ZN10CModelMesh20SetFaceGroupMaterialEiPKc */
	const char  * GetFaceGroupMaterial(const class CModelMesh  *, int); /* linkage=_ZNK10CModelMesh20GetFaceGroupMaterialEi */
	void FindFaceGroupsUsingMaterial(const class CModelMesh  *, const char  *, class CUtlVector<int, CUtlMemory<int, int> > *); /* linkage=_ZNK10CModelMesh27FindFaceGroupsUsingMaterialEPKcP10CUtlVectorIi10CUtlMemoryIiiEE */
	void AssignFaceToGroup(class CModelMesh *, FaceHandle_t, int); /* linkage=_ZN10CModelMesh17AssignFaceToGroupEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tEi */
	/* <5fa2ff5> meshutils/modelmesh.cpp:1111 */
	void AssignFacesToGroup(class CModelMesh *, FaceHandle_t *, int, int); /* linkage=_ZN10CModelMesh18AssignFacesToGroupEPN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tEii */
	void FindFacesInFaceGroup(const class CModelMesh  *, int, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis); /* linkage=_ZNK10CModelMesh20FindFacesInFaceGroupEiP10CUtlVectorIN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS4_iEE */
	bool HasFacesInFaceGroup(const class CModelMesh  *, int); /* linkage=_ZNK10CModelMesh19HasFacesInFaceGroupEi */
	void SetBoneNames(class CModelMesh *, const char  * *, int); /* linkage=_ZN10CModelMesh12SetBoneNamesEPPKci */
	void SetBoneNames(class CModelMesh *, class CUtlString *, int); /* linkage=_ZN10CModelMesh12SetBoneNamesEP10CUtlStringi */
	void GetBoneNames(const class CModelMesh  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *); /* linkage=_ZNK10CModelMesh12GetBoneNamesEP10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEE */
	/* <5fa3353> meshutils/modelmesh.cpp:1201 */
	int GetNumBones(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh11GetNumBonesEv */
	/* <5fa33ad> meshutils/modelmesh.cpp:1209 */
	const char  * GetBoneName(const class CModelMesh  *, int); /* linkage=_ZNK10CModelMesh11GetBoneNameEi */
	/* <5fa349f> meshutils/modelmesh.cpp:1220 */
	int FindBoneByName(const class CModelMesh  *, const char  *); /* linkage=_ZNK10CModelMesh14FindBoneByNameEPKc */
	/* <5fa52a0> meshutils/modelmesh.cpp:1238 */
	int FindOrCreateBone(class CModelMesh *, const char  *); /* linkage=_ZN10CModelMesh16FindOrCreateBoneEPKc */
	bool DoBoneListsMatch(const class CModelMesh  *, const class CModelMesh  &); /* linkage=_ZNK10CModelMesh16DoBoneListsMatchERKS_ */
	bool RemoveBoneName(class CModelMesh *, int); /* linkage=_ZN10CModelMesh14RemoveBoneNameEi */
	void RemoveBoneNames(class CModelMesh *, const int  *, int); /* linkage=_ZN10CModelMesh15RemoveBoneNamesEPKii */
	bool RenameBone(class CModelMesh *, const char  *, const char  *); /* linkage=_ZN10CModelMesh10RenameBoneEPKcS1_ */
	/* <5fa37c3> meshutils/modelmesh.cpp:1582 */
	class CVertex Vertex(class CModelMesh *, VertexHandle_t); /* linkage=_ZN10CModelMesh6VertexEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	class CVertex Vertex(const class CModelMesh  *, VertexHandle_t); /* linkage=_ZNK10CModelMesh6VertexEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa3841> meshutils/modelmesh.cpp:1598 */
	class CFaceVertex FaceVertex(class CModelMesh *, FaceVertexHandle_t); /* linkage=_ZN10CModelMesh10FaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	class CFaceVertex FaceVertex(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh10FaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa38bf> meshutils/modelmesh.cpp:1614 */
	class CEdge Edge(class CModelMesh *, EdgeHandle_t); /* linkage=_ZN10CModelMesh4EdgeEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	class CEdge Edge(const class CModelMesh  *, EdgeHandle_t); /* linkage=_ZNK10CModelMesh4EdgeEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa392b> meshutils/modelmesh.cpp:1630 */
	class CFace Face(class CModelMesh *, FaceHandle_t); /* linkage=_ZN10CModelMesh4FaceEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE */
	class CFace Face(const class CModelMesh  *, FaceHandle_t); /* linkage=_ZNK10CModelMesh4FaceEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa3629> meshutils/modelmesh.cpp:1550 */
	CVertexStreamSet VertexStreamSet(class CModelMesh *); /* linkage=_ZN10CModelMesh15VertexStreamSetEv */
	const CVertexStreamSet  VertexStreamSet(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh15VertexStreamSetEv */
	/* <5fa36f3> meshutils/modelmesh.cpp:1566 */
	CFaceVertexStreamSet FaceVertexStreamSet(class CModelMesh *); /* linkage=_ZN10CModelMesh19FaceVertexStreamSetEv */
	const CFaceVertexStreamSet  FaceVertexStreamSet(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh19FaceVertexStreamSetEv */
	CEdgeStreamSet EdgeStreamSet(class CModelMesh *); /* linkage=_ZN10CModelMesh13EdgeStreamSetEv */
	const CEdgeStreamSet  EdgeStreamSet(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh13EdgeStreamSetEv */
	/* <5fa3ab7> meshutils/modelmesh.cpp:1703 */
	CFaceStreamSet FaceStreamSet(class CModelMesh *); /* linkage=_ZN10CModelMesh13FaceStreamSetEv */
	const CFaceStreamSet  FaceStreamSet(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh13FaceStreamSetEv */
	/* <5fa39a9> meshutils/modelmesh.cpp:1646 */
	CVertexDeltaSet & VertexDeltaSet(class CModelMesh *); /* linkage=_ZN10CModelMesh14VertexDeltaSetEv */
	const CVertexDeltaSet  & VertexDeltaSet(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh14VertexDeltaSetEv */
	/* <5fa3a03> meshutils/modelmesh.cpp:1661 */
	CFaceVertexDeltaSet & FaceVertexDeltaSet(class CModelMesh *); /* linkage=_ZN10CModelMesh18FaceVertexDeltaSetEv */
	const CFaceVertexDeltaSet  & FaceVertexDeltaSet(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh18FaceVertexDeltaSetEv */
	/* <5fa3a5d> meshutils/modelmesh.cpp:1677 */
	CFaceDeltaSet & FaceDeltaSet(class CModelMesh *); /* linkage=_ZN10CModelMesh12FaceDeltaSetEv */
	const CFaceDeltaSet  & FaceDeltaSet(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh12FaceDeltaSetEv */
	bool HasDeltaData(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh12HasDeltaDataEv */
	int GetVertexComponentIndex(const class CModelMesh  *, VertexHandle_t); /* linkage=_ZNK10CModelMesh23GetVertexComponentIndexEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	int GetFaceVertexComponentIndex(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh27GetFaceVertexComponentIndexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	int GetEdgeComponentIndex(const class CModelMesh  *, EdgeHandle_t); /* linkage=_ZNK10CModelMesh21GetEdgeComponentIndexEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	int GetFaceComponentIndex(const class CModelMesh  *, FaceHandle_t); /* linkage=_ZNK10CModelMesh21GetFaceComponentIndexEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa3600> meshutils/modelmesh.cpp:1534 */
	class CModelMeshMetaData & MetaData(class CModelMesh *); /* linkage=_ZN10CModelMesh8MetaDataEv */
	const class CModelMeshMetaData  & MetaData(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh8MetaDataEv */
	FaceVertexHandle_t GetFaceVertexForVertex(const class CModelMesh  *, FaceHandle_t, VertexHandle_t); /* linkage=_ZNK10CModelMesh22GetFaceVertexForVertexEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tENS0_INS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	void GetEdgesConnectedToVertex(const class CModelMesh  *, VertexHandle_t, class CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFunctor<C); /* linkage=_ZNK10CModelMesh25GetEdgesConnectedToVertexEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tEP13CUtlHashtableINS0_INS_6Edge_tEE32ComponentHandleWithListPointer_tE7empty_t18DefaultHashFunctorIS7_E19DefaultEqualFunctorIS7_E11undefined_t10CUtlMemoryI18CUtlHashtableEntryIS7_S8_EiEE */
	/* <5fa5479> meshutils/modelmesh.cpp:546 */
	int GetNumFacesConnectedToEdge(const class CModelMesh  *, EdgeHandle_t); /* linkage=_ZNK10CModelMesh26GetNumFacesConnectedToEdgeEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa40fb> meshutils/modelmesh.cpp:1325 */
	VertexHandle_t GetVertexConnectedToFaceVertex(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh30GetVertexConnectedToFaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa4021> meshutils/modelmesh.cpp:1338 */
	FaceHandle_t GetFaceConnectedToFaceVertex(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh28GetFaceConnectedToFaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa25ad> meshutils/modelmesh.cpp:417 */
	EdgeHandle_t GetOutgoingEdgeConnectedToFaceVertex(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh36GetOutgoingEdgeConnectedToFaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa41d5> meshutils/modelmesh.cpp:429 */
	EdgeHandle_t GetIncomingEdgeConnectedToFaceVertex(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh36GetIncomingEdgeConnectedToFaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa2894> meshutils/modelmesh.cpp:445 */
	FaceVertexHandle_t GetNextFaceVertexInFace(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh23GetNextFaceVertexInFaceEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa2b7b> meshutils/modelmesh.cpp:457 */
	FaceVertexHandle_t GetPreviousFaceVertexInFace(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh27GetPreviousFaceVertexInFaceEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa3b87> meshutils/modelmesh.cpp:1719 */
	class Vertex_t * GetVertex(class CModelMesh *, VertexHandle_t); /* linkage=_ZN10CModelMesh9GetVertexEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	const class Vertex_t  * GetVertex(const class CModelMesh  *, VertexHandle_t); /* linkage=_ZNK10CModelMesh9GetVertexEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa3dd4> meshutils/modelmesh.cpp:1735 */
	class FaceVertex_t * GetFaceVertex(class CModelMesh *, FaceVertexHandle_t); /* linkage=_ZN10CModelMesh13GetFaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	const class FaceVertex_t  * GetFaceVertex(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh13GetFaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa4253> meshutils/modelmesh.cpp:1752 */
	class Edge_t * GetEdge(class CModelMesh *, EdgeHandle_t); /* linkage=_ZN10CModelMesh7GetEdgeEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	const class Edge_t  * GetEdge(const class CModelMesh  *, EdgeHandle_t); /* linkage=_ZNK10CModelMesh7GetEdgeEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa44a0> meshutils/modelmesh.cpp:1768 */
	class Face_t * GetFace(class CModelMesh *, FaceHandle_t); /* linkage=_ZN10CModelMesh7GetFaceEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE */
	const class Face_t  * GetFace(const class CModelMesh  *, FaceHandle_t); /* linkage=_ZNK10CModelMesh7GetFaceEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE */
	EdgeHandle_t FindOrCreateEdgeConnectingVertices(class CModelMesh *, VertexHandle_t, VertexHandle_t); /* linkage=_ZN10CModelMesh34FindOrCreateEdgeConnectingVerticesEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tES3_ */
	void DetachFaceVertexFromVertex(class CModelMesh *, FaceVertexHandle_t); /* linkage=_ZN10CModelMesh26DetachFaceVertexFromVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	void AttachFaceVertexToVertex(class CModelMesh *, FaceVertexHandle_t, VertexHandle_t); /* linkage=_ZN10CModelMesh24AttachFaceVertexToVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tENS0_INS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa46ed> meshutils/modelmesh.cpp:1839 */
	int FindMatchingFaceGroup(class CModelMesh *, const class FaceGroup_t  &); /* linkage=_ZN10CModelMesh21FindMatchingFaceGroupERKNS_11FaceGroup_tE */
	void MergeFaceGroupsFromMesh(class CModelMesh *, const class CModelMesh  &, const class CUtlVector<int, CUtlMemory<int, int> >  *, class CUtlVector<int, CUtlMemory<int, int> > *); /* linkage=_ZN10CModelMesh23MergeFaceGroupsFromMeshERKS_PK10CUtlVectorIi10CUtlMemoryIiiEEPS5_ */
	void MergeBonesFromMesh(class CModelMesh *, const class CModelMesh  &, const class CUtlVector<int, CUtlMemory<int, int> >  *, class CUtlVector<int, CUtlMemory<int, int> > *); /* linkage=_ZN10CModelMesh18MergeBonesFromMeshERKS_PK10CUtlVectorIi10CUtlMemoryIiiEEPS5_ */
	bool RemoveFaceVertexFromFace(class CModelMesh *, FaceVertexHandle_t); /* linkage=_ZN10CModelMesh24RemoveFaceVertexFromFaceEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	enum ReplaceVertexResult_t ReplaceVertexInFace(class CModelMesh *, FaceHandle_t, VertexHandle_t, VertexHandle_t); /* linkage=_ZN10CModelMesh19ReplaceVertexInFaceEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tENS0_INS_8Vertex_tEE32ComponentHandleWithListPointer_tES6_ */
	void GetEdgesConnectedToFace<CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int> > >(const class CModelMesh  *, FaceHandle_t, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis); /* linkage=_ZNK10CModelMesh23GetEdgesConnectedToFaceI10CUtlVectorIN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS5_iEEEEvNS2_INS_6Face_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetFaceVerticesConnectedToFace<CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > >(const class CModelMesh  *, FaceHandle_t, class CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon); /* linkage=_ZNK10CModelMesh30GetFaceVerticesConnectedToFaceI10CUtlVectorIN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS5_iEEEEvNS2_INS_6Face_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetVerticesConnectedToFace<CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > >(const class CModelMesh  *, FaceHandle_t, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL); /* linkage=_ZNK10CModelMesh26GetVerticesConnectedToFaceI10CUtlVectorIN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS5_iEEEEvNS2_INS_6Face_tEE32ComponentHandleWithListPointer_tEPT_ */
	int GetFacesConnectedToEdge<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > >(const class CModelMesh  *, EdgeHandle_t, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis); /* linkage=_ZNK10CModelMesh23GetFacesConnectedToEdgeI10CUtlVectorIN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS5_iEEEEiNS2_INS_6Edge_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetFaceVerticesConnectedToVertex<CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > >(const class CModelMesh  *, VertexHandle_t, class CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon); /* linkage=_ZNK10CModelMesh32GetFaceVerticesConnectedToVertexI10CUtlVectorIN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS5_iEEEEvNS2_INS_8Vertex_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetFacesConnectedToVertex<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > >(const class CModelMesh  *, VertexHandle_t, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis); /* linkage=_ZNK10CModelMesh25GetFacesConnectedToVertexI10CUtlVectorIN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS5_iEEEEvNS2_INS_8Vertex_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetEdgesConnectedToFace<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t> >(const class CModelMesh  *, FaceHandle_t, class CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t> *); /* linkage=_ZNK10CModelMesh23GetEdgesConnectedToFaceI24CUtlVectorMeshComponentsIN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tEEEEvNS2_INS_6Face_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetFaceVerticesConnectedToFace<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> >(const class CModelMesh  *, FaceHandle_t, class CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> *); /* linkage=_ZNK10CModelMesh30GetFaceVerticesConnectedToFaceI24CUtlVectorMeshComponentsIN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tEEEEvNS2_INS_6Face_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetFacesConnectedToVertex<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t> >(const class CModelMesh  *, VertexHandle_t, class CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t> *); /* linkage=_ZNK10CModelMesh25GetFacesConnectedToVertexI24CUtlVectorMeshComponentsIN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tEEEEvNS2_INS_8Vertex_tEE32ComponentHandleWithListPointer_tEPT_ */
	int GetFacesConnectedToEdge<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t> >(const class CModelMesh  *, EdgeHandle_t, class CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t> *); /* linkage=_ZNK10CModelMesh23GetFacesConnectedToEdgeI24CUtlVectorMeshComponentsIN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tEEEEiNS2_INS_6Edge_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetFaceVerticesConnectedToVertex<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> >(const class CModelMesh  *, VertexHandle_t, class CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> *); /* linkage=_ZNK10CModelMesh32GetFaceVerticesConnectedToVertexI24CUtlVectorMeshComponentsIN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tEEEEvNS2_INS_8Vertex_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetEdgesConnectedToVertex<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t> >(const class CModelMesh  *, VertexHandle_t, class CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t> *); /* linkage=_ZNK10CModelMesh25GetEdgesConnectedToVertexI24CUtlVectorMeshComponentsIN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tEEEEvNS2_INS_8Vertex_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetFaceVerticesConnectedToVertex<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 32> >(const class CModelMesh  *, VertexHandle_t, class CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 32> *); /* linkage=_ZNK10CModelMesh32GetFaceVerticesConnectedToVertexI23CUtlVectorFixedGrowableIN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tELm32EEEEvNS2_INS_8Vertex_tEE32ComponentHandleWithListPointer_tEPT_ */
};

// <06001730> ../public/meshutils/modelmesh.h:134
// member functions: 277
// member variables: 7
// static member variables: 17
// class size: 688
class CModelMesh {
	/* ../public/meshutils/modelmesh.h:240 */
	struct Vertex_t {
		FaceVertexHandle_t m_hFirstFaceVertex; /* 0 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:270 */
	struct FaceVertex_t {
		VertexHandle_t m_hVertex; /* 0 16 */
		FaceHandle_t m_hFace; /* 16 16 */
		EdgeHandle_t m_hEdge; /* 32 16 */
		FaceVertexHandle_t m_hNextFaceVertex; /* 48 16 */
		FaceVertexHandle_t m_hPrevFaceVertex; /* 64 16 */
		FaceVertexHandle_t m_hVertexListNext; /* 80 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:285 */
	struct Edge_t {
		VertexHandle_t m_hVertexA; /* 0 16 */
		VertexHandle_t m_hVertexB; /* 16 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:254 */
	struct Face_t {
		FaceVertexHandle_t m_hFirstFaceVertex; /* 0 16 */
		int m_nFaceGroupIndex; /* 16 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:159 */
	struct VertexStreamIndex_t : public CModelMeshStreamIndex<CModelMesh::Vertex_t> {
	public:
		/* class CModelMeshStreamIndex<CModelMesh::Vertex_t> <ancestor>; */ /* 0 4 */
		void VertexStreamIndex_t(VertexStreamIndex_t* , int);
		void VertexStreamIndex_t(VertexStreamIndex_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:160 */
	struct FaceVertexStreamIndex_t : public CModelMeshStreamIndex<CModelMesh::FaceVertex_t> {
	public:
		/* class CModelMeshStreamIndex<CModelMesh::FaceVertex_t> <ancestor>; */ /* 0 4 */
		void FaceVertexStreamIndex_t(FaceVertexStreamIndex_t* , int);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:161 */
	struct EdgeStreamIndex_t : public CModelMeshStreamIndex<CModelMesh::Edge_t> {
	public:
		/* class CModelMeshStreamIndex<CModelMesh::Edge_t> <ancestor>; */ /* 0 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:162 */
	struct FaceStreamIndex_t : public CModelMeshStreamIndex<CModelMesh::Face_t> {
	public:
		/* class CModelMeshStreamIndex<CModelMesh::Face_t> <ancestor>; */ /* 0 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:227 */
	enum FreeVertexRemovalMode_t {
		FREE_VERTICES_REMOVE = 0,
		FREE_VERTICES_LEAVE = 1,
	};
	/* ../public/meshutils/modelmesh.h:149 */
	typedef ComponentHandle_t FaceVertexHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:148 */
	typedef ComponentHandle_t VertexHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:151 */
	typedef ComponentHandle_t FaceHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:150 */
	typedef ComponentHandle_t EdgeHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:296 */
	struct FaceGroup_t {
		CUtlString m_MaterialName; /* 0 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:307 */
	class CVertex {
		/* ../public/meshutils/modelmesh.h:310 */
		void CVertex(CVertex* , CModelMesh* , VertexHandle_t);
		/* ../public/meshutils/modelmesh.h:312 */
		void GetFacesConnectedToVertex(const CVertex* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
		/* ../public/meshutils/modelmesh.h:313 */
		void GetFaceVerticesConnectedToVertex(const CVertex* , CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon);
		/* ../public/meshutils/modelmesh.h:314 */
		void GetEdgesConnectedToVertex(const CVertex* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
	private:
		CModelMesh & m_Mesh; /* 0 8 */
		VertexHandle_t m_hVertex; /* 8 16 */
		/* ../public/meshutils/modelmesh.h:1078 */
		bool SetValue<ModelMeshIntFloat_t>(CVertex* , VertexStreamIndex_t, const ModelMeshIntFloat_t& );
		/* ../public/meshutils/modelmesh.h:1088 */
		ModelMeshIntFloat_t GetValue<ModelMeshIntFloat_t>(const CVertex* , VertexStreamIndex_t);
		/* ../public/meshutils/modelmesh.h:1088 */
		Vector GetValue<Vector>(const CVertex* , VertexStreamIndex_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:332 */
	class CFaceVertex {
		/* ../public/meshutils/modelmesh.h:335 */
		void CFaceVertex(CFaceVertex* , CModelMesh* , FaceVertexHandle_t);
		/* ../public/meshutils/modelmesh.h:337 */
		VertexHandle_t GetVertexConnectedToFaceVertex(const CFaceVertex* );
		/* ../public/meshutils/modelmesh.h:338 */
		FaceHandle_t GetFaceConnectedToFaceVertex(const CFaceVertex* );
		/* ../public/meshutils/modelmesh.h:340 */
		EdgeHandle_t GetOutgoingEdge(const CFaceVertex* );
		/* ../public/meshutils/modelmesh.h:341 */
		EdgeHandle_t GetIncomingEdge(const CFaceVertex* );
		/* ../public/meshutils/modelmesh.h:343 */
		FaceVertexHandle_t GetNextFaceVertexInFace(const CFaceVertex* );
		/* ../public/meshutils/modelmesh.h:344 */
		FaceVertexHandle_t GetPreviousFaceVertexInFace(const CFaceVertex* );
	private:
		CModelMesh & m_Mesh; /* 0 8 */
		FaceVertexHandle_t m_hFaceVertex; /* 8 16 */
		/* ../public/meshutils/modelmesh.h:1098 */
		bool SetValue<Vector>(CFaceVertex* , FaceVertexStreamIndex_t, const Vector& );
		/* ../public/meshutils/modelmesh.h:1098 */
		bool SetValue<Vector4D>(CFaceVertex* , FaceVertexStreamIndex_t, const Vector4D& );
		/* ../public/meshutils/modelmesh.h:1108 */
		Vector2D GetValue<Vector2D>(const CFaceVertex* , FaceVertexStreamIndex_t);
		/* ../public/meshutils/modelmesh.h:1118 */
		Vector GetValue<Vector>(const CFaceVertex* , VertexStreamIndex_t);
		/* ../public/meshutils/modelmesh.h:1108 */
		Vector GetValue<Vector>(const CFaceVertex* , FaceVertexStreamIndex_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:366 */
	class CEdge {
		/* ../public/meshutils/modelmesh.h:369 */
		void CEdge(CEdge* , CModelMesh* , EdgeHandle_t);
		/* ../public/meshutils/modelmesh.h:371 */
		VertexHandle_t GetVertexA(const CEdge* );
		/* ../public/meshutils/modelmesh.h:372 */
		VertexHandle_t GetVertexB(const CEdge* );
		/* ../public/meshutils/modelmesh.h:373 */
		void GetConnectedFaces(const CEdge* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
	private:
		CModelMesh & m_Mesh; /* 0 8 */
		EdgeHandle_t m_hEdge; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:391 */
	class CFace {
		/* ../public/meshutils/modelmesh.h:394 */
		void CFace(CFace* , CModelMesh* , FaceHandle_t);
		/* ../public/meshutils/modelmesh.h:396 */
		int ComputeNumVertices(const CFace* );
		/* ../public/meshutils/modelmesh.h:397 */
		int GetFaceGroupIndex(const CFace* );
		/* ../public/meshutils/modelmesh.h:399 */
		void GetVertices(const CFace* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL);
		/* ../public/meshutils/modelmesh.h:400 */
		void GetFaceVertices(const CFace* , CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon);
		/* ../public/meshutils/modelmesh.h:401 */
		void GetEdges(const CFace* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
		/* ../public/meshutils/modelmesh.h:403 */
		FaceVertexHandle_t GetFaceVertexForVertex(const CFace* , VertexHandle_t);
	private:
		CModelMesh & m_Mesh; /* 0 8 */
		FaceHandle_t m_hFace; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	static const VertexHandle_t INVALID_VERTEX; /* 0 0 */
	static const FaceVertexHandle_t INVALID_FACE_VERTEX; /* 0 0 */
	static const EdgeHandle_t INVALID_EDGE; /* 0 0 */
	static const FaceHandle_t INVALID_FACE; /* 0 0 */
	static const struct VertexStreamIndex_t INVALID_VERTEX_STREAM; /* 0 0 */
	static const struct FaceVertexStreamIndex_t INVALID_FACE_VERTEX_STREAM; /* 0 0 */
	static const struct EdgeStreamIndex_t INVALID_EDGE_STREAM; /* 0 0 */
	static const struct FaceStreamIndex_t INVALID_FACE_STREAM; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:183 */
	typedef DeltaIndex_t VertexDeltaIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const VertexDeltaIndex_t INVALID_VERTEX_DELTA; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:184 */
	typedef DeltaIndex_t FaceVertexDeltaIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const FaceVertexDeltaIndex_t INVALID_FACE_VERTEX_DELTA; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:185 */
	typedef DeltaIndex_t EdgeDeltaIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const EdgeDeltaIndex_t INVALID_EDGE_DELTA; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:186 */
	typedef DeltaIndex_t FaceDeltaIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const FaceDeltaIndex_t INVALID_FACE_DELTA; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:193 */
	typedef StreamIndex_t VertexDeltaStreamIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const VertexDeltaStreamIndex_t INVALID_VERTEX_DELTA_STREAM; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:194 */
	typedef StreamIndex_t FaceVertexDeltaStreamIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const FaceVertexDeltaStreamIndex_t INVALID_FACE_VERTEX_DELTA_STREAM; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:195 */
	typedef StreamIndex_t EdgeDeltaStreamIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const EdgeDeltaStreamIndex_t INVALID_EDGE_DELTA_STREAM; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:196 */
	typedef StreamIndex_t FaceDeltaStreamIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const FaceDeltaStreamIndex_t INVALID_FACE_DELTA_STREAM; /* 0 0 */
	static const int INVALID_FACE_GROUP = 18446744073709551615; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:424 */
	void CModelMesh(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:425 */
	void CModelMesh(CModelMesh* , const CModelMesh& );
	/* ../public/meshutils/modelmesh.h:432 */
	CModelMesh& operator=(CModelMesh* , const CModelMesh& );
	/* ../public/meshutils/modelmesh.h:435 */
	void CopyFrom(CModelMesh* , const CModelMesh& );
	/* ../public/meshutils/modelmesh.h:438 */
	void RemoveAll(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:441 */
	bool IsEmpty(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:444 */
	bool CheckIntegrity(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:449 */
	bool CanAppendMesh(const CModelMesh* , const CModelMesh& );
	/* ../public/meshutils/modelmesh.h:453 */
	void FlipAllFaces(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:456 */
	uint64 CalculateMeshHash(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:464 */
	int GetNumVertices(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:467 */
	VertexHandle_t GetVertexHandleForIndex(const CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:470 */
	void GetAllVertices(const CModelMesh* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL);
	/* ../public/meshutils/modelmesh.h:473 */
	bool IsVertexInMesh(const CModelMesh* , VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:476 */
	VertexHandle_t AddVertex(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:480 */
	void AddVertices(CModelMesh* , int, CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL);
	/* ../public/meshutils/modelmesh.h:485 */
	void RemoveVertex(CModelMesh* , VertexHandle_t, FreeVertexRemovalMode_t);
	/* ../public/meshutils/modelmesh.h:488 */
	void RemoveVertices(CModelMesh* , VertexHandle_t* , int, FreeVertexRemovalMode_t);
	/* ../public/meshutils/modelmesh.h:491 */
	void SaveVerticesToKV3(const CModelMesh* , KeyValues3* );
	/* ../public/meshutils/modelmesh.h:492 */
	bool LoadVerticesFromKV3(CModelMesh* , const KeyValues3* , CUtlString* );
	/* ../public/meshutils/modelmesh.h:494 */
	void SaveToKV3(const CModelMesh* , KeyValues3* );
	/* ../public/meshutils/modelmesh.h:495 */
	bool LoadFromKV3(CModelMesh* , const KeyValues3* , CUtlString* );
	/* ../public/meshutils/modelmesh.h:503 */
	int GetNumFaceVertices(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:506 */
	FaceVertexHandle_t GetFaceVertexHandleForIndex(const CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:509 */
	void GetAllFaceVertices(const CModelMesh* , CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon);
	/* ../public/meshutils/modelmesh.h:512 */
	bool IsFaceVertexInMesh(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:521 */
	int GetNumEdges(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:524 */
	EdgeHandle_t GetEdgeHandleForIndex(const CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:527 */
	void GetAllEdgeHandles(const CModelMesh* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
	/* ../public/meshutils/modelmesh.h:530 */
	bool IsEdgeInMesh(const CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:534 */
	EdgeHandle_t FindEdgeConnectingVertices(const CModelMesh* , VertexHandle_t, VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:538 */
	VertexHandle_t CollapseEdge(CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:545 */
	int GetNumFaces(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:548 */
	FaceHandle_t GetFaceHandleForIndex(const CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:551 */
	void GetAllFaces(const CModelMesh* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
	/* ../public/meshutils/modelmesh.h:554 */
	bool IsFaceInMesh(const CModelMesh* , FaceHandle_t);
	/* ../public/meshutils/modelmesh.h:558 */
	FaceHandle_t AddFace(CModelMesh* , const VertexHandle_t* , int, int, CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon);
	/* ../public/meshutils/modelmesh.h:564 */
	void AddFaces(CModelMesh* , int, const int* , const VertexHandle_t* , int, CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis, CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon);
	/* ../public/meshutils/modelmesh.h:568 */
	void RemoveFace(CModelMesh* , FaceHandle_t, FreeVertexRemovalMode_t);
	/* ../public/meshutils/modelmesh.h:572 */
	void RemoveFaces(CModelMesh* , const FaceHandle_t* , int, FreeVertexRemovalMode_t);
	/* ../public/meshutils/modelmesh.h:584 */
	int GetNumFaceGroups(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:587 */
	int AddFaceGroup(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:590 */
	void RemoveFaceGroup(CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:593 */
	void SetFaceGroupMaterial(CModelMesh* , int, const char* );
	/* ../public/meshutils/modelmesh.h:596 */
	const char* GetFaceGroupMaterial(const CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:599 */
	void FindFaceGroupsUsingMaterial(const CModelMesh* , const char* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/meshutils/modelmesh.h:603 */
	void AssignFaceToGroup(CModelMesh* , FaceHandle_t, int);
	/* ../public/meshutils/modelmesh.h:606 */
	void AssignFacesToGroup(CModelMesh* , FaceHandle_t* , int, int);
	/* ../public/meshutils/modelmesh.h:609 */
	void FindFacesInFaceGroup(const CModelMesh* , int, CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
	/* ../public/meshutils/modelmesh.h:612 */
	bool HasFacesInFaceGroup(const CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:624 */
	void SetBoneNames(CModelMesh* , const char** , int);
	/* ../public/meshutils/modelmesh.h:625 */
	void SetBoneNames(CModelMesh* , CUtlString* , int);
	/* ../public/meshutils/modelmesh.h:628 */
	void GetBoneNames(const CModelMesh* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* );
	/* ../public/meshutils/modelmesh.h:631 */
	int GetNumBones(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:634 */
	const char* GetBoneName(const CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:638 */
	int FindBoneByName(const CModelMesh* , const char* );
	/* ../public/meshutils/modelmesh.h:641 */
	int FindOrCreateBone(CModelMesh* , const char* );
	/* ../public/meshutils/modelmesh.h:644 */
	bool DoBoneListsMatch(const CModelMesh* , const CModelMesh& );
	/* ../public/meshutils/modelmesh.h:647 */
	bool RemoveBoneName(CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:650 */
	void RemoveBoneNames(CModelMesh* , const int* , int);
	/* ../public/meshutils/modelmesh.h:653 */
	bool RenameBone(CModelMesh* , const char* , const char* );
	/* ../public/meshutils/modelmesh.h:660 */
	CVertex Vertex(CModelMesh* , VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:661 */
	CVertex Vertex(const CModelMesh* , VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:663 */
	CFaceVertex FaceVertex(CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:664 */
	CFaceVertex FaceVertex(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:666 */
	CEdge Edge(CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:667 */
	CEdge Edge(const CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:669 */
	CFace Face(CModelMesh* , FaceHandle_t);
	/* ../public/meshutils/modelmesh.h:670 */
	CFace Face(const CModelMesh* , FaceHandle_t);
	/* ../public/meshutils/modelmesh.h:169 */
	typedef struct CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t> CVertexStreamSet;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:678 */
	CVertexStreamSet VertexStreamSet(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:679 */
	const CVertexStreamSet VertexStreamSet(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:170 */
	typedef struct CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t> CFaceVertexStreamSet;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:681 */
	CFaceVertexStreamSet FaceVertexStreamSet(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:682 */
	const CFaceVertexStreamSet FaceVertexStreamSet(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:171 */
	typedef struct CModelMeshStreamSetAccessor<CModelMesh::Edge_t, CModelMesh::EdgeStreamIndex_t> CEdgeStreamSet;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:684 */
	CEdgeStreamSet EdgeStreamSet(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:685 */
	const CEdgeStreamSet EdgeStreamSet(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:172 */
	typedef struct CModelMeshStreamSetAccessor<CModelMesh::Face_t, CModelMesh::FaceStreamIndex_t> CFaceStreamSet;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:687 */
	CFaceStreamSet FaceStreamSet(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:688 */
	const CFaceStreamSet FaceStreamSet(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:179 */
	typedef struct CModelMeshDeltaSet<CModelMesh::Vertex_t> CVertexDeltaSet;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:696 */
	CVertexDeltaSet& VertexDeltaSet(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:697 */
	const CVertexDeltaSet& VertexDeltaSet(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:180 */
	typedef struct CModelMeshDeltaSet<CModelMesh::FaceVertex_t> CFaceVertexDeltaSet;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:699 */
	CFaceVertexDeltaSet& FaceVertexDeltaSet(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:700 */
	const CFaceVertexDeltaSet& FaceVertexDeltaSet(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:181 */
	typedef struct CModelMeshDeltaSet<CModelMesh::Face_t> CFaceDeltaSet;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:702 */
	CFaceDeltaSet& FaceDeltaSet(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:703 */
	const CFaceDeltaSet& FaceDeltaSet(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:705 */
	bool HasDeltaData(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:714 */
	int GetVertexComponentIndex(const CModelMesh* , VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:715 */
	int GetFaceVertexComponentIndex(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:716 */
	int GetEdgeComponentIndex(const CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:717 */
	int GetFaceComponentIndex(const CModelMesh* , FaceHandle_t);
	/* ../public/meshutils/modelmesh.h:724 */
	CModelMeshMetaData& MetaData(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:725 */
	const CModelMeshMetaData& MetaData(const CModelMesh* );
private:
	/* ../public/meshutils/modelmesh.h:741 */
	FaceVertexHandle_t GetFaceVertexForVertex(const CModelMesh* , FaceHandle_t, VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:749 */
	void GetEdgesConnectedToVertex(const CModelMesh* , VertexHandle_t, CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFunctor<C);
	/* ../public/meshutils/modelmesh.h:755 */
	int GetNumFacesConnectedToEdge(const CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:760 */
	VertexHandle_t GetVertexConnectedToFaceVertex(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:761 */
	FaceHandle_t GetFaceConnectedToFaceVertex(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:764 */
	EdgeHandle_t GetOutgoingEdgeConnectedToFaceVertex(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:768 */
	EdgeHandle_t GetIncomingEdgeConnectedToFaceVertex(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:771 */
	FaceVertexHandle_t GetNextFaceVertexInFace(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:774 */
	FaceVertexHandle_t GetPreviousFaceVertexInFace(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:780 */
	Vertex_t* GetVertex(CModelMesh* , VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:781 */
	const Vertex_t* GetVertex(const CModelMesh* , VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:782 */
	FaceVertex_t* GetFaceVertex(CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:783 */
	const FaceVertex_t* GetFaceVertex(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:784 */
	Edge_t* GetEdge(CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:785 */
	const Edge_t* GetEdge(const CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:786 */
	Face_t* GetFace(CModelMesh* , FaceHandle_t);
	/* ../public/meshutils/modelmesh.h:787 */
	const Face_t* GetFace(const CModelMesh* , FaceHandle_t);
	/* ../public/meshutils/modelmesh.h:792 */
	EdgeHandle_t FindOrCreateEdgeConnectingVertices(CModelMesh* , VertexHandle_t, VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:793 */
	void DetachFaceVertexFromVertex(CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:794 */
	void AttachFaceVertexToVertex(CModelMesh* , FaceVertexHandle_t, VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:795 */
	int FindMatchingFaceGroup(CModelMesh* , const FaceGroup_t& );
	/* ../public/meshutils/modelmesh.h:796 */
	void MergeFaceGroupsFromMesh(CModelMesh* , const CModelMesh& , const CUtlVector<int, CUtlMemory<int, int> >* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/meshutils/modelmesh.h:797 */
	void MergeBonesFromMesh(CModelMesh* , const CModelMesh& , const CUtlVector<int, CUtlMemory<int, int> >* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/meshutils/modelmesh.h:798 */
	bool RemoveFaceVertexFromFace(CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:799 */
	ReplaceVertexResult_t ReplaceVertexInFace(CModelMesh* , FaceHandle_t, VertexHandle_t, VertexHandle_t);
	CModelMeshComponentList<CModelMesh::Vertex_t> m_Vertices; /* 0 152 */
	CModelMeshComponentList<CModelMesh::FaceVertex_t> m_FaceVertices; /* 152 152 */
	CModelMeshComponentList<CModelMesh::Edge_t> m_Edges; /* 304 152 */
	CModelMeshComponentList<CModelMesh::Face_t> m_Faces; /* 456 152 */
	CUtlVector<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> > m_FaceGroups; /* 608 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_BoneNames; /* 640 32 */
	CModelMeshMetaData m_MetaData; /* 672 16 */
	/* ../public/meshutils/modelmesh.h:993 */
	void GetFaceVerticesConnectedToVertex<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 32> >(const CModelMesh* , VertexHandle_t, CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 32>* );
	void CModelMesh(class CModelMesh *); /* linkage=_ZN10CModelMeshC4Ev */
	void CModelMesh(class CModelMesh *, const class CModelMesh  &); /* linkage=_ZN10CModelMeshC4ERKS_ */
	/* <5fa7e6f> meshutils/modelmesh.cpp:52 */
	class CModelMesh & operator=(class CModelMesh *, const class CModelMesh  &); /* linkage=_ZN10CModelMeshaSERKS_ */
	void CopyFrom(class CModelMesh *, const class CModelMesh  &); /* linkage=_ZN10CModelMesh8CopyFromERKS_ */
	void RemoveAll(class CModelMesh *); /* linkage=_ZN10CModelMesh9RemoveAllEv */
	bool IsEmpty(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh7IsEmptyEv */
	bool CheckIntegrity(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh14CheckIntegrityEv */
	bool CanAppendMesh(const class CModelMesh  *, const class CModelMesh  &); /* linkage=_ZNK10CModelMesh13CanAppendMeshERKS_ */
	void FlipAllFaces(class CModelMesh *); /* linkage=_ZN10CModelMesh12FlipAllFacesEv */
	uint64 CalculateMeshHash(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh17CalculateMeshHashEv */
	int GetNumVertices(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh14GetNumVerticesEv */
	VertexHandle_t GetVertexHandleForIndex(const class CModelMesh  *, int); /* linkage=_ZNK10CModelMesh23GetVertexHandleForIndexEi */
	void GetAllVertices(const class CModelMesh  *, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL); /* linkage=_ZNK10CModelMesh14GetAllVerticesEP10CUtlVectorIN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS4_iEE */
	bool IsVertexInMesh(const class CModelMesh  *, VertexHandle_t); /* linkage=_ZNK10CModelMesh14IsVertexInMeshEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	VertexHandle_t AddVertex(class CModelMesh *); /* linkage=_ZN10CModelMesh9AddVertexEv */
	void AddVertices(class CModelMesh *, int, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL); /* linkage=_ZN10CModelMesh11AddVerticesEiP10CUtlVectorIN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS4_iEE */
	void RemoveVertex(class CModelMesh *, VertexHandle_t, enum FreeVertexRemovalMode_t); /* linkage=_ZN10CModelMesh12RemoveVertexEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tENS_23FreeVertexRemovalMode_tE */
	void RemoveVertices(class CModelMesh *, VertexHandle_t *, int, enum FreeVertexRemovalMode_t); /* linkage=_ZN10CModelMesh14RemoveVerticesEPN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tEiNS_23FreeVertexRemovalMode_tE */
	void SaveVerticesToKV3(const class CModelMesh  *, class KeyValues3 *); /* linkage=_ZNK10CModelMesh17SaveVerticesToKV3EP10KeyValues3 */
	bool LoadVerticesFromKV3(class CModelMesh *, const class KeyValues3  *, class CUtlString *); /* linkage=_ZN10CModelMesh19LoadVerticesFromKV3EPK10KeyValues3P10CUtlString */
	void SaveToKV3(const class CModelMesh  *, class KeyValues3 *); /* linkage=_ZNK10CModelMesh9SaveToKV3EP10KeyValues3 */
	bool LoadFromKV3(class CModelMesh *, const class KeyValues3  *, class CUtlString *); /* linkage=_ZN10CModelMesh11LoadFromKV3EPK10KeyValues3P10CUtlString */
	int GetNumFaceVertices(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh18GetNumFaceVerticesEv */
	FaceVertexHandle_t GetFaceVertexHandleForIndex(const class CModelMesh  *, int); /* linkage=_ZNK10CModelMesh27GetFaceVertexHandleForIndexEi */
	void GetAllFaceVertices(const class CModelMesh  *, class CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon); /* linkage=_ZNK10CModelMesh18GetAllFaceVerticesEP10CUtlVectorIN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS4_iEE */
	bool IsFaceVertexInMesh(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh18IsFaceVertexInMeshEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	int GetNumEdges(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh11GetNumEdgesEv */
	EdgeHandle_t GetEdgeHandleForIndex(const class CModelMesh  *, int); /* linkage=_ZNK10CModelMesh21GetEdgeHandleForIndexEi */
	void GetAllEdgeHandles(const class CModelMesh  *, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis); /* linkage=_ZNK10CModelMesh17GetAllEdgeHandlesEP10CUtlVectorIN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS4_iEE */
	bool IsEdgeInMesh(const class CModelMesh  *, EdgeHandle_t); /* linkage=_ZNK10CModelMesh12IsEdgeInMeshEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	EdgeHandle_t FindEdgeConnectingVertices(const class CModelMesh  *, VertexHandle_t, VertexHandle_t); /* linkage=_ZNK10CModelMesh26FindEdgeConnectingVerticesEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tES3_ */
	VertexHandle_t CollapseEdge(class CModelMesh *, EdgeHandle_t); /* linkage=_ZN10CModelMesh12CollapseEdgeEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	int GetNumFaces(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh11GetNumFacesEv */
	FaceHandle_t GetFaceHandleForIndex(const class CModelMesh  *, int); /* linkage=_ZNK10CModelMesh21GetFaceHandleForIndexEi */
	void GetAllFaces(const class CModelMesh  *, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis); /* linkage=_ZNK10CModelMesh11GetAllFacesEP10CUtlVectorIN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS4_iEE */
	bool IsFaceInMesh(const class CModelMesh  *, FaceHandle_t); /* linkage=_ZNK10CModelMesh12IsFaceInMeshEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa7bf7> meshutils/modelmesh.cpp:789 */
	FaceHandle_t AddFace(class CModelMesh *, const VertexHandle_t  *, int, int, class CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon); /* linkage=_ZN10CModelMesh7AddFaceEPKN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tEiiP10CUtlVectorINS0_INS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS9_iEE */
	void AddFaces(class CModelMesh *, int, const int  *, const VertexHandle_t  *, int, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis, class CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon); /* linkage=_ZN10CModelMesh8AddFacesEiPKiPKN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tEiP10CUtlVectorINS2_INS_6Face_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryISB_iEEPS8_INS2_INS_12FaceVertex_tEE32ComponentHandleWithListPointer_tESC_ISI_iEE */
	void RemoveFace(class CModelMesh *, FaceHandle_t, enum FreeVertexRemovalMode_t); /* linkage=_ZN10CModelMesh10RemoveFaceEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tENS_23FreeVertexRemovalMode_tE */
	void RemoveFaces(class CModelMesh *, const FaceHandle_t  *, int, enum FreeVertexRemovalMode_t); /* linkage=_ZN10CModelMesh11RemoveFacesEPKN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tEiNS_23FreeVertexRemovalMode_tE */
	int GetNumFaceGroups(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh16GetNumFaceGroupsEv */
	/* <5fa4d1e> meshutils/modelmesh.cpp:1021 */
	int AddFaceGroup(class CModelMesh *); /* linkage=_ZN10CModelMesh12AddFaceGroupEv */
	void RemoveFaceGroup(class CModelMesh *, int); /* linkage=_ZN10CModelMesh15RemoveFaceGroupEi */
	/* <5fa2e5a> meshutils/modelmesh.cpp:1059 */
	void SetFaceGroupMaterial(class CModelMesh *, int, const char  *); /* linkage=_ZN10CModelMesh20SetFaceGroupMaterialEiPKc */
	const char  * GetFaceGroupMaterial(const class CModelMesh  *, int); /* linkage=_ZNK10CModelMesh20GetFaceGroupMaterialEi */
	void FindFaceGroupsUsingMaterial(const class CModelMesh  *, const char  *, class CUtlVector<int, CUtlMemory<int, int> > *); /* linkage=_ZNK10CModelMesh27FindFaceGroupsUsingMaterialEPKcP10CUtlVectorIi10CUtlMemoryIiiEE */
	void AssignFaceToGroup(class CModelMesh *, FaceHandle_t, int); /* linkage=_ZN10CModelMesh17AssignFaceToGroupEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tEi */
	/* <5fa2ff5> meshutils/modelmesh.cpp:1111 */
	void AssignFacesToGroup(class CModelMesh *, FaceHandle_t *, int, int); /* linkage=_ZN10CModelMesh18AssignFacesToGroupEPN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tEii */
	void FindFacesInFaceGroup(const class CModelMesh  *, int, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis); /* linkage=_ZNK10CModelMesh20FindFacesInFaceGroupEiP10CUtlVectorIN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS4_iEE */
	bool HasFacesInFaceGroup(const class CModelMesh  *, int); /* linkage=_ZNK10CModelMesh19HasFacesInFaceGroupEi */
	void SetBoneNames(class CModelMesh *, const char  * *, int); /* linkage=_ZN10CModelMesh12SetBoneNamesEPPKci */
	void SetBoneNames(class CModelMesh *, class CUtlString *, int); /* linkage=_ZN10CModelMesh12SetBoneNamesEP10CUtlStringi */
	void GetBoneNames(const class CModelMesh  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *); /* linkage=_ZNK10CModelMesh12GetBoneNamesEP10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEE */
	/* <5fa3353> meshutils/modelmesh.cpp:1201 */
	int GetNumBones(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh11GetNumBonesEv */
	/* <5fa33ad> meshutils/modelmesh.cpp:1209 */
	const char  * GetBoneName(const class CModelMesh  *, int); /* linkage=_ZNK10CModelMesh11GetBoneNameEi */
	/* <5fa349f> meshutils/modelmesh.cpp:1220 */
	int FindBoneByName(const class CModelMesh  *, const char  *); /* linkage=_ZNK10CModelMesh14FindBoneByNameEPKc */
	/* <5fa52a0> meshutils/modelmesh.cpp:1238 */
	int FindOrCreateBone(class CModelMesh *, const char  *); /* linkage=_ZN10CModelMesh16FindOrCreateBoneEPKc */
	bool DoBoneListsMatch(const class CModelMesh  *, const class CModelMesh  &); /* linkage=_ZNK10CModelMesh16DoBoneListsMatchERKS_ */
	bool RemoveBoneName(class CModelMesh *, int); /* linkage=_ZN10CModelMesh14RemoveBoneNameEi */
	void RemoveBoneNames(class CModelMesh *, const int  *, int); /* linkage=_ZN10CModelMesh15RemoveBoneNamesEPKii */
	bool RenameBone(class CModelMesh *, const char  *, const char  *); /* linkage=_ZN10CModelMesh10RenameBoneEPKcS1_ */
	/* <5fa37c3> meshutils/modelmesh.cpp:1582 */
	class CVertex Vertex(class CModelMesh *, VertexHandle_t); /* linkage=_ZN10CModelMesh6VertexEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	class CVertex Vertex(const class CModelMesh  *, VertexHandle_t); /* linkage=_ZNK10CModelMesh6VertexEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa3841> meshutils/modelmesh.cpp:1598 */
	class CFaceVertex FaceVertex(class CModelMesh *, FaceVertexHandle_t); /* linkage=_ZN10CModelMesh10FaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	class CFaceVertex FaceVertex(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh10FaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa38bf> meshutils/modelmesh.cpp:1614 */
	class CEdge Edge(class CModelMesh *, EdgeHandle_t); /* linkage=_ZN10CModelMesh4EdgeEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	class CEdge Edge(const class CModelMesh  *, EdgeHandle_t); /* linkage=_ZNK10CModelMesh4EdgeEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa392b> meshutils/modelmesh.cpp:1630 */
	class CFace Face(class CModelMesh *, FaceHandle_t); /* linkage=_ZN10CModelMesh4FaceEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE */
	class CFace Face(const class CModelMesh  *, FaceHandle_t); /* linkage=_ZNK10CModelMesh4FaceEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa3629> meshutils/modelmesh.cpp:1550 */
	CVertexStreamSet VertexStreamSet(class CModelMesh *); /* linkage=_ZN10CModelMesh15VertexStreamSetEv */
	const CVertexStreamSet  VertexStreamSet(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh15VertexStreamSetEv */
	/* <5fa36f3> meshutils/modelmesh.cpp:1566 */
	CFaceVertexStreamSet FaceVertexStreamSet(class CModelMesh *); /* linkage=_ZN10CModelMesh19FaceVertexStreamSetEv */
	const CFaceVertexStreamSet  FaceVertexStreamSet(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh19FaceVertexStreamSetEv */
	CEdgeStreamSet EdgeStreamSet(class CModelMesh *); /* linkage=_ZN10CModelMesh13EdgeStreamSetEv */
	const CEdgeStreamSet  EdgeStreamSet(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh13EdgeStreamSetEv */
	/* <5fa3ab7> meshutils/modelmesh.cpp:1703 */
	CFaceStreamSet FaceStreamSet(class CModelMesh *); /* linkage=_ZN10CModelMesh13FaceStreamSetEv */
	const CFaceStreamSet  FaceStreamSet(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh13FaceStreamSetEv */
	/* <5fa39a9> meshutils/modelmesh.cpp:1646 */
	CVertexDeltaSet & VertexDeltaSet(class CModelMesh *); /* linkage=_ZN10CModelMesh14VertexDeltaSetEv */
	const CVertexDeltaSet  & VertexDeltaSet(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh14VertexDeltaSetEv */
	/* <5fa3a03> meshutils/modelmesh.cpp:1661 */
	CFaceVertexDeltaSet & FaceVertexDeltaSet(class CModelMesh *); /* linkage=_ZN10CModelMesh18FaceVertexDeltaSetEv */
	const CFaceVertexDeltaSet  & FaceVertexDeltaSet(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh18FaceVertexDeltaSetEv */
	/* <5fa3a5d> meshutils/modelmesh.cpp:1677 */
	CFaceDeltaSet & FaceDeltaSet(class CModelMesh *); /* linkage=_ZN10CModelMesh12FaceDeltaSetEv */
	const CFaceDeltaSet  & FaceDeltaSet(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh12FaceDeltaSetEv */
	bool HasDeltaData(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh12HasDeltaDataEv */
	int GetVertexComponentIndex(const class CModelMesh  *, VertexHandle_t); /* linkage=_ZNK10CModelMesh23GetVertexComponentIndexEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	int GetFaceVertexComponentIndex(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh27GetFaceVertexComponentIndexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	int GetEdgeComponentIndex(const class CModelMesh  *, EdgeHandle_t); /* linkage=_ZNK10CModelMesh21GetEdgeComponentIndexEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	int GetFaceComponentIndex(const class CModelMesh  *, FaceHandle_t); /* linkage=_ZNK10CModelMesh21GetFaceComponentIndexEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa3600> meshutils/modelmesh.cpp:1534 */
	class CModelMeshMetaData & MetaData(class CModelMesh *); /* linkage=_ZN10CModelMesh8MetaDataEv */
	const class CModelMeshMetaData  & MetaData(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh8MetaDataEv */
	FaceVertexHandle_t GetFaceVertexForVertex(const class CModelMesh  *, FaceHandle_t, VertexHandle_t); /* linkage=_ZNK10CModelMesh22GetFaceVertexForVertexEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tENS0_INS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	void GetEdgesConnectedToVertex(const class CModelMesh  *, VertexHandle_t, class CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFunctor<C); /* linkage=_ZNK10CModelMesh25GetEdgesConnectedToVertexEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tEP13CUtlHashtableINS0_INS_6Edge_tEE32ComponentHandleWithListPointer_tE7empty_t18DefaultHashFunctorIS7_E19DefaultEqualFunctorIS7_E11undefined_t10CUtlMemoryI18CUtlHashtableEntryIS7_S8_EiEE */
	/* <5fa5479> meshutils/modelmesh.cpp:546 */
	int GetNumFacesConnectedToEdge(const class CModelMesh  *, EdgeHandle_t); /* linkage=_ZNK10CModelMesh26GetNumFacesConnectedToEdgeEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa40fb> meshutils/modelmesh.cpp:1325 */
	VertexHandle_t GetVertexConnectedToFaceVertex(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh30GetVertexConnectedToFaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa4021> meshutils/modelmesh.cpp:1338 */
	FaceHandle_t GetFaceConnectedToFaceVertex(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh28GetFaceConnectedToFaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa25ad> meshutils/modelmesh.cpp:417 */
	EdgeHandle_t GetOutgoingEdgeConnectedToFaceVertex(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh36GetOutgoingEdgeConnectedToFaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa41d5> meshutils/modelmesh.cpp:429 */
	EdgeHandle_t GetIncomingEdgeConnectedToFaceVertex(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh36GetIncomingEdgeConnectedToFaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa2894> meshutils/modelmesh.cpp:445 */
	FaceVertexHandle_t GetNextFaceVertexInFace(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh23GetNextFaceVertexInFaceEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa2b7b> meshutils/modelmesh.cpp:457 */
	FaceVertexHandle_t GetPreviousFaceVertexInFace(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh27GetPreviousFaceVertexInFaceEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa3b87> meshutils/modelmesh.cpp:1719 */
	class Vertex_t * GetVertex(class CModelMesh *, VertexHandle_t); /* linkage=_ZN10CModelMesh9GetVertexEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	const class Vertex_t  * GetVertex(const class CModelMesh  *, VertexHandle_t); /* linkage=_ZNK10CModelMesh9GetVertexEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa3dd4> meshutils/modelmesh.cpp:1735 */
	class FaceVertex_t * GetFaceVertex(class CModelMesh *, FaceVertexHandle_t); /* linkage=_ZN10CModelMesh13GetFaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	const class FaceVertex_t  * GetFaceVertex(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh13GetFaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa4253> meshutils/modelmesh.cpp:1752 */
	class Edge_t * GetEdge(class CModelMesh *, EdgeHandle_t); /* linkage=_ZN10CModelMesh7GetEdgeEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	const class Edge_t  * GetEdge(const class CModelMesh  *, EdgeHandle_t); /* linkage=_ZNK10CModelMesh7GetEdgeEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa44a0> meshutils/modelmesh.cpp:1768 */
	class Face_t * GetFace(class CModelMesh *, FaceHandle_t); /* linkage=_ZN10CModelMesh7GetFaceEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE */
	const class Face_t  * GetFace(const class CModelMesh  *, FaceHandle_t); /* linkage=_ZNK10CModelMesh7GetFaceEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE */
	EdgeHandle_t FindOrCreateEdgeConnectingVertices(class CModelMesh *, VertexHandle_t, VertexHandle_t); /* linkage=_ZN10CModelMesh34FindOrCreateEdgeConnectingVerticesEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tES3_ */
	void DetachFaceVertexFromVertex(class CModelMesh *, FaceVertexHandle_t); /* linkage=_ZN10CModelMesh26DetachFaceVertexFromVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	void AttachFaceVertexToVertex(class CModelMesh *, FaceVertexHandle_t, VertexHandle_t); /* linkage=_ZN10CModelMesh24AttachFaceVertexToVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tENS0_INS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa46ed> meshutils/modelmesh.cpp:1839 */
	int FindMatchingFaceGroup(class CModelMesh *, const class FaceGroup_t  &); /* linkage=_ZN10CModelMesh21FindMatchingFaceGroupERKNS_11FaceGroup_tE */
	void MergeFaceGroupsFromMesh(class CModelMesh *, const class CModelMesh  &, const class CUtlVector<int, CUtlMemory<int, int> >  *, class CUtlVector<int, CUtlMemory<int, int> > *); /* linkage=_ZN10CModelMesh23MergeFaceGroupsFromMeshERKS_PK10CUtlVectorIi10CUtlMemoryIiiEEPS5_ */
	void MergeBonesFromMesh(class CModelMesh *, const class CModelMesh  &, const class CUtlVector<int, CUtlMemory<int, int> >  *, class CUtlVector<int, CUtlMemory<int, int> > *); /* linkage=_ZN10CModelMesh18MergeBonesFromMeshERKS_PK10CUtlVectorIi10CUtlMemoryIiiEEPS5_ */
	bool RemoveFaceVertexFromFace(class CModelMesh *, FaceVertexHandle_t); /* linkage=_ZN10CModelMesh24RemoveFaceVertexFromFaceEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	enum ReplaceVertexResult_t ReplaceVertexInFace(class CModelMesh *, FaceHandle_t, VertexHandle_t, VertexHandle_t); /* linkage=_ZN10CModelMesh19ReplaceVertexInFaceEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tENS0_INS_8Vertex_tEE32ComponentHandleWithListPointer_tES6_ */
	void GetEdgesConnectedToFace<CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int> > >(const class CModelMesh  *, FaceHandle_t, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis); /* linkage=_ZNK10CModelMesh23GetEdgesConnectedToFaceI10CUtlVectorIN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS5_iEEEEvNS2_INS_6Face_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetFaceVerticesConnectedToFace<CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > >(const class CModelMesh  *, FaceHandle_t, class CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon); /* linkage=_ZNK10CModelMesh30GetFaceVerticesConnectedToFaceI10CUtlVectorIN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS5_iEEEEvNS2_INS_6Face_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetVerticesConnectedToFace<CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > >(const class CModelMesh  *, FaceHandle_t, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL); /* linkage=_ZNK10CModelMesh26GetVerticesConnectedToFaceI10CUtlVectorIN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS5_iEEEEvNS2_INS_6Face_tEE32ComponentHandleWithListPointer_tEPT_ */
	int GetFacesConnectedToEdge<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > >(const class CModelMesh  *, EdgeHandle_t, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis); /* linkage=_ZNK10CModelMesh23GetFacesConnectedToEdgeI10CUtlVectorIN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS5_iEEEEiNS2_INS_6Edge_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetFaceVerticesConnectedToVertex<CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > >(const class CModelMesh  *, VertexHandle_t, class CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon); /* linkage=_ZNK10CModelMesh32GetFaceVerticesConnectedToVertexI10CUtlVectorIN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS5_iEEEEvNS2_INS_8Vertex_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetFacesConnectedToVertex<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > >(const class CModelMesh  *, VertexHandle_t, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis); /* linkage=_ZNK10CModelMesh25GetFacesConnectedToVertexI10CUtlVectorIN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS5_iEEEEvNS2_INS_8Vertex_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetEdgesConnectedToFace<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t> >(const class CModelMesh  *, FaceHandle_t, class CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t> *); /* linkage=_ZNK10CModelMesh23GetEdgesConnectedToFaceI24CUtlVectorMeshComponentsIN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tEEEEvNS2_INS_6Face_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetFaceVerticesConnectedToFace<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> >(const class CModelMesh  *, FaceHandle_t, class CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> *); /* linkage=_ZNK10CModelMesh30GetFaceVerticesConnectedToFaceI24CUtlVectorMeshComponentsIN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tEEEEvNS2_INS_6Face_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetFacesConnectedToVertex<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t> >(const class CModelMesh  *, VertexHandle_t, class CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t> *); /* linkage=_ZNK10CModelMesh25GetFacesConnectedToVertexI24CUtlVectorMeshComponentsIN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tEEEEvNS2_INS_8Vertex_tEE32ComponentHandleWithListPointer_tEPT_ */
	int GetFacesConnectedToEdge<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t> >(const class CModelMesh  *, EdgeHandle_t, class CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t> *); /* linkage=_ZNK10CModelMesh23GetFacesConnectedToEdgeI24CUtlVectorMeshComponentsIN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tEEEEiNS2_INS_6Edge_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetFaceVerticesConnectedToVertex<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> >(const class CModelMesh  *, VertexHandle_t, class CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> *); /* linkage=_ZNK10CModelMesh32GetFaceVerticesConnectedToVertexI24CUtlVectorMeshComponentsIN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tEEEEvNS2_INS_8Vertex_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetEdgesConnectedToVertex<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t> >(const class CModelMesh  *, VertexHandle_t, class CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t> *); /* linkage=_ZNK10CModelMesh25GetEdgesConnectedToVertexI24CUtlVectorMeshComponentsIN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tEEEEvNS2_INS_8Vertex_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetFaceVerticesConnectedToVertex<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 32> >(const class CModelMesh  *, VertexHandle_t, class CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 32> *); /* linkage=_ZNK10CModelMesh32GetFaceVerticesConnectedToVertexI23CUtlVectorFixedGrowableIN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tELm32EEEEvNS2_INS_8Vertex_tEE32ComponentHandleWithListPointer_tEPT_ */
};

// <061B3995> ../public/meshutils/modelmesh.h:134
// member functions: 273
// member variables: 7
// static member variables: 17
// class size: 688
class CModelMesh {
	/* ../public/meshutils/modelmesh.h:240 */
	struct Vertex_t {
		FaceVertexHandle_t m_hFirstFaceVertex; /* 0 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:270 */
	struct FaceVertex_t {
		VertexHandle_t m_hVertex; /* 0 16 */
		FaceHandle_t m_hFace; /* 16 16 */
		EdgeHandle_t m_hEdge; /* 32 16 */
		FaceVertexHandle_t m_hNextFaceVertex; /* 48 16 */
		FaceVertexHandle_t m_hPrevFaceVertex; /* 64 16 */
		FaceVertexHandle_t m_hVertexListNext; /* 80 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:285 */
	struct Edge_t {
		VertexHandle_t m_hVertexA; /* 0 16 */
		VertexHandle_t m_hVertexB; /* 16 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:254 */
	struct Face_t {
		FaceVertexHandle_t m_hFirstFaceVertex; /* 0 16 */
		int m_nFaceGroupIndex; /* 16 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:159 */
	struct VertexStreamIndex_t : public CModelMeshStreamIndex<CModelMesh::Vertex_t> {
	public:
		/* class CModelMeshStreamIndex<CModelMesh::Vertex_t> <ancestor>; */ /* 0 4 */
		void VertexStreamIndex_t(VertexStreamIndex_t* , int);
		void VertexStreamIndex_t(VertexStreamIndex_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:160 */
	struct FaceVertexStreamIndex_t : public CModelMeshStreamIndex<CModelMesh::FaceVertex_t> {
	public:
		/* class CModelMeshStreamIndex<CModelMesh::FaceVertex_t> <ancestor>; */ /* 0 4 */
		void FaceVertexStreamIndex_t(FaceVertexStreamIndex_t* , int);
		void FaceVertexStreamIndex_t(FaceVertexStreamIndex_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:161 */
	struct EdgeStreamIndex_t : public CModelMeshStreamIndex<CModelMesh::Edge_t> {
	public:
		/* class CModelMeshStreamIndex<CModelMesh::Edge_t> <ancestor>; */ /* 0 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:162 */
	struct FaceStreamIndex_t : public CModelMeshStreamIndex<CModelMesh::Face_t> {
	public:
		/* class CModelMeshStreamIndex<CModelMesh::Face_t> <ancestor>; */ /* 0 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:227 */
	enum FreeVertexRemovalMode_t {
		FREE_VERTICES_REMOVE = 0,
		FREE_VERTICES_LEAVE = 1,
	};
	/* ../public/meshutils/modelmesh.h:149 */
	typedef ComponentHandle_t FaceVertexHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:148 */
	typedef ComponentHandle_t VertexHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:151 */
	typedef ComponentHandle_t FaceHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:150 */
	typedef ComponentHandle_t EdgeHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:296 */
	struct FaceGroup_t {
		CUtlString m_MaterialName; /* 0 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:307 */
	class CVertex {
		/* ../public/meshutils/modelmesh.h:310 */
		void CVertex(CVertex* , CModelMesh* , VertexHandle_t);
		/* ../public/meshutils/modelmesh.h:312 */
		void GetFacesConnectedToVertex(const CVertex* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
		/* ../public/meshutils/modelmesh.h:313 */
		void GetFaceVerticesConnectedToVertex(const CVertex* , CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon);
		/* ../public/meshutils/modelmesh.h:314 */
		void GetEdgesConnectedToVertex(const CVertex* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
	private:
		CModelMesh & m_Mesh; /* 0 8 */
		VertexHandle_t m_hVertex; /* 8 16 */
		/* ../public/meshutils/modelmesh.h:1088 */
		Vector GetValue<Vector>(const CVertex* , VertexStreamIndex_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:332 */
	class CFaceVertex {
		/* ../public/meshutils/modelmesh.h:335 */
		void CFaceVertex(CFaceVertex* , CModelMesh* , FaceVertexHandle_t);
		/* ../public/meshutils/modelmesh.h:337 */
		VertexHandle_t GetVertexConnectedToFaceVertex(const CFaceVertex* );
		/* ../public/meshutils/modelmesh.h:338 */
		FaceHandle_t GetFaceConnectedToFaceVertex(const CFaceVertex* );
		/* ../public/meshutils/modelmesh.h:340 */
		EdgeHandle_t GetOutgoingEdge(const CFaceVertex* );
		/* ../public/meshutils/modelmesh.h:341 */
		EdgeHandle_t GetIncomingEdge(const CFaceVertex* );
		/* ../public/meshutils/modelmesh.h:343 */
		FaceVertexHandle_t GetNextFaceVertexInFace(const CFaceVertex* );
		/* ../public/meshutils/modelmesh.h:344 */
		FaceVertexHandle_t GetPreviousFaceVertexInFace(const CFaceVertex* );
	private:
		CModelMesh & m_Mesh; /* 0 8 */
		FaceVertexHandle_t m_hFaceVertex; /* 8 16 */
		/* ../public/meshutils/modelmesh.h:1098 */
		bool SetValue<Vector4D>(CFaceVertex* , FaceVertexStreamIndex_t, const Vector4D& );
		/* ../public/meshutils/modelmesh.h:1108 */
		Vector2D GetValue<Vector2D>(const CFaceVertex* , FaceVertexStreamIndex_t);
		/* ../public/meshutils/modelmesh.h:1108 */
		Vector GetValue<Vector>(const CFaceVertex* , FaceVertexStreamIndex_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:366 */
	class CEdge {
		/* ../public/meshutils/modelmesh.h:369 */
		void CEdge(CEdge* , CModelMesh* , EdgeHandle_t);
		/* ../public/meshutils/modelmesh.h:371 */
		VertexHandle_t GetVertexA(const CEdge* );
		/* ../public/meshutils/modelmesh.h:372 */
		VertexHandle_t GetVertexB(const CEdge* );
		/* ../public/meshutils/modelmesh.h:373 */
		void GetConnectedFaces(const CEdge* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
	private:
		CModelMesh & m_Mesh; /* 0 8 */
		EdgeHandle_t m_hEdge; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:391 */
	class CFace {
		/* ../public/meshutils/modelmesh.h:394 */
		void CFace(CFace* , CModelMesh* , FaceHandle_t);
		/* ../public/meshutils/modelmesh.h:396 */
		int ComputeNumVertices(const CFace* );
		/* ../public/meshutils/modelmesh.h:397 */
		int GetFaceGroupIndex(const CFace* );
		/* ../public/meshutils/modelmesh.h:399 */
		void GetVertices(const CFace* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL);
		/* ../public/meshutils/modelmesh.h:400 */
		void GetFaceVertices(const CFace* , CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon);
		/* ../public/meshutils/modelmesh.h:401 */
		void GetEdges(const CFace* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
		/* ../public/meshutils/modelmesh.h:403 */
		FaceVertexHandle_t GetFaceVertexForVertex(const CFace* , VertexHandle_t);
	private:
		CModelMesh & m_Mesh; /* 0 8 */
		FaceHandle_t m_hFace; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	static const VertexHandle_t INVALID_VERTEX; /* 0 0 */
	static const FaceVertexHandle_t INVALID_FACE_VERTEX; /* 0 0 */
	static const EdgeHandle_t INVALID_EDGE; /* 0 0 */
	static const FaceHandle_t INVALID_FACE; /* 0 0 */
	static const struct VertexStreamIndex_t INVALID_VERTEX_STREAM; /* 0 0 */
	static const struct FaceVertexStreamIndex_t INVALID_FACE_VERTEX_STREAM; /* 0 0 */
	static const struct EdgeStreamIndex_t INVALID_EDGE_STREAM; /* 0 0 */
	static const struct FaceStreamIndex_t INVALID_FACE_STREAM; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:183 */
	typedef DeltaIndex_t VertexDeltaIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const VertexDeltaIndex_t INVALID_VERTEX_DELTA; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:184 */
	typedef DeltaIndex_t FaceVertexDeltaIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const FaceVertexDeltaIndex_t INVALID_FACE_VERTEX_DELTA; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:185 */
	typedef DeltaIndex_t EdgeDeltaIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const EdgeDeltaIndex_t INVALID_EDGE_DELTA; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:186 */
	typedef DeltaIndex_t FaceDeltaIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const FaceDeltaIndex_t INVALID_FACE_DELTA; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:193 */
	typedef StreamIndex_t VertexDeltaStreamIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const VertexDeltaStreamIndex_t INVALID_VERTEX_DELTA_STREAM; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:194 */
	typedef StreamIndex_t FaceVertexDeltaStreamIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const FaceVertexDeltaStreamIndex_t INVALID_FACE_VERTEX_DELTA_STREAM; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:195 */
	typedef StreamIndex_t EdgeDeltaStreamIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const EdgeDeltaStreamIndex_t INVALID_EDGE_DELTA_STREAM; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:196 */
	typedef StreamIndex_t FaceDeltaStreamIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const FaceDeltaStreamIndex_t INVALID_FACE_DELTA_STREAM; /* 0 0 */
	static const int INVALID_FACE_GROUP = 18446744073709551615; /* 0 0 */
	/* ../public/meshutils/modelmesh.h:424 */
	void CModelMesh(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:425 */
	void CModelMesh(CModelMesh* , const CModelMesh& );
	/* ../public/meshutils/modelmesh.h:432 */
	CModelMesh& operator=(CModelMesh* , const CModelMesh& );
	/* ../public/meshutils/modelmesh.h:435 */
	void CopyFrom(CModelMesh* , const CModelMesh& );
	/* ../public/meshutils/modelmesh.h:438 */
	void RemoveAll(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:441 */
	bool IsEmpty(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:444 */
	bool CheckIntegrity(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:449 */
	bool CanAppendMesh(const CModelMesh* , const CModelMesh& );
	/* ../public/meshutils/modelmesh.h:453 */
	void FlipAllFaces(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:456 */
	uint64 CalculateMeshHash(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:464 */
	int GetNumVertices(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:467 */
	VertexHandle_t GetVertexHandleForIndex(const CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:470 */
	void GetAllVertices(const CModelMesh* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL);
	/* ../public/meshutils/modelmesh.h:473 */
	bool IsVertexInMesh(const CModelMesh* , VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:476 */
	VertexHandle_t AddVertex(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:480 */
	void AddVertices(CModelMesh* , int, CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL);
	/* ../public/meshutils/modelmesh.h:485 */
	void RemoveVertex(CModelMesh* , VertexHandle_t, FreeVertexRemovalMode_t);
	/* ../public/meshutils/modelmesh.h:488 */
	void RemoveVertices(CModelMesh* , VertexHandle_t* , int, FreeVertexRemovalMode_t);
	/* ../public/meshutils/modelmesh.h:491 */
	void SaveVerticesToKV3(const CModelMesh* , KeyValues3* );
	/* ../public/meshutils/modelmesh.h:492 */
	bool LoadVerticesFromKV3(CModelMesh* , const KeyValues3* , CUtlString* );
	/* ../public/meshutils/modelmesh.h:494 */
	void SaveToKV3(const CModelMesh* , KeyValues3* );
	/* ../public/meshutils/modelmesh.h:495 */
	bool LoadFromKV3(CModelMesh* , const KeyValues3* , CUtlString* );
	/* ../public/meshutils/modelmesh.h:503 */
	int GetNumFaceVertices(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:506 */
	FaceVertexHandle_t GetFaceVertexHandleForIndex(const CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:509 */
	void GetAllFaceVertices(const CModelMesh* , CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon);
	/* ../public/meshutils/modelmesh.h:512 */
	bool IsFaceVertexInMesh(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:521 */
	int GetNumEdges(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:524 */
	EdgeHandle_t GetEdgeHandleForIndex(const CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:527 */
	void GetAllEdgeHandles(const CModelMesh* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
	/* ../public/meshutils/modelmesh.h:530 */
	bool IsEdgeInMesh(const CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:534 */
	EdgeHandle_t FindEdgeConnectingVertices(const CModelMesh* , VertexHandle_t, VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:538 */
	VertexHandle_t CollapseEdge(CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:545 */
	int GetNumFaces(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:548 */
	FaceHandle_t GetFaceHandleForIndex(const CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:551 */
	void GetAllFaces(const CModelMesh* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
	/* ../public/meshutils/modelmesh.h:554 */
	bool IsFaceInMesh(const CModelMesh* , FaceHandle_t);
	/* ../public/meshutils/modelmesh.h:558 */
	FaceHandle_t AddFace(CModelMesh* , const VertexHandle_t* , int, int, CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon);
	/* ../public/meshutils/modelmesh.h:564 */
	void AddFaces(CModelMesh* , int, const int* , const VertexHandle_t* , int, CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis, CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon);
	/* ../public/meshutils/modelmesh.h:568 */
	void RemoveFace(CModelMesh* , FaceHandle_t, FreeVertexRemovalMode_t);
	/* ../public/meshutils/modelmesh.h:572 */
	void RemoveFaces(CModelMesh* , const FaceHandle_t* , int, FreeVertexRemovalMode_t);
	/* ../public/meshutils/modelmesh.h:584 */
	int GetNumFaceGroups(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:587 */
	int AddFaceGroup(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:590 */
	void RemoveFaceGroup(CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:593 */
	void SetFaceGroupMaterial(CModelMesh* , int, const char* );
	/* ../public/meshutils/modelmesh.h:596 */
	const char* GetFaceGroupMaterial(const CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:599 */
	void FindFaceGroupsUsingMaterial(const CModelMesh* , const char* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/meshutils/modelmesh.h:603 */
	void AssignFaceToGroup(CModelMesh* , FaceHandle_t, int);
	/* ../public/meshutils/modelmesh.h:606 */
	void AssignFacesToGroup(CModelMesh* , FaceHandle_t* , int, int);
	/* ../public/meshutils/modelmesh.h:609 */
	void FindFacesInFaceGroup(const CModelMesh* , int, CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
	/* ../public/meshutils/modelmesh.h:612 */
	bool HasFacesInFaceGroup(const CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:624 */
	void SetBoneNames(CModelMesh* , const char** , int);
	/* ../public/meshutils/modelmesh.h:625 */
	void SetBoneNames(CModelMesh* , CUtlString* , int);
	/* ../public/meshutils/modelmesh.h:628 */
	void GetBoneNames(const CModelMesh* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* );
	/* ../public/meshutils/modelmesh.h:631 */
	int GetNumBones(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:634 */
	const char* GetBoneName(const CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:638 */
	int FindBoneByName(const CModelMesh* , const char* );
	/* ../public/meshutils/modelmesh.h:641 */
	int FindOrCreateBone(CModelMesh* , const char* );
	/* ../public/meshutils/modelmesh.h:644 */
	bool DoBoneListsMatch(const CModelMesh* , const CModelMesh& );
	/* ../public/meshutils/modelmesh.h:647 */
	bool RemoveBoneName(CModelMesh* , int);
	/* ../public/meshutils/modelmesh.h:650 */
	void RemoveBoneNames(CModelMesh* , const int* , int);
	/* ../public/meshutils/modelmesh.h:653 */
	bool RenameBone(CModelMesh* , const char* , const char* );
	/* ../public/meshutils/modelmesh.h:660 */
	CVertex Vertex(CModelMesh* , VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:661 */
	CVertex Vertex(const CModelMesh* , VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:663 */
	CFaceVertex FaceVertex(CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:664 */
	CFaceVertex FaceVertex(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:666 */
	CEdge Edge(CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:667 */
	CEdge Edge(const CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:669 */
	CFace Face(CModelMesh* , FaceHandle_t);
	/* ../public/meshutils/modelmesh.h:670 */
	CFace Face(const CModelMesh* , FaceHandle_t);
	/* ../public/meshutils/modelmesh.h:169 */
	typedef struct CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t> CVertexStreamSet;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:678 */
	CVertexStreamSet VertexStreamSet(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:679 */
	const CVertexStreamSet VertexStreamSet(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:170 */
	typedef struct CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t> CFaceVertexStreamSet;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:681 */
	CFaceVertexStreamSet FaceVertexStreamSet(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:682 */
	const CFaceVertexStreamSet FaceVertexStreamSet(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:171 */
	typedef struct CModelMeshStreamSetAccessor<CModelMesh::Edge_t, CModelMesh::EdgeStreamIndex_t> CEdgeStreamSet;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:684 */
	CEdgeStreamSet EdgeStreamSet(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:685 */
	const CEdgeStreamSet EdgeStreamSet(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:172 */
	typedef struct CModelMeshStreamSetAccessor<CModelMesh::Face_t, CModelMesh::FaceStreamIndex_t> CFaceStreamSet;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:687 */
	CFaceStreamSet FaceStreamSet(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:688 */
	const CFaceStreamSet FaceStreamSet(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:179 */
	typedef struct CModelMeshDeltaSet<CModelMesh::Vertex_t> CVertexDeltaSet;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:696 */
	CVertexDeltaSet& VertexDeltaSet(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:697 */
	const CVertexDeltaSet& VertexDeltaSet(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:180 */
	typedef struct CModelMeshDeltaSet<CModelMesh::FaceVertex_t> CFaceVertexDeltaSet;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:699 */
	CFaceVertexDeltaSet& FaceVertexDeltaSet(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:700 */
	const CFaceVertexDeltaSet& FaceVertexDeltaSet(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:181 */
	typedef struct CModelMeshDeltaSet<CModelMesh::Face_t> CFaceDeltaSet;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmesh.h:702 */
	CFaceDeltaSet& FaceDeltaSet(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:703 */
	const CFaceDeltaSet& FaceDeltaSet(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:705 */
	bool HasDeltaData(const CModelMesh* );
	/* ../public/meshutils/modelmesh.h:714 */
	int GetVertexComponentIndex(const CModelMesh* , VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:715 */
	int GetFaceVertexComponentIndex(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:716 */
	int GetEdgeComponentIndex(const CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:717 */
	int GetFaceComponentIndex(const CModelMesh* , FaceHandle_t);
	/* ../public/meshutils/modelmesh.h:724 */
	CModelMeshMetaData& MetaData(CModelMesh* );
	/* ../public/meshutils/modelmesh.h:725 */
	const CModelMeshMetaData& MetaData(const CModelMesh* );
private:
	/* ../public/meshutils/modelmesh.h:741 */
	FaceVertexHandle_t GetFaceVertexForVertex(const CModelMesh* , FaceHandle_t, VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:749 */
	void GetEdgesConnectedToVertex(const CModelMesh* , VertexHandle_t, CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFunctor<C);
	/* ../public/meshutils/modelmesh.h:755 */
	int GetNumFacesConnectedToEdge(const CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:760 */
	VertexHandle_t GetVertexConnectedToFaceVertex(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:761 */
	FaceHandle_t GetFaceConnectedToFaceVertex(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:764 */
	EdgeHandle_t GetOutgoingEdgeConnectedToFaceVertex(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:768 */
	EdgeHandle_t GetIncomingEdgeConnectedToFaceVertex(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:771 */
	FaceVertexHandle_t GetNextFaceVertexInFace(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:774 */
	FaceVertexHandle_t GetPreviousFaceVertexInFace(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:780 */
	Vertex_t* GetVertex(CModelMesh* , VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:781 */
	const Vertex_t* GetVertex(const CModelMesh* , VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:782 */
	FaceVertex_t* GetFaceVertex(CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:783 */
	const FaceVertex_t* GetFaceVertex(const CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:784 */
	Edge_t* GetEdge(CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:785 */
	const Edge_t* GetEdge(const CModelMesh* , EdgeHandle_t);
	/* ../public/meshutils/modelmesh.h:786 */
	Face_t* GetFace(CModelMesh* , FaceHandle_t);
	/* ../public/meshutils/modelmesh.h:787 */
	const Face_t* GetFace(const CModelMesh* , FaceHandle_t);
	/* ../public/meshutils/modelmesh.h:792 */
	EdgeHandle_t FindOrCreateEdgeConnectingVertices(CModelMesh* , VertexHandle_t, VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:793 */
	void DetachFaceVertexFromVertex(CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:794 */
	void AttachFaceVertexToVertex(CModelMesh* , FaceVertexHandle_t, VertexHandle_t);
	/* ../public/meshutils/modelmesh.h:795 */
	int FindMatchingFaceGroup(CModelMesh* , const FaceGroup_t& );
	/* ../public/meshutils/modelmesh.h:796 */
	void MergeFaceGroupsFromMesh(CModelMesh* , const CModelMesh& , const CUtlVector<int, CUtlMemory<int, int> >* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/meshutils/modelmesh.h:797 */
	void MergeBonesFromMesh(CModelMesh* , const CModelMesh& , const CUtlVector<int, CUtlMemory<int, int> >* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/meshutils/modelmesh.h:798 */
	bool RemoveFaceVertexFromFace(CModelMesh* , FaceVertexHandle_t);
	/* ../public/meshutils/modelmesh.h:799 */
	ReplaceVertexResult_t ReplaceVertexInFace(CModelMesh* , FaceHandle_t, VertexHandle_t, VertexHandle_t);
	CModelMeshComponentList<CModelMesh::Vertex_t> m_Vertices; /* 0 152 */
	CModelMeshComponentList<CModelMesh::FaceVertex_t> m_FaceVertices; /* 152 152 */
	CModelMeshComponentList<CModelMesh::Edge_t> m_Edges; /* 304 152 */
	CModelMeshComponentList<CModelMesh::Face_t> m_Faces; /* 456 152 */
	CUtlVector<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> > m_FaceGroups; /* 608 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_BoneNames; /* 640 32 */
	CModelMeshMetaData m_MetaData; /* 672 16 */
	void CModelMesh(class CModelMesh *); /* linkage=_ZN10CModelMeshC4Ev */
	void CModelMesh(class CModelMesh *, const class CModelMesh  &); /* linkage=_ZN10CModelMeshC4ERKS_ */
	/* <5fa7e6f> meshutils/modelmesh.cpp:52 */
	class CModelMesh & operator=(class CModelMesh *, const class CModelMesh  &); /* linkage=_ZN10CModelMeshaSERKS_ */
	void CopyFrom(class CModelMesh *, const class CModelMesh  &); /* linkage=_ZN10CModelMesh8CopyFromERKS_ */
	void RemoveAll(class CModelMesh *); /* linkage=_ZN10CModelMesh9RemoveAllEv */
	bool IsEmpty(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh7IsEmptyEv */
	bool CheckIntegrity(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh14CheckIntegrityEv */
	bool CanAppendMesh(const class CModelMesh  *, const class CModelMesh  &); /* linkage=_ZNK10CModelMesh13CanAppendMeshERKS_ */
	void FlipAllFaces(class CModelMesh *); /* linkage=_ZN10CModelMesh12FlipAllFacesEv */
	uint64 CalculateMeshHash(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh17CalculateMeshHashEv */
	int GetNumVertices(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh14GetNumVerticesEv */
	VertexHandle_t GetVertexHandleForIndex(const class CModelMesh  *, int); /* linkage=_ZNK10CModelMesh23GetVertexHandleForIndexEi */
	void GetAllVertices(const class CModelMesh  *, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL); /* linkage=_ZNK10CModelMesh14GetAllVerticesEP10CUtlVectorIN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS4_iEE */
	bool IsVertexInMesh(const class CModelMesh  *, VertexHandle_t); /* linkage=_ZNK10CModelMesh14IsVertexInMeshEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	VertexHandle_t AddVertex(class CModelMesh *); /* linkage=_ZN10CModelMesh9AddVertexEv */
	void AddVertices(class CModelMesh *, int, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL); /* linkage=_ZN10CModelMesh11AddVerticesEiP10CUtlVectorIN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS4_iEE */
	void RemoveVertex(class CModelMesh *, VertexHandle_t, enum FreeVertexRemovalMode_t); /* linkage=_ZN10CModelMesh12RemoveVertexEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tENS_23FreeVertexRemovalMode_tE */
	void RemoveVertices(class CModelMesh *, VertexHandle_t *, int, enum FreeVertexRemovalMode_t); /* linkage=_ZN10CModelMesh14RemoveVerticesEPN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tEiNS_23FreeVertexRemovalMode_tE */
	void SaveVerticesToKV3(const class CModelMesh  *, class KeyValues3 *); /* linkage=_ZNK10CModelMesh17SaveVerticesToKV3EP10KeyValues3 */
	bool LoadVerticesFromKV3(class CModelMesh *, const class KeyValues3  *, class CUtlString *); /* linkage=_ZN10CModelMesh19LoadVerticesFromKV3EPK10KeyValues3P10CUtlString */
	void SaveToKV3(const class CModelMesh  *, class KeyValues3 *); /* linkage=_ZNK10CModelMesh9SaveToKV3EP10KeyValues3 */
	bool LoadFromKV3(class CModelMesh *, const class KeyValues3  *, class CUtlString *); /* linkage=_ZN10CModelMesh11LoadFromKV3EPK10KeyValues3P10CUtlString */
	int GetNumFaceVertices(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh18GetNumFaceVerticesEv */
	FaceVertexHandle_t GetFaceVertexHandleForIndex(const class CModelMesh  *, int); /* linkage=_ZNK10CModelMesh27GetFaceVertexHandleForIndexEi */
	void GetAllFaceVertices(const class CModelMesh  *, class CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon); /* linkage=_ZNK10CModelMesh18GetAllFaceVerticesEP10CUtlVectorIN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS4_iEE */
	bool IsFaceVertexInMesh(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh18IsFaceVertexInMeshEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	int GetNumEdges(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh11GetNumEdgesEv */
	EdgeHandle_t GetEdgeHandleForIndex(const class CModelMesh  *, int); /* linkage=_ZNK10CModelMesh21GetEdgeHandleForIndexEi */
	void GetAllEdgeHandles(const class CModelMesh  *, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis); /* linkage=_ZNK10CModelMesh17GetAllEdgeHandlesEP10CUtlVectorIN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS4_iEE */
	bool IsEdgeInMesh(const class CModelMesh  *, EdgeHandle_t); /* linkage=_ZNK10CModelMesh12IsEdgeInMeshEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	EdgeHandle_t FindEdgeConnectingVertices(const class CModelMesh  *, VertexHandle_t, VertexHandle_t); /* linkage=_ZNK10CModelMesh26FindEdgeConnectingVerticesEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tES3_ */
	VertexHandle_t CollapseEdge(class CModelMesh *, EdgeHandle_t); /* linkage=_ZN10CModelMesh12CollapseEdgeEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	int GetNumFaces(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh11GetNumFacesEv */
	FaceHandle_t GetFaceHandleForIndex(const class CModelMesh  *, int); /* linkage=_ZNK10CModelMesh21GetFaceHandleForIndexEi */
	void GetAllFaces(const class CModelMesh  *, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis); /* linkage=_ZNK10CModelMesh11GetAllFacesEP10CUtlVectorIN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS4_iEE */
	bool IsFaceInMesh(const class CModelMesh  *, FaceHandle_t); /* linkage=_ZNK10CModelMesh12IsFaceInMeshEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa7bf7> meshutils/modelmesh.cpp:789 */
	FaceHandle_t AddFace(class CModelMesh *, const VertexHandle_t  *, int, int, class CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon); /* linkage=_ZN10CModelMesh7AddFaceEPKN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tEiiP10CUtlVectorINS0_INS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS9_iEE */
	void AddFaces(class CModelMesh *, int, const int  *, const VertexHandle_t  *, int, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis, class CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon); /* linkage=_ZN10CModelMesh8AddFacesEiPKiPKN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tEiP10CUtlVectorINS2_INS_6Face_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryISB_iEEPS8_INS2_INS_12FaceVertex_tEE32ComponentHandleWithListPointer_tESC_ISI_iEE */
	void RemoveFace(class CModelMesh *, FaceHandle_t, enum FreeVertexRemovalMode_t); /* linkage=_ZN10CModelMesh10RemoveFaceEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tENS_23FreeVertexRemovalMode_tE */
	void RemoveFaces(class CModelMesh *, const FaceHandle_t  *, int, enum FreeVertexRemovalMode_t); /* linkage=_ZN10CModelMesh11RemoveFacesEPKN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tEiNS_23FreeVertexRemovalMode_tE */
	int GetNumFaceGroups(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh16GetNumFaceGroupsEv */
	/* <5fa4d1e> meshutils/modelmesh.cpp:1021 */
	int AddFaceGroup(class CModelMesh *); /* linkage=_ZN10CModelMesh12AddFaceGroupEv */
	void RemoveFaceGroup(class CModelMesh *, int); /* linkage=_ZN10CModelMesh15RemoveFaceGroupEi */
	/* <5fa2e5a> meshutils/modelmesh.cpp:1059 */
	void SetFaceGroupMaterial(class CModelMesh *, int, const char  *); /* linkage=_ZN10CModelMesh20SetFaceGroupMaterialEiPKc */
	const char  * GetFaceGroupMaterial(const class CModelMesh  *, int); /* linkage=_ZNK10CModelMesh20GetFaceGroupMaterialEi */
	void FindFaceGroupsUsingMaterial(const class CModelMesh  *, const char  *, class CUtlVector<int, CUtlMemory<int, int> > *); /* linkage=_ZNK10CModelMesh27FindFaceGroupsUsingMaterialEPKcP10CUtlVectorIi10CUtlMemoryIiiEE */
	void AssignFaceToGroup(class CModelMesh *, FaceHandle_t, int); /* linkage=_ZN10CModelMesh17AssignFaceToGroupEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tEi */
	/* <5fa2ff5> meshutils/modelmesh.cpp:1111 */
	void AssignFacesToGroup(class CModelMesh *, FaceHandle_t *, int, int); /* linkage=_ZN10CModelMesh18AssignFacesToGroupEPN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tEii */
	void FindFacesInFaceGroup(const class CModelMesh  *, int, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis); /* linkage=_ZNK10CModelMesh20FindFacesInFaceGroupEiP10CUtlVectorIN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS4_iEE */
	bool HasFacesInFaceGroup(const class CModelMesh  *, int); /* linkage=_ZNK10CModelMesh19HasFacesInFaceGroupEi */
	void SetBoneNames(class CModelMesh *, const char  * *, int); /* linkage=_ZN10CModelMesh12SetBoneNamesEPPKci */
	void SetBoneNames(class CModelMesh *, class CUtlString *, int); /* linkage=_ZN10CModelMesh12SetBoneNamesEP10CUtlStringi */
	void GetBoneNames(const class CModelMesh  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *); /* linkage=_ZNK10CModelMesh12GetBoneNamesEP10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEE */
	/* <5fa3353> meshutils/modelmesh.cpp:1201 */
	int GetNumBones(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh11GetNumBonesEv */
	/* <5fa33ad> meshutils/modelmesh.cpp:1209 */
	const char  * GetBoneName(const class CModelMesh  *, int); /* linkage=_ZNK10CModelMesh11GetBoneNameEi */
	/* <5fa349f> meshutils/modelmesh.cpp:1220 */
	int FindBoneByName(const class CModelMesh  *, const char  *); /* linkage=_ZNK10CModelMesh14FindBoneByNameEPKc */
	/* <5fa52a0> meshutils/modelmesh.cpp:1238 */
	int FindOrCreateBone(class CModelMesh *, const char  *); /* linkage=_ZN10CModelMesh16FindOrCreateBoneEPKc */
	bool DoBoneListsMatch(const class CModelMesh  *, const class CModelMesh  &); /* linkage=_ZNK10CModelMesh16DoBoneListsMatchERKS_ */
	bool RemoveBoneName(class CModelMesh *, int); /* linkage=_ZN10CModelMesh14RemoveBoneNameEi */
	void RemoveBoneNames(class CModelMesh *, const int  *, int); /* linkage=_ZN10CModelMesh15RemoveBoneNamesEPKii */
	bool RenameBone(class CModelMesh *, const char  *, const char  *); /* linkage=_ZN10CModelMesh10RenameBoneEPKcS1_ */
	/* <5fa37c3> meshutils/modelmesh.cpp:1582 */
	class CVertex Vertex(class CModelMesh *, VertexHandle_t); /* linkage=_ZN10CModelMesh6VertexEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	class CVertex Vertex(const class CModelMesh  *, VertexHandle_t); /* linkage=_ZNK10CModelMesh6VertexEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa3841> meshutils/modelmesh.cpp:1598 */
	class CFaceVertex FaceVertex(class CModelMesh *, FaceVertexHandle_t); /* linkage=_ZN10CModelMesh10FaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	class CFaceVertex FaceVertex(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh10FaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa38bf> meshutils/modelmesh.cpp:1614 */
	class CEdge Edge(class CModelMesh *, EdgeHandle_t); /* linkage=_ZN10CModelMesh4EdgeEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	class CEdge Edge(const class CModelMesh  *, EdgeHandle_t); /* linkage=_ZNK10CModelMesh4EdgeEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa392b> meshutils/modelmesh.cpp:1630 */
	class CFace Face(class CModelMesh *, FaceHandle_t); /* linkage=_ZN10CModelMesh4FaceEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE */
	class CFace Face(const class CModelMesh  *, FaceHandle_t); /* linkage=_ZNK10CModelMesh4FaceEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa3629> meshutils/modelmesh.cpp:1550 */
	CVertexStreamSet VertexStreamSet(class CModelMesh *); /* linkage=_ZN10CModelMesh15VertexStreamSetEv */
	const CVertexStreamSet  VertexStreamSet(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh15VertexStreamSetEv */
	/* <5fa36f3> meshutils/modelmesh.cpp:1566 */
	CFaceVertexStreamSet FaceVertexStreamSet(class CModelMesh *); /* linkage=_ZN10CModelMesh19FaceVertexStreamSetEv */
	const CFaceVertexStreamSet  FaceVertexStreamSet(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh19FaceVertexStreamSetEv */
	CEdgeStreamSet EdgeStreamSet(class CModelMesh *); /* linkage=_ZN10CModelMesh13EdgeStreamSetEv */
	const CEdgeStreamSet  EdgeStreamSet(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh13EdgeStreamSetEv */
	/* <5fa3ab7> meshutils/modelmesh.cpp:1703 */
	CFaceStreamSet FaceStreamSet(class CModelMesh *); /* linkage=_ZN10CModelMesh13FaceStreamSetEv */
	const CFaceStreamSet  FaceStreamSet(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh13FaceStreamSetEv */
	/* <5fa39a9> meshutils/modelmesh.cpp:1646 */
	CVertexDeltaSet & VertexDeltaSet(class CModelMesh *); /* linkage=_ZN10CModelMesh14VertexDeltaSetEv */
	const CVertexDeltaSet  & VertexDeltaSet(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh14VertexDeltaSetEv */
	/* <5fa3a03> meshutils/modelmesh.cpp:1661 */
	CFaceVertexDeltaSet & FaceVertexDeltaSet(class CModelMesh *); /* linkage=_ZN10CModelMesh18FaceVertexDeltaSetEv */
	const CFaceVertexDeltaSet  & FaceVertexDeltaSet(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh18FaceVertexDeltaSetEv */
	/* <5fa3a5d> meshutils/modelmesh.cpp:1677 */
	CFaceDeltaSet & FaceDeltaSet(class CModelMesh *); /* linkage=_ZN10CModelMesh12FaceDeltaSetEv */
	const CFaceDeltaSet  & FaceDeltaSet(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh12FaceDeltaSetEv */
	bool HasDeltaData(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh12HasDeltaDataEv */
	int GetVertexComponentIndex(const class CModelMesh  *, VertexHandle_t); /* linkage=_ZNK10CModelMesh23GetVertexComponentIndexEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	int GetFaceVertexComponentIndex(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh27GetFaceVertexComponentIndexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	int GetEdgeComponentIndex(const class CModelMesh  *, EdgeHandle_t); /* linkage=_ZNK10CModelMesh21GetEdgeComponentIndexEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	int GetFaceComponentIndex(const class CModelMesh  *, FaceHandle_t); /* linkage=_ZNK10CModelMesh21GetFaceComponentIndexEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa3600> meshutils/modelmesh.cpp:1534 */
	class CModelMeshMetaData & MetaData(class CModelMesh *); /* linkage=_ZN10CModelMesh8MetaDataEv */
	const class CModelMeshMetaData  & MetaData(const class CModelMesh  *); /* linkage=_ZNK10CModelMesh8MetaDataEv */
	FaceVertexHandle_t GetFaceVertexForVertex(const class CModelMesh  *, FaceHandle_t, VertexHandle_t); /* linkage=_ZNK10CModelMesh22GetFaceVertexForVertexEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tENS0_INS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	void GetEdgesConnectedToVertex(const class CModelMesh  *, VertexHandle_t, class CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFunctor<C); /* linkage=_ZNK10CModelMesh25GetEdgesConnectedToVertexEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tEP13CUtlHashtableINS0_INS_6Edge_tEE32ComponentHandleWithListPointer_tE7empty_t18DefaultHashFunctorIS7_E19DefaultEqualFunctorIS7_E11undefined_t10CUtlMemoryI18CUtlHashtableEntryIS7_S8_EiEE */
	/* <5fa5479> meshutils/modelmesh.cpp:546 */
	int GetNumFacesConnectedToEdge(const class CModelMesh  *, EdgeHandle_t); /* linkage=_ZNK10CModelMesh26GetNumFacesConnectedToEdgeEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa40fb> meshutils/modelmesh.cpp:1325 */
	VertexHandle_t GetVertexConnectedToFaceVertex(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh30GetVertexConnectedToFaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa4021> meshutils/modelmesh.cpp:1338 */
	FaceHandle_t GetFaceConnectedToFaceVertex(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh28GetFaceConnectedToFaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa25ad> meshutils/modelmesh.cpp:417 */
	EdgeHandle_t GetOutgoingEdgeConnectedToFaceVertex(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh36GetOutgoingEdgeConnectedToFaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa41d5> meshutils/modelmesh.cpp:429 */
	EdgeHandle_t GetIncomingEdgeConnectedToFaceVertex(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh36GetIncomingEdgeConnectedToFaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa2894> meshutils/modelmesh.cpp:445 */
	FaceVertexHandle_t GetNextFaceVertexInFace(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh23GetNextFaceVertexInFaceEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa2b7b> meshutils/modelmesh.cpp:457 */
	FaceVertexHandle_t GetPreviousFaceVertexInFace(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh27GetPreviousFaceVertexInFaceEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa3b87> meshutils/modelmesh.cpp:1719 */
	class Vertex_t * GetVertex(class CModelMesh *, VertexHandle_t); /* linkage=_ZN10CModelMesh9GetVertexEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	const class Vertex_t  * GetVertex(const class CModelMesh  *, VertexHandle_t); /* linkage=_ZNK10CModelMesh9GetVertexEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa3dd4> meshutils/modelmesh.cpp:1735 */
	class FaceVertex_t * GetFaceVertex(class CModelMesh *, FaceVertexHandle_t); /* linkage=_ZN10CModelMesh13GetFaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	const class FaceVertex_t  * GetFaceVertex(const class CModelMesh  *, FaceVertexHandle_t); /* linkage=_ZNK10CModelMesh13GetFaceVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa4253> meshutils/modelmesh.cpp:1752 */
	class Edge_t * GetEdge(class CModelMesh *, EdgeHandle_t); /* linkage=_ZN10CModelMesh7GetEdgeEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	const class Edge_t  * GetEdge(const class CModelMesh  *, EdgeHandle_t); /* linkage=_ZNK10CModelMesh7GetEdgeEN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa44a0> meshutils/modelmesh.cpp:1768 */
	class Face_t * GetFace(class CModelMesh *, FaceHandle_t); /* linkage=_ZN10CModelMesh7GetFaceEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE */
	const class Face_t  * GetFace(const class CModelMesh  *, FaceHandle_t); /* linkage=_ZNK10CModelMesh7GetFaceEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE */
	EdgeHandle_t FindOrCreateEdgeConnectingVertices(class CModelMesh *, VertexHandle_t, VertexHandle_t); /* linkage=_ZN10CModelMesh34FindOrCreateEdgeConnectingVerticesEN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tES3_ */
	void DetachFaceVertexFromVertex(class CModelMesh *, FaceVertexHandle_t); /* linkage=_ZN10CModelMesh26DetachFaceVertexFromVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	void AttachFaceVertexToVertex(class CModelMesh *, FaceVertexHandle_t, VertexHandle_t); /* linkage=_ZN10CModelMesh24AttachFaceVertexToVertexEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tENS0_INS_8Vertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5fa46ed> meshutils/modelmesh.cpp:1839 */
	int FindMatchingFaceGroup(class CModelMesh *, const class FaceGroup_t  &); /* linkage=_ZN10CModelMesh21FindMatchingFaceGroupERKNS_11FaceGroup_tE */
	void MergeFaceGroupsFromMesh(class CModelMesh *, const class CModelMesh  &, const class CUtlVector<int, CUtlMemory<int, int> >  *, class CUtlVector<int, CUtlMemory<int, int> > *); /* linkage=_ZN10CModelMesh23MergeFaceGroupsFromMeshERKS_PK10CUtlVectorIi10CUtlMemoryIiiEEPS5_ */
	void MergeBonesFromMesh(class CModelMesh *, const class CModelMesh  &, const class CUtlVector<int, CUtlMemory<int, int> >  *, class CUtlVector<int, CUtlMemory<int, int> > *); /* linkage=_ZN10CModelMesh18MergeBonesFromMeshERKS_PK10CUtlVectorIi10CUtlMemoryIiiEEPS5_ */
	bool RemoveFaceVertexFromFace(class CModelMesh *, FaceVertexHandle_t); /* linkage=_ZN10CModelMesh24RemoveFaceVertexFromFaceEN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE */
	enum ReplaceVertexResult_t ReplaceVertexInFace(class CModelMesh *, FaceHandle_t, VertexHandle_t, VertexHandle_t); /* linkage=_ZN10CModelMesh19ReplaceVertexInFaceEN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tENS0_INS_8Vertex_tEE32ComponentHandleWithListPointer_tES6_ */
	void GetEdgesConnectedToFace<CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int> > >(const class CModelMesh  *, FaceHandle_t, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis); /* linkage=_ZNK10CModelMesh23GetEdgesConnectedToFaceI10CUtlVectorIN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS5_iEEEEvNS2_INS_6Face_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetFaceVerticesConnectedToFace<CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > >(const class CModelMesh  *, FaceHandle_t, class CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon); /* linkage=_ZNK10CModelMesh30GetFaceVerticesConnectedToFaceI10CUtlVectorIN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS5_iEEEEvNS2_INS_6Face_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetVerticesConnectedToFace<CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > >(const class CModelMesh  *, FaceHandle_t, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL); /* linkage=_ZNK10CModelMesh26GetVerticesConnectedToFaceI10CUtlVectorIN22CHalfEdgeComponentListINS_8Vertex_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS5_iEEEEvNS2_INS_6Face_tEE32ComponentHandleWithListPointer_tEPT_ */
	int GetFacesConnectedToEdge<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > >(const class CModelMesh  *, EdgeHandle_t, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis); /* linkage=_ZNK10CModelMesh23GetFacesConnectedToEdgeI10CUtlVectorIN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS5_iEEEEiNS2_INS_6Edge_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetFaceVerticesConnectedToVertex<CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > >(const class CModelMesh  *, VertexHandle_t, class CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon); /* linkage=_ZNK10CModelMesh32GetFaceVerticesConnectedToVertexI10CUtlVectorIN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS5_iEEEEvNS2_INS_8Vertex_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetFacesConnectedToVertex<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > >(const class CModelMesh  *, VertexHandle_t, class CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis); /* linkage=_ZNK10CModelMesh25GetFacesConnectedToVertexI10CUtlVectorIN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tE10CUtlMemoryIS5_iEEEEvNS2_INS_8Vertex_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetEdgesConnectedToFace<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t> >(const class CModelMesh  *, FaceHandle_t, class CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t> *); /* linkage=_ZNK10CModelMesh23GetEdgesConnectedToFaceI24CUtlVectorMeshComponentsIN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tEEEEvNS2_INS_6Face_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetFaceVerticesConnectedToFace<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> >(const class CModelMesh  *, FaceHandle_t, class CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> *); /* linkage=_ZNK10CModelMesh30GetFaceVerticesConnectedToFaceI24CUtlVectorMeshComponentsIN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tEEEEvNS2_INS_6Face_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetFacesConnectedToVertex<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t> >(const class CModelMesh  *, VertexHandle_t, class CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t> *); /* linkage=_ZNK10CModelMesh25GetFacesConnectedToVertexI24CUtlVectorMeshComponentsIN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tEEEEvNS2_INS_8Vertex_tEE32ComponentHandleWithListPointer_tEPT_ */
	int GetFacesConnectedToEdge<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t> >(const class CModelMesh  *, EdgeHandle_t, class CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t> *); /* linkage=_ZNK10CModelMesh23GetFacesConnectedToEdgeI24CUtlVectorMeshComponentsIN22CHalfEdgeComponentListINS_6Face_tEE32ComponentHandleWithListPointer_tEEEEiNS2_INS_6Edge_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetFaceVerticesConnectedToVertex<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> >(const class CModelMesh  *, VertexHandle_t, class CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> *); /* linkage=_ZNK10CModelMesh32GetFaceVerticesConnectedToVertexI24CUtlVectorMeshComponentsIN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tEEEEvNS2_INS_8Vertex_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetEdgesConnectedToVertex<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t> >(const class CModelMesh  *, VertexHandle_t, class CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t> *); /* linkage=_ZNK10CModelMesh25GetEdgesConnectedToVertexI24CUtlVectorMeshComponentsIN22CHalfEdgeComponentListINS_6Edge_tEE32ComponentHandleWithListPointer_tEEEEvNS2_INS_8Vertex_tEE32ComponentHandleWithListPointer_tEPT_ */
	void GetFaceVerticesConnectedToVertex<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 32> >(const class CModelMesh  *, VertexHandle_t, class CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 32> *); /* linkage=_ZNK10CModelMesh32GetFaceVerticesConnectedToVertexI23CUtlVectorFixedGrowableIN22CHalfEdgeComponentListINS_12FaceVertex_tEE32ComponentHandleWithListPointer_tELm32EEEEvNS2_INS_8Vertex_tEE32ComponentHandleWithListPointer_tEPT_ */
};

// <061D5F6B> ../public/meshutils/modelmesh.h:159
void VertexStreamIndex_t::VertexStreamIndex_t()
{
} /* size: 0 */

// <061D5F4F> ../public/meshutils/modelmesh.h:159
inline void VertexStreamIndex_t::VertexStreamIndex_t()
{
} /* size: 0 */

// <061D33AE> ../public/meshutils/modelmesh.h:159
void VertexStreamIndex_t::VertexStreamIndex_t(int)
{
} /* size: 0 */

// <061D338D> ../public/meshutils/modelmesh.h:159
inline void VertexStreamIndex_t::VertexStreamIndex_t(int)
{
} /* size: 0 */

// <061D5F38> ../public/meshutils/modelmesh.h:160
void FaceVertexStreamIndex_t::FaceVertexStreamIndex_t()
{
} /* size: 0 */

// <061D5F1C> ../public/meshutils/modelmesh.h:160
inline void FaceVertexStreamIndex_t::FaceVertexStreamIndex_t()
{
} /* size: 0 */

// <061D3341> ../public/meshutils/modelmesh.h:160
void FaceVertexStreamIndex_t::FaceVertexStreamIndex_t(int)
{
} /* size: 0 */

// <061D3320> ../public/meshutils/modelmesh.h:160
inline void FaceVertexStreamIndex_t::FaceVertexStreamIndex_t(int)
{
} /* size: 0 */

// <05FA0FF9> ../public/meshutils/modelmesh.h:161
void EdgeStreamIndex_t::EdgeStreamIndex_t(int)
{
} /* size: 0 */

// <05FA0FD8> ../public/meshutils/modelmesh.h:161
inline void EdgeStreamIndex_t::EdgeStreamIndex_t(int)
{
} /* size: 0 */

// <05FA0FB1> ../public/meshutils/modelmesh.h:162
void FaceStreamIndex_t::FaceStreamIndex_t(int)
{
} /* size: 0 */

// <05FA0F90> ../public/meshutils/modelmesh.h:162
inline void FaceStreamIndex_t::FaceStreamIndex_t(int)
{
} /* size: 0 */

// <05F7FAD3> ../public/meshutils/modelmesh.h:296
inline void FaceGroup_t::operator=(const FaceGroup_t &)
{
} /* size: 0 */

// <05F749ED> ../public/meshutils/modelmesh.h:296
void FaceGroup_t::~FaceGroup_t()
{
} /* size: 0 */

// <05F749D0> ../public/meshutils/modelmesh.h:296
inline void FaceGroup_t::~FaceGroup_t()
{
} /* size: 0 */

// <05F6F17E> ../public/meshutils/modelmesh.h:296
void FaceGroup_t::FaceGroup_t()
{
} /* size: 0 */

// <05F6F161> ../public/meshutils/modelmesh.h:296
inline void FaceGroup_t::FaceGroup_t()
{
} /* size: 0 */

// <0606743B> ../public/meshutils/modelmesh.h:310
void CVertex::CVertex(CModelMesh* pMesh, VertexHandle_t hVertex)
{
} /* size: 0 */

// <060673DC> ../public/meshutils/modelmesh.h:335
void CFaceVertex::CFaceVertex(CModelMesh* pMesh, FaceVertexHandle_t hFaceVertex)
{
} /* size: 0 */

// <06067471> ../public/meshutils/modelmesh.h:394
void CFace::CFace(CModelMesh* pMesh, FaceHandle_t hFace)
{
} /* size: 0 */

// <05F9506E> ../public/meshutils/modelmesh.h:854
void CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>::~CUtlVectorMeshComponents()
{
} /* size: 0 */

// <05F95051> ../public/meshutils/modelmesh.h:854
inline void CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>::~CUtlVectorMeshComponents()
{
} /* size: 0 */

// <05F93107> ../public/meshutils/modelmesh.h:854
void CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>::~CUtlVectorMeshComponents()
{
} /* size: 0 */

// <05F930EA> ../public/meshutils/modelmesh.h:854
inline void CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>::~CUtlVectorMeshComponents()
{
} /* size: 0 */

// <05F9309F> ../public/meshutils/modelmesh.h:854
void CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>::~CUtlVectorMeshComponents()
{
} /* size: 0 */

// <05F93082> ../public/meshutils/modelmesh.h:854
inline void CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>::~CUtlVectorMeshComponents()
{
} /* size: 0 */

// <05F8BCAF> ../public/meshutils/modelmesh.h:854
void CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>::~CUtlVectorMeshComponents()
{
} /* size: 0 */

// <05F8BC92> ../public/meshutils/modelmesh.h:854
inline void CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>::~CUtlVectorMeshComponents()
{
} /* size: 0 */

// <05F5410E> ../public/meshutils/modelmesh.h:854
// member functions: 2
// member variable: 1
// class size: 288
class CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> : public CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16> {
public:
	/* class CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16> <ancestor>; */ /* 0 288 */
	/* ../public/meshutils/modelmesh.h:857 */
	void CUtlVectorMeshComponents(CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>* , int);
	void ~CUtlVectorMeshComponents(CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>* );
} __attribute__((__aligned__(8)));

// <05F55A41> ../public/meshutils/modelmesh.h:854
// member functions: 2
// member variable: 1
// class size: 288
class CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t> : public CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, 16> {
public:
	/* class CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, 16> <ancestor>; */ /* 0 288 */
	/* ../public/meshutils/modelmesh.h:857 */
	void CUtlVectorMeshComponents(CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>* , int);
	void ~CUtlVectorMeshComponents(CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>* );
} __attribute__((__aligned__(8)));

// <05F5838E> ../public/meshutils/modelmesh.h:854
// member functions: 2
// member variable: 1
// class size: 288
class CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t> : public CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 16> {
public:
	/* class CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 16> <ancestor>; */ /* 0 288 */
	/* ../public/meshutils/modelmesh.h:857 */
	void CUtlVectorMeshComponents(CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>* , int);
	void ~CUtlVectorMeshComponents(CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>* );
} __attribute__((__aligned__(8)));

// <05F59C52> ../public/meshutils/modelmesh.h:854
// member functions: 2
// member variable: 1
// class size: 288
class CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t> : public CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, 16> {
public:
	/* class CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, 16> <ancestor>; */ /* 0 288 */
	/* ../public/meshutils/modelmesh.h:857 */
	void CUtlVectorMeshComponents(CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>* , int);
	void ~CUtlVectorMeshComponents(CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>* );
} __attribute__((__aligned__(8)));

// <05F7BF97> ../public/meshutils/modelmesh.h:857
void CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>::CUtlVectorMeshComponents(int nGrowSize)
{
} /* size: 0 */

// <05F7BF71> ../public/meshutils/modelmesh.h:857
inline void CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>::CUtlVectorMeshComponents(int nGrowSize)
{
} /* size: 0 */

// <05F7B5DF> ../public/meshutils/modelmesh.h:857
void CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>::CUtlVectorMeshComponents(int nGrowSize)
{
} /* size: 0 */

// <05F7B5B9> ../public/meshutils/modelmesh.h:857
inline void CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>::CUtlVectorMeshComponents(int nGrowSize)
{
} /* size: 0 */

// <05F7AAE8> ../public/meshutils/modelmesh.h:857
void CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>::CUtlVectorMeshComponents(int nGrowSize)
{
} /* size: 0 */

// <05F7AAC2> ../public/meshutils/modelmesh.h:857
inline void CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>::CUtlVectorMeshComponents(int nGrowSize)
{
} /* size: 0 */

// <05F78C0D> ../public/meshutils/modelmesh.h:857
void CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>::CUtlVectorMeshComponents(int nGrowSize)
{
} /* size: 0 */

// <05F78BE7> ../public/meshutils/modelmesh.h:857
inline void CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>::CUtlVectorMeshComponents(int nGrowSize)
{
} /* size: 0 */

// <0601DA98> ../public/meshutils/modelmesh.h:865
// member function: 1
// struct size: 1
struct DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t> {
	/* ../public/meshutils/modelmesh.h:867 */
	unsigned int operator()(const DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>* , const VertexHandle_t& );
};

// <060E1862> ../public/meshutils/modelmesh.h:867
inline void DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>::operator(const VertexHandle_t& handle)
{
} /* size: 0 */

// <0601DAEB> ../public/meshutils/modelmesh.h:874
// member function: 1
// struct size: 1
struct DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> {
	/* ../public/meshutils/modelmesh.h:876 */
	unsigned int operator()(const DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>* , const FaceVertexHandle_t& );
};

// <060E183C> ../public/meshutils/modelmesh.h:876
inline void DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>::operator(const FaceVertexHandle_t& handle)
{
} /* size: 0 */

// <05C6841F> ../public/meshutils/modelmesh.h:883
// member function: 1
// struct size: 1
struct DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t> {
	/* ../public/meshutils/modelmesh.h:885 */
	unsigned int operator()(const DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>* , const EdgeHandle_t& );
};

// <060E1816> ../public/meshutils/modelmesh.h:885
inline void DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>::operator(const EdgeHandle_t& handle)
{
} /* size: 0 */

// <0601DB91> ../public/meshutils/modelmesh.h:892
// member function: 1
// struct size: 1
struct DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t> {
	/* ../public/meshutils/modelmesh.h:894 */
	unsigned int operator()(const DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>* , const FaceHandle_t& );
};

// <060E17F0> ../public/meshutils/modelmesh.h:894
inline void DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>::operator(const FaceHandle_t& handle)
{
} /* size: 0 */

// <05F756F7> ../public/meshutils/modelmesh.h:906
// variables: 2
// function calls: 21
void GetVerticesConnectedToFace<CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > CModelMesh::>(FaceHandle_t hFace, CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL pOutVertices)
{
	const Face_t* pFace; // 911
	FaceVertexHandle_t hCurrentFaceVertex; // 912
	ComponentHandleWithListPointer_t::operator==(
			const ComponentHandleWithListPointer_t& src);  // 908
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int num);  // 1249
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1247
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
		int i);  // 1252
	Construct<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory); // 1252
	AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			ComponentHandleWithListPointer_t& src);  // 916
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 466
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
			int i);  // 470
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponent(
			ComponentHandle_t handle);  // 364
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetComponent(
			ComponentHandle_t handle);  // 1737
	CModelMesh::GetFaceVertex(
			FaceVertexHandle_t hFaceVertex);  // 917
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 919
} /* size: 0, variables: 2, inline expansions: 21 (0 bytes) */

// <05F775E6> ../public/meshutils/modelmesh.h:928
// variables: 2
void GetFaceVerticesConnectedToFace<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> CModelMesh::>(FaceHandle_t hFace, CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>* pOutFaceVertices)
{
	const Face_t* pFace; // 933
	FaceVertexHandle_t hCurrentFaceVertex; // 934
} /* size: 0, variables: 2 */

// <05F756A1> ../public/meshutils/modelmesh.h:928
// variables: 2
void GetFaceVerticesConnectedToFace<CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > CModelMesh::>(FaceHandle_t hFace, CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon pOutFaceVertices)
{
	const Face_t* pFace; // 933
	FaceVertexHandle_t hCurrentFaceVertex; // 934
} /* size: 0, variables: 2 */

// <05F77581> ../public/meshutils/modelmesh.h:950
// variables: 3
void GetEdgesConnectedToFace<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t> CModelMesh::>(FaceHandle_t hFace, CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>* pOutEdges)
{
	const Face_t* pFace; // 955
	FaceVertexHandle_t hCurrentFaceVertex; // 956
	{
		const FaceVertex_t* pFaceVertex; // 960
	}
} /* size: 0, variables: 2 */

// <05F751A8> ../public/meshutils/modelmesh.h:950
// variables: 3
// function calls: 21
void GetEdgesConnectedToFace<CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int> > CModelMesh::>(FaceHandle_t hFace, CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis pOutEdges)
{
	const Face_t* pFace; // 955
	FaceVertexHandle_t hCurrentFaceVertex; // 956
	{
		const FaceVertex_t* pFaceVertex; // 960
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 541
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
				int i);  // 546
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 547
		CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
					ComponentHandle_t handle);  // 466
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
				int i);  // 470
		CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponent(
				ComponentHandle_t handle);  // 364
		CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetComponent(
				ComponentHandle_t handle);  // 1737
		CModelMesh::GetFaceVertex(
				FaceVertexHandle_t hFaceVertex);  // 960
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1196
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
			int i);  // 1201
		CopyConstruct<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
														const ComponentHandleWithListPointer_t& src);  // 1201
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 824
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
				int num);  // 1198
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
				const ComponentHandleWithListPointer_t& src);  // 961
	}
	ComponentHandleWithListPointer_t::operator==(
			const ComponentHandleWithListPointer_t& src);  // 952
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 964
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <05F78AFB> ../public/meshutils/modelmesh.h:973
// variables: 2
void GetFacesConnectedToVertex<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t> CModelMesh::>(VertexHandle_t hVertex, CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>* pOutFaces)
{
	const Vertex_t* pVertex; // 978
	FaceVertexHandle_t hCurrentFaceVertex; // 979
} /* size: 0, variables: 2 */

// <05F75CAF> ../public/meshutils/modelmesh.h:973
// variables: 2
// function calls: 11
void GetFacesConnectedToVertex<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > CModelMesh::>(VertexHandle_t hVertex, CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis pOutFaces)
{
	const Vertex_t* pVertex; // 978
	FaceVertexHandle_t hCurrentFaceVertex; // 979
	ComponentHandleWithListPointer_t::operator==(
			const ComponentHandleWithListPointer_t& src);  // 975
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 980
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1247
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
		int i);  // 1252
	Construct<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory); // 1252
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
			int num);  // 1249
	AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
			ComponentHandleWithListPointer_t& src);  // 982
} /* size: 0, variables: 2, inline expansions: 11 (0 bytes) */

// <06092ABF> ../public/meshutils/modelmesh.h:993
// variables: 2
void GetFaceVerticesConnectedToVertex<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 32> CModelMesh::>(VertexHandle_t hVertex, CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 32>* pOutFaceVertices)
{
	const Vertex_t* pVertex; // 998
	FaceVertexHandle_t hCurrentFaceVertex; // 1002
} /* size: 0, variables: 2 */

// <05F7A4C2> ../public/meshutils/modelmesh.h:993
// variables: 2
// function calls: 21
void GetFaceVerticesConnectedToVertex<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> CModelMesh::>(VertexHandle_t hVertex, CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>* pOutFaceVertices)
{
	const Vertex_t* pVertex; // 998
	FaceVertexHandle_t hCurrentFaceVertex; // 1002
	ComponentHandleWithListPointer_t::operator==(
			const ComponentHandleWithListPointer_t& src);  // 995
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 466
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this,
			int i);  // 470
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponent(
			ComponentHandle_t handle);  // 364
	CModelMeshComponentList<CModelMesh::Vertex_t>::GetComponent(
			ComponentHandle_t handle);  // 1721
	CModelMesh::GetVertex(
			VertexHandle_t hVertex);  // 998
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 1003
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1196
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this,
		int i);  // 1201
	CopyConstruct<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
														const ComponentHandleWithListPointer_t& src);  // 1201
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this,
			int num);  // 1198
	AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this,
			const ComponentHandleWithListPointer_t& src);  // 1005
} /* size: 0, variables: 2, inline expansions: 21 (0 bytes) */

// <05F75C59> ../public/meshutils/modelmesh.h:993
// variables: 2
void GetFaceVerticesConnectedToVertex<CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > CModelMesh::>(VertexHandle_t hVertex, CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon pOutFaceVertices)
{
	const Vertex_t* pVertex; // 998
	FaceVertexHandle_t hCurrentFaceVertex; // 1002
} /* size: 0, variables: 2 */

// <05F7AB04> ../public/meshutils/modelmesh.h:1015
// variables: 6
// function calls: 44
void GetEdgesConnectedToVertex<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t> CModelMesh::>(VertexHandle_t hVertex, CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>* pOutEdges)
{
	CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>, DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t>, int> > edgeTable; // 1020
	{
		UtlHashHandle_t hEntry; // 1025
		{
			int i; // 915
			Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, e this); // 915
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t>::IsValid(); // 917
		}
		Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, e this); // 914
		NextHandle(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t, DefaultH this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t, DefaultH this); // 1025
		operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, e this,
				int i);  // 293
		Key(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t, DefaultH this,
			handle_t idx);  // 1027
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1196
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this,
			int i);  // 1201
		CopyConstruct<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
														const ComponentHandleWithListPointer_t& src);  // 1201
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 824
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this,
				int num);  // 1198
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this,
				const ComponentHandleWithListPointer_t& src);  // 1027
		{
			int i; // 915
			Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, e this); // 915
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t>::IsValid(); // 917
		}
		Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, e this); // 914
		NextHandle(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t, DefaultH this,
				handle_t start);  // 1025
	}
	ComponentHandleWithListPointer_t::operator==(
			const ComponentHandleWithListPointer_t& src);  // 1017
	ValidateGrowSize(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t this); // 475
	CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t this,
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFun this); // 178
	CUtlHashtable(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFun this,
			int minimumSize);  // 1020
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 1023
	Count(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t, DefaultH this); // 1023
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::IsGrowable(); // 881
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 1024
	EnsureCapacity(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this,
			int num);  // 1023
	{
		entry_t* table; // 896
		Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t this); // 896
		{
			int i; // 897
			Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, e this); // 897
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t>::IsValid(); // 899
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t> >(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFun this); // 188
	ValidateAlignment<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t> >(void); // 508
	IsExternallyAllocated(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, e this); // 905
	Purge(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t this); // 903
	Purge(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t this); // 510
	~CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t this); // 188
	~CUtlHashtable(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFun this); // 1029
} /* size: 0, variables: 1, inline expansions: 19 (0 bytes) */

// <05FA54D0> ../public/meshutils/modelmesh.h:1038
// variables: 6
// function calls: 45
void GetFacesConnectedToEdge<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > CModelMesh::>(EdgeHandle_t hEdge, CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis pOutFaces)
{
	const Edge_t* pEdge; // 1043
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> connectedFaceVertices; // 1045
	int nNumConnectedFaces; // 1049
	const int  nNumFaceVertices; // 1051
	ComponentHandleWithListPointer_t::operator==(
			const ComponentHandleWithListPointer_t& src);  // 1040
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			ComponentHandleWithListPointer_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, in this,
					ComponentHandleWithListPointer_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, this); // 1597
	AlignedByteArray_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>::AlignedByteArray_t(); // 228
	Base(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, this); // 231
	CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16, int this,
				int nGrowSize,
				int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this,
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16>::CUtlVectorFixedGrowable(
				int growSize);  // 857
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>::CUtlVectorMeshComponents(
				int nGrowSize);  // 1045
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 1051
	{
		int iFaceVertex; // 1052
		{
			const FaceVertex_t* pFaceVertex; // 1054
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this,
					int i);  // 1054
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 1055
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1196
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
				int i);  // 1201
			CopyConstruct<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
															const ComponentHandleWithListPointer_t& src);  // 1201
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
			Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 368
			ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 824
			GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
					int num);  // 1198
			AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
					const ComponentHandleWithListPointer_t& src);  // 1064
		}
	}
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ConvertToExternalMemory(
				ComponentHandleWithListPointer_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, in this,
				ComponentHandleWithListPointer_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, in this,
				ComponentHandleWithListPointer_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	Base(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, this); // 237
	Purge(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16, int this,
		int numElements);  // 1799
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 1800
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 191
	~CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, in this); // 223
	~CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16, int this); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 478
	CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16>::~CUtlVectorFixedGrowable(); // 854
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>::~CUtlVectorMeshComponents(); // 1071
} /* size: 0, variables: 4, inline expansions: 33 (0 bytes) */

// <05F78CA9> ../public/meshutils/modelmesh.h:1038
// variables: 6
// function calls: 45
void GetFacesConnectedToEdge<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t> CModelMesh::>(EdgeHandle_t hEdge, CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>* pOutFaces)
{
	const Edge_t* pEdge; // 1043
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> connectedFaceVertices; // 1045
	int nNumConnectedFaces; // 1049
	const int  nNumFaceVertices; // 1051
	{
		int iFaceVertex; // 1052
		{
			const FaceVertex_t* pFaceVertex; // 1054
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this,
					int i);  // 1054
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 1055
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1196
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this,
				int i);  // 1201
			CopyConstruct<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
															const ComponentHandleWithListPointer_t& src);  // 1201
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
			Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 368
			ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 824
			GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this,
					int num);  // 1198
			AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this,
					const ComponentHandleWithListPointer_t& src);  // 1064
		}
	}
	ComponentHandleWithListPointer_t::operator==(
			const ComponentHandleWithListPointer_t& src);  // 1040
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			ComponentHandleWithListPointer_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, in this,
					ComponentHandleWithListPointer_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, this); // 1597
	AlignedByteArray_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>::AlignedByteArray_t(); // 228
	Base(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, this); // 231
	CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16, int this,
				int nGrowSize,
				int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this,
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16>::CUtlVectorFixedGrowable(
				int growSize);  // 857
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>::CUtlVectorMeshComponents(
				int nGrowSize);  // 1045
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 1051
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ConvertToExternalMemory(
				ComponentHandleWithListPointer_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, in this,
				ComponentHandleWithListPointer_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, in this,
				ComponentHandleWithListPointer_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	Base(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, this); // 237
	Purge(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16, int this,
		int numElements);  // 1799
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 1800
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 191
	~CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, in this); // 223
	~CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16, int this); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 478
	CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16>::~CUtlVectorFixedGrowable(); // 854
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>::~CUtlVectorMeshComponents(); // 1071
} /* size: 0, variables: 4, inline expansions: 33 (0 bytes) */

// <05F75BCB> ../public/meshutils/modelmesh.h:1038
// variables: 6
void GetFacesConnectedToEdge<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > CModelMesh::>(EdgeHandle_t hEdge, CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis pOutFaces)
{
	const Edge_t* pEdge; // 1043
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> connectedFaceVertices; // 1045
	int nNumConnectedFaces; // 1049
	const int  nNumFaceVertices; // 1051
	{
		int iFaceVertex; // 1052
		{
			const FaceVertex_t* pFaceVertex; // 1054
		}
	}
} /* size: 0, variables: 4 */

// <0608E5B0> ../public/meshutils/modelmesh.h:1078
void CVertex::SetValue<ModelMeshIntFloat_t>(VertexStreamIndex_t nStream, const ModelMeshIntFloat_t& value)
{
} /* size: 0 */

// <061D3147> ../public/meshutils/modelmesh.h:1088
void CVertex::GetValue<Vector>(VertexStreamIndex_t nStream)
{
} /* size: 0 */

// <0608E650> ../public/meshutils/modelmesh.h:1088
void CVertex::GetValue<ModelMeshIntFloat_t>(VertexStreamIndex_t nStream)
{
} /* size: 0 */

// <061D3041> ../public/meshutils/modelmesh.h:1098
void CFaceVertex::SetValue<Vector4D>(FaceVertexStreamIndex_t nStream, const Vector4D& value)
{
} /* size: 0 */

// <060933A3> ../public/meshutils/modelmesh.h:1098
void CFaceVertex::SetValue<Vector>(FaceVertexStreamIndex_t nStream, const Vector& value)
{
} /* size: 0 */

// <061D30F4> ../public/meshutils/modelmesh.h:1108
void CFaceVertex::GetValue<Vector>(FaceVertexStreamIndex_t nStream)
{
} /* size: 0 */

// <061D30C5> ../public/meshutils/modelmesh.h:1108
void CFaceVertex::GetValue<Vector2D>(FaceVertexStreamIndex_t nStream)
{
} /* size: 0 */

// <060935C5> ../public/meshutils/modelmesh.h:1118
void CFaceVertex::GetValue<Vector>(VertexStreamIndex_t nVertexStream)
{
} /* size: 0 */

