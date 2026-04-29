
//
// skeletalcompression.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 21
//

// <00C234C2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../skeletalcompression.cpp:76
void CVrHandSkeleton::~CVrHandSkeleton()
{
} /* size: 19 */

// <00C23435> _vpc_/unity_animationsystem/linuxsteamrt64/../../../skeletalcompression.cpp:76
// function call: 1
void CVrHandSkeleton::~CVrHandSkeleton()
{
	CVrHandSkeleton::~CVrHandSkeleton(); // 76
} /* size: 46, inline expansions: 1 (19 bytes) */

// <00C23419> _vpc_/unity_animationsystem/linuxsteamrt64/../../../skeletalcompression.cpp:76
inline void CVrHandSkeleton::~CVrHandSkeleton()
{
} /* size: 0 */

// <00C8D53D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../skeletalcompression.cpp:79
// variables: 16
// function calls: 64
void CVrHandSkeleton::CVrHandSkeleton(AnimVRHand_t eHand)
{
	{
		{
			int boneCount; // 82
			{
				int i; // 88
				{
					BoneInfo& info; // 90
					{
					}
				}
			}
			{
				int iBone; // 105
				{
					CTransform modelTransform; // 107
					BoneIndex_t parentBoneIndex; // 109
					{
						CTransform parentModelTransform; // 112
						CTransform invParentModelTransform; // 113
					}
				}
			}
		}
	}
	{
		{
			int boneCount; // 82
			CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::SetSize(
				int size);  // 85
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::SetSize(
				int size);  // 83
			GetBoneCount(void); // 82
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::SetSize(
				int size);  // 84
			{
				int i; // 88
				{
					BoneInfo& info; // 90
					CUtlMemory<CAnimSkeleton::BoneInfo, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::operator[](
							int i);  // 90
					{
					}
					CUtlMemory<CAnimSkeleton::BoneInfo, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::operator[](
							int i);  // 98
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
							const int& src);  // 98
				}
			}
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 102
			CUtlMemory<CTransform, int>::Base(); // 112
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 102
			{
				int iBone; // 105
				{
					CTransform modelTransform; // 107
					BoneIndex_t parentBoneIndex; // 109
					{
						CTransform parentModelTransform; // 112
						CTransform invParentModelTransform; // 113
						CUtlMemory<CTransform, int>::operator[](
								int i);  // 588
						CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
								int i);  // 112
						QuaternionAligned::operator fltx4(); // 471
						VectorAligned::operator fltx4(); // 471
						CTransform::operator*(
								const CTransform& rhs);  // 115
						CUtlMemory<CTransform, int>::operator[](
								int i);  // 588
						CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
								int i);  // 115
						VectorAligned::operator=(
								const VectorAligned& src);  // 26
						QuaternionAligned::operator=(
								const QuaternionAligned& vOther);  // 26
						CTransform::operator=(
								CTransform &);  // 115
					}
					CUtlMemory<CTransform, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
							int i);  // 119
					VectorAligned::operator=(
							const VectorAligned& src);  // 26
					QuaternionAligned::operator=(
							const QuaternionAligned& vOther);  // 26
					CTransform::operator=(
							const CTransform  &);  // 119
					CUtlMemory<CTransform, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
							int i);  // 107
					CUtlMemory<CAnimSkeleton::BoneInfo, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::operator[](
							int i);  // 142
					CAnimSkeleton::GetParentIndex(
							BoneIndex_t boneIndex);  // 109
				}
			}
		}
		CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 93
		CUtlMemory<CTransform, int>::ValidateGrowSize(); // 475
		CUtlMemory<CTransform, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CTransform, CUtlMemory<CTransform, int> >::CUtlVector(); // 93
		CUtlMemory<CTransform, int>::ValidateGrowSize(); // 475
		CUtlMemory<CTransform, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CTransform, CUtlMemory<CTransform, int> >::CUtlVector(); // 93
		CUtlMemory<CAnimSkeleton::BoneInfo, int>::ValidateGrowSize(); // 475
		CUtlMemory<CAnimSkeleton::BoneInfo, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::CUtlVector(); // 93
		CUtlMemory<CAnimFoot, int>::ValidateGrowSize(); // 475
		CUtlMemory<CAnimFoot, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CAnimFoot, CUtlMemory<CAnimFoot, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CAnimFoot, CUtlMemory<CAnimFoot, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CAnimFoot, CUtlMemory<CAnimFoot, int> >::CUtlVector(); // 93
		CAnimSkeleton::CAnimSkeleton(); // 80
	}
} /* size: 738 */

