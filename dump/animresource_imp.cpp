
//
// animresource_imp.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 80
//

// <00CE260B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:49
// function calls: 11
void CAnimContainer_Imp::CAnimContainer_Imp()
{
	CThreadMutex::CThreadMutex(
			const char* pName);  // 54
	CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CAnimContainer_Imp::AnimationGroupImp_t, CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int> > this); // 530
	CUtlVectorBase(const CUtlVectorBase<CAnimContainer_Imp::AnimationGroupImp_t, CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int> >  this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimContainer_Imp::AnimationGroupImp_t, CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int> >::CUtlVector(); // 54
	CUtlMemory<ISequence::ValidateGrowSize(); // 475
	CUtlMemory<ISequence::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ISequence::ResetDbgInfo(); // 530
	CUtlVectorBase<ISequence::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ISequence::CUtlVector(); // 51
} /* size: 224, inline expansions: 11 (299 bytes) */

// <00CE25F2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:49
void CAnimContainer_Imp::CAnimContainer_Imp()
{
} /* size: 0 */

// <00CE1ABB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:58
// variables: 2
// function calls: 54
void CAnimContainer_Imp::~CAnimContainer_Imp()
{
	{
		int i; // 1807
		CUtlMemory<ISequence::operator[](
				int i);  // 602
		CUtlVectorBase<ISequence::Element(
			int i);  // 1809
	}
	CUtlVectorBase<ISequence::RemoveAll(); // 1798
	CUtlMemory<ISequence::Purge(); // 903
	CUtlMemory<ISequence::IsExternallyAllocated(); // 905
	CUtlMemory<ISequence::Purge(); // 1799
	CUtlVectorBase<ISequence::ResetDbgInfo(); // 1800
	CUtlVectorBase<ISequence::Purge(); // 1811
	CUtlVectorBase<ISequence::PurgeAndDeleteElements(); // 61
	CUtlVectorBase<ISequence::RemoveAll(); // 1798
	CUtlMemory<ISequence::IsExternallyAllocated(); // 905
	CUtlMemory<ISequence::Purge(); // 903
	CUtlMemory<ISequence::Purge(); // 1799
	CUtlVectorBase<ISequence::Purge(); // 560
	ValidateAlignment<ISequence*>(void); // 508
	CUtlMemory<ISequence::Purge(); // 510
	CUtlMemory<ISequence::~CUtlMemory(); // 562
	CUtlVectorBase<ISequence::~CUtlVectorBase(); // 410
	CUtlVector<ISequence::~CUtlVector(); // 65
	{
		int i; // 1721
		CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CAnimContainer_Imp::AnimationGroupImp_t, CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int> >  this,
			int i);  // 1723
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
		CUtlMemory<int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 93
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
		CUtlMemory<int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 93
		AnimationGroupImp_t::~AnimationGroupImp_t(); // 1526
		Destruct<CAnimContainer_Imp::AnimationGroupImp_t>(AnimationGroupImp_t* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CAnimContainer_Imp::AnimationGroupImp_t, CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int> > this); // 1798
	CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int>::Purge(); // 903
	CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CAnimContainer_Imp::AnimationGroupImp_t, CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int> > this); // 560
	ValidateAlignment<CAnimContainer_Imp::AnimationGroupImp_t>(void); // 508
	CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int>::Purge(); // 510
	CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CAnimContainer_Imp::AnimationGroupImp_t, CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int> > this); // 410
	CUtlVector<CAnimContainer_Imp::AnimationGroupImp_t, CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int> >::~CUtlVector(); // 65
	CThreadMutex::~CThreadMutex(); // 65
} /* size: 492, inline expansions: 28 (1212 bytes) */

// <00CE1A55> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:58
void CAnimContainer_Imp::~CAnimContainer_Imp()
{
} /* size: 36 */

// <00CE19DD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:68
void CAnimationSystem::CreateAnimContainer()
{
} /* size: 40 */

// <00D3A645> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:74
// variable: 1
// function calls: 2
void CAnimationSystem::DeleteAnimContainer(CModel* pModel)
{
	{
		CAnimContainer_Imp* pImp; // 78
		CAnimContainer_Imp::~CAnimContainer_Imp(); // 79
	}
	CAnimationSystem::DeleteAnimContainer(
				CModel* pModel);  // 74
} /* size: 119, inline expansions: 1 (64 bytes) */

// <00CE19AA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:74
// variable: 1
void CAnimationSystem::DeleteAnimContainer(CModel* pModel)
{
	{
		CAnimContainer_Imp* pImp; // 78
	}
} /* size: 0 */

// <00CE1935> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:83
void CAnimationSystem::MakeIKString(const char* pString)
{
} /* size: 66 */

// <00CE18DA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:88
void CAnimationSystem::CreateIKControlRig(const IIKControlRigDescription* pIKControlRigDescription)
{
} /* size: 16 */

// <00CE187F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:93
void CAnimationSystem::DeleteIKControlRig(IIKControlRigContext* pIKControlRigContext)
{
} /* size: 25 */

// <00CE17D6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:105
// variables: 4
int FIELD_TYPE_SIZE(fieldtype_t nType)
{
	int nSize; // 107
	const char   __FUNCTION__; // 22060
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 135
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 140
	}
} /* size: 0, variables: 2 */

// <00CE1774> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:144
// variables: 2
int FIELD_TYPE_ALIGNMENT(fieldtype_t nType)
{
	const char   __FUNCTION__; // 22195
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 165
	}
} /* size: 0, variables: 1 */

// <00CE1738> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:170
// variable: 1
void* FIELD_TYPE_ALIGN(void* pData, fieldtype_t nType)
{
	int nAlignment; // 172
} /* size: 0, variables: 1 */

// <00CE1602> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:181
// function calls: 5
void CAnimDataChannel::CAnimDataChannel()
{
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 181
} /* size: 0, inline expansions: 5 (0 bytes) */

// <00CE15E6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:181
void CAnimDataChannel::CAnimDataChannel()
{
} /* size: 0 */

// <00CE147C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:186
// function calls: 7
void CAnimDataChannel::~CAnimDataChannel()
{
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 193
} /* size: 0, inline expansions: 7 (0 bytes) */

// <00CE1460> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:186
void CAnimDataChannel::~CAnimDataChannel()
{
} /* size: 0 */

// <00CE10E4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:195
// function calls: 3
void AppendBoneFlagsString(CUtlString* pText, int nFlags)
{
	CUtlString::IsEmpty(); // 232
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 235
} /* size: 625, inline expansions: 3 (24 bytes) */

// <00CE0F56> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:239
// variables: 2
void AppendFieldtypeString(CUtlString* pText, fieldtype_t nType)
{
	const char   __FUNCTION__; // 22222
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 268
	}
} /* size: 0, variables: 1 */

// <00CDF625> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:278
// variables: 14
// function calls: 83
void CAnimContainer_Imp::AppendAnimations(const CModel* pModel, const CAnimationGroupResource ** pAnimGroups, int nNumAnimGroups)
{
	int nBuckets; // 312
	int nAnimBuckets; // 314
	int nSeqBuckets; // 315
	const char   __FUNCTION__; // 22087
	const int  nAnimGroupCount; // 336
	{
		int a; // 283
		CAnimContainer_Imp::BuildAnimGroupList(
					const CModel* pModel,
					const CAnimationGroupResource* pAnimGroupResource,
					int nParentIndex);  // 285
	}
	{
		int a; // 291
		{
			const CAnimationGroup* pAnimGroupData; // 293
			CUtlString::Get(); // 242
			CAnimationGroupResource::GetName(); // 298
			CUtlMemory<const CAnimationGroupResource::operator[](
					int i);  // 588
			CUtlVectorBase<const CAnimationGroupResource::operator[](
					int i);  // 298
			CUtlMemory<CAnimRetarget, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimRetarget, CUtlMemory<CAnimRetarget, int> >::operator[](
					int i);  // 298
			CUtlString::operator=(
					const char* src);  // 298
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 299
			CUtlMemory<const CAnimationGroupResource::operator[](
					int i);  // 588
			CUtlVectorBase<const CAnimationGroupResource::operator[](
					int i);  // 293
			CSmartPtr<CAnimationGroup, CRefCountAccessor>::Get(); // 234
			CAnimationGroupResource::GetData(); // 293
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 294
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 304
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 306
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 306
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 291
	}
	{
		CBindPoseSequence* pBindPose; // 322
		UtlHashHandle_t handle; // 323
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 326
		}
		IBaseSequence::IBaseSequence(); // 125
		ISequence::ISequence(); // 15
		StaticEmptyKeyValues(void); // 88
		StaticEmptyKeyValues(void); // 15
		CEmptySequence::CEmptySequence(); // 27
		HSequence::HSequence(); // 27
		CAnimContainer::GetModel(); // 28
		CBindPoseSequence::CBindPoseSequence(
					const CAnimContainer* pAnimContainer,
					HSequence hSequence,
					int nGroup,
					int nIndex);  // 322
		HashStringFastCaseless(const char* pszKey); // 96
		CHash<true>::operator(
				const Entry_t& entry);  // 239
		{
			int bucketCount; // 249
			Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this); // 249
		}
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this,
				int i);  // 254
		Count(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false> this); // 255
		CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::operator[](
				int i);  // 609
		Element(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false> this,
			int i);  // 258
		CCompare<true>::operator(
				const Entry_t& entry1,
				const Entry_t& entry2);  // 258
		DoFind(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
			const Entry_t& src,
			unsigned int* pBucket,
			int* pIndex);  // 278
		{
		}
		{
		}
		BuildHandle(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
				int ndxBucket,
				int ndxKeyData);  // 280
		Find(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
			const Entry_t& src);  // 330
		CUtlHashDict<short int, true, false>::Find(
			const char* pName);  // 323
		CBindPoseSequence::GetName(); // 323
		CUtlVectorBase<ISequence::Count(); // 326
		CUtlMemory<ISequence::NumAllocated(); // 1247
		CUtlMemory<ISequence::operator[](
				int i);  // 602
		CUtlVectorBase<ISequence::Element(
			int i);  // 1252
		Construct<ISequence*, ISequence*>(ISequence** pMemory); // 1252
		CUtlMemory<ISequence::Base(); // 112
		CUtlVectorBase<ISequence::Base(); // 368
		CUtlVectorBase<ISequence::ResetDbgInfo(); // 824
		CUtlVectorBase<ISequence::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<ISequence::AddToTail(
				ISequence *& src);  // 328
		IBaseSequence::~IBaseSequence(); // 128
		ISequence::~ISequence(); // 18
		CEmptySequence::~CEmptySequence(); // 37
		CBindPoseSequence::~CBindPoseSequence(); // 37
		CBindPoseSequence::~CBindPoseSequence(); // 332
	}
	{
		int nAnimGroup; // 337
		CUtlMemory<const CAnimationGroupResource::operator[](
				int i);  // 588
		CUtlVectorBase<const CAnimationGroupResource::operator[](
				int i);  // 339
		CAnimContainer_Imp::AppendAnimGroup(
				const CModel* pModel,
				int nAnimGroupIndex,
				const CAnimationGroupResource* pAnimGroupResource);  // 339
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 362
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 289
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 290
	SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 314
	SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 315
	Max<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 314
	Max<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 315
	operator&(ModelFlags_t a,
			ModelFlags_t b);  // 319
	CUtlVectorBase<const CAnimationGroupResource::Count(); // 336
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::Count(); // 135
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::IsEmpty(); // 344
	CUtlVectorBase<ISequence::Count(); // 135
	CUtlVectorBase<ISequence::IsEmpty(); // 344
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::Count(); // 135
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::IsEmpty(); // 367
	CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::Count(); // 135
	CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::IsEmpty(); // 367
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::Count(); // 377
	CUtlVectorBase<ISequence::Count(); // 381
	CUtlVectorBase<ISequence::Count(); // 383
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::Count(); // 379
} /* size: 0, variables: 5, inline expansions: 20 (133 bytes) */

// <00CDF1B0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:395
// variables: 9
// function calls: 16
void CAnimContainer_Imp::EstimateHashSize()
{
	int total; // 397
	const char   __FUNCTION__; // 22087
	{
		int a; // 398
		{
			const CAnimationGroupResource* pAnimGroupResource; // 400
			{
				const CAnimationGroup* pAnimGroupData; // 403
				{
					int i; // 408
					{
						const CAnimationResource* pCAnimResource; // 410
						const CAnimData* pAnimData; // 416
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 417
						}
						CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::Count(); // 420
						CSmartPtr<CAnimationGroup, CRefCountAccessor>::operator->(); // 239
						CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
								int i);  // 588
						operator[](const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
								int i);  // 239
						__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 472
						unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::get(); // 239
						CAnimationGroupResource::pLocalHAnim(
								int nLocalHAnim);  // 410
						CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 464
						{
						}
						CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 465
						CAnimationResource::GetData(); // 416
					}
					Count(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std: this); // 408
				}
				CSmartPtr<CAnimationGroup, CRefCountAccessor>::Get(); // 234
				CAnimationGroupResource::GetData(); // 403
			}
			CUtlMemory<const CAnimationGroupResource::operator[](
					int i);  // 588
			CUtlVectorBase<const CAnimationGroupResource::operator[](
					int i);  // 400
		}
		CUtlVectorBase<const CAnimationGroupResource::Count(); // 398
	}
} /* size: 0, variables: 2 */

// <00D35BC1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:433
void CAnimContainer_Imp::BuildAnimGroupList(const CModel* pModel, const CAnimationGroupResource* pAnimGroupResource, int nParentIndex)
{
} /* size: 0 */

// <00D35642> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:433
// variables: 4
// function calls: 21
void CAnimContainer_Imp::BuildAnimGroupList(const CModel* pModel, const CAnimationGroupResource* pAnimGroupResource, int nParentIndex)
{
	{
		int index; // 437
		const CAnimationGroup* pAnimGroupData; // 442
		CUtlMemory<const CAnimationGroupResource::NumAllocated(); // 1143
		CUtlMemory<const CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<const CAnimationGroupResource::Base(); // 368
		CUtlVectorBase<const CAnimationGroupResource::ResetDbgInfo(); // 824
		CUtlMemory<const CAnimationGroupResource::IsGrowable(); // 823
		CUtlMemory<const CAnimationGroupResource::IsExternallyAllocated(); // 859
		CUtlMemory<const CAnimationGroupResource::IsExternallyAllocated(); // 861
		CUtlMemory<const CAnimationGroupResource::Grow(
			int num);  // 806
		CUtlVectorBase<const CAnimationGroupResource::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<const CAnimationGroupResource::AddToTail(); // 437
		CUtlMemory<const CAnimationGroupResource::operator[](
				int i);  // 588
		CUtlVectorBase<const CAnimationGroupResource::operator[](
				int i);  // 438
		CUtlVectorBase<const CAnimationGroupResource::Count(); // 439
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 440
		CSmartPtr<CAnimationGroup, CRefCountAccessor>::Get(); // 234
		CAnimationGroupResource::GetData(); // 442
		{
			int i; // 444
			CUtlVectorBase<CAnimationGroupResource::Count(); // 444
			{
				const CAnimationGroupResource* pIncludedAnimGroup; // 446
				CUtlMemory<CAnimationGroupResource::operator[](
						int i);  // 595
				CUtlVectorBase<CAnimationGroupResource::operator[](
						int i);  // 446
				CAnimContainer_Imp::BuildAnimGroupList(
							const CModel* pModel,
							const CAnimationGroupResource* pAnimGroupResource,
							int nParentIndex);  // 447
			}
		}
	}
} /* size: 380 */

// <00CDF138> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:433
// variables: 4
void CAnimContainer_Imp::BuildAnimGroupList(const CModel* pModel, const CAnimationGroupResource* pAnimGroupResource, int nParentIndex)
{
	{
		int index; // 437
		const CAnimationGroup* pAnimGroupData; // 442
		{
			int i; // 444
			{
				const CAnimationGroupResource* pIncludedAnimGroup; // 446
			}
		}
	}
} /* size: 0 */

// <00D3A5DF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:455
void CAnimContainer_Imp::AppendAnimGroup(const CModel* pModel, int nAnimGroupIndex, const CAnimationGroupResource* pAnimGroupResource)
{
} /* size: 0 */

// <00D392EA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:455
// variables: 6
// function calls: 95
void CAnimContainer_Imp::AppendAnimGroup(const CModel* pModel, int nAnimGroupIndex, const CAnimationGroupResource* pAnimGroupResource)
{
	{
		const CAnimationGroup* pAnimGroupData; // 459
		const int  nSwizzleIndex; // 466
		CAnimDecodeSwizzle* pSwizzle; // 468
		CSequenceGroupResource* pDirectSeqGroup; // 476
		CSmartPtr<CAnimationGroup, CRefCountAccessor>::Get(); // 234
		CAnimationGroupResource::GetData(); // 459
		CUtlVectorBase<const CAnimationGroupResource::Count(); // 467
		CUtlVectorBase<CAnimDecodeSwizzle, CUtlMemory<CAnimDecodeSwizzle, int> >::Count(); // 1069
		CUtlMemory<CAnimDecodeSwizzle, int>::NumAllocated(); // 782
		CUtlMemory<CAnimDecodeSwizzle, int>::Base(); // 112
		CUtlVectorBase<CAnimDecodeSwizzle, CUtlMemory<CAnimDecodeSwizzle, int> >::Base(); // 368
		CUtlVectorBase<CAnimDecodeSwizzle, CUtlMemory<CAnimDecodeSwizzle, int> >::ResetDbgInfo(); // 824
		CUtlMemory<CAnimDecodeSwizzle, int>::IsGrowable(); // 823
		CUtlMemory<CAnimDecodeSwizzle, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CAnimDecodeSwizzle, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CAnimDecodeSwizzle, int>::Grow(
			int num);  // 806
		CUtlVectorBase<CAnimDecodeSwizzle, CUtlMemory<CAnimDecodeSwizzle, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<CAnimDecodeSwizzle, CUtlMemory<CAnimDecodeSwizzle, int> >::GrowVector(
				int num);  // 1445
		{
			int i; // 1451
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 28
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 28
			CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::ValidateGrowSize(); // 475
			CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVector(); // 28
			CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
			CUtlMemory<unsigned int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 28
			CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
			CUtlMemory<unsigned int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 28
			CAnimDecodeSwizzle::CAnimDecodeSwizzle(); // 1479
			Construct<CAnimDecodeSwizzle>(CAnimDecodeSwizzle* pMemory); // 1453
			CUtlMemory<CAnimDecodeSwizzle, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CAnimDecodeSwizzle, CUtlMemory<CAnimDecodeSwizzle, int> >::Element(
				int i);  // 1453
		}
		CUtlVectorBase<CAnimDecodeSwizzle, CUtlMemory<CAnimDecodeSwizzle, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<CAnimDecodeSwizzle, CUtlMemory<CAnimDecodeSwizzle, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<CAnimDecodeSwizzle, CUtlMemory<CAnimDecodeSwizzle, int> >::AddMultipleToTail(
					int num);  // 1071
		CUtlVectorBase<CAnimDecodeSwizzle, CUtlMemory<CAnimDecodeSwizzle, int> >::EnsureCount(
				int num);  // 467
		CUtlMemory<CAnimDecodeSwizzle, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimDecodeSwizzle, CUtlMemory<CAnimDecodeSwizzle, int> >::operator[](
				int i);  // 468
		__uniq_ptr_impl<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::_M_ptr(); // 472
		unique_ptr<CSequenceGroupResource, std::default_delete<CSequenceGroupResource> >::get(); // 476
		{
			int nIncludedSeqGroup; // 479
			CUtlMemory<CSeqGroupInstance, int>::NumAllocated(); // 1143
			CUtlMemory<CSeqGroupInstance, int>::Base(); // 112
			CUtlVectorBase<CSeqGroupInstance, CUtlMemory<CSeqGroupInstance, int> >::Base(); // 368
			CUtlVectorBase<CSeqGroupInstance, CUtlMemory<CSeqGroupInstance, int> >::ResetDbgInfo(); // 824
			CUtlMemory<CSeqGroupInstance, int>::IsGrowable(); // 823
			CUtlMemory<CSeqGroupInstance, int>::IsExternallyAllocated(); // 859
			CUtlMemory<CSeqGroupInstance, int>::IsExternallyAllocated(); // 861
			CUtlMemory<CSeqGroupInstance, int>::Grow(
				int num);  // 806
			CUtlVectorBase<CSeqGroupInstance, CUtlMemory<CSeqGroupInstance, int> >::GrowMemory(
					int num);  // 1145
			CUtlMemory<HSequence, int>::ValidateGrowSize(); // 475
			CUtlMemory<HSequence, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<HSequence, CUtlMemory<HSequence, int> >::CUtlVector(); // 112
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 112
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 112
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 112
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 112
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 112
			CSeqGroupInstance::CSeqGroupInstance(); // 1479
			Construct<CSeqGroupInstance>(CSeqGroupInstance* pMemory); // 1148
			CUtlMemory<CSeqGroupInstance, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CSeqGroupInstance, CUtlMemory<CSeqGroupInstance, int> >::Element(
				int i);  // 1148
			CUtlVectorBase<CSeqGroupInstance, CUtlMemory<CSeqGroupInstance, int> >::AddToTail(); // 479
		}
	}
} /* size: 1282 */

// <00CDF0B3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:455
// variables: 5
void CAnimContainer_Imp::AppendAnimGroup(const CModel* pModel, int nAnimGroupIndex, const CAnimationGroupResource* pAnimGroupResource)
{
	{
		const CAnimationGroup* pAnimGroupData; // 459
		const int  nSwizzleIndex; // 466
		CAnimDecodeSwizzle* pSwizzle; // 468
		CSequenceGroupResource* pDirectSeqGroup; // 476
		{
			int nIncludedSeqGroup; // 479
		}
	}
} /* size: 0 */

// <00CDEED0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:492
// variables: 2
// function calls: 4
void CAnimContainer_Imp::AppendSeqGroup(const CModel* pModel, int nSequenceGroupInstance, const CSequenceGroupResource* pSequenceResource, int nParentAnimGroup)
{
	{
		const CSequenceGroupData* pSeqResourceData; // 496
		CSeqGroupInstance* pSeqGroupInstance; // 500
		CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
		CSequenceGroupResource::GetSequenceGroupResourceData(); // 496
		CUtlMemory<CSeqGroupInstance, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CSeqGroupInstance, CUtlMemory<CSeqGroupInstance, int> >::operator[](
				int i);  // 500
	}
} /* size: 131 */

