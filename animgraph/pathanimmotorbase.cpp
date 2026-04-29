
//
// animgraph/pathanimmotorbase.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//

// <014726D3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.cpp:7
void MyTypeInfo(void)
{
} /* size: 0 */

// <0146B8DE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.cpp:7
void CPathAnimMotorBase::GetTypeInfo()
{
} /* size: 12 */

// <0146B74B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.cpp:7
// function calls: 3
void* CPathAnimMotorBase::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CPathAnimMotorBase>::CastTo(
		CPathAnimMotorBase* derived,
		ClassID baseTypeInfo);  // 7
} /* size: 0, inline expansions: 3 (206 bytes) */

// <0146B5B8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.cpp:7
// function calls: 3
const void* CPathAnimMotorBase::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CPathAnimMotorBase>::CastTo(
		const CPathAnimMotorBase* derived,
		ClassID baseTypeInfo);  // 7
} /* size: 0, inline expansions: 3 (206 bytes) */

// <0146B40F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.cpp:11
// function calls: 6
void CPathAnimMotorBase::CPathAnimMotorBase()
{
	CUtlString::CUtlString(
			const char* pString);  // 15
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 15
	Object::Object(); // 15
	IAnimMotor::IAnimMotor(); // 15
	CAnimMotorBase::CAnimMotorBase(); // 12
} /* size: 0, inline expansions: 6 (0 bytes) */

// <0146B3F6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.cpp:11
void CPathAnimMotorBase::CPathAnimMotorBase()
{
} /* size: 0 */

