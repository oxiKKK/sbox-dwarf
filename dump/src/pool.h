
//
// src/pool.h
//
//	referenced by: libengine2.so
//
//	functions: 21
//	classes: 3
//

// <06B6A70E> src/pool.h:11
// member functions: 12
// member variables: 3
// class size: 24
class b3Pool<b3QHVertex> {
	/* src/pool.h:42 */
	void b3Pool(b3Pool<b3QHVertex>* );
	/* src/pool.h:16 */
	void b3Pool(b3Pool<b3QHVertex>* , b3Pool<b3QHVertex>& );
	/* src/pool.h:17 */
	void b3Pool(b3Pool<b3QHVertex>* , const b3Pool<b3QHVertex>& );
	/* src/pool.h:49 */
	void ~b3Pool(b3Pool<b3QHVertex>* );
	/* src/pool.h:21 */
	b3Pool<b3QHVertex>& operator=(b3Pool<b3QHVertex>* , b3Pool<b3QHVertex>& );
	/* src/pool.h:22 */
	b3Pool<b3QHVertex>& operator=(b3Pool<b3QHVertex>* , const b3Pool<b3QHVertex>& );
	/* src/pool.h:54 */
	void Reserve(b3Pool<b3QHVertex>* , int);
	/* src/pool.h:79 */
	int Alloc(b3Pool<b3QHVertex>* );
	/* src/pool.h:95 */
	void Free(b3Pool<b3QHVertex>* , int);
	/* src/pool.h:104 */
	b3QHVertex* Allocate(b3Pool<b3QHVertex>* );
	/* src/pool.h:110 */
	void Free(b3Pool<b3QHVertex>* , b3QHVertex* );
	/* src/pool.h:116 */
	const b3QHVertex& operator[](const b3Pool<b3QHVertex>* , int);
	int m_capacity; /* 0 4 */
	b3QHVertex * m_objects; /* 8 8 */
	int m_next; /* 16 4 */
};

// <06B6A915> src/pool.h:11
// member functions: 12
// member variables: 3
// class size: 24
class b3Pool<b3QHHalfEdge> {
	/* src/pool.h:42 */
	void b3Pool(b3Pool<b3QHHalfEdge>* );
	/* src/pool.h:16 */
	void b3Pool(b3Pool<b3QHHalfEdge>* , b3Pool<b3QHHalfEdge>& );
	/* src/pool.h:17 */
	void b3Pool(b3Pool<b3QHHalfEdge>* , const b3Pool<b3QHHalfEdge>& );
	/* src/pool.h:49 */
	void ~b3Pool(b3Pool<b3QHHalfEdge>* );
	/* src/pool.h:21 */
	b3Pool<b3QHHalfEdge>& operator=(b3Pool<b3QHHalfEdge>* , b3Pool<b3QHHalfEdge>& );
	/* src/pool.h:22 */
	b3Pool<b3QHHalfEdge>& operator=(b3Pool<b3QHHalfEdge>* , const b3Pool<b3QHHalfEdge>& );
	/* src/pool.h:54 */
	void Reserve(b3Pool<b3QHHalfEdge>* , int);
	/* src/pool.h:79 */
	int Alloc(b3Pool<b3QHHalfEdge>* );
	/* src/pool.h:95 */
	void Free(b3Pool<b3QHHalfEdge>* , int);
	/* src/pool.h:104 */
	b3QHHalfEdge* Allocate(b3Pool<b3QHHalfEdge>* );
	/* src/pool.h:110 */
	void Free(b3Pool<b3QHHalfEdge>* , b3QHHalfEdge* );
	/* src/pool.h:116 */
	const b3QHHalfEdge& operator[](const b3Pool<b3QHHalfEdge>* , int);
	int m_capacity; /* 0 4 */
	b3QHHalfEdge * m_objects; /* 8 8 */
	int m_next; /* 16 4 */
};

