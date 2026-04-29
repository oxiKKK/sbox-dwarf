
//
// modellib/boneconstraints.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 172
//	class: 1
//

// <0541763D> modellib/boneconstraints.cpp:17
// variables: 7
// function calls: 8
void CModel::CalcBoneConstraints(CTransform* pWorldTransformsInOut, CVarBitVec* pSubTree, float* pFlexControlsInOut)
{
	BoneConstraintResult_t eResult; // 19
	const uint32* pBoneBitVec; // 24
	{
		const CBoneConstraintBase* pAnimConstraint; // 26
		const CUtlVector<const CBoneConstraintBase*, CUtlMemory<const CBoneConstraintBase*, int> >& __for_range; // 45515
		const_iterator __for_begin; // 42105
		const_iterator __for_end; // 42105
		{
			const BoneConstraintResult_t  eSubResult; // 28
			operator|(BoneConstraintResult_t a,
					BoneConstraintResult_t b);  // 29
		}
		CUtlMemory<const CBoneConstraintBase::Base(); // 113
		CUtlVectorBase<const CBoneConstraintBase::Base(); // 103
		CUtlVectorBase<const CBoneConstraintBase::begin(); // 26
		CUtlVectorBase<const CBoneConstraintBase::end(); // 26
	}
	CUtlVectorBase<const CBoneConstraintBase::Count(); // 135
	CUtlVectorBase<const CBoneConstraintBase::IsEmpty(); // 21
	CVarBitVecBase<short unsigned int, 32>::Base(); // 24
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <0133A27E> modellib/boneconstraints.cpp:17
// variables: 7
// function calls: 8
void CModel::CalcBoneConstraints(CTransform* pWorldTransformsInOut, CVarBitVec* pSubTree, float* pFlexControlsInOut)
{
	BoneConstraintResult_t eResult; // 19
	const uint32* pBoneBitVec; // 24
	{
		const CBoneConstraintBase* pAnimConstraint; // 26
		const CUtlVector<const CBoneConstraintBase*, CUtlMemory<const CBoneConstraintBase*, int> >& __for_range; // 60017
		const_iterator __for_begin; // 56607
		const_iterator __for_end; // 56607
		{
			const BoneConstraintResult_t  eSubResult; // 28
			operator|(BoneConstraintResult_t a,
					BoneConstraintResult_t b);  // 29
		}
		CUtlMemory<const CBoneConstraintBase::Base(); // 113
		CUtlVectorBase<const CBoneConstraintBase::Base(); // 103
		CUtlVectorBase<const CBoneConstraintBase::begin(); // 26
		CUtlVectorBase<const CBoneConstraintBase::end(); // 26
	}
	CUtlVectorBase<const CBoneConstraintBase::Count(); // 135
	CUtlVectorBase<const CBoneConstraintBase::IsEmpty(); // 21
	CVarBitVecBase<short unsigned int, 32>::Base(); // 24
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <054162B6> modellib/boneconstraints.cpp:37
// variables: 14
// function calls: 81
void CModel::CalcBoneConstraints(matrix3x4a_t* pWorldTransformsInOut, int nTransformCount, CVarBitVec* pSubTree, float* pFlexControlsInOut)
{
	BoneConstraintResult_t eResult; // 39
	const uint32* pBoneBitVec; // 43
	CUtlVectorFixedGrowable<CTransform, 64> xforms; // 45
	{
		int i; // 47
		VectorAligned::VectorAligned(); // 31
		QuaternionAligned::QuaternionAligned(); // 31
		CTransform::CTransform(); // 529
		Quaternion::Quaternion(); // 305
		Vector::Vector(); // 306
		matrix3x4_t::matrix3x4_t(); // 753
		Vector::LargestComponentValue(); // 755
		MatrixPosition(const matrix3x4_t& matrix,
				Vector& position);  // 757
		MatrixQuaternion(const matrix3x4_t& mat,
				Quaternion& q,
				Vector& o,
				float& flScale);  // 308
		QuaternionAligned::operator=(
				const Quaternion& vOther);  // 309
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
					float flScale);  // 310
		CTransform::InitFromMatrix(
				const matrix3x4_t& xform);  // 530
		matrix3x4_t::ToCTransform(); // 49
		CUtlMemory<CTransform, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::operator[](
				int i);  // 49
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				CTransform &);  // 49
	}
	{
		const CBoneConstraintBase* pAnimConstraint; // 51
		const CUtlVector<const CBoneConstraintBase*, CUtlMemory<const CBoneConstraintBase*, int> >& __for_range; // 45515
		const_iterator __for_begin; // 42105
		const_iterator __for_end; // 42105
		{
			const BoneConstraintResult_t  eSubResult; // 53
			operator|(BoneConstraintResult_t a,
					BoneConstraintResult_t b);  // 54
		}
		CUtlMemory<const CBoneConstraintBase::Base(); // 113
		CUtlVectorBase<const CBoneConstraintBase::Base(); // 103
		CUtlVectorBase<const CBoneConstraintBase::begin(); // 51
		CUtlVectorBase<const CBoneConstraintBase::Count(); // 105
		CUtlVectorBase<const CBoneConstraintBase::end(); // 51
	}
	{
		int i; // 56
		_mm_cvtss_f32(__m128 __A); // 1553
		GetWSIMD<>(fltx4 a); // 98
		VectorAligned::operator fltx4(); // 98
		CTransform::GetScale(); // 362
		{
			int i; // 325
			{
				int j; // 327
			}
		}
		matrix3x4_t::ScaleUpper3x3Matrix(
					float flScale);  // 365
		CTransform::ToMatrix(); // 58
		matrix3x4_t::Base(); // 291
		matrix3x4_t::Base(); // 291
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 291
		matrix3x4a_t::operator=(
				const matrix3x4_t& src);  // 58
		CUtlMemory<CTransform, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::operator[](
				int i);  // 58
	}
	CUtlVectorBase<const CBoneConstraintBase::Count(); // 135
	CUtlVectorBase<const CBoneConstraintBase::IsEmpty(); // 40
	CVarBitVecBase<short unsigned int, 32>::Base(); // 43
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
	AlignedByteArrayExplicit_t<64, CTransform, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<64, CTransform>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<64, CTransform, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<CTransform, 64, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CTransform, 64>::CUtlVectorFixedGrowable(
				int growSize);  // 45
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::Base(); // 368
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
	}
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::SetCount(
		int count);  // 46
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CTransform, int>::ConvertToExternalMemory(
				CTransform* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CTransform, int>::Purge_FixedGrowable(
				CTransform* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CTransform, int>::Purge_FixedGrowable(
				CTransform* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<64, CTransform, 16>::Base(); // 237
	CUtlMemoryFixedGrowable<CTransform, 64, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::RemoveAll(); // 1798
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::Base(); // 368
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::Purge(); // 560
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CTransform, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CTransform, 64, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CTransform, 64>::~CUtlVectorFixedGrowable(); // 61
} /* size: 0, variables: 3, inline expansions: 42 (0 bytes) */

// <01338EF7> modellib/boneconstraints.cpp:37
// variables: 14
// function calls: 81
void CModel::CalcBoneConstraints(matrix3x4a_t* pWorldTransformsInOut, int nTransformCount, CVarBitVec* pSubTree, float* pFlexControlsInOut)
{
	BoneConstraintResult_t eResult; // 39
	const uint32* pBoneBitVec; // 43
	CUtlVectorFixedGrowable<CTransform, 64> xforms; // 45
	{
		int i; // 47
		VectorAligned::VectorAligned(); // 31
		QuaternionAligned::QuaternionAligned(); // 31
		CTransform::CTransform(); // 529
		Quaternion::Quaternion(); // 305
		Vector::Vector(); // 306
		matrix3x4_t::matrix3x4_t(); // 753
		Vector::LargestComponentValue(); // 755
		MatrixPosition(const matrix3x4_t& matrix,
				Vector& position);  // 757
		MatrixQuaternion(const matrix3x4_t& mat,
				Quaternion& q,
				Vector& o,
				float& flScale);  // 308
		QuaternionAligned::operator=(
				const Quaternion& vOther);  // 309
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
					float flScale);  // 310
		CTransform::InitFromMatrix(
				const matrix3x4_t& xform);  // 530
		matrix3x4_t::ToCTransform(); // 49
		CUtlMemory<CTransform, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::operator[](
				int i);  // 49
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				CTransform &);  // 49
	}
	{
		const CBoneConstraintBase* pAnimConstraint; // 51
		const CUtlVector<const CBoneConstraintBase*, CUtlMemory<const CBoneConstraintBase*, int> >& __for_range; // 60017
		const_iterator __for_begin; // 56607
		const_iterator __for_end; // 56607
		{
			const BoneConstraintResult_t  eSubResult; // 53
			operator|(BoneConstraintResult_t a,
					BoneConstraintResult_t b);  // 54
		}
		CUtlMemory<const CBoneConstraintBase::Base(); // 113
		CUtlVectorBase<const CBoneConstraintBase::Base(); // 103
		CUtlVectorBase<const CBoneConstraintBase::begin(); // 51
		CUtlVectorBase<const CBoneConstraintBase::Count(); // 105
		CUtlVectorBase<const CBoneConstraintBase::end(); // 51
	}
	{
		int i; // 56
		_mm_cvtss_f32(__m128 __A); // 1553
		GetWSIMD<>(fltx4 a); // 98
		VectorAligned::operator fltx4(); // 98
		CTransform::GetScale(); // 362
		{
			int i; // 325
			{
				int j; // 327
			}
		}
		matrix3x4_t::ScaleUpper3x3Matrix(
					float flScale);  // 365
		CTransform::ToMatrix(); // 58
		matrix3x4_t::Base(); // 291
		matrix3x4_t::Base(); // 291
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 291
		matrix3x4a_t::operator=(
				const matrix3x4_t& src);  // 58
		CUtlMemory<CTransform, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::operator[](
				int i);  // 58
	}
	CUtlVectorBase<const CBoneConstraintBase::Count(); // 135
	CUtlVectorBase<const CBoneConstraintBase::IsEmpty(); // 40
	CVarBitVecBase<short unsigned int, 32>::Base(); // 43
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
	AlignedByteArrayExplicit_t<64, CTransform, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<64, CTransform>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<64, CTransform, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<CTransform, 64, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CTransform, 64>::CUtlVectorFixedGrowable(
				int growSize);  // 45
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::Base(); // 368
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
	}
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::SetCount(
		int count);  // 46
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CTransform, int>::ConvertToExternalMemory(
				CTransform* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CTransform, int>::Purge_FixedGrowable(
				CTransform* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CTransform, int>::Purge_FixedGrowable(
				CTransform* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<64, CTransform, 16>::Base(); // 237
	CUtlMemoryFixedGrowable<CTransform, 64, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::RemoveAll(); // 1798
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::Base(); // 368
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::Purge(); // 560
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CTransform, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CTransform, 64, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CTransform, 64>::~CUtlVectorFixedGrowable(); // 61
} /* size: 0, variables: 3, inline expansions: 42 (0 bytes) */

// <054157C7> modellib/boneconstraints.cpp:73
// variables: 9
// function calls: 35
void CConstraintTarget::Finalize(const CModel* pModel)
{
	const int  nBoneCount; // 80
	{
		CUtlStringToken nToken; // 86
		{
			const int  nAttachmentBoneCount; // 93
			{
				Quaternion qAtt; // 97
				Vector vAtt; // 98
				float flAtt; // 99
				VectorAligned::VectorAligned(); // 33
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
				CTransform::CTransform(
						const Vector& v,
						const Quaternion& q,
						float flScale);  // 102
				VectorAligned::VectorAligned(); // 33
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
				CTransform::CTransform(
						const Vector& v,
						const Quaternion& q,
						float flScale);  // 102
				ConcatTransforms(const CTransform  in1,
						const CTransform  in2);  // 102
				VectorAligned::operator=(
						const VectorAligned& src);  // 26
				QuaternionAligned::operator=(
						const QuaternionAligned& vOther);  // 26
				CTransform::operator=(
						CTransform &);  // 102
			}
		}
		CUtlStringToken::CUtlStringToken(); // 86
		AttachmentHandle_t::operator==(
				const AttachmentHandle_t& other);  // 90
	}
	CUtlString::IsEmpty(); // 75
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 77
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
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 82
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			CTransform &);  // 82
	CConstraintTarget::IsValid(); // 155
} /* size: 0, variables: 1, inline expansions: 14 (314 bytes) */

// <0541DB4A> modellib/boneconstraints.cpp:161
// variables: 4
// function calls: 20
void CConstraintTarget::AppendBoneIndices(const CModel* pModel, CUtlVector<int, CUtlMemory<int, int> >* pnBoneIndices)
{
	CConstraintTarget::IsValid(); // 163
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
			const int& src);  // 170
	{
		const int  nBoneCount; // 174
		const int  nAttBoneCount; // 175
		{
			int nAttBoneIndex; // 176
			{
				const int  nBoneIndex; // 178
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
						const int& src);  // 181
			}
		}
	}
	CConstraintTarget::AppendBoneIndices(
				const CModel* pModel,
				CUtlVector<int, CUtlMemory<int, int> >* pnBoneIndices);  // 161
} /* size: 0, inline expansions: 11 (0 bytes) */

// <0541575D> modellib/boneconstraints.cpp:161
// variables: 4
void CConstraintTarget::AppendBoneIndices(const CModel* pModel, CUtlVector<int, CUtlMemory<int, int> >* pnBoneIndices)
{
	{
		const int  nBoneCount; // 174
		const int  nAttBoneCount; // 175
		{
			int nAttBoneIndex; // 176
			{
				const int  nBoneIndex; // 178
			}
		}
	}
} /* size: 0 */

// <054148F9> modellib/boneconstraints.cpp:193
// variables: 13
// function calls: 68
void CConstraintTarget::AddWeightedTargetPosition(const CModel* pModel, const CTransform* pWorldSpaceTransformsIn, Vector* pvTargetPosition)
{
	{
		CTransform mAttachment; // 205
		VectorAligned::VectorAligned(); // 31
		QuaternionAligned::QuaternionAligned(); // 31
		CTransform::CTransform(); // 205
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
				const Vector& rhs);  // 207
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
		CTransform::GetOrigin(); // 207
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 250
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 250
		VectorAligned::operator+(
				const VectorAligned& v);  // 207
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 268
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 268
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 268
		VectorAligned::operator*(
				vec_t s);  // 427
		operator*(float fl,
				const VectorAligned& v);  // 207
		Vector::operator+=(
				const Vector& v);  // 207
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 207
	}
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
	CTransform::GetOrigin(); // 201
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
	VectorAligned::operator fltx4(); // 71
	CTransform::GetOrigin(); // 211
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 268
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 268
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 268
	VectorAligned::operator*(
			vec_t s);  // 427
	operator*(float fl,
			const VectorAligned& v);  // 211
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 211
	Vector::operator+=(
			const Vector& v);  // 211
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 198
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
	CTransform::GetOrigin(); // 198
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 268
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 268
	VectorAligned::operator*(
			vec_t s);  // 427
	operator*(float fl,
			const VectorAligned& v);  // 198
} /* size: 367, inline expansions: 28 (251 bytes) */

// <054144F4> modellib/boneconstraints.cpp:220
// variable: 1
// function calls: 14
void CConstraintTarget::ComputeTargetMatrix(const CModel* pModel, const CTransform* pWorldSpaceTransformsIn, CTransform* pmTarget)
{
	{
		CTransform mAttachment; // 232
		VectorAligned::VectorAligned(); // 31
		QuaternionAligned::QuaternionAligned(); // 31
		CTransform::CTransform(); // 232
		ConcatTransforms(const CTransform  in1,
				const CTransform  in2);  // 234
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				CTransform &);  // 234
	}
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 228
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 238
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 225
} /* size: 265, inline expansions: 7 (97 bytes) */

// <054132D2> modellib/boneconstraints.cpp:247
// variables: 13
// function calls: 70
void CConstraintSlave::Finalize(const CModel* pModel)
{
	const char   __FUNCTION__; // 32631
	{
		CVarBitVec boneBitVec; // 259
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 259
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 265
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 268
		}
		CalcNumIntsForBits(int numBits); // 1292
		CVarBitVecBase<short unsigned int, 32>::AllocInts(
				int numInts);  // 2546
		CVarBitVecBase<short unsigned int, 32>::AllocInts(
				int numInts);  // 1294
		CVarBitVecBase<short unsigned int, 32>::CVarBitVecBase(
				int numBits);  // 1419
		CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1970
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 1970
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll(); // 1427
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::CBitVecT(
			int numBits);  // 1215
		CVarBitVecT<short unsigned int, 32>::CVarBitVecT(
				int numBits);  // 1224
		CVarBitVec::CVarBitVec(
				int nBitCount);  // 259
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1087
		GetEndMask(int numBits); // 1087
		CVarBitVecBase<short unsigned int, 32>::GetEndMask(); // 1875
		CVarBitVecBase<short unsigned int, 32>::Base(); // 1875
		CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1875
		{
			int i; // 1877
			CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1877
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1879
		}
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsAllClear(); // 259
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1497
		{
		}
		CVarBitVecBase<short unsigned int, 32>::Base(); // 1498
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Clear(
			int bitNum);  // 261
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1087
		GetEndMask(int numBits); // 1087
		CVarBitVecBase<short unsigned int, 32>::GetEndMask(); // 1875
		CVarBitVecBase<short unsigned int, 32>::Base(); // 1875
		CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1875
		{
			int i; // 1877
			CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1877
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1879
		}
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsAllClear(); // 262
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 264
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1083
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1083
		{
		}
		CVarBitVecBase<short unsigned int, 32>::ValidateOperand<CVarBitVecBase<short unsigned int, 32> >(
									const CBitVecT<CVarBitVecBase<short unsigned int, 32> >& operand);  // 1083
		CVarBitVecBase<short unsigned int, 32>::ValidateOperand<CVarBitVecBase<short unsigned int, 32> >(
									const CBitVecT<CVarBitVecBase<short unsigned int, 32> >& operand);  // 2025
		CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 2028
		CVarBitVecBase<short unsigned int, 32>::Base(); // 2028
		CVarBitVecBase<short unsigned int, 32>::Base(); // 2028
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 2028
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Copy<CVarBitVecBase<short unsigned int, 32> >(
								const CBitVecT<CVarBitVecBase<short unsigned int, 32> >& other,
								int nBits);  // 264
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 265
		GetEndMask(int numBits); // 1024
		{
			const uint32* pCurElem; // 413
			const uint32* pLastElem; // 414
			{
				unsigned int elem; // 418
				GetStartBitMask(int startBit); // 418
				FirstBitInWordThatIsKnownToBeNonZero(uint elem,
									int offset);  // 426
				FirstBitInWord(unsigned int elem,
						int offset);  // 422
			}
			FirstBitInWordThatIsKnownToBeNonZero(uint elem,
								int offset);  // 468
			FirstBitInWordThatIsKnownToBeNonZero(uint elem,
								int offset);  // 106
			FirstBitInWord(unsigned int elem,
					int offset);  // 473
		}
		BitVec_FindNextSetBit<short unsigned int, false>(int startBit,
								short unsigned int numBits,
								short unsigned int numDWords,
								const uint32* pBase,
								uint32 nEndMask);  // 1024
		CVarBitVecBase<short unsigned int, 32>::FindNextSetBit(
				int iStartBit);  // 268
		{
			const uint32* pCurElem; // 413
			const uint32* pLastElem; // 414
			{
				unsigned int elem; // 418
				GetStartBitMask(int startBit); // 418
				FirstBitInWordThatIsKnownToBeNonZero(uint elem,
									int offset);  // 426
				FirstBitInWordThatIsKnownToBeNonZero(uint elem,
									int offset);  // 106
				FirstBitInWord(unsigned int elem,
						int offset);  // 422
			}
			FirstBitInWordThatIsKnownToBeNonZero(uint elem,
								int offset);  // 468
			FirstBitInWordThatIsKnownToBeNonZero(uint elem,
								int offset);  // 106
			FirstBitInWord(unsigned int elem,
					int offset);  // 473
		}
		BitVec_FindNextSetBit<short unsigned int, false>(int startBit,
								short unsigned int numBits,
								short unsigned int numDWords,
								const uint32* pBase,
								uint32 nEndMask);  // 1024
		CVarBitVecBase<short unsigned int, 32>::FindNextSetBit(
				int iStartBit);  // 268
		CVarBitVecBase<short unsigned int, 32>::FreeInts(); // 1342
		CVarBitVecBase<short unsigned int, 32>::~CVarBitVecBase(); // 914
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::~CBitVecT(); // 1207
		CVarBitVecT<short unsigned int, 32>::~CVarBitVecT(); // 1220
		CVarBitVec::~CVarBitVec(); // 272
	}
	CUtlString::IsEmpty(); // 249
	CConstraintSlave::IsValid(); // 278
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 251
} /* size: 0, variables: 1, inline expansions: 5 (201 bytes) */

// <020D1448> modellib/boneconstraints.cpp:247
// variables: 13
// function calls: 70
void CConstraintSlave::Finalize(const CModel* pModel)
{
	const char   __FUNCTION__; // 12258
	{
		CVarBitVec boneBitVec; // 259
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 259
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 265
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 268
		}
		CalcNumIntsForBits(int numBits); // 1292
		CVarBitVecBase<short unsigned int, 32>::AllocInts(
				int numInts);  // 2546
		CVarBitVecBase<short unsigned int, 32>::AllocInts(
				int numInts);  // 1294
		CVarBitVecBase<short unsigned int, 32>::CVarBitVecBase(
				int numBits);  // 1419
		CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1970
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 1970
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll(); // 1427
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::CBitVecT(
			int numBits);  // 1215
		CVarBitVecT<short unsigned int, 32>::CVarBitVecT(
				int numBits);  // 1224
		CVarBitVec::CVarBitVec(
				int nBitCount);  // 259
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1087
		GetEndMask(int numBits); // 1087
		CVarBitVecBase<short unsigned int, 32>::GetEndMask(); // 1875
		CVarBitVecBase<short unsigned int, 32>::Base(); // 1875
		CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1875
		{
			int i; // 1877
			CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1877
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1879
		}
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsAllClear(); // 259
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1497
		{
		}
		CVarBitVecBase<short unsigned int, 32>::Base(); // 1498
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Clear(
			int bitNum);  // 261
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1087
		GetEndMask(int numBits); // 1087
		CVarBitVecBase<short unsigned int, 32>::GetEndMask(); // 1875
		CVarBitVecBase<short unsigned int, 32>::Base(); // 1875
		CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1875
		{
			int i; // 1877
			CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1877
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1879
		}
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsAllClear(); // 262
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 264
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1083
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1083
		{
		}
		CVarBitVecBase<short unsigned int, 32>::ValidateOperand<CVarBitVecBase<short unsigned int, 32> >(
									const CBitVecT<CVarBitVecBase<short unsigned int, 32> >& operand);  // 1083
		CVarBitVecBase<short unsigned int, 32>::ValidateOperand<CVarBitVecBase<short unsigned int, 32> >(
									const CBitVecT<CVarBitVecBase<short unsigned int, 32> >& operand);  // 2025
		CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 2028
		CVarBitVecBase<short unsigned int, 32>::Base(); // 2028
		CVarBitVecBase<short unsigned int, 32>::Base(); // 2028
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 2028
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Copy<CVarBitVecBase<short unsigned int, 32> >(
								const CBitVecT<CVarBitVecBase<short unsigned int, 32> >& other,
								int nBits);  // 264
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 265
		GetEndMask(int numBits); // 1024
		{
			const uint32* pCurElem; // 413
			const uint32* pLastElem; // 414
			{
				unsigned int elem; // 418
				GetStartBitMask(int startBit); // 418
				FirstBitInWordThatIsKnownToBeNonZero(uint elem,
									int offset);  // 426
				FirstBitInWord(unsigned int elem,
						int offset);  // 422
			}
			FirstBitInWordThatIsKnownToBeNonZero(uint elem,
								int offset);  // 468
			FirstBitInWordThatIsKnownToBeNonZero(uint elem,
								int offset);  // 106
			FirstBitInWord(unsigned int elem,
					int offset);  // 473
		}
		BitVec_FindNextSetBit<short unsigned int, false>(int startBit,
								short unsigned int numBits,
								short unsigned int numDWords,
								const uint32* pBase,
								uint32 nEndMask);  // 1024
		CVarBitVecBase<short unsigned int, 32>::FindNextSetBit(
				int iStartBit);  // 268
		{
			const uint32* pCurElem; // 413
			const uint32* pLastElem; // 414
			{
				unsigned int elem; // 418
				GetStartBitMask(int startBit); // 418
				FirstBitInWordThatIsKnownToBeNonZero(uint elem,
									int offset);  // 426
				FirstBitInWordThatIsKnownToBeNonZero(uint elem,
									int offset);  // 106
				FirstBitInWord(unsigned int elem,
						int offset);  // 422
			}
			FirstBitInWordThatIsKnownToBeNonZero(uint elem,
								int offset);  // 468
			FirstBitInWordThatIsKnownToBeNonZero(uint elem,
								int offset);  // 106
			FirstBitInWord(unsigned int elem,
					int offset);  // 473
		}
		BitVec_FindNextSetBit<short unsigned int, false>(int startBit,
								short unsigned int numBits,
								short unsigned int numDWords,
								const uint32* pBase,
								uint32 nEndMask);  // 1024
		CVarBitVecBase<short unsigned int, 32>::FindNextSetBit(
				int iStartBit);  // 268
		CVarBitVecBase<short unsigned int, 32>::FreeInts(); // 1342
		CVarBitVecBase<short unsigned int, 32>::~CVarBitVecBase(); // 914
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::~CBitVecT(); // 1207
		CVarBitVecT<short unsigned int, 32>::~CVarBitVecT(); // 1220
		CVarBitVec::~CVarBitVec(); // 272
	}
	CUtlString::IsEmpty(); // 249
	CConstraintSlave::IsValid(); // 278
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 251
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <0541D905> modellib/boneconstraints.cpp:283
// function calls: 10
void CConstraintSlave::AppendBoneIndices(CUtlVector<int, CUtlMemory<int, int> >* pnBoneIndices)
{
	CConstraintSlave::IsValid(); // 285
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
			const int& src);  // 288
} /* size: 0, inline expansions: 10 (0 bytes) */

