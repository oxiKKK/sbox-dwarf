
//
// src/stack_array.h
//
//	referenced by: libengine2.so
//
//	functions: 81
//	classes: 9
//

// <06BBCBC8> src/stack_array.h:12
// member functions: 16
// member variables: 4
// class size: 528
class b3StackArray<int, 128> {
	/* src/stack_array.h:15 */
	void b3StackArray(b3StackArray<int, 128>* );
	/* src/stack_array.h:22 */
	void ~b3StackArray(b3StackArray<int, 128>* );
	/* src/stack_array.h:27 */
	void Create(b3StackArray<int, 128>* );
	/* src/stack_array.h:34 */
	void Destroy(b3StackArray<int, 128>* );
	/* src/stack_array.h:42 */
	void b3StackArray(b3StackArray<int, 128>* , const b3StackArray<int, 128>& );
	/* src/stack_array.h:43 */
	void operator=(b3StackArray<int, 128>* , const b3StackArray<int, 128>& );
	/* src/stack_array.h:45 */
	int& operator[](b3StackArray<int, 128>* , int);
	/* src/stack_array.h:51 */
	const int& operator[](const b3StackArray<int, 128>* , int);
	/* src/stack_array.h:58 */
	int* Get(b3StackArray<int, 128>* , int);
	/* src/stack_array.h:64 */
	void Clear(b3StackArray<int, 128>* );
	/* src/stack_array.h:102 */
	void Reserve(b3StackArray<int, 128>* , int);
	/* src/stack_array.h:70 */
	void Resize(b3StackArray<int, 128>* , int);
	/* src/stack_array.h:127 */
	void PushBack(b3StackArray<int, 128>* , const int& );
	/* src/stack_array.h:140 */
	int* Add(b3StackArray<int, 128>* );
	/* src/stack_array.h:153 */
	int PopBack(b3StackArray<int, 128>* );
	/* src/stack_array.h:80 */
	void Append(b3StackArray<int, 128>* , const int* , int);
	int m_stackData[128]; /* 0 512 */
	int * m_data; /* 512 8 */
	int m_capacity; /* 520 4 */
	int m_count; /* 524 4 */
};

// <06BBCE86> src/stack_array.h:12
// member functions: 16
// member variables: 4
// class size: 2,064
class b3StackArray<b3ContactCache, 128> {
	/* src/stack_array.h:15 */
	void b3StackArray(b3StackArray<b3ContactCache, 128>* );
	/* src/stack_array.h:22 */
	void ~b3StackArray(b3StackArray<b3ContactCache, 128>* );
	/* src/stack_array.h:27 */
	void Create(b3StackArray<b3ContactCache, 128>* );
	/* src/stack_array.h:34 */
	void Destroy(b3StackArray<b3ContactCache, 128>* );
	/* src/stack_array.h:42 */
	void b3StackArray(b3StackArray<b3ContactCache, 128>* , const b3StackArray<b3ContactCache, 128>& );
	/* src/stack_array.h:43 */
	void operator=(b3StackArray<b3ContactCache, 128>* , const b3StackArray<b3ContactCache, 128>& );
	/* src/stack_array.h:45 */
	union b3ContactCache& operator[](b3StackArray<b3ContactCache, 128>* , int);
	/* src/stack_array.h:51 */
	const union b3ContactCache& operator[](const b3StackArray<b3ContactCache, 128>* , int);
	/* src/stack_array.h:58 */
	union b3ContactCache* Get(b3StackArray<b3ContactCache, 128>* , int);
	/* src/stack_array.h:64 */
	void Clear(b3StackArray<b3ContactCache, 128>* );
	/* src/stack_array.h:102 */
	void Reserve(b3StackArray<b3ContactCache, 128>* , int);
	/* src/stack_array.h:70 */
	void Resize(b3StackArray<b3ContactCache, 128>* , int);
	/* src/stack_array.h:127 */
	void PushBack(b3StackArray<b3ContactCache, 128>* , const union b3ContactCache& );
	/* src/stack_array.h:140 */
	union b3ContactCache* Add(b3StackArray<b3ContactCache, 128>* );
	/* src/stack_array.h:153 */
	union b3ContactCache PopBack(b3StackArray<b3ContactCache, 128>* );
	/* src/stack_array.h:80 */
	void Append(b3StackArray<b3ContactCache, 128>* , const union b3ContactCache* , int);
	union b3ContactCache m_stackData[128]; /* 0 2048 */
	union b3ContactCache * m_data; /* 2048 8 */
	int m_capacity; /* 2056 4 */
	int m_count; /* 2060 4 */
};