// <00C8D480> _vpc_/unity_animationsystem/linuxsteamrt64/../../../skeletalcompression.cpp:79
// variables: 10
inline void CVrHandSkeleton::CVrHandSkeleton(AnimVRHand_t eHand)
{
	const char   __FUNCTION__; // 22060
	{
		int boneCount; // 82
		{
			int i; // 88
			{
				BoneInfo& info; // 90
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 95
				}
			}
		}
		{
			int iBone; // 105
			{
				CTransform modelTransform; // 107
				BoneIndex_t parentBoneIndex; // 109
				{
					CTransform parentModelTransform; // 112
					CTransform invParentModelTransform; // 113
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <00C8CCF7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../skeletalcompression.cpp:128
// variables: 3
// function calls: 26
void GetHandSkeleton(AnimVRHand_t eHand)
{
	const char   __FUNCTION__; // 22060
	CAnimSkeletonConstPtr kHandSkeletons; // 132
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 130
	}
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
			const CAnimSkeleton* pObj);  // 319
	CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::CSmartPtr(
			const CAnimSkeleton* pObj);  // 135
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
			const CAnimSkeleton* pObj);  // 319
	CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::CSmartPtr(
			const CAnimSkeleton* pObj);  // 135
} /* size: 0, variables: 2, inline expansions: 26 (482 bytes) */

// <00C8C6AF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../skeletalcompression.cpp:140
// variables: 4
// function calls: 24
void GetPose(AnimVRHand_t eHand)
{
	const char   __FUNCTION__; // 21844
	CAnimPosePool* kPools; // 144
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 142
	}
	CUtlStack<CAnimPose::Count(); // 585
	CUtlMemory<CAnimPose::operator[](
			int i);  // 155
	CUtlStack<CAnimPose::Element(
		int i);  // 190
	CUtlStack<CAnimPose::Top(); // 593
	CUtlStack<CAnimPose::Pop(); // 594
	CEnduringClassMemoryPool<CAnimPose>::Alloc(); // 149
	ThreadInterlockedIncrement(volatile int32* p); // 683
	CRefCountedMemPoolObject<CAnimPose>::AddRef(); // 21
	AddRef<CAnimPose>(CAnimPose* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 690
	{
		CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
		CUtlMemory<CAnimPose::NumAllocated(); // 228
		CUtlMemory<CAnimPose::Base(); // 97
		CUtlStack<CAnimPose::ResetDbgInfo(); // 233
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
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
	Release<CAnimPose>(CAnimPose* pObj); // 370
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator=(
			CAnimPose* pObj);  // 319
	CSmartPtr<CAnimPose, CRefCountAccessor>::CSmartPtr(
			CAnimPose* pObj);  // 149
} /* size: 0, variables: 2, inline expansions: 15 (718 bytes) */

// <00C8C234> _vpc_/unity_animationsystem/linuxsteamrt64/../../../skeletalcompression.cpp:153
// variables: 4
// function calls: 13
void WriteVariableLengthValue(bf_write& buf, uint32_t data)
{
	const uint32_t  kMaxBits; // 156
	const char   __FUNCTION__; // 22303
	uint32_t currentBits; // 159
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 157
	}
	bf_write::WriteOneBitNoCheck(
				int nValue);  // 406
	{
	}
	bf_write::SetOverflowFlag(); // 403
	bf_write::WriteOneBit(
			int nValue);  // 170
	bf_write::WriteOneBitNoCheck(
				int nValue);  // 406
	{
	}
	bf_write::SetOverflowFlag(); // 403
	bf_write::WriteOneBit(
			int nValue);  // 164
	bf_write::GetNumBitsLeft(); // 445
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 470
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 471
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 478
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 479
	{
	}
	bf_write::SetOverflowFlag(); // 448
	bf_write::WriteUBitLong(
			unsigned int curData,
			int numbits,
			bool bCheckRange);  // 165
} /* size: 0, variables: 3, inline expansions: 13 (714 bytes) */

// <00C8BFF5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../skeletalcompression.cpp:177
// variables: 3
// function calls: 7
void ReadVariableLengthValue(bf_read& buf)
{
	int currentBits; // 179
	const char   __FUNCTION__; // 22276
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 185
	}
	bf_read::ReadOneBitNoCheck(); // 864
	bf_read::GetNumBitsLeft(); // 859
	bf_read::ReadOneBit(); // 180
	bf_read::GetNumBitsLeft(); // 908
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 928
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 929
	bf_read::ReadUBitLong(
			int numbits);  // 187
} /* size: 0, variables: 2, inline expansions: 7 (207 bytes) */