// <054132A8> modellib/boneconstraints.cpp:283
void CConstraintSlave::AppendBoneIndices(CUtlVector<int, CUtlMemory<int, int> >* pnBoneIndices)
{
} /* size: 0 */

// <05413096> modellib/boneconstraints.cpp:293
// variable: 1
// function calls: 5
void CConstraintSlave::SetLocalSpaceTransformAndUpdateChildren(const CModel* pModel, CTransform* pWorldTransformsInOut, const CTransform& mNewLocalTransform)
{
	{
		CTransform mNewWorldTransform; // 300
		QuaternionAligned::operator fltx4(); // 471
		VectorAligned::operator fltx4(); // 471
		QuaternionAligned::operator fltx4(); // 471
		VectorAligned::operator fltx4(); // 471
		CTransform::operator*(
				const CTransform& rhs);  // 300
	}
} /* size: 164 */

// <054126FE> modellib/boneconstraints.cpp:311
// variables: 11
// function calls: 36
void CConstraintSlave::SetWorldSpaceTransformAndUpdateChildren(const CModel* pModel, CTransform* pWorldTransformsInOut, const CTransform& mNewWorldTransform)
{
	const char   __FUNCTION__; // 33368
	{
		CTransform mOldWorldTransform; // 320
		CTransform mDeltaTransform; // 322
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 318
		}
		{
			int nBoneChild; // 326
			{
				const uint32* pCurElem; // 413
				const uint32* pLastElem; // 414
				{
					unsigned int elem; // 418
					GetStartBitMask(int startBit); // 418
					FirstBitInWordThatIsKnownToBeNonZero(uint elem,
										int offset);  // 426
					FirstBitInWordThatIsKnownToBeNonZero(uint elem,
										int offset);  // 106
					FirstBitInWord(unsigned int elem,
							int offset);  // 422
				}
				FirstBitInWordThatIsKnownToBeNonZero(uint elem,
									int offset);  // 468
				FirstBitInWordThatIsKnownToBeNonZero(uint elem,
									int offset);  // 106
				FirstBitInWord(unsigned int elem,
						int offset);  // 473
			}
			BitVec_FindNextSetBit<short unsigned int, false>(int startBit,
									short unsigned int numBits,
									short unsigned int numDWords,
									const uint32* pBase,
									uint32 nEndMask);  // 1024
			GetEndMask(int numBits); // 1024
			CVarBitVecBase<short unsigned int, 32>::FindNextSetBit(
					int iStartBit);  // 326
			QuaternionAligned::operator fltx4(); // 471
			VectorAligned::operator fltx4(); // 471
			QuaternionAligned::operator fltx4(); // 471
			VectorAligned::operator fltx4(); // 471
			CTransform::operator*(
					const CTransform& rhs);  // 328
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 328
			{
				const uint32* pCurElem; // 413
				const uint32* pLastElem; // 414
				{
					unsigned int elem; // 418
					GetStartBitMask(int startBit); // 418
					FirstBitInWord(unsigned int elem,
							int offset);  // 422
					FirstBitInWordThatIsKnownToBeNonZero(uint elem,
										int offset);  // 426
				}
				FirstBitInWordThatIsKnownToBeNonZero(uint elem,
									int offset);  // 468
				FirstBitInWordThatIsKnownToBeNonZero(uint elem,
									int offset);  // 106
				FirstBitInWord(unsigned int elem,
						int offset);  // 473
			}
			BitVec_FindNextSetBit<short unsigned int, false>(int startBit,
									short unsigned int numBits,
									short unsigned int numDWords,
									const uint32* pBase,
									uint32 nEndMask);  // 1024
			GetEndMask(int numBits); // 1024
			CVarBitVecBase<short unsigned int, 32>::FindNextSetBit(
					int iStartBit);  // 326
		}
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 318
		QuaternionAligned::operator fltx4(); // 471
		VectorAligned::operator fltx4(); // 471
		QuaternionAligned::operator fltx4(); // 471
		VectorAligned::operator fltx4(); // 471
		CTransform::operator*(
				const CTransform& rhs);  // 322
	}
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 333
} /* size: 0, variables: 1, inline expansions: 3 (38 bytes) */

// <020D0874> modellib/boneconstraints.cpp:311
// variables: 11
// function calls: 36
void CConstraintSlave::SetWorldSpaceTransformAndUpdateChildren(const CModel* pModel, CTransform* pWorldTransformsInOut, const CTransform& mNewWorldTransform)
{
	const char   __FUNCTION__; // 12995
	{
		CTransform mOldWorldTransform; // 320
		CTransform mDeltaTransform; // 322
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 318
		}
		{
			int nBoneChild; // 326
			{
				const uint32* pCurElem; // 413
				const uint32* pLastElem; // 414
				{
					unsigned int elem; // 418
					GetStartBitMask(int startBit); // 418
					FirstBitInWordThatIsKnownToBeNonZero(uint elem,
										int offset);  // 426
					FirstBitInWordThatIsKnownToBeNonZero(uint elem,
										int offset);  // 106
					FirstBitInWord(unsigned int elem,
							int offset);  // 422
				}
				FirstBitInWordThatIsKnownToBeNonZero(uint elem,
									int offset);  // 468
				FirstBitInWordThatIsKnownToBeNonZero(uint elem,
									int offset);  // 106
				FirstBitInWord(unsigned int elem,
						int offset);  // 473
			}
			BitVec_FindNextSetBit<short unsigned int, false>(int startBit,
									short unsigned int numBits,
									short unsigned int numDWords,
									const uint32* pBase,
									uint32 nEndMask);  // 1024
			GetEndMask(int numBits); // 1024
			CVarBitVecBase<short unsigned int, 32>::FindNextSetBit(
					int iStartBit);  // 326
			QuaternionAligned::operator fltx4(); // 471
			VectorAligned::operator fltx4(); // 471
			QuaternionAligned::operator fltx4(); // 471
			VectorAligned::operator fltx4(); // 471
			CTransform::operator*(
					const CTransform& rhs);  // 328
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 328
			{
				const uint32* pCurElem; // 413
				const uint32* pLastElem; // 414
				{
					unsigned int elem; // 418
					GetStartBitMask(int startBit); // 418
					FirstBitInWord(unsigned int elem,
							int offset);  // 422
					FirstBitInWordThatIsKnownToBeNonZero(uint elem,
										int offset);  // 426
				}
				FirstBitInWordThatIsKnownToBeNonZero(uint elem,
									int offset);  // 468
				FirstBitInWordThatIsKnownToBeNonZero(uint elem,
									int offset);  // 106
				FirstBitInWord(unsigned int elem,
						int offset);  // 473
			}
			BitVec_FindNextSetBit<short unsigned int, false>(int startBit,
									short unsigned int numBits,
									short unsigned int numDWords,
									const uint32* pBase,
									uint32 nEndMask);  // 1024
			GetEndMask(int numBits); // 1024
			CVarBitVecBase<short unsigned int, 32>::FindNextSetBit(
					int iStartBit);  // 326
		}
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 318
		QuaternionAligned::operator fltx4(); // 471
		VectorAligned::operator fltx4(); // 471
		QuaternionAligned::operator fltx4(); // 471
		VectorAligned::operator fltx4(); // 471
		CTransform::operator*(
				const CTransform& rhs);  // 322
	}
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 333
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <05412682> modellib/boneconstraints.cpp:338
// function call: 1
void CBoneConstraintBase::GetConstraintTypeName()
{
	GetConstraintTypeName(BoneConstraintType_t eConstraintType); // 340
} /* size: 44, inline expansions: 1 (25 bytes) */

// <0541BB20> modellib/boneconstraints.cpp:345
void GetConstraintTypeName(BoneConstraintType_t eConstraintType)
{
} /* size: 0 */

// <05412643> modellib/boneconstraints.cpp:345
// variable: 1
void GetConstraintTypeName(BoneConstraintType_t eConstraintType)
{
	const char* s_szConstraintTypeName; // 347
} /* size: 0, variables: 1 */

// <054120FA> modellib/boneconstraints.cpp:375
// variables: 4
// function calls: 15
void CBoneConstraintBase::GetInputAndOutputBones(const CModel* pModel, CUtlVector<int, CUtlMemory<int, int> >* pnInputBones, CUtlVector<int, CUtlMemory<int, int> >* pnOutputBones)
{
	const int  nInputCount; // 383
	const int  nOutputCount; // 389
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 377
		_DebuggerBreakInlineExpressionWrapper(void); // 377
	}
	{
		int nInput; // 384
	}
	{
		int nOutput; // 390
		CConstraintSlave::IsValid(); // 285
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
				const int& src);  // 288
		CConstraintSlave::AppendBoneIndices(
					CUtlVector<int, CUtlMemory<int, int> >* pnBoneIndices);  // 392
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 380
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 381
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <05411ED0> modellib/boneconstraints.cpp:398
// variables: 3
// function calls: 6
void CBoneConstraintBase::AreBonesAvailable(const uint32* pBoneBitVec)
{
	bool bAreBonesAvailable; // 400
	{
		const int  nNumDWords; // 406
		uint32* pBitVecDest; // 407
		CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 406
		CVarBitVecBase<short unsigned int, 32>::Base(); // 408
		BitVec_And<false>(uint32* pDest,
					const uint32* pOperand1,
					const uint32* pOperand2,
					int numDWords);  // 408
		CVarBitVecBase<short unsigned int, 32>::Base(); // 409
		V_memcmp(const void* m1,
			const void* m2,
			size_t count);  // 409
	}
	CBoneConstraintBase::IsValid(); // 402
} /* size: 395, variables: 1, inline expansions: 1 (4 bytes) */

// <054119DB> modellib/boneconstraints.cpp:422
// function calls: 20
void CBaseConstraint::CBaseConstraint()
{
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
	CVarBitVec::CVarBitVec(); // 131
	CBoneConstraintBase::CBoneConstraintBase(); // 423
	CUtlString::CUtlString(); // 423
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 423
	CUtlMemory<CConstraintSlave, int>::ValidateGrowSize(); // 475
	CUtlMemory<CConstraintSlave, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::CUtlVector(); // 423
	CUtlMemory<CConstraintTarget, int>::ValidateGrowSize(); // 475
	CUtlMemory<CConstraintTarget, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::CUtlVector(); // 423
} /* size: 136, inline expansions: 20 (357 bytes) */

// <054119C2> modellib/boneconstraints.cpp:422
void CBaseConstraint::CBaseConstraint()
{
} /* size: 0 */

// <0541D3B3> modellib/boneconstraints.cpp:429
// function call: 1
void CBaseConstraint::Finalize(const CModel* pModel)
{
	CBoneConstraintBase::IsValid(); // 432
} /* size: 21, inline expansions: 1 (4 bytes) */

// <0541CFA2> modellib/boneconstraints.cpp:429
// variables: 8
// function calls: 15
void CBaseConstraint::Finalize(const CModel* pModel)
{
	CBoneConstraintBase::IsValid(); // 434
	{
	}
	{
		CConstraintSlave& outputBone; // 440
		CUtlVector<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >& __for_range; // 45445
		iterator __for_begin; // 45455
		iterator __for_end; // 45465
		CUtlMemory<CConstraintSlave, int>::Base(); // 112
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Base(); // 102
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::begin(); // 440
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 104
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::end(); // 440
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
		{
		}
		CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
		Bitvec_Set(uint32* pBits,
				int nBitNum);  // 1480
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
			int bitNum);  // 445
	}
	{
		CConstraintTarget& target; // 448
		CUtlVector<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >& __for_range; // 45490
		iterator __for_begin; // 45500
		iterator __for_end; // 45510
		CUtlMemory<CConstraintTarget, int>::Base(); // 112
		CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Base(); // 102
		CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::begin(); // 448
		CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Count(); // 104
		CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::end(); // 448
	}
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0541190A> modellib/boneconstraints.cpp:429
// variables: 10
void CBaseConstraint::Finalize(const CModel* pModel)
{
	const char   __FUNCTION__; // 32631
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 434
	}
	{
		CConstraintSlave& outputBone; // 440
		CUtlVector<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >& __for_range; // 45522
		iterator __for_begin; // 35084
		iterator __for_end; // 35084
	}
	{
		CConstraintTarget& target; // 448
		CUtlVector<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >& __for_range; // 45528
		iterator __for_begin; // 41082
		iterator __for_end; // 41082
	}
} /* size: 0, variables: 1 */

// <020DB118> modellib/boneconstraints.cpp:429
// variables: 8
// function calls: 15
void CBaseConstraint::Finalize(const CModel* pModel)
{
	CBoneConstraintBase::IsValid(); // 434
	{
	}
	{
		CConstraintSlave& outputBone; // 440
		CUtlVector<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >& __for_range; // 25072
		iterator __for_begin; // 25082
		iterator __for_end; // 25092
		CUtlMemory<CConstraintSlave, int>::Base(); // 112
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Base(); // 102
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::begin(); // 440
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 104
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::end(); // 440
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
		{
		}
		CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
		Bitvec_Set(uint32* pBits,
				int nBitNum);  // 1480
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
			int bitNum);  // 445
	}
	{
		CConstraintTarget& target; // 448
		CUtlVector<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >& __for_range; // 25117
		iterator __for_begin; // 25127
		iterator __for_end; // 25137
		CUtlMemory<CConstraintTarget, int>::Base(); // 112
		CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Base(); // 102
		CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::begin(); // 448
		CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Count(); // 104
		CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::end(); // 448
	}
} /* size: 0, inline expansions: 1 (0 bytes) */

// <020CFA80> modellib/boneconstraints.cpp:429
// variables: 10
void CBaseConstraint::Finalize(const CModel* pModel)
{
	const char   __FUNCTION__; // 12258
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 434
	}
	{
		CConstraintSlave& outputBone; // 440
		CUtlVector<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >& __for_range; // 25149
		iterator __for_begin; // 14711
		iterator __for_end; // 14711
	}
	{
		CConstraintTarget& target; // 448
		CUtlVector<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >& __for_range; // 25155
		iterator __for_begin; // 20709
		iterator __for_end; // 20709
	}
} /* size: 0, variables: 1 */

// <0133FBE3> modellib/boneconstraints.cpp:429
// variables: 8
// function calls: 15
void CBaseConstraint::Finalize(const CModel* pModel)
{
	CBoneConstraintBase::IsValid(); // 434
	{
	}
	{
		CConstraintSlave& outputBone; // 440
		CUtlVector<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >& __for_range; // 59947
		iterator __for_begin; // 59957
		iterator __for_end; // 59967
		CUtlMemory<CConstraintSlave, int>::Base(); // 112
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Base(); // 102
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::begin(); // 440
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 104
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::end(); // 440
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
		{
		}
		CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
		Bitvec_Set(uint32* pBits,
				int nBitNum);  // 1480
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
			int bitNum);  // 445
	}
	{
		CConstraintTarget& target; // 448
		CUtlVector<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >& __for_range; // 59992
		iterator __for_begin; // 60002
		iterator __for_end; // 60012
		CUtlMemory<CConstraintTarget, int>::Base(); // 112
		CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Base(); // 102
		CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::begin(); // 448
		CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Count(); // 104
		CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::end(); // 448
	}
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0133454B> modellib/boneconstraints.cpp:429
// variables: 10
void CBaseConstraint::Finalize(const CModel* pModel)
{
	const char   __FUNCTION__; // 47133
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 434
	}
	{
		CConstraintSlave& outputBone; // 440
		CUtlVector<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >& __for_range; // 60024
		iterator __for_begin; // 49586
		iterator __for_end; // 49586
	}
	{
		CConstraintTarget& target; // 448
		CUtlVector<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >& __for_range; // 60030
		iterator __for_begin; // 55584
		iterator __for_end; // 55584
	}
} /* size: 0, variables: 1 */

// <0541BB49> modellib/boneconstraints.cpp:461
void CBaseConstraint::Init(const char* pName)
{
} /* size: 13 */

// <0541BBA4> modellib/boneconstraints.cpp:468
// function call: 1
void CBaseConstraint::Init(const char* pName, const Vector& vUpVector)
{
	Vector::operator=(
			const Vector& vOther);  // 471
} /* size: 66, inline expansions: 1 (35 bytes) */

// <054118B1> modellib/boneconstraints.cpp:468
void CBaseConstraint::Init(const char* pName, const Vector& vUpVector)
{
} /* size: 0 */

// <05411497> modellib/boneconstraints.cpp:476
// variable: 1
// function calls: 21
void CBaseConstraint::AddSlave(uint32 nBoneHash, float flWeight, const Vector& vBasePosition, const Quaternion& qBaseOrientation)
{
	CConstraintSlave& slave; // 478
	CUtlMemory<CConstraintSlave, int>::NumAllocated(); // 1143
	CUtlMemory<CConstraintSlave, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Element(
		int i);  // 1148
	CUtlString::CUtlString(); // 83
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
	CVarBitVec::CVarBitVec(); // 83
	CConstraintSlave::CConstraintSlave(); // 1479
	Construct<CConstraintSlave>(CConstraintSlave* pMemory); // 1148
	CUtlMemory<CConstraintSlave, int>::Base(); // 112
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Base(); // 368
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::AddToTail(); // 478
	CUtlMemory<CConstraintSlave, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::operator[](
			int i);  // 478
	Vector::operator=(
			const Vector& vOther);  // 481
} /* size: 0, variables: 1, inline expansions: 21 (0 bytes) */

// <05411155> modellib/boneconstraints.cpp:487
// variable: 1
// function calls: 14
void CBaseConstraint::AddTarget(uint32 nBoneHash, float flWeight, const Vector& vOffset, const Quaternion& qOffset, bool bIsAttachment)
{
	CConstraintTarget& target; // 489
	CUtlMemory<CConstraintTarget, int>::NumAllocated(); // 1143
	CUtlMemory<CConstraintTarget, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Element(
		int i);  // 1148
	CUtlString::CUtlString(); // 42
	CConstraintTarget::CConstraintTarget(); // 1479
	Construct<CConstraintTarget>(CConstraintTarget* pMemory); // 1148
	CUtlMemory<CConstraintTarget, int>::Base(); // 112
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Base(); // 368
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::AddToTail(); // 489
	CUtlMemory<CConstraintTarget, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::operator[](
			int i);  // 489
	Vector::operator=(
			const Vector& vOther);  // 492
} /* size: 0, variables: 1, inline expansions: 14 (0 bytes) */

// <05410F7E> modellib/boneconstraints.cpp:499
// variables: 2
// function calls: 6
void CBaseConstraint::UsesBone(uint32 nBoneHash)
{
	{
		int i; // 501
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 501
		CUtlMemory<CConstraintSlave, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::operator[](
				int i);  // 503
	}
	{
		int i; // 507
		CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Count(); // 507
		CUtlMemory<CConstraintTarget, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::operator[](
				int i);  // 509
	}
} /* size: 102 */

// <05410879> modellib/boneconstraints.cpp:521
// variables: 12
// function calls: 28
void CBaseConstraint::ComputeTargetTransform(CTransform* ptTarget, const CModel* pModel, const CTransform* pWorldSpaceTransformsIn)
{
	float flWeightSum; // 534
	CTransform mTarget; // 536
	const int  nTargetCount; // 538
	float* pflTargetWeights; // 540
	QuaternionAligned* pqQuaternions; // 541
	{
		int i; // 543
		{
			const float  flTargetWeight; // 545
			CUtlMemory<CConstraintTarget, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::operator[](
					int i);  // 545
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 549
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 268
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 268
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 268
			VectorAligned::operator*(
					vec_t s);  // 427
			operator*(float fl,
					const VectorAligned& v);  // 551
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 208
			VectorAligned::operator+=(
					const VectorAligned& v);  // 551
		}
	}
	CBoneConstraintBase::IsValid(); // 526
	VectorAligned::InitZero(); // 532
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Count(); // 538
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 536
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 229
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 229
	VectorAligned::operator*=(
			vec_t s);  // 558
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 561
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 528
} /* size: 579, variables: 5, inline expansions: 13 (96 bytes) */

// <0541BC4C> modellib/boneconstraints.cpp:568
// variables: 4
// function calls: 7
void CBaseConstraint::ComputeTargetPosition(Vector* pvTargetPosition, const CModel* pModel, const CTransform* pWorldSpaceTransformsIn, bool bExcludeLastTarget)
{
	const int  nTargetCount; // 577
	float flWeightTotal; // 579
	Vector& vTargetPosition; // 580
	CBoneConstraintBase::IsValid(); // 570
	Vector::operator=(
			const Vector& vOther);  // 581
	{
		int nTarget; // 583
		CUtlMemory<CConstraintTarget, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::operator[](
				int i);  // 585
	}
	Vector::operator*=(
			float fl);  // 590
	CBaseConstraint::ComputeTargetPosition(
				Vector* pvTargetPosition,
				const CModel* pModel,
				const CTransform* pWorldSpaceTransformsIn,
				bool bExcludeLastTarget);  // 568
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 572
} /* size: 278, variables: 3, inline expansions: 5 (262 bytes) */

// <054107F6> modellib/boneconstraints.cpp:568
// variables: 4
void CBaseConstraint::ComputeTargetPosition(Vector* pvTargetPosition, const CModel* pModel, const CTransform* pWorldSpaceTransformsIn, bool bExcludeLastTarget)
{
	const int  nTargetCount; // 577
	float flWeightTotal; // 579
	Vector& vTargetPosition; // 580
	{
		int nTarget; // 583
	}
} /* size: 0, variables: 3 */

// <05410310> modellib/boneconstraints.cpp:598
// variables: 7
// function calls: 16
void CBaseConstraint::ComputeTargetOrientation(Quaternion* pqTarget, const CModel* pModel, const CTransform* pWorldSpaceTransformsIn)
{
	float flWeightSum; // 609
	CTransform mTarget; // 611
	const int  nTargetCount; // 613
	float* pflTargetWeights; // 615
	QuaternionAligned* pqQuaternions; // 616
	{
		int i; // 618
		{
			const float  flTargetWeight; // 620
			CUtlMemory<CConstraintTarget, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::operator[](
					int i);  // 620
			QuaternionAligned::w(); // 41
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 41
			QuaternionAligned::operator Quaternion(); // 350
			CTransform::ToQuaternion(); // 622
			QuaternionAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 217
			QuaternionAligned::operator=(
					const Quaternion& vOther);  // 622
		}
	}
	CBoneConstraintBase::IsValid(); // 603
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Count(); // 613
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 611
	QuaternionAligned::w(); // 41
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 629
} /* size: 509, variables: 5, inline expansions: 8 (10 bytes) */

// <0540F354> modellib/boneconstraints.cpp:636
// variables: 19
// function calls: 62
void CPointConstraint::Compute(const CModel* pModel, CTransform* pWorldTransformsInOut, float* pFlexControlsInOut, const uint32* pBoneBitVec)
{
	BoneConstraintResult_t eResult; // 641
	Vector vTargetWorldPos; // 643
	const float  flTargetWeight; // 644
	CTransform mOutputWorld; // 646
	{
		const CConstraintSlave& output; // 648
		const CUtlVector<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >& __for_range; // 38662
		const_iterator __for_begin; // 35129
		const_iterator __for_end; // 35129
		{
			const float  flWeight; // 650
			{
				const Vector  vOutputBaseWorldPos; // 663
				const Vector  vFinalWorldPos; // 664
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 71
				CTransform::GetOrigin(); // 663
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
				VectorAligned::operator Vector(); // 663
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
						const Vector& B);  // 664
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
						const Vector& rhs);  // 666
				{
					fltx4 zzww; // 1414
					{
						fltx4 retVal; // 1276
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 1277
					}
					ShuffleSIMD<250>(const fltx4& a,
							const fltx4& b);  // 665
					ShuffleSIMD<250>(const fltx4& a,
							const fltx4& b);  // 1414
					{
						fltx4 retVal; // 1276
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 1277
					}
					ShuffleSIMD<148>(const fltx4& a,
							const fltx4& b);  // 665
					ShuffleSIMD<148>(const fltx4& a,
							const fltx4& b);  // 1415
				}
				SetWSIMD<>(const fltx4& a,
						const fltx4& w);  // 68
				VectorAligned::operator=(
						fltx4 src);  // 68
				CTransform::SetOrigin(
						const VectorAligned& vPos);  // 666
			}
			FloatsAreEqual(float f1,
					float f2,
					float flTolerance);  // 652
			FloatsAreEqual(float f1,
					float f2,
					float flTolerance);  // 657
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
					const Vector& rhs);  // 659
			{
				fltx4 zzww; // 1414
				{
					fltx4 retVal; // 1276
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1277
				}
				ShuffleSIMD<250>(const fltx4& a,
						const fltx4& b);  // 665
				ShuffleSIMD<250>(const fltx4& a,
						const fltx4& b);  // 1414
				{
					fltx4 retVal; // 1276
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1277
				}
				ShuffleSIMD<148>(const fltx4& a,
						const fltx4& b);  // 665
				ShuffleSIMD<148>(const fltx4& a,
						const fltx4& b);  // 1415
			}
			SetWSIMD<>(const fltx4& a,
					const fltx4& w);  // 68
			VectorAligned::operator=(
					fltx4 src);  // 68
			CTransform::SetOrigin(
					const VectorAligned& vPos);  // 659
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					const CTransform  &);  // 655
		}
		CUtlMemory<CConstraintSlave, int>::Base(); // 113
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Base(); // 103
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::begin(); // 648
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 105
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::end(); // 648
	}
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 646
} /* size: 1123, variables: 4, inline expansions: 3 (0 bytes) */