// <06BBD1F5> src/stack_array.h:12
// member functions: 16
// member variables: 4
// class size: 5,264
class b3StackArray<b3TriangleManifold, 16> {
	/* src/stack_array.h:15 */
	void b3StackArray(b3StackArray<b3TriangleManifold, 16>* );
	/* src/stack_array.h:22 */
	void ~b3StackArray(b3StackArray<b3TriangleManifold, 16>* );
	/* src/stack_array.h:27 */
	void Create(b3StackArray<b3TriangleManifold, 16>* );
	/* src/stack_array.h:34 */
	void Destroy(b3StackArray<b3TriangleManifold, 16>* );
	/* src/stack_array.h:42 */
	void b3StackArray(b3StackArray<b3TriangleManifold, 16>* , const b3StackArray<b3TriangleManifold, 16>& );
	/* src/stack_array.h:43 */
	void operator=(b3StackArray<b3TriangleManifold, 16>* , const b3StackArray<b3TriangleManifold, 16>& );
	/* src/stack_array.h:45 */
	b3TriangleManifold& operator[](b3StackArray<b3TriangleManifold, 16>* , int);
	/* src/stack_array.h:51 */
	const b3TriangleManifold& operator[](const b3StackArray<b3TriangleManifold, 16>* , int);
	/* src/stack_array.h:58 */
	b3TriangleManifold* Get(b3StackArray<b3TriangleManifold, 16>* , int);
	/* src/stack_array.h:64 */
	void Clear(b3StackArray<b3TriangleManifold, 16>* );
	/* src/stack_array.h:102 */
	void Reserve(b3StackArray<b3TriangleManifold, 16>* , int);
	/* src/stack_array.h:70 */
	void Resize(b3StackArray<b3TriangleManifold, 16>* , int);
	/* src/stack_array.h:127 */
	void PushBack(b3StackArray<b3TriangleManifold, 16>* , const b3TriangleManifold& );
	/* src/stack_array.h:140 */
	b3TriangleManifold* Add(b3StackArray<b3TriangleManifold, 16>* );
	/* src/stack_array.h:153 */
	b3TriangleManifold PopBack(b3StackArray<b3TriangleManifold, 16>* );
	/* src/stack_array.h:80 */
	void Append(b3StackArray<b3TriangleManifold, 16>* , const b3TriangleManifold* , int);
	b3TriangleManifold m_stackData[16]; /* 0 5248 */
	b3TriangleManifold * m_data; /* 5248 8 */
	int m_capacity; /* 5256 4 */
	int m_count; /* 5260 4 */
};

// <06BBD4AE> src/stack_array.h:12
// member functions: 16
// member variables: 4
// class size: 144
class b3StackArray<b3TentativeTriangle, 16> {
	/* src/stack_array.h:15 */
	void b3StackArray(b3StackArray<b3TentativeTriangle, 16>* );
	/* src/stack_array.h:22 */
	void ~b3StackArray(b3StackArray<b3TentativeTriangle, 16>* );
	/* src/stack_array.h:27 */
	void Create(b3StackArray<b3TentativeTriangle, 16>* );
	/* src/stack_array.h:34 */
	void Destroy(b3StackArray<b3TentativeTriangle, 16>* );
	/* src/stack_array.h:42 */
	void b3StackArray(b3StackArray<b3TentativeTriangle, 16>* , const b3StackArray<b3TentativeTriangle, 16>& );
	/* src/stack_array.h:43 */
	void operator=(b3StackArray<b3TentativeTriangle, 16>* , const b3StackArray<b3TentativeTriangle, 16>& );
	/* src/stack_array.h:45 */
	b3TentativeTriangle& operator[](b3StackArray<b3TentativeTriangle, 16>* , int);
	/* src/stack_array.h:51 */
	const b3TentativeTriangle& operator[](const b3StackArray<b3TentativeTriangle, 16>* , int);
	/* src/stack_array.h:58 */
	b3TentativeTriangle* Get(b3StackArray<b3TentativeTriangle, 16>* , int);
	/* src/stack_array.h:64 */
	void Clear(b3StackArray<b3TentativeTriangle, 16>* );
	/* src/stack_array.h:102 */
	void Reserve(b3StackArray<b3TentativeTriangle, 16>* , int);
	/* src/stack_array.h:70 */
	void Resize(b3StackArray<b3TentativeTriangle, 16>* , int);
	/* src/stack_array.h:127 */
	void PushBack(b3StackArray<b3TentativeTriangle, 16>* , const b3TentativeTriangle& );
	/* src/stack_array.h:140 */
	b3TentativeTriangle* Add(b3StackArray<b3TentativeTriangle, 16>* );
	/* src/stack_array.h:153 */
	b3TentativeTriangle PopBack(b3StackArray<b3TentativeTriangle, 16>* );
	/* src/stack_array.h:80 */
	void Append(b3StackArray<b3TentativeTriangle, 16>* , const b3TentativeTriangle* , int);
	b3TentativeTriangle m_stackData[16]; /* 0 128 */
	b3TentativeTriangle * m_data; /* 128 8 */
	int m_capacity; /* 136 4 */
	int m_count; /* 140 4 */
};

