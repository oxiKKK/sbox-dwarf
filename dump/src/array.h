
//
// src/array.h
//
//	referenced by: libengine2.so
//
//	functions: 192
//	structs: 31
//

// <06B05661> src/array.h:15
// member functions: 25
// member variables: 3
// struct size: 16
struct b3Array<b3TriangleCache> {
	/* src/array.h:17 */
	void Create(b3Array<b3TriangleCache>* , int);
	/* src/array.h:31 */
	void Destroy(b3Array<b3TriangleCache>* );
	/* src/array.h:39 */
	b3TriangleCache& operator[](b3Array<b3TriangleCache>* , int);
	/* src/array.h:45 */
	const b3TriangleCache& operator[](const b3Array<b3TriangleCache>* , int);
	/* src/array.h:52 */
	b3TriangleCache* Get(b3Array<b3TriangleCache>* , int);
	/* src/array.h:226 */
	void Reserve(b3Array<b3TriangleCache>* , int);
	/* src/array.h:61 */
	int GetCount(const b3Array<b3TriangleCache>* );
	/* src/array.h:66 */
	bool IsEmpty(const b3Array<b3TriangleCache>* );
	/* src/array.h:71 */
	void Clear(b3Array<b3TriangleCache>* );
	/* src/array.h:76 */
	void Resize(b3Array<b3TriangleCache>* , int);
	/* src/array.h:82 */
	void MemZero(b3Array<b3TriangleCache>* );
	/* src/array.h:90 */
	int AddUninitialized(b3Array<b3TriangleCache>* );
	/* src/array.h:107 */
	b3TriangleCache* Add(b3Array<b3TriangleCache>* );
	/* src/array.h:124 */
	void PushBack(b3Array<b3TriangleCache>* , const b3TriangleCache& );
	/* src/array.h:141 */
	void Append(b3Array<b3TriangleCache>* , const b3TriangleCache* , int);
	/* src/array.h:154 */
	b3TriangleCache PopBack(b3Array<b3TriangleCache>* );
	/* src/array.h:161 */
	b3TriangleCache& Back(b3Array<b3TriangleCache>* );
	/* src/array.h:167 */
	const b3TriangleCache& Back(const b3Array<b3TriangleCache>* );
	/* src/array.h:175 */
	int RemoveSwap(b3Array<b3TriangleCache>* , int);
	/* src/array.h:250 */
	bool Contains(const b3Array<b3TriangleCache>* , const b3TriangleCache& );
	/* src/array.h:193 */
	int GetByteCount(const b3Array<b3TriangleCache>* );
	/* src/array.h:200 */
	b3TriangleCache* begin(b3Array<b3TriangleCache>* );
	/* src/array.h:205 */
	const b3TriangleCache* begin(const b3Array<b3TriangleCache>* );
	/* src/array.h:210 */
	b3TriangleCache* end(b3Array<b3TriangleCache>* );
	/* src/array.h:215 */
	const b3TriangleCache* end(const b3Array<b3TriangleCache>* );
	b3TriangleCache * data; /* 0 8 */
	int capacity; /* 8 4 */
	int count; /* 12 4 */
};

// <06B05B68> src/array.h:15
// member functions: 25
// member variables: 3
// struct size: 16
struct b3Array<int> {
	/* src/array.h:17 */
	void Create(b3Array<int>* , int);
	/* src/array.h:31 */
	void Destroy(b3Array<int>* );
	/* src/array.h:39 */
	int& operator[](b3Array<int>* , int);
	/* src/array.h:45 */
	const int& operator[](const b3Array<int>* , int);
	/* src/array.h:52 */
	int* Get(b3Array<int>* , int);
	/* src/array.h:226 */
	void Reserve(b3Array<int>* , int);
	/* src/array.h:61 */
	int GetCount(const b3Array<int>* );
	/* src/array.h:66 */
	bool IsEmpty(const b3Array<int>* );
	/* src/array.h:71 */
	void Clear(b3Array<int>* );
	/* src/array.h:76 */
	void Resize(b3Array<int>* , int);
	/* src/array.h:82 */
	void MemZero(b3Array<int>* );
	/* src/array.h:90 */
	int AddUninitialized(b3Array<int>* );
	/* src/array.h:107 */
	int* Add(b3Array<int>* );
	/* src/array.h:124 */
	void PushBack(b3Array<int>* , const int& );
	/* src/array.h:141 */
	void Append(b3Array<int>* , const int* , int);
	/* src/array.h:154 */
	int PopBack(b3Array<int>* );
	/* src/array.h:161 */
	int& Back(b3Array<int>* );
	/* src/array.h:167 */
	const int& Back(const b3Array<int>* );
	/* src/array.h:175 */
	int RemoveSwap(b3Array<int>* , int);
	/* src/array.h:250 */
	bool Contains(const b3Array<int>* , const int& );
	/* src/array.h:193 */
	int GetByteCount(const b3Array<int>* );
	/* src/array.h:200 */
	int* begin(b3Array<int>* );
	/* src/array.h:205 */
	const int* begin(const b3Array<int>* );
	/* src/array.h:210 */
	int* end(b3Array<int>* );
	/* src/array.h:215 */
	const int* end(const b3Array<int>* );
	int * data; /* 0 8 */
	int capacity; /* 8 4 */
	int count; /* 12 4 */
};

// <06B076DA> src/array.h:15
// member functions: 25
// member variables: 3
// struct size: 16
struct b3Array<b3ContactSim> {
	/* src/array.h:17 */
	void Create(b3Array<b3ContactSim>* , int);
	/* src/array.h:31 */
	void Destroy(b3Array<b3ContactSim>* );
	/* src/array.h:39 */
	b3ContactSim& operator[](b3Array<b3ContactSim>* , int);
	/* src/array.h:45 */
	const b3ContactSim& operator[](const b3Array<b3ContactSim>* , int);
	/* src/array.h:52 */
	b3ContactSim* Get(b3Array<b3ContactSim>* , int);
	/* src/array.h:226 */
	void Reserve(b3Array<b3ContactSim>* , int);
	/* src/array.h:61 */
	int GetCount(const b3Array<b3ContactSim>* );
	/* src/array.h:66 */
	bool IsEmpty(const b3Array<b3ContactSim>* );
	/* src/array.h:71 */
	void Clear(b3Array<b3ContactSim>* );
	/* src/array.h:76 */
	void Resize(b3Array<b3ContactSim>* , int);
	/* src/array.h:82 */
	void MemZero(b3Array<b3ContactSim>* );
	/* src/array.h:90 */
	int AddUninitialized(b3Array<b3ContactSim>* );
	/* src/array.h:107 */
	b3ContactSim* Add(b3Array<b3ContactSim>* );
	/* src/array.h:124 */
	void PushBack(b3Array<b3ContactSim>* , const b3ContactSim& );
	/* src/array.h:141 */
	void Append(b3Array<b3ContactSim>* , const b3ContactSim* , int);
	/* src/array.h:154 */
	b3ContactSim PopBack(b3Array<b3ContactSim>* );
	/* src/array.h:161 */
	b3ContactSim& Back(b3Array<b3ContactSim>* );
	/* src/array.h:167 */
	const b3ContactSim& Back(const b3Array<b3ContactSim>* );
	/* src/array.h:175 */
	int RemoveSwap(b3Array<b3ContactSim>* , int);
	/* src/array.h:250 */
	bool Contains(const b3Array<b3ContactSim>* , const b3ContactSim& );
	/* src/array.h:193 */
	int GetByteCount(const b3Array<b3ContactSim>* );
	/* src/array.h:200 */
	b3ContactSim* begin(b3Array<b3ContactSim>* );
	/* src/array.h:205 */
	const b3ContactSim* begin(const b3Array<b3ContactSim>* );
	/* src/array.h:210 */
	b3ContactSim* end(b3Array<b3ContactSim>* );
	/* src/array.h:215 */
	const b3ContactSim* end(const b3Array<b3ContactSim>* );
	b3ContactSim * data; /* 0 8 */
	int capacity; /* 8 4 */
	int count; /* 12 4 */
};

// <06B07A8F> src/array.h:15
// member functions: 25
// member variables: 3
// struct size: 16
struct b3Array<b3JointSim> {
	/* src/array.h:17 */
	void Create(b3Array<b3JointSim>* , int);
	/* src/array.h:31 */
	void Destroy(b3Array<b3JointSim>* );
	/* src/array.h:39 */
	b3JointSim& operator[](b3Array<b3JointSim>* , int);
	/* src/array.h:45 */
	const b3JointSim& operator[](const b3Array<b3JointSim>* , int);
	/* src/array.h:52 */
	b3JointSim* Get(b3Array<b3JointSim>* , int);
	/* src/array.h:226 */
	void Reserve(b3Array<b3JointSim>* , int);
	/* src/array.h:61 */
	int GetCount(const b3Array<b3JointSim>* );
	/* src/array.h:66 */
	bool IsEmpty(const b3Array<b3JointSim>* );
	/* src/array.h:71 */
	void Clear(b3Array<b3JointSim>* );
	/* src/array.h:76 */
	void Resize(b3Array<b3JointSim>* , int);
	/* src/array.h:82 */
	void MemZero(b3Array<b3JointSim>* );
	/* src/array.h:90 */
	int AddUninitialized(b3Array<b3JointSim>* );
	/* src/array.h:107 */
	b3JointSim* Add(b3Array<b3JointSim>* );
	/* src/array.h:124 */
	void PushBack(b3Array<b3JointSim>* , const b3JointSim& );
	/* src/array.h:141 */
	void Append(b3Array<b3JointSim>* , const b3JointSim* , int);
	/* src/array.h:154 */
	b3JointSim PopBack(b3Array<b3JointSim>* );
	/* src/array.h:161 */
	b3JointSim& Back(b3Array<b3JointSim>* );
	/* src/array.h:167 */
	const b3JointSim& Back(const b3Array<b3JointSim>* );
	/* src/array.h:175 */
	int RemoveSwap(b3Array<b3JointSim>* , int);
	/* src/array.h:250 */
	bool Contains(const b3Array<b3JointSim>* , const b3JointSim& );
	/* src/array.h:193 */
	int GetByteCount(const b3Array<b3JointSim>* );
	/* src/array.h:200 */
	b3JointSim* begin(b3Array<b3JointSim>* );
	/* src/array.h:205 */
	const b3JointSim* begin(const b3Array<b3JointSim>* );
	/* src/array.h:210 */
	b3JointSim* end(b3Array<b3JointSim>* );
	/* src/array.h:215 */
	const b3JointSim* end(const b3Array<b3JointSim>* );
	b3JointSim * data; /* 0 8 */
	int capacity; /* 8 4 */
	int count; /* 12 4 */
};

// <06B08036> src/array.h:15
// member functions: 25
// member variables: 3
// struct size: 16
struct b3Array<b3SensorHit> {
	/* src/array.h:17 */
	void Create(b3Array<b3SensorHit>* , int);
	/* src/array.h:31 */
	void Destroy(b3Array<b3SensorHit>* );
	/* src/array.h:39 */
	b3SensorHit& operator[](b3Array<b3SensorHit>* , int);
	/* src/array.h:45 */
	const b3SensorHit& operator[](const b3Array<b3SensorHit>* , int);
	/* src/array.h:52 */
	b3SensorHit* Get(b3Array<b3SensorHit>* , int);
	/* src/array.h:226 */
	void Reserve(b3Array<b3SensorHit>* , int);
	/* src/array.h:61 */
	int GetCount(const b3Array<b3SensorHit>* );
	/* src/array.h:66 */
	bool IsEmpty(const b3Array<b3SensorHit>* );
	/* src/array.h:71 */
	void Clear(b3Array<b3SensorHit>* );
	/* src/array.h:76 */
	void Resize(b3Array<b3SensorHit>* , int);
	/* src/array.h:82 */
	void MemZero(b3Array<b3SensorHit>* );
	/* src/array.h:90 */
	int AddUninitialized(b3Array<b3SensorHit>* );
	/* src/array.h:107 */
	b3SensorHit* Add(b3Array<b3SensorHit>* );
	/* src/array.h:124 */
	void PushBack(b3Array<b3SensorHit>* , const b3SensorHit& );
	/* src/array.h:141 */
	void Append(b3Array<b3SensorHit>* , const b3SensorHit* , int);
	/* src/array.h:154 */
	b3SensorHit PopBack(b3Array<b3SensorHit>* );
	/* src/array.h:161 */
	b3SensorHit& Back(b3Array<b3SensorHit>* );
	/* src/array.h:167 */
	const b3SensorHit& Back(const b3Array<b3SensorHit>* );
	/* src/array.h:175 */
	int RemoveSwap(b3Array<b3SensorHit>* , int);
	/* src/array.h:250 */
	bool Contains(const b3Array<b3SensorHit>* , const b3SensorHit& );
	/* src/array.h:193 */
	int GetByteCount(const b3Array<b3SensorHit>* );
	/* src/array.h:200 */
	b3SensorHit* begin(b3Array<b3SensorHit>* );
	/* src/array.h:205 */
	const b3SensorHit* begin(const b3Array<b3SensorHit>* );
	/* src/array.h:210 */
	b3SensorHit* end(b3Array<b3SensorHit>* );
	/* src/array.h:215 */
	const b3SensorHit* end(const b3Array<b3SensorHit>* );
	b3SensorHit * data; /* 0 8 */
	int capacity; /* 8 4 */
	int count; /* 12 4 */
};

// <06B08545> src/array.h:15
// member functions: 25
// member variables: 3
// struct size: 16
struct b3Array<b3Body> {
	/* src/array.h:17 */
	void Create(b3Array<b3Body>* , int);
	/* src/array.h:31 */
	void Destroy(b3Array<b3Body>* );
	/* src/array.h:39 */
	b3Body& operator[](b3Array<b3Body>* , int);
	/* src/array.h:45 */
	const b3Body& operator[](const b3Array<b3Body>* , int);
	/* src/array.h:52 */
	b3Body* Get(b3Array<b3Body>* , int);
	/* src/array.h:226 */
	void Reserve(b3Array<b3Body>* , int);
	/* src/array.h:61 */
	int GetCount(const b3Array<b3Body>* );
	/* src/array.h:66 */
	bool IsEmpty(const b3Array<b3Body>* );
	/* src/array.h:71 */
	void Clear(b3Array<b3Body>* );
	/* src/array.h:76 */
	void Resize(b3Array<b3Body>* , int);
	/* src/array.h:82 */
	void MemZero(b3Array<b3Body>* );
	/* src/array.h:90 */
	int AddUninitialized(b3Array<b3Body>* );
	/* src/array.h:107 */
	b3Body* Add(b3Array<b3Body>* );
	/* src/array.h:124 */
	void PushBack(b3Array<b3Body>* , const b3Body& );
	/* src/array.h:141 */
	void Append(b3Array<b3Body>* , const b3Body* , int);
	/* src/array.h:154 */
	b3Body PopBack(b3Array<b3Body>* );
	/* src/array.h:161 */
	b3Body& Back(b3Array<b3Body>* );
	/* src/array.h:167 */
	const b3Body& Back(const b3Array<b3Body>* );
	/* src/array.h:175 */
	int RemoveSwap(b3Array<b3Body>* , int);
	/* src/array.h:250 */
	bool Contains(const b3Array<b3Body>* , const b3Body& );
	/* src/array.h:193 */
	int GetByteCount(const b3Array<b3Body>* );
	/* src/array.h:200 */
	b3Body* begin(b3Array<b3Body>* );
	/* src/array.h:205 */
	const b3Body* begin(const b3Array<b3Body>* );
	/* src/array.h:210 */
	b3Body* end(b3Array<b3Body>* );
	/* src/array.h:215 */
	const b3Body* end(const b3Array<b3Body>* );
	b3Body * data; /* 0 8 */
	int capacity; /* 8 4 */
	int count; /* 12 4 */
};