// <020CD4CA> modellib/boneconstraints.cpp:636
// variables: 19
// function calls: 62
void CPointConstraint::Compute(const CModel* pModel, CTransform* pWorldTransformsInOut, float* pFlexControlsInOut, const uint32* pBoneBitVec)
{
	BoneConstraintResult_t eResult; // 641
	Vector vTargetWorldPos; // 643
	const float  flTargetWeight; // 644
	CTransform mOutputWorld; // 646
	{
		const CConstraintSlave& output; // 648
		const CUtlVector<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >& __for_range; // 18289
		const_iterator __for_begin; // 14756
		const_iterator __for_end; // 14756
		{
			const float  flWeight; // 650
			{
				const Vector  vOutputBaseWorldPos; // 663
				const Vector  vFinalWorldPos; // 664
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 71
				CTransform::GetOrigin(); // 663
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
				VectorAligned::operator Vector(); // 663
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
						const Vector& B);  // 664
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
						const Vector& rhs);  // 666
				{
					fltx4 zzww; // 1414
					{
						fltx4 retVal; // 1276
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 1277
					}
					ShuffleSIMD<250>(const fltx4& a,
							const fltx4& b);  // 665
					ShuffleSIMD<250>(const fltx4& a,
							const fltx4& b);  // 1414
					{
						fltx4 retVal; // 1276
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 1277
					}
					ShuffleSIMD<148>(const fltx4& a,
							const fltx4& b);  // 665
					ShuffleSIMD<148>(const fltx4& a,
							const fltx4& b);  // 1415
				}
				SetWSIMD<>(const fltx4& a,
						const fltx4& w);  // 68
				VectorAligned::operator=(
						fltx4 src);  // 68
				CTransform::SetOrigin(
						const VectorAligned& vPos);  // 666
			}
			FloatsAreEqual(float f1,
					float f2,
					float flTolerance);  // 652
			FloatsAreEqual(float f1,
					float f2,
					float flTolerance);  // 657
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
					const Vector& rhs);  // 659
			{
				fltx4 zzww; // 1414
				{
					fltx4 retVal; // 1276
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1277
				}
				ShuffleSIMD<250>(const fltx4& a,
						const fltx4& b);  // 665
				ShuffleSIMD<250>(const fltx4& a,
						const fltx4& b);  // 1414
				{
					fltx4 retVal; // 1276
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1277
				}
				ShuffleSIMD<148>(const fltx4& a,
						const fltx4& b);  // 665
				ShuffleSIMD<148>(const fltx4& a,
						const fltx4& b);  // 1415
			}
			SetWSIMD<>(const fltx4& a,
					const fltx4& w);  // 68
			VectorAligned::operator=(
					fltx4 src);  // 68
			CTransform::SetOrigin(
					const VectorAligned& vPos);  // 659
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					const CTransform  &);  // 655
		}
		CUtlMemory<CConstraintSlave, int>::Base(); // 113
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Base(); // 103
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::begin(); // 648
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 105
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::end(); // 648
	}
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 646
} /* size: 0, variables: 4, inline expansions: 3 (0 bytes) */

// <0540EB7B> modellib/boneconstraints.cpp:679
// variables: 11
// function calls: 22
void COrientConstraint::Compute(const CModel* pModel, CTransform* pWorldTransformsInOut, float* pFlexControlsInOut, const uint32* pBoneBitVec)
{
	BoneConstraintResult_t eResult; // 684
	Quaternion qTargetWorldOrientation; // 686
	const float  flTargetWeight; // 687
	CTransform mOutputWorld; // 689
	{
		const CConstraintSlave& output; // 691
		const CUtlVector<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >& __for_range; // 38662
		const_iterator __for_begin; // 35129
		const_iterator __for_end; // 35129
		{
			const float  flWeight; // 693
			{
				Quaternion qOutputBaseWorldOrientation; // 706
				Quaternion qFinalWorldOrientation; // 708
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 41
				QuaternionAligned::operator Quaternion(); // 350
				CTransform::ToQuaternion(); // 706
				Quaternion::Quaternion(); // 708
				QuaternionAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z,
					vec_t W);  // 217
				QuaternionAligned::operator=(
						const Quaternion& vOther);  // 711
			}
			FloatsAreEqual(float f1,
					float f2,
					float flTolerance);  // 695
			FloatsAreEqual(float f1,
					float f2,
					float flTolerance);  // 700
			QuaternionAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 217
			QuaternionAligned::operator=(
					const Quaternion& vOther);  // 702
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					const CTransform  &);  // 698
		}
		CUtlMemory<CConstraintSlave, int>::Base(); // 113
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Base(); // 103
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::begin(); // 691
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 105
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::end(); // 691
	}
	Quaternion::Quaternion(); // 686
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 689
} /* size: 963, variables: 4, inline expansions: 4 (0 bytes) */

// <020CCCF1> modellib/boneconstraints.cpp:679
// variables: 11
// function calls: 22
void COrientConstraint::Compute(const CModel* pModel, CTransform* pWorldTransformsInOut, float* pFlexControlsInOut, const uint32* pBoneBitVec)
{
	BoneConstraintResult_t eResult; // 684
	Quaternion qTargetWorldOrientation; // 686
	const float  flTargetWeight; // 687
	CTransform mOutputWorld; // 689
	{
		const CConstraintSlave& output; // 691
		const CUtlVector<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >& __for_range; // 18289
		const_iterator __for_begin; // 14756
		const_iterator __for_end; // 14756
		{
			const float  flWeight; // 693
			{
				Quaternion qOutputBaseWorldOrientation; // 706
				Quaternion qFinalWorldOrientation; // 708
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 41
				QuaternionAligned::operator Quaternion(); // 350
				CTransform::ToQuaternion(); // 706
				Quaternion::Quaternion(); // 708
				QuaternionAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z,
					vec_t W);  // 217
				QuaternionAligned::operator=(
						const Quaternion& vOther);  // 711
			}
			FloatsAreEqual(float f1,
					float f2,
					float flTolerance);  // 695
			FloatsAreEqual(float f1,
					float f2,
					float flTolerance);  // 700
			QuaternionAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 217
			QuaternionAligned::operator=(
					const Quaternion& vOther);  // 702
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					const CTransform  &);  // 698
		}
		CUtlMemory<CConstraintSlave, int>::Base(); // 113
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Base(); // 103
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::begin(); // 691
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 105
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::end(); // 691
	}
	Quaternion::Quaternion(); // 686
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 689
} /* size: 0, variables: 4, inline expansions: 4 (0 bytes) */

// <0540EA4B> modellib/boneconstraints.cpp:724
// function calls: 2
void CAimConstraint::Init(const char* pName, const Quaternion& qAimOffset, const Vector& vUpVector, uint nUpType)
{
	Vector::operator=(
			const Vector& vOther);  // 471
	CBaseConstraint::Init(
		const char* pName,
		const Vector& vUpVector);  // 726
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0540D229> modellib/boneconstraints.cpp:733
// variables: 51
// function calls: 88
void CAimConstraint::Compute(const CModel* pModel, CTransform* pWorldTransformsInOut, float* pFlexControlsInOut, const uint32* pBoneBitVec)
{
	BoneConstraintResult_t eResult; // 738
	CTransform mUpToWorld; // 740
	const CTransform* pmUpToWorld; // 741
	bool bExcludeLastTarget; // 742
	Vector vTargetWorldPos; // 769
	const float  flTargetWeight; // 770
	{
		int nTargetCount; // 745
		{
			const CConstraintTarget& upTarget; // 754
			CUtlMemory<CConstraintTarget, int>::operator[](
					int i);  // 637
			CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Tail(); // 754
		}
		CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Count(); // 745
	}
	{
		const CConstraintSlave& output; // 772
		const CUtlVector<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >& __for_range; // 38662
		const_iterator __for_begin; // 35129
		const_iterator __for_end; // 35129
		{
			const float  flWeight; // 774
			const CTransform* pmOutputParentToWorld; // 779
			Vector vOutputLocalPos; // 781
			const int  nParentBone; // 783
			Quaternion qTargetOrientation; // 799
			Quaternion qOffsetOrientation; // 804
			Quaternion qParentToWorld; // 808
			Quaternion qSlaveWorldSpace; // 809
			CTransform mOutputWorld; // 812
			{
				CTransform mOutputWorldToParent; // 788
				const Vector  vOutputWorldPos; // 790
				VectorAligned::operator fltx4(); // 71
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 71
				CTransform::GetOrigin(); // 790
				{
					fltx4 x000; // 1010
					fltx4 y000; // 1011
					fltx4 z000; // 1012
					fltx4 x0y0; // 1013
					_mm_movelh_ps(__m128 __A,
							__m128 __B);  // 1013
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1014
				}
				LoadUnaligned3SIMD<>(const void* pSIMD); // 419
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
						const VectorAligned& v);  // 419
				VectorAligned::operator fltx4(); // 417
				{
					fltx4 retVal; // 1352
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1353
				}
				SplatWSIMD<>(const fltx4& a); // 417
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 419
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 420
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 421
				Vector::Vector(); // 422
				_mm_store_ss(float* __P,
						__m128 __A);  // 468
				StoreUnaligned3SIMD<>(float* pSIMD,
							const fltx4& a);  // 423
				CTransform::TransformVector(
						const Vector& v0);  // 791
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 790
				Vector::operator=(
						const Vector& vOther);  // 791
			}
			{
				Quaternion qBaseSlaveWorldSpace; // 821
				Quaternion qFinalOrientation; // 823
				QuaternionAligned::w(); // 41
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 41
				QuaternionAligned::operator Quaternion(); // 350
				CTransform::ToQuaternion(); // 821
				Quaternion::Quaternion(); // 823
				QuaternionAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z,
					vec_t W);  // 217
				QuaternionAligned::operator=(
						const Quaternion& vOther);  // 826
			}
			FloatsAreEqual(float f1,
					float f2,
					float flTolerance);  // 815
			QuaternionAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 217
			QuaternionAligned::operator=(
					const Quaternion& vOther);  // 817
			FloatsAreEqual(float f1,
					float f2,
					float flTolerance);  // 776
			Vector::Vector(); // 781
			VectorAligned::operator fltx4(); // 71
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 796
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 796
			Vector::operator=(
					const Vector& vOther);  // 796
			Quaternion::Quaternion(); // 799
			Quaternion::Quaternion(); // 804
			QuaternionAligned::w(); // 41
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 41
			QuaternionAligned::operator Quaternion(); // 350
			CTransform::ToQuaternion(); // 808
			Quaternion::Quaternion(); // 809
		}
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 105
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::end(); // 772
		CUtlMemory<CConstraintSlave, int>::Base(); // 113
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Base(); // 103
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::begin(); // 772
	}
} /* size: 1619, variables: 6 */

// <020CB39F> modellib/boneconstraints.cpp:733
// variables: 51
// function calls: 88
void CAimConstraint::Compute(const CModel* pModel, CTransform* pWorldTransformsInOut, float* pFlexControlsInOut, const uint32* pBoneBitVec)
{
	BoneConstraintResult_t eResult; // 738
	CTransform mUpToWorld; // 740
	const CTransform* pmUpToWorld; // 741
	bool bExcludeLastTarget; // 742
	Vector vTargetWorldPos; // 769
	const float  flTargetWeight; // 770
	{
		int nTargetCount; // 745
		{
			const CConstraintTarget& upTarget; // 754
			CUtlMemory<CConstraintTarget, int>::operator[](
					int i);  // 637
			CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Tail(); // 754
		}
		CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Count(); // 745
	}
	{
		const CConstraintSlave& output; // 772
		const CUtlVector<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >& __for_range; // 18289
		const_iterator __for_begin; // 14756
		const_iterator __for_end; // 14756
		{
			const float  flWeight; // 774
			const CTransform* pmOutputParentToWorld; // 779
			Vector vOutputLocalPos; // 781
			const int  nParentBone; // 783
			Quaternion qTargetOrientation; // 799
			Quaternion qOffsetOrientation; // 804
			Quaternion qParentToWorld; // 808
			Quaternion qSlaveWorldSpace; // 809
			CTransform mOutputWorld; // 812
			{
				CTransform mOutputWorldToParent; // 788
				const Vector  vOutputWorldPos; // 790
				VectorAligned::operator fltx4(); // 71
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 71
				CTransform::GetOrigin(); // 790
				{
					fltx4 x000; // 1010
					fltx4 y000; // 1011
					fltx4 z000; // 1012
					fltx4 x0y0; // 1013
					_mm_movelh_ps(__m128 __A,
							__m128 __B);  // 1013
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1014
				}
				LoadUnaligned3SIMD<>(const void* pSIMD); // 419
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
						const VectorAligned& v);  // 419
				VectorAligned::operator fltx4(); // 417
				{
					fltx4 retVal; // 1352
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1353
				}
				SplatWSIMD<>(const fltx4& a); // 417
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 419
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 420
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 421
				Vector::Vector(); // 422
				_mm_store_ss(float* __P,
						__m128 __A);  // 468
				StoreUnaligned3SIMD<>(float* pSIMD,
							const fltx4& a);  // 423
				CTransform::TransformVector(
						const Vector& v0);  // 791
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 790
				Vector::operator=(
						const Vector& vOther);  // 791
			}
			{
				Quaternion qBaseSlaveWorldSpace; // 821
				Quaternion qFinalOrientation; // 823
				QuaternionAligned::w(); // 41
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 41
				QuaternionAligned::operator Quaternion(); // 350
				CTransform::ToQuaternion(); // 821
				Quaternion::Quaternion(); // 823
				QuaternionAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z,
					vec_t W);  // 217
				QuaternionAligned::operator=(
						const Quaternion& vOther);  // 826
			}
			FloatsAreEqual(float f1,
					float f2,
					float flTolerance);  // 815
			QuaternionAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 217
			QuaternionAligned::operator=(
					const Quaternion& vOther);  // 817
			FloatsAreEqual(float f1,
					float f2,
					float flTolerance);  // 776
			Vector::Vector(); // 781
			VectorAligned::operator fltx4(); // 71
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 796
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 796
			Vector::operator=(
					const Vector& vOther);  // 796
			Quaternion::Quaternion(); // 799
			Quaternion::Quaternion(); // 804
			QuaternionAligned::w(); // 41
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 41
			QuaternionAligned::operator Quaternion(); // 350
			CTransform::ToQuaternion(); // 808
			Quaternion::Quaternion(); // 809
		}
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 105
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::end(); // 772
		CUtlMemory<CConstraintSlave, int>::Base(); // 113
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Base(); // 103
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::begin(); // 772
	}
} /* size: 0, variables: 6 */

// <0540D0EF> modellib/boneconstraints.cpp:839
// function calls: 2
void CTwistConstraint::Init(const char* pName, bool bInverse, const Vector& vUp, const Quaternion& qParentBindRotation, const Quaternion& qChildBindRotation)
{
	Vector::operator=(
			const Vector& vOther);  // 471
	CBaseConstraint::Init(
		const char* pName,
		const Vector& vUpVector);  // 841
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0540CF90> modellib/boneconstraints.cpp:878
// variables: 15
void ComputeTwistBones(Quaternion* pqTwists, int nCount, bool bInverse, const Vector& vUp, const Quaternion& qParent, const CTransform& mChild, const Quaternion& qBaseInv, const float* pflWeights, const Quaternion* pqTwistBinds)
{
	const float  flEps; // 889
	const float  flEpsSq; // 890
	Vector vUpRotate; // 892
	Vector vLocalTranslation; // 893
	Vector vRotatedTranslation; // 894
	Quaternion qTmp0; // 895
	Quaternion qTmp1; // 896
	Vector vTmp0; // 947
	Vector vUpProject; // 950
	Vector vUpRotateProject; // 956
	const float  flDot; // 961
	{
		Quaternion qChild; // 899
	}
	{
		const float  flAngle; // 972
		{
			int i; // 978
		}
		{
			int i; // 986
		}
	}
} /* size: 0, variables: 11 */

// <0540B122> modellib/boneconstraints.cpp:997
// variables: 31
// function calls: 102
void CTwistConstraint::Compute(const CModel* pModel, CTransform* pWorldTransformsInOut, float* pFlexControlsInOut, const uint32* pBoneBitVec)
{
	const char   __FUNCTION__; // 32604
	{
		int nParentBoneIndex; // 1004
		CTransform mParentWorldInverse; // 1005
		Quaternion qParentLocal; // 1007
		CTransform mBoneLocal; // 1008
		const int  nTargetCount; // 1010
		Quaternion qBindInv; // 1043
		const int  nOutputCount; // 1054
		Quaternion* pValveTwists; // 1055
		float* pflOutputWeights; // 1056
		Quaternion* pqOutputBaseOrientations; // 1057
		{
			const int  nBoneIndex; // 1014
			const CTransform& mBoneWorld; // 1019
			const CTransform& mParentWorld; // 1020
			const int  nGrandParentBoneIndex; // 1024
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1017
			}
			{
				const CTransform& mGrandParentWorld; // 1027
				CTransform mGrandParentWorldInverse; // 1028
				CTransform mParentLocal; // 1029
				QuaternionAligned::operator fltx4(); // 471
				VectorAligned::operator fltx4(); // 471
				QuaternionAligned::operator fltx4(); // 471
				VectorAligned::operator fltx4(); // 471
				CTransform::operator*(
						const CTransform& rhs);  // 1029
				QuaternionAligned::w(); // 41
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 41
				QuaternionAligned::operator Quaternion(); // 350
				CTransform::ToQuaternion(); // 1030
			}
			CUtlMemory<CConstraintTarget, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::operator[](
					int i);  // 1014
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 1021
			QuaternionAligned::operator fltx4(); // 471
			VectorAligned::operator fltx4(); // 471
			CTransform::operator*(
					const CTransform& rhs);  // 1022
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 1022
			QuaternionAligned::w(); // 41
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 41
			QuaternionAligned::operator Quaternion(); // 350
			CTransform::ToQuaternion(); // 1034
		}
		{
			int nOutput; // 1059
		}
		{
			int nOutput; // 1078
			{
				const CConstraintSlave& output; // 1080
				CTransform mOutputWorld; // 1082
				{
					const CTransform& mOutputParentWorld; // 1086
					CTransform mOutputLocal; // 1088
					{
						CTransform mOutputParentWorldInverse; // 1096
						QuaternionAligned::operator fltx4(); // 471
						VectorAligned::operator fltx4(); // 471
						CTransform::operator*(
								const CTransform& rhs);  // 1097
						VectorAligned::operator=(
								const VectorAligned& src);  // 26
						CTransform::operator=(
								CTransform &);  // 1097
					}
					CTransform::operator*(
							const CTransform& rhs);  // 1092
					VectorAligned::operator=(
							const VectorAligned& src);  // 26
					CTransform::operator=(
							CTransform &);  // 1092
					VectorAligned::VectorAligned(); // 31
					QuaternionAligned::QuaternionAligned(); // 31
					CTransform::CTransform(); // 1088
					QuaternionAligned::operator=(
							const Quaternion& vOther);  // 1100
					QuaternionAligned::operator fltx4(); // 471
					VectorAligned::operator fltx4(); // 471
					CTransform::operator*(
							const CTransform& rhs);  // 1101
					VectorAligned::operator=(
							const VectorAligned& src);  // 26
					QuaternionAligned::operator=(
							const QuaternionAligned& vOther);  // 26
					CTransform::operator=(
							CTransform &);  // 1101
				}
				QuaternionAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z,
					vec_t W);  // 217
				QuaternionAligned::operator=(
						const Quaternion& vOther);  // 1105
				CUtlMemory<CConstraintSlave, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::operator[](
						int i);  // 1080
			}
		}
		VectorAligned::VectorAligned(); // 31
		QuaternionAligned::QuaternionAligned(); // 31
		CTransform::CTransform(); // 1005
		Quaternion::Quaternion(); // 1007
		VectorAligned::VectorAligned(); // 31
		QuaternionAligned::QuaternionAligned(); // 31
		CTransform::CTransform(); // 1008
		CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Count(); // 1010
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
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 379
		VectorAligned::operator=(
				fltx4 src);  // 378
		CTransform::SetToIdentity(); // 1040
		Quaternion::Quaternion(); // 1043
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 1054
		FloatsAreEqual(float f1,
				float f2,
				float flTolerance);  // 964
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 966
		FloatMakePositive(vec_t f); // 964
		{
			const float  flAngle; // 972
			CrossProduct(const Vector& a,
					const Vector& b,
					Vector& result);  // 970
			DotProduct(const Vector& a,
					const Vector& b);  // 972
			RAD2DEG(float flRadians); // 974
			{
				int i; // 986
			}
			{
				int i; // 978
			}
		}
		{
			Quaternion qChild; // 899
			Vector::LengthSqr(); // 903
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 900
			Vector::operator=(
					const Vector& vOther);  // 900
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 41
			QuaternionAligned::operator Quaternion(); // 350
			CTransform::ToQuaternion(); // 899
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 900
		}
		Vector::Vector(); // 892
		Vector::Vector(); // 893
		Vector::Vector(); // 894
		Quaternion::Quaternion(); // 895
		Quaternion::Quaternion(); // 896
		DotProduct(const Vector& a,
				const Vector& b);  // 927
		FloatMakePositive(vec_t f); // 927
		DotProduct(const Vector& a,
				const Vector& b);  // 934
		FloatMakePositive(vec_t f); // 934
		Vector::operator*=(
				float fl);  // 951
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 952
		Vector::Vector(); // 947
		Vector::Vector(); // 950
		Vector::operator=(
				const Vector& vOther);  // 955
		DotProduct(const Vector& a,
				const Vector& b);  // 957
		Vector::Vector(); // 956
		Vector::operator*=(
				float fl);  // 957
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 958
		DotProduct(const Vector& a,
				const Vector& b);  // 961
		ComputeTwistBones(Quaternion* pqTwists,
					int nCount,
					bool bInverse,
					const Vector& vUp,
					const Quaternion& qParent,
					const CTransform& mChild,
					const Quaternion& qBaseInv,
					const float* pflWeights,
					const Quaternion* pqTwistBinds);  // 1065
	}
} /* size: 0, variables: 1 */

// <020C9298> modellib/boneconstraints.cpp:997
// variables: 31
// function calls: 102
void CTwistConstraint::Compute(const CModel* pModel, CTransform* pWorldTransformsInOut, float* pFlexControlsInOut, const uint32* pBoneBitVec)
{
	const char   __FUNCTION__; // 12231
	{
		int nParentBoneIndex; // 1004
		CTransform mParentWorldInverse; // 1005
		Quaternion qParentLocal; // 1007
		CTransform mBoneLocal; // 1008
		const int  nTargetCount; // 1010
		Quaternion qBindInv; // 1043
		const int  nOutputCount; // 1054
		Quaternion* pValveTwists; // 1055
		float* pflOutputWeights; // 1056
		Quaternion* pqOutputBaseOrientations; // 1057
		{
			const int  nBoneIndex; // 1014
			const CTransform& mBoneWorld; // 1019
			const CTransform& mParentWorld; // 1020
			const int  nGrandParentBoneIndex; // 1024
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1017
			}
			{
				const CTransform& mGrandParentWorld; // 1027
				CTransform mGrandParentWorldInverse; // 1028
				CTransform mParentLocal; // 1029
				QuaternionAligned::operator fltx4(); // 471
				VectorAligned::operator fltx4(); // 471
				QuaternionAligned::operator fltx4(); // 471
				VectorAligned::operator fltx4(); // 471
				CTransform::operator*(
						const CTransform& rhs);  // 1029
				QuaternionAligned::w(); // 41
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 41
				QuaternionAligned::operator Quaternion(); // 350
				CTransform::ToQuaternion(); // 1030
			}
			CUtlMemory<CConstraintTarget, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::operator[](
					int i);  // 1014
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 1021
			QuaternionAligned::operator fltx4(); // 471
			VectorAligned::operator fltx4(); // 471
			CTransform::operator*(
					const CTransform& rhs);  // 1022
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 1022
			QuaternionAligned::w(); // 41
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 41
			QuaternionAligned::operator Quaternion(); // 350
			CTransform::ToQuaternion(); // 1034
		}
		{
			int nOutput; // 1059
		}
		{
			int nOutput; // 1078
			{
				const CConstraintSlave& output; // 1080
				CTransform mOutputWorld; // 1082
				{
					const CTransform& mOutputParentWorld; // 1086
					CTransform mOutputLocal; // 1088
					{
						CTransform mOutputParentWorldInverse; // 1096
						QuaternionAligned::operator fltx4(); // 471
						VectorAligned::operator fltx4(); // 471
						CTransform::operator*(
								const CTransform& rhs);  // 1097
						VectorAligned::operator=(
								const VectorAligned& src);  // 26
						CTransform::operator=(
								CTransform &);  // 1097
					}
					CTransform::operator*(
							const CTransform& rhs);  // 1092
					VectorAligned::operator=(
							const VectorAligned& src);  // 26
					CTransform::operator=(
							CTransform &);  // 1092
					VectorAligned::VectorAligned(); // 31
					QuaternionAligned::QuaternionAligned(); // 31
					CTransform::CTransform(); // 1088
					QuaternionAligned::operator=(
							const Quaternion& vOther);  // 1100
					QuaternionAligned::operator fltx4(); // 471
					VectorAligned::operator fltx4(); // 471
					CTransform::operator*(
							const CTransform& rhs);  // 1101
					VectorAligned::operator=(
							const VectorAligned& src);  // 26
					QuaternionAligned::operator=(
							const QuaternionAligned& vOther);  // 26
					CTransform::operator=(
							CTransform &);  // 1101
				}
				QuaternionAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z,
					vec_t W);  // 217
				QuaternionAligned::operator=(
						const Quaternion& vOther);  // 1105
				CUtlMemory<CConstraintSlave, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::operator[](
						int i);  // 1080
			}
		}
		VectorAligned::VectorAligned(); // 31
		QuaternionAligned::QuaternionAligned(); // 31
		CTransform::CTransform(); // 1005
		Quaternion::Quaternion(); // 1007
		VectorAligned::VectorAligned(); // 31
		QuaternionAligned::QuaternionAligned(); // 31
		CTransform::CTransform(); // 1008
		CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Count(); // 1010
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
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 379
		VectorAligned::operator=(
				fltx4 src);  // 378
		CTransform::SetToIdentity(); // 1040
		Quaternion::Quaternion(); // 1043
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 1054
		FloatsAreEqual(float f1,
				float f2,
				float flTolerance);  // 964
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 966
		FloatMakePositive(vec_t f); // 964
		{
			const float  flAngle; // 972
			CrossProduct(const Vector& a,
					const Vector& b,
					Vector& result);  // 970
			DotProduct(const Vector& a,
					const Vector& b);  // 972
			RAD2DEG(float flRadians); // 974
			{
				int i; // 986
			}
			{
				int i; // 978
			}
		}
		{
			Quaternion qChild; // 899
			Vector::LengthSqr(); // 903
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 900
			Vector::operator=(
					const Vector& vOther);  // 900
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 41
			QuaternionAligned::operator Quaternion(); // 350
			CTransform::ToQuaternion(); // 899
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 900
		}
		Vector::Vector(); // 892
		Vector::Vector(); // 893
		Vector::Vector(); // 894
		Quaternion::Quaternion(); // 895
		Quaternion::Quaternion(); // 896
		DotProduct(const Vector& a,
				const Vector& b);  // 927
		FloatMakePositive(vec_t f); // 927
		DotProduct(const Vector& a,
				const Vector& b);  // 934
		FloatMakePositive(vec_t f); // 934
		Vector::operator*=(
				float fl);  // 951
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 952
		Vector::Vector(); // 947
		Vector::Vector(); // 950
		Vector::operator=(
				const Vector& vOther);  // 955
		DotProduct(const Vector& a,
				const Vector& b);  // 957
		Vector::Vector(); // 956
		Vector::operator*=(
				float fl);  // 957
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 958
		DotProduct(const Vector& a,
				const Vector& b);  // 961
		ComputeTwistBones(Quaternion* pqTwists,
					int nCount,
					bool bInverse,
					const Vector& vUp,
					const Quaternion& qParent,
					const CTransform& mChild,
					const Quaternion& qBaseInv,
					const float* pflWeights,
					const Quaternion* pqTwistBinds);  // 1065
	}
} /* size: 0, variables: 1 */