// <06BBD766> src/stack_array.h:12
// member functions: 16
// member variables: 4
// class size: 80
class b3StackArray<int, 16> {
	/* src/stack_array.h:15 */
	void b3StackArray(b3StackArray<int, 16>* );
	/* src/stack_array.h:22 */
	void ~b3StackArray(b3StackArray<int, 16>* );
	/* src/stack_array.h:27 */
	void Create(b3StackArray<int, 16>* );
	/* src/stack_array.h:34 */
	void Destroy(b3StackArray<int, 16>* );
	/* src/stack_array.h:42 */
	void b3StackArray(b3StackArray<int, 16>* , const b3StackArray<int, 16>& );
	/* src/stack_array.h:43 */
	void operator=(b3StackArray<int, 16>* , const b3StackArray<int, 16>& );
	/* src/stack_array.h:45 */
	int& operator[](b3StackArray<int, 16>* , int);
	/* src/stack_array.h:51 */
	const int& operator[](const b3StackArray<int, 16>* , int);
	/* src/stack_array.h:58 */
	int* Get(b3StackArray<int, 16>* , int);
	/* src/stack_array.h:64 */
	void Clear(b3StackArray<int, 16>* );
	/* src/stack_array.h:102 */
	void Reserve(b3StackArray<int, 16>* , int);
	/* src/stack_array.h:70 */
	void Resize(b3StackArray<int, 16>* , int);
	/* src/stack_array.h:127 */
	void PushBack(b3StackArray<int, 16>* , const int& );
	/* src/stack_array.h:140 */
	int* Add(b3StackArray<int, 16>* );
	/* src/stack_array.h:153 */
	int PopBack(b3StackArray<int, 16>* );
	/* src/stack_array.h:80 */
	void Append(b3StackArray<int, 16>* , const int* , int);
	int m_stackData[16]; /* 0 64 */
	int * m_data; /* 64 8 */
	int m_capacity; /* 72 4 */
	int m_count; /* 76 4 */
};

