
//
// sequence_imp.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 184
//

// <00D2A54B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:25
// variable: 1
// function calls: 4
void CBindPoseSequence::GetBounds(Vector* pVecMins, Vector* pVecMaxs)
{
	const CModel* pModel; // 27
	CBindPoseSequence::GetModel(); // 27
	Vector::operator=(
			const Vector& vOther);  // 34
	Vector::operator=(
			const Vector& vOther);  // 35
	CBindPoseSequence::GetBounds(
			Vector* pVecMins,
			Vector* pVecMaxs);  // 25
} /* size: 151, variables: 1, inline expansions: 4 (126 bytes) */

// <00CA6135> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:25
// variable: 1
void CBindPoseSequence::GetBounds(Vector* pVecMins, Vector* pVecMaxs)
{
	const CModel* pModel; // 27
} /* size: 0, variables: 1 */

// <00CA5B81> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:44
// variables: 2
// function calls: 23
void CSeqResourceS1Sequence::CSeqResourceS1Sequence(const CAnimContainer* pAnimContainer, HSequence hSequence, int nGroup, int nIndex)
{
	{
		{
			const CSeqS1SeqDesc* pSeqDesc; // 51
			{
			}
		}
	}
	{
		{
			const CSeqS1SeqDesc* pSeqDesc; // 51
			CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
			CSequenceGroupResource::GetSequenceGroupResourceData(); // 106
			CSeqGroupInstance::GetSequenceGroupResourceData(); // 508
			CUtlMemory<CSeqS1SeqDesc, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CSeqS1SeqDesc, CUtlMemory<CSeqS1SeqDesc, int> >::operator[](
					int i);  // 509
			CSeqResourceS1Sequence::pMySeqDesc(); // 51
			{
			}
			CHelperSequence::InitializeSequenceKeyValues(
							const CSeqS1SeqDesc* pSeqDesc);  // 53
		}
		HSequence::HSequence(); // 45
		CUtlMemory<float, int>::ValidateGrowSize(); // 475
		CUtlMemory<float, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 45
		CUtlMemory<float, int>::ValidateGrowSize(); // 475
		CUtlMemory<float, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 45
		CUtlMemory<CSeqIKLock, int>::ValidateGrowSize(); // 475
		CUtlMemory<CSeqIKLock, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::CUtlVector(); // 45
	}
} /* size: 0 */

// <00CA5B07> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:44
// variables: 3
void CSeqResourceS1Sequence::CSeqResourceS1Sequence(const CAnimContainer* pAnimContainer, HSequence hSequence, int nGroup, int nIndex)
{
	const char   __FUNCTION__; // 22249
	{
		const CSeqS1SeqDesc* pSeqDesc; // 51
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 52
		}
	}
} /* size: 0, variables: 1 */

// <00CA28C3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:62
// variables: 40
// function calls: 195
void CSeqResourceS1Sequence::PostInit()
{
	AnimRefVector_t animList; // 64
	const CSeqMultiFetch* pFetch; // 79
	const char   __FUNCTION__; // 21871
	const KeyValues3* pSeqKeyValues; // 153
	{
		int nAnim; // 69
		const CAnimDesc* pAnimDesc; // 70
		{
			int i; // 74
			CUtlVectorBase<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::Count(); // 74
			CUtlMemory<CAnimAnimEvent, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::operator[](
					int i);  // 76
			CUtlMemory<AnimEvent_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::operator[](
					int i);  // 76
		}
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::operator[](
				int i);  // 69
		CUtlMemory<AnimInstanceMap_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::operator[](
				int i);  // 497
		CUtlMemory<const CAnimationGroupResource::operator[](
				int i);  // 595
		CUtlVectorBase<const CAnimationGroupResource::operator[](
				int i);  // 498
		CSmartPtr<CAnimationGroup, CRefCountAccessor>::operator->(); // 239
		CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
				int i);  // 239
		__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 472
		unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::get(); // 239
		CAnimationGroupResource::pLocalHAnim(
				int nLocalHAnim);  // 498
		CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 464
		{
		}
		CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 465
		CAnimationResource::GetData(); // 499
		CUtlMemory<CAnimDesc, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::operator[](
				int i);  // 499
		CAnimContainer::GetAnimdesc(
				int nAnimation);  // 70
		CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::Count(); // 72
	}
	{
		const CSeqGroupInstance* pGroup; // 82
		const CSequenceGroupData* pData; // 83
		{
			int i; // 88
			{
				HSequence hSeq; // 91
				{
					int index; // 95
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 102
					}
					CAnimContainer::GetModel(); // 252
					CSeqResourceS1Sequence::GetModel(); // 95
					CUtlMemory<CSeqPoseParamDesc, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CSeqPoseParamDesc, CUtlMemory<CSeqPoseParamDesc, int> >::operator[](
							int i);  // 95
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 393
					CSeqPoseParamDesc::GetName(); // 95
					CAnimContainer::GetModel(); // 252
					CSeqResourceS1Sequence::GetModel(); // 98
					CUtlMemory<float, int>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
							int i);  // 98
				}
				HSequence::operator==(
						const HSequence& other);  // 92
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 90
				CUtlMemory<short int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
						int i);  // 91
				CUtlMemory<HSequence, int>::operator[](
						int i);  // 595
				CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
						int i);  // 527
				CSeqResourceS1Sequence::hRelativeSeq(
						int nLocalReference);  // 91
			}
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 88
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 106
		}
		{
			int i; // 112
			{
				HSequence hSeq; // 115
				{
					int index; // 119
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 126
					}
					CAnimContainer::GetModel(); // 252
					CSeqResourceS1Sequence::GetModel(); // 119
					CUtlMemory<CSeqPoseParamDesc, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CSeqPoseParamDesc, CUtlMemory<CSeqPoseParamDesc, int> >::operator[](
							int i);  // 119
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 393
					CSeqPoseParamDesc::GetName(); // 119
					CAnimContainer::GetModel(); // 252
					CSeqResourceS1Sequence::GetModel(); // 122
					CUtlMemory<float, int>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
							int i);  // 122
				}
				HSequence::operator==(
						const HSequence& other);  // 116
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 114
				CUtlMemory<short int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
						int i);  // 115
				CUtlMemory<HSequence, int>::operator[](
						int i);  // 595
				CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
						int i);  // 527
				CSeqResourceS1Sequence::hRelativeSeq(
						int nLocalReference);  // 115
			}
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 112
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 130
		}
		CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
		CSequenceGroupResource::GetSequenceGroupResourceData(); // 106
		CSeqGroupInstance::GetSequenceGroupResourceData(); // 83
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 87
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 106
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 111
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 130
	}
	{
		int i; // 138
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 138
		CUtlMemory<float, int>::operator[](
				int i);  // 595
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 140
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 140
	}
	{
		int i; // 146
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 146
		CUtlMemory<float, int>::operator[](
				int i);  // 595
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 148
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 148
	}
	{
		const int  nLocalPose0; // 157
		const int  nLocalPose1; // 158
		{
			const KeyValues3* pKeyValues; // 167
			CKV3MemberName::CKV3MemberName<10>(
						const char& str);  // 167
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 101
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 96
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					KeyValues3* pDefaultValue);  // 101
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					const KeyValues3* pDefaultValue);  // 167
			CKV3MemberName::CKV3MemberName<10>(
						const char& str);  // 170
			{
				const uint32  m; // 46
				uint32 h; // 47
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<4>(
						const char& str);  // 171
		}
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 245
		KeyValues3::IsNull(); // 165
		{
			int i; // 675
			CAnimationBlendList::Count(); // 675
			CAnimationBlendList::FPS(
				int nIndex);  // 677
			CAnimationBlendList::flWeight(
				int nIndex);  // 677
		}
		CSeqResourceS1Sequence::FPS(
			const float* poseParameter);  // 665
		CSeqResourceS1Sequence::FPS(
			const float* poseParameter);  // 180
	}
	{
		const KeyValues3* pExtraSegFlagsKeyValues; // 189
		CKV3MemberName::CKV3MemberName<14>(
					const char& str);  // 189
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 101
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 101
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				const KeyValues3* pDefaultValue);  // 189
		CKV3MemberName::CKV3MemberName<14>(
					const char& str);  // 192
		CKV3MemberName::CKV3MemberName<35>(
					const char& str);  // 193
		CKV3MemberName::CKV3MemberName<22>(
					const char& str);  // 194
	}
	{
		const CSeqS1SeqDesc* pSeqDesc; // 210
		const int  nSrcIkLockCount; // 211
		{
			const CSeqIKLock& ikLock; // 217
			const CUtlVector<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >& __for_range; // 25294
			const_iterator __for_begin; // 21847
			const_iterator __for_end; // 21847
			{
				const int  nBone; // 219
				CSeqIKLock* pDstIkLock; // 223
				{
					const CIKChainDescription* pIkChain; // 229
					const CUtlLeanVector<CIKChainDescription*, short int>& __for_range; // 39692
					const_iterator __for_begin; // 37656
					const_iterator __for_end; // 37656
					CAnimContainer::GetModel(); // 252
					CSeqResourceS1Sequence::GetModel(); // 229
					CIKControlRigDescription_Base::GetChainVector(); // 229
					CUtlLeanVectorBase<CIKChainDescription::Base(); // 416
					CUtlLeanVectorImpl<CUtlLeanVectorBase<CIKChainDescription::begin(); // 229
					CUtlLeanVectorImpl<CUtlLeanVectorBase<CIKChainDescription::Count(); // 418
					CUtlLeanVectorImpl<CUtlLeanVectorBase<CIKChainDescription::end(); // 229
					CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 52
					CUtlMemory<CIKChainJointData_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
							int i);  // 52
					CIKChainData_t::GetEndEffectorJoint(); // 83
					CIKChainDescription::GetEndEffectorJoint(); // 231
					CIKChainJointData_t::GetBoneIndex(); // 231
					CIKChainDescription::DoBonesOrientAlongPositiveX(); // 233
				}
				CUtlMemory<int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 545
				CSeqResourceS1Sequence::iRelativeBone(
						int nLocalBone);  // 219
				CUtlMemory<CSeqIKLock, int>::NumAllocated(); // 1143
				CUtlMemory<CSeqIKLock, int>::Base(); // 112
				CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::Base(); // 368
				CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::ResetDbgInfo(); // 824
				CUtlMemory<CSeqIKLock, int>::IsGrowable(); // 823
				CUtlMemory<CSeqIKLock, int>::IsExternallyAllocated(); // 859
				CUtlMemory<CSeqIKLock, int>::IsExternallyAllocated(); // 861
				CUtlMemory<CSeqIKLock, int>::Grow(
					int num);  // 806
				CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::GrowMemory(
						int num);  // 1145
				CUtlMemory<CSeqIKLock, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::Element(
					int i);  // 1148
				CSeqIKLock::CSeqIKLock(); // 1479
				Construct<CSeqIKLock>(CSeqIKLock* pMemory); // 1148
				CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::AddToTail(); // 1156
				CUtlMemory<CSeqIKLock, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::Element(
					int i);  // 1156
				CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::AddToTailGetPtr(); // 223
				CAnimContainer::GetModel(); // 252
				CSeqResourceS1Sequence::GetModel(); // 227
			}
			CUtlMemory<CSeqIKLock, int>::Base(); // 113
			CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::Base(); // 103
			CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::begin(); // 217
			CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::Count(); // 105
			CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::end(); // 217
		}
		CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::Count(); // 211
		CUtlMemory<CSeqIKLock, int>::IsGrowable(); // 881
		CUtlMemory<CSeqIKLock, int>::IsExternallyAllocated(); // 888
		CUtlMemory<CSeqIKLock, int>::EnsureCapacity(
				int num);  // 1006
		CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::ResetDbgInfo(); // 1024
		CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::EnsureCapacity(
				int num);  // 215
	}
	CUtlMemory<int, int>::CUtlMemory(
			int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<int, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<int, int>::CUtlMemoryFixedGrowable_Base(
					int* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<16, int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<16, int>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<16, int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<int, 16, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<int, 16>::CUtlVectorFixedGrowable(
				int growSize);  // 64
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::Count(); // 67
	CSeqResourceS1Sequence::pLocalFetch(
			int index);  // 79
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 137
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 145
	CEmptySequence::GetSequenceKeyValues(); // 153
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 245
	KeyValues3::IsNull(); // 187
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<16, int, 4>::Base(); // 237
	CUtlMemory<int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<int, int>::ConvertToExternalMemory(
				int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<int, int>::Purge_FixedGrowable(
				int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<int, int>::Purge_FixedGrowable(
				int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<int, 16, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<int, 16, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<int, 16>::~CUtlVectorFixedGrowable(); // 241
} /* size: 0, variables: 4, inline expansions: 38 (1017 bytes) */

// <00D2BDC5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:245
// function calls: 4
void CSeqResourceS1Sequence::GetName()
{
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 203
	CSeqS1SeqDesc::GetName(); // 247
} /* size: 52, inline expansions: 4 (110 bytes) */

// <00CA28AA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:245
void CSeqResourceS1Sequence::GetName()
{
} /* size: 0 */

// <00D27205> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:250
// function call: 1
void CSeqResourceS1Sequence::GetModel()
{
	CAnimContainer::GetModel(); // 252
} /* size: 16, inline expansions: 1 (4 bytes) */

// <00CA2891> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:250
void CSeqResourceS1Sequence::GetModel()
{
} /* size: 0 */

// <00CA284B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:255
void CSeqResourceS1Sequence::IsLooping()
{
} /* size: 23 */

// <00CA2805> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:260
void CSeqResourceS1Sequence::IsMulti()
{
} /* size: 23 */

// <00CA27BF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:265
void CSeqResourceS1Sequence::IsDelta()
{
} /* size: 23 */

// <00CA2779> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:270
void CSeqResourceS1Sequence::IsHidden()
{
} /* size: 23 */

// <00CA2733> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:275
void CSeqResourceS1Sequence::IsAutoplay()
{
} /* size: 23 */

// <00CA26ED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:280
void CSeqResourceS1Sequence::IsSnapped()
{
} /* size: 23 */

// <00CA26BF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:285
void CSeqResourceS1Sequence::IsRealTime()
{
} /* size: 12 */

// <00CA25EA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:290
// variable: 1
// function calls: 2
void CSeqResourceS1Sequence::IsFrameCacheable()
{
	const CSeqMultiFetch* pFetch; // 292
	CSeqResourceS1Sequence::pLocalFetch(
			int index);  // 292
	CUtlVectorBase<CSeqAutoLayer, CUtlMemory<CSeqAutoLayer, int> >::Count(); // 293
} /* size: 85, variables: 1, inline expansions: 2 (9 bytes) */

// <00CA1935> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:300
// variables: 6
// function calls: 54
void CSeqResourceS1Sequence::GetAllAnimations(AnimRefVector_t& animRef)
{
	const CSeqMultiFetch* pFetch; // 302
	{
		int i; // 303
		{
			AnimRefVector_t localAnimRef; // 305
			HSequence hSeq; // 306
			{
				const ISequence* pSeq; // 309
				CAnimContainer::GetModel(); // 252
				CSeqResourceS1Sequence::GetModel(); // 309
				CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::Count(); // 1366
				CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::Count(); // 1369
				CUtlMemory<int, int>::NumAllocated(); // 782
				CUtlMemory<int, int>::Base(); // 112
				CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::Base(); // 368
				CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::GrowMemory(
						int num);  // 784
				CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::GrowVector(
						int num);  // 1373
				{
					int i; // 1376
					CUtlMemory<int, int>::operator[](
							int i);  // 595
					CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::operator[](
							int i);  // 1378
					CUtlMemory<int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::Element(
						int i);  // 1378
					CopyConstruct<int>(int* pMemory,
								const int& src);  // 1378
				}
				CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::AddVectorToTail<CUtlMemoryFixedGrowable<int, 16, int> >(
											const CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >& src);  // 314
			}
			HSequence::operator==(
					const HSequence& other);  // 307
			CUtlMemory<int, int>::CUtlMemory(
					int* pMemory,
					int numElements,
					bool bGrowable,
					uint32 nGrowable_GrowSize);  // 197
			CUtlMemory<int, int>::EnsureCapacity(
					int num);  // 199
			CUtlMemoryFixedGrowable_Base<int, int>::CUtlMemoryFixedGrowable_Base(
							int* pFixedMemory,
							int nFixedElements,
							int nGrowSize,
							int nInitAllocationCount);  // 228
			AlignedByteArrayExplicit_t<16, int, 4>::AlignedByteArrayExplicit_t(); // 1597
			AlignedByteArray_t<16, int>::AlignedByteArray_t(); // 228
			AlignedByteArrayExplicit_t<16, int, 4>::Base(); // 231
			CUtlMemoryFixedGrowable<int, 16, int>::CUtlMemoryFixedGrowable(
						int nGrowSize,
						int nInitSize);  // 527
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 484
			CUtlVectorFixedGrowable<int, 16>::CUtlVectorFixedGrowable(
						int growSize);  // 305
			CUtlMemory<HSequence, int>::operator[](
					int i);  // 595
			CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
					int i);  // 527
			CSeqResourceS1Sequence::hRelativeSeq(
					int nLocalReference);  // 306
			CUtlMemory<short int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 306
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::RemoveAll(); // 1798
			AlignedByteArrayExplicit_t<16, int, 4>::Base(); // 237
			CUtlMemory<int, int>::IsExternallyAllocated(); // 577
			CUtlMemory<int, int>::ConvertToExternalMemory(
						int* pMemory,
						int numElements,
						int nCopyElements,
						bool bSetGrowable,
						uint32 nGrowable_GrowSize);  // 207
			CUtlMemoryFixedGrowable_Base<int, int>::Purge_FixedGrowable(
						int* pFixedMemory,
						int nFixedElements,
						int nPurgeToCount);  // 203
			CUtlMemoryFixedGrowable_Base<int, int>::Purge_FixedGrowable(
						int* pFixedMemory,
						int nFixedElements,
						int nPurgeToCount);  // 237
			CUtlMemoryFixedGrowable<int, 16, int>::Purge(
				int numElements);  // 1799
			CUtlMemory<int, int>::Base(); // 112
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::Base(); // 368
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::ResetDbgInfo(); // 1800
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::Purge(); // 560
			ValidateAlignment<int>(void); // 508
			CUtlMemory<int, int>::Purge(); // 903
			CUtlMemory<int, int>::Purge(); // 510
			CUtlMemory<int, int>::~CUtlMemory(); // 191
			CUtlMemoryFixedGrowable_Base<int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
			CUtlMemoryFixedGrowable<int, 16, int>::~CUtlMemoryFixedGrowable(); // 562
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::~CUtlVectorBase(); // 478
			CUtlVectorFixedGrowable<int, 16>::~CUtlVectorFixedGrowable(); // 317
		}
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 303
	}
	CSeqResourceS1Sequence::pLocalFetch(
			int index);  // 302
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::Count(); // 319
} /* size: 601, variables: 1, inline expansions: 2 (12 bytes) */

// <00CA109A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:322
// variables: 7
// function calls: 33
void CSeqResourceS1Sequence::GetAllSequences(CUtlVector<HSequence, CUtlMemory<HSequence, int> >& seqRef)
{
	const CSeqMultiFetch* pFetch; // 324
	const CSeqS1SeqDesc* pDesc; // 334
	{
		int i; // 325
		{
			HSequence hSequence; // 327
			CUtlMemory<short int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 327
			CUtlMemory<HSequence, int>::operator[](
					int i);  // 595
			CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
					int i);  // 527
			CSeqResourceS1Sequence::hRelativeSeq(
					int nLocalReference);  // 327
			HSequence::operator==(
					const HSequence& other);  // 328
			CUtlMemory<HSequence, int>::NumAllocated(); // 1196
			CUtlMemory<HSequence, int>::operator[](
					int i);  // 602
			CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::Element(
				int i);  // 1201
			CopyConstruct<HSequence>(HSequence* pMemory,
						const HSequence& src);  // 1201
			CUtlMemory<HSequence, int>::Base(); // 112
			CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::Base(); // 368
			CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::AddToTail(
					const HSequence& src);  // 330
		}
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 325
	}
	{
		int i; // 336
		{
			const CSeqAutoLayer* pLayer; // 338
			HSequence hSequence; // 340
			CUtlMemory<CSeqAutoLayer, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CSeqAutoLayer, CUtlMemory<CSeqAutoLayer, int> >::operator[](
					int i);  // 338
			CUtlMemory<HSequence, int>::operator[](
					int i);  // 595
			CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
					int i);  // 527
			CSeqResourceS1Sequence::hRelativeSeq(
					int nLocalReference);  // 340
			HSequence::operator==(
					const HSequence& other);  // 341
			CUtlMemory<HSequence, int>::NumAllocated(); // 1196
			CUtlMemory<HSequence, int>::operator[](
					int i);  // 602
			CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::Element(
				int i);  // 1201
			CopyConstruct<HSequence>(HSequence* pMemory,
						const HSequence& src);  // 1201
			CUtlMemory<HSequence, int>::Base(); // 112
			CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::Base(); // 368
			CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::AddToTail(
					const HSequence& src);  // 343
		}
		CUtlVectorBase<CSeqAutoLayer, CUtlMemory<CSeqAutoLayer, int> >::Count(); // 336
	}
	CSeqResourceS1Sequence::pLocalFetch(
			int index);  // 324
} /* size: 368, variables: 2, inline expansions: 1 (9 bytes) */

// <00CA100A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:350
// variable: 1
// function call: 1
void CSeqResourceS1Sequence::NumActivities()
{
	const CSeqS1SeqDesc* pDesc; // 352
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::Count(); // 353
} /* size: 25, variables: 1, inline expansions: 1 (0 bytes) */

// <00D2E1AA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:356
// variable: 1
// function calls: 8
void CSeqResourceS1Sequence::GetActivityName(int index)
{
	const CSeqS1SeqDesc* pDesc; // 358
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::Count(); // 359
	CUtlMemory<CAnimActivity, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::operator[](
			int i);  // 360
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 408
	CAnimActivity::GetName(); // 360
	{
	}
	CSeqResourceS1Sequence::GetActivityName(
			int index);  // 356
} /* size: 0, variables: 1, inline expansions: 8 (174 bytes) */

// <00CA0FB3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:356
// variables: 3
void CSeqResourceS1Sequence::GetActivityName(int index)
{
	const CSeqS1SeqDesc* pDesc; // 358
	const char   __FUNCTION__; // 22060
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 363
	}
} /* size: 0, variables: 2 */