// <06B6AB1C> src/pool.h:11
// member functions: 24
// member variables: 3
// class size: 24
class b3Pool<b3QHFace> {
	/* src/pool.h:42 */
	void b3Pool(b3Pool<b3QHFace>* );
	/* src/pool.h:16 */
	void b3Pool(b3Pool<b3QHFace>* , b3Pool<b3QHFace>& );
	/* src/pool.h:17 */
	void b3Pool(b3Pool<b3QHFace>* , const b3Pool<b3QHFace>& );
	/* src/pool.h:49 */
	void ~b3Pool(b3Pool<b3QHFace>* );
	/* src/pool.h:21 */
	b3Pool<b3QHFace>& operator=(b3Pool<b3QHFace>* , b3Pool<b3QHFace>& );
	/* src/pool.h:22 */
	b3Pool<b3QHFace>& operator=(b3Pool<b3QHFace>* , const b3Pool<b3QHFace>& );
	/* src/pool.h:54 */
	void Reserve(b3Pool<b3QHFace>* , int);
	/* src/pool.h:79 */
	int Alloc(b3Pool<b3QHFace>* );
	/* src/pool.h:95 */
	void Free(b3Pool<b3QHFace>* , int);
	/* src/pool.h:104 */
	b3QHFace* Allocate(b3Pool<b3QHFace>* );
	/* src/pool.h:110 */
	void Free(b3Pool<b3QHFace>* , b3QHFace* );
	/* src/pool.h:116 */
	const b3QHFace& operator[](const b3Pool<b3QHFace>* , int);
	int m_capacity; /* 0 4 */
	b3QHFace * m_objects; /* 8 8 */
	int m_next; /* 16 4 */
	void b3Pool(class b3Pool<b3QHFace> *); /* linkage=_ZN6b3PoolI8b3QHFaceEC4Ev */
	void b3Pool(class b3Pool<b3QHFace> *, class b3Pool<b3QHFace> &); /* linkage=_ZN6b3PoolI8b3QHFaceEC4EOS1_ */
	void b3Pool(class b3Pool<b3QHFace> *, const class b3Pool<b3QHFace>  &); /* linkage=_ZN6b3PoolI8b3QHFaceEC4ERKS1_ */
	void ~b3Pool(class b3Pool<b3QHFace> *); /* linkage=_ZN6b3PoolI8b3QHFaceED4Ev */
	class b3Pool<b3QHFace> & operator=(class b3Pool<b3QHFace> *, class b3Pool<b3QHFace> &); /* linkage=_ZN6b3PoolI8b3QHFaceEaSEOS1_ */
	class b3Pool<b3QHFace> & operator=(class b3Pool<b3QHFace> *, const class b3Pool<b3QHFace>  &); /* linkage=_ZN6b3PoolI8b3QHFaceEaSERKS1_ */
	void Reserve(class b3Pool<b3QHFace> *, int); /* linkage=_ZN6b3PoolI8b3QHFaceE7ReserveEi */
	int Alloc(class b3Pool<b3QHFace> *); /* linkage=_ZN6b3PoolI8b3QHFaceE5AllocEv */
	void Free(class b3Pool<b3QHFace> *, int); /* linkage=_ZN6b3PoolI8b3QHFaceE4FreeEi */
	class b3QHFace * Allocate(class b3Pool<b3QHFace> *); /* linkage=_ZN6b3PoolI8b3QHFaceE8AllocateEv */
	void Free(class b3Pool<b3QHFace> *, class b3QHFace *); /* linkage=_ZN6b3PoolI8b3QHFaceE4FreeEPS0_ */
	const class b3QHFace  & operator[](const class b3Pool<b3QHFace>  *, int); /* linkage=_ZNK6b3PoolI8b3QHFaceEixEi */
};

// <06C09737> src/pool.h:42
void b3Pool<b3QHVertex>::b3Pool()
{
} /* size: 0 */