// <00C8BE94> _vpc_/unity_animationsystem/linuxsteamrt64/../../../skeletalcompression.cpp:191
// variables: 8
// function calls: 2
void QuantizeFloat(float f, float maxValue, int numBits)
{
	const char   __FUNCTION__; // 22006
	const int32_t  flScale; // 195
	float flNormalizedValue; // 197
	float flScaledValue; // 198
	int32_t value; // 200
	int32_t signedValue; // 201
	uint32_t zigZagValue; // 203
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 193
	}
	Sign(float x); // 201
	ZigZagEncode32(int32 n); // 203
} /* size: 0, variables: 7, inline expansions: 2 (9 bytes) */

// <00D32F56> _vpc_/unity_animationsystem/linuxsteamrt64/../../../skeletalcompression.cpp:208
// variables: 4
// function call: 1
void DequantizeFloat(uint32_t quantizedValue, float maxValue, int numBits)
{
	int32_t signedValue; // 210
	const int32_t  flScale; // 212
	float flNormalizedValue; // 213
	float flValue; // 215
	ZigZagDecode32(uint32 n); // 210
} /* size: 0, variables: 4, inline expansions: 1 (0 bytes) */

// <00C8BE35> _vpc_/unity_animationsystem/linuxsteamrt64/../../../skeletalcompression.cpp:208
// variables: 4
void DequantizeFloat(uint32_t quantizedValue, float maxValue, int numBits)
{
	int32_t signedValue; // 210
	const int32_t  flScale; // 212
	float flNormalizedValue; // 213
	float flValue; // 215
} /* size: 0, variables: 4 */

// <00D32FF2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../skeletalcompression.cpp:221
// variable: 1
void WriteFloat(bf_write& buf, float flValue, float maxValue, int numBits)
{
	uint32_t quantizedValue; // 223
} /* size: 0, variables: 1 */

