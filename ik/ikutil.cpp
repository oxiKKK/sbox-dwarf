
//
// ik/ikutil.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 105
//

// <032F6699> ik/ikutil.cpp:10
// variables: 5
// function calls: 31
void MatrixToCTransformRemoveScale(const matrix3x4a_t& m)
{
	matrix3x4_t mNormalized; // 12
	CTransform x; // 14
	const char   __FUNCTION__; // 56376
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 16
	}
	matrix3x4_t::matrix3x4_t(); // 12
	Quaternion::Quaternion(); // 837
	MatrixQuaternion(const matrix3x4_t& mat); // 2675
	matrix3x4_t::ToQuaternion(); // 14
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 158
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 158
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 158
	VectorAligned::IsValid(); // 44
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 198
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 198
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 198
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 198
	QuaternionAligned::IsValid(); // 44
	CTransform::IsValid(); // 16
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 14
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
			float flScale);  // 14
} /* size: 0, variables: 3, inline expansions: 30 (0 bytes) */

// <032F65AA> ik/ikutil.cpp:21
// variables: 2
// function call: 1
void MatrixToQuaternionRemoveScale(const matrix3x4a_t& m)
{
	matrix3x4_t mNormalized; // 23
	Quaternion q; // 26
	Quaternion::Quaternion(); // 26
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <032F794E> ik/ikutil.cpp:34
// variable: 1
// function calls: 4
void ShouldDebugChain(const CUtlString& chainName)
{
	const char* pFilterText; // 36
	ConVar::GetString(); // 36
	V_strlen(const char* str); // 38
	CUtlString::Get(); // 99
	CUtlString::String(); // 41
} /* size: 101, variables: 1, inline expansions: 4 (63 bytes) */

// <032F6586> ik/ikutil.cpp:34
// variable: 1
void ShouldDebugChain(const CUtlString& chainName)
{
	const char* pFilterText; // 36
} /* size: 0, variables: 1 */

// <032F6461> ik/ikutil.cpp:44
// function calls: 5
void ShouldDebugChain(const CIKChainData_t* pChain)
{
	ConVar::GetString(); // 36
	V_strlen(const char* str); // 38
	CUtlString::Get(); // 99
	CUtlString::String(); // 41
	ShouldDebugChain(const CUtlString& chainName); // 46
} /* size: 101, inline expansions: 5 (133 bytes) */

// <032F5EA8> ik/ikutil.cpp:49
// variables: 4
// function calls: 24
void ProjectToPlane(const Vector& vPlaneNormal, const Vector& vReferencePointOnPlane, const Vector& vToProject, float flOriginalLength)
{
	const char   __FUNCTION__; // 56041
	const Vector  vToProjectFromRefPoint; // 53
	const Vector  vPointOnNormal; // 55
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 51
	}
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1659
	VectorIsNormalized(const Vector& vecIn,
				float flTolerance);  // 51
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 53
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 55
	Vector::Normalized(); // 57
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 55
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 57
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 57
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 57
} /* size: 0, variables: 3, inline expansions: 24 (501 bytes) */

// <01B304C2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:67
// function calls: 80
void MakeIKString(const char* pString)
{
	V_strlen(const char* str); // 68
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 265
	CUtlSymbolLarge::IsValid(); // 268
	CUtlSymbolLarge::CUtlSymbolLarge(
			const CUtlSymbolLarge& sym);  // 269
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 716
	CThreadMutex::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 959
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 972
	CAutoLockT<CThreadMutex, CAutoLockRWLockLockForWriteTrait<CThreadMutex> >::CAutoLockT(
			CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 272
	CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlMemory<unsigned int, int>::IsGrowable(); // 823
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 859
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 861
	CUtlMemory<unsigned int, int>::Grow(
		int num);  // 806
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 1198
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 1201
	CopyConstruct<unsigned int>(unsigned int* pMemory,
					const unsigned int& src);  // 1201
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
			const unsigned int& src);  // 275
	GetHashRef(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::Hash_t, CUtlSymbolTableLar this); // 278
	Hash_t::GetSymbolTable(); // 195
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 250
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 250
	CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::StringFromSymbolID(
				uint nId);  // 196
	V_strlen(const char* str); // 197
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 197
	Hash_t::operator(
			const uint  nId);  // 278
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 650
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 653
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 651
	CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
			uint32 slotmask);  // 656
	Eq_t::GetSymbolTable(); // 216
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 250
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 250
	CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::StringFromSymbolID(
				uint nId);  // 218
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 250
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 250
	CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::StringFromSymbolID(
				uint nId);  // 219
	Eq_t::operator(
			const uint  a,
			const uint  b);  // 670
	CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
			uint32 slotmask);  // 667
	DoLookup<unsigned int>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::Hash_t, CUtlSymbolTa this,
				unsigned int x,
				unsigned int h,
				handle_t* pPreviousInChain);  // 716
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
			int i);  // 720
	CUtlKeyValuePair<unsigned int, empty_t>::CUtlKeyValuePair(
			const unsigned int& k,
			const empty_t  &);  // 1514
	Construct<CUtlKeyValuePair<unsigned int, empty_t>, unsigned int&, const empty_t&>(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 720
	DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::Hash_t, CUtlSymbolTableLar this,
				unsigned int k,
				Arg_t v,
				unsigned int h,
				bool* pDidInsert);  // 714
	DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::Hash_t, CUtlSymbolTableLar this,
				unsigned int k,
				Arg_t v,
				unsigned int h,
				bool* pDidInsert);  // 250
	Insert(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::Hash_t, CUtlSymbolTableLar this,
		KeyArg_t k,
		ValueArg_t v,
		unsigned int hash,
		bool* pDidInsert);  // 279
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 281
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 281
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 716
	CThreadMutex::UnlockWrite(
			const char* pFileName,
			int nLineNumber);  // 960
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockRWLockLockForWriteTrait<CThreadMutex> >::~CAutoLockT(); // 282
	CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::AddStringInternal(
				const char* pString,
				int nStringLen);  // 68
	CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::AddString(
			const char* pString);  // 69
} /* size: 1189, inline expansions: 80 (5709 bytes) */

// <01B30464> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:79
const CUtlString& GetChainName<CIKChainData_t>(const CIKChainData_t* pChain)
{
} /* size: 0 */

// <01B3043A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:85
const CUtlString& GetChainName<CIKChainDescription>(const CIKChainDescription* pChain)
{
} /* size: 0 */

// <01B30410> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:94
int GetNumBones<CIKChainData_t>(const CIKChainData_t* pChain)
{
} /* size: 0 */

// <01B303E6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:100
int GetNumBones<CIKChainDescription>(const CIKChainDescription* pChain)
{
} /* size: 0 */

// <01B303B2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:109
int GetBone<CIKChainData_t>(const CIKChainData_t* pChain, int n)
{
} /* size: 0 */

// <01B3037E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:115
int GetBone<CIKChainDescription>(const CIKChainDescription* pChain, int n)
{
} /* size: 0 */

// <01AE39FE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:134
bool GetEndEffectorTarget<CSpaceAgnosticBoneAccessor>(const CIKChainDescription* pChain, const CSpaceAgnosticBoneAccessor& boneAccessor, Vector& vOutPos)
{
} /* size: 0 */

// <01AE39BC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:134
bool GetEndEffectorTarget<IK::CAnimPoseWrapper>(const CIKChainDescription* pChain, const CAnimPoseWrapper& boneAccessor, Vector& vOutPos)
{
} /* size: 0 */

// <01B1F803> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:142
// variables: 5
// function calls: 15
void DebugDrawSkeleton<CSpaceAgnosticBoneAccessor>(IAnimationDebugRenderer* pRenderer, const CSpaceAgnosticBoneAccessor& boneAccessor, const VertexColor_t& vColour)
{
	const CModel* pModel; // 144
	{
		int nBone; // 145
		{
			int nParent; // 147
			{
				const Vector  vWsParent; // 151
				const Vector  vWsBone; // 152
				VectorAligned::operator fltx4(); // 71
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 71
				CTransform::GetOrigin(); // 151
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 151
				VectorAligned::operator fltx4(); // 71
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 71
				CTransform::GetOrigin(); // 152
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 152
				VectorAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 31
				VectorAligned::VectorAligned(
						const Vector& rhs);  // 154
				VectorAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 31
				VectorAligned::VectorAligned(
						const Vector& rhs);  // 154
			}
		}
	}
	CSpaceAgnosticBoneAccessor::GetModel(); // 144
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <01B1F1B3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:142
// variables: 5
// function calls: 21
void DebugDrawSkeleton<IK::CAnimPoseWrapper>(IAnimationDebugRenderer* pRenderer, const CAnimPoseWrapper& boneAccessor, const VertexColor_t& vColour)
{
	const CModel* pModel; // 144
	{
		int nBone; // 145
		{
			int nParent; // 147
			{
				const Vector  vWsParent; // 151
				const Vector  vWsBone; // 152
				CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
				ConcatTransforms(const CTransform  in1,
						const CTransform  in2);  // 1791
				CAnimPoseWrapper::GetWorldSpaceBone(
							int nBoneIndex);  // 151
				VectorAligned::operator fltx4(); // 71
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 71
				CTransform::GetOrigin(); // 151
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 151
				CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
				ConcatTransforms(const CTransform  in1,
						const CTransform  in2);  // 1791
				CAnimPoseWrapper::GetWorldSpaceBone(
							int nBoneIndex);  // 152
				VectorAligned::operator fltx4(); // 71
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 71
				CTransform::GetOrigin(); // 152
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 152
				VectorAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 31
				VectorAligned::VectorAligned(
						const Vector& rhs);  // 154
				VectorAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 31
				VectorAligned::VectorAligned(
						const Vector& rhs);  // 154
			}
		}
	}
	CAnimPoseWrapper::GetModel(); // 144
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <01B1E299> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:160
// variables: 8
// function calls: 60
void DebugDrawChain<CSpaceAgnosticBoneAccessor, CIKChainData_t>(IAnimationDebugRenderer* pRenderer, const CModel* pModel, const CIKChainData_t* pIKChain, const CSpaceAgnosticBoneAccessor& boneAccessor, const VertexColor_t& vColour)
{
	const VertexColor_t& color; // 167
	Vector vTargetPos; // 169
	{
		int n; // 176
		{
			int nChild; // 178
			int nParent; // 180
			CUtlString::CUtlString(
					const char* pString);  // 184
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 81
			CFmtStrN<256>::String(); // 184
			CUtlMemory<CIKChainJointData_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
					int i);  // 111
			CIKChainJointData_t::GetBoneIndex(); // 111
			GetBone<CIKChainData_t>(const CIKChainData_t* pChain,
						int n);  // 178
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
			CTransform::GetOrigin(); // 184
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
			CTransform::GetOrigin(); // 184
			CUtlString::~CUtlString(); // 184
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 184
		}
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 96
		GetNumBones<CIKChainData_t>(const CIKChainData_t* pChain); // 176
	}
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 167
	Vector::Vector(); // 169
	CSpaceAgnosticBoneAccessor::GetModel(); // 126
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 128
	GetEndEffectorTarget<CSpaceAgnosticBoneAccessor>(const CIKChainData_t* pChain,
							const CSpaceAgnosticBoneAccessor& boneAccessor,
							Vector& vOutPos);  // 171
	CUtlString::Get(); // 99
	CUtlString::String(); // 173
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 81
	CFmtStrN<256>::String(); // 173
	CUtlString::CUtlString(
			const char* pString);  // 173
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 173
	CUtlString::~CUtlString(); // 173
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 173
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 52
	CIKChainData_t::GetEndEffectorJoint(); // 189
	CIKChainJointData_t::GetBoneIndex(); // 189
	GetChainName<CIKChainData_t>(const CIKChainData_t* pChain); // 189
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
	CTransform::GetOrigin(); // 189
	GetChainName<CIKChainData_t>(const CIKChainData_t* pChain); // 167
} /* size: 992, variables: 2, inline expansions: 31 (526 bytes) */

// <01B1D0FC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:160
// variables: 8
// function calls: 69
void DebugDrawChain<IK::CAnimPoseWrapper, CIKChainData_t>(IAnimationDebugRenderer* pRenderer, const CModel* pModel, const CIKChainData_t* pIKChain, const CAnimPoseWrapper& boneAccessor, const VertexColor_t& vColour)
{
	const VertexColor_t& color; // 167
	Vector vTargetPos; // 169
	{
		int n; // 176
		{
			int nChild; // 178
			int nParent; // 180
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 81
			CFmtStrN<256>::String(); // 184
			CUtlString::CUtlString(
					const char* pString);  // 184
			CUtlMemory<CIKChainJointData_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
					int i);  // 111
			CIKChainJointData_t::GetBoneIndex(); // 111
			GetBone<CIKChainData_t>(const CIKChainData_t* pChain,
						int n);  // 178
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
			ConcatTransforms(const CTransform  in1,
					const CTransform  in2);  // 1791
			CAnimPoseWrapper::GetWorldSpaceBone(
						int nBoneIndex);  // 184
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
			CTransform::GetOrigin(); // 184
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
			ConcatTransforms(const CTransform  in1,
					const CTransform  in2);  // 1791
			CAnimPoseWrapper::GetWorldSpaceBone(
						int nBoneIndex);  // 184
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
			CTransform::GetOrigin(); // 184
			CUtlString::~CUtlString(); // 184
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 184
		}
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 96
		GetNumBones<CIKChainData_t>(const CIKChainData_t* pChain); // 176
	}
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 167
	Vector::Vector(); // 169
	CAnimPoseWrapper::GetModel(); // 126
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 128
	GetEndEffectorTarget<IK::CAnimPoseWrapper>(const CIKChainData_t* pChain,
							const CAnimPoseWrapper& boneAccessor,
							Vector& vOutPos);  // 171
	CUtlString::Get(); // 99
	CUtlString::String(); // 173
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 81
	CFmtStrN<256>::String(); // 173
	CUtlString::CUtlString(
			const char* pString);  // 173
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 173
	CUtlString::~CUtlString(); // 173
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 173
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 52
	CIKChainData_t::GetEndEffectorJoint(); // 189
	CIKChainJointData_t::GetBoneIndex(); // 189
	GetChainName<CIKChainData_t>(const CIKChainData_t* pChain); // 189
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 1791
	CAnimPoseWrapper::GetWorldSpaceBone(
				int nBoneIndex);  // 189
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
	CTransform::GetOrigin(); // 189
	GetChainName<CIKChainData_t>(const CIKChainData_t* pChain); // 167
} /* size: 1224, variables: 2, inline expansions: 34 (602 bytes) */

// <01B1C1A3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:160
// variables: 8
// function calls: 63
void DebugDrawChain<CSpaceAgnosticBoneAccessor, CIKChainDescription>(IAnimationDebugRenderer* pRenderer, const CModel* pModel, const CIKChainDescription* pIKChain, const CSpaceAgnosticBoneAccessor& boneAccessor, const VertexColor_t& vColour)
{
	const VertexColor_t& color; // 167
	Vector vTargetPos; // 169
	{
		int n; // 176
		{
			int nChild; // 178
			int nParent; // 180
			CUtlString::CUtlString(
					const char* pString);  // 184
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 81
			CFmtStrN<256>::String(); // 184
			CUtlMemory<CIKChainJointData_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
					int i);  // 117
			CIKChainJointData_t::GetBoneIndex(); // 117
			GetBone<CIKChainDescription>(const CIKChainDescription* pChain,
							int n);  // 178
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
			CTransform::GetOrigin(); // 184
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
			CTransform::GetOrigin(); // 184
			CUtlString::~CUtlString(); // 184
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 184
		}
		CIKChainDescription::GetJointVector(); // 102
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 102
		GetNumBones<CIKChainDescription>(const CIKChainDescription* pChain); // 176
	}
	CIKChainDescription::GetName(); // 395
	ShouldDebugChain(const CIKChainDescription* pDescription); // 162
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 167
	Vector::Vector(); // 169
	VectorAligned::operator fltx4(); // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 136
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 136
	GetEndEffectorTarget<CSpaceAgnosticBoneAccessor>(const CIKChainDescription* pChain,
							const CSpaceAgnosticBoneAccessor& boneAccessor,
							Vector& vOutPos);  // 171
	CUtlString::Get(); // 99
	CUtlString::String(); // 173
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 81
	CFmtStrN<256>::String(); // 173
	CUtlString::CUtlString(
			const char* pString);  // 173
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 173
	CUtlString::~CUtlString(); // 173
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 173
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 52
	CIKChainData_t::GetEndEffectorJoint(); // 83
	CIKChainDescription::GetEndEffectorJoint(); // 189
	CIKChainJointData_t::GetBoneIndex(); // 189
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
	CTransform::GetOrigin(); // 189
} /* size: 976, variables: 2, inline expansions: 33 (534 bytes) */

// <01B1AEEE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:160
// variables: 8
// function calls: 75
void DebugDrawChain<IK::CAnimPoseWrapper, CIKChainDescription>(IAnimationDebugRenderer* pRenderer, const CModel* pModel, const CIKChainDescription* pIKChain, const CAnimPoseWrapper& boneAccessor, const VertexColor_t& vColour)
{
	const VertexColor_t& color; // 167
	Vector vTargetPos; // 169
	{
		int n; // 176
		{
			int nChild; // 178
			int nParent; // 180
			CUtlString::CUtlString(
					const char* pString);  // 184
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 81
			CFmtStrN<256>::String(); // 184
			CUtlMemory<CIKChainJointData_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
					int i);  // 117
			CIKChainJointData_t::GetBoneIndex(); // 117
			GetBone<CIKChainDescription>(const CIKChainDescription* pChain,
							int n);  // 178
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
			ConcatTransforms(const CTransform  in1,
					const CTransform  in2);  // 1791
			CAnimPoseWrapper::GetWorldSpaceBone(
						int nBoneIndex);  // 184
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
			CTransform::GetOrigin(); // 184
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
			ConcatTransforms(const CTransform  in1,
					const CTransform  in2);  // 1791
			CAnimPoseWrapper::GetWorldSpaceBone(
						int nBoneIndex);  // 184
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
			CTransform::GetOrigin(); // 184
			CUtlString::~CUtlString(); // 184
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 184
		}
		CIKChainDescription::GetJointVector(); // 102
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 102
		GetNumBones<CIKChainDescription>(const CIKChainDescription* pChain); // 176
	}
	CIKChainDescription::GetName(); // 395
	ShouldDebugChain(const CIKChainDescription* pDescription); // 162
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 167
	Vector::Vector(); // 169
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 1791
	CAnimPoseWrapper::GetWorldSpaceBone(
				int nBoneIndex);  // 136
	VectorAligned::operator fltx4(); // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 136
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 136
	GetEndEffectorTarget<IK::CAnimPoseWrapper>(const CIKChainDescription* pChain,
							const CAnimPoseWrapper& boneAccessor,
							Vector& vOutPos);  // 171
	CUtlString::Get(); // 99
	CUtlString::String(); // 173
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 81
	CFmtStrN<256>::String(); // 173
	CUtlString::CUtlString(
			const char* pString);  // 173
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 173
	CUtlString::~CUtlString(); // 173
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 173
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 52
	CIKChainData_t::GetEndEffectorJoint(); // 83
	CIKChainDescription::GetEndEffectorJoint(); // 189
	CIKChainJointData_t::GetBoneIndex(); // 189
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 1791
	CAnimPoseWrapper::GetWorldSpaceBone(
				int nBoneIndex);  // 189
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
	CTransform::GetOrigin(); // 189
} /* size: 0, variables: 2, inline expansions: 39 (0 bytes) */

// <01B302FF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:192
void DebugDrawSkeleton(IAnimationDebugRenderer* pRenderer, const CSpaceAgnosticBoneAccessor& boneAccessor, const VertexColor_t& vColour)
{
} /* size: 0 */

// <01B30280> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:197
void DebugDrawSkeleton(IAnimationDebugRenderer* pRenderer, const CAnimPoseWrapper& boneAccessor, const VertexColor_t& vColour)
{
} /* size: 0 */

// <01B5F98C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:202
void DebugDrawChain(IAnimationDebugRenderer* pRenderer, const CModel* pModel, const CIKChainData_t* pIKChain, const CSpaceAgnosticBoneAccessor& boneAccessor, const VertexColor_t& vColour)
{
} /* size: 0 */

// <01B642A7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:207
void DebugDrawChain(IAnimationDebugRenderer* pRenderer, const CModel* pModel, const CIKChainData_t* pIKChain, const CAnimPoseWrapper& boneAccessor, const VertexColor_t& vColour)
{
} /* size: 0 */

// <01B69110> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:212
void DebugDrawChain(IAnimationDebugRenderer* pRenderer, const CModel* pModel, const CIKChainDescription* pIKChain, const CSpaceAgnosticBoneAccessor& boneAccessor, const VertexColor_t& vColour)
{
} /* size: 0 */

// <01B300F6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:217
void DebugDrawChain(IAnimationDebugRenderer* pRenderer, const CModel* pModel, const CIKChainDescription* pIKChain, const CAnimPoseWrapper& boneAccessor, const VertexColor_t& vColour)
{
} /* size: 0 */

// <01B2FDA4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:222
// variables: 3
// function calls: 9
matrix3x4a_t CalculateWorldSpaceFromParentSpaceForBone(const matrix3x4a_t& mModelToWorld, const matrix3x4a_t* mBoneToWorlds, const CModel* pModel, int nBoneIndex)
{
	int nParentIndex; // 229
	const matrix3x4a_t& mParentWs; // 231
	const matrix3x4a_t  mPsBone; // 232
	matrix3x4_t::matrix3x4_t(); // 977
	ConcatTransforms(const matrix3x4_t& in1,
			const matrix3x4_t& in2);  // 233
	matrix3x4_t::matrix3x4_t(); // 290
	matrix3x4_t::Base(); // 291
	matrix3x4_t::Base(); // 291
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 290
	matrix3x4a_t::matrix3x4a_t(
			const matrix3x4_t& src);  // 233
} /* size: 0, variables: 3, inline expansions: 9 (0 bytes) */

