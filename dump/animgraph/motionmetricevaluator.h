
//
// animgraph/motionmetricevaluator.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 18
//	class: 1
//	structs: 4
//

// <0196D59A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.h:15
void DistanceScalingSettings::DistanceScalingSettings()
{
} /* size: 0 */

// <0196D57E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.h:15
inline void DistanceScalingSettings::DistanceScalingSettings()
{
} /* size: 0 */

// <016330B4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.h:15
// member variables: 2
// struct size: 16
struct DistanceScalingSettings {
	CDampedValue m_flScale; /* 0 12 */
	float m_flBlend; /* 12 4 */
};

// <0196DBED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.h:23
void PositionCorrection::PositionCorrection()
{
} /* size: 0 */

// <0196DBD1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.h:23
inline void PositionCorrection::PositionCorrection()
{
} /* size: 0 */

// <01962E7E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.h:23
inline void PositionCorrection::operator=(PositionCorrection &)
{
} /* size: 0 */

// <0195F026> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.h:23
inline void PositionCorrection::operator=(const PositionCorrection &)
{
} /* size: 0 */

// <016330E5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.h:23
// member function: 1
// member variables: 2
// struct size: 16
struct PositionCorrection {
	Vector m_correction; /* 0 12 */
	float m_flDistance; /* 12 4 */
	void PositionCorrection(PositionCorrection* );
};

// <0196DBBA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.h:31
void RotationCorrection::RotationCorrection()
{
} /* size: 0 */

// <0196DB9E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.h:31
inline void RotationCorrection::RotationCorrection()
{
} /* size: 0 */

// <01962E57> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.h:31
inline void RotationCorrection::operator=(RotationCorrection &)
{
} /* size: 0 */

// <0195EFEE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.h:31
inline void RotationCorrection::operator=(const RotationCorrection &)
{
} /* size: 0 */

// <01633129> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.h:31
// member function: 1
// member variables: 2
// struct size: 8
struct RotationCorrection {
	CRotation m_correction; /* 0 4 */
	float m_flDistance; /* 4 4 */
	void RotationCorrection(RotationCorrection* );
};

// <0196DB87> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.h:39
void MotionCorrection::MotionCorrection()
{
} /* size: 0 */

// <0196DB6B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.h:39
inline void MotionCorrection::MotionCorrection()
{
} /* size: 0 */

// <01962E30> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.h:39
inline void MotionCorrection::operator=(MotionCorrection &)
{
} /* size: 0 */

// <0163316D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.h:39
// member function: 1
// member variables: 2
// struct size: 24
struct MotionCorrection {
	PositionCorrection m_positionCorrection; /* 0 16 */
	RotationCorrection m_rotationCorrection; /* 16 8 */
	void MotionCorrection(MotionCorrection* );
};

