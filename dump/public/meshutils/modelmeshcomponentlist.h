
//
// public/meshutils/modelmeshcomponentlist.h
//
//	referenced by: libengine2.so
//
//	functions: 69
//	classes: 4
//

// <05C52FA9> ../public/meshutils/modelmeshcomponentlist.h:10
// member functions: 25
// member variables: 3
// class size: 152
class CModelMeshComponentList<CModelMesh::Vertex_t> {
	/* ../public/meshutils/modelmeshcomponentlist.h:118 */
	void CModelMeshComponentList(CModelMeshComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:128 */
	void CModelMeshComponentList(CModelMeshComponentList<CModelMesh::Vertex_t>* , const CModelMeshComponentList<CModelMesh::Vertex_t>& );
	/* ../public/meshutils/modelmeshcomponentlist.h:138 */
	CModelMeshComponentList<CModelMesh::Vertex_t>& operator=(CModelMeshComponentList<CModelMesh::Vertex_t>* , const CModelMeshComponentList<CModelMesh::Vertex_t>& );
	/* ../public/meshutils/modelmeshcomponentlist.h:151 */
	Vertex_t& operator[](CModelMeshComponentList<CModelMesh::Vertex_t>* , ComponentIndex_t);
	/* ../public/meshutils/modelmeshcomponentlist.h:16 */
	typedef ComponentIndex_t ComponentIndex_t;
	/* ../public/meshutils/modelmeshcomponentlist.h:160 */
	const Vertex_t& operator[](const CModelMeshComponentList<CModelMesh::Vertex_t>* , ComponentIndex_t);
	/* ../public/meshutils/modelmeshcomponentlist.h:169 */
	ComponentIndex_t GetComponentIndex(const CModelMeshComponentList<CModelMesh::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshcomponentlist.h:15 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* ../public/meshutils/modelmeshcomponentlist.h:179 */
	ComponentHandle_t GetComponentHandle(const CModelMeshComponentList<CModelMesh::Vertex_t>* , ComponentIndex_t);
	/* ../public/meshutils/modelmeshcomponentlist.h:188 */
	int Count(const CModelMeshComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:197 */
	void EnsureCapacity(CModelMeshComponentList<CModelMesh::Vertex_t>* , int);
	/* ../public/meshutils/modelmeshcomponentlist.h:207 */
	void SetCount(CModelMeshComponentList<CModelMesh::Vertex_t>* , int);
	/* ../public/meshutils/modelmeshcomponentlist.h:217 */
	bool CanAddComponents(const CModelMeshComponentList<CModelMesh::Vertex_t>* , int);
	/* ../public/meshutils/modelmeshcomponentlist.h:226 */
	ComponentHandle_t AddComponent(CModelMeshComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:241 */
	void AddMultiple(CModelMeshComponentList<CModelMesh::Vertex_t>* , int, ComponentHandle_t* );
	/* ../public/meshutils/modelmeshcomponentlist.h:252 */
	bool CanAppendComponentList(const CModelMeshComponentList<CModelMesh::Vertex_t>* , const CModelMeshComponentList<CModelMesh::Vertex_t>& );
	/* ../public/meshutils/modelmeshcomponentlist.h:267 */
	bool AppendComponentsFromList(CModelMeshComponentList<CModelMesh::Vertex_t>* , const CModelMeshComponentList<CModelMesh::Vertex_t>& , const ComponentHandle_t* , int, CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL, CHandleTranslator* );
	/* ../public/meshutils/modelmeshcomponentlist.h:351 */
	void RemoveAll(CModelMeshComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:328 */
	void RemoveComponent(CModelMeshComponentList<CModelMesh::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshcomponentlist.h:362 */
	Vertex_t* GetComponent(CModelMeshComponentList<CModelMesh::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshcomponentlist.h:371 */
	const Vertex_t* GetComponent(const CModelMeshComponentList<CModelMesh::Vertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshcomponentlist.h:380 */
	const CHalfEdgeComponentList<CModelMesh::Vertex_t>& GetComponents(const CModelMeshComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:389 */
	CModelMeshStreamSet& GetStreamSet(CModelMeshComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:395 */
	const CModelMeshStreamSet& GetStreamSet(const CModelMeshComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:404 */
	CModelMeshDeltaSet<CModelMesh::Vertex_t>& GetDeltaSet(CModelMeshComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:413 */
	const CModelMeshDeltaSet<CModelMesh::Vertex_t>& GetDeltaSet(const CModelMeshComponentList<CModelMesh::Vertex_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:422 */
	bool CheckIntegrity(const CModelMeshComponentList<CModelMesh::Vertex_t>* );
private:
	CHalfEdgeComponentList<CModelMesh::Vertex_t> m_ComponentList; /* 0 72 */
	CModelMeshStreamSet m_StreamSet; /* 72 40 */
	CModelMeshDeltaSet<CModelMesh::Vertex_t> m_DeltaSet; /* 112 40 */
};

// <05C586C7> ../public/meshutils/modelmeshcomponentlist.h:10
// member functions: 25
// member variables: 3
// class size: 152
class CModelMeshComponentList<CModelMesh::FaceVertex_t> {
	/* ../public/meshutils/modelmeshcomponentlist.h:118 */
	void CModelMeshComponentList(CModelMeshComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:128 */
	void CModelMeshComponentList(CModelMeshComponentList<CModelMesh::FaceVertex_t>* , const CModelMeshComponentList<CModelMesh::FaceVertex_t>& );
	/* ../public/meshutils/modelmeshcomponentlist.h:138 */
	CModelMeshComponentList<CModelMesh::FaceVertex_t>& operator=(CModelMeshComponentList<CModelMesh::FaceVertex_t>* , const CModelMeshComponentList<CModelMesh::FaceVertex_t>& );
	/* ../public/meshutils/modelmeshcomponentlist.h:151 */
	FaceVertex_t& operator[](CModelMeshComponentList<CModelMesh::FaceVertex_t>* , ComponentIndex_t);
	/* ../public/meshutils/modelmeshcomponentlist.h:16 */
	typedef ComponentIndex_t ComponentIndex_t;
	/* ../public/meshutils/modelmeshcomponentlist.h:160 */
	const FaceVertex_t& operator[](const CModelMeshComponentList<CModelMesh::FaceVertex_t>* , ComponentIndex_t);
	/* ../public/meshutils/modelmeshcomponentlist.h:169 */
	ComponentIndex_t GetComponentIndex(const CModelMeshComponentList<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshcomponentlist.h:15 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* ../public/meshutils/modelmeshcomponentlist.h:179 */
	ComponentHandle_t GetComponentHandle(const CModelMeshComponentList<CModelMesh::FaceVertex_t>* , ComponentIndex_t);
	/* ../public/meshutils/modelmeshcomponentlist.h:188 */
	int Count(const CModelMeshComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:197 */
	void EnsureCapacity(CModelMeshComponentList<CModelMesh::FaceVertex_t>* , int);
	/* ../public/meshutils/modelmeshcomponentlist.h:207 */
	void SetCount(CModelMeshComponentList<CModelMesh::FaceVertex_t>* , int);
	/* ../public/meshutils/modelmeshcomponentlist.h:217 */
	bool CanAddComponents(const CModelMeshComponentList<CModelMesh::FaceVertex_t>* , int);
	/* ../public/meshutils/modelmeshcomponentlist.h:226 */
	ComponentHandle_t AddComponent(CModelMeshComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:241 */
	void AddMultiple(CModelMeshComponentList<CModelMesh::FaceVertex_t>* , int, ComponentHandle_t* );
	/* ../public/meshutils/modelmeshcomponentlist.h:252 */
	bool CanAppendComponentList(const CModelMeshComponentList<CModelMesh::FaceVertex_t>* , const CModelMeshComponentList<CModelMesh::FaceVertex_t>& );
	/* ../public/meshutils/modelmeshcomponentlist.h:267 */
	bool AppendComponentsFromList(CModelMeshComponentList<CModelMesh::FaceVertex_t>* , const CModelMeshComponentList<CModelMesh::FaceVertex_t>& , const ComponentHandle_t* , int, CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon, CHandleTranslator* );
	/* ../public/meshutils/modelmeshcomponentlist.h:351 */
	void RemoveAll(CModelMeshComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:328 */
	void RemoveComponent(CModelMeshComponentList<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshcomponentlist.h:362 */
	FaceVertex_t* GetComponent(CModelMeshComponentList<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshcomponentlist.h:371 */
	const FaceVertex_t* GetComponent(const CModelMeshComponentList<CModelMesh::FaceVertex_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshcomponentlist.h:380 */
	const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>& GetComponents(const CModelMeshComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:389 */
	CModelMeshStreamSet& GetStreamSet(CModelMeshComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:395 */
	const CModelMeshStreamSet& GetStreamSet(const CModelMeshComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:404 */
	CModelMeshDeltaSet<CModelMesh::FaceVertex_t>& GetDeltaSet(CModelMeshComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:413 */
	const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>& GetDeltaSet(const CModelMeshComponentList<CModelMesh::FaceVertex_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:422 */
	bool CheckIntegrity(const CModelMeshComponentList<CModelMesh::FaceVertex_t>* );
private:
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t> m_ComponentList; /* 0 72 */
	CModelMeshStreamSet m_StreamSet; /* 72 40 */
	CModelMeshDeltaSet<CModelMesh::FaceVertex_t> m_DeltaSet; /* 112 40 */
};

// <05C5DC78> ../public/meshutils/modelmeshcomponentlist.h:10
// member functions: 25
// member variables: 3
// class size: 152
class CModelMeshComponentList<CModelMesh::Edge_t> {
	/* ../public/meshutils/modelmeshcomponentlist.h:118 */
	void CModelMeshComponentList(CModelMeshComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:128 */
	void CModelMeshComponentList(CModelMeshComponentList<CModelMesh::Edge_t>* , const CModelMeshComponentList<CModelMesh::Edge_t>& );
	/* ../public/meshutils/modelmeshcomponentlist.h:138 */
	CModelMeshComponentList<CModelMesh::Edge_t>& operator=(CModelMeshComponentList<CModelMesh::Edge_t>* , const CModelMeshComponentList<CModelMesh::Edge_t>& );
	/* ../public/meshutils/modelmeshcomponentlist.h:151 */
	Edge_t& operator[](CModelMeshComponentList<CModelMesh::Edge_t>* , ComponentIndex_t);
	/* ../public/meshutils/modelmeshcomponentlist.h:16 */
	typedef ComponentIndex_t ComponentIndex_t;
	/* ../public/meshutils/modelmeshcomponentlist.h:160 */
	const Edge_t& operator[](const CModelMeshComponentList<CModelMesh::Edge_t>* , ComponentIndex_t);
	/* ../public/meshutils/modelmeshcomponentlist.h:169 */
	ComponentIndex_t GetComponentIndex(const CModelMeshComponentList<CModelMesh::Edge_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshcomponentlist.h:15 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* ../public/meshutils/modelmeshcomponentlist.h:179 */
	ComponentHandle_t GetComponentHandle(const CModelMeshComponentList<CModelMesh::Edge_t>* , ComponentIndex_t);
	/* ../public/meshutils/modelmeshcomponentlist.h:188 */
	int Count(const CModelMeshComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:197 */
	void EnsureCapacity(CModelMeshComponentList<CModelMesh::Edge_t>* , int);
	/* ../public/meshutils/modelmeshcomponentlist.h:207 */
	void SetCount(CModelMeshComponentList<CModelMesh::Edge_t>* , int);
	/* ../public/meshutils/modelmeshcomponentlist.h:217 */
	bool CanAddComponents(const CModelMeshComponentList<CModelMesh::Edge_t>* , int);
	/* ../public/meshutils/modelmeshcomponentlist.h:226 */
	ComponentHandle_t AddComponent(CModelMeshComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:241 */
	void AddMultiple(CModelMeshComponentList<CModelMesh::Edge_t>* , int, ComponentHandle_t* );
	/* ../public/meshutils/modelmeshcomponentlist.h:252 */
	bool CanAppendComponentList(const CModelMeshComponentList<CModelMesh::Edge_t>* , const CModelMeshComponentList<CModelMesh::Edge_t>& );
	/* ../public/meshutils/modelmeshcomponentlist.h:267 */
	bool AppendComponentsFromList(CModelMeshComponentList<CModelMesh::Edge_t>* , const CModelMeshComponentList<CModelMesh::Edge_t>& , const ComponentHandle_t* , int, CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis, CHandleTranslator* );
	/* ../public/meshutils/modelmeshcomponentlist.h:351 */
	void RemoveAll(CModelMeshComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:328 */
	void RemoveComponent(CModelMeshComponentList<CModelMesh::Edge_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshcomponentlist.h:362 */
	Edge_t* GetComponent(CModelMeshComponentList<CModelMesh::Edge_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshcomponentlist.h:371 */
	const Edge_t* GetComponent(const CModelMeshComponentList<CModelMesh::Edge_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshcomponentlist.h:380 */
	const CHalfEdgeComponentList<CModelMesh::Edge_t>& GetComponents(const CModelMeshComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:389 */
	CModelMeshStreamSet& GetStreamSet(CModelMeshComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:395 */
	const CModelMeshStreamSet& GetStreamSet(const CModelMeshComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:404 */
	CModelMeshDeltaSet<CModelMesh::Edge_t>& GetDeltaSet(CModelMeshComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:413 */
	const CModelMeshDeltaSet<CModelMesh::Edge_t>& GetDeltaSet(const CModelMeshComponentList<CModelMesh::Edge_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:422 */
	bool CheckIntegrity(const CModelMeshComponentList<CModelMesh::Edge_t>* );
private:
	CHalfEdgeComponentList<CModelMesh::Edge_t> m_ComponentList; /* 0 72 */
	CModelMeshStreamSet m_StreamSet; /* 72 40 */
	CModelMeshDeltaSet<CModelMesh::Edge_t> m_DeltaSet; /* 112 40 */
};

// <05C63229> ../public/meshutils/modelmeshcomponentlist.h:10
// member functions: 25
// member variables: 3
// class size: 152
class CModelMeshComponentList<CModelMesh::Face_t> {
	/* ../public/meshutils/modelmeshcomponentlist.h:118 */
	void CModelMeshComponentList(CModelMeshComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:128 */
	void CModelMeshComponentList(CModelMeshComponentList<CModelMesh::Face_t>* , const CModelMeshComponentList<CModelMesh::Face_t>& );
	/* ../public/meshutils/modelmeshcomponentlist.h:138 */
	CModelMeshComponentList<CModelMesh::Face_t>& operator=(CModelMeshComponentList<CModelMesh::Face_t>* , const CModelMeshComponentList<CModelMesh::Face_t>& );
	/* ../public/meshutils/modelmeshcomponentlist.h:151 */
	Face_t& operator[](CModelMeshComponentList<CModelMesh::Face_t>* , ComponentIndex_t);
	/* ../public/meshutils/modelmeshcomponentlist.h:16 */
	typedef ComponentIndex_t ComponentIndex_t;
	/* ../public/meshutils/modelmeshcomponentlist.h:160 */
	const Face_t& operator[](const CModelMeshComponentList<CModelMesh::Face_t>* , ComponentIndex_t);
	/* ../public/meshutils/modelmeshcomponentlist.h:169 */
	ComponentIndex_t GetComponentIndex(const CModelMeshComponentList<CModelMesh::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshcomponentlist.h:15 */
	typedef ComponentHandle_t ComponentHandle_t;
	/* ../public/meshutils/modelmeshcomponentlist.h:179 */
	ComponentHandle_t GetComponentHandle(const CModelMeshComponentList<CModelMesh::Face_t>* , ComponentIndex_t);
	/* ../public/meshutils/modelmeshcomponentlist.h:188 */
	int Count(const CModelMeshComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:197 */
	void EnsureCapacity(CModelMeshComponentList<CModelMesh::Face_t>* , int);
	/* ../public/meshutils/modelmeshcomponentlist.h:207 */
	void SetCount(CModelMeshComponentList<CModelMesh::Face_t>* , int);
	/* ../public/meshutils/modelmeshcomponentlist.h:217 */
	bool CanAddComponents(const CModelMeshComponentList<CModelMesh::Face_t>* , int);
	/* ../public/meshutils/modelmeshcomponentlist.h:226 */
	ComponentHandle_t AddComponent(CModelMeshComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:241 */
	void AddMultiple(CModelMeshComponentList<CModelMesh::Face_t>* , int, ComponentHandle_t* );
	/* ../public/meshutils/modelmeshcomponentlist.h:252 */
	bool CanAppendComponentList(const CModelMeshComponentList<CModelMesh::Face_t>* , const CModelMeshComponentList<CModelMesh::Face_t>& );
	/* ../public/meshutils/modelmeshcomponentlist.h:267 */
	bool AppendComponentsFromList(CModelMeshComponentList<CModelMesh::Face_t>* , const CModelMeshComponentList<CModelMesh::Face_t>& , const ComponentHandle_t* , int, CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis, CHandleTranslator* );
	/* ../public/meshutils/modelmeshcomponentlist.h:351 */
	void RemoveAll(CModelMeshComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:328 */
	void RemoveComponent(CModelMeshComponentList<CModelMesh::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshcomponentlist.h:362 */
	Face_t* GetComponent(CModelMeshComponentList<CModelMesh::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshcomponentlist.h:371 */
	const Face_t* GetComponent(const CModelMeshComponentList<CModelMesh::Face_t>* , ComponentHandle_t);
	/* ../public/meshutils/modelmeshcomponentlist.h:380 */
	const CHalfEdgeComponentList<CModelMesh::Face_t>& GetComponents(const CModelMeshComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:389 */
	CModelMeshStreamSet& GetStreamSet(CModelMeshComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:395 */
	const CModelMeshStreamSet& GetStreamSet(const CModelMeshComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:404 */
	CModelMeshDeltaSet<CModelMesh::Face_t>& GetDeltaSet(CModelMeshComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:413 */
	const CModelMeshDeltaSet<CModelMesh::Face_t>& GetDeltaSet(const CModelMeshComponentList<CModelMesh::Face_t>* );
	/* ../public/meshutils/modelmeshcomponentlist.h:422 */
	bool CheckIntegrity(const CModelMeshComponentList<CModelMesh::Face_t>* );
private:
	CHalfEdgeComponentList<CModelMesh::Face_t> m_ComponentList; /* 0 72 */
	CModelMeshStreamSet m_StreamSet; /* 72 40 */
	CModelMeshDeltaSet<CModelMesh::Face_t> m_DeltaSet; /* 112 40 */
};

// <05F7C346> ../public/meshutils/modelmeshcomponentlist.h:118
void CModelMeshComponentList<CModelMesh::Vertex_t>::CModelMeshComponentList()
{
} /* size: 0 */

// <05F7C316> ../public/meshutils/modelmeshcomponentlist.h:118
void CModelMeshComponentList<CModelMesh::FaceVertex_t>::CModelMeshComponentList()
{
} /* size: 0 */

// <05F7C2E6> ../public/meshutils/modelmeshcomponentlist.h:118
void CModelMeshComponentList<CModelMesh::Edge_t>::CModelMeshComponentList()
{
} /* size: 0 */

// <05F7C2B6> ../public/meshutils/modelmeshcomponentlist.h:118
void CModelMeshComponentList<CModelMesh::Face_t>::CModelMeshComponentList()
{
} /* size: 0 */

// <05F7C218> ../public/meshutils/modelmeshcomponentlist.h:138
void CModelMeshComponentList<CModelMesh::Face_t>::operator=(const CModelMeshComponentList<CModelMesh::Face_t>& src)
{
} /* size: 0 */

// <05F7C1F3> ../public/meshutils/modelmeshcomponentlist.h:138
void CModelMeshComponentList<CModelMesh::Vertex_t>::operator=(const CModelMeshComponentList<CModelMesh::Vertex_t>& src)
{
} /* size: 0 */

// <05F7C1CE> ../public/meshutils/modelmeshcomponentlist.h:138
void CModelMeshComponentList<CModelMesh::FaceVertex_t>::operator=(const CModelMeshComponentList<CModelMesh::FaceVertex_t>& src)
{
} /* size: 0 */

// <05F7C1A9> ../public/meshutils/modelmeshcomponentlist.h:138
void CModelMeshComponentList<CModelMesh::Edge_t>::operator=(const CModelMeshComponentList<CModelMesh::Edge_t>& src)
{
} /* size: 0 */

// <05F76E59> ../public/meshutils/modelmeshcomponentlist.h:151
void CModelMeshComponentList<CModelMesh::Face_t>::operator[](ComponentIndex_t nIndex)
{
} /* size: 0 */

// <05F764FD> ../public/meshutils/modelmeshcomponentlist.h:160
void CModelMeshComponentList<CModelMesh::Vertex_t>::operator[](ComponentIndex_t nIndex)
{
} /* size: 0 */

// <05F764D8> ../public/meshutils/modelmeshcomponentlist.h:160
void CModelMeshComponentList<CModelMesh::FaceVertex_t>::operator[](ComponentIndex_t nIndex)
{
} /* size: 0 */

// <05F7648E> ../public/meshutils/modelmeshcomponentlist.h:160
void CModelMeshComponentList<CModelMesh::Edge_t>::operator[](ComponentIndex_t nIndex)
{
} /* size: 0 */

// <060885C2> ../public/meshutils/modelmeshcomponentlist.h:169
void CModelMeshComponentList<CModelMesh::Vertex_t>::GetComponentIndex(ComponentHandle_t handle)
{
} /* size: 0 */

// <0608813D> ../public/meshutils/modelmeshcomponentlist.h:169
void CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(ComponentHandle_t handle)
{
} /* size: 0 */

// <06087CB8> ../public/meshutils/modelmeshcomponentlist.h:169
void CModelMeshComponentList<CModelMesh::Edge_t>::GetComponentIndex(ComponentHandle_t handle)
{
} /* size: 0 */

// <06092F42> ../public/meshutils/modelmeshcomponentlist.h:179
void CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetComponentHandle(ComponentIndex_t nIndex)
{
} /* size: 0 */

// <06092CF0> ../public/meshutils/modelmeshcomponentlist.h:179
void CModelMeshComponentList<CModelMesh::Edge_t>::GetComponentHandle(ComponentIndex_t nIndex)
{
} /* size: 0 */

// <06092CB2> ../public/meshutils/modelmeshcomponentlist.h:179
void CModelMeshComponentList<CModelMesh::Face_t>::GetComponentHandle(ComponentIndex_t nIndex)
{
} /* size: 0 */

// <06092B3B> ../public/meshutils/modelmeshcomponentlist.h:179
void CModelMeshComponentList<CModelMesh::Vertex_t>::GetComponentHandle(ComponentIndex_t nIndex)
{
} /* size: 0 */

// <06092F67> ../public/meshutils/modelmeshcomponentlist.h:188
void CModelMeshComponentList<CModelMesh::FaceVertex_t>::Count()
{
} /* size: 0 */

// <06092D39> ../public/meshutils/modelmeshcomponentlist.h:188
void CModelMeshComponentList<CModelMesh::Edge_t>::Count()
{
} /* size: 0 */

// <06092CD7> ../public/meshutils/modelmeshcomponentlist.h:188
void CModelMeshComponentList<CModelMesh::Face_t>::Count()
{
} /* size: 0 */

// <06092B60> ../public/meshutils/modelmeshcomponentlist.h:188
void CModelMeshComponentList<CModelMesh::Vertex_t>::Count()
{
} /* size: 0 */

// <05F7814A> ../public/meshutils/modelmeshcomponentlist.h:197
// function calls: 11
void CModelMeshComponentList<CModelMesh::Face_t>::EnsureCapacity(int nCount)
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
	CHalfEdgeComponentList<CModelMesh::Face_t>::EnsureCapacity(
			int nCount);  // 199
} /* size: 0, inline expansions: 11 (0 bytes) */

// <05F77E8C> ../public/meshutils/modelmeshcomponentlist.h:197
// function calls: 11
void CModelMeshComponentList<CModelMesh::FaceVertex_t>::EnsureCapacity(int nCount)
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
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::EnsureCapacity(
			int nCount);  // 199
} /* size: 0, inline expansions: 11 (0 bytes) */

// <05F77E43> ../public/meshutils/modelmeshcomponentlist.h:217
void CModelMeshComponentList<CModelMesh::Face_t>::CanAddComponents(int nNumComponents)
{
} /* size: 0 */

// <05F77E1E> ../public/meshutils/modelmeshcomponentlist.h:217
void CModelMeshComponentList<CModelMesh::FaceVertex_t>::CanAddComponents(int nNumComponents)
{
} /* size: 0 */

// <05F77DF9> ../public/meshutils/modelmeshcomponentlist.h:217
void CModelMeshComponentList<CModelMesh::Edge_t>::CanAddComponents(int nNumComponents)
{
} /* size: 0 */

// <05F7B620> ../public/meshutils/modelmeshcomponentlist.h:226
// variables: 4
// function calls: 8
void CModelMeshComponentList<CModelMesh::Vertex_t>::AddComponent()
{
	const char   __FUNCTION__; // 36417
	ComponentHandle_t hNewComponent; // 228
	const int  nComponentIndex; // 229
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 232
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 229
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentL this); // 575
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::Count(); // 232
	_DebuggerBreakInlineExpressionWrapper(void); // 231
} /* size: 0, variables: 3, inline expansions: 8 (0 bytes) */

// <05F78784> ../public/meshutils/modelmeshcomponentlist.h:226
// variables: 4
// function calls: 8
void CModelMeshComponentList<CModelMesh::Edge_t>::AddComponent()
{
	const char   __FUNCTION__; // 36417
	ComponentHandle_t hNewComponent; // 228
	const int  nComponentIndex; // 229
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 232
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::Edge_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 229
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 575
	CHalfEdgeComponentList<CModelMesh::Edge_t>::Count(); // 232
	_DebuggerBreakInlineExpressionWrapper(void); // 231
} /* size: 0, variables: 3, inline expansions: 8 (0 bytes) */

// <05F77AD9> ../public/meshutils/modelmeshcomponentlist.h:226
// variables: 4
// function calls: 8
void CModelMeshComponentList<CModelMesh::Face_t>::AddComponent()
{
	const char   __FUNCTION__; // 36417
	ComponentHandle_t hNewComponent; // 228
	const int  nComponentIndex; // 229
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 232
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 229
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 575
	CHalfEdgeComponentList<CModelMesh::Face_t>::Count(); // 232
	_DebuggerBreakInlineExpressionWrapper(void); // 231
} /* size: 0, variables: 3, inline expansions: 8 (0 bytes) */

// <05F7BE36> ../public/meshutils/modelmeshcomponentlist.h:241
// variables: 2
void CModelMeshComponentList<CModelMesh::Vertex_t>::AddMultiple(int nCount, ComponentHandle_t* pOutHandles)
{
	const char   __FUNCTION__; // 36390
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 245
	}
} /* size: 0, variables: 1 */

// <05F77A34> ../public/meshutils/modelmeshcomponentlist.h:241
// variables: 2
void CModelMeshComponentList<CModelMesh::FaceVertex_t>::AddMultiple(int nCount, ComponentHandle_t* pOutHandles)
{
	const char   __FUNCTION__; // 36390
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 245
	}
} /* size: 0, variables: 1 */

// <060885E7> ../public/meshutils/modelmeshcomponentlist.h:252
void CModelMeshComponentList<CModelMesh::Vertex_t>::CanAppendComponentList(const CModelMeshComponentList<CModelMesh::Vertex_t>& srcComponentList)
{
} /* size: 0 */

// <06088162> ../public/meshutils/modelmeshcomponentlist.h:252
void CModelMeshComponentList<CModelMesh::FaceVertex_t>::CanAppendComponentList(const CModelMeshComponentList<CModelMesh::FaceVertex_t>& srcComponentList)
{
} /* size: 0 */

// <06087CDD> ../public/meshutils/modelmeshcomponentlist.h:252
void CModelMeshComponentList<CModelMesh::Edge_t>::CanAppendComponentList(const CModelMeshComponentList<CModelMesh::Edge_t>& srcComponentList)
{
} /* size: 0 */

// <06087871> ../public/meshutils/modelmeshcomponentlist.h:252
void CModelMeshComponentList<CModelMesh::Face_t>::CanAppendComponentList(const CModelMeshComponentList<CModelMesh::Face_t>& srcComponentList)
{
} /* size: 0 */

// <060931D5> ../public/meshutils/modelmeshcomponentlist.h:267
// variables: 5
void CModelMeshComponentList<CModelMesh::Vertex_t>::AppendComponentsFromList(const CModelMeshComponentList<CModelMesh::Vertex_t>& srcComponentList, const ComponentHandle_t* pSrcComponents, int nNumSrcComponents, CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL pOutNewHandles, CHandleTranslator* pOutHandleTranslator)
{
	const char   __FUNCTION__; // 12251
	CUtlVector<int, CUtlMemory<int, int> > srcIndices; // 277
	CHandleTranslator handleTranslator; // 301
	{
		int i; // 281
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 319
	}
} /* size: 0, variables: 3 */

// <0609310E> ../public/meshutils/modelmeshcomponentlist.h:267
// variables: 5
void CModelMeshComponentList<CModelMesh::FaceVertex_t>::AppendComponentsFromList(const CModelMeshComponentList<CModelMesh::FaceVertex_t>& srcComponentList, const ComponentHandle_t* pSrcComponents, int nNumSrcComponents, CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon pOutNewHandles, CHandleTranslator* pOutHandleTranslator)
{
	const char   __FUNCTION__; // 12251
	CUtlVector<int, CUtlMemory<int, int> > srcIndices; // 277
	CHandleTranslator handleTranslator; // 301
	{
		int i; // 281
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 319
	}
} /* size: 0, variables: 3 */

// <0609302E> ../public/meshutils/modelmeshcomponentlist.h:267
// variables: 5
void CModelMeshComponentList<CModelMesh::Edge_t>::AppendComponentsFromList(const CModelMeshComponentList<CModelMesh::Edge_t>& srcComponentList, const ComponentHandle_t* pSrcComponents, int nNumSrcComponents, CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis pOutNewHandles, CHandleTranslator* pOutHandleTranslator)
{
	const char   __FUNCTION__; // 12251
	CUtlVector<int, CUtlMemory<int, int> > srcIndices; // 277
	CHandleTranslator handleTranslator; // 301
	{
		int i; // 281
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 319
	}
} /* size: 0, variables: 3 */

// <06092F80> ../public/meshutils/modelmeshcomponentlist.h:267
// variables: 5
void CModelMeshComponentList<CModelMesh::Face_t>::AppendComponentsFromList(const CModelMeshComponentList<CModelMesh::Face_t>& srcComponentList, const ComponentHandle_t* pSrcComponents, int nNumSrcComponents, CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis pOutNewHandles, CHandleTranslator* pOutHandleTranslator)
{
	const char   __FUNCTION__; // 12251
	CUtlVector<int, CUtlMemory<int, int> > srcIndices; // 277
	CHandleTranslator handleTranslator; // 301
	{
		int i; // 281
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 319
	}
} /* size: 0, variables: 3 */

// <05F7A0BE> ../public/meshutils/modelmeshcomponentlist.h:328
// variables: 4
// function calls: 11
void CModelMeshComponentList<CModelMesh::Edge_t>::RemoveComponent(ComponentHandle_t hComponent)
{
	const char   __FUNCTION__; // 36493
	const int  nComponentIndex; // 330
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 344
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::Edge_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 330
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::Count(); // 155
	{
		int iDelta; // 156
		CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>::operator[](
				int i);  // 588
		CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::operator[](
				int i);  // 158
	}
	CModelMeshDeltaSet<CModelMesh::Edge_t>::RemoveValueForComponent(
				ComponentHandle_t hComponent);  // 335
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 575
	CHalfEdgeComponentList<CModelMesh::Edge_t>::Count(); // 344
} /* size: 0, variables: 2, inline expansions: 9 (0 bytes) */

// <05F79D1E> ../public/meshutils/modelmeshcomponentlist.h:328
// variables: 4
// function calls: 11
void CModelMeshComponentList<CModelMesh::Vertex_t>::RemoveComponent(ComponentHandle_t hComponent)
{
	const char   __FUNCTION__; // 36493
	const int  nComponentIndex; // 330
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 344
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 330
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::Count(); // 155
	{
		int iDelta; // 156
		CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::operator[](
				int i);  // 588
		CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::operator[](
				int i);  // 158
	}
	CModelMeshDeltaSet<CModelMesh::Vertex_t>::RemoveValueForComponent(
				ComponentHandle_t hComponent);  // 335
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentL this); // 575
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::Count(); // 344
} /* size: 0, variables: 2, inline expansions: 9 (0 bytes) */

// <05F7763C> ../public/meshutils/modelmeshcomponentlist.h:328
// variables: 4
// function calls: 11
void CModelMeshComponentList<CModelMesh::FaceVertex_t>::RemoveComponent(ComponentHandle_t hComponent)
{
	const char   __FUNCTION__; // 36493
	const int  nComponentIndex; // 330
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 344
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 330
	CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::Count(); // 155
	{
		int iDelta; // 156
		CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::operator[](
				int i);  // 588
		CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::operator[](
				int i);  // 158
	}
	CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::RemoveValueForComponent(
				ComponentHandle_t hComponent);  // 335
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeCompon this); // 575
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::Count(); // 344
} /* size: 0, variables: 2, inline expansions: 9 (0 bytes) */

// <05F771E1> ../public/meshutils/modelmeshcomponentlist.h:328
// variables: 4
// function calls: 11
void CModelMeshComponentList<CModelMesh::Face_t>::RemoveComponent(ComponentHandle_t hComponent)
{
	const char   __FUNCTION__; // 36493
	const int  nComponentIndex; // 330
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 344
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 330
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::Count(); // 155
	{
		int iDelta; // 156
		CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::operator[](
				int i);  // 588
		CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::operator[](
				int i);  // 158
	}
	CModelMeshDeltaSet<CModelMesh::Face_t>::RemoveValueForComponent(
				ComponentHandle_t hComponent);  // 335
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 575
	CHalfEdgeComponentList<CModelMesh::Face_t>::Count(); // 344
} /* size: 0, variables: 2, inline expansions: 9 (0 bytes) */

// <05F7C144> ../public/meshutils/modelmeshcomponentlist.h:351
void CModelMeshComponentList<CModelMesh::Face_t>::RemoveAll()
{
} /* size: 0 */

// <05F7C12B> ../public/meshutils/modelmeshcomponentlist.h:351
void CModelMeshComponentList<CModelMesh::Vertex_t>::RemoveAll()
{
} /* size: 0 */

// <05F7C112> ../public/meshutils/modelmeshcomponentlist.h:351
void CModelMeshComponentList<CModelMesh::FaceVertex_t>::RemoveAll()
{
} /* size: 0 */

// <05F7C0F9> ../public/meshutils/modelmeshcomponentlist.h:351
void CModelMeshComponentList<CModelMesh::Edge_t>::RemoveAll()
{
} /* size: 0 */

// <05F761AC> ../public/meshutils/modelmeshcomponentlist.h:362
void CModelMeshComponentList<CModelMesh::Vertex_t>::GetComponent(ComponentHandle_t handle)
{
} /* size: 0 */

// <05F76160> ../public/meshutils/modelmeshcomponentlist.h:362
void CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetComponent(ComponentHandle_t handle)
{
} /* size: 0 */

// <05F76114> ../public/meshutils/modelmeshcomponentlist.h:362
void CModelMeshComponentList<CModelMesh::Edge_t>::GetComponent(ComponentHandle_t handle)
{
} /* size: 0 */

// <05F760C8> ../public/meshutils/modelmeshcomponentlist.h:362
void CModelMeshComponentList<CModelMesh::Face_t>::GetComponent(ComponentHandle_t handle)
{
} /* size: 0 */

// <0608833A> ../public/meshutils/modelmeshcomponentlist.h:380
void CModelMeshComponentList<CModelMesh::Vertex_t>::GetComponents()
{
} /* size: 0 */

// <06087EB5> ../public/meshutils/modelmeshcomponentlist.h:380
void CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetComponents()
{
} /* size: 0 */

// <06087A30> ../public/meshutils/modelmeshcomponentlist.h:380
void CModelMeshComponentList<CModelMesh::Edge_t>::GetComponents()
{
} /* size: 0 */

// <060875C4> ../public/meshutils/modelmeshcomponentlist.h:380
void CModelMeshComponentList<CModelMesh::Face_t>::GetComponents()
{
} /* size: 0 */

// <060885A9> ../public/meshutils/modelmeshcomponentlist.h:395
void CModelMeshComponentList<CModelMesh::Vertex_t>::GetStreamSet()
{
} /* size: 0 */

// <06088124> ../public/meshutils/modelmeshcomponentlist.h:395
void CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetStreamSet()
{
} /* size: 0 */

// <06087C9F> ../public/meshutils/modelmeshcomponentlist.h:395
void CModelMeshComponentList<CModelMesh::Edge_t>::GetStreamSet()
{
} /* size: 0 */

// <06087833> ../public/meshutils/modelmeshcomponentlist.h:395
void CModelMeshComponentList<CModelMesh::Face_t>::GetStreamSet()
{
} /* size: 0 */

// <06088232> ../public/meshutils/modelmeshcomponentlist.h:413
void CModelMeshComponentList<CModelMesh::Vertex_t>::GetDeltaSet()
{
} /* size: 0 */

// <06087DAD> ../public/meshutils/modelmeshcomponentlist.h:413
void CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetDeltaSet()
{
} /* size: 0 */

// <06087928> ../public/meshutils/modelmeshcomponentlist.h:413
void CModelMeshComponentList<CModelMesh::Edge_t>::GetDeltaSet()
{
} /* size: 0 */

// <060874BC> ../public/meshutils/modelmeshcomponentlist.h:413
void CModelMeshComponentList<CModelMesh::Face_t>::GetDeltaSet()
{
} /* size: 0 */

// <05F7BFFE> ../public/meshutils/modelmeshcomponentlist.h:422
void CModelMeshComponentList<CModelMesh::Face_t>::CheckIntegrity()
{
} /* size: 0 */

// <05F7BFE5> ../public/meshutils/modelmeshcomponentlist.h:422
void CModelMeshComponentList<CModelMesh::Vertex_t>::CheckIntegrity()
{
} /* size: 0 */

// <05F7BFCC> ../public/meshutils/modelmeshcomponentlist.h:422
void CModelMeshComponentList<CModelMesh::Edge_t>::CheckIntegrity()
{
} /* size: 0 */

// <05F7BFB3> ../public/meshutils/modelmeshcomponentlist.h:422
void CModelMeshComponentList<CModelMesh::FaceVertex_t>::CheckIntegrity()
{
} /* size: 0 */