// <06BBDA03> src/stack_array.h:12
// member functions: 32
// member variables: 4
// class size: 2,064
class b3StackArray<b3ManifoldPoint, 32> {
	/* src/stack_array.h:15 */
	void b3StackArray(b3StackArray<b3ManifoldPoint, 32>* );
	/* src/stack_array.h:22 */
	void ~b3StackArray(b3StackArray<b3ManifoldPoint, 32>* );
	/* src/stack_array.h:27 */
	void Create(b3StackArray<b3ManifoldPoint, 32>* );
	/* src/stack_array.h:34 */
	void Destroy(b3StackArray<b3ManifoldPoint, 32>* );
	/* src/stack_array.h:42 */
	void b3StackArray(b3StackArray<b3ManifoldPoint, 32>* , const b3StackArray<b3ManifoldPoint, 32>& );
	/* src/stack_array.h:43 */
	void operator=(b3StackArray<b3ManifoldPoint, 32>* , const b3StackArray<b3ManifoldPoint, 32>& );
	/* src/stack_array.h:45 */
	b3ManifoldPoint& operator[](b3StackArray<b3ManifoldPoint, 32>* , int);
	/* src/stack_array.h:51 */
	const b3ManifoldPoint& operator[](const b3StackArray<b3ManifoldPoint, 32>* , int);
	/* src/stack_array.h:58 */
	b3ManifoldPoint* Get(b3StackArray<b3ManifoldPoint, 32>* , int);
	/* src/stack_array.h:64 */
	void Clear(b3StackArray<b3ManifoldPoint, 32>* );
	/* src/stack_array.h:102 */
	void Reserve(b3StackArray<b3ManifoldPoint, 32>* , int);
	/* src/stack_array.h:70 */
	void Resize(b3StackArray<b3ManifoldPoint, 32>* , int);
	/* src/stack_array.h:127 */
	void PushBack(b3StackArray<b3ManifoldPoint, 32>* , const b3ManifoldPoint& );
	/* src/stack_array.h:140 */
	b3ManifoldPoint* Add(b3StackArray<b3ManifoldPoint, 32>* );
	/* src/stack_array.h:153 */
	b3ManifoldPoint PopBack(b3StackArray<b3ManifoldPoint, 32>* );
	/* src/stack_array.h:80 */
	void Append(b3StackArray<b3ManifoldPoint, 32>* , const b3ManifoldPoint* , int);
	b3ManifoldPoint m_stackData[32]; /* 0 2048 */
	b3ManifoldPoint * m_data; /* 2048 8 */
	int m_capacity; /* 2056 4 */
	int m_count; /* 2060 4 */
	void b3StackArray(class b3StackArray<b3ManifoldPoint, 32> *); /* linkage=_ZN12b3StackArrayI15b3ManifoldPointLi32EEC4Ev */
	void ~b3StackArray(class b3StackArray<b3ManifoldPoint, 32> *); /* linkage=_ZN12b3StackArrayI15b3ManifoldPointLi32EED4Ev */
	void Create(class b3StackArray<b3ManifoldPoint, 32> *); /* linkage=_ZN12b3StackArrayI15b3ManifoldPointLi32EE6CreateEv */
	void Destroy(class b3StackArray<b3ManifoldPoint, 32> *); /* linkage=_ZN12b3StackArrayI15b3ManifoldPointLi32EE7DestroyEv */
	void b3StackArray(class b3StackArray<b3ManifoldPoint, 32> *, const class b3StackArray<b3ManifoldPoint, 32>  &); /* linkage=_ZN12b3StackArrayI15b3ManifoldPointLi32EEC4ERKS1_ */
	void operator=(class b3StackArray<b3ManifoldPoint, 32> *, const class b3StackArray<b3ManifoldPoint, 32>  &); /* linkage=_ZN12b3StackArrayI15b3ManifoldPointLi32EEaSERKS1_ */
	class b3ManifoldPoint & operator[](class b3StackArray<b3ManifoldPoint, 32> *, int); /* linkage=_ZN12b3StackArrayI15b3ManifoldPointLi32EEixEi */
	const class b3ManifoldPoint  & operator[](const class b3StackArray<b3ManifoldPoint, 32>  *, int); /* linkage=_ZNK12b3StackArrayI15b3ManifoldPointLi32EEixEi */
	class b3ManifoldPoint * Get(class b3StackArray<b3ManifoldPoint, 32> *, int); /* linkage=_ZN12b3StackArrayI15b3ManifoldPointLi32EE3GetEi */
	void Clear(class b3StackArray<b3ManifoldPoint, 32> *); /* linkage=_ZN12b3StackArrayI15b3ManifoldPointLi32EE5ClearEv */
	void Reserve(class b3StackArray<b3ManifoldPoint, 32> *, int); /* linkage=_ZN12b3StackArrayI15b3ManifoldPointLi32EE7ReserveEi */
	void Resize(class b3StackArray<b3ManifoldPoint, 32> *, int); /* linkage=_ZN12b3StackArrayI15b3ManifoldPointLi32EE6ResizeEi */
	void PushBack(class b3StackArray<b3ManifoldPoint, 32> *, const class b3ManifoldPoint  &); /* linkage=_ZN12b3StackArrayI15b3ManifoldPointLi32EE8PushBackERKS0_ */
	class b3ManifoldPoint * Add(class b3StackArray<b3ManifoldPoint, 32> *); /* linkage=_ZN12b3StackArrayI15b3ManifoldPointLi32EE3AddEv */
	class b3ManifoldPoint PopBack(class b3StackArray<b3ManifoldPoint, 32> *); /* linkage=_ZN12b3StackArrayI15b3ManifoldPointLi32EE7PopBackEv */
	void Append(class b3StackArray<b3ManifoldPoint, 32> *, const class b3ManifoldPoint  *, int); /* linkage=_ZN12b3StackArrayI15b3ManifoldPointLi32EE6AppendEPKS0_i */
};

// <06C07F2E> src/stack_array.h:12
// member functions: 16
// member variables: 4
// class size: 272
class b3StackArray<b3QHHalfEdge*, 32> {
	/* src/stack_array.h:15 */
	void b3StackArray(b3StackArray<b3QHHalfEdge*, 32>* );
	/* src/stack_array.h:22 */
	void ~b3StackArray(b3StackArray<b3QHHalfEdge*, 32>* );
	/* src/stack_array.h:27 */
	void Create(b3StackArray<b3QHHalfEdge*, 32>* );
	/* src/stack_array.h:34 */
	void Destroy(b3StackArray<b3QHHalfEdge*, 32>* );
	/* src/stack_array.h:42 */
	void b3StackArray(b3StackArray<b3QHHalfEdge*, 32>* , const b3StackArray<b3QHHalfEdge*, 32>& );
	/* src/stack_array.h:43 */
	void operator=(b3StackArray<b3QHHalfEdge*, 32>* , const b3StackArray<b3QHHalfEdge*, 32>& );
	/* src/stack_array.h:45 */
	b3QHHalfEdge* & operator[](b3StackArray<b3QHHalfEdge*, 32>* , int);
	/* src/stack_array.h:51 */
	b3QHHalfEdge* const& operator[](const b3StackArray<b3QHHalfEdge*, 32>* , int);
	/* src/stack_array.h:58 */
	b3QHHalfEdge** Get(b3StackArray<b3QHHalfEdge*, 32>* , int);
	/* src/stack_array.h:64 */
	void Clear(b3StackArray<b3QHHalfEdge*, 32>* );
	/* src/stack_array.h:102 */
	void Reserve(b3StackArray<b3QHHalfEdge*, 32>* , int);
	/* src/stack_array.h:70 */
	void Resize(b3StackArray<b3QHHalfEdge*, 32>* , int);
	/* src/stack_array.h:127 */
	void PushBack(b3StackArray<b3QHHalfEdge*, 32>* , b3QHHalfEdge* const& );
	/* src/stack_array.h:140 */
	b3QHHalfEdge** Add(b3StackArray<b3QHHalfEdge*, 32>* );
	/* src/stack_array.h:153 */
	b3QHHalfEdge* PopBack(b3StackArray<b3QHHalfEdge*, 32>* );
	/* src/stack_array.h:80 */
	void Append(b3StackArray<b3QHHalfEdge*, 32>* , b3QHHalfEdge* const* , int);
	b3QHHalfEdge * m_stackData[32]; /* 0 256 */
	b3QHHalfEdge * * m_data; /* 256 8 */
	int m_capacity; /* 264 4 */
	int m_count; /* 268 4 */
};

