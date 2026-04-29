
//
// thirdparty/quickhull/qhArray.h
//
//	referenced by: libengine2.so
//
//	classes: 10
//

// <0099708D> ../thirdparty/quickhull/qhArray.h:22
// member functions: 50
// member variables: 3
// class size: 24
class qhArray<qhVector3> {
	/* ../thirdparty/quickhull/qhArray.inl:12 */
	void qhArray(qhArray<qhVector3>* );
	/* ../thirdparty/quickhull/qhArray.inl:23 */
	void ~qhArray(qhArray<qhVector3>* );
	/* ../thirdparty/quickhull/qhArray.inl:32 */
	int Capacity(const qhArray<qhVector3>* );
	/* ../thirdparty/quickhull/qhArray.inl:40 */
	int Size(const qhArray<qhVector3>* );
	/* ../thirdparty/quickhull/qhArray.inl:48 */
	bool Empty(const qhArray<qhVector3>* );
	/* ../thirdparty/quickhull/qhArray.inl:56 */
	void Clear(qhArray<qhVector3>* );
	/* ../thirdparty/quickhull/qhArray.inl:65 */
	void Reserve(qhArray<qhVector3>* , int);
	/* ../thirdparty/quickhull/qhArray.inl:82 */
	void Resize(qhArray<qhVector3>* , int);
	/* ../thirdparty/quickhull/qhArray.inl:94 */
	qhVector3& Expand(qhArray<qhVector3>* );
	/* ../thirdparty/quickhull/qhArray.inl:108 */
	void PushBack(qhArray<qhVector3>* , const qhVector3& );
	/* ../thirdparty/quickhull/qhArray.inl:121 */
	void PopBack(qhArray<qhVector3>* );
	/* ../thirdparty/quickhull/qhArray.inl:129 */
	int IndexOf(const qhArray<qhVector3>* , const qhVector3& );
	/* ../thirdparty/quickhull/qhArray.inl:145 */
	qhVector3& operator[](qhArray<qhVector3>* , int);
	/* ../thirdparty/quickhull/qhArray.inl:154 */
	const qhVector3& operator[](const qhArray<qhVector3>* , int);
	/* ../thirdparty/quickhull/qhArray.inl:163 */
	qhVector3& Front(qhArray<qhVector3>* );
	/* ../thirdparty/quickhull/qhArray.inl:172 */
	const qhVector3& Front(const qhArray<qhVector3>* );
	/* ../thirdparty/quickhull/qhArray.inl:181 */
	qhVector3& Back(qhArray<qhVector3>* );
	/* ../thirdparty/quickhull/qhArray.inl:222 */
	const qhVector3& Back(const qhArray<qhVector3>* );
	/* ../thirdparty/quickhull/qhArray.inl:190 */
	qhVector3* Begin(qhArray<qhVector3>* );
	/* ../thirdparty/quickhull/qhArray.inl:198 */
	const qhVector3* Begin(const qhArray<qhVector3>* );
	/* ../thirdparty/quickhull/qhArray.inl:206 */
	qhVector3* End(qhArray<qhVector3>* );
	/* ../thirdparty/quickhull/qhArray.inl:214 */
	const qhVector3* End(const qhArray<qhVector3>* );
	/* ../thirdparty/quickhull/qhArray.inl:231 */
	void Swap(qhArray<qhVector3>* , qhArray<qhVector3>& );
private:
	qhVector3 * mBegin; /* 0 8 */
	qhVector3 * mEnd; /* 8 8 */
	qhVector3 * mCapacity; /* 16 8 */
	/* ../thirdparty/quickhull/qhArray.h:63 */
	void qhArray(qhArray<qhVector3>* , const qhArray<qhVector3>& );
	/* ../thirdparty/quickhull/qhArray.h:64 */
	qhArray<qhVector3>& operator=(qhArray<qhVector3>* , const qhArray<qhVector3>& );
	void qhArray(class qhArray<qhVector3> *); /* linkage=_ZN7qhArrayI9qhVector3EC4Ev */
	void ~qhArray(class qhArray<qhVector3> *); /* linkage=_ZN7qhArrayI9qhVector3ED4Ev */
	int Capacity(const class qhArray<qhVector3>  *); /* linkage=_ZNK7qhArrayI9qhVector3E8CapacityEv */
	int Size(const class qhArray<qhVector3>  *); /* linkage=_ZNK7qhArrayI9qhVector3E4SizeEv */
	bool Empty(const class qhArray<qhVector3>  *); /* linkage=_ZNK7qhArrayI9qhVector3E5EmptyEv */
	void Clear(class qhArray<qhVector3> *); /* linkage=_ZN7qhArrayI9qhVector3E5ClearEv */
	void Reserve(class qhArray<qhVector3> *, int); /* linkage=_ZN7qhArrayI9qhVector3E7ReserveEi */
	void Resize(class qhArray<qhVector3> *, int); /* linkage=_ZN7qhArrayI9qhVector3E6ResizeEi */
	class qhVector3 & Expand(class qhArray<qhVector3> *); /* linkage=_ZN7qhArrayI9qhVector3E6ExpandEv */
	void PushBack(class qhArray<qhVector3> *, const class qhVector3  &); /* linkage=_ZN7qhArrayI9qhVector3E8PushBackERKS0_ */
	void PopBack(class qhArray<qhVector3> *); /* linkage=_ZN7qhArrayI9qhVector3E7PopBackEv */
	int IndexOf(const class qhArray<qhVector3>  *, const class qhVector3  &); /* linkage=_ZNK7qhArrayI9qhVector3E7IndexOfERKS0_ */
	class qhVector3 & operator[](class qhArray<qhVector3> *, int); /* linkage=_ZN7qhArrayI9qhVector3EixEi */
	const class qhVector3  & operator[](const class qhArray<qhVector3>  *, int); /* linkage=_ZNK7qhArrayI9qhVector3EixEi */
	class qhVector3 & Front(class qhArray<qhVector3> *); /* linkage=_ZN7qhArrayI9qhVector3E5FrontEv */
	const class qhVector3  & Front(const class qhArray<qhVector3>  *); /* linkage=_ZNK7qhArrayI9qhVector3E5FrontEv */
	class qhVector3 & Back(class qhArray<qhVector3> *); /* linkage=_ZN7qhArrayI9qhVector3E4BackEv */
	const class qhVector3  & Back(const class qhArray<qhVector3>  *); /* linkage=_ZNK7qhArrayI9qhVector3E4BackEv */
	class qhVector3 * Begin(class qhArray<qhVector3> *); /* linkage=_ZN7qhArrayI9qhVector3E5BeginEv */
	const class qhVector3  * Begin(const class qhArray<qhVector3>  *); /* linkage=_ZNK7qhArrayI9qhVector3E5BeginEv */
	class qhVector3 * End(class qhArray<qhVector3> *); /* linkage=_ZN7qhArrayI9qhVector3E3EndEv */
	const class qhVector3  * End(const class qhArray<qhVector3>  *); /* linkage=_ZNK7qhArrayI9qhVector3E3EndEv */
	void Swap(class qhArray<qhVector3> *, class qhArray<qhVector3> &); /* linkage=_ZN7qhArrayI9qhVector3E4SwapERS1_ */
	void qhArray(class qhArray<qhVector3> *, const class qhArray<qhVector3>  &); /* linkage=_ZN7qhArrayI9qhVector3EC4ERKS1_ */
	class qhArray<qhVector3> & operator=(class qhArray<qhVector3> *, const class qhArray<qhVector3>  &); /* linkage=_ZN7qhArrayI9qhVector3EaSERKS1_ */
};