// <06B08905> src/array.h:15
// member functions: 25
// member variables: 3
// struct size: 16
struct b3Array<b3SolverSet> {
	/* src/array.h:17 */
	void Create(b3Array<b3SolverSet>* , int);
	/* src/array.h:31 */
	void Destroy(b3Array<b3SolverSet>* );
	/* src/array.h:39 */
	b3SolverSet& operator[](b3Array<b3SolverSet>* , int);
	/* src/array.h:45 */
	const b3SolverSet& operator[](const b3Array<b3SolverSet>* , int);
	/* src/array.h:52 */
	b3SolverSet* Get(b3Array<b3SolverSet>* , int);
	/* src/array.h:226 */
	void Reserve(b3Array<b3SolverSet>* , int);
	/* src/array.h:61 */
	int GetCount(const b3Array<b3SolverSet>* );
	/* src/array.h:66 */
	bool IsEmpty(const b3Array<b3SolverSet>* );
	/* src/array.h:71 */
	void Clear(b3Array<b3SolverSet>* );
	/* src/array.h:76 */
	void Resize(b3Array<b3SolverSet>* , int);
	/* src/array.h:82 */
	void MemZero(b3Array<b3SolverSet>* );
	/* src/array.h:90 */
	int AddUninitialized(b3Array<b3SolverSet>* );
	/* src/array.h:107 */
	b3SolverSet* Add(b3Array<b3SolverSet>* );
	/* src/array.h:124 */
	void PushBack(b3Array<b3SolverSet>* , const b3SolverSet& );
	/* src/array.h:141 */
	void Append(b3Array<b3SolverSet>* , const b3SolverSet* , int);
	/* src/array.h:154 */
	b3SolverSet PopBack(b3Array<b3SolverSet>* );
	/* src/array.h:161 */
	b3SolverSet& Back(b3Array<b3SolverSet>* );
	/* src/array.h:167 */
	const b3SolverSet& Back(const b3Array<b3SolverSet>* );
	/* src/array.h:175 */
	int RemoveSwap(b3Array<b3SolverSet>* , int);
	/* src/array.h:250 */
	bool Contains(const b3Array<b3SolverSet>* , const b3SolverSet& );
	/* src/array.h:193 */
	int GetByteCount(const b3Array<b3SolverSet>* );
	/* src/array.h:200 */
	b3SolverSet* begin(b3Array<b3SolverSet>* );
	/* src/array.h:205 */
	const b3SolverSet* begin(const b3Array<b3SolverSet>* );
	/* src/array.h:210 */
	b3SolverSet* end(b3Array<b3SolverSet>* );
	/* src/array.h:215 */
	const b3SolverSet* end(const b3Array<b3SolverSet>* );
	b3SolverSet * data; /* 0 8 */
	int capacity; /* 8 4 */
	int count; /* 12 4 */
};

// <06B08D32> src/array.h:15
// member functions: 25
// member variables: 3
// struct size: 16
struct b3Array<b3Joint> {
	/* src/array.h:17 */
	void Create(b3Array<b3Joint>* , int);
	/* src/array.h:31 */
	void Destroy(b3Array<b3Joint>* );
	/* src/array.h:39 */
	b3Joint& operator[](b3Array<b3Joint>* , int);
	/* src/array.h:45 */
	const b3Joint& operator[](const b3Array<b3Joint>* , int);
	/* src/array.h:52 */
	b3Joint* Get(b3Array<b3Joint>* , int);
	/* src/array.h:226 */
	void Reserve(b3Array<b3Joint>* , int);
	/* src/array.h:61 */
	int GetCount(const b3Array<b3Joint>* );
	/* src/array.h:66 */
	bool IsEmpty(const b3Array<b3Joint>* );
	/* src/array.h:71 */
	void Clear(b3Array<b3Joint>* );
	/* src/array.h:76 */
	void Resize(b3Array<b3Joint>* , int);
	/* src/array.h:82 */
	void MemZero(b3Array<b3Joint>* );
	/* src/array.h:90 */
	int AddUninitialized(b3Array<b3Joint>* );
	/* src/array.h:107 */
	b3Joint* Add(b3Array<b3Joint>* );
	/* src/array.h:124 */
	void PushBack(b3Array<b3Joint>* , const b3Joint& );
	/* src/array.h:141 */
	void Append(b3Array<b3Joint>* , const b3Joint* , int);
	/* src/array.h:154 */
	b3Joint PopBack(b3Array<b3Joint>* );
	/* src/array.h:161 */
	b3Joint& Back(b3Array<b3Joint>* );
	/* src/array.h:167 */
	const b3Joint& Back(const b3Array<b3Joint>* );
	/* src/array.h:175 */
	int RemoveSwap(b3Array<b3Joint>* , int);
	/* src/array.h:250 */
	bool Contains(const b3Array<b3Joint>* , const b3Joint& );
	/* src/array.h:193 */
	int GetByteCount(const b3Array<b3Joint>* );
	/* src/array.h:200 */
	b3Joint* begin(b3Array<b3Joint>* );
	/* src/array.h:205 */
	const b3Joint* begin(const b3Array<b3Joint>* );
	/* src/array.h:210 */
	b3Joint* end(b3Array<b3Joint>* );
	/* src/array.h:215 */
	const b3Joint* end(const b3Array<b3Joint>* );
	b3Joint * data; /* 0 8 */
	int capacity; /* 8 4 */
	int count; /* 12 4 */
};

// <06B090F2> src/array.h:15
// member functions: 25
// member variables: 3
// struct size: 16
struct b3Array<b3Contact> {
	/* src/array.h:17 */
	void Create(b3Array<b3Contact>* , int);
	/* src/array.h:31 */
	void Destroy(b3Array<b3Contact>* );
	/* src/array.h:39 */
	b3Contact& operator[](b3Array<b3Contact>* , int);
	/* src/array.h:45 */
	const b3Contact& operator[](const b3Array<b3Contact>* , int);
	/* src/array.h:52 */
	b3Contact* Get(b3Array<b3Contact>* , int);
	/* src/array.h:226 */
	void Reserve(b3Array<b3Contact>* , int);
	/* src/array.h:61 */
	int GetCount(const b3Array<b3Contact>* );
	/* src/array.h:66 */
	bool IsEmpty(const b3Array<b3Contact>* );
	/* src/array.h:71 */
	void Clear(b3Array<b3Contact>* );
	/* src/array.h:76 */
	void Resize(b3Array<b3Contact>* , int);
	/* src/array.h:82 */
	void MemZero(b3Array<b3Contact>* );
	/* src/array.h:90 */
	int AddUninitialized(b3Array<b3Contact>* );
	/* src/array.h:107 */
	b3Contact* Add(b3Array<b3Contact>* );
	/* src/array.h:124 */
	void PushBack(b3Array<b3Contact>* , const b3Contact& );
	/* src/array.h:141 */
	void Append(b3Array<b3Contact>* , const b3Contact* , int);
	/* src/array.h:154 */
	b3Contact PopBack(b3Array<b3Contact>* );
	/* src/array.h:161 */
	b3Contact& Back(b3Array<b3Contact>* );
	/* src/array.h:167 */
	const b3Contact& Back(const b3Array<b3Contact>* );
	/* src/array.h:175 */
	int RemoveSwap(b3Array<b3Contact>* , int);
	/* src/array.h:250 */
	bool Contains(const b3Array<b3Contact>* , const b3Contact& );
	/* src/array.h:193 */
	int GetByteCount(const b3Array<b3Contact>* );
	/* src/array.h:200 */
	b3Contact* begin(b3Array<b3Contact>* );
	/* src/array.h:205 */
	const b3Contact* begin(const b3Array<b3Contact>* );
	/* src/array.h:210 */
	b3Contact* end(b3Array<b3Contact>* );
	/* src/array.h:215 */
	const b3Contact* end(const b3Array<b3Contact>* );
	b3Contact * data; /* 0 8 */
	int capacity; /* 8 4 */
	int count; /* 12 4 */
};

// <06B094B2> src/array.h:15
// member functions: 25
// member variables: 3
// struct size: 16
struct b3Array<b3Island> {
	/* src/array.h:17 */
	void Create(b3Array<b3Island>* , int);
	/* src/array.h:31 */
	void Destroy(b3Array<b3Island>* );
	/* src/array.h:39 */
	b3Island& operator[](b3Array<b3Island>* , int);
	/* src/array.h:45 */
	const b3Island& operator[](const b3Array<b3Island>* , int);
	/* src/array.h:52 */
	b3Island* Get(b3Array<b3Island>* , int);
	/* src/array.h:226 */
	void Reserve(b3Array<b3Island>* , int);
	/* src/array.h:61 */
	int GetCount(const b3Array<b3Island>* );
	/* src/array.h:66 */
	bool IsEmpty(const b3Array<b3Island>* );
	/* src/array.h:71 */
	void Clear(b3Array<b3Island>* );
	/* src/array.h:76 */
	void Resize(b3Array<b3Island>* , int);
	/* src/array.h:82 */
	void MemZero(b3Array<b3Island>* );
	/* src/array.h:90 */
	int AddUninitialized(b3Array<b3Island>* );
	/* src/array.h:107 */
	b3Island* Add(b3Array<b3Island>* );
	/* src/array.h:124 */
	void PushBack(b3Array<b3Island>* , const b3Island& );
	/* src/array.h:141 */
	void Append(b3Array<b3Island>* , const b3Island* , int);
	/* src/array.h:154 */
	b3Island PopBack(b3Array<b3Island>* );
	/* src/array.h:161 */
	b3Island& Back(b3Array<b3Island>* );
	/* src/array.h:167 */
	const b3Island& Back(const b3Array<b3Island>* );
	/* src/array.h:175 */
	int RemoveSwap(b3Array<b3Island>* , int);
	/* src/array.h:250 */
	bool Contains(const b3Array<b3Island>* , const b3Island& );
	/* src/array.h:193 */
	int GetByteCount(const b3Array<b3Island>* );
	/* src/array.h:200 */
	b3Island* begin(b3Array<b3Island>* );
	/* src/array.h:205 */
	const b3Island* begin(const b3Array<b3Island>* );
	/* src/array.h:210 */
	b3Island* end(b3Array<b3Island>* );
	/* src/array.h:215 */
	const b3Island* end(const b3Array<b3Island>* );
	b3Island * data; /* 0 8 */
	int capacity; /* 8 4 */
	int count; /* 12 4 */
};

// <06B09872> src/array.h:15
// member functions: 25
// member variables: 3
// struct size: 16
struct b3Array<b3Shape> {
	/* src/array.h:17 */
	void Create(b3Array<b3Shape>* , int);
	/* src/array.h:31 */
	void Destroy(b3Array<b3Shape>* );
	/* src/array.h:39 */
	b3Shape& operator[](b3Array<b3Shape>* , int);
	/* src/array.h:45 */
	const b3Shape& operator[](const b3Array<b3Shape>* , int);
	/* src/array.h:52 */
	b3Shape* Get(b3Array<b3Shape>* , int);
	/* src/array.h:226 */
	void Reserve(b3Array<b3Shape>* , int);
	/* src/array.h:61 */
	int GetCount(const b3Array<b3Shape>* );
	/* src/array.h:66 */
	bool IsEmpty(const b3Array<b3Shape>* );
	/* src/array.h:71 */
	void Clear(b3Array<b3Shape>* );
	/* src/array.h:76 */
	void Resize(b3Array<b3Shape>* , int);
	/* src/array.h:82 */
	void MemZero(b3Array<b3Shape>* );
	/* src/array.h:90 */
	int AddUninitialized(b3Array<b3Shape>* );
	/* src/array.h:107 */
	b3Shape* Add(b3Array<b3Shape>* );
	/* src/array.h:124 */
	void PushBack(b3Array<b3Shape>* , const b3Shape& );
	/* src/array.h:141 */
	void Append(b3Array<b3Shape>* , const b3Shape* , int);
	/* src/array.h:154 */
	b3Shape PopBack(b3Array<b3Shape>* );
	/* src/array.h:161 */
	b3Shape& Back(b3Array<b3Shape>* );
	/* src/array.h:167 */
	const b3Shape& Back(const b3Array<b3Shape>* );
	/* src/array.h:175 */
	int RemoveSwap(b3Array<b3Shape>* , int);
	/* src/array.h:250 */
	bool Contains(const b3Array<b3Shape>* , const b3Shape& );
	/* src/array.h:193 */
	int GetByteCount(const b3Array<b3Shape>* );
	/* src/array.h:200 */
	b3Shape* begin(b3Array<b3Shape>* );
	/* src/array.h:205 */
	const b3Shape* begin(const b3Array<b3Shape>* );
	/* src/array.h:210 */
	b3Shape* end(b3Array<b3Shape>* );
	/* src/array.h:215 */
	const b3Shape* end(const b3Array<b3Shape>* );
	b3Shape * data; /* 0 8 */
	int capacity; /* 8 4 */
	int count; /* 12 4 */
};

