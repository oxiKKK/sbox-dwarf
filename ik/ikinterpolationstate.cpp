
//
// ik/ikinterpolationstate.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 14
//

// <0328975C> ik/ikinterpolationstate.cpp:11
// variables: 3
// function calls: 21
void CIKInterpolationState::IsIdenticalWithinTolerance(const CIKInterpolationState& rhs)
{
	const char   __FUNCTION__; // 1176
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 31
	}
	{
		int n; // 36
		CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::Count(); // 36
		CUtlMemory<CIKChainInterpolationState, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::operator[](
				int i);  // 38
		CUtlMemory<CIKChainInterpolationState, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::operator[](
				int i);  // 38
	}
	FloatsAreEqual(float f1,
			float f2,
			float flTolerance);  // 17
	FloatsAreEqual(float f1,
			float f2,
			float flTolerance);  // 20
	FloatMakePositive(vec_t f); // 1375
	VectorsAreEqual(const Vector& src1,
			const Vector& src2,
			float flTolerance);  // 22
	FloatMakePositive(vec_t f); // 1375
	VectorsAreEqual(const Vector& src1,
			const Vector& src2,
			float flTolerance);  // 23
	FloatMakePositive(vec_t f); // 1375
	VectorsAreEqual(const Vector& src1,
			const Vector& src2,
			float flTolerance);  // 24
	FloatMakePositive(vec_t f); // 1375
	VectorsAreEqual(const Vector& src1,
			const Vector& src2,
			float flTolerance);  // 25
	FloatMakePositive(vec_t f); // 1375
	VectorsAreEqual(const Vector& src1,
			const Vector& src2,
			float flTolerance);  // 26
	CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::Count(); // 31
	CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::Count(); // 31
	CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::Count(); // 33
	CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::Count(); // 33
} /* size: 0, variables: 1, inline expansions: 16 (0 bytes) */

