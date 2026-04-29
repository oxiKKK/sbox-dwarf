
//
// ik/ikruledescription_ground.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//

// <01BD81FC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_ground.cpp:9
// function calls: 7
void CIKRuleDescription_Ground::CIKRuleDescription_Ground()
{
	IIKRuleDescription::IIKRuleDescription(); // 10
	CUtlSymbolLarge::CUtlSymbolLarge(
			const CUtlSymbolLarge& sym);  // 10
	CIKRuleDescription_Base::CIKRuleDescription_Base(
				const CUtlSymbolLarge& name);  // 10
	IIKRuleData::IIKRuleData(); // 6
	CUtlString::CUtlString(); // 26
	IKBoneNameAndIndex_t::IKBoneNameAndIndex_t(); // 6
	CIKRuleData_Ground::CIKRuleData_Ground(); // 10
} /* size: 130, inline expansions: 7 (80 bytes) */

// <01BD81E3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_ground.cpp:9
void CIKRuleDescription_Ground::CIKRuleDescription_Ground()
{
} /* size: 0 */

// <01BD7D45> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_ground.cpp:14
// function calls: 13
void CIKRuleDescription_Ground::AddAdditionalDependentBoneIndices(CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry additionalDependentBones)
{
	Mix32HashFunctor::operator(
			uint32 n);  // 240
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Base(); // 650
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 653
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Count(); // 651
	CUtlHashtableEntry<int, empty_t>::IdealIndex(
			uint32 slotmask);  // 656
	CUtlHashtableEntry<int, empty_t>::IdealIndex(
			uint32 slotmask);  // 667
	DoLookup<int>(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHa this,
			int x,
			unsigned int h,
			handle_t* pPreviousInChain);  // 697
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::operator[](
			int i);  // 706
	CUtlKeyValuePair<int, empty_t>::CUtlKeyValuePair<int>(
				const int& k);  // 1514
	Construct<CUtlKeyValuePair<int, empty_t>, int&>(CUtlKeyValuePair<int, empty_t>* pMemory); // 706
	DoInsert<int>(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
			int k,
			unsigned int h,
			bool* pDidInsert);  // 695
	DoInsert<int>(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
			int k,
			unsigned int h,
			bool* pDidInsert);  // 240
	Insert(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
		KeyArg_t k);  // 18
} /* size: 264, inline expansions: 13 (670 bytes) */

// <01BD7CAC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_ground.cpp:22
void CIKRuleDescription_Ground::CreateRuleContextAndConfigureInterpolation(CIKChainRuleInterpolationState& interpolationState)
{
} /* size: 64 */

