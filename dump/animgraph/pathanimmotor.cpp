
//
// animgraph/pathanimmotor.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 7
//

// <014726B5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.cpp:9
void MyTypeInfo(void)
{
} /* size: 0 */

// <01471E0D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.cpp:9
void CPathAnimMotor::GetTypeInfo()
{
} /* size: 12 */

// <0146BE37> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.cpp:9
// function calls: 3
void* CPathAnimMotor::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CPathAnimMotor>::CastTo(
		CPathAnimMotor* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0146BCA3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.cpp:9
// function calls: 3
const void* CPathAnimMotor::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CPathAnimMotor>::CastTo(
		const CPathAnimMotor* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0146BADE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.cpp:16
// function calls: 7
void CPathAnimMotor::CPathAnimMotor()
{
	CUtlString::CUtlString(
			const char* pString);  // 15
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 15
	Object::Object(); // 15
	IAnimMotor::IAnimMotor(); // 15
	CAnimMotorBase::CAnimMotorBase(); // 12
	CPathAnimMotorBase::CPathAnimMotorBase(); // 17
} /* size: 169, inline expansions: 7 (260 bytes) */

// <0146BAC5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.cpp:16
void CPathAnimMotor::CPathAnimMotor()
{
} /* size: 0 */

// <0146B912> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.cpp:23
// function calls: 3
void CPathAnimMotor::CreateInstance(CAnimGraphInitContext& initContext)
{
	CAnimMotorBase::IsDefault(); // 25
	CAnimMotorBase::GetName(); // 25
	CPackedDataT<false>::AddItem<CPathAnimMotorUpdater, CAnimGraphInitContext&, const CAnimInputDamping&, bool const&, const CUtlString&, bool>(
																CPackedHandle<CPathAnimMotorUpdater>* handleOut);  // 25
} /* size: 205, inline expansions: 3 (58 bytes) */

