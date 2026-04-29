
//
// public/meshutils/modelmeshdeltaset.h
//
//	referenced by: libengine2.so
//
//	functions: 62
//	classes: 12
//

// <05C52CB3> ../public/meshutils/modelmeshdeltaset.h:13
// member functions: 18
// member variables: 2
// class size: 40
class CModelMeshDeltaSet<CModelMesh::Vertex_t> {
	/* ../public/meshutils/modelmeshdeltaset.h:20 */
	typedef struct CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int> DeltaIndex_t;
	/* ../public/meshutils/modelmeshdeltaset.h:21 */
	DeltaIndex_t InvalidDeltaIndex(void);
	/* ../public/meshutils/modelmeshdeltaset.h:93 */
	void CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::Vertex_t>* , const CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:103 */
	void ~CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:112 */
	CModelMeshDeltaSet<CModelMesh::Vertex_t>& operator=(CModelMeshDeltaSet<CModelMesh::Vertex_t>* , const CModelMeshDeltaSet<CModelMesh::Vertex_t>& );
	/* ../public/meshutils/modelmeshdeltaset.h:135 */
	int GetNumDeltas(const CModelMeshDeltaSet<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:144 */
	void RemoveAll(CModelMeshDeltaSet<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:153 */
	void RemoveValueForComponent(CModelMeshDeltaSet<CModelMesh::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdeltaset.h:16 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* ../public/meshutils/modelmeshdeltaset.h:166 */
	DeltaIndex_t AddDelta(CModelMeshDeltaSet<CModelMesh::Vertex_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:186 */
	DeltaIndex_t FindOrCreateDelta(CModelMeshDeltaSet<CModelMesh::Vertex_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:199 */
	void RemoveDelta(CModelMeshDeltaSet<CModelMesh::Vertex_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:214 */
	DeltaIndex_t FindDelta(const CModelMeshDeltaSet<CModelMesh::Vertex_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:235 */
	bool CanAppendDeltaSet(const CModelMeshDeltaSet<CModelMesh::Vertex_t>* , const CModelMeshDeltaSet<CModelMesh::Vertex_t>& );
	/* ../public/meshutils/modelmeshdeltaset.h:262 */
	bool AppendDeltaSet(CModelMeshDeltaSet<CModelMesh::Vertex_t>* , const CModelMeshDeltaSet<CModelMesh::Vertex_t>& , CHandleTranslator* );
	/* ../public/meshutils/modelmeshdeltaset.h:292 */
	CModelMeshDelta<CModelMesh::Vertex_t>* GetDelta(CModelMeshDeltaSet<CModelMesh::Vertex_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:305 */
	const CModelMeshDelta<CModelMesh::Vertex_t>* GetDelta(const CModelMeshDeltaSet<CModelMesh::Vertex_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:318 */
	bool CheckIntegrity(const CModelMeshDeltaSet<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:341 */
	void GetStreamsOfType(CModelMeshDeltaSet<CModelMesh::Vertex_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
private:
	/* ../public/meshutils/modelmeshdeltaset.h:80 */
	void CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::Vertex_t>* , const CModelMeshDeltaSet<CModelMesh::Vertex_t>& );
	const const class CHalfEdgeComponentList<CModelMesh::Vertex_t> * m_pComponentList; /* 0 8 */
	CUtlVector<CModelMeshDelta<CModelMesh::Vertex_t>*, CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>*, int> > m_Deltas; /* 8 32 */
};

// <05C583D1> ../public/meshutils/modelmeshdeltaset.h:13
// member functions: 18
// member variables: 2
// class size: 40
class CModelMeshDeltaSet<CModelMesh::FaceVertex_t> {
	/* ../public/meshutils/modelmeshdeltaset.h:20 */
	typedef struct CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int> DeltaIndex_t;
	/* ../public/meshutils/modelmeshdeltaset.h:21 */
	DeltaIndex_t InvalidDeltaIndex(void);
	/* ../public/meshutils/modelmeshdeltaset.h:93 */
	void CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:103 */
	void ~CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:112 */
	CModelMeshDeltaSet<CModelMesh::FaceVertex_t>& operator=(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>& );
	/* ../public/meshutils/modelmeshdeltaset.h:135 */
	int GetNumDeltas(const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:144 */
	void RemoveAll(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:153 */
	void RemoveValueForComponent(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdeltaset.h:16 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* ../public/meshutils/modelmeshdeltaset.h:166 */
	DeltaIndex_t AddDelta(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:186 */
	DeltaIndex_t FindOrCreateDelta(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:199 */
	void RemoveDelta(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:214 */
	DeltaIndex_t FindDelta(const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:235 */
	bool CanAppendDeltaSet(const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>& );
	/* ../public/meshutils/modelmeshdeltaset.h:262 */
	bool AppendDeltaSet(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>& , CHandleTranslator* );
	/* ../public/meshutils/modelmeshdeltaset.h:292 */
	CModelMeshDelta<CModelMesh::FaceVertex_t>* GetDelta(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:305 */
	const CModelMeshDelta<CModelMesh::FaceVertex_t>* GetDelta(const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:318 */
	bool CheckIntegrity(const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:341 */
	void GetStreamsOfType(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
private:
	/* ../public/meshutils/modelmeshdeltaset.h:80 */
	void CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>& );
	const const class CHalfEdgeComponentList<CModelMesh::FaceVertex_t> * m_pComponentList; /* 0 8 */
	CUtlVector<CModelMeshDelta<CModelMesh::FaceVertex_t>*, CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>*, int> > m_Deltas; /* 8 32 */
};

// <05C5D982> ../public/meshutils/modelmeshdeltaset.h:13
// member functions: 18
// member variables: 2
// class size: 40
class CModelMeshDeltaSet<CModelMesh::Edge_t> {
	/* ../public/meshutils/modelmeshdeltaset.h:20 */
	typedef struct CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int> DeltaIndex_t;
	/* ../public/meshutils/modelmeshdeltaset.h:21 */
	DeltaIndex_t InvalidDeltaIndex(void);
	/* ../public/meshutils/modelmeshdeltaset.h:93 */
	void CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::Edge_t>* , const CHalfEdgeComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:103 */
	void ~CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:112 */
	CModelMeshDeltaSet<CModelMesh::Edge_t>& operator=(CModelMeshDeltaSet<CModelMesh::Edge_t>* , const CModelMeshDeltaSet<CModelMesh::Edge_t>& );
	/* ../public/meshutils/modelmeshdeltaset.h:135 */
	int GetNumDeltas(const CModelMeshDeltaSet<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:144 */
	void RemoveAll(CModelMeshDeltaSet<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:153 */
	void RemoveValueForComponent(CModelMeshDeltaSet<CModelMesh::Edge_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdeltaset.h:16 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* ../public/meshutils/modelmeshdeltaset.h:166 */
	DeltaIndex_t AddDelta(CModelMeshDeltaSet<CModelMesh::Edge_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:186 */
	DeltaIndex_t FindOrCreateDelta(CModelMeshDeltaSet<CModelMesh::Edge_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:199 */
	void RemoveDelta(CModelMeshDeltaSet<CModelMesh::Edge_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:214 */
	DeltaIndex_t FindDelta(const CModelMeshDeltaSet<CModelMesh::Edge_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:235 */
	bool CanAppendDeltaSet(const CModelMeshDeltaSet<CModelMesh::Edge_t>* , const CModelMeshDeltaSet<CModelMesh::Edge_t>& );
	/* ../public/meshutils/modelmeshdeltaset.h:262 */
	bool AppendDeltaSet(CModelMeshDeltaSet<CModelMesh::Edge_t>* , const CModelMeshDeltaSet<CModelMesh::Edge_t>& , CHandleTranslator* );
	/* ../public/meshutils/modelmeshdeltaset.h:292 */
	CModelMeshDelta<CModelMesh::Edge_t>* GetDelta(CModelMeshDeltaSet<CModelMesh::Edge_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:305 */
	const CModelMeshDelta<CModelMesh::Edge_t>* GetDelta(const CModelMeshDeltaSet<CModelMesh::Edge_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:318 */
	bool CheckIntegrity(const CModelMeshDeltaSet<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:341 */
	void GetStreamsOfType(CModelMeshDeltaSet<CModelMesh::Edge_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
private:
	/* ../public/meshutils/modelmeshdeltaset.h:80 */
	void CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::Edge_t>* , const CModelMeshDeltaSet<CModelMesh::Edge_t>& );
	const const class CHalfEdgeComponentList<CModelMesh::Edge_t> * m_pComponentList; /* 0 8 */
	CUtlVector<CModelMeshDelta<CModelMesh::Edge_t>*, CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>*, int> > m_Deltas; /* 8 32 */
};

// <05C62F33> ../public/meshutils/modelmeshdeltaset.h:13
// member functions: 18
// member variables: 2
// class size: 40
class CModelMeshDeltaSet<CModelMesh::Face_t> {
	/* ../public/meshutils/modelmeshdeltaset.h:20 */
	typedef struct CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int> DeltaIndex_t;
	/* ../public/meshutils/modelmeshdeltaset.h:21 */
	DeltaIndex_t InvalidDeltaIndex(void);
	/* ../public/meshutils/modelmeshdeltaset.h:93 */
	void CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::Face_t>* , const CHalfEdgeComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:103 */
	void ~CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:112 */
	CModelMeshDeltaSet<CModelMesh::Face_t>& operator=(CModelMeshDeltaSet<CModelMesh::Face_t>* , const CModelMeshDeltaSet<CModelMesh::Face_t>& );
	/* ../public/meshutils/modelmeshdeltaset.h:135 */
	int GetNumDeltas(const CModelMeshDeltaSet<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:144 */
	void RemoveAll(CModelMeshDeltaSet<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:153 */
	void RemoveValueForComponent(CModelMeshDeltaSet<CModelMesh::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdeltaset.h:16 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* ../public/meshutils/modelmeshdeltaset.h:166 */
	DeltaIndex_t AddDelta(CModelMeshDeltaSet<CModelMesh::Face_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:186 */
	DeltaIndex_t FindOrCreateDelta(CModelMeshDeltaSet<CModelMesh::Face_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:199 */
	void RemoveDelta(CModelMeshDeltaSet<CModelMesh::Face_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:214 */
	DeltaIndex_t FindDelta(const CModelMeshDeltaSet<CModelMesh::Face_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:235 */
	bool CanAppendDeltaSet(const CModelMeshDeltaSet<CModelMesh::Face_t>* , const CModelMeshDeltaSet<CModelMesh::Face_t>& );
	/* ../public/meshutils/modelmeshdeltaset.h:262 */
	bool AppendDeltaSet(CModelMeshDeltaSet<CModelMesh::Face_t>* , const CModelMeshDeltaSet<CModelMesh::Face_t>& , CHandleTranslator* );
	/* ../public/meshutils/modelmeshdeltaset.h:292 */
	CModelMeshDelta<CModelMesh::Face_t>* GetDelta(CModelMeshDeltaSet<CModelMesh::Face_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:305 */
	const CModelMeshDelta<CModelMesh::Face_t>* GetDelta(const CModelMeshDeltaSet<CModelMesh::Face_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:318 */
	bool CheckIntegrity(const CModelMeshDeltaSet<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:341 */
	void GetStreamsOfType(CModelMeshDeltaSet<CModelMesh::Face_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
private:
	/* ../public/meshutils/modelmeshdeltaset.h:80 */
	void CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::Face_t>* , const CModelMeshDeltaSet<CModelMesh::Face_t>& );
	const const class CHalfEdgeComponentList<CModelMesh::Face_t> * m_pComponentList; /* 0 8 */
	CUtlVector<CModelMeshDelta<CModelMesh::Face_t>*, CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>*, int> > m_Deltas; /* 8 32 */
};

// <05F39480> ../public/meshutils/modelmeshdeltaset.h:13
// member functions: 18
// member variables: 2
// class size: 40
class CModelMeshDeltaSet<CModelMesh::Vertex_t> {
	/* ../public/meshutils/modelmeshdeltaset.h:20 */
	typedef struct CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int> DeltaIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmeshdeltaset.h:21 */
	DeltaIndex_t InvalidDeltaIndex(void);
	/* ../public/meshutils/modelmeshdeltaset.h:93 */
	void CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::Vertex_t>* , const CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:103 */
	void ~CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:112 */
	CModelMeshDeltaSet<CModelMesh::Vertex_t>& operator=(CModelMeshDeltaSet<CModelMesh::Vertex_t>* , const CModelMeshDeltaSet<CModelMesh::Vertex_t>& );
	/* ../public/meshutils/modelmeshdeltaset.h:135 */
	int GetNumDeltas(const CModelMeshDeltaSet<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:144 */
	void RemoveAll(CModelMeshDeltaSet<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:153 */
	void RemoveValueForComponent(CModelMeshDeltaSet<CModelMesh::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdeltaset.h:16 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* ../public/meshutils/modelmeshdeltaset.h:166 */
	DeltaIndex_t AddDelta(CModelMeshDeltaSet<CModelMesh::Vertex_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:186 */
	DeltaIndex_t FindOrCreateDelta(CModelMeshDeltaSet<CModelMesh::Vertex_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:199 */
	void RemoveDelta(CModelMeshDeltaSet<CModelMesh::Vertex_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:214 */
	DeltaIndex_t FindDelta(const CModelMeshDeltaSet<CModelMesh::Vertex_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:235 */
	bool CanAppendDeltaSet(const CModelMeshDeltaSet<CModelMesh::Vertex_t>* , const CModelMeshDeltaSet<CModelMesh::Vertex_t>& );
	/* ../public/meshutils/modelmeshdeltaset.h:262 */
	bool AppendDeltaSet(CModelMeshDeltaSet<CModelMesh::Vertex_t>* , const CModelMeshDeltaSet<CModelMesh::Vertex_t>& , CHandleTranslator* );
	/* ../public/meshutils/modelmeshdeltaset.h:292 */
	CModelMeshDelta<CModelMesh::Vertex_t>* GetDelta(CModelMeshDeltaSet<CModelMesh::Vertex_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:305 */
	const CModelMeshDelta<CModelMesh::Vertex_t>* GetDelta(const CModelMeshDeltaSet<CModelMesh::Vertex_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:318 */
	bool CheckIntegrity(const CModelMeshDeltaSet<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:341 */
	void GetStreamsOfType(CModelMeshDeltaSet<CModelMesh::Vertex_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
private:
	/* ../public/meshutils/modelmeshdeltaset.h:80 */
	void CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::Vertex_t>* , const CModelMeshDeltaSet<CModelMesh::Vertex_t>& );
	const const class CHalfEdgeComponentList<CModelMesh::Vertex_t> * m_pComponentList; /* 0 8 */
	CUtlVector<CModelMeshDelta<CModelMesh::Vertex_t>*, CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>*, int> > m_Deltas; /* 8 32 */
	struct DeltaIndexTag_t {
	};
};

// <05F3F268> ../public/meshutils/modelmeshdeltaset.h:13
// member functions: 18
// member variables: 2
// class size: 40
class CModelMeshDeltaSet<CModelMesh::FaceVertex_t> {
	/* ../public/meshutils/modelmeshdeltaset.h:20 */
	typedef struct CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int> DeltaIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmeshdeltaset.h:21 */
	DeltaIndex_t InvalidDeltaIndex(void);
	/* ../public/meshutils/modelmeshdeltaset.h:93 */
	void CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:103 */
	void ~CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:112 */
	CModelMeshDeltaSet<CModelMesh::FaceVertex_t>& operator=(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>& );
	/* ../public/meshutils/modelmeshdeltaset.h:135 */
	int GetNumDeltas(const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:144 */
	void RemoveAll(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:153 */
	void RemoveValueForComponent(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdeltaset.h:16 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* ../public/meshutils/modelmeshdeltaset.h:166 */
	DeltaIndex_t AddDelta(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:186 */
	DeltaIndex_t FindOrCreateDelta(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:199 */
	void RemoveDelta(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:214 */
	DeltaIndex_t FindDelta(const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:235 */
	bool CanAppendDeltaSet(const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>& );
	/* ../public/meshutils/modelmeshdeltaset.h:262 */
	bool AppendDeltaSet(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>& , CHandleTranslator* );
	/* ../public/meshutils/modelmeshdeltaset.h:292 */
	CModelMeshDelta<CModelMesh::FaceVertex_t>* GetDelta(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:305 */
	const CModelMeshDelta<CModelMesh::FaceVertex_t>* GetDelta(const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:318 */
	bool CheckIntegrity(const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:341 */
	void GetStreamsOfType(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
private:
	/* ../public/meshutils/modelmeshdeltaset.h:80 */
	void CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>& );
	const const class CHalfEdgeComponentList<CModelMesh::FaceVertex_t> * m_pComponentList; /* 0 8 */
	CUtlVector<CModelMeshDelta<CModelMesh::FaceVertex_t>*, CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>*, int> > m_Deltas; /* 8 32 */
	struct DeltaIndexTag_t {
	};
};

// <05F45030> ../public/meshutils/modelmeshdeltaset.h:13
// member functions: 18
// member variables: 2
// class size: 40
class CModelMeshDeltaSet<CModelMesh::Edge_t> {
	/* ../public/meshutils/modelmeshdeltaset.h:20 */
	typedef struct CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int> DeltaIndex_t;
	/* ../public/meshutils/modelmeshdeltaset.h:21 */
	DeltaIndex_t InvalidDeltaIndex(void);
	/* ../public/meshutils/modelmeshdeltaset.h:93 */
	void CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::Edge_t>* , const CHalfEdgeComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:103 */
	void ~CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:112 */
	CModelMeshDeltaSet<CModelMesh::Edge_t>& operator=(CModelMeshDeltaSet<CModelMesh::Edge_t>* , const CModelMeshDeltaSet<CModelMesh::Edge_t>& );
	/* ../public/meshutils/modelmeshdeltaset.h:135 */
	int GetNumDeltas(const CModelMeshDeltaSet<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:144 */
	void RemoveAll(CModelMeshDeltaSet<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:153 */
	void RemoveValueForComponent(CModelMeshDeltaSet<CModelMesh::Edge_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdeltaset.h:16 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* ../public/meshutils/modelmeshdeltaset.h:166 */
	DeltaIndex_t AddDelta(CModelMeshDeltaSet<CModelMesh::Edge_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:186 */
	DeltaIndex_t FindOrCreateDelta(CModelMeshDeltaSet<CModelMesh::Edge_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:199 */
	void RemoveDelta(CModelMeshDeltaSet<CModelMesh::Edge_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:214 */
	DeltaIndex_t FindDelta(const CModelMeshDeltaSet<CModelMesh::Edge_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:235 */
	bool CanAppendDeltaSet(const CModelMeshDeltaSet<CModelMesh::Edge_t>* , const CModelMeshDeltaSet<CModelMesh::Edge_t>& );
	/* ../public/meshutils/modelmeshdeltaset.h:262 */
	bool AppendDeltaSet(CModelMeshDeltaSet<CModelMesh::Edge_t>* , const CModelMeshDeltaSet<CModelMesh::Edge_t>& , CHandleTranslator* );
	/* ../public/meshutils/modelmeshdeltaset.h:292 */
	CModelMeshDelta<CModelMesh::Edge_t>* GetDelta(CModelMeshDeltaSet<CModelMesh::Edge_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:305 */
	const CModelMeshDelta<CModelMesh::Edge_t>* GetDelta(const CModelMeshDeltaSet<CModelMesh::Edge_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:318 */
	bool CheckIntegrity(const CModelMeshDeltaSet<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:341 */
	void GetStreamsOfType(CModelMeshDeltaSet<CModelMesh::Edge_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
private:
	/* ../public/meshutils/modelmeshdeltaset.h:80 */
	void CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::Edge_t>* , const CModelMeshDeltaSet<CModelMesh::Edge_t>& );
	const const class CHalfEdgeComponentList<CModelMesh::Edge_t> * m_pComponentList; /* 0 8 */
	CUtlVector<CModelMeshDelta<CModelMesh::Edge_t>*, CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>*, int> > m_Deltas; /* 8 32 */
	struct DeltaIndexTag_t {
	};
};

// <05F4ADF3> ../public/meshutils/modelmeshdeltaset.h:13
// member functions: 18
// member variables: 2
// class size: 40
class CModelMeshDeltaSet<CModelMesh::Face_t> {
	/* ../public/meshutils/modelmeshdeltaset.h:20 */
	typedef struct CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int> DeltaIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmeshdeltaset.h:21 */
	DeltaIndex_t InvalidDeltaIndex(void);
	/* ../public/meshutils/modelmeshdeltaset.h:93 */
	void CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::Face_t>* , const CHalfEdgeComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:103 */
	void ~CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:112 */
	CModelMeshDeltaSet<CModelMesh::Face_t>& operator=(CModelMeshDeltaSet<CModelMesh::Face_t>* , const CModelMeshDeltaSet<CModelMesh::Face_t>& );
	/* ../public/meshutils/modelmeshdeltaset.h:135 */
	int GetNumDeltas(const CModelMeshDeltaSet<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:144 */
	void RemoveAll(CModelMeshDeltaSet<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:153 */
	void RemoveValueForComponent(CModelMeshDeltaSet<CModelMesh::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdeltaset.h:16 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* ../public/meshutils/modelmeshdeltaset.h:166 */
	DeltaIndex_t AddDelta(CModelMeshDeltaSet<CModelMesh::Face_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:186 */
	DeltaIndex_t FindOrCreateDelta(CModelMeshDeltaSet<CModelMesh::Face_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:199 */
	void RemoveDelta(CModelMeshDeltaSet<CModelMesh::Face_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:214 */
	DeltaIndex_t FindDelta(const CModelMeshDeltaSet<CModelMesh::Face_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:235 */
	bool CanAppendDeltaSet(const CModelMeshDeltaSet<CModelMesh::Face_t>* , const CModelMeshDeltaSet<CModelMesh::Face_t>& );
	/* ../public/meshutils/modelmeshdeltaset.h:262 */
	bool AppendDeltaSet(CModelMeshDeltaSet<CModelMesh::Face_t>* , const CModelMeshDeltaSet<CModelMesh::Face_t>& , CHandleTranslator* );
	/* ../public/meshutils/modelmeshdeltaset.h:292 */
	CModelMeshDelta<CModelMesh::Face_t>* GetDelta(CModelMeshDeltaSet<CModelMesh::Face_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:305 */
	const CModelMeshDelta<CModelMesh::Face_t>* GetDelta(const CModelMeshDeltaSet<CModelMesh::Face_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:318 */
	bool CheckIntegrity(const CModelMeshDeltaSet<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:341 */
	void GetStreamsOfType(CModelMeshDeltaSet<CModelMesh::Face_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
private:
	/* ../public/meshutils/modelmeshdeltaset.h:80 */
	void CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::Face_t>* , const CModelMeshDeltaSet<CModelMesh::Face_t>& );
	const const class CHalfEdgeComponentList<CModelMesh::Face_t> * m_pComponentList; /* 0 8 */
	CUtlVector<CModelMeshDelta<CModelMesh::Face_t>*, CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>*, int> > m_Deltas; /* 8 32 */
	struct DeltaIndexTag_t {
	};
};

// <06004E52> ../public/meshutils/modelmeshdeltaset.h:13
// member functions: 18
// member variables: 2
// class size: 40
class CModelMeshDeltaSet<CModelMesh::Vertex_t> {
	/* ../public/meshutils/modelmeshdeltaset.h:20 */
	typedef struct CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int> DeltaIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmeshdeltaset.h:21 */
	DeltaIndex_t InvalidDeltaIndex(void);
	/* ../public/meshutils/modelmeshdeltaset.h:93 */
	void CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::Vertex_t>* , const CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:103 */
	void ~CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:112 */
	CModelMeshDeltaSet<CModelMesh::Vertex_t>& operator=(CModelMeshDeltaSet<CModelMesh::Vertex_t>* , const CModelMeshDeltaSet<CModelMesh::Vertex_t>& );
	/* ../public/meshutils/modelmeshdeltaset.h:135 */
	int GetNumDeltas(const CModelMeshDeltaSet<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:144 */
	void RemoveAll(CModelMeshDeltaSet<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:153 */
	void RemoveValueForComponent(CModelMeshDeltaSet<CModelMesh::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdeltaset.h:16 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* ../public/meshutils/modelmeshdeltaset.h:166 */
	DeltaIndex_t AddDelta(CModelMeshDeltaSet<CModelMesh::Vertex_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:186 */
	DeltaIndex_t FindOrCreateDelta(CModelMeshDeltaSet<CModelMesh::Vertex_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:199 */
	void RemoveDelta(CModelMeshDeltaSet<CModelMesh::Vertex_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:214 */
	DeltaIndex_t FindDelta(const CModelMeshDeltaSet<CModelMesh::Vertex_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:235 */
	bool CanAppendDeltaSet(const CModelMeshDeltaSet<CModelMesh::Vertex_t>* , const CModelMeshDeltaSet<CModelMesh::Vertex_t>& );
	/* ../public/meshutils/modelmeshdeltaset.h:262 */
	bool AppendDeltaSet(CModelMeshDeltaSet<CModelMesh::Vertex_t>* , const CModelMeshDeltaSet<CModelMesh::Vertex_t>& , CHandleTranslator* );
	/* ../public/meshutils/modelmeshdeltaset.h:292 */
	CModelMeshDelta<CModelMesh::Vertex_t>* GetDelta(CModelMeshDeltaSet<CModelMesh::Vertex_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:305 */
	const CModelMeshDelta<CModelMesh::Vertex_t>* GetDelta(const CModelMeshDeltaSet<CModelMesh::Vertex_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:318 */
	bool CheckIntegrity(const CModelMeshDeltaSet<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:341 */
	void GetStreamsOfType(CModelMeshDeltaSet<CModelMesh::Vertex_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
private:
	/* ../public/meshutils/modelmeshdeltaset.h:80 */
	void CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::Vertex_t>* , const CModelMeshDeltaSet<CModelMesh::Vertex_t>& );
	const const class CHalfEdgeComponentList<CModelMesh::Vertex_t> * m_pComponentList; /* 0 8 */
	CUtlVector<CModelMeshDelta<CModelMesh::Vertex_t>*, CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>*, int> > m_Deltas; /* 8 32 */
	/* ../public/meshutils/modelmeshdeltaset.h:19 */
	struct DeltaIndexTag_t {
	};
};

// <0600AD14> ../public/meshutils/modelmeshdeltaset.h:13
// member functions: 18
// member variables: 2
// class size: 40
class CModelMeshDeltaSet<CModelMesh::FaceVertex_t> {
	/* ../public/meshutils/modelmeshdeltaset.h:20 */
	typedef struct CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int> DeltaIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmeshdeltaset.h:21 */
	DeltaIndex_t InvalidDeltaIndex(void);
	/* ../public/meshutils/modelmeshdeltaset.h:93 */
	void CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:103 */
	void ~CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:112 */
	CModelMeshDeltaSet<CModelMesh::FaceVertex_t>& operator=(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>& );
	/* ../public/meshutils/modelmeshdeltaset.h:135 */
	int GetNumDeltas(const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:144 */
	void RemoveAll(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:153 */
	void RemoveValueForComponent(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdeltaset.h:16 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* ../public/meshutils/modelmeshdeltaset.h:166 */
	DeltaIndex_t AddDelta(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:186 */
	DeltaIndex_t FindOrCreateDelta(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:199 */
	void RemoveDelta(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:214 */
	DeltaIndex_t FindDelta(const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:235 */
	bool CanAppendDeltaSet(const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>& );
	/* ../public/meshutils/modelmeshdeltaset.h:262 */
	bool AppendDeltaSet(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>& , CHandleTranslator* );
	/* ../public/meshutils/modelmeshdeltaset.h:292 */
	CModelMeshDelta<CModelMesh::FaceVertex_t>* GetDelta(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:305 */
	const CModelMeshDelta<CModelMesh::FaceVertex_t>* GetDelta(const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:318 */
	bool CheckIntegrity(const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:341 */
	void GetStreamsOfType(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
private:
	/* ../public/meshutils/modelmeshdeltaset.h:80 */
	void CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::FaceVertex_t>* , const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>& );
	const const class CHalfEdgeComponentList<CModelMesh::FaceVertex_t> * m_pComponentList; /* 0 8 */
	CUtlVector<CModelMeshDelta<CModelMesh::FaceVertex_t>*, CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>*, int> > m_Deltas; /* 8 32 */
	/* ../public/meshutils/modelmeshdeltaset.h:19 */
	struct DeltaIndexTag_t {
	};
};

// <06010BD6> ../public/meshutils/modelmeshdeltaset.h:13
// member functions: 18
// member variables: 2
// class size: 40
class CModelMeshDeltaSet<CModelMesh::Edge_t> {
	/* ../public/meshutils/modelmeshdeltaset.h:20 */
	typedef struct CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int> DeltaIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmeshdeltaset.h:21 */
	DeltaIndex_t InvalidDeltaIndex(void);
	/* ../public/meshutils/modelmeshdeltaset.h:93 */
	void CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::Edge_t>* , const CHalfEdgeComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:103 */
	void ~CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:112 */
	CModelMeshDeltaSet<CModelMesh::Edge_t>& operator=(CModelMeshDeltaSet<CModelMesh::Edge_t>* , const CModelMeshDeltaSet<CModelMesh::Edge_t>& );
	/* ../public/meshutils/modelmeshdeltaset.h:135 */
	int GetNumDeltas(const CModelMeshDeltaSet<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:144 */
	void RemoveAll(CModelMeshDeltaSet<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:153 */
	void RemoveValueForComponent(CModelMeshDeltaSet<CModelMesh::Edge_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdeltaset.h:16 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* ../public/meshutils/modelmeshdeltaset.h:166 */
	DeltaIndex_t AddDelta(CModelMeshDeltaSet<CModelMesh::Edge_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:186 */
	DeltaIndex_t FindOrCreateDelta(CModelMeshDeltaSet<CModelMesh::Edge_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:199 */
	void RemoveDelta(CModelMeshDeltaSet<CModelMesh::Edge_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:214 */
	DeltaIndex_t FindDelta(const CModelMeshDeltaSet<CModelMesh::Edge_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:235 */
	bool CanAppendDeltaSet(const CModelMeshDeltaSet<CModelMesh::Edge_t>* , const CModelMeshDeltaSet<CModelMesh::Edge_t>& );
	/* ../public/meshutils/modelmeshdeltaset.h:262 */
	bool AppendDeltaSet(CModelMeshDeltaSet<CModelMesh::Edge_t>* , const CModelMeshDeltaSet<CModelMesh::Edge_t>& , CHandleTranslator* );
	/* ../public/meshutils/modelmeshdeltaset.h:292 */
	CModelMeshDelta<CModelMesh::Edge_t>* GetDelta(CModelMeshDeltaSet<CModelMesh::Edge_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:305 */
	const CModelMeshDelta<CModelMesh::Edge_t>* GetDelta(const CModelMeshDeltaSet<CModelMesh::Edge_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:318 */
	bool CheckIntegrity(const CModelMeshDeltaSet<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:341 */
	void GetStreamsOfType(CModelMeshDeltaSet<CModelMesh::Edge_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
private:
	/* ../public/meshutils/modelmeshdeltaset.h:80 */
	void CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::Edge_t>* , const CModelMeshDeltaSet<CModelMesh::Edge_t>& );
	const const class CHalfEdgeComponentList<CModelMesh::Edge_t> * m_pComponentList; /* 0 8 */
	CUtlVector<CModelMeshDelta<CModelMesh::Edge_t>*, CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>*, int> > m_Deltas; /* 8 32 */
	/* ../public/meshutils/modelmeshdeltaset.h:19 */
	struct DeltaIndexTag_t {
	};
};

// <06016A98> ../public/meshutils/modelmeshdeltaset.h:13
// member functions: 18
// member variables: 2
// class size: 40
class CModelMeshDeltaSet<CModelMesh::Face_t> {
	/* ../public/meshutils/modelmeshdeltaset.h:20 */
	typedef struct CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int> DeltaIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmeshdeltaset.h:21 */
	DeltaIndex_t InvalidDeltaIndex(void);
	/* ../public/meshutils/modelmeshdeltaset.h:93 */
	void CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::Face_t>* , const CHalfEdgeComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:103 */
	void ~CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:112 */
	CModelMeshDeltaSet<CModelMesh::Face_t>& operator=(CModelMeshDeltaSet<CModelMesh::Face_t>* , const CModelMeshDeltaSet<CModelMesh::Face_t>& );
	/* ../public/meshutils/modelmeshdeltaset.h:135 */
	int GetNumDeltas(const CModelMeshDeltaSet<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:144 */
	void RemoveAll(CModelMeshDeltaSet<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:153 */
	void RemoveValueForComponent(CModelMeshDeltaSet<CModelMesh::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdeltaset.h:16 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* ../public/meshutils/modelmeshdeltaset.h:166 */
	DeltaIndex_t AddDelta(CModelMeshDeltaSet<CModelMesh::Face_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:186 */
	DeltaIndex_t FindOrCreateDelta(CModelMeshDeltaSet<CModelMesh::Face_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:199 */
	void RemoveDelta(CModelMeshDeltaSet<CModelMesh::Face_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:214 */
	DeltaIndex_t FindDelta(const CModelMeshDeltaSet<CModelMesh::Face_t>* , const char* );
	/* ../public/meshutils/modelmeshdeltaset.h:235 */
	bool CanAppendDeltaSet(const CModelMeshDeltaSet<CModelMesh::Face_t>* , const CModelMeshDeltaSet<CModelMesh::Face_t>& );
	/* ../public/meshutils/modelmeshdeltaset.h:262 */
	bool AppendDeltaSet(CModelMeshDeltaSet<CModelMesh::Face_t>* , const CModelMeshDeltaSet<CModelMesh::Face_t>& , CHandleTranslator* );
	/* ../public/meshutils/modelmeshdeltaset.h:292 */
	CModelMeshDelta<CModelMesh::Face_t>* GetDelta(CModelMeshDeltaSet<CModelMesh::Face_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:305 */
	const CModelMeshDelta<CModelMesh::Face_t>* GetDelta(const CModelMeshDeltaSet<CModelMesh::Face_t>* , DeltaIndex_t);
	/* ../public/meshutils/modelmeshdeltaset.h:318 */
	bool CheckIntegrity(const CModelMeshDeltaSet<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdeltaset.h:341 */
	void GetStreamsOfType(CModelMeshDeltaSet<CModelMesh::Face_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
private:
	/* ../public/meshutils/modelmeshdeltaset.h:80 */
	void CModelMeshDeltaSet(CModelMeshDeltaSet<CModelMesh::Face_t>* , const CModelMeshDeltaSet<CModelMesh::Face_t>& );
	const const class CHalfEdgeComponentList<CModelMesh::Face_t> * m_pComponentList; /* 0 8 */
	CUtlVector<CModelMeshDelta<CModelMesh::Face_t>*, CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>*, int> > m_Deltas; /* 8 32 */
	/* ../public/meshutils/modelmeshdeltaset.h:19 */
	struct DeltaIndexTag_t {
	};
};

// <06075DAA> ../public/meshutils/modelmeshdeltaset.h:21
inline void InvalidDeltaIndex(void)
{
} /* size: 0 */

// <05F74F28> ../public/meshutils/modelmeshdeltaset.h:93
void CModelMeshDeltaSet<CModelMesh::Vertex_t>::CModelMeshDeltaSet(const CHalfEdgeComponentList<CModelMesh::Vertex_t>* pComponentList)
{
} /* size: 0 */

// <05F74E9E> ../public/meshutils/modelmeshdeltaset.h:93
void CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::CModelMeshDeltaSet(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* pComponentList)
{
} /* size: 0 */

// <05F74E14> ../public/meshutils/modelmeshdeltaset.h:93
void CModelMeshDeltaSet<CModelMesh::Edge_t>::CModelMeshDeltaSet(const CHalfEdgeComponentList<CModelMesh::Edge_t>* pComponentList)
{
} /* size: 0 */

// <05F74D8A> ../public/meshutils/modelmeshdeltaset.h:93
void CModelMeshDeltaSet<CModelMesh::Face_t>::CModelMeshDeltaSet(const CHalfEdgeComponentList<CModelMesh::Face_t>* pComponentList)
{
} /* size: 0 */

// <05F74C31> ../public/meshutils/modelmeshdeltaset.h:112
// variables: 3
void CModelMeshDeltaSet<CModelMesh::Face_t>::operator=(const CModelMeshDeltaSet<CModelMesh::Face_t>& src)
{
	const int  nNumDeltas; // 118
	{
		int iDelta; // 121
		{
			const CModelMeshDelta<CModelMesh::Face_t>* pSrcDelta; // 123
		}
	}
} /* size: 0, variables: 1 */

// <05F74BBE> ../public/meshutils/modelmeshdeltaset.h:112
// variables: 3
void CModelMeshDeltaSet<CModelMesh::Vertex_t>::operator=(const CModelMeshDeltaSet<CModelMesh::Vertex_t>& src)
{
	const int  nNumDeltas; // 118
	{
		int iDelta; // 121
		{
			const CModelMeshDelta<CModelMesh::Vertex_t>* pSrcDelta; // 123
		}
	}
} /* size: 0, variables: 1 */

// <05F74B4B> ../public/meshutils/modelmeshdeltaset.h:112
// variables: 3
void CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::operator=(const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>& src)
{
	const int  nNumDeltas; // 118
	{
		int iDelta; // 121
		{
			const CModelMeshDelta<CModelMesh::FaceVertex_t>* pSrcDelta; // 123
		}
	}
} /* size: 0, variables: 1 */

// <05F74AD8> ../public/meshutils/modelmeshdeltaset.h:112
// variables: 3
void CModelMeshDeltaSet<CModelMesh::Edge_t>::operator=(const CModelMeshDeltaSet<CModelMesh::Edge_t>& src)
{
	const int  nNumDeltas; // 118
	{
		int iDelta; // 121
		{
			const CModelMeshDelta<CModelMesh::Edge_t>* pSrcDelta; // 123
		}
	}
} /* size: 0, variables: 1 */

// <0607DF66> ../public/meshutils/modelmeshdeltaset.h:135
void CModelMeshDeltaSet<CModelMesh::Vertex_t>::GetNumDeltas()
{
} /* size: 0 */

// <0607D1C5> ../public/meshutils/modelmeshdeltaset.h:135
void CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::GetNumDeltas()
{
} /* size: 0 */

// <0607C422> ../public/meshutils/modelmeshdeltaset.h:135
void CModelMeshDeltaSet<CModelMesh::Edge_t>::GetNumDeltas()
{
} /* size: 0 */

// <0607B683> ../public/meshutils/modelmeshdeltaset.h:135
void CModelMeshDeltaSet<CModelMesh::Face_t>::GetNumDeltas()
{
} /* size: 0 */

// <05F74EEA> ../public/meshutils/modelmeshdeltaset.h:144
void CModelMeshDeltaSet<CModelMesh::Vertex_t>::RemoveAll()
{
} /* size: 0 */

// <05F74E60> ../public/meshutils/modelmeshdeltaset.h:144
void CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::RemoveAll()
{
} /* size: 0 */

// <05F74DD6> ../public/meshutils/modelmeshdeltaset.h:144
void CModelMeshDeltaSet<CModelMesh::Edge_t>::RemoveAll()
{
} /* size: 0 */

// <05F74D4C> ../public/meshutils/modelmeshdeltaset.h:144
void CModelMeshDeltaSet<CModelMesh::Face_t>::RemoveAll()
{
} /* size: 0 */

// <05F7207A> ../public/meshutils/modelmeshdeltaset.h:153
// variables: 2
void CModelMeshDeltaSet<CModelMesh::Edge_t>::RemoveValueForComponent(ComponentHandle_t hComponent)
{
	const int  nNumDeltas; // 155
	{
		int iDelta; // 156
	}
} /* size: 0, variables: 1 */

// <05F71AA9> ../public/meshutils/modelmeshdeltaset.h:153
// variables: 2
void CModelMeshDeltaSet<CModelMesh::Vertex_t>::RemoveValueForComponent(ComponentHandle_t hComponent)
{
	const int  nNumDeltas; // 155
	{
		int iDelta; // 156
	}
} /* size: 0, variables: 1 */

// <05F6FD5A> ../public/meshutils/modelmeshdeltaset.h:153
// variables: 2
void CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::RemoveValueForComponent(ComponentHandle_t hComponent)
{
	const int  nNumDeltas; // 155
	{
		int iDelta; // 156
	}
} /* size: 0, variables: 1 */

// <05F6F77D> ../public/meshutils/modelmeshdeltaset.h:153
// variables: 2
void CModelMeshDeltaSet<CModelMesh::Face_t>::RemoveValueForComponent(ComponentHandle_t hComponent)
{
	const int  nNumDeltas; // 155
	{
		int iDelta; // 156
	}
} /* size: 0, variables: 1 */

// <06075607> ../public/meshutils/modelmeshdeltaset.h:166
// variables: 4
// function calls: 30
void CModelMeshDeltaSet<CModelMesh::Vertex_t>::AddDelta(const char* pDeltaName)
{
	const char   __FUNCTION__; // 11844
	CModelMeshDelta<CModelMesh::Vertex_t>* pNewDelta; // 174
	int nIndex; // 178
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(
			int nVal);  // 21
	InvalidDeltaIndex(void); // 168
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>::operator!=(
			const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>& other);  // 168
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(
			int nVal);  // 21
	InvalidDeltaIndex(void); // 171
	CUtlString::CUtlString(); // 168
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, this); // 178
	CUtlHashtable(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
			int minimumSize);  // 168
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 168
	CModelMeshDelta<CModelMesh::Vertex_t>::CModelMeshDelta(
			const char* pDeltaName,
			const CHalfEdgeComponentList<CModelMesh::Vertex_t>* pComponentList);  // 174
	CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::NumAllocated(); // 1196
	CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::Base(); // 112
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::Base(); // 368
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::ResetDbgInfo(); // 824
	CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::IsGrowable(); // 823
	CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::IsExternallyAllocated(); // 859
	CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::IsExternallyAllocated(); // 861
	CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::Grow(
		int num);  // 806
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::GrowMemory(
			int num);  // 1198
	CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::operator[](
			int i);  // 602
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::Element(
		int i);  // 1201
	CopyConstruct<CModelMeshDelta<CModelMesh::Vertex_t>*>(CModelMeshDelta<CModelMesh::Vertex_t>** pMemory,
								CModelMeshDelta<CModelMesh::Vertex_t>* const& src);  // 1201
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::AddToTail(
			CModelMeshDelta<CModelMesh::Vertex_t>* const& src);  // 178
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(
			int nVal);  // 179
} /* size: 0, variables: 3, inline expansions: 30 (0 bytes) */

// <06074871> ../public/meshutils/modelmeshdeltaset.h:166
// variables: 4
// function calls: 30
void CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::AddDelta(const char* pDeltaName)
{
	const char   __FUNCTION__; // 11844
	CModelMeshDelta<CModelMesh::FaceVertex_t>* pNewDelta; // 174
	int nIndex; // 178
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(
			int nVal);  // 21
	InvalidDeltaIndex(void); // 168
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>::operator!=(
			const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>& other);  // 168
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(
			int nVal);  // 21
	InvalidDeltaIndex(void); // 171
	CUtlString::CUtlString(); // 168
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, this); // 178
	CUtlHashtable(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
			int minimumSize);  // 168
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 168
	CModelMeshDelta<CModelMesh::FaceVertex_t>::CModelMeshDelta(
			const char* pDeltaName,
			const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* pComponentList);  // 174
	CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::NumAllocated(); // 1196
	CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::Base(); // 112
	CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::Base(); // 368
	CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::ResetDbgInfo(); // 824
	CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::IsGrowable(); // 823
	CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::IsExternallyAllocated(); // 859
	CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::IsExternallyAllocated(); // 861
	CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::Grow(
		int num);  // 806
	CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::GrowMemory(
			int num);  // 1198
	CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::operator[](
			int i);  // 602
	CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::Element(
		int i);  // 1201
	CopyConstruct<CModelMeshDelta<CModelMesh::FaceVertex_t>*>(CModelMeshDelta<CModelMesh::FaceVertex_t>** pMemory,
									CModelMeshDelta<CModelMesh::FaceVertex_t>* const& src);  // 1201
	CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::AddToTail(
			CModelMeshDelta<CModelMesh::FaceVertex_t>* const& src);  // 178
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(
			int nVal);  // 179
} /* size: 0, variables: 3, inline expansions: 30 (0 bytes) */

// <06073AC2> ../public/meshutils/modelmeshdeltaset.h:166
// variables: 4
// function calls: 30
void CModelMeshDeltaSet<CModelMesh::Edge_t>::AddDelta(const char* pDeltaName)
{
	const char   __FUNCTION__; // 11844
	CModelMeshDelta<CModelMesh::Edge_t>* pNewDelta; // 174
	int nIndex; // 178
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(
			int nVal);  // 21
	InvalidDeltaIndex(void); // 168
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>::operator!=(
			const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>& other);  // 168
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(
			int nVal);  // 21
	InvalidDeltaIndex(void); // 171
	CUtlString::CUtlString(); // 168
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, this); // 178
	CUtlHashtable(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
			int minimumSize);  // 168
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 168
	CModelMeshDelta<CModelMesh::Edge_t>::CModelMeshDelta(
			const char* pDeltaName,
			const CHalfEdgeComponentList<CModelMesh::Edge_t>* pComponentList);  // 174
	CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>::NumAllocated(); // 1196
	CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>::Base(); // 112
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::Base(); // 368
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::ResetDbgInfo(); // 824
	CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>::IsGrowable(); // 823
	CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>::IsExternallyAllocated(); // 859
	CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>::IsExternallyAllocated(); // 861
	CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>::Grow(
		int num);  // 806
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::GrowMemory(
			int num);  // 1198
	CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>::operator[](
			int i);  // 602
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::Element(
		int i);  // 1201
	CopyConstruct<CModelMeshDelta<CModelMesh::Edge_t>*>(CModelMeshDelta<CModelMesh::Edge_t>** pMemory,
								CModelMeshDelta<CModelMesh::Edge_t>* const& src);  // 1201
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::AddToTail(
			CModelMeshDelta<CModelMesh::Edge_t>* const& src);  // 178
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(
			int nVal);  // 179
} /* size: 0, variables: 3, inline expansions: 30 (0 bytes) */

// <06072D08> ../public/meshutils/modelmeshdeltaset.h:166
// variables: 4
// function calls: 30
void CModelMeshDeltaSet<CModelMesh::Face_t>::AddDelta(const char* pDeltaName)
{
	const char   __FUNCTION__; // 11844
	CModelMeshDelta<CModelMesh::Face_t>* pNewDelta; // 174
	int nIndex; // 178
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(
			int nVal);  // 21
	InvalidDeltaIndex(void); // 168
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>::operator!=(
			const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>& other);  // 168
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(
			int nVal);  // 21
	InvalidDeltaIndex(void); // 171
	CUtlString::CUtlString(); // 168
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, this); // 178
	CUtlHashtable(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
			int minimumSize);  // 168
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 168
	CModelMeshDelta<CModelMesh::Face_t>::CModelMeshDelta(
			const char* pDeltaName,
			const CHalfEdgeComponentList<CModelMesh::Face_t>* pComponentList);  // 174
	CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::NumAllocated(); // 1196
	CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::Base(); // 112
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::Base(); // 368
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::ResetDbgInfo(); // 824
	CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::IsGrowable(); // 823
	CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::IsExternallyAllocated(); // 859
	CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::IsExternallyAllocated(); // 861
	CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::Grow(
		int num);  // 806
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::GrowMemory(
			int num);  // 1198
	CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::operator[](
			int i);  // 602
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::Element(
		int i);  // 1201
	CopyConstruct<CModelMeshDelta<CModelMesh::Face_t>*>(CModelMeshDelta<CModelMesh::Face_t>** pMemory,
								CModelMeshDelta<CModelMesh::Face_t>* const& src);  // 1201
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::AddToTail(
			CModelMeshDelta<CModelMesh::Face_t>* const& src);  // 178
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(
			int nVal);  // 179
} /* size: 0, variables: 3, inline expansions: 30 (0 bytes) */

// <0607DEC1> ../public/meshutils/modelmeshdeltaset.h:186
// variable: 1
void CModelMeshDeltaSet<CModelMesh::Vertex_t>::FindOrCreateDelta(const char* pDeltaName)
{
	DeltaIndex_t nIndex; // 188
} /* size: 0, variables: 1 */

// <0607D120> ../public/meshutils/modelmeshdeltaset.h:186
// variable: 1
void CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::FindOrCreateDelta(const char* pDeltaName)
{
	DeltaIndex_t nIndex; // 188
} /* size: 0, variables: 1 */

// <0607C37D> ../public/meshutils/modelmeshdeltaset.h:186
// variable: 1
void CModelMeshDeltaSet<CModelMesh::Edge_t>::FindOrCreateDelta(const char* pDeltaName)
{
	DeltaIndex_t nIndex; // 188
} /* size: 0, variables: 1 */

// <0607B5DE> ../public/meshutils/modelmeshdeltaset.h:186
// variable: 1
void CModelMeshDeltaSet<CModelMesh::Face_t>::FindOrCreateDelta(const char* pDeltaName)
{
	DeltaIndex_t nIndex; // 188
} /* size: 0, variables: 1 */

// <06075F33> ../public/meshutils/modelmeshdeltaset.h:214
// variables: 2
// function calls: 8
void CModelMeshDeltaSet<CModelMesh::Vertex_t>::FindDelta(const char* pDeltaName)
{
	const int  nNumDeltas; // 216
	{
		int iDelta; // 217
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 216
		CModelMeshDelta<CModelMesh::Vertex_t>::GetName(); // 222
		CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::operator[](
				int i);  // 595
		CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::operator[](
				int i);  // 219
	}
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::Count(); // 216
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(
			int nVal);  // 21
	InvalidDeltaIndex(void); // 228
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <0607519D> ../public/meshutils/modelmeshdeltaset.h:214
// variables: 2
// function calls: 8
void CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::FindDelta(const char* pDeltaName)
{
	const int  nNumDeltas; // 216
	{
		int iDelta; // 217
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 216
		CModelMeshDelta<CModelMesh::FaceVertex_t>::GetName(); // 222
		CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::operator[](
				int i);  // 595
		CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::operator[](
				int i);  // 219
	}
	CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::Count(); // 216
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(
			int nVal);  // 21
	InvalidDeltaIndex(void); // 228
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <06074407> ../public/meshutils/modelmeshdeltaset.h:214
// variables: 2
// function calls: 8
void CModelMeshDeltaSet<CModelMesh::Edge_t>::FindDelta(const char* pDeltaName)
{
	const int  nNumDeltas; // 216
	{
		int iDelta; // 217
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 216
		CModelMeshDelta<CModelMesh::Edge_t>::GetName(); // 222
		CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>::operator[](
				int i);  // 595
		CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::operator[](
				int i);  // 219
	}
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::Count(); // 216
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(
			int nVal);  // 21
	InvalidDeltaIndex(void); // 228
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <06073634> ../public/meshutils/modelmeshdeltaset.h:214
// variables: 2
// function calls: 8
void CModelMeshDeltaSet<CModelMesh::Face_t>::FindDelta(const char* pDeltaName)
{
	const int  nNumDeltas; // 216
	{
		int iDelta; // 217
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 216
		CModelMeshDelta<CModelMesh::Face_t>::GetName(); // 222
		CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::operator[](
				int i);  // 595
		CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::operator[](
				int i);  // 219
	}
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::Count(); // 216
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(
			int nVal);  // 21
	InvalidDeltaIndex(void); // 228
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <05F65107> ../public/meshutils/modelmeshdeltaset.h:214
// variables: 2
void CModelMeshDeltaSet<CModelMesh::Vertex_t>::FindDelta(const char* pDeltaName)
{
	const int  nNumDeltas; // 216
	{
		int iDelta; // 217
	}
} /* size: 0, variables: 1 */

// <05F650A2> ../public/meshutils/modelmeshdeltaset.h:214
// variables: 2
void CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::FindDelta(const char* pDeltaName)
{
	const int  nNumDeltas; // 216
	{
		int iDelta; // 217
	}
} /* size: 0, variables: 1 */

// <05F6503D> ../public/meshutils/modelmeshdeltaset.h:214
// variables: 2
void CModelMeshDeltaSet<CModelMesh::Face_t>::FindDelta(const char* pDeltaName)
{
	const int  nNumDeltas; // 216
	{
		int iDelta; // 217
	}
} /* size: 0, variables: 1 */

// <0607EACF> ../public/meshutils/modelmeshdeltaset.h:235
// variables: 6
void CModelMeshDeltaSet<CModelMesh::Vertex_t>::CanAppendDeltaSet(const CModelMeshDeltaSet<CModelMesh::Vertex_t>& srcDeltaSet)
{
	const int  nNumSrcDeltas; // 237
	{
		int iDelta; // 238
		{
			const DeltaIndex_t  nSrcDelta; // 240
			const CModelMeshDelta<CModelMesh::Vertex_t>* pSrcDelta; // 241
			DeltaIndex_t nDstDelta; // 242
			const CModelMeshDelta<CModelMesh::Vertex_t>* pDstDelta; // 243
		}
	}
} /* size: 0, variables: 1 */

// <0607DD2D> ../public/meshutils/modelmeshdeltaset.h:235
// variables: 6
void CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::CanAppendDeltaSet(const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>& srcDeltaSet)
{
	const int  nNumSrcDeltas; // 237
	{
		int iDelta; // 238
		{
			const DeltaIndex_t  nSrcDelta; // 240
			const CModelMeshDelta<CModelMesh::FaceVertex_t>* pSrcDelta; // 241
			DeltaIndex_t nDstDelta; // 242
			const CModelMeshDelta<CModelMesh::FaceVertex_t>* pDstDelta; // 243
		}
	}
} /* size: 0, variables: 1 */

// <0607CF8C> ../public/meshutils/modelmeshdeltaset.h:235
// variables: 6
void CModelMeshDeltaSet<CModelMesh::Edge_t>::CanAppendDeltaSet(const CModelMeshDeltaSet<CModelMesh::Edge_t>& srcDeltaSet)
{
	const int  nNumSrcDeltas; // 237
	{
		int iDelta; // 238
		{
			const DeltaIndex_t  nSrcDelta; // 240
			const CModelMeshDelta<CModelMesh::Edge_t>* pSrcDelta; // 241
			DeltaIndex_t nDstDelta; // 242
			const CModelMeshDelta<CModelMesh::Edge_t>* pDstDelta; // 243
		}
	}
} /* size: 0, variables: 1 */

// <0607C1E9> ../public/meshutils/modelmeshdeltaset.h:235
// variables: 6
void CModelMeshDeltaSet<CModelMesh::Face_t>::CanAppendDeltaSet(const CModelMeshDeltaSet<CModelMesh::Face_t>& srcDeltaSet)
{
	const int  nNumSrcDeltas; // 237
	{
		int iDelta; // 238
		{
			const DeltaIndex_t  nSrcDelta; // 240
			const CModelMeshDelta<CModelMesh::Face_t>* pSrcDelta; // 241
			DeltaIndex_t nDstDelta; // 242
			const CModelMeshDelta<CModelMesh::Face_t>* pDstDelta; // 243
		}
	}
} /* size: 0, variables: 1 */

// <05F6E0FF> ../public/meshutils/modelmeshdeltaset.h:235
// variables: 7
// function calls: 23
void CModelMeshDeltaSet<CModelMesh::Vertex_t>::CanAppendDeltaSet(const CModelMeshDeltaSet<CModelMesh::Vertex_t>& srcDeltaSet)
{
	const int  nNumSrcDeltas; // 237
	{
		int iDelta; // 238
		{
			const DeltaIndex_t  nSrcDelta; // 240
			const CModelMeshDelta<CModelMesh::Vertex_t>* pSrcDelta; // 241
			DeltaIndex_t nDstDelta; // 242
			const CModelMeshDelta<CModelMesh::Vertex_t>* pDstDelta; // 243
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 216
			CModelMeshDelta<CModelMesh::Vertex_t>::GetName(); // 242
			CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(
					int nVal);  // 240
			CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::Count(); // 308
			CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::operator[](
					int i);  // 595
			CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::operator[](
					int i);  // 311
			CModelMeshDeltaSet<CModelMesh::Vertex_t>::GetDelta(
				DeltaIndex_t nDelta);  // 241
			CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::Count(); // 216
			{
				int iDelta; // 217
				CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::operator[](
						int i);  // 595
				CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::operator[](
						int i);  // 219
				CUtlString::Get(); // 441
				CUtlString::operator char const*(); // 216
				CModelMeshDelta<CModelMesh::Vertex_t>::GetName(); // 222
				CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(
						int nVal);  // 224
			}
			CModelMeshDeltaSet<CModelMesh::Vertex_t>::FindDelta(
					const char* pDeltaName);  // 242
			CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::Count(); // 308
			CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::operator[](
					int i);  // 595
			CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::operator[](
					int i);  // 311
			CModelMeshDeltaSet<CModelMesh::Vertex_t>::GetDelta(
				DeltaIndex_t nDelta);  // 243
			CModelMeshDelta<CModelMesh::Vertex_t>::CanAppendStreamSetFromDelta(
							const CModelMeshDelta<CModelMesh::Vertex_t>& otherDelta);  // 251
		}
	}
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::Count(); // 137
	CModelMeshDeltaSet<CModelMesh::Vertex_t>::GetNumDeltas(); // 237
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <05F6DB33> ../public/meshutils/modelmeshdeltaset.h:235
// variables: 7
// function calls: 23
void CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::CanAppendDeltaSet(const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>& srcDeltaSet)
{
	const int  nNumSrcDeltas; // 237
	{
		int iDelta; // 238
		{
			const DeltaIndex_t  nSrcDelta; // 240
			const CModelMeshDelta<CModelMesh::FaceVertex_t>* pSrcDelta; // 241
			DeltaIndex_t nDstDelta; // 242
			const CModelMeshDelta<CModelMesh::FaceVertex_t>* pDstDelta; // 243
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 216
			CModelMeshDelta<CModelMesh::FaceVertex_t>::GetName(); // 242
			CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(
					int nVal);  // 240
			CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::Count(); // 308
			CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::operator[](
					int i);  // 595
			CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::operator[](
					int i);  // 311
			CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::GetDelta(
				DeltaIndex_t nDelta);  // 241
			CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::Count(); // 216
			{
				int iDelta; // 217
				CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::operator[](
						int i);  // 595
				CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::operator[](
						int i);  // 219
				CUtlString::Get(); // 441
				CUtlString::operator char const*(); // 216
				CModelMeshDelta<CModelMesh::FaceVertex_t>::GetName(); // 222
				CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(
						int nVal);  // 224
			}
			CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::FindDelta(
					const char* pDeltaName);  // 242
			CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::Count(); // 308
			CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::operator[](
					int i);  // 595
			CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::operator[](
					int i);  // 311
			CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::GetDelta(
				DeltaIndex_t nDelta);  // 243
			CModelMeshDelta<CModelMesh::FaceVertex_t>::CanAppendStreamSetFromDelta(
							const CModelMeshDelta<CModelMesh::FaceVertex_t>& otherDelta);  // 251
		}
	}
	CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::Count(); // 137
	CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::GetNumDeltas(); // 237
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <05F6D567> ../public/meshutils/modelmeshdeltaset.h:235
// variables: 7
// function calls: 23
void CModelMeshDeltaSet<CModelMesh::Face_t>::CanAppendDeltaSet(const CModelMeshDeltaSet<CModelMesh::Face_t>& srcDeltaSet)
{
	const int  nNumSrcDeltas; // 237
	{
		int iDelta; // 238
		{
			const DeltaIndex_t  nSrcDelta; // 240
			const CModelMeshDelta<CModelMesh::Face_t>* pSrcDelta; // 241
			DeltaIndex_t nDstDelta; // 242
			const CModelMeshDelta<CModelMesh::Face_t>* pDstDelta; // 243
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 216
			CModelMeshDelta<CModelMesh::Face_t>::GetName(); // 242
			CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(
					int nVal);  // 240
			CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::Count(); // 308
			CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::operator[](
					int i);  // 595
			CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::operator[](
					int i);  // 311
			CModelMeshDeltaSet<CModelMesh::Face_t>::GetDelta(
				DeltaIndex_t nDelta);  // 241
			CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::Count(); // 216
			{
				int iDelta; // 217
				CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::operator[](
						int i);  // 595
				CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::operator[](
						int i);  // 219
				CUtlString::Get(); // 441
				CUtlString::operator char const*(); // 216
				CModelMeshDelta<CModelMesh::Face_t>::GetName(); // 222
				CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(
						int nVal);  // 224
			}
			CModelMeshDeltaSet<CModelMesh::Face_t>::FindDelta(
					const char* pDeltaName);  // 242
			CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::Count(); // 308
			CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::operator[](
					int i);  // 595
			CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::operator[](
					int i);  // 311
			CModelMeshDeltaSet<CModelMesh::Face_t>::GetDelta(
				DeltaIndex_t nDelta);  // 243
			CModelMeshDelta<CModelMesh::Face_t>::CanAppendStreamSetFromDelta(
							const CModelMeshDelta<CModelMesh::Face_t>& otherDelta);  // 251
		}
	}
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::Count(); // 137
	CModelMeshDeltaSet<CModelMesh::Face_t>::GetNumDeltas(); // 237
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <060881A0> ../public/meshutils/modelmeshdeltaset.h:262
// variables: 7
void CModelMeshDeltaSet<CModelMesh::Vertex_t>::AppendDeltaSet(const CModelMeshDeltaSet<CModelMesh::Vertex_t>& srcDeltaSet, CHandleTranslator* pHandleTranslator)
{
	bool bSuccess; // 264
	const int  nNumSrcDeltas; // 266
	{
		int iDelta; // 267
		{
			const DeltaIndex_t  nSrcDelta; // 269
			const CModelMeshDelta<CModelMesh::Vertex_t>* pSrcDelta; // 270
			DeltaIndex_t nDstDelta; // 271
			CModelMeshDelta<CModelMesh::Vertex_t>* pDstDelta; // 272
		}
	}
} /* size: 0, variables: 2 */

// <06087D1B> ../public/meshutils/modelmeshdeltaset.h:262
// variables: 7
void CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::AppendDeltaSet(const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>& srcDeltaSet, CHandleTranslator* pHandleTranslator)
{
	bool bSuccess; // 264
	const int  nNumSrcDeltas; // 266
	{
		int iDelta; // 267
		{
			const DeltaIndex_t  nSrcDelta; // 269
			const CModelMeshDelta<CModelMesh::FaceVertex_t>* pSrcDelta; // 270
			DeltaIndex_t nDstDelta; // 271
			CModelMeshDelta<CModelMesh::FaceVertex_t>* pDstDelta; // 272
		}
	}
} /* size: 0, variables: 2 */

// <06087896> ../public/meshutils/modelmeshdeltaset.h:262
// variables: 7
void CModelMeshDeltaSet<CModelMesh::Edge_t>::AppendDeltaSet(const CModelMeshDeltaSet<CModelMesh::Edge_t>& srcDeltaSet, CHandleTranslator* pHandleTranslator)
{
	bool bSuccess; // 264
	const int  nNumSrcDeltas; // 266
	{
		int iDelta; // 267
		{
			const DeltaIndex_t  nSrcDelta; // 269
			const CModelMeshDelta<CModelMesh::Edge_t>* pSrcDelta; // 270
			DeltaIndex_t nDstDelta; // 271
			CModelMeshDelta<CModelMesh::Edge_t>* pDstDelta; // 272
		}
	}
} /* size: 0, variables: 2 */

// <0608742A> ../public/meshutils/modelmeshdeltaset.h:262
// variables: 7
void CModelMeshDeltaSet<CModelMesh::Face_t>::AppendDeltaSet(const CModelMeshDeltaSet<CModelMesh::Face_t>& srcDeltaSet, CHandleTranslator* pHandleTranslator)
{
	bool bSuccess; // 264
	const int  nNumSrcDeltas; // 266
	{
		int iDelta; // 267
		{
			const DeltaIndex_t  nSrcDelta; // 269
			const CModelMeshDelta<CModelMesh::Face_t>* pSrcDelta; // 270
			DeltaIndex_t nDstDelta; // 271
			CModelMeshDelta<CModelMesh::Face_t>* pDstDelta; // 272
		}
	}
} /* size: 0, variables: 2 */

// <0607DE75> ../public/meshutils/modelmeshdeltaset.h:292
// variable: 1
void CModelMeshDeltaSet<CModelMesh::Vertex_t>::GetDelta(DeltaIndex_t nDelta)
{
	int nIndex; // 294
} /* size: 0, variables: 1 */

// <0607D0D4> ../public/meshutils/modelmeshdeltaset.h:292
// variable: 1
void CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::GetDelta(DeltaIndex_t nDelta)
{
	int nIndex; // 294
} /* size: 0, variables: 1 */

// <0607C331> ../public/meshutils/modelmeshdeltaset.h:292
// variable: 1
void CModelMeshDeltaSet<CModelMesh::Edge_t>::GetDelta(DeltaIndex_t nDelta)
{
	int nIndex; // 294
} /* size: 0, variables: 1 */

// <0607B592> ../public/meshutils/modelmeshdeltaset.h:292
// variable: 1
void CModelMeshDeltaSet<CModelMesh::Face_t>::GetDelta(DeltaIndex_t nDelta)
{
	int nIndex; // 294
} /* size: 0, variables: 1 */

// <0607DEF2> ../public/meshutils/modelmeshdeltaset.h:305
// variable: 1
void CModelMeshDeltaSet<CModelMesh::Vertex_t>::GetDelta(DeltaIndex_t nDelta)
{
	int nIndex; // 307
} /* size: 0, variables: 1 */

// <0607D151> ../public/meshutils/modelmeshdeltaset.h:305
// variable: 1
void CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::GetDelta(DeltaIndex_t nDelta)
{
	int nIndex; // 307
} /* size: 0, variables: 1 */

// <0607C3AE> ../public/meshutils/modelmeshdeltaset.h:305
// variable: 1
void CModelMeshDeltaSet<CModelMesh::Edge_t>::GetDelta(DeltaIndex_t nDelta)
{
	int nIndex; // 307
} /* size: 0, variables: 1 */

// <0607B60F> ../public/meshutils/modelmeshdeltaset.h:305
// variable: 1
void CModelMeshDeltaSet<CModelMesh::Face_t>::GetDelta(DeltaIndex_t nDelta)
{
	int nIndex; // 307
} /* size: 0, variables: 1 */

// <05F7423A> ../public/meshutils/modelmeshdeltaset.h:318
// variables: 2
void CModelMeshDeltaSet<CModelMesh::Face_t>::CheckIntegrity()
{
	const int  nNumDeltas; // 320
	{
		int i; // 321
	}
} /* size: 0, variables: 1 */

// <05F73B7C> ../public/meshutils/modelmeshdeltaset.h:318
// variables: 2
void CModelMeshDeltaSet<CModelMesh::Vertex_t>::CheckIntegrity()
{
	const int  nNumDeltas; // 320
	{
		int i; // 321
	}
} /* size: 0, variables: 1 */

// <05F734BE> ../public/meshutils/modelmeshdeltaset.h:318
// variables: 2
void CModelMeshDeltaSet<CModelMesh::Edge_t>::CheckIntegrity()
{
	const int  nNumDeltas; // 320
	{
		int i; // 321
	}
} /* size: 0, variables: 1 */

// <05F72E00> ../public/meshutils/modelmeshdeltaset.h:318
// variables: 2
void CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::CheckIntegrity()
{
	const int  nNumDeltas; // 320
	{
		int i; // 321
	}
} /* size: 0, variables: 1 */

// <06095473> ../public/meshutils/modelmeshdeltaset.h:341
// variable: 1
void CModelMeshDeltaSet<CModelMesh::Vertex_t>::GetStreamsOfType(ModelStreamType_t nStreamType, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pOutStreams)
{
	{
		int d; // 343
	}
} /* size: 0 */

// <06095433> ../public/meshutils/modelmeshdeltaset.h:341
// variable: 1
void CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::GetStreamsOfType(ModelStreamType_t nStreamType, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pOutStreams)
{
	{
		int d; // 343
	}
} /* size: 0 */

// <060953F3> ../public/meshutils/modelmeshdeltaset.h:341
// variable: 1
void CModelMeshDeltaSet<CModelMesh::Face_t>::GetStreamsOfType(ModelStreamType_t nStreamType, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pOutStreams)
{
	{
		int d; // 343
	}
} /* size: 0 */