// <06B09E12> src/array.h:15
// member functions: 25
// member variables: 3
// struct size: 16
struct b3Array<b3Sensor> {
	/* src/array.h:17 */
	void Create(b3Array<b3Sensor>* , int);
	/* src/array.h:31 */
	void Destroy(b3Array<b3Sensor>* );
	/* src/array.h:39 */
	b3Sensor& operator[](b3Array<b3Sensor>* , int);
	/* src/array.h:45 */
	const b3Sensor& operator[](const b3Array<b3Sensor>* , int);
	/* src/array.h:52 */
	b3Sensor* Get(b3Array<b3Sensor>* , int);
	/* src/array.h:226 */
	void Reserve(b3Array<b3Sensor>* , int);
	/* src/array.h:61 */
	int GetCount(const b3Array<b3Sensor>* );
	/* src/array.h:66 */
	bool IsEmpty(const b3Array<b3Sensor>* );
	/* src/array.h:71 */
	void Clear(b3Array<b3Sensor>* );
	/* src/array.h:76 */
	void Resize(b3Array<b3Sensor>* , int);
	/* src/array.h:82 */
	void MemZero(b3Array<b3Sensor>* );
	/* src/array.h:90 */
	int AddUninitialized(b3Array<b3Sensor>* );
	/* src/array.h:107 */
	b3Sensor* Add(b3Array<b3Sensor>* );
	/* src/array.h:124 */
	void PushBack(b3Array<b3Sensor>* , const b3Sensor& );
	/* src/array.h:141 */
	void Append(b3Array<b3Sensor>* , const b3Sensor* , int);
	/* src/array.h:154 */
	b3Sensor PopBack(b3Array<b3Sensor>* );
	/* src/array.h:161 */
	b3Sensor& Back(b3Array<b3Sensor>* );
	/* src/array.h:167 */
	const b3Sensor& Back(const b3Array<b3Sensor>* );
	/* src/array.h:175 */
	int RemoveSwap(b3Array<b3Sensor>* , int);
	/* src/array.h:250 */
	bool Contains(const b3Array<b3Sensor>* , const b3Sensor& );
	/* src/array.h:193 */
	int GetByteCount(const b3Array<b3Sensor>* );
	/* src/array.h:200 */
	b3Sensor* begin(b3Array<b3Sensor>* );
	/* src/array.h:205 */
	const b3Sensor* begin(const b3Array<b3Sensor>* );
	/* src/array.h:210 */
	b3Sensor* end(b3Array<b3Sensor>* );
	/* src/array.h:215 */
	const b3Sensor* end(const b3Array<b3Sensor>* );
	b3Sensor * data; /* 0 8 */
	int capacity; /* 8 4 */
	int count; /* 12 4 */
};

// <06B0A21C> src/array.h:15
// member functions: 25
// member variables: 3
// struct size: 16
struct b3Array<b3TaskContext> {
	/* src/array.h:17 */
	void Create(b3Array<b3TaskContext>* , int);
	/* src/array.h:31 */
	void Destroy(b3Array<b3TaskContext>* );
	/* src/array.h:39 */
	b3TaskContext& operator[](b3Array<b3TaskContext>* , int);
	/* src/array.h:45 */
	const b3TaskContext& operator[](const b3Array<b3TaskContext>* , int);
	/* src/array.h:52 */
	b3TaskContext* Get(b3Array<b3TaskContext>* , int);
	/* src/array.h:226 */
	void Reserve(b3Array<b3TaskContext>* , int);
	/* src/array.h:61 */
	int GetCount(const b3Array<b3TaskContext>* );
	/* src/array.h:66 */
	bool IsEmpty(const b3Array<b3TaskContext>* );
	/* src/array.h:71 */
	void Clear(b3Array<b3TaskContext>* );
	/* src/array.h:76 */
	void Resize(b3Array<b3TaskContext>* , int);
	/* src/array.h:82 */
	void MemZero(b3Array<b3TaskContext>* );
	/* src/array.h:90 */
	int AddUninitialized(b3Array<b3TaskContext>* );
	/* src/array.h:107 */
	b3TaskContext* Add(b3Array<b3TaskContext>* );
	/* src/array.h:124 */
	void PushBack(b3Array<b3TaskContext>* , const b3TaskContext& );
	/* src/array.h:141 */
	void Append(b3Array<b3TaskContext>* , const b3TaskContext* , int);
	/* src/array.h:154 */
	b3TaskContext PopBack(b3Array<b3TaskContext>* );
	/* src/array.h:161 */
	b3TaskContext& Back(b3Array<b3TaskContext>* );
	/* src/array.h:167 */
	const b3TaskContext& Back(const b3Array<b3TaskContext>* );
	/* src/array.h:175 */
	int RemoveSwap(b3Array<b3TaskContext>* , int);
	/* src/array.h:250 */
	bool Contains(const b3Array<b3TaskContext>* , const b3TaskContext& );
	/* src/array.h:193 */
	int GetByteCount(const b3Array<b3TaskContext>* );
	/* src/array.h:200 */
	b3TaskContext* begin(b3Array<b3TaskContext>* );
	/* src/array.h:205 */
	const b3TaskContext* begin(const b3Array<b3TaskContext>* );
	/* src/array.h:210 */
	b3TaskContext* end(b3Array<b3TaskContext>* );
	/* src/array.h:215 */
	const b3TaskContext* end(const b3Array<b3TaskContext>* );
	b3TaskContext * data; /* 0 8 */
	int capacity; /* 8 4 */
	int count; /* 12 4 */
};

// <06B0A5D7> src/array.h:15
// member functions: 25
// member variables: 3
// struct size: 16
struct b3Array<b3SensorTaskContext> {
	/* src/array.h:17 */
	void Create(b3Array<b3SensorTaskContext>* , int);
	/* src/array.h:31 */
	void Destroy(b3Array<b3SensorTaskContext>* );
	/* src/array.h:39 */
	b3SensorTaskContext& operator[](b3Array<b3SensorTaskContext>* , int);
	/* src/array.h:45 */
	const b3SensorTaskContext& operator[](const b3Array<b3SensorTaskContext>* , int);
	/* src/array.h:52 */
	b3SensorTaskContext* Get(b3Array<b3SensorTaskContext>* , int);
	/* src/array.h:226 */
	void Reserve(b3Array<b3SensorTaskContext>* , int);
	/* src/array.h:61 */
	int GetCount(const b3Array<b3SensorTaskContext>* );
	/* src/array.h:66 */
	bool IsEmpty(const b3Array<b3SensorTaskContext>* );
	/* src/array.h:71 */
	void Clear(b3Array<b3SensorTaskContext>* );
	/* src/array.h:76 */
	void Resize(b3Array<b3SensorTaskContext>* , int);
	/* src/array.h:82 */
	void MemZero(b3Array<b3SensorTaskContext>* );
	/* src/array.h:90 */
	int AddUninitialized(b3Array<b3SensorTaskContext>* );
	/* src/array.h:107 */
	b3SensorTaskContext* Add(b3Array<b3SensorTaskContext>* );
	/* src/array.h:124 */
	void PushBack(b3Array<b3SensorTaskContext>* , const b3SensorTaskContext& );
	/* src/array.h:141 */
	void Append(b3Array<b3SensorTaskContext>* , const b3SensorTaskContext* , int);
	/* src/array.h:154 */
	b3SensorTaskContext PopBack(b3Array<b3SensorTaskContext>* );
	/* src/array.h:161 */
	b3SensorTaskContext& Back(b3Array<b3SensorTaskContext>* );
	/* src/array.h:167 */
	const b3SensorTaskContext& Back(const b3Array<b3SensorTaskContext>* );
	/* src/array.h:175 */
	int RemoveSwap(b3Array<b3SensorTaskContext>* , int);
	/* src/array.h:250 */
	bool Contains(const b3Array<b3SensorTaskContext>* , const b3SensorTaskContext& );
	/* src/array.h:193 */
	int GetByteCount(const b3Array<b3SensorTaskContext>* );
	/* src/array.h:200 */
	b3SensorTaskContext* begin(b3Array<b3SensorTaskContext>* );
	/* src/array.h:205 */
	const b3SensorTaskContext* begin(const b3Array<b3SensorTaskContext>* );
	/* src/array.h:210 */
	b3SensorTaskContext* end(b3Array<b3SensorTaskContext>* );
	/* src/array.h:215 */
	const b3SensorTaskContext* end(const b3Array<b3SensorTaskContext>* );
	b3SensorTaskContext * data; /* 0 8 */
	int capacity; /* 8 4 */
	int count; /* 12 4 */
};

// <06B0A9B4> src/array.h:15
// member functions: 25
// member variables: 3
// struct size: 16
struct b3Array<b3BodyMoveEvent> {
	/* src/array.h:17 */
	void Create(b3Array<b3BodyMoveEvent>* , int);
	/* src/array.h:31 */
	void Destroy(b3Array<b3BodyMoveEvent>* );
	/* src/array.h:39 */
	b3BodyMoveEvent& operator[](b3Array<b3BodyMoveEvent>* , int);
	/* src/array.h:45 */
	const b3BodyMoveEvent& operator[](const b3Array<b3BodyMoveEvent>* , int);
	/* src/array.h:52 */
	b3BodyMoveEvent* Get(b3Array<b3BodyMoveEvent>* , int);
	/* src/array.h:226 */
	void Reserve(b3Array<b3BodyMoveEvent>* , int);
	/* src/array.h:61 */
	int GetCount(const b3Array<b3BodyMoveEvent>* );
	/* src/array.h:66 */
	bool IsEmpty(const b3Array<b3BodyMoveEvent>* );
	/* src/array.h:71 */
	void Clear(b3Array<b3BodyMoveEvent>* );
	/* src/array.h:76 */
	void Resize(b3Array<b3BodyMoveEvent>* , int);
	/* src/array.h:82 */
	void MemZero(b3Array<b3BodyMoveEvent>* );
	/* src/array.h:90 */
	int AddUninitialized(b3Array<b3BodyMoveEvent>* );
	/* src/array.h:107 */
	b3BodyMoveEvent* Add(b3Array<b3BodyMoveEvent>* );
	/* src/array.h:124 */
	void PushBack(b3Array<b3BodyMoveEvent>* , const b3BodyMoveEvent& );
	/* src/array.h:141 */
	void Append(b3Array<b3BodyMoveEvent>* , const b3BodyMoveEvent* , int);
	/* src/array.h:154 */
	b3BodyMoveEvent PopBack(b3Array<b3BodyMoveEvent>* );
	/* src/array.h:161 */
	b3BodyMoveEvent& Back(b3Array<b3BodyMoveEvent>* );
	/* src/array.h:167 */
	const b3BodyMoveEvent& Back(const b3Array<b3BodyMoveEvent>* );
	/* src/array.h:175 */
	int RemoveSwap(b3Array<b3BodyMoveEvent>* , int);
	/* src/array.h:250 */
	bool Contains(const b3Array<b3BodyMoveEvent>* , const b3BodyMoveEvent& );
	/* src/array.h:193 */
	int GetByteCount(const b3Array<b3BodyMoveEvent>* );
	/* src/array.h:200 */
	b3BodyMoveEvent* begin(b3Array<b3BodyMoveEvent>* );
	/* src/array.h:205 */
	const b3BodyMoveEvent* begin(const b3Array<b3BodyMoveEvent>* );
	/* src/array.h:210 */
	b3BodyMoveEvent* end(b3Array<b3BodyMoveEvent>* );
	/* src/array.h:215 */
	const b3BodyMoveEvent* end(const b3Array<b3BodyMoveEvent>* );
	b3BodyMoveEvent * data; /* 0 8 */
	int capacity; /* 8 4 */
	int count; /* 12 4 */
};

// <06B0AD6F> src/array.h:15
// member functions: 25
// member variables: 3
// struct size: 16
struct b3Array<b3SensorBeginTouchEvent> {
	/* src/array.h:17 */
	void Create(b3Array<b3SensorBeginTouchEvent>* , int);
	/* src/array.h:31 */
	void Destroy(b3Array<b3SensorBeginTouchEvent>* );
	/* src/array.h:39 */
	b3SensorBeginTouchEvent& operator[](b3Array<b3SensorBeginTouchEvent>* , int);
	/* src/array.h:45 */
	const b3SensorBeginTouchEvent& operator[](const b3Array<b3SensorBeginTouchEvent>* , int);
	/* src/array.h:52 */
	b3SensorBeginTouchEvent* Get(b3Array<b3SensorBeginTouchEvent>* , int);
	/* src/array.h:226 */
	void Reserve(b3Array<b3SensorBeginTouchEvent>* , int);
	/* src/array.h:61 */
	int GetCount(const b3Array<b3SensorBeginTouchEvent>* );
	/* src/array.h:66 */
	bool IsEmpty(const b3Array<b3SensorBeginTouchEvent>* );
	/* src/array.h:71 */
	void Clear(b3Array<b3SensorBeginTouchEvent>* );
	/* src/array.h:76 */
	void Resize(b3Array<b3SensorBeginTouchEvent>* , int);
	/* src/array.h:82 */
	void MemZero(b3Array<b3SensorBeginTouchEvent>* );
	/* src/array.h:90 */
	int AddUninitialized(b3Array<b3SensorBeginTouchEvent>* );
	/* src/array.h:107 */
	b3SensorBeginTouchEvent* Add(b3Array<b3SensorBeginTouchEvent>* );
	/* src/array.h:124 */
	void PushBack(b3Array<b3SensorBeginTouchEvent>* , const b3SensorBeginTouchEvent& );
	/* src/array.h:141 */
	void Append(b3Array<b3SensorBeginTouchEvent>* , const b3SensorBeginTouchEvent* , int);
	/* src/array.h:154 */
	b3SensorBeginTouchEvent PopBack(b3Array<b3SensorBeginTouchEvent>* );
	/* src/array.h:161 */
	b3SensorBeginTouchEvent& Back(b3Array<b3SensorBeginTouchEvent>* );
	/* src/array.h:167 */
	const b3SensorBeginTouchEvent& Back(const b3Array<b3SensorBeginTouchEvent>* );
	/* src/array.h:175 */
	int RemoveSwap(b3Array<b3SensorBeginTouchEvent>* , int);
	/* src/array.h:250 */
	bool Contains(const b3Array<b3SensorBeginTouchEvent>* , const b3SensorBeginTouchEvent& );
	/* src/array.h:193 */
	int GetByteCount(const b3Array<b3SensorBeginTouchEvent>* );
	/* src/array.h:200 */
	b3SensorBeginTouchEvent* begin(b3Array<b3SensorBeginTouchEvent>* );
	/* src/array.h:205 */
	const b3SensorBeginTouchEvent* begin(const b3Array<b3SensorBeginTouchEvent>* );
	/* src/array.h:210 */
	b3SensorBeginTouchEvent* end(b3Array<b3SensorBeginTouchEvent>* );
	/* src/array.h:215 */
	const b3SensorBeginTouchEvent* end(const b3Array<b3SensorBeginTouchEvent>* );
	b3SensorBeginTouchEvent * data; /* 0 8 */
	int capacity; /* 8 4 */
	int count; /* 12 4 */
};