// <00D28182> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:367
// variable: 1
// function calls: 4
void CSeqResourceS1Sequence::GetActivityWeight(int index)
{
	const CSeqS1SeqDesc* pDesc; // 369
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::Count(); // 370
	CUtlMemory<CAnimActivity, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::operator[](
			int i);  // 371
	{
	}
	CSeqResourceS1Sequence::GetActivityWeight(
				int index);  // 367
} /* size: 0, variables: 1, inline expansions: 4 (34 bytes) */

// <00CA0F5C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:367
// variables: 3
void CSeqResourceS1Sequence::GetActivityWeight(int index)
{
	const CSeqS1SeqDesc* pDesc; // 369
	const char   __FUNCTION__; // 22114
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 374
	}
} /* size: 0, variables: 2 */

// <00D282F3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:378
// variable: 1
// function calls: 4
void CSeqResourceS1Sequence::GetActivityType(int index)
{
	const CSeqS1SeqDesc* pDesc; // 380
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::Count(); // 381
	CUtlMemory<CAnimActivity, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::operator[](
			int i);  // 382
	{
	}
	CSeqResourceS1Sequence::GetActivityType(
			int index);  // 378
} /* size: 0, variables: 1, inline expansions: 4 (34 bytes) */

// <00CA0F05> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:378
// variables: 3
void CSeqResourceS1Sequence::GetActivityType(int index)
{
	const CSeqS1SeqDesc* pDesc; // 380
	const char   __FUNCTION__; // 22060
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 385
	}
} /* size: 0, variables: 2 */

// <00CA0DC2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:389
// function calls: 3
void CSeqResourceS1Sequence::SetActivityType(Activity iActivity)
{
	CUtlMemory<CAnimActivity, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::operator[](
			int i);  // 397
	CSeqResourceS1Sequence::SetActivityType(
			int index,
			Activity iActivity);  // 391
} /* size: 70, inline expansions: 3 (30 bytes) */

// <00D2725F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:394
// variable: 1
// function calls: 2
void CSeqResourceS1Sequence::SetActivityType(int index, Activity iActivity)
{
	const CSeqS1SeqDesc* pDesc; // 396
	CUtlMemory<CAnimActivity, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::operator[](
			int i);  // 397
} /* size: 46, variables: 1, inline expansions: 2 (6 bytes) */

// <00CA0D82> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:394
// variable: 1
void CSeqResourceS1Sequence::SetActivityType(int index, Activity iActivity)
{
	const CSeqS1SeqDesc* pDesc; // 396
} /* size: 0, variables: 1 */

// <00CA0AE4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:402
// variables: 6
// function calls: 7
void CSeqResourceS1Sequence::NumPoseParameters()
{
	int nPoseParamCount; // 404
	const CSeqMultiFetch* pFetch; // 406
	const CSeqS1SeqDesc* pDesc; // 425
	{
		int i; // 426
		{
			const CSeqAutoLayer* pLayer; // 428
			{
				int iPose; // 431
				CUtlMemory<int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 533
				CSeqResourceS1Sequence::iRelativePose(
						int nLocalPose);  // 431
			}
			CUtlMemory<CSeqAutoLayer, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CSeqAutoLayer, CUtlMemory<CSeqAutoLayer, int> >::operator[](
					int i);  // 428
		}
		CUtlVectorBase<CSeqAutoLayer, CUtlMemory<CSeqAutoLayer, int> >::Count(); // 426
	}
	CSeqResourceS1Sequence::pLocalFetch(
			int index);  // 406
} /* size: 238, variables: 3, inline expansions: 1 (9 bytes) */

// <00CA0855> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:444
// variables: 6
// function calls: 7
void CSeqResourceS1Sequence::GetPoseParameter(int index)
{
	int nPoseParamIndex; // 446
	const CSeqMultiFetch* pFetch; // 448
	const CSeqS1SeqDesc* pDesc; // 479
	{
		int i; // 480
		{
			const CSeqAutoLayer* pLayer; // 482
			{
				int iPose; // 485
				CUtlMemory<int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 533
				CSeqResourceS1Sequence::iRelativePose(
						int nLocalPose);  // 485
			}
			CUtlMemory<CSeqAutoLayer, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CSeqAutoLayer, CUtlMemory<CSeqAutoLayer, int> >::operator[](
					int i);  // 482
		}
		CUtlVectorBase<CSeqAutoLayer, CUtlMemory<CSeqAutoLayer, int> >::Count(); // 480
	}
	CSeqResourceS1Sequence::pLocalFetch(
			int index);  // 448
} /* size: 305, variables: 3, inline expansions: 1 (12 bytes) */

// <00D323F6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:500
void CSeqResourceS1Sequence::pLocalFetch(int index)
{
} /* size: 0 */

// <00D27742> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:505
// variables: 2
// function calls: 5
void CSeqResourceS1Sequence::pMySeqDesc()
{
	const CSeqGroupInstance* pGroup; // 507
	const CSequenceGroupData* pData; // 508
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
	CSequenceGroupResource::GetSequenceGroupResourceData(); // 106
	CSeqGroupInstance::GetSequenceGroupResourceData(); // 508
	CUtlMemory<CSeqS1SeqDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSeqS1SeqDesc, CUtlMemory<CSeqS1SeqDesc, int> >::operator[](
			int i);  // 509
} /* size: 0, variables: 2, inline expansions: 5 (70 bytes) */

// <00CA07FC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:505
// variables: 2
void CSeqResourceS1Sequence::pMySeqDesc()
{
	const CSeqGroupInstance* pGroup; // 507
	const CSequenceGroupData* pData; // 508
} /* size: 0, variables: 2 */

// <00CA054F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:513
// variable: 1
// function calls: 11
void CSeqResourceS1Sequence::GetAssetInfo(CSequenceAssetInfo& info)
{
	CPathBufferString name; // 515
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 515
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 203
	CSeqS1SeqDesc::GetName(); // 247
	CSeqResourceS1Sequence::GetName(); // 519
	CUtlString::operator=(
			const char* src);  // 519
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 522
} /* size: 252, variables: 1, inline expansions: 11 (295 bytes) */

// <00D32445> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:524
// variable: 1
// function calls: 2
void CSeqResourceS1Sequence::hRelativeSeq(int nLocalReference)
{
	const CSeqGroupInstance* pGroup; // 526
	CUtlMemory<HSequence, int>::operator[](
			int i);  // 595
	CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
			int i);  // 527
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00CA051C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:524
// variable: 1
void CSeqResourceS1Sequence::hRelativeSeq(int nLocalReference)
{
	const CSeqGroupInstance* pGroup; // 526
} /* size: 0, variables: 1 */

