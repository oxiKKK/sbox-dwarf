
//
// animgraph/animcomparisonoperation.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 8
//

// <00E4A2FB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animcomparisonoperation.cpp:21
// function call: 1
const char* GetComparisonOperationName(Comparison_t op)
{
	tokenset_t<Comparison_t>::GetNameByToken(
			Comparison_t checkToken);  // 23
} /* size: 75, inline expansions: 1 (54 bytes) */

// <00E49D25> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animcomparisonoperation.cpp:27
// variable: 1
// function calls: 25
void FillComparisonOperationChoices(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* pOutChoiceNames, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* pOutChoiceValues)
{
	{
		int i; // 29
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1252
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 1514
		Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
		CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
				CUtlString& src);  // 31
		CUtlString::~CUtlString(); // 31
		CUtlMemory<CUtlString, int>::NumAllocated(); // 1143
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1148
		CUtlString::CUtlString(); // 1479
		Construct<CUtlString>(CUtlString* pMemory); // 1148
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(); // 32
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 32
		CUtlString::CUtlString(
				const char* pString);  // 31
	}
} /* size: 0 */

// <00E22776> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animcomparisonoperation.cpp:38
// variables: 2
bool EvaluateTypedComparison<CAnimEnum>(const CAnimEnum& lhs, Comparison_t op, const CAnimEnum& rhs)
{
	const char   __FUNCTION__; // 10597
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 61
	}
} /* size: 0, variables: 1 */

// <00E2270C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animcomparisonoperation.cpp:38
// variables: 2
bool EvaluateTypedComparison<int>(const int& lhs, Comparison_t op, const int& rhs)
{
	const char   __FUNCTION__; // 10597
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 61
	}
} /* size: 0, variables: 1 */

// <00E49BE2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animcomparisonoperation.cpp:68
// variables: 2
// function calls: 2
bool EvaluateTypedComparison<float>(const float& lhs, Comparison_t op, const float& rhs)
{
	const char   __FUNCTION__; // 10776
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 91
	}
	CloseEnough(float a,
			float b,
			float epsilon);  // 73
	CloseEnough(float a,
			float b,
			float epsilon);  // 76
} /* size: 0, variables: 1, inline expansions: 2 (55 bytes) */

// <00E49B7E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animcomparisonoperation.cpp:98
// variables: 2
bool EvaluateTypedComparison<bool>(const bool& lhs, Comparison_t op, const bool& rhs)
{
	const char   __FUNCTION__; // 10749
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 109
	}
} /* size: 0, variables: 1 */

// <00E49A55> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animcomparisonoperation.cpp:116
// variables: 2
// function calls: 2
bool EvaluateTypedComparison<Vector>(const Vector& lhs, Comparison_t op, const Vector& rhs)
{
	const char   __FUNCTION__; // 10803
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 127
	}
	Vector::operator==(
			const Vector& src);  // 121
	Vector::operator!=(
			const Vector& src);  // 124
} /* size: 0, variables: 1, inline expansions: 2 (115 bytes) */

// <00E495E9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animcomparisonoperation.cpp:133
// function calls: 16
bool EvaluateComparison(const CAnimVariant& lhs, Comparison_t op, const CAnimVariant& rhs)
{
	CAnimVariant::GetType(); // 135
	CAnimVariant::GetType(); // 135
	CAnimVariant::GetValue<Vector>(); // 143
	CAnimVariant::GetValue<Vector>(); // 143
	CAnimVariant::GetValue<float>(); // 142
	CAnimVariant::GetValue<float>(); // 142
	{
	}
	EvaluateTypedComparison<int>(const int& lhs,
					Comparison_t op,
					const int& rhs);  // 141
	CAnimVariant::GetValue<CAnimEnum>(); // 140
	CAnimVariant::GetValue<CAnimEnum>(); // 140
	operator>=(const CAnimEnum& lhs,
			const CAnimEnum& rhs);  // 52
	operator!=(const CAnimEnum& lhs,
			const CAnimEnum& rhs);  // 46
	operator<=(const CAnimEnum& lhs,
			const CAnimEnum& rhs);  // 58
	operator<(const CAnimEnum& lhs,
			const CAnimEnum& rhs);  // 55
	{
	}
	EvaluateTypedComparison<CAnimEnum>(const CAnimEnum& lhs,
						Comparison_t op,
						const CAnimEnum& rhs);  // 140
	{
	}
	EvaluateTypedComparison<bool>(const bool& lhs,
					Comparison_t op,
					const bool& rhs);  // 98
	EvaluateTypedComparison<bool>(const bool& lhs,
					Comparison_t op,
					const bool& rhs);  // 139
} /* size: 0, inline expansions: 16 (290 bytes) */

