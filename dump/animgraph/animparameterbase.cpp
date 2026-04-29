
//
// animgraph/animparameterbase.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 20
//

// <014C3AA3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:9
void IAnimParameter::GetTypeInfo()
{
} /* size: 0 */

// <014C3910> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:9
// function calls: 3
void* IAnimParameter::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IAnimParameter>::CastTo(
		IAnimParameter* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (0 bytes) */

// <014C377D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:9
// function calls: 3
const void* IAnimParameter::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IAnimParameter>::CastTo(
		const IAnimParameter* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (0 bytes) */

// <014C5414> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:12
void MyTypeInfo(void)
{
} /* size: 0 */

// <014C2F6C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:12
void CAnimParameterBase::GetTypeInfo()
{
} /* size: 12 */

// <014C2DD9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:12
// function calls: 3
void* CAnimParameterBase::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CAnimParameterBase>::CastTo(
		CAnimParameterBase* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (206 bytes) */

// <014C2C46> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:12
// function calls: 3
const void* CAnimParameterBase::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CAnimParameterBase>::CastTo(
		const CAnimParameterBase* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (206 bytes) */

// <014C29CC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:16
// function calls: 6
void CAnimParameterBase::CAnimParameterBase()
{
	Object::Object(); // 35
	IAnimParameter::IAnimParameter(); // 16
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 16
	CUtlString::CUtlString(
			const char* pString);  // 16
	AnimParamID::AnimParamID(); // 16
} /* size: 0, inline expansions: 6 (0 bytes) */

// <014C29B3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:16
void CAnimParameterBase::CAnimParameterBase()
{
} /* size: 0 */

// <014C2819> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:22
// function calls: 7
void CAnimParameterBase::CAnimParameterBase(const CUtlString& name, AnimParamID id)
{
	Object::Object(); // 35
	IAnimParameter::IAnimParameter(); // 24
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 24
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 23
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 24
} /* size: 0, inline expansions: 7 (0 bytes) */

// <014C27E9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:22
void CAnimParameterBase::CAnimParameterBase(const CUtlString& name, AnimParamID id)
{
} /* size: 0 */

// <014C27BB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:30
void CAnimParameterBase::GetName()
{
} /* size: 9 */

// <014C275C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:36
// function call: 1
void CAnimParameterBase::GetParameterID()
{
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 38
} /* size: 13, inline expansions: 1 (5 bytes) */

// <014C272E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:42
void CAnimParameterBase::ShouldUseMostRecentValue()
{
} /* size: 9 */

// <014C2700> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:48
void CAnimParameterBase::IsAutoReset()
{
} /* size: 9 */

// <014C26D2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:54
void CAnimParameterBase::GetPreviewButton()
{
} /* size: 8 */

// <014C2658> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:60
// function call: 1
void CAnimParameterBase::SetID(AnimParamID id)
{
	AnimParamID::operator=(
			const AnimParamID& rhs);  // 62
} /* size: 10, inline expansions: 1 (5 bytes) */

// <014C2517> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:66
// function calls: 4
void CAnimParameterBase::SetName(const CUtlString& newName)
{
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 68
} /* size: 86, inline expansions: 4 (106 bytes) */

// <014C507D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:71
// variable: 1
// function calls: 4
void CAnimParameterBase::CopyProperties(IAnimParameter* pParam)
{
	CAnimParameterBase* pParamBase; // 73
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 74
} /* size: 107, variables: 1, inline expansions: 4 (95 bytes) */

// <014C24E6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:71
// variable: 1
void CAnimParameterBase::CopyProperties(IAnimParameter* pParam)
{
	CAnimParameterBase* pParamBase; // 73
} /* size: 0, variables: 1 */

