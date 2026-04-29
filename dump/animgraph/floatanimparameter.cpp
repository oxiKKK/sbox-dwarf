
//
// animgraph/floatanimparameter.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 16
//

// <014C548C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:8
void MyTypeInfo(void)
{
} /* size: 0 */

// <014C4947> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:8
void CFloatAnimParameter::GetTypeInfo()
{
} /* size: 12 */

// <014BFA9B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:8
// function calls: 3
void* CFloatAnimParameter::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CFloatAnimParameter>::CastTo(
		CFloatAnimParameter* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (295 bytes) */

// <014BF908> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:8
// function calls: 3
const void* CFloatAnimParameter::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CFloatAnimParameter>::CastTo(
		const CFloatAnimParameter* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (295 bytes) */

// <014BF758> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:16
// function calls: 7
void CFloatAnimParameter::CFloatAnimParameter()
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

// <014BF73F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:16
void CFloatAnimParameter::CFloatAnimParameter()
{
} /* size: 0 */

// <014BF58A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:23
// function calls: 9
void CFloatAnimParameter::CFloatAnimParameter(const CUtlString& name, AnimParamID id)
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

// <014BF55A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:23
void CFloatAnimParameter::CFloatAnimParameter(const CUtlString& name, AnimParamID id)
{
} /* size: 0 */

// <014BF52C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:30
void CFloatAnimParameter::GetParameterType()
{
} /* size: 10 */

// <014BF49C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:36
// function calls: 2
void CFloatAnimParameter::GetDefaultValue()
{
	CAnimVariant::SetValue<float>(
			const float& value);  // 159
	CAnimVariant::CAnimVariant<float>(
				const float& v);  // 38
} /* size: 21, inline expansions: 2 (26 bytes) */

// <014C4E2B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:42
// function calls: 3
void CFloatAnimParameter::SetDefaultValue(CAnimVariant newValue)
{
	CAnimVariant::GetValue<float>(
			float& value);  // 44
	_DebuggerBreakInlineExpressionWrapper(void); // 44
	CFloatAnimParameter::SetDefaultValue(
			CAnimVariant newValue);  // 42
} /* size: 0, inline expansions: 3 (31 bytes) */

// <014BF404> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:42
void CFloatAnimParameter::SetDefaultValue(CAnimVariant newValue)
{
} /* size: 0 */

// <014BF374> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:48
// function calls: 2
void CFloatAnimParameter::GetMinValue()
{
	CAnimVariant::SetValue<float>(
			const float& value);  // 159
	CAnimVariant::CAnimVariant<float>(
				const float& v);  // 50
} /* size: 21, inline expansions: 2 (26 bytes) */

// <014BF2E4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:54
// function calls: 2
void CFloatAnimParameter::GetMaxValue()
{
	CAnimVariant::SetValue<float>(
			const float& value);  // 159
	CAnimVariant::CAnimVariant<float>(
				const float& v);  // 56
} /* size: 21, inline expansions: 2 (26 bytes) */

// <014BF152> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:60
// variable: 1
// function calls: 5
void CFloatAnimParameter::GetClampedValue(const CAnimVariant& unclampedValue)
{
	float value; // 62
	{
	}
	CAnimVariant::GetValue<float>(); // 194
	CAnimVariant::GetValue<float>(); // 62
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 63
	CAnimVariant::SetValue<float>(
			const float& value);  // 159
	CAnimVariant::CAnimVariant<float>(
				const float& v);  // 64
} /* size: 200, variables: 1, inline expansions: 5 (221 bytes) */

// <014BEFEB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:67
// variable: 1
// function calls: 5
void CFloatAnimParameter::CopyProperties(IAnimParameter* pParam)
{
	CFloatAnimParameter* pParamBase; // 71
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 74
	CAnimParameterBase::CopyProperties(
			IAnimParameter* pParam);  // 69
} /* size: 147, variables: 1, inline expansions: 5 (164 bytes) */