// <01B2FBEC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:236
// variables: 2
// function calls: 2
void DebugDrawChains(IAnimationDebugRenderer* pRenderer, const CSpaceAgnosticBoneAccessor& boneAccessor, const VertexColor_t& vertexColor)
{
	const CModel* pModel; // 238
	{
		int nChainIndex; // 243
		DebugDrawChain(IAnimationDebugRenderer* pRenderer,
				const CModel* pModel,
				const CIKChainDescription* pIKChain,
				const CSpaceAgnosticBoneAccessor& boneAccessor,
				const VertexColor_t& vColour);  // 245
	}
	CSpaceAgnosticBoneAccessor::GetModel(); // 238
} /* size: 170, variables: 1, inline expansions: 1 (4 bytes) */

// <01B2F37D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:250
// variables: 4
// function calls: 30
void ConditionallyApplyConstraint(const CIKChainData_t* pIKChain, const int nJoint, const CTransform& mWsDesired, IPoseAccessor* pPoseAccessor, bool bSetToPose, IAnimationDebugRenderer* pDebugRenderer)
{
	matrix3x4a_t xform; // 252
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
	CTransform::ToMatrix(); // 252
	matrix3x4_t::matrix3x4_t(); // 290
	matrix3x4_t::Base(); // 291
	matrix3x4_t::Base(); // 291
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 290
	matrix3x4a_t::matrix3x4a_t(
			const matrix3x4_t& src);  // 252
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
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 217
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
	VectorAligned::operator=(
			fltx4 src);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 310
	CTransform::InitFromMatrix(
			const matrix3x4_t& xform);  // 530
	matrix3x4_t::ToCTransform(); // 253
} /* size: 600, variables: 1, inline expansions: 29 (1172 bytes) */

// <01B2DDA7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:257
// variables: 18
// function calls: 82
void ConditionallyApplyConstraint(const CIKChainData_t* pIKChain, const int nJoint, const matrix3x4a_t& mWsDesired, IPoseAccessor* pPoseAccessor, bool bSetToPose, IAnimationDebugRenderer* pDebugRenderer)
{
	matrix3x4a_t mWsConstrained; // 259
	const VectorAligned  vWsDesired; // 260
	const CIKChainJointData_t& jointDescription; // 262
	float flLastConstraintErrorSquare; // 265
	{
		int nIterationCount; // 266
		{
			const IIKJointConstraintData* pConstraint; // 268
			const CUtlVector<IIKJointConstraintData*, CUtlMemory<IIKJointConstraintData*, int> >& __for_range; // 6134
			const_iterator __for_begin; // 2724
			const_iterator __for_end; // 2724
			{
				int nDebugLevel; // 272
				const matrix3x4a_t  mWsNewlyConstrained; // 279
				const float  flErrorSquare; // 281
				ConVar::GetInt(); // 276
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 281
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 161
				matrix3x4_t::GetOrigin(); // 281
				Vector::Vector(); // 1443
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::operator-(
						const Vector& v);  // 281
				Vector::LengthSqr(); // 281
				ConVar::GetInt(); // 351
				ConVar::GetBool(); // 290
			}
			CUtlMemory<IIKJointConstraintData::Base(); // 113
			CUtlVectorBase<IIKJointConstraintData::Base(); // 103
			CUtlVectorBase<IIKJointConstraintData::begin(); // 268
			CUtlVectorBase<IIKJointConstraintData::Count(); // 105
			CUtlVectorBase<IIKJointConstraintData::end(); // 268
		}
	}
	{
		const CIKChainJointData_t* pParentJointData; // 307
		matrix3x4a_t mWsParent; // 310
		CUtlMemory<CIKChainJointData_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
				int i);  // 307
		CIKChainJointData_t::GetBoneIndex(); // 310
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
		CTransform::ToMatrix(); // 310
		matrix3x4_t::matrix3x4_t(); // 290
		matrix3x4_t::Base(); // 291
		matrix3x4_t::Base(); // 291
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 291
		matrix3x4a_t::operator=(
				const matrix3x4_t& src);  // 290
		matrix3x4a_t::matrix3x4a_t(
				const matrix3x4_t& src);  // 310
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 312
		Vector::LengthSqr(); // 312
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 312
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 312
		matrix3x4_t::matrix3x4_t(); // 753
		Vector::LargestComponentValue(); // 755
		MatrixPosition(const matrix3x4_t& matrix,
				Vector& position);  // 757
		MatrixQuaternion(const matrix3x4_t& mat,
				Quaternion& q,
				Vector& o,
				float& flScale);  // 308
		Quaternion::Quaternion(); // 305
		Vector::Vector(); // 306
		QuaternionAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 217
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
		VectorAligned::operator=(
				fltx4 src);  // 111
		CTransform::SetPositionAndScale(
					const Vector& v0,
					float flScale);  // 310
		CTransform::InitFromMatrix(
				const matrix3x4_t& xform);  // 530
		VectorAligned::VectorAligned(); // 31
		QuaternionAligned::QuaternionAligned(); // 31
		CTransform::CTransform(); // 529
		matrix3x4_t::ToCTransform(); // 318
		CIKChainJointData_t::GetBoneIndex(); // 318
		matrix3x4_t::matrix3x4_t(); // 753
		Vector::LargestComponentValue(); // 755
		MatrixPosition(const matrix3x4_t& matrix,
				Vector& position);  // 757
		MatrixQuaternion(const matrix3x4_t& mat,
				Quaternion& q,
				Vector& o,
				float& flScale);  // 308
		Quaternion::Quaternion(); // 305
		Vector::Vector(); // 306
		QuaternionAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 217
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
		VectorAligned::operator=(
				fltx4 src);  // 111
		CTransform::SetPositionAndScale(
					const Vector& v0,
					float flScale);  // 310
		CTransform::InitFromMatrix(
				const matrix3x4_t& xform);  // 530
		VectorAligned::VectorAligned(); // 31
		QuaternionAligned::QuaternionAligned(); // 31
		CTransform::CTransform(); // 529
		matrix3x4_t::ToCTransform(); // 315
		CIKChainJointData_t::GetBoneIndex(); // 315
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 260
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 262
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 260
} /* size: 1565, variables: 4, inline expansions: 6 (117 bytes) */

// <01B2BFA4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:326
// variables: 15
// function calls: 124
void ApplyFunctionAndBlendResults(const CIKUpdateInputState& inputState, CIKUpdateOutputState& outputState, float flBlendAmount, FunctionToBlend pFunctionToBlend, void* pContext)
{
	CSpaceAgnosticBoneAccessor* pOldBoneAccessor; // 340
	const int  nNumBones; // 343
	CTransform* pTempBoneToWorlds; // 344
	CTransform* pTempBoneToParents; // 345
	int nNumInts; // 351
	uint32* pTempWsReadableBones; // 352
	uint32* pTempPsReadableBones; // 353
	CWritableBoneAccessor<CTransform> tempBoneToWorlds; // 358
	CWritableBoneAccessor<CTransform> tempBoneToParents; // 359
	CSpaceAgnosticBoneAccessor tempSpaceAgnosticBoneAccessor; // 361
	bool bToReturn; // 373
	const char   __FUNCTION__; // 12991
	{
		int nBoneIndex; // 376
		{
			const CTransform  xBoneToParent; // 381
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 382
			}
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
				int iBone);  // 381
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 74
			VectorAligned::x(); // 158
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 158
			_mm_cvtss_f32(__m128 __A); // 1515
			GetYSIMD<>(fltx4 a); // 75
			VectorAligned::y(); // 158
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 158
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 158
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 158
			VectorAligned::IsValid(); // 44
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 74
			QuaternionAligned::x(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			_mm_cvtss_f32(__m128 __A); // 1515
			GetYSIMD<>(fltx4 a); // 75
			QuaternionAligned::y(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			QuaternionAligned::z(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			_mm_cvtss_f32(__m128 __A); // 1553
			GetWSIMD<>(fltx4 a); // 77
			QuaternionAligned::w(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			QuaternionAligned::IsValid(); // 44
			CTransform::IsValid(); // 382
		}
		CSpaceAgnosticBoneAccessor::GetBonesToSetUp(); // 378
		BitVec_IsBitSet(const uint32* pBase,
				int nBitNum);  // 378
	}
	CSpaceAgnosticBoneAccessor::GetNumBones(); // 343
	CBoneAccessor<CTransform>::GetBoneArray_Unchecked(); // 348
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 348
	CBoneAccessor<CTransform>::GetBoneArray_Unchecked(); // 349
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 349
	CalcNumIntsForBits(int numBits); // 351
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 355
	CBoneAccessor<CTransform>::GetReadableBones(); // 355
	CBoneAccessor<CTransform>::GetReadableBones(); // 356
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 356
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
				uint32* pReadableBones);  // 358
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
				uint32* pReadableBones);  // 359
	CSpaceAgnosticBoneAccessor::GetBonesToSetUp(); // 368
	CSpaceAgnosticBoneAccessor::GetModel(); // 368
	CSpaceAgnosticBoneAccessor::GetModelToWorld(); // 362
	CBoneAccessor<CTransform>::Cleanup(); // 181
	CBoneAccessor<CTransform>::~CBoneAccessor(); // 70
	CWritableBoneAccessor<CTransform>::~CWritableBoneAccessor(); // 13
	CBoneAccessor<CTransform>::Cleanup(); // 181
	CBoneAccessor<CTransform>::~CBoneAccessor(); // 70
	CWritableBoneAccessor<CTransform>::~CWritableBoneAccessor(); // 13
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<32, unsigned int, 4>::Base(); // 237
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<unsigned int, int>::ConvertToExternalMemory(
				unsigned int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<unsigned int, 32, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned int, 32, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned int, 32>::~CUtlVectorFixedGrowable(); // 13
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<32, unsigned int, 4>::Base(); // 237
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<unsigned int, int>::ConvertToExternalMemory(
				unsigned int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<unsigned int, 32, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned int, 32, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned int, 32>::~CUtlVectorFixedGrowable(); // 13
	CBoneAccessor<CTransform>::Cleanup(); // 181
	CBoneAccessor<CTransform>::~CBoneAccessor(); // 70
	CWritableBoneAccessor<CTransform>::~CWritableBoneAccessor(); // 13
	CBoneAccessor<CTransform>::Cleanup(); // 181
	CBoneAccessor<CTransform>::~CBoneAccessor(); // 70
	CWritableBoneAccessor<CTransform>::~CWritableBoneAccessor(); // 13
	IPoseAccessor::~IPoseAccessor(); // 13
	CSpaceAgnosticBoneAccessor::~CSpaceAgnosticBoneAccessor(); // 391
	CBoneAccessor<CTransform>::Cleanup(); // 181
	CBoneAccessor<CTransform>::~CBoneAccessor(); // 70
	CWritableBoneAccessor<CTransform>::~CWritableBoneAccessor(); // 391
	CBoneAccessor<CTransform>::Cleanup(); // 181
	CBoneAccessor<CTransform>::~CBoneAccessor(); // 70
	CWritableBoneAccessor<CTransform>::~CWritableBoneAccessor(); // 391
} /* size: 0, variables: 12, inline expansions: 79 (0 bytes) */

// <01B5EA74> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:393
// function call: 1
void ShouldDebugChain(const CIKChainDescription* pDescription)
{
	CIKChainDescription::GetName(); // 395
} /* size: 0, inline expansions: 1 (0 bytes) */

// <01B2BF6D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:393
void ShouldDebugChain(const CIKChainDescription* pDescription)
{
} /* size: 0 */

// <01B2BE8F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:398
// function calls: 3
void ShouldDebugChain(const CIKChainContext* pChain)
{
	CIKChainContext::GetDescription(); // 400
	CIKChainDescription::GetName(); // 395
	ShouldDebugChain(const CIKChainDescription* pDescription); // 400
} /* size: 17, inline expansions: 3 (21 bytes) */

// <01B13584> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:404
// variables: 139
// function calls: 493
CTransform BuildTransformFromCollision<CSpaceAgnosticBoneAccessor>(const CSpaceAgnosticBoneAccessor& boneAccessor, const CIKChainDescription* pIKChain, int nTiltBoneIndex, const Quaternion& qWsTilt, const Vector& vWsCollisionPosition, const Vector& vWsCollisionNormal)
{
	const char   __FUNCTION__; // 12964
	const CTransform& xformMsToWs; // 415
	const CTransform& xformWsEndEffectorInitial; // 416
	const CTransform  xWsOriginal; // 418
	CTransform xWsTarget; // 419
	const float  flFloorZ; // 422
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 413
	}
	{
		const Vector  vWsModelToWorld; // 435
		const Vector  vWsTiltOrigin; // 438
		const Quaternion  qWsUntilt; // 441
		const Vector  vUWsCollisionPosition; // 444
		const Vector  vUWsEndEffectorInitial; // 447
		const float  flUWsZOfGround; // 449
		const float  flZDistanceOffGroundPlane; // 454
		const Vector  vUWsTarget; // 457
		const Vector  vWsNewPosition; // 460
		{
			CLabelledDebugHelper* pDebugHelper; // 467
			const int  nDebugLevel; // 469
			int nDeeperDebugLevel; // 471
			{
				const float  flBoxThickness; // 506
				Vector vMins; // 507
				Vector vMaxs; // 508
				Vector vBoxDimensions; // 510
				Vector::Vector(); // 507
				Vector::Vector(); // 508
				CSpaceAgnosticBoneAccessor::GetModel(); // 509
				Vector::Vector(); // 1443
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::operator-(
						const Vector& v);  // 510
				CUtlString::CUtlString(
						const char* pString);  // 513
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
						const Vector& rhs);  // 513
				QuaternionAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z,
					vec_t W);  // 30
				QuaternionAligned::QuaternionAligned(
							const Quaternion& rhs);  // 513
				CSpaceAgnosticBoneAccessor::GetModelToWorld(); // 513
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
				CTransform::GetOrigin(); // 513
				CUtlString::~CUtlString(); // 513
				CUtlString::CUtlString(
						const char* pString);  // 514
				VectorAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 31
				VectorAligned::VectorAligned(
						const Vector& rhs);  // 514
				QuaternionAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z,
					vec_t W);  // 30
				QuaternionAligned::QuaternionAligned(
							const Quaternion& rhs);  // 514
				CSpaceAgnosticBoneAccessor::GetModelToWorld(); // 514
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
				CTransform::GetOrigin(); // 514
				CUtlString::~CUtlString(); // 514
			}
			ConVar::GetInt(); // 469
			CUtlString::CUtlString(
					const char* pString);  // 476
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
					const Vector& rhs);  // 476
			CUtlString::~CUtlString(); // 476
			CUtlString::CUtlString(
					const char* pString);  // 477
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
					const Vector& rhs);  // 477
			CUtlString::~CUtlString(); // 477
			CUtlString::CUtlString(
					const char* pString);  // 481
			CUtlString::CUtlString(
					const char* pString);  // 493
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 493
			CUtlString::~CUtlString(); // 493
			CUtlString::CUtlString(
					const char* pString);  // 494
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
					const Vector& rhs);  // 494
			CUtlString::~CUtlString(); // 494
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 495
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 495
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
					const Vector& rhs);  // 495
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 31
			VectorAligned::VectorAligned(
					const Vector& rhs);  // 495
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 495
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 31
			VectorAligned::VectorAligned(
					const Vector& rhs);  // 495
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 495
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 256
			VectorAligned::operator-(
					const VectorAligned& v);  // 495
			CUtlString::CUtlString(
					const char* pString);  // 497
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
					const Vector& rhs);  // 497
			CUtlString::~CUtlString(); // 497
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 498
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 498
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
					const Vector& rhs);  // 498
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 31
			VectorAligned::VectorAligned(
					const Vector& rhs);  // 498
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 498
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 31
			VectorAligned::VectorAligned(
					const Vector& rhs);  // 498
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 498
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 256
			VectorAligned::operator-(
					const VectorAligned& v);  // 498
			CUtlString::CUtlString(
					const char* pString);  // 499
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 499
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
					const Vector& rhs);  // 499
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 31
			VectorAligned::VectorAligned(
					const Vector& rhs);  // 499
			CUtlString::~CUtlString(); // 499
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 481
			CUtlString::~CUtlString(); // 481
			CUtlString::CUtlString(
					const char* pString);  // 482
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
			CTransform::GetOrigin(); // 482
			CUtlString::~CUtlString(); // 482
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 81
			CFmtStrN<256>::String(); // 484
			CUtlString::CUtlString(
					const char* pString);  // 484
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
					const Vector& rhs);  // 484
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 31
			VectorAligned::VectorAligned(
					const Vector& rhs);  // 484
			CUtlString::~CUtlString(); // 484
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 484
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
					const Vector& rhs);  // 485
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 31
			VectorAligned::VectorAligned(
					const Vector& rhs);  // 485
		}
		CSpaceAgnosticBoneAccessor::GetModelToWorld(); // 435
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 435
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
		VectorAligned::operator Vector(); // 435
		VectorAligned::operator fltx4(); // 71
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 438
		_mm_cvtss_f32(__m128 __A); // 1496
		GetXSIMD<>(fltx4 a); // 74
		VectorAligned::x(); // 42
		_mm_cvtss_f32(__m128 __A); // 1515
		GetYSIMD<>(fltx4 a); // 75
		VectorAligned::y(); // 42
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 42
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 42
		VectorAligned::AsVector(); // 438
		Quaternion::Quaternion(); // 875
		QuaternionInvert(const Quaternion& p); // 441
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 444
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
				const Vector& rhs);  // 447
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 1488
		Vector::Vector(); // 1487
		Vector::Cross(
			const Vector& vOther);  // 2464
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 2464
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 2464
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1853
		Quaternion::v(); // 2464
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1853
		Quaternion::v(); // 2464
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 2464
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 1488
		Vector::Vector(); // 1487
		Vector::Cross(
			const Vector& vOther);  // 2464
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 2464
		operator*(const Quaternion& q,
				const Vector& v);  // 444
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 1488
		Vector::Vector(); // 1487
		Vector::Cross(
			const Vector& vOther);  // 2464
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 2464
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 1488
		Vector::Vector(); // 1487
		Vector::Cross(
			const Vector& vOther);  // 2464
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1853
		Quaternion::v(); // 2464
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1853
		Quaternion::v(); // 2464
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 2464
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 2464
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 2464
		operator*(const Quaternion& q,
				const Vector& v);  // 447
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
		CTransform::GetOrigin(); // 447
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 444
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 256
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 256
		VectorAligned::operator-(
				const VectorAligned& v);  // 447
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
		VectorAligned::operator Vector(); // 447
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 447
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 460
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 457
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 1488
		Vector::Vector(); // 1487
		Vector::Cross(
			const Vector& vOther);  // 2464
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 2464
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1853
		Quaternion::v(); // 2464
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 2464
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1853
		Quaternion::v(); // 2464
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 2464
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 1488
		Vector::Vector(); // 1487
		Vector::Cross(
			const Vector& vOther);  // 2464
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 2464
		operator*(const Quaternion& q,
				const Vector& v);  // 460
		CIKChainDescription::GetName(); // 395
		ShouldDebugChain(const CIKChainDescription* pDescription); // 463
		ConVar::GetInt(); // 351
		ConVar::GetBool(); // 464
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 460
		{
			fltx4 x000; // 1010
			fltx4 y000; // 1011
			fltx4 z000; // 1012
			fltx4 x0y0; // 1013
			_mm_load_ss(const float* __P); // 1010
			_mm_movelh_ps(__m128 __A,
					__m128 __B);  // 1013
			_mm_load_ss(const float* __P); // 1011
			_mm_load_ss(const float* __P); // 1012
		}
		LoadUnaligned3SIMD<>(const void* pSIMD); // 110
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
				const fltx4& w);  // 110
		CTransform::SetPosition(
				const Vector& v0);  // 461
	}
	{
		float flZDistance; // 522
		const float  flFullOrientationThreshold; // 524
		const float  flNoOrientationThreshold; // 525
		const float  flOrientationLerpAlpha; // 527
		{
			Vector vWsClampedCollisionNormal; // 532
			const Quaternion& qMsToWs; // 555
			matrix3x4_t mWsToMsRotationOnly; // 559
			const Vector  vMsCollisionNormal; // 563
			const Vector  vMsForward; // 567
			const Vector  vMsLeft; // 568
			const Quaternion  qMsBoneOrientationZUp; // 570
			const CTransform  mMsEndEffectorInAnimation; // 573
			const Quaternion  qMsBoneOrientation; // 574
			const QuaternionAligned  qWsEndEffector; // 577
			{
				const Vector  vWsUp; // 534
				const float  flMaxAngle; // 536
				const float  flMinDotProductDifference; // 538
				{
					Quaternion qWs; // 542
					float flAngle; // 544
					Vector vWsAxis; // 545
					Vector::Vector(); // 545
				}
				CSpaceAgnosticBoneAccessor::GetModelToWorld(); // 534
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
						const VectorAligned& v);  // 447
				QuaternionAligned::GetUp(); // 401
				CTransform::GetUp(); // 534
				ConVar::GetFloat(); // 536
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 351
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 1694
				{
					fltx4 retVal; // 1333
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1334
				}
				SplatZSIMD<>(const fltx4& a); // 1695
				{
					fltx4 retVal; // 1314
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1315
				}
				SplatYSIMD<>(const fltx4& a); // 1695
				{
					fltx4 retVal; // 1295
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1296
				}
				SplatXSIMD<>(const fltx4& a); // 1695
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1695
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1695
				Dot3SIMD<>(const fltx4& a,
						const fltx4& b);  // 359
				{
					fltx4 retVal; // 2350
					_mm_sqrt_ps(__m128 __A); // 2351
				}
				SqrtSIMD<>(const fltx4& a); // 360
				{
					fltx4 retVal; // 1981
					_mm_cmpgt_ps(__m128 __A,
							__m128 __B);  // 1982
				}
				CmpGtSIMD<>(const fltx4& a,
						const fltx4& b);  // 361
				{
					fltx4 retVal; // 1662
					_mm_div_ps(__m128 __A,
							__m128 __B);  // 1663
				}
				DivSIMD<>(const fltx4& a,
						const fltx4& b);  // 362
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
						const fltx4& b);  // 362
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 362
				VectorAligned::NormalizedSafe(
						const VectorAligned& v);  // 351
				VectorAligned::Normalized(); // 534
				_mm_cvtss_f32(__m128 __A); // 1534
				GetZSIMD<>(fltx4 a); // 76
				VectorAligned::z(); // 40
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 534
				DEG2RAD(float flDegrees); // 538
				DotProduct(const Vector& a,
						const Vector& b);  // 540
			}
			QuaternionAligned::w(); // 41
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 41
			QuaternionAligned::operator Quaternion(); // 350
			CTransform::ToQuaternion(); // 555
			Quaternion::Quaternion(); // 875
			QuaternionInvert(const Quaternion& p); // 560
			matrix3x4_t::matrix3x4_t(); // 559
			matrix3x4_t::InitFromQuaternion(
						const Quaternion& orientation,
						const Vector& vPosition);  // 2671
			matrix3x4_t::InitFromQuaternion(
						const Quaternion& orientation);  // 560
			Vector::Vector(); // 1306
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2,
					Vector& out);  // 1307
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2);  // 2707
			matrix3x4_t::TransformVector(
					const Vector& v0);  // 563
			Vector::Normalized(); // 563
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 567
			Vector::Normalized(); // 567
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 568
			Vector::Normalized(); // 568
			QuaternionAligned::operator fltx4(); // 258
			VectorAligned::operator fltx4(); // 258
			ConcatTransforms(const CTransform  in1,
					const CTransform  in2);  // 573
			QuaternionAligned::w(); // 41
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 41
			QuaternionAligned::operator Quaternion(); // 350
			CTransform::ToQuaternion(); // 574
			Quaternion::Quaternion(); // 2001
			operator*(const Quaternion& p,
					const Quaternion& q);  // 574
			Quaternion::Quaternion(); // 2001
			operator*(const Quaternion& p,
					const Quaternion& q);  // 577
			QuaternionAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 30
			QuaternionAligned::QuaternionAligned(
						const Quaternion& rhs);  // 577
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 464
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 465
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
					const fltx4& b);  // 466
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
					const fltx4& b);  // 467
			{
				fltx4 retVal; // 1981
				_mm_cmpgt_ps(__m128 __A,
						__m128 __B);  // 1982
			}
			CmpGtSIMD<>(const fltx4& a,
					const fltx4& b);  // 468
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 1797
			NegSIMD<>(const fltx4& a); // 469
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
					const fltx4& b);  // 469
			QuaternionAlignSIMD<>(const fltx4& p,
						const fltx4& q);  // 527
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
					const fltx4& b);  // 486
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 487
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 505
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 505
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 505
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 505
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 505
			{
				fltx4 fl4Q; // 509
				fltx4 fl4PScale; // 514
				fltx4 fl4QScale; // 515
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 516
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 516
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 516
			}
			QuaternionSlerpNoAlignSIMD<>(const fltx4& p,
							const fltx4& q,
							float t);  // 479
			QuaternionSlerpNoAlignSIMD<>(const fltx4& p,
							const fltx4& q,
							float t);  // 528
			QuaternionSlerpSIMD<>(const fltx4& p,
						const fltx4& q,
						float t);  // 545
			QuaternionSlerp(const QuaternionAligned& qFrom,
					const QuaternionAligned& qTo,
					float t);  // 585
		}
		ConVar::GetFloat(); // 524
		ConVar::GetFloat(); // 525
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 527
	}
	Vector::LengthSqr(); // 413
	CSpaceAgnosticBoneAccessor::GetModelToWorld(); // 415
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 590
} /* size: 6979, variables: 6, inline expansions: 4 (95 bytes) */

