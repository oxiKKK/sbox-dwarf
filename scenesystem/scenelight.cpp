
//
// scenesystem/scenelight.cpp
//
//	referenced by: libengine2.so
//
//	functions: 42
//	classes: 3
//

// <0306D57C> ../scenesystem/scenelight.cpp:27
// function calls: 33
void CSceneLightObjectInternal::CSceneLightObjectInternal()
{
	IGenericInterface::IGenericInterface(); // 1428
	{
	}
	AlignedByteArrayExplicit_t<3, unsigned int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<3, unsigned int>::AlignedByteArray_t(); // 228
	CUtlMemory<unsigned int, int>::CUtlMemory(
			unsigned int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<unsigned int, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::CUtlMemoryFixedGrowable_Base(
					unsigned int* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<3, unsigned int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<unsigned int, 3>::CUtlVectorFixedGrowable(
				int growSize);  // 1428
	matrix3x4_t::matrix3x4_t(); // 303
	matrix3x4a_t::matrix3x4a_t(); // 1428
	CUtlStringToken::CUtlStringToken(); // 1428
	CManagedHandle::CManagedHandle(); // 1428
	CSceneObject::CSceneObject(); // 2612
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(); // 217
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(); // 153
	CUtlStringToken::CUtlStringToken(); // 153
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	Vector::operator=(
			const Vector& vOther);  // 268
	Vector::operator=(
			const Vector& vOther);  // 269
	LightDesc_t::Clear(); // 154
	LightDesc_t::LightDesc_t(); // 2612
	CSceneLightObject::CSceneLightObject(); // 27
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 29
} /* size: 618, inline expansions: 33 (1553 bytes) */

// <0306D563> ../scenesystem/scenelight.cpp:27
void CSceneLightObjectInternal::CSceneLightObjectInternal()
{
} /* size: 0 */

// <0306632E> ../scenesystem/scenelight.cpp:35
void CLightObjectDesc::CLightObjectDesc()
{
} /* size: 0 */

// <03066312> ../scenesystem/scenelight.cpp:35
inline void CLightObjectDesc::CLightObjectDesc()
{
} /* size: 0 */

// <03059A5C> ../scenesystem/scenelight.cpp:35
// function calls: 38
void CLightObjectDesc::~CLightObjectDesc()
{
	CUtlVectorBase<ISceneLightListener::RemoveAll(); // 1798
	CUtlMemory<ISceneLightListener::IsExternallyAllocated(); // 577
	CUtlMemory<ISceneLightListener::ConvertToExternalMemory(
				ISceneLightListener** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<ISceneLightListener::Purge_FixedGrowable(
				ISceneLightListener** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<ISceneLightListener::Purge_FixedGrowable(
				ISceneLightListener** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<4, ISceneLightListener::Base(); // 237
	CUtlMemoryFixedGrowable<ISceneLightListener::Purge(
		int numElements);  // 1799
	CUtlVectorBase<ISceneLightListener::ResetDbgInfo(); // 1800
	CUtlVectorBase<ISceneLightListener::Purge(); // 560
	ValidateAlignment<ISceneLightListener*>(void); // 508
	CUtlMemory<ISceneLightListener::Purge(); // 903
	CUtlMemory<ISceneLightListener::Purge(); // 510
	CUtlMemory<ISceneLightListener::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<ISceneLightListener::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<ISceneLightListener::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<ISceneLightListener::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<ISceneLightListener::~CUtlVectorFixedGrowable(); // 35
	CUtlVectorBase<CSceneLightObjectInternal::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<128, CSceneLightObjectInternal::Base(); // 237
	CUtlMemory<CSceneLightObjectInternal::IsExternallyAllocated(); // 577
	CUtlMemory<CSceneLightObjectInternal::ConvertToExternalMemory(
				CSceneLightObjectInternal** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CSceneLightObjectInternal::Purge_FixedGrowable(
				CSceneLightObjectInternal** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CSceneLightObjectInternal::Purge_FixedGrowable(
				CSceneLightObjectInternal** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CSceneLightObjectInternal::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CSceneLightObjectInternal::ResetDbgInfo(); // 1800
	CUtlVectorBase<CSceneLightObjectInternal::Purge(); // 560
	ValidateAlignment<CSceneLightObjectInternal*>(void); // 508
	CUtlMemory<CSceneLightObjectInternal::Purge(); // 903
	CUtlMemory<CSceneLightObjectInternal::Purge(); // 510
	CUtlMemory<CSceneLightObjectInternal::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CSceneLightObjectInternal::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CSceneLightObjectInternal::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CSceneLightObjectInternal::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CSceneLightObjectInternal::~CUtlVectorFixedGrowable(); // 35
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadMutex::~CThreadMutex(); // 2084
	CThreadRWLock::~CThreadRWLock(); // 35
} /* size: 292, inline expansions: 38 (1364 bytes) */

// <03059A40> ../scenesystem/scenelight.cpp:35
inline void CLightObjectDesc::~CLightObjectDesc()
{
} /* size: 0 */

// <03054F54> ../scenesystem/scenelight.cpp:35
// member functions: 22
// member variables: 4
// vtable entries: 4
// class size: 1,472
class CLightObjectDesc : public ISceneObjectDescBase<CSceneLightObjectInternal> {
public:
	/* class ISceneObjectDescBase<CSceneLightObjectInternal> <ancestor>; */ /* 0 8 */
	void CLightObjectDesc(CLightObjectDesc* , CLightObjectDesc& );
	void CLightObjectDesc(CLightObjectDesc* , const CLightObjectDesc& );
	void CLightObjectDesc(CLightObjectDesc* );
	/* ../scenesystem/scenelight.cpp:38 */
	virtual const char* GetTypeName(CLightObjectDesc* );
	/* ../scenesystem/scenelight.cpp:44 */
	virtual bool OnSceneObjectVisibleInView(CLightObjectDesc* , const ISceneView* , VisibleSceneObject_t* );
	/* ../scenesystem/scenelight.cpp:67 */
	void ForEachLight(CLightObjectDesc* , const function<void(CSceneLightObjectInternal*)>& );
	/* ../scenesystem/scenelight.cpp:75 */
	void RegisterListener(CLightObjectDesc* , ISceneLightListener* );
	/* ../scenesystem/scenelight.cpp:84 */
	void UnregisterListener(CLightObjectDesc* , ISceneLightListener* );
protected:
	/* ../scenesystem/scenelight.cpp:104 */
	virtual CSceneObject* Create(CLightObjectDesc* );
	/* ../scenesystem/scenelight.cpp:123 */
	virtual void DeleteNonPooledObject(CLightObjectDesc* , CSceneObject* );
	CThreadRWLock m_Mutex; /* 8 344 */
	CUtlVectorFixedGrowable<CSceneLightObjectInternal*, 128> m_LightList __attribute__((__aligned__(8))); /* 352 1056 */
	CUtlVectorFixedGrowable<ISceneLightListener*, 4> m_LightListenerList __attribute__((__aligned__(8))); /* 1408 64 */
	void ~CLightObjectDesc(CLightObjectDesc* );
	void CLightObjectDesc(class CLightObjectDesc *, class CLightObjectDesc &); /* linkage=_ZN16CLightObjectDescC4EOS_ */
	void CLightObjectDesc(class CLightObjectDesc *, const class CLightObjectDesc  &); /* linkage=_ZN16CLightObjectDescC4ERKS_ */
	void CLightObjectDesc(class CLightObjectDesc *); /* linkage=_ZN16CLightObjectDescC4Ev */
	virtual const char  * GetTypeName(class CLightObjectDesc *); /* linkage=_ZN16CLightObjectDesc11GetTypeNameEv */
	virtual bool OnSceneObjectVisibleInView(class CLightObjectDesc *, const class ISceneView  *, class VisibleSceneObject_t *); /* linkage=_ZN16CLightObjectDesc26OnSceneObjectVisibleInViewEPK10ISceneViewP20VisibleSceneObject_t */
	void ForEachLight(class CLightObjectDesc *, const class function<void(CSceneLightObjectInternal*)>  &); /* linkage=_ZN16CLightObjectDesc12ForEachLightERKSt8functionIFvP25CSceneLightObjectInternalEE */
	void RegisterListener(class CLightObjectDesc *, class ISceneLightListener *); /* linkage=_ZN16CLightObjectDesc16RegisterListenerEP19ISceneLightListener */
	void UnregisterListener(class CLightObjectDesc *, class ISceneLightListener *); /* linkage=_ZN16CLightObjectDesc18UnregisterListenerEP19ISceneLightListener */
	virtual class CSceneObject * Create(class CLightObjectDesc *); /* linkage=_ZN16CLightObjectDesc6CreateEv */
	virtual void DeleteNonPooledObject(class CLightObjectDesc *, class CSceneObject *); /* linkage=_ZN16CLightObjectDesc21DeleteNonPooledObjectEP12CSceneObject */
	void ~CLightObjectDesc(class CLightObjectDesc *); /* linkage=_ZN16CLightObjectDescD4Ev */
} __attribute__((__aligned__(8)));

// <0306D535> ../scenesystem/scenelight.cpp:38
void CLightObjectDesc::GetTypeName()
{
} /* size: 12 */

// <0306D2FA> ../scenesystem/scenelight.cpp:44
// variables: 4
// function calls: 6
void CLightObjectDesc::OnSceneObjectVisibleInView(const ISceneView* pView, VisibleSceneObject_t* pVisible)
{
	CLightBinnerStandard* pLightBinner; // 46
	const CUtlVector<ISceneSystemListener*, CUtlMemory<ISceneSystemListener*, int> >& listeners; // 57
	{
		int i; // 52
		CUtlVectorBase<ISceneLightListener::Count(); // 52
		CUtlMemory<ISceneLightListener::operator[](
				int i);  // 588
		CUtlVectorBase<ISceneLightListener::operator[](
				int i);  // 54
	}
	{
		int i; // 59
		CUtlVectorBase<ISceneSystemListener::Count(); // 59
		CUtlMemory<ISceneSystemListener::operator[](
				int i);  // 595
		CUtlVectorBase<ISceneSystemListener::operator[](
				int i);  // 61
	}
} /* size: 164, variables: 2 */

// <0306D280> ../scenesystem/scenelight.cpp:75
inline void CLightObjectDesc::RegisterListener(ISceneLightListener* pListener)
{
} /* size: 0 */

// <0306D25B> ../scenesystem/scenelight.cpp:84
inline void CLightObjectDesc::UnregisterListener(ISceneLightListener* pListener)
{
} /* size: 0 */

// <0306CCFA> ../scenesystem/scenelight.cpp:104
// variables: 2
// function calls: 19
void CLightObjectDesc::Create()
{
	CSceneLightObjectInternal* pNew; // 106
	{
		int i; // 112
		CUtlVectorBase<ISceneLightListener::Count(); // 112
		CUtlMemory<ISceneLightListener::operator[](
				int i);  // 588
		CUtlVectorBase<ISceneLightListener::operator[](
				int i);  // 114
	}
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 107
	CUtlMemory<CSceneLightObjectInternal::NumAllocated(); // 1196
	CUtlMemory<CSceneLightObjectInternal::Base(); // 112
	CUtlVectorBase<CSceneLightObjectInternal::Base(); // 368
	CUtlVectorBase<CSceneLightObjectInternal::ResetDbgInfo(); // 824
	CUtlMemory<CSceneLightObjectInternal::IsGrowable(); // 823
	CUtlMemory<CSceneLightObjectInternal::IsExternallyAllocated(); // 859
	CUtlMemory<CSceneLightObjectInternal::IsExternallyAllocated(); // 861
	CUtlMemory<CSceneLightObjectInternal::Grow(
		int num);  // 806
	CUtlVectorBase<CSceneLightObjectInternal::GrowMemory(
			int num);  // 1198
	CUtlMemory<CSceneLightObjectInternal::operator[](
			int i);  // 602
	CUtlVectorBase<CSceneLightObjectInternal::Element(
		int i);  // 1201
	CopyConstruct<CSceneLightObjectInternal*>(CSceneLightObjectInternal** pMemory,
							CSceneLightObjectInternal* const& src);  // 1201
	CUtlVectorBase<CSceneLightObjectInternal::AddToTail(
			CSceneLightObjectInternal* const& src);  // 111
} /* size: 510, variables: 1, inline expansions: 16 (1004 bytes) */

// <0306C8B2> ../scenesystem/scenelight.cpp:123
// variables: 3
// function calls: 17
void CLightObjectDesc::DeleteNonPooledObject(CSceneObject* pObject)
{
	{
		int i; // 127
		CUtlVectorBase<ISceneLightListener::Count(); // 127
		CUtlMemory<ISceneLightListener::operator[](
				int i);  // 588
		CUtlVectorBase<ISceneLightListener::operator[](
				int i);  // 129
	}
	{
		int i; // 1531
		CUtlVectorBase<CSceneLightObjectInternal::Count(); // 1531
		CUtlMemory<CSceneLightObjectInternal::operator[](
				int i);  // 609
		CUtlVectorBase<CSceneLightObjectInternal::Element(
			int i);  // 1533
	}
	CUtlVectorBase<CSceneLightObjectInternal::Find(
		CSceneLightObjectInternal* const& src);  // 1629
	CUtlMemory<CSceneLightObjectInternal::operator[](
			int i);  // 602
	CUtlVectorBase<CSceneLightObjectInternal::Element(
		int i);  // 1575
	Destruct<CSceneLightObjectInternal*>(CSceneLightObjectInternal** pMemory); // 1575
	{
		const bool  bNotLast; // 1578
		CUtlMemory<CSceneLightObjectInternal::operator[](
				int i);  // 602
		CUtlVectorBase<CSceneLightObjectInternal::Element(
			int i);  // 1584
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 1584
	}
	CUtlVectorBase<CSceneLightObjectInternal::FastRemove(
			int elem);  // 1632
	CUtlVectorBase<CSceneLightObjectInternal::FindAndFastRemove(
				CSceneLightObjectInternal* const& src);  // 131
	ISceneObjectDescBase<CSceneLightObjectInternal>::DeleteNonPooledObject(
				CSceneObject* pObject);  // 138
} /* size: 247, inline expansions: 7 (197 bytes) */

// <0306625F> ../scenesystem/scenelight.cpp:142
void CEnvMapLightObjectDesc::CEnvMapLightObjectDesc()
{
} /* size: 0 */

// <03066243> ../scenesystem/scenelight.cpp:142
inline void CEnvMapLightObjectDesc::CEnvMapLightObjectDesc()
{
} /* size: 0 */

// <030592AA> ../scenesystem/scenelight.cpp:142
// function calls: 38
void CEnvMapLightObjectDesc::~CEnvMapLightObjectDesc()
{
	CUtlVectorBase<ISceneEnvironmentMapListener::RemoveAll(); // 1798
	CUtlMemory<ISceneEnvironmentMapListener::IsExternallyAllocated(); // 577
	CUtlMemory<ISceneEnvironmentMapListener::ConvertToExternalMemory(
				ISceneEnvironmentMapListener** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<ISceneEnvironmentMapListener::Purge_FixedGrowable(
				ISceneEnvironmentMapListener** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<ISceneEnvironmentMapListener::Purge_FixedGrowable(
				ISceneEnvironmentMapListener** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<4, ISceneEnvironmentMapListener::Base(); // 237
	CUtlMemoryFixedGrowable<ISceneEnvironmentMapListener::Purge(
		int numElements);  // 1799
	CUtlVectorBase<ISceneEnvironmentMapListener::ResetDbgInfo(); // 1800
	CUtlVectorBase<ISceneEnvironmentMapListener::Purge(); // 560
	ValidateAlignment<ISceneEnvironmentMapListener*>(void); // 508
	CUtlMemory<ISceneEnvironmentMapListener::Purge(); // 903
	CUtlMemory<ISceneEnvironmentMapListener::Purge(); // 510
	CUtlMemory<ISceneEnvironmentMapListener::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<ISceneEnvironmentMapListener::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<ISceneEnvironmentMapListener::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<ISceneEnvironmentMapListener::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<ISceneEnvironmentMapListener::~CUtlVectorFixedGrowable(); // 142
	CUtlVectorBase<CEnvMapSceneObject::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<128, CEnvMapSceneObject::Base(); // 237
	CUtlMemory<CEnvMapSceneObject::IsExternallyAllocated(); // 577
	CUtlMemory<CEnvMapSceneObject::ConvertToExternalMemory(
				CEnvMapSceneObject** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CEnvMapSceneObject::Purge_FixedGrowable(
				CEnvMapSceneObject** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CEnvMapSceneObject::Purge_FixedGrowable(
				CEnvMapSceneObject** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CEnvMapSceneObject::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CEnvMapSceneObject::ResetDbgInfo(); // 1800
	CUtlVectorBase<CEnvMapSceneObject::Purge(); // 560
	ValidateAlignment<CEnvMapSceneObject*>(void); // 508
	CUtlMemory<CEnvMapSceneObject::Purge(); // 903
	CUtlMemory<CEnvMapSceneObject::Purge(); // 510
	CUtlMemory<CEnvMapSceneObject::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CEnvMapSceneObject::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CEnvMapSceneObject::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CEnvMapSceneObject::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CEnvMapSceneObject::~CUtlVectorFixedGrowable(); // 142
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadMutex::~CThreadMutex(); // 2084
	CThreadRWLock::~CThreadRWLock(); // 142
} /* size: 292, inline expansions: 38 (1364 bytes) */

// <0305928E> ../scenesystem/scenelight.cpp:142
inline void CEnvMapLightObjectDesc::~CEnvMapLightObjectDesc()
{
} /* size: 0 */

// <03055154> ../scenesystem/scenelight.cpp:142
// member functions: 24
// member variables: 4
// vtable entries: 4
// class size: 1,472
class CEnvMapLightObjectDesc : public ISceneObjectDescBase<CSceneObject> {
public:
	/* class ISceneObjectDescBase<CSceneObject> <ancestor>; */ /* 0 8 */
	void CEnvMapLightObjectDesc(CEnvMapLightObjectDesc* , CEnvMapLightObjectDesc& );
	void CEnvMapLightObjectDesc(CEnvMapLightObjectDesc* , const CEnvMapLightObjectDesc& );
	void CEnvMapLightObjectDesc(CEnvMapLightObjectDesc* );
	/* ../scenesystem/scenelight.cpp:145 */
	virtual const char* GetTypeName(CEnvMapLightObjectDesc* );
	/* ../scenesystem/scenelight.cpp:223 */
	virtual CSceneObject* Create(CEnvMapLightObjectDesc* );
	/* ../scenesystem/scenelight.cpp:148 */
	void ForEachEnvironmentMap(CEnvMapLightObjectDesc* , const function<void(CEnvMapSceneObject*)>& );
	/* ../scenesystem/scenelight.cpp:155 */
	void RegisterListener(CEnvMapLightObjectDesc* , ISceneEnvironmentMapListener* );
	/* ../scenesystem/scenelight.cpp:160 */
	void UnregisterListener(CEnvMapLightObjectDesc* , ISceneEnvironmentMapListener* );
	/* ../scenesystem/scenelight.cpp:165 */
	void MarkUpdated(CEnvMapLightObjectDesc* , CEnvMapSceneObject* );
protected:
	/* ../scenesystem/scenelight.cpp:244 */
	virtual void DrawDebug(CEnvMapLightObjectDesc* , IRenderContext* , const CMeshDrawPrimitive_t* , const ISceneView* , ISceneLayer* , int);
	/* ../scenesystem/scenelight.cpp:271 */
	virtual void DeleteNonPooledObject(CEnvMapLightObjectDesc* , CSceneObject* );
	CThreadRWLock m_Mutex; /* 8 344 */
	CUtlVectorFixedGrowable<CEnvMapSceneObject*, 128> m_EnvMaps __attribute__((__aligned__(8))); /* 352 1056 */
	CUtlVectorFixedGrowable<ISceneEnvironmentMapListener*, 4> m_EnvMapListeners __attribute__((__aligned__(8))); /* 1408 64 */
	void ~CEnvMapLightObjectDesc(CEnvMapLightObjectDesc* );
	void CEnvMapLightObjectDesc(class CEnvMapLightObjectDesc *, class CEnvMapLightObjectDesc &); /* linkage=_ZN22CEnvMapLightObjectDescC4EOS_ */
	void CEnvMapLightObjectDesc(class CEnvMapLightObjectDesc *, const class CEnvMapLightObjectDesc  &); /* linkage=_ZN22CEnvMapLightObjectDescC4ERKS_ */
	void CEnvMapLightObjectDesc(class CEnvMapLightObjectDesc *); /* linkage=_ZN22CEnvMapLightObjectDescC4Ev */
	virtual const char  * GetTypeName(class CEnvMapLightObjectDesc *); /* linkage=_ZN22CEnvMapLightObjectDesc11GetTypeNameEv */
	virtual class CSceneObject * Create(class CEnvMapLightObjectDesc *); /* linkage=_ZN22CEnvMapLightObjectDesc6CreateEv */
	void ForEachEnvironmentMap(class CEnvMapLightObjectDesc *, const class function<void(CEnvMapSceneObject*)>  &); /* linkage=_ZN22CEnvMapLightObjectDesc21ForEachEnvironmentMapERKSt8functionIFvP18CEnvMapSceneObjectEE */
	void RegisterListener(class CEnvMapLightObjectDesc *, class ISceneEnvironmentMapListener *); /* linkage=_ZN22CEnvMapLightObjectDesc16RegisterListenerEP28ISceneEnvironmentMapListener */
	void UnregisterListener(class CEnvMapLightObjectDesc *, class ISceneEnvironmentMapListener *); /* linkage=_ZN22CEnvMapLightObjectDesc18UnregisterListenerEP28ISceneEnvironmentMapListener */
	void MarkUpdated(class CEnvMapLightObjectDesc *, class CEnvMapSceneObject *); /* linkage=_ZN22CEnvMapLightObjectDesc11MarkUpdatedEP18CEnvMapSceneObject */
	virtual void DrawDebug(class CEnvMapLightObjectDesc *, class IRenderContext *, const class CMeshDrawPrimitive_t  *, const class ISceneView  *, class ISceneLayer *, int); /* linkage=_ZN22CEnvMapLightObjectDesc9DrawDebugEP14IRenderContextPK20CMeshDrawPrimitive_tPK10ISceneViewP11ISceneLayeri */
	virtual void DeleteNonPooledObject(class CEnvMapLightObjectDesc *, class CSceneObject *); /* linkage=_ZN22CEnvMapLightObjectDesc21DeleteNonPooledObjectEP12CSceneObject */
	void ~CEnvMapLightObjectDesc(class CEnvMapLightObjectDesc *); /* linkage=_ZN22CEnvMapLightObjectDescD4Ev */
} __attribute__((__aligned__(8)));

// <0306C884> ../scenesystem/scenelight.cpp:145
void CEnvMapLightObjectDesc::GetTypeName()
{
} /* size: 12 */

// <0306C7FE> ../scenesystem/scenelight.cpp:155
// variable: 1
inline void CEnvMapLightObjectDesc::RegisterListener(ISceneEnvironmentMapListener* pListener)
{
	CAutoLockT<CThreadRWLock, CAutoLockMutexTrait<CThreadRWLock> > generated_id_157; // 157
} /* size: 0, variables: 1 */

// <0306C74B> ../scenesystem/scenelight.cpp:160
// variable: 1
inline void CEnvMapLightObjectDesc::UnregisterListener(ISceneEnvironmentMapListener* pListener)
{
	CAutoLockT<CThreadRWLock, CAutoLockMutexTrait<CThreadRWLock> > generated_id_162; // 162
} /* size: 0, variables: 1 */

// <0306C70E> ../scenesystem/scenelight.cpp:165
// variables: 2
inline void CEnvMapLightObjectDesc::MarkUpdated(CEnvMapSceneObject* pObject)
{
	CAutoLockT<CThreadRWLock, CAutoLockMutexTrait<CThreadRWLock> > generated_id_167; // 167
	{
		int i; // 168
	}
} /* size: 0, variables: 1 */

// <03066190> ../scenesystem/scenelight.cpp:186
void CLightProbeVolumeObjectDesc::CLightProbeVolumeObjectDesc()
{
} /* size: 0 */

// <03066174> ../scenesystem/scenelight.cpp:186
inline void CLightProbeVolumeObjectDesc::CLightProbeVolumeObjectDesc()
{
} /* size: 0 */

// <03058AF8> ../scenesystem/scenelight.cpp:186
// function calls: 38
void CLightProbeVolumeObjectDesc::~CLightProbeVolumeObjectDesc()
{
	CUtlVectorBase<ISceneLightProbeVolumeListener::RemoveAll(); // 1798
	CUtlMemory<ISceneLightProbeVolumeListener::IsExternallyAllocated(); // 577
	CUtlMemory<ISceneLightProbeVolumeListener::ConvertToExternalMemory(
				ISceneLightProbeVolumeListener** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<ISceneLightProbeVolumeListener::Purge_FixedGrowable(
				ISceneLightProbeVolumeListener** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<ISceneLightProbeVolumeListener::Purge_FixedGrowable(
				ISceneLightProbeVolumeListener** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<4, ISceneLightProbeVolumeListener::Base(); // 237
	CUtlMemoryFixedGrowable<ISceneLightProbeVolumeListener::Purge(
		int numElements);  // 1799
	CUtlVectorBase<ISceneLightProbeVolumeListener::ResetDbgInfo(); // 1800
	CUtlVectorBase<ISceneLightProbeVolumeListener::Purge(); // 560
	ValidateAlignment<ISceneLightProbeVolumeListener*>(void); // 508
	CUtlMemory<ISceneLightProbeVolumeListener::Purge(); // 903
	CUtlMemory<ISceneLightProbeVolumeListener::Purge(); // 510
	CUtlMemory<ISceneLightProbeVolumeListener::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<ISceneLightProbeVolumeListener::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<ISceneLightProbeVolumeListener::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<ISceneLightProbeVolumeListener::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<ISceneLightProbeVolumeListener::~CUtlVectorFixedGrowable(); // 186
	CUtlVectorBase<CSceneLightProbeVolumeObject::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<128, CSceneLightProbeVolumeObject::Base(); // 237
	CUtlMemory<CSceneLightProbeVolumeObject::IsExternallyAllocated(); // 577
	CUtlMemory<CSceneLightProbeVolumeObject::ConvertToExternalMemory(
				CSceneLightProbeVolumeObject** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CSceneLightProbeVolumeObject::Purge_FixedGrowable(
				CSceneLightProbeVolumeObject** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CSceneLightProbeVolumeObject::Purge_FixedGrowable(
				CSceneLightProbeVolumeObject** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CSceneLightProbeVolumeObject::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CSceneLightProbeVolumeObject::ResetDbgInfo(); // 1800
	CUtlVectorBase<CSceneLightProbeVolumeObject::Purge(); // 560
	ValidateAlignment<CSceneLightProbeVolumeObject*>(void); // 508
	CUtlMemory<CSceneLightProbeVolumeObject::Purge(); // 903
	CUtlMemory<CSceneLightProbeVolumeObject::Purge(); // 510
	CUtlMemory<CSceneLightProbeVolumeObject::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CSceneLightProbeVolumeObject::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CSceneLightProbeVolumeObject::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CSceneLightProbeVolumeObject::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CSceneLightProbeVolumeObject::~CUtlVectorFixedGrowable(); // 186
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadMutex::~CThreadMutex(); // 2084
	CThreadRWLock::~CThreadRWLock(); // 186
} /* size: 292, inline expansions: 38 (1364 bytes) */

// <03058ADC> ../scenesystem/scenelight.cpp:186
inline void CLightProbeVolumeObjectDesc::~CLightProbeVolumeObjectDesc()
{
} /* size: 0 */

// <03055382> ../scenesystem/scenelight.cpp:186
// member functions: 24
// member variables: 4
// vtable entries: 4
// class size: 1,472
class CLightProbeVolumeObjectDesc : public ISceneObjectDescBase<CSceneLightProbeVolumeObject> {
public:
	/* class ISceneObjectDescBase<CSceneLightProbeVolumeObject> <ancestor>; */ /* 0 8 */
	void CLightProbeVolumeObjectDesc(CLightProbeVolumeObjectDesc* , CLightProbeVolumeObjectDesc& );
	void CLightProbeVolumeObjectDesc(CLightProbeVolumeObjectDesc* , const CLightProbeVolumeObjectDesc& );
	void CLightProbeVolumeObjectDesc(CLightProbeVolumeObjectDesc* );
	/* ../scenesystem/scenelight.cpp:189 */
	virtual const char* GetTypeName(CLightProbeVolumeObjectDesc* );
	/* ../scenesystem/scenelight.cpp:288 */
	virtual CSceneObject* Create(CLightProbeVolumeObjectDesc* );
	/* ../scenesystem/scenelight.cpp:309 */
	virtual void DeleteNonPooledObject(CLightProbeVolumeObjectDesc* , CSceneObject* );
	/* ../scenesystem/scenelight.cpp:193 */
	void ForEachLightProbeVolume(CLightProbeVolumeObjectDesc* , const function<void(CSceneLightProbeVolumeObject*)>& );
	/* ../scenesystem/scenelight.cpp:201 */
	void RegisterListener(CLightProbeVolumeObjectDesc* , ISceneLightProbeVolumeListener* );
	/* ../scenesystem/scenelight.cpp:207 */
	void UnregisterListener(CLightProbeVolumeObjectDesc* , ISceneLightProbeVolumeListener* );
	/* ../scenesystem/scenelight.cpp:349 */
	void MarkUpdated(CLightProbeVolumeObjectDesc* , CSceneLightProbeVolumeObject* );
protected:
	/* ../scenesystem/scenelight.cpp:328 */
	virtual void DrawDebug(CLightProbeVolumeObjectDesc* , IRenderContext* , const CMeshDrawPrimitive_t* , const ISceneView* , ISceneLayer* , int);
	CThreadRWLock m_Mutex; /* 8 344 */
	CUtlVectorFixedGrowable<CSceneLightProbeVolumeObject*, 128> m_LightProbeVolumes __attribute__((__aligned__(8))); /* 352 1056 */
	CUtlVectorFixedGrowable<ISceneLightProbeVolumeListener*, 4> m_LightProbeVolumeListeners __attribute__((__aligned__(8))); /* 1408 64 */
	void ~CLightProbeVolumeObjectDesc(CLightProbeVolumeObjectDesc* );
	void CLightProbeVolumeObjectDesc(class CLightProbeVolumeObjectDesc *, class CLightProbeVolumeObjectDesc &); /* linkage=_ZN27CLightProbeVolumeObjectDescC4EOS_ */
	void CLightProbeVolumeObjectDesc(class CLightProbeVolumeObjectDesc *, const class CLightProbeVolumeObjectDesc  &); /* linkage=_ZN27CLightProbeVolumeObjectDescC4ERKS_ */
	void CLightProbeVolumeObjectDesc(class CLightProbeVolumeObjectDesc *); /* linkage=_ZN27CLightProbeVolumeObjectDescC4Ev */
	virtual const char  * GetTypeName(class CLightProbeVolumeObjectDesc *); /* linkage=_ZN27CLightProbeVolumeObjectDesc11GetTypeNameEv */
	virtual class CSceneObject * Create(class CLightProbeVolumeObjectDesc *); /* linkage=_ZN27CLightProbeVolumeObjectDesc6CreateEv */
	virtual void DeleteNonPooledObject(class CLightProbeVolumeObjectDesc *, class CSceneObject *); /* linkage=_ZN27CLightProbeVolumeObjectDesc21DeleteNonPooledObjectEP12CSceneObject */
	void ForEachLightProbeVolume(class CLightProbeVolumeObjectDesc *, const class function<void(CSceneLightProbeVolumeObject*)>  &); /* linkage=_ZN27CLightProbeVolumeObjectDesc23ForEachLightProbeVolumeERKSt8functionIFvP28CSceneLightProbeVolumeObjectEE */
	void RegisterListener(class CLightProbeVolumeObjectDesc *, class ISceneLightProbeVolumeListener *); /* linkage=_ZN27CLightProbeVolumeObjectDesc16RegisterListenerEP30ISceneLightProbeVolumeListener */
	void UnregisterListener(class CLightProbeVolumeObjectDesc *, class ISceneLightProbeVolumeListener *); /* linkage=_ZN27CLightProbeVolumeObjectDesc18UnregisterListenerEP30ISceneLightProbeVolumeListener */
	void MarkUpdated(class CLightProbeVolumeObjectDesc *, class CSceneLightProbeVolumeObject *); /* linkage=_ZN27CLightProbeVolumeObjectDesc11MarkUpdatedEP28CSceneLightProbeVolumeObject */
	virtual void DrawDebug(class CLightProbeVolumeObjectDesc *, class IRenderContext *, const class CMeshDrawPrimitive_t  *, const class ISceneView  *, class ISceneLayer *, int); /* linkage=_ZN27CLightProbeVolumeObjectDesc9DrawDebugEP14IRenderContextPK20CMeshDrawPrimitive_tPK10ISceneViewP11ISceneLayeri */
	void ~CLightProbeVolumeObjectDesc(class CLightProbeVolumeObjectDesc *); /* linkage=_ZN27CLightProbeVolumeObjectDescD4Ev */
} __attribute__((__aligned__(8)));

// <0306C6E0> ../scenesystem/scenelight.cpp:189
void CLightProbeVolumeObjectDesc::GetTypeName()
{
} /* size: 12 */

// <0306C65A> ../scenesystem/scenelight.cpp:201
// variable: 1
inline void CLightProbeVolumeObjectDesc::RegisterListener(ISceneLightProbeVolumeListener* pListener)
{
	CAutoLockT<CThreadRWLock, CAutoLockMutexTrait<CThreadRWLock> > generated_id_203; // 203
} /* size: 0, variables: 1 */

// <0306C5A7> ../scenesystem/scenelight.cpp:207
// variable: 1
inline void CLightProbeVolumeObjectDesc::UnregisterListener(ISceneLightProbeVolumeListener* pListener)
{
	CAutoLockT<CThreadRWLock, CAutoLockMutexTrait<CThreadRWLock> > generated_id_209; // 209
} /* size: 0, variables: 1 */

// <0306B5D1> ../scenesystem/scenelight.cpp:223
// variables: 2
// function calls: 67
void CEnvMapLightObjectDesc::Create()
{
	CEnvMapSceneObject* pNew; // 225
	{
		int i; // 235
		CUtlVectorBase<ISceneEnvironmentMapListener::Count(); // 235
		CUtlMemory<ISceneEnvironmentMapListener::operator[](
				int i);  // 588
		CUtlVectorBase<ISceneEnvironmentMapListener::operator[](
				int i);  // 237
	}
	IGenericInterface::IGenericInterface(); // 1428
	{
	}
	AlignedByteArrayExplicit_t<3, unsigned int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<3, unsigned int>::AlignedByteArray_t(); // 228
	CUtlMemory<unsigned int, int>::CUtlMemory(
			unsigned int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<unsigned int, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::CUtlMemoryFixedGrowable_Base(
					unsigned int* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<3, unsigned int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<unsigned int, 3>::CUtlVectorFixedGrowable(
				int growSize);  // 1428
	matrix3x4_t::matrix3x4_t(); // 303
	matrix3x4a_t::matrix3x4a_t(); // 1428
	CUtlStringToken::CUtlStringToken(); // 1428
	CManagedHandle::CManagedHandle(); // 1428
	CSceneObject::CSceneObject(); // 2612
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(); // 217
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(); // 153
	CUtlStringToken::CUtlStringToken(); // 153
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	Vector::Vector(); // 153
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 223
	Vector::operator=(
			const Vector& vOther);  // 268
	Vector::operator=(
			const Vector& vOther);  // 269
	LightDesc_t::Clear(); // 154
	LightDesc_t::LightDesc_t(); // 2612
	CSceneLightObject::CSceneLightObject(); // 22
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(); // 22
	Vector::Vector(); // 22
	Vector::Vector(); // 22
	Vector::Vector(); // 22
	Vector4D::Vector4D(); // 22
	SphericalHarmonicFn_t<3>::SphericalHarmonicFn_t(); // 313
	SphericalHarmonicFn_t<3>::SphericalHarmonicFn_t(); // 313
	SphericalHarmonicFn_t<3>::SphericalHarmonicFn_t(); // 313
	SphericalHarmonicRGBFn_t<3>::SphericalHarmonicRGBFn_t(); // 22
	CEnvMapSceneObject::CEnvMapSceneObject(); // 225
	LightDesc_t::InitEnvironmentProbe(
				const Vector& pos,
				float flInfluenceRadius);  // 226
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 226
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 228
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 1966
	CSceneObject::SetLoaded(); // 230
	CUtlMemory<CEnvMapSceneObject::NumAllocated(); // 1196
	CUtlMemory<CEnvMapSceneObject::Base(); // 112
	CUtlVectorBase<CEnvMapSceneObject::Base(); // 368
	CUtlVectorBase<CEnvMapSceneObject::ResetDbgInfo(); // 824
	CUtlMemory<CEnvMapSceneObject::IsGrowable(); // 823
	CUtlMemory<CEnvMapSceneObject::IsExternallyAllocated(); // 859
	CUtlMemory<CEnvMapSceneObject::IsExternallyAllocated(); // 861
	CUtlMemory<CEnvMapSceneObject::Grow(
		int num);  // 806
	CUtlVectorBase<CEnvMapSceneObject::GrowMemory(
			int num);  // 1198
	CUtlMemory<CEnvMapSceneObject::operator[](
			int i);  // 602
	CUtlVectorBase<CEnvMapSceneObject::Element(
		int i);  // 1201
	CopyConstruct<CEnvMapSceneObject*>(CEnvMapSceneObject** pMemory,
						CEnvMapSceneObject* const& src);  // 1201
	CUtlVectorBase<CEnvMapSceneObject::AddToTail(
			CEnvMapSceneObject* const& src);  // 233
} /* size: 1150, variables: 1, inline expansions: 64 (3443 bytes) */

// <0306A6F7> ../scenesystem/scenelight.cpp:244
// variables: 2
// function calls: 53
void CEnvMapLightObjectDesc::DrawDebug(IRenderContext* pCtx, const CMeshDrawPrimitive_t* pPrimitive, const ISceneView* pView, ISceneLayer* pLayer, int nDebugLevel)
{
	const CEnvMapSceneObject* pObj; // 246
	{
		CPathBufferString resourceName; // 264
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 264
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator ResourceHandle_t(); // 265
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 267
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 267
		clamp<double, int>(const double& val,
					const int& minVal,
					const int& maxVal);  // 124
		clamp<double, int>(const double& val,
					const int& minVal,
					const int& maxVal);  // 125
		clamp<double, int>(const double& val,
					const int& minVal,
					const int& maxVal);  // 126
		VertexColor_t::VertexColor_t(
				const Vector& vecColor);  // 267
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 267
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 267
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 267
		ISceneView::GetFrustum(); // 267
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 268
	}
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 259
	CSceneObject::GetTransform(); // 259
	CSceneObject::GetBounds(
			Vector& vecWorldMins,
			Vector& vecWorldMaxes);  // 2026
	Vector::Vector(); // 2024
	Vector::Vector(); // 2025
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 2027
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2027
	CSceneObject::GetBoundingSphereRadius(); // 255
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 255
	CSceneObject::GetTransform(); // 255
	CSceneObject::GetTransform(); // 251
	matrix3x4_t::matrix3x4_t(); // 753
	Vector::LargestComponentValue(); // 755
	MatrixPosition(const matrix3x4_t& matrix,
			Vector& position);  // 757
	MatrixQuaternion(const matrix3x4_t& mat,
			Quaternion& q,
			Vector& o,
			float& flScale);  // 398
	Vector::Vector(); // 395
	Quaternion::Quaternion(); // 396
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 399
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 399
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 399
	ISceneViewDebugOverlays::BoxAngles(
			const matrix3x4_t& mBoxToWorld,
			const Vector& vLocalMins,
			const Vector& vLocalMaxs,
			int r,
			int g,
			int b,
			int a,
			bool bNoDepthTest,
			float64 flTimeToLive);  // 251
} /* size: 1056, variables: 1, inline expansions: 32 (1129 bytes) */

// <03069810> ../scenesystem/scenelight.cpp:271
// variables: 3
// function calls: 16
void CEnvMapLightObjectDesc::DeleteNonPooledObject(CSceneObject* pObject)
{
	CEnvMapSceneObject* pRealObject; // 273
	{
		int i; // 278
		CUtlVectorBase<ISceneEnvironmentMapListener::Count(); // 278
		CUtlMemory<ISceneEnvironmentMapListener::operator[](
				int i);  // 588
		CUtlVectorBase<ISceneEnvironmentMapListener::operator[](
				int i);  // 280
	}
	{
		int i; // 1531
		CUtlVectorBase<CEnvMapSceneObject::Count(); // 1531
		CUtlMemory<CEnvMapSceneObject::operator[](
				int i);  // 609
		CUtlVectorBase<CEnvMapSceneObject::Element(
			int i);  // 1533
	}
	CUtlVectorBase<CEnvMapSceneObject::Find(
		CEnvMapSceneObject* const& src);  // 1617
	CUtlMemory<CEnvMapSceneObject::operator[](
			int i);  // 602
	CUtlVectorBase<CEnvMapSceneObject::Element(
		int i);  // 1114
	CUtlMemory<CEnvMapSceneObject::operator[](
			int i);  // 602
	CUtlVectorBase<CEnvMapSceneObject::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<CEnvMapSceneObject::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<CEnvMapSceneObject::Remove(
		int elem);  // 1620
	CUtlVectorBase<CEnvMapSceneObject::FindAndRemove(
			CEnvMapSceneObject* const& src);  // 276
} /* size: 286, variables: 1, inline expansions: 10 (363 bytes) */

// <030688D2> ../scenesystem/scenelight.cpp:288
// variables: 2
// function calls: 60
void CLightProbeVolumeObjectDesc::Create()
{
	CSceneLightProbeVolumeObject* pNew; // 290
	{
		int i; // 299
		CUtlVectorBase<ISceneLightProbeVolumeListener::Count(); // 299
		CUtlMemory<ISceneLightProbeVolumeListener::operator[](
				int i);  // 588
		CUtlVectorBase<ISceneLightProbeVolumeListener::operator[](
				int i);  // 301
	}
	IGenericInterface::IGenericInterface(); // 1428
	{
	}
	AlignedByteArrayExplicit_t<3, unsigned int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<3, unsigned int>::AlignedByteArray_t(); // 228
	CUtlMemory<unsigned int, int>::CUtlMemory(
			unsigned int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<unsigned int, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::CUtlMemoryFixedGrowable_Base(
					unsigned int* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<3, unsigned int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<unsigned int, 3>::CUtlVectorFixedGrowable(
				int growSize);  // 1428
	matrix3x4_t::matrix3x4_t(); // 303
	matrix3x4a_t::matrix3x4a_t(); // 1428
	CUtlStringToken::CUtlStringToken(); // 1428
	CManagedHandle::CManagedHandle(); // 1428
	CSceneObject::CSceneObject(); // 20
	{
	}
	AlignedByteArrayExplicit_t<1, CUtlStringToken, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<1, CUtlStringToken>::AlignedByteArray_t(); // 228
	CUtlMemory<CUtlStringToken, int>::CUtlMemory(
			CUtlStringToken* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CUtlStringToken, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CUtlStringToken, int>::CUtlMemoryFixedGrowable_Base(
					CUtlStringToken* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<1, CUtlStringToken, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<CUtlStringToken, 1, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 1, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 1, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CUtlStringToken, 1>::CUtlVectorFixedGrowable(
				int growSize);  // 20
	Vector::Vector(); // 20
	Vector::Vector(); // 20
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(); // 20
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(); // 20
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(); // 20
	matrix3x4_t::matrix3x4_t(); // 10
	Vector4D::Vector4D(); // 10
	Vector4D::Vector4D(); // 10
	Vector4D::Vector4D(); // 10
	PerBatchLightProbeVolumeConstantBuffer_t::PerBatchLightProbeVolumeConstantBuffer_t(); // 20
	CSceneLightProbeVolumeObject::CSceneLightProbeVolumeObject(); // 290
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 292
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 1966
	CSceneObject::SetLoaded(); // 294
	CUtlMemory<CSceneLightProbeVolumeObject::NumAllocated(); // 1196
	CUtlMemory<CSceneLightProbeVolumeObject::Base(); // 112
	CUtlVectorBase<CSceneLightProbeVolumeObject::Base(); // 368
	CUtlVectorBase<CSceneLightProbeVolumeObject::ResetDbgInfo(); // 824
	CUtlMemory<CSceneLightProbeVolumeObject::IsGrowable(); // 823
	CUtlMemory<CSceneLightProbeVolumeObject::IsExternallyAllocated(); // 859
	CUtlMemory<CSceneLightProbeVolumeObject::IsExternallyAllocated(); // 861
	CUtlMemory<CSceneLightProbeVolumeObject::Grow(
		int num);  // 806
	CUtlVectorBase<CSceneLightProbeVolumeObject::GrowMemory(
			int num);  // 1198
	CUtlMemory<CSceneLightProbeVolumeObject::operator[](
			int i);  // 602
	CUtlVectorBase<CSceneLightProbeVolumeObject::Element(
		int i);  // 1201
	CopyConstruct<CSceneLightProbeVolumeObject*>(CSceneLightProbeVolumeObject** pMemory,
							CSceneLightProbeVolumeObject* const& src);  // 1201
	CUtlVectorBase<CSceneLightProbeVolumeObject::AddToTail(
			CSceneLightProbeVolumeObject* const& src);  // 297
} /* size: 862, variables: 1, inline expansions: 57 (2207 bytes) */

// <03067420> ../scenesystem/scenelight.cpp:309
// variables: 3
// function calls: 16
void CLightProbeVolumeObjectDesc::DeleteNonPooledObject(CSceneObject* pObject)
{
	CSceneLightProbeVolumeObject* pRealObject; // 311
	{
		int i; // 316
		CUtlVectorBase<ISceneLightProbeVolumeListener::Count(); // 316
		CUtlMemory<ISceneLightProbeVolumeListener::operator[](
				int i);  // 588
		CUtlVectorBase<ISceneLightProbeVolumeListener::operator[](
				int i);  // 318
	}
	{
		int i; // 1531
		CUtlVectorBase<CSceneLightProbeVolumeObject::Count(); // 1531
		CUtlMemory<CSceneLightProbeVolumeObject::operator[](
				int i);  // 609
		CUtlVectorBase<CSceneLightProbeVolumeObject::Element(
			int i);  // 1533
	}
	CUtlVectorBase<CSceneLightProbeVolumeObject::Find(
		CSceneLightProbeVolumeObject* const& src);  // 1617
	CUtlMemory<CSceneLightProbeVolumeObject::operator[](
			int i);  // 602
	CUtlVectorBase<CSceneLightProbeVolumeObject::Element(
		int i);  // 1114
	CUtlMemory<CSceneLightProbeVolumeObject::operator[](
			int i);  // 602
	CUtlVectorBase<CSceneLightProbeVolumeObject::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<CSceneLightProbeVolumeObject::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<CSceneLightProbeVolumeObject::Remove(
		int elem);  // 1620
	CUtlVectorBase<CSceneLightProbeVolumeObject::FindAndRemove(
			CSceneLightProbeVolumeObject* const& src);  // 314
} /* size: 318, variables: 1, inline expansions: 10 (363 bytes) */

// <030666F2> ../scenesystem/scenelight.cpp:328
// variables: 2
// function calls: 42
void CLightProbeVolumeObjectDesc::DrawDebug(IRenderContext* pCtx, const CMeshDrawPrimitive_t* pPrimitive, const ISceneView* pView, ISceneLayer* pLayer, int nDebugLevel)
{
	const CSceneLightProbeVolumeObject* pObj; // 330
	{
		CPathBufferString resourceName; // 341
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 341
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator ResourceHandle_t(); // 342
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 344
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 344
		clamp<double, int>(const double& val,
					const int& minVal,
					const int& maxVal);  // 124
		clamp<double, int>(const double& val,
					const int& minVal,
					const int& maxVal);  // 125
		clamp<double, int>(const double& val,
					const int& minVal,
					const int& maxVal);  // 126
		VertexColor_t::VertexColor_t(
				const Vector& vecColor);  // 344
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 344
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 344
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 344
		ISceneView::GetFrustum(); // 344
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 345
	}
	matrix3x4_t::matrix3x4_t(); // 753
	Vector::LargestComponentValue(); // 755
	MatrixPosition(const matrix3x4_t& matrix,
			Vector& position);  // 757
	MatrixQuaternion(const matrix3x4_t& mat,
			Quaternion& q,
			Vector& o,
			float& flScale);  // 398
	Vector::Vector(); // 395
	Quaternion::Quaternion(); // 396
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 399
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 399
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 399
	ISceneViewDebugOverlays::BoxAngles(
			const matrix3x4_t& mBoxToWorld,
			const Vector& vLocalMins,
			const Vector& vLocalMaxs,
			int r,
			int g,
			int b,
			int a,
			bool bNoDepthTest,
			float64 flTimeToLive);  // 333
	CSceneObject::GetTransform(); // 333
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 378
	ISceneViewDebugOverlays::Box(
		const Vector& vOrigin,
		const Vector& vLocalMins,
		const Vector& vLocalMaxs,
		int r,
		int g,
		int b,
		int a,
		bool bNoDepthTest,
		float64 flTimeToLive);  // 336
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 336
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 336
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 336
} /* size: 901, variables: 1, inline expansions: 21 (873 bytes) */

// <03066415> ../scenesystem/scenelight.cpp:349
// variables: 2
// function calls: 9
void CLightProbeVolumeObjectDesc::MarkUpdated(CSceneLightProbeVolumeObject* pObject)
{
	CAutoLockT<CThreadRWLock, CAutoLockMutexTrait<CThreadRWLock> > generated_id_351; // 351
	{
		int i; // 352
		CUtlVectorBase<ISceneLightProbeVolumeListener::Count(); // 352
		CUtlMemory<ISceneLightProbeVolumeListener::operator[](
				int i);  // 588
		CUtlVectorBase<ISceneLightProbeVolumeListener::operator[](
				int i);  // 354
	}
	CThreadRWLock::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadRWLock& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock, CAutoLockMutexTrait<CThreadRWLock> >::CAutoLockT(
			const CThreadRWLock& lock,
			const char* pFilename,
			int nLineNumber);  // 351
	CThreadRWLock::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadRWLock& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock, CAutoLockMutexTrait<CThreadRWLock> >::~CAutoLockT(); // 356
} /* size: 124, variables: 1, inline expansions: 6 (114 bytes) */

// <0306434A> ../scenesystem/scenelight.cpp:407
void CSceneSystem::MarkLightProbeVolumeObjectUpdated(CSceneLightProbeVolumeObject* pLightProbe)
{
} /* size: 16 */

// <0306403B> ../scenesystem/scenelight.cpp:413
// variable: 1
// function calls: 10
void CSceneSystem::MarkEnvironmentMapObjectUpdated(CEnvMapSceneObject* pEnvMap)
{
	CThreadRWLock::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadRWLock& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock, CAutoLockMutexTrait<CThreadRWLock> >::CAutoLockT(
			const CThreadRWLock& lock,
			const char* pFilename,
			int nLineNumber);  // 167
	{
		int i; // 168
		CUtlVectorBase<ISceneEnvironmentMapListener::Count(); // 168
		CUtlMemory<ISceneEnvironmentMapListener::operator[](
				int i);  // 588
		CUtlVectorBase<ISceneEnvironmentMapListener::operator[](
				int i);  // 170
	}
	CThreadRWLock::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadRWLock& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock, CAutoLockMutexTrait<CThreadRWLock> >::~CAutoLockT(); // 172
	CEnvMapLightObjectDesc::MarkUpdated(
			CEnvMapSceneObject* pObject);  // 415
} /* size: 128, inline expansions: 7 (227 bytes) */

// <0306380B> ../scenesystem/scenelight.cpp:425
// function calls: 14
void RegisterSceneLightListener(ISceneLightListener* pListener)
{
	CUtlMemory<ISceneLightListener::NumAllocated(); // 1196
	CUtlMemory<ISceneLightListener::Base(); // 112
	CUtlVectorBase<ISceneLightListener::Base(); // 368
	CUtlVectorBase<ISceneLightListener::ResetDbgInfo(); // 824
	CUtlMemory<ISceneLightListener::IsGrowable(); // 823
	CUtlMemory<ISceneLightListener::IsExternallyAllocated(); // 859
	CUtlMemory<ISceneLightListener::IsExternallyAllocated(); // 861
	CUtlMemory<ISceneLightListener::Grow(
		int num);  // 806
	CUtlVectorBase<ISceneLightListener::GrowMemory(
			int num);  // 1198
	CUtlMemory<ISceneLightListener::operator[](
			int i);  // 602
	CUtlVectorBase<ISceneLightListener::Element(
		int i);  // 1201
	CopyConstruct<ISceneLightListener*>(ISceneLightListener** pMemory,
						ISceneLightListener* const& src);  // 1201
	CUtlVectorBase<ISceneLightListener::AddToTail(
			ISceneLightListener* const& src);  // 79
	CLightObjectDesc::RegisterListener(
			ISceneLightListener* pListener);  // 427
} /* size: 0, inline expansions: 14 (0 bytes) */

// <03063456> ../scenesystem/scenelight.cpp:431
// variables: 2
// function calls: 14
void UnregisterSceneLightListener(ISceneLightListener* pListener)
{
	{
		int i; // 1531
		CUtlVectorBase<ISceneLightListener::Count(); // 1531
		CUtlMemory<ISceneLightListener::operator[](
				int i);  // 609
		CUtlVectorBase<ISceneLightListener::Element(
			int i);  // 1533
	}
	CUtlVectorBase<ISceneLightListener::Find(
		ISceneLightListener* const& src);  // 1629
	CUtlMemory<ISceneLightListener::operator[](
			int i);  // 602
	CUtlVectorBase<ISceneLightListener::Element(
		int i);  // 1575
	Destruct<ISceneLightListener*>(ISceneLightListener** pMemory); // 1575
	{
		const bool  bNotLast; // 1578
		CUtlMemory<ISceneLightListener::operator[](
				int i);  // 602
		CUtlVectorBase<ISceneLightListener::Element(
			int i);  // 1584
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 1584
	}
	CUtlVectorBase<ISceneLightListener::FastRemove(
			int elem);  // 1632
	CUtlVectorBase<ISceneLightListener::FindAndFastRemove(
				ISceneLightListener* const& src);  // 88
	CLightObjectDesc::UnregisterListener(
				ISceneLightListener* pListener);  // 433
} /* size: 0, inline expansions: 7 (0 bytes) */

// <030629F1> ../scenesystem/scenelight.cpp:436
// variables: 10
// function calls: 23
void CSceneSystem::CreateLight(const LightDesc_t& desc, ISceneWorld* pWorld, bool bIsStatic)
{
	const char   __FUNCTION__; // 36437
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 438
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 440
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 441
	}
	{
		CSceneLightObjectInternal* pNew; // 452
		CSceneObject::SetBounds(
				const Vector& vecWorldMins,
				const Vector& vecWorldMaxes);  // 456
	}
	{
		CSceneLightObjectInternal* pNew; // 464
	}
	{
		CSceneLightObjectInternal* pNew; // 477
		CSceneObject::SetBounds(
				const Vector& vecWorldMins,
				const Vector& vecWorldMaxes);  // 481
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 481
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 481
		CSceneObject::SetBoundsInfinite(); // 482
		CSceneObject::SetFlags(
			ESceneObjectFlags nFlagsToOR);  // 1966
		CSceneObject::SetLoaded(); // 483
	}
	{
		CSceneLightObjectInternal* pNew; // 490
		CSceneObject::SetBounds(
				const Vector& vecWorldMins,
				const Vector& vecWorldMaxes);  // 494
		CSceneObject::MirrorFlags(); // 1901
		CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
							ESceneObjectFlags flags);  // 1940
		CSceneObject::SetFlags(
			ESceneObjectFlags nFlagsToOR);  // 1966
		CSceneObject::SetLoaded(); // 496
	}
	{
		CEnvMapSceneObject* pNew; // 503
		CSceneObject::SetBounds(
				const Vector& vecWorldMins,
				const Vector& vecWorldMaxes);  // 505
		CSceneObject::MirrorFlags(); // 1901
		CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
							ESceneObjectFlags flags);  // 1940
		CSceneObject::SetFlags(
			ESceneObjectFlags nFlagsToOR);  // 1966
		CSceneObject::SetLoaded(); // 506
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 508
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1431
		Vector::operator-(); // 509
		Vector::operator=(
				const Vector& vOther);  // 509
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 516
	}
	Vector::operator!=(
			const Vector& src);  // 440
	Vector::operator!=(
			const Vector& src);  // 441
} /* size: 0, variables: 1, inline expansions: 2 (135 bytes) */

// <03062811> ../scenesystem/scenelight.cpp:520
// variable: 1
// function calls: 6
void CSceneSystem::CreateLightProbeVolume(ISceneWorld* pWorld)
{
	CSceneLightProbeVolumeObject* pNew; // 522
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 1966
	CSceneObject::SetLoaded(); // 523
	Vector::operator=(
			const Vector& vOther);  // 524
	Vector::operator=(
			const Vector& vOther);  // 524
} /* size: 164, variables: 1, inline expansions: 6 (208 bytes) */

// <03062698> ../scenesystem/scenelight.cpp:529
// variable: 1
// function calls: 4
void CSceneSystem::CreateLightProbeVolumeDebugGrid(ISceneWorld* pWorld, CSceneLightProbeVolumeObject* pVolume)
{
	CSceneLPVDebugGridObject* pNew; // 531
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 1966
	CSceneObject::SetLoaded(); // 533
} /* size: 118, variables: 1, inline expansions: 4 (158 bytes) */

// <030613FB> ../scenesystem/scenelight.cpp:543
// variables: 6
// function calls: 68
void LightDebugShapeSmall(ISceneViewDebugOverlays* pOverlay, const LightDesc_t& ldesc)
{
	Vector vRGB; // 545
	Vector vHsv; // 545
	Color c; // 549
	VertexColor_t vc; // 550
	{
		Vector vL; // 562
		Vector vU; // 563
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 563
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 562
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 562
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 564
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 564
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 565
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 565
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 565
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 565
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 566
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 566
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 566
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 566
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 567
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 567
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 567
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 567
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 568
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 568
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 568
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 568
	}
	Vector::Vector(); // 545
	Vector::Vector(); // 545
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 550
	matrix3x4_t::matrix3x4_t(); // 422
	matrix3x4_t::SetToIdentity(); // 423
	matrix3x4_t::SetOrigin(
			const Vector& p);  // 424
	ISceneViewDebugOverlays::Sphere(
		const Vector& vCenter,
		float flRadius,
		const VertexColor_t& vecColor,
		bool bNoDepthTest,
		float64 flTimeToLive);  // 558
	DEG2RAD(float flDegrees); // 554
} /* size: 0, variables: 4, inline expansions: 8 (0 bytes) */

