
//
// animgraph/animationgraphvisualizationmanager.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 17
//	classes: 2
//

// <00E5B388> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.h:9
void CAnimationGraphVisualizationRegistry::CAnimationGraphVisualizationRegistry()
{
} /* size: 0 */

// <00E5B36C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.h:9
inline void CAnimationGraphVisualizationRegistry::CAnimationGraphVisualizationRegistry()
{
} /* size: 0 */

// <00E5B207> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.h:9
// function calls: 7
void CAnimationGraphVisualizationRegistry::~CAnimationGraphVisualizationRegistry()
{
	CUtlMemory<IAnimationGraphVisualizerInfo::IsExternallyAllocated(); // 905
	CUtlMemory<IAnimationGraphVisualizerInfo::Purge(); // 903
	CUtlMemory<IAnimationGraphVisualizerInfo::Purge(); // 1799
	CUtlVectorBase<IAnimationGraphVisualizerInfo::RemoveAll(); // 1798
	CUtlVectorBase<IAnimationGraphVisualizerInfo::Purge(); // 560
	CUtlVectorBase<IAnimationGraphVisualizerInfo::~CUtlVectorBase(); // 410
	CUtlVector<IAnimationGraphVisualizerInfo::~CUtlVector(); // 9
} /* size: 49, inline expansions: 7 (154 bytes) */

// <00E5AF99> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.h:9
// function calls: 12
void CAnimationGraphVisualizationRegistry::~CAnimationGraphVisualizationRegistry()
{
	CUtlMemory<IAnimationGraphVisualizerInfo::IsExternallyAllocated(); // 905
	CUtlMemory<IAnimationGraphVisualizerInfo::Purge(); // 903
	CUtlMemory<IAnimationGraphVisualizerInfo::Purge(); // 1799
	CUtlVectorBase<IAnimationGraphVisualizerInfo::RemoveAll(); // 1798
	CUtlVectorBase<IAnimationGraphVisualizerInfo::Purge(); // 560
	ValidateAlignment<IAnimationGraphVisualizerInfo*>(void); // 508
	CUtlMemory<IAnimationGraphVisualizerInfo::Purge(); // 510
	CUtlMemory<IAnimationGraphVisualizerInfo::~CUtlMemory(); // 562
	CUtlVectorBase<IAnimationGraphVisualizerInfo::~CUtlVectorBase(); // 410
	CUtlVector<IAnimationGraphVisualizerInfo::~CUtlVector(); // 9
	IAnimationGraphVisualizerRegistry::~IAnimationGraphVisualizerRegistry(); // 9
	CAnimationGraphVisualizationRegistry::~CAnimationGraphVisualizationRegistry(); // 9
} /* size: 93, inline expansions: 12 (198 bytes) */

// <00E5AF7D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.h:9
inline void CAnimationGraphVisualizationRegistry::~CAnimationGraphVisualizationRegistry()
{
} /* size: 0 */