// <01B0BB5C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:404
// variables: 139
// function calls: 499
CTransform BuildTransformFromCollision<IK::CAnimPoseWrapper>(const CAnimPoseWrapper& boneAccessor, const CIKChainDescription* pIKChain, int nTiltBoneIndex, const Quaternion& qWsTilt, const Vector& vWsCollisionPosition, const Vector& vWsCollisionNormal)
{
	const char   __FUNCTION__; // 12964
	const CTransform& xformMsToWs; // 415
	const CTransform& xformWsEndEffectorInitial; // 416
	const CTransform  xWsOriginal; // 418
	CTransform xWsTarget; // 419
	const float  flFloorZ; // 422
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 413
	}
	{
		const Vector  vWsModelToWorld; // 435
		const Vector  vWsTiltOrigin; // 438
		const Quaternion  qWsUntilt; // 441
		const Vector  vUWsCollisionPosition; // 444
		const Vector  vUWsEndEffectorInitial; // 447
		const float  flUWsZOfGround; // 449
		const float  flZDistanceOffGroundPlane; // 454
		const Vector  vUWsTarget; // 457
		const Vector  vWsNewPosition; // 460
		{
			CLabelledDebugHelper* pDebugHelper; // 467
			const int  nDebugLevel; // 469
			int nDeeperDebugLevel; // 471
			{
				const float  flBoxThickness; // 506
				Vector vMins; // 507
				Vector vMaxs; // 508
				Vector vBoxDimensions; // 510
				Vector::Vector(); // 507
				Vector::Vector(); // 508
				CAnimPoseWrapper::GetModel(); // 509
				Vector::Vector(); // 1443
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::operator-(
						const Vector& v);  // 510
				CUtlString::CUtlString(
						const char* pString);  // 513
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
						const Vector& rhs);  // 513
				QuaternionAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z,
					vec_t W);  // 30
				QuaternionAligned::QuaternionAligned(
							const Quaternion& rhs);  // 513
				CAnimPoseWrapper::GetModelToWorld(); // 513
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
				CTransform::GetOrigin(); // 513
				CUtlString::~CUtlString(); // 513
				CUtlString::CUtlString(
						const char* pString);  // 514
				VectorAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 31
				VectorAligned::VectorAligned(
						const Vector& rhs);  // 514
				QuaternionAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z,
					vec_t W);  // 30
				QuaternionAligned::QuaternionAligned(
							const Quaternion& rhs);  // 514
				CAnimPoseWrapper::GetModelToWorld(); // 514
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
				CTransform::GetOrigin(); // 514
				CUtlString::~CUtlString(); // 514
			}
			ConVar::GetInt(); // 469
			CUtlString::CUtlString(
					const char* pString);  // 476
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
					const Vector& rhs);  // 476
			CUtlString::~CUtlString(); // 476
			CUtlString::CUtlString(
					const char* pString);  // 477
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
					const Vector& rhs);  // 477
			CUtlString::~CUtlString(); // 477
			CUtlString::CUtlString(
					const char* pString);  // 481
			CUtlString::CUtlString(
					const char* pString);  // 493
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 493
			CUtlString::~CUtlString(); // 493
			CUtlString::CUtlString(
					const char* pString);  // 494
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
					const Vector& rhs);  // 494
			CUtlString::~CUtlString(); // 494
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 495
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 495
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
					const Vector& rhs);  // 495
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 31
			VectorAligned::VectorAligned(
					const Vector& rhs);  // 495
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 495
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 31
			VectorAligned::VectorAligned(
					const Vector& rhs);  // 495
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 495
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 256
			VectorAligned::operator-(
					const VectorAligned& v);  // 495
			CUtlString::CUtlString(
					const char* pString);  // 497
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
					const Vector& rhs);  // 497
			CUtlString::~CUtlString(); // 497
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 498
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 498
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
					const Vector& rhs);  // 498
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 31
			VectorAligned::VectorAligned(
					const Vector& rhs);  // 498
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 498
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 31
			VectorAligned::VectorAligned(
					const Vector& rhs);  // 498
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 498
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 256
			VectorAligned::operator-(
					const VectorAligned& v);  // 498
			CUtlString::CUtlString(
					const char* pString);  // 499
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 499
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
					const Vector& rhs);  // 499
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 31
			VectorAligned::VectorAligned(
					const Vector& rhs);  // 499
			CUtlString::~CUtlString(); // 499
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 481
			CUtlString::~CUtlString(); // 481
			CUtlString::CUtlString(
					const char* pString);  // 482
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
			CTransform::GetOrigin(); // 482
			CUtlString::~CUtlString(); // 482
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 81
			CFmtStrN<256>::String(); // 484
			CUtlString::CUtlString(
					const char* pString);  // 484
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
					const Vector& rhs);  // 484
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 31
			VectorAligned::VectorAligned(
					const Vector& rhs);  // 484
			CUtlString::~CUtlString(); // 484
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 484
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
					const Vector& rhs);  // 485
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 31
			VectorAligned::VectorAligned(
					const Vector& rhs);  // 485
		}
		CAnimPoseWrapper::GetModelToWorld(); // 435
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 435
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
		VectorAligned::operator Vector(); // 435
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
		ConcatTransforms(const CTransform  in1,
				const CTransform  in2);  // 1791
		CAnimPoseWrapper::GetWorldSpaceBone(
					int nBoneIndex);  // 438
		VectorAligned::operator fltx4(); // 71
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 438
		_mm_cvtss_f32(__m128 __A); // 1496
		GetXSIMD<>(fltx4 a); // 74
		VectorAligned::x(); // 42
		_mm_cvtss_f32(__m128 __A); // 1515
		GetYSIMD<>(fltx4 a); // 75
		VectorAligned::y(); // 42
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 42
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 42
		VectorAligned::AsVector(); // 438
		Quaternion::Quaternion(); // 875
		QuaternionInvert(const Quaternion& p); // 441
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 444
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
				const Vector& rhs);  // 447
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 1488
		Vector::Vector(); // 1487
		Vector::Cross(
			const Vector& vOther);  // 2464
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 2464
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 2464
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1853
		Quaternion::v(); // 2464
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1853
		Quaternion::v(); // 2464
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 2464
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 1488
		Vector::Vector(); // 1487
		Vector::Cross(
			const Vector& vOther);  // 2464
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 2464
		operator*(const Quaternion& q,
				const Vector& v);  // 444
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 1488
		Vector::Vector(); // 1487
		Vector::Cross(
			const Vector& vOther);  // 2464
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 2464
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 1488
		Vector::Vector(); // 1487
		Vector::Cross(
			const Vector& vOther);  // 2464
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1853
		Quaternion::v(); // 2464
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1853
		Quaternion::v(); // 2464
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 2464
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 2464
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 2464
		operator*(const Quaternion& q,
				const Vector& v);  // 447
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
		CTransform::GetOrigin(); // 447
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 444
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 256
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 256
		VectorAligned::operator-(
				const VectorAligned& v);  // 447
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
		VectorAligned::operator Vector(); // 447
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 447
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 460
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 457
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 1488
		Vector::Vector(); // 1487
		Vector::Cross(
			const Vector& vOther);  // 2464
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 2464
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1853
		Quaternion::v(); // 2464
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 2464
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1853
		Quaternion::v(); // 2464
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 2464
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 1488
		Vector::Vector(); // 1487
		Vector::Cross(
			const Vector& vOther);  // 2464
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 2464
		operator*(const Quaternion& q,
				const Vector& v);  // 460
		CIKChainDescription::GetName(); // 395
		ShouldDebugChain(const CIKChainDescription* pDescription); // 463
		ConVar::GetInt(); // 351
		ConVar::GetBool(); // 464
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 460
		{
			fltx4 x000; // 1010
			fltx4 y000; // 1011
			fltx4 z000; // 1012
			fltx4 x0y0; // 1013
			_mm_load_ss(const float* __P); // 1010
			_mm_movelh_ps(__m128 __A,
					__m128 __B);  // 1013
			_mm_load_ss(const float* __P); // 1011
			_mm_load_ss(const float* __P); // 1012
		}
		LoadUnaligned3SIMD<>(const void* pSIMD); // 110
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
				const fltx4& w);  // 110
		CTransform::SetPosition(
				const Vector& v0);  // 461
	}
	{
		float flZDistance; // 522
		const float  flFullOrientationThreshold; // 524
		const float  flNoOrientationThreshold; // 525
		const float  flOrientationLerpAlpha; // 527
		{
			Vector vWsClampedCollisionNormal; // 532
			const Quaternion& qMsToWs; // 555
			matrix3x4_t mWsToMsRotationOnly; // 559
			const Vector  vMsCollisionNormal; // 563
			const Vector  vMsForward; // 567
			const Vector  vMsLeft; // 568
			const Quaternion  qMsBoneOrientationZUp; // 570
			const CTransform  mMsEndEffectorInAnimation; // 573
			const Quaternion  qMsBoneOrientation; // 574
			const QuaternionAligned  qWsEndEffector; // 577
			{
				const Vector  vWsUp; // 534
				const float  flMaxAngle; // 536
				const float  flMinDotProductDifference; // 538
				{
					Quaternion qWs; // 542
					float flAngle; // 544
					Vector vWsAxis; // 545
					Vector::Vector(); // 545
				}
				CAnimPoseWrapper::GetModelToWorld(); // 534
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
						const VectorAligned& v);  // 447
				QuaternionAligned::GetUp(); // 401
				CTransform::GetUp(); // 534
				ConVar::GetFloat(); // 536
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 351
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 1694
				{
					fltx4 retVal; // 1333
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1334
				}
				SplatZSIMD<>(const fltx4& a); // 1695
				{
					fltx4 retVal; // 1314
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1315
				}
				SplatYSIMD<>(const fltx4& a); // 1695
				{
					fltx4 retVal; // 1295
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1296
				}
				SplatXSIMD<>(const fltx4& a); // 1695
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1695
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1695
				Dot3SIMD<>(const fltx4& a,
						const fltx4& b);  // 359
				{
					fltx4 retVal; // 2350
					_mm_sqrt_ps(__m128 __A); // 2351
				}
				SqrtSIMD<>(const fltx4& a); // 360
				{
					fltx4 retVal; // 1981
					_mm_cmpgt_ps(__m128 __A,
							__m128 __B);  // 1982
				}
				CmpGtSIMD<>(const fltx4& a,
						const fltx4& b);  // 361
				{
					fltx4 retVal; // 1662
					_mm_div_ps(__m128 __A,
							__m128 __B);  // 1663
				}
				DivSIMD<>(const fltx4& a,
						const fltx4& b);  // 362
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
						const fltx4& b);  // 362
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 362
				VectorAligned::NormalizedSafe(
						const VectorAligned& v);  // 351
				VectorAligned::Normalized(); // 534
				_mm_cvtss_f32(__m128 __A); // 1534
				GetZSIMD<>(fltx4 a); // 76
				VectorAligned::z(); // 40
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 534
				DEG2RAD(float flDegrees); // 538
				DotProduct(const Vector& a,
						const Vector& b);  // 540
			}
			QuaternionAligned::w(); // 41
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 41
			QuaternionAligned::operator Quaternion(); // 350
			CTransform::ToQuaternion(); // 555
			Quaternion::Quaternion(); // 875
			QuaternionInvert(const Quaternion& p); // 560
			matrix3x4_t::matrix3x4_t(); // 559
			matrix3x4_t::InitFromQuaternion(
						const Quaternion& orientation,
						const Vector& vPosition);  // 2671
			matrix3x4_t::InitFromQuaternion(
						const Quaternion& orientation);  // 560
			Vector::Vector(); // 1306
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2,
					Vector& out);  // 1307
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2);  // 2707
			matrix3x4_t::TransformVector(
					const Vector& v0);  // 563
			Vector::Normalized(); // 563
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 567
			Vector::Normalized(); // 567
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 568
			Vector::Normalized(); // 568
			QuaternionAligned::operator fltx4(); // 258
			VectorAligned::operator fltx4(); // 258
			ConcatTransforms(const CTransform  in1,
					const CTransform  in2);  // 573
			QuaternionAligned::w(); // 41
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 41
			QuaternionAligned::operator Quaternion(); // 350
			CTransform::ToQuaternion(); // 574
			Quaternion::Quaternion(); // 2001
			operator*(const Quaternion& p,
					const Quaternion& q);  // 574
			Quaternion::Quaternion(); // 2001
			operator*(const Quaternion& p,
					const Quaternion& q);  // 577
			QuaternionAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 30
			QuaternionAligned::QuaternionAligned(
						const Quaternion& rhs);  // 577
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 464
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 465
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
					const fltx4& b);  // 466
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
					const fltx4& b);  // 467
			{
				fltx4 retVal; // 1981
				_mm_cmpgt_ps(__m128 __A,
						__m128 __B);  // 1982
			}
			CmpGtSIMD<>(const fltx4& a,
					const fltx4& b);  // 468
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 1797
			NegSIMD<>(const fltx4& a); // 469
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
					const fltx4& b);  // 469
			QuaternionAlignSIMD<>(const fltx4& p,
						const fltx4& q);  // 527
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
					const fltx4& b);  // 486
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 487
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 505
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 505
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 505
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 505
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 505
			{
				fltx4 fl4Q; // 509
				fltx4 fl4PScale; // 514
				fltx4 fl4QScale; // 515
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 516
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 516
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 516
			}
			QuaternionSlerpNoAlignSIMD<>(const fltx4& p,
							const fltx4& q,
							float t);  // 479
			QuaternionSlerpNoAlignSIMD<>(const fltx4& p,
							const fltx4& q,
							float t);  // 528
			QuaternionSlerpSIMD<>(const fltx4& p,
						const fltx4& q,
						float t);  // 545
			QuaternionSlerp(const QuaternionAligned& qFrom,
					const QuaternionAligned& qTo,
					float t);  // 585
		}
		ConVar::GetFloat(); // 524
		ConVar::GetFloat(); // 525
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 527
	}
	Vector::LengthSqr(); // 413
	CAnimPoseWrapper::GetModelToWorld(); // 415
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 1791
	CAnimPoseWrapper::GetWorldSpaceBone(
				int nBoneIndex);  // 416
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 590
} /* size: 0, variables: 6, inline expansions: 7 (0 bytes) */

// <01B5EB3A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:598
void BuildTransformFromCollision(const CSpaceAgnosticBoneAccessor& boneAccessor, const CIKChainDescription* pIKChain, int nTiltBoneIndex, const Quaternion& qWsTilt, const Vector& vWsCollisionPosition, const Vector& vWsCollisionNormal)
{
} /* size: 66 */

// <01B5EBEE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:610
void BuildTransformFromCollision(const CAnimPoseWrapper& boneAccessor, const CIKChainDescription* pIKChain, int nTiltBoneIndex, const Quaternion& qWsTilt, const Vector& vWsCollisionPosition, const Vector& vWsCollisionNormal)
{
} /* size: 0 */

// <01B0B59D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:623
// variables: 6
// function calls: 19
CTransform CalculateLockableBoneTransformFromEndEffector<IK::CAnimPoseWrapper>(const CIKChainDescription* pDescription, const CTransform& xWsEndEffectorToBuildFootlockFrom, const CAnimPoseWrapper& boneFetchingObject)
{
	int nReverseFootLockBoneIndex; // 629
	const CTransform& xformWsEndEffector; // 637
	const CTransform& xformWsReverseFootLockBone; // 638
	const CTransform  xformEndEffectorBoneToWorld; // 640
	const CTransform  xformReverseFootLockInEndEffectorSpace; // 641
	const CTransform  xWsNew; // 643
	CIKChainDescription::GetReverseFootLockBoneIndex(); // 629
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 52
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 52
	CIKChainData_t::GetEndEffectorJoint(); // 83
	CIKChainDescription::GetEndEffectorJoint(); // 637
	CIKChainJointData_t::GetBoneIndex(); // 637
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 1791
	CAnimPoseWrapper::GetWorldSpaceBone(
				int nBoneIndex);  // 637
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 1791
	CAnimPoseWrapper::GetWorldSpaceBone(
				int nBoneIndex);  // 638
	QuaternionAligned::operator fltx4(); // 258
	VectorAligned::operator fltx4(); // 258
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 641
	QuaternionAligned::operator fltx4(); // 258
	VectorAligned::operator fltx4(); // 258
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 643
} /* size: 0, variables: 6, inline expansions: 19 (0 bytes) */

// <01B0B187> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:623
// variables: 6
// function calls: 13
CTransform CalculateLockableBoneTransformFromEndEffector<CSpaceAgnosticBoneAccessor>(const CIKChainDescription* pDescription, const CTransform& xWsEndEffectorToBuildFootlockFrom, const CSpaceAgnosticBoneAccessor& boneFetchingObject)
{
	int nReverseFootLockBoneIndex; // 629
	const CTransform& xformWsEndEffector; // 637
	const CTransform& xformWsReverseFootLockBone; // 638
	const CTransform  xformEndEffectorBoneToWorld; // 640
	const CTransform  xformReverseFootLockInEndEffectorSpace; // 641
	const CTransform  xWsNew; // 643
	CIKChainDescription::GetReverseFootLockBoneIndex(); // 629
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 52
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 52
	CIKChainData_t::GetEndEffectorJoint(); // 83
	CIKChainDescription::GetEndEffectorJoint(); // 637
	CIKChainJointData_t::GetBoneIndex(); // 637
	QuaternionAligned::operator fltx4(); // 258
	VectorAligned::operator fltx4(); // 258
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 641
	QuaternionAligned::operator fltx4(); // 258
	VectorAligned::operator fltx4(); // 258
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 643
} /* size: 369, variables: 6, inline expansions: 13 (108 bytes) */

// <01B5ECA2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:648
void CalculateLockableBoneTransformFromEndEffector(const CIKChainDescription* pDescription, const CTransform& xWsEndEffectorToBuildFootlockFrom, const CAnimPoseWrapper& poseWrapper)
{
} /* size: 0 */

