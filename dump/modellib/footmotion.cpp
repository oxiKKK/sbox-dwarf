
//
// modellib/footmotion.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 39
//

// <0543EF93> modellib/footmotion.cpp:10
float NormalizeCycle(float flCycle)
{
} /* size: 0 */

// <0543EE6F> modellib/footmotion.cpp:25
// variables: 2
// function calls: 3
float LerpCycle(float flLerpValue, float flCycleA, float flCycleB, bool bNormalize)
{
	float altCycleB; // 28
	float newCycle; // 32
	Lerp<float>(float flPercent,
			const float& A,
			const float& B);  // 32
	NormalizeCycle(float flCycle); // 10
	NormalizeCycle(float flCycle); // 36
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <0543F72A> modellib/footmotion.cpp:44
// function calls: 2
void CCycleBase::Normalize()
{
	NormalizeCycle(float flCycle); // 10
	NormalizeCycle(float flCycle); // 46
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0543EE53> modellib/footmotion.cpp:44
void CCycleBase::Normalize()
{
} /* size: 0 */

// <0543ED18> modellib/footmotion.cpp:50
// function calls: 4
void CFootCycleDefinition::GetStageForCycle(const CFootCycle& footCycle)
{
	CCycleBase::operator>=(
			const CCycleBase& rhs);  // 52
	CCycleBase::operator>=(
			const CCycleBase& rhs);  // 56
	CCycleBase::operator>=(
			const CCycleBase& rhs);  // 60
	CCycleBase::operator>=(
			const CCycleBase& rhs);  // 64
} /* size: 0, inline expansions: 4 (0 bytes) */

// <0543EC94> modellib/footmotion.cpp:76
// function call: 1
void CFootTrajectory::CFootTrajectory()
{
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 77
} /* size: 27, inline expansions: 1 (15 bytes) */

// <0543EC78> modellib/footmotion.cpp:76
void CFootTrajectory::CFootTrajectory()
{
} /* size: 0 */

// <0543F64B> modellib/footmotion.cpp:84
void Vector& vPositionOffset, const CFootTrajectory::CFootTrajectory()
{
	{
		{
		}
	}
} /* size: 23 */

// <0543EB9D> modellib/footmotion.cpp:84
void CFootTrajectory::CFootTrajectory(const Vector& vPositionOffset, float flRotationOffset, float flProgression)
{
	{
		{
		}
		{
		}
	}
	{
		{
		}
	}
} /* size: 0 */

// <0543EB1C> modellib/footmotion.cpp:84
// variables: 3
void CFootTrajectory::CFootTrajectory(const Vector& vPositionOffset, float flRotationOffset, float flProgression)
{
	const char   __FUNCTION__; // 63008
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 90
	}
} /* size: 0, variables: 1 */

// <022A69BD> modellib/footmotion.cpp:84
// variables: 3
void CFootTrajectory::CFootTrajectory(const Vector& vPositionOffset, float flRotationOffset, float flProgression)
{
	const char   __FUNCTION__; // 17334
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 90
	}
} /* size: 0, variables: 1 */

// <0136175D> modellib/footmotion.cpp:84
// variables: 3
void CFootTrajectory::CFootTrajectory(const Vector& vPositionOffset, float flRotationOffset, float flProgression)
{
	const char   __FUNCTION__; // 11974
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 90
	}
} /* size: 0, variables: 1 */

// <0543F7A5> modellib/footmotion.cpp:95
void CFootTrajectory::GetOffset()
{
} /* size: 0 */

// <0543EA85> modellib/footmotion.cpp:102
// function call: 1
void CFootTrajectory::SetOffset(const Vector& vOffset)
{
	Vector::operator=(
			const Vector& vOther);  // 104
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0543F7CE> modellib/footmotion.cpp:109
void CFootTrajectory::GetRotationOffset()
{
} /* size: 0 */

// <0543EA2A> modellib/footmotion.cpp:116
void CFootTrajectory::SetRotationOffset(float flRotationOffset)
{
} /* size: 0 */

// <0543F7F7> modellib/footmotion.cpp:123
void CFootTrajectory::GetProgression()
{
} /* size: 0 */

// <0543E938> modellib/footmotion.cpp:130
// variables: 3
void CFootTrajectory::SetProgression(float flProgression)
{
	const char   __FUNCTION__; // 62981
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 132
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 133
	}
} /* size: 0, variables: 1 */