// <00CDBA03> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:521
// variables: 30
// function calls: 212
void CAnimContainer_Imp::AppendDataChannels(const CModel* pModel, int nSwizzleIndex, const CAnimKeyData* pAnimKey, int nAnimGroupIndex)
{
	CAnimDecodeSwizzle* pSwizzle; // 523
	int nSrcChannel; // 525
	int nDstChannel; // 526
	bool bLoggedName; // 540
	const char   __FUNCTION__; // 22141
	bool bShowWarnings; // 627
	{
		int i; // 531
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 531
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 533
	}
	{
		const CAnimDataChannelDesc* pSrcChannel; // 545
		{
			const CAnimDataChannelDesc* pDstChannel; // 552
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 558
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 558
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 560
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 560
		}
		{
			CAnimDataChannel* pChannel; // 573
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 585
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 594
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 599
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 605
			}
			CUtlMemory<CAnimDataChannel, int>::NumAllocated(); // 1143
			CUtlMemory<CAnimDataChannel, int>::Base(); // 112
			CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::Base(); // 368
			CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::ResetDbgInfo(); // 824
			CUtlMemory<CAnimDataChannel, int>::IsGrowable(); // 823
			CUtlMemory<CAnimDataChannel, int>::IsExternallyAllocated(); // 859
			CUtlMemory<CAnimDataChannel, int>::IsExternallyAllocated(); // 861
			CUtlMemory<CAnimDataChannel, int>::Grow(
				int num);  // 806
			CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::GrowMemory(
					int num);  // 1145
			CUtlMemory<CAnimDataChannel, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::Element(
				int i);  // 1148
			CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
			CUtlMemory<unsigned char, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 181
			CAnimDataChannel::CAnimDataChannel(); // 1479
			Construct<CAnimDataChannel>(CAnimDataChannel* pMemory); // 1148
			CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::AddToTail(); // 573
			CUtlMemory<CAnimDataChannel, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
					int i);  // 573
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 575
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 581
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 585
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 590
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 592
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 597
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 603
		}
		{
			CUtlString sFlags; // 616
			CUtlString sType; // 619
			CUtlString::CUtlString(); // 616
			CUtlString::CUtlString(); // 619
			CUtlString::Get(); // 99
			CUtlString::String(); // 622
			CUtlString::Get(); // 99
			CUtlString::String(); // 622
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 622
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 622
			CUtlString::~CUtlString(); // 623
			CUtlString::~CUtlString(); // 623
		}
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 550
		CUtlMemory<CAnimDataChannel, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
				int i);  // 550
		CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::Count(); // 547
		CUtlMemory<CAnimDataChannelDesc, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::operator[](
				int i);  // 545
		CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::Count(); // 571
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 611
	}
	{
		const CAnimDataChannelDesc* pSrcChannel; // 636
		CAnimDataChannel* pDstChannel; // 639
		{
			int nSrcIndex; // 641
			{
				int nDstIndex; // 643
				CUtlString sElementName; // 644
				{
					CUtlString sUniqueName; // 649
					UtlHashHandle_t handle; // 654
					{
						int nOrigChannel; // 660
						CAnimDataChannel* pOrigChannel; // 661
						{
							CUtlString sCurrent; // 673
							CUtlString sOrig; // 676
							CUtlString::CUtlString(); // 673
							CUtlString::CUtlString(); // 676
							CUtlMemory<const CAnimationGroupResource::operator[](
									int i);  // 588
							CUtlVectorBase<const CAnimationGroupResource::operator[](
									int i);  // 679
							CUtlString::Get(); // 99
							CUtlString::String(); // 679
							CUtlString::Get(); // 99
							CUtlString::String(); // 679
							CUtlString::Get(); // 99
							CUtlString::String(); // 679
							CUtlString::Get(); // 242
							CAnimationGroupResource::GetName(); // 679
							CUtlMemory<const CAnimationGroupResource::operator[](
									int i);  // 588
							CUtlVectorBase<const CAnimationGroupResource::operator[](
									int i);  // 679
							CUtlString::Get(); // 242
							CAnimationGroupResource::GetName(); // 679
							CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::operator[](
									int i);  // 602
							Element(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this,
								int i);  // 406
							operator[](const CUtlMemory<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElemen this,
									int i);  // 588
							operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelEl this,
									int i);  // 406
							operator[](const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo this,
									UtlHashHandle_t handle);  // 127
							CUtlHashDict<ChannelElementMap_t, true, true>::Element(
								UtlHashHandle_t handle);  // 679
							CUtlString::~CUtlString(); // 680
							CUtlString::~CUtlString(); // 680
							CUtlMemory<const CAnimationGroupResource::operator[](
									int i);  // 588
							CUtlVectorBase<const CAnimationGroupResource::operator[](
									int i);  // 669
							CUtlString::Get(); // 242
							CAnimationGroupResource::GetName(); // 669
						}
						CUtlMemory<CAnimDataChannel, int>::operator[](
								int i);  // 588
						CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
								int i);  // 661
					}
					{
						ChannelElementMap_t tmp; // 693
						CUtlString::Get(); // 696
						HashStringFastCaseless(const char* pszKey); // 96
						CHash<true>::operator(
								const Entry_t& entry);  // 239
						{
							int bucketCount; // 249
							Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<Cha this); // 249
						}
						operator[](const CUtlMemory<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<Channel this,
								int i);  // 595
						operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<Cha this,
								int i);  // 254
						Count(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElement this); // 255
						CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::operator[](
								int i);  // 609
						Element(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElement this,
							int i);  // 258
						CCompare<true>::operator(
								const Entry_t& entry1,
								const Entry_t& entry2);  // 258
						DoFind(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
							const Entry_t& src,
							unsigned int* pBucket,
							int* pIndex);  // 312
						{
						}
						{
						}
						BuildHandle(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
								int ndxBucket,
								int ndxKeyData);  // 315
						operator[](const CUtlMemory<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElemen this,
								int i);  // 588
						operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelEl this,
								int i);  // 319
						CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::NumAllocated(); // 1196
						CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::operator[](
								int i);  // 602
						Element(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this,
							int i);  // 1201
						CopyConstruct<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t>(Entry_t* pMemory,
															const Entry_t& src);  // 1201
						CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::Base(); // 112
						Base(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this); // 368
						ResetDbgInfo(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this); // 824
						GrowMemory(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this,
								int num);  // 1198
						AddToTail(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this,
								const Entry_t& src);  // 319
						{
						}
						{
						}
						BuildHandle(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
								int ndxBucket,
								int ndxKeyData);  // 321
						Insert(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo this,
							const Entry_t& src,
							bool* pDidInsert);  // 286
						CUtlHashDict<ChannelElementMap_t, true, true>::Insert(
							const char* pName,
							const ChannelElementMap_t& element);  // 696
						CUtlString::Get(); // 99
						CUtlString::String(); // 698
					}
					CUtlString::CUtlString(); // 649
					V_strlen(const char* str); // 393
					CUtlString::Length(); // 161
					CUtlString::Get(); // 161
					CUtlString::operator=(
							const CUtlString& src);  // 650
					CUtlString::Get(); // 654
					HashStringFastCaseless(const char* pszKey); // 96
					CHash<true>::operator(
							const Entry_t& entry);  // 239
					{
						int bucketCount; // 249
						Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<Cha this); // 249
					}
					operator[](const CUtlMemory<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<Channel this,
							int i);  // 595
					operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<Cha this,
							int i);  // 254
					Count(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElement this); // 255
					CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::operator[](
							int i);  // 609
					Element(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElement this,
						int i);  // 258
					CCompare<true>::operator(
							const Entry_t& entry1,
							const Entry_t& entry2);  // 258
					DoFind(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
						const Entry_t& src,
						unsigned int* pBucket,
						int* pIndex);  // 278
					{
					}
					{
					}
					BuildHandle(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
							int ndxBucket,
							int ndxKeyData);  // 280
					Find(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
						const Entry_t& src);  // 330
					CUtlHashDict<ChannelElementMap_t, true, true>::Find(
						const char* pName);  // 654
					GetBucketIndex(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
							UtlHashHandle_t handle);  // 403
					operator[](const CUtlMemory<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElemen this,
							int i);  // 588
					operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelEl this,
							int i);  // 406
					CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::operator[](
							int i);  // 602
					Element(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this,
						int i);  // 406
					operator[](const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo this,
							UtlHashHandle_t handle);  // 127
					CUtlHashDict<ChannelElementMap_t, true, true>::Element(
						UtlHashHandle_t handle);  // 657
					CUtlString::Get(); // 99
					CUtlString::String(); // 686
					operator[](const CUtlMemory<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElemen this,
							int i);  // 588
					operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelEl this,
							int i);  // 406
					CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::operator[](
							int i);  // 602
					Element(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this,
						int i);  // 406
					operator[](const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo this,
							UtlHashHandle_t handle);  // 127
					CUtlHashDict<ChannelElementMap_t, true, true>::Element(
						UtlHashHandle_t handle);  // 686
					CUtlString::~CUtlString(); // 700
				}
				CUtlString::CUtlString(); // 644
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
						int i);  // 645
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 645
				CUtlString::Get(); // 441
				CUtlString::operator char const*(); // 647
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 647
				CUtlString::Get(); // 99
				CUtlString::String(); // 704
				CUtlMemory<int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 708
				CUtlMemory<int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 708
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 712
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
						int i);  // 714
				CUtlMemory<int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 714
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
						int i);  // 714
				CUtlString::~CUtlString(); // 716
			}
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 641
		}
		CUtlMemory<CAnimDataChannelDesc, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::operator[](
				int i);  // 636
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 638
		CUtlMemory<CAnimDataChannel, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
				int i);  // 639
	}
	CUtlMemory<CAnimDecodeSwizzle, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimDecodeSwizzle, CUtlMemory<CAnimDecodeSwizzle, int> >::operator[](
			int i);  // 523
	CUtlVectorBase<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::Count(); // 528
	CUtlMemory<const CAnimationGroupResource::operator[](
			int i);  // 588
	CUtlVectorBase<const CAnimationGroupResource::operator[](
			int i);  // 539
	CUtlString::Get(); // 242
	CAnimationGroupResource::GetName(); // 539
	CUtlVectorBase<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::Count(); // 543
	operator&(ModelFlags_t a,
			ModelFlags_t b);  // 628
	CUtlVectorBase<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::Count(); // 634
} /* size: 0, variables: 6, inline expansions: 10 (126 bytes) */

// <00CD8B8F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:726
// variables: 28
// function calls: 158
void CAnimContainer_Imp::LinkDataChannelsToMasterSkeleton(const CModel* pModel)
{
	ChannelElementMap_t tmp; // 732
	bool bShowWarnings; // 744
	{
		int i; // 736
		CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::Count(); // 736
		CUtlMemory<ChannelElementMap_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
				int i);  // 738
		CUtlMemory<ChannelElementMap_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
				int i);  // 739
		CUtlMemory<ChannelElementMap_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
				int i);  // 740
	}
	{
		int nBone; // 750
		{
			CUtlString sPositionName; // 753
			UtlHashHandle_t handle; // 758
			CUtlString sQuatName; // 776
			CUtlString sScaleName; // 799
			{
				CAnimDataChannel* pChannel; // 763
				{
					int nBytes; // 767
					memset(void* __dest,
						int __ch,
						size_t __len);  // 769
				}
				GetBucketIndex(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
						UtlHashHandle_t handle);  // 403
				operator[](const CUtlMemory<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElemen this,
						int i);  // 588
				operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelEl this,
						int i);  // 406
				CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this,
					int i);  // 406
				operator[](const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo this,
						UtlHashHandle_t handle);  // 127
				CUtlHashDict<ChannelElementMap_t, true, true>::Element(
					UtlHashHandle_t handle);  // 761
				CUtlMemory<ChannelElementMap_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
						int i);  // 761
				CUtlMemory<ChannelElementMap_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
						int i);  // 763
				CUtlMemory<CAnimDataChannel, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
						int i);  // 763
				CUtlMemory<ChannelElementMap_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
						int i);  // 771
				Vector::operator=(
						const Vector& vOther);  // 771
			}
			{
				CAnimDataChannel* pChannel; // 785
				{
					int nBytes; // 790
					memset(void* __dest,
						int __ch,
						size_t __len);  // 792
				}
				GetBucketIndex(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
						UtlHashHandle_t handle);  // 403
				operator[](const CUtlMemory<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElemen this,
						int i);  // 588
				operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelEl this,
						int i);  // 406
				CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this,
					int i);  // 406
				operator[](const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo this,
						UtlHashHandle_t handle);  // 127
				CUtlHashDict<ChannelElementMap_t, true, true>::Element(
					UtlHashHandle_t handle);  // 783
				CUtlMemory<ChannelElementMap_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
						int i);  // 783
				CUtlMemory<ChannelElementMap_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
						int i);  // 785
				CUtlMemory<CAnimDataChannel, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
						int i);  // 785
				CUtlMemory<ChannelElementMap_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
						int i);  // 794
			}
			{
				CAnimDataChannel* pChannel; // 808
				{
					int nBytes; // 812
					memset(void* __dest,
						int __ch,
						size_t __len);  // 814
				}
				GetBucketIndex(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
						UtlHashHandle_t handle);  // 403
				operator[](const CUtlMemory<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElemen this,
						int i);  // 588
				operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelEl this,
						int i);  // 406
				CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this,
					int i);  // 406
				operator[](const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo this,
						UtlHashHandle_t handle);  // 127
				CUtlHashDict<ChannelElementMap_t, true, true>::Element(
					UtlHashHandle_t handle);  // 806
				CUtlMemory<ChannelElementMap_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
						int i);  // 806
				CUtlMemory<ChannelElementMap_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
						int i);  // 808
				CUtlMemory<CAnimDataChannel, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
						int i);  // 808
				CUtlMemory<ChannelElementMap_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
						int i);  // 816
			}
			CUtlString::CUtlString(); // 753
			CUtlString::operator=(
					const char* src);  // 754
			CUtlString::Get(); // 758
			HashStringFastCaseless(const char* pszKey); // 96
			CHash<true>::operator(
					const Entry_t& entry);  // 239
			{
				int bucketCount; // 249
				Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<Cha this); // 249
			}
			operator[](const CUtlMemory<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<Channel this,
					int i);  // 595
			operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<Cha this,
					int i);  // 254
			Count(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElement this); // 255
			CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::operator[](
					int i);  // 609
			Element(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElement this,
				int i);  // 258
			CCompare<true>::operator(
					const Entry_t& entry1,
					const Entry_t& entry2);  // 258
			DoFind(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
				const Entry_t& src,
				unsigned int* pBucket,
				int* pIndex);  // 278
			{
			}
			{
			}
			BuildHandle(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
					int ndxBucket,
					int ndxKeyData);  // 280
			Find(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
				const Entry_t& src);  // 330
			CUtlHashDict<ChannelElementMap_t, true, true>::Find(
				const char* pName);  // 758
			CUtlString::CUtlString(); // 776
			CUtlString::operator=(
					const char* src);  // 777
			CUtlString::Get(); // 780
			HashStringFastCaseless(const char* pszKey); // 96
			CHash<true>::operator(
					const Entry_t& entry);  // 239
			{
				int bucketCount; // 249
				Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<Cha this); // 249
			}
			operator[](const CUtlMemory<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<Channel this,
					int i);  // 595
			operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<Cha this,
					int i);  // 254
			Count(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElement this); // 255
			CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::operator[](
					int i);  // 609
			Element(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElement this,
				int i);  // 258
			CCompare<true>::operator(
					const Entry_t& entry1,
					const Entry_t& entry2);  // 258
			DoFind(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
				const Entry_t& src,
				unsigned int* pBucket,
				int* pIndex);  // 278
			{
			}
			{
			}
			BuildHandle(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
					int ndxBucket,
					int ndxKeyData);  // 280
			Find(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
				const Entry_t& src);  // 330
			CUtlHashDict<ChannelElementMap_t, true, true>::Find(
				const char* pName);  // 780
			CUtlString::CUtlString(); // 799
			CUtlString::operator=(
					const char* src);  // 800
			CUtlString::Get(); // 803
			HashStringFastCaseless(const char* pszKey); // 96
			CHash<true>::operator(
					const Entry_t& entry);  // 239
			{
				int bucketCount; // 249
				Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<Cha this); // 249
			}
			operator[](const CUtlMemory<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<Channel this,
					int i);  // 595
			operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<Cha this,
					int i);  // 254
			Count(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElement this); // 255
			CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::operator[](
					int i);  // 609
			Element(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElement this,
				int i);  // 258
			CCompare<true>::operator(
					const Entry_t& entry1,
					const Entry_t& entry2);  // 258
			DoFind(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
				const Entry_t& src,
				unsigned int* pBucket,
				int* pIndex);  // 278
			{
			}
			{
			}
			BuildHandle(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
					int ndxBucket,
					int ndxKeyData);  // 280
			Find(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
				const Entry_t& src);  // 330
			CUtlHashDict<ChannelElementMap_t, true, true>::Find(
				const char* pName);  // 803
			CUtlString::~CUtlString(); // 819
			CUtlString::~CUtlString(); // 819
			CUtlString::~CUtlString(); // 819
		}
	}
	{
		int nKey; // 822
		{
			CAnimDecodeSwizzle* pSwizzle; // 824
			{
				int nSrcChannel; // 829
				{
					int nDstChannel; // 831
					const CAnimDataChannelDesc* pSrcChannel; // 833
					CAnimDataChannel* pDstChannel; // 834
					CUtlVector<bool, CUtlMemory<bool, int> > bUsed; // 836
					{
						int nSrcIndex; // 840
						{
							int nDstIndex; // 842
							CUtlMemory<int, int>::operator[](
									int i);  // 595
							CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
									int i);  // 842
							CUtlMemory<int, int>::operator[](
									int i);  // 588
							CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
									int i);  // 842
							CUtlMemory<bool, int>::operator[](
									int i);  // 588
							CUtlVectorBase<bool, CUtlMemory<bool, int> >::operator[](
									int i);  // 843
						}
						CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 840
					}
					{
						int nDstIndex; // 847
						CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
								int i);  // 588
						CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::operator[](
								int i);  // 851
						CUtlMemory<int, int>::NumAllocated(); // 1196
						CUtlMemory<int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
							int i);  // 1201
						CopyConstruct<int>(int* pMemory,
									const int& src);  // 1201
						CUtlMemory<int, int>::Base(); // 112
						CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
						CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
						CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
								int num);  // 1198
						CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
								const int& src);  // 851
					}
					CUtlMemory<int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
							int i);  // 831
					CUtlMemory<CAnimDataChannelDesc, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::operator[](
							int i);  // 833
					CUtlMemory<CAnimDataChannel, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
							int i);  // 834
					CUtlMemory<bool, int>::ValidateGrowSize(); // 475
					CUtlMemory<bool, int>::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 527
					CUtlVectorBase<bool, CUtlMemory<bool, int> >::ResetDbgInfo(); // 530
					CUtlVectorBase<bool, CUtlMemory<bool, int> >::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 418
					CUtlVector<bool, CUtlMemory<bool, int> >::CUtlVector(); // 836
					CUtlMemory<bool, int>::Grow(
						int num);  // 806
					CUtlVectorBase<bool, CUtlMemory<bool, int> >::GrowMemory(
							int num);  // 784
					CUtlVectorBase<bool, CUtlMemory<bool, int> >::GrowVector(
							int num);  // 1445
					CUtlVectorBase<bool, CUtlMemory<bool, int> >::InsertMultipleBefore(
								int elem,
								int num);  // 1437
					CUtlVectorBase<bool, CUtlMemory<bool, int> >::InsertMultipleBefore(
								int elem,
								int num);  // 1294
					CUtlVectorBase<bool, CUtlMemory<bool, int> >::AddMultipleToTail(
								int num);  // 1319
					CUtlVectorBase<bool, CUtlMemory<bool, int> >::SetCount(
						int count);  // 837
					memset(void* __dest,
						int __ch,
						size_t __len);  // 838
					CUtlMemory<bool, int>::Purge(); // 903
					CUtlMemory<bool, int>::Purge(); // 1799
					CUtlVectorBase<bool, CUtlMemory<bool, int> >::Purge(); // 560
					ValidateAlignment<bool>(void); // 508
					CUtlMemory<bool, int>::Purge(); // 510
					CUtlMemory<bool, int>::~CUtlMemory(); // 562
					CUtlVectorBase<bool, CUtlMemory<bool, int> >::~CUtlVectorBase(); // 410
					CUtlVector<bool, CUtlMemory<bool, int> >::~CUtlVector(); // 856
				}
				CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 829
			}
			CUtlMemory<CAnimDecodeSwizzle, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimDecodeSwizzle, CUtlMemory<CAnimDecodeSwizzle, int> >::operator[](
					int i);  // 824
			CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::Count(); // 826
		}
		CUtlVectorBase<CAnimDecodeSwizzle, CUtlMemory<CAnimDecodeSwizzle, int> >::Count(); // 822
	}
	{
		int i; // 859
		CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::Count(); // 859
	}
} /* size: 0, variables: 2 */

// <00D331F4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:876
// variables: 6
// function calls: 32
void CAnimContainer_Imp::LinkDataChannelsToMasterMorphControllers(const CModel* pModel)
{
	ChannelElementMap_t tmp; // 886
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::RemoveAll(); // 880
	{
		int i; // 892
		CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::Count(); // 892
		CUtlMemory<ChannelElementMap_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
				int i);  // 894
	}
	{
		LocalFlexController_t nMorph; // 897
		CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::Count(); // 897
		{
			CUtlString sUniqueName; // 899
			UtlHashHandle_t handle; // 904
			CUtlString::CUtlString(); // 899
			CUtlString::operator=(
					const char* src);  // 901
			CUtlString::Get(); // 904
			HashStringFastCaseless(const char* pszKey); // 96
			CHash<true>::operator(
					const Entry_t& entry);  // 239
			{
				int bucketCount; // 249
				Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<Cha this); // 249
			}
			operator[](const CUtlMemory<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<Channel this,
					int i);  // 595
			operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<Cha this,
					int i);  // 254
			Count(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElement this); // 255
			CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::operator[](
					int i);  // 609
			Element(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElement this,
				int i);  // 258
			CCompare<true>::operator(
					const Entry_t& entry1,
					const Entry_t& entry2);  // 258
			DoFind(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
				const Entry_t& src,
				unsigned int* pBucket,
				int* pIndex);  // 278
			{
			}
			{
			}
			BuildHandle(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
					int ndxBucket,
					int ndxKeyData);  // 280
			Find(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
				const Entry_t& src);  // 330
			CUtlHashDict<ChannelElementMap_t, true, true>::Find(
				const char* pName);  // 904
			GetBucketIndex(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
					UtlHashHandle_t handle);  // 403
			operator[](const CUtlMemory<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElemen this,
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelEl this,
					int i);  // 406
			CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this,
				int i);  // 406
			operator[](const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo this,
					UtlHashHandle_t handle);  // 127
			CUtlHashDict<ChannelElementMap_t, true, true>::Element(
				UtlHashHandle_t handle);  // 907
			CUtlMemory<ChannelElementMap_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
					int i);  // 907
			CUtlString::~CUtlString(); // 909
		}
	}
	CAnimContainer_Imp::LinkDataChannelsToMasterMorphControllers(
						const CModel* pModel);  // 876
} /* size: 0, variables: 1, inline expansions: 2 (671 bytes) */

// <00CD8B20> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:876
// variables: 5
void CAnimContainer_Imp::LinkDataChannelsToMasterMorphControllers(const CModel* pModel)
{
	ChannelElementMap_t tmp; // 886
	{
		int i; // 892
	}
	{
		LocalFlexController_t nMorph; // 897
		{
			CUtlString sUniqueName; // 899
			UtlHashHandle_t handle; // 904
		}
	}
} /* size: 0, variables: 1 */

// <00CD7C70> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:916
// variables: 9
// function calls: 52
void CAnimContainer_Imp::AppendUserData(const CAnimationGroup* pAnimGroup)
{
	int nCount; // 918
	const CAnimKeyData* pAnimKey; // 920
	{
		int nSrcIndex; // 922
		{
			const char* s1; // 924
			UtlHashHandle_t handle; // 925
			{
				UserDataElement_t tmp; // 928
				HashStringFastCaseless(const char* pszKey); // 96
				CHash<true>::operator(
						const Entry_t& entry);  // 239
				{
					int bucketCount; // 249
					Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<User this); // 249
				}
				operator[](const CUtlMemory<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserData this,
						int i);  // 595
				operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<User this,
						int i);  // 254
				Count(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement this); // 255
				CUtlMemory<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, int>::operator[](
						int i);  // 609
				Element(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement this,
					int i);  // 258
				CCompare<true>::operator(
						const Entry_t& entry1,
						const Entry_t& entry2);  // 258
				DoFind(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this,
					const Entry_t& src,
					unsigned int* pBucket,
					int* pIndex);  // 312
				{
				}
				{
				}
				BuildHandle(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this,
						int ndxBucket,
						int ndxKeyData);  // 315
				operator[](const CUtlMemory<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElemen this,
						int i);  // 588
				operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataEl this,
						int i);  // 319
				CUtlMemory<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, int>::NumAllocated(); // 1196
				CUtlMemory<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, tr this,
					int i);  // 1201
				CopyConstruct<CUtlHashDict<UserDataElement_t, true, false>::Entry_t>(Entry_t* pMemory,
													const Entry_t& src);  // 1201
				CUtlMemory<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, int>::Base(); // 112
				Base(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, tr this); // 368
				ResetDbgInfo(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, tr this); // 824
				GrowMemory(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, tr this,
						int num);  // 1198
				AddToTail(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, tr this,
						const Entry_t& src);  // 319
				{
				}
				{
				}
				BuildHandle(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this,
						int ndxBucket,
						int ndxKeyData);  // 321
				Insert(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CComp this,
					const Entry_t& src,
					bool* pDidInsert);  // 286
				CUtlHashDict<UserDataElement_t, true, false>::Insert(
					const char* pName,
					const UserDataElement_t& element);  // 931
				CUtlMemory<CAnimUser, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CAnimUser, CUtlMemory<CAnimUser, int> >::operator[](
						int i);  // 930
			}
			CUtlMemory<CAnimUser, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimUser, CUtlMemory<CAnimUser, int> >::operator[](
					int i);  // 924
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 924
			HashStringFastCaseless(const char* pszKey); // 96
			CHash<true>::operator(
					const Entry_t& entry);  // 239
			{
				int bucketCount; // 249
				Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<User this); // 249
			}
			operator[](const CUtlMemory<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserData this,
					int i);  // 595
			operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<User this,
					int i);  // 254
			Count(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement this); // 255
			CUtlMemory<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, int>::operator[](
					int i);  // 609
			Element(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement this,
				int i);  // 258
			CCompare<true>::operator(
					const Entry_t& entry1,
					const Entry_t& entry2);  // 258
			DoFind(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this,
				const Entry_t& src,
				unsigned int* pBucket,
				int* pIndex);  // 278
			{
			}
			{
			}
			BuildHandle(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this,
					int ndxBucket,
					int ndxKeyData);  // 280
			Find(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this,
				const Entry_t& src);  // 330
			CUtlHashDict<UserDataElement_t, true, false>::Find(
				const char* pName);  // 925
		}
		CUtlVectorBase<CAnimUser, CUtlMemory<CAnimUser, int> >::Count(); // 922
	}
	Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<User this); // 178
	{
		int ndxBucket; // 179
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserData this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<User this,
				int i);  // 181
		Count(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement this); // 181
	}
	Count(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this); // 163
	{
	}
	CUtlHashDict<UserDataElement_t, true, false>::CountElements(); // 918
} /* size: 0, variables: 2, inline expansions: 3 (180 bytes) */