// <00D324F5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:530
// variable: 1
// function calls: 2
void CSeqResourceS1Sequence::iRelativePose(int nLocalPose)
{
	const CSeqGroupInstance* pGroup; // 532
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 533
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00CA04E9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:530
// variable: 1
void CSeqResourceS1Sequence::iRelativePose(int nLocalPose)
{
	const CSeqGroupInstance* pGroup; // 532
} /* size: 0, variables: 1 */

// <00D325CD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:536
// variable: 1
// function calls: 2
void CSeqResourceS1Sequence::iRelativeWeightlist(int nLocalWeightlist)
{
	const CSeqGroupInstance* pGroup; // 538
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 539
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00CA04B6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:536
// variable: 1
void CSeqResourceS1Sequence::iRelativeWeightlist(int nLocalWeightlist)
{
	const CSeqGroupInstance* pGroup; // 538
} /* size: 0, variables: 1 */

// <00D3267D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:542
// variable: 1
// function calls: 2
void CSeqResourceS1Sequence::iRelativeBone(int nLocalBone)
{
	const CSeqGroupInstance* pGroup; // 544
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 545
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00CA0483> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:542
// variable: 1
void CSeqResourceS1Sequence::iRelativeBone(int nLocalBone)
{
	const CSeqGroupInstance* pGroup; // 544
} /* size: 0, variables: 1 */

// <00CA0440> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:548
void CSeqResourceS1Sequence::IsFlagSet(int nFlagMask)
{
} /* size: 11 */

// <00CA0402> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:553
void CSeqResourceS1Sequence::SetFlag(int nFlagMask)
{
} /* size: 8 */

// <00CA03BF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:558
void CSeqResourceS1Sequence::ClearFlag(int nFlagMask)
{
} /* size: 10 */

// <00CA0379> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:563
void CSeqResourceS1Sequence::GetFadeInTime()
{
} /* size: 27 */

// <00CA0333> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:568
void CSeqResourceS1Sequence::GetFadeOutTime()
{
} /* size: 27 */

// <00CA02E5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:573
void CSeqResourceS1Sequence::GetNextSequence(HSequence hDestinationSequence, int* pDir)
{
} /* size: 18 */

// <00CA02B7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:582
void CSeqResourceS1Sequence::GetNodeFlags()
{
} /* size: 7 */

// <00CA029F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:587
void CSeqResourceS1Sequence::EntryNode()
{
} /* size: 0 */

// <00CA0287> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:592
void CSeqResourceS1Sequence::ExitNode()
{
} /* size: 0 */

// <00C9F618> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:597
// variables: 5
// function calls: 48
void CSeqResourceS1Sequence::BuildBlendlist(CAnimationBlendList* pBlendList, const float* flPoseParameterArray)
{
	const CSeqMultiFetch* pFetch; // 599
	int i0; // 614
	int i1; // 614
	float s0; // 615
	float s1; // 615
	CSeqResourceS1Sequence::pLocalFetch(
			int index);  // 599
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 603
	CAnimationBlendList::GetCModel(); // 617
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 129
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 130
	CSeqMultiFetch::nElement(
		int index0,
		int index1);  // 135
	CUtlMemory<short int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
			int i);  // 135
	CSeqMultiFetch::nLocalReference(
			int index0,
			int index1);  // 627
	CUtlMemory<HSequence, int>::operator[](
			int i);  // 595
	CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
			int i);  // 527
	CSeqResourceS1Sequence::hRelativeSeq(
			int nLocalReference);  // 627
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 129
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 130
	CSeqMultiFetch::nElement(
		int index0,
		int index1);  // 135
	CUtlMemory<short int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
			int i);  // 135
	CSeqMultiFetch::nLocalReference(
			int index0,
			int index1);  // 628
	CUtlMemory<HSequence, int>::operator[](
			int i);  // 595
	CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
			int i);  // 527
	CSeqResourceS1Sequence::hRelativeSeq(
			int nLocalReference);  // 628
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 129
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 130
	CSeqMultiFetch::nElement(
		int index0,
		int index1);  // 135
	CUtlMemory<short int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
			int i);  // 135
	CSeqMultiFetch::nLocalReference(
			int index0,
			int index1);  // 631
	CUtlMemory<HSequence, int>::operator[](
			int i);  // 595
	CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
			int i);  // 527
	CSeqResourceS1Sequence::hRelativeSeq(
			int nLocalReference);  // 631
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 129
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 130
	CSeqMultiFetch::nElement(
		int index0,
		int index1);  // 135
	CUtlMemory<short int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
			int i);  // 135
	CSeqMultiFetch::nLocalReference(
			int index0,
			int index1);  // 632
	CUtlMemory<HSequence, int>::operator[](
			int i);  // 595
	CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
			int i);  // 527
	CSeqResourceS1Sequence::hRelativeSeq(
			int nLocalReference);  // 632
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 130
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 129
	CSeqMultiFetch::nElement(
		int index0,
		int index1);  // 135
	CUtlMemory<short int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
			int i);  // 135
	CSeqMultiFetch::nLocalReference(
			int index0,
			int index1);  // 610
	CUtlMemory<HSequence, int>::operator[](
			int i);  // 595
	CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
			int i);  // 527
	CSeqResourceS1Sequence::hRelativeSeq(
			int nLocalReference);  // 610
} /* size: 924, variables: 5, inline expansions: 48 (890 bytes) */

// <00D27C9C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:642
// variables: 3
// function calls: 4
void CSeqResourceS1Sequence::MaxFrame(const float* poseParameter)
{
	float maxFrame; // 649
	CAnimationBlendList blendList; // 650
	{
		int i; // 652
		CAnimationBlendList::Count(); // 652
		CAnimationBlendList::NumFrames(
				int nIndex);  // 654
		CAnimationBlendList::flWeight(
			int nIndex);  // 654
	}
	CSeqResourceS1Sequence::MaxFrame(
		const float* poseParameter);  // 642
} /* size: 301, variables: 2, inline expansions: 1 (224 bytes) */

// <00C9F5CB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:642
// variables: 3
void CSeqResourceS1Sequence::MaxFrame(const float* poseParameter)
{
	float maxFrame; // 649
	CAnimationBlendList blendList; // 650
	{
		int i; // 652
	}
} /* size: 0, variables: 2 */

// <00D27B1F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:665
// variables: 3
// function calls: 4
void CSeqResourceS1Sequence::FPS(const float* poseParameter)
{
	CAnimationBlendList blendList; // 672
	float t; // 674
	{
		int i; // 675
		CAnimationBlendList::Count(); // 675
		CAnimationBlendList::FPS(
			int nIndex);  // 677
		CAnimationBlendList::flWeight(
			int nIndex);  // 677
	}
	CSeqResourceS1Sequence::FPS(
		const float* poseParameter);  // 665
} /* size: 269, variables: 2, inline expansions: 1 (192 bytes) */

// <00C9F580> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:665
// variables: 3
void CSeqResourceS1Sequence::FPS(const float* poseParameter)
{
	CAnimationBlendList blendList; // 672
	float t; // 674
	{
		int i; // 675
	}
} /* size: 0, variables: 2 */

// <00C9F04F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:689
// variables: 11
// function calls: 13
void CSeqResourceS1Sequence::CPS(const float* poseParameter)
{
	float t; // 691
	{
		CAnimationBlendList blendList; // 698
		{
			int i; // 700
			CAnimationBlendList::Count(); // 700
			CAnimationBlendList::NumFrames(
					int nIndex);  // 702
			CAnimationBlendList::FPS(
				int nIndex);  // 704
			CAnimationBlendList::flWeight(
				int nIndex);  // 704
		}
	}
	{
		const CSeqS1SeqDesc* pDesc; // 711
		{
			int i; // 712
			{
				const CSeqAutoLayer* pLayer; // 714
				{
					float flLayerWeight; // 718
					float flDummyLayerCycle; // 719
					const CModel* pModel; // 720
					{
						HSequence hLayerSequence; // 725
						float flLocalT; // 726
						CUtlMemory<HSequence, int>::operator[](
								int i);  // 595
						CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
								int i);  // 527
						CSeqResourceS1Sequence::hRelativeSeq(
								int nLocalReference);  // 725
						Lerp<float>(float flPercent,
								const float& A,
								const float& B);  // 728
					}
					CAnimContainer::GetModel(); // 252
					CSeqResourceS1Sequence::GetModel(); // 720
				}
				CUtlMemory<CSeqAutoLayer, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CSeqAutoLayer, CUtlMemory<CSeqAutoLayer, int> >::operator[](
						int i);  // 714
			}
			CUtlVectorBase<CSeqAutoLayer, CUtlMemory<CSeqAutoLayer, int> >::Count(); // 712
		}
	}
} /* size: 662, variables: 1 */

// <00C9E968> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:744
// variables: 10
// function calls: 21
void CSeqResourceS1Sequence::MovementAndDuration(float flCycleFrom, float flCycleTo, const float* poseParameter, Vector& deltaPos)
{
	float flDuration; // 746
	{
		const CSeqS1SeqDesc* pDesc; // 750
		{
			int i; // 751
			{
				const CSeqAutoLayer* pLayer; // 753
				{
					float flLayerWeight; // 757
					float flDummyLayerCycle; // 758
					const CModel* pModel; // 759
					{
						Vector layerDeltaPos; // 764
						float flLayerDuration; // 765
						HSequence hLayerSequence; // 767
						Vector::Vector(); // 764
						CUtlMemory<HSequence, int>::operator[](
								int i);  // 595
						CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
								int i);  // 527
						CSeqResourceS1Sequence::hRelativeSeq(
								int nLocalReference);  // 767
						VectorSubtract(const Vector& a,
								const Vector& b,
								Vector& c);  // 1444
						Vector::Vector(); // 1443
						Vector::operator-(
								const Vector& v);  // 262
						VectorMultiply(const Vector& a,
								vec_t b,
								Vector& c);  // 1451
						Vector::Vector(); // 1450
						Vector::operator*(
								float fl);  // 262
						Vector::Vector(); // 1436
						VectorAdd(const Vector& a,
								const Vector& b,
								Vector& c);  // 1437
						Vector::operator+(
								const Vector& v);  // 262
						Lerp<Vector>(float flPercent,
								const Vector& A,
								const Vector& B);  // 770
						Lerp<float>(float flPercent,
								const float& A,
								const float& B);  // 771
						Vector::operator=(
								const Vector& vOther);  // 770
					}
					CAnimContainer::GetModel(); // 252
					CSeqResourceS1Sequence::GetModel(); // 759
				}
				CUtlMemory<CSeqAutoLayer, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CSeqAutoLayer, CUtlMemory<CSeqAutoLayer, int> >::operator[](
						int i);  // 753
			}
			CUtlVectorBase<CSeqAutoLayer, CUtlMemory<CSeqAutoLayer, int> >::Count(); // 751
		}
	}
} /* size: 579, variables: 1 */

// <00C9E8D0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:787
void CSeqResourceS1Sequence::TotalMovementAndDuration(const float* poseParameter, Vector& deltaPos)
{
} /* size: 50 */

// <00C9E1DC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:798
// variables: 10
// function calls: 21
void CSeqResourceS1Sequence::Movement(float flCycleFrom, float flCycleTo, const float* poseParameter, Vector& deltaMovement, QAngle& deltaAngle)
{
	bool bMovSeq; // 800
	{
		const CSeqS1SeqDesc* pDesc; // 804
		{
			int i; // 805
			{
				const CSeqAutoLayer* pLayer; // 807
				{
					float flLayerWeight; // 811
					float flDummyLayerCycle; // 812
					const CModel* pModel; // 813
					{
						Vector layerDeltaPos; // 818
						QAngle layerDeltaAngle; // 819
						HSequence hLayerSequence; // 821
						Vector::Vector(); // 818
						QAngle::QAngle(); // 819
						CUtlMemory<HSequence, int>::operator[](
								int i);  // 595
						CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
								int i);  // 527
						CSeqResourceS1Sequence::hRelativeSeq(
								int nLocalReference);  // 821
						VectorSubtract(const Vector& a,
								const Vector& b,
								Vector& c);  // 1444
						Vector::Vector(); // 1443
						Vector::operator-(
								const Vector& v);  // 262
						VectorMultiply(const Vector& a,
								vec_t b,
								Vector& c);  // 1451
						Vector::Vector(); // 1450
						Vector::operator*(
								float fl);  // 262
						Vector::Vector(); // 1436
						VectorAdd(const Vector& a,
								const Vector& b,
								Vector& c);  // 1437
						Vector::operator+(
								const Vector& v);  // 262
						Lerp<Vector>(float flPercent,
								const Vector& A,
								const Vector& B);  // 824
						Vector::operator=(
								const Vector& vOther);  // 824
					}
					CAnimContainer::GetModel(); // 252
					CSeqResourceS1Sequence::GetModel(); // 813
				}
				CUtlMemory<CSeqAutoLayer, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CSeqAutoLayer, CUtlMemory<CSeqAutoLayer, int> >::operator[](
						int i);  // 807
			}
			CUtlVectorBase<CSeqAutoLayer, CUtlMemory<CSeqAutoLayer, int> >::Count(); // 805
		}
	}
} /* size: 554, variables: 1 */

// <00C9D9D5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:838
// variables: 10
// function calls: 28
void CSeqResourceS1Sequence::Calc3WayBlendIndices(CAnimationBlendList* pBlendList, int i0, int i1, float s0, float s1)
{
	bool bEven; // 841
	float weight; // 843
	int x1; // 844
	int y1; // 844
	int x2; // 845
	int y2; // 845
	int x3; // 846
	int y3; // 846
	const CSeqMultiFetch* pFetch; // 902
	{
		float flTotal; // 874
	}
	CSeqResourceS1Sequence::pLocalFetch(
			int index);  // 902
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 129
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 130
	CSeqMultiFetch::nElement(
		int index0,
		int index1);  // 135
	CUtlMemory<short int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
			int i);  // 135
	CSeqMultiFetch::nLocalReference(
			int index0,
			int index1);  // 903
	CUtlMemory<HSequence, int>::operator[](
			int i);  // 595
	CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
			int i);  // 527
	CSeqResourceS1Sequence::hRelativeSeq(
			int nLocalReference);  // 903
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 129
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 130
	CSeqMultiFetch::nElement(
		int index0,
		int index1);  // 135
	CUtlMemory<short int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
			int i);  // 135
	CSeqMultiFetch::nLocalReference(
			int index0,
			int index1);  // 904
	CUtlMemory<HSequence, int>::operator[](
			int i);  // 595
	CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
			int i);  // 527
	CSeqResourceS1Sequence::hRelativeSeq(
			int nLocalReference);  // 904
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 129
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 130
	CSeqMultiFetch::nElement(
		int index0,
		int index1);  // 135
	CUtlMemory<short int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
			int i);  // 135
	CSeqMultiFetch::nLocalReference(
			int index0,
			int index1);  // 905
	CUtlMemory<HSequence, int>::operator[](
			int i);  // 595
	CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
			int i);  // 527
	CSeqResourceS1Sequence::hRelativeSeq(
			int nLocalReference);  // 905
} /* size: 615, variables: 9, inline expansions: 28 (496 bytes) */

// <00C9CAB3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:918
// variables: 28
// function calls: 34
void CSeqResourceS1Sequence::DoAnimation(CAnimationBucket& baseResult, float flCycle, float flWeight)
{
	const char   __FUNCTION__; // 21952
	const CSeqS1SeqDesc* pDesc; // 939
	{
		const float  flRealtime; // 924
		const float  flRealCycle; // 925
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 922
		}
	}
	{
		const float  flPoseToCycle; // 933
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 934
		}
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 935
	}
	{
		const CSeqIKLock& ikLock; // 942
		const CUtlVector<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >& __for_range; // 25294
		const_iterator __for_begin; // 21847
		const_iterator __for_end; // 21847
		CUtlMemory<CSeqIKLock, int>::Base(); // 113
		CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::Base(); // 103
		CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::begin(); // 942
		CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::Count(); // 105
		CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::end(); // 942
	}
	{
		int nWeightlist; // 950
		CAnimationBlendList blendList; // 953
		CAnimationBucket blendedResult; // 957
		{
			float flAccumulated; // 962
			{
				int i; // 963
				{
					CAnimationBucket tmpResult; // 965
					float s; // 966
					CAnimationBlendList::flWeight(
						int nIndex);  // 966
					CAnimationBlendList::hSequence(
							int nIndex);  // 968
					CAnimationBlendList::flWeight(
						int nIndex);  // 972
				}
				CAnimationBlendList::Count(); // 963
			}
			CAnimationBlendList::hSequence(
					int nIndex);  // 960
			CAnimationBlendList::flWeight(
				int nIndex);  // 962
		}
		{
			int i; // 978
			{
				const CSeqAutoLayer* pLayer; // 980
				{
					HSequence hLayerSequence; // 984
					float flLayerWeight; // 985
					float flLayerCycle; // 986
					CUtlMemory<HSequence, int>::operator[](
							int i);  // 595
					CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
							int i);  // 527
					CSeqResourceS1Sequence::hRelativeSeq(
							int nLocalReference);  // 984
					CSeqResourceS1Sequence::GetLayerWeight(
							EBoneSetup* pBoneSetup,
							const CSeqAutoLayer* pLayer,
							float& flWeight,
							float& flCycle);  // 987
				}
				CUtlMemory<CSeqAutoLayer, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CSeqAutoLayer, CUtlMemory<CSeqAutoLayer, int> >::operator[](
						int i);  // 980
			}
			CUtlVectorBase<CSeqAutoLayer, CUtlMemory<CSeqAutoLayer, int> >::Count(); // 978
		}
		CUtlMemory<int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 539
		CSeqResourceS1Sequence::iRelativeWeightlist(
					int nLocalWeightlist);  // 950
		CAnimationBlendList::CAnimationBlendList(
					const CModel* pModel);  // 953
		CAnimationBlendList::Count(); // 958
	}
	{
		int i; // 1018
		{
			const CSeqAutoLayer* pLayer; // 1020
			{
				HSequence hLayerSequence; // 1024
				{
					float flLayerWeight; // 1028
					float flLayerCycle; // 1029
					CSeqResourceS1Sequence::GetLayerWeight(
							EBoneSetup* pBoneSetup,
							const CSeqAutoLayer* pLayer,
							float& flWeight,
							float& flCycle);  // 1030
				}
				HSequence::operator==(
						const HSequence& other);  // 1026
				CUtlMemory<HSequence, int>::operator[](
						int i);  // 595
				CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
						int i);  // 527
				CSeqResourceS1Sequence::hRelativeSeq(
						int nLocalReference);  // 1024
			}
			CUtlMemory<CSeqAutoLayer, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CSeqAutoLayer, CUtlMemory<CSeqAutoLayer, int> >::operator[](
					int i);  // 1020
		}
		CUtlVectorBase<CSeqAutoLayer, CUtlMemory<CSeqAutoLayer, int> >::Count(); // 1018
	}
	CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::Count(); // 135
	CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::IsEmpty(); // 1042
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <00D3272D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1053
void CSeqResourceS1Sequence::GetLayerWeight(EBoneSetup* pBoneSetup, const CSeqAutoLayer* pLayer, float& flWeight, float& flCycle)
{
} /* size: 0 */

