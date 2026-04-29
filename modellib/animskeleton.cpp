
//
// modellib/animskeleton.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//

// <023305F4> modellib/animskeleton.cpp:11
// variables: 28
// function calls: 126
void CAnimSkeleton::CAnimSkeleton(const CModel& model)
{
	{
		{
			const CModelSkeleton& modelSkel; // 13
			int boneCount; // 16
			const CAnimContainer* pContainer; // 64
			const CUtlVector<CFootDefinition, CUtlMemory<CFootDefinition, int> >  footDefinitions; // 78
			{
				int i; // 22
				{
					BoneInfo& info; // 24
					{
					}
				}
			}
			{
				int i; // 45
				{
					int parentIndex; // 47
					{
						CTransform localTransform; // 50
						CTransform parentModelTransform; // 52
					}
				}
			}
			{
				const CAnimDataChannel* pChannel; // 69
				{
				}
			}
			{
				int i; // 82
				{
					CAnimFoot& currentFoot; // 84
				}
			}
		}
	}
	{
		CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 11
		CUtlMemory<CTransform, int>::ValidateGrowSize(); // 475
		CUtlMemory<CTransform, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CTransform, CUtlMemory<CTransform, int> >::CUtlVector(); // 11
		CUtlMemory<CTransform, int>::ValidateGrowSize(); // 475
		CUtlMemory<CTransform, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CTransform, CUtlMemory<CTransform, int> >::CUtlVector(); // 11
		CUtlMemory<CAnimSkeleton::BoneInfo, int>::ValidateGrowSize(); // 475
		CUtlMemory<CAnimSkeleton::BoneInfo, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::CUtlVector(); // 11
		CUtlMemory<CAnimFoot, int>::ValidateGrowSize(); // 475
		CUtlMemory<CAnimFoot, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CAnimFoot, CUtlMemory<CAnimFoot, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CAnimFoot, CUtlMemory<CAnimFoot, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CAnimFoot, CUtlMemory<CAnimFoot, int> >::CUtlVector(); // 11
		{
			const CModelSkeleton& modelSkel; // 13
			int boneCount; // 16
			const CAnimContainer* pContainer; // 64
			const CUtlVector<CFootDefinition, CUtlMemory<CFootDefinition, int> >  footDefinitions; // 78
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::SetSize(
				int size);  // 17
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::SetSize(
				int size);  // 18
			CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::SetSize(
				int size);  // 19
			{
				int i; // 22
				{
					BoneInfo& info; // 24
					CUtlMemory<CTransform, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
							int i);  // 36
					QuaternionAligned::Init(
						vec_t X,
						vec_t Y,
						vec_t Z,
						vec_t W);  // 30
					QuaternionAligned::QuaternionAligned(
								const Quaternion& rhs);  // 33
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
							float p3);  // 111
					CTransform::SetPositionAndScale(
								const Vector& v0,
								float flScale);  // 33
					VectorAligned::VectorAligned(); // 33
					CTransform::CTransform(
							const Vector& v,
							const Quaternion& q,
							float flScale);  // 36
					VectorAligned::operator=(
							const VectorAligned& src);  // 26
					QuaternionAligned::operator=(
							const QuaternionAligned& vOther);  // 26
					CTransform::operator=(
							CTransform &);  // 36
					CUtlMemory<CAnimSkeleton::BoneInfo, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::operator[](
							int i);  // 24
					CUtlString::operator=(
							const char* src);  // 25
					{
					}
					CUtlMemory<CAnimSkeleton::BoneInfo, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::operator[](
							int i);  // 33
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
							const int& src);  // 33
				}
			}
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
					int i);  // 42
			CUtlMemory<CTransform, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
					int i);  // 42
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					const CTransform  &);  // 42
			{
				int i; // 45
				{
					int parentIndex; // 47
					{
						CTransform localTransform; // 50
						CTransform parentModelTransform; // 52
						CUtlMemory<CTransform, int>::operator[](
								int i);  // 588
						CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
								int i);  // 50
						CUtlMemory<CTransform, int>::operator[](
								int i);  // 588
						CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
								int i);  // 52
						CTransform::operator*(
								const CTransform& rhs);  // 54
						CUtlMemory<CTransform, int>::operator[](
								int i);  // 588
						CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
								int i);  // 54
						VectorAligned::operator=(
								const VectorAligned& src);  // 26
						QuaternionAligned::operator=(
								const QuaternionAligned& vOther);  // 26
						CTransform::operator=(
								CTransform &);  // 54
					}
					CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
							int i);  // 58
					CUtlMemory<CTransform, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
							int i);  // 58
					VectorAligned::operator=(
							const VectorAligned& src);  // 26
					QuaternionAligned::operator=(
							const QuaternionAligned& vOther);  // 26
					CTransform::operator=(
							const CTransform  &);  // 58
					CUtlMemory<CAnimSkeleton::BoneInfo, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::operator[](
							int i);  // 142
					CAnimSkeleton::GetParentIndex(
							BoneIndex_t boneIndex);  // 47
				}
			}
			{
				const CAnimDataChannel* pChannel; // 69
				CUtlMemory<CAnimDataChannel, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
						int i);  // 69
				{
					_DebuggerBreakInlineExpressionWrapper(void); // 70
				}
			}
			CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::Count(); // 135
			CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::IsEmpty(); // 79
			CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::Count(); // 81
			{
				int i; // 82
				CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::Count(); // 82
				{
					CAnimFoot& currentFoot; // 84
					V_strlen(const char* str); // 393
					CUtlString::Length(); // 161
					CUtlString::Get(); // 161
					CUtlString::operator=(
							const CUtlString& src);  // 85
					CUtlMemory<CFootDefinition, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::operator[](
							int i);  // 86
					Vector::operator=(
							const Vector& vOther);  // 86
					CUtlMemory<CFootDefinition, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::operator[](
							int i);  // 87
					Vector::operator=(
							const Vector& vOther);  // 87
					CUtlMemory<CFootDefinition, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::operator[](
							int i);  // 88
					CUtlString::Get(); // 99
					CUtlString::String(); // 88
					CUtlMemory<CFootDefinition, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::operator[](
							int i);  // 89
					CUtlString::Get(); // 99
					CUtlString::String(); // 89
					CUtlMemory<CAnimFoot, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CAnimFoot, CUtlMemory<CAnimFoot, int> >::operator[](
							int i);  // 84
					CUtlMemory<CFootDefinition, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::operator[](
							int i);  // 85
				}
			}
			CUtlMemory<CFootDefinition, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CFootDefinition, int>::Purge(); // 903
			CUtlMemory<CFootDefinition, int>::Purge(); // 1799
			{
				int i; // 1721
				CUtlMemory<CFootDefinition, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::Element(
					int i);  // 1723
				CUtlString::~CUtlString(); // 14
				CUtlString::~CUtlString(); // 14
				CUtlString::~CUtlString(); // 14
				CFootDefinition::~CFootDefinition(); // 1526
				Destruct<CFootDefinition>(CFootDefinition* pMemory); // 1723
			}
			CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::RemoveAll(); // 1798
			CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::Purge(); // 560
			ValidateAlignment<CFootDefinition>(void); // 508
			CUtlMemory<CFootDefinition, int>::Purge(); // 510
			CUtlMemory<CFootDefinition, int>::~CUtlMemory(); // 562
			CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::~CUtlVectorBase(); // 410
			CUtlVector<CFootDefinition, CUtlMemory<CFootDefinition, int> >::~CUtlVector(); // 92
		}
	}
} /* size: 0 */

