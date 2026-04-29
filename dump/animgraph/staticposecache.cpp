
//
// animgraph/staticposecache.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 10
//

// <00F64071> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.cpp:16
// variables: 3
// function calls: 9
void CCachedPose::Setup(int nTransformCount, int nMorphCount)
{
	{
		int* _pCrash; // 313
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 313
	{
		ElemType_t* pNew; // 347
		ElemType_t* pBase; // 348
		CUtlLeanVectorBase<CTransform, short int>::Base(); // 279
		CUtlLeanVectorBase<CTransform, short int>::Base(); // 348
		Min<short int>(const short int& val1,
				const short int& val2);  // 349
		Construct<CTransform, CTransform>(CTransform* pMemory); // 100
		Destruct<CTransform>(CTransform* pMemory); // 101
		UtlTraitsMoveRawMemoryRange<CTransform>(CTransform* pFrom,
							CTransform* pFromEnd,
							CTransform* pTo);  // 349
	}
	CUtlLeanVectorBase<CTransform, short int>::EnsureCapacity(
			int nCapacity,
			bool bConservative);  // 516
	CUtlLeanVectorImpl<CUtlLeanVectorBase<CTransform, short int>, CTransform, short int>::SetCount(
		int nCount);  // 18
} /* size: 483, inline expansions: 3 (812 bytes) */

// <00F9FE14> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.cpp:22
void CCachedPose::GetSequence()
{
} /* size: 0 */

// <00F9FE3E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.cpp:27
void CCachedPose::SetSequence(HSequence hSequence)
{
} /* size: 0 */

// <00F9FE6F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.cpp:32
void CCachedPose::GetCycle()
{
} /* size: 0 */

// <00F9FE99> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.cpp:37
void CCachedPose::SetCycle(float flCycle)
{
	{
	}
} /* size: 0 */

// <00F63FAB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.cpp:37
// variables: 2
void CCachedPose::SetCycle(float flCycle)
{
	const char   __FUNCTION__; // 37543
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 39
	}
} /* size: 0, variables: 1 */

// <00F63BCE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.cpp:47
// variables: 6
// function calls: 12
void CStaticPoseCache::CStaticPoseCache(const CModel* pModel)
{
	{
		{
			const CAnimContainer* pContainer; // 57
			{
			}
			{
				const CAnimDataChannel* pChannel; // 62
				{
				}
			}
		}
	}
	{
		CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 48
		CUtlLeanVectorBase<CCachedPose, short int>::CUtlLeanVectorBase(); // 411
		CUtlLeanVectorImpl<CUtlLeanVectorBase<CCachedPose, short int>, CCachedPose, short int>::CUtlLeanVectorImpl(); // 832
		CUtlLeanVector<CCachedPose, short int>::CUtlLeanVector(); // 48
		{
			const CAnimContainer* pContainer; // 57
			{
			}
			{
				ElemType_t* pNew; // 347
				ElemType_t* pBase; // 348
				CUtlLeanVectorBase<CCachedPose, short int>::Base(); // 279
				CUtlLeanVectorBase<CCachedPose, short int>::Base(); // 348
				Min<short int>(const short int& val1,
						const short int& val2);  // 349
			}
			CUtlLeanVectorBase<CCachedPose, short int>::EnsureCapacity(
					int nCapacity,
					bool bConservative);  // 52
			{
				const CAnimDataChannel* pChannel; // 62
				CUtlMemory<CAnimDataChannel, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
						int i);  // 62
				{
					_DebuggerBreakInlineExpressionWrapper(void); // 63
				}
			}
		}
	}
} /* size: 0 */

// <00F63AEC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.cpp:47
// variables: 4
void CStaticPoseCache::CStaticPoseCache(const CModel* pModel)
{
	const char   __FUNCTION__; // 37754
	{
		const CAnimContainer* pContainer; // 57
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
		}
		{
			const CAnimDataChannel* pChannel; // 62
			{
			}
		}
	}
} /* size: 0, variables: 1 */