// <0132DD63> modellib/boneconstraints.cpp:997
// variables: 31
// function calls: 102
void CTwistConstraint::Compute(const CModel* pModel, CTransform* pWorldTransformsInOut, float* pFlexControlsInOut, const uint32* pBoneBitVec)
{
	const char   __FUNCTION__; // 47106
	{
		int nParentBoneIndex; // 1004
		CTransform mParentWorldInverse; // 1005
		Quaternion qParentLocal; // 1007
		CTransform mBoneLocal; // 1008
		const int  nTargetCount; // 1010
		Quaternion qBindInv; // 1043
		const int  nOutputCount; // 1054
		Quaternion* pValveTwists; // 1055
		float* pflOutputWeights; // 1056
		Quaternion* pqOutputBaseOrientations; // 1057
		{
			const int  nBoneIndex; // 1014
			const CTransform& mBoneWorld; // 1019
			const CTransform& mParentWorld; // 1020
			const int  nGrandParentBoneIndex; // 1024
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1017
			}
			{
				const CTransform& mGrandParentWorld; // 1027
				CTransform mGrandParentWorldInverse; // 1028
				CTransform mParentLocal; // 1029
				QuaternionAligned::operator fltx4(); // 471
				VectorAligned::operator fltx4(); // 471
				QuaternionAligned::operator fltx4(); // 471
				VectorAligned::operator fltx4(); // 471
				CTransform::operator*(
						const CTransform& rhs);  // 1029
				QuaternionAligned::w(); // 41
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 41
				QuaternionAligned::operator Quaternion(); // 350
				CTransform::ToQuaternion(); // 1030
			}
			CUtlMemory<CConstraintTarget, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::operator[](
					int i);  // 1014
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 1021
			QuaternionAligned::operator fltx4(); // 471
			VectorAligned::operator fltx4(); // 471
			CTransform::operator*(
					const CTransform& rhs);  // 1022
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 1022
			QuaternionAligned::w(); // 41
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 41
			QuaternionAligned::operator Quaternion(); // 350
			CTransform::ToQuaternion(); // 1034
		}
		{
			int nOutput; // 1059
		}
		{
			int nOutput; // 1078
			{
				const CConstraintSlave& output; // 1080
				CTransform mOutputWorld; // 1082
				{
					const CTransform& mOutputParentWorld; // 1086
					CTransform mOutputLocal; // 1088
					{
						CTransform mOutputParentWorldInverse; // 1096
						QuaternionAligned::operator fltx4(); // 471
						VectorAligned::operator fltx4(); // 471
						CTransform::operator*(
								const CTransform& rhs);  // 1097
						VectorAligned::operator=(
								const VectorAligned& src);  // 26
						CTransform::operator=(
								CTransform &);  // 1097
					}
					CTransform::operator*(
							const CTransform& rhs);  // 1092
					VectorAligned::operator=(
							const VectorAligned& src);  // 26
					CTransform::operator=(
							CTransform &);  // 1092
					VectorAligned::VectorAligned(); // 31
					QuaternionAligned::QuaternionAligned(); // 31
					CTransform::CTransform(); // 1088
					QuaternionAligned::operator=(
							const Quaternion& vOther);  // 1100
					QuaternionAligned::operator fltx4(); // 471
					VectorAligned::operator fltx4(); // 471
					CTransform::operator*(
							const CTransform& rhs);  // 1101
					VectorAligned::operator=(
							const VectorAligned& src);  // 26
					QuaternionAligned::operator=(
							const QuaternionAligned& vOther);  // 26
					CTransform::operator=(
							CTransform &);  // 1101
				}
				QuaternionAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z,
					vec_t W);  // 217
				QuaternionAligned::operator=(
						const Quaternion& vOther);  // 1105
				CUtlMemory<CConstraintSlave, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::operator[](
						int i);  // 1080
			}
		}
		VectorAligned::VectorAligned(); // 31
		QuaternionAligned::QuaternionAligned(); // 31
		CTransform::CTransform(); // 1005
		Quaternion::Quaternion(); // 1007
		VectorAligned::VectorAligned(); // 31
		QuaternionAligned::QuaternionAligned(); // 31
		CTransform::CTransform(); // 1008
		CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Count(); // 1010
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
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 379
		VectorAligned::operator=(
				fltx4 src);  // 378
		CTransform::SetToIdentity(); // 1040
		Quaternion::Quaternion(); // 1043
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 1054
		FloatsAreEqual(float f1,
				float f2,
				float flTolerance);  // 964
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 966
		FloatMakePositive(vec_t f); // 964
		{
			const float  flAngle; // 972
			CrossProduct(const Vector& a,
					const Vector& b,
					Vector& result);  // 970
			DotProduct(const Vector& a,
					const Vector& b);  // 972
			RAD2DEG(float flRadians); // 974
			{
				int i; // 986
			}
			{
				int i; // 978
			}
		}
		{
			Quaternion qChild; // 899
			Vector::LengthSqr(); // 903
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 900
			Vector::operator=(
					const Vector& vOther);  // 900
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 41
			QuaternionAligned::operator Quaternion(); // 350
			CTransform::ToQuaternion(); // 899
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 900
		}
		Vector::Vector(); // 892
		Vector::Vector(); // 893
		Vector::Vector(); // 894
		Quaternion::Quaternion(); // 895
		Quaternion::Quaternion(); // 896
		DotProduct(const Vector& a,
				const Vector& b);  // 927
		FloatMakePositive(vec_t f); // 927
		DotProduct(const Vector& a,
				const Vector& b);  // 934
		FloatMakePositive(vec_t f); // 934
		Vector::operator*=(
				float fl);  // 951
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 952
		Vector::Vector(); // 947
		Vector::Vector(); // 950
		Vector::operator=(
				const Vector& vOther);  // 955
		DotProduct(const Vector& a,
				const Vector& b);  // 957
		Vector::Vector(); // 956
		Vector::operator*=(
				float fl);  // 957
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 958
		DotProduct(const Vector& a,
				const Vector& b);  // 961
		ComputeTwistBones(Quaternion* pqTwists,
					int nCount,
					bool bInverse,
					const Vector& vUp,
					const Quaternion& qParent,
					const CTransform& mChild,
					const Quaternion& qBaseInv,
					const float* pflWeights,
					const Quaternion* pqTwistBinds);  // 1065
	}
} /* size: 0, variables: 1 */

// <0540B055> modellib/boneconstraints.cpp:1117
// function call: 1
void CTiltTwistConstraint::CTiltTwistConstraint()
{
	Quaternion::Quaternion(); // 1117
} /* size: 86, inline expansions: 1 (0 bytes) */

// <0540B03C> modellib/boneconstraints.cpp:1117
void CTiltTwistConstraint::CTiltTwistConstraint()
{
} /* size: 0 */

// <0540AF83> modellib/boneconstraints.cpp:1134
// function call: 1
void CTiltTwistConstraint::Init(const char* pName, int nTargetAxis, int nSlaveAxis)
{
	CBaseConstraint::Init(
		const char* pName);  // 1136
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0540AE26> modellib/boneconstraints.cpp:1144
// function call: 1
void CTiltTwistConstraint::Compute(const CModel* pModel, CTransform* pWorldTransformsInOut, float* pFlexControlsInOut, const uint32* pBoneBitVec)
{
	CTiltTwistConstraint::Compute(
		const CModel* pModel,
		CTransform* pWorldTransformsInOut,
		float* pFlexControlsInOut,
		const uint32* pBoneBitVec);  // 1147
} /* size: 108, inline expansions: 1 (49 bytes) */

// <0541C9B0> modellib/boneconstraints.cpp:1152
// variables: 7
void CTiltTwistConstraint::Compute(const CModel* pModel, CTransform* pWorldTransformsInOut, float* pFlexControlsInOut, const uint32* pBoneBitVec)
{
	const CConstraintSlave& slave; // 1157
	CTransform mTargetTwist; // 1160
	float flTwistRadians; // 1163
	RadianEuler eTwist; // 1178
	const Quaternion  qTwist; // 1180
	CTransform mOutputWorld; // 1182
	CConstraintSlave& output; // 1203
} /* size: 0, variables: 7 */

// <0541C014> modellib/boneconstraints.cpp:1152
// variables: 14
// function calls: 33
void CTiltTwistConstraint::Compute(const CModel* pModel, CTransform* pWorldTransformsInOut, const uint32* pBoneBitVec, float* pFlexControlsInOut)
{
	const CConstraintSlave& slave; // 1157
	CTransform mTargetTwist; // 1160
	float flTwistRadians; // 1163
	RadianEuler eTwist; // 1178
	const Quaternion  qTwist; // 1180
	CTransform mOutputWorld; // 1182
	CConstraintSlave& output; // 1203
	CUtlMemory<CConstraintSlave, int>::operator[](
			int i);  // 616
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Head(); // 1157
	{
	}
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 1160
	{
		const float  flAngleNormOld; // 1259
		const float  flAngleNormNew; // 1260
		float flAngleDelta; // 1262
		const float  flNoFlipCurrent; // 1277
		NormalizeAngle(float flAngle); // 1259
		NormalizeAngle(float flAngle); // 1260
	}
	ComputeNoFlipAngle(float flAngleOld,
				float flAngleNew);  // 1255
	ComputeNoFlipAngle(float flAngleOld,
				float flAngleNew);  // 1169
	RadianEuler::operator[](
			int i);  // 1179
	RadianEuler::RadianEuler(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1178
	Quaternion::Quaternion(
			const RadianEuler& angle);  // 1180
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 217
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 345
	CTransform::SetOrientation(
			const Quaternion& qOrientation);  // 1200
	{
		const CTransform& mOutputParentWorld; // 1186
		CTransform mSlaveLocal; // 1188
		{
			CTransform mOutputParentWorldInverse; // 1191
			QuaternionAligned::operator fltx4(); // 471
			VectorAligned::operator fltx4(); // 471
			CTransform::operator*(
					const CTransform& rhs);  // 1192
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			CTransform::operator=(
					CTransform &);  // 1192
		}
		VectorAligned::VectorAligned(); // 31
		QuaternionAligned::QuaternionAligned(); // 31
		CTransform::CTransform(); // 1188
		QuaternionAligned::operator=(
				const Quaternion& vOther);  // 345
		CTransform::SetOrientation(
				const Quaternion& qOrientation);  // 1195
		QuaternionAligned::operator fltx4(); // 471
		VectorAligned::operator fltx4(); // 471
		CTransform::operator*(
				const CTransform& rhs);  // 1196
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				CTransform &);  // 1196
	}
	CUtlMemory<CConstraintSlave, int>::operator[](
			int i);  // 616
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Head(); // 1203
} /* size: 0, variables: 7, inline expansions: 15 (642 bytes) */

// <0540AD2B> modellib/boneconstraints.cpp:1152
// variables: 12
void CTiltTwistConstraint::Compute(const CModel* pModel, CTransform* pWorldTransformsInOut, float* pFlexControlsInOut, const uint32* pBoneBitVec)
{
	const CConstraintSlave& slave; // 1157
	const char   __FUNCTION__; // 32604
	CTransform mTargetTwist; // 1160
	float flTwistRadians; // 1163
	RadianEuler eTwist; // 1178
	const Quaternion  qTwist; // 1180
	CTransform mOutputWorld; // 1182
	CConstraintSlave& output; // 1203
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1158
	}
	{
		const CTransform& mOutputParentWorld; // 1186
		CTransform mSlaveLocal; // 1188
		{
			CTransform mOutputParentWorldInverse; // 1191
		}
	}
} /* size: 0, variables: 8 */

// <020C8EA1> modellib/boneconstraints.cpp:1152
// variables: 12
void CTiltTwistConstraint::Compute(const CModel* pModel, CTransform* pWorldTransformsInOut, float* pFlexControlsInOut, const uint32* pBoneBitVec)
{
	const CConstraintSlave& slave; // 1157
	const char   __FUNCTION__; // 12231
	CTransform mTargetTwist; // 1160
	float flTwistRadians; // 1163
	RadianEuler eTwist; // 1178
	const Quaternion  qTwist; // 1180
	CTransform mOutputWorld; // 1182
	CConstraintSlave& output; // 1203
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1158
	}
	{
		const CTransform& mOutputParentWorld; // 1186
		CTransform mSlaveLocal; // 1188
		{
			CTransform mOutputParentWorldInverse; // 1191
		}
	}
} /* size: 0, variables: 8 */

// <0132D96C> modellib/boneconstraints.cpp:1152
// variables: 12
void CTiltTwistConstraint::Compute(const CModel* pModel, CTransform* pWorldTransformsInOut, float* pFlexControlsInOut, const uint32* pBoneBitVec)
{
	const CConstraintSlave& slave; // 1157
	const char   __FUNCTION__; // 47106
	CTransform mTargetTwist; // 1160
	float flTwistRadians; // 1163
	RadianEuler eTwist; // 1178
	const Quaternion  qTwist; // 1180
	CTransform mOutputWorld; // 1182
	CConstraintSlave& output; // 1203
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1158
	}
	{
		const CTransform& mOutputParentWorld; // 1186
		CTransform mSlaveLocal; // 1188
		{
			CTransform mOutputParentWorldInverse; // 1191
		}
	}
} /* size: 0, variables: 8 */

// <0540A704> modellib/boneconstraints.cpp:1211
// variables: 4
// function calls: 21
void CTiltTwistConstraint::Finalize(const CModel* pModel)
{
	const char   __FUNCTION__; // 32631
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1219
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1230
	}
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Count(); // 135
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::IsEmpty(); // 1213
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 135
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::IsEmpty(); // 1213
	CBoneConstraintBase::IsValid(); // 432
	CBaseConstraint::Finalize(
		const CModel* pModel);  // 1216
	CUtlMemory<CConstraintTarget, int>::operator[](
			int i);  // 616
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Head(); // 1222
	Quaternion::Quaternion(); // 875
	QuaternionInvert(const Quaternion& p); // 1222
	CUtlMemory<CConstraintTarget, int>::operator[](
			int i);  // 616
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Head(); // 1224
	CUtlMemory<CConstraintSlave, int>::operator[](
			int i);  // 616
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Head(); // 1227
	CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
	{
	}
	CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
	BitVec_IsBitSet(const uint32* pBase,
			int nBitNum);  // 1471
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
		int bitNum);  // 1230
	CBoneConstraintBase::IsValid(); // 1232
	CBoneConstraintBase::IsFinalized(); // 1219
	CBoneConstraintBase::IsValid(); // 1220
} /* size: 0, variables: 1, inline expansions: 21 (157 bytes) */

// <020C887A> modellib/boneconstraints.cpp:1211
// variables: 4
// function calls: 21
void CTiltTwistConstraint::Finalize(const CModel* pModel)
{
	const char   __FUNCTION__; // 12258
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1219
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1230
	}
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Count(); // 135
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::IsEmpty(); // 1213
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 135
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::IsEmpty(); // 1213
	CBoneConstraintBase::IsValid(); // 432
	CBaseConstraint::Finalize(
		const CModel* pModel);  // 1216
	CUtlMemory<CConstraintTarget, int>::operator[](
			int i);  // 616
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Head(); // 1222
	Quaternion::Quaternion(); // 875
	QuaternionInvert(const Quaternion& p); // 1222
	CUtlMemory<CConstraintTarget, int>::operator[](
			int i);  // 616
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Head(); // 1224
	CUtlMemory<CConstraintSlave, int>::operator[](
			int i);  // 616
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Head(); // 1227
	CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
	{
	}
	CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
	BitVec_IsBitSet(const uint32* pBase,
			int nBitNum);  // 1471
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
		int bitNum);  // 1230
	CBoneConstraintBase::IsValid(); // 1232
	CBoneConstraintBase::IsFinalized(); // 1219
	CBoneConstraintBase::IsValid(); // 1220
} /* size: 0, variables: 1, inline expansions: 21 (0 bytes) */

// <0541BECA> modellib/boneconstraints.cpp:1239
// variable: 1
void NormalizeAngle(float flAngle)
{
	const float  flAngleOffset; // 1245
} /* size: 0, variables: 1 */

// <0540A6B8> modellib/boneconstraints.cpp:1239
// variables: 4
void NormalizeAngle(float flAngle)
{
	const float  flStart; // 1241
	const float  flEnd; // 1242
	const float  flWidth; // 1243
	const float  flAngleOffset; // 1245
} /* size: 0, variables: 4 */

// <0541BF06> modellib/boneconstraints.cpp:1255
// variables: 4
// function calls: 3
void ComputeNoFlipAngle(float flAngleOld, float flAngleNew)
{
	{
		const float  flAngleNormOld; // 1259
		const float  flAngleNormNew; // 1260
		float flAngleDelta; // 1262
		const float  flNoFlipCurrent; // 1277
		NormalizeAngle(float flAngle); // 1259
		NormalizeAngle(float flAngle); // 1260
	}
	ComputeNoFlipAngle(float flAngleOld,
				float flAngleNew);  // 1255
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0540A65D> modellib/boneconstraints.cpp:1255
// variables: 4
void ComputeNoFlipAngle(float flAngleOld, float flAngleNew)
{
	{
		const float  flAngleNormOld; // 1259
		const float  flAngleNormNew; // 1260
		float flAngleDelta; // 1262
		const float  flNoFlipCurrent; // 1277
	}
} /* size: 0 */

// <0540828B> modellib/boneconstraints.cpp:1291
// variables: 82
// function calls: 139
void ComputeTwistAroundAxisInRadians(CTransform& mRot, int nAxis, float flEps)
{
	QuaternionAligned mRotNormalized; // 1293
	const char   __FUNCTION__; // 33187
	const int  nAxisA; // 1297
	const int  nAxisB; // 1298
	Vector ijk_; // 1300
	const float  flPhiAxis; // 1311
	const float  flPhiAxisRounded; // 1312
	const float  flPhi; // 1313
	float flTau; // 1332
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1295
	}
	{
		const float  flTheta; // 1336
		const float  flCosTheta; // 1338
		const float  flSinTheta; // 1339
		Vector::operator[](
				int i);  // 1336
		Vector::operator[](
				int i);  // 1336
		Vector::operator[](
				int i);  // 1341
		Vector::operator[](
				int i);  // 1341
	}
	{
		fltx4 retVal; // 1851
		_mm_cmpeq_ps(__m128 __A,
				__m128 __B);  // 1852
	}
	CmpEqSIMD<>(const fltx4& a,
			const fltx4& b);  // 407
	{
		fltx4 fl4Product; // 1725
		fltx4 fl4YXWZ; // 1727
		fltx4 fl4UUVV; // 1729
		fltx4 fl4VVUU; // 1731
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1725
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1728
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1730
		{
			fltx4 retVal; // 373
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 374
		}
		RotateLeft2<>(const fltx4& a); // 1732
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1733
	}
	Dot4SIMD<>(const fltx4& a,
			const fltx4& b);  // 405
	QuaternionAligned::operator fltx4(); // 408
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 406
	{
		fltx4 retVal; // 826
		_mm_xor_ps(__m128 __A,
				__m128 __B);  // 827
	}
	XorSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	{
		fltx4 retVal; // 826
		_mm_xor_ps(__m128 __A,
				__m128 __B);  // 827
	}
	XorSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	MaskedAssign<>(const fltx4& ReplacementMask,
			const fltx4& a,
			const fltx4& b);  // 408
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 408
	QuaternionAligned::QuaternionAligned(
				fltx4 vec);  // 408
	QuaternionAligned::Normalized(); // 1293
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
	QuaternionAligned::GetForward(); // 1300
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
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
			const VectorAligned& v);  // 441
	QuaternionAligned::GetLeft(); // 1300
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 1300
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
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
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
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
			const VectorAligned& v);  // 447
	QuaternionAligned::GetUp(); // 1300
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 1300
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 1300
	Vector::operator[](
			int i);  // 1311
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 1312
	FloatsAreEqual(float f1,
			float f2,
			float flTolerance);  // 1334
	FloatsAreEqual(float f1,
			float f2,
			float flTolerance);  // 1343
	Vector::operator[](
			int i);  // 1343
	Vector::operator[](
			int i);  // 1345
} /* size: 0, variables: 9, inline expansions: 57 (1455 bytes) */

// <020C6401> modellib/boneconstraints.cpp:1291
// variables: 82
// function calls: 139
void ComputeTwistAroundAxisInRadians(CTransform& mRot, int nAxis, float flEps)
{
	QuaternionAligned mRotNormalized; // 1293
	const char   __FUNCTION__; // 12814
	const int  nAxisA; // 1297
	const int  nAxisB; // 1298
	Vector ijk_; // 1300
	const float  flPhiAxis; // 1311
	const float  flPhiAxisRounded; // 1312
	const float  flPhi; // 1313
	float flTau; // 1332
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1295
	}
	{
		const float  flTheta; // 1336
		const float  flCosTheta; // 1338
		const float  flSinTheta; // 1339
		Vector::operator[](
				int i);  // 1336
		Vector::operator[](
				int i);  // 1336
		Vector::operator[](
				int i);  // 1341
		Vector::operator[](
				int i);  // 1341
	}
	{
		fltx4 retVal; // 1851
		_mm_cmpeq_ps(__m128 __A,
				__m128 __B);  // 1852
	}
	CmpEqSIMD<>(const fltx4& a,
			const fltx4& b);  // 407
	{
		fltx4 fl4Product; // 1725
		fltx4 fl4YXWZ; // 1727
		fltx4 fl4UUVV; // 1729
		fltx4 fl4VVUU; // 1731
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1725
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1728
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1730
		{
			fltx4 retVal; // 373
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 374
		}
		RotateLeft2<>(const fltx4& a); // 1732
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1733
	}
	Dot4SIMD<>(const fltx4& a,
			const fltx4& b);  // 405
	QuaternionAligned::operator fltx4(); // 408
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 406
	{
		fltx4 retVal; // 826
		_mm_xor_ps(__m128 __A,
				__m128 __B);  // 827
	}
	XorSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	{
		fltx4 retVal; // 826
		_mm_xor_ps(__m128 __A,
				__m128 __B);  // 827
	}
	XorSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	MaskedAssign<>(const fltx4& ReplacementMask,
			const fltx4& a,
			const fltx4& b);  // 408
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 408
	QuaternionAligned::QuaternionAligned(
				fltx4 vec);  // 408
	QuaternionAligned::Normalized(); // 1293
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
	QuaternionAligned::GetForward(); // 1300
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
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
			const VectorAligned& v);  // 441
	QuaternionAligned::GetLeft(); // 1300
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 1300
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
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
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
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
			const VectorAligned& v);  // 447
	QuaternionAligned::GetUp(); // 1300
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 1300
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 1300
	Vector::operator[](
			int i);  // 1311
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 1312
	FloatsAreEqual(float f1,
			float f2,
			float flTolerance);  // 1334
	FloatsAreEqual(float f1,
			float f2,
			float flTolerance);  // 1343
	Vector::operator[](
			int i);  // 1343
	Vector::operator[](
			int i);  // 1345
} /* size: 0, variables: 9, inline expansions: 57 (0 bytes) */