// <00997454> ../thirdparty/quickhull/qhArray.h:22
// member functions: 25
// member variables: 3
// class size: 24
class qhArray<int> {
	/* ../thirdparty/quickhull/qhArray.inl:12 */
	void qhArray(qhArray<int>* );
	/* ../thirdparty/quickhull/qhArray.inl:23 */
	void ~qhArray(qhArray<int>* );
	/* ../thirdparty/quickhull/qhArray.inl:32 */
	int Capacity(const qhArray<int>* );
	/* ../thirdparty/quickhull/qhArray.inl:40 */
	int Size(const qhArray<int>* );
	/* ../thirdparty/quickhull/qhArray.inl:48 */
	bool Empty(const qhArray<int>* );
	/* ../thirdparty/quickhull/qhArray.inl:56 */
	void Clear(qhArray<int>* );
	/* ../thirdparty/quickhull/qhArray.inl:65 */
	void Reserve(qhArray<int>* , int);
	/* ../thirdparty/quickhull/qhArray.inl:82 */
	void Resize(qhArray<int>* , int);
	/* ../thirdparty/quickhull/qhArray.inl:94 */
	int& Expand(qhArray<int>* );
	/* ../thirdparty/quickhull/qhArray.inl:108 */
	void PushBack(qhArray<int>* , const int& );
	/* ../thirdparty/quickhull/qhArray.inl:121 */
	void PopBack(qhArray<int>* );
	/* ../thirdparty/quickhull/qhArray.inl:129 */
	int IndexOf(const qhArray<int>* , const int& );
	/* ../thirdparty/quickhull/qhArray.inl:145 */
	int& operator[](qhArray<int>* , int);
	/* ../thirdparty/quickhull/qhArray.inl:154 */
	const int& operator[](const qhArray<int>* , int);
	/* ../thirdparty/quickhull/qhArray.inl:163 */
	int& Front(qhArray<int>* );
	/* ../thirdparty/quickhull/qhArray.inl:172 */
	const int& Front(const qhArray<int>* );
	/* ../thirdparty/quickhull/qhArray.inl:181 */
	int& Back(qhArray<int>* );
	/* ../thirdparty/quickhull/qhArray.inl:222 */
	const int& Back(const qhArray<int>* );
	/* ../thirdparty/quickhull/qhArray.inl:190 */
	int* Begin(qhArray<int>* );
	/* ../thirdparty/quickhull/qhArray.inl:198 */
	const int* Begin(const qhArray<int>* );
	/* ../thirdparty/quickhull/qhArray.inl:206 */
	int* End(qhArray<int>* );
	/* ../thirdparty/quickhull/qhArray.inl:214 */
	const int* End(const qhArray<int>* );
	/* ../thirdparty/quickhull/qhArray.inl:231 */
	void Swap(qhArray<int>* , qhArray<int>& );
private:
	int * mBegin; /* 0 8 */
	int * mEnd; /* 8 8 */
	int * mCapacity; /* 16 8 */
	/* ../thirdparty/quickhull/qhArray.h:63 */
	void qhArray(qhArray<int>* , const qhArray<int>& );
	/* ../thirdparty/quickhull/qhArray.h:64 */
	qhArray<int>& operator=(qhArray<int>* , const qhArray<int>& );
};