// <00C9C87F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1058
// variables: 3
// function calls: 4
void CSeqResourceS1Sequence::GetLayerWeight(const CModel* pModel, const float* flPoseParameterArray, const CSeqAutoLayer* pLayer, float& flWeight, float& flCycle)
{
	{
		float s; // 1062
		float index; // 1063
		{
			int iPose; // 1071
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 533
			CSeqResourceS1Sequence::iRelativePose(
					int nLocalPose);  // 1071
		}
		SimpleSpline(float value); // 1098
	}
} /* size: 564 */

// <00C9BF3E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1127
// variables: 15
// function calls: 32
void CSeqResourceS1Sequence::LocalPoseParameter(const CModel* pModel, const CSeqMultiFetch* pFetch, const float* flPoseParameterArray, int& index0, float& flSetting0, int& index1, float& flSetting1)
{
	int iPose0; // 1129
	int iPose1; // 1130
	float flValue0; // 1132
	float flValue1; // 1144
	float flClosestMatch; // 1151
	float flClosestSetting0; // 1152
	float flClosestSetting1; // 1153
	int nClosestIndex0; // 1154
	int nClosestIndex1; // 1155
	const char   __FUNCTION__; // 22141
	{
		float d0; // 1163
		float flTestedRange; // 1190
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1164
		}
		{
			float d1; // 1171
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1172
			}
			clamp<int, int>(const int& val,
					const int& minVal,
					const int& maxVal);  // 129
			clamp<int, int>(const int& val,
					const int& minVal,
					const int& maxVal);  // 130
			CSeqMultiFetch::nElement(
				int index0,
				int index1);  // 1171
			CUtlMemory<float, int>::operator[](
					int i);  // 595
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 1171
			clamp<int, int>(const int& val,
					const int& minVal,
					const int& maxVal);  // 130
			CSeqMultiFetch::nElement(
				int index0,
				int index1);  // 1171
			CUtlMemory<float, int>::operator[](
					int i);  // 595
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 1171
			CUtlMemory<float, int>::operator[](
					int i);  // 595
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 1175
		}
		clamp<int, int>(const int& val,
				const int& minVal,
				const int& maxVal);  // 129
		clamp<int, int>(const int& val,
				const int& minVal,
				const int& maxVal);  // 130
		CSeqMultiFetch::nElement(
			int index0,
			int index1);  // 1163
		CUtlMemory<float, int>::operator[](
				int i);  // 595
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 1163
		clamp<int, int>(const int& val,
				const int& minVal,
				const int& maxVal);  // 129
		CSeqMultiFetch::nElement(
			int index0,
			int index1);  // 1163
		CUtlMemory<float, int>::operator[](
				int i);  // 595
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 1163
		clamp<int, int>(const int& val,
				const int& minVal,
				const int& maxVal);  // 130
		CSeqMultiFetch::nElement(
			int index0,
			int index1);  // 1167
		CUtlMemory<float, int>::operator[](
				int i);  // 595
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 1167
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 1193
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 1194
	}
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 533
	CSeqResourceS1Sequence::iRelativePose(
			int nLocalPose);  // 1129
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 533
	CSeqResourceS1Sequence::iRelativePose(
			int nLocalPose);  // 1130
} /* size: 0, variables: 10, inline expansions: 6 (136 bytes) */

// <00C9BDE0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1215
// variables: 2
// function calls: 5
void CSeqResourceMultiSequence::pMySeqDesc()
{
	const CSeqGroupInstance* pGroup; // 1217
	const CSequenceGroupData* pData; // 1218
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
	CSequenceGroupResource::GetSequenceGroupResourceData(); // 106
	CSeqGroupInstance::GetSequenceGroupResourceData(); // 1218
	CUtlMemory<CSeqS1SeqDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSeqS1SeqDesc, CUtlMemory<CSeqS1SeqDesc, int> >::operator[](
			int i);  // 1219
} /* size: 0, variables: 2, inline expansions: 5 (70 bytes) */

// <00C9BBA5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1228
// function calls: 8
void CSeqResourceCmdSequence::CSeqResourceCmdSequence(const CAnimContainer* pAnimContainer, HSequence hSequence, int nGroup, int nIndex)
{
	HSequence::HSequence(); // 1229
	HSequence::HSequence(); // 1229
	HSequence::HSequence(); // 1229
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 1229
} /* size: 0, inline expansions: 8 (0 bytes) */

// <00C9BB58> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1228
void CSeqResourceCmdSequence::CSeqResourceCmdSequence(const CAnimContainer* pAnimContainer, HSequence hSequence, int nGroup, int nIndex)
{
} /* size: 0 */

// <00C991DE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1240
// variables: 45
// function calls: 154
void CSeqResourceCmdSequence::PostInit()
{
	const CSeqCmdSeqDesc* pDesc; // 1242
	const char   __FUNCTION__; // 21871
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1247
	}
	{
		int i; // 1252
		{
			const CSeqCmdLayer* pCmdLayer; // 1254
			{
				HSequence hSeq; // 1264
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1265
				}
				{
					AnimRefVector_t animRef; // 1269
					CUtlMemory<int, int>::CUtlMemory(
							int* pMemory,
							int numElements,
							bool bGrowable,
							uint32 nGrowable_GrowSize);  // 197
					CUtlMemory<int, int>::EnsureCapacity(
							int num);  // 199
					CUtlMemoryFixedGrowable_Base<int, int>::CUtlMemoryFixedGrowable_Base(
									int* pFixedMemory,
									int nFixedElements,
									int nGrowSize,
									int nInitAllocationCount);  // 228
					AlignedByteArrayExplicit_t<16, int, 4>::AlignedByteArrayExplicit_t(); // 1597
					AlignedByteArray_t<16, int>::AlignedByteArray_t(); // 228
					AlignedByteArrayExplicit_t<16, int, 4>::Base(); // 231
					CUtlMemoryFixedGrowable<int, 16, int>::CUtlMemoryFixedGrowable(
								int nGrowSize,
								int nInitSize);  // 527
					CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::ResetDbgInfo(); // 530
					CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 484
					CUtlVectorFixedGrowable<int, 16>::CUtlVectorFixedGrowable(
								int growSize);  // 1269
					CAnimContainer::GetModel(); // 1435
					CSeqResourceCmdSequence::GetModel(); // 1270
					CUtlMemory<int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::operator[](
							int i);  // 1272
					CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::RemoveAll(); // 1798
					AlignedByteArrayExplicit_t<16, int, 4>::Base(); // 237
					CUtlMemory<int, int>::IsExternallyAllocated(); // 577
					CUtlMemory<int, int>::ConvertToExternalMemory(
								int* pMemory,
								int numElements,
								int nCopyElements,
								bool bSetGrowable,
								uint32 nGrowable_GrowSize);  // 207
					CUtlMemoryFixedGrowable_Base<int, int>::Purge_FixedGrowable(
								int* pFixedMemory,
								int nFixedElements,
								int nPurgeToCount);  // 203
					CUtlMemoryFixedGrowable_Base<int, int>::Purge_FixedGrowable(
								int* pFixedMemory,
								int nFixedElements,
								int nPurgeToCount);  // 237
					CUtlMemoryFixedGrowable<int, 16, int>::Purge(
						int numElements);  // 1799
					CUtlMemory<int, int>::Base(); // 112
					CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::Base(); // 368
					CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::ResetDbgInfo(); // 1800
					CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::Purge(); // 560
					ValidateAlignment<int>(void); // 508
					CUtlMemory<int, int>::Purge(); // 903
					CUtlMemory<int, int>::Purge(); // 510
					CUtlMemory<int, int>::~CUtlMemory(); // 191
					CUtlMemoryFixedGrowable_Base<int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
					CUtlMemoryFixedGrowable<int, 16, int>::~CUtlMemoryFixedGrowable(); // 562
					CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::~CUtlVectorBase(); // 478
					CUtlVectorFixedGrowable<int, 16>::~CUtlVectorFixedGrowable(); // 1274
				}
				{
					const CSeqGroupInstance* pGroup; // 1589
					CUtlMemory<HSequence, int>::operator[](
							int i);  // 595
					CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
							int i);  // 1590
				}
				CSeqResourceCmdSequence::hRelativeSeq(
						int nLocalReference);  // 1585
				CSeqResourceCmdSequence::hRelativeSeq(
						int nLocalReference);  // 1264
				HSequence::operator==(
						const HSequence& other);  // 1265
			}
			CUtlMemory<CSeqCmdLayer, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CSeqCmdLayer, CUtlMemory<CSeqCmdLayer, int> >::operator[](
					int i);  // 1254
		}
		CUtlVectorBase<CSeqCmdLayer, CUtlMemory<CSeqCmdLayer, int> >::Count(); // 1252
	}
	{
		int i; // 1283
		CUtlVectorBase<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::Count(); // 1283
		CUtlMemory<CAnimAnimEvent, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::operator[](
				int i);  // 1285
		CUtlMemory<AnimEvent_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::operator[](
				int i);  // 1285
	}
	{
		bool bNeedsAttachment; // 1295
		{
			int i; // 1296
			{
				const CSeqPoseSetting* pPose; // 1298
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 1304
				CUtlMemory<CSeqPoseSetting, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CSeqPoseSetting, CUtlMemory<CSeqPoseSetting, int> >::operator[](
						int i);  // 1298
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 1307
			}
			CUtlVectorBase<CSeqPoseSetting, CUtlMemory<CSeqPoseSetting, int> >::Count(); // 1296
		}
		{
			HSequence hBefore; // 1315
			float flBefore; // 1316
			HSequence hAfter; // 1317
			float flAfter; // 1318
			const CModel* pModel; // 1320
			{
				int i; // 1322
				{
					const CSeqCmdLayer* pCmdLayer; // 1324
					{
						const CSeqGroupInstance* pGroup; // 1589
						CUtlMemory<HSequence, int>::operator[](
								int i);  // 595
						CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
								int i);  // 1590
					}
					CSeqResourceCmdSequence::hRelativeSeq(
							int nLocalReference);  // 1585
					CSeqResourceCmdSequence::hRelativeSeq(
							int nLocalReference);  // 1336
					IBaseSequence::CalculateCycleForFrame(
								float flFrame,
								const float* poseParameters);  // 1337
					CUtlMemory<CSeqCmdLayer, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CSeqCmdLayer, CUtlMemory<CSeqCmdLayer, int> >::operator[](
							int i);  // 1324
					{
						const CSeqGroupInstance* pGroup; // 1589
						CUtlMemory<HSequence, int>::operator[](
								int i);  // 595
						CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
								int i);  // 1590
					}
					CSeqResourceCmdSequence::hRelativeSeq(
							int nLocalReference);  // 1585
					CSeqResourceCmdSequence::hRelativeSeq(
							int nLocalReference);  // 1331
					IBaseSequence::CalculateCycleForFrame(
								float flFrame,
								const float* poseParameters);  // 1332
				}
				CUtlVectorBase<CSeqCmdLayer, CUtlMemory<CSeqCmdLayer, int> >::Count(); // 1322
			}
			{
				IBoneSetup setup; // 1343
				int nAnimStateCount; // 1345
				CTransform* pBeforeWorldTransform; // 1348
				CTransform* pAfterWorldTransform; // 1355
				{
					int i; // 1361
					{
						const CSeqPoseSetting* pPose; // 1363
						float flValue; // 1365
						CUtlStringToken nAttachment; // 1367
						AttachmentHandle_t hAttachment; // 1369
						int nPose; // 1403
						{
							CTransform beforeAttachment; // 1372
							CTransform afterAttachment; // 1375
							{
								CTransform invBeforeTransform; // 1382
								CTransform localTransform; // 1383
								DegreeEuler ang; // 1384
								QuaternionAligned::operator fltx4(); // 258
								VectorAligned::operator fltx4(); // 258
								ConcatTransforms(const CTransform  in1,
										const CTransform  in2);  // 1383
								QAngle::QAngle(); // 355
								QuaternionAligned::w(); // 41
								Quaternion::Quaternion(
										vec_t ix,
										vec_t iy,
										vec_t iz,
										vec_t iw);  // 41
								QuaternionAligned::operator Quaternion(); // 356
								CTransform::ToQAngle(); // 1384
								DegreeEuler::Init(
									vec_t ix,
									vec_t iy,
									vec_t iz);  // 2540
								DegreeEuler::DegreeEuler(
										const QAngle& angles);  // 1384
							}
							{
								Vector pos; // 1393
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
								CTransform::GetOrigin(); // 1393
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
								CTransform::GetOrigin(); // 1393
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
										const VectorAligned& v);  // 1393
								_mm_cvtss_f32(__m128 __A); // 1534
								GetZSIMD<>(fltx4 a); // 76
								VectorAligned::z(); // 40
								_mm_cvtss_f32(__m128 __A); // 1515
								GetYSIMD<>(fltx4 a); // 75
								VectorAligned::y(); // 40
								_mm_cvtss_f32(__m128 __A); // 1496
								GetXSIMD<>(fltx4 a); // 74
								VectorAligned::x(); // 40
								Vector::Vector(
									vec_t X,
									vec_t Y,
									vec_t Z);  // 40
								VectorAligned::operator Vector(); // 1393
							}
							VectorAligned::VectorAligned(); // 31
							QuaternionAligned::QuaternionAligned(); // 31
							CTransform::CTransform(); // 1372
							VectorAligned::VectorAligned(); // 31
							QuaternionAligned::QuaternionAligned(); // 31
							CTransform::CTransform(); // 1375
						}
						{
							PoseParamDesc_t* pDstPose; // 1406
						}
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 771
						CBufferString::Get(); // 1367
						CUtlStringToken::CUtlStringToken(); // 121
						{
						}
						MakeStringToken(const char* pString,
								bool bWriteToDatabase);  // 119
						MakeStringToken(const char* pString,
								bool bWriteToDatabase);  // 1367
						AttachmentHandle_t::operator==(
								const AttachmentHandle_t& other);  // 1370
						CUtlMemory<float, int>::operator[](
								int i);  // 588
						CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
								int i);  // 1401
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 781
						CBufferString::operator char const*(); // 1403
						CUtlMemory<CSeqPoseSetting, int>::operator[](
								int i);  // 595
						CUtlVectorBase<CSeqPoseSetting, CUtlMemory<CSeqPoseSetting, int> >::operator[](
								int i);  // 1363
					}
					CUtlVectorBase<CSeqPoseSetting, CUtlMemory<CSeqPoseSetting, int> >::Count(); // 1361
				}
			}
			CAnimContainer::GetModel(); // 1435
			CSeqResourceCmdSequence::GetModel(); // 1320
		}
		{
			int i; // 1413
			{
				const CSeqPoseSetting* pPose; // 1415
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 358
				CSeqCmdSeqDesc::GetName(); // 1416
				CUtlMemory<CSeqPoseSetting, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CSeqPoseSetting, CUtlMemory<CSeqPoseSetting, int> >::operator[](
						int i);  // 1415
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 1416
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 1416
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 1416
			}
			CUtlVectorBase<CSeqPoseSetting, CUtlMemory<CSeqPoseSetting, int> >::Count(); // 1413
		}
	}
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
	CSequenceGroupResource::GetSequenceGroupResourceData(); // 106
	CSeqGroupInstance::GetSequenceGroupResourceData(); // 1580
	CUtlMemory<CSeqCmdSeqDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >::operator[](
			int i);  // 1581
	CSeqResourceCmdSequence::pMySeqDesc(); // 1242
	{
		const CSeqGroupInstance* pGroup; // 1589
		CUtlMemory<HSequence, int>::operator[](
				int i);  // 595
		CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
				int i);  // 1590
	}
	CSeqResourceCmdSequence::hRelativeSeq(
			int nLocalReference);  // 1585
	CSeqResourceCmdSequence::hRelativeSeq(
			int nLocalReference);  // 1246
	HSequence::operator==(
			const HSequence& other);  // 1247
	CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::Count(); // 1280
	CUtlVectorBase<CSeqPoseSetting, CUtlMemory<CSeqPoseSetting, int> >::Count(); // 1290
} /* size: 0, variables: 2, inline expansions: 11 (190 bytes) */

