
//
// modellib/animpose.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 28
//

// <022E0012> modellib/animpose.cpp:12
// variables: 3
void LerpArray(float* pDst, const float* pSrc, int nCount, float lerpValue)
{
	const float  s2; // 14
	const float  s1; // 15
	{
		int i; // 17
	}
} /* size: 0, variables: 2 */

// <022DFA9B> modellib/animpose.cpp:26
// function calls: 24
void CAnimPose::CAnimPose()
{
	CRefCountedMemPoolObject<CAnimPose>::CRefCountedMemPoolObject(); // 26
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 530
	CUtlMemory<CTransform, int>::ValidateGrowSize(); // 475
	CUtlMemory<CTransform, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::CUtlVector(); // 26
	CUtlMemory<CTransform, int>::ValidateGrowSize(); // 475
	CUtlMemory<CTransform, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::CUtlVector(); // 26
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
	CVarBitVec::CVarBitVec(); // 26
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 26
	CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::CSmartPtr(); // 26
} /* size: 164, inline expansions: 24 (417 bytes) */

// <022DFA82> modellib/animpose.cpp:26
void CAnimPose::CAnimPose()
{
} /* size: 0 */

// <022DF572> modellib/animpose.cpp:34
// function calls: 24
void CAnimPose::CAnimPose(const CAnimSkeletonConstPtr& pSkeleton)
{
	CRefCountedMemPoolObject<CAnimPose>::CRefCountedMemPoolObject(); // 34
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 530
	CUtlMemory<CTransform, int>::ValidateGrowSize(); // 475
	CUtlMemory<CTransform, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::CUtlVector(); // 34
	CUtlMemory<CTransform, int>::ValidateGrowSize(); // 475
	CUtlMemory<CTransform, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::CUtlVector(); // 34
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
	CVarBitVec::CVarBitVec(); // 34
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 34
	CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::CSmartPtr(); // 34
} /* size: 0, inline expansions: 24 (0 bytes) */

// <022DF54D> modellib/animpose.cpp:34
void CAnimPose::CAnimPose(const CAnimSkeletonConstPtr& pSkeleton)
{
} /* size: 0 */

// <022DEDC7> modellib/animpose.cpp:42
// variables: 2
// function calls: 31
void CAnimPose::Init(const CAnimSkeletonConstPtr& pSkeleton)
{
	{
		int boneCount; // 49
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<const CAnimSkeleton>(const CAnimSkeleton* pObj); // 366
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<const CAnimSkeleton>(const CAnimSkeleton* pObj); // 370
		CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator=(
				const CAnimSkeleton* pObj);  // 406
		CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator=(
				const CSmartPtr<const CAnimSkeleton, CRefCountAccessor>& other);  // 46
		CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::Count(); // 116
		CAnimSkeleton::GetBoneCount(); // 49
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 50
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::SetSize(
			int size);  // 52
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::SetSize(
			int size);  // 53
		CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1918
		CVarBitVecBase<short unsigned int, 32>::Base(); // 1918
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 1918
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::SetAll(); // 55
		CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator->(); // 58
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 58
		CAnimSkeleton::GetMorphCount(); // 58
		{
			int i; // 1554
			CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1554
			CUtlMemory<float, int>::operator[](
					int i);  // 602
			CUtlVectorBase<float, CUtlMemory<float, int> >::Element(
				int i);  // 1556
		}
		CUtlVectorBase<float, CUtlMemory<float, int> >::FillWithValue(
				const float& src);  // 61
	}
	CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator!=<const CAnimSkeleton>(
					const CSmartPtr<const CAnimSkeleton, CRefCountAccessor>& other);  // 44
} /* size: 221, inline expansions: 1 (10 bytes) */

