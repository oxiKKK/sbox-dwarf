
//
// public/scenesystem/aggregatesceneobject.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	class: 1
//

// <03D7DD55> ../public/scenesystem/aggregatesceneobject.h:7
// member functions: 15
// member variables: 9
// vtable entries: 3
// class size: 368
class CAggregateSceneObject : public CSceneObject {
	/* ../public/scenesystem/aggregatesceneobject.h:16 */
	enum FragmentFlags_t {
		FRAGMENT_FLAG_NONE = 0,
		FRAGMENT_FLAG_RENDER_TO_CUBEMAPS = 1,
		FRAGMENT_FLAG_DISABLED_IN_LOW_QUALITY = 2,
		FRAGMENT_FLAG_DO_NOT_CAST_SHADOWS = 4,
	} __attribute__((__packed__));
	/* ../public/scenesystem/aggregatesceneobject.h:24 */
	struct MeshFragment_t {
		matrix3x4_t m_worldFromModel; /* 0 48 */
		Vector4D m_vTintColor; /* 48 16 */
		VectorAligned m_vWorldBoundsMin __attribute__((__aligned__(16))); /* 64 16 */
		VectorAligned m_vWorldBoundsMax __attribute__((__aligned__(16))); /* 80 16 */
		uint16 m_nDrawDescriptorIndex; /* 96 2 */
		FragmentFlags_t m_fragmentFlags; /* 98 2 */
		float m_fUVDensity; /* 100 4 */
		int32 m_nCubeMapPrecomputedHandshake; /* 104 4 */
		CPVSData * m_pPVSData; /* 112 8 */
		void MeshFragment_t(MeshFragment_t* );
	} __attribute__((__aligned__(16)));
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CSceneObject <ancestor>; */ /* 0 240 */
	void CAggregateSceneObject(CAggregateSceneObject* , const CAggregateSceneObject& );
	/* ../scenesystem/aggregatedesc.cpp:50 */
	void CAggregateSceneObject(CAggregateSceneObject* );
	/* ../scenesystem/aggregatedesc.cpp:54 */
	virtual void ~CAggregateSceneObject(CAggregateSceneObject* );
	/* ../scenesystem/aggregatedesc.cpp:59 */
	virtual void Init(CAggregateSceneObject* , const matrix3x4_t& , HModel, uint);
	/* ../scenesystem/aggregatedesc.cpp:83 */
	virtual void AddMeshFragment(CAggregateSceneObject* , const matrix3x4_t& , const AABB_t& , FragmentFlags_t, const Vector4D& , uint16, uint32, const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& );
	/* ../scenesystem/aggregatedesc.cpp:124 */
	virtual void FinalizeFragments(CAggregateSceneObject* );
private:
	HModelStrong m_hModel; /* 232 8 */
	HMaterialStrong m_hMaterial; /* 240 8 */
	const class CRenderMesh * m_pRenderMesh; /* 248 8 */
	const class CSceneObjectData * m_pSceneObjectData; /* 256 8 */
	matrix3x4_t m_worldFromModel; /* 264 48 */
	CUtlVector<CAggregateSceneObject::MeshFragment_t, CUtlMemory<CAggregateSceneObject::MeshFragment_t, int> > m_fragments; /* 312 32 */
	uint32 m_nFirstValidEnvMapBinding; /* 344 4 */
	ConstantBufferHandle_t m_hPerFragmentDataCB; /* 352 8 */
	void CAggregateSceneObject(class CAggregateSceneObject *, const class CAggregateSceneObject  &); /* linkage=_ZN21CAggregateSceneObjectC4ERKS_ */
	void CAggregateSceneObject(class CAggregateSceneObject *); /* linkage=_ZN21CAggregateSceneObjectC4Ev */
	virtual void ~CAggregateSceneObject(class CAggregateSceneObject *); /* linkage=_ZN21CAggregateSceneObjectD4Ev */
	virtual void Init(class CAggregateSceneObject *, const class matrix3x4_t  &, HModel, uint); /* linkage=_ZN21CAggregateSceneObject4InitERK11matrix3x4_t11CWeakHandleI25InfoForResourceTypeCModelEj */
	virtual void AddMeshFragment(class CAggregateSceneObject *, const class matrix3x4_t  &, const class AABB_t  &, enum FragmentFlags_t, const class Vector4D  &, uint16, uint32, const class CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >  &); /* linkage=_ZN21CAggregateSceneObject15AddMeshFragmentERK11matrix3x4_tRK6AABB_tNS_15FragmentFlags_tERK8Vector4DtjRK10CUtlVectorIj10CUtlMemoryIjiEE */
	virtual void FinalizeFragments(class CAggregateSceneObject *); /* linkage=_ZN21CAggregateSceneObject17FinalizeFragmentsEv */
} __attribute__((__aligned__(16)));

// <03D9247E> ../public/scenesystem/aggregatesceneobject.h:24
void MeshFragment_t::MeshFragment_t()
{
} /* size: 0 */

// <03D92462> ../public/scenesystem/aggregatesceneobject.h:24
inline void MeshFragment_t::MeshFragment_t()
{
} /* size: 0 */

