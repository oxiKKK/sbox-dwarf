
//
// sbox/dynamicsceneobject.h
//
//	referenced by: libengine2.so
//
//	functions: 6
//	class: 1
//

// <01B5A2F4> sbox/dynamicsceneobject.h:13
void CDynamicSceneObject::CDynamicSceneObject()
{
} /* size: 0 */

// <01B5A2D8> sbox/dynamicsceneobject.h:13
inline void CDynamicSceneObject::CDynamicSceneObject()
{
} /* size: 0 */

// <01B55E0C> sbox/dynamicsceneobject.h:13
// function calls: 29
void CDynamicSceneObject::~CDynamicSceneObject()
{
	CUtlVectorBase<SboxVertex_t, CUtlMemory<SboxVertex_t, int> >::RemoveAll(); // 1798
	CUtlMemory<SboxVertex_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<SboxVertex_t, int>::Purge(); // 903
	CUtlMemory<SboxVertex_t, int>::Purge(); // 1799
	CUtlVectorBase<SboxVertex_t, CUtlMemory<SboxVertex_t, int> >::Purge(); // 560
	ValidateAlignment<SboxVertex_t>(void); // 508
	CUtlMemory<SboxVertex_t, int>::Purge(); // 510
	CUtlMemory<SboxVertex_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<SboxVertex_t, CUtlMemory<SboxVertex_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<SboxVertex_t, CUtlMemory<SboxVertex_t, int> >::~CUtlVector(); // 13
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
	CSceneObject::~CSceneObject(); // 13
} /* size: 217, inline expansions: 29 (866 bytes) */

// <01B557FC> sbox/dynamicsceneobject.h:13
// function calls: 31
void CDynamicSceneObject::~CDynamicSceneObject()
{
	CUtlVectorBase<SboxVertex_t, CUtlMemory<SboxVertex_t, int> >::RemoveAll(); // 1798
	CUtlMemory<SboxVertex_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<SboxVertex_t, int>::Purge(); // 903
	CUtlMemory<SboxVertex_t, int>::Purge(); // 1799
	CUtlVectorBase<SboxVertex_t, CUtlMemory<SboxVertex_t, int> >::Purge(); // 560
	ValidateAlignment<SboxVertex_t>(void); // 508
	CUtlMemory<SboxVertex_t, int>::Purge(); // 510
	CUtlMemory<SboxVertex_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<SboxVertex_t, CUtlMemory<SboxVertex_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<SboxVertex_t, CUtlMemory<SboxVertex_t, int> >::~CUtlVector(); // 13
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
	IGenericInterface::~IGenericInterface(); // 1436
	CSceneObject::~CSceneObject(); // 13
	CDynamicSceneObject::~CDynamicSceneObject(); // 13
} /* size: 225, inline expansions: 31 (1025 bytes) */

// <01B557E0> sbox/dynamicsceneobject.h:13
inline void CDynamicSceneObject::~CDynamicSceneObject()
{
} /* size: 0 */

// <01B540E3> sbox/dynamicsceneobject.h:13
// member functions: 22
// member variables: 4
// vtable entry: 1
// class size: 288
class CDynamicSceneObject : public CSceneObject {
public:
	/* class CSceneObject <ancestor>; */ /* 0 240 */
	void CDynamicSceneObject(CDynamicSceneObject* , CDynamicSceneObject& );
	void CDynamicSceneObject(CDynamicSceneObject* , const CDynamicSceneObject& );
	void CDynamicSceneObject(CDynamicSceneObject* );
	/* sbox/dynamicsceneobject.cpp:141 */
	CDynamicSceneObject* Create(ISceneWorld* );
	/* sbox/dynamicsceneobject.h:20 */
	virtual void InitManagedHandle(CDynamicSceneObject* );
	HMaterial Material; /* 232 8 */
	CUtlVector<SboxVertex_t, CUtlMemory<SboxVertex_t, int> > Vertices; /* 240 32 */
	RenderPrimitiveType_t PrimitiveType; /* 272 4 */
	/* sbox/dynamicsceneobject.cpp:157 */
	void Begin(CDynamicSceneObject* , RenderPrimitiveType_t, int);
	/* sbox/dynamicsceneobject.cpp:163 */
	void End(CDynamicSceneObject* );
	/* sbox/dynamicsceneobject.cpp:168 */
	void AddVertex(CDynamicSceneObject* , SboxVertex_t& );
	/* sbox/dynamicsceneobject.cpp:173 */
	void AddVertexRange(CDynamicSceneObject* , void* , int);
	/* sbox/dynamicsceneobject.cpp:179 */
	void Reset(CDynamicSceneObject* );
	virtual void ~CDynamicSceneObject(CDynamicSceneObject* );
	void Reset(class CDynamicSceneObject *); /* linkage=_ZN19CDynamicSceneObject5ResetEv */
	void AddVertexRange(class CDynamicSceneObject *, void *, int); /* linkage=_ZN19CDynamicSceneObject14AddVertexRangeEPvi */
	void AddVertex(class CDynamicSceneObject *, class SboxVertex_t &); /* linkage=_ZN19CDynamicSceneObject9AddVertexER12SboxVertex_t */
	void End(class CDynamicSceneObject *); /* linkage=_ZN19CDynamicSceneObject3EndEv */
	void Begin(class CDynamicSceneObject *, enum RenderPrimitiveType_t, int); /* linkage=_ZN19CDynamicSceneObject5BeginE21RenderPrimitiveType_ti */
	class CDynamicSceneObject * Create(class ISceneWorld *); /* linkage=_ZN19CDynamicSceneObject6CreateEP11ISceneWorld */
	void CDynamicSceneObject(class CDynamicSceneObject *, class CDynamicSceneObject &); /* linkage=_ZN19CDynamicSceneObjectC4EOS_ */
	void CDynamicSceneObject(class CDynamicSceneObject *, const class CDynamicSceneObject  &); /* linkage=_ZN19CDynamicSceneObjectC4ERKS_ */
	void CDynamicSceneObject(class CDynamicSceneObject *); /* linkage=_ZN19CDynamicSceneObjectC4Ev */
	virtual void InitManagedHandle(class CDynamicSceneObject *); /* linkage=_ZN19CDynamicSceneObject17InitManagedHandleEv */
	virtual void ~CDynamicSceneObject(class CDynamicSceneObject *); /* linkage=_ZN19CDynamicSceneObjectD4Ev */
} __attribute__((__aligned__(16)));

// <01B5ED43> sbox/dynamicsceneobject.h:20
void CDynamicSceneObject::InitManagedHandle()
{
} /* size: 96 */