// <022DE092> modellib/animpose.cpp:69
// variables: 2
// function calls: 59
void CAnimPose::CopyFrom(const CAnimPose& otherPose)
{
	const char   __FUNCTION__; // 60342
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 71
	}
	CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator==<const CAnimSkeleton>(
					const CSmartPtr<const CAnimSkeleton, CRefCountAccessor>& other);  // 71
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 573
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 102
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::begin(); // 574
	CUtlMemory<CTransform, int>::Base(); // 113
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 105
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 105
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::end(); // 574
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 209
	UtlTraitsCopyRange<CTransform>(const CTransform* pFrom,
					const CTransform* pFromEnd,
					CTransform* pTo);  // 200
	UtlTraitsCopyRange<CTransform>(const CTransform* pFrom,
					const CTransform* pFromEnd,
					CTransform* pTo);  // 574
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator=(
			const CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >& other);  // 565
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator=(
			const CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >& other);  // 452
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::operator=(
			const CUtlVector<CTransform, CUtlMemory<CTransform, int> >& src);  // 73
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 573
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 102
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::begin(); // 574
	CUtlMemory<CTransform, int>::Base(); // 113
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 105
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 105
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::end(); // 574
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 209
	UtlTraitsCopyRange<CTransform>(const CTransform* pFrom,
					const CTransform* pFromEnd,
					CTransform* pTo);  // 200
	UtlTraitsCopyRange<CTransform>(const CTransform* pFrom,
					const CTransform* pFromEnd,
					CTransform* pTo);  // 574
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator=(
			const CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >& other);  // 565
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator=(
			const CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >& other);  // 452
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::operator=(
			const CUtlVector<CTransform, CUtlMemory<CTransform, int> >& src);  // 74
	CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1856
	CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1083
	CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1083
	{
	}
	CVarBitVecBase<short unsigned int, 32>::ValidateOperand<CVarBitVecBase<short unsigned int, 32> >(
								const CBitVecT<CVarBitVecBase<short unsigned int, 32> >& operand);  // 1083
	CVarBitVecBase<short unsigned int, 32>::ValidateOperand<CVarBitVecBase<short unsigned int, 32> >(
								const CBitVecT<CVarBitVecBase<short unsigned int, 32> >& operand);  // 1858
	{
	}
	CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1861
	CVarBitVecBase<short unsigned int, 32>::Base(); // 1861
	CVarBitVecBase<short unsigned int, 32>::Base(); // 1861
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 1861
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::CopyTo<CVarBitVecBase<short unsigned int, 32> >(
							CBitVecT<CVarBitVecBase<short unsigned int, 32> >* out);  // 75
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 573
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 102
	CUtlVectorBase<float, CUtlMemory<float, int> >::begin(); // 574
	CUtlMemory<float, int>::Base(); // 113
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 105
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 105
	CUtlVectorBase<float, CUtlMemory<float, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 173
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 574
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
			const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 565
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
			const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 452
	CUtlVector<float, CUtlMemory<float, int> >::operator=(
			const CUtlVector<float, CUtlMemory<float, int> >& src);  // 76
} /* size: 0, variables: 1, inline expansions: 59 (1293 bytes) */

// <022DDA3F> modellib/animpose.cpp:82
// variables: 5
// function calls: 29
void CAnimPose::InitToIdentity()
{
	int boneCount; // 84
	{
		int i; // 85
		CUtlMemory<CTransform, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
				int i);  // 87
		VectorAligned::operator fltx4(); // 378
		{
			fltx4 retVal; // 1478
			_mm_move_ss(__m128 __A,
					__m128 __B);  // 1479
			_mm_move_ss(__m128 __A,
					__m128 __B);  // 1481
		}
		SetWSIMD<>(fltx4 a,
				float f);  // 378
		VectorAligned::operator=(
				fltx4 src);  // 378
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 379
		CTransform::SetToIdentity(); // 87
		CUtlMemory<CTransform, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
				int i);  // 88
		VectorAligned::operator fltx4(); // 378
		{
			fltx4 retVal; // 1478
			_mm_move_ss(__m128 __A,
					__m128 __B);  // 1479
			_mm_move_ss(__m128 __A,
					__m128 __B);  // 1481
		}
		SetWSIMD<>(fltx4 a,
				float f);  // 378
		VectorAligned::operator=(
				fltx4 src);  // 378
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 379
		CTransform::SetToIdentity(); // 88
	}
	{
		int i; // 93
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 93
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 95
	}
	CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator->(); // 84
	CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::Count(); // 116
	CAnimSkeleton::GetBoneCount(); // 84
	CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1970
	CVarBitVecBase<short unsigned int, 32>::Base(); // 1970
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1970
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll(); // 91
} /* size: 0, variables: 1, inline expansions: 8 (0 bytes) */