// <00997FC6> ../thirdparty/quickhull/qhArray.h:22
// member functions: 25
// member variables: 3
// class size: 24
class qhArray<qhIteration> {
	/* ../thirdparty/quickhull/qhArray.inl:12 */
	void qhArray(qhArray<qhIteration>* );
	/* ../thirdparty/quickhull/qhArray.inl:23 */
	void ~qhArray(qhArray<qhIteration>* );
	/* ../thirdparty/quickhull/qhArray.inl:32 */
	int Capacity(const qhArray<qhIteration>* );
	/* ../thirdparty/quickhull/qhArray.inl:40 */
	int Size(const qhArray<qhIteration>* );
	/* ../thirdparty/quickhull/qhArray.inl:48 */
	bool Empty(const qhArray<qhIteration>* );
	/* ../thirdparty/quickhull/qhArray.inl:56 */
	void Clear(qhArray<qhIteration>* );
	/* ../thirdparty/quickhull/qhArray.inl:65 */
	void Reserve(qhArray<qhIteration>* , int);
	/* ../thirdparty/quickhull/qhArray.inl:82 */
	void Resize(qhArray<qhIteration>* , int);
	/* ../thirdparty/quickhull/qhArray.inl:94 */
	qhIteration& Expand(qhArray<qhIteration>* );
	/* ../thirdparty/quickhull/qhArray.inl:108 */
	void PushBack(qhArray<qhIteration>* , const qhIteration& );
	/* ../thirdparty/quickhull/qhArray.inl:121 */
	void PopBack(qhArray<qhIteration>* );
	/* ../thirdparty/quickhull/qhArray.inl:129 */
	int IndexOf(const qhArray<qhIteration>* , const qhIteration& );
	/* ../thirdparty/quickhull/qhArray.inl:145 */
	qhIteration& operator[](qhArray<qhIteration>* , int);
	/* ../thirdparty/quickhull/qhArray.inl:154 */
	const qhIteration& operator[](const qhArray<qhIteration>* , int);
	/* ../thirdparty/quickhull/qhArray.inl:163 */
	qhIteration& Front(qhArray<qhIteration>* );
	/* ../thirdparty/quickhull/qhArray.inl:172 */
	const qhIteration& Front(const qhArray<qhIteration>* );
	/* ../thirdparty/quickhull/qhArray.inl:181 */
	qhIteration& Back(qhArray<qhIteration>* );
	/* ../thirdparty/quickhull/qhArray.inl:222 */
	const qhIteration& Back(const qhArray<qhIteration>* );
	/* ../thirdparty/quickhull/qhArray.inl:190 */
	qhIteration* Begin(qhArray<qhIteration>* );
	/* ../thirdparty/quickhull/qhArray.inl:198 */
	const qhIteration* Begin(const qhArray<qhIteration>* );
	/* ../thirdparty/quickhull/qhArray.inl:206 */
	qhIteration* End(qhArray<qhIteration>* );
	/* ../thirdparty/quickhull/qhArray.inl:214 */
	const qhIteration* End(const qhArray<qhIteration>* );
	/* ../thirdparty/quickhull/qhArray.inl:231 */
	void Swap(qhArray<qhIteration>* , qhArray<qhIteration>& );
private:
	qhIteration * mBegin; /* 0 8 */
	qhIteration * mEnd; /* 8 8 */
	qhIteration * mCapacity; /* 16 8 */
	/* ../thirdparty/quickhull/qhArray.h:63 */
	void qhArray(qhArray<qhIteration>* , const qhArray<qhIteration>& );
	/* ../thirdparty/quickhull/qhArray.h:64 */
	qhArray<qhIteration>& operator=(qhArray<qhIteration>* , const qhArray<qhIteration>& );
};

// <061E6974> thirdparty/quickhull/qhArray.h:22
// member functions: 50
// member variables: 3
// class size: 24
class qhArray<qhVector3> {
	/* thirdparty/quickhull/qhArray.inl:12 */
	void qhArray(qhArray<qhVector3>* );
	/* thirdparty/quickhull/qhArray.inl:23 */
	void ~qhArray(qhArray<qhVector3>* );
	/* thirdparty/quickhull/qhArray.inl:32 */
	int Capacity(const qhArray<qhVector3>* );
	/* thirdparty/quickhull/qhArray.inl:40 */
	int Size(const qhArray<qhVector3>* );
	/* thirdparty/quickhull/qhArray.inl:48 */
	bool Empty(const qhArray<qhVector3>* );
	/* thirdparty/quickhull/qhArray.inl:56 */
	void Clear(qhArray<qhVector3>* );
	/* thirdparty/quickhull/qhArray.inl:65 */
	void Reserve(qhArray<qhVector3>* , int);
	/* thirdparty/quickhull/qhArray.inl:82 */
	void Resize(qhArray<qhVector3>* , int);
	/* thirdparty/quickhull/qhArray.inl:94 */
	qhVector3& Expand(qhArray<qhVector3>* );
	/* thirdparty/quickhull/qhArray.inl:108 */
	void PushBack(qhArray<qhVector3>* , const qhVector3& );
	/* thirdparty/quickhull/qhArray.inl:121 */
	void PopBack(qhArray<qhVector3>* );
	/* thirdparty/quickhull/qhArray.inl:129 */
	int IndexOf(const qhArray<qhVector3>* , const qhVector3& );
	/* thirdparty/quickhull/qhArray.inl:145 */
	qhVector3& operator[](qhArray<qhVector3>* , int);
	/* thirdparty/quickhull/qhArray.inl:154 */
	const qhVector3& operator[](const qhArray<qhVector3>* , int);
	/* thirdparty/quickhull/qhArray.inl:163 */
	qhVector3& Front(qhArray<qhVector3>* );
	/* thirdparty/quickhull/qhArray.inl:172 */
	const qhVector3& Front(const qhArray<qhVector3>* );
	/* thirdparty/quickhull/qhArray.inl:181 */
	qhVector3& Back(qhArray<qhVector3>* );
	/* thirdparty/quickhull/qhArray.inl:222 */
	const qhVector3& Back(const qhArray<qhVector3>* );
	/* thirdparty/quickhull/qhArray.inl:190 */
	qhVector3* Begin(qhArray<qhVector3>* );
	/* thirdparty/quickhull/qhArray.inl:198 */
	const qhVector3* Begin(const qhArray<qhVector3>* );
	/* thirdparty/quickhull/qhArray.inl:206 */
	qhVector3* End(qhArray<qhVector3>* );
	/* thirdparty/quickhull/qhArray.inl:214 */
	const qhVector3* End(const qhArray<qhVector3>* );
	/* thirdparty/quickhull/qhArray.inl:231 */
	void Swap(qhArray<qhVector3>* , qhArray<qhVector3>& );
private:
	qhVector3 * mBegin; /* 0 8 */
	qhVector3 * mEnd; /* 8 8 */
	qhVector3 * mCapacity; /* 16 8 */
	/* thirdparty/quickhull/qhArray.h:63 */
	void qhArray(qhArray<qhVector3>* , const qhArray<qhVector3>& );
	/* thirdparty/quickhull/qhArray.h:64 */
	qhArray<qhVector3>& operator=(qhArray<qhVector3>* , const qhArray<qhVector3>& );
	void qhArray(class qhArray<qhVector3> *); /* linkage=_ZN7qhArrayI9qhVector3EC4Ev */
	void ~qhArray(class qhArray<qhVector3> *); /* linkage=_ZN7qhArrayI9qhVector3ED4Ev */
	int Capacity(const class qhArray<qhVector3>  *); /* linkage=_ZNK7qhArrayI9qhVector3E8CapacityEv */
	int Size(const class qhArray<qhVector3>  *); /* linkage=_ZNK7qhArrayI9qhVector3E4SizeEv */
	bool Empty(const class qhArray<qhVector3>  *); /* linkage=_ZNK7qhArrayI9qhVector3E5EmptyEv */
	void Clear(class qhArray<qhVector3> *); /* linkage=_ZN7qhArrayI9qhVector3E5ClearEv */
	void Reserve(class qhArray<qhVector3> *, int); /* linkage=_ZN7qhArrayI9qhVector3E7ReserveEi */
	void Resize(class qhArray<qhVector3> *, int); /* linkage=_ZN7qhArrayI9qhVector3E6ResizeEi */
	class qhVector3 & Expand(class qhArray<qhVector3> *); /* linkage=_ZN7qhArrayI9qhVector3E6ExpandEv */
	void PushBack(class qhArray<qhVector3> *, const class qhVector3  &); /* linkage=_ZN7qhArrayI9qhVector3E8PushBackERKS0_ */
	void PopBack(class qhArray<qhVector3> *); /* linkage=_ZN7qhArrayI9qhVector3E7PopBackEv */
	int IndexOf(const class qhArray<qhVector3>  *, const class qhVector3  &); /* linkage=_ZNK7qhArrayI9qhVector3E7IndexOfERKS0_ */
	class qhVector3 & operator[](class qhArray<qhVector3> *, int); /* linkage=_ZN7qhArrayI9qhVector3EixEi */
	const class qhVector3  & operator[](const class qhArray<qhVector3>  *, int); /* linkage=_ZNK7qhArrayI9qhVector3EixEi */
	class qhVector3 & Front(class qhArray<qhVector3> *); /* linkage=_ZN7qhArrayI9qhVector3E5FrontEv */
	const class qhVector3  & Front(const class qhArray<qhVector3>  *); /* linkage=_ZNK7qhArrayI9qhVector3E5FrontEv */
	class qhVector3 & Back(class qhArray<qhVector3> *); /* linkage=_ZN7qhArrayI9qhVector3E4BackEv */
	const class qhVector3  & Back(const class qhArray<qhVector3>  *); /* linkage=_ZNK7qhArrayI9qhVector3E4BackEv */
	class qhVector3 * Begin(class qhArray<qhVector3> *); /* linkage=_ZN7qhArrayI9qhVector3E5BeginEv */
	const class qhVector3  * Begin(const class qhArray<qhVector3>  *); /* linkage=_ZNK7qhArrayI9qhVector3E5BeginEv */
	class qhVector3 * End(class qhArray<qhVector3> *); /* linkage=_ZN7qhArrayI9qhVector3E3EndEv */
	const class qhVector3  * End(const class qhArray<qhVector3>  *); /* linkage=_ZNK7qhArrayI9qhVector3E3EndEv */
	void Swap(class qhArray<qhVector3> *, class qhArray<qhVector3> &); /* linkage=_ZN7qhArrayI9qhVector3E4SwapERS1_ */
	void qhArray(class qhArray<qhVector3> *, const class qhArray<qhVector3>  &); /* linkage=_ZN7qhArrayI9qhVector3EC4ERKS1_ */
	class qhArray<qhVector3> & operator=(class qhArray<qhVector3> *, const class qhArray<qhVector3>  &); /* linkage=_ZN7qhArrayI9qhVector3EaSERKS1_ */
};

