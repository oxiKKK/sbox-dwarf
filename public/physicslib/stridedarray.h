
//
// public/physicslib/stridedarray.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 10
//	classes: 3
//

// <00AFB5E9> ../public/physicslib/stridedarray.h:6
// member functions: 18
// member variables: 3
// class size: 16
class CStridedArray<Vector> {
	/* ../public/physicslib/stridedarray.h:9 */
	void CStridedArray(CStridedArray<Vector>* );
	/* ../public/physicslib/stridedarray.h:15 */
	void CStridedArray(CStridedArray<Vector>* , const Vector* , uint, uint);
	/* ../public/physicslib/stridedarray.h:21 */
	void Assign(CStridedArray<Vector>* , const Vector* , uint, uint);
	/* ../public/physicslib/stridedarray.h:28 */
	void CStridedArray(CStridedArray<Vector>* , const CUtlVector<Vector, CUtlMemory<Vector, int> >& );
	/* ../public/physicslib/stridedarray.h:33 */
	bool IsValid(const CStridedArray<Vector>* );
	/* ../public/physicslib/stridedarray.h:35 */
	Vector& operator[](CStridedArray<Vector>* , int);
	/* ../public/physicslib/stridedarray.h:36 */
	const Vector& operator[](const CStridedArray<Vector>* , int);
	/* ../public/physicslib/stridedarray.h:37 */
	uint Count(const CStridedArray<Vector>* );
	/* ../public/physicslib/stridedarray.h:38 */
	uint GetStride(const CStridedArray<Vector>* );
protected:
	const class Vector * m_pFirstElement; /* 0 8 */
	uint m_nElementCount; /* 8 4 */
	uint m_nStride; /* 12 4 */
	void CStridedArray(class CStridedArray<Vector> *); /* linkage=_ZN13CStridedArrayI6VectorEC4Ev */
	void CStridedArray(class CStridedArray<Vector> *, const class Vector  *, uint, uint); /* linkage=_ZN13CStridedArrayI6VectorEC4EPKS0_jj */
	void Assign(class CStridedArray<Vector> *, const class Vector  *, uint, uint); /* linkage=_ZN13CStridedArrayI6VectorE6AssignEPKS0_jj */
	void CStridedArray(class CStridedArray<Vector> *, const class CUtlVector<Vector, CUtlMemory<Vector, int> >  &); /* linkage=_ZN13CStridedArrayI6VectorEC4ERK10CUtlVectorIS0_10CUtlMemoryIS0_iEE */
	bool IsValid(const class CStridedArray<Vector>  *); /* linkage=_ZNK13CStridedArrayI6VectorE7IsValidEv */
	class Vector & operator[](class CStridedArray<Vector> *, int); /* linkage=_ZN13CStridedArrayI6VectorEixEi */
	const class Vector  & operator[](const class CStridedArray<Vector>  *, int); /* linkage=_ZNK13CStridedArrayI6VectorEixEi */
	uint Count(const class CStridedArray<Vector>  *); /* linkage=_ZNK13CStridedArrayI6VectorE5CountEv */
	uint GetStride(const class CStridedArray<Vector>  *); /* linkage=_ZNK13CStridedArrayI6VectorE9GetStrideEv */
};

