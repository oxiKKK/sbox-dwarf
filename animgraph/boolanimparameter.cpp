
//
// animgraph/boolanimparameter.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 16
//

// <014C5432> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:8
void MyTypeInfo(void)
{
} /* size: 0 */

// <014C48C9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:8
void CBoolAnimParameter::GetTypeInfo()
{
} /* size: 12 */

// <014C2292> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:8
// function calls: 3
void* CBoolAnimParameter::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CBoolAnimParameter>::CastTo(
		CBoolAnimParameter* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (295 bytes) */

// <014C20FF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:8
// function calls: 3
const void* CBoolAnimParameter::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CBoolAnimParameter>::CastTo(
		const CBoolAnimParameter* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (295 bytes) */

// <014C1E71> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:16
// function calls: 7
void CBoolAnimParameter::CBoolAnimParameter()
{
	CUtlString::CUtlString(
			const char* pString);  // 16
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 16
	Object::Object(); // 35
	IAnimParameter::IAnimParameter(); // 16
	AnimParamID::AnimParamID(); // 16
	CAnimParameterBase::CAnimParameterBase(); // 17
} /* size: 138, inline expansions: 7 (137 bytes) */

// <014C1E58> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:16
void CBoolAnimParameter::CBoolAnimParameter()
{
} /* size: 0 */

// <014C1CA3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:23
// function calls: 9
void CBoolAnimParameter::CBoolAnimParameter(const CUtlString& name, AnimParamID id)
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

// <014C1C73> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:23
void CBoolAnimParameter::CBoolAnimParameter(const CUtlString& name, AnimParamID id)
{
} /* size: 0 */

// <014C1C45> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:30
void CBoolAnimParameter::GetParameterType()
{
} /* size: 10 */

// <014C1BB5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:36
// function calls: 2
void CBoolAnimParameter::GetDefaultValue()
{
	CAnimVariant::SetValue<bool>(
			const bool& value);  // 159
	CAnimVariant::CAnimVariant<bool>(
				const bool& v);  // 38
} /* size: 18, inline expansions: 2 (20 bytes) */

// <014C4FB3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:42
// function calls: 3
void CBoolAnimParameter::SetDefaultValue(CAnimVariant newValue)
{
	CAnimVariant::GetValue<bool>(
			bool& value);  // 44
	_DebuggerBreakInlineExpressionWrapper(void); // 44
	CBoolAnimParameter::SetDefaultValue(
			CAnimVariant newValue);  // 42
} /* size: 0, inline expansions: 3 (28 bytes) */

// <014C1B1D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:42
void CBoolAnimParameter::SetDefaultValue(CAnimVariant newValue)
{
} /* size: 0 */

// <014C1A9D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:48
// function calls: 2
void CBoolAnimParameter::GetMinValue()
{
	CAnimVariant::SetValue<bool>(
			const bool& value);  // 159
	CAnimVariant::CAnimVariant<bool>(
				const bool& v);  // 50
} /* size: 15, inline expansions: 2 (14 bytes) */

// <014C1A1D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:54
// function calls: 2
void CBoolAnimParameter::GetMaxValue()
{
	CAnimVariant::SetValue<bool>(
			const bool& value);  // 159
	CAnimVariant::CAnimVariant<bool>(
				const bool& v);  // 56
} /* size: 15, inline expansions: 2 (14 bytes) */

// <014C1807> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:60
// function calls: 8
void CBoolAnimParameter::GetClampedValue(const CAnimVariant& unclampedValue)
{
	CAnimVariant::GetType(); // 168
	CAnimVariant::GetValueUntyped(); // 168
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 424
	CAnimVariant::SetValueUntyped(
			AnimParamType_t nType,
			const void* pData);  // 419
	CAnimVariant::SetValueUntyped(
			AnimParamType_t nType,
			const void* pData);  // 168
	CAnimVariant::operator=(
			const CAnimVariant& rhs);  // 142
	CAnimVariant::CAnimVariant(
			const CAnimVariant& rhs);  // 63
} /* size: 54, inline expansions: 8 (152 bytes) */

// <014C16A0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:66
// variable: 1
// function calls: 5
void CBoolAnimParameter::CopyProperties(IAnimParameter* pParam)
{
	CBoolAnimParameter* pParamBase; // 70
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 74
	CAnimParameterBase::CopyProperties(
			IAnimParameter* pParam);  // 68
} /* size: 123, variables: 1, inline expansions: 5 (164 bytes) */