// <00F62DDB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.cpp:72
// variables: 10
// function calls: 47
void CStaticPoseCache::AddPose(HSequence hSequence, float flCycle)
{
	{
		int index; // 89
		CCachedPose& pose; // 90
		IBoneSetup setup; // 95
		{
			int i; // 80
			{
				const CCachedPose& cachedPose; // 82
				CUtlLeanVectorBase<CCachedPose, short int>::Base(); // 279
				CUtlLeanVectorBase<CCachedPose, short int>::Base(); // 447
				CUtlLeanVectorImpl<CUtlLeanVectorBase<CCachedPose, short int>, CCachedPose, short int>::Element(
					int i);  // 438
				CUtlLeanVectorImpl<CUtlLeanVectorBase<CCachedPose, short int>, CCachedPose, short int>::operator[](
						int i);  // 82
				CCachedPose::GetSequence(); // 83
				CCachedPose::GetCycle(); // 83
				StaticPoseCacheHandle::StaticPoseCacheHandle(
							const uint32  id);  // 85
			}
			CUtlLeanVectorImpl<CUtlLeanVectorBase<CCachedPose, short int>, CCachedPose, short int>::Count(); // 80
		}
		{
			const CAnimContainer* pContainer; // 103
			const CAnimationResult& animResult; // 104
			CAnimContainer::GetMorphChannel(); // 105
			CAnimContainer::GetMorphChannel(); // 107
			CUtlMemory<float, int>::Base(); // 112
			CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 40
			CCachedPose::GetMorphWeights(); // 107
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 107
		}
		{
			int* _pCrash; // 313
		}
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 313
		{
			ElemType_t* pNew; // 347
			ElemType_t* pBase; // 348
			CUtlLeanVectorBase<CCachedPose, short int>::Base(); // 279
			CUtlLeanVectorBase<CCachedPose, short int>::Base(); // 348
			Min<short int>(const short int& val1,
					const short int& val2);  // 349
		}
		CUtlLeanVectorBase<CCachedPose, short int>::EnsureCapacity(
				int nCapacity,
				bool bConservative);  // 629
		CUtlLeanVectorBase<CCachedPose, short int>::Base(); // 279
		CUtlLeanVectorBase<CCachedPose, short int>::Base(); // 630
		CUtlLeanVectorBase<CTransform, short int>::CUtlLeanVectorBase(); // 411
		CUtlLeanVectorImpl<CUtlLeanVectorBase<CTransform, short int>, CTransform, short int>::CUtlLeanVectorImpl(); // 832
		CUtlLeanVector<CTransform, short int>::CUtlLeanVector(); // 22
		CUtlMemory<float, int>::ValidateGrowSize(); // 475
		CUtlMemory<float, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 22
		CCachedPose::CCachedPose(); // 1479
		Construct<CCachedPose>(CCachedPose* pMemory); // 63
		UtlTraitsConstructRange<CCachedPose>(CCachedPose* pStart,
							CCachedPose* pEnd);  // 631
		CUtlLeanVectorImpl<CUtlLeanVectorBase<CCachedPose, short int>, CCachedPose, short int>::AddToTailGetPtr(); // 660
		CUtlLeanVectorImpl<CUtlLeanVectorBase<CCachedPose, short int>, CCachedPose, short int>::AddToTail(); // 89
		CUtlLeanVectorBase<CCachedPose, short int>::Base(); // 279
		CUtlLeanVectorBase<CCachedPose, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorBase<CCachedPose, short int>, CCachedPose, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorBase<CCachedPose, short int>, CCachedPose, short int>::operator[](
				int i);  // 90
		CCachedPose::SetSequence(
				HSequence hSequence);  // 92
		{
		}
		CCachedPose::SetCycle(
			float flCycle);  // 93
		CUtlLeanVectorBase<CTransform, short int>::Base(); // 279
		CUtlLeanVectorBase<CTransform, short int>::Base(); // 36
		CCachedPose::GetTransforms(); // 99
		StaticPoseCacheHandle::StaticPoseCacheHandle(
					const uint32  id);  // 111
	}
	HSequence::operator==(
			const HSequence& other);  // 77
	StaticPoseCacheHandle::StaticPoseCacheHandle(); // 114
} /* size: 0, inline expansions: 2 (6 bytes) */

// <00F626A8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.cpp:118
// variables: 3
// function calls: 15
void CStaticPoseCache::GetPose(StaticPoseCacheHandle handle)
{
	const char   __FUNCTION__; // 37516
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 120
	}
	{
		const CCachedPose  s_emptyCachedPose; // 125
		CUtlLeanVectorBase<CTransform, short int>::CUtlLeanVectorBase(); // 411
		CUtlLeanVectorImpl<CUtlLeanVectorBase<CTransform, short int>, CTransform, short int>::CUtlLeanVectorImpl(); // 832
		CUtlLeanVector<CTransform, short int>::CUtlLeanVector(); // 22
		CUtlMemory<float, int>::ValidateGrowSize(); // 475
		CUtlMemory<float, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 22
		CCachedPose::CCachedPose(); // 125
		CUtlLeanVectorImpl<CUtlLeanVectorBase<CCachedPose, short int>, CCachedPose, short int>::Count(); // 124
	}
	StaticPoseCacheHandle::IsValid(); // 120
	CUtlLeanVectorImpl<CUtlLeanVectorBase<CCachedPose, short int>, CCachedPose, short int>::Count(); // 122
	CUtlLeanVectorBase<CCachedPose, short int>::Base(); // 452
	CUtlLeanVectorImpl<CUtlLeanVectorBase<CCachedPose, short int>, CCachedPose, short int>::Element(
		int i);  // 442
	CUtlLeanVectorImpl<CUtlLeanVectorBase<CCachedPose, short int>, CCachedPose, short int>::operator[](
			int i);  // 129
} /* size: 0, variables: 1, inline expansions: 5 (56 bytes) */

