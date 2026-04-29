
//
// ik/ikchainjointdata.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 12
//

// <03346C2C> ik/ikchainjointdata.cpp:5
// variables: 4
// function calls: 59
void CIKChainJointData_t::KV3TransferSave(CKV3TransferSaveContext* pContext)
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
	SaveValue<IKBoneNameAndIndex_t>(CKV3TransferSaveContext* pContext,
					KeyValues3* pSaveToValue,
					const IKBoneNameAndIndex_t& value,
					type *);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<IKBoneNameAndIndex_t>(
						const IKBoneNameAndIndex_t& sourceValue,
						KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<IKBoneNameAndIndex_t>(
						CKV3MemberName memberNameAndHash,
						const IKBoneNameAndIndex_t& sourceValue);  // 7
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 7
	CKV3MemberName::CKV3MemberName<22>(
				const char& str);  // 8
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
	CUtlVectorBase<IIKJointConstraintData::Count(); // 830
	AlignValue<unsigned int>(unsigned int val,
				uintp alignment);  // 225
	CKV3TransferSaveContext::NotePooledAllocation(
				uint nBytes);  // 830
	NotePooledAllocation(CKV3TransferSaveContext* pSaveContext,
				const Array_t& arr);  // 604
	{
		KeyValues3* pArrayElement; // 680
		CKV3ArrayIteratorView<false>& __for_range; // 41973
		iterator __for_begin; // 41983
		iterator __for_end; // 41993
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
		SaveValue<IIKJointConstraintData*>(CKV3TransferSaveContext* pContext,
							KeyValues3* pSaveToValue,
							IIKJointConstraintData* const& value,
							type *);  // 1539
		CKV3TransferSaveContext::SaveValueDirect<IIKJointConstraintData*>(
							IIKJointConstraintData* const& sourceValue,
							KeyValues3* pSaveToMember);  // 682
	}
	SaveBlittableArrayElements<IIKJointConstraintData*>(CKV3TransferSaveContext* pContext,
								KeyValues3* pSaveToValue,
								int nCount,
								IIKJointConstraintData* const* pValues);  // 606
	CUtlVectorBase<IIKJointConstraintData::Count(); // 812
	GetCount(const Array_t& arr); // 605
	CUtlMemory<IIKJointConstraintData::Base(); // 113
	CUtlVectorBase<IIKJointConstraintData::Base(); // 842
	GetBase(const Array_t& arr); // 606
	SaveValue<CUtlVector<IIKJointConstraintData*> >(CKV3TransferSaveContext* pContext,
							KeyValues3* pSaveToValue,
							const CUtlVector<IIKJointConstraintData*, CUtlMemory<IIKJointConstraintData*, int> >& value,
							type *);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<CUtlVector<IIKJointConstraintData*> >(
								const CUtlVector<IIKJointConstraintData*, CUtlMemory<IIKJointConstraintData*, int> >& sourceValue,
								KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<CUtlVector<IIKJointConstraintData*> >(
								CKV3MemberName memberNameAndHash,
								const CUtlVector<IIKJointConstraintData*, CUtlMemory<IIKJointConstraintData*, int> >& sourceValue);  // 8
	CKV3MemberName::CKV3MemberName<17>(
				const char& str);  // 9
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
	SaveValue<Quaternion>(CKV3TransferSaveContext* pContext,
				KeyValues3* pSaveToValue,
				const Quaternion& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<Quaternion>(
					const Quaternion& sourceValue,
					KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<Quaternion>(
					CKV3MemberName memberNameAndHash,
					const Quaternion& sourceValue);  // 9
} /* size: 0, inline expansions: 44 (0 bytes) */

// <03345FB6> ik/ikchainjointdata.cpp:12
// variables: 2
// function calls: 39
void CIKChainJointData_t::KV3TransferLoad(CKV3TransferLoadContext* pContext)
{
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
							IKBoneNameAndIndex_t& destValue);  // 14
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 14
	CKV3MemberName::CKV3MemberName<22>(
				const char& str);  // 15
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	CKV3TransferLoadContext::LoadValueDirect<CUtlVector<IIKJointConstraintData*> >(
								CUtlVector<IIKJointConstraintData*, CUtlMemory<IIKJointConstraintData*, int> >& destValue,
								const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		CKV3TransferLoadContext::LoadValueDirect<CUtlVector<IIKJointConstraintData*> >(
									CUtlVector<IIKJointConstraintData*, CUtlMemory<IIKJointConstraintData*, int> >& destValue,
									const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<CUtlVector<IIKJointConstraintData*> >(
									CKV3MemberName memberNameAndHash,
									CUtlVector<IIKJointConstraintData*, CUtlMemory<IIKJointConstraintData*, int> >& destValue,
									uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<CUtlVector<IIKJointConstraintData*> >(
									CKV3MemberName memberNameAndHash,
									CUtlVector<IIKJointConstraintData*, CUtlMemory<IIKJointConstraintData*, int> >& destValue,
									uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<CUtlVector<IIKJointConstraintData*> >(
									CKV3MemberName memberNameAndHash,
									CUtlVector<IIKJointConstraintData*, CUtlMemory<IIKJointConstraintData*, int> >& destValue);  // 15
	CKV3MemberName::CKV3MemberName<17>(
				const char& str);  // 16
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
	KeyValues3::GetValueFloatArray<4>(
				float* pOutValues);  // 1341
	LoadValue<Quaternion>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				Quaternion& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<Quaternion>(
					Quaternion& destValue,
					const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<Quaternion>(
						CKV3MemberName memberNameAndHash,
						Quaternion& destValue);  // 16
} /* size: 594, inline expansions: 34 (1592 bytes) */

// <03345DD7> ik/ikchainjointdata.cpp:19
// function calls: 7
void CIKChainJointData_t::CIKChainJointData_t()
{
	CUtlString::CUtlString(); // 26
	IKBoneNameAndIndex_t::IKBoneNameAndIndex_t(); // 19
	CUtlMemory<IIKJointConstraintData::ValidateGrowSize(); // 475
	CUtlMemory<IIKJointConstraintData::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<IIKJointConstraintData::ResetDbgInfo(); // 530
	CUtlVectorBase<IIKJointConstraintData::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<IIKJointConstraintData::CUtlVector(); // 19
} /* size: 68, inline expansions: 7 (62 bytes) */

// <03345DBB> ik/ikchainjointdata.cpp:19
void CIKChainJointData_t::CIKChainJointData_t()
{
} /* size: 0 */

// <03345A33> ik/ikchainjointdata.cpp:22
// variables: 8
// function calls: 17
void CIKChainJointData_t::~CIKChainJointData_t()
{
	{
		IIKJointConstraintData* pData; // 24
		CUtlVector<IIKJointConstraintData*, CUtlMemory<IIKJointConstraintData*, int> >& __for_range; // 49444
		iterator __for_begin; // 49454
		iterator __for_end; // 49464
	}
	{
		IIKJointConstraintData* pData; // 24
		CUtlVector<IIKJointConstraintData*, CUtlMemory<IIKJointConstraintData*, int> >& __for_range; // 49444
		iterator __for_begin; // 49454
		iterator __for_end; // 49464
		CUtlMemory<IIKJointConstraintData::Base(); // 112
		CUtlVectorBase<IIKJointConstraintData::Base(); // 102
		CUtlVectorBase<IIKJointConstraintData::begin(); // 24
		CUtlVectorBase<IIKJointConstraintData::Count(); // 104
		CUtlVectorBase<IIKJointConstraintData::end(); // 24
	}
	CUtlMemory<IIKJointConstraintData::Purge(); // 903
	CUtlMemory<IIKJointConstraintData::IsExternallyAllocated(); // 905
	CUtlMemory<IIKJointConstraintData::Purge(); // 1799
	CUtlVectorBase<IIKJointConstraintData::RemoveAll(); // 1798
	CUtlVectorBase<IIKJointConstraintData::Purge(); // 560
	ValidateAlignment<IIKJointConstraintData*>(void); // 508
	CUtlMemory<IIKJointConstraintData::Purge(); // 510
	CUtlMemory<IIKJointConstraintData::~CUtlMemory(); // 562
	CUtlVectorBase<IIKJointConstraintData::~CUtlVectorBase(); // 410
	CUtlVector<IIKJointConstraintData::~CUtlVector(); // 29
	CUtlString::~CUtlString(); // 9
	IKBoneNameAndIndex_t::~IKBoneNameAndIndex_t(); // 29
} /* size: 139, inline expansions: 12 (197 bytes) */

// <033459EB> ik/ikchainjointdata.cpp:22
// variables: 4
void CIKChainJointData_t::~CIKChainJointData_t()
{
	{
		IIKJointConstraintData* pData; // 24
		CUtlVector<IIKJointConstraintData*, CUtlMemory<IIKJointConstraintData*, int> >& __for_range; // 41726
		iterator __for_begin; // 32938
		iterator __for_end; // 32938
	}
} /* size: 0 */

// <033454FE> ik/ikchainjointdata.cpp:31
// variables: 8
// function calls: 22
void CIKChainJointData_t::CIKChainJointData_t(const CIKChainJointData_t& kRhs)
{
	{
		IIKJointConstraintData* pData; // 35
		const CUtlVector<IIKJointConstraintData*, CUtlMemory<IIKJointConstraintData*, int> >& __for_range; // 48111
		const_iterator __for_begin; // 48121
		const_iterator __for_end; // 48131
	}
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 21
	IKBoneNameAndIndex_t::IKBoneNameAndIndex_t(
				const IKBoneNameAndIndex_t& kRhs);  // 32
	CUtlVectorBase<IIKJointConstraintData::ResetDbgInfo(); // 530
	CUtlMemory<IIKJointConstraintData::ValidateGrowSize(); // 475
	CUtlMemory<IIKJointConstraintData::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<IIKJointConstraintData::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<IIKJointConstraintData::CUtlVector(); // 33
	{
		IIKJointConstraintData* pData; // 35
		const CUtlVector<IIKJointConstraintData*, CUtlMemory<IIKJointConstraintData*, int> >& __for_range; // 48111
		const_iterator __for_begin; // 48121
		const_iterator __for_end; // 48131
		CUtlMemory<IIKJointConstraintData::Base(); // 113
		CUtlVectorBase<IIKJointConstraintData::Base(); // 103
		CUtlVectorBase<IIKJointConstraintData::begin(); // 35
		CUtlVectorBase<IIKJointConstraintData::Count(); // 105
		CUtlVectorBase<IIKJointConstraintData::end(); // 35
		CUtlMemory<IIKJointConstraintData::Base(); // 112
		CUtlVectorBase<IIKJointConstraintData::Base(); // 368
		CUtlVectorBase<IIKJointConstraintData::ResetDbgInfo(); // 824
		CUtlVectorBase<IIKJointConstraintData::GrowMemory(
				int num);  // 1249
		CUtlMemory<IIKJointConstraintData::operator[](
				int i);  // 602
		CUtlVectorBase<IIKJointConstraintData::Element(
			int i);  // 1252
		Construct<IIKJointConstraintData*, IIKJointConstraintData*>(IIKJointConstraintData** pMemory); // 1252
		CUtlMemory<IIKJointConstraintData::NumAllocated(); // 1247
		CUtlVectorBase<IIKJointConstraintData::AddToTail(
				IIKJointConstraintData *& src);  // 37
	}
} /* size: 0, inline expansions: 8 (0 bytes) */

// <033454AA> ik/ikchainjointdata.cpp:31
// variables: 4
void CIKChainJointData_t::CIKChainJointData_t(const CIKChainJointData_t& kRhs)
{
	{
		IIKJointConstraintData* pData; // 35
		const CUtlVector<IIKJointConstraintData*, CUtlMemory<IIKJointConstraintData*, int> >& __for_range; // 36433
		const_iterator __for_begin; // 32983
		const_iterator __for_end; // 32983
	}
} /* size: 0 */

// <03344FFE> ik/ikchainjointdata.cpp:41
// variables: 4
// function calls: 19
void CIKChainJointData_t::operator=(const CIKChainJointData_t& kRhs)
{
	{
		IIKJointConstraintData* pData; // 44
		const CUtlVector<IIKJointConstraintData*, CUtlMemory<IIKJointConstraintData*, int> >& __for_range; // 36433
		const_iterator __for_begin; // 32983
		const_iterator __for_end; // 32983
		CUtlMemory<IIKJointConstraintData::Base(); // 113
		CUtlVectorBase<IIKJointConstraintData::Base(); // 103
		CUtlVectorBase<IIKJointConstraintData::begin(); // 44
		CUtlVectorBase<IIKJointConstraintData::Count(); // 105
		CUtlVectorBase<IIKJointConstraintData::end(); // 44
		CUtlMemory<IIKJointConstraintData::Base(); // 112
		CUtlVectorBase<IIKJointConstraintData::Base(); // 368
		CUtlVectorBase<IIKJointConstraintData::ResetDbgInfo(); // 824
		CUtlVectorBase<IIKJointConstraintData::GrowMemory(
				int num);  // 1249
		CUtlMemory<IIKJointConstraintData::operator[](
				int i);  // 602
		CUtlVectorBase<IIKJointConstraintData::Element(
			int i);  // 1252
		Construct<IIKJointConstraintData*, IIKJointConstraintData*>(IIKJointConstraintData** pMemory); // 1252
		CUtlMemory<IIKJointConstraintData::NumAllocated(); // 1247
		CUtlVectorBase<IIKJointConstraintData::AddToTail(
				IIKJointConstraintData *& src);  // 46
	}
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 9
	IKBoneNameAndIndex_t::operator=(
			const IKBoneNameAndIndex_t  &);  // 43
} /* size: 0, inline expansions: 5 (0 bytes) */

// <03344E4A> ik/ikchainjointdata.cpp:51
// variables: 5
// function calls: 5
void CIKChainJointData_t::Initialize(const CModel* pModel)
{
	bool bSuccess; // 53
	{
		IIKJointConstraintData* pData; // 57
		CUtlVector<IIKJointConstraintData*, CUtlMemory<IIKJointConstraintData*, int> >& __for_range; // 41726
		iterator __for_begin; // 32938
		iterator __for_end; // 32938
		CUtlMemory<IIKJointConstraintData::Base(); // 112
		CUtlVectorBase<IIKJointConstraintData::Base(); // 102
		CUtlVectorBase<IIKJointConstraintData::begin(); // 57
		CUtlVectorBase<IIKJointConstraintData::Count(); // 104
		CUtlVectorBase<IIKJointConstraintData::end(); // 57
	}
} /* size: 84, variables: 1 */

// <03344CF0> ik/ikchainjointdata.cpp:65
// variables: 4
// function calls: 5
void CIKChainJointData_t::HasHingeAxis()
{
	{
		IIKJointConstraintData* pData; // 67
		const CUtlVector<IIKJointConstraintData*, CUtlMemory<IIKJointConstraintData*, int> >& __for_range; // 36433
		const_iterator __for_begin; // 32983
		const_iterator __for_end; // 32983
		CUtlMemory<IIKJointConstraintData::Base(); // 113
		CUtlVectorBase<IIKJointConstraintData::Base(); // 103
		CUtlVectorBase<IIKJointConstraintData::begin(); // 67
		CUtlVectorBase<IIKJointConstraintData::Count(); // 105
		CUtlVectorBase<IIKJointConstraintData::end(); // 67
	}
} /* size: 71 */

// <03344A85> ik/ikchainjointdata.cpp:78
// variables: 5
// function calls: 10
void CIKChainJointData_t::GetLocalSpaceHingeAxis()
{
	{
		IIKJointConstraintData* pData; // 80
		const CUtlVector<IIKJointConstraintData*, CUtlMemory<IIKJointConstraintData*, int> >& __for_range; // 36433
		const_iterator __for_begin; // 32983
		const_iterator __for_end; // 32983
		CUtlMemory<IIKJointConstraintData::Base(); // 113
		CUtlVectorBase<IIKJointConstraintData::Base(); // 103
		CUtlVectorBase<IIKJointConstraintData::begin(); // 80
		CUtlVectorBase<IIKJointConstraintData::Count(); // 105
		CUtlVectorBase<IIKJointConstraintData::end(); // 80
		IIKJointConstraintData::GetHingeAxis(); // 84
	}
	{
		fltx4 retVal; // 186
		_mm_set_ps(const float  __Z,
				const float  __Y,
				const float  __X,
				const float  __W);  // 187
	}
	Set4Floats<>(float p0,
			float p1,
			float p2,
			float p3);  // 146
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 88
} /* size: 175, inline expansions: 3 (67 bytes) */

