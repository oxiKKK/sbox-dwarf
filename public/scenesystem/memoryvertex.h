
//
// public/scenesystem/memoryvertex.h
//
//	referenced by: libengine2.so
//				   libmeshsystem.so
//
//	functions: 24
//	classes: 3
//

// <03933446> ../public/scenesystem/memoryvertex.h:22
void CMemoryVertexData<VertexUVPosColorNormalAndTangent_t>::CMemoryVertexData()
{
} /* size: 0 */

// <0393342A> ../public/scenesystem/memoryvertex.h:22
inline void CMemoryVertexData<VertexUVPosColorNormalAndTangent_t>::CMemoryVertexData()
{
} /* size: 0 */

// <03933413> ../public/scenesystem/memoryvertex.h:22
void CMemoryVertexData<VertexUVPosColorNormalAndTangent_t>::~CMemoryVertexData()
{
} /* size: 0 */

// <039333F7> ../public/scenesystem/memoryvertex.h:22
inline void CMemoryVertexData<VertexUVPosColorNormalAndTangent_t>::~CMemoryVertexData()
{
} /* size: 0 */

// <00228148> ../public/scenesystem/memoryvertex.h:22
void CMemoryVertexData<SkeletonMeshVertex_t>::CMemoryVertexData()
{
} /* size: 0 */

// <0022812C> ../public/scenesystem/memoryvertex.h:22
inline void CMemoryVertexData<SkeletonMeshVertex_t>::CMemoryVertexData()
{
} /* size: 0 */

// <00228115> ../public/scenesystem/memoryvertex.h:22
void CMemoryVertexData<SkeletonMeshVertex_t>::~CMemoryVertexData()
{
} /* size: 0 */

// <002280F9> ../public/scenesystem/memoryvertex.h:22
inline void CMemoryVertexData<SkeletonMeshVertex_t>::~CMemoryVertexData()
{
} /* size: 0 */