// <00C98D76> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1423
// variable: 1
// function calls: 23
void CSeqResourceCmdSequence::~CSeqResourceCmdSequence()
{
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 1426
	{
		int i; // 1721
		CUtlMemory<AnimEvent_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 56
		AnimEvent_t::~AnimEvent_t(); // 1526
		Destruct<AnimEvent_t>(AnimEvent_t* pMemory); // 1723
	}
	CUtlVectorBase<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::RemoveAll(); // 1798
	CUtlMemory<AnimEvent_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<AnimEvent_t, int>::Purge(); // 903
	CUtlMemory<AnimEvent_t, int>::Purge(); // 1799
	CUtlVectorBase<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::Purge(); // 560
	CUtlVectorBase<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::~CUtlVector(); // 18
	CHelperSequence::~CHelperSequence(); // 1426
} /* size: 209, inline expansions: 18 (781 bytes) */

// <00C98796> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1423
// variable: 1
// function calls: 30
void CSeqResourceCmdSequence::~CSeqResourceCmdSequence()
{
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 1426
	{
		int i; // 1721
		CUtlMemory<AnimEvent_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 56
		AnimEvent_t::~AnimEvent_t(); // 1526
		Destruct<AnimEvent_t>(AnimEvent_t* pMemory); // 1723
	}
	CUtlVectorBase<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::RemoveAll(); // 1798
	CUtlMemory<AnimEvent_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<AnimEvent_t, int>::Purge(); // 903
	CUtlMemory<AnimEvent_t, int>::Purge(); // 1799
	CUtlVectorBase<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::Purge(); // 560
	ValidateAlignment<AnimEvent_t>(void); // 508
	CUtlMemory<AnimEvent_t, int>::Purge(); // 510
	CUtlMemory<AnimEvent_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::~CUtlVector(); // 18
	IBaseSequence::~IBaseSequence(); // 128
	ISequence::~ISequence(); // 18
	CEmptySequence::~CEmptySequence(); // 18
	CHelperSequence::~CHelperSequence(); // 1426
	CSeqResourceCmdSequence::~CSeqResourceCmdSequence(); // 1426
} /* size: 206, inline expansions: 25 (906 bytes) */

// <00C9877D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1423
void CSeqResourceCmdSequence::~CSeqResourceCmdSequence()
{
} /* size: 0 */

// <00D2FEED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1428
// function calls: 10
void CSeqResourceCmdSequence::GetName()
{
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
	CSequenceGroupResource::GetSequenceGroupResourceData(); // 106
	CSeqGroupInstance::GetSequenceGroupResourceData(); // 1580
	CUtlMemory<CSeqCmdSeqDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >::operator[](
			int i);  // 1581
	CSeqResourceCmdSequence::pMySeqDesc(); // 1430
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 358
	CSeqCmdSeqDesc::GetName(); // 1430
} /* size: 0, inline expansions: 10 (242 bytes) */

// <00C98764> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1428
void CSeqResourceCmdSequence::GetName()
{
} /* size: 0 */

// <00D27320> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1433
// function call: 1
void CSeqResourceCmdSequence::GetModel()
{
	CAnimContainer::GetModel(); // 1435
} /* size: 16, inline expansions: 1 (4 bytes) */

// <00C9874B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1433
void CSeqResourceCmdSequence::GetModel()
{
} /* size: 0 */

// <00C985D8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1438
// function calls: 6
void CSeqResourceCmdSequence::IsLooping()
{
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
	CSequenceGroupResource::GetSequenceGroupResourceData(); // 106
	CSeqGroupInstance::GetSequenceGroupResourceData(); // 1580
	CUtlMemory<CSeqCmdSeqDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >::operator[](
			int i);  // 1581
	CSeqResourceCmdSequence::pMySeqDesc(); // 1440
} /* size: 0, inline expansions: 6 (90 bytes) */

// <00C98465> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1443
// function calls: 6
void CSeqResourceCmdSequence::IsSnapped()
{
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
	CSequenceGroupResource::GetSequenceGroupResourceData(); // 106
	CSeqGroupInstance::GetSequenceGroupResourceData(); // 1580
	CUtlMemory<CSeqCmdSeqDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >::operator[](
			int i);  // 1581
	CSeqResourceCmdSequence::pMySeqDesc(); // 1445
} /* size: 0, inline expansions: 6 (90 bytes) */

// <00C982F2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1448
// function calls: 6
void CSeqResourceCmdSequence::IsMulti()
{
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
	CSequenceGroupResource::GetSequenceGroupResourceData(); // 106
	CSeqGroupInstance::GetSequenceGroupResourceData(); // 1580
	CUtlMemory<CSeqCmdSeqDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >::operator[](
			int i);  // 1581
	CSeqResourceCmdSequence::pMySeqDesc(); // 1450
} /* size: 0, inline expansions: 6 (90 bytes) */

// <00C9817F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1453
// function calls: 6
void CSeqResourceCmdSequence::IsDelta()
{
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
	CSequenceGroupResource::GetSequenceGroupResourceData(); // 106
	CSeqGroupInstance::GetSequenceGroupResourceData(); // 1580
	CUtlMemory<CSeqCmdSeqDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >::operator[](
			int i);  // 1581
	CSeqResourceCmdSequence::pMySeqDesc(); // 1455
} /* size: 0, inline expansions: 6 (90 bytes) */

// <00C9800C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1458
// function calls: 6
void CSeqResourceCmdSequence::IsHidden()
{
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
	CSequenceGroupResource::GetSequenceGroupResourceData(); // 106
	CSeqGroupInstance::GetSequenceGroupResourceData(); // 1580
	CUtlMemory<CSeqCmdSeqDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >::operator[](
			int i);  // 1581
	CSeqResourceCmdSequence::pMySeqDesc(); // 1460
} /* size: 0, inline expansions: 6 (90 bytes) */

// <00C97E99> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1463
// function calls: 6
void CSeqResourceCmdSequence::IsAutoplay()
{
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
	CSequenceGroupResource::GetSequenceGroupResourceData(); // 106
	CSeqGroupInstance::GetSequenceGroupResourceData(); // 1580
	CUtlMemory<CSeqCmdSeqDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >::operator[](
			int i);  // 1581
	CSeqResourceCmdSequence::pMySeqDesc(); // 1466
} /* size: 0, inline expansions: 6 (90 bytes) */

// <00C97C80> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1469
// function calls: 9
void CSeqResourceCmdSequence::GetAllAnimations(AnimRefVector_t& animRef)
{
	CUtlMemory<int, int>::NumAllocated(); // 1196
	CUtlMemory<int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::Element(
		int i);  // 1201
	CopyConstruct<int>(int* pMemory,
				const int& src);  // 1201
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::AddToTail(
			const int& src);  // 1478
} /* size: 161, inline expansions: 9 (159 bytes) */

// <00C9765B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1498
// variables: 7
// function calls: 23
void CSeqResourceCmdSequence::GetAllSequences(CUtlVector<HSequence, CUtlMemory<HSequence, int> >& seqRef)
{
	const CSeqCmdSeqDesc* pDesc; // 1500
	const char   __FUNCTION__; // 22060
	{
		int i; // 1502
		{
			const CSeqCmdLayer* pCmdLayer; // 1504
			{
				HSequence hSeq; // 1514
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1517
				}
				{
					const CSeqGroupInstance* pGroup; // 1589
					CUtlMemory<HSequence, int>::operator[](
							int i);  // 595
					CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
							int i);  // 1590
				}
				CSeqResourceCmdSequence::hRelativeSeq(
						int nLocalReference);  // 1585
				CSeqResourceCmdSequence::hRelativeSeq(
						int nLocalReference);  // 1514
				HSequence::operator==(
						const HSequence& other);  // 1517
				CUtlMemory<HSequence, int>::NumAllocated(); // 1196
				CUtlMemory<HSequence, int>::operator[](
						int i);  // 602
				CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::Element(
					int i);  // 1201
				CopyConstruct<HSequence>(HSequence* pMemory,
							const HSequence& src);  // 1201
				CUtlMemory<HSequence, int>::Base(); // 112
				CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::Base(); // 368
				CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::AddToTail(
						const HSequence& src);  // 1518
			}
			CUtlMemory<CSeqCmdLayer, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CSeqCmdLayer, CUtlMemory<CSeqCmdLayer, int> >::operator[](
					int i);  // 1504
		}
		CUtlVectorBase<CSeqCmdLayer, CUtlMemory<CSeqCmdLayer, int> >::Count(); // 1502
	}
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
	CSequenceGroupResource::GetSequenceGroupResourceData(); // 106
	CSeqGroupInstance::GetSequenceGroupResourceData(); // 1580
	CUtlMemory<CSeqCmdSeqDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >::operator[](
			int i);  // 1581
	CSeqResourceCmdSequence::pMySeqDesc(); // 1500
} /* size: 0, variables: 2, inline expansions: 6 (132 bytes) */

// <00C974AA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1527
// variable: 1
// function calls: 7
void CSeqResourceCmdSequence::NumActivities()
{
	const CSeqCmdSeqDesc* pDesc; // 1529
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
	CSequenceGroupResource::GetSequenceGroupResourceData(); // 106
	CSeqGroupInstance::GetSequenceGroupResourceData(); // 1580
	CUtlMemory<CSeqCmdSeqDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >::operator[](
			int i);  // 1581
	CSeqResourceCmdSequence::pMySeqDesc(); // 1529
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::Count(); // 1530
} /* size: 0, variables: 1, inline expansions: 7 (104 bytes) */

// <00D308BB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1533
// variable: 1
// function calls: 14
void CSeqResourceCmdSequence::GetActivityName(int index)
{
	const CSeqCmdSeqDesc* pDesc; // 1535
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
	CSequenceGroupResource::GetSequenceGroupResourceData(); // 106
	CSeqGroupInstance::GetSequenceGroupResourceData(); // 1580
	CUtlMemory<CSeqCmdSeqDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >::operator[](
			int i);  // 1581
	CSeqResourceCmdSequence::pMySeqDesc(); // 1535
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::Count(); // 1536
	{
	}
	CSeqResourceCmdSequence::GetActivityName(
			int index);  // 1533
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 408
	CAnimActivity::GetName(); // 1537
	CUtlMemory<CAnimActivity, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::operator[](
			int i);  // 1537
} /* size: 0, variables: 1, inline expansions: 14 (301 bytes) */

// <00C97453> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1533
// variables: 3
void CSeqResourceCmdSequence::GetActivityName(int index)
{
	const CSeqCmdSeqDesc* pDesc; // 1535
	const char   __FUNCTION__; // 22060
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1540
	}
} /* size: 0, variables: 2 */

// <00D303CC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1544
// variable: 1
// function calls: 10
void CSeqResourceCmdSequence::GetActivityWeight(int index)
{
	const CSeqCmdSeqDesc* pDesc; // 1546
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
	CSequenceGroupResource::GetSequenceGroupResourceData(); // 106
	CSeqGroupInstance::GetSequenceGroupResourceData(); // 1580
	CUtlMemory<CSeqCmdSeqDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >::operator[](
			int i);  // 1581
	CSeqResourceCmdSequence::pMySeqDesc(); // 1546
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::Count(); // 1547
	{
	}
	CSeqResourceCmdSequence::GetActivityWeight(
				int index);  // 1544
	CUtlMemory<CAnimActivity, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::operator[](
			int i);  // 1548
} /* size: 0, variables: 1, inline expansions: 10 (169 bytes) */

// <00C973FC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1544
// variables: 3
void CSeqResourceCmdSequence::GetActivityWeight(int index)
{
	const CSeqCmdSeqDesc* pDesc; // 1546
	const char   __FUNCTION__; // 22114
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1551
	}
} /* size: 0, variables: 2 */

// <00D30123> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1555
// variable: 1
// function calls: 10
void CSeqResourceCmdSequence::GetActivityType(int index)
{
	const CSeqCmdSeqDesc* pDesc; // 1557
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
	CSequenceGroupResource::GetSequenceGroupResourceData(); // 106
	CSeqGroupInstance::GetSequenceGroupResourceData(); // 1580
	CUtlMemory<CSeqCmdSeqDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >::operator[](
			int i);  // 1581
	CSeqResourceCmdSequence::pMySeqDesc(); // 1557
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::Count(); // 1558
	CUtlMemory<CAnimActivity, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::operator[](
			int i);  // 1559
	{
	}
	CSeqResourceCmdSequence::GetActivityType(
			int index);  // 1555
} /* size: 0, variables: 1, inline expansions: 10 (169 bytes) */

// <00C973A5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1555
// variables: 3
void CSeqResourceCmdSequence::GetActivityType(int index)
{
	const CSeqCmdSeqDesc* pDesc; // 1557
	const char   __FUNCTION__; // 22060
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1562
	}
} /* size: 0, variables: 2 */