// <00DF2BCB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.h:9
// member functions: 14
// member variables: 2
// vtable entries: 2
// class size: 40
class CAnimationGraphVisualizationRegistry : public IAnimationGraphVisualizerRegistry {
public:
	/* class IAnimationGraphVisualizerRegistry <ancestor>; */ /* 0 8 */
	void CAnimationGraphVisualizationRegistry(CAnimationGraphVisualizationRegistry* , CAnimationGraphVisualizationRegistry& );
	void CAnimationGraphVisualizationRegistry(CAnimationGraphVisualizationRegistry* , const CAnimationGraphVisualizationRegistry& );
	void CAnimationGraphVisualizationRegistry(CAnimationGraphVisualizationRegistry* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:5 */
	IAnimationGraphVisualizerRegistry* GetVisualizerRegistry(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.h:14 */
	virtual void Register(CAnimationGraphVisualizationRegistry* , IAnimationGraphVisualizerInfo* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.h:19 */
	virtual CUtlVector<IAnimationGraphVisualizerInfo*, CUtlMemory<IAnimationGraphVisualizerInfo*, int> > GetVisualizers(CAnimationGraphVisualizationRegistry* );
private:
	CUtlVector<IAnimationGraphVisualizerInfo*, CUtlMemory<IAnimationGraphVisualizerInfo*, int> > m_VisualizerInfos; /* 8 32 */
	virtual void ~CAnimationGraphVisualizationRegistry(CAnimationGraphVisualizationRegistry* );
	void CAnimationGraphVisualizationRegistry(class CAnimationGraphVisualizationRegistry *, class CAnimationGraphVisualizationRegistry &); /* linkage=_ZN36CAnimationGraphVisualizationRegistryC4EOS_ */
	void CAnimationGraphVisualizationRegistry(class CAnimationGraphVisualizationRegistry *, const class CAnimationGraphVisualizationRegistry  &); /* linkage=_ZN36CAnimationGraphVisualizationRegistryC4ERKS_ */
	void CAnimationGraphVisualizationRegistry(class CAnimationGraphVisualizationRegistry *); /* linkage=_ZN36CAnimationGraphVisualizationRegistryC4Ev */
	/* <e8ed87> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:5 */
	class IAnimationGraphVisualizerRegistry * GetVisualizerRegistry(void); /* linkage=_ZN36CAnimationGraphVisualizationRegistry21GetVisualizerRegistryEv */
	/* <e926f1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.h:14 */
	virtual void Register(class CAnimationGraphVisualizationRegistry *, class IAnimationGraphVisualizerInfo *); /* linkage=_ZN36CAnimationGraphVisualizationRegistry8RegisterEP29IAnimationGraphVisualizerInfo */
	virtual class CUtlVector<IAnimationGraphVisualizerInfo*, CUtlMemory<IAnimationGraphVisualizerInfo*, int> > GetVisualizers(class CAnimationGraphVisualizationRegistry *); /* linkage=_ZN36CAnimationGraphVisualizationRegistry14GetVisualizersEv */
	virtual void ~CAnimationGraphVisualizationRegistry(class CAnimationGraphVisualizationRegistry *); /* linkage=_ZN36CAnimationGraphVisualizationRegistryD4Ev */
};

// <00E926F1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.h:14
// function calls: 9
void CAnimationGraphVisualizationRegistry::Register(IAnimationGraphVisualizerInfo* pVisualizer)
{
	CUtlMemory<IAnimationGraphVisualizerInfo::NumAllocated(); // 1196
	CUtlMemory<IAnimationGraphVisualizerInfo::operator[](
			int i);  // 602
	CUtlVectorBase<IAnimationGraphVisualizerInfo::Element(
		int i);  // 1201
	CopyConstruct<IAnimationGraphVisualizerInfo*>(IAnimationGraphVisualizerInfo** pMemory,
							IAnimationGraphVisualizerInfo* const& src);  // 1201
	CUtlMemory<IAnimationGraphVisualizerInfo::Base(); // 112
	CUtlVectorBase<IAnimationGraphVisualizerInfo::Base(); // 368
	CUtlVectorBase<IAnimationGraphVisualizerInfo::ResetDbgInfo(); // 824
	CUtlVectorBase<IAnimationGraphVisualizerInfo::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<IAnimationGraphVisualizerInfo::AddToTail(
			IAnimationGraphVisualizerInfo* const& src);  // 16
} /* size: 108, inline expansions: 9 (170 bytes) */

// <00E8198D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.h:14
inline void CAnimationGraphVisualizationRegistry::Register(IAnimationGraphVisualizerInfo* pVisualizer)
{
} /* size: 0 */

// <00E81366> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.h:19
// function calls: 26
void CAnimationGraphVisualizationRegistry::GetVisualizers()
{
	CUtlVectorBase<IAnimationGraphVisualizerInfo::Count(); // 573
	CUtlMemory<IAnimationGraphVisualizerInfo::Base(); // 112
	CUtlVectorBase<IAnimationGraphVisualizerInfo::Base(); // 368
	CUtlVectorBase<IAnimationGraphVisualizerInfo::ResetDbgInfo(); // 824
	CUtlVectorBase<IAnimationGraphVisualizerInfo::GrowMemory(
			int num);  // 784
	CUtlVectorBase<IAnimationGraphVisualizerInfo::GrowVector(
			int num);  // 1445
	CUtlVectorBase<IAnimationGraphVisualizerInfo::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<IAnimationGraphVisualizerInfo::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<IAnimationGraphVisualizerInfo::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<IAnimationGraphVisualizerInfo::SetCount(
		int count);  // 573
	CUtlMemory<IAnimationGraphVisualizerInfo::Base(); // 113
	CUtlVectorBase<IAnimationGraphVisualizerInfo::Base(); // 105
	CUtlVectorBase<IAnimationGraphVisualizerInfo::Count(); // 105
	CUtlVectorBase<IAnimationGraphVisualizerInfo::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<IAnimationGraphVisualizerInfo*>(IAnimationGraphVisualizerInfo* const* pFrom,
								IAnimationGraphVisualizerInfo* const* pFromEnd,
								IAnimationGraphVisualizerInfo** pTo);  // 173
	UtlTraitsCopyRange<IAnimationGraphVisualizerInfo*>(IAnimationGraphVisualizerInfo* const* pFrom,
								IAnimationGraphVisualizerInfo* const* pFromEnd,
								IAnimationGraphVisualizerInfo** pTo);  // 574
	CUtlVectorBase<IAnimationGraphVisualizerInfo::operator=(
			const CUtlVectorBase<IAnimationGraphVisualizerInfo*, CUtlMemory<IAnimationGraphVisualizerInfo*, int> >& other);  // 565
	CUtlVectorBase<IAnimationGraphVisualizerInfo::operator=(
			const CUtlVectorBase<IAnimationGraphVisualizerInfo*, CUtlMemory<IAnimationGraphVisualizerInfo*, int> >& other);  // 452
	CUtlVector<IAnimationGraphVisualizerInfo::operator=(
			const CUtlVector<IAnimationGraphVisualizerInfo*, CUtlMemory<IAnimationGraphVisualizerInfo*, int> >& src);  // 434
	CUtlMemory<IAnimationGraphVisualizerInfo::ValidateGrowSize(); // 475
	CUtlMemory<IAnimationGraphVisualizerInfo::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<IAnimationGraphVisualizerInfo::ResetDbgInfo(); // 530
	CUtlVectorBase<IAnimationGraphVisualizerInfo::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 434
	CUtlVector<IAnimationGraphVisualizerInfo::CUtlVector(
			const CUtlVector<IAnimationGraphVisualizerInfo*, CUtlMemory<IAnimationGraphVisualizerInfo*, int> >& src);  // 21
} /* size: 146, inline expansions: 26 (635 bytes) */

// <00DFD240> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.h:28
// function calls: 10
void CAnimationGraphVisualizationManager::~CAnimationGraphVisualizationManager()
{
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 1799
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::RemoveAll(); // 1798
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Purge(); // 560
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::~CUtlVector(); // 28
} /* size: 97, inline expansions: 10 (154 bytes) */

// <00DFCF22> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.h:28
// function calls: 15
void CAnimationGraphVisualizationManager::~CAnimationGraphVisualizationManager()
{
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 1799
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::RemoveAll(); // 1798
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Purge(); // 560
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::~CUtlVector(); // 28
	IAnimationDebugRenderer::~IAnimationDebugRenderer(); // 229
	IAnimationGraphVisualizationManager::~IAnimationGraphVisualizationManager(); // 28
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 28
	CAnimationGraphVisualizationManager::~CAnimationGraphVisualizationManager(); // 28
} /* size: 93, inline expansions: 15 (193 bytes) */

// <00DFCF06> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.h:28
inline void CAnimationGraphVisualizationManager::~CAnimationGraphVisualizationManager()
{
} /* size: 0 */

// <00DAA516> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.h:28
// member functions: 38
// member variables: 4
// vtable entries: 14
// class size: 72
class CAnimationGraphVisualizationManager : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >, public IAnimationGraphVisualizationManager {
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	/* class IAnimationGraphVisualizationManager <ancestor>; */ /* 16 8 */
	void CAnimationGraphVisualizationManager(CAnimationGraphVisualizationManager* , CAnimationGraphVisualizationManager& );
	void CAnimationGraphVisualizationManager(CAnimationGraphVisualizationManager* , const CAnimationGraphVisualizationManager& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.h:31 */
	void CAnimationGraphVisualizationManager(CAnimationGraphVisualizationManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.h:36 */
	virtual const KeyValues3& GetVisualizerPrimitivesData(const CAnimationGraphVisualizationManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.h:41 */
	virtual void ClearVisualizerPrimitivesData(CAnimationGraphVisualizationManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:31 */
	virtual void PushTransform(CAnimationGraphVisualizationManager* , const CTransform& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:36 */
	virtual void PopTransform(CAnimationGraphVisualizationManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:97 */
	virtual void Line(CAnimationGraphVisualizationManager* , const VectorAligned& , const VectorAligned& , const VertexColor_t& , const CUtlString& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:156 */
	virtual void Sphere(CAnimationGraphVisualizationManager* , const VectorAligned& , float, const VertexColor_t& , const CUtlString& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:164 */
	virtual void Axis(CAnimationGraphVisualizationManager* , const CTransform& , float, const CUtlString& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:105 */
	virtual void Box(CAnimationGraphVisualizationManager* , const VectorAligned& , const QuaternionAligned& , const VectorAligned& , const VertexColor_t& , const CUtlString& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:144 */
	virtual void Pie(CAnimationGraphVisualizationManager* , const VectorAligned& , const VectorAligned& , const VectorAligned& , float, float, const VertexColor_t& , const CUtlString& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:66 */
	virtual void AddPie(CAnimationGraphVisualizationManager* , const VectorAligned& , const VectorAligned& , const VectorAligned& , const VertexColor_t& , const CUtlString& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:56 */
	virtual void AddText(CAnimationGraphVisualizationManager* , const VectorAligned& , const VertexColor_t& , const CUtlString& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:74 */
	virtual void AddAxis(CAnimationGraphVisualizationManager* , const VectorAligned& , const QuaternionAligned& , float, const CUtlString& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:79 */
	virtual void AddAxis(CAnimationGraphVisualizationManager* , const CTransform& , float, const CUtlString& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:87 */
	virtual IAnimationGraphVisualizationManager* GetVisualizerIfShouldVisualize(CAnimationGraphVisualizationManager* , const IAnimationGraphVisualizerInfo* , int);
private:
	KeyValues3 m_Primitives; /* 24 16 */
	CUtlVector<CTransform, CUtlMemory<CTransform, int> > m_Transforms; /* 40 32 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:44 */
	CTransform GetTransform(const CAnimationGraphVisualizationManager* );
	virtual void ~CAnimationGraphVisualizationManager(CAnimationGraphVisualizationManager* );
	void CAnimationGraphVisualizationManager(class CAnimationGraphVisualizationManager *, class CAnimationGraphVisualizationManager &); /* linkage=_ZN35CAnimationGraphVisualizationManagerC4EOS_ */
	void CAnimationGraphVisualizationManager(class CAnimationGraphVisualizationManager *, const class CAnimationGraphVisualizationManager  &); /* linkage=_ZN35CAnimationGraphVisualizationManagerC4ERKS_ */
	void CAnimationGraphVisualizationManager(class CAnimationGraphVisualizationManager *); /* linkage=_ZN35CAnimationGraphVisualizationManagerC4Ev */
	/* <e89db3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.h:36 */
	virtual const class KeyValues3  & GetVisualizerPrimitivesData(const class CAnimationGraphVisualizationManager  *); /* linkage=_ZNK35CAnimationGraphVisualizationManager27GetVisualizerPrimitivesDataEv */
	/* <e8a882> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.h:41 */
	virtual void ClearVisualizerPrimitivesData(class CAnimationGraphVisualizationManager *); /* linkage=_ZN35CAnimationGraphVisualizationManager29ClearVisualizerPrimitivesDataEv */
	virtual void PushTransform(class CAnimationGraphVisualizationManager *, const class CTransform  &); /* linkage=_ZN35CAnimationGraphVisualizationManager13PushTransformERK10CTransform */
	virtual void PopTransform(class CAnimationGraphVisualizationManager *); /* linkage=_ZN35CAnimationGraphVisualizationManager12PopTransformEv */
	virtual void Line(class CAnimationGraphVisualizationManager *, const class VectorAligned  &, const class VectorAligned  &, const class VertexColor_t  &, const class CUtlString  &); /* linkage=_ZN35CAnimationGraphVisualizationManager4LineERK13VectorAlignedS2_RK13VertexColor_tRK10CUtlString */
	virtual void Sphere(class CAnimationGraphVisualizationManager *, const class VectorAligned  &, float, const class VertexColor_t  &, const class CUtlString  &); /* linkage=_ZN35CAnimationGraphVisualizationManager6SphereERK13VectorAlignedfRK13VertexColor_tRK10CUtlString */
	/* <e8a241> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:164 */
	virtual void Axis(class CAnimationGraphVisualizationManager *, const class CTransform  &, float, const class CUtlString  &); /* linkage=_ZN35CAnimationGraphVisualizationManager4AxisERK10CTransformfRK10CUtlString */
	virtual void Box(class CAnimationGraphVisualizationManager *, const class VectorAligned  &, const class QuaternionAligned  &, const class VectorAligned  &, const class VertexColor_t  &, const class CUtlString  &); /* linkage=_ZN35CAnimationGraphVisualizationManager3BoxERK13VectorAlignedRK17QuaternionAlignedS2_RK13VertexColor_tRK10CUtlString */
	virtual void Pie(class CAnimationGraphVisualizationManager *, const class VectorAligned  &, const class VectorAligned  &, const class VectorAligned  &, float, float, const class VertexColor_t  &, const class CUtlString  &); /* linkage=_ZN35CAnimationGraphVisualizationManager3PieERK13VectorAlignedS2_S2_ffRK13VertexColor_tRK10CUtlString */
	virtual void AddPie(class CAnimationGraphVisualizationManager *, const class VectorAligned  &, const class VectorAligned  &, const class VectorAligned  &, const class VertexColor_t  &, const class CUtlString  &); /* linkage=_ZN35CAnimationGraphVisualizationManager6AddPieERK13VectorAlignedS2_S2_RK13VertexColor_tRK10CUtlString */
	/* <e911ec> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:56 */
	virtual void AddText(class CAnimationGraphVisualizationManager *, const class VectorAligned  &, const class VertexColor_t  &, const class CUtlString  &); /* linkage=_ZN35CAnimationGraphVisualizationManager7AddTextERK13VectorAlignedRK13VertexColor_tRK10CUtlString */
	/* <e89f1a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:74 */
	virtual void AddAxis(class CAnimationGraphVisualizationManager *, const class VectorAligned  &, const class QuaternionAligned  &, float, const class CUtlString  &); /* linkage=_ZN35CAnimationGraphVisualizationManager7AddAxisERK13VectorAlignedRK17QuaternionAlignedfRK10CUtlString */
	virtual void AddAxis(class CAnimationGraphVisualizationManager *, const class CTransform  &, float, const class CUtlString  &); /* linkage=_ZN35CAnimationGraphVisualizationManager7AddAxisERK10CTransformfRK10CUtlString */
	virtual class IAnimationGraphVisualizationManager * GetVisualizerIfShouldVisualize(class CAnimationGraphVisualizationManager *, const class IAnimationGraphVisualizerInfo  *, int); /* linkage=_ZN35CAnimationGraphVisualizationManager30GetVisualizerIfShouldVisualizeEPK29IAnimationGraphVisualizerInfoi */
	class CTransform GetTransform(const class CAnimationGraphVisualizationManager  *); /* linkage=_ZNK35CAnimationGraphVisualizationManager12GetTransformEv */
	virtual void ~CAnimationGraphVisualizationManager(class CAnimationGraphVisualizationManager *); /* linkage=_ZN35CAnimationGraphVisualizationManagerD4Ev */
};

// <00E812E9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.h:31
void CAnimationGraphVisualizationManager::CAnimationGraphVisualizationManager()
{
} /* size: 0 */

// <00E812D0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.h:31
inline void CAnimationGraphVisualizationManager::CAnimationGraphVisualizationManager()
{
} /* size: 0 */

// <00E89DB3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.h:36
void CAnimationGraphVisualizationManager::GetVisualizerPrimitivesData()
{
} /* size: 9 */

// <00E812B7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.h:36
inline void CAnimationGraphVisualizationManager::GetVisualizerPrimitivesData()
{
} /* size: 0 */

// <00E8A882> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.h:41
void CAnimationGraphVisualizationManager::ClearVisualizerPrimitivesData()
{
} /* size: 13 */

// <00E8129E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.h:41
inline void CAnimationGraphVisualizationManager::ClearVisualizerPrimitivesData()
{
} /* size: 0 */