// <00AFB78C> ../public/physicslib/stridedarray.h:6
// member functions: 18
// member variables: 3
// class size: 16
class CStridedArray<RnVertex_t> {
	/* ../public/physicslib/stridedarray.h:9 */
	void CStridedArray(CStridedArray<RnVertex_t>* );
	/* ../public/physicslib/stridedarray.h:15 */
	void CStridedArray(CStridedArray<RnVertex_t>* , const RnVertex_t* , uint, uint);
	/* ../public/physicslib/stridedarray.h:21 */
	void Assign(CStridedArray<RnVertex_t>* , const RnVertex_t* , uint, uint);
	/* ../public/physicslib/stridedarray.h:28 */
	void CStridedArray(CStridedArray<RnVertex_t>* , const CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >& );
	/* ../public/physicslib/stridedarray.h:33 */
	bool IsValid(const CStridedArray<RnVertex_t>* );
	/* ../public/physicslib/stridedarray.h:35 */
	RnVertex_t& operator[](CStridedArray<RnVertex_t>* , int);
	/* ../public/physicslib/stridedarray.h:36 */
	const RnVertex_t& operator[](const CStridedArray<RnVertex_t>* , int);
	/* ../public/physicslib/stridedarray.h:37 */
	uint Count(const CStridedArray<RnVertex_t>* );
	/* ../public/physicslib/stridedarray.h:38 */
	uint GetStride(const CStridedArray<RnVertex_t>* );
protected:
	const class RnVertex_t * m_pFirstElement; /* 0 8 */
	uint m_nElementCount; /* 8 4 */
	uint m_nStride; /* 12 4 */
	void CStridedArray(class CStridedArray<RnVertex_t> *); /* linkage=_ZN13CStridedArrayI10RnVertex_tEC4Ev */
	void CStridedArray(class CStridedArray<RnVertex_t> *, const class RnVertex_t  *, uint, uint); /* linkage=_ZN13CStridedArrayI10RnVertex_tEC4EPKS0_jj */
	void Assign(class CStridedArray<RnVertex_t> *, const class RnVertex_t  *, uint, uint); /* linkage=_ZN13CStridedArrayI10RnVertex_tE6AssignEPKS0_jj */
	void CStridedArray(class CStridedArray<RnVertex_t> *, const class CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >  &); /* linkage=_ZN13CStridedArrayI10RnVertex_tEC4ERK10CUtlVectorIS0_10CUtlMemoryIS0_iEE */
	bool IsValid(const class CStridedArray<RnVertex_t>  *); /* linkage=_ZNK13CStridedArrayI10RnVertex_tE7IsValidEv */
	class RnVertex_t & operator[](class CStridedArray<RnVertex_t> *, int); /* linkage=_ZN13CStridedArrayI10RnVertex_tEixEi */
	const class RnVertex_t  & operator[](const class CStridedArray<RnVertex_t>  *, int); /* linkage=_ZNK13CStridedArrayI10RnVertex_tEixEi */
	uint Count(const class CStridedArray<RnVertex_t>  *); /* linkage=_ZNK13CStridedArrayI10RnVertex_tE5CountEv */
	uint GetStride(const class CStridedArray<RnVertex_t>  *); /* linkage=_ZNK13CStridedArrayI10RnVertex_tE9GetStrideEv */
};