// <06B0B12A> src/array.h:15
// member functions: 25
// member variables: 3
// struct size: 16
struct b3Array<b3ContactBeginTouchEvent> {
	/* src/array.h:17 */
	void Create(b3Array<b3ContactBeginTouchEvent>* , int);
	/* src/array.h:31 */
	void Destroy(b3Array<b3ContactBeginTouchEvent>* );
	/* src/array.h:39 */
	b3ContactBeginTouchEvent& operator[](b3Array<b3ContactBeginTouchEvent>* , int);
	/* src/array.h:45 */
	const b3ContactBeginTouchEvent& operator[](const b3Array<b3ContactBeginTouchEvent>* , int);
	/* src/array.h:52 */
	b3ContactBeginTouchEvent* Get(b3Array<b3ContactBeginTouchEvent>* , int);
	/* src/array.h:226 */
	void Reserve(b3Array<b3ContactBeginTouchEvent>* , int);
	/* src/array.h:61 */
	int GetCount(const b3Array<b3ContactBeginTouchEvent>* );
	/* src/array.h:66 */
	bool IsEmpty(const b3Array<b3ContactBeginTouchEvent>* );
	/* src/array.h:71 */
	void Clear(b3Array<b3ContactBeginTouchEvent>* );
	/* src/array.h:76 */
	void Resize(b3Array<b3ContactBeginTouchEvent>* , int);
	/* src/array.h:82 */
	void MemZero(b3Array<b3ContactBeginTouchEvent>* );
	/* src/array.h:90 */
	int AddUninitialized(b3Array<b3ContactBeginTouchEvent>* );
	/* src/array.h:107 */
	b3ContactBeginTouchEvent* Add(b3Array<b3ContactBeginTouchEvent>* );
	/* src/array.h:124 */
	void PushBack(b3Array<b3ContactBeginTouchEvent>* , const b3ContactBeginTouchEvent& );
	/* src/array.h:141 */
	void Append(b3Array<b3ContactBeginTouchEvent>* , const b3ContactBeginTouchEvent* , int);
	/* src/array.h:154 */
	b3ContactBeginTouchEvent PopBack(b3Array<b3ContactBeginTouchEvent>* );
	/* src/array.h:161 */
	b3ContactBeginTouchEvent& Back(b3Array<b3ContactBeginTouchEvent>* );
	/* src/array.h:167 */
	const b3ContactBeginTouchEvent& Back(const b3Array<b3ContactBeginTouchEvent>* );
	/* src/array.h:175 */
	int RemoveSwap(b3Array<b3ContactBeginTouchEvent>* , int);
	/* src/array.h:250 */
	bool Contains(const b3Array<b3ContactBeginTouchEvent>* , const b3ContactBeginTouchEvent& );
	/* src/array.h:193 */
	int GetByteCount(const b3Array<b3ContactBeginTouchEvent>* );
	/* src/array.h:200 */
	b3ContactBeginTouchEvent* begin(b3Array<b3ContactBeginTouchEvent>* );
	/* src/array.h:205 */
	const b3ContactBeginTouchEvent* begin(const b3Array<b3ContactBeginTouchEvent>* );
	/* src/array.h:210 */
	b3ContactBeginTouchEvent* end(b3Array<b3ContactBeginTouchEvent>* );
	/* src/array.h:215 */
	const b3ContactBeginTouchEvent* end(const b3Array<b3ContactBeginTouchEvent>* );
	b3ContactBeginTouchEvent * data; /* 0 8 */
	int capacity; /* 8 4 */
	int count; /* 12 4 */
};

// <06B0B4E5> src/array.h:15
// member functions: 25
// member variables: 3
// struct size: 16
struct b3Array<b3SensorEndTouchEvent> {
	/* src/array.h:17 */
	void Create(b3Array<b3SensorEndTouchEvent>* , int);
	/* src/array.h:31 */
	void Destroy(b3Array<b3SensorEndTouchEvent>* );
	/* src/array.h:39 */
	b3SensorEndTouchEvent& operator[](b3Array<b3SensorEndTouchEvent>* , int);
	/* src/array.h:45 */
	const b3SensorEndTouchEvent& operator[](const b3Array<b3SensorEndTouchEvent>* , int);
	/* src/array.h:52 */
	b3SensorEndTouchEvent* Get(b3Array<b3SensorEndTouchEvent>* , int);
	/* src/array.h:226 */
	void Reserve(b3Array<b3SensorEndTouchEvent>* , int);
	/* src/array.h:61 */
	int GetCount(const b3Array<b3SensorEndTouchEvent>* );
	/* src/array.h:66 */
	bool IsEmpty(const b3Array<b3SensorEndTouchEvent>* );
	/* src/array.h:71 */
	void Clear(b3Array<b3SensorEndTouchEvent>* );
	/* src/array.h:76 */
	void Resize(b3Array<b3SensorEndTouchEvent>* , int);
	/* src/array.h:82 */
	void MemZero(b3Array<b3SensorEndTouchEvent>* );
	/* src/array.h:90 */
	int AddUninitialized(b3Array<b3SensorEndTouchEvent>* );
	/* src/array.h:107 */
	b3SensorEndTouchEvent* Add(b3Array<b3SensorEndTouchEvent>* );
	/* src/array.h:124 */
	void PushBack(b3Array<b3SensorEndTouchEvent>* , const b3SensorEndTouchEvent& );
	/* src/array.h:141 */
	void Append(b3Array<b3SensorEndTouchEvent>* , const b3SensorEndTouchEvent* , int);
	/* src/array.h:154 */
	b3SensorEndTouchEvent PopBack(b3Array<b3SensorEndTouchEvent>* );
	/* src/array.h:161 */
	b3SensorEndTouchEvent& Back(b3Array<b3SensorEndTouchEvent>* );
	/* src/array.h:167 */
	const b3SensorEndTouchEvent& Back(const b3Array<b3SensorEndTouchEvent>* );
	/* src/array.h:175 */
	int RemoveSwap(b3Array<b3SensorEndTouchEvent>* , int);
	/* src/array.h:250 */
	bool Contains(const b3Array<b3SensorEndTouchEvent>* , const b3SensorEndTouchEvent& );
	/* src/array.h:193 */
	int GetByteCount(const b3Array<b3SensorEndTouchEvent>* );
	/* src/array.h:200 */
	b3SensorEndTouchEvent* begin(b3Array<b3SensorEndTouchEvent>* );
	/* src/array.h:205 */
	const b3SensorEndTouchEvent* begin(const b3Array<b3SensorEndTouchEvent>* );
	/* src/array.h:210 */
	b3SensorEndTouchEvent* end(b3Array<b3SensorEndTouchEvent>* );
	/* src/array.h:215 */
	const b3SensorEndTouchEvent* end(const b3Array<b3SensorEndTouchEvent>* );
	b3SensorEndTouchEvent * data; /* 0 8 */
	int capacity; /* 8 4 */
	int count; /* 12 4 */
};

// <06B0B8A0> src/array.h:15
// member functions: 25
// member variables: 3
// struct size: 16
struct b3Array<b3ContactEndTouchEvent> {
	/* src/array.h:17 */
	void Create(b3Array<b3ContactEndTouchEvent>* , int);
	/* src/array.h:31 */
	void Destroy(b3Array<b3ContactEndTouchEvent>* );
	/* src/array.h:39 */
	b3ContactEndTouchEvent& operator[](b3Array<b3ContactEndTouchEvent>* , int);
	/* src/array.h:45 */
	const b3ContactEndTouchEvent& operator[](const b3Array<b3ContactEndTouchEvent>* , int);
	/* src/array.h:52 */
	b3ContactEndTouchEvent* Get(b3Array<b3ContactEndTouchEvent>* , int);
	/* src/array.h:226 */
	void Reserve(b3Array<b3ContactEndTouchEvent>* , int);
	/* src/array.h:61 */
	int GetCount(const b3Array<b3ContactEndTouchEvent>* );
	/* src/array.h:66 */
	bool IsEmpty(const b3Array<b3ContactEndTouchEvent>* );
	/* src/array.h:71 */
	void Clear(b3Array<b3ContactEndTouchEvent>* );
	/* src/array.h:76 */
	void Resize(b3Array<b3ContactEndTouchEvent>* , int);
	/* src/array.h:82 */
	void MemZero(b3Array<b3ContactEndTouchEvent>* );
	/* src/array.h:90 */
	int AddUninitialized(b3Array<b3ContactEndTouchEvent>* );
	/* src/array.h:107 */
	b3ContactEndTouchEvent* Add(b3Array<b3ContactEndTouchEvent>* );
	/* src/array.h:124 */
	void PushBack(b3Array<b3ContactEndTouchEvent>* , const b3ContactEndTouchEvent& );
	/* src/array.h:141 */
	void Append(b3Array<b3ContactEndTouchEvent>* , const b3ContactEndTouchEvent* , int);
	/* src/array.h:154 */
	b3ContactEndTouchEvent PopBack(b3Array<b3ContactEndTouchEvent>* );
	/* src/array.h:161 */
	b3ContactEndTouchEvent& Back(b3Array<b3ContactEndTouchEvent>* );
	/* src/array.h:167 */
	const b3ContactEndTouchEvent& Back(const b3Array<b3ContactEndTouchEvent>* );
	/* src/array.h:175 */
	int RemoveSwap(b3Array<b3ContactEndTouchEvent>* , int);
	/* src/array.h:250 */
	bool Contains(const b3Array<b3ContactEndTouchEvent>* , const b3ContactEndTouchEvent& );
	/* src/array.h:193 */
	int GetByteCount(const b3Array<b3ContactEndTouchEvent>* );
	/* src/array.h:200 */
	b3ContactEndTouchEvent* begin(b3Array<b3ContactEndTouchEvent>* );
	/* src/array.h:205 */
	const b3ContactEndTouchEvent* begin(const b3Array<b3ContactEndTouchEvent>* );
	/* src/array.h:210 */
	b3ContactEndTouchEvent* end(b3Array<b3ContactEndTouchEvent>* );
	/* src/array.h:215 */
	const b3ContactEndTouchEvent* end(const b3Array<b3ContactEndTouchEvent>* );
	b3ContactEndTouchEvent * data; /* 0 8 */
	int capacity; /* 8 4 */
	int count; /* 12 4 */
};

// <06B0BC5B> src/array.h:15
// member functions: 25
// member variables: 3
// struct size: 16
struct b3Array<b3ContactHitEvent> {
	/* src/array.h:17 */
	void Create(b3Array<b3ContactHitEvent>* , int);
	/* src/array.h:31 */
	void Destroy(b3Array<b3ContactHitEvent>* );
	/* src/array.h:39 */
	b3ContactHitEvent& operator[](b3Array<b3ContactHitEvent>* , int);
	/* src/array.h:45 */
	const b3ContactHitEvent& operator[](const b3Array<b3ContactHitEvent>* , int);
	/* src/array.h:52 */
	b3ContactHitEvent* Get(b3Array<b3ContactHitEvent>* , int);
	/* src/array.h:226 */
	void Reserve(b3Array<b3ContactHitEvent>* , int);
	/* src/array.h:61 */
	int GetCount(const b3Array<b3ContactHitEvent>* );
	/* src/array.h:66 */
	bool IsEmpty(const b3Array<b3ContactHitEvent>* );
	/* src/array.h:71 */
	void Clear(b3Array<b3ContactHitEvent>* );
	/* src/array.h:76 */
	void Resize(b3Array<b3ContactHitEvent>* , int);
	/* src/array.h:82 */
	void MemZero(b3Array<b3ContactHitEvent>* );
	/* src/array.h:90 */
	int AddUninitialized(b3Array<b3ContactHitEvent>* );
	/* src/array.h:107 */
	b3ContactHitEvent* Add(b3Array<b3ContactHitEvent>* );
	/* src/array.h:124 */
	void PushBack(b3Array<b3ContactHitEvent>* , const b3ContactHitEvent& );
	/* src/array.h:141 */
	void Append(b3Array<b3ContactHitEvent>* , const b3ContactHitEvent* , int);
	/* src/array.h:154 */
	b3ContactHitEvent PopBack(b3Array<b3ContactHitEvent>* );
	/* src/array.h:161 */
	b3ContactHitEvent& Back(b3Array<b3ContactHitEvent>* );
	/* src/array.h:167 */
	const b3ContactHitEvent& Back(const b3Array<b3ContactHitEvent>* );
	/* src/array.h:175 */
	int RemoveSwap(b3Array<b3ContactHitEvent>* , int);
	/* src/array.h:250 */
	bool Contains(const b3Array<b3ContactHitEvent>* , const b3ContactHitEvent& );
	/* src/array.h:193 */
	int GetByteCount(const b3Array<b3ContactHitEvent>* );
	/* src/array.h:200 */
	b3ContactHitEvent* begin(b3Array<b3ContactHitEvent>* );
	/* src/array.h:205 */
	const b3ContactHitEvent* begin(const b3Array<b3ContactHitEvent>* );
	/* src/array.h:210 */
	b3ContactHitEvent* end(b3Array<b3ContactHitEvent>* );
	/* src/array.h:215 */
	const b3ContactHitEvent* end(const b3Array<b3ContactHitEvent>* );
	b3ContactHitEvent * data; /* 0 8 */
	int capacity; /* 8 4 */
	int count; /* 12 4 */
};

// <06B0C016> src/array.h:15
// member functions: 25
// member variables: 3
// struct size: 16
struct b3Array<b3JointEvent> {
	/* src/array.h:17 */
	void Create(b3Array<b3JointEvent>* , int);
	/* src/array.h:31 */
	void Destroy(b3Array<b3JointEvent>* );
	/* src/array.h:39 */
	b3JointEvent& operator[](b3Array<b3JointEvent>* , int);
	/* src/array.h:45 */
	const b3JointEvent& operator[](const b3Array<b3JointEvent>* , int);
	/* src/array.h:52 */
	b3JointEvent* Get(b3Array<b3JointEvent>* , int);
	/* src/array.h:226 */
	void Reserve(b3Array<b3JointEvent>* , int);
	/* src/array.h:61 */
	int GetCount(const b3Array<b3JointEvent>* );
	/* src/array.h:66 */
	bool IsEmpty(const b3Array<b3JointEvent>* );
	/* src/array.h:71 */
	void Clear(b3Array<b3JointEvent>* );
	/* src/array.h:76 */
	void Resize(b3Array<b3JointEvent>* , int);
	/* src/array.h:82 */
	void MemZero(b3Array<b3JointEvent>* );
	/* src/array.h:90 */
	int AddUninitialized(b3Array<b3JointEvent>* );
	/* src/array.h:107 */
	b3JointEvent* Add(b3Array<b3JointEvent>* );
	/* src/array.h:124 */
	void PushBack(b3Array<b3JointEvent>* , const b3JointEvent& );
	/* src/array.h:141 */
	void Append(b3Array<b3JointEvent>* , const b3JointEvent* , int);
	/* src/array.h:154 */
	b3JointEvent PopBack(b3Array<b3JointEvent>* );
	/* src/array.h:161 */
	b3JointEvent& Back(b3Array<b3JointEvent>* );
	/* src/array.h:167 */
	const b3JointEvent& Back(const b3Array<b3JointEvent>* );
	/* src/array.h:175 */
	int RemoveSwap(b3Array<b3JointEvent>* , int);
	/* src/array.h:250 */
	bool Contains(const b3Array<b3JointEvent>* , const b3JointEvent& );
	/* src/array.h:193 */
	int GetByteCount(const b3Array<b3JointEvent>* );
	/* src/array.h:200 */
	b3JointEvent* begin(b3Array<b3JointEvent>* );
	/* src/array.h:205 */
	const b3JointEvent* begin(const b3Array<b3JointEvent>* );
	/* src/array.h:210 */
	b3JointEvent* end(b3Array<b3JointEvent>* );
	/* src/array.h:215 */
	const b3JointEvent* end(const b3Array<b3JointEvent>* );
	b3JointEvent * data; /* 0 8 */
	int capacity; /* 8 4 */
	int count; /* 12 4 */
};