// <00D33098> _vpc_/unity_animationsystem/linuxsteamrt64/../../../skeletalcompression.cpp:228
// variable: 1
// function calls: 2
void ReadFloat(bf_read& buf, float maxValue, int numBits)
{
	uint32_t quantizedValue; // 230
	ZigZagDecode32(uint32 n); // 210
	DequantizeFloat(uint32_t quantizedValue,
			float maxValue,
			int numBits);  // 231
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00C8BDB3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../skeletalcompression.cpp:228
// variable: 1
void ReadFloat(bf_read& buf, float maxValue, int numBits)
{
	uint32_t quantizedValue; // 230
} /* size: 0, variables: 1 */

// <00C8BA0E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../skeletalcompression.cpp:235
// function calls: 12
void WriteVector(bf_write& buf, const VectorAligned& vVec, float maxValue, int numBits)
{
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 237
	WriteFloat(bf_write& buf,
			float flValue,
			float maxValue,
			int numBits);  // 237
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 238
	WriteFloat(bf_write& buf,
			float flValue,
			float maxValue,
			int numBits);  // 238
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 239
	WriteFloat(bf_write& buf,
			float flValue,
			float maxValue,
			int numBits);  // 239
} /* size: 123, inline expansions: 12 (84 bytes) */

// <00C8B436> _vpc_/unity_animationsystem/linuxsteamrt64/../../../skeletalcompression.cpp:243
// variables: 4
// function calls: 21
void ReadVector(bf_read& buf, float maxValue, int numBits)
{
	VectorAligned vVec; // 245
	VectorAligned::VectorAligned(); // 245
	ZigZagDecode32(uint32 n); // 210
	DequantizeFloat(uint32_t quantizedValue,
			float maxValue,
			int numBits);  // 231
	ReadFloat(bf_read& buf,
			float maxValue,
			int numBits);  // 246
	ZigZagDecode32(uint32 n); // 210
	DequantizeFloat(uint32_t quantizedValue,
			float maxValue,
			int numBits);  // 231
	ReadFloat(bf_read& buf,
			float maxValue,
			int numBits);  // 247
	{
		fltx4 retVal; // 1426
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1427
	}
	SetXSIMD<>(fltx4 a,
			float f);  // 78
	VectorAligned::SetX(
		vec_t value);  // 246
	{
		fltx4 retVal; // 1442
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1443
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1445
	}
	SetYSIMD<>(fltx4 a,
			float f);  // 79
	VectorAligned::SetY(
		vec_t value);  // 247
	ZigZagDecode32(uint32 n); // 210
	DequantizeFloat(uint32_t quantizedValue,
			float maxValue,
			int numBits);  // 231
	ReadFloat(bf_read& buf,
			float maxValue,
			int numBits);  // 248
	{
		fltx4 retVal; // 1460
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1461
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1463
	}
	SetZSIMD<>(fltx4 a,
			float f);  // 80
	VectorAligned::SetZ(
		vec_t value);  // 248
} /* size: 229, variables: 1, inline expansions: 16 (400 bytes) */

// <00C8AE61> _vpc_/unity_animationsystem/linuxsteamrt64/../../../skeletalcompression.cpp:253
// function calls: 21
void WriteQuat(bf_write& buf, const QuaternionAligned& qRot, int numBits)
{
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	QuaternionAligned::x(); // 255
	WriteFloat(bf_write& buf,
			float flValue,
			float maxValue,
			int numBits);  // 255
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	QuaternionAligned::y(); // 256
	WriteFloat(bf_write& buf,
			float flValue,
			float maxValue,
			int numBits);  // 256
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	QuaternionAligned::z(); // 257
	WriteFloat(bf_write& buf,
			float flValue,
			float maxValue,
			int numBits);  // 257
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 77
	QuaternionAligned::w(); // 259
	{
	}
	bf_write::SetOverflowFlag(); // 403
	bf_write::WriteOneBitNoCheck(
				int nValue);  // 406
	bf_write::WriteOneBit(
			int nValue);  // 261
	bf_write::WriteOneBitNoCheck(
				int nValue);  // 406
	{
	}
	bf_write::SetOverflowFlag(); // 403
	bf_write::WriteOneBit(
			int nValue);  // 265
} /* size: 0, inline expansions: 21 (397 bytes) */

// <00C8A5D2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../skeletalcompression.cpp:270
// variables: 7
// function calls: 32
void ReadQuat(bf_read& buf, int numBits)
{
	QuaternionAligned q; // 272
	float w; // 278
	QuaternionAligned::QuaternionAligned(); // 272
	ZigZagDecode32(uint32 n); // 210
	DequantizeFloat(uint32_t quantizedValue,
			float maxValue,
			int numBits);  // 231
	ReadFloat(bf_read& buf,
			float maxValue,
			int numBits);  // 274
	ZigZagDecode32(uint32 n); // 210
	DequantizeFloat(uint32_t quantizedValue,
			float maxValue,
			int numBits);  // 231
	ReadFloat(bf_read& buf,
			float maxValue,
			int numBits);  // 275
	{
		fltx4 retVal; // 1426
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1427
	}
	SetXSIMD<>(fltx4 a,
			float f);  // 79
	QuaternionAligned::SetX(
		vec_t value);  // 274
	{
		fltx4 retVal; // 1442
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1443
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1445
	}
	SetYSIMD<>(fltx4 a,
			float f);  // 80
	QuaternionAligned::SetY(
		vec_t value);  // 275
	ZigZagDecode32(uint32 n); // 210
	DequantizeFloat(uint32_t quantizedValue,
			float maxValue,
			int numBits);  // 231
	ReadFloat(bf_read& buf,
			float maxValue,
			int numBits);  // 276
	{
		fltx4 retVal; // 1460
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1461
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1463
	}
	SetZSIMD<>(fltx4 a,
			float f);  // 81
	QuaternionAligned::SetZ(
		vec_t value);  // 276
	bf_read::GetNumBitsLeft(); // 859
	bf_read::ReadOneBitNoCheck(); // 864
	bf_read::ReadOneBit(); // 280
	{
		fltx4 retVal; // 1478
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1479
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1481
	}
	SetWSIMD<>(fltx4 a,
			float f);  // 82
	QuaternionAligned::SetW(
		vec_t value);  // 286
	{
		fltx4 retVal; // 1478
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1479
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1481
	}
	SetWSIMD<>(fltx4 a,
			float f);  // 82
	QuaternionAligned::SetW(
		vec_t value);  // 282
} /* size: 448, variables: 2, inline expansions: 23 (537 bytes) */

// <00C88509> _vpc_/unity_animationsystem/linuxsteamrt64/../../../skeletalcompression.cpp:294
// variables: 42
// function calls: 133
void CompressHandSkeleton(AnimVRHand_t eHand, const CTransform* pBoneTransformsLS, int nBoneCount, void* pvCompressedBuffer, int unCompressedBufferSize)
{
	const char   __FUNCTION__; // 22195
	CAnimSkeletonConstPtr pSkeleton; // 298
	CAnimPosePtr pRefPose; // 300
	CAnimPosePtr pPose; // 307
	bf_write bitWriter; // 313
	int rootBytes; // 315
	int metacarpalBytes; // 316
	int tipBytes; // 317
	int bytesMax; // 319
	int bytesMin; // 320
	int bytesWritten; // 412
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 296
	}
	{
		CTransform boneXform; // 333
		const CTransform  refPoseTransform; // 336
		CUtlMemory<CTransform, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
				int i);  // 121
		CAnimPose::GetLocalSpaceTransform(
					BoneIndex_t boneIndex);  // 333
		CUtlMemory<CTransform, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
				int i);  // 121
		CAnimPose::GetLocalSpaceTransform(
					BoneIndex_t boneIndex);  // 336
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 256
		VectorAligned::operator fltx4(); // 256
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 256
		VectorAligned::operator-(
				const VectorAligned& v);  // 337
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
				const fltx4& w);  // 109
		CTransform::SetPosition(
				const VectorAligned& v0);  // 337
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 1797
		NegSIMD<>(const fltx4& a); // 422
		{
			fltx4 retVal; // 1276
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1277
		}
		ShuffleSIMD<27>(const fltx4& a,
				const fltx4& b);  // 665
		ShuffleSIMD<27, (ESIMDLevel)20>(const fltx4& a,
						const fltx4& b); // 2928
		ReverseSIMD<>(const fltx4& v); // 421
		QuaternionAligned::QuaternionAligned(
					fltx4 vec);  // 423
		QuaternionAligned::Conjugate(); // 338
		QuaternionAligned::QuaternionAligned(
					fltx4 vec);  // 301
		QuaternionAligned::operator*=(
				const QuaternionAligned& q);  // 302
		QuaternionAligned::operator*(
				const QuaternionAligned& q);  // 338
	}
	{
		BoneIndex_t i; // 358
		{
			BoneIndex_t boneIndex; // 360
			CTransform boneXform; // 361
			const CTransform  refPoseTransform; // 364
			CUtlMemory<CTransform, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
					int i);  // 121
			CAnimPose::GetLocalSpaceTransform(
						BoneIndex_t boneIndex);  // 361
			CUtlMemory<CTransform, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
					int i);  // 121
			CAnimPose::GetLocalSpaceTransform(
						BoneIndex_t boneIndex);  // 364
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 256
			VectorAligned::operator fltx4(); // 256
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 256
			VectorAligned::operator-(
					const VectorAligned& v);  // 365
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
					const fltx4& w);  // 109
			CTransform::SetPosition(
					const VectorAligned& v0);  // 365
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 1797
			NegSIMD<>(const fltx4& a); // 422
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<27>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<27, (ESIMDLevel)20>(const fltx4& a,
							const fltx4& b); // 2928
			ReverseSIMD<>(const fltx4& v); // 421
			QuaternionAligned::QuaternionAligned(
						fltx4 vec);  // 423
			QuaternionAligned::Conjugate(); // 366
			QuaternionAligned::QuaternionAligned(
						fltx4 vec);  // 301
			QuaternionAligned::operator*=(
					const QuaternionAligned& q);  // 302
			QuaternionAligned::operator*(
					const QuaternionAligned& q);  // 366
		}
	}
	{
		BoneIndex_t i; // 387
		{
			BoneIndex_t boneIndex; // 389
			VectorAligned vBonePos; // 391
			QuaternionAligned qBoneRot; // 394
			CUtlMemory<CTransform, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
					int i);  // 121
			CAnimPose::GetLocalSpaceTransform(
						BoneIndex_t boneIndex);  // 394
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 215
			VectorAligned::operator-=(
					const VectorAligned& v);  // 392
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 1797
			NegSIMD<>(const fltx4& a); // 422
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<27>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<27, (ESIMDLevel)20>(const fltx4& a,
							const fltx4& b); // 2928
			ReverseSIMD<>(const fltx4& v); // 421
			QuaternionAligned::QuaternionAligned(
						fltx4 vec);  // 423
			QuaternionAligned::Conjugate(); // 395
			CUtlMemory<CTransform, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
					int i);  // 121
			CAnimPose::GetLocalSpaceTransform(
						BoneIndex_t boneIndex);  // 395
			QuaternionAligned::QuaternionAligned(
						fltx4 vec);  // 301
			QuaternionAligned::operator*=(
					const QuaternionAligned& q);  // 302
			QuaternionAligned::operator*(
					const QuaternionAligned& q);  // 395
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 395
		}
	}
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<const CAnimSkeleton>(const CAnimSkeleton* pObj); // 366
	CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator=(
			const CAnimSkeleton* pObj);  // 406
	CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator=(
			const CSmartPtr<const CAnimSkeleton, CRefCountAccessor>& other);  // 328
	CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<const CAnimSkeleton, CRefCountAccessor>& other);  // 298
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 301
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 308
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 308
	BitByte(int bits); // 321
	bf_write::GetNumBytesWritten(); // 410
	ThreadInterlockedDecrement(volatile int32* p); // 690
	{
		CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
		CUtlMemory<CAnimPose::NumAllocated(); // 228
		CUtlMemory<CAnimPose::Base(); // 97
		CUtlStack<CAnimPose::ResetDbgInfo(); // 233
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
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
	Release<CAnimPose>(CAnimPose* pObj); // 344
	CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 418
	ThreadInterlockedDecrement(volatile int32* p); // 690
	{
		CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
		CUtlMemory<CAnimPose::NumAllocated(); // 228
		CUtlMemory<CAnimPose::Base(); // 97
		CUtlStack<CAnimPose::ResetDbgInfo(); // 233
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
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
	Release<CAnimPose>(CAnimPose* pObj); // 344
	CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 418
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimSkeleton>(const CAnimSkeleton* pObj); // 344
	CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::~CSmartPtr(); // 418
} /* size: 0, variables: 11, inline expansions: 31 (850 bytes) */

// <00C860A9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../skeletalcompression.cpp:422
// variables: 33
// function calls: 140
void DecompressHandSkeleton(AnimVRHand_t eHand, const void* pvCompressedBuffer, int unCompressedBufferSize, CTransform* pBoneTransformsLS, int nBoneCount)
{
	const char   __FUNCTION__; // 22249
	CAnimSkeletonConstPtr pSkeleton; // 429
	CAnimPosePtr pRefPose; // 431
	CAnimPosePtr pPose; // 438
	bf_read bitReader; // 441
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 424
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 425
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 426
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 427
	}
	{
		CTransform boneXform; // 445
		const CTransform  refPoseTransform; // 452
		VectorAligned::VectorAligned(); // 31
		QuaternionAligned::QuaternionAligned(); // 31
		CTransform::CTransform(); // 445
		VectorAligned::operator fltx4(); // 108
		{
			fltx4 retVal; // 1478
			_mm_move_ss(__m128 __A,
					__m128 __B);  // 1479
			_mm_move_ss(__m128 __A,
					__m128 __B);  // 1481
		}
		SetWSIMD<>(fltx4 a,
				float f);  // 108
		VectorAligned::operator=(
				fltx4 src);  // 108
		CTransform::SetPositionAndScale(
					const VectorAligned& v0,
					float flScale);  // 446
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 447
		bf_read::IsOverflowed(); // 449
		CUtlMemory<CTransform, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
				int i);  // 121
		CAnimPose::GetLocalSpaceTransform(
					BoneIndex_t boneIndex);  // 452
		{
			fltx4 retVal; // 1478
			_mm_move_ss(__m128 __A,
					__m128 __B);  // 1479
			_mm_move_ss(__m128 __A,
					__m128 __B);  // 1481
		}
		SetWSIMD<>(fltx4 a,
				float f);  // 108
		VectorAligned::operator=(
				fltx4 src);  // 108
		CTransform::SetPositionAndScale(
					const VectorAligned& v0,
					float flScale);  // 453
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 250
		VectorAligned::operator fltx4(); // 250
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 250
		VectorAligned::operator+(
				const VectorAligned& v);  // 453
		QuaternionAligned::operator*=(
				const QuaternionAligned& q);  // 302
		QuaternionAligned::QuaternionAligned(
					fltx4 vec);  // 301
		QuaternionAligned::operator*(
				const QuaternionAligned& q);  // 454
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 454
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 456
	}
	{
		BoneIndex_t i; // 460
		{
			BoneIndex_t boneIndex; // 462
			CTransform boneXform; // 464
			const CTransform  refPoseTransform; // 471
			VectorAligned::VectorAligned(); // 31
			QuaternionAligned::QuaternionAligned(); // 31
			CTransform::CTransform(); // 464
			VectorAligned::operator fltx4(); // 108
			{
				fltx4 retVal; // 1478
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1479
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1481
			}
			SetWSIMD<>(fltx4 a,
					float f);  // 108
			VectorAligned::operator=(
					fltx4 src);  // 108
			CTransform::SetPositionAndScale(
						const VectorAligned& v0,
						float flScale);  // 465
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 466
			bf_read::IsOverflowed(); // 468
			CUtlMemory<CTransform, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
					int i);  // 121
			CAnimPose::GetLocalSpaceTransform(
						BoneIndex_t boneIndex);  // 471
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 250
			VectorAligned::operator fltx4(); // 250
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 250
			VectorAligned::operator+(
					const VectorAligned& v);  // 472
			{
				fltx4 retVal; // 1478
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1479
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1481
			}
			SetWSIMD<>(fltx4 a,
					float f);  // 108
			VectorAligned::operator=(
					fltx4 src);  // 108
			CTransform::SetPositionAndScale(
						const VectorAligned& v0,
						float flScale);  // 472
			QuaternionAligned::QuaternionAligned(
						fltx4 vec);  // 301
			QuaternionAligned::operator*=(
					const QuaternionAligned& q);  // 302
			QuaternionAligned::operator*(
					const QuaternionAligned& q);  // 473
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 473
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 475
		}
	}
	{
		int i; // 479
		{
			BoneIndex_t boneIndex; // 481
			VectorAligned tipPosMS; // 483
			QuaternionAligned tipRotLS; // 484
			TwoBoneIKSettings_t ikSettings; // 489
			CTransform ikTargetXform; // 498
			CTransform boneXform; // 501
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 208
			VectorAligned::operator+=(
					const VectorAligned& v);  // 486
			QuaternionAligned::operator*=(
					const QuaternionAligned& q);  // 302
			QuaternionAligned::QuaternionAligned(
						fltx4 vec);  // 301
			QuaternionAligned::operator*(
					const QuaternionAligned& q);  // 487
			CUtlMemory<CTransform, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
					int i);  // 121
			CAnimPose::GetLocalSpaceTransform(
						BoneIndex_t boneIndex);  // 487
			CAnimParamHandle::CAnimParamHandle(); // 32
			CAnimParamHandle::CAnimParamHandle(); // 32
			TwoBoneIKSettings_t::TwoBoneIKSettings_t(); // 489
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 487
			QuaternionAligned::w(); // 41
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 41
			QuaternionAligned::operator Quaternion(); // 498
			VectorAligned::operator=(
					const VectorAligned& src);  // 492
			VectorAligned::operator=(
					fltx4 src);  // 111
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
					float flScale);  // 498
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 30
			VectorAligned::VectorAligned(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 492
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 498
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 501
			CUtlMemory<CTransform, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
					int i);  // 121
			CAnimPose::GetLocalSpaceTransform(
						BoneIndex_t boneIndex);  // 501
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 502
		}
	}
	{
		int i; // 507
		{
			CTransform boneTransformMS; // 509
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 509
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 510
		}
	}
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<const CAnimSkeleton>(const CAnimSkeleton* pObj); // 366
	CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator=(
			const CAnimSkeleton* pObj);  // 406
	CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator=(
			const CSmartPtr<const CAnimSkeleton, CRefCountAccessor>& other);  // 328
	CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<const CAnimSkeleton, CRefCountAccessor>& other);  // 429
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 432
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 439
	ThreadInterlockedDecrement(volatile int32* p); // 690
	{
		CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
		CUtlMemory<CAnimPose::NumAllocated(); // 228
		CUtlMemory<CAnimPose::Base(); // 97
		CUtlStack<CAnimPose::ResetDbgInfo(); // 233
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
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
	Release<CAnimPose>(CAnimPose* pObj); // 344
	CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 516
	ThreadInterlockedDecrement(volatile int32* p); // 690
	{
		CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
		CUtlMemory<CAnimPose::NumAllocated(); // 228
		CUtlMemory<CAnimPose::Base(); // 97
		CUtlStack<CAnimPose::ResetDbgInfo(); // 233
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
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
	Release<CAnimPose>(CAnimPose* pObj); // 344
	CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 516
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimSkeleton>(const CAnimSkeleton* pObj); // 344
	CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::~CSmartPtr(); // 516
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 513
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 513
} /* size: 0, variables: 5, inline expansions: 30 (971 bytes) */

