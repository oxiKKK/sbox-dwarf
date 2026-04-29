
//
// public/meshsystem/imeshutils.h
//
//	referenced by: libmeshsystem.so
//
//	functions: 8
//	classes: 3
//	struct: 1
//

// <002217DD> ../public/meshsystem/imeshutils.h:28
void CSceneSkeletonObject::CSceneSkeletonObject()
{
} /* size: 0 */

// <002217C1> ../public/meshsystem/imeshutils.h:28
inline void CSceneSkeletonObject::CSceneSkeletonObject()
{
} /* size: 0 */

// <00159EBB> ../public/meshsystem/imeshutils.h:28
// member functions: 4
// member variables: 7
// class size: 432
class CSceneSkeletonObject : public CSceneObject {
public:
	/* class CSceneObject <ancestor>; */ /* 0 240 */
	/* ../public/meshsystem/imeshutils.h:31 */
	virtual void ~CSceneSkeletonObject(CSceneSkeletonObject* );
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> > m_worldSpaceTransforms; /* 232 32 */
	CUtlVector<VertexColor_t, CUtlMemory<VertexColor_t, int> > m_jointColors; /* 264 32 */
	CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> > m_jointFlags; /* 296 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_jointBallRadii; /* 328 32 */
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> > m_childIndices; /* 360 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_bonesToRender; /* 392 32 */
	virtual void ~CSceneSkeletonObject(class CSceneSkeletonObject *); /* linkage=_ZN20CSceneSkeletonObjectD4Ev */
	void CSceneSkeletonObject(class CSceneSkeletonObject *, const class CSceneSkeletonObject  &); /* linkage=_ZN20CSceneSkeletonObjectC4ERKS_ */
	void CSceneSkeletonObject(class CSceneSkeletonObject *); /* linkage=_ZN20CSceneSkeletonObjectC4Ev */
} __attribute__((__aligned__(16)));

// <00214E44> ../public/meshsystem/imeshutils.h:28
// member functions: 6
// member variables: 7
// class size: 432
class CSceneSkeletonObject : public CSceneObject {
public:
	/* class CSceneObject <ancestor>; */ /* 0 240 */
	void CSceneSkeletonObject(CSceneSkeletonObject* , const CSceneSkeletonObject& );
	void CSceneSkeletonObject(CSceneSkeletonObject* );
	/* ../public/meshsystem/imeshutils.h:31 */
	virtual void ~CSceneSkeletonObject(CSceneSkeletonObject* );
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> > m_worldSpaceTransforms; /* 232 32 */
	CUtlVector<VertexColor_t, CUtlMemory<VertexColor_t, int> > m_jointColors; /* 264 32 */
	CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> > m_jointFlags; /* 296 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_jointBallRadii; /* 328 32 */
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> > m_childIndices; /* 360 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_bonesToRender; /* 392 32 */
	virtual void ~CSceneSkeletonObject(class CSceneSkeletonObject *); /* linkage=_ZN20CSceneSkeletonObjectD4Ev */
	void CSceneSkeletonObject(class CSceneSkeletonObject *, const class CSceneSkeletonObject  &); /* linkage=_ZN20CSceneSkeletonObjectC4ERKS_ */
	void CSceneSkeletonObject(class CSceneSkeletonObject *); /* linkage=_ZN20CSceneSkeletonObjectC4Ev */
} __attribute__((__aligned__(16)));