// <06B0C454> src/array.h:15
// member functions: 25
// member variables: 3
// struct size: 16
struct b3Array<b3Visitor> {
	/* src/array.h:17 */
	void Create(b3Array<b3Visitor>* , int);
	/* src/array.h:31 */
	void Destroy(b3Array<b3Visitor>* );
	/* src/array.h:39 */
	b3Visitor& operator[](b3Array<b3Visitor>* , int);
	/* src/array.h:45 */
	const b3Visitor& operator[](const b3Array<b3Visitor>* , int);
	/* src/array.h:52 */
	b3Visitor* Get(b3Array<b3Visitor>* , int);
	/* src/array.h:226 */
	void Reserve(b3Array<b3Visitor>* , int);
	/* src/array.h:61 */
	int GetCount(const b3Array<b3Visitor>* );
	/* src/array.h:66 */
	bool IsEmpty(const b3Array<b3Visitor>* );
	/* src/array.h:71 */
	void Clear(b3Array<b3Visitor>* );
	/* src/array.h:76 */
	void Resize(b3Array<b3Visitor>* , int);
	/* src/array.h:82 */
	void MemZero(b3Array<b3Visitor>* );
	/* src/array.h:90 */
	int AddUninitialized(b3Array<b3Visitor>* );
	/* src/array.h:107 */
	b3Visitor* Add(b3Array<b3Visitor>* );
	/* src/array.h:124 */
	void PushBack(b3Array<b3Visitor>* , const b3Visitor& );
	/* src/array.h:141 */
	void Append(b3Array<b3Visitor>* , const b3Visitor* , int);
	/* src/array.h:154 */
	b3Visitor PopBack(b3Array<b3Visitor>* );
	/* src/array.h:161 */
	b3Visitor& Back(b3Array<b3Visitor>* );
	/* src/array.h:167 */
	const b3Visitor& Back(const b3Array<b3Visitor>* );
	/* src/array.h:175 */
	int RemoveSwap(b3Array<b3Visitor>* , int);
	/* src/array.h:250 */
	bool Contains(const b3Array<b3Visitor>* , const b3Visitor& );
	/* src/array.h:193 */
	int GetByteCount(const b3Array<b3Visitor>* );
	/* src/array.h:200 */
	b3Visitor* begin(b3Array<b3Visitor>* );
	/* src/array.h:205 */
	const b3Visitor* begin(const b3Array<b3Visitor>* );
	/* src/array.h:210 */
	b3Visitor* end(b3Array<b3Visitor>* );
	/* src/array.h:215 */
	const b3Visitor* end(const b3Array<b3Visitor>* );
	b3Visitor * data; /* 0 8 */
	int capacity; /* 8 4 */
	int count; /* 12 4 */
};

// <06B0C82C> src/array.h:15
// member functions: 25
// member variables: 3
// struct size: 16
struct b3Array<b3BodySim> {
	/* src/array.h:17 */
	void Create(b3Array<b3BodySim>* , int);
	/* src/array.h:31 */
	void Destroy(b3Array<b3BodySim>* );
	/* src/array.h:39 */
	b3BodySim& operator[](b3Array<b3BodySim>* , int);
	/* src/array.h:45 */
	const b3BodySim& operator[](const b3Array<b3BodySim>* , int);
	/* src/array.h:52 */
	b3BodySim* Get(b3Array<b3BodySim>* , int);
	/* src/array.h:226 */
	void Reserve(b3Array<b3BodySim>* , int);
	/* src/array.h:61 */
	int GetCount(const b3Array<b3BodySim>* );
	/* src/array.h:66 */
	bool IsEmpty(const b3Array<b3BodySim>* );
	/* src/array.h:71 */
	void Clear(b3Array<b3BodySim>* );
	/* src/array.h:76 */
	void Resize(b3Array<b3BodySim>* , int);
	/* src/array.h:82 */
	void MemZero(b3Array<b3BodySim>* );
	/* src/array.h:90 */
	int AddUninitialized(b3Array<b3BodySim>* );
	/* src/array.h:107 */
	b3BodySim* Add(b3Array<b3BodySim>* );
	/* src/array.h:124 */
	void PushBack(b3Array<b3BodySim>* , const b3BodySim& );
	/* src/array.h:141 */
	void Append(b3Array<b3BodySim>* , const b3BodySim* , int);
	/* src/array.h:154 */
	b3BodySim PopBack(b3Array<b3BodySim>* );
	/* src/array.h:161 */
	b3BodySim& Back(b3Array<b3BodySim>* );
	/* src/array.h:167 */
	const b3BodySim& Back(const b3Array<b3BodySim>* );
	/* src/array.h:175 */
	int RemoveSwap(b3Array<b3BodySim>* , int);
	/* src/array.h:250 */
	bool Contains(const b3Array<b3BodySim>* , const b3BodySim& );
	/* src/array.h:193 */
	int GetByteCount(const b3Array<b3BodySim>* );
	/* src/array.h:200 */
	b3BodySim* begin(b3Array<b3BodySim>* );
	/* src/array.h:205 */
	const b3BodySim* begin(const b3Array<b3BodySim>* );
	/* src/array.h:210 */
	b3BodySim* end(b3Array<b3BodySim>* );
	/* src/array.h:215 */
	const b3BodySim* end(const b3Array<b3BodySim>* );
	b3BodySim * data; /* 0 8 */
	int capacity; /* 8 4 */
	int count; /* 12 4 */
};

// <06B0CBE6> src/array.h:15
// member functions: 25
// member variables: 3
// struct size: 16
struct b3Array<b3BodyState> {
	/* src/array.h:17 */
	void Create(b3Array<b3BodyState>* , int);
	/* src/array.h:31 */
	void Destroy(b3Array<b3BodyState>* );
	/* src/array.h:39 */
	b3BodyState& operator[](b3Array<b3BodyState>* , int);
	/* src/array.h:45 */
	const b3BodyState& operator[](const b3Array<b3BodyState>* , int);
	/* src/array.h:52 */
	b3BodyState* Get(b3Array<b3BodyState>* , int);
	/* src/array.h:226 */
	void Reserve(b3Array<b3BodyState>* , int);
	/* src/array.h:61 */
	int GetCount(const b3Array<b3BodyState>* );
	/* src/array.h:66 */
	bool IsEmpty(const b3Array<b3BodyState>* );
	/* src/array.h:71 */
	void Clear(b3Array<b3BodyState>* );
	/* src/array.h:76 */
	void Resize(b3Array<b3BodyState>* , int);
	/* src/array.h:82 */
	void MemZero(b3Array<b3BodyState>* );
	/* src/array.h:90 */
	int AddUninitialized(b3Array<b3BodyState>* );
	/* src/array.h:107 */
	b3BodyState* Add(b3Array<b3BodyState>* );
	/* src/array.h:124 */
	void PushBack(b3Array<b3BodyState>* , const b3BodyState& );
	/* src/array.h:141 */
	void Append(b3Array<b3BodyState>* , const b3BodyState* , int);
	/* src/array.h:154 */
	b3BodyState PopBack(b3Array<b3BodyState>* );
	/* src/array.h:161 */
	b3BodyState& Back(b3Array<b3BodyState>* );
	/* src/array.h:167 */
	const b3BodyState& Back(const b3Array<b3BodyState>* );
	/* src/array.h:175 */
	int RemoveSwap(b3Array<b3BodyState>* , int);
	/* src/array.h:250 */
	bool Contains(const b3Array<b3BodyState>* , const b3BodyState& );
	/* src/array.h:193 */
	int GetByteCount(const b3Array<b3BodyState>* );
	/* src/array.h:200 */
	b3BodyState* begin(b3Array<b3BodyState>* );
	/* src/array.h:205 */
	const b3BodyState* begin(const b3Array<b3BodyState>* );
	/* src/array.h:210 */
	b3BodyState* end(b3Array<b3BodyState>* );
	/* src/array.h:215 */
	const b3BodyState* end(const b3Array<b3BodyState>* );
	b3BodyState * data; /* 0 8 */
	int capacity; /* 8 4 */
	int count; /* 12 4 */
};

// <06B0CFA0> src/array.h:15
// member functions: 25
// member variables: 3
// struct size: 16
struct b3Array<b3IslandSim> {
	/* src/array.h:17 */
	void Create(b3Array<b3IslandSim>* , int);
	/* src/array.h:31 */
	void Destroy(b3Array<b3IslandSim>* );
	/* src/array.h:39 */
	b3IslandSim& operator[](b3Array<b3IslandSim>* , int);
	/* src/array.h:45 */
	const b3IslandSim& operator[](const b3Array<b3IslandSim>* , int);
	/* src/array.h:52 */
	b3IslandSim* Get(b3Array<b3IslandSim>* , int);
	/* src/array.h:226 */
	void Reserve(b3Array<b3IslandSim>* , int);
	/* src/array.h:61 */
	int GetCount(const b3Array<b3IslandSim>* );
	/* src/array.h:66 */
	bool IsEmpty(const b3Array<b3IslandSim>* );
	/* src/array.h:71 */
	void Clear(b3Array<b3IslandSim>* );
	/* src/array.h:76 */
	void Resize(b3Array<b3IslandSim>* , int);
	/* src/array.h:82 */
	void MemZero(b3Array<b3IslandSim>* );
	/* src/array.h:90 */
	int AddUninitialized(b3Array<b3IslandSim>* );
	/* src/array.h:107 */
	b3IslandSim* Add(b3Array<b3IslandSim>* );
	/* src/array.h:124 */
	void PushBack(b3Array<b3IslandSim>* , const b3IslandSim& );
	/* src/array.h:141 */
	void Append(b3Array<b3IslandSim>* , const b3IslandSim* , int);
	/* src/array.h:154 */
	b3IslandSim PopBack(b3Array<b3IslandSim>* );
	/* src/array.h:161 */
	b3IslandSim& Back(b3Array<b3IslandSim>* );
	/* src/array.h:167 */
	const b3IslandSim& Back(const b3Array<b3IslandSim>* );
	/* src/array.h:175 */
	int RemoveSwap(b3Array<b3IslandSim>* , int);
	/* src/array.h:250 */
	bool Contains(const b3Array<b3IslandSim>* , const b3IslandSim& );
	/* src/array.h:193 */
	int GetByteCount(const b3Array<b3IslandSim>* );
	/* src/array.h:200 */
	b3IslandSim* begin(b3Array<b3IslandSim>* );
	/* src/array.h:205 */
	const b3IslandSim* begin(const b3Array<b3IslandSim>* );
	/* src/array.h:210 */
	b3IslandSim* end(b3Array<b3IslandSim>* );
	/* src/array.h:215 */
	const b3IslandSim* end(const b3Array<b3IslandSim>* );
	b3IslandSim * data; /* 0 8 */
	int capacity; /* 8 4 */
	int count; /* 12 4 */
};

// <06BA005C> src/array.h:15
// member functions: 25
// member variables: 3
// struct size: 16
struct b3Array<b3VertexNode> {
	/* src/array.h:17 */
	void Create(b3Array<b3VertexNode>* , int);
	/* src/array.h:31 */
	void Destroy(b3Array<b3VertexNode>* );
	/* src/array.h:39 */
	b3VertexNode& operator[](b3Array<b3VertexNode>* , int);
	/* src/array.h:45 */
	const b3VertexNode& operator[](const b3Array<b3VertexNode>* , int);
	/* src/array.h:52 */
	b3VertexNode* Get(b3Array<b3VertexNode>* , int);
	/* src/array.h:226 */
	void Reserve(b3Array<b3VertexNode>* , int);
	/* src/array.h:61 */
	int GetCount(const b3Array<b3VertexNode>* );
	/* src/array.h:66 */
	bool IsEmpty(const b3Array<b3VertexNode>* );
	/* src/array.h:71 */
	void Clear(b3Array<b3VertexNode>* );
	/* src/array.h:76 */
	void Resize(b3Array<b3VertexNode>* , int);
	/* src/array.h:82 */
	void MemZero(b3Array<b3VertexNode>* );
	/* src/array.h:90 */
	int AddUninitialized(b3Array<b3VertexNode>* );
	/* src/array.h:107 */
	b3VertexNode* Add(b3Array<b3VertexNode>* );
	/* src/array.h:124 */
	void PushBack(b3Array<b3VertexNode>* , const b3VertexNode& );
	/* src/array.h:141 */
	void Append(b3Array<b3VertexNode>* , const b3VertexNode* , int);
	/* src/array.h:154 */
	b3VertexNode PopBack(b3Array<b3VertexNode>* );
	/* src/array.h:161 */
	b3VertexNode& Back(b3Array<b3VertexNode>* );
	/* src/array.h:167 */
	const b3VertexNode& Back(const b3Array<b3VertexNode>* );
	/* src/array.h:175 */
	int RemoveSwap(b3Array<b3VertexNode>* , int);
	/* src/array.h:250 */
	bool Contains(const b3Array<b3VertexNode>* , const b3VertexNode& );
	/* src/array.h:193 */
	int GetByteCount(const b3Array<b3VertexNode>* );
	/* src/array.h:200 */
	b3VertexNode* begin(b3Array<b3VertexNode>* );
	/* src/array.h:205 */
	const b3VertexNode* begin(const b3Array<b3VertexNode>* );
	/* src/array.h:210 */
	b3VertexNode* end(b3Array<b3VertexNode>* );
	/* src/array.h:215 */
	const b3VertexNode* end(const b3Array<b3VertexNode>* );
	b3VertexNode * data; /* 0 8 */
	int capacity; /* 8 4 */
	int count; /* 12 4 */
};

// <06BA0AA7> src/array.h:15
// member functions: 25
// member variables: 3
// struct size: 16
struct b3Array<b3MeshNode> {
	/* src/array.h:17 */
	void Create(b3Array<b3MeshNode>* , int);
	/* src/array.h:31 */
	void Destroy(b3Array<b3MeshNode>* );
	/* src/array.h:39 */
	b3MeshNode& operator[](b3Array<b3MeshNode>* , int);
	/* src/array.h:45 */
	const b3MeshNode& operator[](const b3Array<b3MeshNode>* , int);
	/* src/array.h:52 */
	b3MeshNode* Get(b3Array<b3MeshNode>* , int);
	/* src/array.h:226 */
	void Reserve(b3Array<b3MeshNode>* , int);
	/* src/array.h:61 */
	int GetCount(const b3Array<b3MeshNode>* );
	/* src/array.h:66 */
	bool IsEmpty(const b3Array<b3MeshNode>* );
	/* src/array.h:71 */
	void Clear(b3Array<b3MeshNode>* );
	/* src/array.h:76 */
	void Resize(b3Array<b3MeshNode>* , int);
	/* src/array.h:82 */
	void MemZero(b3Array<b3MeshNode>* );
	/* src/array.h:90 */
	int AddUninitialized(b3Array<b3MeshNode>* );
	/* src/array.h:107 */
	b3MeshNode* Add(b3Array<b3MeshNode>* );
	/* src/array.h:124 */
	void PushBack(b3Array<b3MeshNode>* , const b3MeshNode& );
	/* src/array.h:141 */
	void Append(b3Array<b3MeshNode>* , const b3MeshNode* , int);
	/* src/array.h:154 */
	b3MeshNode PopBack(b3Array<b3MeshNode>* );
	/* src/array.h:161 */
	b3MeshNode& Back(b3Array<b3MeshNode>* );
	/* src/array.h:167 */
	const b3MeshNode& Back(const b3Array<b3MeshNode>* );
	/* src/array.h:175 */
	int RemoveSwap(b3Array<b3MeshNode>* , int);
	/* src/array.h:250 */
	bool Contains(const b3Array<b3MeshNode>* , const b3MeshNode& );
	/* src/array.h:193 */
	int GetByteCount(const b3Array<b3MeshNode>* );
	/* src/array.h:200 */
	b3MeshNode* begin(b3Array<b3MeshNode>* );
	/* src/array.h:205 */
	const b3MeshNode* begin(const b3Array<b3MeshNode>* );
	/* src/array.h:210 */
	b3MeshNode* end(b3Array<b3MeshNode>* );
	/* src/array.h:215 */
	const b3MeshNode* end(const b3Array<b3MeshNode>* );
	b3MeshNode * data; /* 0 8 */
	int capacity; /* 8 4 */
	int count; /* 12 4 */
};