// <03289696> ik/ikinterpolationstate.cpp:47
// function call: 1
void CIKInterpolationState::GetDebugSpeedString(float flPrevTime, float flNextTime, const CIKInterpolationState* pPrevValue)
{
	CUtlString::CUtlString(
			const char* pString);  // 49
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0328960C> ik/ikinterpolationstate.cpp:52
// function call: 1
void CIKInterpolationState::GetDebugString()
{
	CUtlString::CUtlString(
			const char* pString);  // 54
} /* size: 0, inline expansions: 1 (0 bytes) */

// <032895A5> ik/ikinterpolationstate.cpp:57
void CIKInterpolationState::operator=(const CIKInterpolationState& rhs)
{
} /* size: 0 */

// <03288BC6> ik/ikinterpolationstate.cpp:63
// variables: 3
// function calls: 43
void CIKInterpolationState::CopyFrom(const CIKInterpolationState* pOther)
{
	{
		int nIndex; // 91
		CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::Count(); // 91
		CUtlMemory<CIKChainInterpolationState, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::operator[](
				int i);  // 93
		CUtlMemory<CIKChainInterpolationState, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::operator[](
				int i);  // 93
	}
	Vector::operator=(
			const Vector& vOther);  // 66
	Vector::operator=(
			const Vector& vOther);  // 67
	Vector::operator=(
			const Vector& vOther);  // 68
	Vector::operator=(
			const Vector& vOther);  // 69
	Vector::operator=(
			const Vector& vOther);  // 70
	CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::Count(); // 89
	CUtlMemory<CIKChainInterpolationState, int>::ValidateGrowSize(); // 475
	CUtlMemory<CIKChainInterpolationState, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::CUtlVector(); // 87
	{
		int i; // 1721
		CUtlMemory<CIKChainInterpolationState, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::Element(
			int i);  // 1723
		{
			int i; // 1721
			CUtlMemory<CIKChainRuleInterpolationState, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::Element(
				int i);  // 1723
			Destruct<CIKChainRuleInterpolationState>(CIKChainRuleInterpolationState* pMemory); // 1723
		}
		CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::RemoveAll(); // 1798
		CUtlMemory<CIKChainRuleInterpolationState, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CIKChainRuleInterpolationState, int>::Purge(); // 903
		CUtlMemory<CIKChainRuleInterpolationState, int>::Purge(); // 1799
		CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::Purge(); // 560
		ValidateAlignment<CIKChainRuleInterpolationState>(void); // 508
		CUtlMemory<CIKChainRuleInterpolationState, int>::Purge(); // 510
		CUtlMemory<CIKChainRuleInterpolationState, int>::~CUtlMemory(); // 562
		CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::~CUtlVector(); // 9
		CIKChainInterpolationState::~CIKChainInterpolationState(); // 1526
		Destruct<CIKChainInterpolationState>(CIKChainInterpolationState* pMemory); // 1723
	}
	CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::RemoveAll(); // 1798
	CUtlMemory<CIKChainInterpolationState, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CIKChainInterpolationState, int>::Purge(); // 903
	CUtlMemory<CIKChainInterpolationState, int>::Purge(); // 1799
	CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::Purge(); // 560
	ValidateAlignment<CIKChainInterpolationState>(void); // 508
	CUtlMemory<CIKChainInterpolationState, int>::Purge(); // 510
	CUtlMemory<CIKChainInterpolationState, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::~CUtlVector(); // 80
} /* size: 0, inline expansions: 21 (0 bytes) */

// <03287407> ik/ikinterpolationstate.cpp:98
// variables: 6
// function calls: 105
void CIKInterpolationState::LerpFrom(const CIKInterpolationState* pState1, const CIKInterpolationState* pState2, float flAlpha)
{
	const char   __FUNCTION__; // 62096
	int nCount; // 132
	{
		int nCount; // 116
		{
			int n; // 118
			CUtlMemory<CIKChainInterpolationState, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::operator[](
					int i);  // 120
			CUtlMemory<CIKChainInterpolationState, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::operator[](
					int i);  // 120
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
					const CUtlVector<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >& src);  // 9
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					const CTransform  &);  // 9
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					const CTransform  &);  // 9
			Vector::operator=(
					const Vector& vOther);  // 9
			Vector::operator=(
					const Vector& vOther);  // 9
			Vector::operator=(
					const Vector& vOther);  // 9
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					const CTransform  &);  // 9
			CIKChainInterpolationState::operator=(
					const CIKChainInterpolationState  &);  // 120
		}
		CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::Count(); // 116
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 128
	}
	{
		int n; // 139
		CUtlMemory<CIKChainInterpolationState, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::operator[](
				int i);  // 141
		CUtlMemory<CIKChainInterpolationState, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::operator[](
				int i);  // 141
		CUtlMemory<CIKChainInterpolationState, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::operator[](
				int i);  // 141
	}
	Lerp<float>(float flPercent,
			const float& A,
			const float& B);  // 100
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 262
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 262
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 262
	Lerp<Vector>(float flPercent,
			const Vector& A,
			const Vector& B);  // 101
	Vector::Normalized(); // 101
	Vector::operator=(
			const Vector& vOther);  // 101
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
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 262
	Lerp<Vector>(float flPercent,
			const Vector& A,
			const Vector& B);  // 103
	Vector::operator=(
			const Vector& vOther);  // 103
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
			const Vector& B);  // 104
	Vector::operator=(
			const Vector& vOther);  // 104
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
			const Vector& B);  // 105
	Vector::operator=(
			const Vector& vOther);  // 105
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
			const Vector& B);  // 106
	Vector::operator=(
			const Vector& vOther);  // 106
	Lerp<float>(float flPercent,
			const float& A,
			const float& B);  // 111
	CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::Count(); // 128
	CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::Count(); // 128
	CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::Count(); // 132
	CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::Count(); // 132
	Min<int>(const int& val1,
		const int& val2);  // 132
	CUtlMemory<CIKChainInterpolationState, int>::ValidateGrowSize(); // 475
	CUtlMemory<CIKChainInterpolationState, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::CUtlVector(); // 136
} /* size: 0, variables: 2, inline expansions: 68 (0 bytes) */

// <03287309> ik/ikinterpolationstate.cpp:145
// variables: 2
void CIKInterpolationState::LerpHermiteFrom(const CIKInterpolationState& current, float flAlpha, const CIKInterpolationState& p0, const CIKInterpolationState& p1, const CIKInterpolationState& p2)
{
	const char   __FUNCTION__; // 56083
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 147
	}
} /* size: 0, variables: 1 */

