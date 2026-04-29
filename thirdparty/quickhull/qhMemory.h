
//
// thirdparty/quickhull/qhMemory.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	classes: 6
//

// <0610CECC> ../thirdparty/quickhull/qhMemory.h:22
void* qhAlloc(size_t)
{
} /* size: 0 */

// <0610CEB3> ../thirdparty/quickhull/qhMemory.h:23
void qhFree(void *)
{
} /* size: 0 */

// <00997B76> ../thirdparty/quickhull/qhMemory.h:30
// member functions: 8
// member variables: 3
// class size: 24
class qhPool<qhVertex> {
	/* ../thirdparty/quickhull/qhMemory.inl:16 */
	void qhPool(qhPool<qhVertex>* );
	/* ../thirdparty/quickhull/qhMemory.inl:27 */
	void ~qhPool(qhPool<qhVertex>* );
	/* ../thirdparty/quickhull/qhMemory.inl:35 */
	void Clear(qhPool<qhVertex>* );
	/* ../thirdparty/quickhull/qhMemory.inl:46 */
	void Resize(qhPool<qhVertex>* , int);
	/* ../thirdparty/quickhull/qhMemory.inl:67 */
	qhVertex* Allocate(qhPool<qhVertex>* );
	/* ../thirdparty/quickhull/qhMemory.inl:83 */
	void Free(qhPool<qhVertex>* , qhVertex* );
private:
	int mSize; /* 0 4 */
	qhVertex * mPool; /* 8 8 */
	int mFree; /* 16 4 */
	/* ../thirdparty/quickhull/qhMemory.h:47 */
	void qhPool(qhPool<qhVertex>* , const qhPool<qhVertex>& );
	/* ../thirdparty/quickhull/qhMemory.h:48 */
	qhPool<qhVertex>& operator=(qhPool<qhVertex>* , const qhPool<qhVertex>& );
};

// <00997CE6> ../thirdparty/quickhull/qhMemory.h:30
// member functions: 8
// member variables: 3
// class size: 24
class qhPool<qhHalfEdge> {
	/* ../thirdparty/quickhull/qhMemory.inl:16 */
	void qhPool(qhPool<qhHalfEdge>* );
	/* ../thirdparty/quickhull/qhMemory.inl:27 */
	void ~qhPool(qhPool<qhHalfEdge>* );
	/* ../thirdparty/quickhull/qhMemory.inl:35 */
	void Clear(qhPool<qhHalfEdge>* );
	/* ../thirdparty/quickhull/qhMemory.inl:46 */
	void Resize(qhPool<qhHalfEdge>* , int);
	/* ../thirdparty/quickhull/qhMemory.inl:67 */
	qhHalfEdge* Allocate(qhPool<qhHalfEdge>* );
	/* ../thirdparty/quickhull/qhMemory.inl:83 */
	void Free(qhPool<qhHalfEdge>* , qhHalfEdge* );
private:
	int mSize; /* 0 4 */
	qhHalfEdge * mPool; /* 8 8 */
	int mFree; /* 16 4 */
	/* ../thirdparty/quickhull/qhMemory.h:47 */
	void qhPool(qhPool<qhHalfEdge>* , const qhPool<qhHalfEdge>& );
	/* ../thirdparty/quickhull/qhMemory.h:48 */
	qhPool<qhHalfEdge>& operator=(qhPool<qhHalfEdge>* , const qhPool<qhHalfEdge>& );
};

// <00997E56> ../thirdparty/quickhull/qhMemory.h:30
// member functions: 16
// member variables: 3
// class size: 24
class qhPool<qhFace> {
	/* ../thirdparty/quickhull/qhMemory.inl:16 */
	void qhPool(qhPool<qhFace>* );
	/* ../thirdparty/quickhull/qhMemory.inl:27 */
	void ~qhPool(qhPool<qhFace>* );
	/* ../thirdparty/quickhull/qhMemory.inl:35 */
	void Clear(qhPool<qhFace>* );
	/* ../thirdparty/quickhull/qhMemory.inl:46 */
	void Resize(qhPool<qhFace>* , int);
	/* ../thirdparty/quickhull/qhMemory.inl:67 */
	qhFace* Allocate(qhPool<qhFace>* );
	/* ../thirdparty/quickhull/qhMemory.inl:83 */
	void Free(qhPool<qhFace>* , qhFace* );
private:
	int mSize; /* 0 4 */
	qhFace * mPool; /* 8 8 */
	int mFree; /* 16 4 */
	/* ../thirdparty/quickhull/qhMemory.h:47 */
	void qhPool(qhPool<qhFace>* , const qhPool<qhFace>& );
	/* ../thirdparty/quickhull/qhMemory.h:48 */
	qhPool<qhFace>& operator=(qhPool<qhFace>* , const qhPool<qhFace>& );
	void qhPool(class qhPool<qhFace> *); /* linkage=_ZN6qhPoolI6qhFaceEC4Ev */
	void ~qhPool(class qhPool<qhFace> *); /* linkage=_ZN6qhPoolI6qhFaceED4Ev */
	void Clear(class qhPool<qhFace> *); /* linkage=_ZN6qhPoolI6qhFaceE5ClearEv */
	void Resize(class qhPool<qhFace> *, int); /* linkage=_ZN6qhPoolI6qhFaceE6ResizeEi */
	class qhFace * Allocate(class qhPool<qhFace> *); /* linkage=_ZN6qhPoolI6qhFaceE8AllocateEv */
	void Free(class qhPool<qhFace> *, class qhFace *); /* linkage=_ZN6qhPoolI6qhFaceE4FreeEPS0_ */
	void qhPool(class qhPool<qhFace> *, const class qhPool<qhFace>  &); /* linkage=_ZN6qhPoolI6qhFaceEC4ERKS1_ */
	class qhPool<qhFace> & operator=(class qhPool<qhFace> *, const class qhPool<qhFace>  &); /* linkage=_ZN6qhPoolI6qhFaceEaSERKS1_ */
};