// <01B5ED26> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:657
void CalculateLockableBoneTransformFromEndEffector(const CIKChainDescription* pDescription, const CTransform& xWsEndEffectorToBuildFootlockFrom, const CSpaceAgnosticBoneAccessor& boneAccessor)
{
} /* size: 63 */

// <01AE38DD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:667
// variables: 5
CTransform BuildFootImpactTransform<IK::CAnimPoseWrapper>(const CIKChainDescription* pChainDescription, const Vector& vWs, const Vector& vNormal, const CAnimPoseWrapper& boneFetchingObject)
{
	CTransform xWsToReturn; // 669
	{
		const Vector  vUp; // 673
		const Vector  vReferenceForward; // 674
		const Vector  vLeft; // 676
		const Vector  vForward; // 677
	}
} /* size: 0, variables: 1 */

// <01AE25E5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:667
// variables: 5
CTransform BuildFootImpactTransform<CSpaceAgnosticBoneAccessor>(const CIKChainDescription* pChainDescription, const Vector& vWs, const Vector& vNormal, const CSpaceAgnosticBoneAccessor& boneFetchingObject)
{
	CTransform xWsToReturn; // 669
	{
		const Vector  vUp; // 673
		const Vector  vReferenceForward; // 674
		const Vector  vLeft; // 676
		const Vector  vForward; // 677
	}
} /* size: 0, variables: 1 */

// <01B08A38> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:687
// variables: 66
// function calls: 169
void DebugDrawFootPlant<IK::CAnimPoseWrapper>(const CIKChainDescription* pDescription, const Vector& vWs, const Vector& vNormal, const CAnimPoseWrapper& boneFetchingObject, const VertexColor_t& color, const float flTimeToLive, const float flBoxScale, const char* pMessage)
{
	const CTransform  xWsFootImpact; // 697
	CLabelledDebugHelper* pDebugHelper; // 699
	Vector vWsPosition; // 701
	Vector vBoxDimensions; // 703
	{
		const IIKRuleDescription* pRule; // 704
		const CUtlLeanVector<const IIKRuleDescription*, short int>& __for_range; // 22108
		const_iterator __for_begin; // 19886
		const_iterator __for_end; // 19886
		{
			const CIKRuleDescription_Ground* pGroundRule; // 706
			{
				const CIKRuleDescription_Ground_VirtualPlanes* pGroundRule2; // 714
				CIKRuleDescription_Ground_VirtualPlanes::GetTraceRadius(); // 717
			}
			CIKRuleDescription_Ground::GetTraceRadius(); // 709
		}
		CUtlLeanVectorBase<const IIKRuleDescription::Base(); // 416
		CUtlLeanVectorImpl<CUtlLeanVectorBase<const IIKRuleDescription::begin(); // 704
		CUtlLeanVectorImpl<CUtlLeanVectorBase<const IIKRuleDescription::Count(); // 418
		CUtlLeanVectorImpl<CUtlLeanVectorBase<const IIKRuleDescription::end(); // 704
	}
	{
		const Vector  vUp; // 673
		const Vector  vReferenceForward; // 674
		const Vector  vLeft; // 676
		const Vector  vForward; // 677
		CIKChainDescription::DoBonesOrientAlongPositiveX(); // 674
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 52
		CUtlMemory<CIKChainJointData_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
				int i);  // 52
		CIKChainData_t::GetEndEffectorJoint(); // 83
		CIKChainDescription::GetEndEffectorJoint(); // 674
		CIKChainJointData_t::GetBoneIndex(); // 674
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
		ConcatTransforms(const CTransform  in1,
				const CTransform  in2);  // 1791
		CAnimPoseWrapper::GetWorldSpaceBone(
					int nBoneIndex);  // 674
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
		QuaternionAligned::GetForward(); // 391
		CTransform::GetForward(); // 674
		Vector::Normalized(); // 676
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
				vec_t s);  // 674
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 1488
		Vector::Vector(); // 1487
		Vector::Cross(
			const Vector& vOther);  // 676
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
		VectorAligned::operator Vector(); // 674
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 1488
		Vector::Vector(); // 1487
		Vector::Cross(
			const Vector& vOther);  // 677
		QuaternionAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 217
		QuaternionAligned::operator=(
				const Quaternion& vOther);  // 678
	}
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 669
	{
		fltx4 x000; // 1010
		fltx4 y000; // 1011
		fltx4 z000; // 1012
		fltx4 x0y0; // 1013
		_mm_load_ss(const float* __P); // 1010
		_mm_load_ss(const float* __P); // 1011
		_mm_load_ss(const float* __P); // 1012
		_mm_movelh_ps(__m128 __A,
				__m128 __B);  // 1013
	}
	LoadUnaligned3SIMD<>(const void* pSIMD); // 110
	VectorAligned::operator fltx4(); // 110
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
			const fltx4& w);  // 110
	VectorAligned::operator=(
			fltx4 src);  // 110
	CTransform::SetPosition(
			const Vector& v0);  // 681
	BuildFootImpactTransform<IK::CAnimPoseWrapper>(const CIKChainDescription* pChainDescription,
							const Vector& vWs,
							const Vector& vNormal,
							const CAnimPoseWrapper& boneFetchingObject);  // 697
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
			const VectorAligned& v);  // 447
	QuaternionAligned::GetUp(); // 701
	{
		fltx4 retVal; // 1478
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1479
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1481
	}
	SetWSIMD<>(fltx4 a,
			float f);  // 71
	VectorAligned::operator fltx4(); // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 701
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
			vec_t s);  // 701
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 256
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 256
	VectorAligned::operator-(
			const VectorAligned& v);  // 701
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 40
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 701
	Vector::operator*=(
			float fl);  // 722
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
			const Vector& rhs);  // 725
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 725
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 726
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 726
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
			const Vector& rhs);  // 726
} /* size: 0, variables: 4, inline expansions: 56 (0 bytes) */

// <01AEDCAC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:687
// variables: 66
// function calls: 166
void DebugDrawFootPlant<CSpaceAgnosticBoneAccessor>(const CIKChainDescription* pDescription, const Vector& vWs, const Vector& vNormal, const CSpaceAgnosticBoneAccessor& boneFetchingObject, const VertexColor_t& color, const float flTimeToLive, const float flBoxScale, const char* pMessage)
{
	const CTransform  xWsFootImpact; // 697
	CLabelledDebugHelper* pDebugHelper; // 699
	Vector vWsPosition; // 701
	Vector vBoxDimensions; // 703
	{
		const IIKRuleDescription* pRule; // 704
		const CUtlLeanVector<const IIKRuleDescription*, short int>& __for_range; // 22108
		const_iterator __for_begin; // 19886
		const_iterator __for_end; // 19886
		{
			const CIKRuleDescription_Ground* pGroundRule; // 706
			{
				const CIKRuleDescription_Ground_VirtualPlanes* pGroundRule2; // 714
				CIKRuleDescription_Ground_VirtualPlanes::GetTraceRadius(); // 717
			}
			CIKRuleDescription_Ground::GetTraceRadius(); // 709
		}
		CUtlLeanVectorBase<const IIKRuleDescription::Base(); // 416
		CUtlLeanVectorImpl<CUtlLeanVectorBase<const IIKRuleDescription::begin(); // 704
		CUtlLeanVectorImpl<CUtlLeanVectorBase<const IIKRuleDescription::Count(); // 418
		CUtlLeanVectorImpl<CUtlLeanVectorBase<const IIKRuleDescription::end(); // 704
	}
	{
		const Vector  vUp; // 673
		const Vector  vReferenceForward; // 674
		const Vector  vLeft; // 676
		const Vector  vForward; // 677
		CIKChainDescription::DoBonesOrientAlongPositiveX(); // 674
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 52
		CUtlMemory<CIKChainJointData_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
				int i);  // 52
		CIKChainData_t::GetEndEffectorJoint(); // 83
		CIKChainDescription::GetEndEffectorJoint(); // 674
		CIKChainJointData_t::GetBoneIndex(); // 674
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
		QuaternionAligned::GetForward(); // 391
		CTransform::GetForward(); // 674
		Vector::Normalized(); // 676
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
				vec_t s);  // 674
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 1488
		Vector::Vector(); // 1487
		Vector::Cross(
			const Vector& vOther);  // 676
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
		VectorAligned::operator Vector(); // 674
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 1488
		Vector::Vector(); // 1487
		Vector::Cross(
			const Vector& vOther);  // 677
		QuaternionAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 217
		QuaternionAligned::operator=(
				const Quaternion& vOther);  // 678
	}
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 669
	{
		fltx4 x000; // 1010
		fltx4 y000; // 1011
		fltx4 z000; // 1012
		fltx4 x0y0; // 1013
		_mm_load_ss(const float* __P); // 1010
		_mm_load_ss(const float* __P); // 1011
		_mm_load_ss(const float* __P); // 1012
		_mm_movelh_ps(__m128 __A,
				__m128 __B);  // 1013
	}
	LoadUnaligned3SIMD<>(const void* pSIMD); // 110
	VectorAligned::operator fltx4(); // 110
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
			const fltx4& w);  // 110
	VectorAligned::operator=(
			fltx4 src);  // 110
	CTransform::SetPosition(
			const Vector& v0);  // 681
	BuildFootImpactTransform<CSpaceAgnosticBoneAccessor>(const CIKChainDescription* pChainDescription,
								const Vector& vWs,
								const Vector& vNormal,
								const CSpaceAgnosticBoneAccessor& boneFetchingObject);  // 697
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
			const VectorAligned& v);  // 447
	QuaternionAligned::GetUp(); // 701
	{
		fltx4 retVal; // 1478
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1479
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1481
	}
	SetWSIMD<>(fltx4 a,
			float f);  // 71
	VectorAligned::operator fltx4(); // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 701
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
			vec_t s);  // 701
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 256
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 256
	VectorAligned::operator-(
			const VectorAligned& v);  // 701
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 40
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 701
	Vector::operator*=(
			float fl);  // 722
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
			const Vector& rhs);  // 725
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 725
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 726
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 726
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
			const Vector& rhs);  // 726
} /* size: 1281, variables: 4, inline expansions: 56 (1293 bytes) */

// <01B2BC07> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:729
// variables: 2
void DebugDrawFootPlant(const CIKChainDescription* pDescription, const Vector& vWs, const Vector& vNormal, const CAnimPoseWrapper& pAnimPose, const VertexColor_t& color, const float flTimeToLive, const float flBoxScale, const char* pFormatString, ...)
{
	va_list argptr; // 740
	char buffer; // 741
} /* size: 0, variables: 2 */

// <01B06AEC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:751
// variables: 38
// function calls: 129
bool ShouldBreakLockPreSolve<CSpaceAgnosticBoneAccessor>(const CIKChainDescription* pChainDescription, const CTransform& xWsTarget, const CTransform& xWsLockedEndEffector, const CSpaceAgnosticBoneAccessor& boneAccessor, const Vector& vWsNormal, bool bDebug)
{
	bool bShouldForceUnlock; // 760
	{
		float flMaxLockDistanceToTarget; // 767
		const float  flSquareDistanceToTarget; // 768
		{
			VertexColor_t color; // 775
			const CTransform  xWs; // 776
			VertexColor_t::AsUint32(); // 93
			VertexColor_t::AsUint32Ptr(); // 93
			VertexColor_t::VertexColor_t(
					const VertexColor_t& src);  // 160
			VertexColor_t::operator*(
					float flScale);  // 775
			CalculateLockableBoneTransformFromEndEffector(const CIKChainDescription* pDescription,
									const CTransform& xWsEndEffectorToBuildFootlockFrom,
									const CSpaceAgnosticBoneAccessor& boneAccessor);  // 776
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 777
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
			CTransform::GetOrigin(); // 778
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
			CTransform::GetOrigin(); // 778
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 256
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 256
			VectorAligned::operator-(
					const VectorAligned& v);  // 778
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1694
			{
				fltx4 retVal; // 1333
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1334
			}
			SplatZSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1314
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1315
			}
			SplatYSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1295
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1296
			}
			SplatXSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			Dot3SIMD<>(const fltx4& a,
					const fltx4& b);  // 298
			{
				fltx4 retVal; // 2350
				_mm_sqrt_ps(__m128 __A); // 2351
			}
			SqrtSIMD<>(const fltx4& a); // 299
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 300
			VectorAligned::Length(); // 778
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 778
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 778
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
		CTransform::GetOrigin(); // 768
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
		CTransform::GetOrigin(); // 768
		CIKChainDescription::GetMaxLockDistanceToTarget(); // 767
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 256
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 256
		VectorAligned::operator-(
				const VectorAligned& v);  // 768
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1694
		{
			fltx4 retVal; // 1333
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1334
		}
		SplatZSIMD<>(const fltx4& a); // 1695
		{
			fltx4 retVal; // 1314
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1315
		}
		SplatYSIMD<>(const fltx4& a); // 1695
		{
			fltx4 retVal; // 1295
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1296
		}
		SplatXSIMD<>(const fltx4& a); // 1695
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1695
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1695
		Dot3SIMD<>(const fltx4& a,
				const fltx4& b);  // 323
		_mm_cvtss_f32(__m128 __A); // 1496
		GetXSIMD<>(fltx4 a); // 324
		VectorAligned::LengthSqr(); // 768
		CIKChainDescription::GetName(); // 395
		ShouldDebugChain(const CIKChainDescription* pDescription); // 773
		CUtlString::Get(); // 99
		CUtlString::String(); // 780
	}
	{
		const Quaternion  qWsCurrentEndEffector; // 790
		const Quaternion  qWsLockEndEffector; // 791
		const Vector  vWsCurrentUp; // 793
		const Vector  vWsLockUp; // 794
		const float  flDotBetweenUps; // 796
		float flMaximumDeltaDegrees; // 798
		const float  flMaximumRadians; // 799
		const float  flMinimumDeltaDot; // 800
		{
			float flLockDegrees; // 807
			float flLockDegreesOverMax; // 808
			VertexColor_t color; // 809
			const CTransform  xWs; // 810
			RAD2DEG(float flRadians); // 807
			RAD2DEG(float flRadians); // 808
			VertexColor_t::AsUint32(); // 93
			VertexColor_t::AsUint32Ptr(); // 93
			VertexColor_t::VertexColor_t(
					const VertexColor_t& src);  // 160
			VertexColor_t::operator*(
					float flScale);  // 809
			CalculateLockableBoneTransformFromEndEffector(const CIKChainDescription* pDescription,
									const CTransform& xWsEndEffectorToBuildFootlockFrom,
									const CSpaceAgnosticBoneAccessor& boneAccessor);  // 810
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 811
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
			CTransform::GetOrigin(); // 812
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
			CTransform::GetOrigin(); // 812
			CUtlString::Get(); // 99
			CUtlString::String(); // 813
		}
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 52
		CUtlMemory<CIKChainJointData_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
				int i);  // 52
		CIKChainData_t::GetEndEffectorJoint(); // 83
		CIKChainDescription::GetEndEffectorJoint(); // 790
		CIKChainJointData_t::GetBoneIndex(); // 790
		QuaternionAligned::w(); // 41
		Quaternion::Quaternion(
				vec_t ix,
				vec_t iy,
				vec_t iz,
				vec_t iw);  // 41
		QuaternionAligned::operator Quaternion(); // 350
		CTransform::ToQuaternion(); // 790
		QuaternionAligned::w(); // 41
		Quaternion::Quaternion(
				vec_t ix,
				vec_t iy,
				vec_t iz,
				vec_t iw);  // 41
		QuaternionAligned::operator Quaternion(); // 791
		DotProduct(const Vector& a,
				const Vector& b);  // 796
		DEG2RAD(float flDegrees); // 799
		CIKChainDescription::GetName(); // 395
		ShouldDebugChain(const CIKChainDescription* pDescription); // 805
	}
	CIKChainDescription::GetReverseFootLockBoneIndex(); // 788
} /* size: 1772, variables: 1, inline expansions: 1 (0 bytes) */

// <01AF039F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:751
// variables: 38
// function calls: 132
bool ShouldBreakLockPreSolve<IK::CAnimPoseWrapper>(const CIKChainDescription* pChainDescription, const CTransform& xWsTarget, const CTransform& xWsLockedEndEffector, const CAnimPoseWrapper& boneAccessor, const Vector& vWsNormal, bool bDebug)
{
	bool bShouldForceUnlock; // 760
	{
		float flMaxLockDistanceToTarget; // 767
		const float  flSquareDistanceToTarget; // 768
		{
			VertexColor_t color; // 775
			const CTransform  xWs; // 776
			VertexColor_t::AsUint32(); // 93
			VertexColor_t::AsUint32Ptr(); // 93
			VertexColor_t::VertexColor_t(
					const VertexColor_t& src);  // 160
			VertexColor_t::operator*(
					float flScale);  // 775
			CalculateLockableBoneTransformFromEndEffector(const CIKChainDescription* pDescription,
									const CTransform& xWsEndEffectorToBuildFootlockFrom,
									const CAnimPoseWrapper& poseWrapper);  // 776
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 777
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
			CTransform::GetOrigin(); // 778
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
			CTransform::GetOrigin(); // 778
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 256
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 256
			VectorAligned::operator-(
					const VectorAligned& v);  // 778
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1694
			{
				fltx4 retVal; // 1333
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1334
			}
			SplatZSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1314
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1315
			}
			SplatYSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1295
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1296
			}
			SplatXSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			Dot3SIMD<>(const fltx4& a,
					const fltx4& b);  // 298
			{
				fltx4 retVal; // 2350
				_mm_sqrt_ps(__m128 __A); // 2351
			}
			SqrtSIMD<>(const fltx4& a); // 299
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 300
			VectorAligned::Length(); // 778
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 778
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 778
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
		CTransform::GetOrigin(); // 768
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
		CTransform::GetOrigin(); // 768
		CIKChainDescription::GetMaxLockDistanceToTarget(); // 767
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 256
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 256
		VectorAligned::operator-(
				const VectorAligned& v);  // 768
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1694
		{
			fltx4 retVal; // 1333
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1334
		}
		SplatZSIMD<>(const fltx4& a); // 1695
		{
			fltx4 retVal; // 1314
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1315
		}
		SplatYSIMD<>(const fltx4& a); // 1695
		{
			fltx4 retVal; // 1295
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1296
		}
		SplatXSIMD<>(const fltx4& a); // 1695
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1695
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1695
		Dot3SIMD<>(const fltx4& a,
				const fltx4& b);  // 323
		_mm_cvtss_f32(__m128 __A); // 1496
		GetXSIMD<>(fltx4 a); // 324
		VectorAligned::LengthSqr(); // 768
		CIKChainDescription::GetName(); // 395
		ShouldDebugChain(const CIKChainDescription* pDescription); // 773
		CUtlString::Get(); // 99
		CUtlString::String(); // 780
	}
	{
		const Quaternion  qWsCurrentEndEffector; // 790
		const Quaternion  qWsLockEndEffector; // 791
		const Vector  vWsCurrentUp; // 793
		const Vector  vWsLockUp; // 794
		const float  flDotBetweenUps; // 796
		float flMaximumDeltaDegrees; // 798
		const float  flMaximumRadians; // 799
		const float  flMinimumDeltaDot; // 800
		{
			float flLockDegrees; // 807
			float flLockDegreesOverMax; // 808
			VertexColor_t color; // 809
			const CTransform  xWs; // 810
			RAD2DEG(float flRadians); // 807
			RAD2DEG(float flRadians); // 808
			VertexColor_t::AsUint32(); // 93
			VertexColor_t::AsUint32Ptr(); // 93
			VertexColor_t::VertexColor_t(
					const VertexColor_t& src);  // 160
			VertexColor_t::operator*(
					float flScale);  // 809
			CalculateLockableBoneTransformFromEndEffector(const CIKChainDescription* pDescription,
									const CTransform& xWsEndEffectorToBuildFootlockFrom,
									const CAnimPoseWrapper& poseWrapper);  // 810
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 811
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
			CTransform::GetOrigin(); // 812
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
			CTransform::GetOrigin(); // 812
			CUtlString::Get(); // 99
			CUtlString::String(); // 813
		}
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 52
		CUtlMemory<CIKChainJointData_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
				int i);  // 52
		CIKChainData_t::GetEndEffectorJoint(); // 83
		CIKChainDescription::GetEndEffectorJoint(); // 790
		CIKChainJointData_t::GetBoneIndex(); // 790
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
		ConcatTransforms(const CTransform  in1,
				const CTransform  in2);  // 1791
		CAnimPoseWrapper::GetWorldSpaceBone(
					int nBoneIndex);  // 790
		QuaternionAligned::w(); // 41
		Quaternion::Quaternion(
				vec_t ix,
				vec_t iy,
				vec_t iz,
				vec_t iw);  // 41
		QuaternionAligned::operator Quaternion(); // 350
		CTransform::ToQuaternion(); // 790
		QuaternionAligned::w(); // 41
		Quaternion::Quaternion(
				vec_t ix,
				vec_t iy,
				vec_t iz,
				vec_t iw);  // 41
		QuaternionAligned::operator Quaternion(); // 791
		DotProduct(const Vector& a,
				const Vector& b);  // 796
		DEG2RAD(float flDegrees); // 799
		CIKChainDescription::GetName(); // 395
		ShouldDebugChain(const CIKChainDescription* pDescription); // 805
	}
	CIKChainDescription::GetReverseFootLockBoneIndex(); // 788
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <01B2BB2E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:822
void ShouldBreakLockPreSolve(const CIKChainDescription* pChainDescription, const CTransform& xWsTarget, const CTransform& xWsLockedEndEffector, const CSpaceAgnosticBoneAccessor& boneAccessor, const Vector& vWsNormal, bool bDebug)
{
} /* size: 13 */