// <00CD6719> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:962
// variables: 9
// function calls: 81
void CAnimContainer_Imp::LinkDataChannelsToUserData(const CModel* pModel)
{
	byte* pSampleData; // 970
	byte* pMovingData; // 971
	{
		UtlHashHandle_t dataHandle; // 973
		{
			UserDataElement_t element; // 975
			CUtlString sUniqueName; // 977
			UtlHashHandle_t elementHandle; // 981
			{
				ChannelElementMap_t srcMap; // 984
				GetBucketIndex(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
						UtlHashHandle_t handle);  // 403
				operator[](const CUtlMemory<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElemen this,
						int i);  // 588
				operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelEl this,
						int i);  // 406
				CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this,
					int i);  // 406
				operator[](const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo this,
						UtlHashHandle_t handle);  // 127
				CUtlHashDict<ChannelElementMap_t, true, true>::Element(
					UtlHashHandle_t handle);  // 985
				CUtlMemory<UserDataElementMap_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<UserDataElementMap_t, CUtlMemory<UserDataElementMap_t, int> >::operator[](
						int i);  // 987
				FIELD_TYPE_ALIGN(void* pData,
						fieldtype_t nType);  // 991
				CUtlMemory<UserDataElementMap_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<UserDataElementMap_t, CUtlMemory<UserDataElementMap_t, int> >::operator[](
						int i);  // 988
				CUtlMemory<CAnimDataChannel, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
						int i);  // 993
				CUtlMemory<UserDataElementMap_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<UserDataElementMap_t, CUtlMemory<UserDataElementMap_t, int> >::operator[](
						int i);  // 992
			}
			GetBucketIndex(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this,
					UtlHashHandle_t handle);  // 403
			operator[](const CUtlMemory<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElemen this,
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataEl this,
					int i);  // 406
			CUtlMemory<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, tr this,
				int i);  // 406
			operator[](const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CComp this,
					UtlHashHandle_t handle);  // 127
			CUtlHashDict<UserDataElement_t, true, false>::Element(
				UtlHashHandle_t handle);  // 975
			CUtlString::CUtlString(); // 977
			CUtlString::operator=(
					const char* src);  // 978
			CUtlHashDict<UserDataElement_t, true, false>::GetElementName(
					UtlHashHandle_t handle);  // 978
			CUtlString::Get(); // 981
			HashStringFastCaseless(const char* pszKey); // 96
			CHash<true>::operator(
					const Entry_t& entry);  // 239
			{
				int bucketCount; // 249
				Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<Cha this); // 249
			}
			operator[](const CUtlMemory<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<Channel this,
					int i);  // 595
			operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<Cha this,
					int i);  // 254
			Count(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElement this); // 255
			CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::operator[](
					int i);  // 609
			Element(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElement this,
				int i);  // 258
			CCompare<true>::operator(
					const Entry_t& entry1,
					const Entry_t& entry2);  // 258
			DoFind(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
				const Entry_t& src,
				unsigned int* pBucket,
				int* pIndex);  // 278
			{
			}
			{
			}
			BuildHandle(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
					int ndxBucket,
					int ndxKeyData);  // 280
			Find(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
				const Entry_t& src);  // 330
			CUtlHashDict<ChannelElementMap_t, true, true>::Find(
				const char* pName);  // 981
			CUtlString::~CUtlString(); // 995
		}
		Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<User this); // 437
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserData this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<User this,
				int i);  // 440
		Count(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement this); // 440
		{
		}
		BuildHandle(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this,
				int ndxBucket,
				int ndxKeyData);  // 441
		GetNextHandle(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this,
				UtlHashHandle_t handle);  // 426
		GetFirstHandle(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this); // 342
		CUtlHashDict<UserDataElement_t, true, false>::First(); // 973
		Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<User this); // 437
		GetBucketIndex(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this,
				UtlHashHandle_t handle);  // 434
		GetKeyDataIndex(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this,
				UtlHashHandle_t handle);  // 435
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserData this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<User this,
				int i);  // 440
		Count(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement this); // 440
		{
		}
		BuildHandle(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this,
				int ndxBucket,
				int ndxKeyData);  // 441
		GetNextHandle(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this,
				UtlHashHandle_t handle);  // 348
		CUtlHashDict<UserDataElement_t, true, false>::Next(
			UtlHashHandle_t handle);  // 973
	}
	Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<User this); // 178
	{
		int ndxBucket; // 179
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserData this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<User this,
				int i);  // 181
		Count(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement this); // 181
	}
	Count(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this); // 163
	{
	}
	CUtlHashDict<UserDataElement_t, true, false>::CountElements(); // 967
	CUtlVectorBase<UserDataElementMap_t, CUtlMemory<UserDataElementMap_t, int> >::RemoveAll(); // 964
	CUtlVectorBase<UserDataElementMap_t, CUtlMemory<UserDataElementMap_t, int> >::Count(); // 1069
	CUtlMemory<UserDataElementMap_t, int>::NumAllocated(); // 782
	CUtlMemory<UserDataElementMap_t, int>::IsGrowable(); // 823
	CUtlMemory<UserDataElementMap_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<UserDataElementMap_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<UserDataElementMap_t, int>::Grow(
		int num);  // 806
	CUtlMemory<UserDataElementMap_t, int>::Base(); // 112
	CUtlVectorBase<UserDataElementMap_t, CUtlMemory<UserDataElementMap_t, int> >::Base(); // 368
	CUtlVectorBase<UserDataElementMap_t, CUtlMemory<UserDataElementMap_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<UserDataElementMap_t, CUtlMemory<UserDataElementMap_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<UserDataElementMap_t, CUtlMemory<UserDataElementMap_t, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<UserDataElementMap_t, CUtlMemory<UserDataElementMap_t, int> >::ShiftElementsRight(
				int elem,
				int num);  // 1446
	CUtlVectorBase<UserDataElementMap_t, CUtlMemory<UserDataElementMap_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<UserDataElementMap_t, CUtlMemory<UserDataElementMap_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<UserDataElementMap_t, CUtlMemory<UserDataElementMap_t, int> >::AddMultipleToTail(
				int num);  // 1071
	CUtlVectorBase<UserDataElementMap_t, CUtlMemory<UserDataElementMap_t, int> >::EnsureCount(
			int num);  // 967
} /* size: 0, variables: 2, inline expansions: 20 (1707 bytes) */

// <00CD6610> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:1006
// variables: 13
bool ValidateAnimResourceData(const CModel* pModel, const CAnimationGroupResource* pAnimGroupResource, const CAnimationResource* pAnimResource, const CAnimData* pAnimData, const int nMasterElementCount, CUtlHashtable<char const*, empty_t, DefaultHashFunctor<char const*>, DefaultEqualFunctor<char const*>, undefined_t, CUtlM pWarnedSet)
{
	{
		const CAnimFrameSegment& animFrameSegment; // 1014
		const CUtlVector<CAnimFrameSegment, CUtlMemory<CAnimFrameSegment, int> >& __for_range; // 518
		const_iterator __for_begin; // 62607
		const_iterator __for_end; // 62607
		{
			const DecodeContainer_t* pDecodeContainer; // 1016
			const uint16  nElementCount; // 1017
			const uint16* pElements; // 1018
			{
				uint16 nElementIndex; // 1020
				{
					const uint16  nElement; // 1022
					{
						const CAnimDesc& animDesc; // 1032
						const CUtlVector<CAnimDesc, CUtlMemory<CAnimDesc, int> >& __for_range; // 54237
						const_iterator __for_begin; // 50790
						const_iterator __for_end; // 50790
					}
				}
			}
		}
	}
} /* size: 0 */

// <00CD49F5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:1049
// variables: 33
// function calls: 115
void CAnimContainer_Imp::AppendGroupAnimations(int nGroup, const CAnimationGroup* pAnimGroup, int nSwizzleIndex)
{
	const bool  bValidateAnimResourceData; // 1051
	CUtlHashtable<char const*, empty_t, DefaultHashFunctor<char const*>, DefaultEqualFunctor<char const*>, undefined_t, CUtlMemory<CUtlHashtableEntry<char const*, empty_t>, int> > warnedSet; // 1053
	const CAnimDecodeSwizzle* pSwizzle; // 1055
	const int  nMasterElementCount; // 1056
	const CAnimationGroupResource* pAnimGroupResource; // 1058
	const int  nAnimResourceCount; // 1061
	{
		int nAnimResource; // 1062
		{
			const CAnimationResource* pAnimResource; // 1064
			const CAnimData* pAnimData; // 1068
			const int  nAnimCount; // 1076
			{
				int nLocalAnimDesc; // 1077
				{
					const CAnimDesc* pAnimDesc; // 1079
					const char* pszAnimName; // 1083
					const UtlHashHandle_t  hAnim; // 1085
					{
						AnimInstanceMap_t* pAnimInstanceMap; // 1091
						CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::Count(); // 1089
						CUtlMemory<AnimInstanceMap_t, int>::NumAllocated(); // 1143
						CUtlMemory<AnimInstanceMap_t, int>::Base(); // 112
						CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::Base(); // 368
						CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::ResetDbgInfo(); // 824
						CUtlMemory<AnimInstanceMap_t, int>::IsGrowable(); // 823
						CUtlMemory<AnimInstanceMap_t, int>::IsExternallyAllocated(); // 859
						CUtlMemory<AnimInstanceMap_t, int>::IsExternallyAllocated(); // 861
						CUtlMemory<AnimInstanceMap_t, int>::Grow(
							int num);  // 806
						CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::GrowMemory(
								int num);  // 1145
						CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::AddToTail(); // 1156
						CUtlMemory<AnimInstanceMap_t, int>::operator[](
								int i);  // 602
						CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::Element(
							int i);  // 1156
						CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::AddToTailGetPtr(); // 1091
					}
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 358
					CAnimDesc::GetName(); // 1083
					HashStringFastCaseless(const char* pszKey); // 96
					CHash<true>::operator(
							const Entry_t& entry);  // 239
					{
						int bucketCount; // 249
						Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this); // 249
					}
					operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, this,
							int i);  // 595
					operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this,
							int i);  // 254
					Count(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false> this); // 255
					CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::operator[](
							int i);  // 609
					Element(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false> this,
						int i);  // 258
					CCompare<true>::operator(
							const Entry_t& entry1,
							const Entry_t& entry2);  // 258
					DoFind(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
						const Entry_t& src,
						unsigned int* pBucket,
						int* pIndex);  // 278
					{
					}
					{
					}
					BuildHandle(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
							int ndxBucket,
							int ndxKeyData);  // 280
					Find(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
						const Entry_t& src);  // 330
					CUtlHashDict<short int, true, false>::Find(
						const char* pName);  // 1085
					GetBucketIndex(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
							UtlHashHandle_t handle);  // 155
					GetKeyDataIndex(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
							UtlHashHandle_t handle);  // 156
					Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this); // 162
					operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, this,
							int i);  // 595
					operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this,
							int i);  // 164
					Count(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false> this); // 164
					IsValidHandle(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
							UtlHashHandle_t handle);  // 174
					CUtlHashDict<short int, true, false>::IsValidHandle(
							UtlHashHandle_t handle);  // 1087
					CUtlMemory<CAnimDesc, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::operator[](
							int i);  // 1079
				}
			}
			{
				const CAnimFrameSegment& animFrameSegment; // 1014
				const CUtlVector<CAnimFrameSegment, CUtlMemory<CAnimFrameSegment, int> >& __for_range; // 52624
				const_iterator __for_begin; // 52635
				const_iterator __for_end; // 52646
				{
					const DecodeContainer_t* pDecodeContainer; // 1016
					const uint16  nElementCount; // 1017
					const uint16* pElements; // 1018
					{
						uint16 nElementIndex; // 1020
						{
							const uint16  nElement; // 1022
							{
								const CAnimDesc& animDesc; // 1032
								const CUtlVector<CAnimDesc, CUtlMemory<CAnimDesc, int> >& __for_range; // 52739
								const_iterator __for_begin; // 52750
								const_iterator __for_end; // 52761
								CUtlMemory<CAnimDesc, int>::Base(); // 113
								CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::Base(); // 103
								CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::begin(); // 1032
								CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::Count(); // 105
								CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::end(); // 1032
								CUtlString::Get(); // 481
								CAnimationResource::GetName(); // 1034
								CBufferString::ReadBuffer(); // 1374
								CBufferString::ReadBuffer(); // 771
								CBufferString::Get(); // 358
								CAnimDesc::GetName(); // 1034
								Color::SetColor(
									int _r,
									int _g,
									int _b,
									int _a);  // 50
								Color::Color(
									int _r,
									int _g,
									int _b,
									int _a);  // 1034
							}
							{
								uint32 c; // 354
							}
							StringHashFunctor::operator(
									const char* s);  // 218
							CUtlHashtable<char const::Find(
								KeyArg_t k);  // 235
							CUtlHashtable<char const::HasElement(
									KeyArg_t k);  // 1026
							CUtlString::Get(); // 242
							CAnimationGroupResource::GetName(); // 1026
							CUtlString::Get(); // 242
							CAnimationGroupResource::GetName(); // 1029
							{
								uint32 c; // 354
							}
							StringHashFunctor::operator(
									const char* s);  // 240
							CUtlMemory<CUtlHashtableEntry<char const::operator[](
									int i);  // 706
							CUtlKeyValuePair<char const::CUtlKeyValuePair<char const*>(
											const char* const& k);  // 1514
							Construct<CUtlKeyValuePair<char const*, empty_t>, char const*&>(CUtlKeyValuePair<char const*, empty_t>* pMemory); // 706
							CUtlHashtable<char const::DoInsert<char const*>(
										const char* k,
										unsigned int h,
										bool* pDidInsert);  // 695
							CUtlHashtable<char const::DoInsert<char const*>(
										const char* k,
										unsigned int h,
										bool* pDidInsert);  // 240
							CUtlHashtable<char const::Insert(
								KeyArg_t k);  // 1029
							CUtlString::Get(); // 242
							CAnimationGroupResource::GetName(); // 1028
							Color::SetColor(
								int _r,
								int _g,
								int _b,
								int _a);  // 50
							Color::Color(
								int _r,
								int _g,
								int _b,
								int _a);  // 1028
						}
					}
					CUtlMemory<unsigned char, int>::Base(); // 102
					CUtlBinaryBlock::Get(); // 262
					CAnimFrameSegment::pContainer(); // 1016
				}
				CUtlMemory<CAnimFrameSegment, int>::Base(); // 113
				CUtlVectorBase<CAnimFrameSegment, CUtlMemory<CAnimFrameSegment, int> >::Base(); // 103
				CUtlVectorBase<CAnimFrameSegment, CUtlMemory<CAnimFrameSegment, int> >::begin(); // 1014
				CUtlVectorBase<CAnimFrameSegment, CUtlMemory<CAnimFrameSegment, int> >::Count(); // 105
				CUtlVectorBase<CAnimFrameSegment, CUtlMemory<CAnimFrameSegment, int> >::end(); // 1014
			}
			ValidateAnimResourceData(const CModel* pModel,
						const CAnimationGroupResource* pAnimGroupResource,
						const CAnimationResource* pAnimResource,
						const CAnimData* pAnimData,
						const int  nMasterElementCount,
						CUtlHashtable<char const*, empty_t, DefaultHashFunctor<char const*>, DefaultEqualFunctor<char const*>, undefined_t, CUtlM pWarnedSet);  // 1072
			CSmartPtr<CAnimationGroup, CRefCountAccessor>::operator->(); // 239
			CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
					int i);  // 239
			__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 472
			unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::get(); // 239
			CAnimationGroupResource::pLocalHAnim(
					int nLocalHAnim);  // 1064
			CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 464
			{
			}
			CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 465
			CAnimationResource::GetData(); // 1068
			CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::Count(); // 1076
		}
	}
	CUtlMemory<CUtlHashtableEntry<char const::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<char const::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<char const::Init(); // 178
	CUtlHashtable<char const::CUtlHashtable(
			int minimumSize);  // 1053
	Count(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std: this); // 1061
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 1051
	CUtlMemory<CAnimDecodeSwizzle, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimDecodeSwizzle, CUtlMemory<CAnimDecodeSwizzle, int> >::operator[](
			int i);  // 1055
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1056
	CUtlMemory<const CAnimationGroupResource::operator[](
			int i);  // 588
	CUtlVectorBase<const CAnimationGroupResource::operator[](
			int i);  // 1058
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<char const::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<char const::Count(); // 897
			CUtlHashtableEntry<char const::IsValid(); // 899
			CUtlHashtableEntry<char const::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<char const*, empty_t> >(CUtlKeyValuePair<char const*, empty_t>* pMemory); // 902
		}
	}
	CUtlHashtable<char const::RemoveAll(); // 188
	CUtlMemory<CUtlHashtableEntry<char const::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<char const::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<char const::Purge(); // 510
	ValidateAlignment<CUtlHashtableEntry<char const*, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<char const::~CUtlMemory(); // 188
	CUtlHashtable<char const::~CUtlHashtable(); // 1099
} /* size: 0, variables: 6, inline expansions: 19 (426 bytes) */

// <00CD3E92> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:1103
// variables: 10
// function calls: 47
void CAnimContainer_Imp::LinkAnimationGroupBonesToMasterSkeleton(int nGroup, const CAnimationGroup* pAnimGroup)
{
	int nIndex; // 1105
	const char   __FUNCTION__; // 22683
	AnimationGroupImp_t* pGroupImp; // 1107
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1106
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1109
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1111
	}
	{
		int i; // 1117
		{
			int j; // 1120
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 1120
			CUtlMemory<CAnimBone, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::operator[](
					int i);  // 1120
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1123
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1124
		}
		CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::Count(); // 1117
	}
	CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int>::NumAllocated(); // 1143
	CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CAnimContainer_Imp::AnimationGroupImp_t, CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int> > this); // 368
	ResetDbgInfo(const CUtlVectorBase<CAnimContainer_Imp::AnimationGroupImp_t, CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int> > this); // 824
	CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int>::IsGrowable(); // 823
	CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int>::Grow(
		int num);  // 806
	GrowMemory(const CUtlVectorBase<CAnimContainer_Imp::AnimationGroupImp_t, CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int> >  this,
			int num);  // 1145
	CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CAnimContainer_Imp::AnimationGroupImp_t, CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int> >  this,
		int i);  // 1148
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 93
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 93
	AnimationGroupImp_t::AnimationGroupImp_t(); // 1479
	Construct<CAnimContainer_Imp::AnimationGroupImp_t>(AnimationGroupImp_t* pMemory); // 1148
	AddToTail(const CUtlVectorBase<CAnimContainer_Imp::AnimationGroupImp_t, CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int> > this); // 1105
	CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CAnimContainer_Imp::AnimationGroupImp_t, CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int> >  this,
			int i);  // 1107
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1109
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1111
	CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::Count(); // 1112
	{
		int i; // 1554
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1554
		CUtlMemory<int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
			int i);  // 1556
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::FillWithValue(
			const int& src);  // 1114
	{
		int i; // 1554
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1554
		CUtlMemory<int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
			int i);  // 1556
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::FillWithValue(
			const int& src);  // 1115
} /* size: 0, variables: 3, inline expansions: 31 (1313 bytes) */