// <022DD3CC> modellib/animpose.cpp:102
// variables: 3
// function calls: 29
void CAnimPose::InitToBindPose()
{
	int boneCount; // 104
	{
		int i; // 105
		CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator->(); // 107
		CUtlMemory<CTransform, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
				int i);  // 163
		CAnimSkeleton::GetBindPoseLocalSpace(
					BoneIndex_t boneIndex);  // 107
		CUtlMemory<CTransform, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
				int i);  // 107
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				const CTransform  &);  // 107
		CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator->(); // 108
		CUtlMemory<CTransform, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
				int i);  // 170
		CAnimSkeleton::GetBindPoseModelSpace(
					BoneIndex_t boneIndex);  // 108
		CUtlMemory<CTransform, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
				int i);  // 108
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				const CTransform  &);  // 108
	}
	{
		int i; // 113
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 113
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 115
	}
	CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator->(); // 104
	CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::Count(); // 116
	CAnimSkeleton::GetBoneCount(); // 104
	CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1970
	CVarBitVecBase<short unsigned int, 32>::Base(); // 1970
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1970
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll(); // 111
} /* size: 253, variables: 1, inline expansions: 8 (54 bytes) */

// <022DD1DF> modellib/animpose.cpp:122
// function calls: 7
void CAnimPose::SetLocalSpaceTransform(BoneIndex_t boneIndex, const CTransform& transform)
{
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 113
	CAnimPose::GetBoneCount(); // 128
	CUtlMemory<CTransform, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
			int i);  // 131
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 131
} /* size: 46, inline expansions: 7 (50 bytes) */

// <022DC587> modellib/animpose.cpp:173
// variables: 5
// function calls: 47
void CAnimPose::SetModelSpaceTransform(BoneIndex_t boneIndex, const CTransform& transform)
{
	BoneIndex_t parentBoneIndex; // 185
	{
		CTransform parentModelTransform; // 188
		CTransform invParentModelTransform; // 189
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 113
		CAnimPose::GetBoneCount(); // 142
		CAnimPose::GetModelSpaceTransform(
					BoneIndex_t boneIndex);  // 188
		QuaternionAligned::operator fltx4(); // 471
		VectorAligned::operator fltx4(); // 471
		QuaternionAligned::operator fltx4(); // 471
		VectorAligned::operator fltx4(); // 471
		CTransform::operator*(
				const CTransform& rhs);  // 191
		CUtlMemory<CTransform, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
				int i);  // 191
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				CTransform &);  // 191
	}
	{
		const int  nChildCount; // 202
		{
			int i; // 203
			CUtlMemory<CAnimSkeleton::BoneInfo, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::operator[](
					int i);  // 156
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 156
			CAnimSkeleton::GetChildIndex(
					BoneIndex_t boneIndex,
					int childIndex);  // 205
			CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator->(); // 205
		}
		CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator->(); // 202
		CUtlMemory<CAnimSkeleton::BoneInfo, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::operator[](
				int i);  // 149
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 149
		CAnimSkeleton::GetChildCount(
				BoneIndex_t boneIndex);  // 202
	}
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 113
	CAnimPose::GetBoneCount(); // 179
	CUtlMemory<CTransform, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
			int i);  // 182
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 182
	CUtlMemory<CAnimSkeleton::BoneInfo, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::operator[](
			int i);  // 142
	CAnimSkeleton::GetParentIndex(
			BoneIndex_t boneIndex);  // 185
	CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator->(); // 185
	CUtlMemory<CTransform, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
			int i);  // 195
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 195
	CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
	{
	}
	CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
	BitVec_IsBitSet(const uint32* pBase,
			int nBitNum);  // 1471
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
		int bitNum);  // 199
	CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1497
	{
	}
	CVarBitVecBase<short unsigned int, 32>::Base(); // 1498
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Clear(
		int bitNum);  // 210
} /* size: 0, variables: 1, inline expansions: 23 (376 bytes) */

