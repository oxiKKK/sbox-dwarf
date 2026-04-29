
//
// thirdparty/quickhull/qhList.h
//
//	referenced by: libengine2.so
//
//	classes: 4
//

// <00996D29> ../thirdparty/quickhull/qhList.h:32
// member functions: 34
// member variable: 1
// class size: 48
class qhList<qhVertex> {
	/* ../thirdparty/quickhull/qhList.inl:50 */
	void qhList(qhList<qhVertex>* );
	/* ../thirdparty/quickhull/qhList.inl:59 */
	int Size(const qhList<qhVertex>* );
	/* ../thirdparty/quickhull/qhList.inl:73 */
	bool Empty(const qhList<qhVertex>* );
	/* ../thirdparty/quickhull/qhList.inl:81 */
	void Clear(qhList<qhVertex>* );
	/* ../thirdparty/quickhull/qhList.inl:90 */
	void PushFront(qhList<qhVertex>* , qhVertex* );
	/* ../thirdparty/quickhull/qhList.inl:98 */
	void PopFront(qhList<qhVertex>* );
	/* ../thirdparty/quickhull/qhList.inl:109 */
	void PushBack(qhList<qhVertex>* , qhVertex* );
	/* ../thirdparty/quickhull/qhList.inl:117 */
	void PopBack(qhList<qhVertex>* );
	/* ../thirdparty/quickhull/qhList.inl:128 */
	void Insert(qhList<qhVertex>* , qhVertex* , qhVertex* );
	/* ../thirdparty/quickhull/qhList.inl:136 */
	void Remove(qhList<qhVertex>* , qhVertex* );
	/* ../thirdparty/quickhull/qhList.inl:144 */
	int IndexOf(const qhList<qhVertex>* , const qhVertex* );
	/* ../thirdparty/quickhull/qhList.inl:163 */
	qhVertex* Begin(qhList<qhVertex>* );
	/* ../thirdparty/quickhull/qhList.inl:171 */
	const qhVertex* Begin(const qhList<qhVertex>* );
	/* ../thirdparty/quickhull/qhList.inl:179 */
	qhVertex* End(qhList<qhVertex>* );
	/* ../thirdparty/quickhull/qhList.inl:187 */
	const qhVertex* End(const qhList<qhVertex>* );
private:
	qhVertex mHead; /* 0 48 */
	/* ../thirdparty/quickhull/qhList.h:59 */
	void qhList(qhList<qhVertex>* , const qhList<qhVertex>& );
	/* ../thirdparty/quickhull/qhList.h:60 */
	qhList<qhVertex>& operator=(qhList<qhVertex>* , const qhList<qhVertex>& );
	void qhList(class qhList<qhVertex> *); /* linkage=_ZN6qhListI8qhVertexEC4Ev */
	int Size(const class qhList<qhVertex>  *); /* linkage=_ZNK6qhListI8qhVertexE4SizeEv */
	bool Empty(const class qhList<qhVertex>  *); /* linkage=_ZNK6qhListI8qhVertexE5EmptyEv */
	void Clear(class qhList<qhVertex> *); /* linkage=_ZN6qhListI8qhVertexE5ClearEv */
	void PushFront(class qhList<qhVertex> *, class qhVertex *); /* linkage=_ZN6qhListI8qhVertexE9PushFrontEPS0_ */
	void PopFront(class qhList<qhVertex> *); /* linkage=_ZN6qhListI8qhVertexE8PopFrontEv */
	void PushBack(class qhList<qhVertex> *, class qhVertex *); /* linkage=_ZN6qhListI8qhVertexE8PushBackEPS0_ */
	void PopBack(class qhList<qhVertex> *); /* linkage=_ZN6qhListI8qhVertexE7PopBackEv */
	void Insert(class qhList<qhVertex> *, class qhVertex *, class qhVertex *); /* linkage=_ZN6qhListI8qhVertexE6InsertEPS0_S2_ */
	void Remove(class qhList<qhVertex> *, class qhVertex *); /* linkage=_ZN6qhListI8qhVertexE6RemoveEPS0_ */
	int IndexOf(const class qhList<qhVertex>  *, const class qhVertex  *); /* linkage=_ZNK6qhListI8qhVertexE7IndexOfEPKS0_ */
	class qhVertex * Begin(class qhList<qhVertex> *); /* linkage=_ZN6qhListI8qhVertexE5BeginEv */
	const class qhVertex  * Begin(const class qhList<qhVertex>  *); /* linkage=_ZNK6qhListI8qhVertexE5BeginEv */
	class qhVertex * End(class qhList<qhVertex> *); /* linkage=_ZN6qhListI8qhVertexE3EndEv */
	const class qhVertex  * End(const class qhList<qhVertex>  *); /* linkage=_ZNK6qhListI8qhVertexE3EndEv */
	void qhList(class qhList<qhVertex> *, const class qhList<qhVertex>  &); /* linkage=_ZN6qhListI8qhVertexEC4ERKS1_ */
	class qhList<qhVertex> & operator=(class qhList<qhVertex> *, const class qhList<qhVertex>  &); /* linkage=_ZN6qhListI8qhVertexEaSERKS1_ */
};

