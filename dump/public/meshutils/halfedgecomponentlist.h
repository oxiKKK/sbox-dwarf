
//
// public/meshutils/halfedgecomponentlist.h
//
//	referenced by: libengine2.so
//
//	functions: 208
//	classes: 22
//

// <05F0215D> ../public/meshutils/halfedgecomponentlist.h:61
void CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::~CHalfEdgeComponentList()
{
} /* size: 0 */

// <05F02141> ../public/meshutils/halfedgecomponentlist.h:61
inline void CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::~CHalfEdgeComponentList()
{
} /* size: 0 */

// <05F020C2> ../public/meshutils/halfedgecomponentlist.h:61
void CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::~CHalfEdgeComponentList()
{
} /* size: 0 */

// <05F020A6> ../public/meshutils/halfedgecomponentlist.h:61
inline void CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::~CHalfEdgeComponentList()
{
} /* size: 0 */

// <05F02027> ../public/meshutils/halfedgecomponentlist.h:61
void CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>::~CHalfEdgeComponentList()
{
} /* size: 0 */

// <05F0200B> ../public/meshutils/halfedgecomponentlist.h:61
inline void CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>::~CHalfEdgeComponentList()
{
} /* size: 0 */

// <05E82296> ../public/meshutils/halfedgecomponentlist.h:61
void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::~CHalfEdgeComponentList()
{
} /* size: 0 */

// <05E8227A> ../public/meshutils/halfedgecomponentlist.h:61
inline void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::~CHalfEdgeComponentList()
{
} /* size: 0 */

// <05E821FB> ../public/meshutils/halfedgecomponentlist.h:61
void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::~CHalfEdgeComponentList()
{
} /* size: 0 */

// <05E821DF> ../public/meshutils/halfedgecomponentlist.h:61
inline void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::~CHalfEdgeComponentList()
{
} /* size: 0 */

// <05E82160> ../public/meshutils/halfedgecomponentlist.h:61
void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::~CHalfEdgeComponentList()
{
} /* size: 0 */

// <05E82144> ../public/meshutils/halfedgecomponentlist.h:61
inline void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::~CHalfEdgeComponentList()
{
} /* size: 0 */

// <05DFC858> ../public/meshutils/halfedgecomponentlist.h:61
void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::~CHalfEdgeComponentList()
{
} /* size: 0 */

// <05DFC83C> ../public/meshutils/halfedgecomponentlist.h:61
inline void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::~CHalfEdgeComponentList()
{
} /* size: 0 */

// <05DFC7BD> ../public/meshutils/halfedgecomponentlist.h:61
void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::~CHalfEdgeComponentList()
{
} /* size: 0 */

// <05DFC7A1> ../public/meshutils/halfedgecomponentlist.h:61
inline void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::~CHalfEdgeComponentList()
{
} /* size: 0 */

// <05DFC722> ../public/meshutils/halfedgecomponentlist.h:61
void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::~CHalfEdgeComponentList()
{
} /* size: 0 */

// <05DFC706> ../public/meshutils/halfedgecomponentlist.h:61
inline void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::~CHalfEdgeComponentList()
{
} /* size: 0 */