// <00CCF50A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:1156
// variables: 31
// function calls: 323
void CAnimContainer_Imp::BuildLODs(const CModel* pModel)
{
	int nMaxLod; // 1160
	ElementRequestPattern_t* pPattern; // 1183
	const char   __FUNCTION__; // 21898
	{
		int nBone; // 1161
		{
			BoneFlags_t flag; // 1163
			operator|(BoneFlags_t a,
					BoneFlags_t b);  // 163
			operator|=(BoneFlags_t& a,
					BoneFlags_t b);  // 1165
			operator<<(BoneFlags_t a,
					int b);  // 1167
			operator&(BoneFlags_t a,
					BoneFlags_t b);  // 1167
			operator<<(BoneFlags_t a,
					int b);  // 1167
			operator&(BoneFlags_t a,
					BoneFlags_t b);  // 1167
		}
	}
	{
		int nLod; // 1195
		CUtlMemory<ElementRequestPattern_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Element(
			int i);  // 1148
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 1281
		CVarBitVecBase<short unsigned int, 32>::CVarBitVecBase(); // 1405
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll(); // 1413
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::CBitVecT(); // 1211
		CVarBitVecT<short unsigned int, 32>::CVarBitVecT(); // 1223
		CVarBitVec::CVarBitVec(); // 214
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 1281
		CVarBitVecBase<short unsigned int, 32>::CVarBitVecBase(); // 1405
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll(); // 1413
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::CBitVecT(); // 1211
		CVarBitVecT<short unsigned int, 32>::CVarBitVecT(); // 1223
		CVarBitVec::CVarBitVec(); // 214
		CUtlMemory<int, int>::ValidateGrowSize(); // 475
		CUtlMemory<int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 214
		ElementRequestPattern_t::ElementRequestPattern_t(); // 1479
		Construct<ElementRequestPattern_t>(ElementRequestPattern_t* pMemory); // 1148
		CUtlMemory<ElementRequestPattern_t, int>::NumAllocated(); // 1143
		CUtlMemory<ElementRequestPattern_t, int>::Base(); // 112
		CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Base(); // 368
		CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::AddToTail(); // 1156
		CUtlMemory<ElementRequestPattern_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Element(
			int i);  // 1156
		CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::AddToTailGetPtr(); // 1197
		operator<<(BoneFlags_t a,
				int b);  // 1198
		operator|(BoneFlags_t a,
				BoneFlags_t b);  // 1198
	}
	{
		int nPattern; // 1233
		{
			int nUsedBoneCount; // 1240
			bool bSetParents; // 1251
			{
				int nBone; // 1241
				operator&(BoneFlags_t a,
						BoneFlags_t b);  // 1243
				operator&(BoneFlags_t a,
						BoneFlags_t b);  // 1243
				CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
				{
				}
				CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
				Bitvec_Set(uint32* pBits,
						int nBitNum);  // 1480
				CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
					int bitNum);  // 1245
			}
			{
				int nBone; // 1255
				{
					int nParent; // 1259
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1262
					}
					CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
					{
					}
					CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
					BitVec_IsBitSet(const uint32* pBase,
							int nBitNum);  // 1471
					CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
						int bitNum);  // 1260
					operator&(BoneFlags_t a,
							BoneFlags_t b);  // 1262
					CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
					{
					}
					CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
					Bitvec_Set(uint32* pBits,
							int nBitNum);  // 1480
					CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
						int bitNum);  // 1263
				}
				CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
				{
				}
				CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
				BitVec_IsBitSet(const uint32* pBase,
						int nBitNum);  // 1471
				CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
					int bitNum);  // 1257
			}
			{
				int nBone; // 1277
				CUtlMemory<int, int>::NumAllocated(); // 1196
				CUtlMemory<int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
					int i);  // 1201
				CopyConstruct<int>(int* pMemory,
							const int& src);  // 1201
				CUtlMemory<int, int>::Base(); // 112
				CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
				CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
						const int& src);  // 1281
				CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1497
				{
				}
				CVarBitVecBase<short unsigned int, 32>::Base(); // 1498
				CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Clear(
					int bitNum);  // 1282
				CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
				{
				}
				CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
				BitVec_IsBitSet(const uint32* pBase,
						int nBitNum);  // 1471
				CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
					int bitNum);  // 1279
				operator&(BoneFlags_t a,
						BoneFlags_t b);  // 1284
				CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
				{
				}
				CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
				Bitvec_Set(uint32* pBits,
						int nBitNum);  // 1480
				CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
					int bitNum);  // 1286
			}
			CUtlMemory<ElementRequestPattern_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::operator[](
					int i);  // 1235
			CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1970
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1970
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 1970
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll(); // 1237
			CUtlMemory<int, int>::IsGrowable(); // 881
			CUtlMemory<int, int>::IsExternallyAllocated(); // 888
			CUtlMemory<int, int>::EnsureCapacity(
					int num);  // 1006
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 1024
			CUtlVectorBase<int, CUtlMemory<int, int> >::EnsureCapacity(
					int num);  // 1273
			CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1970
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1970
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 1970
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll(); // 1276
		}
		CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Count(); // 1233
	}
	{
		int nChannel; // 1292
		CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::Count(); // 1292
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveMultipleFromTail(
					int num);  // 1323
		CUtlMemory<unsigned char, int>::NumAllocated(); // 782
		CUtlMemory<unsigned char, int>::IsGrowable(); // 823
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 859
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 861
		CUtlMemory<unsigned char, int>::Grow(
			int num);  // 806
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowVector(
				int num);  // 1445
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::SetCount(
			int count);  // 1294
		CUtlMemory<CAnimDataChannel, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
				int i);  // 1295
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 1295
		CUtlMemory<unsigned char, int>::Base(); // 112
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 1295
		memset(void* __dest,
			int __ch,
			size_t __len);  // 1295
		CUtlMemory<CAnimDataChannel, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
				int i);  // 1294
	}
	{
		int nPattern; // 1299
		{
			uint8 requestMask; // 1301
			{
				int nBone; // 1304
				CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::Count(); // 1304
				CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
				{
				}
				CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
				BitVec_IsBitSet(const uint32* pBase,
						int nBitNum);  // 1471
				CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
					int bitNum);  // 1306
				CUtlMemory<ChannelElementMap_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
						int i);  // 1308
				CUtlMemory<CAnimDataChannel, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
						int i);  // 1387
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
						int i);  // 1387
				CAnimContainer_Imp::AddChannelElementRequestMask(
								ChannelElementMap_t* pMap,
								uint8 requestMask);  // 1308
				CUtlMemory<ChannelElementMap_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
						int i);  // 1309
				CUtlMemory<CAnimDataChannel, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
						int i);  // 1387
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
						int i);  // 1387
				CAnimContainer_Imp::AddChannelElementRequestMask(
								ChannelElementMap_t* pMap,
								uint8 requestMask);  // 1309
				CUtlMemory<ChannelElementMap_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
						int i);  // 1310
				CUtlMemory<CAnimDataChannel, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
						int i);  // 1387
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
						int i);  // 1387
				CAnimContainer_Imp::AddChannelElementRequestMask(
								ChannelElementMap_t* pMap,
								uint8 requestMask);  // 1310
			}
			{
				int nMorph; // 1316
				CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::Count(); // 1316
				CUtlMemory<ChannelElementMap_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
						int i);  // 1318
				CUtlMemory<CAnimDataChannel, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
						int i);  // 1387
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
						int i);  // 1387
				CAnimContainer_Imp::AddChannelElementRequestMask(
								ChannelElementMap_t* pMap,
								uint8 requestMask);  // 1318
			}
			{
				int nUser; // 1324
				CUtlVectorBase<UserDataElementMap_t, CUtlMemory<UserDataElementMap_t, int> >::Count(); // 1324
				CUtlMemory<UserDataElementMap_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<UserDataElementMap_t, CUtlMemory<UserDataElementMap_t, int> >::operator[](
						int i);  // 1326
				CUtlMemory<CAnimDataChannel, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
						int i);  // 1387
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
						int i);  // 1387
				CAnimContainer_Imp::AddChannelElementRequestMask(
								ChannelElementMap_t* pMap,
								uint8 requestMask);  // 1326
			}
			CUtlMemory<ElementRequestPattern_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::operator[](
					int i);  // 1302
		}
		CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Count(); // 1299
	}
	{
		int nKey; // 1333
		{
			CAnimDecodeSwizzle* pSwizzle; // 1335
			{
				int nPattern; // 1338
				CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Count(); // 1338
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
						int i);  // 1340
			}
			{
				int nSrcChannel; // 1345
				{
					int nDstChannel; // 1347
					const CAnimDataChannelDesc* pSrcChannel; // 1349
					{
						int nSrcIndex; // 1351
						{
							int nElementID; // 1353
							int nDstIndex; // 1354
							uint8 nRequestMask; // 1357
							{
								int nPattern; // 1359
								CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Count(); // 1359
								CUtlMemory<unsigned int, int>::operator[](
										int i);  // 588
								CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
										int i);  // 1363
								CUtlMemory<unsigned int, int>::operator[](
										int i);  // 588
								CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
										int i);  // 1363
							}
							CUtlMemory<CAnimDataChannel, int>::operator[](
									int i);  // 588
							CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
									int i);  // 1357
							CUtlMemory<int, int>::operator[](
									int i);  // 595
							CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
									int i);  // 1353
							CUtlMemory<int, int>::operator[](
									int i);  // 588
							CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
									int i);  // 1354
							CUtlMemory<unsigned char, int>::operator[](
									int i);  // 588
							CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
									int i);  // 1357
						}
						CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1351
					}
					CUtlMemory<int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
							int i);  // 1347
					CUtlMemory<CAnimDataChannelDesc, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::operator[](
							int i);  // 1349
				}
				CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1345
			}
			CUtlMemory<CAnimDecodeSwizzle, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimDecodeSwizzle, CUtlMemory<CAnimDecodeSwizzle, int> >::operator[](
					int i);  // 1335
			CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Count(); // 1337
		}
		CUtlVectorBase<CAnimDecodeSwizzle, CUtlMemory<CAnimDecodeSwizzle, int> >::Count(); // 1333
	}
	CUtlMemory<ElementRequestPattern_t, int>::NumAllocated(); // 1143
	CUtlMemory<ElementRequestPattern_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Element(
		int i);  // 1148
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1281
	CVarBitVecBase<short unsigned int, 32>::CVarBitVecBase(); // 1405
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll(); // 1413
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::CBitVecT(); // 1211
	CVarBitVecT<short unsigned int, 32>::CVarBitVecT(); // 1223
	CVarBitVec::CVarBitVec(); // 214
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1281
	CVarBitVecBase<short unsigned int, 32>::CVarBitVecBase(); // 1405
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll(); // 1413
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::CBitVecT(); // 1211
	CVarBitVecT<short unsigned int, 32>::CVarBitVecT(); // 1223
	CVarBitVec::CVarBitVec(); // 214
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 214
	ElementRequestPattern_t::ElementRequestPattern_t(); // 1479
	Construct<ElementRequestPattern_t>(ElementRequestPattern_t* pMemory); // 1148
	CUtlMemory<ElementRequestPattern_t, int>::Base(); // 112
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Base(); // 368
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::AddToTail(); // 1156
	CUtlMemory<ElementRequestPattern_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Element(
		int i);  // 1156
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::AddToTailGetPtr(); // 1186
	operator&(BoneFlags_t a,
			BoneFlags_t b);  // 1192
	operator&(BoneFlags_t a,
			BoneFlags_t b);  // 1205
	operator&(BoneFlags_t a,
			BoneFlags_t b);  // 1214
	CUtlMemory<ElementRequestPattern_t, int>::NumAllocated(); // 1143
	CUtlMemory<ElementRequestPattern_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Element(
		int i);  // 1148
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1281
	CVarBitVecBase<short unsigned int, 32>::CVarBitVecBase(); // 1405
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll(); // 1413
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::CBitVecT(); // 1211
	CVarBitVecT<short unsigned int, 32>::CVarBitVecT(); // 1223
	CVarBitVec::CVarBitVec(); // 214
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1281
	CVarBitVecBase<short unsigned int, 32>::CVarBitVecBase(); // 1405
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll(); // 1413
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::CBitVecT(); // 1211
	CVarBitVecT<short unsigned int, 32>::CVarBitVecT(); // 1223
	CVarBitVec::CVarBitVec(); // 214
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 214
	ElementRequestPattern_t::ElementRequestPattern_t(); // 1479
	Construct<ElementRequestPattern_t>(ElementRequestPattern_t* pMemory); // 1148
	CUtlMemory<ElementRequestPattern_t, int>::Base(); // 112
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Base(); // 368
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::AddToTail(); // 1156
	CUtlMemory<ElementRequestPattern_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Element(
		int i);  // 1156
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::AddToTailGetPtr(); // 1225
	CUtlMemory<ElementRequestPattern_t, int>::NumAllocated(); // 1143
	CUtlMemory<ElementRequestPattern_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Element(
		int i);  // 1148
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1281
	CVarBitVecBase<short unsigned int, 32>::CVarBitVecBase(); // 1405
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll(); // 1413
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::CBitVecT(); // 1211
	CVarBitVecT<short unsigned int, 32>::CVarBitVecT(); // 1223
	CVarBitVec::CVarBitVec(); // 214
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1281
	CVarBitVecBase<short unsigned int, 32>::CVarBitVecBase(); // 1405
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll(); // 1413
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::CBitVecT(); // 1211
	CVarBitVecT<short unsigned int, 32>::CVarBitVecT(); // 1223
	CVarBitVec::CVarBitVec(); // 214
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 214
	ElementRequestPattern_t::ElementRequestPattern_t(); // 1479
	Construct<ElementRequestPattern_t>(ElementRequestPattern_t* pMemory); // 1148
	CUtlMemory<ElementRequestPattern_t, int>::Base(); // 112
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Base(); // 368
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::AddToTail(); // 1156
	CUtlMemory<ElementRequestPattern_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Element(
		int i);  // 1156
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::AddToTailGetPtr(); // 1207
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Count(); // 1216
	CUtlMemory<ElementRequestPattern_t, int>::NumAllocated(); // 1143
	CUtlMemory<ElementRequestPattern_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Element(
		int i);  // 1148
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1281
	CVarBitVecBase<short unsigned int, 32>::CVarBitVecBase(); // 1405
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll(); // 1413
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::CBitVecT(); // 1211
	CVarBitVecT<short unsigned int, 32>::CVarBitVecT(); // 1223
	CVarBitVec::CVarBitVec(); // 214
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1281
	CVarBitVecBase<short unsigned int, 32>::CVarBitVecBase(); // 1405
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll(); // 1413
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::CBitVecT(); // 1211
	CVarBitVecT<short unsigned int, 32>::CVarBitVecT(); // 1223
	CVarBitVec::CVarBitVec(); // 214
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 214
	ElementRequestPattern_t::ElementRequestPattern_t(); // 1479
	Construct<ElementRequestPattern_t>(ElementRequestPattern_t* pMemory); // 1148
	CUtlMemory<ElementRequestPattern_t, int>::Base(); // 112
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Base(); // 368
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::AddToTail(); // 1156
	CUtlMemory<ElementRequestPattern_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Element(
		int i);  // 1156
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::AddToTailGetPtr(); // 1217
} /* size: 0, variables: 3, inline expansions: 132 (4405 bytes) */

// <00D31761> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:1381
// function calls: 4
void CAnimContainer_Imp::AddChannelElementRequestMask(ChannelElementMap_t* pMap, uint8 requestMask)
{
	CUtlMemory<CAnimDataChannel, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
			int i);  // 1387
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 588
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
			int i);  // 1387
} /* size: 0, inline expansions: 4 (0 bytes) */

// <00CCF4D7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:1381
void CAnimContainer_Imp::AddChannelElementRequestMask(ChannelElementMap_t* pMap, uint8 requestMask)
{
} /* size: 0 */

// <00CCA9E6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:1393
// variables: 53
// function calls: 313
void CAnimContainer_Imp::LinkWeightlistsToMasterDataChannels(const CModel* pModel)
{
	const bool  bLogDetail; // 1395
	const int  nBoneCount; // 1402
	const int  nMorphCtrlCount; // 1403
	CUtlVector<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int> > tmpWeights; // 1431
	CUtlVector<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int> > tmpWeightsCheck; // 1432
	const char   __FUNCTION__; // 22580
	{
		ChannelWeightlist_t* pDefaultWeightList; // 1408
		{
			int nBone; // 1415
			CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int> >::operator[](
					int i);  // 1417
			CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int> >::operator[](
					int i);  // 1418
		}
		CUtlMemory<ChannelWeightlist_t, int>::NumAllocated(); // 1143
		CUtlMemory<ChannelWeightlist_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> >::Element(
			int i);  // 1148
		CUtlString::CUtlString(); // 249
		CUtlMemory<float, int>::ValidateGrowSize(); // 475
		CUtlMemory<float, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 249
		CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int> >::CUtlVector(); // 249
		CUtlMemory<std::pair<LocalFlexController_t, float>, int>::ValidateGrowSize(); // 475
		CUtlMemory<std::pair<LocalFlexController_t, float>, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		ResetDbgInfo(const CUtlVectorBase<std::pair<LocalFlexController_t, float>, CUtlMemory<std::pair<LocalFlexController_t, float>, int> > this); // 530
		CUtlVectorBase(const CUtlVectorBase<std::pair<LocalFlexController_t, float>, CUtlMemory<std::pair<LocalFlexController_t, float>, int> >  this,
				int growSize,
				int initCapacity);  // 418
		CUtlVector<std::pair<LocalFlexController_t, float>, CUtlMemory<std::pair<LocalFlexController_t, float>, int> >::CUtlVector(); // 249
		CUtlMemory<ChannelElementWeights_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<ChannelElementWeights_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<ChannelElementWeights_t, CUtlMemory<ChannelElementWeights_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<ChannelElementWeights_t, CUtlMemory<ChannelElementWeights_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<ChannelElementWeights_t, CUtlMemory<ChannelElementWeights_t, int> >::CUtlVector(); // 249
		ChannelWeightlist_t::ChannelWeightlist_t(); // 1479
		Construct<ChannelWeightlist_t>(ChannelWeightlist_t* pMemory); // 1148
		CUtlMemory<ChannelWeightlist_t, int>::Base(); // 112
		CUtlVectorBase<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> >::Base(); // 368
		CUtlVectorBase<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> >::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> >::AddToTail(); // 1156
		CUtlMemory<ChannelWeightlist_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> >::Element(
			int i);  // 1156
		CUtlVectorBase<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> >::AddToTailGetPtr(); // 1408
		CUtlString::operator=(
				const char* src);  // 1409
		{
			int i; // 1554
			CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1554
			CUtlMemory<float, int>::operator[](
					int i);  // 602
			CUtlVectorBase<float, CUtlMemory<float, int> >::Element(
				int i);  // 1556
		}
		CUtlVectorBase<float, CUtlMemory<float, int> >::FillWithValue(
				const float& src);  // 1412
		CUtlString::Get(); // 1421
	}
	{
		int nChannel; // 1435
		{
			const CAnimDataChannel* pChannel; // 1437
			CUtlMemory<CAnimDataChannel, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
					int i);  // 1437
			CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this,
					int i);  // 1438
		}
		CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::Count(); // 1435
	}
	{
		int nChannel; // 1442
		{
			const CAnimDataChannel* pChannel; // 1444
			CUtlMemory<CAnimDataChannel, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
					int i);  // 1444
		}
		CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::Count(); // 1442
	}
	{
		int nMask; // 1449
		{
			ChannelWeightlist_t* pDstList; // 1451
			{
				CUtlVector<float, CUtlMemory<float, int> >& tmpChannelWeights; // 1460
				CUtlVector<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int> >& __for_range; // 41862
				iterator __for_begin; // 14878
				iterator __for_end; // 14878
				CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::Base(); // 112
				Base(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this); // 102
				begin(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this); // 1460
				Count(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int this); // 104
				end(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this); // 1460
				{
					int i; // 1554
					CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1554
					CUtlMemory<float, int>::operator[](
							int i);  // 602
					CUtlVectorBase<float, CUtlMemory<float, int> >::Element(
						int i);  // 1556
				}
				CUtlVectorBase<float, CUtlMemory<float, int> >::FillWithValue(
						const float& src);  // 1462
			}
			{
				int nChannel; // 1466
				{
					int nIndex; // 1468
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1470
					}
					CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this,
							int i);  // 1468
					CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1468
					CUtlMemory<float, int>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
							int i);  // 1470
					CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this,
							int i);  // 1471
					CUtlMemory<float, int>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
							int i);  // 1471
				}
				CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::Count(); // 1466
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1477
			}
			{
				int nBone; // 1484
				{
					const float  flWeight; // 1486
					CUtlMemory<float, int>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
							int i);  // 1486
					CUtlMemory<ChannelElementMap_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
							int i);  // 1488
					CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this,
							int i);  // 1488
					CUtlMemory<float, int>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
							int i);  // 1488
					CUtlMemory<ChannelElementMap_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
							int i);  // 1489
					CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this,
							int i);  // 1489
					CUtlMemory<float, int>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
							int i);  // 1489
					CUtlMemory<ChannelElementMap_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
							int i);  // 1490
					CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this,
							int i);  // 1490
					CUtlMemory<float, int>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
							int i);  // 1490
					CUtlMemory<ChannelElementMap_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
							int i);  // 1494
					CUtlMemory<ChannelElementMap_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
							int i);  // 1494
				}
			}
			{
				const float  flDefaultMorphCtrlWeight; // 1509
				{
					int nMorphCtrl; // 1517
					CUtlMemory<ChannelElementMap_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
							int i);  // 1519
					CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this,
							int i);  // 1519
					CUtlMemory<float, int>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
							int i);  // 1519
				}
				Count(const CUtlVectorBase<std::pair<LocalFlexController_t, float>, CUtlMemory<std::pair<LocalFlexController_t, float>, i this); // 1514
			}
			{
				const CUtlPair& morphWeight; // 1525
				CUtlVector<std::pair<LocalFlexController_t, float>, CUtlMemory<std::pair<LocalFlexController_t, float>, int> >& __for_range; // 23522
				iterator __for_begin; // 14547
				iterator __for_end; // 14547
				{
					const LocalFlexController_t  nMorphCtrl; // 1527
					const float  flMorphCtrlWeight; // 1528
					CUtlMemory<ChannelElementMap_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
							int i);  // 1530
					CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this,
							int i);  // 1530
					CUtlMemory<float, int>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
							int i);  // 1530
					CUtlMemory<ChannelElementMap_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
							int i);  // 1534
				}
				CUtlMemory<std::pair<LocalFlexController_t, float>, int>::Base(); // 112
				Base(const CUtlVectorBase<std::pair<LocalFlexController_t, float>, CUtlMemory<std::pair<LocalFlexController_t, float>, int> > this); // 102
				begin(const CUtlVectorBase<std::pair<LocalFlexController_t, float>, CUtlMemory<std::pair<LocalFlexController_t, float>, int> > this); // 1525
				Count(const CUtlVectorBase<std::pair<LocalFlexController_t, float>, CUtlMemory<std::pair<LocalFlexController_t, float>, i this); // 104
				end(const CUtlVectorBase<std::pair<LocalFlexController_t, float>, CUtlMemory<std::pair<LocalFlexController_t, float>, int> > this); // 1525
			}
			{
				const int  nBone; // 1547
				{
					const int  nSrcChannel; // 1552
					{
						int nChannel; // 1556
						{
							int nIndex; // 1560
							CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::operator[](
									int i);  // 588
							operator[](const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this,
									int i);  // 1560
							CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1560
							CUtlMemory<float, int>::operator[](
									int i);  // 588
							CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
									int i);  // 1562
						}
						CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::Count(); // 1556
						CUtlMemory<CAnimDataChannel, int>::operator[](
								int i);  // 588
						CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
								int i);  // 1558
					}
					CUtlMemory<ChannelElementMap_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
							int i);  // 1552
					CUtlMemory<CAnimDataChannel, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
							int i);  // 1553
				}
				CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int>::operator[](
						int i);  // 616
				CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int> >::Head(); // 1547
				operator&(BoneFlags_t a,
						BoneFlags_t b);  // 1549
			}
			{
				int nChannel; // 1572
				{
					int nIndex; // 1577
					CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this,
							int i);  // 1577
					CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1577
					CUtlMemory<float, int>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
							int i);  // 1579
				}
				{
					int nIndex; // 1584
					CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this,
							int i);  // 1584
					CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1584
					CUtlMemory<float, int>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
							int i);  // 1586
				}
				CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::Count(); // 1572
				CUtlMemory<CAnimDataChannel, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
						int i);  // 1574
			}
			{
				int nChannel; // 1593
				{
					CUtlVector<int, CUtlMemory<int, int> > nIndexList; // 1595
					ChannelElementWeights_t* pElementWeights; // 1597
					{
						int nPattern; // 1601
						{
							int m_nRequestMask; // 1606
							{
								int nIndex; // 1611
								CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::operator[](
										int i);  // 588
								operator[](const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this,
										int i);  // 1611
								CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1611
								CUtlMemory<float, int>::operator[](
										int i);  // 588
								CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
										int i);  // 1613
								CUtlMemory<CAnimDataChannel, int>::operator[](
										int i);  // 588
								CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
										int i);  // 1616
								CUtlMemory<unsigned char, int>::operator[](
										int i);  // 588
								CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
										int i);  // 1616
								CUtlMemory<int, int>::operator[](
										int i);  // 602
								CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
									int i);  // 1201
								CopyConstruct<int>(int* pMemory,
											const int& src);  // 1201
								CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
								CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
										int num);  // 1198
								CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
										const int& src);  // 1618
							}
							{
								bool bAllOnes; // 1626
								int nEntry; // 1631
								{
									int k; // 1632
									{
										float flWeight; // 1635
										CUtlMemory<int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
												int i);  // 1634
										CUtlMemory<RequestElementWeights_t, int>::operator[](
												int i);  // 588
										CUtlVectorBase<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> >::operator[](
												int i);  // 1634
										CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::operator[](
												int i);  // 588
										operator[](const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this,
												int i);  // 1635
										CUtlMemory<float, int>::operator[](
												int i);  // 588
										CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
												int i);  // 1635
										CUtlMemory<float, int>::operator[](
												int i);  // 588
										CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
												int i);  // 1638
									}
								}
								CUtlMemory<RequestElementWeights_t, int>::operator[](
										int i);  // 588
								CUtlVectorBase<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> >::operator[](
										int i);  // 1628
								CUtlMemory<RequestElementWeights_t, int>::operator[](
										int i);  // 588
								CUtlVectorBase<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> >::operator[](
										int i);  // 1629
								CUtlMemory<RequestElementWeights_t, int>::operator[](
										int i);  // 588
								CUtlVectorBase<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> >::operator[](
										int i);  // 1648
								CUtlMemory<RequestElementWeights_t, int>::operator[](
										int i);  // 588
								CUtlVectorBase<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> >::operator[](
										int i);  // 1649
								CUtlMemory<CAnimDataChannel, int>::operator[](
										int i);  // 588
								CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
										int i);  // 1652
								CUtlMemory<RequestElementWeights_t, int>::operator[](
										int i);  // 588
								CUtlVectorBase<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> >::operator[](
										int i);  // 1654
								CUtlMemory<RequestElementWeights_t, int>::operator[](
										int i);  // 588
								CUtlVectorBase<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> >::operator[](
										int i);  // 1659
							}
							CUtlMemory<RequestElementWeights_t, int>::operator[](
									int i);  // 588
							CUtlVectorBase<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> >::operator[](
									int i);  // 1604
							CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1609
						}
						CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Count(); // 1601
					}
					CUtlMemory<ChannelElementWeights_t, int>::NumAllocated(); // 1143
					CUtlMemory<ChannelElementWeights_t, int>::Base(); // 112
					CUtlVectorBase<ChannelElementWeights_t, CUtlMemory<ChannelElementWeights_t, int> >::Base(); // 368
					CUtlVectorBase<ChannelElementWeights_t, CUtlMemory<ChannelElementWeights_t, int> >::ResetDbgInfo(); // 824
					CUtlMemory<ChannelElementWeights_t, int>::IsGrowable(); // 823
					CUtlMemory<ChannelElementWeights_t, int>::IsExternallyAllocated(); // 859
					CUtlMemory<ChannelElementWeights_t, int>::IsExternallyAllocated(); // 861
					CUtlMemory<ChannelElementWeights_t, int>::Grow(
						int num);  // 806
					CUtlVectorBase<ChannelElementWeights_t, CUtlMemory<ChannelElementWeights_t, int> >::GrowMemory(
							int num);  // 1145
					CUtlMemory<ChannelElementWeights_t, int>::operator[](
							int i);  // 602
					CUtlVectorBase<ChannelElementWeights_t, CUtlMemory<ChannelElementWeights_t, int> >::Element(
						int i);  // 1148
					CUtlMemory<RequestElementWeights_t, int>::ValidateGrowSize(); // 475
					CUtlMemory<RequestElementWeights_t, int>::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 527
					CUtlVectorBase<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> >::ResetDbgInfo(); // 530
					CUtlVectorBase<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> >::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 418
					CUtlVector<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> >::CUtlVector(); // 236
					ChannelElementWeights_t::ChannelElementWeights_t(); // 1479
					Construct<ChannelElementWeights_t>(ChannelElementWeights_t* pMemory); // 1148
					CUtlVectorBase<ChannelElementWeights_t, CUtlMemory<ChannelElementWeights_t, int> >::AddToTail(); // 1597
					CUtlMemory<int, int>::ValidateGrowSize(); // 475
					CUtlMemory<int, int>::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 527
					CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
					CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 418
					CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 1595
					CUtlMemory<ChannelElementWeights_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<ChannelElementWeights_t, CUtlMemory<ChannelElementWeights_t, int> >::operator[](
							int i);  // 1597
					CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Count(); // 1599
					CUtlMemory<RequestElementWeights_t, int>::NumAllocated(); // 782
					CUtlMemory<RequestElementWeights_t, int>::Base(); // 112
					CUtlVectorBase<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> >::Base(); // 368
					CUtlVectorBase<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> >::ResetDbgInfo(); // 824
					CUtlMemory<RequestElementWeights_t, int>::IsGrowable(); // 823
					CUtlMemory<RequestElementWeights_t, int>::IsExternallyAllocated(); // 859
					CUtlMemory<RequestElementWeights_t, int>::IsExternallyAllocated(); // 861
					CUtlMemory<RequestElementWeights_t, int>::Grow(
						int num);  // 806
					CUtlVectorBase<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> >::GrowMemory(
							int num);  // 784
					CUtlVectorBase<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> >::GrowVector(
							int num);  // 1445
					{
						int i; // 1451
						CUtlMemory<RequestElementWeights_t, int>::operator[](
								int i);  // 602
						CUtlVectorBase<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> >::Element(
							int i);  // 1453
						CUtlMemory<int, int>::ValidateGrowSize(); // 475
						CUtlMemory<int, int>::CUtlMemory(
								int nGrowSize,
								int nInitAllocationCount);  // 527
						CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
						CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
								int growSize,
								int initCapacity);  // 418
						CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 229
						CUtlMemory<float, int>::ValidateGrowSize(); // 475
						CUtlMemory<float, int>::CUtlMemory(
								int nGrowSize,
								int nInitAllocationCount);  // 527
						CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
						CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
								int growSize,
								int initCapacity);  // 418
						CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 229
						RequestElementWeights_t::RequestElementWeights_t(); // 1479
						Construct<RequestElementWeights_t>(RequestElementWeights_t* pMemory); // 1453
					}
					CUtlVectorBase<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> >::InsertMultipleBefore(
								int elem,
								int num);  // 1437
					CUtlVectorBase<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> >::InsertMultipleBefore(
								int elem,
								int num);  // 1294
					CUtlVectorBase<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> >::AddMultipleToTail(
								int num);  // 1319
					{
						int i; // 1696
						CUtlMemory<RequestElementWeights_t, int>::operator[](
								int i);  // 602
						CUtlVectorBase<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> >::Element(
							int i);  // 1697
						CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
						CUtlMemory<float, int>::IsExternallyAllocated(); // 905
						CUtlMemory<float, int>::Purge(); // 903
						CUtlMemory<float, int>::Purge(); // 1799
						CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
						ValidateAlignment<float>(void); // 508
						CUtlMemory<float, int>::Purge(); // 510
						CUtlMemory<float, int>::~CUtlMemory(); // 562
						CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
						CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 229
						CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
						CUtlMemory<int, int>::IsExternallyAllocated(); // 905
						CUtlMemory<int, int>::Purge(); // 903
						CUtlMemory<int, int>::Purge(); // 1799
						CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
						ValidateAlignment<int>(void); // 508
						CUtlMemory<int, int>::Purge(); // 510
						CUtlMemory<int, int>::~CUtlMemory(); // 562
						CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
						CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 229
						RequestElementWeights_t::~RequestElementWeights_t(); // 1526
						Destruct<RequestElementWeights_t>(RequestElementWeights_t* pMemory); // 1697
					}
					CUtlVectorBase<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> >::RemoveMultipleFromTail(
								int num);  // 1323
					CUtlVectorBase<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> >::SetCount(
						int count);  // 1599
					CUtlMemory<int, int>::Purge(); // 903
					CUtlMemory<int, int>::Purge(); // 1799
					CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
					ValidateAlignment<int>(void); // 508
					CUtlMemory<int, int>::Purge(); // 510
					CUtlMemory<int, int>::~CUtlMemory(); // 562
					CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
					CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 1668
				}
				CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::Count(); // 1593
			}
			CUtlMemory<ChannelWeightlist_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> >::operator[](
					int i);  // 1451
			CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1477
			Count(const CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int this); // 1481
			Count(const CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int this); // 135
			IsEmpty(const CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int this); // 1545
			CUtlString::Get(); // 1455
		}
		CUtlVectorBase<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> >::Count(); // 1449
	}
	CUtlVectorBase<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> >::Count(); // 1406
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int> this); // 1431
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int> this); // 1432
	CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::Count(); // 1434
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this); // 560
	ValidateAlignment<CUtlVector<float> >(void); // 508
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int> this); // 1670
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this); // 560
	ValidateAlignment<CUtlVector<float> >(void); // 508
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int> this); // 1670
	CUtlVectorBase<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> >::Count(); // 1428
} /* size: 0, variables: 6, inline expansions: 30 (499 bytes) */