// <06C081AE> src/stack_array.h:12
// member functions: 16
// member variables: 4
// class size: 272
class b3StackArray<b3QHFace*, 32> {
	/* src/stack_array.h:15 */
	void b3StackArray(b3StackArray<b3QHFace*, 32>* );
	/* src/stack_array.h:22 */
	void ~b3StackArray(b3StackArray<b3QHFace*, 32>* );
	/* src/stack_array.h:27 */
	void Create(b3StackArray<b3QHFace*, 32>* );
	/* src/stack_array.h:34 */
	void Destroy(b3StackArray<b3QHFace*, 32>* );
	/* src/stack_array.h:42 */
	void b3StackArray(b3StackArray<b3QHFace*, 32>* , const b3StackArray<b3QHFace*, 32>& );
	/* src/stack_array.h:43 */
	void operator=(b3StackArray<b3QHFace*, 32>* , const b3StackArray<b3QHFace*, 32>& );
	/* src/stack_array.h:45 */
	b3QHFace* & operator[](b3StackArray<b3QHFace*, 32>* , int);
	/* src/stack_array.h:51 */
	b3QHFace* const& operator[](const b3StackArray<b3QHFace*, 32>* , int);
	/* src/stack_array.h:58 */
	b3QHFace** Get(b3StackArray<b3QHFace*, 32>* , int);
	/* src/stack_array.h:64 */
	void Clear(b3StackArray<b3QHFace*, 32>* );
	/* src/stack_array.h:102 */
	void Reserve(b3StackArray<b3QHFace*, 32>* , int);
	/* src/stack_array.h:70 */
	void Resize(b3StackArray<b3QHFace*, 32>* , int);
	/* src/stack_array.h:127 */
	void PushBack(b3StackArray<b3QHFace*, 32>* , b3QHFace* const& );
	/* src/stack_array.h:140 */
	b3QHFace** Add(b3StackArray<b3QHFace*, 32>* );
	/* src/stack_array.h:153 */
	b3QHFace* PopBack(b3StackArray<b3QHFace*, 32>* );
	/* src/stack_array.h:80 */
	void Append(b3StackArray<b3QHFace*, 32>* , b3QHFace* const* , int);
	b3QHFace * m_stackData[32]; /* 0 256 */
	b3QHFace * * m_data; /* 256 8 */
	int m_capacity; /* 264 4 */
	int m_count; /* 268 4 */
};

// <06C08459> src/stack_array.h:12
// member functions: 16
// member variables: 4
// class size: 784
class b3StackArray<b3Vec3, 64> {
	/* src/stack_array.h:15 */
	void b3StackArray(b3StackArray<b3Vec3, 64>* );
	/* src/stack_array.h:22 */
	void ~b3StackArray(b3StackArray<b3Vec3, 64>* );
	/* src/stack_array.h:27 */
	void Create(b3StackArray<b3Vec3, 64>* );
	/* src/stack_array.h:34 */
	void Destroy(b3StackArray<b3Vec3, 64>* );
	/* src/stack_array.h:42 */
	void b3StackArray(b3StackArray<b3Vec3, 64>* , const b3StackArray<b3Vec3, 64>& );
	/* src/stack_array.h:43 */
	void operator=(b3StackArray<b3Vec3, 64>* , const b3StackArray<b3Vec3, 64>& );
	/* src/stack_array.h:45 */
	b3Vec3& operator[](b3StackArray<b3Vec3, 64>* , int);
	/* src/stack_array.h:51 */
	const b3Vec3& operator[](const b3StackArray<b3Vec3, 64>* , int);
	/* src/stack_array.h:58 */
	b3Vec3* Get(b3StackArray<b3Vec3, 64>* , int);
	/* src/stack_array.h:64 */
	void Clear(b3StackArray<b3Vec3, 64>* );
	/* src/stack_array.h:102 */
	void Reserve(b3StackArray<b3Vec3, 64>* , int);
	/* src/stack_array.h:70 */
	void Resize(b3StackArray<b3Vec3, 64>* , int);
	/* src/stack_array.h:127 */
	void PushBack(b3StackArray<b3Vec3, 64>* , const b3Vec3& );
	/* src/stack_array.h:140 */
	b3Vec3* Add(b3StackArray<b3Vec3, 64>* );
	/* src/stack_array.h:153 */
	b3Vec3 PopBack(b3StackArray<b3Vec3, 64>* );
	/* src/stack_array.h:80 */
	void Append(b3StackArray<b3Vec3, 64>* , const b3Vec3* , int);
	b3Vec3 m_stackData[64]; /* 0 768 */
	b3Vec3 * m_data; /* 768 8 */
	int m_capacity; /* 776 4 */
	int m_count; /* 780 4 */
};

