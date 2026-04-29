
//
// bonesetup/bone_setup.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 104
//

// <0273A895> bonesetup/bone_setup.cpp:25
// variables: 2
// function call: 1
void CBoneSetup::InitializeResult(CAnimationResult& animResult)
{
	const CAnimContainer* pContainer; // 32
	{
		int nChannel; // 40
		CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::Count(); // 40
	}
} /* size: 113, variables: 1 */

// <0273A745> bonesetup/bone_setup.cpp:61
// variables: 4
// function call: 1
void CBoneSetup::ZeroResult(CAnimationResult& animResult)
{
	const CAnimContainer* pAnimContainer; // 63
	const char   __FUNCTION__; // 8736
	{
		int nChannel; // 66
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 70
		}
		CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::Count(); // 66
	}
} /* size: 0, variables: 2 */

// <0273A529> bonesetup/bone_setup.cpp:81
// function calls: 6
void IBoneSetup::IBoneSetup(const CModel* pModel)
{
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 376
	simpleTSPoolStruct_t::simpleTSPoolStruct_t(); // 382
	CTSPool<CBoneSetup>::GetObject(); // 83
} /* size: 207, inline expansions: 6 (347 bytes) */

// <0273A501> bonesetup/bone_setup.cpp:81
void IBoneSetup::IBoneSetup(const CModel* pModel)
{
} /* size: 0 */

// <0273A353> bonesetup/bone_setup.cpp:87
// function calls: 5
void IBoneSetup::~IBoneSetup()
{
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 371
	CTSPool<CBoneSetup>::PutObject(
			CBoneSetup* pInfo);  // 92
} /* size: 153, inline expansions: 5 (205 bytes) */

// <0273A337> bonesetup/bone_setup.cpp:87
void IBoneSetup::~IBoneSetup()
{
} /* size: 0 */

// <02739FE8> bonesetup/bone_setup.cpp:96
// function calls: 14
void IBoneSetup::StartFrame(int nFrameTick, float flRealTime)
{
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::Count(); // 135
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::IsEmpty(); // 254
	CUtlMemory<bool, int>::operator[](
			int i);  // 588
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::operator[](
			int i);  // 260
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
			int i);  // 263
	CUtlMemory<bool, int>::NumAllocated(); // 1247
	Construct<bool, bool>(bool* pMemory); // 1252
	CUtlMemory<bool, int>::Base(); // 112
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::Base(); // 368
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::AddToTail(
			bool& src);  // 256
	CBoneSetup::StartFrame(
			int nFrameTick,
			float flRealTime);  // 98
} /* size: 225, inline expansions: 14 (413 bytes) */

// <02739F6B> bonesetup/bone_setup.cpp:101
void IBoneSetup::SetPoseParameters(int nCount, const float* flPoseParameters)
{
} /* size: 12 */

// <02739ED0> bonesetup/bone_setup.cpp:106
// function call: 1
void IBoneSetup::ConnectDebugger(AnimationDecodeDebugDumpElement_t* pDebugDump, const CAnimationDecodeContext* pContext)
{
	CBoneSetup::ConnectDebugger(
			AnimationDecodeDebugDumpElement_t* pDebugDump,
			const CAnimationDecodeContext* pContext);  // 108
} /* size: 29, inline expansions: 1 (21 bytes) */

// <02739E75> bonesetup/bone_setup.cpp:111
void IBoneSetup::AccumulateAnimationDecodeOp(const CAnimationDecodeOp& animationOp)
{
} /* size: 26 */

// <02739DE0> bonesetup/bone_setup.cpp:116
void IBoneSetup::AccumulateSequence(HSequence hSequence, float flCycle, float flWeight)
{
} /* size: 12 */

// <02739D44> bonesetup/bone_setup.cpp:121
void IBoneSetup::BlendRawAnimation(int nAnimation, float flFrame, float flWeight)
{
} /* size: 0 */

// <02739CFD> bonesetup/bone_setup.cpp:126
void IBoneSetup::AddAutoplaySequences()
{
} /* size: 12 */

// <02739C96> bonesetup/bone_setup.cpp:131
// function call: 1
void IBoneSetup::GetCModel()
{
	CBoneSetup::GetCModel(); // 133
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0273F724> bonesetup/bone_setup.cpp:136
// function calls: 5
void IBoneSetup::GetAnimationResult()
{
	{
	}
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Count(); // 405
	{
	}
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::Count(); // 406
	{
	}
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
			int i);  // 408
	CBoneSetup::GetAnimationResult(); // 138
} /* size: 0, inline expansions: 5 (141 bytes) */

// <02739C7A> bonesetup/bone_setup.cpp:136
void IBoneSetup::GetAnimationResult()
{
} /* size: 0 */

// <02739BC6> bonesetup/bone_setup.cpp:146
void IBoneSetup::Evaluate(const uint32* pRequestedBoneBitVec, uint32 nAnimationDecodeDescFlags, CThreadLocalAnimationDecodeCache* pDecodeCache)
{
} /* size: 12 */

// <02739A9B> bonesetup/bone_setup.cpp:151
// function call: 1
void IBoneSetup::EvaluateAnimGraph(IAnimationGraphInstance* pAnimGraph, float flRealTime, const uint32* pRequestedBoneBitVec, uint32 nAnimationDecodeDescFlags)
{
	CBoneSetup::EvaluateAnimGraph(
				IAnimationGraphInstance* pAnimGraph,
				float flRealTime,
				const uint32* pRequestedBoneBitVec,
				uint32 nAnimationDecodeDescFlags);  // 153
} /* size: 91, inline expansions: 1 (50 bytes) */

// <0273988A> bonesetup/bone_setup.cpp:156
// function calls: 4
void IBoneSetup::GetParentSpaceBones(int nCount, CTransform* pTransforms, const uint32* pRequestedBoneBitVec)
{
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Count(); // 308
	{
	}
	{
	}
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
			int i);  // 314
	CBoneSetup::GetParentSpaceBones(
				int nCount,
				CTransform* pParentSpaceTransforms,
				const uint32* pRequestedBoneBitVec);  // 158
} /* size: 0, inline expansions: 4 (146 bytes) */

// <0273980D> bonesetup/bone_setup.cpp:161
void IBoneSetup::GetWorldSpaceBones(int nCount, CTransform* pTransforms)
{
} /* size: 12 */

// <02739717> bonesetup/bone_setup.cpp:166
// function calls: 2
void IBoneSetup::SetParentSpaceBones(int nCount, CTransform* pTransforms)
{
	{
	}
	CBoneSetup::SetParentSpaceBones(
				int nCount,
				CTransform* pTransforms);  // 342
	CBoneSetup::SetParentSpaceBones(
				int nCount,
				CTransform* pTransforms);  // 168
} /* size: 0, inline expansions: 2 (0 bytes) */

// <02739621> bonesetup/bone_setup.cpp:171
// function calls: 2
void IBoneSetup::SetWorldSpaceBones(int nCount, CTransform* pTransforms)
{
	{
	}
	CBoneSetup::SetWorldSpaceBones(
				int nCount,
				CTransform* pTransforms);  // 353
	CBoneSetup::SetWorldSpaceBones(
				int nCount,
				CTransform* pTransforms);  // 173
} /* size: 0, inline expansions: 2 (0 bytes) */

// <02739437> bonesetup/bone_setup.cpp:176
// function calls: 4
void IBoneSetup::GetMorphTargets(int nCount, float* morphTarget)
{
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Count(); // 373
	{
	}
	{
	}
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
			int i);  // 379
	CBoneSetup::GetMorphTargets(
			int nCount,
			float* morphTarget);  // 178
} /* size: 0, inline expansions: 4 (148 bytes) */

// <0273924D> bonesetup/bone_setup.cpp:181
// function calls: 4
void IBoneSetup::GetAllUserData(int nCount, void* pData)
{
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Count(); // 392
	{
	}
	{
	}
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
			int i);  // 398
	CBoneSetup::GetAllUserData(
			int nCount,
			void* pDst);  // 183
} /* size: 0, inline expansions: 4 (148 bytes) */