// <009978E7> ../thirdparty/quickhull/qhList.h:32
// member functions: 34
// member variable: 1
// class size: 112
class qhList<qhFace> {
	/* ../thirdparty/quickhull/qhList.inl:50 */
	void qhList(qhList<qhFace>* );
	/* ../thirdparty/quickhull/qhList.inl:59 */
	int Size(const qhList<qhFace>* );
	/* ../thirdparty/quickhull/qhList.inl:73 */
	bool Empty(const qhList<qhFace>* );
	/* ../thirdparty/quickhull/qhList.inl:81 */
	void Clear(qhList<qhFace>* );
	/* ../thirdparty/quickhull/qhList.inl:90 */
	void PushFront(qhList<qhFace>* , qhFace* );
	/* ../thirdparty/quickhull/qhList.inl:98 */
	void PopFront(qhList<qhFace>* );
	/* ../thirdparty/quickhull/qhList.inl:109 */
	void PushBack(qhList<qhFace>* , qhFace* );
	/* ../thirdparty/quickhull/qhList.inl:117 */
	void PopBack(qhList<qhFace>* );
	/* ../thirdparty/quickhull/qhList.inl:128 */
	void Insert(qhList<qhFace>* , qhFace* , qhFace* );
	/* ../thirdparty/quickhull/qhList.inl:136 */
	void Remove(qhList<qhFace>* , qhFace* );
	/* ../thirdparty/quickhull/qhList.inl:144 */
	int IndexOf(const qhList<qhFace>* , const qhFace* );
	/* ../thirdparty/quickhull/qhList.inl:163 */
	qhFace* Begin(qhList<qhFace>* );
	/* ../thirdparty/quickhull/qhList.inl:171 */
	const qhFace* Begin(const qhList<qhFace>* );
	/* ../thirdparty/quickhull/qhList.inl:179 */
	qhFace* End(qhList<qhFace>* );
	/* ../thirdparty/quickhull/qhList.inl:187 */
	const qhFace* End(const qhList<qhFace>* );
private:
	qhFace mHead; /* 0 112 */
	/* ../thirdparty/quickhull/qhList.h:59 */
	void qhList(qhList<qhFace>* , const qhList<qhFace>& );
	/* ../thirdparty/quickhull/qhList.h:60 */
	qhList<qhFace>& operator=(qhList<qhFace>* , const qhList<qhFace>& );
	void qhList(class qhList<qhFace> *); /* linkage=_ZN6qhListI6qhFaceEC4Ev */
	int Size(const class qhList<qhFace>  *); /* linkage=_ZNK6qhListI6qhFaceE4SizeEv */
	bool Empty(const class qhList<qhFace>  *); /* linkage=_ZNK6qhListI6qhFaceE5EmptyEv */
	void Clear(class qhList<qhFace> *); /* linkage=_ZN6qhListI6qhFaceE5ClearEv */
	void PushFront(class qhList<qhFace> *, class qhFace *); /* linkage=_ZN6qhListI6qhFaceE9PushFrontEPS0_ */
	void PopFront(class qhList<qhFace> *); /* linkage=_ZN6qhListI6qhFaceE8PopFrontEv */
	void PushBack(class qhList<qhFace> *, class qhFace *); /* linkage=_ZN6qhListI6qhFaceE8PushBackEPS0_ */
	void PopBack(class qhList<qhFace> *); /* linkage=_ZN6qhListI6qhFaceE7PopBackEv */
	void Insert(class qhList<qhFace> *, class qhFace *, class qhFace *); /* linkage=_ZN6qhListI6qhFaceE6InsertEPS0_S2_ */
	void Remove(class qhList<qhFace> *, class qhFace *); /* linkage=_ZN6qhListI6qhFaceE6RemoveEPS0_ */
	int IndexOf(const class qhList<qhFace>  *, const class qhFace  *); /* linkage=_ZNK6qhListI6qhFaceE7IndexOfEPKS0_ */
	class qhFace * Begin(class qhList<qhFace> *); /* linkage=_ZN6qhListI6qhFaceE5BeginEv */
	const class qhFace  * Begin(const class qhList<qhFace>  *); /* linkage=_ZNK6qhListI6qhFaceE5BeginEv */
	class qhFace * End(class qhList<qhFace> *); /* linkage=_ZN6qhListI6qhFaceE3EndEv */
	const class qhFace  * End(const class qhList<qhFace>  *); /* linkage=_ZNK6qhListI6qhFaceE3EndEv */
	void qhList(class qhList<qhFace> *, const class qhList<qhFace>  &); /* linkage=_ZN6qhListI6qhFaceEC4ERKS1_ */
	class qhList<qhFace> & operator=(class qhList<qhFace> *, const class qhList<qhFace>  &); /* linkage=_ZN6qhListI6qhFaceEaSERKS1_ */
};

