
//
// ik/ikruledata.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//

// <03445BC5> ik/ikruledata.cpp:9
// function calls: 2
void KV3TransferPolymorphicClassname(const IIKRuleData* pRuleData, char& pOutPolymorphicClassName)
{
	strcpy(char* __dest,
		const char* __src);  // 124
	V_strcpy(char* dest,
		const char* src);  // 11
} /* size: 0, inline expansions: 2 (0 bytes) */

// <03445648> ik/ikruledata.cpp:14
// variables: 2
// function calls: 16
void KV3TransferAllocateClassInstance(const char* pDerivedClassName)
{
	const char   __FUNCTION__; // 42963
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 33
	}
	V_strcmp(const char* s1,
		const char* s2);  // 16
	V_strcmp(const char* s1,
		const char* s2);  // 20
	V_strcmp(const char* s1,
		const char* s2);  // 24
	V_strcmp(const char* s1,
		const char* s2);  // 28
	IIKRuleData::IIKRuleData(); // 5
	CIKRuleData_Debug::CIKRuleData_Debug(); // 30
	IIKRuleData::IIKRuleData(); // 6
	CUtlString::CUtlString(); // 26
	IKBoneNameAndIndex_t::IKBoneNameAndIndex_t(); // 6
	CIKRuleData_Ground::CIKRuleData_Ground(); // 22
	IIKRuleData::IIKRuleData(); // 6
	CUtlString::CUtlString(); // 26
	IKBoneNameAndIndex_t::IKBoneNameAndIndex_t(); // 6
	CIKRuleData_Ground_VirtualPlanes::CIKRuleData_Ground_VirtualPlanes(); // 18
	IIKRuleData::IIKRuleData(); // 5
	CIKRuleData_FollowAnimation::CIKRuleData_FollowAnimation(); // 26
} /* size: 0, variables: 1, inline expansions: 16 (172 bytes) */

