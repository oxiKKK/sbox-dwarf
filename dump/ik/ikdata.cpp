
//
// ik/ikdata.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//

// <032D2634> ik/ikdata.cpp:6
// variables: 4
// function calls: 48
void CIKData_t::KV3TransferSave(CKV3TransferSaveContext* pContext)
{
	CKV3MemberName::CKV3MemberName<17>(
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
	SaveValue<CIKControlRigData_t>(CKV3TransferSaveContext* pContext,
					KeyValues3* pSaveToValue,
					const CIKControlRigData_t& value,
					type *);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<CIKControlRigData_t>(
						const CIKControlRigData_t& sourceValue,
						KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<CIKControlRigData_t>(
						CKV3MemberName memberNameAndHash,
						const CIKControlRigData_t& sourceValue);  // 8
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<11>(
				const char& str);  // 9
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
	CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::Count(); // 830
	AlignValue<unsigned int>(unsigned int val,
				uintp alignment);  // 225
	CKV3TransferSaveContext::NotePooledAllocation(
				uint nBytes);  // 830
	NotePooledAllocation(CKV3TransferSaveContext* pSaveContext,
				const Array_t& arr);  // 604
	{
		KeyValues3* pArrayElement; // 680
		CKV3ArrayIteratorView<false>& __for_range; // 31621
		iterator __for_begin; // 31631
		iterator __for_end; // 31641
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
		{
		}
		iterator::operator*(); // 680
		SaveValue<CIKChainData_t>(CKV3TransferSaveContext* pContext,
						KeyValues3* pSaveToValue,
						const CIKChainData_t& value,
						type *);  // 1539
		CKV3TransferSaveContext::SaveValueDirect<CIKChainData_t>(
						const CIKChainData_t& sourceValue,
						KeyValues3* pSaveToMember);  // 682
	}
	SaveBlittableArrayElements<CIKChainData_t>(CKV3TransferSaveContext* pContext,
							KeyValues3* pSaveToValue,
							int nCount,
							const CIKChainData_t* pValues);  // 606
	CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::Count(); // 812
	GetCount(const Array_t& arr); // 605
	CUtlMemory<CIKChainData_t, int>::Base(); // 113
	CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::Base(); // 842
	GetBase(const Array_t& arr); // 606
	SaveValue<CUtlVector<CIKChainData_t> >(CKV3TransferSaveContext* pContext,
						KeyValues3* pSaveToValue,
						const CUtlVector<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >& value,
						type *);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<CUtlVector<CIKChainData_t> >(
							const CUtlVector<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >& sourceValue,
							KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<CUtlVector<CIKChainData_t> >(
							CKV3MemberName memberNameAndHash,
							const CUtlVector<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >& sourceValue);  // 9
} /* size: 0, inline expansions: 33 (0 bytes) */

// <032D1CF8> ik/ikdata.cpp:12
// variables: 2
// function calls: 27
void CIKData_t::KV3TransferLoad(CKV3TransferLoadContext* pContext)
{
	CKV3MemberName::CKV3MemberName<17>(
				const char& str);  // 14
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	CUtlStack<const KeyValues3::Count(); // 413
	CKV3TransferLoadContext::LoadClassInstance<CIKControlRigData_t>(
						CIKControlRigData_t* pClassInstance,
						const KeyValues3* pNestedValue);  // 495
	LoadValue<CIKControlRigData_t>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					CIKControlRigData_t& value,
					type *);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<CIKControlRigData_t>(
						CIKControlRigData_t& destValue,
						const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		CUtlStack<const KeyValues3::Count(); // 413
		CKV3TransferLoadContext::LoadClassInstance<CIKControlRigData_t>(
							CIKControlRigData_t* pClassInstance,
							const KeyValues3* pNestedValue);  // 495
		LoadValue<CIKControlRigData_t>(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						CIKControlRigData_t& value,
						type *);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<CIKControlRigData_t>(
							CIKControlRigData_t& destValue,
							const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<CIKControlRigData_t>(
						CKV3MemberName memberNameAndHash,
						CIKControlRigData_t& destValue,
						uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<CIKControlRigData_t>(
						CKV3MemberName memberNameAndHash,
						CIKControlRigData_t& destValue,
						uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<CIKControlRigData_t>(
						CKV3MemberName memberNameAndHash,
						CIKControlRigData_t& destValue);  // 14
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<11>(
				const char& str);  // 15
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	CKV3TransferLoadContext::LoadValueDirect<CUtlVector<CIKChainData_t> >(
							CUtlVector<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >& destValue,
							const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		CKV3TransferLoadContext::LoadValueDirect<CUtlVector<CIKChainData_t> >(
								CUtlVector<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >& destValue,
								const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<CUtlVector<CIKChainData_t> >(
							CKV3MemberName memberNameAndHash,
							CUtlVector<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >& destValue,
							uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<CUtlVector<CIKChainData_t> >(
							CKV3MemberName memberNameAndHash,
							CUtlVector<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >& destValue,
							uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<CUtlVector<CIKChainData_t> >(
							CKV3MemberName memberNameAndHash,
							CUtlVector<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >& destValue);  // 15
} /* size: 436, inline expansions: 22 (1122 bytes) */

// <032D1B1E> ik/ikdata.cpp:18
// variables: 5
// function calls: 5
void CIKData_t::Initialize(const CModel* pModel, const CSpaceAgnosticBoneAccessor& boneAccessor)
{
	bool bSuccess; // 20
	{
		CIKChainData_t& chain; // 24
		CUtlVector<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >& __for_range; // 31374
		iterator __for_begin; // 19505
		iterator __for_end; // 19505
		CUtlMemory<CIKChainData_t, int>::Base(); // 112
		CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::Base(); // 102
		CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::begin(); // 24
		CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::Count(); // 104
		CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::end(); // 24
	}
} /* size: 119, variables: 1 */