// <0022897C> ../public/meshsystem/imeshutils.h:31
// variable: 1
// function calls: 92
void CSceneSkeletonObject::~CSceneSkeletonObject()
{
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 31
	{
		int i; // 1721
		CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::Element(
			int i);  // 1723
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
		CUtlMemory<int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 1526
		Destruct<CUtlVector<int> >(CUtlVector<int, CUtlMemory<int, int> >* pMemory); // 1723
	}
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::Purge(); // 1799
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::Purge(); // 560
	ValidateAlignment<CUtlVector<int> >(void); // 508
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::~CUtlVector(); // 31
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 31
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Purge(); // 903
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Purge(); // 1799
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::Purge(); // 560
	ValidateAlignment<CModelSkeleton::BoneFlags_t>(void); // 508
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Purge(); // 510
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::~CUtlVector(); // 31
	CUtlVectorBase<VertexColor_t, CUtlMemory<VertexColor_t, int> >::RemoveAll(); // 1798
	CUtlMemory<VertexColor_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VertexColor_t, int>::Purge(); // 903
	CUtlMemory<VertexColor_t, int>::Purge(); // 1799
	CUtlVectorBase<VertexColor_t, CUtlMemory<VertexColor_t, int> >::Purge(); // 560
	ValidateAlignment<VertexColor_t>(void); // 508
	CUtlMemory<VertexColor_t, int>::Purge(); // 510
	CUtlMemory<VertexColor_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VertexColor_t, CUtlMemory<VertexColor_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VertexColor_t, CUtlMemory<VertexColor_t, int> >::~CUtlVector(); // 31
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::RemoveAll(); // 1798
	CUtlMemory<matrix3x4a_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 903
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 1799
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Purge(); // 560
	ValidateAlignment<matrix3x4a_t>(void); // 508
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 510
	CUtlMemory<matrix3x4a_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::~CUtlVector(); // 31
	CManagedHandle::~CManagedHandle(); // 1436
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<unsigned int, int>::ConvertToExternalMemory(
				unsigned int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<3, unsigned int, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned int, 3>::~CUtlVectorFixedGrowable(); // 1436
	CSceneObject::~CSceneObject(); // 31
} /* size: 569, inline expansions: 79 (2347 bytes) */

// <00228913> ../public/meshsystem/imeshutils.h:31
void CSceneSkeletonObject::~CSceneSkeletonObject()
{
} /* size: 36 */

// <002288FA> ../public/meshsystem/imeshutils.h:31
inline void CSceneSkeletonObject::~CSceneSkeletonObject()
{
} /* size: 0 */

// <002102E1> ../public/meshsystem/imeshutils.h:42
// member functions: 2
// member variables: 2
// struct size: 8
struct ShowSkeletonJointFilter_t {
	/* ../public/meshsystem/imeshutils.h:44 */
	void ShowSkeletonJointFilter_t(ShowSkeletonJointFilter_t* , int);
	/* ../public/meshsystem/imeshutils.h:49 */
	bool Pass(const ShowSkeletonJointFilter_t* , int32);
	int32 m_nMask; /* 0 4 */
	int32 m_nEqual; /* 4 4 */
};

// <002288D5> ../public/meshsystem/imeshutils.h:49
inline void ShowSkeletonJointFilter_t::Pass(int32 nFlags)
{
} /* size: 0 */

// <0021DD17> ../public/meshsystem/imeshutils.h:61
void IMeshUtils::IMeshUtils()
{
} /* size: 0 */

// <0021DCFB> ../public/meshsystem/imeshutils.h:61
inline void IMeshUtils::IMeshUtils()
{
} /* size: 0 */

// <0019953F> ../public/meshsystem/imeshutils.h:61
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class IMeshUtils : public IAppSystem {
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	void ~IMeshUtils(IMeshUtils* );
	void IMeshUtils(IMeshUtils* , IMeshUtils& );
	void IMeshUtils(IMeshUtils* , const IMeshUtils& );
	void IMeshUtils(IMeshUtils* );
	/* ../public/meshsystem/imeshutils.h:65 */
	virtual CSceneSkeletonObject* CreateSkeletonSceneObject(IMeshUtils* , ISceneWorld* , ESceneObjectFlags, const matrix3x4_t& , const CModelSkeleton* , VertexColor_t* , ShowSkeletonJointFilter_t);
	void ~IMeshUtils(class IMeshUtils *); /* linkage=_ZN10IMeshUtilsD4Ev */
	void IMeshUtils(class IMeshUtils *, class IMeshUtils &); /* linkage=_ZN10IMeshUtilsC4EOS_ */
	void IMeshUtils(class IMeshUtils *, const class IMeshUtils  &); /* linkage=_ZN10IMeshUtilsC4ERKS_ */
	void IMeshUtils(class IMeshUtils *); /* linkage=_ZN10IMeshUtilsC4Ev */
	virtual class CSceneSkeletonObject * CreateSkeletonSceneObject(class IMeshUtils *, class ISceneWorld *, enum ESceneObjectFlags, const class matrix3x4_t  &, const class CModelSkeleton  *, class VertexColor_t *, class ShowSkeletonJointFilter_t); /* linkage=_ZN10IMeshUtils25CreateSkeletonSceneObjectEP11ISceneWorld17ESceneObjectFlagsRK11matrix3x4_tPK14CModelSkeletonP13VertexColor_t25ShowSkeletonJointFilter_t */
};