// <00CC7DFF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:1676
// variables: 23
// function calls: 172
void CAnimContainer_Imp::AppendSequences(const CModel* pModel, int nGroup, const CSequenceGroupData* pSeqGroupResource)
{
	const int  nDstSeqCountPre; // 1678
	const bool  bModelIsModelDoc; // 1680
	const CAnimTable* pAnimTable; // 1682
	{
		int j; // 1684
		{
			const CSeqS1SeqDesc* pSeqDesc; // 1686
			const char* pszSrcSeqName; // 1688
			{
				const HSequence  hSeq; // 1692
				const bool  bSeqIsModelDoc; // 1694
				{
					const UtlHashHandle_t  hAnim; // 1702
					{
						const int  nAnim; // 1705
						const CAnimDesc* pAnimDesc; // 1707
						CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::operator[](
								int i);  // 609
						Element(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false> this,
							int i);  // 418
						operator[](const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
								UtlHashHandle_t handle);  // 133
						CUtlHashDict<short int, true, false>::Element(
							UtlHashHandle_t handle);  // 1705
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
								int nAnimation);  // 1707
						CUtlMemory<CFootMotion, int>::Base(); // 113
						CUtlVectorBase<CFootMotion, CUtlMemory<CFootMotion, int> >::Base(); // 2234
						CUtlVectorBase<CFootMotion, CUtlMemory<CFootMotion, int> >::Count(); // 2235
						CModelDocAnimResourceSeqBase::CModelDocAnimResourceSeqBase(
										const CAnimContainer* pAnimContainer,
										HSequence hSequence,
										int nAnimation,
										const CSeqS1SeqDesc* pSeqDesc);  // 2289
						CModelDocAnimResourceSeqDelta::CModelDocAnimResourceSeqDelta(
										const CAnimContainer* pAnimContainer,
										HSequence hSequence,
										int nAnimation,
										const CSeqS1SeqDesc* pSeqDesc);  // 1711
						CUtlMemory<CFootMotion, int>::Base(); // 113
						CUtlVectorBase<CFootMotion, CUtlMemory<CFootMotion, int> >::Base(); // 2234
						CUtlVectorBase<CFootMotion, CUtlMemory<CFootMotion, int> >::Count(); // 2235
						CModelDocAnimResourceSeqBase::CModelDocAnimResourceSeqBase(
										const CAnimContainer* pAnimContainer,
										HSequence hSequence,
										int nAnimation,
										const CSeqS1SeqDesc* pSeqDesc);  // 2266
						CModelDocAnimResourceSeq::CModelDocAnimResourceSeq(
									const CAnimContainer* pAnimContainer,
									HSequence hSequence,
									int nAnimation,
									const CSeqS1SeqDesc* pSeqDesc);  // 1715
						CUtlMemory<ISequence::NumAllocated(); // 1247
						CUtlMemory<ISequence::operator[](
								int i);  // 602
						CUtlVectorBase<ISequence::Element(
							int i);  // 1252
						Construct<ISequence*, ISequence*>(ISequence** pMemory); // 1252
						CUtlMemory<ISequence::Base(); // 112
						CUtlVectorBase<ISequence::Base(); // 368
						CUtlVectorBase<ISequence::ResetDbgInfo(); // 824
						CUtlVectorBase<ISequence::GrowMemory(
								int num);  // 1249
						CUtlVectorBase<ISequence::AddToTail(
								ISequence *& src);  // 1715
					}
					{
					}
					{
					}
					BuildHandle(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
							int ndxBucket,
							int ndxKeyData);  // 280
					HashStringFastCaseless(const char* pszKey); // 96
					CHash<true>::operator(
							const Entry_t& entry);  // 239
					{
						int bucketCount; // 249
						Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this); // 249
					}
					operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, this,
							int i);  // 595
					operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this,
							int i);  // 254
					Count(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false> this); // 255
					CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::operator[](
							int i);  // 609
					Element(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false> this,
						int i);  // 258
					CCompare<true>::operator(
							const Entry_t& entry1,
							const Entry_t& entry2);  // 258
					DoFind(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
						const Entry_t& src,
						unsigned int* pBucket,
						int* pIndex);  // 278
					Find(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
						const Entry_t& src);  // 330
					CUtlHashDict<short int, true, false>::Find(
						const char* pName);  // 1702
					GetBucketIndex(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
							UtlHashHandle_t handle);  // 155
					GetKeyDataIndex(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
							UtlHashHandle_t handle);  // 156
					Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this); // 162
					operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, this,
							int i);  // 595
					operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this,
							int i);  // 164
					Count(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false> this); // 164
					IsValidHandle(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
							UtlHashHandle_t handle);  // 174
					CUtlHashDict<short int, true, false>::IsValidHandle(
							UtlHashHandle_t handle);  // 1703
				}
				CUtlVectorBase<ISequence::Count(); // 1692
				HSequence::HSequence(
						int32 value);  // 1692
				CUtlMemory<ISequence::NumAllocated(); // 1247
				CUtlMemory<ISequence::operator[](
						int i);  // 602
				CUtlVectorBase<ISequence::Element(
					int i);  // 1252
				Construct<ISequence*, ISequence*>(ISequence** pMemory); // 1252
				CUtlMemory<ISequence::Base(); // 112
				CUtlVectorBase<ISequence::Base(); // 368
				CUtlVectorBase<ISequence::ResetDbgInfo(); // 824
				CUtlVectorBase<ISequence::GrowMemory(
						int num);  // 1249
				CUtlVectorBase<ISequence::AddToTail(
						ISequence *& src);  // 1723
			}
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 203
			CSeqS1SeqDesc::GetName(); // 1688
			HashStringFastCaseless(const char* pszKey); // 96
			CHash<true>::operator(
					const Entry_t& entry);  // 239
			{
				int bucketCount; // 249
				Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this); // 249
			}
			operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, this,
					int i);  // 595
			operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this,
					int i);  // 254
			Count(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false> this); // 255
			CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::operator[](
					int i);  // 609
			Element(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false> this,
				int i);  // 258
			CCompare<true>::operator(
					const Entry_t& entry1,
					const Entry_t& entry2);  // 258
			DoFind(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
				const Entry_t& src,
				unsigned int* pBucket,
				int* pIndex);  // 278
			{
			}
			{
			}
			BuildHandle(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
					int ndxBucket,
					int ndxKeyData);  // 280
			Find(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
				const Entry_t& src);  // 330
			CUtlHashDict<short int, true, false>::Find(
				const char* pName);  // 52
			CUtlHashDict<short int, true, false>::HasElement(
					const char* pStr);  // 1690
			CUtlMemory<CSeqS1SeqDesc, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CSeqS1SeqDesc, CUtlMemory<CSeqS1SeqDesc, int> >::operator[](
					int i);  // 1686
		}
		CUtlVectorBase<CSeqS1SeqDesc, CUtlMemory<CSeqS1SeqDesc, int> >::Count(); // 1684
	}
	{
		int j; // 1727
		{
			const char* pszSrcSeqName; // 1729
			{
				const HSequence  hSeq; // 1733
				CUtlVectorBase<ISequence::Count(); // 1733
				HSequence::HSequence(
						int32 value);  // 1733
				CSeqResourceMultiSequence::CSeqResourceMultiSequence(
								const CAnimContainer* pAnimContainer,
								HSequence hSequence,
								int nGroup,
								int nIndex);  // 1734
				CUtlMemory<ISequence::NumAllocated(); // 1247
				CUtlMemory<ISequence::operator[](
						int i);  // 602
				CUtlVectorBase<ISequence::Element(
					int i);  // 1252
				Construct<ISequence*, ISequence*>(ISequence** pMemory); // 1252
				CUtlMemory<ISequence::Base(); // 112
				CUtlVectorBase<ISequence::Base(); // 368
				CUtlVectorBase<ISequence::ResetDbgInfo(); // 824
				CUtlVectorBase<ISequence::GrowMemory(
						int num);  // 1249
				CUtlVectorBase<ISequence::AddToTail(
						ISequence *& src);  // 1734
			}
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 203
			CSeqS1SeqDesc::GetName(); // 1729
			HashStringFastCaseless(const char* pszKey); // 96
			CHash<true>::operator(
					const Entry_t& entry);  // 239
			{
				int bucketCount; // 249
				Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this); // 249
			}
			operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, this,
					int i);  // 595
			operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this,
					int i);  // 254
			Count(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false> this); // 255
			CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::operator[](
					int i);  // 609
			Element(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false> this,
				int i);  // 258
			CCompare<true>::operator(
					const Entry_t& entry1,
					const Entry_t& entry2);  // 258
			DoFind(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
				const Entry_t& src,
				unsigned int* pBucket,
				int* pIndex);  // 278
			{
			}
			{
			}
			BuildHandle(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
					int ndxBucket,
					int ndxKeyData);  // 280
			Find(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
				const Entry_t& src);  // 330
			CUtlHashDict<short int, true, false>::Find(
				const char* pName);  // 52
			CUtlHashDict<short int, true, false>::HasElement(
					const char* pStr);  // 1731
			CUtlMemory<CSeqS1SeqDesc, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CSeqS1SeqDesc, CUtlMemory<CSeqS1SeqDesc, int> >::operator[](
					int i);  // 1729
		}
		CUtlVectorBase<CSeqS1SeqDesc, CUtlMemory<CSeqS1SeqDesc, int> >::Count(); // 1727
	}
	{
		int j; // 1738
		{
			const char* pszSrcSeqName; // 1740
			{
				const HSequence  hSeq; // 1744
				CUtlVectorBase<ISequence::Count(); // 1744
				HSequence::HSequence(
						int32 value);  // 1744
				CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
				CUtlMemory<float, int>::ValidateGrowSize(); // 475
				CUtlMemory<float, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 418
				CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 1229
				HSequence::HSequence(); // 1229
				HSequence::HSequence(); // 1229
				HSequence::HSequence(); // 1229
				CSeqResourceCmdSequence::CSeqResourceCmdSequence(
							const CAnimContainer* pAnimContainer,
							HSequence hSequence,
							int nGroup,
							int nIndex);  // 1745
				CUtlMemory<ISequence::NumAllocated(); // 1247
				CUtlMemory<ISequence::operator[](
						int i);  // 602
				CUtlVectorBase<ISequence::Element(
					int i);  // 1252
				Construct<ISequence*, ISequence*>(ISequence** pMemory); // 1252
				CUtlMemory<ISequence::Base(); // 112
				CUtlVectorBase<ISequence::Base(); // 368
				CUtlVectorBase<ISequence::ResetDbgInfo(); // 824
				CUtlVectorBase<ISequence::GrowMemory(
						int num);  // 1249
				CUtlVectorBase<ISequence::AddToTail(
						ISequence *& src);  // 1745
			}
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 358
			CSeqCmdSeqDesc::GetName(); // 1740
			HashStringFastCaseless(const char* pszKey); // 96
			CHash<true>::operator(
					const Entry_t& entry);  // 239
			{
				int bucketCount; // 249
				Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this); // 249
			}
			operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, this,
					int i);  // 595
			operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this,
					int i);  // 254
			Count(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false> this); // 255
			CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::operator[](
					int i);  // 609
			Element(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false> this,
				int i);  // 258
			CCompare<true>::operator(
					const Entry_t& entry1,
					const Entry_t& entry2);  // 258
			DoFind(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
				const Entry_t& src,
				unsigned int* pBucket,
				int* pIndex);  // 278
			{
			}
			{
			}
			BuildHandle(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
					int ndxBucket,
					int ndxKeyData);  // 280
			Find(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
				const Entry_t& src);  // 330
			CUtlHashDict<short int, true, false>::Find(
				const char* pName);  // 52
			CUtlHashDict<short int, true, false>::HasElement(
					const char* pStr);  // 1742
			CUtlMemory<CSeqCmdSeqDesc, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >::operator[](
					int i);  // 1740
		}
		CUtlVectorBase<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >::Count(); // 1738
	}
	{
		int j; // 1750
		{
			const char* pszSeqName; // 1752
			CUtlMemory<ISequence::operator[](
					int i);  // 588
			CUtlVectorBase<ISequence::operator[](
					int i);  // 1752
		}
		CUtlVectorBase<ISequence::Count(); // 1750
	}
	CUtlVectorBase<ISequence::Count(); // 1678
	operator&(ModelFlags_t a,
			ModelFlags_t b);  // 1680
	CAnimContainer_Imp::GetAnimTable(); // 1682
} /* size: 0, variables: 3, inline expansions: 3 (17 bytes) */

// <00CC6E9F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:1761
// variables: 10
// function calls: 60
void CAnimContainer_Imp::AppendPoseParameters(int nGroup, const CSequenceGroupData* pSeqGroupResource)
{
	int numCheck; // 1763
	int j; // 1765
	int k; // 1765
	{
		const CSeqPoseParamDesc* pSrcPose; // 1772
		const char* s1; // 1773
		UtlHashHandle_t handle; // 1776
		{
			PoseParamDesc_t* pDstPose; // 1782
			GetBucketIndex(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this,
					UtlHashHandle_t handle);  // 403
			operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>: this,
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, tr this,
					int i);  // 406
			CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_ this,
				int i);  // 406
			operator[](const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas this,
					UtlHashHandle_t handle);  // 127
			CUtlHashDict<short int, true, true>::Element(
				UtlHashHandle_t handle);  // 1779
			CUtlMemory<PoseParamDesc_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<PoseParamDesc_t, CUtlMemory<PoseParamDesc_t, int> >::operator[](
					int i);  // 1782
		}
		{
			PoseParamDesc_t* pDstPose; // 1792
			CUtlMemory<PoseParamDesc_t, int>::NumAllocated(); // 1143
			CUtlMemory<PoseParamDesc_t, int>::Base(); // 112
			CUtlVectorBase<PoseParamDesc_t, CUtlMemory<PoseParamDesc_t, int> >::Base(); // 368
			CUtlVectorBase<PoseParamDesc_t, CUtlMemory<PoseParamDesc_t, int> >::ResetDbgInfo(); // 824
			CUtlMemory<PoseParamDesc_t, int>::IsGrowable(); // 823
			CUtlMemory<PoseParamDesc_t, int>::IsExternallyAllocated(); // 859
			CUtlMemory<PoseParamDesc_t, int>::IsExternallyAllocated(); // 861
			CUtlMemory<PoseParamDesc_t, int>::Grow(
				int num);  // 806
			CUtlVectorBase<PoseParamDesc_t, CUtlMemory<PoseParamDesc_t, int> >::GrowMemory(
					int num);  // 1145
			CUtlVectorBase<PoseParamDesc_t, CUtlMemory<PoseParamDesc_t, int> >::AddToTail(); // 1791
			CUtlMemory<PoseParamDesc_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<PoseParamDesc_t, CUtlMemory<PoseParamDesc_t, int> >::operator[](
					int i);  // 1792
		}
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 393
		CSeqPoseParamDesc::GetName(); // 1773
		HashStringFastCaseless(const char* pszKey); // 96
		CHash<true>::operator(
				const Entry_t& entry);  // 239
		{
			int bucketCount; // 249
			Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, tr this); // 249
		}
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true,  this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, tr this,
				int i);  // 254
		Count(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>:: this); // 255
		CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int>::operator[](
				int i);  // 609
		Element(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>:: this,
			int i);  // 258
		CCompare<true>::operator(
				const Entry_t& entry1,
				const Entry_t& entry2);  // 258
		DoFind(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this,
			const Entry_t& src,
			unsigned int* pBucket,
			int* pIndex);  // 278
		{
		}
		{
		}
		BuildHandle(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this,
				int ndxBucket,
				int ndxKeyData);  // 280
		Find(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this,
			const Entry_t& src);  // 330
		CUtlHashDict<short int, true, true>::Find(
			const char* pName);  // 1776
		CUtlMemory<CSeqGroupInstance, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CSeqGroupInstance, CUtlMemory<CSeqGroupInstance, int> >::operator[](
				int i);  // 1802
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 1802
		CUtlMemory<CSeqPoseParamDesc, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CSeqPoseParamDesc, CUtlMemory<CSeqPoseParamDesc, int> >::operator[](
				int i);  // 1772
	}
	{
		const char* s1; // 1808
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 393
		CSeqPoseParamDesc::GetName(); // 1808
		CUtlMemory<PoseParamDesc_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<PoseParamDesc_t, CUtlMemory<PoseParamDesc_t, int> >::operator[](
				int i);  // 1808
		CUtlMemory<CSeqPoseParamDesc, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CSeqPoseParamDesc, CUtlMemory<CSeqPoseParamDesc, int> >::operator[](
				int i);  // 1808
		CUtlMemory<PoseParamDesc_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<PoseParamDesc_t, CUtlMemory<PoseParamDesc_t, int> >::operator[](
				int i);  // 1809
	}
	CUtlMemory<CSeqGroupInstance, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CSeqGroupInstance, CUtlMemory<CSeqGroupInstance, int> >::operator[](
			int i);  // 1767
	CUtlVectorBase<PoseParamDesc_t, CUtlMemory<PoseParamDesc_t, int> >::Count(); // 1763
	CUtlVectorBase<CSeqPoseParamDesc, CUtlMemory<CSeqPoseParamDesc, int> >::Count(); // 1767
	CUtlVectorBase<CSeqPoseParamDesc, CUtlMemory<CSeqPoseParamDesc, int> >::Count(); // 1770
	CUtlVectorBase<PoseParamDesc_t, CUtlMemory<PoseParamDesc_t, int> >::Count(); // 1806
} /* size: 0, variables: 3, inline expansions: 6 (64 bytes) */