// <061E6D24> thirdparty/quickhull/qhArray.h:22
// member functions: 25
// member variables: 3
// class size: 24
class qhArray<int> {
	/* thirdparty/quickhull/qhArray.inl:12 */
	void qhArray(qhArray<int>* );
	/* thirdparty/quickhull/qhArray.inl:23 */
	void ~qhArray(qhArray<int>* );
	/* thirdparty/quickhull/qhArray.inl:32 */
	int Capacity(const qhArray<int>* );
	/* thirdparty/quickhull/qhArray.inl:40 */
	int Size(const qhArray<int>* );
	/* thirdparty/quickhull/qhArray.inl:48 */
	bool Empty(const qhArray<int>* );
	/* thirdparty/quickhull/qhArray.inl:56 */
	void Clear(qhArray<int>* );
	/* thirdparty/quickhull/qhArray.inl:65 */
	void Reserve(qhArray<int>* , int);
	/* thirdparty/quickhull/qhArray.inl:82 */
	void Resize(qhArray<int>* , int);
	/* thirdparty/quickhull/qhArray.inl:94 */
	int& Expand(qhArray<int>* );
	/* thirdparty/quickhull/qhArray.inl:108 */
	void PushBack(qhArray<int>* , const int& );
	/* thirdparty/quickhull/qhArray.inl:121 */
	void PopBack(qhArray<int>* );
	/* thirdparty/quickhull/qhArray.inl:129 */
	int IndexOf(const qhArray<int>* , const int& );
	/* thirdparty/quickhull/qhArray.inl:145 */
	int& operator[](qhArray<int>* , int);
	/* thirdparty/quickhull/qhArray.inl:154 */
	const int& operator[](const qhArray<int>* , int);
	/* thirdparty/quickhull/qhArray.inl:163 */
	int& Front(qhArray<int>* );
	/* thirdparty/quickhull/qhArray.inl:172 */
	const int& Front(const qhArray<int>* );
	/* thirdparty/quickhull/qhArray.inl:181 */
	int& Back(qhArray<int>* );
	/* thirdparty/quickhull/qhArray.inl:222 */
	const int& Back(const qhArray<int>* );
	/* thirdparty/quickhull/qhArray.inl:190 */
	int* Begin(qhArray<int>* );
	/* thirdparty/quickhull/qhArray.inl:198 */
	const int* Begin(const qhArray<int>* );
	/* thirdparty/quickhull/qhArray.inl:206 */
	int* End(qhArray<int>* );
	/* thirdparty/quickhull/qhArray.inl:214 */
	const int* End(const qhArray<int>* );
	/* thirdparty/quickhull/qhArray.inl:231 */
	void Swap(qhArray<int>* , qhArray<int>& );
private:
	int * mBegin; /* 0 8 */
	int * mEnd; /* 8 8 */
	int * mCapacity; /* 16 8 */
	/* thirdparty/quickhull/qhArray.h:63 */
	void qhArray(qhArray<int>* , const qhArray<int>& );
	/* thirdparty/quickhull/qhArray.h:64 */
	qhArray<int>& operator=(qhArray<int>* , const qhArray<int>& );
};

