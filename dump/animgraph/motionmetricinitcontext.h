
//
// animgraph/motionmetricinitcontext.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 8
//	classes: 2
//

// <0140A9EB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:13
// variable: 1
inline void DefaultHashFunctor<HSequence>::operator(HSequence s)
{
	Mix32HashFunctor func; // 13
} /* size: 0, variables: 1 */

// <01109096> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:18
// member functions: 22
// member variables: 8
// class size: 96
class CMotionMetricInitContext {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:39 */
	struct PoseCache_t {
		float m_flCycle; /* 0 4 */
		HSequence m_hSequence; /* 4 4 */
		CUtlVector<CTransform, CUtlMemory<CTransform, int> > m_boneTransformsMS; /* 8 32 */
	};
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:21 */
	void CMotionMetricInitContext(CMotionMetricInitContext* , CAnimGraphInitContext& , float, const CUtlVector<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:22 */
	void ~CMotionMetricInitContext(CMotionMetricInitContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:24 */
	CAnimGraphInitContext& GetGraphInitContext(CMotionMetricInitContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:25 */
	const CModel* GetModel(const CMotionMetricInitContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:29 */
	const CSequenceDistanceHelper* GetSequenceHelper(CMotionMetricInitContext* , HSequence);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:31 */
	float GetTopSpeed(const CMotionMetricInitContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:32 */
	float GetMaxTurnSpeed(const CMotionMetricInitContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:33 */
	float GetAverageTurnSpeed(const CMotionMetricInitContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:35 */
	void GetWorldSpaceBones(CMotionMetricInitContext* , HSequence, float, CUtlVector<CTransform, CUtlMemory<CTransform, int> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:36 */
	CTransform GetWorldSpaceBone(CMotionMetricInitContext* , HSequence, float, int);
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:51 */
	PoseCache_t* GetPoseCache(CMotionMetricInitContext* , HSequence, float);
	CUtlHashtable<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor>, DefaultHashFunctor<HSequence>, DefaultEqualFunctor<HSequence>, undefined_t, CUtlMemory<CUtlHashtableEntry<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >, int> > m_sequenceDistanceHelpers; /* 0 32 */
	CAnimGraphInitContext & m_graphInitContext; /* 32 8 */
	float m_flTopSpeed; /* 40 4 */
	float m_flMaxTurnSpeed; /* 44 4 */
	float m_flAverageTurnSpeed; /* 48 4 */
	CUtlVector<CMotionMetricInitContext::PoseCache_t*, CUtlMemory<CMotionMetricInitContext::PoseCache_t*, int> > m_LRUPoseCache; /* 56 32 */
	int m_nCacheHits; /* 88 4 */
	int m_nCacheFills; /* 92 4 */
	void CMotionMetricInitContext(class CMotionMetricInitContext *, class CAnimGraphInitContext &, float, const class CUtlVector<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor); /* linkage=_ZN24CMotionMetricInitContextC4ER21CAnimGraphInitContextfRK10CUtlVectorI9CSmartPtrI16CMotionClipGroup17CRefCountAccessorE10CUtlMemoryIS6_iEE */
	void ~CMotionMetricInitContext(class CMotionMetricInitContext *); /* linkage=_ZN24CMotionMetricInitContextD4Ev */
	/* <140ee13> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.cpp:114 */
	class CAnimGraphInitContext & GetGraphInitContext(class CMotionMetricInitContext *); /* linkage=_ZN24CMotionMetricInitContext19GetGraphInitContextEv */
	const class CModel  * GetModel(const class CMotionMetricInitContext  *); /* linkage=_ZNK24CMotionMetricInitContext8GetModelEv */
	const class CSequenceDistanceHelper  * GetSequenceHelper(class CMotionMetricInitContext *, class HSequence); /* linkage=_ZN24CMotionMetricInitContext17GetSequenceHelperE9HSequence */
	/* <140ee3d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.cpp:136 */
	float GetTopSpeed(const class CMotionMetricInitContext  *); /* linkage=_ZNK24CMotionMetricInitContext11GetTopSpeedEv */
	float GetMaxTurnSpeed(const class CMotionMetricInitContext  *); /* linkage=_ZNK24CMotionMetricInitContext15GetMaxTurnSpeedEv */
	float GetAverageTurnSpeed(const class CMotionMetricInitContext  *); /* linkage=_ZNK24CMotionMetricInitContext19GetAverageTurnSpeedEv */
	void GetWorldSpaceBones(class CMotionMetricInitContext *, class HSequence, float, class CUtlVector<CTransform, CUtlMemory<CTransform, int> > *); /* linkage=_ZN24CMotionMetricInitContext18GetWorldSpaceBonesE9HSequencefP10CUtlVectorI10CTransform10CUtlMemoryIS2_iEE */
	class CTransform GetWorldSpaceBone(class CMotionMetricInitContext *, class HSequence, float, int); /* linkage=_ZN24CMotionMetricInitContext17GetWorldSpaceBoneE9HSequencefi */
	class PoseCache_t * GetPoseCache(class CMotionMetricInitContext *, class HSequence, float); /* linkage=_ZN24CMotionMetricInitContext12GetPoseCacheE9HSequencef */
};

// <013A5C47> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:18
// member functions: 24
// member variables: 8
// class size: 96
class CMotionMetricInitContext {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:39 */
	struct PoseCache_t {
		float m_flCycle; /* 0 4 */
		HSequence m_hSequence; /* 4 4 */
		CUtlVector<CTransform, CUtlMemory<CTransform, int> > m_boneTransformsMS; /* 8 32 */
		void ~PoseCache_t(PoseCache_t* );
		void PoseCache_t(PoseCache_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:47 */
	enum {
		MAX_LRU_POSE_CACHE_ENTRIES = 16,
	};
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:21 */
	void CMotionMetricInitContext(CMotionMetricInitContext* , CAnimGraphInitContext& , float, const CUtlVector<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:22 */
	void ~CMotionMetricInitContext(CMotionMetricInitContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:24 */
	CAnimGraphInitContext& GetGraphInitContext(CMotionMetricInitContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:25 */
	const CModel* GetModel(const CMotionMetricInitContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:29 */
	const CSequenceDistanceHelper* GetSequenceHelper(CMotionMetricInitContext* , HSequence);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:31 */
	float GetTopSpeed(const CMotionMetricInitContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:32 */
	float GetMaxTurnSpeed(const CMotionMetricInitContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:33 */
	float GetAverageTurnSpeed(const CMotionMetricInitContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:35 */
	void GetWorldSpaceBones(CMotionMetricInitContext* , HSequence, float, CUtlVector<CTransform, CUtlMemory<CTransform, int> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:36 */
	CTransform GetWorldSpaceBone(CMotionMetricInitContext* , HSequence, float, int);
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:51 */
	PoseCache_t* GetPoseCache(CMotionMetricInitContext* , HSequence, float);
	CUtlHashtable<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor>, DefaultHashFunctor<HSequence>, DefaultEqualFunctor<HSequence>, undefined_t, CUtlMemory<CUtlHashtableEntry<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >, int> > m_sequenceDistanceHelpers; /* 0 32 */
	CAnimGraphInitContext & m_graphInitContext; /* 32 8 */
	float m_flTopSpeed; /* 40 4 */
	float m_flMaxTurnSpeed; /* 44 4 */
	float m_flAverageTurnSpeed; /* 48 4 */
	CUtlVector<CMotionMetricInitContext::PoseCache_t*, CUtlMemory<CMotionMetricInitContext::PoseCache_t*, int> > m_LRUPoseCache; /* 56 32 */
	int m_nCacheHits; /* 88 4 */
	int m_nCacheFills; /* 92 4 */
	void CMotionMetricInitContext(class CMotionMetricInitContext *, class CAnimGraphInitContext &, float, const class CUtlVector<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor); /* linkage=_ZN24CMotionMetricInitContextC4ER21CAnimGraphInitContextfRK10CUtlVectorI9CSmartPtrI16CMotionClipGroup17CRefCountAccessorE10CUtlMemoryIS6_iEE */
	void ~CMotionMetricInitContext(class CMotionMetricInitContext *); /* linkage=_ZN24CMotionMetricInitContextD4Ev */
	/* <140ee13> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.cpp:114 */
	class CAnimGraphInitContext & GetGraphInitContext(class CMotionMetricInitContext *); /* linkage=_ZN24CMotionMetricInitContext19GetGraphInitContextEv */
	const class CModel  * GetModel(const class CMotionMetricInitContext  *); /* linkage=_ZNK24CMotionMetricInitContext8GetModelEv */
	const class CSequenceDistanceHelper  * GetSequenceHelper(class CMotionMetricInitContext *, class HSequence); /* linkage=_ZN24CMotionMetricInitContext17GetSequenceHelperE9HSequence */
	/* <140ee3d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.cpp:136 */
	float GetTopSpeed(const class CMotionMetricInitContext  *); /* linkage=_ZNK24CMotionMetricInitContext11GetTopSpeedEv */
	float GetMaxTurnSpeed(const class CMotionMetricInitContext  *); /* linkage=_ZNK24CMotionMetricInitContext15GetMaxTurnSpeedEv */
	float GetAverageTurnSpeed(const class CMotionMetricInitContext  *); /* linkage=_ZNK24CMotionMetricInitContext19GetAverageTurnSpeedEv */
	void GetWorldSpaceBones(class CMotionMetricInitContext *, class HSequence, float, class CUtlVector<CTransform, CUtlMemory<CTransform, int> > *); /* linkage=_ZN24CMotionMetricInitContext18GetWorldSpaceBonesE9HSequencefP10CUtlVectorI10CTransform10CUtlMemoryIS2_iEE */
	class CTransform GetWorldSpaceBone(class CMotionMetricInitContext *, class HSequence, float, int); /* linkage=_ZN24CMotionMetricInitContext17GetWorldSpaceBoneE9HSequencefi */
	class PoseCache_t * GetPoseCache(class CMotionMetricInitContext *, class HSequence, float); /* linkage=_ZN24CMotionMetricInitContext12GetPoseCacheE9HSequencef */
};

// <01125A83> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:21
void CMotionMetricInitContext::CMotionMetricInitContext(CAnimGraphInitContext& graphInitContext, float flSampleRate, const CUtlVector<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor clipGroups)
{
} /* size: 0 */

// <01125A41> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:22
void CMotionMetricInitContext::~CMotionMetricInitContext()
{
} /* size: 0 */

// <0140A9D2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:25
inline void CMotionMetricInitContext::GetModel()
{
} /* size: 0 */

// <013FC3D2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:39
void PoseCache_t::PoseCache_t()
{
} /* size: 0 */

// <013FC3B6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:39
inline void PoseCache_t::PoseCache_t()
{
} /* size: 0 */

// <013F4DD9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:39
void PoseCache_t::~PoseCache_t()
{
} /* size: 0 */

// <013F4DBD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.h:39
inline void PoseCache_t::~PoseCache_t()
{
} /* size: 0 */