// <06BA0E6C> src/array.h:15
// member functions: 25
// member variables: 3
// struct size: 16
struct b3Array<b3MeshTriangle> {
	/* src/array.h:17 */
	void Create(b3Array<b3MeshTriangle>* , int);
	/* src/array.h:31 */
	void Destroy(b3Array<b3MeshTriangle>* );
	/* src/array.h:39 */
	b3MeshTriangle& operator[](b3Array<b3MeshTriangle>* , int);
	/* src/array.h:45 */
	const b3MeshTriangle& operator[](const b3Array<b3MeshTriangle>* , int);
	/* src/array.h:52 */
	b3MeshTriangle* Get(b3Array<b3MeshTriangle>* , int);
	/* src/array.h:226 */
	void Reserve(b3Array<b3MeshTriangle>* , int);
	/* src/array.h:61 */
	int GetCount(const b3Array<b3MeshTriangle>* );
	/* src/array.h:66 */
	bool IsEmpty(const b3Array<b3MeshTriangle>* );
	/* src/array.h:71 */
	void Clear(b3Array<b3MeshTriangle>* );
	/* src/array.h:76 */
	void Resize(b3Array<b3MeshTriangle>* , int);
	/* src/array.h:82 */
	void MemZero(b3Array<b3MeshTriangle>* );
	/* src/array.h:90 */
	int AddUninitialized(b3Array<b3MeshTriangle>* );
	/* src/array.h:107 */
	b3MeshTriangle* Add(b3Array<b3MeshTriangle>* );
	/* src/array.h:124 */
	void PushBack(b3Array<b3MeshTriangle>* , const b3MeshTriangle& );
	/* src/array.h:141 */
	void Append(b3Array<b3MeshTriangle>* , const b3MeshTriangle* , int);
	/* src/array.h:154 */
	b3MeshTriangle PopBack(b3Array<b3MeshTriangle>* );
	/* src/array.h:161 */
	b3MeshTriangle& Back(b3Array<b3MeshTriangle>* );
	/* src/array.h:167 */
	const b3MeshTriangle& Back(const b3Array<b3MeshTriangle>* );
	/* src/array.h:175 */
	int RemoveSwap(b3Array<b3MeshTriangle>* , int);
	/* src/array.h:250 */
	bool Contains(const b3Array<b3MeshTriangle>* , const b3MeshTriangle& );
	/* src/array.h:193 */
	int GetByteCount(const b3Array<b3MeshTriangle>* );
	/* src/array.h:200 */
	b3MeshTriangle* begin(b3Array<b3MeshTriangle>* );
	/* src/array.h:205 */
	const b3MeshTriangle* begin(const b3Array<b3MeshTriangle>* );
	/* src/array.h:210 */
	b3MeshTriangle* end(b3Array<b3MeshTriangle>* );
	/* src/array.h:215 */
	const b3MeshTriangle* end(const b3Array<b3MeshTriangle>* );
	b3MeshTriangle * data; /* 0 8 */
	int capacity; /* 8 4 */
	int count; /* 12 4 */
};

// <06BA122C> src/array.h:15
// member functions: 25
// member variables: 3
// struct size: 16
struct b3Array<unsigned char> {
	/* src/array.h:17 */
	void Create(b3Array<unsigned char>* , int);
	/* src/array.h:31 */
	void Destroy(b3Array<unsigned char>* );
	/* src/array.h:39 */
	unsigned char& operator[](b3Array<unsigned char>* , int);
	/* src/array.h:45 */
	const unsigned char& operator[](const b3Array<unsigned char>* , int);
	/* src/array.h:52 */
	unsigned char* Get(b3Array<unsigned char>* , int);
	/* src/array.h:226 */
	void Reserve(b3Array<unsigned char>* , int);
	/* src/array.h:61 */
	int GetCount(const b3Array<unsigned char>* );
	/* src/array.h:66 */
	bool IsEmpty(const b3Array<unsigned char>* );
	/* src/array.h:71 */
	void Clear(b3Array<unsigned char>* );
	/* src/array.h:76 */
	void Resize(b3Array<unsigned char>* , int);
	/* src/array.h:82 */
	void MemZero(b3Array<unsigned char>* );
	/* src/array.h:90 */
	int AddUninitialized(b3Array<unsigned char>* );
	/* src/array.h:107 */
	unsigned char* Add(b3Array<unsigned char>* );
	/* src/array.h:124 */
	void PushBack(b3Array<unsigned char>* , const unsigned char& );
	/* src/array.h:141 */
	void Append(b3Array<unsigned char>* , const unsigned char* , int);
	/* src/array.h:154 */
	unsigned char PopBack(b3Array<unsigned char>* );
	/* src/array.h:161 */
	unsigned char& Back(b3Array<unsigned char>* );
	/* src/array.h:167 */
	const unsigned char& Back(const b3Array<unsigned char>* );
	/* src/array.h:175 */
	int RemoveSwap(b3Array<unsigned char>* , int);
	/* src/array.h:250 */
	bool Contains(const b3Array<unsigned char>* , const unsigned char& );
	/* src/array.h:193 */
	int GetByteCount(const b3Array<unsigned char>* );
	/* src/array.h:200 */
	unsigned char* begin(b3Array<unsigned char>* );
	/* src/array.h:205 */
	const unsigned char* begin(const b3Array<unsigned char>* );
	/* src/array.h:210 */
	unsigned char* end(b3Array<unsigned char>* );
	/* src/array.h:215 */
	const unsigned char* end(const b3Array<unsigned char>* );
	unsigned char * data; /* 0 8 */
	int capacity; /* 8 4 */
	int count; /* 12 4 */
};

// <06BA1777> src/array.h:15
// member functions: 25
// member variables: 3
// struct size: 16
struct b3Array<b3Vec3> {
	/* src/array.h:17 */
	void Create(b3Array<b3Vec3>* , int);
	/* src/array.h:31 */
	void Destroy(b3Array<b3Vec3>* );
	/* src/array.h:39 */
	b3Vec3& operator[](b3Array<b3Vec3>* , int);
	/* src/array.h:45 */
	const b3Vec3& operator[](const b3Array<b3Vec3>* , int);
	/* src/array.h:52 */
	b3Vec3* Get(b3Array<b3Vec3>* , int);
	/* src/array.h:226 */
	void Reserve(b3Array<b3Vec3>* , int);
	/* src/array.h:61 */
	int GetCount(const b3Array<b3Vec3>* );
	/* src/array.h:66 */
	bool IsEmpty(const b3Array<b3Vec3>* );
	/* src/array.h:71 */
	void Clear(b3Array<b3Vec3>* );
	/* src/array.h:76 */
	void Resize(b3Array<b3Vec3>* , int);
	/* src/array.h:82 */
	void MemZero(b3Array<b3Vec3>* );
	/* src/array.h:90 */
	int AddUninitialized(b3Array<b3Vec3>* );
	/* src/array.h:107 */
	b3Vec3* Add(b3Array<b3Vec3>* );
	/* src/array.h:124 */
	void PushBack(b3Array<b3Vec3>* , const b3Vec3& );
	/* src/array.h:141 */
	void Append(b3Array<b3Vec3>* , const b3Vec3* , int);
	/* src/array.h:154 */
	b3Vec3 PopBack(b3Array<b3Vec3>* );
	/* src/array.h:161 */
	b3Vec3& Back(b3Array<b3Vec3>* );
	/* src/array.h:167 */
	const b3Vec3& Back(const b3Array<b3Vec3>* );
	/* src/array.h:175 */
	int RemoveSwap(b3Array<b3Vec3>* , int);
	/* src/array.h:250 */
	bool Contains(const b3Array<b3Vec3>* , const b3Vec3& );
	/* src/array.h:193 */
	int GetByteCount(const b3Array<b3Vec3>* );
	/* src/array.h:200 */
	b3Vec3* begin(b3Array<b3Vec3>* );
	/* src/array.h:205 */
	const b3Vec3* begin(const b3Array<b3Vec3>* );
	/* src/array.h:210 */
	b3Vec3* end(b3Array<b3Vec3>* );
	/* src/array.h:215 */
	const b3Vec3* end(const b3Array<b3Vec3>* );
	b3Vec3 * data; /* 0 8 */
	int capacity; /* 8 4 */
	int count; /* 12 4 */
};

// <06BA1B37> src/array.h:15
// member functions: 25
// member variables: 3
// struct size: 16
struct b3Array<b3Primitive> {
	/* src/array.h:17 */
	void Create(b3Array<b3Primitive>* , int);
	/* src/array.h:31 */
	void Destroy(b3Array<b3Primitive>* );
	/* src/array.h:39 */
	b3Primitive& operator[](b3Array<b3Primitive>* , int);
	/* src/array.h:45 */
	const b3Primitive& operator[](const b3Array<b3Primitive>* , int);
	/* src/array.h:52 */
	b3Primitive* Get(b3Array<b3Primitive>* , int);
	/* src/array.h:226 */
	void Reserve(b3Array<b3Primitive>* , int);
	/* src/array.h:61 */
	int GetCount(const b3Array<b3Primitive>* );
	/* src/array.h:66 */
	bool IsEmpty(const b3Array<b3Primitive>* );
	/* src/array.h:71 */
	void Clear(b3Array<b3Primitive>* );
	/* src/array.h:76 */
	void Resize(b3Array<b3Primitive>* , int);
	/* src/array.h:82 */
	void MemZero(b3Array<b3Primitive>* );
	/* src/array.h:90 */
	int AddUninitialized(b3Array<b3Primitive>* );
	/* src/array.h:107 */
	b3Primitive* Add(b3Array<b3Primitive>* );
	/* src/array.h:124 */
	void PushBack(b3Array<b3Primitive>* , const b3Primitive& );
	/* src/array.h:141 */
	void Append(b3Array<b3Primitive>* , const b3Primitive* , int);
	/* src/array.h:154 */
	b3Primitive PopBack(b3Array<b3Primitive>* );
	/* src/array.h:161 */
	b3Primitive& Back(b3Array<b3Primitive>* );
	/* src/array.h:167 */
	const b3Primitive& Back(const b3Array<b3Primitive>* );
	/* src/array.h:175 */
	int RemoveSwap(b3Array<b3Primitive>* , int);
	/* src/array.h:250 */
	bool Contains(const b3Array<b3Primitive>* , const b3Primitive& );
	/* src/array.h:193 */
	int GetByteCount(const b3Array<b3Primitive>* );
	/* src/array.h:200 */
	b3Primitive* begin(b3Array<b3Primitive>* );
	/* src/array.h:205 */
	const b3Primitive* begin(const b3Array<b3Primitive>* );
	/* src/array.h:210 */
	b3Primitive* end(b3Array<b3Primitive>* );
	/* src/array.h:215 */
	const b3Primitive* end(const b3Array<b3Primitive>* );
	b3Primitive * data; /* 0 8 */
	int capacity; /* 8 4 */
	int count; /* 12 4 */
};

// <06C75767> src/array.h:17
inline void b3Array<b3BodySim>::Create(int initialCapacity)
{
} /* size: 0 */

// <06C75742> src/array.h:17
inline void b3Array<b3ContactSim>::Create(int initialCapacity)
{
} /* size: 0 */

// <06C7571D> src/array.h:17
inline void b3Array<b3JointSim>::Create(int initialCapacity)
{
} /* size: 0 */

// <06C43070> src/array.h:17
inline void b3Array<b3Visitor>::Create(int initialCapacity)
{
} /* size: 0 */

// <06BE498E> src/array.h:17
inline void b3Array<b3TaskContext>::Create(int initialCapacity)
{
} /* size: 0 */

// <06BE492B> src/array.h:17
inline void b3Array<b3SensorTaskContext>::Create(int initialCapacity)
{
} /* size: 0 */

// <06BE48C8> src/array.h:17
inline void b3Array<b3SensorHit>::Create(int initialCapacity)
{
} /* size: 0 */

// <06BE4858> src/array.h:17
inline void b3Array<b3Body>::Create(int initialCapacity)
{
} /* size: 0 */

// <06BE4833> src/array.h:17
inline void b3Array<b3SolverSet>::Create(int initialCapacity)
{
} /* size: 0 */

// <06BE47B6> src/array.h:17
inline void b3Array<b3BodyState>::Create(int initialCapacity)
{
} /* size: 0 */

// <06BE476C> src/array.h:17
inline void b3Array<b3Shape>::Create(int initialCapacity)
{
} /* size: 0 */

// <06BE4747> src/array.h:17
inline void b3Array<b3Contact>::Create(int initialCapacity)
{
} /* size: 0 */

// <06BE4722> src/array.h:17
inline void b3Array<b3Joint>::Create(int initialCapacity)
{
} /* size: 0 */

// <06BE46FD> src/array.h:17
inline void b3Array<b3Island>::Create(int initialCapacity)
{
} /* size: 0 */

// <06BE46D8> src/array.h:17
inline void b3Array<b3Sensor>::Create(int initialCapacity)
{
} /* size: 0 */

// <06BE46B3> src/array.h:17
inline void b3Array<b3BodyMoveEvent>::Create(int initialCapacity)
{
} /* size: 0 */

// <06BE468E> src/array.h:17
inline void b3Array<b3SensorBeginTouchEvent>::Create(int initialCapacity)
{
} /* size: 0 */

// <06BE4669> src/array.h:17
inline void b3Array<b3SensorEndTouchEvent>::Create(int initialCapacity)
{
} /* size: 0 */

// <06BE4644> src/array.h:17
inline void b3Array<b3ContactBeginTouchEvent>::Create(int initialCapacity)
{
} /* size: 0 */

// <06BE461F> src/array.h:17
inline void b3Array<b3ContactEndTouchEvent>::Create(int initialCapacity)
{
} /* size: 0 */

// <06BE45FA> src/array.h:17
inline void b3Array<b3ContactHitEvent>::Create(int initialCapacity)
{
} /* size: 0 */