// <01AE37C3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:836
// variables: 15
bool IKSolve_Perlin2Bone<CSpaceAgnosticBoneAccessor>(const CIKChainData_t* pIkChain, const IKSolverSettings_t& solverSettings, const CTransform& xWsTargetFoot, CSpaceAgnosticBoneAccessor& boneAccessor)
{
	const CUtlVector<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >& jointVector; // 838
	const CIKChainJointData_t& thighJoint; // 840
	const CIKChainJointData_t& kneeJoint; // 841
	const CIKChainJointData_t& footJoint; // 842
	int nThighBoneIndex; // 844
	int nKneeBoneIndex; // 845
	CTransform xformWsThigh; // 847
	Vector vTargetKneeDirection; // 848
	CTransform xformWsKnee; // 853
	const Vector  vTargetKneePosition; // 854
	bool bPositiveXPointsToChild; // 856
	CTransform xformWsFoot; // 858
	bool bSucceeded; // 860
	{
		const Quaternion& qWsFoot; // 876
		const int  nEndEffectorBoneIndex; // 878
	}
} /* size: 0, variables: 13 */

// <01AE36A9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:836
// variables: 15
bool IKSolve_Perlin2Bone<IK::CAnimPoseWrapper>(const CIKChainData_t* pIkChain, const IKSolverSettings_t& solverSettings, const CTransform& xWsTargetFoot, CAnimPoseWrapper& boneAccessor)
{
	const CUtlVector<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >& jointVector; // 838
	const CIKChainJointData_t& thighJoint; // 840
	const CIKChainJointData_t& kneeJoint; // 841
	const CIKChainJointData_t& footJoint; // 842
	int nThighBoneIndex; // 844
	int nKneeBoneIndex; // 845
	CTransform xformWsThigh; // 847
	Vector vTargetKneeDirection; // 848
	CTransform xformWsKnee; // 853
	const Vector  vTargetKneePosition; // 854
	bool bPositiveXPointsToChild; // 856
	CTransform xformWsFoot; // 858
	bool bSucceeded; // 860
	{
		const Quaternion& qWsFoot; // 876
		const int  nEndEffectorBoneIndex; // 878
	}
} /* size: 0, variables: 13 */

// <01B2A9D8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:888
// variables: 14
// function calls: 70
void AlignIKChainToEndEffectorByRotatingRoot(const CIKChainData_t* pIKChain, IPoseAccessor* pPoseAccessor, const CTransform& xWsEndEffectorTarget, IAnimationDebugRenderer* pDebugRenderer)
{
	int nRootBone; // 890
	int nBoneParent; // 891
	const CTransform& mWsRootJointParent; // 893
	const CTransform& mWsRootJoint; // 894
	const Vector& vWsRootJoint; // 896
	const Vector& vWsEndEffector; // 897
	const Quaternion  qWsDeltaRotation; // 898
	const Quaternion  qWsRootJoint; // 900
	const Quaternion  qWsRootJointRotated; // 902
	CTransform xPsBone; // 904
	{
		const CIKChainJointData_t& jointDescription; // 910
		{
			const CTransform  mWsDesired; // 914
			const CTransform  mWsConstrained; // 915
			ConcatTransforms(const CTransform  in1,
					const CTransform  in2);  // 914
			QuaternionAligned::operator fltx4(); // 471
			VectorAligned::operator fltx4(); // 471
			QuaternionAligned::operator fltx4(); // 471
			VectorAligned::operator fltx4(); // 471
			CTransform::operator*(
					const CTransform& rhs);  // 916
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 916
		}
		CUtlVectorBase<IIKJointConstraintData::Count(); // 912
		CUtlMemory<CIKChainJointData_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
				int i);  // 910
	}
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 894
	VectorAligned::operator fltx4(); // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 896
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 896
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 52
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 52
	CIKChainData_t::GetEndEffectorJoint(); // 897
	VectorAligned::operator fltx4(); // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 897
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 256
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 256
	VectorAligned::operator-(
			const VectorAligned& v);  // 898
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 898
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 929
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 929
	Quaternion::Quaternion(); // 928
	Vector::LengthSqr(); // 930
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 932
	DotProduct(const Vector& a,
			const Vector& b);  // 933
	Vector::operator=(
			const Vector& vOther);  // 932
	BuildRotateBetweenVectorsQuaternion(const Vector& vFrom,
						const Vector& vTo);  // 898
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 897
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 898
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 898
	QuaternionAligned::w(); // 41
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 350
	CTransform::ToQuaternion(); // 900
	Quaternion::Quaternion(); // 2001
	operator*(const Quaternion& p,
			const Quaternion& q);  // 902
	QuaternionAligned::w(); // 41
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 350
	CTransform::ToQuaternion(); // 906
	Quaternion::Quaternion(); // 875
	QuaternionInvert(const Quaternion& p); // 906
	Quaternion::Quaternion(); // 2001
	operator*(const Quaternion& p,
			const Quaternion& q);  // 906
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 217
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 906
} /* size: 1335, variables: 10, inline expansions: 57 (1251 bytes) */

// <01B04329> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:924
// variables: 46
// function calls: 160
bool SolveIK<CSpaceAgnosticBoneAccessor>(const CIKChainData_t* pIKChain, const IKSolverSettings_t& solverSettings, const CTransform& xWsEndEffectorTarget, CSpaceAgnosticBoneAccessor& boneAccessor, IAnimationDebugRenderer* pDebugRenderer)
{
	const char   __FUNCTION__; // 12484
	bool bDidAnyWork; // 929
	bool bSolveSucceeded; // 930
	bool bDoConstraintsPostSolve; // 938
	{
		CIKSolver_CCD ikSolver; // 964
		CSpaceAgnosticBoneAccessor::GetModelToWorld(); // 964
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
				const VectorAligned& v);  // 408
		VectorAligned::operator fltx4(); // 406
		{
			fltx4 retVal; // 1352
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1353
		}
		SplatWSIMD<>(const fltx4& a); // 406
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 409
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 410
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 411
		CTransform::TransformVector(
				const VectorAligned& v0);  // 442
		CTransform::TransformVectorByInverse(
					const VectorAligned& v0);  // 964
		CIKSolver_CCD::CIKSolver_CCD(
				IPoseAccessor* pAnimPose,
				const VectorAligned& vTargetMS,
				const CIKChainData_t* pIkChain);  // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 971
	}
	{
		int nJoint; // 981
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 981
	}
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 926
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 932
	CUtlString::Get(); // 99
	CUtlString::String(); // 934
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 81
	CFmtStrN<256>::String(); // 934
	CUtlString::CUtlString(
			const char* pString);  // 934
	CUtlString::~CUtlString(); // 934
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 934
	IKSolve_Fabrik(const CIKChainData_t* pIKChain,
			const IKSolverSettings_t& solverSettings,
			const CTransform& xWsTarget,
			CSpaceAgnosticBoneAccessor& boneAccessor,
			IAnimationDebugRenderer* pDebugRenderer);  // 959
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 840
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 840
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 841
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 842
	CIKChainJointData_t::GetBoneIndex(); // 844
	CIKChainJointData_t::GetBoneIndex(); // 845
	{
		fltx4 retVal; // 1478
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1479
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1481
	}
	SetWSIMD<>(fltx4 a,
			float f);  // 71
	VectorAligned::operator fltx4(); // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 850
	CIKChainJointData_t::GetBoneIndex(); // 850
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
	CTransform::GetOrigin(); // 850
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 256
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 256
	VectorAligned::operator-(
			const VectorAligned& v);  // 850
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 351
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1694
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	Dot3SIMD<>(const fltx4& a,
			const fltx4& b);  // 359
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 360
	{
		fltx4 retVal; // 1981
		_mm_cmpgt_ps(__m128 __A,
				__m128 __B);  // 1982
	}
	CmpGtSIMD<>(const fltx4& a,
			const fltx4& b);  // 361
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 362
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
			const fltx4& b);  // 362
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 362
	VectorAligned::NormalizedSafe(
			const VectorAligned& v);  // 351
	VectorAligned::Normalized(); // 850
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 850
	Vector::operator=(
			const Vector& vOther);  // 850
	CIKChainJointData_t::GetBoneIndex(); // 853
	VectorAligned::operator fltx4(); // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 854
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 854
	CIKChainJointData_t::GetBoneIndex(); // 858
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 864
	{
		const Quaternion& qWsFoot; // 876
		const int  nEndEffectorBoneIndex; // 878
		QuaternionAligned::w(); // 41
		Quaternion::Quaternion(
				vec_t ix,
				vec_t iy,
				vec_t iz,
				vec_t iw);  // 41
		QuaternionAligned::operator Quaternion(); // 876
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				CTransform &);  // 881
		CSpaceAgnosticBoneAccessor::GetScale(); // 881
		VectorAligned::operator fltx4(); // 71
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 881
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 42
		VectorAligned::AsVector(); // 881
		VectorAligned::VectorAligned(); // 33
		QuaternionAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 30
		QuaternionAligned::QuaternionAligned(
					const Quaternion& rhs);  // 33
		CTransform::SetPositionAndScale(
					const Vector& v0,
					float flScale);  // 33
		CTransform::CTransform(
				const Vector& v,
				const Quaternion& q,
				float flScale);  // 881
		CIKChainJointData_t::GetBoneIndex(); // 882
	}
	IKSolve_Perlin2Bone<CSpaceAgnosticBoneAccessor>(const CIKChainData_t* pIkChain,
							const IKSolverSettings_t& solverSettings,
							const CTransform& xWsTargetFoot,
							CSpaceAgnosticBoneAccessor& boneAccessor);  // 949
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 989
} /* size: 1580, variables: 4, inline expansions: 79 (1423 bytes) */

// <01B01783> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:924
// variables: 46
// function calls: 175
bool SolveIK<IK::CAnimPoseWrapper>(const CIKChainData_t* pIKChain, const IKSolverSettings_t& solverSettings, const CTransform& xWsEndEffectorTarget, CAnimPoseWrapper& boneAccessor, IAnimationDebugRenderer* pDebugRenderer)
{
	const char   __FUNCTION__; // 12484
	bool bDidAnyWork; // 929
	bool bSolveSucceeded; // 930
	bool bDoConstraintsPostSolve; // 938
	{
		CIKSolver_CCD ikSolver; // 964
		CAnimPoseWrapper::GetModelToWorld(); // 964
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
				const VectorAligned& v);  // 408
		VectorAligned::operator fltx4(); // 406
		{
			fltx4 retVal; // 1352
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1353
		}
		SplatWSIMD<>(const fltx4& a); // 406
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 409
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 410
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 411
		CTransform::TransformVector(
				const VectorAligned& v0);  // 442
		CTransform::TransformVectorByInverse(
					const VectorAligned& v0);  // 964
		CIKSolver_CCD::CIKSolver_CCD(
				IPoseAccessor* pAnimPose,
				const VectorAligned& vTargetMS,
				const CIKChainData_t* pIkChain);  // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 971
	}
	{
		int nJoint; // 981
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 981
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
		ConcatTransforms(const CTransform  in1,
				const CTransform  in2);  // 1791
		CAnimPoseWrapper::GetWorldSpaceBone(
					int nBoneIndex);  // 983
	}
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 926
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 932
	CUtlString::Get(); // 99
	CUtlString::String(); // 934
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 81
	CFmtStrN<256>::String(); // 934
	CUtlString::CUtlString(
			const char* pString);  // 934
	CUtlString::~CUtlString(); // 934
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 934
	IKSolve_Fabrik(const CIKChainData_t* pIKChain,
			const IKSolverSettings_t& solverSettings,
			const CTransform& xWsTarget,
			CAnimPoseWrapper& poseWrapper,
			IAnimationDebugRenderer* pDebugRenderer);  // 959
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 840
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 840
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 841
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 842
	CIKChainJointData_t::GetBoneIndex(); // 844
	CIKChainJointData_t::GetBoneIndex(); // 845
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 1791
	CAnimPoseWrapper::GetWorldSpaceBone(
				int nBoneIndex);  // 847
	{
		fltx4 retVal; // 1478
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1479
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1481
	}
	SetWSIMD<>(fltx4 a,
			float f);  // 71
	VectorAligned::operator fltx4(); // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 850
	CIKChainJointData_t::GetBoneIndex(); // 850
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 1791
	CAnimPoseWrapper::GetWorldSpaceBone(
				int nBoneIndex);  // 850
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
	CTransform::GetOrigin(); // 850
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 256
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 256
	VectorAligned::operator-(
			const VectorAligned& v);  // 850
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 351
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1694
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	Dot3SIMD<>(const fltx4& a,
			const fltx4& b);  // 359
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 360
	{
		fltx4 retVal; // 1981
		_mm_cmpgt_ps(__m128 __A,
				__m128 __B);  // 1982
	}
	CmpGtSIMD<>(const fltx4& a,
			const fltx4& b);  // 361
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 362
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
			const fltx4& b);  // 362
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 362
	VectorAligned::NormalizedSafe(
			const VectorAligned& v);  // 351
	VectorAligned::Normalized(); // 850
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 850
	Vector::operator=(
			const Vector& vOther);  // 850
	CIKChainJointData_t::GetBoneIndex(); // 853
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 1791
	CAnimPoseWrapper::GetWorldSpaceBone(
				int nBoneIndex);  // 853
	VectorAligned::operator fltx4(); // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 854
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 854
	CIKChainJointData_t::GetBoneIndex(); // 858
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 1791
	CAnimPoseWrapper::GetWorldSpaceBone(
				int nBoneIndex);  // 858
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 864
	{
		const Quaternion& qWsFoot; // 876
		const int  nEndEffectorBoneIndex; // 878
		QuaternionAligned::w(); // 41
		Quaternion::Quaternion(
				vec_t ix,
				vec_t iy,
				vec_t iz,
				vec_t iw);  // 41
		QuaternionAligned::operator Quaternion(); // 876
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				CTransform &);  // 881
		CIKChainJointData_t::GetBoneIndex(); // 882
		CAnimPoseWrapper::GetScale(); // 881
		VectorAligned::operator fltx4(); // 71
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 881
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 42
		VectorAligned::AsVector(); // 881
		VectorAligned::VectorAligned(); // 33
		QuaternionAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 30
		QuaternionAligned::QuaternionAligned(
					const Quaternion& rhs);  // 33
		CTransform::SetPositionAndScale(
					const Vector& v0,
					float flScale);  // 33
		CTransform::CTransform(
				const Vector& v,
				const Quaternion& q,
				float flScale);  // 881
	}
	IKSolve_Perlin2Bone<IK::CAnimPoseWrapper>(const CIKChainData_t* pIkChain,
							const IKSolverSettings_t& solverSettings,
							const CTransform& xWsTargetFoot,
							CAnimPoseWrapper& boneAccessor);  // 949
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 989
} /* size: 2009, variables: 4, inline expansions: 91 (2131 bytes) */

// <01B2A91E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:998
void Solve(const CIKChainData_t* pDescription, const IKSolverSettings_t& settings, const CTransform& xWsEndEffectorTarget, CSpaceAgnosticBoneAccessor& poseWrapper, IAnimationDebugRenderer* pDebugRenderer)
{
} /* size: 9 */

// <01B2A864> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1003
void Solve(const CIKChainData_t* pDescription, const IKSolverSettings_t& settings, const CTransform& xWsEndEffectorTarget, CAnimPoseWrapper& poseWrapper, IAnimationDebugRenderer* pDebugRenderer)
{
} /* size: 9 */

// <01AFE37D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1009
// variables: 62
// function calls: 224
void UpdateGroundTarget<CSpaceAgnosticBoneAccessor, CTraceRequest>(const CIKChainDescription* pIKChain, const CIKRuleDescription_Ground_VirtualPlanes* pRuleDescription, const CSpaceAgnosticBoneAccessor& boneAccessor, const Vector& vWsTiltNormal, const Vector& vWsAverageFootPosition, const float flDeltaTime, CTraceRequest& traceHelper, CriticallyDampedNormal& collisionNormalSpring, CriticallyDampedFloat& collisionZSpring)
{
	const VectorAligned  vWsEndEffectorAnimationIdealPosition; // 1021
	Vector vRayStartPoint; // 1024
	Vector vRayEndPoint; // 1025
	const CTraceResult& trace; // 1058
	Vector vWsAveragedGroundPlaneHitPosition; // 1074
	Vector vWsAveragedGroundPlaneHitNormal; // 1075
	Vector vWsCollisionPoint; // 1090
	Vector vWsCollisionNormal; // 1091
	{
		VectorAligned vWsNextRaycastOrigin; // 1028
		Vector vUp; // 1031
		float flRadius; // 1037
		Ray_t ray; // 1052
		{
			const VertexColor_t& color; // 1041
			CLabelledDebugHelper* pDebugHelper; // 1043
			Vector vDimensions; // 1045
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1045
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 1045
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
					const Vector& rhs);  // 1048
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
					const Vector& rhs);  // 1048
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 1048
			QuaternionAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 30
			QuaternionAligned::QuaternionAligned(
						const Quaternion& rhs);  // 1048
			Vector::Vector(); // 1464
			VectorDivide(const Vector& a,
					vec_t b,
					Vector& c);  // 1465
			Vector::operator/(
					float fl);  // 1048
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 1048
			CUtlString::Get(); // 99
			CUtlString::String(); // 1049
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 81
			CFmtStrN<256>::String(); // 1049
			CUtlString::CUtlString(
					const char* pString);  // 1049
			CUtlString::~CUtlString(); // 1049
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 1049
		}
		CSpaceAgnosticBoneAccessor::GetModelToWorld(); // 1029
		{
			fltx4 retVal; // 1478
			_mm_move_ss(__m128 __A,
					__m128 __B);  // 1479
		}
		SetWSIMD<>(fltx4 a,
				float f);  // 71
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 1029
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
			vec_t value);  // 1029
		CSpaceAgnosticBoneAccessor::GetModelToWorld(); // 1031
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
				const VectorAligned& v);  // 447
		QuaternionAligned::GetUp(); // 401
		CTransform::GetUp(); // 1031
		VectorMA(const Vector& start,
			float scale,
			const Vector& direction,
			Vector& dest);  // 1033
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 1033
		ConVar::GetInt(); // 351
		ConVar::GetBool(); // 1039
		CIKChainDescription::GetName(); // 395
		ShouldDebugChain(const CIKChainDescription* pDescription); // 1039
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1431
		Vector::operator-(); // 1035
		CIKRuleDescription_Ground_VirtualPlanes::GetHeight(); // 1033
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 1031
		VectorMA(const Vector& start,
			float scale,
			const Vector& direction,
			Vector& dest);  // 1035
		CIKRuleDescription_Ground_VirtualPlanes::GetTraceRadius(); // 1037
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 1035
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 52
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 229
		VectorAligned::operator*=(
				vec_t s);  // 57
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
				float p3);  // 177
		VectorAligned::operator=(
				const Vector& src);  // 61
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
				float p3);  // 177
		VectorAligned::operator=(
				const Vector& src);  // 52
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
				float p3);  // 177
		VectorAligned::operator=(
				const Vector& src);  // 56
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 61
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1694
		{
			fltx4 retVal; // 1333
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1334
		}
		SplatZSIMD<>(const fltx4& a); // 1695
		{
			fltx4 retVal; // 1314
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1315
		}
		SplatYSIMD<>(const fltx4& a); // 1695
		{
			fltx4 retVal; // 1295
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1296
		}
		SplatXSIMD<>(const fltx4& a); // 1695
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1695
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1695
		Dot3SIMD<>(const fltx4& a,
				const fltx4& b);  // 323
		_mm_cvtss_f32(__m128 __A); // 1496
		GetXSIMD<>(fltx4 a); // 324
		VectorAligned::LengthSqr(); // 54
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 56
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 229
		VectorAligned::operator*=(
				vec_t s);  // 62
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 229
		VectorAligned::operator*=(
				vec_t s);  // 64
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1694
		{
			fltx4 retVal; // 1333
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1334
		}
		SplatZSIMD<>(const fltx4& a); // 1695
		{
			fltx4 retVal; // 1314
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1315
		}
		SplatYSIMD<>(const fltx4& a); // 1695
		{
			fltx4 retVal; // 1295
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1296
		}
		SplatXSIMD<>(const fltx4& a); // 1695
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1695
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1695
		Dot3SIMD<>(const fltx4& a,
				const fltx4& b);  // 323
		_mm_cvtss_f32(__m128 __A); // 1496
		GetXSIMD<>(fltx4 a); // 324
		VectorAligned::LengthSqr(); // 58
		_mm_cvtss_f32(__m128 __A); // 1515
		GetYSIMD<>(fltx4 a); // 75
		VectorAligned::y(); // 40
		_mm_cvtss_f32(__m128 __A); // 1496
		GetXSIMD<>(fltx4 a); // 74
		VectorAligned::x(); // 40
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 63
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 63
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
				float p3);  // 177
		VectorAligned::operator=(
				const Vector& src);  // 63
		Ray_t::Init(
			const Vector& start,
			const Vector& end,
			const Vector& mins,
			const Vector& maxs);  // 1053
		VectorAligned::operator=(
				const VectorAligned& src);  // 12
		VectorAligned::operator=(
				const VectorAligned& src);  // 12
		VectorAligned::operator=(
				const VectorAligned& src);  // 12
		VectorAligned::operator=(
				const VectorAligned& src);  // 12
		Ray_t::operator=(
				const Ray_t  &);  // 20
		CTraceRequest::SetRay(
			const Ray_t& ray);  // 1055
		VectorAligned::VectorAligned(); // 22
		VectorAligned::VectorAligned(); // 22
		VectorAligned::VectorAligned(); // 22
		VectorAligned::VectorAligned(); // 22
		Ray_t::Ray_t(); // 1052
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1053
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1053
	}
	{
		Vector vRayDirection; // 1078
		cplane_t plane; // 1080
		float flIntersectionDistance; // 1083
		const Vector  vWsCollisionPoint; // 1085
		Vector::Normalized(); // 1078
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 1078
		Vector::operator=(
				const Vector& vOther);  // 1081
		DotProduct(const Vector& a,
				const Vector& b);  // 1082
		Vector::Vector(); // 42
		cplane_t::cplane_t(); // 1080
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1085
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 1085
		Vector::operator=(
				const Vector& vOther);  // 1086
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
	CTransform::GetOrigin(); // 1021
	Vector::Vector(); // 1024
	Vector::Vector(); // 1025
	CTraceResult::DidHit(); // 1093
	CTraceResult::StartsInSolid(); // 1093
	GenericCriticallyDampedType<float>::SnapTo(
		const float& kNewPosition);  // 36
	GenericCriticallyDampedType<float>::SetGoal(
		const float& kGoal);  // 31
	GenericCriticallyDampedType<float>::SetGoal(
		const float& kGoal);  // 55
	GenericCriticallyDampedType<float>::UpdateAndGetPosition(
				float flTimeStep);  // 57
	GenericCriticallyDampedType<float>::UpdateAndGetPosition(
				const float& kNewGoal,
				float flTimeStep);  // 53
	GenericCriticallyDampedType<float>::UpdateAndGetPosition(
				const float& kNewGoal,
				float flTimeStep);  // 1102
	Vector::operator=(
			const Vector& vOther);  // 1096
	Vector::operator=(
			const Vector& vOther);  // 1097
} /* size: 2334, variables: 8, inline expansions: 16 (314 bytes) */

