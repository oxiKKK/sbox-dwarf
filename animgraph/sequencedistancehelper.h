
//
// animgraph/sequencedistancehelper.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	class: 1
//

// <00F3D090> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequencedistancehelper.h:14
// function calls: 7
void CSequenceDistanceHelper::~CSequenceDistanceHelper()
{
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 14
} /* size: 49, inline expansions: 7 (154 bytes) */

// <00F3CDFD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequencedistancehelper.h:14
// function calls: 13
void CSequenceDistanceHelper::~CSequenceDistanceHelper()
{
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 14
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 14
	CSequenceDistanceHelper::~CSequenceDistanceHelper(); // 14
} /* size: 93, inline expansions: 13 (198 bytes) */

// <00F3CDE1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequencedistancehelper.h:14
inline void CSequenceDistanceHelper::~CSequenceDistanceHelper()
{
} /* size: 0 */

// <00EFD906> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequencedistancehelper.h:14
// member functions: 18
// member variables: 2
// class size: 48
class CSequenceDistanceHelper : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CSequenceDistanceHelper(CSequenceDistanceHelper* , CSequenceDistanceHelper& );
	void CSequenceDistanceHelper(CSequenceDistanceHelper* , const CSequenceDistanceHelper& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequencedistancehelper.cpp:9 */
	void CSequenceDistanceHelper(CSequenceDistanceHelper* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequencedistancehelper.cpp:15 */
	void CSequenceDistanceHelper(CSequenceDistanceHelper* , const ISequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequencedistancehelper.cpp:48 */
	float FindCycleForDistance(const CSequenceDistanceHelper* , float, float, bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequencedistancehelper.cpp:73 */
	float FindDistanceBetweenCycles(const CSequenceDistanceHelper* , float, float);
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequencedistancehelper.cpp:135 */
	float FindCycleForDistanceForward(const CSequenceDistanceHelper* , float, float, bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequencedistancehelper.cpp:190 */
	float FindCycleForDistanceBackward(const CSequenceDistanceHelper* , float, float, bool);
	CUtlVector<float, CUtlMemory<float, int> > m_distances; /* 16 32 */
	virtual void ~CSequenceDistanceHelper(CSequenceDistanceHelper* );
	void CSequenceDistanceHelper(class CSequenceDistanceHelper *, class CSequenceDistanceHelper &); /* linkage=_ZN23CSequenceDistanceHelperC4EOS_ */
	void CSequenceDistanceHelper(class CSequenceDistanceHelper *, const class CSequenceDistanceHelper  &); /* linkage=_ZN23CSequenceDistanceHelperC4ERKS_ */
	void CSequenceDistanceHelper(class CSequenceDistanceHelper *); /* linkage=_ZN23CSequenceDistanceHelperC4Ev */
	void CSequenceDistanceHelper(class CSequenceDistanceHelper *, const class ISequence  *); /* linkage=_ZN23CSequenceDistanceHelperC4EPK9ISequence */
	float FindCycleForDistance(const class CSequenceDistanceHelper  *, float, float, bool); /* linkage=_ZNK23CSequenceDistanceHelper20FindCycleForDistanceEffb */
	float FindDistanceBetweenCycles(const class CSequenceDistanceHelper  *, float, float); /* linkage=_ZNK23CSequenceDistanceHelper25FindDistanceBetweenCyclesEff */
	float FindCycleForDistanceForward(const class CSequenceDistanceHelper  *, float, float, bool); /* linkage=_ZNK23CSequenceDistanceHelper27FindCycleForDistanceForwardEffb */
	float FindCycleForDistanceBackward(const class CSequenceDistanceHelper  *, float, float, bool); /* linkage=_ZNK23CSequenceDistanceHelper28FindCycleForDistanceBackwardEffb */
	virtual void ~CSequenceDistanceHelper(class CSequenceDistanceHelper *); /* linkage=_ZN23CSequenceDistanceHelperD4Ev */
};

// <013D10E3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequencedistancehelper.h:18
void CSequenceDistanceHelper::CSequenceDistanceHelper(const ISequence* pSequence)
{
} /* size: 0 */