// <00CC389E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:1817
// variables: 59
// function calls: 205
void CAnimContainer_Imp::AppendBoneMasks(const CModel* pModel, int nGroup, const CSequenceGroupData* pSeqGroupResource)
{
	int j; // 1819
	int k; // 1819
	const bool  bLogDetail; // 1821
	CSeqGroupInstance* pSeqInstance; // 1823
	const char   __FUNCTION__; // 22060
	int numCheck; // 1843
	const int  nBoneCount; // 1853
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1824
	}
	{
		CUtlString sBoneName; // 1830
		CUtlString::CUtlString(); // 1830
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 1831
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
				int i);  // 1833
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 1833
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 1834
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 1834
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 1835
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
				int i);  // 1837
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 1837
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 1837
		CUtlString::~CUtlString(); // 1841
	}
	{
		const char* s1; // 1859
		UtlHashHandle_t handle; // 1866
		{
			ChannelWeightlist_t* pDstWeightList; // 1876
			const CSeqBoneMaskList* pSrcMask; // 1877
			CUtlVector<float, CUtlMemory<float, int> >& dstLinearBoneWeightArray; // 1882
			int nNonZeroWeightCount; // 1885
			{
				const int  nSrcWeightCount; // 1898
				{
					int nSrcWeight; // 1899
					{
						const int  nBoneIndex; // 1901
						const float  flWeight; // 1905
						CUtlMemory<short int, int>::operator[](
								int i);  // 595
						CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
								int i);  // 1901
						CUtlMemory<int, int>::operator[](
								int i);  // 588
						CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
								int i);  // 1901
						CUtlMemory<float, int>::operator[](
								int i);  // 595
						CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
								int i);  // 1905
						CUtlMemory<float, int>::operator[](
								int i);  // 588
						CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
								int i);  // 1906
					}
				}
				{
					int nBone; // 1910
					{
						const float  flWeight; // 1912
						{
							const int  nBoneParent; // 1920
							const float  flParentWeight; // 1922
							CUtlMemory<float, int>::operator[](
									int i);  // 588
							CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
									int i);  // 1924
							CUtlMemory<float, int>::operator[](
									int i);  // 588
							CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
									int i);  // 1922
						}
						CUtlMemory<float, int>::operator[](
								int i);  // 588
						CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
								int i);  // 1912
					}
				}
				{
					int i; // 1554
					CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1554
					CUtlMemory<float, int>::operator[](
							int i);  // 602
					CUtlVectorBase<float, CUtlMemory<float, int> >::Element(
						int i);  // 1556
				}
				CUtlVectorBase<float, CUtlMemory<float, int> >::FillWithValue(
						const float& src);  // 1895
				CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1898
				CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 1898
				Min<int>(const int& val1,
					const int& val2);  // 1898
			}
			{
				CUtlVector<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int> >& sparseBoneWeightList; // 1936
				{
					int nBone; // 1939
					{
						const float  flWeight; // 1941
						{
							IndexWeightPair_t* pIndexWeightPair; // 1945
							CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int>::NumAllocated(); // 1143
							CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int>::operator[](
									int i);  // 602
							CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int> >::Element(
								int i);  // 1148
							IndexWeightPair_t::IndexWeightPair_t(); // 1479
							Construct<ChannelWeightlist_t::IndexWeightPair_t>(IndexWeightPair_t* pMemory); // 1148
							CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int>::Base(); // 112
							CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int> >::Base(); // 368
							CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int> >::ResetDbgInfo(); // 824
							CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int> >::GrowMemory(
									int num);  // 1145
							CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int> >::AddToTail(); // 1156
							CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int>::operator[](
									int i);  // 602
							CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int> >::Element(
								int i);  // 1156
							CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int> >::AddToTailGetPtr(); // 1945
						}
						CUtlMemory<float, int>::operator[](
								int i);  // 588
						CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
								int i);  // 1941
					}
				}
				CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int>::IsGrowable(); // 881
				CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int>::IsExternallyAllocated(); // 888
				CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int>::EnsureCapacity(
						int num);  // 1006
				CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int>::Base(); // 112
				CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int> >::Base(); // 368
				CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int> >::ResetDbgInfo(); // 1024
				CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int> >::EnsureCapacity(
						int num);  // 1937
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1954
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1955
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1956
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1957
			}
			{
				const IndexWeightPair_t& indexWeightPair; // 1959
				CUtlVector<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int> >& __for_range; // 54648
				iterator __for_begin; // 8558
				iterator __for_end; // 8558
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1961
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1962
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1964
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1966
				}
				CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int>::Base(); // 112
				CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int> >::Base(); // 102
				CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int> >::begin(); // 1959
				Count(const CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int this); // 104
				CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int> >::end(); // 1959
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 1966
			}
			{
				int nBone; // 1969
				{
					const int  nSparseIndex; // 1971
					const float  flWeight; // 1972
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1976
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1977
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1981
					}
					IsValidIndex(const CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int this,
							int i);  // 1981
					CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int> >::operator[](
							int i);  // 1977
					IsValidIndex(const CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int this,
							int i);  // 1976
					{
						int i; // 208
						Count(const CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int this); // 208
						CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int>::operator[](
								int i);  // 609
						Element(const CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int this,
							int i);  // 210
					}
					FindByField<int, ChannelWeightlist_t::IndexWeightPair_t>(const CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int this,
												int IndexWeightPair_t::* pField,
												int matchValue);  // 1971
					CUtlMemory<float, int>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
							int i);  // 1972
				}
			}
			{
				const float  flDefaultMorphCtrlWeight; // 1988
				{
					const CUtlPair& srcMorphWeight; // 2001
					const CUtlVector<std::pair<CBufferString, float>, CUtlMemory<std::pair<CBufferString, float>, int> >& __for_range; // 10444
					const_iterator __for_begin; // 6997
					const_iterator __for_end; // 6997
					{
						const char* pszMorphCtrl; // 2003
						const LocalFlexController_t  nLocalFlexController; // 2005
						{
							const float  flMorphCtrlWeight; // 2012
							{
								CUtlPair* pMorphCtrlWeightPair; // 2017
								CUtlMemory<std::pair<LocalFlexController_t, float>, int>::NumAllocated(); // 1143
								CUtlMemory<std::pair<LocalFlexController_t, float>, int>::Base(); // 112
								Base(const CUtlVectorBase<std::pair<LocalFlexController_t, float>, CUtlMemory<std::pair<LocalFlexController_t, float>, int> > this); // 368
								ResetDbgInfo(const CUtlVectorBase<std::pair<LocalFlexController_t, float>, CUtlMemory<std::pair<LocalFlexController_t, float>, int> > this); // 824
								CUtlMemory<std::pair<LocalFlexController_t, float>, int>::IsGrowable(); // 823
								CUtlMemory<std::pair<LocalFlexController_t, float>, int>::IsExternallyAllocated(); // 859
								CUtlMemory<std::pair<LocalFlexController_t, float>, int>::IsExternallyAllocated(); // 861
								CUtlMemory<std::pair<LocalFlexController_t, float>, int>::Grow(
									int num);  // 806
								GrowMemory(const CUtlVectorBase<std::pair<LocalFlexController_t, float>, CUtlMemory<std::pair<LocalFlexController_t, float>, int> >  this,
										int num);  // 1145
								CUtlMemory<std::pair<LocalFlexController_t, float>, int>::operator[](
										int i);  // 602
								Element(const CUtlVectorBase<std::pair<LocalFlexController_t, float>, CUtlMemory<std::pair<LocalFlexController_t, float>, int> >  this,
									int i);  // 1148
								pair<LocalFlexController_t, float>::pair(); // 1479
								Construct<std::pair<LocalFlexController_t, float> >(pair<LocalFlexController_t, float>* pMemory); // 1148
								AddToTail(const CUtlVectorBase<std::pair<LocalFlexController_t, float>, CUtlMemory<std::pair<LocalFlexController_t, float>, int> > this); // 1156
								CUtlMemory<std::pair<LocalFlexController_t, float>, int>::operator[](
										int i);  // 602
								Element(const CUtlVectorBase<std::pair<LocalFlexController_t, float>, CUtlMemory<std::pair<LocalFlexController_t, float>, int> >  this,
									int i);  // 1156
								AddToTailGetPtr(const CUtlVectorBase<std::pair<LocalFlexController_t, float>, CUtlMemory<std::pair<LocalFlexController_t, float>, int> > this); // 2017
								CBufferString::ReadBuffer(); // 1374
								CBufferString::ReadBuffer(); // 771
								CBufferString::Get(); // 2024
							}
						}
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 771
						CBufferString::Get(); // 2003
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 771
						CBufferString::Get(); // 2008
					}
					CUtlMemory<std::pair<CBufferString, float>, int>::Base(); // 113
					CUtlVectorBase<std::pair<CBufferString, float>, CUtlMemory<std::pair<CBufferString, float>, int> >::Base(); // 103
					CUtlVectorBase<std::pair<CBufferString, float>, CUtlMemory<std::pair<CBufferString, float>, int> >::begin(); // 2001
					CUtlVectorBase<std::pair<CBufferString, float>, CUtlMemory<std::pair<CBufferString, float>, int> >::Count(); // 105
					CUtlVectorBase<std::pair<CBufferString, float>, CUtlMemory<std::pair<CBufferString, float>, int> >::end(); // 2001
				}
				CUtlVectorBase<std::pair<CBufferString, float>, CUtlMemory<std::pair<CBufferString, float>, int> >::Count(); // 135
				CUtlVectorBase<std::pair<CBufferString, float>, CUtlMemory<std::pair<CBufferString, float>, int> >::IsEmpty(); // 1997
				CUtlMemory<std::pair<LocalFlexController_t, float>, int>::IsGrowable(); // 881
				CUtlMemory<std::pair<LocalFlexController_t, float>, int>::IsExternallyAllocated(); // 888
				CUtlMemory<std::pair<LocalFlexController_t, float>, int>::EnsureCapacity(
						int num);  // 1006
				ResetDbgInfo(const CUtlVectorBase<std::pair<LocalFlexController_t, float>, CUtlMemory<std::pair<LocalFlexController_t, float>, int> > this); // 1024
				EnsureCapacity(const CUtlVectorBase<std::pair<LocalFlexController_t, float>, CUtlMemory<std::pair<LocalFlexController_t, float>, int> >  this,
						int num);  // 1999
			}
			CUtlMemory<ChannelWeightlist_t, int>::NumAllocated(); // 1143
			CUtlMemory<ChannelWeightlist_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> >::Element(
				int i);  // 1148
			CUtlString::CUtlString(); // 249
			CUtlMemory<float, int>::ValidateGrowSize(); // 475
			CUtlMemory<float, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 249
			CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int>::ValidateGrowSize(); // 475
			CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int> >::CUtlVector(); // 249
			CUtlMemory<std::pair<LocalFlexController_t, float>, int>::ValidateGrowSize(); // 475
			CUtlMemory<std::pair<LocalFlexController_t, float>, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			ResetDbgInfo(const CUtlVectorBase<std::pair<LocalFlexController_t, float>, CUtlMemory<std::pair<LocalFlexController_t, float>, int> > this); // 530
			CUtlVectorBase(const CUtlVectorBase<std::pair<LocalFlexController_t, float>, CUtlMemory<std::pair<LocalFlexController_t, float>, int> >  this,
					int growSize,
					int initCapacity);  // 418
			CUtlVector<std::pair<LocalFlexController_t, float>, CUtlMemory<std::pair<LocalFlexController_t, float>, int> >::CUtlVector(); // 249
			CUtlMemory<ChannelElementWeights_t, int>::ValidateGrowSize(); // 475
			CUtlMemory<ChannelElementWeights_t, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<ChannelElementWeights_t, CUtlMemory<ChannelElementWeights_t, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<ChannelElementWeights_t, CUtlMemory<ChannelElementWeights_t, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<ChannelElementWeights_t, CUtlMemory<ChannelElementWeights_t, int> >::CUtlVector(); // 249
			ChannelWeightlist_t::ChannelWeightlist_t(); // 1479
			Construct<ChannelWeightlist_t>(ChannelWeightlist_t* pMemory); // 1148
			CUtlMemory<ChannelWeightlist_t, int>::Base(); // 112
			CUtlVectorBase<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> >::Base(); // 368
			CUtlVectorBase<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> >::GrowMemory(
					int num);  // 1145
			CUtlVectorBase<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> >::AddToTail(); // 1875
			CUtlMemory<CSeqBoneMaskList, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CSeqBoneMaskList, CUtlMemory<CSeqBoneMaskList, int> >::operator[](
					int i);  // 1877
			CUtlMemory<ChannelWeightlist_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> >::operator[](
					int i);  // 1876
			{
				int i; // 1554
				CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1554
				CUtlMemory<float, int>::operator[](
						int i);  // 602
				CUtlVectorBase<float, CUtlMemory<float, int> >::Element(
					int i);  // 1556
			}
			CUtlVectorBase<float, CUtlMemory<float, int> >::FillWithValue(
					const float& src);  // 1890
			CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1956
			Count(const CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int this); // 1957
		}
		CUtlMemory<CSeqBoneMaskList, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CSeqBoneMaskList, CUtlMemory<CSeqBoneMaskList, int> >::operator[](
				int i);  // 1859
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1859
		HashStringFastCaseless(const char* pszKey); // 96
		CHash<true>::operator(
				const Entry_t& entry);  // 239
		{
			int bucketCount; // 249
			Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this); // 249
		}
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this,
				int i);  // 254
		Count(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false> this); // 255
		CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::operator[](
				int i);  // 609
		Element(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false> this,
			int i);  // 258
		CCompare<true>::operator(
				const Entry_t& entry1,
				const Entry_t& entry2);  // 258
		DoFind(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
			const Entry_t& src,
			unsigned int* pBucket,
			int* pIndex);  // 278
		{
		}
		{
		}
		BuildHandle(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
				int ndxBucket,
				int ndxKeyData);  // 280
		Find(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
			const Entry_t& src);  // 330
		CUtlHashDict<short int, true, false>::Find(
			const char* pName);  // 1866
		GetBucketIndex(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
				UtlHashHandle_t handle);  // 403
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, f this,
				int i);  // 406
		CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entr this,
			int i);  // 406
		operator[](const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH this,
				UtlHashHandle_t handle);  // 127
		CUtlHashDict<short int, true, false>::Element(
			UtlHashHandle_t handle);  // 1869
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 1870
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 2033
	}
	{
		const char* s1; // 2039
		CUtlString::Get(); // 2039
		CUtlMemory<ChannelWeightlist_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> >::operator[](
				int i);  // 2039
	}
	CUtlMemory<CSeqGroupInstance, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CSeqGroupInstance, CUtlMemory<CSeqGroupInstance, int> >::operator[](
			int i);  // 1823
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 1827
	CUtlVectorBase<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> >::Count(); // 1843
	CUtlVectorBase<CSeqBoneMaskList, CUtlMemory<CSeqBoneMaskList, int> >::Count(); // 1856
	CUtlVectorBase<CSeqBoneMaskList, CUtlMemory<CSeqBoneMaskList, int> >::Count(); // 1857
	CUtlVectorBase<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> >::Count(); // 2037
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 413
	CSequenceGroupData::GetName(); // 1847
	CUtlVectorBase<CSeqBoneMaskList, CUtlMemory<CSeqBoneMaskList, int> >::Count(); // 1847
} /* size: 0, variables: 7, inline expansions: 12 (179 bytes) */

// <00CC2423> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2048
// variables: 11
// function calls: 73
void CAnimContainer_Imp::CreateSequencesForAnimations(const CModel* pModel)
{
	const bool  bModelIsModelDoc; // 2050
	const char   __FUNCTION__; // 22406
	{
		int nAnim; // 2052
		{
			const char* pszAnimName; // 2054
			const UtlHashHandle_t  hSeqHash; // 2056
			{
				int nSeq; // 2059
				const CAnimDesc* pAnimDesc; // 2062
				CUtlVectorBase<ISequence::Count(); // 2059
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
						int nAnimation);  // 2062
				CModelDocAnimResourceSeqBase::CModelDocAnimResourceSeqBase(
								const CAnimContainer* pAnimContainer,
								HSequence hSequence,
								int nAnimation,
								const CSeqS1SeqDesc* pSeqDesc);  // 2305
				CModelDocAnimResourceSeqWorldSpace::CModelDocAnimResourceSeqWorldSpace(
									const CAnimContainer* pAnimContainer,
									HSequence hSequence,
									int nAnimation,
									const CSeqS1SeqDesc* pSeqDesc);  // 2072
				HSequence::HSequence(
						int32 value);  // 2072
				CUtlMemory<ISequence::NumAllocated(); // 1247
				CUtlVectorBase<ISequence::AddToTail(
						ISequence *& src);  // 2072
				CUtlMemory<ISequence::operator[](
						int i);  // 602
				CUtlVectorBase<ISequence::Element(
					int i);  // 1252
				Construct<ISequence*, ISequence*>(ISequence** pMemory); // 1252
				CUtlMemory<ISequence::Base(); // 112
				CUtlVectorBase<ISequence::Base(); // 368
				CUtlVectorBase<ISequence::ResetDbgInfo(); // 824
				CUtlVectorBase<ISequence::GrowMemory(
						int num);  // 1249
				CUtlMemory<ISequence::NumAllocated(); // 1247
				CUtlVectorBase<ISequence::AddToTail(
						ISequence *& src);  // 2081
				CModelDocAnimResourceSeqBase::CModelDocAnimResourceSeqBase(
								const CAnimContainer* pAnimContainer,
								HSequence hSequence,
								int nAnimation,
								const CSeqS1SeqDesc* pSeqDesc);  // 2266
				CModelDocAnimResourceSeq::CModelDocAnimResourceSeq(
							const CAnimContainer* pAnimContainer,
							HSequence hSequence,
							int nAnimation,
							const CSeqS1SeqDesc* pSeqDesc);  // 2076
				HSequence::HSequence(
						int32 value);  // 2076
				CUtlMemory<ISequence::NumAllocated(); // 1247
				CUtlVectorBase<ISequence::AddToTail(
						ISequence *& src);  // 2076
				CModelDocAnimResourceSeqBase::CModelDocAnimResourceSeqBase(
								const CAnimContainer* pAnimContainer,
								HSequence hSequence,
								int nAnimation,
								const CSeqS1SeqDesc* pSeqDesc);  // 2289
				CModelDocAnimResourceSeqDelta::CModelDocAnimResourceSeqDelta(
								const CAnimContainer* pAnimContainer,
								HSequence hSequence,
								int nAnimation,
								const CSeqS1SeqDesc* pSeqDesc);  // 2068
				HSequence::HSequence(
						int32 value);  // 2068
				CUtlMemory<ISequence::NumAllocated(); // 1247
				CUtlVectorBase<ISequence::AddToTail(
						ISequence *& src);  // 2068
				HSequence::HSequence(
						int32 value);  // 2081
			}
			{
				const ISequence* pSeq; // 2088
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2087
				}
				{
					const CModelDocAnimResourceSeq* pAnimSeq; // 2091
				}
				GetBucketIndex(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
						UtlHashHandle_t handle);  // 403
				operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false this,
						int i);  // 588
				operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, f this,
						int i);  // 406
				CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entr this,
					int i);  // 406
				operator[](const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH this,
						UtlHashHandle_t handle);  // 127
				CUtlHashDict<short int, true, false>::Element(
					UtlHashHandle_t handle);  // 2087
				CUtlVectorBase<ISequence::IsValidIndex(
						int i);  // 2087
				operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false this,
						int i);  // 588
				operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, f this,
						int i);  // 406
				CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entr this,
					int i);  // 406
				operator[](const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH this,
						UtlHashHandle_t handle);  // 127
				CUtlHashDict<short int, true, false>::Element(
					UtlHashHandle_t handle);  // 2088
				CUtlMemory<ISequence::operator[](
						int i);  // 588
				CUtlVectorBase<ISequence::operator[](
						int i);  // 2088
			}
			HashStringFastCaseless(const char* pszKey); // 96
			CHash<true>::operator(
					const Entry_t& entry);  // 239
			{
				int bucketCount; // 249
				Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this); // 249
			}
			operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, this,
					int i);  // 595
			operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this,
					int i);  // 254
			Count(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false> this); // 255
			CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::operator[](
					int i);  // 609
			Element(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false> this,
				int i);  // 258
			CCompare<true>::operator(
					const Entry_t& entry1,
					const Entry_t& entry2);  // 258
			DoFind(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
				const Entry_t& src,
				unsigned int* pBucket,
				int* pIndex);  // 278
			{
			}
			{
			}
			BuildHandle(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
					int ndxBucket,
					int ndxKeyData);  // 280
			Find(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
				const Entry_t& src);  // 330
			CUtlHashDict<short int, true, false>::Find(
				const char* pName);  // 2056
		}
		CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::Count(); // 2052
	}
	operator&(ModelFlags_t a,
			ModelFlags_t b);  // 2050
} /* size: 0, variables: 2, inline expansions: 1 (8 bytes) */

// <00D31871> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2108
void CAnimContainer_Imp::CreateSequencesFromScript(const CModel* pModel)
{
} /* size: 0 */

// <00CC20F8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2118
// variable: 1
// function calls: 11
void CAnimContainer_Imp::CreateAutoplayList(const CModel* pModel)
{
	{
		HSequence hSequence; // 2122
		HSequence::operator==(
				const HSequence& other);  // 2122
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
				const HSequence& src);  // 2126
	}
	CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::RemoveAll(); // 2120
} /* size: 192, inline expansions: 1 (10 bytes) */

// <00CC12E5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2136
// variables: 8
// function calls: 57
void CAnimContainer_Imp::ResolveLocalReferences()
{
	{
		int nGroup; // 2138
		{
			CSeqGroupInstance* pGroup; // 2140
			const CSequenceGroupData* pSeqResourceData; // 2141
			{
				int j; // 2148
				{
					const char* s1; // 2150
					UtlHashHandle_t handle; // 2152
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 781
					CBufferString::operator char const*(); // 2150
					HashStringFastCaseless(const char* pszKey); // 96
					CHash<true>::operator(
							const Entry_t& entry);  // 239
					{
						int bucketCount; // 249
						Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this); // 249
					}
					operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, this,
							int i);  // 595
					operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this,
							int i);  // 254
					Count(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false> this); // 255
					CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::operator[](
							int i);  // 609
					Element(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false> this,
						int i);  // 258
					CCompare<true>::operator(
							const Entry_t& entry1,
							const Entry_t& entry2);  // 258
					DoFind(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
						const Entry_t& src,
						unsigned int* pBucket,
						int* pIndex);  // 278
					{
					}
					{
					}
					BuildHandle(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
							int ndxBucket,
							int ndxKeyData);  // 280
					Find(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
						const Entry_t& src);  // 330
					CUtlHashDict<short int, true, false>::Find(
						const char* pName);  // 2152
					CUtlMemory<HSequence, int>::operator[](
							int i);  // 588
					CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
							int i);  // 2159
					CUtlMemory<CBufferString, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
							int i);  // 2150
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 413
					CSequenceGroupData::GetName(); // 2160
					GetBucketIndex(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
							UtlHashHandle_t handle);  // 403
					operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false this,
							int i);  // 588
					operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, f this,
							int i);  // 406
					CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::operator[](
							int i);  // 602
					Element(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entr this,
						int i);  // 406
					operator[](const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH this,
							UtlHashHandle_t handle);  // 127
					CUtlHashDict<short int, true, false>::Element(
						UtlHashHandle_t handle);  // 2155
					HSequence::HSequence(
							int32 value);  // 2155
					CUtlMemory<HSequence, int>::operator[](
							int i);  // 588
					CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
							int i);  // 2155
				}
				CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 2148
			}
			CUtlMemory<CSeqGroupInstance, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CSeqGroupInstance, CUtlMemory<CSeqGroupInstance, int> >::operator[](
					int i);  // 2140
			CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
			CSequenceGroupResource::GetSequenceGroupResourceData(); // 106
			CSeqGroupInstance::GetSequenceGroupResourceData(); // 2141
			CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 2145
			CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::RemoveMultipleFromTail(
						int num);  // 1323
			CUtlMemory<HSequence, int>::NumAllocated(); // 782
			CUtlMemory<HSequence, int>::Base(); // 112
			CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::Base(); // 368
			CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::GrowMemory(
					int num);  // 784
			CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::GrowVector(
					int num);  // 1445
			{
				int i; // 1451
				CUtlMemory<HSequence, int>::operator[](
						int i);  // 602
				CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::Element(
					int i);  // 1453
				HSequence::HSequence(); // 1479
				Construct<HSequence>(HSequence* pMemory); // 1453
			}
			CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::AddMultipleToTail(
						int num);  // 1319
			CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::SetCount(
				int count);  // 2145
		}
		CUtlVectorBase<CSeqGroupInstance, CUtlMemory<CSeqGroupInstance, int> >::Count(); // 2138
	}
} /* size: 0 */

// <00CC0FB6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2166
// variables: 5
// function calls: 5
void GetNeutralReferencePoseBones(const CModel* pModel, CWritableBoneAccessor<CTransform>& mWsBones, HSequence hSequence)
{
	const char   __FUNCTION__; // 22406
	int nBonesToCopy; // 2170
	CTransform* pWsBones; // 2172
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2168
	}
	{
		IBoneSetup boneSetup; // 2176
	}
	CBoneAccessor<CTransform>::GetNumBones(); // 2168
	CBoneAccessor<CTransform>::GetNumBones(); // 2170
	Min<int>(const int& val1,
		const int& val2);  // 2170
	CWritableBoneAccessor<CTransform>::GetBoneArrayForWrite(); // 2172
	HSequence::operator==(
			const HSequence& other);  // 2174
} /* size: 0, variables: 3, inline expansions: 5 (35 bytes) */