// <0132AECC> modellib/boneconstraints.cpp:1291
// variables: 82
// function calls: 139
void ComputeTwistAroundAxisInRadians(CTransform& mRot, int nAxis, float flEps)
{
	QuaternionAligned mRotNormalized; // 1293
	const char   __FUNCTION__; // 47689
	const int  nAxisA; // 1297
	const int  nAxisB; // 1298
	Vector ijk_; // 1300
	const float  flPhiAxis; // 1311
	const float  flPhiAxisRounded; // 1312
	const float  flPhi; // 1313
	float flTau; // 1332
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1295
	}
	{
		const float  flTheta; // 1336
		const float  flCosTheta; // 1338
		const float  flSinTheta; // 1339
		Vector::operator[](
				int i);  // 1336
		Vector::operator[](
				int i);  // 1336
		Vector::operator[](
				int i);  // 1341
		Vector::operator[](
				int i);  // 1341
	}
	{
		fltx4 retVal; // 1851
		_mm_cmpeq_ps(__m128 __A,
				__m128 __B);  // 1852
	}
	CmpEqSIMD<>(const fltx4& a,
			const fltx4& b);  // 407
	{
		fltx4 fl4Product; // 1725
		fltx4 fl4YXWZ; // 1727
		fltx4 fl4UUVV; // 1729
		fltx4 fl4VVUU; // 1731
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1725
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1728
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1730
		{
			fltx4 retVal; // 373
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 374
		}
		RotateLeft2<>(const fltx4& a); // 1732
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1733
	}
	Dot4SIMD<>(const fltx4& a,
			const fltx4& b);  // 405
	QuaternionAligned::operator fltx4(); // 408
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 406
	{
		fltx4 retVal; // 826
		_mm_xor_ps(__m128 __A,
				__m128 __B);  // 827
	}
	XorSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	{
		fltx4 retVal; // 826
		_mm_xor_ps(__m128 __A,
				__m128 __B);  // 827
	}
	XorSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	MaskedAssign<>(const fltx4& ReplacementMask,
			const fltx4& a,
			const fltx4& b);  // 408
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 408
	QuaternionAligned::QuaternionAligned(
				fltx4 vec);  // 408
	QuaternionAligned::Normalized(); // 1293
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
	QuaternionAligned::GetForward(); // 1300
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
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
			const VectorAligned& v);  // 441
	QuaternionAligned::GetLeft(); // 1300
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 1300
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
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
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
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
			const VectorAligned& v);  // 447
	QuaternionAligned::GetUp(); // 1300
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 1300
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 1300
	Vector::operator[](
			int i);  // 1311
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 1312
	FloatsAreEqual(float f1,
			float f2,
			float flTolerance);  // 1334
	FloatsAreEqual(float f1,
			float f2,
			float flTolerance);  // 1343
	Vector::operator[](
			int i);  // 1343
	Vector::operator[](
			int i);  // 1345
} /* size: 0, variables: 9, inline expansions: 57 (1455 bytes) */

// <05407D3D> modellib/boneconstraints.cpp:1360
// variables: 5
// function calls: 24
void CTiltTwistConstraint::GetTwistMatrix(CTransform& mTwist, CTransform* pWorldTransformInOut)
{
	Quaternion qTargetParentSpace; // 1362
	const Quaternion  qTwist; // 1375
	{
		const Quaternion  qTargetWorld; // 1370
		const Quaternion  qParentWorldInverse; // 1371
		Quaternion::Quaternion(); // 875
		QuaternionInvert(const Quaternion& p); // 1371
		QuaternionAligned::w(); // 41
		Quaternion::Quaternion(
				vec_t ix,
				vec_t iy,
				vec_t iz,
				vec_t iw);  // 41
		QuaternionAligned::operator Quaternion(); // 350
		CTransform::ToQuaternion(); // 1371
		Quaternion::Quaternion(
				vec_t ix,
				vec_t iy,
				vec_t iz,
				vec_t iw);  // 41
		QuaternionAligned::operator Quaternion(); // 350
		CTransform::ToQuaternion(); // 1370
		Quaternion::Quaternion(); // 2001
		operator*(const Quaternion& p,
				const Quaternion& q);  // 1372
	}
	QuaternionAligned::w(); // 41
	QuaternionAligned::operator Quaternion(); // 350
	CTransform::ToQuaternion(); // 1366
	Quaternion::Quaternion(); // 1362
	Quaternion::Quaternion(); // 2001
	operator*(const Quaternion& p,
			const Quaternion& q);  // 1375
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
	VectorAligned::operator=(
			fltx4 src);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 329
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 217
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 328
	CTransform::InitFromQuaternion(
				const Quaternion& orientation,
				const Vector& vPosition,
				float flScale);  // 1376
} /* size: 552, variables: 2, inline expansions: 12 (290 bytes) */

// <05407C9B> modellib/boneconstraints.cpp:1381
// function calls: 2
void CMorphConstraint::CMorphConstraint()
{
	CUtlString::CUtlString(); // 1382
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 1382
} /* size: 82, inline expansions: 2 (25 bytes) */

// <05407C82> modellib/boneconstraints.cpp:1381
void CMorphConstraint::CMorphConstraint()
{
} /* size: 0 */

// <05407AD9> modellib/boneconstraints.cpp:1388
// function calls: 3
void CMorphConstraint::Init(const char* pName, const char* pszTargetMorph, int nSlaveChannel, float flMin, float flMax)
{
	CBaseConstraint::Init(
		const char* pName);  // 1390
	CUtlString::operator=(
			const char* src);  // 1392
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 1393
} /* size: 0, inline expansions: 3 (0 bytes) */

// <054072E0> modellib/boneconstraints.cpp:1400
// variables: 13
// function calls: 22
void CMorphConstraint::Compute(const CModel* pModel, CTransform* pWorldTransformsInOut, float* pFlexControlsInOut, const uint32* pBoneBitVec)
{
	BoneConstraintResult_t eResult; // 1405
	const float  flControlValue; // 1407
	const float  flRemappedValue; // 1408
	{
		const CConstraintSlave& output; // 1410
		const CUtlVector<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >& __for_range; // 38662
		const_iterator __for_begin; // 35129
		const_iterator __for_end; // 35129
		{
			const int  nOutputBoneIndex; // 1415
			const int  nOutputBoneParentIndex; // 1416
			CTransform mOutputWorld; // 1418
			{
				const CTransform& mOutputParentWorld; // 1422
				CTransform mOutputLocal; // 1424
				{
					CTransform mOutputParentWorldInverse; // 1427
					QuaternionAligned::operator fltx4(); // 471
					VectorAligned::operator fltx4(); // 471
					CTransform::operator*(
							const CTransform& rhs);  // 1428
					VectorAligned::operator=(
							const VectorAligned& src);  // 26
					QuaternionAligned::operator=(
							const QuaternionAligned& vOther);  // 26
					CTransform::operator=(
							CTransform &);  // 1428
				}
				VectorAligned::VectorAligned(); // 31
				QuaternionAligned::QuaternionAligned(); // 31
				CTransform::CTransform(); // 1424
				QuaternionAligned::operator fltx4(); // 471
				VectorAligned::operator fltx4(); // 471
				CTransform::operator*(
						const CTransform& rhs);  // 1433
				VectorAligned::operator=(
						const VectorAligned& src);  // 26
				QuaternionAligned::operator=(
						const QuaternionAligned& vOther);  // 26
				CTransform::operator=(
						CTransform &);  // 1433
			}
			FloatsAreEqual(float f1,
					float f2,
					float flTolerance);  // 1412
		}
		CUtlMemory<CConstraintSlave, int>::Base(); // 113
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Base(); // 103
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::begin(); // 1410
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 105
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::end(); // 1410
	}
	RemapVal(float val,
		float A,
		float B,
		float C,
		float D);  // 1408
} /* size: 1019, variables: 3, inline expansions: 1 (89 bytes) */

// <020C5456> modellib/boneconstraints.cpp:1400
// variables: 13
// function calls: 22
void CMorphConstraint::Compute(const CModel* pModel, CTransform* pWorldTransformsInOut, float* pFlexControlsInOut, const uint32* pBoneBitVec)
{
	BoneConstraintResult_t eResult; // 1405
	const float  flControlValue; // 1407
	const float  flRemappedValue; // 1408
	{
		const CConstraintSlave& output; // 1410
		const CUtlVector<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >& __for_range; // 18289
		const_iterator __for_begin; // 14756
		const_iterator __for_end; // 14756
		{
			const int  nOutputBoneIndex; // 1415
			const int  nOutputBoneParentIndex; // 1416
			CTransform mOutputWorld; // 1418
			{
				const CTransform& mOutputParentWorld; // 1422
				CTransform mOutputLocal; // 1424
				{
					CTransform mOutputParentWorldInverse; // 1427
					QuaternionAligned::operator fltx4(); // 471
					VectorAligned::operator fltx4(); // 471
					CTransform::operator*(
							const CTransform& rhs);  // 1428
					VectorAligned::operator=(
							const VectorAligned& src);  // 26
					QuaternionAligned::operator=(
							const QuaternionAligned& vOther);  // 26
					CTransform::operator=(
							CTransform &);  // 1428
				}
				VectorAligned::VectorAligned(); // 31
				QuaternionAligned::QuaternionAligned(); // 31
				CTransform::CTransform(); // 1424
				QuaternionAligned::operator fltx4(); // 471
				VectorAligned::operator fltx4(); // 471
				CTransform::operator*(
						const CTransform& rhs);  // 1433
				VectorAligned::operator=(
						const VectorAligned& src);  // 26
				QuaternionAligned::operator=(
						const QuaternionAligned& vOther);  // 26
				CTransform::operator=(
						CTransform &);  // 1433
			}
			FloatsAreEqual(float f1,
					float f2,
					float flTolerance);  // 1412
		}
		CUtlMemory<CConstraintSlave, int>::Base(); // 113
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Base(); // 103
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::begin(); // 1410
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 105
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::end(); // 1410
	}
	RemapVal(float val,
		float A,
		float B,
		float C,
		float D);  // 1408
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <05406F87> modellib/boneconstraints.cpp:1451
// variables: 7
// function calls: 8
void CMorphConstraint::Finalize(const CModel* pModel)
{
	const char   __FUNCTION__; // 32631
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1459
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1460
	}
	{
		const LocalFlexController_t  nFlexControllerCount; // 1466
		{
			LocalFlexController_t nFlexController; // 1467
			{
				const char* pszFlexControllerName; // 1469
				{
					const CFlexController* pFlexControl; // 1474
				}
				CUtlString::Get(); // 1470
			}
		}
	}
	CBoneConstraintBase::IsFinalized(); // 1453
	CBoneConstraintBase::IsValid(); // 1454
	CBaseConstraint::Finalize(
		const CModel* pModel);  // 1456
	CBoneConstraintBase::IsFinalized(); // 1459
	CBoneConstraintBase::IsValid(); // 1460
	CUtlString::IsEmpty(); // 1464
	CBoneConstraintBase::IsValid(); // 1483
} /* size: 0, variables: 1, inline expansions: 7 (50 bytes) */

// <020C50FD> modellib/boneconstraints.cpp:1451
// variables: 7
// function calls: 8
void CMorphConstraint::Finalize(const CModel* pModel)
{
	const char   __FUNCTION__; // 12258
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1459
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1460
	}
	{
		const LocalFlexController_t  nFlexControllerCount; // 1466
		{
			LocalFlexController_t nFlexController; // 1467
			{
				const char* pszFlexControllerName; // 1469
				{
					const CFlexController* pFlexControl; // 1474
				}
				CUtlString::Get(); // 1470
			}
		}
	}
	CBoneConstraintBase::IsFinalized(); // 1453
	CBoneConstraintBase::IsValid(); // 1454
	CBaseConstraint::Finalize(
		const CModel* pModel);  // 1456
	CBoneConstraintBase::IsFinalized(); // 1459
	CBoneConstraintBase::IsValid(); // 1460
	CUtlString::IsEmpty(); // 1464
	CBoneConstraintBase::IsValid(); // 1483
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <054067EE> modellib/boneconstraints.cpp:1488
// variables: 8
// function calls: 26
void CMorphConstraint::CalcOutputLocalMatrix(CTransform& mOutputLocal, const CConstraintSlave& output, float flValue)
{
	{
		Vector vTranslate; // 1496
		Vector::operator[](
				int i);  // 1497
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
				const Vector& rhs);  // 1498
		VectorAligned::operator fltx4(); // 68
		{
			fltx4 zzww; // 1414
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<250>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<250>(const fltx4& a,
					const fltx4& b);  // 1414
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<148>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<148>(const fltx4& a,
					const fltx4& b);  // 1415
		}
		SetWSIMD<>(const fltx4& a,
				const fltx4& w);  // 68
		VectorAligned::operator=(
				fltx4 src);  // 68
		CTransform::SetOrigin(
				const VectorAligned& vPos);  // 1498
	}
	{
		Vector vAxis; // 1505
		Quaternion qConstraint; // 1507
		{
			Quaternion qLocal; // 1513
			Quaternion::Quaternion(); // 1513
			QuaternionAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 217
			QuaternionAligned::operator=(
					const Quaternion& vOther);  // 345
			CTransform::SetOrientation(
					const Quaternion& qOrientation);  // 1515
		}
		Vector::operator[](
				int i);  // 1506
		Quaternion::Quaternion(); // 1507
		QuaternionAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 217
		QuaternionAligned::operator=(
				const Quaternion& vOther);  // 345
		CTransform::SetOrientation(
				const Quaternion& qOrientation);  // 1519
		Quaternion::Quaternion(); // 2001
		operator*(const Quaternion& p,
				const Quaternion& q);  // 1509
	}
} /* size: 411 */

// <0540603C> modellib/boneconstraints.cpp:1528
// variables: 10
// function calls: 22
void CParentConstraint::Compute(const CModel* pModel, CTransform* pWorldTransformsInOut, float* pFlexControlsInOut, const uint32* pBoneBitVec)
{
	BoneConstraintResult_t eResult; // 1533
	CTransform tTarget; // 1535
	const float  flTargetWeight; // 1536
	CTransform mOutputWorld; // 1538
	{
		const CConstraintSlave& output; // 1540
		const CUtlVector<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >& __for_range; // 38662
		const_iterator __for_begin; // 35129
		const_iterator __for_end; // 35129
		{
			const float  flOutputWeight; // 1542
			{
				CTransform tOutput; // 1555
				VectorAligned::operator=(
						const VectorAligned& src);  // 26
				QuaternionAligned::operator=(
						const QuaternionAligned& vOther);  // 26
				CTransform::operator=(
						CTransform &);  // 1556
				VectorAligned::operator=(
						const VectorAligned& src);  // 26
				QuaternionAligned::operator=(
						const QuaternionAligned& vOther);  // 26
				CTransform::operator=(
						const CTransform  &);  // 1558
			}
			FloatsAreEqual(float f1,
					float f2,
					float flTolerance);  // 1545
			FloatsAreEqual(float f1,
					float f2,
					float flTolerance);  // 1549
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					const CTransform  &);  // 1551
		}
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 105
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::end(); // 1540
		CUtlMemory<CConstraintSlave, int>::Base(); // 113
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Base(); // 103
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::begin(); // 1540
	}
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 1535
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 1538
} /* size: 1027, variables: 4, inline expansions: 6 (0 bytes) */

// <020C41B2> modellib/boneconstraints.cpp:1528
// variables: 10
// function calls: 22
void CParentConstraint::Compute(const CModel* pModel, CTransform* pWorldTransformsInOut, float* pFlexControlsInOut, const uint32* pBoneBitVec)
{
	BoneConstraintResult_t eResult; // 1533
	CTransform tTarget; // 1535
	const float  flTargetWeight; // 1536
	CTransform mOutputWorld; // 1538
	{
		const CConstraintSlave& output; // 1540
		const CUtlVector<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >& __for_range; // 18289
		const_iterator __for_begin; // 14756
		const_iterator __for_end; // 14756
		{
			const float  flOutputWeight; // 1542
			{
				CTransform tOutput; // 1555
				VectorAligned::operator=(
						const VectorAligned& src);  // 26
				QuaternionAligned::operator=(
						const QuaternionAligned& vOther);  // 26
				CTransform::operator=(
						CTransform &);  // 1556
				VectorAligned::operator=(
						const VectorAligned& src);  // 26
				QuaternionAligned::operator=(
						const QuaternionAligned& vOther);  // 26
				CTransform::operator=(
						const CTransform  &);  // 1558
			}
			FloatsAreEqual(float f1,
					float f2,
					float flTolerance);  // 1545
			FloatsAreEqual(float f1,
					float f2,
					float flTolerance);  // 1549
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					const CTransform  &);  // 1551
		}
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 105
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::end(); // 1540
		CUtlMemory<CConstraintSlave, int>::Base(); // 113
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Base(); // 103
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::begin(); // 1540
	}
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 1535
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 1538
} /* size: 0, variables: 4, inline expansions: 6 (0 bytes) */

// <05405F4A> modellib/boneconstraints.cpp:1571
void IInterpolateRbf::IInterpolateRbf()
{
} /* size: 0 */

// <05405F2D> modellib/boneconstraints.cpp:1571
inline void IInterpolateRbf::IInterpolateRbf()
{
} /* size: 0 */

// <0540580C> modellib/boneconstraints.cpp:1571
void IInterpolateRbf::~IInterpolateRbf()
{
} /* size: 0 */

// <054057EF> modellib/boneconstraints.cpp:1571
inline void IInterpolateRbf::~IInterpolateRbf()
{
} /* size: 0 */

// <053E4B12> modellib/boneconstraints.cpp:1571
// member functions: 4
// member variable: 1
// class size: 64
class IInterpolateRbf : public CInterpolateRbfTyped<Vector> {
public:
	/* class CInterpolateRbfTyped<Vector> <ancestor>; */ /* 0 64 */
	void ~IInterpolateRbf(IInterpolateRbf* );
	void IInterpolateRbf(IInterpolateRbf* );
	void ~IInterpolateRbf(class IInterpolateRbf *); /* linkage=_ZN15IInterpolateRbfD4Ev */
	void IInterpolateRbf(class IInterpolateRbf *); /* linkage=_ZN15IInterpolateRbfC4Ev */
};

// <0540583C> modellib/boneconstraints.cpp:1577
// function calls: 34
void CBoneConstraintPoseSpaceMorph::CBoneConstraintPoseSpaceMorph()
{
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
	CVarBitVec::CVarBitVec(); // 131
	CBoneConstraintBase::CBoneConstraintBase(); // 1579
	CUtlString::CUtlString(); // 1579
	CUtlString::CUtlString(); // 1579
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 1579
	CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> >::CUtlVector(); // 1579
	RbfMatrix::RbfMatrix(); // 294
	CInterpolateRbf::CInterpolateRbf(); // 345
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 345
	CInterpolateRbfTyped<Vector>::CInterpolateRbfTyped(); // 1571
	IInterpolateRbf::IInterpolateRbf(); // 1578
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 1579
} /* size: 294, inline expansions: 34 (662 bytes) */

// <05405823> modellib/boneconstraints.cpp:1577
void CBoneConstraintPoseSpaceMorph::CBoneConstraintPoseSpaceMorph()
{
} /* size: 0 */

// <05404CEC> modellib/boneconstraints.cpp:1585
// variable: 1
// function calls: 55
void CBoneConstraintPoseSpaceMorph::~CBoneConstraintPoseSpaceMorph()
{
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1798
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 345
	RbfMatrix::~RbfMatrix(); // 294
	CInterpolateRbf::~CInterpolateRbf(); // 345
	CInterpolateRbfTyped<Vector>::~CInterpolateRbfTyped(); // 1571
	IInterpolateRbf::~IInterpolateRbf(); // 1587
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 1588
	CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int>::Purge(); // 903
	CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int>::Purge(); // 1799
	CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> >::Purge(); // 560
	ValidateAlignment<CBoneConstraintPoseSpaceMorph::Input_t>(void); // 508
	CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int>::Purge(); // 510
	CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> >::~CUtlVector(); // 1588
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 1588
	CUtlString::~CUtlString(); // 1588
	CUtlString::~CUtlString(); // 1588
	CVarBitVecBase<short unsigned int, 32>::FreeInts(); // 1342
	CVarBitVecBase<short unsigned int, 32>::~CVarBitVecBase(); // 914
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::~CBitVecT(); // 1207
	CVarBitVecT<short unsigned int, 32>::~CVarBitVecT(); // 1220
	CVarBitVec::~CVarBitVec(); // 137
	CBoneConstraintBase::~CBoneConstraintBase(); // 1588
} /* size: 388, inline expansions: 51 (1169 bytes) */

// <05404C85> modellib/boneconstraints.cpp:1585
void CBoneConstraintPoseSpaceMorph::~CBoneConstraintPoseSpaceMorph()
{
} /* size: 36 */

// <05402D4B> modellib/boneconstraints.cpp:1592
// variables: 42
// function calls: 127
void CBoneConstraintPoseSpaceMorph::Compute(const CModel* pModel, CTransform* pWorldTransformsInOut, float* pFlexControlsInOut, const uint32* pBoneBitVec)
{
	BoneConstraintResult_t eResult; // 1597
	const CTransform& mWorld; // 1603
	const CTransform& mWorldParent; // 1604
	CTransform mWorldParentInv; // 1605
	CTransform mLocal; // 1606
	const Vector  vDriver; // 1608
	const int  nOutputCount; // 1610
	CUtlVectorFixedGrowableCompat<float, 16> solutionWeights; // 1612
	CUtlVectorFixedGrowable<float, 16> outputWeights; // 1613
	{
		const int  nInputCount; // 1619
		{
			int nInput; // 1622
			{
				const float& flInputWeight; // 1624
				{
					int nOutput; // 1626
					CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int>::operator[](
							int i);  // 595
					operator[](const CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int this,
							int i);  // 1628
					CUtlMemory<float, int>::operator[](
							int i);  // 595
					CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
							int i);  // 1628
					CUtlMemory<float, int>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 16, int> >::operator[](
							int i);  // 1628
				}
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 1624
			}
		}
		{
			int nOutput; // 1634
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 16, int> >::operator[](
					int i);  // 1636
			Clamp<float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 1636
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1636
		}
		{
			int nOutput; // 1641
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 16, int> >::operator[](
					int i);  // 1643
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1643
		}
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1619
		Count(const CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int this); // 1620
		CBoneConstraintPoseSpaceMorph::GetClamp(); // 1632
	}
	CBoneConstraintBase::IsValid(); // 1599
	QuaternionAligned::operator fltx4(); // 471
	VectorAligned::operator fltx4(); // 471
	QuaternionAligned::operator fltx4(); // 471
	VectorAligned::operator fltx4(); // 471
	CTransform::operator*(
			const CTransform& rhs);  // 1606
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
	AlignedByteArrayExplicit_t<16, float, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<16, float>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<16, float, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<float, 16, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 16, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 16, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<float, 16>::CUtlVectorFixedGrowable(
				int growSize);  // 1613
	VectorAligned::operator fltx4(); // 417
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3341
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3345
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
			const VectorAligned& v);  // 419
	{
		fltx4 x000; // 1010
		fltx4 y000; // 1011
		fltx4 z000; // 1012
		fltx4 x0y0; // 1013
		_mm_load_ss(const float* __P); // 1012
		_mm_load_ss(const float* __P); // 1010
		_mm_load_ss(const float* __P); // 1011
		_mm_movelh_ps(__m128 __A,
				__m128 __B);  // 1013
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1014
	}
	LoadUnaligned3SIMD<>(const void* pSIMD); // 419
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 417
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 419
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 420
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 421
	Vector::Vector(); // 422
	_mm_store_ss(float* __P,
			__m128 __A);  // 468
	StoreUnaligned3SIMD<>(float* pSIMD,
				const fltx4& a);  // 423
	CTransform::TransformVector(
			const Vector& v0);  // 1608
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1610
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 538
	CUtlMemory<float, int>::CUtlMemory(
			float* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 535
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			float* pMemory,
			int allocationCount,
			int initialCount,
			bool bGrowable);  // 420
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(
			float* pMemory,
			int allocationCount,
			int initialCount,
			bool bGrowable);  // 495
	AlignedByteArrayExplicit_t<16, float, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<16, float>::AlignedByteArray_t(); // 495
	AlignedByteArrayExplicit_t<16, float, 4>::Base(); // 497
	CUtlVectorFixedGrowableCompat<float, 16>::CUtlVectorFixedGrowableCompat(
					int growSize);  // 1612
	{
		int i; // 1554
		CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 16, int> >::Count(); // 1554
		CUtlMemory<float, int>::operator[](
				int i);  // 602
		CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 16, int> >::Element(
			int i);  // 1556
	}
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 16, int> >::FillWithValue(
			const float& src);  // 1615
	CUtlMemoryFixedGrowable_Base<float, int>::Purge_FixedGrowable(
				float* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<float, int>::Purge_FixedGrowable(
				float* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<16, float, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<float, 16, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 16, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 16, int> >::Base(); // 368
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 16, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 16, int> >::Purge(); // 560
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 510
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<float, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<float, 16, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 16, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<float, 16>::~CUtlVectorFixedGrowable(); // 1652
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 489
	CUtlVectorFixedGrowableCompat<float, 16>::~CUtlVectorFixedGrowableCompat(); // 1652
} /* size: 1119, variables: 9, inline expansions: 75 (1548 bytes) */

// <05402487> modellib/boneconstraints.cpp:1656
// variables: 8
// function calls: 26
void CBoneConstraintPoseSpaceMorph::Finalize(const CModel* pModel)
{
	const int  nOutputCount; // 1666
	const int  nBoneCount; // 1671
	const AttachmentHandle_t  hAttachment; // 1683
	const int  nAttachmentBoneCount; // 1687
	float flAttachmentWeight; // 1691
	QAngle qaAttachmentOffset; // 1692
	{
		int nOutput; // 1696
		{
			const LocalFlexController_t  nFlexControl; // 1698
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
					int i);  // 1698
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 1698
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1702
		}
	}
	CBoneConstraintBase::IsFinalized(); // 1658
	CBoneConstraintBase::IsValid(); // 1659
	Count(const CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int this); // 135
	IsEmpty(const CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int this); // 1663
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1666
	CUtlString::Get(); // 1675
	CUtlString::Get(); // 1683
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 1683
	AttachmentHandle_t::operator==(
			const AttachmentHandle_t& other);  // 1684
	QAngle::QAngle(); // 1692
	CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
	{
	}
	CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
	Bitvec_Set(uint32* pBits,
			int nBitNum);  // 1480
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
		int bitNum);  // 1706
	CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
	{
	}
	CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
	Bitvec_Set(uint32* pBits,
			int nBitNum);  // 1480
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
		int bitNum);  // 1709
} /* size: 0, variables: 6, inline expansions: 20 (412 bytes) */

// <0541CA8F> modellib/boneconstraints.cpp:1721
void CBoneConstraintPoseSpaceMorph::GetClamp()
{
} /* size: 0 */

// <05402430> modellib/boneconstraints.cpp:1728
void CBoneConstraintPoseSpaceMorph::SetClamp(bool bClamp)
{
} /* size: 0 */