// <01AFAEF0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1009
// variables: 62
// function calls: 227
void UpdateGroundTarget<IK::CAnimPoseWrapper, CTraceRequest>(const CIKChainDescription* pIKChain, const CIKRuleDescription_Ground_VirtualPlanes* pRuleDescription, const CAnimPoseWrapper& boneAccessor, const Vector& vWsTiltNormal, const Vector& vWsAverageFootPosition, const float flDeltaTime, CTraceRequest& traceHelper, CriticallyDampedNormal& collisionNormalSpring, CriticallyDampedFloat& collisionZSpring)
{
	const VectorAligned  vWsEndEffectorAnimationIdealPosition; // 1021
	Vector vRayStartPoint; // 1024
	Vector vRayEndPoint; // 1025
	const CTraceResult& trace; // 1058
	Vector vWsAveragedGroundPlaneHitPosition; // 1074
	Vector vWsAveragedGroundPlaneHitNormal; // 1075
	Vector vWsCollisionPoint; // 1090
	Vector vWsCollisionNormal; // 1091
	{
		VectorAligned vWsNextRaycastOrigin; // 1028
		Vector vUp; // 1031
		float flRadius; // 1037
		Ray_t ray; // 1052
		{
			const VertexColor_t& color; // 1041
			CLabelledDebugHelper* pDebugHelper; // 1043
			Vector vDimensions; // 1045
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1045
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 1045
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
					const Vector& rhs);  // 1048
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
					const Vector& rhs);  // 1048
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 1048
			QuaternionAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 30
			QuaternionAligned::QuaternionAligned(
						const Quaternion& rhs);  // 1048
			Vector::Vector(); // 1464
			VectorDivide(const Vector& a,
					vec_t b,
					Vector& c);  // 1465
			Vector::operator/(
					float fl);  // 1048
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 1048
			CUtlString::Get(); // 99
			CUtlString::String(); // 1049
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 81
			CFmtStrN<256>::String(); // 1049
			CUtlString::CUtlString(
					const char* pString);  // 1049
			CUtlString::~CUtlString(); // 1049
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 1049
		}
		CAnimPoseWrapper::GetModelToWorld(); // 1029
		{
			fltx4 retVal; // 1478
			_mm_move_ss(__m128 __A,
					__m128 __B);  // 1479
		}
		SetWSIMD<>(fltx4 a,
				float f);  // 71
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 1029
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
			vec_t value);  // 1029
		CAnimPoseWrapper::GetModelToWorld(); // 1031
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
				const VectorAligned& v);  // 447
		QuaternionAligned::GetUp(); // 401
		CTransform::GetUp(); // 1031
		VectorMA(const Vector& start,
			float scale,
			const Vector& direction,
			Vector& dest);  // 1033
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 1033
		CIKRuleDescription_Ground_VirtualPlanes::GetHeight(); // 1033
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1431
		Vector::operator-(); // 1035
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 1031
		VectorMA(const Vector& start,
			float scale,
			const Vector& direction,
			Vector& dest);  // 1035
		CIKRuleDescription_Ground_VirtualPlanes::GetTraceRadius(); // 1037
		ConVar::GetInt(); // 351
		ConVar::GetBool(); // 1039
		CIKChainDescription::GetName(); // 395
		ShouldDebugChain(const CIKChainDescription* pDescription); // 1039
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 1035
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 52
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 229
		VectorAligned::operator*=(
				vec_t s);  // 57
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
				float p3);  // 177
		VectorAligned::operator=(
				const Vector& src);  // 61
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
				float p3);  // 177
		VectorAligned::operator=(
				const Vector& src);  // 52
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
				float p3);  // 177
		VectorAligned::operator=(
				const Vector& src);  // 56
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 61
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1694
		{
			fltx4 retVal; // 1333
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1334
		}
		SplatZSIMD<>(const fltx4& a); // 1695
		{
			fltx4 retVal; // 1314
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1315
		}
		SplatYSIMD<>(const fltx4& a); // 1695
		{
			fltx4 retVal; // 1295
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1296
		}
		SplatXSIMD<>(const fltx4& a); // 1695
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1695
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1695
		Dot3SIMD<>(const fltx4& a,
				const fltx4& b);  // 323
		_mm_cvtss_f32(__m128 __A); // 1496
		GetXSIMD<>(fltx4 a); // 324
		VectorAligned::LengthSqr(); // 54
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 56
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 229
		VectorAligned::operator*=(
				vec_t s);  // 62
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 229
		VectorAligned::operator*=(
				vec_t s);  // 64
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1694
		{
			fltx4 retVal; // 1333
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1334
		}
		SplatZSIMD<>(const fltx4& a); // 1695
		{
			fltx4 retVal; // 1314
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1315
		}
		SplatYSIMD<>(const fltx4& a); // 1695
		{
			fltx4 retVal; // 1295
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1296
		}
		SplatXSIMD<>(const fltx4& a); // 1695
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1695
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1695
		Dot3SIMD<>(const fltx4& a,
				const fltx4& b);  // 323
		_mm_cvtss_f32(__m128 __A); // 1496
		GetXSIMD<>(fltx4 a); // 324
		VectorAligned::LengthSqr(); // 58
		_mm_cvtss_f32(__m128 __A); // 1515
		GetYSIMD<>(fltx4 a); // 75
		VectorAligned::y(); // 40
		_mm_cvtss_f32(__m128 __A); // 1496
		GetXSIMD<>(fltx4 a); // 74
		VectorAligned::x(); // 40
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 63
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 63
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
				float p3);  // 177
		VectorAligned::operator=(
				const Vector& src);  // 63
		Ray_t::Init(
			const Vector& start,
			const Vector& end,
			const Vector& mins,
			const Vector& maxs);  // 1053
		VectorAligned::operator=(
				const VectorAligned& src);  // 12
		VectorAligned::operator=(
				const VectorAligned& src);  // 12
		VectorAligned::operator=(
				const VectorAligned& src);  // 12
		VectorAligned::operator=(
				const VectorAligned& src);  // 12
		Ray_t::operator=(
				const Ray_t  &);  // 20
		CTraceRequest::SetRay(
			const Ray_t& ray);  // 1055
		VectorAligned::VectorAligned(); // 22
		VectorAligned::VectorAligned(); // 22
		VectorAligned::VectorAligned(); // 22
		VectorAligned::VectorAligned(); // 22
		Ray_t::Ray_t(); // 1052
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1053
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1053
	}
	{
		Vector vRayDirection; // 1078
		cplane_t plane; // 1080
		float flIntersectionDistance; // 1083
		const Vector  vWsCollisionPoint; // 1085
		Vector::Normalized(); // 1078
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 1078
		Vector::operator=(
				const Vector& vOther);  // 1081
		Vector::Vector(); // 42
		cplane_t::cplane_t(); // 1080
		DotProduct(const Vector& a,
				const Vector& b);  // 1082
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1085
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 1085
		Vector::operator=(
				const Vector& vOther);  // 1086
	}
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 1791
	CAnimPoseWrapper::GetWorldSpaceBone(
				int nBoneIndex);  // 1021
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
	CTransform::GetOrigin(); // 1021
	Vector::Vector(); // 1024
	Vector::Vector(); // 1025
	CTraceResult::DidHit(); // 1093
	CTraceResult::StartsInSolid(); // 1093
	GenericCriticallyDampedType<float>::SnapTo(
		const float& kNewPosition);  // 36
	GenericCriticallyDampedType<float>::SetGoal(
		const float& kGoal);  // 31
	GenericCriticallyDampedType<float>::SetGoal(
		const float& kGoal);  // 55
	GenericCriticallyDampedType<float>::UpdateAndGetPosition(
				float flTimeStep);  // 57
	GenericCriticallyDampedType<float>::UpdateAndGetPosition(
				const float& kNewGoal,
				float flTimeStep);  // 53
	GenericCriticallyDampedType<float>::UpdateAndGetPosition(
				const float& kNewGoal,
				float flTimeStep);  // 1102
	Vector::operator=(
			const Vector& vOther);  // 1096
	Vector::operator=(
			const Vector& vOther);  // 1097
} /* size: 0, variables: 8, inline expansions: 19 (0 bytes) */

// <01B2A73E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1105
void UpdateGroundTarget(const CIKChainDescription* pIKChain, const CIKRuleDescription_Ground_VirtualPlanes* pRuleDescription, const Vector& vWsTiltNormal, const Vector& vWsAverageFootPosition, const float flDeltaTime, const CSpaceAgnosticBoneAccessor& boneAccessor, CTraceRequest& traceRequest, CriticallyDampedFloat& collisionZSpring, CriticallyDampedNormal& collisionNormalSpring)
{
} /* size: 42 */

// <01B2A61A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1110
void UpdateGroundTarget(const CIKChainDescription* pIKChain, const CIKRuleDescription_Ground_VirtualPlanes* pRuleDescription, const Vector& vWsTiltNormal, const Vector& vWsAverageFootPosition, const float flDeltaTime, const CAnimPoseWrapper& poseWrapper, CTraceRequest* pTraceRequest, CriticallyDampedFloat& collisionZSpring, CriticallyDampedNormal& collisionNormalSpring)
{
} /* size: 0 */

// <01AFAE26> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1116
// variables: 5
CTransform CalculateGroundTarget<CSpaceAgnosticBoneAccessor>(const CIKChainDescription* pChainDescription, const Quaternion& qWsTilt, const int nTiltBoneIndex, const CTransform& xWsIdealTarget, const CriticallyDampedFloat& collisionZSpring, const CriticallyDampedNormal& collisionNormalSpring, const CSpaceAgnosticBoneAccessor& boneAccessor, int nDebugLevel)
{
	const Vector  vWsCollisionNormal; // 1127
	const Vector  vWsCollisionPoint; // 1128
	const CTransform  xWsEndEffectorOrientedToCollision; // 1134
	{
		const float  flTimeToLive; // 1146
		CLabelledDebugHelper* pDebug; // 1148
	}
} /* size: 0, variables: 3 */

// <01AF23B5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1116
// variables: 5
CTransform CalculateGroundTarget<IK::CAnimPoseWrapper>(const CIKChainDescription* pChainDescription, const Quaternion& qWsTilt, const int nTiltBoneIndex, const CTransform& xWsIdealTarget, const CriticallyDampedFloat& collisionZSpring, const CriticallyDampedNormal& collisionNormalSpring, const CAnimPoseWrapper& boneAccessor, int nDebugLevel)
{
	const Vector  vWsCollisionNormal; // 1127
	const Vector  vWsCollisionPoint; // 1128
	const CTransform  xWsEndEffectorOrientedToCollision; // 1134
	{
		const float  flTimeToLive; // 1146
		CLabelledDebugHelper* pDebug; // 1148
	}
} /* size: 0, variables: 3 */

// <01B29C32> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1160
// variables: 6
// function calls: 32
void CalculateGroundTarget(const CIKChainDescription* pChainDescription, const Quaternion& qWsTilt, const int nTiltBoneIndex, const CTransform& xWsIdealTarget, const CriticallyDampedFloat& collisionZSpring, const CriticallyDampedNormal& collisionNormalSpring, const CSpaceAgnosticBoneAccessor& boneAccessor, int nDebugLevel)
{
	BuildTransformFromCollision(const CSpaceAgnosticBoneAccessor& boneAccessor,
					const CIKChainDescription* pIKChain,
					int nTiltBoneIndex,
					const Quaternion& qWsTilt,
					const Vector& vWsCollisionPosition,
					const Vector& vWsCollisionNormal);  // 1134
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1128
	VectorAligned::y(); // 1128
	{
		const float  flTimeToLive; // 1146
		CLabelledDebugHelper* pDebug; // 1148
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
				const Vector& rhs);  // 1150
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1151
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 1151
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
				const Vector& rhs);  // 1151
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 1151
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
		CTransform::GetOrigin(); // 1153
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
		CTransform::GetOrigin(); // 1154
	}
	CalculateGroundTarget<CSpaceAgnosticBoneAccessor>(const CIKChainDescription* pChainDescription,
								const Quaternion& qWsTilt,
								const int  nTiltBoneIndex,
								const CTransform& xWsIdealTarget,
								const CriticallyDampedFloat& collisionZSpring,
								const CriticallyDampedNormal& collisionNormalSpring,
								const CSpaceAgnosticBoneAccessor& boneAccessor,
								int nDebugLevel);  // 1171
} /* size: 524, inline expansions: 4 (451 bytes) */

// <01AFAC8C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1175
// variables: 23
Quaternion ApplyTiltToBones<CSpaceAgnosticBoneAccessor>(CSpaceAgnosticBoneAccessor& boneAccessor, const Vector& vWsTiltNormal, const Vector& vWsTiltNormalGoal, int nTiltBone, Quaternion* pWsReferenceOrientation, IAnimationDebugRenderer* pDebugRenderer)
{
	Quaternion qWsTiltDeltaFromUp; // 1177
	{
		int nDebugLevel; // 1187
		const float  flDebugAxisLength; // 1188
		const CTransform  xformMsToWs; // 1190
		const CTransform  xformWsToMs; // 1191
		const CTransform  xformWsTiltBone; // 1192
		const Quaternion  qMsToWs; // 1194
		const Quaternion  qWsToMs; // 1195
		const CTransform  xformWsTiltBoneAnimation; // 1197
		const Quaternion  qWsTiltBoneAnimation; // 1198
		const Quaternion  qMsTiltBoneAnimation; // 1199
		const Vector  vWsTiltBoneAnimation; // 1200
		const Quaternion  qWsTiltBoneNew; // 1221
		const Quaternion  qMsTiltBoneNew; // 1227
		int nParentIndex; // 1237
		const CTransform& xformWsParent; // 1238
		const Quaternion& qWsParent; // 1239
		const Quaternion& qMsParent; // 1241
		const Quaternion  qPsTiltBoneNew; // 1242
		const Vector  vWsParent; // 1244
		const Vector  vWsTiltBoneNew; // 1245
		const Vector  vPsTiltBoneNew; // 1246
		CTransform xPs; // 1248
	}
} /* size: 0, variables: 1 */

// <01AFAAF2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1175
// variables: 23
Quaternion ApplyTiltToBones<IK::CAnimPoseWrapper>(CAnimPoseWrapper& boneAccessor, const Vector& vWsTiltNormal, const Vector& vWsTiltNormalGoal, int nTiltBone, Quaternion* pWsReferenceOrientation, IAnimationDebugRenderer* pDebugRenderer)
{
	Quaternion qWsTiltDeltaFromUp; // 1177
	{
		int nDebugLevel; // 1187
		const float  flDebugAxisLength; // 1188
		const CTransform  xformMsToWs; // 1190
		const CTransform  xformWsToMs; // 1191
		const CTransform  xformWsTiltBone; // 1192
		const Quaternion  qMsToWs; // 1194
		const Quaternion  qWsToMs; // 1195
		const CTransform  xformWsTiltBoneAnimation; // 1197
		const Quaternion  qWsTiltBoneAnimation; // 1198
		const Quaternion  qMsTiltBoneAnimation; // 1199
		const Vector  vWsTiltBoneAnimation; // 1200
		const Quaternion  qWsTiltBoneNew; // 1221
		const Quaternion  qMsTiltBoneNew; // 1227
		int nParentIndex; // 1237
		const CTransform& xformWsParent; // 1238
		const Quaternion& qWsParent; // 1239
		const Quaternion& qMsParent; // 1241
		const Quaternion  qPsTiltBoneNew; // 1242
		const Vector  vWsParent; // 1244
		const Vector  vWsTiltBoneNew; // 1245
		const Vector  vPsTiltBoneNew; // 1246
		CTransform xPs; // 1248
	}
} /* size: 0, variables: 1 */

// <01B29B56> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1272
void ApplyTiltToBones(CSpaceAgnosticBoneAccessor& boneAccessor, const Vector& vWsTiltNormal, const Vector& vWsTiltNormalGoal, int nTiltBone, Quaternion* pqWsReferenceOrientation, IAnimationDebugRenderer* pDebugRenderer)
{
} /* size: 14 */

// <01B29A7A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1277
void ApplyTiltToBones(CAnimPoseWrapper& boneAccessor, const Vector& vWsTiltNormal, const Vector& vWsTiltNormalGoal, int nTiltBone, Quaternion* pqWsReferenceOrientation, IAnimationDebugRenderer* pDebugRenderer)
{
} /* size: 14 */

// <01B298E4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1282
// function calls: 4
void UpdateTilt(Vector& vWsTiltNormal, const Vector& vWsTiltNormalGoal, Vector& vWsTiltNormalSpeed, float flSpringStrength, float flDeltaTime)
{
	FloatMakePositive(vec_t f); // 1375
	VectorsAreEqual(const Vector& src1,
			const Vector& src2,
			float flTolerance);  // 1284
	Vector::operator=(
			const Vector& vOther);  // 1293
	Vector::NormalizeInPlace(); // 1288
} /* size: 170, inline expansions: 4 (80 bytes) */

