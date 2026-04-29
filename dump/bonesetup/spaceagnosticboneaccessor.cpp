
//
// bonesetup/spaceagnosticboneaccessor.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 14
//

// <02888DB3> bonesetup/spaceagnosticboneaccessor.cpp:15
// variables: 2
// function calls: 53
void CSpaceAgnosticBoneAccessor::CSpaceAgnosticBoneAccessor(const CTransform& mModelToWorld, const CModel* pModel, const uint32* pBonesToSetUp, CWritableBoneAccessor<CTransform>& parentSpaceBones, CWritableBoneAccessor<CTransform>& worldSpaceBones, float flScale)
{
	{
		int nSize; // 31
	}
	IPoseAccessor::IPoseAccessor(); // 28
	CBoneAccessor<CTransform>::CBoneAccessor(); // 300
	CWritableBoneAccessor<CTransform>::CWritableBoneAccessor(); // 28
	CBoneAccessor<CTransform>::CBoneAccessor(); // 300
	CWritableBoneAccessor<CTransform>::CWritableBoneAccessor(); // 28
	{
	}
	AlignedByteArrayExplicit_t<32, unsigned int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, unsigned int>::AlignedByteArray_t(); // 228
	CUtlMemory<unsigned int, int>::CUtlMemory(
			unsigned int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<unsigned int, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::CUtlMemoryFixedGrowable_Base(
					unsigned int* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<32, unsigned int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<unsigned int, 32, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<unsigned int, 32>::CUtlVectorFixedGrowable(
				int growSize);  // 28
	{
	}
	AlignedByteArrayExplicit_t<32, unsigned int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, unsigned int>::AlignedByteArray_t(); // 228
	CUtlMemory<unsigned int, int>::CUtlMemory(
			unsigned int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<unsigned int, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::CUtlMemoryFixedGrowable_Base(
					unsigned int* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<32, unsigned int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<unsigned int, 32, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<unsigned int, 32>::CUtlVectorFixedGrowable(
				int growSize);  // 28
	{
		int nSize; // 31
		CBoneAccessor<CTransform>::GetNumBones(); // 31
		CalcNumIntsForBits(int numBits); // 31
		CBoneAccessor<CTransform>::GetReadableBones(); // 36
		CUtlMemory<unsigned int, int>::Base(); // 112
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Base(); // 36
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 36
		CBoneAccessor<CTransform>::GetReadableBones(); // 37
		CUtlMemory<unsigned int, int>::Base(); // 112
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Base(); // 37
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 37
		CUtlMemory<unsigned int, int>::Base(); // 112
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Base(); // 39
		CBoneAccessor<CTransform>::GetBoneArray_Unchecked(); // 39
		CBoneAccessor<CTransform>::Cleanup(); // 202
		CBoneAccessor<CTransform>::Init(
			int nBones,
			const CTransform* pBones,
			const uint32* pReadableBones);  // 39
		CBoneAccessor<CTransform>::GetNumBones(); // 39
		CBoneAccessor<CTransform>::Cleanup(); // 202
		CBoneAccessor<CTransform>::Init(
			int nBones,
			const CTransform* pBones,
			const uint32* pReadableBones);  // 40
		CBoneAccessor<CTransform>::GetNumBones(); // 40
		CUtlMemory<unsigned int, int>::Base(); // 112
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Base(); // 40
		CBoneAccessor<CTransform>::GetBoneArray_Unchecked(); // 40
	}
	CBoneAccessor<CTransform>::CBoneAccessor(
			const CBoneAccessor<CTransform>& that);  // 312
	CWritableBoneAccessor<CTransform>::CWritableBoneAccessor(
				const CWritableBoneAccessor<CTransform>& that);  // 26
	CBoneAccessor<CTransform>::CBoneAccessor(
			const CBoneAccessor<CTransform>& that);  // 312
	CWritableBoneAccessor<CTransform>::CWritableBoneAccessor(
				const CWritableBoneAccessor<CTransform>& that);  // 27
} /* size: 652, inline expansions: 29 (834 bytes) */

// <02888D44> bonesetup/spaceagnosticboneaccessor.cpp:15
// variable: 1
void CSpaceAgnosticBoneAccessor::CSpaceAgnosticBoneAccessor(const CTransform& mModelToWorld, const CModel* pModel, const uint32* pBonesToSetUp, CWritableBoneAccessor<CTransform>& parentSpaceBones, CWritableBoneAccessor<CTransform>& worldSpaceBones, float flScale)
{
	{
		int nSize; // 31
	}
} /* size: 0 */

// <02888643> bonesetup/spaceagnosticboneaccessor.cpp:45
// variables: 10
// function calls: 22
void CSpaceAgnosticBoneAccessor::SanityCheck()
{
	const float  flModelToWorldDeterminant; // 48
	const char   __FUNCTION__; // 61897
	{
		int nBone; // 49
		{
			float flWorldBoneDeterminant; // 58
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
			}
			CBoneAccessor<CTransform>::GetBone(
				int iBone);  // 58
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
			FloatsAreEqual(float f1,
					float f2,
					float flTolerance);  // 59
			matrix3x4_t::GetDeterminant(); // 58
		}
		{
			int nCurrentBone; // 65
			{
				BitVec_IsBitSet(const uint32* pBase,
						int nBitNum);  // 246
				CBoneAccessor<CTransform>::IsBoneReadable(
						int iBone);  // 67
				_DebuggerBreakInlineExpressionWrapper(void); // 67
			}
		}
		BitVec_IsBitSet(const uint32* pBase,
				int nBitNum);  // 51
		BitVec_IsBitSet(const uint32* pBase,
				int nBitNum);  // 246
		CBoneAccessor<CTransform>::IsBoneReadable(
				int iBone);  // 56
	}
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
	CTransform::ToMatrix(); // 48
	matrix3x4_t::GetDeterminant(); // 48
} /* size: 0, variables: 2, inline expansions: 7 (0 bytes) */

// <02887F9C> bonesetup/spaceagnosticboneaccessor.cpp:76
// variables: 7
// function calls: 20
void CSpaceAgnosticBoneAccessor::SetWorldSpaceBone(int nBoneIndex, const CTransform& mBoneToWorld)
{
	const char   __FUNCTION__; // 62049
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 79
	}
	{
		int nBoneParent; // 85
		const CTransform  xWsParentBone; // 86
		const CTransform  xWsBone; // 87
		const CTransform  xWorldToParent; // 89
		const CTransform  xBoneToParent; // 90
		QuaternionAligned::operator fltx4(); // 258
		VectorAligned::operator fltx4(); // 258
		QuaternionAligned::operator fltx4(); // 258
		VectorAligned::operator fltx4(); // 258
		ConcatTransforms(const CTransform  in1,
				const CTransform  in2);  // 90
		CWritableBoneAccessor<CTransform>::GetBoneArrayForWrite(); // 340
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				const CTransform  &);  // 340
		{
		}
		Bitvec_Set(uint32* pBits,
				int nBitNum);  // 373
		CWritableBoneAccessor<CTransform>::MarkBoneReadable(
				int iBone,
				bool bReadable);  // 341
		CWritableBoneAccessor<CTransform>::SetBoneAndMarkReadable(
					int iBone,
					const CTransform& bone);  // 92
	}
	BitVec_IsBitSet(const uint32* pBase,
			int nBitNum);  // 79
	CWritableBoneAccessor<CTransform>::GetBoneArrayForWrite(); // 340
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 340
	{
	}
	Bitvec_Set(uint32* pBits,
			int nBitNum);  // 373
	CWritableBoneAccessor<CTransform>::MarkBoneReadable(
			int iBone,
			bool bReadable);  // 341
	CWritableBoneAccessor<CTransform>::SetBoneAndMarkReadable(
				int iBone,
				const CTransform& bone);  // 81
} /* size: 0, variables: 1, inline expansions: 8 (243 bytes) */

// <02887EC7> bonesetup/spaceagnosticboneaccessor.cpp:98
// function call: 1
void CSpaceAgnosticBoneAccessor::SetModelSpaceBone(int nBoneIndex, const CTransform& xBoneToModel)
{
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 100
} /* size: 138, inline expansions: 1 (27 bytes) */

// <02887D15> bonesetup/spaceagnosticboneaccessor.cpp:103
// function calls: 5
void CSpaceAgnosticBoneAccessor::GetModelSpaceBone(int nBoneIndex)
{
	QuaternionAligned::operator fltx4(); // 258
	VectorAligned::operator fltx4(); // 258
	QuaternionAligned::operator fltx4(); // 258
	VectorAligned::operator fltx4(); // 258
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 105
} /* size: 113, inline expansions: 5 (24 bytes) */

// <0288789C> bonesetup/spaceagnosticboneaccessor.cpp:110
// variables: 4
// function calls: 13
void CSpaceAgnosticBoneAccessor::InvalidateWorldSpaceBoneAndChildren(int nBoneIndex)
{
	{
		uint nNumDWords; // 116
		uint32* pValidParents; // 117
		{
			int nCurrentBoneIndex; // 122
			{
				int nParentBone; // 124
				BitVec_IsBitSet(const uint32* pBase,
						int nBitNum);  // 126
				{
				}
				Bitvec_Unset(uint32* pBits,
						int nBitNum);  // 377
				CWritableBoneAccessor<CTransform>::MarkBoneReadable(
						int iBone,
						bool bReadable);  // 366
				CWritableBoneAccessor<CTransform>::MarkBoneReadable(
						int iBone,
						bool bReadable);  // 128
				Bitvec_Set(uint32* pBits,
						int nBitNum);  // 129
			}
		}
		CalcNumIntsForBits(int numBits); // 116
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 342
		BitVec_ClearAll(uint32* pDst,
				int nDWords);  // 118
		Bitvec_Set(uint32* pBits,
				int nBitNum);  // 120
	}
	{
	}
	Bitvec_Unset(uint32* pBits,
			int nBitNum);  // 377
	CWritableBoneAccessor<CTransform>::MarkBoneReadable(
			int iBone,
			bool bReadable);  // 366
	CWritableBoneAccessor<CTransform>::MarkBoneReadable(
			int iBone,
			bool bReadable);  // 138
} /* size: 0, inline expansions: 3 (107 bytes) */

// <0288732B> bonesetup/spaceagnosticboneaccessor.cpp:143
// variables: 6
// function calls: 16
void CSpaceAgnosticBoneAccessor::GetWorldSpaceBone(int nBoneIndex)
{
	CWritableBoneAccessor<CTransform>& boneAccessor; // 147
	const char   __FUNCTION__; // 62049
	{
		int nBoneParent; // 154
		const CTransform  mParentToWorld; // 155
		const CTransform  mBoneToWorld; // 156
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 152
		}
		BitVec_IsBitSet(const uint32* pBase,
				int nBitNum);  // 246
		CBoneAccessor<CTransform>::IsBoneReadable(
				int iBone);  // 152
		QuaternionAligned::operator fltx4(); // 258
		VectorAligned::operator fltx4(); // 258
		ConcatTransforms(const CTransform  in1,
				const CTransform  in2);  // 156
		CWritableBoneAccessor<CTransform>::GetBoneArrayForWrite(); // 340
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				const CTransform  &);  // 340
		{
		}
		Bitvec_Set(uint32* pBits,
				int nBitNum);  // 373
		CWritableBoneAccessor<CTransform>::MarkBoneReadable(
				int iBone,
				bool bReadable);  // 341
		CWritableBoneAccessor<CTransform>::SetBoneAndMarkReadable(
					int iBone,
					const CTransform& bone);  // 157
	}
	BitVec_IsBitSet(const uint32* pBase,
			int nBitNum);  // 246
	CBoneAccessor<CTransform>::IsBoneReadable(
			int iBone);  // 149
	CWritableBoneAccessor<CTransform>::GetBoneArrayForWrite(); // 356
	{
	}
	CWritableBoneAccessor<CTransform>::GetBoneForWrite(
			int iBone);  // 162
} /* size: 0, variables: 2, inline expansions: 4 (180 bytes) */