// <00C9714D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1566
// function calls: 9
void CSeqResourceCmdSequence::SetActivityType(Activity iActivity)
{
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
	CSequenceGroupResource::GetSequenceGroupResourceData(); // 106
	CSeqGroupInstance::GetSequenceGroupResourceData(); // 1580
	CUtlMemory<CSeqCmdSeqDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >::operator[](
			int i);  // 1581
	CSeqResourceCmdSequence::pMySeqDesc(); // 1573
	CUtlMemory<CAnimActivity, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::operator[](
			int i);  // 1574
	CSeqResourceCmdSequence::SetActivityType(
			int index,
			Activity iActivity);  // 1568
} /* size: 0, inline expansions: 9 (199 bytes) */

// <00D2FCF0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1571
// variable: 1
// function calls: 8
void CSeqResourceCmdSequence::SetActivityType(int index, Activity iActivity)
{
	const CSeqCmdSeqDesc* pDesc; // 1573
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
	CSequenceGroupResource::GetSequenceGroupResourceData(); // 106
	CSeqGroupInstance::GetSequenceGroupResourceData(); // 1580
	CUtlMemory<CSeqCmdSeqDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >::operator[](
			int i);  // 1581
	CSeqResourceCmdSequence::pMySeqDesc(); // 1573
	CUtlMemory<CAnimActivity, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::operator[](
			int i);  // 1574
} /* size: 0, variables: 1, inline expansions: 8 (118 bytes) */

// <00C9710D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1571
// variable: 1
void CSeqResourceCmdSequence::SetActivityType(int index, Activity iActivity)
{
	const CSeqCmdSeqDesc* pDesc; // 1573
} /* size: 0, variables: 1 */

// <00D327E6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1577
// variables: 2
// function calls: 5
void CSeqResourceCmdSequence::pMySeqDesc()
{
	const CSeqGroupInstance* pGroup; // 1579
	const CSequenceGroupData* pData; // 1580
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
	CSequenceGroupResource::GetSequenceGroupResourceData(); // 106
	CSeqGroupInstance::GetSequenceGroupResourceData(); // 1580
	CUtlMemory<CSeqCmdSeqDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >::operator[](
			int i);  // 1581
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

// <00C970DA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1577
// variables: 2
void CSeqResourceCmdSequence::pMySeqDesc()
{
	const CSeqGroupInstance* pGroup; // 1579
	const CSequenceGroupData* pData; // 1580
} /* size: 0, variables: 2 */

// <00D3292F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1585
// variable: 1
// function calls: 3
void CSeqResourceCmdSequence::hRelativeSeq(int nLocalReference)
{
	{
		const CSeqGroupInstance* pGroup; // 1589
		CUtlMemory<HSequence, int>::operator[](
				int i);  // 595
		CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
				int i);  // 1590
	}
	CSeqResourceCmdSequence::hRelativeSeq(
			int nLocalReference);  // 1585
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00C970A5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1585
// variable: 1
void CSeqResourceCmdSequence::hRelativeSeq(int nLocalReference)
{
	{
		const CSeqGroupInstance* pGroup; // 1589
	}
} /* size: 0 */

// <00D32A3B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1595
// variable: 1
// function calls: 2
void CSeqResourceCmdSequence::iRelativeWeightlist(int nLocalWeightlist)
{
	const CSeqGroupInstance* pGroup; // 1597
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 1598
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00C97072> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1595
// variable: 1
void CSeqResourceCmdSequence::iRelativeWeightlist(int nLocalWeightlist)
{
	const CSeqGroupInstance* pGroup; // 1597
} /* size: 0, variables: 1 */

// <00D32AEB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1601
// variable: 1
// function calls: 2
void CSeqResourceCmdSequence::iRelativeBone(int nLocalBone)
{
	const CSeqGroupInstance* pGroup; // 1603
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 1604
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00C9703F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1601
// variable: 1
void CSeqResourceCmdSequence::iRelativeBone(int nLocalBone)
{
	const CSeqGroupInstance* pGroup; // 1603
} /* size: 0, variables: 1 */

// <00C96FFC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1607
void CSeqResourceCmdSequence::IsFlagSet(int nFlagMask)
{
} /* size: 11 */

// <00C96FBE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1612
void CSeqResourceCmdSequence::SetFlag(int nFlagMask)
{
} /* size: 8 */

// <00C96F7B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1617
void CSeqResourceCmdSequence::ClearFlag(int nFlagMask)
{
} /* size: 10 */

// <00C96E08> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1622
// function calls: 6
void CSeqResourceCmdSequence::GetFadeInTime()
{
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
	CSequenceGroupResource::GetSequenceGroupResourceData(); // 106
	CSeqGroupInstance::GetSequenceGroupResourceData(); // 1580
	CUtlMemory<CSeqCmdSeqDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >::operator[](
			int i);  // 1581
	CSeqResourceCmdSequence::pMySeqDesc(); // 1624
} /* size: 0, inline expansions: 6 (90 bytes) */

// <00C96C95> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1627
// function calls: 6
void CSeqResourceCmdSequence::GetFadeOutTime()
{
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
	CSequenceGroupResource::GetSequenceGroupResourceData(); // 106
	CSeqGroupInstance::GetSequenceGroupResourceData(); // 1580
	CUtlMemory<CSeqCmdSeqDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >::operator[](
			int i);  // 1581
	CSeqResourceCmdSequence::pMySeqDesc(); // 1629
} /* size: 0, inline expansions: 6 (90 bytes) */

// <00C96C63> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1632
void CSeqResourceCmdSequence::GetNextSequence(HSequence hDestinationSequence, int* pDir)
{
} /* size: 0 */

// <00C95283> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1641
// variables: 30
// function calls: 81
void CSeqResourceCmdSequence::DoAnimation(CAnimationBucket& baseResult, float flCycle, float flWeight)
{
	const CSeqCmdSeqDesc* pDesc; // 1643
	CUtlVector<CAnimationBucket, CUtlMemory<CAnimationBucket, int> > localResultArray; // 1657
	{
		CAnimationBucket tmpResult0; // 1648
	}
	{
		int i; // 1659
		CUtlMemory<CAnimationBucket, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimationBucket, CUtlMemory<CAnimationBucket, int> >::operator[](
				int i);  // 1661
	}
	{
		int i; // 1665
		{
			const CSeqCmdLayer* pCmdLayer; // 1667
			CAnimationBucket* pSrcResult; // 1669
			CAnimationBucket* pDstResult; // 1670
			int nBoneMask; // 1682
			{
				CAnimationBucket tmpResult0; // 1688
				CAnimationBucket tmpResult1; // 1689
				SimpleSpline(float value); // 1694
			}
			{
				HSequence hLayerSequence; // 1706
				float flFrame; // 1707
				float flMaxFrame; // 1708
				{
					const CSeqGroupInstance* pGroup; // 1589
					CUtlMemory<HSequence, int>::operator[](
							int i);  // 595
					CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
							int i);  // 1590
				}
				CSeqResourceCmdSequence::hRelativeSeq(
						int nLocalReference);  // 1585
				CSeqResourceCmdSequence::hRelativeSeq(
						int nLocalReference);  // 1706
				CAnimContainer::GetModel(); // 1708
			}
			{
				int nBone; // 1721
				bool bBonesOrientedAlongPositiveX; // 1722
				{
					const CIKChainDescription* pIkChain; // 1727
					const CUtlLeanVector<CIKChainDescription*, short int>& __for_range; // 39692
					const_iterator __for_begin; // 37656
					const_iterator __for_end; // 37656
					CUtlLeanVectorBase<CIKChainDescription::Base(); // 416
					CUtlLeanVectorImpl<CUtlLeanVectorBase<CIKChainDescription::begin(); // 1727
					CAnimContainer::GetModel(); // 1435
					CSeqResourceCmdSequence::GetModel(); // 1727
					CIKControlRigDescription_Base::GetChainVector(); // 1727
					CUtlLeanVectorImpl<CUtlLeanVectorBase<CIKChainDescription::Count(); // 418
					CUtlLeanVectorImpl<CUtlLeanVectorBase<CIKChainDescription::end(); // 1727
					CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 52
					CUtlMemory<CIKChainJointData_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
							int i);  // 52
					CIKChainData_t::GetEndEffectorJoint(); // 83
					CIKChainDescription::GetEndEffectorJoint(); // 1729
					CIKChainJointData_t::GetBoneIndex(); // 1729
					CIKChainDescription::DoBonesOrientAlongPositiveX(); // 1731
				}
				CUtlMemory<int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 1604
				CSeqResourceCmdSequence::iRelativeBone(
						int nLocalBone);  // 1721
				CAnimContainer::GetModel(); // 1435
				CSeqResourceCmdSequence::GetModel(); // 1725
			}
			{
				HSequence hLayerSequence; // 1747
				{
					const CSeqGroupInstance* pGroup; // 1589
					CUtlMemory<HSequence, int>::operator[](
							int i);  // 595
					CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
							int i);  // 1590
				}
				CSeqResourceCmdSequence::hRelativeSeq(
						int nLocalReference);  // 1585
				CSeqResourceCmdSequence::hRelativeSeq(
						int nLocalReference);  // 1747
			}
			{
				HSequence hLayerSequence; // 1753
				float flMaxFrame; // 1754
				{
					const CSeqGroupInstance* pGroup; // 1589
					CUtlMemory<HSequence, int>::operator[](
							int i);  // 595
					CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
							int i);  // 1590
				}
				CSeqResourceCmdSequence::hRelativeSeq(
						int nLocalReference);  // 1585
				CSeqResourceCmdSequence::hRelativeSeq(
						int nLocalReference);  // 1753
				CAnimContainer::GetModel(); // 1754
			}
			{
				HSequence hLayerSequence; // 1767
				{
					const CSeqGroupInstance* pGroup; // 1589
					CUtlMemory<HSequence, int>::operator[](
							int i);  // 595
					CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
							int i);  // 1590
				}
				CSeqResourceCmdSequence::hRelativeSeq(
						int nLocalReference);  // 1585
				CSeqResourceCmdSequence::hRelativeSeq(
						int nLocalReference);  // 1767
			}
			CUtlMemory<CSeqCmdLayer, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CSeqCmdLayer, CUtlMemory<CSeqCmdLayer, int> >::operator[](
					int i);  // 1667
			CUtlMemory<CAnimationBucket, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimationBucket, CUtlMemory<CAnimationBucket, int> >::operator[](
					int i);  // 1675
			CUtlMemory<CAnimationBucket, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimationBucket, CUtlMemory<CAnimationBucket, int> >::operator[](
					int i);  // 1679
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1598
			CSeqResourceCmdSequence::iRelativeWeightlist(
						int nLocalWeightlist);  // 1682
		}
		CUtlVectorBase<CSeqCmdLayer, CUtlMemory<CSeqCmdLayer, int> >::Count(); // 1665
	}
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
	CSequenceGroupResource::GetSequenceGroupResourceData(); // 106
	CSeqGroupInstance::GetSequenceGroupResourceData(); // 1580
	CUtlMemory<CSeqCmdSeqDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >::operator[](
			int i);  // 1581
	CSeqResourceCmdSequence::pMySeqDesc(); // 1643
	CUtlVectorBase<CSeqCmdLayer, CUtlMemory<CSeqCmdLayer, int> >::Count(); // 1646
	CUtlMemory<CAnimationBucket, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAnimationBucket, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAnimationBucket, CUtlMemory<CAnimationBucket, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAnimationBucket, CUtlMemory<CAnimationBucket, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimationBucket, CUtlMemory<CAnimationBucket, int> >::CUtlVector(); // 1657
	CUtlMemory<CAnimationBucket, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CAnimationBucket, CUtlMemory<CAnimationBucket, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CAnimationBucket, CUtlMemory<CAnimationBucket, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<CAnimationBucket, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimationBucket, CUtlMemory<CAnimationBucket, int> >::Element(
			int i);  // 1453
		Construct<CAnimationBucket>(CAnimationBucket* pMemory); // 1453
	}
	CUtlVectorBase<CAnimationBucket, CUtlMemory<CAnimationBucket, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CAnimationBucket, CUtlMemory<CAnimationBucket, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CAnimationBucket, CUtlMemory<CAnimationBucket, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CAnimationBucket, CUtlMemory<CAnimationBucket, int> >::SetCount(
		int count);  // 1658
	{
		int i; // 1721
		CUtlMemory<CAnimationBucket, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimationBucket, CUtlMemory<CAnimationBucket, int> >::Element(
			int i);  // 1723
		Destruct<CAnimationBucket>(CAnimationBucket* pMemory); // 1723
	}
	CUtlVectorBase<CAnimationBucket, CUtlMemory<CAnimationBucket, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimationBucket, int>::Purge(); // 903
	CUtlMemory<CAnimationBucket, int>::Purge(); // 1799
	CUtlVectorBase<CAnimationBucket, CUtlMemory<CAnimationBucket, int> >::Purge(); // 560
	CUtlVectorBase<CAnimationBucket, CUtlMemory<CAnimationBucket, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimationBucket, CUtlMemory<CAnimationBucket, int> >::~CUtlVector(); // 1798
} /* size: 0, variables: 2, inline expansions: 25 (1256 bytes) */

// <00D279B3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1800
// function call: 1
void CSeqResourceCmdSequence::BuildBlendlist(CAnimationBlendList* pBlendList, const float* flPoseParameterArray)
{
	CSeqResourceCmdSequence::BuildBlendlist(
			CAnimationBlendList* pBlendList,
			const float* flPoseParameterArray);  // 1800
} /* size: 35, inline expansions: 1 (19 bytes) */

// <00C95250> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1800
void CSeqResourceCmdSequence::BuildBlendlist(CAnimationBlendList* pBlendList, const float* flPoseParameterArray)
{
} /* size: 0 */

// <00C94E58> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1809
// variable: 1
// function calls: 17
void CSeqResourceCmdSequence::GetAssetInfo(CSequenceAssetInfo& info)
{
	CPathBufferString name; // 1811
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 1811
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
	CSequenceGroupResource::GetSequenceGroupResourceData(); // 106
	CSeqGroupInstance::GetSequenceGroupResourceData(); // 1580
	CUtlMemory<CSeqCmdSeqDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >::operator[](
			int i);  // 1581
	CSeqResourceCmdSequence::pMySeqDesc(); // 1430
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 358
	CSeqCmdSeqDesc::GetName(); // 1430
	CSeqResourceCmdSequence::GetName(); // 1815
	CUtlString::operator=(
			const char* src);  // 1815
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1818
} /* size: 0, variables: 1, inline expansions: 17 (427 bytes) */

// <00D30BFC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1821
// variable: 1
// function calls: 10
void CSeqResourceCmdSequence::MaxFrame(const float* poseParameter)
{
	const CSeqCmdSeqDesc* pDesc; // 1823
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
	CSequenceGroupResource::GetSequenceGroupResourceData(); // 106
	CSeqGroupInstance::GetSequenceGroupResourceData(); // 1580
	CUtlMemory<CSeqCmdSeqDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >::operator[](
			int i);  // 1581
	CSeqResourceCmdSequence::pMySeqDesc(); // 1823
	HSequence::operator==(
			const HSequence& other);  // 1824
	CAnimContainer::GetModel(); // 1435
	CSeqResourceCmdSequence::GetModel(); // 1826
	CSeqResourceCmdSequence::MaxFrame(
		const float* poseParameter);  // 1821
} /* size: 0, variables: 1, inline expansions: 10 (183 bytes) */