// <00CBDACD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2191
// variables: 54
// function calls: 194
void CAnimContainer_Imp::PostInitAllSequences()
{
	const KeyValues3* pIKData; // 2196
	bool bLoadedIKData; // 2198
	const char   __FUNCTION__; // 22195
	{
		CKV3TransferLoadContext loadContext; // 2202
		CKV3TransferLoadContext::LoadClassInstance<CIKData_t>(
						CIKData_t* pClassInstance,
						const KeyValues3* pNestedValue);  // 495
		LoadValue<CIKData_t>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					CIKData_t& value,
					type *);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<CIKData_t>(
						CIKData_t& destValue,
						const KeyValues3* pLoadFromMember);  // 2203
	}
	{
		int n; // 2208
		{
			const KeyValues3* pIKRigKv3; // 2210
			{
				CKV3TransferLoadContext loadContext; // 2214
				CUtlStack<const KeyValues3::Count(); // 413
				CKV3TransferLoadContext::LoadClassInstance<CIKData_t>(
								CIKData_t* pClassInstance,
								const KeyValues3* pNestedValue);  // 495
				LoadValue<CIKData_t>(CKV3TransferLoadContext* pContext,
							const KeyValues3* pLoadFromValue,
							CIKData_t& value,
							type *);  // 1548
				CKV3TransferLoadContext::LoadValueDirect<CIKData_t>(
								CIKData_t& destValue,
								const KeyValues3* pLoadFromMember);  // 2215
			}
			CSmartPtr<CSequenceGroupData, CRefCountAccessor>::Get(); // 27
			CSequenceGroupResource::GetSequenceGroupResourceData(); // 106
			CSeqGroupInstance::GetSequenceGroupResourceData(); // 2210
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<7>(
						const char& str);  // 2210
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 101
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 96
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					KeyValues3* pDefaultValue);  // 101
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					const KeyValues3* pDefaultValue);  // 2210
		}
		CUtlVectorBase<CSeqGroupInstance, CUtlMemory<CSeqGroupInstance, int> >::Count(); // 348
		CAnimContainer::GetSeqGroupCount(); // 2208
	}
	{
		unique_ptr<CSpaceAgnosticBoneAccessor, std::default_delete<CSpaceAgnosticBoneAccessor> > pSpaceAgnosticBoneAccessor; // 2225
		{
			int nNumBones; // 2230
			int nNumDWords; // 2231
			int nNumBytes; // 2232
			uint32* pReadableBones; // 2233
			uint32* pReadableParentBones; // 2236
			uint32* pBonesToSetUp; // 2239
			CTransform* pmWsBones; // 2242
			CTransform* pxPsBones; // 2243
			CWritableBoneAccessor<CTransform> mBoneToWorldAccessor; // 2245
			CWritableBoneAccessor<CTransform> xBoneToParentAccessor; // 2246
			HSequence hSequence; // 2248
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2250
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2251
			}
			{
				int nSequenceIndex; // 2252
				{
					const ISequence* pSequence; // 2254
					CAnimContainer_Imp::GetISequenceVector(); // 2254
					CUtlMemory<ISequence::operator[](
							int i);  // 595
					CUtlVectorBase<ISequence::operator[](
							int i);  // 2254
					V_strcmp(const char* s1,
						const char* s2);  // 2256
				}
				CAnimContainer_Imp::GetISequenceVector(); // 2252
				CUtlVectorBase<ISequence::Count(); // 2252
			}
			CalcNumIntsForBits(int numBits); // 2231
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 356
			BitVec_SetAll(uint32* pDst,
					int nDWords);  // 2234
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 356
			BitVec_SetAll(uint32* pDst,
					int nDWords);  // 2237
			memset(void* __dest,
				int __ch,
				size_t __len);  // 51
			V_memset(void* dest,
				int fill,
				int count);  // 2240
			{
				{
				}
			}
			CBoneAccessor<CTransform>::CBoneAccessor(
					int nBones,
					const CTransform* pBones,
					const uint32* pReadableBones);  // 306
			CWritableBoneAccessor<CTransform>::CWritableBoneAccessor(
						int nBones,
						CTransform* pBones,
						uint32* pReadableBones);  // 2245
			{
				{
				}
			}
			CBoneAccessor<CTransform>::CBoneAccessor(
					int nBones,
					const CTransform* pBones,
					const uint32* pReadableBones);  // 306
			CWritableBoneAccessor<CTransform>::CWritableBoneAccessor(
						int nBones,
						CTransform* pBones,
						uint32* pReadableBones);  // 2246
			CBoneAccessor<CTransform>::Cleanup(); // 181
			CBoneAccessor<CTransform>::~CBoneAccessor(); // 70
			CWritableBoneAccessor<CTransform>::~CWritableBoneAccessor(); // 2268
			CBoneAccessor<CTransform>::Cleanup(); // 181
			CBoneAccessor<CTransform>::~CBoneAccessor(); // 70
			CWritableBoneAccessor<CTransform>::~CWritableBoneAccessor(); // 2268
		}
		{
			CIKChainOldData_t& oldChainData; // 2271
			CUtlVector<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >& __for_range; // 30338
			iterator __for_begin; // 42303
			iterator __for_end; // 42303
			{
				CIKChainData_t* pNewChainDataForEdit; // 2274
				{
					CIKChainData_t& chainData; // 2276
					CUtlVector<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >& __for_range; // 30344
					iterator __for_begin; // 48435
					iterator __for_end; // 48435
					CUtlMemory<CIKChainData_t, int>::Base(); // 112
					CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::Base(); // 102
					CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::begin(); // 2276
					CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::Count(); // 104
					CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::end(); // 2276
				}
				{
					_DebuggerBreakInlineExpressionWrapper(void); // 2285
				}
				{
					int nEndEffectorBone; // 2294
					int nRootBone; // 2295
					int nMaxJointsToAdd; // 2297
					CUtlVector<int, CUtlMemory<int, int> > jointChain; // 2315
					int nParentJoint; // 2353
					{
						int nCurrentJoint; // 2316
						CUtlMemory<int, int>::Base(); // 112
						CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
						CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
						CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
								int num);  // 1198
						CUtlMemory<int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
							int i);  // 1201
						CopyConstruct<int>(int* pMemory,
									const int& src);  // 1201
						CUtlMemory<int, int>::NumAllocated(); // 1196
						CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
								const int& src);  // 2326
					}
					{
						int nCurrentJoint; // 2336
						CUtlVector<int, CUtlMemory<int, int> >& __for_range; // 6194
						iterator __for_begin; // 62264
						iterator __for_end; // 62264
						{
							CIKChainJointData_t* pChainJointData; // 2338
							{
								IKJointConstraintPair_t& pairs; // 2343
								CUtlVector<IKJointConstraintPair_t, CUtlMemory<IKJointConstraintPair_t, int> >& __for_range; // 30350
								iterator __for_begin; // 25261
								iterator __for_end; // 25261
								CUtlMemory<IKJointConstraintPair_t, int>::Base(); // 112
								CUtlVectorBase<IKJointConstraintPair_t, CUtlMemory<IKJointConstraintPair_t, int> >::Base(); // 102
								CUtlVectorBase<IKJointConstraintPair_t, CUtlMemory<IKJointConstraintPair_t, int> >::begin(); // 2343
								CUtlVectorBase<IKJointConstraintPair_t, CUtlMemory<IKJointConstraintPair_t, int> >::Count(); // 104
								CUtlVectorBase<IKJointConstraintPair_t, CUtlMemory<IKJointConstraintPair_t, int> >::end(); // 2343
								CUtlMemory<IIKJointConstraintData::NumAllocated(); // 1247
								CUtlMemory<IIKJointConstraintData::Base(); // 112
								CUtlVectorBase<IIKJointConstraintData::Base(); // 368
								CUtlVectorBase<IIKJointConstraintData::ResetDbgInfo(); // 824
								CUtlMemory<IIKJointConstraintData::IsGrowable(); // 823
								CUtlMemory<IIKJointConstraintData::IsExternallyAllocated(); // 859
								CUtlMemory<IIKJointConstraintData::IsExternallyAllocated(); // 861
								CUtlMemory<IIKJointConstraintData::Grow(
									int num);  // 806
								CUtlVectorBase<IIKJointConstraintData::GrowMemory(
										int num);  // 1249
								CUtlMemory<IIKJointConstraintData::operator[](
										int i);  // 602
								CUtlVectorBase<IIKJointConstraintData::Element(
									int i);  // 1252
								Construct<IIKJointConstraintData*, IIKJointConstraintData*>(IIKJointConstraintData** pMemory); // 1252
								CUtlVectorBase<IIKJointConstraintData::AddToTail(
										IIKJointConstraintData *& src);  // 2347
							}
							CUtlMemory<CIKChainJointData_t, int>::NumAllocated(); // 1143
							CUtlMemory<CIKChainJointData_t, int>::Base(); // 112
							CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Base(); // 368
							CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::ResetDbgInfo(); // 824
							CUtlMemory<CIKChainJointData_t, int>::IsGrowable(); // 823
							CUtlMemory<CIKChainJointData_t, int>::IsExternallyAllocated(); // 859
							CUtlMemory<CIKChainJointData_t, int>::IsExternallyAllocated(); // 861
							CUtlMemory<CIKChainJointData_t, int>::Grow(
								int num);  // 806
							CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::GrowMemory(
									int num);  // 1145
							CUtlMemory<CIKChainJointData_t, int>::operator[](
									int i);  // 602
							CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Element(
								int i);  // 1148
							Construct<CIKChainJointData_t>(CIKChainJointData_t* pMemory); // 1148
							CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::AddToTail(); // 1156
							CUtlMemory<CIKChainJointData_t, int>::operator[](
									int i);  // 602
							CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Element(
								int i);  // 1156
							CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::AddToTailGetPtr(); // 2338
							CUtlString::operator=(
									const char* src);  // 2341
						}
						CUtlMemory<int, int>::Base(); // 112
						CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 102
						CUtlVectorBase<int, CUtlMemory<int, int> >::begin(); // 2336
						CUtlVectorBase<int, CUtlMemory<int, int> >::end(); // 2336
					}
					{
						CIKChainJointData_t* pChainJointData; // 2357
						CUtlString::operator=(
								const char* src);  // 2360
					}
					CUtlMemory<int, int>::ValidateGrowSize(); // 475
					CUtlMemory<int, int>::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 527
					CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
					CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 418
					CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 2315
					CUtlMemory<int, int>::NumAllocated(); // 1196
					CUtlMemory<int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
						int i);  // 1201
					CopyConstruct<int>(int* pMemory,
								const int& src);  // 1201
					CUtlMemory<int, int>::Base(); // 112
					CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
					CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
							int num);  // 1198
					CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
							const int& src);  // 2331
					{
						int i; // 726
						CUtlMemory<int, int>::operator[](
								int i);  // 728
						swap<int>(int& __a,
								int& __b);  // 19
						V_swap<int>(int& x,
								int& y);  // 728
						CUtlMemory<int, int>::operator[](
								int i);  // 728
					}
					CUtlVectorBase<int, CUtlMemory<int, int> >::Reverse(); // 2334
					CUtlMemory<int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
							int i);  // 2353
					CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
					CUtlMemory<int, int>::IsExternallyAllocated(); // 905
					CUtlMemory<int, int>::Purge(); // 903
					CUtlMemory<int, int>::Purge(); // 1799
					CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
					ValidateAlignment<int>(void); // 508
					CUtlMemory<int, int>::Purge(); // 510
					CUtlMemory<int, int>::~CUtlMemory(); // 562
					CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
					CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 2315
					CUtlString::Get(); // 441
					CUtlString::operator char const*(); // 2294
					CUtlString::Get(); // 441
					CUtlString::operator char const*(); // 2295
				}
				V_strlen(const char* str); // 393
				CUtlString::Length(); // 161
				CUtlString::Get(); // 161
				CUtlString::operator=(
						const CUtlString& src);  // 2290
			}
			CUtlMemory<CIKChainOldData_t, int>::Base(); // 112
			CUtlVectorBase<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >::Base(); // 102
			CUtlVectorBase<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >::begin(); // 2271
			CUtlVectorBase<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >::Count(); // 104
			CUtlVectorBase<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >::end(); // 2271
		}
		{
			unique_ptr<CIKControlRigDescription_Base, std::default_delete<CIKControlRigDescription_Base> > pControlRig; // 2371
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 2374
			}
			IIKControlRigDescription::IIKControlRigDescription(); // 12
			CUtlMemory<CIKChainOldData_t, int>::ValidateGrowSize(); // 475
			CUtlMemory<CIKChainOldData_t, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >::CUtlVector(); // 23
			CUtlString::CUtlString(); // 26
			IKBoneNameAndIndex_t::IKBoneNameAndIndex_t(); // 23
			CUtlString::CUtlString(); // 23
			CUtlString::CUtlString(); // 23
			CIKControlRigData_t::CIKControlRigData_t(); // 12
			CUtlLeanVectorBase<CIKChainDescription::CUtlLeanVectorBase(); // 411
			CUtlLeanVectorImpl<CUtlLeanVectorBase<CIKChainDescription::CUtlLeanVectorImpl(); // 832
			CUtlLeanVector<CIKChainDescription::CUtlLeanVector(); // 12
			CIKControlRigDescription_Base::CIKControlRigDescription_Base(); // 2371
			_Head_base<1, std::default_delete<CIKControlRigDescription_Base>, true>::_Head_base(); // 561
			_Tuple_impl<1, std::default_delete<CIKControlRigDescription_Base> >::_Tuple_impl(); // 303
			_Head_base<0, CIKControlRigDescription_Base::_Head_base(); // 303
			_Tuple_impl<0, CIKControlRigDescription_Base::_Tuple_impl(); // 966
			tuple<CIKControlRigDescription_Base::tuple(); // 169
			__uniq_ptr_impl<CIKControlRigDescription_Base, std::default_delete<CIKControlRigDescription_Base> >::_M_ptr(); // 169
			__uniq_ptr_impl<CIKControlRigDescription_Base, std::default_delete<CIKControlRigDescription_Base> >::__uniq_ptr_impl(
					pointer __p);  // 234
			__uniq_ptr_data<CIKControlRigDescription_Base, std::default_delete<CIKControlRigDescription_Base>, true, true>::__uniq_ptr_data(
					pointer);  // 311
			unique_ptr<CIKControlRigDescription_Base, std::default_delete<CIKControlRigDescription_Base> >::unique_ptr<>(
					pointer __p);  // 2371
			{
				CIKControlRigDescription_Base *& __ptr; // 396
				__uniq_ptr_impl<CIKControlRigDescription_Base, std::default_delete<CIKControlRigDescription_Base> >::_M_ptr(); // 396
				unique_ptr<CIKControlRigDescription_Base, std::default_delete<CIKControlRigDescription_Base> >::get_deleter(); // 398
				default_delete<CIKControlRigDescription_Base>::operator(
						CIKControlRigDescription_Base* __ptr);  // 398
			}
			unique_ptr<CIKControlRigDescription_Base, std::default_delete<CIKControlRigDescription_Base> >::~unique_ptr(); // 2378
		}
		CUtlVectorBase<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >::Count(); // 2227
		CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::Count(); // 2227
		CUtlVectorBase<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >::Count(); // 2368
		{
			CSpaceAgnosticBoneAccessor *& __ptr; // 396
			__uniq_ptr_impl<CSpaceAgnosticBoneAccessor, std::default_delete<CSpaceAgnosticBoneAccessor> >::_M_ptr(); // 396
			unique_ptr<CSpaceAgnosticBoneAccessor, std::default_delete<CSpaceAgnosticBoneAccessor> >::get_deleter(); // 398
			default_delete<CSpaceAgnosticBoneAccessor>::operator(
					CSpaceAgnosticBoneAccessor* __ptr);  // 398
		}
		unique_ptr<CSpaceAgnosticBoneAccessor, std::default_delete<CSpaceAgnosticBoneAccessor> >::~unique_ptr(); // 2379
	}
	{
		int index; // 2381
		{
			CHelperSequence* pSequence; // 2383
			CUtlMemory<ISequence::operator[](
					int i);  // 588
			CUtlVectorBase<ISequence::operator[](
					int i);  // 2383
			CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
			{
			}
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 1471
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
				int bitNum);  // 2384
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
			Bitvec_Set(uint32* pBits,
					int nBitNum);  // 1480
			CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
			{
			}
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
				int bitNum);  // 2386
		}
		CUtlVectorBase<ISequence::Count(); // 2381
	}
	CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1970
	CVarBitVecBase<short unsigned int, 32>::Base(); // 1970
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1970
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll(); // 2194
} /* size: 0, variables: 3, inline expansions: 5 (54 bytes) */

// <00CBD78F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2392
// variables: 2
// function calls: 11
void CAnimContainer_Imp::PostInitOther(HSequence hSequence)
{
	int index; // 2394
	CHelperSequence* pSequence; // 2396
	HSequence::GetRaw(); // 2394
	CUtlMemory<ISequence::operator[](
			int i);  // 588
	CUtlVectorBase<ISequence::operator[](
			int i);  // 2396
	BitVec_IsBitSet(const uint32* pBase,
			int nBitNum);  // 1471
	CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
	{
	}
	CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
		int bitNum);  // 2397
	CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
	Bitvec_Set(uint32* pBits,
			int nBitNum);  // 1480
	CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
	{
	}
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
		int bitNum);  // 2399
} /* size: 0, variables: 2, inline expansions: 11 (270 bytes) */

// <00CBD557> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2408
// variables: 6
// function calls: 4
void CAnimContainer_Imp::BuildTransitionGraph()
{
	const char   __FUNCTION__; // 22195
	{
		int i; // 2415
		{
			const ISequence* pSeq; // 2417
			const int  nEntryNodeId; // 2419
			const int  nExitNodeId; // 2420
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2424
			}
			CUtlMemory<ISequence::operator[](
					int i);  // 588
			CUtlVectorBase<ISequence::operator[](
					int i);  // 2417
		}
		CUtlVectorBase<ISequence::Count(); // 2415
	}
	CAnimTransitionGraph::NodeCount(); // 2412
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <00D34DE3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2441
// variables: 3
// function calls: 2
void CAnimContainer_Imp::GetBounds(int nAnimation, Vector* pVecMins, Vector* pVecMaxs)
{
	const int  nAnimBoneCount; // 2446
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_2452; // 2452
	AnimBounds_t* pBound; // 2459
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::Count(); // 135
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::IsEmpty(); // 2443
} /* size: 117, variables: 3, inline expansions: 2 (0 bytes) */

// <00D33B86> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2441
// variables: 16
// function calls: 69
void CAnimContainer_Imp::GetBounds(int nAnimation, Vector* pVecMins, Vector* pVecMaxs)
{
	const int  nAnimBoneCount; // 2446
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_2452; // 2452
	AnimBounds_t* pBound; // 2459
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 2452
	CUtlVectorBase<AnimBounds_t, CUtlMemory<AnimBounds_t, int> >::Count(); // 2454
	CUtlMemory<AnimBounds_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<AnimBounds_t, CUtlMemory<AnimBounds_t, int> >::operator[](
			int i);  // 2459
	{
		const CAnimDesc* pAnim; // 2462
		const AnimationGroupImp_t* pGroup; // 2463
		int nMeshes; // 2464
		Vector inMin; // 2466
		Vector inMax; // 2467
		bool bHasBones; // 2469
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
				int nAnimation);  // 2462
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 2466
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 2467
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 2470
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 2470
		{
			int m; // 2472
			{
				const CRenderMesh* pMeshData; // 2474
				{
					const CRenderSkeleton* pSkeleton; // 2477
					{
						int b; // 2478
						{
							int nModelBone; // 2481
							{
								int nAnimationBone; // 2491
								CUtlMemory<int, int>::operator[](
										int i);  // 595
								CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
										int i);  // 2491
								{
									const RenderSkeletonBone_t* pRenderBone; // 2494
									CUtlMemory<Vector, int>::operator[](
											int i);  // 595
									CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
											int i);  // 2496
									Vector::Vector(
										vec_t X,
										vec_t Y,
										vec_t Z);  // 2496
									Vector::Vector(); // 1450
									Vector::operator*(
											float fl);  // 2496
									Vector::Vector(); // 1443
									VectorSubtract(const Vector& a,
											const Vector& b,
											Vector& c);  // 1444
									Vector::operator-(
											const Vector& v);  // 2496
									CUtlMemory<Vector, int>::operator[](
											int i);  // 595
									CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
											int i);  // 2497
									Vector::Vector(
										vec_t X,
										vec_t Y,
										vec_t Z);  // 1414
									Vector::Min(
										const Vector& vOther);  // 2496
									VectorAdd(const Vector& a,
											const Vector& b,
											Vector& c);  // 1437
									Vector::Vector(); // 1436
									Vector::operator+(
											const Vector& v);  // 2497
									Vector::operator=(
											const Vector& vOther);  // 2496
									Vector::Vector(
										vec_t X,
										vec_t Y,
										vec_t Z);  // 2497
									Vector::Vector(); // 1450
									Vector::operator*(
											float fl);  // 2497
									Vector::Vector(
										vec_t X,
										vec_t Y,
										vec_t Z);  // 1421
									Vector::Max(
										const Vector& vOther);  // 2497
									Vector::operator=(
											const Vector& vOther);  // 2497
								}
							}
							CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 2484
							CUtlMemory<CUtlStringToken, int>::operator[](
									int i);  // 595
							CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::operator[](
									int i);  // 2481
						}
					}
				}
			}
		}
		Vector::LengthSqr(); // 627
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 628
		Vector::IsReasonable(
				float range);  // 2518
		Vector::LengthSqr(); // 627
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 628
		Vector::IsReasonable(
				float range);  // 2518
		{
		}
		Vector::operator=(
				const Vector& vOther);  // 2510
		Vector::operator=(
				const Vector& vOther);  // 2511
	}
	{
	}
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 2524
	Vector::operator=(
			const Vector& vOther);  // 2525
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 2528
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::Count(); // 2456
} /* size: 0, variables: 3, inline expansions: 12 (398 bytes) */

// <00CBD3D9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2441
// variables: 20
void CAnimContainer_Imp::GetBounds(int nAnimation, Vector* pVecMins, Vector* pVecMaxs)
{
	const int  nAnimBoneCount; // 2446
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_2452; // 2452
	AnimBounds_t* pBound; // 2459
	const char   __FUNCTION__; // 21898
	{
		const CAnimDesc* pAnim; // 2462
		const AnimationGroupImp_t* pGroup; // 2463
		int nMeshes; // 2464
		Vector inMin; // 2466
		Vector inMax; // 2467
		bool bHasBones; // 2469
		{
			int m; // 2472
			{
				const CRenderMesh* pMeshData; // 2474
				{
					const CRenderSkeleton* pSkeleton; // 2477
					{
						int b; // 2478
						{
							int nModelBone; // 2481
							{
								int nAnimationBone; // 2491
								{
									const RenderSkeletonBone_t* pRenderBone; // 2494
								}
							}
						}
					}
				}
			}
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2518
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2521
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2522
	}
} /* size: 0, variables: 4 */

// <00CBD1E0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2534
// function calls: 6
void CAnimContainer_Imp::FindOrAddNode(const char* pszNodeName)
{
	CAnimTransitionGraph::NodeCount(); // 2732
	{
	}
	CUtlSymbol::operator UtlSymId_t(); // 2743
	CUtlSymbol::CUtlSymbol(
			UtlSymId_t id);  // 2746
	CUtlSymbol::CUtlSymbol(
			UtlSymId_t id);  // 2591
	SymToNodeId(CUtlSymbol nSym); // 2746
	CAnimTransitionGraph::FindOrAddNode(
			const char* pszName);  // 2536
} /* size: 0, inline expansions: 6 (91 bytes) */

// <00CBD08A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2543
// function calls: 4
void CAnimContainer_Imp::GetNodeName(int nNode)
{
	CUtlSymbol::CUtlSymbol(
			UtlSymId_t id);  // 2611
	NodeIdToSym(int16 nNodeId); // 2757
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 2758
	CAnimTransitionGraph::GetNodeName(
			int16 nNodeId);  // 2545
} /* size: 82, inline expansions: 4 (50 bytes) */

// <00CBCFF9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2552
void CAnimContainer_Imp::GetNodeTransition(int nFromNode, int nToNode)
{
} /* size: 29 */

// <00CBCF17> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2557
// function calls: 4
void CAnimContainer_Imp::GetAnimationGraph()
{
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeIAnimationGraph>::operator CWeakHandle<InfoForResourceTypeIAnimationGraph>(); // 2559
} /* size: 18, inline expansions: 4 (16 bytes) */

// <00CBCDB2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2562
// function calls: 5
void CAnimContainer_Imp::SetAnimationGraph(HAnimationGraph hGraph)
{
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::GetBinding(); // 673
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeIAnimationGraph>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeIAnimationGraph>::operator=(
			const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 2564
} /* size: 126, inline expansions: 5 (190 bytes) */

// <00CBCB1A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2570
// variables: 3
// function calls: 8
void CAnimContainer_Imp::GetAnimGroupImp(int nAnimation)
{
	const char   __FUNCTION__; // 22060
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2572
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2573
	}
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::Count(); // 2572
	CUtlMemory<AnimInstanceMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::operator[](
			int i);  // 2573
	Count(const CUtlVectorBase<CAnimContainer_Imp::AnimationGroupImp_t, CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, i this); // 2573
	CUtlMemory<AnimInstanceMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::operator[](
			int i);  // 2574
	CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CAnimContainer_Imp::AnimationGroupImp_t, CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, i this,
			int i);  // 2574
} /* size: 0, variables: 1, inline expansions: 8 (36 bytes) */

// <00CBCABF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2587
// variables: 4
inline int16 SymToNodeId(CUtlSymbol nSym)
{
	const int16  nNodeId; // 2589
	const char   __FUNCTION__; // 21952
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2591
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2592
	}
} /* size: 0, variables: 2 */

// <00D27A69> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2604
// variable: 1
CUtlSymbol NodeIdToSym(int16 nNodeId)
{
	const CUtlSymbol  nSym; // 2611
	{
	}
} /* size: 0, variables: 1 */

// <00CBCA5A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2604
// variables: 4
inline CUtlSymbol NodeIdToSym(int16 nNodeId)
{
	const CUtlSymbol  nSym; // 2611
	const char   __FUNCTION__; // 21952
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2613
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2614
	}
} /* size: 0, variables: 2 */

// <00CBC8DE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2720
// function calls: 5
void CAnimTransitionGraph::CAnimTransitionGraph()
{
	CUtlMemory<short int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<short int, CUtlMemory<short int, int> >::CUtlVector(); // 2722
} /* size: 0, inline expansions: 5 (0 bytes) */

// <00CBC8C1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2720
void CAnimTransitionGraph::CAnimTransitionGraph()
{
} /* size: 0 */

// <00D318A2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2730
// variables: 2
// function calls: 5
void CAnimTransitionGraph::FindOrAddNode(const char* pszName)
{
	const UtlSymId_t  nSym; // 2743
	const int16  nNodeId; // 2746
	CAnimTransitionGraph::NodeCount(); // 2732
	{
	}
	CUtlSymbol::operator UtlSymId_t(); // 2743
	CUtlSymbol::CUtlSymbol(
			UtlSymId_t id);  // 2746
	CUtlSymbol::CUtlSymbol(
			UtlSymId_t id);  // 2591
	SymToNodeId(CUtlSymbol nSym); // 2746
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

// <00CBC82A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2730
// variables: 4
void CAnimTransitionGraph::FindOrAddNode(const char* pszName)
{
	const char   __FUNCTION__; // 22006
	const UtlSymId_t  nSym; // 2743
	const int16  nNodeId; // 2746
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2732
	}
} /* size: 0, variables: 3 */

// <00D31A31> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2755
// variable: 1
// function calls: 3
void CAnimTransitionGraph::GetNodeName(int16 nNodeId)
{
	const CUtlSymbol  nSym; // 2757
	CUtlSymbol::CUtlSymbol(
			UtlSymId_t id);  // 2611
	NodeIdToSym(int16 nNodeId); // 2757
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 2758
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <00CBC7F3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2755
// variable: 1
void CAnimTransitionGraph::GetNodeName(int16 nNodeId)
{
	const CUtlSymbol  nSym; // 2757
} /* size: 0, variables: 1 */

// <00D31B4E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2765
// variable: 1
// function calls: 23
void CAnimTransitionGraph::AllocateGraph()
{
	CAnimTransitionGraph::NodeCount(); // 2767
	{
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
	CUtlSymbolTable::GetNumStrings(); // 2769
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<short int, int>::NumAllocated(); // 782
	CUtlMemory<short int, int>::IsGrowable(); // 823
	CUtlMemory<short int, int>::IsExternallyAllocated(); // 859
	CUtlMemory<short int, int>::IsExternallyAllocated(); // 861
	CUtlMemory<short int, int>::Grow(
		int num);  // 806
	CUtlMemory<short int, int>::Base(); // 112
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Base(); // 368
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::SetCount(
		int count);  // 2774
	{
		int i; // 1554
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 1554
		CUtlMemory<short int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::Element(
			int i);  // 1556
	}
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::FillWithValue(
			const short int& src);  // 2775
	CAnimTransitionGraph::AllocateGraph(); // 2765
} /* size: 0, inline expansions: 20 (2111 bytes) */

// <00CBC78A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2765
// variables: 2
void CAnimTransitionGraph::AllocateGraph()
{
	const char   __FUNCTION__; // 22006
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2767
	}
} /* size: 0, variables: 1 */

// <00D32049> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2782
void CAnimTransitionGraph::NodeCount()
{
} /* size: 0 */

// <00CBC407> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2793
// variables: 7
// function calls: 10
void CAnimTransitionGraph::GetNodeTransition(int16 nFromNode, int16 nToNode)
{
	const int  nNodeCount; // 2795
	const CUtlSymbol  nFromSym; // 2800
	const CUtlSymbol  nToSym; // 2801
	const char   __FUNCTION__; // 22114
	const int  nGraphIndex; // 2809
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2806
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2807
	}
	CAnimTransitionGraph::NodeCount(); // 2795
	CUtlSymbol::CUtlSymbol(
			UtlSymId_t id);  // 2611
	NodeIdToSym(int16 nNodeId); // 2800
	CUtlSymbol::CUtlSymbol(
			UtlSymId_t id);  // 2611
	NodeIdToSym(int16 nNodeId); // 2801
	CUtlSymbol::operator UtlSymId_t(); // 2807
	CUtlSymbol::operator UtlSymId_t(); // 2809
	CUtlSymbol::operator UtlSymId_t(); // 2809
	CUtlMemory<short int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
			int i);  // 2811
} /* size: 0, variables: 5, inline expansions: 10 (87 bytes) */