// <0644B004> ../public/physicslib/stridedarray.h:6
// member functions: 18
// member variables: 3
// class size: 16
class CStridedArray<VertexColorPos_t> {
	/* ../public/physicslib/stridedarray.h:9 */
	void CStridedArray(CStridedArray<VertexColorPos_t>* );
	/* ../public/physicslib/stridedarray.h:15 */
	void CStridedArray(CStridedArray<VertexColorPos_t>* , const VertexColorPos_t* , uint, uint);
	/* ../public/physicslib/stridedarray.h:21 */
	void Assign(CStridedArray<VertexColorPos_t>* , const VertexColorPos_t* , uint, uint);
	/* ../public/physicslib/stridedarray.h:28 */
	void CStridedArray(CStridedArray<VertexColorPos_t>* , const CUtlVector<VertexColorPos_t, CUtlMemory<VertexColorPos_t, int> >& );
	/* ../public/physicslib/stridedarray.h:33 */
	bool IsValid(const CStridedArray<VertexColorPos_t>* );
	/* ../public/physicslib/stridedarray.h:35 */
	VertexColorPos_t& operator[](CStridedArray<VertexColorPos_t>* , int);
	/* ../public/physicslib/stridedarray.h:36 */
	const VertexColorPos_t& operator[](const CStridedArray<VertexColorPos_t>* , int);
	/* ../public/physicslib/stridedarray.h:37 */
	uint Count(const CStridedArray<VertexColorPos_t>* );
	/* ../public/physicslib/stridedarray.h:38 */
	uint GetStride(const CStridedArray<VertexColorPos_t>* );
protected:
	const class VertexColorPos_t * m_pFirstElement; /* 0 8 */
	uint m_nElementCount; /* 8 4 */
	uint m_nStride; /* 12 4 */
	void CStridedArray(class CStridedArray<VertexColorPos_t> *); /* linkage=_ZN13CStridedArrayI16VertexColorPos_tEC4Ev */
	void CStridedArray(class CStridedArray<VertexColorPos_t> *, const class VertexColorPos_t  *, uint, uint); /* linkage=_ZN13CStridedArrayI16VertexColorPos_tEC4EPKS0_jj */
	void Assign(class CStridedArray<VertexColorPos_t> *, const class VertexColorPos_t  *, uint, uint); /* linkage=_ZN13CStridedArrayI16VertexColorPos_tE6AssignEPKS0_jj */
	void CStridedArray(class CStridedArray<VertexColorPos_t> *, const class CUtlVector<VertexColorPos_t, CUtlMemory<VertexColorPos_t, int> >  &); /* linkage=_ZN13CStridedArrayI16VertexColorPos_tEC4ERK10CUtlVectorIS0_10CUtlMemoryIS0_iEE */
	bool IsValid(const class CStridedArray<VertexColorPos_t>  *); /* linkage=_ZNK13CStridedArrayI16VertexColorPos_tE7IsValidEv */
	class VertexColorPos_t & operator[](class CStridedArray<VertexColorPos_t> *, int); /* linkage=_ZN13CStridedArrayI16VertexColorPos_tEixEi */
	const class VertexColorPos_t  & operator[](const class CStridedArray<VertexColorPos_t>  *, int); /* linkage=_ZNK13CStridedArrayI16VertexColorPos_tEixEi */
	uint Count(const class CStridedArray<VertexColorPos_t>  *); /* linkage=_ZNK13CStridedArrayI16VertexColorPos_tE5CountEv */
	uint GetStride(const class CStridedArray<VertexColorPos_t>  *); /* linkage=_ZNK13CStridedArrayI16VertexColorPos_tE9GetStrideEv */
};

// <00B15EC9> ../public/physicslib/stridedarray.h:15
void CStridedArray<Vector>::CStridedArray(const Vector* pFirstElement, uint nElementCount, uint nStride)
{
} /* size: 0 */

// <00B15E8C> ../public/physicslib/stridedarray.h:15
inline void CStridedArray<Vector>::CStridedArray(const Vector* pFirstElement, uint nElementCount, uint nStride)
{
} /* size: 0 */

// <00B15E3D> ../public/physicslib/stridedarray.h:28
void CStridedArray<RnVertex_t>::CStridedArray(const CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >& vertices)
{
} /* size: 0 */

// <00B15E18> ../public/physicslib/stridedarray.h:28
inline void CStridedArray<RnVertex_t>::CStridedArray(const CUtlVector<RnVertex_t, CUtlMemory<RnVertex_t, int> >& vertices)
{
} /* size: 0 */

// <06456262> ../public/physicslib/stridedarray.h:35
inline void CStridedArray<RnVertex_t>::operator[](int i)
{
} /* size: 0 */

// <06455C54> ../public/physicslib/stridedarray.h:35
inline void CStridedArray<Vector>::operator[](int i)
{
} /* size: 0 */

// <06455BD7> ../public/physicslib/stridedarray.h:35
inline void CStridedArray<VertexColorPos_t>::operator[](int i)
{
} /* size: 0 */

// <06455F76> ../public/physicslib/stridedarray.h:37
inline void CStridedArray<RnVertex_t>::Count()
{
} /* size: 0 */

// <06455D4C> ../public/physicslib/stridedarray.h:37
inline void CStridedArray<Vector>::Count()
{
} /* size: 0 */

// <06455BFA> ../public/physicslib/stridedarray.h:37
inline void CStridedArray<VertexColorPos_t>::Count()
{
} /* size: 0 */

