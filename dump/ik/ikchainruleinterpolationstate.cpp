
//
// ik/ikchainruleinterpolationstate.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 11
//

// <032A0E05> ik/ikchainruleinterpolationstate.cpp:5
// function calls: 2
void RuleUnion(const union RuleUnion* this)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 7
} /* size: 0, inline expansions: 2 (0 bytes) */

// <032A0DE9> ik/ikchainruleinterpolationstate.cpp:5
void RuleUnion(const union RuleUnion* this)
{
} /* size: 0 */

// <032A0DBC> ik/ikchainruleinterpolationstate.cpp:10
void ~RuleUnion(const union RuleUnion* this)
{
} /* size: 0 */

// <032A0CD0> ik/ikchainruleinterpolationstate.cpp:16
// function calls: 3
void CIKChainRuleInterpolationState::CIKChainRuleInterpolationState()
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 7
	RuleUnion(const union RuleUnion* this); // 17
} /* size: 31, inline expansions: 3 (48 bytes) */

// <032A0CB4> ik/ikchainruleinterpolationstate.cpp:16
void CIKChainRuleInterpolationState::CIKChainRuleInterpolationState()
{
} /* size: 0 */

// <032A0C58> ik/ikchainruleinterpolationstate.cpp:21
// function call: 1
void CIKChainRuleInterpolationState::~CIKChainRuleInterpolationState()
{
	~RuleUnion(const union RuleUnion* this); // 23
} /* size: 5, inline expansions: 1 (0 bytes) */

// <032A0C3C> ik/ikchainruleinterpolationstate.cpp:21
void CIKChainRuleInterpolationState::~CIKChainRuleInterpolationState()
{
} /* size: 0 */

// <032A0950> ik/ikchainruleinterpolationstate.cpp:25
// variables: 2
// function calls: 7
void CIKChainRuleInterpolationState::operator=(const CIKChainRuleInterpolationState& rhs)
{
	const char   __FUNCTION__; // 29389
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 45
	}
	Vector::operator=(
			const Vector& vOther);  // 6
	Vector::operator=(
			const Vector& vOther);  // 6
	Vector::operator=(
			const Vector& vOther);  // 6
	Vector::operator=(
			const Vector& vOther);  // 6
	GenericCriticallyDampedType<Vector>::operator=(
			const GenericCriticallyDampedType<Vector>  &);  // 6
	CriticallyDampedNormal::operator=(
			const CriticallyDampedNormal  &);  // 8
	CIKChainRuleInterpolationState_Ground::operator=(
			const CIKChainRuleInterpolationState_Ground  &);  // 38
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <032A0878> ik/ikchainruleinterpolationstate.cpp:53
// variables: 2
void CIKChainRuleInterpolationState::Init(IKChainRuleInterpolationStateType type)
{
	const char   __FUNCTION__; // 28764
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 60
	}
} /* size: 0, variables: 1 */

// <032A07A5> ik/ikchainruleinterpolationstate.cpp:69
// function call: 1
void CIKChainRuleInterpolationState::GetAsGround()
{
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 71
	}
} /* size: 0 */

// <032A0594> ik/ikchainruleinterpolationstate.cpp:87
// variables: 3
void CIKChainRuleInterpolationState::LerpFrom(const CIKChainRuleInterpolationState* pState1, const CIKChainRuleInterpolationState* pState2, float flAlpha)
{
	const char   __FUNCTION__; // 28126
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 101
	}
} /* size: 0, variables: 1 */