// <061E6618> thirdparty/quickhull/qhList.h:32
// member functions: 34
// member variable: 1
// class size: 48
class qhList<qhVertex> {
	/* thirdparty/quickhull/qhList.inl:50 */
	void qhList(qhList<qhVertex>* );
	/* thirdparty/quickhull/qhList.inl:59 */
	int Size(const qhList<qhVertex>* );
	/* thirdparty/quickhull/qhList.inl:73 */
	bool Empty(const qhList<qhVertex>* );
	/* thirdparty/quickhull/qhList.inl:81 */
	void Clear(qhList<qhVertex>* );
	/* thirdparty/quickhull/qhList.inl:90 */
	void PushFront(qhList<qhVertex>* , qhVertex* );
	/* thirdparty/quickhull/qhList.inl:98 */
	void PopFront(qhList<qhVertex>* );
	/* thirdparty/quickhull/qhList.inl:109 */
	void PushBack(qhList<qhVertex>* , qhVertex* );
	/* thirdparty/quickhull/qhList.inl:117 */
	void PopBack(qhList<qhVertex>* );
	/* thirdparty/quickhull/qhList.inl:128 */
	void Insert(qhList<qhVertex>* , qhVertex* , qhVertex* );
	/* thirdparty/quickhull/qhList.inl:136 */
	void Remove(qhList<qhVertex>* , qhVertex* );
	/* thirdparty/quickhull/qhList.inl:144 */
	int IndexOf(const qhList<qhVertex>* , const qhVertex* );
	/* thirdparty/quickhull/qhList.inl:163 */
	qhVertex* Begin(qhList<qhVertex>* );
	/* thirdparty/quickhull/qhList.inl:171 */
	const qhVertex* Begin(const qhList<qhVertex>* );
	/* thirdparty/quickhull/qhList.inl:179 */
	qhVertex* End(qhList<qhVertex>* );
	/* thirdparty/quickhull/qhList.inl:187 */
	const qhVertex* End(const qhList<qhVertex>* );
private:
	qhVertex mHead; /* 0 48 */
	/* thirdparty/quickhull/qhList.h:59 */
	void qhList(qhList<qhVertex>* , const qhList<qhVertex>& );
	/* thirdparty/quickhull/qhList.h:60 */
	qhList<qhVertex>& operator=(qhList<qhVertex>* , const qhList<qhVertex>& );
	void qhList(class qhList<qhVertex> *); /* linkage=_ZN6qhListI8qhVertexEC4Ev */
	int Size(const class qhList<qhVertex>  *); /* linkage=_ZNK6qhListI8qhVertexE4SizeEv */
	bool Empty(const class qhList<qhVertex>  *); /* linkage=_ZNK6qhListI8qhVertexE5EmptyEv */
	void Clear(class qhList<qhVertex> *); /* linkage=_ZN6qhListI8qhVertexE5ClearEv */
	void PushFront(class qhList<qhVertex> *, class qhVertex *); /* linkage=_ZN6qhListI8qhVertexE9PushFrontEPS0_ */
	void PopFront(class qhList<qhVertex> *); /* linkage=_ZN6qhListI8qhVertexE8PopFrontEv */
	void PushBack(class qhList<qhVertex> *, class qhVertex *); /* linkage=_ZN6qhListI8qhVertexE8PushBackEPS0_ */
	void PopBack(class qhList<qhVertex> *); /* linkage=_ZN6qhListI8qhVertexE7PopBackEv */
	void Insert(class qhList<qhVertex> *, class qhVertex *, class qhVertex *); /* linkage=_ZN6qhListI8qhVertexE6InsertEPS0_S2_ */
	void Remove(class qhList<qhVertex> *, class qhVertex *); /* linkage=_ZN6qhListI8qhVertexE6RemoveEPS0_ */
	int IndexOf(const class qhList<qhVertex>  *, const class qhVertex  *); /* linkage=_ZNK6qhListI8qhVertexE7IndexOfEPKS0_ */
	class qhVertex * Begin(class qhList<qhVertex> *); /* linkage=_ZN6qhListI8qhVertexE5BeginEv */
	const class qhVertex  * Begin(const class qhList<qhVertex>  *); /* linkage=_ZNK6qhListI8qhVertexE5BeginEv */
	class qhVertex * End(class qhList<qhVertex> *); /* linkage=_ZN6qhListI8qhVertexE3EndEv */
	const class qhVertex  * End(const class qhList<qhVertex>  *); /* linkage=_ZNK6qhListI8qhVertexE3EndEv */
	void qhList(class qhList<qhVertex> *, const class qhList<qhVertex>  &); /* linkage=_ZN6qhListI8qhVertexEC4ERKS1_ */
	class qhList<qhVertex> & operator=(class qhList<qhVertex> *, const class qhList<qhVertex>  &); /* linkage=_ZN6qhListI8qhVertexEaSERKS1_ */
};