// <00C94E25> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1821
// variable: 1
void CSeqResourceCmdSequence::MaxFrame(const float* poseParameter)
{
	const CSeqCmdSeqDesc* pDesc; // 1823
} /* size: 0, variables: 1 */

// <00D30675> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1832
// variable: 1
// function calls: 9
void CSeqResourceCmdSequence::FPS(const float* poseParameter)
{
	const CSeqCmdSeqDesc* pDesc; // 1834
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
	CSequenceGroupResource::GetSequenceGroupResourceData(); // 106
	CSeqGroupInstance::GetSequenceGroupResourceData(); // 1580
	CUtlMemory<CSeqCmdSeqDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >::operator[](
			int i);  // 1581
	CSeqResourceCmdSequence::pMySeqDesc(); // 1834
	CAnimContainer::GetModel(); // 1435
	CSeqResourceCmdSequence::GetModel(); // 1837
	CSeqResourceCmdSequence::FPS(
		const float* poseParameter);  // 1832
} /* size: 0, variables: 1, inline expansions: 9 (165 bytes) */

// <00C94DF2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1832
// variable: 1
void CSeqResourceCmdSequence::FPS(const float* poseParameter)
{
	const CSeqCmdSeqDesc* pDesc; // 1834
} /* size: 0, variables: 1 */

// <00C94A7C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1842
// variables: 3
// function calls: 12
void CSeqResourceCmdSequence::CPS(const float* poseParameter)
{
	const CSeqCmdSeqDesc* pDesc; // 1844
	float flMaxFrame; // 1845
	{
		float fps; // 1854
		HSequence::operator==(
				const HSequence& other);  // 1855
		CAnimContainer::GetModel(); // 1435
		CSeqResourceCmdSequence::GetModel(); // 1857
	}
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
	CSequenceGroupResource::GetSequenceGroupResourceData(); // 106
	CSeqGroupInstance::GetSequenceGroupResourceData(); // 1580
	CUtlMemory<CSeqCmdSeqDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >::operator[](
			int i);  // 1581
	CSeqResourceCmdSequence::pMySeqDesc(); // 1844
	HSequence::operator==(
			const HSequence& other);  // 1847
	CAnimContainer::GetModel(); // 1435
	CSeqResourceCmdSequence::GetModel(); // 1849
} /* size: 0, variables: 2, inline expansions: 9 (163 bytes) */

// <00C948CB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1865
// variable: 1
// function calls: 7
void CSeqResourceCmdSequence::NumPoseSettings()
{
	const CSeqCmdSeqDesc* pDesc; // 1867
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
	CSequenceGroupResource::GetSequenceGroupResourceData(); // 106
	CSeqGroupInstance::GetSequenceGroupResourceData(); // 1580
	CUtlMemory<CSeqCmdSeqDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >::operator[](
			int i);  // 1581
	CSeqResourceCmdSequence::pMySeqDesc(); // 1867
	CUtlVectorBase<CSeqPoseSetting, CUtlMemory<CSeqPoseSetting, int> >::Count(); // 1869
} /* size: 0, variables: 1, inline expansions: 7 (104 bytes) */

// <00C945E2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1872
// variable: 1
// function calls: 12
void CSeqResourceCmdSequence::GetPoseSettingName(int index)
{
	const CSeqCmdSeqDesc* pDesc; // 1874
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
	CSequenceGroupResource::GetSequenceGroupResourceData(); // 106
	CSeqGroupInstance::GetSequenceGroupResourceData(); // 1580
	CUtlMemory<CSeqCmdSeqDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >::operator[](
			int i);  // 1581
	CSeqResourceCmdSequence::pMySeqDesc(); // 1874
	CUtlVectorBase<CSeqPoseSetting, CUtlMemory<CSeqPoseSetting, int> >::Count(); // 1875
	CUtlMemory<CSeqPoseSetting, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSeqPoseSetting, CUtlMemory<CSeqPoseSetting, int> >::operator[](
			int i);  // 1877
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 1877
} /* size: 0, variables: 1, inline expansions: 12 (237 bytes) */

// <00D28074> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1882
// function calls: 4
void CSeqResourceCmdSequence::GetPoseSettingValue(int index)
{
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1884
	CUtlMemory<float, int>::operator[](
			int i);  // 595
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 1886
	CSeqResourceCmdSequence::GetPoseSettingValue(
				int index);  // 1882
} /* size: 30, inline expansions: 4 (23 bytes) */

// <00C945BC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1882
void CSeqResourceCmdSequence::GetPoseSettingValue(int index)
{
} /* size: 0 */

// <00C93F2B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1896
// variables: 4
// function calls: 28
void CAnimResourceSequence::CAnimResourceSequence(const CAnimContainer* pAnimContainer, HSequence hSequence, int nAnimation, const CSeqS1SeqDesc* pSeqDesc)
{
	{
		const CAnimDesc* pAnimDesc; // 1902
		{
			int i; // 1905
		}
	}
	{
		const CAnimDesc* pAnimDesc; // 1902
		CUtlMemory<AnimInstanceMap_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::operator[](
				int i);  // 497
		CUtlMemory<const CAnimationGroupResource::operator[](
				int i);  // 595
		CUtlVectorBase<const CAnimationGroupResource::operator[](
				int i);  // 498
		CSmartPtr<CAnimationGroup, CRefCountAccessor>::operator->(); // 239
		CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
				int i);  // 239
		__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 472
		unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::get(); // 239
		CAnimationGroupResource::pLocalHAnim(
				int nLocalHAnim);  // 498
		CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 464
		{
		}
		CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 465
		CAnimationResource::GetData(); // 499
		CUtlMemory<CAnimDesc, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::operator[](
				int i);  // 499
		CAnimContainer::GetAnimdesc(
				int nAnimation);  // 2092
		CAnimResourceSequence::pMyAnimDesc(); // 1902
		{
			int i; // 1905
			CUtlVectorBase<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::Count(); // 1905
			CUtlMemory<CAnimAnimEvent, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::operator[](
					int i);  // 1907
			CUtlMemory<AnimEvent_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::operator[](
					int i);  // 1907
		}
		CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::Count(); // 1904
		CAnimDesc::MaxFrame(); // 1916
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 1935
		CHelperSequence::InitializeSequenceKeyValues(
						const CSeqS1SeqDesc* pSeqDesc);  // 1945
	}
	HSequence::HSequence(); // 1897
	Vector::Vector(); // 1897
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00C93EC2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1896
// variables: 2
void CAnimResourceSequence::CAnimResourceSequence(const CAnimContainer* pAnimContainer, HSequence hSequence, int nAnimation, const CSeqS1SeqDesc* pSeqDesc)
{
	{
		const CAnimDesc* pAnimDesc; // 1902
		{
			int i; // 1905
		}
	}
} /* size: 0 */

// <00D2DD3A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1948
// function calls: 21
void CAnimResourceSequence::GetName()
{
	CUtlMemory<AnimInstanceMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::operator[](
			int i);  // 497
	CUtlMemory<const CAnimationGroupResource::operator[](
			int i);  // 595
	CUtlVectorBase<const CAnimationGroupResource::operator[](
			int i);  // 498
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::operator->(); // 239
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
			int i);  // 239
	__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 472
	unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::get(); // 239
	CAnimationGroupResource::pLocalHAnim(
			int nLocalHAnim);  // 498
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 464
	{
	}
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 465
	CAnimationResource::GetData(); // 499
	CUtlMemory<CAnimDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::operator[](
			int i);  // 499
	CAnimContainer::GetAnimdesc(
			int nAnimation);  // 2092
	CAnimResourceSequence::pMyAnimDesc(); // 1950
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 358
	CAnimDesc::GetName(); // 1950
} /* size: 0, inline expansions: 21 (564 bytes) */

// <00C93EA9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1948
void CAnimResourceSequence::GetName()
{
} /* size: 0 */

// <00C93E4A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1953
// function call: 1
void CAnimResourceSequence::GetModel()
{
	CAnimContainer::GetModel(); // 1955
} /* size: 16, inline expansions: 1 (4 bytes) */

// <00C93E1C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1958
void CAnimResourceSequence::IsLooping()
{
} /* size: 12 */

// <00C93D6B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1963
// function calls: 2
void CAnimResourceSequence::IsSnapped()
{
	CAnimResourceSequence::GetFadeInTime(); // 1965
	CAnimResourceSequence::GetFadeOutTime(); // 1965
} /* size: 132, inline expansions: 2 (10 bytes) */

// <00C93D3D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1971
void CAnimResourceSequence::IsMulti()
{
} /* size: 7 */

// <00D2737B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1976
void CAnimResourceSequence::IsDelta()
{
} /* size: 14 */

// <00C93568> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1981
// function calls: 37
void CAnimResourceSequence::IsHidden()
{
	CUtlMemory<AnimInstanceMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::operator[](
			int i);  // 497
	CUtlMemory<const CAnimationGroupResource::operator[](
			int i);  // 595
	CUtlVectorBase<const CAnimationGroupResource::operator[](
			int i);  // 498
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::operator->(); // 239
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
			int i);  // 239
	__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 472
	unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::get(); // 239
	CAnimationGroupResource::pLocalHAnim(
			int nLocalHAnim);  // 498
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 464
	{
	}
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 465
	CAnimationResource::GetData(); // 499
	CUtlMemory<CAnimDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::operator[](
			int i);  // 499
	CAnimContainer::GetAnimdesc(
			int nAnimation);  // 2092
	CAnimResourceSequence::pMyAnimDesc(); // 1983
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 1983
	CUtlMemory<AnimInstanceMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::operator[](
			int i);  // 497
	CUtlMemory<const CAnimationGroupResource::operator[](
			int i);  // 595
	CUtlVectorBase<const CAnimationGroupResource::operator[](
			int i);  // 498
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::operator->(); // 239
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
			int i);  // 239
	__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 472
	unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::get(); // 239
	CAnimationGroupResource::pLocalHAnim(
			int nLocalHAnim);  // 498
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 464
	{
	}
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 465
	CAnimationResource::GetData(); // 499
	CUtlMemory<CAnimDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::operator[](
			int i);  // 499
	CAnimContainer::GetAnimdesc(
			int nAnimation);  // 2092
	CAnimResourceSequence::pMyAnimDesc(); // 1985
} /* size: 0, inline expansions: 37 (1028 bytes) */

// <00C93550> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1988
void CAnimResourceSequence::IsAutoplay()
{
} /* size: 0 */

// <00C933C8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1993
// function calls: 3
void CAnimResourceSequence::GetBounds(Vector* pVecMins, Vector* pVecMaxs)
{
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::Count(); // 135
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::IsEmpty(); // 2443
	CAnimContainer_Imp::GetBounds(
			int nAnimation,
			Vector* pVecMins,
			Vector* pVecMaxs);  // 1995
} /* size: 150, inline expansions: 3 (58 bytes) */

// <00C931A0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1998
// function calls: 9
void CAnimResourceSequence::GetAllAnimations(AnimRefVector_t& animRef)
{
	CUtlMemory<int, int>::NumAllocated(); // 1196
	CUtlMemory<int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::Element(
		int i);  // 1201
	CopyConstruct<int>(int* pMemory,
				const int& src);  // 1201
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::AddToTail(
			const int& src);  // 2000
} /* size: 105, inline expansions: 9 (153 bytes) */

// <00C93162> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2004
void CAnimResourceSequence::GetAllSequences(CUtlVector<HSequence, CUtlMemory<HSequence, int> >& seqRef)
{
} /* size: 7 */

// <00C92D77> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2009
// variable: 1
// function calls: 18
void CAnimResourceSequence::NumActivities()
{
	const CAnimDesc* pDesc; // 2011
	CUtlMemory<AnimInstanceMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::operator[](
			int i);  // 497
	CUtlMemory<const CAnimationGroupResource::operator[](
			int i);  // 595
	CUtlVectorBase<const CAnimationGroupResource::operator[](
			int i);  // 498
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::operator->(); // 239
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
			int i);  // 239
	__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 472
	unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::get(); // 239
	CAnimationGroupResource::pLocalHAnim(
			int nLocalHAnim);  // 498
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 464
	{
	}
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 465
	CAnimationResource::GetData(); // 499
	CUtlMemory<CAnimDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::operator[](
			int i);  // 499
	CAnimContainer::GetAnimdesc(
			int nAnimation);  // 2092
	CAnimResourceSequence::pMyAnimDesc(); // 2011
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::Count(); // 2012
} /* size: 0, variables: 1, inline expansions: 18 (454 bytes) */

// <00D2E7E2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2015
// variable: 1
// function calls: 25
void CAnimResourceSequence::GetActivityName(int index)
{
	const CAnimDesc* pDesc; // 2017
	CUtlMemory<AnimInstanceMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::operator[](
			int i);  // 497
	CUtlMemory<const CAnimationGroupResource::operator[](
			int i);  // 595
	CUtlVectorBase<const CAnimationGroupResource::operator[](
			int i);  // 498
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::operator->(); // 239
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
			int i);  // 239
	__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 472
	unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::get(); // 239
	CAnimationGroupResource::pLocalHAnim(
			int nLocalHAnim);  // 498
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 464
	{
	}
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 465
	CAnimationResource::GetData(); // 499
	CUtlMemory<CAnimDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::operator[](
			int i);  // 499
	CAnimContainer::GetAnimdesc(
			int nAnimation);  // 2092
	CAnimResourceSequence::pMyAnimDesc(); // 2017
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::Count(); // 2018
	CUtlMemory<CAnimActivity, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::operator[](
			int i);  // 2019
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 408
	CAnimActivity::GetName(); // 2019
	{
	}
	CAnimResourceSequence::GetActivityName(
			int index);  // 2015
} /* size: 0, variables: 1, inline expansions: 25 (644 bytes) */

// <00C92D20> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2015
// variables: 3
void CAnimResourceSequence::GetActivityName(int index)
{
	const CAnimDesc* pDesc; // 2017
	const char   __FUNCTION__; // 22060
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2022
	}
} /* size: 0, variables: 2 */

// <00D2C7FF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2026
// variable: 1
// function calls: 21
void CAnimResourceSequence::GetActivityWeight(int index)
{
	const CAnimDesc* pDesc; // 2028
	CUtlMemory<AnimInstanceMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::operator[](
			int i);  // 497
	CUtlMemory<const CAnimationGroupResource::operator[](
			int i);  // 595
	CUtlVectorBase<const CAnimationGroupResource::operator[](
			int i);  // 498
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::operator->(); // 239
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
			int i);  // 239
	__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 472
	unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::get(); // 239
	CAnimationGroupResource::pLocalHAnim(
			int nLocalHAnim);  // 498
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 464
	{
	}
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 465
	CAnimationResource::GetData(); // 499
	CUtlMemory<CAnimDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::operator[](
			int i);  // 499
	CAnimContainer::GetAnimdesc(
			int nAnimation);  // 2092
	CAnimResourceSequence::pMyAnimDesc(); // 2028
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::Count(); // 2029
	CUtlMemory<CAnimActivity, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::operator[](
			int i);  // 2030
	{
	}
	CAnimResourceSequence::GetActivityWeight(
				int index);  // 2026
} /* size: 0, variables: 1, inline expansions: 21 (512 bytes) */

// <00C92CC9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2026
// variables: 3
void CAnimResourceSequence::GetActivityWeight(int index)
{
	const CAnimDesc* pDesc; // 2028
	const char   __FUNCTION__; // 22114
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2033
	}
} /* size: 0, variables: 2 */