// <0541CAB8> modellib/boneconstraints.cpp:1735
// function call: 1
void CBoneConstraintPoseSpaceMorph::GetFalloff()
{
	CInterpolateRbf::GetFalloff(); // 1737
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05402417> modellib/boneconstraints.cpp:1735
void CBoneConstraintPoseSpaceMorph::GetFalloff()
{
} /* size: 0 */

// <0541CB12> modellib/boneconstraints.cpp:1742
// function call: 1
void CBoneConstraintPoseSpaceMorph::SetFalloff(float flFalloff)
{
	{
	}
	CInterpolateRbf::SetFalloff(
			float flFalloff);  // 1744
} /* size: 0, inline expansions: 1 (0 bytes) */

// <054023F1> modellib/boneconstraints.cpp:1742
void CBoneConstraintPoseSpaceMorph::SetFalloff(float flFalloff)
{
} /* size: 0 */

// <0541CE80> modellib/boneconstraints.cpp:1749
// function calls: 3
void GetRbfTypeCount(void)
{
	CUtlVectorBase<char const::Count(); // 500
	GetRbfTypeNames(void); // 1751
	CUtlVectorBase<char const::Count(); // 1751
} /* size: 0, inline expansions: 3 (0 bytes) */

// <054023EA> modellib/boneconstraints.cpp:1749
void GetRbfTypeCount(void)
{
} /* size: 0 */

// <05402215> modellib/boneconstraints.cpp:1756
// variable: 1
// function calls: 5
void RbfTypeName(int nRbfType)
{
	const CUtlVector<char const*, CUtlMemory<char const*, int> >& rbfTypeNames; // 1758
	CUtlVectorBase<char const::Count(); // 500
	GetRbfTypeNames(void); // 1758
	CUtlVectorBase<char const::IsValidIndex(
			int i);  // 1759
	CUtlMemory<char const::operator[](
			int i);  // 595
	CUtlVectorBase<char const::operator[](
			int i);  // 1759
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <0541CB9B> modellib/boneconstraints.cpp:1764
// function call: 1
void CBoneConstraintPoseSpaceMorph::GetRbfType()
{
	CInterpolateRbf::GetRbfType(); // 1766
} /* size: 0, inline expansions: 1 (0 bytes) */

// <054021FC> modellib/boneconstraints.cpp:1764
void CBoneConstraintPoseSpaceMorph::GetRbfType()
{
} /* size: 0 */

// <0541CBF5> modellib/boneconstraints.cpp:1771
// function call: 1
void CBoneConstraintPoseSpaceMorph::SetRbfType(int nRbfType)
{
	{
	}
	CInterpolateRbf::SetRbfType(
			RbfType_t eRbfType);  // 1776
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0541B906> modellib/boneconstraints.cpp:1771
// function call: 1
void CBoneConstraintPoseSpaceMorph::SetRbfType()
{
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 1773
	}
} /* size: 16 */

// <05402160> modellib/boneconstraints.cpp:1771
void CBoneConstraintPoseSpaceMorph::SetRbfType(int nRbfType)
{
	{
	}
} /* size: 0 */

// <05402101> modellib/boneconstraints.cpp:1781
// function call: 1
void CBoneConstraintPoseSpaceMorph::GetBoneName()
{
	CUtlString::Get(); // 1783
} /* size: 0, inline expansions: 1 (0 bytes) */

// <054020DC> modellib/boneconstraints.cpp:1788
void CBoneConstraintPoseSpaceMorph::SetBoneName(const char* pszBoneName)
{
} /* size: 0 */

// <0540207D> modellib/boneconstraints.cpp:1795
// function call: 1
void CBoneConstraintPoseSpaceMorph::GetAttachmentName()
{
	CUtlString::Get(); // 1797
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05401FE3> modellib/boneconstraints.cpp:1802
// function call: 1
void CBoneConstraintPoseSpaceMorph::SetAttachmentName(const char* pszAttachmentName)
{
	CUtlString::operator=(
			const char* src);  // 1804
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05401F84> modellib/boneconstraints.cpp:1809
// function call: 1
void CBoneConstraintPoseSpaceMorph::GetOutputCount()
{
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1811
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05401E30> modellib/boneconstraints.cpp:1816
// variable: 1
// function calls: 5
void CBoneConstraintPoseSpaceMorph::ClearOutputs()
{
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1818
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05401D65> modellib/boneconstraints.cpp:1823
// function calls: 3
void CBoneConstraintPoseSpaceMorph::GetOutputMorph(int nOutputMorph)
{
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
			int i);  // 1825
	CUtlString::Get(); // 1825
} /* size: 0, inline expansions: 3 (0 bytes) */

// <05401338> modellib/boneconstraints.cpp:1830
// variables: 8
// function calls: 43
void CBoneConstraintPoseSpaceMorph::AddOutputMorph(const char* pszMorphControl)
{
	const int  nOutputCount; // 1835
	{
		{
			int i; // 221
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 221
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 609
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 223
			operator()(const class* __closure,
					const CUtlString& s); // 223
		}
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::FindMatching<CBoneConstraintPoseSpaceMorph::AddOutputMorph(
															class& f);  // 1832
	}
	{
		Input_t& input; // 1836
		CUtlVector<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> >& __for_range; // 40416
		iterator __for_begin; // 56462
		iterator __for_end; // 56462
		{
			int nDelta; // 1839
			CUtlMemory<float, int>::IsGrowable(); // 881
			CUtlMemory<float, int>::IsExternallyAllocated(); // 888
			CUtlMemory<float, int>::EnsureCapacity(
					int num);  // 1006
			CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 1024
			CUtlVectorBase<float, CUtlMemory<float, int> >::EnsureCapacity(
					int num);  // 1838
			CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveMultipleFromTail(
						int num);  // 1850
			CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1839
			CUtlMemory<float, int>::NumAllocated(); // 1247
			CUtlMemory<float, int>::operator[](
					int i);  // 602
			CUtlVectorBase<float, CUtlMemory<float, int> >::Element(
				int i);  // 1252
			Construct<float, float>(float* pMemory); // 1252
			CUtlMemory<float, int>::Base(); // 112
			CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 368
			CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<float, CUtlMemory<float, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<float, CUtlMemory<float, int> >::AddToTail(
					float& src);  // 1845
		}
		CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int>::Base(); // 112
		CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> >::Base(); // 102
		CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> >::begin(); // 1836
		Count(const CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int this); // 104
		CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> >::end(); // 1836
	}
	CUtlString::CUtlString(
			const char* pString);  // 1835
	CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CUtlString, int>::IsGrowable(); // 823
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CUtlString, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
			int num);  // 1249
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 1514
	Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
		int i);  // 1252
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
			CUtlString& src);  // 1835
	CUtlString::~CUtlString(); // 1835
} /* size: 0, variables: 1, inline expansions: 17 (0 bytes) */

// <01323F79> modellib/boneconstraints.cpp:1830
// variables: 8
// function calls: 43
void CBoneConstraintPoseSpaceMorph::AddOutputMorph(const char* pszMorphControl)
{
	const int  nOutputCount; // 1835
	{
		{
			int i; // 221
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 221
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 609
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 223
			operator()(const class* __closure,
					const CUtlString& s); // 223
		}
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::FindMatching<CBoneConstraintPoseSpaceMorph::AddOutputMorph(
															class& f);  // 1832
	}
	{
		Input_t& input; // 1836
		CUtlVector<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> >& __for_range; // 54918
		iterator __for_begin; // 5428
		iterator __for_end; // 5428
		{
			int nDelta; // 1839
			CUtlMemory<float, int>::IsGrowable(); // 881
			CUtlMemory<float, int>::IsExternallyAllocated(); // 888
			CUtlMemory<float, int>::EnsureCapacity(
					int num);  // 1006
			CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 1024
			CUtlVectorBase<float, CUtlMemory<float, int> >::EnsureCapacity(
					int num);  // 1838
			CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveMultipleFromTail(
						int num);  // 1850
			CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1839
			CUtlMemory<float, int>::NumAllocated(); // 1247
			CUtlMemory<float, int>::operator[](
					int i);  // 602
			CUtlVectorBase<float, CUtlMemory<float, int> >::Element(
				int i);  // 1252
			Construct<float, float>(float* pMemory); // 1252
			CUtlMemory<float, int>::Base(); // 112
			CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 368
			CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<float, CUtlMemory<float, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<float, CUtlMemory<float, int> >::AddToTail(
					float& src);  // 1845
		}
		CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int>::Base(); // 112
		CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> >::Base(); // 102
		CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> >::begin(); // 1836
		Count(const CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int this); // 104
		CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> >::end(); // 1836
	}
	CUtlString::CUtlString(
			const char* pString);  // 1835
	CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CUtlString, int>::IsGrowable(); // 823
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CUtlString, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
			int num);  // 1249
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 1514
	Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
		int i);  // 1252
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
			CUtlString& src);  // 1835
	CUtlString::~CUtlString(); // 1835
} /* size: 0, variables: 1, inline expansions: 17 (0 bytes) */

// <054012D9> modellib/boneconstraints.cpp:1859
// function call: 1
void CBoneConstraintPoseSpaceMorph::GetInputCount()
{
	Count(const CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int this); // 1861
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0540128D> modellib/boneconstraints.cpp:1866
void CBoneConstraintPoseSpaceMorph::ClearInputs()
{
} /* size: 0 */

// <05401187> modellib/boneconstraints.cpp:1873
// function calls: 4
void CBoneConstraintPoseSpaceMorph::GetInputWeightCount(int nInput)
{
	IsValidIndex(const CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int this,
			int i);  // 1875
	CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int this,
			int i);  // 1875
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1875
} /* size: 0, inline expansions: 4 (0 bytes) */

// <0540108B> modellib/boneconstraints.cpp:1880
// function calls: 3
void CBoneConstraintPoseSpaceMorph::GetInputValue(int nInput)
{
	IsValidIndex(const CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int this,
			int i);  // 1882
	CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int this,
			int i);  // 1882
} /* size: 0, inline expansions: 3 (0 bytes) */

// <05400ED4> modellib/boneconstraints.cpp:1887
// variable: 1
// function calls: 6
void CBoneConstraintPoseSpaceMorph::GetInputValueWeight(int nInput, int nOutput)
{
	{
		const CUtlVector<float, CUtlMemory<float, int> >& outputWeightList; // 1891
		CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int this,
				int i);  // 1891
		CUtlVectorBase<float, CUtlMemory<float, int> >::IsValidIndex(
				int i);  // 1892
		CUtlMemory<float, int>::operator[](
				int i);  // 595
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 1894
	}
	IsValidIndex(const CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int this,
			int i);  // 1889
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05400821> modellib/boneconstraints.cpp:1903
// variables: 3
// function calls: 30
void CBoneConstraintPoseSpaceMorph::AddInputValue(const Vector& vInput)
{
	const int  nOutputCount; // 1905
	Input_t* pInput; // 1907
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1905
	CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int>::NumAllocated(); // 1143
	CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int>::Base(); // 112
	CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> >::Base(); // 368
	CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int>::IsGrowable(); // 823
	CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> >::Element(
		int i);  // 1148
	Vector::Vector(); // 438
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 438
	Input_t::Input_t(); // 1479
	Construct<CBoneConstraintPoseSpaceMorph::Input_t>(Input_t* pMemory); // 1148
	CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> >::AddToTail(); // 1156
	CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> >::Element(
		int i);  // 1156
	CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> >::AddToTailGetPtr(); // 1907
	Vector::operator=(
			const Vector& vOther);  // 1908
	{
		int i; // 1554
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1554
		CUtlMemory<float, int>::operator[](
				int i);  // 602
		CUtlVectorBase<float, CUtlMemory<float, int> >::Element(
			int i);  // 1556
	}
	CUtlVectorBase<float, CUtlMemory<float, int> >::FillWithValue(
			const float& src);  // 1910
	Count(const CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int this); // 1912
} /* size: 0, variables: 2, inline expansions: 27 (0 bytes) */

// <054005CA> modellib/boneconstraints.cpp:1917
// variables: 3
// function calls: 7
void CBoneConstraintPoseSpaceMorph::SetInputValueWeight(int nInput, int nOutput, float flWeight)
{
	Input_t& input; // 1925
	const char   __FUNCTION__; // 32908
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1928
	}
	IsValidIndex(const CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int this,
			int i);  // 1919
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::IsValidIndex(
			int i);  // 1922
	CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> >::operator[](
			int i);  // 1925
	CUtlVectorBase<float, CUtlMemory<float, int> >::IsValidIndex(
			int i);  // 1928
	CUtlMemory<float, int>::operator[](
			int i);  // 588
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 1930
} /* size: 0, variables: 2, inline expansions: 7 (0 bytes) */

// <020BE740> modellib/boneconstraints.cpp:1917
// variables: 3
// function calls: 7
void CBoneConstraintPoseSpaceMorph::SetInputValueWeight(int nInput, int nOutput, float flWeight)
{
	Input_t& input; // 1925
	const char   __FUNCTION__; // 12535
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1928
	}
	IsValidIndex(const CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int this,
			int i);  // 1919
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::IsValidIndex(
			int i);  // 1922
	CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> >::operator[](
			int i);  // 1925
	CUtlVectorBase<float, CUtlMemory<float, int> >::IsValidIndex(
			int i);  // 1928
	CUtlMemory<float, int>::operator[](
			int i);  // 588
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 1930
} /* size: 0, variables: 2, inline expansions: 7 (0 bytes) */

// <0540005E> modellib/boneconstraints.cpp:1937
// variables: 5
// function calls: 24
void CBoneConstraintPoseSpaceMorph::Finalize()
{
	{
		const Input_t& input; // 1941
		CUtlVector<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> >& __for_range; // 40416
		iterator __for_begin; // 56462
		iterator __for_end; // 56462
		CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int>::Base(); // 112
		CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> >::Base(); // 102
		CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> >::begin(); // 1941
		Count(const CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int this); // 104
		CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> >::end(); // 1941
		{
			int i; // 1531
			Vector::operator==(
					const Vector& src);  // 1533
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1531
			CUtlMemory<Vector, int>::operator[](
					int i);  // 609
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
				int i);  // 1533
		}
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Find(
			const Vector& src);  // 1563
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::HasElement(
				const Vector& src);  // 673
		CInterpolateRbfTyped<Vector>::IsSampleValid(
				const Vector& v);  // 628
		CUtlMemory<Vector, int>::NumAllocated(); // 1196
		CUtlMemory<Vector, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
			int i);  // 1201
		CopyConstruct<Vector>(Vector* pMemory,
					const Vector& src);  // 1201
		CUtlMemory<Vector, int>::Base(); // 112
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
				const Vector& src);  // 631
		CInterpolateRbfTyped<Vector>::AddSample(
				const Vector& v);  // 1943
	}
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 648
	CInterpolateRbfTyped<Vector>::ClearSamples(); // 1939
} /* size: 285, inline expansions: 2 (14 bytes) */

// <01322C9F> modellib/boneconstraints.cpp:1937
// variables: 5
// function calls: 24
void CBoneConstraintPoseSpaceMorph::Finalize()
{
	{
		const Input_t& input; // 1941
		CUtlVector<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> >& __for_range; // 54918
		iterator __for_begin; // 5428
		iterator __for_end; // 5428
		CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int>::Base(); // 112
		CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> >::Base(); // 102
		CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> >::begin(); // 1941
		Count(const CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int this); // 104
		CUtlVectorBase<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> >::end(); // 1941
		{
			int i; // 1531
			Vector::operator==(
					const Vector& src);  // 1533
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1531
			CUtlMemory<Vector, int>::operator[](
					int i);  // 609
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
				int i);  // 1533
		}
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Find(
			const Vector& src);  // 1563
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::HasElement(
				const Vector& src);  // 673
		CInterpolateRbfTyped<Vector>::IsSampleValid(
				const Vector& v);  // 628
		CUtlMemory<Vector, int>::NumAllocated(); // 1196
		CUtlMemory<Vector, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
			int i);  // 1201
		CopyConstruct<Vector>(Vector* pMemory,
					const Vector& src);  // 1201
		CUtlMemory<Vector, int>::Base(); // 112
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
				const Vector& src);  // 631
		CInterpolateRbfTyped<Vector>::AddSample(
				const Vector& v);  // 1943
	}
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 648
	CInterpolateRbfTyped<Vector>::ClearSamples(); // 1939
} /* size: 285, inline expansions: 2 (14 bytes) */

// <053FF7B4> modellib/boneconstraints.cpp:1951
// function calls: 34
void CBoneConstraintPoseSpaceMorph::TransferPostSaveFn(CKV3TransferSaveContext* pContext)
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
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 772
	SaveValue<int>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const int32& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<int>(
				const int& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<int>(
				CKV3MemberName memberNameAndHash,
				const int& sourceValue);  // 1953
	CInterpolateRbf::GetRbfType(); // 1766
	CBoneConstraintPoseSpaceMorph::GetRbfType(); // 1953
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<11>(
				const char& str);  // 1953
	CInterpolateRbf::GetFalloff(); // 1737
	CBoneConstraintPoseSpaceMorph::GetFalloff(); // 1954
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
				KeyValues3Type_t newType);  // 221
	KeyValues3::SetValueFloat(
			float value);  // 776
	SaveValue<float>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const float& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<float>(
				const float& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<float>(
				CKV3MemberName memberNameAndHash,
				const float& sourceValue);  // 1954
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<12>(
				const char& str);  // 1954
} /* size: 421, inline expansions: 34 (1147 bytes) */

// <053FEDE1> modellib/boneconstraints.cpp:1959
// variables: 4
// function calls: 38
void CBoneConstraintPoseSpaceMorph::TransferPostLoadFn(CKV3TransferLoadContext* pContext)
{
	{
		const KeyValues3* pRbfType; // 1961
		{
			int nRbfType; // 1963
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 696
			{
			}
			KV3Helper_StringToNumber<int>(const char* pString); // 715
			KeyValues3::GetValueAsNumeric<int>(); // 694
			KeyValues3::GetValueAsNumeric<int>(); // 184
			KeyValues3::GetValueInt(); // 772
			LoadValue<int>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					int32& value);  // 1548
			CKV3TransferLoadContext::LoadValueDirect<int>(
						int& destValue,
						const KeyValues3* pLoadFromMember);  // 1964
			{
			}
			CInterpolateRbf::SetRbfType(
					RbfType_t eRbfType);  // 1776
			CBoneConstraintPoseSpaceMorph::SetRbfType(
					int nRbfType);  // 1965
		}
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
				const KeyValues3* pDefaultValue);  // 1961
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 13
		CKV3MemberName::CKV3MemberName<11>(
					const char& str);  // 1961
	}
	{
		const KeyValues3* pFalloff; // 1968
		{
			float flFalloff; // 1970
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 696
			{
			}
			KV3Helper_StringToNumber<float>(const char* pString); // 715
			KeyValues3::GetValueAsNumeric<float>(); // 694
			KeyValues3::GetValueAsNumeric<float>(); // 199
			KeyValues3::GetValueFloat(); // 776
			LoadValue<float>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					float& value);  // 1548
			CKV3TransferLoadContext::LoadValueDirect<float>(
						float& destValue,
						const KeyValues3* pLoadFromMember);  // 1971
			{
			}
			CInterpolateRbf::SetFalloff(
					float flFalloff);  // 1744
			CBoneConstraintPoseSpaceMorph::SetFalloff(
					float flFalloff);  // 1972
		}
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 13
		CKV3MemberName::CKV3MemberName<12>(
					const char& str);  // 1968
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
				const KeyValues3* pDefaultValue);  // 1968
	}
} /* size: 0 */