// <061E71CB> thirdparty/quickhull/qhList.h:32
// member functions: 34
// member variable: 1
// class size: 112
class qhList<qhFace> {
	/* thirdparty/quickhull/qhList.inl:50 */
	void qhList(qhList<qhFace>* );
	/* thirdparty/quickhull/qhList.inl:59 */
	int Size(const qhList<qhFace>* );
	/* thirdparty/quickhull/qhList.inl:73 */
	bool Empty(const qhList<qhFace>* );
	/* thirdparty/quickhull/qhList.inl:81 */
	void Clear(qhList<qhFace>* );
	/* thirdparty/quickhull/qhList.inl:90 */
	void PushFront(qhList<qhFace>* , qhFace* );
	/* thirdparty/quickhull/qhList.inl:98 */
	void PopFront(qhList<qhFace>* );
	/* thirdparty/quickhull/qhList.inl:109 */
	void PushBack(qhList<qhFace>* , qhFace* );
	/* thirdparty/quickhull/qhList.inl:117 */
	void PopBack(qhList<qhFace>* );
	/* thirdparty/quickhull/qhList.inl:128 */
	void Insert(qhList<qhFace>* , qhFace* , qhFace* );
	/* thirdparty/quickhull/qhList.inl:136 */
	void Remove(qhList<qhFace>* , qhFace* );
	/* thirdparty/quickhull/qhList.inl:144 */
	int IndexOf(const qhList<qhFace>* , const qhFace* );
	/* thirdparty/quickhull/qhList.inl:163 */
	qhFace* Begin(qhList<qhFace>* );
	/* thirdparty/quickhull/qhList.inl:171 */
	const qhFace* Begin(const qhList<qhFace>* );
	/* thirdparty/quickhull/qhList.inl:179 */
	qhFace* End(qhList<qhFace>* );
	/* thirdparty/quickhull/qhList.inl:187 */
	const qhFace* End(const qhList<qhFace>* );
private:
	qhFace mHead; /* 0 112 */
	/* thirdparty/quickhull/qhList.h:59 */
	void qhList(qhList<qhFace>* , const qhList<qhFace>& );
	/* thirdparty/quickhull/qhList.h:60 */
	qhList<qhFace>& operator=(qhList<qhFace>* , const qhList<qhFace>& );
	void qhList(class qhList<qhFace> *); /* linkage=_ZN6qhListI6qhFaceEC4Ev */
	int Size(const class qhList<qhFace>  *); /* linkage=_ZNK6qhListI6qhFaceE4SizeEv */
	bool Empty(const class qhList<qhFace>  *); /* linkage=_ZNK6qhListI6qhFaceE5EmptyEv */
	void Clear(class qhList<qhFace> *); /* linkage=_ZN6qhListI6qhFaceE5ClearEv */
	void PushFront(class qhList<qhFace> *, class qhFace *); /* linkage=_ZN6qhListI6qhFaceE9PushFrontEPS0_ */
	void PopFront(class qhList<qhFace> *); /* linkage=_ZN6qhListI6qhFaceE8PopFrontEv */
	void PushBack(class qhList<qhFace> *, class qhFace *); /* linkage=_ZN6qhListI6qhFaceE8PushBackEPS0_ */
	void PopBack(class qhList<qhFace> *); /* linkage=_ZN6qhListI6qhFaceE7PopBackEv */
	void Insert(class qhList<qhFace> *, class qhFace *, class qhFace *); /* linkage=_ZN6qhListI6qhFaceE6InsertEPS0_S2_ */
	void Remove(class qhList<qhFace> *, class qhFace *); /* linkage=_ZN6qhListI6qhFaceE6RemoveEPS0_ */
	int IndexOf(const class qhList<qhFace>  *, const class qhFace  *); /* linkage=_ZNK6qhListI6qhFaceE7IndexOfEPKS0_ */
	class qhFace * Begin(class qhList<qhFace> *); /* linkage=_ZN6qhListI6qhFaceE5BeginEv */
	const class qhFace  * Begin(const class qhList<qhFace>  *); /* linkage=_ZNK6qhListI6qhFaceE5BeginEv */
	class qhFace * End(class qhList<qhFace> *); /* linkage=_ZN6qhListI6qhFaceE3EndEv */
	const class qhFace  * End(const class qhList<qhFace>  *); /* linkage=_ZNK6qhListI6qhFaceE3EndEv */
	void qhList(class qhList<qhFace> *, const class qhList<qhFace>  &); /* linkage=_ZN6qhListI6qhFaceEC4ERKS1_ */
	class qhList<qhFace> & operator=(class qhList<qhFace> *, const class qhList<qhFace>  &); /* linkage=_ZN6qhListI6qhFaceEaSERKS1_ */
};