// <039251ED> ../public/scenesystem/memoryvertex.h:22
// member functions: 22
// member variables: 2
// class size: 88
class CMemoryVertexData<VertexUVPosColorNormalAndTangent_t> {
	/* ../public/scenesystem/memoryvertex.h:25 */
	void Lock(CMemoryVertexData<VertexUVPosColorNormalAndTangent_t>* , int);
	/* ../public/scenesystem/memoryvertex.h:26 */
	void Unlock(CMemoryVertexData<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/scenesystem/memoryvertex.h:29 */
	int VertexCount(const CMemoryVertexData<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/scenesystem/memoryvertex.h:33 */
	void AdvanceVertex(CMemoryVertexData<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/scenesystem/memoryvertex.h:36 */
	VertexUVPosColorNormalAndTangent_t* operator->(CMemoryVertexData<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/scenesystem/memoryvertex.h:37 */
	const VertexUVPosColorNormalAndTangent_t* operator->(const CMemoryVertexData<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/scenesystem/memoryvertex.h:39 */
	VertexUVPosColorNormalAndTangent_t& CurrentVertex(CMemoryVertexData<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/scenesystem/memoryvertex.h:41 */
	const VertexUVPosColorNormalAndTangent_t* Base(const CMemoryVertexData<VertexUVPosColorNormalAndTangent_t>* );
	/* ../public/scenesystem/memoryvertex.h:43 */
	const VertexUVPosColorNormalAndTangent_t& operator[](const CMemoryVertexData<VertexUVPosColorNormalAndTangent_t>* , int);
private:
	CUtlVector<VertexUVPosColorNormalAndTangent_t, CUtlMemory<VertexUVPosColorNormalAndTangent_t, int> > m_vtxData; /* 0 32 */
	VertexUVPosColorNormalAndTangent_t m_Scratch; /* 32 52 */
	void ~CMemoryVertexData(CMemoryVertexData<VertexUVPosColorNormalAndTangent_t>* );
	void CMemoryVertexData(CMemoryVertexData<VertexUVPosColorNormalAndTangent_t>* );
	void Lock(class CMemoryVertexData<VertexUVPosColorNormalAndTangent_t> *, int); /* linkage=_ZN17CMemoryVertexDataI34VertexUVPosColorNormalAndTangent_tE4LockEi */
	void Unlock(class CMemoryVertexData<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN17CMemoryVertexDataI34VertexUVPosColorNormalAndTangent_tE6UnlockEv */
	int VertexCount(const class CMemoryVertexData<VertexUVPosColorNormalAndTangent_t>  *); /* linkage=_ZNK17CMemoryVertexDataI34VertexUVPosColorNormalAndTangent_tE11VertexCountEv */
	void AdvanceVertex(class CMemoryVertexData<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN17CMemoryVertexDataI34VertexUVPosColorNormalAndTangent_tE13AdvanceVertexEv */
	class VertexUVPosColorNormalAndTangent_t * operator->(class CMemoryVertexData<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN17CMemoryVertexDataI34VertexUVPosColorNormalAndTangent_tEptEv */
	const class VertexUVPosColorNormalAndTangent_t  * operator->(const class CMemoryVertexData<VertexUVPosColorNormalAndTangent_t>  *); /* linkage=_ZNK17CMemoryVertexDataI34VertexUVPosColorNormalAndTangent_tEptEv */
	class VertexUVPosColorNormalAndTangent_t & CurrentVertex(class CMemoryVertexData<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN17CMemoryVertexDataI34VertexUVPosColorNormalAndTangent_tE13CurrentVertexEv */
	const class VertexUVPosColorNormalAndTangent_t  * Base(const class CMemoryVertexData<VertexUVPosColorNormalAndTangent_t>  *); /* linkage=_ZNK17CMemoryVertexDataI34VertexUVPosColorNormalAndTangent_tE4BaseEv */
	const class VertexUVPosColorNormalAndTangent_t  & operator[](const class CMemoryVertexData<VertexUVPosColorNormalAndTangent_t>  *, int); /* linkage=_ZNK17CMemoryVertexDataI34VertexUVPosColorNormalAndTangent_tEixEi */
	void ~CMemoryVertexData(class CMemoryVertexData<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN17CMemoryVertexDataI34VertexUVPosColorNormalAndTangent_tED4Ev */
	void CMemoryVertexData(class CMemoryVertexData<VertexUVPosColorNormalAndTangent_t> *); /* linkage=_ZN17CMemoryVertexDataI34VertexUVPosColorNormalAndTangent_tEC4Ev */
};

// <0021418D> ../public/scenesystem/memoryvertex.h:22
// member functions: 22
// member variables: 2
// class size: 64
class CMemoryVertexData<SkeletonMeshVertex_t> {
	/* ../public/scenesystem/memoryvertex.h:25 */
	void Lock(CMemoryVertexData<SkeletonMeshVertex_t>* , int);
	/* ../public/scenesystem/memoryvertex.h:26 */
	void Unlock(CMemoryVertexData<SkeletonMeshVertex_t>* );
	/* ../public/scenesystem/memoryvertex.h:29 */
	int VertexCount(const CMemoryVertexData<SkeletonMeshVertex_t>* );
	/* ../public/scenesystem/memoryvertex.h:33 */
	void AdvanceVertex(CMemoryVertexData<SkeletonMeshVertex_t>* );
	/* ../public/scenesystem/memoryvertex.h:36 */
	SkeletonMeshVertex_t* operator->(CMemoryVertexData<SkeletonMeshVertex_t>* );
	/* ../public/scenesystem/memoryvertex.h:37 */
	const SkeletonMeshVertex_t* operator->(const CMemoryVertexData<SkeletonMeshVertex_t>* );
	/* ../public/scenesystem/memoryvertex.h:39 */
	SkeletonMeshVertex_t& CurrentVertex(CMemoryVertexData<SkeletonMeshVertex_t>* );
	/* ../public/scenesystem/memoryvertex.h:41 */
	const SkeletonMeshVertex_t* Base(const CMemoryVertexData<SkeletonMeshVertex_t>* );
	/* ../public/scenesystem/memoryvertex.h:43 */
	const SkeletonMeshVertex_t& operator[](const CMemoryVertexData<SkeletonMeshVertex_t>* , int);
private:
	CUtlVector<SkeletonMeshVertex_t, CUtlMemory<SkeletonMeshVertex_t, int> > m_vtxData; /* 0 32 */
	SkeletonMeshVertex_t m_Scratch; /* 32 28 */
	void ~CMemoryVertexData(CMemoryVertexData<SkeletonMeshVertex_t>* );
	void CMemoryVertexData(CMemoryVertexData<SkeletonMeshVertex_t>* );
	void Lock(class CMemoryVertexData<SkeletonMeshVertex_t> *, int); /* linkage=_ZN17CMemoryVertexDataI20SkeletonMeshVertex_tE4LockEi */
	void Unlock(class CMemoryVertexData<SkeletonMeshVertex_t> *); /* linkage=_ZN17CMemoryVertexDataI20SkeletonMeshVertex_tE6UnlockEv */
	int VertexCount(const class CMemoryVertexData<SkeletonMeshVertex_t>  *); /* linkage=_ZNK17CMemoryVertexDataI20SkeletonMeshVertex_tE11VertexCountEv */
	void AdvanceVertex(class CMemoryVertexData<SkeletonMeshVertex_t> *); /* linkage=_ZN17CMemoryVertexDataI20SkeletonMeshVertex_tE13AdvanceVertexEv */
	class SkeletonMeshVertex_t * operator->(class CMemoryVertexData<SkeletonMeshVertex_t> *); /* linkage=_ZN17CMemoryVertexDataI20SkeletonMeshVertex_tEptEv */
	const class SkeletonMeshVertex_t  * operator->(const class CMemoryVertexData<SkeletonMeshVertex_t>  *); /* linkage=_ZNK17CMemoryVertexDataI20SkeletonMeshVertex_tEptEv */
	class SkeletonMeshVertex_t & CurrentVertex(class CMemoryVertexData<SkeletonMeshVertex_t> *); /* linkage=_ZN17CMemoryVertexDataI20SkeletonMeshVertex_tE13CurrentVertexEv */
	const class SkeletonMeshVertex_t  * Base(const class CMemoryVertexData<SkeletonMeshVertex_t>  *); /* linkage=_ZNK17CMemoryVertexDataI20SkeletonMeshVertex_tE4BaseEv */
	const class SkeletonMeshVertex_t  & operator[](const class CMemoryVertexData<SkeletonMeshVertex_t>  *, int); /* linkage=_ZNK17CMemoryVertexDataI20SkeletonMeshVertex_tEixEi */
	void ~CMemoryVertexData(class CMemoryVertexData<SkeletonMeshVertex_t> *); /* linkage=_ZN17CMemoryVertexDataI20SkeletonMeshVertex_tED4Ev */
	void CMemoryVertexData(class CMemoryVertexData<SkeletonMeshVertex_t> *); /* linkage=_ZN17CMemoryVertexDataI20SkeletonMeshVertex_tEC4Ev */
};

// <0392B642> ../public/scenesystem/memoryvertex.h:29
inline void CMemoryVertexData<VertexUVPosColorNormalAndTangent_t>::VertexCount()
{
} /* size: 0 */

// <0021DB90> ../public/scenesystem/memoryvertex.h:29
inline void CMemoryVertexData<SkeletonMeshVertex_t>::VertexCount()
{
} /* size: 0 */

// <0392B65B> ../public/scenesystem/memoryvertex.h:33
inline void CMemoryVertexData<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex()
{
} /* size: 0 */

// <0021DB5E> ../public/scenesystem/memoryvertex.h:33
inline void CMemoryVertexData<SkeletonMeshVertex_t>::AdvanceVertex()
{
} /* size: 0 */

// <0392B674> ../public/scenesystem/memoryvertex.h:36
inline void CMemoryVertexData<VertexUVPosColorNormalAndTangent_t>::operator->()
{
} /* size: 0 */

// <0021DB77> ../public/scenesystem/memoryvertex.h:36
inline void CMemoryVertexData<SkeletonMeshVertex_t>::operator->()
{
} /* size: 0 */

// <0392B4EC> ../public/scenesystem/memoryvertex.h:43
inline void CMemoryVertexData<VertexUVPosColorNormalAndTangent_t>::operator[](int i)
{
} /* size: 0 */

// <0021A7F1> ../public/scenesystem/memoryvertex.h:43
inline void CMemoryVertexData<SkeletonMeshVertex_t>::operator[](int i)
{
} /* size: 0 */

// <00228215> ../public/scenesystem/memoryvertex.h:51
void CMemoryIndexData::CMemoryIndexData()
{
} /* size: 0 */

// <002281F9> ../public/scenesystem/memoryvertex.h:51
inline void CMemoryIndexData::CMemoryIndexData()
{
} /* size: 0 */

// <002281E2> ../public/scenesystem/memoryvertex.h:51
void CMemoryIndexData::~CMemoryIndexData()
{
} /* size: 0 */

// <002281C6> ../public/scenesystem/memoryvertex.h:51
inline void CMemoryIndexData::~CMemoryIndexData()
{
} /* size: 0 */

// <002124C7> ../public/scenesystem/memoryvertex.h:51
// member functions: 22
// member variable: 1
// class size: 32
class CMemoryIndexData {
	/* ../public/scenesystem/memoryvertex.h:54 */
	void Lock(CMemoryIndexData* , int);
	/* ../public/scenesystem/memoryvertex.h:56 */
	void Unlock(CMemoryIndexData* );
	/* ../public/scenesystem/memoryvertex.h:59 */
	int IndexCount(const CMemoryIndexData* );
	/* ../public/scenesystem/memoryvertex.h:62 */
	void SetCurrentIndexValue(CMemoryIndexData* , int);
	/* ../public/scenesystem/memoryvertex.h:65 */
	const int* Index(CMemoryIndexData* );
	/* ../public/scenesystem/memoryvertex.h:68 */
	void Index(CMemoryIndexData* , int);
	/* ../public/scenesystem/memoryvertex.h:72 */
	void Index2(CMemoryIndexData* , int, int);
	/* ../public/scenesystem/memoryvertex.h:73 */
	void Index3(CMemoryIndexData* , int, int, int);
	/* ../public/scenesystem/memoryvertex.h:75 */
	const int* Base(const CMemoryIndexData* );
private:
	CUtlVector<int, CUtlMemory<int, int> > m_idxData; /* 0 32 */
	void ~CMemoryIndexData(CMemoryIndexData* );
	void CMemoryIndexData(CMemoryIndexData* );
	void Lock(class CMemoryIndexData *, int); /* linkage=_ZN16CMemoryIndexData4LockEi */
	void Unlock(class CMemoryIndexData *); /* linkage=_ZN16CMemoryIndexData6UnlockEv */
	int IndexCount(const class CMemoryIndexData  *); /* linkage=_ZNK16CMemoryIndexData10IndexCountEv */
	void SetCurrentIndexValue(class CMemoryIndexData *, int); /* linkage=_ZN16CMemoryIndexData20SetCurrentIndexValueEi */
	const int  * Index(class CMemoryIndexData *); /* linkage=_ZN16CMemoryIndexData5IndexEv */
	void Index(class CMemoryIndexData *, int); /* linkage=_ZN16CMemoryIndexData5IndexEi */
	void Index2(class CMemoryIndexData *, int, int); /* linkage=_ZN16CMemoryIndexData6Index2Eii */
	void Index3(class CMemoryIndexData *, int, int, int); /* linkage=_ZN16CMemoryIndexData6Index3Eiii */
	const int  * Base(const class CMemoryIndexData  *); /* linkage=_ZNK16CMemoryIndexData4BaseEv */
	void ~CMemoryIndexData(class CMemoryIndexData *); /* linkage=_ZN16CMemoryIndexDataD4Ev */
	void CMemoryIndexData(class CMemoryIndexData *); /* linkage=_ZN16CMemoryIndexDataC4Ev */
};

// <002288BC> ../public/scenesystem/memoryvertex.h:59
inline void CMemoryIndexData::IndexCount()
{
} /* size: 0 */

// <00228897> ../public/scenesystem/memoryvertex.h:68
inline void CMemoryIndexData::Index(int nIndex)
{
} /* size: 0 */

// <0022887E> ../public/scenesystem/memoryvertex.h:75
inline void CMemoryIndexData::Base()
{
} /* size: 0 */

// <0021CE45> ../public/scenesystem/memoryvertex.h:82
// variables: 9
// function calls: 40
void DrawIndexedTriangles<SkeletonMeshVertex_t>(IRenderContext* pRenderContext, ISceneLayer* pLayer, RenderInputLayout_t hLayout, const CMemoryIndexData& indices, const CMemoryVertexData<SkeletonMeshVertex_t>& vertices, const IMaterial2* pMaterial, CRenderAttributes* pAttributes)
{
	const char   __FUNCTION__; // 6555
	int nMaxTrisPerBatch; // 90
	IMaterialMode* pMode; // 92
	int nNumTrisRemaining; // 96
	const int* pIndices; // 98
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 88
	}
	{
		int nNumToDo; // 102
		CDynamicVertexData<SkeletonMeshVertex_t> vb; // 104
		{
			int i; // 106
			{
			}
			Vector::operator=(
					const Vector& vOther);  // 68
			Vector::operator=(
					const Vector& vOther);  // 68
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 68
			SkeletonMeshVertex_t::operator=(
					const SkeletonMeshVertex_t  &);  // 355
			{
			}
			CVertexDataBase<SkeletonMeshVertex_t>::AdvanceVertex(); // 270
			CVertexDataBase<SkeletonMeshVertex_t>::AdvanceVertex(); // 109
			CUtlMemory<SkeletonMeshVertex_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<SkeletonMeshVertex_t, CUtlMemory<SkeletonMeshVertex_t, int> >::operator[](
					int i);  // 43
			CMemoryVertexData<SkeletonMeshVertex_t>::operator[](
					int i);  // 108
			Vector::operator=(
					const Vector& vOther);  // 68
			Vector::operator=(
					const Vector& vOther);  // 68
			VertexColor_t::AsUint32(); // 203
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 68
			SkeletonMeshVertex_t::operator=(
					const SkeletonMeshVertex_t  &);  // 108
		}
		CDynamicVertexData<SkeletonMeshVertex_t>::Unlock(); // 760
		CDynamicVertexData<SkeletonMeshVertex_t>::Unlock(); // 639
		CDynamicVertexData<SkeletonMeshVertex_t>::Bind(
			int nSlot,
			int nOffset,
			int nStride);  // 640
		CDynamicVertexData<SkeletonMeshVertex_t>::UnlockAndBind(
				int nSlot,
				int nOffset,
				int nStride);  // 112
		CDynamicVertexData<SkeletonMeshVertex_t>::Lock(
			int nVertexCount);  // 680
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 180
		CVertexDataBase<SkeletonMeshVertex_t>::ClearVertexFields(); // 171
		Vector::Vector(); // 68
		Vector::Vector(); // 68
		VertexColor_t::VertexColor_t(); // 68
		SkeletonMeshVertex_t::SkeletonMeshVertex_t(); // 165
		CVertexDataBase<SkeletonMeshVertex_t>::CVertexDataBase(); // 673
		CDynamicVertexData<SkeletonMeshVertex_t>::CDynamicVertexData(
					IRenderContext* pRenderContext,
					int nVertexCount,
					const char* pDebugName,
					const char* pBudgetGroup);  // 104
		CDynamicVertexData<SkeletonMeshVertex_t>::Unlock(); // 710
		{
		}
		{
		}
		CVertexDataBase<SkeletonMeshVertex_t>::~CVertexDataBase(); // 194
		CVertexDataBase<SkeletonMeshVertex_t>::~CVertexDataBase(); // 711
		CDynamicVertexData<SkeletonMeshVertex_t>::~CDynamicVertexData(); // 100
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 59
	CMemoryIndexData::IndexCount(); // 88
	ISceneLayer::GetShaderMode(); // 92
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 59
	CMemoryIndexData::IndexCount(); // 96
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 75
	CMemoryIndexData::Base(); // 98
} /* size: 1247, variables: 5, inline expansions: 8 (163 bytes) */

