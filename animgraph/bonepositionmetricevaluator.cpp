
//
// animgraph/bonepositionmetricevaluator.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//

// <0164A3F2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetricevaluator.cpp:8
void CBonePositionMetricEvaluator::CBonePositionMetricEvaluator(CPackedData& packedData, int nBoneIndex, float flWeight)
{
} /* size: 46 */

// <0164A32E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetricevaluator.cpp:16
// function call: 1
void CBonePositionMetricEvaluator::GetUIName()
{
	CUtlString::CUtlString(
			const char* pString);  // 18
} /* size: 44, inline expansions: 1 (19 bytes) */

// <0164BFA0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetricevaluator.cpp:22
// variable: 1
// function calls: 6
void CBonePositionMetricEvaluator::CalculateSequenceValues(const CModel* pModel, CMotionMetricInitContext* pContext, HSequence hSequence, float flCycle, bool bLoop, float flPredictionTime, float* pVectorDataOut)
{
	HSequence::operator==(
			const HSequence& other);  // 24
	{
		Vector vBonePos; // 26
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 26
	}
} /* size: 113, inline expansions: 1 (0 bytes) */

// <0164A29F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetricevaluator.cpp:22
// variable: 1
void CBonePositionMetricEvaluator::CalculateSequenceValues(const CModel* pModel, CMotionMetricInitContext* pContext, HSequence hSequence, float flCycle, bool bLoop, float flPredictionTime, float* pVectorDataOut)
{
	{
		Vector vBonePos; // 26
	}
} /* size: 0 */