// <02330475> modellib/animskeleton.cpp:11
// variables: 15
void CAnimSkeleton::CAnimSkeleton(const CModel& model)
{
	const char   __FUNCTION__; // 45627
	{
		const CModelSkeleton& modelSkel; // 13
		int boneCount; // 16
		const CAnimContainer* pContainer; // 64
		const CUtlVector<CFootDefinition, CUtlMemory<CFootDefinition, int> >  footDefinitions; // 78
		{
			int i; // 22
			{
				BoneInfo& info; // 24
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 30
				}
			}
		}
		{
			int i; // 45
			{
				int parentIndex; // 47
				{
					CTransform localTransform; // 50
					CTransform parentModelTransform; // 52
				}
			}
		}
		{
			const CAnimDataChannel* pChannel; // 69
			{
			}
		}
		{
			int i; // 82
			{
				CAnimFoot& currentFoot; // 84
			}
		}
	}
} /* size: 0, variables: 1 */

// <02330355> modellib/animskeleton.cpp:97
// variable: 1
// function calls: 3
void CAnimSkeleton::GetBoneIndex(const CUtlString& boneName)
{
	{
		BoneIndex_t i; // 99
		CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::Count(); // 99
		CUtlMemory<CAnimSkeleton::BoneInfo, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::operator[](
				int i);  // 101
	}
} /* size: 0 */

