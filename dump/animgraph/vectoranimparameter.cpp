
//
// animgraph/vectoranimparameter.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 16
//

// <014C54E6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:8
void MyTypeInfo(void)
{
} /* size: 0 */

// <014C49C5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:8
void CVectorAnimParameter::GetTypeInfo()
{
} /* size: 12 */

// <014BD2EE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:8
// function calls: 3
void* CVectorAnimParameter::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CVectorAnimParameter>::CastTo(
		CVectorAnimParameter* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (295 bytes) */

// <014BD15B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:8
// function calls: 3
const void* CVectorAnimParameter::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CVectorAnimParameter>::CastTo(
		const CVectorAnimParameter* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (295 bytes) */

// <014BCF5C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:16
// function calls: 8
void CVectorAnimParameter::CVectorAnimParameter()
{
	CUtlString::CUtlString(
			const char* pString);  // 16
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 16
	Object::Object(); // 35
	IAnimParameter::IAnimParameter(); // 16
	AnimParamID::AnimParamID(); // 16
	CAnimParameterBase::CAnimParameterBase(); // 17
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 17
} /* size: 149, inline expansions: 8 (152 bytes) */

// <014BCF43> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:16
void CVectorAnimParameter::CVectorAnimParameter()
{
} /* size: 0 */

// <014BCD33> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:23
// function calls: 10
void CVectorAnimParameter::CVectorAnimParameter(const CUtlString& name, AnimParamID id)
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
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 24
} /* size: 0, inline expansions: 10 (0 bytes) */

// <014BCD03> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:23
void CVectorAnimParameter::CVectorAnimParameter(const CUtlString& name, AnimParamID id)
{
} /* size: 0 */

// <014BCCD5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:30
void CVectorAnimParameter::GetParameterType()
{
} /* size: 10 */

// <014BCC14> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:36
// function calls: 3
void CVectorAnimParameter::GetDefaultValue()
{
	Vector::operator=(
			const Vector& vOther);  // 238
	CAnimVariant::SetValue<Vector>(
			const Vector& value);  // 159
	CAnimVariant::CAnimVariant<Vector>(
				const Vector& v);  // 38
} /* size: 29, inline expansions: 3 (59 bytes) */

// <014C4A4E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:42
// function calls: 5
void CVectorAnimParameter::SetDefaultValue(CAnimVariant newValue)
{
	Vector::operator=(
			const Vector& vOther);  // 221
	CAnimVariant::GetValue<Vector>(
			Vector& value);  // 215
	CAnimVariant::GetValue<Vector>(
			Vector& value);  // 44
	_DebuggerBreakInlineExpressionWrapper(void); // 44
	CVectorAnimParameter::SetDefaultValue(
			CAnimVariant newValue);  // 42
} /* size: 0, inline expansions: 5 (111 bytes) */

// <014BCB7C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:42
void CVectorAnimParameter::SetDefaultValue(CAnimVariant newValue)
{
} /* size: 0 */

// <014BCA80> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:48
// function calls: 4
void CVectorAnimParameter::GetMinValue()
{
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 50
	Vector::operator=(
			const Vector& vOther);  // 238
	CAnimVariant::SetValue<Vector>(
			const Vector& value);  // 159
	CAnimVariant::CAnimVariant<Vector>(
				const Vector& v);  // 50
} /* size: 29, inline expansions: 4 (59 bytes) */

// <014BC984> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:54
// function calls: 4
void CVectorAnimParameter::GetMaxValue()
{
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 56
	Vector::operator=(
			const Vector& vOther);  // 238
	CAnimVariant::SetValue<Vector>(
			const Vector& value);  // 159
	CAnimVariant::CAnimVariant<Vector>(
				const Vector& v);  // 56
} /* size: 29, inline expansions: 4 (59 bytes) */

// <014BC95F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:60
void CVectorAnimParameter::GetClampedValue(const CAnimVariant& unclampedValue)
{
} /* size: 0 */

// <014BC7B7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:66
// variable: 1
// function calls: 6
void CVectorAnimParameter::CopyProperties(IAnimParameter* pParam)
{
	CVectorAnimParameter* pParamBase; // 70
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 74
	CAnimParameterBase::CopyProperties(
			IAnimParameter* pParam);  // 68
	Vector::operator=(
			const Vector& vOther);  // 71
} /* size: 147, variables: 1, inline expansions: 6 (200 bytes) */

