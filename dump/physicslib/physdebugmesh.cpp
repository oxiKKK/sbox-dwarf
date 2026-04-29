
//
// physicslib/physdebugmesh.cpp
//
//	referenced by: libengine2.so
//
//	functions: 6
//

// <0657F3F1> physicslib/physdebugmesh.cpp:9
// variables: 3
// function calls: 13
void PhysicsDebugMeshBuffers_t::AppendTo(CVertexData<PhysicsDebugVertex_t>& vb, CIndexData<unsigned int>& ib)
{
	int nVertBase; // 11
	int nVertCount; // 12
	{
		int i; // 15
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 15
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 17
		CIndexDataBase<unsigned int>::Index(
			unsigned int nIndex);  // 17
	}
	CVertexDataBase<PhysicsDebugVertex_t>::VertexCount(); // 11
	CVertexDataBase<PhysicsDebugVertex_t>::GetBufferVertexCount(); // 12
	CUtlVectorBase<PhysicsDebugVertex_t, CUtlMemory<PhysicsDebugVertex_t, int> >::Count(); // 12
	CUtlMemory<PhysicsDebugVertex_t, int>::Base(); // 112
	CUtlVectorBase<PhysicsDebugVertex_t, CUtlMemory<PhysicsDebugVertex_t, int> >::Base(); // 13
	CVertexDataBase<PhysicsDebugVertex_t>::Base(); // 13
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 13
	CVertexDataBase<PhysicsDebugVertex_t>::AdvanceVertexCount(
				int nNumVertices);  // 14
} /* size: 186, variables: 2, inline expansions: 9 (39 bytes) */

// <0657EE4D> physicslib/physdebugmesh.cpp:20
// function calls: 26
void PhysicsDebugMeshBuffers_t::AppendIndexAndVertex(const PhysicsDebugVertex_t& vert)
{
	CUtlVectorBase<PhysicsDebugVertex_t, CUtlMemory<PhysicsDebugVertex_t, int> >::Count(); // 22
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
			unsigned int& src);  // 22
	CUtlMemory<PhysicsDebugVertex_t, int>::NumAllocated(); // 1196
	CUtlMemory<PhysicsDebugVertex_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<PhysicsDebugVertex_t, CUtlMemory<PhysicsDebugVertex_t, int> >::Element(
		int i);  // 1201
	VertexColor_t::AsUint32(); // 93
	VertexColor_t::AsUint32Ptr(); // 93
	VertexColor_t::VertexColor_t(
			const VertexColor_t& src);  // 12
	VertexColor_t::AsUint32(); // 93
	VertexColor_t::AsUint32Ptr(); // 93
	VertexColor_t::VertexColor_t(
			const VertexColor_t& src);  // 12
	PhysicsDebugVertex_t::PhysicsDebugVertex_t(
				const PhysicsDebugVertex_t  &);  // 1520
	CopyConstruct<PhysicsDebugVertex_t>(PhysicsDebugVertex_t* pMemory,
						const PhysicsDebugVertex_t& src);  // 1201
	CUtlMemory<PhysicsDebugVertex_t, int>::Base(); // 112
	CUtlVectorBase<PhysicsDebugVertex_t, CUtlMemory<PhysicsDebugVertex_t, int> >::Base(); // 368
	CUtlVectorBase<PhysicsDebugVertex_t, CUtlMemory<PhysicsDebugVertex_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<PhysicsDebugVertex_t, CUtlMemory<PhysicsDebugVertex_t, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<PhysicsDebugVertex_t, CUtlMemory<PhysicsDebugVertex_t, int> >::AddToTail(
			const PhysicsDebugVertex_t& src);  // 23
} /* size: 0, inline expansions: 26 (0 bytes) */

// <0657EAAE> physicslib/physdebugmesh.cpp:25
// function calls: 16
void PhysicsDebugMeshBuffers_t::AppendVertex(const PhysicsDebugVertex_t& vert)
{
	CUtlMemory<PhysicsDebugVertex_t, int>::NumAllocated(); // 1196
	CUtlMemory<PhysicsDebugVertex_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<PhysicsDebugVertex_t, CUtlMemory<PhysicsDebugVertex_t, int> >::Element(
		int i);  // 1201
	VertexColor_t::AsUint32(); // 93
	VertexColor_t::AsUint32Ptr(); // 93
	VertexColor_t::VertexColor_t(
			const VertexColor_t& src);  // 12
	VertexColor_t::AsUint32(); // 93
	VertexColor_t::AsUint32Ptr(); // 93
	VertexColor_t::VertexColor_t(
			const VertexColor_t& src);  // 12
	PhysicsDebugVertex_t::PhysicsDebugVertex_t(
				const PhysicsDebugVertex_t  &);  // 1520
	CopyConstruct<PhysicsDebugVertex_t>(PhysicsDebugVertex_t* pMemory,
						const PhysicsDebugVertex_t& src);  // 1201
	CUtlMemory<PhysicsDebugVertex_t, int>::Base(); // 112
	CUtlVectorBase<PhysicsDebugVertex_t, CUtlMemory<PhysicsDebugVertex_t, int> >::Base(); // 368
	CUtlVectorBase<PhysicsDebugVertex_t, CUtlMemory<PhysicsDebugVertex_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<PhysicsDebugVertex_t, CUtlMemory<PhysicsDebugVertex_t, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<PhysicsDebugVertex_t, CUtlMemory<PhysicsDebugVertex_t, int> >::AddToTail(
			const PhysicsDebugVertex_t& src);  // 27
} /* size: 165, inline expansions: 16 (369 bytes) */

// <0657EA4C> physicslib/physdebugmesh.cpp:30
// function call: 1
void PhysicsDebugMeshBuffers_t::VertexCount()
{
	CUtlVectorBase<PhysicsDebugVertex_t, CUtlMemory<PhysicsDebugVertex_t, int> >::Count(); // 32
} /* size: 8, inline expansions: 1 (0 bytes) */

// <0657E41D> physicslib/physdebugmesh.cpp:34
// function calls: 27
void PhysicsDebugMeshBuffers_t::Index3(uint v0, uint v1, uint v2)
{
	CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 1201
	CopyConstruct<unsigned int>(unsigned int* pMemory,
					const unsigned int& src);  // 1201
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
			const unsigned int& src);  // 36
	CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 1201
	CopyConstruct<unsigned int>(unsigned int* pMemory,
					const unsigned int& src);  // 1201
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
			const unsigned int& src);  // 37
	CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 1201
	CopyConstruct<unsigned int>(unsigned int* pMemory,
					const unsigned int& src);  // 1201
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
			const unsigned int& src);  // 38
} /* size: 283, inline expansions: 27 (443 bytes) */

// <0657E1EF> physicslib/physdebugmesh.cpp:41
// function calls: 10
void PhysicsDebugMeshBuffers_t::AppendPart()
{
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 43
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
			unsigned int& src);  // 43
} /* size: 108, inline expansions: 10 (162 bytes) */

