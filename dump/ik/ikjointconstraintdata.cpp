
//
// ik/ikjointconstraintdata.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//

// <033B4443> ik/ikjointconstraintdata.cpp:6
// function calls: 2
void KV3TransferPolymorphicClassname(const IIKJointConstraintData* pData, char& pOutPolymorphicClassName)
{
	strcpy(char* __dest,
		const char* __src);  // 124
	V_strcpy(char* dest,
		const char* src);  // 8
} /* size: 0, inline expansions: 2 (0 bytes) */

// <033B4132> ik/ikjointconstraintdata.cpp:11
// variables: 2
// function calls: 9
void KV3TransferAllocateClassInstance(const char* pDerivedClassName)
{
	const char   __FUNCTION__; // 43804
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 22
	}
	V_strcmp(const char* s1,
		const char* s2);  // 13
	V_strcmp(const char* s1,
		const char* s2);  // 17
	IIKJointConstraintData::IIKJointConstraintData(); // 23
	Vector::Vector(); // 93
	Vector::operator=(
			const Vector& vOther);  // 95
	VPlane::VPlane(
		const Vector& vNormal,
		vec_t dist);  // 23
	CIKJointConstraintData_Plane::CIKJointConstraintData_Plane(); // 19
	IIKJointConstraintData::IIKJointConstraintData(); // 40
	CIKJointConstraintData_Hinge::CIKJointConstraintData_Hinge(); // 15
} /* size: 0, variables: 1, inline expansions: 9 (162 bytes) */

