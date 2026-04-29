
//
// public/meshutils/modelmeshdelta.h
//
//	referenced by: libengine2.so
//
//	functions: 92
//	classes: 12
//

// <05F6D3D1> ../public/meshutils/modelmeshdelta.h:26
void CModelMeshDelta<CModelMesh::Vertex_t>::~CModelMeshDelta()
{
} /* size: 0 */

// <05F6D3B5> ../public/meshutils/modelmeshdelta.h:26
inline void CModelMeshDelta<CModelMesh::Vertex_t>::~CModelMeshDelta()
{
} /* size: 0 */

// <05F6D251> ../public/meshutils/modelmeshdelta.h:26
void CModelMeshDelta<CModelMesh::FaceVertex_t>::~CModelMeshDelta()
{
} /* size: 0 */

// <05F6D235> ../public/meshutils/modelmeshdelta.h:26
inline void CModelMeshDelta<CModelMesh::FaceVertex_t>::~CModelMeshDelta()
{
} /* size: 0 */

// <05F6D0D1> ../public/meshutils/modelmeshdelta.h:26
void CModelMeshDelta<CModelMesh::Edge_t>::~CModelMeshDelta()
{
} /* size: 0 */

// <05F6D0B5> ../public/meshutils/modelmeshdelta.h:26
inline void CModelMeshDelta<CModelMesh::Edge_t>::~CModelMeshDelta()
{
} /* size: 0 */

// <05F6CF51> ../public/meshutils/modelmeshdelta.h:26
void CModelMeshDelta<CModelMesh::Face_t>::~CModelMeshDelta()
{
} /* size: 0 */

// <05F6CF35> ../public/meshutils/modelmeshdelta.h:26
inline void CModelMeshDelta<CModelMesh::Face_t>::~CModelMeshDelta()
{
} /* size: 0 */

