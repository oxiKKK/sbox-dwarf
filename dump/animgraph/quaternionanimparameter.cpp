
//
// animgraph/quaternionanimparameter.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 16
//

// <014C54C8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:8
void MyTypeInfo(void)
{
} /* size: 0 */

// <014C499B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:8
void CQuaternionAnimParameter::GetTypeInfo()
{
} /* size: 12 */

// <014BE093> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:8
// function calls: 3
void* CQuaternionAnimParameter::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CQuaternionAnimParameter>::CastTo(
		CQuaternionAnimParameter* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (295 bytes) */

// <014BDF00> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:8
// function calls: 3
const void* CQuaternionAnimParameter::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CQuaternionAnimParameter>::CastTo(
		const CQuaternionAnimParameter* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (295 bytes) */

// <014BDD50> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:16
// function calls: 7
void CQuaternionAnimParameter::CQuaternionAnimParameter()
{
	CUtlString::CUtlString(
			const char* pString);  // 16
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 16
	Object::Object(); // 35
	IAnimParameter::IAnimParameter(); // 16
	AnimParamID::AnimParamID(); // 16
	CAnimParameterBase::CAnimParameterBase(); // 17
} /* size: 149, inline expansions: 7 (137 bytes) */

// <014BDD37> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:16
void CQuaternionAnimParameter::CQuaternionAnimParameter()
{
} /* size: 0 */

// <014BDB82> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:23
// function calls: 9
void CQuaternionAnimParameter::CQuaternionAnimParameter(const CUtlString& name, AnimParamID id)
{
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 24
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 23
	Object::Object(); // 35
	IAnimParameter::IAnimParameter(); // 24
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 24
	CAnimParameterBase::CAnimParameterBase(
				const CUtlString& name,
				AnimParamID id);  // 24
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 24
} /* size: 0, inline expansions: 9 (0 bytes) */

// <014BDB52> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:23
void CQuaternionAnimParameter::CQuaternionAnimParameter(const CUtlString& name, AnimParamID id)
{
} /* size: 0 */

// <014BDB24> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:30
void CQuaternionAnimParameter::GetParameterType()
{
} /* size: 10 */

// <014BDA94> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:36
// function calls: 2
void CQuaternionAnimParameter::GetDefaultValue()
{
	CAnimVariant::SetValue<Quaternion>(
				const Quaternion& value);  // 159
	CAnimVariant::CAnimVariant<Quaternion>(
				const Quaternion& v);  // 38
} /* size: 20, inline expansions: 2 (24 bytes) */

// <014C4BD9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:42
// function calls: 3
void CQuaternionAnimParameter::SetDefaultValue(CAnimVariant newValue)
{
	CAnimVariant::GetValue<Quaternion>(
				Quaternion& value);  // 44
	_DebuggerBreakInlineExpressionWrapper(void); // 44
	CQuaternionAnimParameter::SetDefaultValue(
			CAnimVariant newValue);  // 42
} /* size: 0, inline expansions: 3 (30 bytes) */

// <014BD9FC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:42
void CQuaternionAnimParameter::SetDefaultValue(CAnimVariant newValue)
{
} /* size: 0 */

// <014BD91C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:48
// function calls: 3
void CQuaternionAnimParameter::GetMinValue()
{
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 50
	CAnimVariant::SetValue<Quaternion>(
				const Quaternion& value);  // 159
	CAnimVariant::CAnimVariant<Quaternion>(
				const Quaternion& v);  // 50
} /* size: 31, inline expansions: 3 (46 bytes) */

// <014BD83C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:54
// function calls: 3
void CQuaternionAnimParameter::GetMaxValue()
{
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 56
	CAnimVariant::SetValue<Quaternion>(
				const Quaternion& value);  // 159
	CAnimVariant::CAnimVariant<Quaternion>(
				const Quaternion& v);  // 56
} /* size: 31, inline expansions: 3 (46 bytes) */

// <014BD6A9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:60
// variable: 1
// function calls: 5
void CQuaternionAnimParameter::GetClampedValue(const CAnimVariant& unclampedValue)
{
	Quaternion tmp; // 62
	{
		DefaultValue(void); // 200
	}
	CAnimVariant::GetValue<Quaternion>(); // 194
	CAnimVariant::GetValue<Quaternion>(); // 62
	CAnimVariant::SetValue<Quaternion>(
				const Quaternion& value);  // 159
	CAnimVariant::CAnimVariant<Quaternion>(
				const Quaternion& v);  // 64
} /* size: 184, variables: 1, inline expansions: 4 (170 bytes) */

// <014BD542> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:67
// variable: 1
// function calls: 5
void CQuaternionAnimParameter::CopyProperties(IAnimParameter* pParam)
{
	CQuaternionAnimParameter* pParamBase; // 71
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 74
	CAnimParameterBase::CopyProperties(
			IAnimParameter* pParam);  // 69
} /* size: 123, variables: 1, inline expansions: 5 (164 bytes) */