// <06BE45D5> src/array.h:17
inline void b3Array<b3JointEvent>::Create(int initialCapacity)
{
} /* size: 0 */

// <06BA2C76> src/array.h:17
inline void b3Array<b3VertexNode>::Create(int initialCapacity)
{
} /* size: 0 */

// <06BA2BE0> src/array.h:17
inline void b3Array<int>::Create(int initialCapacity)
{
} /* size: 0 */

// <06BA2AE7> src/array.h:17
inline void b3Array<b3MeshTriangle>::Create(int initialCapacity)
{
} /* size: 0 */

// <06BA2AC2> src/array.h:17
inline void b3Array<unsigned char>::Create(int initialCapacity)
{
} /* size: 0 */

// <06BA28F2> src/array.h:17
inline void b3Array<b3Vec3>::Create(int initialCapacity)
{
} /* size: 0 */

// <06BA2837> src/array.h:17
inline void b3Array<b3Primitive>::Create(int initialCapacity)
{
} /* size: 0 */

// <06BA27C6> src/array.h:17
inline void b3Array<b3MeshNode>::Create(int initialCapacity)
{
} /* size: 0 */

// <06D035F5> src/array.h:31
inline void b3Array<b3TriangleCache>::Destroy()
{
} /* size: 0 */

// <06D035DC> src/array.h:31
inline void b3Array<b3ContactSim>::Destroy()
{
} /* size: 0 */

// <06D035C3> src/array.h:31
inline void b3Array<b3JointSim>::Destroy()
{
} /* size: 0 */

// <06C75984> src/array.h:31
inline void b3Array<b3BodySim>::Destroy()
{
} /* size: 0 */

// <06C7596B> src/array.h:31
inline void b3Array<b3BodyState>::Destroy()
{
} /* size: 0 */

// <06C75920> src/array.h:31
inline void b3Array<b3IslandSim>::Destroy()
{
} /* size: 0 */

// <06C42FDA> src/array.h:31
inline void b3Array<b3Visitor>::Destroy()
{
} /* size: 0 */

// <06BE48AF> src/array.h:31
inline void b3Array<b3SensorHit>::Destroy()
{
} /* size: 0 */

// <06BE4896> src/array.h:31
inline void b3Array<b3TaskContext>::Destroy()
{
} /* size: 0 */

// <06BE487D> src/array.h:31
inline void b3Array<b3SensorTaskContext>::Destroy()
{
} /* size: 0 */

// <06BE45BC> src/array.h:31
inline void b3Array<b3BodyMoveEvent>::Destroy()
{
} /* size: 0 */

// <06BE45A3> src/array.h:31
inline void b3Array<b3SensorBeginTouchEvent>::Destroy()
{
} /* size: 0 */

// <06BE458A> src/array.h:31
inline void b3Array<b3SensorEndTouchEvent>::Destroy()
{
} /* size: 0 */

// <06BE4571> src/array.h:31
inline void b3Array<b3ContactBeginTouchEvent>::Destroy()
{
} /* size: 0 */

// <06BE4558> src/array.h:31
inline void b3Array<b3ContactEndTouchEvent>::Destroy()
{
} /* size: 0 */

// <06BE453F> src/array.h:31
inline void b3Array<b3ContactHitEvent>::Destroy()
{
} /* size: 0 */

// <06BE4526> src/array.h:31
inline void b3Array<b3JointEvent>::Destroy()
{
} /* size: 0 */

// <06BE44F4> src/array.h:31
inline void b3Array<b3Sensor>::Destroy()
{
} /* size: 0 */

// <06BE44DB> src/array.h:31
inline void b3Array<b3Body>::Destroy()
{
} /* size: 0 */

// <06BE44C2> src/array.h:31
inline void b3Array<b3Shape>::Destroy()
{
} /* size: 0 */

// <06BE44A9> src/array.h:31
inline void b3Array<b3Contact>::Destroy()
{
} /* size: 0 */

// <06BE4490> src/array.h:31
inline void b3Array<b3Joint>::Destroy()
{
} /* size: 0 */

// <06BE4477> src/array.h:31
inline void b3Array<b3Island>::Destroy()
{
} /* size: 0 */

// <06BE445E> src/array.h:31
inline void b3Array<b3SolverSet>::Destroy()
{
} /* size: 0 */

// <06BA2C5D> src/array.h:31
inline void b3Array<b3VertexNode>::Destroy()
{
} /* size: 0 */

// <06BA2B7D> src/array.h:31
inline void b3Array<int>::Destroy()
{
} /* size: 0 */

// <06BA2A43> src/array.h:31
inline void b3Array<b3MeshTriangle>::Destroy()
{
} /* size: 0 */

// <06BA2A2A> src/array.h:31
inline void b3Array<unsigned char>::Destroy()
{
} /* size: 0 */

// <06BA297D> src/array.h:31
inline void b3Array<b3Vec3>::Destroy()
{
} /* size: 0 */

// <06BA27EB> src/array.h:31
inline void b3Array<b3Primitive>::Destroy()
{
} /* size: 0 */

// <06BA276F> src/array.h:31
inline void b3Array<b3MeshNode>::Destroy()
{
} /* size: 0 */

// <06D0360E> src/array.h:39
inline void b3Array<b3ContactSim>::operator[](int index)
{
} /* size: 0 */

// <06BE430C> src/array.h:39
inline void b3Array<b3TaskContext>::operator[](int index)
{
} /* size: 0 */

// <06BBE5E2> src/array.h:39
inline void b3Array<b3TriangleCache>::operator[](int index)
{
} /* size: 0 */

// <06BA2C38> src/array.h:39
inline void b3Array<b3VertexNode>::operator[](int index)
{
} /* size: 0 */

// <06BA2B96> src/array.h:39
inline void b3Array<int>::operator[](int index)
{
} /* size: 0 */

// <06BA2B31> src/array.h:39
inline void b3Array<b3MeshNode>::operator[](int index)
{
} /* size: 0 */

// <06BA29E0> src/array.h:39
inline void b3Array<b3Vec3>::operator[](int index)
{
} /* size: 0 */

// <06BA2996> src/array.h:39
inline void b3Array<unsigned char>::operator[](int index)
{
} /* size: 0 */

// <06BA2788> src/array.h:39
inline void b3Array<b3Primitive>::operator[](int index)
{
} /* size: 0 */

// <06D10694> src/array.h:52
inline void b3Array<b3SolverSet>::Get(int index)
{
} /* size: 0 */

// <06D0359E> src/array.h:52
inline void b3Array<b3Body>::Get(int index)
{
} /* size: 0 */

// <06D0352D> src/array.h:52
inline void b3Array<b3BodySim>::Get(int index)
{
} /* size: 0 */

// <06D03508> src/array.h:52
inline void b3Array<b3ContactSim>::Get(int index)
{
} /* size: 0 */

// <06D034B2> src/array.h:52
inline void b3Array<b3Contact>::Get(int index)
{
} /* size: 0 */

// <06D03435> src/array.h:52
inline void b3Array<b3Joint>::Get(int index)
{
} /* size: 0 */

// <06C757E6> src/array.h:52
inline void b3Array<b3Island>::Get(int index)
{
} /* size: 0 */

// <06C756D3> src/array.h:52
inline void b3Array<b3BodyMoveEvent>::Get(int index)
{
} /* size: 0 */

// <06C75627> src/array.h:52
inline void b3Array<b3JointSim>::Get(int index)
{
} /* size: 0 */

// <06C604D0> src/array.h:52
inline void b3Array<b3Shape>::Get(int index)
{
} /* size: 0 */

// <06C603E4> src/array.h:52
inline void b3Array<b3TaskContext>::Get(int index)
{
} /* size: 0 */

// <06C6031B> src/array.h:52
inline void b3Array<b3Sensor>::Get(int index)
{
} /* size: 0 */

// <06BE4133> src/array.h:52
inline void b3Array<b3BodyState>::Get(int index)
{
} /* size: 0 */

// <06BA2B0C> src/array.h:52
inline void b3Array<b3MeshNode>::Get(int index)
{
} /* size: 0 */

// <06BA27AD> src/array.h:61
inline void b3Array<b3MeshNode>::GetCount()
{
} /* size: 0 */

// <06C603A6> src/array.h:71
inline void b3Array<b3SensorHit>::Clear()
{
} /* size: 0 */

// <06C35F9B> src/array.h:71
inline void b3Array<b3Visitor>::Clear()
{
} /* size: 0 */

// <06BE42F3> src/array.h:71
inline void b3Array<b3BodyMoveEvent>::Clear()
{
} /* size: 0 */

// <06BE42DA> src/array.h:71
inline void b3Array<b3SensorBeginTouchEvent>::Clear()
{
} /* size: 0 */

// <06BE42C1> src/array.h:71
inline void b3Array<b3ContactBeginTouchEvent>::Clear()
{
} /* size: 0 */

// <06BE42A8> src/array.h:71
inline void b3Array<b3ContactHitEvent>::Clear()
{
} /* size: 0 */

// <06BE428F> src/array.h:71
inline void b3Array<b3JointEvent>::Clear()
{
} /* size: 0 */

// <06BE4276> src/array.h:71
inline void b3Array<b3SensorEndTouchEvent>::Clear()
{
} /* size: 0 */

// <06BE425D> src/array.h:71
inline void b3Array<b3ContactEndTouchEvent>::Clear()
{
} /* size: 0 */

// <06B24958> src/array.h:71
inline void b3Array<int>::Clear()
{
} /* size: 0 */

// <06C603BF> src/array.h:76
inline void b3Array<b3BodyMoveEvent>::Resize(int newCount)
{
} /* size: 0 */

// <06BE4969> src/array.h:76
inline void b3Array<b3TaskContext>::Resize(int newCount)
{
} /* size: 0 */

// <06BE4906> src/array.h:76
inline void b3Array<b3SensorTaskContext>::Resize(int newCount)
{
} /* size: 0 */

// <06BBE48E> src/array.h:76
inline void b3Array<b3TriangleCache>::Resize(int newCount)
{
} /* size: 0 */

// <06BA2BBB> src/array.h:76
inline void b3Array<int>::Resize(int newCount)
{
} /* size: 0 */

// <06BA2A05> src/array.h:76
inline void b3Array<b3Vec3>::Resize(int newCount)
{
} /* size: 0 */

// <06BA29BB> src/array.h:76
inline void b3Array<unsigned char>::Resize(int newCount)
{
} /* size: 0 */

// <06BE4950> src/array.h:82
inline void b3Array<b3TaskContext>::MemZero()
{
} /* size: 0 */

// <06BE48ED> src/array.h:82
inline void b3Array<b3SensorTaskContext>::MemZero()
{
} /* size: 0 */

// <06BA2B56> src/array.h:90
// variable: 1
inline void b3Array<b3MeshNode>::AddUninitialized()
{
	{
		int newCapacity; // 98
	}
} /* size: 0 */

// <06D03577> src/array.h:107
// variable: 1
inline void b3Array<b3ContactSim>::Add()
{
	{
		int newCapacity; // 115
	}
} /* size: 0 */

// <06D0348B> src/array.h:107
// variable: 1
inline void b3Array<b3JointSim>::Add()
{
	{
		int newCapacity; // 115
	}
} /* size: 0 */

// <06C758F9> src/array.h:107
// variable: 1
inline void b3Array<b3BodySim>::Add()
{
	{
		int newCapacity; // 115
	}
} /* size: 0 */

// <06C758D2> src/array.h:107
// variable: 1
inline void b3Array<b3BodyState>::Add()
{
	{
		int newCapacity; // 115
	}
} /* size: 0 */

// <06C757BF> src/array.h:107
// variable: 1
inline void b3Array<b3IslandSim>::Add()
{
	{
		int newCapacity; // 115
	}
} /* size: 0 */

// <06C43095> src/array.h:107
// variable: 1
inline void b3Array<b3Sensor>::Add()
{
	{
		int newCapacity; // 115
	}
} /* size: 0 */

// <06C35FD9> src/array.h:107
// variable: 1
inline void b3Array<b3Visitor>::Add()
{
	{
		int newCapacity; // 115
	}
} /* size: 0 */

// <06C7578C> src/array.h:124
// variable: 1
inline void b3Array<b3SolverSet>::PushBack(const b3SolverSet& value)
{
	{
		int newCapacity; // 132
	}
} /* size: 0 */

// <06C604F5> src/array.h:124
// variable: 1
inline void b3Array<int>::PushBack(const int& value)
{
	{
		int newCapacity; // 132
	}
} /* size: 0 */

// <06C6042E> src/array.h:124
// variable: 1
inline void b3Array<b3SensorHit>::PushBack(const b3SensorHit& value)
{
	{
		int newCapacity; // 132
	}
} /* size: 0 */

// <06C60373> src/array.h:124
// variable: 1
inline void b3Array<b3JointEvent>::PushBack(const b3JointEvent& value)
{
	{
		int newCapacity; // 132
	}
} /* size: 0 */

// <06C60340> src/array.h:124
// variable: 1
inline void b3Array<b3ContactHitEvent>::PushBack(const b3ContactHitEvent& value)
{
	{
		int newCapacity; // 132
	}
} /* size: 0 */

// <06C602E8> src/array.h:124
// variable: 1
inline void b3Array<b3Visitor>::PushBack(const b3Visitor& value)
{
	{
		int newCapacity; // 132
	}
} /* size: 0 */

// <06C430BC> src/array.h:124
// variable: 1
inline void b3Array<b3Shape>::PushBack(const b3Shape& value)
{
	{
		int newCapacity; // 132
	}
} /* size: 0 */

// <06C42FF3> src/array.h:124
// variable: 1
inline void b3Array<b3SensorEndTouchEvent>::PushBack(const b3SensorEndTouchEvent& value)
{
	{
		int newCapacity; // 132
	}
} /* size: 0 */

// <06C35EC5> src/array.h:124
// variable: 1
inline void b3Array<b3SensorBeginTouchEvent>::PushBack(const b3SensorBeginTouchEvent& value)
{
	{
		int newCapacity; // 132
	}
} /* size: 0 */

// <06BE4364> src/array.h:124
// variable: 1
inline void b3Array<b3ContactBeginTouchEvent>::PushBack(const b3ContactBeginTouchEvent& value)
{
	{
		int newCapacity; // 132
	}
} /* size: 0 */

// <06BE4331> src/array.h:124
// variable: 1
inline void b3Array<b3ContactEndTouchEvent>::PushBack(const b3ContactEndTouchEvent& value)
{
	{
		int newCapacity; // 132
	}
} /* size: 0 */

// <06BA2C05> src/array.h:124
// variable: 1
inline void b3Array<b3VertexNode>::PushBack(const b3VertexNode& value)
{
	{
		int newCapacity; // 132
	}
} /* size: 0 */

// <06BA2A8F> src/array.h:124
// variable: 1
inline void b3Array<b3MeshTriangle>::PushBack(const b3MeshTriangle& value)
{
	{
		int newCapacity; // 132
	}
} /* size: 0 */

