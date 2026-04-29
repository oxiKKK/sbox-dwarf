
//
// modellib/modelhelpers.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//
//	functions: 9
//

// <04C3D85A> modellib/modelhelpers.cpp:19
// variables: 3
// function calls: 26
void GetMDLBoundingBox(Vector* pMins, Vector* pMaxs, HModel h, HSequence nSequence)
{
	const CModel* pStudioHdr; // 31
	Vector vMin; // 45
	Vector vMax; // 46
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 21
	CWeakHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 21
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 28
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 29
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCModel>(const CWeakHandle<InfoForResourceTypeCModel>& hResource); // 31
	Vector::operator==(
			const Vector& src);  // 1294
	VectorCompare(const Vector& v1,
			const Vector& v2);  // 32
	Vector::operator==(
			const Vector& src);  // 1294
	VectorCompare(const Vector& v1,
			const Vector& v2);  // 32
	Vector::operator==(
			const Vector& src);  // 1294
	VectorCompare(const Vector& v1,
			const Vector& v2);  // 38
	Vector::operator==(
			const Vector& src);  // 1294
	VectorCompare(const Vector& v1,
			const Vector& v2);  // 38
	Vector::operator=(
			const Vector& vOther);  // 41
	Vector::operator=(
			const Vector& vOther);  // 42
	Vector::operator=(
			const Vector& vOther);  // 35
	Vector::operator=(
			const Vector& vOther);  // 36
	Vector::Vector(); // 45
	Vector::Vector(); // 46
	VectorMin(const Vector& a,
			const Vector& b,
			Vector& result);  // 50
	VectorMax(const Vector& a,
			const Vector& b,
			Vector& result);  // 51
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 23
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 24
} /* size: 0, variables: 3, inline expansions: 26 (0 bytes) */