// <00D2C31C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2037
// variable: 1
// function calls: 21
void CAnimResourceSequence::GetActivityType(int index)
{
	const CAnimDesc* pDesc; // 2039
	CUtlMemory<AnimInstanceMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::operator[](
			int i);  // 497
	CUtlMemory<const CAnimationGroupResource::operator[](
			int i);  // 595
	CUtlVectorBase<const CAnimationGroupResource::operator[](
			int i);  // 498
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::operator->(); // 239
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
			int i);  // 239
	__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 472
	unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::get(); // 239
	CAnimationGroupResource::pLocalHAnim(
			int nLocalHAnim);  // 498
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 464
	{
	}
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 465
	CAnimationResource::GetData(); // 499
	CUtlMemory<CAnimDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::operator[](
			int i);  // 499
	CAnimContainer::GetAnimdesc(
			int nAnimation);  // 2092
	CAnimResourceSequence::pMyAnimDesc(); // 2039
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::Count(); // 2040
	CUtlMemory<CAnimActivity, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::operator[](
			int i);  // 2041
	{
	}
	CAnimResourceSequence::GetActivityType(
			int index);  // 2037
} /* size: 0, variables: 1, inline expansions: 21 (512 bytes) */

// <00C92C72> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2037
// variables: 3
void CAnimResourceSequence::GetActivityType(int index)
{
	const CAnimDesc* pDesc; // 2039
	const char   __FUNCTION__; // 22060
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2044
	}
} /* size: 0, variables: 2 */

// <00C927E0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2048
// function calls: 20
void CAnimResourceSequence::SetActivityType(Activity iActivity)
{
	CUtlMemory<AnimInstanceMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::operator[](
			int i);  // 497
	CUtlMemory<const CAnimationGroupResource::operator[](
			int i);  // 595
	CUtlVectorBase<const CAnimationGroupResource::operator[](
			int i);  // 498
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::operator->(); // 239
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
			int i);  // 239
	__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 472
	unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::get(); // 239
	CAnimationGroupResource::pLocalHAnim(
			int nLocalHAnim);  // 498
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 464
	{
	}
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 465
	CAnimationResource::GetData(); // 499
	CUtlMemory<CAnimDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::operator[](
			int i);  // 499
	CAnimContainer::GetAnimdesc(
			int nAnimation);  // 2092
	CAnimResourceSequence::pMyAnimDesc(); // 2055
	CUtlMemory<CAnimActivity, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::operator[](
			int i);  // 2056
	CAnimResourceSequence::SetActivityType(
			int index,
			Activity iActivity);  // 2050
} /* size: 0, inline expansions: 20 (668 bytes) */

// <00D2BECD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2053
// variable: 1
// function calls: 19
void CAnimResourceSequence::SetActivityType(int index, Activity iActivity)
{
	const CAnimDesc* pDesc; // 2055
	CUtlMemory<AnimInstanceMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::operator[](
			int i);  // 497
	CUtlMemory<const CAnimationGroupResource::operator[](
			int i);  // 595
	CUtlVectorBase<const CAnimationGroupResource::operator[](
			int i);  // 498
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::operator->(); // 239
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
			int i);  // 239
	__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 472
	unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::get(); // 239
	CAnimationGroupResource::pLocalHAnim(
			int nLocalHAnim);  // 498
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 464
	{
	}
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 465
	CAnimationResource::GetData(); // 499
	CUtlMemory<CAnimDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::operator[](
			int i);  // 499
	CAnimContainer::GetAnimdesc(
			int nAnimation);  // 2092
	CAnimResourceSequence::pMyAnimDesc(); // 2055
	CUtlMemory<CAnimActivity, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::operator[](
			int i);  // 2056
} /* size: 0, variables: 1, inline expansions: 19 (496 bytes) */

// <00C927A0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2053
// variable: 1
void CAnimResourceSequence::SetActivityType(int index, Activity iActivity)
{
	const CAnimDesc* pDesc; // 2055
} /* size: 0, variables: 1 */

// <00C92788> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2059
void CAnimResourceSequence::NumPoseParameters()
{
} /* size: 0 */

// <00C9274A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2064
void CAnimResourceSequence::GetPoseParameter(int index)
{
} /* size: 10 */

// <00D3C6A1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2069
// variable: 1
// function calls: 2
void CAnimResourceSequence::DoAnimation(CAnimationBucket& baseResult, float flCycle, float flWeight)
{
	{
		CAnimationBucket tmp; // 2077
		CAnimResourceSequence::IsDelta(); // 2079
	}
	CAnimResourceSequence::DoAnimation(
			CAnimationBucket& baseResult,
			float flCycle,
			float flWeight);  // 2069
} /* size: 286, inline expansions: 1 (153 bytes) */

// <00C926FB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2069
// variable: 1
void CAnimResourceSequence::DoAnimation(CAnimationBucket& baseResult, float flCycle, float flWeight)
{
	{
		CAnimationBucket tmp; // 2077
	}
} /* size: 0 */

// <00D2BA4E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2090
// function calls: 16
void CAnimResourceSequence::pMyAnimDesc()
{
	CUtlMemory<AnimInstanceMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::operator[](
			int i);  // 497
	CUtlMemory<const CAnimationGroupResource::operator[](
			int i);  // 595
	CUtlVectorBase<const CAnimationGroupResource::operator[](
			int i);  // 498
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::operator->(); // 239
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
			int i);  // 239
	__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 472
	unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::get(); // 239
	CAnimationGroupResource::pLocalHAnim(
			int nLocalHAnim);  // 498
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 464
	{
	}
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 465
	CAnimationResource::GetData(); // 499
	CUtlMemory<CAnimDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::operator[](
			int i);  // 499
	CAnimContainer::GetAnimdesc(
			int nAnimation);  // 2092
} /* size: 0, inline expansions: 16 (316 bytes) */

// <00C926E2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2090
void CAnimResourceSequence::pMyAnimDesc()
{
} /* size: 0 */

// <00C926CA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2095
void CAnimResourceSequence::GetNodeFlags()
{
} /* size: 0 */

// <00C92687> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2100
void CAnimResourceSequence::IsFlagSet(int nFlagMask)
{
} /* size: 11 */

// <00C92649> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2105
void CAnimResourceSequence::SetFlag(int nFlagMask)
{
} /* size: 8 */

// <00C92606> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2110
void CAnimResourceSequence::ClearFlag(int nFlagMask)
{
} /* size: 10 */

// <00C925D4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2115
void CAnimResourceSequence::GetNextSequence(HSequence hDestinationSequence, int* pDir)
{
} /* size: 0 */

// <00C925A6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2124
void CAnimResourceSequence::EntryNode()
{
} /* size: 8 */

// <00C92578> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2129
void CAnimResourceSequence::ExitNode()
{
} /* size: 8 */

// <00C9253A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2138
void CAnimResourceSequence::SetEntryNode(int nNode)
{
} /* size: 8 */

// <00C924FC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2147
void CAnimResourceSequence::SetExitNode(int nNode)
{
} /* size: 8 */

// <00D273A5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2153
void CAnimResourceSequence::GetFadeInTime()
{
} /* size: 10 */

// <00D273CF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2158
void CAnimResourceSequence::GetFadeOutTime()
{
} /* size: 10 */

// <00C9244B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2163
void CAnimResourceSequence::BuildBlendlist(CAnimationBlendList* pBlendList, const float* flPoseParameterArray)
{
} /* size: 26 */

// <00C91E05> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2168
// variable: 1
// function calls: 28
void CAnimResourceSequence::GetAssetInfo(CSequenceAssetInfo& info)
{
	CPathBufferString name; // 2170
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 2170
	CUtlMemory<AnimInstanceMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::operator[](
			int i);  // 497
	CUtlMemory<const CAnimationGroupResource::operator[](
			int i);  // 595
	CUtlVectorBase<const CAnimationGroupResource::operator[](
			int i);  // 498
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::operator->(); // 239
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
			int i);  // 239
	__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 472
	unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::get(); // 239
	CAnimationGroupResource::pLocalHAnim(
			int nLocalHAnim);  // 498
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 464
	{
	}
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 465
	CAnimationResource::GetData(); // 499
	CUtlMemory<CAnimDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::operator[](
			int i);  // 499
	CAnimContainer::GetAnimdesc(
			int nAnimation);  // 2092
	CAnimResourceSequence::pMyAnimDesc(); // 1950
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 358
	CAnimDesc::GetName(); // 1950
	CAnimResourceSequence::GetName(); // 2175
	CUtlString::operator=(
			const char* src);  // 2175
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 2178
} /* size: 0, variables: 1, inline expansions: 28 (906 bytes) */

// <00C91DC7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2181
void CAnimResourceSequence::MaxFrame(const float* poseParameter)
{
} /* size: 8 */

// <00C91D89> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2186
void CAnimResourceSequence::FPS(const float* poseParameter)
{
} /* size: 10 */

// <00C91D4B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2191
void CAnimResourceSequence::CPS(const float* poseParameter)
{
} /* size: 10 */

// <00C91D0D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2196
void CAnimResourceSequence::Duration(const float* poseParameter)
{
} /* size: 10 */

// <00C91B6D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2201
// function calls: 4
void CAnimResourceSequence::TotalMovementAndDuration(const float* poseParameter, Vector& deltaPos)
{
	Vector::operator=(
			const Vector& vOther);  // 2222
	CAnimContainer::GetModel(); // 2207
	CHelperSequence::TotalMovementAndDuration(
				const float* poseParameter,
				Vector& deltaPos);  // 2212
	CAnimContainer::GetModel(); // 2213
} /* size: 182, inline expansions: 4 (69 bytes) */

// <00C91382> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2229
// function calls: 3
void CModelDocAnimResourceSeqBase::CModelDocAnimResourceSeqBase(const CAnimContainer* pAnimContainer, HSequence hSequence, int nAnimation, const CSeqS1SeqDesc* pSeqDesc)
{
	CUtlMemory<CFootMotion, int>::Base(); // 113
	CUtlVectorBase<CFootMotion, CUtlMemory<CFootMotion, int> >::Base(); // 2234
	CUtlVectorBase<CFootMotion, CUtlMemory<CFootMotion, int> >::Count(); // 2235
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00C91335> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2229
void CModelDocAnimResourceSeqBase::CModelDocAnimResourceSeqBase(const CAnimContainer* pAnimContainer, HSequence hSequence, int nAnimation, const CSeqS1SeqDesc* pSeqDesc)
{
} /* size: 0 */

// <00C91307> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2242
void CModelDocAnimResourceSeqBase::GetFootMotionCount()
{
} /* size: 11 */

// <00C91265> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2250
// variables: 2
void CModelDocAnimResourceSeqBase::GetFootMotion(int nFootIndex)
{
	const char   __FUNCTION__; // 22006
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2252
	}
} /* size: 0, variables: 1 */

// <00C909DA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2265
// function calls: 4
void CModelDocAnimResourceSeq::CModelDocAnimResourceSeq(const CAnimContainer* pAnimContainer, HSequence hSequence, int nAnimation, const CSeqS1SeqDesc* pSeqDesc)
{
	CUtlMemory<CFootMotion, int>::Base(); // 113
	CUtlVectorBase<CFootMotion, CUtlMemory<CFootMotion, int> >::Base(); // 2234
	CUtlVectorBase<CFootMotion, CUtlMemory<CFootMotion, int> >::Count(); // 2235
	CModelDocAnimResourceSeqBase::CModelDocAnimResourceSeqBase(
					const CAnimContainer* pAnimContainer,
					HSequence hSequence,
					int nAnimation,
					const CSeqS1SeqDesc* pSeqDesc);  // 2266
} /* size: 0, inline expansions: 4 (0 bytes) */

// <00C9098D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2265
void CModelDocAnimResourceSeq::CModelDocAnimResourceSeq(const CAnimContainer* pAnimContainer, HSequence hSequence, int nAnimation, const CSeqS1SeqDesc* pSeqDesc)
{
} /* size: 0 */

// <00D3C840> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2272
// variable: 1
// function call: 1
void CModelDocAnimResourceSeq::DoAnimation(CAnimationBucket& baseResult, float flCycle, float flWeight)
{
	{
		CAnimationBucket tmp; // 2280
	}
	CModelDocAnimResourceSeq::DoAnimation(
			CAnimationBucket& baseResult,
			float flCycle,
			float flWeight);  // 2272
} /* size: 190, inline expansions: 1 (84 bytes) */

// <00C9093E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2272
// variable: 1
void CModelDocAnimResourceSeq::DoAnimation(CAnimationBucket& baseResult, float flCycle, float flWeight)
{
	{
		CAnimationBucket tmp; // 2280
	}
} /* size: 0 */

// <00C907C2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2288
// function calls: 4
void CModelDocAnimResourceSeqDelta::CModelDocAnimResourceSeqDelta(const CAnimContainer* pAnimContainer, HSequence hSequence, int nAnimation, const CSeqS1SeqDesc* pSeqDesc)
{
	CUtlMemory<CFootMotion, int>::Base(); // 113
	CUtlVectorBase<CFootMotion, CUtlMemory<CFootMotion, int> >::Base(); // 2234
	CUtlVectorBase<CFootMotion, CUtlMemory<CFootMotion, int> >::Count(); // 2235
	CModelDocAnimResourceSeqBase::CModelDocAnimResourceSeqBase(
					const CAnimContainer* pAnimContainer,
					HSequence hSequence,
					int nAnimation,
					const CSeqS1SeqDesc* pSeqDesc);  // 2289
} /* size: 0, inline expansions: 4 (0 bytes) */

// <00C90775> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2288
void CModelDocAnimResourceSeqDelta::CModelDocAnimResourceSeqDelta(const CAnimContainer* pAnimContainer, HSequence hSequence, int nAnimation, const CSeqS1SeqDesc* pSeqDesc)
{
} /* size: 0 */

// <00C9065D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2295
// variable: 1
void CModelDocAnimResourceSeqDelta::DoAnimation(CAnimationBucket& baseResult, float flCycle, float flWeight)
{
	CAnimationBucket tmp; // 2297
} /* size: 134, variables: 1 */

// <00C904E1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2304
// function calls: 4
void CModelDocAnimResourceSeqWorldSpace::CModelDocAnimResourceSeqWorldSpace(const CAnimContainer* pAnimContainer, HSequence hSequence, int nAnimation, const CSeqS1SeqDesc* pSeqDesc)
{
	CUtlMemory<CFootMotion, int>::Base(); // 113
	CUtlVectorBase<CFootMotion, CUtlMemory<CFootMotion, int> >::Base(); // 2234
	CUtlVectorBase<CFootMotion, CUtlMemory<CFootMotion, int> >::Count(); // 2235
	CModelDocAnimResourceSeqBase::CModelDocAnimResourceSeqBase(
					const CAnimContainer* pAnimContainer,
					HSequence hSequence,
					int nAnimation,
					const CSeqS1SeqDesc* pSeqDesc);  // 2305
} /* size: 0, inline expansions: 4 (0 bytes) */

// <00C90494> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2304
void CModelDocAnimResourceSeqWorldSpace::CModelDocAnimResourceSeqWorldSpace(const CAnimContainer* pAnimContainer, HSequence hSequence, int nAnimation, const CSeqS1SeqDesc* pSeqDesc)
{
} /* size: 0 */

// <00C9037C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2311
// variable: 1
void CModelDocAnimResourceSeqWorldSpace::DoAnimation(CAnimationBucket& baseResult, float flCycle, float flWeight)
{
	CAnimationBucket tmp; // 2313
} /* size: 134, variables: 1 */