// <06C096D7> src/pool.h:42
void b3Pool<b3QHHalfEdge>::b3Pool()
{
} /* size: 0 */

// <06C09677> src/pool.h:42
void b3Pool<b3QHFace>::b3Pool()
{
} /* size: 0 */

// <06C09707> src/pool.h:49
void b3Pool<b3QHVertex>::~b3Pool()
{
} /* size: 0 */

// <06C096A7> src/pool.h:49
void b3Pool<b3QHHalfEdge>::~b3Pool()
{
} /* size: 0 */

// <06C09647> src/pool.h:49
void b3Pool<b3QHFace>::~b3Pool()
{
} /* size: 0 */

// <06C09260> src/pool.h:54
// variables: 4
// function call: 1
void b3Pool<b3QHVertex>::Reserve(int capacity)
{
	{
		b3QHVertex* objects; // 58
		int* nNext; // 71
		{
			int i; // 65
			{
				int* nNext; // 67
			}
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 60
	}
} /* size: 214 */

// <06C09114> src/pool.h:54
// variables: 4
// function call: 1
void b3Pool<b3QHHalfEdge>::Reserve(int capacity)
{
	{
		b3QHHalfEdge* objects; // 58
		int* nNext; // 71
		{
			int i; // 65
			{
				int* nNext; // 67
			}
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 60
	}
} /* size: 214 */

// <06C08FC9> src/pool.h:54
// variables: 4
// function call: 1
void b3Pool<b3QHFace>::Reserve(int capacity)
{
	{
		b3QHFace* objects; // 58
		int* nNext; // 71
		{
			int i; // 65
			{
				int* nNext; // 67
			}
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 60
	}
} /* size: 182 */

// <06C08B54> src/pool.h:79
// variables: 2
void b3Pool<b3QHVertex>::Alloc()
{
	int index; // 89
	{
		int newCapacity; // 84
	}
} /* size: 0, variables: 1 */

// <06C08AFC> src/pool.h:79
// variables: 2
void b3Pool<b3QHFace>::Alloc()
{
	int index; // 89
	{
		int newCapacity; // 84
	}
} /* size: 0, variables: 1 */

// <06C08AC9> src/pool.h:79
// variables: 2
void b3Pool<b3QHHalfEdge>::Alloc()
{
	int index; // 89
	{
		int newCapacity; // 84
	}
} /* size: 0, variables: 1 */

// <06C08B2F> src/pool.h:95
void b3Pool<b3QHVertex>::Free(int index)
{
} /* size: 0 */

// <06C08AA4> src/pool.h:95
void b3Pool<b3QHHalfEdge>::Free(int index)
{
} /* size: 0 */

// <06C08A7F> src/pool.h:95
void b3Pool<b3QHFace>::Free(int index)
{
} /* size: 0 */

// <06C08FA4> src/pool.h:104
// variable: 1
void b3Pool<b3QHVertex>::Allocate()
{
	int index; // 106
} /* size: 0, variables: 1 */

// <06C08F24> src/pool.h:104
// variable: 1
void b3Pool<b3QHFace>::Allocate()
{
	int index; // 106
} /* size: 0, variables: 1 */

// <06C08EFF> src/pool.h:104
// variable: 1
void b3Pool<b3QHHalfEdge>::Allocate()
{
	int index; // 106
} /* size: 0, variables: 1 */

// <06C08F49> src/pool.h:110
// variable: 1
void b3Pool<b3QHVertex>::Free(b3QHVertex* address)
{
	int index; // 112
} /* size: 0, variables: 1 */

// <06C08EA4> src/pool.h:110
// variable: 1
void b3Pool<b3QHHalfEdge>::Free(b3QHHalfEdge* address)
{
	int index; // 112
} /* size: 0, variables: 1 */

// <06C08E73> src/pool.h:110
// variable: 1
void b3Pool<b3QHFace>::Free(b3QHFace* address)
{
	int index; // 112
} /* size: 0, variables: 1 */