// <0273842F> bonesetup/bone_setup.cpp:190
// function calls: 52
void CBoneSetup::CBoneSetup(const CModel* pModel)
{
	EBoneSetup::EBoneSetup(); // 197
	{
	}
	AlignedByteArrayExplicit_t<32, float, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, float>::AlignedByteArray_t(); // 228
	CUtlMemory<float, int>::CUtlMemory(
			float* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<float, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<float, int>::CUtlMemoryFixedGrowable_Base(
					float* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<float, 32, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 32, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 32, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<float, 32>::CUtlVectorFixedGrowable(
				int growSize);  // 197
	{
	}
	AlignedByteArrayExplicit_t<32, CInternalOperation, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, CInternalOperation>::AlignedByteArray_t(); // 228
	CUtlMemory<CInternalOperation, int>::CUtlMemory(
			CInternalOperation* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CInternalOperation, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CInternalOperation, int>::CUtlMemoryFixedGrowable_Base(
					CInternalOperation* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<32, CInternalOperation, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<CInternalOperation, 32, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CInternalOperation, 32>::CUtlVectorFixedGrowable(
				int growSize);  // 197
	{
	}
	AlignedByteArrayExplicit_t<32, CAnimationResult, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, CAnimationResult>::AlignedByteArray_t(); // 228
	CUtlMemory<CAnimationResult, int>::CUtlMemory(
			CAnimationResult* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CAnimationResult, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CAnimationResult, int>::CUtlMemoryFixedGrowable_Base(
					CAnimationResult* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<32, CAnimationResult, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<CAnimationResult, 32, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CAnimationResult, 32>::CUtlVectorFixedGrowable(
				int growSize);  // 197
	{
	}
	AlignedByteArrayExplicit_t<32, DecodeOperation_t, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, DecodeOperation_t>::AlignedByteArray_t(); // 228
	CUtlMemory<DecodeOperation_t, int>::CUtlMemory(
			DecodeOperation_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<DecodeOperation_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<DecodeOperation_t, int>::CUtlMemoryFixedGrowable_Base(
					DecodeOperation_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<32, DecodeOperation_t, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<DecodeOperation_t, 32, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<DecodeOperation_t, CUtlMemoryFixedGrowable<DecodeOperation_t, 32, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<DecodeOperation_t, CUtlMemoryFixedGrowable<DecodeOperation_t, 32, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<DecodeOperation_t, 32>::CUtlVectorFixedGrowable(
				int growSize);  // 197
	CUtlMemory<bool, int>::CUtlMemory(
			bool* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<bool, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<bool, int>::CUtlMemoryFixedGrowable_Base(
					bool* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<32, bool, 1>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, bool>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<32, bool, 1>::Base(); // 231
	CUtlMemoryFixedGrowable<bool, 32, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<bool, 32>::CUtlVectorFixedGrowable(
				int growSize);  // 197
	CAnimationBucket::CAnimationBucket(
			EBoneSetup* pBoneSetup);  // 192
} /* size: 530, inline expansions: 52 (1441 bytes) */

// <0273840A> bonesetup/bone_setup.cpp:190
void CBoneSetup::CBoneSetup(const CModel* pModel)
{
} /* size: 0 */

// <02737263> bonesetup/bone_setup.cpp:208
// variable: 1
// function calls: 91
void CBoneSetup::~CBoneSetup()
{
	CUtlVectorBase<DecodeOperation_t, CUtlMemoryFixedGrowable<DecodeOperation_t, 32, int> >::RemoveAll(); // 1798
	CUtlMemory<DecodeOperation_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<DecodeOperation_t, int>::ConvertToExternalMemory(
				DecodeOperation_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<DecodeOperation_t, int>::Purge_FixedGrowable(
				DecodeOperation_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<DecodeOperation_t, int>::Purge_FixedGrowable(
				DecodeOperation_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<32, DecodeOperation_t, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<DecodeOperation_t, 32, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<DecodeOperation_t, CUtlMemoryFixedGrowable<DecodeOperation_t, 32, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<DecodeOperation_t, CUtlMemoryFixedGrowable<DecodeOperation_t, 32, int> >::Purge(); // 560
	ValidateAlignment<DecodeOperation_t>(void); // 508
	CUtlMemory<DecodeOperation_t, int>::Purge(); // 903
	CUtlMemory<DecodeOperation_t, int>::Purge(); // 510
	CUtlMemory<DecodeOperation_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<DecodeOperation_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<DecodeOperation_t, 32, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<DecodeOperation_t, CUtlMemoryFixedGrowable<DecodeOperation_t, 32, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<DecodeOperation_t, 32>::~CUtlVectorFixedGrowable(); // 211
	CAnimationBucket::~CAnimationBucket(); // 211
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::RemoveAll(); // 1798
	CUtlMemory<bool, int>::IsExternallyAllocated(); // 577
	CUtlMemory<bool, int>::ConvertToExternalMemory(
				bool* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<bool, int>::Purge_FixedGrowable(
				bool* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<bool, int>::Purge_FixedGrowable(
				bool* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<32, bool, 1>::Base(); // 237
	CUtlMemoryFixedGrowable<bool, 32, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::Purge(); // 560
	ValidateAlignment<bool>(void); // 508
	CUtlMemory<bool, int>::Purge(); // 903
	CUtlMemory<bool, int>::Purge(); // 510
	CUtlMemory<bool, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<bool, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<bool, 32, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<bool, 32>::~CUtlVectorFixedGrowable(); // 211
	{
		int i; // 1721
		CUtlMemory<CAnimationResult, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::Element(
			int i);  // 1723
		Destruct<CAnimationResult>(CAnimationResult* pMemory); // 1723
	}
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<32, CAnimationResult, 16>::Base(); // 237
	CUtlMemory<CAnimationResult, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CAnimationResult, int>::ConvertToExternalMemory(
				CAnimationResult* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CAnimationResult, int>::Purge_FixedGrowable(
				CAnimationResult* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CAnimationResult, int>::Purge_FixedGrowable(
				CAnimationResult* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CAnimationResult, 32, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::Purge(); // 560
	ValidateAlignment<CAnimationResult>(void); // 508
	CUtlMemory<CAnimationResult, int>::Purge(); // 903
	CUtlMemory<CAnimationResult, int>::Purge(); // 510
	CUtlMemory<CAnimationResult, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CAnimationResult, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CAnimationResult, 32, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CAnimationResult, 32>::~CUtlVectorFixedGrowable(); // 211
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<32, CInternalOperation, 4>::Base(); // 237
	CUtlMemory<CInternalOperation, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CInternalOperation, int>::ConvertToExternalMemory(
				CInternalOperation* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CInternalOperation, int>::Purge_FixedGrowable(
				CInternalOperation* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CInternalOperation, int>::Purge_FixedGrowable(
				CInternalOperation* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CInternalOperation, 32, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Purge(); // 560
	ValidateAlignment<CInternalOperation>(void); // 508
	CUtlMemory<CInternalOperation, int>::Purge(); // 903
	CUtlMemory<CInternalOperation, int>::Purge(); // 510
	CUtlMemory<CInternalOperation, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CInternalOperation, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CInternalOperation, 32, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CInternalOperation, 32>::~CUtlVectorFixedGrowable(); // 211
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 32, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 577
	CUtlMemory<float, int>::ConvertToExternalMemory(
				float* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<float, int>::Purge_FixedGrowable(
				float* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<float, int>::Purge_FixedGrowable(
				float* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<float, 32, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 32, int> >::Base(); // 368
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 32, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 32, int> >::Purge(); // 560
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 510
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<float, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<float, 32, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 32, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<float, 32>::~CUtlVectorFixedGrowable(); // 211
} /* size: 807, inline expansions: 88 (4237 bytes) */

// <0273724A> bonesetup/bone_setup.cpp:208
void CBoneSetup::~CBoneSetup()
{
} /* size: 0 */

// <02736F74> bonesetup/bone_setup.cpp:215
// function calls: 12
void CBoneSetup::Init(const CModel* pModel)
{
	CUtlMemory<CAnimationResult, int>::NumAllocated(); // 1143
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::Element(
		int i);  // 1148
	Construct<CAnimationResult>(CAnimationResult* pMemory); // 1148
	CUtlMemory<CAnimationResult, int>::Base(); // 112
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::Base(); // 368
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::AddToTail(); // 1156
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::Element(
		int i);  // 1156
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::AddToTailGetPtr(); // 220
} /* size: 160, inline expansions: 12 (326 bytes) */

// <02736D09> bonesetup/bone_setup.cpp:223
// variable: 1
// function calls: 11
void CBoneSetup::Clear()
{
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::RemoveAll(); // 225
	{
		int i; // 1721
		CUtlMemory<CAnimationResult, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::Element(
			int i);  // 1723
		Destruct<CAnimationResult>(CAnimationResult* pMemory); // 1723
	}
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::RemoveAll(); // 226
	CUtlVectorBase<DecodeOperation_t, CUtlMemoryFixedGrowable<DecodeOperation_t, 32, int> >::RemoveAll(); // 227
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::RemoveAll(); // 228
	CAnimationBucket::CAnimationBucket(
			EBoneSetup* pBoneSetup);  // 230
	CAnimationBucket::operator=(
			const CAnimationBucket  &);  // 230
	CAnimationBucket::Release(); // 828
	CAnimationBucket::~CAnimationBucket(); // 230
} /* size: 234, inline expansions: 8 (148 bytes) */

// <02740261> bonesetup/bone_setup.cpp:245
// function calls: 13
void CBoneSetup::StartFrame(int nFrameTick, float flRealTime)
{
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::Count(); // 135
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::IsEmpty(); // 254
	CUtlMemory<bool, int>::operator[](
			int i);  // 588
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::operator[](
			int i);  // 260
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
			int i);  // 263
	CUtlMemory<bool, int>::NumAllocated(); // 1247
	Construct<bool, bool>(bool* pMemory); // 1252
	CUtlMemory<bool, int>::Base(); // 112
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::Base(); // 368
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::AddToTail(
			bool& src);  // 256
} /* size: 0, inline expansions: 13 (0 bytes) */

// <02736CD8> bonesetup/bone_setup.cpp:245
void CBoneSetup::StartFrame(int nFrameTick, float flRealTime)
{
} /* size: 0 */

// <02736B60> bonesetup/bone_setup.cpp:270
// variables: 2
// function calls: 3
void CBoneSetup::SetPoseParameters(int nCount, const float* flPoseParameters)
{
	int nUsed; // 276
	{
		int i; // 283
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 32, int> >::operator[](
				int i);  // 285
	}
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 32, int> >::Count(); // 279
} /* size: 163, variables: 1, inline expansions: 1 (0 bytes) */

// <0273F8F2> bonesetup/bone_setup.cpp:293
void CBoneSetup::ConnectDebugger(AnimationDecodeDebugDumpElement_t* pDebugDump, const CAnimationDecodeContext* pContext)
{
} /* size: 0 */

// <0273F92D> bonesetup/bone_setup.cpp:303
// variable: 1
// function calls: 3
void CBoneSetup::GetParentSpaceBones(int nCount, CTransform* pParentSpaceTransforms, const uint32* pRequestedBoneBitVec)
{
	int nMax; // 310
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Count(); // 308
	{
	}
	{
	}
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
			int i);  // 314
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <02736A68> bonesetup/bone_setup.cpp:303
// variables: 4
void CBoneSetup::GetParentSpaceBones(int nCount, CTransform* pParentSpaceTransforms, const uint32* pRequestedBoneBitVec)
{
	const char   __FUNCTION__; // 8959
	int nMax; // 310
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 308
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 311
	}
} /* size: 0, variables: 2 */

// <027363CA> bonesetup/bone_setup.cpp:319
// variables: 4
// function calls: 21
void CBoneSetup::GetWorldSpaceBones(int nCount, CTransform* pTransforms)
{
	bool bResult; // 321
	CUtlMemoryFixedGrowable<CTransform, 32, int> pParentTransform; // 322
	{
		int i; // 327
		{
			int nParentBone; // 329
			ConcatTransforms(const CTransform  in1,
					const CTransform  in2);  // 330
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 331
			CUtlMemory<CTransform, int>::operator[](
					int i);  // 331
		}
	}
	CUtlMemory<CTransform, int>::CUtlMemory(
			CTransform* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CTransform, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CTransform, int>::CUtlMemoryFixedGrowable_Base(
					CTransform* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<32, CTransform, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, CTransform>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<32, CTransform, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<CTransform, 32, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 322
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CTransform, int>::EnsureCapacity(
			int num);  // 323
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CTransform, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CTransform, 32, int>::~CUtlMemoryFixedGrowable(); // 335
} /* size: 415, variables: 2, inline expansions: 16 (239 bytes) */

// <0273FA98> bonesetup/bone_setup.cpp:342
// function call: 1
void CBoneSetup::SetParentSpaceBones(int nCount, CTransform* pTransforms)
{
	{
	}
	CBoneSetup::SetParentSpaceBones(
				int nCount,
				CTransform* pTransforms);  // 342
} /* size: 0, inline expansions: 1 (0 bytes) */

// <02736373> bonesetup/bone_setup.cpp:342
// variables: 2
void CBoneSetup::SetParentSpaceBones(int nCount, CTransform* pTransforms)
{
	const char   __FUNCTION__; // 8959
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 347
	}
} /* size: 0, variables: 1 */

// <0273FB3A> bonesetup/bone_setup.cpp:353
// function call: 1
void CBoneSetup::SetWorldSpaceBones(int nCount, CTransform* pTransforms)
{
	{
	}
	CBoneSetup::SetWorldSpaceBones(
				int nCount,
				CTransform* pTransforms);  // 353
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0273631C> bonesetup/bone_setup.cpp:353
// variables: 2
void CBoneSetup::SetWorldSpaceBones(int nCount, CTransform* pTransforms)
{
	const char   __FUNCTION__; // 8932
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 358
	}
} /* size: 0, variables: 1 */

// <0273FBDC> bonesetup/bone_setup.cpp:368
// variable: 1
// function calls: 3
void CBoneSetup::GetMorphTargets(int nCount, float* morphTarget)
{
	int nMax; // 375
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Count(); // 373
	{
	}
	{
	}
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
			int i);  // 379
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <02736264> bonesetup/bone_setup.cpp:368
// variables: 4
void CBoneSetup::GetMorphTargets(int nCount, float* morphTarget)
{
	const char   __FUNCTION__; // 8861
	int nMax; // 375
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 373
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 376
	}
} /* size: 0, variables: 2 */

// <0273FD34> bonesetup/bone_setup.cpp:387
// variable: 1
// function calls: 3
void CBoneSetup::GetAllUserData(int nCount, void* pDst)
{
	int nMax; // 394
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Count(); // 392
	{
	}
	{
	}
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
			int i);  // 398
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <027361AC> bonesetup/bone_setup.cpp:387
// variables: 4
void CBoneSetup::GetAllUserData(int nCount, void* pDst)
{
	const char   __FUNCTION__; // 8834
	int nMax; // 394
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 392
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 395
	}
} /* size: 0, variables: 2 */

// <0273FE8C> bonesetup/bone_setup.cpp:402
// function calls: 4
void CBoneSetup::GetAnimationResult()
{
	{
	}
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Count(); // 405
	{
	}
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::Count(); // 406
	{
	}
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
			int i);  // 408
} /* size: 0, inline expansions: 4 (0 bytes) */

// <027360E2> bonesetup/bone_setup.cpp:402
// variables: 4
void CBoneSetup::GetAnimationResult()
{
	const char   __FUNCTION__; // 8932
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 404
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 405
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 406
	}
} /* size: 0, variables: 1 */

// <02735EEF> bonesetup/bone_setup.cpp:412
// variables: 4
// function calls: 4
void CBoneSetup::GetAnimationResult()
{
	const char   __FUNCTION__; // 8932
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 414
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 415
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 416
	}
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Count(); // 415
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::Count(); // 416
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
			int i);  // 418
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <0274154A> bonesetup/bone_setup.cpp:426
// variables: 2
// function calls: 24
void CBoneSetup::Evaluate(const uint32* pRequestedBoneBitVec, uint32 nAnimationDecodeDescFlags, CThreadLocalAnimationDecodeCache* pDecodeCache)
{
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Count(); // 432
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::Count(); // 437
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::Element(
		int i);  // 1148
	Construct<CAnimationResult>(CAnimationResult* pMemory); // 1148
	CUtlMemory<CAnimationResult, int>::NumAllocated(); // 1143
	CUtlMemory<CAnimationResult, int>::Base(); // 112
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::Base(); // 368
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::AddToTail(); // 1156
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::Element(
		int i);  // 1156
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::AddToTailGetPtr(); // 439
	{
		int i; // 442
		CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Count(); // 442
		CUtlMemory<CInternalOperation, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::operator[](
				int i);  // 444
	}
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::RemoveAll(); // 447
	{
		int i; // 1696
		CUtlMemory<CAnimationResult, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::Element(
			int i);  // 1697
		Destruct<CAnimationResult>(CAnimationResult* pMemory); // 1697
	}
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::RemoveMultipleFromTail(
				int num);  // 450
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::Count(); // 450
	CBoneSetup::Evaluate(
		const uint32* pRequestedBoneBitVec,
		uint32 nAnimationDecodeDescFlags,
		CThreadLocalAnimationDecodeCache* pDecodeCache);  // 426
} /* size: 375, inline expansions: 18 (722 bytes) */

// <02735EA2> bonesetup/bone_setup.cpp:426
// variable: 1
void CBoneSetup::Evaluate(const uint32* pRequestedBoneBitVec, uint32 nAnimationDecodeDescFlags, CThreadLocalAnimationDecodeCache* pDecodeCache)
{
	{
		int i; // 442
	}
} /* size: 0 */

// <0273599A> bonesetup/bone_setup.cpp:465
// variables: 11
// function calls: 16
void CBoneSetup::CalcNeededRequestIndex(const uint32* pRequestedBoneBitVec, uint32 nAnimationDecodeDescFlags)
{
	const CAnimContainer* pContainer; // 467
	const bool  bRequestMorph; // 473
	const bool  bRequestUser; // 474
	{
		int nPattern; // 485
		{
			const ElementRequestPattern_t* pPattern; // 487
			CUtlMemory<ElementRequestPattern_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::operator[](
					int i);  // 487
			operator&(BoneFlags_t a,
					BoneFlags_t b);  // 488
		}
		CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Count(); // 485
	}
	{
		int nPattern; // 499
		{
			const ElementRequestPattern_t* pPattern; // 501
			CUtlMemory<ElementRequestPattern_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::operator[](
					int i);  // 501
			operator&(BoneFlags_t a,
					BoneFlags_t b);  // 502
		}
		CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Count(); // 499
	}
	{
		int nPattern; // 516
		{
			const ElementRequestPattern_t* pPattern; // 518
			uint32 nMissing; // 519
			{
				int nBlock; // 520
				CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 520
				CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 2214
				{
				}
				CVarBitVecBase<short unsigned int, 32>::Base(); // 2215
				CBitVecT<CVarBitVecBase<short unsigned int, 32> >::GetDWord(
					int i);  // 522
			}
			CUtlMemory<ElementRequestPattern_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::operator[](
					int i);  // 518
		}
		CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Count(); // 516
	}
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Count(); // 480
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <02735254> bonesetup/bone_setup.cpp:564
// variables: 2
// function calls: 27
void CBoneSetup::AccumulateSequence(HSequence hSequence, float flCycle, float flWeight)
{
	{
		CUtlString s; // 579
		CUtlString::CUtlString(); // 579
		CUtlMemory<CUtlString, int>::NumAllocated(); // 1196
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1201
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 1520
		CopyConstruct<CUtlString>(CUtlString* pMemory,
						const CUtlString& src);  // 1201
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
				const CUtlString& src);  // 581
		CUtlString::~CUtlString(); // 582
	}
	{
		CUtlString s; // 590
		CUtlString::CUtlString(); // 590
		CUtlMemory<CUtlString, int>::NumAllocated(); // 1196
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1201
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 1520
		CopyConstruct<CUtlString>(CUtlString* pMemory,
						const CUtlString& src);  // 1201
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
				const CUtlString& src);  // 592
		CUtlString::~CUtlString(); // 593
	}
	HSequence::operator==(
			const HSequence& other);  // 574
} /* size: 610, inline expansions: 1 (0 bytes) */

// <0273FFD9> bonesetup/bone_setup.cpp:602
// variables: 2
void CBoneSetup::EvaluateAnimGraph(IAnimationGraphInstance* pAnimGraph, float flRealTime, const uint32* pRequestedBoneBitVec, uint32 nAnimationDecodeDescFlags)
{
	CTransform xLocalToWorld; // 613
	CAnimPosePtr pPose; // 614
} /* size: 0, variables: 2 */

// <0273E435> bonesetup/bone_setup.cpp:602
// variables: 13
// function calls: 77
void CBoneSetup::EvaluateAnimGraph(IAnimationGraphInstance* pAnimGraph, float flRealTime, uint32 nAnimationDecodeDescFlags, const uint32* pRequestedBoneBitVec)
{
	CTransform xLocalToWorld; // 613
	CAnimPosePtr pPose; // 614
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 613
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator bool(); // 615
	{
		CAnimationResult* pAnimResult; // 617
		const CAnimContainer* pContainer; // 619
		int nRequestPattern; // 621
		const CUtlVector<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >& arrBonePosMap; // 624
		const CUtlVector<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >& arrBoneQuatMap; // 625
		const int  nBoneCount; // 628
		CUtlVectorFixedGrowableCompat<int, 256> boneIndices; // 632
		CUtlMemory<CAnimationResult, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
				int i);  // 617
		CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Count(); // 621
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 628
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 538
		CUtlMemory<int, int>::CUtlMemory(
				int* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 535
		CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
				int* pMemory,
				int allocationCount,
				int initialCount,
				bool bGrowable);  // 420
		CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
				int* pMemory,
				int allocationCount,
				int initialCount,
				bool bGrowable);  // 495
		AlignedByteArrayExplicit_t<256, int, 4>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<256, int>::AlignedByteArray_t(); // 495
		AlignedByteArrayExplicit_t<256, int, 4>::Base(); // 497
		CUtlVectorFixedGrowableCompat<int, 256>::CUtlVectorFixedGrowableCompat(
						int growSize);  // 632
		Min<int>(const int& val1,
			const int& val2);  // 628
		CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::Count(); // 628
		CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::Count(); // 628
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 113
		CAnimPose::GetBoneCount(); // 628
		Min<int>(const int& val1,
			const int& val2);  // 628
		{
			int i; // 633
			CUtlMemory<ChannelElementMap_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
					int i);  // 635
			CUtlMemory<ChannelElementMap_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
					int i);  // 636
			CUtlMemory<int, int>::NumAllocated(); // 1196
			CUtlMemory<int, int>::Base(); // 112
			CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
			CUtlMemory<int, int>::IsGrowable(); // 823
			CUtlMemory<int, int>::IsExternallyAllocated(); // 859
			CUtlMemory<int, int>::IsExternallyAllocated(); // 861
			CUtlMemory<int, int>::Grow(
				int num);  // 806
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
					int num);  // 1198
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1201
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 1201
			CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
					const int& src);  // 639
		}
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 643
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 645
		{
			const float* pMorphWeights; // 647
			void* pDstChannelData; // 648
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 647
			CAnimContainer::GetMorphChannel(); // 648
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 651
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 651
			CAnimContainer::GetMorphChannel(); // 652
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
		CUtlMemory<int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 489
		CUtlVectorFixedGrowableCompat<int, 256>::~CUtlVectorFixedGrowableCompat(); // 655
	}
	ThreadInterlockedDecrement(volatile int32* p); // 690
	{
		CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
		CUtlMemory<CAnimPose::NumAllocated(); // 228
		CUtlMemory<CAnimPose::Base(); // 97
		CUtlStack<CAnimPose::ResetDbgInfo(); // 233
		CUtlMemory<CAnimPose::IsGrowable(); // 823
		CUtlMemory<CAnimPose::IsExternallyAllocated(); // 859
		CUtlMemory<CAnimPose::IsExternallyAllocated(); // 861
		CUtlMemory<CAnimPose::Grow(
			int num);  // 229
		CUtlStack<CAnimPose::GrowStack(); // 267
		CUtlMemory<CAnimPose::operator[](
				int i);  // 155
		CUtlStack<CAnimPose::Element(
			int i);  // 268
		CopyConstruct<CAnimPose*>(CAnimPose** pMemory,
						CAnimPose* const& src);  // 268
		CUtlStack<CAnimPose::Push(
			CAnimPose* const& src);  // 604
		CEnduringClassMemoryPool<CAnimPose>::Free(
			CAnimPose* pObject);  // 699
	}
	CRefCountedMemPoolObject<CAnimPose>::~CRefCountedMemPoolObject(); // 649
	CRefCountedMemPoolObject<CAnimPose>::~CRefCountedMemPoolObject(); // 703
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
	Release<CAnimPose>(CAnimPose* pObj); // 344
	CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 656
} /* size: 1314, variables: 2, inline expansions: 11 (1045 bytes) */

// <0273512E> bonesetup/bone_setup.cpp:602
// variables: 12
void CBoneSetup::EvaluateAnimGraph(IAnimationGraphInstance* pAnimGraph, float flRealTime, const uint32* pRequestedBoneBitVec, uint32 nAnimationDecodeDescFlags)
{
	CTransform xLocalToWorld; // 613
	CAnimPosePtr pPose; // 614
	{
		CAnimationResult* pAnimResult; // 617
		const CAnimContainer* pContainer; // 619
		int nRequestPattern; // 621
		const CUtlVector<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >& arrBonePosMap; // 624
		const CUtlVector<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >& arrBoneQuatMap; // 625
		const int  nBoneCount; // 628
		CUtlVectorFixedGrowableCompat<int, 256> boneIndices; // 632
		{
			int i; // 633
		}
		{
			const float* pMorphWeights; // 647
			void* pDstChannelData; // 648
		}
	}
} /* size: 0, variables: 2 */

// <02734F4E> bonesetup/bone_setup.cpp:664
// variables: 4
// function call: 1
void CBoneSetup::AddAllSequenceCmds(CAnimationBucket& animResult, HSequence hSequence, float flCycle, float flWeight)
{
	const IBaseSequence* pSequence; // 666
	const char   __FUNCTION__; // 8932
	CInternalOperation* pOperation; // 675
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 670
	}
	HSequence::GetRaw(); // 676
} /* size: 212, variables: 3, inline expansions: 1 (0 bytes) */

// <02734772> bonesetup/bone_setup.cpp:692
// variables: 2
// function calls: 30
void CBoneSetup::BlendRawAnimation(int nAnimation, float flFrame, float flWeight)
{
	{
		CUtlString s; // 705
		CUtlString::CUtlString(); // 705
		CUtlMemory<CUtlString, int>::NumAllocated(); // 1196
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1201
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 1520
		CopyConstruct<CUtlString>(CUtlString* pMemory,
						const CUtlString& src);  // 1201
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
				const CUtlString& src);  // 707
		CUtlString::~CUtlString(); // 708
	}
	{
		CUtlString s; // 714
		CUtlString::CUtlString(); // 714
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 358
		CAnimDesc::GetName(); // 715
		CUtlMemory<CUtlString, int>::NumAllocated(); // 1196
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1201
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 1520
		CopyConstruct<CUtlString>(CUtlString* pMemory,
						const CUtlString& src);  // 1201
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
				const CUtlString& src);  // 716
		CUtlString::~CUtlString(); // 717
	}
} /* size: 0 */

// <02740574> bonesetup/bone_setup.cpp:729
// variable: 1
// function calls: 18
void CBoneSetup::AddCommand(CmdEnum_t nCmd, int nDstResult, int nSrcResult, int nWeightlist, float flWeight)
{
	CInternalOperation* pOperation; // 737
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Count(); // 731
	CUtlMemory<CInternalOperation, int>::operator[](
			int i);  // 630
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Tail(); // 734
	CUtlMemory<CInternalOperation, int>::NumAllocated(); // 1143
	Vector::Vector(); // 18
	Quaternion::Quaternion(); // 18
	CInternalOperation::CInternalOperation(); // 1479
	Construct<CInternalOperation>(CInternalOperation* pMemory); // 1148
	CUtlMemory<CInternalOperation, int>::Base(); // 112
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Base(); // 368
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::AddToTail(); // 737
	CUtlMemory<CInternalOperation, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::operator[](
			int i);  // 737
	Vector::operator=(
			const Vector& vOther);  // 66
	CInternalOperation::Init(
		CmdEnum_t nCmd);  // 740
	CBoneSetup::AddCommand(
			CmdEnum_t nCmd,
			int nDstResult,
			int nSrcResult,
			int nWeightlist,
			float flWeight);  // 729
} /* size: 301, variables: 1, inline expansions: 18 (592 bytes) */

// <0273470B> bonesetup/bone_setup.cpp:729
// variable: 1
void CBoneSetup::AddCommand(CmdEnum_t nCmd, int nDstResult, int nSrcResult, int nWeightlist, float flWeight)
{
	CInternalOperation* pOperation; // 737
} /* size: 0, variables: 1 */

// <027342AB> bonesetup/bone_setup.cpp:757
// variables: 3
// function calls: 18
void CBoneSetup::AddCommand(CmdEnum_t nCmd, int nDstResult, int nSrcResult, int nWeightlist, float flWeight, const Vector& vTranslate, const Quaternion& qRotate)
{
	const char   __FUNCTION__; // 8736
	CInternalOperation* pOperation; // 767
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 759
	}
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Count(); // 761
	CUtlMemory<CInternalOperation, int>::operator[](
			int i);  // 630
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Tail(); // 764
	CUtlMemory<CInternalOperation, int>::NumAllocated(); // 1143
	Vector::Vector(); // 18
	Quaternion::Quaternion(); // 18
	CInternalOperation::CInternalOperation(); // 1479
	Construct<CInternalOperation>(CInternalOperation* pMemory); // 1148
	CUtlMemory<CInternalOperation, int>::Base(); // 112
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Base(); // 368
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::AddToTail(); // 767
	CUtlMemory<CInternalOperation, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::operator[](
			int i);  // 767
	Vector::operator=(
			const Vector& vOther);  // 66
	CInternalOperation::Init(
		CmdEnum_t nCmd);  // 770
	Vector::operator=(
			const Vector& vOther);  // 779
} /* size: 0, variables: 2, inline expansions: 18 (452 bytes) */

// <02734183> bonesetup/bone_setup.cpp:791
// function calls: 3
void CAnimationBucket::CAnimationBucket(EBoneSetup* pBoneSetup)
{
	{
	}
	assert_cast<CBoneSetup*, EBoneSetup>(EBoneSetup* pSource); // 462
	assert_cast<CBoneSetup*, EBoneSetup>(EBoneSetup* pSource); // 795
	CAnimationBucket::CAnimationBucket(
			EBoneSetup* pBoneSetup);  // 791
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0273415D> bonesetup/bone_setup.cpp:791
void CAnimationBucket::CAnimationBucket(EBoneSetup* pBoneSetup)
{
} /* size: 0 */

// <02740216> bonesetup/bone_setup.cpp:805
void CAnimationBucket::Init(const CAnimationBucket* pBaseResult)
{
} /* size: 75 */

// <027340B6> bonesetup/bone_setup.cpp:811
// function call: 1
void CAnimationBucket::CAnimationBucket(const CAnimationBucket* pBaseResult)
{
	CAnimationBucket::Init(
		const CAnimationBucket* pBaseResult);  // 813
} /* size: 0, inline expansions: 1 (0 bytes) */

// <02734090> bonesetup/bone_setup.cpp:811
void CAnimationBucket::CAnimationBucket(const CAnimationBucket* pBaseResult)
{
} /* size: 0 */

// <0273400F> bonesetup/bone_setup.cpp:816
// function call: 1
void CAnimationBucket::CAnimationBucket(const CAnimationBucket& baseResult)
{
	CAnimationBucket::Init(
		const CAnimationBucket* pBaseResult);  // 818
} /* size: 83, inline expansions: 1 (33 bytes) */

// <02733FE9> bonesetup/bone_setup.cpp:816
void CAnimationBucket::CAnimationBucket(const CAnimationBucket& baseResult)
{
} /* size: 0 */

// <02733FBA> bonesetup/bone_setup.cpp:821
void CAnimationBucket::CAnimationBucket()
{
} /* size: 20 */

// <02733F57> bonesetup/bone_setup.cpp:826
void CAnimationBucket::~CAnimationBucket()
{
} /* size: 19 */

// <02733EC9> bonesetup/bone_setup.cpp:826
// function call: 1
void CAnimationBucket::~CAnimationBucket()
{
	CAnimationBucket::~CAnimationBucket(); // 829
} /* size: 46, inline expansions: 1 (19 bytes) */

// <0274008F> bonesetup/bone_setup.cpp:832
// function calls: 6
void CAnimationBucket::Release()
{
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::Count(); // 998
	{
	}
	CUtlMemory<bool, int>::operator[](
			int i);  // 588
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::operator[](
			int i);  // 999
	{
	}
	CUtlMemory<bool, int>::operator[](
			int i);  // 588
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::operator[](
			int i);  // 1000
	CBoneSetup::FreeResult(
			int nResult);  // 836
} /* size: 0, inline expansions: 6 (224 bytes) */

// <02733E97> bonesetup/bone_setup.cpp:832
void CAnimationBucket::Release()
{
} /* size: 0 */

// <02741176> bonesetup/bone_setup.cpp:852
// function calls: 17
void CAnimationBucket::Add(const CAnimationBucket& srcResult, int nBonemask, float flWeight)
{
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Count(); // 731
	CUtlMemory<CInternalOperation, int>::NumAllocated(); // 1143
	Vector::Vector(); // 18
	Quaternion::Quaternion(); // 18
	CInternalOperation::CInternalOperation(); // 1479
	Construct<CInternalOperation>(CInternalOperation* pMemory); // 1148
	CUtlMemory<CInternalOperation, int>::Base(); // 112
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Base(); // 368
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::AddToTail(); // 737
	CUtlMemory<CInternalOperation, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::operator[](
			int i);  // 737
	Vector::operator=(
			const Vector& vOther);  // 66
	CInternalOperation::Init(
		CmdEnum_t nCmd);  // 740
	CBoneSetup::AddCommand(
			CmdEnum_t nCmd,
			int nDstResult,
			int nSrcResult,
			int nWeightlist,
			float flWeight);  // 729
	CBoneSetup::AddCommand(
			CmdEnum_t nCmd,
			int nDstResult,
			int nSrcResult,
			int nWeightlist,
			float flWeight);  // 854
} /* size: 285, inline expansions: 17 (854 bytes) */

// <02733E17> bonesetup/bone_setup.cpp:852
void CAnimationBucket::Add(const CAnimationBucket& srcResult, int nBonemask, float flWeight)
{
} /* size: 0 */

// <02733A27> bonesetup/bone_setup.cpp:857
// function calls: 17
void CAnimationBucket::Subtract(const CAnimationBucket& srcResult, int nBonemask, float flWeight)
{
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Count(); // 731
	CUtlMemory<CInternalOperation, int>::NumAllocated(); // 1143
	Vector::Vector(); // 18
	Quaternion::Quaternion(); // 18
	CInternalOperation::CInternalOperation(); // 1479
	Construct<CInternalOperation>(CInternalOperation* pMemory); // 1148
	CUtlMemory<CInternalOperation, int>::Base(); // 112
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Base(); // 368
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::AddToTail(); // 737
	CUtlMemory<CInternalOperation, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::operator[](
			int i);  // 737
	Vector::operator=(
			const Vector& vOther);  // 66
	CInternalOperation::Init(
		CmdEnum_t nCmd);  // 740
	CBoneSetup::AddCommand(
			CmdEnum_t nCmd,
			int nDstResult,
			int nSrcResult,
			int nWeightlist,
			float flWeight);  // 729
	CBoneSetup::AddCommand(
			CmdEnum_t nCmd,
			int nDstResult,
			int nSrcResult,
			int nWeightlist,
			float flWeight);  // 859
} /* size: 285, inline expansions: 17 (854 bytes) */

// <02733659> bonesetup/bone_setup.cpp:862
// function calls: 17
void CAnimationBucket::Scale(float flWeight)
{
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Count(); // 731
	CUtlMemory<CInternalOperation, int>::NumAllocated(); // 1143
	Vector::Vector(); // 18
	Quaternion::Quaternion(); // 18
	CInternalOperation::CInternalOperation(); // 1479
	Construct<CInternalOperation>(CInternalOperation* pMemory); // 1148
	CUtlMemory<CInternalOperation, int>::Base(); // 112
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Base(); // 368
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::AddToTail(); // 737
	CUtlMemory<CInternalOperation, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::operator[](
			int i);  // 737
	Vector::operator=(
			const Vector& vOther);  // 66
	CInternalOperation::Init(
		CmdEnum_t nCmd);  // 740
	CBoneSetup::AddCommand(
			CmdEnum_t nCmd,
			int nDstResult,
			int nSrcResult,
			int nWeightlist,
			float flWeight);  // 729
	CBoneSetup::AddCommand(
			CmdEnum_t nCmd,
			int nDstResult,
			int nSrcResult,
			int nWeightlist,
			float flWeight);  // 864
} /* size: 267, inline expansions: 17 (806 bytes) */

// <02733293> bonesetup/bone_setup.cpp:867
// function calls: 17
void CAnimationBucket::Copy(const CAnimationBucket& srcResult)
{
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Count(); // 731
	CUtlMemory<CInternalOperation, int>::NumAllocated(); // 1143
	Vector::Vector(); // 18
	Quaternion::Quaternion(); // 18
	CInternalOperation::CInternalOperation(); // 1479
	Construct<CInternalOperation>(CInternalOperation* pMemory); // 1148
	CUtlMemory<CInternalOperation, int>::Base(); // 112
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Base(); // 368
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::AddToTail(); // 737
	CUtlMemory<CInternalOperation, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::operator[](
			int i);  // 737
	Vector::operator=(
			const Vector& vOther);  // 66
	CInternalOperation::Init(
		CmdEnum_t nCmd);  // 740
	CBoneSetup::AddCommand(
			CmdEnum_t nCmd,
			int nDstResult,
			int nSrcResult,
			int nWeightlist,
			float flWeight);  // 729
	CBoneSetup::AddCommand(
			CmdEnum_t nCmd,
			int nDstResult,
			int nSrcResult,
			int nWeightlist,
			float flWeight);  // 869
} /* size: 275, inline expansions: 17 (826 bytes) */

// <02732EA3> bonesetup/bone_setup.cpp:872
// function calls: 17
void CAnimationBucket::Blend(const CAnimationBucket& srcResult, int nBonemask, float flWeight)
{
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Count(); // 731
	CUtlMemory<CInternalOperation, int>::NumAllocated(); // 1143
	Vector::Vector(); // 18
	Quaternion::Quaternion(); // 18
	CInternalOperation::CInternalOperation(); // 1479
	Construct<CInternalOperation>(CInternalOperation* pMemory); // 1148
	CUtlMemory<CInternalOperation, int>::Base(); // 112
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Base(); // 368
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::AddToTail(); // 737
	CUtlMemory<CInternalOperation, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::operator[](
			int i);  // 737
	Vector::operator=(
			const Vector& vOther);  // 66
	CInternalOperation::Init(
		CmdEnum_t nCmd);  // 740
	CBoneSetup::AddCommand(
			CmdEnum_t nCmd,
			int nDstResult,
			int nSrcResult,
			int nWeightlist,
			float flWeight);  // 729
	CBoneSetup::AddCommand(
			CmdEnum_t nCmd,
			int nDstResult,
			int nSrcResult,
			int nWeightlist,
			float flWeight);  // 874
} /* size: 285, inline expansions: 17 (854 bytes) */

// <02732AB3> bonesetup/bone_setup.cpp:877
// function calls: 17
void CAnimationBucket::Worldspace(const CAnimationBucket& srcResult, int nBonemask, float flWeight)
{
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Count(); // 731
	CUtlMemory<CInternalOperation, int>::NumAllocated(); // 1143
	Vector::Vector(); // 18
	Quaternion::Quaternion(); // 18
	CInternalOperation::CInternalOperation(); // 1479
	Construct<CInternalOperation>(CInternalOperation* pMemory); // 1148
	CUtlMemory<CInternalOperation, int>::Base(); // 112
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Base(); // 368
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::AddToTail(); // 737
	CUtlMemory<CInternalOperation, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::operator[](
			int i);  // 737
	Vector::operator=(
			const Vector& vOther);  // 66
	CInternalOperation::Init(
		CmdEnum_t nCmd);  // 740
	CBoneSetup::AddCommand(
			CmdEnum_t nCmd,
			int nDstResult,
			int nSrcResult,
			int nWeightlist,
			float flWeight);  // 729
	CBoneSetup::AddCommand(
			CmdEnum_t nCmd,
			int nDstResult,
			int nSrcResult,
			int nWeightlist,
			float flWeight);  // 879
} /* size: 285, inline expansions: 17 (854 bytes) */

// <02732A17> bonesetup/bone_setup.cpp:882
void CAnimationBucket::CallSequence(HSequence hSequence, float flCycle, float flWeight)
{
} /* size: 21 */

// <027325D0> bonesetup/bone_setup.cpp:887
// variable: 1
// function calls: 19
void CAnimationBucket::FetchCycle(int nAnimation, float flCycle)
{
	CInternalOperation* pOperation; // 889
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Count(); // 731
	CUtlMemory<CInternalOperation, int>::operator[](
			int i);  // 630
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Tail(); // 734
	CUtlMemory<CInternalOperation, int>::NumAllocated(); // 1143
	Vector::Vector(); // 18
	Quaternion::Quaternion(); // 18
	CInternalOperation::CInternalOperation(); // 1479
	Construct<CInternalOperation>(CInternalOperation* pMemory); // 1148
	CUtlMemory<CInternalOperation, int>::Base(); // 112
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Base(); // 368
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::AddToTail(); // 737
	CUtlMemory<CInternalOperation, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::operator[](
			int i);  // 737
	Vector::operator=(
			const Vector& vOther);  // 66
	CInternalOperation::Init(
		CmdEnum_t nCmd);  // 740
	CBoneSetup::AddCommand(
			CmdEnum_t nCmd,
			int nDstResult,
			int nSrcResult,
			int nWeightlist,
			float flWeight);  // 729
	CBoneSetup::AddCommand(
			CmdEnum_t nCmd,
			int nDstResult,
			int nSrcResult,
			int nWeightlist,
			float flWeight);  // 889
} /* size: 305, variables: 1, inline expansions: 19 (857 bytes) */

// <02740977> bonesetup/bone_setup.cpp:894
// variable: 1
// function calls: 19
void CAnimationBucket::FetchFrame(int nAnimation, float flFrame)
{
	CInternalOperation* pOperation; // 896
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Count(); // 731
	CUtlMemory<CInternalOperation, int>::operator[](
			int i);  // 630
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Tail(); // 734
	CUtlMemory<CInternalOperation, int>::NumAllocated(); // 1143
	Vector::Vector(); // 18
	Quaternion::Quaternion(); // 18
	CInternalOperation::CInternalOperation(); // 1479
	Construct<CInternalOperation>(CInternalOperation* pMemory); // 1148
	CUtlMemory<CInternalOperation, int>::Base(); // 112
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Base(); // 368
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::AddToTail(); // 737
	CUtlMemory<CInternalOperation, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::operator[](
			int i);  // 737
	Vector::operator=(
			const Vector& vOther);  // 66
	CInternalOperation::Init(
		CmdEnum_t nCmd);  // 740
	CBoneSetup::AddCommand(
			CmdEnum_t nCmd,
			int nDstResult,
			int nSrcResult,
			int nWeightlist,
			float flWeight);  // 729
	CBoneSetup::AddCommand(
			CmdEnum_t nCmd,
			int nDstResult,
			int nSrcResult,
			int nWeightlist,
			float flWeight);  // 896
} /* size: 305, variables: 1, inline expansions: 19 (857 bytes) */

// <02732590> bonesetup/bone_setup.cpp:894
// variable: 1
void CAnimationBucket::FetchFrame(int nAnimation, float flFrame)
{
	CInternalOperation* pOperation; // 896
} /* size: 0, variables: 1 */

// <0273211F> bonesetup/bone_setup.cpp:901
// variable: 1
// function calls: 19
void CAnimationBucket::IKLockInPlace(int nBone, float flPosWeight, float flAngleWeight, bool bBonesOrientedDownPositiveX)
{
	CInternalOperation* pOperation; // 903
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Count(); // 731
	CUtlMemory<CInternalOperation, int>::operator[](
			int i);  // 630
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Tail(); // 734
	CUtlMemory<CInternalOperation, int>::NumAllocated(); // 1143
	Vector::Vector(); // 18
	Quaternion::Quaternion(); // 18
	CInternalOperation::CInternalOperation(); // 1479
	Construct<CInternalOperation>(CInternalOperation* pMemory); // 1148
	CUtlMemory<CInternalOperation, int>::Base(); // 112
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Base(); // 368
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::AddToTail(); // 737
	CUtlMemory<CInternalOperation, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::operator[](
			int i);  // 737
	Vector::operator=(
			const Vector& vOther);  // 66
	CInternalOperation::Init(
		CmdEnum_t nCmd);  // 740
	CBoneSetup::AddCommand(
			CmdEnum_t nCmd,
			int nDstResult,
			int nSrcResult,
			int nWeightlist,
			float flWeight);  // 729
	CBoneSetup::AddCommand(
			CmdEnum_t nCmd,
			int nDstResult,
			int nSrcResult,
			int nWeightlist,
			float flWeight);  // 903
} /* size: 338, variables: 1, inline expansions: 19 (912 bytes) */

// <02731D66> bonesetup/bone_setup.cpp:909
// function calls: 17
void CAnimationBucket::IKRestoreAll()
{
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Count(); // 731
	CUtlMemory<CInternalOperation, int>::NumAllocated(); // 1143
	Vector::Vector(); // 18
	Quaternion::Quaternion(); // 18
	CInternalOperation::CInternalOperation(); // 1479
	Construct<CInternalOperation>(CInternalOperation* pMemory); // 1148
	CUtlMemory<CInternalOperation, int>::Base(); // 112
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Base(); // 368
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::AddToTail(); // 737
	CUtlMemory<CInternalOperation, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::operator[](
			int i);  // 737
	Vector::operator=(
			const Vector& vOther);  // 66
	CInternalOperation::Init(
		CmdEnum_t nCmd);  // 740
	CBoneSetup::AddCommand(
			CmdEnum_t nCmd,
			int nDstResult,
			int nSrcResult,
			int nWeightlist,
			float flWeight);  // 729
	CBoneSetup::AddCommand(
			CmdEnum_t nCmd,
			int nDstResult,
			int nSrcResult,
			int nWeightlist,
			float flWeight);  // 911
} /* size: 257, inline expansions: 17 (775 bytes) */

// <02731CC8> bonesetup/bone_setup.cpp:914
void CAnimationBucket::Transform(const CAnimationBucket& srcResult, const Vector& vTranslate, const Quaternion& qRotate)
{
} /* size: 50 */

// <02731C98> bonesetup/bone_setup.cpp:919
void CAnimationBucket::GetBoneSetup()
{
} /* size: 9 */

// <02731B2C> bonesetup/bone_setup.cpp:924
// function calls: 5
void CAnimationBucket::GetPoseParameter(int nPose)
{
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 32, int> >::Count(); // 948
	CUtlMemory<float, int>::operator[](
			int i);  // 595
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 32, int> >::operator[](
			int i);  // 950
	CBoneSetup::GetPoseParameter(
			int nPose);  // 946
	CBoneSetup::GetPoseParameter(
			int nPose);  // 926
} /* size: 66, inline expansions: 5 (59 bytes) */

// <02731A31> bonesetup/bone_setup.cpp:929
// function calls: 4
void CAnimationBucket::GetPoseParameterArray()
{
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 32, int> >::Count(); // 958
	CUtlMemory<float, int>::Base(); // 113
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 32, int> >::Base(); // 958
	CBoneSetup::GetPoseParameterArray(); // 931
} /* size: 58, inline expansions: 4 (29 bytes) */

// <027319CC> bonesetup/bone_setup.cpp:934
// function call: 1
void CAnimationBucket::GetRealtime()
{
	CBoneSetup::GetRealtime(); // 936
} /* size: 42, inline expansions: 1 (8 bytes) */

// <02731967> bonesetup/bone_setup.cpp:939
// function call: 1
void CAnimationBucket::GetCModel()
{
	CBoneSetup::GetCModel(); // 941
} /* size: 34, inline expansions: 1 (4 bytes) */

// <0273E307> bonesetup/bone_setup.cpp:946
// function calls: 4
void CBoneSetup::GetPoseParameter(int nPose)
{
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 32, int> >::Count(); // 948
	CUtlMemory<float, int>::operator[](
			int i);  // 595
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 32, int> >::operator[](
			int i);  // 950
	CBoneSetup::GetPoseParameter(
			int nPose);  // 946
} /* size: 37, inline expansions: 4 (27 bytes) */

// <02731941> bonesetup/bone_setup.cpp:946
void CBoneSetup::GetPoseParameter(int nPose)
{
} /* size: 0 */

// <0273E085> bonesetup/bone_setup.cpp:956
// function calls: 3
void CBoneSetup::GetPoseParameterArray()
{
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 32, int> >::Count(); // 958
	CUtlMemory<float, int>::Base(); // 113
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 32, int> >::Base(); // 958
} /* size: 18, inline expansions: 3 (8 bytes) */

// <02731928> bonesetup/bone_setup.cpp:956
void CBoneSetup::GetPoseParameterArray()
{
} /* size: 0 */

// <0273E146> bonesetup/bone_setup.cpp:963
void CBoneSetup::GetRealtime()
{
} /* size: 13 */

// <02731666> bonesetup/bone_setup.cpp:970
// variables: 2
// function calls: 12
void CBoneSetup::AllocateResult()
{
	int firstFreeSlot; // 972
	{
		int i; // 975
		CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::Count(); // 975
		CUtlMemory<bool, int>::operator[](
				int i);  // 588
		CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::operator[](
				int i);  // 977
	}
	CUtlMemory<bool, int>::NumAllocated(); // 1247
	CUtlMemory<bool, int>::operator[](
			int i);  // 602
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::Element(
		int i);  // 1252
	Construct<bool, bool>(bool* pMemory); // 1252
	CUtlMemory<bool, int>::Base(); // 112
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::Base(); // 368
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::AddToTail(
			bool& src);  // 988
} /* size: 198, variables: 1, inline expansions: 9 (174 bytes) */

// <0273E19C> bonesetup/bone_setup.cpp:996
// function calls: 5
void CBoneSetup::FreeResult(int nResult)
{
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::Count(); // 998
	{
	}
	CUtlMemory<bool, int>::operator[](
			int i);  // 588
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::operator[](
			int i);  // 999
	{
	}
	CUtlMemory<bool, int>::operator[](
			int i);  // 588
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 32, int> >::operator[](
			int i);  // 1000
} /* size: 0, inline expansions: 5 (82 bytes) */

// <027315C8> bonesetup/bone_setup.cpp:996
// variables: 3
void CBoneSetup::FreeResult(int nResult)
{
	const char   __FUNCTION__; // 8736
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 998
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 999
	}
} /* size: 0, variables: 1 */

// <027310FB> bonesetup/bone_setup.cpp:1008
// variables: 2
// function calls: 10
void CBoneSetup::AddAnimationCmd(CAnimationBucket& animResult, int nAnimation, float flFrame, float flWeight)
{
	{
		CAnimationBucket tmp; // 1019
		CAnimationBucket::Init(
			const CAnimationBucket* pBaseResult);  // 818
		CAnimationBucket::CAnimationBucket(
				const CAnimationBucket& baseResult);  // 1019
		CAnimationBucket::FetchFrame(
				int nAnimation,
				float flFrame);  // 1020
		CAnimationBucket::Slerp(
			const CAnimationBucket& srcResult,
			int nBonemask,
			float flWeight);  // 1021
	}
	{
		CAnimationBucket tmp; // 1026
		CAnimationBucket::Init(
			const CAnimationBucket* pBaseResult);  // 818
		CAnimationBucket::CAnimationBucket(
				const CAnimationBucket& baseResult);  // 1026
		CAnimationBucket::FetchFrame(
				int nAnimation,
				float flFrame);  // 1027
		CAnimationBucket::Add(
			const CAnimationBucket& srcResult,
			int nBonemask,
			float flWeight);  // 1028
		CAnimationBucket::~CAnimationBucket(); // 1029
	}
	CAnimationBucket::FetchFrame(
			int nAnimation,
			float flFrame);  // 1015
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0273061D> bonesetup/bone_setup.cpp:1039
// variables: 5
// function calls: 40
void CBoneSetup::EvaluateOp(const CInternalOperation* pOperation, CThreadLocalAnimationDecodeCache* pDecodeCache)
{
	const char   __FUNCTION__; // 8736
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1053
	}
	{
		int nFrame; // 1090
		float flSubFrame; // 1091
		CUtlMemory<CAnimationResult, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
				int i);  // 1092
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1104
	}
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
			int i);  // 1048
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
			int i);  // 1101
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
			int i);  // 1101
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
			int i);  // 1056
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
			int i);  // 1056
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
			int i);  // 1059
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
			int i);  // 1059
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
			int i);  // 1062
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
			int i);  // 1062
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
			int i);  // 1065
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
			int i);  // 1068
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
			int i);  // 1068
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
			int i);  // 1071
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
			int i);  // 1071
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
			int i);  // 1074
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
			int i);  // 1074
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
			int i);  // 1077
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
			int i);  // 1080
	CUtlMemory<CAnimationResult, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationResult, CUtlMemoryFixedGrowable<CAnimationResult, 32, int> >::operator[](
			int i);  // 1084
} /* size: 0, variables: 1, inline expansions: 38 (734 bytes) */

