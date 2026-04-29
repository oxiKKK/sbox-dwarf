
//
// ik/ikchaindata.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 12
//

// <033239CE> ik/ikchaindata.cpp:12
// function calls: 13
void AttachmentNameAndIndex_t::KV3TransferSave(CKV3TransferSaveContext* pContext)
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
					const CUtlString& sourceValue);  // 14
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 14
} /* size: 0, inline expansions: 13 (0 bytes) */

// <0332359F> ik/ikchaindata.cpp:17
// variable: 1
// function calls: 13
void AttachmentNameAndIndex_t::KV3TransferLoad(CKV3TransferLoadContext* pContext)
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
					CUtlString& destValue);  // 19
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 19
} /* size: 162, inline expansions: 11 (287 bytes) */

// <033232B5> ik/ikchaindata.cpp:22
// variables: 2
// function calls: 7
void AttachmentNameAndIndex_t::Resolve(const CModel* pModel)
{
	AttachmentHandle_t handle; // 27
	const CAttachment* pAttachment; // 34
	operator==(const CUtlString& utlString,
			const char* pString);  // 24
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 27
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 27
	AttachmentHandle_t::operator==(
			const AttachmentHandle_t& other);  // 29
} /* size: 0, variables: 2, inline expansions: 7 (212 bytes) */