// <06BA2A5C> src/array.h:124
// variable: 1
inline void b3Array<unsigned char>::PushBack(const unsigned char& value)
{
	{
		int newCapacity; // 132
	}
} /* size: 0 */

// <06BA294A> src/array.h:124
// variable: 1
inline void b3Array<b3Vec3>::PushBack(const b3Vec3& value)
{
	{
		int newCapacity; // 132
	}
} /* size: 0 */

// <06BA2804> src/array.h:124
// variable: 1
inline void b3Array<b3Primitive>::PushBack(const b3Primitive& value)
{
	{
		int newCapacity; // 132
	}
} /* size: 0 */

// <06B8E918> src/array.h:124
// variable: 1
inline void b3Array<b3Joint>::PushBack(const b3Joint& value)
{
	{
		int newCapacity; // 132
	}
} /* size: 0 */

// <06B7F419> src/array.h:124
// variable: 1
inline void b3Array<b3Island>::PushBack(const b3Island& value)
{
	{
		int newCapacity; // 132
	}
} /* size: 0 */

// <06B36017> src/array.h:124
// variable: 1
inline void b3Array<b3Contact>::PushBack(const b3Contact& value)
{
	{
		int newCapacity; // 132
	}
} /* size: 0 */

// <06B0DA78> src/array.h:124
// variable: 1
inline void b3Array<b3Body>::PushBack(const b3Body& value)
{
	{
		int newCapacity; // 132
	}
} /* size: 0 */

// <06C35F50> src/array.h:141
// variables: 2
inline void b3Array<b3Visitor>::Append(const b3Visitor* otherValues, int otherCount)
{
	{
		int requiredCapacity; // 145
		int newCapacity; // 146
	}
} /* size: 0 */

// <06BA28A7> src/array.h:141
// variables: 2
inline void b3Array<b3Vec3>::Append(const b3Vec3* otherValues, int otherCount)
{
	{
		int requiredCapacity; // 145
		int newCapacity; // 146
	}
} /* size: 0 */

// <06BA285C> src/array.h:141
// variables: 2
inline void b3Array<int>::Append(const int* otherValues, int otherCount)
{
	{
		int requiredCapacity; // 145
		int newCapacity; // 146
	}
} /* size: 0 */

// <06B73C8E> src/array.h:154
inline void b3Array<int>::PopBack()
{
} /* size: 0 */

// <06D034D7> src/array.h:175
// variable: 1
inline void b3Array<b3ContactSim>::RemoveSwap(int index)
{
	int movedIndex; // 178
} /* size: 0, variables: 1 */

// <06D0345A> src/array.h:175
// variable: 1
inline void b3Array<b3JointSim>::RemoveSwap(int index)
{
	int movedIndex; // 178
} /* size: 0, variables: 1 */

// <06C7567D> src/array.h:175
// variable: 1
inline void b3Array<b3BodySim>::RemoveSwap(int index)
{
	int movedIndex; // 178
} /* size: 0, variables: 1 */

// <06C7564C> src/array.h:175
// variable: 1
inline void b3Array<b3BodyState>::RemoveSwap(int index)
{
	int movedIndex; // 178
} /* size: 0, variables: 1 */

// <06C7559E> src/array.h:175
// variable: 1
inline void b3Array<b3IslandSim>::RemoveSwap(int index)
{
	int movedIndex; // 178
} /* size: 0, variables: 1 */

// <06C42FA9> src/array.h:175
// variable: 1
inline void b3Array<b3Sensor>::RemoveSwap(int index)
{
	int movedIndex; // 178
} /* size: 0, variables: 1 */

// <06B249BB> src/array.h:175
// variable: 1
inline void b3Array<int>::RemoveSwap(int index)
{
	int movedIndex; // 178
} /* size: 0, variables: 1 */

// <06BE49B3> src/array.h:193
inline void b3Array<int>::GetByteCount()
{
} /* size: 0 */

// <06BE41D5> src/array.h:193
inline void b3Array<b3Body>::GetByteCount()
{
} /* size: 0 */

// <06BE41BC> src/array.h:193
inline void b3Array<b3SolverSet>::GetByteCount()
{
} /* size: 0 */

// <06BE41A3> src/array.h:193
inline void b3Array<b3Joint>::GetByteCount()
{
} /* size: 0 */

// <06BE418A> src/array.h:193
inline void b3Array<b3Contact>::GetByteCount()
{
} /* size: 0 */

// <06BE4171> src/array.h:193
inline void b3Array<b3Island>::GetByteCount()
{
} /* size: 0 */

// <06BE4158> src/array.h:193
inline void b3Array<b3Shape>::GetByteCount()
{
} /* size: 0 */

// <06D03404> src/array.h:226
// variable: 1
void b3Array<b3ContactSim>::Reserve(int newCapacity)
{
	b3ContactSim* newData; // 236
} /* size: 0, variables: 1 */

// <06D033D3> src/array.h:226
// variable: 1
void b3Array<b3JointSim>::Reserve(int newCapacity)
{
	b3JointSim* newData; // 236
} /* size: 0, variables: 1 */

// <06C7548F> src/array.h:226
// variable: 1
// function call: 1
void b3Array<b3BodySim>::Reserve(int newCapacity)
{
	b3BodySim* newData; // 236
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 241
} /* size: 170, variables: 1, inline expansions: 1 (11 bytes) */

// <06C75380> src/array.h:226
// variable: 1
// function call: 1
void b3Array<b3BodyState>::Reserve(int newCapacity)
{
	b3BodyState* newData; // 236
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 241
} /* size: 162, variables: 1, inline expansions: 1 (11 bytes) */

// <06C75271> src/array.h:226
// variable: 1
// function call: 1
void b3Array<b3ContactSim>::Reserve(int newCapacity)
{
	b3ContactSim* newData; // 236
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 241
} /* size: 170, variables: 1, inline expansions: 1 (11 bytes) */

// <06C75163> src/array.h:226
// variable: 1
// function call: 1
void b3Array<b3IslandSim>::Reserve(int newCapacity)
{
	b3IslandSim* newData; // 236
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 241
} /* size: 162, variables: 1, inline expansions: 1 (11 bytes) */

// <06C75132> src/array.h:226
// variable: 1
void b3Array<b3SolverSet>::Reserve(int newCapacity)
{
	b3SolverSet* newData; // 236
} /* size: 0, variables: 1 */

// <06C75022> src/array.h:226
// variable: 1
// function call: 1
void b3Array<b3JointSim>::Reserve(int newCapacity)
{
	b3JointSim* newData; // 236
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 241
} /* size: 170, variables: 1, inline expansions: 1 (11 bytes) */

// <06C602B7> src/array.h:226
// variable: 1
void b3Array<int>::Reserve(int newCapacity)
{
	int* newData; // 236
} /* size: 0, variables: 1 */

// <06C60286> src/array.h:226
// variable: 1
void b3Array<b3SensorHit>::Reserve(int newCapacity)
{
	b3SensorHit* newData; // 236
} /* size: 0, variables: 1 */

// <06C60255> src/array.h:226
// variable: 1
void b3Array<b3BodyMoveEvent>::Reserve(int newCapacity)
{
	b3BodyMoveEvent* newData; // 236
} /* size: 0, variables: 1 */

// <06C60224> src/array.h:226
// variable: 1
void b3Array<b3JointEvent>::Reserve(int newCapacity)
{
	b3JointEvent* newData; // 236
} /* size: 0, variables: 1 */

// <06C601F3> src/array.h:226
// variable: 1
void b3Array<b3ContactHitEvent>::Reserve(int newCapacity)
{
	b3ContactHitEvent* newData; // 236
} /* size: 0, variables: 1 */

// <06C601C2> src/array.h:226
// variable: 1
void b3Array<b3Visitor>::Reserve(int newCapacity)
{
	b3Visitor* newData; // 236
} /* size: 0, variables: 1 */

// <06C42F53> src/array.h:226
// variable: 1
void b3Array<b3Shape>::Reserve(int newCapacity)
{
	b3Shape* newData; // 236
} /* size: 0, variables: 1 */

// <06C42F22> src/array.h:226
// variable: 1
void b3Array<b3Sensor>::Reserve(int newCapacity)
{
	b3Sensor* newData; // 236
} /* size: 0, variables: 1 */

// <06C42E12> src/array.h:226
// variable: 1
// function call: 1
void b3Array<b3Visitor>::Reserve(int newCapacity)
{
	b3Visitor* newData; // 236
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 241
} /* size: 162, variables: 1, inline expansions: 1 (11 bytes) */

// <06C42DE1> src/array.h:226
// variable: 1
void b3Array<b3SensorEndTouchEvent>::Reserve(int newCapacity)
{
	b3SensorEndTouchEvent* newData; // 236
} /* size: 0, variables: 1 */

// <06C35C5F> src/array.h:226
// variable: 1
// function call: 1
void b3Array<b3SensorEndTouchEvent>::Reserve(int newCapacity)
{
	b3SensorEndTouchEvent* newData; // 236
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 241
} /* size: 162, variables: 1, inline expansions: 1 (11 bytes) */

// <06C35B51> src/array.h:226
// variable: 1
// function call: 1
void b3Array<b3SensorBeginTouchEvent>::Reserve(int newCapacity)
{
	b3SensorBeginTouchEvent* newData; // 236
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 241
} /* size: 162, variables: 1, inline expansions: 1 (11 bytes) */

// <06BE3FFE> src/array.h:226
// variable: 1
// function call: 1
void b3Array<b3TaskContext>::Reserve(int newCapacity)
{
	b3TaskContext* newData; // 236
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 241
} /* size: 170, variables: 1, inline expansions: 1 (11 bytes) */

// <06BE3EF0> src/array.h:226
// variable: 1
// function call: 1
void b3Array<b3SensorTaskContext>::Reserve(int newCapacity)
{
	b3SensorTaskContext* newData; // 236
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 241
} /* size: 162, variables: 1, inline expansions: 1 (11 bytes) */

// <06BE3E8E> src/array.h:226
// variable: 1
void b3Array<b3Body>::Reserve(int newCapacity)
{
	b3Body* newData; // 236
} /* size: 0, variables: 1 */

// <06BE3D7F> src/array.h:226
// variable: 1
// function call: 1
void b3Array<b3SolverSet>::Reserve(int newCapacity)
{
	b3SolverSet* newData; // 236
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 241
} /* size: 162, variables: 1, inline expansions: 1 (11 bytes) */

// <06BE3C3F> src/array.h:226
// variable: 1
void b3Array<b3BodyState>::Reserve(int newCapacity)
{
	b3BodyState* newData; // 236
} /* size: 0, variables: 1 */

// <06BE3ACE> src/array.h:226
// variable: 1
void b3Array<b3Contact>::Reserve(int newCapacity)
{
	b3Contact* newData; // 236
} /* size: 0, variables: 1 */

// <06BE3A9D> src/array.h:226
// variable: 1
void b3Array<b3Joint>::Reserve(int newCapacity)
{
	b3Joint* newData; // 236
} /* size: 0, variables: 1 */

// <06BE3A6C> src/array.h:226
// variable: 1
void b3Array<b3Island>::Reserve(int newCapacity)
{
	b3Island* newData; // 236
} /* size: 0, variables: 1 */

// <06BE39D9> src/array.h:226
// variable: 1
void b3Array<b3SensorBeginTouchEvent>::Reserve(int newCapacity)
{
	b3SensorBeginTouchEvent* newData; // 236
} /* size: 0, variables: 1 */

// <06BE37BD> src/array.h:226
// variable: 1
// function call: 1
void b3Array<b3ContactBeginTouchEvent>::Reserve(int newCapacity)
{
	b3ContactBeginTouchEvent* newData; // 236
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 241
} /* size: 162, variables: 1, inline expansions: 1 (11 bytes) */

// <06BE36AF> src/array.h:226
// variable: 1
// function call: 1
void b3Array<b3ContactEndTouchEvent>::Reserve(int newCapacity)
{
	b3ContactEndTouchEvent* newData; // 236
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 241
} /* size: 162, variables: 1, inline expansions: 1 (11 bytes) */

// <06BBE088> src/array.h:226
// variable: 1
void b3Array<b3TriangleCache>::Reserve(int newCapacity)
{
	b3TriangleCache* newData; // 236
} /* size: 0, variables: 1 */

// <06BB346C> src/array.h:226
// variable: 1
// function calls: 2
void b3Array<unsigned char>::Reserve(int newCapacity)
{
	unsigned char* newData; // 236
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 241
	b3Array<unsigned char>::Reserve(
		int newCapacity);  // 226
} /* size: 142, variables: 1, inline expansions: 2 (60 bytes) */

// <06BA2661> src/array.h:226
// variable: 1
// function call: 1
void b3Array<b3VertexNode>::Reserve(int newCapacity)
{
	b3VertexNode* newData; // 236
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 241
} /* size: 162, variables: 1, inline expansions: 1 (11 bytes) */

// <06BA2553> src/array.h:226
// variable: 1
// function call: 1
void b3Array<int>::Reserve(int newCapacity)
{
	int* newData; // 236
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 241
} /* size: 162, variables: 1, inline expansions: 1 (11 bytes) */

// <06BA2445> src/array.h:226
// variable: 1
// function call: 1
void b3Array<b3MeshNode>::Reserve(int newCapacity)
{
	b3MeshNode* newData; // 236
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 241
} /* size: 162, variables: 1, inline expansions: 1 (11 bytes) */

// <06BA2335> src/array.h:226
// variable: 1
// function call: 1
void b3Array<b3MeshTriangle>::Reserve(int newCapacity)
{
	b3MeshTriangle* newData; // 236
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 241
} /* size: 170, variables: 1, inline expansions: 1 (8 bytes) */

// <06BA2304> src/array.h:226
// variable: 1
void b3Array<unsigned char>::Reserve(int newCapacity)
{
	unsigned char* newData; // 236
} /* size: 0, variables: 1 */

// <06BA21F4> src/array.h:226
// variable: 1
// function call: 1
void b3Array<b3Vec3>::Reserve(int newCapacity)
{
	b3Vec3* newData; // 236
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 241
} /* size: 170, variables: 1, inline expansions: 1 (8 bytes) */

// <06BA20E4> src/array.h:226
// variable: 1
// function call: 1
void b3Array<b3Primitive>::Reserve(int newCapacity)
{
	b3Primitive* newData; // 236
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 241
} /* size: 170, variables: 1, inline expansions: 1 (8 bytes) */

// <06B7F2A6> src/array.h:226
// variable: 1
void b3Array<b3IslandSim>::Reserve(int newCapacity)
{
	b3IslandSim* newData; // 236
} /* size: 0, variables: 1 */

// <06B35EBB> src/array.h:226
// variable: 1
void b3Array<b3ContactEndTouchEvent>::Reserve(int newCapacity)
{
	b3ContactEndTouchEvent* newData; // 236
} /* size: 0, variables: 1 */

// <06B0D96A> src/array.h:226
// variable: 1
void b3Array<b3BodySim>::Reserve(int newCapacity)
{
	b3BodySim* newData; // 236
} /* size: 0, variables: 1 */