// <01634CCA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.h:49
// member functions: 50
// member variables: 4
// vtable entries: 6
// class size: 32
class CMotionMetricEvaluator {
	void ~CMotionMetricEvaluator(CMotionMetricEvaluator* );
	void CMotionMetricEvaluator(CMotionMetricEvaluator* , CMotionMetricEvaluator& );
	void CMotionMetricEvaluator(CMotionMetricEvaluator* , const CMotionMetricEvaluator& );
	int ()(void) * * _vptr.CMotionMetricEvaluator; /* 0 8 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:8 */
	void CMotionMetricEvaluator(CMotionMetricEvaluator* , CPackedData& , int, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.h:55 */
	virtual CUtlString GetUIName(const CMotionMetricEvaluator* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:18 */
	int GetDimensionCount(const CMotionMetricEvaluator* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:24 */
	float GetMean(const CMotionMetricEvaluator* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:30 */
	void SetMean(CMotionMetricEvaluator* , int, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:36 */
	float GetStandardDeviation(const CMotionMetricEvaluator* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:42 */
	void SetStandardDeviation(CMotionMetricEvaluator* , int, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:48 */
	float GetWeight(const CMotionMetricEvaluator* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:54 */
	void SetWeight(CMotionMetricEvaluator* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:60 */
	float NormalizeMetric(const CMotionMetricEvaluator* , int, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:73 */
	float UnNormalizeMetric(const CMotionMetricEvaluator* , int, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:79 */
	void UnNormalizeVectorValues(const CMotionMetricEvaluator* , float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:88 */
	void GetSequenceVectorValues(const CMotionMetricEvaluator* , const CModel* , CMotionMetricInitContext& , HSequence, float, bool, float, float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:104 */
	void GetNormalizedGoalVectorValues(const CMotionMetricEvaluator* , const CAnimGraphUpdateContext& , HSequence, float, bool, float, float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:113 */
	void GetNormalizedCurrentVectorValues(const CMotionMetricEvaluator* , const CAnimGraphUpdateContext& , const DistanceScalingSettings& , HSequence, float, float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:122 */
	MotionCorrection GetMotionCorrection(const CMotionMetricEvaluator* , const CAnimGraphUpdateContext& , const float* , const float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.h:95 */
	virtual void CalculateFilterValues(const CMotionMetricEvaluator* , const CAnimGraphUpdateContext& , float* , float* );
protected:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:140 */
	void NormalizeVectorValues(const CMotionMetricEvaluator* , float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.h:101 */
	virtual void CalculateSequenceValues(const CMotionMetricEvaluator* , const CModel* , CMotionMetricInitContext* , HSequence, float, bool, float, float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.h:105 */
	virtual bool CalculateGoalValues(const CMotionMetricEvaluator* , const CAnimGraphUpdateContext& , HSequence, float, bool, float, float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.h:109 */
	virtual bool CalculateCurrentValues(const CMotionMetricEvaluator* , const CAnimGraphUpdateContext& , const DistanceScalingSettings& , HSequence, float, float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.h:113 */
	virtual MotionCorrection CalculateMotionCorrection(const CMotionMetricEvaluator* , const CAnimGraphUpdateContext& , const float* , const float* );
private:
	CRelativeArray<float> m_means; /* 8 8 */
	CRelativeArray<float> m_standardDeviations; /* 16 8 */
	float m_flWeight; /* 24 4 */
	/* <164ce89> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:60 */
	float NormalizeMetric(const class CMotionMetricEvaluator  *, int, float); /* linkage=_ZNK22CMotionMetricEvaluator15NormalizeMetricEif */
	void SetStandardDeviation(class CMotionMetricEvaluator *, int, float); /* linkage=_ZN22CMotionMetricEvaluator20SetStandardDeviationEif */
	void SetMean(class CMotionMetricEvaluator *, int, float); /* linkage=_ZN22CMotionMetricEvaluator7SetMeanEif */
	void GetSequenceVectorValues(const class CMotionMetricEvaluator  *, const class CModel  *, class CMotionMetricInitContext &, class HSequence, float, bool, float, float *); /* linkage=_ZNK22CMotionMetricEvaluator23GetSequenceVectorValuesEPK6CModelR24CMotionMetricInitContext9HSequencefbfPf */
	/* <164ce2e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:18 */
	int GetDimensionCount(const class CMotionMetricEvaluator  *); /* linkage=_ZNK22CMotionMetricEvaluator17GetDimensionCountEv */
	void ~CMotionMetricEvaluator(class CMotionMetricEvaluator *); /* linkage=_ZN22CMotionMetricEvaluatorD4Ev */
	void CMotionMetricEvaluator(class CMotionMetricEvaluator *, class CMotionMetricEvaluator &); /* linkage=_ZN22CMotionMetricEvaluatorC4EOS_ */
	void CMotionMetricEvaluator(class CMotionMetricEvaluator *, const class CMotionMetricEvaluator  &); /* linkage=_ZN22CMotionMetricEvaluatorC4ERKS_ */
	void CMotionMetricEvaluator(class CMotionMetricEvaluator *, CPackedData &, int, float); /* linkage=_ZN22CMotionMetricEvaluatorC4ER12CPackedDataTILb0EEif */
	virtual class CUtlString GetUIName(const class CMotionMetricEvaluator  *); /* linkage=_ZNK22CMotionMetricEvaluator9GetUINameEv */
	float GetMean(const class CMotionMetricEvaluator  *, int); /* linkage=_ZNK22CMotionMetricEvaluator7GetMeanEi */
	float GetStandardDeviation(const class CMotionMetricEvaluator  *, int); /* linkage=_ZNK22CMotionMetricEvaluator20GetStandardDeviationEi */
	float GetWeight(const class CMotionMetricEvaluator  *); /* linkage=_ZNK22CMotionMetricEvaluator9GetWeightEv */
	void SetWeight(class CMotionMetricEvaluator *, float); /* linkage=_ZN22CMotionMetricEvaluator9SetWeightEf */
	/* <164d129> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:73 */
	float UnNormalizeMetric(const class CMotionMetricEvaluator  *, int, float); /* linkage=_ZNK22CMotionMetricEvaluator17UnNormalizeMetricEif */
	void UnNormalizeVectorValues(const class CMotionMetricEvaluator  *, float *); /* linkage=_ZNK22CMotionMetricEvaluator23UnNormalizeVectorValuesEPf */
	void GetNormalizedGoalVectorValues(const class CMotionMetricEvaluator  *, const class CAnimGraphUpdateContext  &, class HSequence, float, bool, float, float *); /* linkage=_ZNK22CMotionMetricEvaluator29GetNormalizedGoalVectorValuesERK23CAnimGraphUpdateContext9HSequencefbfPf */
	void GetNormalizedCurrentVectorValues(const class CMotionMetricEvaluator  *, const class CAnimGraphUpdateContext  &, const class DistanceScalingSettings  &, class HSequence, float, float *); /* linkage=_ZNK22CMotionMetricEvaluator32GetNormalizedCurrentVectorValuesERK23CAnimGraphUpdateContextRK23DistanceScalingSettings9HSequencefPf */
	class MotionCorrection GetMotionCorrection(const class CMotionMetricEvaluator  *, const class CAnimGraphUpdateContext  &, const float  *, const float  *); /* linkage=_ZNK22CMotionMetricEvaluator19GetMotionCorrectionERK23CAnimGraphUpdateContextPKfS4_ */
	/* <19738fc> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.h:95 */
	virtual void CalculateFilterValues(const class CMotionMetricEvaluator  *, const class CAnimGraphUpdateContext  &, float *, float *); /* linkage=_ZNK22CMotionMetricEvaluator21CalculateFilterValuesERK23CAnimGraphUpdateContextPfS3_ */
	void NormalizeVectorValues(const class CMotionMetricEvaluator  *, float *); /* linkage=_ZNK22CMotionMetricEvaluator21NormalizeVectorValuesEPf */
	virtual void CalculateSequenceValues(const class CMotionMetricEvaluator  *, const class CModel  *, class CMotionMetricInitContext *, class HSequence, float, bool, float, float *); /* linkage=_ZNK22CMotionMetricEvaluator23CalculateSequenceValuesEPK6CModelP24CMotionMetricInitContext9HSequencefbfPf */
	virtual bool CalculateGoalValues(const class CMotionMetricEvaluator  *, const class CAnimGraphUpdateContext  &, class HSequence, float, bool, float, float *); /* linkage=_ZNK22CMotionMetricEvaluator19CalculateGoalValuesERK23CAnimGraphUpdateContext9HSequencefbfPf */
	virtual bool CalculateCurrentValues(const class CMotionMetricEvaluator  *, const class CAnimGraphUpdateContext  &, const class DistanceScalingSettings  &, class HSequence, float, float *); /* linkage=_ZNK22CMotionMetricEvaluator22CalculateCurrentValuesERK23CAnimGraphUpdateContextRK23DistanceScalingSettings9HSequencefPf */
	virtual class MotionCorrection CalculateMotionCorrection(const class CMotionMetricEvaluator  *, const class CAnimGraphUpdateContext  &, const float  *, const float  *); /* linkage=_ZNK22CMotionMetricEvaluator25CalculateMotionCorrectionERK23CAnimGraphUpdateContextPKfS4_ */
};

// <019738FC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.h:95
void CMotionMetricEvaluator::CalculateFilterValues(const CAnimGraphUpdateContext& context, float* pMinValuesOut, float* pMaxValuesOut)
{
} /* size: 5 */

// <0196DC04> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.h:95
inline void CMotionMetricEvaluator::CalculateFilterValues(const CAnimGraphUpdateContext& context, float* pMinValuesOut, float* pMaxValuesOut)
{
} /* size: 0 */

// <0164A728> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.h:105
void CMotionMetricEvaluator::CalculateGoalValues(const CAnimGraphUpdateContext& context, HSequence hSequence, float flCurrentCycle, bool bLoop, float flPredictionTime, float* pVectorDataOut)
{
} /* size: 7 */

// <0164A6B4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.h:109
void CMotionMetricEvaluator::CalculateCurrentValues(const CAnimGraphUpdateContext& context, const DistanceScalingSettings& distanceScale, HSequence hSequence, float flCycle, float* pVectorDataOut)
{
} /* size: 7 */

// <0164A477> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.h:113
// function calls: 5
void CMotionMetricEvaluator::CalculateMotionCorrection(const CAnimGraphUpdateContext& context, const float* pClipVectorData, const float* pGoalVectorData)
{
	{
	}
	{
	}
	CRotation::CRotation(
			angle_t angleDegrees);  // 23
	CRotation::CRotation(
			angle_t angleDegrees);  // 31
	RotationCorrection::RotationCorrection(); // 39
	PositionCorrection::PositionCorrection(); // 39
	MotionCorrection::MotionCorrection(); // 113
} /* size: 117, inline expansions: 5 (187 bytes) */

