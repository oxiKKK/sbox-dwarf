
//
// modellib/vrskeletondefinition.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 8
//

// <02284F40> modellib/vrskeletondefinition.cpp:119
// variables: 3
// function calls: 20
void CreateChildList(void)
{
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> > list; // 121
	{
		int boneIndex; // 126
		{
			int nParentIndex; // 128
			CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::operator[](
					int i);  // 131
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
					const int& src);  // 131
		}
	}
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVector(); // 121
} /* size: 379, variables: 1, inline expansions: 5 (83 bytes) */

// <02285F06> modellib/vrskeletondefinition.cpp:143
void GetParentIndex(int nBoneIndex)
{
	{
	}
} /* size: 0 */

// <02284ED5> modellib/vrskeletondefinition.cpp:143
// variables: 2
void GetParentIndex(int nBoneIndex)
{
	const char   __FUNCTION__; // 46668
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 145
	}
} /* size: 0, variables: 1 */

// <02284DDD> modellib/vrskeletondefinition.cpp:152
// variables: 2
// function calls: 3
void GetChildCount(int nBoneIndex)
{
	const char   __FUNCTION__; // 46313
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 154
	}
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int this,
			int i);  // 156
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 156
} /* size: 0, variables: 1, inline expansions: 3 (22 bytes) */

// <02284B9A> modellib/vrskeletondefinition.cpp:161
// variables: 3
// function calls: 7
void GetChildIndex(int nBoneIndex, int nChildIndex)
{
	const char   __FUNCTION__; // 46313
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 163
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 164
	}
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int this,
			int i);  // 164
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 164
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int this,
			int i);  // 166
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 166
} /* size: 0, variables: 1, inline expansions: 7 (90 bytes) */

// <02285F35> modellib/vrskeletondefinition.cpp:171
void GetBindPoseTransformsMS(AnimVRHand_t eHand)
{
} /* size: 25 */

// <0228495B> modellib/vrskeletondefinition.cpp:185
// variables: 2
// function calls: 8
void GetBindPoseLocalSpace(AnimVRHand_t eHand, int nBoneIndex)
{
	const CTransform* modelSpaceXForms; // 187
	int nParentIndex; // 189
	GetBindPoseTransformsMS(AnimVRHand_t eHand); // 187
	{
	}
	GetParentIndex(int nBoneIndex); // 189
	CTransform::InverseTR(); // 192
	QuaternionAligned::operator fltx4(); // 471
	VectorAligned::operator fltx4(); // 471
	QuaternionAligned::operator fltx4(); // 471
	VectorAligned::operator fltx4(); // 471
	CTransform::operator*(
			const CTransform& rhs);  // 192
} /* size: 0, variables: 2, inline expansions: 8 (121 bytes) */

// <022848DC> modellib/vrskeletondefinition.cpp:202
// variable: 1
// function call: 1
void GetBindPoseModelSpace(AnimVRHand_t eHand, int nBoneIndex)
{
	const CTransform* modelSpaceXForms; // 204
	GetBindPoseTransformsMS(AnimVRHand_t eHand); // 204
} /* size: 68, variables: 1, inline expansions: 1 (20 bytes) */

