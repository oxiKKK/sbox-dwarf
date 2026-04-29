
//
// ik/ikbonenameandindex.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//

// <034A5FDF> ik/ikbonenameandindex.cpp:5
// function calls: 13
void IKBoneNameAndIndex_t::KV3TransferSave(CKV3TransferSaveContext* pContext)
{
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
	CUtlString::Get(); // 1043
	SaveValue<CUtlString>(CKV3TransferSaveContext* pContext,
				KeyValues3* pSaveToValue,
				const CUtlString& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<CUtlString>(
					const CUtlString& sourceValue,
					KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<CUtlString>(
					CKV3MemberName memberNameAndHash,
					const CUtlString& sourceValue);  // 7
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 7
} /* size: 218, inline expansions: 13 (522 bytes) */

// <034A5BBA> ik/ikbonenameandindex.cpp:10
// variable: 1
// function calls: 13
void IKBoneNameAndIndex_t::KV3TransferLoad(CKV3TransferLoadContext* pContext)
{
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	LoadValue<CUtlString>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				CUtlString& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<CUtlString>(
					CUtlString& destValue,
					const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		LoadValue<CUtlString>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					CUtlString& value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<CUtlString>(
						CUtlString& destValue,
						const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<CUtlString>(
					CKV3MemberName memberNameAndHash,
					CUtlString& destValue,
					uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<CUtlString>(
					CKV3MemberName memberNameAndHash,
					CUtlString& destValue,
					uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<CUtlString>(
					CKV3MemberName memberNameAndHash,
					CUtlString& destValue);  // 12
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 12
} /* size: 162, inline expansions: 11 (287 bytes) */

// <034A5AF6> ik/ikbonenameandindex.cpp:15
// function calls: 2
void IKBoneNameAndIndex_t::Resolve(const CModel* pModel)
{
	CUtlString::Get(); // 99
	CUtlString::String(); // 17
} /* size: 83, inline expansions: 2 (34 bytes) */