// <061E788E> thirdparty/quickhull/qhArray.h:22
// member functions: 25
// member variables: 3
// class size: 24
class qhArray<qhIteration> {
	/* thirdparty/quickhull/qhArray.inl:12 */
	void qhArray(qhArray<qhIteration>* );
	/* thirdparty/quickhull/qhArray.inl:23 */
	void ~qhArray(qhArray<qhIteration>* );
	/* thirdparty/quickhull/qhArray.inl:32 */
	int Capacity(const qhArray<qhIteration>* );
	/* thirdparty/quickhull/qhArray.inl:40 */
	int Size(const qhArray<qhIteration>* );
	/* thirdparty/quickhull/qhArray.inl:48 */
	bool Empty(const qhArray<qhIteration>* );
	/* thirdparty/quickhull/qhArray.inl:56 */
	void Clear(qhArray<qhIteration>* );
	/* thirdparty/quickhull/qhArray.inl:65 */
	void Reserve(qhArray<qhIteration>* , int);
	/* thirdparty/quickhull/qhArray.inl:82 */
	void Resize(qhArray<qhIteration>* , int);
	/* thirdparty/quickhull/qhArray.inl:94 */
	qhIteration& Expand(qhArray<qhIteration>* );
	/* thirdparty/quickhull/qhArray.inl:108 */
	void PushBack(qhArray<qhIteration>* , const qhIteration& );
	/* thirdparty/quickhull/qhArray.inl:121 */
	void PopBack(qhArray<qhIteration>* );
	/* thirdparty/quickhull/qhArray.inl:129 */
	int IndexOf(const qhArray<qhIteration>* , const qhIteration& );
	/* thirdparty/quickhull/qhArray.inl:145 */
	qhIteration& operator[](qhArray<qhIteration>* , int);
	/* thirdparty/quickhull/qhArray.inl:154 */
	const qhIteration& operator[](const qhArray<qhIteration>* , int);
	/* thirdparty/quickhull/qhArray.inl:163 */
	qhIteration& Front(qhArray<qhIteration>* );
	/* thirdparty/quickhull/qhArray.inl:172 */
	const qhIteration& Front(const qhArray<qhIteration>* );
	/* thirdparty/quickhull/qhArray.inl:181 */
	qhIteration& Back(qhArray<qhIteration>* );
	/* thirdparty/quickhull/qhArray.inl:222 */
	const qhIteration& Back(const qhArray<qhIteration>* );
	/* thirdparty/quickhull/qhArray.inl:190 */
	qhIteration* Begin(qhArray<qhIteration>* );
	/* thirdparty/quickhull/qhArray.inl:198 */
	const qhIteration* Begin(const qhArray<qhIteration>* );
	/* thirdparty/quickhull/qhArray.inl:206 */
	qhIteration* End(qhArray<qhIteration>* );
	/* thirdparty/quickhull/qhArray.inl:214 */
	const qhIteration* End(const qhArray<qhIteration>* );
	/* thirdparty/quickhull/qhArray.inl:231 */
	void Swap(qhArray<qhIteration>* , qhArray<qhIteration>& );
private:
	qhIteration * mBegin; /* 0 8 */
	qhIteration * mEnd; /* 8 8 */
	qhIteration * mCapacity; /* 16 8 */
	/* thirdparty/quickhull/qhArray.h:63 */
	void qhArray(qhArray<qhIteration>* , const qhArray<qhIteration>& );
	/* thirdparty/quickhull/qhArray.h:64 */
	qhArray<qhIteration>& operator=(qhArray<qhIteration>* , const qhArray<qhIteration>& );
};

// <061E8393> thirdparty/quickhull/qhArray.h:22
// member functions: 25
// member variables: 3
// class size: 24
class qhArray<qhHalfEdge*> {
	/* thirdparty/quickhull/qhArray.inl:12 */
	void qhArray(qhArray<qhHalfEdge*>* );
	/* thirdparty/quickhull/qhArray.inl:23 */
	void ~qhArray(qhArray<qhHalfEdge*>* );
	/* thirdparty/quickhull/qhArray.inl:32 */
	int Capacity(const qhArray<qhHalfEdge*>* );
	/* thirdparty/quickhull/qhArray.inl:40 */
	int Size(const qhArray<qhHalfEdge*>* );
	/* thirdparty/quickhull/qhArray.inl:48 */
	bool Empty(const qhArray<qhHalfEdge*>* );
	/* thirdparty/quickhull/qhArray.inl:56 */
	void Clear(qhArray<qhHalfEdge*>* );
	/* thirdparty/quickhull/qhArray.inl:65 */
	void Reserve(qhArray<qhHalfEdge*>* , int);
	/* thirdparty/quickhull/qhArray.inl:82 */
	void Resize(qhArray<qhHalfEdge*>* , int);
	/* thirdparty/quickhull/qhArray.inl:94 */
	qhHalfEdge* & Expand(qhArray<qhHalfEdge*>* );
	/* thirdparty/quickhull/qhArray.inl:108 */
	void PushBack(qhArray<qhHalfEdge*>* , qhHalfEdge* const& );
	/* thirdparty/quickhull/qhArray.inl:121 */
	void PopBack(qhArray<qhHalfEdge*>* );
	/* thirdparty/quickhull/qhArray.inl:129 */
	int IndexOf(const qhArray<qhHalfEdge*>* , qhHalfEdge* const& );
	/* thirdparty/quickhull/qhArray.inl:145 */
	qhHalfEdge* & operator[](qhArray<qhHalfEdge*>* , int);
	/* thirdparty/quickhull/qhArray.inl:154 */
	qhHalfEdge* const& operator[](const qhArray<qhHalfEdge*>* , int);
	/* thirdparty/quickhull/qhArray.inl:163 */
	qhHalfEdge* & Front(qhArray<qhHalfEdge*>* );
	/* thirdparty/quickhull/qhArray.inl:172 */
	qhHalfEdge* const& Front(const qhArray<qhHalfEdge*>* );
	/* thirdparty/quickhull/qhArray.inl:181 */
	qhHalfEdge* & Back(qhArray<qhHalfEdge*>* );
	/* thirdparty/quickhull/qhArray.inl:222 */
	qhHalfEdge* const& Back(const qhArray<qhHalfEdge*>* );
	/* thirdparty/quickhull/qhArray.inl:190 */
	qhHalfEdge** Begin(qhArray<qhHalfEdge*>* );
	/* thirdparty/quickhull/qhArray.inl:198 */
	qhHalfEdge* const* Begin(const qhArray<qhHalfEdge*>* );
	/* thirdparty/quickhull/qhArray.inl:206 */
	qhHalfEdge** End(qhArray<qhHalfEdge*>* );
	/* thirdparty/quickhull/qhArray.inl:214 */
	qhHalfEdge* const* End(const qhArray<qhHalfEdge*>* );
	/* thirdparty/quickhull/qhArray.inl:231 */
	void Swap(qhArray<qhHalfEdge*>* , qhArray<qhHalfEdge*>& );
private:
	qhHalfEdge * * mBegin; /* 0 8 */
	qhHalfEdge * * mEnd; /* 8 8 */
	qhHalfEdge * * mCapacity; /* 16 8 */
	/* thirdparty/quickhull/qhArray.h:63 */
	void qhArray(qhArray<qhHalfEdge*>* , const qhArray<qhHalfEdge*>& );
	/* thirdparty/quickhull/qhArray.h:64 */
	qhArray<qhHalfEdge*>& operator=(qhArray<qhHalfEdge*>* , const qhArray<qhHalfEdge*>& );
};