// <022DBE11> modellib/animpose.cpp:216
// variables: 5
// function calls: 31
void CAnimPose::CalculateModelSpaceTransforms()
{
	int boneCount; // 218
	{
		int i; // 219
		{
			CTransform localTransform; // 223
			int parentIndex; // 225
			{
				CTransform parentModelTransform; // 228
				CUtlMemory<CTransform, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
						int i);  // 228
				CTransform::operator*(
						const CTransform& rhs);  // 229
				CUtlMemory<CTransform, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
						int i);  // 229
				VectorAligned::operator=(
						const VectorAligned& src);  // 26
				QuaternionAligned::operator=(
						const QuaternionAligned& vOther);  // 26
				CTransform::operator=(
						CTransform &);  // 229
			}
			CUtlMemory<CTransform, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
					int i);  // 233
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					const CTransform  &);  // 233
			CUtlMemory<CTransform, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
					int i);  // 223
			CUtlMemory<CAnimSkeleton::BoneInfo, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::operator[](
					int i);  // 142
			CAnimSkeleton::GetParentIndex(
					BoneIndex_t boneIndex);  // 225
			CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator->(); // 225
		}
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
		{
		}
		CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
		BitVec_IsBitSet(const uint32* pBase,
				int nBitNum);  // 1471
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
			int bitNum);  // 221
	}
	CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::Count(); // 116
	CAnimSkeleton::GetBoneCount(); // 218
	CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator->(); // 218
	CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1970
	CVarBitVecBase<short unsigned int, 32>::Base(); // 1970
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1970
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll(); // 238
} /* size: 0, variables: 1, inline expansions: 8 (128 bytes) */

// <022E1514> modellib/animpose.cpp:244
// function calls: 2
void CAnimPose::GetLocalSpaceTransformsPtr()
{
	CUtlMemory<CTransform, int>::Base(); // 113
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 246
} /* size: 9, inline expansions: 2 (0 bytes) */

// <022DBDF8> modellib/animpose.cpp:244
void CAnimPose::GetLocalSpaceTransformsPtr()
{
} /* size: 0 */

// <022E159D> modellib/animpose.cpp:252
// function calls: 7
void CAnimPose::GetWritableLocalSpaceTransformsPtr()
{
	CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1918
	CVarBitVecBase<short unsigned int, 32>::Base(); // 1918
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1918
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::SetAll(); // 254
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 255
} /* size: 48, inline expansions: 7 (50 bytes) */

// <022DBDDF> modellib/animpose.cpp:252
void CAnimPose::GetWritableLocalSpaceTransformsPtr()
{
} /* size: 0 */

// <022E1751> modellib/animpose.cpp:261
// function calls: 2
void CAnimPose::GetModelSpaceTransformsPtr()
{
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 263
} /* size: 9, inline expansions: 2 (0 bytes) */

// <022DBDC6> modellib/animpose.cpp:261
void CAnimPose::GetModelSpaceTransformsPtr()
{
} /* size: 0 */

// <022DBDAE> modellib/animpose.cpp:269
void CAnimPose::GetWritableModelSpaceTransformsPtr()
{
} /* size: 0 */

