
//
// animgraph/intanimparameter.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 16
//

// <014C54AA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:8
void MyTypeInfo(void)
{
} /* size: 0 */

// <014C4971> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:8
void CIntAnimParameter::GetTypeInfo()
{
} /* size: 12 */

// <014BED97> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:8
// function calls: 3
void* CIntAnimParameter::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CIntAnimParameter>::CastTo(
		CIntAnimParameter* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (295 bytes) */

// <014BEC04> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:8
// function calls: 3
const void* CIntAnimParameter::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CIntAnimParameter>::CastTo(
		const CIntAnimParameter* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (295 bytes) */

// <014BEA54> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:16
// function calls: 7
void CIntAnimParameter::CIntAnimParameter()
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

// <014BEA3B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:16
void CIntAnimParameter::CIntAnimParameter()
{
} /* size: 0 */

// <014BE886> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:23
// function calls: 9
void CIntAnimParameter::CIntAnimParameter(const CUtlString& name, AnimParamID id)
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

// <014BE856> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:23
void CIntAnimParameter::CIntAnimParameter(const CUtlString& name, AnimParamID id)
{
} /* size: 0 */

// <014BE828> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:30
void CIntAnimParameter::GetParameterType()
{
} /* size: 10 */

// <014BE798> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:36
// function calls: 2
void CIntAnimParameter::GetDefaultValue()
{
	CAnimVariant::SetValue<int>(
			const int& value);  // 159
	CAnimVariant::CAnimVariant<int>(
				const int& v);  // 38
} /* size: 17, inline expansions: 2 (18 bytes) */

// <014C4D02> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:42
// function calls: 3
void CIntAnimParameter::SetDefaultValue(CAnimVariant newValue)
{
	CAnimVariant::GetValue<int>(
			int& value);  // 44
	_DebuggerBreakInlineExpressionWrapper(void); // 44
	CIntAnimParameter::SetDefaultValue(
			CAnimVariant newValue);  // 42
} /* size: 0, inline expansions: 3 (27 bytes) */

// <014BE700> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:42
void CIntAnimParameter::SetDefaultValue(CAnimVariant newValue)
{
} /* size: 0 */

// <014BE670> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:48
// function calls: 2
void CIntAnimParameter::GetMinValue()
{
	CAnimVariant::SetValue<int>(
			const int& value);  // 159
	CAnimVariant::CAnimVariant<int>(
				const int& v);  // 50
} /* size: 17, inline expansions: 2 (18 bytes) */

// <014BE5E0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:54
// function calls: 2
void CIntAnimParameter::GetMaxValue()
{
	CAnimVariant::SetValue<int>(
			const int& value);  // 159
	CAnimVariant::CAnimVariant<int>(
				const int& v);  // 56
} /* size: 17, inline expansions: 2 (18 bytes) */

// <014BE44E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:60
// variable: 1
// function calls: 5
void CIntAnimParameter::GetClampedValue(const CAnimVariant& unclampedValue)
{
	int value; // 62
	{
	}
	CAnimVariant::GetValue<int>(); // 194
	CAnimVariant::GetValue<int>(); // 62
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 63
	CAnimVariant::SetValue<int>(
			const int& value);  // 159
	CAnimVariant::CAnimVariant<int>(
				const int& v);  // 64
} /* size: 184, variables: 1, inline expansions: 5 (205 bytes) */

// <014BE2E7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:67
// variable: 1
// function calls: 5
void CIntAnimParameter::CopyProperties(IAnimParameter* pParam)
{
	CIntAnimParameter* pParamBase; // 71
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 74
	CAnimParameterBase::CopyProperties(
			IAnimParameter* pParam);  // 69
} /* size: 139, variables: 1, inline expansions: 5 (164 bytes) */