// <022A67D9> modellib/footmotion.cpp:130
// variables: 3
void CFootTrajectory::SetProgression(float flProgression)
{
	const char   __FUNCTION__; // 17307
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 132
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 133
	}
} /* size: 0, variables: 1 */

// <01361579> modellib/footmotion.cpp:130
// variables: 3
void CFootTrajectory::SetProgression(float flProgression)
{
	const char   __FUNCTION__; // 11947
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 132
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 133
	}
} /* size: 0, variables: 1 */

// <0543E32B> modellib/footmotion.cpp:139
// variables: 6
// function calls: 25
void CFootTrajectories::GetTrajectoryAtCycle(CFootCycle flFootCycle)
{
	const char   __FUNCTION__; // 63123
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 141
	}
	{
		float flSubIndex; // 145
		float flLowIndex; // 147
		float flHighIndex; // 148
		float flLerpValue; // 150
		CCycleBase::GetValue(); // 145
		CUtlMemory<CFootTrajectory, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CFootTrajectory, CUtlMemory<CFootTrajectory, int> >::operator[](
				int i);  // 152
		CUtlMemory<CFootTrajectory, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CFootTrajectory, CUtlMemory<CFootTrajectory, int> >::operator[](
				int i);  // 152
		CFootTrajectory::GetProgression(); // 242
		CFootTrajectory::GetProgression(); // 242
		Lerp<float>(float flPercent,
				const float& A,
				const float& B);  // 242
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 262
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 262
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 262
		Lerp<Vector>(float flPercent,
				const Vector& A,
				const Vector& B);  // 240
		{
			{
			}
		}
		CFootTrajectory::CFootTrajectory(
				const Vector& vPositionOffset,
				float flRotationOffset,
				float flProgression);  // 242
		Lerp<CFootTrajectory>(float flPercent,
					const CFootTrajectory& A,
					const CFootTrajectory& B);  // 152
	}
	CCycleBase::IsNormalized(); // 141
	CUtlVectorBase<CFootTrajectory, CUtlMemory<CFootTrajectory, int> >::Count(); // 135
	CUtlVectorBase<CFootTrajectory, CUtlMemory<CFootTrajectory, int> >::IsEmpty(); // 143
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 77
	CFootTrajectory::CFootTrajectory(); // 156
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <022A61CC> modellib/footmotion.cpp:139
// variables: 6
// function calls: 25
void CFootTrajectories::GetTrajectoryAtCycle(CFootCycle flFootCycle)
{
	const char   __FUNCTION__; // 17449
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 141
	}
	{
		float flSubIndex; // 145
		float flLowIndex; // 147
		float flHighIndex; // 148
		float flLerpValue; // 150
		CCycleBase::GetValue(); // 145
		CUtlMemory<CFootTrajectory, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CFootTrajectory, CUtlMemory<CFootTrajectory, int> >::operator[](
				int i);  // 152
		CUtlMemory<CFootTrajectory, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CFootTrajectory, CUtlMemory<CFootTrajectory, int> >::operator[](
				int i);  // 152
		CFootTrajectory::GetProgression(); // 242
		CFootTrajectory::GetProgression(); // 242
		Lerp<float>(float flPercent,
				const float& A,
				const float& B);  // 242
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 262
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 262
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 262
		Lerp<Vector>(float flPercent,
				const Vector& A,
				const Vector& B);  // 240
		{
			{
			}
		}
		CFootTrajectory::CFootTrajectory(
				const Vector& vPositionOffset,
				float flRotationOffset,
				float flProgression);  // 242
		Lerp<CFootTrajectory>(float flPercent,
					const CFootTrajectory& A,
					const CFootTrajectory& B);  // 152
	}
	CCycleBase::IsNormalized(); // 141
	CUtlVectorBase<CFootTrajectory, CUtlMemory<CFootTrajectory, int> >::Count(); // 135
	CUtlVectorBase<CFootTrajectory, CUtlMemory<CFootTrajectory, int> >::IsEmpty(); // 143
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 77
	CFootTrajectory::CFootTrajectory(); // 156
} /* size: 0, variables: 1, inline expansions: 5 (77 bytes) */

