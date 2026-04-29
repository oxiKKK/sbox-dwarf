
//
// animgraph/bonevelocitymetricevaluator.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//

// <0164A21A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetricevaluator.cpp:12
void CBoneVelocityMetricEvaluator::CBoneVelocityMetricEvaluator(CPackedData& packedData, int nBoneIndex, float flWeight)
{
} /* size: 46 */

// <0164A156> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetricevaluator.cpp:20
// function call: 1
void CBoneVelocityMetricEvaluator::GetUIName()
{
	CUtlString::CUtlString(
			const char* pString);  // 22
} /* size: 44, inline expansions: 1 (19 bytes) */

// <01649D30> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetricevaluator.cpp:26
// variables: 8
// function calls: 10
void CBoneVelocityMetricEvaluator::CalculateSequenceValues(const CModel* pModel, CMotionMetricInitContext* pContext, HSequence hSequence, float flCycle, bool bLoop, float flPredictionTime, float* pVectorDataOut)
{
	{
		const float  flDuration; // 30
		float flAnimTime; // 32
		float timeSamples; // 34
		Vector bonePositions; // 62
		Vector vVelocity; // 68
		{
			int i; // 42
			clamp<float, float>(const float& val,
						const float& minVal,
						const float& maxVal);  // 44
		}
		{
			int i; // 49
		}
		{
			int i; // 63
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 65
			Vector::operator=(
					const Vector& vOther);  // 65
		}
		Vector::Vector(); // 68
		Vector::operator/=(
				float fl);  // 71
	}
	HSequence::operator==(
			const HSequence& other);  // 28
} /* size: 551, inline expansions: 1 (0 bytes) */