// <05C4E4B5> ../public/meshutils/halfedgecomponentlist.h:61
// member functions: 37
// member variables: 4
// static member variables: 3
// class size: 72
class CHalfEdgeComponentList<CModelMesh::Vertex_t> {
	struct ComponentEntry_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:270 */
	struct ComponentReference_t {
		ComponentIndex_t m_nComponentIndex; /* 0 4 */
		ComponentHandle_t m_Handle; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:64 */
	typedef int ComponentIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
private:
	static const ComponentIndex_t s_InvalidComponentIndex = 18446744073709551615; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:65 */
	typedef unsigned int ReferenceIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const ReferenceIndex_t s_InvalidReferenceIndex = 4194303; /* 0 0 */
	static const unsigned int s_nMaxComponents; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:382 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:396 */
	CHalfEdgeComponentList<CModelMesh::Vertex_t>& operator=(CHalfEdgeComponentList<CModelMesh::Vertex_t>* , const CHalfEdgeComponentList<CModelMesh::Vertex_t>& );
	/* ../public/meshutils/halfedgecomponentlist.h:413 */
	Vertex_t& operator[](CHalfEdgeComponentList<CModelMesh::Vertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:419 */
	const Vertex_t& operator[](const CHalfEdgeComponentList<CModelMesh::Vertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:190 */
	typedef struct ComponentHandleWithListPointer_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:85 */
	struct ComponentHandleWithListPointer_t {
		/* ../public/meshutils/halfedgecomponentlist.h:87 */
		bool operator==(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:92 */
		bool operator!=(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:97 */
		bool operator<(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:102 */
		bool operator>(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:107 */
		bool operator==(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:112 */
		bool operator!=(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:117 */
		ComponentHandleWithListPointer_t& operator=(ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:127 */
		ComponentHandleWithListPointer_t Invalid(void);
		/* ../public/meshutils/halfedgecomponentlist.h:137 */
		bool LessFunc(const ComponentHandleWithListPointer_t& , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:142 */
		uint32 AsInt(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:148 */
		void FromInt(ComponentHandleWithListPointer_t* , uint32, const CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
		/* ../public/meshutils/halfedgecomponentlist.h:158 */
		int GetBaseIndex(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:166 */
		const CHalfEdgeComponentList<CModelMesh::Vertex_t>* GetList(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:171 */
		void SetList(ComponentHandleWithListPointer_t* , const CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
		uint32 m_nIndex:22; /* 0: 0 4 */
		uint32 m_nVersion:10; /* 0:22 4 */
		const class CHalfEdgeComponentList<CModelMesh::Vertex_t> * m_pList; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:433 */
	ComponentHandle_t First(const CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:439 */
	ComponentHandle_t Next(const CHalfEdgeComponentList<CModelMesh::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:536 */
	ComponentIndex_t GetComponentIndex(const CHalfEdgeComponentList<CModelMesh::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:560 */
	void GetComponentIndices(const CHalfEdgeComponentList<CModelMesh::Vertex_t>* , int, const ComponentHandle_t* , ComponentIndex_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:464 */
	Vertex_t* GetComponent(CHalfEdgeComponentList<CModelMesh::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:474 */
	const Vertex_t* GetComponent(const CHalfEdgeComponentList<CModelMesh::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:487 */
	ComponentHandle_t GetComponentHandle(const CHalfEdgeComponentList<CModelMesh::Vertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:573 */
	int Count(const CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:583 */
	int MaxCount(void);
	/* ../public/meshutils/halfedgecomponentlist.h:593 */
	ComponentIndex_t InvalidIndex(void);
	/* ../public/meshutils/halfedgecomponentlist.h:603 */
	ComponentHandle_t InvalidHandle(const CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:620 */
	void EnsureCapacity(CHalfEdgeComponentList<CModelMesh::Vertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:633 */
	void SetCount(CHalfEdgeComponentList<CModelMesh::Vertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:668 */
	ComponentHandle_t AddComponent(CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:746 */
	void AddMultiple(CHalfEdgeComponentList<CModelMesh::Vertex_t>* , int, ComponentHandle_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:773 */
	void RemoveAll(CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:790 */
	void RemoveComponent(CHalfEdgeComponentList<CModelMesh::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:852 */
	bool CheckIntegrity(const CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:279 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CModelMesh::Vertex_t>* , const CHalfEdgeComponentList<CModelMesh::Vertex_t>& );
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int> > m_Components; /* 0 32 */
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int> > m_ReferenceTable; /* 32 32 */
	ReferenceIndex_t m_nFreeListHead; /* 64 4 */
	ReferenceIndex_t m_nFreeListTail; /* 68 4 */
	class CHandleTranslator {
	};
};

// <05C53C0F> ../public/meshutils/halfedgecomponentlist.h:61
// member functions: 37
// member variables: 4
// static member variables: 3
// class size: 72
class CHalfEdgeComponentList<CModelMesh::FaceVertex_t> {
	struct ComponentEntry_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	struct ComponentReference_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:64 */
	typedef int ComponentIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
private:
	static const ComponentIndex_t s_InvalidComponentIndex; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:65 */
	typedef unsigned int ReferenceIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const ReferenceIndex_t s_InvalidReferenceIndex; /* 0 0 */
	static const unsigned int s_nMaxComponents; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:382 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:396 */
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>& operator=(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>& );
	/* ../public/meshutils/halfedgecomponentlist.h:413 */
	FaceVertex_t& operator[](CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:419 */
	const FaceVertex_t& operator[](const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:190 */
	typedef struct ComponentHandleWithListPointer_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:85 */
	struct ComponentHandleWithListPointer_t {
		/* ../public/meshutils/halfedgecomponentlist.h:87 */
		bool operator==(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:92 */
		bool operator!=(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:97 */
		bool operator<(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:102 */
		bool operator>(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:107 */
		bool operator==(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:112 */
		bool operator!=(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:117 */
		ComponentHandleWithListPointer_t& operator=(ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:127 */
		ComponentHandleWithListPointer_t Invalid(void);
		/* ../public/meshutils/halfedgecomponentlist.h:137 */
		bool LessFunc(const ComponentHandleWithListPointer_t& , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:142 */
		uint32 AsInt(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:148 */
		void FromInt(ComponentHandleWithListPointer_t* , uint32, const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
		/* ../public/meshutils/halfedgecomponentlist.h:158 */
		int GetBaseIndex(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:166 */
		const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* GetList(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:171 */
		void SetList(ComponentHandleWithListPointer_t* , const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
		uint32 m_nIndex:22; /* 0: 0 4 */
		uint32 m_nVersion:10; /* 0:22 4 */
		const class CHalfEdgeComponentList<CModelMesh::FaceVertex_t> * m_pList; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:433 */
	ComponentHandle_t First(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:439 */
	ComponentHandle_t Next(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:536 */
	ComponentIndex_t GetComponentIndex(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:560 */
	void GetComponentIndices(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , int, const ComponentHandle_t* , ComponentIndex_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:464 */
	FaceVertex_t* GetComponent(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:474 */
	const FaceVertex_t* GetComponent(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:487 */
	ComponentHandle_t GetComponentHandle(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:573 */
	int Count(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:583 */
	int MaxCount(void);
	/* ../public/meshutils/halfedgecomponentlist.h:593 */
	ComponentIndex_t InvalidIndex(void);
	/* ../public/meshutils/halfedgecomponentlist.h:603 */
	ComponentHandle_t InvalidHandle(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:620 */
	void EnsureCapacity(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:633 */
	void SetCount(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:668 */
	ComponentHandle_t AddComponent(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:746 */
	void AddMultiple(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , int, ComponentHandle_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:773 */
	void RemoveAll(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:790 */
	void RemoveComponent(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:852 */
	bool CheckIntegrity(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:279 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>& );
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int> > m_Components; /* 0 32 */
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int> > m_ReferenceTable; /* 32 32 */
	ReferenceIndex_t m_nFreeListHead; /* 64 4 */
	ReferenceIndex_t m_nFreeListTail; /* 68 4 */
	class CHandleTranslator {
	};
};

// <05C591C0> ../public/meshutils/halfedgecomponentlist.h:61
// member functions: 37
// member variables: 4
// static member variables: 3
// class size: 72
class CHalfEdgeComponentList<CModelMesh::Edge_t> {
	struct ComponentEntry_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	struct ComponentReference_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:64 */
	typedef int ComponentIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
private:
	static const ComponentIndex_t s_InvalidComponentIndex; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:65 */
	typedef unsigned int ReferenceIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const ReferenceIndex_t s_InvalidReferenceIndex; /* 0 0 */
	static const unsigned int s_nMaxComponents; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:382 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:396 */
	CHalfEdgeComponentList<CModelMesh::Edge_t>& operator=(CHalfEdgeComponentList<CModelMesh::Edge_t>* , const CHalfEdgeComponentList<CModelMesh::Edge_t>& );
	/* ../public/meshutils/halfedgecomponentlist.h:413 */
	Edge_t& operator[](CHalfEdgeComponentList<CModelMesh::Edge_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:419 */
	const Edge_t& operator[](const CHalfEdgeComponentList<CModelMesh::Edge_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:190 */
	typedef struct ComponentHandleWithListPointer_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:85 */
	struct ComponentHandleWithListPointer_t {
		/* ../public/meshutils/halfedgecomponentlist.h:87 */
		bool operator==(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:92 */
		bool operator!=(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:97 */
		bool operator<(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:102 */
		bool operator>(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:107 */
		bool operator==(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:112 */
		bool operator!=(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:117 */
		ComponentHandleWithListPointer_t& operator=(ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:127 */
		ComponentHandleWithListPointer_t Invalid(void);
		/* ../public/meshutils/halfedgecomponentlist.h:137 */
		bool LessFunc(const ComponentHandleWithListPointer_t& , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:142 */
		uint32 AsInt(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:148 */
		void FromInt(ComponentHandleWithListPointer_t* , uint32, const CHalfEdgeComponentList<CModelMesh::Edge_t>* );
		/* ../public/meshutils/halfedgecomponentlist.h:158 */
		int GetBaseIndex(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:166 */
		const CHalfEdgeComponentList<CModelMesh::Edge_t>* GetList(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:171 */
		void SetList(ComponentHandleWithListPointer_t* , const CHalfEdgeComponentList<CModelMesh::Edge_t>* );
		uint32 m_nIndex:22; /* 0: 0 4 */
		uint32 m_nVersion:10; /* 0:22 4 */
		const class CHalfEdgeComponentList<CModelMesh::Edge_t> * m_pList; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:433 */
	ComponentHandle_t First(const CHalfEdgeComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:439 */
	ComponentHandle_t Next(const CHalfEdgeComponentList<CModelMesh::Edge_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:536 */
	ComponentIndex_t GetComponentIndex(const CHalfEdgeComponentList<CModelMesh::Edge_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:560 */
	void GetComponentIndices(const CHalfEdgeComponentList<CModelMesh::Edge_t>* , int, const ComponentHandle_t* , ComponentIndex_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:464 */
	Edge_t* GetComponent(CHalfEdgeComponentList<CModelMesh::Edge_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:474 */
	const Edge_t* GetComponent(const CHalfEdgeComponentList<CModelMesh::Edge_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:487 */
	ComponentHandle_t GetComponentHandle(const CHalfEdgeComponentList<CModelMesh::Edge_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:573 */
	int Count(const CHalfEdgeComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:583 */
	int MaxCount(void);
	/* ../public/meshutils/halfedgecomponentlist.h:593 */
	ComponentIndex_t InvalidIndex(void);
	/* ../public/meshutils/halfedgecomponentlist.h:603 */
	ComponentHandle_t InvalidHandle(const CHalfEdgeComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:620 */
	void EnsureCapacity(CHalfEdgeComponentList<CModelMesh::Edge_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:633 */
	void SetCount(CHalfEdgeComponentList<CModelMesh::Edge_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:668 */
	ComponentHandle_t AddComponent(CHalfEdgeComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:746 */
	void AddMultiple(CHalfEdgeComponentList<CModelMesh::Edge_t>* , int, ComponentHandle_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:773 */
	void RemoveAll(CHalfEdgeComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:790 */
	void RemoveComponent(CHalfEdgeComponentList<CModelMesh::Edge_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:852 */
	bool CheckIntegrity(const CHalfEdgeComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:279 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CModelMesh::Edge_t>* , const CHalfEdgeComponentList<CModelMesh::Edge_t>& );
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int> > m_Components; /* 0 32 */
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int> > m_ReferenceTable; /* 32 32 */
	ReferenceIndex_t m_nFreeListHead; /* 64 4 */
	ReferenceIndex_t m_nFreeListTail; /* 68 4 */
	class CHandleTranslator {
	};
};

// <05C5E771> ../public/meshutils/halfedgecomponentlist.h:61
// member functions: 37
// member variables: 4
// static member variables: 3
// class size: 72
class CHalfEdgeComponentList<CModelMesh::Face_t> {
	struct ComponentEntry_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	struct ComponentReference_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:64 */
	typedef int ComponentIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
private:
	static const ComponentIndex_t s_InvalidComponentIndex; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:65 */
	typedef unsigned int ReferenceIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const ReferenceIndex_t s_InvalidReferenceIndex; /* 0 0 */
	static const unsigned int s_nMaxComponents; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:382 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:396 */
	CHalfEdgeComponentList<CModelMesh::Face_t>& operator=(CHalfEdgeComponentList<CModelMesh::Face_t>* , const CHalfEdgeComponentList<CModelMesh::Face_t>& );
	/* ../public/meshutils/halfedgecomponentlist.h:413 */
	Face_t& operator[](CHalfEdgeComponentList<CModelMesh::Face_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:419 */
	const Face_t& operator[](const CHalfEdgeComponentList<CModelMesh::Face_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:190 */
	typedef struct ComponentHandleWithListPointer_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:85 */
	struct ComponentHandleWithListPointer_t {
		/* ../public/meshutils/halfedgecomponentlist.h:87 */
		bool operator==(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:92 */
		bool operator!=(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:97 */
		bool operator<(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:102 */
		bool operator>(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:107 */
		bool operator==(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:112 */
		bool operator!=(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:117 */
		ComponentHandleWithListPointer_t& operator=(ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:127 */
		ComponentHandleWithListPointer_t Invalid(void);
		/* ../public/meshutils/halfedgecomponentlist.h:137 */
		bool LessFunc(const ComponentHandleWithListPointer_t& , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:142 */
		uint32 AsInt(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:148 */
		void FromInt(ComponentHandleWithListPointer_t* , uint32, const CHalfEdgeComponentList<CModelMesh::Face_t>* );
		/* ../public/meshutils/halfedgecomponentlist.h:158 */
		int GetBaseIndex(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:166 */
		const CHalfEdgeComponentList<CModelMesh::Face_t>* GetList(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:171 */
		void SetList(ComponentHandleWithListPointer_t* , const CHalfEdgeComponentList<CModelMesh::Face_t>* );
		uint32 m_nIndex:22; /* 0: 0 4 */
		uint32 m_nVersion:10; /* 0:22 4 */
		const class CHalfEdgeComponentList<CModelMesh::Face_t> * m_pList; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:433 */
	ComponentHandle_t First(const CHalfEdgeComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:439 */
	ComponentHandle_t Next(const CHalfEdgeComponentList<CModelMesh::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:536 */
	ComponentIndex_t GetComponentIndex(const CHalfEdgeComponentList<CModelMesh::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:560 */
	void GetComponentIndices(const CHalfEdgeComponentList<CModelMesh::Face_t>* , int, const ComponentHandle_t* , ComponentIndex_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:464 */
	Face_t* GetComponent(CHalfEdgeComponentList<CModelMesh::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:474 */
	const Face_t* GetComponent(const CHalfEdgeComponentList<CModelMesh::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:487 */
	ComponentHandle_t GetComponentHandle(const CHalfEdgeComponentList<CModelMesh::Face_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:573 */
	int Count(const CHalfEdgeComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:583 */
	int MaxCount(void);
	/* ../public/meshutils/halfedgecomponentlist.h:593 */
	ComponentIndex_t InvalidIndex(void);
	/* ../public/meshutils/halfedgecomponentlist.h:603 */
	ComponentHandle_t InvalidHandle(const CHalfEdgeComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:620 */
	void EnsureCapacity(CHalfEdgeComponentList<CModelMesh::Face_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:633 */
	void SetCount(CHalfEdgeComponentList<CModelMesh::Face_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:668 */
	ComponentHandle_t AddComponent(CHalfEdgeComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:746 */
	void AddMultiple(CHalfEdgeComponentList<CModelMesh::Face_t>* , int, ComponentHandle_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:773 */
	void RemoveAll(CHalfEdgeComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:790 */
	void RemoveComponent(CHalfEdgeComponentList<CModelMesh::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:852 */
	bool CheckIntegrity(const CHalfEdgeComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:279 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CModelMesh::Face_t>* , const CHalfEdgeComponentList<CModelMesh::Face_t>& );
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int> > m_Components; /* 0 32 */
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int> > m_ReferenceTable; /* 32 32 */
	ReferenceIndex_t m_nFreeListHead; /* 64 4 */
	ReferenceIndex_t m_nFreeListTail; /* 68 4 */
	class CHandleTranslator {
	};
};

// <05D88D8B> ../public/meshutils/halfedgecomponentlist.h:61
// member functions: 110
// member variables: 4
// static member variables: 3
// class size: 72
class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> {
	/* ../public/meshutils/halfedgecomponentlist.h:264 */
	struct ComponentEntry_t {
		Vertex_t m_Component; /* 0 24 */
		ReferenceIndex_t m_ReferenceIndex; /* 24 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:270 */
	struct ComponentReference_t {
		ComponentIndex_t m_nComponentIndex; /* 0 4 */
		ComponentHandle_t m_Handle; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:64 */
	typedef int ComponentIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
private:
	static const ComponentIndex_t s_InvalidComponentIndex = 18446744073709551615; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:65 */
	typedef unsigned int ReferenceIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const ReferenceIndex_t s_InvalidReferenceIndex = 4194303; /* 0 0 */
	static const unsigned int s_nMaxComponents = 4194303; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:382 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:396 */
	CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>& operator=(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>* , const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>& );
	/* ../public/meshutils/halfedgecomponentlist.h:413 */
	Vertex_t& operator[](CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:419 */
	const Vertex_t& operator[](const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:190 */
	typedef struct ComponentHandleWithListPointer_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:85 */
	struct ComponentHandleWithListPointer_t {
		/* ../public/meshutils/halfedgecomponentlist.h:87 */
		bool operator==(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:92 */
		bool operator!=(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:97 */
		bool operator<(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:102 */
		bool operator>(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:107 */
		bool operator==(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:112 */
		bool operator!=(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:117 */
		ComponentHandleWithListPointer_t& operator=(ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:127 */
		ComponentHandleWithListPointer_t Invalid(void);
		/* ../public/meshutils/halfedgecomponentlist.h:137 */
		bool LessFunc(const ComponentHandleWithListPointer_t& , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:142 */
		uint32 AsInt(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:148 */
		void FromInt(ComponentHandleWithListPointer_t* , uint32, const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>* );
		/* ../public/meshutils/halfedgecomponentlist.h:158 */
		int GetBaseIndex(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:166 */
		const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>* GetList(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:171 */
		void SetList(ComponentHandleWithListPointer_t* , const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>* );
		uint32 m_nIndex:22; /* 0: 0 4 */
		uint32 m_nVersion:10; /* 0:22 4 */
		const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> * m_pList; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:433 */
	ComponentHandle_t First(const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:439 */
	ComponentHandle_t Next(const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:536 */
	ComponentIndex_t GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:560 */
	void GetComponentIndices(const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>* , int, const ComponentHandle_t* , ComponentIndex_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:464 */
	Vertex_t* GetComponent(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:474 */
	const Vertex_t* GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:487 */
	ComponentHandle_t GetComponentHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:573 */
	int Count(const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:583 */
	int MaxCount(void);
	/* ../public/meshutils/halfedgecomponentlist.h:593 */
	ComponentIndex_t InvalidIndex(void);
	/* ../public/meshutils/halfedgecomponentlist.h:603 */
	ComponentHandle_t InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:620 */
	void EnsureCapacity(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:633 */
	void SetCount(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:668 */
	ComponentHandle_t AddComponent(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:746 */
	void AddMultiple(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>* , int, ComponentHandle_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:773 */
	void RemoveAll(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:790 */
	void RemoveComponent(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:852 */
	bool CheckIntegrity(const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:279 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>* , const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>& );
	CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, int> > m_Components; /* 0 32 */
	CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, int> > m_ReferenceTable; /* 32 32 */
	ReferenceIndex_t m_nFreeListHead; /* 64 4 */
	ReferenceIndex_t m_nFreeListTail; /* 68 4 */
	void ~CHalfEdgeComponentList(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>* );
	void CHalfEdgeComponentList(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEEC4Ev */
	class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> & operator=(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *, const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  &); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEEaSERKS4_ */
	class HalfEdge_t & operator[](class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *, int); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEEixEi */
	const class HalfEdge_t  & operator[](const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  *, int); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEEixEi */
	ComponentHandle_t First(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE5FirstEv */
	ComponentHandle_t Next(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  *, ComponentHandle_t); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE4NextENS4_32ComponentHandleWithListPointer_tE */
	ComponentIndex_t GetComponentIndex(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  *, ComponentHandle_t); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE17GetComponentIndexENS4_32ComponentHandleWithListPointer_tE */
	void GetComponentIndices(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  *, int, const ComponentHandle_t  *, ComponentIndex_t *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE19GetComponentIndicesEiPKNS4_32ComponentHandleWithListPointer_tEPi */
	/* <5e01baa> ../public/meshutils/halfedgecomponentlist.h:464 */
	class HalfEdge_t * GetComponent(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *, ComponentHandle_t); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE12GetComponentENS4_32ComponentHandleWithListPointer_tE */
	/* <5e00c03> ../public/meshutils/halfedgecomponentlist.h:474 */
	const class HalfEdge_t  * GetComponent(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  *, ComponentHandle_t); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE12GetComponentENS4_32ComponentHandleWithListPointer_tE */
	ComponentHandle_t GetComponentHandle(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  *, int); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE18GetComponentHandleEi */
	int Count(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE5CountEv */
	int MaxCount(void); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE8MaxCountEv */
	ComponentIndex_t InvalidIndex(void); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE12InvalidIndexEv */
	ComponentHandle_t InvalidHandle(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE13InvalidHandleEv */
	void EnsureCapacity(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *, int); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE14EnsureCapacityEi */
	void SetCount(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *, int); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE8SetCountEi */
	ComponentHandle_t AddComponent(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE12AddComponentEv */
	void AddMultiple(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *, int, ComponentHandle_t *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE11AddMultipleEiPNS4_32ComponentHandleWithListPointer_tE */
	void RemoveAll(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE9RemoveAllEv */
	void RemoveComponent(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *, ComponentHandle_t); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE15RemoveComponentENS4_32ComponentHandleWithListPointer_tE */
	bool CheckIntegrity(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE14CheckIntegrityEv */
	void CHalfEdgeComponentList(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *, const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  &); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEEC4ERKS4_ */
	void ~CHalfEdgeComponentList(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEED4Ev */
	void CHalfEdgeComponentList(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEEC4Ev */
	class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> & operator=(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *, const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  &); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEEaSERKS4_ */
	class Face_t & operator[](class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *, int); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEEixEi */
	const class Face_t  & operator[](const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  *, int); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEEixEi */
	ComponentHandle_t First(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE5FirstEv */
	ComponentHandle_t Next(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  *, ComponentHandle_t); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE4NextENS4_32ComponentHandleWithListPointer_tE */
	ComponentIndex_t GetComponentIndex(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  *, ComponentHandle_t); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE17GetComponentIndexENS4_32ComponentHandleWithListPointer_tE */
	void GetComponentIndices(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  *, int, const ComponentHandle_t  *, ComponentIndex_t *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE19GetComponentIndicesEiPKNS4_32ComponentHandleWithListPointer_tEPi */
	/* <5e01da3> ../public/meshutils/halfedgecomponentlist.h:464 */
	class Face_t * GetComponent(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *, ComponentHandle_t); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE12GetComponentENS4_32ComponentHandleWithListPointer_tE */
	const class Face_t  * GetComponent(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  *, ComponentHandle_t); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE12GetComponentENS4_32ComponentHandleWithListPointer_tE */
	ComponentHandle_t GetComponentHandle(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  *, int); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE18GetComponentHandleEi */
	int Count(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE5CountEv */
	int MaxCount(void); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE8MaxCountEv */
	ComponentIndex_t InvalidIndex(void); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE12InvalidIndexEv */
	ComponentHandle_t InvalidHandle(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE13InvalidHandleEv */
	void EnsureCapacity(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *, int); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE14EnsureCapacityEi */
	void SetCount(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *, int); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE8SetCountEi */
	ComponentHandle_t AddComponent(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE12AddComponentEv */
	void AddMultiple(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *, int, ComponentHandle_t *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE11AddMultipleEiPNS4_32ComponentHandleWithListPointer_tE */
	void RemoveAll(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE9RemoveAllEv */
	void RemoveComponent(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *, ComponentHandle_t); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE15RemoveComponentENS4_32ComponentHandleWithListPointer_tE */
	bool CheckIntegrity(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE14CheckIntegrityEv */
	void CHalfEdgeComponentList(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *, const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  &); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEEC4ERKS4_ */
	void ~CHalfEdgeComponentList(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEED4Ev */
	void CHalfEdgeComponentList(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEEC4Ev */
	class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> & operator=(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *, const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  &); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEEaSERKS4_ */
	class Vertex_t & operator[](class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *, int); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEEixEi */
	const class Vertex_t  & operator[](const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  *, int); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEEixEi */
	ComponentHandle_t First(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE5FirstEv */
	ComponentHandle_t Next(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  *, ComponentHandle_t); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE4NextENS4_32ComponentHandleWithListPointer_tE */
	ComponentIndex_t GetComponentIndex(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  *, ComponentHandle_t); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE17GetComponentIndexENS4_32ComponentHandleWithListPointer_tE */
	void GetComponentIndices(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  *, int, const ComponentHandle_t  *, ComponentIndex_t *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE19GetComponentIndicesEiPKNS4_32ComponentHandleWithListPointer_tEPi */
	/* <5e019b1> ../public/meshutils/halfedgecomponentlist.h:464 */
	class Vertex_t * GetComponent(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *, ComponentHandle_t); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE12GetComponentENS4_32ComponentHandleWithListPointer_tE */
	const class Vertex_t  * GetComponent(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  *, ComponentHandle_t); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE12GetComponentENS4_32ComponentHandleWithListPointer_tE */
	ComponentHandle_t GetComponentHandle(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  *, int); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE18GetComponentHandleEi */
	int Count(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE5CountEv */
	int MaxCount(void); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE8MaxCountEv */
	ComponentIndex_t InvalidIndex(void); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE12InvalidIndexEv */
	ComponentHandle_t InvalidHandle(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE13InvalidHandleEv */
	void EnsureCapacity(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *, int); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE14EnsureCapacityEi */
	void SetCount(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *, int); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE8SetCountEi */
	ComponentHandle_t AddComponent(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE12AddComponentEv */
	void AddMultiple(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *, int, ComponentHandle_t *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE11AddMultipleEiPNS4_32ComponentHandleWithListPointer_tE */
	void RemoveAll(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE9RemoveAllEv */
	void RemoveComponent(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *, ComponentHandle_t); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE15RemoveComponentENS4_32ComponentHandleWithListPointer_tE */
	bool CheckIntegrity(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE14CheckIntegrityEv */
	void CHalfEdgeComponentList(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *, const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  &); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEEC4ERKS4_ */
	void ~CHalfEdgeComponentList(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEED4Ev */
};

// <05D8C2C5> ../public/meshutils/halfedgecomponentlist.h:61
// member functions: 110
// member variables: 4
// static member variables: 3
// class size: 72
class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> {
	/* ../public/meshutils/halfedgecomponentlist.h:264 */
	struct ComponentEntry_t {
		HalfEdge_t m_Component; /* 0 72 */
		ReferenceIndex_t m_ReferenceIndex; /* 72 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:270 */
	struct ComponentReference_t {
		ComponentIndex_t m_nComponentIndex; /* 0 4 */
		ComponentHandle_t m_Handle; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:64 */
	typedef int ComponentIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
private:
	static const ComponentIndex_t s_InvalidComponentIndex = 18446744073709551615; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:65 */
	typedef unsigned int ReferenceIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const ReferenceIndex_t s_InvalidReferenceIndex = 4194303; /* 0 0 */
	static const unsigned int s_nMaxComponents = 4194303; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:382 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:396 */
	CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>& operator=(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>* , const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>& );
	/* ../public/meshutils/halfedgecomponentlist.h:413 */
	HalfEdge_t& operator[](CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:419 */
	const HalfEdge_t& operator[](const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:190 */
	typedef struct ComponentHandleWithListPointer_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:85 */
	struct ComponentHandleWithListPointer_t {
		/* ../public/meshutils/halfedgecomponentlist.h:87 */
		bool operator==(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:92 */
		bool operator!=(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:97 */
		bool operator<(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:102 */
		bool operator>(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:107 */
		bool operator==(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:112 */
		bool operator!=(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:117 */
		ComponentHandleWithListPointer_t& operator=(ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:127 */
		ComponentHandleWithListPointer_t Invalid(void);
		/* ../public/meshutils/halfedgecomponentlist.h:137 */
		bool LessFunc(const ComponentHandleWithListPointer_t& , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:142 */
		uint32 AsInt(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:148 */
		void FromInt(ComponentHandleWithListPointer_t* , uint32, const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>* );
		/* ../public/meshutils/halfedgecomponentlist.h:158 */
		int GetBaseIndex(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:166 */
		const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>* GetList(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:171 */
		void SetList(ComponentHandleWithListPointer_t* , const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>* );
		uint32 m_nIndex:22; /* 0: 0 4 */
		uint32 m_nVersion:10; /* 0:22 4 */
		const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> * m_pList; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:433 */
	ComponentHandle_t First(const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:439 */
	ComponentHandle_t Next(const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:536 */
	ComponentIndex_t GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:560 */
	void GetComponentIndices(const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>* , int, const ComponentHandle_t* , ComponentIndex_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:464 */
	HalfEdge_t* GetComponent(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:474 */
	const HalfEdge_t* GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:487 */
	ComponentHandle_t GetComponentHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:573 */
	int Count(const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:583 */
	int MaxCount(void);
	/* ../public/meshutils/halfedgecomponentlist.h:593 */
	ComponentIndex_t InvalidIndex(void);
	/* ../public/meshutils/halfedgecomponentlist.h:603 */
	ComponentHandle_t InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:620 */
	void EnsureCapacity(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:633 */
	void SetCount(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:668 */
	ComponentHandle_t AddComponent(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:746 */
	void AddMultiple(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>* , int, ComponentHandle_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:773 */
	void RemoveAll(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:790 */
	void RemoveComponent(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:852 */
	bool CheckIntegrity(const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:279 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>* , const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>& );
	CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, int> > m_Components; /* 0 32 */
	CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, int> > m_ReferenceTable; /* 32 32 */
	ReferenceIndex_t m_nFreeListHead; /* 64 4 */
	ReferenceIndex_t m_nFreeListTail; /* 68 4 */
	void ~CHalfEdgeComponentList(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>* );
	void CHalfEdgeComponentList(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEEC4Ev */
	class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> & operator=(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *, const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  &); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEEaSERKS4_ */
	class HalfEdge_t & operator[](class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *, int); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEEixEi */
	const class HalfEdge_t  & operator[](const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  *, int); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEEixEi */
	ComponentHandle_t First(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE5FirstEv */
	ComponentHandle_t Next(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  *, ComponentHandle_t); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE4NextENS4_32ComponentHandleWithListPointer_tE */
	ComponentIndex_t GetComponentIndex(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  *, ComponentHandle_t); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE17GetComponentIndexENS4_32ComponentHandleWithListPointer_tE */
	void GetComponentIndices(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  *, int, const ComponentHandle_t  *, ComponentIndex_t *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE19GetComponentIndicesEiPKNS4_32ComponentHandleWithListPointer_tEPi */
	/* <5e01baa> ../public/meshutils/halfedgecomponentlist.h:464 */
	class HalfEdge_t * GetComponent(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *, ComponentHandle_t); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE12GetComponentENS4_32ComponentHandleWithListPointer_tE */
	/* <5e00c03> ../public/meshutils/halfedgecomponentlist.h:474 */
	const class HalfEdge_t  * GetComponent(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  *, ComponentHandle_t); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE12GetComponentENS4_32ComponentHandleWithListPointer_tE */
	ComponentHandle_t GetComponentHandle(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  *, int); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE18GetComponentHandleEi */
	int Count(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE5CountEv */
	int MaxCount(void); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE8MaxCountEv */
	ComponentIndex_t InvalidIndex(void); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE12InvalidIndexEv */
	ComponentHandle_t InvalidHandle(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE13InvalidHandleEv */
	void EnsureCapacity(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *, int); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE14EnsureCapacityEi */
	void SetCount(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *, int); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE8SetCountEi */
	ComponentHandle_t AddComponent(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE12AddComponentEv */
	void AddMultiple(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *, int, ComponentHandle_t *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE11AddMultipleEiPNS4_32ComponentHandleWithListPointer_tE */
	void RemoveAll(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE9RemoveAllEv */
	void RemoveComponent(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *, ComponentHandle_t); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE15RemoveComponentENS4_32ComponentHandleWithListPointer_tE */
	bool CheckIntegrity(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE14CheckIntegrityEv */
	void CHalfEdgeComponentList(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *, const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  &); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEEC4ERKS4_ */
	void ~CHalfEdgeComponentList(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEED4Ev */
	void CHalfEdgeComponentList(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEEC4Ev */
	class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> & operator=(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *, const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  &); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEEaSERKS4_ */
	class Face_t & operator[](class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *, int); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEEixEi */
	const class Face_t  & operator[](const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  *, int); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEEixEi */
	ComponentHandle_t First(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE5FirstEv */
	ComponentHandle_t Next(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  *, ComponentHandle_t); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE4NextENS4_32ComponentHandleWithListPointer_tE */
	ComponentIndex_t GetComponentIndex(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  *, ComponentHandle_t); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE17GetComponentIndexENS4_32ComponentHandleWithListPointer_tE */
	void GetComponentIndices(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  *, int, const ComponentHandle_t  *, ComponentIndex_t *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE19GetComponentIndicesEiPKNS4_32ComponentHandleWithListPointer_tEPi */
	/* <5e01da3> ../public/meshutils/halfedgecomponentlist.h:464 */
	class Face_t * GetComponent(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *, ComponentHandle_t); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE12GetComponentENS4_32ComponentHandleWithListPointer_tE */
	const class Face_t  * GetComponent(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  *, ComponentHandle_t); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE12GetComponentENS4_32ComponentHandleWithListPointer_tE */
	ComponentHandle_t GetComponentHandle(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  *, int); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE18GetComponentHandleEi */
	int Count(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE5CountEv */
	int MaxCount(void); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE8MaxCountEv */
	ComponentIndex_t InvalidIndex(void); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE12InvalidIndexEv */
	ComponentHandle_t InvalidHandle(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE13InvalidHandleEv */
	void EnsureCapacity(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *, int); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE14EnsureCapacityEi */
	void SetCount(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *, int); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE8SetCountEi */
	ComponentHandle_t AddComponent(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE12AddComponentEv */
	void AddMultiple(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *, int, ComponentHandle_t *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE11AddMultipleEiPNS4_32ComponentHandleWithListPointer_tE */
	void RemoveAll(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE9RemoveAllEv */
	void RemoveComponent(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *, ComponentHandle_t); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE15RemoveComponentENS4_32ComponentHandleWithListPointer_tE */
	bool CheckIntegrity(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE14CheckIntegrityEv */
	void CHalfEdgeComponentList(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *, const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  &); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEEC4ERKS4_ */
	void ~CHalfEdgeComponentList(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEED4Ev */
	void CHalfEdgeComponentList(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEEC4Ev */
	class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> & operator=(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *, const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  &); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEEaSERKS4_ */
	class Vertex_t & operator[](class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *, int); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEEixEi */
	const class Vertex_t  & operator[](const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  *, int); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEEixEi */
	ComponentHandle_t First(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE5FirstEv */
	ComponentHandle_t Next(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  *, ComponentHandle_t); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE4NextENS4_32ComponentHandleWithListPointer_tE */
	ComponentIndex_t GetComponentIndex(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  *, ComponentHandle_t); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE17GetComponentIndexENS4_32ComponentHandleWithListPointer_tE */
	void GetComponentIndices(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  *, int, const ComponentHandle_t  *, ComponentIndex_t *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE19GetComponentIndicesEiPKNS4_32ComponentHandleWithListPointer_tEPi */
	/* <5e019b1> ../public/meshutils/halfedgecomponentlist.h:464 */
	class Vertex_t * GetComponent(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *, ComponentHandle_t); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE12GetComponentENS4_32ComponentHandleWithListPointer_tE */
	const class Vertex_t  * GetComponent(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  *, ComponentHandle_t); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE12GetComponentENS4_32ComponentHandleWithListPointer_tE */
	ComponentHandle_t GetComponentHandle(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  *, int); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE18GetComponentHandleEi */
	int Count(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE5CountEv */
	int MaxCount(void); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE8MaxCountEv */
	ComponentIndex_t InvalidIndex(void); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE12InvalidIndexEv */
	ComponentHandle_t InvalidHandle(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE13InvalidHandleEv */
	void EnsureCapacity(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *, int); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE14EnsureCapacityEi */
	void SetCount(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *, int); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE8SetCountEi */
	ComponentHandle_t AddComponent(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE12AddComponentEv */
	void AddMultiple(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *, int, ComponentHandle_t *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE11AddMultipleEiPNS4_32ComponentHandleWithListPointer_tE */
	void RemoveAll(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE9RemoveAllEv */
	void RemoveComponent(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *, ComponentHandle_t); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE15RemoveComponentENS4_32ComponentHandleWithListPointer_tE */
	bool CheckIntegrity(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE14CheckIntegrityEv */
	void CHalfEdgeComponentList(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *, const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  &); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEEC4ERKS4_ */
	void ~CHalfEdgeComponentList(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEED4Ev */
};

// <05D8F7FF> ../public/meshutils/halfedgecomponentlist.h:61
// member functions: 110
// member variables: 4
// static member variables: 3
// class size: 72
class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> {
	/* ../public/meshutils/halfedgecomponentlist.h:264 */
	struct ComponentEntry_t {
		Face_t m_Component; /* 0 24 */
		ReferenceIndex_t m_ReferenceIndex; /* 24 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:270 */
	struct ComponentReference_t {
		ComponentIndex_t m_nComponentIndex; /* 0 4 */
		ComponentHandle_t m_Handle; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:64 */
	typedef int ComponentIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
private:
	static const ComponentIndex_t s_InvalidComponentIndex = 18446744073709551615; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:65 */
	typedef unsigned int ReferenceIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const ReferenceIndex_t s_InvalidReferenceIndex = 4194303; /* 0 0 */
	static const unsigned int s_nMaxComponents = 4194303; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:382 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:396 */
	CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>& operator=(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>* , const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>& );
	/* ../public/meshutils/halfedgecomponentlist.h:413 */
	Face_t& operator[](CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:419 */
	const Face_t& operator[](const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:190 */
	typedef struct ComponentHandleWithListPointer_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:85 */
	struct ComponentHandleWithListPointer_t {
		/* ../public/meshutils/halfedgecomponentlist.h:87 */
		bool operator==(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:92 */
		bool operator!=(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:97 */
		bool operator<(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:102 */
		bool operator>(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:107 */
		bool operator==(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:112 */
		bool operator!=(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:117 */
		ComponentHandleWithListPointer_t& operator=(ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:127 */
		ComponentHandleWithListPointer_t Invalid(void);
		/* ../public/meshutils/halfedgecomponentlist.h:137 */
		bool LessFunc(const ComponentHandleWithListPointer_t& , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:142 */
		uint32 AsInt(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:148 */
		void FromInt(ComponentHandleWithListPointer_t* , uint32, const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>* );
		/* ../public/meshutils/halfedgecomponentlist.h:158 */
		int GetBaseIndex(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:166 */
		const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>* GetList(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:171 */
		void SetList(ComponentHandleWithListPointer_t* , const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>* );
		uint32 m_nIndex:22; /* 0: 0 4 */
		uint32 m_nVersion:10; /* 0:22 4 */
		const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> * m_pList; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:433 */
	ComponentHandle_t First(const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:439 */
	ComponentHandle_t Next(const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:536 */
	ComponentIndex_t GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:560 */
	void GetComponentIndices(const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>* , int, const ComponentHandle_t* , ComponentIndex_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:464 */
	Face_t* GetComponent(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:474 */
	const Face_t* GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:487 */
	ComponentHandle_t GetComponentHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:573 */
	int Count(const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:583 */
	int MaxCount(void);
	/* ../public/meshutils/halfedgecomponentlist.h:593 */
	ComponentIndex_t InvalidIndex(void);
	/* ../public/meshutils/halfedgecomponentlist.h:603 */
	ComponentHandle_t InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:620 */
	void EnsureCapacity(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:633 */
	void SetCount(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:668 */
	ComponentHandle_t AddComponent(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:746 */
	void AddMultiple(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>* , int, ComponentHandle_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:773 */
	void RemoveAll(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:790 */
	void RemoveComponent(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:852 */
	bool CheckIntegrity(const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:279 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>* , const CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>& );
	CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, int> > m_Components; /* 0 32 */
	CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, int> > m_ReferenceTable; /* 32 32 */
	ReferenceIndex_t m_nFreeListHead; /* 64 4 */
	ReferenceIndex_t m_nFreeListTail; /* 68 4 */
	void ~CHalfEdgeComponentList(CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>* );
	void CHalfEdgeComponentList(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEEC4Ev */
	class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> & operator=(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *, const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  &); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEEaSERKS4_ */
	class HalfEdge_t & operator[](class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *, int); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEEixEi */
	const class HalfEdge_t  & operator[](const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  *, int); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEEixEi */
	ComponentHandle_t First(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE5FirstEv */
	ComponentHandle_t Next(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  *, ComponentHandle_t); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE4NextENS4_32ComponentHandleWithListPointer_tE */
	ComponentIndex_t GetComponentIndex(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  *, ComponentHandle_t); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE17GetComponentIndexENS4_32ComponentHandleWithListPointer_tE */
	void GetComponentIndices(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  *, int, const ComponentHandle_t  *, ComponentIndex_t *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE19GetComponentIndicesEiPKNS4_32ComponentHandleWithListPointer_tEPi */
	/* <5e01baa> ../public/meshutils/halfedgecomponentlist.h:464 */
	class HalfEdge_t * GetComponent(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *, ComponentHandle_t); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE12GetComponentENS4_32ComponentHandleWithListPointer_tE */
	/* <5e00c03> ../public/meshutils/halfedgecomponentlist.h:474 */
	const class HalfEdge_t  * GetComponent(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  *, ComponentHandle_t); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE12GetComponentENS4_32ComponentHandleWithListPointer_tE */
	ComponentHandle_t GetComponentHandle(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  *, int); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE18GetComponentHandleEi */
	int Count(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE5CountEv */
	int MaxCount(void); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE8MaxCountEv */
	ComponentIndex_t InvalidIndex(void); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE12InvalidIndexEv */
	ComponentHandle_t InvalidHandle(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE13InvalidHandleEv */
	void EnsureCapacity(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *, int); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE14EnsureCapacityEi */
	void SetCount(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *, int); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE8SetCountEi */
	ComponentHandle_t AddComponent(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE12AddComponentEv */
	void AddMultiple(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *, int, ComponentHandle_t *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE11AddMultipleEiPNS4_32ComponentHandleWithListPointer_tE */
	void RemoveAll(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE9RemoveAllEv */
	void RemoveComponent(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *, ComponentHandle_t); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE15RemoveComponentENS4_32ComponentHandleWithListPointer_tE */
	bool CheckIntegrity(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEE14CheckIntegrityEv */
	void CHalfEdgeComponentList(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *, const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>  &); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEEC4ERKS4_ */
	void ~CHalfEdgeComponentList(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE10HalfEdge_tEED4Ev */
	void CHalfEdgeComponentList(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEEC4Ev */
	class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> & operator=(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *, const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  &); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEEaSERKS4_ */
	class Face_t & operator[](class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *, int); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEEixEi */
	const class Face_t  & operator[](const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  *, int); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEEixEi */
	ComponentHandle_t First(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE5FirstEv */
	ComponentHandle_t Next(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  *, ComponentHandle_t); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE4NextENS4_32ComponentHandleWithListPointer_tE */
	ComponentIndex_t GetComponentIndex(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  *, ComponentHandle_t); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE17GetComponentIndexENS4_32ComponentHandleWithListPointer_tE */
	void GetComponentIndices(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  *, int, const ComponentHandle_t  *, ComponentIndex_t *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE19GetComponentIndicesEiPKNS4_32ComponentHandleWithListPointer_tEPi */
	/* <5e01da3> ../public/meshutils/halfedgecomponentlist.h:464 */
	class Face_t * GetComponent(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *, ComponentHandle_t); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE12GetComponentENS4_32ComponentHandleWithListPointer_tE */
	const class Face_t  * GetComponent(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  *, ComponentHandle_t); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE12GetComponentENS4_32ComponentHandleWithListPointer_tE */
	ComponentHandle_t GetComponentHandle(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  *, int); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE18GetComponentHandleEi */
	int Count(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE5CountEv */
	int MaxCount(void); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE8MaxCountEv */
	ComponentIndex_t InvalidIndex(void); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE12InvalidIndexEv */
	ComponentHandle_t InvalidHandle(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE13InvalidHandleEv */
	void EnsureCapacity(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *, int); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE14EnsureCapacityEi */
	void SetCount(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *, int); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE8SetCountEi */
	ComponentHandle_t AddComponent(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE12AddComponentEv */
	void AddMultiple(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *, int, ComponentHandle_t *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE11AddMultipleEiPNS4_32ComponentHandleWithListPointer_tE */
	void RemoveAll(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE9RemoveAllEv */
	void RemoveComponent(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *, ComponentHandle_t); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE15RemoveComponentENS4_32ComponentHandleWithListPointer_tE */
	bool CheckIntegrity(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEE14CheckIntegrityEv */
	void CHalfEdgeComponentList(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *, const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>  &); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEEC4ERKS4_ */
	void ~CHalfEdgeComponentList(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE6Face_tEED4Ev */
	void CHalfEdgeComponentList(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEEC4Ev */
	class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> & operator=(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *, const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  &); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEEaSERKS4_ */
	class Vertex_t & operator[](class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *, int); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEEixEi */
	const class Vertex_t  & operator[](const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  *, int); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEEixEi */
	ComponentHandle_t First(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE5FirstEv */
	ComponentHandle_t Next(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  *, ComponentHandle_t); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE4NextENS4_32ComponentHandleWithListPointer_tE */
	ComponentIndex_t GetComponentIndex(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  *, ComponentHandle_t); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE17GetComponentIndexENS4_32ComponentHandleWithListPointer_tE */
	void GetComponentIndices(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  *, int, const ComponentHandle_t  *, ComponentIndex_t *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE19GetComponentIndicesEiPKNS4_32ComponentHandleWithListPointer_tEPi */
	/* <5e019b1> ../public/meshutils/halfedgecomponentlist.h:464 */
	class Vertex_t * GetComponent(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *, ComponentHandle_t); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE12GetComponentENS4_32ComponentHandleWithListPointer_tE */
	const class Vertex_t  * GetComponent(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  *, ComponentHandle_t); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE12GetComponentENS4_32ComponentHandleWithListPointer_tE */
	ComponentHandle_t GetComponentHandle(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  *, int); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE18GetComponentHandleEi */
	int Count(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE5CountEv */
	int MaxCount(void); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE8MaxCountEv */
	ComponentIndex_t InvalidIndex(void); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE12InvalidIndexEv */
	ComponentHandle_t InvalidHandle(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE13InvalidHandleEv */
	void EnsureCapacity(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *, int); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE14EnsureCapacityEi */
	void SetCount(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *, int); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE8SetCountEi */
	ComponentHandle_t AddComponent(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE12AddComponentEv */
	void AddMultiple(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *, int, ComponentHandle_t *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE11AddMultipleEiPNS4_32ComponentHandleWithListPointer_tE */
	void RemoveAll(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE9RemoveAllEv */
	void RemoveComponent(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *, ComponentHandle_t); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE15RemoveComponentENS4_32ComponentHandleWithListPointer_tE */
	bool CheckIntegrity(const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  *); /* linkage=_ZNK22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEE14CheckIntegrityEv */
	void CHalfEdgeComponentList(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *, const class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>  &); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEEC4ERKS4_ */
	void ~CHalfEdgeComponentList(class CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t> *); /* linkage=_ZN22CHalfEdgeComponentListIN13CHalfEdgeMeshIi14EdgeDataPair_tiE8Vertex_tEED4Ev */
};

// <05E24E54> ../public/meshutils/halfedgecomponentlist.h:61
// member functions: 40
// member variables: 4
// static member variables: 3
// class size: 72
class CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t> {
	/* ../public/meshutils/halfedgecomponentlist.h:264 */
	struct ComponentEntry_t {
		Vertex_t m_Component; /* 0 64 */
		ReferenceIndex_t m_ReferenceIndex; /* 64 4 */
		void ComponentEntry_t(ComponentEntry_t* );
		ComponentEntry_t& operator=(ComponentEntry_t* , const ComponentEntry_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:270 */
	struct ComponentReference_t {
		ComponentIndex_t m_nComponentIndex; /* 0 4 */
		ComponentHandle_t m_Handle; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:64 */
	typedef int ComponentIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
private:
	static const ComponentIndex_t s_InvalidComponentIndex = 18446744073709551615; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:65 */
	typedef unsigned int ReferenceIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const ReferenceIndex_t s_InvalidReferenceIndex = 4194303; /* 0 0 */
	static const unsigned int s_nMaxComponents = 4194303; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:382 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:396 */
	CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>& operator=(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>* , const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>& );
	/* ../public/meshutils/halfedgecomponentlist.h:413 */
	Vertex_t& operator[](CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:419 */
	const Vertex_t& operator[](const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:190 */
	typedef struct ComponentHandleWithListPointer_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:85 */
	struct ComponentHandleWithListPointer_t {
		/* ../public/meshutils/halfedgecomponentlist.h:87 */
		bool operator==(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:92 */
		bool operator!=(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:97 */
		bool operator<(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:102 */
		bool operator>(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:107 */
		bool operator==(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:112 */
		bool operator!=(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:117 */
		ComponentHandleWithListPointer_t& operator=(ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:127 */
		ComponentHandleWithListPointer_t Invalid(void);
		/* ../public/meshutils/halfedgecomponentlist.h:137 */
		bool LessFunc(const ComponentHandleWithListPointer_t& , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:142 */
		uint32 AsInt(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:148 */
		void FromInt(ComponentHandleWithListPointer_t* , uint32, const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>* );
		/* ../public/meshutils/halfedgecomponentlist.h:158 */
		int GetBaseIndex(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:166 */
		const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>* GetList(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:171 */
		void SetList(ComponentHandleWithListPointer_t* , const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>* );
		uint32 m_nIndex:22; /* 0: 0 4 */
		uint32 m_nVersion:10; /* 0:22 4 */
		const class CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t> * m_pList; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:433 */
	ComponentHandle_t First(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:439 */
	ComponentHandle_t Next(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:536 */
	ComponentIndex_t GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:560 */
	void GetComponentIndices(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>* , int, const ComponentHandle_t* , ComponentIndex_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:464 */
	Vertex_t* GetComponent(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:474 */
	const Vertex_t* GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:487 */
	ComponentHandle_t GetComponentHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:573 */
	int Count(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:583 */
	int MaxCount(void);
	/* ../public/meshutils/halfedgecomponentlist.h:593 */
	ComponentIndex_t InvalidIndex(void);
	/* ../public/meshutils/halfedgecomponentlist.h:603 */
	ComponentHandle_t InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:620 */
	void EnsureCapacity(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:633 */
	void SetCount(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:668 */
	ComponentHandle_t AddComponent(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:746 */
	void AddMultiple(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>* , int, ComponentHandle_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:773 */
	void RemoveAll(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:790 */
	void RemoveComponent(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:852 */
	bool CheckIntegrity(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:279 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>* , const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>& );
	CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentEntry_t, int> > m_Components; /* 0 32 */
	CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentReference_t, int> > m_ReferenceTable; /* 32 32 */
	ReferenceIndex_t m_nFreeListHead; /* 64 4 */
	ReferenceIndex_t m_nFreeListTail; /* 68 4 */
	void ~CHalfEdgeComponentList(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>* );
};

// <05E283CF> ../public/meshutils/halfedgecomponentlist.h:61
// member functions: 38
// member variables: 4
// static member variables: 3
// class size: 72
class CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t> {
	/* ../public/meshutils/halfedgecomponentlist.h:264 */
	struct ComponentEntry_t {
		HalfEdge_t m_Component; /* 0 72 */
		ReferenceIndex_t m_ReferenceIndex; /* 72 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:270 */
	struct ComponentReference_t {
		ComponentIndex_t m_nComponentIndex; /* 0 4 */
		ComponentHandle_t m_Handle; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:64 */
	typedef int ComponentIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
private:
	static const ComponentIndex_t s_InvalidComponentIndex = 18446744073709551615; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:65 */
	typedef unsigned int ReferenceIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const ReferenceIndex_t s_InvalidReferenceIndex = 4194303; /* 0 0 */
	static const unsigned int s_nMaxComponents = 4194303; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:382 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:396 */
	CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>& operator=(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>* , const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>& );
	/* ../public/meshutils/halfedgecomponentlist.h:413 */
	HalfEdge_t& operator[](CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:419 */
	const HalfEdge_t& operator[](const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:190 */
	typedef struct ComponentHandleWithListPointer_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:85 */
	struct ComponentHandleWithListPointer_t {
		/* ../public/meshutils/halfedgecomponentlist.h:87 */
		bool operator==(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:92 */
		bool operator!=(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:97 */
		bool operator<(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:102 */
		bool operator>(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:107 */
		bool operator==(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:112 */
		bool operator!=(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:117 */
		ComponentHandleWithListPointer_t& operator=(ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:127 */
		ComponentHandleWithListPointer_t Invalid(void);
		/* ../public/meshutils/halfedgecomponentlist.h:137 */
		bool LessFunc(const ComponentHandleWithListPointer_t& , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:142 */
		uint32 AsInt(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:148 */
		void FromInt(ComponentHandleWithListPointer_t* , uint32, const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>* );
		/* ../public/meshutils/halfedgecomponentlist.h:158 */
		int GetBaseIndex(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:166 */
		const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>* GetList(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:171 */
		void SetList(ComponentHandleWithListPointer_t* , const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>* );
		uint32 m_nIndex:22; /* 0: 0 4 */
		uint32 m_nVersion:10; /* 0:22 4 */
		const class CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t> * m_pList; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:433 */
	ComponentHandle_t First(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:439 */
	ComponentHandle_t Next(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:536 */
	ComponentIndex_t GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:560 */
	void GetComponentIndices(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>* , int, const ComponentHandle_t* , ComponentIndex_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:464 */
	HalfEdge_t* GetComponent(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:474 */
	const HalfEdge_t* GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:487 */
	ComponentHandle_t GetComponentHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:573 */
	int Count(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:583 */
	int MaxCount(void);
	/* ../public/meshutils/halfedgecomponentlist.h:593 */
	ComponentIndex_t InvalidIndex(void);
	/* ../public/meshutils/halfedgecomponentlist.h:603 */
	ComponentHandle_t InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:620 */
	void EnsureCapacity(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:633 */
	void SetCount(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:668 */
	ComponentHandle_t AddComponent(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:746 */
	void AddMultiple(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>* , int, ComponentHandle_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:773 */
	void RemoveAll(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:790 */
	void RemoveComponent(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:852 */
	bool CheckIntegrity(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:279 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>* , const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>& );
	CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::ComponentEntry_t, int> > m_Components; /* 0 32 */
	CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::ComponentReference_t, int> > m_ReferenceTable; /* 32 32 */
	ReferenceIndex_t m_nFreeListHead; /* 64 4 */
	ReferenceIndex_t m_nFreeListTail; /* 68 4 */
	void ~CHalfEdgeComponentList(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>* );
};

// <05E2B909> ../public/meshutils/halfedgecomponentlist.h:61
// member functions: 38
// member variables: 4
// static member variables: 3
// class size: 72
class CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t> {
	/* ../public/meshutils/halfedgecomponentlist.h:264 */
	struct ComponentEntry_t {
		Face_t m_Component; /* 0 24 */
		ReferenceIndex_t m_ReferenceIndex; /* 24 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:270 */
	struct ComponentReference_t {
		ComponentIndex_t m_nComponentIndex; /* 0 4 */
		ComponentHandle_t m_Handle; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:64 */
	typedef int ComponentIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
private:
	static const ComponentIndex_t s_InvalidComponentIndex = 18446744073709551615; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:65 */
	typedef unsigned int ReferenceIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const ReferenceIndex_t s_InvalidReferenceIndex = 4194303; /* 0 0 */
	static const unsigned int s_nMaxComponents = 4194303; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:382 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:396 */
	CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>& operator=(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>* , const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>& );
	/* ../public/meshutils/halfedgecomponentlist.h:413 */
	Face_t& operator[](CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:419 */
	const Face_t& operator[](const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:190 */
	typedef struct ComponentHandleWithListPointer_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:85 */
	struct ComponentHandleWithListPointer_t {
		/* ../public/meshutils/halfedgecomponentlist.h:87 */
		bool operator==(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:92 */
		bool operator!=(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:97 */
		bool operator<(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:102 */
		bool operator>(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:107 */
		bool operator==(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:112 */
		bool operator!=(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:117 */
		ComponentHandleWithListPointer_t& operator=(ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:127 */
		ComponentHandleWithListPointer_t Invalid(void);
		/* ../public/meshutils/halfedgecomponentlist.h:137 */
		bool LessFunc(const ComponentHandleWithListPointer_t& , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:142 */
		uint32 AsInt(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:148 */
		void FromInt(ComponentHandleWithListPointer_t* , uint32, const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>* );
		/* ../public/meshutils/halfedgecomponentlist.h:158 */
		int GetBaseIndex(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:166 */
		const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>* GetList(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:171 */
		void SetList(ComponentHandleWithListPointer_t* , const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>* );
		uint32 m_nIndex:22; /* 0: 0 4 */
		uint32 m_nVersion:10; /* 0:22 4 */
		const class CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t> * m_pList; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:433 */
	ComponentHandle_t First(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:439 */
	ComponentHandle_t Next(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:536 */
	ComponentIndex_t GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:560 */
	void GetComponentIndices(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>* , int, const ComponentHandle_t* , ComponentIndex_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:464 */
	Face_t* GetComponent(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:474 */
	const Face_t* GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:487 */
	ComponentHandle_t GetComponentHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:573 */
	int Count(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:583 */
	int MaxCount(void);
	/* ../public/meshutils/halfedgecomponentlist.h:593 */
	ComponentIndex_t InvalidIndex(void);
	/* ../public/meshutils/halfedgecomponentlist.h:603 */
	ComponentHandle_t InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:620 */
	void EnsureCapacity(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:633 */
	void SetCount(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:668 */
	ComponentHandle_t AddComponent(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:746 */
	void AddMultiple(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>* , int, ComponentHandle_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:773 */
	void RemoveAll(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:790 */
	void RemoveComponent(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:852 */
	bool CheckIntegrity(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:279 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>* , const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>& );
	CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::ComponentEntry_t, int> > m_Components; /* 0 32 */
	CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::ComponentReference_t, int> > m_ReferenceTable; /* 32 32 */
	ReferenceIndex_t m_nFreeListHead; /* 64 4 */
	ReferenceIndex_t m_nFreeListTail; /* 68 4 */
	void ~CHalfEdgeComponentList(CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>* );
};

// <05EB5ED2> ../public/meshutils/halfedgecomponentlist.h:61
// member functions: 38
// member variables: 4
// static member variables: 3
// class size: 72
class CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t> {
	/* ../public/meshutils/halfedgecomponentlist.h:264 */
	struct ComponentEntry_t {
		Vertex_t m_Component; /* 0 24 */
		ReferenceIndex_t m_ReferenceIndex; /* 24 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:270 */
	struct ComponentReference_t {
		ComponentIndex_t m_nComponentIndex; /* 0 4 */
		ComponentHandle_t m_Handle; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:64 */
	typedef int ComponentIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
private:
	static const ComponentIndex_t s_InvalidComponentIndex = 18446744073709551615; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:65 */
	typedef unsigned int ReferenceIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const ReferenceIndex_t s_InvalidReferenceIndex = 4194303; /* 0 0 */
	static const unsigned int s_nMaxComponents = 4194303; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:382 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:396 */
	CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>& operator=(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>* , const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>& );
	/* ../public/meshutils/halfedgecomponentlist.h:413 */
	Vertex_t& operator[](CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:419 */
	const Vertex_t& operator[](const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:190 */
	typedef struct ComponentHandleWithListPointer_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:85 */
	struct ComponentHandleWithListPointer_t {
		/* ../public/meshutils/halfedgecomponentlist.h:87 */
		bool operator==(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:92 */
		bool operator!=(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:97 */
		bool operator<(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:102 */
		bool operator>(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:107 */
		bool operator==(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:112 */
		bool operator!=(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:117 */
		ComponentHandleWithListPointer_t& operator=(ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:127 */
		ComponentHandleWithListPointer_t Invalid(void);
		/* ../public/meshutils/halfedgecomponentlist.h:137 */
		bool LessFunc(const ComponentHandleWithListPointer_t& , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:142 */
		uint32 AsInt(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:148 */
		void FromInt(ComponentHandleWithListPointer_t* , uint32, const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>* );
		/* ../public/meshutils/halfedgecomponentlist.h:158 */
		int GetBaseIndex(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:166 */
		const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>* GetList(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:171 */
		void SetList(ComponentHandleWithListPointer_t* , const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>* );
		uint32 m_nIndex:22; /* 0: 0 4 */
		uint32 m_nVersion:10; /* 0:22 4 */
		const class CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t> * m_pList; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:433 */
	ComponentHandle_t First(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:439 */
	ComponentHandle_t Next(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:536 */
	ComponentIndex_t GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:560 */
	void GetComponentIndices(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>* , int, const ComponentHandle_t* , ComponentIndex_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:464 */
	Vertex_t* GetComponent(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:474 */
	const Vertex_t* GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:487 */
	ComponentHandle_t GetComponentHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:573 */
	int Count(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:583 */
	int MaxCount(void);
	/* ../public/meshutils/halfedgecomponentlist.h:593 */
	ComponentIndex_t InvalidIndex(void);
	/* ../public/meshutils/halfedgecomponentlist.h:603 */
	ComponentHandle_t InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:620 */
	void EnsureCapacity(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:633 */
	void SetCount(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:668 */
	ComponentHandle_t AddComponent(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:746 */
	void AddMultiple(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>* , int, ComponentHandle_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:773 */
	void RemoveAll(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:790 */
	void RemoveComponent(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:852 */
	bool CheckIntegrity(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:279 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>* , const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>& );
	CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentEntry_t, int> > m_Components; /* 0 32 */
	CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentReference_t, int> > m_ReferenceTable; /* 32 32 */
	ReferenceIndex_t m_nFreeListHead; /* 64 4 */
	ReferenceIndex_t m_nFreeListTail; /* 68 4 */
	void ~CHalfEdgeComponentList(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>* );
};

// <05EB9411> ../public/meshutils/halfedgecomponentlist.h:61
// member functions: 40
// member variables: 4
// static member variables: 3
// class size: 72
class CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t> {
	/* ../public/meshutils/halfedgecomponentlist.h:264 */
	struct ComponentEntry_t {
		HalfEdge_t m_Component; /* 0 104 */
		ReferenceIndex_t m_ReferenceIndex; /* 104 4 */
		void ComponentEntry_t(ComponentEntry_t* );
		ComponentEntry_t& operator=(ComponentEntry_t* , const ComponentEntry_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:270 */
	struct ComponentReference_t {
		ComponentIndex_t m_nComponentIndex; /* 0 4 */
		ComponentHandle_t m_Handle; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:64 */
	typedef int ComponentIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
private:
	static const ComponentIndex_t s_InvalidComponentIndex = 18446744073709551615; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:65 */
	typedef unsigned int ReferenceIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const ReferenceIndex_t s_InvalidReferenceIndex = 4194303; /* 0 0 */
	static const unsigned int s_nMaxComponents = 4194303; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:382 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:396 */
	CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>& operator=(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>* , const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>& );
	/* ../public/meshutils/halfedgecomponentlist.h:413 */
	HalfEdge_t& operator[](CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:419 */
	const HalfEdge_t& operator[](const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:190 */
	typedef struct ComponentHandleWithListPointer_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:85 */
	struct ComponentHandleWithListPointer_t {
		/* ../public/meshutils/halfedgecomponentlist.h:87 */
		bool operator==(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:92 */
		bool operator!=(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:97 */
		bool operator<(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:102 */
		bool operator>(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:107 */
		bool operator==(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:112 */
		bool operator!=(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:117 */
		ComponentHandleWithListPointer_t& operator=(ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:127 */
		ComponentHandleWithListPointer_t Invalid(void);
		/* ../public/meshutils/halfedgecomponentlist.h:137 */
		bool LessFunc(const ComponentHandleWithListPointer_t& , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:142 */
		uint32 AsInt(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:148 */
		void FromInt(ComponentHandleWithListPointer_t* , uint32, const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>* );
		/* ../public/meshutils/halfedgecomponentlist.h:158 */
		int GetBaseIndex(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:166 */
		const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>* GetList(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:171 */
		void SetList(ComponentHandleWithListPointer_t* , const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>* );
		uint32 m_nIndex:22; /* 0: 0 4 */
		uint32 m_nVersion:10; /* 0:22 4 */
		const class CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t> * m_pList; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:433 */
	ComponentHandle_t First(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:439 */
	ComponentHandle_t Next(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:536 */
	ComponentIndex_t GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:560 */
	void GetComponentIndices(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>* , int, const ComponentHandle_t* , ComponentIndex_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:464 */
	HalfEdge_t* GetComponent(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:474 */
	const HalfEdge_t* GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:487 */
	ComponentHandle_t GetComponentHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:573 */
	int Count(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:583 */
	int MaxCount(void);
	/* ../public/meshutils/halfedgecomponentlist.h:593 */
	ComponentIndex_t InvalidIndex(void);
	/* ../public/meshutils/halfedgecomponentlist.h:603 */
	ComponentHandle_t InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:620 */
	void EnsureCapacity(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:633 */
	void SetCount(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:668 */
	ComponentHandle_t AddComponent(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:746 */
	void AddMultiple(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>* , int, ComponentHandle_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:773 */
	void RemoveAll(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:790 */
	void RemoveComponent(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:852 */
	bool CheckIntegrity(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:279 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>* , const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>& );
	CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::ComponentEntry_t, int> > m_Components; /* 0 32 */
	CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::ComponentReference_t, int> > m_ReferenceTable; /* 32 32 */
	ReferenceIndex_t m_nFreeListHead; /* 64 4 */
	ReferenceIndex_t m_nFreeListTail; /* 68 4 */
	void ~CHalfEdgeComponentList(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>* );
};

// <05EBC991> ../public/meshutils/halfedgecomponentlist.h:61
// member functions: 42
// member variables: 4
// static member variables: 3
// class size: 72
class CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t> {
	/* ../public/meshutils/halfedgecomponentlist.h:264 */
	struct ComponentEntry_t {
		Face_t m_Component; /* 0 120 */
		ReferenceIndex_t m_ReferenceIndex; /* 120 4 */
		void ComponentEntry_t(ComponentEntry_t* );
		ComponentEntry_t& operator=(ComponentEntry_t* , const ComponentEntry_t& );
		void ComponentEntry_t(ComponentEntry_t* , const ComponentEntry_t& );
		void ~ComponentEntry_t(ComponentEntry_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:270 */
	struct ComponentReference_t {
		ComponentIndex_t m_nComponentIndex; /* 0 4 */
		ComponentHandle_t m_Handle; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:64 */
	typedef int ComponentIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
private:
	static const ComponentIndex_t s_InvalidComponentIndex = 18446744073709551615; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:65 */
	typedef unsigned int ReferenceIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const ReferenceIndex_t s_InvalidReferenceIndex = 4194303; /* 0 0 */
	static const unsigned int s_nMaxComponents = 4194303; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:382 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:396 */
	CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>& operator=(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>* , const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>& );
	/* ../public/meshutils/halfedgecomponentlist.h:413 */
	Face_t& operator[](CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:419 */
	const Face_t& operator[](const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:190 */
	typedef struct ComponentHandleWithListPointer_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:85 */
	struct ComponentHandleWithListPointer_t {
		/* ../public/meshutils/halfedgecomponentlist.h:87 */
		bool operator==(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:92 */
		bool operator!=(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:97 */
		bool operator<(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:102 */
		bool operator>(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:107 */
		bool operator==(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:112 */
		bool operator!=(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:117 */
		ComponentHandleWithListPointer_t& operator=(ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:127 */
		ComponentHandleWithListPointer_t Invalid(void);
		/* ../public/meshutils/halfedgecomponentlist.h:137 */
		bool LessFunc(const ComponentHandleWithListPointer_t& , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:142 */
		uint32 AsInt(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:148 */
		void FromInt(ComponentHandleWithListPointer_t* , uint32, const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>* );
		/* ../public/meshutils/halfedgecomponentlist.h:158 */
		int GetBaseIndex(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:166 */
		const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>* GetList(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:171 */
		void SetList(ComponentHandleWithListPointer_t* , const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>* );
		uint32 m_nIndex:22; /* 0: 0 4 */
		uint32 m_nVersion:10; /* 0:22 4 */
		const class CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t> * m_pList; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:433 */
	ComponentHandle_t First(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:439 */
	ComponentHandle_t Next(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:536 */
	ComponentIndex_t GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:560 */
	void GetComponentIndices(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>* , int, const ComponentHandle_t* , ComponentIndex_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:464 */
	Face_t* GetComponent(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:474 */
	const Face_t* GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:487 */
	ComponentHandle_t GetComponentHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:573 */
	int Count(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:583 */
	int MaxCount(void);
	/* ../public/meshutils/halfedgecomponentlist.h:593 */
	ComponentIndex_t InvalidIndex(void);
	/* ../public/meshutils/halfedgecomponentlist.h:603 */
	ComponentHandle_t InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:620 */
	void EnsureCapacity(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:633 */
	void SetCount(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:668 */
	ComponentHandle_t AddComponent(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:746 */
	void AddMultiple(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>* , int, ComponentHandle_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:773 */
	void RemoveAll(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:790 */
	void RemoveComponent(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:852 */
	bool CheckIntegrity(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:279 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>* , const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>& );
	CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>::ComponentEntry_t, int> > m_Components; /* 0 32 */
	CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>::ComponentReference_t, int> > m_ReferenceTable; /* 32 32 */
	ReferenceIndex_t m_nFreeListHead; /* 64 4 */
	ReferenceIndex_t m_nFreeListTail; /* 68 4 */
	void ~CHalfEdgeComponentList(CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>* );
};

// <05F32E64> ../public/meshutils/halfedgecomponentlist.h:61
// member functions: 38
// member variables: 4
// static member variables: 3
// class size: 72
class CHalfEdgeComponentList<CModelMesh::Vertex_t> {
	/* ../public/meshutils/halfedgecomponentlist.h:264 */
	struct ComponentEntry_t {
		Vertex_t m_Component; /* 0 16 */
		ReferenceIndex_t m_ReferenceIndex; /* 16 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:270 */
	struct ComponentReference_t {
		ComponentIndex_t m_nComponentIndex; /* 0 4 */
		ComponentHandle_t m_Handle; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:64 */
	typedef int ComponentIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
private:
	static const ComponentIndex_t s_InvalidComponentIndex = 18446744073709551615; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:65 */
	typedef unsigned int ReferenceIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const ReferenceIndex_t s_InvalidReferenceIndex = 4194303; /* 0 0 */
	static const unsigned int s_nMaxComponents = 4194303; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:382 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:396 */
	CHalfEdgeComponentList<CModelMesh::Vertex_t>& operator=(CHalfEdgeComponentList<CModelMesh::Vertex_t>* , const CHalfEdgeComponentList<CModelMesh::Vertex_t>& );
	/* ../public/meshutils/halfedgecomponentlist.h:413 */
	Vertex_t& operator[](CHalfEdgeComponentList<CModelMesh::Vertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:419 */
	const Vertex_t& operator[](const CHalfEdgeComponentList<CModelMesh::Vertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:190 */
	typedef struct ComponentHandleWithListPointer_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:85 */
	struct ComponentHandleWithListPointer_t {
		/* ../public/meshutils/halfedgecomponentlist.h:87 */
		bool operator==(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:92 */
		bool operator!=(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:97 */
		bool operator<(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:102 */
		bool operator>(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:107 */
		bool operator==(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:112 */
		bool operator!=(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:117 */
		ComponentHandleWithListPointer_t& operator=(ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:127 */
		ComponentHandleWithListPointer_t Invalid(void);
		/* ../public/meshutils/halfedgecomponentlist.h:137 */
		bool LessFunc(const ComponentHandleWithListPointer_t& , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:142 */
		uint32 AsInt(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:148 */
		void FromInt(ComponentHandleWithListPointer_t* , uint32, const CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
		/* ../public/meshutils/halfedgecomponentlist.h:158 */
		int GetBaseIndex(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:166 */
		const CHalfEdgeComponentList<CModelMesh::Vertex_t>* GetList(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:171 */
		void SetList(ComponentHandleWithListPointer_t* , const CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
		uint32 m_nIndex:22; /* 0: 0 4 */
		uint32 m_nVersion:10; /* 0:22 4 */
		const class CHalfEdgeComponentList<CModelMesh::Vertex_t> * m_pList; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:433 */
	ComponentHandle_t First(const CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:439 */
	ComponentHandle_t Next(const CHalfEdgeComponentList<CModelMesh::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:536 */
	ComponentIndex_t GetComponentIndex(const CHalfEdgeComponentList<CModelMesh::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:560 */
	void GetComponentIndices(const CHalfEdgeComponentList<CModelMesh::Vertex_t>* , int, const ComponentHandle_t* , ComponentIndex_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:464 */
	Vertex_t* GetComponent(CHalfEdgeComponentList<CModelMesh::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:474 */
	const Vertex_t* GetComponent(const CHalfEdgeComponentList<CModelMesh::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:487 */
	ComponentHandle_t GetComponentHandle(const CHalfEdgeComponentList<CModelMesh::Vertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:573 */
	int Count(const CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:583 */
	int MaxCount(void);
	/* ../public/meshutils/halfedgecomponentlist.h:593 */
	ComponentIndex_t InvalidIndex(void);
	/* ../public/meshutils/halfedgecomponentlist.h:603 */
	ComponentHandle_t InvalidHandle(const CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:620 */
	void EnsureCapacity(CHalfEdgeComponentList<CModelMesh::Vertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:633 */
	void SetCount(CHalfEdgeComponentList<CModelMesh::Vertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:668 */
	ComponentHandle_t AddComponent(CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:746 */
	void AddMultiple(CHalfEdgeComponentList<CModelMesh::Vertex_t>* , int, ComponentHandle_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:773 */
	void RemoveAll(CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:790 */
	void RemoveComponent(CHalfEdgeComponentList<CModelMesh::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:852 */
	bool CheckIntegrity(const CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:279 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CModelMesh::Vertex_t>* , const CHalfEdgeComponentList<CModelMesh::Vertex_t>& );
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int> > m_Components; /* 0 32 */
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int> > m_ReferenceTable; /* 32 32 */
	ReferenceIndex_t m_nFreeListHead; /* 64 4 */
	ReferenceIndex_t m_nFreeListTail; /* 68 4 */
	class CHandleTranslator {
	};
	/* ../public/meshutils/halfedgecomponentlist.h:506 */
	bool GetComponentHandles<CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > >(const CHalfEdgeComponentList<CModelMesh::Vertex_t>* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL);
};

// <05F3A921> ../public/meshutils/halfedgecomponentlist.h:61
// member functions: 38
// member variables: 4
// static member variables: 3
// class size: 72
class CHalfEdgeComponentList<CModelMesh::FaceVertex_t> {
	/* ../public/meshutils/halfedgecomponentlist.h:264 */
	struct ComponentEntry_t {
		FaceVertex_t m_Component; /* 0 96 */
		ReferenceIndex_t m_ReferenceIndex; /* 96 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:270 */
	struct ComponentReference_t {
		ComponentIndex_t m_nComponentIndex; /* 0 4 */
		ComponentHandle_t m_Handle; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:64 */
	typedef int ComponentIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
private:
	static const ComponentIndex_t s_InvalidComponentIndex = 18446744073709551615; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:65 */
	typedef unsigned int ReferenceIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const ReferenceIndex_t s_InvalidReferenceIndex = 4194303; /* 0 0 */
	static const unsigned int s_nMaxComponents = 4194303; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:382 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:396 */
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>& operator=(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>& );
	/* ../public/meshutils/halfedgecomponentlist.h:413 */
	FaceVertex_t& operator[](CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:419 */
	const FaceVertex_t& operator[](const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:190 */
	typedef struct ComponentHandleWithListPointer_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:85 */
	struct ComponentHandleWithListPointer_t {
		/* ../public/meshutils/halfedgecomponentlist.h:87 */
		bool operator==(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:92 */
		bool operator!=(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:97 */
		bool operator<(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:102 */
		bool operator>(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:107 */
		bool operator==(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:112 */
		bool operator!=(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:117 */
		ComponentHandleWithListPointer_t& operator=(ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:127 */
		ComponentHandleWithListPointer_t Invalid(void);
		/* ../public/meshutils/halfedgecomponentlist.h:137 */
		bool LessFunc(const ComponentHandleWithListPointer_t& , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:142 */
		uint32 AsInt(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:148 */
		void FromInt(ComponentHandleWithListPointer_t* , uint32, const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
		/* ../public/meshutils/halfedgecomponentlist.h:158 */
		int GetBaseIndex(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:166 */
		const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* GetList(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:171 */
		void SetList(ComponentHandleWithListPointer_t* , const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
		uint32 m_nIndex:22; /* 0: 0 4 */
		uint32 m_nVersion:10; /* 0:22 4 */
		const class CHalfEdgeComponentList<CModelMesh::FaceVertex_t> * m_pList; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:433 */
	ComponentHandle_t First(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:439 */
	ComponentHandle_t Next(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:536 */
	ComponentIndex_t GetComponentIndex(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:560 */
	void GetComponentIndices(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , int, const ComponentHandle_t* , ComponentIndex_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:464 */
	FaceVertex_t* GetComponent(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:474 */
	const FaceVertex_t* GetComponent(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:487 */
	ComponentHandle_t GetComponentHandle(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:573 */
	int Count(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:583 */
	int MaxCount(void);
	/* ../public/meshutils/halfedgecomponentlist.h:593 */
	ComponentIndex_t InvalidIndex(void);
	/* ../public/meshutils/halfedgecomponentlist.h:603 */
	ComponentHandle_t InvalidHandle(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:620 */
	void EnsureCapacity(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:633 */
	void SetCount(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:668 */
	ComponentHandle_t AddComponent(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:746 */
	void AddMultiple(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , int, ComponentHandle_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:773 */
	void RemoveAll(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:790 */
	void RemoveComponent(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:852 */
	bool CheckIntegrity(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:279 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>& );
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int> > m_Components; /* 0 32 */
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int> > m_ReferenceTable; /* 32 32 */
	ReferenceIndex_t m_nFreeListHead; /* 64 4 */
	ReferenceIndex_t m_nFreeListTail; /* 68 4 */
	class CHandleTranslator {
	};
	/* ../public/meshutils/halfedgecomponentlist.h:506 */
	bool GetComponentHandles<CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > >(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon);
};

// <05F406E9> ../public/meshutils/halfedgecomponentlist.h:61
// member functions: 38
// member variables: 4
// static member variables: 3
// class size: 72
class CHalfEdgeComponentList<CModelMesh::Edge_t> {
	/* ../public/meshutils/halfedgecomponentlist.h:264 */
	struct ComponentEntry_t {
		Edge_t m_Component; /* 0 32 */
		ReferenceIndex_t m_ReferenceIndex; /* 32 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:270 */
	struct ComponentReference_t {
		ComponentIndex_t m_nComponentIndex; /* 0 4 */
		ComponentHandle_t m_Handle; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:64 */
	typedef int ComponentIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
private:
	static const ComponentIndex_t s_InvalidComponentIndex = 18446744073709551615; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:65 */
	typedef unsigned int ReferenceIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const ReferenceIndex_t s_InvalidReferenceIndex = 4194303; /* 0 0 */
	static const unsigned int s_nMaxComponents = 4194303; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:382 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:396 */
	CHalfEdgeComponentList<CModelMesh::Edge_t>& operator=(CHalfEdgeComponentList<CModelMesh::Edge_t>* , const CHalfEdgeComponentList<CModelMesh::Edge_t>& );
	/* ../public/meshutils/halfedgecomponentlist.h:413 */
	Edge_t& operator[](CHalfEdgeComponentList<CModelMesh::Edge_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:419 */
	const Edge_t& operator[](const CHalfEdgeComponentList<CModelMesh::Edge_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:190 */
	typedef struct ComponentHandleWithListPointer_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:85 */
	struct ComponentHandleWithListPointer_t {
		/* ../public/meshutils/halfedgecomponentlist.h:87 */
		bool operator==(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:92 */
		bool operator!=(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:97 */
		bool operator<(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:102 */
		bool operator>(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:107 */
		bool operator==(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:112 */
		bool operator!=(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:117 */
		ComponentHandleWithListPointer_t& operator=(ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:127 */
		ComponentHandleWithListPointer_t Invalid(void);
		/* ../public/meshutils/halfedgecomponentlist.h:137 */
		bool LessFunc(const ComponentHandleWithListPointer_t& , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:142 */
		uint32 AsInt(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:148 */
		void FromInt(ComponentHandleWithListPointer_t* , uint32, const CHalfEdgeComponentList<CModelMesh::Edge_t>* );
		/* ../public/meshutils/halfedgecomponentlist.h:158 */
		int GetBaseIndex(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:166 */
		const CHalfEdgeComponentList<CModelMesh::Edge_t>* GetList(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:171 */
		void SetList(ComponentHandleWithListPointer_t* , const CHalfEdgeComponentList<CModelMesh::Edge_t>* );
		uint32 m_nIndex:22; /* 0: 0 4 */
		uint32 m_nVersion:10; /* 0:22 4 */
		const class CHalfEdgeComponentList<CModelMesh::Edge_t> * m_pList; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:433 */
	ComponentHandle_t First(const CHalfEdgeComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:439 */
	ComponentHandle_t Next(const CHalfEdgeComponentList<CModelMesh::Edge_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:536 */
	ComponentIndex_t GetComponentIndex(const CHalfEdgeComponentList<CModelMesh::Edge_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:560 */
	void GetComponentIndices(const CHalfEdgeComponentList<CModelMesh::Edge_t>* , int, const ComponentHandle_t* , ComponentIndex_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:464 */
	Edge_t* GetComponent(CHalfEdgeComponentList<CModelMesh::Edge_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:474 */
	const Edge_t* GetComponent(const CHalfEdgeComponentList<CModelMesh::Edge_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:487 */
	ComponentHandle_t GetComponentHandle(const CHalfEdgeComponentList<CModelMesh::Edge_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:573 */
	int Count(const CHalfEdgeComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:583 */
	int MaxCount(void);
	/* ../public/meshutils/halfedgecomponentlist.h:593 */
	ComponentIndex_t InvalidIndex(void);
	/* ../public/meshutils/halfedgecomponentlist.h:603 */
	ComponentHandle_t InvalidHandle(const CHalfEdgeComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:620 */
	void EnsureCapacity(CHalfEdgeComponentList<CModelMesh::Edge_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:633 */
	void SetCount(CHalfEdgeComponentList<CModelMesh::Edge_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:668 */
	ComponentHandle_t AddComponent(CHalfEdgeComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:746 */
	void AddMultiple(CHalfEdgeComponentList<CModelMesh::Edge_t>* , int, ComponentHandle_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:773 */
	void RemoveAll(CHalfEdgeComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:790 */
	void RemoveComponent(CHalfEdgeComponentList<CModelMesh::Edge_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:852 */
	bool CheckIntegrity(const CHalfEdgeComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:279 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CModelMesh::Edge_t>* , const CHalfEdgeComponentList<CModelMesh::Edge_t>& );
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int> > m_Components; /* 0 32 */
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int> > m_ReferenceTable; /* 32 32 */
	ReferenceIndex_t m_nFreeListHead; /* 64 4 */
	ReferenceIndex_t m_nFreeListTail; /* 68 4 */
	class CHandleTranslator {
	};
	/* ../public/meshutils/halfedgecomponentlist.h:506 */
	bool GetComponentHandles<CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int> > >(const CHalfEdgeComponentList<CModelMesh::Edge_t>* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
};

// <05F464AC> ../public/meshutils/halfedgecomponentlist.h:61
// member functions: 38
// member variables: 4
// static member variables: 3
// class size: 72
class CHalfEdgeComponentList<CModelMesh::Face_t> {
	/* ../public/meshutils/halfedgecomponentlist.h:264 */
	struct ComponentEntry_t {
		Face_t m_Component; /* 0 24 */
		ReferenceIndex_t m_ReferenceIndex; /* 24 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:270 */
	struct ComponentReference_t {
		ComponentIndex_t m_nComponentIndex; /* 0 4 */
		ComponentHandle_t m_Handle; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:64 */
	typedef int ComponentIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
private:
	static const ComponentIndex_t s_InvalidComponentIndex = 18446744073709551615; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:65 */
	typedef unsigned int ReferenceIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const ReferenceIndex_t s_InvalidReferenceIndex = 4194303; /* 0 0 */
	static const unsigned int s_nMaxComponents = 4194303; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:382 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:396 */
	CHalfEdgeComponentList<CModelMesh::Face_t>& operator=(CHalfEdgeComponentList<CModelMesh::Face_t>* , const CHalfEdgeComponentList<CModelMesh::Face_t>& );
	/* ../public/meshutils/halfedgecomponentlist.h:413 */
	Face_t& operator[](CHalfEdgeComponentList<CModelMesh::Face_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:419 */
	const Face_t& operator[](const CHalfEdgeComponentList<CModelMesh::Face_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:190 */
	typedef struct ComponentHandleWithListPointer_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:85 */
	struct ComponentHandleWithListPointer_t {
		/* ../public/meshutils/halfedgecomponentlist.h:87 */
		bool operator==(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:92 */
		bool operator!=(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:97 */
		bool operator<(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:102 */
		bool operator>(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:107 */
		bool operator==(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:112 */
		bool operator!=(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:117 */
		ComponentHandleWithListPointer_t& operator=(ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:127 */
		ComponentHandleWithListPointer_t Invalid(void);
		/* ../public/meshutils/halfedgecomponentlist.h:137 */
		bool LessFunc(const ComponentHandleWithListPointer_t& , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:142 */
		uint32 AsInt(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:148 */
		void FromInt(ComponentHandleWithListPointer_t* , uint32, const CHalfEdgeComponentList<CModelMesh::Face_t>* );
		/* ../public/meshutils/halfedgecomponentlist.h:158 */
		int GetBaseIndex(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:166 */
		const CHalfEdgeComponentList<CModelMesh::Face_t>* GetList(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:171 */
		void SetList(ComponentHandleWithListPointer_t* , const CHalfEdgeComponentList<CModelMesh::Face_t>* );
		uint32 m_nIndex:22; /* 0: 0 4 */
		uint32 m_nVersion:10; /* 0:22 4 */
		const class CHalfEdgeComponentList<CModelMesh::Face_t> * m_pList; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:433 */
	ComponentHandle_t First(const CHalfEdgeComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:439 */
	ComponentHandle_t Next(const CHalfEdgeComponentList<CModelMesh::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:536 */
	ComponentIndex_t GetComponentIndex(const CHalfEdgeComponentList<CModelMesh::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:560 */
	void GetComponentIndices(const CHalfEdgeComponentList<CModelMesh::Face_t>* , int, const ComponentHandle_t* , ComponentIndex_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:464 */
	Face_t* GetComponent(CHalfEdgeComponentList<CModelMesh::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:474 */
	const Face_t* GetComponent(const CHalfEdgeComponentList<CModelMesh::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:487 */
	ComponentHandle_t GetComponentHandle(const CHalfEdgeComponentList<CModelMesh::Face_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:573 */
	int Count(const CHalfEdgeComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:583 */
	int MaxCount(void);
	/* ../public/meshutils/halfedgecomponentlist.h:593 */
	ComponentIndex_t InvalidIndex(void);
	/* ../public/meshutils/halfedgecomponentlist.h:603 */
	ComponentHandle_t InvalidHandle(const CHalfEdgeComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:620 */
	void EnsureCapacity(CHalfEdgeComponentList<CModelMesh::Face_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:633 */
	void SetCount(CHalfEdgeComponentList<CModelMesh::Face_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:668 */
	ComponentHandle_t AddComponent(CHalfEdgeComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:746 */
	void AddMultiple(CHalfEdgeComponentList<CModelMesh::Face_t>* , int, ComponentHandle_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:773 */
	void RemoveAll(CHalfEdgeComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:790 */
	void RemoveComponent(CHalfEdgeComponentList<CModelMesh::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:852 */
	bool CheckIntegrity(const CHalfEdgeComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:279 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CModelMesh::Face_t>* , const CHalfEdgeComponentList<CModelMesh::Face_t>& );
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int> > m_Components; /* 0 32 */
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int> > m_ReferenceTable; /* 32 32 */
	ReferenceIndex_t m_nFreeListHead; /* 64 4 */
	ReferenceIndex_t m_nFreeListTail; /* 68 4 */
	class CHandleTranslator {
	};
	/* ../public/meshutils/halfedgecomponentlist.h:506 */
	bool GetComponentHandles<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > >(const CHalfEdgeComponentList<CModelMesh::Face_t>* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
};

// <05FFE87B> ../public/meshutils/halfedgecomponentlist.h:61
// member functions: 43
// member variables: 4
// static member variables: 3
// class size: 72
class CHalfEdgeComponentList<CModelMesh::Vertex_t> {
	/* ../public/meshutils/halfedgecomponentlist.h:264 */
	struct ComponentEntry_t {
		Vertex_t m_Component; /* 0 16 */
		ReferenceIndex_t m_ReferenceIndex; /* 16 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:270 */
	struct ComponentReference_t {
		ComponentIndex_t m_nComponentIndex; /* 0 4 */
		ComponentHandle_t m_Handle; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:64 */
	typedef int ComponentIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
private:
	static const ComponentIndex_t s_InvalidComponentIndex = 18446744073709551615; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:65 */
	typedef unsigned int ReferenceIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const ReferenceIndex_t s_InvalidReferenceIndex = 4194303; /* 0 0 */
	static const unsigned int s_nMaxComponents = 4194303; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:382 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:396 */
	CHalfEdgeComponentList<CModelMesh::Vertex_t>& operator=(CHalfEdgeComponentList<CModelMesh::Vertex_t>* , const CHalfEdgeComponentList<CModelMesh::Vertex_t>& );
	/* ../public/meshutils/halfedgecomponentlist.h:413 */
	Vertex_t& operator[](CHalfEdgeComponentList<CModelMesh::Vertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:419 */
	const Vertex_t& operator[](const CHalfEdgeComponentList<CModelMesh::Vertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:190 */
	typedef struct ComponentHandleWithListPointer_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:85 */
	struct ComponentHandleWithListPointer_t {
		/* ../public/meshutils/halfedgecomponentlist.h:87 */
		bool operator==(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:92 */
		bool operator!=(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:97 */
		bool operator<(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:102 */
		bool operator>(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:107 */
		bool operator==(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:112 */
		bool operator!=(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:117 */
		ComponentHandleWithListPointer_t& operator=(ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:127 */
		ComponentHandleWithListPointer_t Invalid(void);
		/* ../public/meshutils/halfedgecomponentlist.h:137 */
		bool LessFunc(const ComponentHandleWithListPointer_t& , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:142 */
		uint32 AsInt(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:148 */
		void FromInt(ComponentHandleWithListPointer_t* , uint32, const CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
		/* ../public/meshutils/halfedgecomponentlist.h:158 */
		int GetBaseIndex(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:166 */
		const CHalfEdgeComponentList<CModelMesh::Vertex_t>* GetList(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:171 */
		void SetList(ComponentHandleWithListPointer_t* , const CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
		uint32 m_nIndex:22; /* 0: 0 4 */
		uint32 m_nVersion:10; /* 0:22 4 */
		const class CHalfEdgeComponentList<CModelMesh::Vertex_t> * m_pList; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:433 */
	ComponentHandle_t First(const CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:439 */
	ComponentHandle_t Next(const CHalfEdgeComponentList<CModelMesh::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:536 */
	ComponentIndex_t GetComponentIndex(const CHalfEdgeComponentList<CModelMesh::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:560 */
	void GetComponentIndices(const CHalfEdgeComponentList<CModelMesh::Vertex_t>* , int, const ComponentHandle_t* , ComponentIndex_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:464 */
	Vertex_t* GetComponent(CHalfEdgeComponentList<CModelMesh::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:474 */
	const Vertex_t* GetComponent(const CHalfEdgeComponentList<CModelMesh::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:487 */
	ComponentHandle_t GetComponentHandle(const CHalfEdgeComponentList<CModelMesh::Vertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:573 */
	int Count(const CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:583 */
	int MaxCount(void);
	/* ../public/meshutils/halfedgecomponentlist.h:593 */
	ComponentIndex_t InvalidIndex(void);
	/* ../public/meshutils/halfedgecomponentlist.h:603 */
	ComponentHandle_t InvalidHandle(const CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:620 */
	void EnsureCapacity(CHalfEdgeComponentList<CModelMesh::Vertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:633 */
	void SetCount(CHalfEdgeComponentList<CModelMesh::Vertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:668 */
	ComponentHandle_t AddComponent(CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:746 */
	void AddMultiple(CHalfEdgeComponentList<CModelMesh::Vertex_t>* , int, ComponentHandle_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:773 */
	void RemoveAll(CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:790 */
	void RemoveComponent(CHalfEdgeComponentList<CModelMesh::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:852 */
	bool CheckIntegrity(const CHalfEdgeComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:279 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CModelMesh::Vertex_t>* , const CHalfEdgeComponentList<CModelMesh::Vertex_t>& );
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int> > m_Components; /* 0 32 */
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int> > m_ReferenceTable; /* 32 32 */
	ReferenceIndex_t m_nFreeListHead; /* 64 4 */
	ReferenceIndex_t m_nFreeListTail; /* 68 4 */
	/* ../public/meshutils/halfedgecomponentlist.h:296 */
	class CHandleTranslator {
		/* ../public/meshutils/halfedgecomponentlist.h:299 */
		void CHandleTranslator(CHandleTranslator* );
		/* ../public/meshutils/halfedgecomponentlist.h:306 */
		void CHandleTranslator(CHandleTranslator* , const CHalfEdgeComponentList<CModelMesh::Vertex_t>& , const CHalfEdgeComponentList<CModelMesh::Vertex_t>& , int);
		/* ../public/meshutils/halfedgecomponentlist.h:314 */
		void Initialize(CHandleTranslator* , const CHalfEdgeComponentList<CModelMesh::Vertex_t>& , int* , int, const CHalfEdgeComponentList<CModelMesh::Vertex_t>& , int);
		/* ../public/meshutils/halfedgecomponentlist.h:339 */
		ComponentHandle_t TranslateHandle(const CHandleTranslator* , ComponentHandle_t);
		/* ../public/meshutils/halfedgecomponentlist.h:357 */
		void TranslateHandles(CHandleTranslator* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL);
	private:
		const class CHalfEdgeComponentList<CModelMesh::Vertex_t> * m_pSrcComponentList; /* 0 8 */
		const class CHalfEdgeComponentList<CModelMesh::Vertex_t> * m_pDstComponentList; /* 8 8 */
		CUtlVector<int, CUtlMemory<int, int> > m_nSrcIndexToDstIndex; /* 16 32 */
		void ~CHandleTranslator(CHandleTranslator* );
	};
	/* tag__fprintf: const_type tag not supported! */;
};

// <060062FC> ../public/meshutils/halfedgecomponentlist.h:61
// member functions: 43
// member variables: 4
// static member variables: 3
// class size: 72
class CHalfEdgeComponentList<CModelMesh::FaceVertex_t> {
	/* ../public/meshutils/halfedgecomponentlist.h:264 */
	struct ComponentEntry_t {
		FaceVertex_t m_Component; /* 0 96 */
		ReferenceIndex_t m_ReferenceIndex; /* 96 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:270 */
	struct ComponentReference_t {
		ComponentIndex_t m_nComponentIndex; /* 0 4 */
		ComponentHandle_t m_Handle; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:64 */
	typedef int ComponentIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
private:
	static const ComponentIndex_t s_InvalidComponentIndex = 18446744073709551615; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:65 */
	typedef unsigned int ReferenceIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const ReferenceIndex_t s_InvalidReferenceIndex = 4194303; /* 0 0 */
	static const unsigned int s_nMaxComponents = 4194303; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:382 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:396 */
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>& operator=(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>& );
	/* ../public/meshutils/halfedgecomponentlist.h:413 */
	FaceVertex_t& operator[](CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:419 */
	const FaceVertex_t& operator[](const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:190 */
	typedef struct ComponentHandleWithListPointer_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:85 */
	struct ComponentHandleWithListPointer_t {
		/* ../public/meshutils/halfedgecomponentlist.h:87 */
		bool operator==(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:92 */
		bool operator!=(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:97 */
		bool operator<(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:102 */
		bool operator>(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:107 */
		bool operator==(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:112 */
		bool operator!=(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:117 */
		ComponentHandleWithListPointer_t& operator=(ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:127 */
		ComponentHandleWithListPointer_t Invalid(void);
		/* ../public/meshutils/halfedgecomponentlist.h:137 */
		bool LessFunc(const ComponentHandleWithListPointer_t& , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:142 */
		uint32 AsInt(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:148 */
		void FromInt(ComponentHandleWithListPointer_t* , uint32, const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
		/* ../public/meshutils/halfedgecomponentlist.h:158 */
		int GetBaseIndex(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:166 */
		const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* GetList(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:171 */
		void SetList(ComponentHandleWithListPointer_t* , const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
		uint32 m_nIndex:22; /* 0: 0 4 */
		uint32 m_nVersion:10; /* 0:22 4 */
		const class CHalfEdgeComponentList<CModelMesh::FaceVertex_t> * m_pList; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:433 */
	ComponentHandle_t First(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:439 */
	ComponentHandle_t Next(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:536 */
	ComponentIndex_t GetComponentIndex(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:560 */
	void GetComponentIndices(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , int, const ComponentHandle_t* , ComponentIndex_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:464 */
	FaceVertex_t* GetComponent(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:474 */
	const FaceVertex_t* GetComponent(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:487 */
	ComponentHandle_t GetComponentHandle(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:573 */
	int Count(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:583 */
	int MaxCount(void);
	/* ../public/meshutils/halfedgecomponentlist.h:593 */
	ComponentIndex_t InvalidIndex(void);
	/* ../public/meshutils/halfedgecomponentlist.h:603 */
	ComponentHandle_t InvalidHandle(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:620 */
	void EnsureCapacity(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:633 */
	void SetCount(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:668 */
	ComponentHandle_t AddComponent(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:746 */
	void AddMultiple(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , int, ComponentHandle_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:773 */
	void RemoveAll(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:790 */
	void RemoveComponent(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:852 */
	bool CheckIntegrity(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:279 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>& );
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int> > m_Components; /* 0 32 */
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int> > m_ReferenceTable; /* 32 32 */
	ReferenceIndex_t m_nFreeListHead; /* 64 4 */
	ReferenceIndex_t m_nFreeListTail; /* 68 4 */
	/* ../public/meshutils/halfedgecomponentlist.h:296 */
	class CHandleTranslator {
		/* ../public/meshutils/halfedgecomponentlist.h:299 */
		void CHandleTranslator(CHandleTranslator* );
		/* ../public/meshutils/halfedgecomponentlist.h:306 */
		void CHandleTranslator(CHandleTranslator* , const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>& , const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>& , int);
		/* ../public/meshutils/halfedgecomponentlist.h:314 */
		void Initialize(CHandleTranslator* , const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>& , int* , int, const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>& , int);
		/* ../public/meshutils/halfedgecomponentlist.h:339 */
		ComponentHandle_t TranslateHandle(const CHandleTranslator* , ComponentHandle_t);
		/* ../public/meshutils/halfedgecomponentlist.h:357 */
		void TranslateHandles(CHandleTranslator* , CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon);
	private:
		const class CHalfEdgeComponentList<CModelMesh::FaceVertex_t> * m_pSrcComponentList; /* 0 8 */
		const class CHalfEdgeComponentList<CModelMesh::FaceVertex_t> * m_pDstComponentList; /* 8 8 */
		CUtlVector<int, CUtlMemory<int, int> > m_nSrcIndexToDstIndex; /* 16 32 */
		void ~CHandleTranslator(CHandleTranslator* );
	};
	/* tag__fprintf: const_type tag not supported! */;
};

// <0600C1BE> ../public/meshutils/halfedgecomponentlist.h:61
// member functions: 43
// member variables: 4
// static member variables: 3
// class size: 72
class CHalfEdgeComponentList<CModelMesh::Edge_t> {
	/* ../public/meshutils/halfedgecomponentlist.h:264 */
	struct ComponentEntry_t {
		Edge_t m_Component; /* 0 32 */
		ReferenceIndex_t m_ReferenceIndex; /* 32 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:270 */
	struct ComponentReference_t {
		ComponentIndex_t m_nComponentIndex; /* 0 4 */
		ComponentHandle_t m_Handle; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:64 */
	typedef int ComponentIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
private:
	static const ComponentIndex_t s_InvalidComponentIndex = 18446744073709551615; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:65 */
	typedef unsigned int ReferenceIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const ReferenceIndex_t s_InvalidReferenceIndex = 4194303; /* 0 0 */
	static const unsigned int s_nMaxComponents = 4194303; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:382 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:396 */
	CHalfEdgeComponentList<CModelMesh::Edge_t>& operator=(CHalfEdgeComponentList<CModelMesh::Edge_t>* , const CHalfEdgeComponentList<CModelMesh::Edge_t>& );
	/* ../public/meshutils/halfedgecomponentlist.h:413 */
	Edge_t& operator[](CHalfEdgeComponentList<CModelMesh::Edge_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:419 */
	const Edge_t& operator[](const CHalfEdgeComponentList<CModelMesh::Edge_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:190 */
	typedef struct ComponentHandleWithListPointer_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:85 */
	struct ComponentHandleWithListPointer_t {
		/* ../public/meshutils/halfedgecomponentlist.h:87 */
		bool operator==(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:92 */
		bool operator!=(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:97 */
		bool operator<(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:102 */
		bool operator>(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:107 */
		bool operator==(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:112 */
		bool operator!=(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:117 */
		ComponentHandleWithListPointer_t& operator=(ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:127 */
		ComponentHandleWithListPointer_t Invalid(void);
		/* ../public/meshutils/halfedgecomponentlist.h:137 */
		bool LessFunc(const ComponentHandleWithListPointer_t& , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:142 */
		uint32 AsInt(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:148 */
		void FromInt(ComponentHandleWithListPointer_t* , uint32, const CHalfEdgeComponentList<CModelMesh::Edge_t>* );
		/* ../public/meshutils/halfedgecomponentlist.h:158 */
		int GetBaseIndex(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:166 */
		const CHalfEdgeComponentList<CModelMesh::Edge_t>* GetList(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:171 */
		void SetList(ComponentHandleWithListPointer_t* , const CHalfEdgeComponentList<CModelMesh::Edge_t>* );
		uint32 m_nIndex:22; /* 0: 0 4 */
		uint32 m_nVersion:10; /* 0:22 4 */
		const class CHalfEdgeComponentList<CModelMesh::Edge_t> * m_pList; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:433 */
	ComponentHandle_t First(const CHalfEdgeComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:439 */
	ComponentHandle_t Next(const CHalfEdgeComponentList<CModelMesh::Edge_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:536 */
	ComponentIndex_t GetComponentIndex(const CHalfEdgeComponentList<CModelMesh::Edge_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:560 */
	void GetComponentIndices(const CHalfEdgeComponentList<CModelMesh::Edge_t>* , int, const ComponentHandle_t* , ComponentIndex_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:464 */
	Edge_t* GetComponent(CHalfEdgeComponentList<CModelMesh::Edge_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:474 */
	const Edge_t* GetComponent(const CHalfEdgeComponentList<CModelMesh::Edge_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:487 */
	ComponentHandle_t GetComponentHandle(const CHalfEdgeComponentList<CModelMesh::Edge_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:573 */
	int Count(const CHalfEdgeComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:583 */
	int MaxCount(void);
	/* ../public/meshutils/halfedgecomponentlist.h:593 */
	ComponentIndex_t InvalidIndex(void);
	/* ../public/meshutils/halfedgecomponentlist.h:603 */
	ComponentHandle_t InvalidHandle(const CHalfEdgeComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:620 */
	void EnsureCapacity(CHalfEdgeComponentList<CModelMesh::Edge_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:633 */
	void SetCount(CHalfEdgeComponentList<CModelMesh::Edge_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:668 */
	ComponentHandle_t AddComponent(CHalfEdgeComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:746 */
	void AddMultiple(CHalfEdgeComponentList<CModelMesh::Edge_t>* , int, ComponentHandle_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:773 */
	void RemoveAll(CHalfEdgeComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:790 */
	void RemoveComponent(CHalfEdgeComponentList<CModelMesh::Edge_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:852 */
	bool CheckIntegrity(const CHalfEdgeComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:279 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CModelMesh::Edge_t>* , const CHalfEdgeComponentList<CModelMesh::Edge_t>& );
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int> > m_Components; /* 0 32 */
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int> > m_ReferenceTable; /* 32 32 */
	ReferenceIndex_t m_nFreeListHead; /* 64 4 */
	ReferenceIndex_t m_nFreeListTail; /* 68 4 */
	/* ../public/meshutils/halfedgecomponentlist.h:296 */
	class CHandleTranslator {
		/* ../public/meshutils/halfedgecomponentlist.h:299 */
		void CHandleTranslator(CHandleTranslator* );
		/* ../public/meshutils/halfedgecomponentlist.h:306 */
		void CHandleTranslator(CHandleTranslator* , const CHalfEdgeComponentList<CModelMesh::Edge_t>& , const CHalfEdgeComponentList<CModelMesh::Edge_t>& , int);
		/* ../public/meshutils/halfedgecomponentlist.h:314 */
		void Initialize(CHandleTranslator* , const CHalfEdgeComponentList<CModelMesh::Edge_t>& , int* , int, const CHalfEdgeComponentList<CModelMesh::Edge_t>& , int);
		/* ../public/meshutils/halfedgecomponentlist.h:339 */
		ComponentHandle_t TranslateHandle(const CHandleTranslator* , ComponentHandle_t);
		/* ../public/meshutils/halfedgecomponentlist.h:357 */
		void TranslateHandles(CHandleTranslator* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
	private:
		const class CHalfEdgeComponentList<CModelMesh::Edge_t> * m_pSrcComponentList; /* 0 8 */
		const class CHalfEdgeComponentList<CModelMesh::Edge_t> * m_pDstComponentList; /* 8 8 */
		CUtlVector<int, CUtlMemory<int, int> > m_nSrcIndexToDstIndex; /* 16 32 */
		void ~CHandleTranslator(CHandleTranslator* );
	};
	/* tag__fprintf: const_type tag not supported! */;
};

// <06012080> ../public/meshutils/halfedgecomponentlist.h:61
// member functions: 43
// member variables: 4
// static member variables: 3
// class size: 72
class CHalfEdgeComponentList<CModelMesh::Face_t> {
	/* ../public/meshutils/halfedgecomponentlist.h:264 */
	struct ComponentEntry_t {
		Face_t m_Component; /* 0 24 */
		ReferenceIndex_t m_ReferenceIndex; /* 24 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:270 */
	struct ComponentReference_t {
		ComponentIndex_t m_nComponentIndex; /* 0 4 */
		ComponentHandle_t m_Handle; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:64 */
	typedef int ComponentIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
private:
	static const ComponentIndex_t s_InvalidComponentIndex = 18446744073709551615; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:65 */
	typedef unsigned int ReferenceIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const ReferenceIndex_t s_InvalidReferenceIndex = 4194303; /* 0 0 */
	static const unsigned int s_nMaxComponents = 4194303; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:382 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:396 */
	CHalfEdgeComponentList<CModelMesh::Face_t>& operator=(CHalfEdgeComponentList<CModelMesh::Face_t>* , const CHalfEdgeComponentList<CModelMesh::Face_t>& );
	/* ../public/meshutils/halfedgecomponentlist.h:413 */
	Face_t& operator[](CHalfEdgeComponentList<CModelMesh::Face_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:419 */
	const Face_t& operator[](const CHalfEdgeComponentList<CModelMesh::Face_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:190 */
	typedef struct ComponentHandleWithListPointer_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:85 */
	struct ComponentHandleWithListPointer_t {
		/* ../public/meshutils/halfedgecomponentlist.h:87 */
		bool operator==(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:92 */
		bool operator!=(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:97 */
		bool operator<(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:102 */
		bool operator>(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:107 */
		bool operator==(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:112 */
		bool operator!=(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:117 */
		ComponentHandleWithListPointer_t& operator=(ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:127 */
		ComponentHandleWithListPointer_t Invalid(void);
		/* ../public/meshutils/halfedgecomponentlist.h:137 */
		bool LessFunc(const ComponentHandleWithListPointer_t& , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:142 */
		uint32 AsInt(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:148 */
		void FromInt(ComponentHandleWithListPointer_t* , uint32, const CHalfEdgeComponentList<CModelMesh::Face_t>* );
		/* ../public/meshutils/halfedgecomponentlist.h:158 */
		int GetBaseIndex(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:166 */
		const CHalfEdgeComponentList<CModelMesh::Face_t>* GetList(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:171 */
		void SetList(ComponentHandleWithListPointer_t* , const CHalfEdgeComponentList<CModelMesh::Face_t>* );
		uint32 m_nIndex:22; /* 0: 0 4 */
		uint32 m_nVersion:10; /* 0:22 4 */
		const class CHalfEdgeComponentList<CModelMesh::Face_t> * m_pList; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:433 */
	ComponentHandle_t First(const CHalfEdgeComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:439 */
	ComponentHandle_t Next(const CHalfEdgeComponentList<CModelMesh::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:536 */
	ComponentIndex_t GetComponentIndex(const CHalfEdgeComponentList<CModelMesh::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:560 */
	void GetComponentIndices(const CHalfEdgeComponentList<CModelMesh::Face_t>* , int, const ComponentHandle_t* , ComponentIndex_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:464 */
	Face_t* GetComponent(CHalfEdgeComponentList<CModelMesh::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:474 */
	const Face_t* GetComponent(const CHalfEdgeComponentList<CModelMesh::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:487 */
	ComponentHandle_t GetComponentHandle(const CHalfEdgeComponentList<CModelMesh::Face_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:573 */
	int Count(const CHalfEdgeComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:583 */
	int MaxCount(void);
	/* ../public/meshutils/halfedgecomponentlist.h:593 */
	ComponentIndex_t InvalidIndex(void);
	/* ../public/meshutils/halfedgecomponentlist.h:603 */
	ComponentHandle_t InvalidHandle(const CHalfEdgeComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:620 */
	void EnsureCapacity(CHalfEdgeComponentList<CModelMesh::Face_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:633 */
	void SetCount(CHalfEdgeComponentList<CModelMesh::Face_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:668 */
	ComponentHandle_t AddComponent(CHalfEdgeComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:746 */
	void AddMultiple(CHalfEdgeComponentList<CModelMesh::Face_t>* , int, ComponentHandle_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:773 */
	void RemoveAll(CHalfEdgeComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:790 */
	void RemoveComponent(CHalfEdgeComponentList<CModelMesh::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:852 */
	bool CheckIntegrity(const CHalfEdgeComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:279 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CModelMesh::Face_t>* , const CHalfEdgeComponentList<CModelMesh::Face_t>& );
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int> > m_Components; /* 0 32 */
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int> > m_ReferenceTable; /* 32 32 */
	ReferenceIndex_t m_nFreeListHead; /* 64 4 */
	ReferenceIndex_t m_nFreeListTail; /* 68 4 */
	/* ../public/meshutils/halfedgecomponentlist.h:296 */
	class CHandleTranslator {
		/* ../public/meshutils/halfedgecomponentlist.h:299 */
		void CHandleTranslator(CHandleTranslator* );
		/* ../public/meshutils/halfedgecomponentlist.h:306 */
		void CHandleTranslator(CHandleTranslator* , const CHalfEdgeComponentList<CModelMesh::Face_t>& , const CHalfEdgeComponentList<CModelMesh::Face_t>& , int);
		/* ../public/meshutils/halfedgecomponentlist.h:314 */
		void Initialize(CHandleTranslator* , const CHalfEdgeComponentList<CModelMesh::Face_t>& , int* , int, const CHalfEdgeComponentList<CModelMesh::Face_t>& , int);
		/* ../public/meshutils/halfedgecomponentlist.h:339 */
		ComponentHandle_t TranslateHandle(const CHandleTranslator* , ComponentHandle_t);
		/* ../public/meshutils/halfedgecomponentlist.h:357 */
		void TranslateHandles(CHandleTranslator* , CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
	private:
		const class CHalfEdgeComponentList<CModelMesh::Face_t> * m_pSrcComponentList; /* 0 8 */
		const class CHalfEdgeComponentList<CModelMesh::Face_t> * m_pDstComponentList; /* 8 8 */
		CUtlVector<int, CUtlMemory<int, int> > m_nSrcIndexToDstIndex; /* 16 32 */
		void ~CHandleTranslator(CHandleTranslator* );
	};
	/* tag__fprintf: const_type tag not supported! */;
};

// <061B7EA8> ../public/meshutils/halfedgecomponentlist.h:61
// member functions: 37
// member variables: 4
// static member variables: 3
// class size: 72
class CHalfEdgeComponentList<CModelMesh::FaceVertex_t> {
	struct ComponentEntry_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:270 */
	struct ComponentReference_t {
		ComponentIndex_t m_nComponentIndex; /* 0 4 */
		ComponentHandle_t m_Handle; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:64 */
	typedef int ComponentIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
private:
	static const ComponentIndex_t s_InvalidComponentIndex = 18446744073709551615; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:65 */
	typedef unsigned int ReferenceIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	static const ReferenceIndex_t s_InvalidReferenceIndex = 4194303; /* 0 0 */
	static const unsigned int s_nMaxComponents; /* 0 0 */
	/* ../public/meshutils/halfedgecomponentlist.h:382 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:396 */
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>& operator=(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>& );
	/* ../public/meshutils/halfedgecomponentlist.h:413 */
	FaceVertex_t& operator[](CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:419 */
	const FaceVertex_t& operator[](const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:190 */
	typedef struct ComponentHandleWithListPointer_t ComponentHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:85 */
	struct ComponentHandleWithListPointer_t {
		/* ../public/meshutils/halfedgecomponentlist.h:87 */
		bool operator==(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:92 */
		bool operator!=(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:97 */
		bool operator<(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:102 */
		bool operator>(const ComponentHandleWithListPointer_t* , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:107 */
		bool operator==(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:112 */
		bool operator!=(const ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:117 */
		ComponentHandleWithListPointer_t& operator=(ComponentHandleWithListPointer_t* , InvalidMeshComponent_t);
		/* ../public/meshutils/halfedgecomponentlist.h:127 */
		ComponentHandleWithListPointer_t Invalid(void);
		/* ../public/meshutils/halfedgecomponentlist.h:137 */
		bool LessFunc(const ComponentHandleWithListPointer_t& , const ComponentHandleWithListPointer_t& );
		/* ../public/meshutils/halfedgecomponentlist.h:142 */
		uint32 AsInt(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:148 */
		void FromInt(ComponentHandleWithListPointer_t* , uint32, const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
		/* ../public/meshutils/halfedgecomponentlist.h:158 */
		int GetBaseIndex(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:166 */
		const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* GetList(const ComponentHandleWithListPointer_t* );
		/* ../public/meshutils/halfedgecomponentlist.h:171 */
		void SetList(ComponentHandleWithListPointer_t* , const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
		uint32 m_nIndex:22; /* 0: 0 4 */
		uint32 m_nVersion:10; /* 0:22 4 */
		const class CHalfEdgeComponentList<CModelMesh::FaceVertex_t> * m_pList; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/halfedgecomponentlist.h:433 */
	ComponentHandle_t First(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:439 */
	ComponentHandle_t Next(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:536 */
	ComponentIndex_t GetComponentIndex(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:560 */
	void GetComponentIndices(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , int, const ComponentHandle_t* , ComponentIndex_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:464 */
	FaceVertex_t* GetComponent(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:474 */
	const FaceVertex_t* GetComponent(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:487 */
	ComponentHandle_t GetComponentHandle(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:573 */
	int Count(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:583 */
	int MaxCount(void);
	/* ../public/meshutils/halfedgecomponentlist.h:593 */
	ComponentIndex_t InvalidIndex(void);
	/* ../public/meshutils/halfedgecomponentlist.h:603 */
	ComponentHandle_t InvalidHandle(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:620 */
	void EnsureCapacity(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:633 */
	void SetCount(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , int);
	/* ../public/meshutils/halfedgecomponentlist.h:668 */
	ComponentHandle_t AddComponent(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:746 */
	void AddMultiple(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , int, ComponentHandle_t* );
	/* ../public/meshutils/halfedgecomponentlist.h:773 */
	void RemoveAll(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:790 */
	void RemoveComponent(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/halfedgecomponentlist.h:852 */
	bool CheckIntegrity(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/halfedgecomponentlist.h:279 */
	void CHalfEdgeComponentList(CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* , const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>& );
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int> > m_Components; /* 0 32 */
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int> > m_ReferenceTable; /* 32 32 */
	ReferenceIndex_t m_nFreeListHead; /* 64 4 */
	ReferenceIndex_t m_nFreeListTail; /* 68 4 */
	class CHandleTranslator {
	};
};

// <05EE9381> ../public/meshutils/halfedgecomponentlist.h:97
inline void ComponentHandleWithListPointer_t::operator<(const ComponentHandleWithListPointer_t& src)
{
} /* size: 0 */

// <05F7875F> ../public/meshutils/halfedgecomponentlist.h:102
inline void ComponentHandleWithListPointer_t::operator>(const ComponentHandleWithListPointer_t& src)
{
} /* size: 0 */

// <06092DE8> ../public/meshutils/halfedgecomponentlist.h:117
inline void ComponentHandleWithListPointer_t::operator=(InvalidMeshComponent_t)
{
} /* size: 0 */

// <0606ECC4> ../public/meshutils/halfedgecomponentlist.h:127
// variable: 1
inline void Invalid(void)
{
	const ComponentHandleWithListPointer_t  invalidHandle; // 130
} /* size: 0, variables: 1 */

// <06095E2F> ../public/meshutils/halfedgecomponentlist.h:142
// variable: 1
inline void ComponentHandleWithListPointer_t::AsInt()
{
	int nValue; // 144
} /* size: 0, variables: 1 */

// <0606EC6F> ../public/meshutils/halfedgecomponentlist.h:148
inline void ComponentHandleWithListPointer_t::FromInt(uint32 nBits, const CHalfEdgeComponentList<CModelMesh::Vertex_t>* pList)
{
} /* size: 0 */

// <0606DD87> ../public/meshutils/halfedgecomponentlist.h:148
inline void ComponentHandleWithListPointer_t::FromInt(uint32 nBits, const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* pList)
{
} /* size: 0 */

// <0606CE7B> ../public/meshutils/halfedgecomponentlist.h:148
inline void ComponentHandleWithListPointer_t::FromInt(uint32 nBits, const CHalfEdgeComponentList<CModelMesh::Edge_t>* pList)
{
} /* size: 0 */

// <0606BF93> ../public/meshutils/halfedgecomponentlist.h:148
inline void ComponentHandleWithListPointer_t::FromInt(uint32 nBits, const CHalfEdgeComponentList<CModelMesh::Face_t>* pList)
{
} /* size: 0 */

// <05F79A00> ../public/meshutils/halfedgecomponentlist.h:158
// variables: 3
inline void ComponentHandleWithListPointer_t::GetBaseIndex()
{
	const char   __FUNCTION__; // 36417
	int nIndex; // 160
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 161
	}
} /* size: 0, variables: 2 */

// <05EDE221> ../public/meshutils/halfedgecomponentlist.h:264
void ComponentEntry_t::~ComponentEntry_t()
{
} /* size: 0 */

// <05EDE204> ../public/meshutils/halfedgecomponentlist.h:264
inline void ComponentEntry_t::~ComponentEntry_t()
{
} /* size: 0 */

// <05EDC17E> ../public/meshutils/halfedgecomponentlist.h:264
void ComponentEntry_t::ComponentEntry_t(const ComponentEntry_t &)
{
} /* size: 0 */

// <05EDC15C> ../public/meshutils/halfedgecomponentlist.h:264
inline void ComponentEntry_t::ComponentEntry_t(const ComponentEntry_t &)
{
} /* size: 0 */

// <05EDC118> ../public/meshutils/halfedgecomponentlist.h:264
inline void ComponentEntry_t::operator=(const ComponentEntry_t &)
{
} /* size: 0 */

// <05ED697E> ../public/meshutils/halfedgecomponentlist.h:264
void ComponentEntry_t::ComponentEntry_t()
{
} /* size: 0 */

// <05ED6961> ../public/meshutils/halfedgecomponentlist.h:264
inline void ComponentEntry_t::ComponentEntry_t()
{
} /* size: 0 */

// <060CFC91> ../public/meshutils/halfedgecomponentlist.h:296
void CHandleTranslator::~CHandleTranslator()
{
} /* size: 0 */

// <060CFC74> ../public/meshutils/halfedgecomponentlist.h:296
inline void CHandleTranslator::~CHandleTranslator()
{
} /* size: 0 */

// <0609332C> ../public/meshutils/halfedgecomponentlist.h:299
void CHandleTranslator::CHandleTranslator()
{
} /* size: 0 */

// <06093313> ../public/meshutils/halfedgecomponentlist.h:299
inline void CHandleTranslator::CHandleTranslator()
{
} /* size: 0 */

// <0608829C> ../public/meshutils/halfedgecomponentlist.h:314
// variables: 3
inline void CHandleTranslator::Initialize(const CHalfEdgeComponentList<CModelMesh::Vertex_t>& srcComponentList, int* pSrcIndices, int nNumSrcIndices, const CHalfEdgeComponentList<CModelMesh::Vertex_t>& dstComponentList, int nDstOffset)
{
	const int  nNumSrcComponents; // 319
	{
		int i; // 325
	}
	{
		int i; // 332
	}
} /* size: 0, variables: 1 */

// <06087E17> ../public/meshutils/halfedgecomponentlist.h:314
// variables: 3
inline void CHandleTranslator::Initialize(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>& srcComponentList, int* pSrcIndices, int nNumSrcIndices, const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>& dstComponentList, int nDstOffset)
{
	const int  nNumSrcComponents; // 319
	{
		int i; // 325
	}
	{
		int i; // 332
	}
} /* size: 0, variables: 1 */

// <06087992> ../public/meshutils/halfedgecomponentlist.h:314
// variables: 3
inline void CHandleTranslator::Initialize(const CHalfEdgeComponentList<CModelMesh::Edge_t>& srcComponentList, int* pSrcIndices, int nNumSrcIndices, const CHalfEdgeComponentList<CModelMesh::Edge_t>& dstComponentList, int nDstOffset)
{
	const int  nNumSrcComponents; // 319
	{
		int i; // 325
	}
	{
		int i; // 332
	}
} /* size: 0, variables: 1 */

// <06087526> ../public/meshutils/halfedgecomponentlist.h:314
// variables: 3
inline void CHandleTranslator::Initialize(const CHalfEdgeComponentList<CModelMesh::Face_t>& srcComponentList, int* pSrcIndices, int nNumSrcIndices, const CHalfEdgeComponentList<CModelMesh::Face_t>& dstComponentList, int nDstOffset)
{
	const int  nNumSrcComponents; // 319
	{
		int i; // 325
	}
	{
		int i; // 332
	}
} /* size: 0, variables: 1 */

// <06092EF3> ../public/meshutils/halfedgecomponentlist.h:339
// variables: 3
inline void CHandleTranslator::TranslateHandle(ComponentHandle_t hSrcComponent)
{
	ComponentHandle_t hDstComponent; // 341
	{
		const int  nSrcIndex; // 346
		const int  nDstIndex; // 347
	}
} /* size: 0, variables: 1 */

// <05F74F5D> ../public/meshutils/halfedgecomponentlist.h:382
void CHalfEdgeComponentList<CModelMesh::Vertex_t>::CHalfEdgeComponentList()
{
} /* size: 0 */

// <05F74ED3> ../public/meshutils/halfedgecomponentlist.h:382
void CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::CHalfEdgeComponentList()
{
} /* size: 0 */

// <05F74E49> ../public/meshutils/halfedgecomponentlist.h:382
void CHalfEdgeComponentList<CModelMesh::Edge_t>::CHalfEdgeComponentList()
{
} /* size: 0 */

// <05F74DBF> ../public/meshutils/halfedgecomponentlist.h:382
void CHalfEdgeComponentList<CModelMesh::Face_t>::CHalfEdgeComponentList()
{
} /* size: 0 */

// <05EE9B2B> ../public/meshutils/halfedgecomponentlist.h:382
void CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::CHalfEdgeComponentList()
{
} /* size: 0 */

// <05EE9AFB> ../public/meshutils/halfedgecomponentlist.h:382
void CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::CHalfEdgeComponentList()
{
} /* size: 0 */

// <05EE9ACB> ../public/meshutils/halfedgecomponentlist.h:382
void CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>::CHalfEdgeComponentList()
{
} /* size: 0 */

// <05E661CE> ../public/meshutils/halfedgecomponentlist.h:382
void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::CHalfEdgeComponentList()
{
} /* size: 0 */

// <05E6619E> ../public/meshutils/halfedgecomponentlist.h:382
void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::CHalfEdgeComponentList()
{
} /* size: 0 */

// <05E6616E> ../public/meshutils/halfedgecomponentlist.h:382
void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::CHalfEdgeComponentList()
{
} /* size: 0 */

// <05DE15FD> ../public/meshutils/halfedgecomponentlist.h:382
void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::CHalfEdgeComponentList()
{
} /* size: 0 */

// <05DE15CD> ../public/meshutils/halfedgecomponentlist.h:382
void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::CHalfEdgeComponentList()
{
} /* size: 0 */

// <05DE159D> ../public/meshutils/halfedgecomponentlist.h:382
void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::CHalfEdgeComponentList()
{
} /* size: 0 */

// <05F74C7E> ../public/meshutils/halfedgecomponentlist.h:396
void CHalfEdgeComponentList<CModelMesh::Face_t>::operator=(const CHalfEdgeComponentList<CModelMesh::Face_t>& src)
{
} /* size: 0 */

// <05F74C0B> ../public/meshutils/halfedgecomponentlist.h:396
void CHalfEdgeComponentList<CModelMesh::Vertex_t>::operator=(const CHalfEdgeComponentList<CModelMesh::Vertex_t>& src)
{
} /* size: 0 */

// <05F74B98> ../public/meshutils/halfedgecomponentlist.h:396
void CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::operator=(const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>& src)
{
} /* size: 0 */

// <05F74B25> ../public/meshutils/halfedgecomponentlist.h:396
void CHalfEdgeComponentList<CModelMesh::Edge_t>::operator=(const CHalfEdgeComponentList<CModelMesh::Edge_t>& src)
{
} /* size: 0 */

// <05F6EFB5> ../public/meshutils/halfedgecomponentlist.h:413
inline void CHalfEdgeComponentList<CModelMesh::Face_t>::operator[](int nIndex)
{
} /* size: 0 */

// <05F6EC30> ../public/meshutils/halfedgecomponentlist.h:419
inline void CHalfEdgeComponentList<CModelMesh::Vertex_t>::operator[](int nIndex)
{
} /* size: 0 */

// <05F6EC0A> ../public/meshutils/halfedgecomponentlist.h:419
inline void CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::operator[](int nIndex)
{
} /* size: 0 */

// <05F6EBE4> ../public/meshutils/halfedgecomponentlist.h:419
inline void CHalfEdgeComponentList<CModelMesh::Edge_t>::operator[](int nIndex)
{
} /* size: 0 */

// <05EE95A5> ../public/meshutils/halfedgecomponentlist.h:433
inline void First(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t> this)
{
} /* size: 0 */

// <05E65E77> ../public/meshutils/halfedgecomponentlist.h:433
inline void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::First()
{
} /* size: 0 */

// <05E5D883> ../public/meshutils/halfedgecomponentlist.h:433
inline void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::First()
{
} /* size: 0 */

// <05E5D76C> ../public/meshutils/halfedgecomponentlist.h:433
inline void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::First()
{
} /* size: 0 */

// <05EE953F> ../public/meshutils/halfedgecomponentlist.h:439
// variables: 2
inline void Next(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t> this, ComponentHandle_t handle)
{
	ReferenceIndex_t nReferenceIndex; // 441
	int nNumReferences; // 443
} /* size: 0, variables: 2 */

// <05EE3698> ../public/meshutils/halfedgecomponentlist.h:439
// variables: 2
inline void Next(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this, ComponentHandle_t handle)
{
	ReferenceIndex_t nReferenceIndex; // 441
	int nNumReferences; // 443
} /* size: 0, variables: 2 */

// <05E65E11> ../public/meshutils/halfedgecomponentlist.h:439
// variables: 2
inline void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Next(ComponentHandle_t handle)
{
	ReferenceIndex_t nReferenceIndex; // 441
	int nNumReferences; // 443
} /* size: 0, variables: 2 */

// <05E5D81D> ../public/meshutils/halfedgecomponentlist.h:439
// variables: 2
inline void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Next(ComponentHandle_t handle)
{
	ReferenceIndex_t nReferenceIndex; // 441
	int nNumReferences; // 443
} /* size: 0, variables: 2 */

// <05E5D706> ../public/meshutils/halfedgecomponentlist.h:439
// variables: 2
inline void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::Next(ComponentHandle_t handle)
{
	ReferenceIndex_t nReferenceIndex; // 441
	int nNumReferences; // 443
} /* size: 0, variables: 2 */

// <05F6E830> ../public/meshutils/halfedgecomponentlist.h:464
// variable: 1
inline void CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponent(ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 466
} /* size: 0, variables: 1 */

// <05F6E7CA> ../public/meshutils/halfedgecomponentlist.h:464
// variable: 1
inline void CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponent(ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 466
} /* size: 0, variables: 1 */

// <05F6E764> ../public/meshutils/halfedgecomponentlist.h:464
// variable: 1
inline void CHalfEdgeComponentList<CModelMesh::Edge_t>::GetComponent(ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 466
} /* size: 0, variables: 1 */

// <05F6E6FE> ../public/meshutils/halfedgecomponentlist.h:464
// variable: 1
inline void CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponent(ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 466
} /* size: 0, variables: 1 */

// <05F11B6F> ../public/meshutils/halfedgecomponentlist.h:464
// variable: 1
// function calls: 7
void CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::GetComponent(ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 466
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
				ComponentHandle_t handle);  // 466
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
			int i);  // 470
} /* size: 83, variables: 1, inline expansions: 7 (128 bytes) */

// <05EE4063> ../public/meshutils/halfedgecomponentlist.h:464
// variable: 1
inline void CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::GetComponent(ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 466
} /* size: 0, variables: 1 */

// <05EE3761> ../public/meshutils/halfedgecomponentlist.h:464
// variable: 1
inline void CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>::GetComponent(ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 466
} /* size: 0, variables: 1 */

// <05EE3580> ../public/meshutils/halfedgecomponentlist.h:464
// variable: 1
inline void CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::GetComponent(ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 466
} /* size: 0, variables: 1 */

// <05E83C4B> ../public/meshutils/halfedgecomponentlist.h:464
// variable: 1
// function calls: 7
void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::GetComponent(ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 466
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this); // 541
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t> this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 466
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::Comp this,
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>:: this,
			int i);  // 470
} /* size: 91, variables: 1, inline expansions: 7 (136 bytes) */

// <05E5CC71> ../public/meshutils/halfedgecomponentlist.h:464
// variable: 1
inline void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::GetComponent(ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 466
} /* size: 0, variables: 1 */

// <05E5BCB1> ../public/meshutils/halfedgecomponentlist.h:464
// variable: 1
inline void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::GetComponent(ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 466
} /* size: 0, variables: 1 */

// <05E590F1> ../public/meshutils/halfedgecomponentlist.h:464
// variable: 1
inline void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::GetComponent(ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 466
} /* size: 0, variables: 1 */

// <05E01DA3> ../public/meshutils/halfedgecomponentlist.h:464
// variable: 1
// function calls: 7
void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::GetComponent(ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 466
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, this); // 541
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, int this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 466
	CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, CUtlMemor this,
			int i);  // 470
} /* size: 83, variables: 1, inline expansions: 7 (128 bytes) */

// <05E01BAA> ../public/meshutils/halfedgecomponentlist.h:464
// variable: 1
// function calls: 7
void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::GetComponent(ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 466
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReferenc this); // 541
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReferenc this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 466
	CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, CUtlM this,
			int i);  // 470
} /* size: 91, variables: 1, inline expansions: 7 (136 bytes) */

// <05E019B1> ../public/meshutils/halfedgecomponentlist.h:464
// variable: 1
// function calls: 7
void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::GetComponent(ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 466
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_ this); // 541
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, i this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_ this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 466
	CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, CUtlMem this,
			int i);  // 470
} /* size: 83, variables: 1, inline expansions: 7 (128 bytes) */

// <05DD717A> ../public/meshutils/halfedgecomponentlist.h:464
// variable: 1
inline void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::GetComponent(ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 466
} /* size: 0, variables: 1 */

// <05DD67E7> ../public/meshutils/halfedgecomponentlist.h:464
// variable: 1
inline void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::GetComponent(ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 466
} /* size: 0, variables: 1 */

// <05DD5F19> ../public/meshutils/halfedgecomponentlist.h:464
// variable: 1
inline void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::GetComponent(ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 466
} /* size: 0, variables: 1 */

// <05F6E7FD> ../public/meshutils/halfedgecomponentlist.h:474
// variable: 1
inline void CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponent(ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 476
} /* size: 0, variables: 1 */

// <05F6E797> ../public/meshutils/halfedgecomponentlist.h:474
// variable: 1
inline void CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponent(ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 476
} /* size: 0, variables: 1 */

// <05F6E731> ../public/meshutils/halfedgecomponentlist.h:474
// variable: 1
inline void CHalfEdgeComponentList<CModelMesh::Edge_t>::GetComponent(ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 476
} /* size: 0, variables: 1 */

// <05F6E6CB> ../public/meshutils/halfedgecomponentlist.h:474
// variable: 1
inline void CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponent(ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 476
} /* size: 0, variables: 1 */

// <05EE4030> ../public/meshutils/halfedgecomponentlist.h:474
// variable: 1
inline void GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t> this, ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 476
} /* size: 0, variables: 1 */

// <05EE3FFD> ../public/meshutils/halfedgecomponentlist.h:474
// variable: 1
inline void GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this, ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 476
} /* size: 0, variables: 1 */

// <05EE3FA4> ../public/meshutils/halfedgecomponentlist.h:474
// variable: 1
inline void GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t this, ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 476
} /* size: 0, variables: 1 */

// <05E5CC3E> ../public/meshutils/halfedgecomponentlist.h:474
// variable: 1
inline void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::GetComponent(ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 476
} /* size: 0, variables: 1 */

// <05E5C1C7> ../public/meshutils/halfedgecomponentlist.h:474
// variable: 1
inline void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::GetComponent(ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 476
} /* size: 0, variables: 1 */

// <05E54638> ../public/meshutils/halfedgecomponentlist.h:474
// variable: 1
inline void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::GetComponent(ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 476
} /* size: 0, variables: 1 */

// <05E00C03> ../public/meshutils/halfedgecomponentlist.h:474
// variable: 1
// function calls: 7
void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::GetComponent(ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 476
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReferenc this); // 541
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReferenc this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 476
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, int this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, this,
			int i);  // 480
} /* size: 91, variables: 1, inline expansions: 7 (136 bytes) */

// <05DD8DED> ../public/meshutils/halfedgecomponentlist.h:474
// variable: 1
inline void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::GetComponent(ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 476
} /* size: 0, variables: 1 */

// <05DD8D7D> ../public/meshutils/halfedgecomponentlist.h:474
// variable: 1
inline void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::GetComponent(ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 476
} /* size: 0, variables: 1 */

// <05DD8D4A> ../public/meshutils/halfedgecomponentlist.h:474
// variable: 1
inline void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::GetComponent(ComponentHandle_t handle)
{
	ComponentIndex_t nComponentIndex; // 476
} /* size: 0, variables: 1 */

// <060873CE> ../public/meshutils/halfedgecomponentlist.h:487
// variables: 3
inline void CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentHandle(int nIndex)
{
	const char   __FUNCTION__; // 12094
	const ComponentReference_t& compRef; // 492
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 495
	}
} /* size: 0, variables: 2 */

// <06087321> ../public/meshutils/halfedgecomponentlist.h:487
// variables: 3
inline void CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentHandle(int nIndex)
{
	const char   __FUNCTION__; // 12094
	const ComponentReference_t& compRef; // 492
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 495
	}
} /* size: 0, variables: 2 */

// <06087274> ../public/meshutils/halfedgecomponentlist.h:487
// variables: 3
inline void CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponentHandle(int nIndex)
{
	const char   __FUNCTION__; // 12094
	const ComponentReference_t& compRef; // 492
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 495
	}
} /* size: 0, variables: 2 */

// <060871C7> ../public/meshutils/halfedgecomponentlist.h:487
// variables: 3
inline void CHalfEdgeComponentList<CModelMesh::Edge_t>::GetComponentHandle(int nIndex)
{
	const char   __FUNCTION__; // 12094
	const ComponentReference_t& compRef; // 492
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 495
	}
} /* size: 0, variables: 2 */

// <05F72BA8> ../public/meshutils/halfedgecomponentlist.h:487
// variables: 3
inline void CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentHandle(int nIndex)
{
	const char   __FUNCTION__; // 36569
	const ComponentReference_t& compRef; // 492
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 495
	}
} /* size: 0, variables: 2 */

// <05F71498> ../public/meshutils/halfedgecomponentlist.h:487
// variables: 3
inline void CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponentHandle(int nIndex)
{
	const char   __FUNCTION__; // 36569
	const ComponentReference_t& compRef; // 492
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 495
	}
} /* size: 0, variables: 2 */

// <05F7131F> ../public/meshutils/halfedgecomponentlist.h:487
// variables: 3
inline void CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentHandle(int nIndex)
{
	const char   __FUNCTION__; // 36569
	const ComponentReference_t& compRef; // 492
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 495
	}
} /* size: 0, variables: 2 */

// <05F71193> ../public/meshutils/halfedgecomponentlist.h:487
// variables: 3
inline void CHalfEdgeComponentList<CModelMesh::Edge_t>::GetComponentHandle(int nIndex)
{
	const char   __FUNCTION__; // 36569
	const ComponentReference_t& compRef; // 492
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 495
	}
} /* size: 0, variables: 2 */

// <05F7B946> ../public/meshutils/halfedgecomponentlist.h:506
// variables: 5
void GetComponentHandles<CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > CHalfEdgeComponentList<CModelMesh::Vertex_t>::>(CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL handleVector)
{
	const char   __FUNCTION__; // 36596
	int nNumComponents; // 508
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 514
	}
	{
		int iComp; // 518
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 522
		}
	}
} /* size: 0, variables: 2 */

// <05F798C6> ../public/meshutils/halfedgecomponentlist.h:506
// variables: 5
void GetComponentHandles<CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::>(CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon handleVector)
{
	const char   __FUNCTION__; // 36596
	int nNumComponents; // 508
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 514
	}
	{
		int iComp; // 518
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 522
		}
	}
} /* size: 0, variables: 2 */

// <05F7977E> ../public/meshutils/halfedgecomponentlist.h:506
// variables: 5
void GetComponentHandles<CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int> > CHalfEdgeComponentList<CModelMesh::Edge_t>::>(CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis handleVector)
{
	const char   __FUNCTION__; // 36596
	int nNumComponents; // 508
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 514
	}
	{
		int iComp; // 518
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 522
		}
	}
} /* size: 0, variables: 2 */

// <05F786AF> ../public/meshutils/halfedgecomponentlist.h:506
// variables: 5
void GetComponentHandles<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > CHalfEdgeComponentList<CModelMesh::Face_t>::>(CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis handleVector)
{
	const char   __FUNCTION__; // 36596
	int nNumComponents; // 508
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 514
	}
	{
		int iComp; // 518
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 522
		}
	}
} /* size: 0, variables: 2 */

// <061D25D6> ../public/meshutils/halfedgecomponentlist.h:536
// variable: 1
void CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentIndex(ComponentHandle_t handle)
{
	const ComponentReference_t& compRef; // 546
} /* size: 0, variables: 1 */

// <061D25A3> ../public/meshutils/halfedgecomponentlist.h:536
// variable: 1
void CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(ComponentHandle_t handle)
{
	const ComponentReference_t& compRef; // 546
} /* size: 0, variables: 1 */

// <060872D0> ../public/meshutils/halfedgecomponentlist.h:536
// variable: 1
void CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponentIndex(ComponentHandle_t handle)
{
	const ComponentReference_t& compRef; // 546
} /* size: 0, variables: 1 */

// <06087223> ../public/meshutils/halfedgecomponentlist.h:536
// variable: 1
void CHalfEdgeComponentList<CModelMesh::Edge_t>::GetComponentIndex(ComponentHandle_t handle)
{
	const ComponentReference_t& compRef; // 546
} /* size: 0, variables: 1 */

// <05EDE7F8> ../public/meshutils/halfedgecomponentlist.h:536
// variable: 1
void GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this, ComponentHandle_t handle)
{
	const ComponentReference_t& compRef; // 546
} /* size: 0, variables: 1 */

// <05EDE7A1> ../public/meshutils/halfedgecomponentlist.h:536
// variable: 1
void GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t> this, ComponentHandle_t handle)
{
	const ComponentReference_t& compRef; // 546
} /* size: 0, variables: 1 */

// <05EDE726> ../public/meshutils/halfedgecomponentlist.h:536
// variable: 1
void GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t this, ComponentHandle_t handle)
{
	const ComponentReference_t& compRef; // 546
} /* size: 0, variables: 1 */

// <05E55321> ../public/meshutils/halfedgecomponentlist.h:536
// variable: 1
void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::GetComponentIndex(ComponentHandle_t handle)
{
	const ComponentReference_t& compRef; // 546
} /* size: 0, variables: 1 */

// <05E54984> ../public/meshutils/halfedgecomponentlist.h:536
// variable: 1
void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::GetComponentIndex(ComponentHandle_t handle)
{
	const ComponentReference_t& compRef; // 546
} /* size: 0, variables: 1 */

// <05E52707> ../public/meshutils/halfedgecomponentlist.h:536
// variable: 1
void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::GetComponentIndex(ComponentHandle_t handle)
{
	const ComponentReference_t& compRef; // 546
} /* size: 0, variables: 1 */

// <05DC8166> ../public/meshutils/halfedgecomponentlist.h:536
// variable: 1
void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::GetComponentIndex(ComponentHandle_t handle)
{
	const ComponentReference_t& compRef; // 546
} /* size: 0, variables: 1 */

// <05DC80EB> ../public/meshutils/halfedgecomponentlist.h:536
// variable: 1
void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::GetComponentIndex(ComponentHandle_t handle)
{
	const ComponentReference_t& compRef; // 546
} /* size: 0, variables: 1 */

// <05DC8094> ../public/meshutils/halfedgecomponentlist.h:536
// variable: 1
void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::GetComponentIndex(ComponentHandle_t handle)
{
	const ComponentReference_t& compRef; // 546
} /* size: 0, variables: 1 */

// <06088C84> ../public/meshutils/halfedgecomponentlist.h:560
// variable: 1
void CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentIndices(const int nCount, const ComponentHandle_t* pComponents, ComponentIndex_t* pOutIndices)
{
	{
		int i; // 562
	}
} /* size: 0 */

// <06088321> ../public/meshutils/halfedgecomponentlist.h:573
inline void CHalfEdgeComponentList<CModelMesh::Vertex_t>::Count()
{
} /* size: 0 */

// <06087E9C> ../public/meshutils/halfedgecomponentlist.h:573
inline void CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::Count()
{
} /* size: 0 */

// <06087A17> ../public/meshutils/halfedgecomponentlist.h:573
inline void CHalfEdgeComponentList<CModelMesh::Edge_t>::Count()
{
} /* size: 0 */

// <060875AB> ../public/meshutils/halfedgecomponentlist.h:573
inline void CHalfEdgeComponentList<CModelMesh::Face_t>::Count()
{
} /* size: 0 */

// <05EE95FD> ../public/meshutils/halfedgecomponentlist.h:573
inline void Count(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t> this)
{
} /* size: 0 */

// <05EE92AE> ../public/meshutils/halfedgecomponentlist.h:573
inline void Count(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t this)
{
} /* size: 0 */

// <05ED9392> ../public/meshutils/halfedgecomponentlist.h:573
inline void Count(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this)
{
} /* size: 0 */

// <05E65DF8> ../public/meshutils/halfedgecomponentlist.h:573
inline void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Count()
{
} /* size: 0 */

// <05E64FC8> ../public/meshutils/halfedgecomponentlist.h:573
inline void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Count()
{
} /* size: 0 */

// <05E64F4F> ../public/meshutils/halfedgecomponentlist.h:573
inline void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::Count()
{
} /* size: 0 */

// <05DE21D9> ../public/meshutils/halfedgecomponentlist.h:573
inline void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::Count()
{
} /* size: 0 */

// <05DE21C0> ../public/meshutils/halfedgecomponentlist.h:573
inline void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::Count()
{
} /* size: 0 */

// <05F705D5> ../public/meshutils/halfedgecomponentlist.h:583
inline void MaxCount(void)
{
} /* size: 0 */

// <0607B495> ../public/meshutils/halfedgecomponentlist.h:603
// variable: 1
inline void CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::InvalidHandle()
{
	ComponentHandle_t invalidHandle; // 606
} /* size: 0, variables: 1 */

// <0607B3EA> ../public/meshutils/halfedgecomponentlist.h:603
// variable: 1
inline void CHalfEdgeComponentList<CModelMesh::Vertex_t>::InvalidHandle()
{
	ComponentHandle_t invalidHandle; // 606
} /* size: 0, variables: 1 */

// <0607B33E> ../public/meshutils/halfedgecomponentlist.h:603
// variable: 1
inline void CHalfEdgeComponentList<CModelMesh::Face_t>::InvalidHandle()
{
	ComponentHandle_t invalidHandle; // 606
} /* size: 0, variables: 1 */

// <0607B292> ../public/meshutils/halfedgecomponentlist.h:603
// variable: 1
inline void CHalfEdgeComponentList<CModelMesh::Edge_t>::InvalidHandle()
{
	ComponentHandle_t invalidHandle; // 606
} /* size: 0, variables: 1 */

// <05EE9DA3> ../public/meshutils/halfedgecomponentlist.h:603
// variable: 1
inline void InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this)
{
	ComponentHandle_t invalidHandle; // 606
} /* size: 0, variables: 1 */

// <05EE957F> ../public/meshutils/halfedgecomponentlist.h:603
// variable: 1
inline void InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t> this)
{
	ComponentHandle_t invalidHandle; // 606
} /* size: 0, variables: 1 */

// <05EE3FD7> ../public/meshutils/halfedgecomponentlist.h:603
// variable: 1
inline void InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t this)
{
	ComponentHandle_t invalidHandle; // 606
} /* size: 0, variables: 1 */

// <05E65E51> ../public/meshutils/halfedgecomponentlist.h:603
// variable: 1
inline void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::InvalidHandle()
{
	ComponentHandle_t invalidHandle; // 606
} /* size: 0, variables: 1 */

// <05E5D85D> ../public/meshutils/halfedgecomponentlist.h:603
// variable: 1
inline void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::InvalidHandle()
{
	ComponentHandle_t invalidHandle; // 606
} /* size: 0, variables: 1 */

// <05E5D746> ../public/meshutils/halfedgecomponentlist.h:603
// variable: 1
inline void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::InvalidHandle()
{
	ComponentHandle_t invalidHandle; // 606
} /* size: 0, variables: 1 */

// <05DE219A> ../public/meshutils/halfedgecomponentlist.h:603
// variable: 1
inline void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::InvalidHandle()
{
	ComponentHandle_t invalidHandle; // 606
} /* size: 0, variables: 1 */

// <05DE2174> ../public/meshutils/halfedgecomponentlist.h:603
// variable: 1
inline void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::InvalidHandle()
{
	ComponentHandle_t invalidHandle; // 606
} /* size: 0, variables: 1 */

// <05DE210D> ../public/meshutils/halfedgecomponentlist.h:603
// variable: 1
inline void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::InvalidHandle()
{
	ComponentHandle_t invalidHandle; // 606
} /* size: 0, variables: 1 */

// <0607E7FD> ../public/meshutils/halfedgecomponentlist.h:620
// function calls: 10
void CHalfEdgeComponentList<CModelMesh::Vertex_t>::EnsureCapacity(int nCount)
{
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::IsGrowable(); // 881
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this); // 1024
	EnsureCapacity(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this,
			int num);  // 622
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::IsGrowable(); // 881
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this); // 1024
	EnsureCapacity(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this,
			int num);  // 623
} /* size: 0, inline expansions: 10 (0 bytes) */

// <0607DA5C> ../public/meshutils/halfedgecomponentlist.h:620
// function calls: 10
void CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::EnsureCapacity(int nCount)
{
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::IsGrowable(); // 881
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 1024
	EnsureCapacity(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
			int num);  // 622
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::IsGrowable(); // 881
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 1024
	EnsureCapacity(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
			int num);  // 623
} /* size: 0, inline expansions: 10 (0 bytes) */

// <0607CCBA> ../public/meshutils/halfedgecomponentlist.h:620
// function calls: 10
void CHalfEdgeComponentList<CModelMesh::Edge_t>::EnsureCapacity(int nCount)
{
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::IsGrowable(); // 881
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 1024
	EnsureCapacity(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			int num);  // 622
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::IsGrowable(); // 881
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this); // 1024
	EnsureCapacity(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
			int num);  // 623
} /* size: 0, inline expansions: 10 (0 bytes) */

// <0607BF19> ../public/meshutils/halfedgecomponentlist.h:620
// function calls: 10
void CHalfEdgeComponentList<CModelMesh::Face_t>::EnsureCapacity(int nCount)
{
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::IsGrowable(); // 881
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 1024
	EnsureCapacity(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			int num);  // 622
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::IsGrowable(); // 881
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this); // 1024
	EnsureCapacity(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
			int num);  // 623
} /* size: 0, inline expansions: 10 (0 bytes) */

// <05F70625> ../public/meshutils/halfedgecomponentlist.h:620
void CHalfEdgeComponentList<CModelMesh::Face_t>::EnsureCapacity(int nCount)
{
} /* size: 0 */

// <05F705FF> ../public/meshutils/halfedgecomponentlist.h:620
void CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::EnsureCapacity(int nCount)
{
} /* size: 0 */

// <05DD7A2A> ../public/meshutils/halfedgecomponentlist.h:620
// function calls: 10
void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::EnsureCapacity(int nCount)
{
	IsGrowable(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, int> this); // 881
	IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, int> this); // 888
	CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, CUtlMem this); // 1024
	EnsureCapacity(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, CUtlMem this,
			int num);  // 622
	IsGrowable(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, i this); // 881
	IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, i this); // 888
	CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, CUt this); // 1024
	EnsureCapacity(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, CUt this,
			int num);  // 623
} /* size: 257, inline expansions: 10 (519 bytes) */

// <0607DF7F> ../public/meshutils/halfedgecomponentlist.h:668
// variables: 10
// function calls: 32
void CHalfEdgeComponentList<CModelMesh::Vertex_t>::AddComponent()
{
	const char   __FUNCTION__; // 11947
	int nComponentIndex; // 675
	ComponentHandle_t newComponentHandle; // 682
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 680
	}
	{
		ComponentReference_t& compRef; // 691
		ReferenceIndex_t nRefIndex; // 692
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 706
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this,
				int i);  // 691
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this,
				int i);  // 706
	}
	{
		int nReferenceIndex; // 718
		ComponentReference_t& compRef; // 719
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 713
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::NumAllocated(); // 1143
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this); // 824
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::IsGrowable(); // 823
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::Grow(
			int num);  // 806
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this); // 718
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this,
				int i);  // 719
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentL this); // 670
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::InvalidHandle(); // 671
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::NumAllocated(); // 1143
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::IsGrowable(); // 823
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::Grow(
		int num);  // 806
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this); // 675
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 680
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 689
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this,
			int i);  // 730
} /* size: 0, variables: 3, inline expansions: 16 (0 bytes) */

// <0607D1DE> ../public/meshutils/halfedgecomponentlist.h:668
// variables: 10
// function calls: 32
void CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::AddComponent()
{
	const char   __FUNCTION__; // 11947
	int nComponentIndex; // 675
	ComponentHandle_t newComponentHandle; // 682
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 680
	}
	{
		ComponentReference_t& compRef; // 691
		ReferenceIndex_t nRefIndex; // 692
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 706
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
				int i);  // 691
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
				int i);  // 706
	}
	{
		int nReferenceIndex; // 718
		ComponentReference_t& compRef; // 719
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 713
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::NumAllocated(); // 1143
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 824
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::IsGrowable(); // 823
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::Grow(
			int num);  // 806
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 718
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
				int i);  // 719
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeCompon this); // 670
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::InvalidHandle(); // 671
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::NumAllocated(); // 1143
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::IsGrowable(); // 823
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::Grow(
		int num);  // 806
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 675
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 680
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 689
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
			int i);  // 730
} /* size: 0, variables: 3, inline expansions: 16 (0 bytes) */

// <0607C43B> ../public/meshutils/halfedgecomponentlist.h:668
// variables: 10
// function calls: 32
void CHalfEdgeComponentList<CModelMesh::Edge_t>::AddComponent()
{
	const char   __FUNCTION__; // 11947
	int nComponentIndex; // 675
	ComponentHandle_t newComponentHandle; // 682
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 680
	}
	{
		ComponentReference_t& compRef; // 691
		ReferenceIndex_t nRefIndex; // 692
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 706
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
				int i);  // 691
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
				int i);  // 706
	}
	{
		int nReferenceIndex; // 718
		ComponentReference_t& compRef; // 719
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 713
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::NumAllocated(); // 1143
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this); // 824
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::IsGrowable(); // 823
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::Grow(
			int num);  // 806
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this); // 718
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
				int i);  // 719
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 670
	CHalfEdgeComponentList<CModelMesh::Edge_t>::InvalidHandle(); // 671
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::NumAllocated(); // 1143
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::IsGrowable(); // 823
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::Grow(
		int num);  // 806
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 675
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 680
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 689
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			int i);  // 730
} /* size: 0, variables: 3, inline expansions: 16 (0 bytes) */

// <0607B69C> ../public/meshutils/halfedgecomponentlist.h:668
// variables: 10
// function calls: 32
void CHalfEdgeComponentList<CModelMesh::Face_t>::AddComponent()
{
	const char   __FUNCTION__; // 11947
	int nComponentIndex; // 675
	ComponentHandle_t newComponentHandle; // 682
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 680
	}
	{
		ComponentReference_t& compRef; // 691
		ReferenceIndex_t nRefIndex; // 692
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 706
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
				int i);  // 691
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
				int i);  // 706
	}
	{
		int nReferenceIndex; // 718
		ComponentReference_t& compRef; // 719
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 713
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::NumAllocated(); // 1143
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this); // 824
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::IsGrowable(); // 823
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::Grow(
			int num);  // 806
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this); // 718
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
				int i);  // 719
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 670
	CHalfEdgeComponentList<CModelMesh::Face_t>::InvalidHandle(); // 671
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::NumAllocated(); // 1143
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::IsGrowable(); // 823
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::Grow(
		int num);  // 806
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 675
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 680
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 689
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			int i);  // 730
} /* size: 0, variables: 3, inline expansions: 16 (0 bytes) */

// <05F723E9> ../public/meshutils/halfedgecomponentlist.h:668
// variables: 10
// function calls: 24
void CHalfEdgeComponentList<CModelMesh::Vertex_t>::AddComponent()
{
	const char   __FUNCTION__; // 36417
	int nComponentIndex; // 675
	ComponentHandle_t newComponentHandle; // 682
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 680
	}
	{
		ComponentReference_t& compRef; // 691
		ReferenceIndex_t nRefIndex; // 692
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 706
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this,
				int i);  // 691
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this,
				int i);  // 706
	}
	{
		int nReferenceIndex; // 718
		ComponentReference_t& compRef; // 719
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 713
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::NumAllocated(); // 1143
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this); // 824
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this); // 718
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this,
				int i);  // 719
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentL this); // 670
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::InvalidHandle(); // 671
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::NumAllocated(); // 1143
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this); // 675
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 680
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 689
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this,
			int i);  // 730
} /* size: 0, variables: 3, inline expansions: 12 (0 bytes) */

// <05F70844> ../public/meshutils/halfedgecomponentlist.h:668
// variables: 10
// function calls: 24
void CHalfEdgeComponentList<CModelMesh::Edge_t>::AddComponent()
{
	const char   __FUNCTION__; // 36417
	int nComponentIndex; // 675
	ComponentHandle_t newComponentHandle; // 682
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 680
	}
	{
		ComponentReference_t& compRef; // 691
		ReferenceIndex_t nRefIndex; // 692
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 706
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
				int i);  // 691
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
				int i);  // 706
	}
	{
		int nReferenceIndex; // 718
		ComponentReference_t& compRef; // 719
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 713
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::NumAllocated(); // 1143
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this); // 824
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this); // 718
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
				int i);  // 719
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 670
	CHalfEdgeComponentList<CModelMesh::Edge_t>::InvalidHandle(); // 671
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::NumAllocated(); // 1143
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 675
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 680
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 689
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			int i);  // 730
} /* size: 0, variables: 3, inline expansions: 12 (0 bytes) */

// <05F6FF21> ../public/meshutils/halfedgecomponentlist.h:668
// variables: 10
// function calls: 24
void CHalfEdgeComponentList<CModelMesh::Face_t>::AddComponent()
{
	const char   __FUNCTION__; // 36417
	int nComponentIndex; // 675
	ComponentHandle_t newComponentHandle; // 682
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 680
	}
	{
		ComponentReference_t& compRef; // 691
		ReferenceIndex_t nRefIndex; // 692
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 706
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
				int i);  // 691
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
				int i);  // 706
	}
	{
		int nReferenceIndex; // 718
		ComponentReference_t& compRef; // 719
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 713
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::NumAllocated(); // 1143
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this); // 824
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this); // 718
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
				int i);  // 719
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 670
	CHalfEdgeComponentList<CModelMesh::Face_t>::InvalidHandle(); // 671
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::NumAllocated(); // 1143
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 675
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 680
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 689
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			int i);  // 730
} /* size: 0, variables: 3, inline expansions: 12 (0 bytes) */

// <05F670D3> ../public/meshutils/halfedgecomponentlist.h:668
// variables: 10
// function calls: 24
void CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::AddComponent()
{
	const char   __FUNCTION__; // 36417
	int nComponentIndex; // 675
	ComponentHandle_t newComponentHandle; // 682
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 680
	}
	{
		ComponentReference_t& compRef; // 691
		ReferenceIndex_t nRefIndex; // 692
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 706
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
				int i);  // 691
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
				int i);  // 706
	}
	{
		int nReferenceIndex; // 718
		ComponentReference_t& compRef; // 719
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 713
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::NumAllocated(); // 1143
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 824
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 718
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
				int i);  // 719
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeCompon this); // 670
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::InvalidHandle(); // 671
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::NumAllocated(); // 1143
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 675
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 680
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 689
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
			int i);  // 730
} /* size: 0, variables: 3, inline expansions: 12 (0 bytes) */

// <05EE2675> ../public/meshutils/halfedgecomponentlist.h:668
// variables: 10
// function calls: 32
void CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::AddComponent()
{
	const char   __FUNCTION__; // 4520
	int nComponentIndex; // 675
	ComponentHandle_t newComponentHandle; // 682
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 680
	}
	{
		ComponentReference_t& compRef; // 691
		ReferenceIndex_t nRefIndex; // 692
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 706
		}
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 691
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 706
	}
	{
		int nReferenceIndex; // 718
		ComponentReference_t& compRef; // 719
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 713
		}
		NumAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 1143
		Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 824
		IsGrowable(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 823
		IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 859
		IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 861
		Grow(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this,
			int num);  // 806
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 718
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 719
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 670
	InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t this); // 671
	NumAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 1143
	IsGrowable(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 823
	IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 859
	IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 861
	Grow(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this,
		int num);  // 806
	Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 675
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 680
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 689
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this,
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
			int i);  // 730
} /* size: 1078, variables: 3, inline expansions: 16 (810 bytes) */

// <05EE1441> ../public/meshutils/halfedgecomponentlist.h:668
// variables: 10
// function calls: 49
void CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>::AddComponent()
{
	const char   __FUNCTION__; // 4520
	int nComponentIndex; // 675
	ComponentHandle_t newComponentHandle; // 682
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 680
	}
	{
		ComponentReference_t& compRef; // 691
		ReferenceIndex_t nRefIndex; // 692
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 706
		}
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Fac this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 691
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Fac this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 706
	}
	{
		int nReferenceIndex; // 718
		ComponentReference_t& compRef; // 719
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 713
		}
		NumAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 1143
		Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Fac this); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 824
		IsGrowable(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 823
		IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 859
		IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 861
		Grow(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Fac this,
			int num);  // 806
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 718
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Fac this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 719
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 670
	InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t> this); // 671
	NumAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 1143
	Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Fac this); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 824
	IsGrowable(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 823
	IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 859
	IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 861
	Grow(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Fac this,
		int num);  // 806
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
			int num);  // 1145
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Fac this,
			int i);  // 602
	Element(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
		int i);  // 1148
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 355
	SymMatrix3<float>::SetZero(); // 44
	CSurfaceFitter::CSurfaceFitter(); // 80
	Vector::Vector(); // 218
	RnPlane_t::RnPlane_t(); // 80
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 80
	HullIFRFaceData_t::HullIFRFaceData_t(); // 274
	Face_t::Face_t(); // 264
	ComponentEntry_t::ComponentEntry_t(); // 1479
	Construct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>::ComponentEntry_t>(ComponentEntry_t* pMemory); // 1148
	AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 675
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 680
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 689
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Fac this,
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
			int i);  // 730
} /* size: 1183, variables: 3, inline expansions: 33 (1630 bytes) */

// <05ED8A02> ../public/meshutils/halfedgecomponentlist.h:668
// variables: 10
// function calls: 41
void CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::AddComponent()
{
	const char   __FUNCTION__; // 4520
	int nComponentIndex; // 675
	ComponentHandle_t newComponentHandle; // 682
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 680
	}
	{
		ComponentReference_t& compRef; // 691
		ReferenceIndex_t nRefIndex; // 692
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 706
		}
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 691
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 706
	}
	{
		int nReferenceIndex; // 718
		ComponentReference_t& compRef; // 719
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 713
		}
		NumAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 1143
		Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 824
		IsGrowable(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 823
		IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 859
		IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 861
		Grow(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
			int num);  // 806
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 718
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 719
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 670
	InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this); // 671
	NumAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 1143
	Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 824
	IsGrowable(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 823
	IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 859
	IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 861
	Grow(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
		int num);  // 806
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
			int num);  // 1145
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
			int i);  // 602
	Element(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
		int i);  // 1148
	Vector::Vector(); // 218
	RnPlane_t::RnPlane_t(); // 21
	HullIFREdgeDissolveCost_t::HullIFREdgeDissolveCost_t(); // 901
	HullIFRHalfEdgeData_t::HullIFRHalfEdgeData_t(); // 280
	HalfEdge_t::HalfEdge_t(); // 264
	ComponentEntry_t::ComponentEntry_t(); // 1479
	Construct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::ComponentEntry_t>(ComponentEntry_t* pMemory); // 1148
	AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 675
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 680
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 689
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
			int i);  // 730
} /* size: 1119, variables: 3, inline expansions: 25 (1010 bytes) */

// <05E59124> ../public/meshutils/halfedgecomponentlist.h:668
// variables: 10
// function calls: 32
void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::AddComponent()
{
	const char   __FUNCTION__; // 60227
	int nComponentIndex; // 675
	ComponentHandle_t newComponentHandle; // 682
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 680
	}
	{
		ComponentReference_t& compRef; // 691
		ReferenceIndex_t nRefIndex; // 692
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 706
		}
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this,
				int i);  // 691
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this,
				int i);  // 706
	}
	{
		int nReferenceIndex; // 718
		ComponentReference_t& compRef; // 719
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 713
		}
		NumAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Co this); // 1143
		Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this); // 824
		IsGrowable(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Co this); // 823
		IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Co this); // 859
		IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Co this); // 861
		Grow(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this,
			int num);  // 806
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this); // 718
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this,
				int i);  // 719
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t> this); // 670
	CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::InvalidHandle(); // 671
	NumAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Co this); // 1143
	IsGrowable(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Co this); // 823
	IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Co this); // 859
	IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Co this); // 861
	Grow(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this,
		int num);  // 806
	Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this); // 675
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t> this); // 680
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t> this); // 689
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this,
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this,
			int i);  // 730
} /* size: 1078, variables: 3, inline expansions: 16 (810 bytes) */

// <05E56791> ../public/meshutils/halfedgecomponentlist.h:668
// variables: 10
// function calls: 39
void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::AddComponent()
{
	const char   __FUNCTION__; // 60227
	int nComponentIndex; // 675
	ComponentHandle_t newComponentHandle; // 682
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 680
	}
	{
		ComponentReference_t& compRef; // 691
		ReferenceIndex_t nRefIndex; // 692
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 706
		}
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 691
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 706
	}
	{
		int nReferenceIndex; // 718
		ComponentReference_t& compRef; // 719
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 713
		}
		NumAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this); // 1143
		Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 824
		IsGrowable(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this); // 823
		IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this); // 859
		IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this); // 861
		Grow(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
			int num);  // 806
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 718
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 719
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 670
	CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::InvalidHandle(); // 671
	NumAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this); // 1143
	Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 824
	IsGrowable(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this); // 823
	IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this); // 859
	IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this); // 861
	Grow(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
		int num);  // 806
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
			int num);  // 1145
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
			int i);  // 602
	Element(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
		int i);  // 1148
	HullIVRCollapseCost_t::HullIVRCollapseCost_t(); // 37
	HullIVRVertexData_t::HullIVRVertexData_t(); // 268
	Vertex_t::Vertex_t(); // 264
	ComponentEntry_t::ComponentEntry_t(); // 1479
	Construct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentEntry_t>(ComponentEntry_t* pMemory); // 1148
	AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 675
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 680
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 689
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
			int i);  // 730
} /* size: 1151, variables: 3, inline expansions: 23 (1256 bytes) */

// <05E51E81> ../public/meshutils/halfedgecomponentlist.h:668
// variables: 10
// function calls: 32
void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::AddComponent()
{
	const char   __FUNCTION__; // 60227
	int nComponentIndex; // 675
	ComponentHandle_t newComponentHandle; // 682
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 680
	}
	{
		ComponentReference_t& compRef; // 691
		ReferenceIndex_t nRefIndex; // 692
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 706
		}
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::Comp this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>:: this,
				int i);  // 691
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::Comp this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>:: this,
				int i);  // 706
	}
	{
		int nReferenceIndex; // 718
		ComponentReference_t& compRef; // 719
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 713
		}
		NumAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t> this); // 1143
		Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::Comp this); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>:: this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>:: this); // 824
		IsGrowable(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t> this); // 823
		IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t> this); // 859
		IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t> this); // 861
		Grow(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::Comp this,
			int num);  // 806
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>:: this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>:: this); // 718
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::Comp this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>:: this,
				int i);  // 719
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this); // 670
	CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::InvalidHandle(); // 671
	NumAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t> this); // 1143
	IsGrowable(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t> this); // 823
	IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t> this); // 859
	IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t> this); // 861
	Grow(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::Comp this,
		int num);  // 806
	Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::Comp this); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>:: this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>:: this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>:: this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>:: this); // 675
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this); // 680
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this); // 689
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::Comp this,
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>:: this,
			int i);  // 730
} /* size: 1110, variables: 3, inline expansions: 16 (834 bytes) */

// <05DD71AD> ../public/meshutils/halfedgecomponentlist.h:668
// variables: 10
// function calls: 32
void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::AddComponent()
{
	const char   __FUNCTION__; // 8161
	int nComponentIndex; // 675
	ComponentHandle_t newComponentHandle; // 682
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 680
	}
	{
		ComponentReference_t& compRef; // 691
		ReferenceIndex_t nRefIndex; // 692
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 706
		}
		CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, CUt this,
				int i);  // 691
		CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, CUt this,
				int i);  // 706
	}
	{
		int nReferenceIndex; // 718
		ComponentReference_t& compRef; // 719
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 713
		}
		NumAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, i this); // 1143
		CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, CUt this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, CUt this); // 824
		IsGrowable(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, i this); // 823
		IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, i this); // 859
		IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, i this); // 861
		CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, int>::Grow(
			int num);  // 806
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, CUt this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, CUt this); // 718
		CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, CUt this,
				int i);  // 719
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, C this); // 670
	CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::InvalidHandle(); // 671
	NumAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, int> this); // 1143
	IsGrowable(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, int> this); // 823
	IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, int> this); // 859
	IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, int> this); // 861
	CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, int>::Grow(
		int num);  // 806
	CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, CUtlMem this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, CUtlMem this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, CUtlMem this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, CUtlMem this); // 675
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_ this); // 680
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_ this); // 689
	CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, CUtlMem this,
			int i);  // 730
} /* size: 1078, variables: 3, inline expansions: 16 (810 bytes) */

// <05DD5F4C> ../public/meshutils/halfedgecomponentlist.h:668
// variables: 10
// function calls: 32
void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::AddComponent()
{
	const char   __FUNCTION__; // 8161
	int nComponentIndex; // 675
	ComponentHandle_t newComponentHandle; // 682
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 680
	}
	{
		ComponentReference_t& compRef; // 691
		ReferenceIndex_t nRefIndex; // 692
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 706
		}
		CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, CUtlM this,
				int i);  // 691
		CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, CUtlM this,
				int i);  // 706
	}
	{
		int nReferenceIndex; // 718
		ComponentReference_t& compRef; // 719
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 713
		}
		NumAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, int this); // 1143
		CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, CUtlM this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, CUtlM this); // 824
		IsGrowable(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, int this); // 823
		IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, int this); // 859
		IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, int this); // 861
		CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, int>::Grow(
			int num);  // 806
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, CUtlM this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, CUtlM this); // 718
		CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, CUtlM this,
				int i);  // 719
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, CUt this); // 670
	CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::InvalidHandle(); // 671
	CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, int>::NumAllocated(); // 1143
	CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, int>::IsGrowable(); // 823
	CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, int>::Grow(
		int num);  // 806
	CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, CUtlMemor this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, CUtlMemor this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, CUtlMemor this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, CUtlMemor this); // 675
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, this); // 680
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, this); // 689
	CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, CUtlMemor this,
			int i);  // 730
} /* size: 1078, variables: 3, inline expansions: 16 (810 bytes) */

// <05DC5BD1> ../public/meshutils/halfedgecomponentlist.h:668
// variables: 10
// function calls: 32
void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::AddComponent()
{
	const char   __FUNCTION__; // 8161
	int nComponentIndex; // 675
	ComponentHandle_t newComponentHandle; // 682
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 680
	}
	{
		ComponentReference_t& compRef; // 691
		ReferenceIndex_t nRefIndex; // 692
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 706
		}
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, int>  this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, C this,
				int i);  // 691
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, int>  this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, C this,
				int i);  // 706
	}
	{
		int nReferenceIndex; // 718
		ComponentReference_t& compRef; // 719
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 713
		}
		NumAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, this); // 1143
		Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, int> this); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, C this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, C this); // 824
		IsGrowable(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, this); // 823
		IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, this); // 859
		IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, this); // 861
		Grow(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, int>  this,
			int num);  // 806
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, C this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, C this); // 718
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, int>  this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, C this,
				int i);  // 719
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, this); // 670
	CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::InvalidHandle(); // 671
	NumAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, int this); // 1143
	IsGrowable(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, int this); // 823
	IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, int this); // 859
	IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, int this); // 861
	CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, int>::Grow(
		int num);  // 806
	CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, CUtlM this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, CUtlM this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, CUtlM this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, CUtlM this); // 675
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReferenc this); // 680
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReferenc this); // 689
	CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, CUtlM this,
			int i);  // 730
} /* size: 1110, variables: 3, inline expansions: 16 (834 bytes) */

// <0608824B> ../public/meshutils/halfedgecomponentlist.h:746
// variables: 2
void CHalfEdgeComponentList<CModelMesh::Vertex_t>::AddMultiple(int nCount, ComponentHandle_t* pHandles)
{
	{
		int iComp; // 754
		{
			ComponentHandle_t handle; // 756
		}
	}
} /* size: 0 */

// <06087DC6> ../public/meshutils/halfedgecomponentlist.h:746
// variables: 2
void CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::AddMultiple(int nCount, ComponentHandle_t* pHandles)
{
	{
		int iComp; // 754
		{
			ComponentHandle_t handle; // 756
		}
	}
} /* size: 0 */

// <06087941> ../public/meshutils/halfedgecomponentlist.h:746
// variables: 2
void CHalfEdgeComponentList<CModelMesh::Edge_t>::AddMultiple(int nCount, ComponentHandle_t* pHandles)
{
	{
		int iComp; // 754
		{
			ComponentHandle_t handle; // 756
		}
	}
} /* size: 0 */

// <060874D5> ../public/meshutils/halfedgecomponentlist.h:746
// variables: 2
void CHalfEdgeComponentList<CModelMesh::Face_t>::AddMultiple(int nCount, ComponentHandle_t* pHandles)
{
	{
		int iComp; // 754
		{
			ComponentHandle_t handle; // 756
		}
	}
} /* size: 0 */

// <05DE09D7> ../public/meshutils/halfedgecomponentlist.h:746
// variables: 2
void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::AddMultiple(int nCount, ComponentHandle_t* pHandles)
{
	{
		int iComp; // 754
		{
			ComponentHandle_t handle; // 756
		}
	}
} /* size: 0 */

// <05F74A73> ../public/meshutils/halfedgecomponentlist.h:773
void CHalfEdgeComponentList<CModelMesh::Face_t>::RemoveAll()
{
} /* size: 0 */

// <05F74A5A> ../public/meshutils/halfedgecomponentlist.h:773
void CHalfEdgeComponentList<CModelMesh::Vertex_t>::RemoveAll()
{
} /* size: 0 */

// <05F74A41> ../public/meshutils/halfedgecomponentlist.h:773
void CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::RemoveAll()
{
} /* size: 0 */

// <05F74A28> ../public/meshutils/halfedgecomponentlist.h:773
void CHalfEdgeComponentList<CModelMesh::Edge_t>::RemoveAll()
{
} /* size: 0 */

// <05F71AE8> ../public/meshutils/halfedgecomponentlist.h:790
// variables: 9
// function calls: 19
void CHalfEdgeComponentList<CModelMesh::Edge_t>::RemoveComponent(ComponentHandle_t handle)
{
	const char   __FUNCTION__; // 36493
	ComponentReference_t& compRef; // 797
	ComponentIndex_t nComponentIndex; // 801
	ComponentIndex_t nLastComponentIndex; // 809
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 792
	}
	{
		int nReferenceIndex; // 812
		ComponentEntry_t entryToRemove; // 815
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
				int i);  // 812
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
				int i);  // 813
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
				int i);  // 815
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
				int i);  // 816
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
				int i);  // 817
	}
	{
		ComponentReference_t& tailRef; // 833
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
				int i);  // 833
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 792
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
			int i);  // 797
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 798
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 809
	{
		int i; // 1696
	}
	RemoveMultipleFromTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
				int num);  // 819
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 793
} /* size: 0, variables: 4, inline expansions: 7 (0 bytes) */

// <05F71518> ../public/meshutils/halfedgecomponentlist.h:790
// variables: 9
// function calls: 19
void CHalfEdgeComponentList<CModelMesh::Vertex_t>::RemoveComponent(ComponentHandle_t handle)
{
	const char   __FUNCTION__; // 36493
	ComponentReference_t& compRef; // 797
	ComponentIndex_t nComponentIndex; // 801
	ComponentIndex_t nLastComponentIndex; // 809
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 792
	}
	{
		int nReferenceIndex; // 812
		ComponentEntry_t entryToRemove; // 815
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this,
				int i);  // 812
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this,
				int i);  // 813
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this,
				int i);  // 815
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this,
				int i);  // 816
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this,
				int i);  // 817
	}
	{
		ComponentReference_t& tailRef; // 833
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this,
				int i);  // 833
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 792
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this,
			int i);  // 797
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 798
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentL this); // 809
	{
		int i; // 1696
	}
	RemoveMultipleFromTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this,
				int num);  // 819
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 793
} /* size: 0, variables: 4, inline expansions: 7 (0 bytes) */

// <05F6F7BC> ../public/meshutils/halfedgecomponentlist.h:790
// variables: 9
// function calls: 19
void CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::RemoveComponent(ComponentHandle_t handle)
{
	const char   __FUNCTION__; // 36493
	ComponentReference_t& compRef; // 797
	ComponentIndex_t nComponentIndex; // 801
	ComponentIndex_t nLastComponentIndex; // 809
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 792
	}
	{
		int nReferenceIndex; // 812
		ComponentEntry_t entryToRemove; // 815
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
				int i);  // 812
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
				int i);  // 813
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
				int i);  // 815
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
				int i);  // 816
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
				int i);  // 817
	}
	{
		ComponentReference_t& tailRef; // 833
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
				int i);  // 833
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 792
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
			int i);  // 797
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 798
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeCompon this); // 809
	{
		int i; // 1696
	}
	RemoveMultipleFromTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
				int num);  // 819
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 793
} /* size: 0, variables: 4, inline expansions: 7 (0 bytes) */

// <05F6F1F8> ../public/meshutils/halfedgecomponentlist.h:790
// variables: 9
// function calls: 19
void CHalfEdgeComponentList<CModelMesh::Face_t>::RemoveComponent(ComponentHandle_t handle)
{
	const char   __FUNCTION__; // 36493
	ComponentReference_t& compRef; // 797
	ComponentIndex_t nComponentIndex; // 801
	ComponentIndex_t nLastComponentIndex; // 809
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 792
	}
	{
		int nReferenceIndex; // 812
		ComponentEntry_t entryToRemove; // 815
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
				int i);  // 812
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
				int i);  // 813
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
				int i);  // 815
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
				int i);  // 816
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
				int i);  // 817
	}
	{
		ComponentReference_t& tailRef; // 833
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
				int i);  // 833
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 792
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
			int i);  // 797
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 798
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 809
	{
		int i; // 1696
	}
	RemoveMultipleFromTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
				int num);  // 819
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 793
} /* size: 0, variables: 4, inline expansions: 7 (0 bytes) */

// <05EDA210> ../public/meshutils/halfedgecomponentlist.h:790
// variables: 9
// function calls: 139
void CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>::RemoveComponent(ComponentHandle_t handle)
{
	const char   __FUNCTION__; // 4596
	ComponentReference_t& compRef; // 797
	ComponentIndex_t nComponentIndex; // 801
	ComponentIndex_t nLastComponentIndex; // 809
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 792
	}
	{
		int nReferenceIndex; // 812
		ComponentEntry_t entryToRemove; // 815
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Fac this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 812
		CUtlMemory<int, int>::ValidateGrowSize(); // 475
		CUtlMemory<int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 434
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 573
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
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
					int num);  // 1319
		CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount(
			int count);  // 573
		CUtlMemory<int, int>::Base(); // 113
		CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 105
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 105
		CUtlVectorBase<int, CUtlMemory<int, int> >::end(); // 574
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 180
		UtlTraitsCopyRange<int>(const int* pFrom,
					const int* pFromEnd,
					int* pTo);  // 173
		UtlTraitsCopyRange<int>(const int* pFrom,
					const int* pFromEnd,
					int* pTo);  // 574
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator=(
				const CUtlVectorBase<int, CUtlMemory<int, int> >& other);  // 565
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator=(
				const CUtlVectorBase<int, CUtlMemory<int, int> >& other);  // 452
		CUtlVector<int, CUtlMemory<int, int> >::operator=(
				const CUtlVector<int, CUtlMemory<int, int> >& src);  // 434
		CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
				const CUtlVector<int, CUtlMemory<int, int> >& src);  // 80
		HullIFRFaceData_t::HullIFRFaceData_t(
					const HullIFRFaceData_t  &);  // 274
		Face_t::Face_t(
			const Face_t  &);  // 264
		ComponentEntry_t::ComponentEntry_t(
				const ComponentEntry_t  &);  // 815
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Fac this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 813
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Fac this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 815
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Fac this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 816
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Fac this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 816
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 573
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveMultipleFromTail(
					int num);  // 1323
		CUtlMemory<int, int>::NumAllocated(); // 782
		CUtlMemory<int, int>::Base(); // 112
		CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
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
					int num);  // 1319
		CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount(
			int count);  // 573
		CUtlMemory<int, int>::Base(); // 112
		CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 102
		CUtlVectorBase<int, CUtlMemory<int, int> >::begin(); // 574
		CUtlMemory<int, int>::Base(); // 113
		CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 105
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 105
		CUtlVectorBase<int, CUtlMemory<int, int> >::end(); // 574
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 180
		UtlTraitsCopyRange<int>(const int* pFrom,
					const int* pFromEnd,
					int* pTo);  // 173
		UtlTraitsCopyRange<int>(const int* pFrom,
					const int* pFromEnd,
					int* pTo);  // 574
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator=(
				const CUtlVectorBase<int, CUtlMemory<int, int> >& other);  // 565
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator=(
				const CUtlVectorBase<int, CUtlMemory<int, int> >& other);  // 452
		CUtlVector<int, CUtlMemory<int, int> >::operator=(
				const CUtlVector<int, CUtlMemory<int, int> >& src);  // 80
		Vector::operator=(
				const Vector& vOther);  // 209
		RnPlane_t::operator=(
				const RnPlane_t  &);  // 80
		Vector::operator=(
				const Vector& vOther);  // 42
		Vector::operator=(
				const Vector& vOther);  // 42
		CSurfaceFitter::operator=(
				const CSurfaceFitter  &);  // 80
		HullIFRFaceData_t::operator=(
				const HullIFRFaceData_t  &);  // 274
		Face_t::operator=(
				const Face_t  &);  // 264
		ComponentEntry_t::operator=(
				const ComponentEntry_t  &);  // 816
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveMultipleFromTail(
					int num);  // 1323
		CUtlMemory<int, int>::NumAllocated(); // 782
		CUtlMemory<int, int>::Base(); // 112
		CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
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
					int num);  // 1319
		CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount(
			int count);  // 573
		CUtlMemory<int, int>::Base(); // 112
		CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 102
		CUtlVectorBase<int, CUtlMemory<int, int> >::begin(); // 574
		CUtlVectorBase<int, CUtlMemory<int, int> >::end(); // 574
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 180
		UtlTraitsCopyRange<int>(const int* pFrom,
					const int* pFromEnd,
					int* pTo);  // 173
		UtlTraitsCopyRange<int>(const int* pFrom,
					const int* pFromEnd,
					int* pTo);  // 574
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator=(
				const CUtlVectorBase<int, CUtlMemory<int, int> >& other);  // 565
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator=(
				const CUtlVectorBase<int, CUtlMemory<int, int> >& other);  // 452
		CUtlVector<int, CUtlMemory<int, int> >::operator=(
				const CUtlVector<int, CUtlMemory<int, int> >& src);  // 80
		Vector::operator=(
				const Vector& vOther);  // 42
		Vector::operator=(
				const Vector& vOther);  // 42
		CSurfaceFitter::operator=(
				const CSurfaceFitter  &);  // 80
		Vector::operator=(
				const Vector& vOther);  // 209
		RnPlane_t::operator=(
				const RnPlane_t  &);  // 80
		HullIFRFaceData_t::operator=(
				const HullIFRFaceData_t  &);  // 274
		Face_t::operator=(
				const Face_t  &);  // 264
		ComponentEntry_t::operator=(
				const ComponentEntry_t  &);  // 817
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Fac this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 817
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 80
		HullIFRFaceData_t::~HullIFRFaceData_t(); // 274
		Face_t::~Face_t(); // 264
		ComponentEntry_t::~ComponentEntry_t(); // 818
	}
	{
		ComponentReference_t& tailRef; // 833
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Fac this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 833
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 792
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Fac this,
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
			int i);  // 797
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 798
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 809
	{
		int i; // 1696
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Fac this,
				int i);  // 602
		Element(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
			int i);  // 1697
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
		CUtlMemory<int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 80
		HullIFRFaceData_t::~HullIFRFaceData_t(); // 274
		Face_t::~Face_t(); // 264
		ComponentEntry_t::~ComponentEntry_t(); // 1526
		Destruct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>::ComponentEntry_t>(ComponentEntry_t* pMemory); // 1697
	}
	RemoveMultipleFromTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int num);  // 819
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 793
} /* size: 2092, variables: 4, inline expansions: 7 (163 bytes) */

// <05ED6D46> ../public/meshutils/halfedgecomponentlist.h:790
// variables: 9
// function calls: 31
void CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::RemoveComponent(ComponentHandle_t handle)
{
	const char   __FUNCTION__; // 4596
	ComponentReference_t& compRef; // 797
	ComponentIndex_t nComponentIndex; // 801
	ComponentIndex_t nLastComponentIndex; // 809
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 792
	}
	{
		int nReferenceIndex; // 812
		ComponentEntry_t entryToRemove; // 815
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 812
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 813
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 815
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 816
		Vector::operator=(
				const Vector& vOther);  // 209
		RnPlane_t::operator=(
				const RnPlane_t  &);  // 21
		HullIFREdgeDissolveCost_t::operator=(
				const HullIFREdgeDissolveCost_t  &);  // 92
		HullIFRHalfEdgeData_t::operator=(
				const HullIFRHalfEdgeData_t  &);  // 280
		HalfEdge_t::operator=(
				const HalfEdge_t  &);  // 264
		ComponentEntry_t::operator=(
				const ComponentEntry_t  &);  // 816
		Vector::operator=(
				const Vector& vOther);  // 209
		RnPlane_t::operator=(
				const RnPlane_t  &);  // 21
		HullIFREdgeDissolveCost_t::operator=(
				const HullIFREdgeDissolveCost_t  &);  // 92
		HullIFRHalfEdgeData_t::operator=(
				const HullIFRHalfEdgeData_t  &);  // 280
		HalfEdge_t::operator=(
				const HalfEdge_t  &);  // 264
		ComponentEntry_t::operator=(
				const ComponentEntry_t  &);  // 817
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 817
	}
	{
		ComponentReference_t& tailRef; // 833
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 833
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 792
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
			int i);  // 797
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 798
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 809
	{
		int i; // 1696
	}
	RemoveMultipleFromTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int num);  // 819
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 793
} /* size: 663, variables: 4, inline expansions: 7 (59 bytes) */

// <05ED24CA> ../public/meshutils/halfedgecomponentlist.h:790
// variables: 9
// function calls: 19
void CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::RemoveComponent(ComponentHandle_t handle)
{
	const char   __FUNCTION__; // 4596
	ComponentReference_t& compRef; // 797
	ComponentIndex_t nComponentIndex; // 801
	ComponentIndex_t nLastComponentIndex; // 809
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 792
	}
	{
		int nReferenceIndex; // 812
		ComponentEntry_t entryToRemove; // 815
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 812
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 813
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 815
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 816
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 817
	}
	{
		ComponentReference_t& tailRef; // 833
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 833
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 792
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this,
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
			int i);  // 797
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 798
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 809
	{
		int i; // 1696
	}
	RemoveMultipleFromTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int num);  // 819
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 793
} /* size: 395, variables: 4, inline expansions: 7 (60 bytes) */

// <05E59B21> ../public/meshutils/halfedgecomponentlist.h:790
// variables: 9
// function calls: 27
void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::RemoveComponent(ComponentHandle_t handle)
{
	const char   __FUNCTION__; // 60298
	ComponentReference_t& compRef; // 797
	ComponentIndex_t nComponentIndex; // 801
	ComponentIndex_t nLastComponentIndex; // 809
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 792
	}
	{
		int nReferenceIndex; // 812
		ComponentEntry_t entryToRemove; // 815
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 812
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 813
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 815
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 816
		Vector::operator=(
				const Vector& vOther);  // 37
		HullIVRVertexData_t::operator=(
				const HullIVRVertexData_t  &);  // 268
		Vertex_t::operator=(
				const Vertex_t  &);  // 264
		ComponentEntry_t::operator=(
				const ComponentEntry_t  &);  // 816
		Vector::operator=(
				const Vector& vOther);  // 37
		HullIVRVertexData_t::operator=(
				const HullIVRVertexData_t  &);  // 268
		Vertex_t::operator=(
				const Vertex_t  &);  // 264
		ComponentEntry_t::operator=(
				const ComponentEntry_t  &);  // 817
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 817
	}
	{
		ComponentReference_t& tailRef; // 833
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 833
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 792
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
			int i);  // 797
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 798
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 809
	{
		int i; // 1696
	}
	RemoveMultipleFromTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int num);  // 819
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 793
} /* size: 539, variables: 4, inline expansions: 7 (60 bytes) */

// <05E532CC> ../public/meshutils/halfedgecomponentlist.h:790
// variables: 9
// function calls: 19
void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::RemoveComponent(ComponentHandle_t handle)
{
	const char   __FUNCTION__; // 60298
	ComponentReference_t& compRef; // 797
	ComponentIndex_t nComponentIndex; // 801
	ComponentIndex_t nLastComponentIndex; // 809
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 792
	}
	{
		int nReferenceIndex; // 812
		ComponentEntry_t entryToRemove; // 815
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this,
				int i);  // 812
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this,
				int i);  // 813
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this,
				int i);  // 815
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this,
				int i);  // 816
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this,
				int i);  // 817
	}
	{
		ComponentReference_t& tailRef; // 833
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this,
				int i);  // 833
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t> this); // 792
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this,
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this,
			int i);  // 797
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 798
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t> this); // 809
	{
		int i; // 1696
	}
	RemoveMultipleFromTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this,
				int num);  // 819
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t> this); // 793
} /* size: 395, variables: 4, inline expansions: 7 (60 bytes) */

// <05E4E0B4> ../public/meshutils/halfedgecomponentlist.h:790
// variables: 9
// function calls: 19
void CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::RemoveComponent(ComponentHandle_t handle)
{
	const char   __FUNCTION__; // 60298
	ComponentReference_t& compRef; // 797
	ComponentIndex_t nComponentIndex; // 801
	ComponentIndex_t nLastComponentIndex; // 809
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 792
	}
	{
		int nReferenceIndex; // 812
		ComponentEntry_t entryToRemove; // 815
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::Comp this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>:: this,
				int i);  // 812
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::Comp this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>:: this,
				int i);  // 813
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::Comp this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>:: this,
				int i);  // 815
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::Comp this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>:: this,
				int i);  // 816
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::Comp this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>:: this,
				int i);  // 817
	}
	{
		ComponentReference_t& tailRef; // 833
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::Comp this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>:: this,
				int i);  // 833
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this); // 792
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::Comp this,
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>:: this,
			int i);  // 797
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 798
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this); // 809
	{
		int i; // 1696
	}
	RemoveMultipleFromTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>:: this,
				int num);  // 819
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this); // 793
} /* size: 599, variables: 4, inline expansions: 7 (60 bytes) */

// <05DB92AD> ../public/meshutils/halfedgecomponentlist.h:790
// variables: 9
// function calls: 19
void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::RemoveComponent(ComponentHandle_t handle)
{
	const char   __FUNCTION__; // 8242
	ComponentReference_t& compRef; // 797
	ComponentIndex_t nComponentIndex; // 801
	ComponentIndex_t nLastComponentIndex; // 809
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 792
	}
	{
		int nReferenceIndex; // 812
		ComponentEntry_t entryToRemove; // 815
		CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, CUtlMemor this,
				int i);  // 812
		CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, CUtlM this,
				int i);  // 813
		CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, CUtlMemor this,
				int i);  // 815
		CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, CUtlMemor this,
				int i);  // 816
		CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, CUtlMemor this,
				int i);  // 817
	}
	{
		ComponentReference_t& tailRef; // 833
		CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, CUtlM this,
				int i);  // 833
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, this); // 792
	CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, CUtlM this,
			int i);  // 797
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 798
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, CUt this); // 809
	{
		int i; // 1696
	}
	RemoveMultipleFromTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, CUtlMemor this,
				int num);  // 819
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, this); // 793
} /* size: 395, variables: 4, inline expansions: 7 (60 bytes) */

// <05DB7B46> ../public/meshutils/halfedgecomponentlist.h:790
// variables: 9
// function calls: 19
void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::RemoveComponent(ComponentHandle_t handle)
{
	const char   __FUNCTION__; // 8242
	ComponentReference_t& compRef; // 797
	ComponentIndex_t nComponentIndex; // 801
	ComponentIndex_t nLastComponentIndex; // 809
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 792
	}
	{
		int nReferenceIndex; // 812
		ComponentEntry_t entryToRemove; // 815
		CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, CUtlMem this,
				int i);  // 812
		CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, CUt this,
				int i);  // 813
		CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, CUtlMem this,
				int i);  // 815
		CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, CUtlMem this,
				int i);  // 816
		CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, CUtlMem this,
				int i);  // 817
	}
	{
		ComponentReference_t& tailRef; // 833
		CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, CUt this,
				int i);  // 833
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_ this); // 792
	CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, CUt this,
			int i);  // 797
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 798
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, C this); // 809
	{
		int i; // 1696
	}
	RemoveMultipleFromTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, CUtlMem this,
				int num);  // 819
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_ this); // 793
} /* size: 395, variables: 4, inline expansions: 7 (60 bytes) */

// <05DB5CF3> ../public/meshutils/halfedgecomponentlist.h:790
// variables: 9
// function calls: 19
void CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::RemoveComponent(ComponentHandle_t handle)
{
	const char   __FUNCTION__; // 8242
	ComponentReference_t& compRef; // 797
	ComponentIndex_t nComponentIndex; // 801
	ComponentIndex_t nLastComponentIndex; // 809
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 792
	}
	{
		int nReferenceIndex; // 812
		ComponentEntry_t entryToRemove; // 815
		CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, CUtlM this,
				int i);  // 812
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, int>  this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, C this,
				int i);  // 813
		CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, CUtlM this,
				int i);  // 815
		CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, CUtlM this,
				int i);  // 816
		CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, CUtlM this,
				int i);  // 817
	}
	{
		ComponentReference_t& tailRef; // 833
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, int>  this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, C this,
				int i);  // 833
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReferenc this); // 792
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, int>  this,
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, C this,
			int i);  // 797
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 798
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, this); // 809
	{
		int i; // 1696
	}
	RemoveMultipleFromTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, CUtlM this,
				int num);  // 819
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReferenc this); // 793
} /* size: 599, variables: 4, inline expansions: 7 (60 bytes) */

// <05F7426D> ../public/meshutils/halfedgecomponentlist.h:852
// variables: 16
// function calls: 16
void CHalfEdgeComponentList<CModelMesh::Face_t>::CheckIntegrity()
{
	const char   __FUNCTION__; // 36466
	int nNumComponents; // 854
	unsigned int nNumReferences; // 855
	unsigned int nNumActiveReferences; // 872
	ReferenceIndex_t nCurrentFreeRef; // 896
	unsigned int nNumFreeReferences; // 897
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 858
	}
	{
		int iComp; // 863
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 865
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
				int i);  // 865
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
				int i);  // 865
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
				int i);  // 866
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
				int i);  // 866
	}
	{
		unsigned int iRef; // 873
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 877
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
				int i);  // 875
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
				int i);  // 878
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 887
	}
	{
		const ComponentReference_t& compRef; // 901
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 902
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 910
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
				int i);  // 901
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 921
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 854
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 855
} /* size: 0, variables: 6, inline expansions: 2 (0 bytes) */

// <05F73BAF> ../public/meshutils/halfedgecomponentlist.h:852
// variables: 16
// function calls: 16
void CHalfEdgeComponentList<CModelMesh::Vertex_t>::CheckIntegrity()
{
	const char   __FUNCTION__; // 36466
	int nNumComponents; // 854
	unsigned int nNumReferences; // 855
	unsigned int nNumActiveReferences; // 872
	ReferenceIndex_t nCurrentFreeRef; // 896
	unsigned int nNumFreeReferences; // 897
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 858
	}
	{
		int iComp; // 863
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 865
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentL this,
				int i);  // 865
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
				int i);  // 865
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentL this,
				int i);  // 866
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
				int i);  // 866
	}
	{
		unsigned int iRef; // 873
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 877
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
				int i);  // 875
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
				int i);  // 878
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 887
	}
	{
		const ComponentReference_t& compRef; // 901
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 902
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 910
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
				int i);  // 901
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 921
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentL this); // 854
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 855
} /* size: 0, variables: 6, inline expansions: 2 (0 bytes) */

// <05F734F1> ../public/meshutils/halfedgecomponentlist.h:852
// variables: 16
// function calls: 16
void CHalfEdgeComponentList<CModelMesh::Edge_t>::CheckIntegrity()
{
	const char   __FUNCTION__; // 36466
	int nNumComponents; // 854
	unsigned int nNumReferences; // 855
	unsigned int nNumActiveReferences; // 872
	ReferenceIndex_t nCurrentFreeRef; // 896
	unsigned int nNumFreeReferences; // 897
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 858
	}
	{
		int iComp; // 863
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 865
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
				int i);  // 865
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
				int i);  // 865
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
				int i);  // 866
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
				int i);  // 866
	}
	{
		unsigned int iRef; // 873
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 877
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
				int i);  // 875
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
				int i);  // 878
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 887
	}
	{
		const ComponentReference_t& compRef; // 901
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 902
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 910
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
				int i);  // 901
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 921
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 854
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 855
} /* size: 0, variables: 6, inline expansions: 2 (0 bytes) */

// <05F72E33> ../public/meshutils/halfedgecomponentlist.h:852
// variables: 16
// function calls: 16
void CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::CheckIntegrity()
{
	const char   __FUNCTION__; // 36466
	int nNumComponents; // 854
	unsigned int nNumReferences; // 855
	unsigned int nNumActiveReferences; // 872
	ReferenceIndex_t nCurrentFreeRef; // 896
	unsigned int nNumFreeReferences; // 897
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 858
	}
	{
		int iComp; // 863
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 865
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeCompon this,
				int i);  // 865
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
				int i);  // 865
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeCompon this,
				int i);  // 866
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
				int i);  // 866
	}
	{
		unsigned int iRef; // 873
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 877
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
				int i);  // 875
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
				int i);  // 878
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 887
	}
	{
		const ComponentReference_t& compRef; // 901
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 902
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 910
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
				int i);  // 901
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 921
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeCompon this); // 854
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 855
} /* size: 0, variables: 6, inline expansions: 2 (0 bytes) */