// <01360F6C> modellib/footmotion.cpp:139
// variables: 6
// function calls: 25
void CFootTrajectories::GetTrajectoryAtCycle(CFootCycle flFootCycle)
{
	const char   __FUNCTION__; // 12089
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 141
	}
	{
		float flSubIndex; // 145
		float flLowIndex; // 147
		float flHighIndex; // 148
		float flLerpValue; // 150
		CCycleBase::GetValue(); // 145
		CUtlMemory<CFootTrajectory, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CFootTrajectory, CUtlMemory<CFootTrajectory, int> >::operator[](
				int i);  // 152
		CUtlMemory<CFootTrajectory, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CFootTrajectory, CUtlMemory<CFootTrajectory, int> >::operator[](
				int i);  // 152
		CFootTrajectory::GetProgression(); // 242
		CFootTrajectory::GetProgression(); // 242
		Lerp<float>(float flPercent,
				const float& A,
				const float& B);  // 242
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 262
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 262
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 262
		Lerp<Vector>(float flPercent,
				const Vector& A,
				const Vector& B);  // 240
		{
			{
			}
		}
		CFootTrajectory::CFootTrajectory(
				const Vector& vPositionOffset,
				float flRotationOffset,
				float flProgression);  // 242
		Lerp<CFootTrajectory>(float flPercent,
					const CFootTrajectory& A,
					const CFootTrajectory& B);  // 152
	}
	CCycleBase::IsNormalized(); // 141
	CUtlVectorBase<CFootTrajectory, CUtlMemory<CFootTrajectory, int> >::Count(); // 135
	CUtlVectorBase<CFootTrajectory, CUtlMemory<CFootTrajectory, int> >::IsEmpty(); // 143
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 77
	CFootTrajectory::CFootTrajectory(); // 156
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <0543E1DF> modellib/footmotion.cpp:162
// function calls: 6
void CFootMotion::CFootMotion()
{
	CUtlMemory<CFootStride, int>::ValidateGrowSize(); // 475
	CUtlMemory<CFootStride, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CFootStride, CUtlMemory<CFootStride, int> >::CUtlVector(); // 162
	CUtlString::CUtlString(); // 162
} /* size: 48, inline expansions: 6 (53 bytes) */

// <0543E1C3> modellib/footmotion.cpp:162
void CFootMotion::CFootMotion()
{
} /* size: 0 */

// <0543E080> modellib/footmotion.cpp:168
// function calls: 4
void CFootMotion::SetName(const CUtlString& name)
{
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 170
} /* size: 0, inline expansions: 4 (0 bytes) */

// <0543E04F> modellib/footmotion.cpp:175
void CFootMotion::GetName()
{
} /* size: 0 */

// <0543E01E> modellib/footmotion.cpp:181
void CFootMotion::IsAdditive()
{
} /* size: 0 */

// <0543DFDF> modellib/footmotion.cpp:187
void CFootMotion::SetAdditive(bool bAdditive)
{
} /* size: 0 */