// <06C0943F> src/stack_array.h:15
void b3StackArray<b3Vec3, 64>::b3StackArray()
{
} /* size: 0 */

// <06C09426> src/stack_array.h:15
inline void b3StackArray<b3Vec3, 64>::b3StackArray()
{
} /* size: 0 */

// <06C08DC2> src/stack_array.h:15
void b3StackArray<b3QHHalfEdge::b3StackArray()
{
} /* size: 0 */

// <06C08DA9> src/stack_array.h:15
inline void b3StackArray<b3QHHalfEdge::b3StackArray()
{
} /* size: 0 */

// <06C08D62> src/stack_array.h:15
void b3StackArray<b3QHFace::b3StackArray()
{
} /* size: 0 */

// <06C08D49> src/stack_array.h:15
inline void b3StackArray<b3QHFace::b3StackArray()
{
} /* size: 0 */

// <06BBE5CB> src/stack_array.h:15
void b3StackArray<int, 128>::b3StackArray()
{
} /* size: 0 */

// <06BBE5B2> src/stack_array.h:15
inline void b3StackArray<int, 128>::b3StackArray()
{
} /* size: 0 */

// <06BBE56B> src/stack_array.h:15
void b3StackArray<b3ContactCache, 128>::b3StackArray()
{
} /* size: 0 */

// <06BBE552> src/stack_array.h:15
inline void b3StackArray<b3ContactCache, 128>::b3StackArray()
{
} /* size: 0 */

// <06BBE477> src/stack_array.h:15
void b3StackArray<b3TriangleManifold, 16>::b3StackArray()
{
} /* size: 0 */

// <06BBE45E> src/stack_array.h:15
inline void b3StackArray<b3TriangleManifold, 16>::b3StackArray()
{
} /* size: 0 */

// <06BBE417> src/stack_array.h:15
void b3StackArray<b3TentativeTriangle, 16>::b3StackArray()
{
} /* size: 0 */

// <06BBE3FE> src/stack_array.h:15
inline void b3StackArray<b3TentativeTriangle, 16>::b3StackArray()
{
} /* size: 0 */

// <06BBE2BD> src/stack_array.h:15
void b3StackArray<int, 16>::b3StackArray()
{
} /* size: 0 */

// <06BBE2A4> src/stack_array.h:15
inline void b3StackArray<int, 16>::b3StackArray()
{
} /* size: 0 */

// <06BBE238> src/stack_array.h:15
void b3StackArray<b3ManifoldPoint, 32>::b3StackArray()
{
} /* size: 0 */

// <06BBE21F> src/stack_array.h:15
inline void b3StackArray<b3ManifoldPoint, 32>::b3StackArray()
{
} /* size: 0 */

// <06C0940F> src/stack_array.h:22
void b3StackArray<b3Vec3, 64>::~b3StackArray()
{
} /* size: 0 */

// <06C093F6> src/stack_array.h:22
inline void b3StackArray<b3Vec3, 64>::~b3StackArray()
{
} /* size: 0 */

// <06C08D92> src/stack_array.h:22
void b3StackArray<b3QHHalfEdge::~b3StackArray()
{
} /* size: 0 */

// <06C08D79> src/stack_array.h:22
inline void b3StackArray<b3QHHalfEdge::~b3StackArray()
{
} /* size: 0 */

// <06C08D32> src/stack_array.h:22
void b3StackArray<b3QHFace::~b3StackArray()
{
} /* size: 0 */

// <06C08D19> src/stack_array.h:22
inline void b3StackArray<b3QHFace::~b3StackArray()
{
} /* size: 0 */

// <06BBE59B> src/stack_array.h:22
void b3StackArray<int, 128>::~b3StackArray()
{
} /* size: 0 */

// <06BBE582> src/stack_array.h:22
inline void b3StackArray<int, 128>::~b3StackArray()
{
} /* size: 0 */