// <05C518D6> ../public/meshutils/modelmeshdelta.h:26
// member functions: 24
// member variables: 5
// class size: 120
class CModelMeshDelta<CModelMesh::Vertex_t> {
	/* ../public/meshutils/modelmeshdelta.h:34 */
	typedef struct CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int> StreamIndex_t;
	/* ../public/meshutils/modelmeshdelta.h:35 */
	StreamIndex_t InvalidStreamIndex(void);
	/* ../public/meshutils/modelmeshdelta.h:167 */
	void CModelMeshDelta(CModelMeshDelta<CModelMesh::Vertex_t>* , const char* , const CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:178 */
	CModelMeshDelta<CModelMesh::Vertex_t>& operator=(CModelMeshDelta<CModelMesh::Vertex_t>* , const CModelMeshDelta<CModelMesh::Vertex_t>& );
	/* ../public/meshutils/modelmeshdelta.h:192 */
	int GetNumValues(const CModelMeshDelta<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:205 */
	int GetNumStreams(const CModelMeshDelta<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:214 */
	const char* GetName(const CModelMeshDelta<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:223 */
	void SetName(CModelMeshDelta<CModelMesh::Vertex_t>* , const char* );
	/* ../public/meshutils/modelmeshdelta.h:32 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmeshdelta.h:232 */
	ComponentHandle_t GetComponentHandleForValue(const CModelMeshDelta<CModelMesh::Vertex_t>* , int);
	/* ../public/meshutils/modelmeshdelta.h:251 */
	int GetValueIndexForComponent(const CModelMeshDelta<CModelMesh::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdelta.h:266 */
	void RemoveAll(CModelMeshDelta<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:277 */
	void RemoveValueForComponent(CModelMeshDelta<CModelMesh::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdelta.h:410 */
	void CopyComponentDataValueFromOtherDelta(CModelMeshDelta<CModelMesh::Vertex_t>* , StreamIndex_t, ComponentHandle_t* , const CModelMeshDelta<CModelMesh::Vertex_t>* , StreamIndex_t, ComponentHandle_t* , int);
	/* ../public/meshutils/modelmeshdelta.h:466 */
	StreamIndex_t AddStream(CModelMeshDelta<CModelMesh::Vertex_t>* , const char* , ModelStreamType_t);
	/* ../public/meshutils/modelmeshdelta.h:475 */
	void RemoveStream(CModelMeshDelta<CModelMesh::Vertex_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:484 */
	StreamIndex_t FindStream(const CModelMeshDelta<CModelMesh::Vertex_t>* , const char* );
	/* ../public/meshutils/modelmeshdelta.h:493 */
	const char* GetStreamName(const CModelMeshDelta<CModelMesh::Vertex_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:502 */
	ModelStreamType_t GetStreamType(const CModelMeshDelta<CModelMesh::Vertex_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:511 */
	bool CanAppendStreamSetFromDelta(const CModelMeshDelta<CModelMesh::Vertex_t>* , const CModelMeshDelta<CModelMesh::Vertex_t>& );
	/* ../public/meshutils/modelmeshdelta.h:520 */
	bool AppendStreamsSetFromDelta(CModelMeshDelta<CModelMesh::Vertex_t>* , const CModelMeshDelta<CModelMesh::Vertex_t>* , CHandleTranslator* );
	/* ../public/meshutils/modelmeshdelta.h:573 */
	bool CheckIntegrity(const CModelMeshDelta<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:613 */
	void GetStreamsOfType(CModelMeshDelta<CModelMesh::Vertex_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshdelta.h:622 */
	const CModelMeshStreamSet& GetStreamSet(const CModelMeshDelta<CModelMesh::Vertex_t>* );
private:
	/* ../public/meshutils/modelmeshdelta.h:131 */
	void CModelMeshDelta(CModelMeshDelta<CModelMesh::Vertex_t>* , const CModelMeshDelta<CModelMesh::Vertex_t>& );
	/* ../public/meshutils/modelmeshdelta.h:342 */
	void AddEntriesForComponents(CModelMeshDelta<CModelMesh::Vertex_t>* , const ComponentHandle_t* , int, int* );
	CUtlString m_Name; /* 0 8 */
	const const class CHalfEdgeComponentList<CModelMesh::Vertex_t> * m_pComponentList; /* 8 8 */
	CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int> > m_HandleToIndexTable; /* 16 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_ValueIndexToHandleArray; /* 48 32 */
	CModelMeshStreamSet m_StreamSet; /* 80 40 */
};

// <05C56FF4> ../public/meshutils/modelmeshdelta.h:26
// member functions: 24
// member variables: 5
// class size: 120
class CModelMeshDelta<CModelMesh::FaceVertex_t> {
	/* ../public/meshutils/modelmeshdelta.h:34 */
	typedef struct CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int> StreamIndex_t;
	/* ../public/meshutils/modelmeshdelta.h:35 */
	StreamIndex_t InvalidStreamIndex(void);
	/* ../public/meshutils/modelmeshdelta.h:167 */
	void CModelMeshDelta(CModelMeshDelta<CModelMesh::FaceVertex_t>* , const char* , const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:178 */
	CModelMeshDelta<CModelMesh::FaceVertex_t>& operator=(CModelMeshDelta<CModelMesh::FaceVertex_t>* , const CModelMeshDelta<CModelMesh::FaceVertex_t>& );
	/* ../public/meshutils/modelmeshdelta.h:192 */
	int GetNumValues(const CModelMeshDelta<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:205 */
	int GetNumStreams(const CModelMeshDelta<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:214 */
	const char* GetName(const CModelMeshDelta<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:223 */
	void SetName(CModelMeshDelta<CModelMesh::FaceVertex_t>* , const char* );
	/* ../public/meshutils/modelmeshdelta.h:32 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmeshdelta.h:232 */
	ComponentHandle_t GetComponentHandleForValue(const CModelMeshDelta<CModelMesh::FaceVertex_t>* , int);
	/* ../public/meshutils/modelmeshdelta.h:251 */
	int GetValueIndexForComponent(const CModelMeshDelta<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdelta.h:266 */
	void RemoveAll(CModelMeshDelta<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:277 */
	void RemoveValueForComponent(CModelMeshDelta<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdelta.h:410 */
	void CopyComponentDataValueFromOtherDelta(CModelMeshDelta<CModelMesh::FaceVertex_t>* , StreamIndex_t, ComponentHandle_t* , const CModelMeshDelta<CModelMesh::FaceVertex_t>* , StreamIndex_t, ComponentHandle_t* , int);
	/* ../public/meshutils/modelmeshdelta.h:466 */
	StreamIndex_t AddStream(CModelMeshDelta<CModelMesh::FaceVertex_t>* , const char* , ModelStreamType_t);
	/* ../public/meshutils/modelmeshdelta.h:475 */
	void RemoveStream(CModelMeshDelta<CModelMesh::FaceVertex_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:484 */
	StreamIndex_t FindStream(const CModelMeshDelta<CModelMesh::FaceVertex_t>* , const char* );
	/* ../public/meshutils/modelmeshdelta.h:493 */
	const char* GetStreamName(const CModelMeshDelta<CModelMesh::FaceVertex_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:502 */
	ModelStreamType_t GetStreamType(const CModelMeshDelta<CModelMesh::FaceVertex_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:511 */
	bool CanAppendStreamSetFromDelta(const CModelMeshDelta<CModelMesh::FaceVertex_t>* , const CModelMeshDelta<CModelMesh::FaceVertex_t>& );
	/* ../public/meshutils/modelmeshdelta.h:520 */
	bool AppendStreamsSetFromDelta(CModelMeshDelta<CModelMesh::FaceVertex_t>* , const CModelMeshDelta<CModelMesh::FaceVertex_t>* , CHandleTranslator* );
	/* ../public/meshutils/modelmeshdelta.h:573 */
	bool CheckIntegrity(const CModelMeshDelta<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:613 */
	void GetStreamsOfType(CModelMeshDelta<CModelMesh::FaceVertex_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshdelta.h:622 */
	const CModelMeshStreamSet& GetStreamSet(const CModelMeshDelta<CModelMesh::FaceVertex_t>* );
private:
	/* ../public/meshutils/modelmeshdelta.h:131 */
	void CModelMeshDelta(CModelMeshDelta<CModelMesh::FaceVertex_t>* , const CModelMeshDelta<CModelMesh::FaceVertex_t>& );
	/* ../public/meshutils/modelmeshdelta.h:342 */
	void AddEntriesForComponents(CModelMeshDelta<CModelMesh::FaceVertex_t>* , const ComponentHandle_t* , int, int* );
	CUtlString m_Name; /* 0 8 */
	const const class CHalfEdgeComponentList<CModelMesh::FaceVertex_t> * m_pComponentList; /* 8 8 */
	CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int> > m_HandleToIndexTable; /* 16 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_ValueIndexToHandleArray; /* 48 32 */
	CModelMeshStreamSet m_StreamSet; /* 80 40 */
};

// <05C5C5A5> ../public/meshutils/modelmeshdelta.h:26
// member functions: 24
// member variables: 5
// class size: 120
class CModelMeshDelta<CModelMesh::Edge_t> {
	/* ../public/meshutils/modelmeshdelta.h:34 */
	typedef struct CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int> StreamIndex_t;
	/* ../public/meshutils/modelmeshdelta.h:35 */
	StreamIndex_t InvalidStreamIndex(void);
	/* ../public/meshutils/modelmeshdelta.h:167 */
	void CModelMeshDelta(CModelMeshDelta<CModelMesh::Edge_t>* , const char* , const CHalfEdgeComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdelta.h:178 */
	CModelMeshDelta<CModelMesh::Edge_t>& operator=(CModelMeshDelta<CModelMesh::Edge_t>* , const CModelMeshDelta<CModelMesh::Edge_t>& );
	/* ../public/meshutils/modelmeshdelta.h:192 */
	int GetNumValues(const CModelMeshDelta<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdelta.h:205 */
	int GetNumStreams(const CModelMeshDelta<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdelta.h:214 */
	const char* GetName(const CModelMeshDelta<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdelta.h:223 */
	void SetName(CModelMeshDelta<CModelMesh::Edge_t>* , const char* );
	/* ../public/meshutils/modelmeshdelta.h:32 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmeshdelta.h:232 */
	ComponentHandle_t GetComponentHandleForValue(const CModelMeshDelta<CModelMesh::Edge_t>* , int);
	/* ../public/meshutils/modelmeshdelta.h:251 */
	int GetValueIndexForComponent(const CModelMeshDelta<CModelMesh::Edge_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdelta.h:266 */
	void RemoveAll(CModelMeshDelta<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdelta.h:277 */
	void RemoveValueForComponent(CModelMeshDelta<CModelMesh::Edge_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdelta.h:410 */
	void CopyComponentDataValueFromOtherDelta(CModelMeshDelta<CModelMesh::Edge_t>* , StreamIndex_t, ComponentHandle_t* , const CModelMeshDelta<CModelMesh::Edge_t>* , StreamIndex_t, ComponentHandle_t* , int);
	/* ../public/meshutils/modelmeshdelta.h:466 */
	StreamIndex_t AddStream(CModelMeshDelta<CModelMesh::Edge_t>* , const char* , ModelStreamType_t);
	/* ../public/meshutils/modelmeshdelta.h:475 */
	void RemoveStream(CModelMeshDelta<CModelMesh::Edge_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:484 */
	StreamIndex_t FindStream(const CModelMeshDelta<CModelMesh::Edge_t>* , const char* );
	/* ../public/meshutils/modelmeshdelta.h:493 */
	const char* GetStreamName(const CModelMeshDelta<CModelMesh::Edge_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:502 */
	ModelStreamType_t GetStreamType(const CModelMeshDelta<CModelMesh::Edge_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:511 */
	bool CanAppendStreamSetFromDelta(const CModelMeshDelta<CModelMesh::Edge_t>* , const CModelMeshDelta<CModelMesh::Edge_t>& );
	/* ../public/meshutils/modelmeshdelta.h:520 */
	bool AppendStreamsSetFromDelta(CModelMeshDelta<CModelMesh::Edge_t>* , const CModelMeshDelta<CModelMesh::Edge_t>* , CHandleTranslator* );
	/* ../public/meshutils/modelmeshdelta.h:573 */
	bool CheckIntegrity(const CModelMeshDelta<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdelta.h:613 */
	void GetStreamsOfType(CModelMeshDelta<CModelMesh::Edge_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshdelta.h:622 */
	const CModelMeshStreamSet& GetStreamSet(const CModelMeshDelta<CModelMesh::Edge_t>* );
private:
	/* ../public/meshutils/modelmeshdelta.h:131 */
	void CModelMeshDelta(CModelMeshDelta<CModelMesh::Edge_t>* , const CModelMeshDelta<CModelMesh::Edge_t>& );
	/* ../public/meshutils/modelmeshdelta.h:342 */
	void AddEntriesForComponents(CModelMeshDelta<CModelMesh::Edge_t>* , const ComponentHandle_t* , int, int* );
	CUtlString m_Name; /* 0 8 */
	const const class CHalfEdgeComponentList<CModelMesh::Edge_t> * m_pComponentList; /* 8 8 */
	CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int> > m_HandleToIndexTable; /* 16 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_ValueIndexToHandleArray; /* 48 32 */
	CModelMeshStreamSet m_StreamSet; /* 80 40 */
};

// <05C61B56> ../public/meshutils/modelmeshdelta.h:26
// member functions: 24
// member variables: 5
// class size: 120
class CModelMeshDelta<CModelMesh::Face_t> {
	/* ../public/meshutils/modelmeshdelta.h:34 */
	typedef struct CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int> StreamIndex_t;
	/* ../public/meshutils/modelmeshdelta.h:35 */
	StreamIndex_t InvalidStreamIndex(void);
	/* ../public/meshutils/modelmeshdelta.h:167 */
	void CModelMeshDelta(CModelMeshDelta<CModelMesh::Face_t>* , const char* , const CHalfEdgeComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdelta.h:178 */
	CModelMeshDelta<CModelMesh::Face_t>& operator=(CModelMeshDelta<CModelMesh::Face_t>* , const CModelMeshDelta<CModelMesh::Face_t>& );
	/* ../public/meshutils/modelmeshdelta.h:192 */
	int GetNumValues(const CModelMeshDelta<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdelta.h:205 */
	int GetNumStreams(const CModelMeshDelta<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdelta.h:214 */
	const char* GetName(const CModelMeshDelta<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdelta.h:223 */
	void SetName(CModelMeshDelta<CModelMesh::Face_t>* , const char* );
	/* ../public/meshutils/modelmeshdelta.h:32 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmeshdelta.h:232 */
	ComponentHandle_t GetComponentHandleForValue(const CModelMeshDelta<CModelMesh::Face_t>* , int);
	/* ../public/meshutils/modelmeshdelta.h:251 */
	int GetValueIndexForComponent(const CModelMeshDelta<CModelMesh::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdelta.h:266 */
	void RemoveAll(CModelMeshDelta<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdelta.h:277 */
	void RemoveValueForComponent(CModelMeshDelta<CModelMesh::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdelta.h:410 */
	void CopyComponentDataValueFromOtherDelta(CModelMeshDelta<CModelMesh::Face_t>* , StreamIndex_t, ComponentHandle_t* , const CModelMeshDelta<CModelMesh::Face_t>* , StreamIndex_t, ComponentHandle_t* , int);
	/* ../public/meshutils/modelmeshdelta.h:466 */
	StreamIndex_t AddStream(CModelMeshDelta<CModelMesh::Face_t>* , const char* , ModelStreamType_t);
	/* ../public/meshutils/modelmeshdelta.h:475 */
	void RemoveStream(CModelMeshDelta<CModelMesh::Face_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:484 */
	StreamIndex_t FindStream(const CModelMeshDelta<CModelMesh::Face_t>* , const char* );
	/* ../public/meshutils/modelmeshdelta.h:493 */
	const char* GetStreamName(const CModelMeshDelta<CModelMesh::Face_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:502 */
	ModelStreamType_t GetStreamType(const CModelMeshDelta<CModelMesh::Face_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:511 */
	bool CanAppendStreamSetFromDelta(const CModelMeshDelta<CModelMesh::Face_t>* , const CModelMeshDelta<CModelMesh::Face_t>& );
	/* ../public/meshutils/modelmeshdelta.h:520 */
	bool AppendStreamsSetFromDelta(CModelMeshDelta<CModelMesh::Face_t>* , const CModelMeshDelta<CModelMesh::Face_t>* , CHandleTranslator* );
	/* ../public/meshutils/modelmeshdelta.h:573 */
	bool CheckIntegrity(const CModelMeshDelta<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdelta.h:613 */
	void GetStreamsOfType(CModelMeshDelta<CModelMesh::Face_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshdelta.h:622 */
	const CModelMeshStreamSet& GetStreamSet(const CModelMeshDelta<CModelMesh::Face_t>* );
private:
	/* ../public/meshutils/modelmeshdelta.h:131 */
	void CModelMeshDelta(CModelMeshDelta<CModelMesh::Face_t>* , const CModelMeshDelta<CModelMesh::Face_t>& );
	/* ../public/meshutils/modelmeshdelta.h:342 */
	void AddEntriesForComponents(CModelMeshDelta<CModelMesh::Face_t>* , const ComponentHandle_t* , int, int* );
	CUtlString m_Name; /* 0 8 */
	const const class CHalfEdgeComponentList<CModelMesh::Face_t> * m_pComponentList; /* 8 8 */
	CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int> > m_HandleToIndexTable; /* 16 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_ValueIndexToHandleArray; /* 48 32 */
	CModelMeshStreamSet m_StreamSet; /* 80 40 */
};

// <05F38061> ../public/meshutils/modelmeshdelta.h:26
// member functions: 25
// member variables: 5
// class size: 120
class CModelMeshDelta<CModelMesh::Vertex_t> {
	/* ../public/meshutils/modelmeshdelta.h:34 */
	typedef struct CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int> StreamIndex_t;
	/* ../public/meshutils/modelmeshdelta.h:35 */
	StreamIndex_t InvalidStreamIndex(void);
	/* ../public/meshutils/modelmeshdelta.h:167 */
	void CModelMeshDelta(CModelMeshDelta<CModelMesh::Vertex_t>* , const char* , const CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:178 */
	CModelMeshDelta<CModelMesh::Vertex_t>& operator=(CModelMeshDelta<CModelMesh::Vertex_t>* , const CModelMeshDelta<CModelMesh::Vertex_t>& );
	/* ../public/meshutils/modelmeshdelta.h:192 */
	int GetNumValues(const CModelMeshDelta<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:205 */
	int GetNumStreams(const CModelMeshDelta<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:214 */
	const char* GetName(const CModelMeshDelta<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:223 */
	void SetName(CModelMeshDelta<CModelMesh::Vertex_t>* , const char* );
	/* ../public/meshutils/modelmeshdelta.h:32 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmeshdelta.h:232 */
	ComponentHandle_t GetComponentHandleForValue(const CModelMeshDelta<CModelMesh::Vertex_t>* , int);
	/* ../public/meshutils/modelmeshdelta.h:251 */
	int GetValueIndexForComponent(const CModelMeshDelta<CModelMesh::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdelta.h:266 */
	void RemoveAll(CModelMeshDelta<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:277 */
	void RemoveValueForComponent(CModelMeshDelta<CModelMesh::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdelta.h:410 */
	void CopyComponentDataValueFromOtherDelta(CModelMeshDelta<CModelMesh::Vertex_t>* , StreamIndex_t, ComponentHandle_t* , const CModelMeshDelta<CModelMesh::Vertex_t>* , StreamIndex_t, ComponentHandle_t* , int);
	/* ../public/meshutils/modelmeshdelta.h:466 */
	StreamIndex_t AddStream(CModelMeshDelta<CModelMesh::Vertex_t>* , const char* , ModelStreamType_t);
	/* ../public/meshutils/modelmeshdelta.h:475 */
	void RemoveStream(CModelMeshDelta<CModelMesh::Vertex_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:484 */
	StreamIndex_t FindStream(const CModelMeshDelta<CModelMesh::Vertex_t>* , const char* );
	/* ../public/meshutils/modelmeshdelta.h:493 */
	const char* GetStreamName(const CModelMeshDelta<CModelMesh::Vertex_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:502 */
	ModelStreamType_t GetStreamType(const CModelMeshDelta<CModelMesh::Vertex_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:511 */
	bool CanAppendStreamSetFromDelta(const CModelMeshDelta<CModelMesh::Vertex_t>* , const CModelMeshDelta<CModelMesh::Vertex_t>& );
	/* ../public/meshutils/modelmeshdelta.h:520 */
	bool AppendStreamsSetFromDelta(CModelMeshDelta<CModelMesh::Vertex_t>* , const CModelMeshDelta<CModelMesh::Vertex_t>* , CHandleTranslator* );
	/* ../public/meshutils/modelmeshdelta.h:573 */
	bool CheckIntegrity(const CModelMeshDelta<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:613 */
	void GetStreamsOfType(CModelMeshDelta<CModelMesh::Vertex_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshdelta.h:622 */
	const CModelMeshStreamSet& GetStreamSet(const CModelMeshDelta<CModelMesh::Vertex_t>* );
private:
	/* ../public/meshutils/modelmeshdelta.h:131 */
	void CModelMeshDelta(CModelMeshDelta<CModelMesh::Vertex_t>* , const CModelMeshDelta<CModelMesh::Vertex_t>& );
	/* ../public/meshutils/modelmeshdelta.h:342 */
	void AddEntriesForComponents(CModelMeshDelta<CModelMesh::Vertex_t>* , const ComponentHandle_t* , int, int* );
	CUtlString m_Name; /* 0 8 */
	const const class CHalfEdgeComponentList<CModelMesh::Vertex_t> * m_pComponentList; /* 8 8 */
	CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int> > m_HandleToIndexTable; /* 16 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_ValueIndexToHandleArray; /* 48 32 */
	CModelMeshStreamSet m_StreamSet; /* 80 40 */
	/* ../public/meshutils/modelmeshdelta.h:28 */
	typedef uint32 ComponentHandleInt_t;
	struct StreamIndexTag_t {
	};
	void ~CModelMeshDelta(CModelMeshDelta<CModelMesh::Vertex_t>* );
};

// <05F3DE49> ../public/meshutils/modelmeshdelta.h:26
// member functions: 25
// member variables: 5
// class size: 120
class CModelMeshDelta<CModelMesh::FaceVertex_t> {
	/* ../public/meshutils/modelmeshdelta.h:34 */
	typedef struct CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int> StreamIndex_t;
	/* ../public/meshutils/modelmeshdelta.h:35 */
	StreamIndex_t InvalidStreamIndex(void);
	/* ../public/meshutils/modelmeshdelta.h:167 */
	void CModelMeshDelta(CModelMeshDelta<CModelMesh::FaceVertex_t>* , const char* , const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:178 */
	CModelMeshDelta<CModelMesh::FaceVertex_t>& operator=(CModelMeshDelta<CModelMesh::FaceVertex_t>* , const CModelMeshDelta<CModelMesh::FaceVertex_t>& );
	/* ../public/meshutils/modelmeshdelta.h:192 */
	int GetNumValues(const CModelMeshDelta<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:205 */
	int GetNumStreams(const CModelMeshDelta<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:214 */
	const char* GetName(const CModelMeshDelta<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:223 */
	void SetName(CModelMeshDelta<CModelMesh::FaceVertex_t>* , const char* );
	/* ../public/meshutils/modelmeshdelta.h:32 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmeshdelta.h:232 */
	ComponentHandle_t GetComponentHandleForValue(const CModelMeshDelta<CModelMesh::FaceVertex_t>* , int);
	/* ../public/meshutils/modelmeshdelta.h:251 */
	int GetValueIndexForComponent(const CModelMeshDelta<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdelta.h:266 */
	void RemoveAll(CModelMeshDelta<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:277 */
	void RemoveValueForComponent(CModelMeshDelta<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdelta.h:410 */
	void CopyComponentDataValueFromOtherDelta(CModelMeshDelta<CModelMesh::FaceVertex_t>* , StreamIndex_t, ComponentHandle_t* , const CModelMeshDelta<CModelMesh::FaceVertex_t>* , StreamIndex_t, ComponentHandle_t* , int);
	/* ../public/meshutils/modelmeshdelta.h:466 */
	StreamIndex_t AddStream(CModelMeshDelta<CModelMesh::FaceVertex_t>* , const char* , ModelStreamType_t);
	/* ../public/meshutils/modelmeshdelta.h:475 */
	void RemoveStream(CModelMeshDelta<CModelMesh::FaceVertex_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:484 */
	StreamIndex_t FindStream(const CModelMeshDelta<CModelMesh::FaceVertex_t>* , const char* );
	/* ../public/meshutils/modelmeshdelta.h:493 */
	const char* GetStreamName(const CModelMeshDelta<CModelMesh::FaceVertex_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:502 */
	ModelStreamType_t GetStreamType(const CModelMeshDelta<CModelMesh::FaceVertex_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:511 */
	bool CanAppendStreamSetFromDelta(const CModelMeshDelta<CModelMesh::FaceVertex_t>* , const CModelMeshDelta<CModelMesh::FaceVertex_t>& );
	/* ../public/meshutils/modelmeshdelta.h:520 */
	bool AppendStreamsSetFromDelta(CModelMeshDelta<CModelMesh::FaceVertex_t>* , const CModelMeshDelta<CModelMesh::FaceVertex_t>* , CHandleTranslator* );
	/* ../public/meshutils/modelmeshdelta.h:573 */
	bool CheckIntegrity(const CModelMeshDelta<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:613 */
	void GetStreamsOfType(CModelMeshDelta<CModelMesh::FaceVertex_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshdelta.h:622 */
	const CModelMeshStreamSet& GetStreamSet(const CModelMeshDelta<CModelMesh::FaceVertex_t>* );
private:
	/* ../public/meshutils/modelmeshdelta.h:131 */
	void CModelMeshDelta(CModelMeshDelta<CModelMesh::FaceVertex_t>* , const CModelMeshDelta<CModelMesh::FaceVertex_t>& );
	/* ../public/meshutils/modelmeshdelta.h:342 */
	void AddEntriesForComponents(CModelMeshDelta<CModelMesh::FaceVertex_t>* , const ComponentHandle_t* , int, int* );
	CUtlString m_Name; /* 0 8 */
	const const class CHalfEdgeComponentList<CModelMesh::FaceVertex_t> * m_pComponentList; /* 8 8 */
	CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int> > m_HandleToIndexTable; /* 16 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_ValueIndexToHandleArray; /* 48 32 */
	CModelMeshStreamSet m_StreamSet; /* 80 40 */
	/* ../public/meshutils/modelmeshdelta.h:28 */
	typedef uint32 ComponentHandleInt_t;
	struct StreamIndexTag_t {
	};
	void ~CModelMeshDelta(CModelMeshDelta<CModelMesh::FaceVertex_t>* );
};

// <05F43C11> ../public/meshutils/modelmeshdelta.h:26
// member functions: 25
// member variables: 5
// class size: 120
class CModelMeshDelta<CModelMesh::Edge_t> {
	/* ../public/meshutils/modelmeshdelta.h:34 */
	typedef struct CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int> StreamIndex_t;
	/* ../public/meshutils/modelmeshdelta.h:35 */
	StreamIndex_t InvalidStreamIndex(void);
	/* ../public/meshutils/modelmeshdelta.h:167 */
	void CModelMeshDelta(CModelMeshDelta<CModelMesh::Edge_t>* , const char* , const CHalfEdgeComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdelta.h:178 */
	CModelMeshDelta<CModelMesh::Edge_t>& operator=(CModelMeshDelta<CModelMesh::Edge_t>* , const CModelMeshDelta<CModelMesh::Edge_t>& );
	/* ../public/meshutils/modelmeshdelta.h:192 */
	int GetNumValues(const CModelMeshDelta<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdelta.h:205 */
	int GetNumStreams(const CModelMeshDelta<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdelta.h:214 */
	const char* GetName(const CModelMeshDelta<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdelta.h:223 */
	void SetName(CModelMeshDelta<CModelMesh::Edge_t>* , const char* );
	/* ../public/meshutils/modelmeshdelta.h:32 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmeshdelta.h:232 */
	ComponentHandle_t GetComponentHandleForValue(const CModelMeshDelta<CModelMesh::Edge_t>* , int);
	/* ../public/meshutils/modelmeshdelta.h:251 */
	int GetValueIndexForComponent(const CModelMeshDelta<CModelMesh::Edge_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdelta.h:266 */
	void RemoveAll(CModelMeshDelta<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdelta.h:277 */
	void RemoveValueForComponent(CModelMeshDelta<CModelMesh::Edge_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdelta.h:410 */
	void CopyComponentDataValueFromOtherDelta(CModelMeshDelta<CModelMesh::Edge_t>* , StreamIndex_t, ComponentHandle_t* , const CModelMeshDelta<CModelMesh::Edge_t>* , StreamIndex_t, ComponentHandle_t* , int);
	/* ../public/meshutils/modelmeshdelta.h:466 */
	StreamIndex_t AddStream(CModelMeshDelta<CModelMesh::Edge_t>* , const char* , ModelStreamType_t);
	/* ../public/meshutils/modelmeshdelta.h:475 */
	void RemoveStream(CModelMeshDelta<CModelMesh::Edge_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:484 */
	StreamIndex_t FindStream(const CModelMeshDelta<CModelMesh::Edge_t>* , const char* );
	/* ../public/meshutils/modelmeshdelta.h:493 */
	const char* GetStreamName(const CModelMeshDelta<CModelMesh::Edge_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:502 */
	ModelStreamType_t GetStreamType(const CModelMeshDelta<CModelMesh::Edge_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:511 */
	bool CanAppendStreamSetFromDelta(const CModelMeshDelta<CModelMesh::Edge_t>* , const CModelMeshDelta<CModelMesh::Edge_t>& );
	/* ../public/meshutils/modelmeshdelta.h:520 */
	bool AppendStreamsSetFromDelta(CModelMeshDelta<CModelMesh::Edge_t>* , const CModelMeshDelta<CModelMesh::Edge_t>* , CHandleTranslator* );
	/* ../public/meshutils/modelmeshdelta.h:573 */
	bool CheckIntegrity(const CModelMeshDelta<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdelta.h:613 */
	void GetStreamsOfType(CModelMeshDelta<CModelMesh::Edge_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshdelta.h:622 */
	const CModelMeshStreamSet& GetStreamSet(const CModelMeshDelta<CModelMesh::Edge_t>* );
private:
	/* ../public/meshutils/modelmeshdelta.h:131 */
	void CModelMeshDelta(CModelMeshDelta<CModelMesh::Edge_t>* , const CModelMeshDelta<CModelMesh::Edge_t>& );
	/* ../public/meshutils/modelmeshdelta.h:342 */
	void AddEntriesForComponents(CModelMeshDelta<CModelMesh::Edge_t>* , const ComponentHandle_t* , int, int* );
	CUtlString m_Name; /* 0 8 */
	const const class CHalfEdgeComponentList<CModelMesh::Edge_t> * m_pComponentList; /* 8 8 */
	CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int> > m_HandleToIndexTable; /* 16 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_ValueIndexToHandleArray; /* 48 32 */
	CModelMeshStreamSet m_StreamSet; /* 80 40 */
	/* ../public/meshutils/modelmeshdelta.h:28 */
	typedef uint32 ComponentHandleInt_t;
	struct StreamIndexTag_t {
	};
	void ~CModelMeshDelta(CModelMeshDelta<CModelMesh::Edge_t>* );
};

// <05F499D4> ../public/meshutils/modelmeshdelta.h:26
// member functions: 25
// member variables: 5
// class size: 120
class CModelMeshDelta<CModelMesh::Face_t> {
	/* ../public/meshutils/modelmeshdelta.h:34 */
	typedef struct CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int> StreamIndex_t;
	/* ../public/meshutils/modelmeshdelta.h:35 */
	StreamIndex_t InvalidStreamIndex(void);
	/* ../public/meshutils/modelmeshdelta.h:167 */
	void CModelMeshDelta(CModelMeshDelta<CModelMesh::Face_t>* , const char* , const CHalfEdgeComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdelta.h:178 */
	CModelMeshDelta<CModelMesh::Face_t>& operator=(CModelMeshDelta<CModelMesh::Face_t>* , const CModelMeshDelta<CModelMesh::Face_t>& );
	/* ../public/meshutils/modelmeshdelta.h:192 */
	int GetNumValues(const CModelMeshDelta<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdelta.h:205 */
	int GetNumStreams(const CModelMeshDelta<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdelta.h:214 */
	const char* GetName(const CModelMeshDelta<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdelta.h:223 */
	void SetName(CModelMeshDelta<CModelMesh::Face_t>* , const char* );
	/* ../public/meshutils/modelmeshdelta.h:32 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmeshdelta.h:232 */
	ComponentHandle_t GetComponentHandleForValue(const CModelMeshDelta<CModelMesh::Face_t>* , int);
	/* ../public/meshutils/modelmeshdelta.h:251 */
	int GetValueIndexForComponent(const CModelMeshDelta<CModelMesh::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdelta.h:266 */
	void RemoveAll(CModelMeshDelta<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdelta.h:277 */
	void RemoveValueForComponent(CModelMeshDelta<CModelMesh::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdelta.h:410 */
	void CopyComponentDataValueFromOtherDelta(CModelMeshDelta<CModelMesh::Face_t>* , StreamIndex_t, ComponentHandle_t* , const CModelMeshDelta<CModelMesh::Face_t>* , StreamIndex_t, ComponentHandle_t* , int);
	/* ../public/meshutils/modelmeshdelta.h:466 */
	StreamIndex_t AddStream(CModelMeshDelta<CModelMesh::Face_t>* , const char* , ModelStreamType_t);
	/* ../public/meshutils/modelmeshdelta.h:475 */
	void RemoveStream(CModelMeshDelta<CModelMesh::Face_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:484 */
	StreamIndex_t FindStream(const CModelMeshDelta<CModelMesh::Face_t>* , const char* );
	/* ../public/meshutils/modelmeshdelta.h:493 */
	const char* GetStreamName(const CModelMeshDelta<CModelMesh::Face_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:502 */
	ModelStreamType_t GetStreamType(const CModelMeshDelta<CModelMesh::Face_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:511 */
	bool CanAppendStreamSetFromDelta(const CModelMeshDelta<CModelMesh::Face_t>* , const CModelMeshDelta<CModelMesh::Face_t>& );
	/* ../public/meshutils/modelmeshdelta.h:520 */
	bool AppendStreamsSetFromDelta(CModelMeshDelta<CModelMesh::Face_t>* , const CModelMeshDelta<CModelMesh::Face_t>* , CHandleTranslator* );
	/* ../public/meshutils/modelmeshdelta.h:573 */
	bool CheckIntegrity(const CModelMeshDelta<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdelta.h:613 */
	void GetStreamsOfType(CModelMeshDelta<CModelMesh::Face_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshdelta.h:622 */
	const CModelMeshStreamSet& GetStreamSet(const CModelMeshDelta<CModelMesh::Face_t>* );
private:
	/* ../public/meshutils/modelmeshdelta.h:131 */
	void CModelMeshDelta(CModelMeshDelta<CModelMesh::Face_t>* , const CModelMeshDelta<CModelMesh::Face_t>& );
	/* ../public/meshutils/modelmeshdelta.h:342 */
	void AddEntriesForComponents(CModelMeshDelta<CModelMesh::Face_t>* , const ComponentHandle_t* , int, int* );
	CUtlString m_Name; /* 0 8 */
	const const class CHalfEdgeComponentList<CModelMesh::Face_t> * m_pComponentList; /* 8 8 */
	CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int> > m_HandleToIndexTable; /* 16 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_ValueIndexToHandleArray; /* 48 32 */
	CModelMeshStreamSet m_StreamSet; /* 80 40 */
	/* ../public/meshutils/modelmeshdelta.h:28 */
	typedef uint32 ComponentHandleInt_t;
	struct StreamIndexTag_t {
	};
	void ~CModelMeshDelta(CModelMeshDelta<CModelMesh::Face_t>* );
};

// <06003A4F> ../public/meshutils/modelmeshdelta.h:26
// member functions: 24
// member variables: 5
// class size: 120
class CModelMeshDelta<CModelMesh::Vertex_t> {
	/* ../public/meshutils/modelmeshdelta.h:34 */
	typedef struct CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int> StreamIndex_t;
	/* ../public/meshutils/modelmeshdelta.h:35 */
	StreamIndex_t InvalidStreamIndex(void);
	/* ../public/meshutils/modelmeshdelta.h:167 */
	void CModelMeshDelta(CModelMeshDelta<CModelMesh::Vertex_t>* , const char* , const CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:178 */
	CModelMeshDelta<CModelMesh::Vertex_t>& operator=(CModelMeshDelta<CModelMesh::Vertex_t>* , const CModelMeshDelta<CModelMesh::Vertex_t>& );
	/* ../public/meshutils/modelmeshdelta.h:192 */
	int GetNumValues(const CModelMeshDelta<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:205 */
	int GetNumStreams(const CModelMeshDelta<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:214 */
	const char* GetName(const CModelMeshDelta<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:223 */
	void SetName(CModelMeshDelta<CModelMesh::Vertex_t>* , const char* );
	/* ../public/meshutils/modelmeshdelta.h:32 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmeshdelta.h:232 */
	ComponentHandle_t GetComponentHandleForValue(const CModelMeshDelta<CModelMesh::Vertex_t>* , int);
	/* ../public/meshutils/modelmeshdelta.h:251 */
	int GetValueIndexForComponent(const CModelMeshDelta<CModelMesh::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdelta.h:266 */
	void RemoveAll(CModelMeshDelta<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:277 */
	void RemoveValueForComponent(CModelMeshDelta<CModelMesh::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdelta.h:410 */
	void CopyComponentDataValueFromOtherDelta(CModelMeshDelta<CModelMesh::Vertex_t>* , StreamIndex_t, ComponentHandle_t* , const CModelMeshDelta<CModelMesh::Vertex_t>* , StreamIndex_t, ComponentHandle_t* , int);
	/* ../public/meshutils/modelmeshdelta.h:466 */
	StreamIndex_t AddStream(CModelMeshDelta<CModelMesh::Vertex_t>* , const char* , ModelStreamType_t);
	/* ../public/meshutils/modelmeshdelta.h:475 */
	void RemoveStream(CModelMeshDelta<CModelMesh::Vertex_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:484 */
	StreamIndex_t FindStream(const CModelMeshDelta<CModelMesh::Vertex_t>* , const char* );
	/* ../public/meshutils/modelmeshdelta.h:493 */
	const char* GetStreamName(const CModelMeshDelta<CModelMesh::Vertex_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:502 */
	ModelStreamType_t GetStreamType(const CModelMeshDelta<CModelMesh::Vertex_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:511 */
	bool CanAppendStreamSetFromDelta(const CModelMeshDelta<CModelMesh::Vertex_t>* , const CModelMeshDelta<CModelMesh::Vertex_t>& );
	/* ../public/meshutils/modelmeshdelta.h:520 */
	bool AppendStreamsSetFromDelta(CModelMeshDelta<CModelMesh::Vertex_t>* , const CModelMeshDelta<CModelMesh::Vertex_t>* , CHandleTranslator* );
	/* ../public/meshutils/modelmeshdelta.h:573 */
	bool CheckIntegrity(const CModelMeshDelta<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:613 */
	void GetStreamsOfType(CModelMeshDelta<CModelMesh::Vertex_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshdelta.h:622 */
	const CModelMeshStreamSet& GetStreamSet(const CModelMeshDelta<CModelMesh::Vertex_t>* );
private:
	/* ../public/meshutils/modelmeshdelta.h:131 */
	void CModelMeshDelta(CModelMeshDelta<CModelMesh::Vertex_t>* , const CModelMeshDelta<CModelMesh::Vertex_t>& );
	/* ../public/meshutils/modelmeshdelta.h:342 */
	void AddEntriesForComponents(CModelMeshDelta<CModelMesh::Vertex_t>* , const ComponentHandle_t* , int, int* );
	CUtlString m_Name; /* 0 8 */
	const const class CHalfEdgeComponentList<CModelMesh::Vertex_t> * m_pComponentList; /* 8 8 */
	CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int> > m_HandleToIndexTable; /* 16 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_ValueIndexToHandleArray; /* 48 32 */
	CModelMeshStreamSet m_StreamSet; /* 80 40 */
	/* ../public/meshutils/modelmeshdelta.h:28 */
	typedef uint32 ComponentHandleInt_t;
	/* ../public/meshutils/modelmeshdelta.h:33 */
	struct StreamIndexTag_t {
	};
};

// <06009911> ../public/meshutils/modelmeshdelta.h:26
// member functions: 24
// member variables: 5
// class size: 120
class CModelMeshDelta<CModelMesh::FaceVertex_t> {
	/* ../public/meshutils/modelmeshdelta.h:34 */
	typedef struct CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int> StreamIndex_t;
	/* ../public/meshutils/modelmeshdelta.h:35 */
	StreamIndex_t InvalidStreamIndex(void);
	/* ../public/meshutils/modelmeshdelta.h:167 */
	void CModelMeshDelta(CModelMeshDelta<CModelMesh::FaceVertex_t>* , const char* , const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:178 */
	CModelMeshDelta<CModelMesh::FaceVertex_t>& operator=(CModelMeshDelta<CModelMesh::FaceVertex_t>* , const CModelMeshDelta<CModelMesh::FaceVertex_t>& );
	/* ../public/meshutils/modelmeshdelta.h:192 */
	int GetNumValues(const CModelMeshDelta<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:205 */
	int GetNumStreams(const CModelMeshDelta<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:214 */
	const char* GetName(const CModelMeshDelta<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:223 */
	void SetName(CModelMeshDelta<CModelMesh::FaceVertex_t>* , const char* );
	/* ../public/meshutils/modelmeshdelta.h:32 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmeshdelta.h:232 */
	ComponentHandle_t GetComponentHandleForValue(const CModelMeshDelta<CModelMesh::FaceVertex_t>* , int);
	/* ../public/meshutils/modelmeshdelta.h:251 */
	int GetValueIndexForComponent(const CModelMeshDelta<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdelta.h:266 */
	void RemoveAll(CModelMeshDelta<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:277 */
	void RemoveValueForComponent(CModelMeshDelta<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdelta.h:410 */
	void CopyComponentDataValueFromOtherDelta(CModelMeshDelta<CModelMesh::FaceVertex_t>* , StreamIndex_t, ComponentHandle_t* , const CModelMeshDelta<CModelMesh::FaceVertex_t>* , StreamIndex_t, ComponentHandle_t* , int);
	/* ../public/meshutils/modelmeshdelta.h:466 */
	StreamIndex_t AddStream(CModelMeshDelta<CModelMesh::FaceVertex_t>* , const char* , ModelStreamType_t);
	/* ../public/meshutils/modelmeshdelta.h:475 */
	void RemoveStream(CModelMeshDelta<CModelMesh::FaceVertex_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:484 */
	StreamIndex_t FindStream(const CModelMeshDelta<CModelMesh::FaceVertex_t>* , const char* );
	/* ../public/meshutils/modelmeshdelta.h:493 */
	const char* GetStreamName(const CModelMeshDelta<CModelMesh::FaceVertex_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:502 */
	ModelStreamType_t GetStreamType(const CModelMeshDelta<CModelMesh::FaceVertex_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:511 */
	bool CanAppendStreamSetFromDelta(const CModelMeshDelta<CModelMesh::FaceVertex_t>* , const CModelMeshDelta<CModelMesh::FaceVertex_t>& );
	/* ../public/meshutils/modelmeshdelta.h:520 */
	bool AppendStreamsSetFromDelta(CModelMeshDelta<CModelMesh::FaceVertex_t>* , const CModelMeshDelta<CModelMesh::FaceVertex_t>* , CHandleTranslator* );
	/* ../public/meshutils/modelmeshdelta.h:573 */
	bool CheckIntegrity(const CModelMeshDelta<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshdelta.h:613 */
	void GetStreamsOfType(CModelMeshDelta<CModelMesh::FaceVertex_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshdelta.h:622 */
	const CModelMeshStreamSet& GetStreamSet(const CModelMeshDelta<CModelMesh::FaceVertex_t>* );
private:
	/* ../public/meshutils/modelmeshdelta.h:131 */
	void CModelMeshDelta(CModelMeshDelta<CModelMesh::FaceVertex_t>* , const CModelMeshDelta<CModelMesh::FaceVertex_t>& );
	/* ../public/meshutils/modelmeshdelta.h:342 */
	void AddEntriesForComponents(CModelMeshDelta<CModelMesh::FaceVertex_t>* , const ComponentHandle_t* , int, int* );
	CUtlString m_Name; /* 0 8 */
	const const class CHalfEdgeComponentList<CModelMesh::FaceVertex_t> * m_pComponentList; /* 8 8 */
	CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int> > m_HandleToIndexTable; /* 16 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_ValueIndexToHandleArray; /* 48 32 */
	CModelMeshStreamSet m_StreamSet; /* 80 40 */
	/* ../public/meshutils/modelmeshdelta.h:28 */
	typedef uint32 ComponentHandleInt_t;
	/* ../public/meshutils/modelmeshdelta.h:33 */
	struct StreamIndexTag_t {
	};
};

// <0600F7D3> ../public/meshutils/modelmeshdelta.h:26
// member functions: 24
// member variables: 5
// class size: 120
class CModelMeshDelta<CModelMesh::Edge_t> {
	/* ../public/meshutils/modelmeshdelta.h:34 */
	typedef struct CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int> StreamIndex_t;
	/* ../public/meshutils/modelmeshdelta.h:35 */
	StreamIndex_t InvalidStreamIndex(void);
	/* ../public/meshutils/modelmeshdelta.h:167 */
	void CModelMeshDelta(CModelMeshDelta<CModelMesh::Edge_t>* , const char* , const CHalfEdgeComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdelta.h:178 */
	CModelMeshDelta<CModelMesh::Edge_t>& operator=(CModelMeshDelta<CModelMesh::Edge_t>* , const CModelMeshDelta<CModelMesh::Edge_t>& );
	/* ../public/meshutils/modelmeshdelta.h:192 */
	int GetNumValues(const CModelMeshDelta<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdelta.h:205 */
	int GetNumStreams(const CModelMeshDelta<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdelta.h:214 */
	const char* GetName(const CModelMeshDelta<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdelta.h:223 */
	void SetName(CModelMeshDelta<CModelMesh::Edge_t>* , const char* );
	/* ../public/meshutils/modelmeshdelta.h:32 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmeshdelta.h:232 */
	ComponentHandle_t GetComponentHandleForValue(const CModelMeshDelta<CModelMesh::Edge_t>* , int);
	/* ../public/meshutils/modelmeshdelta.h:251 */
	int GetValueIndexForComponent(const CModelMeshDelta<CModelMesh::Edge_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdelta.h:266 */
	void RemoveAll(CModelMeshDelta<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdelta.h:277 */
	void RemoveValueForComponent(CModelMeshDelta<CModelMesh::Edge_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdelta.h:410 */
	void CopyComponentDataValueFromOtherDelta(CModelMeshDelta<CModelMesh::Edge_t>* , StreamIndex_t, ComponentHandle_t* , const CModelMeshDelta<CModelMesh::Edge_t>* , StreamIndex_t, ComponentHandle_t* , int);
	/* ../public/meshutils/modelmeshdelta.h:466 */
	StreamIndex_t AddStream(CModelMeshDelta<CModelMesh::Edge_t>* , const char* , ModelStreamType_t);
	/* ../public/meshutils/modelmeshdelta.h:475 */
	void RemoveStream(CModelMeshDelta<CModelMesh::Edge_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:484 */
	StreamIndex_t FindStream(const CModelMeshDelta<CModelMesh::Edge_t>* , const char* );
	/* ../public/meshutils/modelmeshdelta.h:493 */
	const char* GetStreamName(const CModelMeshDelta<CModelMesh::Edge_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:502 */
	ModelStreamType_t GetStreamType(const CModelMeshDelta<CModelMesh::Edge_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:511 */
	bool CanAppendStreamSetFromDelta(const CModelMeshDelta<CModelMesh::Edge_t>* , const CModelMeshDelta<CModelMesh::Edge_t>& );
	/* ../public/meshutils/modelmeshdelta.h:520 */
	bool AppendStreamsSetFromDelta(CModelMeshDelta<CModelMesh::Edge_t>* , const CModelMeshDelta<CModelMesh::Edge_t>* , CHandleTranslator* );
	/* ../public/meshutils/modelmeshdelta.h:573 */
	bool CheckIntegrity(const CModelMeshDelta<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshdelta.h:613 */
	void GetStreamsOfType(CModelMeshDelta<CModelMesh::Edge_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshdelta.h:622 */
	const CModelMeshStreamSet& GetStreamSet(const CModelMeshDelta<CModelMesh::Edge_t>* );
private:
	/* ../public/meshutils/modelmeshdelta.h:131 */
	void CModelMeshDelta(CModelMeshDelta<CModelMesh::Edge_t>* , const CModelMeshDelta<CModelMesh::Edge_t>& );
	/* ../public/meshutils/modelmeshdelta.h:342 */
	void AddEntriesForComponents(CModelMeshDelta<CModelMesh::Edge_t>* , const ComponentHandle_t* , int, int* );
	CUtlString m_Name; /* 0 8 */
	const const class CHalfEdgeComponentList<CModelMesh::Edge_t> * m_pComponentList; /* 8 8 */
	CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int> > m_HandleToIndexTable; /* 16 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_ValueIndexToHandleArray; /* 48 32 */
	CModelMeshStreamSet m_StreamSet; /* 80 40 */
	/* ../public/meshutils/modelmeshdelta.h:28 */
	typedef uint32 ComponentHandleInt_t;
	/* ../public/meshutils/modelmeshdelta.h:33 */
	struct StreamIndexTag_t {
	};
};

// <06015695> ../public/meshutils/modelmeshdelta.h:26
// member functions: 24
// member variables: 5
// class size: 120
class CModelMeshDelta<CModelMesh::Face_t> {
	/* ../public/meshutils/modelmeshdelta.h:34 */
	typedef struct CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int> StreamIndex_t;
	/* ../public/meshutils/modelmeshdelta.h:35 */
	StreamIndex_t InvalidStreamIndex(void);
	/* ../public/meshutils/modelmeshdelta.h:167 */
	void CModelMeshDelta(CModelMeshDelta<CModelMesh::Face_t>* , const char* , const CHalfEdgeComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdelta.h:178 */
	CModelMeshDelta<CModelMesh::Face_t>& operator=(CModelMeshDelta<CModelMesh::Face_t>* , const CModelMeshDelta<CModelMesh::Face_t>& );
	/* ../public/meshutils/modelmeshdelta.h:192 */
	int GetNumValues(const CModelMeshDelta<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdelta.h:205 */
	int GetNumStreams(const CModelMeshDelta<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdelta.h:214 */
	const char* GetName(const CModelMeshDelta<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdelta.h:223 */
	void SetName(CModelMeshDelta<CModelMesh::Face_t>* , const char* );
	/* ../public/meshutils/modelmeshdelta.h:32 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/modelmeshdelta.h:232 */
	ComponentHandle_t GetComponentHandleForValue(const CModelMeshDelta<CModelMesh::Face_t>* , int);
	/* ../public/meshutils/modelmeshdelta.h:251 */
	int GetValueIndexForComponent(const CModelMeshDelta<CModelMesh::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdelta.h:266 */
	void RemoveAll(CModelMeshDelta<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdelta.h:277 */
	void RemoveValueForComponent(CModelMeshDelta<CModelMesh::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshdelta.h:410 */
	void CopyComponentDataValueFromOtherDelta(CModelMeshDelta<CModelMesh::Face_t>* , StreamIndex_t, ComponentHandle_t* , const CModelMeshDelta<CModelMesh::Face_t>* , StreamIndex_t, ComponentHandle_t* , int);
	/* ../public/meshutils/modelmeshdelta.h:466 */
	StreamIndex_t AddStream(CModelMeshDelta<CModelMesh::Face_t>* , const char* , ModelStreamType_t);
	/* ../public/meshutils/modelmeshdelta.h:475 */
	void RemoveStream(CModelMeshDelta<CModelMesh::Face_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:484 */
	StreamIndex_t FindStream(const CModelMeshDelta<CModelMesh::Face_t>* , const char* );
	/* ../public/meshutils/modelmeshdelta.h:493 */
	const char* GetStreamName(const CModelMeshDelta<CModelMesh::Face_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:502 */
	ModelStreamType_t GetStreamType(const CModelMeshDelta<CModelMesh::Face_t>* , StreamIndex_t);
	/* ../public/meshutils/modelmeshdelta.h:511 */
	bool CanAppendStreamSetFromDelta(const CModelMeshDelta<CModelMesh::Face_t>* , const CModelMeshDelta<CModelMesh::Face_t>& );
	/* ../public/meshutils/modelmeshdelta.h:520 */
	bool AppendStreamsSetFromDelta(CModelMeshDelta<CModelMesh::Face_t>* , const CModelMeshDelta<CModelMesh::Face_t>* , CHandleTranslator* );
	/* ../public/meshutils/modelmeshdelta.h:573 */
	bool CheckIntegrity(const CModelMeshDelta<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshdelta.h:613 */
	void GetStreamsOfType(CModelMeshDelta<CModelMesh::Face_t>* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshdelta.h:622 */
	const CModelMeshStreamSet& GetStreamSet(const CModelMeshDelta<CModelMesh::Face_t>* );
private:
	/* ../public/meshutils/modelmeshdelta.h:131 */
	void CModelMeshDelta(CModelMeshDelta<CModelMesh::Face_t>* , const CModelMeshDelta<CModelMesh::Face_t>& );
	/* ../public/meshutils/modelmeshdelta.h:342 */
	void AddEntriesForComponents(CModelMeshDelta<CModelMesh::Face_t>* , const ComponentHandle_t* , int, int* );
	CUtlString m_Name; /* 0 8 */
	const const class CHalfEdgeComponentList<CModelMesh::Face_t> * m_pComponentList; /* 8 8 */
	CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int> > m_HandleToIndexTable; /* 16 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_ValueIndexToHandleArray; /* 48 32 */
	CModelMeshStreamSet m_StreamSet; /* 80 40 */
	/* ../public/meshutils/modelmeshdelta.h:28 */
	typedef uint32 ComponentHandleInt_t;
	/* ../public/meshutils/modelmeshdelta.h:33 */
	struct StreamIndexTag_t {
	};
};

// <06075535> ../public/meshutils/modelmeshdelta.h:35
inline void InvalidStreamIndex(void)
{
} /* size: 0 */

// <0606ED5E> ../public/meshutils/modelmeshdelta.h:167
void CModelMeshDelta<CModelMesh::Vertex_t>::CModelMeshDelta(const char* pDeltaName, const CHalfEdgeComponentList<CModelMesh::Vertex_t>* pComponentList)
{
} /* size: 0 */

// <0606DE52> ../public/meshutils/modelmeshdelta.h:167
void CModelMeshDelta<CModelMesh::FaceVertex_t>::CModelMeshDelta(const char* pDeltaName, const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* pComponentList)
{
} /* size: 0 */

// <0606CF6A> ../public/meshutils/modelmeshdelta.h:167
void CModelMeshDelta<CModelMesh::Edge_t>::CModelMeshDelta(const char* pDeltaName, const CHalfEdgeComponentList<CModelMesh::Edge_t>* pComponentList)
{
} /* size: 0 */

// <0606C05E> ../public/meshutils/modelmeshdelta.h:167
void CModelMeshDelta<CModelMesh::Face_t>::CModelMeshDelta(const char* pDeltaName, const CHalfEdgeComponentList<CModelMesh::Face_t>* pComponentList)
{
} /* size: 0 */

// <05F6CCDE> ../public/meshutils/modelmeshdelta.h:178
void CModelMeshDelta<CModelMesh::Face_t>::operator=(const CModelMeshDelta<CModelMesh::Face_t>& src)
{
} /* size: 0 */

// <05F6CB87> ../public/meshutils/modelmeshdelta.h:178
void CModelMeshDelta<CModelMesh::Vertex_t>::operator=(const CModelMeshDelta<CModelMesh::Vertex_t>& src)
{
} /* size: 0 */

// <05F6CA30> ../public/meshutils/modelmeshdelta.h:178
void CModelMeshDelta<CModelMesh::FaceVertex_t>::operator=(const CModelMeshDelta<CModelMesh::FaceVertex_t>& src)
{
} /* size: 0 */

// <05F6C8C0> ../public/meshutils/modelmeshdelta.h:178
void CModelMeshDelta<CModelMesh::Edge_t>::operator=(const CModelMeshDelta<CModelMesh::Edge_t>& src)
{
} /* size: 0 */

// <06075476> ../public/meshutils/modelmeshdelta.h:192
// variables: 2
void CModelMeshDelta<CModelMesh::Vertex_t>::GetNumValues()
{
	const char   __FUNCTION__; // 11947
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 196
	}
} /* size: 0, variables: 1 */

// <060746E0> ../public/meshutils/modelmeshdelta.h:192
// variables: 2
void CModelMeshDelta<CModelMesh::FaceVertex_t>::GetNumValues()
{
	const char   __FUNCTION__; // 11947
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 196
	}
} /* size: 0, variables: 1 */

// <0607390D> ../public/meshutils/modelmeshdelta.h:192
// variables: 2
void CModelMeshDelta<CModelMesh::Edge_t>::GetNumValues()
{
	const char   __FUNCTION__; // 11947
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 196
	}
} /* size: 0, variables: 1 */

// <06072B77> ../public/meshutils/modelmeshdelta.h:192
// variables: 2
void CModelMeshDelta<CModelMesh::Face_t>::GetNumValues()
{
	const char   __FUNCTION__; // 11947
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 196
	}
} /* size: 0, variables: 1 */

// <05F65413> ../public/meshutils/modelmeshdelta.h:192
// variables: 2
void CModelMeshDelta<CModelMesh::Vertex_t>::GetNumValues()
{
	const char   __FUNCTION__; // 36417
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 196
	}
} /* size: 0, variables: 1 */

// <05F65349> ../public/meshutils/modelmeshdelta.h:192
// variables: 2
void CModelMeshDelta<CModelMesh::FaceVertex_t>::GetNumValues()
{
	const char   __FUNCTION__; // 36417
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 196
	}
} /* size: 0, variables: 1 */

// <05F6524D> ../public/meshutils/modelmeshdelta.h:192
// variables: 2
void CModelMeshDelta<CModelMesh::Edge_t>::GetNumValues()
{
	const char   __FUNCTION__; // 36417
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 196
	}
} /* size: 0, variables: 1 */

// <05F65183> ../public/meshutils/modelmeshdelta.h:192
// variables: 2
void CModelMeshDelta<CModelMesh::Face_t>::GetNumValues()
{
	const char   __FUNCTION__; // 36417
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 196
	}
} /* size: 0, variables: 1 */

// <060755EE> ../public/meshutils/modelmeshdelta.h:205
void CModelMeshDelta<CModelMesh::Vertex_t>::GetNumStreams()
{
} /* size: 0 */

// <06074858> ../public/meshutils/modelmeshdelta.h:205
void CModelMeshDelta<CModelMesh::FaceVertex_t>::GetNumStreams()
{
} /* size: 0 */

// <06073A85> ../public/meshutils/modelmeshdelta.h:205
void CModelMeshDelta<CModelMesh::Edge_t>::GetNumStreams()
{
} /* size: 0 */

// <06072CEF> ../public/meshutils/modelmeshdelta.h:205
void CModelMeshDelta<CModelMesh::Face_t>::GetNumStreams()
{
} /* size: 0 */

// <0607DEA8> ../public/meshutils/modelmeshdelta.h:214
void CModelMeshDelta<CModelMesh::Vertex_t>::GetName()
{
} /* size: 0 */

// <0607D107> ../public/meshutils/modelmeshdelta.h:214
void CModelMeshDelta<CModelMesh::FaceVertex_t>::GetName()
{
} /* size: 0 */

// <0607C364> ../public/meshutils/modelmeshdelta.h:214
void CModelMeshDelta<CModelMesh::Edge_t>::GetName()
{
} /* size: 0 */

// <0607B5C5> ../public/meshutils/modelmeshdelta.h:214
void CModelMeshDelta<CModelMesh::Face_t>::GetName()
{
} /* size: 0 */

// <06075439> ../public/meshutils/modelmeshdelta.h:232
// variables: 2
void CModelMeshDelta<CModelMesh::Vertex_t>::GetComponentHandleForValue(int nValueIndex)
{
	ComponentHandleInt_t nHandleAsInt; // 238
	ComponentHandle_t componentHandle; // 241
} /* size: 0, variables: 2 */

// <060746A3> ../public/meshutils/modelmeshdelta.h:232
// variables: 2
void CModelMeshDelta<CModelMesh::FaceVertex_t>::GetComponentHandleForValue(int nValueIndex)
{
	ComponentHandleInt_t nHandleAsInt; // 238
	ComponentHandle_t componentHandle; // 241
} /* size: 0, variables: 2 */

// <060738D0> ../public/meshutils/modelmeshdelta.h:232
// variables: 2
void CModelMeshDelta<CModelMesh::Edge_t>::GetComponentHandleForValue(int nValueIndex)
{
	ComponentHandleInt_t nHandleAsInt; // 238
	ComponentHandle_t componentHandle; // 241
} /* size: 0, variables: 2 */

// <06072B3A> ../public/meshutils/modelmeshdelta.h:232
// variables: 2
void CModelMeshDelta<CModelMesh::Face_t>::GetComponentHandleForValue(int nValueIndex)
{
	ComponentHandleInt_t nHandleAsInt; // 238
	ComponentHandle_t componentHandle; // 241
} /* size: 0, variables: 2 */

// <0606E0EE> ../public/meshutils/modelmeshdelta.h:251
// variables: 2
void CModelMeshDelta<CModelMesh::Vertex_t>::GetValueIndexForComponent(ComponentHandle_t hComponent)
{
	UtlHashHandle_t hHashTableElement; // 253
	const int  nValueIndex; // 257
} /* size: 0, variables: 2 */

// <0606D206> ../public/meshutils/modelmeshdelta.h:251
// variables: 2
void CModelMeshDelta<CModelMesh::FaceVertex_t>::GetValueIndexForComponent(ComponentHandle_t hComponent)
{
	UtlHashHandle_t hHashTableElement; // 253
	const int  nValueIndex; // 257
} /* size: 0, variables: 2 */

// <0606C2FA> ../public/meshutils/modelmeshdelta.h:251
// variables: 2
void CModelMeshDelta<CModelMesh::Edge_t>::GetValueIndexForComponent(ComponentHandle_t hComponent)
{
	UtlHashHandle_t hHashTableElement; // 253
	const int  nValueIndex; // 257
} /* size: 0, variables: 2 */

// <0606B412> ../public/meshutils/modelmeshdelta.h:251
// variables: 2
void CModelMeshDelta<CModelMesh::Face_t>::GetValueIndexForComponent(ComponentHandle_t hComponent)
{
	UtlHashHandle_t hHashTableElement; // 253
	const int  nValueIndex; // 257
} /* size: 0, variables: 2 */

// <05F68CF5> ../public/meshutils/modelmeshdelta.h:277
// variables: 10
// function calls: 26
void CModelMeshDelta<CModelMesh::Edge_t>::RemoveValueForComponent(ComponentHandle_t hComponent)
{
	const char   __FUNCTION__; // 36694
	const int  nValueIndex; // 280
	const int  nLastValue; // 288
	{
		uint32 nLastHandle; // 291
		UtlHashHandle_t hLastElement; // 292
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 293
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 304
		}
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 291
		Mix32HashFunctor::operator(
				uint32 n);  // 218
		Find(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
			KeyArg_t k);  // 292
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 297
		Mix32HashFunctor::operator(
				uint32 n);  // 218
		Find(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
			KeyArg_t k);  // 302
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
				int i);  // 294
		CUtlKeyValuePair<unsigned int, int>::GetValue(); // 294
		Element(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
			handle_t idx);  // 302
		Get(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
			KeyArg_t k,
			const Element_t& defaultValue);  // 304
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 304
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
				int i);  // 297
		operator[](const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
				handle_t idx);  // 301
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 320
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 325
	}
	ComponentHandleWithListPointer_t::AsInt(); // 253
	Mix32HashFunctor::operator(
			uint32 n);  // 218
	Find(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
		KeyArg_t k);  // 253
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
			int i);  // 296
	operator[](const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
			handle_t idx);  // 257
	CModelMeshDelta<CModelMesh::Edge_t>::GetValueIndexForComponent(
					ComponentHandle_t hComponent);  // 280
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 288
	{
		int i; // 1696
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveMultipleFromTail(
				int num);  // 309
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 320
	Count(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this); // 325
} /* size: 0, variables: 3, inline expansions: 10 (0 bytes) */

// <05F682A5> ../public/meshutils/modelmeshdelta.h:277
// variables: 10
// function calls: 26
void CModelMeshDelta<CModelMesh::Vertex_t>::RemoveValueForComponent(ComponentHandle_t hComponent)
{
	const char   __FUNCTION__; // 36694
	const int  nValueIndex; // 280
	const int  nLastValue; // 288
	{
		uint32 nLastHandle; // 291
		UtlHashHandle_t hLastElement; // 292
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 293
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 304
		}
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 291
		Mix32HashFunctor::operator(
				uint32 n);  // 218
		Find(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
			KeyArg_t k);  // 292
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 297
		Mix32HashFunctor::operator(
				uint32 n);  // 218
		Find(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
			KeyArg_t k);  // 302
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
				int i);  // 294
		CUtlKeyValuePair<unsigned int, int>::GetValue(); // 294
		Element(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
			handle_t idx);  // 302
		Get(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
			KeyArg_t k,
			const Element_t& defaultValue);  // 304
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 304
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
				int i);  // 297
		operator[](const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
				handle_t idx);  // 301
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 320
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 325
	}
	ComponentHandleWithListPointer_t::AsInt(); // 253
	Mix32HashFunctor::operator(
			uint32 n);  // 218
	Find(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
		KeyArg_t k);  // 253
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
			int i);  // 296
	operator[](const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
			handle_t idx);  // 257
	CModelMeshDelta<CModelMesh::Vertex_t>::GetValueIndexForComponent(
					ComponentHandle_t hComponent);  // 280
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 288
	{
		int i; // 1696
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveMultipleFromTail(
				int num);  // 309
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 320
	Count(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this); // 325
} /* size: 0, variables: 3, inline expansions: 10 (0 bytes) */

// <05F6668B> ../public/meshutils/modelmeshdelta.h:277
// variables: 10
// function calls: 26
void CModelMeshDelta<CModelMesh::FaceVertex_t>::RemoveValueForComponent(ComponentHandle_t hComponent)
{
	const char   __FUNCTION__; // 36694
	const int  nValueIndex; // 280
	const int  nLastValue; // 288
	{
		uint32 nLastHandle; // 291
		UtlHashHandle_t hLastElement; // 292
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 293
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 304
		}
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 291
		Mix32HashFunctor::operator(
				uint32 n);  // 218
		Find(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
			KeyArg_t k);  // 292
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 297
		Mix32HashFunctor::operator(
				uint32 n);  // 218
		Find(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
			KeyArg_t k);  // 302
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
				int i);  // 294
		CUtlKeyValuePair<unsigned int, int>::GetValue(); // 294
		Element(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
			handle_t idx);  // 302
		Get(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
			KeyArg_t k,
			const Element_t& defaultValue);  // 304
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 304
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
				int i);  // 297
		operator[](const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
				handle_t idx);  // 301
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 320
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 325
	}
	ComponentHandleWithListPointer_t::AsInt(); // 253
	Mix32HashFunctor::operator(
			uint32 n);  // 218
	Find(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
		KeyArg_t k);  // 253
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
			int i);  // 296
	operator[](const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
			handle_t idx);  // 257
	CModelMeshDelta<CModelMesh::FaceVertex_t>::GetValueIndexForComponent(
					ComponentHandle_t hComponent);  // 280
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 288
	{
		int i; // 1696
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveMultipleFromTail(
				int num);  // 309
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 320
	Count(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this); // 325
} /* size: 0, variables: 3, inline expansions: 10 (0 bytes) */

// <05F65C3B> ../public/meshutils/modelmeshdelta.h:277
// variables: 10
// function calls: 26
void CModelMeshDelta<CModelMesh::Face_t>::RemoveValueForComponent(ComponentHandle_t hComponent)
{
	const char   __FUNCTION__; // 36694
	const int  nValueIndex; // 280
	const int  nLastValue; // 288
	{
		uint32 nLastHandle; // 291
		UtlHashHandle_t hLastElement; // 292
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 293
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 304
		}
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 291
		Mix32HashFunctor::operator(
				uint32 n);  // 218
		Find(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
			KeyArg_t k);  // 292
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 297
		Mix32HashFunctor::operator(
				uint32 n);  // 218
		Find(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
			KeyArg_t k);  // 302
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
				int i);  // 294
		CUtlKeyValuePair<unsigned int, int>::GetValue(); // 294
		Element(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
			handle_t idx);  // 302
		Get(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
			KeyArg_t k,
			const Element_t& defaultValue);  // 304
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 304
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
				int i);  // 297
		operator[](const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
				handle_t idx);  // 301
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 320
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 325
	}
	ComponentHandleWithListPointer_t::AsInt(); // 253
	Mix32HashFunctor::operator(
			uint32 n);  // 218
	Find(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
		KeyArg_t k);  // 253
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
			int i);  // 296
	operator[](const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
			handle_t idx);  // 257
	CModelMeshDelta<CModelMesh::Face_t>::GetValueIndexForComponent(
					ComponentHandle_t hComponent);  // 280
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 288
	{
		int i; // 1696
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveMultipleFromTail(
				int num);  // 309
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 320
	Count(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this); // 325
} /* size: 0, variables: 3, inline expansions: 10 (0 bytes) */

// <0606E145> ../public/meshutils/modelmeshdelta.h:342
// variables: 9
// function calls: 35
void CModelMeshDelta<CModelMesh::Vertex_t>::AddEntriesForComponents(const ComponentHandle_t* pComponentHandles, int nNumComponents, int* pOutValueIndices)
{
	const char   __FUNCTION__; // 12224
	int nNumToAdd; // 346
	{
		int iHandle; // 347
		{
			UtlHashHandle_t hElement; // 349
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 355
			}
			CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
					int i);  // 297
			operator[](const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
					handle_t idx);  // 352
			ComponentHandleWithListPointer_t::AsInt(); // 349
			Mix32HashFunctor::operator(
					uint32 n);  // 218
			Find(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
				KeyArg_t k);  // 349
		}
	}
	{
		int iHandle; // 370
		{
			int nValueIndex; // 374
			ComponentHandleWithListPointer_t::AsInt(); // 375
			CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
				int i);  // 1252
			Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
			CUtlMemory<unsigned int, int>::Base(); // 112
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
					unsigned int& src);  // 375
			ComponentHandleWithListPointer_t::AsInt(); // 376
			CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
					int i);  // 720
			CUtlKeyValuePair<unsigned int, int>::CUtlKeyValuePair<unsigned int, int>(
								const unsigned int& k,
								const int& v);  // 1514
			Construct<CUtlKeyValuePair<unsigned int, int>, unsigned int&, int&>(CUtlKeyValuePair<unsigned int, int>* pMemory); // 720
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
						unsigned int k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 714
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
						unsigned int k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 249
			Mix32HashFunctor::operator(
					uint32 n);  // 249
			Insert(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
				KeyArg_t k,
				ValueArg_t v,
				bool* pDidInsert);  // 376
			_DebuggerBreakInlineExpressionWrapper(void); // 375
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 382
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 387
	}
	Count(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this); // 365
	Reserve(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
		int expected);  // 287
	Reserve(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
		int expected);  // 365
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 366
	CUtlMemory<unsigned int, int>::IsGrowable(); // 881
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 888
	CUtlMemory<unsigned int, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::EnsureCapacity(
			int num);  // 366
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 382
	Count(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this); // 387
} /* size: 0, variables: 2, inline expansions: 11 (0 bytes) */

// <0606D25D> ../public/meshutils/modelmeshdelta.h:342
// variables: 9
// function calls: 35
void CModelMeshDelta<CModelMesh::FaceVertex_t>::AddEntriesForComponents(const ComponentHandle_t* pComponentHandles, int nNumComponents, int* pOutValueIndices)
{
	const char   __FUNCTION__; // 12224
	int nNumToAdd; // 346
	{
		int iHandle; // 347
		{
			UtlHashHandle_t hElement; // 349
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 355
			}
			CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
					int i);  // 297
			operator[](const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
					handle_t idx);  // 352
			ComponentHandleWithListPointer_t::AsInt(); // 349
			Mix32HashFunctor::operator(
					uint32 n);  // 218
			Find(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
				KeyArg_t k);  // 349
		}
	}
	{
		int iHandle; // 370
		{
			int nValueIndex; // 374
			ComponentHandleWithListPointer_t::AsInt(); // 375
			CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
				int i);  // 1252
			Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
			CUtlMemory<unsigned int, int>::Base(); // 112
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
					unsigned int& src);  // 375
			ComponentHandleWithListPointer_t::AsInt(); // 376
			CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
					int i);  // 720
			CUtlKeyValuePair<unsigned int, int>::CUtlKeyValuePair<unsigned int, int>(
								const unsigned int& k,
								const int& v);  // 1514
			Construct<CUtlKeyValuePair<unsigned int, int>, unsigned int&, int&>(CUtlKeyValuePair<unsigned int, int>* pMemory); // 720
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
						unsigned int k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 714
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
						unsigned int k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 249
			Mix32HashFunctor::operator(
					uint32 n);  // 249
			Insert(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
				KeyArg_t k,
				ValueArg_t v,
				bool* pDidInsert);  // 376
			_DebuggerBreakInlineExpressionWrapper(void); // 375
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 382
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 387
	}
	Count(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this); // 365
	Reserve(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
		int expected);  // 287
	Reserve(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
		int expected);  // 365
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 366
	CUtlMemory<unsigned int, int>::IsGrowable(); // 881
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 888
	CUtlMemory<unsigned int, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::EnsureCapacity(
			int num);  // 366
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 382
	Count(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this); // 387
} /* size: 0, variables: 2, inline expansions: 11 (0 bytes) */

// <0606C351> ../public/meshutils/modelmeshdelta.h:342
// variables: 9
// function calls: 35
void CModelMeshDelta<CModelMesh::Edge_t>::AddEntriesForComponents(const ComponentHandle_t* pComponentHandles, int nNumComponents, int* pOutValueIndices)
{
	const char   __FUNCTION__; // 12224
	int nNumToAdd; // 346
	{
		int iHandle; // 347
		{
			UtlHashHandle_t hElement; // 349
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 355
			}
			CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
					int i);  // 297
			operator[](const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
					handle_t idx);  // 352
			ComponentHandleWithListPointer_t::AsInt(); // 349
			Mix32HashFunctor::operator(
					uint32 n);  // 218
			Find(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
				KeyArg_t k);  // 349
		}
	}
	{
		int iHandle; // 370
		{
			int nValueIndex; // 374
			ComponentHandleWithListPointer_t::AsInt(); // 375
			CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
				int i);  // 1252
			Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
			CUtlMemory<unsigned int, int>::Base(); // 112
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
					unsigned int& src);  // 375
			ComponentHandleWithListPointer_t::AsInt(); // 376
			CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
					int i);  // 720
			CUtlKeyValuePair<unsigned int, int>::CUtlKeyValuePair<unsigned int, int>(
								const unsigned int& k,
								const int& v);  // 1514
			Construct<CUtlKeyValuePair<unsigned int, int>, unsigned int&, int&>(CUtlKeyValuePair<unsigned int, int>* pMemory); // 720
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
						unsigned int k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 714
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
						unsigned int k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 249
			Mix32HashFunctor::operator(
					uint32 n);  // 249
			Insert(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
				KeyArg_t k,
				ValueArg_t v,
				bool* pDidInsert);  // 376
			_DebuggerBreakInlineExpressionWrapper(void); // 375
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 382
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 387
	}
	Count(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this); // 365
	Reserve(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
		int expected);  // 287
	Reserve(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
		int expected);  // 365
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 366
	CUtlMemory<unsigned int, int>::IsGrowable(); // 881
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 888
	CUtlMemory<unsigned int, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::EnsureCapacity(
			int num);  // 366
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 382
	Count(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this); // 387
} /* size: 0, variables: 2, inline expansions: 11 (0 bytes) */

// <0606B469> ../public/meshutils/modelmeshdelta.h:342
// variables: 9
// function calls: 35
void CModelMeshDelta<CModelMesh::Face_t>::AddEntriesForComponents(const ComponentHandle_t* pComponentHandles, int nNumComponents, int* pOutValueIndices)
{
	const char   __FUNCTION__; // 12224
	int nNumToAdd; // 346
	{
		int iHandle; // 347
		{
			UtlHashHandle_t hElement; // 349
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 355
			}
			CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
					int i);  // 297
			operator[](const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
					handle_t idx);  // 352
			ComponentHandleWithListPointer_t::AsInt(); // 349
			Mix32HashFunctor::operator(
					uint32 n);  // 218
			Find(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
				KeyArg_t k);  // 349
		}
	}
	{
		int iHandle; // 370
		{
			int nValueIndex; // 374
			ComponentHandleWithListPointer_t::AsInt(); // 375
			CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
				int i);  // 1252
			Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
			CUtlMemory<unsigned int, int>::Base(); // 112
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
					unsigned int& src);  // 375
			ComponentHandleWithListPointer_t::AsInt(); // 376
			CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
					int i);  // 720
			CUtlKeyValuePair<unsigned int, int>::CUtlKeyValuePair<unsigned int, int>(
								const unsigned int& k,
								const int& v);  // 1514
			Construct<CUtlKeyValuePair<unsigned int, int>, unsigned int&, int&>(CUtlKeyValuePair<unsigned int, int>* pMemory); // 720
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
						unsigned int k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 714
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
						unsigned int k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 249
			Mix32HashFunctor::operator(
					uint32 n);  // 249
			Insert(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
				KeyArg_t k,
				ValueArg_t v,
				bool* pDidInsert);  // 376
			_DebuggerBreakInlineExpressionWrapper(void); // 375
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 382
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 387
	}
	Count(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this); // 365
	Reserve(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
		int expected);  // 287
	Reserve(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
		int expected);  // 365
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 366
	CUtlMemory<unsigned int, int>::IsGrowable(); // 881
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 888
	CUtlMemory<unsigned int, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::EnsureCapacity(
			int num);  // 366
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 382
	Count(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this); // 387
} /* size: 0, variables: 2, inline expansions: 11 (0 bytes) */

// <0607539C> ../public/meshutils/modelmeshdelta.h:410
// variables: 4
void CModelMeshDelta<CModelMesh::Vertex_t>::CopyComponentDataValueFromOtherDelta(StreamIndex_t nDstStreamIndex, ComponentHandle_t* pDstComponents, const CModelMeshDelta<CModelMesh::Vertex_t>* pSrcDelta, StreamIndex_t nSrcStreamIndex, ComponentHandle_t* pSrcComponents, int nComponents)
{
	CUtlVector<int, CUtlMemory<int, int> > dstValueIndices; // 412
	CModelStreamAccessor dstStream; // 416
	CModelStreamReader srcStream; // 417
	{
		int i; // 418
	}
} /* size: 0, variables: 3 */

// <06074606> ../public/meshutils/modelmeshdelta.h:410
// variables: 4
void CModelMeshDelta<CModelMesh::FaceVertex_t>::CopyComponentDataValueFromOtherDelta(StreamIndex_t nDstStreamIndex, ComponentHandle_t* pDstComponents, const CModelMeshDelta<CModelMesh::FaceVertex_t>* pSrcDelta, StreamIndex_t nSrcStreamIndex, ComponentHandle_t* pSrcComponents, int nComponents)
{
	CUtlVector<int, CUtlMemory<int, int> > dstValueIndices; // 412
	CModelStreamAccessor dstStream; // 416
	CModelStreamReader srcStream; // 417
	{
		int i; // 418
	}
} /* size: 0, variables: 3 */

// <06073833> ../public/meshutils/modelmeshdelta.h:410
// variables: 4
void CModelMeshDelta<CModelMesh::Edge_t>::CopyComponentDataValueFromOtherDelta(StreamIndex_t nDstStreamIndex, ComponentHandle_t* pDstComponents, const CModelMeshDelta<CModelMesh::Edge_t>* pSrcDelta, StreamIndex_t nSrcStreamIndex, ComponentHandle_t* pSrcComponents, int nComponents)
{
	CUtlVector<int, CUtlMemory<int, int> > dstValueIndices; // 412
	CModelStreamAccessor dstStream; // 416
	CModelStreamReader srcStream; // 417
	{
		int i; // 418
	}
} /* size: 0, variables: 3 */

// <06072A9D> ../public/meshutils/modelmeshdelta.h:410
// variables: 4
void CModelMeshDelta<CModelMesh::Face_t>::CopyComponentDataValueFromOtherDelta(StreamIndex_t nDstStreamIndex, ComponentHandle_t* pDstComponents, const CModelMeshDelta<CModelMesh::Face_t>* pSrcDelta, StreamIndex_t nSrcStreamIndex, ComponentHandle_t* pSrcComponents, int nComponents)
{
	CUtlVector<int, CUtlMemory<int, int> > dstValueIndices; // 412
	CModelStreamAccessor dstStream; // 416
	CModelStreamReader srcStream; // 417
	{
		int i; // 418
	}
} /* size: 0, variables: 3 */

// <060754DD> ../public/meshutils/modelmeshdelta.h:466
void CModelMeshDelta<CModelMesh::Vertex_t>::AddStream(const char* pStreamName, ModelStreamType_t nStreamType)
{
} /* size: 0 */

// <06074747> ../public/meshutils/modelmeshdelta.h:466
void CModelMeshDelta<CModelMesh::FaceVertex_t>::AddStream(const char* pStreamName, ModelStreamType_t nStreamType)
{
} /* size: 0 */

// <06073974> ../public/meshutils/modelmeshdelta.h:466
void CModelMeshDelta<CModelMesh::Edge_t>::AddStream(const char* pStreamName, ModelStreamType_t nStreamType)
{
} /* size: 0 */

// <06072BDE> ../public/meshutils/modelmeshdelta.h:466
void CModelMeshDelta<CModelMesh::Face_t>::AddStream(const char* pStreamName, ModelStreamType_t nStreamType)
{
} /* size: 0 */

// <0607553B> ../public/meshutils/modelmeshdelta.h:484
void CModelMeshDelta<CModelMesh::Vertex_t>::FindStream(const char* pStreamName)
{
} /* size: 0 */

// <060747A5> ../public/meshutils/modelmeshdelta.h:484
void CModelMeshDelta<CModelMesh::FaceVertex_t>::FindStream(const char* pStreamName)
{
} /* size: 0 */

// <060739D2> ../public/meshutils/modelmeshdelta.h:484
void CModelMeshDelta<CModelMesh::Edge_t>::FindStream(const char* pStreamName)
{
} /* size: 0 */

// <06072C3C> ../public/meshutils/modelmeshdelta.h:484
void CModelMeshDelta<CModelMesh::Face_t>::FindStream(const char* pStreamName)
{
} /* size: 0 */

// <06075587> ../public/meshutils/modelmeshdelta.h:493
void CModelMeshDelta<CModelMesh::Vertex_t>::GetStreamName(StreamIndex_t nStream)
{
} /* size: 0 */

// <060747F1> ../public/meshutils/modelmeshdelta.h:493
void CModelMeshDelta<CModelMesh::FaceVertex_t>::GetStreamName(StreamIndex_t nStream)
{
} /* size: 0 */

// <06073A1E> ../public/meshutils/modelmeshdelta.h:493
void CModelMeshDelta<CModelMesh::Edge_t>::GetStreamName(StreamIndex_t nStream)
{
} /* size: 0 */

// <06072C88> ../public/meshutils/modelmeshdelta.h:493
void CModelMeshDelta<CModelMesh::Face_t>::GetStreamName(StreamIndex_t nStream)
{
} /* size: 0 */

// <06075561> ../public/meshutils/modelmeshdelta.h:502
void CModelMeshDelta<CModelMesh::Vertex_t>::GetStreamType(StreamIndex_t nStream)
{
} /* size: 0 */

// <060747CB> ../public/meshutils/modelmeshdelta.h:502
void CModelMeshDelta<CModelMesh::FaceVertex_t>::GetStreamType(StreamIndex_t nStream)
{
} /* size: 0 */

// <060739F8> ../public/meshutils/modelmeshdelta.h:502
void CModelMeshDelta<CModelMesh::Edge_t>::GetStreamType(StreamIndex_t nStream)
{
} /* size: 0 */

// <06072C62> ../public/meshutils/modelmeshdelta.h:502
void CModelMeshDelta<CModelMesh::Face_t>::GetStreamType(StreamIndex_t nStream)
{
} /* size: 0 */

// <06075F0D> ../public/meshutils/modelmeshdelta.h:511
void CModelMeshDelta<CModelMesh::Vertex_t>::CanAppendStreamSetFromDelta(const CModelMeshDelta<CModelMesh::Vertex_t>& otherDelta)
{
} /* size: 0 */

// <06075177> ../public/meshutils/modelmeshdelta.h:511
void CModelMeshDelta<CModelMesh::FaceVertex_t>::CanAppendStreamSetFromDelta(const CModelMeshDelta<CModelMesh::FaceVertex_t>& otherDelta)
{
} /* size: 0 */

// <060743E1> ../public/meshutils/modelmeshdelta.h:511
void CModelMeshDelta<CModelMesh::Edge_t>::CanAppendStreamSetFromDelta(const CModelMeshDelta<CModelMesh::Edge_t>& otherDelta)
{
} /* size: 0 */

// <0607360E> ../public/meshutils/modelmeshdelta.h:511
void CModelMeshDelta<CModelMesh::Face_t>::CanAppendStreamSetFromDelta(const CModelMeshDelta<CModelMesh::Face_t>& otherDelta)
{
} /* size: 0 */

// <060EFB1F> ../public/meshutils/modelmeshdelta.h:520
// variables: 15
// function calls: 94
void CModelMeshDelta<CModelMesh::Edge_t>::AppendStreamsSetFromDelta(const CModelMeshDelta<CModelMesh::Edge_t>* pSrcDelta, CHandleTranslator* pHandleTranslator)
{
	bool bSuccess; // 522
	const int  nNumStreams; // 524
	CModelMeshDelta<CModelMesh::Edge_t>::GetNumStreams(); // 524
	{
		int iStream; // 525
		{
			StreamIndex_t nSrcStream; // 527
			const char* pStreamName; // 528
			const ModelStreamType_t  nStreamType; // 529
			StreamIndex_t nDstStream; // 531
			const int  nNumSrcValues; // 552
			CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int> > srcComponents; // 553
			CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int> > dstComponents; // 554
			CModelMeshDelta<CModelMesh::Edge_t>::GetStreamType(
					StreamIndex_t nStream);  // 535
			CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>::CUtlTypesafeInt(
					int nVal);  // 527
			CModelMeshDelta<CModelMesh::Edge_t>::GetStreamName(
					StreamIndex_t nStream);  // 528
			CModelMeshDelta<CModelMesh::Edge_t>::GetStreamType(
					StreamIndex_t nStream);  // 529
			CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>::CUtlTypesafeInt(
					int nVal);  // 486
			CModelMeshDelta<CModelMesh::Edge_t>::FindStream(
					const char* pStreamName);  // 531
			CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>::CUtlTypesafeInt(
					int nVal);  // 35
			InvalidStreamIndex(void); // 532
			CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>::CUtlTypesafeInt(
					int nVal);  // 468
			CModelMeshDelta<CModelMesh::Edge_t>::AddStream(
					const char* pStreamName,
					ModelStreamType_t nStreamType);  // 543
			CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>::CUtlTypesafeInt(
					int nVal);  // 35
			InvalidStreamIndex(void); // 546
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 196
			{
			}
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 198
			CModelMeshDelta<CModelMesh::Edge_t>::GetNumValues(); // 552
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 530
			CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
					int growSize,
					int initCapacity);  // 418
			CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 553
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 530
			CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
					int growSize,
					int initCapacity);  // 418
			CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 554
			{
				int iValue; // 557
				{
					ComponentHandle_t hSrcComponent; // 559
					Invalid(void); // 235
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 234
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 595
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
							int i);  // 238
					ComponentHandleWithListPointer_t::FromInt(
						uint32 nBits,
						const CHalfEdgeComponentList<CModelMesh::Edge_t>* pList);  // 242
					CModelMeshDelta<CModelMesh::Edge_t>::GetComponentHandleForValue(
									int nValueIndex);  // 232
					CModelMeshDelta<CModelMesh::Edge_t>::GetComponentHandleForValue(
									int nValueIndex);  // 559
					ComponentHandleWithListPointer_t::operator=(
							InvalidMeshComponent_t);  // 342
					ComponentHandleWithListPointer_t::operator!=(
							InvalidMeshComponent_t);  // 344
					{
						const int  nSrcIndex; // 346
						const int  nDstIndex; // 347
						Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 541
						CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::operator[](
								int i);  // 595
						operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
								int i);  // 546
						ComponentHandleWithListPointer_t::operator!=(
								const ComponentHandleWithListPointer_t& src);  // 547
						CHalfEdgeComponentList<CModelMesh::Edge_t>::GetComponentIndex(
									ComponentHandle_t handle);  // 346
						CUtlMemory<int, int>::operator[](
								int i);  // 595
						CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
								int i);  // 347
						Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 489
						CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::operator[](
								int i);  // 595
						operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
								int i);  // 492
						CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::operator[](
								int i);  // 595
						operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
								int i);  // 492
						ComponentHandleWithListPointer_t::operator!=(
								InvalidMeshComponent_t);  // 495
						{
						}
						CHalfEdgeComponentList<CModelMesh::Edge_t>::GetComponentHandle(
									int nIndex);  // 487
						CHalfEdgeComponentList<CModelMesh::Edge_t>::InvalidHandle(); // 490
						CHalfEdgeComponentList<CModelMesh::Edge_t>::GetComponentHandle(
									int nIndex);  // 350
					}
					CHandleTranslator::TranslateHandle(
							ComponentHandle_t hSrcComponent);  // 561
				}
			}
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
					int num);  // 784
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowVector(
					int num);  // 1445
			CUtlVectorBase<int, CUtlMemory<int, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<int, CUtlMemory<int, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<int, CUtlMemory<int, int> >::AddMultipleToTail(
						int num);  // 413
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 412
			{
				int i; // 418
				ComponentHandleWithListPointer_t::AsInt(); // 253
				Mix32HashFunctor::operator(
						uint32 n);  // 218
				Find(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
					KeyArg_t k);  // 253
				CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
						int i);  // 296
				operator[](const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
						handle_t idx);  // 257
				CModelMeshDelta<CModelMesh::Edge_t>::GetValueIndexForComponent(
								ComponentHandle_t hComponent);  // 419
				CModelStreamAccessor::CopyValueFromStream(
							int nDstIndex,
							const CModelStreamReader& srcStream,
							int nSrcIndex);  // 419
			}
			CUtlMemory<int, int>::Purge(); // 903
			CUtlMemory<int, int>::Purge(); // 1799
			CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
			ValidateAlignment<int>(void); // 508
			CUtlMemory<int, int>::Purge(); // 510
			CUtlMemory<int, int>::~CUtlMemory(); // 562
			CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
			CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 420
			CModelMeshDelta<CModelMesh::Edge_t>::CopyComponentDataValueFromOtherDelta(
								StreamIndex_t nDstStreamIndex,
								ComponentHandle_t* pDstComponents,
								const CModelMeshDelta<CModelMesh::Edge_t>* pSrcDelta,
								StreamIndex_t nSrcStreamIndex,
								ComponentHandle_t* pSrcComponents,
								int nComponents);  // 563
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
			Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 560
			ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>(void); // 508
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
			~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 410
			~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 525
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
			Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 560
			ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>(void); // 508
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
			~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 410
			~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 525
		}
	}
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <060EE46C> ../public/meshutils/modelmeshdelta.h:520
// variables: 15
// function calls: 94
void CModelMeshDelta<CModelMesh::FaceVertex_t>::AppendStreamsSetFromDelta(const CModelMeshDelta<CModelMesh::FaceVertex_t>* pSrcDelta, CHandleTranslator* pHandleTranslator)
{
	bool bSuccess; // 522
	const int  nNumStreams; // 524
	CModelMeshDelta<CModelMesh::FaceVertex_t>::GetNumStreams(); // 524
	{
		int iStream; // 525
		{
			StreamIndex_t nSrcStream; // 527
			const char* pStreamName; // 528
			const ModelStreamType_t  nStreamType; // 529
			StreamIndex_t nDstStream; // 531
			const int  nNumSrcValues; // 552
			CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > srcComponents; // 553
			CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > dstComponents; // 554
			CModelMeshDelta<CModelMesh::FaceVertex_t>::GetStreamType(
					StreamIndex_t nStream);  // 535
			CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>::CUtlTypesafeInt(
					int nVal);  // 527
			CModelMeshDelta<CModelMesh::FaceVertex_t>::GetStreamName(
					StreamIndex_t nStream);  // 528
			CModelMeshDelta<CModelMesh::FaceVertex_t>::GetStreamType(
					StreamIndex_t nStream);  // 529
			CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>::CUtlTypesafeInt(
					int nVal);  // 486
			CModelMeshDelta<CModelMesh::FaceVertex_t>::FindStream(
					const char* pStreamName);  // 531
			CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>::CUtlTypesafeInt(
					int nVal);  // 35
			InvalidStreamIndex(void); // 532
			CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>::CUtlTypesafeInt(
					int nVal);  // 468
			CModelMeshDelta<CModelMesh::FaceVertex_t>::AddStream(
					const char* pStreamName,
					ModelStreamType_t nStreamType);  // 543
			CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>::CUtlTypesafeInt(
					int nVal);  // 35
			InvalidStreamIndex(void); // 546
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 196
			{
			}
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 198
			CModelMeshDelta<CModelMesh::FaceVertex_t>::GetNumValues(); // 552
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
			CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
					int growSize,
					int initCapacity);  // 418
			CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 553
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
			CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
					int growSize,
					int initCapacity);  // 418
			CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 554
			{
				int iValue; // 557
				{
					ComponentHandle_t hSrcComponent; // 559
					Invalid(void); // 235
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 234
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 595
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
							int i);  // 238
					ComponentHandleWithListPointer_t::FromInt(
						uint32 nBits,
						const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* pList);  // 242
					CModelMeshDelta<CModelMesh::FaceVertex_t>::GetComponentHandleForValue(
									int nValueIndex);  // 232
					CModelMeshDelta<CModelMesh::FaceVertex_t>::GetComponentHandleForValue(
									int nValueIndex);  // 559
					ComponentHandleWithListPointer_t::operator=(
							InvalidMeshComponent_t);  // 342
					ComponentHandleWithListPointer_t::operator!=(
							InvalidMeshComponent_t);  // 344
					{
						const int  nSrcIndex; // 346
						const int  nDstIndex; // 347
						Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 541
						CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
								int i);  // 595
						operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
								int i);  // 546
						ComponentHandleWithListPointer_t::operator!=(
								const ComponentHandleWithListPointer_t& src);  // 547
						CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
									ComponentHandle_t handle);  // 346
						CUtlMemory<int, int>::operator[](
								int i);  // 595
						CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
								int i);  // 347
						Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeCompon this); // 489
						CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::operator[](
								int i);  // 595
						operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeCompon this,
								int i);  // 492
						CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
								int i);  // 595
						operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
								int i);  // 492
						ComponentHandleWithListPointer_t::operator!=(
								InvalidMeshComponent_t);  // 495
						{
						}
						CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentHandle(
									int nIndex);  // 487
						CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::InvalidHandle(); // 490
						CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentHandle(
									int nIndex);  // 350
					}
					CHandleTranslator::TranslateHandle(
							ComponentHandle_t hSrcComponent);  // 561
				}
			}
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
					int num);  // 784
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowVector(
					int num);  // 1445
			CUtlVectorBase<int, CUtlMemory<int, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<int, CUtlMemory<int, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<int, CUtlMemory<int, int> >::AddMultipleToTail(
						int num);  // 413
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 412
			{
				int i; // 418
				ComponentHandleWithListPointer_t::AsInt(); // 253
				Mix32HashFunctor::operator(
						uint32 n);  // 218
				Find(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
					KeyArg_t k);  // 253
				CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
						int i);  // 296
				operator[](const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
						handle_t idx);  // 257
				CModelMeshDelta<CModelMesh::FaceVertex_t>::GetValueIndexForComponent(
								ComponentHandle_t hComponent);  // 419
				CModelStreamAccessor::CopyValueFromStream(
							int nDstIndex,
							const CModelStreamReader& srcStream,
							int nSrcIndex);  // 419
			}
			CUtlMemory<int, int>::Purge(); // 903
			CUtlMemory<int, int>::Purge(); // 1799
			CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
			ValidateAlignment<int>(void); // 508
			CUtlMemory<int, int>::Purge(); // 510
			CUtlMemory<int, int>::~CUtlMemory(); // 562
			CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
			CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 420
			CModelMeshDelta<CModelMesh::FaceVertex_t>::CopyComponentDataValueFromOtherDelta(
								StreamIndex_t nDstStreamIndex,
								ComponentHandle_t* pDstComponents,
								const CModelMeshDelta<CModelMesh::FaceVertex_t>* pSrcDelta,
								StreamIndex_t nSrcStreamIndex,
								ComponentHandle_t* pSrcComponents,
								int nComponents);  // 563
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
			Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 560
			ValidateAlignment<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(void); // 508
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
			~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 410
			~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 525
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
			Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 560
			ValidateAlignment<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(void); // 508
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
			~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 410
			~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 525
		}
	}
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <060ECDB9> ../public/meshutils/modelmeshdelta.h:520
// variables: 15
// function calls: 94
void CModelMeshDelta<CModelMesh::Vertex_t>::AppendStreamsSetFromDelta(const CModelMeshDelta<CModelMesh::Vertex_t>* pSrcDelta, CHandleTranslator* pHandleTranslator)
{
	bool bSuccess; // 522
	const int  nNumStreams; // 524
	CModelMeshDelta<CModelMesh::Vertex_t>::GetNumStreams(); // 524
	{
		int iStream; // 525
		{
			StreamIndex_t nSrcStream; // 527
			const char* pStreamName; // 528
			const ModelStreamType_t  nStreamType; // 529
			StreamIndex_t nDstStream; // 531
			const int  nNumSrcValues; // 552
			CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > srcComponents; // 553
			CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > dstComponents; // 554
			CModelMeshDelta<CModelMesh::Vertex_t>::GetStreamType(
					StreamIndex_t nStream);  // 535
			CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>::CUtlTypesafeInt(
					int nVal);  // 527
			CModelMeshDelta<CModelMesh::Vertex_t>::GetStreamName(
					StreamIndex_t nStream);  // 528
			CModelMeshDelta<CModelMesh::Vertex_t>::GetStreamType(
					StreamIndex_t nStream);  // 529
			CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>::CUtlTypesafeInt(
					int nVal);  // 486
			CModelMeshDelta<CModelMesh::Vertex_t>::FindStream(
					const char* pStreamName);  // 531
			CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>::CUtlTypesafeInt(
					int nVal);  // 35
			InvalidStreamIndex(void); // 532
			CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>::CUtlTypesafeInt(
					int nVal);  // 468
			CModelMeshDelta<CModelMesh::Vertex_t>::AddStream(
					const char* pStreamName,
					ModelStreamType_t nStreamType);  // 543
			CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>::CUtlTypesafeInt(
					int nVal);  // 35
			InvalidStreamIndex(void); // 546
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 196
			{
			}
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 198
			CModelMeshDelta<CModelMesh::Vertex_t>::GetNumValues(); // 552
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 530
			CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
					int growSize,
					int initCapacity);  // 418
			CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 553
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 530
			CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
					int growSize,
					int initCapacity);  // 418
			CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 554
			{
				int iValue; // 557
				{
					ComponentHandle_t hSrcComponent; // 559
					Invalid(void); // 235
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 234
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 595
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
							int i);  // 238
					ComponentHandleWithListPointer_t::FromInt(
						uint32 nBits,
						const CHalfEdgeComponentList<CModelMesh::Vertex_t>* pList);  // 242
					CModelMeshDelta<CModelMesh::Vertex_t>::GetComponentHandleForValue(
									int nValueIndex);  // 232
					CModelMeshDelta<CModelMesh::Vertex_t>::GetComponentHandleForValue(
									int nValueIndex);  // 559
					ComponentHandleWithListPointer_t::operator=(
							InvalidMeshComponent_t);  // 342
					ComponentHandleWithListPointer_t::operator!=(
							InvalidMeshComponent_t);  // 344
					{
						const int  nSrcIndex; // 346
						const int  nDstIndex; // 347
						Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 541
						CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
								int i);  // 595
						operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
								int i);  // 546
						ComponentHandleWithListPointer_t::operator!=(
								const ComponentHandleWithListPointer_t& src);  // 547
						CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentIndex(
									ComponentHandle_t handle);  // 346
						CUtlMemory<int, int>::operator[](
								int i);  // 595
						CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
								int i);  // 347
						Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentL this); // 489
						CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::operator[](
								int i);  // 595
						operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentL this,
								int i);  // 492
						CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
								int i);  // 595
						operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
								int i);  // 492
						ComponentHandleWithListPointer_t::operator!=(
								InvalidMeshComponent_t);  // 495
						{
						}
						CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentHandle(
									int nIndex);  // 487
						CHalfEdgeComponentList<CModelMesh::Vertex_t>::InvalidHandle(); // 490
						CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentHandle(
									int nIndex);  // 350
					}
					CHandleTranslator::TranslateHandle(
							ComponentHandle_t hSrcComponent);  // 561
				}
			}
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
					int num);  // 784
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowVector(
					int num);  // 1445
			CUtlVectorBase<int, CUtlMemory<int, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<int, CUtlMemory<int, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<int, CUtlMemory<int, int> >::AddMultipleToTail(
						int num);  // 413
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 412
			{
				int i; // 418
				ComponentHandleWithListPointer_t::AsInt(); // 253
				Mix32HashFunctor::operator(
						uint32 n);  // 218
				Find(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
					KeyArg_t k);  // 253
				CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
						int i);  // 296
				operator[](const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
						handle_t idx);  // 257
				CModelMeshDelta<CModelMesh::Vertex_t>::GetValueIndexForComponent(
								ComponentHandle_t hComponent);  // 419
				CModelStreamAccessor::CopyValueFromStream(
							int nDstIndex,
							const CModelStreamReader& srcStream,
							int nSrcIndex);  // 419
			}
			CUtlMemory<int, int>::Purge(); // 903
			CUtlMemory<int, int>::Purge(); // 1799
			CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
			ValidateAlignment<int>(void); // 508
			CUtlMemory<int, int>::Purge(); // 510
			CUtlMemory<int, int>::~CUtlMemory(); // 562
			CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
			CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 420
			CModelMeshDelta<CModelMesh::Vertex_t>::CopyComponentDataValueFromOtherDelta(
								StreamIndex_t nDstStreamIndex,
								ComponentHandle_t* pDstComponents,
								const CModelMeshDelta<CModelMesh::Vertex_t>* pSrcDelta,
								StreamIndex_t nSrcStreamIndex,
								ComponentHandle_t* pSrcComponents,
								int nComponents);  // 563
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
			Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 560
			ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(void); // 508
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
			~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 410
			~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 525
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
			Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 560
			ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(void); // 508
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
			~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 410
			~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 525
		}
	}
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <060EB706> ../public/meshutils/modelmeshdelta.h:520
// variables: 15
// function calls: 94
void CModelMeshDelta<CModelMesh::Face_t>::AppendStreamsSetFromDelta(const CModelMeshDelta<CModelMesh::Face_t>* pSrcDelta, CHandleTranslator* pHandleTranslator)
{
	bool bSuccess; // 522
	const int  nNumStreams; // 524
	CModelMeshDelta<CModelMesh::Face_t>::GetNumStreams(); // 524
	{
		int iStream; // 525
		{
			StreamIndex_t nSrcStream; // 527
			const char* pStreamName; // 528
			const ModelStreamType_t  nStreamType; // 529
			StreamIndex_t nDstStream; // 531
			const int  nNumSrcValues; // 552
			CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > srcComponents; // 553
			CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > dstComponents; // 554
			CModelMeshDelta<CModelMesh::Face_t>::GetStreamType(
					StreamIndex_t nStream);  // 535
			CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>::CUtlTypesafeInt(
					int nVal);  // 527
			CModelMeshDelta<CModelMesh::Face_t>::GetStreamName(
					StreamIndex_t nStream);  // 528
			CModelMeshDelta<CModelMesh::Face_t>::GetStreamType(
					StreamIndex_t nStream);  // 529
			CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>::CUtlTypesafeInt(
					int nVal);  // 486
			CModelMeshDelta<CModelMesh::Face_t>::FindStream(
					const char* pStreamName);  // 531
			CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>::CUtlTypesafeInt(
					int nVal);  // 35
			InvalidStreamIndex(void); // 532
			CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>::CUtlTypesafeInt(
					int nVal);  // 468
			CModelMeshDelta<CModelMesh::Face_t>::AddStream(
					const char* pStreamName,
					ModelStreamType_t nStreamType);  // 543
			CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>::CUtlTypesafeInt(
					int nVal);  // 35
			InvalidStreamIndex(void); // 546
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 196
			{
			}
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 198
			CModelMeshDelta<CModelMesh::Face_t>::GetNumValues(); // 552
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 530
			CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
					int growSize,
					int initCapacity);  // 418
			CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 553
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 530
			CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
					int growSize,
					int initCapacity);  // 418
			CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 554
			{
				int iValue; // 557
				{
					ComponentHandle_t hSrcComponent; // 559
					Invalid(void); // 235
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 234
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 595
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
							int i);  // 238
					ComponentHandleWithListPointer_t::FromInt(
						uint32 nBits,
						const CHalfEdgeComponentList<CModelMesh::Face_t>* pList);  // 242
					CModelMeshDelta<CModelMesh::Face_t>::GetComponentHandleForValue(
									int nValueIndex);  // 232
					CModelMeshDelta<CModelMesh::Face_t>::GetComponentHandleForValue(
									int nValueIndex);  // 559
					ComponentHandleWithListPointer_t::operator=(
							InvalidMeshComponent_t);  // 342
					ComponentHandleWithListPointer_t::operator!=(
							InvalidMeshComponent_t);  // 344
					{
						const int  nSrcIndex; // 346
						const int  nDstIndex; // 347
						Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 541
						CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
								int i);  // 595
						operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
								int i);  // 546
						ComponentHandleWithListPointer_t::operator!=(
								const ComponentHandleWithListPointer_t& src);  // 547
						CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponentIndex(
									ComponentHandle_t handle);  // 346
						CUtlMemory<int, int>::operator[](
								int i);  // 595
						CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
								int i);  // 347
						Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 489
						CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::operator[](
								int i);  // 595
						operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
								int i);  // 492
						CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
								int i);  // 595
						operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
								int i);  // 492
						ComponentHandleWithListPointer_t::operator!=(
								InvalidMeshComponent_t);  // 495
						{
						}
						CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponentHandle(
									int nIndex);  // 487
						CHalfEdgeComponentList<CModelMesh::Face_t>::InvalidHandle(); // 490
						CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponentHandle(
									int nIndex);  // 350
					}
					CHandleTranslator::TranslateHandle(
							ComponentHandle_t hSrcComponent);  // 561
				}
			}
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
					int num);  // 784
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowVector(
					int num);  // 1445
			CUtlVectorBase<int, CUtlMemory<int, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<int, CUtlMemory<int, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<int, CUtlMemory<int, int> >::AddMultipleToTail(
						int num);  // 413
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 412
			{
				int i; // 418
				ComponentHandleWithListPointer_t::AsInt(); // 253
				Mix32HashFunctor::operator(
						uint32 n);  // 218
				Find(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
					KeyArg_t k);  // 253
				CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
						int i);  // 296
				operator[](const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
						handle_t idx);  // 257
				CModelMeshDelta<CModelMesh::Face_t>::GetValueIndexForComponent(
								ComponentHandle_t hComponent);  // 419
				CModelStreamAccessor::CopyValueFromStream(
							int nDstIndex,
							const CModelStreamReader& srcStream,
							int nSrcIndex);  // 419
			}
			CUtlMemory<int, int>::Purge(); // 903
			CUtlMemory<int, int>::Purge(); // 1799
			CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
			ValidateAlignment<int>(void); // 508
			CUtlMemory<int, int>::Purge(); // 510
			CUtlMemory<int, int>::~CUtlMemory(); // 562
			CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
			CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 420
			CModelMeshDelta<CModelMesh::Face_t>::CopyComponentDataValueFromOtherDelta(
								StreamIndex_t nDstStreamIndex,
								ComponentHandle_t* pDstComponents,
								const CModelMeshDelta<CModelMesh::Face_t>* pSrcDelta,
								StreamIndex_t nSrcStreamIndex,
								ComponentHandle_t* pSrcComponents,
								int nComponents);  // 563
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
			Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 560
			ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(void); // 508
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
			~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 410
			~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 525
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
			Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 560
			ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(void); // 508
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
			~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 410
			~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 525
		}
	}
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <0607DD9E> ../public/meshutils/modelmeshdelta.h:520
// variables: 12
void CModelMeshDelta<CModelMesh::Vertex_t>::AppendStreamsSetFromDelta(const CModelMeshDelta<CModelMesh::Vertex_t>* pSrcDelta, CHandleTranslator* pHandleTranslator)
{
	bool bSuccess; // 522
	const int  nNumStreams; // 524
	{
		int iStream; // 525
		{
			StreamIndex_t nSrcStream; // 527
			const char* pStreamName; // 528
			const ModelStreamType_t  nStreamType; // 529
			StreamIndex_t nDstStream; // 531
			const int  nNumSrcValues; // 552
			CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > srcComponents; // 553
			CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > dstComponents; // 554
			{
				int iValue; // 557
				{
					ComponentHandle_t hSrcComponent; // 559
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <0607CFFD> ../public/meshutils/modelmeshdelta.h:520
// variables: 12
void CModelMeshDelta<CModelMesh::FaceVertex_t>::AppendStreamsSetFromDelta(const CModelMeshDelta<CModelMesh::FaceVertex_t>* pSrcDelta, CHandleTranslator* pHandleTranslator)
{
	bool bSuccess; // 522
	const int  nNumStreams; // 524
	{
		int iStream; // 525
		{
			StreamIndex_t nSrcStream; // 527
			const char* pStreamName; // 528
			const ModelStreamType_t  nStreamType; // 529
			StreamIndex_t nDstStream; // 531
			const int  nNumSrcValues; // 552
			CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > srcComponents; // 553
			CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > dstComponents; // 554
			{
				int iValue; // 557
				{
					ComponentHandle_t hSrcComponent; // 559
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <0607C25A> ../public/meshutils/modelmeshdelta.h:520
// variables: 12
void CModelMeshDelta<CModelMesh::Edge_t>::AppendStreamsSetFromDelta(const CModelMeshDelta<CModelMesh::Edge_t>* pSrcDelta, CHandleTranslator* pHandleTranslator)
{
	bool bSuccess; // 522
	const int  nNumStreams; // 524
	{
		int iStream; // 525
		{
			StreamIndex_t nSrcStream; // 527
			const char* pStreamName; // 528
			const ModelStreamType_t  nStreamType; // 529
			StreamIndex_t nDstStream; // 531
			const int  nNumSrcValues; // 552
			CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int> > srcComponents; // 553
			CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int> > dstComponents; // 554
			{
				int iValue; // 557
				{
					ComponentHandle_t hSrcComponent; // 559
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <0607B4BB> ../public/meshutils/modelmeshdelta.h:520
// variables: 12
void CModelMeshDelta<CModelMesh::Face_t>::AppendStreamsSetFromDelta(const CModelMeshDelta<CModelMesh::Face_t>* pSrcDelta, CHandleTranslator* pHandleTranslator)
{
	bool bSuccess; // 522
	const int  nNumStreams; // 524
	{
		int iStream; // 525
		{
			StreamIndex_t nSrcStream; // 527
			const char* pStreamName; // 528
			const ModelStreamType_t  nStreamType; // 529
			StreamIndex_t nDstStream; // 531
			const int  nNumSrcValues; // 552
			CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > srcComponents; // 553
			CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > dstComponents; // 554
			{
				int iValue; // 557
				{
					ComponentHandle_t hSrcComponent; // 559
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <05F6BABE> ../public/meshutils/modelmeshdelta.h:573
// variables: 7
// function calls: 31
void CModelMeshDelta<CModelMesh::Face_t>::CheckIntegrity()
{
	const int  nNumValues; // 586
	{
		int iValue; // 587
		{
			ComponentHandle_t hComponent; // 589
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 238
			ComponentHandleWithListPointer_t::FromInt(
				uint32 nBits,
				const CHalfEdgeComponentList<CModelMesh::Face_t>* pList);  // 242
			CModelMeshDelta<CModelMesh::Face_t>::GetComponentHandleForValue(
							int nValueIndex);  // 232
			CModelMeshDelta<CModelMesh::Face_t>::GetComponentHandleForValue(
							int nValueIndex);  // 589
			Mix32HashFunctor::operator(
					uint32 n);  // 218
			Find(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
				KeyArg_t k);  // 253
			CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
					int i);  // 296
			operator[](const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
					handle_t idx);  // 257
			CModelMeshDelta<CModelMesh::Face_t>::GetValueIndexForComponent(
							ComponentHandle_t hComponent);  // 594
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 547
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 541
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
					int i);  // 546
			CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 476
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
					int i);  // 480
			CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponent(
					ComponentHandle_t handle);  // 590
		}
	}
	{
		UtlHashHandle_t hEntry; // 599
		{
			int nValueIndex; // 601
			CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
					int i);  // 296
			operator[](const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
					handle_t idx);  // 601
		}
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Count(); // 915
			CUtlHashtableEntry<unsigned int, int>::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this); // 599
		{
			int i; // 915
			CUtlHashtableEntry<unsigned int, int>::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
				handle_t start);  // 599
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 581
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 196
	{
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 198
	CModelMeshDelta<CModelMesh::Face_t>::GetNumValues(); // 586
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <05F6B23C> ../public/meshutils/modelmeshdelta.h:573
// variables: 7
// function calls: 31
void CModelMeshDelta<CModelMesh::Vertex_t>::CheckIntegrity()
{
	const int  nNumValues; // 586
	{
		int iValue; // 587
		{
			ComponentHandle_t hComponent; // 589
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 238
			ComponentHandleWithListPointer_t::FromInt(
				uint32 nBits,
				const CHalfEdgeComponentList<CModelMesh::Vertex_t>* pList);  // 242
			CModelMeshDelta<CModelMesh::Vertex_t>::GetComponentHandleForValue(
							int nValueIndex);  // 232
			CModelMeshDelta<CModelMesh::Vertex_t>::GetComponentHandleForValue(
							int nValueIndex);  // 589
			Mix32HashFunctor::operator(
					uint32 n);  // 218
			Find(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
				KeyArg_t k);  // 253
			CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
					int i);  // 296
			operator[](const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
					handle_t idx);  // 257
			CModelMeshDelta<CModelMesh::Vertex_t>::GetValueIndexForComponent(
							ComponentHandle_t hComponent);  // 594
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 547
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 541
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
					int i);  // 546
			CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 476
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentL this,
					int i);  // 480
			CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponent(
					ComponentHandle_t handle);  // 590
		}
	}
	{
		UtlHashHandle_t hEntry; // 599
		{
			int nValueIndex; // 601
			CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
					int i);  // 296
			operator[](const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
					handle_t idx);  // 601
		}
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Count(); // 915
			CUtlHashtableEntry<unsigned int, int>::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this); // 599
		{
			int i; // 915
			CUtlHashtableEntry<unsigned int, int>::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
				handle_t start);  // 599
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 581
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 196
	{
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 198
	CModelMeshDelta<CModelMesh::Vertex_t>::GetNumValues(); // 586
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <05F6A9BA> ../public/meshutils/modelmeshdelta.h:573
// variables: 7
// function calls: 31
void CModelMeshDelta<CModelMesh::Edge_t>::CheckIntegrity()
{
	const int  nNumValues; // 586
	{
		int iValue; // 587
		{
			ComponentHandle_t hComponent; // 589
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 238
			ComponentHandleWithListPointer_t::FromInt(
				uint32 nBits,
				const CHalfEdgeComponentList<CModelMesh::Edge_t>* pList);  // 242
			CModelMeshDelta<CModelMesh::Edge_t>::GetComponentHandleForValue(
							int nValueIndex);  // 232
			CModelMeshDelta<CModelMesh::Edge_t>::GetComponentHandleForValue(
							int nValueIndex);  // 589
			Mix32HashFunctor::operator(
					uint32 n);  // 218
			Find(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
				KeyArg_t k);  // 253
			CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
					int i);  // 296
			operator[](const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
					handle_t idx);  // 257
			CModelMeshDelta<CModelMesh::Edge_t>::GetValueIndexForComponent(
							ComponentHandle_t hComponent);  // 594
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 547
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 541
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
					int i);  // 546
			CHalfEdgeComponentList<CModelMesh::Edge_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 476
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
					int i);  // 480
			CHalfEdgeComponentList<CModelMesh::Edge_t>::GetComponent(
					ComponentHandle_t handle);  // 590
		}
	}
	{
		UtlHashHandle_t hEntry; // 599
		{
			int nValueIndex; // 601
			CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
					int i);  // 296
			operator[](const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
					handle_t idx);  // 601
		}
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Count(); // 915
			CUtlHashtableEntry<unsigned int, int>::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this); // 599
		{
			int i; // 915
			CUtlHashtableEntry<unsigned int, int>::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
				handle_t start);  // 599
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 581
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 196
	{
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 198
	CModelMeshDelta<CModelMesh::Edge_t>::GetNumValues(); // 586
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <05F6A138> ../public/meshutils/modelmeshdelta.h:573
// variables: 7
// function calls: 31
void CModelMeshDelta<CModelMesh::FaceVertex_t>::CheckIntegrity()
{
	const int  nNumValues; // 586
	{
		int iValue; // 587
		{
			ComponentHandle_t hComponent; // 589
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 238
			ComponentHandleWithListPointer_t::FromInt(
				uint32 nBits,
				const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* pList);  // 242
			CModelMeshDelta<CModelMesh::FaceVertex_t>::GetComponentHandleForValue(
							int nValueIndex);  // 232
			CModelMeshDelta<CModelMesh::FaceVertex_t>::GetComponentHandleForValue(
							int nValueIndex);  // 589
			Mix32HashFunctor::operator(
					uint32 n);  // 218
			Find(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
				KeyArg_t k);  // 253
			CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
					int i);  // 296
			operator[](const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
					handle_t idx);  // 257
			CModelMeshDelta<CModelMesh::FaceVertex_t>::GetValueIndexForComponent(
							ComponentHandle_t hComponent);  // 594
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 547
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 541
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
					int i);  // 546
			CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 476
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeCompon this,
					int i);  // 480
			CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponent(
					ComponentHandle_t handle);  // 590
		}
	}
	{
		UtlHashHandle_t hEntry; // 599
		{
			int nValueIndex; // 601
			CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
					int i);  // 296
			operator[](const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
					handle_t idx);  // 601
		}
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Count(); // 915
			CUtlHashtableEntry<unsigned int, int>::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this); // 599
		{
			int i; // 915
			CUtlHashtableEntry<unsigned int, int>::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefin this,
				handle_t start);  // 599
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 581
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 196
	{
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 198
	CModelMeshDelta<CModelMesh::FaceVertex_t>::GetNumValues(); // 586
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <0608A8AD> ../public/meshutils/modelmeshdelta.h:613
void CModelMeshDelta<CModelMesh::Vertex_t>::GetStreamsOfType(ModelStreamType_t nStreamType, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pOutStreams)
{
} /* size: 0 */

// <0608A83D> ../public/meshutils/modelmeshdelta.h:613
void CModelMeshDelta<CModelMesh::FaceVertex_t>::GetStreamsOfType(ModelStreamType_t nStreamType, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pOutStreams)
{
} /* size: 0 */

// <0608A7CD> ../public/meshutils/modelmeshdelta.h:613
void CModelMeshDelta<CModelMesh::Face_t>::GetStreamsOfType(ModelStreamType_t nStreamType, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pOutStreams)
{
} /* size: 0 */

// <05F65454> ../public/meshutils/modelmeshdelta.h:622
void CModelMeshDelta<CModelMesh::Vertex_t>::GetStreamSet()
{
} /* size: 0 */

// <05F6538A> ../public/meshutils/modelmeshdelta.h:622
void CModelMeshDelta<CModelMesh::FaceVertex_t>::GetStreamSet()
{
} /* size: 0 */

// <05F6528E> ../public/meshutils/modelmeshdelta.h:622
void CModelMeshDelta<CModelMesh::Edge_t>::GetStreamSet()
{
} /* size: 0 */

// <05F651C4> ../public/meshutils/modelmeshdelta.h:622
void CModelMeshDelta<CModelMesh::Face_t>::GetStreamSet()
{
} /* size: 0 */

