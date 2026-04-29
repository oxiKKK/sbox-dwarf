
//
// ik/iksolversettings.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//

// <03276A0E> ik/iksolversettings.cpp:4
// variable: 1
// function calls: 21
void IKSolverSettings_t::KV3TransferLoad(CKV3TransferLoadContext* pContext)
{
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
	KeyValues3::GetType(); // 534
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long int>(); // 694
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 543
	{
		size_t i; // 460
	}
	KV3Transfer_EnumeratorValueFromName<IKSolverType>(const char* pEnumeratorName,
								IKSolverType* pOutValue);  // 536
	LoadValue<IKSolverType>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				IKSolverType& value,
				type *);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<IKSolverType>(
					IKSolverType& destValue,
					const KeyValues3* pLoadFromMember);  // 292
	CKV3TransferLoadContext::LoadValueFromMember<IKSolverType>(
						CKV3MemberName memberNameAndHash,
						IKSolverType& destValue,
						uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<IKSolverType>(
						CKV3MemberName memberNameAndHash,
						IKSolverType& destValue);  // 6
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<13>(
				const char& str);  // 6
} /* size: 0, inline expansions: 21 (1646 bytes) */

// <032764C9> ik/iksolversettings.cpp:9
// variable: 1
// function calls: 18
void IKSolverSettings_t::KV3TransferSave(CKV3TransferSaveContext* pContext)
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
	{
		size_t i; // 442
	}
	{
	}
	KV3Transfer_EnumeratorNameFromValue<IKSolverType>(IKSolverType nValue); // 439
	KV3Transfer_EnumeratorNameFromValue<IKSolverType>(IKSolverType nValue); // 511
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 526
	SaveValue<IKSolverType>(CKV3TransferSaveContext* pContext,
				KeyValues3* pSaveToValue,
				const IKSolverType& value,
				type *);  // 509
	SaveValue<IKSolverType>(CKV3TransferSaveContext* pContext,
				KeyValues3* pSaveToValue,
				const IKSolverType& value,
				type *);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<IKSolverType>(
					const IKSolverType& sourceValue,
					KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<IKSolverType>(
					CKV3MemberName memberNameAndHash,
					const IKSolverType& sourceValue);  // 11
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<13>(
				const char& str);  // 11
} /* size: 0, inline expansions: 18 (1005 bytes) */

// <0327647A> ik/iksolversettings.cpp:14
void IKSolverSettings_t::Initialize(const CModel* pModel, const CSpaceAgnosticBoneAccessor& boneAccessor)
{
} /* size: 10 */

// <0327644A> ik/iksolversettings.cpp:19
void OnSolverTypeChanged(void* pPropertyDomain)
{
} /* size: 10 */

// <03276405> ik/iksolversettings.cpp:24
// variable: 1
void VisibleIfUsesIterations(void* pThis)
{
	const IKSolverSettings_t* pTyped; // 26
} /* size: 21, variables: 1 */