// <06BBE53B> src/stack_array.h:22
void b3StackArray<b3ContactCache, 128>::~b3StackArray()
{
} /* size: 0 */

// <06BBE522> src/stack_array.h:22
inline void b3StackArray<b3ContactCache, 128>::~b3StackArray()
{
} /* size: 0 */

// <06BBE447> src/stack_array.h:22
void b3StackArray<b3TriangleManifold, 16>::~b3StackArray()
{
} /* size: 0 */

// <06BBE42E> src/stack_array.h:22
inline void b3StackArray<b3TriangleManifold, 16>::~b3StackArray()
{
} /* size: 0 */

// <06BBE3E7> src/stack_array.h:22
void b3StackArray<b3TentativeTriangle, 16>::~b3StackArray()
{
} /* size: 0 */

// <06BBE3CE> src/stack_array.h:22
inline void b3StackArray<b3TentativeTriangle, 16>::~b3StackArray()
{
} /* size: 0 */

// <06BBE28D> src/stack_array.h:22
void b3StackArray<int, 16>::~b3StackArray()
{
} /* size: 0 */

// <06BBE274> src/stack_array.h:22
inline void b3StackArray<int, 16>::~b3StackArray()
{
} /* size: 0 */

// <06BBE208> src/stack_array.h:22
void b3StackArray<b3ManifoldPoint, 32>::~b3StackArray()
{
} /* size: 0 */

// <06BBE1EF> src/stack_array.h:22
inline void b3StackArray<b3ManifoldPoint, 32>::~b3StackArray()
{
} /* size: 0 */

// <06C08BD1> src/stack_array.h:27
inline void b3StackArray<b3Vec3, 64>::Create()
{
} /* size: 0 */

// <06C088A6> src/stack_array.h:27
inline void b3StackArray<b3QHHalfEdge::Create()
{
} /* size: 0 */

// <06C08874> src/stack_array.h:27
inline void b3StackArray<b3QHFace::Create()
{
} /* size: 0 */

// <06BBE135> src/stack_array.h:27
inline void b3StackArray<int, 128>::Create()
{
} /* size: 0 */

// <06BBE103> src/stack_array.h:27
inline void b3StackArray<b3ContactCache, 128>::Create()
{
} /* size: 0 */

// <06BBE06F> src/stack_array.h:27
inline void b3StackArray<b3TriangleManifold, 16>::Create()
{
} /* size: 0 */

// <06BBE03D> src/stack_array.h:27
inline void b3StackArray<b3TentativeTriangle, 16>::Create()
{
} /* size: 0 */

// <06BBDFA9> src/stack_array.h:27
inline void b3StackArray<int, 16>::Create()
{
} /* size: 0 */

// <06BBDF46> src/stack_array.h:27
inline void b3StackArray<b3ManifoldPoint, 32>::Create()
{
} /* size: 0 */

// <06C08BB8> src/stack_array.h:34
inline void b3StackArray<b3Vec3, 64>::Destroy()
{
} /* size: 0 */

// <06C0888D> src/stack_array.h:34
inline void b3StackArray<b3QHHalfEdge::Destroy()
{
} /* size: 0 */

// <06BBE11C> src/stack_array.h:34
inline void b3StackArray<int, 128>::Destroy()
{
} /* size: 0 */

// <06BBE0EA> src/stack_array.h:34
inline void b3StackArray<b3ContactCache, 128>::Destroy()
{
} /* size: 0 */

// <06BBE056> src/stack_array.h:34
inline void b3StackArray<b3TriangleManifold, 16>::Destroy()
{
} /* size: 0 */

// <06BBE024> src/stack_array.h:34
inline void b3StackArray<b3TentativeTriangle, 16>::Destroy()
{
} /* size: 0 */

// <06BBDF90> src/stack_array.h:34
inline void b3StackArray<int, 16>::Destroy()
{
} /* size: 0 */

// <06BBDF2D> src/stack_array.h:34
inline void b3StackArray<b3ManifoldPoint, 32>::Destroy()
{
} /* size: 0 */

// <06C093AC> src/stack_array.h:45
inline void b3StackArray<b3Vec3, 64>::operator[](int index)
{
} /* size: 0 */

// <06C08C69> src/stack_array.h:45
inline void b3StackArray<b3QHFace::operator[](int index)
{
} /* size: 0 */

// <06BBE4D8> src/stack_array.h:45
inline void b3StackArray<b3ContactCache, 128>::operator[](int index)
{
} /* size: 0 */

// <06BBE4B3> src/stack_array.h:45
inline void b3StackArray<int, 128>::operator[](int index)
{
} /* size: 0 */

// <06BBE31E> src/stack_array.h:45
inline void b3StackArray<b3TentativeTriangle, 16>::operator[](int index)
{
} /* size: 0 */