// <0543DF7F> modellib/footmotion.cpp:194
// function call: 1
void CFootMotion::GetFootCycleCount()
{
	CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::Count(); // 196
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0543DEC7> modellib/footmotion.cpp:201
// function calls: 2
void CFootMotion::GetFootCycleDefinition(int nIndex)
{
	CUtlMemory<CFootStride, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::operator[](
			int i);  // 203
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0543DE0F> modellib/footmotion.cpp:208
// function calls: 2
void CFootMotion::GetFootTrajectories(int nIndex)
{
	CUtlMemory<CFootStride, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::operator[](
			int i);  // 210
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0543DB41> modellib/footmotion.cpp:215
// variables: 4
// function calls: 11
void CFootMotion::GetIndexForCycle(const CAnimCycle& flAnimCycle)
{
	{
		int nIndex; // 223
		{
			int i; // 226
			{
				CAnimCycle prevCycle; // 228
				CAnimCycle nextCycle; // 229
				CUtlMemory<CFootStride, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::operator[](
						int i);  // 228
				CCycleBase::GetValue(); // 125
				CCycleBase::CCycleBase(
						float flCycle);  // 125
				CAnimCycle::CAnimCycle(
						const CAnimCycle& rhs);  // 228
				CUtlMemory<CFootStride, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::operator[](
						int i);  // 229
				CCycleBase::GetValue(); // 125
				CCycleBase::CCycleBase(
						float flCycle);  // 125
				CAnimCycle::CAnimCycle(
						const CAnimCycle& rhs);  // 229
			}
		}
	}
	CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::Count(); // 217
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0543D3AB> modellib/footmotion.cpp:255
// variables: 12
// function calls: 27
void CFootMotion::AnimCycleToFootCycle(int nIndex, CAnimCycle animCycle)
{
	const char   __FUNCTION__; // 63123
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 257
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 258
	}
	{
		const int  nNextIndex; // 262
		const CFootCycleDefinition& prevCycleDef; // 264
		const CFootCycleDefinition& nextCycleDef; // 265
		const float  flStanceCycle; // 267
		float flNextStanceCycle; // 273
		float flFootCycleRange; // 286
		CFootCycle footCycle; // 290
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 284
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 287
		}
		CUtlMemory<CFootStride, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::operator[](
				int i);  // 264
		CUtlMemory<CFootStride, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::operator[](
				int i);  // 265
		CCycleBase::GetValue(); // 267
		CCycleBase::CCycleBase(
				float flCycle);  // 126
		CFootCycle::CFootCycle(
				float flCycle);  // 270
		CCycleBase::GetValue(); // 273
		CCycleBase::GetValue(); // 284
		CCycleBase::CCycleBase(
				float flCycle);  // 126
		CFootCycle::CFootCycle(
				float flCycle);  // 290
		CCycleBase::GetValue(); // 293
		CCycleBase::CCycleBase(
				float flCycle);  // 126
		CFootCycle::CFootCycle(
				float flCycle);  // 293
		NormalizeCycle(float flCycle); // 10
		NormalizeCycle(float flCycle); // 46
		CCycleBase::Normalize(); // 294
		CCycleBase::GetValue(); // 126
		CCycleBase::CCycleBase(
				float flCycle);  // 126
		CFootCycle::CFootCycle(
				const CFootCycle& rhs);  // 297
		CAnimCycle::operator+=(
				float flValue);  // 280
	}
	CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::Count(); // 258
	CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::Count(); // 135
	CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::IsEmpty(); // 260
	CCycleBase::IsNormalized(); // 260
	CCycleBase::CCycleBase(
			float flCycle);  // 126
	CFootCycle::CFootCycle(
			float flCycle);  // 301
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <022A524C> modellib/footmotion.cpp:255
// variables: 12
// function calls: 27
void CFootMotion::AnimCycleToFootCycle(int nIndex, CAnimCycle animCycle)
{
	const char   __FUNCTION__; // 17449
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 257
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 258
	}
	{
		const int  nNextIndex; // 262
		const CFootCycleDefinition& prevCycleDef; // 264
		const CFootCycleDefinition& nextCycleDef; // 265
		const float  flStanceCycle; // 267
		float flNextStanceCycle; // 273
		float flFootCycleRange; // 286
		CFootCycle footCycle; // 290
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 284
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 287
		}
		CUtlMemory<CFootStride, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::operator[](
				int i);  // 264
		CUtlMemory<CFootStride, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::operator[](
				int i);  // 265
		CCycleBase::GetValue(); // 267
		CCycleBase::CCycleBase(
				float flCycle);  // 126
		CFootCycle::CFootCycle(
				float flCycle);  // 270
		CCycleBase::GetValue(); // 273
		CCycleBase::GetValue(); // 284
		CCycleBase::CCycleBase(
				float flCycle);  // 126
		CFootCycle::CFootCycle(
				float flCycle);  // 290
		CCycleBase::GetValue(); // 293
		CCycleBase::CCycleBase(
				float flCycle);  // 126
		CFootCycle::CFootCycle(
				float flCycle);  // 293
		NormalizeCycle(float flCycle); // 10
		NormalizeCycle(float flCycle); // 46
		CCycleBase::Normalize(); // 294
		CCycleBase::GetValue(); // 126
		CCycleBase::CCycleBase(
				float flCycle);  // 126
		CFootCycle::CFootCycle(
				const CFootCycle& rhs);  // 297
		CAnimCycle::operator+=(
				float flValue);  // 280
	}
	CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::Count(); // 258
	CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::Count(); // 135
	CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::IsEmpty(); // 260
	CCycleBase::IsNormalized(); // 260
	CCycleBase::CCycleBase(
			float flCycle);  // 126
	CFootCycle::CFootCycle(
			float flCycle);  // 301
} /* size: 0, variables: 1, inline expansions: 6 (88 bytes) */

// <0135FFEC> modellib/footmotion.cpp:255
// variables: 12
// function calls: 27
void CFootMotion::AnimCycleToFootCycle(int nIndex, CAnimCycle animCycle)
{
	const char   __FUNCTION__; // 12089
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 257
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 258
	}
	{
		const int  nNextIndex; // 262
		const CFootCycleDefinition& prevCycleDef; // 264
		const CFootCycleDefinition& nextCycleDef; // 265
		const float  flStanceCycle; // 267
		float flNextStanceCycle; // 273
		float flFootCycleRange; // 286
		CFootCycle footCycle; // 290
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 284
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 287
		}
		CUtlMemory<CFootStride, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::operator[](
				int i);  // 264
		CUtlMemory<CFootStride, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::operator[](
				int i);  // 265
		CCycleBase::GetValue(); // 267
		CCycleBase::CCycleBase(
				float flCycle);  // 126
		CFootCycle::CFootCycle(
				float flCycle);  // 270
		CCycleBase::GetValue(); // 273
		CCycleBase::GetValue(); // 284
		CCycleBase::CCycleBase(
				float flCycle);  // 126
		CFootCycle::CFootCycle(
				float flCycle);  // 290
		CCycleBase::GetValue(); // 293
		CCycleBase::CCycleBase(
				float flCycle);  // 126
		CFootCycle::CFootCycle(
				float flCycle);  // 293
		NormalizeCycle(float flCycle); // 10
		NormalizeCycle(float flCycle); // 46
		CCycleBase::Normalize(); // 294
		CCycleBase::GetValue(); // 126
		CCycleBase::CCycleBase(
				float flCycle);  // 126
		CFootCycle::CFootCycle(
				const CFootCycle& rhs);  // 297
		CAnimCycle::operator+=(
				float flValue);  // 280
	}
	CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::Count(); // 258
	CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::Count(); // 135
	CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::IsEmpty(); // 260
	CCycleBase::IsNormalized(); // 260
	CCycleBase::CCycleBase(
			float flCycle);  // 126
	CFootCycle::CFootCycle(
			float flCycle);  // 301
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <0543CE65> modellib/footmotion.cpp:307
// variables: 12
// function calls: 18
void CFootMotion::FootCycleToAnimCycle(int nIndex, CFootCycle footCycle)
{
	const char   __FUNCTION__; // 63123
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 309
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 310
	}
	{
		const int  nNextIndex; // 314
		const CFootCycleDefinition& prevCycleDef; // 316
		const CFootCycleDefinition& nextCycleDef; // 317
		const float  flStanceCycle; // 319
		float flNextStanceCycle; // 321
		float flFootCycleRange; // 327
		float flCycle; // 330
		CAnimCycle animCycle; // 334
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 328
		}
		CUtlMemory<CFootStride, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::operator[](
				int i);  // 316
		CUtlMemory<CFootStride, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::operator[](
				int i);  // 317
		CCycleBase::GetValue(); // 319
		CCycleBase::GetValue(); // 321
		CCycleBase::GetValue(); // 330
		CCycleBase::CCycleBase(
				float flCycle);  // 125
		CAnimCycle::CAnimCycle(
				float flCycle);  // 334
		NormalizeCycle(float flCycle); // 10
		NormalizeCycle(float flCycle); // 46
		CCycleBase::Normalize(); // 335
	}
	CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::Count(); // 310
	CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::Count(); // 135
	CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::IsEmpty(); // 312
	CCycleBase::IsNormalized(); // 312
	CCycleBase::CCycleBase(
			float flCycle);  // 125
	CAnimCycle::CAnimCycle(
			float flCycle);  // 340
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <022A4D06> modellib/footmotion.cpp:307
// variables: 12
// function calls: 18
void CFootMotion::FootCycleToAnimCycle(int nIndex, CFootCycle footCycle)
{
	const char   __FUNCTION__; // 17449
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 309
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 310
	}
	{
		const int  nNextIndex; // 314
		const CFootCycleDefinition& prevCycleDef; // 316
		const CFootCycleDefinition& nextCycleDef; // 317
		const float  flStanceCycle; // 319
		float flNextStanceCycle; // 321
		float flFootCycleRange; // 327
		float flCycle; // 330
		CAnimCycle animCycle; // 334
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 328
		}
		CUtlMemory<CFootStride, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::operator[](
				int i);  // 316
		CUtlMemory<CFootStride, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::operator[](
				int i);  // 317
		CCycleBase::GetValue(); // 319
		CCycleBase::GetValue(); // 321
		CCycleBase::GetValue(); // 330
		CCycleBase::CCycleBase(
				float flCycle);  // 125
		CAnimCycle::CAnimCycle(
				float flCycle);  // 334
		NormalizeCycle(float flCycle); // 10
		NormalizeCycle(float flCycle); // 46
		CCycleBase::Normalize(); // 335
	}
	CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::Count(); // 310
	CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::Count(); // 135
	CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::IsEmpty(); // 312
	CCycleBase::IsNormalized(); // 312
	CCycleBase::CCycleBase(
			float flCycle);  // 125
	CAnimCycle::CAnimCycle(
			float flCycle);  // 340
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <0135FAA6> modellib/footmotion.cpp:307
// variables: 12
// function calls: 18
void CFootMotion::FootCycleToAnimCycle(int nIndex, CFootCycle footCycle)
{
	const char   __FUNCTION__; // 12089
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 309
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 310
	}
	{
		const int  nNextIndex; // 314
		const CFootCycleDefinition& prevCycleDef; // 316
		const CFootCycleDefinition& nextCycleDef; // 317
		const float  flStanceCycle; // 319
		float flNextStanceCycle; // 321
		float flFootCycleRange; // 327
		float flCycle; // 330
		CAnimCycle animCycle; // 334
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 328
		}
		CUtlMemory<CFootStride, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::operator[](
				int i);  // 316
		CUtlMemory<CFootStride, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::operator[](
				int i);  // 317
		CCycleBase::GetValue(); // 319
		CCycleBase::GetValue(); // 321
		CCycleBase::GetValue(); // 330
		CCycleBase::CCycleBase(
				float flCycle);  // 125
		CAnimCycle::CAnimCycle(
				float flCycle);  // 334
		NormalizeCycle(float flCycle); // 10
		NormalizeCycle(float flCycle); // 46
		CCycleBase::Normalize(); // 335
	}
	CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::Count(); // 310
	CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::Count(); // 135
	CUtlVectorBase<CFootStride, CUtlMemory<CFootStride, int> >::IsEmpty(); // 312
	CCycleBase::IsNormalized(); // 312
	CCycleBase::CCycleBase(
			float flCycle);  // 125
	CAnimCycle::CAnimCycle(
			float flCycle);  // 340
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