// <061E8727> thirdparty/quickhull/qhArray.h:22
// member functions: 50
// member variables: 3
// class size: 24
class qhArray<qhFace*> {
	/* thirdparty/quickhull/qhArray.inl:12 */
	void qhArray(qhArray<qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:23 */
	void ~qhArray(qhArray<qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:32 */
	int Capacity(const qhArray<qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:40 */
	int Size(const qhArray<qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:48 */
	bool Empty(const qhArray<qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:56 */
	void Clear(qhArray<qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:65 */
	void Reserve(qhArray<qhFace*>* , int);
	/* thirdparty/quickhull/qhArray.inl:82 */
	void Resize(qhArray<qhFace*>* , int);
	/* thirdparty/quickhull/qhArray.inl:94 */
	qhFace* & Expand(qhArray<qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:108 */
	void PushBack(qhArray<qhFace*>* , qhFace* const& );
	/* thirdparty/quickhull/qhArray.inl:121 */
	void PopBack(qhArray<qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:129 */
	int IndexOf(const qhArray<qhFace*>* , qhFace* const& );
	/* thirdparty/quickhull/qhArray.inl:145 */
	qhFace* & operator[](qhArray<qhFace*>* , int);
	/* thirdparty/quickhull/qhArray.inl:154 */
	qhFace* const& operator[](const qhArray<qhFace*>* , int);
	/* thirdparty/quickhull/qhArray.inl:163 */
	qhFace* & Front(qhArray<qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:172 */
	qhFace* const& Front(const qhArray<qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:181 */
	qhFace* & Back(qhArray<qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:222 */
	qhFace* const& Back(const qhArray<qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:190 */
	qhFace** Begin(qhArray<qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:198 */
	qhFace* const* Begin(const qhArray<qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:206 */
	qhFace** End(qhArray<qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:214 */
	qhFace* const* End(const qhArray<qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:231 */
	void Swap(qhArray<qhFace*>* , qhArray<qhFace*>& );
private:
	qhFace * * mBegin; /* 0 8 */
	qhFace * * mEnd; /* 8 8 */
	qhFace * * mCapacity; /* 16 8 */
	/* thirdparty/quickhull/qhArray.h:63 */
	void qhArray(qhArray<qhFace*>* , const qhArray<qhFace*>& );
	/* thirdparty/quickhull/qhArray.h:64 */
	qhArray<qhFace*>& operator=(qhArray<qhFace*>* , const qhArray<qhFace*>& );
	void qhArray(class qhArray<qhFace*> *); /* linkage=_ZN7qhArrayIP6qhFaceEC4Ev */
	void ~qhArray(class qhArray<qhFace*> *); /* linkage=_ZN7qhArrayIP6qhFaceED4Ev */
	int Capacity(const class qhArray<qhFace*>  *); /* linkage=_ZNK7qhArrayIP6qhFaceE8CapacityEv */
	int Size(const class qhArray<qhFace*>  *); /* linkage=_ZNK7qhArrayIP6qhFaceE4SizeEv */
	bool Empty(const class qhArray<qhFace*>  *); /* linkage=_ZNK7qhArrayIP6qhFaceE5EmptyEv */
	void Clear(class qhArray<qhFace*> *); /* linkage=_ZN7qhArrayIP6qhFaceE5ClearEv */
	void Reserve(class qhArray<qhFace*> *, int); /* linkage=_ZN7qhArrayIP6qhFaceE7ReserveEi */
	void Resize(class qhArray<qhFace*> *, int); /* linkage=_ZN7qhArrayIP6qhFaceE6ResizeEi */
	class qhFace * & Expand(class qhArray<qhFace*> *); /* linkage=_ZN7qhArrayIP6qhFaceE6ExpandEv */
	void PushBack(class qhArray<qhFace*> *, class qhFace * const &); /* linkage=_ZN7qhArrayIP6qhFaceE8PushBackERKS1_ */
	void PopBack(class qhArray<qhFace*> *); /* linkage=_ZN7qhArrayIP6qhFaceE7PopBackEv */
	int IndexOf(const class qhArray<qhFace*>  *, class qhFace * const &); /* linkage=_ZNK7qhArrayIP6qhFaceE7IndexOfERKS1_ */
	class qhFace * & operator[](class qhArray<qhFace*> *, int); /* linkage=_ZN7qhArrayIP6qhFaceEixEi */
	class qhFace * const & operator[](const class qhArray<qhFace*>  *, int); /* linkage=_ZNK7qhArrayIP6qhFaceEixEi */
	class qhFace * & Front(class qhArray<qhFace*> *); /* linkage=_ZN7qhArrayIP6qhFaceE5FrontEv */
	class qhFace * const & Front(const class qhArray<qhFace*>  *); /* linkage=_ZNK7qhArrayIP6qhFaceE5FrontEv */
	class qhFace * & Back(class qhArray<qhFace*> *); /* linkage=_ZN7qhArrayIP6qhFaceE4BackEv */
	class qhFace * const & Back(const class qhArray<qhFace*>  *); /* linkage=_ZNK7qhArrayIP6qhFaceE4BackEv */
	class qhFace * * Begin(class qhArray<qhFace*> *); /* linkage=_ZN7qhArrayIP6qhFaceE5BeginEv */
	class qhFace * const * Begin(const class qhArray<qhFace*>  *); /* linkage=_ZNK7qhArrayIP6qhFaceE5BeginEv */
	class qhFace * * End(class qhArray<qhFace*> *); /* linkage=_ZN7qhArrayIP6qhFaceE3EndEv */
	class qhFace * const * End(const class qhArray<qhFace*>  *); /* linkage=_ZNK7qhArrayIP6qhFaceE3EndEv */
	void Swap(class qhArray<qhFace*> *, class qhArray<qhFace*> &); /* linkage=_ZN7qhArrayIP6qhFaceE4SwapERS2_ */
	void qhArray(class qhArray<qhFace*> *, const class qhArray<qhFace*>  &); /* linkage=_ZN7qhArrayIP6qhFaceEC4ERKS2_ */
	class qhArray<qhFace*> & operator=(class qhArray<qhFace*> *, const class qhArray<qhFace*>  &); /* linkage=_ZN7qhArrayIP6qhFaceEaSERKS2_ */
};

// <061E8AE9> thirdparty/quickhull/qhArray.h:22
// member functions: 25
// member variables: 3
// class size: 24
class qhArray<qhArray<const qhFace*> > {
	/* thirdparty/quickhull/qhArray.inl:12 */
	void qhArray(qhArray<qhArray<const qhFace*> >* );
	/* thirdparty/quickhull/qhArray.inl:23 */
	void ~qhArray(qhArray<qhArray<const qhFace*> >* );
	/* thirdparty/quickhull/qhArray.inl:32 */
	int Capacity(const qhArray<qhArray<const qhFace*> >* );
	/* thirdparty/quickhull/qhArray.inl:40 */
	int Size(const qhArray<qhArray<const qhFace*> >* );
	/* thirdparty/quickhull/qhArray.inl:48 */
	bool Empty(const qhArray<qhArray<const qhFace*> >* );
	/* thirdparty/quickhull/qhArray.inl:56 */
	void Clear(qhArray<qhArray<const qhFace*> >* );
	/* thirdparty/quickhull/qhArray.inl:65 */
	void Reserve(qhArray<qhArray<const qhFace*> >* , int);
	/* thirdparty/quickhull/qhArray.inl:82 */
	void Resize(qhArray<qhArray<const qhFace*> >* , int);
	/* thirdparty/quickhull/qhArray.inl:94 */
	qhArray<const qhFace*>& Expand(qhArray<qhArray<const qhFace*> >* );
	/* thirdparty/quickhull/qhArray.inl:108 */
	void PushBack(qhArray<qhArray<const qhFace*> >* , const qhArray<const qhFace*>& );
	/* thirdparty/quickhull/qhArray.inl:121 */
	void PopBack(qhArray<qhArray<const qhFace*> >* );
	/* thirdparty/quickhull/qhArray.inl:129 */
	int IndexOf(const qhArray<qhArray<const qhFace*> >* , const qhArray<const qhFace*>& );
	/* thirdparty/quickhull/qhArray.inl:145 */
	qhArray<const qhFace*>& operator[](qhArray<qhArray<const qhFace*> >* , int);
	/* thirdparty/quickhull/qhArray.inl:154 */
	const qhArray<const qhFace*>& operator[](const qhArray<qhArray<const qhFace*> >* , int);
	/* thirdparty/quickhull/qhArray.inl:163 */
	qhArray<const qhFace*>& Front(qhArray<qhArray<const qhFace*> >* );
	/* thirdparty/quickhull/qhArray.inl:172 */
	const qhArray<const qhFace*>& Front(const qhArray<qhArray<const qhFace*> >* );
	/* thirdparty/quickhull/qhArray.inl:181 */
	qhArray<const qhFace*>& Back(qhArray<qhArray<const qhFace*> >* );
	/* thirdparty/quickhull/qhArray.inl:222 */
	const qhArray<const qhFace*>& Back(const qhArray<qhArray<const qhFace*> >* );
	/* thirdparty/quickhull/qhArray.inl:190 */
	qhArray<const qhFace*>* Begin(qhArray<qhArray<const qhFace*> >* );
	/* thirdparty/quickhull/qhArray.inl:198 */
	const qhArray<const qhFace*>* Begin(const qhArray<qhArray<const qhFace*> >* );
	/* thirdparty/quickhull/qhArray.inl:206 */
	qhArray<const qhFace*>* End(qhArray<qhArray<const qhFace*> >* );
	/* thirdparty/quickhull/qhArray.inl:214 */
	const qhArray<const qhFace*>* End(const qhArray<qhArray<const qhFace*> >* );
	/* thirdparty/quickhull/qhArray.inl:231 */
	void Swap(qhArray<qhArray<const qhFace*> >* , qhArray<qhArray<const qhFace*> >& );
private:
	qhArray<const qhFace*> * mBegin; /* 0 8 */
	qhArray<const qhFace*> * mEnd; /* 8 8 */
	qhArray<const qhFace*> * mCapacity; /* 16 8 */
	/* thirdparty/quickhull/qhArray.h:63 */
	void qhArray(qhArray<qhArray<const qhFace*> >* , const qhArray<qhArray<const qhFace*> >& );
	/* thirdparty/quickhull/qhArray.h:64 */
	qhArray<qhArray<const qhFace*> >& operator=(qhArray<qhArray<const qhFace*> >* , const qhArray<qhArray<const qhFace*> >& );
};

// <061E8E8D> thirdparty/quickhull/qhArray.h:22
// member functions: 50
// member variables: 3
// class size: 24
class qhArray<const qhFace*> {
	/* thirdparty/quickhull/qhArray.inl:12 */
	void qhArray(qhArray<const qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:23 */
	void ~qhArray(qhArray<const qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:32 */
	int Capacity(const qhArray<const qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:40 */
	int Size(const qhArray<const qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:48 */
	bool Empty(const qhArray<const qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:56 */
	void Clear(qhArray<const qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:65 */
	void Reserve(qhArray<const qhFace*>* , int);
	/* thirdparty/quickhull/qhArray.inl:82 */
	void Resize(qhArray<const qhFace*>* , int);
	/* thirdparty/quickhull/qhArray.inl:94 */
	const qhFace* & Expand(qhArray<const qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:108 */
	void PushBack(qhArray<const qhFace*>* , const qhFace* const& );
	/* thirdparty/quickhull/qhArray.inl:121 */
	void PopBack(qhArray<const qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:129 */
	int IndexOf(const qhArray<const qhFace*>* , const qhFace* const& );
	/* thirdparty/quickhull/qhArray.inl:145 */
	const qhFace* & operator[](qhArray<const qhFace*>* , int);
	/* thirdparty/quickhull/qhArray.inl:154 */
	const qhFace* const& operator[](const qhArray<const qhFace*>* , int);
	/* thirdparty/quickhull/qhArray.inl:163 */
	const qhFace* & Front(qhArray<const qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:172 */
	const qhFace* const& Front(const qhArray<const qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:181 */
	const qhFace* & Back(qhArray<const qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:222 */
	const qhFace* const& Back(const qhArray<const qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:190 */
	const qhFace* * Begin(qhArray<const qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:198 */
	const qhFace* const* Begin(const qhArray<const qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:206 */
	const qhFace* * End(qhArray<const qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:214 */
	const qhFace* const* End(const qhArray<const qhFace*>* );
	/* thirdparty/quickhull/qhArray.inl:231 */
	void Swap(qhArray<const qhFace*>* , qhArray<const qhFace*>& );
private:
	const class qhFace * * mBegin; /* 0 8 */
	const class qhFace * * mEnd; /* 8 8 */
	const class qhFace * * mCapacity; /* 16 8 */
	/* thirdparty/quickhull/qhArray.h:63 */
	void qhArray(qhArray<const qhFace*>* , const qhArray<const qhFace*>& );
	/* thirdparty/quickhull/qhArray.h:64 */
	qhArray<const qhFace*>& operator=(qhArray<const qhFace*>* , const qhArray<const qhFace*>& );
	void qhArray(class qhArray<const qhFace*> *); /* linkage=_ZN7qhArrayIPK6qhFaceEC4Ev */
	void ~qhArray(class qhArray<const qhFace*> *); /* linkage=_ZN7qhArrayIPK6qhFaceED4Ev */
	int Capacity(const class qhArray<const qhFace*>  *); /* linkage=_ZNK7qhArrayIPK6qhFaceE8CapacityEv */
	int Size(const class qhArray<const qhFace*>  *); /* linkage=_ZNK7qhArrayIPK6qhFaceE4SizeEv */
	bool Empty(const class qhArray<const qhFace*>  *); /* linkage=_ZNK7qhArrayIPK6qhFaceE5EmptyEv */
	void Clear(class qhArray<const qhFace*> *); /* linkage=_ZN7qhArrayIPK6qhFaceE5ClearEv */
	void Reserve(class qhArray<const qhFace*> *, int); /* linkage=_ZN7qhArrayIPK6qhFaceE7ReserveEi */
	void Resize(class qhArray<const qhFace*> *, int); /* linkage=_ZN7qhArrayIPK6qhFaceE6ResizeEi */
	const class qhFace  * & Expand(class qhArray<const qhFace*> *); /* linkage=_ZN7qhArrayIPK6qhFaceE6ExpandEv */
	void PushBack(class qhArray<const qhFace*> *, const class qhFace  * const &); /* linkage=_ZN7qhArrayIPK6qhFaceE8PushBackERKS2_ */
	void PopBack(class qhArray<const qhFace*> *); /* linkage=_ZN7qhArrayIPK6qhFaceE7PopBackEv */
	int IndexOf(const class qhArray<const qhFace*>  *, const class qhFace  * const &); /* linkage=_ZNK7qhArrayIPK6qhFaceE7IndexOfERKS2_ */
	const class qhFace  * & operator[](class qhArray<const qhFace*> *, int); /* linkage=_ZN7qhArrayIPK6qhFaceEixEi */
	const class qhFace  * const & operator[](const class qhArray<const qhFace*>  *, int); /* linkage=_ZNK7qhArrayIPK6qhFaceEixEi */
	const class qhFace  * & Front(class qhArray<const qhFace*> *); /* linkage=_ZN7qhArrayIPK6qhFaceE5FrontEv */
	const class qhFace  * const & Front(const class qhArray<const qhFace*>  *); /* linkage=_ZNK7qhArrayIPK6qhFaceE5FrontEv */
	const class qhFace  * & Back(class qhArray<const qhFace*> *); /* linkage=_ZN7qhArrayIPK6qhFaceE4BackEv */
	const class qhFace  * const & Back(const class qhArray<const qhFace*>  *); /* linkage=_ZNK7qhArrayIPK6qhFaceE4BackEv */
	const class qhFace  * * Begin(class qhArray<const qhFace*> *); /* linkage=_ZN7qhArrayIPK6qhFaceE5BeginEv */
	const class qhFace  * const * Begin(const class qhArray<const qhFace*>  *); /* linkage=_ZNK7qhArrayIPK6qhFaceE5BeginEv */
	const class qhFace  * * End(class qhArray<const qhFace*> *); /* linkage=_ZN7qhArrayIPK6qhFaceE3EndEv */
	const class qhFace  * const * End(const class qhArray<const qhFace*>  *); /* linkage=_ZNK7qhArrayIPK6qhFaceE3EndEv */
	void Swap(class qhArray<const qhFace*> *, class qhArray<const qhFace*> &); /* linkage=_ZN7qhArrayIPK6qhFaceE4SwapERS3_ */
	void qhArray(class qhArray<const qhFace*> *, const class qhArray<const qhFace*>  &); /* linkage=_ZN7qhArrayIPK6qhFaceEC4ERKS3_ */
	class qhArray<const qhFace*> & operator=(class qhArray<const qhFace*> *, const class qhArray<const qhFace*>  &); /* linkage=_ZN7qhArrayIPK6qhFaceEaSERKS3_ */
};