// <02887260> bonesetup/spaceagnosticboneaccessor.cpp:165
// function calls: 2
void CSpaceAgnosticBoneAccessor::IsWorldSpaceBoneReadable(int nBoneIndex)
{
	BitVec_IsBitSet(const uint32* pBase,
			int nBitNum);  // 246
	CBoneAccessor<CTransform>::IsBoneReadable(
			int iBone);  // 167
} /* size: 0, inline expansions: 2 (0 bytes) */

// <02886F82> bonesetup/spaceagnosticboneaccessor.cpp:170
// variables: 2
// function calls: 8
void CSpaceAgnosticBoneAccessor::SetParentSpaceBone(int nBoneIndex, const CTransform& xBoneToParent)
{
	const char   __FUNCTION__; // 62076
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	BitVec_IsBitSet(const uint32* pBase,
			int nBitNum);  // 173
	CWritableBoneAccessor<CTransform>::GetBoneArrayForWrite(); // 340
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 340
	{
	}
	Bitvec_Set(uint32* pBits,
			int nBitNum);  // 373
	CWritableBoneAccessor<CTransform>::MarkBoneReadable(
			int iBone,
			bool bReadable);  // 341
	CWritableBoneAccessor<CTransform>::SetBoneAndMarkReadable(
				int iBone,
				const CTransform& bone);  // 176
} /* size: 0, variables: 1, inline expansions: 8 (213 bytes) */