// <0332065A> ik/ikchaindata.cpp:46
// variables: 4
// function calls: 155
void CIKChainData_t::KV3TransferSave(CKV3TransferSaveContext* pContext)
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
					const CUtlString& sourceValue);  // 48
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 48
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<9>(
				const char& str);  // 49
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 164
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 158
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 149
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 164
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 830
	AlignValue<unsigned int>(unsigned int val,
				uintp alignment);  // 225
	CKV3TransferSaveContext::NotePooledAllocation(
				uint nBytes);  // 830
	NotePooledAllocation(CKV3TransferSaveContext* pSaveContext,
				const Array_t& arr);  // 604
	{
		KeyValues3* pArrayElement; // 680
		CKV3ArrayIteratorView<false>& __for_range; // 64837
		iterator __for_begin; // 64847
		iterator __for_end; // 64857
		{
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 74
			KeyValues3::GetType(); // 74
		}
		{
		}
		CKV3ArrayIteratorView<false>::CKV3ArrayIteratorView(
					KV3Pointer_t pKV3);  // 67
		CKV3ArrayIteratorView<false>::CKV3ArrayIteratorView(
					KV3Pointer_t pKV3);  // 921
		KeyValues3::IterateArray(); // 680
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<false>::begin(); // 680
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<false>::end(); // 680
		iterator::operator!=(
				const iterator& rhs);  // 680
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 176
		CUtlStack<KeyValues3::Count(); // 199
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 213
		CKV3TransferSaveContext::SaveClassPointer<const AttachmentNameAndIndex_t>(
								const AttachmentNameAndIndex_t* const& pClassInstance,
								KeyValues3* pSaveToValue);  // 172
		CKV3TransferSaveContext::SaveClassPointer<const CIKChainJointData_t>(
								const CIKChainJointData_t* const& pClassInstance,
								KeyValues3* pSaveToValue);  // 488
		SaveValue<CIKChainJointData_t>(CKV3TransferSaveContext* pContext,
						KeyValues3* pSaveToValue,
						const CIKChainJointData_t& value,
						type *);  // 1539
		CKV3TransferSaveContext::SaveValueDirect<CIKChainJointData_t>(
							const CIKChainJointData_t& sourceValue,
							KeyValues3* pSaveToMember);  // 682
		{
		}
		iterator::operator*(); // 680
	}
	SaveBlittableArrayElements<CIKChainJointData_t>(CKV3TransferSaveContext* pContext,
							KeyValues3* pSaveToValue,
							int nCount,
							const CIKChainJointData_t* pValues);  // 606
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 812
	GetCount(const Array_t& arr); // 605
	CUtlMemory<CIKChainJointData_t, int>::Base(); // 113
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Base(); // 842
	GetBase(const Array_t& arr); // 606
	SaveValue<CUtlVector<CIKChainJointData_t> >(CKV3TransferSaveContext* pContext,
							KeyValues3* pSaveToValue,
							const CUtlVector<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >& value,
							type *);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<CUtlVector<CIKChainJointData_t> >(
								const CUtlVector<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >& sourceValue,
								KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<CUtlVector<CIKChainJointData_t> >(
								CKV3MemberName memberNameAndHash,
								const CUtlVector<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >& sourceValue);  // 49
	CKV3MemberName::CKV3MemberName<35>(
				const char& str);  // 50
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
	CUtlStack<KeyValues3::Count(); // 199
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 213
	CKV3TransferSaveContext::SaveClassPointer<const AttachmentNameAndIndex_t>(
							const AttachmentNameAndIndex_t* const& pClassInstance,
							KeyValues3* pSaveToValue);  // 172
	CKV3TransferSaveContext::SaveClassPointer<const AttachmentNameAndIndex_t>(
							const AttachmentNameAndIndex_t* const& pClassInstance,
							KeyValues3* pSaveToValue);  // 488
	SaveValue<AttachmentNameAndIndex_t>(CKV3TransferSaveContext* pContext,
						KeyValues3* pSaveToValue,
						const AttachmentNameAndIndex_t& value,
						type *);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<AttachmentNameAndIndex_t>(
							const AttachmentNameAndIndex_t& sourceValue,
							KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<AttachmentNameAndIndex_t>(
							CKV3MemberName memberNameAndHash,
							const AttachmentNameAndIndex_t& sourceValue);  // 50
	CKV3MemberName::CKV3MemberName<14>(
				const char& str);  // 51
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
	CUtlStack<KeyValues3::Count(); // 199
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 213
	CKV3TransferSaveContext::SaveClassPointer<const AttachmentNameAndIndex_t>(
							const AttachmentNameAndIndex_t* const& pClassInstance,
							KeyValues3* pSaveToValue);  // 172
	CKV3TransferSaveContext::SaveClassPointer<const CIKChainJointData_t>(
							const CIKChainJointData_t* const& pClassInstance,
							KeyValues3* pSaveToValue);  // 488
	SaveValue<CIKChainJointData_t>(CKV3TransferSaveContext* pContext,
					KeyValues3* pSaveToValue,
					const CIKChainJointData_t& value,
					type *);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<CIKChainJointData_t>(
						const CIKChainJointData_t& sourceValue,
						KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<CIKChainJointData_t>(
						CKV3MemberName memberNameAndHash,
						const CIKChainJointData_t& sourceValue);  // 51
	CKV3MemberName::CKV3MemberName<31>(
				const char& str);  // 52
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
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 766
	SaveValue<bool>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const bool& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<bool>(
				const bool& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<bool>(
				CKV3MemberName memberNameAndHash,
				const bool& sourceValue);  // 52
	CKV3MemberName::CKV3MemberName<24>(
				const char& str);  // 53
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
	CUtlStack<KeyValues3::Count(); // 199
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 213
	CKV3TransferSaveContext::SaveClassPointer<const AttachmentNameAndIndex_t>(
							const AttachmentNameAndIndex_t* const& pClassInstance,
							KeyValues3* pSaveToValue);  // 172
	CKV3TransferSaveContext::SaveClassPointer<const IKSolverSettings_t>(
							const IKSolverSettings_t* const& pClassInstance,
							KeyValues3* pSaveToValue);  // 488
	SaveValue<IKSolverSettings_t>(CKV3TransferSaveContext* pContext,
					KeyValues3* pSaveToValue,
					const IKSolverSettings_t& value,
					type *);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<IKSolverSettings_t>(
						const IKSolverSettings_t& sourceValue,
						KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<IKSolverSettings_t>(
						CKV3MemberName memberNameAndHash,
						const IKSolverSettings_t& sourceValue);  // 53
	CKV3MemberName::CKV3MemberName<24>(
				const char& str);  // 54
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
	CUtlStack<KeyValues3::Count(); // 199
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 213
	CKV3TransferSaveContext::SaveClassPointer<const AttachmentNameAndIndex_t>(
							const AttachmentNameAndIndex_t* const& pClassInstance,
							KeyValues3* pSaveToValue);  // 172
	CKV3TransferSaveContext::SaveClassPointer<const IKTargetSettings_t>(
							const IKTargetSettings_t* const& pClassInstance,
							KeyValues3* pSaveToValue);  // 488
	SaveValue<IKTargetSettings_t>(CKV3TransferSaveContext* pContext,
					KeyValues3* pSaveToValue,
					const IKTargetSettings_t& value,
					type *);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<IKTargetSettings_t>(
						const IKTargetSettings_t& sourceValue,
						KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<IKTargetSettings_t>(
						CKV3MemberName memberNameAndHash,
						const IKTargetSettings_t& sourceValue);  // 54
	CKV3MemberName::CKV3MemberName<32>(
				const char& str);  // 55
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
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 766
	SaveValue<bool>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const bool& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<bool>(
				const bool& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<bool>(
				CKV3MemberName memberNameAndHash,
				const bool& sourceValue);  // 55
} /* size: 0, inline expansions: 131 (0 bytes) */

// <0331E170> ik/ikchaindata.cpp:58
// variables: 5
// function calls: 134
void CIKChainData_t::KV3TransferLoad(CKV3TransferLoadContext* pContext)
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
					CUtlString& destValue);  // 60
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 60
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<9>(
				const char& str);  // 61
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 255
	KeyValues3::IsArray(); // 612
	CKV3TransferLoadContext::AllocatePooledMemory(
				uint nElementSize,
				uint nElementCount);  // 820
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 823
	CUtlMemory<CIKChainJointData_t, int>::IsExternallyAllocated(); // 577
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 587
	CUtlMemory<CIKChainJointData_t, int>::ConvertToExternalMemory(
				CIKChainJointData_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 306
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::ConvertToExternalMemory(
				CIKChainJointData_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 823
	SetCount(CKV3TransferLoadContext* pLoadContext,
		Array_t& arr,
		int nCount);  // 613
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 812
	GetCount(const Array_t& arr); // 614
	CUtlMemory<CIKChainJointData_t, int>::Base(); // 112
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Base(); // 838
	GetBase(Array_t& arr); // 618
	{
		const KeyValues3* pArrayElement; // 647
		CKV3ArrayIteratorView<true>& __for_range; // 64282
		iterator __for_begin; // 64292
		iterator __for_end; // 64302
		{
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 74
			KeyValues3::GetType(); // 74
		}
		{
		}
		CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
					KV3Pointer_t pKV3);  // 67
		CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
					KV3Pointer_t pKV3);  // 922
		KeyValues3::IterateArray(); // 647
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<true>::begin(); // 647
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<true>::end(); // 647
		iterator::operator!=(
				const iterator& rhs);  // 647
		{
		}
		iterator::operator*(); // 647
		CUtlStack<const KeyValues3::Count(); // 413
		CKV3TransferLoadContext::LoadClassInstance<CIKChainJointData_t>(
							CIKChainJointData_t* pClassInstance,
							const KeyValues3* pNestedValue);  // 495
		LoadValue<CIKChainJointData_t>(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						CIKChainJointData_t& value,
						type *);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<CIKChainJointData_t>(
							CIKChainJointData_t& destValue,
							const KeyValues3* pLoadFromMember);  // 651
	}
	LoadBlittableArrayElements<CIKChainJointData_t>(CKV3TransferLoadContext* pContext,
							const KeyValues3* pLoadFromValue,
							int nCount,
							CIKChainJointData_t* pValues);  // 618
	LoadValue<CUtlVector<CIKChainJointData_t> >(CKV3TransferLoadContext* pContext,
							const KeyValues3* pLoadFromValue,
							CUtlVector<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >& value,
							type *);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<CUtlVector<CIKChainJointData_t> >(
								CUtlVector<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >& destValue,
								const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<CUtlVector<CIKChainJointData_t> >(
									CKV3MemberName memberNameAndHash,
									CUtlVector<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >& destValue);  // 61
	CKV3MemberName::CKV3MemberName<35>(
				const char& str);  // 62
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	CUtlStack<const KeyValues3::Count(); // 413
	CKV3TransferLoadContext::LoadClassInstance<AttachmentNameAndIndex_t>(
							AttachmentNameAndIndex_t* pClassInstance,
							const KeyValues3* pNestedValue);  // 495
	LoadValue<AttachmentNameAndIndex_t>(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						AttachmentNameAndIndex_t& value,
						type *);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<AttachmentNameAndIndex_t>(
							AttachmentNameAndIndex_t& destValue,
							const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<AttachmentNameAndIndex_t>(
								CKV3MemberName memberNameAndHash,
								AttachmentNameAndIndex_t& destValue);  // 62
	CKV3MemberName::CKV3MemberName<14>(
				const char& str);  // 63
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	CUtlStack<const KeyValues3::Count(); // 413
	CKV3TransferLoadContext::LoadClassInstance<CIKChainJointData_t>(
						CIKChainJointData_t* pClassInstance,
						const KeyValues3* pNestedValue);  // 495
	LoadValue<CIKChainJointData_t>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					CIKChainJointData_t& value,
					type *);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<CIKChainJointData_t>(
						CIKChainJointData_t& destValue,
						const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<CIKChainJointData_t>(
								CKV3MemberName memberNameAndHash,
								CIKChainJointData_t& destValue);  // 63
	CKV3MemberName::CKV3MemberName<31>(
				const char& str);  // 64
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	LoadValue<bool>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			bool& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<bool>(
				bool& destValue,
				const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<bool>(
						CKV3MemberName memberNameAndHash,
						bool& destValue);  // 64
	CKV3MemberName::CKV3MemberName<24>(
				const char& str);  // 65
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	CUtlStack<const KeyValues3::Count(); // 413
	CKV3TransferLoadContext::LoadClassInstance<IKSolverSettings_t>(
						IKSolverSettings_t* pClassInstance,
						const KeyValues3* pNestedValue);  // 495
	LoadValue<IKSolverSettings_t>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					IKSolverSettings_t& value,
					type *);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<IKSolverSettings_t>(
						IKSolverSettings_t& destValue,
						const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<IKSolverSettings_t>(
							CKV3MemberName memberNameAndHash,
							IKSolverSettings_t& destValue);  // 65
	CKV3MemberName::CKV3MemberName<24>(
				const char& str);  // 66
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	CUtlStack<const KeyValues3::Count(); // 413
	CKV3TransferLoadContext::LoadClassInstance<IKTargetSettings_t>(
						IKTargetSettings_t* pClassInstance,
						const KeyValues3* pNestedValue);  // 495
	LoadValue<IKTargetSettings_t>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					IKTargetSettings_t& value,
					type *);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<IKTargetSettings_t>(
						IKTargetSettings_t& destValue,
						const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<IKTargetSettings_t>(
							CKV3MemberName memberNameAndHash,
							IKTargetSettings_t& destValue);  // 66
	CKV3MemberName::CKV3MemberName<32>(
				const char& str);  // 67
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	LoadValue<bool>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			bool& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<bool>(
				bool& destValue,
				const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<bool>(
						CKV3MemberName memberNameAndHash,
						bool& destValue);  // 67
} /* size: 0, inline expansions: 115 (5806 bytes) */

// <0331DE20> ik/ikchaindata.cpp:70
// function calls: 13
void CIKChainData_t::CIKChainData_t()
{
	CUtlString::CUtlString(); // 70
	CUtlMemory<CIKChainJointData_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CIKChainJointData_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::CUtlVector(); // 70
	CUtlString::CUtlString(); // 29
	AttachmentNameAndIndex_t::AttachmentNameAndIndex_t(); // 70
	IKSolverSettings_t::IKSolverSettings_t(); // 70
	AnimParamID::AnimParamID(); // 42
	CUtlString::CUtlString(); // 26
	IKBoneNameAndIndex_t::IKBoneNameAndIndex_t(); // 42
	IKTargetSettings_t::IKTargetSettings_t(); // 70
} /* size: 159, inline expansions: 13 (168 bytes) */

// <0331DE04> ik/ikchaindata.cpp:70
void CIKChainData_t::CIKChainData_t()
{
} /* size: 0 */

// <0331D773> ik/ikchaindata.cpp:74
// function calls: 28
void CIKChainData_t::CIKChainData_t(const CIKChainData_t& kRhs)
{
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 75
	CUtlMemory<CIKChainJointData_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CIKChainJointData_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 434
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 573
	CUtlMemory<CIKChainJointData_t, int>::Base(); // 112
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Base(); // 102
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::begin(); // 574
	CUtlMemory<CIKChainJointData_t, int>::Base(); // 113
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Base(); // 105
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 105
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::end(); // 574
	UtlTraitsCopyRange<CIKChainJointData_t>(const CIKChainJointData_t* pFrom,
						const CIKChainJointData_t* pFromEnd,
						CIKChainJointData_t* pTo);  // 200
	UtlTraitsCopyRange<CIKChainJointData_t>(const CIKChainJointData_t* pFrom,
						const CIKChainJointData_t* pFromEnd,
						CIKChainJointData_t* pTo);  // 574
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator=(
			const CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >& other);  // 565
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator=(
			const CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >& other);  // 452
	CUtlVector<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator=(
			const CUtlVector<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >& src);  // 434
	CUtlVector<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::CUtlVector(
			const CUtlVector<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >& src);  // 76
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 24
	AttachmentNameAndIndex_t::AttachmentNameAndIndex_t(
				const AttachmentNameAndIndex_t& kRhs);  // 77
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 21
	IKBoneNameAndIndex_t::IKBoneNameAndIndex_t(
				const IKBoneNameAndIndex_t& kRhs);  // 42
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 42
	IKTargetSettings_t::IKTargetSettings_t(
				const IKTargetSettings_t  &);  // 81
} /* size: 0, inline expansions: 28 (0 bytes) */

// <0331D74B> ik/ikchaindata.cpp:74
void CIKChainData_t::CIKChainData_t(const CIKChainData_t& kRhs)
{
} /* size: 0 */

// <0331CF97> ik/ikchaindata.cpp:85
// function calls: 32
void CIKChainData_t::operator=(const CIKChainData_t& kRhs)
{
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 87
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 573
	CUtlMemory<CIKChainJointData_t, int>::Base(); // 112
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Base(); // 102
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::begin(); // 574
	CUtlMemory<CIKChainJointData_t, int>::Base(); // 113
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Base(); // 105
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 105
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::end(); // 574
	UtlTraitsCopyRange<CIKChainJointData_t>(const CIKChainJointData_t* pFrom,
						const CIKChainJointData_t* pFromEnd,
						CIKChainJointData_t* pTo);  // 200
	UtlTraitsCopyRange<CIKChainJointData_t>(const CIKChainJointData_t* pFrom,
						const CIKChainJointData_t* pFromEnd,
						CIKChainJointData_t* pTo);  // 574
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator=(
			const CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >& other);  // 565
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator=(
			const CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >& other);  // 452
	CUtlVector<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator=(
			const CUtlVector<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >& src);  // 88
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 12
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 21
	VectorAligned::operator=(
			const VectorAligned& src);  // 21
	CAnimAttachment::operator=(
			const CAnimAttachment  &);  // 12
	AttachmentNameAndIndex_t::operator=(
			const AttachmentNameAndIndex_t  &);  // 89
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 9
	IKBoneNameAndIndex_t::operator=(
			const IKBoneNameAndIndex_t  &);  // 42
	AnimParamID::operator=(
			const AnimParamID& rhs);  // 42
	IKTargetSettings_t::operator=(
			const IKTargetSettings_t  &);  // 93
} /* size: 0, inline expansions: 32 (0 bytes) */

// <0331BAA0> ik/ikchaindata.cpp:97
// variables: 36
// function calls: 83
void CIKChainData_t::Initialize(const CModel* pModel, const CSpaceAgnosticBoneAccessor& boneAccessor)
{
	bool bSuccess; // 99
	{
		CIKChainJointData_t& joint; // 104
		CUtlVector<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >& __for_range; // 1221
		iterator __for_begin; // 52984
		iterator __for_end; // 52984
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 104
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::end(); // 104
		CUtlMemory<CIKChainJointData_t, int>::Base(); // 112
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Base(); // 102
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::begin(); // 104
	}
	{
		{
			int nParentJointIndex; // 112
			const CTransform  mWs1; // 117
			const CTransform  mWs2; // 118
			CUtlMemory<CIKChainJointData_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
					int i);  // 112
			CUtlString::operator=(
					const char* src);  // 114
			CIKChainJointData_t::GetBoneIndex(); // 117
			CUtlMemory<CIKChainJointData_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
					int i);  // 117
			CUtlMemory<CIKChainJointData_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
					int i);  // 118
			CIKChainJointData_t::GetBoneIndex(); // 118
			VectorAligned::operator fltx4(); // 71
			{
				fltx4 retVal; // 1478
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1479
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1481
			}
			SetWSIMD<>(fltx4 a,
					float f);  // 71
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 120
			{
				fltx4 v1_yzxx; // 3340
				fltx4 v2_zxyy; // 3342
				fltx4 v1_zxyy; // 3344
				fltx4 v2_yzxx; // 3346
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3341
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3345
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3343
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3347
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
			}
			CrossProduct3SIMD<>(const fltx4& v1,
						const fltx4& v2);  // 310
			{
				fltx4 retVal; // 1352
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1353
			}
			SplatWSIMD<>(const fltx4& a); // 313
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 311
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1684
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1684
			MaddSIMD<>(const fltx4& a,
					const fltx4& b,
					const fltx4& c);  // 313
			{
				fltx4 v1_yzxx; // 3340
				fltx4 v2_zxyy; // 3342
				fltx4 v1_zxyy; // 3344
				fltx4 v2_yzxx; // 3346
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3343
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3347
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
			}
			CrossProduct3SIMD<>(const fltx4& v1,
						const fltx4& v2);  // 315
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 316
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 318
			QuaternionAligned::operator*(
					const VectorAligned& v);  // 435
			QuaternionAligned::GetForward(); // 391
			CTransform::GetForward(); // 120
			VectorAligned::operator fltx4(); // 71
			{
				fltx4 retVal; // 1478
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1479
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1481
			}
			SetWSIMD<>(fltx4 a,
					float f);  // 71
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 120
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 256
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 256
			VectorAligned::operator-(
					const VectorAligned& v);  // 120
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1694
			{
				fltx4 retVal; // 1314
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1315
			}
			SplatYSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1333
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1334
			}
			SplatZSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1295
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1296
			}
			SplatXSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			Dot3SIMD<>(const fltx4& a,
					const fltx4& b);  // 379
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 380
			VectorAligned::Dot(
				const VectorAligned& v);  // 120
		}
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 110
		_DebuggerBreakInlineExpressionWrapper(void); // 110
	}
} /* size: 0, variables: 1 */

// <0331B122> ik/ikchaindata.cpp:131
// variables: 8
// function calls: 46
void CIKChainData_t::VerifyChain(const IPoseAccessor* pPose, bool bAssert)
{
	const char   __FUNCTION__; // 25183
	{
		const CTransform& m; // 137
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 139
		}
		_mm_cvtss_f32(__m128 __A); // 1496
		GetXSIMD<>(fltx4 a); // 74
		QuaternionAligned::x(); // 198
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 198
		_mm_cvtss_f32(__m128 __A); // 1515
		GetYSIMD<>(fltx4 a); // 75
		QuaternionAligned::y(); // 198
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 198
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		QuaternionAligned::z(); // 198
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 198
		_mm_cvtss_f32(__m128 __A); // 1553
		GetWSIMD<>(fltx4 a); // 77
		QuaternionAligned::w(); // 198
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 198
		QuaternionAligned::IsValid(); // 139
	}
	{
		int n; // 142
		{
			const CIKChainJointData_t& joint; // 144
			int nBoneIndex; // 145
			const CTransform& m; // 146
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 148
			}
			_mm_cvtss_f32(__m128 __A); // 1515
			GetYSIMD<>(fltx4 a); // 75
			QuaternionAligned::y(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			QuaternionAligned::z(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			_mm_cvtss_f32(__m128 __A); // 1553
			GetWSIMD<>(fltx4 a); // 77
			QuaternionAligned::w(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 74
			QuaternionAligned::x(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			QuaternionAligned::IsValid(); // 148
			CUtlMemory<CIKChainJointData_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
					int i);  // 144
			CIKChainJointData_t::GetBoneIndex(); // 145
		}
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 142
	}
} /* size: 0, variables: 1 */