// <06BBE2D4> src/stack_array.h:45
inline void b3StackArray<b3TriangleManifold, 16>::operator[](int index)
{
} /* size: 0 */

// <06BBE1CA> src/stack_array.h:45
inline void b3StackArray<int, 16>::operator[](int index)
{
} /* size: 0 */

// <06C08CC1> src/stack_array.h:51
inline void b3StackArray<b3QHHalfEdge::operator[](int index)
{
} /* size: 0 */

// <06BBE2F9> src/stack_array.h:58
inline void b3StackArray<b3TriangleManifold, 16>::Get(int index)
{
} /* size: 0 */

// <06BBE607> src/stack_array.h:64
inline void b3StackArray<int, 128>::Clear()
{
} /* size: 0 */

// <06C093D1> src/stack_array.h:70
inline void b3StackArray<b3Vec3, 64>::Resize(int count)
{
} /* size: 0 */

// <06BBE4FD> src/stack_array.h:70
inline void b3StackArray<b3ContactCache, 128>::Resize(int count)
{
} /* size: 0 */

// <06BBE24F> src/stack_array.h:70
inline void b3StackArray<int, 16>::Resize(int count)
{
} /* size: 0 */

// <06BBE17F> src/stack_array.h:80
// variables: 2
inline void b3StackArray<b3ManifoldPoint, 32>::Append(const b3ManifoldPoint* otherValues, int otherCount)
{
	{
		int requiredCapacity; // 84
		int newCapacity; // 85
	}
} /* size: 0 */

// <06C08B87> src/stack_array.h:102
// variable: 1
inline void b3StackArray<b3Vec3, 64>::Reserve(int capacity)
{
	b3Vec3* data; // 111
} /* size: 0, variables: 1 */

// <06C0882A> src/stack_array.h:102
// variable: 1
inline void b3StackArray<b3QHHalfEdge::Reserve(int capacity)
{
	b3QHHalfEdge** data; // 111
} /* size: 0, variables: 1 */

// <06C087F9> src/stack_array.h:102
// variable: 1
inline void b3StackArray<b3QHFace::Reserve(int capacity)
{
	b3QHFace** data; // 111
} /* size: 0, variables: 1 */

// <06BBE14E> src/stack_array.h:102
// variable: 1
inline void b3StackArray<int, 128>::Reserve(int capacity)
{
	int* data; // 111
} /* size: 0, variables: 1 */

// <06BBE0B9> src/stack_array.h:102
// variable: 1
inline void b3StackArray<b3ContactCache, 128>::Reserve(int capacity)
{
	union b3ContactCache* data; // 111
} /* size: 0, variables: 1 */

// <06BBDFF3> src/stack_array.h:102
// variable: 1
inline void b3StackArray<b3TriangleManifold, 16>::Reserve(int capacity)
{
	b3TriangleManifold* data; // 111
} /* size: 0, variables: 1 */

// <06BBDFC2> src/stack_array.h:102
// variable: 1
inline void b3StackArray<b3TentativeTriangle, 16>::Reserve(int capacity)
{
	b3TentativeTriangle* data; // 111
} /* size: 0, variables: 1 */

// <06BBDF5F> src/stack_array.h:102
// variable: 1
inline void b3StackArray<int, 16>::Reserve(int capacity)
{
	int* data; // 111
} /* size: 0, variables: 1 */

// <06BBDEFC> src/stack_array.h:102
// variable: 1
inline void b3StackArray<b3ManifoldPoint, 32>::Reserve(int capacity)
{
	b3ManifoldPoint* data; // 111
} /* size: 0, variables: 1 */

// <06C08CE6> src/stack_array.h:127
// variable: 1
inline void b3StackArray<b3QHHalfEdge::PushBack(b3QHHalfEdge* const& value)
{
	{
		int newCapacity; // 132
	}
} /* size: 0 */

// <06C08C8E> src/stack_array.h:127
// variable: 1
inline void b3StackArray<b3QHFace::PushBack(b3QHFace* const& value)
{
	{
		int newCapacity; // 132
	}
} /* size: 0 */

// <06BBE620> src/stack_array.h:127
// variable: 1
inline void b3StackArray<int, 128>::PushBack(const int& value)
{
	{
		int newCapacity; // 132
	}
} /* size: 0 */

// <06BBE376> src/stack_array.h:127
// variable: 1
inline void b3StackArray<b3TriangleManifold, 16>::PushBack(const b3TriangleManifold& value)
{
	{
		int newCapacity; // 132
	}
} /* size: 0 */

// <06BBE343> src/stack_array.h:127
// variable: 1
inline void b3StackArray<b3TentativeTriangle, 16>::PushBack(const b3TentativeTriangle& value)
{
	{
		int newCapacity; // 132
	}
} /* size: 0 */

