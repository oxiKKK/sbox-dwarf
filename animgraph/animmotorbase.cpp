
//
// animgraph/animmotorbase.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 13
//

// <014711BA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorbase.cpp:8
void IAnimMotor::GetTypeInfo()
{
} /* size: 0 */

// <01471027> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorbase.cpp:8
// function calls: 3
void* IAnimMotor::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IAnimMotor>::CastTo(
		IAnimMotor* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01470E94> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorbase.cpp:8
// function calls: 3
const void* IAnimMotor::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IAnimMotor>::CastTo(
		const IAnimMotor* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01472588> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorbase.cpp:11
void MyTypeInfo(void)
{
} /* size: 0 */

// <01470680> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorbase.cpp:11
void CAnimMotorBase::GetTypeInfo()
{
} /* size: 12 */

// <014704ED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorbase.cpp:11
// function calls: 3
void* CAnimMotorBase::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CAnimMotorBase>::CastTo(
		CAnimMotorBase* derived,
		ClassID baseTypeInfo);  // 11
} /* size: 0, inline expansions: 3 (206 bytes) */

// <0147035A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorbase.cpp:11
// function calls: 3
const void* CAnimMotorBase::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CAnimMotorBase>::CastTo(
		const CAnimMotorBase* derived,
		ClassID baseTypeInfo);  // 11
} /* size: 0, inline expansions: 3 (206 bytes) */

// <01470114> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorbase.cpp:15
// function calls: 5
void CAnimMotorBase::CAnimMotorBase()
{
	Object::Object(); // 15
	IAnimMotor::IAnimMotor(); // 15
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 15
	CUtlString::CUtlString(
			const char* pString);  // 15
} /* size: 0, inline expansions: 5 (0 bytes) */

// <014700FB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorbase.cpp:15
void CAnimMotorBase::CAnimMotorBase()
{
} /* size: 0 */

// <01471D8F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorbase.cpp:21
void CAnimMotorBase::GetName()
{
} /* size: 9 */

// <0146FF9F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorbase.cpp:27
// function calls: 4
void CAnimMotorBase::SetName(const CUtlString& name)
{
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 29
} /* size: 86, inline expansions: 4 (106 bytes) */

// <01471DB9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorbase.cpp:33
void CAnimMotorBase::IsDefault()
{
} /* size: 9 */

// <014725A6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorbase.cpp:39
void CAnimMotorBase::SetDefault(bool bDefault)
{
} /* size: 0 */