// <053FE4DD> modellib/boneconstraints.cpp:1978
// function calls: 33
void Input_t::KV3TransferSave(CKV3TransferSaveContext* pContext)
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
	SaveValue<Vector>(CKV3TransferSaveContext* pContext,
				KeyValues3* pSaveToValue,
				const Vector& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<Vector>(
				const Vector& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<Vector>(
					CKV3MemberName memberNameAndHash,
					const Vector& sourceValue);  // 1980
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<13>(
				const char& str);  // 1980
	CKV3MemberName::CKV3MemberName<19>(
				const char& str);  // 1981
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
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 830
	AlignValue<unsigned int>(unsigned int val,
				uintp alignment);  // 225
	CKV3TransferSaveContext::NotePooledAllocation(
				uint nBytes);  // 830
	NotePooledAllocation(CKV3TransferSaveContext* pSaveContext,
				const Array_t& arr);  // 604
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 812
	GetCount(const Array_t& arr); // 605
	CUtlMemory<float, int>::Base(); // 113
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 842
	GetBase(const Array_t& arr); // 606
	SaveBlittableArrayElements(CKV3TransferSaveContext* pContext,
					KeyValues3* pSaveToValue,
					int nCount,
					const float* pValues);  // 606
	SaveValue<CUtlVector<float> >(CKV3TransferSaveContext* pContext,
					KeyValues3* pSaveToValue,
					const CUtlVector<float, CUtlMemory<float, int> >& value,
					type *);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<CUtlVector<float> >(
						const CUtlVector<float, CUtlMemory<float, int> >& sourceValue,
						KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<CUtlVector<float> >(
						CKV3MemberName memberNameAndHash,
						const CUtlVector<float, CUtlMemory<float, int> >& sourceValue);  // 1981
} /* size: 393, inline expansions: 33 (1051 bytes) */

// <053FDAB7> modellib/boneconstraints.cpp:1986
// function calls: 38
void Input_t::KV3TransferLoad(CKV3TransferLoadContext* pContext)
{
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
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	KeyValues3::GetValueFloatArray<3>(
				float* pOutValues);  // 1341
	LoadValue<Vector>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				Vector& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<Vector>(
				Vector& destValue,
				const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<Vector>(
						CKV3MemberName memberNameAndHash,
						Vector& destValue);  // 1988
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<13>(
				const char& str);  // 1988
	CKV3MemberName::CKV3MemberName<19>(
				const char& str);  // 1989
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
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 255
	KeyValues3::IsArray(); // 612
	CKV3TransferLoadContext::AllocatePooledMemory(
				uint nElementSize,
				uint nElementCount);  // 820
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 823
	CUtlVectorBase<float, CUtlMemory<float, int> >::ConvertToExternalMemory(
				float* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 823
	SetCount(CKV3TransferLoadContext* pLoadContext,
		Array_t& arr,
		int nCount);  // 613
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 812
	GetCount(const Array_t& arr); // 614
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 838
	GetBase(Array_t& arr); // 618
	LoadBlittableArrayElements(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					int nCount,
					float* pValues);  // 618
	LoadValue<CUtlVector<float> >(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					CUtlVector<float, CUtlMemory<float, int> >& value,
					type *);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<CUtlVector<float> >(
						CUtlVector<float, CUtlMemory<float, int> >& destValue,
						const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<CUtlVector<float> >(
							CKV3MemberName memberNameAndHash,
							CUtlVector<float, CUtlMemory<float, int> >& destValue);  // 1989
} /* size: 375, inline expansions: 38 (1142 bytes) */

// <053FD77C> modellib/boneconstraints.cpp:1994
// function calls: 14
void CBoneConstraintPoseSpaceBone::CBoneConstraintPoseSpaceBone()
{
	CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::ResetDbgInfo(); // 530
	CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::CUtlVector(); // 1995
	RbfMatrix::RbfMatrix(); // 294
	CInterpolateRbf::CInterpolateRbf(); // 345
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 345
	CInterpolateRbfTyped<Vector>::CInterpolateRbfTyped(); // 1571
	IInterpolateRbf::IInterpolateRbf(); // 1995
} /* size: 167, inline expansions: 14 (320 bytes) */

// <053FD763> modellib/boneconstraints.cpp:1994
void CBoneConstraintPoseSpaceBone::CBoneConstraintPoseSpaceBone()
{
} /* size: 0 */

// <053FCC7F> modellib/boneconstraints.cpp:2001
// variable: 1
// function calls: 55
void CBoneConstraintPoseSpaceBone::~CBoneConstraintPoseSpaceBone()
{
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1798
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 345
	RbfMatrix::~RbfMatrix(); // 294
	CInterpolateRbf::~CInterpolateRbf(); // 345
	CInterpolateRbfTyped<Vector>::~CInterpolateRbfTyped(); // 1571
	IInterpolateRbf::~IInterpolateRbf(); // 2003
	CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>::Purge(); // 903
	CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>::Purge(); // 1799
	CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::Purge(); // 560
	ValidateAlignment<CBoneConstraintPoseSpaceBone::Input_t>(void); // 508
	CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>::Purge(); // 510
	CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::~CUtlVector(); // 2004
	{
		int i; // 1721
		CUtlMemory<CConstraintTarget, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 42
		CConstraintTarget::~CConstraintTarget(); // 1526
		Destruct<CConstraintTarget>(CConstraintTarget* pMemory); // 1723
	}
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::RemoveAll(); // 1798
	CUtlMemory<CConstraintTarget, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CConstraintTarget, int>::Purge(); // 903
	CUtlMemory<CConstraintTarget, int>::Purge(); // 1799
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Purge(); // 560
	ValidateAlignment<CConstraintTarget>(void); // 508
	CUtlMemory<CConstraintTarget, int>::Purge(); // 510
	CUtlMemory<CConstraintTarget, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::~CUtlVector(); // 174
	CUtlMemory<CConstraintSlave, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CConstraintSlave, int>::Purge(); // 903
	CUtlMemory<CConstraintSlave, int>::Purge(); // 1799
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Purge(); // 560
	ValidateAlignment<CConstraintSlave>(void); // 508
	CUtlMemory<CConstraintSlave, int>::Purge(); // 510
	CUtlMemory<CConstraintSlave, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::~CUtlVector(); // 174
	CUtlString::~CUtlString(); // 174
	CVarBitVecBase<short unsigned int, 32>::FreeInts(); // 1342
	CVarBitVecBase<short unsigned int, 32>::~CVarBitVecBase(); // 914
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::~CBitVecT(); // 1207
	CVarBitVecT<short unsigned int, 32>::~CVarBitVecT(); // 1220
	CVarBitVec::~CVarBitVec(); // 137
	CBoneConstraintBase::~CBoneConstraintBase(); // 174
	CBaseConstraint::~CBaseConstraint(); // 2004
} /* size: 380, inline expansions: 50 (1343 bytes) */

// <053FCC18> modellib/boneconstraints.cpp:2001
void CBoneConstraintPoseSpaceBone::~CBoneConstraintPoseSpaceBone()
{
} /* size: 36 */

// <053FA0CB> modellib/boneconstraints.cpp:2008
// variables: 51
// function calls: 182
void CBoneConstraintPoseSpaceBone::Compute(const CModel* pModel, CTransform* pWorldTransformsInOut, float* pFlexControlsInOut, const uint32* pBoneBitVec)
{
	BoneConstraintResult_t eResult; // 2013
	const CConstraintTarget& inputTarget; // 2015
	const CTransform& mWorld; // 2019
	const CTransform& mWorldParent; // 2020
	CTransform mWorldParentInv; // 2021
	CTransform mLocal; // 2022
	const Vector  vOffset; // 2024
	const Vector  vDriver; // 2025
	const int  nOutputCount; // 2027
	CUtlVectorFixedGrowableCompat<float, 16> solutionWeights; // 2029
	CUtlVectorFixedGrowable<float, 16> outputWeights; // 2030
	{
		const int  nInputCount; // 2036
		{
			CUtlVectorFixedGrowableCompat<QuaternionAligned, 16> qList; // 2039
			{
				int nOutput; // 2042
				{
					VectorAligned v; // 2044
					const QuaternionAligned  q; // 2053
					const CTransform  mLocalChildren; // 2055
					{
						int nInput; // 2046
						{
							const CTransform& t; // 2048
							CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>::operator[](
									int i);  // 595
							operator[](const CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>  this,
									int i);  // 2048
							CUtlMemory<CTransform, int>::operator[](
									int i);  // 595
							CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
									int i);  // 2048
							QuaternionAligned::operator=(
									const QuaternionAligned& vOther);  // 2049
							CUtlMemory<QuaternionAligned, int>::operator[](
									int i);  // 588
							CUtlVectorBase<QuaternionAligned, CUtlMemory<QuaternionAligned, int> >::operator[](
									int i);  // 2049
							CUtlMemory<float, int>::operator[](
									int i);  // 588
							CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
									int i);  // 2050
							{
								fltx4 retVal; // 1134
								_mm_set1_ps(float __F); // 1135
							}
							ReplicateX4<>(float flValue); // 268
							{
								fltx4 retVal; // 1639
								_mm_mul_ps(__m128 __A,
										__m128 __B);  // 1640
							}
							MulSIMD<>(const fltx4& a,
									const fltx4& b);  // 268
							VectorAligned::VectorAligned(
									fltx4 rhs);  // 268
							VectorAligned::operator*(
									vec_t s);  // 427
							operator*(float fl,
									const VectorAligned& v);  // 2050
							{
								fltx4 retVal; // 1593
								_mm_add_ps(__m128 __A,
										__m128 __B);  // 1594
							}
							AddSIMD<>(const fltx4& a,
									const fltx4& b);  // 208
							VectorAligned::operator+=(
									const VectorAligned& v);  // 2050
						}
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
							const Vector& rhs);  // 2044
					CUtlMemory<QuaternionAligned, int>::Base(); // 112
					CUtlVectorBase<QuaternionAligned, CUtlMemory<QuaternionAligned, int> >::Base(); // 2053
					CUtlMemory<float, int>::Base(); // 112
					CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 2053
					QuaternionAligned::w(); // 41
					Quaternion::Quaternion(
							vec_t ix,
							vec_t iy,
							vec_t iz,
							vec_t iw);  // 41
					QuaternionAligned::operator Quaternion(); // 2055
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 40
					VectorAligned::operator Vector(); // 2055
					VectorAligned::VectorAligned(); // 33
					QuaternionAligned::Init(
						vec_t X,
						vec_t Y,
						vec_t Z,
						vec_t W);  // 30
					QuaternionAligned::QuaternionAligned(
								const Quaternion& rhs);  // 33
					VectorAligned::operator=(
							fltx4 src);  // 111
					CTransform::SetPositionAndScale(
								const Vector& v0,
								float flScale);  // 33
					CTransform::CTransform(
							const Vector& v,
							const Quaternion& q,
							float flScale);  // 2055
					CUtlMemory<CConstraintSlave, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::operator[](
							int i);  // 2057
				}
			}
			CUtlMemory<QuaternionAligned, int>::CUtlMemory(
					QuaternionAligned* pMemory,
					int numElements,
					bool bGrowable,
					uint32 nGrowable_GrowSize);  // 535
			CUtlVectorBase<QuaternionAligned, CUtlMemory<QuaternionAligned, int> >::ResetDbgInfo(); // 538
			CUtlVectorBase<QuaternionAligned, CUtlMemory<QuaternionAligned, int> >::CUtlVectorBase(
					QuaternionAligned* pMemory,
					int allocationCount,
					int initialCount,
					bool bGrowable);  // 420
			CUtlVector<QuaternionAligned, CUtlMemory<QuaternionAligned, int> >::CUtlVector(
					QuaternionAligned* pMemory,
					int allocationCount,
					int initialCount,
					bool bGrowable);  // 495
			AlignedByteArrayExplicit_t<16, QuaternionAligned, 16>::AlignedByteArrayExplicit_t(); // 1597
			AlignedByteArray_t<16, QuaternionAligned>::AlignedByteArray_t(); // 495
			AlignedByteArrayExplicit_t<16, QuaternionAligned, 16>::Base(); // 497
			CUtlVectorFixedGrowableCompat<QuaternionAligned, 16>::CUtlVectorFixedGrowableCompat(
							int growSize);  // 2039
			CUtlVectorBase<QuaternionAligned, CUtlMemory<QuaternionAligned, int> >::RemoveMultipleFromTail(
						int num);  // 1323
			CUtlMemory<QuaternionAligned, int>::IsExternallyAllocated(); // 859
			CUtlMemory<QuaternionAligned, int>::IsExternallyAllocated(); // 861
			CUtlMemory<QuaternionAligned, int>::Grow(
				int num);  // 806
			CUtlVectorBase<QuaternionAligned, CUtlMemory<QuaternionAligned, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<QuaternionAligned, CUtlMemory<QuaternionAligned, int> >::GrowMemory(
					int num);  // 784
			CUtlVectorBase<QuaternionAligned, CUtlMemory<QuaternionAligned, int> >::GrowVector(
					int num);  // 1445
			{
				int i; // 1451
			}
			CUtlVectorBase<QuaternionAligned, CUtlMemory<QuaternionAligned, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<QuaternionAligned, CUtlMemory<QuaternionAligned, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<QuaternionAligned, CUtlMemory<QuaternionAligned, int> >::AddMultipleToTail(
						int num);  // 1319
			CUtlVectorBase<QuaternionAligned, CUtlMemory<QuaternionAligned, int> >::SetCount(
				int count);  // 2040
			CUtlMemory<QuaternionAligned, int>::Purge(); // 903
			CUtlMemory<QuaternionAligned, int>::IsExternallyAllocated(); // 905
			CUtlMemory<QuaternionAligned, int>::Purge(); // 1799
			CUtlVectorBase<QuaternionAligned, CUtlMemory<QuaternionAligned, int> >::RemoveAll(); // 1798
			CUtlVectorBase<QuaternionAligned, CUtlMemory<QuaternionAligned, int> >::Purge(); // 560
			ValidateAlignment<QuaternionAligned>(void); // 508
			CUtlMemory<QuaternionAligned, int>::Purge(); // 510
			CUtlMemory<QuaternionAligned, int>::~CUtlMemory(); // 562
			CUtlVectorBase<QuaternionAligned, CUtlMemory<QuaternionAligned, int> >::~CUtlVectorBase(); // 410
			CUtlVector<QuaternionAligned, CUtlMemory<QuaternionAligned, int> >::~CUtlVector(); // 489
			CUtlVectorFixedGrowableCompat<QuaternionAligned, 16>::~CUtlVectorFixedGrowableCompat(); // 2061
		}
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 2036
		Count(const CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> this); // 2037
	}
	CUtlMemory<CConstraintTarget, int>::operator[](
			int i);  // 623
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Head(); // 2015
	QuaternionAligned::operator fltx4(); // 471
	VectorAligned::operator fltx4(); // 471
	QuaternionAligned::operator fltx4(); // 471
	VectorAligned::operator fltx4(); // 471
	CTransform::operator*(
			const CTransform& rhs);  // 2022
	VectorAligned::operator fltx4(); // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 2024
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2024
	VectorAligned::operator fltx4(); // 417
	{
		fltx4 x000; // 1010
		fltx4 y000; // 1011
		fltx4 z000; // 1012
		fltx4 x0y0; // 1013
		_mm_movelh_ps(__m128 __A,
				__m128 __B);  // 1013
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1014
	}
	LoadUnaligned3SIMD<>(const void* pSIMD); // 419
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3341
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3345
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
			const VectorAligned& v);  // 419
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 417
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 419
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 420
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 421
	Vector::Vector(); // 422
	_mm_store_ss(float* __P,
			__m128 __A);  // 468
	StoreUnaligned3SIMD<>(float* pSIMD,
				const fltx4& a);  // 423
	CTransform::TransformVector(
			const Vector& v0);  // 2025
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 538
	CUtlMemory<float, int>::CUtlMemory(
			float* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 535
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			float* pMemory,
			int allocationCount,
			int initialCount,
			bool bGrowable);  // 420
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(
			float* pMemory,
			int allocationCount,
			int initialCount,
			bool bGrowable);  // 495
	AlignedByteArrayExplicit_t<16, float, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<16, float>::AlignedByteArray_t(); // 495
	AlignedByteArrayExplicit_t<16, float, 4>::Base(); // 497
	CUtlVectorFixedGrowableCompat<float, 16>::CUtlVectorFixedGrowableCompat(
					int growSize);  // 2029
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 2027
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
	AlignedByteArrayExplicit_t<16, float, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<16, float>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<16, float, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<float, 16, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 16, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 16, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<float, 16>::CUtlVectorFixedGrowable(
				int growSize);  // 2030
	{
		int i; // 1554
		CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 16, int> >::Count(); // 1554
		CUtlMemory<float, int>::operator[](
				int i);  // 602
		CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 16, int> >::Element(
			int i);  // 1556
	}
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 16, int> >::FillWithValue(
			const float& src);  // 2032
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 16, int> >::RemoveAll(); // 1798
	CUtlMemoryFixedGrowable_Base<float, int>::Purge_FixedGrowable(
				float* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<float, int>::Purge_FixedGrowable(
				float* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<16, float, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<float, 16, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 16, int> >::Base(); // 368
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 16, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 16, int> >::Purge(); // 560
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 510
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<float, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<float, 16, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 16, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<float, 16>::~CUtlVectorFixedGrowable(); // 2065
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 489
	CUtlVectorFixedGrowableCompat<float, 16>::~CUtlVectorFixedGrowableCompat(); // 2065
} /* size: 1432, variables: 11, inline expansions: 81 (1557 bytes) */

// <053F9D5D> modellib/boneconstraints.cpp:2069
// variables: 3
// function calls: 13
void CBoneConstraintPoseSpaceBone::Finalize(const CModel* pModel)
{
	const int  nInputTargetCount; // 2092
	const int  nBoneCount; // 2096
	CConstraintTarget& target; // 2102
	CBoneConstraintBase::IsFinalized(); // 2071
	CBoneConstraintBase::IsValid(); // 2072
	CBaseConstraint::Finalize(
		const CModel* pModel);  // 2074
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Count(); // 135
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::IsEmpty(); // 2079
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 135
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::IsEmpty(); // 2082
	Count(const CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> this); // 135
	IsEmpty(const CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> this); // 2085
	CUtlMemory<CConstraintTarget, int>::operator[](
			int i);  // 616
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Head(); // 2088
	CUtlMemory<CConstraintTarget, int>::operator[](
			int i);  // 616
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Head(); // 2102
} /* size: 258, variables: 3, inline expansions: 13 (38 bytes) */

// <0541CC9C> modellib/boneconstraints.cpp:2121
// function call: 1
void CBoneConstraintPoseSpaceBone::GetFalloff()
{
	CInterpolateRbf::GetFalloff(); // 2123
} /* size: 0, inline expansions: 1 (0 bytes) */

// <053F9D44> modellib/boneconstraints.cpp:2121
void CBoneConstraintPoseSpaceBone::GetFalloff()
{
} /* size: 0 */

// <0541CCF6> modellib/boneconstraints.cpp:2128
// function call: 1
void CBoneConstraintPoseSpaceBone::SetFalloff(float flFalloff)
{
	{
	}
	CInterpolateRbf::SetFalloff(
			float flFalloff);  // 2130
} /* size: 0, inline expansions: 1 (0 bytes) */

// <053F9D1E> modellib/boneconstraints.cpp:2128
void CBoneConstraintPoseSpaceBone::SetFalloff(float flFalloff)
{
} /* size: 0 */

// <053F9CF3> modellib/boneconstraints.cpp:2142
// variable: 1
void RbfTypeName(int nRbfType)
{
	const CUtlVector<char const*, CUtlMemory<char const*, int> >& rbfTypeNames; // 2144
} /* size: 0, variables: 1 */

// <0541CD7F> modellib/boneconstraints.cpp:2150
// function call: 1
void CBoneConstraintPoseSpaceBone::GetRbfType()
{
	CInterpolateRbf::GetRbfType(); // 2152
} /* size: 0, inline expansions: 1 (0 bytes) */

// <053F9CDA> modellib/boneconstraints.cpp:2150
void CBoneConstraintPoseSpaceBone::GetRbfType()
{
} /* size: 0 */

// <0541CDD9> modellib/boneconstraints.cpp:2157
// function call: 1
void CBoneConstraintPoseSpaceBone::SetRbfType(int nRbfType)
{
	{
	}
	CInterpolateRbf::SetRbfType(
			RbfType_t eRbfType);  // 2162
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0541B828> modellib/boneconstraints.cpp:2157
// function call: 1
void CBoneConstraintPoseSpaceBone::SetRbfType()
{
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 2159
	}
} /* size: 16 */

// <053F9C3E> modellib/boneconstraints.cpp:2157
void CBoneConstraintPoseSpaceBone::SetRbfType(int nRbfType)
{
	{
	}
} /* size: 0 */

// <053F9B13> modellib/boneconstraints.cpp:2167
// function calls: 5
void CBoneConstraintPoseSpaceBone::GetAttachmentName()
{
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Count(); // 135
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::IsEmpty(); // 2169
	CUtlMemory<CConstraintTarget, int>::operator[](
			int i);  // 623
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Head(); // 2172
	CUtlString::Get(); // 2172
} /* size: 0, inline expansions: 5 (0 bytes) */

// <053F9612> modellib/boneconstraints.cpp:2177
// variable: 1
// function calls: 20
void CBoneConstraintPoseSpaceBone::SetAttachmentName(const char* pszAttachmentName)
{
	{
		CConstraintTarget* pTarget; // 2181
		CUtlMemory<CConstraintTarget, int>::NumAllocated(); // 1143
		CUtlMemory<CConstraintTarget, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Element(
			int i);  // 1148
		CUtlString::CUtlString(); // 42
		CConstraintTarget::CConstraintTarget(); // 1479
		Construct<CConstraintTarget>(CConstraintTarget* pMemory); // 1148
		CUtlMemory<CConstraintTarget, int>::Base(); // 112
		CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Base(); // 368
		CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::AddToTail(); // 1156
		CUtlMemory<CConstraintTarget, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Element(
			int i);  // 1156
		CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::AddToTailGetPtr(); // 2181
		CUtlString::operator=(
				const char* src);  // 2184
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 2185
	}
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Count(); // 135
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::IsEmpty(); // 2179
} /* size: 0, inline expansions: 2 (0 bytes) */

// <053F95B3> modellib/boneconstraints.cpp:2191
// function call: 1
void CBoneConstraintPoseSpaceBone::GetOutputCount()
{
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 2193
} /* size: 0, inline expansions: 1 (0 bytes) */

// <053F9567> modellib/boneconstraints.cpp:2198
void CBoneConstraintPoseSpaceBone::ClearOutputs()
{
} /* size: 0 */

// <053F9497> modellib/boneconstraints.cpp:2205
// function calls: 3
void CBoneConstraintPoseSpaceBone::GetOutputBone(int nOutput)
{
	CUtlMemory<CConstraintSlave, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::operator[](
			int i);  // 2207
	CUtlString::Get(); // 2207
} /* size: 0, inline expansions: 3 (0 bytes) */

// <053F878B> modellib/boneconstraints.cpp:2212
// variables: 12
// function calls: 58
void CBoneConstraintPoseSpaceBone::AddOutputBone(const char* pszBone)
{
	const uint32  nBoneHash; // 2220
	CConstraintSlave* pOutput; // 2225
	const int  nOutputCount; // 2229
	{
		{
			int i; // 221
			CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 221
			CUtlMemory<CConstraintSlave, int>::operator[](
					int i);  // 609
			CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Element(
				int i);  // 223
			operator()(const class* __closure,
					const CConstraintSlave& output); // 223
		}
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::FindMatching<CBoneConstraintPoseSpaceBone::AddOutputBone(
																class& f);  // 2217
	}
	{
		{
			int i; // 221
			CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 221
			CUtlMemory<CConstraintSlave, int>::operator[](
					int i);  // 609
			CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Element(
				int i);  // 223
			operator()(const class* __closure,
					const CConstraintSlave& output); // 223
		}
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::FindMatching<CBoneConstraintPoseSpaceBone::AddOutputBone(
																class& f);  // 2222
	}
	{
		Input_t& input; // 2231
		CUtlVector<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >& __for_range; // 4376
		iterator __for_begin; // 4321
		iterator __for_end; // 4321
		{
			int nDelta; // 2234
			CUtlMemory<CTransform, int>::IsGrowable(); // 881
			CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 888
			CUtlMemory<CTransform, int>::EnsureCapacity(
					int num);  // 1006
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 1024
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::EnsureCapacity(
					int num);  // 2233
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::RemoveMultipleFromTail(
						int num);  // 2245
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 2234
			CUtlMemory<CTransform, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Element(
				int i);  // 1201
			CopyConstruct<CTransform>(CTransform* pMemory,
							const CTransform& src);  // 1201
			CUtlMemory<CTransform, int>::NumAllocated(); // 1196
			CUtlMemory<CTransform, int>::Base(); // 112
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 368
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::AddToTail(
					const CTransform& src);  // 2240
		}
		Count(const CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> this); // 104
		CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::end(); // 2231
		CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>::Base(); // 112
		CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::Base(); // 102
		CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::begin(); // 2231
	}
	V_isempty(const char* pszString); // 2214
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 2220
	CUtlMemory<CConstraintSlave, int>::NumAllocated(); // 1143
	CUtlMemory<CConstraintSlave, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Element(
		int i);  // 1148
	CUtlString::CUtlString(); // 83
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
	CVarBitVec::CVarBitVec(); // 83
	CConstraintSlave::CConstraintSlave(); // 1479
	Construct<CConstraintSlave>(CConstraintSlave* pMemory); // 1148
	CUtlMemory<CConstraintSlave, int>::Base(); // 112
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Base(); // 368
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::AddToTail(); // 1156
	CUtlMemory<CConstraintSlave, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Element(
		int i);  // 1156
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::AddToTailGetPtr(); // 2225
	CUtlString::operator=(
			const char* src);  // 2226
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 2229
} /* size: 0, variables: 3, inline expansions: 27 (0 bytes) */

// <020B6901> modellib/boneconstraints.cpp:2212
// variables: 12
// function calls: 58
void CBoneConstraintPoseSpaceBone::AddOutputBone(const char* pszBone)
{
	const uint32  nBoneHash; // 2220
	CConstraintSlave* pOutput; // 2225
	const int  nOutputCount; // 2229
	{
		{
			int i; // 221
			CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 221
			CUtlMemory<CConstraintSlave, int>::operator[](
					int i);  // 609
			CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Element(
				int i);  // 223
			operator()(const class* __closure,
					const CConstraintSlave& output); // 223
		}
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::FindMatching<CBoneConstraintPoseSpaceBone::AddOutputBone(
																class& f);  // 2217
	}
	{
		{
			int i; // 221
			CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 221
			CUtlMemory<CConstraintSlave, int>::operator[](
					int i);  // 609
			CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Element(
				int i);  // 223
			operator()(const class* __closure,
					const CConstraintSlave& output); // 223
		}
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::FindMatching<CBoneConstraintPoseSpaceBone::AddOutputBone(
																class& f);  // 2222
	}
	{
		Input_t& input; // 2231
		CUtlVector<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >& __for_range; // 49539
		iterator __for_begin; // 49484
		iterator __for_end; // 49484
		{
			int nDelta; // 2234
			CUtlMemory<CTransform, int>::IsGrowable(); // 881
			CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 888
			CUtlMemory<CTransform, int>::EnsureCapacity(
					int num);  // 1006
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 1024
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::EnsureCapacity(
					int num);  // 2233
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::RemoveMultipleFromTail(
						int num);  // 2245
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 2234
			CUtlMemory<CTransform, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Element(
				int i);  // 1201
			CopyConstruct<CTransform>(CTransform* pMemory,
							const CTransform& src);  // 1201
			CUtlMemory<CTransform, int>::NumAllocated(); // 1196
			CUtlMemory<CTransform, int>::Base(); // 112
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 368
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::AddToTail(
					const CTransform& src);  // 2240
		}
		Count(const CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> this); // 104
		CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::end(); // 2231
		CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>::Base(); // 112
		CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::Base(); // 102
		CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::begin(); // 2231
	}
	V_isempty(const char* pszString); // 2214
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 2220
	CUtlMemory<CConstraintSlave, int>::NumAllocated(); // 1143
	CUtlMemory<CConstraintSlave, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Element(
		int i);  // 1148
	CUtlString::CUtlString(); // 83
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
	CVarBitVec::CVarBitVec(); // 83
	CConstraintSlave::CConstraintSlave(); // 1479
	Construct<CConstraintSlave>(CConstraintSlave* pMemory); // 1148
	CUtlMemory<CConstraintSlave, int>::Base(); // 112
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Base(); // 368
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::AddToTail(); // 1156
	CUtlMemory<CConstraintSlave, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Element(
		int i);  // 1156
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::AddToTailGetPtr(); // 2225
	CUtlString::operator=(
			const char* src);  // 2226
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 2229
} /* size: 0, variables: 3, inline expansions: 27 (0 bytes) */

// <0131B3CC> modellib/boneconstraints.cpp:2212
// variables: 12
// function calls: 58
void CBoneConstraintPoseSpaceBone::AddOutputBone(const char* pszBone)
{
	const uint32  nBoneHash; // 2220
	CConstraintSlave* pOutput; // 2225
	const int  nOutputCount; // 2229
	{
		{
			int i; // 221
			CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 221
			CUtlMemory<CConstraintSlave, int>::operator[](
					int i);  // 609
			CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Element(
				int i);  // 223
			operator()(const class* __closure,
					const CConstraintSlave& output); // 223
		}
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::FindMatching<CBoneConstraintPoseSpaceBone::AddOutputBone(
																class& f);  // 2217
	}
	{
		{
			int i; // 221
			CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 221
			CUtlMemory<CConstraintSlave, int>::operator[](
					int i);  // 609
			CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Element(
				int i);  // 223
			operator()(const class* __closure,
					const CConstraintSlave& output); // 223
		}
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::FindMatching<CBoneConstraintPoseSpaceBone::AddOutputBone(
																class& f);  // 2222
	}
	{
		Input_t& input; // 2231
		CUtlVector<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >& __for_range; // 18878
		iterator __for_begin; // 18823
		iterator __for_end; // 18823
		{
			int nDelta; // 2234
			CUtlMemory<CTransform, int>::IsGrowable(); // 881
			CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 888
			CUtlMemory<CTransform, int>::EnsureCapacity(
					int num);  // 1006
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 1024
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::EnsureCapacity(
					int num);  // 2233
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::RemoveMultipleFromTail(
						int num);  // 2245
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 2234
			CUtlMemory<CTransform, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Element(
				int i);  // 1201
			CopyConstruct<CTransform>(CTransform* pMemory,
							const CTransform& src);  // 1201
			CUtlMemory<CTransform, int>::NumAllocated(); // 1196
			CUtlMemory<CTransform, int>::Base(); // 112
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 368
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::AddToTail(
					const CTransform& src);  // 2240
		}
		Count(const CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> this); // 104
		CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::end(); // 2231
		CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>::Base(); // 112
		CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::Base(); // 102
		CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::begin(); // 2231
	}
	V_isempty(const char* pszString); // 2214
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 2220
	CUtlMemory<CConstraintSlave, int>::NumAllocated(); // 1143
	CUtlMemory<CConstraintSlave, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Element(
		int i);  // 1148
	CUtlString::CUtlString(); // 83
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
	CVarBitVec::CVarBitVec(); // 83
	CConstraintSlave::CConstraintSlave(); // 1479
	Construct<CConstraintSlave>(CConstraintSlave* pMemory); // 1148
	CUtlMemory<CConstraintSlave, int>::Base(); // 112
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Base(); // 368
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::AddToTail(); // 1156
	CUtlMemory<CConstraintSlave, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Element(
		int i);  // 1156
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::AddToTailGetPtr(); // 2225
	CUtlString::operator=(
			const char* src);  // 2226
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 2229
} /* size: 0, variables: 3, inline expansions: 27 (0 bytes) */

// <053F872C> modellib/boneconstraints.cpp:2254
// function call: 1
void CBoneConstraintPoseSpaceBone::GetInputCount()
{
	Count(const CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> this); // 2256
} /* size: 0, inline expansions: 1 (0 bytes) */

// <053F86DF> modellib/boneconstraints.cpp:2261
void CBoneConstraintPoseSpaceBone::ClearInputs()
{
} /* size: 0 */

// <053F85D9> modellib/boneconstraints.cpp:2268
// function calls: 4
void CBoneConstraintPoseSpaceBone::GetInputTransformCount(int nInput)
{
	IsValidIndex(const CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>  this,
			int i);  // 2270
	CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>  this,
			int i);  // 2270
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 2270
} /* size: 0, inline expansions: 4 (0 bytes) */

// <053F84DD> modellib/boneconstraints.cpp:2275
// function calls: 3
void CBoneConstraintPoseSpaceBone::GetInputValue(int nInput)
{
	IsValidIndex(const CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>  this,
			int i);  // 2277
	CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>  this,
			int i);  // 2277
} /* size: 0, inline expansions: 3 (0 bytes) */

// <053F8307> modellib/boneconstraints.cpp:2282
// variable: 1
// function calls: 6
void CBoneConstraintPoseSpaceBone::GetInputValueTransform(int nInput, int nOutput)
{
	{
		const CUtlVector<CTransform, CUtlMemory<CTransform, int> >& outputWeightList; // 2286
		CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>  this,
				int i);  // 2286
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::IsValidIndex(
				int i);  // 2287
		CUtlMemory<CTransform, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
				int i);  // 2289
	}
	IsValidIndex(const CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>  this,
			int i);  // 2284
} /* size: 0, inline expansions: 1 (0 bytes) */

