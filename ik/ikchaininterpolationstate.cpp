
//
// ik/ikchaininterpolationstate.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//

// <0329AB21> ik/ikchaininterpolationstate.cpp:43
// function calls: 5
void CIKChainInterpolationState::CIKChainInterpolationState()
{
	CUtlMemory<CIKChainRuleInterpolationState, int>::ValidateGrowSize(); // 475
	CUtlMemory<CIKChainRuleInterpolationState, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::CUtlVector(); // 61
} /* size: 221, inline expansions: 5 (77 bytes) */

// <0329AB05> ik/ikchaininterpolationstate.cpp:43
void CIKChainInterpolationState::CIKChainInterpolationState()
{
} /* size: 0 */

// <0329A56B> ik/ikchaininterpolationstate.cpp:65
// function calls: 25
void CIKChainInterpolationState::CopyFrom(const CIKChainInterpolationState* pOther)
{
	CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::Count(); // 573
	CUtlMemory<CIKChainRuleInterpolationState, int>::Base(); // 112
	CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::Base(); // 102
	CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::begin(); // 574
	CUtlMemory<CIKChainRuleInterpolationState, int>::Base(); // 113
	CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::Base(); // 105
	CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::Count(); // 105
	CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::end(); // 574
	UtlTraitsCopyRange<CIKChainRuleInterpolationState>(const CIKChainRuleInterpolationState* pFrom,
								const CIKChainRuleInterpolationState* pFromEnd,
								CIKChainRuleInterpolationState* pTo);  // 200
	UtlTraitsCopyRange<CIKChainRuleInterpolationState>(const CIKChainRuleInterpolationState* pFrom,
								const CIKChainRuleInterpolationState* pFromEnd,
								CIKChainRuleInterpolationState* pTo);  // 574
	CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::operator=(
			const CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >& other);  // 565
	CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::operator=(
			const CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >& other);  // 452
	CUtlVector<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::operator=(
			const CUtlVector<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >& src);  // 83
	Vector::operator=(
			const Vector& vOther);  // 75
	Vector::operator=(
			const Vector& vOther);  // 75
	Vector::operator=(
			const Vector& vOther);  // 75
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 76
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 76
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 84
} /* size: 0, inline expansions: 25 (0 bytes) */

// <0329964B> ik/ikchaininterpolationstate.cpp:88
// variables: 5
// function calls: 64
void CIKChainInterpolationState::LerpFrom(const CIKChainInterpolationState* pState1, const CIKChainInterpolationState* pState2, float flAlpha)
{
	const float  flInterpAlpha; // 105
	const char   __FUNCTION__; // 3152
	int nChainRules; // 114
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 113
	}
	{
		int n; // 117
		CUtlMemory<CIKChainRuleInterpolationState, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::operator[](
				int i);  // 119
		CUtlMemory<CIKChainRuleInterpolationState, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::operator[](
				int i);  // 119
		CUtlMemory<CIKChainRuleInterpolationState, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::operator[](
				int i);  // 119
	}
	Lerp<float>(float flPercent,
			const float& A,
			const float& B);  // 97
	Lerp<float>(float flPercent,
			const float& A,
			const float& B);  // 97
	Lerp<float>(float flPercent,
			const float& A,
			const float& B);  // 97
	Lerp<float>(float flPercent,
			const float& A,
			const float& B);  // 97
	Lerp<float>(float flPercent,
			const float& A,
			const float& B);  // 97
	Lerp<float>(float flPercent,
			const float& A,
			const float& B);  // 97
	Lerp<float>(float flPercent,
			const float& A,
			const float& B);  // 97
	Lerp<float>(float flPercent,
			const float& A,
			const float& B);  // 97
	Lerp<float>(float flPercent,
			const float& A,
			const float& B);  // 97
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 262
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 262
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 262
	Lerp<Vector>(float flPercent,
			const Vector& A,
			const Vector& B);  // 98
	Vector::operator=(
			const Vector& vOther);  // 98
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 262
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 262
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 262
	Lerp<Vector>(float flPercent,
			const Vector& A,
			const Vector& B);  // 98
	Vector::operator=(
			const Vector& vOther);  // 98
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 262
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 262
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 262
	Lerp<Vector>(float flPercent,
			const Vector& A,
			const Vector& B);  // 98
	Vector::operator=(
			const Vector& vOther);  // 98
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			CTransform &);  // 99
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			CTransform &);  // 99
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 105
	ConVar::GetFloat(); // 105
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 109
	CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::Count(); // 113
	CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::Count(); // 113
	Min<int>(const int& val1,
		const int& val2);  // 114
	CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::Count(); // 114
	CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::Count(); // 114
} /* size: 0, variables: 3, inline expansions: 58 (0 bytes) */