// <022DB696> modellib/animpose.cpp:277
// variables: 6
// function calls: 28
void CAnimPose::ForceCalculateLocalTransforms()
{
	const int  boneCount; // 279
	{
		int iBone; // 280
		{
			CTransform boneTransformMS; // 282
			BoneIndex_t parentBoneIndex; // 286
			{
				CTransform parentModelTransform; // 289
				CTransform invParentModelTransform; // 290
				CTransform::InverseTR(); // 290
				CUtlMemory<CTransform, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
						int i);  // 289
				QuaternionAligned::operator fltx4(); // 471
				VectorAligned::operator fltx4(); // 471
				CTransform::operator*(
						const CTransform& rhs);  // 292
				CUtlMemory<CTransform, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
						int i);  // 292
				VectorAligned::operator=(
						const VectorAligned& src);  // 26
				QuaternionAligned::operator=(
						const QuaternionAligned& vOther);  // 26
				CTransform::operator=(
						CTransform &);  // 292
			}
			CUtlMemory<CTransform, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
					int i);  // 296
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					const CTransform  &);  // 296
			CUtlMemory<CTransform, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
					int i);  // 282
			CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator->(); // 286
			CUtlMemory<CAnimSkeleton::BoneInfo, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::operator[](
					int i);  // 142
			CAnimSkeleton::GetParentIndex(
					BoneIndex_t boneIndex);  // 286
		}
	}
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 279
	CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1970
	CVarBitVecBase<short unsigned int, 32>::Base(); // 1970
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1970
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll(); // 300
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <022DB304> modellib/animpose.cpp:306
// variables: 4
// function calls: 13
void CAnimPose::CalculateWorldSpaceTransforms(const CTransform& tmModel2World, CTransform* pWorldSpaceTransforms)
{
	const char   __FUNCTION__; // 60824
	int nBoneCount; // 314
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 308
	}
	{
		int nBone; // 315
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 113
		CAnimPose::GetBoneCount(); // 142
		CAnimPose::GetModelSpaceTransform(
					BoneIndex_t boneIndex);  // 317
		QuaternionAligned::operator fltx4(); // 471
		VectorAligned::operator fltx4(); // 471
		QuaternionAligned::operator fltx4(); // 471
		VectorAligned::operator fltx4(); // 471
		CTransform::operator*(
				const CTransform& rhs);  // 317
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				CTransform &);  // 317
	}
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 113
	CAnimPose::GetBoneCount(); // 314
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <022E17DB> modellib/animpose.cpp:324
// function call: 1
void CAnimPose::GetMorphCount()
{
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 326
} /* size: 8, inline expansions: 1 (0 bytes) */

// <022DB2EB> modellib/animpose.cpp:324
void CAnimPose::GetMorphCount()
{
} /* size: 0 */

// <022E1835> modellib/animpose.cpp:332
// function calls: 2
void CAnimPose::GetMorphWeights()
{
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 334
} /* size: 12, inline expansions: 2 (0 bytes) */

// <022DB2D2> modellib/animpose.cpp:332
void CAnimPose::GetMorphWeights()
{
} /* size: 0 */

// <022DB215> modellib/animpose.cpp:348
// function calls: 2
void CAnimPose::GetMorphWeight(int index)
{
	CUtlMemory<float, int>::operator[](
			int i);  // 595
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 350
} /* size: 0, inline expansions: 2 (0 bytes) */

// <022DB161> modellib/animpose.cpp:356
// function calls: 2
void CAnimPose::SetMorphWeight(int index, float flWeight)
{
	CUtlMemory<float, int>::operator[](
			int i);  // 588
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 358
} /* size: 0, inline expansions: 2 (0 bytes) */

// <022DAC31> modellib/animpose.cpp:364
// variables: 2
// function calls: 19
void CAnimPose::SetDirtyRecurs(BoneIndex_t boneIndex)
{
	{
		const int  nChildCount; // 371
		{
			int i; // 372
			CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator->(); // 374
			CUtlMemory<CAnimSkeleton::BoneInfo, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::operator[](
					int i);  // 156
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 156
			CAnimSkeleton::GetChildIndex(
					BoneIndex_t boneIndex,
					int childIndex);  // 374
		}
		CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
		Bitvec_Set(uint32* pBits,
				int nBitNum);  // 1480
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
		{
		}
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
			int bitNum);  // 368
		CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator->(); // 371
		CUtlMemory<CAnimSkeleton::BoneInfo, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::operator[](
				int i);  // 149
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 149
		CAnimSkeleton::GetChildCount(
				BoneIndex_t boneIndex);  // 371
	}
	BitVec_IsBitSet(const uint32* pBase,
			int nBitNum);  // 1471
	CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
	{
	}
	CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
		int bitNum);  // 366
} /* size: 0, inline expansions: 4 (131 bytes) */