// <01B27874> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1297
// variables: 28
// function calls: 125
void CalculateAverageFootPositionAndTiltPlane(const CUtlVector<Vector, CUtlMemory<Vector, int> >& vWsAllContactPoints, const CUtlVector<Vector, CUtlMemory<Vector, int> >& vWsAllNormals, const Vector& vWsDefaultAverageFootPosition, Vector& vOutWsAverageFootPosition)
{
	VPlane plane; // 1304
	const char   __FUNCTION__; // 13260
	int nNumLegPositions; // 1309
	bool bFoundTheGround; // 1310
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1306
	}
	{
		const Vector& vWsContactPoint; // 1319
		const CUtlVector<Vector, CUtlMemory<Vector, int> >& __for_range; // 15109
		const_iterator __for_begin; // 11624
		const_iterator __for_end; // 11624
		CUtlMemory<Vector, int>::Base(); // 113
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 103
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::begin(); // 1319
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::end(); // 1319
		Vector::operator+=(
				const Vector& v);  // 1321
	}
	{
		CUtlVector<Vector, CUtlMemory<Vector, int> > points; // 1343
		const Vector  vReference; // 1345
		Vector vOrthogonal; // 1347
		const Vector  vWsRootBoneUp; // 1374
		CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
		CUtlMemory<Vector, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 434
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 573
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowVector(
				int num);  // 1445
		{
			int i; // 1451
		}
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::SetCount(
			int count);  // 573
		CUtlMemory<Vector, int>::Base(); // 113
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 105
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 105
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::end(); // 574
		Vector::operator=(
				const Vector& vOther);  // 209
		UtlTraitsCopyRange<Vector>(const Vector* pFrom,
						const Vector* pFromEnd,
						Vector* pTo);  // 200
		UtlTraitsCopyRange<Vector>(const Vector* pFrom,
						const Vector* pFromEnd,
						Vector* pTo);  // 574
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
				const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 565
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
				const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 452
		CUtlVector<Vector, CUtlMemory<Vector, int> >::operator=(
				const CUtlVector<Vector, CUtlMemory<Vector, int> >& src);  // 434
		CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(
				const CUtlVector<Vector, CUtlMemory<Vector, int> >& src);  // 1343
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 1345
		Vector::Normalized(); // 1347
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 1347
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 1488
		Vector::Vector(); // 1487
		Vector::Cross(
			const Vector& vOther);  // 1347
		DotProduct(const Vector& a,
				const Vector& b);  // 1349
		Vector::operator*=(
				float fl);  // 1351
		__countl_zero<long unsigned int>(long unsigned int __x); // 388
		__bit_width<long unsigned int>(long unsigned int __x); // 1555
		__lg<long int>(long int __n); // 1907
		{
			Vector* __i; // 1798
			_Val_comp_iter(const _Val_comp_iter<IK::CalculateAverageFootPositionAndTiltPlane(const CUtlVector<Vector>&, const CUtlVector<Vector>&, c this,
					_Iter_comp_iter<IK::CalculateAverageFootPositionAndTiltPlane(const CUtlVector<Vector>&, const CUtlVector<Vector>&, const __comp);  // 253
			__val_comp_iter<IK::CalculateAverageFootPositionAndTiltPlane(const CUtlVector<Vector>&, const CUtlVector<Vector>&, const Vector&, Vector&)::<lambda(const Vector&, const Vector&)> >(_Iter_comp_iter<IK::CalculateAverageFootPositionAndTiltPlane(const CUtlVector<Vector>&, const CUtlVector<Vector>&, const __comp); // 1799
			Vector::operator=(
					const Vector& vOther);  // 1760
			{
				const Vector  vP1; // 1357
				const Vector  vP2; // 1358
				const float  flAngle1; // 1360
				const float  flAngle2; // 1361
				Vector::Vector(); // 1443
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::operator-(
						const Vector& v);  // 1357
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 1358
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
						const Vector& rhs);  // 1360
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
						const Vector& rhs);  // 1360
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
						const Vector& rhs);  // 1360
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
						const Vector& rhs);  // 1361
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
						const Vector& rhs);  // 1361
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
						const Vector& rhs);  // 1361
			}
			operator()(const class* __closure,
					const Vector& vWs1,
					const Vector& vWs2); // 240
			operator()<Vector, Vector*>(const _Val_comp_iter<IK::CalculateAverageFootPositionAndTiltPlane(const CUtlVector<Vector>&, const CUtlVector<Vector>&, c this,
							Vector& __val,
							Vector* __it); // 1758
			Vector::operator=(
					const Vector& vOther);  // 1764
			__unguarded_linear_insert<Vector*, __gnu_cxx::__ops::_Val_comp_iter<IK::CalculateAverageFootPositionAndTiltPlane(const CUtlVector<Vector>&, const CUtlVector<Vector>&, const Vector&, Vector&)::<lambda(const Vector&, const Vector&)> > >(Vector* __last,
																_Val_comp_iter<IK::CalculateAverageFootPositionAndTiltPlane(const CUtlVector<Vector>&, const CUtlVector<Vector>&, const V __comp); // 1799
		}
		__unguarded_insertion_sort<Vector*, __gnu_cxx::__ops::_Iter_comp_iter<IK::CalculateAverageFootPositionAndTiltPlane(const CUtlVector<Vector>&, const CUtlVector<Vector>&, const Vector&, Vector&)::<lambda(const Vector&, const Vector&)> > >(Vector* __first,
																Vector* __last,
																_Iter_comp_iter<IK::CalculateAverageFootPositionAndTiltPlane(const CUtlVector<Vector>&, const CUtlVector<Vector>&, const __comp); // 1819
		__final_insertion_sort<Vector*, __gnu_cxx::__ops::_Iter_comp_iter<IK::CalculateAverageFootPositionAndTiltPlane(const CUtlVector<Vector>&, const CUtlVector<Vector>&, const Vector&, Vector&)::<lambda(const Vector&, const Vector&)> > >(Vector* __first,
																Vector* __last,
																_Iter_comp_iter<IK::CalculateAverageFootPositionAndTiltPlane(const CUtlVector<Vector>&, const CUtlVector<Vector>&, const __comp); // 1909
		__sort<Vector*, __gnu_cxx::__ops::_Iter_comp_iter<IK::CalculateAverageFootPositionAndTiltPlane(const CUtlVector<Vector>&, const CUtlVector<Vector>&, const Vector&, Vector&)::<lambda(const Vector&, const Vector&)> > >(Vector* __first,
																Vector* __last,
																_Iter_comp_iter<IK::CalculateAverageFootPositionAndTiltPlane(const CUtlVector<Vector>&, const CUtlVector<Vector>&, const __comp); // 4874
		_Iter_comp_iter(const _Iter_comp_iter<IK::CalculateAverageFootPositionAndTiltPlane(const CUtlVector<Vector>&, const CUtlVector<Vector>&,  this,
				 __comp);  // 165
		__iter_comp_iter<IK::CalculateAverageFootPositionAndTiltPlane(const CUtlVector<Vector>&, const CUtlVector<Vector>&, const Vector&, Vector&)::<lambda(const Vector&, const Vector&)> >(__comp); // 4874
		sort<Vector*, IK::CalculateAverageFootPositionAndTiltPlane(const CUtlVector<Vector>&, const CUtlVector<Vector>&, const Vector&, Vector&)::<lambda(const Vector&, const Vector&)> >(Vector* __first,
																Vector* __last,
																 __comp); // 973
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::SortPredicate<IK::CalculateAverageFootPositionAndTiltPlane(
																class& predicate);  // 1354
		Vector::LengthSqr(); // 1368
		Vector::operator=(
				const Vector& vOther);  // 1370
		DotProduct(const Vector& a,
				const Vector& b);  // 1376
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1431
		Vector::operator-(); // 1378
		Vector::operator=(
				const Vector& vOther);  // 1378
		CUtlMemory<Vector, int>::Purge(); // 903
		CUtlMemory<Vector, int>::Purge(); // 1799
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
		ValidateAlignment<Vector>(void); // 508
		CUtlMemory<Vector, int>::Purge(); // 903
		CUtlMemory<Vector, int>::Purge(); // 510
		CUtlMemory<Vector, int>::~CUtlMemory(); // 562
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
		CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 1380
	}
	Vector::operator=(
			const Vector& vOther);  // 95
	Vector::Vector(); // 93
	VPlane::VPlane(
		const Vector& vNormal,
		vec_t dist);  // 1304
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1306
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1306
	Vector::operator=(
			const Vector& vOther);  // 1308
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 1309
	Vector::operator=(
			const Vector& vOther);  // 1315
	Vector::operator*=(
			float fl);  // 1323
	Vector::operator=(
			const Vector& vOther);  // 1327
	CUtlMemory<Vector, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 1336
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 1336
	Vector::Normalized(); // 1336
	Vector::operator=(
			const Vector& vOther);  // 1336
	CUtlMemory<Vector, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 1332
	Vector::operator=(
			const Vector& vOther);  // 1332
} /* size: 0, variables: 4, inline expansions: 20 (390 bytes) */

// <01B5EDAA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1388
// function call: 1
void CalculateAverageFootPositionAndTiltNormal(const CUtlVector<Vector, CUtlMemory<Vector, int> >& vWsAllContactPoints, const CUtlVector<Vector, CUtlMemory<Vector, int> >& vWsAllNormals, const Vector& vWsDefaultAverageFootPosition, Vector& vOutWsAverageFootPosition, Vector& vOutWsTiltNormalGoal)
{
	Vector::operator=(
			const Vector& vOther);  // 1396
} /* size: 0, inline expansions: 1 (0 bytes) */

// <01B27828> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1388
void CalculateAverageFootPositionAndTiltNormal(const CUtlVector<Vector, CUtlMemory<Vector, int> >& vWsAllContactPoints, const CUtlVector<Vector, CUtlMemory<Vector, int> >& vWsAllNormals, const Vector& vWsDefaultAverageFootPosition, Vector& vOutWsAverageFootPosition, Vector& vOutWsTiltNormalGoal)
{
} /* size: 0 */

// <01B26C20> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1399
// variables: 6
// function calls: 52
void CalculateAverageFootPositionAndTiltNormal(const CUtlVector<CTraceResult*, CUtlMemory<CTraceResult*, int> >& allTraceResults, const Vector& vWsDefaultAverageFootPosition, Vector& vOutWsAverageFootPosition, Vector& vOutWsTiltNormalGoal)
{
	CUtlVector<Vector, CUtlMemory<Vector, int> > allContactPoints; // 1406
	CUtlVector<Vector, CUtlMemory<Vector, int> > allNormals; // 1407
	{
		const CTraceResult* pTraceResult; // 1413
		const CUtlVector<CTraceResult*, CUtlMemory<CTraceResult*, int> >& __for_range; // 22104
		const_iterator __for_begin; // 18694
		const_iterator __for_end; // 18694
		CUtlVectorBase<CTraceResult::Count(); // 105
		CUtlVectorBase<CTraceResult::end(); // 1413
		CUtlMemory<CTraceResult::Base(); // 113
		CUtlVectorBase<CTraceResult::Base(); // 103
		CUtlVectorBase<CTraceResult::begin(); // 1413
		CTraceResult::DidHit(); // 1415
		CTraceResult::StartsInSolid(); // 1415
		CUtlMemory<Vector, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
			int i);  // 1201
		CopyConstruct<Vector>(Vector* pMemory,
					const Vector& src);  // 1201
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
				const Vector& src);  // 1417
		CUtlMemory<Vector, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
			int i);  // 1201
		CopyConstruct<Vector>(Vector* pMemory,
					const Vector& src);  // 1201
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
				const Vector& src);  // 1418
	}
	CUtlVectorBase<CTraceResult::Count(); // 1409
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 1406
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 1407
	CUtlMemory<Vector, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::EnsureCapacity(
			int num);  // 1409
	CUtlVectorBase<CTraceResult::Count(); // 1410
	CUtlMemory<Vector, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::EnsureCapacity(
			int num);  // 1410
	Vector::operator=(
			const Vector& vOther);  // 1396
	CalculateAverageFootPositionAndTiltNormal(const CUtlVector<Vector, CUtlMemory<Vector, int> >& vWsAllContactPoints,
							const CUtlVector<Vector, CUtlMemory<Vector, int> >& vWsAllNormals,
							const Vector& vWsDefaultAverageFootPosition,
							Vector& vOutWsAverageFootPosition,
							Vector& vOutWsTiltNormalGoal);  // 1422
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 1423
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 1423
} /* size: 906, variables: 2, inline expansions: 33 (971 bytes) */

// <01AF25AB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1426
// variables: 16
// function calls: 67
float CalculateTotalChainLength<CSpaceAgnosticBoneAccessor>(const CIKChainDescription* pDescription, const CSpaceAgnosticBoneAccessor& boneAccessor)
{
	const CTransform& xformWs1; // 1428
	const Vector  vWs1; // 1429
	float flTotalBoneLengths; // 1431
	Vector vWsPreviousBone; // 1433
	{
		int n; // 1434
		{
			const CTransform& xformWsCurrent; // 1436
			CIKChainJointData_t::GetBoneIndex(); // 1436
			CUtlMemory<CIKChainJointData_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
					int i);  // 1436
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
					const Vector& rhs);  // 1438
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
			CTransform::GetOrigin(); // 1438
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 256
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 256
			VectorAligned::operator-(
					const VectorAligned& v);  // 1438
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1694
			{
				fltx4 retVal; // 1333
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1334
			}
			SplatZSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1314
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1315
			}
			SplatYSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1295
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1296
			}
			SplatXSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			Dot3SIMD<>(const fltx4& a,
					const fltx4& b);  // 298
			{
				fltx4 retVal; // 2350
				_mm_sqrt_ps(__m128 __A); // 2351
			}
			SqrtSIMD<>(const fltx4& a); // 299
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 300
			VectorAligned::Length(); // 1438
			_mm_cvtss_f32(__m128 __A); // 1515
			GetYSIMD<>(fltx4 a); // 75
			VectorAligned::y(); // 40
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 74
			VectorAligned::x(); // 40
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 1440
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 1440
		}
		CIKChainDescription::GetJointVector(); // 1434
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 1434
	}
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 1428
	CIKChainDescription::GetJointVector(); // 1428
	CIKChainJointData_t::GetBoneIndex(); // 1428
	VectorAligned::operator fltx4(); // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 1429
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
	VectorAligned::operator Vector(); // 1429
} /* size: 371, variables: 4, inline expansions: 18 (166 bytes) */

// <01AE267B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1426
// variables: 16
// function calls: 73
float CalculateTotalChainLength<IK::CAnimPoseWrapper>(const CIKChainDescription* pDescription, const CAnimPoseWrapper& boneAccessor)
{
	const CTransform& xformWs1; // 1428
	const Vector  vWs1; // 1429
	float flTotalBoneLengths; // 1431
	Vector vWsPreviousBone; // 1433
	{
		int n; // 1434
		{
			const CTransform& xformWsCurrent; // 1436
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
			ConcatTransforms(const CTransform  in1,
					const CTransform  in2);  // 1791
			CAnimPoseWrapper::GetWorldSpaceBone(
						int nBoneIndex);  // 1436
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
					const Vector& rhs);  // 1438
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
			CTransform::GetOrigin(); // 1438
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 256
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 256
			VectorAligned::operator-(
					const VectorAligned& v);  // 1438
			_mm_cvtss_f32(__m128 __A); // 1515
			GetYSIMD<>(fltx4 a); // 75
			VectorAligned::y(); // 40
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 74
			VectorAligned::x(); // 40
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 1440
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1694
			{
				fltx4 retVal; // 1333
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1334
			}
			SplatZSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1314
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1315
			}
			SplatYSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1295
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1296
			}
			SplatXSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			Dot3SIMD<>(const fltx4& a,
					const fltx4& b);  // 298
			{
				fltx4 retVal; // 2350
				_mm_sqrt_ps(__m128 __A); // 2351
			}
			SqrtSIMD<>(const fltx4& a); // 299
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 300
			VectorAligned::Length(); // 1438
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 1440
			CIKChainJointData_t::GetBoneIndex(); // 1436
			CUtlMemory<CIKChainJointData_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
					int i);  // 1436
		}
		CIKChainDescription::GetJointVector(); // 1434
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 1434
	}
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 1428
	CIKChainDescription::GetJointVector(); // 1428
	CIKChainJointData_t::GetBoneIndex(); // 1428
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 1791
	CAnimPoseWrapper::GetWorldSpaceBone(
				int nBoneIndex);  // 1428
	VectorAligned::operator fltx4(); // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 1429
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
	VectorAligned::operator Vector(); // 1429
} /* size: 0, variables: 4, inline expansions: 21 (0 bytes) */

// <01AFA958> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1469
// variables: 8
bool WillSoften<IK::CAnimPoseWrapper>(const CIKChainDescription* pChainDescription, const CAnimPoseWrapper& boneAccessor, const CTransform& xWsTarget)
{
	const CTransform& xformWs1; // 1471
	const Vector  vWs1; // 1472
	const float  flTotalBoneLengths; // 1473
	const float  flSoftenPercentage; // 1474
	const float  flSoftenDistance; // 1475
	const float  fl1TSoftenThresholdLength; // 1476
	const float  flDistanceFromRoot; // 1478
	const float  flDeltaFromThreshold; // 1479
} /* size: 0, variables: 8 */

// <01AFA8AA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1469
// variables: 8
bool WillSoften<CSpaceAgnosticBoneAccessor>(const CIKChainDescription* pChainDescription, const CSpaceAgnosticBoneAccessor& boneAccessor, const CTransform& xWsTarget)
{
	const CTransform& xformWs1; // 1471
	const Vector  vWs1; // 1472
	const float  flTotalBoneLengths; // 1473
	const float  flSoftenPercentage; // 1474
	const float  flSoftenDistance; // 1475
	const float  fl1TSoftenThresholdLength; // 1476
	const float  flDistanceFromRoot; // 1478
	const float  flDeltaFromThreshold; // 1479
} /* size: 0, variables: 8 */

// <01B2629B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1489
// variables: 8
// function calls: 39
void WillSoften(const CIKChainDescription* pChainDescription, const CAnimPoseWrapper& boneAccessor, const CTransform& xWsTarget)
{
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 1471
	CIKChainDescription::GetData(); // 1471
	CIKChainJointData_t::GetBoneIndex(); // 1471
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 1791
	CAnimPoseWrapper::GetWorldSpaceBone(
				int nBoneIndex);  // 1471
	VectorAligned::operator fltx4(); // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 1472
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 1472
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 1474
	CIKChainDescription::GetSoftenPercentage(); // 1474
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 1478
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 256
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 256
	VectorAligned::operator-(
			const VectorAligned& v);  // 1478
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1694
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	Dot3SIMD<>(const fltx4& a,
			const fltx4& b);  // 298
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 299
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 300
	VectorAligned::Length(); // 1478
	WillSoften<IK::CAnimPoseWrapper>(const CIKChainDescription* pChainDescription,
					const CAnimPoseWrapper& boneAccessor,
					const CTransform& xWsTarget);  // 1491
} /* size: 0, inline expansions: 31 (0 bytes) */

// <01B259F9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1494
// variables: 8
// function calls: 36
void WillSoften(const CIKChainDescription* pChainDescription, const CSpaceAgnosticBoneAccessor& boneAccessor, const CTransform& xWsTarget)
{
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 1471
	CIKChainDescription::GetData(); // 1471
	CIKChainJointData_t::GetBoneIndex(); // 1471
	VectorAligned::operator fltx4(); // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 1472
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 1472
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 1474
	CIKChainDescription::GetSoftenPercentage(); // 1474
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 1478
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 256
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 256
	VectorAligned::operator-(
			const VectorAligned& v);  // 1478
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1694
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	Dot3SIMD<>(const fltx4& a,
			const fltx4& b);  // 298
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 299
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 300
	VectorAligned::Length(); // 1478
	WillSoften<CSpaceAgnosticBoneAccessor>(const CIKChainDescription* pChainDescription,
						const CSpaceAgnosticBoneAccessor& boneAccessor,
						const CTransform& xWsTarget);  // 1496
} /* size: 245, inline expansions: 28 (392 bytes) */

// <01AF846D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1505
// variables: 32
// function calls: 113
bool SoftenTarget<IK::CAnimPoseWrapper>(int nFirstBoneIndex, float flTotalBoneLengths, float flSoftenTime, float flSoftenPercentageRaw, const CAnimPoseWrapper& boneAccessor, const float flCurrentTime, const float flLastSoftenTime, CTransform& xWsTarget)
{
	const CTransform& xformWs1; // 1521
	const Vector  vWs1; // 1522
	Vector vWsTargetDirection; // 1524
	const float  flTargetDistanceFromV1; // 1525
	const float  flSoftenScale; // 1528
	const float  flSoftenPercentage; // 1531
	const float  flSoftenDistance; // 1534
	const float  fl1TSoftenThresholdLength; // 1537
	const float  flDistanceFromRoot; // 1547
	const float  flDistanceIntoSoftenRange; // 1548
	{
		const Vector  vWsSoftenThreshold; // 1541
		Vector::Normalized(); // 1541
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1541
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
				const Vector& rhs);  // 1541
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 1541
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
				const VectorAligned& v);  // 1541
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 1541
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 1543
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 1543
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1544
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 1544
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 1544
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
				const Vector& rhs);  // 1544
	}
	{
		const float  flNewLength; // 1554
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1560
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 1560
		VectorAligned::operator fltx4(); // 110
		{
			fltx4 x000; // 1010
			fltx4 y000; // 1011
			fltx4 z000; // 1012
			fltx4 x0y0; // 1013
			_mm_load_ss(const float* __P); // 1010
			_mm_load_ss(const float* __P); // 1011
			_mm_load_ss(const float* __P); // 1012
			_mm_movelh_ps(__m128 __A,
					__m128 __B);  // 1013
		}
		LoadUnaligned3SIMD<>(const void* pSIMD); // 110
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
				const fltx4& w);  // 110
		VectorAligned::operator=(
				fltx4 src);  // 110
		CTransform::SetPosition(
				const Vector& v0);  // 1560
	}
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 1516
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 1791
	CAnimPoseWrapper::GetWorldSpaceBone(
				int nBoneIndex);  // 1521
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
	CTransform::GetOrigin(); // 1522
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
	VectorAligned::operator Vector(); // 1522
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 256
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 256
	VectorAligned::operator-(
			const VectorAligned& v);  // 1524
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 1524
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 1524
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 1528
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 1531
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 1539
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 1547
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 256
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 256
	VectorAligned::operator-(
			const VectorAligned& v);  // 1547
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1694
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	Dot3SIMD<>(const fltx4& a,
			const fltx4& b);  // 298
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 299
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 300
	VectorAligned::Length(); // 1547
} /* size: 0, variables: 10, inline expansions: 49 (0 bytes) */

// <01AF247F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1505
// variables: 12
bool SoftenTarget<CSpaceAgnosticBoneAccessor>(int nFirstBoneIndex, float flTotalBoneLengths, float flSoftenTime, float flSoftenPercentageRaw, const CSpaceAgnosticBoneAccessor& boneAccessor, const float flCurrentTime, const float flLastSoftenTime, CTransform& xWsTarget)
{
	const CTransform& xformWs1; // 1521
	const Vector  vWs1; // 1522
	Vector vWsTargetDirection; // 1524
	const float  flTargetDistanceFromV1; // 1525
	const float  flSoftenScale; // 1528
	const float  flSoftenPercentage; // 1531
	const float  flSoftenDistance; // 1534
	const float  fl1TSoftenThresholdLength; // 1537
	const float  flDistanceFromRoot; // 1547
	const float  flDistanceIntoSoftenRange; // 1548
	{
		const Vector  vWsSoftenThreshold; // 1541
	}
	{
		const float  flNewLength; // 1554
	}
} /* size: 0, variables: 10 */

// <01B257F9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1591
// variables: 2
// function calls: 3
void SoftenTarget(const CIKChainData_t* pChainDescription, const CAnimPoseWrapper& boneAccessor, const float flTotalSoftenTime, const float flSoftenPercentageOfTotalChainLength, const float flCurrentTime, float& flStartOfLastSoftenTime, CTransform& xWsTarget)
{
	{
		int nFirstBoneIndex; // 1603
		float flTotalBoneLengths; // 1604
		CUtlMemory<CIKChainJointData_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
				int i);  // 1603
	}
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 1601
} /* size: 0, inline expansions: 1 (0 bytes) */

