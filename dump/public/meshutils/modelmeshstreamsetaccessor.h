
//
// public/meshutils/modelmeshstreamsetaccessor.h
//
//	referenced by: libengine2.so
//
//	functions: 38
//	classes: 9
//

// <05C66AA5> ../public/meshutils/modelmeshstreamsetaccessor.h:23
// member functions: 20
// member variables: 2
// class size: 16
class CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t> {
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:118 */
	void CModelMeshStreamSetAccessor(CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , CModelMeshStreamSet& , const CHalfEdgeComponentList<CModelMesh::Vertex_t>& );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:129 */
	int GetNumValues(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:138 */
	int GetNumStreams(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:147 */
	const char* GetStreamName(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:156 */
	ModelStreamType_t GetStreamType(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:166 */
	ModelStreamDataType_t GetStreamDataType(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:175 */
	VertexStreamIndex_t FindStream(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , const char* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:184 */
	VertexStreamIndex_t GetFirstStreamOfType(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , ModelStreamType_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:193 */
	VertexStreamIndex_t AddStream(CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , const char* , ModelStreamType_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:214 */
	void RemoveStream(CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:223 */
	void RenameStream(CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t, const char* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:233 */
	CModelStreamAccessor GetStream(CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:242 */
	CModelStreamReader GetStream(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:251 */
	void GetStreamsOfType(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , ModelStreamType_t, CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:269 */
	void GetStreamsOfType(CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:278 */
	void GetStreamsOfType(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , ModelStreamType_t, CUtlVector<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:287 */
	void GetAllStreams(CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:296 */
	void GetAllStreams(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , CUtlVector<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:305 */
	int GetComponentDataIndex(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:27 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
private:
	CModelMeshStreamSet & m_StreamSet; /* 0 8 */
	const class CHalfEdgeComponentList<CModelMesh::Vertex_t> & m_ComponentList; /* 8 8 */
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:330 */
	bool GetComponentDataValues<Vector>(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t, int, const ComponentHandle_t* , Vector* );
};

// <05C66E05> ../public/meshutils/modelmeshstreamsetaccessor.h:23
// member functions: 19
// member variables: 2
// class size: 16
class CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t> {
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:118 */
	void CModelMeshStreamSetAccessor(CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , CModelMeshStreamSet& , const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>& );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:129 */
	int GetNumValues(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:138 */
	int GetNumStreams(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:147 */
	const char* GetStreamName(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , FaceVertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:156 */
	ModelStreamType_t GetStreamType(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , FaceVertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:166 */
	ModelStreamDataType_t GetStreamDataType(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , FaceVertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:175 */
	FaceVertexStreamIndex_t FindStream(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , const char* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:184 */
	FaceVertexStreamIndex_t GetFirstStreamOfType(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , ModelStreamType_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:193 */
	FaceVertexStreamIndex_t AddStream(CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , const char* , ModelStreamType_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:214 */
	void RemoveStream(CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , FaceVertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:223 */
	void RenameStream(CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , FaceVertexStreamIndex_t, const char* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:233 */
	CModelStreamAccessor GetStream(CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , FaceVertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:242 */
	CModelStreamReader GetStream(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , FaceVertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:251 */
	void GetStreamsOfType(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , ModelStreamType_t, CUtlVector<CModelMesh::FaceVertexStreamIndex_t, CUtlMemory<CModelMesh::FaceVertexStreamIndex_t, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:269 */
	void GetStreamsOfType(CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:278 */
	void GetStreamsOfType(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , ModelStreamType_t, CUtlVector<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:287 */
	void GetAllStreams(CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:296 */
	void GetAllStreams(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , CUtlVector<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:305 */
	int GetComponentDataIndex(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:27 */
	typedef ComponentHandle_t ComponentHandle_t;
private:
	CModelMeshStreamSet & m_StreamSet; /* 0 8 */
	const class CHalfEdgeComponentList<CModelMesh::FaceVertex_t> & m_ComponentList; /* 8 8 */
};

// <05C67121> ../public/meshutils/modelmeshstreamsetaccessor.h:23
// member functions: 19
// member variables: 2
// class size: 16
class CModelMeshStreamSetAccessor<CModelMesh::Edge_t, CModelMesh::EdgeStreamIndex_t> {
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:118 */
	void CModelMeshStreamSetAccessor(CModelMeshStreamSetAccessor<CModelMesh::Edge_t, CModelMesh::EdgeStreamIndex_t>* , CModelMeshStreamSet& , const CHalfEdgeComponentList<CModelMesh::Edge_t>& );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:129 */
	int GetNumValues(const CModelMeshStreamSetAccessor<CModelMesh::Edge_t, CModelMesh::EdgeStreamIndex_t>* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:138 */
	int GetNumStreams(const CModelMeshStreamSetAccessor<CModelMesh::Edge_t, CModelMesh::EdgeStreamIndex_t>* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:147 */
	const char* GetStreamName(const CModelMeshStreamSetAccessor<CModelMesh::Edge_t, CModelMesh::EdgeStreamIndex_t>* , EdgeStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:156 */
	ModelStreamType_t GetStreamType(const CModelMeshStreamSetAccessor<CModelMesh::Edge_t, CModelMesh::EdgeStreamIndex_t>* , EdgeStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:166 */
	ModelStreamDataType_t GetStreamDataType(const CModelMeshStreamSetAccessor<CModelMesh::Edge_t, CModelMesh::EdgeStreamIndex_t>* , EdgeStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:175 */
	EdgeStreamIndex_t FindStream(const CModelMeshStreamSetAccessor<CModelMesh::Edge_t, CModelMesh::EdgeStreamIndex_t>* , const char* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:184 */
	EdgeStreamIndex_t GetFirstStreamOfType(const CModelMeshStreamSetAccessor<CModelMesh::Edge_t, CModelMesh::EdgeStreamIndex_t>* , ModelStreamType_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:193 */
	EdgeStreamIndex_t AddStream(CModelMeshStreamSetAccessor<CModelMesh::Edge_t, CModelMesh::EdgeStreamIndex_t>* , const char* , ModelStreamType_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:214 */
	void RemoveStream(CModelMeshStreamSetAccessor<CModelMesh::Edge_t, CModelMesh::EdgeStreamIndex_t>* , EdgeStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:223 */
	void RenameStream(CModelMeshStreamSetAccessor<CModelMesh::Edge_t, CModelMesh::EdgeStreamIndex_t>* , EdgeStreamIndex_t, const char* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:233 */
	CModelStreamAccessor GetStream(CModelMeshStreamSetAccessor<CModelMesh::Edge_t, CModelMesh::EdgeStreamIndex_t>* , EdgeStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:242 */
	CModelStreamReader GetStream(const CModelMeshStreamSetAccessor<CModelMesh::Edge_t, CModelMesh::EdgeStreamIndex_t>* , EdgeStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:251 */
	void GetStreamsOfType(const CModelMeshStreamSetAccessor<CModelMesh::Edge_t, CModelMesh::EdgeStreamIndex_t>* , ModelStreamType_t, CUtlVector<CModelMesh::EdgeStreamIndex_t, CUtlMemory<CModelMesh::EdgeStreamIndex_t, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:269 */
	void GetStreamsOfType(CModelMeshStreamSetAccessor<CModelMesh::Edge_t, CModelMesh::EdgeStreamIndex_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:278 */
	void GetStreamsOfType(const CModelMeshStreamSetAccessor<CModelMesh::Edge_t, CModelMesh::EdgeStreamIndex_t>* , ModelStreamType_t, CUtlVector<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:287 */
	void GetAllStreams(CModelMeshStreamSetAccessor<CModelMesh::Edge_t, CModelMesh::EdgeStreamIndex_t>* , CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:296 */
	void GetAllStreams(const CModelMeshStreamSetAccessor<CModelMesh::Edge_t, CModelMesh::EdgeStreamIndex_t>* , CUtlVector<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:305 */
	int GetComponentDataIndex(const CModelMeshStreamSetAccessor<CModelMesh::Edge_t, CModelMesh::EdgeStreamIndex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:27 */
	typedef ComponentHandle_t ComponentHandle_t;
private:
	CModelMeshStreamSet & m_StreamSet; /* 0 8 */
	const class CHalfEdgeComponentList<CModelMesh::Edge_t> & m_ComponentList; /* 8 8 */
};

// <05C6743D> ../public/meshutils/modelmeshstreamsetaccessor.h:23
// member functions: 19
// member variables: 2
// class size: 16
class CModelMeshStreamSetAccessor<CModelMesh::Face_t, CModelMesh::FaceStreamIndex_t> {
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:118 */
	void CModelMeshStreamSetAccessor(CModelMeshStreamSetAccessor<CModelMesh::Face_t, CModelMesh::FaceStreamIndex_t>* , CModelMeshStreamSet& , const CHalfEdgeComponentList<CModelMesh::Face_t>& );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:129 */
	int GetNumValues(const CModelMeshStreamSetAccessor<CModelMesh::Face_t, CModelMesh::FaceStreamIndex_t>* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:138 */
	int GetNumStreams(const CModelMeshStreamSetAccessor<CModelMesh::Face_t, CModelMesh::FaceStreamIndex_t>* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:147 */
	const char* GetStreamName(const CModelMeshStreamSetAccessor<CModelMesh::Face_t, CModelMesh::FaceStreamIndex_t>* , FaceStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:156 */
	ModelStreamType_t GetStreamType(const CModelMeshStreamSetAccessor<CModelMesh::Face_t, CModelMesh::FaceStreamIndex_t>* , FaceStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:166 */
	ModelStreamDataType_t GetStreamDataType(const CModelMeshStreamSetAccessor<CModelMesh::Face_t, CModelMesh::FaceStreamIndex_t>* , FaceStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:175 */
	FaceStreamIndex_t FindStream(const CModelMeshStreamSetAccessor<CModelMesh::Face_t, CModelMesh::FaceStreamIndex_t>* , const char* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:184 */
	FaceStreamIndex_t GetFirstStreamOfType(const CModelMeshStreamSetAccessor<CModelMesh::Face_t, CModelMesh::FaceStreamIndex_t>* , ModelStreamType_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:193 */
	FaceStreamIndex_t AddStream(CModelMeshStreamSetAccessor<CModelMesh::Face_t, CModelMesh::FaceStreamIndex_t>* , const char* , ModelStreamType_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:214 */
	void RemoveStream(CModelMeshStreamSetAccessor<CModelMesh::Face_t, CModelMesh::FaceStreamIndex_t>* , FaceStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:223 */
	void RenameStream(CModelMeshStreamSetAccessor<CModelMesh::Face_t, CModelMesh::FaceStreamIndex_t>* , FaceStreamIndex_t, const char* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:233 */
	CModelStreamAccessor GetStream(CModelMeshStreamSetAccessor<CModelMesh::Face_t, CModelMesh::FaceStreamIndex_t>* , FaceStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:242 */
	CModelStreamReader GetStream(const CModelMeshStreamSetAccessor<CModelMesh::Face_t, CModelMesh::FaceStreamIndex_t>* , FaceStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:251 */
	void GetStreamsOfType(const CModelMeshStreamSetAccessor<CModelMesh::Face_t, CModelMesh::FaceStreamIndex_t>* , ModelStreamType_t, CUtlVector<CModelMesh::FaceStreamIndex_t, CUtlMemory<CModelMesh::FaceStreamIndex_t, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:269 */
	void GetStreamsOfType(CModelMeshStreamSetAccessor<CModelMesh::Face_t, CModelMesh::FaceStreamIndex_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:278 */
	void GetStreamsOfType(const CModelMeshStreamSetAccessor<CModelMesh::Face_t, CModelMesh::FaceStreamIndex_t>* , ModelStreamType_t, CUtlVector<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:287 */
	void GetAllStreams(CModelMeshStreamSetAccessor<CModelMesh::Face_t, CModelMesh::FaceStreamIndex_t>* , CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:296 */
	void GetAllStreams(const CModelMeshStreamSetAccessor<CModelMesh::Face_t, CModelMesh::FaceStreamIndex_t>* , CUtlVector<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:305 */
	int GetComponentDataIndex(const CModelMeshStreamSetAccessor<CModelMesh::Face_t, CModelMesh::FaceStreamIndex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:27 */
	typedef ComponentHandle_t ComponentHandle_t;
private:
	CModelMeshStreamSet & m_StreamSet; /* 0 8 */
	const class CHalfEdgeComponentList<CModelMesh::Face_t> & m_ComponentList; /* 8 8 */
};

// <05F502DB> ../public/meshutils/modelmeshstreamsetaccessor.h:23
// member functions: 19
// member variables: 2
// class size: 16
class CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t> {
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:118 */
	void CModelMeshStreamSetAccessor(CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , CModelMeshStreamSet& , const CHalfEdgeComponentList<CModelMesh::Vertex_t>& );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:129 */
	int GetNumValues(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:138 */
	int GetNumStreams(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:147 */
	const char* GetStreamName(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:156 */
	ModelStreamType_t GetStreamType(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:166 */
	ModelStreamDataType_t GetStreamDataType(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:175 */
	VertexStreamIndex_t FindStream(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , const char* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:184 */
	VertexStreamIndex_t GetFirstStreamOfType(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , ModelStreamType_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:193 */
	VertexStreamIndex_t AddStream(CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , const char* , ModelStreamType_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:214 */
	void RemoveStream(CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:223 */
	void RenameStream(CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t, const char* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:233 */
	CModelStreamAccessor GetStream(CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:242 */
	CModelStreamReader GetStream(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:251 */
	void GetStreamsOfType(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , ModelStreamType_t, CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:269 */
	void GetStreamsOfType(CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:278 */
	void GetStreamsOfType(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , ModelStreamType_t, CUtlVector<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:287 */
	void GetAllStreams(CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:296 */
	void GetAllStreams(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , CUtlVector<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:305 */
	int GetComponentDataIndex(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:27 */
	typedef ComponentHandle_t ComponentHandle_t;
private:
	CModelMeshStreamSet & m_StreamSet; /* 0 8 */
	const class CHalfEdgeComponentList<CModelMesh::Vertex_t> & m_ComponentList; /* 8 8 */
};

// <0601BF5E> ../public/meshutils/modelmeshstreamsetaccessor.h:23
// member functions: 24
// member variables: 2
// class size: 16
class CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t> {
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:118 */
	void CModelMeshStreamSetAccessor(CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , CModelMeshStreamSet& , const CHalfEdgeComponentList<CModelMesh::Vertex_t>& );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:129 */
	int GetNumValues(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:138 */
	int GetNumStreams(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:147 */
	const char* GetStreamName(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:156 */
	ModelStreamType_t GetStreamType(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:166 */
	ModelStreamDataType_t GetStreamDataType(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:175 */
	VertexStreamIndex_t FindStream(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , const char* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:184 */
	VertexStreamIndex_t GetFirstStreamOfType(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , ModelStreamType_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:193 */
	VertexStreamIndex_t AddStream(CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , const char* , ModelStreamType_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:214 */
	void RemoveStream(CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:223 */
	void RenameStream(CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t, const char* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:233 */
	CModelStreamAccessor GetStream(CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:242 */
	CModelStreamReader GetStream(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:251 */
	void GetStreamsOfType(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , ModelStreamType_t, CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:269 */
	void GetStreamsOfType(CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:278 */
	void GetStreamsOfType(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , ModelStreamType_t, CUtlVector<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:287 */
	void GetAllStreams(CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:296 */
	void GetAllStreams(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , CUtlVector<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:305 */
	int GetComponentDataIndex(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:27 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
private:
	CModelMeshStreamSet & m_StreamSet; /* 0 8 */
	const class CHalfEdgeComponentList<CModelMesh::Vertex_t> & m_ComponentList; /* 8 8 */
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:345 */
	bool SetComponentDataValue<ModelMeshIntFloat_t>(CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t, ComponentHandle_t, const ModelMeshIntFloat_t& );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:204 */
	VertexStreamIndex_t AddStreamWithDefaultValue<ModelMeshIntFloat_t>(CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , const char* , ModelStreamType_t, const ModelMeshIntFloat_t& );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:361 */
	ModelMeshIntFloat_t GetComponentDataValue<ModelMeshIntFloat_t>(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t, ComponentHandle_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:361 */
	Vector GetComponentDataValue<Vector>(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t, ComponentHandle_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:330 */
	bool GetComponentDataValues<Vector>(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t, int, const ComponentHandle_t* , Vector* );
};

// <0601C39B> ../public/meshutils/modelmeshstreamsetaccessor.h:23
// member functions: 23
// member variables: 2
// class size: 16
class CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t> {
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:118 */
	void CModelMeshStreamSetAccessor(CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , CModelMeshStreamSet& , const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>& );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:129 */
	int GetNumValues(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:138 */
	int GetNumStreams(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:147 */
	const char* GetStreamName(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , FaceVertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:156 */
	ModelStreamType_t GetStreamType(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , FaceVertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:166 */
	ModelStreamDataType_t GetStreamDataType(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , FaceVertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:175 */
	FaceVertexStreamIndex_t FindStream(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , const char* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:184 */
	FaceVertexStreamIndex_t GetFirstStreamOfType(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , ModelStreamType_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:193 */
	FaceVertexStreamIndex_t AddStream(CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , const char* , ModelStreamType_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:214 */
	void RemoveStream(CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , FaceVertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:223 */
	void RenameStream(CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , FaceVertexStreamIndex_t, const char* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:233 */
	CModelStreamAccessor GetStream(CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , FaceVertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:242 */
	CModelStreamReader GetStream(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , FaceVertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:251 */
	void GetStreamsOfType(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , ModelStreamType_t, CUtlVector<CModelMesh::FaceVertexStreamIndex_t, CUtlMemory<CModelMesh::FaceVertexStreamIndex_t, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:269 */
	void GetStreamsOfType(CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:278 */
	void GetStreamsOfType(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , ModelStreamType_t, CUtlVector<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:287 */
	void GetAllStreams(CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:296 */
	void GetAllStreams(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , CUtlVector<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:305 */
	int GetComponentDataIndex(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:27 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
private:
	CModelMeshStreamSet & m_StreamSet; /* 0 8 */
	const class CHalfEdgeComponentList<CModelMesh::FaceVertex_t> & m_ComponentList; /* 8 8 */
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:345 */
	bool SetComponentDataValue<Vector>(CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , FaceVertexStreamIndex_t, ComponentHandle_t, const Vector& );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:345 */
	bool SetComponentDataValue<Vector4D>(CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , FaceVertexStreamIndex_t, ComponentHandle_t, const Vector4D& );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:361 */
	Vector2D GetComponentDataValue<Vector2D>(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , FaceVertexStreamIndex_t, ComponentHandle_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:361 */
	Vector GetComponentDataValue<Vector>(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , FaceVertexStreamIndex_t, ComponentHandle_t);
};

// <061CAEF5> ../public/meshutils/modelmeshstreamsetaccessor.h:23
// member functions: 20
// member variables: 2
// class size: 16
class CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t> {
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:118 */
	void CModelMeshStreamSetAccessor(CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , CModelMeshStreamSet& , const CHalfEdgeComponentList<CModelMesh::Vertex_t>& );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:129 */
	int GetNumValues(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:138 */
	int GetNumStreams(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:147 */
	const char* GetStreamName(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:156 */
	ModelStreamType_t GetStreamType(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:166 */
	ModelStreamDataType_t GetStreamDataType(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:175 */
	VertexStreamIndex_t FindStream(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , const char* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:184 */
	VertexStreamIndex_t GetFirstStreamOfType(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , ModelStreamType_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:193 */
	VertexStreamIndex_t AddStream(CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , const char* , ModelStreamType_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:214 */
	void RemoveStream(CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:223 */
	void RenameStream(CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t, const char* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:233 */
	CModelStreamAccessor GetStream(CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:242 */
	CModelStreamReader GetStream(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:251 */
	void GetStreamsOfType(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , ModelStreamType_t, CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:269 */
	void GetStreamsOfType(CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:278 */
	void GetStreamsOfType(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , ModelStreamType_t, CUtlVector<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:287 */
	void GetAllStreams(CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:296 */
	void GetAllStreams(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , CUtlVector<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:305 */
	int GetComponentDataIndex(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:27 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
private:
	CModelMeshStreamSet & m_StreamSet; /* 0 8 */
	const class CHalfEdgeComponentList<CModelMesh::Vertex_t> & m_ComponentList; /* 8 8 */
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:361 */
	Vector GetComponentDataValue<Vector>(const CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>* , VertexStreamIndex_t, ComponentHandle_t);
};

// <061CB24B> ../public/meshutils/modelmeshstreamsetaccessor.h:23
// member functions: 22
// member variables: 2
// class size: 16
class CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t> {
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:118 */
	void CModelMeshStreamSetAccessor(CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , CModelMeshStreamSet& , const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>& );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:129 */
	int GetNumValues(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:138 */
	int GetNumStreams(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:147 */
	const char* GetStreamName(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , FaceVertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:156 */
	ModelStreamType_t GetStreamType(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , FaceVertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:166 */
	ModelStreamDataType_t GetStreamDataType(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , FaceVertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:175 */
	FaceVertexStreamIndex_t FindStream(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , const char* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:184 */
	FaceVertexStreamIndex_t GetFirstStreamOfType(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , ModelStreamType_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:193 */
	FaceVertexStreamIndex_t AddStream(CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , const char* , ModelStreamType_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:214 */
	void RemoveStream(CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , FaceVertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:223 */
	void RenameStream(CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , FaceVertexStreamIndex_t, const char* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:233 */
	CModelStreamAccessor GetStream(CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , FaceVertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:242 */
	CModelStreamReader GetStream(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , FaceVertexStreamIndex_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:251 */
	void GetStreamsOfType(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , ModelStreamType_t, CUtlVector<CModelMesh::FaceVertexStreamIndex_t, CUtlMemory<CModelMesh::FaceVertexStreamIndex_t, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:269 */
	void GetStreamsOfType(CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:278 */
	void GetStreamsOfType(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , ModelStreamType_t, CUtlVector<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:287 */
	void GetAllStreams(CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:296 */
	void GetAllStreams(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , CUtlVector<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >* );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:305 */
	int GetComponentDataIndex(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:27 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
private:
	CModelMeshStreamSet & m_StreamSet; /* 0 8 */
	const class CHalfEdgeComponentList<CModelMesh::FaceVertex_t> & m_ComponentList; /* 8 8 */
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:345 */
	bool SetComponentDataValue<Vector4D>(CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , FaceVertexStreamIndex_t, ComponentHandle_t, const Vector4D& );
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:361 */
	Vector2D GetComponentDataValue<Vector2D>(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , FaceVertexStreamIndex_t, ComponentHandle_t);
	/* ../public/meshutils/modelmeshstreamsetaccessor.h:361 */
	Vector GetComponentDataValue<Vector>(const CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>* , FaceVertexStreamIndex_t, ComponentHandle_t);
};

// <05F763A1> ../public/meshutils/modelmeshstreamsetaccessor.h:118
void CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::CModelMeshStreamSetAccessor(CModelMeshStreamSet& streamSet, const CHalfEdgeComponentList<CModelMesh::Vertex_t>& componentList)
{
} /* size: 0 */

// <05F7634F> ../public/meshutils/modelmeshstreamsetaccessor.h:118
void CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::CModelMeshStreamSetAccessor(CModelMeshStreamSet& streamSet, const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>& componentList)
{
} /* size: 0 */

// <05F76203> ../public/meshutils/modelmeshstreamsetaccessor.h:118
void CModelMeshStreamSetAccessor<CModelMesh::Face_t, CModelMesh::FaceStreamIndex_t>::CModelMeshStreamSetAccessor(CModelMeshStreamSet& streamSet, const CHalfEdgeComponentList<CModelMesh::Face_t>& componentList)
{
} /* size: 0 */

// <0608E86B> ../public/meshutils/modelmeshstreamsetaccessor.h:138
void CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetNumStreams()
{
} /* size: 0 */

// <060914A9> ../public/meshutils/modelmeshstreamsetaccessor.h:147
void CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStreamName(FaceVertexStreamIndex_t nStreamIndex)
{
} /* size: 0 */

// <0608BEAB> ../public/meshutils/modelmeshstreamsetaccessor.h:147
void CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStreamName(VertexStreamIndex_t nStreamIndex)
{
} /* size: 0 */

// <06091CDA> ../public/meshutils/modelmeshstreamsetaccessor.h:156
void CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStreamType(VertexStreamIndex_t nStreamIndex)
{
} /* size: 0 */

// <06091484> ../public/meshutils/modelmeshstreamsetaccessor.h:156
void CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStreamType(FaceVertexStreamIndex_t nStreamIndex)
{
} /* size: 0 */

// <0609212C> ../public/meshutils/modelmeshstreamsetaccessor.h:175
void CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::FindStream(const char* pStreamName)
{
} /* size: 0 */

// <06091CFF> ../public/meshutils/modelmeshstreamsetaccessor.h:175
void CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::FindStream(const char* pStreamName)
{
} /* size: 0 */

// <061D335D> ../public/meshutils/modelmeshstreamsetaccessor.h:184
void CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetFirstStreamOfType(ModelStreamType_t nStreamType)
{
} /* size: 0 */

// <061D32F0> ../public/meshutils/modelmeshstreamsetaccessor.h:184
void CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetFirstStreamOfType(ModelStreamType_t nStreamType)
{
} /* size: 0 */

// <061D31D7> ../public/meshutils/modelmeshstreamsetaccessor.h:193
// variable: 1
void CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::AddStream(const char* pStreamName, ModelStreamType_t nStreamType)
{
	int nStreamIndex; // 195
} /* size: 0, variables: 1 */

// <06091E47> ../public/meshutils/modelmeshstreamsetaccessor.h:193
// variable: 1
void CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::AddStream(const char* pStreamName, ModelStreamType_t nStreamType)
{
	int nStreamIndex; // 195
} /* size: 0, variables: 1 */

// <0608CFDC> ../public/meshutils/modelmeshstreamsetaccessor.h:204
// variable: 1
void CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::AddStreamWithDefaultValue<ModelMeshIntFloat_t>(const char* pStreamName, ModelStreamType_t nStreamType, const ModelMeshIntFloat_t& defaultValue)
{
	int nStreamIndex; // 206
} /* size: 0, variables: 1 */

// <0608E805> ../public/meshutils/modelmeshstreamsetaccessor.h:214
void CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::RemoveStream(FaceVertexStreamIndex_t nStream)
{
} /* size: 0 */

// <0608D142> ../public/meshutils/modelmeshstreamsetaccessor.h:214
void CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::RemoveStream(VertexStreamIndex_t nStream)
{
} /* size: 0 */

// <06091CB5> ../public/meshutils/modelmeshstreamsetaccessor.h:233
void CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStream(FaceVertexStreamIndex_t nStream)
{
} /* size: 0 */

// <06094D2E> ../public/meshutils/modelmeshstreamsetaccessor.h:242
void CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStream(VertexStreamIndex_t nStream)
{
} /* size: 0 */

// <06094D90> ../public/meshutils/modelmeshstreamsetaccessor.h:251
// variables: 2
// function calls: 17
void CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStreamsOfType(ModelStreamType_t nStreamType, CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >* pOutStreams)
{
	const int  nNumStreams; // 253
	{
		int iStream; // 256
		CModelMeshStreamIndex<CModelMesh::Vertex_t>::CModelMeshStreamIndex(
					int nIndex);  // 159
		VertexStreamIndex_t::VertexStreamIndex_t(
					int);  // 260
		CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::NumAllocated(); // 1247
		CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::Element(
			int i);  // 1252
		Construct<CModelMesh::VertexStreamIndex_t, CModelMesh::VertexStreamIndex_t>(VertexStreamIndex_t* pMemory); // 1252
		CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Base(); // 112
		CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::Base(); // 368
		CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::AddToTail(
				VertexStreamIndex_t& src);  // 260
	}
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::Count(); // 254
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::IsGrowable(); // 881
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::EnsureCapacity(
			int num);  // 254
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <06095519> ../public/meshutils/modelmeshstreamsetaccessor.h:269
void CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStreamsOfType(ModelStreamType_t nStreamType, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pOutStreams)
{
} /* size: 0 */

// <060954E6> ../public/meshutils/modelmeshstreamsetaccessor.h:269
void CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStreamsOfType(ModelStreamType_t nStreamType, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pOutStreams)
{
} /* size: 0 */

// <060954B3> ../public/meshutils/modelmeshstreamsetaccessor.h:269
void CModelMeshStreamSetAccessor<CModelMesh::Face_t, CModelMesh::FaceStreamIndex_t>::GetStreamsOfType(ModelStreamType_t nStreamType, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pOutStreams)
{
} /* size: 0 */

// <061D28DA> ../public/meshutils/modelmeshstreamsetaccessor.h:305
void CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetComponentDataIndex(const ComponentHandle_t hComponent)
{
} /* size: 0 */

// <061D280F> ../public/meshutils/modelmeshstreamsetaccessor.h:305
void CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetComponentDataIndex(const ComponentHandle_t hComponent)
{
} /* size: 0 */

// <06093B5A> ../public/meshutils/modelmeshstreamsetaccessor.h:330
// variable: 1
void CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetComponentDataValues<Vector>(VertexStreamIndex_t nStream, int nNumComponents, const ComponentHandle_t* pComponentHandles, Vector* pOutValues)
{
	CUtlVector<int, CUtlMemory<int, int> > componentIndices; // 333
} /* size: 0, variables: 1 */

// <061D2B29> ../public/meshutils/modelmeshstreamsetaccessor.h:345
// variables: 4
void CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::SetComponentDataValue<Vector4D>(FaceVertexStreamIndex_t nStream, ComponentHandle_t hComponent, const Vector4D& value)
{
	const char   __FUNCTION__; // 28428
	int nStreamIndex; // 347
	int nComponentIndex; // 348
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 349
	}
} /* size: 0, variables: 3 */

// <060E3F25> ../public/meshutils/modelmeshstreamsetaccessor.h:345
// variables: 2
// function calls: 10
void CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::SetComponentDataValue<ModelMeshIntFloat_t>(VertexStreamIndex_t nStream, ComponentHandle_t hComponent, const ModelMeshIntFloat_t& value)
{
	int nStreamIndex; // 347
	int nComponentIndex; // 348
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 307
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetComponentDataIndex(
				const ComponentHandle_t  hComponent);  // 348
	CModelMeshStreamIndex<CModelMesh::Vertex_t>::ToInt(); // 347
	{
	}
	CModelStreamReader::GetStreamType(); // 653
	GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 653
	CModelStreamAccessor::SetValues<ModelMeshIntFloat_t>(
					int nNumValues,
					const int* pValueIndices,
					const ModelMeshIntFloat_t* pValues);  // 353
} /* size: 0, variables: 2, inline expansions: 10 (0 bytes) */

// <0608CE21> ../public/meshutils/modelmeshstreamsetaccessor.h:345
// variables: 4
void CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::SetComponentDataValue<ModelMeshIntFloat_t>(VertexStreamIndex_t nStream, ComponentHandle_t hComponent, const ModelMeshIntFloat_t& value)
{
	const char   __FUNCTION__; // 12170
	int nStreamIndex; // 347
	int nComponentIndex; // 348
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 349
	}
} /* size: 0, variables: 3 */

// <0608874E> ../public/meshutils/modelmeshstreamsetaccessor.h:345
// variables: 4
void CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::SetComponentDataValue<Vector4D>(FaceVertexStreamIndex_t nStream, ComponentHandle_t hComponent, const Vector4D& value)
{
	const char   __FUNCTION__; // 12170
	int nStreamIndex; // 347
	int nComponentIndex; // 348
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 349
	}
} /* size: 0, variables: 3 */

// <060886A9> ../public/meshutils/modelmeshstreamsetaccessor.h:345
// variables: 4
void CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::SetComponentDataValue<Vector>(FaceVertexStreamIndex_t nStream, ComponentHandle_t hComponent, const Vector& value)
{
	const char   __FUNCTION__; // 12170
	int nStreamIndex; // 347
	int nComponentIndex; // 348
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 349
	}
} /* size: 0, variables: 3 */

// <061D2D39> ../public/meshutils/modelmeshstreamsetaccessor.h:361
// variables: 5
void CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetComponentDataValue<Vector>(VertexStreamIndex_t nStream, const ComponentHandle_t hComponent)
{
	const char   __FUNCTION__; // 28428
	Vector tempValue; // 363
	int nStreamIndex; // 364
	int nComponentIndex; // 365
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 366
	}
} /* size: 0, variables: 4 */

// <061D2C89> ../public/meshutils/modelmeshstreamsetaccessor.h:361
// variables: 5
void CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetComponentDataValue<Vector>(FaceVertexStreamIndex_t nStream, const ComponentHandle_t hComponent)
{
	const char   __FUNCTION__; // 28428
	Vector tempValue; // 363
	int nStreamIndex; // 364
	int nComponentIndex; // 365
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 366
	}
} /* size: 0, variables: 4 */

// <061D2BFD> ../public/meshutils/modelmeshstreamsetaccessor.h:361
// variables: 5
void CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetComponentDataValue<Vector2D>(FaceVertexStreamIndex_t nStream, const ComponentHandle_t hComponent)
{
	const char   __FUNCTION__; // 28428
	Vector2D tempValue; // 363
	int nStreamIndex; // 364
	int nComponentIndex; // 365
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 366
	}
} /* size: 0, variables: 4 */

// <0608DEB7> ../public/meshutils/modelmeshstreamsetaccessor.h:361
// variables: 5
// function calls: 13
void CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetComponentDataValue<Vector>(VertexStreamIndex_t nStream, const ComponentHandle_t hComponent)
{
	const char   __FUNCTION__; // 12170
	Vector tempValue; // 363
	int nStreamIndex; // 364
	int nComponentIndex; // 365
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 366
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 307
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetComponentDataIndex(
				const ComponentHandle_t  hComponent);  // 365
	Vector::Vector(); // 363
	CModelMeshStreamIndex<CModelMesh::Vertex_t>::ToInt(); // 364
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 373
	CModelStreamReader::GetStreamType(); // 567
	GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 567
	CModelStreamReader::GetValues<Vector>(
				int nNumValues,
				const int* pValueIndices,
				Vector* pOutValues);  // 369
} /* size: 0, variables: 4, inline expansions: 13 (0 bytes) */

// <0608DA35> ../public/meshutils/modelmeshstreamsetaccessor.h:361
// variables: 5
// function calls: 13
void CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetComponentDataValue<Vector>(FaceVertexStreamIndex_t nStream, const ComponentHandle_t hComponent)
{
	const char   __FUNCTION__; // 12170
	Vector tempValue; // 363
	int nStreamIndex; // 364
	int nComponentIndex; // 365
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 366
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 307
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetComponentDataIndex(
				const ComponentHandle_t  hComponent);  // 365
	Vector::Vector(); // 363
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::ToInt(); // 364
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 373
	CModelStreamReader::GetStreamType(); // 567
	GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 567
	CModelStreamReader::GetValues<Vector>(
				int nNumValues,
				const int* pValueIndices,
				Vector* pOutValues);  // 369
} /* size: 0, variables: 4, inline expansions: 13 (0 bytes) */

// <0608D5B1> ../public/meshutils/modelmeshstreamsetaccessor.h:361
// variables: 5
// function calls: 13
void CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetComponentDataValue<Vector2D>(FaceVertexStreamIndex_t nStream, const ComponentHandle_t hComponent)
{
	const char   __FUNCTION__; // 12170
	Vector2D tempValue; // 363
	int nStreamIndex; // 364
	int nComponentIndex; // 365
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 366
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 307
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetComponentDataIndex(
				const ComponentHandle_t  hComponent);  // 365
	Vector2D::Vector2D(); // 363
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::ToInt(); // 364
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 373
	CModelStreamReader::GetStreamType(); // 567
	GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 567
	CModelStreamReader::GetValues<Vector2D>(
				int nNumValues,
				const int* pValueIndices,
				Vector2D* pOutValues);  // 369
} /* size: 0, variables: 4, inline expansions: 13 (0 bytes) */

// <0608D167> ../public/meshutils/modelmeshstreamsetaccessor.h:361
// variables: 5
// function calls: 12
void CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetComponentDataValue<ModelMeshIntFloat_t>(VertexStreamIndex_t nStream, const ComponentHandle_t hComponent)
{
	const char   __FUNCTION__; // 12170
	ModelMeshIntFloat_t tempValue; // 363
	int nStreamIndex; // 364
	int nComponentIndex; // 365
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 366
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 307
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetComponentDataIndex(
				const ComponentHandle_t  hComponent);  // 365
	CModelMeshStreamIndex<CModelMesh::Vertex_t>::ToInt(); // 364
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 373
	CModelStreamReader::GetStreamType(); // 567
	GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 567
	CModelStreamReader::GetValues<ModelMeshIntFloat_t>(
					int nNumValues,
					const int* pValueIndices,
					ModelMeshIntFloat_t* pOutValues);  // 369
} /* size: 0, variables: 4, inline expansions: 12 (0 bytes) */

