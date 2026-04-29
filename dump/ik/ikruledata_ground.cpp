
//
// ik/ikruledata_ground.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//

// <03469FDC> ik/ikruledata_ground.cpp:4
// function calls: 39
void CIKRuleData_Ground::KV3TransferSave(CKV3TransferSaveContext* pContext)
{
	CKV3MemberName::CKV3MemberName<26>(
				const char& str);  // 6
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 158
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 149
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 164
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 164
	SaveValue<IKBoneNameAndIndex_t>(CKV3TransferSaveContext* pContext,
					KeyValues3* pSaveToValue,
					const IKBoneNameAndIndex_t& value,
					type *);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<IKBoneNameAndIndex_t>(
						const IKBoneNameAndIndex_t& sourceValue,
						KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<IKBoneNameAndIndex_t>(
						CKV3MemberName memberNameAndHash,
						const IKBoneNameAndIndex_t& sourceValue);  // 6
	CKV3MemberName::CKV3MemberName<18>(
				const char& str);  // 7
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 164
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 158
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 149
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 164
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 221
	KeyValues3::SetValueFloat(
			float value);  // 776
	SaveValue<float>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const float& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<float>(
				const float& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<float>(
				CKV3MemberName memberNameAndHash,
				const float& sourceValue);  // 7
	CKV3MemberName::CKV3MemberName<18>(
				const char& str);  // 8
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 164
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 158
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 149
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 164
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 221
	KeyValues3::SetValueFloat(
			float value);  // 776
	SaveValue<float>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const float& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<float>(
				const float& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<float>(
				CKV3MemberName memberNameAndHash,
				const float& sourceValue);  // 8
} /* size: 737, inline expansions: 39 (2042 bytes) */

// <03468CD1> ik/ikruledata_ground.cpp:11
// variables: 3
// function calls: 68
void CIKRuleData_Ground::KV3TransferLoad(CKV3TransferLoadContext* pContext)
{
	CKV3MemberName::CKV3MemberName<26>(
				const char& str);  // 13
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	CUtlStack<const KeyValues3::Count(); // 413
	CKV3TransferLoadContext::LoadClassInstance<IKBoneNameAndIndex_t>(
						IKBoneNameAndIndex_t* pClassInstance,
						const KeyValues3* pNestedValue);  // 495
	LoadValue<IKBoneNameAndIndex_t>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					IKBoneNameAndIndex_t& value,
					type *);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<IKBoneNameAndIndex_t>(
						IKBoneNameAndIndex_t& destValue,
						const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		CUtlStack<const KeyValues3::Count(); // 413
		CKV3TransferLoadContext::LoadClassInstance<IKBoneNameAndIndex_t>(
							IKBoneNameAndIndex_t* pClassInstance,
							const KeyValues3* pNestedValue);  // 495
		LoadValue<IKBoneNameAndIndex_t>(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						IKBoneNameAndIndex_t& value,
						type *);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<IKBoneNameAndIndex_t>(
							IKBoneNameAndIndex_t& destValue,
							const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<IKBoneNameAndIndex_t>(
							CKV3MemberName memberNameAndHash,
							IKBoneNameAndIndex_t& destValue,
							uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<IKBoneNameAndIndex_t>(
							CKV3MemberName memberNameAndHash,
							IKBoneNameAndIndex_t& destValue,
							uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<IKBoneNameAndIndex_t>(
							CKV3MemberName memberNameAndHash,
							IKBoneNameAndIndex_t& destValue);  // 13
	CKV3MemberName::CKV3MemberName<18>(
				const char& str);  // 14
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	KV3Helper_StringToNumber<float>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<float>(); // 694
	{
	}
	KeyValues3::GetValueAsNumeric<float>(); // 199
	KeyValues3::GetValueFloat(); // 776
	LoadValue<float>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			float& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<float>(
				float& destValue,
				const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		{
		}
		KV3Helper_StringToNumber<float>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<float>(); // 694
		KeyValues3::GetValueAsNumeric<float>(); // 199
		KeyValues3::GetValueFloat(); // 776
		LoadValue<float>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				float& value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<float>(
					float& destValue,
					const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<float>(
					CKV3MemberName memberNameAndHash,
					float& destValue,
					uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<float>(
					CKV3MemberName memberNameAndHash,
					float& destValue,
					uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<float>(
					CKV3MemberName memberNameAndHash,
					float& destValue);  // 14
	CKV3MemberName::CKV3MemberName<18>(
				const char& str);  // 15
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	KV3Helper_StringToNumber<float>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<float>(); // 694
	{
	}
	KeyValues3::GetValueAsNumeric<float>(); // 199
	KeyValues3::GetValueFloat(); // 776
	LoadValue<float>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			float& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<float>(
				float& destValue,
				const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		KV3Helper_StringToNumber<float>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<float>(); // 694
		{
		}
		KeyValues3::GetValueAsNumeric<float>(); // 199
		KeyValues3::GetValueFloat(); // 776
		LoadValue<float>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				float& value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<float>(
					float& destValue,
					const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<float>(
					CKV3MemberName memberNameAndHash,
					float& destValue,
					uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<float>(
					CKV3MemberName memberNameAndHash,
					float& destValue,
					uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<float>(
					CKV3MemberName memberNameAndHash,
					float& destValue);  // 15
} /* size: 0, inline expansions: 46 (6274 bytes) */

// <03468C6A> ik/ikruledata_ground.cpp:18
void CIKRuleData_Ground::Initialize(const CModel* pModel)
{
} /* size: 24 */

// <0346892F> ik/ikruledata_ground.cpp:24
// variable: 1
// function calls: 10
void CIKRuleData_Ground::Clone()
{
	CIKRuleData_Ground* pClone; // 26
	IIKRuleData::IIKRuleData(); // 6
	CUtlString::CUtlString(); // 26
	IKBoneNameAndIndex_t::IKBoneNameAndIndex_t(); // 6
	CIKRuleData_Ground::CIKRuleData_Ground(); // 26
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 9
	IKBoneNameAndIndex_t::operator=(
			const IKBoneNameAndIndex_t  &);  // 6
	CIKRuleData_Ground::operator=(
			const CIKRuleData_Ground  &);  // 27
} /* size: 155, variables: 1, inline expansions: 10 (230 bytes) */