// <032872AA> ik/ikinterpolationstate.cpp:150
// function call: 1
void CIKInterpolationState::CIKInterpolationState()
{
	CIKInterpolationState::Reset(); // 153
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0328728E> ik/ikinterpolationstate.cpp:150
void CIKInterpolationState::CIKInterpolationState()
{
} /* size: 0 */

// <03286CBD> ik/ikinterpolationstate.cpp:156
// variables: 2
// function calls: 28
void CIKInterpolationState::~CIKInterpolationState()
{
	{
		int i; // 1721
		CUtlMemory<CIKChainInterpolationState, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::Element(
			int i);  // 1723
		{
			int i; // 1721
			CUtlMemory<CIKChainRuleInterpolationState, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::Element(
				int i);  // 1723
			Destruct<CIKChainRuleInterpolationState>(CIKChainRuleInterpolationState* pMemory); // 1723
		}
		CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::RemoveAll(); // 1798
		CUtlMemory<CIKChainRuleInterpolationState, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CIKChainRuleInterpolationState, int>::Purge(); // 903
		CUtlMemory<CIKChainRuleInterpolationState, int>::Purge(); // 1799
		CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::Purge(); // 560
		ValidateAlignment<CIKChainRuleInterpolationState>(void); // 508
		CUtlMemory<CIKChainRuleInterpolationState, int>::Purge(); // 510
		CUtlMemory<CIKChainRuleInterpolationState, int>::~CUtlMemory(); // 562
		CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::~CUtlVector(); // 9
		CIKChainInterpolationState::~CIKChainInterpolationState(); // 1526
		Destruct<CIKChainInterpolationState>(CIKChainInterpolationState* pMemory); // 1723
	}
	CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::RemoveAll(); // 1798
	CUtlMemory<CIKChainInterpolationState, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CIKChainInterpolationState, int>::Purge(); // 903
	CUtlMemory<CIKChainInterpolationState, int>::Purge(); // 1799
	CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::Purge(); // 560
	ValidateAlignment<CIKChainInterpolationState>(void); // 508
	CUtlMemory<CIKChainInterpolationState, int>::Purge(); // 510
	CUtlMemory<CIKChainInterpolationState, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::~CUtlVector(); // 164
	CIKInterpolationState::Reset(); // 159
} /* size: 0, inline expansions: 11 (0 bytes) */

// <03286CA1> ik/ikinterpolationstate.cpp:156
void CIKInterpolationState::~CIKInterpolationState()
{
} /* size: 0 */

// <0328A2B8> ik/ikinterpolationstate.cpp:162
// variables: 2
// function calls: 27
void CIKInterpolationState::Reset()
{
	{
		int i; // 1721
		CUtlMemory<CIKChainInterpolationState, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::Element(
			int i);  // 1723
		{
			int i; // 1721
			CUtlMemory<CIKChainRuleInterpolationState, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::Element(
				int i);  // 1723
			Destruct<CIKChainRuleInterpolationState>(CIKChainRuleInterpolationState* pMemory); // 1723
		}
		CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::RemoveAll(); // 1798
		CUtlMemory<CIKChainRuleInterpolationState, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CIKChainRuleInterpolationState, int>::Purge(); // 903
		CUtlMemory<CIKChainRuleInterpolationState, int>::Purge(); // 1799
		CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::Purge(); // 560
		ValidateAlignment<CIKChainRuleInterpolationState>(void); // 508
		CUtlMemory<CIKChainRuleInterpolationState, int>::Purge(); // 510
		CUtlMemory<CIKChainRuleInterpolationState, int>::~CUtlMemory(); // 562
		CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::~CUtlVector(); // 9
		CIKChainInterpolationState::~CIKChainInterpolationState(); // 1526
		Destruct<CIKChainInterpolationState>(CIKChainInterpolationState* pMemory); // 1723
	}
	CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::RemoveAll(); // 1798
	CUtlMemory<CIKChainInterpolationState, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CIKChainInterpolationState, int>::Purge(); // 903
	CUtlMemory<CIKChainInterpolationState, int>::Purge(); // 1799
	CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::Purge(); // 560
	ValidateAlignment<CIKChainInterpolationState>(void); // 508
	CUtlMemory<CIKChainInterpolationState, int>::Purge(); // 510
	CUtlMemory<CIKChainInterpolationState, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::~CUtlVector(); // 164
} /* size: 296, inline expansions: 10 (886 bytes) */

// <03286C85> ik/ikinterpolationstate.cpp:162
void CIKInterpolationState::Reset()
{
} /* size: 0 */

// <03286C52> ik/ikinterpolationstate.cpp:168
void CIKInterpolationState::Invalidate()
{
} /* size: 13 */