// <027304C1> bonesetup/bone_setup.cpp:1113
// variables: 2
// function calls: 3
void CBoneSetup::AddAutoplaySequences()
{
	const CAnimContainer* pAnimContainer; // 1118
	{
		int i; // 1122
		CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::Count(); // 1122
		CUtlMemory<HSequence, int>::operator[](
				int i);  // 595
		CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >::operator[](
				int i);  // 1124
	}
} /* size: 117, variables: 1 */

// <0272F72A> bonesetup/bone_setup.cpp:1130
// variables: 7
// function calls: 26
void CBoneSetup::SpewDecodeOps()
{
	{
		int i; // 1141
		CUtlMemory<float, int>::operator[](
				int i);  // 595
		CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 32, int> >::operator[](
				int i);  // 1146
	}
	{
		int i; // 1156
		{
			const CInternalOperation* pOperation; // 1158
			{
				int j; // 1161
			}
			{
				const DegreeEuler  e; // 1208
				{
					RadianEuler radians; // 2288
					RadianEuler::RadianEuler(
							const Quaternion& q);  // 2288
					DegreeEuler::Init(
						vec_t ix,
						vec_t iy,
						vec_t iz);  // 2289
				}
				DegreeEuler::DegreeEuler(
						const Quaternion& q);  // 1208
				HSequence::HSequence(
						int32 value);  // 1209
			}
			HSequence::HSequence(
					int32 value);  // 1204
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 358
			CAnimDesc::GetName(); // 1201
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 358
			CAnimDesc::GetName(); // 1198
			CUtlMemory<CInternalOperation, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::operator[](
					int i);  // 1158
		}
		CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Count(); // 1156
	}
	{
		int i; // 1220
		CUtlVectorBase<DecodeOperation_t, CUtlMemoryFixedGrowable<DecodeOperation_t, 32, int> >::Count(); // 1220
		CUtlMemory<DecodeOperation_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<DecodeOperation_t, CUtlMemoryFixedGrowable<DecodeOperation_t, 32, int> >::operator[](
				int i);  // 1222
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 358
		CAnimDesc::GetName(); // 1222
	}
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 32, int> >::Count(); // 1139
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0272E740> bonesetup/bone_setup.cpp:1233
// variables: 8
// function calls: 52
void CBoneSetup::DumpDecodeOps()
{
	AnimationDecodeDebugDumpElement_t& debugElem; // 1238
	{
		int i; // 1248
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 1250
		CUtlMemory<float, int>::operator[](
				int i);  // 595
		CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 32, int> >::operator[](
				int i);  // 1250
	}
	{
		int i; // 1256
		{
			const CInternalOperation* pOperation; // 1258
			CUtlString s; // 1259
			{
				const DegreeEuler  e; // 1303
				{
					RadianEuler radians; // 2288
					RadianEuler::RadianEuler(
							const Quaternion& q);  // 2288
					DegreeEuler::Init(
						vec_t ix,
						vec_t iy,
						vec_t iz);  // 2289
				}
				DegreeEuler::DegreeEuler(
						const Quaternion& q);  // 1303
				HSequence::HSequence(
						int32 value);  // 1304
			}
			HSequence::HSequence(
					int32 value);  // 1299
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 358
			CAnimDesc::GetName(); // 1296
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 358
			CAnimDesc::GetName(); // 1293
			CUtlMemory<CInternalOperation, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::operator[](
					int i);  // 1258
			CUtlString::CUtlString(); // 1259
			CUtlString::IsEmpty(); // 1310
			CUtlMemory<CUtlString, int>::NumAllocated(); // 1196
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1201
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 1520
			CopyConstruct<CUtlString>(CUtlString* pMemory,
							const CUtlString& src);  // 1201
			CUtlMemory<CUtlString, int>::Base(); // 112
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
					const CUtlString& src);  // 1312
			CUtlString::~CUtlString(); // 1314
		}
		CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Count(); // 1256
	}
	{
		int i; // 1317
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 358
		CAnimDesc::GetName(); // 1319
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1317
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 1319
		CUtlMemory<DecodeOperation_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<DecodeOperation_t, CUtlMemoryFixedGrowable<DecodeOperation_t, 32, int> >::operator[](
				int i);  // 1319
	}
	CUtlString::operator=(
			const char* src);  // 1240
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 32, int> >::Count(); // 1244
	CUtlVectorBase<CInternalOperation, CUtlMemoryFixedGrowable<CInternalOperation, 32, int> >::Count(); // 1255
	CUtlMemory<CUtlString, int>::IsGrowable(); // 881
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CUtlString, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::EnsureCapacity(
			int num);  // 1255
	CUtlVectorBase<DecodeOperation_t, CUtlMemoryFixedGrowable<DecodeOperation_t, 32, int> >::Count(); // 1316
} /* size: 0, variables: 1, inline expansions: 9 (0 bytes) */