// <061E7459> thirdparty/quickhull/qhMemory.h:30
// member functions: 8
// member variables: 3
// class size: 24
class qhPool<qhVertex> {
	/* thirdparty/quickhull/qhMemory.inl:16 */
	void qhPool(qhPool<qhVertex>* );
	/* thirdparty/quickhull/qhMemory.inl:27 */
	void ~qhPool(qhPool<qhVertex>* );
	/* thirdparty/quickhull/qhMemory.inl:35 */
	void Clear(qhPool<qhVertex>* );
	/* thirdparty/quickhull/qhMemory.inl:46 */
	void Resize(qhPool<qhVertex>* , int);
	/* thirdparty/quickhull/qhMemory.inl:67 */
	qhVertex* Allocate(qhPool<qhVertex>* );
	/* thirdparty/quickhull/qhMemory.inl:83 */
	void Free(qhPool<qhVertex>* , qhVertex* );
private:
	int mSize; /* 0 4 */
	qhVertex * mPool; /* 8 8 */
	int mFree; /* 16 4 */
	/* thirdparty/quickhull/qhMemory.h:47 */
	void qhPool(qhPool<qhVertex>* , const qhPool<qhVertex>& );
	/* thirdparty/quickhull/qhMemory.h:48 */
	qhPool<qhVertex>& operator=(qhPool<qhVertex>* , const qhPool<qhVertex>& );
};

// <061E75C0> thirdparty/quickhull/qhMemory.h:30
// member functions: 8
// member variables: 3
// class size: 24
class qhPool<qhHalfEdge> {
	/* thirdparty/quickhull/qhMemory.inl:16 */
	void qhPool(qhPool<qhHalfEdge>* );
	/* thirdparty/quickhull/qhMemory.inl:27 */
	void ~qhPool(qhPool<qhHalfEdge>* );
	/* thirdparty/quickhull/qhMemory.inl:35 */
	void Clear(qhPool<qhHalfEdge>* );
	/* thirdparty/quickhull/qhMemory.inl:46 */
	void Resize(qhPool<qhHalfEdge>* , int);
	/* thirdparty/quickhull/qhMemory.inl:67 */
	qhHalfEdge* Allocate(qhPool<qhHalfEdge>* );
	/* thirdparty/quickhull/qhMemory.inl:83 */
	void Free(qhPool<qhHalfEdge>* , qhHalfEdge* );
private:
	int mSize; /* 0 4 */
	qhHalfEdge * mPool; /* 8 8 */
	int mFree; /* 16 4 */
	/* thirdparty/quickhull/qhMemory.h:47 */
	void qhPool(qhPool<qhHalfEdge>* , const qhPool<qhHalfEdge>& );
	/* thirdparty/quickhull/qhMemory.h:48 */
	qhPool<qhHalfEdge>& operator=(qhPool<qhHalfEdge>* , const qhPool<qhHalfEdge>& );
};

// <061E7727> thirdparty/quickhull/qhMemory.h:30
// member functions: 16
// member variables: 3
// class size: 24
class qhPool<qhFace> {
	/* thirdparty/quickhull/qhMemory.inl:16 */
	void qhPool(qhPool<qhFace>* );
	/* thirdparty/quickhull/qhMemory.inl:27 */
	void ~qhPool(qhPool<qhFace>* );
	/* thirdparty/quickhull/qhMemory.inl:35 */
	void Clear(qhPool<qhFace>* );
	/* thirdparty/quickhull/qhMemory.inl:46 */
	void Resize(qhPool<qhFace>* , int);
	/* thirdparty/quickhull/qhMemory.inl:67 */
	qhFace* Allocate(qhPool<qhFace>* );
	/* thirdparty/quickhull/qhMemory.inl:83 */
	void Free(qhPool<qhFace>* , qhFace* );
private:
	int mSize; /* 0 4 */
	qhFace * mPool; /* 8 8 */
	int mFree; /* 16 4 */
	/* thirdparty/quickhull/qhMemory.h:47 */
	void qhPool(qhPool<qhFace>* , const qhPool<qhFace>& );
	/* thirdparty/quickhull/qhMemory.h:48 */
	qhPool<qhFace>& operator=(qhPool<qhFace>* , const qhPool<qhFace>& );
	void qhPool(class qhPool<qhFace> *); /* linkage=_ZN6qhPoolI6qhFaceEC4Ev */
	void ~qhPool(class qhPool<qhFace> *); /* linkage=_ZN6qhPoolI6qhFaceED4Ev */
	void Clear(class qhPool<qhFace> *); /* linkage=_ZN6qhPoolI6qhFaceE5ClearEv */
	void Resize(class qhPool<qhFace> *, int); /* linkage=_ZN6qhPoolI6qhFaceE6ResizeEi */
	class qhFace * Allocate(class qhPool<qhFace> *); /* linkage=_ZN6qhPoolI6qhFaceE8AllocateEv */
	void Free(class qhPool<qhFace> *, class qhFace *); /* linkage=_ZN6qhPoolI6qhFaceE4FreeEPS0_ */
	void qhPool(class qhPool<qhFace> *, const class qhPool<qhFace>  &); /* linkage=_ZN6qhPoolI6qhFaceEC4ERKS1_ */
	class qhPool<qhFace> & operator=(class qhPool<qhFace> *, const class qhPool<qhFace>  &); /* linkage=_ZN6qhPoolI6qhFaceEaSERKS1_ */
};