// <01AF5D2B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1615
// variables: 51
// function calls: 168
bool ShouldBreakLockPostSolve<CSpaceAgnosticBoneAccessor>(const CIKChainDescription* pChainDescription, const CSpaceAgnosticBoneAccessor& boneAccessor, const Vector& vWsNormal)
{
	const char   __FUNCTION__; // 12893
	int nNumBones; // 1619
	const CTransform& xformWsHip; // 1621
	const CTransform& xformWsKnee; // 1622
	const CTransform& xformWsFoot; // 1623
	float flDot; // 1625
	float flHypertensionDot; // 1627
	bool bShouldForceUnlock; // 1629
	{
		float flDegrees; // 1634
		float flMaxDegrees; // 1635
		float flRatioCloseness; // 1636
		VertexColor_t colour; // 1639
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1637
		}
		RAD2DEG(float flRadians); // 1634
		RAD2DEG(float flRadians); // 1635
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1636
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 45
		VertexColor_t::VertexColor_t(
				uint8 ir,
				uint8 ig,
				uint8 ib,
				uint8 ia);  // 63
		CalcRedToGreenRampColor(float flNormalized0To1); // 1639
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 1640
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 1640
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 256
		VectorAligned::operator-(
				const VectorAligned& v);  // 1640
		_mm_cvtss_f32(__m128 __A); // 1496
		GetXSIMD<>(fltx4 a); // 300
		VectorAligned::Length(); // 1640
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 1640
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 1640
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 256
		VectorAligned::operator-(
				const VectorAligned& v);  // 1640
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 1640
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 1640
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 256
		VectorAligned::operator-(
				const VectorAligned& v);  // 1640
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 1640
	}
	{
		float flDegrees; // 1648
		VertexColor_t color; // 1649
		const CTransform  xWs; // 1650
		RAD2DEG(float flRadians); // 1648
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 160
		VertexColor_t::operator*(
				float flScale);  // 1649
		CalculateLockableBoneTransformFromEndEffector(const CIKChainDescription* pDescription,
								const CTransform& xWsEndEffectorToBuildFootlockFrom,
								const CSpaceAgnosticBoneAccessor& boneAccessor);  // 1650
		CIKChainDescription::GetHyperExtensionLockReleaseDotThreshold(); // 1651
		RAD2DEG(float flRadians); // 1651
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 1651
	}
	CIKChainDescription::GetJointVector(); // 1619
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 1619
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 1621
	CIKChainJointData_t::GetBoneIndex(); // 1621
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 1622
	CIKChainDescription::GetJointVector(); // 1622
	CIKChainJointData_t::GetBoneIndex(); // 1622
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 1623
	CIKChainDescription::GetJointVector(); // 1623
	CIKChainJointData_t::GetBoneIndex(); // 1623
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
	CTransform::GetOrigin(); // 1625
	{
		fltx4 retVal; // 1981
		_mm_cmpgt_ps(__m128 __A,
				__m128 __B);  // 1982
	}
	CmpGtSIMD<>(const fltx4& a,
			const fltx4& b);  // 361
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1694
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	Dot3SIMD<>(const fltx4& a,
			const fltx4& b);  // 359
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 360
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 362
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
			const fltx4& b);  // 362
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 362
	VectorAligned::NormalizedSafe(
			const VectorAligned& v);  // 351
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 351
	VectorAligned::Normalized(); // 1625
	{
		fltx4 retVal; // 1478
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1481
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1479
	}
	SetWSIMD<>(fltx4 a,
			float f);  // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 1625
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
	CTransform::GetOrigin(); // 1625
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 256
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 256
	VectorAligned::operator-(
			const VectorAligned& v);  // 1625
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 1632
	CIKChainDescription::GetName(); // 395
	ShouldDebugChain(const CIKChainDescription* pDescription); // 1632
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 256
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 256
	VectorAligned::operator-(
			const VectorAligned& v);  // 1625
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1694
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	Dot3SIMD<>(const fltx4& a,
			const fltx4& b);  // 359
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 360
	{
		fltx4 retVal; // 1981
		_mm_cmpgt_ps(__m128 __A,
				__m128 __B);  // 1982
	}
	CmpGtSIMD<>(const fltx4& a,
			const fltx4& b);  // 361
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 362
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
			const fltx4& b);  // 362
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 362
	VectorAligned::NormalizedSafe(
			const VectorAligned& v);  // 351
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 351
	VectorAligned::Normalized(); // 1625
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 1625
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1694
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	Dot3SIMD<>(const fltx4& a,
			const fltx4& b);  // 379
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 380
	VectorAligned::Dot(
		const VectorAligned& v);  // 416
	DotProduct(const VectorAligned& lhs,
			const VectorAligned& rhs);  // 1625
	CIKChainDescription::GetHyperExtensionLockReleaseDotThreshold(); // 1627
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 1646
	CIKChainDescription::GetName(); // 395
	ShouldDebugChain(const CIKChainDescription* pDescription); // 1646
	CUtlString::Get(); // 99
	CUtlString::String(); // 1654
} /* size: 1772, variables: 8, inline expansions: 88 (959 bytes) */

// <01AF332B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1615
// variables: 51
// function calls: 177
bool ShouldBreakLockPostSolve<IK::CAnimPoseWrapper>(const CIKChainDescription* pChainDescription, const CAnimPoseWrapper& boneAccessor, const Vector& vWsNormal)
{
	const char   __FUNCTION__; // 12893
	int nNumBones; // 1619
	const CTransform& xformWsHip; // 1621
	const CTransform& xformWsKnee; // 1622
	const CTransform& xformWsFoot; // 1623
	float flDot; // 1625
	float flHypertensionDot; // 1627
	bool bShouldForceUnlock; // 1629
	{
		float flDegrees; // 1634
		float flMaxDegrees; // 1635
		float flRatioCloseness; // 1636
		VertexColor_t colour; // 1639
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1637
		}
		RAD2DEG(float flRadians); // 1634
		RAD2DEG(float flRadians); // 1635
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1636
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 45
		VertexColor_t::VertexColor_t(
				uint8 ir,
				uint8 ig,
				uint8 ib,
				uint8 ia);  // 63
		CalcRedToGreenRampColor(float flNormalized0To1); // 1639
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 1640
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 1640
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 256
		VectorAligned::operator-(
				const VectorAligned& v);  // 1640
		_mm_cvtss_f32(__m128 __A); // 1496
		GetXSIMD<>(fltx4 a); // 300
		VectorAligned::Length(); // 1640
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 1640
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 1640
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 256
		VectorAligned::operator-(
				const VectorAligned& v);  // 1640
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 1640
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 1640
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 256
		VectorAligned::operator-(
				const VectorAligned& v);  // 1640
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 1640
	}
	{
		float flDegrees; // 1648
		VertexColor_t color; // 1649
		const CTransform  xWs; // 1650
		RAD2DEG(float flRadians); // 1648
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 160
		VertexColor_t::operator*(
				float flScale);  // 1649
		CalculateLockableBoneTransformFromEndEffector(const CIKChainDescription* pDescription,
								const CTransform& xWsEndEffectorToBuildFootlockFrom,
								const CAnimPoseWrapper& poseWrapper);  // 1650
		CIKChainDescription::GetHyperExtensionLockReleaseDotThreshold(); // 1651
		RAD2DEG(float flRadians); // 1651
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 1651
	}
	CIKChainDescription::GetJointVector(); // 1619
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 1619
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 1621
	CIKChainJointData_t::GetBoneIndex(); // 1621
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 1791
	CAnimPoseWrapper::GetWorldSpaceBone(
				int nBoneIndex);  // 1621
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 1622
	CIKChainDescription::GetJointVector(); // 1622
	CIKChainJointData_t::GetBoneIndex(); // 1622
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 1791
	CAnimPoseWrapper::GetWorldSpaceBone(
				int nBoneIndex);  // 1622
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 1623
	CIKChainDescription::GetJointVector(); // 1623
	CIKChainJointData_t::GetBoneIndex(); // 1623
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 1791
	CAnimPoseWrapper::GetWorldSpaceBone(
				int nBoneIndex);  // 1623
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
	CTransform::GetOrigin(); // 1625
	{
		fltx4 retVal; // 1478
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1481
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1479
	}
	SetWSIMD<>(fltx4 a,
			float f);  // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 1625
	{
		fltx4 retVal; // 1981
		_mm_cmpgt_ps(__m128 __A,
				__m128 __B);  // 1982
	}
	CmpGtSIMD<>(const fltx4& a,
			const fltx4& b);  // 361
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1694
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	Dot3SIMD<>(const fltx4& a,
			const fltx4& b);  // 359
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 362
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 360
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
			const fltx4& b);  // 362
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 362
	VectorAligned::NormalizedSafe(
			const VectorAligned& v);  // 351
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 351
	VectorAligned::Normalized(); // 1625
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 1632
	CIKChainDescription::GetName(); // 395
	ShouldDebugChain(const CIKChainDescription* pDescription); // 1632
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 256
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 256
	VectorAligned::operator-(
			const VectorAligned& v);  // 1625
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
	CTransform::GetOrigin(); // 1625
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 1625
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 256
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 256
	VectorAligned::operator-(
			const VectorAligned& v);  // 1625
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 351
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1694
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	Dot3SIMD<>(const fltx4& a,
			const fltx4& b);  // 359
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 360
	{
		fltx4 retVal; // 1981
		_mm_cmpgt_ps(__m128 __A,
				__m128 __B);  // 1982
	}
	CmpGtSIMD<>(const fltx4& a,
			const fltx4& b);  // 361
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 362
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
			const fltx4& b);  // 362
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 362
	VectorAligned::NormalizedSafe(
			const VectorAligned& v);  // 351
	VectorAligned::Normalized(); // 1625
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1694
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	Dot3SIMD<>(const fltx4& a,
			const fltx4& b);  // 379
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 380
	VectorAligned::Dot(
		const VectorAligned& v);  // 416
	DotProduct(const VectorAligned& lhs,
			const VectorAligned& rhs);  // 1625
	CIKChainDescription::GetHyperExtensionLockReleaseDotThreshold(); // 1627
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 1646
	CIKChainDescription::GetName(); // 395
	ShouldDebugChain(const CIKChainDescription* pDescription); // 1646
	CUtlString::Get(); // 99
	CUtlString::String(); // 1654
} /* size: 0, variables: 8, inline expansions: 97 (0 bytes) */

// <01B25777> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1660
void ShouldBreakLockPostSolve(const CIKChainDescription* pChainDescription, const CSpaceAgnosticBoneAccessor& boneAccessor, const Vector& vWsNormal)
{
} /* size: 9 */

// <01B256F5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1665
void ShouldBreakLockPostSolve(const CIKChainDescription* pChainDescription, const CAnimPoseWrapper& boneAccessor, const Vector& vWsNormal)
{
} /* size: 0 */

// <01B23C1A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1670
// variables: 25
// function calls: 117
void SoftenTarget(const CIKChainDescription* pChainDescription, const CSpaceAgnosticBoneAccessor& boneAccessor, const float flCurrentTime, const float flLastSoftenTime, CTransform& xWsTarget)
{
	int nFirstBoneIndex; // 1678
	const float  flTotalBoneLengths; // 1679
	float flStartOfLastSoftenTime; // 1681
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 1678
	CIKChainDescription::GetData(); // 1678
	CIKChainJointData_t::GetBoneIndex(); // 1678
	CIKChainDescription::GetSoftenPercentage(); // 1682
	CIKChainDescription::GetSoftenTime(); // 1682
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 1516
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
	CTransform::GetOrigin(); // 1522
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
	VectorAligned::operator Vector(); // 1522
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 1524
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 256
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 256
	VectorAligned::operator-(
			const VectorAligned& v);  // 1524
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 1524
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 1528
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 1531
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 1539
	{
		const Vector  vWsSoftenThreshold; // 1541
		Vector::Normalized(); // 1541
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1541
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
				const Vector& rhs);  // 1541
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 1541
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
				const VectorAligned& v);  // 1541
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 1541
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 1543
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 1543
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1544
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 1544
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
				const Vector& rhs);  // 1544
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 1544
	}
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 1547
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 256
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 256
	VectorAligned::operator-(
			const VectorAligned& v);  // 1547
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1694
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	Dot3SIMD<>(const fltx4& a,
			const fltx4& b);  // 298
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 299
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 300
	VectorAligned::Length(); // 1547
	{
		const float  flNewLength; // 1554
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1560
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 1560
		VectorAligned::operator fltx4(); // 110
		{
			fltx4 x000; // 1010
			fltx4 y000; // 1011
			fltx4 z000; // 1012
			fltx4 x0y0; // 1013
			_mm_load_ss(const float* __P); // 1010
			_mm_load_ss(const float* __P); // 1011
			_mm_load_ss(const float* __P); // 1012
			_mm_movelh_ps(__m128 __A,
					__m128 __B);  // 1013
		}
		LoadUnaligned3SIMD<>(const void* pSIMD); // 110
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
				const fltx4& w);  // 110
		VectorAligned::operator=(
				fltx4 src);  // 110
		CTransform::SetPosition(
				const Vector& v0);  // 1560
	}
	SoftenTarget<CSpaceAgnosticBoneAccessor>(int nFirstBoneIndex,
						float flTotalBoneLengths,
						float flSoftenTime,
						float flSoftenPercentageRaw,
						const CSpaceAgnosticBoneAccessor& boneAccessor,
						const float  flCurrentTime,
						const float  flLastSoftenTime,
						CTransform& xWsTarget);  // 1682
} /* size: 1099, variables: 3, inline expansions: 53 (1558 bytes) */

// <01B23232> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1689
// variables: 6
// function calls: 32
void CalculateGroundTarget(const CIKChainDescription* pChainDescription, const Quaternion& qWsTilt, const int nTiltBoneIndex, const CTransform& xWsIdealTarget, const CriticallyDampedFloat& collisionZSpring, const CriticallyDampedNormal& collisionNormalSpring, const CAnimPoseWrapper& boneAccessor, int nDebugLevel)
{
	BuildTransformFromCollision(const CAnimPoseWrapper& boneAccessor,
					const CIKChainDescription* pIKChain,
					int nTiltBoneIndex,
					const Quaternion& qWsTilt,
					const Vector& vWsCollisionPosition,
					const Vector& vWsCollisionNormal);  // 1134
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1128
	VectorAligned::y(); // 1128
	{
		const float  flTimeToLive; // 1146
		CLabelledDebugHelper* pDebug; // 1148
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
				const Vector& rhs);  // 1150
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1151
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 1151
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
				const Vector& rhs);  // 1151
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 1151
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
		CTransform::GetOrigin(); // 1153
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
		CTransform::GetOrigin(); // 1154
	}
	CalculateGroundTarget<IK::CAnimPoseWrapper>(const CIKChainDescription* pChainDescription,
							const Quaternion& qWsTilt,
							const int  nTiltBoneIndex,
							const CTransform& xWsIdealTarget,
							const CriticallyDampedFloat& collisionZSpring,
							const CriticallyDampedNormal& collisionNormalSpring,
							const CAnimPoseWrapper& boneAccessor,
							int nDebugLevel);  // 1700
} /* size: 0, inline expansions: 4 (0 bytes) */

// <01B23159> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1703
void ShouldBreakLockPreSolve(const CIKChainDescription* pChainDescription, const CTransform& xWsTarget, const CTransform& xWsLockedEndEffector, const CAnimPoseWrapper& poseWrapper, const Vector& vWsNormal, bool bDebug)
{
} /* size: 0 */

// <01B22FD5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1715
// variables: 2
void DebugDrawFootPlant(const CIKChainDescription* pDescription, const Vector& vWs, const Vector& vNormal, const CSpaceAgnosticBoneAccessor& boneAccessor, const VertexColor_t& color, const float flTimeToLive, const float flBoxScale, const char* pFormatString, ...)
{
	va_list argptr; // 1726
	char buffer; // 1727
} /* size: 268, variables: 2 */

// <01B22B15> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1737
// variables: 3
// function calls: 15
void DebugDrawLocks(IKChainLockState lockState, const CTransform& xWsLock, const CTransform& xWsOriginalEndEffector, CIKUpdateOutputState& outputState, const CIKChainDescription* pDescription, const Vector& vNormal, const float flLockWeight)
{
	const VertexColor_t& lockStateColor; // 1739
	Vector vWsLockToDraw; // 1741
	VertexColor_t footPlantColor; // 1754
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 1741
	VertexColor_t::AsUint32(); // 93
	VertexColor_t::AsUint32Ptr(); // 93
	VertexColor_t::VertexColor_t(
			const VertexColor_t& src);  // 1754
	CalculateLockableBoneTransformFromEndEffector(const CIKChainDescription* pDescription,
							const CTransform& xWsEndEffectorToBuildFootlockFrom,
							const CSpaceAgnosticBoneAccessor& boneAccessor);  // 1750
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 1750
	Vector::operator=(
			const Vector& vOther);  // 1750
} /* size: 465, variables: 3, inline expansions: 15 (81 bytes) */

// <01B2275A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1772
// variable: 1
// function calls: 15
void GetDebugLockColor(const IKChainLockState& lockState)
{
	const VertexColor_t  s_LockColors; // 1774
	VertexColor_t::AsUint32(); // 93
	VertexColor_t::AsUint32Ptr(); // 93
	VertexColor_t::VertexColor_t(
			const VertexColor_t& src);  // 1781
	VertexColor_t::AsUint32(); // 93
	VertexColor_t::AsUint32Ptr(); // 93
	VertexColor_t::VertexColor_t(
			const VertexColor_t& src);  // 1781
	VertexColor_t::AsUint32(); // 93
	VertexColor_t::AsUint32Ptr(); // 93
	VertexColor_t::VertexColor_t(
			const VertexColor_t& src);  // 1781
	VertexColor_t::AsUint32(); // 93
	VertexColor_t::AsUint32Ptr(); // 93
	VertexColor_t::VertexColor_t(
			const VertexColor_t& src);  // 1781
	VertexColor_t::AsUint32(); // 93
	VertexColor_t::AsUint32Ptr(); // 93
	VertexColor_t::VertexColor_t(
			const VertexColor_t& src);  // 1781
} /* size: 175, variables: 1, inline expansions: 15 (63 bytes) */

// <01B56332> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1788
// function calls: 2
void CAnimPoseWrapper::GetWorldSpaceBone(int nBoneIndex)
{
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 1791
} /* size: 100, inline expansions: 2 (23 bytes) */

// <01B2272E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1788
void CAnimPoseWrapper::GetWorldSpaceBone(int nBoneIndex)
{
} /* size: 0 */

// <01B568BE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1794
// function calls: 3
void CAnimPoseWrapper::SetModelSpaceBone(int nBoneIndex, const CTransform& xMs)
{
	CAnimPoseWrapper::IsValidBoneIndex(
			int nBoneIndex);  // 1796
	{
	}
	CAnimPoseWrapper::SetModelSpaceBone(
				int nBoneIndex,
				const CTransform& xMs);  // 1794
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1801
} /* size: 117, inline expansions: 3 (68 bytes) */

// <01B226D7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1794
// variables: 2
void CAnimPoseWrapper::SetModelSpaceBone(int nBoneIndex, const CTransform& xMs)
{
	const char   __FUNCTION__; // 12729
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1798
	}
} /* size: 0, variables: 1 */

// <01B21E29> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1804
// variables: 17
// function calls: 30
void CAnimPoseWrapper::SetWorldSpaceBone(int nBoneIndex, const CTransform& mBoneToWorld)
{
	const char   __FUNCTION__; // 12729
	CTransform xMs; // 1811
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1808
	}
	CAnimPoseWrapper::IsValidBoneIndex(
			int nBoneIndex);  // 1806
	QuaternionAligned::operator fltx4(); // 258
	VectorAligned::operator fltx4(); // 258
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 1811
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
			const fltx4& b);  // 392
	QuaternionAligned::operator fltx4(); // 397
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 393
	{
		fltx4 retVal; // 1851
		_mm_cmpeq_ps(__m128 __A,
				__m128 __B);  // 1852
	}
	CmpEqSIMD<>(const fltx4& a,
			const fltx4& b);  // 395
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 397
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
			const fltx4& b);  // 397
	QuaternionAligned::Normalize(); // 1812
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1813
} /* size: 276, variables: 2, inline expansions: 15 (189 bytes) */

// <01B56A35> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1816
// function calls: 3
void CAnimPoseWrapper::SetParentSpaceBone(int nBoneIndex, const CTransform& xPsBone)
{
	CAnimPoseWrapper::IsValidBoneIndex(
			int nBoneIndex);  // 1818
	{
	}
	CAnimPoseWrapper::SetParentSpaceBone(
				int nBoneIndex,
				const CTransform& xPsBone);  // 1816
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1823
} /* size: 117, inline expansions: 3 (68 bytes) */

// <01B21DD2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1816
// variables: 2
void CAnimPoseWrapper::SetParentSpaceBone(int nBoneIndex, const CTransform& xPsBone)
{
	const char   __FUNCTION__; // 12756
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1820
	}
} /* size: 0, variables: 1 */

// <01B5620E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1826
// function calls: 4
void CAnimPoseWrapper::GetParentSpaceBone(int nBoneIndex)
{
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1828
	CUtlMemory<CTransform, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
			int i);  // 121
	CAnimPose::GetLocalSpaceTransform(
				BoneIndex_t boneIndex);  // 1828
} /* size: 53, inline expansions: 4 (21 bytes) */

// <01B21DAC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1826
void CAnimPoseWrapper::GetParentSpaceBone(int nBoneIndex)
{
} /* size: 0 */

// <01B21D18> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1831
// function call: 1
void CAnimPoseWrapper::GetModelSpaceBone(int nBoneIndex)
{
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1833
} /* size: 66, inline expansions: 1 (0 bytes) */

// <01B5EAF0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1836
void CAnimPoseWrapper::IsValidBoneIndex(int nBoneIndex)
{
} /* size: 0 */

// <01B21672> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikutil.cpp:1841
// variables: 4
// function calls: 22
void CAnimPoseWrapper::DebugRender(IAnimationDebugRenderer* pRenderer, const VertexColor_t color)
{
	{
		int n; // 1845
		{
			int nParent; // 1847
			{
				const Vector  v1; // 1851
				const Vector  v2; // 1852
				CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
				ConcatTransforms(const CTransform  in1,
						const CTransform  in2);  // 1791
				CAnimPoseWrapper::GetWorldSpaceBone(
							int nBoneIndex);  // 1851
				VectorAligned::operator fltx4(); // 71
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 71
				CTransform::GetOrigin(); // 1851
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 1851
				CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
				ConcatTransforms(const CTransform  in1,
						const CTransform  in2);  // 1791
				CAnimPoseWrapper::GetWorldSpaceBone(
							int nBoneIndex);  // 1852
				VectorAligned::operator fltx4(); // 71
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 71
				CTransform::GetOrigin(); // 1852
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 1852
				VectorAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 31
				VectorAligned::VectorAligned(
						const Vector& rhs);  // 1854
				VectorAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 31
				VectorAligned::VectorAligned(
						const Vector& rhs);  // 1854
			}
			CAnimPoseWrapper::GetModel(); // 1847
		}
		CAnimPoseWrapper::GetModel(); // 1845
	}
} /* size: 0 */