// <053F7BF4> modellib/boneconstraints.cpp:2298
// variables: 3
// function calls: 33
void CBoneConstraintPoseSpaceBone::AddInputValue(const Vector& vInput)
{
	const int  nOutputCount; // 2300
	Input_t* pInput; // 2302
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 2300
	CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>::NumAllocated(); // 1143
	CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>::Base(); // 112
	CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::Base(); // 368
	CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>::IsGrowable(); // 823
	CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::Element(
		int i);  // 1148
	Vector::Vector(); // 519
	CUtlMemory<CTransform, int>::ValidateGrowSize(); // 475
	CUtlMemory<CTransform, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::CUtlVector(); // 519
	Input_t::Input_t(); // 1479
	Construct<CBoneConstraintPoseSpaceBone::Input_t>(Input_t* pMemory); // 1148
	CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::AddToTail(); // 1156
	CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::Element(
		int i);  // 1156
	CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::AddToTailGetPtr(); // 2302
	Vector::operator=(
			const Vector& vOther);  // 2303
	{
		int i; // 1554
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 1554
		CUtlMemory<CTransform, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Element(
			int i);  // 1556
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				const CTransform  &);  // 1556
	}
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::FillWithValue(
			const CTransform& src);  // 2305
	Count(const CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> this); // 2307
} /* size: 0, variables: 2, inline expansions: 27 (0 bytes) */

// <053F7902> modellib/boneconstraints.cpp:2312
// variables: 3
// function calls: 10
void CBoneConstraintPoseSpaceBone::SetInputValueTransform(int nInput, int nOutput, const CTransform& t)
{
	Input_t& input; // 2320
	const char   __FUNCTION__; // 32984
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2323
	}
	IsValidIndex(const CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>  this,
			int i);  // 2314
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::IsValidIndex(
			int i);  // 2317
	CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::operator[](
			int i);  // 2320
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::IsValidIndex(
			int i);  // 2323
	CUtlMemory<CTransform, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
			int i);  // 2325
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 2325
} /* size: 0, variables: 2, inline expansions: 10 (0 bytes) */

// <020B5A78> modellib/boneconstraints.cpp:2312
// variables: 3
// function calls: 10
void CBoneConstraintPoseSpaceBone::SetInputValueTransform(int nInput, int nOutput, const CTransform& t)
{
	Input_t& input; // 2320
	const char   __FUNCTION__; // 12611
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2323
	}
	IsValidIndex(const CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>  this,
			int i);  // 2314
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::IsValidIndex(
			int i);  // 2317
	CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::operator[](
			int i);  // 2320
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::IsValidIndex(
			int i);  // 2323
	CUtlMemory<CTransform, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
			int i);  // 2325
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 2325
} /* size: 0, variables: 2, inline expansions: 10 (0 bytes) */

// <0131A543> modellib/boneconstraints.cpp:2312
// variables: 3
// function calls: 10
void CBoneConstraintPoseSpaceBone::SetInputValueTransform(int nInput, int nOutput, const CTransform& t)
{
	Input_t& input; // 2320
	const char   __FUNCTION__; // 47486
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2323
	}
	IsValidIndex(const CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>  this,
			int i);  // 2314
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::IsValidIndex(
			int i);  // 2317
	CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::operator[](
			int i);  // 2320
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::IsValidIndex(
			int i);  // 2323
	CUtlMemory<CTransform, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
			int i);  // 2325
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 2325
} /* size: 0, variables: 2, inline expansions: 10 (0 bytes) */

// <053F7396> modellib/boneconstraints.cpp:2332
// variables: 5
// function calls: 24
void CBoneConstraintPoseSpaceBone::Finalize()
{
	{
		const Input_t& input; // 2336
		CUtlVector<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >& __for_range; // 4376
		iterator __for_begin; // 4321
		iterator __for_end; // 4321
		CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>::Base(); // 112
		CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::Base(); // 102
		CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::begin(); // 2336
		Count(const CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> this); // 104
		CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::end(); // 2336
		{
			int i; // 1531
			Vector::operator==(
					const Vector& src);  // 1533
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1531
			CUtlMemory<Vector, int>::operator[](
					int i);  // 609
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
				int i);  // 1533
		}
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Find(
			const Vector& src);  // 1563
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::HasElement(
				const Vector& src);  // 673
		CInterpolateRbfTyped<Vector>::IsSampleValid(
				const Vector& v);  // 628
		CUtlMemory<Vector, int>::NumAllocated(); // 1196
		CUtlMemory<Vector, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
			int i);  // 1201
		CopyConstruct<Vector>(Vector* pMemory,
					const Vector& src);  // 1201
		CUtlMemory<Vector, int>::Base(); // 112
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
				const Vector& src);  // 631
		CInterpolateRbfTyped<Vector>::AddSample(
				const Vector& v);  // 2338
	}
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 648
	CInterpolateRbfTyped<Vector>::ClearSamples(); // 2334
} /* size: 293, inline expansions: 2 (14 bytes) */

// <020B550C> modellib/boneconstraints.cpp:2332
// variables: 5
// function calls: 24
void CBoneConstraintPoseSpaceBone::Finalize()
{
	{
		const Input_t& input; // 2336
		CUtlVector<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >& __for_range; // 49539
		iterator __for_begin; // 49484
		iterator __for_end; // 49484
		CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>::Base(); // 112
		CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::Base(); // 102
		CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::begin(); // 2336
		Count(const CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> this); // 104
		CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::end(); // 2336
		{
			int i; // 1531
			Vector::operator==(
					const Vector& src);  // 1533
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1531
			CUtlMemory<Vector, int>::operator[](
					int i);  // 609
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
				int i);  // 1533
		}
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Find(
			const Vector& src);  // 1563
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::HasElement(
				const Vector& src);  // 673
		CInterpolateRbfTyped<Vector>::IsSampleValid(
				const Vector& v);  // 628
		CUtlMemory<Vector, int>::NumAllocated(); // 1196
		CUtlMemory<Vector, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
			int i);  // 1201
		CopyConstruct<Vector>(Vector* pMemory,
					const Vector& src);  // 1201
		CUtlMemory<Vector, int>::Base(); // 112
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
				const Vector& src);  // 631
		CInterpolateRbfTyped<Vector>::AddSample(
				const Vector& v);  // 2338
	}
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 648
	CInterpolateRbfTyped<Vector>::ClearSamples(); // 2334
} /* size: 0, inline expansions: 2 (0 bytes) */

// <01319FD7> modellib/boneconstraints.cpp:2332
// variables: 5
// function calls: 24
void CBoneConstraintPoseSpaceBone::Finalize()
{
	{
		const Input_t& input; // 2336
		CUtlVector<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >& __for_range; // 18878
		iterator __for_begin; // 18823
		iterator __for_end; // 18823
		CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int>::Base(); // 112
		CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::Base(); // 102
		CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::begin(); // 2336
		Count(const CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> this); // 104
		CUtlVectorBase<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> >::end(); // 2336
		{
			int i; // 1531
			Vector::operator==(
					const Vector& src);  // 1533
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1531
			CUtlMemory<Vector, int>::operator[](
					int i);  // 609
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
				int i);  // 1533
		}
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Find(
			const Vector& src);  // 1563
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::HasElement(
				const Vector& src);  // 673
		CInterpolateRbfTyped<Vector>::IsSampleValid(
				const Vector& v);  // 628
		CUtlMemory<Vector, int>::NumAllocated(); // 1196
		CUtlMemory<Vector, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
			int i);  // 1201
		CopyConstruct<Vector>(Vector* pMemory,
					const Vector& src);  // 1201
		CUtlMemory<Vector, int>::Base(); // 112
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
				const Vector& src);  // 631
		CInterpolateRbfTyped<Vector>::AddSample(
				const Vector& v);  // 2338
	}
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 648
	CInterpolateRbfTyped<Vector>::ClearSamples(); // 2334
} /* size: 293, inline expansions: 2 (14 bytes) */

// <053F6AEC> modellib/boneconstraints.cpp:2346
// function calls: 34
void CBoneConstraintPoseSpaceBone::TransferPostSaveFn(CKV3TransferSaveContext* pContext)
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
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 772
	SaveValue<int>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const int32& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<int>(
				const int& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<int>(
				CKV3MemberName memberNameAndHash,
				const int& sourceValue);  // 2348
	CInterpolateRbf::GetRbfType(); // 2152
	CBoneConstraintPoseSpaceBone::GetRbfType(); // 2348
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<11>(
				const char& str);  // 2348
	CInterpolateRbf::GetFalloff(); // 2123
	CBoneConstraintPoseSpaceBone::GetFalloff(); // 2349
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
				KeyValues3Type_t newType);  // 221
	KeyValues3::SetValueFloat(
			float value);  // 776
	SaveValue<float>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const float& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<float>(
				const float& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<float>(
				CKV3MemberName memberNameAndHash,
				const float& sourceValue);  // 2349
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<12>(
				const char& str);  // 2349
} /* size: 421, inline expansions: 34 (1147 bytes) */

// <053F6119> modellib/boneconstraints.cpp:2354
// variables: 4
// function calls: 38
void CBoneConstraintPoseSpaceBone::TransferPostLoadFn(CKV3TransferLoadContext* pContext)
{
	{
		const KeyValues3* pRbfType; // 2356
		{
			int nRbfType; // 2358
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 696
			{
			}
			KV3Helper_StringToNumber<int>(const char* pString); // 715
			KeyValues3::GetValueAsNumeric<int>(); // 694
			KeyValues3::GetValueAsNumeric<int>(); // 184
			KeyValues3::GetValueInt(); // 772
			LoadValue<int>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					int32& value);  // 1548
			CKV3TransferLoadContext::LoadValueDirect<int>(
						int& destValue,
						const KeyValues3* pLoadFromMember);  // 2359
			{
			}
			CInterpolateRbf::SetRbfType(
					RbfType_t eRbfType);  // 2162
			CBoneConstraintPoseSpaceBone::SetRbfType(
					int nRbfType);  // 2360
		}
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
				const KeyValues3* pDefaultValue);  // 2356
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 13
		CKV3MemberName::CKV3MemberName<11>(
					const char& str);  // 2356
	}
	{
		const KeyValues3* pFalloff; // 2363
		{
			float flFalloff; // 2365
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 696
			{
			}
			KV3Helper_StringToNumber<float>(const char* pString); // 715
			KeyValues3::GetValueAsNumeric<float>(); // 694
			KeyValues3::GetValueAsNumeric<float>(); // 199
			KeyValues3::GetValueFloat(); // 776
			LoadValue<float>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					float& value);  // 1548
			CKV3TransferLoadContext::LoadValueDirect<float>(
						float& destValue,
						const KeyValues3* pLoadFromMember);  // 2366
			{
			}
			CInterpolateRbf::SetFalloff(
					float flFalloff);  // 2130
			CBoneConstraintPoseSpaceBone::SetFalloff(
					float flFalloff);  // 2367
		}
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 13
		CKV3MemberName::CKV3MemberName<12>(
					const char& str);  // 2363
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
				const KeyValues3* pDefaultValue);  // 2363
	}
} /* size: 0 */

// <053F5458> modellib/boneconstraints.cpp:2373
// variables: 4
// function calls: 48
void Input_t::KV3TransferSave(CKV3TransferSaveContext* pContext)
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
	SaveValue<Vector>(CKV3TransferSaveContext* pContext,
				KeyValues3* pSaveToValue,
				const Vector& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<Vector>(
				const Vector& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<Vector>(
					CKV3MemberName memberNameAndHash,
					const Vector& sourceValue);  // 2375
	CKV3MemberName::CKV3MemberName<13>(
				const char& str);  // 2375
	CKV3MemberName::CKV3MemberName<22>(
				const char& str);  // 2376
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
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 830
	AlignValue<unsigned int>(unsigned int val,
				uintp alignment);  // 225
	CKV3TransferSaveContext::NotePooledAllocation(
				uint nBytes);  // 830
	NotePooledAllocation(CKV3TransferSaveContext* pSaveContext,
				const Array_t& arr);  // 604
	{
		KeyValues3* pArrayElement; // 680
		CKV3ArrayIteratorView<false>& __for_range; // 10831
		iterator __for_begin; // 10841
		iterator __for_end; // 10851
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
		KeyValues3::SetValueCTransform(
					const CTransform& value);  // 1394
		SaveValue<CTransform>(CKV3TransferSaveContext* pContext,
					KeyValues3* pSaveToValue,
					const CTransform& value);  // 1539
		CKV3TransferSaveContext::SaveValueDirect<CTransform>(
						const CTransform& sourceValue,
						KeyValues3* pSaveToMember);  // 682
	}
	SaveBlittableArrayElements<CTransform>(CKV3TransferSaveContext* pContext,
						KeyValues3* pSaveToValue,
						int nCount,
						const CTransform* pValues);  // 606
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 812
	GetCount(const Array_t& arr); // 605
	CUtlMemory<CTransform, int>::Base(); // 113
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 842
	GetBase(const Array_t& arr); // 606
	SaveValue<CUtlVector<CTransform> >(CKV3TransferSaveContext* pContext,
						KeyValues3* pSaveToValue,
						const CUtlVector<CTransform, CUtlMemory<CTransform, int> >& value,
						type *);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<CUtlVector<CTransform> >(
						const CUtlVector<CTransform, CUtlMemory<CTransform, int> >& sourceValue,
						KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<CUtlVector<CTransform> >(
							CKV3MemberName memberNameAndHash,
							const CUtlVector<CTransform, CUtlMemory<CTransform, int> >& sourceValue);  // 2376
} /* size: 0, inline expansions: 32 (1683 bytes) */

// <020B35CE> modellib/boneconstraints.cpp:2373
// variables: 4
// function calls: 48
void Input_t::KV3TransferSave(CKV3TransferSaveContext* pContext)
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
	SaveValue<Vector>(CKV3TransferSaveContext* pContext,
				KeyValues3* pSaveToValue,
				const Vector& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<Vector>(
				const Vector& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<Vector>(
					CKV3MemberName memberNameAndHash,
					const Vector& sourceValue);  // 2375
	CKV3MemberName::CKV3MemberName<13>(
				const char& str);  // 2375
	CKV3MemberName::CKV3MemberName<22>(
				const char& str);  // 2376
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
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 830
	AlignValue<unsigned int>(unsigned int val,
				uintp alignment);  // 225
	CKV3TransferSaveContext::NotePooledAllocation(
				uint nBytes);  // 830
	NotePooledAllocation(CKV3TransferSaveContext* pSaveContext,
				const Array_t& arr);  // 604
	{
		KeyValues3* pArrayElement; // 680
		CKV3ArrayIteratorView<false>& __for_range; // 55994
		iterator __for_begin; // 56004
		iterator __for_end; // 56014
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
		KeyValues3::SetValueCTransform(
					const CTransform& value);  // 1394
		SaveValue<CTransform>(CKV3TransferSaveContext* pContext,
					KeyValues3* pSaveToValue,
					const CTransform& value);  // 1539
		CKV3TransferSaveContext::SaveValueDirect<CTransform>(
						const CTransform& sourceValue,
						KeyValues3* pSaveToMember);  // 682
	}
	SaveBlittableArrayElements<CTransform>(CKV3TransferSaveContext* pContext,
						KeyValues3* pSaveToValue,
						int nCount,
						const CTransform* pValues);  // 606
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 812
	GetCount(const Array_t& arr); // 605
	CUtlMemory<CTransform, int>::Base(); // 113
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 842
	GetBase(const Array_t& arr); // 606
	SaveValue<CUtlVector<CTransform> >(CKV3TransferSaveContext* pContext,
						KeyValues3* pSaveToValue,
						const CUtlVector<CTransform, CUtlMemory<CTransform, int> >& value,
						type *);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<CUtlVector<CTransform> >(
						const CUtlVector<CTransform, CUtlMemory<CTransform, int> >& sourceValue,
						KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<CUtlVector<CTransform> >(
							CKV3MemberName memberNameAndHash,
							const CUtlVector<CTransform, CUtlMemory<CTransform, int> >& sourceValue);  // 2376
} /* size: 0, inline expansions: 32 (0 bytes) */

// <01318099> modellib/boneconstraints.cpp:2373
// variables: 4
// function calls: 48
void Input_t::KV3TransferSave(CKV3TransferSaveContext* pContext)
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
	SaveValue<Vector>(CKV3TransferSaveContext* pContext,
				KeyValues3* pSaveToValue,
				const Vector& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<Vector>(
				const Vector& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<Vector>(
					CKV3MemberName memberNameAndHash,
					const Vector& sourceValue);  // 2375
	CKV3MemberName::CKV3MemberName<13>(
				const char& str);  // 2375
	CKV3MemberName::CKV3MemberName<22>(
				const char& str);  // 2376
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
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 830
	AlignValue<unsigned int>(unsigned int val,
				uintp alignment);  // 225
	CKV3TransferSaveContext::NotePooledAllocation(
				uint nBytes);  // 830
	NotePooledAllocation(CKV3TransferSaveContext* pSaveContext,
				const Array_t& arr);  // 604
	{
		KeyValues3* pArrayElement; // 680
		CKV3ArrayIteratorView<false>& __for_range; // 25333
		iterator __for_begin; // 25343
		iterator __for_end; // 25353
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
		KeyValues3::SetValueCTransform(
					const CTransform& value);  // 1394
		SaveValue<CTransform>(CKV3TransferSaveContext* pContext,
					KeyValues3* pSaveToValue,
					const CTransform& value);  // 1539
		CKV3TransferSaveContext::SaveValueDirect<CTransform>(
						const CTransform& sourceValue,
						KeyValues3* pSaveToMember);  // 682
	}
	SaveBlittableArrayElements<CTransform>(CKV3TransferSaveContext* pContext,
						KeyValues3* pSaveToValue,
						int nCount,
						const CTransform* pValues);  // 606
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 812
	GetCount(const Array_t& arr); // 605
	CUtlMemory<CTransform, int>::Base(); // 113
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 842
	GetBase(const Array_t& arr); // 606
	SaveValue<CUtlVector<CTransform> >(CKV3TransferSaveContext* pContext,
						KeyValues3* pSaveToValue,
						const CUtlVector<CTransform, CUtlMemory<CTransform, int> >& value,
						type *);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<CUtlVector<CTransform> >(
						const CUtlVector<CTransform, CUtlMemory<CTransform, int> >& sourceValue,
						KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<CUtlVector<CTransform> >(
							CKV3MemberName memberNameAndHash,
							const CUtlVector<CTransform, CUtlMemory<CTransform, int> >& sourceValue);  // 2376
} /* size: 0, inline expansions: 32 (1683 bytes) */

// <053F44D0> modellib/boneconstraints.cpp:2381
// variables: 4
// function calls: 61
void Input_t::KV3TransferLoad(CKV3TransferLoadContext* pContext)
{
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
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	KeyValues3::GetValueFloatArray<3>(
				float* pOutValues);  // 1341
	LoadValue<Vector>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				Vector& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<Vector>(
				Vector& destValue,
				const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<Vector>(
						CKV3MemberName memberNameAndHash,
						Vector& destValue);  // 2383
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<13>(
				const char& str);  // 2383
	CKV3MemberName::CKV3MemberName<22>(
				const char& str);  // 2384
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
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 255
	KeyValues3::IsArray(); // 612
	CKV3TransferLoadContext::AllocatePooledMemory(
				uint nElementSize,
				uint nElementCount);  // 820
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 823
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 577
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 587
	CUtlMemory<CTransform, int>::ConvertToExternalMemory(
				CTransform* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 306
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ConvertToExternalMemory(
				CTransform* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 823
	SetCount(CKV3TransferLoadContext* pLoadContext,
		Array_t& arr,
		int nCount);  // 613
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 812
	GetCount(const Array_t& arr); // 614
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 838
	GetBase(Array_t& arr); // 618
	{
		const KeyValues3* pArrayElement; // 647
		CKV3ArrayIteratorView<true>& __for_range; // 10621
		iterator __for_begin; // 10631
		iterator __for_end; // 10641
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
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 255
		KeyValues3::IsArray(); // 1400
		{
		}
		LoadValue<CTransform>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					CTransform& value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<CTransform>(
						CTransform& destValue,
						const KeyValues3* pLoadFromMember);  // 651
	}
	LoadBlittableArrayElements<CTransform>(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						int nCount,
						CTransform* pValues);  // 618
	LoadValue<CUtlVector<CTransform> >(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						CUtlVector<CTransform, CUtlMemory<CTransform, int> >& value,
						type *);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<CUtlVector<CTransform> >(
						CUtlVector<CTransform, CUtlMemory<CTransform, int> >& destValue,
						const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<CUtlVector<CTransform> >(
								CKV3MemberName memberNameAndHash,
								CUtlVector<CTransform, CUtlMemory<CTransform, int> >& destValue);  // 2384
} /* size: 0, inline expansions: 42 (2397 bytes) */

// <020B2646> modellib/boneconstraints.cpp:2381
// variables: 4
// function calls: 61
void Input_t::KV3TransferLoad(CKV3TransferLoadContext* pContext)
{
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
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	KeyValues3::GetValueFloatArray<3>(
				float* pOutValues);  // 1341
	LoadValue<Vector>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				Vector& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<Vector>(
				Vector& destValue,
				const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<Vector>(
						CKV3MemberName memberNameAndHash,
						Vector& destValue);  // 2383
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<13>(
				const char& str);  // 2383
	CKV3MemberName::CKV3MemberName<22>(
				const char& str);  // 2384
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
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 255
	KeyValues3::IsArray(); // 612
	CKV3TransferLoadContext::AllocatePooledMemory(
				uint nElementSize,
				uint nElementCount);  // 820
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 823
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 577
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 587
	CUtlMemory<CTransform, int>::ConvertToExternalMemory(
				CTransform* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 306
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ConvertToExternalMemory(
				CTransform* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 823
	SetCount(CKV3TransferLoadContext* pLoadContext,
		Array_t& arr,
		int nCount);  // 613
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 812
	GetCount(const Array_t& arr); // 614
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 838
	GetBase(Array_t& arr); // 618
	{
		const KeyValues3* pArrayElement; // 647
		CKV3ArrayIteratorView<true>& __for_range; // 55784
		iterator __for_begin; // 55794
		iterator __for_end; // 55804
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
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 255
		KeyValues3::IsArray(); // 1400
		{
		}
		LoadValue<CTransform>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					CTransform& value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<CTransform>(
						CTransform& destValue,
						const KeyValues3* pLoadFromMember);  // 651
	}
	LoadBlittableArrayElements<CTransform>(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						int nCount,
						CTransform* pValues);  // 618
	LoadValue<CUtlVector<CTransform> >(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						CUtlVector<CTransform, CUtlMemory<CTransform, int> >& value,
						type *);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<CUtlVector<CTransform> >(
						CUtlVector<CTransform, CUtlMemory<CTransform, int> >& destValue,
						const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<CUtlVector<CTransform> >(
								CKV3MemberName memberNameAndHash,
								CUtlVector<CTransform, CUtlMemory<CTransform, int> >& destValue);  // 2384
} /* size: 0, inline expansions: 42 (0 bytes) */

// <01317111> modellib/boneconstraints.cpp:2381
// variables: 4
// function calls: 61
void Input_t::KV3TransferLoad(CKV3TransferLoadContext* pContext)
{
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
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	KeyValues3::GetValueFloatArray<3>(
				float* pOutValues);  // 1341
	LoadValue<Vector>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				Vector& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<Vector>(
				Vector& destValue,
				const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<Vector>(
						CKV3MemberName memberNameAndHash,
						Vector& destValue);  // 2383
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<13>(
				const char& str);  // 2383
	CKV3MemberName::CKV3MemberName<22>(
				const char& str);  // 2384
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
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 255
	KeyValues3::IsArray(); // 612
	CKV3TransferLoadContext::AllocatePooledMemory(
				uint nElementSize,
				uint nElementCount);  // 820
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 823
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 577
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 587
	CUtlMemory<CTransform, int>::ConvertToExternalMemory(
				CTransform* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 306
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ConvertToExternalMemory(
				CTransform* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 823
	SetCount(CKV3TransferLoadContext* pLoadContext,
		Array_t& arr,
		int nCount);  // 613
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 812
	GetCount(const Array_t& arr); // 614
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 838
	GetBase(Array_t& arr); // 618
	{
		const KeyValues3* pArrayElement; // 647
		CKV3ArrayIteratorView<true>& __for_range; // 25123
		iterator __for_begin; // 25133
		iterator __for_end; // 25143
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
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 255
		KeyValues3::IsArray(); // 1400
		{
		}
		LoadValue<CTransform>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					CTransform& value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<CTransform>(
						CTransform& destValue,
						const KeyValues3* pLoadFromMember);  // 651
	}
	LoadBlittableArrayElements<CTransform>(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						int nCount,
						CTransform* pValues);  // 618
	LoadValue<CUtlVector<CTransform> >(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						CUtlVector<CTransform, CUtlMemory<CTransform, int> >& value,
						type *);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<CUtlVector<CTransform> >(
						CUtlVector<CTransform, CUtlMemory<CTransform, int> >& destValue,
						const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<CUtlVector<CTransform> >(
								CKV3MemberName memberNameAndHash,
								CUtlVector<CTransform, CUtlMemory<CTransform, int> >& destValue);  // 2384
} /* size: 0, inline expansions: 42 (2397 bytes) */