// <02886D0A> bonesetup/spaceagnosticboneaccessor.cpp:181
// variables: 2
// function calls: 6
void CSpaceAgnosticBoneAccessor::GetParentSpaceBone(int nBoneIndex)
{
	const char   __FUNCTION__; // 62076
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 183
	}
	BitVec_IsBitSet(const uint32* pBase,
			int nBitNum);  // 183
	CBoneAccessor<CTransform>::GetNumBones(); // 289
	{
	}
	BitVec_IsBitSet(const uint32* pBase,
			int nBitNum);  // 246
	CBoneAccessor<CTransform>::IsBoneReadable(
			int iBone);  // 290
	CBoneAccessor<CTransform>::SanityCheckBone(
			int iBone);  // 253
	CBoneAccessor<CTransform>::GetBone(
		int iBone);  // 184
} /* size: 0, variables: 1, inline expansions: 6 (540 bytes) */

// <02886C3F> bonesetup/spaceagnosticboneaccessor.cpp:187
// function calls: 2
void CSpaceAgnosticBoneAccessor::IsParentSpaceBoneReadable(int nBoneIndex)
{
	BitVec_IsBitSet(const uint32* pBase,
			int nBitNum);  // 246
	CBoneAccessor<CTransform>::IsBoneReadable(
			int iBone);  // 189
} /* size: 0, inline expansions: 2 (0 bytes) */

