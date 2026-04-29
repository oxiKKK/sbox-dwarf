
//
// animgraph/enumanimparameter.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 19
//

// <014C1599> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:8
void IEnumAnimParameter::GetTypeInfo()
{
} /* size: 0 */

// <014C1406> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:8
// function calls: 3
void* IEnumAnimParameter::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IEnumAnimParameter>::CastTo(
		IEnumAnimParameter* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (0 bytes) */

// <014C1273> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:8
// function calls: 3
const void* IEnumAnimParameter::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IEnumAnimParameter>::CastTo(
		const IEnumAnimParameter* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (0 bytes) */

// <014C546E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:10
void MyTypeInfo(void)
{
} /* size: 0 */

// <014C48F3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:10
void CEnumAnimParameter::GetTypeInfo()
{
} /* size: 12 */

// <014C105C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:10
// function calls: 3
void* CEnumAnimParameter::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CEnumAnimParameter>::CastTo(
		CEnumAnimParameter* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <014C0EC9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:10
// function calls: 3
const void* CEnumAnimParameter::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CEnumAnimParameter>::CastTo(
		const CEnumAnimParameter* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <014C0BB2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:18
// function calls: 13
void CEnumAnimParameter::CEnumAnimParameter()
{
	CUtlString::CUtlString(
			const char* pString);  // 16
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 16
	Object::Object(); // 35
	IAnimParameter::IAnimParameter(); // 16
	AnimParamID::AnimParamID(); // 16
	CAnimParameterBase::CAnimParameterBase(); // 19
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 19
	IEnumAnimParameter::IEnumAnimParameter(); // 19
} /* size: 181, inline expansions: 13 (217 bytes) */

// <014C0B99> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:18
void CEnumAnimParameter::CEnumAnimParameter()
{
} /* size: 0 */

// <014C088C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:25
// function calls: 15
void CEnumAnimParameter::CEnumAnimParameter(const CUtlString& name, AnimParamID id)
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
				AnimParamID id);  // 26
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 26
	IEnumAnimParameter::IEnumAnimParameter(); // 26
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 26
} /* size: 0, inline expansions: 15 (0 bytes) */

// <014C085C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:25
void CEnumAnimParameter::CEnumAnimParameter(const CUtlString& name, AnimParamID id)
{
} /* size: 0 */

// <014C082E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:32
void CEnumAnimParameter::GetParameterType()
{
} /* size: 10 */

// <014C0775> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:38
// function calls: 3
void CEnumAnimParameter::GetDefaultValue()
{
	CAnimEnum::CAnimEnum(
			AnimEnumValue_t value);  // 40
	CAnimVariant::SetValue<CAnimEnum>(
				const CAnimEnum& value);  // 159
	CAnimVariant::CAnimVariant<CAnimEnum>(
				const CAnimEnum& v);  // 40
} /* size: 18, inline expansions: 3 (12 bytes) */

// <014C0613> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:44
// variable: 1
// function calls: 3
void CEnumAnimParameter::SetDefaultValue(CAnimVariant newValue)
{
	CAnimEnum tmp; // 46
	CAnimEnum::CAnimEnum(); // 46
	CAnimVariant::GetValue<CAnimEnum>(
				CAnimEnum& value);  // 47
	_DebuggerBreakInlineExpressionWrapper(void); // 47
} /* size: 0, variables: 1, inline expansions: 3 (19 bytes) */

// <014C055A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:52
// function calls: 3
void CEnumAnimParameter::GetMinValue()
{
	CAnimEnum::CAnimEnum(
			AnimEnumValue_t value);  // 54
	CAnimVariant::SetValue<CAnimEnum>(
				const CAnimEnum& value);  // 159
	CAnimVariant::CAnimVariant<CAnimEnum>(
				const CAnimEnum& v);  // 54
} /* size: 15, inline expansions: 3 (14 bytes) */

// <014C046D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:58
// function calls: 4
void CEnumAnimParameter::GetMaxValue()
{
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 60
	CAnimVariant::SetValue<CAnimEnum>(
				const CAnimEnum& value);  // 159
	CAnimVariant::CAnimVariant<CAnimEnum>(
				const CAnimEnum& v);  // 60
	CAnimEnum::CAnimEnum(
			AnimEnumValue_t value);  // 60
} /* size: 20, inline expansions: 4 (12 bytes) */

// <014C01E9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:64
// variable: 1
// function calls: 10
void CEnumAnimParameter::GetClampedValue(const CAnimVariant& unclampedValue)
{
	CAnimEnum value; // 66
	{
		CAnimEnum::CAnimEnum(); // 117
		DefaultValue(void); // 200
	}
	CAnimVariant::GetValue<CAnimEnum>(); // 194
	CAnimVariant::GetValue<CAnimEnum>(); // 66
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 67
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 119
	ClampFloatToInt<unsigned char>(unsigned char val,
					int minVal,
					int maxVal);  // 67
	CAnimVariant::SetValue<CAnimEnum>(
				const CAnimEnum& value);  // 159
	CAnimVariant::CAnimVariant<CAnimEnum>(
				const CAnimEnum& v);  // 68
	CAnimEnum::CAnimEnum(
			AnimEnumValue_t value);  // 67
} /* size: 141, variables: 1, inline expansions: 8 (167 bytes) */

// <014C491D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:72
void CEnumAnimParameter::GetOptionNames()
{
} /* size: 9 */

// <014BFCEF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:77
// variable: 1
// function calls: 22
void CEnumAnimParameter::CopyProperties(IAnimParameter* pParam)
{
	CEnumAnimParameter* pParamBase; // 81
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 74
	CAnimParameterBase::CopyProperties(
			IAnimParameter* pParam);  // 79
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 573
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 102
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::begin(); // 574
	CUtlMemory<CUtlString, int>::Base(); // 113
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::end(); // 574
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 209
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 200
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 574
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 565
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 452
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& src);  // 83
} /* size: 238, variables: 1, inline expansions: 22 (724 bytes) */