// <04C3D4FD> modellib/modelhelpers.cpp:58
// variables: 4
// function calls: 16
float GetMDLRadius(HModel h, HSequence nSequence)
{
	Vector vecMins; // 60
	Vector vecMaxs; // 60
	float flRadius; // 62
	float flRadius2; // 63
	CWeakHandle<InfoForResourceTypeCModel>::Init(
		const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 61
	Vector::Vector(); // 60
	Vector::Vector(); // 60
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 62
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 63
} /* size: 0, variables: 4, inline expansions: 16 (0 bytes) */

// <04C3D16C> modellib/modelhelpers.cpp:75
// variables: 2
// function calls: 15
void GetMDLBoundingSphere(Vector* pVecCenter, float* pRadius, HModel h, HSequence nSequence)
{
	Vector vecMins; // 77
	Vector vecMaxs; // 77
	CWeakHandle<InfoForResourceTypeCModel>::Init(
		const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 78
	Vector::Vector(); // 77
	Vector::Vector(); // 77
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 79
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1306
	Vector::Vector(); // 1305
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 1307
	Vector::DistTo(
		const Vector& vOther);  // 81
	Vector::operator*=(
			float fl);  // 80
} /* size: 0, variables: 2, inline expansions: 15 (0 bytes) */

// <04C3D0D1> modellib/modelhelpers.cpp:88
// variable: 1
void FindSequencePoseParameters(const CModel* hdr, HSequence nSequence, bool* pPoseParameters, int nCount)
{
	const ISequence* pSeqDesc; // 90
} /* size: 0, variables: 1 */

// <01F81E09> modellib/modelhelpers.cpp:136
// variables: 5
void Model_CalcDefaultPoseParameters(const CModel* pModel, float* pPoseParameter, int nCount)
{
	int nPoseCount; // 138
	int nNumParams; // 139
	{
		int i; // 141
		{
			const PoseParamDesc_t* pPose; // 147
			{
				float flPoseDelta; // 152
			}
		}
	}
} /* size: 0, variables: 2 */

// <04C3C778> modellib/modelhelpers.cpp:163
// variables: 2
// function calls: 32
AttachmentHandle_t Model_FindRandomAttachment(const CModel* pModel, const char* pAttachmentName)
{
	{
		CUtlVector<AttachmentHandle_t, CUtlMemory<AttachmentHandle_t, int> > matchingAttachments; // 168
		{
			AttachmentHandle_t i; // 171
			AttachmentHandle_t::operator==(
					const AttachmentHandle_t& other);  // 171
			strstr(const char* __haystack,
				const char* __needle);  // 247
			V_strstr(const char* s1,
				const char* search);  // 174
			CUtlMemory<AttachmentHandle_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<AttachmentHandle_t, CUtlMemory<AttachmentHandle_t, int> >::Element(
				int i);  // 1201
			CopyConstruct<AttachmentHandle_t>(AttachmentHandle_t* pMemory,
								const AttachmentHandle_t& src);  // 1201
			CUtlMemory<AttachmentHandle_t, int>::Grow(
				int num);  // 806
			CUtlVectorBase<AttachmentHandle_t, CUtlMemory<AttachmentHandle_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<AttachmentHandle_t, CUtlMemory<AttachmentHandle_t, int> >::AddToTail(
					const AttachmentHandle_t& src);  // 176
		}
		CUtlMemory<AttachmentHandle_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<AttachmentHandle_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<AttachmentHandle_t, CUtlMemory<AttachmentHandle_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<AttachmentHandle_t, CUtlMemory<AttachmentHandle_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<AttachmentHandle_t, CUtlMemory<AttachmentHandle_t, int> >::CUtlVector(); // 168
		CUtlMemory<AttachmentHandle_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<AttachmentHandle_t, CUtlMemory<AttachmentHandle_t, int> >::operator[](
				int i);  // 182
		CUtlMemory<AttachmentHandle_t, int>::Purge(); // 903
		CUtlMemory<AttachmentHandle_t, int>::Purge(); // 1799
		CUtlVectorBase<AttachmentHandle_t, CUtlMemory<AttachmentHandle_t, int> >::Purge(); // 560
		ValidateAlignment<AttachmentHandle_t>(void); // 508
		CUtlMemory<AttachmentHandle_t, int>::Purge(); // 510
		CUtlMemory<AttachmentHandle_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<AttachmentHandle_t, CUtlMemory<AttachmentHandle_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<AttachmentHandle_t, CUtlMemory<AttachmentHandle_t, int> >::~CUtlVector(); // 183
		CUtlMemory<AttachmentHandle_t, int>::Purge(); // 903
		CUtlMemory<AttachmentHandle_t, int>::Purge(); // 1799
		CUtlVectorBase<AttachmentHandle_t, CUtlMemory<AttachmentHandle_t, int> >::Purge(); // 560
		ValidateAlignment<AttachmentHandle_t>(void); // 508
		CUtlMemory<AttachmentHandle_t, int>::Purge(); // 510
		CUtlMemory<AttachmentHandle_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<AttachmentHandle_t, CUtlMemory<AttachmentHandle_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<AttachmentHandle_t, CUtlMemory<AttachmentHandle_t, int> >::~CUtlVector(); // 183
	}
} /* size: 0 */

// <04C3C08B> modellib/modelhelpers.cpp:192
// variables: 4
// function calls: 21
CUtlString SanitizeBoneName(const CUtlString& boneName)
{
	CPathBufferString nameBuffer; // 197
	char* pCleanedName; // 198
	char* pLastColon; // 201
	{
		char* pAfterColon; // 204
	}
	CUtlString::IsEmpty(); // 194
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 195
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 601
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 596
	CBufferStringN<200>::CBufferStringN(
			const char* pString,
			int nChars,
			bool bExact,
			bool bGrowable);  // 197
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 808
	CBufferString::GetForModify(); // 198
	strrchr(char* __s,
		int __c);  // 212
	V_strrchr(char* s,
			char c);  // 201
	StringAfterPrefix<char const>(const char* str,
					const char* prefix);  // 847
	StringHasPrefix(const char* str,
			const char* prefix);  // 217
	StringAfterPrefix<char>(char* str,
				const char* prefix);  // 219
	StringAfterPrefix<char const>(const char* str,
					const char* prefix);  // 847
	StringHasPrefix(const char* str,
			const char* prefix);  // 222
	StringAfterPrefix<char>(char* str,
				const char* prefix);  // 224
	CUtlString::CUtlString(
			const char* pString);  // 234
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 235
} /* size: 0, variables: 3, inline expansions: 21 (0 bytes) */

// <04C3BC1C> modellib/modelhelpers.cpp:238
// variables: 2
// function calls: 17
void OrthoNormalize(matrix3x4a_t& tm)
{
	Vector x; // 240
	Vector y; // 242
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 240
	Vector::NormalizeInPlace(); // 241
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 242
	DotProduct(const Vector& a,
			const Vector& b);  // 243
	Vector::NormalizeInPlace(); // 244
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 243
	Vector::operator-=(
			const Vector& v);  // 243
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 245
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 246
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 247
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 247
} /* size: 0, variables: 2, inline expansions: 17 (0 bytes) */

// <04C3A995> modellib/modelhelpers.cpp:288
// variables: 16
// function calls: 71
bool BuildPhysicsBoneMap(const CModelSkeleton* pSkeleton, const CPhysAggregateData* pAggregateData, CUtlVector<short int, CUtlMemory<short int, int> >& rBody2BoneMap, CUtlVector<short int, CUtlMemory<short int, int> >& rBone2BodyMap)
{
	int nBoneCount; // 298
	int nBodyCount; // 304
	{
		int nBody; // 314
		{
			uint32 nBoneHash; // 316
			const char* pBoneName; // 317
			int nBone; // 320
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 128
			CPhysAggregateData::GetBoneHash(
					int i);  // 316
			CUtlMemory<short int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 321
		}
	}
	{
		int nBody; // 333
		{
			int nBone; // 335
			CUtlMemory<short int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 335
			CUtlMemory<short int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 338
		}
	}
	{
		int nBody; // 343
		{
			CUtlVectorFixedGrowable<int, 32> candidates; // 346
			int nBone; // 348
			int nParent; // 349
			{
				int nIntermediateBone; // 355
				CUtlVectorFixedGrowable<int, 32>& __for_range; // 21501
				iterator __for_begin; // 6689
				iterator __for_end; // 6689
				CUtlMemory<int, int>::Base(); // 112
				CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Base(); // 102
				CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::begin(); // 355
				CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Count(); // 104
				CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::end(); // 355
				CUtlMemory<short int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
						int i);  // 357
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
			AlignedByteArrayExplicit_t<32, int, 4>::AlignedByteArrayExplicit_t(); // 1597
			AlignedByteArray_t<32, int>::AlignedByteArray_t(); // 228
			AlignedByteArrayExplicit_t<32, int, 4>::Base(); // 231
			CUtlMemoryFixedGrowable<int, 32, int>::CUtlMemoryFixedGrowable(
						int nGrowSize,
						int nInitSize);  // 527
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 484
			CUtlVectorFixedGrowable<int, 32>::CUtlVectorFixedGrowable(
						int growSize);  // 346
			CUtlMemory<short int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 348
			CUtlMemory<short int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 353
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Element(
				int i);  // 1201
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 1201
			CUtlMemory<int, int>::NumAllocated(); // 1196
			CUtlMemory<int, int>::IsGrowable(); // 823
			CUtlMemory<int, int>::IsExternallyAllocated(); // 859
			CUtlMemory<int, int>::IsExternallyAllocated(); // 861
			CUtlMemory<int, int>::Grow(
				int num);  // 806
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::AddToTail(
					const int& src);  // 363
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
			AlignedByteArrayExplicit_t<32, int, 4>::Base(); // 237
			CUtlMemoryFixedGrowable<int, 32, int>::Purge(
				int numElements);  // 1799
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::RemoveAll(); // 1798
			CUtlMemory<int, int>::Base(); // 112
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Base(); // 368
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 1800
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Purge(); // 560
			ValidateAlignment<int>(void); // 508
			CUtlMemory<int, int>::Purge(); // 903
			CUtlMemory<int, int>::Purge(); // 510
			CUtlMemory<int, int>::~CUtlMemory(); // 191
			CUtlMemoryFixedGrowable_Base<int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
			CUtlMemoryFixedGrowable<int, 32, int>::~CUtlMemoryFixedGrowable(); // 562
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::~CUtlVectorBase(); // 478
			CUtlVectorFixedGrowable<int, 32>::~CUtlVectorFixedGrowable(); // 368
		}
	}
	CUtlMemory<short unsigned int, int>::Count(); // 225
	CUtlMemory<unsigned int, int>::Count(); // 225
	CUtlMemory<matrix3x4_t, int>::Count(); // 225
	{
	}
	CUtlMemory<unsigned int, int>::Count(); // 227
	CPhysAggregateData::GetBoneCount(); // 304
	CUtlMemory<short int, int>::Base(); // 112
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Base(); // 104
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 104
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::end(); // 330
	__fill_a1<short int*, short int>(short int* __first,
					short int* __last,
					const short int& __value);  // 979
	__fill_a<short int*, short int>(short int* __first,
					short int* __last,
					const short int& __value);  // 1011
	fill<short int*, short int>(short int* __first,
					short int* __last,
					const short int& __value);  // 330
} /* size: 0, variables: 2, inline expansions: 12 (0 bytes) */

