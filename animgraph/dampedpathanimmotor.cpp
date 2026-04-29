
//
// animgraph/dampedpathanimmotor.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 7
//

// <01472697> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.cpp:10
void MyTypeInfo(void)
{
} /* size: 0 */

// <01471DE3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.cpp:10
void CDampedPathAnimMotor::GetTypeInfo()
{
} /* size: 12 */

// <0146C83B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.cpp:10
// function calls: 3
void* CDampedPathAnimMotor::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CDampedPathAnimMotor>::CastTo(
		CDampedPathAnimMotor* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0146C6A7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.cpp:10
// function calls: 3
const void* CDampedPathAnimMotor::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CDampedPathAnimMotor>::CastTo(
		const CDampedPathAnimMotor* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0146C3A8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.cpp:17
// function calls: 9
void CDampedPathAnimMotor::CDampedPathAnimMotor()
{
	CUtlString::CUtlString(
			const char* pString);  // 15
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 15
	Object::Object(); // 15
	IAnimMotor::IAnimMotor(); // 15
	CAnimMotorBase::CAnimMotorBase(); // 12
	CPathAnimMotorBase::CPathAnimMotorBase(); // 18
	AnimParamID::AnimParamID(); // 18
	AnimParamID::AnimParamID(); // 18
} /* size: 211, inline expansions: 9 (274 bytes) */

// <0146C38F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.cpp:17
void CDampedPathAnimMotor::CDampedPathAnimMotor()
{
} /* size: 0 */

// <0146C08D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.cpp:24
// variable: 1
// function calls: 7
void CDampedPathAnimMotor::CreateInstance(CAnimGraphInitContext& initContext)
{
	CDampedPathAnimMotorUpdater* pMotor; // 26
	CAnimMotorBase::IsDefault(); // 26
	CAnimMotorBase::GetName(); // 26
	CPackedDataT<false>::AddItem<CDampedPathAnimMotorUpdater, CAnimGraphInitContext&, const CAnimInputDamping&, bool const&, const CUtlString&, bool>(
																CPackedHandle<CDampedPathAnimMotorUpdater>* handleOut);  // 26
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 28
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 28
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 29
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 29
} /* size: 361, variables: 1, inline expansions: 7 (93 bytes) */

