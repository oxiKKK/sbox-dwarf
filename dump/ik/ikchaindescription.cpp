
//
// ik/ikchaindescription.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//

// <0004E917> ik/ikchaindescription.cpp:12
// function calls: 6
void CIKChainDescription::CIKChainDescription()
{
	CUtlLeanVectorBase<int, short int>::CUtlLeanVectorBase(); // 411
	CUtlLeanVectorImpl<CUtlLeanVectorBase<int, short int>, int, short int>::CUtlLeanVectorImpl(); // 832
	CUtlLeanVector<int, short int>::CUtlLeanVector(); // 12
	CUtlLeanVectorBase<const IIKRuleDescription::CUtlLeanVectorBase(); // 411
	CUtlLeanVectorImpl<CUtlLeanVectorBase<const IIKRuleDescription::CUtlLeanVectorImpl(); // 832
	CUtlLeanVector<const IIKRuleDescription::CUtlLeanVector(); // 12
} /* size: 72, inline expansions: 6 (90 bytes) */

// <0004E8FA> ik/ikchaindescription.cpp:12
void CIKChainDescription::CIKChainDescription()
{
} /* size: 0 */

// <0004E556> ik/ikchaindescription.cpp:16
// function calls: 18
void CIKChainDescription::~CIKChainDescription()
{
	CUtlLeanVectorBase<const IIKRuleDescription::RemoveAll(); // 371
	CUtlLeanVectorBase<const IIKRuleDescription::Base(); // 279
	CUtlLeanVectorBase<const IIKRuleDescription::Base(); // 374
	CUtlLeanVectorBase<const IIKRuleDescription::Purge(); // 18
	CUtlLeanVectorBase<const IIKRuleDescription::RemoveAll(); // 371
	CUtlLeanVectorBase<const IIKRuleDescription::Base(); // 279
	CUtlLeanVectorBase<const IIKRuleDescription::Base(); // 374
	CUtlLeanVectorBase<const IIKRuleDescription::Purge(); // 270
	CUtlLeanVectorBase<const IIKRuleDescription::~CUtlLeanVectorBase(); // 399
	CUtlLeanVectorImpl<CUtlLeanVectorBase<const IIKRuleDescription::~CUtlLeanVectorImpl(); // 829
	CUtlLeanVector<const IIKRuleDescription::~CUtlLeanVector(); // 19
	CUtlLeanVectorBase<int, short int>::RemoveAll(); // 371
	CUtlLeanVectorBase<int, short int>::Base(); // 279
	CUtlLeanVectorBase<int, short int>::Base(); // 374
	CUtlLeanVectorBase<int, short int>::Purge(); // 270
	CUtlLeanVectorBase<int, short int>::~CUtlLeanVectorBase(); // 399
	CUtlLeanVectorImpl<CUtlLeanVectorBase<int, short int>, int, short int>::~CUtlLeanVectorImpl(); // 829
	CUtlLeanVector<int, short int>::~CUtlLeanVector(); // 19
} /* size: 0, inline expansions: 18 (0 bytes) */

// <0004E539> ik/ikchaindescription.cpp:16
void CIKChainDescription::~CIKChainDescription()
{
} /* size: 0 */

// <0004E387> ik/ikchaindescription.cpp:21
// variables: 3
// function calls: 6
void CIKChainDescription::CalculateLockWeight(const CSpaceAgnosticBoneAccessor& boneAccessor)
{
	int nArraySize; // 23
	const float  flRawValue; // 35
	const float  flValue; // 36
	CSpaceAgnosticBoneAccessor::GetNumBones(); // 23
	ConVar::GetFloat(); // 30
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 35
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 36
} /* size: 169, variables: 3, inline expansions: 6 (77 bytes) */

// <0004E354> ik/ikchaindescription.cpp:41
void CIKChainDescription::GetEndEffectorTargetBoneIndex()
{
} /* size: 18 */