// <02886A4D> bonesetup/spaceagnosticboneaccessor.cpp:193
// variables: 2
// function calls: 5
void CSpaceAgnosticBoneAccessor::FinalizeParentSpaceBones()
{
	int nBoneCount; // 197
	{
		int i; // 198
		BitVec_IsBitSet(const uint32* pBase,
				int nBitNum);  // 200
		BitVec_IsBitSet(const uint32* pBase,
				int nBitNum);  // 246
		CBoneAccessor<CTransform>::IsBoneReadable(
				int iBone);  // 202
		{
		}
		Bitvec_Set(uint32* pBits,
				int nBitNum);  // 373
		CWritableBoneAccessor<CTransform>::MarkBoneReadable(
				int iBone,
				bool bReadable);  // 204
	}
} /* size: 0, variables: 1 */

// <02886820> bonesetup/spaceagnosticboneaccessor.cpp:211
// variables: 2
// function calls: 5
void CSpaceAgnosticBoneAccessor::FinalizeWorldSpaceBones()
{
	int nBoneCount; // 214
	{
		int i; // 215
		BitVec_IsBitSet(const uint32* pBase,
				int nBitNum);  // 217
		BitVec_IsBitSet(const uint32* pBase,
				int nBitNum);  // 246
		CBoneAccessor<CTransform>::IsBoneReadable(
				int iBone);  // 219
		{
		}
		Bitvec_Set(uint32* pBits,
				int nBitNum);  // 373
		CWritableBoneAccessor<CTransform>::MarkBoneReadable(
				int iBone,
				bool bReadable);  // 222
	}
} /* size: 0, variables: 1 */