// <00CBC0A4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2818
// variables: 7
// function calls: 10
void CAnimTransitionGraph::SetTransition(int16 nFromNode, int16 nToNode, int16 nTransitionNode)
{
	const CUtlSymbol  nFromSym; // 2820
	const CUtlSymbol  nToSym; // 2821
	const int  nNodeCount; // 2827
	const char   __FUNCTION__; // 22006
	const int  nGraphIndex; // 2832
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2829
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2830
	}
	CUtlSymbol::CUtlSymbol(
			UtlSymId_t id);  // 2611
	NodeIdToSym(int16 nNodeId); // 2820
	CUtlSymbol::CUtlSymbol(
			UtlSymId_t id);  // 2611
	NodeIdToSym(int16 nNodeId); // 2821
	CAnimTransitionGraph::NodeCount(); // 2827
	CUtlSymbol::operator UtlSymId_t(); // 2830
	CUtlSymbol::operator UtlSymId_t(); // 2832
	CUtlSymbol::operator UtlSymId_t(); // 2832
	CUtlMemory<short int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
			int i);  // 2834
} /* size: 0, variables: 5, inline expansions: 10 (77 bytes) */

// <00CBBDAE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2841
// variables: 9
// function calls: 9
void CAnimTransitionGraph::CalcTransitions()
{
	const int  nNodeCount; // 2843
	const char   __FUNCTION__; // 22060
	bool bHit; // 2849
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2844
	}
	{
		int nFromIndex; // 2854
		{
			int nToIndex; // 2856
			{
				int nSubIndex; // 2861
				CUtlMemory<short int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
						int i);  // 2864
			}
			CUtlMemory<short int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 2859
		}
	}
	{
		int nFromIndex; // 2877
		{
			int nToIndex; // 2879
			CUtlMemory<short int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 2881
		}
	}
	CAnimTransitionGraph::NodeCount(); // 2843
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
	CUtlSymbolTable::GetNumStrings(); // 2844
} /* size: 0, variables: 3, inline expansions: 3 (7 bytes) */

// <00CB9C92> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2887
// function calls: 146
void CAnimContainer::CAnimContainer()
{
	CUtlMemory<const CAnimationGroupResource::ValidateGrowSize(); // 475
	CUtlMemory<const CAnimationGroupResource::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const CAnimationGroupResource::ResetDbgInfo(); // 530
	CUtlVectorBase<const CAnimationGroupResource::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const CAnimationGroupResource::CUtlVector(); // 2891
	{
		CHash<true>::CHash(
			int ignored);  // 46
		CCompare<true>::CCompare(
			int ignored);  // 46
		SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 110
	}
	CUtlHashDict<short int, true, true>::CUtlHashDict(
			int bucketCount,
			int growCount,
			int initCount);  // 2891
	CUtlMemory<CAnimDecodeSwizzle, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAnimDecodeSwizzle, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAnimDecodeSwizzle, CUtlMemory<CAnimDecodeSwizzle, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAnimDecodeSwizzle, CUtlMemory<CAnimDecodeSwizzle, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimDecodeSwizzle, CUtlMemory<CAnimDecodeSwizzle, int> >::CUtlVector(); // 2891
	CUtlMemory<ResourceId_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<ResourceId_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ResourceId_t, CUtlMemory<ResourceId_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<ResourceId_t, CUtlMemory<ResourceId_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ResourceId_t, CUtlMemory<ResourceId_t, int> >::CUtlVector(); // 2891
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 2891
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 2891
	CUtlMemory<CAnimRetarget, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAnimRetarget, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAnimRetarget, CUtlMemory<CAnimRetarget, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAnimRetarget, CUtlMemory<CAnimRetarget, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimRetarget, CUtlMemory<CAnimRetarget, int> >::CUtlVector(); // 2891
	CUtlMemory<AnimInstanceMap_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<AnimInstanceMap_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::CUtlVector(); // 2891
	CUtlMemory<CSeqGroupInstance, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSeqGroupInstance, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSeqGroupInstance, CUtlMemory<CSeqGroupInstance, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CSeqGroupInstance, CUtlMemory<CSeqGroupInstance, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSeqGroupInstance, CUtlMemory<CSeqGroupInstance, int> >::CUtlVector(); // 2891
	CUtlMemory<PoseParamDesc_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<PoseParamDesc_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<PoseParamDesc_t, CUtlMemory<PoseParamDesc_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<PoseParamDesc_t, CUtlMemory<PoseParamDesc_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<PoseParamDesc_t, CUtlMemory<PoseParamDesc_t, int> >::CUtlVector(); // 2891
	CUtlMemory<short int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<short int, CUtlMemory<short int, int> >::CUtlVector(); // 2722
	CAnimTransitionGraph::CAnimTransitionGraph(); // 2891
	CUtlString::CUtlString(); // 23
	CUtlMemory<CIKChainOldData_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CIKChainOldData_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >::CUtlVector(); // 23
	CUtlString::CUtlString(); // 26
	IKBoneNameAndIndex_t::IKBoneNameAndIndex_t(); // 23
	CUtlString::CUtlString(); // 23
	CIKControlRigData_t::CIKControlRigData_t(); // 9
	CUtlMemory<CIKChainData_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CIKChainData_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::CUtlVector(); // 9
	CIKData_t::CIKData_t(); // 2891
	{
		CHash<true>::CHash(
			int ignored);  // 46
		CCompare<true>::CCompare(
			int ignored);  // 46
		SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 110
	}
	CUtlHashDict<ChannelElementMap_t, true, true>::CUtlHashDict(
			int bucketCount,
			int growCount,
			int initCount);  // 2891
	CStrongHandle<InfoForResourceTypeIAnimationGraph>::CStrongHandle(); // 2891
	CUtlMemory<SeqInstanceMap_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<SeqInstanceMap_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<SeqInstanceMap_t, CUtlMemory<SeqInstanceMap_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<SeqInstanceMap_t, CUtlMemory<SeqInstanceMap_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<SeqInstanceMap_t, CUtlMemory<SeqInstanceMap_t, int> >::CUtlVector(); // 2891
	CUtlMemory<HSequence, int>::ValidateGrowSize(); // 475
	CUtlMemory<HSequence, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<HSequence, CUtlMemory<HSequence, int> >::CUtlVector(); // 2891
	CUtlMemory<CAnimDataChannel, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAnimDataChannel, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::CUtlVector(); // 2891
	{
		CHash<true>::CHash(
			int ignored);  // 46
		CCompare<true>::CCompare(
			int ignored);  // 46
		SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 110
	}
	CUtlHashDict<UserDataElement_t, true, false>::CUtlHashDict(
			int bucketCount,
			int growCount,
			int initCount);  // 2891
	CUtlMemory<ChannelElementMap_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<ChannelElementMap_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::CUtlVector(); // 2891
	CUtlMemory<ChannelElementMap_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<ChannelElementMap_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::CUtlVector(); // 2891
	CUtlMemory<ChannelElementMap_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<ChannelElementMap_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::CUtlVector(); // 2891
	CUtlMemory<ChannelElementMap_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<ChannelElementMap_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::CUtlVector(); // 2891
	{
		CHash<true>::CHash(
			int ignored);  // 46
		CCompare<true>::CCompare(
			int ignored);  // 46
		SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 110
	}
	CUtlHashDict<short int, true, false>::CUtlHashDict(
			int bucketCount,
			int growCount,
			int initCount);  // 2891
	CUtlMemory<UserDataElementMap_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<UserDataElementMap_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<UserDataElementMap_t, CUtlMemory<UserDataElementMap_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<UserDataElementMap_t, CUtlMemory<UserDataElementMap_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<UserDataElementMap_t, CUtlMemory<UserDataElementMap_t, int> >::CUtlVector(); // 2891
	CUtlMemory<ChannelWeightlist_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<ChannelWeightlist_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> >::CUtlVector(); // 2891
	CUtlMemory<ElementRequestPattern_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<ElementRequestPattern_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::CUtlVector(); // 2891
	CUtlMemory<AnimBounds_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<AnimBounds_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<AnimBounds_t, CUtlMemory<AnimBounds_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<AnimBounds_t, CUtlMemory<AnimBounds_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<AnimBounds_t, CUtlMemory<AnimBounds_t, int> >::CUtlVector(); // 2891
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1281
	CVarBitVecBase<short unsigned int, 32>::CVarBitVecBase(); // 1405
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll(); // 1413
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::CBitVecT(); // 1211
	CVarBitVecT<short unsigned int, 32>::CVarBitVecT(); // 1223
	CVarBitVec::CVarBitVec(); // 2891
} /* size: 1301, inline expansions: 134 (3075 bytes) */

// <00CB9C79> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2887
void CAnimContainer::CAnimContainer()
{
} /* size: 0 */

// <00CB662B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2895
// variables: 4
// function calls: 280
void CAnimContainer::~CAnimContainer()
{
	CVarBitVecBase<short unsigned int, 32>::FreeInts(); // 1342
	CVarBitVecBase<short unsigned int, 32>::~CVarBitVecBase(); // 914
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::~CBitVecT(); // 1207
	CVarBitVecT<short unsigned int, 32>::~CVarBitVecT(); // 1220
	CVarBitVec::~CVarBitVec(); // 2897
	CUtlVectorBase<AnimBounds_t, CUtlMemory<AnimBounds_t, int> >::RemoveAll(); // 1798
	CUtlMemory<AnimBounds_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<AnimBounds_t, int>::Purge(); // 903
	CUtlMemory<AnimBounds_t, int>::Purge(); // 1799
	CUtlVectorBase<AnimBounds_t, CUtlMemory<AnimBounds_t, int> >::Purge(); // 560
	ValidateAlignment<AnimBounds_t>(void); // 508
	CUtlMemory<AnimBounds_t, int>::Purge(); // 510
	CUtlMemory<AnimBounds_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<AnimBounds_t, CUtlMemory<AnimBounds_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AnimBounds_t, CUtlMemory<AnimBounds_t, int> >::~CUtlVector(); // 2897
	{
		int i; // 1721
		CUtlMemory<ElementRequestPattern_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Element(
			int i);  // 1723
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
		CUtlMemory<int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 214
		CVarBitVecBase<short unsigned int, 32>::FreeInts(); // 1342
		CVarBitVecBase<short unsigned int, 32>::~CVarBitVecBase(); // 914
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::~CBitVecT(); // 1207
		CVarBitVecT<short unsigned int, 32>::~CVarBitVecT(); // 1220
		CVarBitVec::~CVarBitVec(); // 214
		CVarBitVecBase<short unsigned int, 32>::FreeInts(); // 1342
		CVarBitVecBase<short unsigned int, 32>::~CVarBitVecBase(); // 914
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::~CBitVecT(); // 1207
		CVarBitVecT<short unsigned int, 32>::~CVarBitVecT(); // 1220
		CVarBitVec::~CVarBitVec(); // 214
		ElementRequestPattern_t::~ElementRequestPattern_t(); // 1526
		Destruct<ElementRequestPattern_t>(ElementRequestPattern_t* pMemory); // 1723
	}
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::RemoveAll(); // 1798
	CUtlMemory<ElementRequestPattern_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<ElementRequestPattern_t, int>::Purge(); // 903
	CUtlMemory<ElementRequestPattern_t, int>::Purge(); // 1799
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Purge(); // 560
	ValidateAlignment<ElementRequestPattern_t>(void); // 508
	CUtlMemory<ElementRequestPattern_t, int>::Purge(); // 510
	CUtlMemory<ElementRequestPattern_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::~CUtlVector(); // 2897
	CUtlMemory<ChannelWeightlist_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<ChannelWeightlist_t, int>::Purge(); // 903
	CUtlMemory<ChannelWeightlist_t, int>::Purge(); // 1799
	CUtlVectorBase<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> >::Purge(); // 560
	ValidateAlignment<ChannelWeightlist_t>(void); // 508
	CUtlMemory<ChannelWeightlist_t, int>::Purge(); // 510
	CUtlMemory<ChannelWeightlist_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> >::~CUtlVector(); // 2897
	CUtlVectorBase<UserDataElementMap_t, CUtlMemory<UserDataElementMap_t, int> >::RemoveAll(); // 1798
	CUtlMemory<UserDataElementMap_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<UserDataElementMap_t, int>::Purge(); // 903
	CUtlMemory<UserDataElementMap_t, int>::Purge(); // 1799
	CUtlVectorBase<UserDataElementMap_t, CUtlMemory<UserDataElementMap_t, int> >::Purge(); // 560
	ValidateAlignment<UserDataElementMap_t>(void); // 508
	CUtlMemory<UserDataElementMap_t, int>::Purge(); // 510
	CUtlMemory<UserDataElementMap_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<UserDataElementMap_t, CUtlMemory<UserDataElementMap_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<UserDataElementMap_t, CUtlMemory<UserDataElementMap_t, int> >::~CUtlVector(); // 2897
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::RemoveAll(); // 1798
	CUtlMemory<ChannelElementMap_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<ChannelElementMap_t, int>::Purge(); // 903
	CUtlMemory<ChannelElementMap_t, int>::Purge(); // 1799
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::Purge(); // 560
	ValidateAlignment<ChannelElementMap_t>(void); // 508
	CUtlMemory<ChannelElementMap_t, int>::Purge(); // 510
	CUtlMemory<ChannelElementMap_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::~CUtlVector(); // 2897
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::RemoveAll(); // 1798
	CUtlMemory<ChannelElementMap_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<ChannelElementMap_t, int>::Purge(); // 903
	CUtlMemory<ChannelElementMap_t, int>::Purge(); // 1799
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::Purge(); // 560
	ValidateAlignment<ChannelElementMap_t>(void); // 508
	CUtlMemory<ChannelElementMap_t, int>::Purge(); // 510
	CUtlMemory<ChannelElementMap_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::~CUtlVector(); // 2897
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::RemoveAll(); // 1798
	CUtlMemory<ChannelElementMap_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<ChannelElementMap_t, int>::Purge(); // 903
	CUtlMemory<ChannelElementMap_t, int>::Purge(); // 1799
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::Purge(); // 560
	ValidateAlignment<ChannelElementMap_t>(void); // 508
	CUtlMemory<ChannelElementMap_t, int>::Purge(); // 510
	CUtlMemory<ChannelElementMap_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::~CUtlVector(); // 2897
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::RemoveAll(); // 1798
	CUtlMemory<ChannelElementMap_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<ChannelElementMap_t, int>::Purge(); // 903
	CUtlMemory<ChannelElementMap_t, int>::Purge(); // 1799
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::Purge(); // 560
	ValidateAlignment<ChannelElementMap_t>(void); // 508
	CUtlMemory<ChannelElementMap_t, int>::Purge(); // 510
	CUtlMemory<ChannelElementMap_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::~CUtlVector(); // 2897
	{
		int i; // 1721
		CUtlMemory<CAnimDataChannel, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::Element(
			int i);  // 1723
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 1799
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::Purge(); // 510
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 193
		CAnimDataChannel::~CAnimDataChannel(); // 1526
		Destruct<CAnimDataChannel>(CAnimDataChannel* pMemory); // 1723
	}
	CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimDataChannel, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimDataChannel, int>::Purge(); // 903
	CUtlMemory<CAnimDataChannel, int>::Purge(); // 1799
	CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::Purge(); // 560
	ValidateAlignment<CAnimDataChannel>(void); // 508
	CUtlMemory<CAnimDataChannel, int>::Purge(); // 510
	CUtlMemory<CAnimDataChannel, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::~CUtlVector(); // 2897
	CStrongHandle<InfoForResourceTypeIAnimationGraph>::~CStrongHandle(); // 2897
	CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::RemoveAll(); // 1798
	CUtlMemory<HSequence, int>::IsExternallyAllocated(); // 905
	CUtlMemory<HSequence, int>::Purge(); // 903
	CUtlMemory<HSequence, int>::Purge(); // 1799
	CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::Purge(); // 560
	ValidateAlignment<HSequence>(void); // 508
	CUtlMemory<HSequence, int>::Purge(); // 510
	CUtlMemory<HSequence, int>::~CUtlMemory(); // 562
	CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::~CUtlVectorBase(); // 410
	CUtlVector<HSequence, CUtlMemory<HSequence, int> >::~CUtlVector(); // 2897
	CUtlString::~CUtlString(); // 23
	CUtlString::~CUtlString(); // 23
	CUtlString::~CUtlString(); // 9
	IKBoneNameAndIndex_t::~IKBoneNameAndIndex_t(); // 23
	{
		int i; // 1721
		CUtlMemory<CIKChainOldData_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >::Element(
			int i);  // 1723
		Destruct<CIKChainOldData_t>(CIKChainOldData_t* pMemory); // 1723
	}
	CUtlVectorBase<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CIKChainOldData_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CIKChainOldData_t, int>::Purge(); // 903
	CUtlMemory<CIKChainOldData_t, int>::Purge(); // 1799
	CUtlVectorBase<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >::Purge(); // 560
	ValidateAlignment<CIKChainOldData_t>(void); // 508
	CUtlMemory<CIKChainOldData_t, int>::Purge(); // 510
	CUtlMemory<CIKChainOldData_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >::~CUtlVector(); // 23
	CIKControlRigData_t::~CIKControlRigData_t(); // 9
	CUtlMemory<CIKChainData_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CIKChainData_t, int>::Purge(); // 903
	CUtlMemory<CIKChainData_t, int>::Purge(); // 1799
	CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::Purge(); // 560
	ValidateAlignment<CIKChainData_t>(void); // 508
	CUtlMemory<CIKChainData_t, int>::Purge(); // 510
	CUtlMemory<CIKChainData_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::~CUtlVector(); // 9
	CIKData_t::~CIKData_t(); // 2897
	CUtlVectorBase<SeqInstanceMap_t, CUtlMemory<SeqInstanceMap_t, int> >::RemoveAll(); // 1798
	CUtlMemory<SeqInstanceMap_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<SeqInstanceMap_t, int>::Purge(); // 903
	CUtlMemory<SeqInstanceMap_t, int>::Purge(); // 1799
	CUtlVectorBase<SeqInstanceMap_t, CUtlMemory<SeqInstanceMap_t, int> >::Purge(); // 560
	ValidateAlignment<SeqInstanceMap_t>(void); // 508
	CUtlMemory<SeqInstanceMap_t, int>::Purge(); // 510
	CUtlMemory<SeqInstanceMap_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<SeqInstanceMap_t, CUtlMemory<SeqInstanceMap_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<SeqInstanceMap_t, CUtlMemory<SeqInstanceMap_t, int> >::~CUtlVector(); // 2897
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::RemoveAll(); // 1798
	CUtlMemory<short int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short int, int>::Purge(); // 903
	CUtlMemory<short int, int>::Purge(); // 1799
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Purge(); // 560
	ValidateAlignment<short int>(void); // 508
	CUtlMemory<short int, int>::Purge(); // 510
	CUtlMemory<short int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short int, CUtlMemory<short int, int> >::~CUtlVector(); // 284
	CAnimTransitionGraph::~CAnimTransitionGraph(); // 2897
	CUtlVectorBase<PoseParamDesc_t, CUtlMemory<PoseParamDesc_t, int> >::RemoveAll(); // 1798
	CUtlMemory<PoseParamDesc_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<PoseParamDesc_t, int>::Purge(); // 903
	CUtlMemory<PoseParamDesc_t, int>::Purge(); // 1799
	CUtlVectorBase<PoseParamDesc_t, CUtlMemory<PoseParamDesc_t, int> >::Purge(); // 560
	ValidateAlignment<PoseParamDesc_t>(void); // 508
	CUtlMemory<PoseParamDesc_t, int>::Purge(); // 510
	CUtlMemory<PoseParamDesc_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<PoseParamDesc_t, CUtlMemory<PoseParamDesc_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<PoseParamDesc_t, CUtlMemory<PoseParamDesc_t, int> >::~CUtlVector(); // 2897
	CUtlMemory<CSeqGroupInstance, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSeqGroupInstance, int>::Purge(); // 903
	CUtlMemory<CSeqGroupInstance, int>::Purge(); // 1799
	CUtlVectorBase<CSeqGroupInstance, CUtlMemory<CSeqGroupInstance, int> >::Purge(); // 560
	ValidateAlignment<CSeqGroupInstance>(void); // 508
	CUtlMemory<CSeqGroupInstance, int>::Purge(); // 510
	CUtlMemory<CSeqGroupInstance, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CSeqGroupInstance, CUtlMemory<CSeqGroupInstance, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CSeqGroupInstance, CUtlMemory<CSeqGroupInstance, int> >::~CUtlVector(); // 2897
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::RemoveAll(); // 1798
	CUtlMemory<AnimInstanceMap_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<AnimInstanceMap_t, int>::Purge(); // 903
	CUtlMemory<AnimInstanceMap_t, int>::Purge(); // 1799
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::Purge(); // 560
	ValidateAlignment<AnimInstanceMap_t>(void); // 508
	CUtlMemory<AnimInstanceMap_t, int>::Purge(); // 510
	CUtlMemory<AnimInstanceMap_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::~CUtlVector(); // 2897
	{
		int i; // 1721
		CUtlMemory<CAnimRetarget, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimRetarget, CUtlMemory<CAnimRetarget, int> >::Element(
			int i);  // 1723
		Destruct<CAnimRetarget>(CAnimRetarget* pMemory); // 1723
	}
	CUtlVectorBase<CAnimRetarget, CUtlMemory<CAnimRetarget, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimRetarget, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimRetarget, int>::Purge(); // 903
	CUtlMemory<CAnimRetarget, int>::Purge(); // 1799
	CUtlVectorBase<CAnimRetarget, CUtlMemory<CAnimRetarget, int> >::Purge(); // 560
	ValidateAlignment<CAnimRetarget>(void); // 508
	CUtlMemory<CAnimRetarget, int>::Purge(); // 510
	CUtlMemory<CAnimRetarget, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimRetarget, CUtlMemory<CAnimRetarget, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimRetarget, CUtlMemory<CAnimRetarget, int> >::~CUtlVector(); // 2897
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 2897
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 2897
	CUtlVectorBase<ResourceId_t, CUtlMemory<ResourceId_t, int> >::RemoveAll(); // 1798
	CUtlMemory<ResourceId_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceId_t, int>::Purge(); // 903
	CUtlMemory<ResourceId_t, int>::Purge(); // 1799
	CUtlVectorBase<ResourceId_t, CUtlMemory<ResourceId_t, int> >::Purge(); // 560
	ValidateAlignment<ResourceId_t>(void); // 508
	CUtlMemory<ResourceId_t, int>::Purge(); // 510
	CUtlMemory<ResourceId_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<ResourceId_t, CUtlMemory<ResourceId_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<ResourceId_t, CUtlMemory<ResourceId_t, int> >::~CUtlVector(); // 2897
	CUtlMemory<CAnimDecodeSwizzle, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimDecodeSwizzle, int>::Purge(); // 903
	CUtlMemory<CAnimDecodeSwizzle, int>::Purge(); // 1799
	CUtlVectorBase<CAnimDecodeSwizzle, CUtlMemory<CAnimDecodeSwizzle, int> >::Purge(); // 560
	ValidateAlignment<CAnimDecodeSwizzle>(void); // 508
	CUtlMemory<CAnimDecodeSwizzle, int>::Purge(); // 510
	CUtlMemory<CAnimDecodeSwizzle, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimDecodeSwizzle, CUtlMemory<CAnimDecodeSwizzle, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimDecodeSwizzle, CUtlMemory<CAnimDecodeSwizzle, int> >::~CUtlVector(); // 2897
	CUtlVectorBase<const CAnimationGroupResource::RemoveAll(); // 1798
	CUtlMemory<const CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<const CAnimationGroupResource::Purge(); // 903
	CUtlMemory<const CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<const CAnimationGroupResource::Purge(); // 560
	CUtlVectorBase<const CAnimationGroupResource::~CUtlVectorBase(); // 410
	CUtlVector<const CAnimationGroupResource::~CUtlVector(); // 2897
} /* size: 1481, inline expansions: 236 (6023 bytes) */

// <00CB65C5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2895
void CAnimContainer::~CAnimContainer()
{
} /* size: 0 */

